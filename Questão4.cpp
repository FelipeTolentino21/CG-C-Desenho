// =========== EXERCÍCIO - QUESTÃO 4 ===========

#include <GL/glut.h>
#include <math.h>

float posicaoX; // Posição a ser mudada no eixo x
float posicaoY; // Posição a ser mudada no eixo y
float direcao = 1.0; // Muda de 1.0 para -1.0 de acordo com a direção

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glTranslatef(posicaoX, posicaoY, 0);
	
	glBegin(GL_QUADS);
		glColor3f(94.0/256.0, 0.0, 153.0/256.0); // Roxo

		//Posição Inicial do quadrado
		glVertex2f(-6, 1);
		glVertex2f(-6, -1);
		glVertex2f(-4, -1);
		glVertex2f(-4, 1);
	glEnd();

	glFlush();
}

void atualizar(int valor)
{
	// Atualizar a posição do quadrado
	posicaoX += 0.1 * direcao; // Velocidade vezes a direção em que o quadrado irá

	// Inverter a direção se atingir as bordas
	if (posicaoX >= 1.0 || posicaoX <= -1.0) {
		direcao *= -1.0;
	}

	// Redesenha a cena
	glutPostRedisplay();

	// Definir o próximo intervalo de atualização, definido por milisegundos
	glutTimerFunc(30, atualizar, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Animacao");
	glutDisplayFunc(desenho);
	glutTimerFunc(0, atualizar, 0); // Inicia a função de temporização
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}
