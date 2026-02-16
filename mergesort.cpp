#include <iostream>
using namespace std;

void merge(int arr[],int left, int mid , int right ){
    int i=left;
    int j=mid+1;
    int k=0;

    int temp[100];

    while (i<=mid && j<= right){
        if (arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }

        else {

            temp[k]=arr[j];
            j++;
        }

        k++;
    }

    while (i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }

    while (j<=right){
        temp[k]=arr[j];
        j++;
        k++;
    }

    for (int p=0;p<k;p++){
        arr[left+p]=temp[p];
    }
}

void mergesort(int arr[],int left , int right ){

    if (left < right){
        int mid = (left+right)/2;

        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        merge(arr,left,mid,right);
    }
}



int main(){
    int z;
    int arr[z];
    int n;
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;
for (int l=0;l<n;l++){
    cout<<"ENTER THE VALUES : ";
    cin>>arr[z];}
    mergesort(arr,0,n-1);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}