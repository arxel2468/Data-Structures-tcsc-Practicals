#include<stdio.h>
#include<string.h>
#define SIZE 30
int a[SIZE],n;
void maxheapify(int a[],int i,int n1);
void buildheap(int a[],int n1);
void heap_sort(int a[]);
void swap(int i,int j);
int length(int a[]);
int main()
{
int i,j,r,max,n1;
printf("Enter the number of element:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("Enter a value:");
{
if(a[r]>a[max])
{
max=r;
}
}
if(i!=max)
{
swap(i,max);
maxheapify(a,max,n1);
}
}
void swap(int i,int j)
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
int length(int a[])
{
int i=0;
while(a[i]!='\0')
{
i++;
}
return i;
}
