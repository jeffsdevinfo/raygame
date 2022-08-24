#include "BaseGame.h"

BaseGame::BaseGame()
{
	accumulatedFixedTime = 0;
	targetFixedStep = 1.0f / 30.0f;

}

void BaseGame::Init()
{
	// Initialization
//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);	
	//TODO: Initiaize BaseGame
}

void BaseGame::Update()
{
	accumulatedFixedTime += GetFrameTime();

	//TODO: add any behavior that occurs during update

}

void BaseGame::FixedUpdate()
{
	accumulatedFixedTime -= targetFixedStep;

	//TODO: all of our physics stuff
}

bool BaseGame::ShouldFixedUpdate()
{
	return accumulatedFixedTime >= targetFixedStep;
}

