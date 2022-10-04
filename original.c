#include <stdio.h>
#include<stdbool.h>
#include<string.h>//size=strlen(str);
int main()
{
    int n;
    int a[100][101];
    printf("enter the number of equations you have\n");
    scanf("%d",&n);
    int in_i=0;//index i for setting the row
    int xyz=0;
    while(n--)
    {
        char s[200];
        printf("enter the equation\n");
        scanf("%s",s);
        bool flag=false;
        int num=0;
        int cont=0;//for setting the value of the constant
        int sign=1;

        for(int i=0;i<strlen(s);i++)
        {
            if(flag&&(s[i]>='0'&&s[i]<='9'))
            {
                cont=cont*10+(s[i]-'0');
               // printf("%d ",cont);
            }
          if(s[i]=='=')//now constant needs to be evaluated
          flag=true;
            
          else if(s[i]=='-')
             sign=-1;
            
        else if(s[i]=='x')
            {
                a[in_i][0]=sign*num==0?1:sign*num;
                num=0;
                xyz++;
                sign=1;
            }
        else if(s[i]=='y')
         {
             a[in_i][1]=sign*num==0?1:sign*num;
                num=0;
                if(xyz==0)
                a[in_i][0]=0;
                xyz++;
                sign=1;
         }
         else if(s[i]=='z')
         {
             a[in_i][2]=sign*num==0?1:sign*num;
                num=0;
                if(xyz==0)
                {
                    a[in_i][0]=0;
                    a[in_i][1]=0;
                }
                if(xyz==1)
                {
                    if(a[in_i][1]=='\0')
                      a[in_i][1]=0;
                      else
                      a[in_i][0]=0;
                }
                  sign=1;
                xyz++;
         }
         else if(s[i]>='0'&&s[i]<='9')
            {
                num=num*10+(s[i]-'0');
            }
        }
        a[in_i][3]=sign*cont;
        in_i++;
    }

    int c0=a[0][0];
    int c1=a[1][0];
   
    int c3=a[2][0];
    int c4=a[2][1];
    
    for(int i=0;i<4;i++)
    {
        a[1][i]=c0*a[1][i]-c1*a[0][i];
    }
    for(int i=0;i<4;i++)
    {
        a[2][i]=c0*a[2][i]-c3*a[0][i];
    }
    
      c3=a[2][0];//update the value
      c4=a[2][1];//update the value
      
     int c2=a[1][1];
     
    for(int i=0;i<4;i++)
    {
        a[2][i]=c2*a[2][i]-c4*a[1][i];
    }
  

    printf("Final  Matrix form : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\t %.0f", a[i][j]);
        }
        printf("\n");
    }

    float x,y,z;
    z=a[2][3]/a[2][2];
    y=(a[1][3]-z*a[1][2])/a[1][1];
    x=(a[0][3]-(y*a[0][1]+z*a[0][2]))/a[0][0];
    printf("%f %f %f",x,y,z);

    return 0;
    

}
