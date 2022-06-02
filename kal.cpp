#include <iostream>
using namespace std;

int main()
{
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;
    int a7 = 0;
    int den1 = 0;
    int mes1 = 0;
    int den2 = 0;
    int mes2 = 0;
    int god1 = 0;
    int god2 = 0;
    cout << "Для начала вам необходимо ввести свое расписание выходных и рабочих дней под названиями дней недели ниже." << endl;
    cout << "Введите '1', если день рабочий, и '0', если выходной." << endl;
    cout << "ПН ВТ СР ЧТ ПТ СБ ВС" << endl;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
    if (a1 < 0 || a1 > 1 || a2 < 0 || a2 > 1 || a3 < 0 || a3 > 1 || a4 < 0 || a4 > 1 || a5 < 0 || a5 > 1 || a6 < 0 || a6 > 1 || a7 < 0 || a7 > 1) {
        cout << "НЕВЕРНО ВВЕДЕНА РАБОЧАЯ НЕДЕЛЯ";
        exit(1);
        
    }
    cout << "Теперь введите дату начала отсчета рабочих дней и дату окончания" << endl;
    cout << "Вводите сначала номер дня в месяце, а потом номер месяца" << endl;
    cout << "день месяц (начало)" << endl;
    cin >> den1 >> mes1 >> god1;
    cout << "день месяц (конец)" << endl;
    cin >> den2 >> mes2 >> god2;
    if (den1 < 1 || den1 > 31 || mes1 < 1 || mes1 > 12 || den2 < 1 || den2 > 31 || mes2 < 1 || mes2 > 12 || mes2 < mes1) {
        cout << "НЕВЕРНО ВВЕДЕНА ДАТА";
        exit(2);
        
    }
    int* year8 = new int[366];
    int* year9 = new int[365];
    int* year10 = new int[365];
    int* year11 = new int[365];
    int* year12 = new int[366];
    int* year13 = new int[365];
    int* year14 = new int[365];
    int* year15 = new int[365];
    int* year16 = new int[366];
    int* year17 = new int[365];
    int* year18 = new int[365];
    int* year19 = new int[365];
    int* year20 = new int[366];
    int* year21 = new int[365];
    int j = 0;
    for (int i = 0; i < 51; i++) {
        year8[0 + j] = a2;
        year8[1 + j] = a3;
        year8[2 + j] = a4;
        year8[3 + j] = a5;
        year8[4 + j] = a6;
        year8[5 + j] = a7;
        year8[6 + j] = a1;
        j = j + 7;
        
    }
    year8[364] = a2;
    year8[365] = a3;
    for (int i = 0; i < 51; i++) {
        year9[0 + j] = a4;
        year9[1 + j] = a5;
        year9[2 + j] = a6;
        year9[3 + j] = a7;
        year9[4 + j] = a1;
        year9[5 + j] = a2;
        year9[6 + j] = a3;
        j = j + 7;
        
    }
    year9[364] = a4;
    for (int i = 0; i < 51; i++) {
        year10[0 + j] = a5;
        year10[1 + j] = a6;
        year10[2 + j] = a7;
        year10[3 + j] = a1;
        year10[4 + j] = a2;
        year10[5 + j] = a3;
        year10[6 + j] = a4;
        j = j + 7;
        
    }
    year10[364] = a5;
    for (int i = 0; i < 51; i++) {
        year11[0 + j] = a6;
        year11[1 + j] = a7;
        year11[2 + j] = a1;
        year11[3 + j] = a2;
        year11[4 + j] = a3;
        year11[5 + j] = a4;
        year11[6 + j] = a5;
        j = j + 7;
        
    }
    year11[364] = a6;
    for (int i = 0; i < 51; i++) {
        year12[0 + j] = a7;
        year12[1 + j] = a1;
        year12[2 + j] = a2;
        year12[3 + j] = a3;
        year12[4 + j] = a4;
        year12[5 + j] = a5;
        year12[6 + j] = a6;
        j = j + 7;
        
    }
    year12[364] = a7;
    year12[365] = a1;
    for (int i = 0; i < 51; i++) {
        year13[0 + j] = a2;
        year13[1 + j] = a3;
        year13[2 + j] = a4;
        year13[3 + j] = a5;
        year13[4 + j] = a6;
        year13[5 + j] = a7;
        year13[6 + j] = a1;
        j = j + 7;
        
    }
    year13[364] = a2;
    for (int i = 0; i < 51; i++) {
        year14[0 + j] = a3;
        year14[1 + j] = a4;
        year14[2 + j] = a5;
        year14[3 + j] = a6;
        year14[4 + j] = a7;
        year14[5 + j] = a1;
        year14[6 + j] = a2;
        j = j + 7;
        
    }
    year14[364] = a3;
    for (int i = 0; i < 51; i++) {
        year15[0 + j] = a4;
        year15[1 + j] = a5;
        year15[2 + j] = a6;
        year15[3 + j] = a7;
        year15[4 + j] = a1;
        year15[5 + j] = a2;
        year15[6 + j] = a3;
        j = j + 7;
        
    }
    year15[364] = a4;
    for (int i = 0; i < 51; i++) {
        year16[0 + j] = a5;
        year16[1 + j] = a6;
        year16[2 + j] = a7;
        year16[3 + j] = a1;
        year16[4 + j] = a2;
        year16[5 + j] = a3;
        year16[6 + j] = a4;
        j = j + 7;
        
    }
    year16[365] = a6;
    for (int i = 0; i < 51; i++) {
        year17[0 + j] = a7;
        year17[1 + j] = a1;
        year17[2 + j] = a2;
        year17[3 + j] = a3;
        year17[4 + j] = a4;
        year17[5 + j] = a5;
        year17[6 + j] = a6;
        j = j + 7;
        
    }
    year17[364] = a7;
    for (int i = 0; i < 51; i++) {
        year18[0 + j] = a1;
        year18[1 + j] = a2;
        year18[2 + j] = a3;
        year18[3 + j] = a4;
        year18[4 + j] = a5;
        year18[5 + j] = a6;
        year18[6 + j] = a7;
        j = j + 7;
    }
    year18[364] = a1;
    year18[365] = a2;
    for (int i = 0; i < 51; i++) {
        year19[0 + j] = a2;
        year19[1 + j] = a3;
        year19[2 + j] = a4;
        year19[3 + j] = a5;
        year19[4 + j] = a6;
        year19[5 + j] = a7;
        year19[6 + j] = a1;
        j = j + 7;
    }
    year19[364] = a2;
    for (int i = 0; i < 51; i++) {
        year20[0 + j] = a3;
        year20[1 + j] = a4;
        year20[2 + j] = a5;
        year20[3 + j] = a6;
        year20[4 + j] = a7;
        year20[5 + j] = a1;
        year20[6 + j] = a2;
        j = j + 7;
    }
    year20[364] = a3;
    year20[365] = a4;
    for (int i = 0; i < 51; i++) {
        year21[0 + j] = a5;
        year21[1 + j] = a6;
        year21[2 + j] = a7;
        year21[3 + j] = a1;
        year21[4 + j] = a2;
        year21[5 + j] = a3;
        year21[6 + j] = a4;
        j = j + 7;
    }
    year21[364] = a5;
    int janv = 0;
    int fevv = 31;
    int marv = 60;
    int aprv = 91;
    int mayv = 121;
    int junev = 152;
    int julyv = 182;
    int augv = 213;
    int sepv = 244;
    int oktv = 274;
    int novv = 305;
    int decv = 335;
    int jan = 0;
    int fev = 31;
    int mar = 59;
    int apr = 90;
    int may = 120;
    int june = 151;
    int july = 181;
    int aug = 212;
    int sep = 243;
    int okt = 273;
    int nov = 304;
    int dec = 334;
    int start = 0;
    int fin = 0;
    
    if (mes1 == 1) start = den1 + jan;
    if (mes1 == 2) start = den1 + fev;
    if (mes1 == 3) start = den1 + mar;
    if (mes1 == 4) start = den1 + apr;
    if (mes1 == 5) start = den1 + may;
    if (mes1 == 6) start = den1 + june;
    if (mes1 == 7) start = den1 + july;
    if (mes1 == 8) start = den1 + aug;
    if (mes1 == 9) start = den1 + sep;
    if (mes1 == 10) start = den1 + okt;
    if (mes1 == 11) start = den1 + nov;
    if (mes1 == 12) start = den1 + dec;
    if (mes2 == 1) fin = den2 + jan;
    if (mes2 == 2) fin = den2 + fev;
    if (mes2 == 3) fin = den2 + mar;
    if (mes2 == 4) fin = den2 + apr;
    if (mes2 == 5) fin = den2 + may;
    if (mes2 == 6) fin = den2 + june;
    if (mes2 == 7) fin = den2 + july;
    if (mes2 == 8) fin = den2 + aug;
    if (mes2 == 9) fin = den2 + sep;
    if (mes2 == 10) fin = den2 + okt;
    if (mes2 == 11) fin = den2 + nov;
    if (mes2 == 12) fin = den2 + dec;
    int k = 0;
    for (int i = start -1; i < fin; i++) {
        if (year[i] == 1) k++;
        
    }
cout << "количество рабочих дней: " << k;
}
