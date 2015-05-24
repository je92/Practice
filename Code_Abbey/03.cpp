/* Code Abbey Problem #3

   User inputs:
   1) The number of pairs of integers they want to add
   2) N pairs of numbers

   Program outputs the sum of each pair of integers
*/

#include <iostream>
using namespace std;

int main()
{
    int N; //number of pairs
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << x + y << " ";
    }
    return 0;
}
