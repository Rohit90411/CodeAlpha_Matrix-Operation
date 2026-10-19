#include<stdio.h>
#include<conio.h>
void trans(int r1,int c1,int a[r1][c1],int c[r1][c1])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]= a[j][i];
        }
    }
    printf("the transpose of the matrix is =\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int a[3][3];
    int c[3][3];
    printf("enter the elements of the matrix =\n");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
    trans(3,3,a ,c);
getch();
return(0);

}
