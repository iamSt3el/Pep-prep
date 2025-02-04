#include <iostream>
#include <vector>
#include <list>
using namespace std;

class ChainingHashTable {
    int size;
    vector<list<int>> table;

public:
    ChainingHashTable(int m) : size(m), table(m) {}
    
    int hashFunction(int key){
        return key % size; 
    }
    
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }
    
    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }
    
    bool search(int key) {
        int index = hashFunction(key);
        for (int x : table[index]) {
            if (x == key) return true;
        }
        return false;
    }
};

class OpenAddressingHashTable {
    int size;
    vector<int> table;
    vector<bool> occupied;
    
public:
    OpenAddressingHashTable(int m) : size(m), table(m, -1), occupied(m, false) {}
    
    int hashFunction(int key) { return key % size; }
    
    void insert(int key) {
        int index = hashFunction(key);
        while (occupied[index]) {
            index = (index + 1) % size;
        }
        table[index] = key;
        occupied[index] = true;
    }
    
    void remove(int key) {
        int index = hashFunction(key);
        while (occupied[index]) {
            if (table[index] == key) {
                table[index] = -1;
                occupied[index] = false;
                return;
            }
            index = (index + 1) % size;
        }
    }
    
    bool search(int key) {
        int index = hashFunction(key);
        while (occupied[index]) {
            if (table[index] == key) return true;
            index = (index + 1) % size;
        }
        return false;
    }
};

int main() {
    int m, q;
    string method;
    cin >> m >> method >> q;
    
    if (method == "CHAINING") {
        ChainingHashTable ht(m);
        while (q--) {
            string op;
            int key;
            cin >> op >> key;
            if (op == "INSERT") ht.insert(key);
            else if (op == "DELETE") ht.remove(key);
            else if (op == "SEARCH") cout << (ht.search(key) ? "FOUND" : "NOT FOUND") << endl;
        }
    } else if (method == "OPEN_ADDRESSING") {
        OpenAddressingHashTable ht(m);
        while (q--) {
            string op;
            int key;
            cin >> op >> key;
            if (op == "INSERT") ht.insert(key);
            else if (op == "DELETE") ht.remove(key);
            else if (op == "SEARCH") cout << (ht.search(key) ? "FOUND" : "NOT FOUND") << endl;
        }
    }
    return 0;
}

