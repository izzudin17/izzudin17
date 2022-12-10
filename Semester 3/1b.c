#include <stdio.h>

 int main(){
 	int a;
 	printf("Nama\t= Izzudin Adian Khusaini\n");
 	printf("NPM\t= 21081010014\n\n");
 	printf("-----------------------------------------\n\n");
 	printf("======MENAMPILKAN TABLE DALAM BENTUK PROGRAM =======\n\n");
	int nilai[7], frekuensi[a];
 	a = 7;
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
 	printf("+---------------------------------------+\n");
 	printf("|     nilai\t|\t|   frekuensi\t|\n");
 	printf("+---------------------------------------+\n");
 	for(i=0; i<a; i++){
 		printf("|\t%d\t| \t",nilai[i]);
 		printf("|\t%d\t|\n", frekuensi[i]);
	 }
	 	printf("+---------------------------------------+\n");
}
