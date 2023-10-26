#include <stdio.h>

int main() {

  int n, index,smallest, a[10];
  printf("Enter the number of elements \n");
  scanf("%d", &n);
  printf("enter input \n");
  for (index = 0; index < n; index++)
    scanf("%d", &a[index]);
  printf("Entered array is : \n");
  for (index = 0; index < n; index++)
    printf("%d\n", a[index]);
smallest = a[0];
for(index =1 ; index <n;index ++)
{
if(smallest>a[index])
smallest = a[index];
}
  printf("smallest interger : %d\n",smallest);
  return 0;
}