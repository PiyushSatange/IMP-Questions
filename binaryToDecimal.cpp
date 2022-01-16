//Convert the binary nuber to the decimal

#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int n){

    int ans = 0, i = 0;
    while(n!=0){
        int digit = n % 10;
        if(digit == 1){
            ans += pow(2, i); 
        }
        n = n / 10;
        i++;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = binaryToDecimal(n);
    cout<<"The decimal representation of the "<<n<<" is "<<ans<<endl;
    return 0;
}