#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> countBits(int m)
    {
        vector<int> v;
        for (int i = 0; i <= m; i++)
        {
            int n = i;
            int c = 0;
            while (n)
            {
                c++;
                n = n & (n - 1);
            }
            v.push_back(c);
        }
        return v;
    }
};
int main()
{

    return 0;
}