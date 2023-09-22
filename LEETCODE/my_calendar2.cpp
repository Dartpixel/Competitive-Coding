class MyCalendarTwo
{
public:
    multiset<pair<int, int>> p;
    MyCalendarTwo()
    {
    }

    bool book(int start, int end)
    {
        p.insert(make_pair(start, 1));
        p.insert(make_pair(end, -1));
        int booking = 0;
        for (auto i : p)
        {
            booking += i.second;
            if (booking > 2)
            {
                p.erase(p.find(make_pair(start, 1)));
                p.erase(p.find(make_pair(end, -1)));
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */