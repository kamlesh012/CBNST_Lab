//Regula Falsi
#include <stdio.h>
#include <math.h>
#define e 0.000001
float f(float x){
return (x*x*x)-(2*x)-5;
}

void regula(float a,float b){
	if(f(a)*f(b)>0){
		printf("Please Enter Proper Values");
		return;
	}
	else if(f(a)*f(b)==0){
		printf("Roots are %f%f",a,b);
	}
	else{
		float c,prev;
		int cnt=0;
		while(fabs(f(c)-f(prev))>e){		//Precision Method
//		while(cnt<10){			//Number of Iterations Method
			cnt++;
			prev=c;
			c=( (a*f(b))-(b*f(a)) )/(f(b)-f(a));
			if(f(c)*f(a)<0){
				b=c;
			}
			else if(f(c)*f(b)<0){
				a=c;
			}
			else break;
		}
//		printf("%f %f %f\n",a,b,c);
		printf("Final Root is: %f\n",c);
	}
}

int main(){

int a,b;
scanf("%d%d",&a,&b);
regula(a,b);

}
