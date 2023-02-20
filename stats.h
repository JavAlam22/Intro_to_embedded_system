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
 * @file stats.h
 * @brief Function prototypes for the statistics program
 * 
 *
 * @author Alam Javed
 * @date 19.02.2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief This function will prints  minimum, maximum, mean, and median of the array statistics  
 * 
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return no return
 */

void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief This function prints the array to the screen
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return no return
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief This function calculate the median value of an array
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return  median value of the array
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief This function calculate the mean value of an array
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return  mean value of the array
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief  function will find the maximum value of an array
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return  maximum value of the array
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Function finds the minimum value of an array
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return minimum value of the array
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief This function sorts an array from largest to smallest
 *
 * @param array The array to be printed
 * @param size The size of the array
 *
 * @return return the void
 */
void sort_array(unsigned char *array, unsigned int size);


#endif /* __STATS_H__ */
