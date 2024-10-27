//finding min and max of the Array

#include<iostream>
using namespace std;

void min_max(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max = arr[i];

        if(arr[i]<min)
            min = arr[i];
    }

    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;

};

int main()
{

	int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    min_max(arr, n);


}