//======================================================================
// sub_5D6F90
// entry 005d6f90  size 241  status ok
//======================================================================

char __thiscall sub_5D6F90(CImageDisplay *this)
{
  int v3; // [esp+8h] [ebp-24h]
  _DWORD v4[8]; // [esp+Ch] [ebp-20h]

  v4[0] = 5000;
  v4[1] = 10000;
  v4[2] = 50000;
  v4[3] = 100000;
  v4[4] = 1000000;
  v4[5] = 100000000;
  v4[6] = 1000000000;
  v4[7] = sub_5D52E0(this);
  v3 = *(char *)(sub_5D52E0(this) + 42) + 1;
  if ( !sub_5D6C60(this) || *(_BYTE *)(sub_5D52E0(this) + 41) || *(_BYTE *)(sub_5D52E0(this) + 42) == 7 )
    return 0;
  do
  {
    if ( sub_5D5A50() < v4[v3] )
      break;
    if ( v3 > 7 )
      break;
    ++v3;
  }
  while ( v3 != 7 );
  if ( v3 > 7 )
    LOBYTE(v3) = 7;
  sub_5D7090(v3 - 1);
  sub_63B0A0(this);
  return 1;
}


//======================================================================
// sub_5D7090
// entry 005d7090  size 67  status ok
//======================================================================

int __thiscall sub_5D7090(CImageDisplay *this, char a2)
{
  int result; // eax

  if ( (unsigned int)a2 > 6 )
    sub_5E9F20((char)"0<=newLevel && newLevel<7", "..\\Casino\\casinoplayer.cpp", 842);
  result = sub_5D52E0(this);
  *(_BYTE *)(result + 42) = a2;
  return result;
}


//======================================================================
// sub_5D70E0
// entry 005d70e0  size 675  status ok
//======================================================================

char __thiscall sub_5D70E0(int this, char a2, int a3)
{
  const char *v3; // eax
  const CHAR *v4; // eax
  int v6; // eax
  const CHAR *v7; // eax
  const CHAR *v8; // [esp-8h] [ebp-1CCh]
  char *p_top; // [esp+8h] [ebp-1BCh]
  __int64 v11; // [esp+Ch] [ebp-1B8h]
  __int64 v12; // [esp+14h] [ebp-1B0h]
  __int64 v13; // [esp+1Ch] [ebp-1A8h]
  char Buffer[256]; // [esp+24h] [ebp-1A0h] BYREF
  char Destination[152]; // [esp+124h] [ebp-A0h] BYREF
  int i; // [esp+1C0h] [ebp-4h]

  if ( !a2 )
  {
    v3 = (const char *)sub_630F40("SID_CASINO_RESETPLAYER_MESSAGE");
    strcpy(Destination, v3);
    v4 = (const CHAR *)sub_630F40("SID_CASINO_RESETPLAYER_TITLE");
    if ( sub_62FF10(Destination, v4, 4u) != 6 )
      return 0;
  }
  *(_DWORD *)sub_5D52E0((CImageDisplay *)this) = a3;
  *(_DWORD *)(sub_5D52E0((CImageDisplay *)this) + 4) = 0;
  *(_BYTE *)(sub_5D52E0((CImageDisplay *)this) + 41) = 0;
  *(_BYTE *)(sub_5D52E0((CImageDisplay *)this) + 42) = a3 != 1000000 ? 0 : 4;
  *(_DWORD *)(sub_5D52E0((CImageDisplay *)this) + 44) = 0;
  for ( i = 0; i < 22; ++i )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, i);
  v13 = sub_64C8A0(0, 0);
  sub_5D5F80((_DWORD *)this, v13, SHIDWORD(v13));
  v12 = sub_64C8A0(0, 0);
  sub_5D6050((_DWORD *)this, v12, SHIDWORD(v12));
  *(_DWORD *)(this + 1192) = 0;
  *(_BYTE *)(this + 1200) = 0;
  sub_63B0A0(this);
  while ( *(char *)(sub_5D52E0((CImageDisplay *)this) + 96) != -1 )
  {
    p_top = (char *)&CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.top;
    sub_5E2E40(p_top, 0);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1) )
  {
    sub_5DE200(*(_DWORD *)(this + 4));
  }
  if ( a3 == 1000000 )
  {
    v6 = sub_62FC30(0, 5);
    sprintf(Buffer, "SID_CASINO_RESETBANKAFTERBILLION_MESSAGE_%d", v6);
    v8 = (const CHAR *)sub_630F40("SID_CASINO_RESETBANKAFTERBILLION_TITLE");
    v7 = (const CHAR *)sub_630F40(Buffer);
    sub_62FF10(v7, v8, 0);
    v11 = sub_64C8A0(1000000000, 0);
    sub_5E7E40(*(_DWORD *)(this + 4), 0, v11, HIDWORD(v11));
  }
  return 1;
}


//======================================================================
// sub_5D7390
// entry 005d7390  size 286  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_5D7390(CImageDisplay *this)
{
  _DWORD *v1; // eax
  int v2; // edx
  int *v3; // eax
  const struct tagVIDEOINFO *result; // eax
  int v5; // esi
  int *v6; // eax
  int v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  __int64 v12; // [esp-8h] [ebp-48h]
  __int64 v14; // [esp+8h] [ebp-38h]
  _BYTE v15[8]; // [esp+10h] [ebp-30h] BYREF
  __int64 v16; // [esp+18h] [ebp-28h]
  int v17; // [esp+20h] [ebp-20h] BYREF
  int v18; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+30h] [ebp-10h] BYREF
  int v20; // [esp+38h] [ebp-8h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 676))(dword_7947E4) )
  {
    v1 = sub_5D5A90(this, &v20);
    v2 = v1[1];
    *((_DWORD *)this + 301) = *v1;
    *((_DWORD *)this + 302) = v2;
    v3 = sub_5D5A90(this, &v19);
    return sub_5D59E0(this, *v3, v3[1]);
  }
  else
  {
    v5 = sub_5D5A50();
    result = (const struct tagVIDEOINFO *)sub_5DA880(dword_7947E4);
    if ( v5 >= (int)result )
    {
      v6 = sub_5D5A90(this, &v18);
      sub_5D59E0(this, *v6, v6[1]);
      v7 = sub_5DA880(dword_7947E4);
      v16 = sub_64C8A0(v7, 0);
      v12 = v16;
      sub_5D5A90(this, &v17);
      v8 = (int *)sub_64C630(v15, v12, HIDWORD(v12));
      v9 = *v8;
      v10 = v8[1];
      *((_DWORD *)this + 301) = v9;
      *((_DWORD *)this + 302) = v10;
      v11 = sub_5DA880(dword_7947E4);
      v14 = sub_64C8A0(v11, 0);
      return (const struct tagVIDEOINFO *)sub_5D5AF0((int)this, v14, SHIDWORD(v14));
    }
  }
  return result;
}


//======================================================================
// sub_5D74B0
// entry 005d74b0  size 123  status ok
//======================================================================

int __thiscall sub_5D74B0(int *this)
{
  __int64 v3; // [esp+4h] [ebp-18h]
  int v4; // [esp+14h] [ebp-8h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = *(this + 301);
  v5 = *(this + 302);
  *(_QWORD *)(this + 301) = sub_64C8A0(0, 0);
  v3 = sub_64C8A0(0, 0);
  sub_5D59E0((CImageDisplay *)this, v3, SHIDWORD(v3));
  return sub_5D5CF0((CImageDisplay *)this, v4, v5);
}


//======================================================================
// sub_5D7540
// entry 005d7540  size 62  status ok
//======================================================================

int __thiscall sub_5D7540(_DWORD *this)
{
  return sub_5E7E00(*(this + 1), 3, ++*(this + 298));
}


//======================================================================
// sub_5D7580
// entry 005d7580  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_5D7580(_DWORD *this)
{
  sub_5F5BF0(this);
  *this = &CasinoNetPlaque::`vftable';
  *(this + 97) = 0;
  *(this + 98) = 0;
  return this;
}


//======================================================================
// sub_5D75C0
// entry 005d75c0  size 186  status ok
//======================================================================

int __thiscall sub_5D75C0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CasinoNetPlaque::`vftable';
  if ( *(this + 97) )
    (***(this + 97))(*(this + 97), 1);
  if ( *(this + 98) )
    (***(this + 98))(*(this + 98), 1);
  return sub_5F5C40();
}


//======================================================================
// sub_5D7680
// entry 005d7680  size 321  status ok
//======================================================================

int __thiscall sub_5D7680(CMediaType *this, char *Str, char *a3)
{
  int v3; // eax
  int v4; // eax
  int IsFixedSize; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax

  sub_5EE710(Str);
  v3 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
  v4 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v3 + 17);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 97) + 68))(*((_DWORD *)this + 97), v4 + 6);
  IsFixedSize = CMediaType::IsFixedSize(this);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 97) + 108))(*((_DWORD *)this + 97), IsFixedSize + 1);
  if ( (unsigned __int8)sub_5F54A0(this) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 97) + 116))(*((_DWORD *)this + 97));
  sub_5EE710(a3);
  v6 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
  v7 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v6 + 34);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 98) + 68))(*((_DWORD *)this + 98), v7 + 6);
  v8 = CMediaType::IsFixedSize(this);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 98) + 108))(*((_DWORD *)this + 98), v8 + 1);
  result = sub_5F54A0(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 116))(*((_DWORD *)this + 98));
  return result;
}


//======================================================================
// sub_5D77D0
// entry 005d77d0  size 405  status ok
//======================================================================

int __thiscall sub_5D77D0(CMediaType *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int IsFixedSize; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp-14h] [ebp-40h]
  int v9; // [esp-10h] [ebp-3Ch]
  int v10; // [esp-Ch] [ebp-38h]
  int v11; // [esp+4h] [ebp-28h]
  int v12; // [esp+8h] [ebp-24h]
  int v14; // [esp+Ch] [ebp-20h]
  void *v15; // [esp+10h] [ebp-1Ch]
  int v16; // [esp+14h] [ebp-18h]
  void *v17; // [esp+18h] [ebp-14h]
  int v18; // [esp+1Ch] [ebp-10h]
  int v19; // [esp+20h] [ebp-Ch]
  int v20; // [esp+24h] [ebp-8h]

  sub_5F5CC0(this);
  if ( !*((_DWORD *)this + 97) )
  {
    v17 = operator new(0x1D0u);
    if ( v17 )
    {
      sub_5EC5A0(v17);
      v12 = v1;
    }
    else
    {
      v12 = 0;
    }
    v18 = v12;
    *((_DWORD *)this + 97) = v12;
  }
  v10 = CMediaType::IsFixedSize(this) + 1;
  v9 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this) + 17;
  v8 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 76))(this) + 6;
  v2 = sub_5F5550(this);
  sub_5EC8F0(&Source, 31, v2 - 6, 20, v8, v9, v10, 48, -1);
  if ( !*((_DWORD *)this + 98) )
  {
    v15 = operator new(0x1D0u);
    if ( v15 )
    {
      sub_5EC5A0(v15);
      v11 = v3;
    }
    else
    {
      v11 = 0;
    }
    *((_DWORD *)this + 98) = v11;
  }
  IsFixedSize = CMediaType::IsFixedSize(this);
  v5 = (*(int (__thiscall **)(CMediaType *, int, int, int))(*(_DWORD *)this + 84))(this, IsFixedSize + 1, 48, -1);
  v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 76))(v14, v5 + 34) + 6;
  v6 = sub_5F5550(v14);
  return sub_5EC8F0(&Source, 4, v6 - 6, 20, v16, v17, v18, v19, v20);
}


//======================================================================
// sub_5D7970
// entry 005d7970  size 71  status ok
//======================================================================

int __thiscall sub_5D7970(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 97) + 112))(*(this + 97));
  (*(void (__thiscall **)(_DWORD))(**(this + 98) + 112))(*(this + 98));
  return sub_5EB5A0(this, this);
}


//======================================================================
// sub_5D79C0
// entry 005d79c0  size 58  status ok
//======================================================================

int __stdcall sub_5D79C0(int a1, int a2)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 176))(a1, 0);
  return sub_6010D0(a1, 0);
}


//======================================================================
// sub_5D7A00
// entry 005d7a00  size 107  status ok
//======================================================================

int __thiscall sub_5D7A00(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 1) + 388) + 116))(*(_DWORD *)(*(this + 1) + 388));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 1) + 392) + 116))(*(_DWORD *)(*(this + 1) + 392));
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), 0);
  return sub_6005D0(this);
}


//======================================================================
// sub_5D7A70
// entry 005d7a70  size 95  status ok
//======================================================================

int __stdcall sub_5D7A70(_DWORD **a1, int a2)
{
  ((void (__thiscall *)(_DWORD **, _DWORD))(*a1)[44])(a1, 0);
  (*(void (__thiscall **)(_DWORD *))(*a1[97] + 112))(a1[97]);
  (*(void (__thiscall **)(_DWORD *))(*a1[98] + 112))(a1[98]);
  return sub_6010D0(a1, 0);
}


//======================================================================
// sub_5D7AD0
// entry 005d7ad0  size 40  status ok
//======================================================================

int __thiscall sub_5D7AD0(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
  return sub_6005D0(this);
}


//======================================================================
// sub_5D7B60
// entry 005d7b60  size 110  status ok
//======================================================================

_DWORD *__thiscall sub_5D7B60(_DWORD *this)
{
  sub_64CBE0(this);
  *this = &CasinoRoom::`vftable';
  *(this + 24) = GetTickCount();
  *(this + 26) = 0;
  *((_BYTE *)this + 124) = 0;
  *(this + 27) = 0;
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 30) = 0;
  *(this + 23) = 0;
  return this;
}


//======================================================================
// sub_5D7BD0
// entry 005d7bd0  size 873  status ok
//======================================================================

int __thiscall sub_5D7BD0(_DWORD *this)
{
  int *v1; // eax
  int v2; // eax
  int v4; // [esp+20h] [ebp-60h]
  CImageDisplay *v7; // [esp+2Ch] [ebp-54h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+3Ch] [ebp-44h]
  void (__thiscall ***v9)(_DWORD, int); // [esp+4Ch] [ebp-34h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+54h] [ebp-2Ch]
  void (__thiscall ***v11)(_DWORD, int); // [esp+5Ch] [ebp-24h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+64h] [ebp-1Ch]
  void (__thiscall ***v13)(_DWORD, int); // [esp+6Ch] [ebp-14h]
  int i; // [esp+70h] [ebp-10h]
  int j; // [esp+70h] [ebp-10h]

  *this = &CasinoRoom::`vftable';
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    v7 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
    {
      if ( *(_DWORD *)(sub_5DCB00(i) + 1204) )
      {
        v1 = (int *)sub_5DCB00(i);
        sub_5D74B0(v1);
      }
    }
  }
  if ( (unsigned __int8)sub_5DA7B0(this) )
    *(_BYTE *)(dword_7947E0 + 20200) = 0;
  sub_5DBF30(this);
  sub_5DB890(this);
  sub_5DB9B0(this);
  sub_5D8A20(0, -1, 0);
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++j )
  {
    if ( *(_DWORD *)(sub_5DCB00(j) + 1180) )
    {
      v4 = *(_DWORD *)(sub_5DCB00(j) + 1180);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 112))(v4);
      v13 = *(void (__thiscall ****)(_DWORD, int))(sub_5DCB00(j) + 1180);
      if ( v13 )
        (**v13)(v13, 1);
      *(_DWORD *)(sub_5DCB00(j) + 1180) = 0;
    }
    v2 = sub_5DCB00(j);
    sub_5D55D0(v2);
  }
  v12 = (void (__thiscall ***)(_DWORD, int))*(this + 26);
  if ( v12 )
    (**v12)(v12, 1);
  if ( *(this + 28) )
  {
    v11 = (void (__thiscall ***)(_DWORD, int))*(this + 28);
    if ( v11 )
      (**v11)(v11, 1);
  }
  if ( *(this + 29) )
  {
    v10 = (void (__thiscall ***)(_DWORD, int))*(this + 29);
    if ( v10 )
      (**v10)(v10, 1);
  }
  if ( *(this + 30) )
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*(this + 30);
    if ( v9 )
      (**v9)(v9, 1);
  }
  if ( dword_793578 )
  {
    (**(void (__thiscall ***)(int, int))dword_793578)(dword_793578, 1);
    dword_793578 = 0;
  }
  if ( *(this + 23) )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))*(this + 23);
    if ( v8 )
      (**v8)(v8, 1);
    *(this + 23) = 0;
  }
  return sub_64CC80();
}


//======================================================================
// sub_5D7F40
// entry 005d7f40  size 214  status ok
//======================================================================

int __thiscall sub_5D7F40(_DWORD *this, int a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a2 + 24) != 3 )
    *(this + 24) = GetTickCount();
  if ( (*(_DWORD *)(a2 + 24) == 1 || *(_DWORD *)(a2 + 24) == 4) && dword_793578 && *(_BYTE *)(dword_793578 + 445) )
    sub_57C240((_BYTE *)dword_793578);
  if ( *(_DWORD *)(a2 + 24) == 4
    && tolower(*(char *)(a2 + 20)) == 108
    && !*(_BYTE *)(a2 + 4)
    && !unknown_libname_841(dword_162EE84) )
  {
    if ( sub_5F2A60(5017, 0) )
    {
      v2 = sub_5F2A60(5017, 0);
      if ( (unsigned __int8)sub_6026D0(v2) )
        sub_5DC1C0(this);
    }
  }
  return sub_650360(a2);
}


//======================================================================
// sub_5D8020
// entry 005d8020  size 239  status ok
//======================================================================

DWORD __thiscall sub_5D8020(_DWORD *this)
{
  DWORD result; // eax
  _DWORD v3[4]; // [esp+Ch] [ebp-28h] BYREF
  double v4; // [esp+1Ch] [ebp-18h]
  double v5; // [esp+24h] [ebp-10h]
  DWORD v6; // [esp+2Ch] [ebp-8h]
  int v7; // [esp+30h] [ebp-4h]

  sub_64D030(this);
  v7 = sub_5F2A60(3203002, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(sub_5DCB00(0) + 1184) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 208))(v7);
    else
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 204))(v7);
  }
  result = GetTickCount() - *(this + 24);
  if ( result >= 0x493E0 )
  {
    *(this + 24) = GetTickCount();
    result = sub_636C50(dword_162EE84);
    v6 = result;
    if ( result != -1 )
    {
      v3[0] = v6;
      v3[2] = -1;
      v4 = 0.0;
      v5 = 0.25;
      result = sub_5D8110(this);
      v3[1] = result;
      if ( result != -1 )
        return sub_639390(v3, 0, 0, 1);
    }
  }
  return result;
}


//======================================================================
// sub_5D8110
// entry 005d8110  size 249  status ok
//======================================================================

int sub_5D8110()
{
  __time64_t Time; // [esp+8h] [ebp-10h] BYREF
  struct tm *v2; // [esp+10h] [ebp-8h]
  int v3; // [esp+14h] [ebp-4h]

  v3 = -1;
  time64(&Time);
  v2 = localtime64(&Time);
  if ( v2->tm_hour >= 22 || v2->tm_hour <= 3 )
    v3 = 1030;
  if ( v2->tm_hour >= 5 && v2->tm_hour < 10 )
    v3 = 1032;
  if ( v2->tm_hour == 12 )
    v3 = 1031;
  if ( v2->tm_hour >= 17 && v2->tm_wday == 5 )
    v3 = 1029;
  if ( v3 == -1 || !sub_62FBF0(3) )
  {
    switch ( v2->tm_wday )
    {
      case 0:
        v3 = 1004;
        break;
      case 1:
        v3 = 1002;
        break;
      case 2:
        v3 = 1006;
        break;
      case 3:
        v3 = 1007;
        break;
      case 4:
        v3 = 1005;
        break;
      case 5:
        v3 = 1001;
        break;
      case 6:
        v3 = 1003;
        break;
      default:
        return v3;
    }
  }
  return v3;
}


//======================================================================
// sub_5D8230
// entry 005d8230  size 929  status ok
//======================================================================

