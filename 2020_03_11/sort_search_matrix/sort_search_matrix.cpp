#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool swap(short int mat[][4], int i)
{     
    for(int c=0;c<4;c++)
    {
        short int temp = mat[i][c];
        mat[i][c]=mat[i+1][c];
        mat[i+1][c]=temp;
    }
    return true;
}

void output_matrix(short int mat[][4], int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << setw(5) << mat[i][j] << " ";            
        }
        cout << endl;
    }
}

void sort(short int mat[][4], int row, int col, int sort_col, bool order)
// array m holds n x 4 matrix, sort_col is column number in which 
// we want to sort by; order if true will sort from smallest to 
// largest; if false will sort from largest to smallest
{
    bool swapped;
    
    do
    {
        swapped=false;
        for(int i=0;i<row-1;i++)
        {
            if ( order ) // if order true
            {
                if (mat[i][sort_col] > mat[i+1][sort_col]) swapped=swap(mat,i);                
            }
            else
            {
                if (mat[i][sort_col] < mat[i+1][sort_col]) swapped=swap(mat,i);                             
            }
            
        }
    } while (swapped);
}

int main(int argc, char** argv) {

    short int m[4][4] = { {1, 10, 20, 30},
                          {3,4,5,6},
                          {16,15,13,12},
                          {21,24,26,28} };
    
    output_matrix(m,4,4);
    cout << "==========================================================\n\n";
    for(int sort_col=0;sort_col<4;sort_col++)
    {
        cout << "Sorting by column " << sort_col << ":\n";
        sort(m,4,4,sort_col,true);

        output_matrix(m,4,4);
        cout << "==========================================================\n\n";
    }
    
    for(int sort_col=0;sort_col<4;sort_col++)
    {
        cout << "Sorting by column " << sort_col << ":\n";
        sort(m,4,4,sort_col,false);

        output_matrix(m,4,4);
        cout << "==========================================================\n\n";
    }
    return 0;
}

