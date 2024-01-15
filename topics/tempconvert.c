#include <stdio.h>
#include <ctype.h>
int main(){
    char unit;
    float temp;
    printf("\nIs the temp F or C?: ");
    scanf("%c", &unit);
    unit = toupper(unit);
    if(unit == 'C'){
        printf("The temp is currently in C: ");
        scanf("%f", &temp);
        temp = (temp *9 / 5) + 32;
        printf("The temp i F is: %.2f", temp);
    }
    else if(unit == 'F'){
        printf("The temp is currently in F: ");
        scanf("%f", &temp);
        temp = ((temp-32) * 5) / 9;
        printf("The temp i C is: %.2f", temp);
    }
    else{
        printf("Not a valid unit of measurement");
    }


    return 0;
}