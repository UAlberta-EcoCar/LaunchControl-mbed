#include <mbed.h>

class LaunchControl
{
    private:
        Serial Bluetooth;
    public:
        LaunchControl(PinName BluetoothTxPin, PinName BluetoothRxPin);
        void sendData(float speed, 
                      float fc_voltage, 
                      float motor_current,
                      int fc_alarm_code,
                      int fc_state,
                      float fc_temp,
                      float efficiency);
};