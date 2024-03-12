#include <iostream>
using namespace std;

int main()
{
    const int N = 3;
    int array1[N] = {1, 2, 3};
    int array2[N * 2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array2[j] = array1[j];
            cout << array2[j] << "\t";
        }
    }
    //sdg
}
