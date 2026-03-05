#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

void resolverAscensor() {
    int n;
    cin >> n;
    stack<int> pila;

    for (int i = 0; i < n; ++i) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            if (!pila.empty()) pila.pop(); 
        }
        else {
            pila.push(cmd); 
        }
    }

    int totalPisos = 0;
    int cantidad = pila.size();
    while (!pila.empty()) {
        totalPisos += pila.top();
        pila.pop();
    }
    cout << "Piso final: " << totalPisos << "\nMovimientos: " << cantidad << endl;
}

int main() {
    resolverAscensor();
    
    return 0;
}