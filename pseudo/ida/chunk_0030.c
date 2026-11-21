//======================================================================
// sub_5EE920
// entry 005ee920  size 33  status ok
//======================================================================

int __thiscall sub_5EE920(_BYTE *this, int a2)
{
  return sub_5EE8C0(this, a2, SBYTE1(a2), SBYTE2(a2));
}


//======================================================================
// sub_5EE950
// entry 005ee950  size 412  status ok
//======================================================================

int __thiscall sub_5EE950(int this, char a2, unsigned int a3)
{
  int v3; // eax
  int v5; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+8h] [ebp-14h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v8 = (unsigned __int8)sub_5F0A30(a2);
  v9 = 0;
  v5 = *(_DWORD *)(this + 100);
  switch ( v5 )
  {
    case 1:
      if ( *(_DWORD *)(this + 152) )
        v9 = *(unsigned __int16 *)(*(_DWORD *)(this + 152) + 8 * v8 + 8)
           - *(unsigned __int16 *)(*(_DWORD *)(this + 152) + 8 * v8 + 4)
           + 1;
      break;
    case 2:
      if ( *(_DWORD *)(this + 176) )
      {
        v10 = v8 - 32;
        if ( v8 - 32 < 0 )
          v10 = 0;
        v9 = sub_616410(0, v10);
      }
      break;
    case 3:
      if ( *(_DWORD *)(this + 176) )
      {
        v9 = sub_616410(0, v8);
        if ( *(_BYTE *)(this + 204) )
        {
          if ( a3 < 0x100 )
          {
            freetype6_78(*(_DWORD *)(this + 188), a3);
            v3 = freetype6_78(*(_DWORD *)(this + 188), v8);
            freetype6_82(*(_DWORD *)(this + 188), v3);
            v9 += (v7 + (v7 < 0 ? -32 : 32)) / 64 + *(char *)(a3 + this + 208);
          }
        }
      }
      break;
    default:
      return 0;
  }
  return v9 + *(unsigned __int16 *)(this + 144);
}


//======================================================================
// sub_5EEAF0
// entry 005eeaf0  size 244  status ok
//======================================================================

int __thiscall sub_5EEAF0(int this, char a2)
{
  int v3; // [esp+0h] [ebp-14h]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v5 = (unsigned __int8)sub_5F0A30(a2);
  v7 = 0;
  v3 = *(_DWORD *)(this + 100);
  switch ( v3 )
  {
    case 1:
      if ( *(_DWORD *)(this + 152) )
        v7 = *(unsigned __int16 *)(*(_DWORD *)(this + 152) + 8 * v5 + 6)
           - *(unsigned __int16 *)(*(_DWORD *)(this + 152) + 8 * v5 + 2)
           + 1;
      break;
    case 2:
      if ( *(_DWORD *)(this + 176) )
      {
        v6 = v5 - 32;
        if ( v5 - 32 < 0 )
          v6 = 0;
        v7 = sub_616450(0, v6);
      }
      break;
    case 3:
      if ( *(_DWORD *)(this + 176) )
        v7 = sub_616450(0, v5);
      break;
    default:
      return 0;
  }
  return v7 + *(unsigned __int16 *)(this + 146);
}


//======================================================================
// sub_5EEBF0
// entry 005eebf0  size 377  status ok
//======================================================================

int __thiscall sub_5EEBF0(int this, int a2, int *a3, int *a4, int *a5, int a6)
{
  int result; // eax
  int v7; // eax
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v11 = 0;
  v9 = 0;
  if ( !a6 )
    a6 = *(_DWORD *)(this + 92);
  if ( a2 > 0 )
  {
    while ( *(_BYTE *)(a2 + a6) == 32 )
      ++a2;
  }
  *a3 = a2;
  *a4 = a2 + 1;
  *a5 = 0;
  while ( 1 )
  {
    result = *(unsigned __int8 *)(a2 + a6);
    if ( !*(_BYTE *)(a2 + a6) || *(_BYTE *)(a2 + a6) == 27 )
      break;
    if ( *(_BYTE *)(a2 + a6 + 1) )
      v7 = sub_5EE950(this, *(_BYTE *)(a2 + a6), *(unsigned __int8 *)(a2 + a6 + 1));
    else
      v7 = sub_5EE950(this, *(_BYTE *)(a2 + a6), 0xFFFFFFFF);
    v10 = *(_DWORD *)(this + 168) + *(__int16 *)(this + 148) + v7 + *a5 - *(unsigned __int16 *)(this + 144);
    if ( *(_BYTE *)(a2 + a6) == 32 )
    {
      v11 = *a4;
      v9 = *a5;
    }
    if ( *(_BYTE *)(a2 + a6) == 10 )
    {
      *a4 = a2 + 1;
      return a2 + 1;
    }
    result = this;
    if ( v10 > *(_DWORD *)(this + 104) - *(_DWORD *)(this + 116) - *(_DWORD *)(this + 124) )
    {
      if ( v9 )
      {
        *a4 = v11;
        result = v9;
        *a5 = v9;
      }
      return result;
    }
    *a4 = a2 + 1;
    *a5 = v10;
    ++a2;
  }
  return result;
}


//======================================================================
// sub_5EED70
// entry 005eed70  size 66  status ok
//======================================================================

char *__cdecl sub_5EED70(char *Destination, char *Source, int a3)
{
  size_t v3; // eax

  strcpy(Destination, Source);
  if ( a3 != -1 )
  {
    v3 = strlen(Destination);
    sprintf(&Destination[v3], "%c%d", 27, a3);
  }
  return Destination;
}


//======================================================================
// sub_5EEDC0
// entry 005eedc0  size 185  status ok
//======================================================================

_DWORD *__thiscall sub_5EEDC0(int this, int a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // [esp+4h] [ebp-14h] BYREF
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  *a3 = 0;
  v9 = 0;
  v10 = 0;
  while ( *(_BYTE *)(v9 + a2) )
  {
    sub_5EEBF0(this, v9, &v6, &v7, &v8, a2);
    if ( !*(_BYTE *)(v6 + a2) )
      break;
    if ( v8 > *a3 )
      *a3 = v8;
    ++v10;
    v9 = v7;
  }
  if ( !v10 )
    v10 = 1;
  *a4 = v10 * *(__int16 *)(this + 150);
  *a3 -= *(unsigned __int16 *)(this + 144);
  return a3;
}


//======================================================================
// sub_5EEE80
// entry 005eee80  size 111  status ok
//======================================================================

int __thiscall sub_5EEE80(_DWORD *this)
{
  int v3; // [esp+4h] [ebp-14h] BYREF
  int v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v6 = 0;
  v7 = 0;
  while ( *(_BYTE *)(*(this + 23) + v6) )
  {
    sub_5EEBF0((int)this, v6, &v3, &v4, &v5, 0);
    if ( !*(_BYTE *)(*(this + 23) + v3) )
      break;
    ++v7;
    v6 = v4;
  }
  return v7;
}


//======================================================================
// sub_5EEEF0
// entry 005eeef0  size 110  status ok
//======================================================================

int __thiscall sub_5EEEF0(int this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; *(_BYTE *)(*(_DWORD *)(this + 92) + i); ++i )
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 92) + i) == 10 )
      ++v2;
  }
  return v2 * *(__int16 *)(this + 150) + *(__int16 *)(this + 150);
}


//======================================================================
// sub_5EEF60
// entry 005eef60  size 237  status ok
//======================================================================

int __thiscall sub_5EEF60(int this)
{
  unsigned int v2; // [esp+0h] [ebp-14h]
  int v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v5 = 0;
  v4 = 0;
  for ( i = 0; *(_BYTE *)(*(_DWORD *)(this + 92) + i); ++i )
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 92) + i) == 10 )
    {
      if ( v4 > v5 )
        v5 = v4;
      v4 = 0;
    }
    else
    {
      if ( *(_BYTE *)(*(_DWORD *)(this + 92) + i + 1) )
        v2 = *(unsigned __int8 *)(*(_DWORD *)(this + 92) + i + 1);
      else
        v2 = -1;
      v4 += *(_DWORD *)(this + 168)
          + *(__int16 *)(this + 148)
          + sub_5EE950(this, *(_BYTE *)(*(_DWORD *)(this + 92) + i), v2)
          - *(unsigned __int16 *)(this + 144);
    }
  }
  if ( v4 > v5 )
    return v4;
  return v5;
}


//======================================================================
// sub_5EF050
// entry 005ef050  size 215  status ok
//======================================================================

int __thiscall sub_5EF050(int this)
{
  int v1; // eax
  char v3; // [esp+4h] [ebp-14h]
  int v5; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v5 = 0;
  for ( i = 0; *(_BYTE *)(*(_DWORD *)(this + 92) + i); ++i )
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 92) + i) == 10 )
      v3 = 32;
    else
      v3 = *(_BYTE *)(*(_DWORD *)(this + 92) + i);
    if ( *(_BYTE *)(*(_DWORD *)(this + 92) + i + 1) )
      v1 = sub_5EE950(this, v3, *(unsigned __int8 *)(*(_DWORD *)(this + 92) + i + 1));
    else
      v1 = sub_5EE950(this, v3, 0xFFFFFFFF);
    v5 += *(_DWORD *)(this + 168) + *(__int16 *)(this + 148) + v1 - *(unsigned __int16 *)(this + 144);
  }
  return v5;
}


//======================================================================
// sub_5EF130
// entry 005ef130  size 21  status ok
//======================================================================

int __thiscall sub_5EF130(__int16 *this)
{
  return *(this + 75);
}


//======================================================================
// sub_5EF180
// entry 005ef180  size 396  status ok
//======================================================================

int __thiscall sub_5EF180(int *this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  unsigned __int16 v4; // [esp+4h] [ebp-1Ch]
  unsigned __int16 v5; // [esp+6h] [ebp-1Ah]
  int v6; // [esp+8h] [ebp-18h]
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  result = (int)this;
  if ( *(this + 23) )
  {
    v6 = *(this + 25);
    if ( v6 == 1 )
    {
      *(this + 26) = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
      *(this + 27) = sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20));
      sub_5EEDC0((int)this, *(this + 23), &v9, &v8);
      v9 += 2;
      sub_5ECC60(this, v9);
      if ( *(unsigned __int16 *)(*(this + 38) + 970) <= (int)*(unsigned __int16 *)(*(this + 38) + 714) )
        v5 = *(_WORD *)(*(this + 38) + 714);
      else
        v5 = *(_WORD *)(*(this + 38) + 970);
      if ( *(unsigned __int16 *)(*(this + 38) + 974) <= (int)*(unsigned __int16 *)(*(this + 38) + 718) )
        v4 = *(_WORD *)(*(this + 38) + 718);
      else
        v4 = *(_WORD *)(*(this + 38) + 974);
      return sub_5ECCB0(this, v8 + (int)((double)(v4 - v5) * 0.3));
    }
    else if ( v6 > 1 && v6 <= 3 )
    {
      v2 = sub_5EEF60((int)this);
      sub_5ECC60(this, v2);
      v3 = sub_5EEEF0((int)this);
      return sub_5ECCB0(this, v3);
    }
  }
  return result;
}


//======================================================================
// sub_5EF310
// entry 005ef310  size 38  status ok
//======================================================================

int __thiscall sub_5EF310(_DWORD *this, int a2)
{
  *(this + 28) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 172))(this, this);
}


//======================================================================
// sub_5EF340
// entry 005ef340  size 47  status ok
//======================================================================

int __thiscall sub_5EF340(_DWORD *this, int a2, int a3)
{
  *(this + 29) = a2;
  *(this + 30) = a3;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 172))(this, this);
}


//======================================================================
// sub_5EF3B0
// entry 005ef3b0  size 41  status ok
//======================================================================

int __thiscall sub_5EF3B0(_DWORD *this, int a2)
{
  *(this + 33) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 172))(this, this);
}


//======================================================================
// sub_5EF3E0
// entry 005ef3e0  size 35  status ok
//======================================================================

int __thiscall sub_5EF3E0(void *this)
{
  sub_5F5010(this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 172))(this);
}


//======================================================================
// sub_5EF440
// entry 005ef440  size 39  status ok
//======================================================================

int __thiscall sub_5EF440(int *this)
{
  int v2; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h] BYREF

  sub_5EEDC0((int)this, *(this + 23), &v3, &v2);
  return v2;
}


//======================================================================
// sub_5EF470
// entry 005ef470  size 1135  status ok
//======================================================================

int __fastcall sub_5EF470(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  int result; // eax
  int v7; // eax
  int v8; // [esp-34h] [ebp-C4h]
  int v9; // [esp-30h] [ebp-C0h]
  int v10; // [esp-2Ch] [ebp-BCh]
  int v11; // [esp-28h] [ebp-B8h]
  int v12; // [esp-24h] [ebp-B4h]
  int v13; // [esp-20h] [ebp-B0h]
  int v14; // [esp-1Ch] [ebp-ACh]
  int v15; // [esp-18h] [ebp-A8h]
  int v16; // [esp-14h] [ebp-A4h]
  int v17; // [esp-10h] [ebp-A0h]
  int v18; // [esp+0h] [ebp-90h]
  int v20; // [esp+14h] [ebp-7Ch]
  int v21; // [esp+18h] [ebp-78h]
  int v22; // [esp+1Ch] [ebp-74h]
  int v23; // [esp+20h] [ebp-70h]
  int v24; // [esp+28h] [ebp-68h] BYREF
  int v25; // [esp+2Ch] [ebp-64h]
  int v26; // [esp+30h] [ebp-60h]
  int v27; // [esp+34h] [ebp-5Ch]
  int v28; // [esp+38h] [ebp-58h]
  int v29; // [esp+3Ch] [ebp-54h]
  int v30[4]; // [esp+40h] [ebp-50h] BYREF
  int v31[8]; // [esp+50h] [ebp-40h] BYREF
  int v32; // [esp+70h] [ebp-20h] BYREF
  int v33; // [esp+74h] [ebp-1Ch]
  int v34; // [esp+78h] [ebp-18h]
  int v35; // [esp+7Ch] [ebp-14h]
  int v36; // [esp+80h] [ebp-10h]
  int v37; // [esp+84h] [ebp-Ch]
  int v38; // [esp+88h] [ebp-8h]
  int v39; // [esp+8Ch] [ebp-4h]

  v29 = 0;
  result = a1;
  if ( !*(_DWORD *)(a1 + 160) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
      a3 = 0;
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
      a3 = *(_DWORD *)(a1 + 104) - a6;
    if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
      a3 = (*(_DWORD *)(a1 + 104) - a6) / 2;
    result = a3;
    a3 = a3 + *(_DWORD *)(a1 + 116) - 1;
  }
  if ( *(_DWORD *)(a1 + 160) )
    result = --a3;
  if ( *(_BYTE *)(a1 + 158) )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 159) )
    {
      result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 192))(a1);
      if ( (_BYTE)result )
      {
        v28 = (unsigned __int8)sub_5F0A30(124);
        memset(&v31[4], 0, 0x10u);
        v18 = *(_DWORD *)(a1 + 100);
        switch ( v18 )
        {
          case 1:
            v31[5] = *(unsigned __int16 *)(*(_DWORD *)(a1 + 152) + 994);
            v31[4] = *(unsigned __int16 *)(*(_DWORD *)(a1 + 152) + 996);
            v31[7] = *(unsigned __int16 *)(*(_DWORD *)(a1 + 152) + 998) + *(unsigned __int16 *)(a1 + 146) + 1;
            v31[6] = *(unsigned __int16 *)(*(_DWORD *)(a1 + 152) + 1000) + *(unsigned __int16 *)(a1 + 144) + 1;
            break;
          case 2:
            v29 = v28 - 32;
            if ( v28 - 32 < 0 )
              v29 = 0;
            v31[4] = 0;
            v31[5] = 0;
            v31[6] = sub_5EE950(a1, 124, 0xFFFFFFFF);
            v31[7] = sub_5EEAF0(a1, 124);
            break;
          case 3:
            v29 = 124;
            v31[4] = 0;
            v31[5] = 0;
            v31[6] = sub_5EE950(a1, 124, 0xFFFFFFFF);
            v31[7] = sub_5EEAF0(a1, 124);
            break;
        }
        v36 = a3;
        v37 = a4;
        v38 = a3 + v31[6] - v31[4];
        v39 = a4 + v31[7] - v31[5];
        v22 = *(_DWORD *)(a1 + 20);
        v23 = *(_DWORD *)(a1 + 16);
        v36 = v23 + a3;
        v37 = v22 + a4;
        v38 += v23;
        v39 += v22;
        v32 = v23 + a3;
        v33 = v22 + a4;
        v34 = v23 + a3 + v31[6] - v31[4];
        v35 = v22 + a4 + v31[7] - v31[5];
        v30[0] = *a5;
        v30[1] = a5[1];
        v30[2] = a5[2];
        v30[3] = a5[3];
        v24 = v31[4];
        v25 = v31[5];
        v26 = v31[6];
        v27 = v31[7];
        v31[0] = v31[4];
        v31[1] = v31[5];
        v31[2] = v31[6];
        v31[3] = v31[7];
        result = sub_624A70(&v32, (int)v30, &v24, (int)v31);
        if ( (_BYTE)result )
        {
          v20 = sub_5F84F0(*(_DWORD *)(a1 + 4));
          v21 = unknown_libname_619(*(_DWORD *)(a1 + 4));
          v32 += v21;
          v33 += v20;
          v34 += v21;
          v35 += v20;
          if ( *(_BYTE *)(a1 + 157) )
          {
            v17 = *(unsigned __int8 *)(a1 + 156);
            v13 = v24;
            v14 = v25;
            v15 = v26;
            v16 = v27;
            v9 = v32;
            v10 = v33;
            v11 = v34;
            v12 = v35;
            v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 424) + 80);
            v7 = sub_6163E0(0);
            return sub_616510(0, v7 != 1 ? v29 : 0, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, 1, 0, 0);
          }
          else
          {
            return sub_623F00(v32, v33, v35, -16777216, 2);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5EF8E0
// entry 005ef8e0  size 306  status ok
//======================================================================

bool __thiscall sub_5EF8E0(Concurrency::details::SchedulerBase **this)
{
  int v3; // [esp+14h] [ebp-Ch]
  Concurrency::details::SchedulerBase *v4; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  v3 = (int)*(this + 1);
  if ( CMFCScanliner::channels((CMFCScanliner *)this) || (unsigned __int8)sub_5F88F0(*(this + 1)) )
    return 0;
  while ( *(_DWORD *)(v3 + 420) )
    v3 = *(_DWORD *)(v3 + 420);
  if ( *(_BYTE *)(v3 + 432) && (Concurrency::details::SchedulerBase *)v3 != *(this + 1) )
    return 0;
  if ( !*(_BYTE *)(v3 + 432) )
  {
    if ( (Concurrency::details::SchedulerBase *)v3 == *(this + 1) )
      return 0;
    for ( i = CRecentFileList::GetSize((CRecentFileList *)(dword_15E55E8 + 4)) - 1; i >= 0; --i )
    {
      v4 = (Concurrency::details::SchedulerBase *)sub_60CA40(i);
      if ( *((_DWORD *)v4 + 106) == *(_DWORD *)(v3 + 424) )
      {
        if ( *(this + 1) == v4 )
          return Concurrency::details::SchedulerBase::GetSchedulerProxy(*(this + 1)) == (struct Concurrency::ISchedulerProxy *)this;
        return 0;
      }
    }
  }
  return Concurrency::details::SchedulerBase::GetSchedulerProxy(*(this + 1)) == (struct Concurrency::ISchedulerProxy *)this;
}


//======================================================================
// sub_5EFA20
// entry 005efa20  size 767  status ok
//======================================================================

int __fastcall sub_5EFA20(int a1, int a2, int a3, int a4)
{
  int result; // eax
  _BYTE *v5; // edx
  unsigned int v6; // [esp+0h] [ebp-44h]
  unsigned int v7; // [esp+4h] [ebp-40h]
  int j; // [esp+Ch] [ebp-38h]
  int v10; // [esp+14h] [ebp-30h]
  int v11; // [esp+18h] [ebp-2Ch] BYREF
  int v12; // [esp+1Ch] [ebp-28h] BYREF
  int v13; // [esp+20h] [ebp-24h] BYREF
  int v14; // [esp+24h] [ebp-20h]
  int v15; // [esp+28h] [ebp-1Ch] BYREF
  int v16; // [esp+2Ch] [ebp-18h] BYREF
  int v17; // [esp+30h] [ebp-14h] BYREF
  int v18; // [esp+34h] [ebp-10h] BYREF
  int i; // [esp+38h] [ebp-Ch]
  int v20; // [esp+3Ch] [ebp-8h]
  int v21; // [esp+40h] [ebp-4h] BYREF

  v20 = 0;
  v10 = 0;
  v14 = 0;
  v18 = 0;
  v21 = 0;
  result = a1;
  if ( *(_DWORD *)(a1 + 92) )
  {
    v5 = *(_BYTE **)(a1 + 92);
    result = (unsigned __int8)*v5;
    if ( *v5 )
    {
      sub_5EEDC0(a1, *(_DWORD *)(a1 + 92), &v16, &v13);
      if ( (*(_DWORD *)(a1 + 112) & 4) != 0 )
        v20 = 0;
      if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
        v20 = *(_DWORD *)(a1 + 108) - v13;
      if ( (*(_DWORD *)(a1 + 112) & 0x10) != 0 )
        v20 = (*(_DWORD *)(a1 + 108) - v13) / 2;
      v20 += *(_DWORD *)(a1 + 120);
      for ( i = 0; ; i = v12 )
      {
        result = *(_DWORD *)(a1 + 92);
        if ( !*(_BYTE *)(result + i) )
          break;
        sub_5EEBF0(a1, i, &v11, &v12, &v18, 0);
        sub_5EEBF0(a1, v12, &v17, &v15, &v21, 0);
        result = *(_DWORD *)(a1 + 92);
        if ( !*(_BYTE *)(result + v11) )
          break;
        if ( !*(_BYTE *)(*(_DWORD *)(a1 + 92) + v17) || a4 >= v20 && a4 < v20 + *(__int16 *)(a1 + 150) )
        {
          if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
            v10 = 0;
          if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
            v10 = *(_DWORD *)(a1 + 104) - v18;
          if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
            v10 = (*(_DWORD *)(a1 + 104) - v18) / 2;
          v10 += *(_DWORD *)(a1 + 116);
          for ( j = v11; ; ++j )
          {
            if ( j >= v12 )
            {
              v20 += *(__int16 *)(a1 + 150);
              goto LABEL_11;
            }
            v7 = j >= v12 - 1 ? -1 : *(unsigned __int8 *)(*(_DWORD *)(a1 + 92) + j + 1);
            v14 = v10 + sub_5EE950(a1, *(_BYTE *)(*(_DWORD *)(a1 + 92) + j), v7);
            if ( a3 <= v14 )
              break;
            if ( !*(_BYTE *)(*(_DWORD *)(a1 + 92) + j + 1) && a3 > v14 )
            {
              *(_DWORD *)(a1 + 160) = j + 1;
              return a1;
            }
            if ( j >= v12 - 1 )
              v6 = -1;
            else
              v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 92) + j + 1);
            v10 += *(_DWORD *)(a1 + 168)
                 + *(__int16 *)(a1 + 148)
                 + sub_5EE950(a1, *(_BYTE *)(*(_DWORD *)(a1 + 92) + j), v6);
          }
          result = (v14 + v10) / 2;
          if ( a3 >= result )
          {
            *(_DWORD *)(a1 + 160) = j + 1;
          }
          else
          {
            *(_DWORD *)(a1 + 160) = j;
            return j;
          }
          return result;
        }
        i = v12 + 1;
        v20 += *(__int16 *)(a1 + 150);
LABEL_11:
        ;
      }
    }
  }
  return result;
}


