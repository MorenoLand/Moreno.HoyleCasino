//======================================================================
// sub_62A6B0
// entry 0062a6b0  size 115  status ok
//======================================================================

char *__thiscall sub_62A6B0(Concurrency::details::VirtualProcessor *this, int a2)
{
  char *result; // eax
  struct Concurrency::IVirtualProcessorRoot *OwningRoot; // eax
  struct Concurrency::IVirtualProcessorRoot *v4; // eax

  if ( a2 == 1 )
  {
    result = (char *)Concurrency::details::VirtualProcessor::GetOwningRoot(this) - *((_DWORD *)this + 25);
    if ( (int)result >= *((_DWORD *)this + 23) )
    {
      OwningRoot = Concurrency::details::VirtualProcessor::GetOwningRoot(this);
      return (char *)sub_62A520((int)this, (int)OwningRoot - *((_DWORD *)this + 25));
    }
  }
  else
  {
    result = (char *)Concurrency::details::VirtualProcessor::GetOwningRoot(this) + *((_DWORD *)this + 25);
    if ( (int)result <= *((_DWORD *)this + 24) )
    {
      v4 = Concurrency::details::VirtualProcessor::GetOwningRoot(this);
      return (char *)sub_62A520((int)this, (int)v4 + *((_DWORD *)this + 25));
    }
  }
  return result;
}


//======================================================================
// sub_62A730
// entry 0062a730  size 43  status ok
//======================================================================

int __thiscall sub_62A730(_DWORD **this, int a2, int a3)
{
  return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 18) + 128))(*(this + 18), a2, a3);
}


//======================================================================
// sub_62A760
// entry 0062a760  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_62A760(void *this, int a2, int a3)
{
  _DWORD *v4; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v4 = &sciSpinBoxButton::`vftable';
  v4[120] = a2;
  v4[119] = a3;
  return v4;
}


//======================================================================
// sub_62A7A0
// entry 0062a7a0  size 41  status ok
//======================================================================

void __thiscall sub_62A7A0(_DWORD *this)
{
  *this = &sciSpinBoxButton::`vftable';
  *(this + 120) = 0;
  sub_601BA0((int)this);
}


//======================================================================
// sub_62A7D0
// entry 0062a7d0  size 49  status ok
//======================================================================

int __thiscall sub_62A7D0(int this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 480) + 176))(
           *(_DWORD *)(this + 480),
           *(_DWORD *)(this + 476));
}


//======================================================================
// sub_62A870
// entry 0062a870  size 141  status ok
//======================================================================

_DWORD *__thiscall sub_62A870(_DWORD *this)
{
  sub_62AEA0(this);
  *this = &List::`vftable';
  *(this + 2) = 0;
  *(this + 4) = 10;
  *(this + 3) = operator new(0x28u);
  *(this + 7) = 0;
  return this;
}


//======================================================================
// sub_62A900
// entry 0062a900  size 124  status ok
//======================================================================

int __thiscall sub_62A900(void **this)
{
  *this = &List::`vftable';
  sub_62AD70(this);
  if ( *(this + 4) )
    operator delete(*(this + 3));
  return sub_62AEF0(this);
}


//======================================================================
// sub_62A980
// entry 0062a980  size 148  status ok
//======================================================================

int __thiscall sub_62A980(int this)
{
  void *v3; // [esp+Ch] [ebp-Ch]
  int v4; // [esp+14h] [ebp-4h]

  v4 = 4 * *(_DWORD *)(this + 16);
  v3 = operator new(v4 + 40);
  memset(v3, 0, v4 + 40);
  memcpy(v3, *(const void **)(this + 12), v4);
  operator delete(*(void **)(this + 12));
  *(_DWORD *)(this + 12) = v3;
  *(_DWORD *)(this + 16) += 10;
  return this;
}


//======================================================================
// sub_62AA20
// entry 0062aa20  size 76  status ok
//======================================================================

_DWORD *__thiscall sub_62AA20(_DWORD *this, int a2)
{
  if ( *(this + 2) == *(this + 4) )
    sub_62A980((int)this);
  *(_DWORD *)(*(this + 3) + 4 * (*(this + 2))++) = a2;
  return this;
}


//======================================================================
// sub_62AA70
// entry 0062aa70  size 27  status ok
//======================================================================

int __stdcall sub_62AA70(int a1)
{
  return sub_62AAE0(a1, 0);
}


//======================================================================
// sub_62AAE0
// entry 0062aae0  size 127  status ok
//======================================================================

int __thiscall sub_62AAE0(_DWORD *this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  if ( *(this + 2) == *(this + 4) )
    sub_62A980((int)this);
  v5 = *(this + 3);
  for ( i = *(this + 2) - 1; i >= a3; --i )
    *(_DWORD *)(v5 + 4 * i + 4) = *(_DWORD *)(v5 + 4 * i);
  ++*(this + 2);
  *(_DWORD *)(v5 + 4 * a3) = a2;
  return a3;
}


//======================================================================
// sub_62AB60
// entry 0062ab60  size 79  status ok
//======================================================================

int __thiscall sub_62AB60(_DWORD *this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = sub_62AC30(this);
  for ( i = result; i; i = result )
  {
    result = a2;
    if ( a2 == i )
      break;
    result = sub_62ACE0(this);
  }
  if ( i == a2 )
    return sub_62ABB0(*(this + 5) - 1);
  return result;
}


//======================================================================
// sub_62ABB0
// entry 0062abb0  size 116  status ok
//======================================================================

int __thiscall sub_62ABB0(_DWORD *this, int a2)
{
  int result; // eax
  int i; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  result = (int)this;
  if ( *(this + 2) && a2 >= 0 && a2 < *(this + 2) )
  {
    v4 = *(this + 3);
    result = *(this + 2) - 1;
    *(this + 2) = result;
    for ( i = a2; i < *(this + 2); ++i )
    {
      *(_DWORD *)(v4 + 4 * i) = *(_DWORD *)(v4 + 4 * i + 4);
      result = i + 1;
    }
  }
  return result;
}


//======================================================================
// sub_62AC30
// entry 0062ac30  size 81  status ok
//======================================================================

int __thiscall sub_62AC30(_DWORD *this)
{
  *(this + 5) = 1;
  *(this + 6) = 0;
  if ( *(this + 5) > *(this + 2) )
  {
    *(this + 7) = 0;
    return 0;
  }
  else
  {
    *(this + 7) = *(this + 3);
    return *(_DWORD *)*(this + 7);
  }
}


//======================================================================
// sub_62ACE0
// entry 0062ace0  size 69  status ok
//======================================================================

int __thiscall sub_62ACE0(_DWORD *this)
{
  if ( *(this + 5) >= *(this + 2) )
    return 0;
  ++*(this + 5);
  *(this + 7) += 4;
  return *(_DWORD *)*(this + 7);
}


//======================================================================
// sub_62AD70
// entry 0062ad70  size 101  status ok
//======================================================================

int __thiscall sub_62AD70(_DWORD *this)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD, int); // [esp+Ch] [ebp-8h]
  int v4; // [esp+10h] [ebp-4h]

  result = (int)this;
  v4 = *(this + 3);
  while ( *(this + 2) )
  {
    --*(this + 2);
    result = *(_DWORD *)(v4 + 4 * *(this + 2));
    if ( result )
    {
      v3 = *(int (__thiscall ****)(_DWORD, int))(v4 + 4 * *(this + 2));
      result = (**v3)(v3, 1);
    }
  }
  return result;
}


//======================================================================
// sub_62ADE0
// entry 0062ade0  size 59  status ok
//======================================================================

int __thiscall sub_62ADE0(_DWORD *this, int a2)
{
  if ( a2 >= *(this + 2) )
    return 0;
  else
    return *(_DWORD *)(*(this + 3) + 4 * a2);
}


//======================================================================
// sub_62AEA0
// entry 0062aea0  size 65  status ok
//======================================================================

_DWORD *__thiscall sub_62AEA0(_DWORD *this)
{
  *this = &Object::`vftable';
  ++dword_15EEE18;
  *(this + 1) = ++dword_15EEE1C;
  return this;
}


//======================================================================
// sub_62AEF0
// entry 0062aef0  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_62AEF0(_DWORD *this)
{
  *this = &Object::`vftable';
  --dword_15EEE18;
  *(this + 1) = 0;
  return this;
}


//======================================================================
// sub_62AF50
// entry 0062af50  size 78  status ok
//======================================================================

int __thiscall sub_62AF50(int this)
{
  sub_62AEA0((_DWORD *)this);
  *(_DWORD *)this = &off_6D970C;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 24) = 0;
  return this;
}


//======================================================================
// sub_62AFA0
// entry 0062afa0  size 177  status ok
//======================================================================

_DWORD *__thiscall sub_62AFA0(int this)
{
  *(_DWORD *)this = &off_6D970C;
  if ( *(_DWORD *)(this + 12) )
    fclose(*(FILE **)(this + 12));
  if ( *(_DWORD *)(this + 16) )
    operator delete(*(void **)(this + 16));
  if ( *(_DWORD *)(this + 20) )
    operator delete(*(void **)(this + 20));
  return sub_62AEF0((_DWORD *)this);
}


//======================================================================
// sub_62B060
// entry 0062b060  size 64  status ok
//======================================================================

int __cdecl sub_62B060(_DWORD *a1, _DWORD *a2)
{
  if ( a1[1] == a2[1] )
    return *a1 - *a2;
  else
    return a1[1] - a2[1];
}


//======================================================================
// sub_62B0A0
// entry 0062b0a0  size 380  status ok
//======================================================================

char __thiscall sub_62B0A0(int this, char *Str, char *Mode)
{
  size_t v3; // esi
  size_t v4; // esi
  size_t v5; // eax
  size_t v6; // esi
  size_t v7; // esi
  size_t v8; // eax
  char v11; // [esp+Bh] [ebp-1h]

  v11 = 0;
  if ( *(_DWORD *)(this + 12) )
  {
    fclose(*(FILE **)(this + 12));
    *(_DWORD *)(this + 12) = 0;
  }
  v3 = strlen(Str);
  if ( v3 > strlen(".zip") )
  {
    v4 = strlen(Str);
    v5 = strlen(".zip");
    if ( !stricmp(&Str[v4 - v5], ".zip") )
      *(_DWORD *)(this + 8) = 1;
  }
  v6 = strlen(Str);
  if ( v6 > strlen(".pod") )
  {
    v7 = strlen(Str);
    v8 = strlen(".pod");
    if ( !stricmp(&Str[v7 - v8], ".pod") )
      *(_DWORD *)(this + 8) = 1;
  }
  strcpy((char *)(this + 25), Str);
  *(_DWORD *)(this + 12) = sub_5EA9C0(Str, Mode);
  if ( !*(_DWORD *)(this + 12) )
    return 0;
  if ( !*(_DWORD *)(this + 8) )
    v11 = sub_62BA50(this);
  if ( *(_DWORD *)(this + 8) == 1 )
    v11 = sub_62B6A0(this);
  if ( v11 )
    qsort(
      (void *)(*(_DWORD *)(this + 20) + 8),
      **(_DWORD **)(this + 20),
      0x10u,
      (_CoreCrtNonSecureSearchSortCompareFunction)sub_62B060);
  return v11;
}


//======================================================================
// sub_62B220
// entry 0062b220  size 513  status ok
//======================================================================

char __thiscall sub_62B220(_DWORD *this, int a2, int a3, void **a4, size_t *a5)
{
  _BYTE *v7; // [esp+18h] [ebp-40h]
  _BYTE Buffer[8]; // [esp+1Ch] [ebp-3Ch] BYREF
  __int16 v9; // [esp+24h] [ebp-34h]
  int v10; // [esp+2Eh] [ebp-2Ah]
  unsigned int v11; // [esp+32h] [ebp-26h]
  unsigned __int16 v12; // [esp+36h] [ebp-22h]
  unsigned __int16 v13; // [esp+38h] [ebp-20h]
  int v14; // [esp+3Ch] [ebp-1Ch]
  int Offset; // [esp+40h] [ebp-18h] BYREF
  size_t ElementSize; // [esp+48h] [ebp-10h] BYREF
  unsigned int v17; // [esp+4Ch] [ebp-Ch] BYREF
  FILE *Stream; // [esp+50h] [ebp-8h]
  unsigned int v19; // [esp+54h] [ebp-4h]

  v19 = 0;
  v9 = 0;
  Stream = (FILE *)sub_62B430(a2, a3, &Offset, &ElementSize);
  if ( Stream )
  {
    *a5 = ElementSize;
    fseek(Stream, Offset, 0);
    if ( *(this + 2) == 1 )
    {
      fread(Buffer, 0x1Eu, 1u, Stream);
      if ( v10 != ElementSize )
        sub_5E9F20("header.dwCompressedSize == (DWORD)length", "..\\scilib\\platform\\prf.cpp", 151);
      v19 = v11;
      fseek(Stream, v13 + v12, 1);
    }
    if ( *(this + 2) == 1 && v9 )
    {
      *a4 = operator new(v19);
      v7 = operator new(ElementSize + 6);
      *v7 = 120;
      v7[1] = -100;
      fread(v7 + 2, ElementSize, 1u, Stream);
      v7[ElementSize + 2] = 0;
      v7[ElementSize + 3] = 0;
      v7[ElementSize + 4] = 0;
      v7[ElementSize + 5] = 0;
      ElementSize += 2;
      v17 = v19;
      v14 = sub_62CCF0(*a4, &v17, v7, ElementSize);
      *a5 = v19;
      operator delete(v7);
      if ( v14 )
      {
        operator delete(*a4);
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      *a4 = operator new(ElementSize);
      if ( *a4 )
      {
        fread(*a4, ElementSize, 1u, Stream);
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    *a4 = 0;
    return 0;
  }
}


//======================================================================
// sub_62B430
// entry 0062b430  size 251  status ok
//======================================================================

int __thiscall sub_62B430(int this, int a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  unsigned int v9; // [esp+Ch] [ebp-4h]

  if ( !*(_DWORD *)(this + 12) )
    return 0;
  v9 = sub_62B530(a2, a3);
  if ( v9 >= **(_DWORD **)(this + 20) )
    return 0;
  *a4 = *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v9 + 16);
  v7 = *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v9 + 20);
  fseek(*(FILE **)(this + 12), *a4, 0);
  if ( *(_DWORD *)(*(_DWORD *)(this + 20) + 4) )
  {
    for ( i = fgetc(*(FILE **)(this + 12)); i; i = fgetc(*(FILE **)(this + 12)) )
    {
      --v7;
      ++*a4;
    }
    --v7;
    ++*a4;
  }
  *a5 = v7;
  return *(_DWORD *)(this + 12);
}


//======================================================================
// sub_62B530
// entry 0062b530  size 195  status ok
//======================================================================

int __thiscall sub_62B530(_DWORD **this, int a2, unsigned int a3)
{
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  unsigned int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v4 = 0;
  v7 = **(this + 5) - 1;
  while ( v4 <= v7 )
  {
    v8 = (v4 + v7) / 2;
    v6 = (*(this + 5))[4 * v8 + 3];
    v5 = (*(this + 5))[4 * v8 + 2];
    if ( v6 == a3 && v5 == a2 )
      return (v4 + v7) / 2;
    if ( v6 >= a3 )
    {
      if ( v6 <= a3 )
      {
        if ( v5 >= a2 )
          v7 = v8 - 1;
        else
          v4 = v8 + 1;
      }
      else
      {
        v7 = v8 - 1;
      }
    }
    else
    {
      v4 = v8 + 1;
    }
  }
  return -1;
}


//======================================================================
// sub_62B6A0
// entry 0062b6a0  size 938  status ok
//======================================================================

char __thiscall sub_62B6A0(int this)
{
  int v2; // [esp+0h] [ebp-36Ch]
  char Destination[268]; // [esp+14h] [ebp-358h] BYREF
  char *v5; // [esp+120h] [ebp-24Ch]
  void *v6; // [esp+124h] [ebp-248h]
  char *Source; // [esp+128h] [ebp-244h]
  char Ext[264]; // [esp+12Ch] [ebp-240h] BYREF
  int v9; // [esp+234h] [ebp-138h]
  int v10; // [esp+238h] [ebp-134h]
  char Filename[264]; // [esp+23Ch] [ebp-130h] BYREF
  int v12; // [esp+348h] [ebp-24h]
  int i; // [esp+34Ch] [ebp-20h]
  _BYTE Buffer[10]; // [esp+350h] [ebp-1Ch] BYREF
  unsigned __int16 v15; // [esp+35Ah] [ebp-12h]
  size_t ElementCount; // [esp+35Ch] [ebp-10h]
  int Offset; // [esp+360h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 12) )
    return 0;
  fseek(*(FILE **)(this + 12), 0, 2);
  v10 = ftell(*(FILE **)(this + 12));
  fseek(*(FILE **)(this + 12), 0, 0);
  fseek(*(FILE **)(this + 12), v10 - 22, 0);
  fread(Buffer, 1u, 0x1Au, *(FILE **)(this + 12));
  *(_DWORD *)(this + 20) = operator new(16 * (v15 - 1) + 24);
  **(_DWORD **)(this + 20) = v15;
  *(_DWORD *)(*(_DWORD *)(this + 20) + 4) = 0;
  v6 = operator new(ElementCount);
  fseek(*(FILE **)(this + 12), Offset, 0);
  fread(v6, 1u, ElementCount, *(FILE **)(this + 12));
  Source = (char *)v6;
  for ( i = 0; i < v15; ++i )
  {
    v5 = Source;
    Source += 46;
    if ( *((unsigned __int16 *)v5 + 14) < 0x104u )
    {
      strncpy(Destination, Source, *((unsigned __int16 *)v5 + 14));
      Destination[*((unsigned __int16 *)v5 + 14)] = 0;
    }
    else
    {
      sub_5E9F20("false", "..\\scilib\\platform\\prf.cpp", 339);
      Destination[0] = 0;
    }
    Source += *((unsigned __int16 *)v5 + 15) + *((unsigned __int16 *)v5 + 14) + *((unsigned __int16 *)v5 + 16);
    splitpath(Destination, 0, 0, Filename, Ext);
    v9 = atoi(Filename);
    strupr(Ext);
    if ( v9 && strlen(Ext) >= 4 )
    {
      if ( strlen(Ext) <= 4 )
        v2 = 0x20000000;
      else
        v2 = Ext[4];
      v12 = Ext[1] + (Ext[2] << 8) + v2 + (Ext[3] << 16);
    }
    else
    {
      sub_5E9F20("false", "..\\scilib\\platform\\prf.cpp", 369);
      v9 = 0;
      v12 = 541015871;
    }
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 8) = v12;
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 12) = v9;
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 16) = *(_DWORD *)(v5 + 42);
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 20) = *((_DWORD *)v5 + 5);
  }
  operator delete(v6);
  return 1;
}


