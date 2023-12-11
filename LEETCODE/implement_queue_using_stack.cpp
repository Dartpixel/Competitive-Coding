//********************* Creator- itwasme *******************//
//******************** Created on- 03/02/23 *******************//

// Approach
// if stack is empty, call push_st and push x in stack st.
// for pop, store the top in a variable and then call pop function
// for peek st.top(), is used to return the top element in the stack
// empty function contains .empty() function which clears the stack

class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
        // default / empty constructor
    }

    void push(int x)
    {
        push_st(x);
    }
    void push_st(int x)
    {
        if (st.empty())
        {
            st.push(x);
            return;
        }
        int data = st.top();
        st.pop();
        push_st(x);
        st.push(data);
    }

    int pop()
    {
        int x = st.top();
        st.pop();
        return x;
    }

    int peek()
    {
        return st.top();
    }

    bool empty()
    {
        return st.empty();
    }
};