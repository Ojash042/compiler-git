#include<stdio.h>
#include <string.h>

void main(int arg, char *argv){
    char *str = "Hello World!";
    while(*str != '\0'){
        printf("%c \n",*str);
        if(*(str++) == 'e'){
            str++;
        }
        str++;
    } 
}