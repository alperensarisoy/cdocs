#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//girilen sayıları teklik ve çiftlik durumuna göre ayıran, 
//dicamik olarak bellek ayırıp sayıları diziye kaydeden,
//son olarak bu sayıları yazdıran program.


int main(){
	
	int numara,i,indis=0,indistek=0,x=2,y=2;
	scanf("%d",&numara);
	int* tek=(int*)calloc(x,sizeof(int));
	int* cift=(int*)calloc(y,sizeof(int));
	for(;numara!=0;){
		int basamak=numara%10;
		if(basamak%2==0){
			cift[indis]=numara%10;
			cift=(int*)realloc(cift,y+1*sizeof(int));
			numara=numara/10;
			
			indis++;
			y++;
		}
		else{
			tek[indistek]=numara%10;
			tek=(int*)realloc(tek,x+1*sizeof(int));
			numara=numara/10;
			indistek++;
			x++;
		}
	}
	cift[indis]='\0';
	tek[indistek]='\0';
	for(i=0;i<indis;i++){
		printf("%d",cift[i]);
	}
	printf("\n");
	for(i=0;i<indistek;i++){
		printf("%d",tek[i]);
	}
	free(cift);
	free(tek);
	
	return 0;
}
