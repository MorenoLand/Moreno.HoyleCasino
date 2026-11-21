//======================================================================
// sub_4266C0
// entry 004266c0  size 331  status ok
//======================================================================

int __thiscall sub_4266C0(int *this, int a2)
{
  int result; // eax
  int v3; // eax
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 2 * a2;
  result = sub_5DCB00(a2);
  if ( result )
  {
    result = (unsigned __int8)sub_426670(this, a2);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_790354 + 656))(dword_790354, a2);
      for ( i = 0; i < 2; ++i )
      {
        if ( *(this + 2 * i + 2 * v6 + 10) > 0 )
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(*(_DWORD *)*(this + i + v6 + 2) + 196))(
            *(this + i + v6 + 2),
            this + 2 * i + 2 * v6 + 10,
            0,
            1);
      }
      if ( *((_BYTE *)this + a2 + 104) )
      {
        v3 = sub_5DCB00(a2);
        if ( sub_5D5A50(v3) > 1 )
        {
          sub_426620(this, a2);
          sub_41F9C0((_DWORD **)dword_790360, a2);
        }
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_41F1B0((_DWORD **)dword_790360);
      sub_5DB890(dword_790354);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
               *(_DWORD *)(dword_790354 + 4),
               1,
               0);
    }
  }
  return result;
}


//======================================================================
// sub_426810
// entry 00426810  size 251  status ok
//======================================================================

void __thiscall sub_426810(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-24h]
  int v4; // [esp+1Ch] [ebp-10h]
  int j; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 2; ++j )
    {
      v4 = j + 2 * i;
      if ( (unsigned __int8)sub_5CB7D0(i, 0) )
      {
        v3 = *(this + v4 + 2);
        v1 = *(_DWORD *)(v3 + 32 * i + 76);
        *(this + 2 * v4 + 10) = *(_DWORD *)(v3 + 32 * i + 72);
        *(this + 2 * v4 + 11) = v1;
      }
      else
      {
        *((_QWORD *)this + v4 + 5) = sub_64C8A0(0, 0);
      }
    }
    *((_BYTE *)this + i + 104) = *((_BYTE *)this + i + 212);
  }
}


//======================================================================
// sub_426910
// entry 00426910  size 73  status ok
//======================================================================

int __thiscall sub_426910(_BYTE *this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-14h]

  *(this + a2 + 212) = 0;
  v3 = sub_64C8A0(1, 0);
  sub_5DCB00(a2);
  return sub_5D5CF0(v3, HIDWORD(v3));
}


//======================================================================
// sub_426960
// entry 00426960  size 61  status ok
//======================================================================

char __thiscall sub_426960(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_426370(this, i) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_4269A0
// entry 004269a0  size 159  status ok
//======================================================================

int __thiscall sub_4269A0(_WORD *this)
{
  int v3; // [esp+Ch] [ebp-1Ch]
  _DWORD v4[4]; // [esp+14h] [ebp-14h]
  int i; // [esp+24h] [ebp-4h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  v3 = sub_426370(this, 4);
  for ( i = 0; i < 4; ++i )
  {
    if ( v3 == sub_426370(this, v4[i]) && *(_BYTE *)(sub_5DCB00(v4[i]) + 1184) )
      return v4[i];
  }
  return 4;
}


//======================================================================
// sub_426A40
// entry 00426a40  size 130  status ok
//======================================================================

int __thiscall sub_426A40(_BYTE *this)
{
  _DWORD v3[4]; // [esp+8h] [ebp-14h]
  int i; // [esp+18h] [ebp-4h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( sub_426500(v3[i]) && !*(this + v3[i] + 165) )
      return v3[i];
  }
  return -1;
}


//======================================================================
// sub_426AD0
// entry 00426ad0  size 357  status ok
//======================================================================

int __thiscall sub_426AD0(_DWORD *this, int a2, char a3)
{
  int result; // eax
  __int64 v4; // [esp+0h] [ebp-50h]
  __int64 v6; // [esp+3Ch] [ebp-14h] BYREF
  int v7; // [esp+44h] [ebp-Ch]
  int v8; // [esp+48h] [ebp-8h]
  int v9; // [esp+4Ch] [ebp-4h]

  v8 = 2 * a2;
  if ( a3 )
  {
    *(this + a2 + 44) = 4;
    v4 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    sub_5D6050(v4, HIDWORD(v4));
    sub_427AF0(a2, 0);
    *(_BYTE *)(sub_5DCB00(a2) + 1186) = 1;
  }
  else
  {
    v9 = *(_DWORD *)(*(this + v8 + 2) + 32 * a2 + 72);
    v7 = *(_DWORD *)(*(this + v8 + 2) + 32 * a2 + 76);
    v6 = sub_64C8A0(v9, v7);
    sub_64C560(2.0);
    (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, _DWORD))(*(_DWORD *)*(this + v8 + 3) + 196))(
      *(this + v8 + 3),
      &v6,
      0,
      0);
  }
  result = dword_790358;
  *(_BYTE *)(a2 + dword_790358 + 169) = 0;
  return result;
}


//======================================================================
// sub_426C40
// entry 00426c40  size 52  status ok
//======================================================================

int __thiscall sub_426C40(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 165) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_426C80
// entry 00426c80  size 189  status ok
//======================================================================

char __thiscall sub_426C80(_BYTE *this, int a2, char a3)
{
  bool v4; // [esp+4h] [ebp-14h]
  CImageDisplay *v6; // [esp+Ch] [ebp-Ch]

  if ( !(unsigned __int8)sub_5DF7B0(-1) || *(this + 164) )
    return 0;
  v6 = (CImageDisplay *)sub_5DCB00(a2);
  v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
  if ( !v4 || a3 == sub_41E290(a2) )
    return 0;
  *(this + 164) = 1;
  sub_57C140(dword_793578);
  return 1;
}


//======================================================================
// sub_426D40
// entry 00426d40  size 81  status ok
//======================================================================

char __thiscall sub_426D40(_BYTE *this, int a2, char a3)
{
  if ( sub_426C80(this, a2, a3) )
    return 0;
  *(this + 164) = 0;
  sub_426AD0(this, a2, a3);
  *(this + a2 + 165) = 1;
  return 1;
}


//======================================================================
// sub_426DA0
// entry 00426da0  size 212  status ok
//======================================================================

int sub_426DA0()
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
// sub_426E80
// entry 00426e80  size 76  status ok
//======================================================================

bool __thiscall sub_426E80(char *this)
{
  return sub_462BA0(this + 148, 5, 0) != 1 || (int)sub_4630C0(this + 148, 1, 5) >= 13;
}


//======================================================================
// sub_426ED0
// entry 00426ed0  size 793  status ok
//======================================================================

int __thiscall sub_426ED0(char *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  __int64 v5; // [esp-8h] [ebp-6Ch]
  __int64 v6; // [esp-8h] [ebp-6Ch]
  bool v7; // [esp+4h] [ebp-60h]
  bool v9; // [esp+Ch] [ebp-58h]
  int v12; // [esp+1Ch] [ebp-48h]
  int v13; // [esp+24h] [ebp-40h]
  int v14; // [esp+2Ch] [ebp-38h]
  int v15; // [esp+34h] [ebp-30h]
  int v16; // [esp+3Ch] [ebp-28h]
  int v17; // [esp+50h] [ebp-14h]
  int v18; // [esp+58h] [ebp-Ch]
  int v19; // [esp+5Ch] [ebp-8h]
  int v20; // [esp+5Ch] [ebp-8h]
  int v21; // [esp+5Ch] [ebp-8h]
  int v22; // [esp+5Ch] [ebp-8h]
  bool v23; // [esp+63h] [ebp-1h]

  v16 = sub_5DCB00(a2);
  v18 = *(char *)(sub_5D52E0(v16) + 42);
  v5 = sub_64C8A0(0, 0);
  sub_5DCB00(a2);
  sub_5D6050(v5, HIDWORD(v5));
  if ( sub_426E80(this) )
  {
    v17 = sub_462DA0(this + 10 * a2 + 108, this + 148, 5);
    sub_427AF0(a2, v17);
    v15 = sub_5DCB00(a2);
    v19 = *(char *)(sub_5D52E0(v15) + 42);
    if ( v18 == v19 || v19 )
      sub_427AF0(a2, v17);
    v14 = sub_5DCB00(a2);
    v20 = *(char *)(sub_5D52E0(v14) + 42);
    v9 = v18 != v20 && !v20;
    v23 = v9;
    *((_DWORD *)this + a2 + 44) = v17;
    *((_DWORD *)this + a2 + 48) = v17;
  }
  else
  {
    sub_427AF0(a2, 1);
    v13 = sub_5DCB00(a2);
    v21 = *(char *)(sub_5D52E0(v13) + 42);
    if ( v18 == v21 || v21 )
      sub_427AF0(a2, 2);
    v12 = sub_5DCB00(a2);
    v22 = *(char *)(sub_5D52E0(v12) + 42);
    v7 = v18 != v22 && !v22;
    v23 = v7;
    *((_DWORD *)this + a2 + 44) = 1;
    *((_DWORD *)this + a2 + 48) = 3;
  }
  if ( !(unsigned __int8)sub_4272E0(a2) )
  {
    v2 = sub_426370(this, a2);
    *(this + a2 + 216) = sub_462BA0(this + 10 * a2 + 108, v2, 0) >= 6;
  }
  result = v23;
  if ( v23 )
  {
    v4 = sub_5DCB00(a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, -1);
    v6 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    return sub_5D6050(v6, HIDWORD(v6));
  }
  return result;
}


//======================================================================
// sub_4271F0
// entry 004271f0  size 235  status ok
//======================================================================

int sub_4271F0()
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
      && *(_BYTE *)(sub_5DCB00(v2[i]) + 1186)
      && (unsigned __int8)sub_4272E0(v2[i]) )
    {
      return v2[i];
    }
  }
  return -1;
}


//======================================================================
// sub_4272E0
// entry 004272e0  size 25  status ok
//======================================================================

char __thiscall sub_4272E0(_BYTE *this, int a2)
{
  return *(this + a2 + 212);
}


//======================================================================
// sub_427300
// entry 00427300  size 566  status ok
//======================================================================

char __thiscall sub_427300(_WORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v7; // [esp+4h] [ebp-44h]
  __int64 v8; // [esp+4h] [ebp-44h]
  __int64 v9; // [esp+4h] [ebp-44h]
  _DWORD v11[3]; // [esp+30h] [ebp-18h]
  int v12; // [esp+3Ch] [ebp-Ch]
  int v13; // [esp+40h] [ebp-8h]
  int v14; // [esp+44h] [ebp-4h]

  v2 = sub_426370(this, a2);
  v14 = sub_462BA0(this + 5 * a2 + 54, v2, 0);
  v13 = 0;
  v12 = 0;
  v3 = sub_5DCB00(a2);
  v4 = sub_5D5A50(v3);
  if ( v4 >= 1000000000 )
    return v4;
  if ( sub_4272E0(this, a2) && *((_DWORD *)this + a2 + 44) != 4 )
  {
    if ( v14 >= 6 )
    {
      if ( v14 == 6 )
        v12 = 50;
      if ( v14 == 7 )
        v12 = 100;
      if ( v14 == 8 )
        v12 = 500;
      if ( v14 == 9 )
        v12 = 20000;
      if ( v14 == 10 )
        v12 = 200000;
      if ( v12 )
        *((_BYTE *)this + a2 + 220) = 1;
    }
    if ( v12 )
    {
      v7 = sub_64C8A0(v12, 0);
      sub_5DCB00(a2);
      sub_5D5FB0(v7, HIDWORD(v7));
      v8 = sub_64C8A0(v12, 0);
      sub_5DCB00(a2);
      LOBYTE(v4) = sub_5D5CF0(v8, HIDWORD(v8));
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  LOBYTE(v4) = sub_4272E0(this, a2);
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = (_BYTE)this;
    if ( *((_DWORD *)this + a2 + 44) == 4 )
    {
LABEL_22:
      v9 = sub_64C8A0(-1, 0);
      sub_5DCB00(a2);
      LOBYTE(v4) = sub_5D5FB0(v9, HIDWORD(v9));
    }
  }
LABEL_23:
  *((_BYTE *)this + a2 + 212) = 0;
  if ( v12 )
  {
    v11[0] = 3213002;
    v11[1] = 3213003;
    v11[2] = 3213004;
    v5 = sub_62FC30(0, 2);
    LOBYTE(v4) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   v11[v5],
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
  }
  return v4;
}


//======================================================================
// sub_427540
// entry 00427540  size 28  status ok
//======================================================================

int __stdcall sub_427540(int a1)
{
  int result; // eax

  result = dword_7947E0;
  *(_DWORD *)(dword_7947E0 + 20196) = 200000;
  return result;
}


//======================================================================
// sub_427560
// entry 00427560  size 22  status ok
//======================================================================

int sub_427560()
{
  return *(_DWORD *)(dword_7947E0 + 20196);
}


//======================================================================
// sub_4275A0
// entry 004275a0  size 90  status ok
//======================================================================

bool __thiscall sub_4275A0(_WORD *this, int a2)
{
  int v2; // eax
  int v5; // [esp+4h] [ebp-4h]

  v2 = sub_426370(this, a2);
  v5 = sub_462BA0(this + 5 * a2 + 54, v2, 0);
  return *((_BYTE *)this + a2 + 216) && v5 >= 6 && v5 <= 9;
}


//======================================================================
// sub_427600
// entry 00427600  size 97  status ok
//======================================================================

bool __thiscall sub_427600(_WORD *this, int a2)
{
  int v2; // eax
  int v6; // [esp+8h] [ebp-4h]

  v2 = sub_426370(this, a2);
  v6 = sub_462BA0(this + 5 * a2 + 54, v2, 0);
  return *((_BYTE *)this + a2 + 216) && v6 == 10;
}


//======================================================================
// sub_427670
// entry 00427670  size 116  status ok
//======================================================================

bool __thiscall sub_427670(_WORD *this, int a2)
{
  int v2; // eax
  int v6; // [esp+8h] [ebp-4h]

  v2 = sub_426370(this, a2);
  v6 = sub_462BA0(this + 5 * a2 + 54, v2, 0);
  return *((_BYTE *)this + a2 + 220) || sub_4272E0(this, a2) && v6 == 10;
}


//======================================================================
// sub_4276F0
// entry 004276f0  size 402  status ok
//======================================================================

int __thiscall sub_4276F0(_WORD *this, int a2)
{
  int v2; // eax
  const char *v3; // eax
  char *v4; // eax
  char Source; // [esp+0h] [ebp-9E0h]
  char *Sourcea; // [esp+0h] [ebp-9E0h]
  char v9[128]; // [esp+8h] [ebp-9D8h] BYREF
  char v10[1031]; // [esp+88h] [ebp-958h] BYREF
  char v11; // [esp+48Fh] [ebp-551h]
  char Buffer[64]; // [esp+490h] [ebp-550h] BYREF
  char v13[1028]; // [esp+4D0h] [ebp-510h] BYREF
  int v14; // [esp+8D4h] [ebp-10Ch]
  char Destination[260]; // [esp+8D8h] [ebp-108h] BYREF

  v11 = sub_41E290(a2);
  v2 = sub_426370(this, a2);
  v14 = sub_462BA0(this + 5 * a2 + 54, v2, 0);
  if ( v14 == -1 )
    sub_5E9F20((char)"handType != -1", "..\\Casino\\caribbeanstudstate.cpp", 656);
  sprintf(Buffer, "Caribbean Stud Tutorial: handType %hd\n", v14);
  sub_62FDE0(Buffer, Source);
  sub_462F40(v14, v9);
  if ( v11 )
    Sourcea = (char *)sub_630F40("SID_GENERIC_FOLD");
  else
    Sourcea = (char *)sub_630F40("SID_GENERIC_CALL");
  strcpy(Destination, Sourcea);
  sub_41E4D0(a2, v14, v11, v13);
  v3 = (const char *)sub_630F40("SID_CARIBBEANSTUD_CURRENTHAND_FORMAT");
  sprintf(v10, v3, v9, Destination, v13);
  v4 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80(1, v4, v10);
}


//======================================================================
// sub_4278D0
// entry 004278d0  size 539  status ok
//======================================================================

int __thiscall sub_4278D0(void *this, _DWORD *a2, int a3, char a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  const CHAR *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  const CHAR *v21; // eax
  const CHAR *v22; // [esp-8h] [ebp-54h]
  const CHAR *v23; // [esp-8h] [ebp-54h]
  _BYTE v25[8]; // [esp+4h] [ebp-48h] BYREF
  int v26; // [esp+Ch] [ebp-40h]
  int v27; // [esp+10h] [ebp-3Ch]
  _BYTE v28[8]; // [esp+14h] [ebp-38h] BYREF
  int v29; // [esp+1Ch] [ebp-30h]
  int v30; // [esp+20h] [ebp-2Ch]
  __int64 v31; // [esp+24h] [ebp-28h]
  __int64 v32; // [esp+2Ch] [ebp-20h]
  __int64 v33; // [esp+34h] [ebp-18h] BYREF
  __int64 v34; // [esp+3Ch] [ebp-10h]
  int v35; // [esp+44h] [ebp-8h]
  int v36; // [esp+48h] [ebp-4h]

  v32 = sub_64C8A0(0, 0);
  v33 = v32;
  v36 = *(_DWORD *)(dword_790358 + 160);
  result = sub_5DCB00(v36);
  if ( result )
  {
    v35 = 2 * v36;
    v31 = sub_64C8A0(0, 0);
    v34 = v31;
    if ( *a2 )
    {
      v5 = a2[1];
      LODWORD(v33) = *a2;
      HIDWORD(v33) = v5;
    }
    else
    {
      sub_5DCB00(v36);
      sub_5D5DE0(&v33);
    }
    if ( !(_DWORD)v33 )
      LODWORD(v33) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 688))(dword_790354);
    if ( (int)v33 > 0 )
    {
      v6 = sub_426560((_DWORD *)dword_790358, (int)this);
      if ( v6 == v35 )
      {
        v7 = (int)this + 32 * v36 + 72;
        v8 = *(_DWORD *)(v7 + 8 * a3);
        v9 = *(_DWORD *)(v7 + 8 * a3 + 4);
        v29 = v8;
        v30 = v9;
        v10 = (_DWORD *)sub_64C5C0(v28, v33, HIDWORD(v33));
        v11 = v10[1];
        LODWORD(v34) = *v10;
        HIDWORD(v34) = v11;
        v12 = sub_5DCB00(v36);
        v13 = sub_5D5A50(v12);
        if ( v13 - (int)v33 < 2 * (int)v34 )
        {
          v22 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
          v14 = (const CHAR *)sub_630F40("SID_CARIBBEANSTUD_NOTENOUGHMONEY2");
          return sub_62FF10(v14, v22, 0);
        }
      }
      else
      {
        v15 = sub_426560((_DWORD *)dword_790358, (int)this);
        if ( v15 == v35 + 1 )
        {
          v16 = (int)this + 32 * v36 + 72;
          v17 = *(_DWORD *)(v16 + 8 * a3);
          v18 = *(_DWORD *)(v16 + 8 * a3 + 4);
          v26 = v17;
          v27 = v18;
          v34 = *(_QWORD *)sub_64C5C0(v25, v33, HIDWORD(v33));
          v19 = sub_5DCB00(v36);
          v20 = sub_5D5A50(v19);
          if ( v20 < (int)v33 )
          {
            v23 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
            v21 = (const CHAR *)sub_630F40("SID_CARIBBEANSTUD_NOTENOUGHMONEY2");
            return sub_62FF10(v21, v23, 0);
          }
        }
      }
    }
    return sub_5CBA10(a2, a3, a4);
  }
  return result;
}


//======================================================================
// sub_427AF0
// entry 00427af0  size 844  status ok
//======================================================================

int __thiscall sub_427AF0(pairNode *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  __int64 v9; // [esp+0h] [ebp-8Ch]
  __int64 v10; // [esp+0h] [ebp-8Ch]
  _DWORD *v11; // [esp+8h] [ebp-84h]
  int v12; // [esp+Ch] [ebp-80h]
  _BYTE v14[8]; // [esp+1Ch] [ebp-70h] BYREF
  __int64 v15; // [esp+24h] [ebp-68h]
  __int64 v16; // [esp+2Ch] [ebp-60h]
  __int64 v17; // [esp+34h] [ebp-58h]
  double v18; // [esp+3Ch] [ebp-50h]
  _DWORD v19[11]; // [esp+48h] [ebp-44h]
  __int64 v20; // [esp+74h] [ebp-18h]
  __int64 v21; // [esp+7Ch] [ebp-10h]
  __int64 v22; // [esp+84h] [ebp-8h]

  v19[0] = 0;
  v19[1] = 1;
  v19[2] = 1;
  v19[3] = 2;
  v19[4] = 3;
  v19[5] = 4;
  v19[6] = 5;
  v19[7] = 7;
  v19[8] = 20;
  v19[9] = 50;
  v19[10] = 100;
  v3 = *((_DWORD *)this + 8 * a2 + 19);
  LODWORD(v22) = *((_DWORD *)this + 8 * a2 + 18);
  HIDWORD(v22) = v3;
  v17 = sub_64C8A0(0, 0);
  v20 = v17;
  v16 = sub_64C8A0(0, 0);
  v21 = v16;
  v4 = sub_5DCB00(a2);
  result = sub_5D5A50(v4);
  if ( result < 1000000000 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
        {
          if ( *(int *)(sub_5DCB00(a2) + 1192) < -3 )
            *(_BYTE *)(a2 + dword_790358 + 208) = 1;
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        }
        v6 = sub_5DCB00(a2);
        sub_5D7540(v6);
      }
      if ( a3 == 1 )
      {
        if ( pairNode::raw_length(this) % 2 == 1 )
        {
          v18 = (double)(int)v19[sub_462BA0(dword_790358 + 10 * a2 + 108, 5, 0)];
          v20 = v22;
          sub_64C560(v18);
        }
        else
        {
          v20 = v22;
        }
      }
      if ( (int)v20 > 1000000000 )
        v20 = 1000000000;
      v7 = (_DWORD *)sub_64C5C0(v14, *((_DWORD *)this + 8 * a2 + 18), *((_DWORD *)this + 8 * a2 + 19));
      v8 = v7[1];
      LODWORD(v21) = *v7;
      HIDWORD(v21) = v8;
      if ( (int)v21 >= 1000000000 )
        v21 = sub_64C8A0(1000000000, 0);
      v9 = v21;
      sub_5DCB00(a2);
      sub_5D5CF0(v9, HIDWORD(v9));
      v10 = v20;
      sub_5DCB00(a2);
      sub_5D5FB0(v10, HIDWORD(v10));
      return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
               this,
               v21,
               HIDWORD(v21),
               a2,
               0);
    }
    else
    {
      v12 = *(_DWORD *)(dword_790360 + 4 * pairNode::raw_length(this) + 24);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 196))(v12);
      if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      v11 = (_DWORD *)(sub_5DCB00(a2) + 1192);
      --*v11;
      LODWORD(v20) = -(int)v22;
      HIDWORD(v20) = -HIDWORD(v22);
      sub_5DCB00(a2);
      sub_5D5FB0(-(int)v22, -HIDWORD(v22));
      v15 = sub_64C8A0(0, 0);
      return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
               this,
               v15,
               HIDWORD(v15),
               a2,
               0);
    }
  }
  return result;
}


