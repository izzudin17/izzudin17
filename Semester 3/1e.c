#include <stdio.h>
 int main(){
 	printf("Nama\t= Izzudin Adian Khusaini\n");
 	printf("NPM\t= 21081010014\n\n");
 	printf("-----------------------------------------\n");
 	int a;
 	int nilai[6], frekuensi[6];
 	a=6;
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
 	int b;
 	int n = 0;
 	b=0;
 	printf("-----------------------------------------\n");
 	printf("|     nilai\t|\t|   frekuensi\t|\n");
 	printf("-----------------------------------------\n");
 	for(i=0; i<a; i++){
 	printf("|\t%d\t| \t",nilai[i]);
 	printf("|\t%d\t|\n", frekuensi[i]);
	 }
	printf("-----------------------------------------\n");
	 printf("siswa yang nilainya dibawah 70\n");
	 printf("-------------------------------\n");
 	for(i=0; i<a; i++ ){
	b = b+1;
 		if(nilai[i] < 70){
 			printf("Nilai[%d]=%d\t", b, nilai[i]);
 			printf("frekuensi[%d]=%d\n",b, frekuensi[i]);
 			n = n+frekuensi[i];
		 }
	
	}
	printf("Jumlah = %d", n);
	 }
