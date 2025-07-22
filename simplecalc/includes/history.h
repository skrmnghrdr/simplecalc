/**
 * @file history
 * @author Hung, Depot thockybackpain@protonmail.com    
 * @brief header file history.c 
 * @version 0.1
 * @date 2025-07-22
 * 
 * 
 * 
 */

/* TODO
add a realloc function in array_history 


*/
#define INITIAL_HIST_SIZE 256
extern float arr_history[256];
extern int arr_hist_len;

float add_history(float arr[INITIAL_HIST_SIZE], int arr_size);