//======================================================================
// sub_5EFD20
// entry 005efd20  size 62  status ok
//======================================================================

bool __thiscall sub_5EFD20(CMFCScanliner *this)
{
  return *((_DWORD *)this + 23) && *((_DWORD *)this + 10) && *((_DWORD *)this + 44) && !CMFCScanliner::channels(this);
}


//======================================================================
// sub_5EFD60
// entry 005efd60  size 3280  status ok
//======================================================================

int __thiscall sub_5EFD60(int *this, int *a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp-34h] [ebp-124h]
  int v14; // [esp-30h] [ebp-120h]
  int v15; // [esp-2Ch] [ebp-11Ch]
  int v16; // [esp-28h] [ebp-118h]
  int v17; // [esp-24h] [ebp-114h]
  int v18; // [esp-20h] [ebp-110h]
  int v19; // [esp-1Ch] [ebp-10Ch]
  int v20; // [esp-18h] [ebp-108h]
  int v21; // [esp-14h] [ebp-104h]
  int v22; // [esp-10h] [ebp-100h]
  char v23; // [esp-8h] [ebp-F8h]
  int v24; // [esp+0h] [ebp-F0h]
  int v26; // [esp+Ch] [ebp-E4h]
  int v27; // [esp+10h] [ebp-E0h]
  int v28; // [esp+14h] [ebp-DCh]
  int v29; // [esp+18h] [ebp-D8h]
  int v31; // [esp+20h] [ebp-D0h]
  int v32; // [esp+24h] [ebp-CCh]
  int v33; // [esp+28h] [ebp-C8h]
  int v34; // [esp+30h] [ebp-C0h]
  int j; // [esp+38h] [ebp-B8h]
  int v36; // [esp+3Ch] [ebp-B4h]
  int v37; // [esp+40h] [ebp-B0h] BYREF
  int v38; // [esp+44h] [ebp-ACh]
  int v39; // [esp+48h] [ebp-A8h]
  int v40; // [esp+4Ch] [ebp-A4h]
  int v41; // [esp+50h] [ebp-A0h] BYREF
  int v42; // [esp+54h] [ebp-9Ch]
  int v43; // [esp+58h] [ebp-98h]
  int v44; // [esp+5Ch] [ebp-94h]
  int v45; // [esp+60h] [ebp-90h]
  int v46; // [esp+64h] [ebp-8Ch]
  int v47; // [esp+68h] [ebp-88h]
  int v48; // [esp+6Ch] [ebp-84h]
  int v49; // [esp+70h] [ebp-80h]
  int v50; // [esp+74h] [ebp-7Ch]
  int v51; // [esp+78h] [ebp-78h] BYREF
  int v52; // [esp+7Ch] [ebp-74h] BYREF
  int v53[4]; // [esp+80h] [ebp-70h] BYREF
  int v54[4]; // [esp+90h] [ebp-60h] BYREF
  _DWORD v55[5]; // [esp+A0h] [ebp-50h] BYREF
  int v56; // [esp+B4h] [ebp-3Ch] BYREF
  int v57; // [esp+B8h] [ebp-38h]
  int v58; // [esp+BCh] [ebp-34h] BYREF
  int i; // [esp+C0h] [ebp-30h]
  int v60; // [esp+C4h] [ebp-2Ch] BYREF
  int v61; // [esp+C8h] [ebp-28h]
  int v62; // [esp+CCh] [ebp-24h]
  int v63; // [esp+D0h] [ebp-20h]
  int v64; // [esp+D4h] [ebp-1Ch]
  int v65; // [esp+D8h] [ebp-18h]
  int v66; // [esp+DCh] [ebp-14h]
  int v67; // [esp+E0h] [ebp-10h]
  int v68; // [esp+E4h] [ebp-Ch]
  int v69; // [esp+E8h] [ebp-8h]
  int v70; // [esp+ECh] [ebp-4h]

  v47 = 0;
  v64 = 0;
  v49 = 0;
  v50 = 0;
  v65 = 0;
  j = 0;
  v58 = 0;
  v48 = 0;
  v36 = 0;
  v46 = 0;
  v66 = 0;
  v57 = 0;
  result = (*(int (__thiscall **)(int *))(*this + 188))(this);
  if ( (_BYTE)result )
  {
    sub_5F6820(a2);
    v31 = *(this + 7);
    v32 = *(this + 6);
    v33 = *(this + 5);
    v37 = *(this + 4);
    v38 = v33;
    v39 = v32;
    v40 = v31;
    sub_5EC3A0(&v37, &v37, a2);
    result = v37;
    if ( v37 < v39 && v38 < v40 )
    {
      sub_5EEDC0((int)this, *(this + 23), &v56, v55);
      if ( *(_BYTE *)*(this + 23) )
      {
        v3 = sub_5F5590(this);
        if ( v55[0] > v3 || (v4 = sub_5F5550(this), v56 > v4) )
        {
          v5 = sub_5F5590(this);
          if ( v55[0] < *((__int16 *)this + 75) + v5 )
          {
            while ( 1 )
            {
              v7 = sub_5F5590(this);
              if ( v55[0] <= v7 )
                break;
              --v55[0];
            }
          }
          else
          {
            while ( 1 )
            {
              v6 = sub_5F5590(this);
              if ( v55[0] <= v6 )
                break;
              v55[0] -= *((__int16 *)this + 75);
            }
          }
        }
      }
      if ( (*(this + 28) & 4) != 0 )
        v64 = 0;
      if ( (*(this + 28) & 8) != 0 )
        v64 = *(this + 27) - v55[0];
      if ( (*(this + 28) & 0x10) != 0 )
        v64 = (*(this + 27) - v55[0]) / 2;
      v64 += *(this + 30);
      v57 = v64;
      v67 = 0;
      v68 = 0;
      v69 = sub_5F5550(this);
      v70 = sub_5F5590(this);
      for ( i = 0; *(_BYTE *)(*(this + 23) + i); i = v52 )
      {
        sub_5EEBF0((int)this, i, &v51, &v52, &v58, 0);
        if ( v36 > 0 )
        {
          sub_5EEDC0((int)this, v51 + *(this + 23), &v56, v55);
          v8 = sub_5F5590(this);
          if ( v8 < v64 + *((__int16 *)this + 75) )
            break;
        }
        if ( !*(_BYTE *)(*(this + 23) + v51) )
          break;
        if ( (*(this + 28) & 1) != 0 )
        {
          v47 = 0;
          v47 = (*(this + 42) + *((__int16 *)this + 74)) / 2;
        }
        if ( (*(this + 28) & 2) != 0 )
        {
          v47 = *(this + 26) - v58;
          v47 += *(this + 42) + *((__int16 *)this + 74);
        }
        if ( (*(this + 28) & 0x20) != 0 )
          v47 = (*(this + 26) - v58) / 2;
        v47 += *(this + 29);
        while ( j < v51 )
        {
          if ( j == *(this + 40) )
          {
            v66 = v49;
            v57 = v50;
            v48 = v65;
          }
          ++j;
        }
        for ( j = v51; j < v52; ++j )
        {
          v45 = (unsigned __int8)sub_5F0A30(*(_BYTE *)(*(this + 23) + j));
          memset(&v55[1], 0, 0x10u);
          v24 = *(this + 25);
          switch ( v24 )
          {
            case 1:
              v55[2] = *(unsigned __int16 *)(*(this + 38) + 8 * v45 + 2);
              v55[1] = *(unsigned __int16 *)(*(this + 38) + 8 * v45 + 4);
              v55[4] = *(unsigned __int16 *)(*(this + 38) + 8 * v45 + 6) + *((unsigned __int16 *)this + 73) + 1;
              v55[3] = *(unsigned __int16 *)(*(this + 38) + 8 * v45 + 8) + *((unsigned __int16 *)this + 72) + 1;
              break;
            case 2:
              v46 = v45 - 32;
              if ( v45 - 32 < 0 )
                v46 = 0;
              v55[1] = 0;
              v55[2] = 0;
              v55[3] = sub_5EE950((int)this, *(_BYTE *)(*(this + 23) + j), 0xFFFFFFFF);
              v55[4] = sub_5EEAF0((int)this, *(_BYTE *)(*(this + 23) + j));
              break;
            case 3:
              v46 = *(unsigned __int8 *)(*(this + 23) + j);
              v55[1] = 0;
              v55[2] = 0;
              if ( *(_BYTE *)(*(this + 23) + j) != 13 && *(_BYTE *)(*(this + 23) + j) != 10 )
              {
                v55[3] = sub_5EE950((int)this, *(_BYTE *)(*(this + 23) + j), 0xFFFFFFFF);
                v55[4] = sub_5EEAF0((int)this, *(_BYTE *)(*(this + 23) + j));
              }
              break;
          }
          if ( *(this + 25) == 3 && *((_BYTE *)this + 204) && *(this + 44) && j > v51 )
          {
            freetype6_78(*(this + 47), *(unsigned __int8 *)(*(this + 23) + j));
            v9 = freetype6_78(*(this + 47), *(unsigned __int8 *)(*(this + 23) + j - 1));
            freetype6_82(*(this + 47), v9);
            v47 += (v34 + (v34 < 0 ? -32 : 32)) / 64 + *((char *)this + *(unsigned __int8 *)(*(this + 23) + j) + 208);
          }
          v67 = v47;
          v68 = v64;
          v69 = v47 + v55[3] - v55[1];
          v70 = v64 + v55[4] - v55[2];
          v28 = *(this + 5);
          v29 = *(this + 4);
          v67 = v29 + v47;
          v68 = v28 + v64;
          v69 += v29;
          v70 += v28;
          v60 = v29 + v47;
          v61 = v28 + v64;
          v62 = v29 + v47 + v55[3] - v55[1];
          v63 = v28 + v64 + v55[4] - v55[2];
          v53[0] = v37;
          v53[1] = v38;
          v53[2] = v39;
          v53[3] = v40;
          v41 = v55[1];
          v42 = v55[2];
          v43 = v55[3];
          v44 = v55[4];
          v54[0] = v55[1];
          v54[1] = v55[2];
          v54[2] = v55[3];
          v54[3] = v55[4];
          if ( (unsigned __int8)sub_624A70(&v60, (int)v53, &v41, (int)v54) )
          {
            v26 = sub_5F84F0(*(this + 1));
            v27 = unknown_libname_619(*(this + 1));
            v60 += v27;
            v61 += v26;
            v62 += v27;
            v63 += v26;
            v23 = *(this + 43) != 0;
            v22 = *((unsigned __int8 *)this + 156);
            v18 = v41;
            v19 = v42;
            v20 = v43;
            v21 = v44;
            v14 = v60;
            v15 = v61;
            v16 = v62;
            v17 = v63;
            v13 = *(_DWORD *)(*(_DWORD *)(*(this + 1) + 424) + 80);
            v10 = sub_6163E0(0);
            sub_616510(0, v10 != 1 ? v46 : 0, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, 1, v23, 0);
          }
          if ( j == *(this + 40) && (!*((_BYTE *)this + 166) || j != v51) )
          {
            v66 = v47 + 1;
            v57 = v64;
            v48 = v58;
          }
          v47 += *(this + 42) + *((__int16 *)this + 74) + v55[3] - v55[1] - *((unsigned __int16 *)this + 72);
          v49 = v47 + 1;
          v50 = v64;
          v65 = v58;
        }
        if ( j == *(this + 40) && *((_BYTE *)this + 166) )
        {
          v66 = v47 + 1;
          v57 = v64;
          v48 = v58;
        }
        v64 += *((__int16 *)this + 75);
        ++v36;
      }
      if ( *(this + 40) >= j && j )
      {
        v66 = v47 + 1;
        if ( *(_BYTE *)(*(this + 23) + j - 1) == 10 && v64 + *((__int16 *)this + 75) > *(this + 27) )
        {
          *(_BYTE *)(j + *(this + 23) - 2) = 0;
          *(_BYTE *)(j + *(this + 23) - 1) = 0;
          (*(void (__thiscall **)(int *, _DWORD))(*this + 180))(this, *(this + 23));
        }
        if ( *(_BYTE *)(*(this + 23) + j - 1) == 10 )
        {
          v57 = v64;
          if ( (*(this + 28) & 1) != 0 )
            v66 = 0;
          if ( (*(this + 28) & 2) != 0 )
            v66 = *(this + 26) - v58;
          if ( (*(this + 28) & 0x20) != 0 )
            v66 = (*(this + 26) - v58) / 2;
          v66 += *(this + 29) + 1;
        }
        else
        {
          v57 = v64 - *((__int16 *)this + 75);
          v48 = v65;
        }
      }
      sub_5EF470((int)this, v66, v66, v57, &v37, v48);
      v55[2] = (*(int (__thiscall **)(int *))(*this + 84))(this);
      v55[1] = (*(int (__thiscall **)(int *))(*this + 76))(this);
      v11 = sub_5F5590(this);
      v55[4] = v55[2] + v11;
      v12 = sub_5F5550(this);
      v55[3] = v55[1] + v12;
      *(this + 5) = v55[2];
      *(this + 4) = v55[1];
      result = v55[4];
      *(this + 7) = v55[4];
      *(this + 6) = v55[3];
    }
  }
  return result;
}


//======================================================================
// sub_5F0A30
// entry 005f0a30  size 176  status ok
//======================================================================

unsigned __int8 __thiscall sub_5F0A30(_DWORD *this, unsigned __int8 a2)
{
  int v3; // [esp+0h] [ebp-10h]
  int i; // [esp+8h] [ebp-8h]

  if ( a2 <= 0x7Fu )
    return a2;
  v3 = *(this + 25);
  if ( v3 == 1 )
  {
    for ( i = 0; i < 10; ++i )
    {
      if ( a2 == (unsigned __int8)byte_75EE84[i] )
        return i + 127;
    }
    return 0;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 3 )
      return a2;
    return 0;
  }
  if ( a2 < 0x80u || a2 > 0xA0u )
    return a2 - 33;
  else
    return 0;
}


//======================================================================
// sub_5F0AE0
// entry 005f0ae0  size 161  status ok
//======================================================================

int __thiscall sub_5F0AE0(int this, char a2)
{
  int result; // eax
  int v4; // [esp+Ch] [ebp-20h]
  int v5; // [esp+10h] [ebp-1Ch]
  int v6; // [esp+14h] [ebp-18h]
  _DWORD v7[4]; // [esp+1Ch] [ebp-10h] BYREF

  v4 = *(_DWORD *)(this + 28);
  v5 = *(_DWORD *)(this + 24);
  v6 = *(_DWORD *)(this + 20);
  v7[0] = *(_DWORD *)(this + 16);
  v7[1] = v6;
  v7[2] = v5;
  v7[3] = v4;
  sub_5F62F0(a2);
  *(_BYTE *)(this + 156) = a2;
  result = this;
  if ( *(_DWORD *)(this + 40) )
  {
    result = sub_5F54A0(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)(this + 4) + 424) + 20))(
               *(_DWORD *)(*(_DWORD *)(this + 4) + 424),
               v7);
  }
  return result;
}


