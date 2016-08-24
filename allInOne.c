#include <GL/glut.h>

void init (void)
{
 
   glClearColor( 1.0, 1.0, 1.0, 0.0 );  // Set display-window color to white
   
   glMatrixMode (GL_PROJECTION);        // Set projection parameters
   glOrtho2D (0.0, 200.0, 0.0, 150.0);
}

void lineSegment (void)
{

   glClear ( GL_COLOR_BUFFER_BIT );  // Clear display window

   glColor3f ( 0.0, 0.4, 0.2 );      // Set line segment color to green
   glBegin (GL_LINES);
      glVertex2i( 180, 15 );
      glVertex2i( 10, 145 );
   glEnd ();

   glFlush();

} 