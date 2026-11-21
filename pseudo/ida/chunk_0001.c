//======================================================================
// sub_401040
// entry 00401040  size 25  status ok
//======================================================================

int __stdcall sub_401040(int a1)
{
  return sub_401060(a1);
}


//======================================================================
// sub_401060
// entry 00401060  size 343  status ok
//======================================================================

int __stdcall sub_401060(int a1)
{
  int v1; // eax
  double v3; // [esp+Ch] [ebp-38h]
  double v4; // [esp+1Ch] [ebp-28h]
  int v5; // [esp+2Ch] [ebp-18h]
  int v6; // [esp+30h] [ebp-14h]
  int v7; // [esp+34h] [ebp-10h]
  int v8; // [esp+38h] [ebp-Ch]
  int v9; // [esp+3Ch] [ebp-8h]
  int v10; // [esp+40h] [ebp-4h]

  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7902EC + 688))(dword_7902EC);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7902EC + 692))(dword_7902EC);
  v7 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  v1 = sub_5DCB00(a1);
  v9 = sub_5D5A50(v1);
  v6 = sub_4011E0(a1);
  if ( v9 < v8 )
    sub_5E9F20((char)"bank >= minBet", "..\\Casino\\baccaratai.cpp", 30);
  if ( v7 < -4 )
    v7 = -1 - sub_62FBF0(5);
  v4 = (double)(v8 * (sub_62FBF0(5) + 1));
  v3 = (double)(v6 / (sub_62FBF0(5) + 1)) * v4;
  v5 = (int)((double)(v6 / (sub_62FBF0(5) + 1)) * (double)(v8 * v7) + v3);
  if ( v5 > v10 )
    v5 = v10;
  if ( v5 > v9 )
    v5 = v9;
  if ( v5 < v8 )
    return v8;
  return v5;
}


//======================================================================
// sub_4011E0
// entry 004011e0  size 145  status ok
//======================================================================

int __stdcall sub_4011E0(int a1)
{
  int v2; // [esp+8h] [ebp-30h]
  _DWORD v3[10]; // [esp+10h] [ebp-28h]

  v3[0] = 8;
  v3[1] = 10;
  v3[2] = 2;
  v3[3] = 1;
  v3[4] = 5;
  v3[5] = 5;
  v3[6] = 8;
  v3[7] = 4;
  v3[8] = 6;
  v3[9] = 10;
  v2 = sub_5DCB00(a1);
  return v3[(*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 368))(
              dword_162EE84,
              *(_DWORD *)(v2 + 8))];
}


//======================================================================
// sub_4012B0
// entry 004012b0  size 193  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_4012B0(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BaccaratDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 1) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  for ( j = 0; j < 12; ++j )
    *((_DWORD *)this + j + 8) = 0;
  *((_DWORD *)this + 20) = 0;
  for ( k = 0; k < 3; ++k )
    *((_DWORD *)this + k + 23) = 0;
  *((_DWORD *)this + 26) = 0;
  return this;
}


//======================================================================
// sub_401380
// entry 00401380  size 505  status ok
//======================================================================

void __thiscall sub_401380(CNoTrackObject *this)
{
  int i; // [esp+5Ch] [ebp-10h]
  int j; // [esp+5Ch] [ebp-10h]
  int k; // [esp+5Ch] [ebp-10h]

  *(_DWORD *)this = &BaccaratDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  if ( *((_DWORD *)this + 6) )
    (***((void (__thiscall ****)(_DWORD, int))this + 6))(*((_DWORD *)this + 6), 1);
  if ( *((_DWORD *)this + 7) )
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
  for ( j = 0; j < 12; ++j )
  {
    if ( *((_DWORD *)this + j + 8) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 8))(*((_DWORD *)this + j + 8), 1);
  }
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  for ( k = 0; k < 3; ++k )
  {
    if ( *((_DWORD *)this + k + 23) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 23))(*((_DWORD *)this + k + 23), 1);
  }
  if ( *((_DWORD *)this + 26) )
    (***((void (__thiscall ****)(_DWORD, int))this + 26))(*((_DWORD *)this + 26), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_401580
// entry 00401580  size 1464  status ok
//======================================================================

int __thiscall sub_401580(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+0h] [ebp-A4h]
  int v10; // [esp+4h] [ebp-A0h]
  int v11; // [esp+4h] [ebp-A0h]
  int v12; // [esp+8h] [ebp-9Ch]
  _DWORD *v13; // [esp+Ch] [ebp-98h]
  int v14; // [esp+10h] [ebp-94h]
  int v15; // [esp+14h] [ebp-90h]
  int v16; // [esp+18h] [ebp-8Ch]
  int v17; // [esp+1Ch] [ebp-88h]
  void *v19; // [esp+24h] [ebp-80h]
  void *v20; // [esp+2Ch] [ebp-78h]
  _DWORD *v21; // [esp+34h] [ebp-70h]
  void *v22; // [esp+3Ch] [ebp-68h]
  void *v23; // [esp+44h] [ebp-60h]
  void *v24; // [esp+4Ch] [ebp-58h]
  void *v25; // [esp+54h] [ebp-50h]
  _DWORD v26[12]; // [esp+60h] [ebp-44h]
  int i; // [esp+90h] [ebp-14h]
  int v28; // [esp+94h] [ebp-10h]
  int v29; // [esp+A0h] [ebp-4h]

  v26[0] = 6;
  v26[1] = 7;
  v26[2] = 8;
  v26[3] = 3;
  v26[4] = 4;
  v26[5] = 5;
  v26[6] = 9;
  v26[7] = 10;
  v26[8] = 11;
  v26[9] = 0;
  v26[10] = 1;
  v26[11] = 2;
  v28 = 40;
  v1 = sub_630F40("SID_BACCARAT");
  sub_5F38B0(v1);
  sub_5F1AD0(3216000);
  for ( i = 0; i < 5; ++i )
  {
    v25 = operator new(0x18u);
    v29 = 0;
    if ( v25 )
      v17 = sub_402660(v25);
    else
      v17 = 0;
    v29 = -1;
    *(this + i + 1) = v17;
    sub_4027B0(i);
  }
  v24 = operator new(0x1D0u);
  v29 = 1;
  if ( v24 )
  {
    sub_5EC5A0(v24);
    v16 = v2;
  }
  else
  {
    v16 = 0;
  }
  *(this + 6) = v16;
  sub_5EC8F0(&Source, 56, 60, 20, 423, 108, 81, 17, -1);
  v23 = operator new(0x1D0u);
  v29 = 2;
  if ( v23 )
  {
    sub_5EC5A0(v23);
    v15 = v3;
  }
  else
  {
    v15 = 0;
  }
  v29 = -1;
  *(this + 7) = v15;
  sub_5EC8F0(&Source, 56, 60, 20, 161, 108, 81, 18, -1);
  for ( i = 0; i < 12; ++i )
  {
    v22 = operator new(0xAE8u);
    v29 = 3;
    if ( v22 )
      v14 = sub_402A90(v9, v10);
    else
      v14 = 0;
    v29 = -1;
    *(this + i + 8) = v14;
    *(_DWORD *)(*(this + i + 8) + 2784) = i;
    sub_5EAE80(3216005, 0, 0, 2, i);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 8) + 176))(*(this + i + 8), v26[i]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode((CPane *)*(this + i + 8), *(_DWORD *)(dword_7902F0 + 4 * i + 4));
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 8) + 84))(*(this + i + 8));
    v5 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 8) + 76))(*(this + i + 8), v4 + 40);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 8) + 68))(*(this + i + 8), v5);
    sub_5EB700(1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 8) + 116))(*(this + i + 8));
  }
  v21 = operator new(0x198u);
  v29 = 4;
  if ( v21 )
  {
    sub_5CD6A0(v21);
    *v21 = &BaccaratDealerDisplay::`vftable';
    v13 = v21;
  }
  else
  {
    v13 = 0;
  }
  v29 = -1;
  *(this + 20) = v13;
  sub_5EAE80(0, 0, 0, 0, -1);
  for ( i = 0; i < 3; ++i )
  {
    v20 = operator new(0x178u);
    v29 = 5;
    if ( v20 )
    {
      sub_5EAAF0(v20);
      v12 = v6;
    }
    else
    {
      v12 = 0;
    }
    v29 = -1;
    *(this + i + 23) = v12;
    sub_5EAE80(3216018, dword_705054[2 * i], dword_705058[2 * i], 80, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 23) + 112))(*(this + i + 23));
  }
  v19 = operator new(0x178u);
  v29 = 6;
  if ( v19 )
  {
    sub_5EAAF0(v19);
    v11 = v7;
  }
  else
  {
    v11 = 0;
  }
  v29 = -1;
  *(this + 26) = v11;
  sub_5EAE80(5041, 0, 0, 10, -1);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 26) + 112))(*(this + 26));
}


//======================================================================
// sub_401B40
// entry 00401b40  size 119  status ok
//======================================================================

int __thiscall sub_401B40(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 3 * a2;
  for ( i = 3 * a2; ; ++i )
  {
    result = v4 + 3;
    if ( i >= v4 + 3 )
      break;
    if ( !(*(this + i + 8))[120 * a2 + 95] )
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + i + 8) + 184))(*(this + i + 8), a2, 0);
  }
  return result;
}


//======================================================================
// sub_401BC0
// entry 00401bc0  size 228  status ok
//======================================================================

int sub_401BC0()
{
  char v1; // [esp+0h] [ebp-20h]
  CImageDisplay *v2; // [esp+18h] [ebp-8h]
  unsigned int v3; // [esp+1Ch] [ebp-4h]

  v3 = *(_DWORD *)(dword_7902F0 + 4316);
  if ( v3 < 4
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_407F50(v3)) )
  {
    return sub_5F2B20(3216003, 1);
  }
  else
  {
    return sub_5F2BA0(3216003);
  }
}


//======================================================================
// sub_401CB0
// entry 00401cb0  size 522  status ok
//======================================================================

int __thiscall sub_401CB0(_DWORD **this)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  if ( (unsigned __int8)sub_407C30(dword_7902F0) )
    (*(void (__thiscall **)(_DWORD))(**(this + 26) + 116))(*(this + 26));
  else
    (*(void (__thiscall **)(_DWORD))(**(this + 26) + 112))(*(this + 26));
  for ( i = 0; i < 5; ++i )
  {
    sub_402960(*(this + i + 1));
    if ( i != 4
      && *(_BYTE *)(sub_5DCB00(i) + 1184)
      && (unsigned __int8)sub_5DA7B0(dword_7902EC)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7902EC + 708))(dword_7902EC, i) )
    {
      sub_401B40(this, i);
    }
    if ( i )
    {
      if ( i == 4 )
      {
        v6 = sub_4094B0(4);
        if ( v6 )
        {
          v2 = CSourceStream::Exit((CSourceStream *)dword_7902F0);
          sub_401EC0(byte_7902B8, v2, v6);
          (*(void (__thiscall **)(_DWORD, char *))(**(this + 6) + 180))(*(this + 6), byte_7902B8);
          (*(void (__thiscall **)(_DWORD))(**(this + 6) + 116))(*(this + 6));
        }
        else
        {
          (*(void (__thiscall **)(_DWORD))(**(this + 6) + 112))(*(this + 6));
        }
      }
    }
    else
    {
      v5 = sub_4094B0(0);
      if ( v5 )
      {
        CAtlAllocator::CleanUp((CAtlAllocator *)dword_7902F0);
        sub_401EC0(byte_7902B8, v1, v5);
        (*(void (__thiscall **)(_DWORD, char *))(**(this + 7) + 180))(*(this + 7), byte_7902B8);
        (*(void (__thiscall **)(_DWORD))(**(this + 7) + 116))(*(this + 7));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(this + 7) + 112))(*(this + 7));
      }
    }
  }
  result = sub_5DA7B0(dword_7902EC);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7902EC + 752))(dword_7902EC);
  return result;
}


//======================================================================
// sub_401EC0
// entry 00401ec0  size 104  status ok
//======================================================================

int __stdcall sub_401EC0(char *Buffer, int a2, int a3)
{
  const char *v3; // eax

  if ( a2 < 8 || a3 != 2 )
    return sprintf(Buffer, "%d", a2);
  v3 = (const char *)sub_630F40("SID_BACCARAT_NATURAL_FORMAT");
  return sprintf(Buffer, v3, a2);
}


//======================================================================
// sub_401F30
// entry 00401f30  size 121  status ok
//======================================================================

int __thiscall sub_401F30(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_7902EC)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_7902EC + 724))(dword_7902EC, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_408EC0(dword_7902F0) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_404160(v2);
    }
  }
  return result;
}


//======================================================================
// sub_401FB0
// entry 00401fb0  size 29  status ok
//======================================================================

int sub_401FB0()
{
  return sub_5DB7D0(0, 175);
}


//======================================================================
// sub_401FD0
// entry 00401fd0  size 201  status ok
//======================================================================

int __thiscall sub_401FD0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-10h]
  __int16 v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v9 = *(_DWORD *)(*(this + a2 + 1) + 4 * a3 + 8);
  v8 = sub_4093D0(a2, a3);
  v3 = sub_4020A0(a2, a3);
  sub_5EAF00(v3);
  v4 = sub_402100(a2, v8, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v4);
  v7 = sub_402210(a2, a3);
  v5 = sub_4021B0(a2, a3);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(v9, v5, v7);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, a3 + 5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
}


//======================================================================
// sub_4020A0
// entry 004020a0  size 91  status ok
//======================================================================

int __stdcall sub_4020A0(int a1, int a2)
{
  if ( a2 == 2 )
  {
    if ( a1 == 4 )
      return 3216013;
    else
      return 3216011;
  }
  else if ( a1 == 4 )
  {
    return 3216012;
  }
  else
  {
    return 3216010;
  }
}


//======================================================================
// sub_402100
// entry 00402100  size 173  status ok
//======================================================================

int __stdcall sub_402100(int a1, __int16 a2, int a3)
{
  int v4; // esi
  _DWORD v5[5]; // [esp+Ch] [ebp-14h]

  v5[0] = -1;
  v5[1] = 1;
  v5[2] = 2;
  v5[3] = 3;
  v5[4] = 0;
  if ( !*(_BYTE *)(a1 + dword_7902F0 + 179) && (a1 != 4 || a3 != 4) )
    return 53;
  if ( sub_641280(a2) == 14 )
    return 13 * v5[sub_641290(a2)];
  v4 = 13 * v5[sub_641290(a2)];
  return v4 + sub_641280(a2) - 1;
}


//======================================================================
// sub_4021B0
// entry 004021b0  size 91  status ok
//======================================================================

int __stdcall sub_4021B0(int a1, int a2)
{
  _DWORD v3[3]; // [esp+4h] [ebp-18h]
  _DWORD v4[3]; // [esp+10h] [ebp-Ch]

  if ( a1 )
  {
    if ( a1 == 4 )
    {
      v3[0] = 327;
      v3[1] = 347;
      v3[2] = 349;
      return v3[a2];
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4[0] = 220;
    v4[1] = 240;
    v4[2] = 242;
    return v4[a2];
  }
}


//======================================================================
// sub_402210
// entry 00402210  size 91  status ok
//======================================================================

int __stdcall sub_402210(int a1, int a2)
{
  _DWORD v3[3]; // [esp+4h] [ebp-18h]
  _DWORD v4[3]; // [esp+10h] [ebp-Ch]

  if ( a1 )
  {
    if ( a1 == 4 )
    {
      v3[0] = 101;
      v3[1] = 97;
      v3[2] = 104;
      return v3[a2];
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4[0] = 101;
    v4[1] = 97;
    v4[2] = 104;
    return v4[a2];
  }
}


//======================================================================
// sub_402270
// entry 00402270  size 70  status ok
//======================================================================

int __thiscall sub_402270(_DWORD **this, int a2, int a3)
{
  int result; // eax

  if ( a2 != 4 )
  {
    result = a3;
    if ( *(this + a3 + 8) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + a3 + 8) + 184))(*(this + a3 + 8), a2, 0);
  }
  return result;
}


//======================================================================
// sub_402300
// entry 00402300  size 47  status ok
//======================================================================

int __thiscall sub_402300(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( *(this + a2 + 8) )
    return sub_5CC440(a3, 0);
  return result;
}


//======================================================================
// sub_402370
// entry 00402370  size 322  status ok
//======================================================================

int __thiscall sub_402370(_DWORD **this)
{
  int v1; // eax
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  CAtlAllocator::CleanUp((CAtlAllocator *)dword_7902F0);
  v6 = v1;
  v4 = CSourceStream::Exit((CSourceStream *)dword_7902F0);
  for ( i = 0; i < 3; ++i )
    (*(void (__thiscall **)(_DWORD))(**(this + i + 23) + 112))(*(this + i + 23));
  if ( v6 == v4 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + 25) + 176))(*(this + 25), 6);
    return (*(int (__thiscall **)(_DWORD))(**(this + 25) + 116))(*(this + 25));
  }
  else
  {
    if ( v6 <= v4 )
    {
      v7 = 1;
      v5 = 0;
    }
    else
    {
      v7 = 0;
      v5 = 1;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + v7 + 23) + 176))(*(this + v7 + 23), 0);
    (*(void (__thiscall **)(_DWORD, int))(**(this + v5 + 23) + 176))(*(this + v5 + 23), 1);
    (*(void (__thiscall **)(_DWORD))(**(this + v7 + 23) + 116))(*(this + v7 + 23));
    return (*(int (__thiscall **)(_DWORD))(**(this + v5 + 23) + 116))(*(this + v5 + 23));
  }
}


//======================================================================
// sub_4024C0
// entry 004024c0  size 66  status ok
//======================================================================

int __thiscall sub_4024C0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 23) + 112))(*(this + i + 23));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_402510
// entry 00402510  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_402510(_DWORD *this)
{
  sub_5EAAF0(this);
  *this = &BaccaratScoreCardView::`vftable';
  *(this + 94) = -1;
  return this;
}


