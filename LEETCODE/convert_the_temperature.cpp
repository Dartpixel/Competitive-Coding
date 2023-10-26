//********************* Creator- itwasme *******************//
//******************* Created on- 12/02/23 *******************//

// setprecision()
// used to round of floating point number till required decimal places

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> ans;
        double kelvin = celsius + 273.15;
        ans.push_back(kelvin);
        double fahrenheit = (celsius * 1.80) + 32.00;
        ans.push_back(fahrenheit);
        return ans;
    }
};