int __thiscall sub_5D8230(_DWORD *this)
{
  int Size; // eax
  CImageDisplay *v2; // eax
  CImageDisplay *v3; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  CImageDisplay *v5; // eax
  int v6; // eax
  int v9; // [esp+8h] [ebp-40h]
  int v10; // [esp+Ch] [ebp-3Ch]
  _DWORD *v11; // [esp+10h] [ebp-38h]
  CImageDisplay *v13; // [esp+18h] [ebp-30h]
  CImageDisplay *v14; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v15; // [esp+30h] [ebp-18h]
  int i; // [esp+38h] [ebp-10h]

  sub_64CE60();
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1) )
  {
    sub_5D9960(this);
  }
  v15 = operator new(0x184u);
  if ( v15 )
  {
    sub_5F5BF0(v15);
    *v15 = &MenuFrame::`vftable';
    v11 = v15;
  }
  else
  {
    v11 = 0;
  }
  *(this + 28) = v11;
  Size = CRecentFileList::GetSize((CRecentFileList *)(this + 6));
  sub_5EAE80((Size < 5) + 3200020, 0, 450, 9999, -1);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1)
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 616))(this) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 28) + 116))(*(this + 28));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 28) + 112))(*(this + 28));
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 616))(this) )
  {
    if ( operator new(0x20u) )
      v10 = sub_6010A0(0);
    else
      v10 = 0;
    sub_5F5D50(v10);
  }
  if ( (unsigned __int8)sub_5DA810(this)
    || (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1) )
  {
    sub_5F2BA0(5017);
  }
  if ( !(unsigned __int8)sub_5DA810(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
           dword_162EE84,
           -1) )
    {
      v9 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9) == 1 )
        sub_5F2B20(5017, 1);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) )
    sub_5DA3D0();
  (*(void (__thiscall **)(_DWORD *))(*this + 736))(this);
  if ( !(unsigned __int8)sub_5DA810(this) )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      v14 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3 )
      {
        v2 = (CImageDisplay *)sub_5DCB00(i);
        if ( sub_5D6E70(v2) )
        {
          v3 = (CImageDisplay *)sub_5DCB00(i);
          sub_5D6EE0(v3, 0);
          v13 = (CImageDisplay *)sub_5DCB00(i);
          DisplayFormat = CImageDisplay::GetDisplayFormat(v13);
          sub_5DC520((char *)&DisplayFormat->rcSource.top);
        }
        v5 = (CImageDisplay *)sub_5DCB00(i);
        if ( sub_5D6F90(v5) )
        {
          v6 = sub_5DCB00(i);
          sub_5DC3E0(v6);
        }
      }
    }
  }
  return sub_5E74C0(dword_79506C);
}


//======================================================================
// sub_5D85E0
// entry 005d85e0  size 143  status ok
//======================================================================

int __thiscall sub_5D85E0(void *this)
{
  int result; // eax

  result = (unsigned __int8)sub_5DA810(this);
  if ( (_BYTE)result )
  {
    sub_5F2BA0(5009);
    sub_5F2BA0(5019);
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 752))(this);
    if ( *(_BYTE *)(dword_7947E0 + 20202) )
    {
      *(_BYTE *)(dword_7947E0 + 20202) = 0;
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 372))(this, 4);
    }
    *(_BYTE *)(dword_7947E0 + 20201) = 0;
    *(_BYTE *)(dword_7947E0 + 20200) = 1;
  }
  return result;
}


//======================================================================
// sub_5D8670
// entry 005d8670  size 150  status ok
//======================================================================

char __stdcall sub_5D8670(int a1, int a2)
{
  if ( a2 < 100030 || a2 > 100031 )
  {
    if ( a2 == 100001 || a2 == 100000 )
      sub_5FE240(5018, -1, 100004, 0);
    return sub_64E470(a1, a2);
  }
  else if ( (unsigned __int8)sub_64E470(a1, a2) )
  {
    sub_5FE240(3205001, -1, 3205000, 1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_5D8710
// entry 005d8710  size 307  status ok
//======================================================================

bool __thiscall sub_5D8710(void *this)
{
  const CHAR *v2; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  const char *v4; // eax
  const CHAR *v5; // eax
  const CHAR *v6; // [esp-8h] [ebp-154h]
  char v8[64]; // [esp+4h] [ebp-148h] BYREF
  char Buffer[260]; // [esp+44h] [ebp-108h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 128))(this) )
    return 1;
  if ( (unsigned __int8)sub_5DA810(this) )
    return 1;
  if ( !(unsigned __int8)sub_5DA7B0(this) || (unsigned __int8)sub_635CB0(11) )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, char *))(*(_DWORD *)dword_162EE84 + 824))(
      dword_162EE84,
      ExecutingCollection,
      v8);
    v4 = (const char *)sub_630F40("SID_CASINO_GAMEINPROGRESS_MESSAGE_FORMAT");
    sprintf(Buffer, v4, v8);
    v5 = (const CHAR *)sub_630F40("SID_CASINO_LEAVING");
    return sub_62FF10(Buffer, v5, 4u) == 6;
  }
  else
  {
    v6 = (const CHAR *)sub_630F40("SID_CASINO_LEAVING");
    v2 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTINPROGRESS_MESSAGE");
    return sub_62FF10(v2, v6, 4u) == 6;
  }
}


//======================================================================
// sub_5D8850
// entry 005d8850  size 318  status ok
//======================================================================

int sub_5D8850()
{
  int result; // eax
  unsigned __int8 v1; // [esp+7h] [ebp-5h]
  int IsFixedSize; // [esp+8h] [ebp-4h]

  result = (unsigned __int8)sub_635CB0(8);
  if ( !(_BYTE)result || dword_793584 || (v1 = *(_BYTE *)(dword_79357C + 136), (result = v1) == 0) )
  {
    if ( !dword_793584 || !*(_DWORD *)(dword_793584 + 15372) )
    {
      result = sub_5E2F60(dword_7947E0);
      if ( (_BYTE)result )
      {
        IsFixedSize = CMediaType::IsFixedSize(dword_162EE84);
        if ( dword_75D7AC == -1 )
          dword_75D7AC = IsFixedSize + 3600 * (char)sub_5E2F60(dword_7947E0);
        result = CMediaType::IsFixedSize(dword_162EE84);
        if ( result >= dword_75D7AC )
        {
          sub_5E0EA0(dword_7947E0);
          result = sub_5E2F60(dword_7947E0);
          dword_75D7AC = IsFixedSize + 3600 * (char)result;
          if ( dword_793584 )
            result = sub_589050((_DWORD **)dword_793584, *(_DWORD *)(dword_7947E0 + 152));
        }
        if ( dword_793584 )
          return sub_5890F0((_DWORD **)dword_793584, dword_75D7AC - IsFixedSize);
      }
      else if ( dword_793584 )
      {
        return sub_5890F0((_DWORD **)dword_793584, 0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5D8990
// entry 005d8990  size 22  status ok
//======================================================================

int sub_5D8990()
{
  return sub_5DE600(dword_7947E0);
}


//======================================================================
// sub_5D89B0
// entry 005d89b0  size 110  status ok
//======================================================================

int __thiscall sub_5D89B0(void *this, int a2)
{
  int i; // eax
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  for ( i = (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 268))(
              dword_162EE84,
              this);
        v5 < i;
        i = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 268))(
              dword_162EE84,
              v4) )
  {
    if ( *(_DWORD *)(sub_5DCB00(v5) + 32) == a2 )
      return sub_5DCB00(v5);
    ++v5;
  }
  return 0;
}


//======================================================================
// sub_5D8A20
// entry 005d8a20  size 601  status ok
//======================================================================

int __thiscall sub_5D8A20(_DWORD **this, char a2, int a3, char a4)
{
  int v4; // eax
  int result; // eax
  int v6; // [esp-Ch] [ebp-54h]
  int v7; // [esp+8h] [ebp-40h]
  int v8; // [esp+Ch] [ebp-3Ch]
  int v9; // [esp+10h] [ebp-38h]
  int v10; // [esp+14h] [ebp-34h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+28h] [ebp-20h]
  void *v13; // [esp+34h] [ebp-14h]

  if ( !a2 )
  {
    if ( *(this + 27) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + 27) + 112))(*(this + 27));
      sub_5F5D50(0);
      v12 = (void (__thiscall ***)(_DWORD, int))*(this + 27);
      if ( v12 )
        (**v12)(v12, 1);
      *(this + 27) = 0;
    }
    goto LABEL_21;
  }
  if ( a3 == -1 )
    sub_5E9F20((char)"p != -1", "..\\Casino\\casinoroom.cpp", 459);
  if ( !*(this + 27) )
  {
    v13 = operator new(0x184u);
    if ( v13 )
      v10 = sub_5F5BF0(v13);
    else
      v10 = 0;
    *(this + 27) = (_DWORD *)v10;
  }
  v9 = unknown_libname_732(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a3) + 32));
  v8 = unknown_libname_732(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a3) + 32));
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 84))(v9) - 49;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 76))(v8);
  sub_5EAE80(1047, v4 - 30, v6, 1000, -1);
  (*(void (__thiscall **)(_DWORD))(**(this + 27) + 116))(*(this + 27));
  (*(this + 27))[94] = 6;
  if ( operator new(0x1Cu) )
    v7 = sub_600A70(0);
  else
    v7 = 0;
  sub_5F5D50(v7);
  if ( !a4 )
  {
LABEL_21:
    sub_5DA480(this);
    return sub_5F2BA0(5017);
  }
  sub_5DA460(this);
  result = sub_5DA830(this);
  if ( !(_BYTE)result )
    return sub_5F2B20(5017, 1);
  return result;
}


//======================================================================
// sub_5D8C80
// entry 005d8c80  size 52  status ok
//======================================================================

bool __thiscall sub_5D8C80(void *this)
{
  return byte_795F95 || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 128))(this) == 0;
}


//======================================================================
// sub_5D8CC0
// entry 005d8cc0  size 19  status ok
//======================================================================

int __thiscall sub_5D8CC0(void *this)
{
  return sub_5DA830(this);
}


//======================================================================
// sub_5D8CE0
// entry 005d8ce0  size 119  status ok
//======================================================================

bool __thiscall sub_5D8CE0(void *this, int a2)
{
  bool v4; // [esp+4h] [ebp-Ch]

  v4 = (unsigned __int8)sub_5DA7B0(this) || *(_BYTE *)(dword_7947E0 + 20201);
  return (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 128))(this) && !v4;
}


//======================================================================
// sub_5D8D60
// entry 005d8d60  size 483  status ok
//======================================================================

char __thiscall sub_5D8D60(_BYTE *this, int a2, CImageDisplay *a3, int a4)
{
  bool v5; // [esp+0h] [ebp-48h]
  char v6; // [esp+4h] [ebp-44h]
  char v7; // [esp+8h] [ebp-40h]
  CImageDisplay *v9; // [esp+20h] [ebp-28h]
  char *Str1; // [esp+2Ch] [ebp-1Ch]
  char *Str2; // [esp+34h] [ebp-14h]
  LONG left; // [esp+40h] [ebp-8h]
  int i; // [esp+44h] [ebp-4h]

  if ( !a3
    || (left = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2))->rcSource.left,
        (left == 0) != (CImageDisplay::GetDisplayFormat(a3)->rcSource.left == 0))
    || (Str2 = (char *)&CImageDisplay::GetDisplayFormat(a3)->rcSource.top,
        Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2))->rcSource.top,
        strcmp(Str1, Str2))
    || ((v9 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2),
         CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2)
     || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3
      ? (v7 = 1)
      : (v7 = 0),
        CImageDisplay::GetDisplayFormat(a3)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(a3)->rcSource.left == 3
      ? (v6 = 1)
      : (v6 = 0),
        v7 != v6) )
  {
    *(this + 124) = 1;
    for ( i = 0; i < 4; ++i )
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 656))(this, i);
    if ( dword_163068C )
    {
      v5 = CImageDisplay::GetDisplayFormat(a3)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(a3)->rcSource.left == 3;
      if ( v5 && (unsigned __int8)sub_5DA830(this) )
        return 1;
    }
    if ( a3 )
      (*(void (__thiscall **)(_BYTE *, CImageDisplay *))(*(_DWORD *)this + 612))(this, a3);
  }
  return 1;
}


//======================================================================
// sub_5D8F50
// entry 005d8f50  size 62  status ok
//======================================================================

char __thiscall sub_5D8F50(void *this, int a2)
{
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 616))(this) )
    sub_5D8F90(this);
  else
    sub_5D9180(a2, 0);
  return 1;
}


//======================================================================
// sub_5D8F90
// entry 005d8f90  size 486  status ok
//======================================================================

int __thiscall sub_5D8F90(int this)
{
  CImageDisplay *v1; // eax
  unsigned int Flags; // esi
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+8h] [ebp-74h]
  int v7; // [esp+Ch] [ebp-70h]
  LONG *p_top; // [esp+14h] [ebp-68h]
  CImageDisplay *v10; // [esp+18h] [ebp-64h]
  void *v11; // [esp+1Ch] [ebp-60h]
  void *v12; // [esp+24h] [ebp-58h]
  int v13; // [esp+2Ch] [ebp-50h]
  int v14[2]; // [esp+30h] [ebp-4Ch] BYREF
  char Destination[52]; // [esp+38h] [ebp-44h] BYREF
  int v16; // [esp+78h] [ebp-4h]

  v1 = (CImageDisplay *)sub_5DE600(dword_7947E0);
  sub_5D5A90(v1, v14);
  v13 = CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 112)) != 3200020 ? 176 : 233;
  Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 112));
  result = sub_5EB240(*(_DWORD *)(this + 112));
  if ( Flags == result )
  {
    sub_64C8D0(v14[0], v14[1], Destination, 1, 1, 1);
    if ( !*(_DWORD *)(this + 116) )
    {
      v12 = operator new(0x1D0u);
      v16 = 0;
      if ( v12 )
      {
        sub_5EC5A0(v12);
        v7 = v4;
      }
      else
      {
        v7 = 0;
      }
      v16 = -1;
      *(_DWORD *)(this + 116) = v7;
    }
    v10 = (CImageDisplay *)sub_6375B0(dword_162EE84);
    p_top = &CImageDisplay::GetDisplayFormat(v10)->rcSource.top;
    sub_5EC8F0(p_top, 108, 118, 14, v13, 453, 10000, 36, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 116) + 116))(*(_DWORD *)(this + 116));
    if ( !*(_DWORD *)(this + 120) )
    {
      v11 = operator new(0x1D0u);
      v16 = 1;
      if ( v11 )
      {
        sub_5EC5A0(v11);
        v6 = v5;
      }
      else
      {
        v6 = 0;
      }
      v16 = -1;
      *(_DWORD *)(this + 120) = v6;
    }
    sub_5EC8F0(Destination, 108, 118, 14, v13, 464, 10001, 36, -1);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 120) + 116))(*(_DWORD *)(this + 120));
  }
  return result;
}


//======================================================================
// sub_5D9180
// entry 005d9180  size 358  status ok
//======================================================================

int __stdcall sub_5D9180(int a1, unsigned __int8 a2)
{
  int result; // eax
  const char *v3; // eax
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-64h]
  LONG left; // [esp+18h] [ebp-50h]
  int v10[4]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[52]; // [esp+2Ch] [ebp-3Ch] BYREF
  CImageDisplay *v12; // [esp+64h] [ebp-4h]

  result = sub_5DCB00(a1);
  v12 = (CImageDisplay *)result;
  if ( result )
  {
    if ( !*((_DWORD *)v12 + 295) || (result = (unsigned __int8)sub_5F54A0(*((_DWORD *)v12 + 295)), !(_BYTE)result) )
    {
      left = CImageDisplay::GetDisplayFormat(v12)->rcSource.left;
      result = left == 0;
      if ( left )
      {
        if ( *((_DWORD *)v12 + 8) )
        {
          if ( !dword_7947E4
            || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 708))(dword_7947E4, a1)
            || (v8 = *(_DWORD *)(unknown_libname_732(*((_DWORD *)v12 + 8)) + 400),
                v3 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 184))(v8),
                !strcmp(v3, &Source))
            || (result = a2) != 0 )
          {
            v4 = sub_5D5A90(v12, v10);
            v5 = *v4;
            v6 = v4[1];
            v10[2] = v5;
            v10[3] = v6;
            sub_64C8D0(v5, v6, Destination, 1, 1, 1);
            v7 = unknown_libname_732(*((_DWORD *)v12 + 8));
            return (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(v7 + 400) + 180))(
                     *(_DWORD *)(v7 + 400),
                     Destination);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5D92F0
// entry 005d92f0  size 448  status ok
//======================================================================

int __thiscall sub_5D92F0(void *this, _DWORD *a2, int *a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h]

  *a2 = 0;
  *a3 = 0;
  if ( (unsigned __int8)sub_5DA830(this) )
  {
    *a3 = sub_5DA880(this);
    result = *a3;
    v5 = *a3;
    if ( *a3 > 25000 )
    {
      if ( v5 == 100000 )
      {
        *a2 = 1000;
      }
      else if ( v5 == 500000 )
      {
        *a2 = 5000;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 25000:
          *a2 = 250;
          return (int)a2;
        case 1000:
          *a2 = 10;
          break;
        case 5000:
          *a2 = 25;
          break;
      }
    }
  }
  else
  {
    result = dword_7947E0;
    v4 = *(_DWORD *)(dword_7947E0 + 20236);
    if ( v4 > 100 )
    {
      switch ( v4 )
      {
        case 250:
          *a2 = 250;
          *a3 = 500;
          return (int)a3;
        case 1000:
          *a2 = 1000;
          *a3 = 2000;
          return (int)a2;
        case 1234:
          *a2 = 5;
          *a3 = 1000000000;
          return (int)a3;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 100:
          *a2 = 100;
          *a3 = 1000000000;
          return result;
        case 5:
          *a2 = 5;
          *a3 = 1000;
          return (int)a3;
        case 10:
          *a2 = 10;
          *a3 = 2000;
          return result;
        case 25:
          *a2 = 25;
          *a3 = 3000;
          return (int)a2;
      }
    }
    return sub_5E9F20((char)"false", "..\\Casino\\casinoroom.cpp", 650);
  }
  return result;
}


//======================================================================
// sub_5D9550
// entry 005d9550  size 16  status ok
//======================================================================

int sub_5D9550()
{
  return 31;
}


//======================================================================
// sub_5D9570
// entry 005d9570  size 256  status ok
//======================================================================

int __thiscall sub_5D9570(void *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  __int64 v6; // [esp-8h] [ebp-2Ch]
  __int64 v7; // [esp-8h] [ebp-2Ch]
  int v8; // [esp+0h] [ebp-24h]

  if ( byte_795F95 )
    v8 = *(_DWORD *)(sub_5DCB00(a2) + 8);
  else
    v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 880))(
           dword_162EE84,
           1);
  sub_5DCB00(a2);
  sub_63A8D0(v8, 0, 1, 1, 1);
  v6 = sub_64C8A0(0, 0);
  v2 = (_DWORD *)sub_5DCB00(a2);
  sub_5D5F80(v2, v6, SHIDWORD(v6));
  v7 = sub_64C8A0(0, 0);
  v3 = (_DWORD *)sub_5DCB00(a2);
  sub_5D6050(v3, v7, SHIDWORD(v7));
  v4 = sub_5DCB00(a2);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 612))(this, v4);
  sub_5D8F50(this, a2);
  return v8;
}


//======================================================================
// sub_5D9670
// entry 005d9670  size 739  status ok
//======================================================================

CImageDisplay *__thiscall sub_5D9670(void *this, CImageDisplay *a2)
{
  int *v2; // eax
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  CImageDisplay *result; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  int *v11; // eax
  int v12; // edx
  int v16; // [esp+20h] [ebp-58h] BYREF
  int v17; // [esp+28h] [ebp-50h] BYREF
  __int64 v18; // [esp+30h] [ebp-48h]
  __int64 v19; // [esp+38h] [ebp-40h]
  __int64 v20; // [esp+40h] [ebp-38h]
  __int64 v21; // [esp+48h] [ebp-30h]
  __int64 v22; // [esp+50h] [ebp-28h]
  __int64 v23; // [esp+58h] [ebp-20h]
  int v24; // [esp+60h] [ebp-18h] BYREF
  int v25; // [esp+68h] [ebp-10h] BYREF
  int v26; // [esp+70h] [ebp-8h] BYREF
  int v27; // [esp+74h] [ebp-4h] BYREF

  if ( !(unsigned __int8)sub_635CB0(11)
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 116))(this)
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 616))(this) )
  {
    v2 = sub_5D5A90(a2, &v25);
    v3 = *v2;
    v4 = v2[1];
    *((_DWORD *)a2 + 313) = v3;
    *((_DWORD *)a2 + 314) = v4;
    v5 = sub_5D5A90(a2, &v24);
    v6 = v5[1];
    *((_DWORD *)a2 + 315) = *v5;
    *((_DWORD *)a2 + 316) = v6;
    return a2;
  }
  if ( (unsigned __int8)sub_5DA830(this) )
  {
    if ( CImageDisplay::GetDisplayFormat(a2)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(a2)->rcSource.left == 3 )
    {
      sub_5D7390(a2);
    }
    else
    {
      v8 = sub_5DA880(this);
      v23 = sub_64C8A0(v8, 0);
      sub_5D5AF0((int)a2, v23, SHIDWORD(v23));
    }
    goto LABEL_33;
  }
  if ( CImageDisplay::GetDisplayFormat(a2)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(a2)->rcSource.left == 3 )
  {
    goto LABEL_33;
  }
  (*(void (__thiscall **)(void *, int *, int *))(*(_DWORD *)this + 620))(this, &v27, &v26);
  if ( v27 > 100 )
  {
    if ( v27 == 250 || v27 == 1000 )
      goto LABEL_33;
    goto LABEL_26;
  }
  switch ( v27 )
  {
    case 100:
      v18 = sub_64C8A0(100000, 0);
      sub_5D5AF0((int)a2, v18, SHIDWORD(v18));
      break;
    case 5:
      goto LABEL_27;
    case 10:
      v20 = sub_64C8A0(5000, 0);
      sub_5D5AF0((int)a2, v20, SHIDWORD(v20));
      break;
    case 25:
      v19 = sub_64C8A0(25000, 0);
      sub_5D5AF0((int)a2, v19, SHIDWORD(v19));
      break;
    default:
LABEL_26:
      sub_5E9F20((char)"false", "..\\Casino\\casinoroom.cpp", 733);
LABEL_27:
      if ( v26 == 1000 )
      {
        v22 = sub_64C8A0(1000, 0);
        sub_5D5AF0((int)a2, v22, SHIDWORD(v22));
      }
      else
      {
        v21 = sub_64C8A0(100000, 0);
        sub_5D5AF0((int)a2, v21, SHIDWORD(v21));
      }
      break;
  }
LABEL_33:
  v9 = sub_5D5A90(a2, &v17);
  v10 = v9[1];
  *((_DWORD *)a2 + 313) = *v9;
  *((_DWORD *)a2 + 314) = v10;
  v11 = sub_5D5A90(a2, &v16);
  v12 = *v11;
  result = (CImageDisplay *)v11[1];
  *((_DWORD *)a2 + 315) = v12;
  *((_DWORD *)a2 + 316) = result;
  return result;
}


//======================================================================
// sub_5D9960
// entry 005d9960  size 89  status ok
//======================================================================

int __thiscall sub_5D9960(void *this)
{
  int result; // eax
  int v2; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    v2 = sub_5DCB00(i);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 612))(this, v2);
  }
  return result;
}


//======================================================================
// sub_5D99C0
// entry 005d99c0  size 639  status ok
//======================================================================

int __thiscall sub_5D99C0(void *this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+1Ch] [ebp-14h]
  void **v7; // [esp+20h] [ebp-10h]
  int i; // [esp+28h] [ebp-8h]
  int j; // [esp+28h] [ebp-8h]
  size_t Size; // [esp+2Ch] [ebp-4h]
  size_t Sizea; // [esp+2Ch] [ebp-4h]

  v6 = *(_DWORD *)(sub_5DCB00(a2) + 1180);
  v7 = *(void ***)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2);
  if ( v7[233] )
  {
    operator delete(v7[233]);
    v7[233] = 0;
  }
  if ( v7[234] )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
          ++i )
    {
      if ( *((_DWORD *)v7[234] + i) )
        operator delete(*((void **)v7[234] + i));
      *((_DWORD *)v7[234] + i) = 0;
    }
    operator delete(v7[234]);
    v7[234] = 0;
  }
  memcpy(v7, (const void *)a3, 0x4F4u);
  Size = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
  v7[233] = operator new(Size);
  memcpy(v7[233], *(const void **)(a3 + 932), Size);
  v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
  v7[234] = operator new(4 * v3);
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++j )
  {
    Sizea = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
              dword_162EE84,
              j);
    *((_DWORD *)v7[234] + j) = operator new(Sizea);
    memcpy(*((void **)v7[234] + j), *(const void **)(*(_DWORD *)(a3 + 936) + 4 * j), Sizea);
  }
  *(_DWORD *)(sub_5DCB00(a2) + 1180) = v6;
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 348))(this, a3);
}


//======================================================================
// sub_5D9C40
// entry 005d9c40  size 562  status ok
//======================================================================

int __thiscall sub_5D9C40(void *this, void **a2, int a3)
{
  int v3; // eax
  int result; // eax
  void *v5; // [esp+0h] [ebp-2Ch]
  int i; // [esp+24h] [ebp-8h]
  int j; // [esp+24h] [ebp-8h]
  size_t Size; // [esp+28h] [ebp-4h]
  size_t Sizea; // [esp+28h] [ebp-4h]

  v5 = this;
  if ( a2[233] )
  {
    operator delete(a2[233]);
    a2[233] = 0;
  }
  if ( a2[234] )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 236))(
                dword_162EE84,
                v5);
          ++i )
    {
      if ( *((_DWORD *)a2[234] + i) )
        operator delete(*((void **)a2[234] + i));
      *((_DWORD *)a2[234] + i) = 0;
    }
    operator delete(a2[234]);
    a2[234] = 0;
  }
  memcpy(a2, (const void *)a3, 0x4F4u);
  Size = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
  a2[233] = operator new(Size);
  memcpy(a2[233], *(const void **)(a3 + 932), Size);
  v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
  a2[234] = operator new(4 * v3);
  for ( j = 0; ; ++j )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
    if ( j >= result )
      break;
    Sizea = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
              dword_162EE84,
              j);
    *((_DWORD *)a2[234] + j) = operator new(Sizea);
    memcpy(*((void **)a2[234] + j), *(const void **)(*(_DWORD *)(a3 + 936) + 4 * j), Sizea);
  }
  return result;
}


//======================================================================
// sub_5D9E80
// entry 005d9e80  size 88  status ok
//======================================================================

int __stdcall sub_5D9E80(int a1)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = a1;
  *(_DWORD *)(a1 + 1180) = 0;
  for ( i = 0; i < 30; ++i )
  {
    result = a1;
    *(_DWORD *)(a1 + 4 * i + 940) = 0;
    *(_DWORD *)(a1 + 4 * i + 1060) = 0;
  }
  return result;
}


//======================================================================
// sub_5D9EE0
// entry 005d9ee0  size 19  status ok
//======================================================================

int __thiscall sub_5D9EE0(void *this)
{
  return sub_5DA7B0(this);
}


//======================================================================
// sub_5D9F00
// entry 005d9f00  size 40  status ok
//======================================================================

int __thiscall sub_5D9F00(void *this, int a2, int a3)
{
  int result; // eax

  result = (unsigned __int8)sub_5DA7B0(this);
  if ( !(_BYTE)result )
    return sub_5DB9E0(a3);
  return result;
}


//======================================================================
// sub_5D9F30
// entry 005d9f30  size 21  status ok
//======================================================================

int __thiscall sub_5D9F30(void *this, int a2, int a3)
{
  return sub_5DBB40(this, this);
}


//======================================================================
// sub_5D9F50
// entry 005d9f50  size 21  status ok
//======================================================================

int __thiscall sub_5D9F50(void *this, int a2, int a3)
{
  return sub_5DBB40(this, this);
}


//======================================================================
// sub_5D9F70
// entry 005d9f70  size 203  status ok
//======================================================================

int __thiscall sub_5D9F70(void *this, int a2, int a3)
{
  int result; // eax
  const CHAR *v4; // eax
  const CHAR *v5; // [esp-8h] [ebp-14h]

  result = (unsigned __int8)byte_795F95;
  if ( !byte_795F95 )
  {
    if ( dword_163068C
      || a3 == sub_6375B0(dword_162EE84)
      || !(*(unsigned __int8 (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 304))(this, *(_DWORD *)(a3 + 32)) )
    {
      if ( (unsigned __int8)sub_5DA7B0(this) )
      {
        v5 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTPLAY");
        v4 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENT_CANTCHANGEPLAYERS");
        return sub_62FF10(v4, v5, 0);
      }
      else
      {
        return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 372))(this, 4);
      }
    }
    else
    {
      return sub_64D480(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), a3);
    }
  }
  return result;
}


//======================================================================
// sub_5DA120
// entry 005da120  size 76  status ok
//======================================================================

int __thiscall sub_5DA120(void *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax

  sub_64FD20(a2, a3);
  v3 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)a2 + 84))(a2, this);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 76))(a2, v3 - 10);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 68))(a2, v4 - 17);
}


//======================================================================
// sub_5DA170
// entry 005da170  size 72  status ok
//======================================================================

int __thiscall sub_5DA170(void *this, _DWORD **a2, int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = ((int (__thiscall *)(_DWORD **, void *))(*a2)[21])(a2, this);
  v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v3 + 19);
  return (*(int (__thiscall **)(_DWORD *, int))(*a2[99] + 68))(a2[99], v4 + 20);
}


//======================================================================
// sub_5DA1C0
// entry 005da1c0  size 72  status ok
//======================================================================

int __thiscall sub_5DA1C0(void *this, _DWORD **a2, int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = ((int (__thiscall *)(_DWORD **, void *))(*a2)[21])(a2, this);
  v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v3 + 36);
  return (*(int (__thiscall **)(_DWORD *, int))(*a2[100] + 68))(a2[100], v4 + 20);
}


//======================================================================
// sub_5DA210
// entry 005da210  size 175  status ok
//======================================================================

int __thiscall sub_5DA210(void *this, int a2, char a3)
{
  int v4; // eax

  if ( a2 < 0
    || a2 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    sub_5E9F20(
      (char)"playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()",
      "..\\Casino\\casinoroom.cpp",
      944);
  }
  if ( !sub_639110(a2) || !*(_DWORD *)(sub_639110(a2) + 24) )
    return -1;
  v4 = sub_639110(a2);
  return (a3 != 0 ? 10 : 93)
       + (*(int (__thiscall **)(_DWORD, _DWORD, void *))(**(_DWORD **)(v4 + 24) + 76))(
           *(_DWORD *)(v4 + 24),
           *(_DWORD *)(v4 + 24),
           this);
}


//======================================================================
// sub_5DA2C0
// entry 005da2c0  size 158  status ok
//======================================================================

int __thiscall sub_5DA2C0(void *this, int a2, int a3)
{
  int v4; // eax

  if ( a2 < 0
    || a2 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    sub_5E9F20(
      (char)"playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()",
      "..\\Casino\\casinoroom.cpp",
      959);
  }
  if ( !sub_639110(a2) || !*(_DWORD *)(sub_639110(a2) + 24) )
    return -1;
  v4 = sub_639110(a2);
  return (*(int (__thiscall **)(_DWORD, _DWORD, void *))(**(_DWORD **)(v4 + 24) + 84))(
           *(_DWORD *)(v4 + 24),
           *(_DWORD *)(v4 + 24),
           this)
       + 44;
}


//======================================================================
// sub_5DA360
// entry 005da360  size 38  status ok
//======================================================================

int __thiscall sub_5DA360(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 1) + 8))(*(this + 1), 1, a2);
}


//======================================================================
// sub_5DA390
// entry 005da390  size 53  status ok
//======================================================================

int __thiscall sub_5DA390(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 1) + 8))(*(this + 1), 1, -1);
  return sub_5FC420(a2);
}


//======================================================================
// sub_5DA3D0
// entry 005da3d0  size 143  status ok
//======================================================================

_DWORD *__thiscall sub_5DA3D0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  result = this;
  if ( !*(this + 26) )
  {
    v4 = operator new(0x34u);
    if ( v4 )
      v2 = sub_5C9A50((int)v4);
    else
      v2 = 0;
    *(this + 26) = v2;
    return sub_5C9C70((_DWORD *)*(this + 26));
  }
  return result;
}


//======================================================================
// sub_5DA460
// entry 005da460  size 31  status ok
//======================================================================

int __thiscall sub_5DA460(_DWORD ***this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 26) )
    return sub_5CA200(*(this + 26));
  return result;
}


//======================================================================
// sub_5DA480
// entry 005da480  size 31  status ok
//======================================================================

int __thiscall sub_5DA480(_DWORD ***this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 26) )
    return sub_5CA110(*(this + 26));
  return result;
}


//======================================================================
// sub_5DA4A0
// entry 005da4a0  size 40  status ok
//======================================================================

int __thiscall sub_5DA4A0(void *this)
{
  _BYTE v2[4]; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, int *, _BYTE *))(*(_DWORD *)this + 620))(this, &v3, v2);
  return v3;
}


//======================================================================
// sub_5DA4D0
// entry 005da4d0  size 40  status ok
//======================================================================

int __thiscall sub_5DA4D0(void *this)
{
  int v2; // [esp+4h] [ebp-8h] BYREF
  _BYTE v3[4]; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, _BYTE *, int *))(*(_DWORD *)this + 620))(this, v3, &v2);
  return v2;
}


//======================================================================
// sub_5DA740
// entry 005da740  size 102  status ok
//======================================================================

_DWORD *__stdcall sub_5DA740(_DWORD *a1, CImageDisplay *a2)
{
  int *v2; // eax
  int v3; // edx
  _BYTE v5[8]; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h]

  sub_5D5A90(a2, &v6);
  if ( (unsigned __int8)sub_5DA7B0(dword_7947E4) )
  {
    v2 = (int *)sub_64C5C0(v5, *((_DWORD *)a2 + 301), *((_DWORD *)a2 + 302));
    v3 = v2[1];
    v6 = *v2;
    v7 = v3;
  }
  *a1 = v6;
  a1[1] = v7;
  return a1;
}


//======================================================================
// sub_5DA7B0
// entry 005da7b0  size 83  status ok
//======================================================================

bool sub_5DA7B0()
{
  return (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
           dword_162EE84,
           -1)
      && *(_BYTE *)(dword_7947E0 + 20200);
}


//======================================================================
// sub_5DA810
// entry 005da810  size 26  status ok
//======================================================================

char sub_5DA810()
{
  return *(_BYTE *)(dword_7947E0 + 20201);
}


//======================================================================
// sub_5DA830
// entry 005da830  size 66  status ok
//======================================================================

bool sub_5DA830()
{
  return sub_5DA7B0() || sub_5DA810();
}


//======================================================================
// sub_5DA880
// entry 005da880  size 29  status ok
//======================================================================

int sub_5DA880()
{
  return *(_DWORD *)(dword_7947E0 + 20204);
}


//======================================================================
// sub_5DA8A0
// entry 005da8a0  size 29  status ok
//======================================================================

int sub_5DA8A0()
{
  return *(_DWORD *)(dword_7947E0 + 20208);
}


//======================================================================
// sub_5DA8C0
// entry 005da8c0  size 26  status ok
//======================================================================

int sub_5DA8C0()
{
  return *(_DWORD *)(dword_7947E0 + 20216);
}


//======================================================================
// sub_5DA8E0
// entry 005da8e0  size 67  status ok
//======================================================================

int sub_5DA8E0()
{
  int v0; // esi
  int v2; // esi

  v0 = sub_5DA8A0();
  if ( v0 - sub_5DA8C0() <= 0 )
    return 0;
  v2 = sub_5DA8A0();
  return v2 - sub_5DA8C0();
}


//======================================================================
// sub_5DA930
// entry 005da930  size 165  status ok
//======================================================================

bool __thiscall sub_5DA930(void *this, int a2)
{
  char v3; // [esp+0h] [ebp-18h]
  bool v4; // [esp+4h] [ebp-14h]
  CImageDisplay *v6; // [esp+Ch] [ebp-Ch]

  v3 = 0;
  if ( sub_5DA7B0() && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 128))(this) )
  {
    v6 = (CImageDisplay *)sub_5DCB00(a2);
    v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
    if ( !v4 || sub_636690(dword_162EE84) > 1 )
      return 1;
  }
  return v3;
}


//======================================================================
// sub_5DA9E0
// entry 005da9e0  size 31  status ok
//======================================================================

bool __thiscall sub_5DA9E0(void *this, int a2)
{
  return sub_5DAC90(this) == a2;
}


//======================================================================
// sub_5DAA00
// entry 005daa00  size 31  status ok
//======================================================================

bool __thiscall sub_5DAA00(void *this, int a2)
{
  return sub_5DADA0(this) == a2;
}


//======================================================================
// sub_5DAA20
// entry 005daa20  size 183  status ok
//======================================================================

__int64 *__stdcall sub_5DAA20(__int64 *a1)
{
  CImageDisplay *v1; // eax
  CImageDisplay *v2; // eax
  __int64 v4; // [esp-8h] [ebp-34h]
  int v5; // [esp+4h] [ebp-28h] BYREF
  int v6; // [esp+Ch] [ebp-20h] BYREF
  __int64 v7; // [esp+14h] [ebp-18h]
  __int64 v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v9 = sub_636610(dword_162EE84);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  for ( i = 0; i < v9; ++i )
  {
    v4 = v8;
    v1 = (CImageDisplay *)sub_5DCB00(i);
    sub_5D5A90(v1, &v6);
    if ( (unsigned __int8)sub_64C6E0(v4, HIDWORD(v4)) )
    {
      v2 = (CImageDisplay *)sub_5DCB00(i);
      v8 = *(_QWORD *)sub_5D5A90(v2, &v5);
    }
  }
  *a1 = v8;
  return a1;
}


//======================================================================
// sub_5DAAE0
// entry 005daae0  size 348  status ok
//======================================================================

__int64 *__stdcall sub_5DAAE0(__int64 *a1)
{
  CImageDisplay *v1; // eax
  _DWORD *v2; // eax
  void *v3; // eax
  CImageDisplay *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  CImageDisplay *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  _BYTE v12[8]; // [esp+4h] [ebp-44h] BYREF
  int v13; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v14[8]; // [esp+14h] [ebp-34h] BYREF
  int v15; // [esp+1Ch] [ebp-2Ch] BYREF
  int v16; // [esp+24h] [ebp-24h] BYREF
  __int64 v17; // [esp+2Ch] [ebp-1Ch] BYREF
  __int64 v18; // [esp+34h] [ebp-14h]
  int v19; // [esp+3Ch] [ebp-Ch]
  int i; // [esp+40h] [ebp-8h]
  int v21; // [esp+44h] [ebp-4h]

  v21 = -1;
  v19 = sub_636610(dword_162EE84);
  sub_5DAA20(&v17);
  for ( i = 0; i < v19; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(i);
    v2 = sub_5D5A90(v1, &v16);
    if ( (unsigned __int8)sub_64C720(*v2, v2[1]) )
    {
      v21 = i;
      break;
    }
  }
  v18 = v17;
  for ( i = 0; i < v19; ++i )
  {
    if ( v21 != i )
    {
      v3 = (void *)sub_5DCB00(i);
      if ( sub_5D5840(v3) )
      {
        v4 = (CImageDisplay *)sub_5DCB00(i);
        v5 = sub_5D5A90(v4, &v15);
        v6 = (_DWORD *)sub_64C630(v14, *v5, v5[1]);
        if ( (unsigned __int8)sub_64C6E0(*v6, v6[1]) )
        {
          v7 = (CImageDisplay *)sub_5DCB00(i);
          v8 = sub_5D5A90(v7, &v13);
          v9 = (_DWORD *)sub_64C630(v12, *v8, v8[1]);
          v10 = v9[1];
          LODWORD(v18) = *v9;
          HIDWORD(v18) = v10;
        }
      }
    }
  }
  *a1 = v18;
  return a1;
}


//======================================================================
// sub_5DAC40
// entry 005dac40  size 72  status ok
//======================================================================

int __stdcall sub_5DAC40(int a1, int a2)
{
  CImageDisplay *v2; // eax
  _DWORD *v3; // eax
  int v5; // [esp+4h] [ebp-10h] BYREF
  __int64 v6; // [esp+Ch] [ebp-8h] BYREF

  sub_5DAA20(&v6);
  v2 = (CImageDisplay *)sub_5DCB00(a2);
  v3 = sub_5D5A90(v2, &v5);
  sub_64C630(a1, *v3, v3[1]);
  return a1;
}


//======================================================================
// sub_5DAC90
// entry 005dac90  size 267  status ok
//======================================================================

int __thiscall sub_5DAC90(void *this)
{
  CImageDisplay *v2; // eax
  CImageDisplay *v3; // eax
  CImageDisplay *v4; // eax
  __int64 v5; // [esp-8h] [ebp-40h]
  __int64 v6; // [esp-8h] [ebp-40h]
  int v8; // [esp+4h] [ebp-34h] BYREF
  int v9; // [esp+Ch] [ebp-2Ch] BYREF
  int v10; // [esp+14h] [ebp-24h] BYREF
  __int64 v11; // [esp+1Ch] [ebp-1Ch]
  __int64 v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+2Ch] [ebp-Ch]
  int i; // [esp+30h] [ebp-8h]
  int v15; // [esp+34h] [ebp-4h]

  v15 = -1;
  v13 = sub_636610(dword_162EE84);
  v11 = sub_64C8A0(0, 0);
  v12 = v11;
  if ( sub_5DAF50(this) != -1 )
    return sub_5DAF50(this);
  for ( i = 0; i < v13; ++i )
  {
    v5 = v12;
    v2 = (CImageDisplay *)sub_5DCB00(i);
    sub_5D5A90(v2, &v10);
    if ( (unsigned __int8)sub_64C6E0(v5, HIDWORD(v5)) )
    {
      v3 = (CImageDisplay *)sub_5DCB00(i);
      v12 = *(_QWORD *)sub_5D5A90(v3, &v9);
      v15 = i;
    }
    else
    {
      v6 = v12;
      v4 = (CImageDisplay *)sub_5DCB00(i);
      sub_5D5A90(v4, &v8);
      if ( (unsigned __int8)sub_64C720(v6, HIDWORD(v6)) )
        v15 = -1;
    }
  }
  return v15;
}


//======================================================================
// sub_5DADA0
// entry 005dada0  size 282  status ok
//======================================================================

int __thiscall sub_5DADA0(void *this)
{
  int v2; // esi
  CImageDisplay *v3; // eax
  int v4; // esi
  CImageDisplay *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  __int64 v8; // [esp-8h] [ebp-34h]
  int v10; // [esp+8h] [ebp-24h] BYREF
  int v11; // [esp+10h] [ebp-1Ch] BYREF
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  int i; // [esp+20h] [ebp-Ch]
  __int64 v15; // [esp+24h] [ebp-8h] BYREF

  v13 = -1;
  v12 = sub_636610(dword_162EE84);
  sub_5DAA20(&v15);
  if ( sub_5DAF50(this) != -1 )
    return -1;
  for ( i = 0; i < v12; ++i )
  {
    sub_5DCB00(i);
    v2 = sub_5D5A50();
    if ( v2 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 688))(this) )
      return -1;
    v8 = v15;
    v3 = (CImageDisplay *)sub_5DCB00(i);
    sub_5D5A90(v3, &v11);
    if ( (unsigned __int8)sub_64C6A0(v8, HIDWORD(v8)) )
    {
      sub_5DCB00(i);
      v4 = sub_5D5A50();
      if ( v4 > (*(int (__thiscall **)(void *))(*(_DWORD *)this + 688))(this) )
      {
        v5 = (CImageDisplay *)sub_5DCB00(i);
        v6 = sub_5D5A90(v5, &v10);
        v7 = v6[1];
        LODWORD(v15) = *v6;
        HIDWORD(v15) = v7;
        v13 = i;
      }
    }
  }
  return v13;
}


//======================================================================
// sub_5DAEC0
// entry 005daec0  size 140  status ok
//======================================================================

int __thiscall sub_5DAEC0(void *this)
{
  int v1; // esi
  int v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v4 = 0;
  v5 = sub_636610(dword_162EE84);
  for ( i = 0; i < v5; ++i )
  {
    sub_5DCB00(i);
    if ( sub_5D5A50() > 0 )
    {
      sub_5DCB00(i);
      v1 = sub_5D5A50();
      if ( v1 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 688))(this) )
        ++v4;
    }
  }
  return v4;
}


//======================================================================
// sub_5DAF50
// entry 005daf50  size 164  status ok
//======================================================================

int __thiscall sub_5DAF50(void *this)
{
  int v1; // esi
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v6 = 0;
  v4 = -1;
  v5 = sub_636610(dword_162EE84);
  for ( i = 0; i < v5; ++i )
  {
    sub_5DCB00(i);
    if ( sub_5D5A50() > 0 )
    {
      sub_5DCB00(i);
      v1 = sub_5D5A50();
      if ( v1 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 688))(this) )
      {
        ++v6;
        v4 = i;
      }
    }
  }
  if ( v6 == 1 )
    return v4;
  else
    return -1;
}


//======================================================================
// sub_5DB000
// entry 005db000  size 86  status ok
//======================================================================

bool __thiscall sub_5DB000(void *this)
{
  int v2; // esi

  if ( !sub_5DA7B0() )
    return 1;
  v2 = sub_5DA8C0();
  return v2 > sub_5DA8A0() && sub_5DAC90(this) != -1 || sub_5DAF50(this) != -1;
}


//======================================================================
// sub_5DB060
// entry 005db060  size 301  status ok
//======================================================================

char __thiscall sub_5DB060(void *this)
{
  const CHAR *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  CImageDisplay *v6; // eax
  int v7; // eax
  int v8; // eax
  const CHAR *v9; // [esp-8h] [ebp-1Ch]
  __int64 v10; // [esp-8h] [ebp-1Ch]
  LONG *p_top; // [esp+4h] [ebp-10h]
  CImageDisplay *v13; // [esp+8h] [ebp-Ch]

  if ( !sub_5DA7B0() )
    return 1;
  ++*(_DWORD *)(dword_7947E0 + 20216);
  if ( sub_5DAEC0(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 720))(this) )
    {
      v4 = sub_5DA880();
      v10 = sub_64C8A0(v4, 0);
      v5 = sub_5DAC90(this);
      v6 = (CImageDisplay *)sub_5DCB00(v5);
      sub_5D5CF0(v6, v10, SHIDWORD(v10));
      v7 = sub_5DAC90(this);
      v13 = (CImageDisplay *)sub_5DCB00(v7);
      p_top = &CImageDisplay::GetDisplayFormat(v13)->rcSource.top;
      v8 = sub_5DA880();
      sub_5DBF60(p_top, v8);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v9 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTOVER");
    v2 = (const CHAR *)sub_630F40("SID_CASINO_NOWINNER");
    sub_62FF10(v2, v9, 0);
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
      dword_162EE84,
      v3);
    return 0;
  }
}


//======================================================================
// sub_5DB190
// entry 005db190  size 162  status ok
//======================================================================

char __thiscall sub_5DB190(void *this)
{
  if ( !sub_5DA7B0() )
    return 1;
  if ( !sub_5DAEC0(this) )
    return 1;
  ++*(_DWORD *)(dword_7947E0 + 20216);
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 720))(this) )
  {
    --*(_DWORD *)(dword_7947E0 + 20216);
    return 1;
  }
  else
  {
    --*(_DWORD *)(dword_7947E0 + 20216);
    return 0;
  }
}


//======================================================================
// sub_5DB240
// entry 005db240  size 76  status ok
//======================================================================

int __thiscall sub_5DB240(void *this)
{
  int result; // eax
  int v2; // eax

  result = sub_5DA7B0();
  if ( !(_BYTE)result )
  {
    v2 = sub_5F2A60(5009, 0);
    result = sub_6026D0(v2);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 740))(this, 0);
  }
  return result;
}


//======================================================================
// sub_5DB290
// entry 005db290  size 46  status ok
//======================================================================

_DWORD *__stdcall sub_5DB290(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_5DB2C0
// entry 005db2c0  size 388  status ok
//======================================================================

int __thiscall sub_5DB2C0(void *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // edx
  char *v4; // [esp+4h] [ebp-34h]
  int v5; // [esp+8h] [ebp-30h]
  _BYTE v7[8]; // [esp+10h] [ebp-28h] BYREF
  void *v8; // [esp+18h] [ebp-20h]
  char *v9; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+28h] [ebp-10h]
  int v13; // [esp+34h] [ebp-4h]

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( (_BYTE)result )
  {
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 148))(v5);
    if ( (_BYTE)result )
    {
      if ( !dword_793578 )
      {
        v8 = operator new(0x19E4u);
        v13 = 0;
        if ( v8 )
          v4 = sub_57A790((char *)v8);
        else
          v4 = 0;
        v9 = v4;
        v13 = -1;
        dword_793578 = (int)v4;
        (*(void (__thiscall **)(char *))(*(_DWORD *)v4 + 60))(v4);
        v2 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 732))(this, v7);
        v3 = v2[1];
        v11 = *v2;
        v12 = v3;
        CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(v11, v3);
      }
      if ( (unsigned __int8)sub_5DF700(-1) )
      {
        sub_5F2CB0(5019);
        sub_5F85D0(dword_793578);
        return sub_57B1B0(dword_793578);
      }
      else
      {
        sub_5F2CE0(5019);
        sub_5F2BA0(5009);
        return sub_57B720((_DWORD *)dword_793578);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5DB450
// entry 005db450  size 183  status ok
//======================================================================

int __stdcall sub_5DB450(int a1)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-1Ch]
  _AFX_OLE_STATE *v3; // [esp+Ch] [ebp-14h]

  if ( !dword_163068C )
  {
    v3 = (_AFX_OLE_STATE *)operator new(0x1ECu);
    if ( v3 )
      v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v3);
    else
      v2 = 0;
    dword_163068C = (int)v2;
    (*(void (__thiscall **)(_AFX_OLE_STATE *))(*(_DWORD *)v2 + 60))(v2);
    sub_5F7340(0, 0);
  }
  return sub_64EE70(a1);
}


//======================================================================
// sub_5DB510
// entry 005db510  size 177  status ok
//======================================================================

int sub_5DB510()
{
  _AFX_OLE_STATE *v1; // [esp+4h] [ebp-1Ch]
  _AFX_OLE_STATE *v2; // [esp+Ch] [ebp-14h]

  if ( !dword_16306A0 )
  {
    v2 = (_AFX_OLE_STATE *)operator new(0x1C0u);
    if ( v2 )
      v1 = _AFX_OLE_STATE::_AFX_OLE_STATE(v2);
    else
      v1 = 0;
    dword_16306A0 = (int)v1;
    (*(void (__thiscall **)(_AFX_OLE_STATE *))(*(_DWORD *)v1 + 60))(v1);
    sub_5F7340(0, 0);
  }
  return sub_64ED80();
}


//======================================================================
// sub_5DB5D0
// entry 005db5d0  size 508  status ok
//======================================================================

int __stdcall sub_5DB5D0(char a1, char a2, int a3, int a4, unsigned __int8 a5)
{
  int v5; // esi
  const CHAR *v6; // eax
  const CHAR *v8; // [esp-8h] [ebp-5Ch]
  int v9; // [esp+8h] [ebp-4Ch]
  char *Str2; // [esp+14h] [ebp-40h]
  void *v11; // [esp+18h] [ebp-3Ch]
  char Buffer[16]; // [esp+28h] [ebp-2Ch] BYREF
  char v13; // [esp+3Fh] [ebp-15h]
  int i; // [esp+40h] [ebp-14h]
  CImageDisplay *v15; // [esp+44h] [ebp-10h]
  int v16; // [esp+50h] [ebp-4h]

  v13 = 0;
  if ( !sub_5DA830() )
    goto LABEL_14;
  v15 = (CImageDisplay *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 796))(dword_7947E0);
  for ( i = 0; i < 100; ++i )
  {
    sprintf(Buffer, "user%d.log", i);
    if ( (unsigned __int8)sub_63AB10(Buffer) )
    {
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v15)->rcSource.top;
      if ( !(unsigned __int8)sub_6368B0(Str2) )
      {
        v5 = sub_5D5A50();
        if ( v5 >= sub_5DA880() )
        {
          v13 = 1;
          break;
        }
      }
    }
  }
  if ( v15 )
    (**(void (__thiscall ***)(CImageDisplay *, int))v15)(v15, 1);
  if ( v13 )
  {
LABEL_14:
    if ( !dword_16306B0 )
    {
      v11 = operator new(0x1ECu);
      v16 = 0;
      if ( v11 )
        v9 = sub_5E36B0(a1, a2, a3, a4, a5);
      else
        v9 = 0;
      v16 = -1;
      dword_16306B0 = v9;
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 60))(v9);
      sub_5F7340(0, 0);
    }
    return sub_64EC80(a1, a2, a3, a5, 0);
  }
  else
  {
    v8 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTPLAY");
    v6 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENT_OTHERS_NOTENOUGHMONEY");
    return sub_62FF10(v6, v8, 0);
  }
}


//======================================================================
// sub_5DB7D0
// entry 005db7d0  size 188  status ok
//======================================================================

int __stdcall sub_5DB7D0(__int16 a1, __int16 a2)
{
  _DWORD *v3; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  if ( !dword_7947AC )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v3 = sub_5CDAD0(v4);
    else
      v3 = 0;
    dword_7947AC = (int)v3;
    (*(void (__thiscall **)(_DWORD *))(*v3 + 60))(v3);
    sub_5F7340(a1, a2);
  }
  return sub_5F85D0(dword_7947AC);
}


//======================================================================
// sub_5DB890
// entry 005db890  size 41  status ok
//======================================================================

int sub_5DB890()
{
  int result; // eax

  if ( dword_7947AC )
  {
    result = sub_5F8990(dword_7947AC);
    dword_7947AC = 0;
  }
  return result;
}


//======================================================================
// sub_5DB8C0
// entry 005db8c0  size 229  status ok
//======================================================================

char __stdcall sub_5DB8C0(__int16 a1, __int16 a2)
{
  char result; // al
  _DWORD *v3; // [esp+4h] [ebp-20h]
  _DWORD *v4; // [esp+10h] [ebp-14h]

  if ( !dword_7947B0 )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v3 = sub_5CDBD0(v4);
    else
      v3 = 0;
    dword_7947B0 = (int)v3;
    (*(void (__thiscall **)(_DWORD *))(*v3 + 60))(v3);
    sub_5F7340(a1, a2);
  }
  sub_5F85D0(dword_7947B0);
  result = *((_BYTE *)dword_162EE84 + 37);
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_7947B0 + 24))(dword_7947B0, 0);
  return result;
}


//======================================================================
// sub_5DB9B0
// entry 005db9b0  size 41  status ok
//======================================================================

int sub_5DB9B0()
{
  int result; // eax

  if ( dword_7947B0 )
  {
    result = sub_5F8990(dword_7947B0);
    dword_7947B0 = 0;
  }
  return result;
}


//======================================================================
// sub_5DB9E0
// entry 005db9e0  size 343  status ok
//======================================================================

int __thiscall sub_5DB9E0(void *this, int a2)
{
  int result; // eax
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // [esp-4h] [ebp-38h]
  _DWORD *v7; // [esp+4h] [ebp-30h]
  _BYTE v9[8]; // [esp+Ch] [ebp-28h] BYREF
  void *v10; // [esp+14h] [ebp-20h]
  _DWORD *v11; // [esp+18h] [ebp-1Ch]
  CImageDisplay *v12; // [esp+1Ch] [ebp-18h]
  int v13; // [esp+20h] [ebp-14h]
  int v14; // [esp+24h] [ebp-10h]
  int v15; // [esp+30h] [ebp-4h]

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( (_BYTE)result && !dword_163068C && !dword_16306B0 )
  {
    v12 = (CImageDisplay *)sub_5D89B0(this, a2);
    if ( !dword_7947B4 )
    {
      v10 = operator new(0x1BCu);
      v15 = 0;
      if ( v10 )
        v7 = sub_5CDD90(v10);
      else
        v7 = 0;
      v11 = v7;
      v15 = -1;
      dword_7947B4 = (int)v7;
    }
    sub_5CDE20((CMFCTabCtrl *)dword_7947B4, v12);
    v3 = (int *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD))(*(_DWORD *)this + 748))(this, v9, *((_DWORD *)v12 + 1));
    v4 = v3[1];
    v13 = *v3;
    v14 = v4;
    if ( v13 || v14 )
    {
      CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(v13, v14);
    }
    else
    {
      v6 = sub_646E70(*((_DWORD *)v12 + 8)) - 80;
      v5 = sub_646E40(*((_DWORD *)v12 + 8));
      CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(v5 - 20, v6);
    }
    return sub_5F85D0(dword_7947B4);
  }
  return result;
}


//======================================================================
// sub_5DBB40
// entry 005dbb40  size 41  status ok
//======================================================================

int sub_5DBB40()
{
  int result; // eax

  if ( dword_7947B4 )
  {
    result = sub_5F8990(dword_7947B4);
    dword_7947B4 = 0;
  }
  return result;
}


//======================================================================
// sub_5DBB70
// entry 005dbb70  size 345  status ok
//======================================================================

int __stdcall sub_5DBB70(int a1)
{
  int result; // eax
  int Method; // esi
  const CHAR *v3; // eax
  int v4; // eax
  const CHAR *v5; // [esp-Ch] [ebp-30h]
  _DWORD *v6; // [esp+8h] [ebp-1Ch]
  _DWORD *v7; // [esp+10h] [ebp-14h]

  result = sub_5DA7B0();
  if ( !(_BYTE)result )
  {
    if ( byte_795F95 )
    {
      Method = CDeferredCommand::GetMethod(dword_162EE84);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
      if ( Method != result )
      {
        v5 = (const CHAR *)sub_630F40("SID_CASINO_DEMO_SHORTAPPNAME");
        v3 = (const CHAR *)sub_630F40("SID_CASINO_DEMO_NOLOANS");
        sub_62FF30(v3, v5, 0, 3200263);
        v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
        return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
                 dword_162EE84,
                 v4);
      }
    }
    else
    {
      if ( !dword_7947B8 )
      {
        v7 = operator new(0x1C0u);
        if ( v7 )
          v6 = sub_5CE250(v7);
        else
          v6 = 0;
        dword_7947B8 = (int)v6;
        sub_5CE2E0(v6, a1);
        sub_5F7340(0, 0);
      }
      return sub_5F85D0(dword_7947B8);
    }
  }
  return result;
}


//======================================================================
// sub_5DBCD0
// entry 005dbcd0  size 41  status ok
//======================================================================

int sub_5DBCD0()
{
  int result; // eax

  if ( dword_7947B8 )
  {
    result = sub_5F8990(dword_7947B8);
    dword_7947B8 = 0;
  }
  return result;
}


//======================================================================
// sub_5DBD00
// entry 005dbd00  size 273  status ok
//======================================================================

int __thiscall sub_5DBD00(void *this, int a2, int a3)
{
  int v3; // eax
  const CHAR *v4; // eax
  const CHAR *v6; // [esp-8h] [ebp-30h]
  _DWORD *v7; // [esp+4h] [ebp-24h]
  _DWORD *v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+24h] [ebp-4h]

  v3 = sub_5DCB00(0);
  (*(void (__thiscall **)(void *, int *, int))(*(_DWORD *)this + 680))(this, &v10, v3);
  if ( v10 >= 1000 )
  {
    if ( !dword_7947BC )
    {
      v9 = operator new(0x1C4u);
      v11 = 0;
      if ( v9 )
        v7 = sub_5CE650(v9, a2, a3);
      else
        v7 = 0;
      v11 = -1;
      dword_7947BC = (int)v7;
      (*(void (__thiscall **)(_DWORD *))(*v7 + 60))(v7);
      sub_5F7340(0, 0);
    }
    return sub_5F85D0(dword_7947BC);
  }
  else
  {
    v6 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTPLAY");
    v4 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENT_NEEDMONEYTOPLAY");
    return sub_62FF10(v4, v6, 0);
  }
}


//======================================================================
// sub_5DBE20
// entry 005dbe20  size 41  status ok
//======================================================================

int sub_5DBE20()
{
  int result; // eax

  if ( dword_7947BC )
  {
    result = sub_5F8990(dword_7947BC);
    dword_7947BC = 0;
  }
  return result;
}


//======================================================================
// sub_5DBE50
// entry 005dbe50  size 209  status ok
//======================================================================

int __cdecl sub_5DBE50()
{
  int result; // eax
  _DWORD *v1; // [esp+4h] [ebp-1Ch]
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  if ( !dword_7947C0 )
  {
    v2 = operator new(0x1BCu);
    if ( v2 )
      v1 = sub_5CEB60(v2);
    else
      v1 = 0;
    dword_7947C0 = (int)v1;
    (*(void (__thiscall **)(_DWORD *))(*v1 + 60))(v1);
    CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(0, 0);
  }
  sub_5CEC40();
  result = (unsigned __int8)sub_5F88F0(dword_7947C0);
  if ( (_BYTE)result )
    return sub_5F85D0(dword_7947C0);
  return result;
}


//======================================================================
// sub_5DBF30
// entry 005dbf30  size 41  status ok
//======================================================================

int sub_5DBF30()
{
  int result; // eax

  if ( dword_7947C0 )
  {
    result = sub_5F8990(dword_7947C0);
    dword_7947C0 = 0;
  }
  return result;
}


//======================================================================
// sub_5DBF60
// entry 005dbf60  size 308  status ok
//======================================================================

_BYTE *__thiscall sub_5DBF60(void *this, int a2, int a3)
{
  int v3; // eax
  CImageDisplay *v4; // eax
  int *v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+4h] [ebp-30h]
  int v10; // [esp+8h] [ebp-2Ch]
  _BYTE *v11; // [esp+10h] [ebp-24h]
  _BYTE *v13; // [esp+18h] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-14h] BYREF
  int v15; // [esp+30h] [ebp-4h]

  v3 = sub_5DAC90(this);
  v4 = (CImageDisplay *)sub_5DCB00(v3);
  v5 = sub_5D5A90(v4, &v14);
  v10 = v5[1];
  v9 = *v5;
  v6 = sub_5DAC90(this);
  sub_5E7E40(v6, 5, v9, v10);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    101019,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  if ( !dword_7947C4 )
  {
    v13 = operator new(0x1C0u);
    v15 = 0;
    if ( v13 )
      v11 = sub_5CECC0(v13);
    else
      v11 = 0;
    v15 = -1;
    dword_7947C4 = (int)v11;
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 756))(this);
    sub_5CEE20((_DWORD **)dword_7947C4, a2, a3, v7);
    sub_5F7340(0, 0);
  }
  return sub_5CEF60((_BYTE *)dword_7947C4);
}


//======================================================================
// sub_5DC0A0
// entry 005dc0a0  size 41  status ok
//======================================================================

int sub_5DC0A0()
{
  int result; // eax

  if ( dword_7947C4 )
  {
    result = sub_5F8990(dword_7947C4);
    dword_7947C4 = 0;
  }
  return result;
}


//======================================================================
// sub_5DC0D0
// entry 005dc0d0  size 180  status ok
//======================================================================

_BYTE *sub_5DC0D0()
{
  _BYTE *v1; // [esp+4h] [ebp-1Ch]
  _BYTE *v2; // [esp+Ch] [ebp-14h]

  if ( !dword_7947C8 )
  {
    v2 = operator new(0x1C4u);
    if ( v2 )
      v1 = sub_5CEFB0(v2);
    else
      v1 = 0;
    dword_7947C8 = (int)v1;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v1 + 60))(v1);
    sub_5F7340(0, 0);
  }
  return sub_5CF3E0((_BYTE *)dword_7947C8);
}


//======================================================================
// sub_5DC190
// entry 005dc190  size 41  status ok
//======================================================================

int sub_5DC190()
{
  int result; // eax

  if ( dword_7947C8 )
  {
    result = sub_5F8990(dword_7947C8);
    dword_7947C8 = 0;
  }
  return result;
}


//======================================================================
// sub_5DC1C0
// entry 005dc1c0  size 230  status ok
//======================================================================

int __cdecl sub_5DC1C0()
{
  const CHAR *v0; // eax
  const CHAR *v2; // [esp-8h] [ebp-28h]
  _DWORD *v3; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  if ( byte_795F95 )
  {
    v2 = (const CHAR *)sub_630F40("SID_CASINO_DEMO_SHORTAPPNAME");
    v0 = (const CHAR *)sub_630F40("SID_CASINO_DEMO_NOLOANS");
    return sub_62FF10(v0, v2, 0);
  }
  else
  {
    if ( !dword_7947CC )
    {
      v4 = operator new(0x1C4u);
      if ( v4 )
        v3 = sub_5CF470(v4);
      else
        v3 = 0;
      dword_7947CC = (int)v3;
      (*(void (__thiscall **)(_DWORD *))(*v3 + 60))(v3);
      sub_5F7340(0, 0);
    }
    return sub_5F85D0(dword_7947CC);
  }
}


//======================================================================
// sub_5DC2B0
// entry 005dc2b0  size 41  status ok
//======================================================================

int sub_5DC2B0()
{
  int result; // eax

  if ( dword_7947CC )
  {
    result = sub_5F8990(dword_7947CC);
    dword_7947CC = 0;
  }
  return result;
}


//======================================================================
// sub_5DC2E0
// entry 005dc2e0  size 200  status ok
//======================================================================

void __cdecl sub_5DC2E0()
{
  _DWORD *v0; // [esp+4h] [ebp-1Ch]
  _DWORD *v1; // [esp+Ch] [ebp-14h]

  if ( !dword_16306A0 && !dword_163068C )
  {
    if ( !dword_7947D0 )
    {
      v1 = operator new(0x1BCu);
      if ( v1 )
        v0 = sub_5CFAF0(v1);
      else
        v0 = 0;
      dword_7947D0 = (int)v0;
      (*(void (__thiscall **)(_DWORD *))(*v0 + 60))(v0);
      sub_5F7340(0, 0);
    }
    sub_5F85D0(dword_7947D0);
  }
}


//======================================================================
// sub_5DC3B0
// entry 005dc3b0  size 41  status ok
//======================================================================

int sub_5DC3B0()
{
  int result; // eax

  if ( dword_7947D0 )
  {
    result = sub_5F8990(dword_7947D0);
    dword_7947D0 = 0;
  }
  return result;
}


//======================================================================
// sub_5DC3E0
// entry 005dc3e0  size 257  status ok
//======================================================================

char __stdcall sub_5DC3E0(CImageDisplay *a1)
{
  int v1; // eax
  _BYTE *v3; // [esp+4h] [ebp-20h]
  _BYTE *v4; // [esp+10h] [ebp-14h]

  LOBYTE(v1) = byte_795F95;
  if ( !byte_795F95 && !dword_16306A0 && !dword_163068C )
  {
    v1 = sub_5D52E0(a1);
    if ( *(_BYTE *)(v1 + 42) == 6 )
    {
      LOBYTE(v1) = sub_5D70E0((int)a1, 1, 1000000);
    }
    else if ( !dword_7947D4 )
    {
      v4 = operator new(0x204u);
      if ( v4 )
        v3 = sub_5CFE70(v4);
      else
        v3 = 0;
      dword_7947D4 = (int)v3;
      sub_5CFF20(v3, (int)a1);
      sub_5F7340(0, 0);
      LOBYTE(v1) = sub_5D0140(dword_7947D4);
    }
  }
  return v1;
}


//======================================================================
// sub_5DC4F0
// entry 005dc4f0  size 41  status ok
//======================================================================

int sub_5DC4F0()
{
  int result; // eax

  if ( dword_7947D4 )
  {
    result = sub_5F8990(dword_7947D4);
    dword_7947D4 = 0;
  }
  return result;
}


//======================================================================
// sub_5DC520
// entry 005dc520  size 178  status ok
//======================================================================

_BYTE *__stdcall sub_5DC520(char *Source)
{
  char *v2; // [esp+4h] [ebp-1Ch]
  _BYTE *v3; // [esp+Ch] [ebp-14h]

  if ( !dword_7947D8 )
  {
    v3 = operator new(0x1F0u);
    if ( v3 )
      v2 = sub_5D0500(v3);
    else
      v2 = 0;
    dword_7947D8 = (int)v2;
    sub_5D05A0(v2, Source);
    sub_5F7340(0, 0);
  }
  return sub_5D06F0((_BYTE *)dword_7947D8);
}


//======================================================================
// sub_5DC5E0
// entry 005dc5e0  size 41  status ok
//======================================================================

int sub_5DC5E0()
{
  int result; // eax

  if ( dword_7947D8 )
  {
    result = sub_5F8990(dword_7947D8);
    dword_7947D8 = 0;
  }
  return result;
}


//======================================================================
// sub_5DC610
// entry 005dc610  size 399  status ok
//======================================================================

int __cdecl sub_5DC610()
{
  CImageDisplay *v0; // eax
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-3Ch]
  _DWORD *v4; // [esp+4h] [ebp-30h]
  CImageDisplay *v6; // [esp+10h] [ebp-24h]
  _DWORD *v7; // [esp+1Ch] [ebp-18h]
  int i; // [esp+24h] [ebp-10h]

  if ( !(unsigned __int8)sub_635CB0(8) )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      v6 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
      {
        v0 = (CImageDisplay *)sub_5DCB00(i);
        if ( *(_DWORD *)(sub_5D52E0(v0) + 44) )
        {
          v3 = (const CHAR *)sub_630F40("SID_KENO_WINNER");
          v1 = (const CHAR *)sub_630F40("SID_KENO_COLLECTWINNINGS");
          sub_62FF10(v1, v3, 0);
          break;
        }
      }
    }
  }
  if ( !dword_793584 )
  {
    v7 = operator new(0x3C10u);
    if ( v7 )
      v4 = sub_585F20(v7);
    else
      v4 = 0;
    dword_793584 = (int)v4;
    (*(void (__thiscall **)(_DWORD *))(*v4 + 60))(v4);
    sub_5F7340(0, 0);
  }
  return sub_588300((_DWORD **)dword_793584);
}


//======================================================================
// sub_5DC7A0
// entry 005dc7a0  size 46  status ok
//======================================================================

int __thiscall sub_5DC7A0(CMFCToolBarsCustomizeDialog *this)
{
  unsigned int Flags; // esi
  int result; // eax

  Flags = CMFCToolBarsCustomizeDialog::GetFlags(this);
  result = sub_5EB240(this);
  if ( Flags == result )
    return sub_5D8F90(dword_7947E4);
  return result;
}


//======================================================================
// sub_5DC7D0
// entry 005dc7d0  size 266  status ok
//======================================================================

int __thiscall sub_5DC7D0(void *this, int a2, int a3)
{
  CImageDisplay *v3; // eax
  CImageDisplay *v4; // eax
  char v6; // [esp-8h] [ebp-14h]
  int i; // [esp+8h] [ebp-4h]

  if ( a2 <= 3203001 )
  {
    switch ( a2 )
    {
      case 3203001:
        return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 820))(
                 dword_162EE84,
                 8,
                 -1);
      case 5009:
        sub_5DB240(this);
        break;
      case 5019:
        v3 = (CImageDisplay *)sub_5DCB00(0);
        v6 = !sub_5D54A0(v3, (struct Concurrency::details::_TaskCollectionBase *)0xFFFFFFFF);
        v4 = (CImageDisplay *)sub_5DCB00(0);
        sub_5D5500(v4, v6, (struct Concurrency::details::_TaskCollectionBase *)0xFFFFFFFF);
        sub_637610(dword_162EE84);
        (*(void (__thiscall **)(void *))(*(_DWORD *)this + 736))(this);
        break;
    }
    return sub_64DB70(a2, a3);
  }
  if ( a2 != 3203002 )
    return sub_64DB70(a2, a3);
  for ( i = 0; i < 4; ++i )
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 656))(this, i);
  return sub_5DC610();
}


//======================================================================
// sub_5DC8E0
// entry 005dc8e0  size 229  status ok
//======================================================================

int __thiscall sub_5DC8E0(_DWORD *this)
{
  int result; // eax
  _BYTE *v2; // [esp+4h] [ebp-20h]
  unsigned __int8 v4; // [esp+Fh] [ebp-15h]
  _BYTE *v5; // [esp+10h] [ebp-14h]

  result = (unsigned __int8)byte_795F94;
  if ( !byte_795F94 && !byte_795F95 )
  {
    if ( !*(this + 23) || (v4 = *(_BYTE *)(*(this + 23) + 400), (result = v4) == 0) )
    {
      if ( !*(this + 23) )
      {
        v5 = operator new(0x194u);
        if ( v5 )
        {
          sub_5F5F50(v5);
          *(_DWORD *)v5 = &HofAnimation::`vftable';
          v5[400] = 1;
          v2 = v5;
        }
        else
        {
          v2 = 0;
        }
        *(this + 23) = v2;
      }
      return sub_5E85D0();
    }
  }
  return result;
}


