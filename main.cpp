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
                 first_distance = 6.0, //L1
                 distance_cube_road = 3.0, //dx
                 road_speed = 5.0,
                 stone_speed = 2.0;


    const double difference_road_first_distance = road_distance - first_distance;
    const double distance_stone = sqrt(pow(difference_road_first_distance, 2) + pow(distance_cube_road,2));

    const double total_time = first_distance / 5 + distance_stone / 2;

    cout << "Total time: " << total_time << " hour(s)" << endl;

    return EXIT_SUCCESS;


}