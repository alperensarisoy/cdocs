#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//kullan�c�dan string al�n�r.
//yine kullan�c�dan aranan harf aran�r
//string dizisi ve aranan harf fonksiyona g�nderilir
//fonksiyon aranan harfi ve ka� tane buldu�unu, bulunan son harften sonra kelimenin geri kalan�n� geri d�nd�r�r.
char *findCharacter(char* A,char c,int *adet){
	
	int tane=0;
	int eleman =strlen(A);
	static char temp[100];
    int izle,sayi=0;
	char geri;
	int i=0,x=0;
	while(i<eleman){
		
		if(A[i]==c){
			izle=i;
			tane++;
		}
		
		i++;
		
	}
	int counter=0;
	for(i=0;izle<eleman;izle++,i++){
		temp[i]=A[izle];
		counter++;
	}
	temp[counter]='\0';
	*adet=tane;
	
	return temp;
	
	
	
}

int main(void){
	
	char A[100], c, *s;
	int adet=0;
	printf("Enter string:");
	scanf("%[^\n]%*c", &A);
	printf("Enter a search character:");
	scanf("%c",&c);
	s=findCharacter(A,c,&adet);
	if(s !=NULL){
		printf("\nFrom Last Position:");
		puts(s);
		printf("Found %d character(s)",adet);
	}
	else
	printf("Character not found..");
	return 0;
	
}
