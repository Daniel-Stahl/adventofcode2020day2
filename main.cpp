#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile;
    int valid = 0;
    
    
    int least;
    int most;
    char check;
    char trash;
    string password;
    
    inFile.open("/Users/stahl/Desktop/Projects/Advent Of Code 2020/AdventOfCode2020Day2/AdventOfCode2020Day2/data.txt");
    
    inFile >> least >> trash >> most >> check >> trash >> password;
    
    while (!inFile.eof()) {
        // part 1
        //int count = 0;
        //int passwordSize = password.size();
        
//        for (int x = 0; x < passwordSize; x++) {
//            if (password[x] == check) {
//                count++;
//            }
//        }
        
        //part 2
        if (check == password[least-1] ^ check == password[most-1]) {
            valid++;
        }
        
        inFile >> least >> trash >> most >> check >> trash >> password;
    }
    
    cout << "Total = " << valid << endl;
    
}
