// This Calculator is made by 2540129470 - Jevon Christopher Loanda

#include <stdio.h>
#include <stdlib.h>

void continued();

int main()
{
    
    double num1, num2;
    char operator;
    
    printf("Enter the first number : ");
    scanf("%lf", &num1);
    getchar();
    printf("Enter the second number : ");
    scanf("%lf", &num2);
    printf("Enter the operator (+, -, *, /) : ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Result : %.2lf", num1+num2);
        break;
    case '-':
        printf("Result : %.2lf", num1-num2);
        break;
    case '*':
        printf("Result : %.2lf", num1*num2);
        break;
    case '/':
        printf("Result : %.2lf", num1/num2);
        break;
    default:
        printf("Error, Invalid Operator");
        break;
    }

    continued();

    return 0;
}

void continued()
{
    char answer;
    printf("\n\nDo you want to continue? (y for yes / n for no) : ");
    scanf(" %c", &answer);
    if(answer == 'y' | answer == 'Y'){
    main();
    }
    else {
        printf("Thank You for using my calculator :)");
    }
}
