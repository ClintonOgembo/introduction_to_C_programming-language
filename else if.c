#include<stdio.h>
int age;
int main()
{
    printf("\nenter your age");
    scanf("%d",&age);
    if(age==18){
        printf("\nyou are signed up!");}
    else if(age>=18)
       {printf("\nyou are not signed up!");}
    else if(age==0){
        printf("\nyou are just born");}
        else if(age<=0)
        {
            printf("\nyou are not yet born");
        }
    else{
        printf("\nyou are too young to sign up");}
    return 0;
}
