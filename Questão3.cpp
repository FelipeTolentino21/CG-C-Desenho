// =========== EXERCÍCIO - QUESTÃO 3 ===========

#include <GL/glut.h>
#include <math.h>

float posicaoX; // Posição a ser mudada no eixo x
float posicaoY; // Posição a ser mudada no eixo y

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glTranslatef(posicaoX, posicaoY, 0);
	
	glBegin(GL_QUADS);
		glColor3f(1, 0, 0); // Vermelho
		glVertex2f(-3, -3);
		glVertex2f(-3, 3);
		glVertex2f(3, 3);
		glVertex2f(3, -3);
	glEnd();

	glFlush();
}

void teclado(unsigned char tecla, int x, int y) {

	// 32 = Barra de espaço na tabela ASCII
	if (tecla == 32) {
		posicaoX = 0.0;
		posicaoY = 0.3;
		glutPostRedisplay(); // Função que muda o display
	}

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Input");
	glutDisplayFunc(desenho);
	glutKeyboardFunc(teclado);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
