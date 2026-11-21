//======================================================================
// sub_644440
// entry 00644440  size 50  status ok
//======================================================================

int __thiscall sub_644440(int this)
{
  return sub_644480(*(_WORD *)(this + 400), *(_DWORD *)(this + 412), *(_BYTE *)(this + 408));
}


//======================================================================
// sub_644480
// entry 00644480  size 230  status ok
//======================================================================

int __cdecl sub_644480(unsigned __int16 a1, int a2, char a3)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-4h]

  if ( a1 == 0xFFFF || a3 )
    return a2;
  v4 = sub_643E70(a1, 0, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 444))(
          dword_162EE84,
          v4) )
    return 0;
  v5 = sub_641280(a1);
  if ( v5 == 1 )
    v5 = 14;
  if ( v5 != 15 )
    return 13 * (sub_641290(a1) - 1) + v5 - 2;
  if ( sub_641290(a1) == 2 )
    return 52;
  if ( sub_641290(a1) == 1 )
    return 53;
  sub_5E9F20("false", "..\\casinoShell\\card.cpp", 1263);
  return 0;
}


//======================================================================
// sub_644570
// entry 00644570  size 29  status ok
//======================================================================

int __thiscall sub_644570(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 192))(this, this);
}


//======================================================================
// sub_644590
// entry 00644590  size 68  status ok
//======================================================================

bool __thiscall sub_644590(void *this, int a2)
{
  return !byte_1630694 && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 192))(this);
}


//======================================================================
// sub_6445E0
// entry 006445e0  size 127  status ok
//======================================================================

int __thiscall sub_6445E0(_BYTE *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 168))(this);
  if ( !(_BYTE)result && !byte_1630694 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, a2) )
    {
      sub_5F4ED0(this, (_DWORD *)a2);
      *(this + 8) = 0;
      *(this + 9) = 0;
      *(_BYTE *)(a2 + 4) = 1;
    }
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 196))(this);
  }
  return result;
}


//======================================================================
// sub_644660
// entry 00644660  size 245  status ok
//======================================================================

int __thiscall sub_644660(int this, int a2)
{
  int result; // eax
  int v3; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 168))(this);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 132))(this, a2);
    if ( (_BYTE)result )
    {
      sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
      result = a2;
      *(_BYTE *)(a2 + 4) = 1;
    }
    byte_1630694 = 1;
    if ( *(_BYTE *)(this + 10) )
    {
      *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 8) - (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 12) - (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
      *(_DWORD *)(this + 52) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      *(_DWORD *)(this + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
      *(_DWORD *)(this + 60) = CMediaType::IsFixedSize((CMediaType *)this);
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 212))(this);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 108))(this, v3);
    }
  }
  return result;
}


//======================================================================
// sub_644760
// entry 00644760  size 120  status ok
//======================================================================

int __thiscall sub_644760(unsigned __int8 *this, int a2)
{
  int result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)this + 132))(this, a2) )
    *(_BYTE *)(a2 + 4) = 1;
  result = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 168))(this);
  if ( (_BYTE)result )
  {
    result = *(this + 10);
    if ( *(this + 10) )
      return (*(int (__thiscall **)(unsigned __int8 *, int, int))(*(_DWORD *)this + 68))(
               this,
               *(_DWORD *)(a2 + 8) - *((_DWORD *)this + 11),
               *(_DWORD *)(a2 + 12) - *((_DWORD *)this + 12));
  }
  return result;
}


//======================================================================
// sub_6447E0
// entry 006447e0  size 82  status ok
//======================================================================

int __thiscall sub_6447E0(void *this, int a2)
{
  int result; // eax

  sub_5F4E90(a2);
  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 132))(this, a2) )
    *(_BYTE *)(a2 + 4) = 1;
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 200))(this);
  byte_1630694 = 0;
  return result;
}


//======================================================================
// sub_6448C0
// entry 006448c0  size 262  status ok
//======================================================================

void __thiscall sub_6448C0(_DWORD *this)
{
  int i; // [esp+20h] [ebp-10h]

  *this = &StockDisplay::`vftable';
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(this + i + 101) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + i + 101))(*(this + i + 101), 1);
    if ( *(this + i + 1125) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + i + 1125))(*(this + i + 1125), 1);
  }
  sub_5F5FA0(this);
}


//======================================================================
// sub_6449D0
// entry 006449d0  size 19  status ok
//======================================================================

ATL::CAtlWinModule *__thiscall sub_6449D0(ATL::CAtlWinModule *this)
{
  return sub_5F5CC0(this);
}


//======================================================================
// sub_6449F0
// entry 006449f0  size 877  status ok
//======================================================================

int __thiscall sub_6449F0(CMediaType *this, int a2, __int16 a3)
{
  int IsFixedSize; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+4h] [ebp-28h]
  _DWORD *v13; // [esp+Ch] [ebp-20h]
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]

  v14 = 0;
  v15 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v14 += dword_763438[2 * (i % 13)];
    v15 += dword_76343C[2 * (i % 13)];
    if ( !*((_DWORD *)this + i + 101) )
    {
      *((_DWORD *)this + i + 101) = (*(int (__thiscall **)(CMediaType *, _DWORD))(*(_DWORD *)this + 200))(
                                      this,
                                      *((_DWORD *)this + 1));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 101) + 64))(*((_DWORD *)this + i + 101));
    }
    *(_WORD *)(*((_DWORD *)this + i + 101) + 400) = a3;
    *(_DWORD *)(*((_DWORD *)this + i + 101) + 412) = *((_DWORD *)this + 100);
    IsFixedSize = CMediaType::IsFixedSize(this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 101) + 108))(
      *((_DWORD *)this + i + 101),
      IsFixedSize + i + 1);
    v4 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
    v5 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v15 + v4);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 101) + 68))(*((_DWORD *)this + i + 101), v14 + v5);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 101) + 116))(*((_DWORD *)this + i + 101));
    if ( !*((_DWORD *)this + i + 1125) )
    {
      v13 = operator new(0x178u);
      if ( v13 )
      {
        sub_5EAAF0(v13);
        v11 = v6;
      }
      else
      {
        v11 = 0;
      }
      *((_DWORD *)this + i + 1125) = v11;
      *(_DWORD *)(*((_DWORD *)this + i + 1125) + 4) = *((_DWORD *)this + 1);
      v7 = CMediaType::IsFixedSize(this);
      sub_5EAE80(3150701, 0, 0, v7, -1);
    }
    v8 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
    v9 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v8 + v15 - 1);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 1125) + 68))(
      *((_DWORD *)this + i + 1125),
      v9 + v14 - 2);
    if ( i )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 1125) + 116))(*((_DWORD *)this + i + 1125));
    else
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 1125) + 112))(*((_DWORD *)this + 1125));
  }
  while ( i < 1024 )
  {
    if ( *((_DWORD *)this + i + 101) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 101) + 112))(*((_DWORD *)this + i + 101));
    if ( *((_DWORD *)this + i + 1125) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 1125) + 112))(*((_DWORD *)this + i + 1125));
    ++i;
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_644D60
// entry 00644d60  size 148  status ok
//======================================================================

void __thiscall sub_644D60(CWnd *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 1024; ++i )
  {
    if ( *((_DWORD *)this + i + 101) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 101) + 112))(*((_DWORD *)this + i + 101));
    if ( *((_DWORD *)this + i + 1125) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 1125) + 112))(*((_DWORD *)this + i + 1125));
  }
  sub_5EB5A0(this);
}


//======================================================================
// sub_644E00
// entry 00644e00  size 74  status ok
//======================================================================

_BYTE *__thiscall sub_644E00(unsigned __int8 *this, _BYTE *a2)
{
  _BYTE *result; // eax

  result = a2;
  if ( !a2[4] )
  {
    result = (_BYTE *)sub_5F54A0(this);
    if ( (_BYTE)result )
    {
      result = (_BYTE *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 192))(this);
      if ( (_BYTE)result )
        return sub_5F4ED0(this, a2);
    }
  }
  return result;
}


//======================================================================
// sub_644E50
// entry 00644e50  size 121  status ok
//======================================================================

int __thiscall sub_644E50(void *this, int a2)
{
  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 132))(this, a2)
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 168))(this)
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 192))(this) )
  {
    *(_BYTE *)(a2 + 4) = 1;
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 196))(this);
  }
  return sub_5F4E90(a2);
}


//======================================================================
// sub_644ED0
// entry 00644ed0  size 113  status ok
//======================================================================

char __thiscall sub_644ED0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 1024; ++i )
  {
    if ( *(this + i + 101)
      && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 101) + 132))(*(this + i + 101), a2) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_645050
// entry 00645050  size 77  status ok
//======================================================================

int __stdcall sub_645050(int a1)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
    v2 += dword_7634A0[2 * (i % 13)];
  return v2;
}


//======================================================================
// sub_6450A0
// entry 006450a0  size 77  status ok
//======================================================================

int __stdcall sub_6450A0(int a1)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
    v2 += dword_76350C[2 * (i % 13)];
  return v2;
}


//======================================================================
// sub_6450F0
// entry 006450f0  size 90  status ok
//======================================================================

int __thiscall sub_6450F0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 1023; i >= 0; --i )
  {
    if ( *(this + i + 101) && sub_5F54A0((unsigned __int8 *)*(this + i + 101)) )
      return i + 1;
  }
  return 0;
}


//======================================================================
// sub_645260
// entry 00645260  size 376  status ok
//======================================================================

int __thiscall sub_645260(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int i; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  v11 = a2 - (*(int (__thiscall **)(_DWORD *))(*this + 76))(this);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v10 = a3 - result;
  if ( v11 || v10 )
  {
    for ( i = 0; i < 1024; ++i )
    {
      if ( *(this + i + 101) )
      {
        v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 101) + 84))(*(this + i + 101));
        v5 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 101) + 76))(*(this + i + 101), v10 + v4);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 101) + 68))(*(this + i + 101), v11 + v5);
      }
      if ( *(this + i + 1125) )
      {
        v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1125) + 84))(*(this + i + 1125));
        v7 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 1125) + 76))(*(this + i + 1125), v10 + v6);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 1125) + 68))(*(this + i + 1125), v11 + v7);
      }
    }
    return sub_5EB260(this, a2, a3);
  }
  return result;
}


//======================================================================
// sub_645440
// entry 00645440  size 128  status ok
//======================================================================

int __stdcall sub_645440(int a1)
{
  Concurrency::details::_TaskCollection *v3; // [esp+Ch] [ebp-14h]

  v3 = (Concurrency::details::_TaskCollection *)operator new(0x1A0u);
  if ( v3 )
    return Concurrency::details::_TaskCollection::_TaskCollection(v3);
  else
    return 0;
}


//======================================================================
// sub_6454F0
// entry 006454f0  size 252  status ok
//======================================================================

int __thiscall sub_6454F0(int this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &Character::`vftable';
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 40) = 1;
  *(_BYTE *)(this + 41) = 1;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_BYTE *)(this + 80) = 0;
  *(float *)(this + 84) = 0.5;
  *(_DWORD *)(this + 88) = 0;
  *(_BYTE *)(this + 81) = 0;
  *(_BYTE *)(this + 92) = 0;
  sub_648C20(this);
  *(_DWORD *)(this + 52) = 0;
  return this;
}


//======================================================================
// sub_6455F0
// entry 006455f0  size 548  status ok
//======================================================================

void __thiscall sub_6455F0(CNoTrackObject *this)
{
  *(_DWORD *)this = &Character::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 2))(*((_DWORD *)this + 2), 1);
    *((_DWORD *)this + 2) = 0;
  }
  if ( *((_DWORD *)this + 3) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 3))(*((_DWORD *)this + 3), 1);
    *((_DWORD *)this + 3) = 0;
  }
  if ( *((_DWORD *)this + 5) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 5))(*((_DWORD *)this + 5), 1);
    *((_DWORD *)this + 5) = 0;
  }
  if ( *((_DWORD *)this + 6) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 6))(*((_DWORD *)this + 6), 1);
    *((_DWORD *)this + 6) = 0;
  }
  if ( *((_DWORD *)this + 7) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
    *((_DWORD *)this + 7) = 0;
  }
  if ( *((_DWORD *)this + 8) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
    *((_DWORD *)this + 8) = 0;
  }
  if ( *((_DWORD *)this + 9) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 9))(*((_DWORD *)this + 9), 1);
    *((_DWORD *)this + 9) = 0;
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_645820
// entry 00645820  size 2352  status ok
//======================================================================

int __thiscall sub_645820(int this, int a2, int a3, char a4, char a5, char a6)
{
  LONG *v6; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp+4h] [ebp-D4h]
  int v14; // [esp+8h] [ebp-D0h]
  int v15; // [esp+14h] [ebp-C4h]
  int v16; // [esp+1Ch] [ebp-BCh]
  int v17; // [esp+24h] [ebp-B4h]
  void (__thiscall ***v18)(_DWORD, _DWORD); // [esp+28h] [ebp-B0h]
  int v19; // [esp+2Ch] [ebp-ACh]
  int v20; // [esp+34h] [ebp-A4h]
  void (__thiscall ***v22)(_DWORD, int); // [esp+70h] [ebp-68h]
  void (__thiscall ***v23)(_DWORD, int); // [esp+78h] [ebp-60h]
  void (__thiscall ***v24)(_DWORD, int); // [esp+88h] [ebp-50h]
  void (__thiscall ***v25)(_DWORD, int); // [esp+98h] [ebp-40h]
  void *v26; // [esp+9Ch] [ebp-3Ch]
  void (__thiscall ***v27)(_DWORD, int); // [esp+B8h] [ebp-20h]
  void (__thiscall ***v28)(_DWORD, int); // [esp+C8h] [ebp-10h]

  *(_DWORD *)(this + 4) = a2;
  if ( *(_DWORD *)(this + 8) )
  {
    v28 = *(void (__thiscall ****)(_DWORD, int))(this + 8);
    if ( v28 )
      (**v28)(v28, 1);
  }
  if ( operator new(0x188u) )
    v20 = sub_648C70(this, a3);
  else
    v20 = 0;
  *(_DWORD *)(this + 8) = v20;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 108))(*(_DWORD *)(this + 8), 110);
  sub_5EB700(*(_BYTE **)(this + 8), 1);
  sub_5EB720(*(_BYTE **)(this + 8), 80);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 64))(*(_DWORD *)(this + 8));
  if ( *(_DWORD *)(this + 12) )
  {
    v27 = *(void (__thiscall ****)(_DWORD, int))(this + 12);
    if ( v27 )
      (**v27)(v27, 1);
  }
  if ( operator new(0x188u) )
    v19 = sub_648C70(this, a3);
  else
    v19 = 0;
  *(_DWORD *)(this + 12) = v19;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12), 111);
  sub_5EB700(*(_BYTE **)(this + 12), 1);
  sub_5EB720(*(_BYTE **)(this + 12), 80);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 64))(*(_DWORD *)(this + 12));
  if ( operator new(0x44Cu) )
    v18 = (void (__thiscall ***)(_DWORD, _DWORD))sub_648EC0(this);
  else
    v18 = 0;
  sub_5F5DF0(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 12), v18);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 12) + 380) + 8))(
    *(_DWORD *)(*(_DWORD *)(this + 12) + 380),
    0,
    0);
  *(_BYTE *)(this + 16) = 0;
  if ( !*(_DWORD *)(this + 20) )
  {
    v26 = operator new(0xC8u);
    if ( v26 )
      v17 = sub_6640C0(v26);
    else
      v17 = 0;
    *(_DWORD *)(this + 20) = v17;
  }
  sub_664200(*(_DWORD *)(*(_DWORD *)(this + 8) + 4), this);
  sub_664480(110);
  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 3 )
  {
    v6 = sub_57A470(*(CImageDisplay **)(this + 4));
    if ( !(unsigned __int8)sub_664300(v6) )
    {
      DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4));
      strcpy((char *)&DisplayFormat->bmiHeader.biHeight, &Source);
      CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left = 2;
    }
  }
  if ( *(_DWORD *)(this + 24) )
  {
    v25 = *(void (__thiscall ****)(_DWORD, int))(this + 24);
    if ( v25 )
      (**v25)(v25, 1);
  }
  if ( operator new(0x1A8u) )
    v16 = sub_64AAB0(this, a3);
  else
    v16 = 0;
  *(_DWORD *)(this + 24) = v16;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 64))(*(_DWORD *)(this + 24));
  v8 = sub_646EA0(this);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 108))(*(_DWORD *)(this + 24), v8 + 200);
  *(_BYTE *)(this + 42) = a4;
  *(_DWORD *)(this + 48) = 0;
  *(_BYTE *)(this + 43) = a5;
  *(_BYTE *)(this + 44) = a6;
  result = *(unsigned __int8 *)(this + 42);
  if ( *(_BYTE *)(this + 42) )
  {
    if ( *(_DWORD *)(this + 28) )
    {
      v24 = *(void (__thiscall ****)(_DWORD, int))(this + 28);
      if ( v24 )
        (**v24)(v24, 1);
      *(_DWORD *)(this + 28) = 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 196))(dword_162EE84)
      && *(_BYTE *)(this + 43)
      && CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 1
      && (!(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84)
       || !*(_BYTE *)(this + 44)) )
    {
      if ( operator new(0x1E0u) )
        v15 = sub_64BF00(this, a3);
      else
        v15 = 0;
      *(_DWORD *)(this + 28) = v15;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 64))(*(_DWORD *)(this + 28));
      v10 = sub_646EA0(this);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 108))(*(_DWORD *)(this + 28), v10 + 201);
    }
    if ( *(_DWORD *)(this + 32) )
    {
      v23 = *(void (__thiscall ****)(_DWORD, int))(this + 32);
      if ( v23 )
        (**v23)(v23, 1);
      *(_DWORD *)(this + 32) = 0;
    }
    if ( *(_DWORD *)(this + 36) )
    {
      v22 = *(void (__thiscall ****)(_DWORD, int))(this + 36);
      if ( v22 )
        (**v22)(v22, 1);
      *(_DWORD *)(this + 36) = 0;
    }
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84);
    if ( (_BYTE)result )
    {
      result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 480))(dword_162EE80);
      if ( (_BYTE)result )
      {
        if ( *(_BYTE *)(this + 44) )
        {
          if ( operator new(0x1E4u) )
            v14 = sub_64C070(this, a3, 1);
          else
            v14 = 0;
          *(_DWORD *)(this + 32) = v14;
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 64))(*(_DWORD *)(this + 32));
          sub_6026F0(*(_BYTE **)(this + 32), 2 * *(_DWORD *)(*(_DWORD *)(this + 4) + 4) + 49);
          v11 = sub_646EA0(this);
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 108))(*(_DWORD *)(this + 32), v11 + 201);
          if ( operator new(0x1E4u) )
            v13 = sub_64C070(this, a3, 0);
          else
            v13 = 0;
          *(_DWORD *)(this + 36) = v13;
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 64))(*(_DWORD *)(this + 36));
          sub_6026F0(*(_BYTE **)(this + 36), 2 * *(_DWORD *)(*(_DWORD *)(this + 4) + 4) + 50);
          v12 = sub_646EA0(this);
          return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 108))(
                   *(_DWORD *)(this + 36),
                   v12 + 201);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_646150
// entry 00646150  size 552  status ok
//======================================================================

int __thiscall sub_646150(int this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  CImageDisplay *v8; // [esp+10h] [ebp-Ch]

  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 12) + 68))(*(_DWORD *)(this + 12), a2, a3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 8) + 68))(*(_DWORD *)(this + 8), a2, a3);
  if ( *(_DWORD *)(this + 20) && *(_DWORD *)(this + 4) )
  {
    v8 = *(CImageDisplay **)(this + 4);
    if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
    {
      sub_6643F0(a2, a3);
      if ( (unsigned __int8)sub_664710(*(_DWORD *)(this + 20)) )
        sub_664630(*(_DWORD *)(this + 20));
    }
  }
  result = *(unsigned __int8 *)(this + 42);
  if ( *(_BYTE *)(this + 42) )
  {
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 428))(
      dword_162EE80,
      *(_DWORD *)(this + 24),
      this);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 432))(
      dword_162EE80,
      *(_DWORD *)(this + 24),
      this);
    result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 436))(
               dword_162EE80,
               *(_DWORD *)(this + 24),
               this);
    if ( *(_DWORD *)(this + 28) )
    {
      result = *(unsigned __int8 *)(this + 43);
      if ( !*(_BYTE *)(this + 43) )
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
      if ( !*(_DWORD *)(this + 4) )
        return result;
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 468))(
             dword_162EE80,
             *(_DWORD *)(*(_DWORD *)(this + 4) + 4));
      v5 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 464))(
             dword_162EE80,
             *(_DWORD *)(*(_DWORD *)(this + 4) + 4),
             v4);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), v5);
      if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 1 )
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
      else
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
    }
  }
  return result;
}


//======================================================================
// sub_646380
// entry 00646380  size 335  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_646380(int this, int a2)
{
  const struct tagVIDEOINFO *result; // eax
  CImageDisplay *v5; // [esp+8h] [ebp-18h]

  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 1
    && *(_DWORD *)(*(_DWORD *)(this + 4) + 8) == 5 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 108))(*(_DWORD *)(this + 8), a2 + 1);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 108))(*(_DWORD *)(this + 8), a2 - 1);
  }
  result = (const struct tagVIDEOINFO *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 108))(
                                          *(_DWORD *)(this + 12),
                                          a2);
  if ( *(_DWORD *)(this + 20) && *(_DWORD *)(this + 4) )
  {
    v5 = *(CImageDisplay **)(this + 4);
    result = CImageDisplay::GetDisplayFormat(v5);
    if ( result->rcSource.left == 2
      || (result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(v5)->rcSource.left,
          result == (const struct tagVIDEOINFO *)3) )
    {
      result = (const struct tagVIDEOINFO *)sub_664480(a2);
    }
  }
  if ( *(_BYTE *)(this + 42) )
  {
    result = (const struct tagVIDEOINFO *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 108))(
                                            *(_DWORD *)(this + 24),
                                            a2 + 200);
    if ( *(_DWORD *)(this + 28) )
      return (const struct tagVIDEOINFO *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 108))(
                                            *(_DWORD *)(this + 28),
                                            a2 + 201);
  }
  return result;
}


//======================================================================
// sub_6464D0
// entry 006464d0  size 1862  status ok
//======================================================================

