#include <stdio.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("Enter Operator (+ - * /): ");
    scanf(" %c", &operator);

    while(1){
        if(operator == '+' || operator == '-' || operator == '*' || operator == '/'){
            break;
        }
        else if(operator == '\n'){
            printf("You entered nothing, Input valid operator");
        }
        else{ 
            printf("Enter valid operator (+ - * /):");
        }

        printf("Enter Operator (+ - * /): ");
        scanf(" %c", &operator);
    }

    printf("\nEnter number: ");
    scanf(" %lf", &num1);

    printf("\nEnter number: ");
    scanf(" %lf", &num2);
    
    switch (operator){
    case '+':
        result = num1 + num2;
        break;
    
    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
    if (num2 == 0){
        printf("\nError: cannot divide by 0");

        printf("\nEnter number: ");
        scanf(" %lf", &num1);

        printf("\nEnter number: ");
        scanf(" %lf", &num2);
        
    }
        result = num1 / num2;
        break;

    default:
    printf("Enter valid operator (+ - * /):");
        break;
    }

    printf("Result: %.2lf", result);

    return 0;
}


