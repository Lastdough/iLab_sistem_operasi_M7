#include <stdio.h>

/**
 * fungsi luas() untuk menghitung luas segitiga
 * menggunakan rumus 1/2 alas dikali tinggi
 * 
 * fungsi ini menerima parameter masukan 
 * berupa tinggi dan alas dari segitiga
 * kemudian fungsi luas() akan mereturn hasil 
 * setelah di hitung
 * 
 * fungsi mereturn float karena ada perkalian 
 * dengan 0.5 atau 1/2 yang menghasilkan 
 * hasil kali bilangan decimal
 */
float luas(int a, int t)
{
    float temp = a*t*0.5;
    return temp;
}

int main()
{
    //deklarasi variable
    int alas, tinggi;
    
    //Mencetak Judul dari program
    printf("Program Menghitung Luas Segitiga\n");

    //Menerima input alas dan tinggi segitiga
    printf("Masukan Alas: ");
    scanf("%i", &alas);

    printf("Masukan Tinggi: ");
    scanf("%i", &tinggi);

    /**
     * Mencetak hasil dari luas segitiga yang di hitung
     * pada fungsi luas(), fungsi luas di panggil dengan
     * parameter alas dan tinggi.  
     */
    printf("Luas Segitiga: %f\n", luas(alas, tinggi));

    return 0;
}