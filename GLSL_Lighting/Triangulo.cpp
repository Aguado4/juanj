#include "Triangulo.h"

void Triangulo::DibujarTriangulo(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {
	glPushMatrix();
        glBegin(GL_TRIANGLES);
        glVertex3f(x1, y1, z1);
        glVertex3f(x2, y2, z2);
        glVertex3f(x3, y3, z3);
        glEnd();
    glPopMatrix();
}