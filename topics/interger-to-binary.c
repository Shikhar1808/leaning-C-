#include <stdio.h>
#include <string.h>
int main(){
    int a = 9;
    int binary[100
    ];
    int i =0;
    int x;
    while(a>=0){
        
        x = a%2;
        binary[i] = x;
        a = a/2;
        i++;
        if(a == 0){
            binary[i] = 0;
            break;
        }
    } 
    for(int j = i-1; j>=0; j--){
        printf("%d",binary[j]);
    }
    return 0;
}
