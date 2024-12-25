/*Implement a matrix manipulation tool using pointer-to-pointer for matrices.*/

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
int **createMatrix(int rows, int cols);
void inputMatrix(int **matrix, int rows, int cols);
void addMatrices(int **matrixA, int **matrixB, int **result, int rows, int cols);
void displayMatrix(int **matrix, int rows, int cols);
void deleteMatrix(int **matrix, int rows);

int main()
{
    int rows, cols;
    // Input matrix dimensions
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    // Create matrices
    int **matrixA = createMatrix(rows, cols);
    int **matrixB = createMatrix(rows, cols);
    int **result = createMatrix(rows, cols);

    // Input matrices
    cout << "Matrix A:\n";
    inputMatrix(matrixA, rows, cols);

    cout << "Matrix B:\n";
    inputMatrix(matrixB, rows, cols);

    // Add matrices
    addMatrices(matrixA, matrixB, result, rows, cols);

    // Display matrices
    cout << "Matrix A:\n";
    displayMatrix(matrixA, rows, cols);

    cout << "Matrix B:\n";
    displayMatrix(matrixB, rows, cols);

    cout << "Resultant Matrix (A + B):\n";
    displayMatrix(result, rows, cols);

    // Deallocate memory
    deleteMatrix(matrixA, rows);
    deleteMatrix(matrixB, rows);
    deleteMatrix(result, rows);

    return 0;
}
// Function to dynamically create a matrix
int **createMatrix(int rows, int cols)
{
    int **matrix = new int *[rows]; // Allocate memory for row pointers
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[cols]; // Allocate memory for each row
    }
    return matrix;
}

// Function to input a matrix

void inputMatrix(int **matrix, int rows, int cols)
{
    cout << "Enter elements for a " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
}

// Function to add two matrices
void addMatrices(int **matrixA, int **matrixB, int **result, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int **matrix, int rows, int cols)
{
    cout << "Matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

// Function to deallocate memory for a matrix
void deleteMatrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i]; // Deallocate memory for each row
    }
    delete[] matrix; // Deallocate memory for row pointers
    matrix = NULL;
}