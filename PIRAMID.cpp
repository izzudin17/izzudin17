#include<stdio.h>

main()
{
    int a,b,c,d;
    
    printf("\t\t\t\t\t==PROGRAM MEMBUAT PIRAMID==\n");
    printf("masukkan nilai = "); 
	scanf("%d", &a);
    printf("\n");

    for(b=a; b>=1; b--)
    {
        for(c=1; c<=b; c++)
        {
            printf("*");
        }
    printf("\n");
    }
return 0;
}
