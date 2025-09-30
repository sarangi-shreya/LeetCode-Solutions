int cmp(const void* a, const void* b)
{
    int x = *(int*)a;
    int y = *(int*)b;
    if(x > y)
    {
        return 1;
    }
    if(x < y)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int singleNumber(int* nums, int numsSize) 
{    
    int i;
    qsort(nums, numsSize, sizeof(int),cmp); //Sorting the array in ascending order
    for(i=0; i<numsSize-1; i +=2 )
    {
        if(i + 1 == numsSize)
        {
            return nums[i];
        }
        if(nums[i] != nums[i+1])
        {
            return nums[i];
        }  
    }
    return nums[numsSize - 1];  //The single number is the last element
}
