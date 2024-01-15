#include <stdio.h>
int main(){
    printf("Calculate nth root of any positive interger");
    int a;
    printf("\nEnter a positive number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of n: ");
    scanf("%d",&b);
    int d = 1;
    int i =1;
    for(i ; i < a; i++){
        if( a%i == 0){
            // printf("\nAns %d", i);
            for(int j = 1; j <= b; j++){
                d = d*i;
            }
            if(d == a){
                break;
            }
        }
    }
        
        // if(a <= c*c){
        //     break;
        // }
        // c+=0.0001;
    printf("\nAns %d", i);
    return 0;
}