int __thiscall sub_6464D0(int this, char a2, int a3)
{
  int result; // eax
  DWORD v4; // eax
  int v5; // eax
  char v6; // al
  int v7; // eax
  char v8; // al
  char v9; // al
  int v10; // eax
  int v11; // esi
  int IsFixedSize; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char v17; // [esp-4h] [ebp-58h]
  int v20; // [esp+14h] [ebp-40h]
  int v21; // [esp+18h] [ebp-3Ch]
  int v22; // [esp+1Ch] [ebp-38h]
  CImageDisplay *v23; // [esp+34h] [ebp-20h]
  LONG left; // [esp+44h] [ebp-10h]
  int v25; // [esp+48h] [ebp-Ch]
  int v26; // [esp+48h] [ebp-Ch]
  int v27; // [esp+4Ch] [ebp-8h]
  int v28; // [esp+50h] [ebp-4h]

  *(_BYTE *)(this + 92) = 1;
  sub_646C20(a2);
  left = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left;
  result = left == 0;
  if ( left )
  {
    v23 = *(CImageDisplay **)(this + 4);
    if ( CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 3 )
    {
      if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 3 )
      {
        sub_664630(*(_DWORD *)(this + 20));
      }
      else
      {
        v17 = sub_646D10(this);
        v4 = sub_4842B0(*(CImageDisplay **)(this + 4));
        v25 = sub_6394C0(v4, v17);
        if ( a2 || CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 12)) != v25 )
        {
          sub_5EAF00(*(_DWORD *)(this + 12), v25);
          v5 = sub_5EB240(*(_DWORD **)(this + 12));
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 176))(*(_DWORD *)(this + 12), v5);
        }
        if ( a2 || CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 8)) != v25 )
        {
          sub_5EAF00(*(_DWORD *)(this + 8), v25);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 176))(*(_DWORD *)(this + 8), 0);
        }
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 116))(*(_DWORD *)(this + 12));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 116))(*(_DWORD *)(this + 8));
      }
      if ( *(_DWORD *)(this + 28) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
    }
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 12) == -1 )
      {
        v21 = *(_DWORD *)(*(_DWORD *)(this + 4) + 8);
        v8 = sub_646D10(this);
        v27 = sub_639610(v21, v8);
        v20 = *(_DWORD *)(*(_DWORD *)(this + 4) + 8);
        v9 = sub_646D10(this);
        v28 = sub_639670(v20, v9);
        if ( a2 || !(unsigned __int8)sub_648200(this) )
        {
          sub_5F5D50(*(_DWORD **)(this + 12), 0);
          sub_5EAF00(*(_DWORD *)(this + 12), v27);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 176))(*(_DWORD *)(this + 12), 0);
          if ( v28 == v27 )
          {
            v10 = sub_5EB240(*(_DWORD **)(this + 12));
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 176))(*(_DWORD *)(this + 12), v10);
          }
        }
        if ( a2
          || !(unsigned __int8)sub_648200(this)
          && !(unsigned __int8)sub_6481B0(this)
          && !(unsigned __int8)sub_6480D0(this) )
        {
          sub_5F5D50(*(_DWORD **)(this + 8), 0);
          sub_5EAF00(*(_DWORD *)(this + 8), v28);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 176))(*(_DWORD *)(this + 8), 0);
        }
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 116))(*(_DWORD *)(this + 12));
        if ( a2 || !(unsigned __int8)sub_648200(this) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 116))(*(_DWORD *)(this + 8));
        if ( CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 12)) == v27 )
        {
          v11 = CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 8));
          if ( v11 == CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 12))
            && !CMFCScanliner::channels(*(CMFCScanliner **)(this + 12))
            && CMFCScanliner::channels(*(CMFCScanliner **)(this + 8)) )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 176))(*(_DWORD *)(this + 8), 0);
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 116))(*(_DWORD *)(this + 8));
          }
        }
        IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 12));
        sub_646380(this, IsFixedSize);
      }
      else
      {
        v22 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12);
        v6 = sub_646D10(this);
        v26 = sub_6394C0(v22, v6);
        if ( a2 || CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 12)) != v26 )
        {
          sub_5EAF00(*(_DWORD *)(this + 12), v26);
          v7 = sub_5EB240(*(_DWORD **)(this + 12));
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 176))(*(_DWORD *)(this + 12), v7);
        }
        if ( a2 || CDrawImage::UsingImageAllocator(*(CDrawImage **)(this + 8)) != v26 )
        {
          sub_5EAF00(*(_DWORD *)(this + 8), v26);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 176))(*(_DWORD *)(this + 8), 0);
        }
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 116))(*(_DWORD *)(this + 12));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 116))(*(_DWORD *)(this + 8));
      }
      if ( *(_BYTE *)(this + 43) && *(_DWORD *)(this + 28) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
    }
    if ( a3 )
      *(_DWORD *)(this + 48) = a3;
    if ( *(_BYTE *)(this + 42) )
      sub_64AFA0(*(_DWORD *)(this + 48));
    if ( *(_BYTE *)(this + 44)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 512))(dword_162EE80)
      && (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 480))(dword_162EE80)
      && ((result = (int)CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4)), *(_DWORD *)result != 1)
       || (result = *(_DWORD *)(this + 4), *(_DWORD *)(result + 12) == -1)) )
    {
      if ( *(_DWORD *)(this + 4) )
      {
        if ( *(_DWORD *)(this + 32) )
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 24) + 400) )
          {
            v13 = CMediaType::IsFixedSize(*(CMediaType **)(*(_DWORD *)(this + 24) + 400));
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 108))(*(_DWORD *)(this + 32), v13 + 2);
          }
          else
          {
            v14 = CMediaType::IsFixedSize(*(CMediaType **)(this + 24));
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 108))(*(_DWORD *)(this + 32), v14 + 10);
          }
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 116))(*(_DWORD *)(this + 32));
        }
        if ( *(_DWORD *)(this + 36) )
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 24) + 400) )
          {
            v15 = CMediaType::IsFixedSize(*(CMediaType **)(*(_DWORD *)(this + 24) + 400));
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 108))(*(_DWORD *)(this + 36), v15 + 2);
          }
          else
          {
            v16 = CMediaType::IsFixedSize(*(CMediaType **)(this + 24));
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 108))(*(_DWORD *)(this + 36), v16 + 10);
          }
          return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 116))(*(_DWORD *)(this + 36));
        }
      }
    }
    else
    {
      result = this;
      if ( *(_DWORD *)(this + 32) )
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 112))(*(_DWORD *)(this + 32));
      if ( *(_DWORD *)(this + 36) )
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36));
    }
  }
  else if ( *(_BYTE *)(this + 42) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 408))(dword_162EE80);
    if ( (_BYTE)result )
      return sub_64AFA0(0);
  }
  return result;
}


//======================================================================
// sub_646C20
// entry 00646c20  size 143  status ok
//======================================================================

int __thiscall sub_646C20(int this, char a2)
{
  int result; // eax

  *(_BYTE *)(this + 92) = 1;
  if ( a2 )
    sub_648270(1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 112))(*(_DWORD *)(this + 8));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 112))(*(_DWORD *)(this + 24));
  if ( *(_DWORD *)(this + 20) )
    sub_664670(*(_DWORD *)(this + 20));
  result = this;
  if ( *(_DWORD *)(this + 28) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
  return result;
}


//======================================================================
// sub_646CB0
// entry 00646cb0  size 86  status ok
//======================================================================

unsigned __int8 __thiscall sub_646CB0(int this)
{
  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left != 3 )
    return CMFCScanliner::channels(*(CMFCScanliner **)(this + 12));
  if ( *(_DWORD *)(this + 20) )
    return sub_6646C0(*(_DWORD *)(this + 20));
  else
    return 1;
}


//======================================================================
// sub_646D10
// entry 00646d10  size 122  status ok
//======================================================================

bool __thiscall sub_646D10(int this)
{
  int v1; // esi
  int v2; // esi
  bool v6; // [esp+Fh] [ebp-1h]

  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 76))(*(_DWORD *)(this + 12));
  v2 = sub_5F5550(*(_DWORD **)(this + 12)) / 2 + v1;
  v6 = v2 < sub_5F8550(*((_DWORD **)dword_162EE84 + 5)) / 2;
  if ( *(_BYTE *)(this + 16) )
    return !v6;
  else
    return v6;
}


//======================================================================
// sub_646D90
// entry 00646d90  size 29  status ok
//======================================================================

BOOL __thiscall sub_646D90(void *this)
{
  return !sub_646D10((int)this);
}


//======================================================================
// sub_646DB0
// entry 00646db0  size 142  status ok
//======================================================================

bool __thiscall sub_646DB0(_DWORD *this, int a2)
{
  if ( *(this + 2) && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 132))(*(this + 2), a2) )
    return 1;
  if ( *(this + 3) && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3) + 132))(*(this + 3), a2) )
    return 1;
  return *(this + 5) && (unsigned __int8)sub_664410(a2);
}


//======================================================================
// sub_646E40
// entry 00646e40  size 32  status ok
//======================================================================

int __thiscall sub_646E40(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 3) + 76))(*(this + 3), this);
}


//======================================================================
// sub_646E70
// entry 00646e70  size 32  status ok
//======================================================================

int __thiscall sub_646E70(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 3) + 84))(*(this + 3), this);
}


//======================================================================
// sub_646E90
// entry 00646e90  size 16  status ok
//======================================================================

int sub_646E90()
{
  return 84;
}


//======================================================================
// sub_646EA0
// entry 00646ea0  size 22  status ok
//======================================================================

int __thiscall sub_646EA0(CMediaType **this)
{
  return CMediaType::IsFixedSize(*(this + 2));
}


//======================================================================
// sub_646FA0
// entry 00646fa0  size 615  status ok
//======================================================================

char __thiscall sub_646FA0(int this, int a2, int a3, int a4, int a5, char a6)
{
  char result; // al
  int v7; // edx
  const void *v8; // eax
  char v9; // [esp+0h] [ebp-28h]
  CImageDisplay *v11; // [esp+8h] [ebp-20h]
  int v12; // [esp+18h] [ebp-10h]
  CAtlAllocator *v13; // [esp+1Ch] [ebp-Ch]
  int Size; // [esp+20h] [ebp-8h]
  CFrameWndEx *v15; // [esp+24h] [ebp-4h]

  v13 = *(CAtlAllocator **)(*(_DWORD *)(this + 12) + 380);
  result = sub_637730((_DWORD **)dword_162EE84, 0);
  if ( (result
     || a3 == 6000
     || (result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 936))(
                    dword_162EE84,
                    *(_DWORD *)(*(_DWORD *)(this + 4) + 8))) != 0)
    && v13
    && ((v11 = *(CImageDisplay **)(this + 4), CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2)
     || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3
      ? (v9 = 1)
      : (v9 = 0),
        (!v9 || (result = sub_648AE0(this)) != 0)
     && (v7 = *(_DWORD *)(this + 4), result = *(_DWORD *)(v7 + 12) != -1, *(_DWORD *)(v7 + 12) == -1)) )
  {
    v12 = *(_DWORD *)(this + 52);
    sub_6464D0(this, 1, 0);
    *(_DWORD *)(this + 52) = v12;
    v15 = (CFrameWndEx *)sub_603C50(*(void **)(dword_7960D8 + 24), 542327875, a2, 0);
    Size = CFrameWndEx::GetPaneMenuEntryID(v15);
    if ( Size <= 1024 )
    {
      v8 = (const void *)(*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)v15 + 4))(v15);
      memcpy((char *)v13 + 44, v8, Size);
      sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), dword_7960D8, (int)v15);
      *((_DWORD *)v13 + 10) = a2;
      *((_DWORD *)v13 + 267) = Size / 2;
      *((_DWORD *)v13 + 268) = 0;
      *((_DWORD *)v13 + 9) = a4;
      *((_DWORD *)v13 + 272) = a5;
      *((_DWORD *)v13 + 273) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 4))(*(_DWORD *)(dword_7960D8 + 12));
      *((_BYTE *)v13 + 1096) = a6;
      result = (*(int (__thiscall **)(CAtlAllocator *, int, _DWORD))(*(_DWORD *)v13 + 8))(
                 v13,
                 *(_BYTE *)(this + 81) != 0 ? 9 : 6,
                 0);
      if ( *(_BYTE *)(this + 81) )
        return sub_5FC3D0(v13);
    }
    else
    {
      sub_5E9F20("false", "..\\casinoShell\\character.cpp", 522);
      return sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), (int)v15, (int)v15);
    }
  }
  else
  {
    if ( !v13 )
      result = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 508);
    if ( a4 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 28))(a4, a5);
  }
  return result;
}


//======================================================================
// sub_647210
// entry 00647210  size 474  status ok
//======================================================================

char __thiscall sub_647210(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  const void *v7; // eax
  char v9; // [esp+0h] [ebp-20h]
  CImageDisplay *v11; // [esp+8h] [ebp-18h]
  _DWORD *v12; // [esp+14h] [ebp-Ch]
  int Size; // [esp+18h] [ebp-8h]
  CFrameWndEx *v14; // [esp+1Ch] [ebp-4h]

  LOBYTE(v6) = this;
  if ( *(_BYTE *)(this + 40) && (v6 = *(_DWORD *)(this + 4), *(_DWORD *)(v6 + 12) == -1) )
  {
    v12 = *(_DWORD **)(*(_DWORD *)(this + 12) + 380);
    if ( v12
      && ((v11 = *(CImageDisplay **)(this + 4), CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2)
       || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3
        ? (v9 = 1)
        : (v9 = 0),
          !v9) )
    {
      sub_6464D0(this, 1, 0);
      v14 = (CFrameWndEx *)sub_603C50(*(void **)(dword_7960D8 + 24), 542327875, a3 + a2, 0);
      Size = CFrameWndEx::GetPaneMenuEntryID(v14);
      if ( Size <= 1024 )
      {
        v7 = (const void *)(*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)v14 + 4))(v14);
        memcpy(v12 + 11, v7, Size);
        sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), (int)v14, (int)v14);
        v12[269] = a2;
        v12[267] = Size / 2;
        v12[268] = 0;
        v12[9] = a4;
        v12[270] = a5;
        v12[271] = a6;
        LOBYTE(v6) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v12 + 8))(v12, 4, 0);
      }
      else
      {
        sub_5E9F20("false", "..\\casinoShell\\character.cpp", 569);
        LOBYTE(v6) = sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), dword_7960D8, (int)v14);
      }
    }
    else
    {
      LOBYTE(v6) = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 557);
      if ( a4 )
        LOBYTE(v6) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, 0);
    }
  }
  else if ( a4 )
  {
    LOBYTE(v6) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, 0);
  }
  return v6;
}


//======================================================================
// sub_6473F0
// entry 006473f0  size 461  status ok
//======================================================================

char __thiscall sub_6473F0(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  const void *v5; // eax
  char v7; // [esp+0h] [ebp-24h]
  CImageDisplay *v9; // [esp+Ch] [ebp-18h]
  _DWORD *v10; // [esp+18h] [ebp-Ch]
  int Size; // [esp+1Ch] [ebp-8h]
  CFrameWndEx *v12; // [esp+20h] [ebp-4h]

  LOBYTE(v3) = this;
  if ( *(_BYTE *)(this + 41) && (v3 = *(_DWORD *)(this + 4), *(_DWORD *)(v3 + 12) == -1) )
  {
    v10 = *(_DWORD **)(*(_DWORD *)(this + 12) + 380);
    if ( v10
      && ((v9 = *(CImageDisplay **)(this + 4), CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2)
       || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3
        ? (v7 = 1)
        : (v7 = 0),
          !v7) )
    {
      sub_6464D0(this, 1, 0);
      v4 = sub_639610(*(_DWORD *)(*(_DWORD *)(this + 4) + 8), 1);
      v12 = (CFrameWndEx *)sub_603C50(*(void **)(dword_7960D8 + 24), 542327875, a2 + v4, 0);
      Size = CFrameWndEx::GetPaneMenuEntryID(v12);
      if ( Size <= 1024 )
      {
        v5 = (const void *)(*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)v12 + 4))(v12);
        memcpy(v10 + 11, v5, Size);
        sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), (int)v12, (int)v12);
        v10[267] = Size / 2;
        v10[268] = 0;
        v10[9] = a3;
        LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v10 + 8))(v10, 2, 0);
      }
      else
      {
        sub_5E9F20("false", "..\\casinoShell\\character.cpp", 627);
        LOBYTE(v3) = sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), dword_7960D8, (int)v12);
      }
    }
    else
    {
      LOBYTE(v3) = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 615);
      if ( a3 )
        LOBYTE(v3) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 28))(a3, 0);
    }
  }
  else if ( a3 )
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 28))(a3, 0);
  }
  return v3;
}


//======================================================================
// sub_6475C0
// entry 006475c0  size 303  status ok
//======================================================================

int __thiscall sub_6475C0(int this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // eax
  const void *v6; // eax
  _DWORD *v7; // [esp+4h] [ebp-Ch]
  int Size; // [esp+8h] [ebp-8h]
  CFrameWndEx *v9; // [esp+Ch] [ebp-4h]

  v7 = *(_DWORD **)(*(_DWORD *)(this + 12) + 380);
  result = this;
  if ( *(_BYTE *)(this + 41) && v7 )
  {
    sub_6464D0(this, 1, 0);
    v5 = sub_639610(a2, 1);
    v9 = (CFrameWndEx *)sub_603C50(*(void **)(dword_7960D8 + 24), 542327875, a3 + v5, 0);
    Size = CFrameWndEx::GetPaneMenuEntryID(v9);
    if ( Size <= 1024 )
    {
      v6 = (const void *)(*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)v9 + 4))(v9);
      memcpy(v7 + 11, v6, Size);
      sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), (int)v9, (int)v9);
      v7[267] = Size / 2;
      v7[268] = 0;
      v7[9] = a4;
      return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, 2, 0);
    }
    else
    {
      sub_5E9F20("false", "..\\casinoShell\\character.cpp", 660);
      return sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), dword_7960D8, (int)v9);
    }
  }
  else if ( a4 )
  {
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a4 + 28))(a4, 0);
  }
  return result;
}


//======================================================================
// sub_6476F0
// entry 006476f0  size 2152  status ok
//======================================================================

char __thiscall sub_6476F0(int this, int a2, __int64 a3, int a4, char a5)
{
  char result; // al
  double v6; // st7
  LONG *v7; // eax
  LONG *v8; // eax
  bool v11; // [esp+30h] [ebp-174h]
  CImageDisplay *v13; // [esp+38h] [ebp-16Ch]
  CImageDisplay *v14; // [esp+4Ch] [ebp-158h]
  CImageDisplay *v15; // [esp+5Ch] [ebp-148h]
  int v16; // [esp+68h] [ebp-13Ch]
  char v17; // [esp+6Fh] [ebp-135h]
  int v18; // [esp+70h] [ebp-134h]
  int v19; // [esp+70h] [ebp-134h]
  int v20; // [esp+70h] [ebp-134h]
  int v21; // [esp+70h] [ebp-134h]
  char Destination[264]; // [esp+74h] [ebp-130h] BYREF
  int v23; // [esp+180h] [ebp-24h]
  double v24; // [esp+184h] [ebp-20h]
  int v25; // [esp+190h] [ebp-14h]
  bool v26; // [esp+197h] [ebp-Dh]
  int v27; // [esp+198h] [ebp-Ch]
  double v28; // [esp+19Ch] [ebp-8h]

  v17 = 0;
  v25 = -1;
  sub_62FDE0("DoLipSyncComplete() called.\t");
  if ( (sub_637730((_DWORD **)dword_162EE84, 0) || *(_DWORD *)(a2 + 4) == 6000)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 504))(dword_162EE80) )
  {
    if ( *(int *)(a2 + 4) < 0 )
    {
      sub_62FDE0("     situation: NO_SITUATION.\t");
    }
    else
    {
      v18 = sub_666D90(*(_DWORD *)(a2 + 4));
      if ( v18 )
        sub_62FDE0("     situation: %s.\t", (const char *)(v18 + 4));
      else
        sub_5E9F20("false", "..\\casinoShell\\character.cpp", 702);
    }
    if ( *(int *)(a2 + 8) < 0 )
    {
      sub_62FDE0(" situation: NO_SITUATION.\n");
    }
    else
    {
      v19 = sub_666D90(*(_DWORD *)(a2 + 8));
      if ( v19 )
        sub_62FDE0(" situation: %s.\n", (const char *)(v19 + 4));
      else
        sub_5E9F20("false", "..\\casinoShell\\character.cpp", 712);
    }
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 892))(
           dword_162EE84,
           a2) )
    {
      v17 = 1;
    }
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 896))(
           dword_162EE84,
           a2) )
    {
      v17 = 1;
    }
    if ( !v17 )
      goto LABEL_37;
    sub_62FDE0("MAPPED TO: ");
    if ( *(int *)(a2 + 4) < 0 )
    {
      sub_62FDE0("NO_SITUATION");
    }
    else
    {
      v20 = sub_666D90(*(_DWORD *)(a2 + 4));
      if ( v20 )
        sub_62FDE0((char *)(v20 + 4));
      else
        sub_5E9F20("false", "..\\casinoShell\\character.cpp", 730);
    }
    sub_62FDE0(", ");
    if ( *(int *)(a2 + 8) < 0 )
    {
      sub_62FDE0("NO_SITUATION");
    }
    else
    {
      v21 = sub_666D90(*(_DWORD *)(a2 + 8));
      if ( v21 )
        sub_62FDE0((char *)(v21 + 4));
      else
        sub_5E9F20("false", "..\\casinoShell\\character.cpp", 740);
    }
    sub_62FDE0("\n");
    result = a2;
    if ( *(_DWORD *)(a2 + 4) == -1 && *(_DWORD *)(a2 + 8) == -1 )
    {
      if ( (_DWORD)a3 )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
    }
    else
    {
LABEL_37:
      v15 = *(CImageDisplay **)(this + 4);
      v11 = CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 2
         || CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 3;
      if ( !v11 || (result = sub_648AE0(this)) != 0 )
      {
        if ( *(_DWORD *)(a2 + 4) == -1 && *(_DWORD *)(a2 + 8) == -1 )
        {
          result = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 767);
          if ( (_DWORD)a3 )
            return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
        }
        else
        {
          v24 = (double)sub_6377B0((_DWORD **)dword_162EE84) / 10.0;
          sub_62FDE0("     attitudeRatio: %f\t importance: %f\t", v24, *(double *)(a2 + 24));
          if ( *(double *)(a2 + 24) <= 0.5 )
          {
            v28 = (0.5 - *(double *)(a2 + 24)) / 0.5;
            v24 = v24 - v24 * v28;
            sub_62FDE0("     decrement ratio: %f\t decremented attitudeRatio: %f\n", v28, v24);
          }
          else
          {
            v28 = (*(double *)(a2 + 24) - 0.5) / 0.5;
            v24 = (1.0 - v24) * v28 + v24;
            sub_62FDE0("     increment ratio: %f\t incremented attitudeRatio: %f\n", v28, v24);
          }
          v6 = (double)sub_62FBF0(256);
          v26 = v24 * 256.0 >= v6;
          if ( v24 * 256.0 >= v6 )
          {
            if ( *(_DWORD *)(a2 + 8) == -1 )
            {
              v27 = *(_DWORD *)(a2 + 4);
            }
            else if ( *(_DWORD *)(a2 + 4) == -1 )
            {
              v27 = *(_DWORD *)(a2 + 8);
            }
            else if ( sub_6371E0(*(_DWORD *)(*(_DWORD *)(this + 4) + 8), *(_DWORD *)(a2 + 4), -1) )
            {
              if ( (double)sub_62FBF0(256) / 256.0 <= *(double *)(a2 + 16) )
                v27 = *(_DWORD *)(a2 + 8);
              else
                v27 = *(_DWORD *)(a2 + 4);
            }
            else
            {
              v27 = *(_DWORD *)(a2 + 8);
            }
            v14 = *(CImageDisplay **)(this + 4);
            if ( CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3 )
            {
              v7 = sub_57A470(*(CImageDisplay **)(this + 4));
              strcpy(Destination, (const char *)v7);
              if ( Destination[0] )
              {
                v8 = sub_57A470(*(CImageDisplay **)(this + 4));
                v25 = sub_665800(v8);
              }
              else
              {
                v25 = *(_DWORD *)(*(_DWORD *)(this + 4) + 8);
              }
            }
            else
            {
              v25 = *(_DWORD *)(*(_DWORD *)(this + 4) + 8);
            }
            if ( sub_6371E0(v25, v27, a4) )
            {
              if ( !a5
                || (v16 = sub_637260(v27, v25), sub_62FBF0(4))
                || v16 == -1
                || (result = sub_647F60(v16, a3, HIDWORD(a3))) == 0 )
              {
                v23 = sub_637000(v25, v27, a4);
                if ( v23 == -1 )
                {
                  result = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 860);
                  if ( (_DWORD)a3 )
                    return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
                }
                else
                {
                  v13 = *(CImageDisplay **)(this + 4);
                  if ( CImageDisplay::GetDisplayFormat(v13)->rcSource.left != 2
                    && CImageDisplay::GetDisplayFormat(v13)->rcSource.left != 3 )
                  {
                    *(_DWORD *)(this + 72) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 460))(
                                               dword_162EE80,
                                               this,
                                               v27);
                  }
                  return sub_646FA0(this, v23, v27, a3, SHIDWORD(a3), 1);
                }
              }
            }
            else
            {
              result = sub_62FDE0("DoLipSyncComplete() exit early because no line is available.\n");
              if ( (_DWORD)a3 )
                return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
            }
          }
          else
          {
            result = sub_62FDE0("DoLipSyncComplete() exit early based on line importance.\n");
            if ( (_DWORD)a3 )
              return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
          }
        }
      }
      else if ( (_DWORD)a3 )
      {
        return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
      }
    }
  }
  else
  {
    result = sub_62FDE0("\n");
    if ( (_DWORD)a3 )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a3 + 28))(a3, HIDWORD(a3));
  }
  return result;
}


