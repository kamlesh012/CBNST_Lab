//Find roots of quadratic equations
#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    printf("Enter a b & c");
    scanf("%d",&a);
    if(a==0){
    printf("ENTER a again with a non-zero value");
    }
    scanf("%d %d", &b, &c);

    float d=b*b-4*a*c;

    float first,second;
    first=(-b+sqrt(d))/(2*a);
    second=(-b-sqrt(d))/(2*a);
    if(d<0){

    printf("Equations has imaginary roots:");
    printf("%f %f\n",first,second);

    }
    else if(d>0){

    printf("Equations has Real roots:");
    printf("%f %f\n",first,second);

    }
    else{

        printf("Equations has Equal roots:");
        printf("%f %f\n",first,second);

    }


return 0;
}
