# TP2 Interface CCP

## Matériel
- 1 Carte PIC
- 1 Accéléromètre ADXL202
- 1 Servomoteur HS-422
- 1 Afficheur LCD série

## Partie A: Contrôle d’une serrure mécanique

### Préparation
- Lecture de la fiche technique du HS-422.
- Sélectionner les valeurs de départ des registres nécessaires au bon fonctionnement du module PWM (PR2, fosc, Valeur prescale, 10 bits – CCPR4L:CCP4CON<5:4>).

### Manipulations

1. Monter le servomoteur HS-422 sur la broche C2 du PIC

![image](https://github.com/max848484/243-421-H24_TP2/assets/156249332/dbf11276-4e27-4197-a139-a13d9e8ca8dc)


2. Écrire un programme qui demande à un utilisateur, via l’application de terminal TERA TERM, s’il veut barrer (‘L’) ou débarrer (‘U’) la porte et règle la position du servomoteur pour barrer ou pour débarrer. 

3. Au démarrage, le moteur doit se mettre à la position neutre.
Si l’utilisateur demande de débarrer, le moteur se déplace jusqu’à la position moins 90 degrés.
Si l’utilisateur demande de barrer, le moteur se déplace jusqu’à la position plus 90 degrés.

## Partie B : Mesure de la position

### Préparation
- Lecture de la fiche technique du DRV5057
- Schéma de branchement (PIC et DRV5057A1)
- Sélectionner les valeurs de départ des registres nécessaires au bon fonctionnement du module input capture.

### Manipulations

1- Monter le DRV5057A1 et le LCD sur le PIC, ajouter les autres composants requis.

![Image](https://github.com/user-attachments/assets/24524ce0-8e80-43aa-b365-73988ba82755)

2- Écrire un programme sur le PIC qui affiche sur le LCD:
- La durée de pulse haute
- La période
- La densité de flux magnétique mesurée ainsi que sa polarité.

## Évaluation
### Faire vérifier
- Le fonctionnement sera vérifié au laboratoire.

### Remettre
- Les programmes des deux parties bien commentées.
- Un fichier de documentation qui explique les paramètres configurés pour les modules CCP. 
Les valeurs doivent être justifiées à l’aide de calculs.


