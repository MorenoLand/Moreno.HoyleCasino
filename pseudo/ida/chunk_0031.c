//======================================================================
// sub_5F8A80
// entry 005f8a80  size 166  status ok
//======================================================================

int __thiscall sub_5F8A80(int this, int a2)
{
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]

  *(_BYTE *)(this + 376) = 1;
  *(_WORD *)(this + 372) = a2;
  *(_BYTE *)(this + 374) = BYTE2(a2);
  *(_BYTE *)(this + 375) = -1;
  v3 = *(_DWORD *)(this + 268);
  v4 = *(_DWORD *)(this + 272);
  v5 = *(_DWORD *)(this + 260);
  *(_DWORD *)(this + 384) = *(_DWORD *)(this + 264);
  *(_DWORD *)(this + 388) = v5;
  *(_DWORD *)(this + 392) = v4;
  *(_DWORD *)(this + 396) = v3;
  return v3;
}


//======================================================================
// sub_5F8BA0
// entry 005f8ba0  size 312  status ok
//======================================================================

int __thiscall sub_5F8BA0(int this, CMediaType *a2)
{
  int result; // eax
  int v3; // esi
  int Size; // eax
  CMediaType *v5; // eax
  int IsFixedSize; // esi
  CMediaType *v7; // eax
  int v8; // eax
  int i; // [esp+8h] [ebp-4h]

  result = sub_60C9E0(a2);
  if ( !(_BYTE)result )
  {
    if ( CRecentFileList::GetSize((CRecentFileList *)(this + 316))
      && (v3 = CMediaType::IsFixedSize(a2),
          Size = CRecentFileList::GetSize((CRecentFileList *)(this + 316)),
          v5 = (CMediaType *)sub_60CA40(Size - 1),
          v3 > CMediaType::IsFixedSize(v5)) )
    {
      for ( i = 0; ; ++i )
      {
        result = CRecentFileList::GetSize((CRecentFileList *)(this + 316));
        if ( i >= result )
          break;
        IsFixedSize = CMediaType::IsFixedSize(a2);
        v7 = (CMediaType *)sub_60CA40(i);
        if ( IsFixedSize > CMediaType::IsFixedSize(v7) )
        {
          if ( i <= 0 )
            return sub_60C7D0(a2);
          v8 = sub_60CA40(i - 1);
          return sub_60CB20(v8, a2);
        }
      }
    }
    else
    {
      return sub_60C840(a2);
    }
  }
  return result;
}


//======================================================================
// sub_5F8CE0
// entry 005f8ce0  size 133  status ok
//======================================================================

int __thiscall sub_5F8CE0(_DWORD *this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = sub_60C9E0(a2);
  if ( (_BYTE)result )
  {
    result = sub_60C890(a2);
    for ( i = 0; i < *(this + 85); ++i )
    {
      if ( *(_DWORD *)(*(this + 83) + 4 * i) == a2 )
      {
        *(_DWORD *)(*(this + 83) + 4 * i) = 0;
        return i;
      }
      result = i + 1;
    }
  }
  return result;
}


//======================================================================
// sub_5F8D90
// entry 005f8d90  size 19  status ok
//======================================================================

char *__thiscall sub_5F8D90(char *this)
{
  return this + 316;
}


//======================================================================
// sub_5F8DD0
// entry 005f8dd0  size 68  status ok
//======================================================================

int __thiscall sub_5F8DD0(void *this, CMediaType *a2)
{
  int result; // eax

  result = sub_60C9E0(a2);
  if ( (_BYTE)result )
  {
    sub_60C890(a2);
    return sub_5F8BA0((int)this, a2);
  }
  return result;
}


//======================================================================
// sub_5F8E20
// entry 005f8e20  size 56  status ok
//======================================================================

int __stdcall sub_5F8E20(int a1)
{
  int result; // eax

  result = sub_60C9E0(a1);
  if ( !(_BYTE)result )
    return sub_60C7D0(a1);
  return result;
}


//======================================================================
// sub_5F8E60
// entry 005f8e60  size 56  status ok
//======================================================================

int __stdcall sub_5F8E60(int a1)
{
  int result; // eax

  result = sub_60C9E0(a1);
  if ( (_BYTE)result )
    return sub_60C890(a1);
  return result;
}


//======================================================================
// sub_5F8EA0
// entry 005f8ea0  size 784  status ok
//======================================================================

char __thiscall sub_5F8EA0(int this, int *a2, int a3)
{
  int v5; // [esp+8h] [ebp-88h]
  int v6; // [esp+Ch] [ebp-84h]
  int v7; // [esp+18h] [ebp-78h]
  int v8; // [esp+1Ch] [ebp-74h]
  _DWORD *v9; // [esp+20h] [ebp-70h]
  int v10; // [esp+24h] [ebp-6Ch] BYREF
  int v11; // [esp+28h] [ebp-68h]
  int v12; // [esp+2Ch] [ebp-64h]
  int v13; // [esp+30h] [ebp-60h]
  _DWORD v14[4]; // [esp+34h] [ebp-5Ch] BYREF
  int v15; // [esp+44h] [ebp-4Ch]
  _OWORD v16[4]; // [esp+48h] [ebp-48h] BYREF
  int i; // [esp+8Ch] [ebp-4h]

  if ( this )
  {
    if ( sub_5F88F0((unsigned __int8 *)this) )
    {
      return 0;
    }
    else if ( sub_5EC3A0(v14, (int *)(this + 384), a2) )
    {
      v15 = sub_624C50(a2, this + 384, v16);
      for ( i = 0; i < v15; ++i )
      {
        v7 = sub_5F84F0((_DWORD *)this);
        v8 = unknown_libname_619(this);
        v9 = &v16[i];
        *v9 += v8;
        v9[1] += v7;
        v9[2] += v8;
        v9[3] += v7;
        sub_630130(*(_DWORD *)(this + 424), &v16[i], this);
      }
      if ( !*(_DWORD *)(this + 380) && !*(_BYTE *)(this + 376) )
      {
        if ( !*(_DWORD *)(this + 380) && !*(_BYTE *)(this + 376) )
          sub_5E9F20("m_poBackground || useBackgroundColor", "..\\scilib\\sciplane.cpp", 575);
        sub_5F8A40(0, 0, 0);
      }
      if ( *(_BYTE *)(this + 376) )
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)this + 20))(this, *a2, a2[1], a2[2], a2[3]);
      if ( *(_DWORD *)(this + 380) )
        (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 380) + 156))(*(_DWORD *)(this + 380), a2);
      if ( byte_7960CD )
        sub_623950(a2);
      sub_5F91B0(a2, 0);
      v10 = *a2;
      v11 = a2[1];
      v12 = a2[2];
      v13 = a2[3];
      v5 = sub_5F84F0((_DWORD *)this);
      v6 = unknown_libname_619(this);
      v10 += v6;
      v11 += v5;
      v12 += v6;
      v13 += v5;
      sub_630280(*(_DWORD *)(this + 424), &v10, this, a3);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 551);
    return 0;
  }
}


//======================================================================
// sub_5F91B0
// entry 005f91b0  size 291  status ok
//======================================================================

char __thiscall sub_5F91B0(unsigned __int8 *this, _DWORD *a2, char a3)
{
  unsigned __int8 *v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  if ( this )
  {
    if ( sub_5F88F0(this) )
    {
      return 0;
    }
    else
    {
      if ( a3 )
      {
        if ( *(this + 376) )
          (*(void (__thiscall **)(unsigned __int8 *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 20))(
            this,
            *a2,
            a2[1],
            a2[2],
            a2[3]);
        if ( *((_DWORD *)this + 95) )
          (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 95) + 156))(*((_DWORD *)this + 95), a2);
      }
      for ( i = CRecentFileList::GetSize((CRecentFileList *)(this + 316)) - 1; i >= 0; --i )
      {
        v5 = (unsigned __int8 *)sub_60CA40(i);
        if ( v5 )
        {
          if ( sub_5F54A0(v5) )
            (*(void (__thiscall **)(unsigned __int8 *, _DWORD *))(*(_DWORD *)v5 + 156))(v5, a2);
        }
      }
      return 1;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 603);
    return 0;
  }
}


//======================================================================
// sub_5F92E0
// entry 005f92e0  size 66  status ok
//======================================================================

int __thiscall sub_5F92E0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  return sub_624780(a2, a3, a4, a5, *(this + 93), 4);
}


//======================================================================
// sub_5F9330
// entry 005f9330  size 70  status ok
//======================================================================

int __thiscall sub_5F9330(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v7; // [esp-Ch] [ebp-14h]

  v7 = a3 + sub_5F84F0(this);
  v5 = unknown_libname_619(this);
  return sub_623AB0(a2 + v5, v7, a4, a5);
}


//======================================================================
// sub_5F9380
// entry 005f9380  size 82  status ok
//======================================================================

int __thiscall sub_5F9380(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v8; // [esp-10h] [ebp-18h]
  int v9; // [esp-Ch] [ebp-14h]

  v9 = a4 + sub_5F84F0(this);
  v8 = a3 + unknown_libname_619(this);
  v6 = unknown_libname_619(this);
  return sub_623C60(a2 + v6, v8, v9, a5, a6);
}


//======================================================================
// sub_5F93E0
// entry 005f93e0  size 82  status ok
//======================================================================

int __thiscall sub_5F93E0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v8; // [esp-10h] [ebp-18h]
  int v9; // [esp-Ch] [ebp-14h]

  v9 = a4 + sub_5F84F0(this);
  v8 = a3 + sub_5F84F0(this);
  v6 = unknown_libname_619(this);
  return sub_623F00(a2 + v6, v8, v9, a5, a6);
}


//======================================================================
// sub_5F9440
// entry 005f9440  size 94  status ok
//======================================================================

int __thiscall sub_5F9440(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v9; // [esp-14h] [ebp-1Ch]
  int v10; // [esp-10h] [ebp-18h]
  int v11; // [esp-Ch] [ebp-14h]

  v11 = a5 + sub_5F84F0(this);
  v10 = a4 + unknown_libname_619(this);
  v9 = a3 + sub_5F84F0(this);
  v7 = unknown_libname_619(this);
  return sub_6241C0(a2 + v7, v9, v10, v11, a6, a7);
}


//======================================================================
// sub_5F9500
// entry 005f9500  size 134  status ok
//======================================================================

int __thiscall sub_5F9500(int this, int *a2)
{
  int v4; // [esp+Ch] [ebp-18h]
  int v5; // [esp+10h] [ebp-14h]
  int v6; // [esp+14h] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-Ch]
  int v8; // [esp+1Ch] [ebp-8h]
  int v9; // [esp+20h] [ebp-4h]

  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v4 = sub_5F84F0((_DWORD *)this);
  v5 = unknown_libname_619(this);
  v6 += v5;
  v7 += v4;
  v8 += v5;
  v9 += v4;
  return (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 424) + 20))(*(_DWORD *)(this + 424), &v6);
}


//======================================================================
// sub_5F9590
// entry 005f9590  size 42  status ok
//======================================================================

int __thiscall sub_5F9590(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = *(this + 107);
  *(this + 107) = a2;
  return v3;
}


//======================================================================
// sub_5F95E0
// entry 005f95e0  size 1174  status ok
//======================================================================

int __thiscall sub_5F95E0(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int *v6; // eax
  _DWORD *v7; // eax
  int v8; // [esp-4h] [ebp-6Ch]
  int v9; // [esp+10h] [ebp-58h]
  int v11[4]; // [esp+2Ch] [ebp-3Ch] BYREF
  int v12[4]; // [esp+3Ch] [ebp-2Ch] BYREF
  void *v13; // [esp+4Ch] [ebp-1Ch]
  int v14; // [esp+50h] [ebp-18h]
  void (__thiscall ***v15)(_DWORD, int); // [esp+54h] [ebp-14h]
  void (__thiscall ***v16)(_DWORD, int); // [esp+58h] [ebp-10h]
  int v17; // [esp+64h] [ebp-4h]

  sub_5F9A80(this);
  result = this;
  if ( *(_DWORD *)(this + 276) )
  {
    if ( !*(_DWORD *)(this + 380) )
    {
      v13 = operator new(0x178u);
      v17 = 0;
      if ( v13 )
      {
        sub_5EAAF0(v13);
        v9 = v2;
      }
      else
      {
        v9 = 0;
      }
      v14 = v9;
      v17 = -1;
      *(_DWORD *)(this + 380) = v9;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 380) + 116))(*(_DWORD *)(this + 380));
      *(_DWORD *)(*(_DWORD *)(this + 380) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 380) + 64))(*(_DWORD *)(this + 380));
      sub_5EB000(*(CMFCRibbonButton **)(this + 380), 0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 380) + 176))(*(_DWORD *)(this + 380), 0);
    }
    sub_5EAF00(*(_DWORD *)(this + 380), *(_DWORD *)(this + 276));
    sub_5EB000(*(CMFCRibbonButton **)(this + 380), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 380) + 176))(
      *(_DWORD *)(this + 380),
      *(_DWORD *)(this + 280));
    if ( sub_5EB470(*(_DWORD **)(this + 380)) || sub_5EB4B0(*(_DWORD **)(this + 380)) )
    {
      v8 = -sub_5EB4B0(*(_DWORD **)(this + 380));
      v3 = sub_5EB470(*(_DWORD **)(this + 380));
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 68))(*(_DWORD *)(this + 380), -v3, v8);
      *(_DWORD *)(this + 264) = sub_5EB470(*(_DWORD **)(this + 380));
      *(_DWORD *)(this + 260) = sub_5EB4B0(*(_DWORD **)(this + 380));
      v4 = sub_5EB470(*(_DWORD **)(this + 380));
      *(_DWORD *)(this + 272) = sub_5F5550(*(_DWORD **)(this + 380)) + v4;
      v5 = sub_5EB4B0(*(_DWORD **)(this + 380));
      *(_DWORD *)(this + 268) = sub_5F5590(*(_DWORD **)(this + 380)) + v5;
    }
    else
    {
      *(_DWORD *)(this + 272) = *(_DWORD *)(this + 264) + sub_5F5550(*(_DWORD **)(this + 380));
      *(_DWORD *)(this + 268) = *(_DWORD *)(this + 260) + sub_5F5590(*(_DWORD **)(this + 380));
      if ( *(_DWORD *)(this + 272) == *(_DWORD *)(this + 264) )
        *(_DWORD *)(this + 272) = *(_DWORD *)(this + 264) + sub_5F8550(*(_DWORD **)(dword_15E55E8 + 20));
      if ( *(_DWORD *)(this + 268) == *(_DWORD *)(this + 260) )
        *(_DWORD *)(this + 268) = *(_DWORD *)(this + 260) + sub_5F8570(*(_DWORD **)(dword_15E55E8 + 20));
      if ( byte_795FB8
        && this == *(_DWORD *)(dword_15E55E8 + 20)
        && (*(_DWORD *)(this + 272) != (unsigned __int16)sub_613600(*(_DWORD *)(*(_DWORD *)(dword_15E55E8 + 20) + 424))
         || *(_DWORD *)(this + 268) != (unsigned __int16)sub_613620(*(_DWORD *)(*(_DWORD *)(dword_15E55E8 + 20) + 424))) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_15E55E8 + 20) + 424) + 52))(*(_DWORD *)(*(_DWORD *)(dword_15E55E8 + 20) + 424));
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(dword_15E55E8 + 20) + 424) + 4))(
          *(_DWORD *)(*(_DWORD *)(dword_15E55E8 + 20) + 424),
          *(_DWORD *)(this + 272),
          *(_DWORD *)(this + 268));
      }
    }
    *(_BYTE *)(this + 376) = 0;
    v6 = sub_5EBAC0(*(_DWORD **)(this + 380), v12);
    *(_DWORD *)(this + 384) = *v6;
    *(_DWORD *)(this + 388) = v6[1];
    *(_DWORD *)(this + 392) = v6[2];
    *(_DWORD *)(this + 396) = v6[3];
    v7 = sub_5EBF80(*(_DWORD **)(this + 380), v11);
    *(_DWORD *)(this + 400) = *v7;
    *(_DWORD *)(this + 404) = v7[1];
    *(_DWORD *)(this + 408) = v7[2];
    *(_DWORD *)(this + 412) = v7[3];
    sub_5F9A80(this);
    return sub_5F8CE0((_DWORD *)this, *(_DWORD *)(this + 380));
  }
  else if ( *(_DWORD *)(this + 380) )
  {
    v15 = *(void (__thiscall ****)(_DWORD, int))(this + 380);
    v16 = v15;
    if ( v15 )
      (**v16)(v16, 1);
    result = this;
    *(_DWORD *)(this + 380) = 0;
  }
  return result;
}


