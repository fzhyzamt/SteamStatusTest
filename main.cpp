#include <iostream>
#include "include/steam_api.h"
#include "include/steamtypes.h"
#include "include/isteamfriends.h"



int main() {
    std::cout << "Hello, World!" << std::endl;
    SteamAPI_Init();
    if (SteamAPI_RestartAppIfNecessary(480))
        std::cout << "Hello from Steam!\n";
//    uint64 id = 90163946096075782;

//    CSteamID steamIDSource(id);


    ISteamFriends* iSteamFriends = SteamFriends();
    iSteamFriends->SetRichPresence("status", "TestValue1");
//    SteamFriends()->SetRichPresence("steam_display", "TestValue2");
    SteamFriends()->SetRichPresence("steam_display", "#richpresence_party_lobby_n_n");
    SteamFriends()->SetRichPresence("level", "TestData");
    SteamFriends()->SetRichPresence("gamemode", "送快递");
    SteamFriends()->SetRichPresence("partyslotsused", "中文测试");
    SteamFriends()->SetRichPresence("partyslotsmax", "Ab");

    char inputStr[256];
    while(true) {
        std::cin.getline (inputStr, 256);
        std::cout << "str -> " << inputStr << std::endl;
        iSteamFriends->SetRichPresence("steam_display", inputStr);
    }

//    int nFriends = SteamFriends()->GetFriendCountFromSource(steamIDSource);
    // GetFriendCountFromSource(steamIDSource);
    std::cout << "Hello from Steam!\n";
    std::cin.get();
    return 0;
}
