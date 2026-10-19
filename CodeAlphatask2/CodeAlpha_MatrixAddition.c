#include<stdio.h>
#include<conio.h>
 void addmatrix(int r,int c,int a[r][c],int b[r][c],int result[r][c])
 {
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           result[i][j]= a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matyrix is=\n" );
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

 }
int main()
{
    int a[3][3];
    int b[3][3];
    int result[3][3];
    printf("enter the element of first matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of second matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    addmatrix(3,3,a,b,result);

}
