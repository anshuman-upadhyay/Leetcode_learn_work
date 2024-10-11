#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr)
{
    vector<int> a;
    for (int i = arr.size()-1; i > -1; i--)
    {
        a.push_back(arr[i]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = a[i];
    }
}
int main()
{
    vector<int> arr{5, 3, 8, 6};
    reverseArray(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}