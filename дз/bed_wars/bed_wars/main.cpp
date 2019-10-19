#include <iostream>
#include <string>
using namespace std;
int main()
{
    float result;
    float a;
    cin >> a;
    float b;
    cin >> b;
    string c;
    cin >> c;
    string p = "+";
    string m = "-";
    string u = "*";
    string d = "/";
    if (string(1, c[0]) == p )
    {
        result = a + b;
        cout <<result<< endl;

    }
    else if (string(1, c[0]) == m )
    {
        result = a - b;
        cout <<result<< endl;
    }
    else if (string(1, c[0]) == u )
    {
        result = a * b;
        cout <<result<< endl;

    }
    else if (string(1, c[0]) == d )
    {
        if (b == 0)
        {
            cout << "ЫЫЫЫЫЫ";
        }
        else
        {
            result = a / b;
            cout <<result<< endl;
        }
           
    }
    else
    {
        cout <<"ЫЫЫЫЫЫ"<< endl;
    }
    return 0;
}