//======================================================================
// sub_5F9A80
// entry 005f9a80  size 120  status ok
//======================================================================

int __thiscall sub_5F9A80(int this)
{
  int v2; // [esp+Ch] [ebp-20h]
  int v3; // [esp+10h] [ebp-1Ch]
  int v4; // [esp+14h] [ebp-18h]
  _DWORD v5[4]; // [esp+1Ch] [ebp-10h] BYREF

  v2 = *(_DWORD *)(this + 268);
  v3 = *(_DWORD *)(this + 272);
  v4 = *(_DWORD *)(this + 260);
  v5[0] = *(_DWORD *)(this + 264);
  v5[1] = v4;
  v5[2] = v3;
  v5[3] = v2;
  return (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 424) + 20))(*(_DWORD *)(this + 424), v5);
}


//======================================================================
// sub_5F9B00
// entry 005f9b00  size 29  status ok
//======================================================================

int __thiscall sub_5F9B00(void *this)
{
  return sub_60C840(this);
}


//======================================================================
// sub_5F9B20
// entry 005f9b20  size 29  status ok
//======================================================================

int __thiscall sub_5F9B20(void *this)
{
  return sub_60C890(this);
}


//======================================================================
// sub_5F9B40
// entry 005f9b40  size 198  status ok
//======================================================================

void (__thiscall ****__stdcall sub_5F9B40(
        void (__thiscall ****a1)(_DWORD, _DWORD),
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        void (__thiscall ***a9)(_DWORD, _DWORD),
        int a10,
        char a11,
        char a12))(_DWORD, _DWORD)
{
  _DWORD *v13; // [esp+4h] [ebp-1Ch]
  _DWORD *v14; // [esp+Ch] [ebp-14h]

  if ( !a1 )
  {
    v14 = operator new(0x190u);
    if ( v14 )
      v13 = sub_5F5F50(v14);
    else
      v13 = 0;
    a1 = (void (__thiscall ****)(_DWORD, _DWORD))v13;
  }
  sub_5F9C10(a1, a2, a3, a4, a5, a6, a7, a8, a10, a11, a12);
  sub_5F6050(a1, a9);
  return a1;
}


//======================================================================
// sub_5F9C10
// entry 005f9c10  size 202  status ok
//======================================================================

_DWORD *__stdcall sub_5F9C10(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        void (__thiscall ***a8)(_DWORD, _DWORD),
        int a9,
        char a10,
        char a11)
{
  _DWORD *v12; // [esp+4h] [ebp-1Ch]
  _DWORD *v13; // [esp+Ch] [ebp-14h]

  if ( !a1 )
  {
    v13 = operator new(0x184u);
    if ( v13 )
      v12 = sub_5F5BF0(v13);
    else
      v12 = 0;
    a1 = v12;
  }
  sub_5F9CE0(a1, a2, a3, a4, a5, a6, a9, a10, a11);
  sub_5F5D50(a1, a7);
  sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))a1, a8);
  return a1;
}


//======================================================================
// sub_5F9CE0
// entry 005f9ce0  size 243  status ok
//======================================================================

_DWORD *__thiscall sub_5F9CE0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9,
        char a10)
{
  _DWORD *v10; // eax
  _DWORD *v12; // [esp+4h] [ebp-1Ch]
  _DWORD *v14; // [esp+Ch] [ebp-14h]

  if ( !a2 )
  {
    v14 = operator new(0x178u);
    if ( v14 )
    {
      sub_5EAAF0(v14);
      v12 = v10;
    }
    else
    {
      v12 = 0;
    }
    a2 = v12;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_5EAE80(a4, a5, a6, a7, a3);
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 176))(a2, a8);
  sub_5EB5D0(a2, a9);
  sub_5EB700(a2, a10);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5F9DE0
// entry 005f9de0  size 257  status ok
//======================================================================

_DWORD *__thiscall sub_5F9DE0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  int v14; // [esp+0h] [ebp-20h]
  _DWORD *v15; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0x1DCu) )
      v15 = (_DWORD *)Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v14);
    else
      v15 = 0;
    a2 = v15;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_5EAE80(a4, a5, a6, a7, a3);
  if ( a9 != -1 )
    (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, _DWORD, _DWORD))(*a2 + 220))(
      a2,
      a8,
      a9,
      a10,
      a11,
      a12,
      0,
      0);
  sub_6026F0(a13);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5F9EF0
// entry 005f9ef0  size 243  status ok
//======================================================================

_DWORD *__thiscall sub_5F9EF0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v15; // [esp+0h] [ebp-20h]
  _DWORD *v16; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0x208u) )
      v16 = (_DWORD *)Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v15);
    else
      v16 = 0;
    a2 = v16;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_5EAE80(a4, a5, a6, a7, a3);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int))(*a2 + 220))(a2, a8, a9, a10, a11, a12, a13);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5F9FF0
// entry 005f9ff0  size 483  status ok
//======================================================================

CPaneContainer *__thiscall sub_5F9FF0(
        int this,
        int a2,
        CPaneContainer *a3,
        int a4,
        struct CPaneDivider *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  pairNode *v16; // eax
  int v18; // [esp+4h] [ebp-2Ch]
  CPaneContainer *v19; // [esp+8h] [ebp-28h]
  void *v21; // [esp+10h] [ebp-20h]
  int i; // [esp+20h] [ebp-10h]

  if ( !a3 )
  {
    for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 52)); ++i )
    {
      v16 = (pairNode *)sub_60CA40(i);
      if ( (struct CPaneDivider *)pairNode::raw_length(v16) == a5 )
      {
        a3 = (CPaneContainer *)sub_60CA40(i);
        break;
      }
    }
  }
  if ( !(unsigned __int8)sub_60C9E0(a3) )
  {
    if ( !a3 )
    {
      if ( operator new(0x58u) )
        v19 = (CPaneContainer *)sub_6061C0();
      else
        v19 = 0;
      a3 = v19;
    }
    sub_60C840(a3);
    *((_DWORD *)a3 + 1) = this;
    CPaneContainer::SetPaneDivider(a3, a5);
    (*(void (__thiscall **)(CPaneContainer *))(*(_DWORD *)a3 + 64))(a3);
    (*(void (__thiscall **)(CPaneContainer *, int))(*(_DWORD *)a3 + 108))(a3, a9);
  }
  if ( !a2 )
  {
    v21 = operator new(0x210u);
    if ( v21 )
      v18 = sub_6060A0(v21);
    else
      v18 = 0;
    a2 = v18;
  }
  sub_6062A0(a2);
  sub_5EAE80(a6, a7, a8, a9, a4);
  (*(void (__thiscall **)(int, int, int, int, int, int, int))(*(_DWORD *)a2 + 220))(a2, a10, a11, a12, a13, a14, a15);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
  return a3;
}


//======================================================================
// sub_5FA1E0
// entry 005fa1e0  size 467  status ok
//======================================================================

_AFX_OLE_STATE *__thiscall sub_5FA1E0(
        int this,
        int a2,
        _AFX_OLE_STATE *a3,
        int a4,
        struct CPaneDivider *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  pairNode *v14; // eax
  int v16; // [esp+4h] [ebp-2Ch]
  _AFX_OLE_STATE *v17; // [esp+8h] [ebp-28h]
  void *v19; // [esp+10h] [ebp-20h]
  _AFX_OLE_STATE *v20; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  if ( !a3 )
  {
    for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 68)); ++i )
    {
      v14 = (pairNode *)sub_60CA40(i);
      if ( (struct CPaneDivider *)pairNode::raw_length(v14) == a5 )
      {
        a3 = (_AFX_OLE_STATE *)sub_60CA40(i);
        break;
      }
    }
  }
  if ( !(unsigned __int8)sub_60C9E0(a3) )
  {
    if ( !a3 )
    {
      v20 = (_AFX_OLE_STATE *)operator new(0x58u);
      if ( v20 )
        v17 = _AFX_OLE_STATE::_AFX_OLE_STATE(v20);
      else
        v17 = 0;
      a3 = v17;
    }
    sub_60C840(a3);
    *((_DWORD *)a3 + 1) = this;
    CPaneContainer::SetPaneDivider(a3, a5);
    (*(void (__thiscall **)(_AFX_OLE_STATE *))(*(_DWORD *)a3 + 64))(a3);
    (*(void (__thiscall **)(_AFX_OLE_STATE *, int))(*(_DWORD *)a3 + 108))(a3, a9);
  }
  if ( !a2 )
  {
    v19 = operator new(0x21Cu);
    if ( v19 )
      v16 = sub_5FF310(v19);
    else
      v16 = 0;
    a2 = v16;
  }
  sub_5FF8F0(a2);
  sub_5EAE80(a6, a7, a8, a9, a4);
  sub_5FF4C0(a10, a11, a12, a13, a14);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
  return a3;
}


//======================================================================
// sub_5FA3C0
// entry 005fa3c0  size 485  status ok
//======================================================================

