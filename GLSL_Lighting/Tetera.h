#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Tetera
{
public:
	Tetera() {}
	void DibujarTetera(float size, float x, float y, float z);
};
