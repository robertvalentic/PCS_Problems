#include <iostream>

int main(){
    int number_of_lines;
    
    std::cin >> number_of_lines;
    
    int left_collumn [number_of_lines];
    int right_collumn [number_of_lines];
    
    for (int i = 0 ; i < number_of_lines ; i++){
        std::cin >> left_collumn[i];
        std::cin >> right_collumn[i];
    }
    
    for (int i = 0 ; i < number_of_lines ; i++){
        std::cout << left_collumn[i] + right_collumn[i] << "\n";
    }
    
    return 0;
}