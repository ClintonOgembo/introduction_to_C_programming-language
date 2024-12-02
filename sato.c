#include<stdio.h>
int age=20;
char grade='A';
float gpa=70.04;
char name[]="Bro";
int main()
{
    printf("Hello %s\n",name);
    printf("i am %d years old\n",age);
    printf("i scored an %c this semester\n",grade);
    printf("my average grade of this year is %.2f",gpa);
    return 0;
}
