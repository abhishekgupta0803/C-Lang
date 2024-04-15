//array pass by refrence
#include<stdio.h>
void change(int arr[],int size);
int main(){
    int size = 3;
    int arr[]={10,20,30};

   change(arr,size);

    return 0;
}

void change (int arr[],int size){
    arr[0] = 100;
    arr[1] = 200;
    for(int i=0; i<3; i++){
        printf("%d\n",arr[i]);
    }
}