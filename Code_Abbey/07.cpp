/* Code Abbey Problem #7
 * Fahrenheit to Celsius Calculator
 */
#include <iostream>
using namespace std;

int main()
{
    //f to c formula (F-32)/1.8
    int n;
    cin >> n;

    int f, c; //fahrenhit and celcius variables
    double x; //temporary variable used for division and rounding to int

    for(int i = 0; i < n; i++)
    {
        cin >> f;
        x = (f-32)/1.8;

        if( x > 0 )
        {
            c = x + 0.5;
            cout << c << " ";
        }
        else
        {
            c = x - 0.5;
            cout << c << " ";
        }
    }
    return 0;
}
