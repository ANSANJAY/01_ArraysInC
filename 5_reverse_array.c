#include <stdio.h>

int main() {

  int n, index, a[10],b[10],j=0;
  printf("Enter the number of elements \n");
  scanf("%d", &n);
  printf("enter input \n");
  for (index = 0; index < n; index++)
    scanf("%d", &a[index]);
  printf("Entered array is : \n");
  for (index = 0; index < n; index++)
    printf("%d\n", a[index]);

  for(index=n-1;index>=0;index--)
  {
  b[j]=a[index];
  j++;
  }

  printf("Reversed index\n");
    for ( j = 0; j < n; j++)
    printf("%d\n", b[j]);

}