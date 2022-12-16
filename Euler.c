#include<stdio.h>
#include<math.h>
#define f(x, y) (1-y)
int main()
{

    float x0, y0, h, x;
printf("\nEnter the initial value of x and y\n");
scanf("%f%f",&x0,&y0);
printf("Enter the step size of the differential equation\n");
scanf("%f",&h);
printf("Enter the value of x at which you need the value of y\n");
scanf("%f", &x);

    float xi = x0;
    float y = y0;
for(float i = xi; i< x; i+=h)
    {
        y = y +(h*f(i, y));
    }
printf("The value of y = %f", y);
    return 0;
}
