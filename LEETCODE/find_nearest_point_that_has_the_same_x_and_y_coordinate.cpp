//********************* Creator- itwasme *******************//
//******************** Created on- 30/1/23 *******************//

// Manhatta Distance - It is the distance between two points
// measured along axes at right angles. In a plane with p1 at
// (x1, y1) and p2 at (x2, y2), it is |x1 - x2| + |y1 - y2|.

// Approach 1 (Brute Force)
// Loop through the vector of points. If x or y coordinate matches,
// calculate and record manhatten distance for every point. Compare
// every time. If manhattan distance is lesser than the previous
// recorded least distance. Return the least distance point's index no.

class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {

        int ans = -1, min = INT_MAX; // for finding least value
        for (int i = 0; i < points.size(); i++)
        {
            int a = points[i][0];
            int b = points[i][1];
            int dist = abs(x - a) + abs(y - b);
            if (x == a || y == b)
            {
                if (dist < min) // for finding least value
                {
                    min = dist;
                    ans = i;
                }
            }
        }
        return ans;
    }
};