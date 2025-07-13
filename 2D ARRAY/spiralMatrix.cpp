#include <iostream>
using namespace std;
void spiralMatrix(int arr[][4], int m, int n)
{
    int sRow = 0, sCol = 0, eRow = m - 1, eCol = n - 1;
    int counter = 0;
    while (counter < m * n)
    {
        //top
        for (int i = sCol; i <= eCol; i++)
        {
            cout << arr[sRow][i] << " ";
            counter++;
        }

        //right
        for (int i = sRow + 1; i <= eRow; i++)
        {
            cout << arr[i][eCol] << " ";
            counter++;
        }

        //bottom
        for (int i = eCol - 1; i >= sCol; i--)
        {
            if(sRow== eRow){
                break;
            }
            cout << arr[eRow][i] << " ";
            counter++;
        }

        //left
        for (int i = eRow - 1; i >= sRow + 1; i--)
        {
            if(sCol== eCol){
                break;
            }
            cout << arr[i][sRow] << " ";
            counter++;
        }
        sRow++;
        sCol++;
        eRow--;
        eCol--;
    }
}
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int m = 3, n = 4;
    spiralMatrix(arr, m, n);
    return 0;
}