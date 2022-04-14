#include "Q52_NQueensTwo.h"

int Q52_NQueensTwo::totalNQueens(int n)
{
    auto resultCount = 0;
    auto emptyPuzzle = CreateEmptyPuzzle(n);

    SolveNQueens(n, 1, emptyPuzzle, resultCount);

    return resultCount;
}

void Q52_NQueensTwo::SolveNQueens(int totalLevel, int currentLevel, vector<vector<bool>>& puzzleState, int& resultCount)
{
    const auto validPlaces = FindValidPlaces(currentLevel, puzzleState);

    if (validPlaces.empty()) return;

    for (const auto x : validPlaces)
    {
        auto currentState = puzzleState;

        PlaceQueen(x, currentLevel, currentState);

        if (totalLevel == currentLevel)
        {
            resultCount++;
        }
        else
        {
            SolveNQueens(totalLevel, currentLevel + 1, currentState, resultCount);
        }
    }
}

vector<vector<bool>> Q52_NQueensTwo::CreateEmptyPuzzle(int n)
{
    vector<vector<bool>> puzzle;

    for (int x = 0; x < n; x++)
    {
        vector<bool> row;

        for (int y = 0; y < n; y++)
        {
            row.push_back(false);
        }

        puzzle.push_back(row);
    }

    return puzzle;
}

void Q52_NQueensTwo::PlaceQueen(int xIndex, int yIndex, vector<vector<bool>>& puzzle)
{
    for (int y = yIndex + 1; y <= puzzle.size(); y++)
    {
        for (int x = 1; x <= puzzle[y - 1].size(); x++)
        {
            if (x == xIndex || y == yIndex || abs(x - xIndex) == abs(y - yIndex))
                puzzle[y - 1][x - 1] = true;
        }
    }
}

vector<int> Q52_NQueensTwo::FindValidPlaces(int currentY, vector<vector<bool>>& puzzle)
{
    vector<int> result;

    const auto rowIndex = currentY;

    for (int x = 1; x <= puzzle[rowIndex - 1].size(); x++)
    {
        if (!puzzle[rowIndex - 1][x - 1])
            result.push_back(x);
    }

    return result;
}
