/*Code Abbey Problem #30
 * Reverse a string
 */

#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for(int i = str.size()-1; i > -1; i--)
        cout << str[i];

    return 0;
}
