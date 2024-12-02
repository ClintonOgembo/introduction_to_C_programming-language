#include<stdio.h>
char grade;
int main()
{
    printf("\n enter your grade");
    scanf("%c",&grade);
    switch(grade)
    {
    case'A':
        printf("\n perfect");
        break;
    case'B':
        printf("\n Good");
        break;
       case'C':
        printf("\n Fair");
        break;
        case'D':
        printf("\n atleast not an F");
        break;
        case'F':
        printf("\n You FAILED!");
        break;
        default:
            printf("\n enter a valid grade!!");
}
return 0;
}
