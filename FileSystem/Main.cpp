#include <string>
#include <iostream>
#include <fstream>//file stream - файловый поток
// библиотека, содержащая в себе классы для работы
// с файловой системой устройства
using namespace std;

bool statistic(string word);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	string path = "file.txt";// путь к файлу

	//Запись в файл
	/*ofstream out;

	//ofstream out(path);

	out.open(path, ios::app); //для записи с новой строки

	if (out.is_open()) { //true, если файл открыт успешно
		cout << "Файл открыт для записи.\n";
		string tmp;
		cout << "Введите строку: ";
		getline(cin, tmp);
		out << tmp + '\n'; добавление записи в файл
	}
	else
		cout << "Ошибка открытия файла.\n";


	out.close();*/ //закрытие файла

	//Чтение из файла
	/*ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "Файл открыт для чтения.\n Содержимое файла: \n";
		// Первый способ. Посимвольное считывание
		/*char sym;
		while (in.get(sym))
			cout << sym;
		//Второй способ.Пословное считывание
		while (!in.eof()) { // пока мы не в конце файла
			string tmp;
			in >> tmp;
			cout << tmp << ' ';
		}
		//Третий способ. Построчное считывание
		string str;
		while (getline(in, str)) //из in  в str   вывод строки
			cout << str << '\n';
	}
	else
		cout << "Ошибка открытия файла.\n";

	in.close();*/
	//Удаление файла
	/*if (!remove(path.c_str())) // c_str метод строк, возвращающий с-шный символьный массив 
		cout << "Файл удален.\n";
	else
		cout << "Ошибка удаления файла.\n";*/

	//Задача 1. Статистика в файл
	cout << "Введите первое слово: \n";
	string str;
	cin >> str;
	if (statistic(str))
		cout << "Первое слово успешно записано!\n";
	else
		cout << "Ошибка записи!!!\n";

	cout << "Введите второе слово: \n";
	cin >> str;
	if (statistic(str))
		cout << "Второе слово успешно записано!\n";
	else
		cout << "Ошибка записи!!!\n";

	return 0;
}

//Задача 1.
bool statistic(string word){ 
	string path = "file.txt";
	ofstream out;
	out.open(path, ios::app);
	if (out.is_open()) {
		out << word + ' ' << word.length() << '\n';
		out.close();
		return true;
	}
	out.close();
	return false;
	
}