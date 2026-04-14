/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1
 *   Hari dan Tanggal    : Selasa, 14 April 2026
 *   Nama (NIM)          : Aqilah Safitri Sjarif (13224050)
 *   Nama File           : soal1.c
 *   Deskripsi           : cetak warna lampu berdasarkan kondisi
 */

#include <stdio.h>

int main(){
    int i;
    int N;
    scanf("%d", &i);
    for (N = 1; N <= i; N++)
        if (N % 2 == 0 && N % 3 ==0) {
            printf("BIRU\n");
        }
        else if(N % 3 == 0) {
            printf("MERAH\n");
        }
        else if(N % 2 == 0){
            printf("KUNING\n");
            }
        else{
            printf("%d\n", N);
            }   
        return 0;
    }