//======================================================================
// sub_402560
// entry 00402560  size 252  status ok
//======================================================================

LONG __thiscall sub_402560(CMFCScanliner *this, LONG a2)
{
  LONG result; // eax
  bool v3; // [esp+0h] [ebp-14h]
  CImageDisplay *v5; // [esp+10h] [ebp-4h]

  result = CMFCScanliner::channels(this);
  if ( !(_BYTE)result && !*(_BYTE *)(a2 + 4) )
  {
    result = (*(int (__thiscall **)(CMFCScanliner *, LONG))(*(_DWORD *)this + 132))(this, a2);
    if ( (_BYTE)result )
    {
      if ( *((_DWORD *)this + 94) != -1 )
      {
        result = sub_5DCB00(*((_DWORD *)this + 94));
        v5 = (CImageDisplay *)result;
        if ( result )
        {
          result = (LONG)CImageDisplay::GetDisplayFormat((CImageDisplay *)result);
          v3 = 1;
          if ( *(_DWORD *)result != 2 )
          {
            result = CImageDisplay::GetDisplayFormat(v5)->rcSource.left;
            if ( result != 3 )
              v3 = 0;
          }
          if ( v3 && !dword_7947B4 )
          {
            if ( *(_DWORD *)(a2 + 24) == 2 )
            {
              *(_BYTE *)(a2 + 4) = 1;
              return sub_4055F0(*((_DWORD *)this + 94));
            }
            else
            {
              result = a2;
              if ( *(_DWORD *)(a2 + 24) == 1 )
                *(_BYTE *)(a2 + 4) = 1;
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_402660
// entry 00402660  size 83  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_402660(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BaccaratPlayerDisplay::`vftable';
  for ( i = 0; i < 3; ++i )
    *((_DWORD *)this + i + 2) = 0;
  *((_DWORD *)this + 5) = 0;
  return this;
}


//======================================================================
// sub_4026C0
// entry 004026c0  size 229  status ok
//======================================================================

void __thiscall sub_4026C0(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &BaccaratPlayerDisplay::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  if ( *((_DWORD *)this + 5) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 5))(*((_DWORD *)this + 5), 1);
    *((_DWORD *)this + 5) = 0;
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_4027B0
// entry 004027b0  size 432  status ok
//======================================================================

int __thiscall sub_4027B0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp+4h] [ebp-44h]
  _DWORD *v5; // [esp+8h] [ebp-40h]
  void *v7; // [esp+18h] [ebp-30h]
  _DWORD *v8; // [esp+20h] [ebp-28h]
  int i; // [esp+30h] [ebp-18h]

  *(this + 1) = a2;
  if ( *(this + 1) != 4 && sub_639110(*(this + 1)) )
  {
    v8 = operator new(0x17Cu);
    if ( v8 )
      v5 = sub_402510(v8);
    else
      v5 = 0;
    *(this + 5) = v5;
    sub_5EAE80(3216015, dword_705158[2 * *(this + 1)], dword_70515C[2 * *(this + 1)], 200, -1);
    *(_DWORD *)(*(this + 5) + 376) = *(this + 1);
  }
  result = (int)this;
  if ( !*(this + 1) || *(this + 1) == 4 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v7 = operator new(0x178u);
      if ( v7 )
      {
        sub_5EAAF0(v7);
        v4 = v3;
      }
      else
      {
        v4 = 0;
      }
      *(this + i + 2) = v4;
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 64))(*(this + i + 2));
    }
  }
  return result;
}


//======================================================================
// sub_402960
// entry 00402960  size 302  status ok
//======================================================================

int __thiscall sub_402960(int this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(this + 4) != 4 )
  {
    if ( sub_639110(*(_DWORD *)(this + 4)) )
    {
      sub_639110(*(_DWORD *)(this + 4));
      sub_646380(100);
      sub_639110(*(_DWORD *)(this + 4));
      sub_6464D0(0, 0);
    }
    sub_5D9180(*(_DWORD *)(this + 4), 0);
  }
  if ( !*(_DWORD *)(this + 4) || *(_DWORD *)(this + 4) == 4 )
  {
    for ( i = 0; i < 3; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
    for ( j = 0; j < 3; ++j )
    {
      if ( (unsigned __int16)sub_4093D0(*(_DWORD *)(this + 4), j) )
        sub_401FD0((_DWORD *)dword_7902F8, *(_DWORD *)(this + 4), j);
    }
  }
  result = this;
  if ( *(_DWORD *)(this + 20) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 116))(*(_DWORD *)(this + 20));
  return result;
}


//======================================================================
// sub_402A90
// entry 00402a90  size 212  status ok
//======================================================================

_DWORD *__thiscall sub_402A90(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch]
  void *v5; // [esp+Ch] [ebp-14h]

  sub_5CC1D0(this);
  *this = &BaccaratBetArea::`vftable';
  v5 = operator new(0x178u);
  if ( v5 )
  {
    sub_5EAAF0(v5);
    v3 = v1;
  }
  else
  {
    v3 = 0;
  }
  *(this + 697) = v3;
  sub_5EAE80(5042, 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 697) + 112))(*(this + 697));
  return this;
}


//======================================================================
// sub_402B70
// entry 00402b70  size 136  status ok
//======================================================================

int __thiscall sub_402B70(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&BaccaratBetArea::`vftable';
  if ( *(this + 697) )
    (***(this + 697))(*(this + 697), 1);
  return sub_5CC230();
}


//======================================================================
// sub_402C00
// entry 00402c00  size 81  status ok
//======================================================================

int __thiscall sub_402C00(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_4081C0(*(this + 696));
  switch ( v2 )
  {
    case 0:
      return 3216008;
    case 1:
      return 3216007;
    case 2:
      return 3216009;
  }
  return 3216006;
}


//======================================================================
// sub_402C60
// entry 00402c60  size 29  status ok
//======================================================================

int __thiscall sub_402C60(_DWORD *this, int a2, int a3)
{
  return dword_7051B8[*(this + 696)];
}


//======================================================================
// sub_402C80
// entry 00402c80  size 29  status ok
//======================================================================

int __thiscall sub_402C80(_DWORD *this, int a2, int a3)
{
  return dword_7051E8[*(this + 696)];
}


//======================================================================
// sub_402CA0
// entry 00402ca0  size 87  status ok
//======================================================================

int __thiscall sub_402CA0(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_402C60(this, a2, a3);
  if ( sub_62FBF0(2) )
    return v4 - sub_62FBF0(3);
  else
    return v4 + sub_62FBF0(3);
}


//======================================================================
// sub_402D00
// entry 00402d00  size 87  status ok
//======================================================================

int __thiscall sub_402D00(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_402C80(this, a2, a3);
  if ( sub_62FBF0(2) )
    return v4 - sub_62FBF0(3);
  else
    return v4 + sub_62FBF0(3);
}


//======================================================================
// sub_402D80
// entry 00402d80  size 32  status ok
//======================================================================

int __thiscall sub_402D80(_DWORD *this, int a2, int a3)
{
  return sub_402C80(this, a2, a3) - 15;
}


//======================================================================
// sub_402DA0
// entry 00402da0  size 217  status ok
//======================================================================

int __thiscall sub_402DA0(_DWORD **this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v8; // [esp+8h] [ebp-4h]

  v8 = 0;
  switch ( a4 )
  {
    case 0:
      (*(void (__thiscall **)(_DWORD, int))(**(this + 697) + 176))(*(this + 697), 1);
      break;
    case 1:
    case 8:
    case 9:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 697) + 176))(*(this + 697), 0);
      break;
    case 2:
      v8 = 3;
      goto LABEL_5;
    default:
LABEL_5:
      (*(void (__thiscall **)(_DWORD, int))(**(this + 697) + 176))(*(this + 697), v8);
      break;
  }
  v4 = ((int (__thiscall *)(_DWORD **, int, int))(*this)[54])(this, a2, a3);
  v5 = ((int (__thiscall *)(_DWORD **, int, int, int))(*this)[53])(this, a2, a3, v4);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 697) + 68))(*(this + 697), v5);
  return (*(int (__thiscall **)(_DWORD))(**(this + 697) + 116))(*(this + 697));
}


//======================================================================
// sub_402EA0
// entry 00402ea0  size 38  status ok
//======================================================================

int __thiscall sub_402EA0(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 697) + 112))(*(this + 697), this);
}


//======================================================================
// sub_402ED0
// entry 00402ed0  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_402ED0(_DWORD *this)
{
  sub_5845C0(0);
  *this = &ScoreCardScroller::`vftable';
  return this;
}


//======================================================================
// sub_402F70
// entry 00402f70  size 16  status ok
//======================================================================

int sub_402F70()
{
  return 99;
}


//======================================================================
// sub_402F80
// entry 00402f80  size 16  status ok
//======================================================================

int sub_402F80()
{
  return 19;
}


//======================================================================
// sub_402F90
// entry 00402f90  size 46  status ok
//======================================================================

int __stdcall sub_402F90(int a1)
{
  sub_5855E0(a1);
  return sub_4037C0(a1);
}


//======================================================================
// sub_402FC0
// entry 00402fc0  size 61  status ok
//======================================================================

_DWORD *__thiscall sub_402FC0(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &BaccaratScorecardDialog::`vftable';
  *(this + 111) = 0;
  *(this + 112) = 0;
  return this;
}


//======================================================================
// sub_403000
// entry 00403000  size 161  status ok
//======================================================================

