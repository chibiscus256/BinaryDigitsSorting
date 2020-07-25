#include <iostream>
#include <fstream>
#include <string>
#include <bitset> 
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int i = 0;
    string s;
    fstream reader;
    bitset<16> bin_number;
    int n = 0;
    reader.open("digits.txt");
    if (reader)
    {
        while (getline(reader, s))
        {
            //cout << s << "\n";
            n++;
        }
        //cout << "\n";
    }
    //cout << n;
    //cout << "\n";

    vector <bitset<16>> vector(n);
    reader.clear();
    reader.seekg(0, std::ios::beg);
    if (reader)
    {
        while (reader >> bin_number)
        {
            vector.at(i) = bin_number;
            //cout << vector.at(i) << "\n";
            i++;
        }
    }
    reader.close();
    cout << "\n";

    sort(vector.begin(), vector.end(), [](const auto& lhs, const auto& rhs)
        { return lhs.to_string() < rhs.to_string(); });
    //for (i = 0; i < 10; i++) {
    //    cout << vector.at(i) << "\n";
    //}
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
