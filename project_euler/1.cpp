#include <iostream>

int main(){
    int sum { 0 };
    constexpr int limit = 1000;

    for (int i = 0; i < limit; ++i){
        if (i % 3 == 0 || i % 5 == 0){
           sum += i;
         }
        }
    std::cout << sum << '\n';
}