//======================================================================
// sub_5F0B90
// entry 005f0b90  size 21  status ok
//======================================================================

_BYTE *__thiscall sub_5F0B90(_BYTE *this)
{
  *(this + 158) = 1;
  return this;
}


//======================================================================
// sub_5F0BB0
// entry 005f0bb0  size 31  status ok
//======================================================================

_BYTE *__thiscall sub_5F0BB0(_BYTE *this)
{
  *(this + 158) = 0;
  *(this + 159) = 0;
  return this;
}


//======================================================================
// sub_5F0BD0
// entry 005f0bd0  size 78  status ok
//======================================================================

int __thiscall sub_5F0BD0(_BYTE *this, char a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 158) )
  {
    *(this + 159) = a2;
    result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 192))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5F0C20
// entry 005f0c20  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5F0C20(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &CaretScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_5F0C50
// entry 005f0c50  size 98  status ok
//======================================================================

int __thiscall sub_5F0C50(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]

  result = (int)this;
  v2 = *(this + 5);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      sub_5F0BD0((_BYTE *)*(this + 8), 0);
      return (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 8))(this, 0, 30);
    }
  }
  else
  {
    sub_5F0BD0((_BYTE *)*(this + 8), 1);
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 1, 30);
  }
  return result;
}


//======================================================================
// sub_5F0CC0
// entry 005f0cc0  size 152  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5F0CC0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &sciRoom::`vftable';
  sub_60C5F0();
  sub_60C5F0();
  dword_15E55E4 = (int)this;
  *((_DWORD *)this + 1) = 0;
  dword_7950AC = 0;
  *((_DWORD *)this + 10) = 0;
  return this;
}


//======================================================================
// sub_5F0D60
// entry 005f0d60  size 956  status ok
//======================================================================

void __thiscall sub_5F0D60(int this)
{
  char v1; // [esp+0h] [ebp-F8h]
  char Buffer[132]; // [esp+5Ch] [ebp-9Ch] BYREF
  void (__thiscall ***v4)(_DWORD, int); // [esp+E4h] [ebp-14h]
  void (__thiscall ***v5)(_DWORD, int); // [esp+E8h] [ebp-10h]
  int v6; // [esp+F4h] [ebp-4h]

  *(_DWORD *)this = &sciRoom::`vftable';
  v6 = 2;
  sprintf(Buffer, "Max Memory used = %d.\n", dword_7950AC);
  sub_62FDE0(Buffer, v1);
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 8)) )
  {
    v5 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    sub_60C890(v5);
    if ( v5 )
      (**v5)(v5, 1);
  }
  if ( dword_795078 )
  {
    (**(void (__thiscall ***)(int, int))dword_795078)(dword_795078, 1);
    dword_795078 = 0;
  }
  if ( dword_795088 )
  {
    (**(void (__thiscall ***)(int, int))dword_795088)(dword_795088, 1);
    dword_795088 = 0;
  }
  if ( dword_79507C )
  {
    (**(void (__thiscall ***)(int, int))dword_79507C)(dword_79507C, 1);
    dword_79507C = 0;
  }
  if ( dword_795080 )
  {
    (**(void (__thiscall ***)(int, int))dword_795080)(dword_795080, 1);
    dword_795080 = 0;
  }
  if ( dword_795084 )
  {
    (**(void (__thiscall ***)(int, int))dword_795084)(dword_795084, 1);
    dword_795084 = 0;
  }
  if ( sub_60CA40(0) != *(_DWORD *)(dword_15E55E8 + 20) )
    sub_5E9F20("(sciPlane *)SCIshell->planes.At(0) == SCIshell->pMainPlane", "..\\scilib\\sciroom.cpp", 60);
  while ( (int)CRecentFileList::GetSize((CRecentFileList *)(dword_15E55E8 + 4)) > 1 )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(1);
    if ( v4 )
      (**v4)(v4, 1);
  }
  sub_5FB0C0(*(_DWORD *)(dword_15E55E8 + 20));
  sub_5F1B70(0);
  dword_15E55E4 = 0;
  LOBYTE(v6) = 1;
  sub_60C6A0();
  LOBYTE(v6) = 0;
  sub_60C6A0();
  v6 = -1;
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_5F1120
// entry 005f1120  size 1374  status ok
//======================================================================

int __thiscall sub_5F1120(CDeferredCommand *this)
{
  const struct _GUID *IID; // eax
  void *v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-10h] [ebp-86Ch]
  int v16; // [esp-10h] [ebp-86Ch]
  int v17; // [esp-10h] [ebp-86Ch]
  int v18; // [esp+8h] [ebp-854h]
  int v19; // [esp+Ch] [ebp-850h]
  int v20; // [esp+10h] [ebp-84Ch]
  int v21; // [esp+14h] [ebp-848h]
  void *v22; // [esp+18h] [ebp-844h]
  void *v24; // [esp+20h] [ebp-83Ch]
  void *v25; // [esp+28h] [ebp-834h]
  void *v26; // [esp+30h] [ebp-82Ch]
  void *v27; // [esp+38h] [ebp-824h]
  void *v28; // [esp+40h] [ebp-81Ch]
  char Buffer[2052]; // [esp+48h] [ebp-814h] BYREF
  int v30; // [esp+858h] [ebp-4h]

  CMFCTabCtrl::HideInactiveWindow(*(CMFCTabCtrl **)(dword_15E55E8 + 20), 0);
  sub_5F85D0(*(_DWORD *)(dword_15E55E8 + 20));
  IID = CDeferredCommand::GetIID(this);
  sub_5F1AD0(IID);
  if ( !byte_795FA2 || dword_795078 )
  {
    dword_795078 = 0;
  }
  else
  {
    v28 = operator new(0x1D0u);
    v30 = 0;
    if ( v28 )
    {
      sub_5EC5A0(v28);
      v22 = v2;
    }
    else
    {
      v22 = 0;
    }
    v30 = -1;
    dword_795078 = (int)v22;
    sub_5EC8F0(v22, (int)&Source, 4, 100, 15, 0, 0, 9999, 48, -1);
    sub_5EE8C0((_BYTE *)dword_795078, 192, 192, 192);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_795078 + 116))(dword_795078);
  }
  result = (unsigned __int8)byte_795FA4;
  if ( byte_795FA4 )
  {
    v27 = operator new(0x1D0u);
    v30 = 1;
    if ( v27 )
    {
      sub_5EC5A0(v27);
      v21 = v4;
    }
    else
    {
      v21 = 0;
    }
    v30 = -1;
    dword_795088 = v21;
    v5 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
    sub_5EC8F0((void *)dword_795088, (int)&Source, 27, 100, 15, v5 - 100, 0, 9999, 48, -1);
    sub_5EE8C0((_BYTE *)dword_795088, 192, 192, 192);
    sprintf(Buffer, "Built: %s %s", "Nov 18 2008", "14:27:50");
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_795088 + 180))(dword_795088, Buffer);
    sub_5EF180((int *)dword_795088);
    v6 = sub_5F5550(dword_795088);
    sub_5ECC60((_DWORD *)dword_795088, v6 + 8);
    v7 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
    v8 = sub_5F5550(dword_795088);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_795088 + 68))(dword_795088, v7 - v8, 0);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_795088 + 116))(dword_795088);
  }
  else
  {
    dword_795088 = 0;
  }
  if ( byte_795FB0 )
  {
    v26 = operator new(0x1D0u);
    v30 = 2;
    if ( v26 )
    {
      sub_5EC5A0(v26);
      v20 = v9;
    }
    else
    {
      v20 = 0;
    }
    v30 = -1;
    dword_79507C = v20;
    v15 = sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20)) - 15;
    v10 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
    sub_5EC8F0((void *)dword_79507C, (int)&Source, 4, 90, 15, v10 - 270, v15, 9999, 17, -1);
    sub_5EE8C0((_BYTE *)dword_79507C, 192, 192, 192);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_79507C + 116))(dword_79507C);
    v25 = operator new(0x1D0u);
    v30 = 3;
    if ( v25 )
    {
      sub_5EC5A0(v25);
      v19 = v11;
    }
    else
    {
      v19 = 0;
    }
    v30 = -1;
    dword_795080 = v19;
    v16 = sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20)) - 15;
    v12 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
    sub_5EC8F0((void *)dword_795080, (int)&Source, 4, 90, 15, v12 - 180, v16, 9999, 17, -1);
    sub_5EE8C0((_BYTE *)dword_795080, 192, 192, 192);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_795080 + 116))(dword_795080);
    v24 = operator new(0x1D0u);
    v30 = 4;
    if ( v24 )
    {
      sub_5EC5A0(v24);
      v18 = v13;
    }
    else
    {
      v18 = 0;
    }
    v30 = -1;
    dword_795084 = v18;
    v17 = sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20)) - 15;
    v14 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
    sub_5EC8F0((void *)dword_795084, (int)&Source, 4, 90, 15, v14 - 90, v17, 9999, 17, -1);
    sub_5EE8C0((_BYTE *)dword_795084, 192, 192, 192);
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_795084 + 116))(dword_795084);
  }
  else
  {
    dword_79507C = 0;
    dword_795080 = 0;
    dword_795084 = 0;
  }
  return result;
}


//======================================================================
// sub_5F1680
// entry 005f1680  size 976  status ok
//======================================================================

int __thiscall sub_5F1680(int this, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-24h]
  int v5; // [esp+10h] [ebp-14h]
  int v6; // [esp+14h] [ebp-10h]
  int v7; // [esp+18h] [ebp-Ch]
  int v8; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]
  int j; // [esp+20h] [ebp-4h]
  int k; // [esp+20h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  v6 = 0;
  result = a2;
  if ( *(_DWORD *)(a2 + 32) )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a2 + 32) + 424);
    *(_DWORD *)(a2 + 8) += unknown_libname_619(*(_DWORD *)(a2 + 32));
    *(_DWORD *)(a2 + 12) += sub_5F84F0(*(_DWORD *)(a2 + 32));
    v7 = *(_DWORD *)(a2 + 8);
    result = *(_DWORD *)(a2 + 12);
    v8 = result;
  }
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = a2;
    if ( *(_DWORD *)(a2 + 32) )
    {
      if ( !unknown_libname_841(dword_15E55E8) || *(_BYTE *)(unknown_libname_841(dword_15E55E8) + 433) )
      {
        if ( !CMediaType::FormatLength((CMediaType *)dword_15E55E8) )
          goto LABEL_11;
        *(_DWORD *)(a2 + 32) = CMediaType::FormatLength((CMediaType *)dword_15E55E8);
        *(_DWORD *)(a2 + 8) -= unknown_libname_619(*(_DWORD *)(a2 + 32));
        *(_DWORD *)(a2 + 12) -= sub_5F84F0(*(_DWORD *)(a2 + 32));
        result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 32) + 4))(*(_DWORD *)(a2 + 32), a2);
        if ( !*(_BYTE *)(a2 + 4) )
        {
          *(_DWORD *)(a2 + 8) = v7;
          *(_DWORD *)(a2 + 12) = v8;
          result = sub_5F40E0(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), v6);
          *(_DWORD *)(a2 + 32) = result;
          if ( *(_DWORD *)(a2 + 32) )
          {
LABEL_11:
            if ( *(_DWORD *)(a2 + 24) == 1 )
            {
              for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 24)); ++i )
              {
                v3 = sub_60CA40(i);
                if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 132))(v3, a2) )
                  break;
              }
              if ( i == CRecentFileList::GetSize((CRecentFileList *)(this + 24)) )
              {
                for ( j = 0;
                      j < CRecentFileList::GetSize((CRecentFileList *)(this + 8))
                   && *(_DWORD *)(a2 + 32) != sub_60CA40(j);
                      ++j )
                {
                  ;
                }
                if ( j == CRecentFileList::GetSize((CRecentFileList *)(this + 8)) )
                  sub_5F2870(this);
              }
              *(_DWORD *)(a2 + 8) -= unknown_libname_619(*(_DWORD *)(a2 + 32));
              *(_DWORD *)(a2 + 12) -= sub_5F84F0(*(_DWORD *)(a2 + 32));
              return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 32) + 4))(*(_DWORD *)(a2 + 32), a2);
            }
            else
            {
              result = CRecentFileList::GetSize((CRecentFileList *)(dword_15E55E8 + 4)) - 1;
              for ( k = result; k >= 0; --k )
              {
                result = sub_60CA40(k);
                v5 = result;
                if ( *(_DWORD *)(result + 424) == v6 )
                {
                  result = (unsigned __int8)sub_5F88F0(result);
                  if ( !(_BYTE)result && !*(_BYTE *)(v5 + 433) )
                  {
                    *(_DWORD *)(a2 + 8) = v7;
                    *(_DWORD *)(a2 + 12) = v8;
                    *(_DWORD *)(a2 + 32) = v5;
                    *(_DWORD *)(a2 + 8) -= unknown_libname_619(*(_DWORD *)(a2 + 32));
                    *(_DWORD *)(a2 + 12) -= sub_5F84F0(*(_DWORD *)(a2 + 32));
                    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 32) + 4))(*(_DWORD *)(a2 + 32), a2);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(a2 + 32) = unknown_libname_841(dword_15E55E8);
        *(_DWORD *)(a2 + 8) -= unknown_libname_619(*(_DWORD *)(a2 + 32));
        *(_DWORD *)(a2 + 12) -= sub_5F84F0(*(_DWORD *)(a2 + 32));
        return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 32) + 4))(*(_DWORD *)(a2 + 32), a2);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5F1A50
// entry 005f1a50  size 125  status ok
//======================================================================

int __thiscall sub_5F1A50(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  if ( *(this + 1) )
    sub_5FC250(*(this + 1));
  v3 = 0;
  for ( i = sub_60CA40(0); ; i = sub_60CA40(v3) )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(dword_15E55E8 + 4));
    if ( v3 >= result )
      break;
    (*(void (__thiscall **)(int))(*(_DWORD *)i + 8))(i);
    ++v3;
  }
  return result;
}


//======================================================================
// sub_5F1AD0
// entry 005f1ad0  size 63  status ok
//======================================================================

int __thiscall sub_5F1AD0(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 10) = a2;
  result = sub_60CA40(0);
  if ( result )
    return sub_5F83D0(a2, 0);
  return result;
}


//======================================================================
// sub_5F1B10
// entry 005f1b10  size 60  status ok
//======================================================================

int __stdcall sub_5F1B10(char a1, char a2, char a3)
{
  int result; // eax

  result = sub_60CA40(0);
  if ( result )
    return sub_5F8A40(a1, a2, a3);
  return result;
}


//======================================================================
// sub_5F1B70
// entry 005f1b70  size 104  status ok
//======================================================================

void (__thiscall ****__thiscall sub_5F1B70(
        void (__thiscall ****this)(_DWORD, _DWORD),
        void (__thiscall ***a2)(_DWORD, _DWORD)))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax

  if ( *(this + 1) )
    (***(this + 1))(*(this + 1), 1);
  *(this + 1) = a2;
  result = this;
  if ( *(this + 1) )
    return (void (__thiscall ****)(_DWORD, _DWORD))sub_5FC220(this);
  return result;
}


//======================================================================
// sub_5F1BE0
// entry 005f1be0  size 525  status ok
//======================================================================

char __thiscall sub_5F1BE0(void *this)
{
  int v2; // [esp+4h] [ebp-38h]
  void *v4; // [esp+Ch] [ebp-30h]
  int v5; // [esp+14h] [ebp-28h]
  int v6; // [esp+18h] [ebp-24h] BYREF
  int v7; // [esp+1Ch] [ebp-20h] BYREF
  int v8; // [esp+20h] [ebp-1Ch] BYREF
  int v9; // [esp+24h] [ebp-18h] BYREF
  int i; // [esp+28h] [ebp-14h]
  int v11; // [esp+2Ch] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-4h]

  sub_5F24A0(this);
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 40))(this) )
    return 1;
  (*(void (__thiscall **)(void *, int *, int *, int *))(*(_DWORD *)this + 52))(this, &v11, &v6, &v9);
  if ( !v9 )
    return 0;
  for ( i = 0; *(_DWORD *)(v9 + 12 * i) != -1; ++i )
  {
    v4 = operator new(0x1F0u);
    v12 = 0;
    if ( v4 )
      v2 = sub_5FC680(*(_DWORD *)(v9 + 12 * i), 1);
    else
      v2 = 0;
    v12 = -1;
    v5 = sub_5F9DE0(
           v2,
           *(_DWORD *)(v9 + 12 * i),
           *(_DWORD *)(v9 + 12 * i + 4),
           v11,
           v6,
           10002,
           &Source,
           -1,
           -1,
           -1,
           -1,
           0);
    v11 += *(_DWORD *)(v9 + 12 * i + 8);
    sub_60C840(v5);
    sub_5F2370(*(_DWORD *)(v9 + 12 * i), 0, 1);
  }
  (*(void (__thiscall **)(void *, int *, int *))(*(_DWORD *)this + 56))(this, &v8, &v7);
  if ( v8 )
    sub_5F9CE0(0, -1, v8, 0, 0, 10000, 0, 255, 0);
  if ( v7 )
    sub_5F9CE0(0, -1, v7, 0, 0, 10001, 0, 255, 0);
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 44))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 72))(dword_15E55E8);
  return 1;
}


//======================================================================
// sub_5F1DF0
// entry 005f1df0  size 97  status ok
//======================================================================

int __thiscall sub_5F1DF0(int this, int a2)
{
  pairNode *v2; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 24)); ++i )
  {
    v2 = (pairNode *)sub_60CA40(i);
    if ( pairNode::raw_length(v2) == a2 )
      return sub_60CA40(i);
  }
  return 0;
}


//======================================================================
// sub_5F1E60
// entry 005f1e60  size 798  status ok
//======================================================================

char __thiscall sub_5F1E60(char *this, int a2, int a3, int Number)
{
  pairNode *v4; // eax
  int Size; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp+4h] [ebp-40h]
  int v16; // [esp+8h] [ebp-3Ch]
  int v17; // [esp+Ch] [ebp-38h]
  void *v19; // [esp+14h] [ebp-30h]
  int v20; // [esp+1Ch] [ebp-28h]
  int v21; // [esp+20h] [ebp-24h]
  int v22; // [esp+20h] [ebp-24h]
  int v23; // [esp+24h] [ebp-20h]
  _DWORD *v24; // [esp+28h] [ebp-1Ch] BYREF
  int v25; // [esp+2Ch] [ebp-18h]
  int v26; // [esp+30h] [ebp-14h]
  int i; // [esp+34h] [ebp-10h]
  int v28; // [esp+40h] [ebp-4h]

  if ( Number == -1 )
  {
    i = -1;
  }
  else if ( Number == -2 )
  {
    i = CRecentFileList::GetSize((CRecentFileList *)(this + 24)) - 1;
  }
  else
  {
    v23 = abs(Number);
    for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 24)); ++i )
    {
      v4 = (pairNode *)sub_60CA40(i);
      if ( pairNode::raw_length(v4) == v23 )
        break;
    }
    if ( i == CRecentFileList::GetSize((CRecentFileList *)(this + 24)) )
      return 0;
    if ( Number < 0 )
      --i;
  }
  if ( i < 0 )
    v25 = 0;
  else
    v25 = sub_60CA40(i);
  if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD **))(*(_DWORD *)this + 60))(this, a2, &v24) )
  {
    v19 = operator new(0x1F0u);
    v28 = 0;
    if ( v19 )
      v17 = sub_5FC680(*v24, 1);
    else
      v17 = 0;
    v28 = -1;
    v26 = sub_5F9DE0(v17, *v24, v24[1], 0, 0, 10002, &Source, -1, -1, -1, -1, 0);
    Size = CRecentFileList::GetSize((CRecentFileList *)(this + 24));
    if ( i == Size - 1 )
    {
      v16 = sub_60CA40(i);
      v15 = sub_60CA40(i);
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 84))(v16);
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v15 + 76))(v15, v7);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 68))(v26, a3 + v8);
    }
    else
    {
      if ( i >= 0 )
        sub_60CB20(v25, v26);
      else
        sub_60C7D0(v26);
      ++i;
      while ( 1 )
      {
        v9 = CRecentFileList::GetSize((CRecentFileList *)(this + 24));
        if ( i >= v9 - 1 )
          break;
        v21 = sub_60CA40(i);
        v20 = sub_60CA40(i + 1);
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 84))(v20);
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v20 + 76))(v20, v10);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 68))(v21, v11);
        ++i;
      }
      v12 = CRecentFileList::GetSize((CRecentFileList *)(this + 24));
      v22 = sub_60CA40(v12 - 1);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 84))(v22);
      v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v22 + 76))(v22, v13);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 68))(v22, a3 + v14);
    }
    sub_5F2370(*v24, 0, 1);
    return 1;
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\sciroom.cpp", 391);
    return 0;
  }
}


//======================================================================
// sub_5F2300
// entry 005f2300  size 108  status ok
//======================================================================

int __thiscall sub_5F2300(int this, int a2)
{
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 8)); ++i )
  {
    if ( *(_DWORD *)(sub_60CA40(i) + 452) == a2 )
      return sub_60CA40(i);
  }
  return 0;
}


//======================================================================
// sub_5F2370
// entry 005f2370  size 289  status ok
//======================================================================

int __thiscall sub_5F2370(void *this, int a2, int a3, unsigned __int8 a4)
{
  int result; // eax
  CComCtlWrapper *v5; // [esp+4h] [ebp-20h]
  CComCtlWrapper *v7; // [esp+Ch] [ebp-18h]
  int v8; // [esp+14h] [ebp-10h]

  v8 = sub_5F2300((int)this, a2);
  if ( v8 )
  {
    if ( (unsigned __int8)sub_5F8970(v8) == a4 )
    {
      result = v8;
      if ( *(_DWORD *)(v8 + 436) == a3 )
        return result;
    }
    sub_5F25D0(a2);
  }
  v7 = (CComCtlWrapper *)operator new(0x358u);
  if ( v7 )
    v5 = CComCtlWrapper::CComCtlWrapper(v7);
  else
    v5 = 0;
  sub_5FDC10(a2);
  sub_60C840(v5);
  (*(void (__thiscall **)(void *, CComCtlWrapper *, int))(*(_DWORD *)this + 48))(this, v5, a2);
  return (*(int (__thiscall **)(int, CComCtlWrapper *, int))(*(_DWORD *)dword_15E55E8 + 76))(dword_15E55E8, v5, a2);
}


//======================================================================
// sub_5F24A0
// entry 005f24a0  size 292  status ok
//======================================================================

int __thiscall sub_5F24A0(int this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // [esp+1Ch] [ebp-Ch]
  void (__thiscall ***v4)(_DWORD, int); // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 24)) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(*(_DWORD *)(dword_15E55E8 + 20) + 20)); ++i )
    {
      if ( v3 == (void (__thiscall ***)(_DWORD, int))sub_60CA40(i) )
        sub_60C890(v3);
    }
    sub_60C890(v3);
    if ( v3 )
      (**v3)(v3, 1);
  }
  while ( 1 )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(this + 8));
    if ( !result )
      break;
    v4 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    sub_60C890(v4);
    if ( v4 )
      (**v4)(v4, 1);
  }
  return result;
}


//======================================================================
// sub_5F25D0
// entry 005f25d0  size 150  status ok
//======================================================================

int __thiscall sub_5F25D0(int this, int a2)
{
  int result; // eax
  int v4; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(this + 8));
    if ( i >= result )
      break;
    v4 = sub_60CA40(i);
    if ( *(_DWORD *)(v4 + 452) == a2 )
    {
      sub_60C890(v4);
      result = v4;
      if ( v4 )
        return (**(int (__thiscall ***)(int, int))v4)(v4, 1);
      return result;
    }
  }
  return result;
}


//======================================================================
// sub_5F2670
// entry 005f2670  size 451  status ok
//======================================================================

CComCtlWrapper *__thiscall sub_5F2670(char *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  CComCtlWrapper *v9; // [esp+4h] [ebp-2Ch]
  CComCtlWrapper *v11; // [esp+14h] [ebp-1Ch]
  int i; // [esp+20h] [ebp-10h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 8)); ++i )
  {
    if ( *(_DWORD *)(sub_60CA40(i) + 452) == a2 )
    {
      if ( a6 )
        *(_DWORD *)(sub_60CA40(i) + 444) = a6;
      sub_60CA40(i);
      sub_5FDDF0(a3, a4, a5);
      v7 = sub_60CA40(i);
      sub_5FEDC0(v7);
      return (CComCtlWrapper *)sub_60CA40(i);
    }
  }
  v11 = (CComCtlWrapper *)operator new(0x358u);
  if ( v11 )
    v9 = CComCtlWrapper::CComCtlWrapper(v11);
  else
    v9 = 0;
  if ( a6 )
    *((_DWORD *)v9 + 111) = a6;
  sub_5FDC10(a2);
  sub_60C840(v9);
  (*(void (__thiscall **)(char *, CComCtlWrapper *, int))(*(_DWORD *)this + 48))(this, v9, a2);
  (*(void (__thiscall **)(int, CComCtlWrapper *, int))(*(_DWORD *)dword_15E55E8 + 76))(dword_15E55E8, v9, a2);
  sub_5FDDF0(a3, a4, a5);
  sub_5FEDC0(v9);
  return v9;
}


//======================================================================
// sub_5F2840
// entry 005f2840  size 44  status ok
//======================================================================

int __thiscall sub_5F2840(void *this, int a2)
{
  int result; // eax

  result = sub_5F2300((int)this, a2);
  if ( result )
    return sub_5FEF90(result, this);
  return result;
}


//======================================================================
// sub_5F2870
// entry 005f2870  size 71  status ok
//======================================================================

int __thiscall sub_5F2870(char *this)
{
  int result; // eax
  int v2; // eax
  char *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(v3 + 8));
    if ( i >= result )
      break;
    v2 = sub_60CA40(i);
    sub_5FEF90(v2, v3);
  }
  return result;
}


//======================================================================
// sub_5F28C0
// entry 005f28c0  size 88  status ok
//======================================================================

int __thiscall sub_5F28C0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  void *v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = this;
  result = sub_5F2300((int)this, a2);
  v5 = result;
  if ( result )
  {
    for ( i = 0; ; ++i )
    {
      result = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(
                 v5,
                 v4);
      if ( i >= result )
        break;
      v3 = sub_5FF080(i);
      sub_5FD410(v3);
    }
  }
  return result;
}


//======================================================================
// sub_5F2920
// entry 005f2920  size 56  status ok
//======================================================================

char __thiscall sub_5F2920(void *this, int a2)
{
  int v4; // [esp+8h] [ebp-4h]

  v4 = sub_5F2300((int)this, a2);
  if ( v4 )
    return sub_5F8910(v4);
  else
    return 0;
}


//======================================================================
// sub_5F2A00
// entry 005f2a00  size 88  status ok
//======================================================================

char __thiscall sub_5F2A00(int this, int a2)
{
  int v3; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 24)); ++i )
  {
    v3 = sub_60CA40(i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 60))(v3, a2);
  }
  return 1;
}


//======================================================================
// sub_5F2A60
// entry 005f2a60  size 126  status ok
//======================================================================

int __thiscall sub_5F2A60(int this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 8)); ++i )
  {
    sub_60CA40(i);
    if ( sub_5FF060(a2) )
    {
      if ( !a3 )
      {
        sub_60CA40(i);
        return sub_5FF060(a2);
      }
      --a3;
    }
  }
  return 0;
}


//======================================================================
// sub_5F2AE0
// entry 005f2ae0  size 60  status ok
//======================================================================

int __thiscall sub_5F2AE0(void *this, int a2, int a3)
{
  int result; // eax

  result = sub_5F2A60((int)this, a3, 0);
  if ( result )
    return sub_5FDFF0(a2, a3);
  return result;
}


//======================================================================
// sub_5F2B20
// entry 005f2b20  size 116  status ok
//======================================================================

int __thiscall sub_5F2B20(void *this, int a2, char a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v6 = 0;
  for ( result = sub_5F2A60((int)this, a2, 0); result; result = sub_5F2A60((int)this, a2, v6) )
  {
    v5 = sub_5F2A60((int)this, a2, v6);
    if ( a3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 204))(v5);
    else
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
    ++v6;
  }
  return result;
}


//======================================================================
// sub_5F2BA0
// entry 005f2ba0  size 90  status ok
//======================================================================

int __thiscall sub_5F2BA0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( result = sub_5F2A60((int)this, a2, 0); result; result = sub_5F2A60((int)this, a2, v5) )
  {
    v3 = sub_5F2A60((int)this, a2, v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
    ++v5;
  }
  return result;
}


//======================================================================
// sub_5F2C40
// entry 005f2c40  size 107  status ok
//======================================================================

int __thiscall sub_5F2C40(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v5 = (int)this;
  result = sub_5F2300((int)this, a2);
  if ( result )
  {
    for ( i = 0; ; ++i )
    {
      v3 = sub_5F2300(v5, a2);
      result = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(
                 v3,
                 v5);
      if ( i >= result )
        break;
      sub_5F2300(v5, a2);
      v4 = sub_5FF080(i);
      sub_5FD560(v4);
    }
  }
  return result;
}


//======================================================================
// sub_5F2CB0
// entry 005f2cb0  size 46  status ok
//======================================================================

int __thiscall sub_5F2CB0(void *this, int a2)
{
  int result; // eax

  result = sub_5F2A60((int)this, a2, 0);
  if ( result )
    return sub_5FD440(this, result);
  return result;
}


//======================================================================
// sub_5F2CE0
// entry 005f2ce0  size 46  status ok
//======================================================================

int __thiscall sub_5F2CE0(void *this, int a2)
{
  int result; // eax

  result = sub_5F2A60((int)this, a2, 0);
  if ( result )
    return sub_5FD560(result);
  return result;
}


//======================================================================
// sub_5F2D10
// entry 005f2d10  size 39  status ok
//======================================================================

int __cdecl sub_5F2D10(int a1)
{
  int result; // eax

  if ( dword_15E55E4 )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E4 + 76))(dword_15E55E4, a1, -1);
  return result;
}


//======================================================================
// sub_5F2D40
// entry 005f2d40  size 15  status ok
//======================================================================

char __stdcall sub_5F2D40(int a1, int a2)
{
  return 1;
}


//======================================================================
// sub_5F2D50
// entry 005f2d50  size 15  status ok
//======================================================================

char __stdcall sub_5F2D50(int a1, int a2, int a3)
{
  return 0;
}


//======================================================================
// sub_5F2EB0
// entry 005f2eb0  size 178  status ok
//======================================================================

void __thiscall sub_5F2EB0(CNoTrackObject *this)
{
  *(_DWORD *)this = &sciShell::`vftable';
  sub_5F3C80(-1);
  if ( *((_DWORD *)this + 5) )
    (***((void (__thiscall ****)(_DWORD, int))this + 5))(*((_DWORD *)this + 5), 1);
  sub_5F3DE0(0);
  dword_15E55E8 = 0;
  sub_60C6A0();
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5F2F70
// entry 005f2f70  size 389  status ok
//======================================================================

int __thiscall sub_5F2F70(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-20h]

  *(this + 8) = sub_5F3E70(this);
  if ( operator new(0x1B4u) )
    v2 = CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0, 0, *(this + 17), *(this + 18));
  else
    v2 = 0;
  *(this + 5) = v2;
  *(_DWORD *)(dword_7960D8 + 16) = *(_DWORD *)(*(this + 5) + 424);
  byte_795FA1 = sub_607900("RunFullSpeed", 0);
  byte_795FA2 = sub_607900("ShowFrameRate", 0);
  byte_795FA4 = sub_607900("ShowBuildVersion", 0);
  byte_795FB0 = sub_607900("ShowMousePosition", 0);
  byte_795FB1 = sub_607900("LogSoundNumbers", 0);
  byte_795FA5 = sub_607900("FullScreenRedraw", 0);
  byte_795FA0 = sub_607900("ShowMemoryStats", 0);
  result = sub_607960((int)"DirectDrawRefreshRate", 0);
  dword_7950B8 = result;
  return result;
}


