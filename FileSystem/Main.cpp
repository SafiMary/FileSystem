#include <string>
#include <iostream>
#include <fstream>//file stream - �������� �����
// ����������, ���������� � ���� ������ ��� ������
// � �������� �������� ����������
using namespace std;

bool statistic(string word);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	string path = "file.txt";// ���� � �����

	//������ � ����
	/*ofstream out;

	//ofstream out(path);

	out.open(path, ios::app); //��� ������ � ����� ������

	if (out.is_open()) { //true, ���� ���� ������ �������
		cout << "���� ������ ��� ������.\n";
		string tmp;
		cout << "������� ������: ";
		getline(cin, tmp);
		out << tmp + '\n'; ���������� ������ � ����
	}
	else
		cout << "������ �������� �����.\n";


	out.close();*/ //�������� �����

	//������ �� �����
	/*ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "���� ������ ��� ������.\n ���������� �����: \n";
		// ������ ������. ������������ ����������
		/*char sym;
		while (in.get(sym))
			cout << sym;
		//������ ������.��������� ����������
		while (!in.eof()) { // ���� �� �� � ����� �����
			string tmp;
			in >> tmp;
			cout << tmp << ' ';
		}
		//������ ������. ���������� ����������
		string str;
		while (getline(in, str)) //�� in  � str   ����� ������
			cout << str << '\n';
	}
	else
		cout << "������ �������� �����.\n";

	in.close();*/
	//�������� �����
	/*if (!remove(path.c_str())) // c_str ����� �����, ������������ �-���� ���������� ������ 
		cout << "���� ������.\n";
	else
		cout << "������ �������� �����.\n";*/

	//������ 1. ���������� � ����
	cout << "������� ������ �����: \n";
	string str;
	cin >> str;
	if (statistic(str))
		cout << "������ ����� ������� ��������!\n";
	else
		cout << "������ ������!!!\n";

	cout << "������� ������ �����: \n";
	cin >> str;
	if (statistic(str))
		cout << "������ ����� ������� ��������!\n";
	else
		cout << "������ ������!!!\n";

	return 0;
}

//������ 1.
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