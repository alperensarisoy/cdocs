#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//bellekte isim kadar dinamik bellek ayrilir.
//numara dizisinin basamak toplami kadar bellek genisletilir
//genisletilen bellege isim dizisi sıgdıgı kadar yazdirilir.
//sigmayan kismi bos birakilir
int main(){
	
	char isim[]="alperen";
	char numara[]="2016010205001";
	
	int isimSize=strlen(isim);
	int numaraSize=strlen(numara);
	int toplam=0,i=0,j=0,counter=0;
	//öğrenci numarası sayılar toplamı
	while(i<numaraSize){
		toplam+=numara[i]-'0';
		i++;
	}
	printf("%d",toplam);
	
	
	char* isimDinamik= (char*)calloc(isimSize+1, sizeof(char));
	
	for(i=0;i<isimSize;i++){
		isimDinamik[i]=isim[i];
	}
	
    //dinamik hafıza artışı yapıldı
	isimDinamik=(char*)realloc(isimDinamik,toplam+1);
	int tekrar= toplam/isimSize;
	
	for(i=0;i<tekrar;i++){
		for(j=0;j<isimSize;j++){
			isimDinamik[counter]=isim[j];
			counter++;
		}
	}
	
	isimDinamik[counter]='\0';
	
	printf("%s",isimDinamik);
	free(isimDinamik);
	return 0;
}
