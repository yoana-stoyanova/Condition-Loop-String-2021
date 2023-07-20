//p. 97 / ex. 10
//Програмата извежда всички числа между m и n, които са кратни на 5
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "m = ";
    cin >> m;

    do{
        cout << "n > m = ";
        cin >> n;
    }
    while(n < m);

    for(int i = m; i <= n; i++)
    {
        if(i % 5 == 0) cout << i << " ";
    }

    return 0;
}
