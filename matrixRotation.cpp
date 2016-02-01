#include <iostream>

using namespace std;

int main()
{
    int range;
    cout << "Please enter the range of your matrix: " << endl;
    cin>>range;
    int arr [range][range],result [range][range];
    cout << "Row-wise please enter the elements of your matrix: " << endl;
    for(int i = 0 ; i < range ; i++)    {
        for(int j = 0 ; j < range ; j++)    {

            cin>>arr[i][j];
        }
    }
    cout << "The matrix you entered is : "<<endl;

    for(int i = 0 ; i < range ; i++)    {
        for(int j = 0 ; j < range ; j++)    {

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i < range ; i++)   {
        int value1 = (range - 1), value2 = 0;
        for(int j = 0 ; j < range ; j++)
        {
             result[i][value2] =  arr[value1-value2][i];

            value2 += 1;
        }
    }

    cout << "After rotating the matrix 90 degrees clockwise: "<<endl;

    for(int i = 0 ; i < range ; i++)    {
        for(int j = 0 ; j < range ; j++)    {

            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