//======================================================================
// sub_62BA50
// entry 0062ba50  size 510  status ok
//======================================================================

char __thiscall sub_62BA50(int this)
{
  int v3; // [esp+18h] [ebp-10h] BYREF
  int i; // [esp+1Ch] [ebp-Ch]
  bool v5; // [esp+23h] [ebp-5h]
  unsigned __int16 *v6; // [esp+24h] [ebp-4h]

  if ( !*(_DWORD *)(this + 12) )
    return 0;
  *(_DWORD *)(this + 16) = operator new(0x18u);
  fread(*(void **)(this + 16), 0x18u, 1u, *(FILE **)(this + 12));
  v5 = **(_DWORD **)(this + 16) != 1;
  v3 = *(_DWORD *)(*(_DWORD *)(this + 16) + 8);
  if ( v5 )
    sub_62CE00(&v3);
  if ( v3 == 1 )
  {
    **(_DWORD **)(this + 16) = **(unsigned __int16 **)(this + 16);
    v5 = **(_DWORD **)(this + 16) != 1;
  }
  if ( v5 )
    sub_62BC50(this);
  fseek(*(FILE **)(this + 12), *(_DWORD *)(*(_DWORD *)(this + 16) + 20), 0);
  *(_DWORD *)(this + 20) = operator new(*(_DWORD *)(*(_DWORD *)(this + 16) + 16));
  fread(*(void **)(this + 20), *(_DWORD *)(*(_DWORD *)(this + 16) + 16), 1u, *(FILE **)(this + 12));
  if ( *(_DWORD *)(*(_DWORD *)(this + 16) + 8) == 1 )
  {
    v6 = *(unsigned __int16 **)(this + 20);
    *(_DWORD *)(*(_DWORD *)(this + 20) + 4) = v6[1];
    **(_DWORD **)(this + 20) = *v6;
    for ( i = **(_DWORD **)(this + 20) - 1; i != -1; --i )
    {
      *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 20) = *(_DWORD *)&v6[8 * i + 8];
      *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 16) = *(_DWORD *)&v6[8 * i + 6];
      *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 12) = v6[8 * i + 4];
      *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * i + 8) = *(_DWORD *)&v6[8 * i + 2];
    }
  }
  if ( v5 )
    sub_62BCC0(this);
  return 1;
}


//======================================================================
// sub_62BC50
// entry 0062bc50  size 102  status ok
//======================================================================

char __thiscall sub_62BC50(_DWORD *this)
{
  sub_62CE00(*(this + 4));
  sub_62CE00(*(this + 4) + 8);
  sub_62CE00(*(this + 4) + 12);
  sub_62CE00(*(this + 4) + 16);
  sub_62CE00(*(this + 4) + 20);
  return 1;
}


//======================================================================
// sub_62BCC0
// entry 0062bcc0  size 156  status ok
//======================================================================

char __thiscall sub_62BCC0(_DWORD *this)
{
  unsigned int i; // [esp+18h] [ebp-4h]

  sub_62CE00(*(this + 5));
  sub_62CE00(*(this + 5) + 4);
  for ( i = 0; i < *(_DWORD *)*(this + 5); ++i )
  {
    sub_62CE00(*(this + 5) + 16 * i + 12);
    sub_62CE00(*(this + 5) + 16 * i + 16);
    sub_62CE00(*(this + 5) + 16 * i + 20);
  }
  return 1;
}


//======================================================================
// sub_62BD60
// entry 0062bd60  size 202  status ok
//======================================================================

void __cdecl sub_62BD60(FILE *a1, FILE *Stream, size_t a3)
{
  void *Buffer; // [esp+10h] [ebp-Ch]

  Buffer = operator new(0x4000u);
  while ( a3 )
  {
    if ( a3 <= 0x4000 )
      fread(Buffer, a3, 1u, Stream);
    else
      fread(Buffer, 0x4000u, 1u, Stream);
    if ( a3 <= 0x4000 )
      fwrite(Buffer, a3, 1u, a1);
    else
      fwrite(Buffer, 0x4000u, 1u, a1);
    if ( a3 <= 0x4000 )
      a3 = 0;
    else
      a3 -= 0x4000;
  }
  operator delete(Buffer);
}


//======================================================================
// sub_62BF70
// entry 0062bf70  size 91  status ok
//======================================================================

bool __thiscall sub_62BF70(int this)
{
  return fwrite(*(const void **)(this + 16), 0x18u, 1u, *(FILE **)(this + 12))
      && fwrite(*(const void **)(this + 20), *(_DWORD *)(*(_DWORD *)(this + 16) + 16), 1u, *(FILE **)(this + 12)) != 0;
}


//======================================================================
// sub_62C0C0
// entry 0062c0c0  size 689  status ok
//======================================================================

char __thiscall sub_62C0C0(int this, FILE *Stream, int a3, int a4, char *Str)
{
  size_t v6; // eax
  size_t v7; // eax
  size_t v8; // [esp+4h] [ebp-1Ch]
  size_t v9; // [esp+8h] [ebp-18h]
  void *v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 8) )
  {
    sub_5E9F20("false", "..\\scilib\\platform\\prf.cpp", 578);
    return 0;
  }
  else if ( Stream )
  {
    fflush(*(FILE **)(this + 12));
    sub_62C820(a3, a4);
    v12 = **(_DWORD **)(this + 20);
    v11 = operator new(*(_DWORD *)(*(_DWORD *)(this + 16) + 16) + 16);
    memcpy(v11, *(const void **)(this + 20), *(_DWORD *)(*(_DWORD *)(this + 16) + 16));
    operator delete(*(void **)(this + 20));
    *(_DWORD *)(this + 20) = v11;
    *(_DWORD *)(*(_DWORD *)(this + 16) + 16) += 16;
    ++**(_DWORD **)(this + 20);
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v12 + 8) = a3;
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v12 + 12) = a4;
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v12 + 16) = *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * (v12 - 1) + 20)
                                                        + *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * (v12 - 1) + 16);
    if ( *(_DWORD *)(*(_DWORD *)(this + 20) + 4) )
    {
      if ( Str )
        v9 = strlen(Str) + 1;
      else
        v9 = 1;
      v8 = v9;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v12 + 20) = v8 + sub_5E9FD0(Stream);
    *(_DWORD *)(*(_DWORD *)(this + 16) + 20) += *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v12 + 20);
    fseek(*(FILE **)(this + 12), *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * v12 + 16), 0);
    if ( *(_DWORD *)(*(_DWORD *)(this + 20) + 4) )
    {
      if ( Str )
      {
        v6 = strlen(Str);
        fwrite(Str, v6 + 1, 1u, *(FILE **)(this + 12));
      }
      else
      {
        putc(0, *(FILE **)(this + 12));
      }
    }
    v7 = sub_5E9FD0(Stream);
    sub_62BD60(*(FILE **)(this + 12), Stream, v7);
    fwrite(*(const void **)(this + 20), *(_DWORD *)(*(_DWORD *)(this + 16) + 16), 1u, *(FILE **)(this + 12));
    fseek(*(FILE **)(this + 12), 0, 0);
    fwrite(*(const void **)(this + 16), 0x18u, 1u, *(FILE **)(this + 12));
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_62C630
// entry 0062c630  size 188  status ok
//======================================================================

char __thiscall sub_62C630(_DWORD *this, unsigned int *a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  unsigned int i; // [esp+4h] [ebp-4h]

  if ( *(this + 2) )
  {
    sub_5E9F20("false", "..\\scilib\\platform\\prf.cpp", 683);
    return 0;
  }
  else
  {
    for ( i = *a2; i < *(_DWORD *)*(this + 5); ++i )
    {
      v4 = (_DWORD *)(*(this + 5) + 16 * (i + 1) + 8);
      v5 = (_DWORD *)(*(this + 5) + 16 * i + 8);
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      *(_DWORD *)(*(this + 5) + 16 * i + 16) -= *a3;
    }
    return 1;
  }
}


//======================================================================
// sub_62C6F0
// entry 0062c6f0  size 303  status ok
//======================================================================

char __thiscall sub_62C6F0(int this, unsigned int *a2)
{
  size_t ElementCount; // [esp+Ch] [ebp-Ch]
  unsigned int i; // [esp+10h] [ebp-8h]
  void *Buffer; // [esp+14h] [ebp-4h]

  ElementCount = 0;
  if ( *(_DWORD *)(this + 8) )
  {
    sub_5E9F20("false", "..\\scilib\\platform\\prf.cpp", 700);
    return 0;
  }
  else
  {
    for ( i = *a2; i < **(_DWORD **)(this + 20) - 1; ++i )
      ElementCount += *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * (i + 1) + 20);
    fseek(*(FILE **)(this + 12), *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * (*a2 + 1) + 16), 0);
    Buffer = operator new(ElementCount);
    if ( Buffer )
    {
      fread(Buffer, 1u, ElementCount, *(FILE **)(this + 12));
      fseek(*(FILE **)(this + 12), *(_DWORD *)(*(_DWORD *)(this + 20) + 16 * *a2 + 16), 0);
      fwrite(Buffer, 1u, ElementCount, *(FILE **)(this + 12));
      operator delete(Buffer);
    }
    return 1;
  }
}


//======================================================================
// sub_62C820
// entry 0062c820  size 634  status ok
//======================================================================

char __thiscall sub_62C820(int this, int a2, unsigned int a3)
{
  int v5; // [esp+0h] [ebp-A0h]
  _DWORD v6[2]; // [esp+Ch] [ebp-94h] BYREF
  void *v7; // [esp+14h] [ebp-8Ch]
  char Buffer[128]; // [esp+18h] [ebp-88h] BYREF
  unsigned int v9; // [esp+9Ch] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 8) )
  {
    sub_5E9F20("false", "..\\scilib\\platform\\prf.cpp", 726);
    return 0;
  }
  else if ( *(_DWORD *)(this + 12) )
  {
    fflush(*(FILE **)(this + 12));
    v9 = sub_62B530((_DWORD **)this, a2, a3);
    if ( v9 > **(_DWORD **)(this + 20) - 1 )
    {
      return 0;
    }
    else
    {
      v6[1] = &a2;
      sprintf(Buffer, "Deleteing resource %d type '%c%c%c%c'.\n", a3, (char)a2, SBYTE1(a2), SBYTE2(a2), SHIBYTE(a2));
      sub_62FDE0(Buffer, this);
      sub_62C6F0(v5, &v9);
      v6[0] = *(_DWORD *)(*(_DWORD *)(v5 + 20) + 16 * v9 + 20);
      sub_62C630((_DWORD *)v5, &v9, v6);
      *(_DWORD *)(*(_DWORD *)(v5 + 16) + 16) -= 16;
      --**(_DWORD **)(v5 + 20);
      *(_DWORD *)(*(_DWORD *)(v5 + 16) + 20) -= v6[0];
      v7 = operator new(*(_DWORD *)(*(_DWORD *)(v5 + 16) + 16));
      memcpy(v7, *(const void **)(v5 + 20), *(_DWORD *)(*(_DWORD *)(v5 + 16) + 16));
      operator delete(*(void **)(v5 + 20));
      *(_DWORD *)(v5 + 20) = v7;
      fwrite(*(const void **)(v5 + 20), *(_DWORD *)(*(_DWORD *)(v5 + 16) + 16), 1u, *(FILE **)(v5 + 12));
      fseek(*(FILE **)(v5 + 12), 0, 0);
      fwrite(*(const void **)(v5 + 16), 0x18u, 1u, *(FILE **)(v5 + 12));
      return 1;
    }
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_62CCF0
// entry 0062ccf0  size 212  status ok
//======================================================================

int __cdecl sub_62CCF0(int a1, int *a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-3Ch]
  int v6; // [esp+0h] [ebp-3Ch]
  int v7; // [esp+4h] [ebp-38h] BYREF
  int v8; // [esp+8h] [ebp-34h]
  int v9; // [esp+10h] [ebp-2Ch]
  int v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h]
  int v12; // [esp+24h] [ebp-18h]
  int v13; // [esp+28h] [ebp-14h]

  v7 = a3;
  v8 = a4;
  v9 = a1;
  v10 = *a2;
  if ( v10 != *a2 )
    return -5;
  v12 = 0;
  v13 = 0;
  v5 = sub_6818D0(&v7, "1.2.3", 56);
  if ( v5 )
    return v5;
  v6 = sub_681A00(&v7, 2);
  if ( v6 == 1 )
  {
    *a2 = v11;
    return sub_682FF0(&v7);
  }
  else
  {
    sub_682FF0(&v7);
    if ( v6 == 2 || v6 == -5 && !v8 )
      return -3;
    else
      return v6;
  }
}


//======================================================================
// sub_62CE00
// entry 0062ce00  size 92  status ok
//======================================================================

unsigned __int16 *__cdecl sub_62CE00(unsigned __int16 *a1)
{
  *a1 = ((int)*a1 >> 8) | (*a1 << 8);
  a1[1] = ((int)a1[1] >> 8) | (a1[1] << 8);
  *(_DWORD *)a1 = HIWORD(*(_DWORD *)a1) | (*(_DWORD *)a1 << 16);
  return a1;
}


//======================================================================
// sub_62CE60
// entry 0062ce60  size 702  status ok
//======================================================================

int __thiscall sub_62CE60(FILE **this, char *String, char *Buffer)
{
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // [esp+Ch] [ebp-1Ch]
  const char *v8; // [esp+10h] [ebp-18h]
  int Error; // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+20h] [ebp-8h]
  char *Block; // [esp+24h] [ebp-4h]

  Block = strdup(String);
  sub_5EA5B0(Block);
  *this = sub_5EA9C0(Block, "rb");
  if ( *this )
  {
    free(Block);
    v11 = sub_684ED0(*this, this + 2, 0, 0);
    if ( v11 >= 0 )
    {
      *(this + 182) = (FILE *)sub_685DD0(this + 2, -1);
      *(this + 183) = (FILE *)sub_685E10(this + 2, -1);
      if ( (*(this + 182))->_cnt == 1 )
        *(this + 187) = (FILE *)4353;
      else
        *(this + 187) = (FILE *)4355;
      Error = alGetError();
      if ( Error >= 0 )
      {
        alSource3f(*(this + 186), 4100, 0.0, 0.0);
        alSource3f(*(this + 186), 4102, 0.0, 0.0);
        alSource3f(*(this + 186), 4101, 0.0, 0.0);
        alSourcef(*(this + 186), 4129, 0.0);
        alSourcei(*(this + 186), 514, 1);
        sprintf(Buffer, "No error.");
        return 0;
      }
      else
      {
        fclose(*this);
        v5 = (const char *)sub_62D750(Error);
        sprintf(Buffer, "OpenAL error was raised:\n%s", v5);
        if ( *(this + 183) )
          v8 = "appears valid";
        else
          v8 = "is NULL";
        if ( *(this + 182) )
          v7 = "appears valid";
        else
          v7 = "is NULL";
        v6 = (const char *)sub_62D750(Error);
        sprintf(
          Buffer,
          "ogg_stream::open:\n\tm_vorbisInfo %s\n\tm_vorbisComment is %s\n\tvf->seekable=%s\n",
          v6,
          v7,
          v8);
        return -3;
      }
    }
    else
    {
      fclose(*this);
      v4 = (const char *)sub_62D750(v11);
      sprintf(Buffer, "Could not open Ogg stream:\n%s", v4);
      return -2;
    }
  }
  else
  {
    free(Block);
    sprintf(Buffer, "Could not open Ogg file.");
    return -1;
  }
}


//======================================================================
// sub_62D120
// entry 0062d120  size 153  status ok
//======================================================================

char __thiscall sub_62D120(int this)
{
  if ( *(_DWORD *)(this + 744) )
  {
    alSourceStop(*(_DWORD *)(this + 744));
    sub_62D690(this);
    alSourcei(*(_DWORD *)(this + 744), 4105, 0);
    *(_DWORD *)(this + 744) = 0;
    *(_DWORD *)(this + 740) = 0;
    *(_DWORD *)(this + 736) = 0;
    sub_684240(this + 8);
  }
  if ( *(_DWORD *)this )
    fclose(*(FILE **)this);
  return 1;
}


//======================================================================
// sub_62D310
// entry 0062d310  size 157  status ok
//======================================================================

bool __thiscall sub_62D310(_DWORD *this)
{
  if ( (unsigned __int8)sub_62D3B0(this) )
    return 1;
  if ( !(unsigned __int8)sub_62D580(*(this + 184)) )
    return 0;
  if ( !(unsigned __int8)sub_62D580(*(this + 185)) )
    return 0;
  alSourceQueueBuffers(*(this + 186), 2, this + 184);
  alSourcePlay(*(this + 186));
  return (unsigned __int8)sub_62D710(this) != 0;
}


//======================================================================
// sub_62D3B0
// entry 0062d3b0  size 52  status ok
//======================================================================

BOOL __thiscall sub_62D3B0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  alGetSourcei(*(this + 186), 4112, &v2);
  return v2 == 4114;
}


//======================================================================
// sub_62D3F0
// entry 0062d3f0  size 52  status ok
//======================================================================

BOOL __thiscall sub_62D3F0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  alGetSourcei(*(this + 186), 4112, &v2);
  return v2 == 4116;
}


//======================================================================
// sub_62D470
// entry 0062d470  size 271  status ok
//======================================================================

char __thiscall sub_62D470(_DWORD *this)
{
  _DWORD *v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-8h] BYREF
  char v6; // [esp+Fh] [ebp-1h]

  v2 = this;
  v6 = 1;
  alGetSourcei(*(this + 186), 4118, &v5);
  if ( v5 > 1 )
    sub_62FDE0("Need more space in the stream buffer.\n", (char)v2);
  while ( v5 > 0 )
  {
    alSourceUnqueueBuffers(v2[186], 1, &v4);
    if ( !(unsigned __int8)sub_62D710(v2) )
      return 0;
    v6 = sub_62D580(v4);
    if ( v6 )
      alSourceQueueBuffers(v2[186], 1, &v4);
    if ( !(unsigned __int8)sub_62D710(v2) )
      return 0;
    --v5;
  }
  if ( v6
    && sub_62D3F0(v2)
    && (sub_62FDE0("restarting audio stream that ran out\n", (char)v2),
        alSourcePlay(*(_DWORD *)(v3 + 744)),
        !(unsigned __int8)sub_62D710(v3)) )
  {
    return 0;
  }
  else
  {
    return v6;
  }
}


