/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: fib.c 
 * CS 136 Fall 2014 - Assignment 7, Problem 2
 * Description: 
***********************************************/
#include <stdio.h>
#include <assert.h>
/* fast_fib(int n) contains an integer n, and 
 *  produce an integer follow the fibonacci
 *  number
 * PRE: n > 0
 * POST: Produced result is an integer
 *       Produced value >= 1
*/
/* Step 1. There is only one loop.
 * Step 2. n iterations. 
 * Step 3. =:  O(1)
 *         +:  O(1)
 *         &&: O(1)
 *         <:  O(1)
 *         ++: O(1)
 *         -:  O(1)
 * Step 4: sum[sum=0 to n-3O] O(1) = O(n)
*/
int fast_fib(int n){
    assert(n > 0);
    if (n==1 || n==2) {
        return 1;
    }
    assert(n > 0);
    int a=0;
    int b=1;
    for (int sum=0; sum<n-2; ++sum){
        if (a==0 && b==1) {
            a=a+b;
        }
        else if (a==1 && b==1) {
            a=a+b;
        }
        else if (a<b) {
            a=a+b;
        }
        else {
            b=a+b;
        }
    }
    return a+b;
}
