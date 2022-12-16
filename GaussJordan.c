// Gauss-Jordan
#include <stdio.h>
#include <stdlib.h>

#define M 10
int main()
{
	int n;
    printf("ENter the no. of equations\n");
    scanf("%d",&n);
    float a[n][n+1];

    for(int i=0;i<n;i++){
        printf("Enter the coefficents of equation %d  :",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("Enter the rhs value of equation %d   :",i+1);
        scanf("%d",&a[i][n]);
    }

    
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++) {
			
			if (i != j) {
				
				float pro = a[j][i] / a[i][i];

				for (int k = 0; k <= n; k++)				
					a[j][k] = a[j][k] - (a[i][k]) * pro;			
			}
		}
	}


    for (int i = 0; i < n; i++)		
			printf("%f \n",a[i][n] / a[i][i]);	


	return 0;
}
