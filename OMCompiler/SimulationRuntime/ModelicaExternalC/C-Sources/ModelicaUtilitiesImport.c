/* A dummy file to export ModelicaUtilities.c symbols */

#include <stdlib.h>

#define OMC_EXPORT_DLL
#include "ModelicaUtilities.h"

#if defined(_MSC_VER) || defined(__MINGW32__)

OMC_DLLEXPORT
void ModelicaMessage(const char* string) {
}

OMC_DLLEXPORT
extern void ModelicaVFormatMessage(const char*string, va_list args) {
}

OMC_DLLEXPORT
void ModelicaFormatMessage(const char* string,...) {
}

OMC_DLLEXPORT
void ModelicaWarning(const char* string) {
}

OMC_DLLEXPORT
extern void ModelicaVFormatWarning(const char*string, va_list args) {
}

OMC_DLLEXPORT
void ModelicaFormatWarning(const char* string,...) {
}

OMC_DLLEXPORT
void ModelicaError(const char* string) {
  abort();
}

OMC_DLLEXPORT
void ModelicaVFormatError(const char*string, va_list args) {
  abort();
}

OMC_DLLEXPORT
void ModelicaFormatError(const char* string, ...) {
  abort();
}

OMC_DLLEXPORT
char* ModelicaAllocateString(size_t len) {
}

OMC_DLLEXPORT
char* ModelicaAllocateStringWithErrorReturn(size_t len) {
}

OMC_DLLEXPORT
char* ModelicaDuplicateString(const char *str) {
}

#endif



int main(int argc, char **argv) {
  return 0;
}
