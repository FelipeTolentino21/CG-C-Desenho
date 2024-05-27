/*		----------------- TRIANGULO (com degradê) -----------------
#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
	
	// glPointSize(10.0f); // Aumenta o tamanho dos pontos
	
	glLineWidth(5);

	glBegin(GL_TRIANGLES);

		glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
		glVertex2f(-8, -5);
		glVertex2f(8, -5);
		glColor3f(0.0f, 1.0f, 0.0f); // Verde
		glVertex2f(-8, 0);

		glColor3f(0.0f, 1.0f, 0.0f); // Verde
		glVertex2f(8, 0);
		glVertex2f(-8, 5);
		glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
		glVertex2f(8, 5);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
*/

/*		----------------- QUADRADO (com degradê) -----------------
#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f); // vermelho
	
	//glPointSize(10.0f); // aumenta o tamanho dos pontos
	
	glLineWidth(5);

	glBegin(GL_QUADS);

		glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
		glVertex2f(-8, -5);
		glVertex2f(8, -5);
		glColor3f(0.0f, 1.0f, 0.0f); // Verde
		glVertex2f(8, 0);
		glVertex2f(-8, 0);

		glColor3f(0.0f, 1.0f, 0.0f); // Verde
		glVertex2f(-8, 5);
		glVertex2f(8, 5);
		glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
		glVertex2f(8, 8);
		glVertex2f(-8, 8);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
*/

/*		----------------- TRIANGULOS GIRANDO -----------------
#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f); // Vermelho

	//glPointSize(10.0f); // Aumenta o tamanho dos pontos

	glLineWidth(5);

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(0, 0);	// Ponto inicial que se aplica aos pontos seguintes
		glVertex2f(-4, -5);
		glVertex2f(-6, -3);

		glVertex2f(-8, 0);
		glVertex2f(-6, 3);
		glVertex2f(-4, 5);
		glVertex2f(4, 5);
		glVertex2f(6, 3);
		glVertex2f(8, 0);
		glVertex2f(6, -3);
		glVertex2f(4, -5);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
*/

/*		----------------- EXERCÍCIO 1 (CASINHA) -----------------
#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f); // Vermelho

	//glPointSize(10.0f); // Aumenta o tamanho dos pontos

	glLineWidth(5);

	//CASA
	glBegin(GL_QUADS);

		glColor3f(1.0f, 0.7f, 0.0f); // Amarelo (Escala RGB dividida por 256, exemplo, 190/256 = 0,74f)
		glVertex2f(-6, -5);
		glVertex2f(6, -5);
		glVertex2f(6, 2);
		glVertex2f(-6, 2);
	
	glEnd();

	//PORTA
	glBegin(GL_QUADS);

	glColor3f(0.3f, 0.3f, 1.0f); // Azul
	glVertex2f(-4, -5);
	glVertex2f(-2, -5);
	glVertex2f(-2, -2);
	glVertex2f(-4, -2);

	glEnd();

	//JANELA
	glBegin(GL_QUADS);

	glColor3f(0.3f, 0.7f, 0.4f); // Verde
	glVertex2f(1, -2);
	glVertex2f(4, -2);
	glVertex2f(4, 0);
	glVertex2f(1, 0);

	glEnd();

	//TELHADO
	glBegin(GL_TRIANGLES);

		glColor3f(0.7f, 0.04f, 0.04f); // Vermelho
		glVertex2f(-6, 2);
		glVertex2f(6, 2);
		glVertex2f(0, 6);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
*/
/*		----------------- TRANSLATE / ROTATE / SCALE -----------------
#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	//glTranslatef(0.1, 0, 0);
	//glRotatef(1, 0, 0, 1);
	glScalef(1.001, 1.001, 1);

	glColor3f(1.0f, 0.0f, 0.0f); // vermelho
	//glPointSize(10.0f); // aumenta o tamanho dos pontos
	glLineWidth(5);
	glBegin(GL_QUADS);
	glVertex2f(-3, -3);
	glVertex2f(-3, 3);
	glVertex2f(3, 3);
	glVertex2f(3, -3);
	glEnd();

	glFlush();
}
void anima(int timer) {
	glutPostRedisplay();
	glutTimerFunc(10, anima, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Transformacoes");
	glutDisplayFunc(desenho);
	glutTimerFunc(10, anima, 0);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
*/

#include <GL/glut.h>
#include <math.h>

void circle(float radius) {
	float angle;
	int i;
	glBegin(GL_POLYGON);
	for (i = 0; i < 360; i++) {
		angle = i * 3.14159 / 180;
		glVertex2f(radius * cos(angle), radius * sin(angle));
	}
	glEnd();
}

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glTranslatef(0.1, 0, 0);
	//glRotatef(1, 0, 0, 1);
	glScalef(1.001, 1.001, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glLineWidth(5);
	circle(5);
	/*
	glBegin(GL_QUADS);
		glVertex2f(-3, -3);
		glVertex2f(-3, 3);
		glVertex2f(3, 3);
		glVertex2f(3, -3);
	glEnd();
	*/
	glFlush();
}

void anima(int timer) {
	glutPostRedisplay();
	glutTimerFunc(10, anima, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Transformacoes");
	glutDisplayFunc(desenho);
	glutTimerFunc(10, anima, 0);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
