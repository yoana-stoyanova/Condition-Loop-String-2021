//p. 97 / ex. 9
//���������� ������� ������ 3-������� �����, ������ �� ������� �� �����, � ����� �� ������� k
#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << "k = ";
    cin >> k;

    int n;

    for(n = 100; n <= 999; n++)
    {
        int x = n % 10;
        int y = n / 10 % 10;
        int z = n / 100;

        if(x + y + z == k)
        {
            cout << n << "; ";
        }
    }

    return 0;
}
