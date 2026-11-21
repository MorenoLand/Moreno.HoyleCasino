//======================================================================
// sub_635D00
// entry 00635d00  size 126  status ok
//======================================================================

int __thiscall sub_635D00(void *this, int a2)
{
  int v2; // eax
  int result; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 828))(this, a2) )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 52))(this, a2);
  v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 64))(v2, v2);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 820))(this, a2, -1);
  return result;
}


//======================================================================
// sub_635D80
// entry 00635d80  size 372  status ok
//======================================================================

void __stdcall sub_635D80(char *Source)
{
  char v1[268]; // [esp+10h] [ebp-1180h] BYREF
  int v2; // [esp+11Ch] [ebp-1074h]
  char Destination[5]; // [esp+120h] [ebp-1070h] BYREF
  char v4[108]; // [esp+1120h] [ebp-70h] BYREF

  if ( Source && *Source )
  {
    strcpy(Destination, Source);
    strcat(Destination, "#");
    strcpy(v1, "encore.inf");
    v2 = (*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_7960D8 + 32))(dword_7960D8, v1, "Ident");
    (*(void (__thiscall **)(int, const char *, const char *, char *, int))(*(_DWORD *)v2 + 16))(
      v2,
      "SubProductID",
      &::Source,
      v4,
      100);
    if ( !v4[0] )
      (*(void (__thiscall **)(int, const char *, const char *, char *, int))(*(_DWORD *)v2 + 16))(
        v2,
        "ProductID",
        &::Source,
        v4,
        100);
    if ( v4[0] )
      strcat(Destination, v4);
    else
      strcat(Destination, "2000");
    sub_5EA220(Source);
    if ( v2 )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}


//======================================================================
// sub_635F00
// entry 00635f00  size 43  status ok
//======================================================================

char __stdcall sub_635F00(LPCSTR lpFile)
{
  char result; // al

  if ( lpFile )
  {
    result = (char)lpFile;
    if ( *lpFile )
      return sub_5EA220(lpFile);
  }
  return result;
}


//======================================================================
// sub_635F30
// entry 00635f30  size 345  status ok
//======================================================================

char __stdcall sub_635F30(char *Str2, char *Buffer)
{
  char *Str1; // [esp+8h] [ebp-3D0h]
  int i; // [esp+10h] [ebp-3C8h]
  _BYTE v5[948]; // [esp+14h] [ebp-3C4h] BYREF
  int v6; // [esp+3D4h] [ebp-4h]

  if ( Str2 && Buffer )
  {
    sub_63A0C0(v5);
    v6 = 0;
    for ( i = 0; i < 100; ++i )
    {
      sprintf(Buffer, "user%d.log", i);
      if ( (unsigned __int8)sub_63AB10(Buffer) )
      {
        Str1 = (char *)&CImageDisplay::GetDisplayFormat((CImageDisplay *)v5)->rcSource.top;
        if ( !strcmp(Str1, Str2) )
        {
          v6 = -1;
          sub_63A120();
          return 1;
        }
      }
    }
    *Buffer = 0;
    v6 = -1;
    sub_63A120();
    return 0;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1915);
    return 0;
  }
}


//======================================================================
// sub_636090
// entry 00636090  size 348  status ok
//======================================================================

int __stdcall sub_636090(char *Str2)
{
  char *Str1; // [esp+8h] [ebp-3F0h]
  int v3; // [esp+10h] [ebp-3E8h]
  char Buffer[28]; // [esp+14h] [ebp-3E4h] BYREF
  int i; // [esp+30h] [ebp-3C8h]
  _BYTE v6[948]; // [esp+34h] [ebp-3C4h] BYREF
  int v7; // [esp+3F4h] [ebp-4h]

  if ( Str2 )
  {
    sub_63A0C0(v6);
    v7 = 0;
    for ( i = 0; i < 100; ++i )
    {
      sprintf(Buffer, "user%d.log", i);
      if ( (unsigned __int8)sub_63AB10(Buffer) )
      {
        Str1 = (char *)&CImageDisplay::GetDisplayFormat((CImageDisplay *)v6)->rcSource.top;
        if ( !strcmp(Str1, Str2) )
        {
          v3 = i;
          v7 = -1;
          sub_63A120();
          return v3;
        }
      }
    }
    v7 = -1;
    sub_63A120();
    return -1;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1938);
    return -1;
  }
}


//======================================================================
// sub_6361F0
// entry 006361f0  size 83  status ok
//======================================================================

int sub_6361F0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    sub_63A3E0(i, 0);
  }
  return result;
}


//======================================================================
// sub_636250
// entry 00636250  size 388  status ok
//======================================================================

int __thiscall sub_636250(_DWORD *this)
{
  int result; // eax
  CImageDisplay *v4; // [esp+8h] [ebp-20h]
  int i; // [esp+24h] [ebp-4h]
  int j; // [esp+24h] [ebp-4h]
  int k; // [esp+24h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * i) + 32) )
      sub_63B2D0(*(_DWORD *)(*(this + 22) + 4 * i));
  }
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++j )
  {
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * j))->rcSource.left == 1 )
      CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * j))->rcSource.left = 0;
  }
  sub_64D5E0(*(this + 22));
  for ( k = 0; ; ++k )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( k >= result )
      break;
    v4 = *(CImageDisplay **)(*(this + 22) + 4 * k);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left != 2
      && CImageDisplay::GetDisplayFormat(v4)->rcSource.left != 3 )
    {
      sub_63A3E0(k, 0);
    }
  }
  return result;
}


//======================================================================
// sub_6363E0
// entry 006363e0  size 547  status ok
//======================================================================

int __thiscall sub_6363E0(Concurrency::details::ContextBase *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v2; // eax
  int v4; // eax
  int v5; // eax
  CImageDisplay *v8; // [esp+1Ch] [ebp-30h]
  int v9; // [esp+28h] [ebp-24h]
  _DWORD v10[7]; // [esp+2Ch] [ebp-20h] BYREF
  int i; // [esp+48h] [ebp-4h]

  v9 = 0;
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, _DWORD *, int))(*(_DWORD *)this + 868))(
    this,
    ExecutingCollection,
    v10,
    -1);
  for ( i = 0; ; ++i )
  {
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v2 )
      break;
    v8 = *(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i);
    if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
    {
      if ( v9 == v10[4] )
      {
        sub_63A3E0(i, 0);
        CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i))->rcSource.left = 0;
      }
      else
      {
        sub_63A8D0(-1, 0, 1, 1, 1);
        ++v9;
      }
    }
  }
  if ( v9 >= v10[0] || !v10[6] )
    return v9;
  for ( i = 0; ; ++i )
  {
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v4 )
      break;
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i))->rcSource.left == 1 )
    {
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2021);
      return v9;
    }
    if ( !CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i))->rcSource.left )
    {
      v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 880))(this, v10[0] - v9);
      sub_63A8D0(v5, 0, 1, 1, 1);
      ++v9;
    }
    if ( v9 == v10[0] )
      return v9;
  }
  return v9;
}


//======================================================================
// sub_636610
// entry 00636610  size 123  status ok
//======================================================================

int __thiscall sub_636610(_DWORD *this)
{
  int v3; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * i))->rcSource.left )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_636690
// entry 00636690  size 156  status ok
//======================================================================

int __thiscall sub_636690(_DWORD *this)
{
  CImageDisplay *v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  v5 = 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    v4 = *(CImageDisplay **)(*(this + 22) + 4 * i);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      ++v5;
    }
  }
  return v5;
}


//======================================================================
// sub_636730
// entry 00636730  size 35  status ok
//======================================================================

int __thiscall sub_636730(_DWORD *this)
{
  int v1; // esi

  v1 = sub_636610(this);
  return v1 - sub_636690(this);
}


//======================================================================
// sub_636760
// entry 00636760  size 26  status ok
//======================================================================

BOOL __thiscall sub_636760(_DWORD *this)
{
  return sub_636690(this) == 0;
}


//======================================================================
// sub_6367D0
// entry 006367d0  size 113  status ok
//======================================================================

char __thiscall sub_6367D0(_DWORD *this, int a2)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( (unsigned __int8)sub_638FF0(i) && *(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * i) + 8) == a2 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_6368B0
// entry 006368b0  size 146  status ok
//======================================================================

char __thiscall sub_6368B0(_DWORD *this, char *Str2)
{
  char *Str1; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  if ( !Str2 )
    return 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( (unsigned __int8)sub_638F50(i) )
    {
      Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * i))->rcSource.top;
      if ( !strcmp(Str1, Str2) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_636950
// entry 00636950  size 81  status ok
//======================================================================

char __thiscall sub_636950(_DWORD *this, CImageDisplay *a2)
{
  char *p_top; // [esp+4h] [ebp-8h]
  char *Str2; // [esp+8h] [ebp-4h]

  if ( dword_163068C )
  {
    Str2 = (char *)&CImageDisplay::GetDisplayFormat(a2)->rcSource.top;
    return sub_63DEA0(Str2);
  }
  else
  {
    p_top = (char *)&CImageDisplay::GetDisplayFormat(a2)->rcSource.top;
    return sub_6368B0(this, p_top);
  }
}


//======================================================================
// sub_6369B0
// entry 006369b0  size 149  status ok
//======================================================================

int __thiscall sub_6369B0(_DWORD *this, char *Str2)
{
  char *Str1; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  if ( !Str2 )
    return -1;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( (unsigned __int8)sub_638F50(i) )
    {
      Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * i))->rcSource.top;
      if ( !strcmp(Str1, Str2) )
        return i;
    }
  }
  return -1;
}


//======================================================================
// sub_636A50
// entry 00636a50  size 511  status ok
//======================================================================

int __thiscall sub_636A50(_DWORD *this, signed int a2)
{
  signed int v3; // eax
  int v4; // eax
  signed int v5; // eax
  int v6; // eax
  int v8; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h]
  int v11; // [esp+Ch] [ebp-4h]
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+Ch] [ebp-4h]

  v8 = 0;
  if ( a2 <= 0 )
    return -1;
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 884))(this);
  if ( v10 != -1 )
    return v10;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84);
        ++i )
  {
    v11 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
            dword_162EE84,
            i);
    sub_6375B0(this);
    if ( (unsigned __int8)sub_63B560(v11) )
    {
      if ( !sub_6367D0(this, v11) )
        ++v8;
    }
  }
  if ( sub_62FBF0(a2) >= v8 )
  {
    do
    {
      do
      {
        v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84);
        v6 = sub_62FBF0(v5);
        v13 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
                dword_162EE84,
                v6);
        sub_6375B0(this);
      }
      while ( (unsigned __int8)sub_63B560(v13) );
    }
    while ( sub_6367D0(this, v13) );
    return v13;
  }
  else
  {
    while ( v8 )
    {
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84);
      v4 = sub_62FBF0(v3);
      v12 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
              dword_162EE84,
              v4);
      sub_6375B0(this);
      if ( (unsigned __int8)sub_63B560(v12) && !sub_6367D0(this, v12) )
        return v12;
    }
    return -1;
  }
}


//======================================================================
// sub_636C50
// entry 00636c50  size 132  status ok
//======================================================================

int __thiscall sub_636C50(_DWORD *this)
{
  int v1; // esi
  signed int v3; // eax
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v1 = sub_636610(this);
  if ( v1 == sub_636690(this) )
    return -1;
  for ( i = 0; i < 1000; ++i )
  {
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    v6 = sub_62FBF0(v3);
    if ( (unsigned __int8)sub_638FF0(v6) )
      return v6;
  }
  return -1;
}


//======================================================================
// sub_636CE0
// entry 00636ce0  size 90  status ok
//======================================================================

char __thiscall sub_636CE0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( (unsigned __int8)sub_63B340(*(_DWORD *)(*(this + 22) + 4 * i)) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_636D40
// entry 00636d40  size 300  status ok
//======================================================================

char __thiscall sub_636D40(_DWORD *this, int a2)
{
  bool v3; // [esp+0h] [ebp-2Ch]
  CImageDisplay *v5; // [esp+Ch] [ebp-20h]
  int i; // [esp+28h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( i != a2 && *(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * i) + 32) )
    {
      if ( (unsigned __int8)sub_6480D0(*(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * i) + 32))
        && CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * i))->rcSource.left == 1 )
      {
        return 1;
      }
      v5 = *(CImageDisplay **)(*(this + 22) + 4 * i);
      v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
      if ( v3 && (unsigned __int8)sub_648140(*(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * i) + 32)) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_636E70
// entry 00636e70  size 112  status ok
//======================================================================

int __thiscall sub_636E70(_DWORD *this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    if ( (unsigned __int8)sub_63B340(*(_DWORD *)(*(this + 22) + 4 * i)) )
      sub_648270(1);
  }
  return result;
}


//======================================================================
// sub_636EE0
// entry 00636ee0  size 142  status ok
//======================================================================

int __thiscall sub_636EE0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    if ( (unsigned __int8)sub_63B380(*(_DWORD *)(*(this + 22) + 4 * i)) )
    {
      sub_648270(0);
      sub_6464D0(0, 0);
    }
  }
  return result;
}


//======================================================================
// sub_636F70
// entry 00636f70  size 111  status ok
//======================================================================

int __thiscall sub_636F70(_DWORD *this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    if ( *(_DWORD *)(*(this + 22) + 4 * i) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * i) + 32) )
        sub_648270(0);
    }
  }
  return result;
}


//======================================================================
// sub_636FE0
// entry 00636fe0  size 22  status ok
//======================================================================

int __thiscall sub_636FE0(char *this)
{
  return sub_666A20(this + 92, this);
}


//======================================================================
// sub_637000
// entry 00637000  size 293  status ok
//======================================================================

int __stdcall sub_637000(int a1, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  signed int v6; // [esp+Ch] [ebp-4h]

  if ( !(unsigned __int8)sub_6668A0(a1, a2) )
    sub_666970(a1, a2);
  if ( (unsigned __int8)sub_6668A0(a1, a2) )
  {
    v6 = sub_666C70(a1, a2);
    if ( !v6 )
      sub_5E9F20("iTotalLines", "..\\casinoShell\\shell.cpp", 2285);
    v4 = sub_6667C0(a1, a2);
    do
    {
      do
        v5 = sub_62FBF0(v6);
      while ( (unsigned __int8)sub_666A80(a1, a2, v5) );
    }
    while ( !(unsigned __int8)sub_666840(v5 + v4) );
    sub_666B60(a1, a2, v5);
    return v5 + v4;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2277);
    return -1;
  }
}


//======================================================================
// sub_6371E0
// entry 006371e0  size 118  status ok
//======================================================================

char __stdcall sub_6371E0(int a1, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = sub_666C70(a1, a2);
  v4 = sub_6667C0(a1, a2);
  for ( i = 0; i < v6; ++i )
  {
    if ( (unsigned __int8)sub_666840(i + v4) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_637260
// entry 00637260  size 209  status ok
//======================================================================

int __stdcall sub_637260(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 1012:
      result = dword_770CB8[12 * a2];
      break;
    case 1014:
      result = dword_770CBC[12 * a2];
      break;
    case 1026:
      result = dword_770CB4[12 * a2];
      break;
    case 1028:
      result = dword_770CB0[12 * a2];
      break;
    case 1046:
      result = dword_770CCC[12 * a2];
      break;
    case 1063:
      result = dword_770CC8[12 * a2];
      break;
    case 1096:
      result = dword_770CC0[12 * a2];
      break;
    case 1128:
      result = dword_770CC4[12 * a2];
      break;
    case 1185:
      result = dword_770CD8[12 * a2];
      break;
    case 1186:
      result = dword_770CDC[12 * a2];
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_637410
// entry 00637410  size 309  status ok
//======================================================================

int __thiscall sub_637410(Concurrency::details::ContextBase *this)
{
  int result; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // esi
  int v4; // [esp+10h] [ebp-4h]

  v4 = -1;
  if ( !dword_162EE80
    || (result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 172))(dword_162EE80), !(_BYTE)result) )
  {
    if ( (unsigned __int8)sub_637670(this) )
    {
      if ( Concurrency::details::ContextBase::GetExecutingCollection(this) == (struct Concurrency::details::_TaskCollectionBase *)1002 )
        v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 392))(dword_162EE84);
      ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
      if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84)
        && !sub_636760(this) )
      {
        v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 396))(dword_162EE84);
      }
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)this + 828))(
             this,
             -1) )
      {
        v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 904))(this);
      }
    }
    if ( v4 == -1 || (result = sub_5F4720(v4), !(_BYTE)result) )
    {
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 136))(this);
      if ( v4 != -1 )
        return sub_5F4620(v4, 1.0);
    }
  }
  return result;
}


//======================================================================
// sub_637550
// entry 00637550  size 83  status ok
//======================================================================

int __thiscall sub_637550(void *this, int a2, int a3, char a4, int a5, int a6, float a7, float a8, _DWORD *a9)
{
  if ( dword_162EE80 )
    *(_DWORD *)(dword_162EE80 + 68) = GetTickCount();
  return sub_5F43E0(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


//======================================================================
// sub_6375B0
// entry 006375b0  size 19  status ok
//======================================================================

int __thiscall sub_6375B0(_DWORD **this)
{
  return **(this + 22);
}


//======================================================================
// sub_6375D0
// entry 006375d0  size 49  status ok
//======================================================================

int __thiscall sub_6375D0(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  sub_6375B0((_DWORD **)this);
  return sub_63AAE0(ExecutingCollection);
}


//======================================================================
// sub_637610
// entry 00637610  size 26  status ok
//======================================================================

int __thiscall sub_637610(_DWORD **this)
{
  int v1; // eax

  v1 = sub_6375B0(this);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_637630
// entry 00637630  size 56  status ok
//======================================================================

BYTE __thiscall sub_637630(_DWORD **this)
{
  CImageDisplay *v2; // [esp+8h] [ebp-4h]

  if ( byte_795F98 )
    return 0;
  v2 = (CImageDisplay *)sub_6375B0(this);
  return CImageDisplay::GetDisplayFormat(v2)->bmiColors[0].rgbBlue;
}


//======================================================================
// sub_637670
// entry 00637670  size 88  status ok
//======================================================================

bool __thiscall sub_637670(_DWORD **this)
{
  char v2; // [esp+0h] [ebp-10h]
  CImageDisplay *v4; // [esp+Ch] [ebp-4h]

  v2 = 0;
  if ( ((int (__thiscall *)(_DWORD **))(*this)[95])(this) )
  {
    v4 = (CImageDisplay *)sub_6375B0(this);
    if ( CImageDisplay::GetDisplayFormat(v4)->bmiColors[129].rgbGreen )
      return 1;
  }
  return v2;
}


//======================================================================
// sub_6376D0
// entry 006376d0  size 44  status ok
//======================================================================

BYTE __thiscall sub_6376D0(_DWORD **this)
{
  CImageDisplay *v2; // [esp+8h] [ebp-4h]

  v2 = (CImageDisplay *)sub_6375B0(this);
  return CImageDisplay::GetDisplayFormat(v2)->bmiColors[200].rgbBlue;
}


//======================================================================
// sub_637700
// entry 00637700  size 41  status ok
//======================================================================

BYTE __thiscall sub_637700(_DWORD **this)
{
  CImageDisplay *v2; // [esp+8h] [ebp-4h]

  v2 = (CImageDisplay *)sub_6375B0(this);
  return CImageDisplay::GetDisplayFormat(v2)->bmiColors[0].rgbGreen;
}


//======================================================================
// sub_637730
// entry 00637730  size 116  status ok
//======================================================================

BYTE __thiscall sub_637730(_DWORD **this, char a2)
{
  CImageDisplay *v4; // [esp+Ch] [ebp-Ch]
  CImageDisplay *v5; // [esp+14h] [ebp-4h]

  if ( a2 )
  {
    v5 = (CImageDisplay *)sub_6375B0(this);
    return CImageDisplay::GetDisplayFormat(v5)->bmiColors[0].rgbRed && !byte_795F94;
  }
  else
  {
    v4 = (CImageDisplay *)sub_6375B0(this);
    return CImageDisplay::GetDisplayFormat(v4)->bmiColors[0].rgbRed;
  }
}


//======================================================================
// sub_6377B0
// entry 006377b0  size 42  status ok
//======================================================================

int __thiscall sub_6377B0(_DWORD **this)
{
  CImageDisplay *v2; // [esp+8h] [ebp-4h]

  v2 = (CImageDisplay *)sub_6375B0(this);
  return (char)CImageDisplay::GetDisplayFormat(v2)->bmiColors[1].rgbBlue;
}


//======================================================================
// sub_6377E0
// entry 006377e0  size 44  status ok
//======================================================================

RGBQUAD __thiscall sub_6377E0(_DWORD **this)
{
  CImageDisplay *v2; // [esp+8h] [ebp-4h]

  v2 = (CImageDisplay *)sub_6375B0(this);
  return CImageDisplay::GetDisplayFormat(v2)->TrueColorInfo.bmiColors[127];
}


//======================================================================
// sub_637810
// entry 00637810  size 129  status ok
//======================================================================

int __thiscall sub_637810(_DWORD **this, int a2)
{
  CImageDisplay *v4; // [esp+10h] [ebp-8h]
  int rgbReserved; // [esp+14h] [ebp-4h]

  v4 = (CImageDisplay *)sub_6375B0(this);
  rgbReserved = (char)CImageDisplay::GetDisplayFormat(v4)->bmiColors[0].rgbReserved;
  if ( a2 == 1 )
    return rgbReserved > 4;
  if ( a2 == 2 )
    return 10 * rgbReserved;
  if ( a2 != 3 )
    return rgbReserved;
  if ( 15 * rgbReserved >= 45 )
    return 15 * rgbReserved;
  else
    return 45;
}


//======================================================================
// sub_6378A0
// entry 006378a0  size 51  status ok
//======================================================================

int __thiscall sub_6378A0(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  sub_6375B0((_DWORD **)this);
  return sub_639EF0(ExecutingCollection);
}


//======================================================================
// sub_6378E0
// entry 006378e0  size 44  status ok
//======================================================================

BYTE __thiscall sub_6378E0(_DWORD **this)
{
  CImageDisplay *v2; // [esp+8h] [ebp-4h]

  v2 = (CImageDisplay *)sub_6375B0(this);
  return CImageDisplay::GetDisplayFormat(v2)->bmiColors[196].rgbBlue;
}


//======================================================================
// sub_637910
// entry 00637910  size 90  status ok
//======================================================================

int __thiscall sub_637910(_DWORD **this)
{
  int v1; // eax
  signed int v2; // eax
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v1 = sub_6375B0(this);
  v5 = sub_639F50(v1);
  if ( v5 != -1 )
    return v5;
  v2 = ((int (__thiscall *)(_DWORD **))(*this)[95])(this);
  v6 = sub_62FBF0(v2);
  return ((int (__thiscall *)(_DWORD **, int))(*this)[96])(this, v6);
}


//======================================================================
// sub_637970
// entry 00637970  size 43  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_637970(_DWORD **this, RGBQUAD a2)
{
  const struct tagVIDEOINFO *result; // eax
  CImageDisplay *v3; // [esp+4h] [ebp-4h]

  v3 = (CImageDisplay *)sub_6375B0(this);
  result = CImageDisplay::GetDisplayFormat(v3);
  result->bmiColors[131] = a2;
  return result;
}


//======================================================================
// sub_6379A0
// entry 006379a0  size 77  status ok
//======================================================================

int __thiscall sub_6379A0(_DWORD **this)
{
  int v2; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 496))(dword_162EE80) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 496))(dword_162EE80);
  v2 = sub_6375B0(this);
  return sub_639FA0(v2);
}


