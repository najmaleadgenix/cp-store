#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int matrix[n][n];
    memset(matrix, 0, sizeof(matrix));   // 2D array er value 0 kora
    for (int i = 0; i < n; i++)       // Diagonal er man 1 kora
        for (int j = 0; j < n; j++)
            if (i == j)
                matrix[i][j] = 1;
    while (e--)        // edge porjonto loop chalano
    {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;  //undirected
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}