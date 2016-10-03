#include <iostream>
#include <cstdio>
#include <stdbool.h>
using namespace std;

int main()
{

    char name[35];
    char surname[35];
    char data[50];
    char adress[100];
    int phone[12];
    char email[50];

    printf("Podaj imie\n");
    scanf("%s",&name);
    printf("Podaj nazwisko\n");
    scanf("%s",&surname);
    printf("Podaj date urodzenia\n");
    scanf("%s",&data);
    printf("Podaj adres zamieszkania\n");
    scanf("%s",&adress);
    printf("Podaj telefon\n");
    scanf("%s",&phone);
    printf("Podaj adres e-mail\n");
    scanf("%s",&email);

    printf("Imie: %s \nNazwisko: %s \nData urodzenia: %s \nAdres zamieszkania: %s\nTelefon: %d\nEmail: %s",
           name, surname, data, adress, phone, email);


//    int a;
//    int b;
//    int sum;
//    bool p = true;
//
//
//    sum = a + b;
//
//    puts("Witaj!");
//    printf("Twoja ulubiona liczba: %d\n",a);
//    printf("Jaka jest twoja ulubiona liczba calkowita?\n");
//    scanf("%d",&a);


//    cout << "Suma dwóch liczb " << a << " i " << b << " jest równa " << sum << "\n";
//    cout << p;

    return 0;
}