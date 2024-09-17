#include <iostream>
#include <stdio.h>

using namespace std;

FILE *plik;
int liczba, suma=0;
char napis[20];
int main()
{
    cout << "Odczyt danych z pliku:" << endl;

    plik = fopen("liczby.txt", "rt");

    if (plik!=NULL){
            while (!feof(plik)){
                fscanf(plik, "%d",&liczba);
                printf("%d\n", liczba);
                suma+=liczba;
            }
        fclose(plik);
       printf("Suma wszystkich liczb wynosi %d\n", suma);
    } else {
    printf("plik uszkodzony");
    }
    return 0;
}
