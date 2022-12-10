#include <stdio.h>
#include <conio.h>
#include<windows.h>

main()
{
	system("color A"); //untuk menganti warna saar di run 
	char nama[50], NPM[30], telp[15], TTL[100];
	int umur;

	printf("\t\t\tBIODATA PRIBADI MAHASISWA UPN VETERAN JATIM\n"); //judul yang akan di tampilkan diatas 

	printf("Masukkan data diri anda\n");
	printf("Nama\t: ");
	scanf("%s",nama);        //("%format", & variable)
	printf("Nomor Pokok Mahasiswa\t:");
	scanf("%s",NPM);		//("%format", & variable)
	printf("Umur\t: ");
	scanf("%d",&umur);		//("%format", & variable)
	printf("No. Tlp\t: ");
	scanf("%s",telp);		//("%format", & variable)
	printf("Tanggal Lahir:");
	scanf("%s",TTL);		//("%format", & variable)

	printf("Hello %s, Umur %d, No. Telepon %s\n",nama,umur,telp);
	printf("Bagaimana Kabar anda hari ini?\n");
	printf("Semoga Semua di beri kesehatan Agar bisa melakukan aktivitas seperti biasa");
}
