#include "Q51_NQueens.h"

vector<vector<string>> Q51_NQueens::solveNQueens(int n)
{
    vector<vector<string>> results;

    auto emptyPuzzle = CreateEmptyPuzzle(n);
    auto answer = InitResult(n);

    SolveNQueens(n, 1, emptyPuzzle, answer, results);

    return results;
}

void Q51_NQueens::SolveNQueens(int totalLevel, int currentLevel, vector<vector<bool>>& puzzleState, vector<string>& answer, vector<vector<string>>& results)
{
    const auto validPlaces = FindValidPlaces(currentLevel, puzzleState);

    if (validPlaces.empty()) return;

    for (const auto x : validPlaces)
    {
        auto currentState = puzzleState;
        auto currentAnswer = answer;

        PlaceQueen(x, currentLevel, currentState, currentAnswer);

        if (totalLevel == currentLevel)
        {
            results.push_back(currentAnswer);
        }
        else
        {
            SolveNQueens(totalLevel, currentLevel + 1, currentState, currentAnswer, results);
        }
    }
}

vector<vector<bool>> Q51_NQueens::CreateEmptyPuzzle(int n)
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

void Q51_NQueens::PlaceQueen(int xIndex, int yIndex, vector<vector<bool>>& puzzle, vector<string>& result)
{
    for (int y = yIndex + 1; y <= puzzle.size(); y++)
    {
        for (int x = 1; x <= puzzle[y - 1].size(); x++)
        {
            if (x == xIndex || y == yIndex || abs(x - xIndex) == abs(y - yIndex))
                puzzle[y - 1][x - 1] = true;
        }
    }

    result[yIndex - 1][xIndex - 1] = 'Q';
}

vector<int> Q51_NQueens::FindValidPlaces(int currentY, vector<vector<bool>>& puzzle)
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

vector<string> Q51_NQueens::InitResult(int puzzleSize)
{
    vector<string> result;

    for (int y = 1; y <= puzzleSize; y++)
    {
        string row;

        for (int x = 1; x <= puzzleSize; x++)
        {
            row += ".";
        }

        result.push_back(row);
    }

    return result;
}