//======================================================================
// sub_5DC9D0
// entry 005dc9d0  size 33  status ok
//======================================================================

int __thiscall sub_5DC9D0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 23) )
    return sub_5E86B0(*(this + 23));
  return result;
}


//======================================================================
// sub_5DCA30
// entry 005dca30  size 53  status ok
//======================================================================

void *__thiscall sub_5DCA30(_DWORD *this, char a2)
{
  void *v3; // [esp+0h] [ebp-4h]

  *this = &HofAnimation::`vftable';
  sub_5F5FA0(this);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}


//======================================================================
// sub_5DCA70
// entry 005dca70  size 10  status ok
//======================================================================

const char *sub_5DCA70()
{
  return "Hoyle Casino";
}


//======================================================================
// sub_5DCA80
// entry 005dca80  size 128  status ok
//======================================================================

int sub_5DCA80()
{
  int v1; // [esp+4h] [ebp-18h]

  if ( operator new(0x4F84u) )
    v1 = sub_5DCB80();
  else
    v1 = 0;
  dword_7947E0 = v1;
  return v1;
}


//======================================================================
// sub_5DCB00
// entry 005dcb00  size 114  status ok
//======================================================================

int __cdecl sub_5DCB00(int a1)
{
  int v1; // ecx

  if ( dword_162EE84
    && *((_DWORD *)dword_162EE84 + 22)
    && a1 >= 0
    && a1 < (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 268))(
              dword_162EE84,
              v1) )
  {
    return _RTDynamicCast(
             *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a1),
             0,
             &Player `RTTI Type Descriptor',
             &CasinoPlayer `RTTI Type Descriptor',
             0);
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_5DCB80
// entry 005dcb80  size 499  status ok
//======================================================================

_BYTE *__thiscall sub_5DCB80(_BYTE *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  sub_6316E0(640, 480);
  *(_DWORD *)this = &CasinoShell::`vftable';
  *(this + 20200) = 0;
  *(this + 20201) = 0;
  *(this + 20202) = 0;
  *(this + 20229) = 0;
  *((_DWORD *)this + 5051) = 0;
  *((_DWORD *)this + 5052) = 0;
  *((_DWORD *)this + 5053) = 2;
  *((_DWORD *)this + 5054) = 1;
  *((_DWORD *)this + 5055) = -1;
  *((_DWORD *)this + 5056) = -1;
  *(this + 20228) = 0;
  *(this + 148) = 0;
  *((_DWORD *)this + 5058) = 100;
  *((_DWORD *)this + 5059) = 5;
  *((_DWORD *)this + 5060) = 1;
  *((_DWORD *)this + 5065) = -1;
  *((_DWORD *)this + 5066) = -1;
  *((_DWORD *)this + 5049) = 200000;
  sub_5DE880(0);
  sub_5DE880(1);
  sub_5DE880(5);
  sub_5DE880(25);
  sub_5DE880(100);
  *((_DWORD *)this + 5063) = *((_DWORD *)this + 8) + 200;
  sub_5E0CC0(this);
  *((_DWORD *)this + 5067) = 0;
  *((_DWORD *)this + 5068) = 0;
  *(this + 37) = 0;
  v4 = operator new(4u);
  if ( v4 )
    v2 = ATL::CComPtrBase<IConnectionPoint>::CComPtrBase<IConnectionPoint>(v4);
  else
    v2 = 0;
  dword_79506C = v2;
  *(this + 20276) = 0;
  return this;
}


