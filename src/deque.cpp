#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;


void printKMax(int inp[], int n, int k){
    //Write your code here.
    deque<int> arr(inp, inp + n);  
    for(int i=0; i<= n-k;++i){
        int  mx = *max_element(arr.begin()+i, arr.begin()+k+i);
        cout << mx << " ";
    }
    cout << endl;
}

int main(){

    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        
        int inp[n];
        for(i=0;i<n;i++){
            cin >> inp[i];
        }  
        printKMax(inp, n, k);
        t--;
      }
      return 0;
}

