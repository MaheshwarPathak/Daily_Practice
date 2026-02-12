/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    
    // Allocate memory for the triangle
    int** triangle = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    
    // Set the return size
    *returnSize = numRows;

    // Generate Pascal's Triangle
    for (int i = 0; i < numRows; i++) {
        // Allocate memory for each row
        triangle[i] = (int*)malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        // First and last element of each row is 1
        triangle[i][0] = triangle[i][i] = 1;

        // Fill in the middle elements
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}


 