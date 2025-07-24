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
        //in the future, we can lookat errno here, just like how we did
        //wiith the socket programming to see what was wrong,
        //in C we can't just try except everything  :)
        printf("Something went horribly wrong...\n");
        return 0;
    }
    if(check_min_max(long_first_number, long_second_number)){
        //since strtolong does convert it to long,
        //we can check if the number here exceeds int
        printf("The number you have provided is too much or too lil for the likes of INT32_MAX, or INT32_MIN\n");
        return 0;
    }else{
        first_number = long_first_number;
        second_number = long_second_number;
    }
    // ✞✞✞ INPUT CLEANSED. LEAVE THiS VESSEL IN PEACE
    //now with the input cleansed, we can decide which operations to put
    /*
    that being said, we can switch case the single characters, but for the multi ones, we might have to do a fat if else statement 
    that's too complicated bro, we just probably need to compare all the strings here and call it a night, you're tried.
     */
    //debug anchor
    
    //__INT32_TYPE__ result = add(first_number, second_number, ptr_calc_error);
    //__INT32_TYPE__ result = subtract(first_number, second_number, ptr_calc_error);
    __INT32_TYPE__ result = divide(first_number, second_number, ptr_calc_error);


    printf("Result:%d\n", result);

    if(calc_error){
        jet2holiday();
    }
    debug();
    return 0;
}