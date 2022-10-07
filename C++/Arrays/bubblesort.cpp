#include<iostream>
using namespace std;
void bubblesort(int*arr,int n){
    int n, i, j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
int arr[]={9,2,4,8,1,6,7,3};
bubblesort(arr,7);
for(int i=0;i<7;i++){
    cout<<arr[i]<<"  ";

}
return 0;
}