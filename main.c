#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char kalimat1[100];
char kalimat2[100];

void inputKalimat();
char* gabungKalimat();

int main()
{
    char* kalimatGabungan;
    int jumlahHurufKalimat1, jumlahHurufKalimat2, jumlahHurufKeduaKalimat, perkalianHurufKeduaKalimat;

    inputKalimat();
    kalimatGabungan = gabungKalimat();
    printf("\nGabungan 2 buah inputan kalimat = %s", kalimatGabungan);
    printf("\nHasil membalik kalimat gabungan = %s", strrev(kalimatGabungan));
    jumlahHurufKalimat1 = strlen(kalimat1);
    jumlahHurufKalimat2 = strlen(kalimat2);
    jumlahHurufKeduaKalimat = jumlahHurufKalimat1 + jumlahHurufKalimat2;
    perkalianHurufKeduaKalimat = jumlahHurufKalimat1 * jumlahHurufKalimat2;
    printf("\nJumlah Huruf kalimat pertama = %d", jumlahHurufKalimat1);
    printf("\nJumlah Huruf kalimat kedua = %d", jumlahHurufKalimat2);
    printf("\nTotal jumlah huruf = %d", jumlahHurufKeduaKalimat);
    printf("\nTotal Perkalian kalimat = %d", perkalianHurufKeduaKalimat);

    return 0;
}

void inputKalimat() {
    printf("Kalimat 1 =");
    scanf("%[^\n]%*c", kalimat1);

    fflush(stdin);
    printf("Kalimat 2 =");
    scanf("%[^\n]%*c", kalimat2);
}

char* gabungKalimat(){
    char* gabungan = (char *) malloc(1 + strlen(kalimat1) + strlen(kalimat2));
    strcpy(gabungan, kalimat1);
    strcat(gabungan, " ");
    strcat(gabungan, kalimat2);
    return gabungan;
}



