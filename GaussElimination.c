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

		for (int j = i+1; j < n; j++) {
			
			if (i != j) {
				
				float pro = a[j][i] / a[i][i];

				for (int k = i+1; k <= n; k++)				
					a[j][k] = a[j][k] - (a[i][k]) * pro;			
			}
		}
	}

    double x[n];


	for (int i = n-1; i >= 0; i--)
	{

		x[i] = a[i][n];

	
		for (int j=i+1; j<n; j++)
		{

			x[i] -= a[i][j]*x[j];
		}

	
		x[i] = x[i]/a[i][i];
	}

	printf("\nSolution for the system:\n");
	for (int i=0; i<n; i++)
		printf("%lf\n", x[i]);




	return 0;
}
