#pragma once
#include "raylib.h"

class PhysicsObject
{
public:
	PhysicsObject();
	Vector2 Position;
	Vector2 Velocity;

	float Mass;
	float IsStatic;
	bool UseGravity;
	//TODO: add shape/collider

	void Draw();

	//TODO: Add functions for applying force

	//TODO: add callbacks for OnCollisionEnter, Exit, Stay
};

