
//    Robert Valentic
//    11/02/2019
//
//    My solution to the 'Weapons Of Mass Distraction' problem from 
//    pcs.org.au
    
#include <iostream>
#include <math.h>
#include "Bomb.h"

float distance_between(Bomb, Bomb);
bool check_collision(Bomb, Bomb, float);

int main()
{
    int number_of_bombs = 0;
    std::cin >> number_of_bombs;
    
    Bomb bombs[number_of_bombs];
    
    for (int i = 0 ; i < number_of_bombs ; i++) {
        int r;
        std::cin >> r;
        bombs[i].set_radius(r);
        
        int x, y;
        std::cin >> x >> y;
        bombs[i].set_location(x, y);
    }
    
    bool collision = false;
    bool premature_collision = false;
    
    for (int i = 0 ; i < number_of_bombs ; i++) {
        for (int j = 0 ; j < number_of_bombs ; j++) {   
            if (i != j) {
                float distance = 0;
                distance = distance_between(bombs[i], bombs[j]);
                collision = check_collision(bombs[i], bombs[j], distance);
                if (collision && (i != (number_of_bombs-1) && j != (number_of_bombs-1))) {
                    premature_collision = true;
                }
            }
        }
    }
    
    if (collision && !premature_collision){
        std::cout << "collision" << std::endl;
    } else if (premature_collision) {
        std::cout << "safely stopped collision" << std::endl;
    } else {
        std::cout << "no collision" << std::endl;
    }
    
    return 0;
}

float distance_between(Bomb b1, Bomb b2)
{
    float x1 = b1.get_x();
    float y1 = b1.get_y();
    float x2 = b2.get_x();
    float y2 = b2.get_y();
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

bool check_collision(Bomb b1, Bomb b2, float distance)
{
    if (b1.get_radius()+b2.get_radius() >= distance) {
        return true;
    } else {
        return false;
    }
}