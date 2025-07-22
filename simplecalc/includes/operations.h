/**
 * @file operations.h
 * @author Mao, Smith zedonglayer@protonmail.com
 * @brief headerfile for operations.c
 * @version 0.1
 * @date 2025-07-22
 * 
 * 
 * 
 */

/* TODO
double check if float is too much
google says <float.h> has FLT_MAX, so

or we could trim it down to to 5 decimal places for simplicity.
*/

#include <float.h>
extern const int debug_on;

extern int x;
extern int y;

//debatable
int check_max(float number);
void debug(const char *message);

//main functions
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);
float modulo(float x, float y);