int __thiscall sub_403000(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&BaccaratScorecardDialog::`vftable';
  if ( *(this + 111) )
  {
    (***(this + 111))(*(this + 111), 1);
    *(this + 111) = 0;
  }
  return sub_5F7260();
}


//======================================================================
// sub_4030B0
// entry 004030b0  size 1266  status ok
//======================================================================

int __thiscall sub_4030B0(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+0h] [ebp-50h]
  int v10; // [esp+4h] [ebp-4Ch]
  int v11; // [esp+8h] [ebp-48h]
  int v13; // [esp+20h] [ebp-30h]
  int v14; // [esp+20h] [ebp-30h]
  int v15; // [esp+20h] [ebp-30h]
  int v16; // [esp+24h] [ebp-2Ch]
  int v17; // [esp+24h] [ebp-2Ch]
  char Buffer[12]; // [esp+28h] [ebp-28h] BYREF
  int v19; // [esp+38h] [ebp-18h]
  int i; // [esp+3Ch] [ebp-14h]
  int v21; // [esp+40h] [ebp-10h]
  int v22; // [esp+44h] [ebp-Ch]
  int v23; // [esp+48h] [ebp-8h]
  int v24; // [esp+4Ch] [ebp-4h]

  sub_5F83D0(3216014, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_BACCARAT_CLOSE");
  sub_5F9DE0(0, 0, 3200229, 20, 379, 2, v1, 72, 75, 74, -1, 13);
  sub_5F9CE0(0, 1, 3216017, 117, 34, 1, 0, 255, 0);
  v19 = 50;
  v23 = 65;
  v2 = sub_630F40("SID_BACCARAT_SHOE_COLON");
  sub_5FA5B0(0, 2, v2, 31, 50, 21, 10, 35, 10, 1, -1);
  sub_5FA5B0(0, 3, "0", 31, 20, 21, 65, 35, 10, 2, -1);
  v3 = sub_630F40("SID_BACCARAT_HANDS_COLON");
  sub_5FA5B0(0, 4, v3, 31, 50, 21, 10, 60, 10, 1, -1);
  sub_5FA5B0(0, 5, "0", 31, 20, 21, 65, 60, 10, 2, -1);
  v4 = sub_630F40("SID_BACCARAT_PLAYED_COLON");
  sub_5FA5B0(0, 6, v4, 31, 50, 21, 10, 85, 10, 1, -1);
  sub_5FA5B0(0, 7, "0", 31, 20, 21, 65, 85, 10, 2, -1);
  v5 = sub_630F40("SID_BACCARAT_WON_COLON");
  sub_5FA5B0(0, 8, v5, 31, 50, 21, 10, 110, 10, 1, -1);
  sub_5FA5B0(0, 9, "0", 31, 20, 21, 65, 110, 10, 2, -1);
  v6 = sub_630F40("SID_BACCARAT_LOST_COLON");
  sub_5FA5B0(0, 10, v6, 31, 50, 21, 10, 135, 10, 1, -1);
  sub_5FA5B0(0, 11, "0", 31, 20, 21, 65, 135, 10, 2, -1);
  v21 = 124;
  v22 = 60;
  v24 = 18;
  v13 = 20;
  for ( i = 1; i <= 19; ++i )
  {
    sprintf(Buffer, "%d", i);
    sub_5FA5B0(0, v13++, Buffer, 31, 19, 17, v21, v22, 5, 48, -1);
    v22 += v24;
  }
  v21 = 144;
  v22 = 60;
  v14 = 40;
  v16 = 40;
  for ( i = 1; i <= 19; ++i )
  {
    sub_5FA5B0(0, v14++, &Source, 31, 25, 17, v21, v22, 10, 48, -1);
    sub_5F9CE0(0, v16, 3216016, v21 + 2, v22, 5, 0, 255, 0);
    v11 = sub_5FB2B0(v16);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 112))(v11);
    ++v16;
    v22 += v24;
  }
  v21 = 170;
  v22 = 60;
  v15 = 60;
  v17 = 60;
  for ( i = 1; i <= 19; ++i )
  {
    v10 = v15;
    sub_5FA5B0(0, v15++, &Source, 31, 25, 17, v21, v22, 10, 48, -1);
    sub_5F9CE0(0, v17, 3216016, v21 + 2, v22, 5, 0, 255, 0);
    v9 = sub_5FB2B0(v17);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 112))(v9);
    ++v17;
    v22 += v24;
  }
  sub_403630(v9, v10);
  v7 = sub_4035B0(this);
  return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 111) + 188))(*((_DWORD *)this + 111), v7);
}


//======================================================================
// sub_4035B0
// entry 004035b0  size 120  status ok
//======================================================================

int __thiscall sub_4035B0(_DWORD *this)
{
  int v2; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(dword_7902F0 + 824 * *(this + 112) + 196);
  if ( v2 <= 19 )
    return 0;
  if ( v2 <= 38 )
    return 19;
  if ( v2 <= 57 )
    return 38;
  if ( v2 <= 76 )
    return 57;
  if ( v2 > 95 )
    return 95;
  return 76;
}


//======================================================================
// sub_403630
// entry 00403630  size 358  status ok
//======================================================================

int __thiscall sub_403630(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 111) )
  {
    v4 = operator new(0x84u);
    if ( v4 )
      v2 = sub_402ED0(v4);
    else
      v2 = 0;
    *(this + 111) = v2;
  }
  *(_DWORD *)(*(this + 111) + 4) = this;
  sub_584ED0(3200203, 3200204, 3200207);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 64))(*(this + 111));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 111) + 68))(*(this + 111), 201, 58);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 111) + 120))(*(this + 111), 15, 345);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 111) + 108))(*(this + 111), 5);
  sub_585010(*(this + 111));
  sub_5F62F0(0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 116))(*(this + 111));
}


//======================================================================
// sub_4037A0
// entry 004037a0  size 24  status ok
//======================================================================

int __thiscall sub_4037A0(void *this, int a2)
{
  return sub_405710(dword_7902EC, this);
}


//======================================================================
// sub_4037C0
// entry 004037c0  size 618  status ok
//======================================================================

int __thiscall sub_4037C0(_DWORD *this, unsigned int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+8h] [ebp-10h]
  _DWORD *v8; // [esp+Ch] [ebp-Ch]
  int i; // [esp+10h] [ebp-8h]
  int j; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  if ( a2 > 0x62 )
    sub_5E9F20((char)"(0<=start) && (start<=98)", "..\\Casino\\baccaratdisplay.cpp", 873);
  v8 = (_DWORD *)(dword_7902F0 + 824 * *(this + 112) + 188);
  sub_403A30(3, *v8, 0);
  sub_403A30(5, v8[1], 0);
  sub_403A30(7, v8[3], 0);
  sub_403A30(9, v8[4], 0);
  sub_403A30(11, v8[5], 0);
  for ( i = 0; i < 19; ++i )
  {
    sub_403AD0(i + 20, &Source, 0);
    sub_403AD0(i + 40, &Source, 0);
    sub_403B70(i + 40);
    sub_403AD0(i + 60, &Source, 0);
    sub_403B70(i + 60);
  }
  result = a2;
  v6 = a2;
  for ( j = 0; j < 19 && v6 < 99; ++j )
  {
    v7 = v8[v6 + 8];
    v11 = v8[v6 + 107];
    sub_403A30(j + 20, a2 + j + 1, 0);
    if ( (v7 & 4) != 0 )
    {
      v3 = sub_630F40("SID_BACCARAT_TIE_MARKING");
      sub_403AD0(j + 40, v3, (v7 & 0x10) != 0);
      v4 = sub_630F40("SID_BACCARAT_TIE_MARKING");
      sub_403AD0(j + 60, v4, (v7 & 0x10) != 0);
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (v7 & 8) != 0 )
        sub_403B40(j + 40);
      sub_403A30(j + 40, v11, (v7 & 0x10) != 0);
    }
    result = v7 & 2;
    if ( (v7 & 2) != 0 )
    {
      if ( (v7 & 8) != 0 )
        sub_403B40(j + 60);
      result = sub_403A30(j + 60, v11, (v7 & 0x10) != 0);
    }
    ++v6;
  }
  return result;
}


//======================================================================
// sub_403A30
// entry 00403a30  size 149  status ok
//======================================================================

int __stdcall sub_403A30(int a1, int a2, char a3)
{
  __int16 v4; // [esp-4h] [ebp-24h]
  int v5; // [esp+0h] [ebp-20h]
  char Buffer[20]; // [esp+8h] [ebp-18h] BYREF

  sprintf(Buffer, "%d", a2);
  v5 = sub_5FB550(a1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 180))(v5, Buffer);
  v4 = word_75EE1C;
  sub_5FB550(a1);
  return sub_5ECD00(a3 != 0 ? 69 : 31, -1, v4);
}


//======================================================================
// sub_403AD0
// entry 00403ad0  size 108  status ok
//======================================================================

int __stdcall sub_403AD0(int a1, int a2, char a3)
{
  int v3; // eax
  __int16 v5; // [esp-4h] [ebp-Ch]

  v3 = sub_5FB550(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 180))(v3, a2);
  v5 = word_75EE1C;
  sub_5FB550(a1);
  return sub_5ECD00(a3 != 0 ? 69 : 31, -1, v5);
}


//======================================================================
// sub_403B40
// entry 00403b40  size 43  status ok
//======================================================================

int __thiscall sub_403B40(void *this, int a2)
{
  int v2; // eax

  v2 = sub_5FB2B0(a2);
  return (*(int (__thiscall **)(int, int, void *))(*(_DWORD *)v2 + 116))(v2, v2, this);
}


//======================================================================
// sub_403B70
// entry 00403b70  size 43  status ok
//======================================================================

int __thiscall sub_403B70(void *this, int a2)
{
  int v2; // eax

  v2 = sub_5FB2B0(a2);
  return (*(int (__thiscall **)(int, int, void *))(*(_DWORD *)v2 + 112))(v2, v2, this);
}


//======================================================================
// sub_403BA0
// entry 00403ba0  size 117  status ok
//======================================================================

_BYTE *__thiscall sub_403BA0(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &BaccaratDealScript::`vftable';
  *(this + 36) = 1;
  *((_DWORD *)this + 10) = 2 * sub_637810(4);
  return this;
}


//======================================================================
// sub_403CA0
// entry 00403ca0  size 596  status ok
//======================================================================

int __thiscall sub_403CA0(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 v5; // ax

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = 0;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      v3 = sub_6436C0(*(_DWORD *)(dword_7902F0 + 4312));
      sub_409400(*(this + 8), v3);
      sub_401CB0((_DWORD **)dword_7902F8);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, *(this + 10));
      break;
    case 2:
      if ( sub_4094B0(4) == 2 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, *(this + 10));
      }
      else
      {
        if ( *(this + 8) )
          *(this + 8) = 0;
        else
          *(this + 8) = 4;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, *(this + 10));
      }
      break;
    case 3:
      sub_408F10(1);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, *(this + 10));
      break;
    case 4:
      if ( (unsigned __int8)sub_4091F0(dword_7902F0) )
      {
        v4 = sub_6436C0(*(_DWORD *)(dword_7902F0 + 4312));
        sub_409400(0, v4);
        sub_401CB0((_DWORD **)dword_7902F8);
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 5);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, *(this + 10));
      break;
    case 5:
      if ( (unsigned __int8)sub_409230(dword_7902F0) )
      {
        v5 = sub_6436C0(*(_DWORD *)(dword_7902F0 + 4312));
        sub_409400(4, v5);
        sub_401CB0((_DWORD **)dword_7902F8);
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, *(this + 10));
      break;
    case 6:
      sub_408F10(2);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
        *(_DWORD *)(dword_7902EC + 4),
        1,
        0);
      result = sub_5FC420(0);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_403F50
// entry 00403f50  size 54  status ok
//======================================================================

bool __thiscall sub_403F50(_BYTE *this)
{
  return *(this + 8) || *(this + 9);
}


//======================================================================
// sub_403FF0
// entry 00403ff0  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_403FF0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = *(this + 94) + 32 * a3 + 72;
  v5 = *(_DWORD *)(v4 + 8 * a4);
  v6 = *(_DWORD *)(v4 + 8 * a4 + 4);
  *a2 = v5;
  a2[1] = v6;
  return a2;
}


//======================================================================
// sub_404030
// entry 00404030  size 16  status ok
//======================================================================

int sub_404030()
{
  return 20;
}


//======================================================================
// sub_404040
// entry 00404040  size 18  status ok
//======================================================================

int __stdcall sub_404040(int a1, int a2)
{
  return -4;
}


//======================================================================
// sub_404160
// entry 00404160  size 146  status ok
//======================================================================

int __thiscall sub_404160(_BYTE *this, int a2)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_7902EC + 4) + 8))(
             *(_DWORD *)(dword_7902EC + 4),
             500,
             a2);
  sub_4079B0(dword_7902F0, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
           *(_DWORD *)(dword_7902EC + 4),
           1,
           0);
}


//======================================================================
// sub_404200
// entry 00404200  size 1141  status ok
//======================================================================

