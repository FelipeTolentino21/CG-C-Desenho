// =========== EXERCÍCIO - QUESTÃO 2 ===========

#include <GL/glut.h>
#include <math.h> // Biblioteca para usar Seno e Cosseno

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	// Primeiro Circulo (Azul Escuro)
	float raio = 4.0; // Define o raio do círculo
	int num_segmentos = 50; // Define o número de segmentos que formarão o círculo

	glBegin(GL_TRIANGLE_FAN); // É utilizada uma função do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um círculo
	
	glColor3f(0.0/256.0, 0.0/256.0, 51.0/256.0); // Azul Escuro
	glVertex2f(0.0, 0.0); // Centro do círculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o ângulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no círculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no círculo
		glVertex2f(x, y); // Adiciona o ponto ao círculo
	}
	glEnd();

	// Segundo Circulo (Azul Claro)
	raio = 3.0; // Define o raio do círculo
	num_segmentos = 50; // Define o número de segmentos que formarão o círculo

	glBegin(GL_TRIANGLE_FAN); // É utilizada uma função do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um círculo

	glColor3f(0.0 / 256.0, 0.0 / 256.0, 153.0 / 256.0); // Azul Claro
	glVertex2f(0.0, 0.0); // Centro do círculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o ângulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no círculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no círculo
		glVertex2f(x, y); // Adiciona o ponto ao círculo
	}
	glEnd();

	// Terceiro Circulo (Azul Escuro)
	raio = 2.0; // Define o raio do círculo
	num_segmentos = 50; // Define o número de segmentos que formarão o círculo

	glBegin(GL_TRIANGLE_FAN); // É utilizada uma função do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um círculo

	glColor3f(0.0 / 256.0, 0.0 / 256.0, 51.0 / 256.0); // Azul Escuro
	glVertex2f(0.0, 0.0); // Centro do círculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o ângulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no círculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no círculo
		glVertex2f(x, y); // Adiciona o ponto ao círculo
	}
	glEnd();

	// Quarto Circulo (Branco)
	raio = 1.0; // Define o raio do círculo
	num_segmentos = 50; // Define o número de segmentos que formarão o círculo

	glBegin(GL_TRIANGLE_FAN); // É utilizada uma função do Glut para criar um ponto em comum e "girar" ao redor dele, fazendo um círculo

	glColor3f(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0); // Branco
	glVertex2f(0.0, 0.0); // Centro do círculo

	// For para "girar" ao redor do centro e criar os segmentos de acordo
	for (int i = 0; i <= num_segmentos; ++i) {
		float angulo = i * 2.0f * 3.14159f / num_segmentos; // Calcula o ângulo de cada segmento
		float x = raio * cos(angulo); // Calcula a coordenada x do ponto no círculo
		float y = raio * sin(angulo); // Calcula a coordenada y do ponto no círculo
		glVertex2f(x, y); // Adiciona o ponto ao círculo
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
	glutCreateWindow("mama"); // Nome que estava na janela da questão 2
	glutDisplayFunc(desenho);
	gluOrtho2D(-7, 7, -7, 7); // Redimensionamento da aba para aumentar o tamanho do símbolo
	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glutMainLoop();
	return 0;
}
