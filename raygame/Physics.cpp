#include "Physics.h"

PhysicsObject::PhysicsObject()
{
	Position = {0,0};
	Velocity = { 0,0 };

	Mass = 1;
	IsStatic = false;
	UseGravity = true;
}

void PhysicsObject::Draw()
{
	// this will depend on the shape of the physics object
}
