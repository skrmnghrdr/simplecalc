/**
 * @file operations.c
 * @author Correy Taylor, taylorswitfty@protonmail.com
 * @brief contains the basic calculator ops
 * @version 0.1
 * @date 2025-07-22
 * 
 * 
 * 
 */
#include <operations.h>
#include <math.h>
#include <string.h>



int debug_on = 1;
__INT32_TYPE__ x = 0;
__INT32_TYPE__ y = 0;

int calc_error = 0;
int *ptr_calc_error = &calc_error;



void debug(){
    /* debug purposes only, used to achor in gdb */
}

void usage(){
    printf("./simplecalc <argument1> <opearand> <argument2>\n");
    printf("example usage:\n./simplecalc 1 + 1\n");
    printf("./simplecalc 2 * 5\n");
    return;
}

int int_check_min_max(long xxx, long yyy){
    /**
     * @brief checks xxx and yyy if they're both legal values of int32_max
     * we initally put long since strtol already has error checkin if we provide a long-er value than long
     * we then do another checking inside the operand function
     * we will write a separate uint checker for our anxiety to 
     * calm down and not rely on the operand.
     */
    if(
        (xxx > INT32_MAX) || 
        (xxx < INT32_MIN) ||
        (yyy > INT32_MAX) ||
        (yyy < INT32_MIN)  )
    {
        return 1;
    }
    return 0;
}

int uint_check_min_max(long xxx, long yyy){
    /** @brief samesies with int, just uint */
    if(
        (xxx > UINT32_MAX) || 
        (xxx < UINT32_MIN) ||
        (yyy > INT32_MAX) ||
        (yyy < UINT32_MIN)  )
    {
        return 1;
    }
    return 0;
}

int check_valid_input(__INT32_TYPE__ xxx, char operand, __INT32_TYPE__ yyy){
    //fix this later
    return 0;
}

__INT32_TYPE__ add(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error){
    /**
     * @brief adding two numbers with over and underflow checks
     * extern int calc_error returns error code
     */
    __INT32_TYPE__ result = 0;

    if(
        //overflow check
        ((xxx > 0) && (yyy > (INT32_MAX - xxx))) ||
        //underflow check
        ((xxx < 0 ) && (yyy < (INT32_MIN - xxx)))
    )
    {
        debug();
        *calc_error = ADDITION_ERROR;
        return result;
    }
    else
    {   
        result = (xxx + yyy);
        debug();
        return result;
    }
}

__INT32_TYPE__ subtract(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error){
     __INT32_TYPE__ result = 0;
    if(
        //overflow check
        ((xxx < 0) && (yyy > (INT32_MAX + xxx))) ||
        //underflow check
        ((xxx > 0 ) && (yyy < (INT32_MIN + xxx)))
        //alright, took some time in this, but umm yeah
    )
    {
        debug();
        *calc_error = SUBTRACTION_ERROR;
        return result;
    }
    else
    {   
        result = (xxx - yyy);
        debug();
        return result;
    }
}

__INT32_TYPE__ multiply(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error){

    __INT32_TYPE__ result = 0;
    //do not forget to check for 0 since we are diving here
    if( (0 == yyy || 0 == xxx )){
        return result;
    }else if(
        (xxx > (INT32_MAX / yyy))||
        (xxx < (INT32_MIN / yyy))
    )
    {
        debug();
        *calc_error = MULTIPLICATION_ERROR;
        return result;
    }
    else
    {   
        result = (xxx * yyy);
        debug();
        return result;
    }
    return result;
}

__INT32_TYPE__ jet2holiday(){
    //print this if you detect bad input or over/underflow
    printf(
  "\xE2\x99\xAC\xE2\x99\xAA\xE2\x99\xB6\x20\x44\x61\x52\x6C\x31\x6E\x47\x20\x48\x6F\x4C\x64\x20\x4D\x79\x20\x48\x61\x41\x61\x41\x6E\x44\x21\x20\xE2\x99\xB6\xE2\x99\xAA\xE2\x99\xB6\x0A\x6E\x4F\x74\x48\x69\x4E\x67\x20\x42\x65\x41\x74\x53\x20\x61\x20\x4A\x65\x54\x32\x48\x6F\x6C\x49\x64\x41\x79\x20\x61\x4E\x64\x20\x52\x69\x67\x48\x74\x4E\x6F\x57\x20\x79\x4F\x75\x20\x43\x61\x4E\x20\x73\x41\x76\x45\x20\x35\x30\x4C\x62\x73\x20\x50\x65\x52\x70\x75\x72\x72\x53\x75\x6E\x0A\x20\x54\x68\x41\x41\x41\x74\x27\x73\x20\x32\x6F\x30\x4C\x42\x73\x20\x6F\x46\x66\x66\x20\x34\x20\x40\x20\x46\x61\x4D\x69\x6C\x59\x20\x6F\x66\x20\x46\x6F\x57\x65\x72\x2E\x2E\x0A" 
    );
  return 1;
}
__INT32_TYPE__ divide(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error){
    //div is a unique case
    __INT32_TYPE__ result = 0;
    debug();
    if(
        (-1 == xxx || -1 == yyy) && (INT32_MIN == yyy || INT32_MIN == xxx)
    )
    {
        *calc_error = DIVISION_ERROR;
    }else if (yyy == 0)
    {
        *calc_error = DIVISION_ZERO_ERROR;
    }else
    {
        result = (xxx / yyy);
    }
    return result;

}
__INT32_TYPE__ modulo(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy);

