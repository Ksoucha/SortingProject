# SortingProject
# TP 1

Projet de Tri dans OpenFrameworks
--

### **Objectif**

Ce travail pratique vise à renforcer votre compréhension des algorithmes de tri en les implémentant et en les visualisant dans OpenFrameworks. Vous créerez un programme interactif qui démontre diverses techniques de tri avec un retour visuel. Ce projet vous familiarisera également avec GitHub pour la collaboration et la soumission de code.

---

### **Aperçu du Devoir**

Vous devez créer un projet appelé **"SortingProject"** en utilisant OpenFrameworks. Le programme doit :

1. Générer une liste de 5 nombres aléatoires.
2. Représenter ces nombres sous forme de **cercles**, où le rayon de chaque cercle correspond à la valeur du nombre.
3. Fournir des contrôles clavier pour :
    - Trier les nombres en utilisant plusieurs algorithmes de tri (Tri à Bulles, Tri par Insertion, Tri Fusion, Tri Rapide).
    - Régénérer la liste de nombres aléatoires.
    - Mélanger la liste en utilisant l’algorithme de Fisher-Yates (bonus).

---

### **Exigences et Barème (10 Points au Total + 1 Point Bonus)**

1. **Génération de Nombres Aléatoires (2 Points) :**
    - Générer 5 entiers aléatoires (par exemple, entre 10 et 100) pour représenter les rayons des cercles.
    - Afficher ces nombres visuellement sous forme de cercles à l’écran.
    - Les 5 cercles doivent être affichés sur une ligne horizontale, équitablement espacés, avec leur taille reflétant leur rayon.
    - Chaque cercle doit également afficher sa valeur numérique à l’intérieur.
    - La touche **'r'** doit générer un nouvel ensemble de nombres aléatoires et redessiner les cercles.

2. **Tri à Bulles (2 Points) :**
    - Implémenter le Tri à Bulles.
    - Appuyer sur la touche **'b'** doit déclencher le processus de tri et mettre à jour l’affichage pour montrer les cercles triés.

3. **Tri par Insertion (2 Points) :**
    - Implémenter le Tri par Insertion.
    - Appuyer sur la touche **'i'** doit déclencher le processus de tri et mettre à jour l’affichage pour montrer les cercles triés.

4. **Tri Fusion (2 Points) :**
    - Implémenter le Tri Fusion.
    - Appuyer sur la touche **'m'** doit déclencher le processus de tri et mettre à jour l’affichage pour montrer les cercles triés.

5. **Tri Rapide (2 Points) :**
    - Implémenter le Tri Rapide.
    - Appuyer sur la touche **'q'** doit déclencher le processus de tri et mettre à jour l’affichage pour montrer les cercles triés.

6. **Algorithme de Fisher-Yates (Bonus – 1 Point) :**
    - Appuyer sur la touche **'s'** doit mélanger la liste en utilisant l’algorithme de Fisher-Yates et réafficher les cercles mélangés.