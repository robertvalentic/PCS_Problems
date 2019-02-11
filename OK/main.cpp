
//  Robert Valentic
//  11/02/2019
//  
//  'OK' problem from pcs.org.au

#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio (false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int test_cases = 0;
    
    std::cin >> test_cases;
    
    std::string line[test_cases];
    
    bool ok[2][test_cases] = {0};
    
    for (int i = 0 ; i < test_cases ; i++) {
        ok[0][i] = false;
        ok[1][i] = false;
        std::cin >> line[i];
        for (char c : line[i]) {
            if (c == 'O') {
                ok[0][i] = true;
            }
            
            if (ok[0][i] && (c == 'K')) {
                ok[1][i] = true;
            }
        }
    }
    
    for (int i = 0 ; i < test_cases ; i++) {
        if (ok[0][i] && ok[1][i]) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    
    return 0;
}