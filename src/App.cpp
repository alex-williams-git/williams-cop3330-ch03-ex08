/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// function to check if even or odd
int checkEven(int input){
    // if the input is even, it will have remainder of 0 when divided by 2
    if(input % 2 == 0)
        return 1;
    else
        return 0;
}

int main(){
    int input = 0;
    scanf("%d", &input);
    int result = checkEven(input);

    if(result == 1)
        printf("The value %d is an even number.", input);
    else
        printf("The value %d is an odd number.", input);

    return 0;
}