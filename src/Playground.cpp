#include "Playground.hpp"
#include <glad/glad.h>

void Init()
{
	glClearColor(1.0, 1.0, 0.882, 0.0);
}

void Draw()
{
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.369f, 0.369f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.5f, -0.5f);
	glEnd();
}

void Exit()
{
}