//======================================================================
// sub_5DCD80
// entry 005dcd80  size 16  status ok
//======================================================================

int sub_5DCD80()
{
  return 3200000;
}


//======================================================================
// sub_5DCD90
// entry 005dcd90  size 220  status ok
//======================================================================

int __thiscall sub_5DCD90(void *this)
{
  int *v1; // eax
  CImageDisplay *v5; // [esp+8h] [ebp-14h]
  int i; // [esp+14h] [ebp-8h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( sub_5DCB00(i) )
    {
      v5 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
      {
        if ( *(_DWORD *)(sub_5DCB00(i) + 1204) )
        {
          v1 = (int *)sub_5DCB00(i);
          sub_5D74B0(v1);
        }
      }
    }
  }
  return sub_631960(this);
}


//======================================================================
// sub_5DCE70
// entry 005dce70  size 171  status ok
//======================================================================

int __thiscall sub_5DCE70(_DWORD *this)
{
  void *v2; // [esp+10h] [ebp-10h]

  *this = &CasinoShell::`vftable';
  if ( dword_79506C )
  {
    v2 = (void *)dword_79506C;
    sub_5E7470(dword_79506C);
    operator delete(v2);
    dword_79506C = 0;
  }
  return sub_631800();
}


//======================================================================
// sub_5DCF20
// entry 005dcf20  size 37  status ok
//======================================================================

int __thiscall sub_5DCF20(_BYTE *this)
{
  *(this + 76) = 0;
  sub_631C30(this);
  return sub_5E7490(dword_79506C);
}


//======================================================================
// sub_5DCF70
// entry 005dcf70  size 1157  status ok
//======================================================================

int __thiscall sub_5DCF70(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+0h] [ebp-4Ch]
  int v4; // [esp+4h] [ebp-48h]
  int v5; // [esp+8h] [ebp-44h]
  int v6; // [esp+Ch] [ebp-40h]
  int v7; // [esp+10h] [ebp-3Ch]
  int v9; // [esp+28h] [ebp-24h]
  int i; // [esp+3Ch] [ebp-10h]
  int v11; // [esp+40h] [ebp-Ch]
  __time64_t Time; // [esp+44h] [ebp-8h] BYREF

  sub_5F3130(this);
  Time = 0;
  time64(&Time);
  if ( Time <= 0 )
    sub_5E9F20((char)"t > 0", "..\\Casino\\casinoshell.cpp", 380);
  if ( (((unsigned __int64)(Time - qword_794900) >> 32) & 0x80000000) != 0LL
    || Time >= qword_794900 && (unsigned __int64)(Time - qword_794900) >> 32 != 0
    || (unsigned int)(Time - qword_794900) > 0xB4 )
  {
    qword_794900 = Time;
    if ( dword_7960D8 )
    {
      if ( *(_DWORD *)(dword_7960D8 + 8) && dword_7947E0 )
      {
        sub_60A4D0(*(_DWORD *)(dword_7960D8 + 8));
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 900))(dword_7947E0);
      }
    }
  }
  if ( dword_162EE80 )
    sub_5D8850();
  if ( *(_BYTE *)(this + 37) && *(_BYTE *)(this + 38) && byte_79346D )
  {
    sub_579D50();
  }
  else if ( *(_BYTE *)(this + 37)
         && dword_162EE80
         && !(unsigned __int8)sub_636760(this)
         && !(unsigned __int8)sub_5F3B50(this)
         && *(_DWORD *)(this + 32) > dword_793574 )
  {
    if ( byte_79346D )
    {
      dword_793574 = *(_DWORD *)(this + 32) + sub_579DA0();
    }
    else
    {
      *((_BYTE *)dword_162EE84 + 37) = 0;
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 360))(dword_7947E4) )
      {
        *((_BYTE *)dword_162EE84 + 37) = 1;
        dword_793574 = *(_DWORD *)(this + 32) + sub_579DA0();
      }
    }
  }
  result = this;
  if ( *(_DWORD *)(this + 32) > *(_DWORD *)(this + 20252) )
  {
    if ( ++dword_7948F8 >= 1000 )
    {
      dword_7948F8 = 0;
      v9 = time64(0);
      sub_614670(v9);
      for ( i = 0; i < 20; ++i )
      {
        v2 = sub_62FBF0(1000000000);
        sub_614670(v2);
      }
    }
    *(_DWORD *)(this + 20252) = *(_DWORD *)(this + 32) + 200;
    v11 = sub_62FBF0(8000);
    if ( v11 == 98 )
    {
      sub_5DE880(0);
    }
    else
    {
      *(_DWORD *)(this + 20176) += sub_62FBF0(30);
      if ( *(int *)(this + 20176) >= 99000000 )
        v7 = 99000000;
      else
        v7 = *(_DWORD *)(this + 20176);
      *(_DWORD *)(this + 20176) = v7;
    }
    if ( v11 == 15 )
    {
      sub_5DE880(1);
    }
    else
    {
      *(_DWORD *)(this + 20180) += sub_62FBF0(45);
      if ( *(int *)(this + 20180) >= 99000000 )
        v6 = 99000000;
      else
        v6 = *(_DWORD *)(this + 20180);
      *(_DWORD *)(this + 20180) = v6;
    }
    if ( v11 == 23 )
    {
      sub_5DE880(5);
    }
    else
    {
      *(_DWORD *)(this + 20184) += sub_62FBF0(75);
      if ( *(int *)(this + 20184) >= 99000000 )
        v5 = 99000000;
      else
        v5 = *(_DWORD *)(this + 20184);
      *(_DWORD *)(this + 20184) = v5;
    }
    if ( v11 == 45 )
    {
      sub_5DE880(25);
    }
    else
    {
      *(_DWORD *)(this + 20188) += sub_62FBF0(150);
      if ( *(int *)(this + 20188) >= 99000000 )
        v4 = 99000000;
      else
        v4 = *(_DWORD *)(this + 20188);
      *(_DWORD *)(this + 20188) = v4;
    }
    if ( v11 == 57 )
    {
      return sub_5DE880(100);
    }
    else
    {
      *(_DWORD *)(this + 20192) += sub_62FBF0(500);
      if ( *(int *)(this + 20192) >= 99000000 )
        v3 = 99000000;
      else
        v3 = *(_DWORD *)(this + 20192);
      *(_DWORD *)(this + 20192) = v3;
      return v3;
    }
  }
  return result;
}


//======================================================================
// sub_5DD400
// entry 005dd400  size 41  status ok
//======================================================================

int __thiscall sub_5DD400(_BYTE *this, char a2)
{
  *(this + 148) = a2;
  return (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 900))(this, this);
}


//======================================================================
// sub_5DD430
// entry 005dd430  size 594  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__thiscall sub_5DD430(Concurrency::details::ContextBase *this)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  float v2; // [esp+8h] [ebp-34h]
  float v3; // [esp+Ch] [ebp-30h]
  double v4; // [esp+14h] [ebp-28h]
  float v5; // [esp+1Ch] [ebp-20h]
  float v6; // [esp+20h] [ebp-1Ch]
  double v7; // [esp+28h] [ebp-14h]
  char v9; // [esp+36h] [ebp-6h]
  char v10; // [esp+37h] [ebp-5h]
  int v11; // [esp+38h] [ebp-4h]

  v11 = 0;
  if ( dword_7947E4 && (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 596))(dword_7947E4) )
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 596))(dword_7947E4);
  v9 = sub_5F4720(v11);
  v10 = sub_5F4720(2405530);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(this) == (struct Concurrency::details::_TaskCollectionBase *)1002 )
  {
    if ( v9 )
      sub_5F47E0(v11);
    if ( v10 )
      sub_5F47E0(2405530);
    return (struct Concurrency::details::_TaskCollectionBase *)sub_5F4620(3200001, 1.0);
  }
  else
  {
    if ( (unsigned __int8)sub_5F4720(3200001) )
      sub_5F47E0(3200001);
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 828))(this, -1)
      || (result = Concurrency::details::ContextBase::GetExecutingCollection(this),
          result == (struct Concurrency::details::_TaskCollectionBase *)3200000) )
    {
      if ( (unsigned __int8)sub_6376D0(this) && !v9 )
        sub_5F4620(v11, 1.0);
      if ( !(unsigned __int8)sub_6376D0(this) && v9 )
        sub_5F47E0(v11);
      if ( (unsigned __int8)sub_637670(this) && !v10 )
      {
        if ( *((_BYTE *)this + 148) )
          v7 = 0.1;
        else
          v7 = 1.0;
        v6 = (double)sub_6377E0(this) / 10.0;
        v5 = v6 * v7;
        sub_5F4620(2405530, v5);
      }
      if ( !(unsigned __int8)sub_637670(this) && v10 )
        sub_5F47E0(2405530);
      result = (struct Concurrency::details::_TaskCollectionBase *)sub_5F4720(2405530);
      if ( (_BYTE)result )
      {
        if ( *((_BYTE *)this + 148) )
          v4 = 0.1;
        else
          v4 = 1.0;
        v3 = (double)sub_6377E0(this) / 10.0;
        v2 = v3 * v4;
        return (struct Concurrency::details::_TaskCollectionBase *)sub_5F4830(2405530, v2);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5DD690
// entry 005dd690  size 105  status ok
//======================================================================

int __thiscall sub_5DD690(_BYTE *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = 0;
  *(this + 148) = 0;
  if ( dword_7947E4
    && (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)dword_7947E4 + 596))(dword_7947E4, this, 0) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 596))(dword_7947E4);
  }
  return sub_5F47E0(v2);
}


//======================================================================
// sub_5DD700
// entry 005dd700  size 517  status ok
//======================================================================

char __thiscall sub_5DD700(Concurrency::details::ContextBase *this, char a2)
{
  const char *v3; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  const char *v5; // eax
  const CHAR *v6; // eax
  int v8; // [esp+4h] [ebp-154h]
  char v10[64]; // [esp+10h] [ebp-148h] BYREF
  char Buffer[260]; // [esp+50h] [ebp-108h] BYREF

  if ( *((_BYTE *)this + 37) )
    a2 = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 828))(this, -1) )
    return sub_5F39C0(a2);
  if ( !dword_7947E4 )
    goto LABEL_12;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 728))(dword_7947E4);
  if ( !v8 )
    return 0;
  if ( v8 == 1 )
    return 1;
LABEL_12:
  if ( *((_BYTE *)this + 36) || a2 )
  {
    *((_BYTE *)this + 36) = 1;
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 128))(dword_162EE80) )
    {
      v3 = (const char *)sub_630F40("SID_SHELL_CONFIRMQUIT_FORMAT");
      sprintf(Buffer, v3, byte_795634);
    }
    else
    {
      ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, char *))(*(_DWORD *)this + 824))(
        this,
        ExecutingCollection,
        v10);
      v5 = (const char *)sub_630F40("SID_CASINO_GAMEINPROGRESS_FORMAT");
      sprintf(Buffer, v5, v10);
    }
    v6 = (const CHAR *)sub_630F40("SID_SHELL_QUITTING");
    if ( sub_62FF10(Buffer, v6, 4u) == 6 )
    {
      if ( *((_DWORD *)this + 13) == 1100 )
        *((_BYTE *)this + 36) = 1;
      else
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 52))(this, 1100);
    }
  }
  return *((_BYTE *)this + 36) || *((_DWORD *)this + 11) == 1100;
}


//======================================================================
// sub_5DD910
// entry 005dd910  size 1031  status ok
//======================================================================

int __thiscall sub_5DD910(_BYTE *this)
{
  int v1; // eax
  _DWORD *v2; // eax
  int result; // eax
  int v4; // eax
  __int64 v5; // [esp-8h] [ebp-7Ch]
  int v6; // [esp+4h] [ebp-70h]
  CImageDisplay *v10; // [esp+20h] [ebp-54h]
  char *Str1; // [esp+2Ch] [ebp-48h]
  CImageDisplay *v12; // [esp+30h] [ebp-44h]
  char *Str2; // [esp+34h] [ebp-40h]
  CImageDisplay *v14; // [esp+38h] [ebp-3Ch]
  CImageDisplay *v15; // [esp+3Ch] [ebp-38h]
  void (__thiscall ***v16)(_DWORD, int); // [esp+4Ch] [ebp-28h]
  int j; // [esp+60h] [ebp-14h]
  __int64 v18; // [esp+64h] [ebp-10h] BYREF
  int i; // [esp+6Ch] [ebp-8h]
  int v20; // [esp+70h] [ebp-4h]

  v18 = sub_64C8A0(0, 0);
  v20 = 0;
  if ( dword_162EE80
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 128))(dword_162EE80)
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 828))(this, -1) )
  {
    *(this + 20229) = 1;
    sub_5DE170(this);
    *(this + 20229) = 0;
  }
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    v15 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 3 )
    {
      for ( j = i - 1; j > -1; --j )
      {
        v14 = (CImageDisplay *)sub_5DCB00(j);
        Str2 = (char *)&CImageDisplay::GetDisplayFormat(v14)->rcSource.top;
        v12 = (CImageDisplay *)sub_5DCB00(i);
        Str1 = (char *)&CImageDisplay::GetDisplayFormat(v12)->rcSource.top;
        if ( !strcmp(Str1, Str2) )
        {
          sub_5DCB00(i);
          sub_63A3E0(i, 0);
          break;
        }
      }
    }
  }
  for ( i = 0; ; ++i )
  {
    v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v1 )
      break;
    v20 = sub_5DCB00(i);
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 828))(this, -1) )
    {
      v10 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 128))(dword_162EE80)
          && !*(_BYTE *)(sub_5DCB00(i) + 1186) )
        {
          v18 = sub_64C8A0(0, 0);
          (*(void (__thiscall **)(int, int, __int64 *))(*(_DWORD *)dword_7947E4 + 636))(dword_7947E4, i, &v18);
          LODWORD(v18) = -(int)v18;
          HIDWORD(v18) = -HIDWORD(v18);
          v5 = v18;
          v2 = (_DWORD *)sub_5DCB00(i);
          sub_5D5FB0(v2, v5, SHIDWORD(v5));
        }
        if ( sub_5DA7B0() )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 664))(dword_7947E4, i);
        else
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 668))(dword_7947E4, i);
      }
    }
  }
  sub_636250(this);
  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    v16 = *(void (__thiscall ****)(_DWORD, int))(sub_5DCB00(i) + 1180);
    if ( v16 )
      (**v16)(v16, 1);
    *(_DWORD *)(sub_5DCB00(i) + 1180) = 0;
    v6 = sub_5DCB00(i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
    v4 = sub_5DCB00(i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 20))(v4, v4);
  }
  return result;
}


//======================================================================
// sub_5DDD20
// entry 005ddd20  size 1098  status ok
//======================================================================

int __thiscall sub_5DDD20(Concurrency::details::ContextBase *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v2; // eax
  int v4; // eax
  int v5; // [esp-8h] [ebp-90h]
  CImageDisplay *v10; // [esp+20h] [ebp-68h]
  CImageDisplay *v11; // [esp+24h] [ebp-64h]
  CImageDisplay *v12; // [esp+34h] [ebp-54h]
  char *Str1; // [esp+38h] [ebp-50h]
  CImageDisplay *v14; // [esp+3Ch] [ebp-4Ch]
  char *Str2; // [esp+40h] [ebp-48h]
  CImageDisplay *v16; // [esp+44h] [ebp-44h]
  CImageDisplay *v17; // [esp+48h] [ebp-40h]
  CImageDisplay *v18; // [esp+54h] [ebp-34h]
  int j; // [esp+60h] [ebp-28h]
  _DWORD v20[7]; // [esp+64h] [ebp-24h] BYREF
  int i; // [esp+80h] [ebp-8h]
  int v22; // [esp+84h] [ebp-4h]

  v22 = 0;
  if ( sub_5DA810() )
  {
    for ( i = 1;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      v18 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 3 )
      {
        sub_5DCB00(i);
        if ( sub_5D5A50() >= *((_DWORD *)this + 5051) )
        {
          for ( j = i - 1; j > -1; --j )
          {
            v17 = (CImageDisplay *)sub_5DCB00(j);
            if ( CImageDisplay::GetDisplayFormat(v17)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v17)->rcSource.left == 3 )
            {
              v16 = (CImageDisplay *)sub_5DCB00(j);
              Str2 = (char *)&CImageDisplay::GetDisplayFormat(v16)->rcSource.top;
              v14 = (CImageDisplay *)sub_5DCB00(i);
              Str1 = (char *)&CImageDisplay::GetDisplayFormat(v14)->rcSource.top;
              if ( !strcmp(Str1, Str2) )
              {
                sub_5DCB00(i);
                sub_63A3E0(i, 0);
              }
            }
          }
        }
        else
        {
          sub_5DCB00(i);
          sub_63A3E0(i, 0);
        }
      }
    }
  }
  v12 = (CImageDisplay *)sub_5DCB00(0);
  if ( *(_BYTE *)(sub_5D52E0(v12) + 93)
    || !dword_7947E4
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 608))(dword_7947E4)
    || sub_5DA810() )
  {
    return sub_6363E0(this);
  }
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, _DWORD *, _DWORD))(*(_DWORD *)this + 868))(
    this,
    ExecutingCollection,
    v20,
    0);
  for ( i = 0; ; ++i )
  {
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v2 )
      break;
    v11 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3 )
    {
      if ( v22 == v20[4] )
      {
        v5 = i;
        sub_5DCB00(i);
        sub_63A3E0(v5, 0);
        v10 = (CImageDisplay *)sub_5DCB00(i);
        CImageDisplay::GetDisplayFormat(v10)->rcSource.left = 0;
      }
      else
      {
        sub_5DCB00(i);
        sub_63A8D0(-1, 0, 1, 1, 1);
        ++v22;
      }
    }
  }
  if ( v22 >= v20[0] || !v20[6] )
    return v22;
  for ( i = 0; ; ++i )
  {
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v4 )
      break;
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i))->rcSource.left == 1 )
    {
      sub_5E9F20((char)"false", "..\\Casino\\casinoshell.cpp", 727);
      return v22;
    }
    if ( !CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i))->rcSource.left )
    {
      sub_63A8D0(-1, 0, 1, 1, 1);
      ++v22;
    }
    if ( v22 == v20[0] )
      return v22;
  }
  return v22;
}


//======================================================================
// sub_5DE170
// entry 005de170  size 129  status ok
//======================================================================

int __thiscall sub_5DE170(void *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-10h]
  CImageDisplay *v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-4h]

  v4 = 0;
  for ( result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 268))(
                   dword_162EE84,
                   this);
        v4 < result;
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, CImageDisplay *))(*(_DWORD *)dword_162EE84
                                                                                                  + 268))(
                   dword_162EE84,
                   v2,
                   v3) )
  {
    v3 = (CImageDisplay *)sub_5DCB00(v4);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 656))(dword_7947E4, v4);
    ++v4;
  }
  return result;
}


//======================================================================
// sub_5DE200
// entry 005de200  size 37  status ok
//======================================================================

char __stdcall sub_5DE200(int a1)
{
  char result; // al

  if ( dword_7947E4 )
    return sub_5D8F50((void *)dword_7947E4, a1);
  return result;
}


//======================================================================
// sub_5DE230
// entry 005de230  size 226  status ok
//======================================================================

int __stdcall sub_5DE230(char *Str2, _DWORD *a2)
{
  int v2; // eax
  CImageDisplay *v3; // eax
  char Buffer[16]; // [esp+8h] [ebp-51Ch] BYREF
  void (__thiscall ***v6[319])(_DWORD, int); // [esp+18h] [ebp-50Ch] BYREF
  int v7; // [esp+520h] [ebp-4h]

  sub_5D4CF0((char *)v6);
  v7 = 0;
  if ( (unsigned __int8)sub_6368B0(Str2) )
  {
    v2 = sub_6369B0(Str2);
    v3 = (CImageDisplay *)sub_5DCB00(v2);
    sub_5D5AC0(v3, a2);
  }
  else
  {
    sub_635F30(Str2, Buffer);
    sub_63AB10(Buffer);
    sub_5D5AC0((CImageDisplay *)v6, a2);
  }
  v7 = -1;
  return sub_5D4F50(v6);
}


//======================================================================
// sub_5DE320
// entry 005de320  size 294  status ok
//======================================================================

int __stdcall sub_5DE320(int a1)
{
  char *Str1; // [esp+8h] [ebp-24h]
  CImageDisplay *v4; // [esp+Ch] [ebp-20h]
  char *Str2; // [esp+10h] [ebp-1Ch]
  CImageDisplay *v6; // [esp+14h] [ebp-18h]
  CImageDisplay *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v8 = 1;
  if ( a1 < 0
    || a1 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    return 0;
  }
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( i != a1 )
    {
      v7 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
      {
        v6 = (CImageDisplay *)sub_5DCB00(i);
        Str2 = (char *)&CImageDisplay::GetDisplayFormat(v6)->rcSource.top;
        v4 = (CImageDisplay *)sub_5DCB00(a1);
        Str1 = (char *)&CImageDisplay::GetDisplayFormat(v4)->rcSource.top;
        if ( !strcmp(Str1, Str2) )
          ++v8;
      }
    }
  }
  return v8;
}


//======================================================================
// sub_5DE530
// entry 005de530  size 149  status ok
//======================================================================

char __stdcall sub_5DE530(int a1)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-8h]

  if ( sub_5DA830() )
  {
    v1 = sub_5D5A50();
    if ( v1 < sub_5DA880() )
      return 1;
  }
  else if ( dword_7947E4 )
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 744))(dword_7947E4, a1);
    if ( !v3 )
      return 0;
    if ( v3 == 1 )
      return 1;
  }
  return sub_636950(a1);
}


//======================================================================
// sub_5DE5D0
// entry 005de5d0  size 16  status ok
//======================================================================

int sub_5DE5D0()
{
  return 90;
}


//======================================================================
// sub_5DE5E0
// entry 005de5e0  size 22  status ok
//======================================================================

bool sub_5DE5E0()
{
  return sub_5DA830();
}


//======================================================================
// sub_5DE600
// entry 005de600  size 19  status ok
//======================================================================

int __thiscall sub_5DE600(void *this)
{
  return sub_6375B0(this);
}


//======================================================================
// sub_5DE620
// entry 005de620  size 574  status ok
//======================================================================

int __stdcall sub_5DE620(char *Str2, int *a2)
{
  int v2; // eax
  int v3; // eax
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // eax
  int v17; // [esp-8h] [ebp-554h]
  int v18; // [esp-4h] [ebp-550h]
  _BYTE v19[8]; // [esp+8h] [ebp-544h] BYREF
  __int64 v20; // [esp+10h] [ebp-53Ch]
  _BYTE v21[8]; // [esp+18h] [ebp-534h] BYREF
  __int64 v22; // [esp+20h] [ebp-52Ch]
  char Buffer[16]; // [esp+28h] [ebp-524h] BYREF
  int v24; // [esp+38h] [ebp-514h]
  _DWORD *v25; // [esp+3Ch] [ebp-510h]
  void (__thiscall ***v26[319])(_DWORD, int); // [esp+40h] [ebp-50Ch] BYREF
  int v27; // [esp+548h] [ebp-4h]

  sub_5D4CF0((char *)v26);
  v27 = 0;
  if ( (unsigned __int8)sub_6368B0(Str2) )
  {
    v2 = sub_6369B0(Str2);
    sub_5DCB00(v2);
    v25 = (_DWORD *)sub_63AAE0(8);
    v3 = sub_6369B0(Str2);
    sub_5DCB00(v3);
    v24 = sub_5D5A50() - *a2;
    v22 = sub_64C8A0(v24, 0);
    v4 = (int *)sub_64C630(v21, v22, HIDWORD(v22));
    v5 = *v4;
    v6 = v4[1];
    v7 = v25;
    *v25 = v5;
    v7[1] = v6;
    v18 = a2[1];
    v17 = *a2;
    v8 = sub_6369B0(Str2);
    v9 = sub_5DCB00(v8);
    sub_5D5AF0(v9, v17, v18);
    v10 = sub_6369B0(Str2);
    v11 = sub_5DCB00(v10);
    sub_63B0A0(v11);
  }
  else
  {
    sub_635F30(Str2, Buffer);
    if ( (unsigned __int8)sub_63AB10(Buffer) )
    {
      v25 = (_DWORD *)sub_63AAE0(8);
      v24 = sub_5D5A50() - *a2;
      v20 = sub_64C8A0(v24, 0);
      v12 = (int *)sub_64C630(v19, v20, HIDWORD(v20));
      v13 = *v12;
      v14 = v12[1];
      v15 = v25;
      *v25 = v13;
      v15[1] = v14;
      sub_5D5AF0((int)v26, *a2, a2[1]);
      sub_63B0A0(v26);
    }
  }
  v27 = -1;
  return sub_5D4F50(v26);
}


//======================================================================
// sub_5DE860
// entry 005de860  size 26  status ok
//======================================================================

char __thiscall sub_5DE860(void *this)
{
  CImageDisplay *v1; // eax

  v1 = (CImageDisplay *)sub_5DE600(this);
  return sub_5D5460(v1);
}


//======================================================================
// sub_5DE880
// entry 005de880  size 146  status ok
//======================================================================

_DWORD *__thiscall sub_5DE880(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  switch ( (unsigned int)a2 )
  {
    case 0u:
      *(this + 5044) = 2500;
      result = this;
      break;
    case 1u:
      *(this + 5045) = 10000;
      break;
    case 5u:
      *(this + 5046) = 50000;
      break;
    case 0x19u:
      *(this + 5047) = 100000;
      result = this;
      break;
    case 0x64u:
      *(this + 5048) = 1000000;
      break;
    default:
      result = (_DWORD *)sub_5E9F20((char)"false", "..\\Casino\\casinoshell.cpp", 913);
      break;
  }
  return result;
}


//======================================================================
// sub_5DE9A0
// entry 005de9a0  size 16  status ok
//======================================================================

int sub_5DE9A0()
{
  return 22;
}


//======================================================================
// sub_5DE9B0
// entry 005de9b0  size 16  status ok
//======================================================================

int sub_5DE9B0()
{
  return 22;
}


//======================================================================
// sub_5DE9C0
// entry 005de9c0  size 89  status ok
//======================================================================

int __thiscall sub_5DE9C0(void *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this);
        v5 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    if ( dword_7947F0[3 * v5] == a2 )
      return dword_7947F4[3 * v5];
    ++v5;
  }
  return 0;
}


//======================================================================
// sub_5DEA20
// entry 005dea20  size 35  status ok
//======================================================================

char __stdcall sub_5DEA20(int a1)
{
  if ( a1 == 23 )
    return 0;
  else
    return sub_635C40(a1);
}


//======================================================================
// sub_5DEAB0
// entry 005deab0  size 352  status ok
//======================================================================

int __thiscall sub_5DEAB0(void *this, int a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-30h]
  int v5; // [esp+8h] [ebp-2Ch]
  int v6; // [esp+10h] [ebp-24h]
  void *v8; // [esp+20h] [ebp-14h]

  dword_7947E4 = 0;
  if ( a2 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    v6 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    dword_7947E4 = _RTDynamicCast(v2, 0, &Room `RTTI Type Descriptor', &CasinoRoom `RTTI Type Descriptor', 0);
  }
  if ( a2 == 3200000 )
  {
    v8 = operator new(0x98u);
    if ( v8 )
      v5 = sub_661470(v8);
    else
      v5 = 0;
    dword_7947E4 = v5;
  }
  else if ( a2 == 3200001 )
  {
    if ( operator new(0xACu) )
      v4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=();
    else
      v4 = 0;
    dword_7947E4 = v4;
  }
  if ( dword_7947E4 )
    return dword_7947E4;
  else
    return sub_632890(a2);
}


