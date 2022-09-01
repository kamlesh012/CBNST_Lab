#include <stdio.h>

double func(double x){

return (x*x*x)-(x*x)+2;

}
//using counter
void bisection(double a,double b,int e){

    if(func(a)*func(b)>=0){
    printf("Please Enter Correct Boundaries");
    return;
    }
    //int cnt=0;
    double c;
    //while((b-a)>=e){          //to get precisions upto e decimal places
    //while(cnt<e){               //to get till e iterations
    for(int i=0;i<e;i++){
    //cnt++;
    c=(a+b)/2;
    if(func(c)==0.0)break;

    //else if(func(c)*func(a)<0){
    //else
    else if(func(c)>0){
    b=c;
    }
    //else if(func(c)*func(b)<0){
    //else if(func(c)<0){
    else{
    a=c;
    }
    }
    printf("The Value of Root is %lf",c);
}

//void bisection(double a,double b,double e){
void bisection(double a,double b,int e){

    if(func(a)*func(b)>=0){
    printf("Please Enter Correct Boundaries");
    return;
    }
    //int cnt=0;
    double c;
    //while((b-a)>=e){          //to get precisions upto e decimal places
    //while(cnt<e){               //to get till e iterations
    for(int i=0;i<e;i++){
    //cnt++;
    c=(a+b)/2;
    if(func(c)==0.0)break;

    //else if(func(c)*func(a)<0){
    //else
    else if(func(c)>0){
    b=c;
    }
    //else if(func(c)*func(b)<0){
    //else if(func(c)<0){
    else{
    a=c;
    }
    }
    printf("The Value of Root is %lf",c);
}

int main(){
    //printf("Enter two Initial Points");

    //double a=5,b=6;
    double a=-200,b=300;
    //double e=0.001; //precision
    int e=4; //number of iterations for case-2
    bisection(a,b,e);




return 0;
}
