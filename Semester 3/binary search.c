#include<stdio.h>

int binarySearch(int array[], int x, int l, int r){
	while (l<=r){
		int mid=l+(r-l)/2;
		if (array[mid]==x)
			return mid;
		if (array[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return-1;
}

int main(void){
	int array[]={1,2,3,4,5,21,42};
	int n=sizeof(array)/sizeof(array[0]);
	int x;
	puts("\tProgram Binary Search kelompok 10\n\n");
	puts("Deretan Angka");
	puts("=================");
	puts("=1|2|3|4|5|21|42=");
	puts("=================\n");
	puts("==========================================");
	printf("Masukan angka yang anda cari : "); scanf("%d", &x);
	printf("Angka yang dimasukan : %d", x);
	int result=binarySearch(array, x, 0, n-1);
	if (result==-1)
		printf("Angka yang anda masukan tidak ditemukan\n");
	else 
		printf("Angka yang anda cari ada di index %d", result);
	puts("==========================================");
	return 0;
}

