#include <stdio.h>
#include <conio.h>
#include<windows.h>

main()
{
	system("color A");
	char nama[50], NPM[30], telp[15], TTL[100];
int umur;

printf("\t\t\tBIODATA PRIBADI MAHASISWA UPN VETERAN JATIM\n");

printf("Masukkan data diri anda\n");
printf("Nama\t: ");
scanf("%s",nama);
printf("Nomor Pokok Mahasiswa\t:");
scanf("%s",NPM);
printf("Umur\t: ");
scanf("%d",&umur);
printf("No. Tlp\t: ");
scanf("%s",telp);
printf("Tanggal Lahir:");
scanf("%s",TTL);

printf("Hello %s, Umur %d, No. Telepon %s\n",nama,umur,telp);
printf("Bagaimana Kabar anda hari ini?\n");
printf("Semoga Semua di beri kesehatan Agar bisa melakukan aktivitas seperti biasa");
}
