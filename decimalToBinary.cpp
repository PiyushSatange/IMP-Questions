//Convert the decimal number to binary representation

#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0, i = 0;
    while(n!=0){
        int bit = n & 1;
        cout<<bit;
        n = n >> 1;
        ans = (bit * pow(10,i)) + ans;
        i++;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = decimalToBinary(n);
    cout<<endl<<"The binary representation of "<<n<<" is "<<ans<<endl;
    return 0;
}