//======================================================================
// sub_427E40
// entry 00427e40  size 46  status ok
//======================================================================

void __thiscall sub_427E40(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_790360 )
  {
    v3 = pairNode::raw_length(this);
    sub_41F6B0((_DWORD **)dword_790360, a2, v3);
  }
}


//======================================================================
// sub_427E70
// entry 00427e70  size 231  status ok
//======================================================================

bool __thiscall sub_427E70(pairNode *this)
{
  char v2; // [esp+0h] [ebp-28h]
  bool v3; // [esp+4h] [ebp-24h]
  CImageDisplay *v5; // [esp+14h] [ebp-14h]
  int v6; // [esp+20h] [ebp-8h]

  if ( *(_DWORD *)(dword_790358 + 160) == -1 )
    return 0;
  v6 = *(_DWORD *)(dword_790358 + 160);
  v2 = 0;
  if ( pairNode::raw_length(this) / 2 == v6 && pairNode::raw_length(this) % 2 != 1 )
  {
    v5 = (CImageDisplay *)sub_426230((_DWORD *)dword_790358);
    v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
    if ( v3 && !*(_BYTE *)(sub_426230((_DWORD *)dword_790358) + 1184) )
      return 1;
  }
  return v2;
}


//======================================================================
// sub_428000
// entry 00428000  size 1067  status ok
//======================================================================

int __thiscall sub_428000(void *this, int a2)
{
  int result; // eax
  int v3; // eax

  if ( *(_DWORD *)(dword_7906D4 + 2756) )
  {
    unknown_libname_747(a2);
    switch ( *(_DWORD *)(sub_5DCB00(a2) + 8) )
    {
      case 0x13:
        sub_428470(a2, 1, 1);
        sub_428470(a2, 4, 1);
        result = sub_4288C0(a2);
        break;
      case 0x14:
        sub_428470(a2, 1, 1);
        sub_4288C0(a2);
        if ( !sub_62FBF0(4) )
          sub_428470(a2, 4, 1);
        result = sub_62FBF0(4);
        if ( !result )
          result = sub_428470(a2, 61, 1);
        break;
      case 0x15:
        sub_428470(a2, 3, 1);
        sub_428A50(a2);
        result = sub_62FBF0(2);
        if ( !result )
          result = sub_428470(a2, 5, 1);
        break;
      case 0x16:
        sub_428470(a2, 3, 1);
        sub_428470(a2, 5, 1);
        result = sub_428A50(a2);
        break;
      case 0x17:
        sub_428470(a2, 1, 1);
        sub_4288C0(a2);
        if ( !sub_62FBF0(4) )
          sub_428470(a2, 4, 1);
        sub_428470(a2, 45, 1);
        result = sub_428470(a2, 46, 1);
        break;
      case 0x18:
        sub_428470(a2, 1, 1);
        sub_4288C0(a2);
        if ( sub_62FBF0(2) )
          sub_428470(a2, 4, 1);
        sub_428470(a2, 49, 1);
        result = sub_428470(a2, 54, 1);
        break;
      case 0x19:
        sub_428470(a2, 1, 1);
        sub_4288C0(a2);
        if ( sub_62FBF0(2) )
          sub_428470(a2, 4, 1);
        result = sub_62FBF0(100);
        if ( result < 10 )
          result = sub_428470(a2, 17, 1);
        break;
      case 0x1A:
        sub_428470(a2, 1, 1);
        sub_4288C0(a2);
        if ( (int)sub_62FBF0(4) < 2 )
          sub_428470(a2, 4, 1);
        result = *(_DWORD *)(dword_7906D4 + 2756) - 4;
        switch ( *(_DWORD *)(dword_7906D4 + 2756) )
        {
          case 4:
          case 6:
          case 8:
          case 0xA:
            result = sub_428470(a2, *(_DWORD *)(dword_7906D4 + 2756) + 8, 1);
            break;
          default:
            return result;
        }
        break;
      case 0x1B:
        sub_428470(a2, 1, 1);
        if ( !sub_62FBF0(2) )
          sub_428470(a2, 61, 1);
        result = sub_62FBF0(100);
        if ( result < 10 )
          result = sub_428470(a2, 18, 1);
        break;
      case 0x1C:
        sub_428470(a2, 1, 1);
        sub_4288C0(a2);
        result = sub_62FBF0(2);
        if ( result )
          result = sub_428470(a2, 4, 1);
        break;
      default:
        v3 = sub_428880(this);
        result = sub_428470(a2, v3, 1);
        break;
    }
  }
  else if ( *(_DWORD *)(sub_5DCB00(a2) + 8) == 22 || *(_DWORD *)(sub_5DCB00(a2) + 8) == 21 )
  {
    return sub_428470(a2, 2, 1);
  }
  else
  {
    return sub_428470(a2, 0, 1);
  }
  return result;
}


//======================================================================
// sub_428470
// entry 00428470  size 548  status ok
//======================================================================

int __stdcall sub_428470(__int64 a1, char a2)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx
  unsigned __int8 DisplayFormat; // al
  CImageDisplay *v6; // [esp+10h] [ebp-40h]
  int v7; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+28h] [ebp-28h]
  int v9; // [esp+2Ch] [ebp-24h]
  __int64 v10; // [esp+30h] [ebp-20h] BYREF
  int v11; // [esp+38h] [ebp-18h]
  int v12; // [esp+3Ch] [ebp-14h]
  int v13; // [esp+40h] [ebp-10h]
  int v14; // [esp+44h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-4h]

  v9 = (unsigned __int64)sub_64C8A0(0, 0) >> 32;
  v10 = sub_64C8A0(0, 0);
  v2 = sub_5DCB00(a1);
  v13 = sub_5D5A50(v2);
  result = sub_4369A0(a1, HIDWORD(a1));
  if ( !(_BYTE)result )
  {
    v15 = sub_434880(HIDWORD(a1));
    LODWORD(v10) = sub_4286A0(a1);
    if ( (unsigned __int8)sub_4388A0(HIDWORD(a1)) || (unsigned __int8)sub_4388D0(HIDWORD(a1)) )
    {
      result = (int)ceil((double)(int)v10 / 20.0);
      v8 = result;
      if ( result + (int)v10 > v13 )
        return result;
      sub_5DCB00(a1);
      sub_5D5CF0(-v8, v9);
    }
    if ( (unsigned __int8)sub_435CA0(HIDWORD(a1)) || (unsigned __int8)sub_435CF0(HIDWORD(a1)) )
    {
      v7 = *(_DWORD *)(dword_7906D4 + 4 * v15 + 4);
      v4 = *(_DWORD *)(v7 + 32 * a1 + 76);
      v11 = *(_DWORD *)(v7 + 32 * a1 + 72);
      v12 = v4;
      v14 = sub_436570(a1, v15);
      if ( a2 && v14 < v13 )
        LODWORD(v10) = v14;
      if ( (int)v10 + v11 > v14 )
        LODWORD(v10) = v14 - v11;
    }
    v6 = (CImageDisplay *)sub_5DCB00(a1);
    DisplayFormat = (unsigned __int8)CImageDisplay::GetDisplayFormat(v6);
    sub_62FDE0("%s: bets $%d.00 on %d\n", DisplayFormat + 4);
    sub_5DCB00(a1);
    sub_5D5E10(v10, HIDWORD(v10));
    return sub_5CBA10(&v10, 0, 1);
  }
  return result;
}


//======================================================================
// sub_4286A0
// entry 004286a0  size 467  status ok
//======================================================================

int __stdcall sub_4286A0(int a1)
{
  int v1; // eax
  int v3; // esi
  int v4; // eax
  int v7; // [esp+Ch] [ebp-30h]
  int v8; // [esp+10h] [ebp-2Ch]
  int v9; // [esp+14h] [ebp-28h]
  int v10; // [esp+18h] [ebp-24h]
  int v11; // [esp+1Ch] [ebp-20h]
  int v12; // [esp+28h] [ebp-14h]
  int v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+30h] [ebp-Ch]
  int v15; // [esp+34h] [ebp-8h]
  int v16; // [esp+38h] [ebp-4h]

  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0);
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 692))(dword_7906D0);
  sub_5DCB00(a1);
  v1 = sub_5DCB00(a1);
  v14 = sub_5D5A50(v1);
  v11 = sub_5DCB00(a1);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 24))(v11);
  if ( v14 >= v15 )
    v10 = v15;
  else
    v10 = v14;
  if ( v13 > v14 )
    return 0;
  v3 = v16 * (v13 + v13 * sub_62FBF0(3));
  v4 = sub_62FBF0(5);
  v12 = v3 / (v4 + 1);
  if ( (unsigned __int8)sub_436A50(dword_7906D4, v3 % (v4 + 1)) )
    v12 *= sub_62FBF0(8) + 1;
  if ( (unsigned __int8)sub_43B4E0(dword_7906D4) && (unsigned __int8)sub_43B530(a1) )
  {
    v9 = sub_5DCB00(a1);
    if ( v10 >= (int)(((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v9 + 28))(v9) * (double)v12) )
    {
      v7 = sub_5DCB00(a1);
      v8 = (int)(((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v7 + 28))(v7) * (double)v12);
    }
    else
    {
      v8 = v10;
    }
    v12 = v8;
  }
  if ( v12 < v13 )
    return v13;
  if ( v12 >= v10 )
    return v10;
  else
    return v12;
}


//======================================================================
// sub_428880
// entry 00428880  size 52  status ok
//======================================================================

int sub_428880()
{
  if ( *(_DWORD *)(dword_7906D4 + 2756) )
    return 4;
  else
    return 0;
}


//======================================================================
// sub_4288C0
// entry 004288c0  size 397  status ok
//======================================================================

int __stdcall sub_4288C0(unsigned int a1)
{
  int result; // eax

  if ( (unsigned __int8)sub_4369A0(a1, 19) && !(unsigned __int8)sub_4369A0(a1, 25) )
    sub_428470(a1 | 0x1900000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 20) && !(unsigned __int8)sub_4369A0(a1, 26) )
    sub_428470(a1 | 0x1A00000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 21) && !(unsigned __int8)sub_4369A0(a1, 27) )
    sub_428470(a1 | 0x1B00000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 22) && !(unsigned __int8)sub_4369A0(a1, 28) )
    sub_428470(a1 | 0x1C00000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 23) && !(unsigned __int8)sub_4369A0(a1, 29) )
    sub_428470(a1 | 0x1D00000000LL, 1);
  result = sub_4369A0(a1, 24);
  if ( (_BYTE)result )
  {
    result = sub_4369A0(a1, 30);
    if ( !(_BYTE)result )
      return sub_428470(a1 | 0x1E00000000LL, 1);
  }
  return result;
}


//======================================================================
// sub_428A50
// entry 00428a50  size 397  status ok
//======================================================================

int __stdcall sub_428A50(unsigned int a1)
{
  int result; // eax

  if ( (unsigned __int8)sub_4369A0(a1, 31) && !(unsigned __int8)sub_4369A0(a1, 37) )
    sub_428470(a1 | 0x2500000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 32) && !(unsigned __int8)sub_4369A0(a1, 38) )
    sub_428470(a1 | 0x2600000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 33) && !(unsigned __int8)sub_4369A0(a1, 39) )
    sub_428470(a1 | 0x2700000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 34) && !(unsigned __int8)sub_4369A0(a1, 40) )
    sub_428470(a1 | 0x2800000000LL, 1);
  if ( (unsigned __int8)sub_4369A0(a1, 35) && !(unsigned __int8)sub_4369A0(a1, 41) )
    sub_428470(a1 | 0x2900000000LL, 1);
  result = sub_4369A0(a1, 36);
  if ( (_BYTE)result )
  {
    result = sub_4369A0(a1, 42);
    if ( !(_BYTE)result )
      return sub_428470(a1 | 0x2A00000000LL, 1);
  }
  return result;
}


//======================================================================
// sub_428C20
// entry 00428c20  size 251  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_428C20(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CrapsDisplay::`vftable';
  for ( i = 0; i < 4; ++i )
    *((_DWORD *)this + i + 1) = 0;
  for ( j = 0; j < 76; ++j )
    *((_DWORD *)this + j + 5) = 0;
  for ( k = 0; k < 2; ++k )
  {
    *((_DWORD *)this + k + 82) = 0;
    *((_DWORD *)this + k + 84) = 0;
  }
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  return this;
}


//======================================================================
// sub_428D20
// entry 00428d20  size 695  status ok
//======================================================================

void __thiscall sub_428D20(CNoTrackObject *this)
{
  int i; // [esp+80h] [ebp-10h]
  int j; // [esp+80h] [ebp-10h]
  int k; // [esp+80h] [ebp-10h]

  *(_DWORD *)this = &CrapsDisplay::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  for ( j = 0; j < 76; ++j )
  {
    if ( *((_DWORD *)this + j + 5) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 5))(*((_DWORD *)this + j + 5), 1);
  }
  for ( k = 0; k < 2; ++k )
  {
    if ( *((_DWORD *)this + k + 82) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 82))(*((_DWORD *)this + k + 82), 1);
    if ( *((_DWORD *)this + k + 84) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 84))(*((_DWORD *)this + k + 84), 1);
  }
  if ( *((_DWORD *)this + 81) )
    (***((void (__thiscall ****)(_DWORD, int))this + 81))(*((_DWORD *)this + 81), 1);
  if ( *((_DWORD *)this + 86) )
    (***((void (__thiscall ****)(_DWORD, int))this + 86))(*((_DWORD *)this + 86), 1);
  if ( *((_DWORD *)this + 87) )
    (***((void (__thiscall ****)(_DWORD, int))this + 87))(*((_DWORD *)this + 87), 1);
  if ( *((_DWORD *)this + 88) )
    (***((void (__thiscall ****)(_DWORD, int))this + 88))(*((_DWORD *)this + 88), 1);
  if ( *((_DWORD *)this + 89) )
    (***((void (__thiscall ****)(_DWORD, int))this + 89))(*((_DWORD *)this + 89), 1);
  if ( *((_DWORD *)this + 90) )
    (***((void (__thiscall ****)(_DWORD, int))this + 90))(*((_DWORD *)this + 90), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_428FE0
// entry 00428fe0  size 2230  status ok
//======================================================================

int __thiscall sub_428FE0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+0h] [ebp-BCh]
  int v11; // [esp+4h] [ebp-B8h]
  _DWORD *v12; // [esp+8h] [ebp-B4h]
  int v13; // [esp+Ch] [ebp-B0h]
  int v14; // [esp+10h] [ebp-ACh]
  int v15; // [esp+14h] [ebp-A8h]
  int v16; // [esp+18h] [ebp-A4h]
  int v17; // [esp+1Ch] [ebp-A0h]
  int v18; // [esp+20h] [ebp-9Ch]
  _DWORD *v19; // [esp+24h] [ebp-98h]
  int v20; // [esp+28h] [ebp-94h]
  int v21; // [esp+2Ch] [ebp-90h]
  int v22; // [esp+30h] [ebp-8Ch]
  _AFX_OLE_STATE *v23; // [esp+34h] [ebp-88h]
  _DWORD *v25; // [esp+3Ch] [ebp-80h]
  void *v26; // [esp+44h] [ebp-78h]
  void *v27; // [esp+4Ch] [ebp-70h]
  void *v28; // [esp+54h] [ebp-68h]
  void *v29; // [esp+5Ch] [ebp-60h]
  void *v30; // [esp+64h] [ebp-58h]
  void *v31; // [esp+6Ch] [ebp-50h]
  _DWORD *v32; // [esp+74h] [ebp-48h]
  void *v33; // [esp+7Ch] [ebp-40h]
  void *v34; // [esp+84h] [ebp-38h]
  void *v35; // [esp+8Ch] [ebp-30h]
  _AFX_OLE_STATE *v36; // [esp+94h] [ebp-28h]
  _DWORD v37[2]; // [esp+9Ch] [ebp-20h]
  _DWORD v38[2]; // [esp+A4h] [ebp-18h]
  int i; // [esp+ACh] [ebp-10h]
  int v40; // [esp+B8h] [ebp-4h]

  v37[0] = 4037;
  v37[1] = 4039;
  v38[0] = 4013;
  v38[1] = 4014;
  v1 = sub_630F40("SID_CRAPS");
  sub_5F38B0(v1);
  sub_5F1AD0(4005);
  for ( i = 0; i < 4; ++i )
  {
    v36 = (_AFX_OLE_STATE *)operator new(8u);
    v40 = 0;
    if ( v36 )
      v23 = _AFX_OLE_STATE::_AFX_OLE_STATE(v36);
    else
      v23 = 0;
    v40 = -1;
    *(this + i + 1) = v23;
    sub_42BE80(i);
    sub_5DCB00(i);
    sub_5D66B0(v10, v11);
  }
  for ( i = 0; i < 76; ++i )
  {
    v35 = operator new(0xB10u);
    v40 = 1;
    if ( v35 )
      v22 = sub_42BF50(v35);
    else
      v22 = 0;
    v40 = -1;
    *(this + i + 5) = v22;
    *(_DWORD *)(*(this + i + 5) + 2828) = i;
    sub_5EAE80(4011, 0, -17, 1, -1);
    v2 = sub_42A030(i);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 5) + 176))(*(this + i + 5), v2);
    sub_5EB700(1);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode((CPane *)*(this + i + 5), *(_DWORD *)(dword_7906D4 + 4 * i + 4));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 5) + 116))(*(this + i + 5));
    v34 = operator new(0x184u);
    v40 = 2;
    if ( v34 )
      v21 = sub_5F5BF0(v34);
    else
      v21 = 0;
    v40 = -1;
    *(_DWORD *)(*(this + i + 5) + 2788) = v21;
    sub_5EAE80(4026, 0, -17, 1, -1);
    v3 = sub_42A030(i);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + i + 5) + 2788) + 176))(
      *(_DWORD *)(*(this + i + 5) + 2788),
      v3);
    if ( i > 0 )
    {
      v4 = sub_42A030(i);
      if ( v4 == sub_42A030(i - 1) )
        sub_5EAF00(0);
    }
    if ( pairNode::raw_length(*(pairNode **)(*(this + i + 5) + 376)) == 1
      || pairNode::raw_length(*(pairNode **)(*(this + i + 5) + 376)) == 3 )
    {
      v33 = operator new(0x184u);
      v40 = 3;
      if ( v33 )
        v20 = sub_5F5BF0(v33);
      else
        v20 = 0;
      v40 = -1;
      *(_DWORD *)(*(this + i + 5) + 2792) = v20;
      sub_5EAE80(4045, 0, 0, 99, -1);
    }
  }
  v32 = operator new(0x178u);
  v40 = 4;
  if ( v32 )
  {
    sub_5EAAF0(v32);
    *v32 = &CrapsTable::`vftable';
    v19 = v32;
  }
  else
  {
    v19 = 0;
  }
  v40 = -1;
  *(this + 81) = v19;
  sub_5EAE80(4025, 0, -17, 1, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 81) + 116))(*(this + 81));
  for ( i = 0; i < 2; ++i )
  {
    v31 = operator new(0x184u);
    v40 = 5;
    if ( v31 )
      v18 = sub_5F5BF0(v31);
    else
      v18 = 0;
    v40 = -1;
    *(this + i + 82) = v18;
    sub_5EAE80(v37[i], 0, 0, 50, -1);
    *(_DWORD *)(*(this + i + 82) + 376) = 3;
    v30 = operator new(0x178u);
    v40 = 6;
    if ( v30 )
    {
      sub_5EAAF0(v30);
      v17 = v5;
    }
    else
    {
      v17 = 0;
    }
    v40 = -1;
    *(this + i + 84) = v17;
    sub_5EAE80(v38[i], 0, -410, 11, -1);
  }
  v29 = operator new(0x178u);
  v40 = 7;
  if ( v29 )
  {
    sub_5EAAF0(v29);
    v16 = v6;
  }
  else
  {
    v16 = 0;
  }
  v40 = -1;
  *(this + 86) = v16;
  sub_5EAE80(4012, 0, -410, 10, -1);
  v28 = operator new(0x178u);
  v40 = 8;
  if ( v28 )
  {
    sub_5EAAF0(v28);
    v15 = v7;
  }
  else
  {
    v15 = 0;
  }
  v40 = -1;
  *(this + 87) = v15;
  sub_5EAE80(4018, 47, 69, 10, -1);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 87) + 176))(*(this + 87), 1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 87) + 116))(*(this + 87));
  v27 = operator new(0x178u);
  v40 = 9;
  if ( v27 )
  {
    sub_5EAAF0(v27);
    v14 = v8;
  }
  else
  {
    v14 = 0;
  }
  v40 = -1;
  *(this + 88) = v14;
  sub_5EAE80(4043, 0, 0, 3, -1);
  v26 = operator new(0x190u);
  v40 = 10;
  if ( v26 )
    v13 = sub_42D300(v26);
  else
    v13 = 0;
  v40 = -1;
  *(this + 89) = v13;
  sub_5EAE80(4028, 0, 0, 101, -1);
  v25 = operator new(0x198u);
  v40 = 11;
  if ( v25 )
  {
    sub_5CD6A0(v25);
    *v25 = &CrapsStickMan::`vftable';
    v12 = v25;
  }
  else
  {
    v12 = 0;
  }
  v40 = -1;
  *(this + 90) = v12;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 90) + 64))(*(this + 90));
  return sub_5F2BA0(3202003);
}


