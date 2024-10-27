//reverse_an_array

#include<iostream>
using namespace std;

void reverseArray(int arr[], int num)
{

    for(int i=0; i<num/2; i++)
    {
        swap(arr[i], arr[num-1-i]);
    }


};

int main()
{

	int userInput; cin>>userInput;
    int arr[userInput];

    for(int i=0; i<userInput; i++)
    {
        cin>>arr[i];
    }


    reverseArray(arr, userInput);


    for(int i=0; i<userInput; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }


}