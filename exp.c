/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: exp.c 
 * CS 136 Fall 2014 - Assignment 7, Problem 3
 * Description: 
***********************************************/
#include <stdio.h>
#include <assert.h>
/* fast_exp(int x, int n) contains an integer x,
 *  and an integer n, return an integer, which 
 *  x^n.
 * PRE: n >= 0
 * POST: Produced result is an integer
 *       Produced value > 0
*/
/* Step 1. There is only one loop.
 * Step 2. logn iterations.
 * Step 3. >:  O(1)
 *         =:  O(1)
 *         ==: O(1)
 *         %:  O(1)
 *         *:  O(1)
 * Step 4. sum[k=n to 0] O(logn) = O(logn)
*/
int fast_exp(int x, int n){
    assert (n >= 0);
    int count=1;
    for (int k=n; k>0; k=k/2) {
        if (k % 2 == 0) {
            x=x*x;
        }
        else {
            count=count*x;
            x=x*x;
        }
    }
    return count;
}
