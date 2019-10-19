#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    getline(cin,str);
    int colvo = str.size();
    double money = (colvo * 0.23f);
    cout << money << endl ;
    return 0;
}

