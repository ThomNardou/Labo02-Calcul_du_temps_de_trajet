#include <complex>
#include <iostream>

using namespace std;

/* ---------------------------
Laboratoire : 02
Auteur(s) : Thomas Nardou
Date : 25.09.2026
But : Calcul du temps de trajet
Remarque(s) : /
--------------------------- */

int main() {
    const double road_distance = 10.0, //dy
                 distance_cube_road = 3.0, //dx
                 road_speed = 5.0,
                 stone_speed = 2.0;

    double first_distance = 0.0;

    cout << "Quelle est la distance L1 ? : ";

     while (!(cin >> first_distance) || first_distance < 0.0) {

         if (first_distance < 0.0 || cin.fail()) {
             cout << "Merci de rentrer un nombre !" << endl;
             cin.clear(); // Reset input errors
             cin.ignore(10000, '\n'); // Remove bad input
         }

        cout << "Quelle est la distance L1 ? : ";



     }


    const double difference_road_first_distance = abs(first_distance - road_distance);
    const double distance_stone = sqrt(pow(difference_road_first_distance, 2) + pow(distance_cube_road,2));

    const double total_time = first_distance / 5 + distance_stone / 2;

    cout << "Total time: " << total_time << " hour(s)" << endl;

    return EXIT_SUCCESS;


}