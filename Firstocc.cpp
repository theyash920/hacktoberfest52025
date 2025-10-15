//  print the first and last position of an element 
// if we nedd to find total occurence so use formula = (last index - first index)+1
#include <iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s =0;
    int e=n-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans =mid;
            e = mid -1;
        }
        // go to right wla part
        if(key > arr[mid]){
            s = mid + 1;
        }
        // go to left wla part
        else{//(key < arr[mid])
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

    }
int lastOcc(int arr[],int n,int key){
    int s =0;
    int e=n-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans =mid;
            s = mid + 1;
        }
        // go to right wla part
        else if(key > arr[mid]){
            s = mid + 1;
        }
        // go to left wla part
        else {//(key < arr[mid])
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

    }

    pair<int,int>p;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);
    return p;
    

int main(){
    int even[13]={1,2,3,3,3,3,3,3,3,3,3,3,5};
    cout<<"First occurence of 3 is at index:"<<firstOcc(even,13,3)<<endl;
    cout<<"Last occurence of 3 is at index:"<<lastOcc(even,13,3)<<endl;
    return 0;

}
