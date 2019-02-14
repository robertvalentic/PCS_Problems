// Robert Valentic
// 15/02/2019
// 
// My solution to "A Poem Problem"
// Changed from holding the rules in a 2-dimensional array
// to 2 seperate arrays.

#include <iostream>
#include <string>

using namespace std;

int main(){
    // get number of rules. loop until number of rules between 1 and 26.
    int number_of_rules = 0;
    
    std::cin >> number_of_rules;

    // get number of lines. loop until number of lines between 1 and 300.
    int number_of_lines = 0;
    
    std::cin >> number_of_lines;

    char base_letters [number_of_lines] = {};
    char alias_letters [number_of_lines] = {};

    // store chosen rules in table. i for horizontal and j for vertical
    for (int i = 0 ; i < number_of_rules ; i++){
        std::cin >> base_letters[i] >> alias_letters[i];
    }

    // get and store encryption types and lines
    std::string encryption_type [number_of_lines];
    std::string line [number_of_lines];
    for (int i = 0 ; i < number_of_lines ; i++){
        std::cin >> encryption_type[i];
        std::cin >> line[i];
    }

    for (int i = 0 ; i < number_of_lines ; i++){
        if (encryption_type[i] == "E"){
            for (char c : line[i]){
                int no_rule_found = 1;
                for (int j = 0 ; j < number_of_rules ; j++){
                    if (c == base_letters[j]){
                        std::cout << alias_letters[j];
                        no_rule_found = 0;
                    }
                }
                if (no_rule_found){
                    std::cout << c;
                }
            }
            std::cout << endl;
        } else if (encryption_type[i] == "D"){
            for (char c : line[i]){
                int syndicate = 1;
                for (int j = 0 ; j < number_of_rules ; j++){
                    if (c == alias_letters[j]){
                        std::cout << base_letters[j];
                        syndicate = 0;
                    }
                }
                if (syndicate){
                    std::cout << c;
                }
            }
            std::cout << endl;
        }
    }
    
    return 0;
}