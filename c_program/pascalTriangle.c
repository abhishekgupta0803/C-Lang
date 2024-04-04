#include<stdio.h>
int main(){
    int row = 6,col =6,coef;
    for(int j = 1; j<=row; j++){
        for(int space=1; space<=(row-j); space++){
            printf(" ");
        }
        coef = 1;
        for(int i=1; i<=j; i++){
            printf("%d ",coef);
            coef = coef * (j-i)/i;
        }                         
        printf("\n");
    } 
    
    return 0;
}
