#include <iostream>
using namespace std;
void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        cout <<"Move ring "<< n <<" from "<<from <<" to " << to << "\n";
        return;
    }

    
    hanoi(n - 1, from, to, aux);

    cout <<"Move ring "<< n <<" from "<<from <<" to " << to << "\n";

    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    
    while(cin>>n){
        hanoi(n, 'a', 'b', 'c');
    }
    
    return 0;
}
