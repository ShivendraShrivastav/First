#include<stdio.h>
int main()
{
    printf("This is a Simple Calculator\n");
    int a,b;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            printf("Sum: %d",a+b);
            break;
        case '-':
            printf("Difference: %d",a-b);
            break;
        case '*':
            printf("Product: %d",a*b);
            break;
        case '/':
            if(b!=0)
                printf("Quotient: %d",a/b);
            else
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator.");
    }
    printf("\n");
    printf("Press any key to exit...");
    return 0;
}