#pragma once
#include <vector>

using namespace std;

class Q52_NQueensTwo
{
public:
	int totalNQueens(int n);
	void SolveNQueens(int totalLevel, int currentLevel, vector<vector<bool>>& puzzleState, int& resultCount);
	vector<vector<bool>> CreateEmptyPuzzle(int n);
	void PlaceQueen(int xIndex, int yIndex, vector<vector<bool>>& puzzle);
	vector<int> FindValidPlaces(int currentY, vector<vector<bool>>& puzzle);
};

