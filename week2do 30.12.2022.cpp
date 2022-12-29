
#include<Windows.h>
#include <iostream>
using namespace std;

int main()
{
    
    cout << "\t Exercise1 ";
    cout << "\nName   \t   :\"The war and the peace\"";
    cout << "\nAvtor  \t   : L.N. Tolstoj";
    cout << "\nIzdatelstvo: Piter";
    cout << "\nPages  \t   : 500.";
    cout << "\n ";
    cout << "\n\t Exercise2";
    Beep(600,500);
    Beep(600, 500);
    Beep(600, 500);
    cout << "\n\t \"Kraj lukomor'a dub zelenyj";
    Beep(600, 500);
    Beep(600, 500);
    Beep(600, 500);
    cout << "\n\t I zolotyj lancyuh na nim:";
    Beep(600, 500);
    Beep(600, 500);
    Beep(600, 500);
    cout << "\n\t Shodnya, shonochi kit uchenyj ";
    Beep(600, 500);
    Beep(600, 500);
    Beep(600, 500);
    cout << "\n\t Na lancyuhu kruzhl'aje tim\"";
    cout << "\n";
    cout << "\nExercise3 ";

    cout << "\n" << (char)201;//Верхняя крышка 
    for (int i = 0; i < 20; i++)
    {
        cout << (char)205;

    }
   cout << (char)187 ;
    cout << "\n" << (char)186 << "    Pory Roky       " << (char)186 ;
    cout << "\n" << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205<<(char)203 << (char)205 << (char)205 << (char)205 << (char)205 <<  (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185;
   
    cout << "\n" << (char)186 << "Zyma" << (char)186<<"Vesna"<<(char)186<<"Lito"<<(char)186<<"Osin"<<(char)186;
    cout << "\n" << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
    /*Задание 1*/
 
    setlocale(LC_ALL, "Russian");
    cout << "\n";
    int year;
    cout << "Введите год :";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 && year % 400 > 0) {
       cout<<"В   "<<year<< ":  366 дней";
    }
    else {
        cout << "В  " << year << " :  365 дней";
        /*Задание 2*/
        cout << "\n";
        int grn;
        cout << "\nВведите суму грн : ";
        cin >> grn;
        int cop;
        cout << "\nВведите суму коп :";
        cin >> cop;
        if (cop >= 100)
        {
            int ost = cop - 100;
            grn++;
            cout << "\n Сумма  :" << grn << "  грн  " << ost << "  коп";
        }
        else {
            cout << "\n Сумма  :" << grn   << " грн  " <<  cop << "  коп";
        }
        /*Задание3*/
        cout << "\nВычесление объему паралелепипеда";
        cout << "\nВведите данные:";
        float h;
        cout << "\nДлина (см):";
        cin >> h;
        float l;
        cout << "\n Ширина (см): ";
        cin >> l;
        float vus;
        cout << "\n Высота (см):";
        cin >> vus;
        float v = h * l * vus;
        cout << "\nОбъем :" << v << " куб/см";
        /*Задание4*/
        cout << "\n";
        float R;
        cout << "\nВведите радиус сферы :";
        cin >> R;
        float v1 = 4 / 3 * 3.14 * R*R*R;
        cout << "\nОбъем : " << v1 << " куб/см";



    }
}

