#include<stdio.h>
#include<string.h>
void main(){
	char nama[] = "Izzudin";
    char huruf = 'i';
    char* hasil;
    char title[] = "Praktikum Modul 6";
    char title_copy[20];

    strcpy(title_copy, title);
	printf("Isi nya adalah %s\n", title_copy);
	
	printf("Mencari huruf '%c' dalam nama...\n", huruf);
    hasil = strchr(nama, huruf);
    while(hasil != NULL){
        printf("Ditemukan pada huruf ke-%d\n" , hasil-nama+1);
        hasil = strchr(hasil+1, huruf);
    }
    
    strcat(nama, title);

    printf("Gabungannya: %s\n", nama);
    
}