//======================================================================
// sub_4298A0
// entry 004298a0  size 262  status ok
//======================================================================

int sub_4298A0()
{
  char v1; // [esp+0h] [ebp-20h]
  CImageDisplay *v2; // [esp+18h] [ebp-8h]
  unsigned int v3; // [esp+1Ch] [ebp-4h]

  if ( sub_4351B0(dword_7906D4) != -1
    && (v3 = sub_4351B0(dword_7906D4), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_436230(v3)) )
  {
    return sub_5F2B20(3202002, 1);
  }
  else
  {
    return sub_5F2BA0(3202002);
  }
}


//======================================================================
// sub_4299B0
// entry 004299b0  size 638  status ok
//======================================================================

int __thiscall sub_4299B0(_DWORD **this)
{
  int v1; // eax
  CMediaType *v2; // eax
  int IsFixedSize; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // [esp+0h] [ebp-40h]
  int v8; // [esp+4h] [ebp-3Ch]
  int v10; // [esp+Ch] [ebp-34h]
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+24h] [ebp-1Ch]
  int i; // [esp+3Ch] [ebp-4h]
  int j; // [esp+3Ch] [ebp-4h]

  sub_4298A0();
  for ( i = 0; i < 4; ++i )
    sub_42BF10(*(this + i + 1));
  if ( *(int *)(dword_7906D4 + 2740) >= 0 )
  {
    if ( *(_DWORD *)(sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740)) + 1180) )
    {
      v1 = sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740));
      if ( CMFCScanliner::channels(*(CMFCScanliner **)(v1 + 1180)) )
      {
        v12 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740)) + 32);
        v2 = (CMediaType *)unknown_libname_732(v12);
        IsFixedSize = CMediaType::IsFixedSize(v2);
        (*(void (__thiscall **)(_DWORD, int))(**(this + 88) + 108))(*(this + 88), IsFixedSize + 1);
        v11 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740)) + 32);
        v8 = unknown_libname_732(v11);
        v10 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740)) + 32);
        v7 = unknown_libname_732(v10);
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 84))(v8);
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 76))(v7, v4);
        (*(void (__thiscall **)(_DWORD, int))(**(this + 88) + 68))(*(this + 88), v5);
        (*(void (__thiscall **)(_DWORD))(**(this + 88) + 116))(*(this + 88));
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 88) + 112))(*(this + 88));
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( (unsigned __int8)sub_4349B0(j)
      && (unsigned __int8)sub_5DA7B0(dword_7906D0)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7906D0 + 708))(dword_7906D0, j) )
    {
      if ( (unsigned __int8)sub_434A00(j) )
        sub_429E90(this);
    }
  }
  result = sub_5DA7B0(dword_7906D0);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 752))(dword_7906D0);
  return result;
}


//======================================================================
// sub_429C30
// entry 00429c30  size 169  status ok
//======================================================================

int sub_429C30()
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( *(_DWORD *)(dword_7906D4 + 2784) == -1 )
      {
        sub_429D90(i, j);
        sub_429DD0(i, j);
      }
      else if ( *(_DWORD *)(dword_7906D4 + 2784) == j )
      {
        sub_429D90(i, j);
        sub_429DD0(i, j);
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_429CE0
// entry 00429ce0  size 171  status ok
//======================================================================

int sub_429CE0()
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( *(_DWORD *)(dword_7906D4 + 2784) == -1 )
      {
        sub_429E10(i, j);
        sub_429E50(i, j);
      }
      else if ( *(_DWORD *)(dword_7906D4 + 2784) != j )
      {
        sub_429E10(i, j);
        sub_429E50(i, j);
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_429D90
// entry 00429d90  size 59  status ok
//======================================================================

int __thiscall sub_429D90(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h]

  result = a3;
  v4 = *(_DWORD *)(*(this + a2 + 5) + 4 * a3 + 2812);
  if ( v4 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 116))(v4, this);
  return result;
}


//======================================================================
// sub_429DD0
// entry 00429dd0  size 59  status ok
//======================================================================

int __thiscall sub_429DD0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h]

  result = a3;
  v4 = *(_DWORD *)(*(this + a2 + 5) + 4 * a3 + 2796);
  if ( v4 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 116))(v4, this);
  return result;
}


//======================================================================
// sub_429E10
// entry 00429e10  size 59  status ok
//======================================================================

int __thiscall sub_429E10(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h]

  result = a3;
  v4 = *(_DWORD *)(*(this + a2 + 5) + 4 * a3 + 2812);
  if ( v4 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 112))(v4, this);
  return result;
}


//======================================================================
// sub_429E50
// entry 00429e50  size 59  status ok
//======================================================================

int __thiscall sub_429E50(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h]

  result = a3;
  v4 = *(_DWORD *)(*(this + a2 + 5) + 4 * a3 + 2796);
  if ( v4 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 112))(v4, this);
  return result;
}


//======================================================================
// sub_429E90
// entry 00429e90  size 138  status ok
//======================================================================

int __thiscall sub_429E90(void *this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  result = sub_429F20(this);
  for ( i = 0; i < 76; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( *(_DWORD *)(dword_7906D4 + 2784) == -1 )
      {
        sub_42A050(i, j);
      }
      else if ( *(_DWORD *)(dword_7906D4 + 2784) == j )
      {
        sub_42A050(i, j);
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_429F20
// entry 00429f20  size 54  status ok
//======================================================================

int __thiscall sub_429F20(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    sub_5CC3E0(*(this + i + 5));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_429F60
// entry 00429f60  size 60  status ok
//======================================================================

int __stdcall sub_429F60(int a1)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    sub_42CB70(a1);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_429FA0
// entry 00429fa0  size 54  status ok
//======================================================================

int __thiscall sub_429FA0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    sub_42CBD0(*(this + i + 5));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_42A030
// entry 0042a030  size 23  status ok
//======================================================================

int __stdcall sub_42A030(int a1)
{
  return dword_711000[a1];
}


//======================================================================
// sub_42A050
// entry 0042a050  size 62  status ok
//======================================================================

int __thiscall sub_42A050(_DWORD **this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( *(this + a2 + 5) )
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + a2 + 5) + 184))(*(this + a2 + 5), a3, 0);
  return result;
}


//======================================================================
// sub_42A090
// entry 0042a090  size 201  status ok
//======================================================================

int __thiscall sub_42A090(_DWORD **this)
{
  int v1; // eax

  (*(void (__thiscall **)(_DWORD))(**(this + 82) + 112))(*(this + 82));
  (*(void (__thiscall **)(_DWORD))(**(this + 83) + 112))(*(this + 83));
  v1 = sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740));
  if ( (unsigned __int8)sub_5D5780(v1) )
    sub_5EAF00(4028);
  else
    sub_5EAF00(4029);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 89) + 176))(*(this + 89), 4);
  return (*(int (__thiscall **)(_DWORD))(**(this + 89) + 116))(*(this + 89));
}


//======================================================================
// sub_42A160
// entry 0042a160  size 160  status ok
//======================================================================

int __thiscall sub_42A160(_DWORD **this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(**(this + 86) + 116))(*(this + 86));
  for ( i = 0; i < 2; ++i )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + i + 84) + 176))(
      *(this + i + 84),
      *(_DWORD *)(dword_7906D4 + 4 * i + 2764) - 1);
    result = (*(int (__thiscall **)(_DWORD))(**(this + i + 84) + 116))(*(this + i + 84));
  }
  return result;
}


//======================================================================
// sub_42A200
// entry 0042a200  size 101  status ok
//======================================================================

int __thiscall sub_42A200(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(**(this + 86) + 112))(*(this + 86));
  for ( i = 0; i < 2; ++i )
    result = (*(int (__thiscall **)(_DWORD))(**(this + i + 84) + 112))(*(this + i + 84));
  return result;
}


//======================================================================
// sub_42A270
// entry 0042a270  size 54  status ok
//======================================================================

int __thiscall sub_42A270(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    sub_42C390(*(this + i + 5));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_42A2B0
// entry 0042a2b0  size 82  status ok
//======================================================================

void __thiscall sub_42A2B0(_DWORD *this, int a2)
{
  _DWORD *v2; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v2 = this;
  for ( i = 0; i < 76; ++i )
  {
    if ( pairNode::raw_length(*(pairNode **)(v2[i + 5] + 376)) == a2 )
      sub_42C410(v2, i);
  }
}


//======================================================================
// sub_42A310
// entry 0042a310  size 82  status ok
//======================================================================

void __thiscall sub_42A310(_DWORD *this, int a2)
{
  _DWORD *v2; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v2 = this;
  for ( i = 0; i < 76; ++i )
  {
    if ( pairNode::raw_length(*(pairNode **)(v2[i + 5] + 376)) == a2 )
      sub_42C4B0(v2, i);
  }
}


//======================================================================
// sub_42A370
// entry 0042a370  size 290  status ok
//======================================================================

bool __thiscall sub_42A370(_DWORD *this, unsigned int a2)
{
  if ( a2 <= 1
    && (*(_DWORD *)(*(this + 5) + 2788)
     && CDrawImage::UsingImageAllocator(*(CDrawImage **)(*(this + 5) + 2788))
     && (unsigned __int8)sub_5F54A0(*(_DWORD *)(*(this + 5) + 2788))
     || *(_DWORD *)(*(this + 6) + 2788)
     && CDrawImage::UsingImageAllocator(*(CDrawImage **)(*(this + 6) + 2788))
     && (unsigned __int8)sub_5F54A0(*(_DWORD *)(*(this + 6) + 2788))) )
  {
    return 1;
  }
  return (a2 == 2 || a2 == 3)
      && (*(_DWORD *)(*(this + 7) + 2788)
       && CDrawImage::UsingImageAllocator(*(CDrawImage **)(*(this + 7) + 2788))
       && (unsigned __int8)sub_5F54A0(*(_DWORD *)(*(this + 7) + 2788))
       || *(_DWORD *)(*(this + 8) + 2788)
       && CDrawImage::UsingImageAllocator(*(CDrawImage **)(*(this + 8) + 2788))
       && (unsigned __int8)sub_5F54A0(*(_DWORD *)(*(this + 8) + 2788)));
}


//======================================================================
// sub_42A4A0
// entry 0042a4a0  size 854  status ok
//======================================================================

int __thiscall sub_42A4A0(CMFCToolBarsCustomizeDialog **this, int a2)
{
  int result; // eax
  int v4; // [esp+44h] [ebp-1Ch]
  int v5; // [esp+48h] [ebp-18h]
  int v6; // [esp+4Ch] [ebp-14h]
  bool v7; // [esp+5Fh] [ebp-1h]

  v7 = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 87)) == 1;
  if ( *(_DWORD *)(dword_7906D4 + 2756) )
  {
    if ( *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) == 7
      || (v6 = *(_DWORD *)(dword_7906D4 + 2756),
          v5 = *(_DWORD *)(dword_7906D4 + 2764),
          v4 = *(_DWORD *)(dword_7906D4 + 2768),
          (result = v4 + v5 == v6) != 0) )
    {
      if ( !CMFCToolBarsCustomizeDialog::GetFlags(*(this + 87)) )
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          101018,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 87) + 176))(*(this + 87), 1);
      return (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 47, 69);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 87) + 176))(*(this + 87), 0);
    switch ( a2 )
    {
      case 4:
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 101, 69);
        break;
      case 5:
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 154, 69);
        break;
      case 6:
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 208, 69);
        break;
      case 8:
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 264, 69);
        break;
      case 9:
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 320, 69);
        break;
      case 10:
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 375, 69);
        break;
      default:
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 87) + 176))(*(this + 87), 1);
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 87) + 68))(*(this + 87), 47, 69);
        break;
    }
    if ( !CMFCToolBarsCustomizeDialog::GetFlags(*(this + 87)) && v7 )
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        101018,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 87));
    if ( result == 1 && !v7 )
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               101018,
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
// sub_42A820
// entry 0042a820  size 361  status ok
//======================================================================

int __thiscall sub_42A820(_DWORD **this, int a2)
{
  const char *v2; // eax
  const char *v3; // eax
  int v5; // [esp-Ch] [ebp-74h]
  int v6; // [esp+0h] [ebp-68h]
  int v7; // [esp+4h] [ebp-64h]
  int v8; // [esp+8h] [ebp-60h]
  char Buffer[32]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[32]; // [esp+3Ch] [ebp-2Ch] BYREF
  int v12; // [esp+60h] [ebp-8h] BYREF
  int v13; // [esp+64h] [ebp-4h]

  sub_5DCB00(a2);
  sub_5D6020(&v12);
  if ( v12 || v13 )
  {
    if ( v12 >= 0 )
      v8 = v12;
    else
      v8 = -v12;
    if ( v12 >= 0 )
      v7 = v13;
    else
      v7 = -v13;
    sub_64C8D0(v8, v7, Buffer, 1, 1, 1);
  }
  else
  {
    sub_6311E0(v12, Buffer);
  }
  if ( v12 )
  {
    if ( v12 <= 0 )
      v6 = sub_630F40("SID_GENERIC_LOST");
    else
      v6 = sub_630F40("SID_GENERIC_WON");
    v3 = (const char *)sub_630F40("SID_CRAPS_JUST_FORMAT");
    sprintf(Destination, v3, v6);
  }
  else
  {
    v2 = (const char *)sub_630F40("SID_CRAPS_NET_COLON");
    strcpy(Destination, v2);
  }
  if ( a2 == *(_DWORD *)(dword_7906D4 + 2740) )
    (*(void (__thiscall **)(_DWORD))(**(this + 88) + 112))(*(this + 88));
  v5 = *(_DWORD *)(dword_162EE80 + 4);
  sub_5DCB00(a2);
  return sub_5D67D0(v5, Destination, Buffer);
}


//======================================================================
// sub_42A990
// entry 0042a990  size 652  status ok
//======================================================================

int __thiscall sub_42A990(_DWORD **this)
{
  int v2; // [esp+4h] [ebp-54h]
  void *v4; // [esp+Ch] [ebp-4Ch]
  int k; // [esp+14h] [ebp-44h]
  int j; // [esp+18h] [ebp-40h]
  int v7; // [esp+1Ch] [ebp-3Ch]
  int v8; // [esp+20h] [ebp-38h]
  _DWORD v9[7]; // [esp+24h] [ebp-34h]
  int i; // [esp+40h] [ebp-18h]
  _DWORD *v11; // [esp+44h] [ebp-14h]
  int v12; // [esp+48h] [ebp-10h]
  int v13; // [esp+54h] [ebp-4h]

  v8 = 15;
  v9[0] = 130;
  v9[1] = 15;
  v9[2] = 130;
  v9[3] = 15;
  v9[4] = 130;
  v9[5] = 15;
  v9[6] = 130;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  for ( i = 0; i < 76; ++i )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 272) )
    {
      for ( j = 0; j < 4; ++j )
      {
        v12 = v9[2 * j - 1]
            + (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + i + 5) + 220))(*(this + i + 5), j, 0);
        v7 = v9[2 * j] + (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + i + 5) + 224))(*(this + i + 5), j, 0);
        sub_42C8A0(j, 0);
        sub_42CA40(j, 0);
        for ( k = 0; k <= sub_5CCDF0(j, 0); ++k )
        {
          v11 = (_DWORD *)(*(this + i + 5))[120 * j + 95 + k];
          if ( !v11 )
            break;
          v11[97] = sub_637810(4);
          if ( v11[97] && (unsigned __int8)sub_637630(dword_162EE84) )
          {
            v4 = operator new(0x2Cu);
            v13 = 0;
            if ( v4 )
              v2 = sub_606E60(*(_DWORD *)(dword_162EE80 + 4), v12, v7, 0);
            else
              v2 = 0;
            v13 = -1;
            sub_5F6050(v2);
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, int, int))(*v11 + 68))(v11, v12, v7);
          }
        }
      }
    }
  }
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(0);
}


//======================================================================
// sub_42AC20
// entry 0042ac20  size 176  status ok
//======================================================================

int __thiscall sub_42AC20(void *this)
{
  int i; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  if ( (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 )
    return sub_42DCF0(this);
  for ( i = 0; i < 76; ++i )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 272) )
      sub_5CB9B0(*(_DWORD *)(dword_7906D4 + 4 * i + 4));
  }
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
           *(_DWORD *)(dword_162EE80 + 4),
           15);
}


//======================================================================
// sub_42ACD0
// entry 0042acd0  size 177  status ok
//======================================================================

char __thiscall sub_42ACD0(_DWORD *this)
{
  int k; // [esp+4h] [ebp-10h]
  int j; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]
  CMFCVisualManagerOffice2003 *v6; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      for ( k = 0; k <= sub_5CCDF0(j, 0); ++k )
      {
        v6 = *(CMFCVisualManagerOffice2003 **)(*(this + i + 5) + 480 * j + 380 + 4 * k);
        if ( v6 && CMFCVisualManagerOffice2003::GetHighlightMenuItemColor(v6) )
          return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_42AD90
// entry 0042ad90  size 663  status ok
//======================================================================

int __thiscall sub_42AD90(_DWORD **this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-34h]
  int k; // [esp+14h] [ebp-24h]
  int i; // [esp+18h] [ebp-20h]
  int v7; // [esp+1Ch] [ebp-1Ch]
  int j; // [esp+20h] [ebp-18h]
  _DWORD *v9; // [esp+24h] [ebp-14h]
  int v10; // [esp+28h] [ebp-10h]

  if ( *(this + 90) )
    (*(void (__thiscall **)(_DWORD))(**(this + 90) + 112))(*(this + 90));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 76; ++j )
    {
      if ( *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * j + 4) + 272) == 1
        || *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * j + 4) + 272) == 3 )
      {
        v1 = pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * j + 4));
        if ( (unsigned __int8)sub_438870(v1) )
        {
          sub_42C8A0(i, 0);
        }
        else
        {
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 452))(dword_162EE80, i);
          v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 456))(dword_162EE80, i) + 100;
          sub_42C8A0(i, 0);
          for ( k = 0; k <= sub_5CCDF0(i, 0); ++k )
          {
            v9 = (_DWORD *)(*(this + j + 5))[120 * i + 95 + k];
            if ( !v9 )
              break;
            v9[97] = sub_637810(4);
            if ( v9[97] && (unsigned __int8)sub_637630(dword_162EE84) )
            {
              if ( operator new(0x2Cu) )
                v3 = sub_606E60(*(_DWORD *)(dword_162EE80 + 4), v10, v7, 0);
              else
                v3 = 0;
              sub_5F6050(v3);
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, int, int))(*v9 + 68))(v9, v10, v7);
            }
          }
        }
      }
    }
  }
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(0);
}


//======================================================================
// sub_42B030
// entry 0042b030  size 790  status ok
//======================================================================

int __thiscall sub_42B030(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-4Ch]
  void *v5; // [esp+24h] [ebp-2Ch]
  int k; // [esp+2Ch] [ebp-24h]
  int j; // [esp+30h] [ebp-20h]
  int v8; // [esp+34h] [ebp-1Ch] BYREF
  int v9; // [esp+38h] [ebp-18h]
  int i; // [esp+3Ch] [ebp-14h]
  _DWORD *v11; // [esp+40h] [ebp-10h]
  int v12; // [esp+4Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  for ( i = 0; i < 76; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 272) == -1
      && (pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) == 4
       || pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) == 5)
      && (pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) != 5
       || *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) != 12) )
    {
      for ( j = 0; j < 4; ++j )
      {
        v1 = pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4));
        if ( (unsigned __int8)sub_4369A0(j, v1) )
        {
          if ( pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) == 4 )
            sub_42B350(*(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764), j, &v8);
          else
            sub_42B620(*(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764), j, &v8);
          for ( k = 0; k <= sub_5CCDF0(j, 0); ++k )
          {
            v11 = *(_DWORD **)(*(this + i + 5) + 480 * j + 380 + 4 * k);
            if ( !v11 )
              break;
            v11[97] = sub_637810(4);
            if ( v11[97] && (unsigned __int8)sub_637630(dword_162EE84) )
            {
              v5 = operator new(0x2Cu);
              v12 = 0;
              if ( v5 )
                v3 = sub_606E60(*(_DWORD *)(dword_162EE80 + 4), v8, v9, 0);
              else
                v3 = 0;
              v12 = -1;
              sub_5F6050(v3);
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, int, int))(*v11 + 68))(v11, v8, v9);
            }
          }
        }
      }
    }
  }
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(0);
}


//======================================================================
// sub_42B350
// entry 0042b350  size 678  status ok
//======================================================================