//======================================================================
// sub_647F60
// entry 00647f60  size 366  status ok
//======================================================================

char __thiscall sub_647F60(_DWORD *this, int a2, __int64 a3)
{
  signed int v4; // eax
  _DWORD v6[4]; // [esp+14h] [ebp-28h] BYREF
  double v7; // [esp+24h] [ebp-18h]
  double v8; // [esp+2Ch] [ebp-10h]
  int i; // [esp+34h] [ebp-8h]
  int v10; // [esp+38h] [ebp-4h]

  if ( a2 == -1 )
    return 0;
  for ( i = 0; i < 20; ++i )
  {
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    v10 = sub_62FBF0(v4);
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * v10))->rcSource.left == 1
      && *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v10) != *(this + 1)
      && *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v10) + 12) == -1
      && v10 != (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 500))(
                  dword_162EE80,
                  *(_DWORD *)(*(this + 1) + 4)) )
    {
      sub_62FDE0("DoLipSyncCharacterToCharacter() transferring line to ctc character.\n");
      v6[0] = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v10) + 8);
      v6[1] = -1;
      v6[2] = a2;
      v7 = 1.0;
      v8 = 1.0;
      sub_6476F0(
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v10) + 32),
        (int)v6,
        a3,
        *(_DWORD *)(*(this + 1) + 8),
        1);
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_6480D0
// entry 006480d0  size 100  status ok
//======================================================================

bool __thiscall sub_6480D0(_DWORD *this)
{
  return *(this + 3)
      && *(_DWORD *)(*(this + 3) + 380)
      && (int)CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) >= 7
      && (int)CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) <= 13;
}


//======================================================================
// sub_648140
// entry 00648140  size 100  status ok
//======================================================================

bool __thiscall sub_648140(_DWORD *this)
{
  return *(this + 3)
      && *(_DWORD *)(*(this + 3) + 380)
      && (int)CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) >= 6
      && (int)CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) <= 13;
}


//======================================================================
// sub_6481B0
// entry 006481b0  size 78  status ok
//======================================================================

bool __thiscall sub_6481B0(_DWORD *this)
{
  return *(this + 3)
      && *(_DWORD *)(*(this + 3) + 380)
      && CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) == (struct CAtlTraceProcess *)2;
}


//======================================================================
// sub_648200
// entry 00648200  size 100  status ok
//======================================================================

bool __thiscall sub_648200(_DWORD *this)
{
  return *(this + 3)
      && *(_DWORD *)(*(this + 3) + 380)
      && (CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) == (struct CAtlTraceProcess *)4
       || CAtlAllocator::GetProcess(*(CAtlAllocator **)(*(this + 3) + 380)) == (struct CAtlTraceProcess *)5);
}


//======================================================================
// sub_648270
// entry 00648270  size 191  status ok
//======================================================================

int __thiscall sub_648270(int this, char a2)
{
  _DWORD **v4; // [esp+4h] [ebp-4h]

  *(_DWORD *)(this + 52) = 0;
  if ( *(_DWORD *)(this + 76) && !*(_BYTE *)(this + 80) )
  {
    if ( byte_7960CB )
      sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), this, *(_DWORD *)(this + 76));
    else
      sub_5F4510(*(_DWORD *)(this + 76), a2);
    *(_DWORD *)(this + 76) = 0;
  }
  v4 = *(_DWORD ***)(*(_DWORD *)(this + 12) + 380);
  if ( v4[9] && a2 )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4[9] + 28))(v4[9], 0);
  v4[9] = 0;
  return ((int (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*v4)[2])(v4, 0, 0);
}


//======================================================================
// sub_648330
// entry 00648330  size 163  status ok
//======================================================================

int __thiscall sub_648330(_DWORD *this, char *Str2)
{
  int i; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  v4 = sub_639520(*(_DWORD *)(*(this + 1) + 8));
  for ( i = 0; i < 20; ++i )
  {
    if ( !strcmp(&aScratchFace[896 * v4 + 44 * i], Str2) )
      return dword_763580[224 * v4 + 11 * i];
    if ( !dword_763580[224 * v4 + 11 * i] )
      break;
  }
  return 0;
}


//======================================================================
// sub_6483E0
// entry 006483e0  size 130  status ok
//======================================================================

int __stdcall sub_6483E0(int a1)
{
  int v2; // [esp+4h] [ebp-Ch]
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v3 = sub_639520(a1);
  for ( i = 0; i < 20 && dword_763580[224 * v3 + 11 * v2]; ++i )
  {
    if ( !dword_7635A8[224 * v3 + 11 * v2] )
      ++v2;
  }
  return v2;
}


//======================================================================
// sub_648470
// entry 00648470  size 222  status ok
//======================================================================

char __thiscall sub_648470(_DWORD *this, char *Str2, _DWORD *a3, _DWORD *a4)
{
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = sub_639520(*(_DWORD *)(*(this + 1) + 8));
  *a3 = 0;
  *a4 = 0;
  for ( i = 0; i < 20; ++i )
  {
    if ( !strcmp(&aScratchFace[896 * v6 + 44 * i], Str2) )
    {
      *a3 = dword_763580[224 * v6 + 11 * i];
      *a4 = dword_763584[224 * v6 + 11 * i];
      return 1;
    }
    if ( !dword_763580[224 * v6 + 11 * i] )
      break;
  }
  return 0;
}


//======================================================================
// sub_648550
// entry 00648550  size 231  status ok
//======================================================================

char __thiscall sub_648550(_DWORD *this, int a2, char a3)
{
  char result; // al
  int v4; // eax
  int v6; // [esp+4h] [ebp-20h]
  int v7; // [esp+8h] [ebp-1Ch] BYREF
  int v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  v11 = 0;
  v9 = 0;
  v6 = 2;
  v13 = 0;
  v12 = sub_62FBF0(3);
  v10 = -1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v9 = 8;
      v6 = 10;
    }
  }
  else
  {
    v9 = 3;
    v6 = 7;
  }
  result = sub_648470(this, (&off_76D334)[v12], &v7, &v11);
  if ( result )
  {
    v8 = sub_62FBF0(v11);
    if ( a3 )
      v10 = 1182;
    v4 = sub_62FC30(v9, v6);
    return sub_647210((int)this, v7, v8, a2, v10, dword_76D308[v4]);
  }
  return result;
}


//======================================================================
// sub_648640
// entry 00648640  size 1172  status ok
//======================================================================

char __thiscall sub_648640(int this, char a2)
{
  const CHAR *v2; // eax
  int v3; // eax
  const CHAR *v4; // eax
  LONG *v5; // eax
  int v6; // eax
  signed int v7; // eax
  LONG *v8; // eax
  LONG *v9; // eax
  int v10; // eax
  int v11; // eax
  const CHAR *v13; // [esp-8h] [ebp-58h]
  const CHAR *v14; // [esp-8h] [ebp-58h]
  LONG *v15; // [esp-4h] [ebp-54h]
  bool v17; // [esp+4h] [ebp-4Ch]
  CImageDisplay *v19; // [esp+1Ch] [ebp-34h]
  CImageDisplay *v20; // [esp+2Ch] [ebp-24h]
  int v21; // [esp+38h] [ebp-18h]
  int v22; // [esp+38h] [ebp-18h]
  int v23; // [esp+38h] [ebp-18h]
  int v24; // [esp+40h] [ebp-10h]
  int v25; // [esp+48h] [ebp-8h]
  int v26; // [esp+4Ch] [ebp-4h]

  v20 = *(CImageDisplay **)(this + 4);
  v17 = CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 3;
  if ( sub_637730((_DWORD **)dword_162EE84, 0) )
  {
    if ( (unsigned __int8)sub_648AE0(this) )
    {
      sub_636E70(dword_162EE84);
      if ( v17 )
      {
        v5 = sub_57A470(*(CImageDisplay **)(this + 4));
        v6 = sub_665800(v5);
        v21 = sub_637000(v6, a2 != 0 ? 1028 : 1026, -1);
        *(_DWORD *)(this + 52) = 2 - (a2 != 0);
        LOBYTE(v3) = sub_646FA0(this, v21, -1, 0, 0, 1);
        if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 4) != -1 )
        {
          v3 = sub_636730(dword_162EE84);
          if ( v3 > 0 )
          {
            sub_648BD0(a2);
            if ( CUserToolsManager::GetArgumentsMenuID((CUserToolsManager *)this) == *(_DWORD *)(this + 60)
              && (unsigned int)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 4))(*(_DWORD *)(dword_7960D8 + 12))
                              - *(_DWORD *)(this + 64)) < 0x4650 )
            {
              do
              {
                v7 = sub_636610(dword_162EE84);
                v26 = sub_62FBF0(v7);
                v19 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * v26);
              }
              while ( CImageDisplay::GetDisplayFormat(v19)->rcSource.left == 2
                   || CImageDisplay::GetDisplayFormat(v19)->rcSource.left == 3 );
              v22 = sub_637000(
                      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v26) + 8),
                      1180 - (a2 != 0),
                      -1);
              sub_646FA0(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v26) + 32), v22, -1, 0, 0, 1);
              v15 = sub_639070(dword_162EE84, 0);
              v8 = sub_639070(dword_162EE84, v26);
              sub_62FDE0(">>>>> %s responds to %s\n", (const char *)v8, (const char *)v15);
              LOBYTE(v3) = sub_648C20(this);
            }
            else
            {
              v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 4))(*(_DWORD *)(dword_7960D8 + 12))
                 - *(_DWORD *)(this + 64);
              if ( (unsigned int)v3 > 0x4650 )
                LOBYTE(v3) = sub_648C20(this);
            }
          }
        }
      }
      else if ( a2
             || sub_62FBF0(4) > 1
             || !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 196))(dword_162EE84) )
      {
        v24 = sub_637260(1186 - (a2 != 0), *(_DWORD *)(*(_DWORD *)(this + 4) + 8));
        v25 = sub_6340D0(dword_162EE84);
        v9 = sub_57A470(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * v25));
        v10 = sub_665800(v9);
        v23 = sub_637000(v10, v24, -1);
        if ( a2
          || (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 204))(dword_162EE84) )
        {
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v25) + 32) + 52) = 2 - (a2 != 0);
        }
        sub_646FA0(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v25) + 32), v23, -1, 0, 0, 1);
        LOBYTE(v3) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 208))(dword_162EE84);
        if ( (_BYTE)v3 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 212))(dword_162EE84) )
            v11 = sub_637000(*(_DWORD *)(*(_DWORD *)(this + 4) + 8), 1184 - (a2 != 0), -1);
          else
            v11 = sub_637000(*(_DWORD *)(*(_DWORD *)(this + 4) + 8), 1182 - (a2 != 0), -1);
          LOBYTE(v3) = sub_646FA0(this, v11, -1, 0, 0, 1);
        }
      }
      else
      {
        LOBYTE(v3) = sub_648550((_DWORD *)this, 0, 1);
      }
    }
    else
    {
      v14 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEMAKER");
      v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEMAKER_CANNOT_SPEAK");
      LOBYTE(v3) = sub_62FF10(v4, v14, 0);
    }
  }
  else
  {
    v13 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEMAKER");
    v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_SPEECHOFF");
    LOBYTE(v3) = sub_62FF10(v2, v13, 0);
  }
  return v3;
}


//======================================================================
// sub_648AE0
// entry 00648ae0  size 205  status ok
//======================================================================

bool __thiscall sub_648AE0(int this)
{
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84)
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 480))(dword_162EE80) )
  {
    return 0;
  }
  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left == 1 )
    return sub_6340D0(dword_162EE84) >= 0;
  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 4))->rcSource.left != 3 )
    return 0;
  return *(_DWORD *)(this + 20) && (unsigned __int8)sub_665250(*(_DWORD *)(this + 20));
}


//======================================================================
// sub_648BD0
// entry 00648bd0  size 74  status ok
//======================================================================

int __thiscall sub_648BD0(int this, char a2)
{
  if ( a2 != *(_BYTE *)(this + 68) && CUserToolsManager::GetArgumentsMenuID((CUserToolsManager *)this) )
    sub_648C20(this);
  else
    ++*(_DWORD *)(this + 56);
  *(_BYTE *)(this + 68) = a2;
  return this;
}


//======================================================================
// sub_648C20
// entry 00648c20  size 79  status ok
//======================================================================

int __thiscall sub_648C20(int this)
{
  int result; // eax

  *(_DWORD *)(this + 56) = 0;
  *(_BYTE *)(this + 68) = 1;
  *(_DWORD *)(this + 60) = sub_62FBF0(3) + 2;
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 4))(*(_DWORD *)(dword_7960D8 + 12));
  *(_DWORD *)(this + 64) = result;
  return result;
}


//======================================================================
// sub_648C70
// entry 00648c70  size 54  status ok
//======================================================================

_DWORD *__thiscall sub_648C70(_DWORD *this, int a2, int a3)
{
  sub_5F5BF0(this);
  *this = &CharacterPart::`vftable';
  *(this + 97) = a2;
  *(this + 1) = a3;
  return this;
}


//======================================================================
// sub_648CD0
// entry 00648cd0  size 175  status ok
//======================================================================

int __thiscall sub_648CD0(int *this, int a2)
{
  int result; // eax

  if ( !sub_5F54A0((unsigned __int8 *)this)
    || !*(this + 95)
    || *(_DWORD *)(a2 + 24) != 1
    || !sub_6480D0((_DWORD *)*(this + 97)) )
  {
    return sub_5F4D00(this, a2);
  }
  result = *(unsigned __int8 *)(a2 + 4);
  if ( !*(_BYTE *)(a2 + 4) || *(_BYTE *)(a2 + 20) != 114 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 512))(dword_162EE80);
    if ( !(_BYTE)result )
    {
      *(_DWORD *)(*(this + 97) + 72) = 0;
      sub_6464D0(*(this + 97), 1, 0);
      return sub_5F4D00(this, a2);
    }
  }
  return result;
}


//======================================================================
// sub_648D80
// entry 00648d80  size 68  status ok
//======================================================================

int __thiscall sub_648D80(int this, int a2)
{
  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 284))(
           dword_162EE80,
           a2,
           *(_DWORD *)(this + 388));
}


//======================================================================
// sub_648DD0
// entry 00648dd0  size 69  status ok
//======================================================================

int __thiscall sub_648DD0(int this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 288))(
           dword_162EE80,
           a2,
           *(_DWORD *)(this + 388));
}


//======================================================================
// sub_648E20
// entry 00648e20  size 68  status ok
//======================================================================

int __thiscall sub_648E20(int this, int a2)
{
  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 292))(
           dword_162EE80,
           a2,
           *(_DWORD *)(this + 388));
}


//======================================================================
// sub_648E70
// entry 00648e70  size 69  status ok
//======================================================================

int __thiscall sub_648E70(int this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 296))(
           dword_162EE80,
           a2,
           *(_DWORD *)(this + 388));
}


//======================================================================
// sub_648EC0
// entry 00648ec0  size 139  status ok
//======================================================================

int __thiscall sub_648EC0(int this, int a2)
{
  sub_5FC0D0((ATL::CCRTHeap *)this, 0);
  *(_DWORD *)this = &CharacterScript::`vftable';
  *(_DWORD *)(this + 32) = a2;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = -1;
  *(_DWORD *)(this + 1068) = 0;
  *(_DWORD *)(this + 1072) = 0;
  *(_DWORD *)(this + 1076) = 0;
  *(_DWORD *)(this + 1088) = 0;
  *(_DWORD *)(this + 1092) = 0;
  *(_BYTE *)(this + 1096) = 1;
  return this;
}


//======================================================================
// sub_648F50
// entry 00648f50  size 6062  status ok
//======================================================================

