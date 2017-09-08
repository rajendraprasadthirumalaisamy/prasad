#include<stdio.h> 
int main()
{
int num[]={1,2,3,4,5,6};int i,temp;
for(i=0;i<=5;i=i+2)
{ 
temp=num[i]; num[i]=num[i+1]; num[i+1]=temp;
}
for(i=0;i<=5;i=i+2) 
printf(''%d",num[i]);

}
void exchange_odd_even (int* arr, size_t len)
{
for (int i=1; i<len; i=i+2)  
swap (arr[i-1], arr[i]); 
}
