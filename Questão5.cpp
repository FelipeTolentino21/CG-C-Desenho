#include <GL/glut.h>
#include <math.h>

float rotation_angle = 0.0;

void desenho()
{
    glClear(GL_COLOR_BUFFER_BIT);

    float raio = 4.0;
    int num_segmentos = 50;

    glBegin(GL_TRIANGLE_FAN);
    
    // Cor inicial do degradê (azul escuro)
    glColor3f(0.0 / 256.0, 0.0 / 256.0, 40.0 / 256.0);
    glVertex2f(0.0, 0.0);

    // Desenhar o círculo com um degradê de cor
    for (int i = 0; i <= num_segmentos; ++i) {
        float angulo = i * 2.0f * 3.14159f / num_segmentos;
        float x = raio * cos(angulo + rotation_angle); // Adicionar o ângulo de rotação
        float y = raio * sin(angulo + rotation_angle);

        // Cor variando do azul escuro para o azul claro
        float cor_b = (51.0 + i * (250.0 / num_segmentos)) / 256.0;
        glColor3f(0.0/256.0 , 0.0/256.0, cor_b);

        glVertex2f(x, y);
    }
    glEnd();

    glFlush();
}

void atualizar(int value)
{
    rotation_angle += 0.05; // Incrementa o ângulo de rotação
    glutPostRedisplay(); // Solicita uma nova renderização
    glutTimerFunc(16, atualizar, 0); // Define a função de atualização para ser chamada novamente
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(345, 20);
    glutCreateWindow("mama");
    glutDisplayFunc(desenho);
    gluOrtho2D(-7, 7, -7, 7);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutTimerFunc(0, atualizar, 0); // Inicia a função de atualização
    glutMainLoop();
    return 0;
}
