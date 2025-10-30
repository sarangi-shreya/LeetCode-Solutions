/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a,const void* b) {
    return (*(int*)a - *(int*)b);
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1,nums1Size,sizeof(int),cmp); //Sorting nums1 array
    qsort(nums2,nums2Size,sizeof(int),cmp); //Sorting nums2 array
    int* result = (int *)malloc(sizeof(int) * (nums1Size+nums2Size));
    int i=0,j=0,k=0;
    while(i< nums1Size && j<nums2Size)
    {
        if(nums1[i] == nums2[j])
        {
            if(k==0 || result[k-1] != nums1[i]) //checking for duplicates
            {
                result[k] = nums1[i];
                k++;
            }
            i++;
            j++;
        }
        else if(nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
    *returnSize = k;
    return result;
}
