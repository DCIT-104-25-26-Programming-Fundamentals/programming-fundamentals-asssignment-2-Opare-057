#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

void transposeMatrix(int matrix[10][10], int rows, int cols)
{
    int transpose[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:\n";
    displayMatrix(transpose, cols, rows);
}

void addMatrices(int matrix1[10][10], int matrix2[10][10], int rows, int cols)
{
    int sum[10][10];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nSum Matrix:\n";
    displayMatrix(sum, rows, cols);
}

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int cols1, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "\nProduct Matrix:\n";
    displayMatrix(result, rows1, cols2);
}

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows, cols;

    cout << "PART A - Transpose Matrix\n";
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    displayMatrix(matrix1, rows, cols);
    transposeMatrix(matrix1, rows, cols);

    cout << "\nPART B - Add Two Matrices\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter first matrix element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter second matrix element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, rows, cols);

    cout << "\nPART C - Multiply Two Matrices\n";

    int rows1, cols1, rows2, cols2;

    cout << "Enter rows of first matrix: ";
    cin >> rows1;
    cout << "Enter columns of first matrix: ";
    cin >> cols1;

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cout << "Enter first matrix element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter rows of second matrix: ";
    cin >> rows2;
    cout << "Enter columns of second matrix: ";
    cin >> cols2;

    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << "Enter second matrix element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    if (cols1 != rows2)
    {
        cout << "Matrix multiplication is not possible." << endl;
    }
    else
    {
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
    }

    return 0;
}