//======================================================================
// sub_5DEC10
// entry 005dec10  size 120  status ok
//======================================================================

char *sub_5DEC10()
{
  char *v2; // [esp+Ch] [ebp-14h]

  v2 = (char *)operator new(0x4F4u);
  if ( v2 )
    return sub_5D4CF0(v2);
  else
    return 0;
}


//======================================================================
// sub_5DEC90
// entry 005dec90  size 53  status ok
//======================================================================

int __thiscall sub_5DEC90(_DWORD *this, int a2, int a3)
{
  *(this + 5067) = a2;
  *(this + 5068) = a3;
  return sub_635330(a2, a3);
}


//======================================================================
// sub_5DECD0
// entry 005decd0  size 65  status ok
//======================================================================

int __stdcall sub_5DECD0(int a1)
{
  switch ( a1 )
  {
    case 19:
      return 14;
    case 20:
      return 14;
    case 21:
      return 14;
  }
  return a1;
}


//======================================================================
// sub_5DED20
// entry 005ded20  size 133  status ok
//======================================================================

int __stdcall sub_5DED20(char *Str1)
{
  if ( !strcmp(Str1, "SID_SHELL_OPENSEAT") )
    return sub_631FB0("SID_CASINO_OPENSEAT");
  if ( !strcmp(Str1, "SID_SHELL_SETTINGS_ROLLOVER11") )
    return sub_631FB0("SID_CASINO_SETTINGS_ROLLOVER11");
  if ( !strcmp(Str1, "SID_SHELL_MENU_MAINSCREEN") )
    return sub_631FB0("SID_CASINO_MENU_MAINSCREEN");
  return sub_631FB0(Str1);
}


