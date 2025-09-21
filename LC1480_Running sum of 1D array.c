/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *result = (int*)malloc(numsSize * sizeof(int));  //Declaring the result array dynamically.

    int i,sum = 0;
    for(i=0; i<numsSize; i++)
    {
        sum = sum+nums[i];
        result[i] = sum;
    } 
    // Storing the length of the result array in returnSize so the caller knows how many elements are returned
    *returnSize = numsSize;   
    return result;
}
