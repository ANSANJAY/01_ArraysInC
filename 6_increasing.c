#include <stdio.h>

int main() {

  int n,smallest, a[10],i=0,j=0,temp;
  printf("Enter the number of elements \n");
  scanf("%d", &n);
  printf("enter input \n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Entered array is : \n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);

for (i=0;i<n;i++){//not optimal(n*n)
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            //swap
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}

printf("array in increasing order\n");

for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}

}