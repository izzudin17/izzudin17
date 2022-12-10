#include <stdio.h>

void jabatan () //variable harus sama dengan if else if untuk passing nilai input dari fungsi main
{
	int nilai;
	printf("Input Nilai: ");
    scanf("%d", &nilai);
    
    if (nilai >=17 && nilai <= 20)
        printf("Manager");
    else if(nilai >= 14 && nilai <= 16)
        printf("Asisten Manager");
    else if(nilai >= 11 && nilai <= 13)
        printf("Senior Eksekutif");
    else if(nilai >= 8 && nilai <= 10)
        printf("Eksekutif");
    else if(nilai >= 6 && nilai <= 8)
        printf("Staff");
    else if(nilai >= 1 && nilai <= 5)
        printf("Operator");
    else
        printf("MAAF Nilai Yang Anda Masukkan Salah");
    printf("\n");
}


int main ()

{
	
	printf("=================================================\n");
	printf("\tPrediksi Jabatan Bedasarkan Nilai\t\n");
	printf("=================================================\n");
	printf ("\n");
	
    
    jabatan(); //pemanggilan fungsi menggunakan variable yang di deklarasikan di int main
    
    
    return 0;
}
