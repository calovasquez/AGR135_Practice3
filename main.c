/* 
 * File:   main.c
 * Author: vasquez
 *
 * Created on March 24, 2024, 8:18 PM
 */

/*
 * Added in Linker: -lGL -lglut -lGLU
 */

#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include "./keyboard_pointer.h"

/*
 * This practice 3 consists of using keyboard and pointer events using OpenGL
 */

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(375, 55);
    glutInitWindowSize(700, 700);
    glutCreateWindow("AGR135 - Practice 3 - VG21009"); // Added carnet
    glClearColor(1, 1, 1, 1); // White color
    initialize();
    glutDisplayFunc(draw);
    glutKeyboardFunc(keyEvent);
    glutMouseFunc(mouseEvent);
    glutMainLoop();
    return (EXIT_SUCCESS);
}

