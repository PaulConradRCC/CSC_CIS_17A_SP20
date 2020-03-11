#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool swap(int a[], string b[], double c[], int i)
{
    int temp_a = a[i];
    string temp_b = b[i];
    double temp_c = c[i];
    a[i]=a[i+1]; 
    a[i+1]=temp_a;
    b[i]=b[i+1]; 
    b[i+1]=temp_b;
    c[i]=c[i+1]; 
    c[i+1]=temp_c;
    return true;
}

void output_parallel_array(int a[], string b[], double c[], int sz)
{
    for(int i=0;i<sz;i++)
    {
        cout << setw(9) << a[i] << " ";
        cout << setw(10) << b[i] << " ";
        cout << fixed << setw(4) << setprecision(2) << c[i] << endl;
    }
}

void sort(int a[], string b[], double c[], int sz, int col, bool order)
// array a holds id, array b holds name, array c holds gpa
// sz is the size of the array (all 3 must match), col is
// the "column number" in which we want to sort by;
// with 0 for id, 1 for name, and 2 for gpa
// order if true will sort from smallest to largest; if false will
// sort from largest to smallest
{
    bool swapped;
    
    do
    {
        swapped=false;
        for(int i=0;i<sz-1;i++)
        {
            if ( order ) // if order true
            {
                if (col==0)
                {
                    if (a[i] > a[i+1]) swapped=swap(a,b,c,i);
                }
                if (col==1)
                {
                    if (b[i] > b[i+1]) swapped=swap(a,b,c,i);
                }
                if (col==2)
                {
                    if (c[i] > c[i+1]) swapped=swap(a,b,c,i);             
                }
            }
            else
            {
                if (col==0)
                {
                    if (a[i] < a[i+1]) swapped=swap(a,b,c,i);
                }
                if (col==1)
                {
                    if (b[i] < b[i+1]) swapped=swap(a,b,c,i);
                }
                if (col==2)
                {
                    if (c[i] < c[i+1]) swapped=swap(a,b,c,i);             
                }
            }
            
        }
    } while (swapped);
}

int main(int argc, char** argv) {

    int id[5] = { 1234, 2468, 1111, 6411, 9876 };
    string name[5] = { "Bill", "Jane", "Gary", "Steve", "Lisa" };
    double gpa[5] = { 3.86, 3.96, 2.76, 3.11, 3.67 };
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    // sort via bubblesort by the gpa column (col=2)
    sort(id,name,gpa,5,2,true);
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    // sort via bubblesort by the name column (col=1)
    sort(id,name,gpa,5,1,true);
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    
    // sort via bubblesort by the name column (col=0)
    sort(id,name,gpa,5,0,true);
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    
    // test sorting from largest to smallest
    // sort via bubblesort by the gpa column (col=2)
    sort(id,name,gpa,5,2,false);
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    // sort via bubblesort by the name column (col=1)
    sort(id,name,gpa,5,1,false);
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    
    // sort via bubblesort by the name column (col=0)
    sort(id,name,gpa,5,0,false);
    
    output_parallel_array(id,name,gpa,5);
    cout << "==========================================================\n\n";
    return 0;
}

