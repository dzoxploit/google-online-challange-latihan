#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 99
void sort (int[], int);
;/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	bool repeat = true;
	char str;
	int x[size], i, uang, n, hasil[size];
	int jumlah = 0;
	
		printf("\nBanyak Koin : ");
		scanf("%d", &n);
		
		printf("\nMasukan Jenis Koin: \n");
		
		for(i =1; i <= n; i++){
			scanf("\n %d",&x[i]);
		}
		sort(x, n);
		printf("\nKoin yang tersedia : \n");
		
		for(i=1; i<=n; i++){
			printf("%d",x[i]);
			printf("\n");
		}
		printf("\nMasukan Nilai Yang dipecah :");
		scanf("%d",&uang);
		
		for(i = 1; i <= n; i++){
			hasil[i] = uang/x[i];
			uang = uang % x[i];
		}
		
		for(i = 1; i <= n; i++){
			printf("Keping %d", x[i]);
			printf("-an sebanyak : %d", hasil[i]);
			jumlah = jumlah + hasil[i];
			printf("\n");
		}
		printf("\nSisanya adalah %d", uang);
		printf("\n");
		printf("Jumlah Koin minimum adalah %d\n", jumlah);	
}
void sort(int a[], int siz){
	int pass, hold, j;
	for(pass = 1; pass <= siz -1; pass++){
		for(j = 0; j <= siz -2; j++){
			if(a[j+1] < a[j+2]){
				hold = a[j+1];
				a[j+1] = a[j+2];
				a[j+2] = hold;
			}
		}
	}
}
