/*********************************************** 
 * Name: Chen Chen 
 * Student ID: 20518383
 * File: safe_anagrams.c 
 * CS 136 Fall 2014 - Assignment 7, Bonus
 * Description: 
***********************************************/
#include "sort.h"
#include <stdio.h>
#include <string.h>
/* count-anagrams(char* strs[], int len) contains
 *  an array of strings strs and its length len,
 *  returns the number of arrays which are paris
 *  of anagram. 
 * PRE: Each string contains at most 25 letters
 * POST: Produced result is an integer
 *       Produced value >= 0
*/
int count_anagrams(char *strs[], int len){
    char **new=strs;
    int i=0;
    while(i<len){
      sort_char(new[i], strlen(new[i]));
      ++i;
    }
    sort_str(new,len);
    int count=0;
    int k=0;
    while (k<len-1){
        if ((strcmp(new[k], new[k+1])) == 0) {
            ++count;
        }
        ++k;
    }
    return count;
}