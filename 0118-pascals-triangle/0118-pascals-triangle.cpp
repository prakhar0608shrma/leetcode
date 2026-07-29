class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int rowIndex = 0; rowIndex < numRows; rowIndex++) {

            vector<int> row;

            long long res = 1;
            row.push_back(res);

            for (int col = 1; col <= rowIndex; col++) {

                res = res * (rowIndex - col + 1);
                res = res / col;

                row.push_back(res);
            }

            ans.push_back(row);
        }

        return ans;
    }
};