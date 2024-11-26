#include <stdio.h>
int main(){
  for(inti=1;i<=100;i++){
    if(i%7==0){
      printf("the first multiple of 7 is %d\n",i);
      break;
    }
  }
  return 0;