int __thiscall sub_404200(_BYTE *this)
{
  _BYTE *v3; // [esp+8h] [ebp-74h]
  int v6; // [esp+1Ch] [ebp-60h]
  int v7; // [esp+20h] [ebp-5Ch]
  int v8; // [esp+24h] [ebp-58h]
  CImageDisplay *v9; // [esp+28h] [ebp-54h]
  int v10; // [esp+34h] [ebp-48h]
  CImageDisplay *v11; // [esp+38h] [ebp-44h]
  CImageDisplay *v12; // [esp+48h] [ebp-34h]
  int v13; // [esp+58h] [ebp-24h]
  _BYTE *v14; // [esp+60h] [ebp-1Ch]
  int v15; // [esp+68h] [ebp-14h]
  int v16; // [esp+6Ch] [ebp-10h]
  int v17; // [esp+6Ch] [ebp-10h]

  sub_401CB0((_DWORD **)dword_7902F8);
  if ( *(_DWORD *)(dword_7902F0 + 4320) != -1 )
    return sub_404BA0(this);
  if ( *(this + 4) )
  {
    v16 = sub_407D00(dword_7902F0);
    if ( *((_BYTE *)dword_162EE84 + 37) && v16 != -1 )
    {
      v12 = (CImageDisplay *)sub_5DCB00(v16);
      if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v16) + 1185) = 1;
        v16 = sub_407D00(dword_7902F0);
      }
    }
    if ( v16 == -1 )
    {
      if ( !*(this + 10) )
      {
        sub_4080D0(dword_7902F0);
        *(this + 10) = 1;
      }
      if ( *(this + 6) )
      {
        if ( (unsigned __int8)sub_407CC0(dword_7902F0) )
        {
          sub_407BE0(-1, 0);
          v14 = operator new(0x2Cu);
          if ( v14 )
            v3 = sub_403BA0(v14);
          else
            v3 = 0;
          return sub_5DA390(v3);
        }
        else
        {
          sub_402370((_DWORD **)dword_7902F8);
          v17 = sub_4082E0(dword_7902F0);
          if ( v17 == -1 )
          {
            if ( *(this + 7) )
            {
              sub_407BE0(-1, 0);
              if ( !(unsigned __int8)sub_5DA7B0(dword_7902EC) || *(this + 9) )
              {
                if ( *((_BYTE *)dword_162EE84 + 37) )
                  return sub_404160(this, 200);
                else
                  return sub_401F30((void *)dword_7902F8);
              }
              else
              {
                *(this + 9) = 1;
                v6 = dword_7902F0;
                *(_DWORD *)(dword_7902F0 + 4320) = 3;
                *(_DWORD *)(v6 + 4324) = -1;
                return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
                         *(_DWORD *)(dword_7902EC + 4),
                         1,
                         0);
              }
            }
            else
            {
              *(this + 7) = 1;
              sub_4084F0(dword_7902F0);
              sub_409630(dword_7902F0);
              return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
                       *(_DWORD *)(dword_7902EC + 4),
                       1,
                       0);
            }
          }
          else
          {
            sub_407BE0(v17, 0);
            v15 = sub_404AD0(v17);
            v9 = (CImageDisplay *)sub_5DCB00(v17);
            if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
            {
              v7 = -1;
            }
            else
            {
              v7 = v17;
            }
            v8 = dword_7902F0;
            *(_DWORD *)(dword_7902F0 + 4320) = v15;
            *(_DWORD *)(v8 + 4324) = v7;
            return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
                     *(_DWORD *)(dword_7902EC + 4),
                     1,
                     0);
          }
        }
      }
      else
      {
        *(this + 6) = 1;
        v10 = dword_7902F0;
        *(_DWORD *)(dword_7902F0 + 4320) = 1;
        *(_DWORD *)(v10 + 4324) = 4;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
                 *(_DWORD *)(dword_7902EC + 4),
                 1,
                 0);
      }
    }
    else
    {
      v11 = (CImageDisplay *)sub_5DCB00(v16);
      if ( CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3 )
      {
        sub_407BE0(v16, 1);
      }
      else
      {
        sub_407BE0(v16, 0);
      }
      return sub_404680(this, v16);
    }
  }
  else
  {
    *(this + 4) = 1;
    v13 = dword_7902F0;
    *(_DWORD *)(dword_7902F0 + 4320) = 0;
    *(_DWORD *)(v13 + 4324) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
             *(_DWORD *)(dword_7902EC + 4),
             1,
             0);
  }
}


//======================================================================
// sub_404680
// entry 00404680  size 1099  status ok
//======================================================================

int __thiscall sub_404680(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  char v10; // [esp+0h] [ebp-14Ch]
  int v13; // [esp+14h] [ebp-138h]
  int v14; // [esp+18h] [ebp-134h]
  int v15; // [esp+1Ch] [ebp-130h]
  CImageDisplay *v16; // [esp+24h] [ebp-128h]
  char Buffer[260]; // [esp+3Ch] [ebp-110h] BYREF
  __int64 v18; // [esp+144h] [ebp-8h] BYREF

  sub_401BC0();
  v16 = (CImageDisplay *)sub_407BB0(dword_7902F0);
  if ( CImageDisplay::GetDisplayFormat(v16)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v16)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
      sub_57AB80(6, &unk_705308);
    else
      sub_57AE30(dword_793578);
    if ( (unsigned __int8)sub_407DE0(a2) )
      return sub_401FB0();
    v2 = sub_5DCB00(a2);
    v3 = sub_5D5A50(v2);
    if ( v3 >= (*(int (__thiscall **)(int))(*(_DWORD *)dword_7902EC + 688))(dword_7902EC) )
    {
      return sub_401FB0();
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_7902EC) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return sub_404200(this);
    }
    else
    {
      v5 = sub_5DCB00(a2);
      return sub_5DBB70(v5);
    }
  }
  else if ( *(this + 5) )
  {
    *(this + 5) = 0;
    v7 = sub_5DCB00(a2);
    v8 = sub_5D5A50(v7);
    if ( v8 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7902EC + 688))(dword_7902EC) )
    {
      if ( (unsigned __int8)sub_5DA7B0(dword_7902EC) )
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      else
        sub_5D9570(a2);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
    else
    {
      v9 = sub_401040(a2);
      v18 = sub_64C8A0(v9, 0);
      if ( (int)sub_62FC30(0, 100) >= 90 )
      {
        v13 = dword_7902F0;
        *(_DWORD *)(dword_7902F0 + 4320) = 6;
        *(_DWORD *)(v13 + 4324) = a2;
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_7902F0 + 12 * a2 + 4) + 196))(
          *(_DWORD *)(dword_7902F0 + 12 * a2 + 4),
          &v18,
          0,
          1);
      }
      else if ( (int)sub_62FC30(0, 100) >= 50 )
      {
        v14 = dword_7902F0;
        *(_DWORD *)(dword_7902F0 + 4320) = 4;
        *(_DWORD *)(v14 + 4324) = a2;
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_7902F0 + 12 * a2 + 8) + 196))(
          *(_DWORD *)(dword_7902F0 + 12 * a2 + 8),
          &v18,
          0,
          1);
      }
      else
      {
        v15 = dword_7902F0;
        *(_DWORD *)(dword_7902F0 + 4320) = 5;
        *(_DWORD *)(v15 + 4324) = a2;
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_7902F0 + 12 * a2 + 12) + 196))(
          *(_DWORD *)(dword_7902F0 + 12 * a2 + 12),
          &v18,
          0,
          1);
      }
      sprintf(Buffer, "AI player %d added %d to bet\n", a2, (_DWORD)v18);
      sub_62FDE0(Buffer, v10);
      *(_BYTE *)(sub_407BB0(dword_7902F0) + 1184) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
               *(_DWORD *)(dword_7902EC + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 5) = 1;
    v6 = sub_637810(2);
    return sub_5DA360(v6);
  }
}


//======================================================================
// sub_404AD0
// entry 00404ad0  size 194  status ok
//======================================================================

int __stdcall sub_404AD0(int a1)
{
  CImageDisplay *v3; // [esp+8h] [ebp-10h]

  sub_408C00(a1);
  *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7902EC + 4) + 4))(*(_DWORD *)(dword_7902EC + 4), 1);
  if ( !(unsigned __int8)sub_408B40(a1) )
    return 2;
  v3 = (CImageDisplay *)sub_5DCB00(a1);
  if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 3 )
  {
    return 2;
  }
  else
  {
    return 7;
  }
}


//======================================================================
// sub_404BA0
// entry 00404ba0  size 1543  status ok
//======================================================================

int sub_404BA0()
{
  int v1; // eax
  int v2; // [esp+0h] [ebp-D4h]
  bool v4; // [esp+8h] [ebp-CCh]
  bool v5; // [esp+Ch] [ebp-C8h]
  bool v6; // [esp+10h] [ebp-C4h]
  bool v7; // [esp+14h] [ebp-C0h]
  bool v8; // [esp+18h] [ebp-BCh]
  CImageDisplay *v9; // [esp+24h] [ebp-B0h]
  int v10; // [esp+30h] [ebp-A4h]
  CImageDisplay *v11; // [esp+34h] [ebp-A0h]
  CImageDisplay *v12; // [esp+40h] [ebp-94h]
  CImageDisplay *v13; // [esp+4Ch] [ebp-88h]
  CImageDisplay *v14; // [esp+58h] [ebp-7Ch]
  CImageDisplay *v15; // [esp+64h] [ebp-70h]
  __int64 v16; // [esp+80h] [ebp-54h] BYREF
  int v17; // [esp+88h] [ebp-4Ch]
  int v18; // [esp+8Ch] [ebp-48h]
  int v19; // [esp+90h] [ebp-44h]
  _DWORD v20[4]; // [esp+94h] [ebp-40h] BYREF
  double v21; // [esp+A4h] [ebp-30h]
  double v22; // [esp+ACh] [ebp-28h]
  int v23; // [esp+B4h] [ebp-20h]
  int v24; // [esp+B8h] [ebp-1Ch]
  double v25; // [esp+BCh] [ebp-18h]
  double v26; // [esp+C4h] [ebp-10h]
  int v27; // [esp+CCh] [ebp-8h]
  int v28; // [esp+D0h] [ebp-4h]

  v19 = -1;
  v23 = -1;
  v17 = -1;
  v25 = 0.0;
  v26 = 1.0;
  v28 = *(_DWORD *)(dword_7902F0 + 4316);
  v24 = -1;
  v18 = -1;
  v27 = -1;
  v16 = sub_64C8A0(0, 0);
  v19 = *(_DWORD *)(dword_7902F0 + 4324);
  switch ( *(_DWORD *)(dword_7902F0 + 4320) )
  {
    case 0:
      v24 = 170000;
      break;
    case 1:
      v24 = 170006;
      break;
    case 2:
      sub_5DCB00(v28);
      sub_5D6020(&v16);
      if ( *(int *)(sub_5DCB00(v28) + 1192) <= 3 || sub_62FBF0(2) )
      {
        if ( *(int *)(sub_5DCB00(v28) + 1192) >= -3 || sub_62FBF0(2) )
        {
          if ( *(_BYTE *)(v28 + dword_7902F0 + 184) )
          {
            v13 = (CImageDisplay *)sub_5DCB00(v28);
            v6 = CImageDisplay::GetDisplayFormat(v13)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v13)->rcSource.left == 3;
            v23 = v6 ? 1043 : 1022;
            v26 = 1.0;
          }
          else if ( (int)v16 >= 0 )
          {
            if ( (int)v16 > 0 )
            {
              v11 = (CImageDisplay *)sub_5DCB00(v28);
              v4 = CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
                || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3;
              v23 = v4 ? 1008 : 1028;
              v26 = 0.5;
            }
          }
          else
          {
            v12 = (CImageDisplay *)sub_5DCB00(v28);
            v5 = CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3;
            v23 = v5 ? 1000 : 1026;
            v26 = 0.5;
          }
        }
        else
        {
          v14 = (CImageDisplay *)sub_5DCB00(v28);
          v7 = CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3;
          v23 = v7 ? 1033 : 1023;
          v26 = 0.75;
        }
      }
      else
      {
        v15 = (CImageDisplay *)sub_5DCB00(v28);
        v8 = CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 3;
        v23 = v8 ? 1044 : 1024;
        v26 = 0.75;
      }
      break;
    case 4:
      if ( !(unsigned __int8)sub_5DA7B0(dword_7902EC) )
      {
        v23 = 2028;
        v26 = 0.5;
      }
      break;
    case 5:
      if ( !(unsigned __int8)sub_5DA7B0(dword_7902EC) )
      {
        v23 = 2029;
        v26 = 0.5;
      }
      break;
    case 6:
      if ( !(unsigned __int8)sub_5DA7B0(dword_7902EC) )
      {
        v23 = 2030;
        v26 = 0.5;
      }
      break;
    case 7:
      v23 = 2031;
      break;
    case 8:
      v23 = 2032;
      break;
    case 9:
      v23 = 2033;
      break;
    default:
      break;
  }
  v10 = dword_7902F0;
  *(_DWORD *)(dword_7902F0 + 4320) = -1;
  *(_DWORD *)(v10 + 4324) = -1;
  if ( v19 == 4 )
  {
    if ( v24 == -1 )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( v18 == -1 )
      return sub_5CD7C0(v24, *(_DWORD *)(dword_162EE80 + 4), 0);
    else
      return sub_5CD700(v24, v18, *(_DWORD *)(dword_162EE80 + 4), 0);
  }
  else
  {
    if ( v23 == -1 || !sub_636730(dword_162EE84) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( v19 > -1 )
    {
      v9 = (CImageDisplay *)sub_5DCB00(v19);
      if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
      {
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    if ( v19 == -1 )
      v2 = sub_636C50(dword_162EE84);
    else
      v2 = v19;
    v20[0] = v2;
    v20[1] = v23;
    v20[2] = v17;
    v21 = v25;
    v22 = v26;
    v1 = sub_637810(2);
    return sub_639390(v20, *(_DWORD *)(dword_162EE80 + 4), v1, 1);
  }
}


//======================================================================
// sub_405200
// entry 00405200  size 162  status ok
//======================================================================

_DWORD *__thiscall sub_405200(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &BaccaratRoom::`vftable';
  sub_5F1AD0(3216000);
  dword_7902EC = (int)this;
  dword_7902F0 = 0;
  dword_7902F4 = 0;
  dword_7902F8 = 0;
  dword_7902FC = 0;
  *(this + 32) = 0;
  return this;
}


//======================================================================
// sub_4052B0
// entry 004052b0  size 324  status ok
//======================================================================

int __thiscall sub_4052B0(_DWORD *this)
{
  *this = &BaccaratRoom::`vftable';
  dword_7902EC = 0;
  if ( dword_7902F0 )
    (**(void (__thiscall ***)(int, int))dword_7902F0)(dword_7902F0, 1);
  dword_7902F0 = 0;
  if ( dword_7902F4 )
    (**(void (__thiscall ***)(int, int))dword_7902F4)(dword_7902F4, 1);
  dword_7902F4 = 0;
  if ( dword_7902F8 )
    (**(void (__thiscall ***)(int, int))dword_7902F8)(dword_7902F8, 1);
  dword_7902F8 = 0;
  if ( dword_7902FC )
    (**(void (__thiscall ***)(int, int))dword_7902FC)(dword_7902FC, 1);
  dword_7902FC = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_405400
// entry 00405400  size 486  status ok
//======================================================================

int __thiscall sub_405400(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-4Ch]
  _AFX_OLE_STATE *v3; // [esp+8h] [ebp-48h]
  ATL::CCRTHeap *v4; // [esp+Ch] [ebp-44h]
  _AFX_OLE_STATE *v5; // [esp+10h] [ebp-40h]
  int v6; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+18h] [ebp-38h]
  _DWORD *v9; // [esp+1Ch] [ebp-34h]
  _AFX_OLE_STATE *v10; // [esp+24h] [ebp-2Ch]
  ATL::CCRTHeap *v11; // [esp+2Ch] [ebp-24h]
  _AFX_OLE_STATE *v12; // [esp+34h] [ebp-1Ch]

  sub_5D8230();
  if ( operator new(0x10E8u) )
    v6 = sub_407620();
  else
    v6 = 0;
  dword_7902F0 = v6;
  sub_407820();
  v12 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_7902F4 = (int)v5;
  v11 = (ATL::CCRTHeap *)operator new(0x6Cu);
  if ( v11 )
    v4 = sub_4012B0(v11);
  else
    v4 = 0;
  dword_7902F8 = (int)v4;
  sub_401580(v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_7902FC = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &BaccaratRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8, -1);
  return sub_404160((_BYTE *)dword_7902F4, 0);
}


//======================================================================
// sub_4055F0
// entry 004055f0  size 274  status ok
//======================================================================

int __thiscall sub_4055F0(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+4h] [ebp-20h]
  _DWORD *v5; // [esp+10h] [ebp-14h]

  if ( a2 == -1 )
    a2 = sub_408460(dword_7902F0);
  if ( a2 < 0 )
    a2 = 0;
  if ( a2 > 3 )
    a2 = 3;
  if ( !*(this + 32) )
  {
    v5 = operator new(0x1C4u);
    if ( v5 )
      v3 = sub_402FC0(v5);
    else
      v3 = 0;
    *(this + 32) = v3;
    *(_DWORD *)(*(this + 32) + 448) = a2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 32) + 60))(*(this + 32));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 32));
}


