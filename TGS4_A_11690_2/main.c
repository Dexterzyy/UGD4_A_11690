#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char karakter_11690;
    
    printf("Masukkan sebuah karakter: "); scanf("%c", &karakter_11690);
    
    if((karakter_11690 >='a' && karakter_11690 <= 'z') || (karakter_11690 >= 'A' && karakter_11690 <= 'Z')){
    	printf("%c adalah karakter", karakter_11690);
	}else if(karakter_11690 >= '1' && karakter_11690 <= '9'){
		printf("%c adalah digit", karakter_11690);
	}else{
		printf("%c adalah karakter lainnya", karakter_11690);
	}
	return 0;
}
