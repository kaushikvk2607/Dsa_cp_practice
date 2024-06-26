#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    // int k;
    cin >> size ;
    vector<char> row1(size);
    for (int i = 0; i < size; i++)
    {
        cin >> row1[i];
    }
    vector<char> row2(size);
    for (int i = 0; i < size; i++)
    {
        cin >> row2[i];
    }
    if(size %2 ==0){
        if ((row1[size - 1] == row2[size - 1]) && (row2[size - 1] == "<")){
            
        }

    }
    
    
    return 0;
}