//======================================================================
// sub_6379F0
// entry 006379f0  size 43  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_6379F0(_DWORD **this, RGBQUAD a2)
{
  const struct tagVIDEOINFO *result; // eax
  CImageDisplay *v3; // [esp+4h] [ebp-4h]

  v3 = (CImageDisplay *)sub_6375B0(this);
  result = CImageDisplay::GetDisplayFormat(v3);
  result->bmiColors[197] = a2;
  return result;
}


//======================================================================
// sub_637A20
// entry 00637a20  size 28  status ok
//======================================================================

int __thiscall sub_637A20(_DWORD **this)
{
  int v1; // eax

  v1 = sub_6375B0(this);
  return sub_639FF0(v1, this);
}


//======================================================================
// sub_637A40
// entry 00637a40  size 43  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_637A40(_DWORD **this, RGBQUAD a2)
{
  const struct tagVIDEOINFO *result; // eax
  CImageDisplay *v3; // [esp+4h] [ebp-4h]

  v3 = (CImageDisplay *)sub_6375B0(this);
  result = CImageDisplay::GetDisplayFormat(v3);
  result->bmiColors[198] = a2;
  return result;
}


//======================================================================
// sub_637A70
// entry 00637a70  size 88  status ok
//======================================================================

int __thiscall sub_637A70(_DWORD **this)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-4h]

  if ( byte_795F94 )
    return ((int (__thiscall *)(_DWORD **))(*this)[119])(this);
  v2 = sub_6375B0(this);
  v4 = sub_63A040(v2);
  if ( v4 == -1 )
    return ((int (__thiscall *)(_DWORD **))(*this)[120])(this);
  return v4;
}


//======================================================================
// sub_637AD0
// entry 00637ad0  size 43  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_637AD0(_DWORD **this, RGBQUAD a2)
{
  const struct tagVIDEOINFO *result; // eax
  CImageDisplay *v3; // [esp+4h] [ebp-4h]

  v3 = (CImageDisplay *)sub_6375B0(this);
  result = CImageDisplay::GetDisplayFormat(v3);
  result->bmiColors[199] = a2;
  return result;
}


//======================================================================
// sub_637B00
// entry 00637b00  size 121  status ok
//======================================================================

int __thiscall sub_637B00(void *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 380))(this);
  for ( i = 0; i < v5; ++i )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 384))(this, i) == a2 )
      return i;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2665);
  return 0;
}


//======================================================================
// sub_637B80
// entry 00637b80  size 499  status ok
//======================================================================

int __stdcall sub_637B80(int a1)
{
  int result; // eax

  if ( a1 > 2405500 )
  {
    switch ( a1 )
    {
      case 2405510:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_FLOATING");
        break;
      case 2405540:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_ELECTROMUSIC");
        break;
      case 2405550:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_MODERNGROOVE");
        break;
      case 2405560:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_STRINGQUARTET");
        break;
      case 2405570:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_STEALTHMUSIC");
        break;
      case 2405580:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_SWINGTOWN");
        break;
      default:
LABEL_26:
        sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2696);
        result = 0;
        break;
    }
  }
  else if ( a1 == 2405500 )
  {
    return sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_PIANOSOLO");
  }
  else
  {
    switch ( a1 )
    {
      case 2405000:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_OUTDOORS");
        break;
      case 2405001:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_STORM");
        break;
      case 2405002:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_RIO");
        break;
      case 2405003:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_CRUISIN");
        break;
      case 2405004:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_ANTICIPATION");
        break;
      case 2405005:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_DETECTIVE");
        break;
      case 2405006:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_SNAKEYJAKE");
        break;
      case 2405007:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_EASTERN");
        break;
      case 2405008:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_ORBIT");
        break;
      case 2405015:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_NEWAGE");
        break;
      case 2405016:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_DIGITALDREAM");
        break;
      case 2405017:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_GROOVYMOOD");
        break;
      case 2405018:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_JAZZMAN");
        break;
      case 2405019:
        result = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC_OCEAN");
        break;
      default:
        goto LABEL_26;
    }
  }
  return result;
}


//======================================================================
// sub_637E30
// entry 00637e30  size 16  status ok
//======================================================================

int sub_637E30()
{
  return dword_762278;
}


//======================================================================
// sub_637E40
// entry 00637e40  size 81  status ok
//======================================================================

int __thiscall sub_637E40(void *this, int a2)
{
  if ( a2 >= 0 && a2 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 404))(this) )
    return dword_762178[a2];
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2715);
  return 0;
}


//======================================================================
// sub_637EA0
// entry 00637ea0  size 228  status ok
//======================================================================

int __thiscall sub_637EA0(void *this, int a2)
{
  int v3; // esi
  int i; // [esp+8h] [ebp-8h]
  int j; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 404))(this);
  for ( i = 0; i < v7; ++i )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 408))(this, i) == a2 )
      return i;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2730);
  for ( j = 0; j < v7; ++j )
  {
    v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 408))(this, j);
    if ( v3 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 416))(this) )
      return j;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2736);
  return 0;
}


//======================================================================
// sub_637F90
// entry 00637f90  size 1223  status ok
//======================================================================

int __stdcall sub_637F90(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3150640:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_ARGYLE_BLUE");
      break;
    case 3150641:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_ARGYLE_RED");
      break;
    case 3150642:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_BLUE_AND_GOLD");
      break;
    case 3150643:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_BLUE_AND_GREEN");
      break;
    case 3150644:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_BRIDGE");
      break;
    case 3150645:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_CAMOUFLAGE");
      break;
    case 3150646:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_CUBIST_CAFE");
      break;
    case 3150647:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DAISY_BLUE");
      break;
    case 3150648:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DAISY_GREEN");
      break;
    case 3150649:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DAISY_ORANGE");
      break;
    case 3150650:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DAISY_PURPLE");
      break;
    case 3150651:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DAISY_RED");
      break;
    case 3150652:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DECO_OLIVE");
      break;
    case 3150653:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_DECO_YK");
      break;
    case 3150654:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_EGYPTIAN");
      break;
    case 3150655:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_FALL_LEAVES");
      break;
    case 3150656:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_FENCE");
      break;
    case 3150657:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_FIESTA");
      break;
    case 3150658:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_GARDENING");
      break;
    case 3150659:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_HOYLE_BLUE");
      break;
    case 3150660:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_HOYLE_RED");
      break;
    case 3150661:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_LABOR_DAY");
      break;
    case 3150662:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_LOUIS_XIV");
      break;
    case 3150663:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_MAP");
      break;
    case 3150664:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_MIRO");
      break;
    case 3150665:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_NW_NATIVE");
      break;
    case 3150666:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_PLANETS");
      break;
    case 3150667:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_RADIOWAVES");
      break;
    case 3150668:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_ROSE");
      break;
    case 3150669:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_STRIPES");
      break;
    case 3150670:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_TROJAN");
      break;
    case 3150671:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_UMBRELLAS");
      break;
    case 3150740:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_ARGYLE_BLUE");
      break;
    case 3150741:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_ARGYLE_RED");
      break;
    case 3150742:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_BLUE_AND_GOLD");
      break;
    case 3150743:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_BLUE_AND_GREEN");
      break;
    case 3150744:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_BRIDGE");
      break;
    case 3150745:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_CAMOUFLAGE");
      break;
    case 3150746:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_CUBIST_CAFE");
      break;
    case 3150747:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DAISY_BLUE");
      break;
    case 3150748:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DAISY_GREEN");
      break;
    case 3150749:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DAISY_ORANGE");
      break;
    case 3150750:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DAISY_PURPLE");
      break;
    case 3150751:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DAISY_RED");
      break;
    case 3150752:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DECO_OLIVE");
      break;
    case 3150753:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_DECO_YK");
      break;
    case 3150754:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_EGYPTIAN");
      break;
    case 3150755:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_FALL_LEAVES");
      break;
    case 3150756:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_FENCE");
      break;
    case 3150757:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_FIESTA");
      break;
    case 3150758:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_GARDENING");
      break;
    case 3150759:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_HOYLE_BLUE");
      break;
    case 3150760:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_HOYLE_RED");
      break;
    case 3150761:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_LABOR_DAY");
      break;
    case 3150762:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_LOUIS_XIV");
      break;
    case 3150763:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_MAP");
      break;
    case 3150764:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_MIRO");
      break;
    case 3150765:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_NW_NATIVE");
      break;
    case 3150766:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_PLANETS");
      break;
    case 3150767:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_RADIOWAVES");
      break;
    case 3150768:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_ROSE");
      break;
    case 3150769:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_STRIPES");
      break;
    case 3150770:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_TROJAN");
      break;
    case 3150771:
      result = sub_630F40((int)"SID_CARD_BIGCARDBACK_POKER_UMBRELLAS");
      break;
    default:
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2860);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_6385E0
// entry 006385e0  size 16  status ok
//======================================================================

int sub_6385E0()
{
  return dword_762294;
}


//======================================================================
// sub_6385F0
// entry 006385f0  size 81  status ok
//======================================================================

int __thiscall sub_6385F0(void *this, int a2)
{
  if ( a2 >= 0 && a2 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 428))(this) )
    return dword_76227C[a2];
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2880);
  return 0;
}


//======================================================================
// sub_638650
// entry 00638650  size 228  status ok
//======================================================================

int __thiscall sub_638650(void *this, int a2)
{
  int v3; // esi
  int i; // [esp+8h] [ebp-8h]
  int j; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 428))(this);
  for ( i = 0; i < v7; ++i )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 432))(this, i) == a2 )
      return i;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2895);
  for ( j = 0; j < v7; ++j )
  {
    v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 432))(this, j);
    if ( v3 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 440))(this) )
      return j;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2901);
  return 0;
}


//======================================================================
// sub_638740
// entry 00638740  size 175  status ok
//======================================================================

int __stdcall sub_638740(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3150140:
      result = sub_630F40((int)"SID_CARD_BIGCARDFRONT_BRIDGEJUMBO");
      break;
    case 3150144:
      result = sub_630F40((int)"SID_CARD_BIGCARDFRONT_BRIDGE");
      break;
    case 3150148:
      result = sub_630F40((int)"SID_CARD_BIGCARDFRONT_POKERJUMBO");
      break;
    case 3150152:
      result = sub_630F40((int)"SID_CARD_BIGCARDFRONT_POKER");
      break;
    case 3150156:
      result = sub_630F40((int)"SID_CARD_BIGCARDFRONT_SOLITAIREJUMBO");
      break;
    case 3150160:
      result = sub_630F40((int)"SID_CARD_BIGCARDFRONT_SOLITAIRE");
      break;
    default:
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2927);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_638830
// entry 00638830  size 25  status ok
//======================================================================

BOOL __stdcall sub_638830(int a1)
{
  return a1 >= 3150000;
}


//======================================================================
// sub_638850
// entry 00638850  size 25  status ok
//======================================================================

BOOL __stdcall sub_638850(int a1)
{
  return a1 == 3150000;
}


//======================================================================
// sub_638870
// entry 00638870  size 52  status ok
//======================================================================

bool __stdcall sub_638870(int a1)
{
  return a1 == 3150001 || a1 == 3150002;
}


//======================================================================
// sub_6388B0
// entry 006388b0  size 125  status ok
//======================================================================

int __thiscall sub_6388B0(Concurrency::details::ContextBase *this)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-Ch]
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 828))(
         this,
         ExecutingCollection) )
  {
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
           this,
           ExecutingCollection);
    if ( v4 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4);
      if ( v6 )
        return v6;
    }
  }
  v2 = sub_6375B0((_DWORD **)this);
  return sub_639FF0(v2, this);
}


//======================================================================
// sub_638930
// entry 00638930  size 55  status ok
//======================================================================

int __thiscall sub_638930(void *this, int a2)
{
  if ( a2 < 0 || a2 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 464))(this) )
    return -1;
  else
    return dword_762108[a2];
}


//======================================================================
// sub_638970
// entry 00638970  size 16  status ok
//======================================================================

int sub_638970()
{
  return dword_762174;
}


//======================================================================
// sub_638980
// entry 00638980  size 209  status ok
//======================================================================

int __thiscall sub_638980(void *this, int a2)
{
  int v2; // esi
  int i; // [esp+8h] [ebp-8h]
  int j; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 464))(this);
  if ( byte_795F94 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 468))(this, i);
      if ( v2 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 476))(this) )
        return i;
    }
  }
  for ( j = 0; j < v7; ++j )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 468))(this, j) == a2 )
      return j;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 2998);
  return 0;
}


//======================================================================
// sub_638A60
// entry 00638a60  size 53  status ok
//======================================================================

int __thiscall sub_638A60(void *this)
{
  signed int v1; // eax
  int v2; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 464))(this);
  v2 = sub_62FBF0(v1);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 468))(this, v2);
}


//======================================================================
// sub_638AA0
// entry 00638aa0  size 547  status ok
//======================================================================

int __stdcall sub_638AA0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 2300000:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_BEACH");
      break;
    case 2300001:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_CITYSCAPE");
      break;
    case 2300002:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_CUBIST");
      break;
    case 2300003:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_BLUEFELT");
      break;
    case 2300004:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_GREENFELT");
      break;
    case 2300005:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_REDFELT");
      break;
    case 2300006:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_KNOTS");
      break;
    case 2300007:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_MARBLEDPAPER");
      break;
    case 2300008:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_METAL");
      break;
    case 2300009:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_MUSIC");
      break;
    case 2300010:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_NOUVEAU");
      break;
    case 2300011:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_POLLEN");
      break;
    case 2300012:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_POOLOFLEAVES");
      break;
    case 2300013:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_RAINYPANE");
      break;
    case 2300014:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_RUNICWALL");
      break;
    case 2300015:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_RUST");
      break;
    case 2300016:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_SKY");
      break;
    case 2300017:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_SKYCANVAS");
      break;
    case 2300018:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_SQUARES");
      break;
    case 2300019:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_STEELPLATE");
      break;
    case 2300020:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_TABLETOPFALL");
      break;
    case 2300021:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_TABLETOPSPRING");
      break;
    case 2300022:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_TABLETOPSUMMER");
      break;
    case 2300023:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_TABLETOPWINTER");
      break;
    case 2300024:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_TROJANHORSE");
      break;
    case 2300025:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_WICKER");
      break;
    case 2300026:
      result = sub_630F40((int)"SID_SHELL_BACKGROUNDNAME_ZEN");
      break;
    default:
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3061);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_638D30
// entry 00638d30  size 307  status ok
//======================================================================

int __stdcall sub_638D30(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 2300000:
      result = 2300500;
      break;
    case 2300001:
      result = 2300501;
      break;
    case 2300002:
      result = 2300502;
      break;
    case 2300003:
      result = 2300503;
      break;
    case 2300004:
      result = 2300504;
      break;
    case 2300005:
      result = 2300505;
      break;
    case 2300006:
      result = 2300506;
      break;
    case 2300007:
      result = 2300507;
      break;
    case 2300008:
      result = 2300508;
      break;
    case 2300009:
      result = 2300509;
      break;
    case 2300010:
      result = 2300510;
      break;
    case 2300011:
      result = 2300511;
      break;
    case 2300012:
      result = 2300512;
      break;
    case 2300013:
      result = 2300513;
      break;
    case 2300014:
      result = 2300514;
      break;
    case 2300015:
      result = 2300515;
      break;
    case 2300016:
      result = 2300516;
      break;
    case 2300017:
      result = 2300517;
      break;
    case 2300018:
      result = 2300518;
      break;
    case 2300019:
      result = 2300519;
      break;
    case 2300020:
      result = 2300520;
      break;
    case 2300021:
      result = 2300521;
      break;
    case 2300022:
      result = 2300522;
      break;
    case 2300023:
      result = 2300523;
      break;
    case 2300024:
      result = 2300524;
      break;
    case 2300025:
      result = 2300525;
      break;
    case 2300026:
      result = 2300526;
      break;
    default:
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3103);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_638ED0
// entry 00638ed0  size 115  status ok
//======================================================================

bool __thiscall sub_638ED0(_DWORD *this, int a2)
{
  if ( a2 >= 0
    && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    return CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * a2))->rcSource.left == 0;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3115);
  return 1;
}


//======================================================================
// sub_638F50
// entry 00638f50  size 150  status ok
//======================================================================

bool __thiscall sub_638F50(_DWORD *this, int a2)
{
  CImageDisplay *v5; // [esp+8h] [ebp-Ch]

  if ( a2 >= 0
    && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    v5 = *(CImageDisplay **)(*(this + 22) + 4 * a2);
    return CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3125);
    return 0;
  }
}


//======================================================================
// sub_638FF0
// entry 00638ff0  size 115  status ok
//======================================================================

bool __thiscall sub_638FF0(_DWORD *this, int a2)
{
  if ( a2 >= 0
    && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    return CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * a2))->rcSource.left == 1;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3140);
  return 0;
}


//======================================================================
// sub_639070
// entry 00639070  size 149  status ok
//======================================================================

LONG *__thiscall sub_639070(_DWORD *this, int a2)
{
  if ( a2 >= 0
    && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    if ( sub_638ED0(this, a2) )
      sub_5E9F20("!IsPlayerEmpty(p)", "..\\casinoShell\\shell.cpp", 3164);
    return &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 22) + 4 * a2))->rcSource.top;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3160);
    return (LONG *)&Source;
  }
}


//======================================================================
// sub_639110
// entry 00639110  size 114  status ok
//======================================================================

int __thiscall sub_639110(_DWORD *this, int a2)
{
  if ( a2 >= 0
    && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    return *(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * a2) + 32);
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3171);
  return *(_DWORD *)(*(_DWORD *)*(this + 22) + 32);
}


//======================================================================
// sub_639390
// entry 00639390  size 118  status ok
//======================================================================

char __thiscall sub_639390(_DWORD *this, int *a2, int a3, int a4, char a5)
{
  if ( *a2 < 0
    || *a2 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    return sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3217);
  }
  sub_639110(this, *a2);
  return sub_6476F0(a2, a3, a4, -1, a5);
}


//======================================================================
// sub_6394C0
// entry 006394c0  size 90  status ok
//======================================================================

int __stdcall sub_6394C0(int a1, char a2)
{
  _BYTE v3[12]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v4[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( a2 )
    return *(_DWORD *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *, int))(*(_DWORD *)dword_162EE84
                                                                                               + 492))(
                        dword_162EE84,
                        v4,
                        a1);
  else
    return *(_DWORD *)((*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *, int))(*(_DWORD *)dword_162EE84
                                                                                                + 492))(
                         dword_162EE84,
                         v3,
                         a1)
                     + 4);
}


//======================================================================
// sub_639520
// entry 00639520  size 107  status ok
//======================================================================

int __stdcall sub_639520(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; dword_763570[224 * i] != -1; ++i )
  {
    if ( dword_763570[224 * i] == a1 )
      return i;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3262);
  return 0;
}


//======================================================================
// sub_639590
// entry 00639590  size 127  status ok
//======================================================================

