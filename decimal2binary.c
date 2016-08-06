#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void switchOne(int array[], int size);
    
int main(int argc, char *argv[]){

    int decNumber = atoi(argv[1]);
    const int binSize8 = 8, binSize16 = 16;
    const int byteSize = 256;
    const size_t size8 = 8, size16 = 16;
    int counter = 0;
    
    if (decNumber < byteSize){

        int *numList = calloc(size8, sizeof(int));
        int binList[] = {128,64,32,16,8,4,2,1};

        while (counter < size8){
            numList[counter] = (decNumber & binList[counter]);    
            counter++;        
        }
        switchOne(numList, binSize8);
        for(int i = 0; i < binSize8; i++)
            printf("%d", numList[i]);
    }
    else if (decNumber >= byteSize){    

        int *numList = calloc(size16, sizeof(int)); 
        int binList[] = {1,2,4,8,16,32,64,128,256};

        while (counter < (binSize8+1)){
            numList[counter] = (decNumber & binList[counter]);
            counter++;
        }
        switchOne(numList, binSize16);
        for(int i = binSize16-1; i >= 0; i--)
            printf("%d", numList[i]); 
    }
    else if(decNumber < 1){
        printf("Error invalid input, enter positive integer.");
        return 1;
    }
    else{ printf("Error invalid input\n"); }
    printf("\n");
}//end of main

void switchOne(int array[], int size){
        
    for(int i = 0; i < size; i++){
        if(array[i] != 0)
            array[i] = 1;
     }        
}
