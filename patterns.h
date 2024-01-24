#pragma once

namespace Patterns
{
#if defined(VERSION_7_3)
    constexpr const char* GObjects = "48 8B 0D ? ? ? ? 48 98 4C 8B 04 D1 48 8D 0C 40 49 8D 04 C8 EB ? 48 8B C6 8B 40 08 C1 E8 ? A8 ? 0F 85 ? ? ? ? 48 8B 55 F8";//
    constexpr const char* Free = "48 85 C9 74 ? 53 48 83 EC ? 48 8B D9 48 8B 0D";//
    constexpr const char* Malloc = "48 89 5C 24 08 57 48 83 EC ? 48 8B F9 8B DA 48 8B 0D ? ? ? ? 48 85 C9";//
    constexpr const char* Realloc = "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC ? 48 8B F1 41 8B D8 48 8B 0D";//
    constexpr const char* FNameToString = "48 89 5C 24 08 57 48 83 EC ? 83 79 04 ? 48 8B DA";//
    constexpr const char* TickFlush = "4C 8B DC 55 49 8D AB 78 FE FF FF 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 00 01 00 00 49 89 5B 18";//
    constexpr const char* CreateNetDriver = "48 89 5C 24 10 57 48 83 EC ? 48 8B 81 D0 0B 00 00";
    constexpr const char* NetDriver_SetWorld = "48 89 5C 24 08 57 48 83 EC ? 48 8B FA 48 8B D9 48 8B 91 40 01 00 00";
    constexpr const char* InitListen = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 50 48 8B BC 24 ? ? ? ? 49 8B F0";//
    constexpr const char* WelcomePlayer = "48 8B C4 55 48 8D A8 48 FF FF FF";//
    constexpr const char* World_NotifyControlMessage = "48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 48 89 4C 24 08 55 41 54 41 55 41 56 41 57 48 8D AC 24 D0 F9 FF FF";//
    constexpr const char* SpawnPlayActor = "48 8B C4 4C 89 48 20 44 89 40 18 48 89 50 10 48 89 48 08 55 56";//
    constexpr const char* ReceiveUniqueIdRepl = "48 89 5C 24 ? 55 56 57 48 8B EC 48 83 EC 40 F6 41 28 40 48 8B FA 48 8B D9 0F 84 ? ? ? ? F6 41 2B 02";//
    constexpr const char* ReceiveFString = "48 89 5C 24 18 55 56 57 41 56 41 57 48 8D 6C 24 C9 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 27 0F B6 41 28";//
    constexpr const char* KickPlayer = "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC ? 49 8B F0 48 8B DA 48 85 D2";//
    constexpr const char* GetNetMode = "48 89 5C 24 08 57 48 83 EC ? 48 8B 01 48 8B D9 FF 90 40 01 00 00 4C 8B 83 10 01 00 00";//
    constexpr const char* GiveAbility = "48 89 5C 24 10 48 89 6C 24 18 48 89 7C 24 20 41 56 48 83 EC ? 83 B9 60 05";//
    constexpr const char* InternalTryActivateAbility = "4C 89 4C 24 20 4C 89 44 24 18 89 54 24 10 55 53 56 57 41 54";//
    constexpr const char* MarkAbilitySpecDirty = "48 89 5C 24 18 48 89 7C 24 20 41 56 48 83 EC ? 48 8B 01 41 0F B6 D8";//
    constexpr const char* LocalPlayerSpawnPlayActor = "48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 55 41 56 41 57 48 8D 6C 24 F0 48 81 EC ? ? ? ? 48 8B D9";//
    constexpr const char* CollectGarbage = "E9 ? ? ? ? 4C 8B 34 24 48 8D 64 24 ? 48 8B 2C 24 48 8D 64 24 ? E9 ? ? ? ?";
    constexpr const char* NetDebug = "40 55 56 41 56 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 48 8B 01 48 8B F1 FF 90 ? ? ? ? 4C 8B F0 48 85 C0 0F";//
    constexpr const char* OnReload = "89 54 24 10 55 41 56 48 8D 6C 24 B1 48 81 EC ? ? ? ? 80 B9 18 01 00 00 ?";//
#endif

}