//======================================================================
// sub_62D580
// entry 0062d580  size 264  status ok
//======================================================================

bool __thiscall sub_62D580(int this, int a2)
{
  _BYTE v4[4]; // [esp+Ch] [ebp-10h] BYREF
  int v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  v6 = 0;
  v7 = 0;
  while ( v6 < 0x40000 )
  {
    v5 = sub_685E50(this + 8, (char *)&unk_15EEE20 + v6, 0x40000 - v6, v7, 2, 1, v4);
    if ( v5 > 0x40000 - v6 )
      return 0;
    if ( v5 <= 0 )
    {
      if ( v5 < 0 )
        return 0;
      if ( !*(_BYTE *)(this + 752) || sub_685CC0(this + 8, 0.0) )
        break;
    }
    else
    {
      v6 += v5;
    }
  }
  if ( !v6 )
    return 0;
  alBufferData(a2, *(_DWORD *)(this + 748), &unk_15EEE20, v6, *(_DWORD *)(*(_DWORD *)(this + 728) + 8));
  return (unsigned __int8)sub_62D710(this) != 0;
}


//======================================================================
// sub_62D690
// entry 0062d690  size 128  status ok
//======================================================================

char __thiscall sub_62D690(_DWORD *this)
{
  _BYTE v4[4]; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  alGetSourcei(*(this + 186), 4117, &v5);
  while ( v5-- )
  {
    alSourceUnqueueBuffers(*(this + 186), 1, v4);
    if ( !(unsigned __int8)sub_62D710(this) )
      return 0;
  }
  alSourcei(*(this + 186), 4105, 0);
  return 1;
}


//======================================================================
// sub_62D710
// entry 0062d710  size 59  status ok
//======================================================================

char sub_62D710()
{
  char String; // al
  int Error; // [esp+4h] [ebp-4h]

  Error = alGetError();
  if ( !Error )
    return 1;
  String = alGetString(Error);
  sub_62FDE0("OpenAL error was raised:\n%s\n", String);
  return 0;
}


//======================================================================
// sub_62D750
// entry 0062d750  size 116  status ok
//======================================================================

const char *__stdcall sub_62D750(int a1)
{
  const char *result; // eax

  if ( a1 > 40961 )
    return "Unknown Ogg error.";
  if ( a1 == 40961 )
    return "Invalid Name parameter passed to AL.";
  switch ( a1 )
  {
    case -134:
      result = "Vorbis version mismatch.";
      break;
    case -133:
      result = "Invalid Vorbis header.";
      break;
    case -132:
      result = "Not Vorbis data.";
      break;
    case -129:
      result = "Internal logic fault (bug or heap/stack corruption.";
      break;
    case -128:
      result = "Read from media.";
      break;
    default:
      return "Unknown Ogg error.";
  }
  return result;
}


//======================================================================
// sub_62D7E0
// entry 0062d7e0  size 67  status ok
//======================================================================

char __thiscall sub_62D7E0(_DWORD *this, float a2)
{
  if ( !*(this + 186) )
    return 0;
  alSourcef(*(this + 186), 4106, LODWORD(a2));
  return sub_62D710();
}


//======================================================================
// sub_62D830
// entry 0062d830  size 64  status ok
//======================================================================

char __thiscall sub_62D830(_DWORD *this, int a2)
{
  if ( !*(this + 186) )
    return 0;
  alGetSourcef(*(this + 186), 4106, a2);
  return sub_62D710();
}


//======================================================================
// sub_62D870
// entry 0062d870  size 27  status ok
//======================================================================

char __thiscall sub_62D870(_BYTE *this, char a2)
{
  *(this + 752) = a2;
  return 1;
}


//======================================================================
// sub_62D890
// entry 0062d890  size 83  status ok
//======================================================================

char __thiscall sub_62D890(_DWORD *this, char a2)
{
  if ( !*(this + 186) )
    return 0;
  if ( a2 )
    alSourcePause(*(this + 186));
  else
    alSourcePlay(*(this + 186));
  return sub_62D710();
}


//======================================================================
// sub_62D8F0
// entry 0062d8f0  size 45  status ok
//======================================================================

int __thiscall sub_62D8F0(void *this)
{
  int v2; // [esp+0h] [ebp-4h]

  sub_62EC40(this);
  *(_DWORD *)v2 = &StringManager::`vftable';
  *(_BYTE *)(v2 + 60) = 32;
  *(_BYTE *)(v2 + 61) = 10;
  return v2;
}


//======================================================================
// sub_62D920
// entry 0062d920  size 38  status ok
//======================================================================

int __stdcall sub_62D920(int a1)
{
  return sub_603C50(*(void **)(dword_7960D8 + 24), 542398548, a1, 0);
}


//======================================================================
// sub_62D950
// entry 0062d950  size 36  status ok
//======================================================================

int __stdcall sub_62D950(char *Str2)
{
  return sub_603FB0(*(void **)(dword_7960D8 + 24), 542398548, Str2);
}


//======================================================================
// sub_62D980
// entry 0062d980  size 31  status ok
//======================================================================

int __fastcall sub_62D980(int a1, int a2, int a3)
{
  return sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), a2, a3);
}


//======================================================================
// sub_62D9A0
// entry 0062d9a0  size 26  status ok
//======================================================================

int __thiscall sub_62D9A0(void *this, int a2)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)a2 + 4))(a2, this);
}


//======================================================================
// sub_62D9C0
// entry 0062d9c0  size 21  status ok
//======================================================================

unsigned int __stdcall sub_62D9C0(CFrameWndEx *a1)
{
  return CFrameWndEx::GetPaneMenuEntryID(a1);
}


//======================================================================
// sub_62D9E0
// entry 0062d9e0  size 139  status ok
//======================================================================

char *__thiscall sub_62D9E0(void *this, _BYTE *a2)
{
  int v3; // [esp+4h] [ebp-4h]

  if ( a2 && *a2 )
  {
    v3 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 92))(this, a2);
    if ( v3 )
    {
      return (char *)v3;
    }
    else
    {
      sub_62FDE0("String Resource: \"%s\" Not Found!\r\n", (char)a2);
      sub_5E9F20("false", "..\\scilib\\platform\\StringManager.cpp", 68);
      return a2;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\platform\\StringManager.cpp", 60);
    return aUninitializedS;
  }
}


//======================================================================
// sub_62DBB0
// entry 0062dbb0  size 226  status ok
//======================================================================

char __cdecl sub_62DBB0(char *Str)
{
  signed int i; // [esp+0h] [ebp-8h]
  int j; // [esp+0h] [ebp-8h]
  char v4; // [esp+7h] [ebp-1h]

  v4 = 0;
  while ( *Str && *Str == 32 )
  {
    sub_62DCA0(Str, 0);
    v4 = 1;
  }
  for ( i = strlen(Str) - 1; i > 0 && Str[i] && Str[i] == 32; --i )
  {
    sub_62DCA0(Str, i);
    v4 = 1;
  }
  for ( j = 0; Str[j]; ++j )
  {
    if ( Str[j] == 32 )
    {
      while ( Str[j + 1] == 32 )
      {
        sub_62DCA0(Str, j);
        v4 = 1;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_62DCA0
// entry 0062dca0  size 87  status ok
//======================================================================

int __cdecl sub_62DCA0(int a1, int a2)
{
  int i; // [esp+0h] [ebp-4h]

  for ( i = 0; *(_BYTE *)(i + a1); ++i )
  {
    if ( i > a2 )
      *(_BYTE *)(i + a1 - 1) = *(_BYTE *)(i + a1);
  }
  if ( i > a2 )
    *(_BYTE *)(i + a1 - 1) = 0;
  return a1;
}


//======================================================================
// sub_62DD10
// entry 0062dd10  size 191  status ok
//======================================================================

void *__cdecl sub_62DD10(int a1)
{
  void *result; // eax
  int v2; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  if ( dword_76208C )
  {
    v2 = 1;
    *(_DWORD *)off_762088 = a1;
    for ( i = 1; i < dword_762090; ++i )
      *((_DWORD *)off_762088 + i) = 1103515245 * *((_DWORD *)off_762088 + i - 1) + 12345;
    result = off_762088;
    off_762080 = (_UNKNOWN *)((char *)off_762088 + 4 * dword_762094);
    off_762084 = off_762088;
    for ( j = 0; j < 10 * dword_762090; ++j )
    {
      sub_62E0A0(v2);
      result = (void *)(j + 1);
    }
  }
  else
  {
    result = off_762088;
    *(_DWORD *)off_762088 = a1;
  }
  return result;
}


//======================================================================
// sub_62E0A0
// entry 0062e0a0  size 206  status ok
//======================================================================

int sub_62E0A0()
{
  int v1; // [esp+0h] [ebp-4h]

  if ( dword_76208C )
  {
    *(_DWORD *)off_762080 += *(_DWORD *)off_762084;
    v1 = (*(int *)off_762080 >> 1) & 0x7FFFFFFF;
    off_762080 = (_UNKNOWN *)((char *)off_762080 + 4);
    if ( off_762080 < (_UNKNOWN *)off_762098 )
    {
      off_762084 = (_UNKNOWN *)((char *)off_762084 + 4);
      if ( off_762084 >= (_UNKNOWN *)off_762098 )
        off_762084 = off_762088;
    }
    else
    {
      off_762080 = off_762088;
      off_762084 = (_UNKNOWN *)((char *)off_762084 + 4);
    }
  }
  else
  {
    *(_DWORD *)off_762088 = (1103515245 * *(_DWORD *)off_762088 + 12345) & 0x7FFFFFFF;
    return *(_DWORD *)off_762088;
  }
  return v1;
}


//======================================================================
// sub_62E2D0
// entry 0062e2d0  size 110  status ok
//======================================================================

_DWORD *__thiscall sub_62E2D0(int this)
{
  *(_DWORD *)this = &Bitmap::`vftable';
  operator delete(*(void **)(this + 1032));
  return sub_62AEF0((_DWORD *)this);
}


//======================================================================
// sub_62E340
// entry 0062e340  size 20  status ok
//======================================================================

int __thiscall sub_62E340(_DWORD *this)
{
  return *(this + 259);
}


//======================================================================
// sub_62E360
// entry 0062e360  size 20  status ok
//======================================================================

int __thiscall sub_62E360(_DWORD *this)
{
  return *(this + 260);
}


//======================================================================
// sub_62E380
// entry 0062e380  size 61  status ok
//======================================================================

int __stdcall sub_62E380(_DWORD *a1, _DWORD *a2, __int16 a3)
{
  int result; // eax

  do
  {
    *a1++ = *a2++;
    result = (unsigned __int16)--a3;
  }
  while ( a3 );
  return result;
}


//======================================================================
// sub_62E3C0
// entry 0062e3c0  size 230  status ok
//======================================================================

int __fastcall sub_62E3C0(
        int a1,
        int a2,
        pairNode *a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int result; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // [esp-14h] [ebp-48h]
  int v17; // [esp-8h] [ebp-3Ch]
  int v18; // [esp-4h] [ebp-38h]
  int v20; // [esp+4h] [ebp-30h]
  int v21; // [esp+Ch] [ebp-28h]
  int v22[4]; // [esp+14h] [ebp-20h] BYREF
  int v23[4]; // [esp+24h] [ebp-10h] BYREF

  result = a1;
  if ( *(_DWORD *)(a1 + 1032) )
  {
    v21 = sub_62E360((_DWORD *)a1);
    v22[0] = 0;
    v22[1] = 0;
    v22[2] = sub_62E340((_DWORD *)a1);
    v22[3] = v21;
    v20 = pairNode::raw_length(a3);
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = ATL::COleDateTime::GetStatus(a3);
    v23[3] = v20;
    result = (unsigned __int8)sub_624A70(&a4, v23, &a8, v22);
    if ( (_BYTE)result )
    {
      LOWORD(v12) = *(_WORD *)(a1 + 1044);
      v18 = v12;
      v17 = unknown_libname_847(a3);
      v13 = a11 - a9;
      v14 = a10 - a8;
      LOWORD(v15) = a9;
      v16 = v15;
      LOWORD(v13) = a8;
      LOWORD(v14) = a5;
      LOWORD(v15) = a4;
      return (*(int (__thiscall **)(int, pairNode *, int, int, int, int, int, int, int, int))(*(_DWORD *)a1 + 16))(
               a1,
               a3,
               v15,
               v14,
               v13,
               v16,
               a10 - a8,
               a11 - a9,
               v17,
               v18);
    }
  }
  return result;
}


//======================================================================
// sub_62E4B0
// entry 0062e4b0  size 164  status ok
//======================================================================

int __thiscall sub_62E4B0(
        _DWORD *this,
        _DWORD *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        __int16 a7,
        __int16 a8,
        int a9,
        unsigned __int16 a10)
{
  int result; // eax
  int v12; // esi
  _DWORD *v13; // [esp+Ch] [ebp-8h]
  _DWORD *v14; // [esp+10h] [ebp-4h]

  result = (int)this;
  v14 = (_DWORD *)(a10 * a6 + *(this + 258) + *(this + 262) * a5);
  while ( a8-- )
  {
    v12 = sub_6238D0(a2, a4);
    v13 = (_DWORD *)(unknown_libname_726(a2) * a3 + v12);
    result = sub_62E380(v13, v14, a7);
    v14 = (_DWORD *)((char *)v14 + a10);
    ++a4;
  }
  return result;
}


//======================================================================
// sub_62E6B0
// entry 0062e6b0  size 55  status ok
//======================================================================

char __thiscall sub_62E6B0(_DWORD *this, int a2, int a3)
{
  return *(_BYTE *)(*(this + 258) + a2 + *(this + 261) * a3);
}


//======================================================================
// sub_62E6F0
// entry 0062e6f0  size 20  status ok
//======================================================================

int __thiscall sub_62E6F0(_DWORD *this)
{
  return *(this + 261);
}


//======================================================================
// sub_62EC40
// entry 0062ec40  size 175  status ok
//======================================================================

_DWORD *__thiscall sub_62EC40(_DWORD *this)
{
  *this = &StringManagerBase::`vftable';
  sub_62F920(this + 1);
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 11) = operator new(0x1000u);
  *(this + 10) = 0;
  *((_BYTE *)this + 60) = 44;
  *((_BYTE *)this + 61) = 10;
  *((_BYTE *)this + 62) = 0;
  *((_BYTE *)this + 63) = 1;
  return this;
}


//======================================================================
// sub_62ECF0
// entry 0062ecf0  size 270  status ok
//======================================================================

int __thiscall sub_62ECF0(char *this)
{
  void **i; // [esp+1Ch] [ebp-10h]

  *(_DWORD *)this = &StringManagerBase::`vftable';
  if ( *((_DWORD *)this + 8) )
    sub_5E9F20("!m_Start", "..\\scilib\\platform\\StringManagerBase.cpp", 35);
  if ( *((_DWORD *)this + 9) )
    sub_5E9F20("!m_ptr", "..\\scilib\\platform\\StringManagerBase.cpp", 36);
  operator delete(*((void **)this + 11));
  *((_DWORD *)this + 11) = 0;
  for ( i = (void **)*((_DWORD *)this + 5); i != (void **)(*((_DWORD *)this + 5) + 8 * *((_DWORD *)this + 3)); i += 2 )
  {
    operator delete(*i);
    operator delete(i[1]);
  }
  return sub_62F990(this + 4);
}


//======================================================================
// sub_62EE00
// entry 0062ee00  size 53  status ok
//======================================================================

int __thiscall sub_62EE00(_BYTE *this, int a2, int a3)
{
  *(this + 62) = 0;
  return sub_62FA00(a2, a3);
}


//======================================================================
// sub_62EE40
// entry 0062ee40  size 62  status ok
//======================================================================

int __thiscall sub_62EE40(int this)
{
  qsort(*(void **)(this + 20), *(_DWORD *)(this + 12), 8u, sub_62F8E0);
  *(_BYTE *)(this + 62) = 1;
  return this;
}


//======================================================================
// sub_62EE80
// entry 0062ee80  size 103  status ok
//======================================================================

unsigned int __thiscall sub_62EE80(int this)
{
  unsigned int v3; // [esp+4h] [ebp-4h]

  v3 = mbsnextc(*(const unsigned __int8 **)(this + 36));
  *(_DWORD *)(this + 36) = mbsinc(*(const unsigned __int8 **)(this + 36));
  ++*(_DWORD *)(this + 52);
  if ( v3 == 10 )
  {
    *(_DWORD *)(this + 52) = 0;
    ++*(_DWORD *)(this + 48);
  }
  return v3;
}


//======================================================================
// sub_62EEF0
// entry 0062eef0  size 125  status ok
//======================================================================

int __thiscall sub_62EEF0(int this, int a2)
{
  *(_DWORD *)(this + 36) = mbsdec(*(const unsigned __int8 **)(this + 32), *(const unsigned __int8 **)(this + 36));
  --*(_DWORD *)(this + 52);
  if ( a2 == 10 )
  {
    *(_DWORD *)(this + 52) = 0;
    --*(_DWORD *)(this + 48);
  }
  if ( a2 != **(unsigned __int8 **)(this + 36) )
    sub_5E9F20("c == *m_ptr", "..\\scilib\\platform\\StringManagerBase.cpp", 112);
  return a2;
}


//======================================================================
// sub_62EF70
// entry 0062ef70  size 64  status ok
//======================================================================

bool __thiscall sub_62EF70(void *this, int a2)
{
  return a2 == 32 || a2 == 9 || (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, a2);
}


//======================================================================
// sub_62EFB0
// entry 0062efb0  size 46  status ok
//======================================================================

bool __stdcall sub_62EFB0(int a1)
{
  return a1 == 10 || a1 == 13;
}


//======================================================================
// sub_62EFE0
// entry 0062efe0  size 170  status ok
//======================================================================

