#include<stdio.h>
#include<math.h>
int main()
{


    int i,j,k,n;
    float a[5][5],r,x[5];
    printf("Enter the no of unknowns.");
    scanf("%d",&n);
    printf("\n enter coefficients: ");
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n+1;j++)
        {

            printf("\n a[%d][%d]",i,j);
            scanf("%f",a[i][j]);

        }
        printf("\n");

    }
    for(j=1;j<=n;j++)
    {

        for(i=1;i<=n;i++)
        {
if(i!=j)
        {

           r=a[i][j]/a[j][j];
            for(k=1;k<=n+1;k++)
            {

                a[i][k]-=r*a[j][k];

            }
        }
    }
    }
    for(i=1;i<=n;i++)
    {
        x[i]=a[i][n+1]/a[i][j];

    }
    for(i=1;i<=n;i++)
    {
        printf("\n x %d: ,%f\n ",i,x[i]);

    }

 return 0;
}
