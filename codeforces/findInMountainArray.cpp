#include <bits/stdc++.h>
using namespace std;
class MountainArray
{
public:
    int get(int index);
    int length();
};
int peakIndex(MountainArray &mountainArray)
{
    int start = 0;
    int end = mountainArray.length() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int midElement = mountainArray.get(mid);

        if (midElement > mountainArray.get(mid + 1))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int binary_search(MountainArray &MountainArray,int start, int end , int target)
{
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        int midElement = MountainArray.get(mid);
        if(midElement == target)
        {
            return mid;
        }
        else if(midElement > target)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
}
int reverseBinary(MountainArray &mountainArr,int start, int end,int target)
{
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        int midElement  = mountainArr.get(mid);
        if(midElement==target)
        {
            return mid;
        }else if(midElement>target)
        {
            start = mid+1;//reverse bianry search
        }
        else{
            end = mid-1;
        }
    }

}






int findMountainArray(int target, MountainArray &mountainArr)
{
    int n = mountainArr.length();
    int idx = peakIndex(mountainArr);
    // 0 to idx me binary search
    int res = binary_search(mountainArr, 0, idx, target);

    res = reverseBinary(mountainArr, idx + 1, n - 1, target);
}
int main() {}