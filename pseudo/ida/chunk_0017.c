//======================================================================
// sub_540DE0
// entry 00540de0  size 87  status ok
//======================================================================

char __stdcall sub_540DE0(int a1)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_540E40
// entry 00540e40  size 64  status ok
//======================================================================

int __thiscall sub_540E40(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( *(this + i + 2) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_540E80
// entry 00540e80  size 72  status ok
//======================================================================

char __thiscall sub_540E80(int *this, int a2)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + 6 * a2 + 2 * i + 14) > 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_540ED0
// entry 00540ed0  size 268  status ok
//======================================================================

char __thiscall sub_540ED0(int *this, int a2)
{
  int v2; // eax
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 3 * a2;
  LOBYTE(v2) = sub_540E80(this, a2);
  if ( (_BYTE)v2 )
  {
    v2 = sub_5DCB00(a2);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7933E8 + 656))(dword_7933E8, a2);
      for ( i = 0; i < 3; ++i )
      {
        if ( *(this + 2 * i + 2 * v6 + 14) > 0 )
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(*(_DWORD *)*(this + i + v6 + 2) + 196))(
            *(this + i + v6 + 2),
            this + 2 * i + 2 * v6 + 14,
            0,
            1);
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_53B1A0(dword_7933F4);
      sub_5DB890(dword_7933E8);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7933E8 + 4) + 8))(
                     *(_DWORD *)(dword_7933E8 + 4),
                     1,
                     0);
    }
  }
  return v2;
}


//======================================================================
// sub_540FE0
// entry 00540fe0  size 231  status ok
//======================================================================

void __thiscall sub_540FE0(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-24h]
  int v4; // [esp+1Ch] [ebp-10h]
  int j; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      v4 = j + 3 * i;
      if ( (unsigned __int8)sub_5CB7D0(i, 0) )
      {
        v3 = *(this + v4 + 2);
        v1 = *(_DWORD *)(v3 + 32 * i + 76);
        *(this + 2 * v4 + 14) = *(_DWORD *)(v3 + 32 * i + 72);
        *(this + 2 * v4 + 15) = v1;
      }
      else
      {
        *((_QWORD *)this + v4 + 7) = sub_64C8A0(0, 0);
      }
    }
  }
}


//======================================================================
// sub_5410D0
// entry 005410d0  size 61  status ok
//======================================================================

char __thiscall sub_5410D0(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_540C30(this, i) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_541110
// entry 00541110  size 116  status ok
//======================================================================

int __thiscall sub_541110(_WORD *this)
{
  int v3; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 3;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      if ( sub_540C30(this, i) < v3 )
        v3 = sub_540C30(this, i);
    }
  }
  return v3;
}


//======================================================================
// sub_541190
// entry 00541190  size 225  status ok
//======================================================================

int __thiscall sub_541190(_WORD *this)
{
  int v2; // esi
  _DWORD v4[5]; // [esp+10h] [ebp-18h]
  int i; // [esp+24h] [ebp-4h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  v4[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    if ( v4[i] == 4 && sub_540C30(this, v4[i]) < 3 )
      return v4[i];
    if ( *(_BYTE *)(sub_5DCB00(v4[i]) + 1184) )
    {
      if ( sub_540C30(this, v4[i]) < 3 )
      {
        v2 = sub_540C30(this, v4[i]);
        if ( v2 == sub_541110(this) )
          return v4[i];
      }
    }
  }
  return -1;
}


//======================================================================
// sub_541280
// entry 00541280  size 224  status ok
//======================================================================

int __thiscall sub_541280(_BYTE *this)
{
  CImageDisplay *v3; // [esp+Ch] [ebp-1Ch]
  _DWORD v4[4]; // [esp+14h] [ebp-14h]
  int i; // [esp+24h] [ebp-4h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(v4[i]);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1185)
      && !*(this + v4[i] + 242)
      && (unsigned __int8)sub_5414E0(v4[i]) )
    {
      return v4[i];
    }
  }
  return -1;
}


//======================================================================
// sub_541360
// entry 00541360  size 311  status ok
//======================================================================

int __thiscall sub_541360(_BYTE *this, int a2, char a3)
{
  int result; // eax
  int v4; // eax
  __int64 v5; // [esp-8h] [ebp-28h]
  int v6; // [esp+4h] [ebp-1Ch]
  _DWORD v7[2]; // [esp+14h] [ebp-Ch] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  v8 = 3 * a2;
  if ( a3 )
  {
    *(this + a2 + 246) = 1;
    v5 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    sub_5D6050(v5, HIDWORD(v5));
    if ( (unsigned __int8)sub_5CB7D0(a2, 0) )
      sub_5423A0(a2, 0, 0, 0);
    if ( (unsigned __int8)sub_5CB7D0(a2, 0) )
      sub_5423A0(a2, 0, 0, 0);
    result = sub_5DCB00(a2);
    *(_BYTE *)(result + 1186) = 1;
  }
  else
  {
    v6 = *((_DWORD *)this + v8 + 3);
    v4 = *(_DWORD *)(v6 + 32 * a2 + 76);
    v7[0] = *(_DWORD *)(v6 + 32 * a2 + 72);
    v7[1] = v4;
    return (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(**((_DWORD **)this + v8 + 2) + 196))(
             *((_DWORD *)this + v8 + 2),
             v7,
             0,
             1);
  }
  return result;
}


//======================================================================
// sub_5414A0
// entry 005414a0  size 52  status ok
//======================================================================

int __thiscall sub_5414A0(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 242) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5414E0
// entry 005414e0  size 45  status ok
//======================================================================

int __stdcall sub_5414E0(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_541510
// entry 00541510  size 45  status ok
//======================================================================

int __stdcall sub_541510(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_541540
// entry 00541540  size 189  status ok
//======================================================================

char __thiscall sub_541540(_BYTE *this, int a2, char a3)
{
  bool v4; // [esp+4h] [ebp-14h]
  CImageDisplay *v6; // [esp+Ch] [ebp-Ch]

  if ( !(unsigned __int8)sub_5DF7B0(-1) || *(this + 236) )
    return 0;
  v6 = (CImageDisplay *)sub_5DCB00(a2);
  v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
  if ( !v4 || a3 == sub_539F40(a2) )
    return 0;
  *(this + 236) = 1;
  sub_57C140(dword_793578);
  return 1;
}


//======================================================================
// sub_541600
// entry 00541600  size 94  status ok
//======================================================================

char __thiscall sub_541600(_BYTE *this, int a2, char a3)
{
  if ( sub_541540(this, a2, a3) )
    return 0;
  *(this + 236) = 0;
  sub_541360(this, a2, a3);
  *(this + a2 + 237) = 0;
  *(this + a2 + 242) = 1;
  return 1;
}


//======================================================================
// sub_541660
// entry 00541660  size 212  status ok
//======================================================================

int sub_541660()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  _DWORD v2[4]; // [esp+1Ch] [ebp-14h]
  int i; // [esp+2Ch] [ebp-4h]

  v2[0] = 3;
  v2[1] = 1;
  v2[2] = 0;
  v2[3] = 2;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v2[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1185)
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1186) )
    {
      return v2[i];
    }
  }
  return -1;
}


//======================================================================
// sub_541740
// entry 00541740  size 76  status ok
//======================================================================

bool __thiscall sub_541740(void *this)
{
  return sub_462BA0((int)this + 224, 3, 0) == 1 && sub_4630C0((int)this + 224, 0, 3) == 12;
}


//======================================================================
// sub_541790
// entry 00541790  size 76  status ok
//======================================================================

bool __thiscall sub_541790(void *this)
{
  return sub_462BA0((int)this + 224, 3, 0) != 1 || sub_4630C0((int)this + 224, 0, 3) >= 12;
}


//======================================================================
// sub_5417E0
// entry 005417e0  size 190  status ok
//======================================================================

int __thiscall sub_5417E0(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = sub_462BA0((int)(this + 3 * a2 + 100), 3, 0);
  v4 = sub_462BA0((int)(this + 112), 3, 0);
  if ( v5 == 4 && (v4 == 6 || v4 == 5) )
    return 1;
  if ( v4 == 4 && (v5 == 6 || v5 == 5) )
    return 0;
  if ( v5 == 5 && v4 == 6 )
    return 1;
  if ( v4 == 5 && v5 == 6 )
    return 0;
  return sub_462DA0((int)(this + 3 * a2 + 100), this + 112, 3);
}


//======================================================================
// sub_5418A0
// entry 005418a0  size 1240  status ok
//======================================================================

int __thiscall sub_5418A0(int this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // [esp-8h] [ebp-98h]
  __int64 v9; // [esp-8h] [ebp-98h]
  bool v10; // [esp+4h] [ebp-8Ch]
  int v11; // [esp+8h] [ebp-88h]
  bool v12; // [esp+Ch] [ebp-84h]
  bool v13; // [esp+10h] [ebp-80h]
  int v15; // [esp+18h] [ebp-78h]
  int v16; // [esp+1Ch] [ebp-74h]
  int v17; // [esp+24h] [ebp-6Ch]
  __int64 v18; // [esp+30h] [ebp-60h]
  _BYTE v19[8]; // [esp+38h] [ebp-58h] BYREF
  __int64 v20; // [esp+40h] [ebp-50h]
  __int64 v21; // [esp+48h] [ebp-48h]
  __int64 v22; // [esp+50h] [ebp-40h]
  __int64 v23; // [esp+60h] [ebp-30h]
  __int64 v24; // [esp+68h] [ebp-28h]
  __int64 v25; // [esp+70h] [ebp-20h]
  __int64 v26; // [esp+78h] [ebp-18h]
  int v27; // [esp+80h] [ebp-10h]
  int v28; // [esp+84h] [ebp-Ch]
  int v29; // [esp+88h] [ebp-8h]
  bool v30; // [esp+8Eh] [ebp-2h]
  bool v31; // [esp+8Fh] [ebp-1h]

  v29 = 3 * a2;
  v28 = -1;
  v27 = -1;
  v31 = 0;
  v23 = sub_64C8A0(0, 0);
  sub_5DCB00(a2);
  sub_5D6050(v23, HIDWORD(v23));
  v17 = sub_5DCB00(a2);
  *(_DWORD *)(this + 264) = *(char *)(sub_5D52E0(v17) + 42);
  *(_DWORD *)(this + 268) = -1;
  if ( (unsigned __int8)sub_5414E0(a2) )
  {
    v28 = sub_5417E0((_WORD *)this, a2);
    if ( sub_541790((void *)this) )
      sub_5423A0(a2, v28, 0, 0);
    else
      sub_5423A0(a2, 2, 0, 0);
    v27 = sub_462BA0(this + 6 * a2 + 200, 3, 0);
    v13 = v27 == 5 || v27 == 4 || v27 == 9;
    v30 = v13;
    if ( v13 )
      sub_5423A0(a2, 1, v27, 1);
    v12 = *(_DWORD *)(this + 264) != *(_DWORD *)(this + 268) && !*(_DWORD *)(this + 268);
    v31 = v12;
    if ( v12 )
    {
      sub_5DCB00(a2);
      sub_5D70E0(1, 1000000);
      v11 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 4))(v11, -1);
      v8 = sub_64C8A0(0, 0);
      sub_5DCB00(a2);
      return sub_5D6050(v8, HIDWORD(v8));
    }
    if ( sub_541790((void *)this) )
      sub_5423A0(a2, v28, 0, 0);
    else
      sub_5423A0(a2, 1, 0, 0);
    if ( v30 )
    {
      v22 = sub_64C8A0(0, 0);
      v25 = v22;
      v21 = sub_64C8A0(0, 0);
      v24 = v21;
      v20 = sub_64C8A0(0, 0);
      v26 = v20;
      v16 = *(_DWORD *)(this + 4 * v29 + 12);
      v3 = *(_DWORD *)(v16 + 32 * a2 + 76);
      LODWORD(v25) = *(_DWORD *)(v16 + 32 * a2 + 72);
      HIDWORD(v25) = v3;
      v15 = *(_DWORD *)(this + 4 * v29 + 12);
      v4 = *(_DWORD *)(v15 + 32 * a2 + 84);
      LODWORD(v24) = *(_DWORD *)(v15 + 32 * a2 + 80);
      HIDWORD(v24) = v4;
      v5 = (_DWORD *)sub_64C5C0(v19, v24, v4);
      v6 = v5[1];
      LODWORD(v26) = *v5;
      HIDWORD(v26) = v6;
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int, _DWORD))(**(_DWORD **)(this + 4 * v29 + 12) + 184))(
        *(_DWORD *)(this + 4 * v29 + 12),
        v26,
        v6,
        a2,
        0);
      v18 = sub_64C8A0(0, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(this + 4 * v29 + 12) + 184))(
        *(_DWORD *)(this + 4 * v29 + 12),
        v18,
        HIDWORD(v18),
        a2,
        1);
    }
  }
  v10 = *(_DWORD *)(this + 264) != *(_DWORD *)(this + 268) && !*(_DWORD *)(this + 268);
  v31 = v10;
  if ( v10 )
  {
    sub_5DCB00(a2);
    sub_5D70E0(1, 1000000);
    v7 = sub_5DCB00(a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 4))(v7, -1);
    v9 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    return sub_5D6050(v9, HIDWORD(v9));
  }
  else
  {
    result = sub_541510(a2);
    if ( (_BYTE)result )
    {
      v27 = sub_462BA0(this + 6 * a2 + 200, 3, 0);
      if ( v27 <= 1 )
        return sub_5423A0(a2, 0, v27, 0);
      else
        return sub_5423A0(a2, 1, v27, 0);
    }
  }
  return result;
}


//======================================================================
// sub_541D80
// entry 00541d80  size 91  status ok
//======================================================================

bool __thiscall sub_541D80(void *this, int a2)
{
  int v4; // [esp+8h] [ebp-4h]

  v4 = sub_462BA0((int)this + 6 * a2 + 200, 3, 0);
  return (unsigned __int8)sub_541510(a2) && v4 > 1;
}


//======================================================================
// sub_541DE0
// entry 00541de0  size 161  status ok
//======================================================================

bool __thiscall sub_541DE0(void *this, int a2)
{
  CImageDisplay *v3; // [esp+Ch] [ebp-Ch]
  int v4; // [esp+14h] [ebp-4h]

  v4 = sub_462BA0((int)this + 6 * a2 + 200, 3, 0);
  v3 = (CImageDisplay *)sub_5DCB00(a2);
  if ( !CImageDisplay::GetDisplayFormat(v3)->rcSource.left || *(_BYTE *)(sub_5DCB00(a2) + 1185) )
    return 0;
  return !(unsigned __int8)sub_541510(a2) && v4 > 1;
}


//======================================================================
// sub_541E90
// entry 00541e90  size 391  status ok
//======================================================================

int __thiscall sub_541E90(void *this, int a2)
{
  const char *v2; // eax
  char *v3; // eax
  char Source; // [esp+0h] [ebp-7E0h]
  char *Sourcea; // [esp+0h] [ebp-7E0h]
  char v8[128]; // [esp+8h] [ebp-7D8h] BYREF
  char v9[1031]; // [esp+88h] [ebp-758h] BYREF
  char v10; // [esp+48Fh] [ebp-351h]
  char Buffer[64]; // [esp+490h] [ebp-350h] BYREF
  char v12[516]; // [esp+4D0h] [ebp-310h] BYREF
  int v13; // [esp+6D4h] [ebp-10Ch]
  char Destination[260]; // [esp+6D8h] [ebp-108h] BYREF

  v10 = sub_539F40(a2);
  v13 = sub_462BA0((int)this + 6 * a2 + 200, 3, 0);
  if ( v13 == -1 )
    sub_5E9F20((char)"handType != -1", "..\\Casino\\threecardpokerstate.cpp", 641);
  sprintf(Buffer, "Three Card Poker Tutorial: handType %hd\n", v13);
  sub_62FDE0(Buffer, Source);
  sub_462F40(v13, v8);
  if ( v10 )
    Sourcea = (char *)sub_630F40("SID_THREECARDPOKER_FOLD");
  else
    Sourcea = (char *)sub_630F40("SID_THREECARDPOKER_PLAY");
  strcpy(Destination, Sourcea);
  sub_53A050(a2, v13, v10, v12);
  v2 = (const char *)sub_630F40("SID_THREECARDPOKER_CURRENTHAND_FORMAT");
  sprintf(v9, v2, v8, Destination, v12);
  v3 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80(1, v3, v9);
}


