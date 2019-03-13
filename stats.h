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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *    1)used for sorting array in descending order
 *    2)finding the median of the array
 *    3)finding the mean of the array
 *    4)finding the maximum of the array
 *    5)finding the minimum of the array
 * 
 *
 * all the functions take parameters as : 
 *                 ->pointer to an array
 *                 ->lenght of the array
 */

void sort_array(int *array , int n);          //used for sorting array in descending order
float find_median(int *array ,  int n);       //finding the median of the array
double find_mean(int *array ,  int n) ;       //finding the mean of the array
int find_maximum( int *array ,  int n);       //finding the maximum of the array
int find_minimum( int *array ,  int n);       //finding the minimum of the array


#endif /* __STATS_H__ */
