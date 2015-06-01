/* Code Abbey Problem #41
 * For n number of triplets, print the median (middle) number of each triplet
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, y, z;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;

        if((y<x && x<z) || (z<x && x<y))
            cout << x << " ";

        else if((x<y && y<z) || (z<y && y<x))
            cout << y << " ";

        else
           cout << z << " ";
    }
    return 0;
}
