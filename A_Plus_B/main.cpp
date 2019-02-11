/* 
 * Robert Valentic
 * 11/02/2019
 * 
 * Updated solution to pcs.org.au "A Plus B" problem.
 * This one includes 3 lines to decrease program run time, and the inclusion
 * of vectors.
 * 
 */
 
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio (false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int number_of_lines;
    std::cin >> number_of_lines;
    
    std::vector<int> left_collumn (number_of_lines);
    std::vector<int> right_collumn (number_of_lines);
    
    for (int i = 0 ; i < number_of_lines ; i++){
        std::cin >> left_collumn.at(i);
        std::cin >> right_collumn.at(i);
    }
    
    for (int i = 0 ; i < number_of_lines ; i++){
        std::cout << left_collumn.at(i) + right_collumn.at(i) << "\n";
    }
    
    return 0;
}