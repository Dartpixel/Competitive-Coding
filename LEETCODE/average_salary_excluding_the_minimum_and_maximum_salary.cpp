class Solution
{
public:
    double average(vector<int> &salary)
    {
        int a = *max_element(salary.begin(), salary.end());
        int b = *min_element(salary.begin(), salary.end());
        int sum = 0;
        for (int i = 0; i < salary.size(); i++)
        {
            sum = sum + salary[i];
        }
        double ans = sum - (a + b);
        double size = salary.size() - 2;
        return (double)ans / size;
    }
};