CPaneContainer *__thiscall sub_5FA3C0(
        int this,
        int a2,
        CPaneContainer *a3,
        int a4,
        struct CPaneDivider *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  pairNode *v14; // eax
  int v16; // [esp+4h] [ebp-2Ch]
  _AFX_OLE_STATE *v17; // [esp+8h] [ebp-28h]
  void *v19; // [esp+10h] [ebp-20h]
  _AFX_OLE_STATE *v20; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  if ( !a3 )
  {
    for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 68)); ++i )
    {
      v14 = (pairNode *)sub_60CA40(i);
      if ( (struct CPaneDivider *)pairNode::raw_length(v14) == a5 )
      {
        a3 = (CPaneContainer *)sub_60CA40(i);
        break;
      }
    }
  }
  if ( !(unsigned __int8)sub_60C9E0(a3) )
  {
    if ( !a3 )
    {
      v20 = (_AFX_OLE_STATE *)operator new(0x58u);
      if ( v20 )
      {
        _AFX_OLE_STATE::_AFX_OLE_STATE(v20);
        *(_DWORD *)v20 = &sciPaneGroup::`vftable';
        v17 = v20;
      }
      else
      {
        v17 = 0;
      }
      a3 = v17;
    }
    sub_60C840(a3);
    *((_DWORD *)a3 + 1) = this;
    CPaneContainer::SetPaneDivider(a3, a5);
    (*(void (__thiscall **)(CPaneContainer *))(*(_DWORD *)a3 + 64))(a3);
    (*(void (__thiscall **)(CPaneContainer *, int))(*(_DWORD *)a3 + 108))(a3, a9);
  }
  if ( !a2 )
  {
    v19 = operator new(0x220u);
    if ( v19 )
      v16 = sub_625BF0(v19);
    else
      v16 = 0;
    a2 = v16;
  }
  sub_5FF8F0(a2);
  sub_5EAE80(a6, a7, a8, a9, a4);
  if ( a10 )
    sub_5FF4C0(a10, a11, a12, a13, a14);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
  return a3;
}


//======================================================================
// sub_5FA5B0
// entry 005fa5b0  size 233  status ok
//======================================================================

_DWORD *__thiscall sub_5FA5B0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  _DWORD *v12; // eax
  _DWORD *v14; // [esp+4h] [ebp-1Ch]
  void *v16; // [esp+Ch] [ebp-14h]

  if ( !a2 )
  {
    v16 = operator new(0x1D0u);
    if ( v16 )
    {
      sub_5EC5A0(v16);
      v14 = v12;
    }
    else
    {
      v14 = 0;
    }
    a2 = v14;
  }
  sub_60C840(a2);
  a2[1] = this;
  if ( a12 != -1 )
    sub_5EF3B0(a2, a12);
  sub_5EC8F0(a2, a4, a5, a6, a7, a8, a9, a10, a11, a3);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FA6A0
// entry 005fa6a0  size 239  status ok
//======================================================================

_DWORD *__thiscall sub_5FA6A0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  _DWORD *v16; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0x1FCu) )
      v16 = (_DWORD *)sub_60B4A0();
    else
      v16 = 0;
    a2 = v16;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_60BE20(a4, a5, a6, a8, a7, a9, a10, a11, a12, a13, a15, a3);
  sub_60C0F0(a14);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FA790
// entry 005fa790  size 239  status ok
//======================================================================

_DWORD *__thiscall sub_5FA790(
        void *this,
        _DWORD *a2,
        int a3,
        char *Str,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  int v18; // [esp+4h] [ebp-1Ch]
  void *v20; // [esp+Ch] [ebp-14h]

  if ( !a2 )
  {
    v20 = operator new(0x6Cu);
    if ( v20 )
      v18 = sub_625F10(v20);
    else
      v18 = 0;
    a2 = (_DWORD *)v18;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_6260E0(Str, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a3);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FA880
// entry 005fa880  size 243  status ok
//======================================================================

CPaneContainer *__thiscall sub_5FA880(
        void *this,
        CPaneContainer *a2,
        struct CPaneDivider *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  CPaneContainer *v15; // [esp+4h] [ebp-1Ch]
  _BYTE *v17; // [esp+Ch] [ebp-14h]

  if ( !a2 )
  {
    v17 = operator new(0x5Cu);
    if ( v17 )
      v15 = (CPaneContainer *)sub_5F6130(v17);
    else
      v15 = 0;
    a2 = v15;
  }
  sub_60C840(a2);
  *((_DWORD *)a2 + 1) = this;
  sub_5F61D0(a2, a4, a5, a6, a7, a8, a3);
  sub_5F6490(a2, a9, a10, a11);
  sub_5F6580(a2, a12, a13, a14);
  (*(void (__thiscall **)(CPaneContainer *))(*(_DWORD *)a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FA980
// entry 005fa980  size 259  status ok
//======================================================================

_DWORD *__thiscall sub_5FA980(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        int a13)
{
  int v14; // [esp+4h] [ebp-20h]
  _BYTE v16[3]; // [esp+Dh] [ebp-17h] BYREF
  void *v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+20h] [ebp-4h]

  if ( !a2 )
  {
    v17 = operator new(0x60u);
    v19 = 0;
    if ( v17 )
      v14 = sub_627090(v17);
    else
      v14 = 0;
    v18 = v14;
    v19 = -1;
    a2 = (_DWORD *)v14;
  }
  sub_60C840(a2);
  a2[1] = this;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int))(*a2 + 176))(a2, a4, a5, a6, a7, a8);
  sub_627520(v16, a9, a10, a11);
  sub_627620(a12);
  sub_627680(a13);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FAA90
// entry 005faa90  size 230  status ok
//======================================================================

_DWORD *__thiscall sub_5FAA90(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  _DWORD *v15; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0x84u) )
      v15 = (_DWORD *)sub_604B80();
    else
      v15 = 0;
    a2 = v15;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_604D80(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a3);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FAB80
// entry 005fab80  size 259  status ok
//======================================================================

_DWORD *__thiscall sub_5FAB80(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22)
{
  _DWORD *v23; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0x70u) )
      v23 = (_DWORD *)sub_614810();
    else
      v23 = 0;
    a2 = v23;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_614B60(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a3);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FAC90
// entry 005fac90  size 316  status ok
//======================================================================

_DWORD *__thiscall sub_5FAC90(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        char a31,
        char a32,
        char a33,
        int a34)
{
  _DWORD *v35; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0xCCu) )
      v35 = (_DWORD *)sub_6280D0();
    else
      v35 = 0;
    a2 = v35;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_628540(
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a3);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FADD0
// entry 005fadd0  size 267  status ok
//======================================================================

_DWORD *__thiscall sub_5FADD0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  _DWORD *v25; // [esp+4h] [ebp-1Ch]

  if ( !a2 )
  {
    if ( operator new(0x70u) )
      v25 = (_DWORD *)sub_629E40();
    else
      v25 = 0;
    a2 = v25;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_62A070(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a3);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FAEE0
// entry 005faee0  size 260  status ok
//======================================================================

_DWORD *__thiscall sub_5FAEE0(
        void *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct Concurrency::details::SchedulerBase *a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  _DWORD *v15; // [esp+4h] [ebp-1Ch]
  Concurrency::details::FairScheduleGroup *v17; // [esp+Ch] [ebp-14h]

  if ( !a2 )
  {
    v17 = (Concurrency::details::FairScheduleGroup *)operator new(0x1FCu);
    if ( v17 )
      v15 = (_DWORD *)Concurrency::details::FairScheduleGroup::FairScheduleGroup(
                        v17,
                        a8,
                        (struct Concurrency::location *)2);
    else
      v15 = 0;
    a2 = v15;
  }
  sub_60C840(a2);
  a2[1] = this;
  sub_5EAE80(a4, a5, a6, a7, a3);
  if ( a11 != -1 )
    (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, _DWORD, _DWORD))(*a2 + 220))(
      a2,
      a10,
      a11,
      a12,
      a13,
      a14,
      0,
      0);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 116))(a2);
  return a2;
}


//======================================================================
// sub_5FB000
// entry 005fb000  size 45  status ok
//======================================================================

int __stdcall sub_5FB000(int a1)
{
  int result; // eax

  if ( dword_15E55E4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E4 + 20))(dword_15E55E4, a1);
  return result;
}


//======================================================================
// sub_5FB030
// entry 005fb030  size 45  status ok
//======================================================================

int __stdcall sub_5FB030(int a1)
{
  int result; // eax

  if ( dword_15E55E4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E4 + 24))(dword_15E55E4, a1);
  return result;
}


//======================================================================
// sub_5FB060
// entry 005fb060  size 45  status ok
//======================================================================

int __stdcall sub_5FB060(int a1)
{
  int result; // eax

  if ( dword_15E55E4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E4 + 28))(dword_15E55E4, a1);
  return result;
}


//======================================================================
// sub_5FB090
// entry 005fb090  size 45  status ok
//======================================================================

int __stdcall sub_5FB090(int a1)
{
  int result; // eax

  if ( dword_15E55E4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E4 + 32))(dword_15E55E4, a1);
  return result;
}


//======================================================================
// sub_5FB0C0
// entry 005fb0c0  size 235  status ok
//======================================================================

char __thiscall sub_5FB0C0(char *this)
{
  if ( !this )
    return sub_5E9F20("false", "..\\scilib\\sciplane.cpp", 1201);
  sub_60C910(this + 4);
  sub_60C910(this + 20);
  sub_60C910(this + 36);
  sub_60C910(this + 52);
  sub_60C910(this + 68);
  sub_60C910(this + 84);
  sub_60C910(this + 100);
  sub_60C910(this + 164);
  sub_60C910(this + 180);
  sub_60C910(this + 196);
  sub_60C910(this + 148);
  sub_60C910(this + 212);
  sub_60C910(this + 116);
  sub_60C910(this + 132);
  return sub_60C910(this + 228);
}


//======================================================================
// sub_5FB1B0
// entry 005fb1b0  size 94  status ok
//======================================================================

int __stdcall sub_5FB1B0(int a1, CRecentFileList *a2)
{
  pairNode *v2; // eax
  int Size; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  Size = CRecentFileList::GetSize(a2);
  for ( i = 0; i < Size; ++i )
  {
    v2 = (pairNode *)sub_60CA40(i);
    if ( pairNode::raw_length(v2) == a1 )
      return sub_60CA40(i);
  }
  return 0;
}


//======================================================================
// sub_5FB210
// entry 005fb210  size 73  status ok
//======================================================================

int __thiscall sub_5FB210(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 4));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciActor `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB2B0
// entry 005fb2b0  size 73  status ok
//======================================================================

int __thiscall sub_5FB2B0(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 4));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciView `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB300
// entry 005fb300  size 73  status ok
//======================================================================

int __thiscall sub_5FB300(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 20));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciButton `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB350
// entry 005fb350  size 73  status ok
//======================================================================

int __thiscall sub_5FB350(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 36));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciCheckBox `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB3A0
// entry 005fb3a0  size 73  status ok
//======================================================================

int __thiscall sub_5FB3A0(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 52));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciRadioButtonGroup `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB3F0
// entry 005fb3f0  size 52  status ok
//======================================================================

int __thiscall sub_5FB3F0(void *this, int a2, int a3)
{
  if ( sub_5FB3A0((int)this, a3) )
    return sub_606380(a2);
  else
    return 0;
}


//======================================================================
// sub_5FB430
// entry 005fb430  size 73  status ok
//======================================================================

int __thiscall sub_5FB430(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 68));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciTabGroup `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB480
// entry 005fb480  size 52  status ok
//======================================================================

int __thiscall sub_5FB480(void *this, int a2, int a3)
{
  if ( sub_5FB430((int)this, a3) )
    return sub_5FF940(a2);
  else
    return 0;
}


//======================================================================
// sub_5FB4C0
// entry 005fb4c0  size 73  status ok
//======================================================================

int __thiscall sub_5FB4C0(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 68));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciPaneGroup `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB510
// entry 005fb510  size 52  status ok
//======================================================================

int __thiscall sub_5FB510(void *this, int a2, int a3)
{
  if ( sub_5FB4C0((int)this, a3) )
    return sub_5FF940(a2);
  else
    return 0;
}


//======================================================================
// sub_5FB550
// entry 005fb550  size 73  status ok
//======================================================================

int __thiscall sub_5FB550(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 84));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciText `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB5A0
// entry 005fb5a0  size 56  status ok
//======================================================================

int __thiscall sub_5FB5A0(void *this, int a2, int a3)
{
  int result; // eax

  result = sub_5FB550((int)this, a2);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 180))(result, a3);
  return result;
}


//======================================================================
// sub_5FB5E0
// entry 005fb5e0  size 75  status ok
//======================================================================

int __thiscall sub_5FB5E0(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 228));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciDropListButton `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB630
// entry 005fb630  size 75  status ok
//======================================================================

int __thiscall sub_5FB630(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 180));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciRect `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB720
// entry 005fb720  size 73  status ok
//======================================================================

int __thiscall sub_5FB720(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 116));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciListBox `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB7C0
// entry 005fb7c0  size 75  status ok
//======================================================================

int __thiscall sub_5FB7C0(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 132));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciSpinBox `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB810
// entry 005fb810  size 73  status ok
//======================================================================

int __thiscall sub_5FB810(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 100));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciEditBox `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB860
// entry 005fb860  size 75  status ok
//======================================================================

int __thiscall sub_5FB860(int this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5FB1B0(a2, (CRecentFileList *)(this + 148));
  if ( v3 )
    return _RTDynamicCast(v3, 0, &sciFeature `RTTI Type Descriptor', &sciSlider `RTTI Type Descriptor', 0);
  else
    return 0;
}


//======================================================================
// sub_5FB8B0
// entry 005fb8b0  size 56  status ok
//======================================================================

int __thiscall sub_5FB8B0(void *this, int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_5FB810((int)this, a2);
  if ( v4 )
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)v4 + 184))(v4, this);
  else
    return 0;
}


//======================================================================
// sub_5FB8F0
// entry 005fb8f0  size 56  status ok
//======================================================================

int __thiscall sub_5FB8F0(void *this, int a2, int a3)
{
  int result; // eax

  result = sub_5FB810((int)this, a2);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 180))(result, a3);
  return result;
}


//======================================================================
// sub_5FB930
// entry 005fb930  size 172  status ok
//======================================================================

int __stdcall sub_5FB930(pairNode *a1, int a2, CRecentFileList *a3, char a4)
{
  int result; // eax
  pairNode *v5; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize(a3);
    if ( i >= result )
      break;
    v5 = (pairNode *)sub_60CA40(i);
    if ( v5 == a1 || a2 != -1 && pairNode::raw_length(v5) == a2 )
    {
      result = sub_60C890(v5);
      if ( a4 )
      {
        (*(void (__thiscall **)(pairNode *))(*(_DWORD *)v5 + 112))(v5);
        result = (int)v5;
        if ( v5 )
          return (**(int (__thiscall ***)(pairNode *, int))v5)(v5, 1);
      }
      return result;
    }
  }
  return result;
}


//======================================================================
// sub_5FB9E0
// entry 005fb9e0  size 323  status ok
//======================================================================

int __thiscall sub_5FB9E0(int this, pairNode *a2, int a3)
{
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 4), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 20), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 36), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 52), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 84), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 180), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 196), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 116), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 100), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 132), 0);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 228), 0);
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 164), 0);
}


//======================================================================
// sub_5FBB30
// entry 005fbb30  size 323  status ok
//======================================================================

int __thiscall sub_5FBB30(int this, pairNode *a2, int a3)
{
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 4), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 20), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 36), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 52), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 84), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 180), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 196), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 116), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 100), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 132), 1);
  sub_5FB930(a2, a3, (CRecentFileList *)(this + 228), 1);
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 164), 1);
}


//======================================================================
// sub_5FBC80
// entry 005fbc80  size 38  status ok
//======================================================================

int __thiscall sub_5FBC80(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 4), 1);
}


//======================================================================
// sub_5FBCB0
// entry 005fbcb0  size 38  status ok
//======================================================================

int __thiscall sub_5FBCB0(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 20), 1);
}


//======================================================================
// sub_5FBCE0
// entry 005fbce0  size 38  status ok
//======================================================================

int __thiscall sub_5FBCE0(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 36), 1);
}


//======================================================================
// sub_5FBD10
// entry 005fbd10  size 38  status ok
//======================================================================

int __thiscall sub_5FBD10(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 52), 1);
}


//======================================================================
// sub_5FBD40
// entry 005fbd40  size 38  status ok
//======================================================================

int __thiscall sub_5FBD40(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 84), 1);
}


//======================================================================
// sub_5FBD70
// entry 005fbd70  size 40  status ok
//======================================================================

int __thiscall sub_5FBD70(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 180), 1);
}


//======================================================================
// sub_5FBDD0
// entry 005fbdd0  size 38  status ok
//======================================================================

int __thiscall sub_5FBDD0(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 116), 1);
}


//======================================================================
// sub_5FBE00
// entry 005fbe00  size 38  status ok
//======================================================================

int __thiscall sub_5FBE00(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 100), 1);
}


//======================================================================
// sub_5FBE30
// entry 005fbe30  size 40  status ok
//======================================================================

int __thiscall sub_5FBE30(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 132), 1);
}


//======================================================================
// sub_5FBE60
// entry 005fbe60  size 40  status ok
//======================================================================

int __thiscall sub_5FBE60(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 228), 1);
}


//======================================================================
// sub_5FBE90
// entry 005fbe90  size 40  status ok
//======================================================================

int __thiscall sub_5FBE90(int this, pairNode *a2, int a3)
{
  return sub_5FB930(a2, a3, (CRecentFileList *)(this + 164), 1);
}


//======================================================================
// sub_5FBEC0
// entry 005fbec0  size 273  status ok
//======================================================================

_DWORD *__thiscall sub_5FBEC0(_DWORD *this, int a2, int a3)
{
  int v4; // [esp-4h] [ebp-28h]
  _DWORD *v5; // [esp+4h] [ebp-20h]
  _DWORD *v7; // [esp+Ch] [ebp-18h]

  CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0, *(_DWORD *)(dword_15E55E8 + 20), a2, a3);
  *this = &sciPrintPlane::`vftable';
  v7 = operator new(0x8Cu);
  if ( v7 )
  {
    sub_6131B0();
    *v7 = &PrintCanvas::`vftable';
    sub_613360(a2, a3);
    v5 = v7;
  }
  else
  {
    v5 = 0;
  }
  *(this + 106) = v5;
  *((_BYTE *)this + 360) = 1;
  HIBYTE(v4) = HIBYTE(this);
  LOWORD(v4) = -1;
  BYTE2(v4) = -1;
  sub_5F8A80((int)this, v4);
  sub_5F85D0((int)this);
  return this;
}


//======================================================================
// sub_5FC060
// entry 005fc060  size 53  status ok
//======================================================================

void *__thiscall sub_5FC060(_DWORD *this, char a2)
{
  void *v3; // [esp+0h] [ebp-4h]

  *this = &PrintCanvas::`vftable';
  sub_6132A0(this);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}


//======================================================================
// sub_5FC0D0
// entry 005fc0d0  size 123  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5FC0D0(ATL::CCRTHeap *this, int a2)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &sciScript::`vftable';
  *((_DWORD *)this + 4) = a2;
  if ( *((_DWORD *)this + 4) )
    *(_DWORD *)(*((_DWORD *)this + 4) + 8) = this;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 7) = -1;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 1) = 0;
  return this;
}


