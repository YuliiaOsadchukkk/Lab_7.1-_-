#include <iostream>
#include <cmath>
#include <array>

using namespace std;

void create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}

void print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

double avg(array<int, 100>& arr, int n)
{
    int count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) 
        {
            sum += i;
            count++;
        }
    return sum / count;
}

int main()
{
   //srand((unsigned int)time(NULL));
    int n;
    cout << "n = ";
    cin >> n;
    array<int, 100> arr = { 0 };
    create(arr, n);
    print(arr, n);
    cout << "avg = " << avg(arr, n) << endl;
    return 0;
}