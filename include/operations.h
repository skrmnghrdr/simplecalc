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
#include <math.h>

#define MAX_OPERAND_STR_LEN 5
#define UINT32_MIN 0 //lmaoooooo
//define struct flag
#define PRINT_UINT 1
#define PRINT_INT 2
//define error codes
#define CHECK_INT_MIN_MAX_ERROR 57
#define CHECK_UINT_MIN_MAX_ERROR 58
#define MULTIPLICATION_ZERO_ERROR 59 
#define DIVISION_ZERO_ERROR 60
#define ADDITION_ERROR 61
#define SUBTRACTION_ERROR 62
#define MULTIPLICATION_ERROR 63
#define DIVISION_ERROR 64
#define SHIFT_ERROR 65
#define UNKNOWN_ERROR 999

extern int debug_on;


extern __INT32_TYPE__ xxx;
extern __INT32_TYPE__ yyy;

//debatable
void debug();
void usage();
int int_check_min_max(long xxx, long yyy);
int uint_check_min_max(long xxx, long yyy);
int check_valid_input(__INT32_TYPE__ xxx, char operand, __INT32_TYPE__ yyy);

//use the struct strictly for output, do not work with it
typedef struct results{
    int flag;
    __INT32_TYPE__ int32_result;
    __UINT32_TYPE__ uint32_result;
} results;

//main functions
void calculate(long xxx, char *operand, long yyy, int *ptr_calc_error,  results *ptr_struct_result);
__INT32_TYPE__ add(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ subtract(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ multiply(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ jet2holiday();
__INT32_TYPE__ divide(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error);
__INT32_TYPE__ modulo(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy);

//bitwise
__UINT32_TYPE__ bitwise_and(__UINT32_TYPE__ first_num, __UINT32_TYPE__ second_num, int *calc_error);
__UINT32_TYPE__ bitwise_or(__UINT32_TYPE__ first_num, __UINT32_TYPE__ second_num, int *calc_error);
__UINT32_TYPE__ bitwise_exclusive_or(__UINT32_TYPE__ first_num, __UINT32_TYPE__ second_num, int *calc_error);


__UINT32_TYPE__ shift_left(__UINT32_TYPE__ number, __UINT32_TYPE__ bits, int *calc_error);
__UINT32_TYPE__ shift_right(__UINT32_TYPE__ number, __UINT32_TYPE__ bits, int *calc_error);