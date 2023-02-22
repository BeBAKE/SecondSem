#include<stdio.h>
int fibonacci(int);

int fiboCache[10];

int main(){
  int n;
  printf("ENter the number : ");
  scanf("%d",&n);
 

  fibonacci(n);

  for(int i=0;i<10;i++){
    printf("%d ",fiboCache[i]);
  }
}

int fibonacci(int n){
  // base condition
  if(n<2){
    return n;
  }
  if(fiboCache[n]!=0){
    return fiboCache[n];
  }

  int fibonumber= fibonacci(n-1)+fibonacci(n-2);
  fiboCache[n]=fibonumber;
  return fibonumber;
}