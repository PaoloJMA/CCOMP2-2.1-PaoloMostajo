#include <string>

using namespace std;

class Account {
    public:
        void SetName(string accountName) {
            name = accountName;
        }
    
        string GetName() const {
            return name;
        }
    private:
        string name;

};