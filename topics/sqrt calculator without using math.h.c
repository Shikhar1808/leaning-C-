#include <stdio.h>
int main(){
    int a;
    printf("\nEnter a positive number: ");
    scanf("%f",&a);
    int b =3;
    int c = 0;
    int i;
    int d;
    while(c=1){
        for(i =1; i < a; i++){
            if( a%i == 0){
                break;
            }
        }
        for(int j = 1; j = b; j++){
            d *= i;
        }
        if(d == a){
            break;
        }
        c++;
        // if(a <= c*c){
        //     break;
        // }
        // c+=0.0001;
    }
    printf("\nAns %.3f", i);
    return 0;
}