#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Size of an Array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nUnsorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=1;i<n;i++){
       int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    cout<<"\nSorted Array: "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
