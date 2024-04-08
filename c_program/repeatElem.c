#include<stdio.h>
int main(){
    int arr[]={5,3,1,5};
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    
    return 0;
}