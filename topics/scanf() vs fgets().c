#include <stdio.h>
int main()
{
    char name[100];
    printf("What is your name ");
    // scanf("%s",&name); 
    //scanf() will only read upto 1st blank space or white spaceand leave the rest
    //for example if I type Shikhar Saxena and print it, the output will be only Shikhar.
    
    fgets(name,100,stdin);
    //fgets(variable,length,standard input) will also read the blank spaces and gives the output Shikhar Saxena.
    //But, it will add a new line character.
    printf("Hi %s, how are you",name);
    //By usng scanf, the outur will be - Hi Shikhar, how are you.
    //By using fgets(), the output will be- Hi Shikhar Saxena
    //, how are you

    //We can remove the \n by-
    // #include <string.h>
    // fgets(name,25,stdin);
    // name[strlen(name)-1] = "\0";
    return 0;
}