//======================================================================
// sub_5F3100
// entry 005f3100  size 37  status ok
//======================================================================

_BYTE *__thiscall sub_5F3100(_BYTE *this)
{
  _BYTE *result; // eax

  while ( 1 )
  {
    result = this;
    if ( *(this + 36) )
      break;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
  }
  return result;
}


//======================================================================
// sub_5F3130
// entry 005f3130  size 1716  status ok
//======================================================================

int __thiscall sub_5F3130(_DWORD *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp-4h] [ebp-CCh]
  int v8; // [esp+0h] [ebp-C8h]
  unsigned int v9; // [esp+4h] [ebp-C4h]
  const char *v10; // [esp+8h] [ebp-C0h]
  int v11; // [esp+10h] [ebp-B8h]
  int v13; // [esp+38h] [ebp-90h]
  struct tagPOINT v14; // [esp+3Ch] [ebp-8Ch]
  struct tagPOINT v15; // [esp+44h] [ebp-84h] BYREF
  int v16; // [esp+4Ch] [ebp-7Ch]
  char Buffer[108]; // [esp+50h] [ebp-78h] BYREF
  int v18; // [esp+C0h] [ebp-8h]
  int i; // [esp+C4h] [ebp-4h]

  *(this + 6) = *(this + 7);
  *(this + 7) = sub_5F3E70(this);
  if ( *(this + 7) < *(this + 6) )
  {
    if ( (int)*(this + 7) <= 0 )
    {
      *(this + 7) = 0;
      *(this + 6) = 0;
    }
    else
    {
      *(this + 6) = *(this + 7) - 1;
    }
  }
  if ( *(this + 7) == *(this + 6) && !byte_795FA1 || !byte_15E55D3 && !byte_15E55D4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8);
  v18 = *(this + 7) - *(this + 6);
  if ( v18 <= 0 )
    v18 = 1;
  if ( v18 > 60 )
    v18 = 1;
  if ( v18 > 2 )
    v18 = 2;
  *(this + 8) = *(this + 7) - v18;
  while ( v18-- )
  {
    ++dword_795094;
    ++*(this + 8);
    if ( *(this + 11) != -1 )
      sub_5F3C30(*(this + 11));
    if ( *(this + 10) )
      sub_5FC250(*(this + 10));
    if ( dword_15E55E4 )
    {
      if ( !unknown_libname_841(this) || *(_BYTE *)(unknown_libname_841(this) + 433) )
      {
        if ( !byte_15E55EC )
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_15E55E4 + 12))(dword_15E55E4);
      }
      else
      {
        v11 = unknown_libname_841(this);
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_15E55E4 + 16))(dword_15E55E4);
      }
    }
    if ( dword_7960D8 && *(_DWORD *)(dword_7960D8 + 8) )
      sub_60ACC0(*(_DWORD *)(dword_7960D8 + 8));
    for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 1)); ++i )
    {
      v16 = sub_60CA40(i);
      if ( !*(_DWORD *)(v16 + 420) && (unsigned __int8)sub_5F8910(v16) )
      {
        if ( byte_795FA5 )
          sub_5F9A80(v16);
      }
      sub_613E70(*(_DWORD *)(v16 + 424));
    }
    i = 0;
    v16 = sub_60CA40(0);
    while ( i < CRecentFileList::GetSize((CRecentFileList *)(this + 1)) )
    {
      if ( (unsigned __int8)sub_5F89B0(v16) )
      {
        if ( v16 )
          (**(void (__thiscall ***)(int, int))v16)(v16, 1);
        i = 0;
      }
      else
      {
        ++i;
      }
      v16 = sub_60CA40(i);
    }
  }
  dword_795090 = *(this + 7);
  if ( dword_795090 >= dword_79508C + 60 )
  {
    if ( dword_795078 )
    {
      dword_795FAC *= 100;
      if ( byte_795FA5 )
        v10 = (const char *)&unk_6D67EC;
      else
        v10 = (const char *)&unk_6D67E8;
      v9 = dword_795FAC / (unsigned int)dword_795FA8++;
      v8 = dword_795090 - dword_79508C;
      sprintf(
        Buffer,
        "%d doits.   OD%s %li",
        (int)((double)dword_795094 / ((double)(dword_795090 - dword_79508C) / 60.0)),
        v10,
        v9);
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_795078 + 180))(dword_795078, Buffer);
      v3 = sub_5EF050(dword_795078);
      sub_5ECC60((_DWORD *)dword_795078, v3 + 8);
      v4 = sub_5EF130((__int16 *)dword_795078);
      sub_5ECCB0((_DWORD *)dword_795078, v4 + 2);
      dword_795FA8 = 0;
      dword_795FAC = 0;
    }
    dword_79508C = dword_795090;
    dword_795094 = 0;
  }
  if ( dword_79507C && dword_795080 && dword_795084 )
  {
    v14 = sub_5EA470();
    v15 = v14;
    sub_5EA400(&v15.x);
    v15.x -= *(_DWORD *)(*(_DWORD *)(*(this + 5) + 424) + 40);
    v15.y -= *(_DWORD *)(*(_DWORD *)(*(this + 5) + 424) + 44);
    sprintf(Buffer, " Screen: %i,%i", v14.x, v14.y);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_79507C + 180))(dword_79507C, Buffer);
    sprintf(Buffer, " Client: %i,%i", v15.x, v15.y);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_795080 + 180))(dword_795080, Buffer);
    if ( unknown_libname_841(this) )
    {
      v13 = unknown_libname_841(this);
      v5 = sub_5F84F0(v13);
      v7 = v15.y - v5;
      v6 = unknown_libname_619(v13);
      sprintf(Buffer, " Dialog: %i,%i", v15.x - v6, v7);
    }
    else
    {
      sprintf(Buffer, " Dialog: %i,%i", v15.x, v15.y);
    }
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_795084 + 180))(dword_795084, Buffer);
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8, v8);
}


//======================================================================
// sub_5F37F0
// entry 005f37f0  size 182  status ok
//======================================================================

