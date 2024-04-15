//sum of arry with recursion
#include<stdio.h>
int sumOfArry(int arr[],int size);
int main(){
    int size = 4;
    int arr[]={8,2,3,4};
    printf("%d", sumOfArry(arr, size)); 
    return 0;
}
int sumOfArry(int arr[],int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }else{
       return arr[0] + sumOfArry(arr + 1,size-1);
    }
}