int __thiscall sub_62EFE0(_BYTE **this)
{
  unsigned int v4; // [esp+8h] [ebp-4h]

  do
  {
    if ( !**(this + 9) || *(this + 9) >= &(*(this + 8))[(int)*(this + 10)] )
      return 0;
    v4 = sub_62EE80((int)this);
    if ( (*((int (__thiscall **)(_BYTE **))*this + 5))(this) == v4 )
    {
      ++*(this + 12);
      *(this + 13) = 0;
    }
  }
  while ( (*((unsigned __int8 (__thiscall **)(_BYTE **, unsigned int))*this + 6))(this, v4) );
  sub_62EEF0((int)this, v4);
  return 0;
}


//======================================================================
// sub_62F090
// entry 0062f090  size 109  status ok
//======================================================================

unsigned int __thiscall sub_62F090(void *this, int C)
{
  unsigned int Ca; // [esp+10h] [ebp+8h]

  if ( C != 92 )
    return C;
  Ca = sub_62EE80((int)this);
  if ( islower(Ca) && strchr(aBF, Ca) )
    return strchr(aBF, Ca)[1];
  else
    return Ca;
}


//======================================================================
// sub_62F100
// entry 0062f100  size 54  status ok
//======================================================================

int __thiscall sub_62F100(void *this)
{
  unsigned int v3; // [esp+4h] [ebp-4h]

  do
    v3 = sub_62EE80((int)this);
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 20))(this) != v3 );
  return sub_62EEF0((int)this, v3);
}


//======================================================================
// sub_62F140
// entry 0062f140  size 54  status ok
//======================================================================

int __thiscall sub_62F140(void *this, int a2, int a3, int a4)
{
  unsigned int v6; // [esp+4h] [ebp-4h]

  v6 = sub_62EE80((int)this);
  if ( v6 == a2 )
    return a3;
  sub_62EEF0((int)this, v6);
  return a4;
}


//======================================================================
// sub_62F180
// entry 0062f180  size 468  status ok
//======================================================================

unsigned int __thiscall sub_62F180(_BYTE *this, int a2, unsigned int a3, int a4)
{
  char v5; // [esp+0h] [ebp-18h]
  BOOL v6; // [esp+4h] [ebp-14h]
  signed int v8; // [esp+Ch] [ebp-Ch]
  unsigned __int8 *Ptr; // [esp+10h] [ebp-8h]

  Ptr = (unsigned __int8 *)a3;
  v8 = sub_62EE80((int)this);
  if ( *(this + 63) && v8 == 34 )
    a2 = 34;
  while ( 1 )
  {
    if ( a2 == 32 )
      v6 = (*(unsigned __int8 (__thiscall **)(_BYTE *, signed int))(*(_DWORD *)this + 24))(this, v8) == 0;
    else
      v6 = v8 != a2;
    if ( !v6 || (*(unsigned __int8 (__thiscall **)(_BYTE *, signed int))(*(_DWORD *)this + 28))(this, v8) )
    {
LABEL_25:
      *Ptr = 0;
      return a3;
    }
    if ( (unsigned int)Ptr >= a3 + a4 - 1 )
      break;
    if ( v8 >= 256 )
    {
      *(_WORD *)Ptr = v8;
      if ( v8 >= 0x10000 )
      {
        Ptr[2] = BYTE2(v8);
        sub_5E9F20("false", "..\\scilib\\platform\\StringManagerBase.cpp", 265);
      }
    }
    else
    {
      *Ptr = v8;
    }
    Ptr = mbsinc(Ptr);
    v5 = !**((_BYTE **)this + 9)
      || *((_DWORD *)this + 9) >= (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 8));
    if ( v5 )
      goto LABEL_25;
    v8 = sub_62EE80((int)this);
  }
  sub_62FDE0("StringManagerBase: buffer length exceeded!\n", v5);
  sub_5E9F20("false", "..\\scilib\\platform\\StringManagerBase.cpp", 234);
  if ( (unsigned int)(Ptr - 1) >= a3 )
  {
    *(Ptr - 1) = 46;
    if ( (unsigned int)(Ptr - 2) >= a3 )
    {
      *(Ptr - 2) = 46;
      if ( (unsigned int)(Ptr - 3) >= a3 )
        *(Ptr - 3) = 46;
    }
  }
  *Ptr = 0;
  return a3;
}


//======================================================================
// sub_62F360
// entry 0062f360  size 153  status ok
//======================================================================

char *__thiscall sub_62F360(char *this)
{
  size_t v2; // eax
  char Str[512]; // [esp+8h] [ebp-208h] BYREF
  char *Destination; // [esp+20Ch] [ebp-4h]

  if ( !(*(int (__thiscall **)(char *, _DWORD, char *, int))(*(_DWORD *)this + 52))(this, *(this + 60), Str, 512) )
    return 0;
  v2 = strlen(Str);
  Destination = (char *)operator new(v2 + 1);
  strcpy(Destination, Str);
  return Destination;
}


//======================================================================
// sub_62F400
// entry 0062f400  size 112  status ok
//======================================================================

char *__thiscall sub_62F400(char *this)
{
  size_t v2; // eax
  char *Destination; // [esp+8h] [ebp-4h]

  if ( !(*(int (__thiscall **)(char *, _DWORD, _DWORD, int))(*(_DWORD *)this + 52))(
          this,
          *(this + 61),
          *((_DWORD *)this + 11),
          4096) )
    return 0;
  v2 = strlen(*((const char **)this + 11));
  Destination = (char *)operator new(v2 + 1);
  strcpy(Destination, *((const char **)this + 11));
  return Destination;
}


//======================================================================
// sub_62F470
// entry 0062f470  size 184  status ok
//======================================================================

void __thiscall sub_62F470(void *this)
{
  void *v2; // [esp+8h] [ebp-8h]
  int v3; // [esp+Ch] [ebp-4h]

  v2 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 56))(this);
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this);
    if ( v3 )
    {
      (*(void (__thiscall **)(void *, void *, int))(*(_DWORD *)this + 48))(this, v2, v3);
    }
    else
    {
      sub_62FDE0("StringManagerBase: no value found for key '%s'!\n", (char)v2);
      sub_5E9F20("false", "..\\scilib\\platform\\StringManagerBase.cpp", 339);
      operator delete(v2);
    }
  }
  else
  {
    sub_62FDE0("StringManagerBase: no key found!\n", (char)this);
    sub_5E9F20("false", "..\\scilib\\platform\\StringManagerBase.cpp", 330);
  }
}


//======================================================================
// sub_62F530
// entry 0062f530  size 253  status ok
//======================================================================

int __thiscall sub_62F530(int this)
{
  int result; // eax
  bool v2; // [esp+0h] [ebp-10h]
  unsigned int v5; // [esp+Ch] [ebp-4h]

  while ( 1 )
  {
    result = this;
    if ( !**(_BYTE **)(this + 36) )
      break;
    result = this;
    if ( *(_DWORD *)(this + 36) >= (unsigned int)(*(_DWORD *)(this + 40) + *(_DWORD *)(this + 32)) )
      break;
    sub_62EFE0((_BYTE **)this);
    v2 = !**(_BYTE **)(this + 36)
      || *(_DWORD *)(this + 36) >= (unsigned int)(*(_DWORD *)(this + 40) + *(_DWORD *)(this + 32));
    result = v2;
    if ( v2 )
      break;
    v5 = sub_62EE80(this);
    if ( v5 == 35 || v5 == 47 && (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 36))(this, 47, 1, 0) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 40))(this);
    }
    else
    {
      sub_62EEF0(this, v5);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 64))(this);
    }
  }
  return result;
}


//======================================================================
// sub_62F630
// entry 0062f630  size 221  status ok
//======================================================================

char __thiscall sub_62F630(_DWORD *this, int a2)
{
  if ( !a2 )
    return 0;
  if ( *(this + 8) )
    sub_5E9F20("!m_Start", "..\\scilib\\platform\\StringManagerBase.cpp", 396);
  *(this + 8) = (*(int (__thiscall **)(_DWORD *, int))(*this + 12))(this, a2);
  if ( *(this + 8) )
  {
    *(this + 9) = *(this + 8);
    *(this + 10) = (*(int (__thiscall **)(_DWORD *, int))(*this + 16))(this, a2);
    (*(void (__thiscall **)(_DWORD *))(*this + 68))(this);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, a2);
    (*(void (__thiscall **)(_DWORD *))(*this + 72))(this);
    *(this + 8) = 0;
    *(this + 9) = 0;
    *(this + 10) = 0;
    return 1;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, a2);
    return 0;
  }
}


//======================================================================
// sub_62F710
// entry 0062f710  size 51  status ok
//======================================================================

int __thiscall sub_62F710(void *this, int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = (**(int (__thiscall ***)(void *, int))this)(this, a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 84))(this, v4);
}


//======================================================================
// sub_62F750
// entry 0062f750  size 52  status ok
//======================================================================

int __thiscall sub_62F750(void *this, int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 84))(this, v4);
}


//======================================================================
// sub_62F790
// entry 0062f790  size 151  status ok
//======================================================================

int __thiscall sub_62F790(void *this, _BYTE *Key)
{
  _DWORD *v4; // [esp+10h] [ebp-4h]

  if ( !*Key )
    return 0;
  if ( !*((_BYTE *)this + 62) )
  {
    sub_5E9F20("false", "..\\scilib\\platform\\StringManagerBase.cpp", 457);
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 72))(this);
  }
  v4 = bsearch(Key, *((const void **)this + 5), *((_DWORD *)this + 3), 8u, operator delete);
  if ( v4 )
    return v4[1];
  else
    return 0;
}


//======================================================================
// sub_62F830
// entry 0062f830  size 123  status ok
//======================================================================

char __thiscall sub_62F830(void *this, char *Str, char *Destination, size_t a4)
{
  char *Source; // [esp+4h] [ebp-4h]

  Source = (char *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 92))(this, Str);
  if ( !Source )
  {
    if ( a4 > strlen(Str) )
      sub_5E9F20("maxLen <= strlen(keyName)", "..\\scilib\\platform\\StringManagerBase.cpp", 492);
    strncpy(Destination, Str, a4 - 1);
  }
  strcpy(Destination, Source);
  return 1;
}


//======================================================================
// sub_62F8E0
// entry 0062f8e0  size 25  status ok
//======================================================================

int __cdecl sub_62F8E0(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}


//======================================================================
// sub_62F920
// entry 0062f920  size 102  status ok
//======================================================================

_DWORD *__thiscall sub_62F920(_DWORD *this)
{
  *this = &TList<StringManagerBase::StringPair,EqVal>::`vftable';
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  memset(this + 5, 0, 8u);
  return this;
}


//======================================================================
// sub_62F990
// entry 0062f990  size 100  status ok
//======================================================================

void __thiscall sub_62F990(void **this)
{
  *this = &TList<StringManagerBase::StringPair,EqVal>::`vftable';
  if ( *(this + 2) )
  {
    memset(*(this + 4), 0, 8 * (_DWORD)*(this + 2));
    *(this + 2) = 0;
  }
  if ( *(this + 3) )
    operator delete(*(this + 4));
}


//======================================================================
// sub_62FA00
// entry 0062fa00  size 110  status ok
//======================================================================

int __thiscall sub_62FA00(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int result; // eax

  if ( *(this + 2) == *(this + 3) )
  {
    if ( !*(this + 3) )
      *(this + 3) = 1;
    *(this + 3) *= 2;
    sub_62FAA0(this);
  }
  v3 = *(this + 2);
  v4 = *(this + 4);
  *(_DWORD *)(v4 + 8 * v3) = a2;
  *(_DWORD *)(v4 + 8 * v3 + 4) = a3;
  result = *(this + 2) + 1;
  *(this + 2) = result;
  return result;
}


//======================================================================
// sub_62FA70
// entry 0062fa70  size 46  status ok
//======================================================================

void **__thiscall sub_62FA70(void **this, char a2)
{
  sub_62F990(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_62FAA0
// entry 0062faa0  size 247  status ok
//======================================================================

int __thiscall sub_62FAA0(int this)
{
  int result; // eax
  char *v2; // [esp+0h] [ebp-24h]
  int v4; // [esp+8h] [ebp-1Ch]
  _DWORD *i; // [esp+Ch] [ebp-18h]
  _DWORD *v6; // [esp+14h] [ebp-10h]
  int v7; // [esp+1Ch] [ebp-8h]

  v7 = *(_DWORD *)(this + 12);
  v6 = operator new(8 * v7);
  if ( v6 )
  {
    v4 = v7;
    for ( i = v6; --v4 >= 0; i += 2 )
    {
      *i = 0;
      i[1] = 0;
    }
    v2 = (char *)v6;
  }
  else
  {
    v2 = 0;
  }
  result = this;
  if ( *(_DWORD *)(this + 16) )
  {
    memmove(v2, *(const void **)(this + 16), 8 * *(_DWORD *)(this + 8));
    memset(&v2[8 * *(_DWORD *)(this + 8)], 0, 8 * (*(_DWORD *)(this + 12) - *(_DWORD *)(this + 8)));
    operator delete(*(void **)(this + 16));
  }
  *(_DWORD *)(this + 16) = v2;
  return result;
}


//======================================================================
// sub_62FBA0
// entry 0062fba0  size 33  status ok
//======================================================================

int __cdecl sub_62FBA0(unsigned int a1)
{
  if ( a1 )
    return sub_6146A0(*(AFX_EXCEPTION_LINK **)(dword_7960D8 + 36), a1);
  else
    return 0;
}


//======================================================================
// sub_62FBF0
// entry 0062fbf0  size 53  status ok
//======================================================================

int __cdecl sub_62FBF0(signed int a1)
{
  if ( a1 >= 0 )
    return sub_62FBA0(a1);
  sub_5E9F20("limit >= 0", "..\\casinoShell\\util.cpp", 32);
  return 0;
}


//======================================================================
// sub_62FC30
// entry 0062fc30  size 74  status ok
//======================================================================

int __cdecl sub_62FC30(int a1, int a2)
{
  if ( a1 <= a2 )
    return a1 + sub_62FBA0(a2 - a1 + 1);
  else
    return a2 + sub_62FBA0(a1 - a2 + 1);
}


//======================================================================
// sub_62FDE0
// entry 0062fde0  size 120  status ok
//======================================================================

int sub_62FDE0(char *Format, ...)
{
  char Buffer[2052]; // [esp+0h] [ebp-810h] BYREF
  int v3; // [esp+808h] [ebp-8h]
  va_list ArgList; // [esp+80Ch] [ebp-4h]
  va_list va; // [esp+81Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  va_copy(ArgList, va);
  v3 = vsprintf(Buffer, Format, va);
  if ( v3 >= 2047 )
    sub_5E9F20("nBuf < 2047", "..\\casinoShell\\util.cpp", 139);
  return sub_62FE60(Buffer);
}


//======================================================================
// sub_62FE60
// entry 0062fe60  size 167  status ok
//======================================================================

void __cdecl sub_62FE60(LPCSTR lpOutputString)
{
  OutputDebugStringA(lpOutputString);
  if ( !byte_162EE6D && dword_7960D8 && *(_DWORD *)(dword_7960D8 + 20) )
  {
    byte_162EE6C = sub_607900((int)"DebugStringToFile", 0);
    byte_162EE6D = 1;
  }
  if ( byte_162EE6C )
  {
    if ( !Stream )
      Stream = sub_5EA9C0("DEBUGLOG.TXT", "w+");
    if ( Stream )
    {
      fputs(lpOutputString, Stream);
      fflush(Stream);
    }
  }
}


//======================================================================
// sub_62FF10
// entry 0062ff10  size 29  status ok
//======================================================================

int __cdecl sub_62FF10(LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
  return sub_62FF50(0, lpText, lpCaption, uType, -1);
}


//======================================================================
// sub_62FF30
// entry 0062ff30  size 31  status ok
//======================================================================

int __cdecl sub_62FF30(LPCSTR lpText, LPCSTR lpCaption, UINT uType, int a4)
{
  return sub_62FF50(0, lpText, lpCaption, uType, a4);
}


//======================================================================
// sub_62FF50
// entry 0062ff50  size 221  status ok
//======================================================================

int __cdecl sub_62FF50(int a1, LPCSTR lpText, LPCSTR lpCaption, UINT uType, int a5)
{
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]
  _DWORD *v8; // [esp+8h] [ebp-4h]

  if ( dword_162EE80 )
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 88))(dword_162EE80);
    (*(void (__thiscall **)(_DWORD *, LPCSTR, LPCSTR, UINT, int))(*v8 + 64))(v8, lpCaption, lpText, uType, a5);
    v7 = v8[112];
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_162EE80 + 92))(dword_162EE80, v8);
  }
  else if ( dword_7960D8 && *(_DWORD *)(dword_7960D8 + 16) )
  {
    v6 = _RTDynamicCast(
           *(_DWORD *)(dword_7960D8 + 16),
           0,
           &VWindow `RTTI Type Descriptor',
           &Window `RTTI Type Descriptor',
           0);
    return MessageBoxA(*(HWND *)(v6 + 140), lpText, lpCaption, uType);
  }
  else
  {
    return MessageBoxA(0, lpText, lpCaption, uType);
  }
  return v7;
}


//======================================================================
// sub_630030
// entry 00630030  size 153  status ok
//======================================================================

int sub_630030()
{
  int result; // eax
  int v1; // edx

  result = unknown_libname_841(dword_162EE84);
  if ( !result )
  {
    byte_7960D4 = sub_607900((int)"confirmQuit", byte_7960D4);
    if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)1100
      || Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)1001 )
    {
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 44))(
               dword_162EE84,
               1);
    }
    else
    {
      LOBYTE(v1) = byte_7960D4 == 0;
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 44))(
               dword_162EE84,
               v1);
    }
  }
  return result;
}


//======================================================================
// sub_6300D0
// entry 006300d0  size 28  status ok
//======================================================================

int __cdecl sub_6300D0(int a1)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 16))(
           dword_162EE84,
           a1);
}


//======================================================================
// sub_6300F0
// entry 006300f0  size 26  status ok
//======================================================================

int sub_6300F0()
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
}


//======================================================================
// sub_630130
// entry 00630130  size 325  status ok
//======================================================================

