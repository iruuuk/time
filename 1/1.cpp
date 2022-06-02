#include <iostream>
#include <chrono>
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
    cin >> den1 >> mes1;
    cout << "день месяц (конец)" << endl;
    cin >> den2 >> mes2;
    if (den1 < 1 || den1 > 31 || mes1 < 1 || mes1 > 12 || den2 < 1 || den2 > 31 || mes2 < 1 || mes2 > 12 || mes2 < mes1) {
        cout << "НЕВЕРНО ВВЕДЕНА ДАТА";
        exit(2);
        
    }
    int* year = new int[366];
    int j = 0;
    for (int i = 0; i < 51; i++) {
        year[0 + j] = a4;
        year[1 + j] = a5;
        year[2 + j] = a6;
        year[3 + j] = a7;
        year[4 + j] = a1;
        year[5 + j] = a2;
        year[6 + j] = a3;
        j = j + 7;
        
    }
    year[364] = a4;
    year[365] = a5;
    int jan = 0;
    int fev = 31;
    int mar = 60;
    int apr = 91;
    int may = 121;
    int june = 152;
    int july = 182;
    int aug = 213;
    int sep = 244;
    int okt = 274;
    int nov = 305;
    int dec = 335;
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
 auto start = std::chrono::steady_clock::now();

	Date l(sl);
	Date r(sr);
	std::cout << l - r-num_hol;

	auto end = std::chrono::steady_clock::now();
	std::chrono::duration   <double> elapsed_seconds = end - start;
	std::cout << "\nelapsed time: " << elapsed_seconds.count() << "s\n";

}
