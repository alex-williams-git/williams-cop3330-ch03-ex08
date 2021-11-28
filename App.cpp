#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int checkEven(int input){
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