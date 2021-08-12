// Even and odd sum of linear number array
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    int sum_even = 0, sum_odd = 0;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] % 2 == 0)
        {
            sum_even += arr[i];
        }
        else{
            sum_odd += arr[i];
        }
    }

    cout << "Sum of Complete Array is : " << sum << endl;

    cout << "Even Sum : " << sum_even << endl;
    cout << "Odd Sum : " << sum_odd << endl;
}