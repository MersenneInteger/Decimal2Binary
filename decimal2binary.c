#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void switchOne(int array[], int size);
//void initializeArraySize(int array[], size_t size);
    
int main(int argc, char *argv[]){

    int decNumber = atoi(argv[1]);
    int numLength = strlen(argv[1]);
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
    }/*
    else if (decNumber >= byteSize){
        int *numList = calloc(size8, sizeof(int)); 
        int binList[] = {256,128,64,32,16,8,4,2,1};
        
        while (counter < 9){
            numList[counter] = (decNumber & binList[counter]);
            counter++;
        }
        switchOne(numList, binSize16);
        for(int i = binSize16-1; i >= 0; i--)
            printf("%d", numList[i]); 
    }*/
    else{/*
        printf("Error invalid input");
        return 1;*/
    }
    printf("\n");
}//end of main

void switchOne(int array[], int size){
        
    for(int i = 0; i < size; i++){
        if(array[i] != 0)
            array[i] = 1;
     }        
}
