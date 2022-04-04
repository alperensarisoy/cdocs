#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//rekursif fonksiyonla girinin sayýnýn girilen kuvvetini alan program
int kuvvet(int sayi,int us){
	if(us==1){
		return sayi;
	}
	else{
		return sayi*kuvvet(sayi,us-1);
	}
	
}
int main(){
	int sayi,sonuc,us;
	printf("Bir sayi girin:  ");
	scanf("%d",&sayi);
	printf("\nKaçýncý kuvvetini istiyorsunuz?:  ");
	scanf("%d",&us);
	sonuc=kuvvet(sayi,us);
	printf("%d",sonuc);
	return 0;
}
