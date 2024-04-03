#include<stdio.h>
int main(){
    int n = 3,sum = 0,t = 9;
    
    for(int i=0; i<n; i++){
        
        sum += t;
        printf("%d ",t);
         if (i < n - 1)
         
            printf("+ ");
        t = t * 10 + 9;
        
    }
    printf("sum of the Series is :%d",sum);
    
    return 0;
}

