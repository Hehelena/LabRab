﻿/*
Задание к теме 17.
1. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с
номерами от K до L включительно.
2. Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы
арифметическую прогрессию. Если образуют, то вывести разность прогрессии, если нет — вывести 0.
3. Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,
4. Дан массив размера N. Найти номер его первого локального максимума (локальный максимум — это элемент,
который больше любого из своих соседей).

*/
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, l, a;
	cout << "1)Введите значение массива размера N и целые числа K и L (1 <= K<= L <= N): ";
	cin >> n>>k>>l;
	a=0;
	int *m = new int[n];
	for (int i = 0; i < n; i++) {
		m[i] = rand();
	}
	cout << endl;
	for (int i = 1; i < n; i++) {

		cout << m[i]<<" ";
	}
	for (int i = k; i <=l; i++) {
		a += m[i];
	}
	cout <<"Cреднее арифметическое элементов массива с номерами от K до L включительно = " <<(a / (l - k + 1));
	delete[] m;
	cout<<endl;

	cout << "2)Введите значение массива размера N : ";
	cin >> n;
	int *M = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> M[i];
	}
	a = M[1] - M[0];
	for(int i=1;i<n; ++i) {
		if (a != M[i] - M[i - 1]) {
			a = 0;
		}
	}
	cout << "разность прогрессии = " << a;
	delete[] M;
	cout << endl;

	cout << "3)Введите значение массива размера N : ";
	cin >> n;
	int *N = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> N[i];
	}
	n = n / 2;
	a = N[0];
	k = 0;
	for (int i = 1; i < n; ++i) {
		if (N[2 * i] < a) {
		a = N[2 * i];
		k = 2 * i;
		}
	}
	cout << "Минимальный элемет среди четных номеров равен: a["<< k << "] = " << a;
	delete[] N;
	cout << endl;


	cout << "4)Введите значение массива размера N : ";
	cin >> n;
	int *s = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	a = 0;
	for (int i = 1; i < n; i++) {
		if (i == 1) {
			if (s[1] < s[2]) a = 1;
		}
		else if (i == n) {
				if (s[n] < s[n - 1]) a = n;
		}
		else {
			if ((s[i] < s[i - 1]) && (s[i] < s[i + 1])) a = i;
		}
		if (a > 0) {
				cout<<"Номер первого локального минимума: "<< a;
				break;
		}
	}
	if (a==0) cout << "Локального минимума нет ";
	delete[] s;
	cout << endl;

}