//======================================================================
// sub_542060
// entry 00542060  size 825  status ok
//======================================================================

LONG __thiscall sub_542060(void *this, _DWORD *a2, int a3, char a4)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  const CHAR *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const CHAR *v20; // eax
  const CHAR *v21; // [esp-8h] [ebp-58h]
  const CHAR *v22; // [esp-8h] [ebp-58h]
  bool v23; // [esp+4h] [ebp-4Ch]
  CImageDisplay *v26; // [esp+10h] [ebp-40h]
  CImageDisplay *v27; // [esp+1Ch] [ebp-34h]
  __int64 v28; // [esp+30h] [ebp-20h] BYREF
  int v29; // [esp+38h] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-10h]
  int v31; // [esp+44h] [ebp-Ch] BYREF
  int v32; // [esp+4Ch] [ebp-4h]

  v28 = sub_64C8A0(0, 0);
  v32 = *(_DWORD *)(dword_7933EC + 232);
  result = sub_5DCB00(v32);
  if ( !result )
    return result;
  v30 = 3 * v32;
  sub_5CB880(&v31, v32);
  sub_5CB880(&v29, v32);
  if ( *a2 )
  {
    v5 = a2[1];
    LODWORD(v28) = *a2;
    HIDWORD(v28) = v5;
  }
  else
  {
    sub_5DCB00(v32);
    sub_5D5DE0(&v28);
  }
  if ( !(_DWORD)v28 )
    LODWORD(v28) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7933E8 + 688))(dword_7933E8);
  v6 = sub_540E40((_DWORD *)dword_7933EC, (int)this);
  if ( v6 == v30 + 1 && !v31 )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7933E8 + 688))(dword_7933E8);
    if ( (int)v28 < v7 )
      LODWORD(v28) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7933E8 + 688))(dword_7933E8);
  }
  v8 = sub_540E40((_DWORD *)dword_7933EC, (int)this);
  if ( v8 == v30 + 2 && !v29 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7933E8 + 688))(dword_7933E8);
    if ( (int)v28 < v9 )
      LODWORD(v28) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7933E8 + 688))(dword_7933E8);
  }
  v10 = sub_5DCB00(v32);
  v11 = sub_5D5A50(v10);
  if ( (int)v28 > v11 )
  {
    v12 = sub_5DCB00(v32);
    LODWORD(v28) = sub_5D5A50(v12);
  }
  if ( (int)v28 <= 0 )
    return sub_5CBA10(a2, a3, a4);
  v13 = sub_540E40((_DWORD *)dword_7933EC, (int)this);
  if ( v13 == v30 + 1 )
  {
    v14 = v31 + 2 * v28;
    v15 = sub_5DCB00(v32);
    if ( v14 > sub_5D5A50(v15) )
    {
      v27 = (CImageDisplay *)sub_5DCB00(v32);
      result = CImageDisplay::GetDisplayFormat(v27)->rcSource.left;
      if ( result == 2 || (result = (LONG)CImageDisplay::GetDisplayFormat(v27), *(_DWORD *)result == 3) )
      {
        v21 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
        v16 = (const CHAR *)sub_630F40("SID_THREECARDPOKER_INSUFFICIENTFUNDS");
        return sub_62FF10(v16, v21, 0);
      }
      return result;
    }
  }
  if ( !v31 )
    return sub_5CBA10(a2, a3, a4);
  v17 = sub_540E40((_DWORD *)dword_7933EC, (int)this);
  if ( v17 != v30 + 2 )
    return sub_5CBA10(a2, a3, a4);
  v18 = sub_5DCB00(v32);
  v19 = sub_5D5A50(v18);
  if ( v19 - (int)v28 >= v31 )
    return sub_5CBA10(a2, a3, a4);
  v26 = (CImageDisplay *)sub_5DCB00(v32);
  v23 = CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 3;
  result = v23;
  if ( v23 )
  {
    v22 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
    v20 = (const CHAR *)sub_630F40("SID_THREECARDPOKER_INSUFFICIENTFUNDS_FORANTE");
    return sub_62FF10(v20, v22, 0);
  }
  return result;
}


//======================================================================
// sub_5423A0
// entry 005423a0  size 1088  status ok
//======================================================================

int __thiscall sub_5423A0(pairNode *this, int a2, int a3, int a4, char a5)
{
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // [esp+0h] [ebp-88h]
  __int64 v10; // [esp+0h] [ebp-88h]
  _DWORD *v11; // [esp+8h] [ebp-80h]
  int v12; // [esp+Ch] [ebp-7Ch]
  char v14; // [esp+17h] [ebp-71h]
  int v15; // [esp+18h] [ebp-70h]
  char v16[8]; // [esp+24h] [ebp-64h] BYREF
  __int64 v17; // [esp+2Ch] [ebp-5Ch]
  __int64 v18; // [esp+34h] [ebp-54h]
  __int64 v19; // [esp+3Ch] [ebp-4Ch]
  _DWORD v20[10]; // [esp+44h] [ebp-44h]
  __int64 v21; // [esp+6Ch] [ebp-1Ch]
  int v22; // [esp+74h] [ebp-14h]
  __int64 v23; // [esp+78h] [ebp-10h]
  __int64 v24; // [esp+80h] [ebp-8h]

  v5 = *((_DWORD *)this + 8 * a2 + 19);
  LODWORD(v24) = *((_DWORD *)this + 8 * a2 + 18);
  HIDWORD(v24) = v5;
  v19 = sub_64C8A0(0, 0);
  v21 = v19;
  v18 = sub_64C8A0(0, 0);
  v23 = v18;
  v20[0] = 0;
  v20[1] = 0;
  v20[2] = 1;
  v20[3] = 0;
  v20[4] = 30;
  v20[5] = 6;
  v20[6] = 4;
  v20[7] = 0;
  v20[8] = 0;
  v20[9] = 40;
  v22 = 0;
  *(_DWORD *)(dword_7933EC + 4 * pairNode::raw_length(this) + 152) = a3;
  v15 = sub_5DCB00(a2);
  v14 = *(_BYTE *)(sub_5D52E0(v15) + 42);
  *(_DWORD *)(dword_7933EC + 268) = v14;
  if ( *(_DWORD *)(dword_7933EC + 264) == *(_DWORD *)(dword_7933EC + 268)
    || (result = dword_7933EC, *(_DWORD *)(dword_7933EC + 268)) )
  {
    v7 = sub_5DCB00(a2);
    result = sub_5D5A50(v7);
    if ( result < 1000000000 )
    {
      if ( a5 )
      {
        if ( a4 == 5 )
          v22 = 1;
        if ( a4 == 4 )
          v22 = 4;
        if ( a4 == 9 )
          v22 = 5;
        v21 = v24;
        sub_64C560((double)v22);
        if ( (int)v24 > 1000000000 )
          LODWORD(v21) = 1000000000;
        sub_5DCB00(a2);
        sub_5D5CF0(v21, HIDWORD(v21));
        sub_5DCB00(a2);
        sub_5D5FB0(v21, HIDWORD(v21));
        v23 = v21;
        return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 184))(
                 this,
                 v21,
                 HIDWORD(v21),
                 a2,
                 1);
      }
      else if ( a3 )
      {
        if ( a3 == 1 )
        {
          if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          {
            if ( *(int *)(sub_5DCB00(a2) + 1192) < -4 )
              *(_BYTE *)(a2 + dword_7933EC + 251) = 1;
            *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
          }
          v8 = sub_5DCB00(a2);
          sub_5D7540(v8);
        }
        if ( a3 == 1 )
        {
          v21 = v24;
          if ( pairNode::raw_length(this) % 3 == 2 )
            sub_64C560((double)(int)v20[a4]);
        }
        if ( (int)v21 > 1000000000 )
          LODWORD(v21) = 1000000000;
        v23 = *(_QWORD *)sub_64C5C0(v16, *((_DWORD *)this + 8 * a2 + 18), *((_DWORD *)this + 8 * a2 + 19));
        if ( (int)v23 >= 1000000000 )
          v23 = sub_64C8A0(1000000000, 0);
        v9 = v23;
        sub_5DCB00(a2);
        sub_5D5CF0(v9, HIDWORD(v9));
        v10 = v21;
        sub_5DCB00(a2);
        sub_5D5FB0(v10, HIDWORD(v10));
        return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v23,
                 HIDWORD(v23),
                 a2,
                 0);
      }
      else
      {
        v12 = *(_DWORD *)(dword_7933F4 + 4 * pairNode::raw_length(this) + 24);
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 196))(v12);
        if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v11 = (_DWORD *)(sub_5DCB00(a2) + 1192);
        --*v11;
        LODWORD(v21) = -(int)v24;
        HIDWORD(v21) = -HIDWORD(v24);
        sub_5DCB00(a2);
        sub_5D5FB0(-(int)v24, -HIDWORD(v24));
        v17 = sub_64C8A0(0, 0);
        return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v17,
                 HIDWORD(v17),
                 a2,
                 0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5427E0
// entry 005427e0  size 46  status ok
//======================================================================

void __thiscall sub_5427E0(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_7933F4 )
  {
    v3 = pairNode::raw_length(this);
    sub_53B6F0((_DWORD **)dword_7933F4, a2, v3);
  }
}


//======================================================================
// sub_542810
// entry 00542810  size 229  status ok
//======================================================================

bool __thiscall sub_542810(pairNode *this)
{
  char v2; // [esp+0h] [ebp-28h]
  bool v3; // [esp+4h] [ebp-24h]
  CImageDisplay *v5; // [esp+14h] [ebp-14h]
  int v6; // [esp+20h] [ebp-8h]

  if ( *(_DWORD *)(dword_7933EC + 232) == -1 )
    return 0;
  v6 = *(_DWORD *)(dword_7933EC + 232);
  v2 = 0;
  if ( pairNode::raw_length(this) / 3 == v6 && pairNode::raw_length(this) % 3 )
  {
    v5 = (CImageDisplay *)sub_540AF0((_DWORD *)dword_7933EC);
    v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
    if ( v3 && !*(_BYTE *)(sub_540AF0((_DWORD *)dword_7933EC) + 1184) )
      return 1;
  }
  return v2;
}


//======================================================================
// sub_542960
// entry 00542960  size 31  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_542960(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &VideoBlackjackAI::`vftable';
  return this;
}


//======================================================================
// sub_542980
// entry 00542980  size 116  status ok
//======================================================================

bool sub_542980()
{
  int v1; // [esp+4h] [ebp-14h]
  int v2; // [esp+14h] [ebp-4h]

  v2 = sub_549E80(0, 1);
  v1 = sub_548F80(0);
  sub_549E80(1, 1);
  sub_549E80(2, 1);
  return v1 == 6 || v2 > 16;
}


//======================================================================
// sub_542A00
// entry 00542a00  size 357  status ok
//======================================================================

int __thiscall sub_542A00(void *this, void *a2)
{
  int result; // eax
  int v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h]

  if ( (unsigned __int8)sub_54A770(a2) )
    return 2;
  v4 = sub_542B80(a2);
  v6 = sub_542D50(this);
  if ( *((_BYTE *)dword_793404 + 36) || *(_DWORD *)(dword_7947E0 + 20244) == 1 )
  {
    v5 = dword_73AE88[10 * v4 + v6];
    if ( v5 == 4 )
    {
      sub_5E9F20((char)"action != 4", "..\\Casino\\videoblackjackai.cpp", 139);
      v5 = 2;
    }
  }
  else
  {
    v5 = dword_73A9B0[10 * v4 + v6];
  }
  switch ( v5 )
  {
    case 1:
      result = 1;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      if ( (unsigned __int8)sub_5497A0(dword_793404) )
      {
        result = 3;
      }
      else if ( v4 == 18 )
      {
        result = 2;
      }
      else
      {
        result = 1;
      }
      break;
    case 4:
      result = 4;
      break;
    case 5:
      result = 1;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\videoblackjackai.cpp", 166);
      sub_5E9F20((char)"false", "..\\Casino\\videoblackjackai.cpp", 169);
      result = 2;
      break;
  }
  return result;
}


//======================================================================
// sub_542B80
// entry 00542b80  size 464  status ok
//======================================================================

int __thiscall sub_542B80(void *this, void *a2)
{
  int v2; // eax
  int v5; // [esp+4h] [ebp-24h]
  int v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = sub_548F80(a2);
  v8 = sub_641280(*((_WORD *)dword_793404 + 6 * (_DWORD)a2 + 20));
  v5 = sub_641280(*((_WORD *)dword_793404 + 6 * (_DWORD)a2 + 21));
  v10 = sub_549E80(a2, 1);
  Concurrency::details::_NonReentrantPPLLock::_Acquire(dword_793404, a2);
  v7 = v2;
  v6 = sub_549FA0(a2);
  if ( !(unsigned __int8)sub_54A050(a2) )
    goto LABEL_7;
  if ( v8 == 14 && (unsigned __int8)sub_549AD0(dword_793404, this) )
    return 30;
  if ( (unsigned __int8)sub_5497A0(dword_793404) )
    return v7 / 2 + 19;
LABEL_7:
  if ( v10 == 21 )
    return 0;
  if ( v7 >= 21 || v7 == v6 )
  {
    if ( v7 >= 8 )
    {
      if ( v9 == 2 && (v8 == 5 && v5 == 3 || v8 == 3 && v5 == 5) )
      {
        return 2;
      }
      else if ( v9 == 2 && (v8 == 5 && v5 == 2 || v8 == 2 && v5 == 6) )
      {
        return 3;
      }
      else if ( v7 >= 17 )
      {
        if ( v7 >= 22 )
        {
          if ( v6 >= 8 )
          {
            if ( v6 >= 17 )
              return 0;
            else
              return v6 - 4;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return v7 - 4;
      }
    }
    else
    {
      return 1;
    }
  }
  else if ( v7 == 12 )
  {
    return 13;
  }
  else
  {
    return v7;
  }
}


//======================================================================
// sub_542D50
// entry 00542d50  size 50  status ok
//======================================================================

int sub_542D50()
{
  int v1; // [esp+4h] [ebp-4h]

  v1 = sub_54A0C0(0, 1);
  if ( v1 == 14 )
    v1 = 11;
  return v1 - 2;
}


//======================================================================
// sub_542D90
// entry 00542d90  size 393  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_542D90(ATL::CCRTHeap *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int k; // [esp+8h] [ebp-4h]
  int m; // [esp+8h] [ebp-4h]
  int n; // [esp+8h] [ebp-4h]
  int ii; // [esp+8h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &VideoBlackjackDisplay::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 6; ++j )
      *((_DWORD *)this + 6 * i + j + 17) = 0;
  }
  for ( k = 0; k < 3; ++k )
    *((_DWORD *)this + k + 4) = 0;
  for ( m = 0; m < 9; ++m )
    *((_DWORD *)this + m + 35) = 0;
  for ( n = 0; n < 3; ++n )
    *((_DWORD *)this + n + 1) = 0;
  for ( ii = 0; ii < 3; ++ii )
    *((_DWORD *)this + ii + 14) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  return this;
}


//======================================================================
// sub_542F20
// entry 00542f20  size 1495  status ok
//======================================================================

