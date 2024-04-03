/*Créer un programme pour une école qui gère un ensemble de spécialités.
Déclarer une énumération Spécialité avec cinq éléments : IA, Web, Logiciel,
Système Immersif Et Cybersécurité. Utilisez un tableau pour stocker les
spécialités des étudiants de la promo. Initialiser ce tableau avec les
spécialités et associer le nombre d’étudiants de manière aléatoire (entre 12 et
66). Écrivez une fonction “afficherSpecialite” qui prend une spécialité en
paramètre et affiche son nom ainsi que le nombre de places disponible. Dans
le programme principal, parcourez le tableau de spécialités et utilisez la
fonction “afficherSpecialite” pour afficher le nom de chaque spécialité.*/

#include <iostream>

enum Specialite {
    IA,
    Web,
    Logiciel,
    SystemeImmersif,
    Cybersecurite
};

void afficherSpecialite(Specialite specialite) {
    switch (specialite) {
        case IA:
            std::cout << "Intelligence Artificielle";
            break;
        case Web:
            std::cout << "Web";
            break;
        case Logiciel:
            std::cout << "Logiciel";
            break;
        case SystemeImmersif:
            std::cout << "Système Immersif";
            break;
        case Cybersecurite:
            std::cout << "Cybersécurité";
            break;
    }
    std::cout << " - " << rand() % 55 + 12 << " places" << std::endl;
}

int main() {
    Specialite specialites[] = {IA, Web, Logiciel, SystemeImmersif, Cybersecurite};
    for (int i = 0; i < 5; i++) {
        afficherSpecialite(specialites[i]);
    }
    return 0;
}