int __thiscall sub_42B350(_DWORD **this, int a2, int a3, _DWORD *a4)
{
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+4h] [ebp-34h]
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-14h]

  result = a2;
  switch ( a2 )
  {
    case 4:
      v5 = sub_434880(19);
      *a4 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v5 + 5) + 212))(*(this + v5 + 5), a3, 0);
      v6 = sub_434880(19);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v6 + 5) + 216))(*(this + v6 + 5), a3, 0);
      a4[1] = result;
      break;
    case 5:
      v16 = (int)*(this + sub_434880(20) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 212))(v16, a3, 0);
      v7 = sub_434880(20);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v7 + 5) + 216))(*(this + v7 + 5), a3, 0);
      a4[1] = result;
      break;
    case 6:
      v15 = (int)*(this + sub_434880(21) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 212))(v15, a3, 0);
      v8 = sub_434880(21);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v8 + 5) + 216))(*(this + v8 + 5), a3, 0);
      a4[1] = result;
      break;
    case 8:
      v14 = (int)*(this + sub_434880(22) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 212))(v14, a3, 0);
      v9 = sub_434880(22);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v9 + 5) + 216))(*(this + v9 + 5), a3, 0);
      a4[1] = result;
      break;
    case 9:
      v13 = (int)*(this + sub_434880(23) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 212))(v13, a3, 0);
      v10 = sub_434880(23);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v10 + 5) + 216))(*(this + v10 + 5), a3, 0);
      a4[1] = result;
      break;
    case 10:
      v12 = (int)*(this + sub_434880(24) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 212))(v12, a3, 0);
      v11 = sub_434880(24);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v11 + 5) + 216))(*(this + v11 + 5), a3, 0);
      a4[1] = result;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_42B620
// entry 0042b620  size 678  status ok
//======================================================================

int __thiscall sub_42B620(_DWORD **this, int a2, int a3, _DWORD *a4)
{
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+4h] [ebp-34h]
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-14h]

  result = a2;
  switch ( a2 )
  {
    case 4:
      v5 = sub_434880(31);
      *a4 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v5 + 5) + 212))(*(this + v5 + 5), a3, 0);
      v6 = sub_434880(31);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v6 + 5) + 216))(*(this + v6 + 5), a3, 0);
      a4[1] = result;
      break;
    case 5:
      v16 = (int)*(this + sub_434880(32) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 212))(v16, a3, 0);
      v7 = sub_434880(32);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v7 + 5) + 216))(*(this + v7 + 5), a3, 0);
      a4[1] = result;
      break;
    case 6:
      v15 = (int)*(this + sub_434880(33) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 212))(v15, a3, 0);
      v8 = sub_434880(33);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v8 + 5) + 216))(*(this + v8 + 5), a3, 0);
      a4[1] = result;
      break;
    case 8:
      v14 = (int)*(this + sub_434880(34) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 212))(v14, a3, 0);
      v9 = sub_434880(34);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v9 + 5) + 216))(*(this + v9 + 5), a3, 0);
      a4[1] = result;
      break;
    case 9:
      v13 = (int)*(this + sub_434880(35) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 212))(v13, a3, 0);
      v10 = sub_434880(35);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v10 + 5) + 216))(*(this + v10 + 5), a3, 0);
      a4[1] = result;
      break;
    case 10:
      v12 = (int)*(this + sub_434880(36) + 5);
      *a4 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 212))(v12, a3, 0);
      v11 = sub_434880(36);
      result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + v11 + 5) + 216))(*(this + v11 + 5), a3, 0);
      a4[1] = result;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_42B8F0
// entry 0042b8f0  size 139  status ok
//======================================================================

int __stdcall sub_42B8F0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 4:
      result = sub_434880(19);
      break;
    case 5:
      result = sub_434880(20);
      break;
    case 6:
      result = sub_434880(21);
      break;
    case 8:
      result = sub_434880(22);
      break;
    case 9:
      result = sub_434880(23);
      break;
    case 10:
      result = sub_434880(24);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_42B9A0
// entry 0042b9a0  size 139  status ok
//======================================================================

int __stdcall sub_42B9A0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 4:
      result = sub_434880(31);
      break;
    case 5:
      result = sub_434880(32);
      break;
    case 6:
      result = sub_434880(33);
      break;
    case 8:
      result = sub_434880(34);
      break;
    case 9:
      result = sub_434880(35);
      break;
    case 10:
      result = sub_434880(36);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_42BA50
// entry 0042ba50  size 615  status ok
//======================================================================

int sub_42BA50()
{
  int v0; // eax
  int v2; // [esp+20h] [ebp-14h]
  int j; // [esp+2Ch] [ebp-8h]
  int i; // [esp+30h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  for ( i = 0; i < 76; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 272) == -1
      && (pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) == 4
       || pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) == 5)
      && (pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) != 5
       || *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) != 12) )
    {
      if ( pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4)) == 4 )
        v2 = sub_42B8F0(*(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764));
      else
        v2 = sub_42B9A0(*(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764));
      for ( j = 0; j < 4; ++j )
      {
        v0 = pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4));
        if ( (unsigned __int8)sub_4369A0(j, v0) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(dword_7906D4 + 4 * v2 + 4) + 184))(
            *(_DWORD *)(dword_7906D4 + 4 * v2 + 4),
            *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 32 * j + 72),
            *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 32 * j + 76),
            j,
            0);
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7906D4 + 4 * i + 4) + 188))(
            *(_DWORD *)(dword_7906D4 + 4 * i + 4),
            j,
            0);
        }
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
           *(_DWORD *)(dword_162EE80 + 4),
           15);
}


//======================================================================
// sub_42BCC0
// entry 0042bcc0  size 212  status ok
//======================================================================

int sub_42BCC0()
{
  int result; // eax
  int v1; // eax
  int v2; // [esp+0h] [ebp-10h]
  char v3; // [esp+Bh] [ebp-5h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(
             *(_DWORD *)(dword_162EE80 + 4),
             1);
  for ( i = 0; i < 4; ++i )
  {
    result = sub_5DCB00(i);
    if ( *(_DWORD *)(result + 1180) )
    {
      v1 = sub_5DCB00(i);
      result = sub_5F54A0(*(_DWORD *)(v1 + 1180));
      if ( (_BYTE)result )
      {
        if ( v3 )
          v2 = 0;
        else
          v2 = *(_DWORD *)(dword_162EE80 + 4);
        sub_5DCB00(i);
        result = sub_5D6980(v2);
        v3 = 1;
      }
    }
  }
  if ( !v3 )
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
             *(_DWORD *)(dword_162EE80 + 4),
             0);
  return result;
}


//======================================================================
// sub_42BDA0
// entry 0042bda0  size 54  status ok
//======================================================================

int __thiscall sub_42BDA0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    sub_42D070(*(this + i + 5));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_42BDE0
// entry 0042bde0  size 88  status ok
//======================================================================

int __thiscall sub_42BDE0(void *this)
{
  int v1; // eax

  if ( (unsigned __int8)sub_434280(dword_7906D4, this) )
    return sub_5DB8C0(-180, 170);
  v1 = sub_5DF650(dword_7947E0);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
           *(_DWORD *)(dword_162EE80 + 4),
           v1);
}


//======================================================================
// sub_42BE80
// entry 0042be80  size 131  status ok
//======================================================================

_DWORD *__thiscall sub_42BE80(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-Ch]

  result = this;
  *(this + 1) = a2;
  if ( *(this + 1) != 4 )
  {
    sub_639110(*(this + 1));
    sub_646380(100);
    v5 = *(this + 1);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 456))(dword_162EE80);
    v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 452))(dword_162EE80, *(this + 1), v3);
    return (_DWORD *)sub_646150(v4, v5);
  }
  return result;
}


//======================================================================
// sub_42BF10
// entry 0042bf10  size 60  status ok
//======================================================================

int __thiscall sub_42BF10(_DWORD *this)
{
  sub_639110(*(this + 1));
  sub_6464D0(0, 0);
  return sub_5D9180(*(this + 1), 0);
}


//======================================================================
// sub_42BF50
// entry 0042bf50  size 132  status ok
//======================================================================

_DWORD *__thiscall sub_42BF50(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5CC1D0(this);
  *this = &CrapsBetArea::`vftable';
  *(this + 697) = 0;
  *(this + 698) = 0;
  *(this + 696) = 0;
  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 699) = 0;
    *(this + i + 703) = 0;
  }
  return this;
}


//======================================================================
// sub_42BFE0
// entry 0042bfe0  size 370  status ok
//======================================================================

int __thiscall sub_42BFE0(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+44h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&CrapsBetArea::`vftable';
  if ( *(this + 697) )
    (***(this + 697))(*(this + 697), 1);
  if ( *(this + 698) )
    (***(this + 698))(*(this + 698), 1);
  if ( *(this + 696) )
    (***(this + 696))(*(this + 696), 1);
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 699) )
      (***(this + i + 699))(*(this + i + 699), 1);
    if ( *(this + i + 703) )
      (***(this + i + 703))(*(this + i + 703), 1);
  }
  return sub_5CC230();
}


//======================================================================
// sub_42C160
// entry 0042c160  size 16  status ok
//======================================================================

int sub_42C160()
{
  return 4006;
}


//======================================================================
// sub_42C170
// entry 0042c170  size 153  status ok
//======================================================================

int __thiscall sub_42C170(_DWORD *this, int a2, int a3)
{
  _DWORD v4[4]; // [esp+4h] [ebp-10h]

  v4[0] = 3;
  v4[1] = 2;
  v4[2] = 1;
  v4[3] = 0;
  if ( (int)*(this + 707) > 14 && (int)*(this + 707) < 22 )
    return dword_710EC0[2 * *(this + 707)];
  if ( (int)*(this + 707) <= 24 || (int)*(this + 707) >= 32 )
    return dword_7105B8[8 * *(this + 707) + 2 * v4[a2]];
  return dword_710EA8[2 * *(this + 707)];
}


//======================================================================
// sub_42C210
// entry 0042c210  size 162  status ok
//======================================================================

int __thiscall sub_42C210(_DWORD *this, int a2, int a3)
{
  _DWORD v4[4]; // [esp+4h] [ebp-10h]

  v4[0] = 3;
  v4[1] = 2;
  v4[2] = 1;
  v4[3] = 0;
  if ( (int)*(this + 707) > 14 && (int)*(this + 707) < 22 )
    return dword_710EC4[2 * *(this + 707)] - 45;
  if ( (int)*(this + 707) <= 24 || (int)*(this + 707) >= 32 )
    return dword_7105BC[8 * *(this + 707) + 2 * v4[a2]] - 45;
  return dword_710EAC[2 * *(this + 707)] - 45;
}


//======================================================================
// sub_42C2C0
// entry 0042c2c0  size 18  status ok
//======================================================================

int __stdcall sub_42C2C0(int a1, int a2)
{
  return -2;
}


//======================================================================
// sub_42C2E0
// entry 0042c2e0  size 40  status ok
//======================================================================

int __thiscall sub_42C2E0(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 212))(this, a2, a3) - 3;
}


//======================================================================
// sub_42C310
// entry 0042c310  size 40  status ok
//======================================================================

int __thiscall sub_42C310(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 216))(this, a2, a3) - 15;
}


//======================================================================
// sub_42C340
// entry 0042c340  size 78  status ok
//======================================================================

char __thiscall sub_42C340(int this)
{
  char result; // al

  result = sub_42A370((_DWORD *)dword_7906DC, *(_DWORD *)(this + 2828));
  if ( !result )
  {
    result = this;
    if ( *(_DWORD *)(this + 2788) )
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 2788) + 116))(*(_DWORD *)(this + 2788));
  }
  return result;
}


//======================================================================
// sub_42C390
// entry 0042c390  size 119  status ok
//======================================================================

int __thiscall sub_42C390(_DWORD **this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 697) )
  {
    sub_5F5D50(0);
    result = (*(int (__thiscall **)(_DWORD))(**(this + 697) + 112))(*(this + 697));
  }
  if ( *(this + 698) )
  {
    sub_5F5D50(0);
    return (*(int (__thiscall **)(_DWORD))(**(this + 698) + 112))(*(this + 698));
  }
  return result;
}


//======================================================================
// sub_42C410
// entry 0042c410  size 154  status ok
//======================================================================

_DWORD *__thiscall sub_42C410(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // [esp+4h] [ebp-1Ch]

  result = this;
  if ( *(this + 697) )
  {
    if ( operator new(0x28u) )
      v2 = sub_601110(4, 1, 0, 0, 0);
    else
      v2 = 0;
    return (_DWORD *)sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_42C4B0
// entry 0042c4b0  size 320  status ok
//======================================================================

_DWORD *__thiscall sub_42C4B0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // [esp+8h] [ebp-20h]
  int v8; // [esp+18h] [ebp-10h]

  v8 = *(_DWORD *)(dword_7906D4 + 2776);
  if ( v8 == -1 )
    sub_5E9F20((char)"p != -1", "..\\Casino\\crapsdisplay.cpp", 1108);
  result = this;
  if ( *(this + 698) )
  {
    v2 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 216))(this, v8, 0);
    v3 = sub_5F5590(*(this + 698));
    v4 = (*(int (__thiscall **)(_DWORD *, int, _DWORD, int))(*this + 212))(this, v8, 0, v2 - v3 / 2);
    v5 = sub_5F5550(*(this + 698));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 698) + 68))(*(this + 698), v4 - v5 / 2);
    if ( operator new(0x28u) )
      v6 = sub_601110(4, 1, 0, 0, 0);
    else
      v6 = 0;
    return (_DWORD *)sub_5F5D50(v6);
  }
  return result;
}


//======================================================================
// sub_42C5F0
// entry 0042c5f0  size 666  status ok
//======================================================================

int __thiscall sub_42C5F0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int IsFixedSize; // eax
  int v8; // [esp+8h] [ebp-30h]
  void *v10; // [esp+14h] [ebp-24h]
  int v11; // [esp+1Ch] [ebp-1Ch]
  int v12; // [esp+20h] [ebp-18h]
  int v13; // [esp+24h] [ebp-14h]
  int v14; // [esp+28h] [ebp-10h]

  v12 = sub_5CCDF0(a2, 0);
  v14 = 0;
  result = a3 + 1;
  switch ( a3 )
  {
    case -1:
      return result;
    case 0:
      v14 = 4042;
      goto LABEL_6;
    case 1:
      v14 = 4040;
      goto LABEL_6;
    case 3:
      v14 = 4041;
      goto LABEL_6;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\crapsdisplay.cpp", 1128);
LABEL_6:
      if ( !*(this + a2 + 703) )
      {
        v10 = operator new(0x178u);
        if ( v10 )
        {
          sub_5EAAF0(v10);
          v8 = v4;
        }
        else
        {
          v8 = 0;
        }
        *(this + a2 + 703) = v8;
      }
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 703) + 64))(*(this + a2 + 703));
      sub_5EAF00(v14);
      if ( v12 == -1 )
        sub_5E9F20((char)"highestChip != -1", "..\\Casino\\crapsdisplay.cpp", 1137);
      v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + v12 + 95) + 76))(*(this + 120 * a2 + v12 + 95));
      v11 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 220))(this, a2, 0) + v5;
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + v12 + 95) + 84))(*(this + 120 * a2 + v12 + 95));
      v13 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 224))(this, a2, 0) + v6;
      IsFixedSize = CMediaType::IsFixedSize((CMediaType *)*(this + 120 * a2 + v12 + 95));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + a2 + 703) + 108))(*(this + a2 + 703), IsFixedSize + 2);
      (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + a2 + 703) + 68))(*(this + a2 + 703), v11, v13);
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 703) + 116))(*(this + a2 + 703));
  }
}


//======================================================================
// sub_42C8A0
// entry 0042c8a0  size 151  status ok
//======================================================================

int __thiscall sub_42C8A0(_DWORD **this, int a2, int a3)
{
  int result; // eax

  sub_42CA40(a2, a3);
  if ( *(this + a2 + 703) )
    (*(void (__thiscall **)(_DWORD))(**(this + a2 + 703) + 112))(*(this + a2 + 703));
  result = (int)*(this + a2 + 703);
  if ( result )
    result = (*(int (__thiscall **)(_DWORD, int))**(this + a2 + 703))(*(this + a2 + 703), 1);
  *(this + a2 + 703) = 0;
  return result;
}


//======================================================================
// sub_42C940
// entry 0042c940  size 120  status ok
//======================================================================

bool __thiscall sub_42C940(CPane *this, int a2, int a3)
{
  pairNode *ExclusiveRowMode; // eax
  pairNode *v4; // eax
  char v6; // [esp+0h] [ebp-14h]

  v6 = 0;
  if ( *(int *)(CPane::GetExclusiveRowMode(this) + 32 * a2 + 72 + 8 * a3) > 0 )
  {
    ExclusiveRowMode = (pairNode *)CPane::GetExclusiveRowMode(this);
    if ( (int)pairNode::raw_length(ExclusiveRowMode) >= 49 )
    {
      v4 = (pairNode *)CPane::GetExclusiveRowMode(this);
      if ( (int)pairNode::raw_length(v4) <= 60 )
        return 1;
    }
  }
  return v6;
}


//======================================================================
// sub_42C9C0
// entry 0042c9c0  size 120  status ok
//======================================================================

bool __thiscall sub_42C9C0(CPane *this, int a2, int a3)
{
  pairNode *ExclusiveRowMode; // eax
  pairNode *v4; // eax
  char v6; // [esp+0h] [ebp-14h]

  v6 = 0;
  if ( *(int *)(CPane::GetExclusiveRowMode(this) + 32 * a2 + 72 + 8 * a3) <= 0 )
  {
    ExclusiveRowMode = (pairNode *)CPane::GetExclusiveRowMode(this);
    if ( (int)pairNode::raw_length(ExclusiveRowMode) >= 49 )
    {
      v4 = (pairNode *)CPane::GetExclusiveRowMode(this);
      if ( (int)pairNode::raw_length(v4) <= 60 )
        return 1;
    }
  }
  return v6;
}


//======================================================================
// sub_42CA40
// entry 0042ca40  size 137  status ok
//======================================================================

int __thiscall sub_42CA40(_DWORD **this, int a2, int a3)
{
  int result; // eax

  if ( *(this + a2 + 699) )
    (*(void (__thiscall **)(_DWORD))(**(this + a2 + 699) + 112))(*(this + a2 + 699));
  result = (int)*(this + a2 + 699);
  if ( result )
    result = (*(int (__thiscall **)(_DWORD, int))**(this + a2 + 699))(*(this + a2 + 699), 1);
  *(this + a2 + 699) = 0;
  return result;
}


//======================================================================
// sub_42CAD0
// entry 0042cad0  size 152  status ok
//======================================================================

int __thiscall sub_42CAD0(_DWORD **this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 30; ++i )
  {
    if ( *(this + 120 * a2 + 30 * a3 + i + 95) )
      (*(void (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + i + 95) + 116))(*(this
                                                                                      + 120 * a2
                                                                                      + 30 * a3
                                                                                      + i
                                                                                      + 95));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_42CB70
// entry 0042cb70  size 91  status ok
//======================================================================

int __stdcall sub_42CB70(int a1)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( i != a1 )
        sub_5CC440(i, j);
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_42CBD0
// entry 0042cbd0  size 81  status ok
//======================================================================

int __thiscall sub_42CBD0(_DWORD **this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
      sub_42CAD0(this, i, j);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_42CC30
// entry 0042cc30  size 642  status ok
//======================================================================

int __thiscall sub_42CC30(CPane *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  pairNode *ExclusiveRowMode; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int IsFixedSize; // eax
  int v10; // [esp+8h] [ebp-20h]
  void *v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+18h] [ebp-10h]

  sub_5CC540(a2, a3);
  v13 = sub_5CCDF0(a2, a3);
  result = sub_42C940(this, a2, a3);
  if ( (_BYTE)result )
  {
    if ( v13 != -1 )
    {
      if ( !*((_DWORD *)this + a2 + 699) )
      {
        v12 = operator new(0x178u);
        if ( v12 )
        {
          sub_5EAAF0(v12);
          v10 = v4;
        }
        else
        {
          v10 = 0;
        }
        *((_DWORD *)this + a2 + 699) = v10;
      }
      ExclusiveRowMode = (pairNode *)CPane::GetExclusiveRowMode(this);
      v6 = pairNode::raw_length(ExclusiveRowMode);
      sub_5EAF00((v6 >= 55) + 4015);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + a2 + 699) + 64))(*((_DWORD *)this + a2 + 699));
      v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 120 * a2 + 30 * a3 + v13 + 95) + 84))(*((_DWORD *)this + 120 * a2 + 30 * a3 + v13 + 95));
      v8 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 120 * a2 + 30 * a3 + v13 + 95) + 76))(
             *((_DWORD *)this + 120 * a2 + 30 * a3 + v13 + 95),
             v7);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + a2 + 699) + 68))(*((_DWORD *)this + a2 + 699), v8 + 2);
      IsFixedSize = CMediaType::IsFixedSize(*((CMediaType **)this + 120 * a2 + 30 * a3 + v13 + 95));
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + a2 + 699) + 108))(
        *((_DWORD *)this + a2 + 699),
        IsFixedSize + 1);
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + a2 + 699) + 116))(*((_DWORD *)this + a2 + 699));
    }
  }
  else
  {
    result = sub_42C9C0(this, a2, a3);
    if ( (_BYTE)result )
      return sub_42CA40((_DWORD **)this, a2, a3);
  }
  return result;
}


//======================================================================
// sub_42CEC0
// entry 0042cec0  size 424  status ok
//======================================================================

int __thiscall sub_42CEC0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-1Ch]
  void *v8; // [esp+Ch] [ebp-14h]

  sub_42BDA0((_DWORD *)dword_7906DC);
  if ( !*(this + 696) )
  {
    v8 = operator new(0x1D4u);
    if ( v8 )
      v6 = sub_5CD360(v8);
    else
      v6 = 0;
    *(this + 696) = v6;
  }
  v1 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  v2 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int))(*this + 212))(this, 0, 0, v1 - 9);
  sub_5EC8F0(&Source, 4, 65, 15, v2, 0, 200, 17, -1);
  sub_5EE8C0(255, 255, 204);
  sub_5EF340(5, 0);
  v3 = pairNode::raw_length((pairNode *)*(this + 94));
  if ( (unsigned __int8)sub_4388A0(v3) )
    v4 = sub_630F40("SID_CRAPS_LAYBETS");
  else
    v4 = sub_630F40("SID_CRAPS_BUYBETS");
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 696) + 180))(*(this + 696), v4);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 696) + 116))(*(this + 696));
}


