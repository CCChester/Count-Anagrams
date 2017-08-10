/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: closest.c 
 * CS 136 Fall 2014 - Assignment 7, Problem 4
 * Description: 
***********************************************/
#include "sort.h"
#include <stdio.h>
#include <assert.h>
// my_fun(int a, int b) contains integer a and b,
//  produce the difference between a and b.
// PRE: True
// POST: Produced result is an integer
//       Produced valuse >= 0
int my_fun(int a, int b){
    if (a>b) {
        return a-b;
    }
    else {return b-a;}
}
// int closest(int arr[], int len, int *a, int *b)
//    finds two elements of a that are the closest
// PRE: len >= 2 is the number of elements in array a
// POST: sets *a and *b to be two elements of a that are
//    closest together, such that *a <= *b. 
//    Returns their difference.
//    Might modify the contents of a.
//    Might modify the contents of a.
int closest(int arr[], int len, int *a, int *b){
    assert(len >= 2);
    sort_int(arr,len);
    int n=0;
    int difference=20518383;
    int middle=0;
    while (n < len-1){
      middle=my_fun(arr[n], arr[n+1]);
        if (difference > middle) {
            difference=middle;
            *a=arr[n];
            *b=arr[n+1];
        }
        ++n;
    }
    return difference;
}
    