//======================================================================
// sub_5FC150
// entry 005fc150  size 197  status ok
//======================================================================

void __thiscall sub_5FC150(int this)
{
  *(_DWORD *)this = &sciScript::`vftable';
  sub_608980(this);
  sub_5FC420(0);
  if ( *(_DWORD *)(this + 16) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 16) + 28))(*(_DWORD *)(this + 16), 0);
    *(_DWORD *)(*(_DWORD *)(this + 16) + 8) = 0;
  }
  if ( *(_DWORD *)(this + 8) )
    *(_DWORD *)(*(_DWORD *)(this + 8) + 16) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 8) = 0;
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_5FC220
// entry 005fc220  size 39  status ok
//======================================================================

int __thiscall sub_5FC220(_DWORD *this, int a2)
{
  *(this + 3) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 8))(this, 0, 0);
}


//======================================================================
// sub_5FC250
// entry 005fc250  size 79  status ok
//======================================================================

int __fastcall sub_5FC250(int a1)
{
  int result; // eax

  result = a1;
  if ( *(_DWORD *)(a1 + 4) )
    return sub_5FC250(*(_DWORD *)(a1 + 4));
  if ( *(_DWORD *)(a1 + 24) )
  {
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    if ( result >= *(_DWORD *)(a1 + 24) )
    {
      *(_DWORD *)(a1 + 24) = 0;
      return sub_5FC3D0(a1);
    }
  }
  return result;
}


//======================================================================
// sub_5FC2E0
// entry 005fc2e0  size 45  status ok
//======================================================================

int __thiscall sub_5FC2E0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = (int)this;
  *(this + 7) = a2;
  if ( a3 > -1 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, a3);
  return result;
}


//======================================================================
// sub_5FC310
// entry 005fc310  size 37  status ok
//======================================================================

int __thiscall sub_5FC310(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, a2, 60 * a3);
}


//======================================================================
// sub_5FC3A0
// entry 005fc3a0  size 38  status ok
//======================================================================

int __thiscall sub_5FC3A0(CBaseTransition *this, struct CAnimationVariable *a2)
{
  CBaseTransition::SetRelatedVariable(this, a2);
  return (*(int (__thiscall **)(CBaseTransition *))(*(_DWORD *)this + 24))(this);
}


//======================================================================
// sub_5FC3D0
// entry 005fc3d0  size 75  status ok
//======================================================================

int __thiscall sub_5FC3D0(CAtlAllocator *this)
{
  int result; // eax
  struct CAtlTraceProcess *Process; // eax

  result = CMFCScanliner::channels((CMFCScanliner *)dword_15E55E8);
  if ( !(_BYTE)result )
  {
    if ( *((_DWORD *)this + 1) )
    {
      return sub_5FC3D0(*((_DWORD *)this + 1));
    }
    else
    {
      Process = CAtlAllocator::GetProcess(this);
      return (*(int (__thiscall **)(CAtlAllocator *, struct CAtlTraceProcess *))(*(_DWORD *)this + 20))(this, Process);
    }
  }
  return result;
}


//======================================================================
// sub_5FC420
// entry 005fc420  size 104  status ok
//======================================================================

int __thiscall sub_5FC420(void (__thiscall ****this)(_DWORD, _DWORD), void (__thiscall ***a2)(_DWORD, _DWORD))
{
  int result; // eax

  if ( *(this + 1) )
    (***(this + 1))(*(this + 1), 1);
  *(this + 1) = a2;
  result = (int)this;
  if ( *(this + 1) )
    return sub_5FC220(*(this + 1), (int)this);
  return result;
}


//======================================================================
// sub_5FC490
// entry 005fc490  size 33  status ok
//======================================================================

int __thiscall sub_5FC490(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 60 * a2);
}


//======================================================================
// sub_5FC4C0
// entry 005fc4c0  size 33  status ok
//======================================================================

int __thiscall sub_5FC4C0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  *(this + 6) = result;
  return result;
}


//======================================================================
// sub_5FC680
// entry 005fc680  size 186  status ok
//======================================================================

int __thiscall sub_5FC680(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v8; // [esp+4h] [ebp-10h]
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]

  sub_603120(0, 0, 0);
  *this = &sciMenuButton::`vftable';
  *(this + 123) = a2;
  *(this + 122) = a3;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 64))(dword_15E55E8);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E8 + 60))(dword_15E55E8, v3);
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E8 + 68))(dword_15E55E8, v4);
  sub_603190(v5, v9, v10);
  return v8;
}


//======================================================================
// sub_5FC760
// entry 005fc760  size 136  status ok
//======================================================================

CComCtlWrapper *__thiscall sub_5FC760(int *this)
{
  int v2; // eax
  int v3; // [esp-10h] [ebp-14h]
  int v4; // [esp-Ch] [ebp-10h]

  if ( sub_5F2920((void *)dword_15E55E4, *(this + 123)) )
    return (CComCtlWrapper *)sub_5F2840((void *)dword_15E55E4, *(this + 123));
  sub_5F2870((char *)dword_15E55E4);
  v4 = *(this + 122);
  v3 = (*(int (__thiscall **)(int *))(*this + 84))(this);
  v2 = (*(int (__thiscall **)(int *))(*this + 76))(this);
  return sub_5F2670((char *)dword_15E55E4, *(this + 123), v2, v3, v4, 0, 0);
}


//======================================================================
// sub_5FC850
// entry 005fc850  size 212  status ok
//======================================================================

int __thiscall sub_5FC850(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+4h] [ebp-10h]
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]

  sub_603120(0, 0, 0);
  *this = &sciMenuItem::`vftable';
  *(this + 122) = a2;
  *(this + 124) = a3;
  *(this + 1) = a3;
  *(this + 123) = -1;
  *(this + 125) = 0;
  *(this + 126) = 0;
  *(this + 128) = 0;
  v3 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8 + 68))(dword_15E55E8, 0, 0);
  sub_603190(v3, v7, v8);
  return v6;
}


//======================================================================
// sub_5FC930
// entry 005fc930  size 405  status ok
//======================================================================

int __thiscall sub_5FC930(_DWORD *this)
{
  *this = &sciMenuItem::`vftable';
  *(this + 124) = 0;
  if ( *(this + 125) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 125) + 112))(*(this + 125));
    if ( *(this + 125) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + 125))(*(this + 125), 1);
    *(this + 125) = 0;
  }
  if ( *(this + 126) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 112))(*(this + 126));
    if ( *(this + 126) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + 126))(*(this + 126), 1);
    *(this + 126) = 0;
  }
  if ( *(this + 128) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 128) + 112))(*(this + 128));
    if ( *(this + 128) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + 128))(*(this + 128), 1);
    *(this + 128) = 0;
  }
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_5FCAD0
// entry 005fcad0  size 383  status ok
//======================================================================

int __thiscall sub_5FCAD0(int *this, int a2)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, _DWORD); // [esp+4h] [ebp-1Ch]

  sub_602020(a2);
  result = pairNode::raw_length((pairNode *)this);
  if ( result != -2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*this + 132))(this, a2) )
    {
      result = sub_5FF0A0(*(this + 124));
      if ( *(this + 123) != -1 )
      {
        result = (unsigned __int8)sub_6026D0(this);
        if ( (_BYTE)result )
        {
          result = (unsigned __int8)sub_5F2920((void *)dword_15E55E4, *(this + 123));
          if ( !(_BYTE)result && !*(this + 95) )
          {
            if ( operator new(0x24u) )
              v3 = (void (__thiscall ***)(_DWORD, _DWORD))sub_5FF190(this, 0);
            else
              v3 = 0;
            result = (int)sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, v3);
          }
        }
      }
      if ( *(this + 123) == -1 )
        return sub_5FEFF0(*(this + 124));
    }
    else
    {
      if ( sub_5F2920((void *)dword_15E55E4, *(this + 123)) && (unsigned __int8)sub_5FCC50(a2) )
        (*(void (__thiscall **)(int *, int))(*this + 216))(this, 3);
      return (int)sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
    }
  }
  return result;
}


//======================================================================
// sub_5FCC50
// entry 005fcc50  size 215  status ok
//======================================================================

char __thiscall sub_5FCC50(int *this, int a2)
{
  int v3; // [esp+0h] [ebp-14h]
  int v4; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0;
        i < Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(
              *(this + 124),
              v3);
        ++i )
  {
    v5 = sub_5FF080(i);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 132))(v5, a2) )
      return 0;
    v4 = sub_5FB2B0(*(this + 124), 0);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 132))(v4, a2) )
      return 0;
    v3 = sub_5FB2B0(*(this + 124), 1);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 132))(v3, a2) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_5FCD30
// entry 005fcd30  size 555  status ok
//======================================================================

int __thiscall sub_5FCD30(int this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // [esp-4h] [ebp-14h]
  int v14; // [esp-4h] [ebp-14h]
  unsigned __int8 v16; // [esp+Fh] [ebp-1h]

  v13 = sub_6026D0(this);
  v1 = pairNode::raw_length((pairNode *)this);
  v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E4 + 80))(dword_15E55E4, v1, v13);
  if ( v16 != (unsigned __int8)sub_6026D0(this) )
  {
    if ( v16 )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 204))(this);
    else
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 208))(this);
  }
  sub_602500(this);
  result = pairNode::raw_length((pairNode *)this);
  if ( result == -2 )
    return sub_603190(0, 0, 0);
  if ( *(_DWORD *)(this + 504) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v3);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 68))(*(_DWORD *)(this + 504), v4);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 116))(*(_DWORD *)(this + 504));
  }
  if ( *(_DWORD *)(this + 500) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v5 - 1);
    v7 = sub_5F5550((_DWORD *)this) + v6;
    v8 = sub_5F5550(*(_DWORD **)(this + 500));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 500) + 68))(*(_DWORD *)(this + 500), v7 - v8 - 10);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 500) + 116))(*(_DWORD *)(this + 500));
  }
  if ( *(_DWORD *)(this + 512) )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v9 - 1);
    v11 = sub_5F5550((_DWORD *)this) + v10;
    v12 = sub_5F5550(*(_DWORD **)(this + 512));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 512) + 68))(*(_DWORD *)(this + 512), v11 - v12 - 10);
    HIBYTE(v14) = HIBYTE(this);
    LOWORD(v14) = word_75EE1C;
    BYTE2(v14) = byte_75EE1E;
    sub_5ECD00(*(_DWORD **)(this + 512), *(_DWORD *)(*(_DWORD *)(this + 400) + 96), -1, v14);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 512) + 116))(*(_DWORD *)(this + 512));
  }
  return result;
}


//======================================================================
// sub_5FCF60
// entry 005fcf60  size 184  status ok
//======================================================================

int __thiscall sub_5FCF60(int *this)
{
  int result; // eax

  sub_602550(this);
  sub_5F2840((void *)dword_15E55E4, *(this + 123));
  result = sub_6026D0(this);
  if ( (_BYTE)result )
    result = (*(int (__thiscall **)(int *, _DWORD))(*this + 216))(this, 0);
  if ( *(this + 126) )
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 112))(*(this + 126));
  if ( *(this + 125) )
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 125) + 112))(*(this + 125));
  if ( *(this + 128) )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 128) + 112))(*(this + 128));
  return result;
}


//======================================================================
// sub_5FD020
// entry 005fd020  size 531  status ok
//======================================================================

void __thiscall sub_5FD020(int this)
{
  int v1; // [esp-4h] [ebp-18h]
  int v2; // [esp-4h] [ebp-18h]
  int v3; // [esp-4h] [ebp-18h]
  int v4; // [esp+0h] [ebp-14h]

  if ( pairNode::raw_length((pairNode *)this) != -2 )
  {
    sub_602F60(this);
    v4 = *(_DWORD *)(this + 404);
    if ( v4 )
    {
      if ( v4 == 2 )
      {
        if ( *(_DWORD *)(this + 512) )
        {
          HIBYTE(v2) = HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 400) + 96));
          LOWORD(v2) = word_75EE1C;
          BYTE2(v2) = byte_75EE1E;
          sub_5ECD00(*(_DWORD **)(this + 512), *(_DWORD *)(*(_DWORD *)(this + 400) + 96), -1, v2);
        }
      }
      else if ( v4 == 3 && pairNode::raw_length((pairNode *)this) != -2 && (unsigned __int8)sub_6026D0(this) )
      {
        if ( *(_DWORD *)(this + 500) )
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 500) + 176))(*(_DWORD *)(this + 500), 1);
        if ( *(_DWORD *)(this + 504) )
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 176))(*(_DWORD *)(this + 504), 1);
        if ( *(_DWORD *)(this + 512) )
        {
          HIBYTE(v3) = HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 400) + 96));
          LOWORD(v3) = word_75EE1C;
          BYTE2(v3) = byte_75EE1E;
          sub_5ECD00(*(_DWORD **)(this + 512), *(_DWORD *)(*(_DWORD *)(this + 400) + 96), -1, v3);
        }
      }
    }
    else
    {
      if ( (unsigned __int8)sub_6026D0(this) )
      {
        if ( *(_DWORD *)(this + 500) )
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 500) + 176))(*(_DWORD *)(this + 500), 0);
        if ( *(_DWORD *)(this + 504) )
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 504) + 176))(*(_DWORD *)(this + 504), 0);
        if ( *(_DWORD *)(this + 512) )
        {
          HIBYTE(v1) = HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 400) + 96));
          LOWORD(v1) = word_75EE1C;
          BYTE2(v1) = byte_75EE1E;
          sub_5ECD00(*(_DWORD **)(this + 512), *(_DWORD *)(*(_DWORD *)(this + 400) + 96), -1, v1);
        }
      }
      sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
    }
  }
}


//======================================================================
// sub_5FD240
// entry 005fd240  size 232  status ok
//======================================================================

int __thiscall sub_5FD240(int *this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // [esp+0h] [ebp-Ch]

  result = pairNode::raw_length((pairNode *)this);
  if ( result != -2 )
  {
    if ( *(_DWORD *)(*(this + 124) + 436) == 1 )
    {
      result = *(this + 124);
      if ( *(_DWORD *)(result + 448) )
      {
        v2 = pairNode::raw_length((pairNode *)this);
        return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(this + 124) + 448) + 240))(
                 *(_DWORD *)(*(this + 124) + 448),
                 v2,
                 1);
      }
    }
    else if ( *(this + 123) == -1 )
    {
      sub_5F2870((char *)dword_15E55E4);
      if ( *(this + 124) )
        v4 = *(_DWORD *)(*(this + 124) + 452);
      else
        v4 = -1;
      v3 = pairNode::raw_length((pairNode *)this);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E4 + 76))(dword_15E55E4, v3, v4);
    }
    else
    {
      return sub_5FD330(this);
    }
  }
  return result;
}


