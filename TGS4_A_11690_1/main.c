#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef char string [50];

int main(int argc, char *argv[]) {
	string time_11690;
	int hh_11690, mm_11690, dd_11690;
	printf("Masukkan waktu dalam bentuk HH:MM:SS AM/PM: "); scanf("%d:%d:%d %s", &hh_11690, &mm_11690, &dd_11690, &time_11690);
	
	if(hh_11690 == 12 && strcmp(time_11690, "AM") == 0){
		printf("Waktu setelah dikonversi adalah [ 00:%.2d:%.2d ]", mm_11690,dd_11690);	
	}else if(strcmp(time_11690, "AM") == 0){
		printf("Waktu setelah dikonversi adalah [ %.2d:%.2d:%.2d ]", hh_11690,mm_11690,dd_11690);
	}else if(hh_11690 == 12 && strcmp(time_11690, "PM") == 0){
		printf("Waktu setelah dikonversi adalah [ %.2d:%.2d:%.2d ]", hh_11690,mm_11690,dd_11690);
	}else if(strcmp(time_11690, "PM") == 0){
		hh_11690 += 12;
		printf("Waktu setelah dikonversi adalah [ %.2d:%.2d:%.2d ]", hh_11690,mm_11690,dd_11690);	
	}
	return 0;
}
