//call by refrence

#include<stdio.h>

void callByRef(int *a, int *b);

int main(){
    int a = 10 ,b=20;
    printf("%d\n",a);
    printf("%d\n",b);
    
    callByRef(&a,&b);
    printf("\nCall by ref:%d",a);
    printf("\nCall by ref:%d",b);
    return 0;
}
void callByRef(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
    
}