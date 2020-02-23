#include "matrixOps.h"


void createMatrix(int rowCount,int columnCount,int rangeMatrix){

  

    srand(time(NULL));

    int **myArray = NULL;

    myArray = (int*)malloc (rowCount *sizeof(int));

    for (int i = 0; i < rowCount; i++){

        myArray[i] = (int*)malloc(columnCount *sizeof(int));

    }

    for (int i = 0; i < rowCount; i++)
    {
       for (int j = 0; j < columnCount; j++){

           myArray[i][j]= 0 + (rand()% rangeMatrix);
       }
      
        
    }

    for (int i = 0; i < rowCount; i++)
    {
       for (int j = 0; j < columnCount; j++){

           printf("%d",myArray[i][j]);
       }
       printf("\n");
      
        
    }
    
    free(myArray);
    
    

}