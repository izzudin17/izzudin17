
#include<stdio.h>

int main(){
	printf("Nama\t= Izzudin Adian Khusaini\n");
 	printf("NPM\t= 21081010014\n\n");
 	printf("-----------------------------------------\n");
	printf("Program C Menghitung Nilai Rata-rata\n");
	printf("------------------------------------\n");
	
int i, banyak, data[30];
	float average, jumlah;
	printf("Masukkan banyak data yang akan dihitung: ");
	scanf("%d", &banyak);
  		for (i = 0; i < banyak; i++) {
    		printf("Data ke-%d : ", i+1);
    			scanf("%d", &data[i]);
    jumlah += data[i];
  }
  
  average = jumlah / banyak;
  printf("------------------------------------\n");
  printf("Jumlah dari data adalah %.0f\n", jumlah);
  printf("Rata-rata yang didapatkan yaitu %.2f\n\n\n", average);
  return 0;
}
