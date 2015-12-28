/* 
 * File:   main.c
 * Author: OJL
 *
 * Created on 2015年12月28日, 下午 7:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int year;
    printf("input year:");
    scanf("%d", &year);
    /*
     * pseudocode determine whether a year is a leap year
     * 
    if (year is not exactly divisible by 4) then (it is a common year)
    else if (year is not exactly divisible by 100) then (it is a leap year)
    else if (year is not exactly divisible by 400) then (it is a common year)
    else (it is a leap year)
     
     */
  
    
    if(year % 4 != 0){
        printf("%d is a common year", year);
    }else if(year % 100 != 0){
        printf("%d is a leap year", year);
    }else if(year % 400 != 0){
        printf("%d is a common year", year);
    }else{
        printf("%d is a leap year", year);
    }
    
    return (EXIT_SUCCESS);
}

