//p. 83 / ex. 8
//По зададен месец и година, програмата определя броя на дните в този месец
#include <iostream>
using namespace std;
int main ()
{
    int month;
    int year;

    cout << "month = ";
    cin >> month;
    cout << "year = ";
    cin >> year;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << 31;
        break;
    case 2:
        if(year % 4 == 0){
            cout << 29;
        }
        else {
            cout << 28;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << 30;
        break;
    default:
        cout << "That's not a month.";

    }

    return 0;
}
