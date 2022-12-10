#include <stdio.h>
#include <conio.h>
#include <math.h> 

int main()
{ 

	float f,r,k;
	int z,suhu;
	suhu = 0; 
	
	printf("| NO | CELSIUS | FAHRENHEIT | REAMUR | KELVIN |\n");
	for (z=1; z<=11; z++) {
	if(z==1) {
	suhu=0;
	f = (suhu * 9/5) +32;
	r = (suhu * 4/5);
	k = (suhu + 273);
	printf("|%3d |%5d |%9.f |%7.f |%7.f |\n", z, suhu, f, r, k);
	continue;
}
	suhu = suhu + 10;
	f = (suhu * 9/5) +32;
	r = (suhu * 4/5);
	k = (suhu + 273);
	printf("|%3d |%5d |%9.f |%7.f |%7.f |\n", z, suhu, f, r, k);
}
return 0;
} 
