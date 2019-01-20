#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    priority_queue<int> a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push(tmp);
    }
    int alice = 0;
    int bob = 0;
    while (!a.empty())
    {
        alice += a.top();
        a.pop();
        if (a.empty())
            break;
        bob += a.top();
        a.pop();
    }
    cout << alice - bob << endl;
    return 0;
}
