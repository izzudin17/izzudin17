#include <stdio.h>

int main()
{
	int jumlah = 10;             //input nilai yang di variablekan
	float hargaPerUnit = 2500;
	double hargaTotal;
	
	hargaTotal = hargaPerUnit * jumlah;
	
	printf("Harga Toal + %f",hargaTotal);  //menampilkan hasil harga total
	
	return 0;
}
