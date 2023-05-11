#include <bits/stdc++.h>

bool isSafe(int row, int col, vector < vector < int >> board, int n, int val) {
    for (int i = 0; i < n; i++) {
        if (board[row][i] == val) {
            return false;
        }
        if (board[i][col] == val) {
            return false;
        }
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val) {
            return false;
        }

    }
    return true;

}
bool solve(vector < vector < int >> & board) {
    int n = 9;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (board[row][col] == 0) {
                for (int val = 1; val <= n; val++) {
                    if (isSafe(row, col, board, n, val)) {
                        board[row][col] = val;

                        bool possible = solve(board);
                        if (possible) {
                            return true;
                        } else {
                            // backtrack
                            board[row][col] = 0;
                        }

                    }
                }
                return false;
            }
        }
    }
    return true;

}

void solveSudoku(vector < vector < int >> & sudoku) {
    solve(sudoku);
}
