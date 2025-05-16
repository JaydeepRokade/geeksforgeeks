class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& arr) {
        int k = arr.size(); 

        
        vector<int> range = {0, 100000};

      
        int max_ele = INT_MIN;

        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        
        for (int i = 0; i < k; i++) {
            pq.push({arr[i][0], i, 0});
            max_ele = max(max_ele, arr[i][0]);
        }

        // Process until one of the lists gets exhausted
        while (!pq.empty()) {
            vector<int> top = pq.top();  // Get the smallest element
            pq.pop();
            
            int min_ele = top[0];    // Current minimum element
            int list = top[1];       // Index of the list from which min_ele came
            int list_idx = top[2];   // Index in that list

            // Update the result range if the current one is smaller
            if ((max_ele - min_ele) < (range[1] - range[0])) {
                range = {min_ele, max_ele};
            }

            // If there is a next element in the same list, add it to the heap
            if (list_idx + 1 < arr[list].size()) {
                int next_val = arr[list][list_idx + 1];
                pq.push({next_val, list, list_idx + 1});
                
                // Update max_ele if necessary
                max_ele = max(max_ele, next_val);
            } else {
                // If any list is exhausted, we cannot include all lists in the range anymore
                break;
            }
        }

        return range;
    }
};
