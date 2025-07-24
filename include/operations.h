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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_OPERAND_STR_LEN 5
#define MULTIPLICATION_ZERO_ERROR 59 //not really
#define DIVISION_ZERO_ERROR 60
#define ADDITION_ERROR 61
#define SUBTRACTION_ERROR 62
#define MULTIPLICATION_ERROR 63
#define DIVISION_ERROR 64
#define UNKNOWN_ERROR 999

extern int debug_on;


extern __INT32_TYPE__ xxx;
extern __INT32_TYPE__ yyy;


//debatable
void debug();
void usage();
int check_min_max(long xxx, long yyy);
int check_valid_input(__INT32_TYPE__ xxx, char operand, __INT32_TYPE__ yyy);


//main functions
__INT32_TYPE__ calculate(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy);
__INT32_TYPE__ add(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ subtract(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ multiply(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ jet2holiday();
__INT32_TYPE__ divide(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ modulo(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy);
