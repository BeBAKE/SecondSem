#include<stdio.h>
int main(){
  int multArr[3][4];
  int ele;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      printf("Enter the value for multArr[%d][%d]\n",i,j);
      scanf("%d",&multArr[i][j]);
    }
  }
  printf("\n");
  
 for(int i=0;i<3;i++){
  printf("\n");
    for(int j=0;j<4;j++){
      printf("%d ",multArr[i][j]);  
    }
  }  
}