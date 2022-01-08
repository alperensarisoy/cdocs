/*
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is
surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2.
The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3.
The number 20 has binary representation 10100 and contains one binary gap of length 1. 
The number 15 has binary representation 1111 and has no binary gaps. 
The number 32 has binary representation 100000 and has no binary gaps.

Coded by @alperensarisoy
*/


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
