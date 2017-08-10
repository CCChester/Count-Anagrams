/***********************************************
 * Name: Chen Chen
 * Student ID: 20518383
 * File: ccount.c
 * CS 136 Fall 2014 - Assignment 7, Problem 0b
 * Description:
 ***********************************************/
#include <stdio.h>
#include <string.h>
#include <assert.h>
/* ccount(char *strings[], int num, char c) contains
 *  strings, its length num, and a character c, 
 *  return a number that strings contains c.
 * PRE: c != 0, pointers is not NULL.
 * POST: Produced result is a number
 *       Produced value >= 0
*/
int ccount(char *strings[], int num, char c){
    assert(c != 0);
    int count=0;
    int i=0;
    while (i<num) {
        int k=0;
        while (k<strlen(strings[i])){
            if (strings[i][k] == c) {
                ++count;
            }
            ++k;
        }
        ++i;
    }
    return count;
}

