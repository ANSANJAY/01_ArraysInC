#include<stdio.h>

int main()
{
    int n,i=0;

printf("Enter the number of elements \n");
  scanf("%d", &n);
      int a[n];
  printf("enter input \n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Entered array is : \n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);


for(i=0;i<n;i++)
  if(a[i]<0)
  printf("negative element %d  found at %d \n",a[i],i+1);


 return 0;
}