class Solution {
    public:

        bool isSafe(int row, int col, vector < vector < int >> & board, int n) {

            int x = row;
            int y = col;
            // check for same row

            while (y >= 0) {
                if (board[x][y--] == 1) {
                    return false;
                }
            }

            y = col;
            // check forr diagonal
            while (x >= 0 && y >= 0) {
                if (board[x--][y--] == 1) {
                    return false;
                }

            }
            x = row;
            y = col;
            // check forr diagonal
            while (x < n && y >= 0) {
                if (board[x++][y--] == 1) {
                    return false;
                }

            }
            return true;

        }

    void solve(int col, vector < vector < int >> & board, vector < vector < int >> & ans, int n) {
        if (col == n) {
            vector < int > temp;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (board[j][i] == 1)
                        temp.push_back(j + 1);
                }
            }
            ans.push_back(temp);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                // if placing queen is safe
                board[row][col] = 1;
                solve(col + 1, board, ans, n);
                // backtrack
                board[row][col] = 0;
            }
        }
    }

    vector < vector < int >> nQueen(int n) {
        // code here

        // Write your code here.
        vector < vector < int >> ans;
        vector < vector < int >> board(n, vector < int > (n, 0));

        solve(0, board, ans, n);
        return ans;
    }
};
