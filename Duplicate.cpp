#include<iostream>
using namespace std;

int main(){

    int arr[10],n;

    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter any 5 num : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(arr[i]==arr[j]){

                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }

                n--;
                j--;
            }
        }
    }

    cout<<"Array after removing dupliates :\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}