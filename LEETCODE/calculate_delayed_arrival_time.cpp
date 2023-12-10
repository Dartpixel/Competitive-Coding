class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        int sum1 = arrivalTime + delayedTime;
        if (sum1 <= 23)
        {
            return sum1;
        }
        else
        {
            sum1 -= 24;
            return sum1;
        }
    }
};