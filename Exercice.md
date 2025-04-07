# Classes principales et leur rôle :

## Hotel (Hotel.h) :
- **Rôle** : Gère les entités principales de l'hôtel, comme les chambres, les clients, les réservations et le personnel.
- **Méthodes** : Ajouter des chambres, clients, personnel, créer des réservations et afficher les réservations.

## Chambre (Chambre.h) :
- **Rôle** : Représente une chambre d'hôtel avec ses caractéristiques (numéro, type, prix, disponibilité).
- **Méthodes** : Afficher les informations de la chambre.

## Client (Client.h) :
- **Rôle** : Représente un client de l'hôtel avec son identifiant, nom et prénom.
- **Méthodes** : Afficher les informations du client.

## Reservation (Reservation.h) :
- **Rôle** : Gère les réservations, associant un client à une chambre pour une période donnée.
- **Méthodes** : Afficher les informations de la réservation.

## Personnel (Personnel.h) :
- **Rôle** : Représente un membre du personnel avec son nom, poste et salaire.
- **Méthodes** : Afficher les informations du personnel.

---

# Fonctionnement général de l'application :
L'application simule la gestion d'un hôtel. Elle permet d'ajouter des chambres, des clients et du personnel, puis de créer des réservations en associant des clients à des chambres disponibles. Les réservations désactivent la disponibilité des chambres concernées. Enfin, l'application affiche les informations des réservations et des entités gérées. Le tout est orchestré par la classe **Hotel**, qui centralise les interactions entre les différentes entités.