int __thiscall sub_639590(void *this, int a2)
{
  int i; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 360))(
              dword_162EE84,
              this);
        v5 < i;
        i = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 360))(
              dword_162EE84,
              v4) )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
           dword_162EE84,
           v5) == a2 )
      return v5;
    ++v5;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 3274);
  return 0;
}


//======================================================================
// sub_639610
// entry 00639610  size 90  status ok
//======================================================================

int __stdcall sub_639610(int a1, char a2)
{
  BOOL v3; // [esp+0h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-4h]

  v4 = sub_639520(a1);
  v3 = dword_763574[224 * v4] == 1 && !a2;
  return v3 + dword_763578[224 * v4];
}


//======================================================================
// sub_639670
// entry 00639670  size 29  status ok
//======================================================================

int __stdcall sub_639670(int a1, char a2)
{
  return sub_639610(a1, a2);
}


//======================================================================
// sub_639690
// entry 00639690  size 53  status ok
//======================================================================

const char *__stdcall sub_639690(unsigned int a1)
{
  if ( a1 < 0x2C )
    return (const char *)sub_630F40((int)off_76FE28[a1]);
  else
    return &Source;
}


//======================================================================
// sub_6396D0
// entry 006396d0  size 46  status ok
//======================================================================

char *__thiscall sub_6396D0(void *this, int a2, char *Destination)
{
  const char *v3; // eax

  v3 = (const char *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 952))(this, a2);
  return strcpy(Destination, v3);
}


//======================================================================
// sub_639700
// entry 00639700  size 37  status ok
//======================================================================

int __stdcall sub_639700(int a1)
{
  return dword_763574[224 * sub_639520(a1)];
}


//======================================================================
// sub_639730
// entry 00639730  size 16  status ok
//======================================================================

int sub_639730()
{
  return 3200209;
}


//======================================================================
// sub_639740
// entry 00639740  size 45  status ok
//======================================================================

int __stdcall sub_639740(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  *a1 = dword_763340;
  result = dword_763344;
  *a2 = dword_763344;
  *a3 = dword_763348;
  return result;
}


//======================================================================
// sub_639770
// entry 00639770  size 45  status ok
//======================================================================

int __stdcall sub_639770(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  *a1 = dword_76334C;
  result = dword_763350;
  *a2 = dword_763350;
  *a3 = dword_763354;
  return result;
}


//======================================================================
// sub_6397A0
// entry 006397a0  size 148  status ok
//======================================================================

int sub_6397A0()
{
  int result; // eax
  void *v1; // eax
  void *v2; // eax

  result = (unsigned __int8)byte_795FBF;
  if ( byte_795FBF )
  {
    if ( dword_15E55E4 )
    {
      result = sub_5F2300(dword_15E55E4, 100000);
      if ( result )
      {
        v1 = (void *)sub_5F2300(dword_15E55E4, 100000);
        return sub_5FDFF0(v1, 100011, 100002);
      }
    }
  }
  else if ( dword_15E55E4 )
  {
    result = sub_5F2300(dword_15E55E4, 100000);
    if ( result )
    {
      v2 = (void *)sub_5F2300(dword_15E55E4, 100000);
      return sub_5FDFF0(v2, 100002, 100011);
    }
  }
  return result;
}


//======================================================================
// sub_639840
// entry 00639840  size 54  status ok
//======================================================================

bool sub_639840()
{
  return byte_795FBF && byte_7960C6;
}


//======================================================================
// sub_6398C0
// entry 006398c0  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_6398C0(_DWORD *this)
{
  sub_5F71F0(this, 1, 0);
  *this = &GameSelectDialog::`vftable';
  sub_5F83D0(this, 3200243, 0);
  return this;
}


//======================================================================
// sub_639950
// entry 00639950  size 262  status ok
//======================================================================

_DWORD *__thiscall sub_639950(void *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v4; // [esp+8h] [ebp-40h]
  _DWORD *v6; // [esp+18h] [ebp-30h]
  _DWORD v7[5]; // [esp+24h] [ebp-24h] BYREF
  _DWORD *v8; // [esp+38h] [ebp-10h]
  int v9; // [esp+44h] [ebp-4h]

  v6 = operator new(0x178u);
  v9 = 0;
  if ( v6 )
  {
    sub_5EAAF0(v6);
    v4 = v2;
  }
  else
  {
    v4 = 0;
  }
  v9 = -1;
  v8 = v4;
  sub_5EAF00((int)v4, 3200243);
  (*(void (__thiscall **)(_DWORD *))(*v8 + 64))(v8);
  sub_5EBF80(v4, v7);
  if ( v8 )
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1);
  v7[4] = v7[3] - v7[1];
  return sub_5FA5B0(this, 0, 0, a2, 73, v7[2] - v7[0] - 17, 25, 3, 3, 1, 18, -1);
}


//======================================================================
// sub_639D40
// entry 00639d40  size 21  status ok
//======================================================================

_BYTE *__thiscall sub_639D40(_BYTE *this, int a2)
{
  return sub_5F8990(this);
}


//======================================================================
// sub_639DF0
// entry 00639df0  size 27  status ok
//======================================================================

int __thiscall sub_639DF0(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 200))(this, this);
}


//======================================================================
// sub_639E10
// entry 00639e10  size 27  status ok
//======================================================================

int __thiscall sub_639E10(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 360))(this, this);
}


//======================================================================
// sub_639E40
// entry 00639e40  size 16  status ok
//======================================================================

int sub_639E40()
{
  return 1000;
}


//======================================================================
// sub_639E50
// entry 00639e50  size 16  status ok
//======================================================================

int sub_639E50()
{
  return 2500000;
}


//======================================================================
// sub_639E60
// entry 00639e60  size 16  status ok
//======================================================================

int sub_639E60()
{
  return 100;
}


//======================================================================
// sub_639EA0
// entry 00639ea0  size 80  status ok
//======================================================================

int __thiscall sub_639EA0(CImageDisplay *this, int a2)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 117);
  return *((char *)&CImageDisplay::GetDisplayFormat(this)->bmiColors[1].rgbGreen + a2);
}


//======================================================================
// sub_639EF0
// entry 00639ef0  size 85  status ok
//======================================================================

char __thiscall sub_639EF0(CImageDisplay *this, int a2)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 128);
  return *(&CImageDisplay::GetDisplayFormat(this)->bmiColors[132].rgbBlue + a2);
}


//======================================================================
// sub_639F50
// entry 00639f50  size 79  status ok
//======================================================================

RGBQUAD __thiscall sub_639F50(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 132);
  return CImageDisplay::GetDisplayFormat(this)->TrueColorInfo.bmiColors[128];
}


//======================================================================
// sub_639FA0
// entry 00639fa0  size 79  status ok
//======================================================================

RGBQUAD __thiscall sub_639FA0(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 134);
  return CImageDisplay::GetDisplayFormat(this)->TrueColorInfo.bmiColors[194];
}


//======================================================================
// sub_639FF0
// entry 00639ff0  size 79  status ok
//======================================================================

RGBQUAD __thiscall sub_639FF0(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 136);
  return CImageDisplay::GetDisplayFormat(this)->TrueColorInfo.bmiColors[195];
}


//======================================================================
// sub_63A040
// entry 0063a040  size 79  status ok
//======================================================================

RGBQUAD __thiscall sub_63A040(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 138);
  return CImageDisplay::GetDisplayFormat(this)->TrueColorInfo.bmiColors[196];
}


//======================================================================
// sub_63A0C0
// entry 0063a0c0  size 83  status ok
//======================================================================

_DWORD *__thiscall sub_63A0C0(_DWORD *this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *this = &Player::`vftable';
  *(this + 8) = 0;
  memset(this + 10, 0, 0x384u);
  *(this + 3) = -1;
  *(this + 9) = 0;
  return this;
}


//======================================================================
// sub_63A120
// entry 0063a120  size 160  status ok
//======================================================================

void __thiscall sub_63A120(CNoTrackObject *this)
{
  *(_DWORD *)this = &Player::`vftable';
  if ( *((_DWORD *)this + 8) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
    *((_DWORD *)this + 8) = 0;
  }
  sub_63A2A0(this);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_63A1C0
// entry 0063a1c0  size 215  status ok
//======================================================================

int __thiscall sub_63A1C0(int this, int a2)
{
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  strcpy((char *)(this + 16), (const char *)(a2 + 16));
  if ( *(_DWORD *)(this + 32) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 32))(*(_DWORD *)(this + 32), 1);
    *(_DWORD *)(this + 32) = 0;
  }
  if ( *(_BYTE *)(this + 16) )
  {
    sub_63AB10((char *)(this + 16));
  }
  else
  {
    sub_63A2A0(this);
    qmemcpy((void *)(this + 40), (const void *)(a2 + 40), 0x384u);
    *(_DWORD *)(this + 932) = 0;
    *(_DWORD *)(this + 936) = 0;
  }
  return this;
}


//======================================================================
// sub_63A2A0
// entry 0063a2a0  size 319  status ok
//======================================================================

char __thiscall sub_63A2A0(int this)
{
  int i; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 932) )
  {
    operator delete(*(void **)(this + 932));
    *(_DWORD *)(this + 932) = 0;
  }
  if ( *(_DWORD *)(this + 936) )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
          ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 936) + 4 * i) )
        operator delete(*(void **)(*(_DWORD *)(this + 936) + 4 * i));
      *(_DWORD *)(*(_DWORD *)(this + 936) + 4 * i) = 0;
    }
    operator delete(*(void **)(this + 936));
    *(_DWORD *)(this + 936) = 0;
  }
  memset((void *)(this + 40), 0, 0x384u);
  if ( *(_DWORD *)(this + 36) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 36))(*(_DWORD *)(this + 36), 1);
    *(_DWORD *)(this + 36) = 0;
  }
  return 1;
}


//======================================================================
// sub_63A3E0
// entry 0063a3e0  size 225  status ok
//======================================================================

int __thiscall sub_63A3E0(int this, int a2, LONG a3)
{
  unsigned int v3; // eax
  void **v5; // [esp+0h] [ebp-10h]
  int i; // [esp+Ch] [ebp-4h]

  *(_DWORD *)(this + 4) = a2;
  *(_DWORD *)(this + 8) = -1;
  *(_DWORD *)(this + 12) = -1;
  *(_BYTE *)(this + 16) = 0;
  sub_63A4D0(this);
  CImageDisplay::GetDisplayFormat((CImageDisplay *)v5)->rcSource.left = a3;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++i )
  {
    sub_63A720(i);
  }
  if ( v5[233] )
    operator delete(v5[233]);
  v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
  v5[233] = operator new(v3);
  return (*((int (__thiscall **)(void **))*v5 + 2))(v5);
}


//======================================================================
// sub_63A4D0
// entry 0063a4d0  size 591  status ok
//======================================================================

int __thiscall sub_63A4D0(CImageDisplay *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-24h]
  struct tagVIDEOINFO *DisplayFormat; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]
  int j; // [esp+18h] [ebp-10h]

  DisplayFormat = (struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(this);
  memset(DisplayFormat, 0, 0x37Cu);
  DisplayFormat->rcSource.left = 0;
  LOBYTE(DisplayFormat->rcSource.top) = 0;
  LOBYTE(DisplayFormat->bmiHeader.biHeight) = 0;
  DisplayFormat->bmiHeader.biClrImportant = 0;
  DisplayFormat->bmiColors[0].rgbBlue = 1;
  DisplayFormat->bmiColors[0].rgbGreen = 1;
  DisplayFormat->bmiColors[0].rgbRed = 1;
  DisplayFormat->bmiColors[0].rgbReserved = 3;
  DisplayFormat->bmiColors[1].rgbBlue = 5;
  DisplayFormat->bmiColors[200].rgbBlue = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 184))(dword_162EE84);
  DisplayFormat->bmiColors[129].rgbGreen = 1;
  DisplayFormat->TrueColorInfo.bmiColors[127] = (RGBQUAD)5;
  DisplayFormat->TrueColorInfo.bmiColors[128] = (RGBQUAD)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 384))(
                                                           dword_162EE84,
                                                           0);
  DisplayFormat->TrueColorInfo.bmiColors[194] = (RGBQUAD)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 416))(dword_162EE84);
  DisplayFormat->TrueColorInfo.bmiColors[195] = (RGBQUAD)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 440))(dword_162EE84);
  DisplayFormat->TrueColorInfo.bmiColors[196] = (RGBQUAD)-1;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++i )
  {
    *(&DisplayFormat->bmiColors[132].rgbBlue + i) = 1;
    *(&DisplayFormat->bmiColors[1].rgbGreen + i) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 256))(
                                                     dword_162EE84,
                                                     i);
  }
  DisplayFormat->bmiColors[196].rgbBlue = 0;
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84)
    && !*((_DWORD *)this + 9) )
  {
    if ( operator new(0xB04u) )
      v2 = sub_66F8B0(this);
    else
      v2 = 0;
    *((_DWORD *)this + 9) = v2;
  }
  for ( j = 0; ; ++j )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84);
    if ( j >= result )
      break;
    *(&DisplayFormat->bmiColors[65].rgbGreen + j) = 0;
  }
  return result;
}


//======================================================================
// sub_63A720
// entry 0063a720  size 342  status ok
//======================================================================

char __thiscall sub_63A720(void **this, int a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  size_t v5; // eax

  if ( !*(this + 234) )
  {
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
    *(this + 234) = operator new(4 * v2);
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
    memset(*(this + 234), 0, 4 * v3);
  }
  if ( *((_DWORD *)*(this + 234) + a2) )
  {
    operator delete(*((void **)*(this + 234) + a2));
    *((_DWORD *)*(this + 234) + a2) = 0;
  }
  v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
         dword_162EE84,
         a2);
  *((_DWORD *)*(this + 234) + a2) = operator new(v4);
  v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
         dword_162EE84,
         a2);
  memset(*((void **)*(this + 234) + a2), 0, v5);
  return sub_635A40(dword_162EE84, a2, *((_DWORD *)*(this + 234) + a2));
}


//======================================================================
// sub_63A880
// entry 0063a880  size 75  status ok
//======================================================================

int __thiscall sub_63A880(_DWORD *this, struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 812))(
           dword_162EE84,
           ExecutingCollection,
           *(_DWORD *)(*(this + 234) + 4 * (_DWORD)ExecutingCollection));
}


//======================================================================
// sub_63A8D0
// entry 0063a8d0  size 496  status ok
//======================================================================

int __thiscall sub_63A8D0(int this, int a2, int a3, char a4, char a5, char a6)
{
  int v6; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int result; // eax
  int v9; // [esp+4h] [ebp-4Ch]
  int v11; // [esp+20h] [ebp-30h]
  _BYTE v12[8]; // [esp+24h] [ebp-2Ch] BYREF
  int v13; // [esp+2Ch] [ebp-24h]
  int v14; // [esp+40h] [ebp-10h]
  int v15; // [esp+4Ch] [ebp-4h]

  v14 = 0;
  v11 = 0;
  if ( !a3 )
    a3 = *((_DWORD *)dword_162EE84 + 5);
  if ( a2 != -1 )
    CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left = 1;
  sub_63B490(a2);
  if ( *(_DWORD *)(this + 32) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 32))(*(_DWORD *)(this + 32), 1);
  v15 = 0;
  if ( operator new(0x60u) )
    v9 = sub_6454F0();
  else
    v9 = 0;
  v15 = -1;
  v6 = v9;
  *(_DWORD *)(this + 32) = v9;
  LOBYTE(v6) = a4;
  sub_645820(this, a3, v6, a5, a6);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1) )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, _BYTE *, int))(*(_DWORD *)dword_162EE84 + 868))(
      dword_162EE84,
      ExecutingCollection,
      v12,
      -1);
    if ( *(int *)(this + 4) > -1 && *(_DWORD *)(this + 4) < v13 )
    {
      v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 452))(dword_162EE80, *(_DWORD *)(this + 4));
      v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 456))(dword_162EE80, *(_DWORD *)(this + 4));
    }
  }
  sub_646150(v14, v11);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 164))(dword_162EE80);
  if ( (_BYTE)result )
  {
    if ( v14 != -1 )
      return sub_6464D0(0, 0);
  }
  return result;
}


//======================================================================
// sub_63AAE0
// entry 0063aae0  size 48  status ok
//======================================================================

int __thiscall sub_63AAE0(_DWORD *this, struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  return *(_DWORD *)(*(this + 234) + 4 * (_DWORD)ExecutingCollection);
}


//======================================================================
// sub_63AB10
// entry 0063ab10  size 1415  status ok
//======================================================================

char __thiscall sub_63AB10(int this, char *Source)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  size_t v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  FILE *v11; // [esp-4h] [ebp-458h]
  int v12; // [esp+4h] [ebp-450h]
  void *v15; // [esp+18h] [ebp-43Ch]
  void *v16; // [esp+20h] [ebp-434h]
  int Offset; // [esp+2Ch] [ebp-428h] BYREF
  int Buffer; // [esp+30h] [ebp-424h] BYREF
  char v19; // [esp+37h] [ebp-41Dh]
  FILE *Stream; // [esp+38h] [ebp-41Ch]
  size_t v21; // [esp+3Ch] [ebp-418h]
  char Destination[1028]; // [esp+40h] [ebp-414h] BYREF
  int v23; // [esp+450h] [ebp-4h]

  memset(Destination, 0, 1024);
  strcat(Destination, Source);
  Stream = sub_5EA9C0(Destination, "rb");
  if ( !Stream )
    return 0;
  v21 = fread(&Buffer, 4u, 1u, Stream);
  if ( v21 == -1 )
  {
    fclose(Stream);
    remove(Destination);
    return 0;
  }
  else
  {
    strcpy((char *)(this + 16), Source);
    sub_63A2A0(this);
    if ( Buffer == 900 )
    {
      v21 = fread((void *)(this + 40), 0x384u, 1u, Stream);
      *(_DWORD *)(this + 932) = 0;
      *(_DWORD *)(this + 936) = 0;
    }
    else
    {
      sub_63A4D0((CImageDisplay *)this);
      fseek(Stream, Buffer, 1);
      if ( Buffer != 900 )
        sub_5E9F20("i == sizeof(GameSettings)", "..\\casinoShell\\player.cpp", 222);
    }
    v21 = fread(&Buffer, 4u, 1u, Stream);
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
    *(_DWORD *)(this + 932) = operator new(v3);
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84) )
    {
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
      if ( Buffer == v4 )
      {
        v11 = Stream;
        v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
        fread(*(void **)(this + 932), v6, 1u, v11);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
        fseek(Stream, Buffer, 1);
        v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
        if ( Buffer != v5 )
          sub_5E9F20("i == shell->GetSizeOfProductSpecificSettings()", "..\\casinoShell\\player.cpp", 239);
      }
    }
    v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
    *(_DWORD *)(this + 936) = operator new(4 * v7);
    v19 = 0;
    for ( Buffer = 0; ; ++Buffer )
    {
      v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
      if ( Buffer >= v8 )
        break;
      fread(&Offset, 4u, 1u, Stream);
      v9 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
             dword_162EE84,
             Buffer);
      v16 = operator new(v9);
      *(_DWORD *)(*(_DWORD *)(this + 936) + 4 * Buffer) = v16;
      v10 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
              dword_162EE84,
              Buffer);
      if ( Offset == v10 )
      {
        fread(*(void **)(*(_DWORD *)(this + 936) + 4 * Buffer), Offset, 1u, Stream);
      }
      else
      {
        sub_63A720((void **)this, Buffer);
        fseek(Stream, Offset, 1);
        v19 = 1;
      }
    }
    fclose(Stream);
    if ( v19 )
      sub_63B0A0(this);
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84) )
    {
      if ( CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 3 )
      {
        if ( !*(_DWORD *)(this + 36) )
        {
          v15 = operator new(0xB04u);
          v23 = 0;
          if ( v15 )
            v12 = sub_66F8B0(this);
          else
            v12 = 0;
          v23 = -1;
          *(_DWORD *)(this + 36) = v12;
        }
        sub_66F960(this);
      }
    }
    return 1;
  }
}


//======================================================================
// sub_63B0A0
// entry 0063b0a0  size 551  status ok
//======================================================================

char __thiscall sub_63B0A0(int this)
{
  size_t v2; // eax
  int v3; // eax
  FILE *v4; // [esp-4h] [ebp-41Ch]
  size_t ElementSize; // [esp+4h] [ebp-414h] BYREF
  int Buffer; // [esp+8h] [ebp-410h] BYREF
  FILE *Stream; // [esp+Ch] [ebp-40Ch]
  char Destination[1028]; // [esp+10h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  strcat(Destination, (const char *)(this + 16));
  if ( *(_BYTE *)(this + 16) )
  {
    Stream = sub_5EA9C0(Destination, "wb");
    if ( Stream )
    {
      Buffer = 900;
      fwrite(&Buffer, 4u, 1u, Stream);
      fwrite((const void *)(this + 40), 0x384u, 1u, Stream);
      Buffer = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
      fwrite(&Buffer, 4u, 1u, Stream);
      v4 = Stream;
      v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 240))(dword_162EE84);
      fwrite(*(const void **)(this + 932), v2, 1u, v4);
      for ( Buffer = 0; ; ++Buffer )
      {
        v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        if ( Buffer >= v3 )
          break;
        ElementSize = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 264))(
                        dword_162EE84,
                        Buffer);
        fwrite(&ElementSize, 4u, 1u, Stream);
        fwrite(*(const void **)(*(_DWORD *)(this + 936) + 4 * Buffer), ElementSize, 1u, Stream);
      }
      fclose(Stream);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\player.cpp", 295);
    return 0;
  }
}


//======================================================================
// sub_63B2D0
// entry 0063b2d0  size 104  status ok
//======================================================================

int __thiscall sub_63B2D0(int *this)
{
  int result; // eax

  if ( *(this + 8) )
    sub_646C20(1);
  result = *(this + 8);
  if ( result )
    result = (**(int (__thiscall ***)(_DWORD, int))*(this + 8))(*(this + 8), 1);
  *(this + 8) = 0;
  return result;
}


//======================================================================
// sub_63B340
// entry 0063b340  size 49  status ok
//======================================================================

char __thiscall sub_63B340(_DWORD *this)
{
  if ( *(this + 8) )
    return sub_6480D0(*(this + 8));
  else
    return 0;
}


//======================================================================
// sub_63B380
// entry 0063b380  size 49  status ok
//======================================================================

char __thiscall sub_63B380(_DWORD *this)
{
  if ( *(this + 8) )
    return sub_648140(*(this + 8));
  else
    return 0;
}


//======================================================================
// sub_63B3C0
// entry 0063b3c0  size 126  status ok
//======================================================================

char __thiscall sub_63B3C0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( !*(this + 8) || !unknown_libname_732(*(this + 8)) )
    return sub_5E9F20("false", "..\\casinoShell\\player.cpp", 348);
  v3 = unknown_libname_732(*(this + 8));
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 400) + 180))(*(_DWORD *)(v3 + 400), a2);
}


//======================================================================
// sub_63B490
// entry 0063b490  size 134  status ok
//======================================================================

char *__thiscall sub_63B490(CImageDisplay *this, char *a2)
{
  char *result; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  char Source[52]; // [esp+4h] [ebp-38h] BYREF

  if ( *((_DWORD *)this + 8) )
    sub_648270(1);
  result = a2;
  *((_DWORD *)this + 2) = a2;
  if ( *((_DWORD *)this + 2) != -1 )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, char *))(*(_DWORD *)dword_162EE84 + 948))(
      dword_162EE84,
      *((_DWORD *)this + 2),
      Source);
    DisplayFormat = CImageDisplay::GetDisplayFormat(this);
    return strcpy((char *)&DisplayFormat->rcSource.top, Source);
  }
  return result;
}


//======================================================================
// sub_63B520
// entry 0063b520  size 50  status ok
//======================================================================

int __thiscall sub_63B520(CImageDisplay *this, int a2, BYTE a3)
{
  const struct tagVIDEOINFO *DisplayFormat; // esi
  int result; // eax

  DisplayFormat = CImageDisplay::GetDisplayFormat(this);
  result = sub_639590(dword_162EE84, a2);
  *(&DisplayFormat->bmiColors[65].rgbGreen + result) = a3;
  return result;
}


//======================================================================
// sub_63B560
// entry 0063b560  size 101  status ok
//======================================================================

char __thiscall sub_63B560(CImageDisplay *this, int a2)
{
  const struct tagVIDEOINFO *DisplayFormat; // esi

  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20("!IsEmpty()", "..\\casinoShell\\player.cpp", 386);
  DisplayFormat = CImageDisplay::GetDisplayFormat(this);
  return *(&DisplayFormat->bmiColors[65].rgbGreen + sub_639590(dword_162EE84, a2));
}


//======================================================================
// sub_63B600
// entry 0063b600  size 478  status ok
//======================================================================

int __thiscall sub_63B600(int this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v2; // eax
  int i; // [esp+Ch] [ebp-10h]

  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = &SettingsDialog::`vftable';
  sub_5F83D0((_DWORD *)this, 3200221, 0);
  *(_BYTE *)(this + 440) = 1;
  sub_636E70(dword_162EE84);
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, int, int))(*(_DWORD *)dword_162EE84 + 868))(
    dword_162EE84,
    ExecutingCollection,
    this + 460,
    -1);
  v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
  *(_DWORD *)(this + 444) = operator new(4 * v2);
  *(_DWORD *)(this + 448) = 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    *(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_162EE80 + 340))(
      dword_162EE80,
      *(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i),
      *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i) + 32) = 0;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i) + 12) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84
                                                                                             + 22)
                                                                                           + 4 * i)
                                                                               + 12);
  }
  *(_DWORD *)(this + 488) = 0;
  *(_DWORD *)(this + 456) = 0;
  return this;
}


