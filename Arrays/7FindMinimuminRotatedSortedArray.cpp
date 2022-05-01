// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
#include<iostream>
#include<vector>
class Solution {
public:
    int count(vector<int> &a)
{
    //returns index of min element
    int len=a.size();
    int low = 0, high = len - 1;
    while (low <= high)
    {
        int mid = low+(high-low)/2;
        int next=(mid+1)%(len);
        int prev=(mid+len-1)%(len);
        if (a[mid] <=a[next] && a[mid]<=a[prev])
        {
            return mid;
        }
        else if (a[mid] <= a[high])
        {
        high = mid-1;
        }
        else if (a[mid] >= a[low])
        {
        low = mid+1;
        }
    }
   
    return -1;
}
    int findMin(vector<int>& a) {
        return a[count(a)];
    }
};
using namespace std;
int main()
{

return 0;
}