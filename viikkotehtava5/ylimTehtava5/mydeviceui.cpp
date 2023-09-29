#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    pDeviceMouse = new DeviceMouse;
    pDeviceTouchPad = new DeviceTouchPad;
    pDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    cout << "\nProgram Stopped And Pointers Cleared!" << endl;

    delete pDeviceMouse;
    pDeviceMouse = nullptr;

    delete pDeviceTouchPad;
    pDeviceTouchPad = nullptr;

    delete pDeviceDisplay;
    pDeviceDisplay = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    short valinta;
    do
    {
        cout << "\nDEVICE MENU" << endl;
        cout << "===========" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show Devices Information" << endl;
        cout << "5: Finish" << endl;

        cout << "Choose: ";
        cin >> valinta;

        switch (valinta)
        {
        case 1:
            cout << "\nSET MOUSE INFORMATION" << endl;
            cout << "=====================" << endl;
            pDeviceMouse->setDeviceID();
            pDeviceMouse->setPrimaryButton();
            break;
        case 2:
            cout << "\nSET TOUCHPAD INFORMATION" << endl;
            cout << "========================" << endl;
            pDeviceTouchPad->setDeviceID();
            pDeviceTouchPad->setTouchPadSensitivity();
            break;
        case 3:
            cout << "\nSET DISPLAY INFORMATION" << endl;
            cout << "=======================" << endl;
            pDeviceDisplay->setDeviceID();
            pDeviceDisplay->setDisplayResolution();
            break;
        case 4:
            cout << "\nDEVICES INFORMATION" << endl;
            cout << "===================" << endl;
            cout << "Mouse ID: " << pDeviceMouse->getDeviceID() << " Primary button: " << pDeviceMouse->getPrimaryButton() << endl;
            cout << "Touchpad ID: " << pDeviceTouchPad->getDeviceID() << " Touchpad Sensitivity: " << pDeviceTouchPad->getTouchPadSensitivity() << endl;
            cout << "Display ID: " << pDeviceDisplay->getDeviceID() << " Display Resolution: " << pDeviceDisplay->getDisplayResolution() << endl;
            break;
        case 5:
            cout << "\nExiting..." << endl;
            break;
        default:
            cout << "\nInvalid choice!" << endl;
        }
    } while (valinta != 5);
}
