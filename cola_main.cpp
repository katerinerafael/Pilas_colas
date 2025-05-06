#include <iostream>
#include <queue>

int main(){
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    std::cout << q.front(); //10
    q.pop();
    std::cout << " ";
    std::cout << q.front(); //20
}
