#include <iostream>
#include <vector>
using namespace std;

long long Increasing_Array(long long int n, vector<int> arr){
    long long int count = 0;
    for(long long int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            count += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(long long int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << Increasing_Array(n, arr) << endl;
    return 0;
}
