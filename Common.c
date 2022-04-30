#include "Common.h"

u8 AbsS8(s8 x)
{
    return x >= 0 ? x : -x;
}

u16 AbsS16(s16 x)
{
    return x >= 0 ? x : -x;
}

u32 AbsS32(s32 x)
{
    return x >= 0 ? x : -x;
}

u64 AbsS64(s64 x)
{
    return x >= 0 ? x : -x;
}

u16 AbsDiffU8(u8 x, u8 y)
{
    return AbsS16((s16)x - (s16)y);
}
u16 AbsDiffS8(s8 x, s8 y)
{
    return AbsS16((s16)x - (s16)y);
}

u32 AbsDiffU16(u16 x, u16 y)
{
    return AbsS32((s32)x - (s32)y);
}

u32 AbsDiffS16(s16 x, s16 y)
{
    return AbsS32((s32)x - (s32)y);
}

u64 AbsDiffU32(u32 x, u32 y)
{
    return AbsS64((s64)x - (s64)y);
}

u64 AbsDiffS32(s32 x, s32 y)
{
    return AbsS64((s64)x - (s64)y);
}

void MemCpyU8(void *pDes, void *pSrc, u16 uwLen)
{
    for (u8 i = 0; i < uwLen; i++)
    {
        ((u8 *)pDes)[i] = ((u8 *)pSrc)[i];
    }
}

void MemSetU8(void *pDes, u8 ubVal, u16 uwLen)
{
    for (u8 i = 0; i < uwLen; i++)
    {
        ((u8 *)pDes)[i] = ubVal;
    }
}

void MemSetU16(void *pDes, u16 ubVal, u16 uwLen)
{
    for (u8 i = 0; i < uwLen; i++)
    {
        ((u16 *)pDes)[i] = ubVal;
    }
}