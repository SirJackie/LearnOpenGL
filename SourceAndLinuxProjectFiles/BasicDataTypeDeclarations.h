#ifndef __LearnOpenGL_BasicDataTypeDeclarations__
#define __LearnOpenGL_BasicDataTypeDeclarations__

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::stringstream;

typedef    unsigned long long  ui64;     // Should be 32-bit 4-byte sign-less
typedef    signed long long    si64;     // Should be 32-bit 4-byte sign-ful
typedef    long long            i64;     // Should be 32-bit 4-byte auto

typedef    unsigned int        ui32;     // Should be 32-bit 4-byte sign-less
typedef    signed   int        si32;     // Should be 32-bit 4-byte sign-ful
typedef    int                  i32;     // Should be 32-bit 4-byte auto

typedef    unsigned short      ui16;     // Should be 16-bit 2-byte sign-less
typedef    signed   short      si16;     // Should be 16-bit 2-byte sign-ful
typedef    short                i16;     // Should be 16-bit 2-byte auto

typedef    unsigned char        ui8;     // Should be 16-bit 2-byte sign-less
typedef    signed   char        si8;     // Should be 16-bit 2-byte sign-ful
typedef    char                  i8;     // Should be 16-bit 2-byte auto

typedef    double               f64;     // Should be 64-bit 8-byte float
typedef    float                f32;     // Should be 32-bit 4-byte float

typedef    char              csbool;     // Boolean value, no matter what
const      csbool csTrue = 1;
const      csbool csFalse = 0;

#define    csNull               NULL
#define    csNullPtr         nullptr

#endif
