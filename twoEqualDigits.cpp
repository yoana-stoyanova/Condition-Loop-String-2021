//p. 97 / ex. 13
//���������� ������� ������ 4-������� �����, ����� ���� ���� 2 ����� �����
#include <iostream>
using namespace std;
int main()
{
    for(int i = 1000; i <= 9999; i++)
    {
        int x = i % 10;
        int y = i / 10 % 10;
        int z = i / 100 % 10;
        int w = i / 1000;

        if
        (
            x == y || x == z || x == w
            ||
            y == z || y == w
            ||
            z == w
        )
        {
            cout << i << " ";
        }
    }
}
