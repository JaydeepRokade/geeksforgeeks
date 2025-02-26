class Solution {
private:
    stack<int> st;       // Stack to store elements
    stack<int> min_st;   // Stack to track the minimum element

public:
    Solution() {
        // Constructor - No initialization required
    }

    // Add an element to the top of the stack
    void push(int x) {
        st.push(x);
        if (min_st.empty() || x <= min_st.top()) {
            min_st.push(x);
        } else {
            min_st.push(min_st.top());
        }
    }

    // Remove the top element from the stack
    void pop() {
        if (!st.empty()) {
            st.pop();
            min_st.pop();
        }
    }

    // Returns top element of the stack
    int peek() {
        return st.empty() ? -1 : st.top();
    }

    // Finds the minimum element of the stack
    int getMin() {
        return min_st.empty() ? -1 : min_st.top();
    }
};

// Function to process queries and return the required outputs
vector<int> processQueries(int q, vector<vector<int>>& queries) {
    Solution s;
    vector<int> result;

    for (const auto& query : queries) {
        if (query[0] == 1) {
            s.push(query[1]);
        } else if (query[0] == 2) {
            s.pop();
        } else if (query[0] == 3) {
            result.push_back(s.peek());
        } else if (query[0] == 4) {
            result.push_back(s.getMin());
        }
    }

    return result;
}
