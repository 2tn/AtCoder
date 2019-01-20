#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    int ret = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int target = i;
        while (target != 0)
        {
            sum += target % 10;
            target /= 10;
        }
        if ((sum >= a) && (sum <= b))
            ret += i;
    }
    cout << ret << endl;
    return 0;
}
