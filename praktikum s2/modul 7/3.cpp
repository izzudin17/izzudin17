#include<stdio.h>
#include<string.h>

double luas_lingkaran (double jari_jari)
{
	double lingkaran;
	lingkaran = 22/7 * jari_jari * jari_jari;
	return lingkaran;
}

int main()
{
	int lingkaran, jari_jari;
	jari_jari = 4;
	lingkaran = luas_lingkaran(jari_jari);
	printf("Luas Lingkaran = %lf\n", lingkaran);
	return 0;
	
}