//======================================================================
// sub_405710
// entry 00405710  size 50  status ok
//======================================================================

int __thiscall sub_405710(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 32) )
  {
    result = sub_5F8990(*(this + 32));
    *(this + 32) = 0;
  }
  return result;
}


//======================================================================
// sub_405750
// entry 00405750  size 293  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_405750(_DWORD *this, int a2)
{
  const struct tagVIDEOINFO *result; // eax
  int v4; // [esp+Ch] [ebp-1Ch]
  CImageDisplay *v6; // [esp+14h] [ebp-14h]

  result = (const struct tagVIDEOINFO *)sub_5D7F40(a2);
  if ( dword_7902F0 )
  {
    result = *(const struct tagVIDEOINFO **)(dword_7902F0 + 4316);
    v4 = (int)result;
  }
  else
  {
    v4 = -1;
  }
  if ( *(_DWORD *)(a2 + 24) != 4 || (result = (const struct tagVIDEOINFO *)a2, *(_BYTE *)(a2 + 4)) || v4 == -1 )
  {
    if ( *(_DWORD *)(a2 + 24) == 22 )
    {
      result = (const struct tagVIDEOINFO *)a2;
      if ( !*(_BYTE *)(a2 + 4) && v4 != -1 )
      {
        result = (const struct tagVIDEOINFO *)tolower(*(char *)(a2 + 20));
        if ( result == (const struct tagVIDEOINFO *)112 )
        {
          v6 = (CImageDisplay *)sub_5DCB00(v4);
          result = CImageDisplay::GetDisplayFormat(v6);
          if ( result->rcSource.left == 2 )
            return (const struct tagVIDEOINFO *)sub_407FA0(v4);
          result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(v6)->rcSource.left;
          if ( result == (const struct tagVIDEOINFO *)3 )
            return (const struct tagVIDEOINFO *)sub_407FA0(v4);
        }
      }
    }
  }
  else
  {
    result = (const struct tagVIDEOINFO *)tolower(*(char *)(a2 + 20));
    if ( result == (const struct tagVIDEOINFO *)115 )
      return (const struct tagVIDEOINFO *)sub_4055F0(this, v4);
  }
  return result;
}


//======================================================================
// sub_405880
// entry 00405880  size 174  status ok
//======================================================================

int __stdcall sub_405880(int a1, int a2)
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
    sub_5FE240(5019, -1, -1, 0);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_405930
// entry 00405930  size 49  status ok
//======================================================================

int __thiscall sub_405930(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3216001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_405970
// entry 00405970  size 190  status ok
//======================================================================

int __thiscall sub_405970(_DWORD *this, int a2, int a3)
{
  char v4; // [esp+0h] [ebp-1Ch]
  CImageDisplay *v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+18h] [ebp-4h]

  v6 = *(_DWORD *)(dword_7902F0 + 4316);
  if ( a2 == 3216002 )
  {
    sub_4055F0(this, v6);
  }
  else if ( a2 == 3216003 )
  {
    v5 = (CImageDisplay *)sub_5DCB00(v6);
    v4 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
    if ( v4 )
      sub_407FA0(v6);
    sub_62FDE0("Baccarat: Place Last Bet\n", v4);
  }
  return sub_5DC7D0(a2, a3);
}


//======================================================================
// sub_405A50
// entry 00405a50  size 35  status ok
//======================================================================

char __thiscall sub_405A50(void *this)
{
  if ( dword_7902F0 )
    return sub_407B00(dword_7902F0, this);
  else
    return 1;
}


//======================================================================
// sub_405A80
// entry 00405a80  size 195  status ok
//======================================================================

int __stdcall sub_405A80(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int *v4; // eax
  int v5; // edx
  int v6; // [esp+4h] [ebp-28h]
  unsigned __int8 v7; // [esp+Bh] [ebp-21h]
  _BYTE v8[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+1Ch] [ebp-10h]
  __int64 v11; // [esp+20h] [ebp-Ch]
  int i; // [esp+28h] [ebp-4h]

  v11 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v11;
  v7 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v7;
  if ( !v7 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v6 = *(_DWORD *)(dword_7902F0 + 4 * (i + 3 * a1) + 4);
      v3 = *(_DWORD *)(v6 + 32 * a1 + 76);
      v9 = *(_DWORD *)(v6 + 32 * a1 + 72);
      v10 = v3;
      v4 = (int *)sub_64C5C0(v8, v9, v3);
      v5 = *v4;
      result = v4[1];
      *(_DWORD *)a2 = v5;
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}


//======================================================================
// sub_405B50
// entry 00405b50  size 157  status ok
//======================================================================

int __thiscall sub_405B50(_DWORD **this)
{
  int v1; // eax

  if ( (unsigned __int8)sub_407DE0(*(_DWORD *)(dword_7902F0 + 4316)) )
    *(_BYTE *)(sub_407BB0(dword_7902F0) + 1184) = 1;
  else
    *(_BYTE *)(sub_407BB0(dword_7902F0) + 1185) = 1;
  v1 = sub_407BB0(dword_7902F0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 20))(v1, v1);
  sub_5DB890(this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_405BF0
// entry 00405bf0  size 66  status ok
//======================================================================

int __thiscall sub_405BF0(void *this, char a2)
{
  sub_408EE0(a2 == 0);
  sub_5DB9B0(this);
  sub_4079B0(dword_7902F0, this);
  return sub_404160((_BYTE *)dword_7902F4, 0);
}


//======================================================================
// sub_405C40
// entry 00405c40  size 195  status ok
//======================================================================

char __stdcall sub_405C40(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v8; // [esp+4h] [ebp-130h]
  char Destination[28]; // [esp+10h] [ebp-124h] BYREF
  char Buffer[260]; // [esp+2Ch] [ebp-108h] BYREF

  if ( a5 < 1000000 )
    sub_5ECC60(65);
  else
    sub_5ECC60(85);
  v8 = sub_64C8A0(a5, a6);
  sub_64C8D0(v8, SHIDWORD(v8), Destination, 1, 1, 0);
  sprintf(Buffer, "%s", Destination);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)a4 + 180))(a4, Buffer);
  return 1;
}


//======================================================================
// sub_405D10
// entry 00405d10  size 50  status ok
//======================================================================

int __stdcall sub_405D10(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 390;
  v2[1] = 150;
  v2[2] = 531;
  v2[3] = 9;
  return v2[a1];
}


//======================================================================
// sub_405D50
// entry 00405d50  size 50  status ok
//======================================================================

int __stdcall sub_405D50(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 305;
  v2[1] = 305;
  v2[2] = 230;
  v2[3] = 230;
  return v2[a1];
}


//======================================================================
// sub_405D90
// entry 00405d90  size 35  status ok
//======================================================================

int sub_405D90()
{
  if ( dword_7902F0 )
    return sub_407BB0(dword_7902F0);
  else
    return 0;
}


//======================================================================
// sub_405DC0
// entry 00405dc0  size 22  status ok
//======================================================================

int __thiscall sub_405DC0(void *this)
{
  return sub_408E80(dword_7902F0, this);
}


//======================================================================
// sub_405DE0
// entry 00405de0  size 115  status ok
//======================================================================