int __fastcall sub_5F37F0(int a1, int a2, int a3)
{
  int result; // eax

  result = a1;
  if ( *(_BYTE *)(a1 + 37)
    && (result = *(unsigned __int8 *)(a1 + 38), !*(_BYTE *)(a1 + 38))
    && (*(_DWORD *)(a3 + 24) == 21
     || *(_DWORD *)(a3 + 24) == 22
     || (result = a3, *(_DWORD *)(a3 + 24) == 4)
     || *(_DWORD *)(a3 + 24) == 1) )
  {
    *(_BYTE *)(a1 + 38) = 1;
    *(_BYTE *)(a3 + 4) = 1;
    return a3;
  }
  else if ( *(_DWORD *)(a1 + 56)
         && (*(_DWORD *)(a3 + 24) == 21 || (result = a3, *(_DWORD *)(a3 + 24) == 22) || *(_DWORD *)(a3 + 24) == 4) )
  {
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 56) + 60))(*(_DWORD *)(a1 + 56), a3);
  }
  else if ( dword_15E55E4 )
  {
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E4 + 8))(dword_15E55E4, a3);
  }
  return result;
}


//======================================================================
// sub_5F38B0
// entry 005f38b0  size 156  status ok
//======================================================================

int __thiscall sub_5F38B0(void *this, int a2)
{
  const char *v2; // eax
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  if ( !a2 )
    return (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_7960D8 + 16) + 28))(
             *(_DWORD *)(dword_7960D8 + 16),
             byte_795738);
  v2 = (const char *)(*(int (__thiscall **)(void *, char *, int))(*(_DWORD *)this + 32))(this, byte_795738, a2);
  sprintf(Buffer, v2);
  return (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_7960D8 + 16) + 28))(
           *(_DWORD *)(dword_7960D8 + 16),
           Buffer);
}


//======================================================================
// sub_5F3950
// entry 005f3950  size 112  status ok
//======================================================================

char *__thiscall sub_5F3950(void *this, int a2, char *Destination, size_t a4)
{
  char *Str; // [esp+4h] [ebp-4h]

  Str = (char *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, a2);
  if ( strlen(Str) > a4 )
    sub_5E9F20("strlen(pcTemp) <= (unsigned int)iMaxChars", "..\\scilib\\scishell.cpp", 247);
  strncpy(Destination, Str, a4 - 1);
  Destination[a4 - 1] = 0;
  return Destination;
}


//======================================================================
// sub_5F39C0
// entry 005f39c0  size 354  status ok
//======================================================================

bool __thiscall sub_5F39C0(_BYTE *this, char a2)
{
  const char *v3; // eax
  const CHAR *v4; // eax
  char Buffer[132]; // [esp+Ch] [ebp-88h] BYREF

  if ( *(this + 37) )
  {
    *(this + 38) = 1;
    return 1;
  }
  else
  {
    if ( *(this + 36) || a2 )
    {
      *(this + 36) = 1;
    }
    else
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 48))(this, 1);
      v3 = (const char *)(*(int (__thiscall **)(_BYTE *, CHAR *))(*(_DWORD *)this + 36))(this, byte_795634);
      sprintf(Buffer, v3);
      v4 = (const CHAR *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 40))(this);
      if ( sub_62FF10(Buffer, v4, 4u) == 6 )
      {
        if ( *((_DWORD *)this + 13) == 1100 )
          *(this + 36) = 1;
        else
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 52))(this, 1100);
      }
    }
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
    return *(this + 36) || *((_DWORD *)this + 11) == 1100;
  }
}


//======================================================================
// sub_5F3B50
// entry 005f3b50  size 58  status ok
//======================================================================

bool __thiscall sub_5F3B50(CDeferredCommand *this)
{
  return *((_BYTE *)this + 36) || CDeferredCommand::GetMethod(this) == 1100;
}


//======================================================================
// sub_5F3C30
// entry 005f3c30  size 67  status ok
//======================================================================

int __thiscall sub_5F3C30(_DWORD *this, int a2)
{
  *(this + 12) = *(this + 13);
  *(this + 13) = a2;
  *(this + 11) = -1;
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 144))(this, *(this + 13));
}


//======================================================================
// sub_5F3C80
// entry 005f3c80  size 351  status ok
//======================================================================

int __thiscall sub_5F3C80(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-2Ch]
  int v4; // [esp+4h] [ebp-28h]
  int v6; // [esp+Ch] [ebp-20h]
  int (__thiscall ***v7)(_DWORD, int); // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  if ( dword_15E55E4 )
  {
    if ( *(_DWORD *)(dword_7960D8 + 8) )
    {
      sub_6098D0(*(_DWORD *)(dword_7960D8 + 8));
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 140))(this) )
        (*(void (__thiscall **)(_DWORD *))(*this + 136))(this);
    }
    if ( dword_15E55E4 )
      v4 = (**(int (__thiscall ***)(int, int))dword_15E55E4)(dword_15E55E4, 1);
    else
      v4 = 0;
    dword_15E55E4 = 0;
    if ( a2 != -1 && a2 != 1100 )
      sub_5F7D50(*(this + 5));
    while ( CRecentFileList::GetSize((CRecentFileList *)&unk_795098) )
    {
      v7 = (int (__thiscall ***)(_DWORD, int))sub_60CA40(0);
      sub_60C890(v7);
      if ( v7 )
        v3 = (**v7)(v7, 1);
      else
        v3 = 0;
    }
  }
  sub_625240(0);
  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(this + 1));
    if ( i >= result )
      break;
    v6 = *(_DWORD *)(sub_60CA40(i) + 424);
    sub_613DA0(v6, v3, v4);
  }
  return result;
}


//======================================================================
// sub_5F3DE0
// entry 005f3de0  size 104  status ok
//======================================================================

void (__thiscall ****__thiscall sub_5F3DE0(
        void (__thiscall ****this)(_DWORD, _DWORD),
        void (__thiscall ***a2)(_DWORD, _DWORD)))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax

  if ( *(this + 10) )
    (***(this + 10))(*(this + 10), 1);
  *(this + 10) = a2;
  result = this;
  if ( *(this + 10) )
    return (void (__thiscall ****)(_DWORD, _DWORD))sub_5FC220(this);
  return result;
}


//======================================================================
// sub_5F3E70
// entry 005f3e70  size 37  status ok
//======================================================================

int __thiscall sub_5F3E70(void *this)
{
  return (*(int (__thiscall **)(_DWORD, void *))(**(_DWORD **)(dword_7960D8 + 12) + 4))(
           *(_DWORD *)(dword_7960D8 + 12),
           this);
}


//======================================================================
// sub_5F3F90
// entry 005f3f90  size 80  status ok
//======================================================================

int __thiscall sub_5F3F90(_DWORD *this, int a2)
{
  *(this + 15) = a2;
  if ( !*(this + 15) )
    return (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
  sub_5F41C0(0);
  (*(void (__thiscall **)(_DWORD *))(*this + 112))(this);
  return sub_5F8720(*(this + 15));
}


//======================================================================
// sub_5F4000
// entry 005f4000  size 101  status ok
//======================================================================

char __thiscall sub_5F4000(int this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 4)); ++i )
  {
    v5 = sub_60CA40(i);
    if ( *(_DWORD *)(v5 + 368) == a2 )
    {
      *(_DWORD *)(v5 + 368) = a3;
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_5F4070
// entry 005f4070  size 107  status ok
//======================================================================

unsigned int __thiscall sub_5F4070(CMediaType *this, int a2, int a3, int a4)
{
  unsigned int v6; // [esp+4h] [ebp-4h]
  int v7; // [esp+4h] [ebp-4h]

  v6 = CMediaType::FormatLength(this);
  if ( v6 && !*(_BYTE *)(v6 + 433) )
    return v6;
  v7 = unknown_libname_841(this);
  if ( !v7 || *(_BYTE *)(v7 + 433) )
    return sub_5F40E0(a2, a3, a4);
  else
    return v7;
}


//======================================================================
// sub_5F40E0
// entry 005f40e0  size 220  status ok
//======================================================================

int __thiscall sub_5F40E0(int this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v7 = 0;
  for ( i = CRecentFileList::GetSize((CRecentFileList *)(this + 4)) - 1; i >= 0; --i )
  {
    v7 = sub_60CA40(i);
    if ( *(_DWORD *)(v7 + 424) == a4 && !*(_BYTE *)(v7 + 433) )
    {
      if ( (unsigned __int8)sub_5F8910(v7) )
      {
        if ( a2 >= unknown_libname_619(v7) )
        {
          v4 = unknown_libname_619(v7);
          if ( a2 <= sub_5F8550(v7) + v4 && a3 >= sub_5F84F0(v7) )
          {
            v5 = sub_5F84F0(v7);
            if ( a3 <= sub_5F8570(v7) + v5 )
              return v7;
          }
        }
      }
    }
  }
  return v7;
}


//======================================================================
// sub_5F41C0
// entry 005f41c0  size 44  status ok
//======================================================================

int __thiscall sub_5F41C0(_DWORD *this, int a2)
{
  int result; // eax

  if ( !a2 || (result = a2, !*(_BYTE *)(a2 + 433)) )
  {
    *(this + 16) = a2;
    return a2;
  }
  return result;
}


//======================================================================
// sub_5F4210
// entry 005f4210  size 453  status ok
//======================================================================

int __thiscall sub_5F4210(void *this, int a2, int a3, int a4, char a5, int a6, int a7, float a8, float a9, _DWORD *a10)
{
  int v11; // esi
  int IsFixedSize; // eax
  char v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]

  if ( a10 )
    *a10 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 56))(this) || a6 == 11 )
  {
    if ( a2 == 540233805 )
    {
      v14 = sub_608CF0(a3, a6, a7, a8, a9, (int)a10);
    }
    else if ( a2 == 541542223 )
    {
      v14 = sub_608C30(a3, a6, a7, a8, a9, (int)a10);
    }
    else
    {
      v14 = sub_608B50(a3, a6, a5, a7, a8, a9, (int)a10);
    }
    if ( byte_795FB1 )
    {
      sub_62FDE0("Shell PlayASound(): soundIndex = %d, resourceID = %d, bCompressed = %d, priority = %d\n", v14);
      if ( v14 == -1 )
        sub_62FDE0(">>> Sound not playing.", v13);
    }
    if ( v14 == -1 )
    {
      if ( a4 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, 0);
      return 0;
    }
    else
    {
      sub_608930(v14, a4);
      v15 = 60 * sub_608890(v14) / 1000;
      if ( a4 )
      {
        v11 = sub_5F3E70((void *)dword_15E55E8);
        IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 28))(a4, v15 + v11 - IsFixedSize);
      }
      return v15;
    }
  }
  else
  {
    if ( a4 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, 0);
    return 0;
  }
}


//======================================================================
// sub_5F43E0
// entry 005f43e0  size 64  status ok
//======================================================================

int __thiscall sub_5F43E0(void *this, int a2, int a3, char a4, int a5, int a6, float a7, float a8, _DWORD *a9)
{
  return sub_5F4210(this, 541542223, a2, a3, a4, a5, a6, a7, a8, a9);
}


//======================================================================
// sub_5F4420
// entry 005f4420  size 64  status ok
//======================================================================

int __thiscall sub_5F4420(void *this, int a2, int a3, char a4, int a5, int a6, float a7, float a8, _DWORD *a9)
{
  return sub_5F4210(this, 540233805, a2, a3, a4, a5, a6, a7, a8, a9);
}


//======================================================================
// sub_5F4460
// entry 005f4460  size 117  status ok
//======================================================================

void __stdcall sub_5F4460(int a1, char a2)
{
  int v2; // [esp+4h] [ebp-4h]

  if ( a1 != -1 && !(unsigned __int8)sub_609650(a1) )
  {
    v2 = sub_6088E0(a1);
    sub_609720(a1, 1);
    if ( v2 )
    {
      if ( a2 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 28))(v2, 0);
    }
  }
}


//======================================================================
// sub_5F44E0
// entry 005f44e0  size 44  status ok
//======================================================================

void __stdcall sub_5F44E0(int a1, char a2)
{
  int v2; // eax

  v2 = sub_608470(a1);
  sub_5F4460(v2, a2);
}


//======================================================================
// sub_5F4510
// entry 005f4510  size 44  status ok
//======================================================================

void __stdcall sub_5F4510(int a1, char a2)
{
  int v2; // eax

  v2 = sub_608410(a1);
  sub_5F4460(v2, a2);
}


//======================================================================
// sub_5F4540
// entry 005f4540  size 41  status ok
//======================================================================

char __stdcall sub_5F4540(int a1)
{
  if ( a1 == -1 )
    return 0;
  else
    return sub_609B80(a1);
}


//======================================================================
// sub_5F4570
// entry 005f4570  size 40  status ok
//======================================================================

char __stdcall sub_5F4570(int a1)
{
  int v1; // eax

  v1 = sub_608470(a1);
  return sub_5F4540(v1);
}


//======================================================================
// sub_5F45A0
// entry 005f45a0  size 40  status ok
//======================================================================

char __stdcall sub_5F45A0(int a1)
{
  int v1; // eax

  v1 = sub_608410(a1);
  return sub_5F4540(v1);
}


//======================================================================
// sub_5F45D0
// entry 005f45d0  size 74  status ok
//======================================================================

int __stdcall sub_5F45D0(char a1)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = sub_609CA0(*(_DWORD *)(dword_7960D8 + 8));
  for ( i = result; i; i = result )
  {
    sub_5F4510(i, a1);
    result = sub_609CA0(*(_DWORD *)(dword_7960D8 + 8));
  }
  return result;
}


//======================================================================
// sub_5F4620
// entry 005f4620  size 251  status ok
//======================================================================

int __stdcall sub_5F4620(int a1, float a2)
{
  int result; // eax
  int j; // [esp+Ch] [ebp-58h]
  int i; // [esp+10h] [ebp-54h]
  int v5[20]; // [esp+14h] [ebp-50h] BYREF

  v5[0] = -1;
  for ( i = 0; dword_76D6F0[20 * i] != -1; ++i )
  {
    if ( dword_76D6F0[20 * i] == a1 )
    {
      for ( j = 1; dword_76D6F0[20 * i + j] != -1; ++j )
        v5[j - 1] = dword_76D6F0[20 * i + j];
      v5[j - 1] = -1;
      sub_60A9C0(a1, (int)v5, 0, a2, 0.5);
      break;
    }
  }
  result = 80 * i;
  if ( dword_76D6F0[20 * i] == -1 )
    return sub_60A9C0(a1, 0, 0, a2, 0.5);
  return result;
}


//======================================================================
// sub_5F4720
// entry 005f4720  size 31  status ok
//======================================================================

int __stdcall sub_5F4720(int a1)
{
  return sub_60A8F0(a1);
}


//======================================================================
// sub_5F4740
// entry 005f4740  size 30  status ok
//======================================================================

BOOL __thiscall sub_5F4740(void *this)
{
  return sub_60A950(*(_DWORD *)(dword_7960D8 + 8), this) != 0;
}


//======================================================================
// sub_5F4760
// entry 005f4760  size 24  status ok
//======================================================================

int __thiscall sub_5F4760(void *this)
{
  return sub_60A950(*(_DWORD *)(dword_7960D8 + 8), this);
}


//======================================================================
// sub_5F4780
// entry 005f4780  size 31  status ok
//======================================================================

int __stdcall sub_5F4780(int a1)
{
  return sub_60A650(a1);
}


//======================================================================
// sub_5F47A0
// entry 005f47a0  size 31  status ok
//======================================================================

int __stdcall sub_5F47A0(int a1)
{
  return sub_60A7B0(a1);
}


//======================================================================
// sub_5F47E0
// entry 005f47e0  size 33  status ok
//======================================================================

int __stdcall sub_5F47E0(int a1)
{
  return sub_60A480(a1, 1);
}


//======================================================================
// sub_5F4810
// entry 005f4810  size 24  status ok
//======================================================================

int sub_5F4810()
{
  return sub_60A4D0(*(_DWORD *)(dword_7960D8 + 8));
}


//======================================================================
// sub_5F4830
// entry 005f4830  size 66  status ok
//======================================================================

int __stdcall sub_5F4830(int a1, float a2)
{
  int result; // eax

  result = sub_609D80(a1);
  if ( result != -1 )
    return sub_609EF0(result, a2);
  return result;
}


//======================================================================
// sub_5F49D0
// entry 005f49d0  size 246  status ok
//======================================================================

int __thiscall sub_5F49D0(int this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &sciFeature::`vftable';
  *(_DWORD *)(this + 12) = -1;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 36) = 1;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  *(_BYTE *)(this + 10) = 0;
  sub_60C7D0(this);
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 64) = 1;
  *(_BYTE *)(this + 68) = 0;
  return this;
}


//======================================================================
// sub_5F4AD0
// entry 005f4ad0  size 133  status ok
//======================================================================

void __thiscall sub_5F4AD0(CNoTrackObject *this)
{
  *(_DWORD *)this = &sciFeature::`vftable';
  if ( *((_DWORD *)this + 10) )
  {
    if ( *((_DWORD *)this + 1) )
      sub_5F8CE0(this);
  }
  else
  {
    sub_60C890(this);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5F4B60
// entry 005f4b60  size 403  status ok
//======================================================================

char __thiscall sub_5F4B60(CMFCScanliner *this, int a2)
{
  int v3; // [esp+0h] [ebp-8h]

  if ( CMFCScanliner::channels(this) )
    return 0;
  v3 = *(_DWORD *)(a2 + 24);
  switch ( v3 )
  {
    case 1:
      if ( *(_BYTE *)(a2 + 4) )
        return 0;
      if ( !(*(unsigned __int8 (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 132))(this, a2) )
        return 0;
      if ( !*((_BYTE *)this + 8) && (*(_DWORD *)(a2 + 28) & 8) != 0 )
        return (*(int (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 40))(this, a2);
      if ( !*((_BYTE *)this + 9) && (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
        return (*(int (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 44))(this, a2);
      else
        return 0;
    case 2:
      if ( !*(_BYTE *)(a2 + 4)
        && ((*(unsigned __int8 (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 132))(this, a2)
         || *((_BYTE *)this + 8)
         || *((_BYTE *)this + 9)) )
      {
        if ( *((_BYTE *)this + 8) && (*(_DWORD *)(a2 + 28) & 8) != 0 )
        {
          return (*(int (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 48))(this, a2);
        }
        else if ( *((_BYTE *)this + 9) && (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
        {
          return (*(int (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 52))(this, a2);
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    case 4:
      if ( *(_BYTE *)(a2 + 4) )
        return 0;
      else
        return (*(int (__thiscall **)(CMFCScanliner *, int))(*(_DWORD *)this + 56))(this, a2);
    default:
      return 1;
  }
}


//======================================================================
// sub_5F4D00
// entry 005f4d00  size 282  status ok
//======================================================================

int __thiscall sub_5F4D00(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a2);
  if ( (_BYTE)result )
  {
    result = *(_DWORD *)(a2 + 24);
    switch ( result )
    {
      case 1:
        if ( (*(_DWORD *)(a2 + 28) & 8) != 0 )
          result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
        if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
          result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 12))(this, a2);
        break;
      case 2:
        if ( (*(_DWORD *)(a2 + 28) & 8) != 0 )
          result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 16))(this, a2);
        if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
          result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, a2);
        break;
      case 3:
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, a2);
        break;
      case 4:
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, a2);
        break;
      case 24:
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 32))(this, a2);
        break;
      default:
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 36))(this, a2);
        break;
    }
  }
  return result;
}


//======================================================================
// sub_5F4E50
// entry 005f4e50  size 25  status ok
//======================================================================

int __stdcall sub_5F4E50(int a1)
{
  return sub_5F4ED0(a1);
}


//======================================================================
// sub_5F4E70
// entry 005f4e70  size 25  status ok
//======================================================================

int __stdcall sub_5F4E70(int a1)
{
  return sub_5F4ED0(a1);
}


//======================================================================
// sub_5F4E90
// entry 005f4e90  size 25  status ok
//======================================================================

int __stdcall sub_5F4E90(int a1)
{
  return sub_5F4F50(a1);
}


//======================================================================
// sub_5F4EB0
// entry 005f4eb0  size 25  status ok
//======================================================================

int __stdcall sub_5F4EB0(int a1)
{
  return sub_5F4F50(a1);
}


//======================================================================
// sub_5F4ED0
// entry 005f4ed0  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_5F4ED0(_BYTE *this, _DWORD *a2)
{
  _BYTE *result; // eax
  int v3; // edx

  result = a2;
  if ( (a2[7] & 8) != 0 )
  {
    *(this + 8) = 1;
    result = this;
    if ( *(this + 10) )
    {
      *((_DWORD *)this + 11) = a2[2] - (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 76))(this);
      v3 = a2[3] - (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 84))(this);
      result = this;
      *((_DWORD *)this + 12) = v3;
    }
  }
  else if ( (a2[7] & 0x10) != 0 )
  {
    *(this + 9) = 1;
    return this;
  }
  return result;
}


