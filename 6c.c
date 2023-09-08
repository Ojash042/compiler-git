#include <stdio.h>
#include <stdlib.h>

int main(){
    long a,b = 0;
    for(int i=0; i<1000000000; i++){
        a++;
    }

    for(int i=0; i<1000000000; i++){
        b++;
    }

    return 0;
}