//======================================================================
// sub_63B7E0
// entry 0063b7e0  size 331  status ok
//======================================================================

int __thiscall sub_63B7E0(int this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+1Ch] [ebp-1Ch]
  void (__thiscall ***v4)(_DWORD, int); // [esp+24h] [ebp-14h]
  int i; // [esp+28h] [ebp-10h]

  *(_DWORD *)this = &SettingsDialog::`vftable';
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    sub_63A2A0(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i));
    v4 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this + 444) + 4 * i);
    if ( v4 )
      (**v4)(v4, 1);
  }
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 488);
  if ( v3 )
    (**v3)(v3, 1);
  if ( *(_DWORD *)(this + 444) )
    operator delete(*(void **)(this + 444));
  if ( *(_DWORD *)(this + 448) )
    operator delete(*(void **)(this + 448));
  return sub_5F7260((void (__thiscall ****)(_DWORD, int))this);
}


//======================================================================
// sub_63B930
// entry 0063b930  size 1325  status ok
//======================================================================

int __thiscall sub_63B930(_DWORD *this)
{
  int v1; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  const char *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // [esp-Ch] [ebp-180h]
  int v12; // [esp+8h] [ebp-16Ch]
  _DWORD *v13; // [esp+Ch] [ebp-168h]
  int v14; // [esp+10h] [ebp-164h]
  int v15; // [esp+14h] [ebp-160h]
  int v16; // [esp+18h] [ebp-15Ch]
  int v17; // [esp+1Ch] [ebp-158h]
  _DWORD *v19; // [esp+24h] [ebp-150h]
  _DWORD *v20; // [esp+2Ch] [ebp-148h]
  _DWORD *v21; // [esp+34h] [ebp-140h]
  char v22[32]; // [esp+40h] [ebp-134h] BYREF
  char Buffer[256]; // [esp+60h] [ebp-114h] BYREF
  int v24; // [esp+164h] [ebp-10h]
  int v25; // [esp+170h] [ebp-4h]

  if ( !*(this + 112) )
  {
    v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    *(this + 112) = operator new(8 * v1);
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 244))(dword_162EE80, *(this + 112));
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, char *))(*(_DWORD *)dword_162EE84 + 824))(
    dword_162EE84,
    ExecutingCollection,
    v22);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 176))(dword_162EE80) )
    v3 = (const char *)sub_630F40((int)"SID_SHELL_GAMEPLAYERS_FORMAT");
  else
    v3 = (const char *)sub_630F40((int)"SID_SHELL_GAMESETTINGS_FORMAT");
  sprintf(Buffer, v3, v22);
  sub_5FA5B0(this, 0, -1, (int)Buffer, 73, 505, 25, 5, 3, 1, 18, -1);
  v24 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 184))(dword_162EE80);
  if ( v24 )
  {
    sub_5F9DE0(this, 0, 0, 3200229, 334, 392, 1, v24, 72, 75, 74, -1, 0);
  }
  else
  {
    v17 = sub_630F40((int)"SID_GENERIC_OK");
    sub_5F9DE0(this, 0, 0, 3200229, 334, 392, 1, v17, 72, 75, 74, -1, 0);
  }
  v24 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 188))(dword_162EE80);
  if ( v24 )
  {
    sub_5F9DE0(this, 0, 1, 3200222, 424, 392, 1, v24, 72, 75, 74, -1, 0);
  }
  else
  {
    v16 = sub_630F40((int)"SID_GENERIC_CANCEL");
    sub_5F9DE0(this, 0, 1, 3200222, 424, 392, 1, v16, 72, 75, 74, -1, 0);
  }
  v4 = (_BYTE *)sub_5FB300((int)this, 0);
  sub_6026F0(v4, 13);
  v5 = (_BYTE *)sub_5FB300((int)this, 1);
  sub_6026F0(v5, 27);
  v21 = operator new(0x21Cu);
  v25 = 0;
  if ( v21 )
  {
    sub_5FF310(v21);
    *v21 = &SettingsDialogTab::`vftable';
    v15 = (int)v21;
  }
  else
  {
    v15 = 0;
  }
  v25 = -1;
  v6 = sub_630F40((int)"SID_GENERIC_SETTINGS");
  sub_5FA1E0((int)this, v15, 0, 3, 0, 3200219, 0, 0, 1, v6, 72, 75, 74, -1);
  v20 = operator new(0x21Cu);
  v25 = 1;
  if ( v20 )
  {
    sub_5FF310(v20);
    *v20 = &SettingsDialogTab::`vftable';
    v14 = (int)v20;
  }
  else
  {
    v14 = 0;
  }
  v25 = -1;
  v7 = sub_630F40((int)"SID_GENERIC_PLAYERS");
  sub_5FA1E0((int)this, v14, 0, 4, 0, 3200220, 0, 0, 1, v7, 72, 75, 74, -1);
  v19 = operator new(0x1D0u);
  v25 = 2;
  if ( v19 )
  {
    sub_5EC5A0(v19);
    *v19 = &SettingsHelpText::`vftable';
    v13 = v19;
  }
  else
  {
    v13 = 0;
  }
  v25 = -1;
  sub_5FA5B0(this, v13, -1, (int)&Source, 35, 320, 37, 7, 384, 1, 17, -1);
  v11 = sub_5FB480(this, 4, 0);
  v8 = sub_5FB480(this, 3, 0);
  (*(void (__thiscall **)(int, int, int, _DWORD *, int))(*(_DWORD *)dword_162EE80 + 200))(
    dword_162EE80,
    v8,
    v11,
    this,
    50);
  sub_63C260(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 176))(dword_162EE80) )
  {
    v12 = sub_5FB480(this, 3, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 208))(v12);
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 180))(dword_162EE80);
  if ( (_BYTE)result )
  {
    v10 = sub_5FB480(this, 4, 0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 208))(v10);
  }
  return result;
}


//======================================================================
// sub_63BE60
// entry 0063be60  size 773  status ok
//======================================================================

int __thiscall sub_63BE60(int this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  const CHAR *v5; // eax
  _BYTE *v6; // eax
  BYTE v7; // al
  const CHAR *v8; // [esp-8h] [ebp-2Ch]
  int v9; // [esp+4h] [ebp-20h]
  int v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-18h]
  int v12; // [esp+10h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-8h]
  unsigned __int8 v15; // [esp+23h] [ebp-1h]

  v15 = 0;
  result = a2;
  switch ( a2 )
  {
    case 0:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 128))(dword_162EE80) )
      {
        v3 = sub_63D860(this);
        if ( v3 != sub_636610(dword_162EE84) )
        {
          v15 = 1;
LABEL_10:
          sub_63E110(this);
          goto LABEL_11;
        }
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 128))(dword_162EE80)
        || (v4 = sub_63D860(this), v4 == sub_636610(dword_162EE84)) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 228))(
                dword_162EE80,
                this,
                50) )
          goto LABEL_10;
      }
      v8 = (const CHAR *)sub_630F40((int)"SID_SHELL_GAMEWILLRESTART");
      v5 = (const CHAR *)sub_630F40((int)"SID_SHELL_CHANGESWILLRESTART");
      result = sub_62FF10(v5, v8, 4u);
      if ( result != 7 )
      {
        v15 = 1;
        goto LABEL_10;
      }
      return result;
    case 1:
LABEL_11:
      sub_63E340(this);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 376))(dword_162EE80, a2);
      result = v15;
      if ( v15 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 132))(dword_162EE80, 1);
      return result;
    case 3:
    case 4:
      return result;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      *(_DWORD *)(this + 452) = a2 - 5;
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84);
      if ( !result )
        return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 364))(
                 dword_162EE80,
                 0,
                 0,
                 -1,
                 -1,
                 0);
      return result;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      sub_63D7C0(a2 - 13);
      return sub_63C620();
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
      return sub_63D920(a2 - 21);
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      return sub_63DA40(a2 - 29);
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
      v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * a2 - 148) + 8);
      v6 = (_BYTE *)sub_5FB350(this, a2);
      v7 = sub_600230(v6);
      return sub_63B520(**(CImageDisplay ***)(this + 444), v14, v7);
    case 45:
      if ( *(int *)(this + 456) > 0 )
      {
        *(_DWORD *)(this + 456) = 0;
        sub_63C620();
        v12 = sub_5FB300(this, 45);
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 208))(v12);
        v11 = sub_5FB300(this, 46);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 204))(v11);
      }
      return result;
    case 46:
      if ( *(int *)(this + 456) < 1 )
      {
        *(_DWORD *)(this + 456) = 1;
        sub_63C620();
        v10 = sub_5FB300(this, 45);
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 204))(v10);
        v9 = sub_5FB300(this, 46);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 208))(v9);
      }
      return result;
    default:
      return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_162EE80 + 204))(dword_162EE80, this, 50, a2);
  }
}


//======================================================================
// sub_63C1D0
// entry 0063c1d0  size 45  status ok
//======================================================================

int __thiscall sub_63C1D0(void *this, int a2)
{
  return (*(int (__thiscall **)(int, void *, int, int))(*(_DWORD *)dword_162EE80 + 208))(dword_162EE80, this, 50, a2);
}


//======================================================================
// sub_63C200
// entry 0063c200  size 45  status ok
//======================================================================

int __thiscall sub_63C200(void *this, int a2)
{
  return (*(int (__thiscall **)(int, void *, int, int))(*(_DWORD *)dword_162EE80 + 212))(dword_162EE80, this, 50, a2);
}


//======================================================================
// sub_63C230
// entry 0063c230  size 45  status ok
//======================================================================

int __thiscall sub_63C230(void *this, int a2)
{
  return (*(int (__thiscall **)(int, void *, int, int))(*(_DWORD *)dword_162EE80 + 216))(dword_162EE80, this, 50, a2);
}


//======================================================================
// sub_63C260
// entry 0063c260  size 953  status ok
//======================================================================

int __thiscall sub_63C260(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  struct Concurrency::details::SchedulerBase *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp-4h] [ebp-1Ch]
  _DWORD *v15; // [esp-4h] [ebp-1Ch]
  _DWORD *v16; // [esp-4h] [ebp-1Ch]
  _DWORD *v17; // [esp-4h] [ebp-1Ch]
  _DWORD *v18; // [esp-4h] [ebp-1Ch]
  CPaneContainer *v19; // [esp-4h] [ebp-1Ch]
  CPaneContainer *v20; // [esp-4h] [ebp-1Ch]
  CPaneContainer *v21; // [esp-4h] [ebp-1Ch]
  CPaneContainer *v22; // [esp-4h] [ebp-1Ch]
  int v23; // [esp+4h] [ebp-14h]
  int v24; // [esp+8h] [ebp-10h]
  int i; // [esp+14h] [ebp-4h]

  if ( (int)*(this + 117) > 8 )
    sub_5E9F20("counts.max <= (SETTINGS_DIALOG_SETTINGS_PLAYER_DL_COUNT)", "..\\casinoShell\\settingsdialog.cpp", 347);
  for ( i = 0; i < *(this + 117); ++i )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) )
    {
      v3 = (struct Concurrency::details::SchedulerBase *)sub_63D8E0(this);
      v15 = sub_5FAEE0(
              this,
              0,
              i + 5,
              3200209,
              *(_DWORD *)(*(this + 112) + 8 * i) + 105,
              *(_DWORD *)(*(this + 112) + 8 * i + 4),
              1,
              v3,
              0,
              (int)&Source,
              -1,
              -1,
              -1,
              -1);
      v4 = (_DWORD *)sub_5FB480(this, 4, 0);
      sub_5FF5A0(v4, (int)v15);
    }
    else
    {
      if ( i )
        v1 = sub_5F9DE0(
               this,
               0,
               i + 5,
               3200222,
               *(_DWORD *)(*(this + 112) + 8 * i) + 158,
               *(_DWORD *)(*(this + 112) + 8 * i + 4),
               1,
               (int)&Source,
               72,
               75,
               74,
               -1,
               0);
      else
        v1 = sub_5F9DE0(
               this,
               0,
               5,
               3200222,
               *(_DWORD *)*(this + 112) + 105,
               *(_DWORD *)(*(this + 112) + 4),
               1,
               (int)&Source,
               72,
               75,
               74,
               -1,
               0);
      v14 = (int)v1;
      v2 = (_DWORD *)sub_5FB480(this, 4, 0);
      sub_5FF5A0(v2, v14);
    }
    v16 = sub_5FA5B0(this, 0, i, (int)&Source, 31, 105, 15, 0, 0, 2, 5, -1);
    v5 = (_DWORD *)sub_5FB480(this, 4, 0);
    sub_5FF5A0(v5, (int)v16);
  }
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) <= 0 )
  {
    v23 = sub_5FB300((int)this, 5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 208))(v23);
  }
  else
  {
    v24 = sub_5FB5E0((int)this, 5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 208))(v24);
  }
  if ( (int)*(this + 117) > 4 )
  {
    v17 = sub_5F9DE0(this, 0, 45, 3200259, 40, 376, 1, (int)&Source, -1, -1, -1, -1, 0);
    v6 = (_DWORD *)sub_5FB480(this, 4, 0);
    sub_5FF5A0(v6, (int)v17);
    v18 = sub_5F9DE0(this, 0, 46, 3200260, 5, 376, 1, (int)&Source, -1, -1, -1, -1, 0);
    v7 = (_DWORD *)sub_5FB480(this, 4, 0);
    sub_5FF5A0(v7, (int)v18);
    v8 = sub_5FB300((int)this, 45);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 208))(v8, v8);
  }
  v19 = sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 1, 305, 260, 64, 3, 120, 124, 161, 0, 0, 0);
  v9 = (_DWORD *)sub_5FB480(this, 4, 0);
  sub_5FF5A0(v9, (int)v19);
  v20 = sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 1, 305, 261, 65, 1, 255, 255, 255, 0, 0, 0);
  v10 = (_DWORD *)sub_5FB480(this, 4, 0);
  sub_5FF5A0(v10, (int)v20);
  if ( (int)*(this + 117) > 2 )
  {
    v21 = sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 500, 1, 9, 209, 4, 120, 124, 161, 0, 0, 0);
    v11 = (_DWORD *)sub_5FB480(this, 4, 0);
    sub_5FF5A0(v11, (int)v21);
    v22 = sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 500, 1, 10, 210, 2, 255, 255, 255, 0, 0, 0);
    v12 = (_DWORD *)sub_5FB480(this, 4, 0);
    sub_5FF5A0(v12, (int)v22);
  }
  return sub_63C620();
}


//======================================================================
// sub_63C620
// entry 0063c620  size 3724  status ok
//======================================================================

