#include<stdio.h>

int peakElement(int arr[], int n);

int main() {
    
    int arr[] = {1, 2, 9, 10, 5, 6};
    int n = sizeof(arr);// Calculate the size of the array
   int idx =  peakElement(arr,  n);
   printf("%d",arr[idx]);
    return 0;
}

int peakElement(int arr[], int n) {
   
    for (int i = 1; i < n-1; i++) {
        if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
            return i;
            
        }

    }
    return -1;
}
