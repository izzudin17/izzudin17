/* Progam Memilih Menu Makanan */
#include<stdio.h>
int main()
{
    int pilih, sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, total;  /* MENAMPNG TIPE DATA VARIABLE */
    /* YANG AKAN DI TAMPILKAN DI LAYAR SAAT RUN*/
    printf("Izzudin Adian Khusaini\n");
    printf("21081010014\n\n");
    printf("\n DAFTAR MENU MAKANAN \n");
    printf("------------------------- \n");
    printf("Pilih no menu di bawah ini \n");
    printf("1. Tempe Bakar \n");
    printf("2. Pecel Lele \n");
    printf("3. Ikan Bakar  \n");
    printf("4. Ayam Bakar \n");
    printf("5. Sate Ayam \n");
    printf("0. Selesai dan bayar\n\n");
    do
    {
        printf("Pilih : ");
        scanf("%i",&pilih);
        if (pilih==1)
        {
            printf("Harga Tempe Bakar Rp.2000,- \n");
             sum1 = +2000;
        }
        else if (pilih==2)
        {
            printf("Harga Pecel Lele Rp.5000,- \n");
             sum2 = +7000;
        }
        else if (pilih==3)
        {
            printf("Harga Ikan Bakar Rp.15000,- \n");
             sum3 = +15000;
        }
        else if (pilih==4)
        {
            printf("Harga Ayam Bakar Rp.20000,- \n");
             sum4 = +20000;
        }
        else if (pilih==5)
        {
            printf("Harga Sate Ayam Rp.25000,- \n");
             sum5 = +25000;
        } else if (pilih==0) {
            continue;
        }
    }
    while (pilih!=0);   /*MENGULANG SATU STSTEMEN ATAU PERINTAH SELAMA KONDISI YANG ADA MASIH BENAR*/
    printf("Selesai \n");
    total = sum1+sum2+sum3+sum4+sum5;
    printf("%d Total bayar", total);
}