char __thiscall sub_648F50(int *this)
{
  LONG left; // eax
  int v2; // kr00_4
  int v3; // eax
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  unsigned int Flags; // esi
  unsigned int v12; // eax
  int *v13; // eax
  int v14; // eax
  int *v15; // ecx
  int v16; // esi
  bool v17; // al
  char v18; // al
  int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // esi
  bool v24; // al
  int v25; // eax
  unsigned int v26; // eax
  int v28; // [esp+20h] [ebp-104h]
  int v29; // [esp+24h] [ebp-100h]
  int v30; // [esp+28h] [ebp-FCh]
  int v31; // [esp+2Ch] [ebp-F8h]
  int v32; // [esp+30h] [ebp-F4h]
  int v33; // [esp+38h] [ebp-ECh]
  int v35; // [esp+40h] [ebp-E4h]
  int v37; // [esp+48h] [ebp-DCh]
  int v39; // [esp+50h] [ebp-D4h]
  int v40; // [esp+54h] [ebp-D0h]
  CImageDisplay *v43; // [esp+70h] [ebp-B4h]
  CImageDisplay *v44; // [esp+90h] [ebp-94h]
  CImageDisplay *v45; // [esp+A4h] [ebp-80h]
  CImageDisplay *v46; // [esp+B0h] [ebp-74h]
  char v47; // [esp+CFh] [ebp-55h]
  int v48; // [esp+D0h] [ebp-54h]
  int v49; // [esp+D4h] [ebp-50h]
  signed int v50; // [esp+DCh] [ebp-48h]
  int v51; // [esp+E0h] [ebp-44h]
  CDrawImage *v52; // [esp+E4h] [ebp-40h]
  CMFCToolBarsCustomizeDialog *v53; // [esp+E8h] [ebp-3Ch]
  signed int Size; // [esp+ECh] [ebp-38h]
  int v55; // [esp+F0h] [ebp-34h]
  int v56; // [esp+F4h] [ebp-30h]
  int v57; // [esp+F8h] [ebp-2Ch]
  int v58; // [esp+FCh] [ebp-28h]
  int v59; // [esp+FCh] [ebp-28h]
  int v60; // [esp+FCh] [ebp-28h]
  unsigned int v61; // [esp+100h] [ebp-24h]
  int i; // [esp+104h] [ebp-20h]
  int v63; // [esp+108h] [ebp-1Ch]
  int v64; // [esp+10Ch] [ebp-18h]
  void *Src; // [esp+110h] [ebp-14h]
  int v66; // [esp+114h] [ebp-10h]

  Size = 0;
  left = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 8) + 4))->rcSource.left;
  if ( left )
  {
    if ( *(_DWORD *)(*(_DWORD *)(*(this + 8) + 24) + 4) == dword_16306A4
      || (LOBYTE(left) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 164))(dword_162EE80), (_BYTE)left) )
    {
      v55 = *(_DWORD *)(*(_DWORD *)(*(this + 8) + 4) + 8);
      v53 = *(CMFCToolBarsCustomizeDialog **)(*(this + 8) + 12);
      v52 = *(CDrawImage **)(*(this + 8) + 8);
      v2 = unknown_libname_843(this);
      switch ( v2 )
      {
        case 0:
          if ( sub_635CB0(dword_162EE84, (struct Concurrency::details::_TaskCollectionBase *)0x3EB)
            || sub_646CB0(*(this + 8)) )
          {
            LOBYTE(left) = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 8))(this, 0, 500);
          }
          else
          {
            v46 = *(CImageDisplay **)(*(this + 8) + 4);
            if ( CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 3 )
            {
              if ( byte_795FBC )
                goto LABEL_21;
              v40 = sub_62FBF0(180) + 180;
              LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 1, v40);
            }
            else if ( (sub_62FBF0(30) || byte_795F98 || sub_6377B0((_DWORD **)dword_162EE84) <= 0) && !byte_795FBB )
            {
              if ( byte_795FBC )
                goto LABEL_21;
              v39 = sub_62FBF0(180) + 180;
              LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 1, v39);
            }
            else
            {
              LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 3, 0);
            }
          }
          return left;
        case 1:
          v45 = *(CImageDisplay **)(*(this + 8) + 4);
          if ( CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 3 )
          {
            if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 8) + 4))->rcSource.left == 3 )
            {
              v58 = sub_639520(13);
              if ( sub_62FBF0(4) )
              {
                LOBYTE(left) = sub_6475C0(*(this + 8), 13, 0, 0);
              }
              else
              {
                v3 = sub_62FBF0(dword_76357C[224 * v58]);
                LOBYTE(left) = sub_6475C0(*(this + 8), 13, v3, 0);
              }
            }
            else if ( byte_795FBC )
            {
              LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 14, 0);
            }
            else
            {
              v37 = sub_62FBF0(180) + 180;
              LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 14, v37);
            }
          }
          else
          {
            v59 = sub_639520(v55);
            if ( sub_62FBF0(4) )
            {
              LOBYTE(left) = sub_6473F0(*(this + 8), 0, 0);
            }
            else
            {
              v4 = sub_62FBF0(dword_76357C[224 * v59]);
              LOBYTE(left) = sub_6473F0(*(this + 8), v4, 0);
            }
          }
          return left;
        case 2:
          if ( *(this + 268) >= *(this + 267) )
          {
            if ( *(this + 4) )
              (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
            goto LABEL_191;
          }
          *(_BYTE *)(*(this + 8) + 92) = 1;
          v44 = *(CImageDisplay **)(*(this + 8) + 4);
          if ( CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 3 )
          {
            if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 8) + 4))->rcSource.left != 3 )
            {
              LOBYTE(left) = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 1441);
              return left;
            }
            sub_665270(*((unsigned __int8 *)this + 2 * *(this + 268) + 44), *(_DWORD *)(*(this + 8) + 52));
          }
          else
          {
            v5 = sub_646D10(*(this + 8));
            v6 = sub_639610(v55, v5);
            sub_5EAF00((int)v53, v6);
            v7 = sub_5EB240(v53);
            (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, int))(*(_DWORD *)v53 + 176))(v53, v7);
            v8 = sub_646D10(*(this + 8));
            v9 = sub_639670(v55, v8);
            sub_5EAF00((int)v52, v9);
            (*(void (__thiscall **)(CDrawImage *, _DWORD))(*(_DWORD *)v52 + 176))(
              v52,
              *((unsigned __int8 *)this + 2 * *(this + 268) + 44));
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 116))(v52);
          }
          (*(void (__thiscall **)(int *, int, _DWORD))(*this + 8))(
            this,
            2,
            *((unsigned __int8 *)this + 2 * *(this + 268) + 45));
          ++*(this + 268);
          LOBYTE(left) = (_BYTE)this;
          return left;
        case 3:
          v60 = sub_639520(v55);
          v50 = sub_6483E0(v55);
          if ( v50 )
          {
            v51 = sub_62FBF0(v50);
            v10 = sub_62FBF0(dword_763584[224 * v60 + 11 * v51]);
            LOBYTE(left) = sub_647210(*(this + 8), dword_763580[224 * v60 + 11 * v51], v10, 0, -1, 0);
          }
          else
          {
            LOBYTE(left) = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 8))(this, 0, 0);
          }
          return left;
        case 4:
          if ( *(this + 270) != -1 )
          {
            v63 = sub_637000(*(_DWORD *)(*(_DWORD *)(*(this + 8) + 4) + 8), 1078, -1);
            if ( v63 != -1 )
              (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                dword_162EE84,
                v63,
                0,
                1,
                11,
                1,
                1.0,
                *(float *)(*(this + 8) + 84),
                0);
          }
          LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 5, 0);
          return left;
        case 5:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          if ( *(this + 268) < *(this + 267) )
          {
            if ( sub_639700(v55) && !sub_646D10(*(this + 8)) )
              sub_5EAF00((int)v53, *(this + 269) + 1);
            else
              sub_5EAF00((int)v53, *(this + 269));
            (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, _DWORD))(*(_DWORD *)v53 + 176))(
              v53,
              *((unsigned __int8 *)this + 2 * *(this + 268) + 44));
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 112))(v52);
            (*(void (__thiscall **)(int *, int, _DWORD))(*this + 8))(
              this,
              5,
              *((unsigned __int8 *)this + 2 * *(this + 268) + 45));
            ++*(this + 268);
            LOBYTE(left) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84);
            if ( (_BYTE)left && *(this + 271) )
            {
              (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                dword_162EE84,
                *(this + 271),
                0,
                0,
                5,
                1,
                1.0,
                0.5,
                0);
              LOBYTE(left) = (_BYTE)this;
              *(this + 271) = 0;
            }
          }
          else if ( *(this + 270) == -1 )
          {
            if ( *(this + 4) )
              (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
            sub_6464D0(*(this + 8), 1, 0);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 1, 0);
          }
          else
          {
            *(this + 10) = sub_637000(*(_DWORD *)(*(_DWORD *)(*(this + 8) + 4) + 8), *(this + 270), -1);
            sub_646FA0(*(this + 8), *(this + 10), -1, 0, 0, 1);
            *(this + 270) = -1;
            LOBYTE(left) = (_BYTE)this;
          }
          return left;
        case 6:
          if ( sub_636D40(dword_162EE84, *(_DWORD *)(*(_DWORD *)(*(this + 8) + 4) + 4)) )
            LOBYTE(left) = (*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
          else
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 7, 0);
          return left;
        case 7:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          if ( v55 == 30 )
          {
            sub_5EAF00((int)v53, 2203102);
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 112))(v52);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 9, 3);
          }
          else
          {
            if ( v55 != 2 || *((unsigned __int8 *)this + 44) < 0x20u )
              goto LABEL_83;
            sub_5EAF00((int)v53, *((unsigned __int8 *)this + 44) / 32 + 2200403);
            (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, _DWORD))(*(_DWORD *)v53 + 176))(v53, 0);
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 112))(v52);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 8, 3);
          }
          return left;
        case 8:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          Flags = CMFCToolBarsCustomizeDialog::GetFlags(v53);
          if ( Flags == sub_5EB240(v53) )
          {
LABEL_83:
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 9, 0);
          }
          else
          {
            v12 = CMFCToolBarsCustomizeDialog::GetFlags(v53);
            (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, unsigned int))(*(_DWORD *)v53 + 176))(v53, v12 + 1);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 8, 3);
          }
          return left;
        case 9:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          if ( *(this + 267) )
          {
            if ( byte_7960CB )
            {
              *(_DWORD *)(*(this + 8) + 76) = sub_603C50(*(void **)(dword_7960D8 + 24), 541542223, *(this + 10), 0);
            }
            else
            {
              v15 = this;
              LOBYTE(v15) = *((_BYTE *)this + 1096);
              (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, int *, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                dword_162EE84,
                *(this + 10),
                0,
                v15,
                11,
                1,
                1.0,
                *(float *)(*(this + 8) + 84),
                *(this + 8) + 76);
            }
            *(_DWORD *)(*(this + 8) + 88) = timeGetTime();
            if ( *(_DWORD *)(*(this + 8) + 72) )
            {
              v16 = *(this + 8);
              v17 = sub_646D10(v16);
              sub_5EAF00((int)v53, *(_DWORD *)(v16 + 72) + !v17);
              if ( operator new(0x43Cu) )
                v35 = sub_64A7A0(*(this + 8), *(_DWORD *)(*(this + 8) + 72), 0, 0);
              else
                v35 = 0;
              sub_5F5D50(v53, v35);
            }
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 10, 0);
          }
          else
          {
            v13 = this;
            LOBYTE(v13) = *((_BYTE *)this + 1096);
            v14 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, int *, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                    dword_162EE84,
                    *(this + 10),
                    0,
                    v13,
                    11,
                    1,
                    1.0,
                    *(float *)(*(this + 8) + 84),
                    *(this + 8) + 76);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 13, v14);
          }
          return left;
        case 10:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          if ( *(this + 268) < *(this + 267)
            && (byte_7960CB || *(_DWORD *)(*(this + 8) + 76) && sub_5F45A0(*(_DWORD *)(*(this + 8) + 76))) )
          {
            v57 = *((unsigned __int8 *)this + 2 * *(this + 268) + 44);
            v43 = *(CImageDisplay **)(*(this + 8) + 4);
            if ( CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 3 )
            {
              if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84
                                                                                           + 200))(dword_162EE84)
                || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 480))(dword_162EE80) )
              {
                LOBYTE(left) = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 1618);
                return left;
              }
              if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 8) + 4))->rcSource.left != 3 )
              {
                LOBYTE(left) = sub_5E9F20("false", "..\\casinoShell\\character.cpp", 1620);
                return left;
              }
              sub_665270(v57, *(_DWORD *)(*(this + 8) + 52));
            }
            else
            {
              if ( *(_DWORD *)(*(this + 8) + 72) )
              {
                v23 = *(this + 8);
                v24 = sub_646D10(v23);
                sub_5EAF00((int)v52, *(_DWORD *)(v23 + 72) + !v24);
              }
              else
              {
                v18 = sub_646D10(*(this + 8));
                v19 = sub_639610(v55, v18);
                sub_5EAF00((int)v53, v19);
                v20 = sub_5EB240(v53);
                (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, int))(*(_DWORD *)v53 + 176))(v53, v20);
                v21 = sub_646D10(*(this + 8));
                v22 = sub_639670(v55, v21);
                sub_5EAF00((int)v52, v22);
              }
              (*(void (__thiscall **)(CDrawImage *, int))(*(_DWORD *)v52 + 176))(v52, v57);
              (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 116))(v52);
            }
            v61 = sub_608410(*(_DWORD *)(*(this + 8) + 76));
            if ( byte_7960CB )
              v66 = timeGetTime() - *(_DWORD *)(*(this + 8) + 88);
            else
              v66 = sub_608790(*(void **)(dword_7960D8 + 8), v61);
            v64 = 60 * v66 / 1000;
            v48 = 0;
            for ( i = 0; i < *(this + 268); ++i )
              v48 += *((unsigned __int8 *)this + 2 * i + 45);
            v49 = *((unsigned __int8 *)this + 2 * *(this + 268) + 45);
            v47 = 0;
            if ( v48 > v64 )
            {
              if ( v48 - v64 >= 15 )
                v33 = 15;
              else
                v33 = v48 - v64;
              v49 += v33;
            }
            if ( v64 > v48 )
            {
              v49 -= v64 - v48;
              if ( v49 < 0 )
              {
                if ( v49 <= -5 )
                  v47 = 1;
                v49 = 0;
              }
            }
            (*(void (__thiscall **)(int *, int, int))(*this + 8))(this, 10, v49);
            ++*(this + 268);
            LOBYTE(left) = v47;
            if ( v47 )
              LOBYTE(left) = sub_5FC3D0((CAtlAllocator *)this);
          }
          else if ( *(_DWORD *)(*(this + 8) + 72) && *((_DWORD *)v53 + 96) )
          {
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 10, 2);
          }
          else
          {
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 11, 0);
          }
          break;
        case 11:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          *(_DWORD *)(*(this + 8) + 72) = 0;
          if ( v55 == 30 )
          {
            sub_5EAF00((int)v53, 2203102);
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 112))(v52);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 13, 3);
          }
          else
          {
            if ( v55 != 2 || *((unsigned __int8 *)this + 44) < 0x20u )
              goto LABEL_145;
            sub_5EAF00((int)v53, *((unsigned __int8 *)this + 44) / 32 + 2200403);
            v25 = sub_5EB240(v53);
            (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, int))(*(_DWORD *)v53 + 176))(v53, v25);
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 112))(v52);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 12, 3);
          }
          return left;
        case 12:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          if ( CMFCToolBarsCustomizeDialog::GetFlags(v53) )
          {
            v26 = CMFCToolBarsCustomizeDialog::GetFlags(v53);
            (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, unsigned int))(*(_DWORD *)v53 + 176))(v53, v26 - 1);
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 12, 3);
          }
          else
          {
LABEL_145:
            LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 13, 0);
          }
          return left;
        case 13:
          *(_BYTE *)(*(this + 8) + 80) = 1;
          sub_6464D0(*(this + 8), 1, 0);
          *(_BYTE *)(*(this + 8) + 80) = 0;
          if ( *(this + 272) <= 0 )
          {
            v56 = 0;
          }
          else
          {
            v56 = *(this + 272)
                - ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 4))(*(_DWORD *)(dword_7960D8 + 12))
                 - *(this + 273));
            if ( v56 < 0 )
              v56 = 0;
          }
          if ( *(this + 4) )
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), v56);
LABEL_21:
          LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 1, 0);
          return left;
        case 14:
          Src = 0;
          switch ( CDrawImage::UsingImageAllocator(v52) )
          {
            case 0xF712C:
            case 0xF7130:
            case 0xF7139:
            case 0xF713B:
              *(this + 267) = 0;
              break;
            case 0xF7146:
              v30 = sub_62FBF0(2);
              if ( v30 )
              {
                if ( v30 == 1 )
                {
                  Src = &unk_76D390;
                  Size = 16;
                }
              }
              else
              {
                Src = &unk_76D3A0;
                Size = 16;
              }
              break;
            case 0xF7149:
            case 0xF714A:
              if ( sub_62FBF0(3) )
                goto LABEL_186;
              Src = &unk_76D37C;
              Size = 2;
              break;
            case 0xF7151:
              v32 = sub_62FBF0(3);
              if ( v32 )
              {
                if ( v32 == 1 )
                {
                  Src = &unk_76D3C4;
                  Size = 6;
                }
                else if ( v32 == 2 )
                {
                  Src = &unk_76D3BC;
                  Size = 8;
                }
              }
              else
              {
                Src = &unk_76D3CC;
                Size = 6;
              }
              break;
            case 0xF7152:
              v31 = sub_62FBF0(2);
              if ( v31 )
              {
                if ( v31 == 1 )
                {
                  Src = &unk_76D3B0;
                  Size = 12;
                }
              }
              else
              {
                Src = &unk_76D3CC;
                Size = 6;
              }
              break;
            case 0xF7155:
              v28 = sub_62FBF0(2);
              if ( v28 )
              {
                if ( v28 == 1 )
                {
                  Src = &unk_76D380;
                  Size = 6;
                }
              }
              else
              {
                Src = &unk_76D3CC;
                Size = 6;
              }
              break;
            case 0xF7161:
              v29 = sub_62FBF0(2);
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  Src = &unk_76D388;
                  Size = 6;
                }
              }
              else
              {
                Src = &unk_76D3CC;
                Size = 6;
              }
              break;
            default:
LABEL_186:
              Src = &unk_76D3CC;
              Size = 6;
              break;
          }
          if ( Src )
          {
            memcpy(this + 11, Src, Size);
            *(this + 267) = Size / 2;
          }
          *(this + 268) = 0;
          LOBYTE(left) = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 15, 0);
          return left;
        case 15:
          *(_BYTE *)(*(this + 8) + 92) = 1;
          if ( *(this + 268) < *(this + 267) )
          {
            (*(void (__thiscall **)(CDrawImage *, _DWORD))(*(_DWORD *)v52 + 176))(
              v52,
              *((unsigned __int8 *)this + 2 * *(this + 268) + 44));
            (*(void (__thiscall **)(CDrawImage *))(*(_DWORD *)v52 + 116))(v52);
            (*(void (__thiscall **)(int *, int, _DWORD))(*this + 8))(
              this,
              15,
              *((unsigned __int8 *)this + 2 * *(this + 268) + 45));
            LOBYTE(left) = (_BYTE)this;
            ++*(this + 268);
          }
          else
          {
LABEL_191:
            sub_6464D0(*(this + 8), 1, 0);
            LOBYTE(left) = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 8))(this, 0, 0);
          }
          return left;
        default:
          LOBYTE(left) = v2;
          return left;
      }
    }
  }
  return left;
}


//======================================================================
// sub_64A7A0
// entry 0064a7a0  size 365  status ok
//======================================================================

_DWORD *__thiscall sub_64A7A0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  const void *v5; // eax
  int Size; // [esp+8h] [ebp-14h]
  CFrameWndEx *v9; // [esp+Ch] [ebp-10h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a5);
  *this = &CharacterAnimationCycle::`vftable';
  v9 = (CFrameWndEx *)sub_603C50(*(void **)(dword_7960D8 + 24), 542327875, a4 + a3, 0);
  *(this + 7) = a2;
  Size = CFrameWndEx::GetPaneMenuEntryID(v9);
  if ( Size <= 1024 )
  {
    v5 = (const void *)(*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)v9 + 4))(v9);
    memcpy(this + 9, v5, Size);
    sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), dword_7960D8, (int)v9);
    *(this + 8) = a3;
    *(this + 265) = Size / 2;
    *(this + 266) = 0;
    *(this + 269) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 4))(*(_DWORD *)(dword_7960D8 + 12));
    *(this + 270) = *((unsigned __int8 *)this + 2 * *(this + 266) + 37)
                  + CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\character.cpp", 1826);
    sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), (int)v9, (int)v9);
  }
  return this;
}


//======================================================================
// sub_64A930
// entry 0064a930  size 67  status ok
//======================================================================

int __thiscall sub_64A930(int this, int a2, int a3)
{
  sub_6004E0(this, a2, 0);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 176))(
           *(_DWORD *)(this + 4),
           *(unsigned __int8 *)(this + 2 * *(_DWORD *)(this + 1064) + 36));
}


//======================================================================
// sub_64A980
// entry 0064a980  size 196  status ok
//======================================================================

int __fastcall sub_64A980(int a1)
{
  int result; // eax

  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
    if ( (_BYTE)result )
    {
      if ( ++*(_DWORD *)(a1 + 1064) < *(_DWORD *)(a1 + 1060) )
      {
        *(_BYTE *)(*(_DWORD *)(a1 + 28) + 92) = 1;
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 176))(
          *(_DWORD *)(a1 + 4),
          *(unsigned __int8 *)(a1 + 2 * *(_DWORD *)(a1 + 1064) + 36));
        result = *(unsigned __int8 *)(a1 + 2 * *(_DWORD *)(a1 + 1064) + 37)
               + CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
        *(_DWORD *)(a1 + 1080) = result;
      }
      else
      {
        return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_64AA50
// entry 0064aa50  size 64  status ok
//======================================================================

char __thiscall sub_64AA50(_DWORD *this)
{
  if ( !*(this + 270) || CMediaType::IsFixedSize((CMediaType *)dword_15E55E8) < *(this + 270) )
    return 0;
  *(this + 270) = 0;
  return 1;
}


//======================================================================
// sub_64AA90
// entry 0064aa90  size 19  status ok
//======================================================================

int __thiscall sub_64AA90(void *this)
{
  return sub_6005D0((int)this);
}


//======================================================================
// sub_64AAB0
// entry 0064aab0  size 217  status ok
//======================================================================

_DWORD *__thiscall sub_64AAB0(_DWORD *this, int a2, int a3)
{
  int i; // [esp+8h] [ebp-10h]

  sub_5F5BF0(this);
  *this = &Plaque::`vftable';
  *(this + 97) = a2;
  *(this + 1) = a3;
  *(this + 99) = 0;
  *(this + 100) = 0;
  *(this + 101) = 0;
  for ( i = 0; i < 3; ++i )
    *(this + i + 102) = 0;
  *(this + 105) = 0;
  sub_5EB700(this, 1);
  return this;
}


//======================================================================
// sub_64AB90
// entry 0064ab90  size 319  status ok
//======================================================================

void __thiscall sub_64AB90(int this)
{
  *(_DWORD *)this = &Plaque::`vftable';
  if ( *(_DWORD *)(this + 396) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 396))(*(_DWORD *)(this + 396), 1);
    *(_DWORD *)(this + 396) = 0;
  }
  if ( *(_DWORD *)(this + 400) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 400))(*(_DWORD *)(this + 400), 1);
    *(_DWORD *)(this + 400) = 0;
  }
  if ( *(_DWORD *)(this + 404) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 404))(*(_DWORD *)(this + 404), 1);
    *(_DWORD *)(this + 404) = 0;
  }
  sub_64B830(this);
  sub_5F5C40((_DWORD *)this);
}


//======================================================================
// sub_64ACD0
// entry 0064acd0  size 578  status ok
//======================================================================

int __thiscall sub_64ACD0(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp-1Ch] [ebp-54h]
  int v11; // [esp-1Ch] [ebp-54h]
  int v12; // [esp+4h] [ebp-34h]
  int v13; // [esp+8h] [ebp-30h]
  int v14; // [esp+Ch] [ebp-2Ch]
  _DWORD *v16; // [esp+14h] [ebp-24h]
  void *v17; // [esp+1Ch] [ebp-1Ch]
  void *v18; // [esp+24h] [ebp-14h]

  sub_5F5CC0((ATL::CAtlWinModule *)this);
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 404))(dword_162EE80, 0);
  sub_5EAF00(this, v1);
  *(_BYTE *)(this + 392) = 0;
  v18 = operator new(0x1D0u);
  if ( v18 )
  {
    sub_5EC5A0(v18);
    v14 = v2;
  }
  else
  {
    v14 = 0;
  }
  *(_DWORD *)(this + 396) = v14;
  *(_DWORD *)(*(_DWORD *)(this + 396) + 4) = *(_DWORD *)(this + 4);
  v10 = sub_5F5550((_DWORD *)this);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 420))(dword_162EE80);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 412))(dword_162EE80, v3);
  sub_5EC8F0(*(void **)(this + 396), (int)&Source, v4, v10, 16, 0, 0, 1, 48, -1);
  v17 = operator new(0x1D0u);
  if ( v17 )
  {
    sub_5EC5A0(v17);
    v13 = v5;
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(this + 400) = v13;
  *(_DWORD *)(*(_DWORD *)(this + 400) + 4) = *(_DWORD *)(this + 4);
  v11 = sub_5F5550((_DWORD *)this);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 420))(dword_162EE80);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 416))(dword_162EE80, v6);
  sub_5EC8F0(*(void **)(this + 400), (int)&Source, v7, v11, 16, 0, 0, 1, 48, -1);
  v16 = operator new(0x178u);
  if ( v16 )
  {
    sub_5EAAF0(v16);
    v12 = v8;
  }
  else
  {
    v12 = 0;
  }
  *(_DWORD *)(this + 404) = v12;
  *(_DWORD *)(*(_DWORD *)(this + 404) + 4) = *(_DWORD *)(this + 4);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 64))(*(_DWORD *)(this + 404));
}


//======================================================================
// sub_64AF20
// entry 0064af20  size 121  status ok
//======================================================================

int __thiscall sub_64AF20(int this, int a2)
{
  sub_5F5300((_DWORD *)this, a2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 396) + 108))(*(_DWORD *)(this + 396), a2 + 2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 108))(*(_DWORD *)(this + 400), a2 + 3);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 404) + 108))(*(_DWORD *)(this + 404), a2 + 4);
}


//======================================================================
// sub_64AFA0
// entry 0064afa0  size 933  status ok
//======================================================================

int __thiscall sub_64AFA0(int this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const char *v8; // eax
  char *v9; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v11; // esi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // [esp-14h] [ebp-3Ch]
  char *Str; // [esp+8h] [ebp-20h]
  int v23; // [esp+10h] [ebp-18h] BYREF
  int v24; // [esp+14h] [ebp-14h] BYREF
  int v25; // [esp+18h] [ebp-10h] BYREF
  int v26; // [esp+1Ch] [ebp-Ch]
  int v27; // [esp+20h] [ebp-8h]
  int v28; // [esp+24h] [ebp-4h] BYREF

  v2 = this;
  *(_BYTE *)(*(_DWORD *)(this + 388) + 92) = 1;
  LOBYTE(v2) = *(_BYTE *)(this + 392);
  v26 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 404))(dword_162EE80, v2);
  if ( a2 )
    v26 = a2;
  if ( !v26 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 112))(this);
  sub_5EAF00(this, v26);
  sub_5EB570((_BYTE *)this);
  if ( sub_5F5550(*(_DWORD **)(this + 396)) <= 0 )
  {
    v4 = sub_5F5550((_DWORD *)this);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 420))(dword_162EE80, v4);
    sub_5ECC60(*(_DWORD **)(this + 396), v5);
  }
  if ( sub_5F5550(*(_DWORD **)(this + 400)) <= 0 )
  {
    v6 = sub_5F5550((_DWORD *)this);
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 424))(dword_162EE80, v6);
    sub_5ECC60(*(_DWORD **)(this + 400), v7);
  }
  Str = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(this + 388) + 4))->rcSource.top;
  sub_5EE710(*(_DWORD **)(this + 396), Str);
  v8 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 184))(*(_DWORD *)(this + 396));
  if ( !strcmp(v8, &Source) )
  {
    v9 = (char *)sub_630F40((int)"SID_SHELL_OPENSEAT");
    sub_5EE710(*(_DWORD **)(this + 396), v9);
  }
  sub_5EF310(*(_DWORD **)(this + 396), 48);
  sub_5EF310(*(_DWORD **)(this + 400), 48);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 116))(*(_DWORD *)(this + 396));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 116))(*(_DWORD *)(this + 400));
  sub_64B3C0(this);
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
          dword_162EE84,
          -1)
    || a2 )
  {
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 112))(*(_DWORD *)(this + 404));
  }
  v20 = *(_DWORD *)(*(_DWORD *)(this + 388) + 4);
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v26 = (*(int (__thiscall **)(int, struct Concurrency::details::_TaskCollectionBase *, int, int *, int *, int *, int *))(*(_DWORD *)dword_162EE80 + 448))(
          dword_162EE80,
          ExecutingCollection,
          v20,
          &v24,
          &v23,
          &v28,
          &v25);
  if ( !v26 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 112))(*(_DWORD *)(this + 404));
  sub_5EAF00(*(_DWORD *)(this + 404), v26);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 404) + 176))(*(_DWORD *)(this + 404), v24);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  v12 = sub_5F5550((_DWORD *)this) / 2 + v11;
  if ( v12 < sub_5F8550(*(_DWORD **)(this + 4)) / 2 )
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
    v15 = sub_5F5550((_DWORD *)this) + v14;
    v16 = sub_5F5550(*(_DWORD **)(this + 404));
    v27 = v15 - (v25 + v16);
  }
  else
  {
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
    v27 = v28 + v13;
  }
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v18 = v23 + v17;
  v19 = sub_5F5590(*(_DWORD **)(this + 404));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 404) + 68))(*(_DWORD *)(this + 404), v27, v18 - v19);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 116))(*(_DWORD *)(this + 404));
  return sub_5EB5D0(*(_BYTE **)(this + 404), *(_BYTE *)(this + 392) != 0 ? 64 : -1);
}


//======================================================================
// sub_64B350
// entry 0064b350  size 107  status ok
//======================================================================

int __thiscall sub_64B350(int this)
{
  *(_BYTE *)(*(_DWORD *)(this + 388) + 92) = 1;
  sub_5EB5A0((CWnd *)this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 112))(*(_DWORD *)(this + 396));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 112))(*(_DWORD *)(this + 400));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 112))(*(_DWORD *)(this + 404));
}


//======================================================================
// sub_64B3C0
// entry 0064b3c0  size 374  status ok
//======================================================================

char __thiscall sub_64B3C0(_DWORD *this)
{
  char result; // al
  int v2; // eax
  int v3; // eax
  int v5; // [esp+Ch] [ebp-30h]
  int v6; // [esp+10h] [ebp-2Ch]
  int i; // [esp+10h] [ebp-2Ch]
  int v8; // [esp+14h] [ebp-28h]
  _DWORD v9[9]; // [esp+18h] [ebp-24h] BYREF

  v9[0] = 51;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 42;
  v9[4] = 60;
  v9[5] = 0;
  v9[6] = 33;
  v9[7] = 51;
  v9[8] = 69;
  v6 = 0;
  result = 0;
  v8 = 0;
  while ( v6 < 3 )
  {
    result = (char)this;
    if ( *(this + v6 + 102) )
      ++v8;
    ++v6;
  }
  if ( v8 )
  {
    v5 = v8;
    for ( i = 0; i < 3 && v8; ++i )
    {
      if ( *(this + i + 102) )
      {
        v2 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
        v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 76))(this, v2 + 35);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 102) + 68))(
          *(this + i + 102),
          v9[3 * v5 - 3 + v5 - v8] + v3);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 102) + 116))(*(this + i + 102));
        --v8;
      }
      result = i + 1;
    }
    if ( v8 )
      return sub_5E9F20("count == 0", "..\\casinoShell\\character.cpp", 2041);
  }
  return result;
}


//======================================================================
// sub_64B540
// entry 0064b540  size 250  status ok
//======================================================================

char __thiscall sub_64B540(int this)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  DWORD TickCount; // [esp+Ch] [ebp-4h]

  sub_5F5CF0(this);
  LOBYTE(v1) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
                 dword_162EE84,
                 -1);
  if ( (_BYTE)v1 )
  {
    LOBYTE(v1) = CMFCScanliner::channels((CMFCScanliner *)this);
    if ( !(_BYTE)v1 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 492))(dword_162EE80) == *(_DWORD *)(this + 388) )
      {
        TickCount = GetTickCount();
        v2 = TickCount - *(_DWORD *)(this + 420);
        v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 336))(dword_162EE84);
        if ( v2 >= v1 )
        {
          *(_DWORD *)(this + 420) = TickCount;
          *(_BYTE *)(this + 392) = *(_BYTE *)(this + 392) == 0;
          LOBYTE(v1) = sub_64AFA0(this, 0);
        }
      }
      else
      {
        LOBYTE(v1) = *(_BYTE *)(this + 392);
        if ( (_BYTE)v1 )
        {
          *(_BYTE *)(this + 392) = 0;
          LOBYTE(v1) = sub_64AFA0(this, 0);
        }
      }
    }
  }
  return v1;
}


//======================================================================
// sub_64B640
// entry 0064b640  size 336  status ok
//======================================================================

int __thiscall sub_64B640(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // [esp+4h] [ebp-20h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 3 && *(this + i + 102); ++i )
  {
    if ( CDrawImage::UsingImageAllocator((CDrawImage *)*(this + i + 102)) == a2 )
      return -1;
  }
  if ( i == 3 )
  {
    sub_5E9F20("false", "..\\casinoShell\\character.cpp", 2084);
    return -1;
  }
  else
  {
    if ( operator new(0x184u) )
      v5 = sub_64B920(this);
    else
      v5 = 0;
    *(this + i + 102) = v5;
    sub_64BA60(a2, a4);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 102) + 176))(*(this + i + 102), a3);
    sub_64B3C0(this);
    return i;
  }
}


//======================================================================
// sub_64B790
// entry 0064b790  size 156  status ok
//======================================================================

void __thiscall sub_64B790(void (__thiscall ****this)(_DWORD, int), int a2)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + i + 102) && CDrawImage::UsingImageAllocator((CDrawImage *)*(this + i + 102)) == a2 )
    {
      if ( *(this + i + 102) )
        (***(this + i + 102))(*(this + i + 102), 1);
      *(this + i + 102) = 0;
      return;
    }
  }
}


//======================================================================
// sub_64B830
// entry 0064b830  size 126  status ok
//======================================================================

void __thiscall sub_64B830(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + i + 102) )
    {
      (***(this + i + 102))(*(this + i + 102), 1);
      *(this + i + 102) = 0;
    }
  }
}


//======================================================================
// sub_64B8B0
// entry 0064b8b0  size 32  status ok
//======================================================================

_BYTE *__thiscall sub_64B8B0(_BYTE *this, int a2)
{
  _BYTE *result; // eax

  result = sub_5F4ED0(this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_64B8D0
// entry 0064b8d0  size 73  status ok
//======================================================================

int __thiscall sub_64B8D0(int this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 300))(
           dword_162EE80,
           a2,
           *(_DWORD *)(*(_DWORD *)(this + 388) + 4));
}


//======================================================================
// sub_64B920
// entry 0064b920  size 71  status ok
//======================================================================

_DWORD *__thiscall sub_64B920(_DWORD *this, int a2)
{
  sub_5EAAF0(this);
  *this = &PlaqueTag::`vftable';
  *(this + 94) = a2;
  *(this + 95) = 0;
  *(this + 96) = 0;
  return this;
}


