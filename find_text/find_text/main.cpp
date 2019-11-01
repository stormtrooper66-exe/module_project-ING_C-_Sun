#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX = 100000;
string words[MAX];
int instances[MAX];
int cast = 0 ;

void insert (string input)
{
    //    check first, add if not present
    for (int i = 0 ; i < cast; i++ )
    {
        if (input == words[i] )
        {
            instances[i]++;
            return ;
        }
    }
    if (cast < MAX)
    {
        words [cast] = input ;
        instances[cast] = 1;
        cast ++;
    }
    else
    {
        return ;
    }
 return ;
}
int FindTop (string & word)
{
    int TopCast = instances[0];
    int TopIndex = 0;
    for (int i = 1; i<cast; i++ )
    {
        if(instances[i] > TopCast )
        {
            TopCast = instances[i];
            TopIndex = i;
        }
    }
    instances[TopIndex] = 0;
    word = words[TopIndex ];
    return TopCast;
}
int main ()
{
    string word;
    string file;
    cin>>file;
    ifstream data (file);
    while(data >> word)
    {
        insert(word);
    }
    
    for (int i = 0; i < 5 ; i++)
    {
        cout<<FindTop(word)<<" "<<word<<endl;
    }
}
/*
 american+
 bilbo
 cezar+
 dwarf
 yandex+
 */
