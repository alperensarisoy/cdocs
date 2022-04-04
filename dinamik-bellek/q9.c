#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//bellekte name kadar yer açılır, ardından bellek studentNumber kadar dinamik olarak genişletilir.
//genişleyen diziye name sığdığı kadar kaydedilir. sığmayan kısmı boş bırakılır
//dizi ekrana yazdırılır
int main()
{
    char name[] = "alperen";
    char studentNumber[] = "10205001";

    int nameSize = strlen(name);
    int studentNumberSize = strlen(studentNumber);
    int i = 0,j = 0;
    int studentNumberDigitsSum = 0;

   
    for (i=0; i < studentNumberSize; i++){
    	studentNumberDigitsSum += studentNumber[i];
	}
        

   
    char* nameHeap = (char*)calloc(nameSize+1, sizeof(char));

    
    for (i = 0; i < nameSize; i++)
        nameHeap[i] = name[i];

   
    nameHeap = (char*)realloc(nameHeap, studentNumberDigitsSum+1);

    
    int repeated = studentNumberDigitsSum / nameSize;

    int counter = 0;

    // repeat the inside loop accoding to repated variable
    for ( i = 0; i < repeated; i++) {
        
        // Copy my name to the heap space after reallocated
        for ( j = 0; j < nameSize; j++) {
            nameHeap[counter] = name[j];
            counter++;
        }
    }

    // it was put to stod the printing Null Operator
    nameHeap[counter] = '\0';

    printf("%s", nameHeap);

    free(nameHeap);
    return 0;
}
