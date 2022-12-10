#include <stdio.h>
#include <stdlib.h>

int pil1(int A, float N, float *B){
	*B = (A + N) / 2;
	return *B;
}

int pil2(int A, float N, float *B){
	*B = A * N;
	return *B;
}

int pil3(int A, float N, float *B){
	*B = (A * A) - N;
	return *B;
}

main(){
	int A, pil;
	float N, B;
	printf("Masukkan Nilai A (1-25) : ");
	scanf("%i", &A);
	printf("Masukkan Nilai A (1-25) : ");
	scanf("%f", &N);
	printf("Pilihan Rumus / Menu :\n");
	printf("1.  B = (A + N) / 2\n");
	printf("2.  B = A * N\n");
	printf("3.  B = (A * A) - N\n");
	printf("Masukan Rumus Pilihan Anda (1/2/3) : ");
	scanf("%i", &pil);
	
	switch(pil){
		case 1 :{
			pil1(A, N, &B);
			printf("B = %.1f", B);
			break;
		}
		case 2 :{
			pil2(A, N, &B);
			printf("B = %.1f", B);
			break;
		}
		case 3 :{
			pil3(A, N, &B);
			printf("B = %.1f", B);
			break;
		}
	}
}
