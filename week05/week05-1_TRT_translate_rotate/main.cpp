#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glColor3f(1,0,0);
    glPushMatrix();
        glRotatef(angle,0,0,1);///改成Z軸在旋轉
        glTranslatef(0.8,0,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    ///紅色:自轉加周轉

    glColor3f(0,1,0);
    glPushMatrix();
        glTranslatef(0.8,0,0);
        glRotatef(angle*1.5,0,0,1);///改成Z軸在旋轉
                 ///調整速度
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    ///綠色:自轉

	glutSwapBuffers();
	angle++;
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week04");
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutMainLoop();
}
