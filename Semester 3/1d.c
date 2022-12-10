#include <stdio.h>
 int main(){
 	printf("Nama\t= Izzudin Adian Khusaini\n");
 	printf("NPM\t= 21081010014\n\n");
 	printf("-----------------------------------------\n");
 	int a;
 	a=6;
 	int nilai[a], frekuensi[a];
 	nilai[0] = 60;
 	nilai[1] = 65;
 	nilai[2] = 70;
 	nilai[3] = 75;
 	nilai[4] = 80;
 	nilai[5] = 85;
 	nilai[6] = 90;
 	
 	frekuensi[0] = 1;
 	frekuensi[1] = 1;
 	frekuensi[2] = 3;
 	frekuensi[3] = 5;
 	frekuensi[4] = 7;
 	frekuensi[5] = 9;
 	frekuensi[6] = 4;
 	int i;
 	int b, x, y, r, j, f;
 	int n = 0;
 	f=0;
 	y=0;
 	j=0;
 	x=0;
 	b=0;
 	printf("|     nilai\t|\t|   frekuensi\t|\n");
 	printf("-----------------------------------------\n");
 	for(i=0; i<=a; i++){
 		printf("|\t%d\t| \t",nilai[i]);
 		printf("|\t%d\t|\n", frekuensi[i]);
	 }
	int min,max;
	int k;
	max=nilai[0];
	min=nilai[0];
	
	for (k=0;k<=a;k++){
		if (nilai[k]>=max){
	max=nilai[k];
	}
	else if (nilai[k]<=min){
	min=nilai[k];
	}
	}
	
	printf("Nilai tertinggi:%d", max);
	printf("\nNilai terendah:%d", min);
	return 0;
}
