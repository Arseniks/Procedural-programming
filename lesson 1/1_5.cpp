#include <iostream>

using namespace std;

int main()
{
    int isDay = 1;
    int isCertainClosed = 0;
    int isLampOn = 0;
    
    if  ((isDay == 1 && isCertainClosed == 0) || (isDay == 1 && isLampOn == 1) || (isDay == 0 && isLampOn == 1)){
        cout << "В комнате светло" << endl;
    } else if ((isDay == 0 && isLampOn == 0) || (isDay == 1 && isCertainClosed == 1 && isLampOn == 0)){
        cout << "В комнате темно" << endl;
    }
    return 0;
}