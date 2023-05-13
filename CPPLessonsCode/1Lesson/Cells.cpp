// Cells.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

//just data types and if-else and switch-case
int typesOfDataAndComparing()
{
	setlocale(0, "");
	int a, b;
	int type;
	while (true)
	{
		cout << "1. Сумма\n2. Разность\n3. Умножение\n4. Деление\n0. Выйти\nВведите номер операции: ";
		cin >> type;
		if (type == 0) return 0;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		switch (type) {
		case 1:
			cout << "Сумма чисел равна: " << a + b << endl;
			break;
		case 2:
			cout << "Разность чисел равна: " << a - b << endl;
			break;
		case 3:
			cout << "Умножение чисел равно: " << a * b << endl;
			break;
		case 4:
			cout << "Деление чисел равно: " << a / b << endl;
			break;
		default:
			cout << "Неверный номер операции" << endl;
			break;
		}
	}

	return 0;
};

//arrays and arrays from keyboard
int arraysAndArrayFromKeyboard() {
	setlocale(0, "");
	string students[5] = {
		"Петров", "Иванов", "Шиленко", "Окада", "Крылов"
	};
	for (int i = 0; i < 5; i++) {
		cout << students[i] << endl;
	};

	string fromKeyboard[5];
	for (int i = 0; i < 5; i++) {
		cout << '[' << i + 1 << ']' << ':';
		cin >> fromKeyboard[i];
	};

	cout << "\nВаш массив: ";
	for (int i = 0; i < 5; i++) {
		cout << fromKeyboard[i] << " ";
	}
	cout << endl;

	return 0;
};


//first functions showcase
void checkPass(string password) {
	setlocale(0, "");
	string validPassword = "12345";
	if (password == validPassword) {
		cout << "Вы ввели верный пароль!" << endl;
	}
	else {
		cout << "Пароль неверный!" << endl;
	};
};


int functions1() {
	setlocale(0, "");
	string userPass;
	cout << "Введите пароль: ";
	
	getline(cin, userPass);
	checkPass(userPass);

	return 0;
};


bool passValidation(string password) {
	string valid_pass = "12345";
	if (password == valid_pass) return true;
	else return false;
}

void getPass() {
	string user_pass;
	cout << "Введите пароль: ";
	getline(cin, user_pass);
	if (passValidation(user_pass)) cout << "Вы ввели верный пароль!" << endl;
	else cout << "Пароль неверный!" << endl;
}

int functions2() {
	setlocale(0, "");
	getPass();
	return 0;
}

//pointers (oh fuck)
int pointers() {
	setlocale(0, "");
	int static_a;
	int static_b = 5;
	static_a = 10;
	static_b = static_a + static_b;
	cout << "B = " << static_b << endl;

	int* a = new int;
	int* b = new int(5);
	*a = 10;
	*b = *a + *b;
	cout << "B = " << *b << endl;

	delete a;
	delete b;

	return 0;
}

