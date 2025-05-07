#pragma once

#if defined(_WIN32)
#define __WINDOWS
// windows specific :)))
#define _CRT_SECURE_NO_WARNINGS
#define _pure
#elif defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
#define __POSIX
#define _GNU_SOURCE
#define _pure __attribute__((pure))

#if defined(__linux__)
#define __LINUX
#endif

#if defined(__APPLE__) && defined(__MACH__)
#define __MACOS
#endif

#else
#error Unsupported operating system
#endif