//======================================================================
// sub_42D070
// entry 0042d070  size 113  status ok
//======================================================================

int __thiscall sub_42D070(int *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 696) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 696) + 112))(*(this + 696));
    result = *(this + 696);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 696))(*(this + 696), 1);
    *(this + 696) = 0;
  }
  return result;
}


//======================================================================
// sub_42D0F0
// entry 0042d0f0  size 201  status ok
//======================================================================

void __stdcall sub_42D0F0(int a1)
{
  int *v1; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  for ( i = 55; i <= 60; ++i )
  {
    v1 = *(int **)(dword_7906DC + 4 * sub_434880(i) + 20);
    if ( (unsigned __int8)sub_5EB6D0(a1) )
    {
LABEL_4:
      sub_42CEC0(v1);
      return;
    }
    sub_42D070(v1);
  }
  for ( j = 49; j <= 54; ++j )
  {
    v1 = *(int **)(dword_7906DC + 4 * sub_434880(j) + 20);
    if ( (unsigned __int8)sub_5EB6D0(a1) )
      goto LABEL_4;
    sub_42D070(v1);
  }
}


//======================================================================
// sub_42D1C0
// entry 0042d1c0  size 317  status ok
//======================================================================

int __stdcall sub_42D1C0(int a1)
{
  int result; // eax
  int v2; // eax
  CImageDisplay *v4; // [esp+Ch] [ebp-14h]

  if ( tolower(*(char *)(a1 + 20)) == 116 )
    sub_5DB240(dword_7906D0);
  result = sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2776));
  if ( result )
  {
    v4 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2776));
    result = (int)CImageDisplay::GetDisplayFormat(v4);
    if ( *(_DWORD *)result == 2 || (result = CImageDisplay::GetDisplayFormat(v4)->rcSource.left, result == 3) )
    {
      if ( tolower(*(char *)(a1 + 20)) == 112 )
        sub_4362A0(*(_DWORD *)(dword_7906D4 + 2776));
      result = tolower(*(char *)(a1 + 20));
      if ( result == 114 )
      {
        v2 = sub_5F2A60(3202003, 0);
        result = (unsigned __int8)sub_6026D0(v2);
        if ( (_BYTE)result )
        {
          *(_BYTE *)(*(_DWORD *)(dword_7906DC + 356) + 396) = 1;
          return sub_42D3F0(*(_DWORD *)(dword_7906DC + 356));
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_42D300
// entry 0042d300  size 54  status ok
//======================================================================

_DWORD *__thiscall sub_42D300(_DWORD *this)
{
  sub_5F5BF0(this);
  *this = &CrapsHand::`vftable';
  *(this + 97) = 5;
  *((_BYTE *)this + 397) = 0;
  return this;
}


//======================================================================
// sub_42D360
// entry 0042d360  size 85  status ok
//======================================================================

int __thiscall sub_42D360(int this)
{
  *(_BYTE *)(this + 396) = 0;
  *(_DWORD *)(this + 388) = 5;
  *(_DWORD *)(this + 392) = GetTickCount();
  *(_BYTE *)(this + 397) = 0;
  sub_5EB570(this);
  return sub_5F2B20(3202003, 1);
}


//======================================================================
// sub_42D3C0
// entry 0042d3c0  size 35  status ok
//======================================================================

int __thiscall sub_42D3C0(void *this)
{
  sub_5EB5A0(this, this);
  return sub_5F2BA0(3202003);
}


//======================================================================
// sub_42D3F0
// entry 0042d3f0  size 59  status ok
//======================================================================

_BYTE *__thiscall sub_42D3F0(_BYTE *this)
{
  _BYTE *result; // eax
  int v3; // [esp+0h] [ebp-4h]

  result = this;
  if ( !*(this + 397) )
  {
    sub_5F2BA0(3202003);
    result = (_BYTE *)sub_42D750(this);
    *(_BYTE *)(v3 + 397) = 1;
  }
  return result;
}


//======================================================================
// sub_42D430
// entry 0042d430  size 259  status ok
//======================================================================

int __thiscall sub_42D430(int this)
{
  int result; // eax
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-14h]
  DWORD TickCount; // [esp+8h] [ebp-4h]

  sub_5F5CF0(this);
  result = CMFCScanliner::channels((CMFCScanliner *)this);
  if ( !(_BYTE)result )
  {
    if ( *(_DWORD *)(this + 388) )
    {
      result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 168))(this);
      if ( !(_BYTE)result && !*(_BYTE *)(this + 396) )
      {
        result = (int)dword_162EE84;
        if ( !*((_BYTE *)dword_162EE84 + 37) )
        {
          TickCount = GetTickCount();
          result = this;
          if ( TickCount - *(_DWORD *)(this + 392) >= 0x3E8 )
          {
            sub_62FDE0("Seconds until warning: %d\n", --*(_DWORD *)(this + 388));
            *(_DWORD *)(this + 392) = TickCount;
            result = this;
            if ( !*(_DWORD *)(this + 388) )
            {
              *(_BYTE *)(this + 396) = 1;
              v3 = (const CHAR *)sub_630F40("SID_CRAPS_ROLLDICE_TITLE");
              v2 = (const CHAR *)sub_630F40("SID_CRAPS_ROLLDICE_MESSAGE");
              return sub_62FF10(v2, v3, 0);
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_42D540
// entry 0042d540  size 242  status ok
//======================================================================

int __thiscall sub_42D540(_BYTE *this, int a2)
{
  int result; // eax

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = *(_DWORD *)(a2 + 24);
    switch ( result )
    {
      case 1:
        result = (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, a2);
        if ( (_BYTE)result && !*(this + 397) )
        {
          result = (int)this;
          *(this + 8) = 1;
          *(this + 9) = 1;
          *(_BYTE *)(a2 + 4) = 1;
        }
        break;
      case 2:
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 168))(this);
        if ( (_BYTE)result )
        {
          *((_DWORD *)this + 97) = 0;
          *(this + 8) = 0;
          *(this + 9) = 0;
          result = sub_42D750(2);
          *(this + 397) = 1;
        }
        break;
      case 3:
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 168))(this);
        if ( (_BYTE)result )
          return sub_42D640(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12));
        break;
    }
  }
  return result;
}


//======================================================================
// sub_42D640
// entry 0042d640  size 266  status ok
//======================================================================

int __thiscall sub_42D640(void *this, int a2, int a3)
{
  int result; // eax

  if ( a2 < 20 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 18);
  if ( a2 < 40 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 17);
  if ( a2 < 60 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 16);
  if ( a2 < 80 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 15);
  if ( a2 < 100 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 14);
  if ( a2 < 120 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 13);
  if ( a2 < 140 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 12);
  if ( a2 < 160 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 11);
  if ( a2 < 180 )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 176))(this, 10);
  return result;
}


//======================================================================
// sub_42D750
// entry 0042d750  size 144  status ok
//======================================================================

int __cdecl sub_42D750()
{
  int v1; // [esp+4h] [ebp-1Ch]

  sub_5F2BA0(3202003);
  if ( operator new(0x20u) )
    v1 = sub_42D7E0(0);
  else
    v1 = 0;
  return sub_5F5D50(v1);
}


//======================================================================
// sub_42D7E0
// entry 0042d7e0  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_42D7E0(_DWORD *this, int a2)
{
  sub_6010A0(a2);
  *this = &ThrowingDiceCycle::`vftable';
  return this;
}


//======================================================================
// sub_42D810
// entry 0042d810  size 69  status ok
//======================================================================

int __thiscall sub_42D810(void *this)
{
  int result; // eax

  sub_600E30(this);
  result = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(dword_7906DC + 356));
  if ( result == 22 )
  {
    result = sub_436A90(dword_7906D4);
    if ( (_BYTE)result )
      return sub_436B80(this);
  }
  return result;
}


//======================================================================
// sub_42D860
// entry 0042d860  size 46  status ok
//======================================================================

_DWORD *__thiscall sub_42D860(_DWORD *this, int a2, int a3)
{
  sub_6010A0(a3);
  *this = &CrapsRollingDiceCycle::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_42D890
// entry 0042d890  size 249  status ok
//======================================================================

int __thiscall sub_42D890(_DWORD *this, int a2, int a3)
{
  _DWORD v5[2]; // [esp+4h] [ebp-8h]

  v5[0] = 4037;
  v5[1] = 4039;
  sub_5EAF00(v5[*(this + 8)]);
  if ( (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_7906DC + 356)) )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7906DC + 4 * *(this + 8) + 328) + 176))(
      *(_DWORD *)(dword_7906DC + 4 * *(this + 8) + 328),
      5);
  else
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7906DC + 4 * *(this + 8) + 328) + 176))(
      *(_DWORD *)(dword_7906DC + 4 * *(this + 8) + 328),
      0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7906DC + 4 * *(this + 8) + 328) + 116))(*(_DWORD *)(dword_7906DC + 4 * *(this + 8) + 328));
  return sub_6010D0(a2, 0);
}


//======================================================================
// sub_42D990
// entry 0042d990  size 243  status ok
//======================================================================

int __thiscall sub_42D990(int this)
{
  int v2; // [esp+0h] [ebp-1Ch]
  _DWORD v4[2]; // [esp+14h] [ebp-8h]

  v4[0] = 4036;
  v4[1] = 4038;
  if ( *(_DWORD *)(this + 32) )
    v2 = *(_DWORD *)(dword_7906D4 + 2768) - 1;
  else
    v2 = *(_DWORD *)(dword_7906D4 + 2764) - 1;
  *(_BYTE *)(this + 24) = 0;
  sub_5EAF00(v4[*(_DWORD *)(this + 32)]);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7906DC + 4 * *(_DWORD *)(this + 32) + 328) + 176))(
    *(_DWORD *)(dword_7906DC + 4 * *(_DWORD *)(this + 32) + 328),
    v2);
  if ( *(_DWORD *)(this + 8) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 28))(*(_DWORD *)(this + 8), 0);
  return sub_5F5D50(0);
}


//======================================================================
// sub_42DA90
// entry 0042da90  size 460  status ok
//======================================================================

unsigned int __fastcall sub_42DA90(_DWORD *a1)
{
  unsigned int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-2Ch]
  int v3; // [esp+8h] [ebp-28h]
  _DWORD *v5; // [esp+10h] [ebp-20h]
  int i; // [esp+20h] [ebp-10h]

  v3 = a1[5];
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (unsigned __int8)sub_434390(dword_7906D4) )
        sub_42A160((_DWORD **)dword_7906DC);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7906DC + 356) + 112))(*(_DWORD *)(dword_7906DC + 356));
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7906D0 + 4) + 8))(
        *(_DWORD *)(dword_7906D0 + 4),
        1,
        0);
      sub_5FC420(0);
      result = *(_DWORD *)(dword_7906D4 + 2740);
      if ( result < 4 )
        return sub_5E7E00(result, 8, *(_DWORD *)(dword_7906D4 + 2748));
    }
    else
    {
      return sub_5E9F20((char)"false", "..\\Casino\\crapsdisplay.cpp", 1576);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 4))(a1, 1);
    result = sub_42A200((_DWORD **)dword_7906DC);
    for ( i = 0; i < 2; ++i )
    {
      v5 = operator new(0x24u);
      if ( v5 )
        v2 = sub_42D860(v5, i, i == 0 ? (unsigned int)a1 : 0);
      else
        v2 = 0;
      sub_5F5D50(v2);
      result = i + 1;
    }
  }
  return result;
}


//======================================================================
// sub_42DC60
// entry 0042dc60  size 34  status ok
//======================================================================

int __thiscall sub_42DC60(void *this)
{
  sub_5F5CC0(this);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 108))(this, 100);
}


//======================================================================
// sub_42DC90
// entry 0042dc90  size 92  status ok
//======================================================================

unsigned int __thiscall sub_42DC90(CMFCToolBarsCustomizeDialog *this)
{
  unsigned int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = CMFCToolBarsCustomizeDialog::GetFlags(this);
  if ( result == 11 )
  {
    for ( i = 0; i < 76; ++i )
    {
      if ( !*(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 272) )
        sub_5CB9B0(*(_DWORD *)(dword_7906D4 + 4 * i + 4));
      result = i + 1;
    }
  }
  return result;
}


//======================================================================
// sub_42DCF0
// entry 0042dcf0  size 307  status ok
//======================================================================

int __thiscall sub_42DCF0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  if ( !(unsigned __int8)sub_43B250(dword_7906D4) || !(unsigned __int8)sub_637630(dword_162EE84) || byte_795F94 )
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
             *(_DWORD *)(dword_162EE80 + 4),
             0);
  *(this + 94) = 5;
  sub_5EAF00(4044);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 176))(this, 0);
  if ( operator new(0x20u) )
    v2 = sub_6010A0(*(_DWORD *)(dword_162EE80 + 4));
  else
    v2 = 0;
  sub_5F5D50(v2);
  return (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
}


//======================================================================
// sub_42DE30
// entry 0042de30  size 200  status ok
//======================================================================

bool __thiscall sub_42DE30(void *this)
{
  double v2; // st7
  double v3; // [esp+10h] [ebp-18h]

  if ( !(unsigned __int8)sub_5CD8B0(this) )
    return 0;
  v3 = (double)sub_6377B0(dword_162EE84);
  if ( 0.25 <= 0.5 )
    v2 = v3 - v3 * ((0.5 - 0.25) / 0.5);
  else
    v2 = (1.0 - v3) * ((0.25 - 0.5) / 0.5) + v3;
  return v2 * 256.0 >= (double)(int)sub_62FBF0(256);
}


//======================================================================
// sub_42DF00
// entry 0042df00  size 840  status ok
//======================================================================

LONG __thiscall sub_42DF00(CFormView *this, int a2, int a3)
{
  LONG result; // eax
  char v4; // [esp+0h] [ebp-28h]
  unsigned __int8 v6; // [esp+13h] [ebp-15h]
  CImageDisplay *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  result = dword_7906D4;
  v8 = *(_DWORD *)(dword_7906D4 + 2776);
  if ( v8 != -1
    && ((v7 = (CImageDisplay *)sub_5DCB00(v8), result = CImageDisplay::GetDisplayFormat(v7)->rcSource.left, result == 2)
     || (result = (LONG)CImageDisplay::GetDisplayFormat(v7), *(_DWORD *)result == 3)
      ? (v4 = 1)
      : (v4 = 0),
        v4 && (v6 = *(_BYTE *)(sub_5DCB00(v8) + 1184), (result = v6) == 0) && (dword_7947B0 || dword_7947AC)) )
  {
    if ( *(_DWORD *)(dword_7906D4 + 2756) )
    {
      if ( *(int *)(dword_7906D4 + 2780) >= 3 )
      {
        sub_62FDE0("*** Stickman saying HotRollBanter()\n", v4);
        if ( a2 )
        {
          if ( a3 != -1 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
        }
        return CFormView::accHitTest(this, 53225, a2, 0);
      }
      sub_62FDE0("*** Stickman saying RegularBanter()\n", v4);
      if ( a2 && a3 != -1 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
      return CFormView::accHitTest(this, 53000, a2, 0);
    }
    if ( *(int *)(dword_7906D4 + 2780) >= 3 )
    {
      sub_62FDE0("*** Stickman saying HotRollBanter()\n", v4);
      if ( a2 && a3 != -1 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
      return CFormView::accHitTest(this, 53225, a2, 0);
    }
    if ( *(_DWORD *)(dword_7906D4 + 2744) == *(_DWORD *)(dword_7906D4 + 2740)
      && sub_434F90(dword_7906D4) > 1
      && (*(_DWORD *)(dword_7906D4 + 2796) == 1 || *(_DWORD *)(dword_7906D4 + 2796) == 4) )
    {
      sub_62FDE0("*** Stickman saying SameShooterBanter()\n", v4);
      if ( a2 && a3 != -1 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
      return CFormView::accHitTest(this, 54550, a2, 0);
    }
    else
    {
      if ( *(_DWORD *)(dword_7906D4 + 2744) == *(_DWORD *)(dword_7906D4 + 2740) || *(_DWORD *)(dword_7906D4 + 2748) )
      {
        sub_62FDE0("*** Stickman saying RegularBanter()\n", v4);
        if ( a2 && a3 != -1 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
        return CFormView::accHitTest(this, 53000, a2, 0);
      }
      sub_62FDE0("*** Stickman saying NewShooterBanter()\n", v4);
      if ( a2 && a3 != -1 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
      return CFormView::accHitTest(this, 53275, a2, 0);
    }
  }
  else
  {
    if ( a2 && a3 != -1 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
    if ( a2 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  }
  return result;
}


//======================================================================
// sub_42E250
// entry 0042e250  size 612  status ok
//======================================================================

int __thiscall sub_42E250(CFormView *this, int a2, int a3)
{
  int result; // eax
  char v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+0h] [ebp-10h]

  if ( *(_DWORD *)(dword_7906D4 + 2756) )
  {
    v5 = *(_DWORD *)(dword_7906D4 + 2756) - 4;
    switch ( *(_DWORD *)(dword_7906D4 + 2756) )
    {
      case 4:
        sub_62FDE0("*** Stickman saying WantFour()\n", v5);
        result = CFormView::accHitTest(this, 53575, a2, 0);
        break;
      case 5:
        sub_62FDE0("*** Stickman saying WantFive()\n", v5);
        result = CFormView::accHitTest(this, 53675, a2, 0);
        break;
      case 6:
        sub_62FDE0("*** Stickman saying WantSix()\n", v5);
        result = CFormView::accHitTest(this, 53750, a2, 0);
        break;
      case 8:
        sub_62FDE0("*** Stickman saying WantEight()\n", v5);
        result = CFormView::accHitTest(this, 53850, a2, 0);
        break;
      case 9:
        sub_62FDE0("*** Stickman saying WantNine()\n", v5);
        result = CFormView::accHitTest(this, 53950, a2, 0);
        break;
      case 0xA:
        sub_62FDE0("*** Stickman saying WantTen()\n", v5);
        result = CFormView::accHitTest(this, 54025, a2, 0);
        break;
      default:
        sub_62FDE0("*** Stickman saying DiceOut()\n", v5);
        if ( a2 && a3 != -1 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
        return CFormView::accHitTest(this, 53325, a2, 0);
    }
  }
  else
  {
    sub_62FDE0("*** Stickman saying DiceOut()\n", v4);
    if ( a2 )
    {
      if ( a3 != -1 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
    }
    return CFormView::accHitTest(this, 53325, a2, 0);
  }
  return result;
}


//======================================================================
// sub_42E4D0
// entry 0042e4d0  size 892  status ok
//======================================================================

int __thiscall sub_42E4D0(CFormView *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-10h]

  v4 = *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) - 2;
  switch ( *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) )
  {
    case 2:
      sub_62FDE0("*** Stickman saying TwoLoser()\n", v4);
      result = CFormView::accHitTest(this, 53375, a2, 0);
      break;
    case 3:
      sub_62FDE0("*** Stickman saying ThreeLoser()\n", v4);
      result = CFormView::accHitTest(this, 53425, a2, 0);
      break;
    case 4:
      sub_62FDE0("*** Stickman saying PointIsFour()\n", v4);
      result = CFormView::accHitTest(this, 53550, a2, 0);
      break;
    case 5:
      sub_62FDE0("*** Stickman saying PointIsFive()\n", v4);
      result = CFormView::accHitTest(this, 53650, a2, 0);
      break;
    case 6:
      sub_62FDE0("*** Stickman saying PointIsSix()\n", v4);
      result = CFormView::accHitTest(this, 53725, a2, 0);
      break;
    case 7:
      sub_62FDE0("*** Stickman saying NaturalSeven()\n", v4);
      result = CFormView::accHitTest(this, 53175, a2, 0);
      break;
    case 8:
      sub_62FDE0("*** Stickman saying PointIsEight()\n", v4);
      result = CFormView::accHitTest(this, 53825, a2, 0);
      break;
    case 9:
      sub_62FDE0("*** Stickman saying PointIsNine()\n", v4);
      result = CFormView::accHitTest(this, 53925, a2, 0);
      break;
    case 10:
      sub_62FDE0("*** Stickman saying PointIsTen()\n", v4);
      result = CFormView::accHitTest(this, 54000, a2, 0);
      break;
    case 11:
      sub_62FDE0("*** Stickman saying NaturalEleven()\n", v4);
      result = CFormView::accHitTest(this, 53200, a2, 0);
      break;
    case 12:
      sub_62FDE0("*** Stickman saying TwelveLoser()\n", v4);
      result = CFormView::accHitTest(this, 53475, a2, 0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\crapsdisplay.cpp", 1725);
      if ( a2 )
      {
        if ( a3 != -1 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
        result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
      }
      break;
  }
  return result;
}


//======================================================================
// sub_42E880
// entry 0042e880  size 1590  status ok
//======================================================================

int __thiscall sub_42E880(CFormView *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-30h]

  v4 = *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) - 2;
  switch ( *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) )
  {
    case 2:
      if ( (unsigned __int8)sub_436A00(4) )
        goto LABEL_24;
      sub_62FDE0("*** Stickman saying RollTwo()\n", v4);
      result = CFormView::accHitTest(this, 53350, a2, 0);
      break;
    case 3:
      if ( (unsigned __int8)sub_436A00(4) )
        goto LABEL_24;
      sub_62FDE0("*** Stickman saying RollThree()\n", v4);
      result = CFormView::accHitTest(this, 53400, a2, 0);
      break;
    case 4:
      if ( *(_DWORD *)(dword_7906D4 + 2764) == *(_DWORD *)(dword_7906D4 + 2768) )
      {
        sub_62FDE0("*** Stickman saying HardFour()\n", v4);
        result = CFormView::accHitTest(this, 53600, a2, 0);
      }
      else
      {
        sub_62FDE0("*** Stickman saying RollFour()\n", v4);
        result = CFormView::accHitTest(this, 53525, a2, 0);
      }
      break;
    case 5:
      sub_62FDE0("*** Stickman saying RollFive()\n", v4);
      result = CFormView::accHitTest(this, 53625, a2, 0);
      break;
    case 6:
      if ( *(_DWORD *)(dword_7906D4 + 2764) == *(_DWORD *)(dword_7906D4 + 2768) )
      {
        sub_62FDE0("*** Stickman saying HardSix()\n", v4);
        result = CFormView::accHitTest(this, 53775, a2, 0);
      }
      else
      {
        sub_62FDE0("*** Stickman saying RollSix()\n", v4);
        result = CFormView::accHitTest(this, 53700, a2, 0);
      }
      break;
    case 7:
      sub_62FDE0("*** Stickman saying SevenOut()\n", v4);
      result = CFormView::accHitTest(this, 53300, a2, 0);
      break;
    case 8:
      if ( *(_DWORD *)(dword_7906D4 + 2764) == *(_DWORD *)(dword_7906D4 + 2768) )
      {
        sub_62FDE0("*** Stickman saying HardEight()\n", v4);
        result = CFormView::accHitTest(this, 53875, a2, 0);
      }
      else
      {
        sub_62FDE0("*** Stickman saying RollEight()\n", v4);
        result = CFormView::accHitTest(this, 53800, a2, 0);
      }
      break;
    case 9:
      sub_62FDE0("*** Stickman saying RollNine()\n", v4);
      result = CFormView::accHitTest(this, 53900, a2, 0);
      break;
    case 10:
      if ( *(_DWORD *)(dword_7906D4 + 2764) == *(_DWORD *)(dword_7906D4 + 2768) )
      {
        sub_62FDE0("*** Stickman saying HardTen()\n", v4);
        result = CFormView::accHitTest(this, 54050, a2, 0);
      }
      else
      {
        sub_62FDE0("*** Stickman saying RollTen()\n", v4);
        result = CFormView::accHitTest(this, 53975, a2, 0);
      }
      break;
    case 11:
      sub_62FDE0("*** Stickman saying RollEleven()\n", v4);
      result = CFormView::accHitTest(this, 54075, a2, 0);
      break;
    case 12:
      if ( (unsigned __int8)sub_436A00(4) )
      {
LABEL_24:
        sub_62FDE0("*** Stickman saying ComeBoxLoser()\n", v4);
        result = CFormView::accHitTest(this, 53500, a2, 0);
      }
      else
      {
        result = sub_42F040((char)this, a2, -1);
      }
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\crapsdisplay.cpp", 1809);
      if ( a2 )
      {
        if ( a3 != -1 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, a3);
        result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
      }
      break;
  }
  return result;
}


//======================================================================
// sub_42EEF0
// entry 0042eef0  size 86  status ok
//======================================================================

int __thiscall sub_42EEF0(CFormView *this, int a2, int a3)
{
  if ( *(_DWORD *)(dword_7906D4 + 2756) )
    return sub_42E880(this, *(_DWORD *)(dword_162EE80 + 4), -1);
  else
    return sub_42E4D0(this, *(_DWORD *)(dword_162EE80 + 4), -1);
}


//======================================================================
// sub_42F040
// entry 0042f040  size 74  status ok
//======================================================================

int __fastcall sub_42F040(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying RollTwelve()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53450, a3, 0);
}


//======================================================================
// sub_42F090
// entry 0042f090  size 98  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_42F090(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CrapsGame::`vftable';
  sub_57AE30(dword_793578);
  return this;
}


//======================================================================
// sub_42F120
// entry 0042f120  size 18  status ok
//======================================================================

_BYTE *__thiscall sub_42F120(_BYTE *this)
{
  *(this + 4) = 0;
  return this;
}


//======================================================================
// sub_42F140
// entry 0042f140  size 230  status ok
//======================================================================

int __thiscall sub_42F140(_BYTE *this, int a2)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 22) = 0;
  *(this + 23) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_7906D0 + 4) + 8))(
             *(_DWORD *)(dword_7906D0 + 4),
             500,
             a2);
  sub_434620(dword_7906D4, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7906D0 + 4) + 8))(
           *(_DWORD *)(dword_7906D0 + 4),
           1,
           0);
}