//======================================================================
// sub_5DEDB0
// entry 005dedb0  size 16  status ok
//======================================================================

void *sub_5DEDB0()
{
  return &unk_75E048;
}


//======================================================================
// sub_5DEDC0
// entry 005dedc0  size 164  status ok
//======================================================================

int __thiscall sub_5DEDC0(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)3200001 )
    return 3110001;
  for ( i = 0; i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 228))(this); ++i )
  {
    if ( (struct Concurrency::details::_TaskCollectionBase *)dword_7947F0[3 * i] == ExecutingCollection )
      v4 = dword_7947F8[3 * i];
  }
  if ( !v4 )
    sub_5E9F20((char)"false", "..\\Casino\\casinoshell.cpp", 1059);
  return v4;
}


//======================================================================
// sub_5DEEB0
// entry 005deeb0  size 76  status ok
//======================================================================

int __thiscall sub_5DEEB0(void *this, int a2)
{
  if ( a2 < (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 364))(this, this) )
    return dword_75D7E8[a2];
  sub_5E9F20((char)"false", "..\\Casino\\casinoshell.cpp", 1097);
  return -1;
}


//======================================================================
// sub_5DEF10
// entry 005def10  size 16  status ok
//======================================================================

int sub_5DEF10()
{
  return 20;
}