//======================================================================
// sub_64B970
// entry 0064b970  size 236  status ok
//======================================================================

void __thiscall sub_64B970(int this)
{
  *(_DWORD *)this = &PlaqueTag::`vftable';
  if ( *(_DWORD *)(this + 380) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 380))(*(_DWORD *)(this + 380), 1);
    *(_DWORD *)(this + 380) = 0;
  }
  if ( *(_DWORD *)(this + 384) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 384))(*(_DWORD *)(this + 384), 1);
    *(_DWORD *)(this + 384) = 0;
  }
  sub_5EAC00((_DWORD *)this);
}


//======================================================================
// sub_64BA60
// entry 0064ba60  size 353  status ok
//======================================================================

int __thiscall sub_64BA60(void *this, int a2, int a3)
{
  int IsFixedSize; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-28h]
  _BYTE *v7; // [esp+8h] [ebp-24h]
  void *v9; // [esp+10h] [ebp-1Ch]
  _BYTE *v10; // [esp+18h] [ebp-14h]

  IsFixedSize = CMediaType::IsFixedSize(*((CMediaType **)this + 94));
  sub_5EAE80(a2, 0, 0, IsFixedSize + 5, -1);
  if ( a3 )
  {
    v10 = operator new(0x5Cu);
    if ( v10 )
      v7 = sub_5F6130(v10);
    else
      v7 = 0;
    *((_DWORD *)this + 95) = v7;
    sub_5F61D0(*((CPaneContainer **)this + 95), 0, 0, 0, 0, 1000, (struct CPaneDivider *)0xFFFFFFFF);
    sub_5F6580(*((_BYTE **)this + 95), 252, 248, 199);
    v9 = operator new(0x1D0u);
    if ( v9 )
    {
      sub_5EC5A0(v9);
      v6 = v4;
    }
    else
    {
      v6 = 0;
    }
    *((_DWORD *)this + 96) = v6;
    sub_5EC8F0(*((void **)this + 96), a3, 4, 0, 0, 0, 0, 4, 48, -1);
  }
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
}


//======================================================================
// sub_64BBD0
// entry 0064bbd0  size 19  status ok
//======================================================================

int __thiscall sub_64BBD0(_BYTE *this)
{
  return sub_5EB570(this);
}


//======================================================================
// sub_64BBF0
// entry 0064bbf0  size 93  status ok
//======================================================================

int __thiscall sub_64BBF0(CWnd *this)
{
  int result; // eax

  sub_5EB5A0(this);
  result = (int)this;
  if ( *((_DWORD *)this + 96) )
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 96) + 112))(*((_DWORD *)this + 96));
  if ( *((_DWORD *)this + 95) )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 95) + 112))(*((_DWORD *)this + 95));
  return result;
}


//======================================================================
// sub_64BC50
// entry 0064bc50  size 502  status ok
//======================================================================

int __thiscall sub_64BC50(int this)
{
  const char *v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  BOOL v8; // [esp+4h] [ebp-10h]
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v10 = sub_646E40(*(_DWORD ***)(*(_DWORD *)(this + 376) + 388));
  v11 = sub_646E70(*(_DWORD ***)(*(_DWORD *)(this + 376) + 388));
  sub_5F5530(*(_DWORD **)(this + 380), 125);
  v1 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 384) + 184))(*(_DWORD *)(this + 384));
  v9 = 20 * (strlen(v1) / 0x17) + 20;
  sub_5F5570(*(_DWORD **)(this + 380), v9);
  v8 = sub_646D10(*(_DWORD *)(*(_DWORD *)(this + 376) + 388));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 68))(
    *(_DWORD *)(this + 380),
    dword_76D42C[2 * v8] + v10,
    70 - v9 + dword_76D430[2 * v8] + v11);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 108))(*(_DWORD *)(this + 380), 1000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 380) + 116))(*(_DWORD *)(this + 380));
  v2 = sub_5F5550(*(_DWORD **)(this + 380));
  sub_5ECC60(*(_DWORD **)(this + 384), v2 - 6);
  v3 = sub_5F5590(*(_DWORD **)(this + 380));
  sub_5ECCB0(*(_DWORD **)(this + 384), v3 - 7);
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 380) + 84))(*(_DWORD *)(this + 380));
  v5 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 76))(*(_DWORD *)(this + 380), v4 + 4);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 384) + 68))(*(_DWORD *)(this + 384), v5 + 3);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 384) + 108))(*(_DWORD *)(this + 384), 1001);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 384) + 116))(*(_DWORD *)(this + 384));
}


//======================================================================
// sub_64BE50
// entry 0064be50  size 85  status ok
//======================================================================

int __thiscall sub_64BE50(_DWORD **this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 95) )
    result = (*(int (__thiscall **)(_DWORD))(**(this + 95) + 112))(*(this + 95));
  if ( *(this + 96) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 96) + 112))(*(this + 96));
  return result;
}


//======================================================================
// sub_64BEB0
// entry 0064beb0  size 79  status ok
//======================================================================

int __thiscall sub_64BEB0(int this, int a2)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 384) )
  {
    if ( (unsigned __int8)sub_5F56A0((void *)this, a2) && !CMFCScanliner::channels((CMFCScanliner *)this) )
      return sub_64BC50(this);
    else
      return sub_64BE50((_DWORD **)this);
  }
  return result;
}


//======================================================================
// sub_64BF00
// entry 0064bf00  size 54  status ok
//======================================================================

_DWORD *__thiscall sub_64BF00(void *this, int a2, int a3)
{
  _DWORD *v4; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v4 = &RevengeButton::`vftable';
  v4[119] = a2;
  v4[1] = a3;
  return v4;
}


//======================================================================
// sub_64BF60
// entry 0064bf60  size 56  status ok
//======================================================================

int __thiscall sub_64BF60(ATL::CAtlWinModule *this)
{
  sub_5F5CC0(this);
  (*(void (__thiscall **)(ATL::CAtlWinModule *, int))(*(_DWORD *)this + 200))(this, 2300607);
  return sub_6023D0(this, 0, 1, 2, 3);
}


//======================================================================
// sub_64BFA0
// entry 0064bfa0  size 25  status ok
//======================================================================

int __thiscall sub_64BFA0(void *this, int a2)
{
  return sub_6024B0((int)this, a2);
}


//======================================================================
// sub_64BFC0
// entry 0064bfc0  size 19  status ok
//======================================================================

int __thiscall sub_64BFC0(void *this)
{
  return sub_602500((int)this);
}


//======================================================================
// sub_64BFE0
// entry 0064bfe0  size 19  status ok
//======================================================================

void __thiscall sub_64BFE0(void *this)
{
  sub_602550((int)this);
}


//======================================================================
// sub_64C000
// entry 0064c000  size 57  status ok
//======================================================================

_BYTE *__thiscall sub_64C000(int this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(a2 + 20) = 114;
  sub_648550(*(_DWORD **)(this + 476), 0, 0);
  return sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
}


//======================================================================
// sub_64C040
// entry 0064c040  size 34  status ok
//======================================================================

int __thiscall sub_64C040(_BYTE *this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(this + 8) = 0;
  *(this + 9) = 0;
  return a2;
}


//======================================================================
// sub_64C070
// entry 0064c070  size 66  status ok
//======================================================================

int __thiscall sub_64C070(void *this, int a2, int a3, char a4)
{
  int v5; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v5 = &CommentButton::`vftable';
  *(_DWORD *)(v5 + 476) = a2;
  *(_DWORD *)(v5 + 4) = a3;
  *(_BYTE *)(v5 + 480) = a4;
  return v5;
}


//======================================================================
// sub_64C0E0
// entry 0064c0e0  size 180  status ok
//======================================================================

int __thiscall sub_64C0E0(int this)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  LONG left; // [esp+8h] [ebp-4h]

  sub_5F5CC0((ATL::CAtlWinModule *)this);
  left = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(this + 476) + 4))->rcSource.left;
  v1 = left == 1;
  v2 = (unsigned __int8)v1;
  if ( left == 1 )
  {
    LOBYTE(v1) = *(_BYTE *)(this + 480);
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 564))(
           dword_162EE84,
           v1);
  }
  else
  {
    LOBYTE(v2) = *(_BYTE *)(this + 480);
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 568))(
           dword_162EE84,
           v2);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 200))(this, v3);
  return sub_6023D0((_DWORD *)this, 0, 1, 2, 3);
}


//======================================================================
// sub_64C1A0
// entry 0064c1a0  size 142  status ok
//======================================================================

int __fastcall sub_64C1A0(int a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v5; // [esp+0h] [ebp-4h]

  v5 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 480);
  v1 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 472))(
         dword_162EE80,
         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 476) + 4) + 4),
         a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 72))(v5, v1);
  LOBYTE(v2) = *(_BYTE *)(v5 + 480);
  v3 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 476))(
         dword_162EE80,
         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 476) + 4) + 4),
         v2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, v3);
  return sub_602500(v5);
}


//======================================================================
// sub_64C230
// entry 0064c230  size 19  status ok
//======================================================================

void __thiscall sub_64C230(void *this)
{
  sub_602550((int)this);
}


//======================================================================
// sub_64C250
// entry 0064c250  size 34  status ok
//======================================================================

int __thiscall sub_64C250(_BYTE *this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(this + 8) = 1;
  *(this + 9) = 0;
  return a2;
}


//======================================================================
// sub_64C280
// entry 0064c280  size 77  status ok
//======================================================================

int __thiscall sub_64C280(int this, int a2)
{
  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(a2 + 20) = 114;
  sub_648640(*(_DWORD *)(this + 476), *(_BYTE *)(this + 480));
  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  return this;
}


//======================================================================
// sub_64C2D0
// entry 0064c2d0  size 35  status ok
//======================================================================

char __thiscall sub_64C2D0(int this)
{
  return sub_648640(*(_DWORD *)(this + 476), *(_BYTE *)(this + 480));
}


//======================================================================
// sub_64C450
// entry 0064c450  size 191  status ok
//======================================================================

int __fastcall sub_64C450(int *a1, double a2)
{
  int result; // eax
  char v4; // [esp+7h] [ebp-1h]

  v4 = 0;
  if ( a2 < 0.0 )
  {
    v4 = 1;
    a2 = a2 * -1.0;
  }
  if ( a2 > 2.0e11 )
    a2 = 2.0e11;
  if ( a2 < -2.0e11 )
    a2 = -2.0e11;
  *a1 = (int)(a2 / 100.0);
  result = (int)a1;
  a1[1] = (int)(a2 - (double)*a1 * 100.0) % 100;
  if ( v4 )
  {
    *a1 = -*a1;
    result = -a1[1];
    a1[1] = result;
  }
  return result;
}


//======================================================================
// sub_64C510
// entry 0064c510  size 47  status ok
//======================================================================

int __thiscall sub_64C510(int *this, double a2)
{
  return sub_64C450(this, (double)*this * 100.0 + (double)*(this + 1) + a2);
}


//======================================================================
// sub_64C540
// entry 0064c540  size 27  status ok
//======================================================================

int __thiscall sub_64C540(int *this)
{
  return sub_64C510(this, 0.0);
}


//======================================================================
// sub_64C560
// entry 0064c560  size 82  status ok
//======================================================================

int __thiscall sub_64C560(int *this, double a2)
{
  double v4; // [esp+Ch] [ebp-8h]

  v4 = ceil(((double)*this * 100.0 + (double)*(this + 1)) * a2);
  return sub_64C450(this, v4);
}


//======================================================================
// sub_64C5C0
// entry 0064c5c0  size 97  status ok
//======================================================================

__int64 *__thiscall sub_64C5C0(_DWORD *this, __int64 *a2, int a3, int a4)
{
  __int64 v5; // [esp+14h] [ebp-8h] BYREF

  v5 = sub_64C8A0(*this, *(this + 1));
  sub_64C510((int *)&v5, (double)a3 * 100.0 + (double)a4);
  *a2 = v5;
  return a2;
}


//======================================================================
// sub_64C630
// entry 0064c630  size 105  status ok
//======================================================================

__int64 *__thiscall sub_64C630(_DWORD *this, __int64 *a2, int a3, int a4)
{
  __int64 v5; // [esp+18h] [ebp-8h] BYREF

  v5 = sub_64C8A0(*this, *(this + 1));
  sub_64C510((int *)&v5, (double)-a3 * 100.0 - (double)a4);
  *a2 = v5;
  return a2;
}


//======================================================================
// sub_64C6A0
// entry 0064c6a0  size 58  status ok
//======================================================================

bool __thiscall sub_64C6A0(_DWORD *this, int a2, int a3)
{
  if ( *this < a2 )
    return 1;
  if ( *this <= a2 )
    return *(this + 1) < a3;
  return 0;
}


//======================================================================
// sub_64C6E0
// entry 0064c6e0  size 58  status ok
//======================================================================

bool __thiscall sub_64C6E0(_DWORD *this, int a2, int a3)
{
  if ( *this > a2 )
    return 1;
  if ( *this >= a2 )
    return *(this + 1) > a3;
  return 0;
}


//======================================================================
// sub_64C720
// entry 0064c720  size 55  status ok
//======================================================================

bool __thiscall sub_64C720(_DWORD *this, int a2, int a3)
{
  return *this == a2 && *(this + 1) == a3;
}


//======================================================================
// sub_64C760
// entry 0064c760  size 55  status ok
//======================================================================

bool __thiscall sub_64C760(_DWORD *this, int a2, int a3)
{
  return *this != a2 || *(this + 1) != a3;
}


//======================================================================
// sub_64C7A0
// entry 0064c7a0  size 119  status ok
//======================================================================

bool __thiscall sub_64C7A0(_DWORD *this, int a2, int a3)
{
  __int64 v5; // [esp+10h] [ebp-8h] BYREF

  v5 = sub_64C8A0(*this, *(this + 1));
  return sub_64C6E0(&v5, a2, a3) || sub_64C720(&v5, a2, a3);
}


//======================================================================
// sub_64C820
// entry 0064c820  size 119  status ok
//======================================================================

bool __thiscall sub_64C820(_DWORD *this, int a2, int a3)
{
  __int64 v5; // [esp+10h] [ebp-8h] BYREF

  v5 = sub_64C8A0(*this, *(this + 1));
  return sub_64C6A0(&v5, a2, a3) || sub_64C720(&v5, a2, a3);
}


//======================================================================
// sub_64C8A0
// entry 0064c8a0  size 42  status ok
//======================================================================

__int64 __cdecl sub_64C8A0(int a1, int a2)
{
  __int64 v3; // [esp+8h] [ebp-8h] BYREF

  sub_64C450((int *)&v3, (double)a1 * 100.0 + (double)a2);
  return v3;
}


//======================================================================
// sub_64C8D0
// entry 0064c8d0  size 478  status ok
//======================================================================

char *__cdecl sub_64C8D0(int a1, int a2, char *Destination, char a4, char a5, char a6)
{
  int v7; // [esp+0h] [ebp-28h]
  char Buffer[28]; // [esp+4h] [ebp-24h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  v9 = a1;
  v7 = a2;
  if ( a6 && (v9 < 0 || a2 < 0) )
  {
    if ( a5 )
      strcpy(Destination, "-$");
    else
      strcpy(Destination, "-");
  }
  else if ( a5 )
  {
    strcpy(Destination, "$");
  }
  if ( v9 < 0 )
    v9 = -v9;
  if ( a2 < 0 )
    v7 = -a2;
  if ( v9 <= 999999999 )
  {
    if ( v9 <= 999999 )
    {
      if ( v9 <= 999 )
        sprintf(Buffer, "%d", v9);
      else
        sprintf(Buffer, "%d,%.3d", v9 / 1000, v9 % 1000);
    }
    else
    {
      sprintf(Buffer, "%d,%.3d,%.3d", v9 / 1000000, v9 % 1000000 / 1000, v9 % 1000);
    }
  }
  else
  {
    sprintf(Buffer, "%d,%.3d,%.3d,%.3d", v9 / 1000000000, v9 % 1000000000 / 1000000, v9 % 1000000 / 1000, v9 % 1000);
  }
  strcat(Destination, Buffer);
  if ( a4 )
  {
    sprintf(Buffer, ".%.2d", v7);
    strcat(Destination, Buffer);
  }
  return Destination;
}


//======================================================================
// sub_64CAB0
// entry 0064cab0  size 296  status ok
//======================================================================

__int64 __cdecl sub_64CAB0(char *Str)
{
  int v2; // eax
  int v3; // [esp-4h] [ebp-50h]
  signed int i; // [esp+10h] [ebp-3Ch]
  char v5; // [esp+17h] [ebp-35h]
  char String[8]; // [esp+18h] [ebp-34h] BYREF
  int v7; // [esp+20h] [ebp-2Ch]
  signed int v8; // [esp+24h] [ebp-28h]
  int v9; // [esp+28h] [ebp-24h]
  char v10[28]; // [esp+2Ch] [ebp-20h] BYREF

  if ( !Str )
    return sub_64C8A0(0, 0);
  v5 = 0;
  v8 = strlen(Str);
  v7 = 0;
  v9 = 0;
  for ( i = 0; i < v8; ++i )
  {
    if ( Str[i] == 46 )
    {
      v5 = 1;
    }
    else if ( Str[i] >= 48 && Str[i] <= 57 )
    {
      if ( v5 )
        String[v9++] = Str[i];
      else
        v10[v7++] = Str[i];
    }
  }
  v10[v7] = 0;
  String[v9] = 0;
  v3 = atoi(String);
  v2 = atoi(v10);
  return sub_64C8A0(v2, v3);
}


//======================================================================
// sub_64CBE0
// entry 0064cbe0  size 158  status ok
//======================================================================

int __thiscall sub_64CBE0(int this)
{
  sub_5F0CC0((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &Room::`vftable';
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_BYTE *)(this + 56) = 0;
  *(_BYTE *)(this + 57) = 0;
  *(_BYTE *)(this + 58) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 68) = GetTickCount();
  *(_BYTE *)(this + 72) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_BYTE *)(this + 64) = 0;
  return this;
}


//======================================================================
// sub_64CC80
// entry 0064cc80  size 480  status ok
//======================================================================

