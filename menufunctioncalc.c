#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
float div(int a, int b);
int factorial(int n);

void main() {
     int choice;
     int num1 , num2 , result , n;

         printf("\n--- Menu Driven Calculator---\n");
         printf("1. Addition");
         printf("2. Subtraction");
         printf("3. Multiplication");
         printf("4. Division");
         printf("5. Factorial");
         scanf("%d", &choice);

         switch(choice) {

           case 1 :
               printf("Enter two numbers: ");
               scanf("%d %d", &num1 , &num2);
               result = add(num1 , num2); 
               printf("Result = %d\n", result);
               break;

            case 2:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result = %d\n", result);
                break;

            case 3:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result = %d\n", result);
                break;

            case 4:
                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);
                if(num2 != 0)
                    printf("Result = %d\n", divide(num1, num2));
                else
                    printf("Error: Division by zero not allowed.\n");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);
                result = factorial(n);
                printf("Factorial = %d\n", result);
                break;
        }

    }


// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
