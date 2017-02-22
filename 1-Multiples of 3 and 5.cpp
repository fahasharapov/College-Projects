#include <iostream>
using namespace std;


/********************************************************************
If we list all the natural numbers below 10 that are multiples of
3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
********************************************************************/

int main()
{
   int result[1100];
   int totalResult = 0;
   int count;

   cout << "All natural numbers below 10 that are multiples of 3 and 5, are: " << endl;

   for (int count = 3; count < 1000; count++) {

        if ((count % 3) == 0 || (count % 5) == 0)

            {
                result[count] = count;
                totalResult = totalResult + result[count];
            }

    }

cout << totalResult << endl;

return 0;

}