void __cdecl sub_630130(int a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // [esp+0h] [ebp-28h]
  int v5; // [esp+Ch] [ebp-1Ch] BYREF
  int v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int v8; // [esp+18h] [ebp-10h]
  _DWORD *v9; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h]

  if ( dword_162EE84 )
  {
    v11 = CRecentFileList::GetSize((Concurrency::details::ContextBase *)((char *)dword_162EE84 + 4)) - 1;
    if ( a3 )
    {
      for ( i = CRecentFileList::GetSize((Concurrency::details::ContextBase *)((char *)dword_162EE84 + 4)) - 1; i >= 0; --i )
      {
        v9 = (_DWORD *)sub_60CA40((_DWORD *)dword_162EE84 + 1, i);
        if ( v9 == a3 )
        {
          v11 = i - 1;
          break;
        }
      }
    }
    for ( i = v11; i >= 0; --i )
    {
      v9 = (_DWORD *)sub_60CA40((_DWORD *)dword_162EE84 + 1, i);
      if ( v9 )
      {
        if ( v9[106] == a1 )
        {
          v5 = *a2;
          v6 = a2[1];
          v7 = a2[2];
          v8 = a2[3];
          v4 = -sub_5F84F0(v9);
          v3 = unknown_libname_619(v9);
          v5 -= v3;
          v6 += v4;
          v7 -= v3;
          v8 += v4;
          if ( sub_5F8EA0((int)v9, &v5, (int)a3) )
            break;
        }
      }
    }
  }
}


//======================================================================
// sub_630280
// entry 00630280  size 325  status ok
//======================================================================

void __cdecl sub_630280(int a1, int *a2, int a3, unsigned __int8 *a4)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-28h]
  int v6; // [esp+Ch] [ebp-1Ch] BYREF
  int v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int v9; // [esp+18h] [ebp-10h]
  unsigned __int8 *j; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  int Size; // [esp+24h] [ebp-4h]

  if ( dword_162EE84 )
  {
    if ( a3 )
    {
      Size = CRecentFileList::GetSize((Concurrency::details::ContextBase *)((char *)dword_162EE84 + 4));
      for ( i = 0; i < Size; ++i )
      {
        if ( sub_60CA40((_DWORD *)dword_162EE84 + 1, i) == a3 )
        {
          Size = i + 1;
          break;
        }
      }
    }
    else
    {
      Size = 0;
    }
    for ( j = (unsigned __int8 *)sub_60CA40((_DWORD *)dword_162EE84 + 1, Size);
          j && j != a4;
          j = (unsigned __int8 *)sub_60CA40((_DWORD *)dword_162EE84 + 1, Size) )
    {
      if ( *((_DWORD *)j + 106) == a1 )
      {
        v6 = *a2;
        v7 = a2[1];
        v8 = a2[2];
        v9 = a2[3];
        v5 = -sub_5F84F0(j);
        v4 = unknown_libname_619(j);
        v6 -= v4;
        v7 += v5;
        v8 -= v4;
        v9 += v5;
        sub_5F91B0(j, &v6, 1);
      }
      ++Size;
    }
  }
}


//======================================================================
// sub_6303D0
// entry 006303d0  size 34  status ok
//======================================================================

void __cdecl sub_6303D0(int a1, int *a2)
{
  if ( dword_162EE84 )
    sub_630130(a1, a2, 0);
}


//======================================================================
// sub_630400
// entry 00630400  size 326  status ok
//======================================================================

int __cdecl sub_630400(int a1, int a2)
{
  _BYTE v3[8]; // [esp+4h] [ebp-30h] BYREF
  int v4; // [esp+Ch] [ebp-28h]
  int v5; // [esp+10h] [ebp-24h]
  int v6; // [esp+1Ch] [ebp-18h]
  int v7; // [esp+20h] [ebp-14h]
  _DWORD *v8; // [esp+24h] [ebp-10h]
  int v9; // [esp+30h] [ebp-4h]

  sub_6101F0((int)v3);
  v9 = 0;
  if ( dword_162EE84 && dword_162EE80 )
  {
    v6 = 3;
    v7 = 0;
    if ( sub_5E9E60() )
      v7 |= 2u;
    if ( sub_5E9E80() )
      v7 |= 1u;
    if ( sub_5E9EC0() )
      v7 |= 4u;
    v3[4] = 0;
    v8 = (_DWORD *)sub_5F4070(dword_162EE84, a1, a2, 0);
    if ( v8 )
    {
      v4 = a1 - unknown_libname_619(v8);
      v5 = a2 - sub_5F84F0(v8);
      if ( v4 != dword_762104 || v5 != dword_762100 )
      {
        dword_762104 = v4;
        dword_762100 = v5;
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
          dword_162EE84,
          v3);
      }
    }
  }
  v9 = -1;
  return CExpandoObject::~CExpandoObject(v3);
}


//======================================================================
// sub_630550
// entry 00630550  size 736  status ok
//======================================================================

int __cdecl sub_630550(int a1, int a2, int a3, int a4, char a5)
{
  UINT v5; // esi
  DWORD v6; // esi
  DWORD TickCount; // [esp+Ch] [ebp-38h]
  _BYTE v9[4]; // [esp+10h] [ebp-34h] BYREF
  char v10; // [esp+14h] [ebp-30h]
  int v11; // [esp+18h] [ebp-2Ch]
  int v12; // [esp+1Ch] [ebp-28h]
  int v13; // [esp+28h] [ebp-1Ch]
  int v14; // [esp+2Ch] [ebp-18h]
  _DWORD *v15; // [esp+30h] [ebp-14h]
  char v16; // [esp+37h] [ebp-Dh]
  int v17; // [esp+40h] [ebp-4h]

  sub_6101F0((int)v9);
  v17 = 0;
  v16 = 0;
  if ( a5 && !a4 && *((_BYTE *)dword_162EE84 + 76) )
  {
    TickCount = GetTickCount();
    if ( dword_162EE7C && TickCount > dword_162EE7C )
      dword_162EE7C = 0;
    if ( !dword_162EE7C )
    {
      v5 = TickCount - dword_162EE78;
      if ( v5 <= sub_5E9FC0() && abs(a2 - dword_162EE74) <= 5 && abs(a3 - dword_162EE70) <= 5 )
      {
        v16 = 1;
        v6 = GetTickCount();
        dword_162EE7C = v6 + 2 * sub_5E9FC0();
      }
    }
    dword_162EE78 = TickCount;
    dword_162EE74 = a2;
    dword_162EE70 = a3;
  }
  if ( a5 )
  {
    if ( sub_5E9E60() )
    {
      a4 = 1;
      byte_162EE6E = 1;
    }
    else
    {
      byte_162EE6E = 0;
    }
  }
  else
  {
    if ( byte_162EE6E )
      a4 = 1;
    byte_162EE6E = 0;
  }
  v13 = 2 - (a5 != 0);
  v14 = 8 * (a4 != 0) + 8;
  if ( sub_5E9E60() )
    v14 |= 2u;
  if ( sub_5E9E80() )
    v14 |= 1u;
  if ( sub_5E9EC0() )
    v14 |= 4u;
  v10 = 0;
  v15 = (_DWORD *)sub_5F4070(dword_162EE84, a2, a3, a1);
  if ( v15 )
  {
    v11 = a2 - unknown_libname_619(v15);
    v12 = a3 - sub_5F84F0(v15);
    if ( v16 )
      v14 |= 0x20u;
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
      dword_162EE84,
      v9);
    if ( v16 )
    {
      sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
      v13 = 2;
      v10 = 0;
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
        dword_162EE84,
        v9);
      sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
      v13 = 1;
      v14 = 48;
      v10 = 0;
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
        dword_162EE84,
        v9);
      sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
      v13 = 2;
      v10 = 0;
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
        dword_162EE84,
        v9);
    }
  }
  v17 = -1;
  return CExpandoObject::~CExpandoObject(v9);
}


//======================================================================
// sub_630830
// entry 00630830  size 276  status ok
//======================================================================

int __cdecl sub_630830(int a1, int a2, int a3, int a4)
{
  _BYTE v5[8]; // [esp+8h] [ebp-30h] BYREF
  int v6; // [esp+10h] [ebp-28h]
  int v7; // [esp+14h] [ebp-24h]
  int v8; // [esp+18h] [ebp-20h]
  int v9; // [esp+20h] [ebp-18h]
  int v10; // [esp+24h] [ebp-14h]
  _DWORD *v11; // [esp+28h] [ebp-10h]
  int v12; // [esp+34h] [ebp-4h]

  sub_6101F0((int)v5);
  v12 = 0;
  v9 = 24;
  v8 = a4;
  v10 = 0;
  if ( sub_5E9E60() )
    v10 |= 2u;
  if ( sub_5E9E80() )
    v10 |= 1u;
  if ( sub_5E9EC0() )
    v10 |= 4u;
  v5[4] = 0;
  v11 = (_DWORD *)sub_5F4070(dword_162EE84, a2, a3, a1);
  if ( v11 && v11[106] == a1 )
  {
    v6 = a2 - unknown_libname_619(v11);
    v7 = a3 - sub_5F84F0(v11);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
      dword_162EE84,
      v5);
  }
  v12 = -1;
  return CExpandoObject::~CExpandoObject(v5);
}


//======================================================================
// sub_630950
// entry 00630950  size 306  status ok
//======================================================================

int __cdecl sub_630950(int a1, char a2, char a3, char a4)
{
  _BYTE v5[8]; // [esp+4h] [ebp-30h] BYREF
  int v6; // [esp+Ch] [ebp-28h]
  int v7; // [esp+10h] [ebp-24h]
  char v8; // [esp+18h] [ebp-1Ch]
  int v9; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  int v12; // [esp+30h] [ebp-4h]

  sub_6101F0((int)v5);
  v12 = 0;
  if ( (unsigned int)a2 > 0x1A )
    v10 = 0;
  else
    v10 = 2;
  if ( sub_5E9E60() )
    v10 |= 2u;
  if ( sub_5E9E80() )
    v10 |= 1u;
  if ( sub_5E9EC0() )
    v10 |= 4u;
  v5[4] = 0;
  v6 = 0;
  v7 = 0;
  v8 = unknown_libname_848(a2);
  if ( a3 )
  {
    v9 = 21;
  }
  else if ( a4 )
  {
    v9 = 22;
  }
  else
  {
    v9 = 4;
  }
  if ( sub_5F4070(dword_162EE84, v6, v7, a1) )
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
      dword_162EE84,
      v5);
  v12 = -1;
  return CExpandoObject::~CExpandoObject(v5);
}


//======================================================================
// sub_630A90
// entry 00630a90  size 427  status ok
//======================================================================

int __cdecl sub_630A90(int a1, char a2, char a3, char a4)
{
  _BYTE v5[8]; // [esp+8h] [ebp-30h] BYREF
  int v6; // [esp+10h] [ebp-28h]
  int v7; // [esp+14h] [ebp-24h]
  char v8; // [esp+1Ch] [ebp-1Ch]
  int v9; // [esp+20h] [ebp-18h]
  int v10; // [esp+24h] [ebp-14h]
  int v12; // [esp+34h] [ebp-4h]
  char v13; // [esp+44h] [ebp+Ch]

  sub_6101F0((int)v5);
  v12 = 0;
  if ( (unsigned int)a2 > 0x1A )
    v10 = 0;
  else
    v10 = 2;
  if ( sub_5E9E60() )
    v10 |= 2u;
  if ( sub_5E9E80() )
    v10 |= 1u;
  if ( sub_5E9EC0() )
    v10 |= 4u;
  v5[4] = 0;
  v6 = 0;
  v7 = 0;
  v10 |= 0x40u;
  switch ( a2 )
  {
    case 8:
      v13 = 22;
      break;
    case 33:
      v13 = 7;
      break;
    case 34:
      v13 = 8;
      break;
    case 35:
      v13 = 6;
      break;
    case 36:
      v13 = 5;
      break;
    case 37:
      v13 = 3;
      break;
    case 38:
      v13 = 1;
      break;
    case 39:
      v13 = 4;
      break;
    case 40:
      v13 = 2;
      break;
    case 46:
      v13 = 23;
      break;
    default:
      v10 &= ~0x40u;
      v13 = 0;
      break;
  }
  if ( v13 )
  {
    v8 = v13;
    if ( a3 )
    {
      v9 = 21;
    }
    else if ( a4 )
    {
      v9 = 22;
    }
    else
    {
      v9 = 4;
    }
    if ( sub_5F4070(dword_162EE84, v6, v7, a1) )
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 12))(
        dword_162EE84,
        v5);
  }
  v12 = -1;
  return CExpandoObject::~CExpandoObject(v5);
}


//======================================================================
// sub_630C90
// entry 00630c90  size 69  status ok
//======================================================================

bool sub_630C90()
{
  if ( !dword_162EE84 || !dword_162EE80 )
    return 0;
  return Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) != (struct Concurrency::details::_TaskCollectionBase *)1001
      && Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) != (struct Concurrency::details::_TaskCollectionBase *)1100;
}


//======================================================================
// sub_630CE0
// entry 00630ce0  size 18  status ok
//======================================================================

int sub_630CE0()
{
  return sub_630F40("SID_SHELL_CDEJECTEDMESSAGE");
}


//======================================================================
// sub_630D00
// entry 00630d00  size 18  status ok
//======================================================================

int sub_630D00()
{
  return sub_5F45D0(1);
}


//======================================================================
// sub_630D20
// entry 00630d20  size 18  status ok
//======================================================================

int sub_630D20()
{
  return sub_630F40("SID_SHELL_CDEJECTED");
}


//======================================================================
// sub_630F40
// entry 00630f40  size 60  status ok
//======================================================================

int __cdecl sub_630F40(int a1)
{
  if ( !dword_162EE84 )
    sub_5E9F20("shell", "..\\casinoShell\\util.cpp", 674);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 20))(
           dword_162EE84,
           a1);
}


//======================================================================
// sub_630F80
// entry 00630f80  size 120  status ok
//======================================================================

int __cdecl sub_630F80(const char *a1, int a2)
{
  char Buffer[284]; // [esp+0h] [ebp-120h] BYREF

  if ( !dword_162EE84 )
    sub_5E9F20("shell", "..\\casinoShell\\util.cpp", 680);
  sprintf(Buffer, "%s%i", a1, a2);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, char *))(*(_DWORD *)dword_162EE84 + 20))(
           dword_162EE84,
           Buffer);
}


//======================================================================
// sub_6311E0
// entry 006311e0  size 258  status ok
//======================================================================

char *__cdecl sub_6311E0(int a1, char *Buffer)
{
  if ( a1 <= 999999999 )
  {
    if ( a1 <= 999999 )
    {
      if ( a1 <= 999 )
        sprintf(Buffer, off_6BB590, a1);
      else
        sprintf(Buffer, "$%d,%.3d", a1 / 1000, a1 % 1000);
    }
    else
    {
      sprintf(Buffer, "$%d,%.3d,%.3d", a1 / 1000000, a1 % 1000000 / 1000, a1 % 1000);
    }
  }
  else
  {
    sprintf(Buffer, "$%d,%.3d,%.3d,%.3d", a1 / 1000000000, a1 % 1000000000 / 1000000, a1 % 1000000 / 1000, a1 % 1000);
  }
  return Buffer;
}


//======================================================================
// sub_631420
// entry 00631420  size 21  status ok
//======================================================================

bool sub_631420()
{
  return unknown_libname_841(dword_162EE84) != 0;
}


//======================================================================
// sub_6316E0
// entry 006316e0  size 284  status ok
//======================================================================

_DWORD *__thiscall sub_6316E0(_DWORD *this, int a2, int a3)
{
  int i; // [esp+8h] [ebp-10h]

  CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(a2, a3);
  *this = &Shell::`vftable';
  sub_667B90(this + 20);
  CLoadDirectDraw::CLoadDirectDraw((CLoadDirectDraw *)(this + 23));
  *(this + 22) = 0;
  *((_BYTE *)this + 37) = 0;
  *((_BYTE *)this + 38) = 1;
  for ( i = 0; i < 10; ++i )
    *(this + i + 25) = -1;
  *(this + 35) = 0;
  *(this + 36) = 0;
  return this;
}


//======================================================================
// sub_631800
// entry 00631800  size 350  status ok
//======================================================================

void __thiscall sub_631800(void **this)
{
  *this = &Shell::`vftable';
  sub_635B10(-1);
  if ( *(this + 22) )
    operator delete(*(this + 22));
  sub_6048C0();
  sub_6049C0();
  sub_604AF0();
  dword_162EE84 = 0;
  if ( *(this + 35) )
  {
    operator delete(*(this + 35));
    *(this + 35) = 0;
  }
  if ( *(this + 36) )
  {
    operator delete(*(this + 36));
    *(this + 36) = 0;
  }
  sub_6665E0(this + 23);
  CExpandoObject::~CExpandoObject(this + 20);
  sub_5F2EB0((CNoTrackObject *)this);
}


//======================================================================
// sub_631960
// entry 00631960  size 271  status ok
//======================================================================

char __thiscall sub_631960(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-20h]
  int v3; // [esp+4h] [ebp-1Ch]
  int (__thiscall ***v5)(_DWORD, int); // [esp+10h] [ebp-10h]
  int (__thiscall ***v6)(_DWORD, int); // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  int j; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, int))(*this + 144))(this, -1);
  if ( *(this + 22) )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      if ( *(_DWORD *)(*(this + 22) + 4 * i) )
      {
        v6 = *(int (__thiscall ****)(_DWORD, int))(*(this + 22) + 4 * i);
        v3 = (**v6)(v6, 1);
      }
      else
      {
        v3 = 0;
      }
      *(_DWORD *)(*(this + 22) + 4 * i) = 0;
    }
  }
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 228))(
              dword_162EE84,
              v2,
              v3);
        ++j )
  {
    v5 = (int (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
                                              dword_162EE84,
                                              j);
    if ( v5 )
      v2 = (**v5)(v5, 1);
    else
      v2 = 0;
  }
  return 1;
}


//======================================================================
// sub_631A70
// entry 00631a70  size 16  status ok
//======================================================================

char sub_631A70()
{
  return byte_795FA0;
}


//======================================================================
// sub_631A80
// entry 00631a80  size 431  status ok
//======================================================================

