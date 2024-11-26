#include <stdio.h>

int main(){
  inta,b;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf(" Adter swapping:a=%d,b=%d\n",a,b);
  return 0;
}