int __thiscall sub_63C620(int this)
{
  int v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  int v28; // eax
  _DWORD *v30; // [esp-4h] [ebp-98h]
  int v31; // [esp-4h] [ebp-98h]
  int v32; // [esp-4h] [ebp-98h]
  _DWORD *v33; // [esp-4h] [ebp-98h]
  int v34; // [esp-4h] [ebp-98h]
  _DWORD *v35; // [esp-4h] [ebp-98h]
  int v36; // [esp-4h] [ebp-98h]
  int v37; // [esp-4h] [ebp-98h]
  int v38; // [esp-4h] [ebp-98h]
  int v39; // [esp-4h] [ebp-98h]
  int v40; // [esp-4h] [ebp-98h]
  _DWORD *v41; // [esp-4h] [ebp-98h]
  _DWORD *v42; // [esp-4h] [ebp-98h]
  int v43; // [esp-4h] [ebp-98h]
  int v44; // [esp-4h] [ebp-98h]
  int v45; // [esp-4h] [ebp-98h]
  int v46; // [esp-4h] [ebp-98h]
  int v47; // [esp-4h] [ebp-98h]
  int v48; // [esp-4h] [ebp-98h]
  int v49; // [esp+4h] [ebp-90h]
  int v50; // [esp+8h] [ebp-8Ch]
  int v51; // [esp+Ch] [ebp-88h]
  int v52; // [esp+10h] [ebp-84h]
  int v53; // [esp+14h] [ebp-80h]
  int v54; // [esp+18h] [ebp-7Ch]
  int v55; // [esp+1Ch] [ebp-78h]
  int v56; // [esp+20h] [ebp-74h]
  int v57; // [esp+24h] [ebp-70h]
  int v58; // [esp+28h] [ebp-6Ch]
  int v59; // [esp+2Ch] [ebp-68h]
  int v60; // [esp+30h] [ebp-64h]
  int v61; // [esp+34h] [ebp-60h]
  int v62; // [esp+38h] [ebp-5Ch]
  int v63; // [esp+3Ch] [ebp-58h]
  int v64; // [esp+40h] [ebp-54h]
  int v65; // [esp+44h] [ebp-50h]
  int v66; // [esp+48h] [ebp-4Ch]
  int v67; // [esp+4Ch] [ebp-48h]
  CImageDisplay *v70; // [esp+70h] [ebp-24h]
  int i; // [esp+84h] [ebp-10h]
  int j; // [esp+84h] [ebp-10h]
  int k; // [esp+84h] [ebp-10h]
  int m; // [esp+84h] [ebp-10h]
  int n; // [esp+84h] [ebp-10h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i) + 32) )
    {
      sub_63D570(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * i) + 32), 4);
      sub_63B2D0(*(int **)(*(_DWORD *)(this + 444) + 4 * i));
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 316))(dword_162EE80) )
    sub_64D5E0(*(_DWORD *)(this + 444));
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++j )
  {
    v70 = *(CImageDisplay **)(*(_DWORD *)(this + 444) + 4 * j);
    if ( CImageDisplay::GetDisplayFormat(v70)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v70)->rcSource.left == 3 )
    {
      if ( !sub_5FB300(this, j + 21) )
      {
        v1 = sub_630F40((int)"SID_SHELL_FACE");
        v30 = sub_5F9DE0(
                (void *)this,
                0,
                j + 21,
                3200200,
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j) + (j != 0 ? 178 : 105),
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4) + 30,
                1,
                v1,
                72,
                75,
                74,
                -1,
                0);
        v2 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF5A0(v2, (int)v30);
      }
      if ( sub_5FB300(this, j + 29) )
      {
        v31 = sub_5FB300(this, j + 29);
        v3 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v3, v31);
        sub_5FBCB0(this, 0, j + 29);
      }
      if ( sub_5FB350(this, j + 37) )
      {
        v32 = sub_5FB350(this, j + 37);
        v4 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v4, v32);
        sub_5FBCE0(this, 0, j + 37);
      }
    }
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(this + 444) + 4 * j))->rcSource.left == 1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * j) + 12) == -1 && !sub_5FB300(this, j + 29) )
      {
        v5 = sub_630F40((int)"SID_SHELL_BIO_ELLIPSIS");
        v33 = sub_5F9DE0(
                (void *)this,
                0,
                j + 29,
                3200200,
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j) + 178,
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4) + 30,
                1,
                v5,
                72,
                75,
                74,
                -1,
                0);
        v6 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF5A0(v6, (int)v33);
      }
      if ( sub_5FB300(this, j + 21) )
      {
        v34 = sub_5FB300(this, j + 21);
        v7 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v7, v34);
        sub_5FBCB0(this, 0, j + 21);
      }
      if ( !sub_5FB350(this, j + 37) )
      {
        v8 = sub_630F40((int)"SID_SHELL_PREFERREDPLAYER");
        v35 = sub_5F9EF0(
                (void *)this,
                0,
                j + 37,
                3200201,
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j),
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4) + 110,
                1,
                v8,
                31,
                69,
                66,
                -1,
                20,
                0);
        v9 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF5A0(v9, (int)v35);
      }
    }
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(this + 444) + 4 * j))->rcSource.left )
    {
      if ( !sub_5FB2B0(this, j) )
      {
        v41 = sub_5F9CE0(
                (void *)this,
                0,
                j,
                3200232,
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j) - 1,
                *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4) - 1,
                1,
                0,
                0xFFu,
                0);
        v16 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF5A0(v16, (int)v41);
      }
      if ( operator new(0x60u) )
        v66 = sub_6454F0();
      else
        v66 = 0;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * j) + 32) = v66;
      sub_645820(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * j), this, 0, 0, 0);
      sub_63D4B0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * j) + 32), 4);
      sub_6464D0(0, 0);
      sub_646150(*(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j), *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4));
      sub_646380(5);
      DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(_DWORD *)(this + 444) + 4 * j));
      sub_5FB5A0((void *)this, j, (int)&DisplayFormat->rcSource.top);
      v65 = sub_5FB550(this, j);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v65 + 68))(
        v65,
        *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j) + 2,
        *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4) + 87);
      if ( sub_5FB5E0(this, j + 5) )
      {
        v64 = sub_5FB5E0(this, j + 5);
        v18 = sub_630F40((int)"SID_SHELL_REPLACE");
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v64 + 220))(
          v64,
          v18,
          31,
          -1,
          -1,
          -1,
          0,
          0);
      }
      else if ( sub_5FB300(this, j + 5) )
      {
        v63 = sub_5FB300(this, j + 5);
        v19 = sub_630F40((int)"SID_SHELL_REPLACE");
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v63 + 224))(v63, v19);
      }
      if ( sub_5FB350(this, j + 37) )
      {
        if ( sub_63B560(
               **(CImageDisplay ***)(this + 444),
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * j) + 8)) )
        {
          v62 = sub_5FB350(this, j + 37);
          (*(void (__thiscall **)(int))(*(_DWORD *)v62 + 244))(v62);
        }
        else
        {
          v61 = sub_5FB350(this, j + 37);
          (*(void (__thiscall **)(int))(*(_DWORD *)v61 + 248))(v61);
        }
      }
      if ( sub_63D860(this) > *(_DWORD *)(this + 464) && j )
      {
        if ( !sub_5FB300(this, j + 13) )
        {
          v20 = sub_630F40((int)"SID_SHELL_CLEAR");
          v42 = sub_5F9DE0(
                  (void *)this,
                  0,
                  j + 13,
                  3200200,
                  *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j) + 105,
                  *(_DWORD *)(*(_DWORD *)(this + 448) + 8 * j + 4) + 30,
                  1,
                  v20,
                  72,
                  75,
                  74,
                  -1,
                  0);
          v21 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
          sub_5FF5A0(v21, (int)v42);
        }
      }
      else
      {
        v43 = sub_5FB300(this, j + 13);
        v22 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v22, v43);
        sub_5FBCB0(this, 0, j + 13);
      }
    }
    else
    {
      sub_5FB5A0((void *)this, j, (int)&Source);
      if ( sub_5FB5E0(this, j + 5) )
      {
        v67 = sub_5FB5E0(this, j + 5);
        v10 = sub_630F40((int)"SID_SHELL_ADD");
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v67 + 220))(
          v67,
          v10,
          31,
          -1,
          -1,
          -1,
          0,
          0);
      }
      v36 = sub_5FB300(this, j + 13);
      v11 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
      sub_5FF670(v11, v36);
      v37 = sub_5FB300(this, j + 21);
      v12 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
      sub_5FF670(v12, v37);
      v38 = sub_5FB300(this, j + 29);
      v13 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
      sub_5FF670(v13, v38);
      v39 = sub_5FB350(this, j + 37);
      v14 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
      sub_5FF670(v14, v39);
      v40 = sub_5FB2B0(this, j);
      v15 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
      sub_5FF670(v15, v40);
      sub_5FBCB0(this, 0, j + 13);
      sub_5FBCB0(this, 0, j + 21);
      sub_5FBCB0(this, 0, j + 29);
      sub_5FBCE0(this, 0, j + 37);
      sub_5FBC80(this, 0, j);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 64))(this, j);
  }
  if ( *(int *)(this + 468) > 4 )
  {
    if ( sub_63D860(this) > 3 )
    {
      v58 = sub_5FB300(this, 45);
      (*(void (__thiscall **)(int))(*(_DWORD *)v58 + 116))(v58);
      v57 = sub_5FB300(this, 46);
      (*(void (__thiscall **)(int))(*(_DWORD *)v57 + 116))(v57);
    }
    else
    {
      v60 = sub_5FB300(this, 45);
      (*(void (__thiscall **)(int))(*(_DWORD *)v60 + 112))(v60);
      v59 = sub_5FB300(this, 46);
      (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 112))(v59);
    }
    for ( k = 0;
          k < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++k )
    {
      if ( k < 4 * *(_DWORD *)(this + 456) || k >= 4 * *(_DWORD *)(this + 456) + 4 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 68))(this, k);
        if ( sub_5FB5E0(this, k + 5) )
        {
          v54 = sub_5FB5E0(this, k + 5);
          (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 112))(v54);
        }
        else if ( sub_5FB300(this, k + 5) )
        {
          v53 = sub_5FB300(this, k + 5);
          (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 112))(v53);
        }
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * k) + 32) )
        {
          sub_63D570(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 4 * k) + 32), 4);
          sub_63B2D0(*(int **)(*(_DWORD *)(this + 444) + 4 * k));
        }
        sub_5FB5A0((void *)this, k, (int)&Source);
        v44 = sub_5FB300(this, k + 13);
        v23 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v23, v44);
        v45 = sub_5FB300(this, k + 21);
        v24 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v24, v45);
        v46 = sub_5FB300(this, k + 29);
        v25 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v25, v46);
        v47 = sub_5FB350(this, k + 37);
        v26 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v26, v47);
        v48 = sub_5FB2B0(this, k);
        v27 = (_DWORD *)sub_5FB480((void *)this, 4, 0);
        sub_5FF670(v27, v48);
        sub_5FBCB0(this, 0, k + 13);
        sub_5FBCB0(this, 0, k + 21);
        sub_5FBCB0(this, 0, k + 29);
        sub_5FBCE0(this, 0, k + 37);
        sub_5FBC80(this, 0, k);
      }
      else if ( sub_5FB5E0(this, k + 5) )
      {
        v56 = sub_5FB5E0(this, k + 5);
        (*(void (__thiscall **)(int))(*(_DWORD *)v56 + 116))(v56);
      }
      else if ( sub_5FB300(this, k + 5) )
      {
        v55 = sub_5FB300(this, k + 5);
        (*(void (__thiscall **)(int))(*(_DWORD *)v55 + 116))(v55);
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 260))(dword_162EE80) )
  {
    for ( m = 0;
          m < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++m )
    {
      if ( sub_5FB300(this, m + 13) )
      {
        v52 = sub_5FB300(this, m + 13);
        (*(void (__thiscall **)(int))(*(_DWORD *)v52 + 208))(v52);
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 256))(dword_162EE80) )
  {
    for ( n = 0;
          n < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++n )
    {
      if ( sub_5FB5E0(this, n + 5) )
      {
        v51 = sub_5FB5E0(this, n + 5);
        (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 208))(v51);
      }
      else if ( sub_5FB300(this, n + 5) )
      {
        v50 = sub_5FB300(this, n + 5);
        (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 208))(v50);
      }
      if ( sub_5FB300(this, n + 13) )
      {
        v49 = sub_5FB300(this, n + 13);
        (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 208))(v49);
      }
    }
  }
  v28 = sub_5FB480((void *)this, 4, 0);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_162EE80 + 232))(dword_162EE80, v28, this);
  return (*(int (__cdecl **)(int))(*(_DWORD *)dword_162EE80 + 240))(50);
}


//======================================================================
// sub_63D4B0
// entry 0063d4b0  size 185  status ok
//======================================================================

void __thiscall sub_63D4B0(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp-4h] [ebp-Ch]
  int i; // [esp+4h] [ebp-4h]

  if ( a2 )
  {
    if ( a2[2] )
    {
      v6 = a2[2];
      v3 = (_DWORD *)sub_5FB480(this, a3, 0);
      sub_5FF5A0(v3, v6);
    }
    if ( a2[3] )
    {
      v7 = a2[3];
      v4 = (_DWORD *)sub_5FB480(this, a3, 0);
      sub_5FF5A0(v4, v7);
    }
    if ( a2[5] )
    {
      for ( i = 0; i < 27; ++i )
      {
        if ( *(_DWORD *)(a2[5] + 4 * i + 92) )
        {
          v8 = *(_DWORD *)(a2[5] + 4 * i + 92);
          v5 = (_DWORD *)sub_5FB480(this, a3, 0);
          sub_5FF5A0(v5, v8);
        }
      }
    }
  }
}


//======================================================================
// sub_63D570
// entry 0063d570  size 147  status ok
//======================================================================

void __thiscall sub_63D570(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // [esp-4h] [ebp-Ch]
  int v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp-4h] [ebp-Ch]
  int i; // [esp+4h] [ebp-4h]

  if ( a2 )
  {
    v6 = a2[2];
    v3 = (_DWORD *)sub_5FB480(this, a3, 0);
    sub_5FF670(v3, v6);
    v7 = a2[3];
    v4 = (_DWORD *)sub_5FB480(this, a3, 0);
    sub_5FF670(v4, v7);
    if ( a2[5] )
    {
      for ( i = 0; i < 27; ++i )
      {
        v8 = *(_DWORD *)(a2[5] + 4 * i + 92);
        v5 = (_DWORD *)sub_5FB480(this, a3, 0);
        sub_5FF670(v5, v8);
      }
    }
  }
}


//======================================================================
// sub_63D610
// entry 0063d610  size 83  status ok
//======================================================================

int __thiscall sub_63D610(void *this, int a2)
{
  void *v2; // eax

  sub_5F85D0((int)this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 180))(dword_162EE80) && a2 == 4 )
    a2 = 3;
  v2 = (void *)sub_5FB430((int)this, 0);
  return sub_6065D0(v2, a2);
}


//======================================================================
// sub_63D670
// entry 0063d670  size 25  status ok
//======================================================================

int __thiscall sub_63D670(_BYTE *this, int a2)
{
  return sub_5F72F0(this, a2);
}


//======================================================================
// sub_63D690
// entry 0063d690  size 302  status ok
//======================================================================

int __thiscall sub_63D690(_DWORD *this, int a2, int a3)
{
  int result; // eax
  char *v5; // [esp+Ch] [ebp-4h]

  if ( a2 < 100076 || a2 > 100108 )
  {
    if ( a2 == 100075 )
      return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 364))(
               dword_162EE80,
               0,
               0,
               -1,
               -1,
               0);
    else
      return (*(int (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)dword_162EE80 + 220))(
               dword_162EE80,
               this,
               50,
               a2,
               a3);
  }
  else
  {
    v5 = (char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 944))(
                   dword_162EE84,
                   a2);
    result = sub_63E000(v5);
    if ( (_BYTE)result )
    {
      CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.left = 1;
      sub_63B490(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)), v5);
      strcpy((char *)(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)) + 16), &Source);
      return sub_63C620((int)this);
    }
  }
  return result;
}


//======================================================================
// sub_63D7C0
// entry 0063d7c0  size 148  status ok
//======================================================================

int __thiscall sub_63D7C0(_DWORD *this, int a2)
{
  sub_63D570(this, *(_DWORD **)(*(_DWORD *)(*(this + 111) + 4 * a2) + 32), 4);
  sub_63B2D0(*(int **)(*(this + 111) + 4 * a2));
  sub_63A3E0(*(_DWORD *)(*(this + 111) + 4 * a2), a2, 0);
  CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * a2))->rcSource.left = 0;
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 236))(dword_162EE80, a2);
}


//======================================================================
// sub_63D860
// entry 0063d860  size 126  status ok
//======================================================================

int __thiscall sub_63D860(_DWORD *this)
{
  int v3; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.left )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_63D8E0
// entry 0063d8e0  size 54  status ok
//======================================================================

int __thiscall sub_63D8E0(_DWORD *this)
{
  if ( !*(this + 121) )
    return 5004;
  if ( *(this + 119) == 1 )
    return 5005;
  return 5003;
}


//======================================================================
// sub_63D920
// entry 0063d920  size 284  status ok
//======================================================================

int __thiscall sub_63D920(int *this, int a2)
{
  DWORD v2; // eax
  char *v4; // [esp-4h] [ebp-34h]
  int v5; // [esp+4h] [ebp-2Ch]
  LONG left; // [esp+Ch] [ebp-24h]

  *(this + 113) = a2;
  if ( !dword_1630690 )
  {
    if ( operator new(0x1ECu) )
    {
      left = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * a2))->rcSource.left;
      v4 = (char *)sub_57A470(*(CImageDisplay **)(*(this + 111) + 4 * a2));
      v2 = sub_4842B0(*(CImageDisplay **)(*(this + 111) + 4 * a2));
      v5 = sub_640D00(*(this + 113), left, v2, v4);
    }
    else
    {
      v5 = 0;
    }
    dword_1630690 = v5;
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 60))(v5);
    sub_5F7340((_DWORD **)dword_1630690, 0, 0);
  }
  return sub_65C4D0(dword_1630690);
}


//======================================================================
// sub_63DA40
// entry 0063da40  size 229  status ok
//======================================================================

int __thiscall sub_63DA40(int *this, int a2)
{
  int v3; // [esp+4h] [ebp-20h]

  if ( !*(this + 122) )
  {
    if ( operator new(0x56Cu) )
      v3 = sub_63FE70(*(_DWORD *)(*(_DWORD *)(*(this + 111) + 4 * a2) + 8));
    else
      v3 = 0;
    *(this + 122) = v3;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 122) + 60))(*(this + 122));
    sub_5F7340((_DWORD **)*(this + 122), 0, 0);
  }
  return sub_5F85D0(*(this + 122));
}


//======================================================================
// sub_63DB30
// entry 0063db30  size 38  status ok
//======================================================================

_BYTE *__thiscall sub_63DB30(_BYTE **this)
{
  _BYTE *result; // eax

  result = sub_5F8990(*(this + 122));
  *(this + 122) = 0;
  return result;
}


//======================================================================
// sub_63DB60
// entry 0063db60  size 821  status ok
//======================================================================

int __thiscall sub_63DB60(int *this, char *a2, char a3, char a4, char *Source)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const struct tagVIDEOINFO *v6; // eax
  char *Str1; // [esp+18h] [ebp-3Ch]
  char *Str2; // [esp+20h] [ebp-34h]
  CImageDisplay *v12; // [esp+28h] [ebp-2Ch]
  void (__thiscall ***v13)(_DWORD, int); // [esp+4Ch] [ebp-8h]
  int i; // [esp+50h] [ebp-4h]

  if ( *(_DWORD *)(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)) + 32) )
  {
    sub_63D570(this, *(_DWORD **)(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)) + 32), 4);
    v13 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)) + 32);
    if ( v13 )
      (**v13)(v13, 1);
    *(_DWORD *)(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)) + 32) = 0;
  }
  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.left )
    sub_63D7C0(this, *(this + 113));
  sub_63AB10(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)), a2);
  CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.left = a3;
  CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->bmiHeader.biClrImportant = a4;
  DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)));
  strcpy((char *)&DisplayFormat->bmiHeader.biHeight, Source);
  sub_63B0A0(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)));
  (*(void (__thiscall **)(int *, _DWORD))(*this + 72))(this, *(this + 113));
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( i != *(this + 113) )
    {
      v12 = *(CImageDisplay **)(*(this + 111) + 4 * i);
      if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3 )
      {
        Str2 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.top;
        Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.top;
        if ( !strcmp(Str1, Str2) )
        {
          CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.left = a3;
          CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->bmiHeader.biClrImportant = a4;
          v6 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i));
          strcpy((char *)&v6->bmiHeader.biHeight, Source);
        }
      }
    }
  }
  *(this + 113) = -1;
  return sub_63C620((int)this);
}


//======================================================================
// sub_63DEA0
// entry 0063dea0  size 207  status ok
//======================================================================

char __thiscall sub_63DEA0(_DWORD *this, char *Str2)
{
  char *Str1; // [esp+8h] [ebp-18h]
  CImageDisplay *v6; // [esp+10h] [ebp-10h]
  int i; // [esp+1Ch] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    v6 = *(CImageDisplay **)(*(this + 111) + 4 * i);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.top;
      if ( !strcmp(Str1, Str2) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_63DF70
// entry 0063df70  size 144  status ok
//======================================================================

char __thiscall sub_63DF70(_DWORD *this, int a2)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.left == 1
      && *(_DWORD *)(*(_DWORD *)(*(this + 111) + 4 * i) + 8) == a2 )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_63E000
// entry 0063e000  size 268  status ok
//======================================================================

char __thiscall sub_63E000(_DWORD *this, int a2)
{
  const char *v3; // eax
  const CHAR *v4; // eax
  int v5; // [esp-4h] [ebp-84h]
  char Buffer[108]; // [esp+10h] [ebp-70h] BYREF

  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.left == 1
    && *(_DWORD *)(*(_DWORD *)(*(this + 111) + 4 * *(this + 113)) + 8) == a2 )
  {
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 352))(dword_162EE84)
    || !sub_63DF70(this, a2) )
  {
    return 1;
  }
  v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 952))(
         dword_162EE84,
         a2);
  v3 = (const char *)sub_630F40((int)"SID_SHELL_ALREADYINGAME_FORMAT");
  sprintf(Buffer, v3, v5);
  v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_ALREADYINGAME_TITLE");
  sub_62FF10(Buffer, v4, 0);
  return 0;
}


//======================================================================
// sub_63E110
// entry 0063e110  size 557  status ok
//======================================================================

