#include <mbed.h>
#include "LaunchControl.h"

#define LINK_RX PTB16//Rx0
#define LINK_TX PTB17//Tx0

int main() {

    // put your setup code here, to run once:
    LaunchControl LaunchControl(LINK_TX,LINK_RX);

    while(1) {
        // put your main code here, to run repeatedly:
        LaunchControl.sendData(1,2,3,3,3,2,1);
    }
}