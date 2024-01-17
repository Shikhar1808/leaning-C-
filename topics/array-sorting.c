#include <stdio.h>
int main(){
    int array[]= {9,7,5,3,4,6,7,8,32,34,89,100,6,5,4,1,4,6,7,8};
    int size = sizeof(array)/sizeof(array[0]);
    for(int j=0; j < size; j++ ){
        for(int i = 0; i < size -1; i++){
            if(array[i] > array[i+1]){
                int a = array[i];
                int b = array[i+1];
                int temp = a;
                array[i] = b;
                array[i+1] = temp;
            }
        }
    }
    for(int i =0; i<size; i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}