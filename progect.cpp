#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	cout << "Количество аргументов:" << argc << endl;
	cout << "Аргументы: " << endl;
        cout << "Goncharova Arina: " << endl;
	for (int i = 0; i < argc; ++i) {
		cout << argv[i] << endl;
	}
	return 0;
}
