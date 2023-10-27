#include<stdio.h>

int main()
{
    int n,i=0,pos=0,ele=0;

printf("Enter the number of elements \n");
  scanf("%d", &n);
      int a[n+1];
  printf("enter input \n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Entered array is : \n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
  printf("Enter the position to be deleted in array \n");
  scanf("%d",&pos);

  

for(i=n-1;i>=pos;i--)
{
  a[i+1]=a[i];
}

a[pos]=ele;
 printf("Array after insertion : \n");
for(i=0;i<n+1;i++)
{
printf("%d\n",a[i]);
}
 return 0;
}