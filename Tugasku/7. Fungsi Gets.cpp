#include <stdio.h>
#include <windows.h>
int main()
{
	char nama[30];   //ariabel yang didefinisikan untuk menampung tipe data char
	char NPM[30];
	
	printf("nama anda : ");
	gets(nama);
	printf("NPM anda : ");
	gets(NPM);  // untuk mengambil input dalam satu baris
	printf("Hai ,%s,%s. Selamat Belajar Bahasa C\n",nama,NPM);  //menampilkan output ke layar komputeryang telah di tuliskan
	
	return 0;
}
