#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	//задание 1

	/*const int size = 3;
	int cisla[size];

	cout << "Введите 3 числа, и мы найдём среднее из них:"<<endl;

	for (int i = 0; i < size; i++)
		cin >> cisla[i];
	system("cls");
	cout << "Среднее число-";
	if (cisla[0]<cisla[1] && cisla[1]<cisla[2]|| cisla[0] > cisla[1] && cisla[1] > cisla[2]){
	cout << cisla[1];
	}else if (cisla[0]<cisla[2] && cisla[2]<cisla[1] || cisla[0] > cisla[2] && cisla[2] > cisla[1]) {
		cout << cisla[2];
	}else if (cisla[1]<cisla[0] && cisla[0]<cisla[2] || cisla[1] > cisla[0] && cisla[0] > cisla[2])
		cout << cisla[0];*/

		//Задание 2

		/*int a = 0.f;
		int b = 0.f;

		cout << "Введите 2 числа, чтобы проверить делимость: ";
		cin >> a;
		cin >> b;

		if (a%b) {
			cout << "Нет";
		}else {
			cout << "Да";
		}*/

		//Задание 3

		/*double a = 0;
		int var=0;

		cout << "С чем вы хотите работать?" << endl
			<< "1.Байты" << endl
			<< "2.Килобайты"<<endl;
		cin >> var;

		switch (var) {
		case 1:
			cout << "Вы выбрали байты, теперь введите их количество:";
			cin >> a;
			a = a / 1024;
			cout << a << " Килобайт(-а)";
			break;
		case 2:
			cout << "Вы выбрали килобайты, теперь введите их количество:";
			cin >> a;
			a = a * 1024;
			cout << a << " Байт(-а)";
			break;
		default:
			cout << "У вас всего 2 выбора";
			break;
		}*/

	//Задача 4

	/*unsigned int year = 0;
	cout << "Введите год, чтобы проверить его на високосность(он обязательно должен быть положителен)" << endl;
	cin >> year;
	if (year % 4 != 0) {
		cout << "Не Високосный";
	}else if(year % 100 == 0 && year % 400 != 0){
		cout << "Не Високосный";
	}
	else cout << "Високосный";*/

	//Задача 5

	/*int a, b, c;
	int dis = 0;
	int x1 = 0;
	int x2 = 0;
	cout << "Введите 3 коэфицента квадратного уравнения и вы получите корни этого уравнения:";
	cin >> a;
	cin >> b;
	cin >> c;

	dis = (b * b) - 4 * a * c;
	if (dis < 0) {
		cout << "Корней нет";
		return 0;
	}
	x1 = (-b + sqrt(dis)) / 2 * a;
	x2 = (-b - sqrt(dis)) / 2 * a;
	cout <<"Дискреминант-"<< dis<<endl;
	cout <<"Первый корень-"<< x1<<endl;
	cout <<"Второй корень-"<< x2<<endl;*/

	//Задача 6

	/*int x=0, y=0;
	printf("Введите 2 числа, которые будут расцениваться, как координаты(Конечно же сначала X,потом Y): ");
	cin >> x;
	cin >> y;
	if (x > 0 && y > 0) {
		printf("1 четверть");
	}
	else if (y < 0 && x > 0) {
		printf("4 четверть");
	}
	else if (x < 0 && y > 0) {
		printf("2 четверть");
	}
	else if (x < 0 && y < 0) {
		printf("3 четверть");
	}*/
}