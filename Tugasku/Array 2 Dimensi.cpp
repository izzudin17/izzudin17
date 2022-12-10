#include<stdio.h>

int main(void)
{
	// insialisasi tipe data
	// untuk 7 yang pertama untuk anggota array nya
	// untuk 7 yang kedua untuk karakter huruf nya
	char warna [7][7] ={"merah","jingga","kuning","hijau","biru","nila"}; 
	int a;
	
	printf("Warna-Warna pelangi : \n");
	
	for(a=0;a<7;a++) // for pertama
	{
		// menampilkan isi array di atas
		printf("%s\n",warna[a]);
	}
	
		return 0;
}
