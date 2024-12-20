#include <iostream>
using namespace std;

long long int Missing_Number(long long int n, int nums[]){
    long long int sum = n*(n+1)/2;
    long long int sum2 = 0;
    for(long long int i=0; i<n-1; i++){
        sum2 = sum2 + nums[i];
    }
    long long int diff = sum - sum2;
    return diff;
}

int main(){
    long long int n;
    cin >> n;
    int nums[n];
    for(int i=0; i<n-1 ; i++){
        cin >> nums[i];
    }
    long long int missing = Missing_Number(n, nums);
    cout << missing << endl;
}