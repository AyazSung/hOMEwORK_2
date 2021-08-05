#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    // SQUARE EQUATION---------------------------
    int a, b, c;
    cin >> a >> b >> c;

    int Dis = b * b - 4 * a * c;

    if (Dis < 0) cout << "No SOLUTION";
    else
    {
        double r1 = (-b + sqrt(Dis)) / (2 * a);
        double r2 = (-b - sqrt(Dis)) / (2 * a);

        cout << r1 << "*****" << r2;
    }

}
