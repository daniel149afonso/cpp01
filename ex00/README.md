# Mémoire en C++ : Stack vs Heap

## 📂 Stack (Pile)
- Mémoire **automatique**, gérée par le compilateur
- Les variables locales sont stockées ici
- Se libère automatiquement à la sortie du scope `{ }`
- **Très rapide**, mais taille limitée (souvent quelques Mo)

### Exemple
```cpp
void foo() {
    int x = 42;             // sur la stack
    std::string s = "Hi";   // aussi sur la stack
} // x et s détruits automatiquement ici
```

## 📦 Heap (Tas)

- Mémoire **dynamique**, gérée manuellement par le programmeur  
- Allouée avec `new`, libérée avec `delete`  
- Persiste tant qu’elle n’est pas libérée  
- Plus flexible mais **plus lente**  
- Risque de **fuites mémoire** si `delete` oublié  

### Exemple
```cpp
void foo() {
    int* x = new int(42);              // sur le heap
    std::string* s = new std::string("Hi");

    // utilisation...

    delete x;   // libération obligatoire
    delete s;
}
```