
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
 *
 * This source code performs the following function:
 *                  1) Accept the lenght of the array fom the user
 *                  2) Accept the array from the user
 *                  3) Sort the array in descending order
 *                  4) Then find median followed by mean.
 *                  5) Then find the maximum and minimum of the elements present in the array
 *
 *
 * @author <Subhojit Ghorai>
 * @date <13th March 2019>
 *
 */
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {



  /* Other Variable Declarations Go Here */
  int n,i=0;
  double temp;
  /* Statistics and Printing Functions Go Here */
    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
  int arr[n];
    printf("\nEnter the elements in array\n");
    for(i=0 ; i<n ; i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    sort_array(arr,n);

    printf("\nThe array after sorting is..\n");
    for( i=0 ; i<n ; i++)
    {
        printf("\narr[%d] : %d",i,arr[i]);
    }

    printf("\nThe median of the array is :%.2f\n",find_median(arr,n));


    printf("\nThe mean of the array is :%.2f\n",find_mean(arr,n));


    printf("\nThe maximum of the array is :%d\n",find_maximum(arr,n));


    printf("\nThe minimum of the array is :%d\n",find_minimum(arr,n));




}

/* Add other Implementation File Code Here */
void sort_array(int *array , int n)
{
    // declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]<array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

}
// function to calculate the median of the array
float find_median(int *array ,  int n)
{
    float median=0;
     sort_array(array,n);
    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];

    return median;
}
double find_mean(int *array ,  int n)
{
    int sum = 0,i=0;
    for ( i = 0; i < n; i++)
        sum += array[i];

    return (double)sum/(double)n;
}
int find_maximum( int *array ,  int n)
{
    sort_array(array,n);
    return array[0];
}
int find_minimum(int *array ,  int n)
{
    sort_array(array,n);
    return array[n-1];
}