int __thiscall sub_63E110(_DWORD *this)
{
  int v1; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  BYTE v7; // [esp+8h] [ebp-20h]
  struct Concurrency::details::_TaskCollectionBase *v8; // [esp+Ch] [ebp-1Ch]
  CImageDisplay *v9; // [esp+10h] [ebp-18h]
  CImageDisplay *v10; // [esp+18h] [ebp-10h]
  int i; // [esp+24h] [ebp-4h]
  int j; // [esp+24h] [ebp-4h]

  v1 = sub_5FB480(this, 4, 0);
  (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)dword_162EE80 + 264))(dword_162EE80, v1, this, 50);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    sub_63B2D0(*(int **)(*(this + 111) + 4 * i));
    sub_63B2D0(*(int **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
  }
  for ( j = 0; ; ++j )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( j >= (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 260))(
                dword_162EE84,
                ExecutingCollection) )
      break;
    v10 = *(CImageDisplay **)(*(this + 111) + 4 * j);
    if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
    {
      sub_63B0A0(*(_DWORD *)(*(this + 111) + 4 * j));
    }
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 336))(
      dword_162EE80,
      j,
      *(_DWORD *)(*(this + 111) + 4 * j));
  }
  while ( j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    sub_63A3E0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * j), j, 0);
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j++))->rcSource.left = 0;
  }
  v7 = sub_636610(dword_162EE84);
  v8 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v9 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  *((_BYTE *)v8 + (_DWORD)CImageDisplay::GetDisplayFormat(v9) + 93) = v7;
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)dword_162EE80 + 224))(dword_162EE80, this, 50);
  sub_64FBA0(1);
  return sub_637610((_DWORD **)dword_162EE84);
}


//======================================================================
// sub_63E340
// entry 0063e340  size 98  status ok
//======================================================================

int __thiscall sub_63E340(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 348))(
      dword_162EE80,
      *(_DWORD *)(*(this + 111) + 4 * i));
  }
  return result;
}


//======================================================================
// sub_63E3B0
// entry 0063e3b0  size 825  status ok
//======================================================================

int __thiscall sub_63E3B0(_DWORD *this, char a2, char a3, char *Source)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const struct tagVIDEOINFO *v5; // eax
  const struct tagVIDEOINFO *v6; // eax
  const struct tagVIDEOINFO *v7; // eax
  char *Str1; // [esp+24h] [ebp-44h]
  char *Str2; // [esp+2Ch] [ebp-3Ch]
  CImageDisplay *v14; // [esp+34h] [ebp-34h]
  CImageDisplay *v15; // [esp+40h] [ebp-28h]
  int i; // [esp+64h] [ebp-4h]

  if ( a2 != -1 )
  {
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.left = a2;
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->bmiHeader.biClrImportant = a3;
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.left == 2 )
    {
      DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)));
      strcpy((char *)&DisplayFormat->bmiHeader.biHeight, &::Source);
    }
    else
    {
      v5 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)));
      strcpy((char *)&v5->bmiHeader.biHeight, Source);
    }
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      if ( i != *(this + 113) )
      {
        v15 = *(CImageDisplay **)(*(this + 111) + 4 * *(this + 113));
        if ( CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 3 )
        {
          v14 = *(CImageDisplay **)(*(this + 111) + 4 * i);
          if ( CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3 )
          {
            Str2 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.top;
            Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * *(this + 113)))->rcSource.top;
            if ( !strcmp(Str1, Str2) )
            {
              CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.left = a2;
              CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->bmiHeader.biClrImportant = a3;
              if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i))->rcSource.left == 2 )
              {
                v6 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i));
                strcpy((char *)&v6->bmiHeader.biHeight, &::Source);
              }
              else
              {
                v7 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*(this + 111) + 4 * i));
                strcpy((char *)&v7->bmiHeader.biHeight, Source);
              }
            }
          }
        }
      }
    }
    *(this + 113) = -1;
  }
  if ( dword_1630690 )
  {
    sub_5F8990((_BYTE *)dword_1630690);
    dword_1630690 = 0;
  }
  return sub_63C620((int)this);
}


//======================================================================
// sub_63E760
// entry 0063e760  size 344  status ok
//======================================================================

int __thiscall sub_63E760(void *this, int a2, char *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // eax
  int result; // eax
  CPaneContainer *v11; // eax
  int v12; // [esp+0h] [ebp-1Ch]
  int v14; // [esp+8h] [ebp-14h]
  _DWORD *v15; // [esp+Ch] [ebp-10h]
  int i; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  v15 = (_DWORD *)sub_5FB480(this, 3, 0);
  if ( a9 == -1 )
    v17 = a7;
  else
    v17 = (a7 + 1) / 2;
  v9 = sub_5FA790(this, 0, 100 * a2 + 50, a3, 72, a6, 25 * v17 + 18, a4, a5, 2, 120, 124, 161, 255, 255, 255, 0);
  result = sub_5FF5A0(v15, (int)v9);
  for ( i = 0; i < a7; ++i )
  {
    if ( a9 == -1 )
    {
      v18 = a4 + 12;
      v14 = a5 + 25 * i + 15;
    }
    else
    {
      if ( i >= v17 )
        v12 = a9;
      else
        v12 = a4 + 12;
      v18 = v12;
      v14 = a5 + 25 * (i % v17) + 15;
    }
    v11 = sub_5F9FF0(
            (int)this,
            0,
            0,
            100 * a2 + i + 52,
            (struct CPaneDivider *)(100 * a2 + 51),
            3200202,
            v18,
            v14,
            1,
            *(_DWORD *)(a8 + 4 * i),
            31,
            69,
            66,
            -1,
            20,
            0);
    result = sub_5FF5A0(v15, (int)v11);
  }
  return result;
}


//======================================================================
// sub_63F1C0
// entry 0063f1c0  size 45  status ok
//======================================================================

int __stdcall sub_63F1C0(int a1, int a2)
{
  if ( a2 == -1 )
    return 100 * a1 + 50;
  else
    return 100 * a1 + a2 + 52;
}


//======================================================================
// sub_63F1F0
// entry 0063f1f0  size 27  status ok
//======================================================================

int __stdcall sub_63F1F0(int a1)
{
  return (a1 - 52) / 100;
}


//======================================================================
// sub_63F260
// entry 0063f260  size 133  status ok
//======================================================================

CRecentFileList **__thiscall sub_63F260(pairNode *this)
{
  CRecentFileList **v2; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v2 = (CRecentFileList **)this;
  if ( pairNode::raw_length(this) == 4 )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *, CRecentFileList **))(*(_DWORD *)dword_162EE84
                                                                                             + 268))(
                dword_162EE84,
                v2);
          ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_163068C + 444) + 4 * i) + 32) )
        sub_646C20(1);
    }
  }
  return sub_5FF730(v2);
}


//======================================================================
// sub_63F2F0
// entry 0063f2f0  size 160  status ok
//======================================================================

int __thiscall sub_63F2F0(CRecentFileList **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5FF6A0(this);
  result = pairNode::raw_length((pairNode *)this);
  if ( result == 4 )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_163068C + 444) + 4 * i) + 32) )
        sub_6464D0(0, 0);
    }
    result = dword_163068C;
    if ( *(int *)(dword_163068C + 468) > 4 )
      return sub_63C620(dword_163068C);
  }
  return result;
}


//======================================================================
// sub_63F390
// entry 0063f390  size 98  status ok
//======================================================================

int __thiscall sub_63F390(int this)
{
  int v1; // eax

  if ( !sub_600230((_BYTE *)this) )
    return sub_602BE0(this);
  sub_602BE0(this);
  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 84))(*(_DWORD *)(this + 400));
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 80))(*(_DWORD *)(this + 400), v1 - 3);
}


//======================================================================
// sub_63F400
// entry 0063f400  size 2669  status ok
//======================================================================

void __thiscall sub_63F400(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  _BYTE *v4; // eax
  _DWORD **v5; // eax
  const char *v6; // eax
  int v7; // eax
  _BYTE *v8; // eax
  _DWORD **v9; // eax
  const char *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // eax
  int v21; // eax
  int v22; // ecx
  _BYTE *v23; // eax
  unsigned __int8 v24; // al
  int v25; // eax
  unsigned __int8 v26; // al
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  const char *v40; // [esp-4h] [ebp-354h]
  const char *v41; // [esp-4h] [ebp-354h]
  int v42; // [esp-4h] [ebp-354h]
  int v43; // [esp-4h] [ebp-354h]
  int v44; // [esp+0h] [ebp-350h]
  int v45; // [esp+4h] [ebp-34Ch]
  int v46; // [esp+8h] [ebp-348h]
  int v47; // [esp+Ch] [ebp-344h]
  int v48; // [esp+10h] [ebp-340h]
  int v50; // [esp+18h] [ebp-338h]
  int v51; // [esp+1Ch] [ebp-334h]
  _DWORD v52[200]; // [esp+20h] [ebp-330h]
  int i; // [esp+340h] [ebp-10h]
  int v54; // [esp+344h] [ebp-Ch]
  int v55; // [esp+348h] [ebp-8h]
  int v56; // [esp+34Ch] [ebp-4h]

  v54 = 0;
  v56 = -1;
  if ( dword_163068C )
  {
    v52[2 * v54] = sub_5FB300(dword_163068C, 0);
    v52[2 * v54++ + 1] = 0;
    v2 = sub_5FB300(dword_163068C, 1);
    v52[2 * v54] = v2;
    v52[2 * v54++ + 1] = 1;
    for ( i = 0; ; ++i )
    {
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( i >= v3 )
        break;
      if ( sub_5FB5E0(dword_163068C, i + 5) || sub_5FB300(dword_163068C, i + 5) )
      {
        if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) <= 0 )
          v48 = sub_5FB300(dword_163068C, i + 5);
        else
          v48 = sub_5FB5E0(dword_163068C, i + 5);
        v52[2 * v54] = v48;
        if ( i )
        {
          if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) <= 0 )
          {
            v50 = -1;
            v8 = (_BYTE *)sub_5FB300(dword_163068C, i + 5);
            if ( !sub_6026D0(v8) )
            {
              v46 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
              v50 = (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 160))(v46);
            }
            if ( v50 == -1 )
            {
              v41 = (const char *)sub_630F40((int)"SID_SHELL_ADD");
              v9 = (_DWORD **)sub_5FB300(dword_163068C, i + 5);
              v10 = sub_602B70(v9);
              v11 = strcmp(v10, v41);
              v52[2 * v54 + 1] = (v11 != 0) + 2;
            }
            else
            {
              v52[2 * v54 + 1] = v50;
            }
          }
          else
          {
            v51 = -1;
            v4 = (_BYTE *)sub_5FB5E0(dword_163068C, i + 5);
            if ( !sub_6026D0(v4) )
            {
              v47 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
              v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 160))(v47);
            }
            if ( v51 == -1 )
            {
              v40 = (const char *)sub_630F40((int)"SID_SHELL_ADD");
              v5 = (_DWORD **)sub_5FB5E0(dword_163068C, i + 5);
              v6 = sub_602B70(v5);
              v7 = strcmp(v6, v40);
              v52[2 * v54 + 1] = (v7 != 0) + 2;
            }
            else
            {
              v52[2 * v54 + 1] = v51;
            }
          }
        }
        else
        {
          v52[2 * v54 + 1] = 8;
        }
        ++v54;
      }
    }
    for ( i = 0; ; ++i )
    {
      v12 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( i >= v12 )
        break;
      if ( sub_5FB300(dword_163068C, i + 21) )
      {
        v13 = sub_5FB300(dword_163068C, i + 21);
        v52[2 * v54] = v13;
        v52[2 * v54++ + 1] = 4;
      }
    }
    for ( i = 0; ; ++i )
    {
      v14 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( i >= v14 )
        break;
      if ( sub_5FB300(dword_163068C, i + 13) )
      {
        v15 = sub_5FB300(dword_163068C, i + 13);
        v52[2 * v54] = v15;
        v52[2 * v54++ + 1] = 5;
      }
    }
    for ( i = 0; ; ++i )
    {
      v16 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( i >= v16 )
        break;
      if ( sub_5FB300(dword_163068C, i + 29) )
      {
        v17 = sub_5FB300(dword_163068C, i + 29);
        v52[2 * v54] = v17;
        v52[2 * v54++ + 1] = 6;
      }
    }
    for ( i = 0; ; ++i )
    {
      v18 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( i >= v18 )
        break;
      if ( sub_5FB350(dword_163068C, i + 37) )
      {
        v19 = sub_5FB350(dword_163068C, i + 37);
        v52[2 * v54] = v19;
        v52[2 * v54++ + 1] = 7;
      }
    }
    if ( sub_5FB300(dword_163068C, 45) )
    {
      v20 = (_BYTE *)sub_5FB300(dword_163068C, 45);
      if ( sub_6026D0(v20) )
      {
        v21 = sub_5FB300(dword_163068C, 45);
        v52[2 * v54] = v21;
        v52[2 * v54++ + 1] = 9;
      }
    }
    if ( sub_5FB300(dword_163068C, 46) )
    {
      v23 = (_BYTE *)sub_5FB300(dword_163068C, 46);
      v24 = sub_6026D0(v23);
      v22 = v24;
      if ( v24 )
      {
        v25 = sub_5FB300(dword_163068C, 46);
        v52[2 * v54] = v25;
        v52[2 * v54 + 1] = 10;
        v22 = ++v54;
      }
    }
    for ( i = 0; i < v54; ++i )
    {
      HIBYTE(v22) = HIBYTE(i);
      if ( v52[2 * i] )
      {
        v26 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v52[2 * i] + 132))(v52[2 * i], a2);
        v22 = v26;
        if ( v26 )
        {
          v56 = v52[2 * i + 1];
          break;
        }
      }
    }
    if ( v56 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
      {
        (*(void (__thiscall **)(_DWORD *, const char *))(*this + 180))(this, &Source);
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_162EE80 + 252))(dword_162EE80, a2, this);
      }
    }
    else
    {
      HIBYTE(v42) = HIBYTE(v22);
      LOWORD(v42) = word_75EE1C;
      BYTE2(v42) = byte_75EE1E;
      sub_5ECD00(this, 35, -1, v42);
      if ( !v56 )
      {
        v55 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 192))(dword_162EE80);
        if ( v55 )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v55);
        }
        else
        {
          v45 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER1");
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v45);
        }
      }
      if ( v56 == 1 )
      {
        v55 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 196))(dword_162EE80);
        if ( v55 )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v55);
        }
        else
        {
          v44 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER2");
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v44);
        }
      }
      if ( v56 == 2 )
      {
        v27 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER3");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v27);
      }
      if ( v56 == 3 )
      {
        if ( *(_DWORD *)(dword_163068C + 476) == 1 )
        {
          v28 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER4");
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v28);
        }
        else if ( *(int *)(dword_163068C + 476) <= 1 || *(_DWORD *)(dword_163068C + 484) )
        {
          v30 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER6");
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v30);
        }
        else
        {
          if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) )
            v29 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER5");
          else
            v29 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER16");
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v29);
        }
      }
      if ( v56 == 4 )
      {
        v31 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER7");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v31);
      }
      if ( v56 == 5 )
      {
        v32 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER8");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v32);
      }
      if ( v56 == 6 )
      {
        v33 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER9");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v33);
      }
      if ( v56 == 7 )
      {
        v34 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER10");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v34);
      }
      if ( v56 == 8 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84)
          && !byte_795F95 )
        {
          LOWORD(v43) = word_75EE1C;
          HIWORD(v43) = (unsigned __int8)byte_75EE1E;
          sub_5ECD00(this, 65, -1, v43);
          v35 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER11");
          (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v35);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, const char *))(*this + 180))(this, &Source);
        }
      }
      if ( v56 == 9 || v56 == 10 )
      {
        v36 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER12");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v36);
      }
      if ( v56 == 11 )
      {
        v37 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER13");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v37);
      }
      if ( v56 == 12 )
      {
        v38 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER14");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v38);
      }
      if ( v56 == 13 )
      {
        v39 = sub_630F40((int)"SID_SHELL_SETTINGS_ROLLOVER15");
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v39);
      }
    }
  }
}


//======================================================================
// sub_63FE70
// entry 0063fe70  size 138  status ok
//======================================================================

_DWORD *__thiscall sub_63FE70(_DWORD *this, int a2)
{
  sub_5F71F0(this, 1, 0);
  *this = &AIBiographyDialog::`vftable';
  sub_63A0C0(this + 111);
  sub_5F83D0(this, 3200242, 0);
  *(this + 346) = a2;
  return this;
}


//======================================================================
// sub_63FF00
// entry 0063ff00  size 98  status ok
//======================================================================

int __thiscall sub_63FF00(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&AIBiographyDialog::`vftable';
  sub_63A120((CNoTrackObject *)(this + 111));
  return sub_5F7260(this);
}


//======================================================================
// sub_63FF70
// entry 0063ff70  size 3278  status ok
//======================================================================

