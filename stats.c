/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This file contains the implementation of the functions defined in stats.h
 *
 * @author Javed Alam
 * @date 19.02.2023 
 *
 */

#include <stdio.h>
#include "stats.h"


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);

}

void print_statistics(unsigned char *array, unsigned int size){
    printf("Array: \n");
    print_array(array, size);
    printf("Median value is: %d\n", find_median(array, size));
    printf("Mean Value is: %d\n", find_mean(array, size));
    printf("Maximum value is: %d\n", find_maximum(array, size));
    printf("Minimum value is: %d\n", find_minimum(array, size));
}
void print_array(unsigned char *array, unsigned int size)
{
    for(int i = 0; i < size; i++){
        printf("Value %d ", array[i]);
    }
    printf("\n");
}
unsigned char find_median(unsigned char *array, unsigned int size)
{
    sort_array(array, size);
    if(size % 2 == 0){
        return (array[size/2] + array[size/2 - 1]) / 2;
    }
    else{
        return array[size/2];
    }
}
unsigned char find_mean(unsigned char *array, unsigned int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum / size;
}
unsigned char find_maximum(unsigned char *array, unsigned int size)
{
    unsigned char max = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int size)
{
    unsigned char min = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

void sort_array(unsigned char *array, unsigned int size)
{
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] < array[j+1]){
                unsigned char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
