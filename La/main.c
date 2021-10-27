#include<stdio.h>
#include<stdbool.h>
#define size 99
void sort (int [], int);

int main(){

    bool repeat = true;
    char str;
    int x[size], i , uang, n, hasil[size];
    int jumlah = 0;

    while (repeat){

    printf("\nBanyak Koin : ");
    scanf("%d", &n);

    printf("\nMasukkan Jenis Koin : \n");

    for (i = 1; i <= n; i++){
        scanf("\n %d", &x[i]);
    }

    sort(x, n );
    printf("\nKoin yang tersedia : \n");
    for(i=1; i<=n; i ++){
        printf("%d",x[i]);
        printf("\n");
    }

    printf("\nMasukkan Nilai yang dipecah : ");
    scanf("%d", &uang);
    printf("\n");
    for(i = 1; i <= n; i++){
        hasil[i] = uang/x[i];
        uang = uang % x[i];
    }

    for(i = 1; i <= n; i++){
        printf("Keping %d", x[i]);
        printf("=an sebanyak : %d",hasil[i]);
        jumlah = jumlah + hasil[i];
        printf("\n");
    }
    printf("\nSisanya adalah %d", uang);
    printf("\n");
    printf("Jumlah Koin minimum adalah %d\n", jumlah);

    printf("\nApakah anda ingin mengulang program atau tidak(y/t)? : ");
    scanf("%s",&str);

    if(str == 'y'){
        repeat = true;
    }
    else if(str == 't'){
        repeat = false;
            printf("\nTerima Kasih! Semoga hari anda menyenangkan");
            return 0;
    }


}


    }




void sort(int a[], int siz){
    int pass, hold, j;
    for (pass = 1 ; pass <= -1 ; pass++){
        for(j = 0; j <= siz -2; j++){
            if(a[j+1] < a[j+2]){
                hold = a[j+1];
                a[j+1];
                a[j + 2] = hold;
            }
        }
    }
}
