// <p>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with $1$ and $2$, the first $10$ terms will be:
// $$1, 2, 3, 5, 8, 13, 21, 34, 55, 89, \dots$$</p>
// <p>By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.</p>

#include <iostream>

int main() {
    int prev{1}; int next{2}; int sum{}; int temp{};
    while (next < 4000000){
        if (next % 2 == 0) sum += next;
    temp = prev; prev = next; next += temp;
    }
    std::cout << sum;
    return 0;
}