#include <iostream>
using namespace std;

int main()
{

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
   
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}

	 cout<<"\nSorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
