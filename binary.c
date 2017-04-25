#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    int size = (n < 256) ? 8: 16;
    int bit = 1, i = 0;
    int bit_list[size];

    for(i = 0; i < size; i++) {
        bit_list[(size -i) -1] = bit;
        bit = bit << 1;
    }
    
    int temp = 0, j = 0;
    
    for(i = 0; i < size; i++, j++) {
        temp = n & bit_list[i];
        if(temp > 1)
            temp = 1;
        if(j % 4 == 0 && j != 0) printf(" ");
        printf("%d", temp);
    } 

    return 0;    
}