//======================================================================
// sub_42F230
// entry 0042f230  size 2137  status ok
//======================================================================

char __thiscall sub_42F230(_BYTE *this)
{
  char result; // al
  __int64 v2; // [esp-8h] [ebp-88h]
  int v3; // [esp+0h] [ebp-80h]
  int v6; // [esp+10h] [ebp-70h]
  int v7; // [esp+18h] [ebp-68h]
  int v8; // [esp+1Ch] [ebp-64h]
  int v9; // [esp+28h] [ebp-58h]
  int v10; // [esp+2Ch] [ebp-54h]
  CImageDisplay *v11; // [esp+30h] [ebp-50h]
  int v12; // [esp+44h] [ebp-3Ch]
  CImageDisplay *v13; // [esp+48h] [ebp-38h]
  CImageDisplay *v14; // [esp+58h] [ebp-28h]
  int v15; // [esp+68h] [ebp-18h]
  int i; // [esp+78h] [ebp-8h]
  int v17; // [esp+7Ch] [ebp-4h]
  int v18; // [esp+7Ch] [ebp-4h]

  sub_4299B0((_DWORD **)dword_7906DC);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  if ( *(_DWORD *)(dword_7906D4 + 2788) != -1 )
    return sub_430220(this);
  if ( *(this + 4) )
  {
    sub_434C40(dword_7906D4);
    v17 = sub_4351B0(dword_7906D4);
    if ( *((_BYTE *)dword_162EE84 + 37) && v17 != -1 )
    {
      v14 = (CImageDisplay *)sub_5DCB00(v17);
      if ( CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v17) + 1185) = 1;
        v17 = sub_4351B0(dword_7906D4);
      }
    }
    if ( v17 == -1 )
    {
      if ( !*(this + 23) )
      {
        sub_436460(dword_7906D4);
        *(this + 23) = 1;
      }
      if ( (unsigned __int8)sub_436A90(dword_7906D4) )
      {
        if ( *(this + 7) )
        {
          sub_5F2870(dword_162EE80);
          *(this + 9) = 0;
          sub_57AE30(dword_793578);
          sub_434BD0(-1, 0);
          if ( (unsigned __int8)sub_4343D0(dword_7906D4)
            || *(_DWORD *)(dword_7906D4 + 2740) == -1
            || ((v11 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740)),
                 CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2)
             || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3
              ? (v3 = 1)
              : (v3 = 0),
                !(_BYTE)v3) )
          {
            if ( *(this + 8) )
            {
              *(this + 7) = 0;
              return sub_436B80(v3);
            }
            else
            {
              *(this + 8) = 1;
              v10 = dword_7906D4;
              *(_DWORD *)(dword_7906D4 + 2788) = 6;
              *(_DWORD *)(v10 + 2792) = 4;
              return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                       *(_DWORD *)(dword_162EE80 + 4),
                       1,
                       0);
            }
          }
          else
          {
            *(this + 7) = 0;
            return sub_42A090((_DWORD **)dword_7906DC);
          }
        }
        else
        {
          *(this + 7) = 1;
          v12 = dword_7906D4;
          *(_DWORD *)(dword_7906D4 + 2788) = 0;
          *(_DWORD *)(v12 + 2792) = -1;
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                   *(_DWORD *)(dword_162EE80 + 4),
                   1,
                   0);
        }
      }
      else if ( *(this + 9) )
      {
        if ( *(this + 10) )
        {
          if ( *(this + 11) )
          {
            v18 = sub_436C80(dword_7906D4);
            if ( v18 == -1 )
            {
              if ( *(this + 12) )
              {
                if ( *(this + 13) )
                {
                  if ( *(this + 14) )
                  {
                    if ( *(this + 15) )
                    {
                      if ( *(this + 16) )
                      {
                        if ( *(this + 17) )
                        {
                          if ( *(this + 18) )
                          {
                            if ( *(this + 19) )
                            {
                              if ( *(this + 20) )
                              {
                                if ( !(unsigned __int8)sub_5DA7B0(dword_7906D0) || *(this + 21) )
                                {
                                  if ( *(this + 22) )
                                  {
                                    return sub_42F140(this, 0);
                                  }
                                  else
                                  {
                                    *(this + 22) = 1;
                                    sub_430000(this);
                                    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4)
                                                                                      + 8))(
                                             *(_DWORD *)(dword_162EE80 + 4),
                                             1,
                                             0);
                                  }
                                }
                                else
                                {
                                  *(this + 21) = 1;
                                  v6 = dword_7906D4;
                                  *(_DWORD *)(dword_7906D4 + 2788) = 3;
                                  *(_DWORD *)(v6 + 2792) = -1;
                                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4)
                                                                                    + 8))(
                                           *(_DWORD *)(dword_162EE80 + 4),
                                           1,
                                           0);
                                }
                              }
                              else
                              {
                                *(this + 20) = 1;
                                return sub_42BCC0();
                              }
                            }
                            else
                            {
                              result = sub_42ACD0((_DWORD *)dword_7906DC);
                              if ( !result )
                              {
                                *(this + 19) = 1;
                                return sub_42BA50();
                              }
                            }
                          }
                          else
                          {
                            result = sub_42ACD0((_DWORD *)dword_7906DC);
                            if ( !result )
                            {
                              *(this + 18) = 1;
                              return sub_42B030((_DWORD *)dword_7906DC);
                            }
                          }
                        }
                        else
                        {
                          result = sub_42ACD0((_DWORD *)dword_7906DC);
                          if ( !result )
                          {
                            *(this + 17) = 1;
                            sub_43B290(dword_7906D4);
                            return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
                                     *(_DWORD *)(dword_162EE80 + 4),
                                     0);
                          }
                        }
                      }
                      else
                      {
                        *(this + 16) = 1;
                        return sub_42AD90((_DWORD **)dword_7906DC);
                      }
                    }
                    else
                    {
                      result = sub_42ACD0((_DWORD *)dword_7906DC);
                      if ( !result )
                      {
                        *(this + 15) = 1;
                        return sub_42AC20((void *)dword_7906DC);
                      }
                    }
                  }
                  else
                  {
                    *(this + 14) = 1;
                    return sub_42A990((_DWORD **)dword_7906DC);
                  }
                }
                else
                {
                  *(this + 13) = 1;
                  if ( *((_BYTE *)dword_162EE84 + 37) )
                    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
                             *(_DWORD *)(dword_162EE80 + 4),
                             20);
                  else
                    return sub_42BDE0((void *)dword_7906DC);
                }
              }
              else
              {
                sub_434BD0(-1, 0);
                *(this + 12) = 1;
                v7 = dword_7906D4;
                *(_DWORD *)(dword_7906D4 + 2788) = 1;
                *(_DWORD *)(v7 + 2792) = -1;
                return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                         *(_DWORD *)(dword_162EE80 + 4),
                         1,
                         0);
              }
            }
            else
            {
              sub_434BD0(v18, 0);
              return sub_42FD50(v18);
            }
          }
          else
          {
            *(this + 11) = 1;
            for ( i = 0; i < 4; ++i )
            {
              v2 = sub_64C8A0(0, 0);
              sub_5DCB00(i);
              sub_5D6050(v2, HIDWORD(v2));
            }
            result = sub_4373C0(&dword_790370, 8);
            if ( !result )
            {
              result = sub_4373C0(&dword_790470, 19);
              if ( !result )
                return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
                         *(_DWORD *)(dword_162EE80 + 4),
                         0);
            }
          }
        }
        else
        {
          *(this + 10) = 1;
          if ( (unsigned __int8)sub_434AF0(dword_7906D4) )
            sub_42A4A0(
              (CMFCToolBarsCustomizeDialog **)dword_7906DC,
              *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764));
          if ( (unsigned __int8)sub_436D40(dword_7906D4) )
          {
            v8 = dword_7906D4;
            *(_DWORD *)(dword_7906D4 + 2788) = 8;
            *(_DWORD *)(v8 + 2792) = 4;
            return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                     *(_DWORD *)(dword_162EE80 + 4),
                     1,
                     0);
          }
          else
          {
            return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7906D0 + 4) + 28))(
                     *(_DWORD *)(dword_7906D0 + 4),
                     0);
          }
        }
      }
      else
      {
        *(this + 9) = 1;
        v9 = dword_7906D4;
        *(_DWORD *)(dword_7906D4 + 2788) = 7;
        *(_DWORD *)(v9 + 2792) = 4;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    else
    {
      v13 = (CImageDisplay *)sub_5DCB00(v17);
      if ( CImageDisplay::GetDisplayFormat(v13)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v13)->rcSource.left == 3 )
      {
        sub_434BD0(v17, 1);
      }
      else
      {
        sub_434BD0(v17, 0);
      }
      return sub_42FA90(v17);
    }
  }
  else
  {
    *(this + 4) = 1;
    v15 = dword_7906D4;
    *(_DWORD *)(dword_7906D4 + 2788) = 4;
    *(_DWORD *)(v15 + 2792) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
             *(_DWORD *)(dword_162EE80 + 4),
             1,
             0);
  }
  return result;
}


//======================================================================
// sub_42FA90
// entry 0042fa90  size 694  status ok
//======================================================================

int __thiscall sub_42FA90(_BYTE *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v9; // [esp+Ch] [ebp-18h]
  CImageDisplay *v10; // [esp+18h] [ebp-Ch]

  v10 = (CImageDisplay *)sub_4347F0(dword_7906D4);
  if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(11, &unk_711228);
      sub_43B830(1);
      *(_BYTE *)(dword_7906D4 + 2773) = 0;
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    v2 = sub_5DCB00(a2);
    if ( (unsigned __int8)sub_5D5840(v2) )
      goto LABEL_14;
    if ( (unsigned __int8)sub_5DA7B0(dword_7906D0) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
    if ( (unsigned __int8)sub_4349B0(a2) )
    {
LABEL_14:
      sub_5DB7D0(-180, 170);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7906D0 + 4) + 8))(
               *(_DWORD *)(dword_7906D0 + 4),
               2,
               0);
    }
    else
    {
      v4 = sub_5DCB00(a2);
      return sub_5DBB70(v4);
    }
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 5) )
    {
      *(this + 5) = 0;
      v6 = sub_5DCB00(a2);
      if ( (unsigned __int8)sub_5D5840(v6) )
      {
        sub_428000((void *)dword_7906E0, a2);
        *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
        v9 = dword_7906D4;
        *(_DWORD *)(dword_7906D4 + 2788) = 2;
        *(_DWORD *)(v9 + 2792) = a2;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
      else
      {
        if ( (unsigned __int8)sub_5DA7B0(dword_7906D0) || (unsigned __int8)sub_4349B0(a2) )
          *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
        else
          sub_5D9570(a2);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    else
    {
      *(this + 5) = 1;
      v5 = sub_637810(2);
      return sub_5DA360(v5);
    }
  }
}


//======================================================================
// sub_42FD50
// entry 0042fd50  size 675  status ok
//======================================================================

int __stdcall sub_42FD50(int a1)
{
  int v1; // eax
  int v3; // eax
  __int64 v4; // [esp-8h] [ebp-5Ch]
  int v5; // [esp+0h] [ebp-54h]
  int v6; // [esp+10h] [ebp-44h]
  int v7; // [esp+1Ch] [ebp-38h]
  int v8; // [esp+30h] [ebp-24h]
  int v9; // [esp+34h] [ebp-20h]
  int v10; // [esp+38h] [ebp-1Ch]
  __int64 v11; // [esp+3Ch] [ebp-18h] BYREF
  int v12; // [esp+44h] [ebp-10h]
  char v13; // [esp+4Bh] [ebp-9h]
  int i; // [esp+4Ch] [ebp-8h]
  int v15; // [esp+50h] [ebp-4h]

  v15 = 0;
  v9 = 0;
  v11 = sub_64C8A0(0, 0);
  v7 = sub_5DCB00(a1);
  v10 = *(char *)(sub_5D52E0(v7) + 42);
  v12 = -1;
  v13 = 0;
  for ( i = 75; i > -1; --i )
  {
    v1 = pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4));
    if ( sub_438A10(v1) == 1 )
      sub_42C340(*(_DWORD *)(dword_7906DC + 4 * i + 20));
  }
  if ( (unsigned __int8)sub_4349B0(a1) )
  {
    for ( i = 75; i > -1; --i )
    {
      if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
      {
        v6 = sub_5DCB00(a1);
        v12 = *(char *)(sub_5D52E0(v6) + 42);
        if ( v10 != v12 && !v12 )
          v13 = 1;
        if ( v13 )
          break;
        v3 = pairNode::raw_length(*(pairNode **)(dword_7906D4 + 4 * i + 4));
        v8 = sub_438A10(v3);
        if ( v8 == 1 )
          ++v15;
        if ( !v8 )
          ++v9;
        sub_43CD40(a1, v8);
      }
    }
    if ( v13 )
    {
      v5 = sub_5DCB00(a1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, -1);
      v4 = sub_64C8A0(0, 0);
      sub_5DCB00(a1);
      sub_5D6050(v4, HIDWORD(v4));
    }
    *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
    sub_5DCB00(a1);
    sub_5D6020(&v11);
    if ( (_DWORD)v11 || v15 || v9 )
      return sub_42A820((_DWORD **)dword_7906DC, a1);
    else
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
               *(_DWORD *)(dword_162EE80 + 4),
               15);
  }
  else
  {
    *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 28))(
             *(_DWORD *)(dword_162EE80 + 4),
             15);
  }
}


//======================================================================
// sub_430000
// entry 00430000  size 542  status ok
//======================================================================

int __thiscall sub_430000(void *this)
{
  int result; // eax

  if ( !(unsigned __int8)sub_434AF0(dword_7906D4) )
    sub_42A4A0(
      (CMFCToolBarsCustomizeDialog **)dword_7906DC,
      *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764));
  sub_42A270((_DWORD *)dword_7906DC);
  if ( (unsigned __int8)sub_434AF0(dword_7906D4) )
  {
    result = dword_7906D4;
    *(_DWORD *)(dword_7906D4 + 2756) = *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764);
  }
  else if ( (unsigned __int8)sub_437150(dword_7906D4, this) )
  {
    result = dword_7906D4;
    ++*(_DWORD *)(dword_7906D4 + 2780);
    *(_DWORD *)(dword_7906D4 + 2796) = 4;
  }
  else if ( (unsigned __int8)sub_437250(dword_7906D4) )
  {
    --*(_DWORD *)(dword_7906D4 + 2780);
    result = dword_7906D4;
    *(_DWORD *)(dword_7906D4 + 2796) = 3;
  }
  else if ( (unsigned __int8)sub_437200(dword_7906D4) )
  {
    ++*(_DWORD *)(dword_7906D4 + 2780);
    *(_DWORD *)(dword_7906D4 + 2796) = 1;
    result = dword_7906D4;
    *(_DWORD *)(dword_7906D4 + 2756) = 0;
  }
  else
  {
    result = sub_437340(dword_7906D4);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(dword_7906D4 + 2796) = 2;
      *(_DWORD *)(dword_7906D4 + 2780) = 0;
      *(_BYTE *)(dword_7906D4 + 2752) = 0;
      *(_DWORD *)(dword_7906D4 + 2756) = 0;
      result = (unsigned __int8)sub_5DA7B0(dword_7906D0);
      if ( (_BYTE)result )
        return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 724))(dword_7906D0);
    }
  }
  return result;
}


//======================================================================
// sub_430220
// entry 00430220  size 3837  status ok
//======================================================================