char *__thiscall sub_631A80(void *this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax

  v1 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 272))(this);
  strcpy(byte_795530, v1);
  v2 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 276))(this);
  strcpy(byte_795634, v2);
  v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 280))(this);
  strcpy(byte_795738, v3);
  v4 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 284))(this);
  strcpy(byte_79583C, v4);
  v5 = (const char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 300))(dword_162EE84);
  strcpy(byte_795940, v5);
  v6 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 304))(this);
  strcpy(byte_795A44, v6);
  v7 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 320))(this);
  strcpy(byte_795B48, v7);
  v8 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 308))(this);
  strcpy(byte_795D50, v8);
  v9 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 312))(this);
  strcpy(byte_795E54, v9);
  v10 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 316))(this);
  strcpy(byte_795C4C, v10);
  v11 = (const char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 328))(dword_162EE84);
  strcpy(byte_795F6D, v11);
  strcat(byte_795F6D, "\\");
  v12 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 320))(this);
  strcpy(byte_795B48, v12);
  v13 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 332))(this);
  return strcpy(byte_795F58, v13);
}


//======================================================================
// sub_631C30
// entry 00631c30  size 781  status ok
//======================================================================

int __thiscall sub_631C30(_DWORD *this)
{
  int v1; // eax
  const char *v2; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-24h]
  int i; // [esp+18h] [ebp-10h]

  sub_5F2F70(this);
  if ( !*(this + 22) )
  {
    v1 = (*(int (__thiscall **)(_DWORD *))(*this + 268))(this);
    *(this + 22) = operator new(4 * v1);
  }
  byte_795FBB = 0;
  byte_795FBC = 0;
  byte_795FBD = byte_795F94;
  (*(void (__thiscall **)(_DWORD, const char *, const char *, char *, int))(**(_DWORD **)(dword_7960D8 + 20) + 16))(
    *(_DWORD *)(dword_7960D8 + 20),
    "PlayURL",
    &Source,
    byte_7953C8,
    100);
  if ( !strlen(byte_7953C8) )
  {
    v2 = (const char *)(*(int (__thiscall **)(_DWORD *))(*this + 348))(this);
    strcpy(byte_7953C8, v2);
  }
  byte_7960C5 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"SkipMovie", 0) == 0;
  byte_7960C4 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"InternetOrCDRoom", 1) != 0;
  byte_7960C6 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"SpecialDebugMode", 0) != 0;
  byte_7960C7 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"ShowAllHands", 0) != 0;
  byte_7960C8 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"ForceAllHumans", 0) != 0;
  byte_7960C9 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"ForceAllAIs", 0) != 0;
  byte_7960CA = sub_607960(*(void **)(dword_7960D8 + 20), (int)"NoThinkTime", 0) != 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    *(_DWORD *)(*(this + 22) + 4 * i) = (*(int (__thiscall **)(_DWORD *))(*this + 796))(this);
    sub_63A3E0(i, 0);
  }
  sub_666650(this + 23);
  sub_636FE0(this);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 220))(this) )
  {
    sub_634220(this);
    sub_634AC0(this);
  }
  if ( operator new(0x1Cu) )
    v5 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=();
  else
    v5 = 0;
  *(_DWORD *)(dword_7960D8 + 8) = v5;
  if ( byte_7960C5
    && (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 180))(dword_162EE84) )
  {
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 52))(this, 1001);
  }
  v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 52))(this, v4);
}


//======================================================================
// sub_631F40
// entry 00631f40  size 85  status ok
//======================================================================

int __fastcall sub_631F40(int a1, int a2, int a3)
{
  if ( *(_DWORD *)(a3 + 24) == 22 )
  {
    a2 = *(_DWORD *)(a3 + 28) & 0x42;
    if ( a2 )
    {
      if ( *(_BYTE *)(a3 + 20) == 119 )
      {
        byte_795FBF = byte_795FBF == 0;
        sub_6397A0(a1);
      }
    }
  }
  return sub_5F37F0(a1, a2, a3);
}


//======================================================================
// sub_631FB0
// entry 00631fb0  size 33  status ok
//======================================================================

int __thiscall sub_631FB0(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 168))(this, a2);
}


//======================================================================
// sub_631FE0
// entry 00631fe0  size 391  status ok
//======================================================================

char __thiscall sub_631FE0(void *this)
{
  int v1; // eax
  _DWORD *i; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int j; // [esp+10h] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7960D8 + 28) + 76))(
          *(_DWORD *)(dword_7960D8 + 28),
          3504000) )
    sub_5E9F20("pApp->poStringManager->LoadStrings(TEX_GENERIC_STRINGS)", "..\\casinoShell\\shell.cpp", 478);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7960D8 + 28) + 76))(
          *(_DWORD *)(dword_7960D8 + 28),
          3504001) )
    sub_5E9F20("pApp->poStringManager->LoadStrings(TEX_CARDSHELL_STRINGS)", "..\\casinoShell\\shell.cpp", 479);
  for ( i = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 164))(this); i && *i; ++i )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7960D8 + 28) + 76))(
            *(_DWORD *)(dword_7960D8 + 28),
            *i) )
      sub_5E9F20("pApp->poStringManager->LoadStrings(*piStringResources)", "..\\casinoShell\\shell.cpp", 484);
  }
  for ( j = 0; j < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this); ++j )
  {
    v1 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, j);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 16))(v1, v1);
    if ( v5 != -1
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7960D8 + 28) + 76))(
            *(_DWORD *)(dword_7960D8 + 28),
            v5) )
    {
      sub_5E9F20("pApp->poStringManager->LoadStrings(iStringResource)", "..\\casinoShell\\shell.cpp", 496);
    }
  }
  return 1;
}


//======================================================================
// sub_632170
// entry 00632170  size 58  status ok
//======================================================================

int __thiscall sub_632170(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7960D8 + 28) + 96))(*(_DWORD *)(dword_7960D8 + 28), a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 172))(this, v2);
}


//======================================================================
// sub_6321B0
// entry 006321b0  size 890  status ok
//======================================================================

const char *__stdcall sub_6321B0(char *Str1)
{
  const char *v2; // eax
  const char *v3; // eax
  int v5; // [esp+4h] [ebp-28h]
  int v6; // [esp+8h] [ebp-24h]
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+10h] [ebp-1Ch]
  int v9; // [esp+1Ch] [ebp-10h]
  char *Destination; // [esp+20h] [ebp-Ch]
  char *Destinationa; // [esp+20h] [ebp-Ch]
  char *v12; // [esp+24h] [ebp-8h]
  char *v13; // [esp+24h] [ebp-8h]
  char v14; // [esp+2Bh] [ebp-1h]

  v14 = 0;
  if ( Str1 && !strcmp(Str1, "~") )
    return &Source;
  if ( !Str1 || !strchr(Str1, 37) && !strchr(Str1, 94) && !strchr(Str1, 124) )
    return Str1;
  ++dword_1630688;
  dword_1630688 %= 3;
  v9 = dword_1630688;
  v12 = Str1;
  Destination = (char *)&unk_162EE88 + 2048 * dword_1630688;
  while ( *v12 && Destination - ((char *)&unk_162EE88 + 2048 * v9) < 2047 )
  {
    switch ( *v12 )
    {
      case '%':
        v13 = v12 + 1;
        switch ( *v13 )
        {
          case 'P':
            strcpy(Destination, byte_795634);
            v14 = 1;
            break;
          case 'g':
            v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 252))(dword_162EE84);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 120))(v8)
              && (v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 252))(dword_162EE84),
                  *(_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 120))(v7)) )
            {
              v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 252))(dword_162EE84);
              v3 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 120))(v5);
              strcpy(Destination, v3);
            }
            else if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84) )
            {
              v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
              v2 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
              strcpy(Destination, v2);
            }
            v14 = 1;
            break;
          case 'k':
            strcpy(Destination, &byte_6DA3D8);
            v14 = 1;
            break;
          case 'p':
            strcpy(Destination, byte_795530);
            v14 = 1;
            break;
          case 'r':
            strcpy(Destination, &byte_6DA3D4);
            v14 = 1;
            break;
          case 't':
            strcpy(Destination, &byte_6DA3D0);
            v14 = 1;
            break;
          default:
            *Destination = 37;
            Destinationa = Destination + 1;
            *Destinationa = *v13;
            Destination = Destinationa + 1;
            *Destination = 0;
            break;
        }
        while ( *Destination )
          ++Destination;
        v12 = v13 + 1;
        break;
      case '^':
        *Destination++ = 32;
        ++v12;
        v14 = 1;
        break;
      case '|':
        *Destination++ = 10;
        ++v12;
        v14 = 1;
        break;
      default:
        *Destination++ = *v12++;
        break;
    }
  }
  *Destination = 0;
  if ( v14 )
    return (char *)&unk_162EE88 + 2048 * v9;
  else
    return Str1;
}


//======================================================================
// sub_632570
// entry 00632570  size 178  status ok
//======================================================================

const char *__stdcall sub_632570(int a1)
{
  const char *result; // eax
  int v2; // [esp+0h] [ebp-Ch]

  switch ( a1 )
  {
    case 1:
      if ( dword_795F90 == 3 )
        v2 = sub_630F40((int)"SID_SHELL_APPLERETURN");
      else
        v2 = sub_630F40((int)"SID_SHELL_ALTENTER");
      result = (const char *)v2;
      break;
    case 8:
      result = (const char *)sub_630F40((int)"SID_SHELL_BACKSPACE");
      break;
    case 13:
      result = (const char *)sub_630F40((int)"SID_SHELL_ENTER");
      break;
    case 27:
      result = (const char *)sub_630F40((int)"SID_SHELL_ESC");
      break;
    case 32:
      result = (const char *)sub_630F40((int)"SID_SHELL_SPACEBAR");
      break;
    default:
      result = &Source;
      break;
  }
  return result;
}


//======================================================================
// sub_632660
// entry 00632660  size 64  status ok
//======================================================================

const char *__thiscall sub_632660(void *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) )
    return (const char *)sub_630F40((int)"SID_SHELL_WINDOW_TITLE_FORMAT");
  else
    return "%s%s";
}


//======================================================================
// sub_6326E0
// entry 006326e0  size 95  status ok
//======================================================================

int __thiscall sub_6326E0(Concurrency::details::ContextBase *this, char a2)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int result; // eax
  int v4; // eax
  int v5; // ecx

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  result = sub_6352F0(ExecutingCollection);
  if ( result )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 232))(this);
    if ( result )
    {
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 232))(this);
      LOBYTE(v5) = a2;
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 140))(v4, v5);
    }
  }
  return result;
}


//======================================================================
// sub_632740
// entry 00632740  size 43  status ok
//======================================================================

int __stdcall sub_632740(unsigned int a1)
{
  if ( a1 <= 0x1870C )
    return dword_76FDA0[a1];
  else
    return -1;
}


//======================================================================
// sub_632770
// entry 00632770  size 64  status ok
//======================================================================

int __stdcall sub_632770(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 33; ++i )
  {
    if ( dword_76FDA0[i] == a1 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_6327B0
// entry 006327b0  size 95  status ok
//======================================================================

int __thiscall sub_6327B0(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  int result; // eax

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  switch ( (unsigned int)ExecutingCollection )
  {
    case 0x3E8u:
      result = 0;
      break;
    case 0x3E9u:
      result = 0;
      break;
    case 0x3EAu:
      result = 0;
      break;
    case 0x3EBu:
      result = 0;
      break;
    case 0x44Cu:
      result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_632890
// entry 00632890  size 386  status ok
//======================================================================

int __thiscall sub_632890(_BYTE *this, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-44h]
  int v4; // [esp+8h] [ebp-40h]
  int v5; // [esp+Ch] [ebp-3Ch]
  int v6; // [esp+10h] [ebp-38h]

  switch ( a2 )
  {
    case 1000:
      if ( operator new(0x84u) )
        v6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=();
      else
        v6 = 0;
      result = v6;
      break;
    case 1001:
      if ( operator new(0x64u) )
        v5 = sub_66B230();
      else
        v5 = 0;
      result = v5;
      break;
    case 1002:
      if ( operator new(0x5Cu) )
        v4 = sub_66ACE0();
      else
        v4 = 0;
      result = v4;
      break;
    case 1003:
      if ( operator new(0x88u) )
        v3 = sub_6695E0();
      else
        v3 = 0;
      result = v3;
      break;
    case 1100:
      *(this + 36) = 1;
      result = 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_632AA0
// entry 00632aa0  size 16  status ok
//======================================================================

int sub_632AA0()
{
  return dword_162EE80;
}


//======================================================================
// sub_632AB0
// entry 00632ab0  size 112  status ok
//======================================================================

int __thiscall sub_632AB0(void *this, int a2)
{
  int v2; // eax

  if ( a2 < 0 || a2 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 696);
    return 4;
  }
  else
  {
    v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 36))(v2, v2);
  }
}


//======================================================================
// sub_632B20
// entry 00632b20  size 112  status ok
//======================================================================

int __thiscall sub_632B20(void *this, int a2)
{
  int v2; // eax

  if ( a2 < 0 || a2 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 705);
    return 4;
  }
  else
  {
    v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 40))(v2, v2);
  }
}


//======================================================================
// sub_632B90
// entry 00632b90  size 112  status ok
//======================================================================

int __thiscall sub_632B90(void *this, int a2)
{
  int v2; // eax

  if ( a2 < 0 || a2 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 714);
    return 1;
  }
  else
  {
    v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 48))(v2, v2);
  }
}


//======================================================================
// sub_632C00
// entry 00632c00  size 158  status ok
//======================================================================

int __thiscall sub_632C00(void *this)
{
  int i; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this);
        v8 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    v5 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v8);
    if ( v7 <= (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5) )
    {
      v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v8);
      v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 40))(v2, v2);
    }
    else
    {
      v4 = v7;
    }
    v7 = v4;
    ++v8;
  }
  return v7;
}


//======================================================================
// sub_632CC0
// entry 00632cc0  size 116  status ok
//======================================================================

int __thiscall sub_632CC0(void *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this);
        v5 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this) )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 356))(this, v5) == a2 )
      return v5;
    ++v5;
  }
  sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 741);
  return -1;
}


//======================================================================
// sub_632D40
// entry 00632d40  size 233  status ok
//======================================================================

int *__thiscall sub_632D40(void *this, int *a2, int a3)
{
  int *v3; // ecx
  int *v5; // eax
  int v7; // [esp+1Ch] [ebp+Ch]

  if ( a3 < 0 || a3 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 508))(this) )
    goto LABEL_7;
  if ( a3 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this) )
  {
    v3 = &dword_762298[3 * a3];
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    return a2;
  }
  v7 = a3 - (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this);
  if ( v7 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 504))(this) )
  {
LABEL_7:
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    return a2;
  }
  else
  {
    v5 = &dword_762518[3 * v7];
    *a2 = *v5;
    a2[1] = v5[1];
    a2[2] = v5[2];
    return a2;
  }
}


//======================================================================
// sub_632E30
// entry 00632e30  size 227  status ok
//======================================================================

int __thiscall sub_632E30(void *this, int a2, int a3, int a4)
{
  int i; // eax
  int v7; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  v7 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this);
        v7 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this) )
  {
    if ( dword_762298[3 * v7] == a2 && dword_76229C[3 * v7] == a3 && dword_7622A0[3 * v7] == a4 )
      return v7;
    ++v7;
  }
  for ( j = 0; j < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 504))(this); ++j )
  {
    if ( dword_762518[3 * j] == a2 && dword_76251C[3 * j] == a3 && dword_762520[3 * j] == a4 )
      return j + (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this);
  }
  return 0;
}


//======================================================================
// sub_632F20
// entry 00632f20  size 16  status ok
//======================================================================

int sub_632F20()
{
  return dword_762514;
}


//======================================================================
// sub_632F30
// entry 00632f30  size 16  status ok
//======================================================================

int sub_632F30()
{
  return dword_7626D4;
}


//======================================================================
// sub_632F40
// entry 00632f40  size 49  status ok
//======================================================================

int __thiscall sub_632F40(void *this)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 500))(this);
  return v1 + (*(int (__thiscall **)(void *))(*(_DWORD *)this + 504))(this);
}


//======================================================================
// sub_632F80
// entry 00632f80  size 101  status ok
//======================================================================

int __thiscall sub_632F80(void *this)
{
  int result; // eax
  char **i; // [esp+4h] [ebp-4h]

  sub_604910(".\\resource");
  sub_604910(".\\");
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 512))(this);
  for ( i = (char **)result; i; ++i )
  {
    result = **i;
    if ( !**i )
      break;
    sub_604910(*i);
    result = (int)(i + 1);
  }
  return result;
}


//======================================================================
// sub_633000
// entry 00633000  size 163  status ok
//======================================================================

void __thiscall sub_633000(void *this)
{
  const char *v1; // eax
  const char *v2; // [esp-8h] [ebp-64h]
  const char *v3; // [esp-4h] [ebp-60h]
  char Buffer[64]; // [esp+4h] [ebp-58h] BYREF
  _BYTE v6[16]; // [esp+44h] [ebp-18h] BYREF
  int i; // [esp+58h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, const char *, const char *, _BYTE *, int))(**(_DWORD **)(dword_7960D8 + 20) + 16))(
    *(_DWORD *)(dword_7960D8 + 20),
    "LanguageCode",
    "en",
    v6,
    16);
  for ( i = 0; i < 3; ++i )
  {
    v1 = (const char *)(*(int (__thiscall **)(void *, _BYTE *, _UNKNOWN **))(*(_DWORD *)this + 536))(
                         this,
                         v6,
                         &off_7626D8 + 4 * i);
    sprintf(Buffer, "%s%s.%s", v1, v2, v3);
    sub_604A20(Buffer);
  }
}


//======================================================================
// sub_6330B0
// entry 006330b0  size 101  status ok
//======================================================================

int __thiscall sub_6330B0(void *this)
{
  int result; // eax
  char **i; // [esp+4h] [ebp-4h]

  sub_604810(".\\resource");
  sub_604810(".\\");
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 516))(this);
  for ( i = (char **)result; i; ++i )
  {
    result = **i;
    if ( !**i )
      break;
    sub_604810(*i);
    result = (int)(i + 1);
  }
  return result;
}


//======================================================================
// sub_633120
// entry 00633120  size 518  status ok
//======================================================================