void __thiscall sub_64CC80(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+24h] [ebp-3Ch]
  void (__thiscall ***v3)(_DWORD, int); // [esp+2Ch] [ebp-34h]
  void *v4; // [esp+34h] [ebp-2Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+3Ch] [ebp-24h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+44h] [ebp-1Ch]
  void (__thiscall ***v7)(_DWORD, int); // [esp+4Ch] [ebp-14h]
  int i; // [esp+50h] [ebp-10h]

  *this = &Room::`vftable';
  sub_5F38B0(dword_162EE84, 0);
  v7 = (void (__thiscall ***)(_DWORD, int))*(this + 21);
  if ( v7 )
    (**v7)(v7, 1);
  v6 = (void (__thiscall ***)(_DWORD, int))*(this + 22);
  if ( v6 )
    (**v6)(v6, 1);
  v5 = (void (__thiscall ***)(_DWORD, int))*(this + 12);
  if ( v5 )
    (**v5)(v5, 1);
  v4 = (void *)*(this + 15);
  if ( v4 )
  {
    sub_651950(v4);
    operator delete(v4);
  }
  for ( i = 0; i < 10; ++i )
    *((_DWORD *)dword_162EE84 + i + 25) = -1;
  if ( *(this + 19) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*(this + 19);
    if ( v3 )
      (**v3)(v3, 1);
    *(this + 19) = 0;
  }
  if ( *(this + 20) )
  {
    v2 = (void (__thiscall ***)(_DWORD, int))*(this + 20);
    if ( v2 )
      (**v2)(v2, 1);
    *(this + 20) = 0;
  }
  sub_5F0D60((int)this);
}


//======================================================================
// sub_64CE60
// entry 0064ce60  size 318  status ok
//======================================================================

int __thiscall sub_64CE60(CDeferredCommand *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  sub_5F1120(this);
  if ( *(_DWORD *)(dword_7960D8 + 8) )
    (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
  (*(void (__thiscall **)(CDeferredCommand *))(*(_DWORD *)this + 36))(this);
  sub_64CFA0(this);
  (*(void (__thiscall **)(CDeferredCommand *))(*(_DWORD *)this + 96))(this);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 860))(dword_162EE84);
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84);
    if ( (_BYTE)result )
    {
      v4 = operator new(0x19Cu);
      if ( v4 )
        v2 = sub_670680(v4);
      else
        v2 = 0;
      *((_DWORD *)this + 20) = v2;
      sub_6708C0();
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 116))(*((_DWORD *)this + 20));
    }
  }
  return result;
}


//======================================================================
// sub_64CFA0
// entry 0064cfa0  size 136  status ok
//======================================================================

char __thiscall sub_64CFA0(void *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 16) + 48))(*(_DWORD *)(dword_7960D8 + 16)) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 16) + 44))(*(_DWORD *)(dword_7960D8 + 16)) )
      sub_5F2AE0(this, 100040, 100039);
    else
      sub_5F2AE0(this, 100041, 100039);
  }
  else
  {
    sub_5F2AE0(this, 100039, 100040);
  }
  return 1;
}


//======================================================================
// sub_64D030
// entry 0064d030  size 404  status ok
//======================================================================

char __thiscall sub_64D030(_DWORD *this)
{
  DWORD TickCount; // eax
  int v4[4]; // [esp+10h] [ebp-28h] BYREF
  double v5; // [esp+20h] [ebp-18h]
  double v6; // [esp+28h] [ebp-10h]
  int v7; // [esp+30h] [ebp-8h]
  int v8; // [esp+34h] [ebp-4h]

  sub_5F1A50(this);
  unknown_libname_860(0);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 504))(this) )
    goto LABEL_6;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 100))(this) )
  {
    if ( *(this + 1) && !*(_DWORD *)(*(this + 1) + 4) )
    {
      sub_64EB80(1);
      goto LABEL_7;
    }
LABEL_6:
    sub_64EB80(0);
  }
LABEL_7:
  LOBYTE(TickCount) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 888))(dword_162EE84);
  if ( (_BYTE)TickCount )
  {
    LOBYTE(TickCount) = (*(int (__thiscall **)(_DWORD *))(*this + 512))(this);
    if ( !(_BYTE)TickCount )
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*this + 492))(this);
      if ( v7 && *(_DWORD *)(v7 + 4) && CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(v7 + 4))->rcSource.left != 1 )
      {
        TickCount = GetTickCount() - *(this + 17);
        if ( TickCount >= 0xEA60 )
        {
          *(this + 17) = GetTickCount();
          TickCount = sub_636C50(dword_162EE84);
          v8 = TickCount;
          if ( TickCount != -1 )
          {
            v4[0] = v8;
            v4[2] = -1;
            v5 = 0.0;
            v6 = 0.5;
            TickCount = sub_64D1D0(this);
            v4[1] = TickCount;
            if ( TickCount != -1 )
              LOBYTE(TickCount) = sub_639390(dword_162EE84, v4, 0, 0, 1);
          }
        }
      }
      else
      {
        TickCount = GetTickCount();
        *(this + 17) = TickCount;
      }
    }
  }
  return TickCount;
}


//======================================================================
// sub_64D1D0
// entry 0064d1d0  size 224  status ok
//======================================================================

int sub_64D1D0()
{
  __time64_t Time; // [esp+8h] [ebp-10h] BYREF
  struct tm *v2; // [esp+10h] [ebp-8h]
  int v3; // [esp+14h] [ebp-4h]

  v3 = -1;
  time64(&Time);
  v2 = localtime64(&Time);
  if ( v2->tm_hour >= 22 || v2->tm_hour <= 3 )
    v3 = 1094;
  if ( v2->tm_hour >= 5 && v2->tm_hour < 10 )
    v3 = 1093;
  if ( v2->tm_hour == 12 )
    v3 = 1095;
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
// sub_64D2D0
// entry 0064d2d0  size 94  status ok
//======================================================================

int __stdcall sub_64D2D0(int a1)
{
  int result; // eax
  int v2; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    v2 = dword_76D47C[2 * i];
    *(_DWORD *)(a1 + 8 * i) = dword_76D478[2 * i];
    *(_DWORD *)(a1 + 8 * i + 4) = v2;
  }
  return result;
}


//======================================================================
// sub_64D330
// entry 0064d330  size 97  status ok
//======================================================================

int __thiscall sub_64D330(_DWORD *this)
{
  int result; // eax
  int v2; // eax

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( (_BYTE)result )
  {
    result = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 272))(this);
    if ( !(_BYTE)result )
    {
      v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 928))(dword_162EE84);
      return sub_5F1AD0(this, v2);
    }
  }
  return result;
}


//======================================================================
// sub_64D3A0
// entry 0064d3a0  size 222  status ok
//======================================================================

void __thiscall sub_64D3A0(_DWORD *this, int a2, _DWORD *a3)
{
  if ( a3
    && !dword_163068C
    && !dword_16306B0
    && sub_646DB0(a3, a2)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*this + 304))(this, a3)
    && a3[1] != sub_6375B0((_DWORD **)dword_162EE84)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 512))(this) )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) )
    {
      sub_64D480(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), a3[1]);
    }
    else
    {
      *(this + 13) = a3[1];
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, int))(*this + 364))(this, 0, 0, -1, -1, 1);
    }
  }
}


//======================================================================
// sub_64D480
// entry 0064d480  size 337  status ok
//======================================================================

int __thiscall sub_64D480(int this, int a2, int a3, int a4)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v5; // eax
  _BYTE v8[4]; // [esp+4h] [ebp-1Ch] BYREF
  int v9; // [esp+8h] [ebp-18h]
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+1Ch] [ebp-4h]

  *(_BYTE *)(this + 56) = 1;
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, _BYTE *, int))(*(_DWORD *)dword_162EE84 + 868))(
    dword_162EE84,
    ExecutingCollection,
    v8,
    -1);
  *(_DWORD *)(this + 52) = a4;
  v5 = sub_636610(dword_162EE84);
  if ( v9 == v5 )
  {
    if ( v12 )
    {
      if ( v10 == 1 && v11 == 1 )
      {
        sub_5F2670((char *)this, 5005, a2, a3, 2, 0, 0);
        return 5005;
      }
      else
      {
        sub_5F2670((char *)this, 5003, a2, a3, 2, 0, 0);
        return 5003;
      }
    }
    else
    {
      sub_5F2670((char *)this, 5004, a2, a3, 2, 0, 0);
      return 5004;
    }
  }
  else if ( v12 )
  {
    if ( v10 == 1 && v11 == 1 )
    {
      sub_5F2670((char *)this, 5001, a2, a3, 2, 0, 0);
      return 5001;
    }
    else
    {
      sub_5F2670((char *)this, 5000, a2, a3, 2, 0, 0);
      return 5000;
    }
  }
  else
  {
    sub_5F2670((char *)this, 5002, a2, a3, 2, 0, 0);
    return 5002;
  }
}


//======================================================================
// sub_64D5E0
// entry 0064d5e0  size 306  status ok
//======================================================================

int __stdcall sub_64D5E0(int a1)
{
  int result; // eax
  int j; // [esp+18h] [ebp-Ch]
  int v3; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    if ( !CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(a1 + 4 * i))->rcSource.left )
    {
      for ( j = i + 1;
            j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84)
         && !CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(a1 + 4 * j))->rcSource.left;
            ++j )
      {
        ;
      }
      if ( j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
      {
        v3 = *(_DWORD *)(a1 + 4 * i);
        *(_DWORD *)(a1 + 4 * i) = *(_DWORD *)(a1 + 4 * j);
        *(_DWORD *)(*(_DWORD *)(a1 + 4 * i) + 4) = i;
        *(_DWORD *)(a1 + 4 * j) = v3;
        *(_DWORD *)(*(_DWORD *)(a1 + 4 * j) + 4) = j;
      }
    }
  }
  return result;
}


//======================================================================
// sub_64D720
// entry 0064d720  size 278  status ok
//======================================================================

int __thiscall sub_64D720(_DWORD *this)
{
  int result; // eax
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-18h]
  BYTE v5; // [esp+4h] [ebp-Ch]
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // [esp+8h] [ebp-8h]
  CImageDisplay *v7; // [esp+Ch] [ebp-4h]

  result = (int)this;
  if ( *(this + 13) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 308))(this)
      && (v3 = (const CHAR *)sub_630F40((int)"SID_GENERIC_WARNING"),
          v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_CLEARPLAYERWARNING"),
          result = sub_62FF10(v2, v3, 4u),
          result == 7) )
    {
      *(this + 13) = 0;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 336))(this, *(_DWORD *)(*(this + 13) + 4), 0);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 316))(this) )
        sub_64D5E0(*((_DWORD *)dword_162EE84 + 22));
      v5 = sub_636610(dword_162EE84);
      ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
      v7 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      *((_BYTE *)ExecutingCollection + (_DWORD)CImageDisplay::GetDisplayFormat(v7) + 93) = v5;
      sub_637610((_DWORD **)dword_162EE84);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 324))(this, 1, -1);
      *(this + 13) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_64D840
// entry 0064d840  size 409  status ok
//======================================================================

int __thiscall sub_64D840(int **this, int a2)
{
  int result; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  char v6[32]; // [esp+8h] [ebp-90h] BYREF
  char Buffer[108]; // [esp+28h] [ebp-70h] BYREF

  *((_BYTE *)*(this + 13) + 16) = 0;
  if ( (*(this + 13))[2] == a2 )
  {
    *(this + 13) = 0;
    return (int)this;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 352))(dword_162EE84)
         || !sub_6367D0(dword_162EE84, a2) )
  {
    result = ((int (__thiscall *)(int **, int, _DWORD, int))(*this)[80])(this, (*(this + 13))[1], 0, 1);
    if ( (_BYTE)result )
    {
      sub_63B2D0(*(this + 13));
      sub_63A3E0((int)*(this + 13), (*(this + 13))[1], 0);
      sub_63A8D0((int)*(this + 13), a2, 0, 1, 1, 1);
      result = ((int (__thiscall *)(int **, _DWORD, int))(*this)[81])(this, 0, a2);
      *(this + 13) = 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, char *))(*(_DWORD *)dword_162EE84 + 948))(
      dword_162EE84,
      a2,
      v6);
    v3 = (const char *)sub_630F40((int)"SID_SHELL_ALREADYINGAME_FORMAT");
    sprintf(Buffer, v3, v6);
    v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_ALREADYINGAME_TITLE");
    return sub_62FF10(Buffer, v4, 0);
  }
  return result;
}


//======================================================================
// sub_64D9E0
// entry 0064d9e0  size 53  status ok
//======================================================================

int __thiscall sub_64D9E0(_DWORD *this, int a2, int a3)
{
  *(this + 13) = *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2);
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 332))(this, a3);
}


//======================================================================
// sub_64DA20
// entry 0064da20  size 233  status ok
//======================================================================

int __thiscall sub_64DA20(void *this, int a2, int a3)
{
  int result; // eax

  result = (*(unsigned __int8 (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 320))(this, a2, a3, 0);
  if ( (_BYTE)result )
  {
    sub_63B2D0(*(int **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2));
    if ( a3 )
    {
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 344))(this, a2, a3);
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2) + 4) = a2;
      return sub_63A8D0(
               *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2),
               *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2) + 8),
               0,
               1,
               1,
               1);
    }
    else
    {
      sub_63A3E0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2), a2, 0);
      return sub_63A8D0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2), -1, 0, 1, 1, 1);
    }
  }
  return result;
}


//======================================================================
// sub_64DB10
// entry 0064db10  size 49  status ok
//======================================================================

int __thiscall sub_64DB10(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 340))(
           this,
           *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * a2),
           a3);
}


//======================================================================
// sub_64DB50
// entry 0064db50  size 25  status ok
//======================================================================

int __stdcall sub_64DB50(int a1, int a2)
{
  return sub_63A1C0(a1, a2);
}


//======================================================================
// sub_64DB70
// entry 0064db70  size 1254  status ok
//======================================================================

char __thiscall sub_64DB70(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  const CHAR *v5; // eax
  int v6; // edx
  int v7; // eax
  CImageDisplay *v8; // eax
  char *v9; // eax
  int v10; // eax
  const CHAR *v12; // [esp-8h] [ebp-28h]
  int v13; // [esp+0h] [ebp-20h]
  int v14; // [esp+4h] [ebp-1Ch]
  CImageDisplay *v16; // [esp+14h] [ebp-Ch]
  char v17; // [esp+1Bh] [ebp-5h]
  int i; // [esp+1Ch] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++i )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           i) )
    {
      v14 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
              dword_162EE84,
              i);
      LOBYTE(v3) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 124))(v14, a2, a3);
      if ( (_BYTE)v3 )
        return v3;
    }
  }
  LOBYTE(v3) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 596))(
                 dword_162EE84,
                 a2,
                 a3);
  if ( !(_BYTE)v3 )
  {
    if ( a2 < 100076 || a2 > 100108 )
    {
      if ( a3 == 100013 )
      {
        v17 = byte_795F95;
        byte_795F95 = 0;
        LOBYTE(v3) = sub_650400(0, 0, a2 - 100014);
        byte_795F95 = v17;
      }
      if ( a2 > 100002 )
      {
        LOBYTE(v3) = a2 + 92;
        v13 = a2 - 100004;
        switch ( a2 )
        {
          case 100004:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 396))(this);
            break;
          case 100005:
            LOBYTE(v3) = sub_64F950(0, 5);
            break;
          case 100006:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, _DWORD, int, int, int, _DWORD))(*(_DWORD *)this + 364))(
                           this,
                           0,
                           1,
                           -1,
                           -1,
                           0);
            break;
          case 100007:
            sub_5F2840((void *)dword_162EE80, 100001);
            sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
            LOBYTE(v3) = sub_64EF70(1);
            break;
          case 100008:
            LOBYTE(v3) = sub_64EF70(0);
            break;
          case 100009:
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 128))(this)
              || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 168))(this)
              || (v12 = (const CHAR *)sub_630F40((int)"SID_SHELL_GAMEINPROGRESS"),
                  v5 = (const CHAR *)sub_630F40((int)"SID_GENERIC_CONFIRMRESTART"),
                  v3 = sub_62FF10(v5, v12, 4u),
                  v3 != 7) )
            {
              *(this + 64) = 0;
              LOBYTE(v6) = (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 168))(this) == 0;
              LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, v6);
            }
            break;
          case 100011:
            LOBYTE(v3) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
                           dword_162EE84,
                           1003);
            break;
          case 100032:
            v16 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
            if ( CImageDisplay::GetDisplayFormat(v16)->rcSource.left == 3 )
            {
              v8 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
              v9 = (char *)sub_57A470(v8);
              LOBYTE(v3) = sub_64F470(v9);
            }
            else
            {
              LOBYTE(v3) = sub_64F470(0);
            }
            break;
          case 100033:
            if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84
                                                                                              + 828))(
                    dword_162EE84,
                    -1)
              || (LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 360))(dword_162EE80), (_BYTE)v3) )
            {
              v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
              LOBYTE(v3) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84
                                                                                           + 52))(
                             dword_162EE84,
                             v7);
            }
            break;
          case 100036:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this);
            break;
          case 100037:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 372))(this, 4);
            break;
          case 100038:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 372))(this, 3);
            break;
          case 100039:
          case 100040:
          case 100041:
            goto LABEL_37;
          case 100042:
            LOBYTE(v3) = sub_64F770(v13, v14);
            break;
          case 100043:
            LOBYTE(v3) = sub_64F860(v13, v14);
            break;
          case 100054:
            LOBYTE(v3) = (unsigned __int8)sub_60CCE0();
            break;
          case 100057:
            (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 244))(
              dword_162EE84,
              -1);
            LOBYTE(v3) = (unsigned __int8)sub_60CCE0();
            break;
          case 100058:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 380))(this, 1, 0);
            break;
          case 100059:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 524))(this);
            break;
          case 100060:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 388))(this);
            break;
          case 100061:
            LOBYTE(v3) = sub_64F660(0);
            break;
          case 100062:
            LOBYTE(v3) = sub_64F380(v13, v14);
            break;
          case 100063:
            v10 = sub_630F40((int)"SID_SHELL_HOYLE_WEBSITE_URL");
            LOBYTE(v3) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 844))(
                           dword_162EE84,
                           v10);
            break;
          case 100074:
            LOBYTE(v3) = sub_64D720(this);
            *(this + 56) = 0;
            break;
          case 100075:
            LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD, int, int, int))(*(_DWORD *)this + 364))(
                           this,
                           0,
                           0,
                           -1,
                           -1,
                           1);
            break;
          default:
            return v3;
        }
      }
      else if ( a2 == 100002 )
      {
        LOBYTE(v3) = sub_630030();
      }
      else if ( a2 == -100 )
      {
LABEL_37:
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 16) + 40))(*(_DWORD *)(dword_7960D8 + 16));
        LOBYTE(v3) = sub_64CFA0(this);
      }
    }
    else
    {
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 944))(
             dword_162EE84,
             a2);
      LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 332))(this, v4);
      *(this + 56) = 0;
    }
  }
  return v3;
}


//======================================================================
// sub_64E110
// entry 0064e110  size 633  status ok
//======================================================================

char __thiscall sub_64E110(void *this, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int *v4; // eax
  int v5; // edx
  _BYTE v8[8]; // [esp+8h] [ebp-1Ch] BYREF
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]

  v4 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 576))(
                dword_162EE84,
                v8);
  v5 = v4[1];
  v9 = *v4;
  v10 = v5;
  if ( (dword_1630698 & 1) == 0 )
  {
    dword_1630698 |= 1u;
    v11 = 0;
    dword_76D4F0 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200000);
    dword_76D4F4 = 100031;
    dword_76D4F8 = 3200001;
    dword_76D4FC = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200001);
    dword_76D500 = 100035;
    dword_76D504 = 3200002;
    dword_76D508 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200002);
    dword_76D50C = 100055;
    dword_76D510 = 3200004;
    dword_76D514 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200004);
    dword_76D518 = -1;
    dword_76D51C = 0;
    dword_76D520 = 0;
    v11 = -1;
  }
  if ( (dword_1630698 & 2) == 0 )
  {
    dword_1630698 |= 2u;
    v11 = 1;
    dword_76D4C0 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200000);
    dword_76D4C4 = 100034;
    dword_76D4C8 = 3200002;
    dword_76D4CC = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200002);
    dword_76D4D0 = 100056;
    dword_76D4D4 = 3200004;
    dword_76D4D8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 580))(
                     dword_162EE84,
                     3200004);
    dword_76D4DC = -1;
    dword_76D4E0 = 0;
    dword_76D4E4 = 0;
    v11 = -1;
  }
  if ( !a4 )
    return 0;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 352))(this) )
    *a4 = &unk_76D4E8;
  else
    *a4 = &unk_76D4B8;
  return 1;
}


//======================================================================
// sub_64E390
// entry 0064e390  size 147  status ok
//======================================================================

char __thiscall sub_64E390(void *this, int a2, _DWORD *a3)
{
  void *v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = this;
  if ( !a3 )
    return 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 236))(
              dword_162EE84,
              v4);
        ++i )
  {
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           i);
    if ( v5 )
    {
      *a3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 112))(v5, a2);
      if ( *a3 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_64E430
// entry 0064e430  size 49  status ok
//======================================================================

char __thiscall sub_64E430(void *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) )
    sub_5F2BA0(this, 100038);
  return 1;
}


//======================================================================
// sub_64E470
// entry 0064e470  size 549  status ok
//======================================================================

char __thiscall sub_64E470(void *this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+8h] [ebp-14h]
  int k; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+14h] [ebp-8h]
  int j; // [esp+18h] [ebp-4h]
  int i; // [esp+18h] [ebp-4h]

  if ( a3 > 5005 )
  {
    if ( a3 == 5006 )
    {
      for ( i = 0;
            i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
            ++i )
      {
        v11 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
                dword_162EE84,
                i);
        if ( v11 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 68))(v11) )
          {
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 108))(v11);
            if ( v9 )
              sub_5FE1C0(v9, -1, -2, 0);
          }
        }
      }
    }
    else if ( a3 > 100029 && a3 <= 100031 )
    {
      for ( j = 0;
            j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
            ++j )
      {
        v10 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
                dword_162EE84,
                j);
        if ( v10 )
        {
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 108))(v10);
          if ( v8 )
            sub_5FE1C0(v8, -1, -2, 1);
        }
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this);
    }
  }
  else if ( a3 == 5005 || a3 >= 5000 && (a3 <= 5001 || a3 == 5003) )
  {
    for ( k = 0;
          k < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84);
          ++k )
    {
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
             dword_162EE84,
             k);
      v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 940))(
             dword_162EE84,
             v3);
      sub_5FE240(v6, -1, -2, 1);
    }
  }
  return 1;
}


//======================================================================
// sub_64E6A0
// entry 0064e6a0  size 475  status ok
//======================================================================

char __stdcall sub_64E6A0(int a1, void *a2)
{
  int v3; // [esp+8h] [ebp-18h]
  int j; // [esp+10h] [ebp-10h]
  int m; // [esp+10h] [ebp-10h]
  int v6; // [esp+14h] [ebp-Ch]
  int n; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  int k; // [esp+1Ch] [ebp-4h]

  if ( !a2 )
    return 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++i )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           i) )
    {
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             i);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 116))(v3);
      if ( v6 )
      {
        for ( j = 0; *(_DWORD *)(v6 + 404 * j) != -1; ++j )
        {
          if ( *(_DWORD *)(v6 + 404 * j) == a1 )
          {
            qmemcpy(a2, (const void *)(v6 + 404 * j), 0x194u);
            return 1;
          }
        }
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    if ( dword_76D9C0[101 * k] == -1 )
    {
      sub_5E9F20("false", "..\\casinoShell\\room.cpp", 899);
      return 0;
    }
    if ( dword_76D9C0[101 * k] == a1 )
      break;
  }
  qmemcpy(a2, &dword_76D9C0[101 * k], 0x194u);
  for ( m = 0; m < 100; ++m )
  {
    if ( *((_DWORD *)a2 + m + 1) == -1 )
    {
      for ( n = m + 1; n < 100; ++n )
        *((_DWORD *)a2 + n + 1) = -1;
      return 1;
    }
  }
  return 1;
}


//======================================================================
// sub_64E880
// entry 0064e880  size 759  status ok
//======================================================================

char __stdcall sub_64E880(int a1, int *a2)
{
  int *v2; // eax
  int *v4; // edx
  int *v5; // ecx
  int v6; // eax
  int *v7; // eax
  int v8; // [esp+4h] [ebp-18h]
  int ii; // [esp+Ch] [ebp-10h]
  int j; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]
  int k; // [esp+18h] [ebp-4h]
  int m; // [esp+18h] [ebp-4h]
  int n; // [esp+18h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++i )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           i) )
    {
      v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             i);
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 120))(v8);
      if ( v11 )
      {
        for ( j = 0; v11 && *(_DWORD *)(v11 + 16 * j) != -1; ++j )
        {
          if ( *(_DWORD *)(v11 + 16 * j) == a1 )
          {
            v2 = (int *)(v11 + 16 * j);
            *a2 = *v2;
            a2[1] = v2[1];
            a2[2] = v2[2];
            a2[3] = v2[3];
            return 1;
          }
        }
      }
    }
  }
  v12 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 592))(dword_162EE84);
  if ( v12 )
  {
    for ( k = 0; v12 && *(_DWORD *)(v12 + 16 * k) != -1; ++k )
    {
      if ( *(_DWORD *)(v12 + 16 * k) == a1 )
      {
        v4 = (int *)(v12 + 16 * k);
        *a2 = *v4;
        a2[1] = v4[1];
        a2[2] = v4[2];
        a2[3] = v4[3];
        return 1;
      }
    }
  }
  for ( m = 0; dword_76F7C0[4 * m] != -1; ++m )
  {
    if ( dword_76F7C0[4 * m] == a1 )
    {
      v5 = &dword_76F7C0[4 * m];
      *a2 = *v5;
      a2[1] = v5[1];
      a2[2] = v5[2];
      a2[3] = v5[3];
      return 1;
    }
  }
  for ( n = 0;
        n < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++n )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           n) )
    {
      v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             n);
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, v6);
      if ( v13 )
      {
        for ( ii = 0; v13 && *(_DWORD *)(v13 + 16 * ii) != -1; ++ii )
        {
          if ( *(_DWORD *)(v13 + 16 * ii) == a1 )
          {
            v7 = (int *)(v13 + 16 * ii);
            *a2 = *v7;
            a2[1] = v7[1];
            a2[2] = v7[2];
            a2[3] = v7[3];
            return 1;
          }
        }
      }
    }
  }
  sub_62FDE0("Menu item not defined.\n");
  sub_5E9F20("false", "..\\casinoShell\\room.cpp", 974);
  return 0;
}


//======================================================================
// sub_64EB80
// entry 0064eb80  size 51  status ok
//======================================================================

int __thiscall sub_64EB80(void *this, char a2)
{
  if ( a2 )
    return sub_5F2B20(this, 100007, 1);
  else
    return sub_5F2BA0(this, 100007);
}


//======================================================================
// sub_64EBC0
// entry 0064ebc0  size 190  status ok
//======================================================================

bool __thiscall sub_64EBC0(void *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  char v5[64]; // [esp+4h] [ebp-148h] BYREF
  char Buffer[260]; // [esp+44h] [ebp-108h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(void *, void *))(*(_DWORD *)this + 128))(this, this) )
    return 1;
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, char *))(*(_DWORD *)dword_162EE84 + 824))(
    dword_162EE84,
    ExecutingCollection,
    v5);
  v3 = (const char *)sub_630F40((int)"SID_SHELL_GAMEINPROGRESS_FORMAT");
  sprintf(Buffer, v3, v5);
  v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_LEAVING");
  return sub_62FF10(Buffer, v4, 4u) == 6;
}


//======================================================================
// sub_64EC80
// entry 0064ec80  size 201  status ok
//======================================================================

int __stdcall sub_64EC80(char a1, char a2, int a3, int a4, char a5)
{
  int v6; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306B0 )
  {
    if ( operator new(0x1ECu) )
      v6 = sub_65DBD0(a1, a2, a3, a4, a5);
    else
      v6 = 0;
    dword_16306B0 = v6;
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 60))(v6);
    sub_5F7340((_DWORD **)dword_16306B0, 0, 0);
  }
  return sub_65E770(dword_16306B0);
}


//======================================================================
// sub_64ED50
// entry 0064ed50  size 41  status ok
//======================================================================

_BYTE *sub_64ED50()
{
  _BYTE *result; // eax

  if ( dword_16306B0 )
  {
    result = sub_5F8990((_BYTE *)dword_16306B0);
    dword_16306B0 = 0;
  }
  return result;
}


//======================================================================
// sub_64ED80
// entry 0064ed80  size 180  status ok
//======================================================================

int __cdecl sub_64ED80()
{
  int v1; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306A0 )
  {
    if ( operator new(0x1C0u) )
      v1 = sub_654930();
    else
      v1 = 0;
    dword_16306A0 = v1;
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 60))(v1);
    sub_5F7340((_DWORD **)dword_16306A0, 0, 0);
  }
  return sub_5F85D0(dword_16306A0);
}


//======================================================================
// sub_64EE40
// entry 0064ee40  size 41  status ok
//======================================================================

_BYTE *sub_64EE40()
{
  _BYTE *result; // eax

  if ( dword_16306A0 )
  {
    result = sub_5F8990((_BYTE *)dword_16306A0);
    dword_16306A0 = 0;
  }
  return result;
}


//======================================================================
// sub_64EE70
// entry 0064ee70  size 186  status ok
//======================================================================

int __stdcall sub_64EE70(int a1)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v3; // [esp+Ch] [ebp-14h]

  if ( !dword_163068C )
  {
    v3 = operator new(0x1ECu);
    if ( v3 )
      v2 = sub_63B600((int)v3);
    else
      v2 = 0;
    dword_163068C = v2;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 60))(v2);
    sub_5F7340((_DWORD **)dword_163068C, 0, 0);
  }
  return sub_63D610((void *)dword_163068C, a1);
}


//======================================================================
// sub_64EF30
// entry 0064ef30  size 63  status ok
//======================================================================

_BYTE *__stdcall sub_64EF30(int a1)
{
  _BYTE *result; // eax

  if ( dword_163068C )
  {
    result = sub_5F8990((_BYTE *)dword_163068C);
    dword_163068C = 0;
  }
  if ( dword_16306C8 )
    return (_BYTE *)sub_5F85D0(dword_16306C8);
  return result;
}


//======================================================================
// sub_64EF70
// entry 0064ef70  size 178  status ok
//======================================================================

int __stdcall sub_64EF70(char a1)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306D0 )
  {
    if ( operator new(0x1C8u) )
      v2 = sub_672FE0();
    else
      v2 = 0;
    dword_16306D0 = v2;
    sub_673130(a1);
    sub_5F7340((_DWORD **)dword_16306D0, 0, 0);
  }
  return sub_6738E0(dword_16306D0);
}


//======================================================================
// sub_64F030
// entry 0064f030  size 41  status ok
//======================================================================

_BYTE *sub_64F030()
{
  _BYTE *result; // eax

  if ( dword_16306D0 )
  {
    result = sub_5F8990((_BYTE *)dword_16306D0);
    dword_16306D0 = 0;
  }
  return result;
}


//======================================================================
// sub_64F060
// entry 0064f060  size 280  status ok
//======================================================================

char __stdcall sub_64F060(char a1, char a2)
{
  CImageDisplay *v2; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // [esp-4h] [ebp-2Ch]
  int v5; // [esp+4h] [ebp-24h]

  if ( !a1 )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    v2 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    if ( !sub_639EF0(v2, (int)ExecutingCollection) )
      return 0;
  }
  if ( !dword_16306C8 )
  {
    if ( operator new(0x1C0u) )
      v5 = sub_671F90(a2);
    else
      v5 = 0;
    dword_16306C8 = v5;
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 60))(v5);
    sub_5F7340((_DWORD **)dword_16306C8, 0, 0);
  }
  sub_5F85D0(dword_16306C8);
  if ( *((_BYTE *)dword_162EE84 + 37) )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_16306C8 + 24))(dword_16306C8, 0);
  return 1;
}


//======================================================================
// sub_64F180
// entry 0064f180  size 41  status ok
//======================================================================

_BYTE *sub_64F180()
{
  _BYTE *result; // eax

  if ( dword_16306C8 )
  {
    result = sub_5F8990((_BYTE *)dword_16306C8);
    dword_16306C8 = 0;
  }
  return result;
}


//======================================================================
// sub_64F1B0
// entry 0064f1b0  size 171  status ok
//======================================================================

char sub_64F1B0()
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v2; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306CC )
  {
    if ( operator new(0x1F8u) )
      v2 = sub_672A50();
    else
      v2 = 0;
    dword_16306CC = v2;
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    sub_672B20(ExecutingCollection);
  }
  sub_5F85D0(dword_16306CC);
  return 1;
}


//======================================================================
// sub_64F260
// entry 0064f260  size 41  status ok
//======================================================================

_BYTE *sub_64F260()
{
  _BYTE *result; // eax

  if ( dword_16306CC )
  {
    result = sub_5F8990((_BYTE *)dword_16306CC);
    dword_16306CC = 0;
  }
  return result;
}


//======================================================================
// sub_64F290
// entry 0064f290  size 180  status ok
//======================================================================

int __cdecl sub_64F290()
{
  int v1; // [esp+4h] [ebp-1Ch]

  if ( !dword_163069C )
  {
    if ( operator new(0x574u) )
      v1 = sub_6535F0();
    else
      v1 = 0;
    dword_163069C = v1;
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 60))(v1);
    sub_5F7340((_DWORD **)dword_163069C, 0, 0);
  }
  return sub_5F85D0(dword_163069C);
}


//======================================================================
// sub_64F350
// entry 0064f350  size 41  status ok
//======================================================================

_BYTE *sub_64F350()
{
  _BYTE *result; // eax

  if ( dword_163069C )
  {
    result = sub_5F8990((_BYTE *)dword_163069C);
    dword_163069C = 0;
  }
  return result;
}


//======================================================================
// sub_64F380
// entry 0064f380  size 180  status ok
//======================================================================

int __thiscall sub_64F380(int *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 11) )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v2 = sub_650830(v4);
    else
      v2 = 0;
    *(this + 11) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 11) + 60))(*(this + 11));
    sub_5F7340((_DWORD **)*(this + 11), 0, 0);
  }
  return sub_5F85D0(*(this + 11));
}


//======================================================================
// sub_64F440
// entry 0064f440  size 41  status ok
//======================================================================

_BYTE *__thiscall sub_64F440(_BYTE **this)
{
  _BYTE *result; // eax

  result = this;
  if ( *(this + 11) )
  {
    result = sub_5F8990(*(this + 11));
    *(this + 11) = 0;
  }
  return result;
}


//======================================================================
// sub_64F470
// entry 0064f470  size 386  status ok
//======================================================================

int __stdcall sub_64F470(char *Source)
{
  const char *v1; // eax
  int v3; // [esp+4h] [ebp-130h]
  int v4; // [esp+8h] [ebp-12Ch]
  char Buffer[256]; // [esp+20h] [ebp-114h] BYREF
  int v6; // [esp+124h] [ebp-10h]
  int v7; // [esp+130h] [ebp-4h]

  v7 = 0;
  if ( operator new(0x1C0u) )
    v4 = sub_674D40();
  else
    v4 = 0;
  v7 = -1;
  v6 = v4;
  if ( (unsigned __int8)sub_675480(v4) )
  {
    if ( !dword_16306A4 )
    {
      v7 = 1;
      if ( operator new(0x640u) )
        v3 = sub_656340(v6, Source);
      else
        v3 = 0;
      v7 = -1;
      dword_16306A4 = v3;
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3);
    }
    return sub_6571B0(dword_16306A4);
  }
  else
  {
    v1 = (const char *)sub_630F40((int)"SID_SHELL_MISSINGFACEMAKER_FORMAT");
    sprintf(Buffer, v1, byte_795634);
    return sub_62FF10(Buffer, byte_795634, 0);
  }
}


//======================================================================
// sub_64F600
// entry 0064f600  size 81  status ok
//======================================================================

_BYTE *sub_64F600()
{
  _BYTE *result; // eax

  if ( dword_16306A4 )
  {
    result = sub_5F8990((_BYTE *)dword_16306A4);
    dword_16306A4 = 0;
  }
  if ( dword_16306B0 )
    result = (_BYTE *)sub_65E770(dword_16306B0);
  if ( dword_1630690 )
    return (_BYTE *)sub_65C4D0(dword_1630690);
  return result;
}


//======================================================================
// sub_64F660
// entry 0064f660  size 215  status ok
//======================================================================

int __stdcall sub_64F660(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-1Ch]

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 776))(dword_162EE84);
  if ( result )
  {
    if ( !dword_16306D4 )
    {
      if ( operator new(0x1C4u) )
        v2 = sub_676650(a1);
      else
        v2 = 0;
      dword_16306D4 = v2;
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 60))(v2);
      sub_5F7340((_DWORD **)dword_16306D4, 0, 0);
    }
    return sub_676840(dword_16306D4);
  }
  return result;
}


//======================================================================
// sub_64F740
// entry 0064f740  size 41  status ok
//======================================================================

_BYTE *sub_64F740()
{
  _BYTE *result; // eax

  if ( dword_16306D4 )
  {
    result = sub_5F8990((_BYTE *)dword_16306D4);
    dword_16306D4 = 0;
  }
  return result;
}


//======================================================================
// sub_64F770
// entry 0064f770  size 180  status ok
//======================================================================

int sub_64F770()
{
  int v1; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306D8 )
  {
    if ( operator new(0x1C0u) )
      v1 = sub_676B60();
    else
      v1 = 0;
    dword_16306D8 = v1;
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 60))(v1);
    sub_5F7340((_DWORD **)dword_16306D8, 0, 0);
  }
  return sub_5F85D0(dword_16306D8);
}


//======================================================================
// sub_64F830
// entry 0064f830  size 41  status ok
//======================================================================

_BYTE *sub_64F830()
{
  _BYTE *result; // eax

  if ( dword_16306D8 )
  {
    result = sub_5F8990((_BYTE *)dword_16306D8);
    dword_16306D8 = 0;
  }
  return result;
}


//======================================================================
// sub_64F860
// entry 0064f860  size 180  status ok
//======================================================================

int sub_64F860()
{
  int v1; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306DC )
  {
    if ( operator new(0x1C0u) )
      v1 = sub_677690();
    else
      v1 = 0;
    dword_16306DC = v1;
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 60))(v1);
    sub_5F7340((_DWORD **)dword_16306DC, 0, 0);
  }
  return sub_5F85D0(dword_16306DC);
}


//======================================================================
// sub_64F920
// entry 0064f920  size 41  status ok
//======================================================================

_BYTE *sub_64F920()
{
  _BYTE *result; // eax

  if ( dword_16306DC )
  {
    result = sub_5F8990((_BYTE *)dword_16306DC);
    dword_16306DC = 0;
  }
  return result;
}


//======================================================================
// sub_64F950
// entry 0064f950  size 225  status ok
//======================================================================

int __stdcall sub_64F950(char a1, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( dword_16306C4 )
    return sub_66E9E0(a1, a2);
  v4 = operator new(0x800u);
  if ( v4 )
    v3 = sub_66D310(v4);
  else
    v3 = 0;
  dword_16306C4 = v3;
  result = sub_66D7F0();
  if ( dword_16306C4 )
  {
    *(_DWORD *)(dword_16306C4 + 4) = *((_DWORD *)dword_162EE84 + 5);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_16306C4 + 136))(dword_16306C4, 0, 0);
    return sub_66E9E0(a1, a2);
  }
  return result;
}


//======================================================================
// sub_64FA40
// entry 0064fa40  size 78  status ok
//======================================================================

void sub_64FA40()
{
  if ( dword_16306C4 )
  {
    (**(void (__thiscall ***)(int, int))dword_16306C4)(dword_16306C4, 1);
    dword_16306C4 = 0;
  }
}


//======================================================================
// sub_64FA90
// entry 0064fa90  size 263  status ok
//======================================================================

int __thiscall sub_64FA90(int this, char a2, int a3)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  void (__thiscall ***v5)(_DWORD, _DWORD); // [esp+4h] [ebp-20h]
  int v6; // [esp+8h] [ebp-1Ch]

  *(_BYTE *)(this + 72) = a2;
  if ( !*(_DWORD *)(this + 4) )
    sub_5E9F20("script", "..\\casinoShell\\room.cpp", 1287);
  if ( !a2 )
    return sub_5FC420(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 4), 0);
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
         dword_162EE84,
         ExecutingCollection);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 172))(v6) )
    return sub_5FC420(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 4), 0);
  if ( operator new(0x2Cu) )
    v5 = (void (__thiscall ***)(_DWORD, _DWORD))sub_678690(a3);
  else
    v5 = 0;
  return sub_5FC420(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 4), v5);
}


//======================================================================
// sub_64FBA0
// entry 0064fba0  size 293  status ok
//======================================================================

int __thiscall sub_64FBA0(int this, char a2)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int result; // eax
  int v4; // [esp+8h] [ebp-20h]
  void *v6; // [esp+10h] [ebp-18h]

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             ExecutingCollection);
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 172))(result);
    if ( (_BYTE)result )
    {
      if ( !*(_DWORD *)(this + 76) )
      {
        v6 = operator new(0x23Cu);
        if ( v6 )
          v4 = sub_66F3F0(v6);
        else
          v4 = 0;
        *(_DWORD *)(this + 76) = v4;
        sub_66F4F0();
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 112))(*(_DWORD *)(this + 76));
      }
      if ( *(_BYTE *)(this + 72) || a2 )
        return sub_66F610(1);
      else
        return sub_66F610(0);
    }
  }
  return result;
}


//======================================================================
// sub_64FCD0
// entry 0064fcd0  size 43  status ok
//======================================================================

int __stdcall sub_64FCD0(int a1)
{
  return Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) != (struct Concurrency::details::_TaskCollectionBase *)1003
       ? 0
       : 3200222;
}


//======================================================================
// sub_64FD00
// entry 0064fd00  size 16  status ok
//======================================================================

int sub_64FD00()
{
  return 31;
}


//======================================================================
// sub_64FD10
// entry 0064fd10  size 16  status ok
//======================================================================

int sub_64FD10()
{
  return 31;
}


//======================================================================
// sub_64FD20
// entry 0064fd20  size 61  status ok
//======================================================================

int __stdcall sub_64FD20(int a1, _DWORD **a2)
{
  int v2; // esi
  int v3; // eax
  int v5; // [esp-4h] [ebp-Ch]

  v2 = sub_646E70(a2);
  v5 = sub_646E90() + v2;
  v3 = sub_646E40(a2);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 68))(a1, v3 - 2, v5);
}


//======================================================================
// sub_64FD60
// entry 0064fd60  size 474  status ok
//======================================================================

int __thiscall sub_64FD60(void *this, _DWORD **a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v10; // [esp+7h] [ebp-5h]
  int v11; // [esp+8h] [ebp-4h]

  v10 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 440))(this);
  v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 444))(this);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 216))(dword_162EE84)
    || (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84) )
  {
    sub_5ECC60(a2[99], 108);
    sub_5ECCB0(a2[99], 16);
    if ( v10 )
    {
      v3 = ((int (__thiscall *)(_DWORD **))(*a2)[21])(a2);
      if ( v11 == 1 )
        v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v3 + 14);
      else
        v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v3 + 6);
    }
    else
    {
      v6 = ((int (__thiscall *)(_DWORD **))(*a2)[21])(a2);
      if ( v11 == 1 )
        v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v6 + 20);
      else
        v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v6 + 12);
    }
    return (*(int (__thiscall **)(_DWORD *, int))(*a2[99] + 68))(a2[99], v4 + 5);
  }
  else
  {
    v7 = ((int (__thiscall *)(_DWORD **))(*a2)[21])(a2);
    v8 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v7 + 3);
    return (*(int (__thiscall **)(_DWORD *, int))(*a2[99] + 68))(a2[99], v8 + 8);
  }
}


//======================================================================
// sub_64FF40
// entry 0064ff40  size 317  status ok
//======================================================================

int __thiscall sub_64FF40(void *this, _DWORD **a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v6; // eax
  int v7; // eax
  char v8; // [esp+7h] [ebp-1h]

  v8 = (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 440))(this, this);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 216))(dword_162EE84)
    || (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84) )
  {
    sub_5ECC60(a2[100], 108);
    sub_5ECCB0(a2[100], 12);
    v3 = ((int (__thiscall *)(_DWORD **))(*a2)[21])(a2);
    if ( v8 )
      v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v3 + 20);
    else
      v4 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v3 + 32);
    return (*(int (__thiscall **)(_DWORD *, int))(*a2[100] + 68))(a2[100], v4 + 5);
  }
  else
  {
    v6 = ((int (__thiscall *)(_DWORD **))(*a2)[21])(a2);
    v7 = ((int (__thiscall *)(_DWORD **, int))(*a2)[19])(a2, v6 + 22);
    return (*(int (__thiscall **)(_DWORD *, int))(*a2[100] + 68))(a2[100], v7 + 8);
  }
}


//======================================================================
// sub_6500A0
// entry 006500a0  size 175  status ok
//======================================================================

int __thiscall sub_6500A0(void *this, int a2, char a3)
{
  int v4; // eax

  if ( a2 < 0
    || a2 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    sub_5E9F20("playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()", "..\\casinoShell\\room.cpp", 1398);
  }
  if ( !sub_639110(dword_162EE84, a2) || !*(_DWORD *)(sub_639110(dword_162EE84, a2) + 24) )
    return -1;
  v4 = sub_639110(dword_162EE84, a2);
  return (a3 != 0 ? 4 : 101)
       + (*(int (__thiscall **)(_DWORD, _DWORD, void *))(**(_DWORD **)(v4 + 24) + 76))(
           *(_DWORD *)(v4 + 24),
           *(_DWORD *)(v4 + 24),
           this);
}


//======================================================================
// sub_650150
// entry 00650150  size 158  status ok
//======================================================================

int __thiscall sub_650150(void *this, int a2, int a3)
{
  int v4; // eax

  if ( a2 < 0
    || a2 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    sub_5E9F20("playerIndex >= 0 && playerIndex < shell->GetMaxPlayersInAnyGame()", "..\\casinoShell\\room.cpp", 1413);
  }
  if ( !sub_639110(dword_162EE84, a2) || !*(_DWORD *)(sub_639110(dword_162EE84, a2) + 24) )
    return -1;
  v4 = sub_639110(dword_162EE84, a2);
  return (*(int (__thiscall **)(_DWORD, _DWORD, void *))(**(_DWORD **)(v4 + 24) + 84))(
           *(_DWORD *)(v4 + 24),
           *(_DWORD *)(v4 + 24),
           this)
       + 33;
}


//======================================================================
// sub_6501F0
// entry 006501f0  size 32  status ok
//======================================================================

int __thiscall sub_6501F0(void *this)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 200))(
           dword_162EE84,
           this);
}


//======================================================================
// sub_650210
// entry 00650210  size 249  status ok
//======================================================================

int __thiscall sub_650210(void *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-20h]
  int v3; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  for ( result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 268))(
                   dword_162EE84,
                   this);
        v3 < result;
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 268))(
                   dword_162EE84,
                   v2) )
  {
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * v3))->rcSource.left
      && *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v3) + 32)
      && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v3) + 32) + 12) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v3) + 32) + 12) + 380) )
        sub_5FC250(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v3) + 32) + 12)
                             + 380));
    }
    ++v3;
  }
  return result;
}


//======================================================================
// sub_650310
// entry 00650310  size 53  status ok
//======================================================================

bool __thiscall sub_650310(_DWORD *this)
{
  return *(this + 1) && *(_DWORD *)(*(this + 1) + 4);
}


//======================================================================
// sub_650360
// entry 00650360  size 150  status ok
//======================================================================

int __thiscall sub_650360(_DWORD *this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) != 3 )
    *(this + 17) = GetTickCount();
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    if ( *(this + 12) && *(_BYTE *)(*(this + 12) + 684) )
      sub_650550(1);
    if ( dword_16306C4 )
      sub_66F370(a2);
    if ( *(_BYTE *)(dword_162EE80 + 72) )
      sub_64FA90((int)this, 0, 0);
  }
  return sub_5F1680((int)this, a2);
}


//======================================================================
// sub_650400
// entry 00650400  size 321  status ok
//======================================================================

int __thiscall sub_650400(int this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-20h]
  void *v7; // [esp+Ch] [ebp-18h]
  int v8; // [esp+14h] [ebp-10h]

  v8 = -1;
  sub_5F2870((char *)this);
  result = sub_637630((_DWORD **)dword_162EE84);
  if ( !(_BYTE)result || byte_795F94 || byte_795F95 )
  {
    if ( a2 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  }
  else
  {
    if ( sub_637670((_DWORD **)dword_162EE84) && sub_60A950(*(_BYTE **)(dword_7960D8 + 8)) )
    {
      v8 = sub_5F4760(dword_162EE84);
      sub_5F4780(v8);
    }
    if ( !*(_DWORD *)(this + 48) )
    {
      v7 = operator new(0x2B0u);
      if ( v7 )
        v5 = sub_678900(v7);
      else
        v5 = 0;
      *(_DWORD *)(this + 48) = v5;
    }
    *(_DWORD *)(*(_DWORD *)(this + 48) + 676) = v8;
    return sub_6795F0(a2, a3, a4);
  }
  return result;
}


//======================================================================
// sub_650550
// entry 00650550  size 106  status ok
//======================================================================

int __fastcall sub_650550(int a1, int a2, unsigned __int8 a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-Ch]

  v4 = a1;
  result = a1;
  if ( *(_DWORD *)(a1 + 48) )
  {
    LOBYTE(a1) = a3;
    sub_679AA0(a1);
    result = a3;
    if ( a3 )
    {
      result = *(_DWORD *)(v4 + 48);
      if ( result )
        result = (***(int (__thiscall ****)(_DWORD, int))(v4 + 48))(*(_DWORD *)(v4 + 48), 1);
      *(_DWORD *)(v4 + 48) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_6505C0
// entry 006505c0  size 359  status ok
//======================================================================

char __thiscall sub_6505C0(_DWORD *this)
{
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-34h]
  int v4; // [esp+4h] [ebp-28h]
  void *v6; // [esp+1Ch] [ebp-10h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 128))(this)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 168))(this) )
  {
    v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_GAMEINPROGRESS");
    v1 = (const CHAR *)sub_630F40((int)"SID_GENERIC_CONFIRMTUTORIALSTART");
    if ( sub_62FF10(v1, v3, 4u) == 7 )
      return 0;
  }
  if ( *(this + 15) )
  {
    sub_5E9F20("false", "..\\casinoShell\\room.cpp", 1564);
    v6 = (void *)*(this + 15);
    if ( v6 )
    {
      sub_651950(v6);
      operator delete(v6);
    }
  }
  (*(void (__thiscall **)(_DWORD *, int))(*this + 516))(this, 1);
  if ( operator new(0x84u) )
    v4 = sub_651340(this);
  else
    v4 = 0;
  *(this + 15) = v4;
  sub_651AF0(*(this + 15));
  return 1;
}


//======================================================================
// sub_650730
// entry 00650730  size 183  status ok
//======================================================================

int __thiscall sub_650730(_DWORD *this)
{
  void *v3; // [esp+Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 516))(this, 0);
  if ( *(this + 15) )
  {
    v3 = (void *)*(this + 15);
    if ( v3 )
    {
      sub_651950(v3);
      operator delete(v3);
    }
    *(this + 15) = 0;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\room.cpp", 1584);
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 132))(this, 0);
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 380))(this, 1, 1);
}


//======================================================================
// sub_6507F0
// entry 006507f0  size 60  status ok
//======================================================================

char __thiscall sub_6507F0(_DWORD *this)
{
  if ( *(this + 15) )
    return sub_651AF0(*(this + 15));
  else
    return sub_5E9F20("false", "..\\casinoShell\\room.cpp", 1593);
}


//======================================================================
// sub_650830
// entry 00650830  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_650830(_DWORD *this)
{
  sub_5F71F0(this, 1, 0);
  *this = &AboutDialog::`vftable';
  return this;
}


