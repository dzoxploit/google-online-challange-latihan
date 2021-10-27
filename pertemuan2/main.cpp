#include <GL/glut.h>

void display(void){
	glClearColor(5.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,5.0);
	
	glBegin(GL_TRIANGLES);
	glVertex2f(0.2,0.2);
	glVertex2f(0.8,0.2);
	glVertex2f(0.6,0.4);
	
	glVertex2f(0.2,0.2);
	glVertex2f(0.8,0.2);
	glVertex2f(0.6,0.4);
	
	glEnd();
	glFlush();
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutCreateWindow("Didin Nur Yahya - 5141788");
	glutInitWindowSize(480,480);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
