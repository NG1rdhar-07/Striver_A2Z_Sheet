class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>freq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        for(int n : nums)
        {
            freq[n]++;    
        }

        for(auto& x : freq)
        {
            // minHeap.push({x.first, x.second});  // sorts heap by elements !!
            minHeap.push({x.second, x.first}); // sorts heap by frequency !!
            
            if(minHeap.size() > k) {
                minHeap.pop(); // Remove the least frequent element
            }
        }


        vector<int>soln;

        while(!minHeap.empty())
        {
            soln.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return soln;
    }
};