#include <iostream>
#include <stack> 
//LIFO ultimo en entrar primero en salir
//PUSH añadir articulo
//POP rliminar articulo 
//TOP ver ultimo articulo 

int main()
{
    std::stack<int> s;
    s.push(10); // base
    s.push(20);
    s.push(39); // top
    std::cout<<s.top(); // 20
    std::cout<<" ";
    s.pop();
    std::cout<<s.top();//10
}
