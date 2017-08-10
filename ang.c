/*********************************************** 
 * Name: Chen Chen 
 * Student ID: 20518383
 * File: ang.c
 * CS 136 Fall 2014 - Assignment 7, Problem 0a
 * Description: 
***********************************************/
#include "sort.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>  
/* is_anagrams(char *st1,char *st2) contains two 
 *  strings, and produce true if they are anagrams,
 * otherwise, produce false.
 * PRE: True.
 * POST: Produced result is a boolean. 
 *       Produced value is true or false.
*/
bool is_anagrams(char *st1, char *st2){
    int one=strlen(st1);
    int two=strlen(st2);
    sort_char(st1,one);
    sort_char(st2,two);
    if (one != two){
        return false;
    }
    int count=1;
    int first=0;
    while(first<one){
        if(st1[first] != st2[first]){
            count=0;
        }
        ++first;
    }
    return count;
}

 