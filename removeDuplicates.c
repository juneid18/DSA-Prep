#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    int k = 1;
    int i;
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int nums[] = {1, 1, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int newSize = removeDuplicates(nums, size);
    printf("%d\n", newSize);
}