// AlgoritmLW4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ChToInt(char ch) {
    switch (ch)
    {
    case '0':
        return 0;
        break;
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    case '3':
        return 3;
        break;
    case '4':
        return 4;
        break;
    case '5':
        return 5;
        break;
    case '6':
        return 6;
        break;
    case '7':
        return 7;
        break;
    case '8':
        return 8;
        break;
    case '9':
        return 9;
        break;
    default:
        break;
    }
    return 0;
}

int StrToInt(string str) {
    int number = 0;

    for (int i = 0; i < str.length(); i++)
    {
        number = (number * 10) + ChToInt(str[i]);
    }
    return number;
}

int getValue(ifstream& inputFile, string str) {
    getline(inputFile, str);
    string value;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i])) {
            value += str[i];
        }
    }
    str = "";
    return StrToInt(value);
}

const int max_node_value = 100;

int main()
{
    setlocale(LC_ALL, "rus");
    string str;
    string temp;
    int value;
    cout << "Введите имя инпут файла ";
    cin >> str;
    ifstream inputFile(str);

    cout << "Введите имя аутпут файла ";
    cin >> str;
    ofstream outputFile(str);

    if (!inputFile)
    {
        cout << "Файл не открыт\n\n";
    }
    else
    {
        cout << "Файл открыт!\n\n";
    }
    str = "";
    int nodeValue = getValue(inputFile, str);
    int startNode = getValue(inputFile, str);
    int endNode = getValue(inputFile, str);
    int graphMatrix[max_node_value][max_node_value];

    for (int i = 0; i < nodeValue; i++)
    {
        for (int j = 0; j < nodeValue; j++)
        {
            graphMatrix[i][ j] = 0;
        }
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


