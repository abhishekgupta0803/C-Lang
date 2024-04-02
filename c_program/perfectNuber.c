//perfect number
#include<stdio.h>
int main(){
    
  int num,sum = 0;
   
  printf("Enter any Number :");
  scanf("%d",&num);
  
  for(int i=1; i<num; i++){
     if(num % i == 0){
        sum = sum+i;
        printf("%d\n",i);
        
     }
  }
  
  if(sum == num){
      printf("Perfect Number :");
  }else{
      
        printf("Not Perfect Number :");
      
  }
    return 0;
}
