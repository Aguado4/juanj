#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
class Triangulo
{
public:
	Triangulo(){}
	void DibujarTriangulo(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);
};

