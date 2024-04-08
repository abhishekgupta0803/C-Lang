//Print Third Largest arry Element print
#include<stdio.h>
int main(){
    int f = 0;
    int arr[]={3, 1, 7, 5, 2, 4, 6};
    for(int term=0; term<5-1; term++){
        for(int j=1; j<5-term-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<5; i++){
       if(arr[i] < arr[i+1] && arr[i+1] < arr[i+2]){
           printf("%d",arr[i+2]);
           break;
       }
    }
    
    return 0;
}
