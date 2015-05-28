/* Code Abbey Problem #6 - Rounding
 * 
 * Divide two doubles (x & y) and round the result UP to the nearest integer.
 * Note that for negative values "greater" means "closer to zero".
 * */

#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    int round;

    int N; //Number of x and y values to divide
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> x; //read in 1st number
        cin >> y; //read in 2nd number
        z = x/y;

        if(z > 0)
        {
           round = z + 0.5;
           cout << round << " ";
        }
        else
        {
            round = z - 0.5;
            cout << round << " ";
        }
    }
    return 0;
}
