#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 10 * a; i >= 0; i -= 10)
        cout << "Count down: " << i << endl;
    return 0;
}