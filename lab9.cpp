﻿/*Задание к теме 9.
1. С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала
последней минуты.
2. Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник,
. . . , 6 — суббота. Дано целое число K, лежащее в диапазоне 1–365.Определить номер дня недели
для K-го дня года, если известно, что в этом году 1 января было понедельником.
3. Дни недели пронумерованы следующим образом: 1 — понедельник, 2 — вторник, . . . , 6 — суббота,
7 — воскресенье. Дано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в 
диапазоне 1–7. Определить номер дня недели для K-го дня года, если известно, что в этом году
1 января было днем недели с номером N
4. Даны целые положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально 
возможное количество квадратов со стороной C (без наложений). Найти количество квадратов,
размещенных на прямоугольнике, а также площадь незанятой части прямоугольника. 
5. Дан номер некоторого года (целое положительное число). Определить соответствующий ему номер 
столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n,k,a,b,c;
	cout << "1) Введите сколько N секунд прошло с начала суток: " ;
	cin >> n;
	n = n % 60;
	cout << "Количество секунд, прошедших с начала последней минуты: " << n << endl;
	cout << "2) Введите целое число K, лежащее в диапазоне 1–365(номер дня недели для K - го дня года ): ";
	cin >> k;
	k = k % 7;
	cout << "Номер дня недели для K-го дня года равен: " << k << endl;
	cout << "3) Введите целое число K, лежащее в диапазоне 1–365(номер дня недели для K - го дня года ): ";
	cin >> k;
	cout << " Введите целое число N, лежащее в диапазоне 1–7(1 января было днем недели с номером N): ";
	cin >> n;
	k = (k+n-1) % 7;
	cout << "Номер дня недели для K-го дня года равен: " << k << endl;
	cout << "4) Введите целые положительные числа A, B, C: ";
	cin >> a>>b>>c;
	n = (a/c)*(b/c);
	k = a * b - n * c*c;
	cout << "Количество квадратов, размещенных на прямоугольнике : " << n << endl;
	cout << "Площадь незанятой части прямоугольника : " << k << endl;
	cout << "5) Введите номер некоторого года: ";
	cin >>n;
	if (n % 100 >= 1) {
		k = n / 100 + 1;
	}
	else k = n / 100;
	cout << "соответствующий ему номер столетия : " << k << endl;
}


