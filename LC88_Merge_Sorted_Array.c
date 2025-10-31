void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m-1;                // pointer for last valid element of nums1
    int j = n-1;                // pointer for last valid element of nums2
    int k = m + n - 1;          // pointer for end of nums1 (final position)
    while(i >= 0 && j >= 0)
    {
        if(nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
}
