#pragma once
#include <string>
#include <vector>

using namespace std;

class Q51_NQueens
{
public:
	vector<vector<string>> solveNQueens(int n);
	void SolveNQueens(int totalLevel, int currentLevel, vector<vector<bool>>& puzzleState, vector<string>& answer, vector<vector<string>>& results);
	vector<vector<bool>> CreateEmptyPuzzle(int n);
	void PlaceQueen(int xIndex, int yIndex, vector<vector<bool>>& puzzle, vector<string>& result);
	vector<int> FindValidPlaces(int currentY, vector<vector<bool>>& puzzle);
	vector<string> InitResult(int puzzleSize);
};