void __thiscall sub_542F20(CNoTrackObject *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+4Ch] [ebp-90h]
  void (__thiscall ***v3)(_DWORD, int); // [esp+54h] [ebp-88h]
  void *v4; // [esp+5Ch] [ebp-80h]
  void *v5; // [esp+64h] [ebp-78h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+6Ch] [ebp-70h]
  void (__thiscall ***v7)(_DWORD, int); // [esp+74h] [ebp-68h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+7Ch] [ebp-60h]
  void (__thiscall ***v9)(_DWORD, int); // [esp+84h] [ebp-58h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+8Ch] [ebp-50h]
  void (__thiscall ***v11)(_DWORD, int); // [esp+94h] [ebp-48h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+9Ch] [ebp-40h]
  void *v13; // [esp+A4h] [ebp-38h]
  void (__thiscall ***v14)(_DWORD, int); // [esp+ACh] [ebp-30h]
  void (__thiscall ***v15)(_DWORD, int); // [esp+B4h] [ebp-28h]
  void (__thiscall ***v16)(_DWORD, int); // [esp+BCh] [ebp-20h]
  void (__thiscall ***v17)(_DWORD, int); // [esp+C4h] [ebp-18h]
  int j; // [esp+C8h] [ebp-14h]
  int i; // [esp+CCh] [ebp-10h]
  int k; // [esp+CCh] [ebp-10h]
  int m; // [esp+CCh] [ebp-10h]
  int n; // [esp+CCh] [ebp-10h]
  int ii; // [esp+CCh] [ebp-10h]

  *(_DWORD *)this = &VideoBlackjackDisplay::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 6; ++j )
    {
      if ( *((_DWORD *)this + 6 * i + j + 17) )
      {
        v17 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 6 * i + j + 17);
        if ( v17 )
          (**v17)(v17, 1);
        *((_DWORD *)this + 6 * i + j + 17) = 0;
      }
    }
  }
  for ( k = 0; k < 3; ++k )
  {
    if ( *((_DWORD *)this + k + 4) )
    {
      v16 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + k + 4);
      if ( v16 )
        (**v16)(v16, 1);
      *((_DWORD *)this + k + 4) = 0;
    }
  }
  for ( m = 0; m < 9; ++m )
  {
    if ( *((_DWORD *)this + m + 35) )
    {
      v15 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + m + 35);
      if ( v15 )
        (**v15)(v15, 1);
      *((_DWORD *)this + m + 35) = 0;
    }
  }
  for ( n = 0; n < 3; ++n )
  {
    if ( *((_DWORD *)this + n + 1) )
    {
      v14 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + n + 1);
      if ( v14 )
        (**v14)(v14, 1);
      *((_DWORD *)this + n + 1) = 0;
    }
  }
  for ( ii = 0; ii < 3; ++ii )
  {
    if ( *((_DWORD *)this + ii + 14) )
    {
      v13 = (void *)*((_DWORD *)this + ii + 14);
      sub_5465F0(v13);
      operator delete(v13);
      *((_DWORD *)this + ii + 14) = 0;
    }
  }
  v12 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 7);
  if ( v12 )
    (**v12)(v12, 1);
  v11 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 8);
  if ( v11 )
    (**v11)(v11, 1);
  v10 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 9);
  if ( v10 )
    (**v10)(v10, 1);
  v9 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 10);
  if ( v9 )
    (**v9)(v9, 1);
  v8 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 11);
  if ( v8 )
    (**v8)(v8, 1);
  v7 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 12);
  if ( v7 )
    (**v7)(v7, 1);
  v6 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 13);
  if ( v6 )
    (**v6)(v6, 1);
  v5 = (void *)*((_DWORD *)this + 44);
  if ( v5 )
  {
    sub_546160(v5);
    operator delete(v5);
  }
  v4 = (void *)*((_DWORD *)this + 45);
  if ( v4 )
  {
    sub_546160(v4);
    operator delete(v4);
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 46);
  if ( v3 )
    (**v3)(v3, 1);
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 47);
  if ( v2 )
    (**v2)(v2, 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_543500
// entry 00543500  size 2066  status ok
//======================================================================

int __thiscall sub_543500(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+4h] [ebp-C0h]
  int v9; // [esp+8h] [ebp-BCh]
  int v10; // [esp+Ch] [ebp-B8h]
  int v11; // [esp+10h] [ebp-B4h]
  int v12; // [esp+14h] [ebp-B0h]
  int v13; // [esp+18h] [ebp-ACh]
  int v14; // [esp+1Ch] [ebp-A8h]
  int v15; // [esp+20h] [ebp-A4h]
  int v16; // [esp+24h] [ebp-A0h]
  int v17; // [esp+28h] [ebp-9Ch]
  int v18; // [esp+2Ch] [ebp-98h]
  int v19; // [esp+30h] [ebp-94h]
  int v20; // [esp+34h] [ebp-90h]
  int v21; // [esp+38h] [ebp-8Ch]
  int v23; // [esp+3Ch] [ebp-88h]
  int v24; // [esp+40h] [ebp-84h]
  int v25; // [esp+44h] [ebp-80h]
  void *v26; // [esp+48h] [ebp-7Ch]
  void *v27; // [esp+50h] [ebp-74h]
  void *v28; // [esp+58h] [ebp-6Ch]
  void *v29; // [esp+60h] [ebp-64h]
  void *v30; // [esp+68h] [ebp-5Ch]
  void *v31; // [esp+70h] [ebp-54h]
  void *v32; // [esp+78h] [ebp-4Ch]
  void *v33; // [esp+80h] [ebp-44h]
  void *v34; // [esp+88h] [ebp-3Ch]
  void *v35; // [esp+90h] [ebp-34h]
  void *v36; // [esp+98h] [ebp-2Ch]
  void *v37; // [esp+A0h] [ebp-24h]
  void *v38; // [esp+A8h] [ebp-1Ch]
  void *v39; // [esp+B0h] [ebp-14h]
  int v40; // [esp+C0h] [ebp-4h]
  int v41; // [esp+C0h] [ebp-4h]
  int v42; // [esp+C0h] [ebp-4h]

  v1 = sub_630F40("SID_VIDEOBLACKJACK");
  sub_5F38B0(v1);
  sub_5F1AD0(3217000);
  v39 = operator new(0x184u);
  if ( v39 )
    v21 = sub_5F5BF0(v39);
  else
    v21 = 0;
  *(this + 46) = v21;
  sub_5EAE80(3217120, 0, 0, 3, -1);
  v38 = operator new(0x184u);
  if ( v38 )
    v20 = sub_5F5BF0(v38);
  else
    v20 = 0;
  *(this + 47) = v20;
  sub_5EAE80(3217121, 0, 0, 100, -1);
  *(_DWORD *)(*(this + 47) + 376) = 0;
  v37 = operator new(0xCu);
  if ( v37 )
    v19 = sub_5465A0(v37);
  else
    v19 = 0;
  *(this + 14) = v19;
  sub_546660(387, 34, 398, 34);
  v36 = operator new(0xCu);
  if ( v36 )
    v18 = sub_5465A0(v36);
  else
    v18 = 0;
  *(this + 15) = v18;
  sub_546660(181, 34, 192, 34);
  v35 = operator new(0xCu);
  if ( v35 )
    v17 = sub_5465A0(v35);
  else
    v17 = 0;
  *(this + 16) = v17;
  sub_546660(68, 203, 79, 203);
  v34 = operator new(0x40u);
  if ( v34 )
    v16 = sub_546110(v34);
  else
    v16 = 0;
  *(this + 44) = v16;
  sub_5461F0(3217020, 81, 329, 0, 1);
  sub_546360(*(this + 44));
  v33 = operator new(0x40u);
  if ( v33 )
    v15 = sub_546110(v33);
  else
    v15 = 0;
  *(this + 45) = v15;
  sub_5461F0(3217021, 405, 329, 0, 1);
  sub_546360(*(this + 45));
  v32 = operator new(0x178u);
  if ( v32 )
  {
    sub_5EAAF0(v32);
    v14 = v2;
  }
  else
  {
    v14 = 0;
  }
  *(this + 7) = v14;
  sub_5EAE80(3217101, 0, 0, 600, -1);
  v3 = sub_543D50(this);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 7) + 176))(*(this + 7), v3);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 116))(*(this + 7));
  v31 = operator new(0x178u);
  if ( v31 )
  {
    sub_5EAAF0(v31);
    v13 = v4;
  }
  else
  {
    v13 = 0;
  }
  *(this + 8) = v13;
  sub_5EAE80(3217102, 0, 0, 1, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 8) + 112))(*(this + 8));
  v30 = operator new(0x184u);
  if ( v30 )
    v12 = sub_5F5BF0(v30);
  else
    v12 = 0;
  *(this + 9) = v12;
  v25 = *(_DWORD *)(dword_7947E0 + 20244);
  sub_5EAE80(dword_73B5C0[2 * v25], 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 116))(*(this + 9));
  v29 = operator new(0x178u);
  if ( v29 )
  {
    sub_5EAAF0(v29);
    v11 = v5;
  }
  else
  {
    v11 = 0;
  }
  *(this + 10) = v11;
  v24 = *(_DWORD *)(dword_7947E0 + 20244);
  sub_5EAE80(dword_73B5C4[2 * v24], 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 10) + 112))(*(this + 10));
  v28 = operator new(0x184u);
  if ( v28 )
    v10 = sub_5F5BF0(v28);
  else
    v10 = 0;
  *(this + 11) = v10;
  sub_5EAE80(3217026, 0, 0, 5, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 11) + 112))(*(this + 11));
  v27 = operator new(0x184u);
  if ( v27 )
    v9 = sub_5F5BF0(v27);
  else
    v9 = 0;
  *(this + 12) = v9;
  sub_5EAE80(3217130, 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 12) + 112))(*(this + 12));
  v26 = operator new(0x178u);
  if ( v26 )
  {
    sub_5EAAF0(v26);
    v8 = v6;
  }
  else
  {
    v8 = 0;
  }
  *(this + 13) = v8;
  sub_5EAE80(3217140, 0, 0, 5, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 13) + 112))(*(this + 13));
  sub_543DD0(-1);
  sub_543F00(v40);
  sub_5443D0(v23);
  sub_544490(v41);
  sub_544620(v42);
  return sub_544D20(v23);
}


//======================================================================
// sub_543D20
// entry 00543d20  size 43  status ok
//======================================================================

int __stdcall sub_543D20(int a1, char a2)
{
  if ( a2 )
    return dword_73B3F0[a1];
  else
    return dword_73B3FC[a1];
}


//======================================================================
// sub_543D50
// entry 00543d50  size 92  status ok
//======================================================================

int sub_543D50()
{
  int result; // eax

  switch ( *(_DWORD *)(dword_7947E0 + 20240) )
  {
    case 3:
      result = 0;
      break;
    case 4:
      result = 1;
      break;
    case 6:
      result = 2;
      break;
    case 8:
      result = 3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_543DD0
// entry 00543dd0  size 297  status ok
//======================================================================

void __thiscall sub_543DD0(_DWORD *this)
{
  int v1; // eax
  int v2; // [esp+4h] [ebp-24h]
  void *v4; // [esp+Ch] [ebp-1Ch]
  int j; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]

  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 6; ++j )
    {
      v4 = operator new(0x1A8u);
      if ( v4 )
        v2 = sub_545F70(v4);
      else
        v2 = 0;
      *(this + 6 * i + j + 17) = v2;
      v1 = sub_543D20(i, 0);
      sub_5EAE80(v1, 0, 0, 10, -1);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 6 * i + j + 17) + 112))(*(this + 6 * i + j + 17));
    }
  }
}


//======================================================================
// sub_543F00
// entry 00543f00  size 187  status ok
//======================================================================

void __thiscall sub_543F00(_DWORD *this)
{
  int v1; // [esp+4h] [ebp-20h]
  void *v3; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 3; ++i )
  {
    v3 = operator new(0x184u);
    if ( v3 )
      v1 = sub_5F5BF0(v3);
    else
      v1 = 0;
    *(this + i + 4) = v1;
    sub_5EAE80(3217103, 0, 0, 400, -1);
  }
}


//======================================================================
// sub_543FC0
// entry 00543fc0  size 134  status ok
//======================================================================

int __thiscall sub_543FC0(_DWORD **this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 6; ++j )
    {
      if ( *(this + 6 * i + j + 17) )
        (*(void (__thiscall **)(_DWORD))(**(this + 6 * i + j + 17) + 112))(*(this + 6 * i + j + 17));
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_544050
// entry 00544050  size 485  status ok
//======================================================================

int __thiscall sub_544050(_DWORD *this, __int16 a2, int a3, int a4, char a5, char a6)
{
  int v6; // eax
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v9 = 0;
  v10 = 0;
  if ( !*((_BYTE *)dword_793404 + 28) )
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      100003,
      0,
      0,
      5,
      1,
      1.0,
      0.5,
      0);
  *(_BYTE *)(*(this + 6 * a3 + a4 + 17) + 420) = a5;
  *(_WORD *)(*(this + 6 * a3 + a4 + 17) + 400) = a2;
  v6 = sub_543D20(a3, a6);
  sub_5EAF00(v6);
  if ( !a6 )
  {
    v9 = dword_73B408[2 * a4];
    v10 = dword_73B40C[2 * a4];
  }
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 6 * a3 + a4 + 17) + 72))(*(this + 6 * a3 + a4 + 17), v9);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 6 * a3 + a4 + 17) + 80))(*(this + 6 * a3 + a4 + 17), v10);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 6 * a3 + a4 + 17) + 108))(
    *(this + 6 * a3 + a4 + 17),
    a4 + 100);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 6 * a3 + a4 + 17) + 116))(*(this + 6 * a3 + a4 + 17));
  if ( a3 || (int)sub_548F80(0) > 2 )
    return sub_544300(a3, 1);
  else
    return sub_544300(0, 0);
}


//======================================================================
// sub_544240
// entry 00544240  size 100  status ok
//======================================================================

int __thiscall sub_544240(_DWORD *this, int a2, int a3)
{
  *(_WORD *)(*(this + 6 * a2 + a3 + 17) + 400) = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 6 * a2 + a3 + 17) + 112))(*(this + 6 * a2 + a3 + 17));
  return sub_544300(a2, 1);
}


//======================================================================
// sub_5442B0
// entry 005442b0  size 65  status ok
//======================================================================

int __thiscall sub_5442B0(_DWORD *this)
{
  *(_BYTE *)(*(this + 17) + 420) = 1;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 17) + 116))(*(this + 17));
  return sub_544300(0, 1);
}


//======================================================================
// sub_544300
// entry 00544300  size 137  status ok
//======================================================================

int __thiscall sub_544300(streambuf **this, int a2, char a3)
{
  int v5; // [esp+4h] [ebp-4h]

  v5 = sub_549E80(a2, a3);
  if ( a2 == 1 )
  {
    if ( *((_BYTE *)dword_793404 + 36) )
      sub_546760(73, 60, 84, 60);
    else
      sub_546760(181, 34, 192, 34);
  }
  streambuf::unbuffered(*(this + a2 + 14), v5);
  return sub_5467B0(*(this + a2 + 14));
}


//======================================================================
// sub_544390
// entry 00544390  size 54  status ok
//======================================================================

