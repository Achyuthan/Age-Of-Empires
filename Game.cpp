#include <OpenSG/OSGGLUT.h>
#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/OSGGLUTWindow.h>
#include <OpenSG/OSGSimpleSceneManager.h>

OSG_USING_NAMESPACE

SimpleSceneManager *mgr;

int setupGLUT( int *argc, char *argv[] );

int main(int argc, char **argv)
{
    osgInit(argc,argv);

    int winid = setupGLUT(&argc, argv);

    GLUTWindowPtr gwin= GLUTWindow::create();
    gwin->setId(winid);
    gwin->init();

    NodePtr scene = makeTorus(.5, 2, 16, 16);

    mgr = new SimpleSceneManager;

    mgr->setWindow(gwin );
    mgr->setRoot  (scene);

    mgr->showAll();
    
    glutMainLoop();

    return 0;
}

void display(void)
{
    mgr->redraw();
}

void reshape(int w, int h)
{
    mgr->resize(w, h);
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (state)
        mgr->mouseButtonRelease(button, x, y);
    else
        mgr->mouseButtonPress(button, x, y);
        
    glutPostRedisplay();
}

void motion(int x, int y)
{
    mgr->mouseMove(x, y);
    glutPostRedisplay();
}

void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:        
        {
            OSG::osgExit();
            exit(0);
        }
        break;
    }
}

int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    
    int winid = glutCreateWindow("OpenSG");
    
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    return winid;
}
