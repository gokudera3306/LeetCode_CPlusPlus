#include "Q88_MergeSortedArray.h"

void Q88_MergeSortedArray::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    if (n == 0) return;

    if (m == 0)
    {
        for (auto x = 0; x < nums2.size(); x++)
            nums1[x] = nums2[x];

        return;
    }

    auto mIndex = m - 1, nIndex = n - 1, currentIndex = m + n - 1;

    while (currentIndex >= 0)
    {
        if (mIndex >= 0 && nIndex >= 0 && nums1[mIndex] >= nums2[nIndex])
        {
            nums1[currentIndex] = nums1[mIndex];
            mIndex--;
        }
        else if (nIndex >= 0)
        {
            nums1[currentIndex] = nums2[nIndex];
            nIndex--;
        }

        currentIndex--;
    }
}
