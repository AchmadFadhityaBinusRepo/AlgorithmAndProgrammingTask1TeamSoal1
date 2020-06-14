#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char kalimat1[100];
char kalimat2[100];

void inputKalimat();
char* gabungKalimat();

char* balikKalimatGabungan(char *gabungan);

int main()
{
    char* kalimatGabungan, kalimatGabunganBalik;
    int jumlahHurufKalimat1, jumlahHurufKalimat2, jumlahHurufKeduaKalimat, perkalianHurufKeduaKalimat;

    inputKalimat();
    kalimatGabungan = gabungKalimat();
    kalimatGabunganBalik = strrev(kalimatGabungan);
    jumlahHurufKalimat1 = strlen(kalimat1);
    jumlahHurufKalimat2 = strlen(kalimat2);
    jumlahHurufKeduaKalimat = jumlahHurufKalimat1 + jumlahHurufKalimat2;
    perkalianHurufKeduaKalimat = jumlahHurufKalimat1 * jumlahHurufKalimat2;

    printf("%s", kalimatGabungan);
    printf("%s", kalimatGabunganBalik);

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



