#include "mbed.h"
#include "USBCDC.h"
#include <string>

USBCDC cdc;

int main(void)
{

    while (1) {
        char msg[] = "Hello world\r\n";
        cdc.send((uint8_t *)msg, std::char_traits<char>::length(msg));  // old strlen() function was repleced here
        ThisThread::sleep_for(1000ms);
        printf("Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
        ThisThread::sleep_for(1000ms);
    }
}
