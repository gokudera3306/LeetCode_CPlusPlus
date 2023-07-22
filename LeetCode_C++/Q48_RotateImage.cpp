//
// Created by Adam Hung on 2023/7/22.
//

#include "Q48_RotateImage.h"

void Q48_RotateImage::rotate(vector<vector<int>>& matrix)
{
    int n = matrix.size();

    int y_start = 0;
    for (int x = 0; x < n; x++)
    {
        for (int y = y_start; y < n; y++)
        {
            auto temp = matrix[x][y];
            matrix[x][y] = matrix[y][x];
            matrix[y][x] = temp;
        }
        y_start++;
    }

    for (int y = 0; y < n / 2; y++)
    {
        for (int x = 0; x < n; x++)
        {
            auto temp = matrix[x][y];
            matrix[x][y] = matrix[x][n - 1 - y];
            matrix[x][n - 1 - y] = temp;
        }
    }
}
