// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
int f(int n) {
    if (n == 1) {
        return 1;
    }
    else 
    return f(n - 1)*n;
  
}
int main() {
    int n;
    cout<<f(n)<<endl;
    
    return n*f(n-1);
int f(int n) {
    if (n == 1) {
        return 1;
    }
    else 
    return f(n-1) +n;
  
}
int main(){
    cout<<f(n)<<endl;

    return 0;
    
}
