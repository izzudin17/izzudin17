#include <stdio.h.>
#include <string.h>

struct data_pegawai
{
	int nip;
	char nama[30];
	long int gaji;
};

int main()
{
	struct data_pegawai peg;
	peg.nip =17239;
	strcpy(peg.nama, "sekar Rinayung jagad");
	peg.gaji = 20000000;
	
	printf("NIP		: %d\n",peg.nip);
	printf("Nama	: %s\n",peg.nama);
	printf("Gaji	:%id\n",peg.gaji);
	
	return 0;
}
