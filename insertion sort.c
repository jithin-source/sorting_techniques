// program for insertion sort
#include <stdio.h>
#include<stdlib.h>

void Insertionsort(int A[],int n)
{
 int i,j,temp;

 for(i=1;i<n;i++)
 {
 j=i-1;
 temp=A[i];
 while(j>-1 && A[j]>temp)
 {
 A[j+1]=A[j];
 j--;
 }
 A[j+1]=temp;
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
 Insertionsort(A,number);
 for(i=0;i<number;i++)
 printf("%d ",A[i]);
 printf("\n");
 return 0;
}

