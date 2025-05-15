#include <klbase.h>
#include <intrin.h>

extern "C"
VOID
KiSystemStartup(
    UINT iuMagic,
    ULONG64_PTR ptrAddr
)
{
    UNREFERENCED_PARAMETER(ptrAddr);
    UNREFERENCED_PARAMETER(iuMagic);


    __halt( );
}