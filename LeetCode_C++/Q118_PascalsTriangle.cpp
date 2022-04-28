#include "Q118_PascalsTriangle.h"

vector<vector<int>> Q118_PascalsTriangle::generate(int numRows)
{
    vector<vector<int>> result = { {1} };

    for (int row = 1; row < numRows; row++)
    {
        vector<int> newRow(row + 1, 1);

        for (int index = 1; index < result[row - 1].size(); index++)
            newRow[index] = result[row - 1][index - 1] + result[row - 1][index];

        result.push_back(newRow);
    }

    return result;
}
