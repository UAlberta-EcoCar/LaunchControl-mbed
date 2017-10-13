#include "LaunchControl.h"

LaunchControl::LaunchControl(PinName BluetoothTxPin, PinName BluetoothRxPin)
    : Bluetooth(BluetoothTxPin, BluetoothRxPin, 115200)
    {}

void LaunchControl::sendData(float speed, 
                        float fc_voltage, 
                        float motor_current,
                        int fc_alarm_code,
                        int fc_state,
                        float fc_temp,
                        float efficiency)
{
    Bluetooth.printf("{\"speed\":%f,\"fc_voltage\":%f,\"motor_current\":%f,\"fc_alarm_code\":%d,\"fc_state\":%d,\"fc_temp\":%f,\"efficiency\":%f}\n",
                    speed, 
                    fc_voltage, 
                    motor_current,
                    fc_alarm_code,
                    fc_state,
                    fc_temp,
                    efficiency);    
}

