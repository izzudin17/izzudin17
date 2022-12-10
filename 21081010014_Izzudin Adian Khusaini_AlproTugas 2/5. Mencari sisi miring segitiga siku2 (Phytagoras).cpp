#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	
	printf("\t\t\t\t\t\tMENGHITUNG SISI MIRING SEGITIGA\n");   //menampilkan output ke layar komputeryang telah di tuliskan
	printf("Masukan sisi 1");
	scanf("%d",&b);
	printf("Masukan sisi 2");
	scanf("%d", &c);
	
	a=sqrt(pow(c, 2) +pow(b, 2));
	printf("Nilai Sisi Miring Segitiga : %d",a);   //menampilkan output ke layar komputeryang telah di tuliskan
	
	return 0;
}
