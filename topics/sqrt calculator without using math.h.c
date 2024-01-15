#include <stdio.h>
int main(){
    float a;
    printf("\nEnter a positive number: ");
    scanf("%f",&a);
    float c = 1;
    while(c<=a){
        if(a <= c*c){
            break;
        }
        c+=0.0001;
    }
    printf("\nAns %.3f", c);
    return 0;
}