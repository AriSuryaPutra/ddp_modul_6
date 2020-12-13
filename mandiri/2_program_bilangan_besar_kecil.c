#include <stdio.h>


int bilangan_terkecil(int bil1,int bil2){
    if(bil1 > bil2){
        return bil2;
    }else{
        return bil1;
    }
}
int bilangan_terbesar(int bil1,int bil2){
    if(bil1 > bil2){
        return bil1;
    }else{
        return bil2;
    }
}
int main(){
    int bil1, bil2;
    printf("#######################################################\n");
    printf("######## Program Bilangan Terkecil & Terbesar #########\n");
    printf("#######################################################\n");
    printf("Input Bilangan Pertama:");
    scanf("%d",&bil1);
    printf("Input Bilangan Kedua:");
    scanf("%d",&bil2);
    printf("Bilangan Terkecil adalah: %d\n",bilangan_terkecil(bil1,bil2));
    printf("Bilangan Terbesar adalah: %d\n",bilangan_terbesar(bil1,bil2));
    return 0;
}