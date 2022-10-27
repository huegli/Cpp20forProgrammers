// fig09_22.cppi
// const objects and const member functions
#include "Time-10.h"

int main() {
    Time wakeUp{6, 45, 0};      // non-constant object
    const Time noon{12, 0, 0};  // constexpr object

    wakeUp.setHour(18);
    noon.setHour(12);
    wakeUp.getHour();
    noon.getMinute();
    noon.to24HourString();
    noon.to12HourString();


}