int __stdcall sub_405DE0(int a1)
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
  sub_408E40(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_408E40(-1);
  *(_DWORD *)(v5 + 12) = v3;
  *(_DWORD *)(v5 + 16) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_405E60
// entry 00405e60  size 119  status ok
//======================================================================

int __stdcall sub_405E60(int a1)
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
  sub_408E40(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_408E40(a1);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_405EE0
// entry 00405ee0  size 18  status ok
//======================================================================

int __stdcall sub_405EE0(int a1)
{
  return 1046;
}


//======================================================================
// sub_405F00
// entry 00405f00  size 72  status ok
//======================================================================

int __thiscall sub_405F00(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_401CB0((_DWORD **)dword_7902F8);
  sub_4079B0(dword_7902F0, this);
  return sub_404200((_BYTE *)dword_7902F4);
}


//======================================================================
// sub_405F50
// entry 00405f50  size 36  status ok
//======================================================================

int __thiscall sub_405F50(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_405F80
// entry 00405f80  size 28  status ok
//======================================================================

int __stdcall sub_405F80(int a1)
{
  return sub_407E60(a1);
}


//======================================================================
// sub_405FA0
// entry 00405fa0  size 570  status ok
//======================================================================

int __thiscall sub_405FA0(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int result; // eax
  int v13; // eax
  int v14; // [esp+4h] [ebp-2Ch]
  int v15; // [esp+Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-20h]
  _DWORD *v17; // [esp+14h] [ebp-1Ch]
  _DWORD *v19; // [esp+1Ch] [ebp-14h]

  v5 = sub_630F40("SID_CASINO_DEALERVOICE");
  v6 = sub_5F9EF0(0, 50, 3200201, 20, 85, 2, v5, 31, 69, 66, -1, 20, 0);
  sub_5FF5A0(v6);
  v7 = sub_630F40("SID_CASINO_CONTINUEBUTTON");
  v8 = sub_5F9EF0(0, 51, 3200201, 20, 105, 2, v7, 31, 69, 66, -1, 20, 0);
  sub_5FF5A0(v8);
  v9 = (char *)sub_630F40("SID_GENERIC_HELP");
  v10 = sub_5FA790(0, 10, v9, 72, 240, 84, 262, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v10);
  v19 = operator new(0x1D0u);
  if ( v19 )
  {
    sub_5EC5A0(v19);
    *v19 = &BaccaratSettingsHelpText::`vftable';
    v17 = v19;
  }
  else
  {
    v17 = 0;
  }
  v11 = sub_5FA5B0(v17, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v11);
  if ( (unsigned __int8)sub_408E80(dword_7902F0) )
  {
    v16 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 244))(v16);
  }
  result = (unsigned __int8)sub_408EC0(dword_7902F0);
  if ( (_BYTE)result )
  {
    v15 = sub_5FB350(51);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 244))(v15);
  }
  if ( dword_7947B0 )
  {
    if ( (unsigned __int8)sub_5CDD60(dword_7947B0) )
    {
      v13 = sub_5FB350(51);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 248))(v13);
    }
    else
    {
      v14 = sub_5FB350(51);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
    }
  }
  *(this + 124) = 0;
  return result;
}


//======================================================================
// sub_4061E0
// entry 004061e0  size 221  status ok
//======================================================================

int __thiscall sub_4061E0(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  char v4; // al
  int v5; // eax
  char v6; // al
  int v7; // eax
  char v8; // al
  int result; // eax

  v3 = sub_5FB350(50);
  v4 = sub_600230(v3);
  sub_408EA0(v4);
  v5 = sub_5FB350(51);
  v6 = sub_600230(v5);
  sub_408EE0(v6);
  if ( dword_7947B0 )
  {
    v7 = sub_5FB350(51);
    v8 = sub_600230(v7);
    sub_5CDD10(v8 == 0);
  }
  if ( (unsigned __int8)sub_5DA830(dword_7902EC) )
    return sub_401CB0((_DWORD **)dword_7902F8);
  sub_637610(dword_162EE84);
  sub_401CB0((_DWORD **)dword_7902F8);
  result = (int)this;
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_401CB0((_DWORD **)dword_7902F8);
    sub_4079B0(dword_7902F0, this);
    return sub_404200((_BYTE *)dword_7902F4);
  }
  return result;
}


//======================================================================
// sub_4062C0
// entry 004062c0  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_4062C0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v4 = 306;
  v5[0] = 210;
  v5[1] = 176;
  v5[2] = 207;
  v5[3] = 458;
  v5[4] = 130;
  v5[5] = 20;
  v5[6] = 134;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 4 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\baccaratroom.cpp", 420);
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
// sub_406360
// entry 00406360  size 284  status ok
//======================================================================

void __thiscall sub_406360(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-1Ch]
  _DWORD v6[3]; // [esp+8h] [ebp-18h]
  int v7; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]

  v9 = -1;
  if ( dword_163068C )
  {
    v5 = sub_5FB350(50);
    v6[0] = 0;
    v6[1] = sub_5FB350(51);
    v6[2] = 1;
    v7 = 2;
    for ( i = 0; i < v7; ++i )
    {
      if ( v6[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v6[2 * i - 1] + 132))(v6[2 * i - 1], a2) )
      {
        v9 = v6[2 * i];
        break;
      }
    }
    if ( v9 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else
    {
      if ( !v9 )
      {
        v2 = sub_630F40("SID_CASINO_HELP_DEALERVOICE");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
      }
      if ( v9 == 1 )
      {
        v3 = sub_630F40("SID_CASINO_HELP_CONTINUEBUTTON");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
    }
  }
}


//======================================================================
// sub_406480
// entry 00406480  size 122  status ok
//======================================================================

int __thiscall sub_406480(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_404200((_BYTE *)dword_7902F4);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\baccaratroom.cpp", 483);
  sub_4079B0(dword_7902F0, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_406500
// entry 00406500  size 31  status ok
//======================================================================

_DWORD *__stdcall sub_406500(_DWORD *a1, _DWORD *a2)
{
  *a1 = 0;
  *a2 = 0;
  return a1;
}


//======================================================================
// sub_406520
// entry 00406520  size 16  status ok
//======================================================================

char __stdcall sub_406520(int a1, char a2)
{
  return a2;
}


//======================================================================
// sub_406530
// entry 00406530  size 124  status ok
//======================================================================

int sub_406530()
{
  if ( operator new(0x1D0u) )
    return sub_650BB0(1, 0);
  else
    return 0;
}


//======================================================================
// sub_4065B0
// entry 004065b0  size 61  status ok
//======================================================================

char __stdcall sub_4065B0(void (__thiscall ***a1)(_DWORD, int))
{
  if ( a1 )
    (**a1)(a1, 1);
  return 1;
}


//======================================================================
// sub_4065F0
// entry 004065f0  size 16  status ok
//======================================================================

const char *sub_4065F0()
{
  return &Source;
}


//======================================================================
// sub_406600
// entry 00406600  size 20  status ok
//======================================================================

_BYTE *__thiscall sub_406600(_BYTE *this, int a2)
{
  *(this + 64) = 0;
  return this;
}


//======================================================================
// sub_406620
// entry 00406620  size 40  status ok
//======================================================================

int sub_406620()
{
  sub_5E9F20((char)"false", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\room.h", 50);
  return 1;
}


//======================================================================
// sub_406660
// entry 00406660  size 24  status ok
//======================================================================

int __thiscall sub_406660(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 116))(this, this);
}


//======================================================================
// sub_406680
// entry 00406680  size 33  status ok
//======================================================================

int __thiscall sub_406680(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 420))(this, a2);
}


//======================================================================
// sub_4066C0
// entry 004066c0  size 17  status ok
//======================================================================

char __thiscall sub_4066C0(_BYTE *this)
{
  return *(this + 57);
}


//======================================================================
// sub_4066E0
// entry 004066e0  size 22  status ok
//======================================================================

_BYTE *__thiscall sub_4066E0(_BYTE *this, char a2)
{
  *(this + 57) = a2;
  return this;
}


//======================================================================
// sub_406700
// entry 00406700  size 17  status ok
//======================================================================

char __thiscall sub_406700(_BYTE *this)
{
  return *(this + 58);
}


//======================================================================
// sub_406720
// entry 00406720  size 22  status ok
//======================================================================

_BYTE *__thiscall sub_406720(_BYTE *this, char a2)
{
  *(this + 58) = a2;
  return this;
}


//======================================================================
// sub_406740
// entry 00406740  size 60  status ok
//======================================================================

int __thiscall sub_406740(_DWORD *this)
{
  if ( *(this + 15) )
    return sub_6523B0(*(this + 15));
  else
    return sub_5E9F20((char)"false", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\room.h", 229);
}


//======================================================================
// sub_406780
// entry 00406780  size 106  status ok
//======================================================================

void __thiscall sub_406780(int this, char a2)
{
  if ( *(_DWORD *)(this + 60) )
  {
    ATL::CComCriticalSection::~CComCriticalSection(*(ATL::CComCriticalSection **)(this + 60));
    if ( a2 )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 8))(*(_DWORD *)(this + 4), 1, 0);
      sub_5FC420(0);
    }
  }
  else
  {
    sub_5E9F20((char)"false", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\room.h", 236);
  }
}


//======================================================================
// sub_4067F0
// entry 004067f0  size 68  status ok
//======================================================================

int __thiscall sub_4067F0(_DWORD *this, int a2)
{
  if ( *(this + 15) )
    return sub_652AD0(a2);
  sub_5E9F20((char)"false", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\room.h", 248);
  return 0;
}


//======================================================================
// sub_406860
// entry 00406860  size 16  status ok
//======================================================================

int sub_406860()
{
  return 3200003;
}


//======================================================================
// sub_406870
// entry 00406870  size 19  status ok
//======================================================================

int __stdcall sub_406870(int a1)
{
  return a1 - 39;
}


//======================================================================
// sub_406890
// entry 00406890  size 16  status ok
//======================================================================

int sub_406890()
{
  return 8;
}


//======================================================================
// sub_4068D0
// entry 004068d0  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_4068D0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &BaccaratRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_406900
// entry 00406900  size 120  status ok
//======================================================================

_DWORD *sub_406900()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x84u);
  if ( v2 )
    return sub_405200(v2);
  else
    return 0;
}


//======================================================================
// sub_406980
// entry 00406980  size 51  status ok
//======================================================================

char __stdcall sub_406980(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_BACCARAT");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_4069E0
// entry 004069e0  size 16  status ok
//======================================================================

int sub_4069E0()
{
  return 3216000;
}


//======================================================================
// sub_4069F0
// entry 004069f0  size 16  status ok
//======================================================================

const char *sub_4069F0()
{
  return "baccarat";
}


//======================================================================
// sub_406A10
// entry 00406a10  size 16  status ok
//======================================================================

char **sub_406A10()
{
  return off_707180;
}


//======================================================================
// sub_406A20
// entry 00406a20  size 16  status ok
//======================================================================

char **sub_406A20()
{
  return &off_70718C;
}


//======================================================================
// sub_406A50
// entry 00406a50  size 94  status ok
//======================================================================

char __stdcall sub_406A50(_DWORD *a1, int a2)
{
  if ( !a1 )
    return 0;
  *a1 = 4;
  a1[1] = 1;
  a1[2] = 4;
  a1[3] = 1;
  a1[4] = 4;
  a1[5] = 0;
  a1[6] = 3;
  return 1;
}


//======================================================================
// sub_406AB0
// entry 00406ab0  size 16  status ok
//======================================================================

int sub_406AB0()
{
  return 20;
}


//======================================================================
// sub_406AC0
// entry 00406ac0  size 46  status ok
//======================================================================

char __stdcall sub_406AC0(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  return 1;
}


//======================================================================
// sub_406AF0
// entry 00406af0  size 84  status ok
//======================================================================

char __stdcall sub_406AF0(_BYTE *a1)
{
  _BYTE *v2; // [esp+4h] [ebp-8h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  return 1;
}


//======================================================================
// sub_406B50
// entry 00406b50  size 73  status ok
//======================================================================

char __stdcall sub_406B50(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return 1;
}


//======================================================================
// sub_406BC0
// entry 00406bc0  size 445  status ok
//======================================================================

char __stdcall sub_406BC0(int a1, int a2)
{
  int *v2; // eax
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  __int64 v9; // [esp-24h] [ebp-ACh]
  __int64 v10; // [esp-18h] [ebp-A0h]
  char v11[8]; // [esp+4h] [ebp-84h] BYREF
  char v12[8]; // [esp+Ch] [ebp-7Ch] BYREF
  char v13[8]; // [esp+14h] [ebp-74h] BYREF
  char v14[8]; // [esp+1Ch] [ebp-6Ch] BYREF
  char v15[8]; // [esp+24h] [ebp-64h] BYREF
  __int64 v16; // [esp+2Ch] [ebp-5Ch]
  __int64 v17; // [esp+34h] [ebp-54h]
  __int64 v18; // [esp+3Ch] [ebp-4Ch] BYREF
  __int64 v19; // [esp+44h] [ebp-44h] BYREF
  int v20; // [esp+4Ch] [ebp-3Ch]
  char Destination[52]; // [esp+50h] [ebp-38h] BYREF

  v20 = sub_63AAE0(0);
  sub_5E0690(a1, a2);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  if ( !Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) )
    sub_5E0C40(a2, &v18, &v19);
  v10 = v19;
  v9 = v18;
  sub_64C5C0(v15, *(_DWORD *)(v20 + 12), *(_DWORD *)(v20 + 16));
  sub_64C5C0(v14, v9, HIDWORD(v9));
  v2 = (int *)sub_64C5C0(v13, v10, HIDWORD(v10));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  v4 = (int *)sub_64C5C0(v12, v18, HIDWORD(v18));
  sub_64C8D0(*v4, v4[1], Destination, 1, 1, 1);
  v5 = sub_630F40("SID_CASINOSTATS_GAMEPLAYNET_COLON");
  sub_654390(1, v5, Destination);
  v6 = (int *)sub_64C5C0(v11, v19, HIDWORD(v19));
  sub_64C8D0(*v6, v6[1], Destination, 1, 1, 1);
  v7 = sub_630F40("SID_CASINOSTATS_TOURNAMENTNET_COLON");
  sub_654390(2, v7, Destination);
  return 1;
}


//======================================================================
// sub_406D80
// entry 00406d80  size 60  status ok
//======================================================================

char __stdcall sub_406D80(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_406DC0
// entry 00406dc0  size 292  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_406DC0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(0);
  *a2 += v8[3] + v8[1];
  a2[1] += v8[2];
  *a3 += v8[1];
  a3[1] += v8[2];
  *a4 += v8[3];
  a4[1] += v8[4];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( !result )
    {
      sub_5E0C40(a1, &v5, v7);
      *a2 += v7[0] + v5;
      a2[1] += v6;
      *a3 += v5;
      a3[1] += v6;
      *a4 += v7[0];
      a4[1] += v7[1];
      return (struct Concurrency::details::_TaskCollectionBase *)a4;
    }
  }
  return result;
}


//======================================================================
// sub_406EF0
// entry 00406ef0  size 41  status ok
//======================================================================

char __stdcall sub_406EF0(int a1)
{
  if ( a1 != 3216000 )
    return 0;
  sub_653BD0(0);
  return 1;
}


//======================================================================
// sub_406F20
// entry 00406f20  size 15  status ok
//======================================================================

char __stdcall sub_406F20(int a1)
{
  return 0;
}


//======================================================================
// sub_406F30
// entry 00406f30  size 15  status ok
//======================================================================

char __stdcall sub_406F30(int a1)
{
  return 0;
}


//======================================================================
// sub_406F40
// entry 00406f40  size 16  status ok
//======================================================================

void *sub_406F40()
{
  return &unk_707190;
}


//======================================================================
// sub_406F50
// entry 00406f50  size 190  status ok
//======================================================================

void *__stdcall sub_406F50(int a1)
{
  int v1; // eax

  if ( (dword_790300 & 1) == 0 )
  {
    dword_790300 |= 1u;
    dword_7071B4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7071B8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3216001 )
    return &unk_7071B0;
  else
    return 0;
}


//======================================================================
// sub_407010
// entry 00407010  size 16  status ok
//======================================================================

void *sub_407010()
{
  return &unk_706C00;
}


//======================================================================
// sub_407020
// entry 00407020  size 16  status ok
//======================================================================

void *sub_407020()
{
  return &unk_7070C0;
}


//======================================================================
// sub_407030
// entry 00407030  size 261  status ok
//======================================================================

char __stdcall sub_407030(int a1, int a2)
{
  if ( a2 == 3216000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(0, -1);
      return 1;
    }
    else
    {
      sub_5E2F90(dword_7947E0);
      switch ( a1 )
      {
        case 5010:
          *(_DWORD *)(dword_7947E0 + 20236) = 5;
          break;
        case 5011:
          *(_DWORD *)(dword_7947E0 + 20236) = 10;
          break;
        case 5012:
          *(_DWORD *)(dword_7947E0 + 20236) = 25;
          break;
        case 5013:
          *(_DWORD *)(dword_7947E0 + 20236) = 100;
          break;
        default:
          break;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 0, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3216000 )
  {
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 0, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_407160
// entry 00407160  size 24  status ok
//======================================================================

int __thiscall sub_407160(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 68))(this, this);
}


//======================================================================
// sub_4071D0
// entry 004071d0  size 26  status ok
//======================================================================

bool __stdcall sub_4071D0(int a1, int a2)
{
  return a1 >= a2;
}


//======================================================================
// sub_4071F0
// entry 004071f0  size 98  status ok
//======================================================================

char __stdcall sub_4071F0(int a1, char *Buffer)
{
  if ( a1 >= 1000 )
    sprintf(Buffer, "%d,%03d", a1 / 1000, a1 % 1000);
  else
    sprintf(Buffer, "%d", a1);
  return 1;
}


//======================================================================
// sub_407260
// entry 00407260  size 16  status ok
//======================================================================

int sub_407260()
{
  return 582;
}


//======================================================================
// sub_407270
// entry 00407270  size 16  status ok
//======================================================================

int sub_407270()
{
  return 143;
}


//======================================================================
// sub_407280
// entry 00407280  size 120  status ok
//======================================================================

int __thiscall sub_407280(void *this, int a2)
{
  _BYTE v4[4]; // [esp+8h] [ebp-1D8h] BYREF
  _BYTE v5[464]; // [esp+Ch] [ebp-1D4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 256))(this, a2, v4) )
    return sub_630F40(v5);
  else
    return 0;
}


//======================================================================
// sub_407300
// entry 00407300  size 120  status ok
//======================================================================

int __thiscall sub_407300(void *this, int a2)
{
  _BYTE v4[54]; // [esp+8h] [ebp-1D8h] BYREF
  _BYTE v5[414]; // [esp+3Eh] [ebp-1A2h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 256))(this, a2, v4) )
    return sub_630F40(v5);
  else
    return 0;
}


//======================================================================
// sub_407380
// entry 00407380  size 15  status ok
//======================================================================

char __stdcall sub_407380(int a1, int a2)
{
  return 0;
}


//======================================================================
// sub_4073B0
// entry 004073b0  size 149  status ok
//======================================================================

_DWORD *__thiscall sub_4073B0(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // [esp+4h] [ebp-4h]

  *this = 1;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  result = this;
  *(this + 6) = 0;
  *(this + 7) = 0;
  for ( i = 0; i < 99; ++i )
  {
    *(this + i + 8) = 0;
    result = this;
    *(this + i + 107) = 0;
  }
  return result;
}


//======================================================================
// sub_407450
// entry 00407450  size 153  status ok
//======================================================================

_DWORD *__thiscall sub_407450(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // [esp+4h] [ebp-4h]

  ++*this;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  result = this;
  *(this + 7) = 0;
  for ( i = 0; i < 99; ++i )
  {
    result = this;
    *(this + i + 8) = 0;
    *(this + i + 107) = 0;
  }
  return result;
}


//======================================================================
// sub_4074F0
// entry 004074f0  size 48  status ok
//======================================================================

int __thiscall sub_4074F0(_DWORD *this)
{
  int result; // eax

  result = ++*(this + 7);
  *(this + *(this + 2) + 107) = result;
  return result;
}


//======================================================================
// sub_407520
// entry 00407520  size 48  status ok
//======================================================================

int __thiscall sub_407520(_DWORD *this)
{
  int result; // eax

  result = ++*(this + 6);
  *(this + *(this + 2) + 107) = result;
  return result;
}


//======================================================================
// sub_407550
// entry 00407550  size 31  status ok
//======================================================================

_DWORD *__thiscall sub_407550(_DWORD *this)
{
  *(this + *(this + 2) + 107) = -1;
  return this;
}


//======================================================================
// sub_407570
// entry 00407570  size 26  status ok
//======================================================================

_DWORD *__thiscall sub_407570(_DWORD *this)
{
  ++*(this + 4);
  return this;
}


//======================================================================
// sub_4075D0
// entry 004075d0  size 29  status ok
//======================================================================

int __thiscall sub_4075D0(_DWORD *this, int a2)
{
  *(this + *(this + 2) + 8) = a2;
  return a2;
}


//======================================================================
// sub_4075F0
// entry 004075f0  size 41  status ok
//======================================================================

_DWORD *__thiscall sub_4075F0(_DWORD *this)
{
  ++*(this + 1);
  ++*(this + 2);
  return this;
}


//======================================================================
// sub_407620
// entry 00407620  size 174  status ok
//======================================================================

_DWORD *__thiscall sub_407620(_DWORD *this)
{
  int i; // [esp+8h] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *this = &BaccaratState::`vftable';
  `eh vector constructor iterator'(
    this + 47,
    0x338u,
    5,
    ATL::ATLImplementationDetails::CAtlStringMgrStaticInitializer::EnsureLinked,
    ATL::CComCriticalSection::~CComCriticalSection);
  *(this + 1078) = 0;
  for ( i = 0; i < 12; ++i )
    *(this + i + 1) = 0;
  return this;
}


//======================================================================
// sub_4076D0
// entry 004076d0  size 244  status ok
//======================================================================

void __thiscall sub_4076D0(void (__thiscall ****this)(_DWORD, _DWORD))
{
  int i; // [esp+20h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, _DWORD))&BaccaratState::`vftable';
  if ( *(this + 1078) )
    (***(this + 1078))(*(this + 1078), 1);
  for ( i = 0; i < 12; ++i )
  {
    if ( *(this + i + 1) )
      (***(this + i + 1))(*(this + i + 1), 1);
  }
  `eh vector destructor iterator'(this + 47, 0x338u, 5, ATL::CComCriticalSection::~CComCriticalSection);
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_4077D0
// entry 004077d0  size 67  status ok
//======================================================================

int __thiscall sub_4077D0(_DWORD *this)
{
  sub_6437D0(1, 0);
  *(this + 1077) = 0;
  return sub_643930(2, 3, "Baccarat", 1);
}


//======================================================================
// sub_407820
// entry 00407820  size 388  status ok
//======================================================================

int __thiscall sub_407820(_DWORD *this)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-34h]
  int v3; // [esp+8h] [ebp-30h]
  _AFX_OLE_STATE *v5; // [esp+18h] [ebp-20h]
  void *v6; // [esp+20h] [ebp-18h]
  int i; // [esp+28h] [ebp-10h]
  int j; // [esp+28h] [ebp-10h]

  if ( !*(this + 1078) )
  {
    v6 = operator new(0x810u);
    if ( v6 )
      v3 = sub_642E10(v6);
    else
      v3 = 0;
    *(this + 1078) = v3;
  }
  sub_642E70(4);
  sub_4077D0(this);
  for ( i = 0; i < 12; ++i )
  {
    v5 = (_AFX_OLE_STATE *)operator new(0xF4u);
    if ( v5 )
      v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v5);
    else
      v2 = 0;
    *(this + i + 1) = v2;
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 1), (struct CPaneDivider *)i);
    *(_QWORD *)(this + 2 * i + 13) = sub_64C8A0(0, 0);
  }
  for ( j = 0; j < 5; ++j )
    sub_4073B0(this + 206 * j + 47);
  return sub_4079B0(this);
}


//======================================================================
// sub_4079B0
// entry 004079b0  size 332  status ok
//======================================================================

int __thiscall sub_4079B0(_DWORD *this)
{
  int result; // eax
  int k; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]
  int m; // [esp+14h] [ebp-4h]

  sub_407BE0(-1, 0);
  *(this + 1080) = -1;
  *(this + 1081) = -1;
  if ( dword_7902F8 )
    sub_4024C0((_DWORD **)dword_7902F8);
  result = sub_407C50(this);
  for ( i = 0; i < 12; ++i )
  {
    sub_5CB9B0(*(this + i + 1));
    result = sub_409EA0(*(this + i + 1));
  }
  for ( j = 0; j < 5; ++j )
  {
    *((_BYTE *)this + j + 179) = 1;
    for ( k = 0; k < 3; ++k )
    {
      sub_4093A0(j, k, 0);
      result = k + 1;
    }
  }
  for ( m = 0; m < 4; ++m )
  {
    *(_BYTE *)(sub_5DCB00(m) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1185) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1186) = 0;
    *((_BYTE *)this + m + 184) = 0;
    result = m + 1;
  }
  return result;
}


//======================================================================
// sub_407B00
// entry 00407b00  size 162  status ok
//======================================================================

char sub_407B00()
{
  CImageDisplay *v1; // [esp+14h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(i) + 1185)
      && !*(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_407BB0
// entry 00407bb0  size 45  status ok
//======================================================================

int __thiscall sub_407BB0(_DWORD *this)
{
  if ( *(this + 1079) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 1079));
}


//======================================================================
// sub_407BE0
// entry 00407be0  size 77  status ok
//======================================================================

int __thiscall sub_407BE0(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 1079) = a2;
  if ( *(this + 1079) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_407C30
// entry 00407c30  size 32  status ok
//======================================================================

bool __thiscall sub_407C30(_DWORD *this)
{
  return *(this + 1077) >= 399;
}


//======================================================================
// sub_407C50
// entry 00407c50  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_407C50(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = sub_409520(this);
  result = this;
  if ( (int)*(this + 1077) >= 400 || *(int *)(v3 + 8) >= 99 )
  {
    result = (_DWORD *)sub_4077D0(this);
    for ( i = 0; i < 5; ++i )
      result = sub_407450(this + 206 * i + 47);
  }
  return result;
}


//======================================================================
// sub_407CC0
// entry 00407cc0  size 49  status ok
//======================================================================

bool sub_407CC0()
{
  return !sub_4094B0(0) && sub_4094B0(4) == 0;
}


//======================================================================
// sub_407D00
// entry 00407d00  size 212  status ok
//======================================================================

int sub_407D00()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  _DWORD v2[4]; // [esp+1Ch] [ebp-14h]
  int i; // [esp+2Ch] [ebp-4h]

  v2[0] = 2;
  v2[1] = 0;
  v2[2] = 1;
  v2[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v2[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1184)
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1185) )
    {
      return v2[i];
    }
  }
  return -1;
}


//======================================================================
// sub_407DE0
// entry 00407de0  size 113  status ok
//======================================================================

char __stdcall sub_407DE0(int a1)
{
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_407E60
// entry 00407e60  size 239  status ok
//======================================================================

int __thiscall sub_407E60(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // [esp-8h] [ebp-28h]
  int v4; // [esp-4h] [ebp-24h]
  int v6; // [esp+4h] [ebp-1Ch]
  int i; // [esp+10h] [ebp-10h]
  int v8; // [esp+14h] [ebp-Ch]

  result = 3 * a2;
  v8 = 3 * a2;
  for ( i = 0; i < 3; ++i )
  {
    result = sub_5CB7D0(a2, 0);
    if ( (_BYTE)result )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + v8 + 1) + 180))(*(this + i + v8 + 1)) )
      {
        v6 = *(this + i + v8 + 1);
        v4 = *(_DWORD *)(v6 + 32 * a2 + 76);
        v3 = *(_DWORD *)(v6 + 32 * a2 + 72);
        sub_5DCB00(a2);
        sub_5D5CF0(v3, v4);
      }
      result = sub_5CB9B0(*(this + i + v8 + 1));
    }
  }
  return result;
}


//======================================================================
// sub_407F50
// entry 00407f50  size 72  status ok
//======================================================================

char __thiscall sub_407F50(int *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]

  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + 6 * a2 + 2 * i + 13) > 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_407FA0
// entry 00407fa0  size 294  status ok
//======================================================================

char __thiscall sub_407FA0(int *this, int a2)
{
  int v2; // eax
  int i; // [esp+10h] [ebp-8h]
  int v6; // [esp+14h] [ebp-4h]

  v6 = 3 * a2;
  v2 = sub_5DCB00(a2);
  if ( v2 )
  {
    LOBYTE(v2) = sub_407F50(this, a2);
    if ( (_BYTE)v2 )
    {
      LOBYTE(v2) = *(_BYTE *)(sub_5DCB00(a2) + 1184);
      if ( !(_BYTE)v2 )
      {
        sub_407E60(this, a2);
        for ( i = 0; i < 3; ++i )
        {
          if ( *(this + 2 * i + 2 * v6 + 13) > 0 )
            (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(*(_DWORD *)*(this + i + v6 + 1) + 196))(
              *(this + i + v6 + 1),
              this + 2 * i + 2 * v6 + 13,
              0,
              1);
        }
        *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
        sub_401CB0((_DWORD **)dword_7902F8);
        sub_5DB890(dword_7902EC);
        LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7902EC + 4) + 8))(
                       *(_DWORD *)(dword_7902EC + 4),
                       1,
                       0);
      }
    }
  }
  return v2;
}


//======================================================================
// sub_4080D0
// entry 004080d0  size 234  status ok
//======================================================================

void __thiscall sub_4080D0(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  int v4; // [esp+8h] [ebp-20h]
  int j; // [esp+1Ch] [ebp-Ch]
  int v6; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      v6 = 3 * i;
      if ( (unsigned __int8)sub_5CB7D0(i, 0) )
      {
        v4 = *(this + j + v6 + 1);
        v1 = *(_DWORD *)(v4 + 32 * i + 76);
        v2 = j + v6;
        *(this + 2 * v2 + 13) = *(_DWORD *)(v4 + 32 * i + 72);
        *(this + 2 * v2 + 14) = v1;
      }
      else
      {
        *(_QWORD *)(this + 2 * j + 2 * v6 + 13) = sub_64C8A0(0, 0);
      }
    }
  }
}


//======================================================================
// sub_4081C0
// entry 004081c0  size 98  status ok
//======================================================================

int __stdcall sub_4081C0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
    case 1:
    case 2:
      result = 0;
      break;
    case 3:
    case 4:
    case 5:
      result = 1;
      break;
    case 6:
    case 7:
    case 8:
      result = 2;
      break;
    case 9:
    case 10:
    case 11:
      result = 3;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\baccaratstate.cpp", 407);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_4082E0
// entry 004082e0  size 212  status ok
//======================================================================

int sub_4082E0()
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
// sub_408460
// entry 00408460  size 129  status ok
//======================================================================

int sub_408460()
{
  CImageDisplay *v2; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    v2 = (CImageDisplay *)sub_5DCB00(i);
    if ( v2 )
    {
      if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3 )
      {
        return i;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_4084F0
// entry 004084f0  size 134  status ok
//======================================================================

void sub_4084F0()
{
  CImageDisplay *v1; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(i);
    if ( v1 )
    {
      if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 3 )
      {
        sub_408580(i);
      }
    }
  }
}


//======================================================================
// sub_408580
// entry 00408580  size 522  status ok
//======================================================================

_DWORD *__thiscall sub_408580(CAtlAllocator *this, int a2)
{
  int v2; // eax
  _DWORD *result; // eax
  int v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+14h] [ebp-10h]
  Concurrency::details::MultiWaitBlockHolder *v8; // [esp+18h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp-8h]
  CImageDisplay *v10; // [esp+20h] [ebp-4h]

  CAtlAllocator::CleanUp(this);
  v9 = v2;
  v6 = CSourceStream::Exit(this);
  v8 = (Concurrency::details::MultiWaitBlockHolder *)(dword_7902F0 + 824 * a2 + 188);
  v10 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v10)->rcSource.left != 3 )
  {
    sub_5E9F20((char)"player->IsHuman()", "..\\Casino\\baccaratstate.cpp", 510);
  }
  result = (_DWORD *)(unsigned __int8)sub_408A20(a2);
  if ( !(_BYTE)result )
  {
    if ( v9 <= v6 )
    {
      if ( v9 >= v6 )
      {
        v7 = 4;
        sub_407550(v8);
        if ( !(unsigned __int8)sub_4089F0(a2) )
        {
          if ( (unsigned __int8)sub_408870(a2) )
            Concurrency::details::MultiWaitBlockHolder::Release(v8);
          goto LABEL_23;
        }
      }
      else
      {
        v7 = 1;
        sub_407520(v8);
        if ( !(unsigned __int8)sub_408990(a2) )
        {
          if ( (unsigned __int8)sub_408870(a2) )
            Concurrency::details::MultiWaitBlockHolder::Release(v8);
          goto LABEL_23;
        }
      }
    }
    else
    {
      v7 = 2;
      sub_4074F0(v8);
      if ( !(unsigned __int8)sub_4089C0(a2) )
      {
        if ( (unsigned __int8)sub_408870(a2) )
          Concurrency::details::MultiWaitBlockHolder::Release(v8);
        goto LABEL_23;
      }
    }
    sub_407570(v8);
    v7 |= 0x10u;
LABEL_23:
    if ( (unsigned __int8)sub_408870(a2) )
      unknown_libname_247(v8);
    else
      v7 |= 8u;
    sub_4075D0(v8, v7);
    return sub_4075F0(v8);
  }
  return result;
}


//======================================================================
// sub_408790
// entry 00408790  size 89  status ok
//======================================================================

char sub_408790()
{
  CImageDisplay *v1; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 1 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_4087F0
// entry 004087f0  size 127  status ok
//======================================================================

int sub_4087F0()
{
  CImageDisplay *v2; // [esp+8h] [ebp-10h]
  int v3; // [esp+14h] [ebp-4h]

  if ( !sub_408790() )
    return 0;
  do
  {
    v3 = sub_62FC30(0, 3);
    v2 = (CImageDisplay *)sub_5DCB00(v3);
  }
  while ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
       || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3 );
  return v3;
}


//======================================================================
// sub_408870
// entry 00408870  size 82  status ok
//======================================================================

char __thiscall sub_408870(_DWORD *this, int a2)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 3 * a2; i < 3 * a2 + 3; ++i )
  {
    if ( (unsigned __int8)sub_5CB920(*(this + i + 1)) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_4088D0
// entry 004088d0  size 58  status ok
//======================================================================

int __stdcall sub_4088D0(unsigned int a1)
{
  if ( a1 >= 4 )
    sub_5E9F20((char)"0<=p && p<=3", "..\\Casino\\baccaratstate.cpp", 599);
  return dword_7071D8[a1];
}


//======================================================================
// sub_408910
// entry 00408910  size 58  status ok
//======================================================================

int __stdcall sub_408910(unsigned int a1)
{
  if ( a1 >= 4 )
    sub_5E9F20((char)"0<=p && p<=3", "..\\Casino\\baccaratstate.cpp", 606);
  return dword_7071E8[a1];
}


//======================================================================
// sub_408950
// entry 00408950  size 58  status ok
//======================================================================

int __stdcall sub_408950(unsigned int a1)
{
  if ( a1 >= 4 )
    sub_5E9F20((char)"0<=p && p<=3", "..\\Casino\\baccaratstate.cpp", 613);
  return dword_7071F8[a1];
}


//======================================================================
// sub_408990
// entry 00408990  size 45  status ok
//======================================================================

int __thiscall sub_408990(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_4088D0(a2);
  return sub_5CB920(*(this + v4 + 1));
}


//======================================================================
// sub_4089C0
// entry 004089c0  size 45  status ok
//======================================================================

int __thiscall sub_4089C0(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_408910(a2);
  return sub_5CB920(*(this + v4 + 1));
}


//======================================================================
// sub_4089F0
// entry 004089f0  size 45  status ok
//======================================================================

int __thiscall sub_4089F0(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_408950(a2);
  return sub_5CB920(*(this + v4 + 1));
}


//======================================================================
// sub_408A20
// entry 00408a20  size 127  status ok
//======================================================================

BOOL __thiscall sub_408A20(_DWORD *this, unsigned int a2)
{
  char v4; // [esp+5h] [ebp-7h]
  char v5; // [esp+6h] [ebp-6h]
  char v6; // [esp+7h] [ebp-5h]
  int v7; // [esp+8h] [ebp-4h]

  v6 = sub_408990(this, a2);
  v5 = sub_4089C0(this, a2);
  v4 = sub_4089F0(this, a2);
  v7 = v6 != 0;
  if ( v5 )
    ++v7;
  if ( v4 )
    ++v7;
  return v7 > 1;
}


//======================================================================
// sub_408AA0
// entry 00408aa0  size 157  status ok
//======================================================================

int __thiscall sub_408AA0(CAtlAllocator *this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+4h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  CAtlAllocator::CleanUp(this);
  v8 = v3;
  v6 = CSourceStream::Exit(this);
  v7 = 3 * a2;
  if ( a3 == 3 * a2 + 2 )
  {
    if ( v8 > v6 )
      return 1;
  }
  else if ( a3 == v7 + 1 )
  {
    if ( v8 < v6 )
      return 8;
  }
  else if ( a3 == v7 && v8 == v6 )
  {
    return 9;
  }
  if ( v8 != v6 || a3 == v7 )
    return 0;
  else
    return 2;
}


//======================================================================
// sub_408B40
// entry 00408b40  size 190  status ok
//======================================================================

char __thiscall sub_408B40(CAtlAllocator *this, int a2)
{
  char v3; // al
  int v5; // [esp+8h] [ebp-10h]
  int i; // [esp+14h] [ebp-4h]

  CAtlAllocator::CleanUp(this);
  CSourceStream::Exit(this);
  for ( i = 3 * a2; i < 3 * a2 + 3; ++i )
  {
    if ( (unsigned __int8)sub_5CB920(*((_DWORD *)this + i + 1)) )
    {
      v5 = sub_408AA0(this, a2, i);
      if ( v5 == 1 || v5 == 8 )
      {
        if ( i == 1 )
        {
          if ( (unsigned __int8)CSourceStream::Exit(this) )
            return 1;
        }
        else if ( i == 2 )
        {
          CAtlAllocator::CleanUp(this);
          if ( v3 )
            return 1;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_408C00
// entry 00408c00  size 471  status ok
//======================================================================

int __thiscall sub_408C00(CAtlAllocator *this, int a2)
{
  int result; // eax
  __int64 v3; // [esp-8h] [ebp-4Ch]
  __int64 v4; // [esp-8h] [ebp-4Ch]
  int v5; // [esp+0h] [ebp-44h]
  int v7; // [esp+Ch] [ebp-38h]
  int v8; // [esp+14h] [ebp-30h]
  int v9; // [esp+2Ch] [ebp-18h]
  int v10; // [esp+30h] [ebp-14h]
  int v11; // [esp+38h] [ebp-Ch]
  int v12; // [esp+3Ch] [ebp-8h]
  int i; // [esp+40h] [ebp-4h]

  v10 = 3 * a2;
  CAtlAllocator::CleanUp(this);
  CSourceStream::Exit(this);
  v3 = sub_64C8A0(0, 0);
  sub_5DCB00(a2);
  sub_5D6050(v3, HIDWORD(v3));
  v8 = sub_5DCB00(a2);
  v11 = *(char *)(sub_5D52E0(v8) + 42);
  for ( i = 3 * a2; ; ++i )
  {
    result = v10 + 3;
    if ( i >= v10 + 3 )
      break;
    if ( (unsigned __int8)sub_5CB920(*((_DWORD *)this + i + 1)) )
    {
      v9 = sub_408AA0(this, a2, i);
      if ( (v9 == 1 || v9 == 8 || v9 == 9) && *(int *)(sub_5DCB00(a2) + 1192) < 0 )
      {
        if ( *(int *)(sub_5DCB00(a2) + 1192) < -3 )
          *(_BYTE *)(a2 + dword_7902F0 + 184) = 1;
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      }
      sub_4098C0(a2, v9);
      v7 = sub_5DCB00(a2);
      v12 = *(char *)(sub_5D52E0(v7) + 42);
      if ( v11 != v12 && !v12 )
      {
        v5 = sub_5DCB00(a2);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, -1);
        v4 = sub_64C8A0(0, 0);
        sub_5DCB00(a2);
        return sub_5D6050(v4, HIDWORD(v4));
      }
    }
  }
  return result;
}


//======================================================================
// sub_408DE0
// entry 00408de0  size 91  status ok
//======================================================================

int __thiscall sub_408DE0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( *(this + i + 1) == a2 )
      return i;
  }
  sub_5E9F20((char)"false", "..\\Casino\\baccaratstate.cpp", 770);
  return -1;
}


//======================================================================
// sub_408E40
// entry 00408e40  size 62  status ok
//======================================================================

int __stdcall sub_408E40(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_408E80
// entry 00408e80  size 23  status ok
//======================================================================

char __thiscall sub_408E80(void *this)
{
  return *(_BYTE *)sub_408E40(-1);
}


//======================================================================
// sub_408EA0
// entry 00408ea0  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_408EA0(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_408E40(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_408EC0
// entry 00408ec0  size 24  status ok
//======================================================================

char sub_408EC0()
{
  return *(_BYTE *)(sub_408E40(-1) + 1);
}


//======================================================================
// sub_408EE0
// entry 00408ee0  size 47  status ok
//======================================================================

int __stdcall sub_408EE0(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_408E40(-1) + 1) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_408F10
// entry 00408f10  size 190  status ok
//======================================================================

int __fastcall sub_408F10(char a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  CAtlAllocator *v7; // [esp+0h] [ebp-10Ch]
  CSourceStream *v8; // [esp+0h] [ebp-10Ch]
  char v9; // [esp+0h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  sprintf(Buffer, "Round: %d\n", a3);
  sub_62FDE0(Buffer, a1);
  CAtlAllocator::CleanUp(v7);
  sprintf(Buffer, "Player has: %d\n", v3);
  sub_62FDE0(Buffer, (char)v7);
  v4 = CSourceStream::Exit(v8);
  sprintf(Buffer, "Banker has: %d\n", v4);
  sub_62FDE0(Buffer, (char)v8);
  return sub_62FDE0("---------------------\n", v9);
}


//======================================================================
// sub_408FD0
// entry 00408fd0  size 140  status ok
//======================================================================

int __stdcall sub_408FD0(int a1)
{
  int v2; // [esp+8h] [ebp-Ch]
  __int16 v3; // [esp+Ch] [ebp-8h]
  int v4; // [esp+10h] [ebp-4h]

  v4 = 0;
  if ( (int)sub_4094B0(a1) < 3 )
    return -1;
  v3 = sub_4093D0(a1, 2);
  v2 = sub_641280(v3);
  if ( v2 >= 1 && v2 <= 9 )
    return v2;
  if ( v2 == 14 )
    return 1;
  return v4;
}


//======================================================================
// sub_409060
// entry 00409060  size 159  status ok
//======================================================================

int __stdcall sub_409060(int a1)
{
  int v2; // [esp+4h] [ebp-14h]
  int v3; // [esp+8h] [ebp-10h]
  int v4; // [esp+Ch] [ebp-Ch]
  __int16 v5; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v2 = 0;
  v3 = sub_4094B0(a1);
  for ( i = 0; i < v3; ++i )
  {
    v5 = sub_4093D0(a1, i);
    v4 = sub_641280(v5);
    if ( v4 < 1 || v4 > 9 )
    {
      if ( v4 == 14 )
        ++v2;
    }
    else
    {
      v2 += v4;
    }
  }
  while ( v2 >= 10 )
    v2 -= 10;
  return v2;
}


//======================================================================
// sub_409140
// entry 00409140  size 100  status ok
//======================================================================

bool __stdcall sub_409140(int a1)
{
  int v3; // [esp+8h] [ebp-8h]

  if ( sub_4094B0(a1) != 2 )
    return 0;
  v3 = sub_409060(a1);
  return v3 == 8 || v3 == 9;
}


//======================================================================
// sub_4091F0
// entry 004091f0  size 57  status ok
//======================================================================

bool __thiscall sub_4091F0(CSourceStream *this)
{
  int v1; // eax
  int v4; // [esp+4h] [ebp-8h]

  v4 = CSourceStream::Exit(this);
  CAtlAllocator::CleanUp(this);
  return v4 < 8 && v1 <= 5;
}


//======================================================================
// sub_409230
// entry 00409230  size 262  status ok
//======================================================================

bool __thiscall sub_409230(CSourceStream *this)
{
  char v1; // al
  bool result; // al
  bool v3; // [esp+0h] [ebp-20h]
  bool v4; // [esp+4h] [ebp-1Ch]
  bool v5; // [esp+8h] [ebp-18h]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]

  v7 = CSourceStream::Exit(this);
  CAtlAllocator::CleanUp(this);
  v8 = sub_408FD0(0);
  CAtlAllocator::CleanUp(this);
  if ( v1 )
    return 0;
  if ( v7 >= 8 )
    return 0;
  if ( (unsigned __int8)sub_409360(6, 7) )
    return v7 <= 5;
  switch ( v7 )
  {
    case 0:
    case 1:
    case 2:
      result = 1;
      break;
    case 3:
      result = v8 != 8;
      break;
    case 4:
      v5 = v8 >= 2 && v8 <= 7;
      result = v5;
      break;
    case 5:
      v4 = v8 >= 4 && v8 <= 7;
      result = v4;
      break;
    case 6:
      v3 = v8 == 6 || v8 == 7;
      result = v3;
      break;
    case 7:
      result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_409360
// entry 00409360  size 61  status ok
//======================================================================

bool __thiscall sub_409360(CAtlAllocator *this, int a2, int a3)
{
  int v3; // eax

  CAtlAllocator::CleanUp(this);
  return a2 <= v3 && v3 <= a3;
}


//======================================================================
// sub_4093A0
// entry 004093a0  size 40  status ok
//======================================================================

int __thiscall sub_4093A0(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 3 * a2 + a3 + 74) = a4;
  return a3;
}


//======================================================================
// sub_4093D0
// entry 004093d0  size 36  status ok
//======================================================================

__int16 __thiscall sub_4093D0(_WORD *this, int a2, int a3)
{
  return *(this + 3 * a2 + a3 + 74);
}