int __thiscall sub_544390(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    sub_5468A0(*(this + i + 14));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5443D0
// entry 005443d0  size 180  status ok
//======================================================================

int sub_5443D0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    sub_5F9DE0(0, i, i + 3217002, 0, 0, 2, &Source, -1, -1, -1, -1, 0);
    sub_5FB300(i);
    sub_5EB700(1);
    sub_544B30(i);
    if ( i == 3 )
    {
      sub_5FB300(3);
      sub_602790(0);
      sub_544AC0(3);
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_544490
// entry 00544490  size 394  status ok
//======================================================================

void __thiscall sub_544490(_DWORD *this)
{
  int v1; // [esp+0h] [ebp-28h]
  _DWORD *v2; // [esp+4h] [ebp-24h]
  _DWORD *v4; // [esp+10h] [ebp-18h]
  int i; // [esp+18h] [ebp-10h]

  for ( i = 0; i < 9; ++i )
  {
    v4 = operator new(0x1DCu);
    if ( v4 )
    {
      Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
      *v4 = &VideoBlackjackTouchButton::`vftable';
      v2 = v4;
    }
    else
    {
      v2 = 0;
    }
    *(this + i + 35) = v2;
    sub_5EAE80(dword_73B360[3 * i], dword_73B364[3 * i], dword_73B368[3 * i], 1, -1);
    sub_6023D0(0, 1, 2, 3);
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 35), (struct CPaneDivider *)i);
    *(_BYTE *)(*(this + i + 35) + 437) = 1;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 35) + 208))(*(this + i + 35));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 35) + 116))(*(this + i + 35));
    sub_5448F0(i);
  }
}


//======================================================================
// sub_544620
// entry 00544620  size 224  status ok
//======================================================================

void __thiscall sub_544620(_DWORD *this)
{
  int v1; // eax
  int v2; // [esp+4h] [ebp-20h]
  void *v4; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 3; ++i )
  {
    v4 = operator new(0x178u);
    if ( v4 )
    {
      sub_5EAAF0(v4);
      v2 = v1;
    }
    else
    {
      v2 = 0;
    }
    *(this + i + 1) = v2;
    sub_5EAE80(dword_73B460[i], 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 112))(*(this + i + 1));
  }
}


//======================================================================
// sub_544700
// entry 00544700  size 40  status ok
//======================================================================

int __thiscall sub_544700(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + a2 + 1) + 116))(*(this + a2 + 1), this);
}


//======================================================================
// sub_544730
// entry 00544730  size 40  status ok
//======================================================================

int __thiscall sub_544730(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + a2 + 1) + 112))(*(this + a2 + 1), this);
}


//======================================================================
// sub_544760
// entry 00544760  size 28  status ok
//======================================================================

int __thiscall sub_544760(_DWORD *this, int a2)
{
  return sub_5F54E0(*(this + a2 + 1), this);
}


//======================================================================
// sub_544780
// entry 00544780  size 31  status ok
//======================================================================

int __thiscall sub_544780(_DWORD **this)
{
  sub_544700(this, 0);
  return sub_544700(this, 1);
}


//======================================================================
// sub_5447C0
// entry 005447c0  size 31  status ok
//======================================================================

int sub_5447C0()
{
  sub_544860(0);
  return sub_544860(1);
}


//======================================================================
// sub_5447E0
// entry 005447e0  size 31  status ok
//======================================================================

int sub_5447E0()
{
  sub_5448F0(0);
  return sub_5448F0(1);
}


//======================================================================
// sub_544800
// entry 00544800  size 45  status ok
//======================================================================

int __thiscall sub_544800(_DWORD **this)
{
  sub_545320(this);
  sub_545390(this);
  sub_544700(this, 2);
  return sub_5447C0();
}


//======================================================================
// sub_544830
// entry 00544830  size 45  status ok
//======================================================================

int __thiscall sub_544830(_DWORD **this)
{
  sub_544730(this, 2);
  sub_5447E0();
  sub_5452A0(this);
  return sub_545340(this);
}


//======================================================================
// sub_544860
// entry 00544860  size 131  status ok
//======================================================================

int __thiscall sub_544860(_DWORD **this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD))(**(this + a2 + 35) + 204))(*(this + a2 + 35));
  (*(void (__thiscall **)(_DWORD, int))(**(this + a2 + 35) + 108))(*(this + a2 + 35), 2);
  result = sub_5449E0(a2);
  if ( result != -1 )
    return sub_5F2B20(result, 1);
  return result;
}


//======================================================================
// sub_5448F0
// entry 005448f0  size 129  status ok
//======================================================================

int __thiscall sub_5448F0(_DWORD **this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD))(**(this + a2 + 35) + 208))(*(this + a2 + 35));
  (*(void (__thiscall **)(_DWORD, int))(**(this + a2 + 35) + 108))(*(this + a2 + 35), 1);
  result = sub_5449E0(a2);
  if ( result != -1 )
    return sub_5F2BA0(result);
  return result;
}


//======================================================================
// sub_544980
// entry 00544980  size 31  status ok
//======================================================================

int __thiscall sub_544980(_DWORD *this, int a2)
{
  return sub_6026D0(*(this + a2 + 35));
}


//======================================================================
// sub_5449A0
// entry 005449a0  size 49  status ok
//======================================================================

int __thiscall sub_5449A0(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + a2 + 35) + 192))(*(this + a2 + 35), this);
}


//======================================================================
// sub_5449E0
// entry 005449e0  size 108  status ok
//======================================================================

int __stdcall sub_5449E0(int a1)
{
  int v2; // [esp+8h] [ebp-4h]

  v2 = -1;
  switch ( a1 )
  {
    case 0:
      v2 = 3217010;
      break;
    case 1:
      v2 = 3217011;
      break;
    case 3:
      v2 = 3217009;
      break;
    case 4:
      v2 = 3217008;
      break;
    case 5:
      v2 = 3217007;
      break;
    case 6:
      v2 = 3217005;
      break;
    case 7:
      v2 = 3217006;
      break;
    default:
      return v2;
  }
  return v2;
}


//======================================================================
// sub_544A70
// entry 00544a70  size 76  status ok
//======================================================================

int __stdcall sub_544A70(int a1)
{
  int v2; // [esp+8h] [ebp-4h]

  v2 = -1;
  switch ( a1 )
  {
    case 0:
      return 3217002;
    case 1:
      return 3217003;
    case 2:
      return 3217004;
  }
  return v2;
}


//======================================================================
// sub_544AC0
// entry 00544ac0  size 97  status ok
//======================================================================

int __stdcall sub_544AC0(int a1)
{
  int v1; // eax
  int result; // eax

  v1 = sub_5FB300(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 204))(v1, v1);
  result = sub_544A70(a1);
  if ( result != -1 )
    return sub_5F2B20(result, 1);
  return result;
}


//======================================================================
// sub_544B30
// entry 00544b30  size 95  status ok
//======================================================================

int __stdcall sub_544B30(int a1)
{
  int v1; // eax
  int result; // eax

  v1 = sub_5FB300(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 208))(v1, v1);
  result = sub_544A70(a1);
  if ( result != -1 )
    return sub_5F2BA0(result);
  return result;
}


//======================================================================
// sub_544B90
// entry 00544b90  size 56  status ok
//======================================================================

Concurrency::details::_NonReentrantPPLLock *__thiscall sub_544B90(_DWORD **this)
{
  Concurrency::details::_NonReentrantPPLLock *result; // eax

  sub_5452A0(this);
  sub_545340(this);
  result = dword_793404;
  if ( *((_DWORD *)dword_793404 + 2) )
    return (Concurrency::details::_NonReentrantPPLLock *)sub_544860(this, 6);
  return result;
}


//======================================================================
// sub_544BD0
// entry 00544bd0  size 336  status ok
//======================================================================

int __thiscall sub_544BD0(_DWORD *this)
{
  int v2; // [esp+14h] [ebp-20h]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793400 + 4) + 4))(*(_DWORD *)(dword_793400 + 4), 1);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    101014,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  *(_DWORD *)(*(this + 46) + 376) = 1;
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 46) + 176))(*(this + 46), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 46) + 116))(*(this + 46));
  if ( operator new(0x20u) )
    v2 = sub_6010A0(*(_DWORD *)(dword_793400 + 4));
  else
    v2 = 0;
  sub_5F5D50(v2);
  if ( *((_BYTE *)dword_793404 + 77) )
    return sub_5452A0(this);
  else
    return sub_544D20(this);
}


//======================================================================
// sub_544D20
// entry 00544d20  size 200  status ok
//======================================================================

unsigned __int8 __thiscall sub_544D20(int this)
{
  unsigned __int8 result; // al
  int v2; // eax

  result = CMFCScanliner::channels(*(CMFCScanliner **)(this + 40));
  if ( result )
  {
    if ( (unsigned __int8)sub_54A830(dword_793404) )
    {
      sub_544AC0(0);
      sub_544AC0(1);
    }
    else
    {
      sub_544B30(0);
      sub_544B30(1);
    }
    if ( (unsigned __int8)sub_54A890(dword_793404) )
      sub_544AC0(2);
    else
      sub_544B30(2);
    sub_544860((_DWORD **)this, 2);
    sub_5452A0(this);
    sub_545340(this);
    result = sub_54A8B0(dword_793404);
    if ( result )
    {
      v2 = sub_5DCB00(0);
      return sub_5DBB70(v2);
    }
  }
  return result;
}


//======================================================================
// sub_544DF0
// entry 00544df0  size 59  status ok
//======================================================================

int sub_544DF0()
{
  sub_5F2BA0(3217004);
  sub_5F2BA0(3217002);
  return sub_5F2BA0(3217003);
}


//======================================================================
// sub_544E30
// entry 00544e30  size 202  status ok
//======================================================================

int __thiscall sub_544E30(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  result = dword_793400;
  if ( !*(_DWORD *)(*(_DWORD *)(dword_793400 + 4) + 4) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 116))(*(_DWORD *)(this + 40));
    for ( i = 0; i < 9; ++i )
    {
      *(_BYTE *)(i + this + 192) = sub_544980((_DWORD *)this, i);
      sub_5448F0((_DWORD **)this, i);
    }
    for ( j = 0; j < 4; ++j )
    {
      v3 = sub_5FB300(j);
      *(_BYTE *)(j + this + 201) = sub_6026D0(v3);
      sub_544B30(j);
    }
    return sub_544860((_DWORD **)this, 8);
  }
  return result;
}


//======================================================================
// sub_544F00
// entry 00544f00  size 172  status ok
//======================================================================

int __thiscall sub_544F00(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(**(this + 10) + 112))(*(this + 10));
  for ( i = 0; i < 9; ++i )
  {
    if ( *((_BYTE *)this + i + 192) )
      result = sub_544860(this, i);
    else
      result = sub_5448F0(this, i);
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( *((_BYTE *)this + j + 201) )
      sub_544AC0(j);
    else
      sub_544B30(j);
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_545010
// entry 00545010  size 132  status ok
//======================================================================

int __thiscall sub_545010(int this)
{
  sub_544390((_DWORD *)this);
  sub_545B90(this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 176))(*(_DWORD *)(this + 36), 0);
  sub_5F5D50(0);
  sub_544B30(0);
  sub_544B30(1);
  sub_5448F0((_DWORD **)this, 6);
  sub_544780((_DWORD **)this);
  sub_544DF0();
  sub_5453B0(this);
  return sub_5454F0(0, 5);
}


//======================================================================
// sub_5450A0
// entry 005450a0  size 289  status ok
//======================================================================

int __thiscall sub_5450A0(_DWORD **this)
{
  char v3; // [esp+7h] [ebp-1h] BYREF

  sub_54AC20(dword_793404);
  v3 = 0;
  if ( (unsigned __int8)sub_548D90(&v3) )
  {
    sub_5448F0(this, 7);
    sub_5448F0(this, 5);
    sub_5448F0(this, 4);
    sub_5448F0(this, 3);
    return sub_544800(this);
  }
  else if ( v3 )
  {
    return sub_548D20(0);
  }
  else
  {
    if ( (unsigned __int8)sub_549640(dword_793404) )
      sub_544860(this, 7);
    else
      sub_5448F0(this, 7);
    if ( (unsigned __int8)sub_549720(dword_793404) )
      sub_544860(this, 5);
    else
      sub_5448F0(this, 5);
    if ( (unsigned __int8)sub_549770(dword_793404) )
      sub_544860(this, 4);
    else
      sub_5448F0(this, 4);
    if ( (unsigned __int8)sub_549A50(dword_793404) )
      return sub_544860(this, 3);
    else
      return sub_5448F0(this, 3);
  }
}


//======================================================================
// sub_5451D0
// entry 005451d0  size 123  status ok
//======================================================================

int __thiscall sub_5451D0(_DWORD **this)
{
  if ( !*((_BYTE *)dword_793404 + 28) )
    sub_57AE30(dword_793578);
  sub_5448F0(this, 7);
  sub_5448F0(this, 5);
  sub_5448F0(this, 4);
  sub_5448F0(this, 3);
  sub_5448F0(this, 0);
  sub_5448F0(this, 1);
  sub_544830(this);
  sub_545A00(this);
  return sub_5454F0(1, 5);
}


//======================================================================
// sub_545250
// entry 00545250  size 79  status ok
//======================================================================

int __thiscall sub_545250(_DWORD **this)
{
  sub_5448F0(this, 7);
  sub_5448F0(this, 5);
  sub_5448F0(this, 4);
  sub_5448F0(this, 3);
  sub_5448F0(this, 0);
  sub_5448F0(this, 1);
  return sub_544830(this);
}


//======================================================================
// sub_5452A0
// entry 005452a0  size 118  status ok
//======================================================================

int __thiscall sub_5452A0(int this)
{
  if ( !(unsigned __int8)sub_544760((_DWORD *)this, 2) )
  {
    CMFCCaptionButton::SetMiniFrameButton(*(CMFCCaptionButton **)(this + 180), *((_DWORD *)dword_793404 + 1));
    sub_546360(*(_DWORD *)(this + 180));
  }
  if ( (unsigned __int8)sub_54A890(dword_793404) )
    return sub_544AC0(2);
  else
    return sub_544B30(2);
}


//======================================================================
// sub_545320
// entry 00545320  size 25  status ok
//======================================================================

int __thiscall sub_545320(_DWORD *this)
{
  return sub_546520(*(this + 45), this);
}


//======================================================================
// sub_545340
// entry 00545340  size 78  status ok
//======================================================================

int __thiscall sub_545340(int this)
{
  int result; // eax

  result = (unsigned __int8)sub_544760((_DWORD *)this, 2);
  if ( !(_BYTE)result )
  {
    CMFCCaptionButton::SetMiniFrameButton(*(CMFCCaptionButton **)(this + 176), *((_DWORD *)dword_793404 + 2));
    return sub_546360(*(_DWORD *)(this + 176));
  }
  return result;
}


//======================================================================
// sub_545390
// entry 00545390  size 25  status ok
//======================================================================

int __thiscall sub_545390(_DWORD *this)
{
  return sub_546520(*(this + 44), this);
}


//======================================================================
// sub_5453B0
// entry 005453b0  size 83  status ok
//======================================================================

int __thiscall sub_5453B0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(this + i + 4) + 112))(*(this + i + 4));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_545410
// entry 00545410  size 210  status ok
//======================================================================

int __thiscall sub_545410(_DWORD **this, char a2, int a3)
{
  int v4; // [esp+4h] [ebp-1Ch]

  if ( !a2 || *((_BYTE *)dword_793404 + 28) )
  {
    sub_5F5D50(0);
    return (*(int (__thiscall **)(_DWORD))(**(this + 12) + 112))(*(this + 12));
  }
  else
  {
    if ( operator new(0x1Cu) )
      v4 = sub_600A70(0);
    else
      v4 = 0;
    sub_5F5D50(v4);
    return (*(int (__thiscall **)(_DWORD))(**(this + 12) + 116))(*(this + 12));
  }
}


//======================================================================
// sub_5454F0
// entry 005454f0  size 106  status ok
//======================================================================

int __thiscall sub_5454F0(_DWORD **this, char a2, int a3)
{
  int result; // eax

  if ( a2 )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(this + 11) + 116))(*(this + 11));
    if ( !*((_DWORD *)dword_793404 + 1) )
      return sub_545410(this, 1, 20);
  }
  else
  {
    sub_5F5D50(0);
    return (*(int (__thiscall **)(_DWORD))(**(this + 11) + 112))(*(this + 11));
  }
  return result;
}


//======================================================================
// sub_545560
// entry 00545560  size 152  status ok
//======================================================================

Concurrency::details::_NonReentrantPPLLock *__stdcall sub_545560(int a1, int a2)
{
  Concurrency::details::_NonReentrantPPLLock *result; // eax
  int v3; // [esp+4h] [ebp-1Ch]

  result = dword_793404;
  if ( !*((_BYTE *)dword_793404 + 28) )
  {
    if ( operator new(0x1Cu) )
      v3 = sub_600A70(0);
    else
      v3 = 0;
    return (Concurrency::details::_NonReentrantPPLLock *)sub_5F5D50(v3);
  }
  return result;
}


//======================================================================
// sub_545600
// entry 00545600  size 148  status ok
//======================================================================

Concurrency::details::_NonReentrantPPLLock *__stdcall sub_545600(int a1)
{
  Concurrency::details::_NonReentrantPPLLock *result; // eax
  int v2; // [esp+4h] [ebp-1Ch]

  result = dword_793404;
  if ( !*((_BYTE *)dword_793404 + 28) )
  {
    if ( operator new(0x1Cu) )
      v2 = sub_600A70(0);
    else
      v2 = 0;
    return (Concurrency::details::_NonReentrantPPLLock *)sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_5456A0
// entry 005456a0  size 611  status ok
//======================================================================

int __thiscall sub_5456A0(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // [esp+24h] [ebp-18h]
  int v5; // [esp+28h] [ebp-14h]
  char v6; // [esp+2Fh] [ebp-Dh]
  int v7; // [esp+30h] [ebp-Ch]
  int v8; // [esp+34h] [ebp-8h]
  int v9; // [esp+38h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  v6 = 0;
  v5 = sub_548F80(a2);
  v4 = sub_54A180(a2);
  switch ( v4 )
  {
    case 1:
      sub_5EAF00(3217108);
      sub_545560(a2, 5);
      v6 = 1;
      break;
    case 2:
      sub_5EAF00(3217103);
      sub_545560(a2, 5);
      break;
    case 3:
      sub_5EAF00(3217104);
      break;
    case 4:
      sub_5EAF00(3217105);
      break;
    case 5:
      sub_5EAF00(3217106);
      break;
    case 6:
      sub_5EAF00(3217107);
      sub_545560(a2, 5);
      break;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\videoblackjackdisplay.cpp", 872);
      break;
  }
  if ( v6 )
  {
    if ( a2 == 1 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + 5) + 68))(*(this + 5), 109, 96);
      goto LABEL_21;
    }
    if ( a2 == 2 )
    {
      v7 = 105;
      v8 = 241;
    }
  }
  else
  {
    if ( a2 == 1 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + 5) + 68))(*(this + 5), v5 != 2 ? 120 : 107, 96);
      goto LABEL_21;
    }
    if ( a2 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + 6) + 68))(*(this + 6), v5 != 2 ? 116 : 103, 241);
      goto LABEL_21;
    }
  }
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + a2 + 4) + 68))(*(this + a2 + 4), v7, v8);
LABEL_21:
  result = (*(int (__thiscall **)(_DWORD))(**(this + a2 + 4) + 116))(*(this + a2 + 4));
  if ( !*((_BYTE *)dword_793404 + 28) )
  {
    v9 = sub_54A110(v4);
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             v9,
             0,
             0,
             5,
             1,
             1.0,
             0.5,
             0);
  }
  return result;
}


//======================================================================
// sub_545920
// entry 00545920  size 215  status ok
//======================================================================

int __thiscall sub_545920(_DWORD **this)
{
  int v2; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+Ch] [ebp-10h]
  char v5; // [esp+13h] [ebp-9h]

  v5 = 0;
  v4 = sub_548F80(0);
  v2 = sub_54A310(dword_793404);
  if ( v2 == 5 )
  {
    sub_5EAF00(3217106);
    v5 = 1;
  }
  if ( !v5 )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 4) + 112))(*(this + 4), v2);
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 4) + 68))(*(this + 4), v4 != 2 ? 326 : 313, 96);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 4) + 116))(*(this + 4), v2);
}


//======================================================================
// sub_545A00
// entry 00545a00  size 119  status ok
//======================================================================

int __thiscall sub_545A00(_DWORD **this)
{
  if ( !(unsigned __int8)sub_54A740(1) || !*((_BYTE *)dword_793404 + 36) )
    sub_5456A0(this, 1);
  if ( *((_BYTE *)dword_793404 + 36) )
    sub_5456A0(this, 2);
  return sub_545920(this);
}


//======================================================================
// sub_545A80
// entry 00545a80  size 23  status ok
//======================================================================

int __stdcall sub_545A80(int a1)
{
  return dword_73B46C[a1];
}


//======================================================================
// sub_545AA0
// entry 00545aa0  size 146  status ok
//======================================================================

int __thiscall sub_545AA0(_DWORD **this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1Cu) )
    v2 = sub_546900(0);
  else
    v2 = 0;
  sub_5F5D50(v2);
  return sub_545410(this, 1, 20);
}


//======================================================================
// sub_545B40
// entry 00545b40  size 72  status ok
//======================================================================

int __thiscall sub_545B40(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD, bool))(**(this + 8) + 176))(*(this + 8), a2 != 1);
  return (*(int (__thiscall **)(_DWORD))(**(this + 8) + 116))(*(this + 8));
}


//======================================================================
// sub_545B90
// entry 00545b90  size 32  status ok
//======================================================================

int __thiscall sub_545B90(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 8) + 112))(*(this + 8), this);
}


//======================================================================
// sub_545BB0
// entry 00545bb0  size 213  status ok
//======================================================================

int __thiscall sub_545BB0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(**(this + 46) + 112))(*(this + 46));
  if ( *((_DWORD *)dword_793404 + 2) )
  {
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 11) + 176))(*(this + 11), 0);
    for ( i = 0; i < 3; ++i )
    {
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + i + 4) + 176))(*(this + i + 4), 0);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 9) + 176))(*(this + 9), 0);
    return sub_5F5D50(0);
  }
  return result;
}


//======================================================================
// sub_545C90
// entry 00545c90  size 301  status ok
//======================================================================

unsigned __int8 __thiscall sub_545C90(int this)
{
  unsigned __int8 result; // al
  int v2; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+Ch] [ebp-10h]

  result = CMFCScanliner::channels(*(CMFCScanliner **)(this + 40));
  if ( result )
  {
    result = sub_544760((_DWORD *)this, 2);
    if ( !result )
    {
      v2 = sub_542A00((void *)dword_79340C, *((void **)dword_793404 + 8));
      switch ( v2 )
      {
        case 1:
          v4 = 3217142;
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(
            *(_DWORD *)(this + 52),
            dword_73B3B8,
            dword_73B3BC);
          break;
        case 3:
          v4 = 3217140;
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(
            *(_DWORD *)(this + 52),
            dword_73B394,
            dword_73B398);
          break;
        case 4:
          v4 = 3217141;
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(
            *(_DWORD *)(this + 52),
            dword_73B388,
            dword_73B38C);
          break;
        default:
          v4 = 3217143;
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(
            *(_DWORD *)(this + 52),
            dword_73B3A0,
            dword_73B3A4);
          break;
      }
      sub_5EAF00(v4);
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 116))(*(_DWORD *)(this + 52));
    }
  }
  return result;
}


//======================================================================
// sub_545DC0
// entry 00545dc0  size 383  status ok
//======================================================================

int __thiscall sub_545DC0(_DWORD *this)
{
  int result; // eax
  const CHAR *v2; // eax
  const CHAR *v3; // eax
  const CHAR *v4; // [esp+4h] [ebp-10h]
  const CHAR *v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+Ch] [ebp-8h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793408 + 52) + 112))(*(_DWORD *)(dword_793408 + 52));
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             3217203,
             0,
             0,
             5,
             1,
             1.0,
             0.5,
             0);
  v6 = *(this + 3);
  switch ( v6 )
  {
    case 0:
      result = sub_548D20(1);
      break;
    case 1:
      result = sub_548D20(0);
      break;
    case 2:
      result = sub_544E30(dword_793408);
      break;
    case 3:
      if ( (unsigned __int8)sub_549AD0(dword_793404, v6) )
      {
        result = sub_549C00(v7, this);
      }
      else
      {
        v4 = (const CHAR *)sub_630F40("SID_VIDEOBLACKJACK_CANTSPLIT_TITLE");
        v2 = (const CHAR *)sub_630F40("SID_VIDEOBLACKJACK_CANTSPLIT_MESSAGE");
        result = sub_62FF10(v2, v4, 0);
      }
      break;
    case 4:
      if ( (unsigned __int8)sub_5497A0(dword_793404) )
      {
        result = sub_5499A0(dword_793404);
      }
      else
      {
        v5 = (const CHAR *)sub_630F40("SID_VIDEOBLACKJACK_CANTDOUBLE_TITLE");
        v3 = (const CHAR *)sub_630F40("SID_VIDEOBLACKJACK_CANTDOUBLE_MESSAGE");
        result = sub_62FF10(v3, v5, 0);
      }
      break;
    case 5:
      result = sub_549750(dword_793404);
      break;
    case 6:
      sub_545410((_DWORD **)dword_793408, 0, 20);
      result = sub_5491F0(v6, this);
      break;
    case 7:
      result = sub_5496A0(dword_793404);
      break;
    case 8:
      result = sub_544F00((_DWORD **)dword_793408);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_545F70
// entry 00545f70  size 42  status ok
//======================================================================

Concurrency::details::_TaskCollection *__thiscall sub_545F70(Concurrency::details::_TaskCollection *this)
{
  Concurrency::details::_TaskCollection::_TaskCollection(this);
  *(_DWORD *)this = &VideoBlackjackCardDisplay::`vftable';
  *((_BYTE *)this + 10) = 0;
  return this;
}


//======================================================================
// sub_545FC0
// entry 00545fc0  size 25  status ok
//======================================================================

int __stdcall sub_545FC0(int a1)
{
  return sub_6447E0(a1);
}


//======================================================================
// sub_545FF0
// entry 00545ff0  size 247  status ok
//======================================================================

int __thiscall sub_545FF0(__int16 *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-24h]
  _DWORD v5[5]; // [esp+10h] [ebp-14h]

  v5[0] = -1;
  v5[1] = 1;
  v5[2] = 2;
  v5[3] = 3;
  v5[4] = 0;
  if ( sub_641280(*(this + 200)) == 14 )
    v3 = 1;
  else
    v3 = sub_641280(*(this + 200));
  v1 = sub_641290(*(this + 200));
  (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 13 * v5[v1] + v3 - 1);
  if ( sub_641280(*(this + 200)) == 15 )
    (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 52);
  if ( !*((_BYTE *)this + 420) )
    (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 53);
  return sub_5EB570(this);
}


//======================================================================
// sub_5460F0
// entry 005460f0  size 19  status ok
//======================================================================

int __thiscall sub_5460F0(void *this)
{
  return sub_5EB5A0(this, this);
}


//======================================================================
// sub_546110
// entry 00546110  size 75  status ok
//======================================================================

_DWORD *__thiscall sub_546110(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  *this = 0;
  *(this + 15) = 0;
  for ( i = 0; i < 10; ++i )
    *(this + i + 1) = 0;
  return this;
}


//======================================================================
// sub_546160
// entry 00546160  size 136  status ok
//======================================================================

int __thiscall sub_546160(_DWORD *this)
{
  int result; // eax
  int i; // [esp+1Ch] [ebp-4h]

  result = (int)this;
  if ( *this )
    result = (**(int (__thiscall ***)(_DWORD, int))*this)(*this, 1);
  for ( i = 0; i < 10; ++i )
  {
    result = (int)this;
    if ( *(this + i + 1) )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + i + 1))(*(this + i + 1), 1);
  }
  return result;
}


//======================================================================
// sub_5461F0
// entry 005461f0  size 69  status ok
//======================================================================

int __thiscall sub_5461F0(int this, int a2, int a3, int a4, int a5, char a6)
{
  *(_DWORD *)(this + 60) = a2;
  *(_DWORD *)(this + 48) = a3;
  *(_DWORD *)(this + 52) = a4;
  *(_BYTE *)(this + 56) = a6;
  CMFCCaptionButton::SetMiniFrameButton((CMFCCaptionButton *)this, a5);
  return sub_546240(this);
}


//======================================================================
// sub_546240
// entry 00546240  size 279  status ok
//======================================================================

int __thiscall sub_546240(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-2Ch]
  int v5; // [esp+8h] [ebp-28h]
  void *v7; // [esp+10h] [ebp-20h]
  void *v8; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  for ( i = 0; i < 10; ++i )
  {
    v8 = operator new(0x178u);
    if ( v8 )
    {
      sub_5EAAF0(v8);
      v5 = v1;
    }
    else
    {
      v5 = 0;
    }
    *(this + i + 1) = v5;
    sub_5EAE80(3217025, 0, 0, 1, -1);
  }
  v7 = operator new(0x178u);
  if ( v7 )
  {
    sub_5EAAF0(v7);
    v4 = v2;
  }
  else
  {
    v4 = 0;
  }
  *this = v4;
  return sub_5EAE80(*(this + 15), 0, 0, 1, -1);
}


