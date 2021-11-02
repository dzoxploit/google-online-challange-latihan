#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>


void display();
void reshape(int, int);
void timer(int);

void myinit(){
	glClearColor(0.0, 0.0, 0.0, 1.0);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(600,600);
	glutCreateWindow("Pertemuan 3");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(1000,timer, 0);
	myinit();
	glutMainLoop();
}

float x_position = -10.0;
int state = 1;

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	
	glBegin(GL_POLYGON);
	glVertex2f(x_position, 1.0);
	glVertex2f(x_position, -1.0);
	glVertex2f(x_position+2.0, -1.0);
	glVertex2f(x_position+2.0, 1.0);
	
	glEnd();
	glutSwapBuffers();
}

void reshape(int w, int h){
	glViewport(0,0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}

void timer(int){
	glutPostRedisplay();
	glutTimerFunc(1000/60, timer, 0);
	switch(state){
		case 1:
			if(x_position<8)
				x_position += 0.15;
			else
				state = -1;
			break;
		case -1:
			if(x_position>-10)
				x_position -= 0.15;
			else
				state = 1;
			break;
			
	}
}
