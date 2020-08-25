// program for selection sort
#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void selectionsort(int A[],int n)
{
 int i,j,k;

 for(i=0;i<n-1;i++)
 {
     k = i;
 for(j=i;j<n-1;j++)
 {

 if(A[k]>A[j])
 {
     k = j;
 }
 }
  swap(&A[i],&A[k]);
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

 selectionsort(A,number);
 for(i=0;i<number;i++)
 printf("%d ",A[i]);
 printf("\n");
 return 0;
}