//======================================================================
// sub_5DEF20
// entry 005def20  size 16  status ok
//======================================================================

void *sub_5DEF20()
{
  return &unk_75D838;
}


//======================================================================
// sub_5DEF30
// entry 005def30  size 16  status ok
//======================================================================

int sub_5DEF30()
{
  return 500;
}


//======================================================================
// sub_5DEF40
// entry 005def40  size 39  status ok
//======================================================================

int __thiscall sub_5DEF40(_BYTE *this)
{
  if ( *(this + 37) )
    return 0;
  else
    return 3200400;
}


//======================================================================
// sub_5DEF70
// entry 005def70  size 30  status ok
//======================================================================

int __thiscall sub_5DEF70(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 340))(this, this) + 1;
}


//======================================================================
// sub_5DEFF0
// entry 005deff0  size 16  status ok
//======================================================================

int sub_5DEFF0()
{
  return 3200001;
}


//======================================================================
// sub_5DF000
// entry 005df000  size 16  status ok
//======================================================================

int sub_5DF000()
{
  return 3200000;
}


//======================================================================
// sub_5DF010
// entry 005df010  size 160  status ok
//======================================================================

_DWORD *__thiscall sub_5DF010(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx

  if ( a3 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 508))(this) )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    return a2;
  }
  else
  {
    if ( a3 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this) )
    {
      sub_632D40(a2, a3);
    }
    else
    {
      v3 = (_DWORD *)((char *)&unk_75D870 + 12 * a3);
      *a2 = *v3;
      a2[1] = v3[1];
      a2[2] = v3[2];
    }
    return a2;
  }
}


//======================================================================
// sub_5DF0B0
// entry 005df0b0  size 16  status ok
//======================================================================

int sub_5DF0B0()
{
  return 25;
}


//======================================================================
// sub_5DF0C0
// entry 005df0c0  size 16  status ok
//======================================================================

const char *sub_5DF0C0()
{
  return "Casino.ini";
}


//======================================================================
// sub_5DF150
// entry 005df150  size 27  status ok
//======================================================================

int __thiscall sub_5DF150(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 292))(this, this);
}


//======================================================================
// sub_5DF250
// entry 005df250  size 10  status ok
//======================================================================

char **sub_5DF250()
{
  return &off_75E060;
}


//======================================================================
// sub_5DF2D0
// entry 005df2d0  size 16  status ok
//======================================================================

int sub_5DF2D0()
{
  return 3200003;
}


//======================================================================
// sub_5DF2E0
// entry 005df2e0  size 16  status ok
//======================================================================

int sub_5DF2E0()
{
  return 56;
}


//======================================================================
// sub_5DF2F0
// entry 005df2f0  size 46  status ok
//======================================================================

_DWORD *__stdcall sub_5DF2F0(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 452;
  return a1;
}


//======================================================================
// sub_5DF320
// entry 005df320  size 89  status ok
//======================================================================

int __stdcall sub_5DF320(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3200000:
      result = 30;
      break;
    case 3200001:
      result = 46;
      break;
    case 3200002:
      result = 57;
      break;
    case 3200003:
      result = sub_5DF2E0();
      break;
    case 3200004:
      result = 39;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5DF3B0
// entry 005df3b0  size 16  status ok
//======================================================================

void *sub_5DF3B0()
{
  return &unk_75D9C0;
}


//======================================================================
// sub_5DF3C0
// entry 005df3c0  size 16  status ok
//======================================================================

int sub_5DF3C0()
{
  return 31;
}


//======================================================================
// sub_5DF3D0
// entry 005df3d0  size 16  status ok
//======================================================================

int sub_5DF3D0()
{
  return 69;
}


//======================================================================
// sub_5DF3E0
// entry 005df3e0  size 16  status ok
//======================================================================

int sub_5DF3E0()
{
  return 66;
}


//======================================================================
// sub_5DF3F0
// entry 005df3f0  size 79  status ok
//======================================================================

int __stdcall sub_5DF3F0(int a1, int a2)
{
  switch ( a1 )
  {
    case 0:
      return dword_75D99C[a2];
    case 1:
      return dword_75D9B4[a2];
    case 2:
      return dword_75D864[a2];
  }
  return 0;
}


//======================================================================
// sub_5DF440
// entry 005df440  size 94  status ok
//======================================================================

char __thiscall sub_5DF440(_BYTE *this, int a2, int a3)
{
  char v5; // [esp+7h] [ebp-1h]

  v5 = sub_635190(a2, a3);
  if ( *(this + 37) && a3 == 100031 )
  {
    sub_5FE640(-2, 0);
    sub_5FE640(100033, 0);
  }
  return v5;
}


//======================================================================
// sub_5DF4A0
// entry 005df4a0  size 247  status ok
//======================================================================

char __thiscall sub_5DF4A0(void *this, int a2, int a3)
{
  if ( a2 > 3205001 )
  {
    if ( a2 < 3205019 || a2 > 3205020 )
      return 0;
    goto LABEL_14;
  }
  if ( a2 == 3205001 )
  {
LABEL_14:
    *(_BYTE *)(dword_7947E0 + 20276) = a2 == 3205020;
    sub_5E2F90(dword_7947E0);
    *(_DWORD *)(dword_7947E0 + 20256) = -1;
    if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1) )
      sub_5E3130(dword_7947E0);
    return 1;
  }
  if ( a2 == 5017 )
  {
    sub_5DC1C0();
    return 1;
  }
  if ( a2 != 5018 )
    return 0;
  if ( dword_79506C )
    sub_5E7500(5018, this);
  else
    sub_5DC0D0();
  return 1;
}


//======================================================================
// sub_5DF5B0
// entry 005df5b0  size 16  status ok
//======================================================================

int sub_5DF5B0()
{
  return 1260;
}


//======================================================================
// sub_5DF5C0
// entry 005df5c0  size 16  status ok
//======================================================================

int sub_5DF5C0()
{
  return 1327;
}


//======================================================================
// sub_5DF5D0
// entry 005df5d0  size 16  status ok
//======================================================================

int sub_5DF5D0()
{
  return 1261;
}


//======================================================================
// sub_5DF5E0
// entry 005df5e0  size 46  status ok
//======================================================================

_DWORD *__stdcall sub_5DF5E0(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 480;
  return a1;
}


//======================================================================
// sub_5DF630
// entry 005df630  size 16  status ok
//======================================================================

int sub_5DF630()
{
  return 2500001;
}


//======================================================================
// sub_5DF650
// entry 005df650  size 16  status ok
//======================================================================

int sub_5DF650()
{
  return 50;
}


//======================================================================
// sub_5DF660
// entry 005df660  size 16  status ok
//======================================================================

int sub_5DF660()
{
  return 8170;
}


//======================================================================
// sub_5DF6A0
// entry 005df6a0  size 76  status ok
//======================================================================

int __stdcall sub_5DF6A0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 1:
      result = 3200250;
      break;
    case 2:
      result = 3200251;
      break;
    case 3:
      result = 3200252;
      break;
    case 4:
      result = 3200271;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5DF700
// entry 005df700  size 162  status ok
//======================================================================

bool __thiscall sub_5DF700(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  int v2; // eax
  CImageDisplay *v4; // eax

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 828))(this, -1) )
    return 0;
  if ( sub_5DA830() )
    return 0;
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 232))(this) )
  {
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 232))(this);
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 148))(v2, v2) )
      return 0;
  }
  v4 = (CImageDisplay *)sub_5DCB00(0);
  return sub_5D54A0(v4, ExecutingCollection);
}


//======================================================================
// sub_5DF7B0
// entry 005df7b0  size 115  status ok
//======================================================================

bool __thiscall sub_5DF7B0(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  CImageDisplay *v3; // eax

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 828))(this, -1)
    || sub_5DA830()
    || !sub_5DF700(this, ExecutingCollection) )
  {
    return 0;
  }
  v3 = (CImageDisplay *)sub_5DE600(this);
  return sub_5D5550(v3, ExecutingCollection);
}


//======================================================================
// sub_5DF830
// entry 005df830  size 1980  status ok
//======================================================================

int __thiscall sub_5DF830(void *this, int a2, int a3, CImageDisplay *a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // eax
  int rgbBlue; // [esp-8h] [ebp-40h]
  int v36; // [esp+4h] [ebp-34h]
  int v37; // [esp+8h] [ebp-30h]
  int v38; // [esp+Ch] [ebp-2Ch]
  int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  int v41; // [esp+18h] [ebp-20h]
  int i; // [esp+30h] [ebp-8h]
  int j; // [esp+30h] [ebp-8h]
  char v45; // [esp+37h] [ebp-1h]

  v45 = 0;
  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 780))(this, 1);
  sub_5F9CE0(0, 0, v4, 0, 0, 1, 0, 255, 0);
  v5 = sub_630F40("SID_CASINO_WIZARD1");
  sub_5FA5B0(0, 1, v5, 72, 340, 25, 138, 37, 1, 5, -1);
  v6 = sub_630F40("SID_CASINO_WIZARD2");
  sub_5FA5B0(0, 2, v6, 31, 340, 45, 138, 60, 1, 5, -1);
  v7 = sub_630F40("SID_CASINO_WIZARD3");
  sub_5FA5B0(0, 3, v7, 72, 340, 25, 138, 107, 1, 5, -1);
  v8 = sub_630F40("SID_CASINO_WIZARD4");
  sub_5FA5B0(0, 4, v8, 31, 340, 60, 138, 132, 1, 5, -1);
  v9 = sub_630F40("SID_CASINO_WIZARD5");
  sub_5FA5B0(0, 5, v9, 31, 340, 35, 138, 180, 1, 5, -1);
  v10 = sub_630F40("SID_CASINO_WIZARD6");
  sub_5FA5B0(0, 6, v10, 31, 340, 60, 138, 214, 1, 5, -1);
  v11 = sub_630F40("SID_CASINO_WIZARD7");
  sub_5F9EF0(0, 3, 3200201, 325, 269, 2, v11, 31, 69, 66, -1, 20, 0);
  v12 = sub_630F40("SID_CASINO_WIZARD20");
  sub_5F9EF0(0, 4, 3200201, 201, 269, 2, v12, 31, 69, 66, -1, 20, 0);
  v13 = sub_630F40("SID_CASINO_WIZARD8");
  sub_5FA5B0(0, 7, v13, 72, 231, 20, 200, 303, 2, 48, -1);
  v14 = sub_630F40("SID_CASINO_WIZARD9");
  sub_5FA5B0(0, 8, v14, 31, 61, 15, 208, 342, 2, 17, -1);
  v15 = sub_630F40("SID_CASINO_WIZARD10");
  sub_5FA5B0(0, 9, v15, 31, 100, 15, 312, 342, 2, 18, -1);
  sub_5FAA90(0, 0, 3200211, 201, 299, 1, 3200212, 20, -2, 198, 1, 0, 10);
  v16 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 780))(this, 2);
  sub_5F9CE0(0, 1, v16, 0, 0, 1, 0, 255, 0);
  v17 = sub_630F40("SID_CASINO_WIZARD11");
  sub_5FA5B0(0, 10, v17, 72, 340, 25, 138, 37, 1, 5, -1);
  v18 = sub_630F40("SID_CASINO_WIZARD12");
  sub_5FA5B0(0, 11, v18, 31, 340, 75, 138, 60, 1, 5, -1);
  v19 = sub_630F40("SID_CASINO_WIZARD21");
  sub_5FA5B0(0, 12, v19, 72, 340, 25, 138, 205, 1, 5, -1);
  v20 = sub_630F40("SID_CASINO_WIZARD22");
  sub_5FA5B0(0, 13, v20, 31, 340, 75, 138, 228, 1, 5, -1);
  v21 = sub_630F40("SID_CASINO_WIZARD15");
  sub_5F9EF0(0, 5, 3200201, 182, 145, 1, v21, 31, 69, 66, -1, 20, 0);
  v22 = sub_630F40("SID_CASINO_WIZARD23");
  sub_5F9EF0(0, 6, 3200201, 182, 289, 1, v22, 31, 69, 66, -1, 20, 0);
  v23 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 780))(this, 3);
  sub_5F9CE0(0, 2, v23, 0, 0, 1, 0, 255, 0);
  v24 = sub_630F40("SID_CASINO_TUTORIALS");
  sub_5FA5B0(0, 14, v24, 72, 340, 25, 138, 37, 1, 5, -1);
  v25 = sub_630F40("SID_CASINO_TUTORIALS_HELP");
  sub_5FA5B0(0, 15, v25, 31, 340, 75, 138, 60, 1, 5, -1);
  for ( i = 0; i < 16; ++i )
  {
    v26 = sub_630F40(off_75DA80[i]);
    sub_5F9EF0(0, i + 7, 3200201, 185 * (i / 8) + 150, 25 * (i % 8) + 140, 1, v26, 31, 69, 66, -1, 20, 0);
  }
  v27 = sub_630F40("SID_CASINO_WIZARDS_ALLOFF");
  sub_5F9DE0(0, 23, 3200222, 255, 340, 1, v27, 72, 75, 74, -1, 0);
  v28 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 780))(this, 4);
  sub_5F9CE0(0, 3, v28, 0, 0, 1, 0, 255, 0);
  v29 = sub_630F40("SID_CASINO_WIZARD17");
  sub_5FA5B0(0, 16, v29, 72, 340, 25, 138, 37, 1, 5, -1);
  v30 = sub_630F40("SID_CASINO_WIZARD18");
  sub_5FA5B0(0, 17, v30, 31, 340, 75, 138, 60, 1, 5, -1);
  v31 = sub_630F40("SID_CASINO_WIZARD19");
  sub_5FA5B0(0, 18, v31, 31, 340, 35, 138, 135, 1, 5, -1);
  if ( CImageDisplay::GetDisplayFormat(a4)->bmiColors[0].rgbRed )
  {
    v41 = sub_5FB350(3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 244))(v41);
  }
  if ( !*(_BYTE *)(sub_5D52E0(a4) + 93) )
  {
    v40 = sub_5FB350(4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 244))(v40);
  }
  if ( CImageDisplay::GetDisplayFormat(a4)->bmiColors[0].rgbBlue )
  {
    v39 = sub_5FB350(5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 244))(v39);
  }
  if ( CImageDisplay::GetDisplayFormat(a4)->bmiColors[129].rgbGreen )
  {
    v38 = sub_5FB350(6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v38 + 244))(v38);
  }
  for ( j = 0; j < 16; ++j )
  {
    if ( sub_5D54A0(a4, (struct Concurrency::details::_TaskCollectionBase *)dword_75DAC0[j]) )
    {
      v37 = sub_5FB350(j + 7);
      (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 244))(v37);
      v45 = 1;
    }
  }
  if ( !v45 )
  {
    v36 = sub_5FB300(23);
    v32 = sub_630F40("SID_CASINO_WIZARDS_ALLON");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v36 + 224))(v36, v32);
  }
  rgbBlue = (char)CImageDisplay::GetDisplayFormat(a4)->bmiColors[1].rgbBlue;
  sub_5FB860(0);
  sub_605110(rgbBlue, 1);
  result = (unsigned __int8)byte_795F94;
  if ( byte_795F94 )
  {
    v34 = sub_5FB350(3);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v34 + 208))(v34, v34);
  }
  return result;
}


