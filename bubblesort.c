// program for bubble sort
#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void Bubble(int A[],int n)
{
 int i,j,flag=0;

 for(i=0;i<n-1;i++)
 {
 flag=0;
 for(j=0;j<n-i-1;j++)
 {
 if(A[j]>A[j+1])
 {
 swap(&A[j],&A[j+1]);
 flag=1;
 }
 }
 if(flag==0)
 break;
 }
}
int main()
{
 int A[100],number,i;
    printf("Enter the number of elements\n");
    scanf("%d",&number);
    printf("Enter elements\n");
    for(i = 0;i <number;i++)
    {
        scanf("%d",&A[i]);
    }

 Bubble(A,number);
 for(i=0;i<number;i++)
 printf("%d ",A[i]);
 printf("\n");
 return 0;
}

