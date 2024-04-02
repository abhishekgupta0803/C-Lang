//print armstrong number
#include<stdio.h>
int main(){
    int n,rem,sum=0;
    printf("Enter your Number :");
    scanf("%d",&n);
    int armst = n;
    while(n > 0){

        rem = n%10;
        sum += rem*rem*rem;
        n = n/10;  
    }
    if(sum == armst){
        printf("Armstrong Number :");
    }else{
        printf("Not Armstrong Number :");
    }


    return 0;
}