/* start of bitwise functions */

__UINT32_TYPE__ shift_left(__UINT32_TYPE__ number, __UINT32_TYPE__ bits, int *calc_error){
    /* we'll have to do another separate check here so  that this one won't overflow since uint has one more bit highher thatn signed int*/
    __UINT32_TYPE__ result = 0;
    //convert to double so pow will not cry
    double db_base = (double) 2;
    double db_bits = (double) bits;
    const int MAX_BITS = 31;

    __UINT32_TYPE__ exponent = (__UINT32_TYPE__) pow(db_base, db_bits);

    //error, arithmetic when putting big number, 
    //fix shl when crshing and handle it
    __UINT32_TYPE__ cieling = (UINT32_MAX / exponent);

    if(0 == bits){
        //no bits to move
        result = number;
    }
    else if(bits > MAX_BITS)
    {
        *calc_error = SHIFT_ERROR;
    }
    else if(number > cieling){
        *calc_error = SHIFT_ERROR;
    }else{
        result = number * exponent;
    }

    return result;
}

//BEGIN BITWISE
__UINT32_TYPE__ bitwise_and(__UINT32_TYPE__ first_num, __UINT32_TYPE__ second_num, int *calc_error){
    /*input was checked before hand, no concern of over/underflow if input was within range*/
    __UINT32_TYPE__ result = 0;
    result = (first_num & second_num);
    return result;
}
__UINT32_TYPE__ bitwise_or(__UINT32_TYPE__ first_num, __UINT32_TYPE__ second_num, int *calc_error){

    __UINT32_TYPE__ result = 0;
    result = (first_num | second_num);
    return result;
}
__UINT32_TYPE__ bitwise_exclusive_or(__UINT32_TYPE__ first_num, __UINT32_TYPE__ second_num, int *calc_error){
    __UINT32_TYPE__ result = 0;
    result = (first_num ^ second_num);
    return result;
}

__UINT32_TYPE__ shift_right(__UINT32_TYPE__ number, __UINT32_TYPE__ bits, int *calc_error){
    
    /* we'll have to do another separate check here so  that this one won't overflow since uint has one more bit highher thatn signed int*/
    __UINT32_TYPE__ result = 0;
    //convert to double so pow will not cry
    double db_base = (double) 2;
    double db_bits = (double) bits;
    const int MAX_BITS = 31;

    __UINT32_TYPE__ exponent = (__UINT32_TYPE__) pow(db_base, db_bits);
    debug();
    debug();
    //you would not have the ceiling issue with this since it would always be diviging, as long as the bitJ
    if(0 == bits){
        //no bits to move
        result = number;
        debug();
    }else if(MAX_BITS < bits){
        *calc_error = SHIFT_ERROR;
    }else{
        result = number / exponent;
    }

    return result;
}

void calculate(long xxx, char *operand, long yyy, int *ptr_calc_error, results *ptr_struct_result){
    /**
     * calculates based on the opeard and puts error on calc error as output parameter
     * where operand is a null terminated string
     */
    __UINT32_TYPE__ u_first_number = 0;
    __UINT32_TYPE__ u_second_number = 0;
    __INT32_TYPE__ first_number = 0;
    __INT32_TYPE__ second_number = 0;
    int USE_UNSIGNED_INT = 1;
    int INVALID_UINT_VAL = uint_check_min_max(xxx, yyy);
    int INVALID_INT_VAL = int_check_min_max(xxx, yyy);
    
    char uint32_operands[7][3] = {"<<", ">>", "&","|", "^", "<<<", ">>>"};
    char int32_operands[5][2] = {"+", "-", "*", "/", "%"};

    if(USE_UNSIGNED_INT)
    {
        if(INVALID_UINT_VAL)
        {
            *ptr_calc_error = CHECK_UINT_MIN_MAX_ERROR;
            goto EXIT;
        }
        u_first_number = xxx;
        u_second_number = yyy;
        //do ops
    }
    else
    {
        if(INVALID_INT_VAL)
        {
            *ptr_calc_error = CHECK_INT_MIN_MAX_ERROR;
            goto EXIT;
        }
        first_number = xxx;
        second_number = yyy;
    }
    //implement a helper function ehre someday I guess.
    //the program states to just output lol we can print it here and //call it a day for now
    if(0 == (strcmp(operand, "<<") | INVALID_UINT_VAL) )
    {
        //stack gets here, but somehow, shl is 0?
        __UINT32_TYPE__ result = shift_left(u_first_number, u_second_number, ptr_calc_error);

        ptr_struct_result->flag = PRINT_UINT;
        ptr_struct_result->uint32_result = result;
        printf("Go to sleep lmao\n");
    }
    else if (0 == (strcmp(operand, ">>") | INVALID_UINT_VAL) )
    {
        /* code */
    }
    else if(0 == (strcmp(operand, "&") | INVALID_UINT_VAL) )
    {
        /* code */
    }
    else if (0 == (strcmp(operand, "|") | INVALID_UINT_VAL) )
    {
        /* code */
    }
    else if (0 == (strcmp(operand, "^") | INVALID_UINT_VAL) )
    {
        /* code */
    }
    
    //{"<<", ">>", "&","|", "^", "<<<", ">>>"};
    
    
    



EXIT:
    return;
}
