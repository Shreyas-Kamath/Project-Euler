// # <p>The prime factors of $13195$ are $5, 7, 13$ and $29$.</p>
// # <p>What is the largest prime factor of the number $600851475143$?</p>

#include <iostream>
#include <cstdint>

bool is_prime(uint64_t num){
    for (uint64_t i = 2; i < num; ++i){
        if (num % i == 0) return false;
    }
    return true;
}

int main(){
    uint64_t x = 600851475143;
    uint64_t ans = 0;
    for (uint64_t num = x / 2; num >=2 ; --num){
    if (x % num == 0 && is_prime(num)){
        ans = num;
        break;
        }
    }
    std::cout << ans;
}
