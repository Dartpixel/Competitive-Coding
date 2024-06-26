int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }
    int flag = nums[0];
    int count = 1;
    for (int i = 1; i < numsSize; i++)
    {
        if (flag != nums[i])
        {
            nums[count++] = nums[i];
            flag = nums[i];
        }
    }
    return count;
}