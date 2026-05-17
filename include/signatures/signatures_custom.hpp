#pragma once

// Custom signatures added manually (not from dumper)
// These will be used by the cheat while dumper entries are fixed

namespace sdk::sigs {
    namespace client {
        inline constexpr std::string_view OnAddEntity = "48 89 74 24 10 57 48 83 EC 20 41 B9 FF 7F 00 00 41 8B C0 41 23 C1 48 8B F2 41 83 F8 FF 48 8B F9 44 0F 45 C8 41 81 F9 00 40 00 00 73 0D FF 81 90";
        inline constexpr std::string_view OnRemoveEntity = "48 89 74 24 10 57 48 83 EC 20 41 B9 FF 7F 00 00 41 8B C0 41 23 C1 48 8B F2 41 83 F8 FF 48 8B F9 44 0F 45 C8 41 81 F9 00 40 00 00 73 08 FF 89 90";
        inline constexpr std::string_view LocalPlayerController_ptr = "48 8B 05 ? ? ? ? 41 89 BE";
    }
    namespace scenesystem {
        inline constexpr std::string_view GeneratePrimitives = "48 8B C4 48 89 58 08 48 89 50 10 55 56 57 41 54 41 55 41 56 41 57 48 81 EC";
    }
}