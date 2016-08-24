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

void main (int argc, char** argv)
{
   glutInit (&argc, argv);            // Initialize GLUT
   glutInitDisplayMode(GLUT_SINGLE);  // Set single buffering display mode
   glutInitWindowPosition(50, 100);   // Set top left display window position
   glutInitWindowSize(400, 300);      // Set width and height of display window
   glutCreateWindow ("An Example OpenGL Program"); // Create display window

   init();                          // Execute initialization procedure
   glutDisplayFunc(lineSegment);    // Send graphics to display window
   glutMainLoop ();                 // Display everything and wait

}
   
