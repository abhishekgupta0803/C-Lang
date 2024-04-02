//print reverse of a number
#include<stdio.h>
int main(){
    int n,rem,rev = 0;
    printf("Enter any Number :");
    scanf("%d",&n);
    while(n > 0){

        rem = n%10;
        rev = rev*10+rem;
        n = n/10;

       
    }
     printf("Reverse of a Num :%d",rev);

    return 0;
}