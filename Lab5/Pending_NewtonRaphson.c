#include <stdio.h>
#include <math.h>

// double func(double x){
//     return x*x*x -x*x +2;
// }
// double derivFunc(double x){
//     return 3*x*x* -2*x;
// }

double func(double x){
   return x*x*x -2*x -5;
   //Roots are :
}
double derivFunc(double x){
    return 3*x*x* -2;
}
//Optional I guess
int findinterval(){
    for(int i=-50;i<50;i++){
        if(func(i)*func(i+1)<0){return i;}
    }
    return 0;

}

void newtonRaphsonP(double x0){
    //don't know what the error is
    //Precision method
    int it=0;
    double x1=x0-(func(x0)/derivFunc(x0));
    double prevx1=x1;
    x1=x1-(func(x1)/derivFunc(x1));
    while(fabs(prevx1-x1)>0.004){
        prevx1=x1;
        // x1=x0-(func(x0)/derivFunc(x0));
        x1=x1-(func(x1)/derivFunc(x1));
        // x0=x1;
        it++;
    }
        
    printf("Precision Method: The value of root is:%lf\n",x1);
    printf("The number of iterations taked are: %d\n\n",it);
}

void newtonRaphson(double x0){
    //Iterative method
    int it;

    for(it=0;it<10;it++){

        // double h=(func(x0)/derivFunc(x0));
        // double x1=x0-h;
        double x1=x0-(func(x0)/derivFunc(x0));
        x0=x1;

    }
    printf("Iterative Method:The value of root is:%lf\n",x0);
    printf("The number of iterations taken are: %d\n\n",it);   
}

int main(){

    double x0;
    //scanf("%lf",&x0);

    x0=findinterval();
    printf("Interval found is %lf\n",x0);

    newtonRaphson(x0);

     newtonRaphsonP(x0);





    return 0;
}
