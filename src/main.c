/**
 * @file main.c
 * @author Mulan, notagmailemail@protonmail.com
 * @brief 
 * @version 0.1
 * @date 2025-07-21
 * 
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <float.h>
#include <errno.h>
#include "operations.h"

/*
ake 3 arguments that forms an equation: (operand1) (operator) (operand2)
NOTE: operands and operators are separated by a single space.
NOTE: these are 3 separate arguments - do not wrap with quotes


I might need to use strtok to implement str.split()
should run something like ./simplecalc 1+1
shoud be the correct answer or some descriptive failure message

the ops should have 
all the add, sub, mul, div, modulo function
included is 
SHL << SHR >> AND & OR | XOR ^, rotate left <<< rotate right >>>

add int32_t
sub 
mul
div
mod

shl uint32_t
and the rest would be uint32_t
have a build script called build.sh to run this

addedd:
shift hand left function
added uint check
addedd goto end error
added more error definition
reduced amount of return statements
added shift hand right functionality,
addedd bitwise and
addedd bitwise or 
addedd bitwise exclusive or
removed value check in main, moved to operations.c for future reuseage 

todo:

do the opearand swtich case/if else 
do the rotation and
DO NOT FORGET THE MODULO.
 


*/
void print_debug_args(){
    printf("Addition integer overflow: \nset args 2147483647  test 100\n");
    printf("Addition UNDERFLOW:\n set args -2147483648 test -100\n");
    printf("Subtraction int overflow:\nset args 2147483640 test -100\n");
    printf("Subtraction int UNDERFLOW:\nset args -2147483640 test 100\n");
    printf("Multiplication OVERFLOW:\nset args 50000 test 100000\n");
    printf("Multiplication underflow:\nset args -50000 test 100000\n");
    printf("Division arguments:\nset args 1000 test 0\nset args -10000 test 10\nset args -2147483648 test -1\n");

    return;
}
int main(int argc, char *argv[]){
    //we would sanitze direclty here on main
    // since the more we pass on the dirty args, the more it would
    //be able to cause things, you know
    //but we can do it here on main
    //paranoia trust issues.com
    //first arg is alsways the filename
    //filename arg1 arg2 arg3
    char operand_buff[4];
    
    errno = 0;
    __INT32_TYPE__ first_number;
    __INT32_TYPE__ second_number;

    int calc_error = 0;
    int *ptr_calc_error = &calc_error;

    struct results struct_result = {0};
    //unused?
    long long_first_number;
    long long_second_number;
    char *ptr_end_first_number;
    char *ptr_end_second_number;



    if(argc != 4){
        usage();
        print_debug_args();
        return 0;
    }
    //begin the cleasing of input ✞✞✞
    long_first_number = strtol(argv[1], &ptr_end_first_number, 10);
    long_second_number = strtol(argv[3], &ptr_end_second_number, 10);

    debug();
    snprintf(operand_buff, sizeof(operand_buff), "%s", argv[2]);
    if(errno){
        //both catches snprintf and strol error
        printf("Something went horribly wrong...\n");
        calc_error = UNKNOWN_ERROR;
        goto ERROR_EXIT;
    }
    calculate(long_first_number,  operand_buff, long_second_number, ptr_calc_error, &struct_result);

ERROR_EXIT:
    if(calc_error){
        jet2holiday();
        return -1;
    }
    if(struct_result.flag == PRINT_UINT)\
    {
        printf("%u", struct_result.uint32_result);
    }
    else if (struct_result.flag == PRINT_INT)
    {
        printf("%d", struct_result.int32_result);
    }else{
        //sopmething went wrong on the flag
        jet2holiday();
    }
    debug();
    return 0;
}