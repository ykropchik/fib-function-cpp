//
// Created by YKROPCHIK on 12.10.2019.
//
#include "iostream"

int fib (int n){
    if (n < 1){
        std::cout << "Число должно быть > 0";
        return 0;
    }

    if ((n == 1) || (n == 2)) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}