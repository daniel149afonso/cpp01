## Pointeur en class:
C’est un pointeur vers un Weapon.
Un pointeur peut être nullptr (aucune arme) au départ, et plus tard pointer vers une vraie arme.

## Référence
void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

Le paramètre weapon ici est une référence vers un objet Weapon déjà existant (par exemple créé dans main()).
&weapon → prend l’adresse de cet objet.
this->weapon → membre pointeur de la classe → reçoit cette adresse.

## Liste d'initialisation VS Affectation dans la fonction

1) Les membres sont construits directement avec ces valeurs.
Obligatoire pour les const, les références, et tout type sans constructeur par défaut.
Plus efficace pour les objets (ex. std::string) : on les construit tout de suite avec la bonne valeur (pas d’étape inutile).