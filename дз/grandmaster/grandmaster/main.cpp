#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[])
{
    const int phersy = 8;
    bool LIVE = true;
    vector <int> x (phersy), y (phersy);
    for (int i = 0; i < phersy; i++)
    {
        cin >> x [i] >> y [i];
        
        for (int j = i + 1; j < phersy && LIVE; j++)
        {
            int dex = x [i] - x [j];
            int dey = y [i] - y [j];
            if (0 == dex || 0 == dey || dex == dey || -dex == dey)
                LIVE = false;
        }
    }
    cout << (LIVE ? "NO" : "YES")<< endl;
    return 0;
}
