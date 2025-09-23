/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int * res=(int*)malloc(numsSize * sizeof(int));
    int i,j=0;
    for(i=0; i<numsSize; i++) {
        if(nums[i] % 2 == 0) {  //First Adding the even numbers to the result array 
            res[j++]=nums[i];
        }
    }
    for(i=0; i<numsSize; i++) {
        if(nums[i] % 2 != 0) {  //Then adding the odd numbers to the array
            res[j++]=nums[i];
        }
    }
    *returnSize = numsSize;
    return res;

}
