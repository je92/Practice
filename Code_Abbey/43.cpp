/*Code Abbey #43
 * Dice Roll - Psuedo Random Number Generator
 */

#include <iostream>
using namespace std;

int main()
{
    int N; //size of input
    cin >> N;
  
    float input = 0;
    int random = 0;
  
    for(int i = 0; i < N; i++)
    {
      cin >> input;
      random = input*6;
      cout << random+1 << " ";
    }
    return 0;
}
