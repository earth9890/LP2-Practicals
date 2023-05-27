#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define int long long
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
#define all(x) (x).begin(), (x).end()
#define setpr(x) cout << setprecision(x) << fixed
const ll mod = 1e9 + 7;
const ll N = 1e6 + 1;

class Harish
{
public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0)
            {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;
                solve(col + 1, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueen(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);

        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        vector<int> leftRow(n, 0), upperDiagnal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
        solve(0, board, ans, leftRow, upperDiagnal, lowerDiagonal, n);
        return ans;
    }
};

signed main()
{
    ios_base::sync_with_stdio(false);
    Harish h;
    vector<vector<string>> s = h.solveNQueen(4);
    for (auto i : s)
    {
        for (auto ii : i)
        {
            cout << ii << endl;
        }
        cout << endl;
    }
}