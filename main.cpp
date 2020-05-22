#include <iostream>
#include "box.h"

using namespace std;



int main() {

    Box firstObject;
    firstObject.length = 10.0;
    firstObject.height = 5.0;
    firstObject.breadth = 6.0;

    cout << "Volume: " << firstObject.getVolume() << endl;


    return 0;
}
