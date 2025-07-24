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

int check_min_max(long xxx, long yyy){
    /**
     * @brief checks xxx and yyy if they're both legal values of int32_max
     * we initally put long since strtol already has error checkin if we provide a long-er value than long
     * we then do another checking inside the operand function
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

int check_valid_input(__INT32_TYPE__ xxx, char operand, __INT32_TYPE__ yyy){
    //fix this later
    return 0;
}

__INT32_TYPE__ calculate(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy){
    /**
     * if the operand invovles all int32_type, check int32 min max
     * if the opearnd involves all uint32_type, ehck uint32 min max then
     * 
     * once we get the valid opearand and the int types
     * we can proceed to do the calculations?
     * -
     */
    return 0;
}


__INT32_TYPE__ add(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy, int *calc_error){
    /**
     * @brief adding two numbers with over and underflow checks
     * extern int calc_error returns error code
     */
    __INT32_TYPE__ result = 0;
    int error_detected = 1;

    if(
        //overflow check
        ((xxx > 0) && (yyy > (INT32_MAX - xxx))) ||
        //underflow check
        ((xxx < 0 ) && (yyy < (INT32_MIN - xxx)))
    )
    {
        debug();
        *calc_error = error_detected;
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
    int error_detected = 1;
    if(
        //overflow check
        ((xxx < 0) && (yyy > (INT32_MAX + xxx))) ||
        //underflow check
        ((xxx > 0 ) && (yyy < (INT32_MIN + xxx)))
        //alright, took some time in this, but umm yeah
    )
    {
        debug();
        *calc_error = error_detected;
        return result;
    }
    else
    {   
        result = (xxx - yyy);
        debug();
        return result;
    }
}

__INT32_TYPE__ multiply(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy){
    __INT32_TYPE__ result = (xxx * yyy);
    return result;
}

__INT32_TYPE__ jet2holiday(){
    //print this if you detect bad input or over/underflow
    printf(
  "\xE2\x99\xAC\xE2\x99\xAA\xE2\x99\xB6\x20\x44\x61\x52\x6C\x31\x6E\x47\x20\x48\x6F\x4C\x64\x20\x4D\x79\x20\x48\x61\x41\x61\x41\x6E\x44\x21\x20"
  "\xE2\x99\xB6\xE2\x99\xAA\xE2\x99\xB6\x0A\x6E\x4F\x74\x48\x69\x4E\x67\x20\x42\x65\x41\x74\x53\x20\x61\x20\x4A\x65\x54\x32\x48\x6F\x6C\x49\x64\x41\x79\x20\x61\x4E\x64\x20\x52\x69\x67\x48\x74"
  "\x4E\x6F\x57\x20\x79\x4F\x75\x20\x43\x61\x4E\x20\x73\x41\x76\x45\x20\x35\x30\x4C\x62\x73\x20\x50\x65\x52\x70\x75\x72\x72\x53\x75\x6E\x0A\x20\x54\x68\x41\x41\x41\x74\x27\x73\x20\x32\x6F\x30\x4C\x42\x73\x20\x6F\x46\x66\x66\x20\x34\x20\x40\x20\x46\x61\x4D\x69\x6C\x59\x20\x6F\x66\x20\x46\x6F\x57\x65\x72\x2E\x2E\x0A"
    );
  return 1;
}
__INT32_TYPE__ divide(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy);
__INT32_TYPE__ modulo(__INT32_TYPE__ xxx, __INT32_TYPE__ yyy);
