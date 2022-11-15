/*Name -Kamlesh Singh Bish
   Sec-I
   University roll no- 2016962
   Class roll no-39
   Program-B.Tech(CSE)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, j, k, n;
    float a[20][20], x[20];
    double s, p;
    printf("Name -Kamlesh Singh Bisht\n");
    printf("Sec-I\n");
    printf("University roll no- 2016802\n");
    printf("Class roll no-39\n");
    printf("Program-B.Tech(CSE)\n\n");
    printf("Enter the number of equations :");
    scanf("%d", &n);
    printf("\nEnter the co-efficients of the equations :\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
        printf("b[%d] = ", i + 1);
        scanf("%f", &a[i][n]);
    }

    printf("Equation 1: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", a[0][0], a[0][1], a[0][2], a[0][3]);
    printf("Equation 2: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", a[1][0], a[1][1], a[1][2], a[1][3]);
    printf("Equation 3: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", a[2][0], a[2][1], a[2][2], a[2][3]);

    for (k = 0; k <= n - 1; k++)
    {
        for (i = k + 1; i < n; i++)
        {
            p = a[i][k] / a[k][k];
            for (j = k; j <= n; j++)
            {
                a[i][j] = a[i][j] - (p * a[k][j]);
                printf("\n a[%d][%d] = %f", i, j, a[i][j]);
            }
        }
    }

    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        s = 0;
        for (j = i + 1; j < n; j++)
        {
            s += (a[i][j] * x[j]);
            x[i] = (a[i][n] - s) / a[i][i];
        }
    }

    printf("\nThe result is :\n");
    for (i = 0; i < n ; i++)
    {
        printf("\nx[%d] = %.2f", i + 1, x[i]);
    }
    return 0;

}
