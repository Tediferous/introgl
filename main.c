#include "headers.h"

#include "prototypes.h"

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
   