//======================================================================
// sub_5DFFF0
// entry 005dfff0  size 277  status ok
//======================================================================

void __stdcall sub_5DFFF0(int a1, int a2)
{
  int v2; // eax
  const char *v3; // eax
  int v4; // eax
  int v5; // eax
  const char *v6; // [esp-4h] [ebp-1Ch]
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]

  if ( a2 == 23 )
  {
    v6 = (const char *)sub_630F40("SID_CASINO_WIZARDS_ALLOFF");
    v2 = sub_5FB300(23);
    v3 = (const char *)sub_602B70(v2);
    if ( !strcmp(v3, v6) )
    {
      for ( i = 0; i < 16; ++i )
      {
        v10 = sub_5FB350(i + 7);
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10);
      }
      v9 = sub_5FB300(23);
      v4 = sub_630F40("SID_CASINO_WIZARDS_ALLON");
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 224))(v9, v4);
    }
    else
    {
      for ( j = 0; j < 16; ++j )
      {
        v8 = sub_5FB350(j + 7);
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 244))(v8);
      }
      v7 = sub_5FB300(23);
      v5 = sub_630F40("SID_CASINO_WIZARDS_ALLOFF");
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 224))(v7, v5);
    }
  }
}


//======================================================================
// sub_5E0110
// entry 005e0110  size 358  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_5E0110(void *this, int a2, int a3, CImageDisplay *a4)
{
  int v4; // eax
  int v5; // eax
  Concurrency::details::VirtualProcessor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const struct tagVIDEOINFO *result; // eax
  int v11; // eax
  char v12; // al
  struct Concurrency::details::_TaskCollectionBase *v13; // [esp-4h] [ebp-18h]
  BYTE v15; // [esp+6h] [ebp-Eh]
  BYTE v16; // [esp+7h] [ebp-Dh]
  BYTE v17; // [esp+8h] [ebp-Ch]
  BYTE OwningRoot; // [esp+9h] [ebp-Bh]
  bool v19; // [esp+Ah] [ebp-Ah]
  BYTE v20; // [esp+Bh] [ebp-9h]
  int i; // [esp+10h] [ebp-4h]

  v4 = sub_5FB350(3);
  v20 = sub_600230(v4);
  CImageDisplay::GetDisplayFormat(a4)->bmiColors[0].rgbRed = v20;
  v5 = sub_5FB350(4);
  v19 = (unsigned __int8)sub_600230(v5) == 0;
  *(_BYTE *)(sub_5D52E0(a4) + 93) = v19;
  v6 = (Concurrency::details::VirtualProcessor *)sub_5FB860(0);
  OwningRoot = (unsigned __int8)Concurrency::details::VirtualProcessor::GetOwningRoot(v6);
  CImageDisplay::GetDisplayFormat(a4)->bmiColors[1].rgbBlue = OwningRoot;
  v7 = sub_5FB350(5);
  v17 = sub_600230(v7);
  CImageDisplay::GetDisplayFormat(a4)->bmiColors[0].rgbBlue = v17;
  v8 = sub_5FB350(6);
  v16 = sub_600230(v8);
  CImageDisplay::GetDisplayFormat(a4)->bmiColors[129].rgbGreen = v16;
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 184))(
          dword_162EE84,
          this) )
    sub_5E9F20((char)"shell->ProductHasBackgroundNoise()", "..\\Casino\\casinoshell.cpp", 2011);
  v9 = sub_5FB350(6);
  v15 = sub_600230(v9);
  result = CImageDisplay::GetDisplayFormat(a4);
  result->bmiColors[200].rgbBlue = v15;
  for ( i = 0; i < 16; ++i )
  {
    v13 = (struct Concurrency::details::_TaskCollectionBase *)dword_75DAC0[i];
    v11 = sub_5FB350(i + 7);
    v12 = sub_600230(v11);
    result = (const struct tagVIDEOINFO *)sub_5D5500(a4, v12, v13);
  }
  return result;
}


//======================================================================
// sub_5E0280
// entry 005e0280  size 803  status ok
//======================================================================

int __stdcall sub_5E0280(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-58h]
  int v6; // [esp+8h] [ebp-54h]
  int v7; // [esp+Ch] [ebp-50h]
  int v8; // [esp+10h] [ebp-4Ch]
  int v9; // [esp+14h] [ebp-48h]
  int v10; // [esp+18h] [ebp-44h]
  int v11; // [esp+1Ch] [ebp-40h]
  int v12; // [esp+20h] [ebp-3Ch]
  int v13; // [esp+24h] [ebp-38h]
  int v14; // [esp+28h] [ebp-34h]
  int v15; // [esp+2Ch] [ebp-30h]
  int v16; // [esp+30h] [ebp-2Ch]
  int v17; // [esp+34h] [ebp-28h]
  int v18; // [esp+38h] [ebp-24h]
  int v19; // [esp+40h] [ebp-1Ch]
  int v20; // [esp+44h] [ebp-18h]
  int v21; // [esp+48h] [ebp-14h]
  int v22; // [esp+4Ch] [ebp-10h]
  int v23; // [esp+50h] [ebp-Ch]
  int i; // [esp+58h] [ebp-4h]
  int j; // [esp+58h] [ebp-4h]
  int k; // [esp+58h] [ebp-4h]
  int m; // [esp+58h] [ebp-4h]
  int n; // [esp+58h] [ebp-4h]
  int ii; // [esp+58h] [ebp-4h]
  int jj; // [esp+58h] [ebp-4h]
  int kk; // [esp+58h] [ebp-4h]

  for ( i = 1; i < 19; ++i )
  {
    v23 = sub_5FB550(i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 112))(v23);
  }
  for ( j = 0; j < 4; ++j )
  {
    v22 = sub_5FB2B0(j);
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 112))(v22);
  }
  v21 = sub_5FB860(0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 112))(v21);
  for ( k = 0; k < 20; ++k )
  {
    v20 = sub_5FB350(k + a3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 112))(v20);
  }
  v19 = sub_5FB300(23);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 112))(v19);
  switch ( a2 )
  {
    case 0:
      v18 = sub_5FB2B0(0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
      v17 = sub_5FB350(3);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 116))(v17);
      v16 = sub_5FB350(4);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 116))(v16);
      v15 = sub_5FB860(0);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 116))(v15);
      for ( m = 1; m < 10; ++m )
      {
        v14 = sub_5FB550(m);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 116))(v14);
      }
      break;
    case 1:
      v13 = sub_5FB2B0(1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 116))(v13);
      for ( n = 10; n < 14; ++n )
      {
        v12 = sub_5FB550(n);
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 116))(v12);
      }
      v11 = sub_5FB350(5);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 116))(v11);
      v10 = sub_5FB350(6);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 116))(v10);
      break;
    case 2:
      v9 = sub_5FB2B0(2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
      for ( ii = 14; ii < 16; ++ii )
      {
        v8 = sub_5FB550(ii);
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8);
      }
      for ( jj = 0; jj < 16; ++jj )
      {
        v7 = sub_5FB350(jj + 7);
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7);
      }
      v6 = sub_5FB300(23);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 116))(v6);
      break;
    case 3:
      v5 = sub_5FB2B0(3);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5);
      for ( kk = 16; kk < 19; ++kk )
      {
        v4 = sub_5FB550(kk);
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 116))(v4, v4);
      }
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5E05C0
// entry 005e05c0  size 159  status ok
//======================================================================

int __stdcall sub_5E05C0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3207036:
      result = 0;
      break;
    case 3207037:
      result = 1;
      break;
    case 3207038:
      result = 2;
      break;
    case 3207039:
      result = 3;
      break;
    case 3207040:
      result = 4;
      break;
    case 3207041:
      result = 5;
      break;
    case 3207042:
      result = 6;
      break;
    case 3207043:
      result = 7;
      break;
    case 3207044:
      result = 8;
      break;
    case 3207045:
      result = 9;
      break;
    case 3207046:
      result = 10;
      break;
    case 3207047:
      result = 11;
      break;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\casinoshell.cpp", 2088);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5E0690
// entry 005e0690  size 1120  status ok
//======================================================================

int __stdcall sub_5E0690(int a1, CImageDisplay *a2)
{
  int v2; // eax
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [esp-8h] [ebp-114h]
  int v14; // [esp-4h] [ebp-110h]
  char *p_top; // [esp+8h] [ebp-104h]
  char *Str2; // [esp+Ch] [ebp-100h]
  _BYTE v17[8]; // [esp+10h] [ebp-FCh] BYREF
  int v18; // [esp+18h] [ebp-F4h] BYREF
  __int64 v19; // [esp+20h] [ebp-ECh]
  __int64 v20; // [esp+28h] [ebp-E4h]
  __int64 v21; // [esp+30h] [ebp-DCh]
  int v22; // [esp+38h] [ebp-D4h]
  int v23; // [esp+3Ch] [ebp-D0h]
  __int64 v24; // [esp+40h] [ebp-CCh] BYREF
  __int64 v25; // [esp+48h] [ebp-C4h] BYREF
  CImageDisplay *v26; // [esp+50h] [ebp-BCh]
  __int64 v27; // [esp+54h] [ebp-B8h] BYREF
  char v28[108]; // [esp+5Ch] [ebp-B0h] BYREF
  char Destination[52]; // [esp+C8h] [ebp-44h] BYREF
  int v30; // [esp+100h] [ebp-Ch] BYREF
  int v31; // [esp+104h] [ebp-8h]
  CImageDisplay *v32; // [esp+108h] [ebp-4h]

  sub_5D5A90(a2, &v30);
  v21 = sub_64C8A0(0, 0);
  v24 = v21;
  v20 = sub_64C8A0(0, 0);
  v25 = v20;
  v19 = sub_64C8A0(0, 0);
  v27 = v19;
  v26 = a2;
  v32 = 0;
  if ( sub_5DA7B0() )
  {
    Str2 = (char *)&CImageDisplay::GetDisplayFormat(a2)->rcSource.top;
    if ( (unsigned __int8)sub_6368B0(Str2) )
    {
      p_top = (char *)&CImageDisplay::GetDisplayFormat(a2)->rcSource.top;
      v2 = sub_6369B0(p_top);
      v32 = (CImageDisplay *)sub_5DCB00(v2);
      v14 = *((_DWORD *)v32 + 302);
      v13 = *((_DWORD *)v32 + 301);
      sub_5D5A90(v32, &v18);
      v3 = (int *)sub_64C5C0(v17, v13, v14);
      v4 = *v3;
      v5 = v3[1];
      v30 = v4;
      v31 = v5;
    }
  }
  sub_5E0AF0(a2, &v24, &v25, &v27);
  v6 = sub_630F40("SID_CASINOSTATS_OVERALL_COLON");
  sub_5FA5B0(0, 58, v6, 72, 100, 25, 15, 250, 1, 5, -1);
  v7 = sub_630F40("SID_CASINOSTATS_BANKROLL_COLON");
  sub_5FA5B0(0, 50, v7, 31, 140, 15, 15, 270, 1, 5, -1);
  sub_64C8D0(v30, v31, Destination, 1, 1, 1);
  sub_5FA5B0(0, 51, Destination, 31, 130, 15, 120, 270, 1, 18, -1);
  v8 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_5FA5B0(0, 52, v8, 31, 140, 15, 15, 290, 1, 5, -1);
  sub_64C8D0(v24, SHIDWORD(v24), Destination, 1, 1, 1);
  sub_5FA5B0(0, 53, Destination, 31, 130, 15, 120, 290, 1, 18, -1);
  v9 = sub_630F40("SID_CASINOSTATS_GAMEPLAYNET_COLON");
  sub_5FA5B0(0, 54, v9, 31, 140, 15, 15, 310, 1, 5, -1);
  sub_64C8D0(v25, SHIDWORD(v25), Destination, 1, 1, 1);
  sub_5FA5B0(0, 55, Destination, 31, 130, 15, 120, 310, 1, 18, -1);
  v10 = sub_630F40("SID_CASINOSTATS_TOURNAMENTNET_COLON");
  sub_5FA5B0(0, 56, v10, 31, 140, 15, 15, 330, 1, 5, -1);
  sub_64C8D0(v27, SHIDWORD(v27), Destination, 1, 1, 1);
  sub_5FA5B0(0, 57, Destination, 31, 130, 15, 120, 330, 1, 18, -1);
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(sub_5D52E0(v26) + 41) )
    v22 = sub_5D6BD0(v26);
  sub_64C8D0(v22, v23, v28, 1, 1, 1);
  v11 = sub_630F40("SID_CASINOSTATS_OUTSTANDINGLOAN_COLON");
  sub_5FA5B0(0, 59, v11, 31, 130, 15, 15, 350, 1, 5, -1);
  return sub_5FA5B0(0, 60, v28, 31, 130, 15, 120, 350, 1, 18, -1);
}


//======================================================================
// sub_5E0AF0
// entry 005e0af0  size 152  status ok
//======================================================================

int __thiscall sub_5E0AF0(void *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v8 = 0;
  for ( result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this);
        v8 < result;
        result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    v7 = dword_7947F4[3 * v8];
    if ( !dword_163069C || !(unsigned __int8)sub_653E30(dword_7947F0[3 * v8]) )
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 152))(v7, a2, a3, a4, a5);
    ++v8;
  }
  return result;
}


//======================================================================
// sub_5E0B90
// entry 005e0b90  size 173  status ok
//======================================================================

int __thiscall sub_5E0B90(void *this, char *Str2)
{
  int i; // eax
  int v4; // [esp+0h] [ebp-18h]
  const char *Str1; // [esp+10h] [ebp-8h]
  int v6; // [esp+14h] [ebp-4h]

  v6 = 0;
  for ( i = (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 268))(
              dword_162EE84,
              this);
        v6 < i;
        i = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 268))(
              dword_162EE84,
              v4) )
  {
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * v6))->rcSource.left )
    {
      Str1 = sub_520E60(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * v6));
      if ( !strcmp(Str1, Str2) )
        return sub_5DCB00(v6);
    }
    ++v6;
  }
  return 0;
}


//======================================================================
// sub_5E0C40
// entry 005e0c40  size 125  status ok
//======================================================================

_DWORD *__thiscall sub_5E0C40(void *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // [esp+4h] [ebp-4h]

  *a3 = 0;
  a3[1] = 0;
  *a4 = 0;
  a4[1] = 0;
  result = (_DWORD *)sub_5E0B90(this, (char *)(a2 + 16));
  v7 = result;
  if ( result )
  {
    v5 = result[306];
    *a3 = result[305];
    a3[1] = v5;
    v6 = result[310];
    *a4 = v7[309];
    a4[1] = v6;
    return a4;
  }
  return result;
}


//======================================================================
// sub_5E0CC0
// entry 005e0cc0  size 301  status ok
//======================================================================

int __thiscall sub_5E0CC0(int this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-414h]
  FILE *Stream; // [esp+8h] [ebp-410h]
  int i; // [esp+Ch] [ebp-40Ch]
  char Destination[1028]; // [esp+10h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  strcat(Destination, "c99kn.hst");
  Stream = (FILE *)sub_5EA9C0(Destination, "rb");
  if ( Stream )
  {
    fread((void *)(this + 152), 0x4E38u, 1u, Stream);
    return fclose(Stream);
  }
  else
  {
    result = this;
    *(_DWORD *)(this + 152) = 1;
    for ( i = 0; i < 1001; ++i )
    {
      for ( j = 0; j < 20; ++j )
      {
        result = j + 20 * i;
        *(_BYTE *)(this + result + 156) = 0;
      }
    }
  }
  return result;
}


//======================================================================
// sub_5E0DF0
// entry 005e0df0  size 175  status ok
//======================================================================

FILE *__thiscall sub_5E0DF0(int this)
{
  FILE *result; // eax
  FILE *Stream; // [esp+4h] [ebp-40Ch]
  char Destination[1028]; // [esp+8h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  strcat(Destination, "c99kn.hst");
  result = (FILE *)sub_5EA9C0(Destination, "wb");
  Stream = result;
  if ( result )
  {
    fwrite((const void *)(this + 152), 0x4E38u, 1u, result);
    return (FILE *)fclose(Stream);
  }
  return result;
}


//======================================================================
// sub_5E0EA0
// entry 005e0ea0  size 458  status ok
//======================================================================

int __thiscall sub_5E0EA0(_DWORD *this)
{
  int result; // eax
  char v2; // [esp+0h] [ebp-74h]
  CImageDisplay *v5; // [esp+8h] [ebp-6Ch]
  int v6; // [esp+14h] [ebp-60h]
  int v7; // [esp+18h] [ebp-5Ch]
  int v8; // [esp+1Ch] [ebp-58h]
  int i; // [esp+20h] [ebp-54h]
  int j; // [esp+20h] [ebp-54h]
  int k; // [esp+20h] [ebp-54h]
  int m; // [esp+20h] [ebp-54h]
  char v13[80]; // [esp+24h] [ebp-50h]

  v6 = 0;
  v8 = *(this + 38);
  for ( i = 0; i < 20; ++i )
    *(_DWORD *)&v13[4 * i] = -1;
  while ( v6 != 20 )
  {
    v7 = sub_62FBF0(80) + 1;
    for ( j = 0; j < 20; ++j )
    {
      if ( v7 == *(_DWORD *)&v13[4 * j] )
      {
        v7 = -1;
        break;
      }
    }
    if ( v7 != -1 )
      *(_DWORD *)&v13[4 * v6++] = v7;
  }
  for ( k = 0; k < 20; ++k )
  {
    *((_BYTE *)this + 20 * v8 + k + 156) = v13[4 * k];
    sub_62FDE0("%d ", *(_DWORD *)&v13[4 * k]);
  }
  sub_62FDE0("\n", v2);
  if ( (unsigned __int8)sub_635CB0(8) && !dword_793584 )
    return sub_5837D0(dword_79357C);
  sub_5E1070(this);
  result = sub_635CB0(8);
  if ( (_BYTE)result )
  {
    for ( m = 0; ; ++m )
    {
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( m >= result )
        break;
      v5 = (CImageDisplay *)sub_5DCB00(m);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
      {
        sub_5E1410(m);
      }
    }
  }
  return result;
}


