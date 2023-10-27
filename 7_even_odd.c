#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;

printf("Enter the number of elements \n");
  scanf("%d", &n);
      int a[n],even[n],odd[n];
  printf("enter input \n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Entered array is : \n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);

for (i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
    even[j]=a[i];
    j++;
    }
    else{
    odd[k]=a[i];
    k++;
    }
}

  printf("Even array is : \n");
  for (i = 0; i < j; i++)
    printf("%d\n", even[i]);


  printf("Odd array is : \n");
  for (i= 0;i< k; i++)
    printf("%d\n", odd[i]);

    return 0;
}