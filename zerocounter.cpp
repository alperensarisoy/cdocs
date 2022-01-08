#include<stdio.h>    
#include<stdlib.h>  
int main(){   // array to store binary number
    int binaryNum[20];
    int n;
    scanf("%d", &n);
     // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
	
	
	int a=0,temp=0,max=0;
	while(a<i){
		
		
	
	for(;binaryNum[a]==1&&binaryNum[a+1]==0;a++){
	temp=0;
	while(binaryNum[a+1]==0){
		temp++;
		a++;
		if(max<temp){
			max=temp;
		}
		if(binaryNum[a+1]=='\0'){
			
		}
	}
	if(binaryNum[a+1]=='\0'){
		
			max=0;
	}
	
	}
	a++;
	
	}
	
	printf("\n %d ",max);
	

}  