void __thiscall sub_633120(void *this)
{
  const char *v1; // eax
  char *v2; // eax
  int v3; // eax
  int v4; // eax
  char Destination[268]; // [esp+8h] [ebp-128h] BYREF
  char Buffer[16]; // [esp+114h] [ebp-1Ch] BYREF
  char **i; // [esp+128h] [ebp-8h]
  int j; // [esp+12Ch] [ebp-4h]

  if ( byte_795F6C )
  {
    Destination[0] = byte_795F6C;
    Destination[1] = 0;
    strcat(Destination, ":\\Encore");
    strcat(Destination, "\\");
    v1 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 288))(this);
    strcat(Destination, v1);
    strcat(Destination, "\\");
    sub_604810(Destination);
  }
  for ( i = (char **)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 520))(this); i && **i; ++i )
    sub_604A20(*i);
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 292))(this) )
  {
    v2 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 292))(this);
    sub_604A20(v2);
  }
  for ( j = 0; ; ++j )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this);
    if ( j >= v3 )
      break;
    v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, j);
    for ( i = (char **)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, v4); i && **i; ++i )
      sub_604A20(*i);
  }
  for ( j = 1; j <= 10; ++j )
  {
    sprintf(Buffer, "patch%d.prf", j);
    sub_604A20(Buffer);
  }
}


//======================================================================
// sub_633330
// entry 00633330  size 349  status ok
//======================================================================

int __thiscall sub_633330(void *this)
{
  int result; // eax
  int v2; // eax
  const char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *Str; // [esp+4h] [ebp-114h]
  char *Stra; // [esp+4h] [ebp-114h]
  char Destination[264]; // [esp+8h] [ebp-110h] BYREF
  int v10; // [esp+114h] [ebp-4h]

  v10 = 0;
  for ( result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this);
        v10 < result;
        result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this) )
  {
    v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 356))(this, v10);
    v3 = (const char *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 952))(this, v2);
    strcpy(Destination, v3);
    Str = strrchr(Destination, 32);
    if ( Str )
      Stra = Str + 1;
    else
      Stra = Destination;
    strcat(Stra, ".prf");
    sub_604A20(Stra);
    v4 = strrchr(Stra, 46);
    strcpy(v4, ".zip");
    sub_604A20(Stra);
    v5 = strrchr(Stra, 46);
    strcpy(v5, ".pod");
    sub_604A20(Stra);
    ++v10;
  }
  return result;
}


//======================================================================
// sub_633490
// entry 00633490  size 745  status ok
//======================================================================

char __thiscall sub_633490(void *this, int a2)
{
  int i; // eax
  int v3; // eax
  int *v4; // ecx
  int v6; // [esp+0h] [ebp-5CCh]
  int v7; // [esp+4h] [ebp-5C8h]
  int v8; // [esp+8h] [ebp-5C4h]
  int v9; // [esp+Ch] [ebp-5C0h]
  char Buffer[1024]; // [esp+14h] [ebp-5B8h] BYREF
  const char *v12; // [esp+414h] [ebp-1B8h]
  int k; // [esp+418h] [ebp-1B4h]
  char Destination[52]; // [esp+41Ch] [ebp-1B0h] BYREF
  int v15; // [esp+450h] [ebp-17Ch]
  int v16; // [esp+454h] [ebp-178h]
  int v17; // [esp+458h] [ebp-174h]
  int v18; // [esp+45Ch] [ebp-170h]
  int v19; // [esp+460h] [ebp-16Ch]
  int v20; // [esp+464h] [ebp-168h]
  FILE *Stream; // [esp+5BCh] [ebp-10h]
  int v22; // [esp+5C0h] [ebp-Ch]
  int v23; // [esp+5C4h] [ebp-8h]
  int j; // [esp+5C8h] [ebp-4h]

  v23 = a2 != -1 ? a2 : 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this);
        v23 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 228))(this) )
  {
    v9 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v23);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 172))(v9) )
    {
      v8 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v23);
      v12 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 204))(v8);
      memset(Buffer, 0, sizeof(Buffer));
      sprintf(Buffer, "data\\%s.hs", v12);
      Stream = sub_5EA9C0(Buffer, "wb");
      if ( !Stream )
      {
        LOBYTE(i) = sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1048);
        return i;
      }
      for ( j = 0; ; ++j )
      {
        v7 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v23);
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 192))(v7);
        if ( j >= v3 )
          break;
        for ( k = 0; k < 10; ++k )
        {
          v6 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v23);
          v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 196))(v6, j, k);
          v22 = sub_62FBA0(0x2Eu);
          strcpy(Destination, &aKatzman[68 * v22]);
          v16 = (dword_76273C[17 * v22] == -1) + 1;
          v17 = dword_76273C[17 * v22];
          v4 = (int *)((char *)&unk_762740 + 68 * v22);
          v18 = *v4;
          v19 = v4[1];
          v20 = v4[2];
          fwrite(Destination, 1u, 0x98u, Stream);
        }
      }
      LOBYTE(i) = fclose(Stream);
      if ( a2 >= 0 )
        break;
    }
    ++v23;
  }
  if ( a2 == -1 )
    LOBYTE(i) = sub_62FF10("High Score files generated!", "Message", 0);
  return i;
}


//======================================================================
// sub_633780
// entry 00633780  size 1812  status ok
//======================================================================

char __thiscall sub_633780(Concurrency::details::ContextBase *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v2; // eax
  struct Concurrency::details::_TaskCollectionBase *v3; // eax
  struct Concurrency::details::_TaskCollectionBase *v4; // eax
  struct Concurrency::details::_TaskCollectionBase *v5; // eax
  struct Concurrency::details::_TaskCollectionBase *v6; // eax
  const char *v7; // eax
  DWORD v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  LONG *v11; // eax
  int v13; // [esp+8h] [ebp-B70h]
  int v14; // [esp+Ch] [ebp-B6Ch]
  int v15; // [esp+10h] [ebp-B68h]
  int v16; // [esp+14h] [ebp-B64h]
  int v17; // [esp+18h] [ebp-B60h]
  int v18; // [esp+1Ch] [ebp-B5Ch]
  void *v20; // [esp+3Ch] [ebp-B3Ch]
  _BYTE v21[15]; // [esp+44h] [ebp-B34h] BYREF
  char v22; // [esp+53h] [ebp-B25h]
  const char *v23; // [esp+54h] [ebp-B24h]
  int k; // [esp+58h] [ebp-B20h]
  _QWORD Src[190]; // [esp+5Ch] [ebp-B1Ch] BYREF
  char Buffer[256]; // [esp+64Ch] [ebp-52Ch] BYREF
  void (__thiscall ***v27)(_DWORD, int); // [esp+74Ch] [ebp-42Ch]
  int v28; // [esp+750h] [ebp-428h]
  FILE *Stream; // [esp+754h] [ebp-424h]
  int j; // [esp+758h] [ebp-420h]
  int i; // [esp+75Ch] [ebp-41Ch]
  int v32; // [esp+760h] [ebp-418h]
  char Destination[1028]; // [esp+764h] [ebp-414h] BYREF
  int v34; // [esp+B74h] [ebp-4h]

  v22 = 0;
  v27 = 0;
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  v18 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
          this,
          ExecutingCollection);
  LOBYTE(v2) = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 172))(v18);
  if ( (_BYTE)v2 )
  {
    LOBYTE(v2) = sub_633EA0(Src, 0xAu);
    if ( (_BYTE)v2 )
    {
      v3 = Concurrency::details::ContextBase::GetExecutingCollection(this);
      v17 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
              this,
              v3);
      v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 200))(v17);
      v4 = Concurrency::details::ContextBase::GetExecutingCollection(this);
      v16 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
              this,
              v4);
      v23 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 204))(v16);
      sprintf(Buffer, "data\\%s.hs", v23);
      memset(Destination, 0, 1024);
      strcpy(Destination, Buffer);
      for ( i = 0; ; ++i )
      {
        v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 268))(this);
        if ( i >= v2 )
          break;
        v5 = Concurrency::details::ContextBase::GetExecutingCollection(this);
        v15 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
                this,
                v5);
        v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v15 + 208))(v15, i);
        v32 = v2;
        if ( v2 < 0 )
          break;
        for ( j = 0; j < 10; ++j )
        {
          v6 = Concurrency::details::ContextBase::GetExecutingCollection(this);
          v14 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
                  this,
                  v6);
          if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 212))(
                 v14,
                 v32,
                 HIDWORD(Src[19 * j + 6])) )
          {
            for ( k = 9; k > j; --k )
              memcpy(&Src[19 * k], &Src[19 * k - 19], 0x98u);
            HIDWORD(Src[19 * j + 6]) = v32;
            v7 = (const char *)sub_639070(i);
            strcpy((char *)&Src[19 * j], v7);
            HIDWORD(Src[19 * j + 7]) = -1;
            if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i))->rcSource.left == 2 )
            {
              v8 = sub_4842B0(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
              v9 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *, DWORD))(*(_DWORD *)dword_162EE84 + 492))(
                               dword_162EE84,
                               v21,
                               v8);
              v10 = &Src[19 * j + 8];
              *v10 = *v9;
              v10[1] = v9[1];
              v10[2] = v9[2];
              LODWORD(Src[19 * j + 7]) = 2;
            }
            else
            {
              LODWORD(Src[19 * j + 7]) = 3;
              if ( !v27 )
              {
                v20 = operator new(0xC8u);
                v34 = 0;
                if ( v20 )
                  v13 = sub_6640C0(v20);
                else
                  v13 = 0;
                v34 = -1;
                v27 = (void (__thiscall ***)(_DWORD, int))v13;
              }
              v11 = sub_57A470(*(CImageDisplay **)(*((_DWORD *)this + 22) + 4 * i));
              if ( (unsigned __int8)sub_664300(v11) )
                memcpy((char *)&Src[19 * j + 9] + 4, v27 + 4, 0x4Cu);
              else
                sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1132);
              if ( v27 )
                (**v27)(v27, 1);
              v27 = 0;
            }
            v22 = 1;
            *((_DWORD *)this + i + 25) = j;
            for ( k = i - 1; k >= 0; --k )
            {
              if ( *((int *)this + k + 25) >= 0
                && *((_DWORD *)this + k + 25) >= j
                && (int)++*((_DWORD *)this + k + 25) >= 10 )
              {
                *((_DWORD *)this + k + 25) = -1;
              }
            }
            break;
          }
        }
        if ( j == 10 )
          *((_DWORD *)this + i + 25) = -1;
      }
      if ( v22 )
      {
        Stream = sub_5EA9C0(Destination, "rb+");
        if ( Stream )
        {
          if ( v28 > 0 )
            fseek(Stream, 1520 * v28, 0);
          fwrite(Src, 0x98u, 0xAu, Stream);
          LOBYTE(v2) = fclose(Stream);
          if ( *(_DWORD *)(dword_162EE80 + 76) )
            LOBYTE(v2) = sub_66F610(1);
        }
        else
        {
          LOBYTE(v2) = sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1165);
        }
      }
    }
  }
  return v2;
}


//======================================================================
// sub_633EA0
// entry 00633ea0  size 481  status ok
//======================================================================

char __thiscall sub_633EA0(Concurrency::details::ContextBase *this, void *a2, size_t ElementCount)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  struct Concurrency::details::_TaskCollectionBase *v4; // eax
  int v5; // eax
  struct Concurrency::details::_TaskCollectionBase *v6; // eax
  int v8; // [esp+4h] [ebp-51Ch]
  const char *v10; // [esp+Ch] [ebp-514h]
  char Buffer[256]; // [esp+10h] [ebp-510h] BYREF
  int v12; // [esp+110h] [ebp-410h]
  FILE *Stream; // [esp+114h] [ebp-40Ch]
  char Destination[1028]; // [esp+118h] [ebp-408h] BYREF

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
         this,
         ExecutingCollection);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 200))(v8);
  v4 = Concurrency::details::ContextBase::GetExecutingCollection(this);
  v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
         this,
         v4);
  v10 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 204))(v5, v5);
  sprintf(Buffer, "data\\%s.hs", v10);
  memset(Destination, 0, 1024);
  strcpy(Destination, Buffer);
  Stream = sub_5EA9C0(Destination, "rb");
  if ( Stream
    || (v6 = Concurrency::details::ContextBase::GetExecutingCollection(this),
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 552))(
          this,
          v6),
        (Stream = sub_5EA9C0(Destination, "rb")) != 0) )
  {
    if ( v12 > 0 )
      fseek(Stream, 1520 * v12, 0);
    fread(a2, 0x98u, ElementCount, Stream);
    fclose(Stream);
    return 1;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1204);
    return 0;
  }
}


//======================================================================
// sub_634090
// entry 00634090  size 26  status ok
//======================================================================

int __stdcall sub_634090(char a1)
{
  return 2300633 - (a1 != 0);
}


//======================================================================
// sub_6340B0
// entry 006340b0  size 26  status ok
//======================================================================

int __stdcall sub_6340B0(char a1)
{
  return 2300631 - (a1 != 0);
}


//======================================================================
// sub_6340D0
// entry 006340d0  size 155  status ok
//======================================================================

int __thiscall sub_6340D0(void *this)
{
  int v3; // [esp+Ch] [ebp-8h]

  if ( (unsigned __int8)sub_636760(this) )
    return -1;
  if ( sub_636690(this) == 1 )
    return sub_634170(this);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 492))(dword_162EE80);
  if ( !v3 )
    return sub_634170(this);
  if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(v3 + 4))->rcSource.left == 1 )
    return -1;
  return *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4);
}


//======================================================================
// sub_634170
// entry 00634170  size 166  status ok
//======================================================================

int __thiscall sub_634170(_DWORD *this)
{
  int i; // eax
  CImageDisplay *v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+14h] [ebp-4h]

  v6 = 0;
  for ( i = sub_636610(this); ; i = sub_636610(this) )
  {
    if ( v6 >= i )
      return -1;
    v5 = *(CImageDisplay **)(*(this + 22) + 4 * v6);
    if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
    {
      break;
    }
    ++v6;
  }
  if ( (unsigned __int8)sub_648AE0(*(_DWORD *)(*(_DWORD *)(*(this + 22) + 4 * v6) + 32)) )
    return v6;
  else
    return -1;
}


//======================================================================
// sub_634220
// entry 00634220  size 225  status ok
//======================================================================

FILE *__thiscall sub_634220(int this)
{
  FILE *result; // eax
  FILE *Stream; // [esp+8h] [ebp-14h]
  char Buffer[8]; // [esp+10h] [ebp-Ch] BYREF

  *(_DWORD *)(this + 140) = operator new(0x1BD50u);
  result = sub_5EA9C0("data\\rewpl.rdf", "r");
  Stream = result;
  if ( result )
  {
    fread(Buffer, 1u, 5u, result);
    if ( !strcmp("RWPL", Buffer) )
      fread((void *)(this + 140), 0x17Cu, 0x12Cu, Stream);
    else
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1291);
    return (FILE *)fclose(Stream);
  }
  return result;
}


//======================================================================
// sub_634310
// entry 00634310  size 261  status ok
//======================================================================

int __thiscall sub_634310(_DWORD *this, int a2, char a3)
{
  int v5; // [esp+4h] [ebp-10h]
  int i; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  if ( (unsigned __int8)sub_634560(a2) )
  {
    for ( i = 0; i < (*(int (__thiscall **)(_DWORD *))(*this + 236))(this); ++i )
    {
      if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, i) )
      {
        v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, i);
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 240))(v5, a2);
        if ( v8 > 0 )
          return sub_634420(v8);
      }
    }
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1321);
    return 0;
  }
  else if ( a3 )
  {
    return -*(_DWORD *)(*(this + 35) + 380 * (a2 - 10000) + 356);
  }
  else
  {
    return *(_DWORD *)(*(this + 35) + 380 * (a2 - 10000) + 356);
  }
}


//======================================================================
// sub_634420
// entry 00634420  size 163  status ok
//======================================================================

int __stdcall sub_634420(int a1)
{
  int v2; // [esp+4h] [ebp-10h]
  int v3; // [esp+8h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  v5 = a1 / 100;
  if ( a1 / 100 >= 1 )
  {
    v4 = 1000;
    while ( v5 > 0 )
    {
      --v5;
      v4 *= 2;
    }
    v3 = 2 * v4;
  }
  else
  {
    v4 = 0;
    v3 = 1000;
  }
  v2 = v4;
  if ( a1 % 100 )
    v2 = v4 + a1 % 100 * (v3 - v4) / 100;
  return v2 / 100;
}


//======================================================================
// sub_6344D0
// entry 006344d0  size 132  status ok
//======================================================================

int __thiscall sub_6344D0(void *this)
{
  int i; // eax
  int v2; // eax
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v5 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 236))(this);
        v5 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 236))(this) )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v5) )
    {
      v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, v5);
      v6 += (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 252))(v2, v2);
    }
    ++v5;
  }
  return v6;
}


//======================================================================
// sub_634560
// entry 00634560  size 25  status ok
//======================================================================

BOOL __stdcall sub_634560(int a1)
{
  return a1 < 10000;
}


//======================================================================
// sub_6347C0
// entry 006347c0  size 163  status ok
//======================================================================

int __stdcall sub_6347C0(char *Buffer, int a2)
{
  if ( a2 > 1000000 )
    return sprintf(Buffer, "HB %d,%03d,%03d.00", a2 / 1000000, a2 % 1000000 / 1000, a2 % 1000);
  if ( a2 <= 1000 )
    return sprintf(Buffer, "HB %d.00", a2);
  return sprintf(Buffer, "HB %d,%03d.00", a2 / 1000, a2 % 1000);
}


//======================================================================
// sub_634870
// entry 00634870  size 330  status ok
//======================================================================

FILE *__thiscall sub_634870(void *this, char *Str1)
{
  FILE *Stream; // [esp+4h] [ebp-434h]
  char Buffer[8]; // [esp+28h] [ebp-410h] BYREF
  char Destination[1028]; // [esp+30h] [ebp-408h] BYREF

  memset(&Destination[1], 0, 0x3FFu);
  strcpy(Destination, "rtop.log");
  Stream = sub_5EA9C0(Destination, Str1);
  if ( !Stream )
  {
    sub_6349C0(this);
    Stream = sub_5EA9C0(Destination, Str1);
    if ( !Stream )
      return 0;
  }
  if ( !strcmp(Str1, "w") || (fread(Buffer, 1u, 5u, Stream), -(strcmp(Buffer, "RTOP") != 0) != -1) )
  {
    fseek(Stream, 0, 0);
    return Stream;
  }
  else
  {
    fclose(Stream);
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1453);
    return 0;
  }
}


