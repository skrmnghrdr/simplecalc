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

int debug_on = 1;
int x = 0;
int y = 0;

void debug(const char *message){
    /* debug purposes only */
    if(debug_on){
        printf("Debug:%s", message);
    }
    return;
}

float add(float x, float y){
    //returns x + y
    float result = (x + y);
    return result;
}

float subtract(float x, float y){
    //return x - y
    float result = (x - y);
    return result;
}
float multiply(float x, float y);
float divide(float x, float y);
float modulo(float x, float y);
