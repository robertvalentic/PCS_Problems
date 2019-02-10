#include <iostream>
#include <string>

using namespace std;

int main(){
    // get number of rules. loop until number of rules between 1 and 26.
    int number_of_rules = 0;
    do{
        std::cin >> number_of_rules;
    } while (number_of_rules < 1 || number_of_rules > 26);

    // get number of lines. loop until number of lines between 1 and 300.
    int number_of_lines = 0;
    do{
        std::cin >> number_of_lines;
    } while (number_of_lines < 1 || number_of_lines > 300);

    char rules [2][number_of_rules];

    // store chosen rules in table. i for horizontal and j for vertical
    for (int i = 0 ; i < number_of_rules ; i++){
        for (int j = 0 ; j < 2 ; j++){
            std::cin >> rules[j][i];
        }
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
                    if (c == rules[0][j]){
                        std::cout << rules [1][j];
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
                    if (c == rules[1][j]){
                        std::cout << rules [0][j];
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