//======================================================================
// sub_6349C0
// entry 006349c0  size 243  status ok
//======================================================================

char __thiscall sub_6349C0(void *this)
{
  char Destination[8]; // [esp+4h] [ebp-ACh] BYREF
  FILE *Stream; // [esp+Ch] [ebp-A4h]
  _BYTE Buffer[152]; // [esp+10h] [ebp-A0h] BYREF
  int i; // [esp+ACh] [ebp-4h]

  Stream = sub_634870(this, "w");
  if ( !Stream )
    return sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1472);
  strcpy(Destination, "RTOP");
  fwrite(Destination, 1u, 5u, Stream);
  for ( i = 0; i < 10; ++i )
  {
    memset(Buffer, 0, sizeof(Buffer));
    fwrite(Buffer, 0x98u, 1u, Stream);
  }
  return fclose(Stream);
}


//======================================================================
// sub_634AC0
// entry 00634ac0  size 206  status ok
//======================================================================

char __thiscall sub_634AC0(_DWORD *this)
{
  FILE *Stream; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  Stream = sub_634870(this, "rb");
  if ( Stream )
  {
    if ( !*(this + 36) )
      *(this + 36) = operator new(0x5F0u);
    fseek(Stream, 5, 0);
    for ( i = 0; i < 10; ++i )
      fread((void *)(*(this + 36) + 152 * i), 0x98u, 1u, Stream);
    fclose(Stream);
    return 1;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1494);
    return 0;
  }
}


//======================================================================
// sub_634B90
// entry 00634b90  size 210  status ok
//======================================================================

char __thiscall sub_634B90(const void **this)
{
  char result; // al
  char Destination[8]; // [esp+4h] [ebp-10h] BYREF
  FILE *Stream; // [esp+10h] [ebp-4h]

  result = (*((int (__thiscall **)(const void **))*this + 55))(this);
  if ( result && *(this + 36) )
  {
    Stream = sub_634870(this, "w");
    if ( Stream )
    {
      strcpy(Destination, "RTOP");
      fwrite(Destination, 1u, 5u, Stream);
      fwrite(*(this + 36), 0x98u, 0xAu, Stream);
      return fclose(Stream);
    }
    else
    {
      return sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1523);
    }
  }
  return result;
}


//======================================================================
// sub_634C70
// entry 00634c70  size 1209  status ok
//======================================================================

char __thiscall sub_634C70(const void **this)
{
  int v1; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const char *v3; // eax
  DWORD v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  LONG *v7; // eax
  int v9; // [esp+8h] [ebp-ACh]
  int v10; // [esp+Ch] [ebp-A8h]
  bool v11; // [esp+10h] [ebp-A4h]
  CImageDisplay *v13; // [esp+2Ch] [ebp-88h]
  void *v14; // [esp+40h] [ebp-74h]
  _BYTE v15[15]; // [esp+48h] [ebp-6Ch] BYREF
  char v16; // [esp+57h] [ebp-5Dh]
  int m; // [esp+58h] [ebp-5Ch]
  void (__thiscall ***v18)(_DWORD, int); // [esp+5Ch] [ebp-58h]
  char Destination[52]; // [esp+60h] [ebp-54h] BYREF
  int v20; // [esp+98h] [ebp-1Ch]
  int k; // [esp+9Ch] [ebp-18h]
  int j; // [esp+A0h] [ebp-14h]
  int i; // [esp+A4h] [ebp-10h]
  int v24; // [esp+B0h] [ebp-4h]

  v16 = 0;
  v18 = 0;
  LOBYTE(v1) = (*((int (__thiscall **)(const void **))*this + 55))(this);
  if ( (_BYTE)v1 )
  {
    for ( i = 0; ; ++i )
    {
      v1 = sub_636610(this);
      if ( i >= v1 )
        break;
      v13 = (CImageDisplay *)*((_DWORD *)*(this + 22) + i);
      v11 = CImageDisplay::GetDisplayFormat(v13)->rcSource.left == 2
         || CImageDisplay::GetDisplayFormat(v13)->rcSource.left == 3;
      if ( v11 && *(_DWORD *)(*((_DWORD *)*(this + 22) + i) + 36) )
      {
        v20 = sub_6703E0(*(_DWORD *)(*((_DWORD *)*(this + 22) + i) + 36));
        DisplayFormat = CImageDisplay::GetDisplayFormat(*((CImageDisplay **)*(this + 22) + i));
        strcpy(Destination, (const char *)&DisplayFormat->rcSource.top);
        for ( j = 0; j < 10 && strcmp((const char *)*(this + 36) + 152 * j, Destination); ++j )
          ;
        for ( k = 0; k <= j && k < 10; ++k )
        {
          if ( *((_DWORD *)*(this + 36) + 38 * k + 13) < v20 )
          {
            if ( j == 10 )
              v10 = 9;
            else
              v10 = j;
            for ( m = v10; m > k; --m )
              memcpy((char *)*(this + 36) + 152 * m, (char *)*(this + 36) + 152 * m - 152, 0x98u);
            *((_DWORD *)*(this + 36) + 38 * k + 13) = v20;
            v3 = (const char *)sub_639070(i);
            strcpy((char *)*(this + 36) + 152 * k, v3);
            *((_DWORD *)*(this + 36) + 38 * k + 15) = -1;
            if ( CImageDisplay::GetDisplayFormat(*((CImageDisplay **)*(this + 22) + i))->rcSource.left == 2 )
            {
              v4 = sub_4842B0(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
              v5 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *, DWORD))(*(_DWORD *)dword_162EE84 + 492))(
                               dword_162EE84,
                               v15,
                               v4);
              v6 = (char *)*(this + 36) + 152 * k + 64;
              *v6 = *v5;
              v6[1] = v5[1];
              v6[2] = v5[2];
              *((_DWORD *)*(this + 36) + 38 * k + 14) = 2;
            }
            else
            {
              *((_DWORD *)*(this + 36) + 38 * k + 14) = 3;
              if ( !v18 )
              {
                v14 = operator new(0xC8u);
                v24 = 0;
                if ( v14 )
                  v9 = sub_6640C0(v14);
                else
                  v9 = 0;
                v24 = -1;
                v18 = (void (__thiscall ***)(_DWORD, int))v9;
              }
              v7 = sub_57A470(*((CImageDisplay **)*(this + 22) + i));
              if ( (unsigned __int8)sub_664300(v7) )
                memcpy((char *)*(this + 36) + 152 * k + 76, v18 + 4, 0x4Cu);
              else
                sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1581);
              if ( v18 )
                (**v18)(v18, 1);
              v18 = 0;
            }
            v16 = 1;
            break;
          }
        }
      }
    }
    if ( v16 )
      LOBYTE(v1) = sub_634B90(this);
  }
  return v1;
}


//======================================================================
// sub_635130
// entry 00635130  size 88  status ok
//======================================================================

int __thiscall sub_635130(void *this)
{
  int i; // eax
  int v4; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 604))(this);
        v4 < i;
        i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 604))(this) )
  {
    if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 616))(this, v4) == 2001 )
      return v4;
    ++v4;
  }
  return 0;
}


//======================================================================
// sub_635190
// entry 00635190  size 177  status ok
//======================================================================

char __thiscall sub_635190(Concurrency::details::ContextBase *this, int a2, int a3)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  struct Concurrency::details::_TaskCollectionBase *v4; // eax
  int v5; // eax

  if ( a3 == 100055 )
  {
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
           this,
           ExecutingCollection) )
    {
      v4 = Concurrency::details::ContextBase::GetExecutingCollection(this);
      v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)this + 224))(
             this,
             v4);
      if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 104))(v5, v5, 100055) )
        sub_5FE240(100060, -1, 100058, 1);
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 520))(dword_162EE80) )
      sub_5FE640(a2, 100059, 0);
  }
  return 1;
}


//======================================================================
// sub_635250
// entry 00635250  size 16  status ok
//======================================================================

int sub_635250()
{
  return 3200009;
}


//======================================================================
// sub_635260
// entry 00635260  size 16  status ok
//======================================================================

int sub_635260()
{
  return 3200010;
}


//======================================================================
// sub_635270
// entry 00635270  size 120  status ok
//======================================================================

int sub_635270()
{
  void *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x3ACu);
  if ( v2 )
    return sub_63A0C0(v2);
  else
    return 0;
}


//======================================================================
// sub_6352F0
// entry 006352f0  size 64  status ok
//======================================================================

BOOL __thiscall sub_6352F0(void *this, int a2)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 600))(this) != a2
      && a2 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 236))(this);
}


//======================================================================
// sub_635330
// entry 00635330  size 640  status ok
//======================================================================

char __thiscall sub_635330(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  const CHAR *v6; // eax
  int v7; // eax
  const CHAR *v8; // [esp-8h] [ebp-50h]
  int v9; // [esp+0h] [ebp-48h]
  int v11; // [esp+8h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-3Ch]
  int v13; // [esp+10h] [ebp-38h]
  CImageDisplay *v15; // [esp+18h] [ebp-30h]
  int v16; // [esp+24h] [ebp-24h]
  int i; // [esp+28h] [ebp-20h]
  char v18[12]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v19; // [esp+38h] [ebp-10h]
  int v20; // [esp+3Ch] [ebp-Ch]

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 360))(dword_162EE80) )
    return 0;
  if ( sub_6352F0(this, a2) )
  {
    if ( byte_795F95 )
    {
      v13 = (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, a2);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 24))(v13) )
      {
        v12 = (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, a2);
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
        sub_635CD0("play", v4);
        return 0;
      }
    }
  }
  if ( sub_6352F0(this, a2) )
  {
    v11 = (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, a2);
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)v11 + 44))(v11, v18, a3);
    v5 = sub_636690(this);
    if ( v5 < v19 )
    {
      v8 = (const CHAR *)sub_630F40((int)"SID_GENERIC_OPPONENTREQUIRED");
      v6 = (const CHAR *)sub_630F40((int)"SID_GENERIC_NEEDANOTHERPLAYER");
      sub_62FF10(v6, v8, 0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 364))(
        dword_162EE80,
        0,
        0,
        a2,
        a3,
        0);
      return 0;
    }
    v7 = sub_636690(this);
    if ( v7 > v20 )
    {
      v16 = 0;
      for ( i = 0; i < (*(int (__thiscall **)(_DWORD *))(*this + 268))(this) && v16 < v20; ++i )
      {
        v15 = *(CImageDisplay **)(*(this + 22) + 4 * i);
        if ( CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v15)->rcSource.left == 3 )
        {
          ++v16;
        }
      }
      while ( i < (*(int (__thiscall **)(_DWORD *))(*this + 268))(this) )
        sub_63A3E0(i++, 0);
    }
  }
  if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, a2) )
  {
    v9 = (*(int (__thiscall **)(_DWORD *, int))(*this + 224))(this, a2);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 132))(v9, a2, a3);
  }
  (*(void (__thiscall **)(_DWORD *, int))(*this + 52))(this, a2);
  return 1;
}


//======================================================================
// sub_6355B0
// entry 006355b0  size 76  status ok
//======================================================================

void __thiscall sub_6355B0(void *this, int a2, char *Destination)
{
  int v3; // eax
  const char *v4; // eax

  if ( Destination )
  {
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           a2);
    v4 = (const char *)(*(int (__thiscall **)(int, int, void *))(*(_DWORD *)v3 + 8))(v3, v3, this);
    strcpy(Destination, v4);
  }
}


//======================================================================
// sub_635600
// entry 00635600  size 256  status ok
//======================================================================

char __thiscall sub_635600(void *this, int a2, _DWORD *a3, int a4)
{
  char result; // al
  int v5; // [esp+0h] [ebp-Ch]

  if ( a2 >= 0 && sub_6352F0(this, a2) )
  {
    sub_6375B0(dword_162EE84);
    *a3 = sub_639EA0(a2);
    v5 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v5 + 44))(v5, a3, a4);
    if ( *a3 < a3[1] )
    {
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1711);
      *a3 = a3[1];
    }
    result = (char)a3;
    if ( *a3 > a3[2] )
    {
      sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1714);
      result = (char)a3;
      *a3 = a3[2];
    }
  }
  else
  {
    result = sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1719);
    *a3 = 4;
  }
  return result;
}


//======================================================================
// sub_635700
// entry 00635700  size 83  status ok
//======================================================================

void __thiscall sub_635700(void *this, int a2, int a3)
{
  int v3; // [esp+0h] [ebp-8h]

  if ( a2 >= 0 && sub_6352F0(this, a2) )
  {
    if ( a3 )
    {
      v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 52))(v3, a3);
    }
  }
}


//======================================================================
// sub_635760
// entry 00635760  size 83  status ok
//======================================================================

void __thiscall sub_635760(void *this, int a2, int a3)
{
  int v3; // [esp+0h] [ebp-8h]

  if ( a2 >= 0 && sub_6352F0(this, a2) )
  {
    if ( a3 )
    {
      v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 60))(v3, a3);
    }
  }
}


//======================================================================
// sub_6357C0
// entry 006357c0  size 83  status ok
//======================================================================

void __thiscall sub_6357C0(void *this, int a2, int a3)
{
  int v3; // [esp+0h] [ebp-8h]

  if ( a2 >= 0 && sub_6352F0(this, a2) )
  {
    if ( a3 )
    {
      v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 56))(v3, a3);
    }
  }
}


//======================================================================
// sub_635820
// entry 00635820  size 51  status ok
//======================================================================

int __thiscall sub_635820(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a2);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 24))(v2, v2);
}


//======================================================================
// sub_635860
// entry 00635860  size 172  status ok
//======================================================================

int __thiscall sub_635860(void *this, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-14h]
  int i; // [esp+10h] [ebp-4h]

  if ( !dword_163069C
    || (result = (int)CImageDisplay::GetDisplayFormat((CImageDisplay *)(dword_163069C + 448)), *(_DWORD *)result) )
  {
    for ( i = 0; ; ++i )
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 236))(this);
      if ( i >= result )
        break;
      if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, i) )
      {
        v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, i);
        result = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 92))(v3, a2);
        if ( (_BYTE)result )
          break;
      }
    }
  }
  return result;
}


//======================================================================
// sub_635910
// entry 00635910  size 122  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_635910(void *this, int a2, int a3)
{
  const struct tagVIDEOINFO *result; // eax
  int v4; // [esp+0h] [ebp-10h]

  if ( !dword_163069C
    || (result = CImageDisplay::GetDisplayFormat((CImageDisplay *)(dword_163069C + 448)), result->rcSource.left) )
  {
    result = (const struct tagVIDEOINFO *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a3);
    if ( result )
    {
      v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, a3);
      return (const struct tagVIDEOINFO *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 96))(v4, a2);
    }
  }
  return result;
}


//======================================================================
// sub_635990
// entry 00635990  size 172  status ok
//======================================================================

int __thiscall sub_635990(void *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-14h]
  int i; // [esp+10h] [ebp-4h]

  if ( !dword_163069C
    || (result = (int)CImageDisplay::GetDisplayFormat((CImageDisplay *)(dword_163069C + 448)), *(_DWORD *)result) )
  {
    for ( i = 0; ; ++i )
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 236))(this);
      if ( i >= result )
        break;
      if ( (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, i) )
      {
        v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 224))(this, i);
        result = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 100))(v4, a2);
        if ( (_BYTE)result )
          break;
      }
    }
  }
  return result;
}


//======================================================================
// sub_635A40
// entry 00635a40  size 141  status ok
//======================================================================

char __thiscall sub_635A40(void *this, int a2, int a3)
{
  int v3; // eax

  v3 = sub_6352F0(this, a2);
  if ( v3 )
  {
    if ( a3 && a2 >= 0 && a2 < (*(int (__thiscall **)(void *))(*(_DWORD *)this + 236))(this) )
    {
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 808))(this, a2, a3);
      LOBYTE(v3) = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 812))(this, a2, a3);
    }
    else
    {
      LOBYTE(v3) = sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1790);
    }
  }
  return v3;
}


//======================================================================
// sub_635AD0
// entry 00635ad0  size 52  status ok
//======================================================================

void __thiscall sub_635AD0(CMFCCaptionButton *this, int a2)
{
  if ( **((_DWORD **)this + 22) )
    (*(void (__thiscall **)(CMFCCaptionButton *))(*(_DWORD *)this + 856))(this);
  CMFCCaptionButton::SetMiniFrameButton(this, a2);
}


//======================================================================
// sub_635B10
// entry 00635b10  size 297  status ok
//======================================================================

char __thiscall sub_635B10(int *this, int a2)
{
  char result; // al
  int v3; // eax
  CImageDisplay *v5; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(dword_7960D8 + 16) )
    sub_613DA0(*(char **)(dword_7960D8 + 16));
  result = sub_5F3C80(this, a2);
  dword_162EE80 = 0;
  if ( a2 != -1 )
  {
    if ( a2 != 1001
      && (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 340))(dword_162EE84) )
    {
      sub_5F85D0(*(this + 5));
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 340))(dword_162EE84);
      sub_5F83D0((_DWORD *)*(this + 5), v3, 0);
      sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
    }
    if ( a2 == 1003 )
    {
      v5 = (CImageDisplay *)sub_6375B0(this);
      CImageDisplay::GetDisplayFormat(v5)->bmiColors[129].rgbGreen = 0;
    }
    dword_162EE80 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 248))(
                      dword_162EE84,
                      a2);
    if ( dword_162EE80 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 4))(dword_162EE80);
    else
      return sub_5E9F20("room", "..\\casinoShell\\shell.cpp", 1829);
  }
  return result;
}


//======================================================================
// sub_635C40
// entry 00635c40  size 109  status ok
//======================================================================

bool __thiscall sub_635C40(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(this);
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)this + 600))(this) )
    return 0;
  return (int)ExecutingCollection >= 0
      && (int)ExecutingCollection < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84
                                                                                               + 236))(dword_162EE84);
}


//======================================================================
// sub_635CB0
// entry 00635cb0  size 31  status ok
//======================================================================

bool __thiscall sub_635CB0(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *a2)
{
  return Concurrency::details::ContextBase::GetExecutingCollection(this) == a2;
}


//======================================================================
// sub_635CD0
// entry 00635cd0  size 40  status ok
//======================================================================

char __stdcall sub_635CD0(int a1, int a2)
{
  return sub_5E9F20("false", "..\\casinoShell\\shell.cpp", 1859);
}


