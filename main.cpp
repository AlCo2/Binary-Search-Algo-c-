#include <iostream>


using namespace std;

int binarysearch(int arr[],int start,int arrsize, int n){
    while(start<=arrsize){
        int mid = (start+arrsize)/2;
        if(arr[mid]==n){
            cout << "found it";
            return n;
        }
        if(arr[mid]>n){
            arrsize = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout << "not found it";
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,25,27,134,500};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    binarysearch(arr, 0, arrsize, 26);
    return 0;
}
