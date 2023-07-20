//p. 96 / ex. 8
//Програмата извежда число А на N-та степен
#include <iostream>
using namespace std;
int main()
{
    double a;
    int n;
    int br;

    cout << "a = ";
    cin >> a;
    cout << "n = ";
    cin >> n;


    double j = a;

    if(n == 0){
        cout << 1;
    } else if(n == 1){
        cout << a;
    } else {
        for(br = 2; br <= n; br++){
            a = a * j;
        }

        cout << a;
    }

    return 0;
}
