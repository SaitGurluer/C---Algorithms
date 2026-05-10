#include "algorithms.h"
#include <stdlib.h>
unsigned long long int factorial(int number){

    unsigned long long int result = 1;
    while(number>1){
        result *=number--;
    }
    return result;
}


unsigned long long int* fibonacci(int number){
    int num1=1;
    int num2=0;
    unsigned long long int sum=0;
    unsigned long long int *Array = malloc(number * sizeof(unsigned long long int));

    for(int i =0 ;i<number;i++){
        Array[i]=sum;
        sum=num1+num2;
        num1=num2;
        num2=sum;
    }
    return Array;
}


unsigned long long int primeNumber(unsigned long long int number){

    if (number <= 1) return 0;
    if (number <= 3) return 1;

    if (number % 2 == 0 || number % 3 == 0)
        return 0;

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0)
            return 0;
    }

    return 1;
}



