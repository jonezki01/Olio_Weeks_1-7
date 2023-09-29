#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();

private:
    DeviceMouse * pDeviceMouse;
    DeviceTouchPad * pDeviceTouchPad;
    DeviceDisplay * pDeviceDisplay;
};

#endif // MYDEVICEUI_H
