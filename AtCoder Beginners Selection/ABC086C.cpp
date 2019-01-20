#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t, x, y;
    cin >> n;
    t = 0;
    x = 0;
    y = 0;
    for (int i = 0; i < n; i++)
    {
        int t1, x1, y1;
        cin >> t1 >> x1 >> y1;
        int diff = abs(x1 - x) + abs(y1 - y) - (t1 - t);
        if (!((diff <= 0) && (diff % 2 == 0)))
        {
            cout << "No" << endl;
            return 0;
        }
        t = t1;
        x = x1;
        y = y1;
    }
    cout << "Yes" << endl;
    return 0;
}