//======================================================================
// sub_5F4F50
// entry 005f4f50  size 101  status ok
//======================================================================

int __thiscall sub_5F4F50(_BYTE *this, _DWORD *a2)
{
  int result; // eax

  if ( (a2[7] & 8) != 0 )
  {
    *(this + 8) = 0;
    result = (int)this;
    if ( *(this + 10) )
      return (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 68))(
               this,
               a2[2] - *((_DWORD *)this + 11),
               a2[3] - *((_DWORD *)this + 12));
  }
  else
  {
    result = (int)a2;
    if ( (a2[7] & 0x10) != 0 )
      *(this + 9) = 0;
  }
  return result;
}


//======================================================================
// sub_5F4FC0
// entry 005f4fc0  size 74  status ok
//======================================================================

int __fastcall sub_5F4FC0(int a1, int a2, int a3)
{
  int result; // eax

  result = a1;
  if ( *(_BYTE *)(a1 + 10) )
  {
    result = *(unsigned __int8 *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 8) )
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 68))(
               a1,
               *(_DWORD *)(a3 + 8) - *(_DWORD *)(a1 + 44),
               *(_DWORD *)(a3 + 12) - *(_DWORD *)(a1 + 48));
  }
  return result;
}


//======================================================================
// sub_5F5010
// entry 005f5010  size 172  status ok
//======================================================================

_DWORD *__thiscall sub_5F5010(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // [esp+4h] [ebp-20h]
  int v4; // [esp+8h] [ebp-1Ch]
  int v5; // [esp+Ch] [ebp-18h]
  _DWORD v6[4]; // [esp+14h] [ebp-10h] BYREF

  result = this;
  if ( !*(this + 1) )
  {
    result = *(_DWORD **)(dword_15E55E8 + 20);
    *(this + 1) = result;
  }
  if ( *(this + 1) )
  {
    sub_5F8BA0(this);
    if ( (unsigned __int8)sub_5F54A0(this) )
    {
      v3 = *(this + 7);
      v4 = *(this + 6);
      v5 = *(this + 5);
      v6[0] = *(this + 4);
      v6[1] = v5;
      v6[2] = v4;
      v6[3] = v3;
      sub_5F5940(v6);
    }
    result = (_DWORD *)sub_60C890(this);
  }
  *(this + 10) = 1;
  return result;
}


//======================================================================
// sub_5F50C0
// entry 005f50c0  size 76  status ok
//======================================================================

void __thiscall sub_5F50C0(CPaneContainer *this, int a2, int a3, int a4, struct CPaneDivider *a5)
{
  (*(void (__thiscall **)(CPaneContainer *))(*(_DWORD *)this + 64))(this);
  (*(void (__thiscall **)(CPaneContainer *, int, int))(*(_DWORD *)this + 68))(this, a2, a3);
  (*(void (__thiscall **)(CPaneContainer *, int))(*(_DWORD *)this + 108))(this, a4);
  CPaneContainer::SetPaneDivider(this, a5);
}


//======================================================================
// sub_5F5110
// entry 005f5110  size 87  status ok
//======================================================================

int __thiscall sub_5F5110(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v4 = *(this + 6) - *(this + 4);
  v5 = *(this + 7) - *(this + 5);
  *(this + 4) = a2;
  *(this + 5) = a3;
  sub_5F5530(v4);
  return sub_5F5570(v5);
}


//======================================================================
// sub_5F5170
// entry 005f5170  size 44  status ok
//======================================================================

int __thiscall sub_5F5170(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 84))(this);
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 68))(this, a2, v2);
}


//======================================================================
// sub_5F51C0
// entry 005f51c0  size 44  status ok
//======================================================================

int __thiscall sub_5F51C0(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 76))(this, a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 68))(this, v2);
}


//======================================================================
// sub_5F5250
// entry 005f5250  size 22  status ok
//======================================================================

_DWORD *__thiscall sub_5F5250(_DWORD *this, int a2)
{
  *(this + 12) = a2;
  return this;
}


//======================================================================
// sub_5F5290
// entry 005f5290  size 100  status ok
//======================================================================

int *__thiscall sub_5F5290(void *this, int *a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v7; // [esp+8h] [ebp-8h]

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 76))(this);
  v7 = sub_5F5550(this) / 2 + v2;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 84))(this);
  v4 = sub_5F5590(this);
  *a2 = v7;
  a2[1] = v4 / 2 + v3;
  return a2;
}


//======================================================================
// sub_5F5300
// entry 005f5300  size 180  status ok
//======================================================================

int __thiscall sub_5F5300(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-20h]
  int v5; // [esp+8h] [ebp-1Ch]
  int v6; // [esp+Ch] [ebp-18h]
  _DWORD v7[4]; // [esp+14h] [ebp-10h] BYREF

  result = (int)this;
  if ( a2 != *(this + 8) )
  {
    result = a2;
    *(this + 8) = a2;
    if ( *(this + 1) || *(this + 10) )
    {
      result = sub_5F8DD0(this);
      if ( *(this + 1) )
      {
        result = (int)this;
        if ( *(this + 10) )
        {
          result = sub_5F54A0(this);
          if ( (_BYTE)result )
          {
            v4 = *(this + 7);
            v5 = *(this + 6);
            v6 = *(this + 5);
            v7[0] = *(this + 4);
            v7[1] = v6;
            v7[2] = v5;
            v7[3] = v4;
            return sub_5F5940(v7);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5F5440
// entry 005f5440  size 18  status ok
//======================================================================

_BYTE *__thiscall sub_5F5440(_BYTE *this)
{
  *(this + 36) = 0;
  return this;
}


//======================================================================
// sub_5F5460
// entry 005f5460  size 49  status ok
//======================================================================

int __thiscall sub_5F5460(void *this, char a2)
{
  if ( a2 )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this);
  else
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
}


//======================================================================
// sub_5F54A0
// entry 005f54a0  size 25  status ok
//======================================================================

BOOL __thiscall sub_5F54A0(unsigned __int8 *this)
{
  return *(this + 36) == 0;
}


//======================================================================
// sub_5F54E0
// entry 005f54e0  size 25  status ok
//======================================================================

BOOL __thiscall sub_5F54E0(unsigned __int8 *this)
{
  return *(this + 36) == 0;
}


//======================================================================
// sub_5F5530
// entry 005f5530  size 28  status ok
//======================================================================

_DWORD *__thiscall sub_5F5530(_DWORD *this, int a2)
{
  *(this + 6) = a2 + *(this + 4);
  return this;
}


//======================================================================
// sub_5F5550
// entry 005f5550  size 23  status ok
//======================================================================

int __thiscall sub_5F5550(_DWORD *this)
{
  return *(this + 6) - *(this + 4);
}


//======================================================================
// sub_5F5570
// entry 005f5570  size 28  status ok
//======================================================================

_DWORD *__thiscall sub_5F5570(_DWORD *this, int a2)
{
  *(this + 7) = a2 + *(this + 5);
  return this;
}


//======================================================================
// sub_5F5590
// entry 005f5590  size 23  status ok
//======================================================================

int __thiscall sub_5F5590(_DWORD *this)
{
  return *(this + 7) - *(this + 5);
}


//======================================================================
// sub_5F55B0
// entry 005f55b0  size 38  status ok
//======================================================================

int __thiscall sub_5F55B0(_DWORD *this, int a2)
{
  *(this + 16) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 172))(this, this);
}


//======================================================================
// sub_5F5620
// entry 005f5620  size 22  status ok
//======================================================================

_BYTE *__thiscall sub_5F5620(_BYTE *this, char a2)
{
  *(this + 68) = a2;
  return this;
}


//======================================================================
// sub_5F5640
// entry 005f5640  size 93  status ok
//======================================================================

bool __thiscall sub_5F5640(int this, int a2, int a3)
{
  return sub_5F54A0((unsigned __int8 *)this)
      && a2 >= *(_DWORD *)(this + 16)
      && a2 <= *(_DWORD *)(this + 24)
      && a3 >= *(_DWORD *)(this + 20)
      && a3 <= *(_DWORD *)(this + 28);
}


//======================================================================
// sub_5F56A0
// entry 005f56a0  size 43  status ok
//======================================================================

int __thiscall sub_5F56A0(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 128))(
           this,
           *(_DWORD *)(a2 + 8),
           *(_DWORD *)(a2 + 12));
}


//======================================================================
// sub_5F56D0
// entry 005f56d0  size 116  status ok
//======================================================================

int __thiscall sub_5F56D0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // eax
  int v8; // [esp+8h] [ebp-8h]

  v3 = sub_5F8550(*(this + 1)) / 2;
  v8 = v3 - sub_5F5550(this) / 2;
  v4 = sub_5F8570(*(this + 1)) / 2;
  v5 = sub_5F5590(this);
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 68))(this, a2 + v8, a3 + v4 - v5 / 2);
}


//======================================================================
// sub_5F5750
// entry 005f5750  size 134  status ok
//======================================================================

int __thiscall sub_5F5750(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD *))(*a2 + 76))(a2);
  v3 = sub_5F5550(a2) / 2 + v2;
  v8 = v3 - sub_5F5550(this) / 2;
  v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 84))(a2);
  v5 = sub_5F5590(a2) / 2 + v4;
  v9 = v5 - sub_5F5590(this) / 2;
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 68))(this, v8, v9);
}


//======================================================================
// sub_5F57E0
// entry 005f57e0  size 56  status ok
//======================================================================

int __thiscall sub_5F57E0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( (int)*(this + 4) < 10000 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 68))(this, *(this + 4) + 10000, *(this + 5));
  return result;
}


//======================================================================
// sub_5F5820
// entry 005f5820  size 56  status ok
//======================================================================

int __thiscall sub_5F5820(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( (int)*(this + 4) >= 10000 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 68))(this, *(this + 4) - 10000, *(this + 5));
  return result;
}


//======================================================================
// sub_5F5860
// entry 005f5860  size 102  status ok
//======================================================================

int __thiscall sub_5F5860(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(this + 1) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
    sub_5F8CE0(this);
  }
  result = (int)this;
  *(this + 1) = a2;
  if ( *(this + 10) )
  {
    sub_5F8BA0(this);
    return (*(int (__thiscall **)(_DWORD *))(*this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5F58D0
// entry 005f58d0  size 109  status ok
//======================================================================

int __thiscall sub_5F58D0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-20h]
  int v3; // [esp+8h] [ebp-1Ch]
  int v4; // [esp+Ch] [ebp-18h]
  _DWORD v5[4]; // [esp+14h] [ebp-10h] BYREF

  v2 = *(this + 7);
  v3 = *(this + 6);
  v4 = *(this + 5);
  v5[0] = *(this + 4);
  v5[1] = v4;
  v5[2] = v3;
  v5[3] = v2;
  return sub_5F5940(v5);
}


//======================================================================
// sub_5F5940
// entry 005f5940  size 114  status ok
//======================================================================

int *__thiscall sub_5F5940(int *this, int *a2)
{
  int *result; // eax
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  result = this;
  if ( *(this + 1) )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
    v3 = *(this + 16);
    if ( v3 > 1 )
    {
      v6 = v4 + v3 * (v6 - v4);
      v7 = v5 + v3 * (v7 - v5);
    }
    return (int *)sub_5F9500(&v4);
  }
  return result;
}


//======================================================================
// sub_5F59C0
// entry 005f59c0  size 272  status ok
//======================================================================

int __thiscall sub_5F59C0(int *this, int a2, int a3, int a4, int a5, int *a6)
{
  int v7; // [esp+0h] [ebp-2Ch]
  int v8; // [esp+4h] [ebp-28h]
  int v9; // [esp+8h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-10h] BYREF
  int v13; // [esp+20h] [ebp-Ch]
  int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  if ( a6 )
  {
    if ( *a6 < 0 )
      v10 = *(this + 4);
    else
      v10 = *a6;
    v12 = v10;
    if ( a6[1] < 0 )
      v9 = *(this + 5);
    else
      v9 = a6[1];
    v13 = v9;
    if ( a6[2] < 0 )
      v8 = *(this + 6);
    else
      v8 = a6[2];
    v14 = v8;
    if ( a6[3] < 0 )
      v7 = *(this + 7);
    else
      v7 = a6[3];
    v15 = v7;
  }
  else
  {
    v12 = *(this + 4);
    v13 = *(this + 5);
    v14 = *(this + 6);
    v15 = *(this + 7);
  }
  sub_613F80(*(_DWORD *)(*(this + 1) + 424));
  return (*(int (__thiscall **)(int, _DWORD, int *, int, int, int))(*(_DWORD *)a2 + 20))(
           a2,
           *(_DWORD *)(*(this + 1) + 424),
           &v12,
           a3,
           a4,
           a5);
}


//======================================================================
// sub_5F5AD0
// entry 005f5ad0  size 225  status ok
//======================================================================

int __thiscall sub_5F5AD0(int *this, int a2, int a3, int a4, int a5, int *a6)
{
  int v7; // [esp+0h] [ebp-24h]
  int v8; // [esp+4h] [ebp-20h]
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+14h] [ebp-10h] BYREF
  int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]
  int v14; // [esp+20h] [ebp-4h]

  if ( a6 )
  {
    if ( *a6 < 0 )
      v10 = *(this + 4);
    else
      v10 = *a6;
    v11 = v10;
    if ( a6[1] < 0 )
      v9 = *(this + 5);
    else
      v9 = a6[1];
    v12 = v9;
    if ( a6[2] < 0 )
      v8 = *(this + 6);
    else
      v8 = a6[2];
    v13 = v8;
    if ( a6[3] < 0 )
      v7 = *(this + 7);
    else
      v7 = a6[3];
    v14 = v7;
  }
  else
  {
    v11 = *(this + 4);
    v12 = *(this + 5);
    v13 = *(this + 6);
    v14 = *(this + 7);
  }
  return sub_625350(&v11, a3, a4, a5);
}


//======================================================================
// sub_5F5BF0
// entry 005f5bf0  size 70  status ok
//======================================================================

_DWORD *__thiscall sub_5F5BF0(_DWORD *this)
{
  sub_5EAAF0(this);
  *this = &sciProp::`vftable';
  *(this + 95) = 0;
  *(this + 96) = 0;
  *(this + 94) = 4;
  return this;
}


//======================================================================
// sub_5F5C40
// entry 005f5c40  size 128  status ok
//======================================================================

void __thiscall sub_5F5C40(_DWORD *this)
{
  *this = &sciProp::`vftable';
  if ( *(this + 1) )
    sub_5F8E60(this);
  sub_5F5DF0(0);
  sub_5F5D50(0);
  sub_5EAC00(this);
}


//======================================================================
// sub_5F5CC0
// entry 005f5cc0  size 43  status ok
//======================================================================

ATL::CAtlWinModule *__thiscall sub_5F5CC0(ATL::CAtlWinModule *this)
{
  ATL::CAtlWinModule *result; // eax

  ATL::CAtlWinModule::~CAtlWinModule(this);
  result = this;
  if ( *((_DWORD *)this + 1) )
    return (ATL::CAtlWinModule *)sub_5F8E20(this);
  return result;
}


//======================================================================
// sub_5F5CF0
// entry 005f5cf0  size 89  status ok
//======================================================================

int __thiscall sub_5F5CF0(int this)
{
  int result; // eax

  result = Concurrency::details::VirtualProcessorRoot::IsRootRemoved((Concurrency::details::VirtualProcessorRoot *)this);
  if ( !(_BYTE)result )
  {
    if ( *(_DWORD *)(this + 380) )
      sub_5FC250(*(_DWORD *)(this + 380));
    result = this;
    if ( *(_DWORD *)(this + 384) )
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 384) + 8))(*(_DWORD *)(this + 384));
  }
  return result;
}


//======================================================================
// sub_5F5D50
// entry 005f5d50  size 151  status ok
//======================================================================

int __thiscall sub_5F5D50(_DWORD *this, int a2)
{
  int result; // eax
  void (__thiscall ***v4)(_DWORD, int); // [esp+10h] [ebp-4h]

  if ( *(this + 96) )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))*(this + 96);
    *(this + 96) = 0;
    if ( v4 )
      (**v4)(v4, 1);
  }
  *(this + 96) = a2;
  result = (int)this;
  if ( *(this + 96) )
    return (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD))(*(_DWORD *)*(this + 96) + 4))(*(this + 96), this, 0);
  return result;
}


//======================================================================
// sub_5F5DF0
// entry 005f5df0  size 119  status ok
//======================================================================

void (__thiscall ****__thiscall sub_5F5DF0(
        void (__thiscall ****this)(_DWORD, _DWORD),
        void (__thiscall ***a2)(_DWORD, _DWORD)))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax

  if ( *(this + 95) )
    (***(this + 95))(*(this + 95), 1);
  *(this + 95) = a2;
  result = this;
  if ( *(this + 95) )
    return (void (__thiscall ****)(_DWORD, _DWORD))sub_5FC220(this);
  return result;
}


//======================================================================
// sub_5F5E70
// entry 005f5e70  size 62  status ok
//======================================================================

int __thiscall sub_5F5E70(CMFCToolBarsCustomizeDialog *this, int a2)
{
  int result; // eax
  unsigned int Flags; // [esp+4h] [ebp-4h]

  Flags = CMFCToolBarsCustomizeDialog::GetFlags(this);
  result = sub_5EB150(this, a2);
  if ( Flags != a2 )
    return (*(int (__thiscall **)(CMFCToolBarsCustomizeDialog *))(*(_DWORD *)this + 188))(this);
  return result;
}


//======================================================================
// sub_5F5EB0
// entry 005f5eb0  size 105  status ok
//======================================================================

