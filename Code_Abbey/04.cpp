/*Code Abbey Problem #4
For N number of pairs (x and y) the program finds
the smallest number for each pair.
*/

#include <iostream>
using namespace std;

int main()
{
    int N; //number of pairs specified by the user
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;

        if(x < y)
            cout << x << " ";
        else
            cout << y << " ";
    }
    return 0;
}
