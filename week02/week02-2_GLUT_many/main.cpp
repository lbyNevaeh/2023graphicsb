#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);
        glVertex2f((67-100)/100.0,-(41-100)/100.0);
        glVertex2f((124-100)/100.0,-(42-100)/100.0);
        glVertex2f((47-100)/100.0,-(97-100)/100.0);
        glVertex2f((91-100)/100.0,-(141-100)/100.0);
        glVertex2f((142-100)/100.0,-(103-100)/100.0);
    glEnd();

	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("WEEK02");
	glutDisplayFunc(display);
	glutMainLoop();
}