int __thiscall sub_5F5EB0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(this + 1) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
    sub_5F8E60(this);
  }
  result = sub_5F5860(this, a2);
  if ( *(this + 10) )
  {
    sub_5F8E20(this);
    return (*(int (__thiscall **)(_DWORD *))(*this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_5F5F50
// entry 005f5f50  size 70  status ok
//======================================================================

_DWORD *__thiscall sub_5F5F50(_DWORD *this)
{
  sub_5F5BF0(this);
  *this = &sciActor::`vftable';
  *(this + 99) = 0;
  *(this + 97) = 4;
  *(this + 98) = 25;
  return this;
}


//======================================================================
// sub_5F5FA0
// entry 005f5fa0  size 94  status ok
//======================================================================

void __thiscall sub_5F5FA0(_DWORD *this)
{
  *this = &sciActor::`vftable';
  sub_5F6050(0);
  sub_5F5C40(this);
}


//======================================================================
// sub_5F6000
// entry 005f6000  size 71  status ok
//======================================================================

int __thiscall sub_5F6000(Concurrency::details::VirtualProcessorRoot *this)
{
  int result; // eax

  result = Concurrency::details::VirtualProcessorRoot::IsRootRemoved(this);
  if ( !(_BYTE)result )
  {
    result = sub_5F5CF0((int)this);
    if ( *((_DWORD *)this + 99) )
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 99) + 8))(*((_DWORD *)this + 99));
  }
  return result;
}


//======================================================================
// sub_5F6050
// entry 005f6050  size 130  status ok
//======================================================================

int __thiscall sub_5F6050(void (__thiscall ****this)(_DWORD, _DWORD), void (__thiscall ***a2)(_DWORD, _DWORD))
{
  int result; // eax

  if ( *(this + 99) )
    (***(this + 99))(*(this + 99), 1);
  *(this + 99) = a2;
  result = (int)this;
  if ( *(this + 99) )
    return ((int (__thiscall *)(_DWORD, _DWORD))(**(this + 99))[1])(*(this + 99), this);
  return result;
}


//======================================================================
// sub_5F6130
// entry 005f6130  size 118  status ok
//======================================================================

_BYTE *__thiscall sub_5F6130(_BYTE *this)
{
  sub_5F49D0((int)this);
  *(_DWORD *)this = &sciRect::`vftable';
  *(this + 72) = 0;
  *(this + 73) = 0;
  *(this + 80) = -1;
  *((_DWORD *)this + 21) = 4;
  *(this + 74) = 0;
  *(this + 75) = 0;
  *(this + 76) = 0;
  *(this + 77) = 0;
  *(this + 78) = 0;
  *(this + 79) = 0;
  *(this + 88) = 0;
  *(this + 89) = 0;
  return this;
}


//======================================================================
// sub_5F61D0
// entry 005f61d0  size 58  status ok
//======================================================================

int __thiscall sub_5F61D0(CPaneContainer *this, int a2, int a3, int a4, int a5, int a6, struct CPaneDivider *a7)
{
  sub_5F50C0(this, a4, a5, a6, a7);
  return (*(int (__thiscall **)(CPaneContainer *, int, int))(*(_DWORD *)this + 120))(this, a2, a3);
}


//======================================================================
// sub_5F6210
// entry 005f6210  size 45  status ok
//======================================================================

int __thiscall sub_5F6210(_DWORD *this, int a2, int a3)
{
  sub_5F6B60(this);
  sub_5F5110(this, a2, a3);
  return sub_5F6B60(this);
}


//======================================================================
// sub_5F6240
// entry 005f6240  size 45  status ok
//======================================================================

int __thiscall sub_5F6240(void *this, int a2, int a3)
{
  sub_5F6B60(this);
  unknown_libname_667(a2, a3);
  return sub_5F6B60(this);
}


//======================================================================
// sub_5F6270
// entry 005f6270  size 51  status ok
//======================================================================

int __thiscall sub_5F6270(CMFCScanliner *this)
{
  int result; // eax

  result = CMFCScanliner::channels(this);
  if ( (_BYTE)result )
  {
    result = (int)sub_5F5440(this);
    if ( *((_DWORD *)this + 10) )
      return sub_5F6B60(this);
  }
  return result;
}


//======================================================================
// sub_5F62B0
// entry 005f62b0  size 51  status ok
//======================================================================

void __thiscall sub_5F62B0(CWnd *this)
{
  if ( sub_5F54A0((unsigned __int8 *)this) )
  {
    CWnd::EnableActiveAccessibility(this);
    if ( *((_DWORD *)this + 10) )
      sub_5F6B60(this);
  }
}


//======================================================================
// sub_5F62F0
// entry 005f62f0  size 242  status ok
//======================================================================

int __fastcall sub_5F62F0(int a1, int a2, unsigned __int8 a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-34h]
  int v6; // [esp+8h] [ebp-30h]
  int v7; // [esp+Ch] [ebp-2Ch]
  int v8; // [esp+14h] [ebp-24h]
  int v9; // [esp+18h] [ebp-20h]
  int v10; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-10h] BYREF
  int v12; // [esp+2Ch] [ebp-Ch]
  int v13; // [esp+30h] [ebp-8h]
  int v14; // [esp+34h] [ebp-4h]

  result = a1;
  if ( *(unsigned __int8 *)(a1 + 80) != a3 )
  {
    result = a1;
    *(_BYTE *)(a1 + 80) = a3;
    if ( *(_DWORD *)(a1 + 40) )
    {
      result = sub_5F54A0((unsigned __int8 *)a1);
      if ( (_BYTE)result )
      {
        if ( *(_BYTE *)(a1 + 88) )
        {
          v8 = *(_DWORD *)(a1 + 28) + 1;
          v9 = *(_DWORD *)(a1 + 24) + 1;
          v10 = *(_DWORD *)(a1 + 20) - 1;
          v11 = *(_DWORD *)(a1 + 16) - 1;
          v12 = v10;
          v13 = v9;
          v14 = v8;
        }
        else
        {
          v5 = *(_DWORD *)(a1 + 28);
          v6 = *(_DWORD *)(a1 + 24);
          v7 = *(_DWORD *)(a1 + 20);
          v11 = *(_DWORD *)(a1 + 16);
          v12 = v7;
          v13 = v6;
          v14 = v5;
        }
        return sub_5F9500(&v11);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5F63F0
// entry 005f63f0  size 17  status ok
//======================================================================

char __thiscall sub_5F63F0(_BYTE *this)
{
  return *(this + 80);
}


//======================================================================
// sub_5F6410
// entry 005f6410  size 18  status ok
//======================================================================

_BYTE *__thiscall sub_5F6410(_BYTE *this)
{
  *(this + 73) = 0;
  return this;
}


//======================================================================
// sub_5F6430
// entry 005f6430  size 85  status ok
//======================================================================

int __thiscall sub_5F6430(int this, int Buf2)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 73) || (result = memcmp((const void *)(this + 77), &Buf2, 3u)) != 0 )
  {
    *(_BYTE *)(this + 73) = 1;
    *(_WORD *)(this + 77) = Buf2;
    *(_BYTE *)(this + 79) = BYTE2(Buf2);
    return sub_5F6B60(this);
  }
  return result;
}


//======================================================================
// sub_5F6490
// entry 005f6490  size 57  status ok
//======================================================================

int __thiscall sub_5F6490(void *this, char a2, char a3, char a4)
{
  int v5; // [esp-4h] [ebp-Ch]
  __int16 v6; // [esp+4h] [ebp-4h]

  LOBYTE(v6) = a2;
  HIBYTE(v6) = a3;
  HIBYTE(v5) = HIBYTE(this);
  LOWORD(v5) = v6;
  BYTE2(v5) = a4;
  return sub_5F6430((int)this, v5);
}


//======================================================================
// sub_5F6510
// entry 005f6510  size 107  status ok
//======================================================================

int __thiscall sub_5F6510(_BYTE *this, int Buf2)
{
  int result; // eax

  result = memcmp(this + 74, &Buf2, 3u);
  if ( result )
  {
    *(this + 72) = (_BYTE)Buf2 || __PAIR16__(BYTE1(Buf2), 0) != BYTE2(Buf2);
    *((_WORD *)this + 37) = Buf2;
    *(this + 76) = BYTE2(Buf2);
    return sub_5F6B60(this);
  }
  return result;
}


//======================================================================
// sub_5F6580
// entry 005f6580  size 57  status ok
//======================================================================

int __thiscall sub_5F6580(_BYTE *this, char a2, char a3, char a4)
{
  int v5; // [esp-4h] [ebp-Ch]
  __int16 v6; // [esp+4h] [ebp-4h]

  LOBYTE(v6) = a2;
  HIBYTE(v6) = a3;
  HIBYTE(v5) = HIBYTE(this);
  LOWORD(v5) = v6;
  BYTE2(v5) = a4;
  return sub_5F6510(this, v5);
}


//======================================================================
// sub_5F6640
// entry 005f6640  size 472  status ok
//======================================================================

int __thiscall sub_5F6640(int this)
{
  struct Concurrency::details::SchedulingRing *OwningRing; // eax
  int result; // eax
  struct Concurrency::details::SchedulingRing *v3; // eax
  struct Concurrency::details::SchedulingRing *v4; // eax
  int v6; // [esp+8h] [ebp-2Ch]
  int v7; // [esp+Ch] [ebp-28h]
  int v8; // [esp+10h] [ebp-24h]
  int v9; // [esp+10h] [ebp-24h]
  int v10; // [esp+14h] [ebp-20h]
  int v11; // [esp+18h] [ebp-1Ch]
  int v12; // [esp+1Ch] [ebp-18h]
  int v13; // [esp+20h] [ebp-14h]
  int v14; // [esp+24h] [ebp-10h]
  int v15; // [esp+28h] [ebp-Ch]
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]
  int v18; // [esp+30h] [ebp-4h]

  LOBYTE(v13) = *(_BYTE *)(this + 77);
  *(_WORD *)((char *)&v13 + 1) = *(_WORD *)(this + 78);
  HIBYTE(v13) = sub_5F63F0((_BYTE *)this);
  if ( *(_BYTE *)(this + 89) )
  {
    v10 = *(_DWORD *)(this + 24);
    v16 = *(_DWORD *)(this + 20);
    v11 = *(_DWORD *)(this + 16);
  }
  else
  {
    v10 = *(_DWORD *)(this + 16);
    v16 = *(_DWORD *)(this + 20);
    v11 = *(_DWORD *)(this + 24);
  }
  v14 = *(_DWORD *)(this + 28);
  v17 = v14 - v16;
  v8 = v11 - v10;
  if ( v14 - v16 >= 0 )
  {
    v12 = 1;
  }
  else
  {
    v17 = v16 - v14;
    v12 = -1;
  }
  if ( v8 >= 0 )
  {
    v15 = 1;
  }
  else
  {
    v8 = v10 - v11;
    v15 = -1;
  }
  v18 = 2 * v17;
  v9 = 2 * v8;
  OwningRing = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
  sub_5F9330(v10, v16, v13, OwningRing);
  if ( v9 <= v18 )
  {
    result = v9 - (v18 >> 1);
    v6 = result;
    while ( v16 != v14 )
    {
      if ( v6 >= 0 )
      {
        v10 += v15;
        v6 -= v18;
      }
      v16 += v12;
      v6 += v9;
      v4 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
      result = sub_5F9330(v10, v16, v13, v4);
    }
  }
  else
  {
    result = v9 >> 1;
    v7 = v18 - (v9 >> 1);
    while ( v10 != v11 )
    {
      if ( v7 >= 0 )
      {
        v16 += v12;
        v7 -= v9;
      }
      v10 += v15;
      v7 += v18;
      v3 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
      result = sub_5F9330(v10, v16, v13, v3);
    }
  }
  return result;
}


//======================================================================
// sub_5F6820
// entry 005f6820  size 693  status ok
//======================================================================

int __thiscall sub_5F6820(int this, int *a2)
{
  int result; // eax
  struct Concurrency::details::SchedulingRing *OwningRing; // eax
  struct Concurrency::details::SchedulingRing *v4; // eax
  struct Concurrency::details::SchedulingRing *v5; // eax
  struct Concurrency::details::SchedulingRing *v6; // eax
  struct Concurrency::details::SchedulingRing *v7; // eax
  int v9; // [esp+8h] [ebp-4Ch]
  int v10; // [esp+Ch] [ebp-48h]
  int v11; // [esp+10h] [ebp-44h]
  int v12; // [esp+18h] [ebp-3Ch]
  int v13; // [esp+1Ch] [ebp-38h]
  int v14; // [esp+20h] [ebp-34h]
  int v15; // [esp+2Ch] [ebp-28h] BYREF
  int v16; // [esp+30h] [ebp-24h]
  int v17; // [esp+34h] [ebp-20h]
  int v18; // [esp+38h] [ebp-1Ch]
  int v19[2]; // [esp+3Ch] [ebp-18h] BYREF
  int v20; // [esp+44h] [ebp-10h]
  int v21; // [esp+48h] [ebp-Ch]
  int v22; // [esp+4Ch] [ebp-8h]
  int i; // [esp+50h] [ebp-4h]

  result = CMFCScanliner::channels((CMFCScanliner *)this);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(this + 88) )
    {
      v12 = *(_DWORD *)(this + 28) + 1;
      v13 = *(_DWORD *)(this + 24) + 1;
      v14 = *(_DWORD *)(this + 20) - 1;
      v15 = *(_DWORD *)(this + 16) - 1;
      v16 = v14;
      v17 = v13;
      v18 = v12;
    }
    else
    {
      v9 = *(_DWORD *)(this + 28);
      v10 = *(_DWORD *)(this + 24);
      v11 = *(_DWORD *)(this + 20);
      v15 = *(_DWORD *)(this + 16);
      v16 = v11;
      v17 = v10;
      v18 = v9;
    }
    v19[0] = *a2;
    v19[1] = a2[1];
    v20 = a2[2];
    v21 = a2[3];
    ++v20;
    ++v21;
    sub_5EC3A0(&v15, &v15, v19);
    if ( *(_BYTE *)(this + 88) )
    {
      result = this;
      if ( *(_BYTE *)(this + 73) )
        return sub_5F6640(this);
    }
    else
    {
      LOWORD(v22) = *(_WORD *)(this + 74);
      BYTE2(v22) = *(_BYTE *)(this + 76);
      HIBYTE(v22) = sub_5F63F0((_BYTE *)this);
      if ( *(_BYTE *)(this + 72) )
      {
        for ( i = v16; i < v18; ++i )
        {
          OwningRing = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          sub_5F9380(v15, v17 - 1, i, v22, OwningRing);
        }
      }
      LOBYTE(v22) = *(_BYTE *)(this + 77);
      *(_WORD *)((char *)&v22 + 1) = *(_WORD *)(this + 78);
      HIBYTE(v22) = sub_5F63F0((_BYTE *)this);
      result = this;
      if ( *(_BYTE *)(this + 73) )
      {
        if ( v16 == *(_DWORD *)(this + 20) )
        {
          v4 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          sub_5F9380(v15, v17 - 1, *(_DWORD *)(this + 20), v22, v4);
        }
        if ( v18 - 1 == *(_DWORD *)(this + 28) - 1 )
        {
          v5 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          sub_5F9380(v15, v17 - 1, *(_DWORD *)(this + 28) - 1, v22, v5);
        }
        if ( v15 == *(_DWORD *)(this + 16) )
        {
          v6 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          sub_5F93E0(*(_DWORD *)(this + 16), v16, v18 - 1, v22, v6);
        }
        result = v17 - 1;
        if ( v17 - 1 == *(_DWORD *)(this + 24) - 1 )
        {
          v7 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          return sub_5F93E0(*(_DWORD *)(this + 24) - 1, v16, v18 - 1, v22, v7);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5F6B60
// entry 005f6b60  size 183  status ok
//======================================================================

_DWORD *__thiscall sub_5F6B60(_DWORD *this)
{
  _DWORD *result; // eax
  unsigned __int8 v3; // [esp+6h] [ebp-2h]

  if ( *((_BYTE *)this + 88) )
  {
    --*(this + 4);
    ++*(this + 6);
    --*(this + 5);
    ++*(this + 7);
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
  v3 = *((_BYTE *)this + 88);
  result = (_DWORD *)v3;
  if ( v3 )
  {
    ++*(this + 4);
    --*(this + 6);
    ++*(this + 5);
    --*(this + 7);
    return this;
  }
  return result;
}


//======================================================================
// sub_5F6C70
// entry 005f6c70  size 190  status ok
//======================================================================

void __thiscall sub_5F6C70(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &FourSidedRect::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 18) )
    {
      (***((void (__thiscall ****)(_DWORD, int))this + i + 18))(*((_DWORD *)this + i + 18), 1);
      *((_DWORD *)this + i + 18) = 0;
    }
  }
  sub_5F4AD0(this);
}


//======================================================================
// sub_5F6D30
// entry 005f6d30  size 210  status ok
//======================================================================

_DWORD *__thiscall sub_5F6D30(_DWORD *this)
{
  _DWORD *result; // eax
  _BYTE *v2; // [esp+4h] [ebp-20h]
  _BYTE *v4; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  result = sub_5F5010(this);
  for ( i = 0; i < 4; ++i )
  {
    v4 = operator new(0x5Cu);
    if ( v4 )
      v2 = sub_5F6130(v4);
    else
      v2 = 0;
    *(this + i + 18) = v2;
    *(_DWORD *)(*(this + i + 18) + 4) = *(this + 1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 18) + 64))(*(this + i + 18));
    result = (_DWORD *)(i + 1);
  }
  return result;
}


//======================================================================
// sub_5F6E10
// entry 005f6e10  size 57  status ok
//======================================================================

int __thiscall sub_5F6E10(unsigned __int8 *this, int a2, int a3)
{
  int result; // eax

  unknown_libname_667(a2, a3);
  result = sub_5F54A0(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 116))(this);
  return result;
}


//======================================================================
// sub_5F6E50
// entry 005f6e50  size 88  status ok
//======================================================================

int __thiscall sub_5F6E50(unsigned __int8 *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // [esp-4h] [ebp-8h]

  sub_5F5110(this, a2, a3);
  v5 = sub_5F5590(this);
  v3 = sub_5F5550(this);
  (*(void (__thiscall **)(unsigned __int8 *, int, int))(*(_DWORD *)this + 120))(this, v3, v5);
  result = sub_5F54A0(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 116))(this);
  return result;
}


//======================================================================
// sub_5F6EB0
// entry 005f6eb0  size 130  status ok
//======================================================================

int __thiscall sub_5F6EB0(unsigned __int8 *this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5F5300(this, a2);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 18) )
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 18) + 108))(*((_DWORD *)this + i + 18), a2 + 2);
  }
  result = sub_5F54A0(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 116))(this);
  return result;
}


//======================================================================
// sub_5F6F40
// entry 005f6f40  size 357  status ok
//======================================================================

int __thiscall sub_5F6F40(int this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5F5440((_BYTE *)this);
  result = this;
  if ( *(_DWORD *)(this + 72) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 72) + 68))(
      *(_DWORD *)(this + 72),
      *(_DWORD *)(this + 16),
      *(_DWORD *)(this + 20));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 72) + 120))(
      *(_DWORD *)(this + 72),
      1,
      *(_DWORD *)(this + 28) - *(_DWORD *)(this + 20));
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 76) + 68))(
      *(_DWORD *)(this + 76),
      *(_DWORD *)(this + 16),
      *(_DWORD *)(this + 20));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 76) + 120))(
      *(_DWORD *)(this + 76),
      *(_DWORD *)(this + 24) - *(_DWORD *)(this + 16),
      1);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 80) + 68))(
      *(_DWORD *)(this + 80),
      *(_DWORD *)(this + 24),
      *(_DWORD *)(this + 20));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 80) + 120))(
      *(_DWORD *)(this + 80),
      1,
      *(_DWORD *)(this + 28) - *(_DWORD *)(this + 20));
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 84) + 68))(
      *(_DWORD *)(this + 84),
      *(_DWORD *)(this + 16),
      *(_DWORD *)(this + 28));
    result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 84) + 120))(
               *(_DWORD *)(this + 84),
               *(_DWORD *)(this + 24) - *(_DWORD *)(this + 16),
               1);
    for ( i = 0; i < 4; ++i )
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 72) + 116))(*(_DWORD *)(this + 4 * i + 72));
  }
  return result;
}


//======================================================================
// sub_5F70B0
// entry 005f70b0  size 87  status ok
//======================================================================

void __thiscall sub_5F70B0(CWnd *this)
{
  int i; // [esp+4h] [ebp-4h]

  CWnd::EnableActiveAccessibility(this);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 18) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 18) + 112))(*((_DWORD *)this + i + 18));
  }
}


//======================================================================
// sub_5F71F0
// entry 005f71f0  size 102  status ok
//======================================================================

_DWORD *__thiscall sub_5F71F0(_DWORD *this, char a2, int a3)
{
  if ( a3 )
    CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(a2, a3, 640, 480);
  else
    CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(
      a2,
      *(_DWORD *)(dword_15E55E8 + 20),
      640,
      480);
  *this = &sciDialogBox::`vftable';
  *(this + 109) = 0;
  *((_BYTE *)this + 440) = 0;
  return this;
}


