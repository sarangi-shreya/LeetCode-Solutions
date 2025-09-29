/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int i,j;
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    int maxCandies = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandies)
            result[i] = true;
        else
            result[i] = false;
    }
    *returnSize = candiesSize;
    return result;
}
