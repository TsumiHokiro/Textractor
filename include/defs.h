#pragma once

// texthook/defs.h
// 8/23/2013 jichi

// Pipes

constexpr auto HOOK_PIPE = L"\\\\.\\pipe\\TEXTRACTOR_HOOK";
constexpr auto HOST_PIPE = L"\\\\.\\pipe\\TEXTRACTOR_HOST";

// Sections

constexpr auto ITH_SECTION_ = L"VNR_SECTION_"; // _%d

// Mutexes

constexpr auto ITH_HOOKMAN_MUTEX_ = L"VNR_HOOKMAN_"; // ITH_HOOKMAN_%d
constexpr auto CONNECTING_MUTEX = L"TEXTRACTOR_CONNECTING_PIPES";

// Events

constexpr auto PIPE_AVAILABLE_EVENT = L"TEXTRACTOR_PIPE_AVAILABLE";

// Files

constexpr auto ITH_DLL = L"texthook"; // .dll but LoadLibrary automatically adds that
constexpr auto CONFIG_FILE = u8"Textractor.ini";

// Misc

constexpr auto DEFAULT_EXTENSIONS = u8"Remove Repeated Characters>Remove Repeated Phrases>Regex Filter>Copy to Clipboard>Bing Translate>Extra Window>Extra Newlines";
constexpr auto WINDOW = u8"Window";

// EOF
