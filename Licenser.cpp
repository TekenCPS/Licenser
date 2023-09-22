#include <iostream>
#include "Licenser.h"
#include "android_device_id.h"
#include "AsciiArt.txt"

int main()
{
    string fileAscii = "AsciiArt.txt";
    printASCII(fileAscii);
    printf("PiterP Authentication.\n\n");

    string user_name = "";
    printf("Enter License : "); std::cin >> user_name;

    // -------- NubiAuth Example --------
    NubiAuth auth;
    // api key from https://auth.nubizaserver.my.id/
    auth.ApiKey = "ed651633ae61610b8a2b50c91f1830af42552if48mwbord";
    // set device id
    auth.device_id = get_device_id();
    if (auth.login(user_name)) {
        printf("\nLogged In!\n");

        while (1);
    }
    // -------- NubiAuth Example --------
}
