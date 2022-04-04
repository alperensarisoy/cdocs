#include <iostream>
#include<stdio.h>
#include<stdlib.h>
//decimal sayýyý binary sayýya dinamik bellek kullanarak dönüþtüren program
int main(){
	int numara=2016,i,indis=0,x=2;
	char* a=(char*)calloc(x,sizeof(char));
	while(numara!=0){
		
		i=numara %2;
		a[indis]=i;
		x++,indis++;
		a=(char*)realloc(a,x);
		numara=numara/2;
		
	}
	int sayi=indis-1;
	char* temp=(char*)calloc(indis,sizeof(char));
	for(i=0;i<indis;i++,sayi--){
		temp[i]=a[sayi];
	}
	
	
	for(i=0;i<indis;i++){
		
		printf("%d",temp[i]);
	}
	
	free(a);
	free(temp);
	return 0;
}
