// archivo único: main.cpp
#include <iostream> // Librería para entrada/salida

// Declaración de una constante que define la capacidad máxima de la cola
const int MAX = 100;

// Declaración de la cola como un arreglo de enteros con tamaño MAX
int queue[MAX];

// Índices que indican el inicio (front) y el final (rear) de la cola
int front = 0;  // Apunta al primer elemento disponible para quitar
int rear = 0;   // Apunta a la posición donde se insertará el próximo elemento

// Función para insertar un elemento al final de la cola
void enqueue(int x) {
    if (rear < MAX) {
        // Si aún no se ha alcanzado la capacidad máxima, se agrega el valor
        queue[rear++] = x; // Se asigna el valor y se incrementa rear
    } else {
        // Si rear alcanza MAX, la cola está llena
        std::cout << "Error: cola llena\n";
    }
}

// Función para quitar un elemento del frente de la cola
int dequeue() {
    if (front < rear) {
        // Si hay elementos en la cola, se devuelve el del frente y se avanza front
        return queue[front++];
    } else {
        // Si front ha alcanzado rear, la cola está vacía
        std::cout << "Error: cola vacía\n";
        return -1; // Código de error
    }
}

// Función principal del programa
int main() {
    // Insertamos elementos en la cola
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // Quitamos e imprimimos los elementos de la cola uno por uno
    std::cout << dequeue() << " "; // Imprime 10
    std::cout << dequeue() << " "; // Imprime 20
    std::cout << dequeue() << "\n"; // Imprime 30

    // En este punto la cola está vacía, si hacemos otro dequeue() saldrá error

    return 0; // Fin del programa
}
