#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    int size = 0, i = 0;
    
    if(n < 256) 
        size = 8;
    else if(n < 512)
        size = 10;
    else
        size = 16;

    int bit = 1;
    int binList[size];

    for(i = 0; i < size; i++){
        binList[(size -i) -1] = bit;
        bit = bit << 1;
    }
    
    int temp = 0;
    for(i = 0; i < size; i++) {
        temp = (n & binList[i]);
        if(temp > 1)
            temp = 1;
        printf("%d ", temp);
    } 

    return 0;    
}
