#include <stdio.h>
#include <stdlib.h>
#include "algorithms.h"

int number;
int num=0;
int Choise(void);
void Messages(void);
void algorithms(void);

void Messages(void){
    printf("Please choose one.\n\
    Select 1 to Calculate The Factorial.\n\
    Select 2 for The Fibonacci Sequence.\n\
    Select 3 to Check For Prime Numbers.\n\
    Select 0 to Exit This Program.\n");
}

int Choise(void){

    printf("\nPress 'Y' To Try Again, Press 'Q' To Exit.");
    char choise;
    scanf(" %c",&choise);
    while(getchar() != '\n');
    while(choise != 'y' && choise != 'Y' && choise !='q' && choise != 'Q'){
        printf("Invalid Selection.");
        printf("\nPress 'Y' To Try Again, Press 'Q' To Exit.");
        scanf(" %c",&choise);
        while(getchar() != '\n');
    }
    if(choise == 'y' || choise == 'Y')
        return 1;
    else if(choise =='q' || choise == 'Q')
        return 0;

}

void algorithms(void){

    Messages();

    scanf("%d", &number);
    while(getchar() != '\n');

    while(number<0 || number>3){
        printf("Invalid selection\n");
        algorithms();
    }

    if(number == 1)
    {
        printf("Please enter the number for which you want to calculate the factorial. Range (0-20)\n");

        scanf("%d",&num);
        while(getchar() != '\n');
        while(num<0 || num>20){
        printf("Please enter the number for which you want to calculate the factorial. Range (0-20)\n");
        scanf("%d",&num);}

        printf("%d Factorial = %llu",num,factorial(num));

        if(Choise())
            algorithms();



    }else if(number == 2)
    {
        printf("Please specify how many terms you would like to see.\n");

        scanf("%d",&num);
        while(getchar() != '\n');
        unsigned long long int *array = fibonacci(num);

        for(int i = 0 ; i<num;i++){
            printf("%llu ", array[i]);
        }
        free(array);

        if(Choise())
            algorithms();



    }else if(number == 3)
    {
        printf("Please enter the number you want to check if it's prime.\n");
        unsigned long long int num = 0;
        scanf("%llu",&num);
        while(getchar() != '\n');
        if(primeNumber(num)==1)
            printf("%llu is a Prime Number",num);
        else
            printf("%llu is not a Prime Number",num);

        if(Choise())
            algorithms();
    }

}
int main()
{
    algorithms();

}


