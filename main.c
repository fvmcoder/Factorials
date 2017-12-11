#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,f=1,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  for(i=num;i>=1;i--)
      f=f*i;

  printf("Factorial of %d is: %d",num,f);
  return 0;
}
