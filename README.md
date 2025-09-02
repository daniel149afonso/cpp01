## 🚀 ex00 – BraiiiiiiinnnzzzZ

But : Découvrir la différence entre allocation sur la stack et sur le heap.

- Implémenter une classe Zombie avec :

	- announce() → affiche un message.

	- Une fonction newZombie() → crée un zombie sur le heap.

	- Une fonction randomChump() → crée un zombie sur la stack.

- ⚠️ Bien gérer la différence : delete nécessaire pour les zombies créés avec newZombie.

## 🚀 ex01 – Moar brainz!

- But : Créer un tableau de zombies sur le heap.

- Fonction zombieHorde(int N, std::string name) :

	- Alloue un tableau de Zombie avec new[].

	- Initialise tous les zombies avec le même nom.

- ⚠️ Utiliser delete[] pour libérer la mémoire.

## 🚀 ex02 – HI THIS IS BRAIN

- But : Comprendre la différence entre pointeurs et références.

- Créer une std::string puis :

	- Un pointeur qui pointe dessus.

	- Une référence vers cette même string.

- Afficher les adresses et valeurs pour comparer :

	- Adresse de la string

	- Adresse du pointeur

	- Adresse de la référence

## 🚀 ex03 – Unnecessary violence

- But : Comprendre référence vs pointeur comme attribut de classe.

- Classe Weapon avec un attribut type et méthode setType.

- Deux classes :

	- HumanA → possède une référence sur un Weapon (doit être fourni dès la construction, ne peut jamais être nul).

	- HumanB → possède un pointeur sur un Weapon (peut être nul, peut changer après la construction).

- Méthode attack() → affiche le nom + arme utilisée.

## 🚀 ex04 – Sed is for losers

- But : Manipulation de fichiers, recherche/remplacement dans des lignes.

- Programme prend 3 arguments : filename, s1, s2.

- Ouvre filename, copie son contenu dans filename.replace.

- Dans chaque ligne : remplacer toutes les occurrences de s1 par s2.

- Utilise std::getline, find, substr.

- ⚠️ Bien gérer : fichier introuvable, chaînes vides.

## 🚀 ex05 – Harl 2.0

- But : Introduction aux pointeurs sur fonctions membres.

- Classe Harl avec 4 méthodes privées :

	- debug(), info(), warning(), error().

- Méthode publique complain(std::string level) :

	- Associe chaque string à un pointeur de méthode.

	- Appelle directement la bonne méthode sans if/else multiples.

	```c
	void (Harl::*fptr[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	```
