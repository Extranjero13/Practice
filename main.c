#include <stdio.h>
#include <stdlib.h>

float* createFloatArray(size_t size){
    float* array = (float*)malloc( size * sizeof(float));       //Door open
    float count=0.00;
    for(size_t i = 0; i<size; i++){
        array[i]=count;
        count++;
    }
    return array;
}

int* numbers(size_t arrNumbers){
    int* genArray = (int*)malloc(arrNumbers * sizeof(int)); 
    int count=1;
    for(size_t i = 0; i<arrNumbers;i++){
        genArray[i]=count;
        count *=2;
    }
    return genArray;
}

int main(){
   float months[12]={0.27, 0.45, 0.82, 0.11, 0.65, 0.66 , 0.27, 0.99 , 0.87, 0.12, 0.65, 0.08};
   size_t sizeMonths= sizeof(months)/sizeof(*months);       //4*12 = 48 bytes

   float largest= *months;
   float smallest = *months;
   float sum = 0.00;


   for(size_t i=0;i<sizeMonths;i++){
        sum+=months[i];

        if(months[i] > largest){
            largest = months[i];
          
        }

        if(months[i]<smallest){
            smallest=months[i];
        }
   }
        //let us go backwards
    printf_s("Here is the array months backwards: \n");
    for(size_t i=sizeMonths;i>0; i--){
    printf_s("%.2f , ",months[i-1]);
   }

    float average = sum / sizeMonths;
    float* pSum= &sum;

    printf_s("\nThe average rainfaill is: %.3f\n",average);
    printf_s("The largest float value is: %.2f\n", largest);
    printf_s("The smallest float value is: %.2f\n", smallest);

    printf_s("This variable is pointing to the sum: %.3f\n", *pSum);


    size_t arraySize= 12;
    float* myArray = createFloatArray(arraySize);
    for(size_t j = 0; j<arraySize;j++){
        printf_s("%.2f , ",myArray[j]);
    }    

    free(myArray);      //Door closes
    printf("\n------------------------------------------------\n");
    size_t intArr=10;
    int* resultArr = numbers(intArr);
    for(size_t k = 0; k<intArr;k++){
        printf_s("\n%d",resultArr[k]);

    }

    free(resultArr);


   return 0;
}
