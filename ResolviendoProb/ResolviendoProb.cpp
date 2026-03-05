#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

void resolverAscensor() {
    int n;
    cin >> n;
    stack<int> pila;

    for (int i = 0; i < n; ++i) {//n
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            if (!pila.empty()) pila.pop();//1 
        }
        else {
            pila.push(cmd); //1
        }
    }

    int totalPisos = 0;//1
	int cantidad = pila.size();//1
    while (!pila.empty()) {//n
        totalPisos += pila.top();//3
        pila.pop();//1
    }
    cout << "Piso final: " << totalPisos << "\nMovimientos: " << cantidad << endl;

	///Complejidad temporal: 6n+2 -> 0(n)
	///Complejidad espacial: O(n) por la pila que puede almacenar hasta n elementos en el peor caso.
}

void resolverSenderos() {
    int N; cin >> N;
    vector<int> senderos(N);
    for (int i = 0; i < N; ++i) cin >> senderos[i];//n,1

    int Q; cin >> Q;
    for (int i = 0; i < Q; ++i) {//Q
        int K, count = 0; cin >> K;//1
		for (int x : senderos) if (x <= K) count++;//n,1
        cout << "Visitante " << i + 1 << ": " << count << endl;
    }
	////Complejidad temporal: n+Q*n+2 -> O(n*Q)
	////Complejidad espacial: O(n) por el vector que almacena los senderos.
}

void resolverTop3() {
    int n;
    cin >> n;
    vector<int> top;

    for (int i = 0; i < n; ++i) {
        int pts;
        cin >> pts;
        top.push_back(pts);

        sort(top.begin(), top.end(), greater<int>());
        if (top.size() > 3) top.pop_back();

        cout << "Top:";
        for (int p : top) cout << " " << p;
        cout << endl;
    }
}

int main() {
    //resolverAscensor();
	//resolverSenderos();
	resolverTop3();
    return 0;
}