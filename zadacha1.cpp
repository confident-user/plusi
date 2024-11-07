#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	float k, ost;
	int a, b, c, w, h, l, x;
	cout << "Введите длину, ширину и высоту комнаты" << endl;
	cin >> a >> b >> c;
	while (cin.fail()) {
	    cout << "Ошибка ввода\nВведите значения заново" << endl;
	    cin.clear();
	    cin.ignore();
	    cin >> a >> b >> c;
	}
	cout << "Введите ширину и высоту рулона обоев" << endl;
	cin >> w >> h;
	while (cin.fail()) {
	    cout << "Ошибка ввода\nВведите значения заново" << endl;
	    cin.clear();
	    cin.ignore(256, '\n');
	    cin >> w >> h;
	}
	l = a + a + b + b;
	x = h / c;
	while (x <= 0 or h < c) {
		cout << "Введенные данные невозможны" << endl;
		cout << "Введите длину, ширину и высоту комнаты" << endl;
		cin >> a >> b >> c;
		cout << "Введите ширину и высоту рулона обоев" << endl;
		cin >> w >> h;
	}
	k = 1.0 * (a + a + b + b) / (w * x);
	k = ceil(k);
	cout << k << " - колличество рулонов обоев" << endl;
	l = c * (a + a + b + b);
	x = k * w * h;
	l = x - l;
	ost = 100.0 * l / x;
	cout<<round(ost)<<" % - остаток обоев" << endl;
	system("pause");
}