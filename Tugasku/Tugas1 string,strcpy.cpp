#include <stdio.h>
#include <string.h>     //library string ini diperlukan untuk fingsi strcpy
#include <windows.h>

int main()
{
	system ("color D"); //memberi warna pada saat di jalankan 
	char Nama[50];   //digunakan untuk menampung 1 digit karakter, entah itu berupa huruf maupun angka. Variabel yang didefinisikan untuk menampung tipe data 
	char NPM[50];     
	char Prodi[50];  
	char Kelas[10];
	int nilai; 
	
	//copy string title ke title_copy atau untuk meng-copy string dari sebuah variabel ke variabel yang lainnya.
	strcpy (Nama,"Izzudin Adian Khusaini\n");   
	strcpy (NPM,"21081010014\n");
	strcpy (Prodi,"Informatika\n");
	strcpy (Kelas,"J081\n");
	nilai = 100;
	
	// maka sekarang title_copy akan berisi 
	printf("Nama : %s",Nama);   
	printf("NPM : %s",NPM);
	printf("Prodi : %s",Prodi);
	printf("Kelas : %s",Kelas);
	printf("nilai : %i",nilai);
	return 0;
}

