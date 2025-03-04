#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "helper.h"

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
   /*float months[12]={0.27, 0.45, 0.82, 0.11, 0.65, 0.66 , 0.27, 0.99 , 0.87, 0.12, 0.65, 0.08};
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

        */
    printf("\n---------------------------\n");

    struct backpacks backpacks1;

    backpacks1.pencils=3;
    backpacks1.hasBooks=true;
    if(backpacks1.hasBooks == true){
        printf("Nice. This student is ready and has %d pencils\n",backpacks1.pencils);
    }else{
        printf("This student is unprepared\n");
    }

     User user1={"Anthony","password123",123};
     User user2={"Selena","password456",456};

    printf("%s\n",user1.name);
    printf("%s\n",user1.password);
    printf("%d\n",user1.id);


    printf("\n---------------------------\n");


    Report report1={"Chemisty",1560};
    Report report2={"Biology",1101};
    Report report3={"English",4510};
    Report report4={"CS",2120};

    Report reportarr[4]={report1,report2,report3,report4};

    size_t sizeReportArr = sizeof(reportarr)/sizeof(*reportarr);

    for(size_t i =0;i<sizeReportArr;i++){
        printf("%-12s\t",reportarr[i].course);          //-12. - does a left justify. 12 gives you 12 spaces
        printf("%d\n",reportarr[i].courseNumber);
    }



    printf("\n---------------------------\n");



    Point p1;
    p1.x=4;
    p1.y=5;
    printf("(%d,%d)\n",p1.x,p1.y);

    Point *p2;
    p2=malloc(sizeof(Point));     //Allocates space for the heap

    (*p2).x=5;
    p2->y=2;      //dereference pointers
    printf("(%d,%d)\n",(*p2).x,p2->y);
    free(p2);

    printf("\n---------------------------\n");

    int length=3;
    Point *array;

    array=malloc(length * sizeof(Point));

    array[0].x=0;
    array[1].x=1;
    array[2].x=2;

    array[0].y=0;
    array[1].y=1;
    array[2].y=2;


    printf("Array...\n");

    for(size_t i =0;i<length;i++){
        printf("(%d,%d)\n",array[i].x,array[i].y);
        printf("\n");
    }
    free(array);

    //Practice using reaclloc. So we change the length variable.
    // Realloc will move the original block of memory into a new block of memory. So a new block of memory is required.

   return 0;
}

