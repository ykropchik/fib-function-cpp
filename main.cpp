#include <iostream>
#include "src/fiblibrary.h"

using namespace std;

int main(){

    int n;
    cin >> n;



    if (int x = fib(n) > 0){
        cout << x;
    }
}