//======================================================================
// sub_546360
// entry 00546360  size 434  status ok
//======================================================================

int __thiscall sub_546360(_DWORD *this)
{
  int v1; // eax
  int v4; // [esp+8h] [ebp-2Ch]
  signed int v5; // [esp+10h] [ebp-24h]
  int v6; // [esp+14h] [ebp-20h]
  char Buffer[12]; // [esp+18h] [ebp-1Ch] BYREF
  signed int i; // [esp+28h] [ebp-Ch]
  int v9; // [esp+2Ch] [ebp-8h]
  int v10; // [esp+30h] [ebp-4h]

  v5 = 0;
  v4 = *(this + 12);
  v6 = *(this + 13);
  v10 = 11;
  if ( *((_BYTE *)this + 56) )
    v10 = -v10;
  if ( (int)*(this + 11) > 1000000000 )
    sub_5E9F20((char)"value<=MAX_CASINO_BET", "..\\Casino\\videoblackjackdisplay.cpp", 1214);
  if ( (int)*(this + 11) > 1000000000 )
    *(this + 11) = 1000000000;
  sprintf(Buffer, "%d", *(this + 11));
  for ( i = strlen(Buffer) - 1; i >= 0; --i )
  {
    v9 = Buffer[i] - 48;
    v1 = sub_545A80(v9);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v5 + 1) + 176))(*(this + v5 + 1), v1);
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + v5 + 1) + 68))(*(this + v5 + 1), v4, v6);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v5 + 1) + 116))(*(this + v5 + 1));
    ++v5;
    v4 += v10;
  }
  for ( i = v5; i < 10; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 112))(*(this + i + 1));
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 116))(*this);
}


//======================================================================
// sub_546520
// entry 00546520  size 87  status ok
//======================================================================

int __thiscall sub_546520(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 112))(*this);
  for ( i = 0; i < 10; ++i )
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 112))(*(this + i + 1));
  return result;
}


//======================================================================
// sub_5465A0
// entry 005465a0  size 65  status ok
//======================================================================

_DWORD *__thiscall sub_5465A0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
    *(this + i) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// sub_5465F0
// entry 005465f0  size 102  status ok
//======================================================================

void __thiscall sub_5465F0(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    if ( *(this + i) )
      (***(this + i))(*(this + i), 1);
    *(this + i) = 0;
  }
}


//======================================================================
// sub_546660
// entry 00546660  size 253  status ok
//======================================================================

int __thiscall sub_546660(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v8; // [esp+4h] [ebp-28h]
  int v9; // [esp+8h] [ebp-24h]
  void *v11; // [esp+10h] [ebp-1Ch]
  void *v12; // [esp+18h] [ebp-14h]

  v12 = operator new(0x178u);
  if ( v12 )
  {
    sub_5EAAF0(v12);
    v9 = v5;
  }
  else
  {
    v9 = 0;
  }
  *this = v9;
  sub_5EAE80(3217025, a2, a3, 5, -1);
  v11 = operator new(0x178u);
  if ( v11 )
  {
    sub_5EAAF0(v11);
    v8 = v6;
  }
  else
  {
    v8 = 0;
  }
  *(this + 1) = v8;
  return sub_5EAE80(3217025, a4, a5, 5, -1);
}


