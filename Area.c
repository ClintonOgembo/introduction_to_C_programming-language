#include<stdio.h>
#include<math.h>
double r;
const double PI=3.142;
double area;
double circumfrence;
int main(){
    printf("\nenter r of the circle");
    scanf("\n%lf",&r);
    circumfrence=PI*2*r;
    area=PI*pow(r,2);
    printf("\ncircumfrence: %lf",circumfrence);
    printf("\narea: %lf",area);
    return 0;
}
