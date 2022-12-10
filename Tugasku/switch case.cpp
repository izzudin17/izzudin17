#include<stdio.h>
#include<windows.h>
int main()
{
	system("color D");             /*PRMANIS AGAR ELEGAN*/ 
  	int num1,num2,opt;            /*MENDEKLARASIKAN VAIABLE*/
  	printf("Masukan Bilangan Bulat Pertama:\n");
 	 scanf("%d",&num1);
  	printf("Masukan bilangan Bulat ke dua:\n");
  	scanf("%d",&num2);
  
  	for(;;) {
	    printf("\n\n\n\nMasukan Angka yang Akan Anda Masukan:\n");
	    printf("1-Penambahan.\n2-Pengurangan.\n3-Perkalian.\n4-Pembagian.\n5-Exit.\n");
	    scanf("%d",&opt);
	    switch(opt) {    /* NAMA VARIABLE YANG AKAN DIPERIKSA,SETARA 1 ATAU LEBIH PERINTAH*/
	      case 1:    	/*MASING-MASING SETIAP NIAI YANG ININ DI PERISA*/
	        printf("\nPenambahan of  %d dan %d is: %d",num1,num2,num1+num2);
	        break;
	        
	      case 2:
	        printf("\nPengurangan of %d  dan %d is: %d",num1,num2,num1-num2);
	        break;
	        
	      case 3:
	        printf("\nHasil Perkalian dari %d  dan %d is: %d",num1,num2,num1*num2);
	        break;  
	      
	      case 4:
	        if(num2==0) {
	          printf("OOps Perangkat dengan Nol\n");
	        } else {
	          printf("\n Pembagian of %d  dan %d is: %d",num1,num2,num1/num2);
	        }  
	        break;
	        
	      case 5: 
	        return 0;
	        break; 
	        
	      default:
	        printf("\n Masukan Angka yang Benar\n");
	        break; 
	    }
 }
 return 0;
}
