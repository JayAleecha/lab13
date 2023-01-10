#include<iostream>
using namespace std;

int gcd(int,int);
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int k,int z){
  if(k%z==0){ 
     return z;
    }else{ 
     return gcd(z, k%z);
}
}