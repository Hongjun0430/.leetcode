#include <iostream>
#include <string>

using namespace std;

class TimeMap {
    public:
        TimeMap() {

        }

        void set(string key, string value, int timestamp) {

        }

        string get(string key, int timestamp) {

        }
};

int main() { 
    TimeMap* obj = new TimeMap();
    obj->set(key,value,timestamp);
    string param_2 = obj->get(key,timestamp);
    return 0; 
}