#include <iostream>
#include <algorithm>

using namespace std;

double median(double arr[], int n)
{
    sort(arr, arr + n);
    int mid = n / 2;
    if (n % 2 == 0)
    {
        return (arr[mid-1] + arr[mid]) / 2;
    }
    else
    {
        return arr[mid];
    }
}

int main()
{
    int n;
    cout << "Nhap vao so phan tu cua day ";
    cin >> n;

    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu " << i+1 << ": ";
        cin >> arr[i];
    }

    double med = median(arr, n);
    cout << "Trung vi cua day la: " << med << endl;

    return 0;
}