//======================================================================
// sub_650880
// entry 00650880  size 591  status ok
//======================================================================

CPaneContainer *__thiscall sub_650880(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp-14h] [ebp-34h]
  int v12; // [esp-14h] [ebp-34h]
  int v13; // [esp-14h] [ebp-34h]
  int v14; // [esp-14h] [ebp-34h]
  int v15; // [esp-10h] [ebp-30h]
  int v16; // [esp-10h] [ebp-30h]
  int v17; // [esp-10h] [ebp-30h]
  int v18; // [esp-10h] [ebp-30h]
  _BYTE v20[8]; // [esp+4h] [ebp-1Ch] BYREF
  int v21; // [esp+Ch] [ebp-14h]
  int v22; // [esp+10h] [ebp-10h]
  _DWORD *v23; // [esp+14h] [ebp-Ch]
  int v24; // [esp+18h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp-4h]

  sub_5F83D0(this, 3200243, 0);
  v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 756))(
         dword_162EE84,
         0);
  sub_5F9CE0(this, 0, 0, v1, 0, 1, 0, 255, 0, (char)this);
  v2 = sub_630F40((int)"SID_GENERIC_ABOUT_PRODUCT");
  sub_5FA5B0((void *)0xFFFFFFFF, 0, 0, v2, 73, 244, 25, 5, 6, 2, 18, -1);
  v3 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 760))(dword_162EE84);
  v4 = v3[1];
  v24 = *v3;
  v25 = v4;
  v21 = v24 + 92;
  v22 = v4 + 40;
  v15 = v4 + 40;
  v11 = v24 + 92;
  v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 288))(dword_162EE84);
  v23 = sub_5FA5B0(v20, 0, 1, v5, 31, 180, 18, v11, v15, 2, 5, -1);
  v23[42] = -1;
  v16 = v22 + 20;
  v12 = v21;
  v6 = sub_630F40((int)"SID_GENERIC_COPYRIGHTYEAR");
  v23 = sub_5FA5B0(v20, 0, 2, v6, 31, 160, 18, v12, v16, 2, 5, -1);
  v23[42] = -1;
  v17 = v22 + 40;
  v13 = v21;
  v7 = sub_630F40((int)"SID_GENERIC_ENCOREONLINE");
  v23 = sub_5FA5B0(v20, 0, 3, v7, 31, 180, 18, v13, v17, 2, 5, -1);
  v23[42] = -1;
  v18 = v22 + 60;
  v14 = v21;
  v8 = sub_630F40((int)"SID_GENERIC_ALLRIGHTSRESERVED");
  v23 = sub_5FA5B0(v20, 0, 4, v8, 31, 180, 18, v14, v18, 2, 5, -1);
  v23[42] = -1;
  v9 = sub_630F40((int)"SID_GENERIC_OK");
  sub_5F9DE0(v20, 0, 0, 3200229, 86, 131, 2, v9, 72, 75, 74, -1, 13);
  sub_5FA880(v20, 0, 0, 252, 1, 2, 124, 1, 120, 124, 161, 0, 0, 0);
  return sub_5FA880(v20, 0, 0, 252, 1, 3, 125, 1, 255, 255, 255, 0, 0, 0);
}