LONG sub_430220()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  LONG result; // eax
  int v5; // eax
  char v6; // [esp+0h] [ebp-1BCh]
  int v7; // [esp+0h] [ebp-1BCh]
  bool v9; // [esp+8h] [ebp-1B4h]
  int v10; // [esp+Ch] [ebp-1B0h]
  bool v12; // [esp+14h] [ebp-1A8h]
  bool v13; // [esp+18h] [ebp-1A4h]
  int v14; // [esp+1Ch] [ebp-1A0h]
  bool v16; // [esp+24h] [ebp-198h]
  bool v17; // [esp+28h] [ebp-194h]
  int v18; // [esp+2Ch] [ebp-190h]
  bool v20; // [esp+34h] [ebp-188h]
  bool v21; // [esp+38h] [ebp-184h]
  bool v22; // [esp+3Ch] [ebp-180h]
  bool v23; // [esp+40h] [ebp-17Ch]
  int v25; // [esp+48h] [ebp-174h]
  bool v27; // [esp+50h] [ebp-16Ch]
  CImageDisplay *v28; // [esp+5Ch] [ebp-160h]
  int v29; // [esp+68h] [ebp-154h]
  int v30; // [esp+6Ch] [ebp-150h]
  CFormView *v31; // [esp+70h] [ebp-14Ch]
  int v32; // [esp+74h] [ebp-148h]
  int v33; // [esp+78h] [ebp-144h]
  int v34; // [esp+7Ch] [ebp-140h]
  int v35; // [esp+80h] [ebp-13Ch]
  int v36; // [esp+84h] [ebp-138h]
  CFormView *v37; // [esp+88h] [ebp-134h]
  int v38; // [esp+8Ch] [ebp-130h]
  CImageDisplay *v39; // [esp+90h] [ebp-12Ch]
  CImageDisplay *v40; // [esp+9Ch] [ebp-120h]
  CImageDisplay *v41; // [esp+A8h] [ebp-114h]
  CImageDisplay *v42; // [esp+B4h] [ebp-108h]
  CImageDisplay *v43; // [esp+C0h] [ebp-FCh]
  CImageDisplay *v44; // [esp+CCh] [ebp-F0h]
  CImageDisplay *v45; // [esp+D8h] [ebp-E4h]
  CImageDisplay *v46; // [esp+E4h] [ebp-D8h]
  CImageDisplay *v47; // [esp+F0h] [ebp-CCh]
  CImageDisplay *v48; // [esp+100h] [ebp-BCh]
  CImageDisplay *v49; // [esp+10Ch] [ebp-B0h]
  CImageDisplay *v50; // [esp+118h] [ebp-A4h]
  CImageDisplay *v51; // [esp+124h] [ebp-98h]
  CImageDisplay *v52; // [esp+134h] [ebp-88h]
  CImageDisplay *v53; // [esp+144h] [ebp-78h]
  int v54; // [esp+168h] [ebp-54h]
  int v55; // [esp+16Ch] [ebp-50h]
  int v56; // [esp+170h] [ebp-4Ch]
  _DWORD v57[4]; // [esp+174h] [ebp-48h] BYREF
  double v58; // [esp+184h] [ebp-38h]
  double v59; // [esp+18Ch] [ebp-30h]
  int v60; // [esp+194h] [ebp-28h]
  int v61; // [esp+198h] [ebp-24h]
  double v62; // [esp+19Ch] [ebp-20h]
  int v63; // [esp+1A8h] [ebp-14h]
  double v64; // [esp+1ACh] [ebp-10h]
  int v65; // [esp+1B4h] [ebp-8h]
  int v66; // [esp+1B8h] [ebp-4h]

  v60 = -1;
  v61 = -1;
  v62 = 0.0;
  v64 = 0.5;
  v66 = *(_DWORD *)(dword_7906D4 + 2776);
  v54 = 10 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0);
  v63 = 5 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0);
  if ( (unsigned __int8)sub_5CD890(*(_DWORD *)(dword_7906DC + 360)) )
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
             *(_DWORD *)(dword_162EE80 + 4),
             1,
             0);
  v56 = *(_DWORD *)(dword_7906D4 + 2792);
  switch ( *(_DWORD *)(dword_7906D4 + 2788) )
  {
    case 0:
      if ( *(_DWORD *)(dword_7906D4 + 2740) < 4u )
      {
        v64 = 0.5;
        v53 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740));
        v27 = CImageDisplay::GetDisplayFormat(v53)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v53)->rcSource.left == 3;
        v61 = v27 ? 2019 : 2017;
        v52 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2740));
        if ( CImageDisplay::GetDisplayFormat(v52)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v52)->rcSource.left == 3 )
        {
          v25 = -1;
        }
        else
        {
          v25 = *(_DWORD *)(dword_7906D4 + 2740);
        }
        v56 = v25;
      }
      goto LABEL_118;
    case 1:
      v64 = 0.75;
      v55 = sub_43B310(dword_7906D4);
      v65 = sub_43B3F0(dword_7906D4);
      if ( v55 == -1 || *(_DWORD *)(sub_5DCB00(v55) + 1228) <= v63 )
      {
        if ( v65 != -1 && *(_DWORD *)(sub_5DCB00(v65) + 1228) < -v63 )
        {
          v43 = (CImageDisplay *)sub_5DCB00(v65);
          if ( CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 3 )
          {
            v14 = -1;
          }
          else
          {
            v14 = v65;
          }
          v56 = v14;
          if ( *(_DWORD *)(sub_5DCB00(v65) + 1228) >= -v54 )
          {
            v64 = 0.5;
            v41 = (CImageDisplay *)sub_5DCB00(v65);
            v12 = CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 3;
            v61 = v12 ? 1000 : 1026;
          }
          else
          {
            v64 = 1.0;
            v42 = (CImageDisplay *)sub_5DCB00(v65);
            v13 = CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 3;
            v61 = v13 ? 1033 : 1025;
          }
        }
      }
      else
      {
        v46 = (CImageDisplay *)sub_5DCB00(v55);
        if ( CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 3 )
        {
          v18 = -1;
        }
        else
        {
          v18 = v55;
        }
        v56 = v18;
        if ( *(_DWORD *)(sub_5DCB00(v55) + 1228) <= v54 )
        {
          v64 = 0.5;
          v44 = (CImageDisplay *)sub_5DCB00(v55);
          v16 = CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 3;
          v61 = v16 ? 1008 : 1028;
        }
        else
        {
          v64 = 1.0;
          v45 = (CImageDisplay *)sub_5DCB00(v55);
          v17 = CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 3;
          v61 = v17 ? 1034 : 1027;
        }
      }
      goto LABEL_118;
    case 2:
      v64 = 0.5;
      v51 = (CImageDisplay *)sub_5DCB00(v56);
      if ( CImageDisplay::GetDisplayFormat(v51)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v51)->rcSource.left == 3 )
      {
        v56 = -1;
      }
      if ( (unsigned __int8)sub_5DA7B0(dword_7906D0) && (int)sub_62FBF0(10) > 4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7906D0 + 712))(dword_7906D0, v66) )
        {
          v0 = sub_5DCB00(v66);
          if ( (unsigned __int8)sub_5D5920(v0) )
          {
            v64 = 1.0;
            v50 = (CImageDisplay *)sub_5DCB00(v66);
            v23 = CImageDisplay::GetDisplayFormat(v50)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v50)->rcSource.left == 3;
            v61 = v23 ? 1035 : 1010;
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7906D0 + 716))(dword_7906D0, v66) )
        {
          v1 = sub_5DCB00(v66);
          if ( (unsigned __int8)sub_5D58D0(v1) )
          {
            v64 = 1.0;
            v49 = (CImageDisplay *)sub_5DCB00(v66);
            v22 = CImageDisplay::GetDisplayFormat(v49)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v49)->rcSource.left == 3;
            v61 = v22 ? 1036 : 1011;
          }
        }
      }
      if ( (unsigned __int8)sub_43B5E0(v66) )
      {
        v48 = (CImageDisplay *)sub_5DCB00(v66);
        v21 = CImageDisplay::GetDisplayFormat(v48)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v48)->rcSource.left == 3;
        v61 = v21 ? 1040 : 1015;
      }
      if ( *(int *)(dword_7906D4 + 2780) >= 3 && *(_DWORD *)(dword_7906D4 + 2740) == v66 )
      {
        v64 = 0.5;
        v47 = (CImageDisplay *)sub_5DCB00(v66);
        v20 = CImageDisplay::GetDisplayFormat(v47)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v47)->rcSource.left == 3;
        v61 = v20 ? 2020 : 2018;
      }
      goto LABEL_118;
    case 3:
      if ( (unsigned __int8)sub_5DB190(dword_7906D0)
        && *(_DWORD *)(dword_7906D4 + 2768) + *(_DWORD *)(dword_7906D4 + 2764) == 7
        && sub_5DAC90(dword_7906D0) != -1 )
      {
        v2 = sub_5DAC90(dword_7906D0);
        v40 = (CImageDisplay *)sub_5DCB00(v2);
        if ( CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 3 )
        {
          v10 = -1;
        }
        else
        {
          v10 = sub_5DAC90(dword_7906D0);
        }
        v56 = v10;
        v3 = sub_5DAC90(dword_7906D0);
        v39 = (CImageDisplay *)sub_5DCB00(v3);
        v9 = CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 3;
        v61 = v9 ? 1042 : 1021;
        v64 = 1.0;
      }
      goto LABEL_118;
    case 4:
      v38 = dword_7906D4;
      *(_DWORD *)(dword_7906D4 + 2788) = -1;
      *(_DWORD *)(v38 + 2792) = -1;
      v36 = *(_DWORD *)(dword_7906D0 + 4);
      v37 = *(CFormView **)(dword_7906DC + 360);
      sub_62FDE0("*** Stickman saying NewShooterBanter()\n", v6);
      if ( v36 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v36 + 4))(v36, 1);
      return CFormView::accHitTest(v37, 53275, v36, 0);
    case 5:
      v35 = dword_7906D4;
      *(_DWORD *)(dword_7906D4 + 2788) = -1;
      *(_DWORD *)(v35 + 2792) = -1;
      return sub_42DF00(*(CFormView **)(dword_7906DC + 360), *(_DWORD *)(dword_7906D0 + 4), 1);
    case 6:
      v34 = dword_7906D4;
      *(_DWORD *)(dword_7906D4 + 2788) = -1;
      *(_DWORD *)(v34 + 2792) = -1;
      return sub_42E250(*(CFormView **)(dword_7906DC + 360), *(_DWORD *)(dword_162EE80 + 4), 1);
    case 7:
      v33 = dword_7906D4;
      *(_DWORD *)(dword_7906D4 + 2788) = -1;
      *(_DWORD *)(v33 + 2792) = -1;
      return sub_42EEF0(*(CFormView **)(dword_7906DC + 360), *(_DWORD *)(dword_162EE80 + 4), 1);
    case 8:
      v32 = dword_7906D4;
      *(_DWORD *)(dword_7906D4 + 2788) = -1;
      *(_DWORD *)(v32 + 2792) = -1;
      v30 = *(_DWORD *)(dword_162EE80 + 4);
      v31 = *(CFormView **)(dword_7906DC + 360);
      sub_62FDE0("*** Stickman saying OddsReturned()\n", v6);
      if ( v30 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 4))(v30, 1);
      return CFormView::accHitTest(v31, 54500, v30, 0);
    default:
LABEL_118:
      v29 = dword_7906D4;
      *(_DWORD *)(dword_7906D4 + 2788) = -1;
      *(_DWORD *)(v29 + 2792) = -1;
      if ( v56 != 4 )
        goto LABEL_122;
      if ( v60 == -1 )
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      sub_5CD7C0(v60, *(_DWORD *)(dword_162EE80 + 4), 0);
LABEL_122:
      if ( v61 == -1 || !sub_636730(dword_162EE84) )
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      if ( v56 > -1 )
      {
        v28 = (CImageDisplay *)sub_5DCB00(v56);
        if ( CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 3 )
        {
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                   *(_DWORD *)(dword_162EE80 + 4),
                   1,
                   0);
        }
      }
      if ( v56 == -1 )
        v7 = sub_636C50(dword_162EE84);
      else
        v7 = v56;
      v57[0] = v7;
      v57[1] = v61;
      v57[2] = -1;
      v58 = v62;
      v59 = v64;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
      v5 = sub_637810(2);
      result = sub_639390(v57, *(_DWORD *)(dword_162EE80 + 4), v5, 1);
      break;
  }
  return result;
}


//======================================================================
// sub_431180
// entry 00431180  size 74  status ok
//======================================================================

int __fastcall sub_431180(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying PassLineWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53250, a3, 0);
}


//======================================================================
// sub_4311D0
// entry 004311d0  size 74  status ok
//======================================================================

int __fastcall sub_4311D0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying ComeBetWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53025, a3, 0);
}


//======================================================================
// sub_431220
// entry 00431220  size 74  status ok
//======================================================================

int __fastcall sub_431220(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying PayWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54450, a3, 0);
}


//======================================================================
// sub_431270
// entry 00431270  size 74  status ok
//======================================================================

int __fastcall sub_431270(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying PayWinners()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54475, a3, 0);
}


//======================================================================
// sub_4312C0
// entry 004312c0  size 74  status ok
//======================================================================

int __fastcall sub_4312C0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying DontComeWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54375, a3, 0);
}


//======================================================================
// sub_431310
// entry 00431310  size 74  status ok
//======================================================================

int __fastcall sub_431310(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying DontPassWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54350, a3, 0);
}


//======================================================================
// sub_431360
// entry 00431360  size 74  status ok
//======================================================================

int __fastcall sub_431360(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying HardWayWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53125, a3, 0);
}


//======================================================================
// sub_4313B0
// entry 004313b0  size 74  status ok
//======================================================================

int __fastcall sub_4313B0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying PlaceBetWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53150, a3, 0);
}


//======================================================================
// sub_431400
// entry 00431400  size 74  status ok
//======================================================================

int __fastcall sub_431400(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying BigSixWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53075, a3, 0);
}


//======================================================================
// sub_431450
// entry 00431450  size 74  status ok
//======================================================================

int __fastcall sub_431450(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying BigEightWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53100, a3, 0);
}


//======================================================================
// sub_4314A0
// entry 004314a0  size 74  status ok
//======================================================================

int __fastcall sub_4314A0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying FieldBetWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 53050, a3, 0);
}


//======================================================================
// sub_4314F0
// entry 004314f0  size 74  status ok
//======================================================================

int __fastcall sub_4314F0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying BigRedWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54225, a3, 0);
}


//======================================================================
// sub_431540
// entry 00431540  size 74  status ok
//======================================================================

int __fastcall sub_431540(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying HornBetWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54525, a3, 0);
}


//======================================================================
// sub_431590
// entry 00431590  size 74  status ok
//======================================================================

int __fastcall sub_431590(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying BuyBetWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54300, a3, 0);
}


//======================================================================
// sub_4315E0
// entry 004315e0  size 74  status ok
//======================================================================

int __fastcall sub_4315E0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying AnyCrapsWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54100, a3, 0);
}


//======================================================================
// sub_431630
// entry 00431630  size 74  status ok
//======================================================================

int __fastcall sub_431630(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying CrapsTwoWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54150, a3, 0);
}


//======================================================================
// sub_431680
// entry 00431680  size 74  status ok
//======================================================================

int __fastcall sub_431680(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying CrapsTwelveWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54175, a3, 0);
}


//======================================================================
// sub_4316D0
// entry 004316d0  size 74  status ok
//======================================================================

int __fastcall sub_4316D0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying CrapsThreeWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54200, a3, 0);
}


//======================================================================
// sub_431720
// entry 00431720  size 74  status ok
//======================================================================

int __fastcall sub_431720(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying ElevenWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54125, a3, 0);
}


//======================================================================
// sub_431770
// entry 00431770  size 74  status ok
//======================================================================

int __fastcall sub_431770(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying WrongSevenWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54250, a3, 0);
}


//======================================================================
// sub_4317C0
// entry 004317c0  size 74  status ok
//======================================================================

int __fastcall sub_4317C0(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying LayBetWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54325, a3, 0);
}


//======================================================================
// sub_431810
// entry 00431810  size 74  status ok
//======================================================================

int __fastcall sub_431810(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying WrongTwoWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54400, a3, 0);
}


//======================================================================
// sub_431860
// entry 00431860  size 74  status ok
//======================================================================

int __fastcall sub_431860(char a1, int a2, int a3, int a4)
{
  CFormView *v5; // [esp+0h] [ebp-4h]

  sub_62FDE0("*** Stickman saying WrongThreeWinner()\n", a1);
  if ( a3 && a4 != -1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 4))(a3, a4);
  return CFormView::accHitTest(v5, 54425, a3, 0);
}


//======================================================================
// sub_4318B0
// entry 004318b0  size 96  status ok
//======================================================================

bool __thiscall sub_4318B0(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(6) && *(this + 692) + *(this + 691) == 6;
}


//======================================================================
// sub_431910
// entry 00431910  size 96  status ok
//======================================================================

bool __thiscall sub_431910(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(7) && *(this + 692) + *(this + 691) == 8;
}


//======================================================================
// sub_431970
// entry 00431970  size 96  status ok
//======================================================================

bool __thiscall sub_431970(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(14) && *(this + 692) + *(this + 691) == 11;
}


//======================================================================
// sub_4319D0
// entry 004319d0  size 96  status ok
//======================================================================

bool __thiscall sub_4319D0(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(12) && *(this + 692) + *(this + 691) == 2;
}


//======================================================================
// sub_431A30
// entry 00431a30  size 96  status ok
//======================================================================

bool __thiscall sub_431A30(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(13) && *(this + 692) + *(this + 691) == 3;
}


//======================================================================
// sub_431A90
// entry 00431a90  size 96  status ok
//======================================================================

bool __thiscall sub_431A90(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(15) && *(this + 692) + *(this + 691) == 12;
}


//======================================================================
// sub_431AF0
// entry 00431af0  size 96  status ok
//======================================================================

bool __thiscall sub_431AF0(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(16) && *(this + 692) + *(this + 691) == 7;
}


//======================================================================
// sub_431B50
// entry 00431b50  size 284  status ok
//======================================================================

bool __thiscall sub_431B50(_DWORD *this)
{
  return (unsigned __int8)sub_436A00(18)
      && (*(this + 692) + *(this + 691) == 2
       || *(this + 692) + *(this + 691) == 3
       || *(this + 692) + *(this + 691) == 11
       || *(this + 692) + *(this + 691) == 12);
}


//======================================================================
// sub_431C70
// entry 00431c70  size 149  status ok
//======================================================================

_DWORD *__thiscall sub_431C70(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &CrapsRoom::`vftable';
  sub_5F1AD0(4005);
  dword_7906D0 = (int)this;
  dword_7906D4 = 0;
  dword_7906D8 = 0;
  dword_7906DC = 0;
  dword_7906E0 = 0;
  return this;
}


//======================================================================
// sub_431D10
// entry 00431d10  size 324  status ok
//======================================================================

int __thiscall sub_431D10(_DWORD *this)
{
  *this = &CrapsRoom::`vftable';
  dword_7906D0 = 0;
  if ( dword_7906D4 )
    (**(void (__thiscall ***)(int, int))dword_7906D4)(dword_7906D4, 1);
  dword_7906D4 = 0;
  if ( dword_7906D8 )
    (**(void (__thiscall ***)(int, int))dword_7906D8)(dword_7906D8, 1);
  dword_7906D8 = 0;
  if ( dword_7906DC )
    (**(void (__thiscall ***)(int, int))dword_7906DC)(dword_7906DC, 1);
  dword_7906DC = 0;
  if ( dword_7906E0 )
    (**(void (__thiscall ***)(int, int))dword_7906E0)(dword_7906E0, 1);
  dword_7906E0 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_431E60
// entry 00431e60  size 500  status ok
//======================================================================

int __thiscall sub_431E60(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-4Ch]
  _AFX_OLE_STATE *v3; // [esp+8h] [ebp-48h]
  ATL::CCRTHeap *v4; // [esp+Ch] [ebp-44h]
  ATL::CCRTHeap *v5; // [esp+10h] [ebp-40h]
  int v6; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+18h] [ebp-38h]
  _DWORD *v9; // [esp+1Ch] [ebp-34h]
  _AFX_OLE_STATE *v10; // [esp+24h] [ebp-2Ch]
  ATL::CCRTHeap *v11; // [esp+2Ch] [ebp-24h]
  ATL::CCRTHeap *v12; // [esp+34h] [ebp-1Ch]
  void *v13; // [esp+3Ch] [ebp-14h]

  sub_5D8230();
  v13 = operator new(0xAF0u);
  if ( v13 )
    v6 = sub_434100(v13);
  else
    v6 = 0;
  dword_7906D4 = v6;
  sub_434460();
  v12 = (ATL::CCRTHeap *)operator new(0x18u);
  if ( v12 )
    v5 = sub_42F090(v12);
  else
    v5 = 0;
  dword_7906D8 = (int)v5;
  sub_42F120(v5);
  v11 = (ATL::CCRTHeap *)operator new(0x16Cu);
  if ( v11 )
    v4 = sub_428C20(v11);
  else
    v4 = 0;
  dword_7906DC = (int)v4;
  sub_428FE0(v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_7906E0 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &CrapsRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8, -1);
  return sub_42F140((_BYTE *)dword_7906D8, 0);
}


//======================================================================
// sub_432060
// entry 00432060  size 196  status ok
//======================================================================

int __stdcall sub_432060(int a1, int a2)
{
  if ( a2 == 100001 )
  {
    sub_5FE640(100006, 0);
    sub_5FE640(100009, 0);
    sub_5FE640(100007, 0);
    sub_5FE640(100008, 0);
    sub_5FE240(5017, -1, -1, 0);
  }
  else if ( a2 == 100055 )
  {
    sub_5FE640(100058, 0);
    sub_5FE240(5009, -1, -1, 0);
    sub_5FE240(5019, -1, -1, 0);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_432130
// entry 00432130  size 49  status ok
//======================================================================

int __thiscall sub_432130(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3202001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_432170
// entry 00432170  size 231  status ok
//======================================================================

int __stdcall sub_432170(int a1, int a2)
{
  CImageDisplay *v4; // [esp+10h] [ebp-14h]

  if ( sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2776)) )
  {
    v4 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_7906D4 + 2776));
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      if ( a1 == 3202002 )
      {
        sub_4362A0(*(_DWORD *)(dword_7906D4 + 2776));
      }
      else if ( a1 == 3202003 )
      {
        sub_42D3F0(*(_BYTE **)(dword_7906DC + 356));
      }
    }
  }
  return sub_5DC7D0(a1, a2);
}


//======================================================================
// sub_432260
// entry 00432260  size 35  status ok
//======================================================================

char __thiscall sub_432260(void *this)
{
  if ( dword_7906D4 )
    return sub_4346F0(dword_7906D4, this);
  else
    return 1;
}


//======================================================================
// sub_432290
// entry 00432290  size 462  status ok
//======================================================================

