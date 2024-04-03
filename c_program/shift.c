#include<stdio.h>
void shiftAllZeroes(int arr[]){
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}
int main(){
    int arr[]={1,0,0,5,4};
    shiftAllZeroes(arr);
    for(int i=0; i<5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}