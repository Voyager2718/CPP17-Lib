# Summary
This is libraries that written by myself in order to simplify my C++ 11/17 development.

# ytime
## Description
**ytime** can generate timestamp.

|Location|Namespace|Platforms|
|--------|---------|---------|
|[ytime](./ytime)|ytime|Platforms with C++11|

## Dependancies & Requirements
- STL (iomanip, ctime, sstream)
- C++11 or above

## Usage
- `std::string ytime::GetTime()`: Returns formatted date and time in `std::string`. Format: **"Mon Jul 10 12:29:15 2017 CST"**.

# yrandom
Location: [yrandom](./yrandom)

## Description
**yrandom** can generate random unsigned integer that can be used for encryption.

|Location|Namespace|Platforms|
|--------|---------|---------|
|[yrandom](./yrandom)|yrandom|Unix, Linux, Windows|

## Dependancies & Requirements
- STL (cassert)
- Unix lib (fcntl.h, unistd.h, sys/types.h, sys/stat.h)
- Windows lib (windows.h, Wincrypt.h)

## Usage
- `int yrandom::Random(unsigned int min, unsigned int max)`: Return random number between `min` and `max` (Inclusive).

# ycompilation
## Description
**ycompilation.h** contains some functions that are written in template metaprogramming.

## Usage
- `sameType(1, 2);`: Returns true (0) while `sameType(1, true);` returns false in C++11.
