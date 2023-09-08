#include <stdio.h>
#include <stdlib.h>

int main(){
    long a,b,c,d = 3;
    long e,f,g,h = 5;

    for(int i = 0; i<1000000000; i++){
        a = b+i;
        c = d+e;
        f = g +h;
    }  
}
