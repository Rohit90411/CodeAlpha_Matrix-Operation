#include<stdio.h>
#include<conio.h>
void multiplymatrix(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2],int result[r1][c2])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
           result[i][j]=0;
          for(int k=0;k<c1;k++)
          {
              result[i][j]=  result[i][j] + a[i][k]*b[k][j];
          }

        }
    }
    printf("the multiplycation of matrix is = \n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[2][3] ={{1,2,3},{4,5,6}};
    int b[3][2]={{7,8},{9,10},{11,12}};
    int c [2][2];
    multiplymatrix(2,3,3,2,a,b,c);
    getch();
    return(0);

}