//======================================================================
// sub_546760
// entry 00546760  size 67  status ok
//======================================================================

int __thiscall sub_546760(_DWORD *this, int a2, int a3, int a4, int a5)
{
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 68))(*this, a2, a3);
  return (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 1) + 68))(*(this + 1), a4, a5);
}


//======================================================================
// sub_5467B0
// entry 005467b0  size 230  status ok
//======================================================================

int __thiscall sub_5467B0(int *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v6; // [esp+4h] [ebp-8h]

  if ( *(this + 2) > 9 )
  {
    v6 = *(this + 2) % 10;
    v2 = sub_545A80(*(this + 2) / 10);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)*this + 176))(*this, v2);
    v3 = sub_545A80(v6);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)*this + 116))(*this);
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)*this + 112))(*this);
    v1 = sub_545A80(*(this + 2));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v1);
  }
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 116))(*(this + 1));
}


//======================================================================
// sub_5468A0
// entry 005468a0  size 64  status ok
//======================================================================

int __thiscall sub_5468A0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i) + 112))(*(this + i));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_546900
// entry 00546900  size 146  status ok
//======================================================================

_DWORD *__thiscall sub_546900(_DWORD *this, int a2)
{
  sub_600A70(a2);
  *this = &VideoBlackjackCycleCashOut::`vftable';
  (*(void (__cdecl **)(int))(*(_DWORD *)dword_162EE84 + 128))(101000);
  return this;
}


//======================================================================
// sub_5469C0
// entry 005469c0  size 70  status ok
//======================================================================

int __thiscall sub_5469C0(_DWORD **this, int a2, int a3)
{
  sub_6004E0(a2, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 176))(*(this + 1), 0);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 116))(*(this + 1));
}


//======================================================================
// sub_546A10
// entry 00546a10  size 40  status ok
//======================================================================

int __thiscall sub_546A10(_DWORD **this)
{
  sub_600B30(this);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
}


//======================================================================
// sub_546A40
// entry 00546a40  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_546A40(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &VideoBlackjackDealScript::`vftable';
  *(this + 8) = 3 * sub_637810(4);
  return this;
}


//======================================================================
// sub_546AB0
// entry 00546ab0  size 262  status ok
//======================================================================

int __thiscall sub_546AB0(_DWORD *this)
{
  int result; // eax

  switch ( unknown_libname_843(this) )
  {
    case 0:
      sub_5492C0(1, 1);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, *(this + 8));
      break;
    case 1:
      sub_5492C0(0, 0);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, *(this + 8));
      break;
    case 2:
      sub_5492C0(1, 1);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, *(this + 8));
      break;
    case 3:
      sub_5492C0(0, 1);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 4, *(this + 8));
      break;
    case 4:
      sub_549300(dword_793404);
      result = sub_5FC420(0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\videoblackjackdisplay.cpp", 1386);
      break;
  }
  return result;
}


//======================================================================
// sub_546BD0
// entry 00546bd0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_546BD0(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &VideoBlackjackDealerScript::`vftable';
  *(this + 8) = 3 * sub_637810(4);
  return this;
}


//======================================================================
// sub_546C40
// entry 00546c40  size 318  status ok
//======================================================================

int __thiscall sub_546C40(_DWORD *this)
{
  int result; // eax

  switch ( unknown_libname_843(this) )
  {
    case 0:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, *(this + 8));
      break;
    case 1:
      sub_5442B0((_DWORD *)dword_793408);
      if ( !sub_542980() )
        goto LABEL_7;
      goto LABEL_4;
    case 2:
      sub_5492C0(0, 1);
      if ( sub_542980() )
LABEL_4:
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, *(this + 8));
      else
LABEL_7:
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, *(this + 8));
      break;
    case 3:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 4, 0);
      break;
    case 4:
      sub_5450A0((_DWORD **)dword_793408);
      sub_5493A0(dword_793404);
      result = sub_5FC420(0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\videoblackjackdisplay.cpp", 1433);
      break;
  }
  return result;
}


//======================================================================
// sub_546DA0
// entry 00546da0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_546DA0(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &VideoBlackjackDealerShowHoleCardScript::`vftable';
  *(this + 8) = 3 * sub_637810(4);
  return this;
}


//======================================================================
// sub_546E10
// entry 00546e10  size 158  status ok
//======================================================================

int __thiscall sub_546E10(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = unknown_libname_843(this);
  switch ( v2 )
  {
    case 0:
      return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, *(this + 8));
    case 1:
      sub_5442B0((_DWORD *)dword_793408);
      return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, *(this + 8));
    case 2:
      sub_5493A0(dword_793404);
      return sub_5FC420(0);
    default:
      return sub_5E9F20((char)"false", "..\\Casino\\videoblackjackdisplay.cpp", 1463);
  }
}


//======================================================================
// sub_546EB0
// entry 00546eb0  size 110  status ok
//======================================================================

_DWORD *__thiscall sub_546EB0(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &VideoBlackjackSplitScript::`vftable';
  *(this + 8) = 2 * sub_637810(4);
  return this;
}


//======================================================================
// sub_546F20
// entry 00546f20  size 853  status ok
//======================================================================

int __thiscall sub_546F20(void *this)
{
  int result; // eax

  switch ( unknown_libname_843(this) )
  {
    case 0:
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, *((_DWORD *)this + 8));
      break;
    case 1:
      *((_WORD *)this + 18) = sub_549080(1, 1);
      sub_548FE0(2, *((_WORD *)this + 18), 1, 0);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 2, *((_DWORD *)this + 8));
      break;
    case 2:
      if ( (unsigned __int8)sub_549DF0(*((_WORD *)this + 18)) )
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 10, 0);
      else
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 3, 0);
      break;
    case 3:
      sub_5492C0(1, 1);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 4, *((_DWORD *)this + 8));
      break;
    case 4:
      if ( (unsigned __int8)sub_54A6C0(1) )
        sub_545600(7);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 5, 0);
      break;
    case 5:
      sub_5450A0((_DWORD **)dword_793408);
      if ( (unsigned __int8)sub_54A770(1) )
        sub_549750(dword_793404);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 6, 0);
      break;
    case 6:
      result = sub_5FC420(0);
      break;
    case 10:
      sub_5492C0(1, 1);
      if ( (unsigned __int8)sub_54A6C0(1) )
        sub_545600(7);
      sub_545250((_DWORD **)dword_793408);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 11, *((_DWORD *)this + 8));
      break;
    case 11:
      sub_5492C0(2, 1);
      if ( (unsigned __int8)sub_54A6C0(2) )
        sub_545600(7);
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 12, *((_DWORD *)this + 8));
      break;
    case 12:
      sub_545B90((_DWORD **)dword_793408);
      *((_DWORD *)dword_793404 + 8) = 0;
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 13, *((_DWORD *)this + 8));
      break;
    case 13:
      sub_5442B0((_DWORD *)dword_793408);
      if ( !sub_542980() )
        goto LABEL_26;
      goto LABEL_23;
    case 14:
      sub_5492C0(0, 1);
      if ( sub_542980() )
LABEL_23:
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 15, *((_DWORD *)this + 8));
      else
LABEL_26:
        result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 14, *((_DWORD *)this + 8));
      break;
    case 15:
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 16, 0);
      break;
    case 16:
      sub_5450A0((_DWORD **)dword_793408);
      sub_5493A0(dword_793404);
      result = sub_5FC420(0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\videoblackjackdisplay.cpp", 1569);
      break;
  }
  return result;
}


//======================================================================
// sub_5472F0
// entry 005472f0  size 53  status ok
//======================================================================

void *__thiscall sub_5472F0(_DWORD *this, char a2)
{
  void *v3; // [esp+0h] [ebp-4h]

  *this = &VideoBlackjackTouchButton::`vftable';
  sub_601BA0(this);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}


//======================================================================
// sub_5473D0
// entry 005473d0  size 54  status ok
//======================================================================

int __thiscall sub_5473D0(void *this, int a2)
{
  sub_548B20(dword_793404, this);
  return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_793400 + 4) + 8))(
           *(_DWORD *)(dword_793400 + 4),
           1,
           a2);
}


//======================================================================
// sub_547450
// entry 00547450  size 80  status ok
//======================================================================

