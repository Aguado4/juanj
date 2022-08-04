#include "Tetera.h"

void Tetera::DibujarTetera(float size, float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glutSolidTeapot(size);
	glPopMatrix();
}