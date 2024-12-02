#include<stdio.h>
int main()
{
    int num1;
    int num2;
    char operator;
    float result;

    printf("\n enter an operator (+,*,-,/)");
    scanf("%c",&operator);

    printf("\n enter num1");
    scanf("%d",&num1);

        printf("\n enter num2");
    scanf("%d",&num2);
    switch(operator){
        case'+':
    result=num1+num2;
    printf("\nresult: %f",&result);
    break;
    case'-':
    result=num1-num2;
    printf("\nresult: %f",&result);
    break;
    case'*':
    result=num1*num2;
    printf("\nresult: %f",&result);
    break;
    case'/':
    result=num1/num2;
    printf("\nresult: %f",&result);
    break;
    }
    return 0;
}
