#include <iostream>

const int MAX = 100; // Capacidad máxima del stack

class Stack {
private:
    int arr[MAX];  // Arreglo que almacena los elementos
    int top;       // Índice del elemento en el tope de la pila

public:
    Stack() {
        top = -1;  // Pila vacía
    }

    // Método para agregar un elemento a la pila
    void push(int value) {
        if (top >= MAX - 1) {
            std::cout << "Error: stack overflow\n";
        } else {
            top++;
            arr[top] = value;
        }
    }

    // Método para eliminar el elemento del tope de la pila
    void pop() {
        if (top < 0) {
            std::cout << "Error: stack underflow\n";
        } else {
            top--;
        }
    }

    // Método para obtener el elemento en el tope sin eliminarlo
    int getTop() {
        if (top < 0) {
            std::cout << "Stack is empty\n";
            return -1; // Valor de error
        }
        return arr[top];
    }

    // Método opcional para verificar si está vacía
    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(39);
    s.push(40);
    s.push(50);
    s.push(69);
    s.push(70);
    s.push(80);
    s.push(99);
    s.push(100);
    s.push(200);
    s.push(300);
    
    std::cout << s.getTop() << " "; // Imprime 300
    s.pop();
    std::cout << s.getTop();        // Imprime 200

    return 0;
}
