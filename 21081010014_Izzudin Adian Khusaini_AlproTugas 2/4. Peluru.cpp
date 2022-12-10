#include <stdio.h>
#include <math.h>

int main()
{
	double kecepatan, sudut, jarak;   //untuk mendefinisikan variabel numerik yang menyimpan angka dengan titik desimal
	kecepatan = 50;
	sudut = 40;
	
	jarak = 2 * kecepatan * kecepatan * sin (sudut * 3.14 / 180) * cos (sudut * 3.14 / 180) / 9.8;
	
	printf("jarak = %f, jarak");  //menampilkan output ke layar komputeryang telah di tuliskan saad di run
	
	return 0;
}
