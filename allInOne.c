#include <GL/glut.h>

void init (void)
{
 
   glClearColor( 1.0, 1.0, 1.0, 0.0 );  // Set display-window color to white
   
   glMatrixMode (GL_PROJECTION);        // Set projection parameters
   glOrtho2D (0.0, 200.0, 0.0, 150.0);
}