_DWORD *__thiscall sub_63FF70(int *this)
{
  int v1; // eax
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
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax

  v1 = sub_630F40((int)"SID_SHELL_BIOGRAPHY");
  sub_5FA5B0(this, 0, -1, v1, 73, 322, 25, 3, 3, 1, 18, -1);
  v2 = sub_630F40((int)"SID_GENERIC_OK");
  sub_5F9DE0(this, 0, 0, 3200228, 125, 225, 1, v2, 72, 75, 74, -1, 13);
  sub_5FA880(this, 0, 0, 329, 1, 3, 218, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 329, 1, 4, 219, 1, 255, 255, 255, 0, 0, 0);
  switch ( *(this + 346) )
  {
    case 0:
      v15 = sub_630F40((int)"SID_SHELL_BIO_BART1");
      sub_5FA5B0(this, 0, 0, v15, 31, 188, 100, 131, 43, 1, 5, 13);
      v16 = sub_630F40((int)"SID_SHELL_BIO_BART2");
      sub_5FA5B0(this, 0, 1, v16, 31, 188, 90, 131, 118, 1, 5, 13);
      break;
    case 1:
      v17 = sub_630F40((int)"SID_SHELL_BIO_ELAYNE1");
      sub_5FA5B0(this, 0, 0, v17, 31, 188, 100, 131, 43, 1, 5, 13);
      v18 = sub_630F40((int)"SID_SHELL_BIO_ELAYNE2");
      sub_5FA5B0(this, 0, 1, v18, 31, 188, 90, 131, 107, 1, 5, 13);
      break;
    case 2:
      v19 = sub_630F40((int)"SID_SHELL_BIO_GAX1");
      sub_5FA5B0(this, 0, 0, v19, 31, 188, 100, 131, 43, 1, 5, 13);
      v20 = sub_630F40((int)"SID_SHELL_BIO_GAX2");
      sub_5FA5B0(this, 0, 1, v20, 31, 188, 60, 131, 118, 1, 5, 13);
      break;
    case 3:
      v3 = sub_630F40((int)"SID_SHELL_BIO_HARLEY1");
      sub_5FA5B0(this, 0, 0, v3, 31, 188, 85, 131, 43, 1, 5, 13);
      v4 = sub_630F40((int)"SID_SHELL_BIO_HARLEY2");
      sub_5FA5B0(this, 0, 1, v4, 31, 188, 60, 131, 140, 1, 5, 13);
      break;
    case 4:
      v21 = sub_630F40((int)"SID_SHELL_BIO_JASPER1");
      sub_5FA5B0(this, 0, 0, v21, 31, 188, 100, 131, 43, 1, 5, 13);
      v22 = sub_630F40((int)"SID_SHELL_BIO_JASPER2");
      sub_5FA5B0(this, 0, 1, v22, 31, 188, 80, 131, 140, 1, 5, 13);
      break;
    case 5:
      v23 = sub_630F40((int)"SID_SHELL_BIO_MAURICE1");
      sub_5FA5B0(this, 0, 0, v23, 31, 188, 100, 131, 43, 1, 5, 13);
      v24 = sub_630F40((int)"SID_SHELL_BIO_MAURICE2");
      sub_5FA5B0(this, 0, 1, v24, 31, 188, 90, 131, 116, 1, 5, 13);
      break;
    case 6:
      v9 = sub_630F40((int)"SID_SHELL_BIO_ETHEL1");
      sub_5FA5B0(this, 0, 0, v9, 31, 188, 100, 131, 43, 1, 5, 13);
      v10 = sub_630F40((int)"SID_SHELL_BIO_ETHEL2");
      sub_5FA5B0(this, 0, 1, v10, 31, 188, 60, 131, 146, 1, 5, 13);
      break;
    case 7:
      v25 = sub_630F40((int)"SID_SHELL_BIO_MARVIN1");
      sub_5FA5B0(this, 0, 0, v25, 31, 188, 100, 131, 43, 1, 5, 13);
      v26 = sub_630F40((int)"SID_SHELL_BIO_MARVIN2");
      sub_5FA5B0(this, 0, 1, v26, 31, 188, 60, 131, 134, 1, 5, 13);
      break;
    case 8:
      v27 = sub_630F40((int)"SID_SHELL_BIO_ROBIN1");
      sub_5FA5B0(this, 0, 0, v27, 31, 188, 100, 131, 43, 1, 5, 13);
      v28 = sub_630F40((int)"SID_SHELL_BIO_ROBIN2");
      sub_5FA5B0(this, 0, 1, v28, 31, 188, 60, 131, 134, 1, 5, 13);
      break;
    case 9:
      v5 = sub_630F40((int)"SID_SHELL_BIO_ROSWELL1");
      sub_5FA5B0(this, 0, 0, v5, 31, 188, 100, 131, 43, 1, 5, 13);
      v6 = sub_630F40((int)"SID_SHELL_BIO_ROSWELL2");
      sub_5FA5B0(this, 0, 1, v6, 31, 188, 60, 131, 146, 1, 5, 13);
      break;
    case 10:
      v13 = sub_630F40((int)"SID_SHELL_BIO_TARDEE1");
      sub_5FA5B0(this, 0, 0, v13, 31, 188, 100, 131, 43, 1, 5, 13);
      v14 = sub_630F40((int)"SID_SHELL_BIO_TARDEE2");
      sub_5FA5B0(this, 0, 1, v14, 31, 188, 60, 131, 146, 1, 5, 13);
      break;
    case 11:
      v7 = sub_630F40((int)"SID_SHELL_BIO_SCURVY1");
      sub_5FA5B0(this, 0, 0, v7, 31, 188, 100, 131, 43, 1, 5, 13);
      v8 = sub_630F40((int)"SID_SHELL_BIO_SCURVY2");
      sub_5FA5B0(this, 0, 1, v8, 31, 188, 45, 131, 146, 1, 5, 13);
      break;
    case 12:
      v11 = sub_630F40((int)"SID_SHELL_BIO_RICK1");
      sub_5FA5B0(this, 0, 0, v11, 31, 188, 85, 131, 43, 1, 5, 13);
      v12 = sub_630F40((int)"SID_SHELL_BIO_RICK2");
      sub_5FA5B0(this, 0, 1, v12, 31, 188, 60, 131, 126, 1, 5, 13);
      break;
    case 13:
      v47 = sub_630F40((int)"SID_SHELL_BIO_CHLOE1");
      sub_5FA5B0(this, 0, 0, v47, 31, 188, 100, 131, 43, 1, 5, 13);
      v48 = sub_630F40((int)"SID_SHELL_BIO_CHLOE2");
      sub_5FA5B0(this, 0, 1, v48, 31, 188, 90, 131, 132, 1, 5, 13);
      break;
    case 14:
      v49 = sub_630F40((int)"SID_SHELL_BIO_HEDDA1");
      sub_5FA5B0(this, 0, 0, v49, 31, 188, 100, 131, 43, 1, 5, 13);
      v50 = sub_630F40((int)"SID_SHELL_BIO_HEDDA2");
      sub_5FA5B0(this, 0, 1, v50, 31, 188, 60, 131, 148, 1, 5, 13);
      break;
    case 15:
      v51 = sub_630F40((int)"SID_SHELL_BIO_JACK1");
      sub_5FA5B0(this, 0, 0, v51, 31, 188, 100, 131, 43, 1, 5, 13);
      v52 = sub_630F40((int)"SID_SHELL_BIO_JACK2");
      sub_5FA5B0(this, 0, 1, v52, 31, 188, 60, 131, 148, 1, 5, 13);
      break;
    case 16:
      v53 = sub_630F40((int)"SID_SHELL_BIO_RHETT1");
      sub_5FA5B0(this, 0, 0, v53, 31, 188, 100, 131, 43, 1, 5, 13);
      v54 = sub_630F40((int)"SID_SHELL_BIO_RHETT2");
      sub_5FA5B0(this, 0, 1, v54, 31, 188, 60, 131, 148, 1, 5, 13);
      break;
    case 17:
      v55 = sub_630F40((int)"SID_SHELL_BIO_TASHA1");
      sub_5FA5B0(this, 0, 0, v55, 31, 188, 100, 131, 43, 1, 5, 13);
      v56 = sub_630F40((int)"SID_SHELL_BIO_TASHA2");
      sub_5FA5B0(this, 0, 1, v56, 31, 188, 90, 131, 116, 1, 5, 13);
      break;
    case 18:
      v57 = sub_630F40((int)"SID_SHELL_BIO_TONY1");
      sub_5FA5B0(this, 0, 0, v57, 31, 188, 100, 131, 43, 1, 5, 13);
      v58 = sub_630F40((int)"SID_SHELL_BIO_TONY2");
      sub_5FA5B0(this, 0, 1, v58, 31, 188, 60, 131, 148, 1, 5, 13);
      break;
    case 19:
      v38 = sub_630F40((int)"SID_SHELL_BIO_ANNE1");
      sub_5FA5B0(this, 0, 0, v38, 31, 192, 150, 131, 43, 1, 5, 13);
      v39 = sub_630F40((int)"SID_SHELL_BIO_ANNE2");
      sub_5FA5B0(this, 0, 1, v39, 31, 188, 60, 132, 140, 1, 5, 13);
      break;
    case 20:
      v29 = sub_630F40((int)"SID_SHELL_BIO_EDDIE1");
      sub_5FA5B0(this, 0, 0, v29, 31, 188, 100, 131, 43, 1, 5, 13);
      v30 = sub_630F40((int)"SID_SHELL_BIO_EDDIE2");
      sub_5FA5B0(this, 0, 1, v30, 31, 188, 60, 131, 148, 1, 5, 13);
      break;
    case 21:
      v40 = sub_630F40((int)"SID_SHELL_BIO_JESSICA1");
      sub_5FA5B0(this, 0, 0, v40, 31, 192, 150, 131, 43, 1, 5, 13);
      break;
    case 22:
      v41 = sub_630F40((int)"SID_SHELL_BIO_JOE1");
      sub_5FA5B0(this, 0, 0, v41, 31, 192, 150, 131, 43, 1, 5, 13);
      v42 = sub_630F40((int)"SID_SHELL_BIO_JOE2");
      sub_5FA5B0(this, 0, 1, v42, 31, 188, 60, 132, 170, 1, 5, 13);
      break;
    case 23:
      v31 = sub_630F40((int)"SID_SHELL_BIO_KELLY1");
      sub_5FA5B0(this, 0, 0, v31, 31, 192, 120, 131, 43, 1, 5, 13);
      v32 = sub_630F40((int)"SID_SHELL_BIO_KELLY2");
      sub_5FA5B0(this, 0, 1, v32, 31, 200, 60, 131, 147, 1, 5, 13);
      break;
    case 24:
      v33 = sub_630F40((int)"SID_SHELL_BIO_MARCUS1");
      sub_5FA5B0(this, 0, 0, v33, 31, 188, 100, 131, 43, 1, 5, 13);
      break;
    case 25:
      v43 = sub_630F40((int)"SID_SHELL_BIO_MICHELE1");
      sub_5FA5B0(this, 0, 0, v43, 31, 192, 150, 131, 43, 1, 5, 13);
      v44 = sub_630F40((int)"SID_SHELL_BIO_MICHELE2");
      sub_5FA5B0(this, 0, 1, v44, 31, 188, 76, 132, 140, 1, 5, 13);
      break;
    case 26:
      v34 = sub_630F40((int)"SID_SHELL_BIO_NIGEL1");
      sub_5FA5B0(this, 0, 0, v34, 31, 188, 100, 131, 43, 1, 5, 13);
      v35 = sub_630F40((int)"SID_SHELL_BIO_NIGEL2");
      sub_5FA5B0(this, 0, 1, v35, 31, 188, 80, 131, 144, 1, 5, 13);
      break;
    case 27:
      v45 = sub_630F40((int)"SID_SHELL_BIO_TOMMY1");
      sub_5FA5B0(this, 0, 0, v45, 31, 192, 150, 131, 43, 1, 5, 13);
      v46 = sub_630F40((int)"SID_SHELL_BIO_TOMMY2");
      sub_5FA5B0(this, 0, 1, v46, 31, 188, 60, 132, 158, 1, 5, 13);
      break;
    case 28:
      v36 = sub_630F40((int)"SID_SHELL_BIO_YVONNE1");
      sub_5FA5B0(this, 0, 0, v36, 31, 192, 150, 131, 43, 1, 5, 13);
      v37 = sub_630F40((int)"SID_SHELL_BIO_YVONNE2");
      sub_5FA5B0(this, 0, 1, v37, 31, 188, 60, 132, 170, 1, 5, 13);
      break;
    default:
      sub_5E9F20("false", "..\\casinoShell\\settingsdialog.cpp", 1727);
      break;
  }
  sub_63A3E0((int)(this + 111), -1, 0);
  sub_63A8D0((int)(this + 111), *(this + 346), (int)this, 0, 0, 0);
  sub_646150(13, 55);
  return sub_5F9CE0(this, 0, 0, 3200232, 12, 54, 1, 0, 0xFFu, 0);
}


//======================================================================
// sub_640CC0
// entry 00640cc0  size 24  status ok
//======================================================================

_BYTE *__stdcall sub_640CC0(int a1)
{
  return sub_63DB30((_BYTE **)dword_163068C);
}


//======================================================================
// sub_640CE0
// entry 00640ce0  size 25  status ok
//======================================================================

int __thiscall sub_640CE0(_BYTE *this, int a2)
{
  return sub_5F72F0(this, a2);
}


//======================================================================
// sub_640D00
// entry 00640d00  size 162  status ok
//======================================================================

int __thiscall sub_640D00(int this, int a2, char a3, char a4, char *Source)
{
  sub_65BA70(this);
  *(_DWORD *)this = &HumanSettingsDialog::`vftable';
  sub_5F83D0((_DWORD *)this, 3200242, 0);
  *(_DWORD *)(this + 456) = a2;
  *(_BYTE *)(this + 460) = a3;
  *(_BYTE *)(this + 461) = a4;
  strcpy((char *)(this + 462), Source);
  return this;
}


//======================================================================
// sub_640EB0
// entry 00640eb0  size 16  status ok
//======================================================================

int sub_640EB0()
{
  return 43;
}


//======================================================================
// sub_640EC0
// entry 00640ec0  size 16  status ok
//======================================================================

int sub_640EC0()
{
  return 16;
}


//======================================================================
// sub_640ED0
// entry 00640ed0  size 16  status ok
//======================================================================

int sub_640ED0()
{
  return 180;
}


//======================================================================
// sub_640EE0
// entry 00640ee0  size 437  status ok
//======================================================================

int __thiscall sub_640EE0(void *this)
{
  const char *v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  LONG *v6; // [esp-4h] [ebp-110h]
  int v7; // [esp+0h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  sub_65BB00(this, *(_DWORD *)Buffer);
  v6 = sub_639070(dword_162EE84, *(_DWORD *)(v7 + 456));
  v1 = (const char *)sub_630F40((int)"SID_SHELL_YOUR_FACE_FORMAT");
  sprintf(Buffer, v1, v6);
  sub_5FA5B0((void *)v7, 0, 0, (int)Buffer, 73, 322, 25, 3, 3, 1, 18, -1);
  sub_5FA880((void *)v7, 0, 0, 329, 1, 3, 218, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880((void *)v7, 0, 0, 329, 1, 4, 219, 1, 255, 255, 255, 0, 0, 0);
  v2 = sub_630F40((int)"SID_GENERIC_OK");
  sub_5F9DE0((void *)v7, 0, 0, 3200229, 80, 225, 1, v2, 72, 75, 74, -1, 13);
  v3 = sub_630F40((int)"SID_GENERIC_CANCEL");
  sub_5F9DE0((void *)v7, 0, 1, 3200222, 170, 225, 1, v3, 72, 75, 74, -1, 27);
  sub_65C820(*(_BYTE *)(v7 + 460), *(_BYTE *)(v7 + 461), (char *)(v7 + 462), 1);
  v4 = sub_665800(v7 + 462);
  return sub_65C9C0(v4);
}


//======================================================================
// sub_6410A0
// entry 006410a0  size 110  status ok
//======================================================================

int __thiscall sub_6410A0(char *this, int a2)
{
  int result; // eax

  result = sub_65C660(a2);
  if ( !a2 )
    return sub_63E3B0((_DWORD *)dword_163068C, *(this + 460), *(this + 461), this + 462);
  if ( a2 == 1 )
    return sub_63E3B0((_DWORD *)dword_163068C, -1, -1, (char *)&Source);
  return result;
}


//======================================================================
// sub_641110
// entry 00641110  size 67  status ok
//======================================================================

unsigned __int8 __thiscall sub_641110(_BYTE *this, char a2, char *Source)
{
  if ( *(this + 460) != 2 )
    return (unsigned __int8)strcpy((char *)(dword_1630690 + 462), Source);
  *(this + 461) = a2;
  return a2;
}


//======================================================================
// sub_641160
// entry 00641160  size 52  status ok
//======================================================================

int __thiscall sub_641160(_BYTE *this, char a2, char a3, int a4)
{
  int result; // eax

  *(this + 460) = a2;
  result = (char)*(this + 460);
  if ( result == 2 )
    *(this + 461) = a3;
  return result;
}


//======================================================================
// sub_641230
// entry 00641230  size 14  status ok
//======================================================================

int __cdecl sub_641230(int a1, int a2)
{
  return a1 | (a2 << 8);
}


//======================================================================
// sub_641280
// entry 00641280  size 14  status ok
//======================================================================

int __cdecl sub_641280(__int16 a1)
{
  return (unsigned __int8)a1;
}


//======================================================================
// sub_641290
// entry 00641290  size 17  status ok
//======================================================================

int __cdecl sub_641290(__int16 a1)
{
  return (unsigned __int16)(a1 & 0xFF00) >> 8;
}


//======================================================================
// sub_6412E0
// entry 006412e0  size 63  status ok
//======================================================================

BOOL __cdecl sub_6412E0(__int16 a1)
{
  return sub_641290(a1) == 4 || sub_641290(a1) == 1;
}


//======================================================================
// sub_6413C0
// entry 006413c0  size 510  status ok
//======================================================================

char *__cdecl sub_6413C0(char *Buffer, int a2, char *a3, char a4)
{
  char *result; // eax

  if ( a4 )
  {
    if ( a3 == (char *)5 )
    {
LABEL_14:
      sprintf(Buffer, off_6B4E68, a2);
    }
    else
    {
      switch ( a2 )
      {
        case 11:
          strcpy(Buffer, "V");
          break;
        case 12:
          strcpy(Buffer, "C");
          break;
        case 13:
          strcpy(Buffer, "D");
          break;
        case 14:
          strcpy(Buffer, "R");
          break;
        default:
          goto LABEL_14;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
      case 14:
        strcpy(Buffer, "A");
        break;
      case 11:
        strcpy(Buffer, "J");
        break;
      case 12:
        strcpy(Buffer, "Q");
        break;
      case 13:
        strcpy(Buffer, "K");
        break;
      case 15:
        strcpy(Buffer, "Jo");
        break;
      default:
        goto LABEL_14;
    }
  }
  result = a3;
  switch ( (unsigned int)a3 )
  {
    case 1u:
      result = strcat(Buffer, "C");
      break;
    case 2u:
      result = strcat(Buffer, "D");
      break;
    case 3u:
      result = strcat(Buffer, "H");
      break;
    case 4u:
      result = strcat(Buffer, "S");
      break;
    case 5u:
      result = strcat(Buffer, "T");
      break;
    case 6u:
      result = strcat(Buffer, "E");
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_641620
// entry 00641620  size 608  status ok
//======================================================================

char __cdecl sub_641620(char *Str, int a2, _DWORD *a3, _DWORD *a4)
{
  char result; // al
  signed int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < (int)strlen(Str) && a2 > 0; ++i )
  {
    if ( Str[i] == 32 )
      --a2;
  }
  if ( i == strlen(Str) )
  {
    *a3 = 0;
    *a4 = 0;
    return (char)a3;
  }
  else
  {
    if ( Str[i] < 49 || Str[i] > 57 )
    {
      switch ( Str[i] )
      {
        case 'A':
          *a3 = 14;
          break;
        case 'C':
          *a3 = 12;
          break;
        case 'D':
          *a3 = 13;
          break;
        case 'J':
          if ( Str[i + 1] == 111 )
          {
            *a3 = 15;
            ++i;
          }
          else
          {
            *a3 = 11;
          }
          break;
        case 'K':
          *a3 = 13;
          break;
        case 'Q':
          *a3 = 12;
          break;
        case 'R':
          *a3 = 14;
          break;
        case 'V':
          *a3 = 11;
          break;
        case 'a':
          *a3 = 1;
          break;
        default:
          sub_5E9F20("FALSE", "..\\casinoShell\\card.cpp", 138);
          break;
      }
    }
    else if ( Str[i + 1] < 48 || Str[i + 1] > 57 )
    {
      *a3 = Str[i] - 48;
    }
    else
    {
      *a3 = 10 * (Str[i] - 48) + Str[i + 1] - 48;
      ++i;
    }
    result = Str[i + 1] - 65;
    switch ( Str[i + 1] )
    {
      case 'A':
        *a4 = 0;
        result = (char)a4;
        break;
      case 'C':
        *a4 = 1;
        break;
      case 'D':
        *a4 = 2;
        break;
      case 'E':
        *a4 = 6;
        result = (char)a4;
        break;
      case 'H':
        *a4 = 3;
        result = (char)a4;
        break;
      case 'S':
        *a4 = 4;
        break;
      case 'T':
        *a4 = 5;
        break;
      default:
        result = sub_5E9F20("FALSE", "..\\casinoShell\\card.cpp", 151);
        break;
    }
  }
  return result;
}


//======================================================================
// sub_641930
// entry 00641930  size 58  status ok
//======================================================================

int __cdecl sub_641930(int a1, int a2, int a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < a3; ++i )
  {
    *(_WORD *)(a1 + 2 * i) = *(_WORD *)(a2 + 2 * i);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_641E20
// entry 00641e20  size 162  status ok
//======================================================================

void __cdecl sub_641E20(int a1, int a2)
{
  int j; // [esp+4h] [ebp-Ch]
  __int16 v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < a2; ++i )
  {
    for ( j = 0; j < a2 - 1; ++j )
    {
      if ( (unsigned __int8)sub_642C20(*(_WORD *)(a1 + 2 * j), *(_WORD *)(a1 + 2 * j + 2)) )
      {
        v3 = *(_WORD *)(a1 + 2 * j);
        *(_WORD *)(a1 + 2 * j) = *(_WORD *)(a1 + 2 * j + 2);
        *(_WORD *)(a1 + 2 * j + 2) = v3;
      }
    }
  }
}


//======================================================================
// sub_641ED0
// entry 00641ed0  size 162  status ok
//======================================================================

void __cdecl sub_641ED0(int a1, int a2)
{
  int j; // [esp+4h] [ebp-Ch]
  __int16 v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < a2; ++i )
  {
    for ( j = 0; j < a2 - 1; ++j )
    {
      if ( !(unsigned __int8)sub_642C20(*(_WORD *)(a1 + 2 * j), *(_WORD *)(a1 + 2 * j + 2)) )
      {
        v3 = *(_WORD *)(a1 + 2 * j);
        *(_WORD *)(a1 + 2 * j) = *(_WORD *)(a1 + 2 * j + 2);
        *(_WORD *)(a1 + 2 * j + 2) = v3;
      }
    }
  }
}


//======================================================================
// sub_642130
// entry 00642130  size 75  status ok
//======================================================================

int __cdecl sub_642130(int a1, int a2, __int16 a3, int a4)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = a2 - 1; i > a4; --i )
    *(_WORD *)(a1 + 2 * i) = *(_WORD *)(a1 + 2 * i - 2);
  *(_WORD *)(a1 + 2 * a4) = a3;
  return a4;
}


//======================================================================
// sub_642210
// entry 00642210  size 125  status ok
//======================================================================

int __cdecl sub_642210(int a1, int a2, unsigned __int16 a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < a2 && *(unsigned __int16 *)(a1 + 2 * i) != a3; ++i )
    ;
  result = i;
  if ( i != a2 )
  {
    while ( i < a2 - 1 )
    {
      *(_WORD *)(a1 + 2 * i) = *(_WORD *)(a1 + 2 * i + 2);
      ++i;
    }
    *(_WORD *)(a1 + 2 * i) = 0;
    return i;
  }
  return result;
}


//======================================================================
// sub_6423A0
// entry 006423a0  size 134  status ok
//======================================================================

int __cdecl sub_6423A0(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < a2 && *(_WORD *)(a1 + 2 * i); ++i )
  {
    v5 = sub_641280(*(_WORD *)(a1 + 2 * i));
    v6 = sub_641290(*(_WORD *)(a1 + 2 * i));
    if ( (!a3 || v5 == a3) && (!a4 || v6 == a4) )
      return i;
  }
  return -1;
}


//======================================================================
// sub_642430
// entry 00642430  size 39  status ok
//======================================================================

bool __cdecl sub_642430(int a1, int a2, int a3, int a4)
{
  return sub_6423A0(a1, a2, a3, a4) != -1;
}


//======================================================================
// sub_6424C0
// entry 006424c0  size 311  status ok
//======================================================================

int __cdecl sub_6424C0(int a1, int a2, int a3, int a4)
{
  _WORD v5[1024]; // [esp+0h] [ebp-808h] BYREF
  int i; // [esp+804h] [ebp-4h]

  if ( a1 <= 0 )
    sub_5E9F20("n > 0", "..\\casinoShell\\card.cpp", 501);
  if ( a3 > 1024 )
    sub_5E9F20("maxCount <= MAX_DECK_SIZE", "..\\casinoShell\\card.cpp", 502);
  for ( i = 0; i < 1024; ++i )
    v5[i] = 0;
  for ( i = 0; i < a3; ++i )
    v5[i] = *(_WORD *)(a2 + 2 * i);
  sub_641ED0((int)v5, a3);
  for ( i = 0; i < a3; ++i )
  {
    if ( v5[i] )
    {
      if ( sub_641290(v5[i]) == a4 && !--a1 )
        return sub_641280(v5[i]);
    }
  }
  return 0;
}


//======================================================================
// sub_642620
// entry 00642620  size 268  status ok
//======================================================================

int __cdecl sub_642620(int a1, int a2, int a3, int a4)
{
  _WORD v5[1024]; // [esp+0h] [ebp-808h] BYREF
  int i; // [esp+804h] [ebp-4h]

  if ( a1 <= 0 )
    sub_5E9F20("n > 0", "..\\casinoShell\\card.cpp", 535);
  if ( a3 > 1024 )
    sub_5E9F20("maxCount <= MAX_DECK_SIZE", "..\\casinoShell\\card.cpp", 536);
  for ( i = 0; i < a3; ++i )
    v5[i] = *(_WORD *)(a2 + 2 * i);
  sub_641E20((int)v5, a3);
  for ( i = 0; i < a3; ++i )
  {
    if ( *(_WORD *)(a2 + 2 * i) )
    {
      if ( sub_641290(v5[i]) == a4 && !--a1 )
        return sub_641280(v5[i]);
    }
  }
  return 0;
}


//======================================================================
// sub_6427D0
// entry 006427d0  size 147  status ok
//======================================================================

int __cdecl sub_6427D0(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-10h]
  int v7; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v7 = 0;
  for ( i = 0; i < a2 && *(_WORD *)(a1 + 2 * i); ++i )
  {
    v6 = sub_641280(*(_WORD *)(a1 + 2 * i));
    if ( (sub_641290(*(_WORD *)(a1 + 2 * i)) == a3 || !a3) && v6 >= a4 && v6 <= a5 )
      ++v7;
  }
  return v7;
}


//======================================================================
// sub_642890
// entry 00642890  size 74  status ok
//======================================================================

int __cdecl sub_642890(int a1, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-4h]

  v4 = sub_6427D0(a1, a2, a3, 1, 14);
  if ( !a3 )
    v4 += sub_6427D0(a1, a2, 0, 15, 15);
  return v4;
}


//======================================================================
// sub_642950
// entry 00642950  size 136  status ok
//======================================================================

bool __cdecl sub_642950(__int16 a1, __int16 a2)
{
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v4 = sub_641280(a1);
  v5 = sub_641290(a1);
  v3 = sub_641280(a2);
  v6 = sub_641290(a2);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 1;
  if ( v5 > v6 )
    return 1;
  if ( v6 <= v5 )
    return v4 > v3;
  return 0;
}


//======================================================================
// sub_6429E0
// entry 006429e0  size 169  status ok
//======================================================================

char __cdecl sub_6429E0(__int16 a1, __int16 a2, int a3)
{
  char result; // al

  switch ( a3 )
  {
    case 1:
      result = sub_642AA0(a1, a2, 1, 3, 4, 2);
      break;
    case 2:
      result = sub_642AA0(a1, a2, 2, 4, 3, 1);
      break;
    case 3:
      result = sub_642AA0(a1, a2, 3, 4, 2, 1);
      break;
    case 4:
    case 5:
      result = sub_642AA0(a1, a2, 4, 3, 1, 2);
      break;
    default:
      result = sub_642950(a1, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_642AA0
// entry 00642aa0  size 372  status ok
//======================================================================

bool __cdecl sub_642AA0(__int16 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  int v8; // esi
  _DWORD v9[5]; // [esp+4h] [ebp-1Ch]
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  if ( !a2 )
    return 0;
  if ( !a1 )
    return 1;
  if ( sub_641290(a1) == 5 || sub_641290(a2) == 5 )
  {
    if ( sub_641290(a2) == 5 )
    {
      if ( sub_641290(a1) == 5 )
      {
        v7 = sub_641280(a1);
        return v7 > sub_641280(a2);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
  else if ( sub_641290(a1) == 6 )
  {
    return 1;
  }
  else if ( sub_641290(a2) == 6 )
  {
    return 0;
  }
  else
  {
    v9[a3] = 4;
    v9[a4] = 3;
    v9[a5] = 2;
    v9[a6] = 1;
    v9[0] = 0;
    v10 = v9[sub_641290(a1)];
    v11 = v9[sub_641290(a2)];
    if ( v10 <= v11 )
    {
      if ( v11 <= v10 )
      {
        v8 = sub_641280(a1);
        return v8 > sub_641280(a2);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
}


//======================================================================
// sub_642C20
// entry 00642c20  size 136  status ok
//======================================================================

bool __cdecl sub_642C20(__int16 a1, __int16 a2)
{
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v4 = sub_641280(a1);
  v5 = sub_641290(a1);
  v3 = sub_641280(a2);
  v6 = sub_641290(a2);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 1;
  if ( v4 > v3 )
    return 1;
  if ( v3 <= v4 )
    return v5 > v6;
  return 0;
}


//======================================================================
// sub_642E10
// entry 00642e10  size 57  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_642E10(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &LogicalDeck::`vftable';
  *((_DWORD *)this + 515) = 0;
  *((_DWORD *)this + 514) = 0;
  return this;
}


