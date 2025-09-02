## Pointeur de fonction:
Ici, tu déclares un pointeur f.

Son type est : « pointeur sur une fonction qui retourne void et prend () (zéro paramètre) ».
```c
void foo()
{
    return;
}

void (*f)();
f = &foo;
```
## Tableau de pointeurs de fonction:

```c
void (*f[2])() = {&foo, &foo1};

```
## Warning:

Attention la déclaration sans le '*' change le sens.
```c
void (f)(); //Déclaration

void f() //Définition
{
	return ;
}
```
Là on déclare une fonction f, puis on définit son contenu.

