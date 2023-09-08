#include <stdio.h>
#include <stdlib.h>

int main(){
    long a,b,c,d = 3;
    long e,f,g,h = 5;
    
    c = d+e;
    f = g+h;

    for(int i = 0; i<1000000000; i++){
        a = b+i;
    }

    return 0;
}
