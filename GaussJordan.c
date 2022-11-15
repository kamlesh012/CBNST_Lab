/*
NAME: KAMLESH SINGH BISHT (SECTION I)
UNIVERSITY ROLL NO.: 2016802
GAUSS JORDAN METHOD
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a[3][4], t;
    int i , j, k;
    printf("Name - Kamlesh Singh Bisht\n");
    printf("Sec-I\n");
    printf("University roll no- 2016802\n");
    printf("Class roll no-39\n");
    printf("Program-B.Tech(CSE)\n\n");
    printf("Enter the number of equations :");
    // scanf("%d", &n);
    // printf("Enter the elements in row-wise : \n");

    //  for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("a[%d][%d] = ", i, j);
    //         scanf("%f", &a[i][j]);
    //     }
    //     printf("b[%d] = ", i + 1);
    //     scanf("%f", &a[i][n]);
    // }
    // printf("\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // for (i = 0; i < 3; i++)
    // {   for (j = 0; j < 4; j++)
    //     {
    //         printf("%.0f ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("Equation 1: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", a[0][0], a[0][1], a[0][2], a[0][3]);
    printf("Equation 2: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", a[1][0], a[1][1], a[1][2], a[1][3]);
    printf("Equation 3: (%.0f)x+(%.0f)y+(%.0f)z=%.0f\n", a[2][0], a[2][1], a[2][2], a[2][3]);

    printf("\n\n");
    printf("Augmented Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf(" \n");
    }

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j)
            {
                t = a[j][i] / a[i][i];
                for (k = 0; k < 4; k++)
                    a[j][k] = a[j][k] - (a[i][k] * t);
            }
        }
    }

    printf("Final  Matrix form : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\t %.0f", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSolution is = ");
    for (i = 0; i < 3; i++)
    {
        printf("%f ", a[i][3] / a[i][i]);
    }
}
