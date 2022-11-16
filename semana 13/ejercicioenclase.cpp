#include <fstream>
#include <iostream>

using namespace std;

int main(){    
    ofstream destination("ejemplo-e.txt");
    
    if (!destination)
    {
    cout << "No existe archivo";
    }
    for (int i = 0; i < 10; ++i){
        destination << i << endl;
    }
    destination.close();
}
