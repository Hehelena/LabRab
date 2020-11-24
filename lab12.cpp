/*
Задание к теме 12.
1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь,
2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).
2. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток)
и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо.
Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление
робота после выполнения полученной команды
3. Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме.
Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа
со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».
4. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа,
например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».
5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов,
обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят
названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки
и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».

*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, a1, a2, a3, a21;
	cout << "1) Введите номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12: " ;
	cin >> a >> b;
	switch (a) {
	case 1: cout << "первое"; break;
	case 2: cout << "второе"; break;
	case 3: cout << "третье"; break;
	case 4: cout << "четвертое"; break;
	case 5: cout << "пятое"; break;
	case 6: cout << "шестое"; break;
	case 7: cout << "седьмое"; break;
	case 8: cout << "восьмое"; break;
	case 9: cout << "девятое"; break;
	case 10: cout << "десятое"; break;
	case 11: cout << "одиннадцатое"; break;
	case 12: cout << "двенадцатое"; break;
	case 13: cout << "тринадцатое"; break;
	case 14: cout << "четырнадцатое"; break;
	case 15: cout << "пятнадцатое"; break;
	case 16: cout << "шестнадцатое"; break;
	case 17: cout << "семнадцатое"; break;
	case 18: cout << "восемнадцатое"; break;
	case 19: cout << "девятнадцатое"; break;
	case 20: cout << "двадцатое"; break;
	case 21: cout << "двадцать первое"; break;
	case 22: cout << "двадцать второе"; break;
	case 23: cout << "двадцать третье"; break;
	case 24: cout << "двадцать четвертое"; break;
	case 25: cout << "двадцать пятое"; break;
	case 26: cout << "двадцать шестое"; break;
	case 27: cout << "двадцать седьмое"; break;
	case 28: cout << "двадцать восьмое"; break;
	case 29: cout << "двадцать девятое"; break;
	case 30: cout << "тридцатое"; break;
	case 31: cout << "тридцать первое"; break;
	}
	cout << " ";
	switch (b) {
	case 1: cout << "января"; break;
	case 2: cout << "февраля"; break;
	case 3: cout << "марта"; break;
	case 4: cout << "апреля"; break;
	case 5: cout << "мая"; break;
	case 6: cout << "июня"; break;
	case 7: cout << "июля"; break;
	case 8: cout << "августа"; break;
	case 9: cout << "сентября"; break;
	case 10: cout << "октября"; break;
	case 11: cout << "ноября"; break;
	case 12: cout << "декабря"; break;
	}
	cout << endl;
	char n = 'C';
	cout << "2)Введите команду: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо:";
	cin >> a;
	switch (a) {
	case 1: n = 'З'; break;
	case -1: n = 'В'; break;
	}
	cout << n;
	cout << endl;
	cout << "3)Введите целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме: ";
	cin >> a;
	a1 = 0;
	cout << "осталось ";
	if (a>19){
		a1 = a % 10;
		a2 = a / 10;
		switch (a2) {
		case 2: cout << "двадцать"; break;
		case 3: cout << "тридцать"; break;
		case 4: cout << "сорок"; break;
		}
		switch (a1) {
		case 1: cout << " одно"; break;
		case 2: cout << " два"; break;
		case 3: cout << " три"; break;
		case 4: cout << " четырe"; break;
		case 5: cout << " пять"; break;
		case 6: cout << " шесть"; break;
		case 7: cout << " семь"; break;
		case 8: cout << " восемь"; break;
		case 9: cout << " девять"; break;
		}
	}
	else {
		switch (a) {
		case 10: cout << "десять"; break;
		case 11: cout << "одиннадцать"; break;
		case 12: cout << "двенадцать"; break;
		case 13: cout << "тринадцать"; break;
		case 14: cout << "четырнадцать"; break;
		case 15: cout << "пятнадцать"; break;
		case 16: cout << "шестнадцать"; break;
		case 17: cout << "семнадцать"; break;
		case 18: cout << "восемнадцать"; break;
		case 19: cout << "девятнадцать"; break;
		}
	}
	if (a1 == 1)(cout << " учебное занятие");
	else cout << " учебных занятий";
	cout << endl;
	cout << "4)Введите целое число в диапазоне 100–999: ";
	cin >> a;
	a3 = a / 100;
	a2 = (a / 10) % 10;
	a21 = a % 100;
	a1 = a%10;
	switch (a3) {
	case 1: cout << "сто"; break;
	case 2: cout << "двести"; break;
	case 3: cout << "триста"; break;
	case 4: cout << "четырeста"; break;
	case 5: cout << "пятьсот"; break;
	case 6: cout << "шестьсот"; break;
	case 7: cout << "семьсот"; break;
	case 8: cout << "восемьсот"; break;
	case 9: cout << "девятьсот"; break;
	}
	switch (a2) {
	case 2: cout << " двадцать"; break;
	case 3: cout << " тридцать"; break;
	case 4: cout << " сорок"; break;
	case 5: cout << " пятьдесят"; break;
	case 6: cout << " шестьдесят"; break;
	case 7: cout << " семьдесят"; break;
	case 8: cout << " восемьдесят"; break;
	case 9: cout << " девятьдесят"; break;
	}
	switch (a21) {
	case 10: cout << " десять"; break;
	case 11: cout << " одиннадцать"; break;
	case 12: cout << " двенадцать"; break;
	case 13: cout << " тринадцать"; break;
	case 14: cout << " четырнадцать"; break;
	case 15: cout << " пятнадцать"; break;
	case 16: cout << " шестнадцать"; break;
	case 17: cout << " семнадцать"; break;
	case 18: cout << " восемнадцать"; break;
	case 19: cout << " девятнадцать"; break;
	}
	if (a2 != 1) {
		switch (a1) {
		case 1: cout << " один"; break;
		case 2: cout << " два"; break;
		case 3: cout << " три"; break;
		case 4: cout << " четырe"; break;
		case 5: cout << " пять"; break;
		case 6: cout << " шесть"; break;
		case 7: cout << " семь"; break;
		case 8: cout << " восемь"; break;
		case 9: cout << " девять"; break;
		}
	}
	cout << endl;
	cout << "5)Введите год: ";
	cin >> a;
	a1 = a % 10;
	cout << "Год ";
	switch (a1) {
	case 0:
	case 1: cout << "бел"; break;
	case 2:
	case 3: cout << "черн"; break;
	case 4:
	case 5: cout << "зелен"; break;
	case 6:
	case 7: cout << "красн"; break;
	case 8:
	case 9: cout << "желт"; break;
	}
	a21 = a % 12;
	switch (a21) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: cout << "ой "; break;
		case 6:
		case 7:
		case 8:cout << "ого "; break;
		case 9:
		case 10:
		case 11:cout << "ой "; break;
	}
	a2 = (a + 8) % 12;
	switch (a2) {
	case 0:cout << "крысы"; break;
	case 1:cout << "коровы"; break;
	case 2:cout << "тигра"; break;
	case 3:cout << "зайца"; break;
	case 4:cout << "дракона"; break;
	case 5: cout << "змеи"; break;
	case 6:cout << "лошади"; break;
	case 7:cout << "овцы"; break;
	case 8:cout << "обезьяны"; break;
	case 9:cout << "курицы"; break;
	case 10:cout << "собаки"; break;
	case 11:cout << "свиньи"; break;
	}
}