_DWORD *__thiscall sub_547450(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &VideoBlackjackRoom::`vftable';
  dword_793400 = (int)this;
  dword_793404 = 0;
  dword_793410 = 0;
  dword_793408 = 0;
  dword_79340C = 0;
  return this;
}


//======================================================================
// sub_5474A0
// entry 005474a0  size 335  status ok
//======================================================================

int __thiscall sub_5474A0(_DWORD *this)
{
  *this = &VideoBlackjackRoom::`vftable';
  sub_5DE170(dword_7947E0);
  dword_793400 = 0;
  if ( dword_793404 )
    (**(void (__thiscall ***)(Concurrency::details::_NonReentrantPPLLock *, int))dword_793404)(dword_793404, 1);
  dword_793404 = 0;
  if ( dword_793410 )
    (**(void (__thiscall ***)(int, int))dword_793410)(dword_793410, 1);
  dword_793410 = 0;
  if ( dword_793408 )
    (**(void (__thiscall ***)(int, int))dword_793408)(dword_793408, 1);
  dword_793408 = 0;
  if ( dword_79340C )
    (**(void (__thiscall ***)(int, int))dword_79340C)(dword_79340C, 1);
  dword_79340C = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_5475F0
// entry 005475f0  size 489  status ok
//======================================================================

int __thiscall sub_5475F0(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-4Ch]
  ATL::CCRTHeap *v3; // [esp+8h] [ebp-48h]
  _AFX_OLE_STATE *v4; // [esp+Ch] [ebp-44h]
  ATL::CCRTHeap *v5; // [esp+10h] [ebp-40h]
  Concurrency::details::_NonReentrantPPLLock *v6; // [esp+14h] [ebp-3Ch]
  _DWORD *v8; // [esp+1Ch] [ebp-34h]
  ATL::CCRTHeap *v9; // [esp+24h] [ebp-2Ch]
  _AFX_OLE_STATE *v10; // [esp+2Ch] [ebp-24h]
  ATL::CCRTHeap *v11; // [esp+34h] [ebp-1Ch]
  void *v12; // [esp+3Ch] [ebp-14h]

  sub_5D8230();
  v12 = operator new(0x5Cu);
  if ( v12 )
    v6 = (Concurrency::details::_NonReentrantPPLLock *)sub_548880(v12);
  else
    v6 = 0;
  dword_793404 = v6;
  v11 = (ATL::CCRTHeap *)operator new(0xD0u);
  if ( v11 )
    v5 = sub_542D90(v11);
  else
    v5 = 0;
  dword_793408 = (int)v5;
  sub_5489A0();
  sub_543500((_DWORD *)dword_793408);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v4 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v4 = 0;
  dword_793410 = (int)v4;
  v9 = (ATL::CCRTHeap *)operator new(4u);
  if ( v9 )
    v3 = sub_542960(v9);
  else
    v3 = 0;
  dword_79340C = (int)v3;
  sub_5490E0(dword_793404);
  v8 = operator new(0x20u);
  if ( v8 )
  {
    sub_5FC0D0(0);
    *v8 = &VideoBlackjackRoomScript::`vftable';
    v2 = v8;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  return sub_5473D0((void *)dword_793410, 0);
}


//======================================================================
// sub_5477E0
// entry 005477e0  size 31  status ok
//======================================================================

_DWORD *__stdcall sub_5477E0(_DWORD *a1, _DWORD *a2)
{
  *a1 = 1;
  *a2 = 1000000000;
  return a1;
}


//======================================================================
// sub_547800
// entry 00547800  size 251  status ok
//======================================================================

int __stdcall sub_547800(int a1, int a2)
{
  switch ( a2 )
  {
    case 100001:
      sub_5FE640(100006, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      sub_5FE240(5017, -1, -1, 0);
      break;
    case 100035:
      sub_5FE640(100038, 0);
      sub_5FE640(100037, 0);
      sub_5FE640(-2, 2);
      break;
    case 100055:
      sub_5FE640(100058, 0);
      sub_5FE240(5009, -1, -1, 0);
      sub_5FE240(5019, -1, -1, 0);
      break;
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_547900
// entry 00547900  size 49  status ok
//======================================================================

int __thiscall sub_547900(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3217001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_547940
// entry 00547940  size 223  status ok
//======================================================================

int __stdcall sub_547940(int a1, int a2)
{
  switch ( a1 )
  {
    case 3217002:
      return sub_5494E0(0);
    case 3217003:
      return sub_5494E0(1);
    case 3217004:
      return sub_5494E0(2);
    case 3217005:
      sub_5449A0((_DWORD **)dword_793408, 6);
      return sub_5DC7D0(a1, a2);
    case 3217006:
      sub_5449A0((_DWORD **)dword_793408, 7);
      return sub_5DC7D0(a1, a2);
    case 3217007:
      sub_5449A0((_DWORD **)dword_793408, 5);
      return sub_5DC7D0(a1, a2);
    case 3217008:
      sub_5449A0((_DWORD **)dword_793408, 4);
      return sub_5DC7D0(a1, a2);
    case 3217009:
      sub_5449A0((_DWORD **)dword_793408, 3);
      return sub_5DC7D0(a1, a2);
    case 3217010:
      sub_5449A0((_DWORD **)dword_793408, 0);
      return sub_5DC7D0(a1, a2);
    case 3217011:
      sub_5449A0((_DWORD **)dword_793408, 1);
      return sub_5DC7D0(a1, a2);
    default:
      return sub_5DC7D0(a1, a2);
  }
}


//======================================================================
// sub_547A50
// entry 00547a50  size 958  status ok
//======================================================================

int __stdcall sub_547A50(int a1)
{
  int result; // eax
  int v2; // eax
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

  result = sub_5D7F40(a1);
  if ( *(_DWORD *)(a1 + 24) == 4 )
  {
    result = *(unsigned __int8 *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 4) )
    {
      if ( dword_793404 )
      {
        result = tolower(*(char *)(a1 + 20)) - 13;
        switch ( result )
        {
          case 0:
            result = sub_5F2A60(3217005, 0);
            if ( result )
            {
              v5 = sub_5F2A60(3217005, 0);
              result = (unsigned __int8)sub_6026D0(v5);
              if ( (_BYTE)result )
              {
                result = sub_5449A0((_DWORD **)dword_793408, 6);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 85:
            result = sub_5F2A60(3217002, 0);
            if ( result )
            {
              v2 = sub_5F2A60(3217002, 0);
              result = (unsigned __int8)sub_6026D0(v2);
              if ( (_BYTE)result )
              {
                result = sub_5494E0(0);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 86:
            result = sub_5F2A60(3217004, 0);
            if ( result )
            {
              v4 = sub_5F2A60(3217004, 0);
              result = sub_6026D0(v4);
              if ( (_BYTE)result )
              {
                result = sub_5494E0(2);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 87:
            result = sub_5F2A60(3217008, 0);
            if ( result )
            {
              v8 = sub_5F2A60(3217008, 0);
              result = (unsigned __int8)sub_6026D0(v8);
              if ( (_BYTE)result )
              {
                result = sub_5449A0((_DWORD **)dword_793408, 4);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 91:
            result = sub_5F2A60(3217006, 0);
            if ( result )
            {
              v6 = sub_5F2A60(3217006, 0);
              result = sub_6026D0(v6);
              if ( (_BYTE)result )
              {
                sub_5449A0((_DWORD **)dword_793408, 7);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 96:
            result = sub_5F2A60(3217003, 0);
            if ( result )
            {
              v3 = sub_5F2A60(3217003, 0);
              result = sub_6026D0(v3);
              if ( (_BYTE)result )
              {
                sub_5494E0(1);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 97:
            result = sub_5F2A60(3217011, 0);
            if ( result )
            {
              v11 = sub_5F2A60(3217011, 0);
              result = (unsigned __int8)sub_6026D0(v11);
              if ( (_BYTE)result )
              {
                result = sub_5449A0((_DWORD **)dword_793408, 1);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 99:
            result = sub_5F2A60(3217009, 0);
            if ( result )
            {
              v9 = sub_5F2A60(3217009, 0);
              result = sub_6026D0(v9);
              if ( (_BYTE)result )
              {
                sub_5449A0((_DWORD **)dword_793408, 3);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 102:
            result = sub_5F2A60(3217007, 0);
            if ( result )
            {
              v7 = sub_5F2A60(3217007, 0);
              result = sub_6026D0(v7);
              if ( (_BYTE)result )
              {
                result = sub_5449A0((_DWORD **)dword_793408, 5);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 103:
            v12 = sub_5F2A60(5009, 0);
            result = sub_6026D0(v12);
            if ( (_BYTE)result )
            {
              sub_5DB240(dword_793400);
              *(_BYTE *)(a1 + 4) = 1;
              result = a1;
            }
            break;
          case 108:
            result = sub_5F2A60(3217010, 0);
            if ( result )
            {
              v10 = sub_5F2A60(3217010, 0);
              result = sub_6026D0(v10);
              if ( (_BYTE)result )
              {
                result = sub_5449A0((_DWORD **)dword_793408, 0);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          default:
            return result;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_547EB0
// entry 00547eb0  size 35  status ok
//======================================================================

char __thiscall sub_547EB0(void *this)
{
  if ( dword_793404 )
    return sub_548A80(dword_793404, this);
  else
    return 1;
}


//======================================================================
// sub_547EE0
// entry 00547ee0  size 22  status ok
//======================================================================

unsigned __int8 sub_547EE0()
{
  return sub_544D20(dword_793408);
}


//======================================================================
// sub_547F00
// entry 00547f00  size 164  status ok
//======================================================================

Concurrency::details::_NonReentrantPPLLock *__stdcall sub_547F00(int a1)
{
  int *v1; // eax
  Concurrency::details::_NonReentrantPPLLock *result; // eax
  int v3; // [esp-8h] [ebp-2Ch]
  int v4; // [esp-8h] [ebp-2Ch]
  int v5; // [esp-8h] [ebp-2Ch]
  int v6; // [esp-4h] [ebp-28h]
  int v7; // [esp-4h] [ebp-28h]
  int v8; // [esp-4h] [ebp-28h]
  _BYTE v9[8]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v10[8]; // [esp+14h] [ebp-10h] BYREF
  int v11; // [esp+1Ch] [ebp-8h] BYREF
  int v12; // [esp+20h] [ebp-4h]

  v1 = (int *)sub_5D0C30(v9, *((_DWORD *)dword_793404 + 2));
  v6 = v1[1];
  v3 = *v1;
  sub_5D0CD0(v10);
  sub_64C630(&v11, v3, v6);
  v7 = v12;
  v4 = v11;
  sub_5DCB00(a1);
  sub_5D5FB0(v4, v7);
  v8 = v12;
  v5 = v11;
  sub_5DCB00(a1);
  sub_5D5CF0(v5, v8);
  sub_5D0A20(0);
  result = dword_793404;
  *((_DWORD *)dword_793404 + 2) = 0;
  return result;
}


//======================================================================
// sub_547FB0
// entry 00547fb0  size 107  status ok
//======================================================================

int __stdcall sub_547FB0(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  _BYTE v10[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = sub_5DCB00(a1);
  v9 = *(_DWORD *)(v1 + 1224);
  v8 = *(_DWORD *)(v1 + 1220);
  sub_548940(dword_793404);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = (_DWORD *)sub_548940(dword_793404);
  *v5 = v3;
  v5[1] = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_548020
// entry 00548020  size 24  status ok
//======================================================================

unsigned __int8 __stdcall sub_548020(int a1)
{
  return sub_545C90(dword_793408);
}


//======================================================================
// sub_548040
// entry 00548040  size 28  status ok
//======================================================================

int __stdcall sub_548040(int a1)
{
  return sub_5494E0(a1);
}


//======================================================================
// sub_548060
// entry 00548060  size 76  status ok
//======================================================================

int __stdcall sub_548060(int a1)
{
  int result; // eax
  _BYTE v2[8]; // [esp+8h] [ebp-Ch] BYREF
  int v3; // [esp+10h] [ebp-4h]

  v3 = *((_DWORD *)dword_793404 + 1);
  sub_5D0DB0(v2, a1);
  result = v3;
  if ( v3 < *((_DWORD *)dword_793404 + 1) )
    return sub_544BD0((_DWORD *)dword_793408);
  return result;
}


//======================================================================
// sub_5480B0
// entry 005480b0  size 70  status ok
//======================================================================

int __thiscall sub_5480B0(_DWORD *this)
{
  if ( *(this + 5) == 1 )
    return sub_545BB0((_DWORD **)dword_793408);
  else
    return sub_5E9F20((char)"false", "..\\Casino\\videoblackjackroom.cpp", 346);
}


//======================================================================
// sub_548130
// entry 00548130  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_548130(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &VideoBlackjackRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_548160
// entry 00548160  size 120  status ok
//======================================================================

_DWORD *sub_548160()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_547450(v2);
  else
    return 0;
}


//======================================================================
// sub_5481E0
// entry 005481e0  size 51  status ok
//======================================================================

char __stdcall sub_5481E0(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_VIDEOBLACKJACK");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_548240
// entry 00548240  size 16  status ok
//======================================================================

int sub_548240()
{
  return 3217000;
}


//======================================================================
// sub_548250
// entry 00548250  size 16  status ok
//======================================================================

const char *sub_548250()
{
  return "videoblackjack";
}


//======================================================================
// sub_548270
// entry 00548270  size 16  status ok
//======================================================================

char **sub_548270()
{
  return off_73BF44;
}


//======================================================================
// sub_548280
// entry 00548280  size 16  status ok
//======================================================================

char **sub_548280()
{
  return &off_73BF50;
}


//======================================================================
// sub_5482B0
// entry 005482b0  size 94  status ok
//======================================================================

char __stdcall sub_5482B0(_DWORD *a1, int a2)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  a1[2] = 1;
  a1[3] = 1;
  a1[4] = 1;
  a1[5] = 0;
  a1[6] = 0;
  return 1;
}


//======================================================================
// sub_548310
// entry 00548310  size 16  status ok
//======================================================================

int sub_548310()
{
  return 8;
}


//======================================================================
// sub_548340
// entry 00548340  size 52  status ok
//======================================================================

char __stdcall sub_548340(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_548390
// entry 00548390  size 16  status ok
//======================================================================

int sub_548390()
{
  return 15;
}


//======================================================================
// sub_5483A0
// entry 005483a0  size 251  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_5483A0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(16);
  *a2 += *v8;
  a2[1] += v8[1];
  *a3 += *v8;
  a3[1] += v8[1];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)16 )
    {
      sub_5E0C40(a1, &v5, v7);
      *a2 += v7[0] + v5;
      a2[1] += v6;
      *a3 += v5;
      a3[1] += v6;
      *a4 += v7[0];
      result = (struct Concurrency::details::_TaskCollectionBase *)(v7[1] + a4[1]);
      a4[1] = result;
    }
  }
  return result;
}


//======================================================================
// sub_5484A0
// entry 005484a0  size 241  status ok
//======================================================================

char __stdcall sub_5484A0(int a1, int a2)
{
  int *v2; // eax
  int v3; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-64h] BYREF
  __int64 v6; // [esp+Ch] [ebp-5Ch]
  __int64 v7; // [esp+14h] [ebp-54h]
  __int64 v8; // [esp+1Ch] [ebp-4Ch] BYREF
  __int64 v9; // [esp+24h] [ebp-44h] BYREF
  int v10; // [esp+2Ch] [ebp-3Ch]
  char Destination[52]; // [esp+30h] [ebp-38h] BYREF

  v10 = sub_63AAE0(16);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v6 = sub_64C8A0(0, 0);
  v9 = v6;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)16 )
    sub_5E0C40(a2, &v8, &v9);
  v2 = (int *)sub_64C5C0(v5, v8, HIDWORD(v8));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  return 1;
}


//======================================================================
// sub_5485A0
// entry 005485a0  size 30  status ok
//======================================================================

char __stdcall sub_5485A0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  return 1;
}


//======================================================================
// sub_5485C0
// entry 005485c0  size 41  status ok
//======================================================================

char __stdcall sub_5485C0(int a1)
{
  if ( a1 != 3217000 )
    return 0;
  sub_653BD0(16);
  return 1;
}


//======================================================================
// sub_5485F0
// entry 005485f0  size 15  status ok
//======================================================================

char __stdcall sub_5485F0(int a1)
{
  return 0;
}


//======================================================================
// sub_548600
// entry 00548600  size 15  status ok
//======================================================================

char __stdcall sub_548600(int a1)
{
  return 0;
}


//======================================================================
// sub_548610
// entry 00548610  size 16  status ok
//======================================================================

void *sub_548610()
{
  return &unk_73BF54;
}


//======================================================================
// sub_548620
// entry 00548620  size 190  status ok
//======================================================================

void *__stdcall sub_548620(int a1)
{
  int v1; // eax

  if ( (dword_793414 & 1) == 0 )
  {
    dword_793414 |= 1u;
    dword_73BF78 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_73BF7C = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3217001 )
    return &unk_73BF74;
  else
    return 0;
}


//======================================================================
// sub_5486E0
// entry 005486e0  size 16  status ok
//======================================================================

void *sub_5486E0()
{
  return &unk_73B620;
}


//======================================================================
// sub_5486F0
// entry 005486f0  size 16  status ok
//======================================================================

void *sub_5486F0()
{
  return &unk_73BE08;
}


//======================================================================
// sub_548700
// entry 00548700  size 147  status ok
//======================================================================

char __stdcall sub_548700(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5487A0(a2);
  if ( v3 == -1 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = v3;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_5487E0(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 16, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_5487A0
// entry 005487a0  size 55  status ok
//======================================================================

int __stdcall sub_5487A0(int a1)
{
  if ( a1 == 3217013 )
    return 0;
  if ( a1 == 3217014 )
    return 1;
  return -1;
}


//======================================================================
// sub_5487E0
// entry 005487e0  size 80  status ok
//======================================================================

int __stdcall sub_5487E0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3217015:
      result = 3;
      break;
    case 3217016:
      result = 4;
      break;
    case 3217017:
      result = 6;
      break;
    case 3217018:
      result = 8;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_548850
// entry 00548850  size 46  status ok
//======================================================================

_DWORD *__stdcall sub_548850(_DWORD *a1)
{
  *a1 = 640;
  a1[1] = 480;
  return a1;
}


//======================================================================
// sub_548880
// entry 00548880  size 41  status ok
//======================================================================

_DWORD *__thiscall sub_548880(void *this)
{
  _DWORD *v2; // [esp+0h] [ebp-4h]

  sub_5D0980(this);
  *v2 = &VideoBlackjackState::`vftable';
  v2[4] = 0;
  return v2;
}


//======================================================================
// sub_5488B0
// entry 005488b0  size 133  status ok
//======================================================================

void __thiscall sub_5488B0(CExpandoObject *this)
{
  *(_DWORD *)this = &VideoBlackjackState::`vftable';
  if ( *((_DWORD *)this + 4) )
    (***((void (__thiscall ****)(_DWORD, int))this + 4))(*((_DWORD *)this + 4), 1);
  CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_548940
// entry 00548940  size 31  status ok
//======================================================================

int sub_548940()
{
  sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_548960
// entry 00548960  size 58  status ok
//======================================================================

int __thiscall sub_548960(_DWORD *this)
{
  *(this + 5) = 0;
  sub_6437D0(1, 0);
  return sub_643930(2, 2, "VideoBlackjack", 1);
}


//======================================================================
// sub_5489A0
// entry 005489a0  size 223  status ok
//======================================================================

int __thiscall sub_5489A0(int this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(_DWORD *)(this + 16) )
  {
    v4 = operator new(0x810u);
    if ( v4 )
      v2 = sub_642E10(v4);
    else
      v2 = 0;
    *(_DWORD *)(this + 16) = v2;
  }
  sub_642E70(0);
  sub_548960((_DWORD *)this);
  *(_DWORD *)(this + 24) = 0;
  sub_548AB0(this);
  sub_548B20(this);
  *(_BYTE *)(this + 29) = 1;
  sub_5F2BA0(5009);
  return sub_57AB80(5, &unk_73BF80);
}


//======================================================================
// sub_548A80
// entry 00548a80  size 34  status ok
//======================================================================

bool __thiscall sub_548A80(_DWORD *this)
{
  return *(this + 2) == 0;
}


//======================================================================
// sub_548AB0
// entry 00548ab0  size 98  status ok
//======================================================================

int __thiscall sub_548AB0(_WORD *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 6; ++j )
      *(this + 6 * i + j + 20) = 0;
  }
  return sub_543FC0((_DWORD **)dword_793408);
}


//======================================================================
// sub_548B20
// entry 00548b20  size 98  status ok
//======================================================================

int __thiscall sub_548B20(int this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  *(_DWORD *)(this + 32) = 1;
  *(_BYTE *)(this + 36) = 0;
  *(_BYTE *)(this + 38) = 0;
  result = this;
  *(_BYTE *)(this + 37) = 0;
  *(_BYTE *)(this + 76) = 0;
  *(_BYTE *)(this + 77) = 0;
  for ( i = 0; i < 3; ++i )
  {
    *(_DWORD *)(this + 4 * i + 80) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_548B90
// entry 00548b90  size 26  status ok
//======================================================================

bool __thiscall sub_548B90(_DWORD *this)
{
  return *(this + 8) != 0;
}


//======================================================================
// sub_548C10
// entry 00548c10  size 262  status ok
//======================================================================

int __thiscall sub_548C10(int this)
{
  int result; // eax

  if ( *(_DWORD *)(this + 32) != 1 )
  {
    if ( *(_DWORD *)(this + 32) == 2 && (unsigned __int8)sub_54A6C0(*(_DWORD *)(this + 32)) )
    {
      sub_545600(7);
      *(_DWORD *)(this + 32) = 0;
      return sub_549750(this);
    }
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(this + 36) )
  {
LABEL_12:
    sub_545B90((_DWORD **)dword_793408);
    *(_DWORD *)(this + 32) = 0;
    return sub_549CD0(this);
  }
  *(_DWORD *)(this + 32) = 2;
  sub_545B40((_DWORD **)dword_793408, 2);
  sub_5492C0(*(_DWORD *)(this + 32), 1);
  sub_5450A0((_DWORD **)dword_793408);
  if ( (unsigned __int8)sub_54A6C0(*(_DWORD *)(this + 32)) )
  {
    sub_545600(7);
    return sub_549750(this);
  }
  else
  {
    result = sub_54A770(*(_DWORD *)(this + 32));
    if ( (_BYTE)result )
      return sub_549750(this);
  }
  return result;
}


//======================================================================
// sub_548D20
// entry 00548d20  size 100  status ok
//======================================================================

int __thiscall sub_548D20(_BYTE *this, char a2)
{
  int result; // eax

  *(this + 37) = 0;
  if ( a2 )
    *(this + 37) = sub_548E50(this);
  sub_544830((_DWORD **)dword_793408);
  sub_5450A0((_DWORD **)dword_793408);
  result = (unsigned __int8)sub_54A6C0(0);
  if ( (_BYTE)result )
  {
    sub_5442B0((_DWORD *)dword_793408);
    return sub_5493A0(this);
  }
  return result;
}


//======================================================================
// sub_548D90
// entry 00548d90  size 181  status ok
//======================================================================

char __thiscall sub_548D90(int this, _BYTE *a2)
{
  *a2 = 0;
  if ( *(_BYTE *)(this + 38) )
    return 0;
  if ( (int)sub_548F80(1) > 2 )
    return 0;
  if ( (int)sub_548F80(2) > 2 )
    return 0;
  if ( sub_548F80(0) != 2 )
    return 0;
  if ( (unsigned __int8)sub_548EB0(this) )
  {
    if ( sub_641280(*(_WORD *)(this + 42)) == 14 )
    {
      *(_BYTE *)(this + 38) = 1;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( sub_641280(*(_WORD *)(this + 42)) == 14 )
    {
      *(_BYTE *)(this + 38) = 1;
      *a2 = 1;
    }
    return 0;
  }
}


//======================================================================
// sub_548E50
// entry 00548e50  size 91  status ok
//======================================================================

char __thiscall sub_548E50(void *this)
{
  int *v2; // eax
  int v3; // edx
  int v4; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( !(unsigned __int8)sub_548EB0(this) )
    return 0;
  v2 = (int *)sub_548EF0(v5);
  v3 = *v2;
  v4 = v2[1];
  v6 = -v3;
  v7 = -v4;
  sub_5D1420(-v3, -v4);
  return 1;
}


//======================================================================
// sub_548EB0
// entry 00548eb0  size 51  status ok
//======================================================================

int sub_548EB0()
{
  int *v0; // eax
  int v2; // [esp-8h] [ebp-1Ch]
  int v3; // [esp-4h] [ebp-18h]
  _BYTE v4[8]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v5[8]; // [esp+Ch] [ebp-8h] BYREF

  v0 = (int *)sub_548EF0(v4);
  v3 = v0[1];
  v2 = *v0;
  sub_5D14B0(v5);
  return sub_64C7A0(v2, v3);
}


//======================================================================
// sub_548EF0
// entry 00548ef0  size 135  status ok
//======================================================================

int *__thiscall sub_548EF0(_DWORD *this, int *a2)
{
  int *v2; // eax
  int v3; // edx
  _BYTE v6[8]; // [esp+8h] [ebp-20h] BYREF
  __int64 v7; // [esp+10h] [ebp-18h]
  __int64 v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h]

  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v2 = (int *)sub_5D0C30(v6, *(this + 2));
  v3 = v2[1];
  v9 = *v2;
  v10 = v3;
  if ( v9 % 2 )
    HIDWORD(v8) = 50;
  *a2 = v9 / 2;
  a2[1] = HIDWORD(v8);
  return a2;
}


//======================================================================
// sub_548F80
// entry 00548f80  size 84  status ok
//======================================================================

int __thiscall sub_548F80(_WORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 6; ++i )
  {
    if ( *(this + 6 * a2 + i + 20) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_548FE0
// entry 00548fe0  size 152  status ok
//======================================================================

unsigned int __thiscall sub_548FE0(int this, int a2, __int16 a3, char a4, char a5)
{
  unsigned int result; // eax
  unsigned int v7; // [esp+4h] [ebp-4h]

  result = sub_548F80((_WORD *)this, a2);
  v7 = result;
  if ( result >= 6 )
    result = sub_5E9F20((char)"(0<=i) && (i<VB_MAX_CARDS_PER_HAND )", "..\\Casino\\videoblackjackstate.cpp", 322);
  if ( v7 <= 5 )
  {
    *(_WORD *)(this + 12 * a2 + 40 + 2 * v7) = a3;
    sub_544050((_DWORD *)dword_793408, a3, a2, v7, a4, a5);
    ++*(_DWORD *)(this + 20);
    return this;
  }
  return result;
}


//======================================================================
// sub_549080
// entry 00549080  size 84  status ok
//======================================================================

__int16 __thiscall sub_549080(_WORD *this, int a2, int a3)
{
  __int16 v4; // [esp+4h] [ebp-4h]

  v4 = *(this + 6 * a2 + a3 + 20);
  *(this + 6 * a2 + a3 + 20) = 0;
  sub_544240((_DWORD *)dword_793408, a2, a3);
  return v4;
}


//======================================================================
// sub_5490E0
// entry 005490e0  size 265  status ok
//======================================================================

int __thiscall sub_5490E0(int this)
{
  bool v3; // [esp+6h] [ebp-6h]
  int v4; // [esp+8h] [ebp-4h]

  *(_BYTE *)(this + 28) = 1;
  sub_5492C0(1, 1);
  sub_5492C0(1, 1);
  v4 = sub_549E80(1, 1);
  v3 = v4 == 21;
  while ( v4 <= 16 )
  {
    sub_5492C0(1, 1);
    v4 = sub_549E80(1, 1);
  }
  sub_5492C0(0, 1);
  sub_5492C0(0, 1);
  sub_5442B0((_DWORD *)dword_793408);
  if ( v4 <= 21 && !v3 )
  {
    while ( !sub_542980() )
      sub_5492C0(0, 1);
  }
  sub_544780((_DWORD **)dword_793408);
  sub_5451D0((_DWORD **)dword_793408);
  *(_BYTE *)(this + 28) = 0;
  return sub_548960((_DWORD *)this);
}


//======================================================================
// sub_5491F0
// entry 005491f0  size 201  status ok
//======================================================================

int __thiscall sub_5491F0(int this)
{
  _DWORD *v2; // [esp+4h] [ebp-20h]
  _DWORD *v4; // [esp+10h] [ebp-14h]

  sub_548B20(this);
  *(_DWORD *)(this + 84) = *(_DWORD *)(this + 8);
  *(_BYTE *)(this + 77) = 1;
  sub_545010(dword_793408);
  if ( *(int *)(this + 20) >= 30 )
    sub_548960((_DWORD *)this);
  sub_548AB0((_WORD *)this);
  v4 = operator new(0x24u);
  if ( v4 )
    v2 = sub_546A40(v4);
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_5492C0
// entry 005492c0  size 53  status ok
//======================================================================

unsigned int __thiscall sub_5492C0(_DWORD *this, int a2, char a3)
{
  __int16 v5; // [esp+4h] [ebp-4h]

  v5 = sub_6436C0(*(this + 4));
  return sub_548FE0((int)this, a2, v5, a3, 0);
}


//======================================================================
// sub_549300
// entry 00549300  size 146  status ok
//======================================================================

int __thiscall sub_549300(__int16 *this)
{
  int result; // eax
  bool v3; // [esp+7h] [ebp-1h]

  sub_5450A0((_DWORD **)dword_793408);
  v3 = sub_641280(*(this + 21)) == 14;
  if ( !(unsigned __int8)sub_54A6C0(0) || v3 )
  {
    result = sub_54A6C0(1);
    if ( (_BYTE)result )
    {
      sub_5442B0((_DWORD *)dword_793408);
      sub_545600(7);
      return sub_5493A0(this);
    }
  }
  else
  {
    sub_5442B0((_DWORD *)dword_793408);
    return sub_5493A0(this);
  }
  return result;
}


//======================================================================
// sub_5493A0
// entry 005493a0  size 34  status ok
//======================================================================

int __thiscall sub_5493A0(_DWORD *this)
{
  ++*(this + 6);
  return sub_54A3C0(this, this);
}


//======================================================================
// sub_5493D0
// entry 005493d0  size 153  status ok
//======================================================================

int __thiscall sub_5493D0(int this)
{
  int result; // eax

  result = sub_54A740(*(_DWORD *)(this + 32));
  if ( !(_BYTE)result )
    result = sub_5E9F20((char)"Busted(currentHand)", "..\\Casino\\videoblackjackstate.cpp", 449);
  if ( *(_DWORD *)(this + 32) == 1 )
  {
    if ( *(_BYTE *)(this + 36) )
    {
      sub_5456A0((_DWORD **)dword_793408, 1);
      return sub_548C10(this);
    }
    return sub_549D60(this);
  }
  if ( *(_DWORD *)(this + 32) != 2 )
    return result;
  if ( (unsigned __int8)sub_54A740(1) )
    return sub_549D60(this);
  return sub_548C10(this);
}


//======================================================================
// sub_549470
// entry 00549470  size 111  status ok
//======================================================================

int __thiscall sub_549470(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax

  if ( *(this + 1) )
    return sub_5DC2E0();
  if ( *(this + 2) )
    return sub_5DC2E0();
  v1 = sub_5DCB00(0);
  v2 = sub_5D5A50(v1);
  if ( v2 >= sub_5D0AA0(this) )
    return sub_5DC2E0();
  v3 = sub_5DCB00(0);
  return sub_5DBB70(v3);
}


//======================================================================
// sub_5494E0
// entry 005494e0  size 336  status ok
//======================================================================

int __thiscall sub_5494E0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // [esp+1Ch] [ebp-4h]

  result = a2;
  switch ( a2 )
  {
    case 0:
      sub_5D0F00(this);
      sub_545410((_DWORD **)dword_793408, 0, 20);
      sub_544B90((_DWORD **)dword_793408);
      sub_545BB0((_DWORD **)dword_793408);
      v4 = *(this + 2);
      result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
      if ( v4 == result )
        result = sub_5491F0((int)this);
      break;
    case 1:
      sub_5D1210(this);
      sub_545410((_DWORD **)dword_793408, 0, 20);
      sub_544B90((_DWORD **)dword_793408);
      result = sub_545BB0((_DWORD **)dword_793408);
      if ( *(this + 2) )
        result = sub_5491F0((int)this);
      break;
    case 2:
      sub_5D13E0(this);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        101000,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      if ( *((_BYTE *)this + 77) )
        sub_5452A0(dword_793408);
      else
        sub_544D20(dword_793408);
      result = sub_545AA0((_DWORD **)dword_793408);
      break;
    case 3:
      sub_545410((_DWORD **)dword_793408, 0, 20);
      result = sub_549470(this);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_549640
// entry 00549640  size 82  status ok
//======================================================================

bool __thiscall sub_549640(int *this)
{
  if ( !sub_548B90(this) )
    return 0;
  if ( (unsigned __int8)sub_54A740(*(this + 8)) )
    return 0;
  return sub_548F80(this, *(this + 8)) < 6;
}


//======================================================================
// sub_5496A0
// entry 005496a0  size 125  status ok
//======================================================================

int __thiscall sub_5496A0(int *this)
{
  int result; // eax
  __int16 v3; // [esp+4h] [ebp-4h]

  v3 = sub_6436C0(*(this + 4));
  sub_548FE0((int)this, *(this + 8), v3, 1, 0);
  sub_5450A0((_DWORD **)dword_793408);
  if ( (unsigned __int8)sub_54A740(*(this + 8)) )
    return sub_5493D0((int)this);
  result = (unsigned __int8)sub_54A770(*(this + 8));
  if ( (_BYTE)result )
    return sub_549750(this);
  return result;
}


//======================================================================
// sub_549720
// entry 00549720  size 39  status ok
//======================================================================

bool __thiscall sub_549720(_DWORD *this)
{
  return (unsigned __int8)sub_54A740(*(this + 8)) == 0;
}


//======================================================================
// sub_549750
// entry 00549750  size 30  status ok
//======================================================================

int __thiscall sub_549750(void *this)
{
  sub_545250((_DWORD **)dword_793408);
  return sub_548C10((int)this);
}


//======================================================================
// sub_549770
// entry 00549770  size 37  status ok
//======================================================================

bool __thiscall sub_549770(int this)
{
  return sub_548F80((_WORD *)this, *(_DWORD *)(this + 32)) == 2;
}


//======================================================================
// sub_5497A0
// entry 005497a0  size 51  status ok
//======================================================================

bool __thiscall sub_5497A0(void *this)
{
  return sub_549770((int)this) && (unsigned __int8)sub_549910(this) != 0;
}


//======================================================================
// sub_5497E0
// entry 005497e0  size 291  status ok
//======================================================================

int __thiscall sub_5497E0(_DWORD *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // edx
  _BYTE v5[8]; // [esp+20h] [ebp-14h] BYREF
  int v6; // [esp+28h] [ebp-Ch]
  int v7; // [esp+2Ch] [ebp-8h]
  int v8; // [esp+30h] [ebp-4h]

  if ( !(unsigned __int8)sub_549910(this) )
    sub_5E9F20((char)"CanAffordDoubleBet()", "..\\Casino\\videoblackjackstate.cpp", 592);
  v8 = *(this + 2);
  if ( *(this + 1) < v8 )
  {
    if ( *(this + 1) )
    {
      v8 -= *(this + 1);
      sub_5D0A20(0);
    }
    v2 = (int *)sub_5D0C30(v5, v8);
    v3 = v2[1];
    v6 = *v2;
    v7 = v3;
    if ( (unsigned __int8)sub_5D0D60(v8) )
    {
      v6 = -v6;
      v7 = -v7;
      sub_5D1420(v6, v7);
      *(this + 2) *= 2;
      return (int)this;
    }
    else
    {
      result = 2 * *(this + 2);
      *(this + 2) = result;
    }
  }
  else
  {
    sub_5D0A20(*(this + 1) - v8);
    result = 2 * *(this + 2);
    *(this + 2) = result;
  }
  return result;
}


//======================================================================
// sub_549910
// entry 00549910  size 142  status ok
//======================================================================

int __thiscall sub_549910(_DWORD *this)
{
  int *v1; // eax
  int v2; // edx
  int *v3; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // edx
  _BYTE v9[8]; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v10[8]; // [esp+14h] [ebp-28h] BYREF
  _BYTE v11[8]; // [esp+1Ch] [ebp-20h] BYREF
  int v12; // [esp+24h] [ebp-18h]
  int v13; // [esp+28h] [ebp-14h]
  int v14; // [esp+2Ch] [ebp-10h]
  int v15; // [esp+30h] [ebp-Ch]
  int v16; // [esp+34h] [ebp-8h]
  int v17; // [esp+38h] [ebp-4h]

  v1 = (int *)sub_5D0C30(v11, *(this + 2));
  v2 = v1[1];
  v12 = *v1;
  v13 = v2;
  v3 = (int *)sub_5D14B0(v10);
  v4 = v3[1];
  v16 = *v3;
  v17 = v4;
  v5 = (int *)sub_5D0C30(v9, *(this + 1));
  v6 = v5[1];
  v14 = *v5;
  v14 += v16;
  v15 = v17 + v6;
  return sub_64C7A0(v12, v13);
}


//======================================================================
// sub_5499A0
// entry 005499a0  size 161  status ok
//======================================================================

int __thiscall sub_5499A0(int *this)
{
  __int16 v3; // [esp+4h] [ebp-4h]

  sub_5497E0(this);
  sub_545340(dword_793408);
  sub_5452A0(dword_793408);
  *(this + *(this + 8) + 20) *= 2;
  v3 = sub_6436C0(*(this + 4));
  sub_548FE0((int)this, *(this + 8), v3, 1, 1);
  sub_5450A0((_DWORD **)dword_793408);
  if ( (unsigned __int8)sub_54A740(*(this + 8)) )
    return sub_5493D0((int)this);
  else
    return sub_548C10((int)this);
}


//======================================================================
// sub_549A50
// entry 00549a50  size 117  status ok
//======================================================================

bool __thiscall sub_549A50(int this)
{
  int v2; // esi

  if ( *(_DWORD *)(dword_7947E0 + 20244) == 1 )
    return 0;
  if ( *(_BYTE *)(this + 36) )
    return 0;
  if ( sub_548F80((_WORD *)this, 1) != 2 )
    return 0;
  v2 = sub_549E20(*(_WORD *)(this + 52));
  return v2 == sub_549E20(*(_WORD *)(this + 54));
}


//======================================================================
// sub_549AD0
// entry 00549ad0  size 51  status ok
//======================================================================

bool __thiscall sub_549AD0(_DWORD *this)
{
  return sub_549A50((int)this) && (unsigned __int8)sub_549910(this) != 0;
}


