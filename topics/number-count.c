#include <stdio.h>
int main(){
    int array[]= {1,2,3,4,5,6,7,8,1,2,1,1,1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    int freq[size];
    for(int i =0; i<size ; i++){
        freq[i] = -1;
    }
    for(int i =0 ; i < size; i++){
        int count = 1;
        for (int j = i+1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if (freq[i] != 0) {
            freq[i] = count;
            printf("\nThe number of time %d occurs is %d", array[i], freq[i]);
        }
    }

    return 0;
}