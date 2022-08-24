#pragma once
#include "raylib.h"

class BaseGame
{
public:
	BaseGame();

	float targetFixedStep;
	float accumulatedFixedTime;

	void Init();
	void Update();
	void FixedUpdate();
	bool ShouldFixedUpdate();
};

