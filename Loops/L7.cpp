#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) 
        {
            if (j >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