//======================================================================
// sub_650AD0
// entry 00650ad0  size 24  status ok
//======================================================================

_BYTE *__stdcall sub_650AD0(int a1)
{
  return sub_64F440((_BYTE **)dword_162EE80);
}


//======================================================================
// sub_650AF0
// entry 00650af0  size 37  status ok
//======================================================================

BOOL __thiscall sub_650AF0(void *this)
{
  return (*(unsigned __int8 (__thiscall **)(void *, void *))(*(_DWORD *)this + 128))(this, this) == 0;
}


//======================================================================
// sub_650B20
// entry 00650b20  size 15  status ok
//======================================================================

char __stdcall sub_650B20(int a1, int a2, int a3)
{
  return 1;
}


//======================================================================
// sub_650B30
// entry 00650b30  size 19  status ok
//======================================================================

int __stdcall sub_650B30(int a1)
{
  return a1 - 12;
}


//======================================================================
// sub_650BB0
// entry 00650bb0  size 79  status ok
//======================================================================

int __thiscall sub_650BB0(int this, char a2, int a3)
{
  if ( a3 )
    sub_5F71F0((_DWORD *)this, a2, a3);
  else
    sub_5F71F0((_DWORD *)this, a2, *((_DWORD *)dword_162EE84 + 5));
  *(_DWORD *)this = &sciMessageBox::`vftable';
  *(_BYTE *)(this + 444) = 0;
  return this;
}


//======================================================================
// sub_650C20
// entry 00650c20  size 1662  status ok
//======================================================================

int __thiscall sub_650C20(int this, int a2, int a3, char a4, int a5)
{
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v34; // [esp-4h] [ebp-60h]
  _DWORD *v35; // [esp+Ch] [ebp-50h]
  _DWORD *v37; // [esp+1Ch] [ebp-40h]
  _BYTE *v38; // [esp+24h] [ebp-38h]
  int v39; // [esp+28h] [ebp-34h]
  _BYTE *v40; // [esp+2Ch] [ebp-30h]
  _DWORD v41[2]; // [esp+30h] [ebp-2Ch] BYREF
  int v42; // [esp+38h] [ebp-24h]
  int v43; // [esp+3Ch] [ebp-20h]
  int v44; // [esp+40h] [ebp-1Ch]
  _BYTE *v45; // [esp+44h] [ebp-18h]
  int v46; // [esp+48h] [ebp-14h]
  _DWORD *v47; // [esp+4Ch] [ebp-10h]
  int v48; // [esp+58h] [ebp-4h]

  v46 = _RTDynamicCast(
          *(_DWORD *)(dword_7960D8 + 16),
          0,
          &VWindow `RTTI Type Descriptor',
          &Window `RTTI Type Descriptor',
          0);
  if ( a5 == -1 )
    sub_5F83D0((_DWORD *)this, 3200224, 0);
  else
    sub_5F83D0((_DWORD *)this, a5, 0);
  sub_5F7340((_DWORD **)this, 0, 0);
  *(_BYTE *)(this + 284) = 1;
  sub_5F85D0(this);
  v37 = operator new(0x178u);
  v48 = 0;
  if ( v37 )
  {
    sub_5EAAF0(v37);
    v35 = v5;
  }
  else
  {
    v35 = 0;
  }
  v48 = -1;
  v47 = v35;
  sub_5EAF00((int)v35, *(_DWORD *)(this + 276));
  (*(void (__thiscall **)(_DWORD *))(*v47 + 64))(v47);
  sub_5EBF80(v35, v41);
  if ( v47 )
    (*(void (__thiscall **)(_DWORD *, int))*v47)(v47, 1);
  v39 = v42 - v41[0];
  v44 = v43 - v41[1];
  sub_5FA5B0((void *)this, 0, 0, a2, 73, v42 - v41[0] - 7, 25, 3, 3, 1, 48, -1);
  sub_5FA5B0((void *)this, 0, 1, a3, 31, v39 - 30, v44 - 60, 15, 30, 1, 48, -1);
  v45 = sub_5F9DE0((void *)this, 0, 0, 3200229, 0, 0, 1, (int)&Source, 72, 75, 74, -1, 0);
  v38 = sub_5F9DE0((void *)this, 0, 1, 3200222, 0, 0, 1, (int)&Source, 72, 75, 74, -1, 0);
  v40 = sub_5F9DE0((void *)this, 0, 2, 3200222, 0, 0, 1, (int)&Source, 72, 75, 74, -1, 0);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v40 + 112))(v40);
  if ( (a4 & 8) != 0 )
  {
    *(_DWORD *)(this + 452) = 6;
    v6 = sub_630F40((int)"SID_GENERIC_YES");
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 224))(v45, v6);
    sub_6026F0(v45, 13);
    sub_602740(v45, 121);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 72))(v45, 1);
    v7 = v44 + 5;
    v8 = sub_5F5590(v45);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 80))(v45, v7 - v8 - 18);
    *(_DWORD *)(this + 456) = 7;
    v9 = sub_630F40((int)"SID_GENERIC_NO");
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 224))(v38, v9);
    sub_6026F0(v38, 27);
    sub_602740(v38, 110);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 72))(v38, v39 / 3 + 1);
    v10 = v44 + 5;
    v11 = sub_5F5590(v45);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 80))(v38, v10 - v11 - 18);
    *(_DWORD *)(this + 460) = 2;
    v12 = sub_630F40((int)"SID_GENERIC_CANCEL");
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v40 + 224))(v40, v12);
    sub_6026F0(v40, 27);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v40 + 72))(v40, 2 * (v39 / 3) + 1);
    v13 = v44 + 5;
    v14 = sub_5F5590(v45);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v40 + 80))(v40, v13 - v14 - 18);
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v40 + 116))(v40);
  }
  else if ( (a4 & 4) != 0 )
  {
    *(_DWORD *)(this + 452) = 6;
    v15 = sub_630F40((int)"SID_GENERIC_YES");
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 224))(v45, v15);
    sub_6026F0(v45, 13);
    sub_602740(v45, 121);
    v16 = v39 - sub_5F5550(v45);
    v17 = sub_5F5550(v38);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 72))(v45, (v16 - v17 - 10) / 2);
    v18 = v44 + 5;
    v19 = sub_5F5590(v45);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 80))(v45, v18 - v19 - 18);
    *(_DWORD *)(this + 456) = 7;
    v20 = sub_630F40((int)"SID_GENERIC_NO");
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 224))(v38, v20);
    sub_6026F0(v38, 27);
    sub_602740(v38, 110);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 72))(v38, v39 / 2 + 5);
    v21 = v44 + 5;
    v22 = sub_5F5590(v45);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 80))(v38, v21 - v22 - 18);
  }
  else
  {
    *(_DWORD *)(this + 452) = 1;
    v23 = sub_630F40((int)"SID_GENERIC_OK");
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 224))(v45, v23);
    sub_6026F0(v45, 13);
    sub_602740(v45, 32);
    if ( (a4 & 1) != 0 )
    {
      v24 = v39 - sub_5F5550(v45);
      v25 = sub_5F5550(v38);
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 72))(v45, (v24 - v25 - 10) / 2);
      v26 = v44 + 5;
      v27 = sub_5F5590(v45);
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 80))(v45, v26 - v27 - 18);
      *(_DWORD *)(this + 456) = 2;
      v28 = sub_630F40((int)"SID_GENERIC_CANCEL");
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 224))(v38, v28);
      sub_6026F0(v38, 27);
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 72))(v38, v39 / 2 + 5);
      v29 = v44 + 5;
      v30 = sub_5F5590(v45);
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v38 + 80))(v38, v29 - v30 - 18);
    }
    else
    {
      v31 = v44 + 5;
      v34 = v31 - sub_5F5590(v45) - 18;
      v32 = sub_5F5550(v45);
      (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v45 + 68))(v45, (v39 - v32) / 2, v34);
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v38 + 112))(v38);
    }
  }
  while ( !*(_BYTE *)(this + 444) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8);
    sub_613E70(v46);
  }
  sub_5F87D0(this);
  return 0;
}


//======================================================================
// sub_6512A0
// entry 006512a0  size 109  status ok
//======================================================================

int __thiscall sub_6512A0(int this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = *(_DWORD *)(this + 456);
      *(_DWORD *)(this + 448) = result;
    }
    else if ( a2 == 2 )
    {
      result = *(_DWORD *)(this + 460);
      *(_DWORD *)(this + 448) = result;
    }
  }
  else
  {
    result = *(_DWORD *)(this + 452);
    *(_DWORD *)(this + 448) = result;
  }
  *(_BYTE *)(this + 444) = 1;
  return result;
}


//======================================================================
// sub_651340
// entry 00651340  size 1539  status ok
//======================================================================

_DWORD *__thiscall sub_651340(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-6Ch]
  int v7; // [esp+8h] [ebp-68h]
  _DWORD *v8; // [esp+Ch] [ebp-64h]
  int v9; // [esp+10h] [ebp-60h]
  int v10; // [esp+14h] [ebp-5Ch]
  _BYTE *v11; // [esp+18h] [ebp-58h]
  int v12; // [esp+1Ch] [ebp-54h]
  _DWORD *v14; // [esp+24h] [ebp-4Ch]
  _DWORD *v15; // [esp+34h] [ebp-3Ch]
  _BYTE *v16; // [esp+4Ch] [ebp-24h]
  _DWORD *v17; // [esp+54h] [ebp-1Ch]
  int i; // [esp+5Ch] [ebp-14h]
  int j; // [esp+5Ch] [ebp-14h]
  int k; // [esp+5Ch] [ebp-14h]
  int m; // [esp+5Ch] [ebp-14h]
  int v22; // [esp+60h] [ebp-10h]

  *this = a2;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 84))(*this);
  *(this + 2) = 0;
  *(this + 32) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 540))(*this);
  *((_BYTE *)this + 16) = 0;
  *((_BYTE *)this + 17) = 0;
  *(this + 3) = CDeferredCommand::GetIID((CDeferredCommand *)*this);
  sub_5F1AD0((_DWORD *)*this, 2300700);
  v17 = operator new(0x178u);
  if ( v17 )
  {
    sub_5EAAF0(v17);
    v12 = v2;
  }
  else
  {
    v12 = 0;
  }
  *(this + 6) = v12;
  sub_5EAE80(2300701, 0, 0, 10200, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 6) + 116))(*(this + 6));
  v16 = operator new(0x5Cu);
  if ( v16 )
    v11 = sub_5F6130(v16);
  else
    v11 = 0;
  *(this + 7) = v11;
  sub_5F61D0((CPaneContainer *)*(this + 7), 0, 19, 5, 576, 10210, (struct CPaneDivider *)0xFFFFFFFF);
  sub_5F6580((_BYTE *)*(this + 7), 116, 174, 168);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 116))(*(this + 7));
  for ( i = 0; i < 6; ++i )
    *(this + i + 8) = 0;
  v22 = sub_652D20(this);
  *(this + 1) = 680 / v22;
  for ( j = 0; j < v22; ++j )
  {
    if ( j >= 6 )
    {
      sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 46);
      break;
    }
    if ( operator new(0x1F8u) )
      v10 = sub_652E20(this, j);
    else
      v10 = 0;
    *(this + j + 8) = v10;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 8) + 64))(*(this + j + 8));
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + j + 8) + 120))(*(this + j + 8), *(this + 1) + 2, 21);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + j + 8) + 108))(*(this + j + 8), 10220);
    v3 = sub_652C70(j);
    v4 = (*(int (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*this + 560))(
           *this,
           v3,
           94,
           94,
           94,
           94,
           0,
           0);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + j + 8) + 220))(*(this + j + 8), v4);
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + j + 8) + 68))(
      *(this + j + 8),
      *(this + 1) * j + 4,
      575);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 8) + 116))(*(this + j + 8));
  }
  for ( k = 0; k < 4; ++k )
  {
    if ( operator new(0x1F8u) )
      v9 = sub_652E20(this, k + 100);
    else
      v9 = 0;
    *(this + k + 14) = v9;
    sub_5EAE80(k + 2300710, 0, 0, 10301, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + k + 14) + 116))(*(this + k + 14));
    v15 = operator new(0x184u);
    if ( v15 )
      v8 = sub_5F5BF0(v15);
    else
      v8 = 0;
    *(this + k + 18) = v8;
    sub_5EAE80(k + 2300720, 0, 0, 10310, -1);
    *(_DWORD *)(*(this + k + 18) + 376) = 30;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + k + 18) + 112))(*(this + k + 18));
  }
  sub_6026F0((_BYTE *)*(this + 14), 13);
  sub_602740((_BYTE *)*(this + 14), 32);
  sub_6026F0((_BYTE *)*(this + 15), 8);
  sub_602740((_BYTE *)*(this + 15), 22);
  sub_6026F0((_BYTE *)*(this + 17), 27);
  for ( m = 0; m < 10; ++m )
  {
    if ( operator new(0x1B4u) )
      v7 = CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(
             0,
             *((_DWORD *)dword_162EE84 + 5),
             20,
             20);
    else
      v7 = 0;
    *(this + m + 22) = v7;
    v14 = operator new(0x184u);
    if ( v14 )
      v6 = sub_5F5BF0(v14);
    else
      v6 = 0;
    sub_5F9CE0((void *)*(this + m + 22), v6, 0, 3400020, 0, 0, 10100, 0, 0xFFu, 0);
  }
  sub_652860(this);
  return this;
}


//======================================================================
// sub_651950
// entry 00651950  size 406  status ok
//======================================================================

int __thiscall sub_651950(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4Ch] [ebp-4h]
  int j; // [esp+4Ch] [ebp-4h]
  int k; // [esp+4Ch] [ebp-4h]

  sub_5F1AD0((_DWORD *)*this, *(this + 3));
  if ( *(this + 6) )
    (**(void (__thiscall ***)(_DWORD, int))*(this + 6))(*(this + 6), 1);
  result = *(this + 7);
  if ( result )
    result = (**(int (__thiscall ***)(_DWORD, int))*(this + 7))(*(this + 7), 1);
  for ( i = 0; i < 6; ++i )
  {
    result = (int)this;
    if ( *(this + i + 8) )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + i + 8))(*(this + i + 8), 1);
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( *(this + j + 14) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + j + 14))(*(this + j + 14), 1);
    result = *(this + j + 18);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + j + 18))(*(this + j + 18), 1);
  }
  for ( k = 0; k < 10; ++k )
  {
    if ( *(this + k + 22) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + k + 22))(*(this + k + 22), 1);
    result = k + 1;
  }
  return result;
}


//======================================================================
// sub_651AF0
// entry 00651af0  size 1500  status ok
//======================================================================

char __thiscall sub_651AF0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp-14h] [ebp-38h]
  int v6; // [esp-Ch] [ebp-30h]
  int v7; // [esp+4h] [ebp-20h]
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h] BYREF
  int i; // [esp+20h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*this + 544))(
    *this,
    *(_DWORD *)(*(this + 32) + 20 * *(this + 2)),
    *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 4));
  sub_652900(0);
  for ( i = 0; i < 6; ++i )
  {
    if ( *(this + i + 8) )
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 8) + 116))(*(this + i + 8));
  }
  if ( *(_DWORD *)(20 * *(this + 2) + *(this + 32)) && *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) )
  {
    *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 16) = GetTickCount();
    sub_652B60(*(this + 2), &v11, &v12);
    v9 = sub_652DA0(*(_DWORD *)(*(this + 32) + 20 * *(this + 2)));
    v10 = v12 * *(this + 1) / v9 + v11 * *(this + 1);
    v2 = sub_5F5590((_DWORD *)*(this + 7));
    LOBYTE(v1) = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 7) + 120))(*(this + 7), v10, v2);
    if ( !*((_BYTE *)this + 16) )
    {
      sub_6520F0();
      v1 = *(this + 32);
      switch ( *(_DWORD *)(v1 + 20 * *(this + 2) + 8) )
      {
        case 0:
          return v1;
        case 1:
          if ( (int)*(this + 5) <= 0 )
          {
            if ( *(int *)(*(this + 32) + 20 * *(this + 2) + 12) >= 1 )
              v7 = *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 12);
            else
              v7 = 1;
            *(this + 5) = v7;
          }
          else if ( !--*(this + 5) )
          {
            ++*(this + 2);
            if ( *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 8) == 1 )
              sub_5E9F20("m_table[m_itemIndex].action != TUTORIAL_ACTION_DELAY", "..\\casinoShell\\tutorial.cpp", 157);
          }
          LOBYTE(v1) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                         *(_DWORD *)(dword_162EE80 + 4),
                         1,
                         0);
          break;
        case 2:
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 536))(*this) )
          {
            v6 = *(_DWORD *)(*this + 4);
            v5 = *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 12);
            v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 536))(*this);
            sub_646FA0(v3, v5, -1, v6, 60, 1);
            ++*(this + 2);
            LOBYTE(v1) = (_BYTE)this;
          }
          else
          {
            LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 173);
          }
          break;
        case 3:
          if ( *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) )
          {
            if ( *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) == *(_DWORD *)(20 * *(this + 2) + *(this + 32)) )
            {
              if ( *(_DWORD *)(*(this + 32) + 20 * (*(this + 2) + 1) + 4) != *(_DWORD *)(*(this + 32)
                                                                                       + 20 * *(this + 2)
                                                                                       + 4) )
              {
                (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*this + 552))(
                  *this,
                  *(_DWORD *)(*(this + 32) + 20 * *(this + 2)),
                  *(_DWORD *)(*(this + 32) + 20 * (*(this + 2) + 1) + 4));
                if ( !*((_BYTE *)this + 17) )
                  goto LABEL_34;
                goto LABEL_31;
              }
              LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 181);
            }
            else
            {
              LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 179);
            }
          }
          else
          {
            LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 177);
          }
          break;
        case 4:
          if ( *((_BYTE *)this + 17) )
LABEL_31:
            LOBYTE(v1) = sub_6526E0(this);
          else
LABEL_34:
            LOBYTE(v1) = sub_652900(100);
          break;
        case 5:
          if ( *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) )
          {
            if ( *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) == *(_DWORD *)(20 * *(this + 2) + *(this + 32)) )
            {
              if ( *(_DWORD *)(*(this + 32) + 20 * (*(this + 2) + 1) + 4) == *(_DWORD *)(*(this + 32)
                                                                                       + 20 * *(this + 2)
                                                                                       + 4) )
              {
                LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 200);
              }
              else
              {
                (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*this + 548))(
                  *this,
                  *(_DWORD *)(*(this + 32) + 20 * *(this + 2)),
                  *(_DWORD *)(*(this + 32) + 20 * (*(this + 2) + 1) + 4));
                ++*(this + 2);
                LOBYTE(v1) = (_BYTE)this;
              }
            }
            else
            {
              LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 198);
            }
          }
          else
          {
            LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 196);
          }
          break;
        default:
          LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 205);
          break;
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 7) + 120))(*(this + 7), 680, 19);
    LOBYTE(v1) = sub_652900(103);
  }
  return v1;
}


