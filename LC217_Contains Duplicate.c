int cmp(const void* a, const void* b)
{
    int x = *(int*)a;        //Casting void pointers to int pointers and get values
    int y = *(int*)b;
    if (x < y) {
        return -1;
    } 
    if (x > y) {
         return 1;
    }
    return 0;
}
bool containsDuplicate(int* nums, int numsSize) 
{
    qsort(nums,numsSize,sizeof(int),cmp);  //Sorting the array in ascending order using qsort
    int i;
    for(i=1; i<numsSize; i++)
    {
        if( nums[i] == nums[i-1] )
        {
            return true;
        }
    }
    return false;
}
