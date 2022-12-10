#include<stdio.h>

int main(){
	int data[3];
	
	printf("Masukkan Nama Anda  : \n");
	scanf("%s", &data[0]);
	printf("Masukkan No KTP Anda: \n");
	scanf("%d", &data[1]);
	printf("Masukkan Nama Calon Yanga Anda Pilih :\n");
	scanf("%s", &data[2]);
	
	printf("Dengan nama %s, dan No KTP %d, Memilih Calon Yang Bernama %s", data[0], data[1], data[2]);
	return 0;
}
