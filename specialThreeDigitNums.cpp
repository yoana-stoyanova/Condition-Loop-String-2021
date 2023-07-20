//p. 97 / ex. 11
//Програмата извежда всички 3-цифрени числа, които нямат в записа си '0' и са кратни на всяка своя цифра
#include <iostream>
using namespace std;
int main()
{
    int n;

    for(n = 100; n <= 999; n++)
    {
        int x = n % 10;//ed.
        int y = n / 10 % 10;//des.
        int z = n / 100;//stot.

        if(x != 0 && y != 0)
            if(n % x == 0 && n % y == 0 && n % z == 0)
            {
                cout << n << " ";
            }
    }

    return 0;
}
