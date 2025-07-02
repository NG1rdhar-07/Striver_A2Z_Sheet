class Solution { //// Leetcode wala soln hai 
public:
    vector<int> rowGenerate(int rows){
        long long soln = 1;
        vector<int>solnRow;
        solnRow.push_back(soln);
        
        for(int column = 1; column<rows; column++)
        {
            soln = soln*(rows-column); // previous wale se multiply kr diya soln ko !!
            soln = soln/column;
            solnRow.push_back(soln);
        }
            return solnRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

    for (int rows = 1; rows <= numRows; rows++) {
        ans.push_back(rowGenerate(rows)); // 1 se lekar jitne rows hain wahan tak chalega !!
    }
        return ans;
    }
};