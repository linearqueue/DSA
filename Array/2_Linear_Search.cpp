//finding kth element of the Array

#include<iostream>
using namespace std;

int linearSearch(int arr[], int num, int key)
{

    for(int i=0; i<num; i++)
    {
        if(arr[i]==key)
            return i;  // Returns index of kth element;
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

    int key; cin>>key;


    cout<<linearSearch(arr, userInput, key);


}