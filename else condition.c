#include<stdio.h>
#include<math.h>
char grade;
int main()
{
    printf("\nenter a letter grade");
    scanf("\n%c",&grade);
    if(grade=='A')
    {
        printf("\nPerfect!");
    }
    else if(grade=='B')
    {
        printf("\nGood!");
    }
    else
    {
        printf("\nFair!");
    }
    return 0;
}