//======================================================================
// sub_5FD330
// entry 005fd330  size 212  status ok
//======================================================================

void (__thiscall ****__thiscall sub_5FD330(int *this))(_DWORD, _DWORD)
{
  int v1; // esi
  int v2; // esi
  int v3; // eax
  int v5; // [esp-8h] [ebp-1Ch]
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]

  sub_5F28C0((void *)dword_15E55E4, *(_DWORD *)(*(this + 124) + 452));
  v1 = sub_5F84F0((_DWORD *)*(this + 1));
  v8 = (*(int (__thiscall **)(int *))(*this + 84))(this) + v1;
  v2 = unknown_libname_619(*(this + 1));
  v7 = (*(int (__thiscall **)(int *))(*this + 76))(this) + v2;
  v5 = *(this + 124);
  v3 = sub_5F5550(this);
  sub_5F2670((char *)dword_15E55E4, *(this + 123), v7 + v3, v8, 2, v5, 0);
  (*(void (__thiscall **)(int *, int))(*this + 216))(this, 3);
  *(_DWORD *)(*(this + 124) + 440) = pairNode::raw_length((pairNode *)this);
  return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
}


//======================================================================
// sub_5FD410
// entry 005fd410  size 42  status ok
//======================================================================

void (__thiscall ****__thiscall sub_5FD410(int this))(_DWORD, _DWORD)
{
  sub_5F2840((void *)dword_15E55E4, *(_DWORD *)(this + 492));
  return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
}


//======================================================================
// sub_5FD440
// entry 005fd440  size 287  status ok
//======================================================================

int __thiscall sub_5FD440(CMediaType *this)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // [esp-10h] [ebp-30h]
  int v5; // [esp-Ch] [ebp-2Ch]
  int v6; // [esp-8h] [ebp-28h]
  int v7; // [esp+4h] [ebp-1Ch]
  _DWORD *v9; // [esp+Ch] [ebp-14h]

  if ( !*((_DWORD *)this + 126) )
  {
    v9 = operator new(0x178u);
    if ( v9 )
    {
      sub_5EAAF0(v9);
      v7 = v1;
    }
    else
    {
      v7 = 0;
    }
    *((_DWORD *)this + 126) = v7;
    *(_DWORD *)(*((_DWORD *)this + 126) + 4) = *((_DWORD *)this + 1);
    v6 = CMediaType::IsFixedSize(this) + 1;
    v5 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this) + 5;
    v4 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 76))(this) + 1;
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 100))(dword_15E55E8);
    sub_5EAE80(v2, v4, v5, v6, -1);
  }
  result = sub_5F54A0((unsigned __int8 *)this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 126) + 116))(*((_DWORD *)this + 126));
  return result;
}


//======================================================================
// sub_5FD560
// entry 005fd560  size 113  status ok
//======================================================================

int __thiscall sub_5FD560(int *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 126) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 112))(*(this + 126));
    result = *(this + 126);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 126))(*(this + 126), 1);
    *(this + 126) = 0;
  }
  return result;
}


//======================================================================
// sub_5FD630
// entry 005fd630  size 119  status ok
//======================================================================

int __thiscall sub_5FD630(int this)
{
  int result; // eax

  result = this;
  if ( !*(_BYTE *)(this + 424) )
  {
    result = sub_6025C0(this);
    if ( *(_DWORD *)(this + 500) )
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 500) + 176))(*(_DWORD *)(this + 500), 0);
    if ( *(_DWORD *)(this + 504) )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 504) + 176))(*(_DWORD *)(this + 504), 0);
  }
  return result;
}


//======================================================================
// sub_5FD6B0
// entry 005fd6b0  size 119  status ok
//======================================================================

int __thiscall sub_5FD6B0(int this)
{
  int result; // eax

  result = this;
  if ( *(_BYTE *)(this + 424) )
  {
    result = sub_602650(this);
    if ( *(_DWORD *)(this + 500) )
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 500) + 176))(*(_DWORD *)(this + 500), 2);
    if ( *(_DWORD *)(this + 504) )
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 176))(*(_DWORD *)(this + 504), 2);
  }
  return result;
}


//======================================================================
// sub_5FD730
// entry 005fd730  size 304  status ok
//======================================================================

int __thiscall sub_5FD730(int this, int a2)
{
  int v2; // eax
  int IsFixedSize; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-28h]
  int v9; // [esp-4h] [ebp-24h]
  int v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  void *v13; // [esp+Ch] [ebp-14h]
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]

  if ( !*(_DWORD *)(this + 512) )
  {
    v13 = operator new(0x1D0u);
    if ( v13 )
    {
      sub_5EC5A0(v13);
      v11 = v2;
    }
    else
    {
      v11 = 0;
    }
    v14 = v11;
    *(_DWORD *)(this + 512) = v11;
  }
  *(_DWORD *)(*(_DWORD *)(this + 512) + 4) = *(_DWORD *)(this + 4);
  IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 400));
  v4 = (*(int (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 400) + 84))(
         *(_DWORD *)(this + 400),
         IsFixedSize + 1,
         18,
         -1);
  v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 76))(*(_DWORD *)(this + 400), v4);
  v8 = sub_5F5590(*(_DWORD **)(this + 400));
  v5 = sub_5F5550(*(_DWORD **)(this + 400));
  v6 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_15E55E8 + 84))(dword_15E55E8, v5, v8, v9);
  return sub_5EC8F0(*(void **)(this + 512), a2, v6, v10, v11, this, (int)v13, v14, v15, v16);
}


//======================================================================
// sub_5FDDF0
// entry 005fddf0  size 501  status ok
//======================================================================

_DWORD *__thiscall sub_5FDDF0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *result; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp-4h] [ebp-28h]
  int v14; // [esp-4h] [ebp-28h]
  int v15; // [esp+0h] [ebp-24h]
  int v16; // [esp+4h] [ebp-20h]
  int v17; // [esp+8h] [ebp-1Ch]
  int v18; // [esp+Ch] [ebp-18h]
  int v19; // [esp+10h] [ebp-14h]
  int v21; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  if ( *(this + 111) )
  {
    a2 -= 5;
    a3 -= 5;
  }
  if ( a4 == 1 )
    a3 -= sub_5FED00(this);
  v4 = a3 + sub_5FED00(this);
  if ( v4 > sub_5F8570(*(_DWORD **)(dword_15E55E8 + 20)) )
  {
    v5 = sub_5FED00(this);
    a3 = sub_5F8570(*(_DWORD **)(dword_15E55E8 + 20)) - v5;
  }
  sub_5F8420(this, a2, a3 - 20);
  v19 = sub_5FB2B0((int)this, 0);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v19 + 68))(v19, 0, 20);
  v6 = (_DWORD *)sub_5FB2B0((int)this, 0);
  v7 = sub_5F5590(v6);
  v8 = (_DWORD *)sub_5FB2B0((int)this, 0);
  v21 = v7 + sub_5EB4B0(v8) + 20;
  for ( i = 0;
        i < Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(
              this,
              v15);
        ++i )
  {
    v18 = sub_5FF080(i);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v18 + 68))(v18, 0, v21);
    v9 = (_DWORD *)sub_5FF080(i);
    v21 += sub_5F5590(v9);
  }
  v17 = sub_5FB2B0((int)this, 1);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v17 + 68))(v17, 0, v21);
  result = (_DWORD *)sub_5FB630((int)this, 2);
  if ( result )
  {
    v16 = sub_5FB630((int)this, 2);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v16 + 68))(v16, 0, 0);
    v13 = sub_5F8550(this);
    v11 = (_DWORD *)sub_5FB630((int)this, 2);
    sub_5F5530(v11, v13);
    v14 = sub_5F8570(this);
    v12 = (_DWORD *)sub_5FB630((int)this, 2);
    return sub_5F5570(v12, v14);
  }
  return result;
}


//======================================================================
// sub_5FDFF0
// entry 005fdff0  size 460  status ok
//======================================================================

int __thiscall sub_5FDFF0(void *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-74h]
  _DWORD *v9; // [esp+10h] [ebp-68h]
  int v10; // [esp+20h] [ebp-58h]
  struct CPaneDivider *v11[2]; // [esp+24h] [ebp-54h] BYREF
  int v12; // [esp+2Ch] [ebp-4Ch]
  char v13; // [esp+30h] [ebp-48h]
  char Destination[52]; // [esp+34h] [ebp-44h] BYREF
  int v15; // [esp+74h] [ebp-4h]

  result = sub_5FF060(a3);
  v10 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, int, struct CPaneDivider **))(*(_DWORD *)dword_15E55E4 + 72))(dword_15E55E4, a2, v11);
    CPaneContainer::SetPaneDivider((CPaneContainer *)v10, v11[0]);
    v4 = (*(int (__thiscall **)(int, struct CPaneDivider *))(*(_DWORD *)dword_15E55E8 + 20))(dword_15E55E8, v11[1]);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 224))(v10, v4);
    *(_DWORD *)(v10 + 492) = v12;
    if ( *(_DWORD *)(v10 + 500) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(v10 + 500))(*(_DWORD *)(v10 + 500), 1);
      *(_DWORD *)(v10 + 500) = 0;
    }
    if ( v12 != -1 )
    {
      v9 = operator new(0x178u);
      v15 = 0;
      if ( v9 )
      {
        sub_5EAAF0(v9);
        v7 = v5;
      }
      else
      {
        v7 = 0;
      }
      v15 = -1;
      *(_DWORD *)(v10 + 500) = v7;
      *(_DWORD *)(*(_DWORD *)(v10 + 500) + 4) = this;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 96))(dword_15E55E8);
      sub_5EAE80(v6, 0, 0, 2, -1);
    }
    if ( v13 )
    {
      sub_5FE770(v13, Destination);
      sub_5FD730(v10, (int)Destination);
    }
    else
    {
      sub_5FD730(v10, (int)&Source);
    }
    return sub_5FDD10(this);
  }
  return result;
}


//======================================================================
// sub_5FE1C0
// entry 005fe1c0  size 122  status ok
//======================================================================

char __stdcall sub_5FE1C0(int a1, int a2, int a3, char a4)
{
  int i; // [esp+4h] [ebp-8h]

  if ( !a1 )
    return 0;
  for ( i = 0; *(_DWORD *)(a1 + 16 * i) != -1; ++i )
  {
    if ( !(unsigned __int8)sub_5FE290(a1 + 16 * i, a2, a3, a4) )
      return 0;
    a3 = *(_DWORD *)(a1 + 16 * i);
  }
  return 1;
}


//======================================================================
// sub_5FE240
// entry 005fe240  size 77  status ok
//======================================================================

char __stdcall sub_5FE240(int a1, int a2, int Number, char a4)
{
  int v5[4]; // [esp+4h] [ebp-10h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int, int, int *))(*(_DWORD *)dword_15E55E4 + 72))(dword_15E55E4, a1, v5) )
    return sub_5FE290((int)v5, a2, Number, a4);
  else
    return 0;
}


//======================================================================
// sub_5FE290
// entry 005fe290  size 931  status ok
//======================================================================

char __thiscall sub_5FE290(void *this, int a2, int a3, int Number, char a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp-14h] [ebp-98h]
  int v13; // [esp-10h] [ebp-94h]
  int v14; // [esp-Ch] [ebp-90h]
  int v15; // [esp+Ch] [ebp-78h]
  _DWORD *v16; // [esp+10h] [ebp-74h]
  _DWORD *v18; // [esp+20h] [ebp-64h]
  _DWORD *v19; // [esp+28h] [ebp-5Ch]
  int v20; // [esp+30h] [ebp-54h]
  int v21; // [esp+34h] [ebp-50h]
  _DWORD *v22; // [esp+38h] [ebp-4Ch]
  char Destination[52]; // [esp+3Ch] [ebp-48h] BYREF
  int v24; // [esp+74h] [ebp-10h]
  int v25; // [esp+80h] [ebp-4h]

  v24 = 0;
  if ( !a2 || *(_DWORD *)a2 == -1 )
    return 0;
  if ( a3 == -1 )
    a3 = sub_5FE7F0();
  v19 = operator new(0x204u);
  v25 = 0;
  if ( v19 )
    v16 = (_DWORD *)sub_5FC850(v19, *(_DWORD *)a2, (int)this);
  else
    v16 = 0;
  v25 = -1;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 92))(dword_15E55E8);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 88))(dword_15E55E8);
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E8 + 84))(dword_15E55E8, v6);
  v12 = *(_DWORD *)(a2 + 4);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 20))(dword_15E55E8);
  v22 = sub_5F9DE0(this, v16, *(_DWORD *)a2, a3, 0, 0, 1, v7, v12, v13, v14, -1, 0);
  if ( *(_DWORD *)a2 == -2 )
    (*(void (__thiscall **)(_DWORD *, int))(*v22 + 176))(v22, 6);
  if ( a5 )
  {
    if ( *(_DWORD *)(a2 + 8) != -1 )
    {
      v18 = operator new(0x178u);
      v25 = 1;
      if ( v18 )
      {
        sub_5EAAF0(v18);
        v15 = v8;
      }
      else
      {
        v15 = 0;
      }
      v25 = -1;
      v22[125] = v15;
      *(_DWORD *)(v22[125] + 4) = this;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 96))(dword_15E55E8);
      sub_5EAE80(v9, 0, 0, 2, -1);
    }
    v22[123] = *(_DWORD *)(a2 + 8);
  }
  else
  {
    v22[123] = -1;
  }
  sub_5EF340((_DWORD *)v22[100], 10, 0);
  sub_5EF310((_DWORD *)v22[100], 17);
  if ( *(_BYTE *)(a2 + 12) )
  {
    sub_5FE770(*(_BYTE *)(a2 + 12), Destination);
    sub_5FD730((int)v22, (int)Destination);
  }
  if ( Number == -2 )
    goto LABEL_35;
  if ( Number == -1 )
  {
    sub_60C890(v22);
    sub_60C7D0(v22);
LABEL_35:
    if ( a5 )
    {
      if ( *(_DWORD *)(a2 + 8) != -1 )
        sub_5F2370((void *)dword_15E55E4, *(_DWORD *)(a2 + 8), 0, 1u);
    }
    sub_5FDD10(this);
    return 1;
  }
  v21 = -2;
  v10 = abs(Number);
  v20 = sub_5FF060(v10);
  if ( v20 )
  {
    v21 = sub_60CAC0(v20);
    if ( Number < 0 )
      --v21;
  }
  if ( v21 >= -1 )
  {
    sub_60C890(v22);
    if ( v21 == -1 )
    {
      sub_60C7D0(v22);
    }
    else
    {
      v11 = sub_60CA40(v21);
      sub_60CB20(v11, v22);
    }
    goto LABEL_35;
  }
  sub_60C890(v22);
  if ( v22 )
    (*(void (__thiscall **)(_DWORD *, int))*v22)(v22, 1);
  return 0;
}


//======================================================================
// sub_5FE640
// entry 005fe640  size 291  status ok
//======================================================================

