// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 		 return 0;
// }

#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(n==0||n==1){
        cout<<INT_MIN;
    }
    else{
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int second = INT_MIN;
        for(int i=0;i<n;i++){
            if(max>arr[i] && arr[i]>second){
                second = arr[i];
            }
        }
        cout<<second;
    }
}
