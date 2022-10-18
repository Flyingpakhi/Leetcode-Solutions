//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int size1=m+1-l;
    int size2=r-m;
    int *arr1=new int[size1];
    int *arr2=new int[size2];
    for (int i = 0; i < size1; i++){
        arr1[i] = arr[l+i];
    }
    for (int j = 0; j < size2; j++){
        arr2[j] = arr[m + 1 + j];
    }
    int i=0,j=0,k=l;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
        while(j<size2){
            arr[k]=arr2[j];
            j++;
            k++;
        }
        while(i<size1){
            arr[k]=arr1[i];
            i++;
            k++;
        }
    delete [] arr1;
    delete [] arr2;
}
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
        return ;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends