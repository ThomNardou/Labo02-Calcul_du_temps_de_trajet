#include <complex>
#include <iostream>

using namespace std;

int main() {
    const double road_distance = 10.0; //dy
    const double first_distance = 6.0; //L1
    const double distance_cube_road = 3.0; //dx

    const double difference_road_first_distance = road_distance - first_distance;
    const double distance_cube_road_diagonal = sqrt(pow(difference_road_first_distance, 2) + pow(distance_cube_road,2));

    const double total_time = first_distance / 5 + distance_cube_road_diagonal / 2;

    cout << "Total time: " << total_time << " hour(s)" << endl;



}