char __thiscall sub_5FE640(int this, int a2, int a3)
{
  int v5; // [esp+1Ch] [ebp-Ch]
  int v6; // [esp+20h] [ebp-8h]
  int v7; // [esp+24h] [ebp-4h]

  v7 = 0;
  if ( a3 <= 0 )
  {
    v7 = sub_5FF060(a2);
    if ( v7 )
    {
      sub_60C890(v7);
      goto LABEL_10;
    }
  }
  else
  {
    v5 = 0;
    v6 = 0;
    while ( v6 < a3 && v5 < CRecentFileList::GetSize((CRecentFileList *)(this + 20)) )
    {
      v7 = sub_5FF080(v5);
      if ( *(_DWORD *)(v7 + 12) == a2 )
        ++v6;
      ++v5;
    }
    if ( v6 == a3 )
    {
      sub_60C890(v7);
      if ( !v7 )
      {
LABEL_11:
        sub_5FDD10(this);
        return 1;
      }
LABEL_10:
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      goto LABEL_11;
    }
  }
  return 0;
}


//======================================================================
// sub_5FE770
// entry 005fe770  size 117  status ok
//======================================================================

char *__stdcall sub_5FE770(char a1, char *Destination)
{
  const char *v3; // eax

  if ( a1 )
  {
    if ( a1 >= 48 )
    {
      sprintf(Destination, "%c", a1);
    }
    else
    {
      v3 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_15E55E8 + 28))(dword_15E55E8, a1);
      strcpy(Destination, v3);
    }
    return Destination;
  }
  else
  {
    strcpy(Destination, &Source);
    return Destination;
  }
}


//======================================================================
// sub_5FE7F0
// entry 005fe7f0  size 571  status ok
//======================================================================

int __thiscall sub_5FE7F0(_DWORD *this)
{
  _DWORD *v1; // eax
  char *v2; // eax
  int v4; // [esp+0h] [ebp-58h]
  char *v5; // [esp+Ch] [ebp-4Ch]
  _DWORD *v6; // [esp+10h] [ebp-48h]
  _DWORD *v8; // [esp+28h] [ebp-30h]
  int v9; // [esp+30h] [ebp-28h]
  int v10; // [esp+34h] [ebp-24h]
  int v11; // [esp+38h] [ebp-20h]
  int v12; // [esp+38h] [ebp-20h]
  int j; // [esp+3Ch] [ebp-1Ch]
  int i; // [esp+40h] [ebp-18h]
  int v15; // [esp+40h] [ebp-18h]
  int v16; // [esp+48h] [ebp-10h]

  v16 = 0;
  v11 = 0;
  v8 = operator new(0x178u);
  if ( v8 )
  {
    sub_5EAAF0(v8);
    v6 = v1;
  }
  else
  {
    v6 = 0;
  }
  for ( i = 0;
        i < Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this, v4);
        ++i )
  {
    v9 = sub_5FF080(i);
    if ( v9 && *(_DWORD *)(v9 + 488) != -2 )
    {
      if ( *(_DWORD *)(v9 + 512) )
        v5 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v9 + 512) + 184))(*(_DWORD *)(v9 + 512));
      else
        v5 = 0;
      v2 = (char *)sub_602B70(v9);
      v10 = sub_5FEA30(v2, v5);
      if ( v10 > v11 )
        v11 = v10;
    }
  }
  v12 = v11 + 10;
  v15 = 0;
  for ( j = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8 + 80))(
              dword_15E55E8,
              *(this + 109),
              0);
        j;
        j = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_15E55E8 + 80))(dword_15E55E8, *(this + 109), v15) )
  {
    sub_5EAF00((int)v6, j);
    (*(void (__thiscall **)(_DWORD *))(*v6 + 64))(v6);
    if ( sub_5F5550(v6) >= v12 )
    {
      if ( v6 )
        (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1);
      return j;
    }
    ++v15;
    v16 = j;
  }
  if ( v6 )
    (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1);
  return v16;
}


//======================================================================
// sub_5FEA30
// entry 005fea30  size 533  status ok
//======================================================================

int __stdcall sub_5FEA30(char *Str2, char *a2)
{
  char v3; // ecx^3
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp-4h] [ebp-374h]
  int v11; // [esp-4h] [ebp-374h]
  int v12; // [esp+8h] [ebp-368h]
  _DWORD v13[95]; // [esp+Ch] [ebp-364h] BYREF
  int v14; // [esp+188h] [ebp-1E8h]
  void *v15[117]; // [esp+18Ch] [ebp-1E4h] BYREF
  int v16; // [esp+36Ch] [ebp-4h]

  v14 = 0;
  if ( !Str2 || !*Str2 )
    return 0;
  sub_5EC5A0(v15);
  v16 = 0;
  HIBYTE(v10) = v3;
  LOWORD(v10) = word_75EE1C;
  BYTE2(v10) = byte_75EE1E;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 84))(dword_15E55E8);
  sub_5ECD00(v15, v4, -1, v10);
  sub_5EE5E0(v15, Str2);
  sub_5EF3E0(v15);
  v14 += sub_5EF050((int)v15);
  if ( a2 )
  {
    if ( *a2 )
    {
      HIBYTE(v11) = HIBYTE(a2);
      LOWORD(v11) = word_75EE1C;
      BYTE2(v11) = byte_75EE1E;
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 84))(dword_15E55E8);
      sub_5ECD00(v15, v5, -1, v11);
      sub_5EE5E0(v15, a2);
      sub_5EF3E0(v15);
      v14 += sub_5EF050((int)v15);
    }
  }
  sub_5EAAF0(v13);
  LOBYTE(v16) = 1;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 100))(dword_15E55E8);
  sub_5EAF00((int)v13, v6);
  ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)v13);
  v7 = sub_5F5550(v13);
  v14 += v7;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_15E55E8 + 96))(dword_15E55E8);
  sub_5EAF00((int)v13, v8);
  v9 = sub_5F5550(v13);
  v14 += v9;
  v12 = v14;
  LOBYTE(v16) = 0;
  sub_5EAC00(v13);
  v16 = -1;
  sub_5EC760(v15);
  return v12;
}


//======================================================================
// sub_5FECB0
// entry 005fecb0  size 80  status ok
//======================================================================

int __thiscall sub_5FECB0(void *this)
{
  _DWORD *v1; // eax
  int v2; // esi
  _DWORD *v3; // eax

  if ( !Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this) )
    return 0;
  v1 = (_DWORD *)sub_5FF080(0);
  v2 = sub_5F5550(v1);
  v3 = (_DWORD *)sub_5FF080(0);
  return sub_5EB470(v3) + v2;
}


//======================================================================
// sub_5FED00
// entry 005fed00  size 155  status ok
//======================================================================

int __thiscall sub_5FED00(void *this)
{
  int i; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  for ( i = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this);
        v8 < i;
        i = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this) )
  {
    v2 = (_DWORD *)sub_5FF080(v8);
    v7 += sub_5F5590(v2);
    ++v8;
  }
  if ( sub_5FB2B0((int)this, 0) )
  {
    v3 = (_DWORD *)sub_5FB2B0((int)this, 0);
    v7 += sub_5F5590(v3);
  }
  if ( sub_5FB2B0((int)this, 1) )
  {
    v4 = (_DWORD *)sub_5FB2B0((int)this, 1);
    v7 += sub_5F5590(v4);
  }
  return v7;
}


//======================================================================
// sub_5FEDC0
// entry 005fedc0  size 463  status ok
//======================================================================

int __thiscall sub_5FEDC0(_DWORD *this)
{
  int v1; // esi
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // edi
  int v14; // eax
  int result; // eax
  int v16; // [esp-8h] [ebp-24h]
  int v17; // [esp-8h] [ebp-24h]
  int v18; // [esp+8h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-10h]
  int v20; // [esp+10h] [ebp-Ch]
  int i; // [esp+18h] [ebp-4h]

  v1 = unknown_libname_619(this);
  v2 = sub_5FECB0(this) + v1;
  if ( v2 > sub_5F8550(*(_DWORD **)(dword_15E55E8 + 20)) )
  {
    if ( sub_5FB2B0((int)this, 0) )
    {
      v3 = (_DWORD *)sub_5FB2B0((int)this, 0);
      if ( sub_5EB240(v3) >= 7 )
      {
        v20 = sub_5FB2B0((int)this, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 176))(v20, 7);
      }
    }
    v16 = sub_5F84F0(this) + 20;
    v4 = unknown_libname_619(this);
    v5 = unknown_libname_619(this);
    v6 = sub_5FECB0(this) + v5;
    v7 = sub_5F8550(*(_DWORD **)(dword_15E55E8 + 20));
    sub_5FDDF0(this, v4 - (v6 - v7), v16, 4);
  }
  v8 = sub_5F84F0(this);
  v9 = sub_5FED00(this) + v8;
  if ( v9 > sub_5F8570(*(_DWORD **)(dword_15E55E8 + 20)) )
  {
    if ( sub_5FB2B0((int)this, 0) )
    {
      v10 = (_DWORD *)sub_5FB2B0((int)this, 0);
      if ( sub_5EB240(v10) >= 7 )
      {
        v19 = sub_5FB2B0((int)this, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 176))(v19, 7);
      }
    }
    v11 = sub_5F84F0(this);
    v12 = sub_5F84F0(this);
    v13 = sub_5FED00(this) + v12;
    v17 = v11 - (v13 - sub_5F8570(*(_DWORD **)(dword_15E55E8 + 20))) + 20;
    v14 = unknown_libname_619(this);
    sub_5FDDF0(this, v14, v17, 4);
  }
  sub_5F85D0((int)this);
  for ( i = 0; ; ++i )
  {
    result = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this);
    if ( i >= result )
      break;
    v18 = sub_5FF080(i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
  }
  return result;
}


//======================================================================
// sub_5FEF90
// entry 005fef90  size 82  status ok
//======================================================================

char __thiscall sub_5FEF90(void *this)
{
  int i; // eax
  int v2; // eax
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( i = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this);
        v5 < i;
        i = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this) )
  {
    v2 = sub_5FF080(v5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
    ++v5;
  }
  return sub_5F87D0((int)this);
}


//======================================================================
// sub_5FEFF0
// entry 005feff0  size 76  status ok
//======================================================================

int __thiscall sub_5FEFF0(void *this)
{
  int result; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( result = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this);
        v4 < result;
        result = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(this) )
  {
    v2 = sub_5FF080(v4);
    sub_5F2840((void *)dword_15E55E4, *(_DWORD *)(v2 + 492));
    ++v4;
  }
  return result;
}


//======================================================================
// sub_5FF040
// entry 005ff040  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_5FF040(_DWORD *this, int a2)
{
  *(this + 112) = a2;
  return this;
}


//======================================================================
// sub_5FF060
// entry 005ff060  size 25  status ok
//======================================================================

int __thiscall sub_5FF060(void *this, int a2)
{
  return sub_5FB300((int)this, a2);
}


//======================================================================
// sub_5FF080
// entry 005ff080  size 28  status ok
//======================================================================

int __stdcall sub_5FF080(int a1)
{
  return sub_60CA40(a1);
}


//======================================================================
// sub_5FF0A0
// entry 005ff0a0  size 235  status ok
//======================================================================

int __fastcall sub_5FF0A0(int a1)
{
  int result; // eax
  void (__thiscall ****v2)(_DWORD, _DWORD); // eax
  int v3; // eax
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  result = a1;
  if ( *(_DWORD *)(a1 + 444) )
  {
    for ( i = 0; ; ++i )
    {
      result = Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(*(_DWORD *)(a1 + 444));
      if ( i >= result )
        break;
      v2 = (void (__thiscall ****)(_DWORD, _DWORD))sub_5FF080(i);
      sub_5F5DF0(v2, 0);
      v3 = sub_5FF080(i);
      if ( (unsigned __int8)sub_6026D0(v3) )
      {
        v5 = sub_5FF080(i);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 216))(v5, 0);
      }
    }
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 444) + 440) != -1 )
    {
      v4 = sub_5FF060(*(void **)(a1 + 444), *(_DWORD *)(*(_DWORD *)(a1 + 444) + 440));
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 216))(v4, 3);
    }
  }
  return result;
}


//======================================================================
// sub_5FF190
// entry 005ff190  size 46  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5FF190(ATL::CCRTHeap *this, int a2, int a3)
{
  sub_5FC0D0(this, a3);
  *(_DWORD *)this = &sciMenuDelayScript::`vftable';
  *((_DWORD *)this + 8) = a2;
  return this;
}


//======================================================================
// sub_5FF1C0
// entry 005ff1c0  size 68  status ok
//======================================================================

void (__thiscall ****__thiscall sub_5FF1C0(int **this))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax

  result = (void (__thiscall ****)(_DWORD, _DWORD))unknown_libname_843(this);
  if ( !result )
    return (void (__thiscall ****)(_DWORD, _DWORD))((int (__thiscall *)(int **, int, int))(*this)[2])(this, 1, 30);
  if ( result == (void (__thiscall ****)(_DWORD, _DWORD))1 )
    return sub_5FD330(*(this + 8));
  return result;
}


//======================================================================
// sub_5FF2A0
// entry 005ff2a0  size 112  status ok
//======================================================================

int __thiscall sub_5FF2A0(int this, int a2)
{
  *(_BYTE *)(this + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  return this;
}


//======================================================================
// sub_5FF310
// entry 005ff310  size 82  status ok
//======================================================================

_DWORD *__thiscall sub_5FF310(_DWORD *this)
{
  sub_6060A0(this);
  *this = &sciTab::`vftable';
  *(this + 118) = 48;
  *(this + 133) = 0;
  *(this + 132) = 0;
  *((_WORD *)this + 268) = 0;
  return this;
}


//======================================================================
// sub_5FF370
// entry 005ff370  size 162  status ok
//======================================================================

