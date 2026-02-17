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
    
    int arr[]={2,5,4,3,1};
    int n=5;
    mergesort(arr,0,n-1);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}