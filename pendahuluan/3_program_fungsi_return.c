#include <stdio.h>

int penjumlahan(int nilai1, int nilai2) {
   int hasil = nilai1 + nilai2;
   return hasil;
}

int main(){
    printf("Ini contoh program penjumlahan 2+2 = %d",penjumlahan(2,2));
    return 0;
}