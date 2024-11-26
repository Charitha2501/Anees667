#include <stdio.h>

int main(void) {
int num;
  printf("enter a number to generate its multiplication table:")
    scanf("%d",&num);
  for(inti=1;i<=10;i++){
    printf("%dx%d=%d\n",num,i,num*i);
  }
  return0;
}
