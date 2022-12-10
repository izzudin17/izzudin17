#include <stdio.h.>
#include <string.h>

struct data_pegawai
{
	int nip;
	char nama[30];   //ariabel yang didefinisikan untuk menampung tipe data char
	long int gaji;
};

int main()
{
	struct data_pegawai peg;
	peg.nip = 21081010;
	strcpy(peg.nama, "Izzudin Adian Khusaini");
	peg.gaji = 20000000;
	
	//menampilkan output ke layar komputeryang telah di tuliskan
	printf("NIP\t: %d\n",peg.nip);    
	printf("Nama\t: %s\n",peg.nama);
	printf("Gaji\t:%id\n",peg.gaji);
	
	return 0;
}