int __thiscall sub_5FF370(_DWORD *this)
{
  *this = &sciTab::`vftable';
  if ( *(this + 132) )
  {
    sub_60CA10(*(this + 132));
    if ( *(this + 132) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + 132))(*(this + 132), 1);
  }
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_5FF420
// entry 005ff420  size 47  status ok
//======================================================================

int __stdcall sub_5FF420(int a1)
{
  sub_601CA0(a1);
  *(_DWORD *)(a1 + 24) = 2;
  return sub_5FFD60(a1);
}


//======================================================================
// sub_5FF450
// entry 005ff450  size 101  status ok
//======================================================================

int __thiscall sub_5FF450(ATL::CAtlWinModule *this)
{
  int v1; // eax
  int v2; // eax

  sub_5F5CC0(this);
  if ( *((_DWORD *)this + 100) )
  {
    v1 = sub_5FFF30(this);
    sub_5ECC60(*((_DWORD **)this + 100), v1);
    v2 = sub_5F5590(this);
    sub_5ECCB0(*((_DWORD **)this + 100), v2);
  }
  return sub_5FFF90(1, 1, 1, 1, 0, 0, 0, 0);
}


//======================================================================
// sub_5FF4C0
// entry 005ff4c0  size 45  status ok
//======================================================================

int __stdcall sub_5FF4C0(int a1, int a2, int a3, int a4, int a5)
{
  return sub_602830(a1, a2, a3, a4, a5, 0, 0);
}


//======================================================================
// sub_5FF4F0
// entry 005ff4f0  size 25  status ok
//======================================================================

int __stdcall sub_5FF4F0(int a1)
{
  return sub_602390(a1);
}


//======================================================================
// sub_5FF580
// entry 005ff580  size 21  status ok
//======================================================================

__int16 __thiscall sub_5FF580(_WORD *this)
{
  return *(this + 268);
}


//======================================================================
// sub_5FF5A0
// entry 005ff5a0  size 195  status ok
//======================================================================

int __thiscall sub_5FF5A0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-1Ch]

  if ( !*(this + 132) )
  {
    if ( operator new(0x10u) )
      v3 = sub_60C5F0();
    else
      v3 = 0;
    *(this + 132) = v3;
  }
  result = (unsigned __int8)sub_60C9E0(a2);
  if ( !(_BYTE)result )
  {
    sub_60C840(a2);
    *(_DWORD *)(a2 + 4) = *(this + 1);
    return a2;
  }
  return result;
}


//======================================================================
// sub_5FF670
// entry 005ff670  size 43  status ok
//======================================================================

_DWORD *__thiscall sub_5FF670(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  if ( *(this + 132) )
    return (_DWORD *)sub_60C890(a2);
  return result;
}


//======================================================================
// sub_5FF6A0
// entry 005ff6a0  size 139  status ok
//======================================================================

int __thiscall sub_5FF6A0(CRecentFileList **this)
{
  int v1; // eax
  int i; // [esp+8h] [ebp-4h]

  sub_606140(this);
  if ( *(this + 132) )
  {
    for ( i = 0; i < CRecentFileList::GetSize(*(this + 132)); ++i )
    {
      v1 = sub_60CA40(i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 116))(v1, v1);
    }
  }
  sub_5FF960(this);
  return (*((int (__thiscall **)(CRecentFileList **, int))*this + 27))(this, 100);
}


//======================================================================
// sub_5FF730
// entry 005ff730  size 106  status ok
//======================================================================

CRecentFileList **__thiscall sub_5FF730(CRecentFileList **this)
{
  CRecentFileList **result; // eax
  int v2; // eax
  int i; // [esp+8h] [ebp-4h]

  sub_6001B0(this);
  result = this;
  if ( *(this + 132) )
  {
    for ( i = 0; ; ++i )
    {
      result = (CRecentFileList **)CRecentFileList::GetSize(*(this + 132));
      if ( i >= (int)result )
        break;
      v2 = sub_60CA40(i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
    }
  }
  return result;
}


//======================================================================
// sub_5FF7A0
// entry 005ff7a0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_5FF7A0(_DWORD *this, int a2)
{
  *(this + 133) = a2;
  return this;
}


//======================================================================
// sub_5FF7C0
// entry 005ff7c0  size 116  status ok
//======================================================================

void __thiscall sub_5FF7C0(int this)
{
  int v1; // ecx
  int v2; // [esp-4h] [ebp-8h]

  sub_600330(this);
  v1 = *(unsigned __int8 *)(this + 476);
  if ( *(_BYTE *)(this + 476) )
  {
    if ( *(_DWORD *)(this + 400) )
    {
      if ( *(_DWORD *)(this + 404) == 3 || (HIBYTE(v1) = HIBYTE(this), *(_DWORD *)(this + 404) == 1) )
      {
        HIBYTE(v2) = HIBYTE(v1);
        LOWORD(v2) = word_75EE1C;
        BYTE2(v2) = byte_75EE1E;
        sub_5ECD00(*(_DWORD **)(this + 400), *(_DWORD *)(this + 456), -1, v2);
      }
    }
  }
}


//======================================================================
// sub_5FF840
// entry 005ff840  size 106  status ok
//======================================================================

int __thiscall sub_5FF840(int this)
{
  int v1; // eax
  int v3; // [esp-4h] [ebp-10h]
  int i; // [esp+4h] [ebp-8h]
  int Size; // [esp+8h] [ebp-4h]

  Size = CRecentFileList::GetSize(*(CRecentFileList **)(this + 528));
  for ( i = 0; i < Size; ++i )
  {
    v3 = *(_DWORD *)(this + 4);
    v1 = sub_60CA40(i);
    sub_6104E0(v1, v3);
  }
  return sub_60CA10(*(_DWORD *)(this + 528));
}


//======================================================================
// sub_5FF8F0
// entry 005ff8f0  size 45  status ok
//======================================================================

char __thiscall sub_5FF8F0(void *this, _DWORD *a2)
{
  char v4; // [esp+7h] [ebp-1h]

  v4 = sub_6062A0(a2);
  sub_5FF7A0(a2, (int)this);
  return v4;
}


//======================================================================
// sub_5FF920
// entry 005ff920  size 25  status ok
//======================================================================

int __stdcall sub_5FF920(int a1)
{
  return sub_606350(a1);
}


//======================================================================
// sub_5FF940
// entry 005ff940  size 25  status ok
//======================================================================

int __stdcall sub_5FF940(int a1)
{
  return sub_606380(a1);
}


//======================================================================
// sub_5FF960
// entry 005ff960  size 465  status ok
//======================================================================

int __thiscall sub_5FF960(void *this, int a2)
{
  int result; // eax
  int v3; // esi
  __int16 v4; // ax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  __int16 v8; // ax
  __int16 v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-Ch]
  _WORD *v12; // [esp+Ch] [ebp-Ch]
  _WORD *v13; // [esp+Ch] [ebp-Ch]
  __int16 i; // [esp+10h] [ebp-8h]
  __int16 j; // [esp+10h] [ebp-8h]
  __int16 k; // [esp+10h] [ebp-8h]
  __int16 v17; // [esp+14h] [ebp-4h]

  v10 = 0;
  for ( i = 0; i < sub_6063E0(this); ++i )
  {
    v11 = sub_5FF920(i);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 84))(v11) > v10 )
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 84))(v11);
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 84))(a2) == v10 )
  {
    for ( j = 0; ; ++j )
    {
      result = sub_6063E0(this);
      if ( j >= result )
        break;
      v12 = (_WORD *)sub_5FF920(j);
      v3 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)v12 + 84))(v12);
      v4 = sub_5FF580(v12);
      (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v12 + 108))(v12, v4 + v3);
    }
  }
  else
  {
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 84))(a2);
    for ( k = 0; ; ++k )
    {
      result = sub_6063E0(this);
      if ( k >= result )
        break;
      v13 = (_WORD *)sub_5FF920(k);
      if ( (*(int (__thiscall **)(_WORD *))(*(_DWORD *)v13 + 84))(v13) == v17 )
      {
        v5 = (*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)v13 + 76))(v13, v10);
        (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v13 + 68))(v13, v5);
      }
      else if ( (*(int (__thiscall **)(_WORD *))(*(_DWORD *)v13 + 84))(v13) == v10 )
      {
        v6 = (*(int (__thiscall **)(_WORD *, _DWORD))(*(_DWORD *)v13 + 76))(v13, v17);
        (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v13 + 68))(v13, v6);
      }
      v7 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)v13 + 84))(v13);
      v8 = sub_5FF580(v13);
      (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v13 + 108))(v13, v8 + v7);
    }
  }
  return result;
}


//======================================================================
// sub_5FFB40
// entry 005ffb40  size 97  status ok
//======================================================================

int __stdcall sub_5FFB40(int a1)
{
  int result; // eax
  int (__thiscall ***v2)(_DWORD, int); // [esp+10h] [ebp-4h]

  result = sub_5FF920(a1);
  v2 = (int (__thiscall ***)(_DWORD, int))result;
  if ( result )
  {
    sub_60C890(result);
    return (**v2)(v2, 1);
  }
  return result;
}


//======================================================================
// sub_5FFD60
// entry 005ffd60  size 142  status ok
//======================================================================

int __thiscall sub_5FFD60(_DWORD **this, int a2)
{
  int result; // eax

  sub_5F89F0(*(this + 1), 0);
  if ( ((unsigned __int8 (__thiscall *)(_DWORD **, int))(*this)[33])(this, a2) )
  {
    ((void (__thiscall *)(_DWORD **, int))(*this)[54])(this, 3);
    ((void (__thiscall *)(_DWORD **))(*this)[60])(this);
    ((void (__thiscall *)(_DWORD **))(*this)[48])(this);
  }
  else
  {
    ((void (__thiscall *)(_DWORD **, _DWORD))(*this)[54])(this, 0);
  }
  result = sub_5F4F50(this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_5FFDF0
// entry 005ffdf0  size 142  status ok
//======================================================================

int __thiscall sub_5FFDF0(_DWORD **this, int a2)
{
  int result; // eax

  sub_5F89F0(*(this + 1), 0);
  if ( ((unsigned __int8 (__thiscall *)(_DWORD **, int))(*this)[33])(this, a2) )
  {
    ((void (__thiscall *)(_DWORD **, int))(*this)[54])(this, 3);
    ((void (__thiscall *)(_DWORD **))(*this)[60])(this);
    ((void (__thiscall *)(_DWORD **))(*this)[49])(this);
  }
  else
  {
    ((void (__thiscall *)(_DWORD **, _DWORD))(*this)[54])(this, 0);
  }
  result = sub_5F4F50(this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_5FFE80
// entry 005ffe80  size 166  status ok
//======================================================================

int __thiscall sub_5FFE80(int *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  sub_602830(a2, a3, a4, a5, a6, 0, 0);
  v8 = sub_5EF050(*(this + 100));
  sub_5ECC60((_DWORD *)*(this + 100), v8 + 5);
  v9 = sub_5EF130((__int16 *)*(this + 100));
  sub_5ECCB0((_DWORD *)*(this + 100), v9 + 2);
  sub_600300(a7, a8);
  v10 = (*(int (__thiscall **)(int *))(*this + 84))(this);
  v11 = (*(int (__thiscall **)(int *, int))(*this + 76))(this, v10);
  return (*(int (__thiscall **)(int *, int))(*this + 68))(this, v11);
}


//======================================================================
// sub_5FFF30
// entry 005fff30  size 59  status ok
//======================================================================

int __thiscall sub_5FFF30(int this)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5F5550((_DWORD *)this);
  if ( *(_DWORD *)(this + 400) )
    v3 += sub_5F5550(*(_DWORD **)(this + 400));
  return v3;
}


//======================================================================
// sub_5FFF70
// entry 005fff70  size 25  status ok
//======================================================================

int __thiscall sub_5FFF70(void *this, int a2)
{
  return sub_5EAF00((int)this, a2);
}


//======================================================================
// sub_5FFF90
// entry 005fff90  size 125  status ok
//======================================================================

int __thiscall sub_5FFF90(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  *(this + 120) = a2;
  *(this + 121) = a3;
  *(this + 122) = a4;
  *(this + 123) = a5;
  *(this + 124) = a6;
  *(this + 125) = a7;
  *(this + 126) = a8;
  *(this + 127) = a9;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 236))(this, this);
}


//======================================================================
// sub_600010
// entry 00600010  size 131  status ok
//======================================================================

int __thiscall sub_600010(_DWORD *this)
{
  *(this + 120) = 0;
  *(this + 121) = 1;
  *(this + 122) = 2;
  *(this + 123) = 3;
  *(this + 124) = 4;
  *(this + 125) = 5;
  *(this + 126) = 6;
  *(this + 127) = 7;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 236))(this, this);
}


//======================================================================
// sub_6000A0
// entry 006000a0  size 122  status ok
//======================================================================

int __thiscall sub_6000A0(int this)
{
  int v1; // esi
  int v2; // esi
  int v3; // eax
  int v4; // eax

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v2 = sub_5F5590((_DWORD *)this) / 2 + v1;
  v3 = sub_5F5590(*(_DWORD **)(this + 400));
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, *(_DWORD *)(this + 516) + v2 - v3 / 2);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 68))(
           *(_DWORD *)(this + 400),
           *(_DWORD *)(this + 512) + v4);
}


//======================================================================
// sub_600120
// entry 00600120  size 60  status ok
//======================================================================

int __thiscall sub_600120(void *this)
{
  if ( (unsigned __int8)sub_600230(this) )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 248))(this);
  else
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 244))(this);
}


//======================================================================
// sub_600160
// entry 00600160  size 70  status ok
//======================================================================

int __thiscall sub_600160(_BYTE *this)
{
  int result; // eax

  result = (unsigned __int8)sub_600230(this);
  if ( !(_BYTE)result )
  {
    *(this + 476) = 1;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 236))(this);
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 252))(this);
  }
  return result;
}


//======================================================================
// sub_6001B0
// entry 006001b0  size 70  status ok
//======================================================================

int __thiscall sub_6001B0(_BYTE *this)
{
  int result; // eax

  result = (unsigned __int8)sub_600230(this);
  if ( (_BYTE)result )
  {
    *(this + 476) = 0;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 236))(this);
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 252))(this);
  }
  return result;
}


//======================================================================
// sub_600200
// entry 00600200  size 48  status ok
//======================================================================

int __thiscall sub_600200(pairNode *this)
{
  int result; // eax
  int v2; // eax

  result = (int)this;
  if ( *((_DWORD *)this + 1) )
  {
    v2 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 32))(*((_DWORD *)this + 1), v2);
  }
  return result;
}


//======================================================================
// sub_600230
// entry 00600230  size 20  status ok
//======================================================================

char __thiscall sub_600230(_BYTE *this)
{
  return *(this + 476);
}


//======================================================================
// sub_600250
// entry 00600250  size 80  status ok
//======================================================================

char __thiscall sub_600250(_DWORD *this, int a2)
{
  if ( *(this + 100)
    && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 100) + 132))(*(this + 100), a2) )
  {
    return 1;
  }
  else
  {
    return sub_5EB6D0(this, a2);
  }
}


//======================================================================
// sub_6002A0
// entry 006002a0  size 89  status ok
//======================================================================

int __thiscall sub_6002A0(int *this, int a2)
{
  int v2; // eax
  int v3; // eax

  sub_602B00(a2);
  v2 = sub_5EF050(*(this + 100));
  sub_5ECC60((_DWORD *)*(this + 100), v2 + 5);
  v3 = sub_5EF130((__int16 *)*(this + 100));
  return sub_5ECCB0((_DWORD *)*(this + 100), v3 + 2);
}


//======================================================================
// sub_600300
// entry 00600300  size 37  status ok
//======================================================================

int __thiscall sub_600300(_DWORD *this, int a2, int a3)
{
  *(this + 128) = a2;
  *(this + 129) = a3;
  return a3;
}


//======================================================================
// sub_600330
// entry 00600330  size 179  status ok
//======================================================================

int __thiscall sub_600330(int this)
{
  int v1; // ecx

  if ( *(_BYTE *)(this + 476) )
  {
    *(_DWORD *)(this + 408) = *(_DWORD *)(this + 496);
    *(_DWORD *)(this + 412) = *(_DWORD *)(this + 500);
    *(_DWORD *)(this + 416) = *(_DWORD *)(this + 504);
    v1 = *(_DWORD *)(this + 508);
  }
  else
  {
    *(_DWORD *)(this + 408) = *(_DWORD *)(this + 480);
    *(_DWORD *)(this + 412) = *(_DWORD *)(this + 484);
    *(_DWORD *)(this + 416) = *(_DWORD *)(this + 488);
    v1 = *(_DWORD *)(this + 492);
  }
  *(_DWORD *)(this + 420) = v1;
  return sub_602F60(this);
}


//======================================================================
// sub_6004E0
// entry 006004e0  size 55  status ok
//======================================================================

int __thiscall sub_6004E0(int this, int a2, char a3)
{
  *(_DWORD *)(this + 4) = a2;
  *(_DWORD *)(this + 20) = sub_5EB240(*(_DWORD **)(this + 4));
  *(_BYTE *)(this + 24) = 1;
  *(_BYTE *)(this + 25) = a3;
  return this;
}


//======================================================================
// sub_600520
// entry 00600520  size 22  status ok
//======================================================================

_BYTE *__thiscall sub_600520(_BYTE *this, char a2)
{
  *(this + 25) = a2;
  return this;
}


//======================================================================
// sub_600540
// entry 00600540  size 74  status ok
//======================================================================

char __thiscall sub_600540(_DWORD *this)
{
  int IsFixedSize; // eax

  IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  if ( abs(IsFixedSize - *(this + 4)) < *(_DWORD *)(*(this + 1) + 376) )
    return 0;
  *(this + 4) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  return 1;
}


//======================================================================
// sub_600590
// entry 00600590  size 61  status ok
//======================================================================

unsigned int __thiscall sub_600590(void *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 12))(this) )
    return *((_DWORD *)this + 3) + CMFCToolBarsCustomizeDialog::GetFlags(*((CMFCToolBarsCustomizeDialog **)this + 1));
  else
    return CMFCToolBarsCustomizeDialog::GetFlags(*((CMFCToolBarsCustomizeDialog **)this + 1));
}


//======================================================================
// sub_6005D0
// entry 006005d0  size 91  status ok
//======================================================================

int __thiscall sub_6005D0(int this)
{
  if ( *(_DWORD *)(this + 8) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 28))(*(_DWORD *)(this + 8), 0);
  *(_BYTE *)(this + 24) = 0;
  if ( *(_BYTE *)(this + 25) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  return sub_5F5D50(*(_DWORD **)(this + 4), 0);
}


//======================================================================
// sub_600630
// entry 00600630  size 246  status ok
//======================================================================

_DWORD *__thiscall sub_600630(_DWORD *this, int a2, int a3)
{
  int IsFixedSize; // esi

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a3);
  *this = &sciCycleSync::`vftable';
  *(this + 7) = a2;
  *(this + 8) = sub_603C50(542327875, *(this + 7), 0);
  if ( *(this + 8) && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 8) + 4))(*(this + 8)) )
  {
    *(this + 9) = 0;
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    *(this + 10) = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 8) + 4))(*(this + 8))
                                      + 2 * *(this + 9)
                                      + 1)
                 + IsFixedSize;
  }
  else
  {
    *(this + 9) = -1;
  }
  return this;
}