//======================================================================
// sub_5F7260
// entry 005f7260  size 136  status ok
//======================================================================

int __thiscall sub_5F7260(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&sciDialogBox::`vftable';
  if ( *(this + 109) )
    (***(this + 109))(*(this + 109), 1);
  return sub_5F79F0();
}


//======================================================================
// sub_5F72F0
// entry 005f72f0  size 46  status ok
//======================================================================

int __thiscall sub_5F72F0(_BYTE *this, int a2)
{
  int result; // eax

  result = sub_5F7E80(a2);
  if ( *(this + 440) )
  {
    *(_BYTE *)(a2 + 4) = 1;
    return a2;
  }
  return result;
}


//======================================================================
// sub_5F7340
// entry 005f7340  size 147  status ok
//======================================================================

int __thiscall sub_5F7340(_DWORD **this, __int16 a2, __int16 a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v9; // [esp+8h] [ebp-8h]

  v3 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
  v9 = (v3 - sub_5F8590(this)) / 2;
  v4 = sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20));
  v5 = sub_5F85B0(this);
  result = sub_5F8420(v9 + a2, (v4 - v5) / 2 + a3);
  if ( *(this + 109) )
  {
    v7 = sub_5F8550(this);
    return sub_5ECC60(*(this + 109), v7);
  }
  return result;
}


//======================================================================
// sub_5F73E0
// entry 005f73e0  size 255  status ok
//======================================================================

int __thiscall sub_5F73E0(void **this, int a2, int a3, int a4, int a5)
{
  void *v5; // eax
  int v6; // eax
  void *v8; // [esp+4h] [ebp-24h]
  void *v10; // [esp+Ch] [ebp-1Ch]

  if ( !*(this + 109) )
  {
    v10 = operator new(0x1D0u);
    if ( v10 )
    {
      sub_5EC5A0(v10);
      v8 = v5;
    }
    else
    {
      v8 = 0;
    }
    *(this + 109) = v8;
  }
  *((_DWORD *)*(this + 109) + 1) = this;
  v6 = sub_5F8550(this);
  sub_5EC8F0(*(this + 109), a2, a3, v6 - 20, 20, a4 + 7, a5 + 3, 3, 17, -1);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 109) + 116))(*(this + 109));
}


//======================================================================
// sub_5F79F0
// entry 005f79f0  size 860  status ok
//======================================================================

void __thiscall sub_5F79F0(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+1Ch] [ebp-2Ch]
  void (__thiscall ***v3)(_DWORD, int); // [esp+24h] [ebp-24h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+2Ch] [ebp-1Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+38h] [ebp-10h]

  *(_DWORD *)this = &sciPlane::`vftable';
  sub_5FB0C0(this);
  sub_5F9A80(this);
  if ( (unsigned __int8)sub_5F8970(this) && unknown_libname_841(dword_15E55E8) == this )
    sub_5F3F90((_DWORD *)dword_15E55E8, *(_DWORD *)(this + 368));
  sub_5F9B20(this);
  sub_5F8CE0(*(_DWORD *)(this + 380));
  if ( CRecentFileList::GetSize((CRecentFileList *)(this + 316)) )
    sub_5E9F20("cast.Size() == 0", "..\\scilib\\sciplane.cpp", 59);
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 316)) )
  {
    v5 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    if ( v5 )
      (**v5)(v5, 1);
  }
  if ( *(_DWORD *)(this + 332) )
    operator delete(*(void **)(this + 332));
  if ( CRecentFileList::GetSize((CRecentFileList *)(this + 344)) )
    sub_5E9F20("props.Size() == 0", "..\\scilib\\sciplane.cpp", 66);
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 344)) )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    if ( v4 )
      (**v4)(v4, 1);
  }
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 380);
  if ( v3 )
    (**v3)(v3, 1);
  if ( *(_BYTE *)(this + 360) )
  {
    v2 = *(void (__thiscall ****)(_DWORD, int))(this + 424);
    if ( v2 )
      (**v2)(v2, 1);
  }
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  sub_60C6A0();
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_5F7D50
// entry 005f7d50  size 289  status ok
//======================================================================

int __thiscall sub_5F7D50(int this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+10h] [ebp-10h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+1Ch] [ebp-4h]

  sub_5FB0C0(this);
  sub_5F8CE0(*(_DWORD *)(this + 380));
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 316)) )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    if ( v4 )
      (**v4)(v4, 1);
  }
  if ( *(_DWORD *)(this + 332) )
    operator delete(*(void **)(this + 332));
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 340) = 0;
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 344)) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    if ( v3 )
      (**v3)(v3, 1);
  }
  *(_DWORD *)(this + 364) = 0;
  return sub_5F9A80(this);
}


//======================================================================
// sub_5F7E80
// entry 005f7e80  size 1204  status ok
//======================================================================

char __thiscall sub_5F7E80(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v9; // [esp+8h] [ebp-20h]
  Concurrency::details::VirtualProcessorRoot *v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]
  int i; // [esp+24h] [ebp-4h]

  if ( this )
  {
    if ( *(_DWORD *)(a2 + 24) == 3 )
    {
      *(_DWORD *)(this + 296) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(this + 300) = *(_DWORD *)(a2 + 12);
    }
    LOBYTE(v2) = sub_5F88F0(this);
    if ( !(_BYTE)v2 )
    {
      if ( *(_DWORD *)(this + 364) )
      {
        if ( (unsigned __int8)sub_60C9E0(*(_DWORD *)(this + 364)) )
        {
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 364) + 60))(*(_DWORD *)(this + 364), a2);
        }
        else
        {
          sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 119);
          sub_5F89F0(0);
        }
      }
      if ( *(_DWORD *)(this + 336) < CRecentFileList::GetSize((CRecentFileList *)(this + 316)) )
      {
        if ( *(_DWORD *)(this + 332) )
          operator delete(*(void **)(this + 332));
        if ( 2 * CRecentFileList::GetSize((CRecentFileList *)(this + 316)) >= 20 )
          v9 = 2 * CRecentFileList::GetSize((CRecentFileList *)(this + 316));
        else
          v9 = 20;
        *(_DWORD *)(this + 336) = v9;
        *(_DWORD *)(this + 332) = operator new(4 * *(_DWORD *)(this + 336));
      }
      v14 = 0;
      *(_DWORD *)(this + 340) = 0;
      while ( v14 < CRecentFileList::GetSize((CRecentFileList *)(this + 316)) )
      {
        v3 = sub_60CA40(v14);
        v11 = (Concurrency::details::VirtualProcessorRoot *)_RTDynamicCast(
                                                              v3,
                                                              0,
                                                              &sciObject `RTTI Type Descriptor',
                                                              &sciFeature `RTTI Type Descriptor',
                                                              0);
        if ( v11 && !Concurrency::details::VirtualProcessorRoot::IsRootRemoved(v11) )
          *(_DWORD *)(*(_DWORD *)(this + 332) + 4 * (*(_DWORD *)(this + 340))++) = v11;
        ++v14;
      }
      for ( i = 0; i < *(_DWORD *)(this + 340); ++i )
      {
        if ( *(_DWORD *)(*(_DWORD *)(this + 332) + 4 * i) )
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 332) + 4 * i) + 60))(
            *(_DWORD *)(*(_DWORD *)(this + 332) + 4 * i),
            a2);
      }
      *(_DWORD *)(this + 340) = 0;
      v2 = *(_DWORD *)(a2 + 24);
      switch ( v2 )
      {
        case 1:
          if ( *(_DWORD *)(this + 420) )
          {
            CHandleMap::LookupPermanent((CHandleMap *)dword_15E55E8, (void *)this);
            CHandleMap::LookupPermanent((CHandleMap *)dword_15E55E8, (void *)this);
            LOBYTE(v2) = sub_5F9A80(this);
            if ( !*(_BYTE *)(this + 292) )
            {
              LOBYTE(v2) = a2;
              if ( *(_DWORD *)(a2 + 12) <= *(_DWORD *)(this + 288) )
              {
                LOBYTE(v2) = a2;
                if ( *(int *)(a2 + 12) >= 0 )
                {
                  v2 = sub_5F8550(this) - 4;
                  if ( *(_DWORD *)(a2 + 8) <= v2 && *(int *)(a2 + 8) >= 0 )
                  {
                    *(_BYTE *)(this + 292) = 1;
                    *(_DWORD *)(this + 304) = *(_DWORD *)(a2 + 8);
                    *(_DWORD *)(this + 308) = *(_DWORD *)(a2 + 12);
                    LOBYTE(v2) = sub_5F41C0((_DWORD *)dword_15E55E8, this);
                    *(_BYTE *)(a2 + 4) = 1;
                  }
                }
              }
            }
          }
          break;
        case 2:
          LOBYTE(v2) = this;
          if ( *(_BYTE *)(this + 292) )
          {
            *(_BYTE *)(this + 292) = 0;
            sub_5F41C0((_DWORD *)dword_15E55E8, 0);
            *(_BYTE *)(a2 + 4) = 1;
            LOBYTE(v2) = a2;
          }
          break;
        case 3:
          LOBYTE(v2) = this;
          if ( *(_BYTE *)(this + 292) )
          {
            v12 = unknown_libname_619(this) - (*(_DWORD *)(this + 304) - *(_DWORD *)(a2 + 8));
            v13 = sub_5F84F0(this) - (*(_DWORD *)(this + 308) - *(_DWORD *)(a2 + 12));
            if ( v12 < 0 )
              v12 = 0;
            if ( v13 < 0 )
              v13 = 0;
            v4 = v12 + sub_5F8590(this);
            if ( v4 > sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20)) )
            {
              v5 = sub_5F8550(*(_DWORD *)(dword_15E55E8 + 20));
              v12 = v5 - sub_5F8590(this);
            }
            v6 = v13 + sub_5F85B0(this);
            if ( v6 > sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20)) )
            {
              v7 = sub_5F8570(*(_DWORD *)(dword_15E55E8 + 20));
              v13 = v7 - sub_5F85B0(this);
            }
            LOBYTE(v2) = sub_5F8420(v12, v13);
            *(_BYTE *)(a2 + 4) = 1;
          }
          break;
      }
    }
  }
  else
  {
    LOBYTE(v2) = sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 104);
  }
  return v2;
}


//======================================================================
// sub_5F8340
// entry 005f8340  size 130  status ok
//======================================================================

char __thiscall sub_5F8340(int this)
{
  int Size; // eax
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  if ( this )
  {
    for ( i = 0; ; ++i )
    {
      Size = CRecentFileList::GetSize((CRecentFileList *)(this + 344));
      if ( i >= Size )
        break;
      v4 = sub_60CA40(i);
      if ( v4 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 184))(v4);
    }
  }
  else
  {
    LOBYTE(Size) = sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 217);
  }
  return Size;
}


//======================================================================
// sub_5F83D0
// entry 005f83d0  size 73  status ok
//======================================================================

int __thiscall sub_5F83D0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( *(this + 69) != a2 || (result = *(this + 70), result != a3) )
  {
    *(this + 69) = a2;
    *(this + 70) = a3;
    return sub_5F95E0(this);
  }
  return result;
}


//======================================================================
// sub_5F8420
// entry 005f8420  size 169  status ok
//======================================================================

int __thiscall sub_5F8420(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  if ( !(unsigned __int8)sub_5F88F0(this) )
    sub_5F9A80(this);
  v5 = *(this + 68) - *(this + 66);
  v6 = *(this + 67) - *(this + 65);
  *(this + 66) = a2;
  *(this + 65) = a3;
  *(this + 68) = v5 + *(this + 66);
  *(this + 67) = v6 + *(this + 65);
  result = sub_5F88F0(this);
  if ( !(_BYTE)result )
    return sub_5F9A80(this);
  return result;
}


//======================================================================
// sub_5F84F0
// entry 005f84f0  size 20  status ok
//======================================================================

int __thiscall sub_5F84F0(_DWORD *this)
{
  return *(this + 65);
}


//======================================================================
// sub_5F8510
// entry 005f8510  size 63  status ok
//======================================================================

int __thiscall sub_5F8510(_DWORD *this, int a2, int a3)
{
  *(this + 68) = a2 + *(this + 66);
  *(this + 67) = a3 + *(this + 65);
  return sub_5F9A80(this);
}


//======================================================================
// sub_5F8550
// entry 005f8550  size 29  status ok
//======================================================================

int __thiscall sub_5F8550(_DWORD *this)
{
  return *(this + 68) - *(this + 66);
}


//======================================================================
// sub_5F8570
// entry 005f8570  size 29  status ok
//======================================================================

int __thiscall sub_5F8570(_DWORD *this)
{
  return *(this + 67) - *(this + 65);
}


//======================================================================
// sub_5F8590
// entry 005f8590  size 29  status ok
//======================================================================

int __thiscall sub_5F8590(_DWORD *this)
{
  return *(this + 102) - *(this + 100);
}


//======================================================================
// sub_5F85B0
// entry 005f85b0  size 29  status ok
//======================================================================

int __thiscall sub_5F85B0(_DWORD *this)
{
  return *(this + 103) - *(this + 101);
}


//======================================================================
// sub_5F85D0
// entry 005f85d0  size 207  status ok
//======================================================================

int __thiscall sub_5F85D0(int this)
{
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 424) + 48))(*(_DWORD *)(this + 424)) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 424) + 8))(
      *(_DWORD *)(this + 424),
      *(_DWORD *)(this + 424));
  CHandleMap::LookupPermanent((CHandleMap *)dword_15E55E8, (void *)this);
  CHandleMap::LookupPermanent((CHandleMap *)dword_15E55E8, (void *)this);
  if ( (unsigned __int8)sub_5F8970(this) && (unsigned __int8)sub_5F88F0(this) )
  {
    if ( !*(_DWORD *)(this + 368) )
      *(_DWORD *)(this + 368) = unknown_libname_841(dword_15E55E8);
    sub_5F3F90((_DWORD *)dword_15E55E8, this);
  }
  *(_BYTE *)(this + 312) = 1;
  return sub_5F9A80(this);
}


//======================================================================
// sub_5F86A0
// entry 005f86a0  size 117  status ok
//======================================================================

bool __thiscall sub_5F86A0(_DWORD *this, int a2)
{
  return (unsigned __int8)sub_5F8910(this)
      && *(_DWORD *)(a2 + 8) >= *(this + 66)
      && *(_DWORD *)(a2 + 8) <= *(this + 68)
      && *(_DWORD *)(a2 + 12) >= *(this + 65)
      && *(_DWORD *)(a2 + 12) <= *(this + 67);
}


//======================================================================
// sub_5F8720
// entry 005f8720  size 175  status ok
//======================================================================

int __thiscall sub_5F8720(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(this + 5));
    if ( i >= result )
      break;
    v3 = sub_60CA40(i);
    if ( sub_602810(v3) == 3 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 216))(v3, 0);
    if ( sub_602810(v3) == 7 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 216))(v3, 4);
  }
  if ( *(this + 105) )
  {
    result = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 12))(this);
    if ( (_BYTE)result )
      return sub_5F8720(*(this + 105));
  }
  return result;
}


//======================================================================
// sub_5F87D0
// entry 005f87d0  size 280  status ok
//======================================================================

char __thiscall sub_5F87D0(int this)
{
  char result; // al

  if ( !this )
    return sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 351);
  result = sub_5F88F0(this);
  if ( !result )
  {
    sub_5F8720((_DWORD *)this);
    if ( (unsigned __int8)sub_5F8910(this) && CMediaType::FormatLength((CMediaType *)dword_15E55E8) == this )
      sub_5F41C0((_DWORD *)dword_15E55E8, 0);
    if ( (unsigned __int8)sub_5F8970(this) && (unsigned __int8)sub_5F8910(this) )
    {
      if ( unknown_libname_841(dword_15E55E8) == this )
        sub_5F3F90((_DWORD *)dword_15E55E8, *(_DWORD *)(this + 368));
      else
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_15E55E8 + 120))(
          dword_15E55E8,
          this,
          *(_DWORD *)(this + 368));
      *(_DWORD *)(this + 368) = 0;
    }
    *(_BYTE *)(this + 312) = 0;
    *(_DWORD *)(this + 296) = -1;
    *(_DWORD *)(this + 300) = -1;
    return sub_5F9A80(this);
  }
  return result;
}


//======================================================================
// sub_5F88F0
// entry 005f88f0  size 28  status ok
//======================================================================

BOOL __thiscall sub_5F88F0(unsigned __int8 *this)
{
  return *(this + 312) == 0;
}


//======================================================================
// sub_5F8910
// entry 005f8910  size 20  status ok
//======================================================================

char __thiscall sub_5F8910(_BYTE *this)
{
  return *(this + 312);
}


//======================================================================
// sub_5F8970
// entry 005f8970  size 20  status ok
//======================================================================

char __thiscall sub_5F8970(_BYTE *this)
{
  return *(this + 284);
}


//======================================================================
// sub_5F8990
// entry 005f8990  size 29  status ok
//======================================================================

_BYTE *__thiscall sub_5F8990(_BYTE *this)
{
  sub_5F87D0((int)this);
  *(this + 416) = 1;
  return this;
}


//======================================================================
// sub_5F89B0
// entry 005f89b0  size 20  status ok
//======================================================================

char __thiscall sub_5F89B0(_BYTE *this)
{
  return *(this + 416);
}


//======================================================================
// sub_5F89F0
// entry 005f89f0  size 67  status ok
//======================================================================

int __thiscall sub_5F89F0(_DWORD *this, int a2)
{
  *(this + 91) = a2;
  if ( *(this + 91) )
    return sub_5F41C0((_DWORD *)dword_15E55E8, (int)this);
  else
    return sub_5F41C0((_DWORD *)dword_15E55E8, 0);
}


//======================================================================
// sub_5F8A40
// entry 005f8a40  size 57  status ok
//======================================================================

int __stdcall sub_5F8A40(char a1, char a2, char a3)
{
  __int16 v4; // [esp+4h] [ebp-4h]

  LOBYTE(v4) = a1;
  HIBYTE(v4) = a2;
  return sub_5F8A80(v4);
}


