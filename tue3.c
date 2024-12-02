
#include<stdio.h>
int age;
char name[10];
int main(){

    printf("\nwhat is your name?");
    scanf("%s",&name);
    printf("\nhow old are you?");
    scanf("%d",&age);
    printf("\nhello %s, how are you?",name);
    printf("\nyou are %d years old",age);

    return 0;
}
