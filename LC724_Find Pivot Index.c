int pivotIndex(int* nums, int numsSize) {
    int i,totalSum=0,leftSum = 0;
    for(i=0; i<numsSize; i++)
    {
        totalSum += nums[i];
    }
    for(i=0; i<numsSize; i++)
    {
        if(leftSum == totalSum - leftSum - nums[i])
            return i;
        else
            leftSum = leftSum + nums[i];
    }
return -1;
}

