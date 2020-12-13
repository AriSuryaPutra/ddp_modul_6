#include <stdio.h>

float luas_lingkaran(int jari_jari){
    float luas = 3.14*jari_jari*jari_jari;
    return luas;
}

int luas_persegi_panjang(int panjang,int lebar){
    int luas = panjang*lebar;
    return luas;
}

float luas_segitiga_siku_siku(int alas,int tinggi){
    float luas = 0.5*alas*tinggi;
    return luas;
}

int main(){
    int kode_bangun,jari_jari,panjang,lebar,alas,tinggi;

    printf("##########################\n");
    printf("######## PILIHAN #########\n");
    printf("##########################\n");
    printf("1. Luas Lingkaran\n");
    printf("2. Luas Persegi Panjang\n");
    printf("3. Luas Segitiga Siku - Siku\n");
    printf("Masukan kode bangun [1,2,3]: ");
    scanf("%d",&kode_bangun);

    switch(kode_bangun){
        case 1:
        printf("1. Luas Lingkaran:\n");
        printf("Masukan jari-jari: \n");
        scanf("%d",&jari_jari);
        printf("Luas lingkaran: %.2f\n",luas_lingkaran(jari_jari));
        break;
        case 2:
        printf("2. Luas Persegi Panjang:\n");
        printf("Masukan panjang: \n");
        scanf("%d",&panjang);
        printf("Masukan lebar: \n");
        scanf("%d",&lebar);
        printf("Luas persegi panjang: %d\n",luas_persegi_panjang(panjang,lebar));
        break;
        case 3:
        printf("3. Luas Segitiga Siku - Siku:\n");
        printf("Masukan alas: \n");
        scanf("%d",&alas);
        printf("Masukan tinggi: \n");
        scanf("%d",&tinggi);
        printf("Luas Segitiga Siku Siku: %.2f\n",luas_segitiga_siku_siku(alas,tinggi));
        break;
        default: 
        printf("Kode bangun salah \n");
    }
}