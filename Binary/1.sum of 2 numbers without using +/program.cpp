#include <iostream>
using namespace std;
class Solution
{
public:
    int getSum(int a, int b)
    {
        while (b != 0)
        {
            unsigned int t = (a & b);
            a = a ^ b;
            b = t << 1;
        }
        return a;
    }
};
int main()
{

    return 0;
}