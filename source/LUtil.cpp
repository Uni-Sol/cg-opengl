#include "include/LUtil.h"

int initGL() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glClearColor(0.f, 0.f, 0.f, 1.f);
	
	GLenum error = glGetError();
	if( error != GL_NO_ERROR ){
		printf( "Error: %s\n", gluErrorString(error) );
		return 0;
	}

	return 1;
}

void update() {}

void render() {
	glClear(GL_COLOR_BUFFER_BIT);
	
/*
	glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f); 
		glVertex2f(0.5f, -0.5f); 
		glVertex2f(0.5f, 0.5f); 
		glVertex2f(-0.5f, 0.5f);
	glEnd();
*/
	
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.8f, 0.8f);
		glVertex2f(0.8f, 0.8f);
		glVertex2f(0.0f, -0.8f);
	glEnd();
	
	glutSwapBuffers();
}
