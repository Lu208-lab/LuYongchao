#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "请输入数字n：" << endl;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "1到n累加结果：" << sum << endl;
    return 0;
}

