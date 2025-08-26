## Outils de gestion de fichiers

### ifstream:
C'est un objet qui sert à lire un fichier.

### ofstream:
C'est un objet qui sert à écrire dans un fichier.

### .open():
La méthode open sert à ouvrir un fichier:
1) Le nom du fichier (en const char* en C++98)
2) Le mode d’ouverture (lecture, écriture, etc.)

### is_open():
Elle sert à vérifier si le fichier est bien ouvert.
Retourne true si fichier est ouvert ou false s'il a échoué.

### find():
Elle cherche une sous-chaîne dans une chaîne.
Retourne la position du début de la chaine.
Si la sous-chaîne n’est pas trouvée, find retourne std::string::npos (une constante spéciale qui vaut -1).
Tu peux aussi donner un 2e paramètre : la position de départ de la recherche.

### substr():
Elle retourne une sous-chaîne d’une chaîne.
Elle prend 2 paramètres l'index de début et le nombre à parcourir.
Retourne la sous-string.

### tellg():
Elle retourne la position courante du curseur de lecture dans le fichier.