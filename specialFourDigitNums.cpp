//p. 97 / ex. 12
//Програмата извежда всички 4-цифрени числа, сумата от цифрите на които, е двуцифрено четно число
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

        if((x + y + z + w) >= 10 && (x + y + z + w) % 2 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
