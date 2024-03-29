#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include "./keyboard_pointer.h"

// Set the background color and matrix mode
void initialize(void){
    glClearColor(1, 1, 1, 1); // White color
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 700, 0, 700); // 700x700
}

// Main function
void draw(void){
    glClear(GL_COLOR_BUFFER_BIT);
        cube();
    glFlush();
}

// Function for draw a cube
void cube(){
    glColor3i(0, 0, 0); // Black color
    glBegin(GL_QUADS);
    
        // Side 1
        glVertex2i(350, 399);
        glVertex2i(462, 460);
        glVertex2i(350, 522);
        glVertex2i(238, 460);
        
        // Side 2
        glVertex2i(350, 399);
        glVertex2i(238, 460);
        glVertex2i(238, 319);
        glVertex2i(350, 257);
        
        // Side 3
        glVertex2i(350, 399);
        glVertex2i(350, 257);
        glVertex2i(462, 319);
        glVertex2i(462, 460);
    glEnd();
}

// Function for keyboard event
void keyboard_mt(unsigned char k, int x, int y){
    if (k){
        glColor3f(1.0, 1.0, 1.0); // White color
        glBegin(GL_LINES);
        
            // Line 1
            glVertex2f(238, 460);
            glVertex2f(350, 399);
            
            // Line 2
            glVertex2f(462, 460);
            glVertex2f(350, 399);
            
            // Line 3
            glVertex2f(350, 257);
            glVertex2f(350, 399);
        glEnd();
        glFlush();
    }
}

// Function for pointer event
void pointer_mt(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        glColor3f(0, 0, 0); // Black color
        // Drawing name
        glRasterPos2i(325, 200);
        glutBitmapString(GLUT_BITMAP_HELVETICA_18, "Cube");
        glFlush();
    }
}