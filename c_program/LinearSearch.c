#include<stdio.h>
//Linear Search:
int linearSearch(int arr[],int key){
    for(int i=0; i<6; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[]={87,6,34,21,17,98};
    int key = 6;
    int index = linearSearch(arr, key);
    printf("Indx is found:%d",index);
    return 0;
}
//Beast case = 1, worstcase = n
//time complex O(N)