int __thiscall sub_432290(_DWORD **this)
{
  const CHAR *v2; // eax
  int v3; // eax
  const CHAR *v4; // [esp-8h] [ebp-34h]
  bool v5; // [esp+4h] [ebp-28h]
  CImageDisplay *v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+28h] [ebp-4h]

  v8 = *(_DWORD *)(dword_7906D4 + 2776);
  if ( (unsigned __int8)sub_5DF7B0(-1)
    && !*(_BYTE *)(dword_7906D4 + 2773)
    && (unsigned __int8)sub_4360C0(*(_DWORD *)(dword_7906D4 + 2776)) )
  {
    *(_BYTE *)(dword_7906D4 + 2773) = 1;
    sub_43B830(0);
    return sub_57C140(dword_793578);
  }
  else
  {
    sub_42A270((_DWORD *)dword_7906DC);
    v7 = (CImageDisplay *)sub_4347F0(dword_7906D4);
    v5 = CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3;
    if ( v5 && (unsigned __int8)sub_4349B0(v8) && (unsigned __int8)sub_4348E0(v8) )
    {
      v4 = (const CHAR *)sub_630F40("SID_CASINO_TABLEMINNOTMET_TITLE");
      v2 = (const CHAR *)sub_630F40("SID_CASINO_TABLEMINNOTMET_SHORT");
      return sub_62FF10(v2, v4, 0);
    }
    else
    {
      if ( (unsigned __int8)sub_4349B0(*(_DWORD *)(dword_7906D4 + 2776)) )
        *(_BYTE *)(sub_4347F0(dword_7906D4) + 1184) = 1;
      else
        *(_BYTE *)(sub_4347F0(dword_7906D4) + 1185) = 1;
      v3 = sub_4347F0(dword_7906D4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, v3);
      sub_5DB890(this);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
    }
  }
}


//======================================================================
// sub_432460
// entry 00432460  size 63  status ok
//======================================================================

int __thiscall sub_432460(_DWORD **this, char a2)
{
  sub_4342A0(a2 == 0);
  sub_5DB9B0(this);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 28))(*(this + 1), 0);
}


//======================================================================
// sub_4324A0
// entry 004324a0  size 50  status ok
//======================================================================

int __stdcall sub_4324A0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 229;
  v2[1] = 386;
  v2[2] = 535;
  v2[3] = 535;
  return v2[a1];
}


//======================================================================
// sub_4324E0
// entry 004324e0  size 50  status ok
//======================================================================

int __stdcall sub_4324E0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 306;
  v2[1] = 306;
  v2[2] = 242;
  v2[3] = 80;
  return v2[a1];
}


//======================================================================
// sub_432520
// entry 00432520  size 35  status ok
//======================================================================

int sub_432520()
{
  if ( dword_7906D4 )
    return sub_4347F0(dword_7906D4);
  else
    return 0;
}


//======================================================================
// sub_432550
// entry 00432550  size 77  status ok
//======================================================================

int __thiscall sub_432550(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 76; ++i )
  {
    if ( *(_DWORD *)(dword_7906DC + 4 * i + 20) != a2 )
      sub_5CD330(*(_DWORD *)(dword_7906DC + 4 * i + 20), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_4325A0
// entry 004325a0  size 338  status ok
//======================================================================

char __thiscall sub_4325A0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v10; // eax
  CImageDisplay *v12; // [esp+4h] [ebp-13Ch]
  CImageDisplay *v13; // [esp+8h] [ebp-138h]
  __int64 v14; // [esp+10h] [ebp-130h]
  char Destination[28]; // [esp+1Ch] [ebp-124h] BYREF
  char Buffer[260]; // [esp+38h] [ebp-108h] BYREF

  v13 = (CImageDisplay *)sub_5DCB00(a3);
  if ( !CImageDisplay::GetDisplayFormat(v13)->rcSource.left )
    return 0;
  v14 = sub_64C8A0(
          *(_DWORD *)(*(_DWORD *)(a2 + 376) + 32 * a3 + 72 + 8 * a4),
          *(_DWORD *)(*(_DWORD *)(a2 + 376) + 32 * a3 + 72 + 8 * a4 + 4));
  sub_64C8D0(v14, SHIDWORD(v14), Destination, 1, 1, 0);
  v12 = (CImageDisplay *)sub_5DCB00(a3);
  DisplayFormat = CImageDisplay::GetDisplayFormat(v12);
  sprintf(Buffer, "%s: %s", (const char *)&DisplayFormat->rcSource.top, Destination);
  sub_5ECC60(300);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)a5 + 180))(a5, Buffer);
  v10 = sub_5EF050(a5, this, v12, v13);
  sub_5ECC60(v10 + 20);
  return 1;
}


//======================================================================
// sub_432700
// entry 00432700  size 81  status ok
//======================================================================

int __thiscall sub_432700(void *this, int a2)
{
  int v3; // [esp-8h] [ebp-14h]
  int v4; // [esp-4h] [ebp-10h]
  _DWORD v5[2]; // [esp+4h] [ebp-8h] BYREF

  (*(void (__thiscall **)(void *, int, _DWORD *))(*(_DWORD *)this + 636))(this, a2, v5);
  v4 = v5[1];
  v3 = v5[0];
  sub_5DCB00(a2);
  sub_5D5CF0(v3, v4);
  return sub_4361E0(a2);
}


//======================================================================
// sub_432760
// entry 00432760  size 153  status ok
//======================================================================

int __stdcall sub_432760(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  char v7[8]; // [esp+4h] [ebp-1Ch] BYREF
  char v8[8]; // [esp+Ch] [ebp-14h] BYREF
  __int64 v9; // [esp+14h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-4h]

  v9 = sub_64C8A0(0, 0);
  result = a2;
  *(_QWORD *)a2 = v9;
  for ( i = 0; i < 76; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_7906D4 + 4 * i + 4) + 272) == -1 )
    {
      v3 = (_DWORD *)sub_5CB880(v8, a1);
      v4 = (int *)sub_64C5C0(v7, *v3, v3[1]);
      v5 = *v4;
      v6 = v4[1];
      *(_DWORD *)a2 = v5;
      *(_DWORD *)(a2 + 4) = v6;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_432800
// entry 00432800  size 22  status ok
//======================================================================

int __thiscall sub_432800(void *this)
{
  return sub_434240(dword_7906D4, this);
}


//======================================================================
// sub_432820
// entry 00432820  size 36  status ok
//======================================================================

int __thiscall sub_432820(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_432850
// entry 00432850  size 115  status ok
//======================================================================

int __stdcall sub_432850(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  _BYTE v10[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = sub_5DCB00(a1);
  v9 = *(_DWORD *)(v1 + 1240);
  v8 = *(_DWORD *)(v1 + 1236);
  sub_434200(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_434200(-1);
  *(_DWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 20) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_4328D0
// entry 004328d0  size 119  status ok
//======================================================================

int __stdcall sub_4328D0(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  _BYTE v10[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = sub_5DCB00(a1);
  v9 = *(_DWORD *)(v1 + 1224);
  v8 = *(_DWORD *)(v1 + 1220);
  sub_434200(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_434200(a1);
  *(_DWORD *)(v5 + 8) = v3;
  *(_DWORD *)(v5 + 12) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_432950
// entry 00432950  size 529  status ok
//======================================================================

void __stdcall sub_432950(char a1)
{
  int v1; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)(dword_7906D4 + 2776);
  if ( v1 == -1 )
    sub_5E9F20((char)"p != -1", "..\\Casino\\crapsroom.cpp", 285);
  sub_42A270((_DWORD *)dword_7906DC);
  if ( !*(_DWORD *)(dword_7906D4 + 2756) )
    goto LABEL_4;
  if ( !a1
    || !(unsigned __int8)sub_4369A0(v1, 4)
    && !(unsigned __int8)sub_435D40(v1)
    && !(unsigned __int8)sub_4369A0(v1, 5)
    && !(unsigned __int8)sub_435DE0(v1) )
  {
    sub_42A2B0((_DWORD *)dword_7906DC, 4);
    sub_42A2B0((_DWORD *)dword_7906DC, 5);
  }
  sub_435EE0(v1, 1, a1 == 0);
  sub_435FD0(v1, 1, a1 == 0);
  if ( (unsigned __int8)sub_4369A0(v1, 0) || (unsigned __int8)sub_4369A0(v1, 2) )
  {
    if ( a1 && (!(unsigned __int8)sub_4369A0(v1, 0) || (unsigned __int8)sub_4369A0(v1, 1)) )
    {
      if ( (unsigned __int8)sub_4369A0(v1, 2) )
      {
        if ( !(unsigned __int8)sub_4369A0(v1, 3) )
          sub_42A310((_DWORD *)dword_7906DC, 3);
      }
    }
    else
    {
      sub_42A310((_DWORD *)dword_7906DC, 1);
    }
  }
  else
  {
LABEL_4:
    sub_42A2B0((_DWORD *)dword_7906DC, 0);
    sub_42A2B0((_DWORD *)dword_7906DC, 2);
  }
}


//======================================================================
// sub_432B70
// entry 00432b70  size 81  status ok
//======================================================================

int __stdcall sub_432B70(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_7906DC + 4 * i + 20) + 376) == a1 )
      return *(_DWORD *)(dword_7906DC + 4 * i + 20);
  }
  return 0;
}


//======================================================================
// sub_432BD0
// entry 00432bd0  size 45  status ok
//======================================================================

int __thiscall sub_432BD0(void *this)
{
  int v1; // esi

  v1 = sub_434310(dword_7906D4);
  return v1 * (*(int (__thiscall **)(void *))(*(_DWORD *)this + 692))(this);
}


//======================================================================
// sub_432C00
// entry 00432c00  size 53  status ok
//======================================================================

int __thiscall sub_432C00(void *this, int a2, int a3)
{
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 296))(this, a2, a3);
  return sub_5D9F30(a2, a3);
}


//======================================================================
// sub_432C40
// entry 00432c40  size 328  status ok
//======================================================================

LONG __thiscall sub_432C40(void *this, int a2, int a3)
{
  LONG result; // eax
  bool v4; // [esp+0h] [ebp-20h]
  bool v5; // [esp+4h] [ebp-1Ch]
  CImageDisplay *v8; // [esp+10h] [ebp-10h]
  bool v9; // [esp+1Dh] [ebp-3h]

  v9 = sub_4351B0(dword_7906D4) == -1;
  result = sub_4347F0(dword_7906D4);
  v5 = 0;
  if ( result )
  {
    v8 = (CImageDisplay *)sub_4347F0(dword_7906D4);
    result = (LONG)CImageDisplay::GetDisplayFormat(v8);
    if ( *(_DWORD *)result != 2 )
    {
      result = CImageDisplay::GetDisplayFormat(v8)->rcSource.left;
      if ( result != 3 )
        v5 = 1;
    }
  }
  v4 = 0;
  if ( dword_7947B0 )
  {
    result = (unsigned __int8)sub_5F88F0(dword_7947B0);
    if ( !(_BYTE)result )
      v4 = 1;
  }
  if ( (v4 || (result = v9) == 0) && (v4 || !v5) )
  {
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 708))(this, *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4));
    if ( !(_BYTE)result )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(dword_7906D4 + 2784) = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4);
      sub_429F60(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 4));
      return sub_429CE0();
    }
  }
  return result;
}


//======================================================================
// sub_432D90
// entry 00432d90  size 89  status ok
//======================================================================

int __stdcall sub_432D90(int a1, int a2)
{
  int result; // eax

  result = sub_5D9F50(a1, a2);
  if ( *(_DWORD *)(dword_7906D4 + 2784) != -1 )
  {
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(dword_7906D4 + 2784) = -1;
    sub_429FA0((_DWORD *)dword_7906DC);
    return sub_429C30();
  }
  return result;
}


//======================================================================
// sub_432DF0
// entry 00432df0  size 18  status ok
//======================================================================

int __stdcall sub_432DF0(int a1)
{
  return 1046;
}


//======================================================================
// sub_432E10
// entry 00432e10  size 72  status ok
//======================================================================

char __thiscall sub_432E10(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_4299B0((_DWORD **)dword_7906DC);
  sub_434620(dword_7906D4, this);
  return sub_42F230((_BYTE *)dword_7906D8);
}


//======================================================================
// sub_432E60
// entry 00432e60  size 1024  status ok
//======================================================================

int __thiscall sub_432E60(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // eax
  int result; // eax
  int v14; // [esp+4h] [ebp-68h]
  int v15; // [esp+8h] [ebp-64h]
  int v16; // [esp+Ch] [ebp-60h]
  int v17; // [esp+10h] [ebp-5Ch]
  int v18; // [esp+14h] [ebp-58h]
  int v19; // [esp+18h] [ebp-54h]
  int v20; // [esp+1Ch] [ebp-50h]
  int v21; // [esp+20h] [ebp-4Ch]
  int v22; // [esp+24h] [ebp-48h]
  int v23; // [esp+28h] [ebp-44h]
  int v24; // [esp+2Ch] [ebp-40h]
  _DWORD *v25; // [esp+30h] [ebp-3Ch]
  _DWORD *v27; // [esp+38h] [ebp-34h]
  _DWORD v28[6]; // [esp+40h] [ebp-2Ch]
  int i; // [esp+58h] [ebp-14h]
  char *v30; // [esp+5Ch] [ebp-10h]
  int v31; // [esp+68h] [ebp-4h]

  v28[0] = "SID_CRAPS_OPTION_TAKEMAXODDS";
  v28[1] = "SID_CRAPS_OPTION_SHOWBIGDICE";
  v28[2] = "SID_CRAPS_OPTION_STICKMANVOICE";
  v28[3] = "SID_CRAPS_OPTION_AUTOROLL";
  v28[4] = "SID_CRAPS_OPTION_CONTINUEBUTTON";
  v28[5] = "SID_CRAPS_OPTION_ALLBETSWORKING";
  v5 = sub_630F40("SID_CRAPS_FREEODDS_COLON");
  v6 = sub_5FA5B0(0, -1, v5, 31, 100, 15, 20, 65, 1, 5, -1);
  sub_5FF5A0(v6);
  v7 = sub_5FAEE0(
         0,
         50,
         3200209,
         20,
         80,
         1,
         (struct Concurrency::details::SchedulerBase *)0x30DBD4,
         1,
         &Source,
         31,
         69,
         66,
         -1);
  sub_5FF5A0(v7);
  for ( i = 0; i < 6; ++i )
  {
    v8 = sub_630F40(v28[i]);
    v9 = sub_5F9EF0(0, i + 51, 3200201, 20, 20 * i + 120, 1, v8, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v9);
  }
  v10 = (char *)sub_630F40("SID_GENERIC_HELP");
  v11 = sub_5FA790(0, 10, v10, 72, 240, 84, 262, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v11);
  v27 = operator new(0x1D0u);
  v31 = 0;
  if ( v27 )
  {
    sub_5EC5A0(v27);
    *v27 = &CrapsSettingsHelpText::`vftable';
    v25 = v27;
  }
  else
  {
    v25 = 0;
  }
  v31 = -1;
  v12 = sub_5FA5B0(v25, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v12);
  v30 = (char *)sub_6375D0(-1);
  if ( (unsigned __int8)sub_5DA830(this) )
    v24 = 1;
  else
    v24 = *v30;
  sub_5FB5E0(50);
  sub_605EF0(v24, 1);
  if ( v30[1] )
  {
    v23 = sub_5FB350(51);
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 244))(v23);
  }
  if ( v30[2] )
  {
    v22 = sub_5FB350(52);
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 244))(v22);
  }
  if ( v30[3] )
  {
    v21 = sub_5FB350(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 244))(v21);
  }
  if ( v30[4] )
  {
    v20 = sub_5FB350(54);
    (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 244))(v20);
  }
  if ( v30[5] )
  {
    v19 = sub_5FB350(55);
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 244))(v19);
  }
  if ( (unsigned __int8)sub_434410(dword_7906D4) )
  {
    v18 = sub_5FB350(56);
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 244))(v18);
  }
  if ( dword_7947B0 )
  {
    if ( (unsigned __int8)sub_5CDD60(dword_7947B0) )
    {
      v17 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 248))(v17);
    }
    else
    {
      v16 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 244))(v16);
    }
  }
  result = sub_5DA830(this);
  if ( (_BYTE)result )
  {
    v15 = sub_5FB5E0(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 208))(v15);
    v14 = sub_5FB350(56);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 208))(v14);
  }
  *(this + 124) = 0;
  return result;
}


//======================================================================
// sub_433260
// entry 00433260  size 387  status ok
//======================================================================

char __thiscall sub_433260(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  char v4; // al
  int v5; // eax
  char v6; // al
  int v7; // eax
  char v8; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  char v12; // al
  int v13; // eax
  char v14; // al
  char result; // al
  int v16; // eax
  char v17; // al
  int v18; // eax
  char v19; // al

  v3 = sub_5FB350(51);
  v4 = sub_600230(v3);
  sub_4342F0(v4);
  v5 = sub_5FB350(52);
  v6 = sub_600230(v5);
  sub_4343B0(v6);
  v7 = sub_5FB350(53);
  v8 = sub_600230(v7);
  sub_434260(v8);
  v9 = sub_5FB350(54);
  v10 = sub_600230(v9);
  sub_4343F0(v10);
  v11 = sub_5FB350(55);
  v12 = sub_600230(v11);
  sub_4342A0(v12);
  if ( dword_7947B0 )
  {
    v13 = sub_5FB350(55);
    v14 = sub_600230(v13);
    sub_5CDD10(v14 == 0);
  }
  if ( (unsigned __int8)sub_5DA7B0(this) )
    return sub_4299B0((_DWORD **)dword_7906DC);
  v16 = sub_5FB5E0(50);
  v17 = sub_605F40(v16);
  sub_434370(v17);
  v18 = sub_5FB350(56);
  v19 = sub_600230(v18);
  sub_434440(v19);
  sub_637610(dword_162EE84);
  sub_4299B0((_DWORD **)dword_7906DC);
  result = (char)this;
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_4299B0((_DWORD **)dword_7906DC);
    sub_434620(dword_7906D4, this);
    return sub_42F230((_BYTE *)dword_7906D8);
  }
  return result;
}


//======================================================================
// sub_4333F0
// entry 004333f0  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_4333F0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v4 = 61;
  v5[0] = 286;
  v5[1] = 227;
  v5[2] = 286;
  v5[3] = 371;
  v5[4] = 191;
  v5[5] = 371;
  v5[6] = 32;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 4 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\crapsroom.cpp", 524);
    *a1 = v6;
    a1[1] = v7;
  }
  else
  {
    v2 = v5[2 * a2];
    *a1 = v5[2 * a2 - 1];
    a1[1] = v2;
  }
  return a1;
}


//======================================================================
// sub_433490
// entry 00433490  size 582  status ok
//======================================================================

void __thiscall sub_433490(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+4h] [ebp-44h]
  _DWORD v11[13]; // [esp+8h] [ebp-40h]
  int v12; // [esp+3Ch] [ebp-Ch]
  int i; // [esp+40h] [ebp-8h]
  int v14; // [esp+44h] [ebp-4h]

  v14 = -1;
  if ( dword_163068C )
  {
    v10 = sub_5FB5E0(50);
    v11[0] = 0;
    v11[1] = sub_5FB350(51);
    v11[2] = 1;
    v11[3] = sub_5FB350(52);
    v11[4] = 2;
    v11[5] = sub_5FB350(53);
    v11[6] = 3;
    v11[7] = sub_5FB350(54);
    v11[8] = 4;
    v11[9] = sub_5FB350(55);
    v11[10] = 5;
    v11[11] = sub_5FB350(56);
    v11[12] = 6;
    v12 = 7;
    for ( i = 0; i < v12; ++i )
    {
      if ( v11[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v11[2 * i - 1] + 132))(v11[2 * i - 1], a2) )
      {
        v14 = v11[2 * i];
        break;
      }
    }
    if ( v14 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else
    {
      if ( !v14 )
      {
        v2 = sub_630F40("SID_CRAPS_ROLLOVER1");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
      }
      if ( v14 == 1 )
      {
        v3 = sub_630F40("SID_CRAPS_ROLLOVER2");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
      if ( v14 == 2 )
      {
        v4 = sub_630F40("SID_CRAPS_ROLLOVER3");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
      }
      if ( v14 == 3 )
      {
        v5 = sub_630F40("SID_CRAPS_ROLLOVER4");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v5);
      }
      if ( v14 == 4 )
      {
        v6 = sub_630F40("SID_CRAPS_ROLLOVER5");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v6);
      }
      if ( v14 == 5 )
      {
        v7 = sub_630F40("SID_CRAPS_ROLLOVER6");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v7);
      }
      if ( v14 == 6 )
      {
        v8 = sub_630F40("SID_CRAPS_ROLLOVER7");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v8);
      }
    }
  }
}


//======================================================================
// sub_4336E0
// entry 004336e0  size 228  status ok
//======================================================================

char __thiscall sub_4336E0(int *this)
{
  int v2; // eax
  int v3; // [esp+0h] [ebp-8h]

  v3 = *(this + 5);
  if ( v3 > 3 )
  {
    if ( v3 == 500 )
    {
      sub_434620(dword_7906D4, 500);
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
    }
  }
  else
  {
    switch ( v3 )
    {
      case 3:
        return sub_42DF00(*(CFormView **)(dword_7906DC + 360), (int)this, 2);
      case 1:
        return sub_42F230((_BYTE *)dword_7906D8);
      case 2:
        (*(void (__thiscall **)(int *, int))(*this + 4))(this, 3);
        v2 = sub_637810(2);
        return (*(int (__thiscall **)(int *, int))(*this + 28))(this, 6 * v2 + 160);
    }
  }
  return sub_5E9F20((char)"false", "..\\Casino\\crapsroom.cpp", 607);
}


//======================================================================
// sub_433800
// entry 00433800  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_433800(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &CrapsRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_433830
// entry 00433830  size 120  status ok
//======================================================================

_DWORD *sub_433830()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_431C70(v2);
  else
    return 0;
}


//======================================================================
// sub_4338B0
// entry 004338b0  size 51  status ok
//======================================================================

char __stdcall sub_4338B0(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_CRAPS");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_433910
// entry 00433910  size 16  status ok
//======================================================================

int sub_433910()
{
  return 3202000;
}


//======================================================================
// sub_433920
// entry 00433920  size 16  status ok
//======================================================================

const char *sub_433920()
{
  return "Craps";
}


//======================================================================
// sub_433940
// entry 00433940  size 16  status ok
//======================================================================

char **sub_433940()
{
  return &off_7131F4;
}