//======================================================================
// sub_600730
// entry 00600730  size 124  status ok
//======================================================================

void __thiscall sub_600730(CExpandoObject *this)
{
  *(_DWORD *)this = &sciCycleSync::`vftable';
  if ( *((_DWORD *)this + 8) )
  {
    sub_6041D0(*((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
  }
  CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_6007B0
// entry 006007b0  size 101  status ok
//======================================================================

int __thiscall sub_6007B0(int this, int a2, char a3)
{
  int result; // eax
  int IsFixedSize; // esi

  result = this;
  if ( *(_DWORD *)(this + 32) )
  {
    *(_DWORD *)(this + 36) = 0;
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    *(_DWORD *)(this + 40) = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 4))(*(_DWORD *)(this + 32))
                                                + 2 * *(_DWORD *)(this + 36)
                                                + 1)
                           + IsFixedSize;
    return sub_6004E0(this, a2, a3);
  }
  return result;
}


//======================================================================
// sub_600820
// entry 00600820  size 210  status ok
//======================================================================

int __fastcall sub_600820(int a1)
{
  int result; // eax
  int v2; // eax
  int IsFixedSize; // esi

  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
    if ( (_BYTE)result )
    {
      ++*(_DWORD *)(a1 + 36);
      if ( *(_DWORD *)(a1 + 36) < (int)CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(a1 + 32)) / 2 )
      {
        v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 32) + 4))(*(_DWORD *)(a1 + 32));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 176))(
          *(_DWORD *)(a1 + 4),
          *(unsigned __int8 *)(v2 + 2 * *(_DWORD *)(a1 + 36)));
        IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
        result = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 32) + 4))(*(_DWORD *)(a1 + 32))
                                    + 2 * *(_DWORD *)(a1 + 36)
                                    + 1);
        *(_DWORD *)(a1 + 40) = result + IsFixedSize;
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
// sub_600900
// entry 00600900  size 55  status ok
//======================================================================

char __thiscall sub_600900(_DWORD *this)
{
  if ( !*(this + 10) || CMediaType::IsFixedSize((CMediaType *)dword_15E55E8) < *(this + 10) )
    return 0;
  *(this + 10) = 0;
  return 1;
}


//======================================================================
// sub_600940
// entry 00600940  size 58  status ok
//======================================================================

_DWORD *__thiscall sub_600940(_DWORD *this)
{
  _DWORD *result; // eax

  sub_6005D0((int)this);
  result = this;
  if ( *(this + 8) )
  {
    result = (_DWORD *)sub_6041D0(*(this + 8));
    *(this + 8) = 0;
  }
  return result;
}


//======================================================================
// sub_6009D0
// entry 006009d0  size 158  status ok
//======================================================================

int __fastcall sub_6009D0(int a1)
{
  int result; // eax
  int v2; // eax
  int IsFixedSize; // esi

  result = a1;
  *(_DWORD *)(a1 + 36) = 0;
  if ( *(_DWORD *)(a1 + 32) )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 32) + 4))(*(_DWORD *)(a1 + 32));
    if ( result )
    {
      v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 32) + 4))(*(_DWORD *)(a1 + 32));
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 176))(
        *(_DWORD *)(a1 + 4),
        *(unsigned __int8 *)(v2 + 2 * *(_DWORD *)(a1 + 36)));
      IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
      result = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 32) + 4))(*(_DWORD *)(a1 + 32))
                                  + 2 * *(_DWORD *)(a1 + 36)
                                  + 1);
      *(_DWORD *)(a1 + 40) = result + IsFixedSize;
    }
  }
  return result;
}


//======================================================================
// sub_600A70
// entry 00600a70  size 47  status ok
//======================================================================

_DWORD *__thiscall sub_600A70(_DWORD *this, int a2)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a2);
  *this = &sciCycleForward::`vftable';
  *(this + 3) = 1;
  return this;
}


//======================================================================
// sub_600AC0
// entry 00600ac0  size 110  status ok
//======================================================================

int __thiscall sub_600AC0(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 4))(this);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1));
    if ( result != v3 )
    {
      if ( v3 <= (int)*(this + 5) )
        return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v3);
      else
        return (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 5))(this);
    }
  }
  return result;
}


//======================================================================
// sub_600B30
// entry 00600b30  size 37  status ok
//======================================================================

int __thiscall sub_600B30(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 176))(*(this + 1), 0);
}


//======================================================================
// sub_600B60
// entry 00600b60  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_600B60(_DWORD *this, int a2)
{
  sub_600A70(this, a2);
  *this = &sciCycleForwardWithCue::`vftable';
  return this;
}


//======================================================================
// sub_600BB0
// entry 00600bb0  size 49  status ok
//======================================================================

int __thiscall sub_600BB0(_DWORD **this)
{
  if ( *(this + 2) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 2) + 28))(*(this + 2), 0);
  return sub_600B30(this);
}


//======================================================================
// sub_600C20
// entry 00600c20  size 50  status ok
//======================================================================

int __thiscall sub_600C20(int this)
{
  int result; // eax

  sub_600B30((_DWORD **)this);
  --*(_DWORD *)(this + 28);
  result = this;
  if ( *(int *)(this + 28) <= 0 )
    *(_BYTE *)(this + 24) = 0;
  return result;
}


//======================================================================
// sub_600C60
// entry 00600c60  size 47  status ok
//======================================================================

_DWORD *__thiscall sub_600C60(_DWORD *this, int a2)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a2);
  *this = &sciCycleReverse::`vftable';
  *(this + 3) = -1;
  return this;
}


//======================================================================
// sub_600CB0
// entry 00600cb0  size 105  status ok
//======================================================================

int __thiscall sub_600CB0(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 4))(this);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1));
    if ( result != v3 )
    {
      if ( v3 >= 0 )
        return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v3);
      else
        return (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 5))(this);
    }
  }
  return result;
}


//======================================================================
// sub_600D20
// entry 00600d20  size 40  status ok
//======================================================================

int __thiscall sub_600D20(int this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 176))(
           *(_DWORD *)(this + 4),
           *(_DWORD *)(this + 20));
}


//======================================================================
// sub_600DA0
// entry 00600da0  size 49  status ok
//======================================================================

int __thiscall sub_600DA0(_DWORD **this)
{
  if ( *(this + 2) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 2) + 28))(*(this + 2), 0);
  return sub_600D20((int)this);
}


//======================================================================
// sub_600DE0
// entry 00600de0  size 47  status ok
//======================================================================

_DWORD *__thiscall sub_600DE0(_DWORD *this, int a2)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a2);
  *this = &sciCycleTo::`vftable';
  *(this + 7) = 0;
  return this;
}


//======================================================================
// sub_600E30
// entry 00600e30  size 150  status ok
//======================================================================

int __thiscall sub_600E30(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 4))(this);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1));
    if ( result != v3 )
    {
      if ( (CMFCToolBarsCustomizeDialog *)v3 == *(this + 7) || *(this + 7) == (CMFCToolBarsCustomizeDialog *)-1 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), *(this + 7));
        return (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 5))(this);
      }
      else
      {
        return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_600F30
// entry 00600f30  size 56  status ok
//======================================================================

_DWORD *__thiscall sub_600F30(_DWORD *this, int a2, int a3)
{
  sub_600DE0(this, a3);
  *this = &sciCycleForwardTo::`vftable';
  *(this + 3) = 1;
  *(this + 7) = a2;
  return this;
}


//======================================================================
// sub_600F90
// entry 00600f90  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_600F90(_DWORD *this, int a2)
{
  sub_600DE0(this, a2);
  *this = &sciCycleReverseTo::`vftable';
  *(this + 3) = -1;
  *(this + 7) = 0;
  return this;
}


//======================================================================
// sub_601030
// entry 00601030  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_601030(_DWORD *this, int a2)
{
  sub_600DE0(this, a2);
  *this = &sciCycleReverseToZero::`vftable';
  return this;
}


//======================================================================
// sub_601060
// entry 00601060  size 49  status ok
//======================================================================

_DWORD *__thiscall sub_601060(_DWORD *this, int a2, char a3)
{
  sub_6004E0((int)this, a2, a3);
  *(this + 7) = 0;
  *(this + 3) = -1;
  return this;
}


//======================================================================
// sub_6010A0
// entry 006010a0  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_6010A0(_DWORD *this, int a2)
{
  sub_600DE0(this, a2);
  *this = &sciCycleForwardToEnd::`vftable';
  return this;
}


//======================================================================
// sub_6010D0
// entry 006010d0  size 51  status ok
//======================================================================

_DWORD *__thiscall sub_6010D0(_DWORD *this, int a2, char a3)
{
  sub_6004E0((int)this, a2, a3);
  *(this + 7) = *(this + 5);
  *(this + 3) = 1;
  return this;
}


//======================================================================
// sub_601110
// entry 00601110  size 73  status ok
//======================================================================

_DWORD *__thiscall sub_601110(_DWORD *this, int a2, char a3, char a4, int a5, int a6)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a5);
  *this = &sciCycleFlash::`vftable';
  *(this + 7) = a2;
  *((_BYTE *)this + 32) = a3;
  *((_BYTE *)this + 33) = a4;
  *(this + 9) = a6;
  return this;
}


//======================================================================
// sub_601180
// entry 00601180  size 269  status ok
//======================================================================

int __fastcall sub_601180(int a1)
{
  int result; // eax
  unsigned __int8 v3; // [esp+7h] [ebp-1h]

  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
    if ( (_BYTE)result )
    {
      if ( *(_DWORD *)(a1 + 36) )
        v3 = (unsigned __int8)sub_5EB610(*(_BYTE **)(a1 + 4)) != 255;
      else
        v3 = CMFCScanliner::channels(*(CMFCScanliner **)(a1 + 4));
      if ( v3 )
      {
        if ( *(_DWORD *)(a1 + 36) )
          sub_5EB5D0(*(_BYTE **)(a1 + 4), 0xFFu);
        else
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 116))(*(_DWORD *)(a1 + 4));
        result = *(unsigned __int8 *)(a1 + 33);
        if ( !*(_BYTE *)(a1 + 33) )
        {
          result = a1;
          --*(_DWORD *)(a1 + 28);
        }
      }
      else if ( *(_DWORD *)(a1 + 36) )
      {
        result = sub_5EB5D0(*(_BYTE **)(a1 + 4), *(_BYTE *)(a1 + 36));
      }
      else
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 112))(*(_DWORD *)(a1 + 4));
      }
    }
    if ( !*(_BYTE *)(a1 + 33) )
    {
      result = a1;
      if ( *(int *)(a1 + 28) <= 0 )
        return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
    }
  }
  return result;
}


//======================================================================
// sub_601290
// entry 00601290  size 95  status ok
//======================================================================

int __thiscall sub_601290(int this)
{
  if ( *(_BYTE *)(this + 32) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 116))(*(_DWORD *)(this + 4));
    if ( *(_DWORD *)(this + 36) )
      sub_5EB5D0(*(_BYTE **)(this + 4), 0xFFu);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  }
  return sub_6005D0(this);
}


//======================================================================
// sub_6012F0
// entry 006012f0  size 43  status ok
//======================================================================

_DWORD *__thiscall sub_6012F0(_DWORD *this)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(0);
  *this = &sciCycleOscillate::`vftable';
  *(this + 3) = 1;
  return this;
}


//======================================================================
// sub_601340
// entry 00601340  size 116  status ok
//======================================================================

int __thiscall sub_601340(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 4))(this);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1));
    if ( result != v3 )
    {
      if ( v3 <= (int)*(this + 5) && v3 >= 0 )
        return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v3);
      else
        return (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 5))(this);
    }
  }
  return result;
}


