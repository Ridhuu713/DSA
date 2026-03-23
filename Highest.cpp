#include<iostream>
using namespace std;

int main(){

    int arr[10],n;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxCount=0;
    int maxElement=arr[0];

    for(int i=0;i<n;i++){

        int count=1;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count>maxCount){
            maxCount=count;
            maxElement=arr[i];
        }
    }

    cout<<"Highest frequency Number : "<<maxElement<<endl;
    cout<<"Frequency: "<<maxCount;

    return 0;
}