//======================================================================
// sub_642E70
// entry 00642e70  size 2016  status ok
//======================================================================

int __thiscall sub_642E70(_DWORD *this, int a2)
{
  int i; // [esp+8h] [ebp-10h]
  int m; // [esp+8h] [ebp-10h]
  int jj; // [esp+8h] [ebp-10h]
  int nn; // [esp+8h] [ebp-10h]
  int i3; // [esp+8h] [ebp-10h]
  int i5; // [esp+8h] [ebp-10h]
  int i8; // [esp+8h] [ebp-10h]
  int i12; // [esp+8h] [ebp-10h]
  int i10; // [esp+8h] [ebp-10h]
  int i14; // [esp+8h] [ebp-10h]
  int i17; // [esp+8h] [ebp-10h]
  int i19; // [esp+8h] [ebp-10h]
  int i22; // [esp+8h] [ebp-10h]
  int i24; // [esp+8h] [ebp-10h]
  int i26; // [esp+8h] [ebp-10h]
  int j; // [esp+Ch] [ebp-Ch]
  int n; // [esp+Ch] [ebp-Ch]
  int kk; // [esp+Ch] [ebp-Ch]
  int i1; // [esp+Ch] [ebp-Ch]
  int i4; // [esp+Ch] [ebp-Ch]
  int i6; // [esp+Ch] [ebp-Ch]
  int i9; // [esp+Ch] [ebp-Ch]
  int i13; // [esp+Ch] [ebp-Ch]
  int i11; // [esp+Ch] [ebp-Ch]
  int i15; // [esp+Ch] [ebp-Ch]
  int i18; // [esp+Ch] [ebp-Ch]
  int i20; // [esp+Ch] [ebp-Ch]
  int i21; // [esp+Ch] [ebp-Ch]
  int i23; // [esp+Ch] [ebp-Ch]
  int i25; // [esp+Ch] [ebp-Ch]
  int i27; // [esp+Ch] [ebp-Ch]
  int k; // [esp+10h] [ebp-8h]
  int ii; // [esp+10h] [ebp-8h]
  int mm; // [esp+10h] [ebp-8h]
  int i2; // [esp+10h] [ebp-8h]
  int i7; // [esp+10h] [ebp-8h]
  int i16; // [esp+10h] [ebp-8h]
  int v41; // [esp+14h] [ebp-4h]
  int v42; // [esp+14h] [ebp-4h]
  int v43; // [esp+14h] [ebp-4h]
  int v44; // [esp+14h] [ebp-4h]

  v41 = 0;
  *(this + 513) = a2;
  switch ( *(this + 513) )
  {
    case 0:
      for ( i = 1; i <= 4; ++i )
      {
        for ( j = 2; j <= 14; ++j )
          *((_WORD *)this + v41++ + 2) = sub_641230(j, i);
      }
      break;
    case 1:
      for ( k = 0; k < 2; ++k )
      {
        for ( m = 1; m <= 4; ++m )
        {
          for ( n = 2; n <= 14; ++n )
            *((_WORD *)this + v41++ + 2) = sub_641230(n, m);
        }
      }
      break;
    case 2:
      for ( ii = 0; ii < 4; ++ii )
      {
        for ( jj = 1; jj <= 4; ++jj )
        {
          for ( kk = 1; kk <= 13; ++kk )
            *((_WORD *)this + v41++ + 2) = sub_641230(kk, jj);
        }
      }
      break;
    case 3:
      for ( mm = 0; mm < 6; ++mm )
      {
        for ( nn = 1; nn <= 4; ++nn )
        {
          for ( i1 = 1; i1 <= 13; ++i1 )
            *((_WORD *)this + v41++ + 2) = sub_641230(i1, nn);
        }
      }
      break;
    case 4:
      for ( i2 = 0; i2 < 8; ++i2 )
      {
        for ( i3 = 1; i3 <= 4; ++i3 )
        {
          for ( i4 = 1; i4 <= 13; ++i4 )
            *((_WORD *)this + v41++ + 2) = sub_641230(i4, i3);
        }
      }
      break;
    case 5:
      for ( i5 = 1; i5 <= 4; ++i5 )
      {
        for ( i6 = 1; i6 <= 13; ++i6 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i6, i5);
      }
      break;
    case 6:
      for ( i7 = 0; i7 < 2; ++i7 )
      {
        for ( i8 = 1; i8 <= 4; ++i8 )
        {
          for ( i9 = 1; i9 <= 13; ++i9 )
            *((_WORD *)this + v41++ + 2) = sub_641230(i9, i8);
        }
      }
      break;
    case 7:
      for ( i10 = 1; i10 <= 4; ++i10 )
      {
        for ( i11 = 2; i11 <= 14; ++i11 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i11, i10);
      }
      *((_WORD *)this + v41++ + 2) = sub_641230(15, 0);
      break;
    case 8:
      for ( i12 = 1; i12 <= 4; ++i12 )
      {
        for ( i13 = 2; i13 <= 14; ++i13 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i13, i12);
      }
      *((_WORD *)this + v41 + 2) = sub_641230(15, 1);
      v42 = v41 + 1;
      *((_WORD *)this + v42 + 2) = sub_641230(15, 2);
      v41 = v42 + 1;
      break;
    case 9:
    case 0xA:
    case 0xB:
      break;
    case 0xC:
      for ( i14 = 1; i14 <= 4; ++i14 )
      {
        for ( i15 = 1; i15 <= 10; ++i15 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i15, i14);
      }
      *((_WORD *)this + v41++ + 2) = sub_641230(15, 1);
      break;
    case 0xD:
      for ( i16 = 0; i16 < 2; ++i16 )
      {
        for ( i17 = 1; i17 <= 4; ++i17 )
        {
          for ( i18 = 2; i18 <= 14; ++i18 )
            *((_WORD *)this + v41++ + 2) = sub_641230(i18, i17);
        }
        *((_WORD *)this + v41 + 2) = sub_641230(15, 1);
        v43 = v41 + 1;
        *((_WORD *)this + v43 + 2) = sub_641230(15, 2);
        v41 = v43 + 1;
      }
      break;
    case 0xE:
      for ( i19 = 1; i19 <= 4; ++i19 )
      {
        for ( i20 = 1; i20 <= 14; ++i20 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i20, i19);
      }
      for ( i21 = 1; i21 <= 21; ++i21 )
        *((_WORD *)this + v41++ + 2) = sub_641230(i21, 5);
      *((_WORD *)this + v41++ + 2) = sub_641230(1, 6);
      break;
    case 0xF:
      for ( i22 = 1; i22 <= 4; ++i22 )
      {
        for ( i23 = 7; i23 <= 14; ++i23 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i23, i22);
      }
      break;
    case 0x10:
      for ( i24 = 1; i24 <= 4; ++i24 )
      {
        for ( i25 = 7; i25 <= 14; ++i25 )
          *((_WORD *)this + v41++ + 2) = sub_641230(i25, i24);
      }
      break;
    case 0x11:
      for ( i26 = 1; i26 <= 4; ++i26 )
      {
        for ( i27 = 9; i27 <= 14; ++i27 )
        {
          *((_WORD *)this + v41 + 2) = sub_641230(i27, i26);
          v44 = v41 + 1;
          *((_WORD *)this + v44 + 2) = sub_641230(i27, i26);
          v41 = v44 + 1;
        }
      }
      break;
    default:
      sub_5E9F20("false", "..\\casinoShell\\card.cpp", 919);
      break;
  }
  *(this + 515) = v41;
  return sub_6436A0(*(this + 515) - 1);
}


//======================================================================
// sub_6436A0
// entry 006436a0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_6436A0(_DWORD *this, int a2)
{
  *(this + 514) = a2;
  return this;
}


//======================================================================
// sub_6436C0
// entry 006436c0  size 103  status ok
//======================================================================

__int16 __thiscall sub_6436C0(_DWORD *this)
{
  if ( (int)*(this + 514) >= 0 )
  {
    return *((_WORD *)this + (*(this + 514))-- + 2);
  }
  else
  {
    sub_5E9F20("FALSE", "..\\casinoShell\\card.cpp", 935);
    return 0;
  }
}


//======================================================================
// sub_6437D0
// entry 006437d0  size 176  status ok
//======================================================================

_DWORD *__thiscall sub_6437D0(_DWORD *this, char a2, AFX_EXCEPTION_LINK *a3)
{
  _DWORD *result; // eax
  int v5; // [esp+8h] [ebp-Ch]
  __int16 v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  result = this;
  for ( i = *(this + 515) - 1; i > 0; --i )
  {
    if ( a3 )
      v5 = sub_6146A0(a3, i + 1);
    else
      v5 = sub_62FBF0(i + 1);
    v6 = *((_WORD *)this + v5 + 2);
    *((_WORD *)this + v5 + 2) = *((_WORD *)this + i + 2);
    result = this;
    *((_WORD *)this + i + 2) = v6;
  }
  if ( a2 )
    return sub_6436A0(this, *(this + 515) - 1);
  return result;
}


//======================================================================
// sub_643880
// entry 00643880  size 173  status ok
//======================================================================

char __thiscall sub_643880(_DWORD *this, unsigned __int16 a2, int a3)
{
  int i; // [esp+8h] [ebp-8h]

  if ( a3 < 0 || a3 >= *(this + 515) )
    sub_5E9F20("(0<=pos) && (pos<numCards)", "..\\casinoShell\\card.cpp", 1015);
  for ( i = 0; i < *(this + 515); ++i )
  {
    if ( *((unsigned __int16 *)this + i + 2) == a2 )
    {
      *((_WORD *)this + i + 2) = *((_WORD *)this + a3 + 2);
      *((_WORD *)this + a3 + 2) = a2;
      return 1;
    }
  }
  sub_62FDE0("problem arranging deck");
  return 0;
}


//======================================================================
// sub_643930
// entry 00643930  size 943  status ok
//======================================================================

char __thiscall sub_643930(_DWORD *this, int a2, int a3, const char *a4, char a5)
{
  char result; // al
  bool v6; // [esp+0h] [ebp-74Ch]
  bool v7; // [esp+4h] [ebp-748h]
  int v9; // [esp+Ch] [ebp-740h] BYREF
  unsigned __int16 v10; // [esp+10h] [ebp-73Ch]
  int j; // [esp+14h] [ebp-738h]
  bool v12; // [esp+1Bh] [ebp-731h]
  char Str[1536]; // [esp+1Ch] [ebp-730h] BYREF
  int v14; // [esp+61Ch] [ebp-130h] BYREF
  char v15; // [esp+623h] [ebp-129h]
  char Buffer[256]; // [esp+624h] [ebp-128h] BYREF
  int k; // [esp+728h] [ebp-24h]
  int v18; // [esp+72Ch] [ebp-20h]
  int v19[6]; // [esp+730h] [ebp-1Ch]
  int i; // [esp+748h] [ebp-4h]

  result = (char)this;
  v18 = *(this + 515) - 1;
  if ( a2 > 6 )
    result = sub_5E9F20("nHands <= 6", "..\\casinoShell\\card.cpp", 1046);
  for ( i = 0; i < a2; ++i )
  {
    sprintf(Buffer, "%sHand%d", a4, i);
    (*(void (__thiscall **)(_DWORD, char *, const char *, char *, int))(**(_DWORD **)(dword_7960D8 + 20) + 16))(
      *(_DWORD *)(dword_7960D8 + 20),
      Buffer,
      &Source,
      &Str[255 * i],
      255);
    v19[i] = 0;
    result = i + 1;
  }
  if ( a5 )
  {
    for ( j = 0; j < a3; ++j )
    {
      for ( k = 0; k < a2; ++k )
      {
        sub_641620(&Str[255 * k], v19[k], &v14, &v9);
        v7 = v14 && v9 || v14 == 15;
        v12 = v7;
        if ( v7 )
        {
          v10 = sub_641230(v14, v9);
          v15 = sub_643880(this, v10, v18);
          if ( !v15 )
          {
            if ( v14 == 14 )
            {
              v14 = 1;
            }
            else if ( v14 == 1 )
            {
              v14 = 14;
            }
            v10 = sub_641230(v14, v9);
            v15 = sub_643880(this, v10, v18);
          }
          if ( !v15 )
            sub_5E9F20("success", "..\\casinoShell\\card.cpp", 1089);
        }
        ++v19[k];
        --v18;
      }
      result = j + 1;
    }
  }
  else
  {
    for ( k = 0; k < a2; ++k )
    {
      for ( j = 0; j < a3; ++j )
      {
        sub_641620(&Str[255 * k], v19[k], &v14, &v9);
        v6 = v14 && v9 || v14 == 15;
        v12 = v6;
        if ( v6 )
        {
          v10 = sub_641230(v14, v9);
          sub_643880(this, v10, v18);
        }
        ++v19[k];
        --v18;
      }
      result = k + 1;
    }
  }
  return result;
}


//======================================================================
// sub_643DC0
// entry 00643dc0  size 101  status ok
//======================================================================

void __thiscall sub_643DC0(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_WORD *)(this + 400) )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 204))(this);
    sub_5EAF00(this, v1);
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 208))(this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 176))(this, v2);
    sub_5EB570((_BYTE *)this);
  }
  else
  {
    sub_5EB5A0((CWnd *)this);
  }
}


//======================================================================
// sub_643E30
// entry 00643e30  size 50  status ok
//======================================================================

int __thiscall sub_643E30(int this)
{
  return sub_643E70(*(_WORD *)(this + 400), *(_BYTE *)(this + 408), *(_DWORD *)(this + 412));
}


//======================================================================
// sub_643E70
// entry 00643e70  size 1107  status ok
//======================================================================

int __cdecl sub_643E70(unsigned __int16 a1, char a2, int a3)
{
  int result; // eax
  CImageDisplay *v4; // eax
  int v5; // eax
  CImageDisplay *v6; // eax
  CImageDisplay *v7; // eax
  int v8; // [esp+8h] [ebp-20h]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h]

  if ( a1 == 0xFFFF || a2 )
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 912))(dword_162EE84);
  if ( sub_641280(a1) == 15 && sub_641290(a1) == 2 )
  {
    v4 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    v5 = (int)sub_639FF0(v4);
    if ( v5 > 3150000 )
    {
      switch ( v5 )
      {
        case 3150001:
          result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
                 + 10;
          break;
        case 3150002:
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
               + 8;
        case 3150003:
          result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
                 + 4;
          break;
        case 3150140:
        case 3150144:
        case 3150148:
        case 3150152:
        case 3150156:
        case 3150160:
          goto LABEL_20;
        default:
          goto LABEL_13;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 3150000:
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
               + 8;
        case 2800:
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84);
        case 27127:
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
               + 6;
        case 27694:
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
               + 2;
        default:
LABEL_13:
          sub_5E9F20("false", "..\\casinoShell\\card.cpp", 1169);
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84);
      }
    }
  }
  else if ( sub_641280(a1) == 15 && sub_641290(a1) == 1 )
  {
    v7 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    v8 = (int)sub_639FF0(v7);
    if ( v8 > 3150000 )
    {
      switch ( v8 )
      {
        case 3150001:
          result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
                 + 11;
          break;
        case 3150002:
          return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
               + 9;
        case 3150003:
          result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
                 + 5;
          break;
        case 3150140:
        case 3150144:
        case 3150148:
        case 3150152:
        case 3150156:
        case 3150160:
LABEL_20:
          v6 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
          result = a3 + *(_DWORD *)&sub_639FF0(v6);
          break;
        default:
          goto LABEL_30;
      }
    }
    else
    {
      if ( v8 != 3150000 )
      {
        if ( v8 != 2800 )
        {
          if ( v8 == 27127 )
            return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
                 + 7;
          if ( v8 == 27694 )
            return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
                 + 3;
LABEL_30:
          sub_5E9F20("false", "..\\casinoShell\\card.cpp", 1192);
        }
        return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
             + 1;
      }
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 420))(dword_162EE84)
           + 9;
    }
  }
  else
  {
    v10 = a3 + sub_6388B0(dword_162EE84);
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 444))(
           dword_162EE84,
           v10) )
    {
      return v10;
    }
    else
    {
      switch ( sub_641290(a1) )
      {
        case 1:
          v9 = 13;
          break;
        case 2:
          v9 = 26;
          break;
        case 3:
          v9 = 39;
          break;
        case 4:
          v9 = 0;
          break;
        default:
          sub_5E9F20("false", "..\\casinoShell\\card.cpp", 1223);
          v9 = 0;
          break;
      }
      if ( sub_641280(a1) == 1 || sub_641280(a1) == 14 )
        return v9 + v10;
      else
        return v9 + v10 + sub_641280(a1) - 1;
    }
  }
  return result;
}


