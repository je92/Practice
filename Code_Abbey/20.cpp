/* Code Abbey Problem #20
 * Count the number of vowels in a string and print the result
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string str;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        count = 0;
        getline(cin, str);

        for(int y = 0; y < str.size(); y++)
        {
            if(str[y] == 'a' || str[y] =='e' || str[y] == 'i' 
		    || str[y] == 'o' || str[y] == 'u' || str[y] == 'y')
		count++;
        }
        cout << count << " ";
    }
    return 0;
}
