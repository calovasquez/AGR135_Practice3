/* 
 * File:   keyboard_pointer.h
 * Author: vasquez
 *
 * Created on March 24, 2024, 9:41 PM
 */

#ifndef KEYBOARD_POINTER_H
#define KEYBOARD_POINTER_H

#ifdef __cplusplus
extern "C" {
#endif



#ifdef __cplusplus
}
#endif
// Headers
void initialize(void); // Projection function
void draw(void); // Main function
void cube(); // Function where the cube is drawn
void keyboard_mt(unsigned char,int,int); // Keyboard event function
void pointer_mt(int,int,int,int); // Pointer event function
#endif /* KEYBOARD_POINTER_H */