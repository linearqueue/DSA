//Binary_Search || Working for inc order only

#include<iostream>
using namespace std;
int binSearch(int arr[], int n, int key)
{
    int start = 0, end = n-1;

    while(start<=end)
    {
        int mid = (start+end)/2;

        if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
            start = mid + 1;

        else
            start = mid - 1;

    }

    return -1;

};

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k; cin>>k;

    cout<<binSearch(arr, n, k);

    return 0 ;

}