// =========== EXERC�CIO - QUEST�O 2 ===========

#include <GL/glut.h>
#include <math.h> // Biblioteca para usar Seno e Cosseno

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	// Primeiro Circulo (Azul Escuro)
	float raio = 4.0; // Define o raio do c�rculo
	int num_segmentos = 50; // Define o n�mero de segmentos que formar�o o c�rculo

	glBegin(GL_TRIANGLE_FAN); // � utilizada uma fun��o do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um c�rculo
	
	glColor3f(0.0/256.0, 0.0/256.0, 51.0/256.0); // Azul Escuro
	glVertex2f(0.0, 0.0); // Centro do c�rculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o �ngulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no c�rculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no c�rculo
		glVertex2f(x, y); // Adiciona o ponto ao c�rculo
	}
	glEnd();

	// Segundo Circulo (Azul Claro)
	raio = 3.0; // Define o raio do c�rculo
	num_segmentos = 50; // Define o n�mero de segmentos que formar�o o c�rculo

	glBegin(GL_TRIANGLE_FAN); // � utilizada uma fun��o do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um c�rculo

	glColor3f(0.0 / 256.0, 0.0 / 256.0, 153.0 / 256.0); // Azul Claro
	glVertex2f(0.0, 0.0); // Centro do c�rculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o �ngulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no c�rculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no c�rculo
		glVertex2f(x, y); // Adiciona o ponto ao c�rculo
	}
	glEnd();

	// Terceiro Circulo (Azul Escuro)
	raio = 2.0; // Define o raio do c�rculo
	num_segmentos = 50; // Define o n�mero de segmentos que formar�o o c�rculo

	glBegin(GL_TRIANGLE_FAN); // � utilizada uma fun��o do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um c�rculo

	glColor3f(0.0 / 256.0, 0.0 / 256.0, 51.0 / 256.0); // Azul Escuro
	glVertex2f(0.0, 0.0); // Centro do c�rculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o �ngulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no c�rculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no c�rculo
		glVertex2f(x, y); // Adiciona o ponto ao c�rculo
	}
	glEnd();

	// Quarto Circulo (Branco)
	raio = 1.0; // Define o raio do c�rculo
	num_segmentos = 50; // Define o n�mero de segmentos que formar�o o c�rculo

	glBegin(GL_TRIANGLE_FAN); // � utilizada uma fun��o do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um c�rculo

	glColor3f(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0); // Branco
	glVertex2f(0.0, 0.0); // Centro do c�rculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o �ngulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no c�rculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no c�rculo
		glVertex2f(x, y); // Adiciona o ponto ao c�rculo
	}
	glEnd();


	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(345, 20);
	glutCreateWindow("mama"); // Nome que estava na janela da quest�o 2
	glutDisplayFunc(desenho);
	gluOrtho2D(-7, 7, -7, 7); // Redimensionamento da aba para aumentar o tamanho do s�mbolo
	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glutMainLoop();
	return 0;
}
