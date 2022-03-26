#include <stdio.h>
#include <stdlib.h>

int main() {

    int sinav1, sinav2, sinav3, proje, topla, bol;
	
	sinav1=90;
	sinav2=85;
	sinav3=70;
	proje= 95;
	
    topla=sinav1+sinav2+sinav3+proje;
	bol=topla/4;
	
	printf("Not ortalamasi: ",topla);
	return 0;
}
