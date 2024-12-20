#include <iostream> 
using namespace std;

long long int weird_algorithm(long long int n){
    if(n % 2 == 0) {
        return n / 2; 
    } else {
        return (n * 3) + 1;  
    }
}

int main(){
    long long int n;
    cin >> n;

    
    while (n != 1) {
        cout << n << " ";  
        n = weird_algorithm(n);  
    }
    cout << n << endl;  
}


/*int main(){
    long long int n;
    cin>>n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n = n/2;
        }
        else{
            n = (n*3)+1;
        }
    }
    cout << n << endl;
    
   
}*/

