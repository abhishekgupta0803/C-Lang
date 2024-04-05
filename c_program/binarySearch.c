#include<stdio.h>
int binarySearch(int arr[], int key){
    int start = 0, end = 6-1;
    while(start <= end){
        int mid = (start+end)/2;
        //find mid
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){ //mid < key {Right SIde}
            start = mid + 1;

        }else{
            end = mid - 1;          //mid > key {Left SIde}
        }
    }
    return -1; //mid not found
}
int main(){
    
    int arr[]={1,2,3,4,5,6};
    int key = 4;
    int index = binarySearch(arr, key);
    if(index == -1){
        printf("mid Not Found :");
    }else{
        printf("mid is Found :%d",index);
    }
    return 0;
}