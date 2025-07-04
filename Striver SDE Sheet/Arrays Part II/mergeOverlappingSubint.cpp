class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> finalSolution;

        for(int i =0; i<intervals.size(); i++)
        {
            if(finalSolution.empty() || intervals[i][0] > finalSolution.back()[1]){
                finalSolution.push_back(intervals[i]);
            }
            else{
                finalSolution.back()[1] = max(finalSolution.back()[1], intervals[i][1]);
            }
        }
        return finalSolution;
    } 
};