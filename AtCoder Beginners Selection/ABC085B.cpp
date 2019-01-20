#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    priority_queue<int> d;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        d.push(tmp);
    }
    int count = 0;
    int top = 0;
    while (!d.empty())
    {
        if (d.top() != top)
        {
            top = d.top();
            count++;
        }
        d.pop();
    }
    cout << count << endl;
    return 0;
}