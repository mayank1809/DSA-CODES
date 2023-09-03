#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{

    int i = 0, j = n - 1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements you want to insert" << endl;
    cin >> n;
    int arr[n];

    cout << "Enter array is \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rotate(arr, n);

    cout << "\nRotated array is\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}