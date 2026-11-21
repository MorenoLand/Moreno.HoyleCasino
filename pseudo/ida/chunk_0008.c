//======================================================================
// sub_45FDE0
// entry 0045fde0  size 160  status ok
//======================================================================

int __fastcall sub_45FDE0(char a1, int a2, int a3)
{
  int v5; // [esp+0h] [ebp-3Ch]
  int v6; // [esp+0h] [ebp-3Ch]
  char v7; // [esp+0h] [ebp-3Ch]
  char Buffer[52]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "Player %d Low Hand:\n", a3);
  sub_62FDE0(Buffer, a1);
  sub_45FA10(*(_WORD *)(v5 + 2 * a3 + 162), Buffer);
  sub_62FDE0(Buffer, v5);
  sub_45FA10(*(_WORD *)(v6 + 2 * a3 + 172), Buffer);
  sub_62FDE0(Buffer, v6);
  return sub_62FDE0("\n\n", v7);
}


//======================================================================
// sub_45FE80
// entry 0045fe80  size 345  status ok
//======================================================================

int __thiscall sub_45FE80(int this)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-3Ch]
  int v3; // [esp+8h] [ebp-38h]
  _AFX_OLE_STATE *v5; // [esp+10h] [ebp-30h]
  void *v6; // [esp+28h] [ebp-18h]
  int i; // [esp+30h] [ebp-10h]

  if ( !*(_DWORD *)(this + 88) )
  {
    v6 = operator new(0x810u);
    if ( v6 )
      v3 = sub_642E10(v6);
    else
      v3 = 0;
    *(_DWORD *)(this + 88) = v3;
  }
  sub_642E70(7);
  for ( i = 0; i < 5; ++i )
  {
    *(_QWORD *)(this + 16 * i + 8) = sub_64C8A0(0, 0);
    *(_QWORD *)(this + 16 * i + 16) = sub_64C8A0(0, 0);
  }
  v5 = (_AFX_OLE_STATE *)operator new(0xF0u);
  if ( v5 )
    v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v5);
  else
    v2 = 0;
  *(_DWORD *)(this + 4) = v2;
  sub_45FFE0(this);
  *(_BYTE *)(this + 278) = 0;
  return this;
}


//======================================================================
// sub_45FFE0
// entry 0045ffe0  size 457  status ok
//======================================================================

int __thiscall sub_45FFE0(int this)
{
  int result; // eax
  int k; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]
  int m; // [esp+14h] [ebp-4h]

  sub_460420(-1, 0);
  *(_DWORD *)(this + 292) = -1;
  *(_DWORD *)(this + 296) = -1;
  sub_460470(this);
  *(_BYTE *)(this + 277) = 0;
  *(_BYTE *)(this + 276) = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( i < 4 )
    {
      *(_BYTE *)(sub_5DCB00(i) + 1184) = 0;
      *(_BYTE *)(sub_5DCB00(i) + 1185) = 0;
      *(_BYTE *)(sub_5DCB00(i) + 1186) = 0;
    }
  }
  result = sub_5CB9B0(*(_DWORD *)(this + 4));
  for ( j = 0; j < 5; ++j )
  {
    for ( k = 0; k < 7; ++k )
      sub_4604A0(j, k, 0);
    *(_WORD *)(this + 2 * j + 162) = 0;
    *(_WORD *)(this + 2 * j + 172) = 0;
    *(_DWORD *)(this + 4 * j + 184) = -1;
    *(_DWORD *)(this + 4 * j + 204) = -1;
    *(_BYTE *)(j + this + 224) = 0;
    *(_BYTE *)(j + this + 229) = 0;
    *(_BYTE *)(j + this + 234) = 0;
    *(_BYTE *)(j + this + 239) = 0;
    result = j + 1;
  }
  for ( m = 0; m < 5; ++m )
  {
    *(_BYTE *)(m + this + 244) = 0;
    result = m + this;
    *(_BYTE *)(m + this + 254) = 0;
    *(_BYTE *)(m + this + 249) = 0;
  }
  return result;
}


//======================================================================
// sub_4601B0
// entry 004601b0  size 243  status ok
//======================================================================

char __thiscall sub_4601B0(int this)
{
  CImageDisplay *v3; // [esp+14h] [ebp-18h]
  int i; // [esp+28h] [ebp-4h]

  if ( *(_DWORD *)(this + 268) != 4 && *(_DWORD *)(this + 268) != -1 && !*(_BYTE *)(this + 276) )
    return 1;
  for ( i = 0; i < 4; ++i )
  {
    if ( i != *(_DWORD *)(this + 268) )
    {
      v3 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
      {
        if ( !*(_BYTE *)(sub_5DCB00(i) + 1185) && !*(_BYTE *)(sub_5DCB00(i) + 1184) )
          return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_4603A0
// entry 004603a0  size 74  status ok
//======================================================================

char __stdcall sub_4603A0(int a1)
{
  char v2; // [esp+7h] [ebp-1h]

  v2 = 0;
  if ( (unsigned __int8)sub_5CB7D0(a1, 0) || (unsigned __int8)sub_5CB7D0(a1, 1) )
    return 1;
  return v2;
}


//======================================================================
// sub_4603F0
// entry 004603f0  size 45  status ok
//======================================================================

int __thiscall sub_4603F0(_DWORD *this)
{
  if ( *(this + 65) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 65));
}


//======================================================================
// sub_460420
// entry 00460420  size 77  status ok
//======================================================================

int __thiscall sub_460420(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 65) = a2;
  if ( *(this + 65) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_460470
// entry 00460470  size 48  status ok
//======================================================================

int sub_460470()
{
  sub_6437D0(1, 0);
  return sub_643930(5, 7, "PaiGow", 0);
}


//======================================================================
// sub_4604A0
// entry 004604a0  size 37  status ok
//======================================================================

int __thiscall sub_4604A0(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 7 * a2 + a3 + 46) = a4;
  return a3;
}


//======================================================================
// sub_4604D0
// entry 004604d0  size 33  status ok
//======================================================================

__int16 __thiscall sub_4604D0(_WORD *this, int a2, int a3)
{
  return *(this + 7 * a2 + a3 + 46);
}


//======================================================================
// sub_460500
// entry 00460500  size 87  status ok
//======================================================================

int __thiscall sub_460500(_WORD *this, int a2, __int16 a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7 && sub_4604D0(this, a2, i); ++i )
    ;
  return sub_4604A0(this, a2, i, a3);
}


//======================================================================
// sub_460560
// entry 00460560  size 83  status ok
//======================================================================

int __thiscall sub_460560(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 7; ++i )
  {
    if ( sub_4604D0(this, a2, i) )
      ++v4;
  }
  return v4;
}


//======================================================================
// sub_4605C0
// entry 004605c0  size 123  status ok
//======================================================================

int __thiscall sub_4605C0(_BYTE *this, int a2)
{
  if ( *(this + a2 + 239) && *(this + a2 + 234) )
    return 1;
  if ( *(this + a2 + 239) || *(this + a2 + 234) )
    return 2;
  return 0;
}


//======================================================================
// sub_460640
// entry 00460640  size 177  status ok
//======================================================================

bool __stdcall sub_460640(int a1)
{
  int v2; // eax
  int v3; // esi
  CImageDisplay *v5; // [esp+Ch] [ebp-Ch]

  if ( a1 == 4 )
    return 1;
  v5 = (CImageDisplay *)sub_5DCB00(a1);
  if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v5)->rcSource.left != 3 )
  {
    return 0;
  }
  if ( (int)sub_5DE320(a1) > 1 )
    return 0;
  v2 = sub_5DCB00(a1);
  v3 = sub_5D5A50(v2);
  return v3 >= sub_460740(a1);
}


//======================================================================
// sub_460700
// entry 00460700  size 61  status ok
//======================================================================

int __thiscall sub_460700(_DWORD *this)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 3;
  v2[1] = 1;
  v2[2] = 0;
  v2[3] = 2;
  v2[4] = 4;
  return v2[*(this + 68)];
}


//======================================================================
// sub_460740
// entry 00460740  size 160  status ok
//======================================================================

int __thiscall sub_460740(void *this, int a2)
{
  int v2; // eax
  CImageDisplay *v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v6 = 1;
  for ( i = 0; i < 5; ++i )
  {
    if ( i != a2 )
    {
      v5 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left )
      {
        v2 = sub_5DCB00(i);
        if ( (unsigned __int8)sub_5D5840(v2) )
          ++v6;
      }
    }
  }
  return v6
       * (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *, void *, CImageDisplay *))(*(_DWORD *)dword_790734
                                                                                                  + 692))(
           dword_790734,
           this,
           v5);
}


//======================================================================
// sub_4607E0
// entry 004607e0  size 85  status ok
//======================================================================

int __thiscall sub_4607E0(_DWORD *this)
{
  if ( !sub_45F990() )
    return -1;
  if ( (int)++*(this + 68) > 4 )
    *(this + 68) = 0;
  return sub_460700(this);
}


//======================================================================
// sub_460840
// entry 00460840  size 281  status ok
//======================================================================

int __thiscall sub_460840(int this)
{
  CImageDisplay *v3; // [esp+14h] [ebp-24h]
  _DWORD v4[5]; // [esp+20h] [ebp-18h]
  int i; // [esp+34h] [ebp-4h]

  v4[0] = 3;
  v4[1] = 1;
  v4[2] = 0;
  v4[3] = 2;
  v4[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    if ( v4[i] != *(_DWORD *)(this + 268) )
    {
      if ( v4[i] == 4 && !*(_BYTE *)(this + 276) )
        return v4[i];
      v3 = (CImageDisplay *)sub_5DCB00(v4[i]);
      if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
      {
        if ( !*(_BYTE *)(sub_5DCB00(v4[i]) + 1184) && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1185) )
          return v4[i];
      }
    }
  }
  return -1;
}


//======================================================================
// sub_460960
// entry 00460960  size 403  status ok
//======================================================================

char __thiscall sub_460960(_DWORD *this, int a2)
{
  int v2; // eax
  char *Str1; // [esp+Ch] [ebp-38h]
  CImageDisplay *v7; // [esp+10h] [ebp-34h]
  char *Str2; // [esp+14h] [ebp-30h]
  CImageDisplay *v9; // [esp+18h] [ebp-2Ch]
  CImageDisplay *v10; // [esp+1Ch] [ebp-28h]
  _DWORD v11[5]; // [esp+2Ch] [ebp-18h]
  int i; // [esp+40h] [ebp-4h]

  v11[0] = 3;
  v11[1] = 1;
  v11[2] = 0;
  v11[3] = 2;
  v11[4] = 4;
  if ( (unsigned __int8)sub_5DA830(dword_790734) )
    return 0;
  v2 = sub_5DCB00(a2);
  if ( (unsigned __int8)sub_5D5840(v2) )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( v11[i] != *(this + 67) )
    {
      if ( v11[i] >= a2 )
        return 1;
      v10 = (CImageDisplay *)sub_5DCB00(v11[i]);
      if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
      {
        v9 = (CImageDisplay *)sub_5DCB00(a2);
        Str2 = (char *)&CImageDisplay::GetDisplayFormat(v9)->rcSource.top;
        v7 = (CImageDisplay *)sub_5DCB00(v11[i]);
        Str1 = (char *)&CImageDisplay::GetDisplayFormat(v7)->rcSource.top;
        if ( !strcmp(Str1, Str2) )
        {
          *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
            *(_DWORD *)(dword_162EE80 + 4),
            1,
            0);
          return 0;
        }
      }
    }
  }
  return 1;
}


//======================================================================
// sub_460B00
// entry 00460b00  size 58  status ok
//======================================================================

char __thiscall sub_460B00(int *this, int a2)
{
  char v3; // [esp+7h] [ebp-1h]

  v3 = 0;
  if ( *(this + 4 * a2 + 2) > 0 || *(this + 4 * a2 + 4) > 0 )
    return 1;
  return v3;
}


//======================================================================
// sub_460B40
// entry 00460b40  size 514  status ok
//======================================================================

void __thiscall sub_460B40(int this, int a2)
{
  bool v3; // [esp+4h] [ebp-24h]
  CImageDisplay *v5; // [esp+18h] [ebp-10h]

  if ( a2 != -1 && sub_460B00((int *)this, a2) && sub_5DCB00(a2) )
  {
    v5 = (CImageDisplay *)sub_5DCB00(a2);
    v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
    if ( v3 && !*(_BYTE *)(sub_5DCB00(a2) + 1184) )
    {
      (*(void (__thiscall **)(Concurrency::details::VirtualProcessor *, int))(*(_DWORD *)dword_790734 + 656))(
        dword_790734,
        a2);
      if ( sub_460B00((int *)this, a2) )
      {
        (*(void (__thiscall **)(_DWORD, int, _DWORD, int))(**(_DWORD **)(this + 4) + 196))(
          *(_DWORD *)(this + 4),
          this + 16 * a2 + 8,
          0,
          1);
        if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1
          && *(int *)(this + 16 * a2 + 16) > 0 )
        {
          (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 4) + 196))(
            *(_DWORD *)(this + 4),
            this + 16 * a2 + 16,
            1,
            1);
          *(_BYTE *)(a2 + this + 244) = 1;
          if ( *(int *)(this + 16 * a2 + 16) >= 5 )
            *(_BYTE *)(a2 + this + 249) = 1;
        }
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_4587E0((_DWORD **)dword_790740);
      if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
        sub_5DB890(dword_790734);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
        *((_DWORD *)dword_790734 + 1),
        1,
        0);
    }
  }
}


//======================================================================
// sub_460D50
// entry 00460d50  size 336  status ok
//======================================================================

void __thiscall sub_460D50(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v6; // [esp+Ch] [ebp-34h]
  int v7; // [esp+10h] [ebp-30h]
  int i; // [esp+3Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      v7 = *(this + 1);
      v1 = *(_DWORD *)(v7 + 32 * i + 76);
      v2 = 16 * i;
      *(_DWORD *)((char *)this + v2 + 8) = *(_DWORD *)(v7 + 32 * i + 72);
      *(_DWORD *)((char *)this + v2 + 12) = v1;
      if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
      {
        v6 = *(this + 1);
        v3 = *(_DWORD *)(v6 + 32 * i + 84);
        v4 = 16 * i;
        *(_DWORD *)((char *)this + v4 + 16) = *(_DWORD *)(v6 + 32 * i + 80);
        *(_DWORD *)((char *)this + v4 + 20) = v3;
      }
    }
    else if ( *(this + 67) != i )
    {
      *((_QWORD *)this + 2 * i + 1) = sub_64C8A0(0, 0);
      *((_QWORD *)this + 2 * i + 2) = sub_64C8A0(0, 0);
    }
  }
}


//======================================================================
// sub_460EA0
// entry 00460ea0  size 61  status ok
//======================================================================

char __thiscall sub_460EA0(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_460560(this, i) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_460EE0
// entry 00460ee0  size 30  status ok
//======================================================================

int __thiscall sub_460EE0(_DWORD *this)
{
  int result; // eax

  result = sub_62FBF0(5);
  *(this + 66) = result;
  return result;
}


//======================================================================
// sub_460F00
// entry 00460f00  size 332  status ok
//======================================================================

int __thiscall sub_460F00(int this)
{
  bool v2; // [esp+0h] [ebp-38h]
  CImageDisplay *v4; // [esp+10h] [ebp-28h]
  _DWORD v5[5]; // [esp+18h] [ebp-20h]
  bool v6; // [esp+2Fh] [ebp-9h]
  int i; // [esp+30h] [ebp-8h]
  int v8; // [esp+34h] [ebp-4h]

  v8 = *(_DWORD *)(this + 264);
  v5[0] = 3;
  v5[1] = 1;
  v5[2] = 0;
  v5[3] = 2;
  v5[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    if ( v5[i] == *(_DWORD *)(this + 264) )
    {
      v8 = i;
      break;
    }
  }
  for ( i = 0; i < 5; ++i )
  {
    v2 = 1;
    if ( v5[v8] != 4 )
    {
      v4 = (CImageDisplay *)sub_5DCB00(v5[v8]);
      if ( !CImageDisplay::GetDisplayFormat(v4)->rcSource.left || *(_BYTE *)(sub_5DCB00(v5[v8]) + 1185) )
        v2 = 0;
    }
    v6 = v2;
    if ( v2 && !sub_460560((_WORD *)this, v5[v8]) )
      return v5[v8];
    if ( v5[v8] == 4 )
      v8 = 0;
    else
      ++v8;
  }
  return -1;
}


//======================================================================
// sub_461050
// entry 00461050  size 258  status ok
//======================================================================

int __thiscall sub_461050(_BYTE *this)
{
  CImageDisplay *v3; // [esp+Ch] [ebp-24h]
  _DWORD v4[5]; // [esp+18h] [ebp-18h]
  int i; // [esp+2Ch] [ebp-4h]

  v4[0] = 3;
  v4[1] = 1;
  v4[2] = 0;
  v4[3] = 2;
  v4[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    if ( v4[i] == 4 && !*(this + v4[i] + 229) )
      return v4[i];
    v3 = (CImageDisplay *)sub_5DCB00(v4[i]);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1185)
      && !*(this + v4[i] + 229) )
    {
      return v4[i];
    }
  }
  return -1;
}


//======================================================================
// sub_461160
// entry 00461160  size 92  status ok
//======================================================================

int __stdcall sub_461160(int a1, __int16 a2)
{
  int result; // eax

  if ( (unsigned __int8)sub_461220(a1, a2) )
    return sub_4611C0(a1, a2);
  result = sub_4612D0(a1);
  if ( result != 2 )
    return sub_461270(a1, a2);
  return result;
}


//======================================================================
// sub_4611C0
// entry 004611c0  size 91  status ok
//======================================================================

int __thiscall sub_4611C0(_WORD *this, int a2, unsigned __int16 a3)
{
  int result; // eax

  result = a3;
  if ( (unsigned __int16)*(this + a2 + 81) == a3 )
  {
    *(this + a2 + 81) = 0;
  }
  else
  {
    result = a3;
    if ( (unsigned __int16)*(this + a2 + 86) == a3 )
      *(this + a2 + 86) = 0;
  }
  return result;
}


//======================================================================
// sub_461220
// entry 00461220  size 78  status ok
//======================================================================

bool __thiscall sub_461220(unsigned __int16 *this, int a2, unsigned __int16 a3)
{
  return *(this + a2 + 81) == a3 || *(this + a2 + 86) == a3;
}


//======================================================================
// sub_461270
// entry 00461270  size 87  status ok
//======================================================================

int __thiscall sub_461270(_WORD *this, int a2, __int16 a3)
{
  int result; // eax

  if ( *(this + a2 + 81) )
  {
    result = a2;
    if ( !*(this + a2 + 86) )
    {
      *(this + a2 + 86) = a3;
      return a2;
    }
  }
  else
  {
    *(this + a2 + 81) = a3;
    return a2;
  }
  return result;
}


//======================================================================
// sub_4612D0
// entry 004612d0  size 79  status ok
//======================================================================

int __thiscall sub_4612D0(_WORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = *(this + a2 + 81) != 0;
  if ( *(this + a2 + 86) )
    ++v3;
  return v3;
}


//======================================================================
// sub_461320
// entry 00461320  size 58  status ok
//======================================================================

char __thiscall sub_461320(_WORD *this, int a2)
{
  return sub_452EF0((void *)dword_790744, a2, *(this + a2 + 81), *(this + a2 + 86));
}


//======================================================================
// sub_461360
// entry 00461360  size 76  status ok
//======================================================================

int __thiscall sub_461360(_WORD *this, int a2, __int16 a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    if ( sub_4604D0(this, a2, i) == a3 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_4613B0
// entry 004613b0  size 157  status ok
//======================================================================

bool __thiscall sub_4613B0(_WORD *this, int a2)
{
  __int16 v5; // [esp+8h] [ebp-8h] BYREF
  __int16 v6; // [esp+Ch] [ebp-4h] BYREF

  sub_452A40((_DWORD *)dword_790744, a2, &v6, &v5);
  return (v6 == *(this + a2 + 81) || v6 == *(this + a2 + 86))
      && (v5 == *(this + a2 + 81) || v5 == *(this + a2 + 86))
      && v6 != v5;
}


//======================================================================
// sub_461450
// entry 00461450  size 300  status ok
//======================================================================

int __thiscall sub_461450(_BYTE *this)
{
  CImageDisplay *v3; // [esp+14h] [ebp-24h]
  _DWORD v4[5]; // [esp+20h] [ebp-18h]
  int i; // [esp+34h] [ebp-4h]

  v4[0] = 3;
  v4[1] = 1;
  v4[2] = 0;
  v4[3] = 2;
  v4[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    if ( v4[i] != *(_DWORD *)(dword_790738 + 268) )
    {
      if ( v4[i] == 4 && *(this + 276) )
      {
        if ( !*(this + 277) )
          return v4[i];
      }
      else
      {
        v3 = (CImageDisplay *)sub_5DCB00(v4[i]);
        if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left
          && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1185)
          && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1186) )
        {
          return v4[i];
        }
      }
    }
  }
  return -1;
}


//======================================================================
// sub_461580
// entry 00461580  size 123  status ok
//======================================================================

int __thiscall sub_461580(_BYTE *this, int a2)
{
  if ( *(this + a2 + 234) && *(this + a2 + 239) )
    return 1;
  if ( *(this + a2 + 234) || *(this + a2 + 239) )
    return 2;
  return 0;
}


//======================================================================
// sub_461600
// entry 00461600  size 736  status ok
//======================================================================

char __thiscall sub_461600(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [esp+10h] [ebp-78h]
  __int64 v9; // [esp+10h] [ebp-78h]
  int v10; // [esp+18h] [ebp-70h]
  int v12; // [esp+24h] [ebp-64h]
  int v13; // [esp+3Ch] [ebp-4Ch]
  __int64 v14; // [esp+50h] [ebp-38h]
  __int64 v15; // [esp+68h] [ebp-20h]
  __int64 v16; // [esp+70h] [ebp-18h]
  int v17; // [esp+78h] [ebp-10h]
  __int64 v18; // [esp+80h] [ebp-8h]

  v13 = sub_5DCB00(a2);
  v17 = *(char *)(sub_5D52E0(v13) + 42);
  if ( a2 == 4 )
  {
    if ( sub_461580((_BYTE *)this, 4) == 1 )
    {
      v2 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
      v15 = sub_64C8A0(2 * v2, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 184))(
        *(_DWORD *)(this + 4),
        v15,
        HIDWORD(v15),
        4,
        0);
      v3 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
      v18 = sub_64C8A0(-v3, 0);
      sub_5DCB00(*(_DWORD *)(this + 268));
      sub_5D5FB0(v18, HIDWORD(v18));
      sub_5DCB00(*(_DWORD *)(this + 268));
      sub_5D5CF0(v18, HIDWORD(v18));
    }
    v4 = sub_461580((_BYTE *)this, 4);
    if ( !v4 )
    {
      v5 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
      v16 = sub_64C8A0(v5, 0);
      sub_64C560(0.95);
      v14 = sub_64C8A0(0, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 184))(
        *(_DWORD *)(this + 4),
        v14,
        HIDWORD(v14),
        4,
        0);
      sub_5DCB00(*(_DWORD *)(this + 268));
      sub_5D5FB0(v16, HIDWORD(v16));
      sub_5DCB00(*(_DWORD *)(this + 268));
      LOBYTE(v4) = sub_5D5CF0(v16, HIDWORD(v16));
    }
  }
  else
  {
    v8 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    sub_5D6050(v8, HIDWORD(v8));
    v6 = sub_461580((_BYTE *)this, a2);
    sub_462370(a2, v6);
    v12 = sub_5DCB00(a2);
    LOBYTE(v4) = *(_BYTE *)(sub_5D52E0(v12) + 42);
    if ( v17 != (char)v4 && !(_BYTE)v4 )
    {
      v10 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, -1);
      v9 = sub_64C8A0(0, 0);
      sub_5DCB00(a2);
      LOBYTE(v4) = sub_5D6050(v9, HIDWORD(v9));
    }
  }
  return v4;
}


//======================================================================
// sub_4618E0
// entry 004618e0  size 268  status ok
//======================================================================

int __thiscall sub_4618E0(_BYTE *this)
{
  CImageDisplay *v3; // [esp+14h] [ebp-20h]
  _DWORD v4[5]; // [esp+1Ch] [ebp-18h]
  int i; // [esp+30h] [ebp-4h]

  v4[0] = 3;
  v4[1] = 1;
  v4[2] = 0;
  v4[3] = 2;
  v4[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(v4[i]);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1185)
      && *(_BYTE *)(sub_5DCB00(v4[i]) + 1186)
      && (unsigned __int8)sub_4619F0(v4[i])
      && !*(this + v4[i] + 254) )
    {
      return v4[i];
    }
  }
  return -1;
}


//======================================================================
// sub_4619F0
// entry 004619f0  size 25  status ok
//======================================================================

char __thiscall sub_4619F0(_BYTE *this, int a2)
{
  return *(this + a2 + 244);
}


//======================================================================
// sub_461A10
// entry 00461a10  size 1267  status ok
//======================================================================

int __thiscall sub_461A10(int this, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // ecx
  __int64 v6; // rax
  _DWORD *v7; // eax
  int v8; // [esp-8h] [ebp-1A0h]
  __int64 v9; // [esp-8h] [ebp-1A0h]
  int v10; // [esp-4h] [ebp-19Ch]
  int v12; // [esp+8h] [ebp-190h]
  int v13; // [esp+Ch] [ebp-18Ch]
  int v14; // [esp+10h] [ebp-188h]
  __int64 v15; // [esp+14h] [ebp-184h]
  _BYTE v16[8]; // [esp+24h] [ebp-174h] BYREF
  __int64 v17; // [esp+2Ch] [ebp-16Ch]
  __int64 v18; // [esp+34h] [ebp-164h]
  __int64 v19; // [esp+3Ch] [ebp-15Ch]
  __int64 v20; // [esp+44h] [ebp-154h]
  int v21; // [esp+4Ch] [ebp-14Ch]
  int v22; // [esp+50h] [ebp-148h]
  __int64 v23; // [esp+54h] [ebp-144h]
  int v24; // [esp+5Ch] [ebp-13Ch]
  int v25; // [esp+60h] [ebp-138h]
  __int64 v26; // [esp+64h] [ebp-134h]
  __int64 v27; // [esp+6Ch] [ebp-12Ch]
  int v28; // [esp+74h] [ebp-124h]
  int v29; // [esp+78h] [ebp-120h]
  int v30; // [esp+7Ch] [ebp-11Ch]
  __int64 v31; // [esp+80h] [ebp-118h]
  char v32; // [esp+8Bh] [ebp-10Dh]
  int v33; // [esp+8Ch] [ebp-10Ch]
  char Buffer[260]; // [esp+90h] [ebp-108h] BYREF

  v26 = sub_64C8A0(0, 0);
  v31 = v26;
  v14 = *(_DWORD *)(this + 4);
  v3 = *(_DWORD *)(v14 + 32 * a2 + 84);
  v29 = *(_DWORD *)(v14 + 32 * a2 + 80);
  v30 = v3;
  v28 = 0;
  v33 = 0;
  v32 = 1;
  if ( a3 == 1 )
    *(_BYTE *)(a2 + this + 254) = 1;
  result = (unsigned __int8)sub_4619F0((_BYTE *)this, a2);
  if ( (_BYTE)result )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v6 = sub_64C8A0(5, 0);
        v20 = v6;
        v12 = *(_DWORD *)(this + 4);
        LODWORD(v6) = *(_DWORD *)(v12 + 32 * a2 + 92);
        v21 = *(_DWORD *)(v12 + 32 * a2 + 88);
        v22 = v6;
        if ( (unsigned __int8)sub_64C7A0(v20, HIDWORD(v6)) )
          v33 = sub_457600((void *)dword_790744, a2);
        v19 = sub_64C8A0(0, 0);
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(this + 4) + 184))(
          *(_DWORD *)(this + 4),
          v19,
          HIDWORD(v19),
          a2,
          2);
        v18 = sub_64C8A0(v33, 0);
        v31 = v18;
        sprintf(Buffer, "Player %d wins ENVY BONUS=%d\n", a2, v33);
      }
    }
    else
    {
      v28 = sub_4574A0((void *)dword_790744, a2);
      v13 = *(_DWORD *)(this + 4);
      v5 = *(_DWORD *)(v13 + 32 * a2 + 84);
      v24 = *(_DWORD *)(v13 + 32 * a2 + 80);
      v25 = v5;
      (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(this + 4) + 184))(
        *(_DWORD *)(this + 4),
        v24,
        v5,
        a2,
        2);
      if ( v28 < 0 )
      {
        v28 = 0;
        v32 = 0;
      }
      v23 = sub_64C8A0(v29 * v28, v30 * v28 / 100);
      v31 = v23;
      sprintf(Buffer, "Player %d wins FORTUNE PAYOUT=%d\n", a2, v28);
    }
    sub_62FDE0(Buffer, a3);
    v17 = sub_64C8A0(0, 0);
    result = sub_64C6E0(v17, HIDWORD(v17));
    if ( (_BYTE)result )
    {
      sub_5DCB00(a2);
      sub_5D5FB0(v31, HIDWORD(v31));
      sub_5DCB00(a2);
      sub_5D5CF0(v31, HIDWORD(v31));
      v7 = (_DWORD *)sub_64C5C0(v16, v29, v30);
      result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(this + 4) + 184))(
                 *(_DWORD *)(this + 4),
                 *v7,
                 v7[1],
                 a2,
                 1);
    }
    if ( !a3 )
    {
      if ( v32 )
      {
        v10 = v30;
        v8 = v29;
        sub_5DCB00(a2);
        return sub_5D5CF0(v8, v10);
      }
      else
      {
        v27 = sub_64C8A0(-v29, -v30);
        v9 = v27;
        sub_5DCB00(a2);
        sub_5D5FB0(v9, HIDWORD(v9));
        v15 = sub_64C8A0(0, 0);
        return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(this + 4) + 184))(
                 *(_DWORD *)(this + 4),
                 v15,
                 HIDWORD(v15),
                 a2,
                 1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_461F10
// entry 00461f10  size 104  status ok
//======================================================================

bool __stdcall sub_461F10(int a1)
{
  CImageDisplay *v2; // [esp+Ch] [ebp-8h]

  v2 = (CImageDisplay *)sub_5DCB00(a1);
  return CImageDisplay::GetDisplayFormat(v2)->rcSource.left && *(_BYTE *)(sub_5DCB00(a1) + 1185) == 0;
}


//======================================================================
// sub_461F80
// entry 00461f80  size 305  status ok
//======================================================================

int __fastcall sub_461F80(char a1, int a2, int a3)
{
  const char *v3; // eax
  char *v4; // eax
  char Destination[128]; // [esp+4h] [ebp-7D0h] BYREF
  char Source[1024]; // [esp+84h] [ebp-750h] BYREF
  char Buffer[64]; // [esp+484h] [ebp-350h] BYREF
  char v10[516]; // [esp+4C4h] [ebp-310h] BYREF
  __int16 v11; // [esp+6C8h] [ebp-10Ch]
  char v12[260]; // [esp+6CCh] [ebp-108h] BYREF

  v11 = sub_452500((_DWORD *)dword_790744, a3);
  if ( v11 == -1 )
    sub_5E9F20((char)"handType != -1", "..\\Casino\\paigowstate.cpp", 927);
  sprintf(Buffer, "Paigow Tutorial: handType %hd\n", v11);
  sub_62FDE0(Buffer, a1);
  sub_4620C0(v11, Destination);
  sub_462120(v11, v12);
  sub_462180(v11, v10);
  v3 = (const char *)sub_630F40("SID_PAIGOWPOKER_CURRENTHAND_FORMAT");
  sprintf(Source, v3, Destination, v12, v10);
  v4 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80(1, v4, Source);
}


//======================================================================
// sub_4620C0
// entry 004620c0  size 83  status ok
//======================================================================

char *__stdcall sub_4620C0(__int16 a1, char *Destination)
{
  const char *v2; // eax
  char Buffer[52]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "SID_PAIGOWPOKER_HAND%d", a1);
  v2 = (const char *)sub_630F40(Buffer);
  return strcpy(Destination, v2);
}


//======================================================================
// sub_462120
// entry 00462120  size 83  status ok
//======================================================================

char *__stdcall sub_462120(__int16 a1, char *Destination)
{
  const char *v2; // eax
  char Buffer[52]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "SID_PAIGOWPOKER_RECOMMENDATION%d", a1);
  v2 = (const char *)sub_630F40(Buffer);
  return strcpy(Destination, v2);
}


//======================================================================
// sub_462180
// entry 00462180  size 83  status ok
//======================================================================

char *__stdcall sub_462180(__int16 a1, char *Destination)
{
  const char *v2; // eax
  char Buffer[52]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "SID_PAIGOWPOKER_REASON%d", a1);
  v2 = (const char *)sub_630F40(Buffer);
  return strcpy(Destination, v2);
}


//======================================================================
// sub_462220
// entry 00462220  size 284  status ok
//======================================================================

bool sub_462220()
{
  bool v2; // [esp+4h] [ebp-34h]
  bool v3; // [esp+8h] [ebp-30h]
  CImageDisplay *v4; // [esp+18h] [ebp-20h]
  CImageDisplay *v5; // [esp+2Ch] [ebp-Ch]

  if ( !sub_4603F0((_DWORD *)dword_790738) )
    return 0;
  v5 = (CImageDisplay *)sub_4603F0((_DWORD *)dword_790738);
  v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
  if ( v3 && *(_DWORD *)(dword_790738 + 268) == *(_DWORD *)(dword_790738 + 260) )
    return 0;
  v4 = (CImageDisplay *)sub_4603F0((_DWORD *)dword_790738);
  v2 = CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3;
  return v2 && !*(_BYTE *)(sub_4603F0((_DWORD *)dword_790738) + 1184);
}


//======================================================================
// sub_462340
// entry 00462340  size 41  status ok
//======================================================================

int __stdcall sub_462340(int a1, int a2)
{
  int result; // eax

  if ( dword_790740 )
    return sub_458B50((_DWORD **)dword_790740, a1, a2);
  return result;
}


//======================================================================
// sub_462370
// entry 00462370  size 946  status ok
//======================================================================

int __thiscall sub_462370(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  __int64 v9; // [esp+0h] [ebp-84h]
  __int64 v10; // [esp+0h] [ebp-84h]
  _DWORD *v11; // [esp+8h] [ebp-7Ch]
  char v13[8]; // [esp+34h] [ebp-50h] BYREF
  __int64 v14; // [esp+3Ch] [ebp-48h]
  __int64 v15; // [esp+44h] [ebp-40h]
  __int64 v16; // [esp+4Ch] [ebp-38h]
  __int64 v17; // [esp+54h] [ebp-30h]
  int v18; // [esp+5Ch] [ebp-28h]
  int v19; // [esp+60h] [ebp-24h]
  __int64 v20; // [esp+64h] [ebp-20h]
  __int64 v21; // [esp+6Ch] [ebp-18h]
  __int64 v22; // [esp+74h] [ebp-10h]
  __int64 v23; // [esp+7Ch] [ebp-8h]

  v3 = *(this + 8 * a2 + 19);
  LODWORD(v23) = *(this + 8 * a2 + 18);
  HIDWORD(v23) = v3;
  v17 = sub_64C8A0(0, 0);
  v21 = v17;
  v16 = sub_64C8A0(0, 0);
  v22 = v16;
  v15 = sub_64C8A0(0, 0);
  v20 = v15;
  v4 = sub_5DCB00(a2);
  result = sub_5D5A50(v4);
  if ( result < 1000000000 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v6 = sub_5DCB00(a2);
        sub_5D7540(v6);
        v21 = v23;
        sub_64C560(0.95);
        if ( *(_DWORD *)(dword_790738 + 268) != 4 )
        {
          v18 = -(int)v23;
          v19 = -HIDWORD(v23);
          sub_5DCB00(*(_DWORD *)(dword_790738 + 268));
          sub_5D5FB0(-(int)v23, -HIDWORD(v23));
          sub_5DCB00(*(_DWORD *)(dword_790738 + 268));
          sub_5D5CF0(-(int)v23, -HIDWORD(v23));
        }
        v7 = (_DWORD *)sub_64C5C0(v13, v23, HIDWORD(v23));
        v8 = v7[1];
        LODWORD(v22) = *v7;
        HIDWORD(v22) = v8;
        if ( (int)v22 >= 1000000000 )
          v22 = sub_64C8A0(1000000000, 0);
        v9 = v22;
        sub_5DCB00(a2);
        sub_5D5CF0(v9, HIDWORD(v9));
        v10 = v21;
        sub_5DCB00(a2);
        sub_5D5FB0(v10, HIDWORD(v10));
        return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, _DWORD))(*this + 184))(
                 this,
                 v22,
                 HIDWORD(v22),
                 a2,
                 0);
      }
      else if ( a3 == 2 )
      {
        sub_5DCB00(a2);
        return sub_5D5CF0(v23, HIDWORD(v23));
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 4 * a2 + 24) + 196))(*(_DWORD *)(dword_790740 + 4 * a2 + 24));
      if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      v11 = (_DWORD *)(sub_5DCB00(a2) + 1192);
      --*v11;
      if ( *(_DWORD *)(dword_790738 + 268) != 4 )
      {
        v20 = v23;
        sub_64C560(0.95);
        sub_5DCB00(*(_DWORD *)(dword_790738 + 268));
        sub_5D5FB0(v23, HIDWORD(v23));
        sub_5DCB00(*(_DWORD *)(dword_790738 + 268));
        sub_5D5CF0(v23, HIDWORD(v23));
      }
      LODWORD(v21) = -(int)v23;
      HIDWORD(v21) = -HIDWORD(v23);
      sub_5DCB00(a2);
      sub_5D5FB0(-(int)v23, -HIDWORD(v23));
      v14 = sub_64C8A0(0, 0);
      return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, _DWORD))(*this + 184))(
               this,
               v14,
               HIDWORD(v14),
               a2,
               0);
    }
  }
  return result;
}


//======================================================================
// sub_462730
// entry 00462730  size 122  status ok
//======================================================================

char __thiscall sub_462730(void *this, int a2, int a3)
{
  __int64 v5; // [esp+Ch] [ebp-8h] BYREF

  v5 = sub_64C8A0(0, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) )
    return 0;
  (*(void (__thiscall **)(void *, __int64 *, int, int))(*(_DWORD *)this + 196))(this, &v5, a3, 1);
  if ( a3 == 1 )
    *(_BYTE *)(a2 + dword_790738 + 244) = 1;
  return 1;
}


//======================================================================
// sub_4627B0
// entry 004627b0  size 276  status ok
//======================================================================

char __thiscall sub_4627B0(void *this, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // [esp+1Ch] [ebp-8h] BYREF

  v6 = sub_64C8A0(0, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 180))(this) )
    return 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  sub_5D5DE0(&v6);
  if ( !(_DWORD)v6 )
    LODWORD(v6) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 688))(dword_7947E4);
  LODWORD(v6) = -(int)v6;
  HIDWORD(v6) = -HIDWORD(v6);
  (*(void (__thiscall **)(void *, __int64 *, int, int))(*(_DWORD *)this + 196))(this, &v6, a3, 1);
  if ( a3 == 1 )
  {
    v3 = sub_64C8A0(0, 0);
    if ( (unsigned __int8)sub_64C820(v3, HIDWORD(v3)) )
      *(_BYTE *)(a2 + dword_790738 + 244) = 0;
  }
  return 1;
}


//======================================================================
// sub_462930
// entry 00462930  size 133  status ok
//======================================================================

int __cdecl sub_462930(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v8 = 0;
  for ( i = 0; i < a2; ++i )
  {
    *(_WORD *)(a5 + 2 * v8++) = *(_WORD *)(a1 + 2 * i);
    result = i + 1;
  }
  for ( j = 0; j < a4; ++j )
  {
    *(_WORD *)(a5 + 2 * v8++) = *(_WORD *)(a3 + 2 * j);
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_4629C0
// entry 004629c0  size 116  status ok
//======================================================================

int __cdecl sub_4629C0(int a1, int a2, int a3, int a4)
{
  int j; // [esp+0h] [ebp-Ch]
  int i; // [esp+4h] [ebp-8h]
  char v7; // [esp+Bh] [ebp-1h]

  for ( i = 0; i < a2; ++i )
  {
    v7 = 0;
    for ( j = 0; j < a4; ++j )
    {
      if ( *(unsigned __int16 *)(a1 + 2 * i) == *(unsigned __int16 *)(a3 + 2 * j) )
      {
        v7 = 1;
        break;
      }
    }
    if ( !v7 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_462A40
// entry 00462a40  size 343  status ok
//======================================================================

int __cdecl sub_462A40(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int j; // [esp+4h] [ebp-44h]
  int n; // [esp+8h] [ebp-40h]
  int m; // [esp+Ch] [ebp-3Ch]
  int v8; // [esp+10h] [ebp-38h]
  int k; // [esp+14h] [ebp-34h]
  int i; // [esp+18h] [ebp-30h]
  _WORD v11[10]; // [esp+1Ch] [ebp-2Ch] BYREF
  _WORD v12[10]; // [esp+30h] [ebp-18h] BYREF

  for ( i = 0; i < 9; ++i )
  {
    v11[i] = 0;
    v12[i] = 0;
  }
  result = a3;
  if ( a3 <= a1 )
  {
    for ( j = 0; ; ++j )
    {
      result = j;
      if ( j >= a1 )
        break;
      *(_WORD *)(a4 + 2 * j) = *(_WORD *)(a2 + 2 * j);
    }
  }
  else
  {
    for ( k = 0; k < a3; ++k )
    {
      v8 = 0;
      for ( m = 0; m < 9; ++m )
      {
        if ( m != k )
          v11[v8++] = *(_WORD *)(a2 + 2 * m);
      }
      sub_462A40(a1, v11, a3 - 1, v12);
      result = sub_462DA0(v12, a4, a1);
      if ( result == 1 )
      {
        for ( n = 0; n < a1; ++n )
        {
          *(_WORD *)(a4 + 2 * n) = v12[n];
          result = n + 1;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_462BA0
// entry 00462ba0  size 502  status ok
//======================================================================

int __cdecl sub_462BA0(int a1, int a2, char a3)
{
  bool v4; // [esp+0h] [ebp-38h]
  _WORD v5[20]; // [esp+8h] [ebp-30h] BYREF
  int i; // [esp+34h] [ebp-4h]

  v4 = !a3 || a2 >= 5;
  if ( a2 >= 21 )
    sub_5E9F20((char)"handSize < 21", "..\\Casino\\pokerai.cpp", 93);
  for ( i = 0; i < 20; ++i )
  {
    if ( i >= a2 )
      v5[i] = 0;
    else
      v5[i] = *(_WORD *)(a1 + 2 * i);
  }
  sub_641E20(v5, a2);
  if ( (unsigned __int8)sub_463710(v5, a2) && v4 )
    return 10;
  if ( (unsigned __int8)sub_463760(v5, a2) && v4 )
    return 9;
  if ( (unsigned __int8)sub_4637B0(v5, a2) )
    return 8;
  if ( (unsigned __int8)sub_4637D0(v5, a2) )
    return 7;
  if ( (unsigned __int8)sub_463840(v5, a2) && v4 )
    return 6;
  if ( (unsigned __int8)sub_4638A0(v5, a2) && v4 )
    return 5;
  if ( (unsigned __int8)sub_463940(v5, a2) )
    return 4;
  if ( (unsigned __int8)sub_463960(v5, a2) )
    return 3;
  if ( (unsigned __int8)sub_4639C0(v5, a2) )
    return 2;
  return 1;
}


//======================================================================
// sub_462DA0
// entry 00462da0  size 405  status ok
//======================================================================

int __cdecl sub_462DA0(int a1, _WORD *a2, int a3)
{
  int v4; // esi
  int v5; // esi
  _WORD v6[20]; // [esp+4h] [ebp-60h] BYREF
  _WORD v7[20]; // [esp+2Ch] [ebp-38h] BYREF
  int v8; // [esp+58h] [ebp-Ch]
  int v9; // [esp+5Ch] [ebp-8h]
  int i; // [esp+60h] [ebp-4h]

  for ( i = 0; i < 20; ++i )
  {
    v6[i] = 0;
    v7[i] = 0;
  }
  if ( !*a2 )
    return 1;
  v8 = sub_462BA0(a1, a3, 0);
  v9 = sub_462BA0((int)a2, a3, 0);
  if ( v8 > v9 )
    return 1;
  if ( v8 < v9 )
    return 0;
  for ( i = 0; i < a3; ++i )
  {
    v6[i] = *(_WORD *)(a1 + 2 * i);
    v7[i] = a2[i];
  }
  sub_641E20(v6, a3);
  sub_641E20(v7, a3);
  for ( i = 0; i < a3; ++i )
  {
    v4 = sub_4630C0(v6, i, a3);
    if ( v4 > sub_4630C0(v7, i, a3) )
      return 1;
    v5 = sub_4630C0(v6, i, a3);
    if ( v5 < sub_4630C0(v7, i, a3) )
      return 0;
  }
  return 2;
}


//======================================================================
// sub_462F40
// entry 00462f40  size 336  status ok
//======================================================================

char *__cdecl sub_462F40(int a1, char *Destination)
{
  const char *v2; // eax
  char *result; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax

  switch ( a1 )
  {
    case 2:
      v11 = (const char *)sub_630F40("SID_POKER_PAIR");
      result = strcpy(Destination, v11);
      break;
    case 3:
      v10 = (const char *)sub_630F40("SID_POKER_TWOPAIR");
      result = strcpy(Destination, v10);
      break;
    case 4:
      v9 = (const char *)sub_630F40("SID_POKER_HAND_THREEOFAKIND");
      result = strcpy(Destination, v9);
      break;
    case 5:
      v8 = (const char *)sub_630F40("SID_POKER_STRAIGHT");
      result = strcpy(Destination, v8);
      break;
    case 6:
      v7 = (const char *)sub_630F40("SID_POKER_FLUSH");
      result = strcpy(Destination, v7);
      break;
    case 7:
      v6 = (const char *)sub_630F40("SID_POKER_FULLHOUSE");
      result = strcpy(Destination, v6);
      break;
    case 8:
      v5 = (const char *)sub_630F40("SID_POKER_HAND_FOUROFAKIND");
      result = strcpy(Destination, v5);
      break;
    case 9:
      v4 = (const char *)sub_630F40("SID_POKER_STRAIGHTFLUSH");
      result = strcpy(Destination, v4);
      break;
    case 10:
      v2 = (const char *)sub_630F40("SID_POKER_ROYALFLUSH");
      result = strcpy(Destination, v2);
      break;
    default:
      v12 = (const char *)sub_630F40("SID_POKER_HIGHCARD");
      result = strcpy(Destination, v12);
      break;
  }
  return result;
}


//======================================================================
// sub_4630C0
// entry 004630c0  size 1153  status ok
//======================================================================

int __cdecl sub_4630C0(int a1, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-34h]
  _WORD v5[20]; // [esp+4h] [ebp-30h] BYREF
  int i; // [esp+30h] [ebp-4h]
  int v7; // [esp+40h] [ebp+Ch]

  if ( a3 >= 21 )
    sub_5E9F20((char)"handSize < 21", "..\\Casino\\pokerai.cpp", 205);
  for ( i = 0; i < 20; ++i )
    v5[i] = 0;
  for ( i = 0; i < a3; ++i )
    v5[i] = *(_WORD *)(a1 + 2 * i);
  sub_641E20(v5, a3);
  v4 = sub_462BA0(a1, a3, 0) - 1;
  switch ( v4 )
  {
    case 0:
    case 5:
      return sub_641280(v5[a3 - 1 - a2]);
    case 1:
      if ( a2 )
        goto LABEL_71;
      i = 2;
      while ( 2 )
      {
        if ( i > 14 )
        {
LABEL_71:
          v7 = a2 - 2;
          if ( v7 < 0 )
            v7 = 0;
          for ( i = 14; ; --i )
          {
            if ( i < 2 )
            {
              sub_5E9F20((char)"false", "..\\Casino\\pokerai.cpp", 325);
              goto LABEL_81;
            }
            if ( sub_463A40(a1, i, a3) == 1 )
            {
              if ( !v7 )
                return i;
              --v7;
            }
          }
        }
        if ( sub_463A40(a1, i, a3) != 2 )
        {
          ++i;
          continue;
        }
        return i;
      }
    case 2:
      if ( a2 )
        goto LABEL_53;
      i = 14;
      while ( 2 )
      {
        if ( i < 2 )
        {
LABEL_53:
          if ( a2 == 1 )
          {
            for ( i = 2; i <= 14; ++i )
            {
              if ( sub_463A40(a1, i, a3) == 2 )
                return i;
            }
          }
          for ( i = 2; ; ++i )
          {
            if ( i > 14 )
            {
              sub_5E9F20((char)"false", "..\\Casino\\pokerai.cpp", 299);
              goto LABEL_81;
            }
            if ( sub_463A40(a1, i, a3) == 1 )
              break;
          }
          return i;
        }
        else
        {
          if ( sub_463A40(a1, i, a3) != 2 )
          {
            --i;
            continue;
          }
          return i;
        }
      }
    case 3:
      i = 14;
      while ( 2 )
      {
        if ( i < 2 )
        {
          for ( i = 2; ; ++i )
          {
            if ( i >= 14 )
            {
              sub_5E9F20((char)"false", "..\\Casino\\pokerai.cpp", 272);
              goto LABEL_81;
            }
            if ( sub_463A40(a1, i, a3) == 1 )
              break;
          }
          return i;
        }
        else if ( sub_463A40(a1, i, a3) != 3 || a2 )
        {
          if ( sub_463A40(a1, i, a3) != 1 || a2 != 1 )
          {
            --i;
            continue;
          }
          return i;
        }
        else
        {
          return i;
        }
      }
    case 4:
    case 8:
      return (unsigned __int16)v5[a3 - 1];
    case 6:
      i = 2;
      while ( 2 )
      {
        if ( i > 14 )
        {
          sub_5E9F20((char)"false", "..\\Casino\\pokerai.cpp", 247);
          return -1;
        }
        else if ( sub_463A40(a1, i, a3) != 3 || a2 )
        {
          if ( sub_463A40(a1, i, a3) != 2 || !a2 )
          {
            ++i;
            continue;
          }
          return i;
        }
        else
        {
          return i;
        }
      }
    case 7:
      i = 2;
      break;
    default:
LABEL_81:
      sub_5E9F20((char)"false", "..\\Casino\\pokerai.cpp", 329);
      return -1;
  }
  while ( i < 14 )
  {
    if ( sub_463A40(a1, i, a3) == 4 && !a2 )
      return i;
    if ( sub_463A40(a1, i, a3) == 1 && a2 != 1 )
      return i;
    ++i;
  }
  sub_5E9F20((char)"false", "..\\Casino\\pokerai.cpp", 233);
  return -1;
}


//======================================================================
// sub_463570
// entry 00463570  size 406  status ok
//======================================================================

void __cdecl sub_463570(int a1, _WORD *a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, int a7, int a8)
{
  int v8; // eax
  int v9; // [esp-4h] [ebp-10h]
  int v10; // [esp+0h] [ebp-Ch]
  __int16 v11; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  for ( i = 0; i < a7; ++i )
  {
    v9 = sub_641290(*(_WORD *)(a1 + 2 * i));
    v8 = sub_641280(*(_WORD *)(a1 + 2 * i));
    if ( (unsigned __int8)sub_642430(a2, a3, v8, v9) )
      sub_642210(a2, a3--, *(_WORD *)(a1 + 2 * i));
  }
  if ( a3 >= a7 )
  {
    if ( a3 <= a7 )
    {
      v10 = sub_462DA0(a1, a2, a7);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          ++*a4;
        }
        else if ( v10 == 2 )
        {
          ++*a6;
        }
      }
      else
      {
        ++*a5;
      }
    }
    else
    {
      for ( j = 0; j < a3; ++j )
      {
        if ( j >= a8 )
        {
          v11 = a2[j];
          sub_642210(a2, a3, v11);
          sub_463570(a1, a2, a3 - 1, a4, a5, a6, a7, j);
          sub_642130(a2, a3, v11, j);
        }
      }
    }
  }
}


//======================================================================
// sub_463710
// entry 00463710  size 78  status ok
//======================================================================

bool __cdecl sub_463710(__int16 *a1, int a2)
{
  if ( a2 != 5 )
    return 0;
  return (unsigned __int8)sub_463760(a1, 5) && sub_641280(*a1) == 10;
}


//======================================================================
// sub_463760
// entry 00463760  size 73  status ok
//======================================================================

bool __cdecl sub_463760(int a1, int a2)
{
  return (unsigned __int8)sub_4638A0(a1, a2) && (unsigned __int8)sub_463840(a1, a2);
}


//======================================================================
// sub_4637B0
// entry 004637b0  size 31  status ok
//======================================================================

bool __cdecl sub_4637B0(int a1, int a2)
{
  return sub_463AA0(a1, a2) == 4;
}


//======================================================================
// sub_4637D0
// entry 004637d0  size 106  status ok
//======================================================================

char __cdecl sub_4637D0(int a1, int a2)
{
  int v2; // eax
  int i; // [esp+0h] [ebp-4h]

  if ( (unsigned __int8)sub_463940(a1, a2) )
  {
    for ( i = 0; i < a2; ++i )
    {
      v2 = sub_641280(*(_WORD *)(a1 + 2 * i));
      if ( sub_463A40(a1, v2, a2) == 2 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_463840
// entry 00463840  size 90  status ok
//======================================================================

char __cdecl sub_463840(__int16 *a1, int a2)
{
  int v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = sub_641290(*a1);
  for ( i = 1; i < a2; ++i )
  {
    if ( sub_641290(a1[i]) != v3 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_4638A0
// entry 004638a0  size 145  status ok
//======================================================================

char __cdecl sub_4638A0(__int16 *a1, int a2)
{
  int v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = sub_641280(*a1);
  for ( i = 1; i < a2; ++i )
  {
    if ( sub_641280(a1[i]) != ++v3 && (i != a2 - 1 || v3 != a2 + 1 || sub_641280(a1[i]) != 14) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_463940
// entry 00463940  size 31  status ok
//======================================================================

bool __cdecl sub_463940(int a1, int a2)
{
  return sub_463AA0(a1, a2) == 3;
}


//======================================================================
// sub_463960
// entry 00463960  size 86  status ok
//======================================================================

BOOL __cdecl sub_463960(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = 0;
  for ( i = 2; i <= 14; ++i )
  {
    if ( sub_463A40(a1, i, a2) == 2 )
      ++v3;
  }
  return v3 == 2;
}


//======================================================================
// sub_4639C0
// entry 004639c0  size 31  status ok
//======================================================================

bool __cdecl sub_4639C0(int a1, int a2)
{
  return sub_463AA0(a1, a2) == 2;
}


//======================================================================
// sub_4639E0
// entry 004639e0  size 91  status ok
//======================================================================

int __cdecl sub_4639E0(int a1, int a2)
{
  int i; // [esp+0h] [ebp-4h]

  if ( !sub_4639C0(a1, 5) )
    return 0;
  for ( i = 1; i < 15; ++i )
  {
    if ( sub_463A40(a1, i, a2) == 2 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_463A40
// entry 00463a40  size 81  status ok
//======================================================================

int __cdecl sub_463A40(int a1, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( sub_641280(*(_WORD *)(a1 + 2 * i)) == a2 )
      ++v4;
  }
  return v4;
}


//======================================================================
// sub_463AA0
// entry 00463aa0  size 172  status ok
//======================================================================

int __cdecl sub_463AA0(int a1, int a2)
{
  int j; // [esp+0h] [ebp-14h]
  int v4; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v4 = 1;
  v6 = 1;
  for ( i = 0; i < a2; ++i )
  {
    v5 = sub_641280(*(_WORD *)(a1 + 2 * i));
    for ( j = 0; j < a2; ++j )
    {
      if ( i != j && v5 == sub_641280(*(_WORD *)(a1 + 2 * j)) )
        ++v4;
    }
    if ( v4 > v6 )
      v6 = v4;
    v4 = 1;
  }
  return v6;
}


//======================================================================
// sub_463B90
// entry 00463b90  size 213  status ok
//======================================================================

int __thiscall sub_463B90(_DWORD *this)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-1Ch]
  _AFX_OLE_STATE *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 2) )
  {
    v4 = (_AFX_OLE_STATE *)operator new(0x190u);
    if ( v4 )
      v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v4);
    else
      v2 = 0;
    *(this + 2) = v2;
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 112))(*(this + 2));
  sub_5EAF00(100001);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 2) + 176))(*(this + 2), 0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 64))(*(this + 2));
}


//======================================================================
// sub_463C70
// entry 00463c70  size 48  status ok
//======================================================================

int __thiscall sub_463C70(int this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &Card::`vftable';
  *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 8) = 0;
  return this;
}


//======================================================================
// sub_463CA0
// entry 00463ca0  size 152  status ok
//======================================================================

void __thiscall sub_463CA0(CNoTrackObject *this)
{
  *(_DWORD *)this = &Card::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 2))(*((_DWORD *)this + 2), 1);
    *((_DWORD *)this + 2) = 0;
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_463D40
// entry 00463d40  size 98  status ok
//======================================================================

int __thiscall sub_463D40(int this)
{
  sub_5EAF00(100001);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 176))(
    *(_DWORD *)(this + 8),
    *(_DWORD *)(this + 16));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 108))(*(_DWORD *)(this + 8), 100);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 116))(*(_DWORD *)(this + 8));
}


//======================================================================
// sub_463DB0
// entry 00463db0  size 124  status ok
//======================================================================

int __thiscall sub_463DB0(_DWORD **this, char a2)
{
  sub_5EAF00(100001);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 176))(*(this + 2), 53);
  if ( a2 )
    (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 108))(*(this + 2), 100);
  else
    (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 108))(*(this + 2), 9);
  return (*(int (__thiscall **)(_DWORD))(**(this + 2) + 116))(*(this + 2));
}


//======================================================================
// sub_463E70
// entry 00463e70  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_463E70(_DWORD *this, int a2)
{
  CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(a2);
  *this = &CardMotion::`vftable';
  return this;
}


//======================================================================
// sub_463EA0
// entry 00463ea0  size 68  status ok
//======================================================================

int __thiscall sub_463EA0(int this, int a2)
{
  sub_606A60(a2);
  *(_DWORD *)(this + 44) = CMediaType::IsFixedSize(*(CMediaType **)(this + 4));
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 108))(*(_DWORD *)(this + 4), 1005);
}


//======================================================================
// sub_463EF0
// entry 00463ef0  size 45  status ok
//======================================================================

int __thiscall sub_463EF0(int this)
{
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 108))(
    *(_DWORD *)(this + 4),
    *(_DWORD *)(this + 44));
  return sub_606DE0(this);
}


//======================================================================
// sub_463F80
// entry 00463f80  size 77  status ok
//======================================================================

_BYTE *__thiscall sub_463F80(_BYTE *this, _BYTE *a2)
{
  if ( (unsigned __int8)*this < (int)*(unsigned __int8 *)dword_7907A4 )
    *a2 = *this + 2;
  else
    *a2 = *(_BYTE *)dword_7913C8;
  return a2;
}


//======================================================================
// sub_463FD0
// entry 00463fd0  size 115  status ok
//======================================================================

_BYTE *__thiscall sub_463FD0(_BYTE *this, _BYTE *a2)
{
  if ( *this == *(_BYTE *)dword_79077C )
  {
    *a2 = *(_BYTE *)dword_7913E0;
    return a2;
  }
  else
  {
    if ( (unsigned __int8)*this < (int)*(unsigned __int8 *)dword_7907A4 )
      *a2 = *this + 2;
    else
      *a2 = *(_BYTE *)dword_7913B4;
    return a2;
  }
}


//======================================================================
// sub_464050
// entry 00464050  size 37  status ok
//======================================================================

bool __thiscall sub_464050(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this == *a2;
}


//======================================================================
// sub_4640B0
// entry 004640b0  size 37  status ok
//======================================================================

bool __thiscall sub_4640B0(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this == *a2;
}


//======================================================================
// sub_4640E0
// entry 004640e0  size 37  status ok
//======================================================================

bool __thiscall sub_4640E0(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this != *a2;
}


//======================================================================
// sub_464110
// entry 00464110  size 20  status ok
//======================================================================

void __thiscall sub_464110(_BYTE *this)
{
  *this = -1;
}


//======================================================================
// sub_464130
// entry 00464130  size 211  status ok
//======================================================================

_BYTE *__thiscall sub_464130(_BYTE *this, _BYTE *a2, _BYTE *a3)
{
  if ( (*a2 == byte_79077B || *a3 == byte_79074F) && (*a2 != byte_79077B || *a3 != byte_79074F) )
    sub_5E9F20(
      (char)"((pcr.ucRank != WildRank.ucRank) && (pcs.ucSuit != WildSuit.ucSuit)) || ((pcr.ucRank == WildRank.ucRank) && "
            "(pcs.ucSuit == WildSuit.ucSuit))",
      "..\\Casino\\PokerCard.cpp",
      119);
  if ( (*a2 == byte_7907A2 || *a3 == byte_79075E) && (*a2 != byte_7907A2 || *a3 != byte_79075E) )
    sub_5E9F20(
      (char)"((pcr.ucRank != BugRank.ucRank) && (pcs.ucSuit != BugSuit.ucSuit)) || ((pcr.ucRank == BugRank.ucRank) && (pc"
            "s.ucSuit == BugSuit.ucSuit))",
      "..\\Casino\\PokerCard.cpp",
      121);
  *this = *a3 + *a2;
  return this;
}


//======================================================================
// sub_464220
// entry 00464220  size 214  status ok
//======================================================================

int __thiscall sub_464220(_BYTE *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int result; // eax

  if ( (*a2 == (unsigned __int8)byte_79077B || *a3 == (unsigned __int8)byte_79074F)
    && (*a2 != (unsigned __int8)byte_79077B || *a3 != (unsigned __int8)byte_79074F) )
  {
    sub_5E9F20(
      (char)"((pcr.ucRank != WildRank.ucRank) && (pcs.ucSuit != WildSuit.ucSuit)) || ((pcr.ucRank == WildRank.ucRank) && "
            "(pcs.ucSuit == WildSuit.ucSuit))",
      "..\\Casino\\PokerCard.cpp",
      136);
  }
  if ( (*a2 == (unsigned __int8)byte_7907A2 || *a3 == (unsigned __int8)byte_79075E)
    && (*a2 != (unsigned __int8)byte_7907A2 || *a3 != (unsigned __int8)byte_79075E) )
  {
    sub_5E9F20(
      (char)"((pcr.ucRank != BugRank.ucRank) && (pcs.ucSuit != BugSuit.ucSuit)) || ((pcr.ucRank == BugRank.ucRank) && (pc"
            "s.ucSuit == BugSuit.ucSuit))",
      "..\\Casino\\PokerCard.cpp",
      138);
  }
  result = *a3 + *a2;
  *this = result;
  return result;
}


//======================================================================
// sub_464300
// entry 00464300  size 115  status ok
//======================================================================

int __thiscall sub_464300(_BYTE *this, unsigned __int8 *a2)
{
  int result; // eax

  if ( *a2 == (unsigned __int8)byte_79074F )
    sub_5E9F20((char)"pcs.ucSuit != WildSuit.ucSuit", "..\\Casino\\PokerCard.cpp", 146);
  if ( *a2 == (unsigned __int8)byte_79075E )
    sub_5E9F20((char)"pcs.ucSuit != BugSuit.ucSuit", "..\\Casino\\PokerCard.cpp", 147);
  result = *a2 + (*this & 0xF);
  *this = result;
  return result;
}


//======================================================================
// sub_464380
// entry 00464380  size 117  status ok
//======================================================================

int __thiscall sub_464380(_BYTE *this, unsigned __int8 *a2)
{
  int result; // eax

  if ( *a2 == (unsigned __int8)byte_79077B )
    sub_5E9F20((char)"pcr.ucRank != WildRank.ucRank", "..\\Casino\\PokerCard.cpp", 155);
  if ( *a2 == (unsigned __int8)byte_7907A2 )
    sub_5E9F20((char)"pcr.ucRank != BugRank.ucRank", "..\\Casino\\PokerCard.cpp", 156);
  result = *a2 + (*this & 0xF0);
  *this = result;
  return result;
}


//======================================================================
// sub_464400
// entry 00464400  size 121  status ok
//======================================================================

_BYTE *__thiscall sub_464400(_BYTE *this, _BYTE *a2)
{
  if ( (*this & 0xF) == 0xF )
    sub_5E9F20((char)"(ucSuitAndRank & 0x0Fu) != 0x0Fu", "..\\Casino\\PokerCard.cpp", 162);
  if ( (*this & 0xF0) == 0xF0 )
    sub_5E9F20((char)"(ucSuitAndRank & 0xF0u) != 0xF0u", "..\\Casino\\PokerCard.cpp", 163);
  *a2 = *this & 0xF0;
  return a2;
}


//======================================================================
// sub_464480
// entry 00464480  size 118  status ok
//======================================================================

_BYTE *__thiscall sub_464480(_BYTE *this, _BYTE *a2)
{
  if ( (*this & 0xF) == 0xF )
    sub_5E9F20((char)"(ucSuitAndRank & 0x0Fu) != 0x0Fu", "..\\Casino\\PokerCard.cpp", 170);
  if ( (*this & 0xF0) == 0xF0 )
    sub_5E9F20((char)"(ucSuitAndRank & 0xF0u) != 0xF0u", "..\\Casino\\PokerCard.cpp", 171);
  *a2 = *this & 0xF;
  return a2;
}


//======================================================================
// sub_464500
// entry 00464500  size 197  status ok
//======================================================================

bool __thiscall sub_464500(_BYTE *this, _BYTE *a2)
{
  if ( (*this & 0xF) == 0xF )
    sub_5E9F20((char)"(ucSuitAndRank & 0x0Fu) != 0x0Fu", "..\\Casino\\PokerCard.cpp", 180);
  if ( (*this & 0xF0) == 0xF0 )
    sub_5E9F20((char)"(ucSuitAndRank & 0xF0u) != 0xF0u", "..\\Casino\\PokerCard.cpp", 181);
  if ( (*a2 & 0xF) == 0xF )
    sub_5E9F20((char)"(pcRHS.ucSuitAndRank & 0x0Fu) != 0x0Fu", "..\\Casino\\PokerCard.cpp", 182);
  if ( (*a2 & 0xF0) == 0xF0 )
    sub_5E9F20((char)"(pcRHS.ucSuitAndRank & 0xF0u) != 0xF0u", "..\\Casino\\PokerCard.cpp", 183);
  return *this == *a2;
}


//======================================================================
// sub_4646A0
// entry 004646a0  size 63  status ok
//======================================================================

_WORD *__thiscall sub_4646A0(_WORD *this)
{
  *this = -1;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 9) = 0;
  return this;
}


//======================================================================
// sub_4646F0
// entry 004646f0  size 60  status ok
//======================================================================

_WORD *__thiscall sub_4646F0(_WORD *this)
{
  *this = 0x1FFF;
  *(this + 1) = 0x1FFF;
  *(this + 2) = 0x1FFF;
  *(this + 3) = 0x1FFF;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 9) = 0;
  return this;
}


//======================================================================
// sub_464770
// entry 00464770  size 233  status ok
//======================================================================

unsigned __int8 *__thiscall sub_464770(unsigned __int8 *this, _BYTE *a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v4; // eax
  int v5; // edx
  unsigned __int8 *v6; // [esp-4h] [ebp-10h]
  unsigned __int8 *v7; // [esp-4h] [ebp-10h]
  _WORD *v8; // [esp+0h] [ebp-Ch]
  char v10; // [esp+9h] [ebp-3h] BYREF
  char v11; // [esp+Ah] [ebp-2h] BYREF
  char v12; // [esp+Bh] [ebp-1h] BYREF

  if ( *(unsigned __int16 *)this == 0xFFFF )
    sub_5E9F20((char)"usSpades != 0xFFFFu", "..\\Casino\\PokerCardBag.cpp", 46);
  v6 = (unsigned __int8 *)dword_79077C;
  v2 = sub_464480(a2, &v12);
  if ( sub_464050(v2, v6) )
  {
    ++*(this + 9);
    return this;
  }
  else
  {
    v7 = (unsigned __int8 *)dword_7907B4;
    v4 = sub_464480(a2, &v11);
    if ( sub_464050(v4, v7) )
    {
      if ( *(this + 8) > 1u )
        sub_5E9F20((char)"ucBugs <= 0x1u", "..\\Casino\\PokerCardBag.cpp", 52);
      ++*(this + 8);
      return this;
    }
    else
    {
      v8 = (_WORD *)sub_464C70(a2);
      v5 = 1 << *sub_464480(a2, &v10);
      *v8 |= v5;
      return (unsigned __int8 *)v8;
    }
  }
}


//======================================================================
// sub_464860
// entry 00464860  size 70  status ok
//======================================================================

int __thiscall sub_464860(unsigned __int8 *this, int a2)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = *(__int16 *)(a2 + 4);
    if ( i >= result )
      break;
    sub_464770(this, (_BYTE *)(*(_DWORD *)a2 + i));
  }
  return result;
}


//======================================================================
// sub_4648B0
// entry 004648b0  size 270  status ok
//======================================================================

_WORD *__thiscall sub_4648B0(_BYTE *this, _BYTE *a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v4; // eax
  int v5; // edx
  unsigned __int8 *v6; // [esp-4h] [ebp-10h]
  unsigned __int8 *v7; // [esp-4h] [ebp-10h]
  _WORD *v8; // [esp+0h] [ebp-Ch]
  char v10; // [esp+9h] [ebp-3h] BYREF
  char v11; // [esp+Ah] [ebp-2h] BYREF
  char v12; // [esp+Bh] [ebp-1h] BYREF

  if ( *(unsigned __int16 *)this == 0xFFFF )
    sub_5E9F20((char)"usSpades != 0xFFFFu", "..\\Casino\\PokerCardBag.cpp", 71);
  v6 = (unsigned __int8 *)dword_79077C;
  v2 = sub_464480(a2, &v12);
  if ( sub_464050(v2, v6) )
  {
    if ( !*(this + 9) )
      sub_5E9F20((char)"ucWilds", "..\\Casino\\PokerCardBag.cpp", 75);
    --*(this + 9);
    return this;
  }
  else
  {
    v7 = (unsigned __int8 *)dword_7907B4;
    v4 = sub_464480(a2, &v11);
    if ( sub_464050(v4, v7) )
    {
      if ( !*(this + 8) )
        sub_5E9F20((char)"ucBugs", "..\\Casino\\PokerCardBag.cpp", 80);
      --*(this + 8);
      return this;
    }
    else
    {
      v8 = (_WORD *)sub_464C70(a2);
      v5 = (0x1FFF - (1 << *sub_464480(a2, &v10))) & (unsigned __int16)*v8;
      *v8 = v5;
      return v8;
    }
  }
}


//======================================================================
// sub_4649C0
// entry 004649c0  size 70  status ok
//======================================================================

int __thiscall sub_4649C0(_BYTE *this, int a2)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = *(__int16 *)(a2 + 4);
    if ( i >= result )
      break;
    sub_4648B0(this, (_BYTE *)(*(_DWORD *)a2 + i));
  }
  return result;
}


//======================================================================
// sub_464A10
// entry 00464a10  size 373  status ok
//======================================================================

char __thiscall sub_464A10(unsigned __int16 *this, _BYTE *a2)
{
  if ( *this == 0xFFFF )
    sub_5E9F20((char)"usSpades != 0xFFFFu", "..\\Casino\\PokerCardBag.cpp", 99);
  if ( *this )
  {
    sub_464300(a2, (unsigned __int8 *)dword_79076C);
    sub_464E10(this, a2);
    return 1;
  }
  else if ( *(this + 1) )
  {
    sub_464300(a2, (unsigned __int8 *)dword_790754);
    sub_464E10(this + 1, a2);
    return 1;
  }
  else if ( *(this + 2) )
  {
    sub_464300(a2, (unsigned __int8 *)dword_790764);
    sub_464E10(this + 2, a2);
    return 1;
  }
  else if ( *(this + 3) )
  {
    sub_464300(a2, (unsigned __int8 *)dword_790770);
    sub_464E10(this + 3, a2);
    return 1;
  }
  else if ( *((_BYTE *)this + 8) )
  {
    sub_464220(a2, (unsigned __int8 *)dword_7907B4, (unsigned __int8 *)dword_790784);
    --*((_BYTE *)this + 8);
    return 1;
  }
  else if ( *((_BYTE *)this + 9) )
  {
    sub_464220(a2, (unsigned __int8 *)dword_79077C, (unsigned __int8 *)dword_790780);
    --*((_BYTE *)this + 9);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_464B90
// entry 00464b90  size 214  status ok
//======================================================================

bool __thiscall sub_464B90(_BYTE *this, _BYTE *a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v4; // eax
  int v5; // esi
  unsigned __int8 *v6; // [esp-4h] [ebp-10h]
  unsigned __int8 *v7; // [esp-4h] [ebp-10h]
  char v9; // [esp+9h] [ebp-3h] BYREF
  char v10; // [esp+Ah] [ebp-2h] BYREF
  char v11; // [esp+Bh] [ebp-1h] BYREF

  if ( *(unsigned __int16 *)this == 0xFFFF )
    sub_5E9F20((char)"usSpades != 0xFFFFu", "..\\Casino\\PokerCardBag.cpp", 145);
  v6 = (unsigned __int8 *)dword_79077C;
  v2 = sub_464480(a2, &v11);
  if ( sub_464050(v2, v6) )
    return *(this + 9) != 0;
  v7 = (unsigned __int8 *)dword_7907B4;
  v4 = sub_464480(a2, &v10);
  if ( sub_464050(v4, v7) )
    return *(this + 8) != 0;
  v5 = *(unsigned __int16 *)sub_464D40(a2);
  return ((1 << *sub_464480(a2, &v9)) & v5) != 0;
}


//======================================================================
// sub_464C70
// entry 00464c70  size 202  status ok
//======================================================================

char *__thiscall sub_464C70(char *this, _BYTE *a2)
{
  char v4; // [esp+4h] [ebp-4h] BYREF
  char v5; // [esp+5h] [ebp-3h] BYREF
  char v6; // [esp+6h] [ebp-2h] BYREF
  char v7; // [esp+7h] [ebp-1h] BYREF

  if ( *sub_464400(a2, &v7) == *(_BYTE *)dword_79076C )
    return this;
  if ( *sub_464400(a2, &v6) == *(_BYTE *)dword_790754 )
    return this + 2;
  if ( *sub_464400(a2, &v5) == *(_BYTE *)dword_790764 )
    return this + 4;
  if ( *sub_464400(a2, &v4) != *(_BYTE *)dword_790770 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerCardBag.cpp", 181);
  return this + 6;
}


//======================================================================
// sub_464D40
// entry 00464d40  size 202  status ok
//======================================================================

char *__thiscall sub_464D40(char *this, _BYTE *a2)
{
  char v4; // [esp+4h] [ebp-4h] BYREF
  char v5; // [esp+5h] [ebp-3h] BYREF
  char v6; // [esp+6h] [ebp-2h] BYREF
  char v7; // [esp+7h] [ebp-1h] BYREF

  if ( *sub_464400(a2, &v7) == *(_BYTE *)dword_79076C )
    return this;
  if ( *sub_464400(a2, &v6) == *(_BYTE *)dword_790754 )
    return this + 2;
  if ( *sub_464400(a2, &v5) == *(_BYTE *)dword_790764 )
    return this + 4;
  if ( *sub_464400(a2, &v4) != *(_BYTE *)dword_790770 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerCardBag.cpp", 200);
  return this + 6;
}


//======================================================================
// sub_464E10
// entry 00464e10  size 181  status ok
//======================================================================

int __cdecl sub_464E10(_WORD *a1, _BYTE *a2)
{
  int v2; // ecx
  int result; // eax
  __int16 v4; // [esp+0h] [ebp-2h] BYREF

  v4 = HIWORD(v2);
  if ( !*a1 )
    sub_5E9F20((char)"usSuitBag != 0x0000u", "..\\Casino\\PokerCardBag.cpp", 210);
  HIBYTE(v4) = *(_BYTE *)dword_790758;
  while ( HIBYTE(v4) <= (int)*(unsigned __int8 *)dword_7907A4 )
  {
    if ( ((1 << SHIBYTE(v4)) & (unsigned __int16)*a1) != 0 )
    {
      LOBYTE(v4) = HIBYTE(v4);
      sub_464380(a2, (unsigned __int8 *)&v4);
      result = (0x1FFF - (1 << SHIBYTE(v4))) & (unsigned __int16)*a1;
      *a1 = result;
      return result;
    }
    ++HIBYTE(v4);
  }
  return sub_5E9F20((char)"0", "..\\Casino\\PokerCardBag.cpp", 221);
}


//======================================================================
// sub_464ED0
// entry 00464ed0  size 246  status ok
//======================================================================

int *__thiscall sub_464ED0(int *this, int a2, int a3)
{
  int i; // [esp+8h] [ebp-4h]

  if ( a2 <= 0 )
    sub_5E9F20((char)"lObjectsAvailableIn > 0", "..\\Casino\\PokerCombinations.cpp", 9);
  if ( a3 <= 0 )
    sub_5E9F20((char)"lGetHowManyIn > 0", "..\\Casino\\PokerCombinations.cpp", 10);
  if ( a2 < a3 )
    sub_5E9F20((char)"lObjectsAvailableIn >= lGetHowManyIn", "..\\Casino\\PokerCombinations.cpp", 11);
  *this = a2;
  *(this + 1) = a3;
  *(this + 2) = (int)operator new(4 * *(this + 1));
  if ( !*(this + 2) )
    sub_5E9F20((char)"plIndices", "..\\Casino\\PokerCombinations.cpp", 17);
  for ( i = 0; i < *(this + 1); ++i )
    *(_DWORD *)(*(this + 2) + 4 * i) = 0;
  *(_DWORD *)*(this + 2) = -1;
  return this;
}


//======================================================================
// sub_464FD0
// entry 00464fd0  size 34  status ok
//======================================================================

void __thiscall sub_464FD0(void **this)
{
  operator delete(*(this + 2));
}


//======================================================================
// sub_465000
// entry 00465000  size 264  status ok
//======================================================================

char __thiscall sub_465000(int *this)
{
  int j; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  if ( *(_DWORD *)*(this + 2) == -1 )
  {
    for ( i = 0; i < *(this + 1); ++i )
      *(_DWORD *)(*(this + 2) + 4 * i) = i;
    return 1;
  }
  else
  {
    v4 = *(this + 1) - 1;
    v6 = *this;
    while ( *(_DWORD *)(*(this + 2) + 4 * v4) + 1 == v6 )
    {
      v6 = *(_DWORD *)(*(this + 2) + 4 * v4--);
      if ( v4 < 0 )
        return 0;
    }
    v5 = *(_DWORD *)(*(this + 2) + 4 * v4) + 1;
    for ( j = v4; j < *(this + 1); ++j )
    {
      *(_DWORD *)(*(this + 2) + 4 * j) = v5 + j - v4;
      if ( *(_DWORD *)(*(this + 2) + 4 * j) >= *this )
        sub_5E9F20((char)"plIndices[lIndex]<lObjectsAvailable", "..\\Casino\\PokerCombinations.cpp", 56);
    }
    return 1;
  }
}


//======================================================================
// sub_465110
// entry 00465110  size 113  status ok
//======================================================================

int __thiscall sub_465110(int this, int a2)
{
  if ( **(_DWORD **)(this + 8) == -1 )
    sub_5E9F20((char)"plIndices[0] != -1L", "..\\Casino\\PokerCombinations.cpp", 66);
  if ( a2 < 0 )
    sub_5E9F20((char)"lIndex>=0", "..\\Casino\\PokerCombinations.cpp", 67);
  if ( a2 >= *(_DWORD *)(this + 4) )
    sub_5E9F20((char)"lIndex<lGetHowMany", "..\\Casino\\PokerCombinations.cpp", 68);
  return *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * a2);
}


//======================================================================
// sub_465190
// entry 00465190  size 229  status ok
//======================================================================

_DWORD *__thiscall sub_465190(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-24h]
  void *v4; // [esp+Ch] [ebp-1Ch]
  int j; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]

  sub_60C5F0();
  *this = &Deck::`vftable';
  sub_60C5F0();
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 13; ++j )
    {
      v4 = operator new(0x18u);
      if ( v4 )
        v2 = sub_463C70((int)v4);
      else
        v2 = 0;
      sub_60C7D0(v2);
    }
  }
  sub_465650(this);
  return this;
}


//======================================================================
// sub_465280
// entry 00465280  size 184  status ok
//======================================================================

int __thiscall sub_465280(CRecentFileList *this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &Deck::`vftable';
  while ( CRecentFileList::GetSize(this) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))sub_60CA40(0);
    sub_60C890(v3);
    if ( v3 )
      (**v3)(v3, 1);
  }
  sub_60C6A0();
  return sub_60C6A0();
}


//======================================================================
// sub_465390
// entry 00465390  size 237  status ok
//======================================================================

int __thiscall sub_465390(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-20h]
  void *v5; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  if ( !a2 )
    return sub_465480(this);
  result = (int)this;
  if ( *(this + 8) != a2 )
  {
    if ( *(this + 8) )
      sub_465480(this);
    *(this + 8) = a2;
    for ( i = 0; ; ++i )
    {
      result = (int)this;
      if ( i >= *(this + 8) )
        break;
      v5 = operator new(0x18u);
      if ( v5 )
        v3 = sub_463C70((int)v5);
      else
        v3 = 0;
      sub_60C7D0(v3);
      *(_DWORD *)(sub_60CA40(0) + 4) = 12;
    }
  }
  return result;
}


//======================================================================
// sub_465480
// entry 00465480  size 73  status ok
//======================================================================

_DWORD *__thiscall sub_465480(_DWORD *this)
{
  int v1; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < *(this + 8); ++i )
  {
    v1 = sub_60CA40(0);
    sub_60C890(v1);
  }
  *(this + 8) = 0;
  return this;
}


//======================================================================
// sub_4654D0
// entry 004654d0  size 171  status ok
//======================================================================

int __thiscall sub_4654D0(CRecentFileList *this)
{
  int result; // eax
  int Size; // eax
  int j; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  result = sub_47FAE0(dword_791364);
  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < CRecentFileList::GetSize(this); ++j )
    {
      v7 = sub_60CA40(j);
      Size = CRecentFileList::GetSize(this);
      v6 = sub_62FBF0(Size - 1);
      v8 = sub_60CA40(v6);
      sub_60CA70(j, v8);
      sub_60CA70(v6, v7);
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_465650
// entry 00465650  size 220  status ok
//======================================================================

void sub_465650()
{
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v2; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 13; ++j )
    {
      v2 = sub_60CA40(j + 13 * i);
      if ( j + 1 <= 10 )
        *(_DWORD *)(v2 + 4) = j + 1;
      else
        *(_DWORD *)(v2 + 4) = 10;
      *(_DWORD *)(v2 + 12) = j;
      if ( !j )
      {
        *(_DWORD *)(v2 + 4) = 11;
        if ( sub_47CE60(dword_791364) != 6 && sub_47CE60(dword_791364) != 13 )
          *(_DWORD *)(v2 + 12) = 13;
      }
      unknown_libname_505(j + 13 * i);
    }
  }
}


//======================================================================
// sub_465760
// entry 00465760  size 139  status ok
//======================================================================

_DWORD *__thiscall sub_465760(_DWORD *this)
{
  sub_518900(0, 0);
  *this = &DealDialog::`vftable';
  *(this + 120) = 0;
  *(this + 121) = 0;
  *(this + 122) = 0;
  *(this + 123) = 0;
  *(this + 124) = 0;
  *(this + 125) = 0;
  *(this + 126) = 0;
  *(this + 127) = 0;
  return this;
}


//======================================================================
// sub_4657F0
// entry 004657f0  size 582  status ok
//======================================================================

int __thiscall sub_4657F0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&DealDialog::`vftable';
  if ( *(this + 120) )
    (***(this + 120))(*(this + 120), 1);
  if ( *(this + 121) )
    (***(this + 121))(*(this + 121), 1);
  if ( *(this + 122) )
    (***(this + 122))(*(this + 122), 1);
  if ( *(this + 123) )
    (***(this + 123))(*(this + 123), 1);
  if ( *(this + 124) )
    (***(this + 124))(*(this + 124), 1);
  if ( *(this + 125) )
    (***(this + 125))(*(this + 125), 1);
  if ( *(this + 126) )
    (***(this + 126))(*(this + 126), 1);
  if ( *(this + 127) )
    (***(this + 127))(*(this + 127), 1);
  return sub_518980();
}


//======================================================================
// sub_465A40
// entry 00465a40  size 836  status ok
//======================================================================

int __thiscall sub_465A40(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-34h]
  int v8; // [esp+8h] [ebp-30h]
  int v9; // [esp+Ch] [ebp-2Ch]
  void *v11; // [esp+14h] [ebp-24h]
  void *v12; // [esp+1Ch] [ebp-1Ch]

  sub_5F83D0(1057, 0);
  sub_5F7340(0, 20);
  sub_518AC0(0);
  if ( operator new(0x1E0u) )
    v9 = sub_466FB0(this);
  else
    v9 = 0;
  *(this + 120) = v9;
  *(_DWORD *)(*(this + 120) + 4) = this;
  sub_5EAE80(3200229, 46, 58, 10, -1);
  v1 = sub_630F40("SID_POKER_DEAL");
  (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 120) + 220))(
    *(this + 120),
    v1,
    72,
    75,
    74,
    -1,
    0,
    0);
  sub_6026F0(100);
  sub_602740(13);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120) + 204))(*(this + 120));
  v12 = operator new(0x1D0u);
  if ( v12 )
  {
    sub_5EC5A0(v12);
    v8 = v2;
  }
  else
  {
    v8 = 0;
  }
  *(this + 121) = v8;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 121) + 108))(*(this + 121), 10);
  v3 = sub_5F8550(this);
  sub_5ECC60(v3);
  sub_5ECCB0(15);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 121) + 68))(*(this + 121), -3, 21);
  v11 = operator new(0x1D0u);
  if ( v11 )
  {
    sub_5EC5A0(v11);
    v7 = v4;
  }
  else
  {
    v7 = 0;
  }
  *(this + 122) = v7;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 122) + 108))(*(this + 122), 10);
  v5 = sub_5F8550(this);
  sub_5ECC60(v5);
  sub_5ECCB0(30);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 122) + 68))(*(this + 122), -9, 26);
  sub_5199C0(*(this + 120), 1);
  sub_519960(*(this + 121), 1);
  return sub_519960(*(this + 122), 1);
}


//======================================================================
// sub_465D90
// entry 00465d90  size 345  status ok
//======================================================================

int __thiscall sub_465D90(_DWORD **this)
{
  const char *v1; // eax
  char v4[64]; // [esp+4h] [ebp-190h] BYREF
  char v5[68]; // [esp+44h] [ebp-150h] BYREF
  int v6; // [esp+88h] [ebp-10Ch] BYREF
  char Buffer[256]; // [esp+8Ch] [ebp-108h] BYREF
  _BYTE v8[4]; // [esp+190h] [ebp-4h] BYREF

  sub_47CE00(&v6, v8);
  sub_47BC40(v6 / 2);
  sub_47BC80(v6 / 2);
  sub_47BCC0(v6);
  sub_47BD40(v6);
  sub_47BD80(v6);
  sub_47BD00(2 * v6);
  sub_47BDC0(2 * v6);
  sub_6311E0(v6, v4);
  sub_6311E0(2 * v6, v5);
  v1 = (const char *)sub_630F40("SID_POKER_EARLYLATE_FORMAT");
  sprintf(Buffer, v1, v4, v5);
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 122) + 180))(*(this + 122), Buffer);
  return sub_5F85D0(this);
}


//======================================================================
// sub_465EF0
// entry 00465ef0  size 2306  status ok
//======================================================================

int __thiscall sub_465EF0(_DWORD *this)
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
  int v12; // [esp+4h] [ebp-70h]
  int v13; // [esp+8h] [ebp-6Ch]
  int v14; // [esp+Ch] [ebp-68h]
  int v15; // [esp+10h] [ebp-64h]
  int v16; // [esp+14h] [ebp-60h]
  int v17; // [esp+18h] [ebp-5Ch]
  int v18; // [esp+1Ch] [ebp-58h]
  int v19; // [esp+20h] [ebp-54h]
  void *v21; // [esp+28h] [ebp-4Ch]
  void *v22; // [esp+30h] [ebp-44h]
  void *v23; // [esp+38h] [ebp-3Ch]
  void *v24; // [esp+40h] [ebp-34h]
  void *v25; // [esp+48h] [ebp-2Ch]
  void *v26; // [esp+50h] [ebp-24h]

  sub_5F83D0(3205115, 0);
  sub_5F7340(0, 20);
  sub_518AC0(0);
  if ( operator new(0x1E0u) )
    v19 = sub_466FB0(this);
  else
    v19 = 0;
  *(this + 120) = v19;
  *(_DWORD *)(*(this + 120) + 4) = this;
  sub_5EAE80(3200229, 5, 43, 10, -1);
  v1 = sub_630F40("SID_POKER_DEAL");
  (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 120) + 220))(
    *(this + 120),
    v1,
    72,
    75,
    74,
    -1,
    0,
    0);
  sub_6026F0(100);
  sub_602740(13);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120) + 204))(*(this + 120));
  if ( operator new(0x1E0u) )
    v18 = sub_466F00(this);
  else
    v18 = 0;
  *(this + 123) = v18;
  *(_DWORD *)(*(this + 123) + 4) = this;
  sub_5EAE80(3200222, 5, 58, 10, -1);
  v2 = sub_630F40("SID_POKERTOURNAMENT_LEAVE");
  (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 123) + 220))(
    *(this + 123),
    v2,
    72,
    75,
    74,
    -1,
    0,
    0);
  sub_6026F0(108);
  sub_602740(13);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 123) + 204))(*(this + 123));
  v26 = operator new(0x1D0u);
  if ( v26 )
  {
    sub_5EC5A0(v26);
    v17 = v3;
  }
  else
  {
    v17 = 0;
  }
  *(this + 121) = v17;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 121) + 108))(*(this + 121), 10);
  v4 = sub_5F8550(this);
  sub_5ECC60(v4);
  sub_5ECCB0(15);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 121) + 68))(*(this + 121), -3, 21);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 121) + 112))(*(this + 121));
  v25 = operator new(0x1D0u);
  if ( v25 )
  {
    sub_5EC5A0(v25);
    v16 = v5;
  }
  else
  {
    v16 = 0;
  }
  *(this + 122) = v16;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 122) + 108))(*(this + 122), 10);
  v6 = sub_5F8550(this);
  sub_5ECC60(v6);
  sub_5ECCB0(30);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 122) + 68))(*(this + 122), -9, 26);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 122) + 112))(*(this + 122));
  v24 = operator new(0x1D0u);
  if ( v24 )
  {
    sub_5EC5A0(v24);
    v15 = v7;
  }
  else
  {
    v15 = 0;
  }
  *(this + 124) = v15;
  *(_DWORD *)(*(this + 124) + 4) = this;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 124) + 108))(*(this + 124), 10);
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 124) + 180))(*(this + 124), &Source);
  sub_5ECC60(170);
  sub_5ECCB0(16);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 124) + 68))(*(this + 124), 125, 45);
  v23 = operator new(0x1D0u);
  if ( v23 )
  {
    sub_5EC5A0(v23);
    v14 = v8;
  }
  else
  {
    v14 = 0;
  }
  *(this + 125) = v14;
  *(_DWORD *)(*(this + 125) + 4) = this;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 125) + 108))(*(this + 125), 10);
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 125) + 180))(*(this + 125), &Source);
  sub_5ECC60(170);
  sub_5ECCB0(16);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 125) + 68))(*(this + 125), 125, 65);
  v22 = operator new(0x1D0u);
  if ( v22 )
  {
    sub_5EC5A0(v22);
    v13 = v9;
  }
  else
  {
    v13 = 0;
  }
  *(this + 126) = v13;
  *(_DWORD *)(*(this + 126) + 4) = this;
  sub_5ECD00(31, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 126) + 108))(*(this + 126), 10);
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 126) + 180))(*(this + 126), &Source);
  sub_5ECC60(170);
  sub_5ECCB0(16);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 126) + 68))(*(this + 126), 125, 85);
  v21 = operator new(0x1D0u);
  if ( v21 )
  {
    sub_5EC5A0(v21);
    v12 = v10;
  }
  else
  {
    v12 = 0;
  }
  *(this + 127) = v12;
  *(_DWORD *)(*(this + 127) + 4) = this;
  sub_5ECD00(35, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 127) + 108))(*(this + 127), 10);
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 127) + 180))(*(this + 127), &Source);
  sub_5ECC60(250);
  sub_5ECCB0(45);
  sub_5EF310(1);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 127) + 68))(*(this + 127), 6, 87);
  sub_5199C0(*(this + 120), 1);
  sub_519900(*(this + 123), 0);
  sub_519960(*(this + 121), 0);
  sub_519960(*(this + 122), 0);
  sub_519960(*(this + 124), 1);
  sub_519960(*(this + 125), 1);
  sub_519960(*(this + 126), 1);
  sub_519960(*(this + 127), 0);
  return sub_466800(0);
}


//======================================================================
// sub_466800
// entry 00466800  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_466800(_BYTE *this, char a2)
{
  *(this + 512) = a2;
  return this;
}


//======================================================================
// sub_466820
// entry 00466820  size 1600  status ok
//======================================================================

int __thiscall sub_466820(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  char v11[64]; // [esp+4h] [ebp-190h] BYREF
  char v12[67]; // [esp+44h] [ebp-150h] BYREF
  int v14; // [esp+88h] [ebp-10Ch] BYREF
  char Buffer[256]; // [esp+8Ch] [ebp-108h] BYREF
  _BYTE v16[4]; // [esp+190h] [ebp-4h] BYREF

  sub_47CE00(&v14, v16);
  sub_47BC40(v14 / 2);
  sub_47BC80(v14 / 2);
  sub_47BCC0(v14);
  sub_47BD40(v14);
  sub_47BD80(v14);
  sub_47BD00(2 * v14);
  sub_47BDC0(2 * v14);
  sub_6311E0(v14, v11);
  sub_6311E0(2 * v14, v12);
  if ( (unsigned __int8)sub_480F80(dword_791364) )
  {
    v1 = sub_630F40("SID_POKERTOURNAMENT_WATCH");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 224))(*(_DWORD *)(this + 480), v1);
    sub_6026F0(119);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 480) + 68))(*(_DWORD *)(this + 480), 5, 30);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 492) + 68))(*(_DWORD *)(this + 492), 5, 58);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 116))(*(_DWORD *)(this + 492));
    v2 = sub_630F40("SID_POKERTOURNAMENT_WATCH_INFO");
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 480) + 68))(*(_DWORD *)(this + 480), 5, 43);
    v3 = sub_630F40("SID_POKER_DEAL");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 224))(*(_DWORD *)(this + 480), v3);
    sub_6026F0(100);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 112))(*(_DWORD *)(this + 492));
    v2 = sub_630F40("SID_POKERTOURNAMENT_DEAL_INFO");
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 508) + 180))(*(_DWORD *)(this + 508), v2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 508) + 116))(*(_DWORD *)(this + 508));
  if ( *(_BYTE *)(this + 512) )
  {
    v4 = sub_630F40("SID_POKERTOURNAMENT_STAKESRAISED");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 496) + 180))(*(_DWORD *)(this + 496), v4);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 496) + 68))(*(_DWORD *)(this + 496), 88, 33);
    sub_5EF310(48);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 116))(*(_DWORD *)(this + 496));
    v5 = (const char *)sub_630F40("SID_POKERTOURNAMENT_EARLYROUNDBET_FORMAT");
    sprintf(Buffer, v5, v11);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 500) + 180))(*(_DWORD *)(this + 500), Buffer);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 500) + 68))(*(_DWORD *)(this + 500), 88, 49);
    sub_5EF310(48);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 500) + 116))(*(_DWORD *)(this + 500));
    v6 = (const char *)sub_630F40("SID_POKERTOURNAMENT_LATEROUNDBET_FORMAT");
    sprintf(Buffer, v6, v12);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 504) + 180))(*(_DWORD *)(this + 504), Buffer);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 504) + 68))(*(_DWORD *)(this + 504), 88, 65);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 112))(*(_DWORD *)(this + 496));
    v7 = (const char *)sub_630F40("SID_POKERTOURNAMENT_EARLYROUNDBET_FORMAT");
    sprintf(Buffer, v7, v11);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 500) + 180))(*(_DWORD *)(this + 500), Buffer);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 500) + 68))(*(_DWORD *)(this + 500), 88, 40);
    sub_5EF310(48);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 500) + 116))(*(_DWORD *)(this + 500));
    v8 = (const char *)sub_630F40("SID_POKERTOURNAMENT_LATEROUNDBET_FORMAT");
    sprintf(Buffer, v8, v12);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 504) + 180))(*(_DWORD *)(this + 504), Buffer);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 504) + 68))(*(_DWORD *)(this + 504), 88, 58);
  }
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 116))(*(_DWORD *)(this + 504));
  return sub_5F85D0(this);
}


//======================================================================
// sub_466E60
// entry 00466e60  size 47  status ok
//======================================================================

int __thiscall sub_466E60(_DWORD *this)
{
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return sub_465EF0(this);
  else
    return sub_465A40(this);
}


//======================================================================
// sub_466E90
// entry 00466e90  size 97  status ok
//======================================================================

int __thiscall sub_466E90(_DWORD **this)
{
  int result; // eax
  unsigned __int8 v3; // [esp+7h] [ebp-1h]

  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    sub_466820((int)this);
  else
    sub_465D90(this);
  v3 = *((_BYTE *)dword_162EE84 + 37);
  result = v3;
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD))(**(this + 120) + 192))(*(this + 120));
  return result;
}


//======================================================================
// sub_466F00
// entry 00466f00  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_466F00(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &PokerTournamentLeaveButton::`vftable';
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_466F30
// entry 00466f30  size 120  status ok
//======================================================================

int __thiscall sub_466F30(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  sub_5F87D0(*(this + 119));
  *(_BYTE *)(dword_7947E0 + 20228) = 0;
  if ( *(_DWORD *)(dword_791364 + 252) == 3 )
    return sub_4FCB30(2);
  else
    return sub_47FB90(4);
}


//======================================================================
// sub_466FB0
// entry 00466fb0  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_466FB0(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &DealButton::`vftable';
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_466FE0
// entry 00466fe0  size 170  status ok
//======================================================================

int __thiscall sub_466FE0(_DWORD *this)
{
  int result; // eax

  result = sub_636610(dword_162EE84);
  if ( result != 1 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
    sub_5F87D0(*(this + 119));
    sub_5F2870(dword_162EE80);
    *(_BYTE *)(dword_791EB8 + 168) = 1;
    if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
      ++*(_DWORD *)(dword_791EB8 + 152);
    result = std::codecvt<char,char,_Mbstatet>::do_always_noconv(dword_791364);
    if ( (_BYTE)result )
      return sub_47AE60(this, 1);
  }
  return result;
}


//======================================================================
// sub_467090
// entry 00467090  size 152  status ok
//======================================================================

_DWORD *__thiscall sub_467090(_DWORD *this)
{
  sub_518900(0, 0);
  *this = &MakePlayDialog::`vftable';
  *(this + 120) = 0;
  *(this + 121) = 0;
  *(this + 122) = 0;
  *(this + 127) = 0;
  *(this + 128) = 0;
  *(this + 129) = 0;
  *(this + 126) = 0;
  *(this + 123) = 0;
  *(this + 124) = 0;
  return this;
}


//======================================================================
// sub_467130
// entry 00467130  size 644  status ok
//======================================================================

int __thiscall sub_467130(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&MakePlayDialog::`vftable';
  if ( *(this + 120) )
    (***(this + 120))(*(this + 120), 1);
  if ( *(this + 121) )
    (***(this + 121))(*(this + 121), 1);
  if ( *(this + 122) )
    (***(this + 122))(*(this + 122), 1);
  if ( *(this + 127) )
    (***(this + 127))(*(this + 127), 1);
  if ( *(this + 128) )
    (***(this + 128))(*(this + 128), 1);
  if ( *(this + 129) )
    (***(this + 129))(*(this + 129), 1);
  if ( *(this + 126) )
    (***(this + 126))(*(this + 126), 1);
  if ( *(this + 123) )
    (***(this + 123))(*(this + 123), 1);
  if ( *(this + 124) )
    (***(this + 124))(*(this + 124), 1);
  return sub_518980();
}


//======================================================================
// sub_4673C0
// entry 004673c0  size 2672  status ok
//======================================================================

int __thiscall sub_4673C0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // [esp+4h] [ebp-7Ch]
  int v11; // [esp+8h] [ebp-78h]
  int v12; // [esp+Ch] [ebp-74h]
  int v13; // [esp+10h] [ebp-70h]
  int v14; // [esp+14h] [ebp-6Ch]
  int v15; // [esp+18h] [ebp-68h]
  int v16; // [esp+1Ch] [ebp-64h]
  int v17; // [esp+20h] [ebp-60h]
  int v18; // [esp+24h] [ebp-5Ch]
  void *v20; // [esp+3Ch] [ebp-44h]
  void *v21; // [esp+44h] [ebp-3Ch]
  void *v22; // [esp+4Ch] [ebp-34h]
  void *v23; // [esp+54h] [ebp-2Ch]

  if ( *(_BYTE *)(dword_7947E0 + 20276) )
    sub_5F83D0(65010, 0);
  else
    sub_5F83D0(100012, 0);
  v1 = sub_47E1D0(dword_791364);
  sub_5F7340(v1 != 2 ? 0 : 50, 5);
  sub_518AC0(0);
  sub_5FA880(0, -1, 61, 1, 87, 51, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, -1, 61, 1, 87, 73, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880(0, -1, 1, 23, 87, 51, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, -1, 1, 23, 147, 51, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880(0, -1, 61, 1, 87, 84, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, -1, 61, 1, 87, 106, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880(0, -1, 1, 23, 87, 84, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, -1, 1, 23, 147, 84, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA5B0(0, 10, &Source, 31, 147, 18, 3, 31, 1, 48, -1);
  if ( operator new(0x1E0u) )
    v18 = sub_469D00(this);
  else
    v18 = 0;
  *(this + 120) = v18;
  *(_DWORD *)(*(this + 120) + 4) = this;
  sub_5EAE80(3200222, 3, 51, 10, -1);
  v2 = sub_630F40("SID_POKER_CALL");
  (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 120) + 220))(
    *(this + 120),
    v2,
    72,
    75,
    74,
    -1,
    0,
    0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120) + 112))(*(this + 120));
  sub_6026F0(99);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120) + 204))(*(this + 120));
  if ( operator new(0x1E0u) )
    v17 = sub_469D90(this);
  else
    v17 = 0;
  *(this + 121) = v17;
  *(_DWORD *)(*(this + 121) + 4) = this;
  sub_5EAE80(3200222, 3, 84, 10, -1);
  v3 = sub_630F40("SID_POKER_RAISE");
  (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 121) + 220))(
    *(this + 121),
    v3,
    72,
    75,
    74,
    -1,
    0,
    0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 121) + 112))(*(this + 121));
  sub_6026F0(114);
  sub_602740(111);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 121) + 204))(*(this + 121));
  if ( operator new(0x1E0u) )
    v16 = sub_469E90(this);
  else
    v16 = 0;
  *(this + 122) = v16;
  *(_DWORD *)(*(this + 122) + 4) = this;
  sub_5EAE80(3200222, 3, 117, 10, -1);
  v4 = sub_630F40("SID_POKER_FOLD");
  (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 122) + 220))(
    *(this + 122),
    v4,
    72,
    75,
    74,
    -1,
    0,
    0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 122) + 112))(*(this + 122));
  sub_6026F0(102);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 122) + 204))(*(this + 122));
  v23 = operator new(0x1D0u);
  if ( v23 )
  {
    sub_5EC5A0(v23);
    v15 = v5;
  }
  else
  {
    v15 = 0;
  }
  *(this + 127) = v15;
  sub_5ECD00(31, -1, word_75EE1C);
  sub_5ECC60(100);
  sub_5ECCB0(21);
  sub_5EF310(17);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 127) + 68))(*(this + 127), 88, 52);
  (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*(this + 127) + 180))(*(this + 127), &unk_6BB048);
  v22 = operator new(0x1D0u);
  if ( v22 )
  {
    sub_5EC5A0(v22);
    v14 = v6;
  }
  else
  {
    v14 = 0;
  }
  *(this + 128) = v14;
  sub_5ECD00(47, -1, word_75EE1C);
  sub_5ECC60(60);
  sub_5ECCB0(19);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 128) + 68))(*(this + 128), 8, 41);
  (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*(this + 128) + 180))(*(this + 128), &unk_6BB048);
  v21 = operator new(0x1D0u);
  if ( v21 )
  {
    sub_5EC5A0(v21);
    v13 = v7;
  }
  else
  {
    v13 = 0;
  }
  *(this + 129) = v13;
  sub_5ECD00(31, -1, word_75EE1C);
  sub_5ECC60(100);
  sub_5ECCB0(19);
  sub_5EF310(17);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 129) + 68))(*(this + 129), 88, 85);
  (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*(this + 129) + 180))(*(this + 129), &unk_6BB048);
  v20 = operator new(0x178u);
  if ( v20 )
  {
    sub_5EAAF0(v20);
    v12 = v8;
  }
  else
  {
    v12 = 0;
  }
  *(this + 126) = v12;
  *(_DWORD *)(*(this + 126) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 64))(*(this + 126));
  sub_5EAF00(5016);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 112))(*(this + 126));
  sub_519960(*(this + 127), 1);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 127) + 108))(*(this + 127), 3);
  sub_519960(*(this + 129), 1);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 129) + 108))(*(this + 129), 3);
  sub_5199C0(*(this + 120), 1);
  sub_5199C0(*(this + 121), 1);
  sub_5199C0(*(this + 122), 1);
  sub_519900(*(this + 126), 1);
  result = dword_7947E0;
  if ( *(_BYTE *)(dword_7947E0 + 20276) )
  {
    if ( operator new(0x1E0u) )
      v11 = sub_469F20(this);
    else
      v11 = 0;
    *(this + 123) = v11;
    *(_DWORD *)(*(this + 123) + 4) = this;
    sub_5EAE80(65009, 149, 85, 10, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 123) + 112))(*(this + 123));
    sub_6026F0(61);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 123) + 204))(*(this + 123));
    if ( operator new(0x1E0u) )
      v10 = sub_46A0B0(this);
    else
      v10 = 0;
    *(this + 124) = v10;
    *(_DWORD *)(*(this + 124) + 4) = this;
    sub_5EAE80(65008, 149, 97, 10, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 124) + 112))(*(this + 124));
    sub_6026F0(45);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 124) + 204))(*(this + 124));
  }
  return result;
}


//======================================================================
// sub_467E30
// entry 00467e30  size 103  status ok
//======================================================================

int __thiscall sub_467E30(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a2 + 24) == 4 && tolower(*(char *)(a2 + 20)) == 116 )
        sub_5DB240(dword_791EB8);
      return sub_5F72F0(a2);
    }
  }
  return result;
}


//======================================================================
// sub_467EC0
// entry 00467ec0  size 138  status ok
//======================================================================

int __thiscall sub_467EC0(_DWORD **this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h]

  v1 = sub_630F40("SID_POKER_OPEN");
  (*(void (__thiscall **)(_DWORD, int))(**(this + 121) + 224))(*(this + 121), v1);
  sub_5F2A60(3205023, 0);
  sub_5FD730("O");
  v4 = sub_5F2A60(3205023, 0);
  v2 = sub_630F40("SID_POKER_OPEN");
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 224))(v4, v2);
}


//======================================================================
// sub_467F50
// entry 00467f50  size 138  status ok
//======================================================================

int __thiscall sub_467F50(_DWORD **this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h]

  v1 = sub_630F40("SID_POKER_RAISE");
  (*(void (__thiscall **)(_DWORD, int))(**(this + 121) + 224))(*(this + 121), v1);
  sub_5F2A60(3205023, 0);
  sub_5FD730("R");
  v4 = sub_5F2A60(3205023, 0);
  v2 = sub_630F40("SID_POKER_RAISE");
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 224))(v4, v2);
}


//======================================================================
// sub_467FE0
// entry 00467fe0  size 7416  status ok
//======================================================================

__int16 __thiscall sub_467FE0(int this, int a2, char a3, char a4, __int16 a5)
{
  int v5; // esi
  struct CDockablePane *TabbedPane; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  int v30; // esi
  const char *v31; // eax
  const char *v32; // eax
  size_t v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  int v37; // esi
  const char *v38; // eax
  const char *v39; // eax
  size_t v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  const char *v43; // eax
  int v44; // esi
  char *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  int v48; // esi
  const char *v49; // eax
  int v50; // eax
  size_t v51; // eax
  int v52; // esi
  const char *v53; // eax
  const char *v54; // eax
  const char *v55; // eax
  const char *v56; // eax
  size_t v57; // eax
  __int16 result; // ax
  const char *v59; // [esp-Ch] [ebp-354h]
  const char *v60; // [esp-Ch] [ebp-354h]
  int v61; // [esp-8h] [ebp-350h]
  const char *v62; // [esp-8h] [ebp-350h]
  int v63; // [esp-8h] [ebp-350h]
  const char *v64; // [esp-8h] [ebp-350h]
  int v65; // [esp-8h] [ebp-350h]
  int v66; // [esp-8h] [ebp-350h]
  int v67; // [esp-8h] [ebp-350h]
  const char *v68; // [esp-4h] [ebp-34Ch]
  const char *v69; // [esp-4h] [ebp-34Ch]
  const char *v70; // [esp-4h] [ebp-34Ch]
  int v71; // [esp-4h] [ebp-34Ch]
  int v72; // [esp-4h] [ebp-34Ch]
  int v73; // [esp-4h] [ebp-34Ch]
  int v74; // [esp-4h] [ebp-34Ch]
  int v75; // [esp-4h] [ebp-34Ch]
  int v76; // [esp-4h] [ebp-34Ch]
  int v77; // [esp-4h] [ebp-34Ch]
  int v78; // [esp-4h] [ebp-34Ch]
  int v79; // [esp-4h] [ebp-34Ch]
  int v80; // [esp-4h] [ebp-34Ch]
  int v81; // [esp-4h] [ebp-34Ch]
  int v82; // [esp-4h] [ebp-34Ch]
  int v83; // [esp-4h] [ebp-34Ch]
  int v84; // [esp-4h] [ebp-34Ch]
  int v85; // [esp-4h] [ebp-34Ch]
  int v86; // [esp-4h] [ebp-34Ch]
  int v87; // [esp-4h] [ebp-34Ch]
  int v88; // [esp-4h] [ebp-34Ch]
  int v89; // [esp+8h] [ebp-340h]
  int v90; // [esp+10h] [ebp-338h]
  Concurrency::details::HardwareAffinity *v91; // [esp+30h] [ebp-318h]
  int v92; // [esp+48h] [ebp-300h]
  int v93; // [esp+50h] [ebp-2F8h]
  int v94; // [esp+54h] [ebp-2F4h]
  int v95; // [esp+58h] [ebp-2F0h]
  _BYTE v97[11]; // [esp+60h] [ebp-2E8h] BYREF
  bool v98; // [esp+6Bh] [ebp-2DDh]
  _BYTE v99[9]; // [esp+6Ch] [ebp-2DCh] BYREF
  bool v100; // [esp+75h] [ebp-2D3h]
  char v101; // [esp+76h] [ebp-2D2h] BYREF
  char v102; // [esp+77h] [ebp-2D1h] BYREF
  _BYTE v103[4]; // [esp+78h] [ebp-2D0h] BYREF
  _BYTE v104[8]; // [esp+7Ch] [ebp-2CCh] BYREF
  _BYTE v105[4]; // [esp+84h] [ebp-2C4h] BYREF
  _BYTE v106[8]; // [esp+88h] [ebp-2C0h] BYREF
  _BYTE v107[11]; // [esp+90h] [ebp-2B8h] BYREF
  char v108; // [esp+9Bh] [ebp-2ADh] BYREF
  _BYTE v109[4]; // [esp+9Ch] [ebp-2ACh] BYREF
  _BYTE v110[9]; // [esp+A0h] [ebp-2A8h] BYREF
  char v111; // [esp+A9h] [ebp-29Fh] BYREF
  char v112; // [esp+AAh] [ebp-29Eh] BYREF
  char v113; // [esp+ABh] [ebp-29Dh] BYREF
  char v114; // [esp+ACh] [ebp-29Ch] BYREF
  char v115; // [esp+ADh] [ebp-29Bh] BYREF
  char v116; // [esp+AEh] [ebp-29Ah] BYREF
  char v117; // [esp+AFh] [ebp-299h] BYREF
  char v118; // [esp+B0h] [ebp-298h] BYREF
  char v119; // [esp+B1h] [ebp-297h] BYREF
  char v120; // [esp+B2h] [ebp-296h] BYREF
  char v121; // [esp+B3h] [ebp-295h] BYREF
  char v122; // [esp+B4h] [ebp-294h] BYREF
  char v123; // [esp+B5h] [ebp-293h] BYREF
  char v124; // [esp+B6h] [ebp-292h] BYREF
  char v125; // [esp+B7h] [ebp-291h]
  __int16 v126; // [esp+B8h] [ebp-290h]
  signed __int16 Group; // [esp+BCh] [ebp-28Ch]
  char v128; // [esp+C3h] [ebp-285h]
  int v129; // [esp+C4h] [ebp-284h] BYREF
  _BYTE v130[8]; // [esp+C8h] [ebp-280h] BYREF
  _DWORD v131[2]; // [esp+D0h] [ebp-278h] BYREF
  _BYTE v132[8]; // [esp+D8h] [ebp-270h] BYREF
  _BYTE v133[4]; // [esp+E0h] [ebp-268h] BYREF
  char Format[104]; // [esp+E4h] [ebp-264h] BYREF
  signed int v135; // [esp+14Ch] [ebp-1FCh]
  int v136; // [esp+150h] [ebp-1F8h]
  char Buffer[256]; // [esp+154h] [ebp-1F4h] BYREF
  char v138[104]; // [esp+254h] [ebp-F4h] BYREF
  char v139[108]; // [esp+2BCh] [ebp-8Ch] BYREF
  int v140; // [esp+32Ch] [ebp-1Ch]
  signed int v141; // [esp+330h] [ebp-18h]
  __int16 i; // [esp+334h] [ebp-14h]
  Concurrency::details::SchedulerProxy *v143; // [esp+338h] [ebp-10h]
  int v144; // [esp+344h] [ebp-4h]

  v5 = sub_4F67D0(dword_791364 + 56);
  v135 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v5;
  TabbedPane = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
  v141 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * (_DWORD)TabbedPane;
  v140 = sub_47E3B0(dword_791364);
  v136 = sub_4C6A70(v140);
  v7 = sub_630F40("SID_POKER_BETTING");
  sub_5F73E0(v7, 73, 0, 3);
  if ( v136 < v135 )
    v135 = v136;
  v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 228) + 184))(*(_DWORD *)(dword_791364 + 228));
  sub_5FB5A0(10, v8);
  sub_57AB80(11, &unk_71B110);
  sub_47AAB0(1, v135 == 0);
  sub_519A40(0);
  v9 = sub_630F40("SID_POKER_CALL");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 224))(*(_DWORD *)(this + 480), v9);
  sub_467F50((_DWORD **)this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 488) + 204))(*(_DWORD *)(this + 488));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 112))(*(_DWORD *)(this + 504));
  if ( v135 <= 999999 )
  {
    if ( v135 <= 999 )
    {
      if ( v135 <= 0 )
      {
        v10 = sub_630F40("SID_POKER_CHECK");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 224))(*(_DWORD *)(this + 480), v10);
        if ( !a3 )
          sub_467EC0((_DWORD **)this);
        Buffer[0] = 0;
      }
      else
      {
        sprintf(Buffer, off_6BB590, v135);
      }
    }
    else
    {
      sprintf(Buffer, "$%d,%.3d", v135 / 1000, v135 % 1000);
    }
  }
  else
  {
    sprintf(Buffer, "$%d,%.3d,%.3d", v135 / 1000000, v135 % 1000000 / 1000, v135 % 1000);
  }
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 508) + 180))(*(_DWORD *)(this + 508), Buffer);
  if ( v136 <= 999999 )
  {
    if ( v136 <= 999 )
    {
      if ( v136 <= 0 )
        v138[0] = 0;
      else
        sprintf(v138, off_6BB590, v136);
    }
    else
    {
      sprintf(v138, "$%d,%.3d", v136 / 1000, v136 % 1000);
    }
  }
  else
  {
    sprintf(v138, "$%d,%.3d,%.3d", v136 / 1000000, v136 % 1000000 / 1000, v136 % 1000);
  }
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 512) + 180))(*(_DWORD *)(this + 512), v138);
  sprintf(Format, &Source);
  if ( a2 < *(_DWORD *)(dword_791364 + 1040) )
    a2 = *(_DWORD *)(dword_791364 + 1040);
  if ( a2 <= 0 || !(unsigned __int8)sub_4F66E0(dword_791364 + 56) && v135 )
  {
    sprintf(v139, Format);
  }
  else if ( a2 <= 999999 )
  {
    if ( a2 <= 999 )
      sprintf(v139, "%s$%d", Format, a2);
    else
      sprintf(v139, "%s$%d,%.3d", Format, a2 / 1000, a2 % 1000);
  }
  else
  {
    sprintf(v139, "%s$%d,%.3d,%.3d", Format, a2 / 1000000, a2 % 1000000 / 1000, a2 % 1000);
  }
  if ( a2 == -1 && v136 - v135 < v141 )
  {
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v139);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 208))(*(_DWORD *)(this + 484));
    if ( *(_DWORD *)(this + 492) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 208))(*(_DWORD *)(this + 492));
    if ( *(_DWORD *)(this + 496) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 208))(*(_DWORD *)(this + 496));
  }
  else if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
  {
    if ( a4 )
    {
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v139);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 208))(*(_DWORD *)(this + 484));
      if ( *(_DWORD *)(this + 492) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 208))(*(_DWORD *)(this + 492));
      if ( *(_DWORD *)(this + 496) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 208))(*(_DWORD *)(this + 496));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v139);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 204))(*(_DWORD *)(this + 484));
      if ( *(_DWORD *)(this + 492) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 204))(*(_DWORD *)(this + 492));
      if ( *(_DWORD *)(this + 496) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 204))(*(_DWORD *)(this + 496));
    }
  }
  else if ( a2 && (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
  {
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v139);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 204))(*(_DWORD *)(this + 484));
    if ( *(_DWORD *)(this + 492) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 204))(*(_DWORD *)(this + 492));
    if ( *(_DWORD *)(this + 496) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 204))(*(_DWORD *)(this + 496));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v139);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 208))(*(_DWORD *)(this + 484));
    if ( *(_DWORD *)(this + 492) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 208))(*(_DWORD *)(this + 492));
    if ( *(_DWORD *)(this + 496) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 208))(*(_DWORD *)(this + 496));
  }
  if ( (unsigned __int8)sub_6026D0(*(_DWORD *)(this + 484)) )
  {
    v95 = sub_5F2A60(3205023, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v95 + 204))(v95);
  }
  else
  {
    v94 = sub_5F2A60(3205023, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v94 + 208))(v94);
  }
  if ( a5 == 2 && !(unsigned __int8)sub_6026D0(*(_DWORD *)(this + 484)) )
    a5 = 1;
  sub_5F85D0(this);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, char *))(*(_DWORD *)dword_162EE84 + 948))(
    dword_162EE84,
    *(_DWORD *)(dword_791364 + 204),
    Buffer);
  v11 = (const char *)sub_630F40("SID_POKER_HINTINSTRUCTIONS_FORMAT");
  sprintf(Str, v11, Buffer);
  sub_57BE80(10, 0, Str);
  v68 = (const char *)sub_630F40("SID_POKER_CHECK");
  v12 = (const char *)sub_602B70(*(_DWORD *)(this + 480));
  if ( !strcmp(v12, v68) )
    v13 = (const char *)sub_630F40("SID_POKER_CHECKINSTRUCTIONS");
  else
    v13 = (const char *)sub_630F40("SID_POKER_CALLINSTRUCTIONS");
  strcpy(Str, v13);
  v69 = (const char *)sub_630F40("SID_POKER_OPEN");
  v14 = (const char *)sub_602B70(*(_DWORD *)(this + 484));
  if ( !strcmp(v14, v69) )
  {
    v15 = (const char *)sub_630F40("SID_POKER_OPENINSTRUCTIONS_FORMAT");
    strcat(Str, v15);
  }
  else
  {
    if ( (unsigned __int8)sub_6026D0(*(_DWORD *)(this + 484)) )
      v16 = (const char *)sub_630F40("SID_POKER_RAISEINSTRUCTIONS_FORMAT");
    else
      v16 = (const char *)sub_630F40("SID_POKER_CANTRAISE_FORMAT");
    strcat(Str, v16);
  }
  v70 = (const char *)sub_630F40("SID_POKER_CALL");
  v17 = (const char *)sub_602B70(*(_DWORD *)(this + 480));
  if ( !strcmp(v17, v70) )
  {
    v18 = (const char *)sub_630F40("SID_POKER_FOLDINSTRUCTIONS_FORMAT");
    strcat(Str, v18);
  }
  sub_57BE80(0, 0, Str);
  if ( !sub_47E1D0(dword_791364) )
  {
    if ( byte_7912E9 )
    {
      if ( sub_47E280(dword_791364) )
      {
        v36 = (const char *)sub_630F40("SID_POKER_SUMMARY_FIRSTROUND");
        strcpy(Str, v36);
        for ( i = 0; ; ++i )
        {
          v37 = i;
          if ( v37 >= sub_47F950(dword_791364) )
            break;
          v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( sub_4C6CB0(v143) != 2
            && (Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 1
             || Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 2) )
          {
            if ( *((_BYTE *)v143 + 28) )
              v92 = sub_630F40("SID_POKER_UNFORCEDBET");
            else
              v92 = sub_630F40("SID_POKER_FORCEDBET");
            v63 = sub_4C6150(v143, v92);
            v38 = (const char *)sub_630F40("SID_POKER_PLAYERNAMES_FORMAT");
            sprintf(Buffer, v38, v63);
            if ( *((_DWORD *)v143 + 6) )
            {
              v86 = *((_DWORD *)v143 + 6);
              v64 = (const char *)sub_630F40("SID_POKER_DREWCOUNT_FORMAT");
              v40 = strlen(Buffer);
              sprintf(&Buffer[v40], v64, v86);
            }
            else
            {
              v39 = (const char *)sub_630F40("SID_POKER_STOODPAT_FORMAT");
              strcat(Buffer, v39);
            }
            strcat(Str, Buffer);
            switch ( *((_DWORD *)v143 + 6) )
            {
              case 0:
                if ( *((_BYTE *)v143 + 28) )
                  v41 = (const char *)sub_630F40("SID_POKER_LIKELYHAND7");
                else
                  v41 = (const char *)sub_630F40("SID_POKER_LIKELYHAND8");
                goto LABEL_150;
              case 1:
                if ( *((_BYTE *)v143 + 28) )
                  v41 = (const char *)sub_630F40("SID_POKER_LIKELYHAND9");
                else
                  v41 = (const char *)sub_630F40("SID_POKER_LIKELYHAND10");
LABEL_150:
                strcat(Str, v41);
                break;
              case 2:
                v42 = (const char *)sub_630F40("SID_POKER_LIKELYHAND11");
                strcat(Str, v42);
                break;
              case 3:
                v43 = (const char *)sub_630F40("SID_POKER_LIKELYHAND12");
                strcat(Str, v43);
                break;
              default:
                sub_5E9F20((char)"false", "..\\Casino\\PokerDialog.cpp", 891);
                break;
            }
          }
        }
      }
      else
      {
        v29 = (const char *)sub_630F40("SID_POKER_SUMMARY_FIRSTROUND");
        strcpy(Str, v29);
        for ( i = 0; ; ++i )
        {
          v30 = i;
          if ( v30 >= sub_47F950(dword_791364) )
            break;
          v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( sub_4C6CB0(v143) != 2
            && (Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 1
             || Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 2) )
          {
            if ( *((_BYTE *)v143 + 28) )
              v93 = sub_630F40("SID_POKER_UNFORCEDBET");
            else
              v93 = sub_630F40("SID_POKER_FORCEDBET");
            v61 = sub_4C6150(v143, v93);
            v31 = (const char *)sub_630F40("SID_POKER_PLAYERNAMES_FORMAT");
            sprintf(Buffer, v31, v61);
            if ( *((_DWORD *)v143 + 6) )
            {
              v85 = *((_DWORD *)v143 + 6);
              v62 = (const char *)sub_630F40("SID_POKER_DREWCOUNT_FORMAT");
              v33 = strlen(Buffer);
              sprintf(&Buffer[v33], v62, v85);
            }
            else
            {
              v32 = (const char *)sub_630F40("SID_POKER_STOODPAT");
              strcat(Buffer, v32);
            }
            strcat(Str, Buffer);
            switch ( *((_DWORD *)v143 + 6) )
            {
              case 0:
                v34 = (const char *)sub_630F40("SID_POKER_LIKELYHAND0");
                strcat(Str, v34);
                continue;
              case 1:
                if ( *((_BYTE *)v143 + 28) )
                  v35 = (const char *)sub_630F40("SID_POKER_LIKELYHAND1");
                else
                  v35 = (const char *)sub_630F40("SID_POKER_LIKELYHAND2");
                goto LABEL_130;
              case 2:
                if ( *((_BYTE *)v143 + 28) )
                  v35 = (const char *)sub_630F40("SID_POKER_LIKELYHAND3");
                else
                  v35 = (const char *)sub_630F40("SID_POKER_LIKELYHAND4");
                goto LABEL_130;
              case 3:
                if ( *((_BYTE *)v143 + 28) )
                  v35 = (const char *)sub_630F40("SID_POKER_LIKELYHAND5");
                else
                  v35 = (const char *)sub_630F40("SID_POKER_LIKELYHAND6");
LABEL_130:
                strcat(Str, v35);
                break;
              default:
                sub_5E9F20((char)"false", "..\\Casino\\PokerDialog.cpp", 852);
                break;
            }
          }
        }
      }
    }
    else if ( sub_47E280(dword_791364) )
    {
      v28 = (const char *)sub_630F40("SID_POKER_HINT_BEFOREDRAW");
      strcpy(Str, v28);
    }
    else
    {
      v131[1] = sub_47E3B0(dword_791364);
      sub_4C7C40(v132);
      v144 = 0;
      sub_485940(v133, 1, 1, 1, 1, 0, 0, 0);
      LOBYTE(v144) = 1;
      v71 = dword_791398;
      sub_4A2160(&v124);
      if ( (unsigned __int8)sub_4A1E10(v71) )
        goto LABEL_86;
      v72 = dword_7913D4;
      sub_4A2160(&v123);
      if ( (unsigned __int8)sub_4A1E10(v72) )
        goto LABEL_86;
      v73 = dword_7913A0;
      sub_4A2160(&v122);
      if ( (unsigned __int8)sub_4A1E10(v73)
        || (v74 = dword_79140C, sub_4A2160(&v121), (unsigned __int8)sub_4A1E10(v74))
        || (v75 = dword_791394, sub_4A2160(&v120), (unsigned __int8)sub_4A1E10(v75))
        || (v76 = dword_791418, sub_4A2160(&v119), (unsigned __int8)sub_4A1E10(v76)) )
      {
LABEL_86:
        v77 = dword_791398;
        sub_4A2160(&v118);
        if ( (unsigned __int8)sub_4A1E10(v77) )
        {
          v19 = (const char *)sub_630F40("SID_POKER_HAND_ASTRAIGHTFLUSH");
          strcpy(Buffer, v19);
        }
        v78 = dword_7913D4;
        sub_4A2160(&v117);
        if ( (unsigned __int8)sub_4A1E10(v78) )
        {
          v20 = (const char *)sub_630F40("SID_POKER_HAND_AFULLHOUSE");
          strcpy(Buffer, v20);
        }
        v79 = dword_7913A0;
        sub_4A2160(&v116);
        if ( (unsigned __int8)sub_4A1E10(v79) )
        {
          v21 = (const char *)sub_630F40("SID_POKER_HAND_AFLUSH");
          strcpy(Buffer, v21);
        }
        v80 = dword_79140C;
        sub_4A2160(&v115);
        if ( (unsigned __int8)sub_4A1E10(v80) )
        {
          v22 = (const char *)sub_630F40("SID_POKER_HAND_ASTRAIGHT");
          strcpy(Buffer, v22);
        }
        v81 = dword_791394;
        sub_4A2160(&v114);
        if ( (unsigned __int8)sub_4A1E10(v81) )
        {
          v23 = (const char *)sub_630F40("SID_POKER_HAND_FOUROFAKIND");
          strcpy(Buffer, v23);
        }
        v82 = dword_791418;
        sub_4A2160(&v113);
        if ( (unsigned __int8)sub_4A1E10(v82) )
        {
          v24 = (const char *)sub_630F40("SID_POKER_HAND_THREEOFAKIND");
          strcpy(Buffer, v24);
        }
        v25 = (const char *)sub_630F40("SID_POKER_HINT_RAISE_FORMAT");
        sprintf(Str, v25, Buffer);
      }
      else
      {
        v83 = dword_791380;
        sub_4A2160(&v112);
        if ( (unsigned __int8)sub_4A1E10(v83) )
        {
          v26 = (const char *)sub_630F40("SID_POKER_HINT_TWOPAIR_FORMAT");
          strcpy(Str, v26);
        }
        else
        {
          v84 = dword_7913B0;
          sub_4A2160(&v111);
          if ( (unsigned __int8)sub_4A1E10(v84) )
            v27 = (const char *)sub_630F40("SID_POKER_HINT_ONEPAIR_FORMAT");
          else
            v27 = (const char *)sub_630F40("SID_POKER_HINT_HIGHCARD_FORMAT");
          strcpy(Str, v27);
        }
      }
      LOBYTE(v144) = 0;
      ATL::CComCriticalSection::~CComCriticalSection(v133);
      v144 = -1;
      sub_484470(v132);
    }
    sub_57BE80(1, 0, Str);
  }
  if ( sub_47E1D0(dword_791364) == 1 )
  {
    v126 = 0;
    Group = 0;
    sub_4A20D0(&v129);
    v144 = 2;
    sub_4A20D0(v131);
    LOBYTE(v144) = 3;
    sub_47E3B0(dword_791364);
    sub_4C7C40(v130);
    LOBYTE(v144) = 4;
    v128 = 0;
    for ( i = 0; ; ++i )
    {
      v44 = i;
      if ( v44 >= sub_47F950(dword_791364) )
        break;
      v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 1
        || Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 2 )
      {
        sub_4C8300(v110);
        LOBYTE(v144) = 5;
        v131[0] = *(_DWORD *)sub_485940(v109, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(v109);
        LOBYTE(v144) = 4;
        sub_484470(v110);
        if ( v128 )
        {
          if ( (unsigned __int8)sub_4A2440(&v129) )
          {
            v129 = v131[0];
            v126 = i;
          }
        }
        else
        {
          v129 = v131[0];
          v126 = i;
          v128 = 1;
        }
      }
    }
    v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(v126);
    v125 = sub_5F54A0(*((_DWORD *)v143 + 9));
    v45 = (char *)sub_4A2160(&v108);
    sub_4DA4D0(*v45);
    v46 = (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v143 + 9) + 184))(*((_DWORD *)v143 + 9));
    strcpy(Buffer, v46);
    if ( !v125 )
      sub_4DA890(v143);
    v65 = sub_4C6150(v143, Buffer);
    v47 = (const char *)sub_630F40("SID_POKER_HIGHESTHAND_FORMAT");
    sprintf(Str, v47, v65);
    if ( sub_47E280(dword_791364) )
    {
      v128 = 0;
      for ( i = 0; ; ++i )
      {
        v48 = i;
        if ( v48 >= sub_47F950(dword_791364) )
          break;
        v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 1
          || Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 2 )
        {
          v91 = (Concurrency::details::HardwareAffinity *)sub_4C8300(v107);
          LOBYTE(v144) = 6;
          Group = Concurrency::details::HardwareAffinity::GetGroup(v91);
          LOBYTE(v144) = 4;
          sub_484470(v107);
          sub_4C8300(v106);
          LOBYTE(v144) = 7;
          v131[0] = *(_DWORD *)sub_485940(v105, 0, 1, 1, 0, 0, 0, 0);
          ATL::CComCriticalSection::~CComCriticalSection(v105);
          LOBYTE(v144) = 4;
          sub_484470(v106);
          if ( v128 )
          {
            if ( (unsigned __int8)sub_4A2550(&v129) )
            {
              v129 = v131[0];
              v126 = i;
            }
          }
          else
          {
            v129 = v131[0];
            v126 = i;
            v128 = 1;
          }
        }
      }
      v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(v126);
      v125 = sub_5F54A0(*((_DWORD *)v143 + 11));
      sub_4DB070(v129);
      v49 = (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v143 + 11) + 184))(*((_DWORD *)v143 + 11));
      strcpy(Buffer, v49);
      if ( !v125 )
        sub_4DB610(v143);
      if ( Group >= 2 )
      {
        v50 = sub_4A2100(dword_791390, dword_791410, dword_7913F8, dword_791404, dword_7913A4, &byte_7913FF);
        if ( (unsigned __int8)sub_4A2570(v50) )
        {
          v66 = sub_4C6150(v143, Buffer);
          v59 = (const char *)sub_630F40("SID_POKER_LOWESTHAND_FORMAT");
          v51 = strlen(Str);
          sprintf(&Str[v51], v59, v66);
        }
      }
    }
    if ( (__int16)Concurrency::details::HardwareAffinity::GetGroup((Concurrency::details::HardwareAffinity *)v130) >= 5 )
    {
      for ( i = 0; ; ++i )
      {
        v52 = i;
        if ( v52 >= sub_47F950(dword_791364) )
          break;
        v143 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 1
          || Concurrency::details::SchedulerProxy::GetQueueLength(v143) == 2 )
        {
          Buffer[0] = 0;
          sub_4C8300(v104);
          LOBYTE(v144) = 8;
          v131[0] = *(_DWORD *)sub_485940(v103, 1, 1, 1, 1, 0, 0, 0);
          ATL::CComCriticalSection::~CComCriticalSection(v103);
          LOBYTE(v144) = 4;
          sub_484470(v104);
          v87 = dword_791418;
          sub_4A2160(&v102);
          if ( (unsigned __int8)sub_4A1E10(v87) )
          {
            v53 = (const char *)sub_630F40("SID_POKER_MAYBE_FOUROFAKINDFULLHOUSE");
            strcpy(Buffer, v53);
          }
          v88 = dword_791380;
          sub_4A2160(&v101);
          if ( (unsigned __int8)sub_4A1E10(v88) )
          {
            v54 = (const char *)sub_630F40("SID_POKER_MAYBE_FULLHOUSE");
            strcpy(Buffer, v54);
          }
          v90 = sub_4C8300(v99);
          LOBYTE(v144) = 9;
          v100 = (__int16)sub_484BF0(v90) >= 3;
          LOBYTE(v144) = 4;
          sub_484470(v99);
          if ( v100 )
          {
            v55 = (const char *)sub_630F40("SID_POKER_MAYBE_FLUSH");
            strcpy(Buffer, v55);
          }
          v89 = sub_4C8300(v97);
          LOBYTE(v144) = 10;
          v98 = (__int16)sub_484DB0(v89) <= 1;
          LOBYTE(v144) = 4;
          sub_484470(v97);
          if ( v98 )
          {
            v56 = (const char *)sub_630F40("SID_POKER_MAYBE_STRAIGHT");
            strcpy(Buffer, v56);
          }
          if ( Buffer[0] )
          {
            v67 = sub_4C6150(v143, Buffer);
            v60 = (const char *)sub_630F40("SID_POKER_PLAYERNAME_FORMAT");
            v57 = strlen(Str);
            sprintf(&Str[v57], v60, v67);
          }
        }
      }
    }
    sub_57BE80(1, 0, Str);
    LOBYTE(v144) = 3;
    sub_484470(v130);
    LOBYTE(v144) = 2;
    ATL::CComCriticalSection::~CComCriticalSection(v131);
    v144 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v129);
  }
  result = a5;
  *(_WORD *)(this + 500) = a5;
  if ( *(_DWORD *)(this + 492) )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 116))(*(_DWORD *)(this + 492));
  if ( *(_DWORD *)(this + 496) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 116))(*(_DWORD *)(this + 496));
  return result;
}


//======================================================================
// sub_469D00
// entry 00469d00  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_469D00(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &CallCheckButton::`vftable';
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_469D30
// entry 00469d30  size 96  status ok
//======================================================================

int __thiscall sub_469D30(_DWORD *this)
{
  sub_57AE30(dword_793578);
  sub_47AAB0(0, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  sub_5F87D0(*(this + 119));
  return sub_519A40(1);
}


//======================================================================
// sub_469D90
// entry 00469d90  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_469D90(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &RaiseOpenButton::`vftable';
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_469DC0
// entry 00469dc0  size 194  status ok
//======================================================================

int __thiscall sub_469DC0(_DWORD *this)
{
  char *v1; // eax
  int result; // eax
  int v4; // [esp+Ch] [ebp-8h]

  sub_57AE30(dword_793578);
  sub_47AAB0(0, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  sub_5F87D0(*(this + 119));
  sub_519A40(2);
  v1 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
  result = sub_64CAB0(v1);
  v4 = result;
  if ( result > *(_DWORD *)(dword_791364 + 1040) )
  {
    result = dword_791364;
    *(_DWORD *)(dword_791364 + 1040) = v4;
  }
  return result;
}


//======================================================================
// sub_469E90
// entry 00469e90  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_469E90(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &off_6BB7BC;
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_469EC0
// entry 00469ec0  size 96  status ok
//======================================================================

int __thiscall sub_469EC0(_DWORD *this)
{
  sub_57AE30(dword_793578);
  sub_47AAB0(0, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  sub_5F87D0(*(this + 119));
  return sub_519A40(3);
}


//======================================================================
// sub_469F20
// entry 00469f20  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_469F20(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &IncreaseBetButton::`vftable';
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_469F50
// entry 00469f50  size 351  status ok
//======================================================================

int __thiscall sub_469F50(_DWORD *this)
{
  char *v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int *v5; // esi
  int v6; // eax
  int result; // eax
  int *v8; // eax
  _BYTE v10[8]; // [esp+8h] [ebp-58h] BYREF
  _BYTE v11[8]; // [esp+10h] [ebp-50h] BYREF
  __int64 v12; // [esp+18h] [ebp-48h]
  __int64 v13; // [esp+20h] [ebp-40h]
  int v14; // [esp+28h] [ebp-38h]
  int v15; // [esp+2Ch] [ebp-34h]
  char Destination[28]; // [esp+30h] [ebp-30h] BYREF
  __int64 v17; // [esp+50h] [ebp-10h]
  int v18; // [esp+58h] [ebp-8h]
  int v19; // [esp+5Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  v1 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 119) + 516) + 184))(*(_DWORD *)(*(this + 119) + 516));
  v14 = sub_64CAB0(v1);
  v15 = v2;
  v18 = v14;
  v19 = v2;
  if ( (unsigned __int8)sub_4B7D90() )
  {
    v3 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    v13 = sub_64C8A0(v3, 0);
    v17 = v13;
  }
  else
  {
    v4 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
    v12 = sub_64C8A0(v4, 0);
    v17 = v12;
  }
  v5 = (int *)sub_64C5C0(v11, v17, HIDWORD(v17));
  v6 = sub_47E3B0(dword_791364);
  result = sub_4C6A70(v6);
  if ( *v5 <= result )
  {
    v8 = (int *)sub_64C5C0(v10, v17, HIDWORD(v17));
    sub_64C8D0(*v8, v8[1], Destination, 0, 1, 1);
    return (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(this + 119) + 516) + 180))(
             *(_DWORD *)(*(this + 119) + 516),
             Destination);
  }
  return result;
}


//======================================================================
// sub_46A0B0
// entry 0046a0b0  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_46A0B0(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &DecreaseBetButton::`vftable';
  v3[119] = a2;
  return v3;
}


//======================================================================
// sub_46A0E0
// entry 0046a0e0  size 381  status ok
//======================================================================

int __thiscall sub_46A0E0(_DWORD *this)
{
  char *v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int result; // eax
  int *v6; // eax
  __int64 v7; // [esp-8h] [ebp-6Ch]
  char v9[8]; // [esp+4h] [ebp-60h] BYREF
  char v10[8]; // [esp+Ch] [ebp-58h] BYREF
  char v11[8]; // [esp+14h] [ebp-50h] BYREF
  __int64 v12; // [esp+1Ch] [ebp-48h]
  __int64 v13; // [esp+24h] [ebp-40h]
  int v14; // [esp+2Ch] [ebp-38h]
  int v15; // [esp+30h] [ebp-34h]
  char Destination[28]; // [esp+34h] [ebp-30h] BYREF
  __int64 v17; // [esp+54h] [ebp-10h]
  int v18; // [esp+5Ch] [ebp-8h]
  int v19; // [esp+60h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  v1 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 119) + 516) + 184))(*(_DWORD *)(*(this + 119) + 516));
  v14 = sub_64CAB0(v1);
  v15 = v2;
  v18 = v14;
  v19 = v2;
  if ( (unsigned __int8)sub_4B7D90() )
  {
    v3 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    v13 = sub_64C8A0(v3, 0);
    v17 = v13;
  }
  else
  {
    v4 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
    v12 = sub_64C8A0(v4, 0);
    v17 = v12;
  }
  v7 = v17;
  sub_64C630(v11, v17, HIDWORD(v17));
  result = (unsigned __int8)sub_64C6A0(v7, HIDWORD(v7));
  if ( !(_BYTE)result )
  {
    result = sub_64C630(v10, v17, HIDWORD(v17));
    if ( *(_DWORD *)result >= *(_DWORD *)(dword_791364 + 1040) )
    {
      v6 = (int *)sub_64C630(v9, v17, HIDWORD(v17));
      sub_64C8D0(*v6, v6[1], Destination, 0, 1, 1);
      return (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(this + 119) + 516) + 180))(
               *(_DWORD *)(*(this + 119) + 516),
               Destination);
    }
  }
  return result;
}


//======================================================================
// sub_46A260
// entry 0046a260  size 230  status ok
//======================================================================

_DWORD *__thiscall sub_46A260(_DWORD *this)
{
  sub_518900(0, 0);
  *this = &DiscardDialog::`vftable';
  *(this + 120) = 0;
  *(this + 121) = 0;
  *(this + 122) = 0;
  *(this + 123) = 0;
  *(this + 124) = 0;
  *(this + 125) = 0;
  *(this + 126) = 0;
  *(this + 127) = 0;
  *(this + 128) = 0;
  *(this + 129) = 0;
  *(this + 130) = 0;
  *(this + 131) = 0;
  *(this + 132) = 0;
  *(this + 133) = 0;
  *(this + 134) = 0;
  return this;
}


//======================================================================
// sub_46A350
// entry 0046a350  size 989  status ok
//======================================================================

int __thiscall sub_46A350(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&DiscardDialog::`vftable';
  if ( *(this + 120) )
    (***(this + 120))(*(this + 120), 1);
  if ( *(this + 121) )
    (***(this + 121))(*(this + 121), 1);
  if ( *(this + 122) )
    (***(this + 122))(*(this + 122), 1);
  if ( *(this + 123) )
    (***(this + 123))(*(this + 123), 1);
  if ( *(this + 124) )
    (***(this + 124))(*(this + 124), 1);
  if ( *(this + 125) )
    (***(this + 125))(*(this + 125), 1);
  if ( *(this + 126) )
    (***(this + 126))(*(this + 126), 1);
  if ( *(this + 127) )
    (***(this + 127))(*(this + 127), 1);
  if ( *(this + 128) )
    (***(this + 128))(*(this + 128), 1);
  if ( *(this + 129) )
    (***(this + 129))(*(this + 129), 1);
  if ( *(this + 130) )
    (***(this + 130))(*(this + 130), 1);
  if ( *(this + 131) )
    (***(this + 131))(*(this + 131), 1);
  if ( *(this + 132) )
    (***(this + 132))(*(this + 132), 1);
  if ( *(this + 133) )
    (***(this + 133))(*(this + 133), 1);
  if ( *(this + 134) )
    (***(this + 134))(*(this + 134), 1);
  return sub_518980();
}


//======================================================================
// sub_46A730
// entry 0046a730  size 4516  status ok
//======================================================================

int __thiscall sub_46A730(int this)
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
  int IsFixedSize; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v33; // [esp+4h] [ebp-C4h]
  int v34; // [esp+8h] [ebp-C0h]
  int v35; // [esp+Ch] [ebp-BCh]
  int v36; // [esp+10h] [ebp-B8h]
  int v37; // [esp+14h] [ebp-B4h]
  int v38; // [esp+18h] [ebp-B0h]
  int v39; // [esp+1Ch] [ebp-ACh]
  int v40; // [esp+20h] [ebp-A8h]
  int v41; // [esp+24h] [ebp-A4h]
  int v42; // [esp+28h] [ebp-A0h]
  int v43; // [esp+2Ch] [ebp-9Ch]
  int v44; // [esp+30h] [ebp-98h]
  int v45; // [esp+34h] [ebp-94h]
  int v46; // [esp+38h] [ebp-90h]
  int v47; // [esp+3Ch] [ebp-8Ch]
  void *v49; // [esp+44h] [ebp-84h]
  void *v50; // [esp+4Ch] [ebp-7Ch]
  void *v51; // [esp+54h] [ebp-74h]
  void *v52; // [esp+5Ch] [ebp-6Ch]
  void *v53; // [esp+64h] [ebp-64h]
  void *v54; // [esp+6Ch] [ebp-5Ch]
  void *v55; // [esp+74h] [ebp-54h]
  void *v56; // [esp+7Ch] [ebp-4Ch]
  void *v57; // [esp+84h] [ebp-44h]
  void *v58; // [esp+8Ch] [ebp-3Ch]

  sub_5F83D0(100011, 0);
  v1 = sub_630F40("SID_POKER_SELECTDISARDS");
  sub_5F73E0(v1, 73, 0, 3);
  sub_518AC0(1);
  sub_5FA880(0, 0, 335, 1, 1, 160, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 0, 335, 1, 1, 161, 1, 255, 255, 255, 0, 0, 0);
  if ( operator new(0x1E4u) )
    v47 = sub_46C3E0(this);
  else
    v47 = 0;
  *(_DWORD *)(this + 480) = v47;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 200))(*(_DWORD *)(this + 480), 100001);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 480) + 112))(*(_DWORD *)(this + 480));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 480) + 68))(*(_DWORD *)(this + 480), 16, 42);
  sub_6026F0(49);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 480) + 204))(*(_DWORD *)(this + 480));
  if ( operator new(0x1E4u) )
    v46 = sub_46C590(this);
  else
    v46 = 0;
  *(_DWORD *)(this + 484) = v46;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 484) + 200))(*(_DWORD *)(this + 484), 100001);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 112))(*(_DWORD *)(this + 484));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 484) + 68))(*(_DWORD *)(this + 484), 77, 42);
  sub_6026F0(50);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 204))(*(_DWORD *)(this + 484));
  if ( operator new(0x1E4u) )
    v45 = sub_46C740(this);
  else
    v45 = 0;
  *(_DWORD *)(this + 488) = v45;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 488) + 200))(*(_DWORD *)(this + 488), 100001);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 488) + 112))(*(_DWORD *)(this + 488));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 488) + 68))(*(_DWORD *)(this + 488), 138, 42);
  sub_6026F0(51);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 488) + 204))(*(_DWORD *)(this + 488));
  if ( operator new(0x1E4u) )
    v44 = sub_46C8F0(this);
  else
    v44 = 0;
  *(_DWORD *)(this + 492) = v44;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 492) + 200))(*(_DWORD *)(this + 492), 100001);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 112))(*(_DWORD *)(this + 492));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 492) + 68))(*(_DWORD *)(this + 492), 199, 42);
  sub_6026F0(52);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 204))(*(_DWORD *)(this + 492));
  if ( operator new(0x1E4u) )
    v43 = sub_46CAA0(this);
  else
    v43 = 0;
  *(_DWORD *)(this + 496) = v43;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 496) + 200))(*(_DWORD *)(this + 496), 100001);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 112))(*(_DWORD *)(this + 496));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 496) + 68))(*(_DWORD *)(this + 496), 260, 42);
  sub_6026F0(53);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 204))(*(_DWORD *)(this + 496));
  v58 = operator new(0x1D0u);
  if ( v58 )
  {
    sub_5EC5A0(v58);
    v42 = v2;
  }
  else
  {
    v42 = 0;
  }
  *(_DWORD *)(this + 500) = v42;
  sub_519960(*(_DWORD *)(this + 500), 1);
  sub_5ECC60(55);
  sub_5ECCB0(25);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 500) + 68))(*(_DWORD *)(this + 500), 16, 123);
  v3 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 500) + 180))(*(_DWORD *)(this + 500), v3);
  v57 = operator new(0x1D0u);
  if ( v57 )
  {
    sub_5EC5A0(v57);
    v41 = v4;
  }
  else
  {
    v41 = 0;
  }
  *(_DWORD *)(this + 504) = v41;
  sub_519960(*(_DWORD *)(this + 504), 1);
  sub_5ECC60(55);
  sub_5ECCB0(25);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 504) + 68))(*(_DWORD *)(this + 504), 77, 123);
  v5 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 180))(*(_DWORD *)(this + 504), v5);
  v56 = operator new(0x1D0u);
  if ( v56 )
  {
    sub_5EC5A0(v56);
    v40 = v6;
  }
  else
  {
    v40 = 0;
  }
  *(_DWORD *)(this + 508) = v40;
  sub_519960(*(_DWORD *)(this + 508), 1);
  sub_5ECC60(55);
  sub_5ECCB0(25);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 508) + 68))(*(_DWORD *)(this + 508), 138, 123);
  v7 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 508) + 180))(*(_DWORD *)(this + 508), v7);
  v55 = operator new(0x1D0u);
  if ( v55 )
  {
    sub_5EC5A0(v55);
    v39 = v8;
  }
  else
  {
    v39 = 0;
  }
  *(_DWORD *)(this + 512) = v39;
  sub_519960(*(_DWORD *)(this + 512), 1);
  sub_5ECC60(55);
  sub_5ECCB0(25);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 512) + 68))(*(_DWORD *)(this + 512), 199, 123);
  v9 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 512) + 180))(*(_DWORD *)(this + 512), v9);
  v54 = operator new(0x1D0u);
  if ( v54 )
  {
    sub_5EC5A0(v54);
    v38 = v10;
  }
  else
  {
    v38 = 0;
  }
  *(_DWORD *)(this + 516) = v38;
  sub_519960(*(_DWORD *)(this + 516), 1);
  sub_5ECC60(55);
  sub_5ECCB0(25);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 516) + 68))(*(_DWORD *)(this + 516), 260, 123);
  v11 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v11);
  v53 = operator new(0x178u);
  if ( v53 )
  {
    sub_5EAAF0(v53);
    v37 = v12;
  }
  else
  {
    v37 = 0;
  }
  *(_DWORD *)(this + 520) = v37;
  sub_5EAF00(101000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 112))(*(_DWORD *)(this + 520));
  v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 480) + 84))(*(_DWORD *)(this + 480));
  v14 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 76))(*(_DWORD *)(this + 480), v13);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 520) + 68))(*(_DWORD *)(this + 520), v14 + 5);
  v52 = operator new(0x178u);
  if ( v52 )
  {
    sub_5EAAF0(v52);
    v36 = v15;
  }
  else
  {
    v36 = 0;
  }
  *(_DWORD *)(this + 524) = v36;
  sub_5EAF00(101000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 524) + 112))(*(_DWORD *)(this + 524));
  v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 84))(*(_DWORD *)(this + 484));
  v17 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 484) + 76))(*(_DWORD *)(this + 484), v16);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 524) + 68))(*(_DWORD *)(this + 524), v17 + 5);
  v51 = operator new(0x178u);
  if ( v51 )
  {
    sub_5EAAF0(v51);
    v35 = v18;
  }
  else
  {
    v35 = 0;
  }
  *(_DWORD *)(this + 528) = v35;
  sub_5EAF00(101000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 528) + 112))(*(_DWORD *)(this + 528));
  v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 488) + 84))(*(_DWORD *)(this + 488));
  v20 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 488) + 76))(*(_DWORD *)(this + 488), v19);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 528) + 68))(*(_DWORD *)(this + 528), v20 + 5);
  v50 = operator new(0x178u);
  if ( v50 )
  {
    sub_5EAAF0(v50);
    v34 = v21;
  }
  else
  {
    v34 = 0;
  }
  *(_DWORD *)(this + 532) = v34;
  sub_5EAF00(101000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 532) + 112))(*(_DWORD *)(this + 532));
  v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 492) + 84))(*(_DWORD *)(this + 492));
  v23 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 492) + 76))(*(_DWORD *)(this + 492), v22);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 532) + 68))(*(_DWORD *)(this + 532), v23 + 5);
  v49 = operator new(0x178u);
  if ( v49 )
  {
    sub_5EAAF0(v49);
    v33 = v24;
  }
  else
  {
    v33 = 0;
  }
  *(_DWORD *)(this + 536) = v33;
  sub_5EAF00(101000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 536) + 112))(*(_DWORD *)(this + 536));
  v25 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 84))(*(_DWORD *)(this + 496));
  v26 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 496) + 76))(*(_DWORD *)(this + 496), v25);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 536) + 68))(*(_DWORD *)(this + 536), v26 + 5);
  sub_519900(*(_DWORD *)(this + 480), 1);
  sub_519900(*(_DWORD *)(this + 484), 1);
  sub_519900(*(_DWORD *)(this + 488), 1);
  sub_519900(*(_DWORD *)(this + 492), 1);
  sub_519900(*(_DWORD *)(this + 496), 1);
  sub_519900(*(_DWORD *)(this + 520), 0);
  sub_519900(*(_DWORD *)(this + 524), 0);
  sub_519900(*(_DWORD *)(this + 528), 0);
  sub_519900(*(_DWORD *)(this + 532), 0);
  sub_519900(*(_DWORD *)(this + 536), 0);
  IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 480));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 520) + 108))(*(_DWORD *)(this + 520), IsFixedSize + 1);
  v28 = CMediaType::IsFixedSize(*(CMediaType **)(this + 484));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 524) + 108))(*(_DWORD *)(this + 524), v28 + 1);
  v29 = CMediaType::IsFixedSize(*(CMediaType **)(this + 488));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 528) + 108))(*(_DWORD *)(this + 528), v29 + 1);
  v30 = CMediaType::IsFixedSize(*(CMediaType **)(this + 492));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 532) + 108))(*(_DWORD *)(this + 532), v30 + 1);
  v31 = CMediaType::IsFixedSize(*(CMediaType **)(this + 496));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 536) + 108))(*(_DWORD *)(this + 536), v31 + 1);
  return (*(int (__cdecl **)(int))(**(_DWORD **)(this + 444) + 68))(126);
}


//======================================================================
// sub_46B8E0
// entry 0046b8e0  size 103  status ok
//======================================================================

int __thiscall sub_46B8E0(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a2 + 24) == 4 && tolower(*(char *)(a2 + 20)) == 116 )
        sub_5DB240(dword_791EB8);
      return sub_5F72F0(a2);
    }
  }
  return result;
}


//======================================================================
// sub_46B950
// entry 0046b950  size 2702  status ok
//======================================================================

void __thiscall sub_46B950(int this, int a2, int a3)
{
  Concurrency::details::_CancellationTokenRegistration *v3; // eax
  int v4; // eax
  Concurrency::details::_CancellationTokenRegistration *v5; // eax
  int v6; // eax
  Concurrency::details::_CancellationTokenRegistration *v7; // eax
  int v8; // eax
  Concurrency::details::_CancellationTokenRegistration *v9; // eax
  int v10; // eax
  Concurrency::details::_CancellationTokenRegistration *v11; // eax
  int v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  int v25; // [esp-4h] [ebp-4B8h]
  int v26; // [esp-4h] [ebp-4B8h]
  int v27; // [esp-4h] [ebp-4B8h]
  int v28; // [esp-4h] [ebp-4B8h]
  int v29; // [esp-4h] [ebp-4B8h]
  int v30; // [esp-4h] [ebp-4B8h]
  int v31; // [esp-4h] [ebp-4B8h]
  int v32; // [esp-4h] [ebp-4B8h]
  int v33; // [esp-4h] [ebp-4B8h]
  int v34; // [esp-4h] [ebp-4B8h]
  int v35; // [esp-4h] [ebp-4B8h]
  int v36; // [esp-4h] [ebp-4B8h]
  char v38; // [esp+Ch] [ebp-4A8h] BYREF
  char v39; // [esp+Dh] [ebp-4A7h] BYREF
  char v40; // [esp+Eh] [ebp-4A6h] BYREF
  char v41; // [esp+Fh] [ebp-4A5h] BYREF
  char v42; // [esp+10h] [ebp-4A4h] BYREF
  char v43; // [esp+11h] [ebp-4A3h] BYREF
  char v44; // [esp+12h] [ebp-4A2h] BYREF
  char v45; // [esp+13h] [ebp-4A1h] BYREF
  char v46; // [esp+14h] [ebp-4A0h] BYREF
  char v47; // [esp+15h] [ebp-49Fh] BYREF
  char v48; // [esp+16h] [ebp-49Eh] BYREF
  char v49; // [esp+17h] [ebp-49Dh] BYREF
  char Destination[108]; // [esp+18h] [ebp-49Ch] BYREF
  int v51; // [esp+84h] [ebp-430h]
  int v52; // [esp+88h] [ebp-42Ch]
  _BYTE v53[8]; // [esp+8Ch] [ebp-428h] BYREF
  struct Concurrency::details::_CancellationTokenState *Token; // [esp+94h] [ebp-420h]
  char Buffer[1028]; // [esp+98h] [ebp-41Ch] BYREF
  _BYTE v56[4]; // [esp+4A0h] [ebp-14h] BYREF
  __int16 i; // [esp+4A4h] [ebp-10h]
  int v58; // [esp+4B0h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"nDiscardLimitIn >= 1", "..\\Casino\\PokerDialog.cpp", 1331);
  if ( a2 > 5 )
    sub_5E9F20((char)"nDiscardLimitIn <= 5", "..\\Casino\\PokerDialog.cpp", 1332);
  sub_57AB80(11, &unk_71C920);
  *(_DWORD *)(this + 540) = a2;
  *(_DWORD *)(this + 544) = 0;
  v52 = sub_47E3B0(dword_791364);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 480) + 200))(*(_DWORD *)(this + 480), 100001);
  v3 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(4);
  Token = Concurrency::details::_CancellationTokenRegistration::_GetToken(v3);
  (*(void (__thiscall **)(_DWORD, struct Concurrency::details::_CancellationTokenState *))(**(_DWORD **)(this + 480)
                                                                                         + 176))(
    *(_DWORD *)(this + 480),
    Token);
  sub_6023D0(Token, Token, Token, Token);
  *(_BYTE *)(*(_DWORD *)(this + 480) + 476) = 0;
  v4 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 500) + 180))(*(_DWORD *)(this + 500), v4);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 112))(*(_DWORD *)(this + 520));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 484) + 200))(*(_DWORD *)(this + 484), 100001);
  v5 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(3);
  Token = Concurrency::details::_CancellationTokenRegistration::_GetToken(v5);
  (*(void (__thiscall **)(_DWORD, struct Concurrency::details::_CancellationTokenState *))(**(_DWORD **)(this + 484)
                                                                                         + 176))(
    *(_DWORD *)(this + 484),
    Token);
  sub_6023D0(Token, Token, Token, Token);
  *(_BYTE *)(*(_DWORD *)(this + 484) + 476) = 0;
  v6 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 180))(*(_DWORD *)(this + 504), v6);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 524) + 112))(*(_DWORD *)(this + 524));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 488) + 200))(*(_DWORD *)(this + 488), 100001);
  v7 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(2);
  Token = Concurrency::details::_CancellationTokenRegistration::_GetToken(v7);
  (*(void (__thiscall **)(_DWORD, struct Concurrency::details::_CancellationTokenState *))(**(_DWORD **)(this + 488)
                                                                                         + 176))(
    *(_DWORD *)(this + 488),
    Token);
  sub_6023D0(Token, Token, Token, Token);
  *(_BYTE *)(*(_DWORD *)(this + 488) + 476) = 0;
  v8 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 508) + 180))(*(_DWORD *)(this + 508), v8);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 528) + 112))(*(_DWORD *)(this + 528));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 492) + 200))(*(_DWORD *)(this + 492), 100001);
  v9 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(1);
  Token = Concurrency::details::_CancellationTokenRegistration::_GetToken(v9);
  (*(void (__thiscall **)(_DWORD, struct Concurrency::details::_CancellationTokenState *))(**(_DWORD **)(this + 492)
                                                                                         + 176))(
    *(_DWORD *)(this + 492),
    Token);
  sub_6023D0(Token, Token, Token, Token);
  *(_BYTE *)(*(_DWORD *)(this + 492) + 476) = 0;
  v10 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 512) + 180))(*(_DWORD *)(this + 512), v10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 532) + 112))(*(_DWORD *)(this + 532));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 496) + 200))(*(_DWORD *)(this + 496), 100001);
  v11 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(0);
  Token = Concurrency::details::_CancellationTokenRegistration::_GetToken(v11);
  (*(void (__thiscall **)(_DWORD, struct Concurrency::details::_CancellationTokenState *))(**(_DWORD **)(this + 496)
                                                                                         + 176))(
    *(_DWORD *)(this + 496),
    Token);
  sub_6023D0(Token, Token, Token, Token);
  *(_BYTE *)(*(_DWORD *)(this + 496) + 476) = 0;
  v12 = sub_630F40("SID_POKER_HOLD");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 516) + 180))(*(_DWORD *)(this + 516), v12);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 536) + 112))(*(_DWORD *)(this + 536));
  sub_5F85D0(this);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, char *))(*(_DWORD *)dword_162EE84 + 948))(
    dword_162EE84,
    *(_DWORD *)(dword_791364 + 204),
    Destination);
  v13 = (const char *)sub_630F40("SID_POKER_HINT_CHARACTERMOVE");
  sprintf(Buffer, v13, Destination);
  sub_57BE80(10, 0, Buffer);
  v14 = (const char *)sub_630F40("SID_POKER_DISCARDINSTRUCTIONS");
  strcpy(Buffer, v14);
  sub_57BE80(0, 0, Buffer);
  v51 = sub_47E3B0(dword_791364);
  sub_4C7C40(v53);
  v58 = 0;
  sub_485940(v56, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v58) = 1;
  v25 = dword_791398;
  sub_4A2160(&v49);
  if ( (unsigned __int8)sub_4A1E10(v25)
    || (v26 = dword_7913D4, sub_4A2160(&v48), (unsigned __int8)sub_4A1E10(v26))
    || (v27 = dword_7913A0, sub_4A2160(&v47), (unsigned __int8)sub_4A1E10(v27))
    || (v28 = dword_79140C, sub_4A2160(&v46), (unsigned __int8)sub_4A1E10(v28)) )
  {
    v29 = dword_791398;
    sub_4A2160(&v45);
    if ( (unsigned __int8)sub_4A1E10(v29) )
    {
      v15 = (const char *)sub_630F40("SID_POKER_HAND_STRAIGHTFLUSH");
      strcpy(Destination, v15);
    }
    v30 = dword_7913D4;
    sub_4A2160(&v44);
    if ( (unsigned __int8)sub_4A1E10(v30) )
    {
      v16 = (const char *)sub_630F40("SID_POKER_HAND_FULLHOUSE");
      strcpy(Destination, v16);
    }
    v31 = dword_7913A0;
    sub_4A2160(&v43);
    if ( (unsigned __int8)sub_4A1E10(v31) )
    {
      v17 = (const char *)sub_630F40("SID_POKER_HAND_FLUSH");
      strcpy(Destination, v17);
    }
    v32 = dword_79140C;
    sub_4A2160(&v42);
    if ( (unsigned __int8)sub_4A1E10(v32) )
    {
      v18 = (const char *)sub_630F40("SID_POKER_HAND_STRAIGHT");
      strcpy(Destination, v18);
    }
    v19 = (const char *)sub_630F40("SID_POKER_HINT_GREATHAND_FORMAT");
    sprintf(Buffer, v19, Destination);
  }
  else
  {
    v33 = dword_791394;
    sub_4A2160(&v41);
    if ( (unsigned __int8)sub_4A1E10(v33) )
    {
      v20 = (const char *)sub_630F40("SID_POKER_HINT_FOUROFAKIND");
      strcpy(Buffer, v20);
    }
    else
    {
      v34 = dword_791418;
      sub_4A2160(&v40);
      if ( (unsigned __int8)sub_4A1E10(v34) )
      {
        v21 = (const char *)sub_630F40("SID_POKER_HINT_THREEOFAKIND");
        strcpy(Buffer, v21);
      }
      else
      {
        v35 = dword_791380;
        sub_4A2160(&v39);
        if ( (unsigned __int8)sub_4A1E10(v35) )
        {
          v22 = (const char *)sub_630F40("SID_POKER_HINT_TWOPAIR");
          strcpy(Buffer, v22);
        }
        else
        {
          v36 = dword_7913B0;
          sub_4A2160(&v38);
          if ( (unsigned __int8)sub_4A1E10(v36) )
            v23 = (const char *)sub_630F40("SID_POKER_HINT_ONEPAIR");
          else
            v23 = (const char *)sub_630F40("SID_POKER_HINT_HIGHCARD");
          strcpy(Buffer, v23);
        }
      }
    }
  }
  if ( sub_47E280(dword_791364) == 1 )
  {
    v24 = (const char *)sub_630F40("SID_POKER_HINT_LOW");
    strcpy(Buffer, v24);
  }
  sub_57BE80(1, 0, Buffer);
  if ( a3 )
  {
    for ( i = 0; i < 5; ++i )
      *(_BYTE *)(this + i + 548) = *(_BYTE *)(a3 + i);
  }
  else
  {
    sub_5E9F20((char)"bDefault", "..\\Casino\\PokerDialog.cpp", 1425);
    for ( i = 0; i < 5; ++i )
      *(_BYTE *)(this + i + 548) = 0;
  }
  LOBYTE(v58) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(v56);
  v58 = -1;
  sub_484470(v53);
}


//======================================================================
// sub_46C3E0
// entry 0046c3e0  size 55  status ok
//======================================================================

int __thiscall sub_46C3E0(void *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v3 = &CardOneButton::`vftable';
  *(_DWORD *)(v3 + 480) = a2;
  *(_BYTE *)(v3 + 476) = 0;
  return v3;
}


//======================================================================
// sub_46C420
// entry 0046c420  size 356  status ok
//======================================================================

int __thiscall sub_46C420(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 476) )
  {
    --*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 0;
    v1 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 500) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 500),
      v1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 520) + 112))(*(_DWORD *)(*(_DWORD *)(this + 480) + 520));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(this + 480) + 544) < *(_DWORD *)(*(_DWORD *)(this + 480) + 540) )
  {
    ++*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 1;
    v2 = sub_630F40("SID_POKER_DISCARD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 500) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 500),
      v2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 520) + 116))(*(_DWORD *)(*(_DWORD *)(this + 480) + 520));
  }
  return sub_519A40(1);
}


//======================================================================
// sub_46C590
// entry 0046c590  size 55  status ok
//======================================================================

int __thiscall sub_46C590(void *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v3 = &CardTwoButton::`vftable';
  *(_DWORD *)(v3 + 480) = a2;
  *(_BYTE *)(v3 + 476) = 0;
  return v3;
}


//======================================================================
// sub_46C5D0
// entry 0046c5d0  size 356  status ok
//======================================================================

int __thiscall sub_46C5D0(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 476) )
  {
    --*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 0;
    v1 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 504) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 504),
      v1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 524) + 112))(*(_DWORD *)(*(_DWORD *)(this + 480) + 524));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(this + 480) + 544) < *(_DWORD *)(*(_DWORD *)(this + 480) + 540) )
  {
    ++*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 1;
    v2 = sub_630F40("SID_POKER_DISCARD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 504) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 504),
      v2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 524) + 116))(*(_DWORD *)(*(_DWORD *)(this + 480) + 524));
  }
  return sub_519A40(2);
}


//======================================================================
// sub_46C740
// entry 0046c740  size 55  status ok
//======================================================================

int __thiscall sub_46C740(void *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v3 = &CardThreeButton::`vftable';
  *(_DWORD *)(v3 + 480) = a2;
  *(_BYTE *)(v3 + 476) = 0;
  return v3;
}


//======================================================================
// sub_46C780
// entry 0046c780  size 356  status ok
//======================================================================

int __thiscall sub_46C780(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 476) )
  {
    --*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 0;
    v1 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 508) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 508),
      v1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 528) + 112))(*(_DWORD *)(*(_DWORD *)(this + 480) + 528));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(this + 480) + 544) < *(_DWORD *)(*(_DWORD *)(this + 480) + 540) )
  {
    ++*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 1;
    v2 = sub_630F40("SID_POKER_DISCARD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 508) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 508),
      v2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 528) + 116))(*(_DWORD *)(*(_DWORD *)(this + 480) + 528));
  }
  return sub_519A40(3);
}


//======================================================================
// sub_46C8F0
// entry 0046c8f0  size 55  status ok
//======================================================================

int __thiscall sub_46C8F0(void *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v3 = &CardFourButton::`vftable';
  *(_DWORD *)(v3 + 480) = a2;
  *(_BYTE *)(v3 + 476) = 0;
  return v3;
}


//======================================================================
// sub_46C930
// entry 0046c930  size 356  status ok
//======================================================================

int __thiscall sub_46C930(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 476) )
  {
    --*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 0;
    v1 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 512) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 512),
      v1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 532) + 112))(*(_DWORD *)(*(_DWORD *)(this + 480) + 532));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(this + 480) + 544) < *(_DWORD *)(*(_DWORD *)(this + 480) + 540) )
  {
    ++*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 1;
    v2 = sub_630F40("SID_POKER_DISCARD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 512) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 512),
      v2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 532) + 116))(*(_DWORD *)(*(_DWORD *)(this + 480) + 532));
  }
  return sub_519A40(4);
}


//======================================================================
// sub_46CAA0
// entry 0046caa0  size 55  status ok
//======================================================================

int __thiscall sub_46CAA0(void *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v3 = &CardFiveButton::`vftable';
  *(_DWORD *)(v3 + 480) = a2;
  *(_BYTE *)(v3 + 476) = 0;
  return v3;
}


//======================================================================
// sub_46CAE0
// entry 0046cae0  size 356  status ok
//======================================================================

int __thiscall sub_46CAE0(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 476) )
  {
    --*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 0;
    v1 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 516) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 516),
      v1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 536) + 112))(*(_DWORD *)(*(_DWORD *)(this + 480) + 536));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(this + 480) + 544) < *(_DWORD *)(*(_DWORD *)(this + 480) + 540) )
  {
    ++*(_DWORD *)(*(_DWORD *)(this + 480) + 544);
    *(_BYTE *)(this + 476) = 1;
    v2 = sub_630F40("SID_POKER_DISCARD");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 480) + 516) + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 480) + 516),
      v2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 480) + 536) + 116))(*(_DWORD *)(*(_DWORD *)(this + 480) + 536));
  }
  return sub_519A40(5);
}


//======================================================================
// sub_46CD10
// entry 0046cd10  size 3789  status ok
//======================================================================

int __cdecl sub_46CD10(char a1, int a2, int a3, int a4)
{
  Concurrency::details::SchedulerProxy *v4; // eax
  Concurrency::details::VirtualProcessor *v5; // eax
  __int16 ExecutingContext; // ax
  int v7; // esi
  int v8; // esi
  __int16 v9; // ax
  Concurrency::details::SchedulerProxy *v10; // eax
  Concurrency::details::VirtualProcessor *v11; // eax
  __int16 v12; // ax
  __int16 v13; // ax
  int v14; // esi
  __int16 v15; // ax
  int v17; // esi
  int v18; // esi
  __int16 v19; // si
  int v20; // esi
  int v21; // esi
  __int16 v22; // ax
  int v23; // esi
  __int16 v24; // ax
  __int16 v25; // ax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // esi
  int v33; // eax
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // [esp+10h] [ebp-8Ch]
  int v38; // [esp+1Ch] [ebp-80h]
  int v39; // [esp+28h] [ebp-74h]
  double v40; // [esp+30h] [ebp-6Ch]
  double v41; // [esp+3Ch] [ebp-60h]
  double v42; // [esp+4Ch] [ebp-50h]
  double v43; // [esp+54h] [ebp-48h]
  double v44; // [esp+5Ch] [ebp-40h]
  int v45; // [esp+68h] [ebp-34h]
  double v46; // [esp+6Ch] [ebp-30h]
  double v47; // [esp+74h] [ebp-28h]
  __int16 v48; // [esp+7Ch] [ebp-20h]
  int k; // [esp+80h] [ebp-1Ch]
  __int16 j; // [esp+84h] [ebp-18h]
  __int16 v51; // [esp+88h] [ebp-14h]
  __int16 i; // [esp+8Ch] [ebp-10h]
  __int16 v53; // [esp+90h] [ebp-Ch]
  __int16 v54; // [esp+94h] [ebp-8h]
  int v55; // [esp+98h] [ebp-4h]

  v55 = sub_47E420(dword_791364);
  if ( v55 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerDrawai.cpp", 456);
  if ( v55 >= sub_47F950(dword_791364) )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerDrawai.cpp", 457);
  dword_791048 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
  if ( word_790FB8[v55] == 2 - (a1 != 0) )
  {
    if ( word_79104C[v55] == a3 || word_791020[v55] == 6 || word_791020[v55] == 7 || word_791020[v55] == 2 )
    {
      dbl_791260[v55] = sub_46DC80(a1, a2);
    }
    else
    {
      word_79104C[v55] = a3;
      sub_46E1F0(a1, a3);
      dbl_791260[v55] = sub_46DC80(a1, a2);
      word_791020[v55] = 1;
    }
  }
  else
  {
    if ( a1 )
      sub_46E6F0();
    sub_46E1F0(a1, a3);
    if ( a1 )
    {
      v54 = 0;
      for ( i = 0; i < sub_47F950(dword_791364); ++i )
      {
        if ( i != v55 )
        {
          v4 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v4) == 1 )
          {
            v5 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
            ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v5);
            v54 += sub_4F6A90(ExecutingContext);
          }
        }
      }
      v53 = sub_4E04D0(dword_791048);
      v7 = sub_62FBF0(v53);
      v8 = v7 - sub_62FBF0(v53);
      v9 = sub_4E0490(dword_791048);
      word_791010[v55] = v8 - sub_62FBF0(v9 + 1) * v54;
    }
    else
    {
      v51 = 0;
      for ( j = 0; j < sub_47F950(dword_791364); ++j )
      {
        if ( j != v55 )
        {
          v10 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v10) == 1 )
          {
            v11 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
            v12 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v11);
            v51 += sub_4F6A90(v12);
          }
        }
      }
      v13 = sub_4E0490(dword_791048);
      word_791010[v55] -= sub_62FBF0(v13 + 1) * v51;
    }
    word_790FB8[v55] = 2 - (a1 != 0);
    word_79104C[v55] = a3;
    dbl_791260[v55] = sub_46DC80(a1, a2);
    word_791020[v55] = 1;
    switch ( word_791030[v55] )
    {
      case 28:
        word_791020[v55] = 6;
        break;
      case 27:
        word_791020[v55] = 7;
        break;
      case 26:
        word_791020[v55] = 7;
        break;
      default:
        if ( word_791030[v55] == 25 && (int)sub_62FBF0(5) < 4 )
        {
          word_791020[v55] = 7;
        }
        else if ( word_791030[v55] == 24 && (int)sub_62FBF0(5) < 3 )
        {
          word_791020[v55] = 7;
        }
        break;
    }
  }
  if ( a1
    && a4 > 1
    && (unsigned __int8)sub_4F6640(dword_791364 + 56)
    && word_791030[v55] >= 14
    && word_791030[v55] <= 28 )
  {
    for ( k = 1; k < a4 + (sub_47F950(dword_791364) - a2) / 2; ++k )
    {
      v14 = sub_62FBF0(100);
      if ( v14 < (__int16)sub_4E1650(dword_791048) )
      {
        v15 = sub_62FBF0(3);
        sub_4C79D0(v15 + 1);
        return 2;
      }
    }
  }
  switch ( word_791020[v55] )
  {
    case 6:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( (unsigned __int8)sub_46DBE0() || sub_62FBF0(20) )
          return 2;
        else
          return 1;
      }
      else if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
      {
        return 4;
      }
      else
      {
        return 3;
      }
    case 7:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( (unsigned __int8)sub_46DBE0() || sub_62FBF0(10) )
          return 2;
        else
          return 1;
      }
      else if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
      {
        v17 = sub_62FBF0(100);
        if ( v17 < (__int16)sub_4E0390(dword_791048) )
        {
          v18 = sub_62FBF0(100);
          if ( v18 < (__int16)sub_4E0390(dword_791048) )
            word_791020[v55] = 5;
        }
        return 4;
      }
      else
      {
        return 3;
      }
    case 1:
      if ( (unsigned __int8)sub_4F6690(dword_791364 + 56) )
      {
        v46 = 1.25;
        if ( a1 )
          v46 = (double)sub_4C6DB0(dword_791048) / 100.0 + 1.25;
        v41 = ((double)(int)CMFCCaptionBar::OnGetFont(dword_791048) / 100.0 + dbl_791260[v55]) * dbl_791260[v55] * v46;
        v40 = (double)sub_4F67D0(dword_791364 + 56);
        v47 = v41 / (v40 / (double)sub_4F6840(dword_791364 + 56));
        v19 = sub_4E1520(dword_791048);
        v48 = (sub_62FBF0(a3 - 1) + 1) * v19;
        if ( a1 && sub_47D6B0(dword_791364) != 1 )
          v48 = 0;
        v20 = sub_62FBF0(v48);
        v21 = sub_62FBF0(v48) + v20;
        v45 = v21 - sub_62FBF0(v48);
        if ( a1 )
        {
          v22 = sub_4DF9E0(dword_791048);
          v45 -= sub_62FBF0(v22);
          if ( !sub_47D6B0(dword_791364) )
          {
            v23 = sub_4F67D0(dword_791364 + 56);
            if ( v23 <= CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) )
            {
              v24 = sub_4DF9E0(dword_791048);
              v45 -= sub_62FBF0(v24);
            }
          }
        }
        if ( a1 && !sub_47D6B0(dword_791364) )
        {
          v25 = sub_4DF9E0(dword_791048);
          v45 -= sub_62FBF0(v25 / 2);
        }
        if ( v45 < -19 )
          v45 = -19;
        if ( (double)v45 / 20.0 + 1.0 >= v47 )
          return 0;
        if ( !(unsigned __int8)sub_46E2F0(a1, a3) )
        {
          v26 = sub_62FBF0(100);
          if ( v26 < (__int16)sub_4E11F0(dword_791048) )
            word_791020[v55] = 2;
          return 3;
        }
      }
      else if ( !(unsigned __int8)sub_46E2F0(a1, a3) )
      {
        return 1;
      }
      break;
  }
  switch ( word_791020[v55] )
  {
    case 5:
    case 10:
      if ( word_791020[v55] == 5 )
      {
        v27 = sub_47CE60(dword_791364);
        v39 = sub_4C6EF0(a1 == 0, v27);
      }
      else
      {
        v39 = sub_4C6F50(dword_791048);
      }
      v44 = (double)(int)sub_62FBF0(100 - v39);
      if ( (double)(__int16)sub_46E810(a1, 3, a3) > v44 )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791020[v55] == 10 )
        {
          return 0;
        }
        v28 = sub_62FBF0(100);
        if ( v28 >= (__int16)sub_4E0390(dword_791048) )
        {
          v29 = sub_62FBF0(100);
          if ( v29 < (__int16)sub_4E03B0(dword_791048) )
            word_791020[v55] = 1;
        }
        else
        {
          word_791020[v55] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 9:
      if ( word_791020[v55] == 4 )
      {
        v30 = sub_47CE60(dword_791364);
        v38 = sub_4C6EF0(a1 == 0, v30);
      }
      else
      {
        v38 = sub_4C6F50(dword_791048);
      }
      v43 = (double)(int)sub_62FBF0(100 - v38);
      if ( (double)(__int16)sub_46E810(a1, 2, a3) > v43 )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791020[v55] == 9 )
        {
          return 0;
        }
        v31 = sub_62FBF0(100);
        if ( v31 >= (__int16)sub_4E0390(dword_791048) )
        {
          v32 = sub_62FBF0(100);
          if ( v32 < (__int16)sub_4E03B0(dword_791048) )
            word_791020[v55] = 1;
        }
        else
        {
          word_791020[v55] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) )
          return 4;
        if ( word_791020[v55] == 9 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 8:
      if ( word_791020[v55] == 3 )
      {
        v33 = sub_47CE60(dword_791364);
        v37 = sub_4C6EF0(a1 == 0, v33);
      }
      else
      {
        v37 = sub_4C6F50(dword_791048);
      }
      v42 = (double)(int)sub_62FBF0(100 - v37);
      if ( (double)(__int16)sub_46E810(a1, 1, a3) > v42 )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791020[v55] == 8 )
        {
          return 0;
        }
        v34 = sub_62FBF0(100);
        if ( v34 >= (__int16)sub_4E0390(dword_791048) )
        {
          v35 = sub_62FBF0(100);
          if ( v35 < (__int16)sub_4E03B0(dword_791048) )
            word_791020[v55] = 1;
        }
        else
        {
          word_791020[v55] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(3) )
          return 4;
        if ( word_791020[v55] == 8 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_173;
  switch ( word_791020[v55] )
  {
    case 10:
      return 0;
    case 9:
      return 0;
    case 8:
      return 0;
  }
LABEL_173:
  v36 = sub_62FBF0(100);
  if ( v36 < (__int16)sub_4E03B0(dword_791048) )
    word_791020[v55] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_46DBE0
// entry 0046dbe0  size 155  status ok
//======================================================================

char sub_46DBE0()
{
  Concurrency::details::SchedulerProxy *v0; // eax
  Concurrency::details::VirtualProcessor *v1; // eax
  __int16 ExecutingContext; // ax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    if ( i != sub_47E420(dword_791364) )
    {
      v0 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v0) == 1 )
      {
        v1 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v1);
        if ( (__int16)sub_4F69E0(ExecutingContext) != 1 )
          return 0;
      }
    }
  }
  return 1;
}


//======================================================================
// sub_46DC80
// entry 0046dc80  size 1384  status ok
//======================================================================

double __cdecl sub_46DC80(char a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  double v5; // [esp+14h] [ebp-90h]
  double v6; // [esp+20h] [ebp-84h]
  double v7; // [esp+2Ch] [ebp-78h]
  double v8; // [esp+38h] [ebp-6Ch]
  double v9; // [esp+44h] [ebp-60h]
  __int16 v10; // [esp+4Ch] [ebp-58h]
  __int16 v11; // [esp+50h] [ebp-54h]
  __int16 v12; // [esp+50h] [ebp-54h]
  __int16 v13; // [esp+54h] [ebp-50h]
  __int16 v14; // [esp+58h] [ebp-4Ch]
  __int16 v15; // [esp+58h] [ebp-4Ch]
  __int16 ExecutingContext; // [esp+5Ch] [ebp-48h]
  __int16 v17; // [esp+60h] [ebp-44h]
  double v18; // [esp+64h] [ebp-40h]
  char v19; // [esp+73h] [ebp-31h]
  double v20; // [esp+74h] [ebp-30h]
  __int16 i; // [esp+84h] [ebp-20h]
  int v22; // [esp+88h] [ebp-1Ch]
  double v23; // [esp+8Ch] [ebp-18h]
  double v24; // [esp+8Ch] [ebp-18h]
  double v25; // [esp+94h] [ebp-10h]
  bool v26; // [esp+A3h] [ebp-1h]

  v22 = sub_47E420(dword_791364);
  v23 = 1.0;
  v25 = sub_4DFAD0(dword_791048) / (double)a2;
  v26 = *((_BYTE *)dword_791048 + 29) != 0;
  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    if ( i != v22 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v20 = 0.0;
        if ( sub_4E1020(i, a2) * dbl_791060[8 * v22 + i] <= v25 )
        {
          v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
          if ( a1 )
          {
            v11 = sub_4F6A90(ExecutingContext);
            v14 = sub_4F6B20(ExecutingContext);
            v10 = 0;
            v17 = 0;
          }
          else
          {
            v12 = sub_4F6880(ExecutingContext);
            v15 = sub_4F6930(ExecutingContext);
            v10 = sub_4F6A90(ExecutingContext) - v12;
            v17 = sub_4F6B20(ExecutingContext) - v15;
            v11 = 2 * v12;
            v14 = 2 * v15;
          }
          if ( v26 )
          {
            v11 *= 2;
            v14 *= 2;
          }
          if ( !a1 || v14 || v11 )
            v13 = 0;
          else
            v13 = sub_4F6BB0(ExecutingContext);
          v9 = 0.0;
          if ( a1 || *(_DWORD *)(sub_47E390(i) + 24) )
          {
            if ( a1 || *(_DWORD *)(sub_47E390(i) + 24) != 1 )
            {
              if ( a1 || *(_DWORD *)(sub_47E390(i) + 24) != 2 )
              {
                if ( !a1 && *(_DWORD *)(sub_47E390(i) + 24) == 3 )
                  v9 = sub_4E00B0(dword_791048);
              }
              else
              {
                v9 = sub_4DFFE0(dword_791048);
              }
            }
            else
            {
              v9 = sub_4DFF10(dword_791048);
            }
          }
          else
          {
            v9 = sub_4DFE40(dword_791048);
          }
          if ( v11 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerDrawai.cpp", 149);
          if ( v14 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerDrawai.cpp", 150);
          if ( v13 < 0 )
            sub_5E9F20((char)"shCurrentChecks >= 0", "..\\Casino\\PokerDrawai.cpp", 151);
          if ( v10 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerDrawai.cpp", 152);
          if ( v17 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerDrawai.cpp", 153);
          v19 = 0;
          v8 = sub_4DFB00(dword_791048) * (double)v10 + 1.0;
          v7 = sub_4DFBD0(dword_791048) * (double)v17 + v8;
          v6 = sub_4DFCA0(dword_791048) * (double)v11 + v7;
          v5 = sub_4DFD70(dword_791048) * (double)v14 + v6;
          v20 = v5 - (double)(__int16)sub_4DF9E0(dword_791048) / 100.0 * (double)v13 + v9;
          if ( *(_BYTE *)(sub_47E390(i) + 29) )
            v20 = sub_4E00B0(dword_791048) + v20;
        }
        else
        {
          v19 = 1;
        }
        v18 = (double)(__int16)sub_4E15D0(word_791030[v22]) / 1000.0;
        if ( v19 )
          v23 = v23 * v18;
        else
          v23 = (1.0 - (1.0 - v18) * v20) * v23;
        if ( v23 < 0.0 )
          v23 = 0.0;
        if ( !a1 && *(_BYTE *)(sub_47E390(i) + 29) && word_791030[v22] < 15 )
          v23 = 0.0;
      }
    }
  }
  if ( byte_7912E0[v22] )
    v23 = (double)(__int16)sub_4E15D0(word_791030[v22]) / 1000.0;
  v24 = v23 * dbl_7912A0[v22];
  if ( v24 > 100.0 )
    return 100.0;
  return v24;
}


//======================================================================
// sub_46E1F0
// entry 0046e1f0  size 243  status ok
//======================================================================

void __cdecl sub_46E1F0(char a1, int a2)
{
  double v2; // [esp+8h] [ebp-24h]
  __int16 v3; // [esp+10h] [ebp-1Ch]
  int v4; // [esp+14h] [ebp-18h]
  _BYTE v5[8]; // [esp+18h] [ebp-14h] BYREF
  int v6; // [esp+28h] [ebp-4h]

  v4 = sub_47E420(dword_791364);
  sub_4C7C40(v5);
  v6 = 0;
  word_791030[v4] = sub_498100();
  byte_7912E0[v4] = 0;
  if ( a1 )
  {
    v3 = sub_498920(v5);
    if ( v3 >= 0 )
    {
      v2 = sub_46DC80(1, a2);
      if ( (double)(__int16)sub_4E15D0(v3) / 1000.0 > v2 )
      {
        word_791030[v4] = v3;
        byte_7912E0[v4] = 1;
      }
    }
  }
  v6 = -1;
  sub_484470(v5);
}


//======================================================================
// sub_46E2F0
// entry 0046e2f0  size 1024  status ok
//======================================================================

char __cdecl sub_46E2F0(char a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  __int16 v4; // ax
  double v5; // st7
  int v6; // eax
  int v8; // eax
  int v9; // eax
  double v10; // [esp+20h] [ebp-48h]
  __int16 i; // [esp+30h] [ebp-38h]
  __int16 v12; // [esp+34h] [ebp-34h]
  int v13; // [esp+38h] [ebp-30h]
  __int16 v14; // [esp+3Ch] [ebp-2Ch]
  __int16 v15; // [esp+40h] [ebp-28h]
  __int16 v16; // [esp+44h] [ebp-24h]
  __int16 v17; // [esp+54h] [ebp-14h]
  double v18; // [esp+58h] [ebp-10h]
  __int16 ExecutingContext; // [esp+60h] [ebp-8h]
  __int16 v20; // [esp+64h] [ebp-4h]

  v13 = sub_47E420(dword_791364);
  v14 = 0;
  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    if ( i != v13 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
        v14 += sub_4F69E0(ExecutingContext);
        if ( (__int16)sub_4F6880(ExecutingContext) > 0 )
        {
          v14 = 0;
          break;
        }
      }
    }
  }
  v4 = sub_4E03D0(dword_791048);
  v16 = sub_62FBF0(v4 + 1);
  if ( v16 * v14 + word_791010[v13] <= 10 )
    v5 = dbl_791260[v13];
  else
    v5 = (double)(word_791010[v13] + v16 * v14 - 10) / 100.0 + dbl_791260[v13];
  v12 = sub_4E1210(3);
  v17 = sub_4E1210(2);
  v15 = sub_4E1210(1);
  v20 = sub_4E1500(dword_791048);
  v10 = (double)(int)sub_62FBF0(v20) / 100.0 + 1.0;
  v18 = (v10 - (double)(int)sub_62FBF0(v20) / 100.0) / (double)a2;
  v6 = sub_47CE60(dword_791364);
  if ( (double)(v12 - sub_4C6F90(a1 == 0, v6)) / 100.0 + v18 >= dbl_791260[v13] )
  {
    if ( byte_791040[v13] )
    {
      word_791020[v13] = 10;
      return 1;
    }
    else
    {
      v8 = sub_47CE60(dword_791364);
      if ( (double)(v17 - sub_4C6F90(a1 == 0, v8)) / 100.0 + v18 >= dbl_791260[v13] )
      {
        if ( byte_791008[v13] )
        {
          word_791020[v13] = 9;
          return 1;
        }
        else
        {
          v9 = sub_47CE60(dword_791364);
          if ( (double)(v15 - sub_4C6F90(a1 == 0, v9)) / 100.0 + v18 >= dbl_791260[v13] )
          {
            if ( (double)(v12 - sub_4C6FD0(dword_791048)) / 100.0 + v18 >= v5 )
            {
              if ( (double)(v17 - sub_4C6FD0(dword_791048)) / 100.0 + v18 >= v5 )
              {
                if ( (double)(v15 - sub_4C6FD0(dword_791048)) / 100.0 + v18 >= v5 )
                {
                  return 0;
                }
                else
                {
                  word_791020[v13] = 8;
                  return 1;
                }
              }
              else
              {
                word_791020[v13] = 9;
                return 1;
              }
            }
            else
            {
              word_791020[v13] = 10;
              return 1;
            }
          }
          else
          {
            word_791020[v13] = 3;
            return 1;
          }
        }
      }
      else
      {
        word_791020[v13] = 4;
        return 1;
      }
    }
  }
  else
  {
    word_791020[v13] = 5;
    return 1;
  }
}


//======================================================================
// sub_46E6F0
// entry 0046e6f0  size 278  status ok
//======================================================================

int sub_46E6F0()
{
  int v0; // esi
  int v1; // esi
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int result; // eax
  int v7; // esi
  int v8; // esi
  __int16 i; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v10 = sub_47E420(dword_791364);
  v0 = sub_62FBF0(21);
  v1 = v0 + sub_62FBF0(21) + 60;
  v2 = sub_62FBF0(21) + v1;
  dbl_7912A0[v10] = (double)(sub_62FBF0(21) + v2) * 0.01;
  v3 = sub_62FBF0(21);
  v4 = v3 + sub_62FBF0(21) + 60;
  v5 = sub_62FBF0(21) + v4;
  dbl_790FC8[v10] = (double)(sub_62FBF0(21) + v5) * 0.01;
  for ( i = 0; ; ++i )
  {
    result = sub_47F950(dword_791364);
    if ( i >= result )
      break;
    v7 = sub_62FBF0(51);
    v8 = v7 + sub_62FBF0(51) + 25;
    dbl_791060[8 * v10 + i] = (double)(sub_62FBF0(51) + v8) * 0.01;
  }
  return result;
}


//======================================================================
// sub_46E810
// entry 0046e810  size 382  status ok
//======================================================================

__int16 __cdecl sub_46E810(char a1, __int16 a2, __int16 a3)
{
  __int16 v3; // ax
  __int16 ExecutingContext; // ax
  __int16 v6; // [esp+0h] [ebp-Ch]
  __int16 v7; // [esp+4h] [ebp-8h]
  __int16 v8; // [esp+8h] [ebp-4h]

  v8 = sub_4E0180(a2);
  if ( a1 || !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
  {
    if ( a1 )
    {
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(dword_791048);
      v6 = sub_4F6880(ExecutingContext) + a3 - 2;
      if ( v6 == 2 )
      {
        return 2 * v8 / 3;
      }
      else if ( v6 == 3 )
      {
        v8 /= 2;
      }
      else if ( v6 > 3 )
      {
        v8 /= 3;
      }
    }
    else
    {
      v3 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(dword_791048);
      v7 = sub_4F6880(v3) + a3 - 2;
      switch ( v7 )
      {
        case 1:
          return 2 * v8 / 3;
        case 2:
          v8 /= 2;
          break;
        case 3:
          v8 /= 3;
          break;
        default:
          if ( v7 > 3 )
            v8 /= 4;
          break;
      }
    }
  }
  else
  {
    v8 += (100 - v8) / 2;
  }
  return v8;
}


//======================================================================
// sub_46E990
// entry 0046e990  size 199  status ok
//======================================================================

void __cdecl sub_46E990(int a1, int a2)
{
  int v2; // edx
  int v3; // [esp+4h] [ebp-1Ch]
  _BYTE v4[8]; // [esp+8h] [ebp-18h] BYREF
  __int16 v5; // [esp+10h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-4h]

  v3 = sub_47E420(dword_791364);
  dword_791048 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
  sub_4C7C40(v4);
  v6 = 0;
  if ( word_790FB8[v3] != 1 )
    sub_46E6F0();
  sub_46E1F0(1, a2);
  v5 = sub_46EA60(v4);
  LOWORD(v2) = v5;
  sub_498C70(word_791030[v3], a1, v2);
  v6 = -1;
  sub_484470(v4);
}


//======================================================================
// sub_46EA60
// entry 0046ea60  size 1223  status ok
//======================================================================

__int16 __cdecl sub_46EA60()
{
  Concurrency::details::SchedulerProxy *v1; // eax
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-40h]
  int v29; // [esp-4h] [ebp-40h]
  int v30; // [esp-4h] [ebp-40h]
  int v31; // [esp-4h] [ebp-40h]
  int v32; // [esp-4h] [ebp-40h]
  char v33; // [esp+13h] [ebp-29h] BYREF
  char v34; // [esp+1Bh] [ebp-21h] BYREF
  char v35; // [esp+1Fh] [ebp-1Dh] BYREF
  char v36; // [esp+23h] [ebp-19h] BYREF
  char v37; // [esp+27h] [ebp-15h] BYREF
  int v38; // [esp+28h] [ebp-14h]
  _BYTE v39[4]; // [esp+2Ch] [ebp-10h] BYREF
  int v40; // [esp+38h] [ebp-4h]

  v38 = sub_47E420(dword_791364);
  byte_791040[v38] = 0;
  byte_791008[v38] = 0;
  if ( byte_7912E0[v38] )
    return -1;
  v1 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  if ( Concurrency::details::SchedulerProxy::GetQueueLength(v1) == 2 )
    return -1;
  sub_485940(v39, 1, 1, 1, 1, 0, 0, 0);
  v40 = 0;
  v28 = dword_791394;
  sub_4A2160(&v37);
  if ( (unsigned __int8)sub_4A1E10(v28) )
  {
    if ( !sub_62FBF0(2) )
    {
      v40 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(v39);
      return 0;
    }
  }
  else
  {
    v29 = dword_791418;
    sub_4A2160(&v36);
    if ( (unsigned __int8)sub_4A1E10(v29) )
    {
      v2 = sub_47E3B0(dword_791364);
      v3 = (__int16)sub_4E1630(v2);
      if ( v3 > sub_62FBF0(20) )
      {
        v40 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(v39);
        return 2;
      }
    }
    else
    {
      v30 = dword_791380;
      sub_4A2160(&v35);
      if ( (unsigned __int8)sub_4A1E10(v30) )
      {
        v4 = sub_47E3B0(dword_791364);
        v5 = (__int16)sub_4E04D0(v4);
        if ( v5 > sub_62FBF0(600) )
        {
          v6 = sub_47E3B0(dword_791364);
          v7 = (__int16)sub_4E04D0(v6);
          if ( v7 > sub_62FBF0(200) )
          {
            byte_791040[v38] = 1;
            v40 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(v39);
            return 0;
          }
        }
      }
      else
      {
        v31 = dword_7913B0;
        sub_4A2160(&v34);
        if ( (unsigned __int8)sub_4A1E10(v31) )
        {
          v8 = sub_47E3B0(dword_791364);
          v9 = (__int16)sub_4E1630(v8);
          if ( v9 > sub_62FBF0(80) )
          {
            v40 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(v39);
            return 2;
          }
          v10 = sub_47E3B0(dword_791364);
          v11 = (__int16)sub_4E04D0(v10);
          if ( v11 > sub_62FBF0(1200) )
          {
            v12 = sub_47E3B0(dword_791364);
            v13 = (__int16)sub_4E04D0(v12);
            if ( v13 > sub_62FBF0(400) )
            {
              byte_791008[v38] = 1;
              v40 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(v39);
              return 1;
            }
          }
          v14 = sub_47E3B0(dword_791364);
          v15 = (__int16)sub_4E04D0(v14);
          if ( v15 > sub_62FBF0(1200) )
          {
            v16 = sub_47E3B0(dword_791364);
            v17 = (__int16)sub_4E04D0(v16);
            if ( v17 > sub_62FBF0(400) )
            {
              byte_791040[v38] = 1;
              v40 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(v39);
              return 0;
            }
          }
        }
        else
        {
          v32 = dword_791390;
          sub_4A2160(&v33);
          if ( (unsigned __int8)sub_4A1E10(v32) )
          {
            v18 = sub_47E3B0(dword_791364);
            v19 = (__int16)sub_4E1630(v18);
            if ( v19 > sub_62FBF0(80) )
            {
              v40 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(v39);
              return 2;
            }
            v20 = sub_47E3B0(dword_791364);
            v21 = (__int16)sub_4E04D0(v20);
            if ( v21 > sub_62FBF0(1200) )
            {
              v22 = sub_47E3B0(dword_791364);
              v23 = (__int16)sub_4E04D0(v22);
              if ( v23 > sub_62FBF0(400) )
              {
                byte_791008[v38] = 1;
                v40 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(v39);
                return 1;
              }
            }
            v24 = sub_47E3B0(dword_791364);
            v25 = (__int16)sub_4E04D0(v24);
            if ( v25 > sub_62FBF0(1200) )
            {
              v26 = sub_47E3B0(dword_791364);
              v27 = (__int16)sub_4E04D0(v26);
              if ( v27 > sub_62FBF0(400) )
              {
                byte_791040[v38] = 1;
                v40 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(v39);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  v40 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(v39);
  return -1;
}


//======================================================================
// sub_46EF30
// entry 0046ef30  size 3550  status ok
//======================================================================

int __cdecl sub_46EF30(char a1, int a2, int a3)
{
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  __int16 ExecutingContext; // ax
  int v6; // esi
  int v7; // esi
  __int16 v8; // ax
  Concurrency::details::SchedulerProxy *v9; // eax
  Concurrency::details::VirtualProcessor *v10; // eax
  __int16 v11; // ax
  __int16 v12; // ax
  int v14; // esi
  int v15; // esi
  __int16 v16; // si
  int v17; // esi
  int v18; // esi
  __int16 v19; // ax
  int v20; // esi
  __int16 v21; // ax
  __int16 v22; // ax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // [esp+8h] [ebp-60h]
  int v38; // [esp+Ch] [ebp-5Ch]
  int v39; // [esp+10h] [ebp-58h]
  double v40; // [esp+18h] [ebp-50h]
  double v41; // [esp+24h] [ebp-44h]
  int v42; // [esp+34h] [ebp-34h]
  double v43; // [esp+38h] [ebp-30h]
  double v44; // [esp+40h] [ebp-28h]
  __int16 v45; // [esp+4Ch] [ebp-1Ch]
  __int16 j; // [esp+50h] [ebp-18h]
  __int16 v47; // [esp+54h] [ebp-14h]
  __int16 i; // [esp+58h] [ebp-10h]
  __int16 v49; // [esp+5Ch] [ebp-Ch]
  __int16 v50; // [esp+60h] [ebp-8h]
  int v51; // [esp+64h] [ebp-4h]

  v51 = sub_47E420(dword_791364);
  if ( v51 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerDrawai.cpp", 1295);
  if ( v51 >= sub_47F950(dword_791364) )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerDrawai.cpp", 1296);
  dword_791048 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
  if ( word_790FB8[v51] == 2 - (a1 != 0) )
  {
    if ( word_79104C[v51] == a3 || word_791020[v51] == 6 || word_791020[v51] == 7 || word_791020[v51] == 2 )
    {
      dbl_791260[v51] = sub_46FD10(a1, a2, 0);
    }
    else
    {
      word_79104C[v51] = a3;
      sub_470210(a1, a3);
      dbl_791260[v51] = sub_46FD10(a1, a2, 0);
      word_791020[v51] = 1;
    }
  }
  else
  {
    if ( a1 )
      sub_4708E0();
    sub_470210(a1, a3);
    if ( a1 )
    {
      v50 = 0;
      for ( i = 0; i < sub_47F950(dword_791364); ++i )
      {
        if ( i != v51 )
        {
          v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
          {
            v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
            ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
            v50 += sub_4F6A90(ExecutingContext);
          }
        }
      }
      v49 = sub_4E9E20(dword_791048);
      v6 = sub_62FBF0(v49);
      v7 = v6 - sub_62FBF0(v49);
      v8 = sub_4E9DE0(dword_791048);
      word_791010[v51] = v7 - sub_62FBF0(v8 + 1) * v50;
    }
    else
    {
      v47 = 0;
      for ( j = 0; j < sub_47F950(dword_791364); ++j )
      {
        if ( j != v51 )
        {
          v9 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v9) == 1 )
          {
            v10 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
            v11 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v10);
            v47 += sub_4F6A90(v11);
          }
        }
      }
      v12 = sub_4E9DE0(dword_791048);
      word_791010[v51] -= sub_62FBF0(v12 + 1) * v47;
    }
    word_790FB8[v51] = 2 - (a1 != 0);
    word_79104C[v51] = a3;
    dbl_791260[v51] = sub_46FD10(a1, a2, 0);
    word_791020[v51] = 1;
    switch ( word_791030[v51] )
    {
      case ')':
        word_791020[v51] = 6;
        break;
      case '(':
        word_791020[v51] = 7;
        break;
      case '\'':
        word_791020[v51] = 7;
        break;
      default:
        if ( word_791030[v51] == 38 && (int)sub_62FBF0(10) < 8 )
        {
          word_791020[v51] = 7;
        }
        else if ( word_791030[v51] == 37 && (int)sub_62FBF0(10) < 7 )
        {
          word_791020[v51] = 7;
        }
        else if ( word_791030[v51] == 36 && (int)sub_62FBF0(10) < 5 )
        {
          word_791020[v51] = 7;
        }
        break;
    }
  }
  switch ( word_791020[v51] )
  {
    case 6:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( sub_46DBE0() || sub_62FBF0(20) )
          return 2;
        else
          return 1;
      }
      else if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
      {
        return 4;
      }
      else
      {
        return 3;
      }
    case 7:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( sub_46DBE0() || sub_62FBF0(10) )
          return 2;
        else
          return 1;
      }
      else if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
      {
        v14 = sub_62FBF0(100);
        if ( v14 < (__int16)sub_4E9CE0(dword_791048) )
        {
          v15 = sub_62FBF0(100);
          if ( v15 < (__int16)sub_4E9CE0(dword_791048) )
            word_791020[v51] = 5;
        }
        return 4;
      }
      else
      {
        return 3;
      }
    case 1:
      if ( (unsigned __int8)sub_4F6690(dword_791364 + 56) )
      {
        v43 = 1.2;
        if ( a1 )
          v43 = (double)sub_4C6DB0(dword_791048) / 100.0 + 1.2;
        v41 = ((double)(int)CMFCCaptionBar::OnGetFont(dword_791048) / 100.0 + dbl_791260[v51]) * dbl_791260[v51] * v43;
        v40 = (double)sub_4F67D0(dword_791364 + 56);
        v44 = v41 / (v40 / (double)sub_4F6840(dword_791364 + 56));
        v16 = sub_4EAE70(dword_791048);
        v45 = (sub_62FBF0(a3 - 1) + 1) * v16;
        if ( a1 && sub_47D6B0(dword_791364) != 1 )
          v45 = 0;
        v17 = sub_62FBF0(v45);
        v18 = sub_62FBF0(v45) + v17;
        v42 = v18 - sub_62FBF0(v45);
        if ( a1 )
        {
          v19 = sub_4E9390(dword_791048);
          v42 -= sub_62FBF0(v19);
          if ( !sub_47D6B0(dword_791364) )
          {
            v20 = sub_4F67D0(dword_791364 + 56);
            if ( v20 <= CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) )
            {
              v21 = sub_4DF9E0(dword_791048);
              v42 -= sub_62FBF0(v21);
            }
          }
        }
        if ( a1 && !sub_47D6B0(dword_791364) )
        {
          v22 = sub_4DF9E0(dword_791048);
          v42 -= sub_62FBF0(v22 / 2);
        }
        if ( v42 < -19 )
          v42 = -19;
        if ( (double)v42 / 20.0 + 1.0 >= v44 )
          return 0;
        if ( !(unsigned __int8)sub_4704D0(a1, a3) )
        {
          v23 = sub_62FBF0(100);
          if ( v23 < (__int16)sub_4EAB40(dword_791048) )
            word_791020[v51] = 2;
          return 3;
        }
      }
      else if ( !(unsigned __int8)sub_4704D0(a1, a3) )
      {
        return 1;
      }
      break;
  }
  switch ( word_791020[v51] )
  {
    case 5:
    case 10:
      if ( word_791020[v51] == 5 )
      {
        v24 = sub_47CE60(dword_791364);
        v39 = sub_4C6EF0(a1 == 0, v24);
      }
      else
      {
        v39 = sub_4C6F50(dword_791048);
      }
      v25 = sub_62FBF0(100 - v39);
      if ( v25 < (__int16)sub_470A00(a1, 3) )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791020[v51] == 10 )
        {
          return 0;
        }
        v26 = sub_62FBF0(100);
        if ( v26 >= (__int16)sub_4E9CE0(dword_791048) )
        {
          v27 = sub_62FBF0(100);
          if ( v27 < (__int16)sub_4E9D00(dword_791048) )
            word_791020[v51] = 1;
        }
        else
        {
          word_791020[v51] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && (int)sub_62FBF0(30) > 7 )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 9:
      if ( word_791020[v51] == 4 )
      {
        v28 = sub_47CE60(dword_791364);
        v38 = sub_4C6EF0(a1 == 0, v28);
      }
      else
      {
        v38 = sub_4C6F50(dword_791048);
      }
      v29 = sub_62FBF0(100 - v38);
      if ( v29 < (__int16)sub_470A00(a1, 2) )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791020[v51] == 9 )
        {
          return 0;
        }
        v30 = sub_62FBF0(100);
        if ( v30 >= (__int16)sub_4E9CE0(dword_791048) )
        {
          v31 = sub_62FBF0(100);
          if ( v31 < (__int16)sub_4E9D00(dword_791048) )
            word_791020[v51] = 1;
        }
        else
        {
          word_791020[v51] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && (int)sub_62FBF0(30) > 7 )
          return 4;
        if ( word_791020[v51] == 9 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 8:
      if ( word_791020[v51] == 3 )
      {
        v32 = sub_47CE60(dword_791364);
        v37 = sub_4C6EF0(a1 == 0, v32);
      }
      else
      {
        v37 = sub_4C6F50(dword_791048);
      }
      v33 = sub_62FBF0(100 - v37);
      if ( v33 < (__int16)sub_470A00(a1, 1) )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791020[v51] == 8 )
        {
          return 0;
        }
        v34 = sub_62FBF0(100);
        if ( v34 >= (__int16)sub_4E9CE0(dword_791048) )
        {
          v35 = sub_62FBF0(100);
          if ( v35 < (__int16)sub_4E9D00(dword_791048) )
            word_791020[v51] = 1;
        }
        else
        {
          word_791020[v51] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && (int)sub_62FBF0(30) > 7 )
          return 4;
        if ( word_791020[v51] == 8 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_166;
  switch ( word_791020[v51] )
  {
    case 10:
      return 0;
    case 9:
      return 0;
    case 8:
      return 0;
  }
LABEL_166:
  v36 = sub_62FBF0(100);
  if ( v36 < (__int16)sub_4E9D00(dword_791048) )
    word_791020[v51] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_46FD10
// entry 0046fd10  size 1275  status ok
//======================================================================

double __cdecl sub_46FD10(char a1, int a2, char a3)
{
  double v4; // [esp+14h] [ebp-90h]
  double v5; // [esp+20h] [ebp-84h]
  double v6; // [esp+2Ch] [ebp-78h]
  double v7; // [esp+38h] [ebp-6Ch]
  double v8; // [esp+44h] [ebp-60h]
  __int16 v9; // [esp+4Ch] [ebp-58h]
  __int16 v10; // [esp+50h] [ebp-54h]
  __int16 v11; // [esp+54h] [ebp-50h]
  __int16 v12; // [esp+58h] [ebp-4Ch]
  __int16 ExecutingContext; // [esp+5Ch] [ebp-48h]
  __int16 v14; // [esp+60h] [ebp-44h]
  double v15; // [esp+64h] [ebp-40h]
  char v16; // [esp+73h] [ebp-31h]
  double v17; // [esp+74h] [ebp-30h]
  __int16 i; // [esp+88h] [ebp-1Ch]
  int v19; // [esp+8Ch] [ebp-18h]
  int *v20; // [esp+90h] [ebp-14h]
  double v21; // [esp+94h] [ebp-10h]
  double v22; // [esp+94h] [ebp-10h]
  double v23; // [esp+9Ch] [ebp-8h]

  v19 = sub_47E420(dword_791364);
  v21 = 1.0;
  v23 = sub_4E9480(dword_791048) / (double)a2;
  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    if ( i != v19 )
    {
      v20 = (int *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength((Concurrency::details::SchedulerProxy *)v20) == 1 )
      {
        v17 = 0.0;
        if ( sub_4EA970(i, a2) * dbl_791060[8 * v19 + i] <= v23 )
        {
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext((Concurrency::details::VirtualProcessor *)v20);
          if ( a1 )
          {
            v10 = sub_4F6A90(ExecutingContext);
            v12 = sub_4F6B20(ExecutingContext);
            v9 = 0;
            v14 = 0;
          }
          else
          {
            v10 = sub_4F6880(ExecutingContext);
            v12 = sub_4F6930(ExecutingContext);
            v9 = sub_4F6A90(ExecutingContext) - v10;
            v14 = sub_4F6B20(ExecutingContext) - v12;
          }
          if ( !a1 || v12 || v10 )
          {
            if ( v12 || v10 )
              v11 = 0;
            else
              v11 = sub_4F69E0(ExecutingContext);
          }
          else
          {
            v11 = sub_4F6BB0(ExecutingContext);
          }
          if ( a3 )
          {
            v9 = v10;
            v14 = v12;
            v10 = 0;
            v12 = 0;
          }
          v8 = 0.0;
          if ( a1 || v20[6] )
          {
            if ( a1 || v20[6] != 1 )
            {
              if ( !a1 && v20[6] >= 2 )
                v8 = sub_4E99F0(dword_791048);
            }
            else
            {
              v8 = sub_4E9910(dword_791048);
            }
          }
          else
          {
            v8 = sub_4E9830(dword_791048);
          }
          if ( a3 )
          {
            if ( v20[6] == 1 )
            {
              v8 = sub_4E9910(dword_791048);
            }
            else if ( v20[6] < 2 )
            {
              v8 = sub_4E9830(dword_791048);
            }
            else
            {
              v8 = sub_4E99F0(dword_791048);
            }
          }
          if ( v10 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerDrawai.cpp", 965);
          if ( v12 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerDrawai.cpp", 966);
          if ( v11 < 0 )
            sub_5E9F20((char)"shCurrentChecks >= 0", "..\\Casino\\PokerDrawai.cpp", 967);
          if ( v9 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerDrawai.cpp", 968);
          if ( v14 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerDrawai.cpp", 969);
          v16 = 0;
          v7 = sub_4E94B0(dword_791048) * (double)v9 + 1.0;
          v6 = sub_4E9590(dword_791048) * (double)v14 + v7;
          v5 = sub_4E9670(dword_791048) * (double)v10 + v6;
          v4 = sub_4E9750(dword_791048) * (double)v12 + v5;
          v17 = v4 - (double)(__int16)sub_4E9390(dword_791048) / 35.0 * (double)v11 + v8;
        }
        else
        {
          v16 = 1;
        }
        v15 = (double)(__int16)sub_4EAF20(word_791030[v19]) / 1000.0;
        if ( v16 )
          v21 = v21 * v15;
        else
          v21 = (1.0 - (1.0 - v15) * v17) * v21;
        if ( v21 < 0.0 )
          v21 = 0.0;
      }
    }
  }
  if ( byte_7912E0[v19] )
    v21 = (double)(__int16)sub_4EAF20(word_791030[v19]) / 1000.0;
  v22 = v21 * dbl_7912A0[v19];
  if ( v22 > 100.0 )
    return 100.0;
  return v22;
}


//======================================================================
// sub_470210
// entry 00470210  size 702  status ok
//======================================================================

void __cdecl sub_470210(char a1, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  double v7; // [esp+Ch] [ebp-34h]
  __int16 v8; // [esp+18h] [ebp-28h]
  __int16 v9; // [esp+1Ch] [ebp-24h]
  __int16 v10; // [esp+20h] [ebp-20h]
  __int16 v11; // [esp+24h] [ebp-1Ch]
  int v12; // [esp+28h] [ebp-18h]
  _BYTE v13[8]; // [esp+2Ch] [ebp-14h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v12 = sub_47E420(dword_791364);
  sub_4C7C40(v13);
  v14 = 0;
  word_791030[v12] = sub_49A650();
  byte_7912E0[v12] = 0;
  if ( a1 )
  {
    v11 = sub_49DF90();
    v10 = sub_49E430();
    v8 = sub_49EE40();
    if ( v11 >= 0 || v10 >= 0 )
    {
      if ( v11 >= 0 )
      {
        if ( v10 >= 0 )
        {
          v4 = (__int16)sub_4EAF20(v11);
          if ( v4 >= (__int16)sub_4EAF20(v10) )
          {
            if ( v8 >= 0 )
            {
              v6 = (__int16)sub_4EAF20(v11);
              if ( v6 >= (__int16)sub_4EAF20(v8) )
                v9 = v11;
              else
                v9 = v8;
            }
            else
            {
              v9 = v11;
            }
          }
          else if ( v8 >= 0 )
          {
            v5 = (__int16)sub_4EAF20(v10);
            if ( v5 >= (__int16)sub_4EAF20(v8) )
              v9 = v10;
            else
              v9 = v8;
          }
          else
          {
            v9 = v10;
          }
        }
        else if ( v8 >= 0 )
        {
          v3 = (__int16)sub_4EAF20(v11);
          if ( v3 >= (__int16)sub_4EAF20(v8) )
            v9 = v11;
          else
            v9 = v8;
        }
        else
        {
          v9 = v11;
        }
      }
      else if ( v8 >= 0 )
      {
        v2 = (__int16)sub_4EAF20(v10);
        if ( v2 >= (__int16)sub_4EAF20(v8) )
          v9 = v10;
        else
          v9 = v8;
      }
      else
      {
        v9 = v10;
      }
    }
    else
    {
      v9 = v8;
    }
    if ( v9 >= 0 )
    {
      v7 = sub_46FD10(1, a2, 1);
      if ( (double)(__int16)sub_4EAF20(v9) / 1000.0 > v7 || v7 < 0.2 )
      {
        word_791030[v12] = v9;
        byte_7912E0[v12] = 1;
      }
    }
  }
  v14 = -1;
  sub_484470(v13);
}


//======================================================================
// sub_4704D0
// entry 004704d0  size 1029  status ok
//======================================================================

char __cdecl sub_4704D0(char a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  __int16 ExecutingContext; // ax
  Concurrency::details::VirtualProcessor *v5; // eax
  __int16 v6; // ax
  __int16 v7; // ax
  double v8; // st7
  int v9; // eax
  int v11; // eax
  int v12; // eax
  double v13; // [esp+20h] [ebp-48h]
  __int16 i; // [esp+30h] [ebp-38h]
  __int16 v15; // [esp+34h] [ebp-34h]
  int v16; // [esp+38h] [ebp-30h]
  __int16 v17; // [esp+3Ch] [ebp-2Ch]
  __int16 v18; // [esp+40h] [ebp-28h]
  __int16 v19; // [esp+44h] [ebp-24h]
  __int16 v20; // [esp+54h] [ebp-14h]
  double v21; // [esp+58h] [ebp-10h]
  __int16 v22; // [esp+64h] [ebp-4h]

  v16 = sub_47E420(dword_791364);
  v17 = 0;
  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    if ( i != v16 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
        v17 += sub_4F69E0(ExecutingContext);
        v5 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        v6 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v5);
        if ( (__int16)sub_4F6880(v6) > 0 )
        {
          v17 = 0;
          break;
        }
      }
    }
  }
  v7 = sub_4E9D20(dword_791048);
  v19 = sub_62FBF0(v7 + 1);
  if ( v19 * v17 + word_791010[v16] <= 10 )
    v8 = dbl_791260[v16];
  else
    v8 = (double)(word_791010[v16] + v19 * v17 - 10) / 100.0 + dbl_791260[v16];
  v15 = sub_4EAB60(3);
  v20 = sub_4EAB60(2);
  v18 = sub_4EAB60(1);
  v22 = sub_4EAE50(dword_791048);
  v13 = (double)(int)sub_62FBF0(v22) / 100.0 + 1.0;
  v21 = (v13 - (double)(int)sub_62FBF0(v22) / 100.0) / (double)a2;
  v9 = sub_47CE60(dword_791364);
  if ( (double)(v15 - sub_4C6F90(a1 == 0, v9)) / 100.0 + v21 >= dbl_791260[v16] )
  {
    if ( byte_791040[v16] )
    {
      word_791020[v16] = 10;
      return 1;
    }
    else
    {
      v11 = sub_47CE60(dword_791364);
      if ( (double)(v20 - sub_4C6F90(a1 == 0, v11)) / 100.0 + v21 >= dbl_791260[v16] )
      {
        if ( byte_791008[v16] )
        {
          word_791020[v16] = 9;
          return 1;
        }
        else
        {
          v12 = sub_47CE60(dword_791364);
          if ( (double)(v18 - sub_4C6F90(a1 == 0, v12)) / 100.0 + v21 >= dbl_791260[v16] )
          {
            if ( (double)(v15 - sub_4C6FD0(dword_791048)) / 100.0 + v21 >= v8 )
            {
              if ( (double)(v20 - sub_4C6FD0(dword_791048)) / 100.0 + v21 >= v8 )
              {
                if ( (double)(v18 - sub_4C6FD0(dword_791048)) / 100.0 + v21 >= v8 )
                {
                  return 0;
                }
                else
                {
                  word_791020[v16] = 8;
                  return 1;
                }
              }
              else
              {
                word_791020[v16] = 9;
                return 1;
              }
            }
            else
            {
              word_791020[v16] = 10;
              return 1;
            }
          }
          else
          {
            word_791020[v16] = 3;
            return 1;
          }
        }
      }
      else
      {
        word_791020[v16] = 4;
        return 1;
      }
    }
  }
  else
  {
    word_791020[v16] = 5;
    return 1;
  }
}


//======================================================================
// sub_4708E0
// entry 004708e0  size 278  status ok
//======================================================================

int sub_4708E0()
{
  int v0; // esi
  int v1; // esi
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int result; // eax
  int v7; // esi
  int v8; // esi
  __int16 i; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v10 = sub_47E420(dword_791364);
  v0 = sub_62FBF0(11);
  v1 = v0 + sub_62FBF0(11) + 80;
  v2 = sub_62FBF0(11) + v1;
  dbl_7912A0[v10] = (double)(sub_62FBF0(11) + v2) * 0.01;
  v3 = sub_62FBF0(21);
  v4 = v3 + sub_62FBF0(21) + 60;
  v5 = sub_62FBF0(21) + v4;
  dbl_790FC8[v10] = (double)(sub_62FBF0(21) + v5) * 0.01;
  for ( i = 0; ; ++i )
  {
    result = sub_47F950(dword_791364);
    if ( i >= result )
      break;
    v7 = sub_62FBF0(51);
    v8 = v7 + sub_62FBF0(51) + 25;
    dbl_791060[8 * v10 + i] = (double)(sub_62FBF0(51) + v8) * 0.01;
  }
  return result;
}


//======================================================================
// sub_470A00
// entry 00470a00  size 87  status ok
//======================================================================

__int16 __cdecl sub_470A00(char a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4E9AD0(a2);
  if ( !a1 && (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    v3 += (100 - v3) / 2;
  return v3;
}


//======================================================================
// sub_470A60
// entry 00470a60  size 178  status ok
//======================================================================

void __cdecl sub_470A60(int a1, int a2)
{
  int v2; // [esp+4h] [ebp-18h]
  _BYTE v3[8]; // [esp+8h] [ebp-14h] BYREF
  int v4; // [esp+18h] [ebp-4h]

  v2 = sub_47E420(dword_791364);
  dword_791048 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
  sub_4C7C40(v3);
  v4 = 0;
  if ( word_790FB8[v2] != 1 )
    sub_4708E0();
  sub_470210(1, a2);
  sub_49FFB0(word_791030[v2], a1);
  v4 = -1;
  sub_484470(v3);
}


//======================================================================
// sub_470B20
// entry 00470b20  size 26438  status ok
//======================================================================

int __thiscall sub_470B20(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int v5; // eax
  Concurrency::details::SchedulerProxy *v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  Concurrency::details::SchedulerProxy *v12; // eax
  Concurrency::details::VirtualProcessor *v13; // eax
  __int16 ExecutingContext; // ax
  void *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  Concurrency::details::SchedulerProxy *v19; // eax
  Concurrency::details::VirtualProcessor *v20; // eax
  __int16 v21; // ax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  struct CDockablePane *TabbedPane; // esi
  int v42; // esi
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // eax
  Concurrency::details::SchedulerProxy *v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // esi
  int v56; // edi
  int v57; // edi
  int v58; // eax
  int v59; // esi
  ATL::CComCriticalSection *v60; // eax
  int v61; // eax
  int v62; // esi
  unsigned int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // esi
  int v67; // eax
  Concurrency::details::SchedulerProxy *v68; // eax
  Concurrency::details::SchedulerProxy *v69; // eax
  int v70; // eax
  Concurrency::details::SchedulerProxy *v71; // eax
  Concurrency::details::SchedulerProxy *v72; // eax
  int v73; // esi
  int v74; // esi
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  Concurrency::details::VirtualProcessor *v82; // eax
  int v83; // eax
  Concurrency::details::SchedulerProxy *v84; // eax
  int v85; // eax
  Concurrency::details::SchedulerProxy *v86; // eax
  int v87; // esi
  int v88; // esi
  int v89; // eax
  Concurrency::details::SchedulerProxy *v90; // eax
  Concurrency::details::SchedulerProxy *v91; // eax
  Concurrency::details::SchedulerProxy *v92; // eax
  Concurrency::details::VirtualProcessor *v93; // eax
  int v94; // eax
  int v95; // eax
  Concurrency::details::SchedulerProxy *v96; // eax
  int v97; // eax
  Concurrency::details::SchedulerProxy *v98; // eax
  int v99; // eax
  Concurrency::details::SchedulerProxy *v100; // eax
  Concurrency::details::SchedulerProxy *v101; // eax
  int v102; // eax
  Concurrency::details::SchedulerProxy *v103; // eax
  Concurrency::details::SchedulerProxy *v104; // eax
  int v105; // esi
  __int16 v106; // ax
  __int16 v107; // ax
  ATL::CComCriticalSection *v108; // eax
  __int16 v109; // ax
  int v110; // esi
  unsigned int v111; // eax
  int v112; // eax
  Concurrency::details::SchedulerProxy *v113; // eax
  Concurrency::details::SchedulerProxy *v114; // eax
  Concurrency::details::VirtualProcessor *v115; // eax
  Concurrency::details::SchedulerProxy *v116; // eax
  Concurrency::details::SchedulerProxy *v117; // eax
  int v118; // eax
  __int16 v119; // ax
  Concurrency::details::SchedulerProxy *v120; // eax
  __int16 v121; // ax
  Concurrency::details::SchedulerProxy *v122; // eax
  __int16 v123; // ax
  ATL::CAtlWinModule *v124; // eax
  int v125; // esi
  int v126; // eax
  int v127; // esi
  ATL::CComCriticalSection *v128; // eax
  int v129; // eax
  int v130; // esi
  unsigned int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // esi
  ATL::CComCriticalSection *v135; // eax
  int v136; // eax
  int v137; // esi
  unsigned int v138; // eax
  int v139; // esi
  int v140; // edi
  int v141; // edi
  int v142; // esi
  int v143; // edi
  int v144; // edi
  _DWORD *v145; // eax
  _DWORD *v146; // eax
  int v147; // esi
  ATL::CComCriticalSection *v148; // eax
  int v149; // eax
  int v150; // esi
  unsigned int v151; // eax
  int v152; // eax
  int v153; // eax
  int v154; // esi
  ATL::CComCriticalSection *v155; // eax
  int v156; // eax
  int v157; // esi
  unsigned int v158; // eax
  int v159; // esi
  int v160; // edi
  int v161; // edi
  int v162; // esi
  int v163; // edi
  int v164; // edi
  int v165; // eax
  int v166; // eax
  int v167; // eax
  int v168; // eax
  int v169; // esi
  ATL::CComCriticalSection *v170; // eax
  int v171; // esi
  unsigned int v172; // eax
  int v173; // eax
  int v174; // eax
  int v175; // esi
  unsigned int v176; // eax
  int v177; // esi
  ATL::CComCriticalSection *v178; // eax
  int v179; // esi
  unsigned int v180; // eax
  int v181; // esi
  int v182; // edi
  int v183; // edi
  int v184; // esi
  int v185; // edi
  int v186; // edi
  int v187; // eax
  int v188; // eax
  int v189; // esi
  int v190; // eax
  int v191; // esi
  ATL::CComCriticalSection *v192; // eax
  int v193; // esi
  unsigned int v194; // eax
  int v195; // esi
  int v196; // edi
  int v197; // edi
  int v198; // esi
  int v199; // edi
  int v200; // edi
  int v201; // eax
  int v202; // eax
  int v203; // eax
  int v204; // esi
  int v205; // eax
  Concurrency::details::SchedulerProxy *v206; // eax
  int v207; // eax
  Concurrency::details::SchedulerProxy *v208; // eax
  int v209; // eax
  int v210; // eax
  int v211; // eax
  int v212; // eax
  int v213; // eax
  __int16 v214; // [esp-8h] [ebp-3E4h]
  int v215; // [esp-8h] [ebp-3E4h]
  int v216; // [esp-8h] [ebp-3E4h]
  __int16 v217; // [esp-8h] [ebp-3E4h]
  __int16 v218; // [esp-8h] [ebp-3E4h]
  __int16 v219; // [esp-4h] [ebp-3E0h]
  __int16 v220; // [esp-4h] [ebp-3E0h]
  __int16 v221; // [esp-4h] [ebp-3E0h]
  char v222; // [esp-4h] [ebp-3E0h]
  char v223; // [esp-4h] [ebp-3E0h]
  unsigned int v224; // [esp-4h] [ebp-3E0h]
  int v225; // [esp-4h] [ebp-3E0h]
  int v226; // [esp-4h] [ebp-3E0h]
  int v227; // [esp-4h] [ebp-3E0h]
  int v228; // [esp-4h] [ebp-3E0h]
  int v229; // [esp-4h] [ebp-3E0h]
  int v230; // [esp-4h] [ebp-3E0h]
  int v231; // [esp-4h] [ebp-3E0h]
  int v232; // [esp-4h] [ebp-3E0h]
  int v233; // [esp-4h] [ebp-3E0h]
  __int16 v234; // [esp-4h] [ebp-3E0h]
  unsigned int v235; // [esp-4h] [ebp-3E0h]
  char v236; // [esp-4h] [ebp-3E0h]
  __int16 v237; // [esp-4h] [ebp-3E0h]
  char v238; // [esp-4h] [ebp-3E0h]
  unsigned int v239; // [esp-4h] [ebp-3E0h]
  unsigned int v240; // [esp-4h] [ebp-3E0h]
  unsigned int v241; // [esp-4h] [ebp-3E0h]
  unsigned int v242; // [esp-4h] [ebp-3E0h]
  unsigned int v243; // [esp-4h] [ebp-3E0h]
  unsigned int v244; // [esp-4h] [ebp-3E0h]
  __int16 v245; // [esp-4h] [ebp-3E0h]
  unsigned int v246; // [esp-4h] [ebp-3E0h]
  int v247; // [esp-4h] [ebp-3E0h]
  int v248; // [esp-4h] [ebp-3E0h]
  int v249; // [esp-4h] [ebp-3E0h]
  int v250; // [esp-4h] [ebp-3E0h]
  int v251; // [esp-4h] [ebp-3E0h]
  int v252; // [esp-4h] [ebp-3E0h]
  int v253; // [esp-4h] [ebp-3E0h]
  int v254; // [esp-4h] [ebp-3E0h]
  int v255; // [esp-4h] [ebp-3E0h]
  int v256; // [esp-4h] [ebp-3E0h]
  int v257; // [esp-4h] [ebp-3E0h]
  int v258; // [esp-4h] [ebp-3E0h]
  int v259; // [esp-4h] [ebp-3E0h]
  int v260; // [esp-4h] [ebp-3E0h]
  int v261; // [esp-4h] [ebp-3E0h]
  int v262; // [esp-4h] [ebp-3E0h]
  int v263; // [esp-4h] [ebp-3E0h]
  int v264; // [esp-4h] [ebp-3E0h]
  int v265; // [esp-4h] [ebp-3E0h]
  int v266; // [esp-4h] [ebp-3E0h]
  int v267; // [esp-4h] [ebp-3E0h]
  int v268; // [esp-4h] [ebp-3E0h]
  int v269; // [esp-4h] [ebp-3E0h]
  int v270; // [esp-4h] [ebp-3E0h]
  int v271; // [esp-4h] [ebp-3E0h]
  int v272; // [esp-4h] [ebp-3E0h]
  int v273; // [esp-4h] [ebp-3E0h]
  int v274; // [esp-4h] [ebp-3E0h]
  int v275; // [esp-4h] [ebp-3E0h]
  int v276; // [esp-4h] [ebp-3E0h]
  int v277; // [esp-4h] [ebp-3E0h]
  int v278; // [esp-4h] [ebp-3E0h]
  int v279; // [esp-4h] [ebp-3E0h]
  int v280; // [esp-4h] [ebp-3E0h]
  int v281; // [esp-4h] [ebp-3E0h]
  int v282; // [esp-4h] [ebp-3E0h]
  int v283; // [esp-4h] [ebp-3E0h]
  int v284; // [esp-4h] [ebp-3E0h]
  int v285; // [esp-4h] [ebp-3E0h]
  int v286; // [esp-4h] [ebp-3E0h]
  int v287; // [esp-4h] [ebp-3E0h]
  int v288; // [esp-4h] [ebp-3E0h]
  int v289; // [esp-4h] [ebp-3E0h]
  int v290; // [esp-4h] [ebp-3E0h]
  int v291; // [esp-4h] [ebp-3E0h]
  int v292; // [esp-4h] [ebp-3E0h]
  int v293; // [esp-4h] [ebp-3E0h]
  int v294; // [esp-4h] [ebp-3E0h]
  int v295; // [esp-4h] [ebp-3E0h]
  int v296; // [esp-4h] [ebp-3E0h]
  bool v297; // [esp+Ch] [ebp-3D0h]
  bool v298; // [esp+20h] [ebp-3BCh]
  bool v299; // [esp+34h] [ebp-3A8h]
  bool v300; // [esp+48h] [ebp-394h]
  bool v301; // [esp+5Ch] [ebp-380h]
  bool v302; // [esp+70h] [ebp-36Ch]
  bool v303; // [esp+94h] [ebp-348h]
  bool v304; // [esp+A8h] [ebp-334h]
  bool v305; // [esp+BCh] [ebp-320h]
  bool v306; // [esp+D0h] [ebp-30Ch]
  bool v307; // [esp+F4h] [ebp-2E8h]
  bool v308; // [esp+108h] [ebp-2D4h]
  bool v309; // [esp+11Ch] [ebp-2C0h]
  _DWORD *v310; // [esp+140h] [ebp-29Ch]
  int v311; // [esp+144h] [ebp-298h]
  _DWORD *v312; // [esp+148h] [ebp-294h]
  int v313; // [esp+14Ch] [ebp-290h]
  _DWORD *v314; // [esp+150h] [ebp-28Ch]
  int v315; // [esp+154h] [ebp-288h]
  _DWORD *v316; // [esp+158h] [ebp-284h]
  int v317; // [esp+15Ch] [ebp-280h]
  _DWORD *v318; // [esp+160h] [ebp-27Ch]
  int v319; // [esp+164h] [ebp-278h]
  int v320; // [esp+168h] [ebp-274h]
  _DWORD *v321; // [esp+16Ch] [ebp-270h]
  _DWORD *v322; // [esp+170h] [ebp-26Ch]
  unsigned int v324; // [esp+184h] [ebp-258h]
  unsigned int v325; // [esp+184h] [ebp-258h]
  char v326; // [esp+18Bh] [ebp-251h] BYREF
  char v327[4]; // [esp+18Ch] [ebp-250h] BYREF
  _BYTE v328[10]; // [esp+190h] [ebp-24Ch] BYREF
  bool v329; // [esp+19Ah] [ebp-242h]
  char v330; // [esp+19Bh] [ebp-241h] BYREF
  char v331[4]; // [esp+19Ch] [ebp-240h] BYREF
  _BYTE v332[10]; // [esp+1A0h] [ebp-23Ch] BYREF
  bool v333; // [esp+1AAh] [ebp-232h]
  char v334; // [esp+1ABh] [ebp-231h] BYREF
  char v335[4]; // [esp+1ACh] [ebp-230h] BYREF
  _BYTE v336[10]; // [esp+1B0h] [ebp-22Ch] BYREF
  bool v337; // [esp+1BAh] [ebp-222h]
  char v338; // [esp+1BBh] [ebp-221h] BYREF
  char v339[4]; // [esp+1BCh] [ebp-220h] BYREF
  _BYTE v340[10]; // [esp+1C0h] [ebp-21Ch] BYREF
  bool v341; // [esp+1CAh] [ebp-212h]
  char v342; // [esp+1CBh] [ebp-211h] BYREF
  char v343[4]; // [esp+1CCh] [ebp-210h] BYREF
  _BYTE v344[10]; // [esp+1D0h] [ebp-20Ch] BYREF
  bool v345; // [esp+1DAh] [ebp-202h]
  char v346; // [esp+1DBh] [ebp-201h] BYREF
  char v347[4]; // [esp+1DCh] [ebp-200h] BYREF
  _BYTE v348[10]; // [esp+1E0h] [ebp-1FCh] BYREF
  bool v349; // [esp+1EAh] [ebp-1F2h]
  char v350; // [esp+1EBh] [ebp-1F1h] BYREF
  char v351[4]; // [esp+1ECh] [ebp-1F0h] BYREF
  _BYTE v352[10]; // [esp+1F0h] [ebp-1ECh] BYREF
  char v353; // [esp+1FAh] [ebp-1E2h]
  char v354; // [esp+1FBh] [ebp-1E1h] BYREF
  char v355[4]; // [esp+1FCh] [ebp-1E0h] BYREF
  _BYTE v356[10]; // [esp+200h] [ebp-1DCh] BYREF
  bool v357; // [esp+20Ah] [ebp-1D2h]
  char v358; // [esp+20Bh] [ebp-1D1h] BYREF
  char v359[4]; // [esp+20Ch] [ebp-1D0h] BYREF
  _BYTE v360[10]; // [esp+210h] [ebp-1CCh] BYREF
  bool v361; // [esp+21Ah] [ebp-1C2h]
  char v362; // [esp+21Bh] [ebp-1C1h] BYREF
  char v363[4]; // [esp+21Ch] [ebp-1C0h] BYREF
  _BYTE v364[10]; // [esp+220h] [ebp-1BCh] BYREF
  bool v365; // [esp+22Ah] [ebp-1B2h]
  char v366; // [esp+22Bh] [ebp-1B1h] BYREF
  char v367[4]; // [esp+22Ch] [ebp-1B0h] BYREF
  _BYTE v368[10]; // [esp+230h] [ebp-1ACh] BYREF
  bool v369; // [esp+23Ah] [ebp-1A2h]
  char v370; // [esp+23Bh] [ebp-1A1h] BYREF
  char v371[4]; // [esp+23Ch] [ebp-1A0h] BYREF
  _BYTE v372[10]; // [esp+240h] [ebp-19Ch] BYREF
  char v373; // [esp+24Ah] [ebp-192h]
  char v374; // [esp+24Bh] [ebp-191h] BYREF
  char v375[4]; // [esp+24Ch] [ebp-190h] BYREF
  _BYTE v376[10]; // [esp+250h] [ebp-18Ch] BYREF
  bool v377; // [esp+25Ah] [ebp-182h]
  char v378; // [esp+25Bh] [ebp-181h] BYREF
  char v379[4]; // [esp+25Ch] [ebp-180h] BYREF
  _BYTE v380[10]; // [esp+260h] [ebp-17Ch] BYREF
  bool v381; // [esp+26Ah] [ebp-172h]
  char v382; // [esp+26Bh] [ebp-171h] BYREF
  char v383[4]; // [esp+26Ch] [ebp-170h] BYREF
  _BYTE v384[11]; // [esp+270h] [ebp-16Ch] BYREF
  bool v385; // [esp+27Bh] [ebp-161h]
  __int64 v386; // [esp+27Ch] [ebp-160h]
  __int64 v387; // [esp+284h] [ebp-158h]
  __int64 v388; // [esp+28Ch] [ebp-150h]
  __int64 v389; // [esp+294h] [ebp-148h]
  __int64 v390; // [esp+29Ch] [ebp-140h]
  __int64 v391; // [esp+2A4h] [ebp-138h]
  char v392[4]; // [esp+2ACh] [ebp-130h] BYREF
  char v393[4]; // [esp+2B0h] [ebp-12Ch] BYREF
  __int64 v394; // [esp+2B4h] [ebp-128h]
  __int64 v395; // [esp+2BCh] [ebp-120h]
  char v396; // [esp+2C7h] [ebp-115h] BYREF
  __int64 v397; // [esp+2C8h] [ebp-114h]
  __int64 v398; // [esp+2D0h] [ebp-10Ch]
  char v399; // [esp+2D9h] [ebp-103h] BYREF
  _BYTE v400[5]; // [esp+2DAh] [ebp-102h] BYREF
  char v401; // [esp+2DFh] [ebp-FDh]
  __int64 v402; // [esp+2E0h] [ebp-FCh]
  int j; // [esp+2E8h] [ebp-F4h]
  int v404; // [esp+2ECh] [ebp-F0h]
  int v405; // [esp+2F0h] [ebp-ECh]
  int v406; // [esp+2F4h] [ebp-E8h]
  int v407; // [esp+2F8h] [ebp-E4h]
  int v408; // [esp+2FCh] [ebp-E0h]
  int v409; // [esp+300h] [ebp-DCh]
  int v410; // [esp+304h] [ebp-D8h]
  int v411; // [esp+308h] [ebp-D4h]
  int v412; // [esp+30Ch] [ebp-D0h]
  __int16 v413; // [esp+310h] [ebp-CCh] BYREF
  int v414; // [esp+314h] [ebp-C8h] BYREF
  int v415; // [esp+318h] [ebp-C4h]
  int v416; // [esp+31Ch] [ebp-C0h]
  int v417; // [esp+320h] [ebp-BCh]
  char v418; // [esp+327h] [ebp-B5h]
  int v419; // [esp+328h] [ebp-B4h]
  int v420; // [esp+32Ch] [ebp-B0h]
  char v421; // [esp+333h] [ebp-A9h]
  __int16 v422; // [esp+334h] [ebp-A8h]
  __int16 v423; // [esp+338h] [ebp-A4h]
  int v424; // [esp+33Ch] [ebp-A0h]
  int v425; // [esp+340h] [ebp-9Ch]
  char v426; // [esp+347h] [ebp-95h]
  _BYTE v427[8]; // [esp+348h] [ebp-94h] BYREF
  int v428; // [esp+350h] [ebp-8Ch] BYREF
  _BYTE v429[8]; // [esp+354h] [ebp-88h] BYREF
  int v430; // [esp+35Ch] [ebp-80h] BYREF
  __int16 v431; // [esp+360h] [ebp-7Ch]
  int v432; // [esp+364h] [ebp-78h]
  __int16 v433; // [esp+368h] [ebp-74h]
  __int16 v434; // [esp+36Ch] [ebp-70h]
  __int16 v435; // [esp+370h] [ebp-6Ch]
  __int16 v436; // [esp+374h] [ebp-68h]
  __int16 v437; // [esp+378h] [ebp-64h]
  __int16 v438; // [esp+37Ch] [ebp-60h]
  int v439; // [esp+380h] [ebp-5Ch]
  int v440; // [esp+384h] [ebp-58h]
  unsigned int v441; // [esp+388h] [ebp-54h]
  unsigned int v442; // [esp+38Ch] [ebp-50h]
  unsigned int v443; // [esp+390h] [ebp-4Ch]
  _BYTE v444[8]; // [esp+394h] [ebp-48h] BYREF
  int v445; // [esp+39Ch] [ebp-40h] BYREF
  _BYTE v446[8]; // [esp+3A0h] [ebp-3Ch] BYREF
  char v447[4]; // [esp+3A8h] [ebp-34h] BYREF
  int v448; // [esp+3ACh] [ebp-30h]
  _BYTE v449[8]; // [esp+3B0h] [ebp-2Ch] BYREF
  char v450[4]; // [esp+3B8h] [ebp-24h] BYREF
  __int16 v451; // [esp+3BCh] [ebp-20h]
  __int64 v452; // [esp+3C0h] [ebp-1Ch]
  __int16 i; // [esp+3C8h] [ebp-14h]
  int v454; // [esp+3CCh] [ebp-10h]
  int v455; // [esp+3D8h] [ebp-4h]

  v454 = *(_DWORD *)(*(this + 3) + 4);
  v402 = sub_64C8A0(0, 0);
  v452 = v402;
  sub_5FC3A0(a2);
  result = (int)this;
  switch ( *(this + 5) )
  {
    case 0:
      if ( (int)dword_791308 < 2 )
        goto LABEL_3;
      byte_7912E9 = 0;
      for ( word_791354 = 0; ; ++word_791354 )
      {
        v3 = word_791354;
        if ( v3 >= sub_47F950(dword_791364) )
          break;
        for ( word_791350 = 0; ; ++word_791350 )
        {
          v4 = word_791350;
          if ( v4 >= sub_47F950(dword_791364) )
            break;
          v5 = sub_47E390(word_791354);
          if ( sub_4C6CB0(v5) )
          {
            v6 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_791350);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v6) == 1 )
            {
              if ( !sub_47E190(dword_791364) )
              {
                v219 = (__int16)dword_791308;
                v214 = word_791350;
                sub_47E390(word_791354);
                sub_4E0600(v214, v219);
              }
              sub_47E390(word_791354);
              sub_4C6ED0(0);
              v7 = sub_47E390(word_791354);
              v8 = sub_4C6E70(v7);
              if ( v8 > sub_62FBF0(100) )
              {
                sub_47E390(word_791354);
                sub_4C6ED0(1);
              }
            }
          }
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
    case 1:
      for ( dword_79134C = 0; dword_79134C < sub_47F950(dword_791364); ++dword_79134C )
      {
        v9 = sub_47E390(dword_79134C);
        if ( sub_4C6CB0(v9) == 2 || byte_791360 )
        {
          sub_47E390(dword_79134C);
          sub_4C7360();
          v10 = sub_47E390(dword_79134C);
          sub_4C76E0(v10);
        }
      }
      if ( sub_47D6B0(dword_791364) )
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 3);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
    case 2:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      v11 = sub_47BBC0(dword_791364);
      sub_47E400(v11);
      do
      {
        sub_47E440(dword_791364);
        v12 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      }
      while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v12) );
      v220 = ((int)dword_791308 > 2) + word_71E334;
      v13 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v13);
      sub_4F5530(ExecutingContext, v220);
      if ( (int)dword_791308 <= 2 )
      {
        v17 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
        dword_7912EC = sub_477BD0(v17);
        sub_47E500(dword_791364);
      }
      else
      {
        v15 = CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
        dword_7912EC = sub_477BD0(v15);
        sub_47E500(dword_791364);
        if ( dword_7912EC < 0 )
          sub_5E9F20((char)"nNextPlayer >= 0", "..\\Casino\\PokerDrawScript.cpp", 851);
        v16 = sub_47E490(dword_7912EC);
        sub_47E400(v16);
        dword_7912EC = sub_477D00();
        sub_47E500(dword_791364);
      }
      if ( dword_7912EC >= 0 )
        goto LABEL_199;
      if ( dword_7912EC == -3 )
        goto LABEL_35;
      sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 872);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 3:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      byte_791348 = 1;
      if ( byte_7912E8 )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 13);
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 30);
      }
      else
      {
        v18 = sub_47BBC0(dword_791364);
        sub_47E400(v18);
        do
        {
          sub_47E440(dword_791364);
          v19 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v19) != 1 );
        v221 = word_71E334;
        v20 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
        v21 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v20);
        sub_4F5530(v21, v221);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
    case 4:
      v22 = sub_47E3B0(dword_791364);
      if ( sub_4C6CB0(v22) != 2 || *(_BYTE *)(dword_791364 + 200) )
      {
        sub_47E3B0(dword_791364);
        sub_4DC4D0(99, 0);
      }
      *(_BYTE *)(dword_791364 + 232) = 1;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 5);
      v23 = sub_47E3B0(dword_791364);
      if ( sub_4C6CB0(v23) == 2 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      v24 = sub_47CBA0(dword_791364);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, v24);
    case 5:
      if ( byte_791320 )
      {
        byte_791320 = 0;
        dword_791344 = 5;
      }
      else
      {
        dword_791344 = sub_477F20();
      }
      if ( dword_791344 == 5 )
      {
        v451 = 0;
        switch ( dword_791318 )
        {
          case 5:
            v451 = 0;
            break;
          case 2:
            v451 = 2;
            break;
          case 1:
            v451 = 1;
            break;
          case 4:
            v451 = 2;
            break;
          case 3:
            v451 = 1;
            break;
          default:
            if ( dword_791318 )
              sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 941);
            else
              v451 = 3;
            break;
        }
        if ( sub_47D6B0(dword_791364) )
        {
          if ( !byte_7912E9 && (unsigned __int8)sub_4F6640(dword_791364 + 56) && sub_47D7B0(dword_791364) == 1 )
          {
            sub_47E3B0(dword_791364);
            sub_4C7C40(v449);
            v455 = 0;
            sub_485940(v450, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v455) = 1;
            sub_4A20D0(v400);
            LOBYTE(v455) = 2;
            v27 = sub_4A2100(dword_7913B0, dword_791400, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
            v401 = sub_4A24D0(v27);
            LOBYTE(v455) = 1;
            ATL::CComCriticalSection::~CComCriticalSection(v400);
            if ( v401 )
              sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), -1, 0, 0, v451);
            else
              sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), -1, 0, 1, v451);
            LOBYTE(v455) = 0;
            ATL::CComCriticalSection::~CComCriticalSection(v450);
            v455 = -1;
            sub_484470(v449);
          }
          else if ( (unsigned __int8)sub_4F6640(dword_791364 + 56)
                 || (v28 = sub_4F67D0(dword_791364 + 56),
                     v29 = sub_47E3B0(dword_791364),
                     v30 = sub_4C6A70(v29),
                     v28 < v30 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364)) )
          {
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), -1, 0, 0, v451);
          }
          else
          {
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), 0, 0, 0, v451);
          }
        }
        else if ( byte_7912E9 )
        {
          v26 = sub_477840();
          sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), v26, 0, 0, v451);
        }
        else
        {
          v25 = sub_477840();
          sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), v25, 1, 0, v451);
        }
        v31 = sub_47E3B0(dword_791364);
        sub_4DC490(v31);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 8);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      else
      {
        if ( sub_47D6B0(dword_791364) == 1 && (dword_791344 == 2 || dword_791344 == 4) )
        {
          v32 = sub_47E3B0(dword_791364);
          dword_7912FC = sub_4C7970(v32);
        }
        v33 = sub_47E3B0(dword_791364);
        sub_4DC490(v33);
        if ( dword_791344 == 2 && sub_47D6B0(dword_791364) == 1 )
        {
          v34 = sub_47E3B0(dword_791364);
          v35 = sub_4C6A70(v34);
          v448 = v35 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          if ( v448 < (int)CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364) )
            dword_791344 = 1;
        }
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 9);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
    case 6:
      if ( !CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) )
        goto LABEL_134;
      if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) == 2 )
      {
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          dword_791344 = 2;
        else
          dword_791344 = 4;
        if ( sub_47D6B0(dword_791364) == 1 )
        {
          TabbedPane = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          v443 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * (_DWORD)TabbedPane;
          if ( byte_7912E9 )
            v42 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v42 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v441 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v42;
          v442 = 0;
          if ( sub_47D6B0(dword_791364) == 1 && (dword_791318 == 2 || dword_791318 == 4) )
          {
            v43 = sub_47E3B0(dword_791364);
            v44 = sub_4C7970(v43);
            v442 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v44;
          }
          if ( (unsigned __int8)sub_4F6690(dword_791364 + 56) && !(unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            sub_5E9F20((char)"pokerGame->thePot.IsRaisePossible()", "..\\Casino\\PokerDrawScript.cpp", 1104);
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 7);
          return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        }
      }
      else if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) == 1 )
      {
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          dword_791344 = 1;
        else
          dword_791344 = 3;
      }
      else
      {
        if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) != 3 )
        {
LABEL_134:
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
          return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        }
        dword_791344 = 0;
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 10);
      v215 = dword_791344;
      sub_47E3B0(dword_791364);
      return sub_4CC890(v215, this);
    case 8:
      if ( sub_47E190(dword_791364) )
        sub_5E9F20((char)"pokerGame->GetGameNumber() == DRAW_5_CARD", "..\\Casino\\PokerDrawScript.cpp", 1006);
      if ( sub_47E280(dword_791364) )
      {
        if ( sub_47E280(dword_791364) != 1 )
          sub_5E9F20((char)"pokerGame->GetHighlowType() == LOW", "..\\Casino\\PokerDrawScript.cpp", 1035);
        sub_47E3B0(dword_791364);
        sub_4C7C40(v444);
        v455 = 5;
        sub_485940(&v445, 0, 0, 1, 0, 0, 0, 0);
        LOBYTE(v455) = 6;
        v223 = v445;
        sub_47E3B0(dword_791364);
        sub_4DA8D0(v223);
        if ( byte_7912E9 )
        {
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            &Source);
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            &Source);
        }
        else
        {
          v39 = sub_630F40("SID_POKER_MAXDRAW3CARDS");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v39);
          if ( sub_47D6B0(dword_791364) )
            v40 = sub_630F40("SID_POKER_BESTLOWHAND");
          else
            v40 = sub_630F40("SID_POKER_BLINDOPENANDRAISE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            v40);
        }
        LOBYTE(v455) = 5;
        ATL::CComCriticalSection::~CComCriticalSection(&v445);
        v455 = -1;
        sub_484470(v444);
      }
      else
      {
        sub_47E3B0(dword_791364);
        sub_4C7C40(v446);
        v455 = 3;
        sub_485940(v447, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v455) = 4;
        v222 = *(_BYTE *)sub_4A2160(&v399);
        sub_47E3B0(dword_791364);
        sub_4DA4D0(v222);
        if ( byte_7912E9 )
        {
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            &Source);
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            &Source);
        }
        else
        {
          v36 = sub_630F40("SID_POKER_MAXDRAW3CARDS");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v36);
          if ( sub_47D7B0(dword_791364) == 1 )
          {
            v37 = sub_630F40("SID_POKER_JACKSORBETTER");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v37);
          }
          else if ( sub_47D6B0(dword_791364) )
          {
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              &Source);
          }
          else
          {
            v38 = sub_630F40("SID_POKER_BLINDOPENANDRAISE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v38);
          }
        }
        LOBYTE(v455) = 3;
        ATL::CComCriticalSection::~CComCriticalSection(v447);
        v455 = -1;
        sub_484470(v446);
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 9:
      switch ( dword_791344 )
      {
        case 1:
          dword_791300 = 2;
          break;
        case 2:
          sub_4775B0(1, 0);
          break;
        case 3:
          sub_477450(1);
          break;
        case 4:
          sub_477900(1, 0);
          break;
        default:
          if ( dword_791344 )
            sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 1254);
          else
            dword_791300 = 1;
          break;
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 10);
      v54 = sub_47E3B0(dword_791364);
      if ( sub_4C6CB0(v54) != 1 || !dword_791300 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      switch ( dword_791300 )
      {
        case 1:
          v55 = sub_4F6840(dword_791364 + 56);
          v56 = sub_62FBF0(2 * (_DWORD)dword_791308);
          v57 = v56 + sub_62FBF0(2 * (_DWORD)dword_791308) + 5;
          if ( v55 <= CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v57 )
          {
            sub_47E3B0(dword_791364);
            return sub_4CC980(v454);
          }
          else
          {
            sub_47E3B0(dword_791364);
            return sub_4CC9C0(v454);
          }
        case 2:
          sub_47E3B0(dword_791364);
          return sub_4CC9E0(v454);
        case 3:
          sub_47E3B0(dword_791364);
          return sub_4CCAE0(v454);
        case 4:
          sub_47E3B0(dword_791364);
          return sub_4CCA60(v454);
        case 5:
          sub_47E3B0(dword_791364);
          return sub_4CD310(v454);
        case 6:
          sub_47E3B0(dword_791364);
          return sub_4CCA00(v454);
        case 7:
          sub_47E3B0(dword_791364);
          return sub_4CCA90(v454);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0xA:
      if ( !byte_7912E9 )
        *(_BYTE *)(sub_47E3B0(dword_791364) + 28) = 0;
      v45 = sub_47E3B0(dword_791364);
      sub_4DA890(v45);
      v46 = sub_47E3B0(dword_791364);
      sub_4DB610(v46);
      sub_47EC50(dword_791364);
      switch ( dword_791344 )
      {
        case 1:
          dword_7912EC = (__int16)sub_4F5760(dword_791364 + 56);
          sub_47E3B0(dword_791364);
          sub_4DC4D0(5, 0);
          break;
        case 2:
          if ( !byte_7912E9 )
            *(_BYTE *)(sub_47E3B0(dword_791364) + 28) = 1;
          if ( sub_47D6B0(dword_791364) == 1 )
            dword_7912EC = sub_4775B0(0, dword_7912FC);
          else
            dword_7912EC = sub_4775B0(0, 0);
          byte_791348 = 0;
          sub_47E500(dword_791364);
          break;
        case 3:
          if ( !byte_7912E9 )
            *(_BYTE *)(sub_47E3B0(dword_791364) + 28) = 1;
          dword_7912EC = sub_477450(0);
          sub_47E500(dword_791364);
          break;
        case 4:
          if ( !byte_7912E9 )
            *(_BYTE *)(sub_47E3B0(dword_791364) + 28) = 1;
          if ( sub_47D6B0(dword_791364) == 1 )
            dword_7912EC = sub_477900(0, dword_7912FC);
          else
            dword_7912EC = sub_477900(0, 0);
          sub_47E500(dword_791364);
          break;
        default:
          if ( dword_791344 )
          {
            sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 1237);
          }
          else
          {
            v47 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
            Concurrency::details::SchedulerProxy::SetQueueLength(v47, 3u);
            v48 = sub_47E3B0(dword_791364);
            sub_4C7230(v48);
            sub_47E3B0(dword_791364);
            sub_4DC4D0(4, 0);
            sub_47E3B0(dword_791364);
            v49 = sub_60CA40(4);
            sub_60C840(v49);
            sub_47E3B0(dword_791364);
            v50 = sub_60CA40(3);
            sub_60C840(v50);
            sub_47E3B0(dword_791364);
            v51 = sub_60CA40(2);
            sub_60C840(v51);
            sub_47E3B0(dword_791364);
            v52 = sub_60CA40(1);
            sub_60C840(v52);
            sub_47E3B0(dword_791364);
            v53 = sub_60CA40(0);
            sub_60C840(v53);
            dword_7912EC = (__int16)sub_4F62E0(dword_791364 + 56);
            --dword_7912F4;
          }
          break;
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 11);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 20);
    case 0xB:
      *(_BYTE *)(dword_791364 + 232) = 0;
      switch ( dword_7912EC )
      {
        case -1:
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 13);
          break;
        case -2:
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 36);
          break;
        case -3:
LABEL_35:
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 12);
          break;
        default:
LABEL_199:
          v58 = sub_47E490(dword_7912EC);
          sub_47E400(v58);
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
          break;
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0xC:
      if ( sub_4F6420(dword_791364 + 56) > 0 )
      {
        v440 = (__int16)sub_4F64B0(dword_791364 + 56);
        v59 = sub_4F6420(dword_791364 + 56);
        v224 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v59;
        sub_47E3D0(v440);
        sub_4C6B80(v224);
        v60 = (ATL::CComCriticalSection *)sub_47E3D0(v440);
        ATL::CComCriticalSection::~CComCriticalSection(v60);
        ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)dword_791364);
        v61 = sub_4F6840(dword_791364 + 56);
        sub_47EC90(v61);
        v439 = *(_DWORD *)(sub_47E3D0(v440) + 4);
        v62 = sub_4F6420(dword_791364 + 56);
        v63 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v398 = sub_64C8A0(v63 * v62, 0);
        v452 = v398;
        sub_5E7E40(v439, 7, v398, HIDWORD(v398));
      }
      byte_7912E8 = 1;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 13);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
    case 0xD:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      if ( byte_7912E8 || byte_7912E9 || sub_47D7B0(dword_791364) != 1 || !byte_791348 )
      {
        if ( byte_7912E9 )
        {
          byte_7912EA = 1;
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 33);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 14);
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 25);
      }
      return sub_5FC490(1);
    case 0xE:
      for ( dword_791340 = 0; dword_791340 < sub_47F950(dword_791364); ++dword_791340 )
      {
        v64 = sub_47E390(dword_791340);
        sub_4DC490(v64);
        *(_DWORD *)(sub_47E390(dword_791340) + 24) = -1;
      }
      byte_7912E9 = 1;
      v65 = sub_47BBC0(dword_791364);
      sub_47E400(v65);
      sub_47E440(dword_791364);
      for ( dword_7912F8 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
            !sub_4C6CB0(dword_7912F8)
         || !Concurrency::details::SchedulerProxy::GetQueueLength(dword_7912F8)
         || Concurrency::details::SchedulerProxy::GetQueueLength(dword_7912F8) == 3;
            dword_7912F8 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364) )
      {
        v66 = sub_47E420(dword_791364);
        if ( v66 == sub_47BBC0(dword_791364) )
          sub_5E9F20(
            (char)"pokerGame->GetCurrentPlayer() != pokerGame->GetDealer()",
            "..\\Casino\\PokerDrawScript.cpp",
            1355);
        sub_47E440(dword_791364);
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 15);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0xF:
      dword_79133C = 0;
      v67 = sub_47E3B0(dword_791364);
      if ( sub_4C6CB0(v67) == 2 )
      {
        v68 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v68) )
        {
          v69 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v69) != 3 )
          {
            if ( sub_47E280(dword_791364) )
              sub_470A60((int)byte_79130C, dword_7912F4);
            else
              sub_46E990((int)byte_79130C, dword_7912F4);
            (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 19);
            sub_46B950(*(_DWORD *)(dword_791EB8 + 160), 3, (int)byte_79130C);
            return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
          }
        }
      }
      v70 = sub_47E3B0(dword_791364);
      if ( sub_4C6CB0(v70) == 1 )
      {
        v71 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v71) )
        {
          v72 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v72) != 3 )
          {
            (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 16);
            return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
          }
        }
      }
      v73 = sub_47E420(dword_791364);
      if ( v73 == sub_47BBC0(dword_791364) )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 24);
      }
      else
      {
        sub_47E440(dword_791364);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 15);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x10:
      *(_DWORD *)(sub_47E3B0(dword_791364) + 24) = 0;
      if ( sub_47E280(dword_791364) )
      {
        sub_470A60((int)byte_79130C, dword_7912F4);
        for ( dword_791340 = 4; dword_791340 >= 0; --dword_791340 )
        {
          if ( byte_79130C[dword_791340] )
          {
            v321 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
            ++*v321;
          }
        }
      }
      else
      {
        sub_46E990((int)byte_79130C, dword_7912F4);
        for ( dword_791340 = 4; dword_791340 >= 0; --dword_791340 )
        {
          if ( byte_79130C[dword_791340] )
          {
            v322 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
            ++*v322;
          }
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 17);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x11:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 18);
      if ( sub_47E280(dword_791364) == 1 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      if ( *(_DWORD *)(sub_47E3B0(dword_791364) + 24) == 2 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      if ( *(_DWORD *)(sub_47E3B0(dword_791364) + 24) == 3 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      v74 = sub_47E420(dword_791364);
      if ( v74 == sub_47BBC0(dword_791364) )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      if ( *(_DWORD *)(sub_47E3B0(dword_791364) + 24) == 1 )
      {
        sub_47E3B0(dword_791364);
        return sub_4CCE80(v454);
      }
      else if ( *(_DWORD *)(sub_47E3B0(dword_791364) + 24) )
      {
        sub_47E3B0(dword_791364);
        return sub_4CCEA0(v454);
      }
      else
      {
        sub_47E3B0(dword_791364);
        return sub_4CCED0(v454);
      }
    case 0x12:
      for ( dword_791340 = 4; dword_791340 >= 0; --dword_791340 )
      {
        if ( byte_79130C[dword_791340] )
        {
          v225 = dword_791340;
          sub_47E3B0(dword_791364);
          v320 = *(_DWORD *)(sub_60CA40(v225) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v320 + 112))(v320);
          v226 = dword_791340;
          sub_47E3B0(dword_791364);
          v75 = sub_60CA40(v226);
          sub_60C840(v75);
          v227 = dword_791340;
          sub_47E3B0(dword_791364);
          v228 = sub_60CA40(v227);
          sub_47E3B0(dword_791364);
          sub_60C890(v228);
        }
      }
      sub_47E3B0(dword_791364);
      sub_4C7820(0);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 20);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
    case 0x13:
      if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 160)) == 32700 )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 20);
        *(_DWORD *)(sub_47E3B0(dword_791364) + 24) = 0;
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 160) + 480) + 476) )
        {
          sub_47E3B0(dword_791364);
          v319 = *(_DWORD *)(sub_60CA40(4) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v319 + 112))(v319);
          sub_47E3B0(dword_791364);
          v76 = sub_60CA40(4);
          sub_60C840(v76);
          sub_47E3B0(dword_791364);
          v229 = sub_60CA40(4);
          sub_47E3B0(dword_791364);
          sub_60C890(v229);
          v318 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
          ++*v318;
        }
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 160) + 484) + 476) )
        {
          sub_47E3B0(dword_791364);
          v317 = *(_DWORD *)(sub_60CA40(3) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v317 + 112))(v317);
          sub_47E3B0(dword_791364);
          v77 = sub_60CA40(3);
          sub_60C840(v77);
          sub_47E3B0(dword_791364);
          v230 = sub_60CA40(3);
          sub_47E3B0(dword_791364);
          sub_60C890(v230);
          v316 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
          ++*v316;
        }
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 160) + 488) + 476) )
        {
          sub_47E3B0(dword_791364);
          v315 = *(_DWORD *)(sub_60CA40(2) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v315 + 112))(v315);
          sub_47E3B0(dword_791364);
          v78 = sub_60CA40(2);
          sub_60C840(v78);
          sub_47E3B0(dword_791364);
          v231 = sub_60CA40(2);
          sub_47E3B0(dword_791364);
          sub_60C890(v231);
          v314 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
          ++*v314;
        }
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 160) + 492) + 476) )
        {
          sub_47E3B0(dword_791364);
          v313 = *(_DWORD *)(sub_60CA40(1) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v313 + 112))(v313);
          sub_47E3B0(dword_791364);
          v79 = sub_60CA40(1);
          sub_60C840(v79);
          sub_47E3B0(dword_791364);
          v232 = sub_60CA40(1);
          sub_47E3B0(dword_791364);
          sub_60C890(v232);
          v312 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
          ++*v312;
        }
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 160) + 496) + 476) )
        {
          sub_47E3B0(dword_791364);
          v311 = *(_DWORD *)(sub_60CA40(0) + 8);
          (*(void (__thiscall **)(int))(*(_DWORD *)v311 + 112))(v311);
          sub_47E3B0(dword_791364);
          v80 = sub_60CA40(0);
          sub_60C840(v80);
          sub_47E3B0(dword_791364);
          v233 = sub_60CA40(0);
          sub_47E3B0(dword_791364);
          sub_60C890(v233);
          v310 = (_DWORD *)(sub_47E3B0(dword_791364) + 24);
          ++*v310;
        }
        v81 = sub_47E3B0(dword_791364);
        if ( sub_4C6CB0(v81) == 2 || byte_791360 )
        {
          sub_47E3B0(dword_791364);
          sub_4C7820(1);
        }
        else
        {
          sub_47E3B0(dword_791364);
          sub_4C7820(0);
        }
        sub_519A40(0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 19);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x14:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 21);
      v216 = *(_DWORD *)(sub_47E3B0(dword_791364) + 24) + 100;
      sub_47E3B0(dword_791364);
      sub_4DC4D0(v216, 0);
      if ( !*(_DWORD *)(sub_47E3B0(dword_791364) + 24) )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
      ++dword_79133C;
      v82 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
      sub_47B010(v82, 1, 0, (int)this, 0, 0, 0);
      result = sub_47E3B0(dword_791364);
      if ( dword_79133C < *(_DWORD *)(result + 24) )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 20);
      return result;
    case 0x15:
      dword_7912F8 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      if ( sub_4C6CB0(dword_7912F8) == 2
        && (Concurrency::details::SchedulerProxy::GetQueueLength(dword_7912F8) == 1
         || Concurrency::details::SchedulerProxy::GetQueueLength(dword_7912F8) == 2)
        || byte_791360 )
      {
        sub_4C7360();
        sub_4C76E0(dword_7912F8);
      }
      if ( sub_4C6CB0(dword_7912F8) == 2 || byte_791360 )
        sub_4C7820(1);
      else
        sub_4C7820(0);
      if ( sub_4C6CB0(dword_7912F8) == 2
        && Concurrency::details::SchedulerProxy::GetQueueLength(dword_7912F8) == 1
        && sub_47E280(dword_791364) != 1 )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 22);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 23);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x16:
      v438 = 0;
      for ( i = 0; i < sub_47F950(dword_791364); ++i )
      {
        v83 = sub_47E390(i);
        if ( sub_4C6CB0(v83) == 1 )
        {
          v84 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v84) == 1 )
            ++v438;
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 23);
      if ( !v438 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      v437 = sub_62FBF0(v438);
      v436 = 0;
      i = 0;
      while ( 2 )
      {
        if ( i >= sub_47F950(dword_791364) )
          goto LABEL_329;
        v85 = sub_47E390(i);
        if ( sub_4C6CB0(v85) != 1 )
          goto LABEL_313;
        v86 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v86) != 1 )
          goto LABEL_313;
        if ( v436 != v437 )
        {
          ++v436;
LABEL_313:
          ++i;
          continue;
        }
        break;
      }
      v87 = sub_47E420(dword_791364);
      if ( v87 == sub_47BBC0(dword_791364) )
        goto LABEL_320;
      if ( *((_DWORD *)dword_7912F8 + 6) )
      {
        if ( *((_DWORD *)dword_7912F8 + 6) == 1 )
        {
          sub_47E390(i);
          sub_4CCEF0(v454);
        }
        else if ( *((int *)dword_7912F8 + 6) < 4 )
        {
LABEL_320:
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        }
        else
        {
          sub_47E390(i);
          sub_4CCF10(v454);
        }
      }
      else
      {
        sub_47E390(i);
        sub_4CCF40(v454);
      }
LABEL_329:
      if ( v436 != v437 )
        sub_5E9F20((char)"shWhineIndex == shTheWhiner", "..\\Casino\\PokerDrawScript.cpp", 1599);
      result = sub_47F950(dword_791364);
      if ( i >= result )
        return sub_5E9F20(
                 (char)"shTempIndex<pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerDrawScript.cpp",
                 1600);
      return result;
    case 0x17:
      v88 = sub_47E420(dword_791364);
      if ( v88 == sub_47BBC0(dword_791364) )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 24);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 15);
        sub_47E440(dword_791364);
      }
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
    case 0x18:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 3);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 30);
    case 0x19:
      if ( (__int16)sub_4F9110(dword_791364 + 56) < 1 )
        sub_5E9F20((char)"pokerGame->thePot.ActivePlayersLeft() >= 1", "..\\Casino\\PokerDrawScript.cpp", 1622);
      if ( (__int16)sub_4F91A0(dword_791364 + 56) < 2 )
        sub_5E9F20((char)"pokerGame->thePot.TotalPlayersLeft() >= 2", "..\\Casino\\PokerDrawScript.cpp", 1623);
      sub_47E540(0);
      for ( dword_791340 = 0; dword_791340 < sub_47F950(dword_791364); ++dword_791340 )
        word_790FB8[dword_791340] = 0;
      dword_791338 = 0;
      dword_791334 = 0;
      sub_4F4C80(dword_791364 + 56);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 26);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x1A:
      sub_4654D0(*(CRecentFileList **)(dword_791364 + 48));
      v89 = sub_47BBC0(dword_791364);
      sub_47E400(v89);
      if ( (__int16)sub_4F9110(dword_791364 + 56) >= 2 )
      {
        do
        {
          sub_47E440(dword_791364);
          v92 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v92) != 1 );
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 27);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      do
      {
        do
        {
          sub_47E440(dword_791364);
          v90 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v90) );
        v91 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      }
      while ( Concurrency::details::SchedulerProxy::GetQueueLength(v91) == 3 );
      goto LABEL_380;
    case 0x1B:
      dword_7912F0 *= 2;
      v93 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
      v234 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v93);
      v94 = sub_47BC60(dword_791364);
      sub_4F5110(dword_7912F0 * v94, v234);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 28);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x1C:
      v435 = 0;
      for ( i = 0; i < sub_47F950(dword_791364); ++i )
      {
        v95 = sub_47E390(i);
        if ( sub_4C6CB0(v95) == 1 )
        {
          v96 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v96) == 1 )
            ++v435;
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 29);
      if ( !v435 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      v434 = sub_62FBF0(v435);
      v433 = 0;
      i = 0;
      while ( 2 )
      {
        if ( i >= sub_47F950(dword_791364) )
          goto LABEL_370;
        v97 = sub_47E390(i);
        if ( sub_4C6CB0(v97) != 1 )
          goto LABEL_362;
        v98 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v98) != 1 )
          goto LABEL_362;
        if ( v433 != v434 )
        {
          ++v433;
LABEL_362:
          ++i;
          continue;
        }
        break;
      }
      sub_47E390(i);
      sub_4CD340(v454);
LABEL_370:
      if ( v433 != v434 )
        sub_5E9F20((char)"shWhineIndex == shTheWhiner", "..\\Casino\\PokerDrawScript.cpp", 1703);
      result = sub_47F950(dword_791364);
      if ( i >= result )
        return sub_5E9F20(
                 (char)"shTempIndex<pokerGame->GetNumberOfPlayersAtTable()",
                 "..\\Casino\\PokerDrawScript.cpp",
                 1704);
      return result;
    case 0x1D:
      dword_7912EC = sub_477320();
      sub_47E500(dword_791364);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 30);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 15);
    case 0x1E:
      if ( dword_7912EC == -1 )
      {
        v99 = sub_47BBC0(dword_791364);
        sub_47E400(v99);
        do
        {
          do
          {
            sub_47E440(dword_791364);
            v100 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v100) );
          v101 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v101) == 3 );
LABEL_380:
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 31);
      }
      else if ( dword_7912EC == -3 )
      {
        v102 = sub_47BBC0(dword_791364);
        sub_47E400(v102);
        do
        {
          do
          {
            sub_47E440(dword_791364);
            v103 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v103) );
          v104 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v104) == 3 );
        if ( sub_4F6420(dword_791364 + 56) > 0 )
        {
          v105 = sub_4F6420(dword_791364 + 56);
          v235 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v105;
          v106 = sub_4F64B0(dword_791364 + 56);
          sub_47E3D0(v106);
          sub_4C6B80(v235);
          v107 = sub_4F64B0(dword_791364 + 56);
          v108 = (ATL::CComCriticalSection *)sub_47E3D0(v107);
          ATL::CComCriticalSection::~CComCriticalSection(v108);
          sub_47EC90(0);
          v109 = sub_4F64B0(dword_791364 + 56);
          v432 = *(_DWORD *)(sub_47E3D0(v109) + 4);
          v110 = sub_4F6420(dword_791364 + 56);
          v111 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v397 = sub_64C8A0(v111 * v110, 0);
          v452 = v397;
          sub_5E7E40(v432, 7, v397, HIDWORD(v397));
        }
        byte_7912E8 = 1;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 31);
      }
      else
      {
        v112 = sub_47E490(dword_7912EC);
        sub_47E400(v112);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 29);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x1F:
      v113 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v113) != 1 )
      {
        v114 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v114) != 2 )
          sub_5E9F20(
            (char)"(pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() == ACTIVE) || (pokerGame->GetCurrentPokerPlayer"
                  "()->GetPlayerStatus() == ALLIN)",
            "..\\Casino\\PokerDrawScript.cpp",
            1761);
      }
      v115 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
      sub_47B010(v115, 1, 0, (int)this, 0, 0, 0);
      do
      {
        do
        {
          sub_47E440(dword_791364);
          v116 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v116) );
        v117 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      }
      while ( Concurrency::details::SchedulerProxy::GetQueueLength(v117) == 3 );
      ++dword_791338;
      if ( dword_791338 == (__int16)sub_4F91A0(dword_791364 + 56) )
      {
        dword_791338 = 0;
        ++dword_791334;
      }
      if ( dword_791334 >= 5 )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 32);
      else
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 31);
    case 0x20:
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x21:
      for ( dword_791340 = 0; dword_791340 < sub_47F950(dword_791364); ++dword_791340 )
      {
        v118 = sub_47E390(dword_791340);
        sub_4DC490(v118);
      }
      if ( (unsigned __int8)sub_4F6C80(dword_791364 + 56) )
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 34);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 37);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x22:
      if ( (__int16)sub_4F6E70(dword_791364 + 56) == -1 )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 35);
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 10);
      }
      else
      {
        v119 = sub_4F6E70(dword_791364 + 56);
        v120 = (Concurrency::details::SchedulerProxy *)sub_47E3D0(v119);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v120) == 3 )
          sub_5E9F20(
            (char)"pokerGame->GetPokerPlayerWithPotIndex( pokerGame->thePot.GetShowdownPlayer() )->GetPlayerStatus() != FOLDED",
            "..\\Casino\\PokerDrawScript.cpp",
            1807);
        v121 = sub_4F6E70(dword_791364 + 56);
        v122 = (Concurrency::details::SchedulerProxy *)sub_47E3D0(v121);
        if ( !Concurrency::details::SchedulerProxy::GetQueueLength(v122) )
          sub_5E9F20(
            (char)"pokerGame->GetPokerPlayerWithPotIndex( pokerGame->thePot.GetShowdownPlayer() )->GetPlayerStatus() != NOTPLAYING",
            "..\\Casino\\PokerDrawScript.cpp",
            1808);
        v123 = sub_4F6E70(dword_791364 + 56);
        v124 = (ATL::CAtlWinModule *)sub_47E3D0(v123);
        ATL::CAtlWinModule::~CAtlWinModule(v124);
        if ( sub_47E190(dword_791364) )
        {
          sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 1841);
        }
        else
        {
          v431 = sub_4F6E70(dword_791364 + 56);
          if ( sub_47E280(dword_791364) )
          {
            if ( sub_47E280(dword_791364) != 1 )
              sub_5E9F20((char)"pokerGame->GetHighlowType() == LOW", "..\\Casino\\PokerDrawScript.cpp", 1833);
            sub_47E3D0(v431);
            sub_4C7C40(v427);
            v455 = 9;
            sub_485940(&v428, 0, 0, 1, 0, 0, 0, 0);
            LOBYTE(v455) = 10;
            v238 = v428;
            sub_47E3D0(v431);
            sub_4DA8D0(v238);
            sub_4F7050(v431, v428);
            LOBYTE(v455) = 9;
            ATL::CComCriticalSection::~CComCriticalSection(&v428);
            v455 = -1;
            sub_484470(v427);
          }
          else
          {
            sub_47E3D0(v431);
            sub_4C7C40(v429);
            v455 = 7;
            sub_485940(&v430, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v455) = 8;
            v236 = *(_BYTE *)sub_4A2160(&v396);
            sub_47E3D0(v431);
            sub_4DA4D0(v236);
            sub_4F7050(v431, v430);
            for ( word_791330 = 0; ; ++word_791330 )
            {
              v125 = word_791330;
              if ( v125 >= sub_47F950(dword_791364) )
                break;
              v126 = sub_47E390(word_791330);
              if ( sub_4C6CB0(v126) )
              {
                v237 = (__int16)dword_791308;
                v217 = sub_47E490(v431);
                sub_47E390(word_791330);
                sub_4E0BC0(v217, v237);
              }
            }
            LOBYTE(v455) = 7;
            ATL::CComCriticalSection::~CComCriticalSection(&v430);
            v455 = -1;
            sub_484470(v429);
          }
        }
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 34);
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 30);
      }
    case 0x23:
      if ( sub_47E280(dword_791364) != 2 )
      {
        if ( sub_47E280(dword_791364) )
          word_79132C = sub_4F73D0(0);
        else
          word_79132C = sub_4F73D0(1);
        if ( word_79132C == -4 )
        {
          v426 = 1;
          while ( 1 )
          {
            word_79132C = sub_4F7AE0(dword_791364 + 56);
            if ( word_79132C == -1 )
              break;
            v127 = sub_4F78A0(word_79132C);
            v239 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v127;
            sub_47E3D0(word_79132C);
            sub_4C6B80(v239);
            v128 = (ATL::CComCriticalSection *)sub_47E3D0(word_79132C);
            ATL::CComCriticalSection::~CComCriticalSection(v128);
            v129 = sub_47E3D0(word_79132C);
            sub_4DA360(v129);
            v425 = *(_DWORD *)(sub_47E3D0(word_79132C) + 4);
            v130 = sub_4F78A0(word_79132C);
            v131 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
            v395 = sub_64C8A0(v131 * v130, 0);
            v452 = v395;
            sub_5E7E40(v425, 7, v395, HIDWORD(v395));
            if ( v426 )
            {
              v132 = sub_47E3D0(word_79132C);
              if ( sub_4C6CB0(v132) == 1 )
              {
                dword_791300 = 13;
                dword_791304 = sub_47E490(word_79132C);
                v426 = 0;
              }
              else
              {
                dword_791300 = 0;
              }
            }
            else
            {
              v133 = sub_47E3D0(word_79132C);
              if ( sub_4C6CB0(v133) == 1 && !sub_62FBF0(2) )
                dword_791304 = sub_47E490(word_79132C);
            }
          }
        }
        else
        {
          if ( word_79132C < 0 )
            sub_5E9F20((char)"shWinner >= 0", "..\\Casino\\PokerDrawScript.cpp", 1890);
          v134 = sub_4F78A0(word_79132C);
          v240 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v134;
          sub_47E3D0(word_79132C);
          sub_4C6B80(v240);
          v135 = (ATL::CComCriticalSection *)sub_47E3D0(word_79132C);
          ATL::CComCriticalSection::~CComCriticalSection(v135);
          v136 = sub_47E3D0(word_79132C);
          sub_4DA360(v136);
          v424 = *(_DWORD *)(sub_47E3D0(word_79132C) + 4);
          v137 = sub_4F78A0(word_79132C);
          v138 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v394 = sub_64C8A0(v138 * v137, 0);
          v452 = v394;
          sub_5E7E40(v424, 7, v394, HIDWORD(v394));
          if ( byte_7912EA
            && (v139 = sub_4F78A0(word_79132C),
                v140 = sub_62FBF0(2 * (_DWORD)dword_791308),
                v141 = v140 + sub_62FBF0(2 * (_DWORD)dword_791308) + 5,
                v139 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v141) )
          {
            dword_791300 = 11;
          }
          else if ( byte_7912EA
                 && (v142 = sub_4F78A0(word_79132C),
                     v143 = sub_62FBF0((int)dword_791308 / 4),
                     v144 = v143 + sub_62FBF0((int)dword_791308 / 4) + 3,
                     v142 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v144) )
          {
            dword_791300 = 10;
          }
          else
          {
            dword_791300 = 8;
          }
          dword_791304 = sub_47E490(word_79132C);
        }
        goto LABEL_524;
      }
      if ( sub_47D7F0(dword_791364) == 1 )
      {
        sub_4A20D0(v393);
        v455 = 11;
        v145 = (_DWORD *)sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        sub_4F7BD0(*v145);
        v455 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(v393);
      }
      else
      {
        sub_4A20D0(v392);
        v455 = 12;
        v146 = (_DWORD *)sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        sub_4F7BD0(*v146);
        v455 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(v392);
      }
      v423 = sub_4F8C30(1);
      v422 = sub_4F8C30(0);
      if ( v423 == -5 && v422 == -5 )
        sub_5E9F20(
          (char)"(shHighWinner!=PokerPot::NOWINNER) || (shLowWinner!=PokerPot::NOWINNER)",
          "..\\Casino\\PokerDrawScript.cpp",
          1924);
      if ( v423 == -4 )
      {
        v421 = 1;
        while ( 1 )
        {
          v423 = sub_4F8D90(1);
          if ( v423 == -1 )
            break;
          v147 = sub_4F79B0(v423, 1);
          v241 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v147;
          sub_47E3D0(v423);
          sub_4C6B80(v241);
          v148 = (ATL::CComCriticalSection *)sub_47E3D0(v423);
          ATL::CComCriticalSection::~CComCriticalSection(v148);
          v149 = sub_47E3D0(v423);
          sub_4DA470(v149);
          v420 = *(_DWORD *)(sub_47E3D0(v423) + 4);
          v150 = sub_4F79B0(v423, 1);
          v151 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v391 = sub_64C8A0(v151 * v150, 0);
          v452 = v391;
          sub_5E7E40(v420, 7, v391, HIDWORD(v391));
          if ( v422 == -5 )
          {
            if ( v421 )
            {
              v152 = sub_47E3D0(v423);
              if ( sub_4C6CB0(v152) == 1 )
              {
                dword_791300 = 13;
                dword_791304 = sub_47E490(v423);
                v421 = 0;
              }
              else
              {
                dword_791300 = 0;
              }
            }
            else
            {
              v153 = sub_47E3D0(v423);
              if ( sub_4C6CB0(v153) == 1 && !sub_62FBF0(2) )
                dword_791304 = sub_47E490(v423);
            }
          }
          else
          {
            dword_791300 = 0;
          }
        }
        goto LABEL_499;
      }
      if ( v423 == -5 )
        goto LABEL_499;
      if ( v423 < 0 )
        sub_5E9F20((char)"shHighWinner >= 0", "..\\Casino\\PokerDrawScript.cpp", 1975);
      v154 = sub_4F79B0(v423, 1);
      v242 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v154;
      sub_47E3D0(v423);
      sub_4C6B80(v242);
      v155 = (ATL::CComCriticalSection *)sub_47E3D0(v423);
      ATL::CComCriticalSection::~CComCriticalSection(v155);
      v156 = sub_47E3D0(v423);
      sub_4DA470(v156);
      v419 = *(_DWORD *)(sub_47E3D0(v423) + 4);
      v157 = sub_4F79B0(v423, 1);
      v158 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      v390 = sub_64C8A0(v158 * v157, 0);
      v452 = v390;
      sub_5E7E40(v419, 7, v390, HIDWORD(v390));
      if ( v422 == -5 )
      {
        if ( byte_7912EA
          && (v159 = sub_4F79B0(v423, 1),
              v160 = sub_62FBF0(2 * (_DWORD)dword_791308),
              v161 = v160 + sub_62FBF0(2 * (_DWORD)dword_791308) + 5,
              v159 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v161) )
        {
          dword_791300 = 11;
        }
        else if ( byte_7912EA
               && (v162 = sub_4F79B0(v423, 1),
                   v163 = sub_62FBF0((int)dword_791308 / 4),
                   v164 = v163 + sub_62FBF0((int)dword_791308 / 4) + 3,
                   v162 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v164) )
        {
          dword_791300 = 10;
        }
        else
        {
          dword_791300 = 8;
        }
        goto LABEL_491;
      }
      if ( v422 == -4 )
      {
        dword_791300 = 0;
      }
      else
      {
        if ( v422 == v423 )
        {
          dword_791300 = 14;
          dword_791304 = sub_47E490(v423);
          goto LABEL_499;
        }
        v165 = sub_47E3D0(v423);
        if ( sub_4C6CB0(v165) == 1 && (v166 = sub_47E3D0(v422), sub_4C6CB0(v166) == 1) )
        {
          dword_791300 = 15;
          if ( !sub_62FBF0(2) )
          {
LABEL_491:
            dword_791304 = sub_47E490(v423);
            goto LABEL_499;
          }
          dword_791304 = sub_47E490(v422);
        }
        else
        {
          v167 = sub_47E3D0(v423);
          if ( sub_4C6CB0(v167) == 1 )
          {
            dword_791300 = 15;
            dword_791304 = sub_47E490(v423);
          }
          else
          {
            v168 = sub_47E3D0(v422);
            if ( sub_4C6CB0(v168) == 1 )
            {
              dword_791300 = 15;
              dword_791304 = sub_47E490(v422);
            }
            else
            {
              dword_791300 = 0;
            }
          }
        }
      }
LABEL_499:
      if ( v422 == -4 )
      {
        v418 = 1;
        while ( 1 )
        {
          v422 = sub_4F8D90(0);
          if ( v422 == -1 )
            break;
          v169 = sub_4F79B0(v422, 0);
          v243 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v169;
          sub_47E3D0(v422);
          sub_4C6B80(v243);
          v170 = (ATL::CComCriticalSection *)sub_47E3D0(v422);
          ATL::CComCriticalSection::~CComCriticalSection(v170);
          sub_47E3D0(v422);
          sub_4DA3C0(0);
          v417 = *(_DWORD *)(sub_47E3D0(v422) + 4);
          v171 = sub_4F79B0(v422, 0);
          v172 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v389 = sub_64C8A0(v172 * v171, 0);
          v452 = v389;
          sub_5E7E40(v417, 7, v389, HIDWORD(v389));
          if ( v423 == -5 )
          {
            if ( v418 )
            {
              v173 = sub_47E3D0(v422);
              if ( sub_4C6CB0(v173) == 1 )
              {
                dword_791300 = 13;
                dword_791304 = sub_47E490(v422);
                v418 = 0;
              }
              else
              {
                dword_791300 = 0;
              }
            }
            else
            {
              v174 = sub_47E3D0(v422);
              if ( sub_4C6CB0(v174) == 1 && !sub_62FBF0(2) )
                dword_791304 = sub_47E490(v422);
            }
          }
        }
      }
      else if ( v422 != -5 )
      {
        if ( v422 < 0 )
          sub_5E9F20((char)"shLowWinner >= 0", "..\\Casino\\PokerDrawScript.cpp", 2080);
        v175 = sub_4F79B0(v422, 0);
        v176 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v388 = sub_64C8A0(v176 * v175, 0);
        v452 = v388;
        v177 = sub_4F79B0(v422, 0);
        v244 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v177;
        sub_47E3D0(v422);
        sub_4C6B80(v244);
        v178 = (ATL::CComCriticalSection *)sub_47E3D0(v422);
        ATL::CComCriticalSection::~CComCriticalSection(v178);
        sub_47E3D0(v422);
        sub_4DA3C0(0);
        v416 = *(_DWORD *)(sub_47E3D0(v422) + 4);
        v179 = sub_4F79B0(v422, 0);
        v180 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v387 = sub_64C8A0(v180 * v179, 0);
        v452 = v387;
        sub_5E7E40(v416, 7, v387, HIDWORD(v387));
        if ( v423 == -5 )
        {
          if ( byte_7912EA
            && (v181 = sub_4F79B0(v422, 0),
                v182 = sub_62FBF0(2 * (_DWORD)dword_791308),
                v183 = v182 + sub_62FBF0(2 * (_DWORD)dword_791308) + 5,
                v181 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v183) )
          {
            dword_791300 = 11;
          }
          else if ( byte_7912EA
                 && (v184 = sub_4F79B0(v422, 0),
                     v185 = sub_62FBF0((int)dword_791308 / 4),
                     v186 = v185 + sub_62FBF0((int)dword_791308 / 4) + 3,
                     v184 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v186) )
          {
            dword_791300 = 10;
          }
          else
          {
            dword_791300 = 8;
          }
          dword_791304 = sub_47E490(v422);
        }
      }
LABEL_524:
      byte_7912EA = 0;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 33);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 30);
    case 0x24:
      word_79132C = sub_4F6540(dword_791364 + 56);
      if ( sub_47D7B0(dword_791364) == 1 && *(_BYTE *)(sub_47E3D0(word_79132C) + 29) )
      {
        sub_47E3D0(word_79132C);
        sub_4C7360();
        v187 = sub_47E3D0(word_79132C);
        sub_4C76E0(v187);
      }
      v188 = sub_47E3D0(word_79132C);
      sub_4DA360(v188);
      for ( word_791330 = 0; ; ++word_791330 )
      {
        v189 = word_791330;
        if ( v189 >= sub_47F950(dword_791364) )
          break;
        v190 = sub_47E390(word_791330);
        if ( sub_4C6CB0(v190) && !sub_47E190(dword_791364) )
        {
          v245 = (__int16)dword_791308;
          v218 = sub_47E490(word_79132C);
          sub_47E390(word_791330);
          sub_4E08E0(v218, v245);
        }
      }
      v191 = sub_4F6840(dword_791364 + 56);
      v246 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v191;
      sub_47E3D0(word_79132C);
      sub_4C6B80(v246);
      v192 = (ATL::CComCriticalSection *)sub_47E3D0(word_79132C);
      ATL::CComCriticalSection::~CComCriticalSection(v192);
      v415 = *(_DWORD *)(sub_47E3D0(word_79132C) + 4);
      v193 = sub_4F6840(dword_791364 + 56);
      v194 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      v386 = sub_64C8A0(v194 * v193, 0);
      v452 = v386;
      sub_5E7E40(v415, 7, v386, HIDWORD(v386));
      v195 = sub_4F6840(dword_791364 + 56);
      v196 = sub_62FBF0(2 * (_DWORD)dword_791308);
      v197 = v196 + sub_62FBF0(2 * (_DWORD)dword_791308) + 5;
      if ( v195 <= CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v197 )
      {
        v198 = sub_4F6840(dword_791364 + 56);
        v199 = sub_62FBF0((int)dword_791308 / 4);
        v200 = v199 + sub_62FBF0((int)dword_791308 / 4) + 3;
        if ( v198 >= CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v200 )
          dword_791300 = 12;
        else
          dword_791300 = 10;
      }
      else
      {
        dword_791300 = 11;
      }
      dword_791304 = sub_47E490(word_79132C);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 37);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 45);
    case 0x25:
      if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
        goto LABEL_555;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_791EB8 + 724))(dword_791EB8);
      dword_791314 = sub_483C30(&unk_791324, &unk_791328);
      if ( dword_791314 >= 0 )
      {
        ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 38);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      v201 = sub_47E390(dword_791304);
      if ( sub_4C6CB0(v201) == 1
        && (dword_791300 == 8
         || dword_791300 == 10
         || dword_791300 == 11
         || dword_791300 == 12
         || dword_791300 == 13
         || dword_791300 == 14
         || dword_791300 == 15) )
      {
        sub_483A70(dword_791304, &v413, &v414);
        if ( v413 == 1 && v414 < 0 && !sub_62FBF0(2) )
          dword_791300 = 9;
      }
LABEL_555:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 39);
      if ( !dword_791300 )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1);
      if ( dword_791300 == 9 )
      {
        v247 = v454;
        sub_47E390(dword_791304);
        return sub_4CD3A0(v247);
      }
      v202 = sub_47E390(dword_791304);
      if ( sub_4C6CB0(v202) == 1 )
      {
        switch ( dword_791300 )
        {
          case 8:
            sub_47E390(dword_791304);
            sub_4C7C40(v384);
            v455 = 13;
            sub_485940(v383, 1, 1, 1, 1, 0, 0, 0);
            v455 = 14;
            v248 = dword_79140C;
            sub_4A2160(&v382);
            v309 = (unsigned __int8)sub_4A1F00(v248) && !sub_62FBF0(2);
            v385 = v309;
            v455 = 13;
            ATL::CComCriticalSection::~CComCriticalSection(v383);
            v455 = -1;
            sub_484470(v384);
            v249 = v454;
            if ( v385 )
            {
              sub_47E390(dword_791304);
              return sub_4CCBA0(v249);
            }
            else
            {
              sub_47E390(dword_791304);
              return sub_4CCB20(v249);
            }
          case 11:
            sub_47E390(dword_791304);
            sub_4C7C40(v380);
            v455 = 15;
            sub_485940(v379, 1, 1, 1, 1, 0, 0, 0);
            v455 = 16;
            v250 = dword_79140C;
            sub_4A2160(&v378);
            v308 = (unsigned __int8)sub_4A1F00(v250) && !sub_62FBF0(2);
            v381 = v308;
            v455 = 15;
            ATL::CComCriticalSection::~CComCriticalSection(v379);
            v455 = -1;
            sub_484470(v380);
            v251 = v454;
            if ( v381 )
            {
              sub_47E390(dword_791304);
              return sub_4CCBA0(v251);
            }
            else
            {
              sub_47E390(dword_791304);
              return sub_4CCC20(v251);
            }
          case 10:
            sub_47E390(dword_791304);
            sub_4C7C40(v376);
            v455 = 17;
            sub_485940(v375, 1, 1, 1, 1, 0, 0, 0);
            v455 = 18;
            v252 = dword_79140C;
            sub_4A2160(&v374);
            v307 = (unsigned __int8)sub_4A1F00(v252) && !sub_62FBF0(2);
            v377 = v307;
            v455 = 17;
            ATL::CComCriticalSection::~CComCriticalSection(v375);
            v455 = -1;
            sub_484470(v376);
            v253 = v454;
            if ( v377 )
            {
              sub_47E390(dword_791304);
              return sub_4CCBA0(v253);
            }
            else
            {
              sub_47E390(dword_791304);
              return sub_4CCBE0(v253);
            }
          case 12:
            v254 = v454;
            sub_47E390(dword_791304);
            return sub_4CCB60(v254);
          case 13:
            v255 = v454;
            sub_47E390(dword_791304);
            return sub_4CCDE0(v255);
          case 15:
            v256 = v454;
            sub_47E390(dword_791304);
            return sub_4CCF80(v256);
          case 14:
            v257 = v454;
            sub_47E390(dword_791304);
            return sub_4CCFC0(v257);
        }
      }
      else
      {
        v203 = sub_47E390(dword_791304);
        if ( sub_4C6CB0(v203) == 2 )
        {
          v405 = 0;
          v406 = 0;
          for ( word_791330 = 0; ; ++word_791330 )
          {
            v204 = word_791330;
            if ( v204 >= sub_47F950(dword_791364) )
              break;
            v205 = sub_47E390(word_791330);
            if ( sub_4C6CB0(v205) == 1 )
            {
              ++v406;
              v206 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_791330);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v206) == 1 )
                ++v405;
            }
          }
          v407 = sub_62FBF0(v405) + 1;
          v411 = 0;
          v409 = 0;
          while ( v411 < sub_47F950(dword_791364) && v409 < v407 )
          {
            v207 = sub_47E390(v411);
            if ( sub_4C6CB0(v207) == 1 )
            {
              v208 = (Concurrency::details::SchedulerProxy *)sub_47E390(v411);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v208) == 1 )
              {
                if ( ++v409 < v407 )
                  ++v411;
              }
              else
              {
                ++v411;
              }
            }
            else
            {
              ++v411;
            }
          }
          if ( v411 >= sub_47F950(dword_791364) )
          {
            v410 = -1;
          }
          else
          {
            v410 = v411;
            v404 = sub_47E390(v411);
            if ( v404 && *(_DWORD *)(sub_5DCB00(*(_DWORD *)(v404 + 4)) + 12) != -1 )
              v410 = -1;
          }
          v412 = sub_62FBF0(v406) + 1;
          v411 = 0;
          v409 = 0;
          while ( v411 < sub_47F950(dword_791364) && v409 < v412 )
          {
            v209 = sub_47E390(v411);
            if ( sub_4C6CB0(v209) == 1 )
            {
              if ( ++v409 < v412 )
                ++v411;
            }
            else
            {
              ++v411;
            }
          }
          v408 = 0;
          if ( v411 >= sub_47F950(dword_791364) )
            dword_791300 = 0;
          else
            v408 = v411;
          switch ( dword_791300 )
          {
            case 8:
              sub_47E390(dword_791304);
              sub_4C7C40(v372);
              v455 = 19;
              sub_485940(v371, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v455) = 20;
              v258 = dword_79140C;
              sub_4A2160(&v370);
              v373 = sub_4A1F00(v258);
              LOBYTE(v455) = 19;
              ATL::CComCriticalSection::~CComCriticalSection(v371);
              v455 = -1;
              sub_484470(v372);
              if ( v373 )
              {
                if ( v410 < 0 )
                {
                  v265 = v454;
                  sub_47E390(v408);
                  return sub_4CCCE0(v265);
                }
                else
                {
                  sub_47E390(v410);
                  sub_4C7C40(v368);
                  v455 = 21;
                  sub_485940(v367, 1, 1, 1, 1, 0, 0, 0);
                  v455 = 22;
                  v259 = dword_79140C;
                  sub_4A2160(&v366);
                  v306 = (unsigned __int8)sub_4A1F00(v259) && !sub_62FBF0(2);
                  v369 = v306;
                  v455 = 21;
                  ATL::CComCriticalSection::~CComCriticalSection(v367);
                  v455 = -1;
                  sub_484470(v368);
                  if ( v369 )
                  {
                    v260 = v454;
                    sub_47E390(v410);
                    return sub_4CCE00(v260);
                  }
                  else
                  {
                    sub_47E390(v410);
                    sub_4C7C40(v364);
                    v455 = 23;
                    sub_485940(v363, 1, 1, 1, 1, 0, 0, 0);
                    v455 = 24;
                    v261 = dword_791390;
                    sub_4A2160(&v362);
                    v305 = (unsigned __int8)sub_4A1E10(v261) && !sub_62FBF0(2);
                    v365 = v305;
                    v455 = 23;
                    ATL::CComCriticalSection::~CComCriticalSection(v363);
                    v455 = -1;
                    sub_484470(v364);
                    if ( v365 )
                    {
                      v262 = v454;
                      sub_47E390(v410);
                      return sub_4CCE40(v262);
                    }
                    else if ( sub_62FBF0(3) )
                    {
                      v264 = v454;
                      sub_47E390(v410);
                      return sub_4CCCE0(v264);
                    }
                    else
                    {
                      v263 = v454;
                      sub_47E390(v410);
                      return sub_4CCDA0(v263);
                    }
                  }
                }
              }
              else if ( v410 < 0 )
              {
                v272 = v454;
                sub_47E390(v408);
                return sub_4CCC60(v272);
              }
              else
              {
                sub_47E390(v410);
                sub_4C7C40(v360);
                v455 = 25;
                sub_485940(v359, 1, 1, 1, 1, 0, 0, 0);
                v455 = 26;
                v266 = dword_79140C;
                sub_4A2160(&v358);
                v304 = (unsigned __int8)sub_4A1F00(v266) && !sub_62FBF0(2);
                v361 = v304;
                v455 = 25;
                ATL::CComCriticalSection::~CComCriticalSection(v359);
                v455 = -1;
                sub_484470(v360);
                if ( v361 )
                {
                  v267 = v454;
                  sub_47E390(v410);
                  return sub_4CCE00(v267);
                }
                else
                {
                  sub_47E390(v410);
                  sub_4C7C40(v356);
                  v455 = 27;
                  sub_485940(v355, 1, 1, 1, 1, 0, 0, 0);
                  v455 = 28;
                  v268 = dword_791390;
                  sub_4A2160(&v354);
                  v303 = (unsigned __int8)sub_4A1E10(v268) && !sub_62FBF0(2);
                  v357 = v303;
                  v455 = 27;
                  ATL::CComCriticalSection::~CComCriticalSection(v355);
                  v455 = -1;
                  sub_484470(v356);
                  if ( v357 )
                  {
                    v269 = v454;
                    sub_47E390(v410);
                    return sub_4CCE40(v269);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v271 = v454;
                    sub_47E390(v410);
                    return sub_4CCC60(v271);
                  }
                  else
                  {
                    v270 = v454;
                    sub_47E390(v410);
                    return sub_4CCDA0(v270);
                  }
                }
              }
            case 11:
              sub_47E390(dword_791304);
              sub_4C7C40(v352);
              v455 = 29;
              sub_485940(v351, 1, 1, 1, 1, 0, 0, 0);
              LOBYTE(v455) = 30;
              v273 = dword_79140C;
              sub_4A2160(&v350);
              v353 = sub_4A1F00(v273);
              LOBYTE(v455) = 29;
              ATL::CComCriticalSection::~CComCriticalSection(v351);
              v455 = -1;
              sub_484470(v352);
              if ( v353 )
              {
                if ( v410 < 0 )
                {
                  v280 = v454;
                  sub_47E390(v408);
                  return sub_4CCCE0(v280);
                }
                else
                {
                  sub_47E390(v410);
                  sub_4C7C40(v348);
                  v455 = 31;
                  sub_485940(v347, 1, 1, 1, 1, 0, 0, 0);
                  v455 = 32;
                  v274 = dword_79140C;
                  sub_4A2160(&v346);
                  v302 = (unsigned __int8)sub_4A1F00(v274) && !sub_62FBF0(2);
                  v349 = v302;
                  v455 = 31;
                  ATL::CComCriticalSection::~CComCriticalSection(v347);
                  v455 = -1;
                  sub_484470(v348);
                  if ( v349 )
                  {
                    v275 = v454;
                    sub_47E390(v410);
                    return sub_4CCE00(v275);
                  }
                  else
                  {
                    sub_47E390(v410);
                    sub_4C7C40(v344);
                    v455 = 33;
                    sub_485940(v343, 1, 1, 1, 1, 0, 0, 0);
                    v455 = 34;
                    v276 = dword_791390;
                    sub_4A2160(&v342);
                    v301 = (unsigned __int8)sub_4A1E10(v276) && !sub_62FBF0(2);
                    v345 = v301;
                    v455 = 33;
                    ATL::CComCriticalSection::~CComCriticalSection(v343);
                    v455 = -1;
                    sub_484470(v344);
                    if ( v345 )
                    {
                      v277 = v454;
                      sub_47E390(v410);
                      return sub_4CCE40(v277);
                    }
                    else if ( sub_62FBF0(3) )
                    {
                      v279 = v454;
                      sub_47E390(v410);
                      return sub_4CCCE0(v279);
                    }
                    else
                    {
                      v278 = v454;
                      sub_47E390(v410);
                      return sub_4CCDA0(v278);
                    }
                  }
                }
              }
              else if ( v410 < 0 )
              {
                v287 = v454;
                sub_47E390(v408);
                return sub_4CCD60(v287);
              }
              else
              {
                sub_47E390(v410);
                sub_4C7C40(v340);
                v455 = 35;
                sub_485940(v339, 1, 1, 1, 1, 0, 0, 0);
                v455 = 36;
                v281 = dword_79140C;
                sub_4A2160(&v338);
                v300 = (unsigned __int8)sub_4A1F00(v281) && !sub_62FBF0(2);
                v341 = v300;
                v455 = 35;
                ATL::CComCriticalSection::~CComCriticalSection(v339);
                v455 = -1;
                sub_484470(v340);
                if ( v341 )
                {
                  v282 = v454;
                  sub_47E390(v410);
                  return sub_4CCE00(v282);
                }
                else
                {
                  sub_47E390(v410);
                  sub_4C7C40(v336);
                  v455 = 37;
                  sub_485940(v335, 1, 1, 1, 1, 0, 0, 0);
                  v455 = 38;
                  v283 = dword_791390;
                  sub_4A2160(&v334);
                  v299 = (unsigned __int8)sub_4A1E10(v283) && !sub_62FBF0(2);
                  v337 = v299;
                  v455 = 37;
                  ATL::CComCriticalSection::~CComCriticalSection(v335);
                  v455 = -1;
                  sub_484470(v336);
                  if ( v337 )
                  {
                    v284 = v454;
                    sub_47E390(v410);
                    return sub_4CCE40(v284);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v286 = v454;
                    sub_47E390(v410);
                    return sub_4CCD60(v286);
                  }
                  else
                  {
                    v285 = v454;
                    sub_47E390(v410);
                    return sub_4CCDA0(v285);
                  }
                }
              }
            case 10:
              if ( v410 < 0 )
              {
                v294 = v454;
                sub_47E390(v408);
                return sub_4CCD20(v294);
              }
              else
              {
                sub_47E390(v410);
                sub_4C7C40(v332);
                v455 = 39;
                sub_485940(v331, 1, 1, 1, 1, 0, 0, 0);
                v455 = 40;
                v324 = (unsigned int)&unk_C00000;
                v288 = dword_79140C;
                sub_4A2160(&v330);
                v298 = (unsigned __int8)sub_4A1F00(v288) && !sub_62FBF0(2);
                v333 = v298;
                v455 = 39;
                if ( ((unsigned int)&unk_800000 & (unsigned int)&unk_C00000) != 0 )
                {
                  v324 = (unsigned int)&unk_C00000 & 0xFF7FFFFF;
                  ATL::CComCriticalSection::~CComCriticalSection(v331);
                }
                v455 = -1;
                if ( (v324 & 0x400000) != 0 )
                {
                  v324 &= ~0x400000u;
                  sub_484470(v332);
                }
                if ( v333 )
                {
                  v289 = v454;
                  sub_47E390(v410);
                  return sub_4CCE00(v289);
                }
                else
                {
                  sub_47E390(v410);
                  sub_4C7C40(v328);
                  v455 = 41;
                  sub_485940(v327, 1, 1, 1, 1, 0, 0, 0);
                  v455 = 42;
                  v325 = (unsigned int)&unk_1000000 | v324 | 0x2000000;
                  v290 = dword_791390;
                  sub_4A2160(&v326);
                  v297 = (unsigned __int8)sub_4A1E10(v290) && !sub_62FBF0(2);
                  v329 = v297;
                  v455 = 41;
                  if ( (v325 & 0x2000000) != 0 )
                  {
                    v325 &= ~0x2000000u;
                    ATL::CComCriticalSection::~CComCriticalSection(v327);
                  }
                  v455 = -1;
                  if ( ((unsigned int)&unk_1000000 & v325) != 0 )
                    sub_484470(v328);
                  if ( v329 )
                  {
                    v291 = v454;
                    sub_47E390(v410);
                    return sub_4CCE40(v291);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v293 = v454;
                    sub_47E390(v410);
                    return sub_4CCD20(v293);
                  }
                  else
                  {
                    v292 = v454;
                    sub_47E390(v410);
                    return sub_4CCDA0(v292);
                  }
                }
              }
            case 12:
              v295 = v454;
              sub_47E390(v408);
              return sub_4CCCA0(v295);
            case 14:
              v296 = v454;
              if ( v410 < 0 )
                sub_47E390(v408);
              else
                sub_47E390(v410);
              return sub_4CCFE0(v296);
          }
        }
      }
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1);
    case 0x26:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 39);
      v210 = sub_47E390(dword_791314);
      if ( sub_4C6CB0(v210) == 2 )
      {
        for ( j = dword_791314; ; j = sub_62FBF0(v212) )
        {
          v211 = sub_47E390(j);
          if ( sub_4C6CB0(v211) == 1 )
            break;
          v212 = sub_47F950(dword_791364);
        }
        if ( sub_62FBF0(1) )
        {
          sub_47E390(j);
          return sub_4CD190(v454);
        }
        else
        {
          sub_47E390(j);
          return sub_4CD1B0(v454);
        }
      }
      else if ( sub_62FBF0(3) == 10 )
      {
        sub_47E390(dword_791314);
        return sub_4CD1D0(v454);
      }
      else
      {
        sub_47E390(dword_791314);
        return sub_4CD170(v454);
      }
    case 0x27:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 40);
      if ( (int)sub_637810(4) >= 3 || (int)sub_637810(4) < 0 )
        return sub_5FC490(3);
      v213 = sub_637810(4);
      return sub_5FC490(v213 + 1);
    case 0x28:
    case 0x29:
LABEL_3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 42);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 0x2A:
      ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
      sub_47AA30(dword_791364);
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 3) + 28))(*(this + 3), 0);
      return sub_5FC420(0);
    default:
      return result;
  }
}


//======================================================================
// sub_477320
// entry 00477320  size 293  status ok
//======================================================================

int sub_477320()
{
  int v0; // esi
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v4; // [esp+8h] [ebp-8h]
  unsigned int v5; // [esp+Ch] [ebp-4h]

  v4 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  v0 = sub_4C6A70(v4);
  dword_79131C = v0 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_79131C > dword_7912F0 * sub_47BC60(dword_791364) )
  {
    v1 = sub_47BC60(dword_791364);
    v5 = dword_7912F0 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v1;
    sub_4C6C10(v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    v3 = (__int16)sub_4F52A0(dword_791364 + 56);
  }
  else
  {
    v5 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0(9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v4, 2u);
    v3 = (__int16)sub_4F53C0(dword_79131C);
  }
  sub_47EC90(v5);
  return v3;
}


//======================================================================
// sub_477450
// entry 00477450  size 341  status ok
//======================================================================

int __cdecl sub_477450(char a1)
{
  int v1; // esi
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v5; // [esp+8h] [ebp-8h]
  unsigned int v6; // [esp+Ch] [ebp-4h]
  unsigned int v7; // [esp+Ch] [ebp-4h]

  v4 = -99;
  v5 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  v1 = sub_4C6A70(v5);
  dword_79131C = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_79131C > sub_4F67D0(dword_791364 + 56) )
  {
    if ( !a1 )
    {
      v2 = sub_4F67D0(dword_791364 + 56);
      v7 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v2;
      sub_4C6C10(v7);
      ATL::CComCriticalSection::~CComCriticalSection(v5);
      sub_4DC4D0(3, 0);
      v4 = (__int16)sub_4F5CD0(dword_791364 + 56);
      sub_47EC90(v7);
    }
    dword_791300 = 3;
  }
  else
  {
    if ( !a1 )
    {
      v6 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v6);
      ATL::CComCriticalSection::~CComCriticalSection(v5);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v5, 2u);
      v4 = (__int16)sub_4F5E80(dword_79131C);
      sub_47EC90(v6);
    }
    dword_791300 = 7;
  }
  return v4;
}


//======================================================================
// sub_4775B0
// entry 004775b0  size 642  status ok
//======================================================================

int __cdecl sub_4775B0(char a1, int a2)
{
  char *v2; // eax
  int v3; // esi
  int v5; // [esp+Ch] [ebp-10h]
  Concurrency::details::SchedulerProxy *v6; // [esp+10h] [ebp-Ch]
  unsigned int v7; // [esp+14h] [ebp-8h]
  unsigned int v8; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  v5 = -99;
  v6 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  if ( *(_BYTE *)(dword_7947E0 + 20276) && v6 == (Concurrency::details::SchedulerProxy *)sub_4798C0(dword_791364) )
  {
    v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
    v9 = sub_64CAB0(v2);
  }
  else if ( a2 <= 0 )
  {
    if ( byte_7912E9 )
      v9 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    else
      v9 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  }
  else
  {
    v9 = a2;
  }
  if ( v9 >= *(_DWORD *)(dword_791364 + 1040) )
  {
    if ( v9 > *(_DWORD *)(dword_791364 + 1040) )
      *(_DWORD *)(dword_791364 + 1040) = v9;
  }
  else
  {
    v9 = *(_DWORD *)(dword_791364 + 1040);
  }
  v3 = sub_4C6A70(v6);
  dword_79131C = v3 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_79131C > v9 )
  {
    if ( !a1 )
    {
      v8 = v9 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v8);
      ATL::CComCriticalSection::~CComCriticalSection(v6);
      if ( byte_7912E9 || sub_47D6B0(dword_791364) )
        sub_4DC4D0(1, v8);
      else
        sub_4DC4D0(2, v8);
      v5 = (__int16)sub_4F58C0(v9);
      sub_47EC90(v8);
    }
    if ( byte_7912E9 || sub_47D7B0(dword_791364) != 1 )
    {
      dword_791300 = 4;
    }
    else
    {
      dword_791300 = 5;
      *((_BYTE *)v6 + 29) = 1;
    }
  }
  else
  {
    if ( !a1 )
    {
      v7 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v7);
      ATL::CComCriticalSection::~CComCriticalSection(v6);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v6, 2u);
      v5 = (__int16)sub_4F5A80(dword_79131C);
      sub_47EC90(v7);
    }
    dword_791300 = 7;
  }
  return v5;
}


//======================================================================
// sub_477840
// entry 00477840  size 191  status ok
//======================================================================

unsigned int sub_477840()
{
  int v0; // eax
  int v1; // esi
  signed int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  if ( byte_7912E9 )
    v4 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
  else
    v4 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  v0 = sub_47E3B0(dword_791364);
  v1 = sub_4C6A70(v0);
  dword_79131C = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  dword_79131C -= sub_4F67D0(dword_791364 + 56);
  if ( dword_79131C > v4 )
    return v4 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  v3 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( v3 < 0 )
    return 0;
  return v3;
}


//======================================================================
// sub_477900
// entry 00477900  size 714  status ok
//======================================================================

int __cdecl sub_477900(char a1, int a2)
{
  char *v2; // eax
  int v3; // esi
  int v5; // esi
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // [esp+Ch] [ebp-10h]
  int v10; // [esp+10h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v11; // [esp+14h] [ebp-8h]
  unsigned int v12; // [esp+18h] [ebp-4h]
  unsigned int v13; // [esp+18h] [ebp-4h]

  v10 = -99;
  v11 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  if ( *(_BYTE *)(dword_7947E0 + 20276) && v11 == (Concurrency::details::SchedulerProxy *)sub_4798C0(dword_791364) )
  {
    v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
    v9 = sub_64CAB0(v2);
  }
  else if ( a2 <= 0 )
  {
    if ( byte_7912E9 )
      v9 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    else
      v9 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  }
  else
  {
    v9 = a2;
  }
  if ( v9 >= *(_DWORD *)(dword_791364 + 1040) )
  {
    if ( v9 > *(_DWORD *)(dword_791364 + 1040) )
      *(_DWORD *)(dword_791364 + 1040) = v9;
  }
  else
  {
    v9 = *(_DWORD *)(dword_791364 + 1040);
  }
  v3 = sub_4C6A70(v11);
  dword_79131C = v3 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_79131C <= sub_4F67D0(dword_791364 + 56) )
    return sub_477450(a1);
  if ( dword_79131C > v9 + sub_4F67D0(dword_791364 + 56) )
  {
    if ( !a1 )
    {
      v7 = v9 + sub_4F67D0(dword_791364 + 56);
      v13 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v7;
      sub_4C6C10(v13);
      ATL::CComCriticalSection::~CComCriticalSection(v11);
      v8 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4DC4D0(2, v9 * v8);
      v10 = (__int16)sub_4F6020(v9);
      sub_47EC90(v13);
    }
    dword_791300 = 6;
  }
  else
  {
    if ( a2 > 0 )
    {
      v5 = dword_79131C - sub_4F67D0(dword_791364 + 56);
      if ( v5 < (int)CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364) )
        return sub_477450(a1);
    }
    if ( !a1 )
    {
      v12 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v12);
      ATL::CComCriticalSection::~CComCriticalSection(v11);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v11, 2u);
      v6 = sub_4F67D0(dword_791364 + 56);
      v10 = (__int16)sub_4F6210(dword_79131C - v6);
      sub_47EC90(v12);
    }
    dword_791300 = 7;
  }
  return v10;
}


//======================================================================
// sub_477BD0
// entry 00477bd0  size 300  status ok
//======================================================================

int __cdecl sub_477BD0(int a1)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v4; // [esp+8h] [ebp-8h]
  unsigned int v5; // [esp+Ch] [ebp-4h]
  unsigned int v6; // [esp+Ch] [ebp-4h]

  v4 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  v1 = sub_4C6A70(v4);
  dword_79131C = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_79131C > a1 )
  {
    v6 = a1 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v6);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0(6, v6);
    v3 = (__int16)sub_4F5C40(a1, 1);
    sub_47EC90(v6);
    dword_791300 = 0;
  }
  else
  {
    v5 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0(9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v4, 2u);
    v3 = (__int16)sub_4F5A80(dword_79131C);
    sub_47EC90(v5);
    dword_791300 = 7;
  }
  return v3;
}


//======================================================================
// sub_477D00
// entry 00477d00  size 540  status ok
//======================================================================

int sub_477D00()
{
  int v0; // esi
  int v1; // esi
  int v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int v6; // [esp+4h] [ebp-10h]
  Concurrency::details::SchedulerProxy *v7; // [esp+8h] [ebp-Ch]
  unsigned int v8; // [esp+Ch] [ebp-8h]
  unsigned int v9; // [esp+Ch] [ebp-8h]
  unsigned int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v7 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  v0 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  v11 = v0 - sub_4F67D0(dword_791364 + 56);
  v1 = sub_4C6A70(v7);
  dword_79131C = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_79131C > sub_4F67D0(dword_791364 + 56) )
  {
    if ( dword_79131C > v11 + sub_4F67D0(dword_791364 + 56) )
    {
      v3 = v11 + sub_4F67D0(dword_791364 + 56);
      v10 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v3;
      sub_4C6C10(v10);
      ATL::CComCriticalSection::~CComCriticalSection(v7);
      v4 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4DC4D0(7, v11 * v4);
      v6 = (__int16)sub_4F6250(v11, 1);
      sub_47EC90(v10);
      dword_791300 = 0;
    }
    else
    {
      v9 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v9);
      ATL::CComCriticalSection::~CComCriticalSection(v7);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v7, 2u);
      v2 = sub_4F67D0(dword_791364 + 56);
      v6 = (__int16)sub_4F6210(dword_79131C - v2);
      sub_47EC90(v9);
      dword_791300 = 7;
    }
  }
  else
  {
    v8 = dword_79131C * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v8);
    ATL::CComCriticalSection::~CComCriticalSection(v7);
    sub_4DC4D0(9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v7, 2u);
    v6 = (__int16)sub_4F5E80(dword_79131C);
    sub_47EC90(v8);
    dword_791300 = 7;
  }
  return v6;
}


//======================================================================
// sub_477F20
// entry 00477f20  size 2237  status ok
//======================================================================

int __cdecl sub_477F20()
{
  int v0; // eax
  struct CDockablePane *TabbedPane; // eax
  int v3; // eax
  struct CDockablePane *v4; // eax
  int v5; // esi
  int v6; // [esp-4h] [ebp-98h]
  int v7; // [esp-4h] [ebp-98h]
  int v8; // [esp-4h] [ebp-98h]
  int v9; // [esp-4h] [ebp-98h]
  int v10; // [esp-4h] [ebp-98h]
  int v11; // [esp-4h] [ebp-98h]
  char v12; // [esp+18h] [ebp-7Ch] BYREF
  char v13; // [esp+19h] [ebp-7Bh] BYREF
  _BYTE v14[5]; // [esp+1Ah] [ebp-7Ah] BYREF
  char v15; // [esp+1Fh] [ebp-75h]
  char v16; // [esp+20h] [ebp-74h] BYREF
  char v17; // [esp+21h] [ebp-73h] BYREF
  _BYTE v18[5]; // [esp+22h] [ebp-72h] BYREF
  char v19; // [esp+27h] [ebp-6Dh]
  int v20; // [esp+28h] [ebp-6Ch]
  char v21; // [esp+2Fh] [ebp-65h]
  _BYTE v22[8]; // [esp+30h] [ebp-64h] BYREF
  _BYTE v23[4]; // [esp+38h] [ebp-5Ch] BYREF
  _BYTE v24[8]; // [esp+3Ch] [ebp-58h] BYREF
  _BYTE v25[7]; // [esp+44h] [ebp-50h] BYREF
  bool v26; // [esp+4Bh] [ebp-49h]
  _BYTE v27[8]; // [esp+4Ch] [ebp-48h] BYREF
  int v28; // [esp+54h] [ebp-40h]
  int v29; // [esp+58h] [ebp-3Ch]
  char v30; // [esp+5Fh] [ebp-35h]
  _BYTE v31[8]; // [esp+60h] [ebp-34h] BYREF
  _BYTE v32[4]; // [esp+68h] [ebp-2Ch] BYREF
  _BYTE v33[8]; // [esp+6Ch] [ebp-28h] BYREF
  _BYTE v34[7]; // [esp+74h] [ebp-20h] BYREF
  bool v35; // [esp+7Bh] [ebp-19h]
  _BYTE v36[8]; // [esp+7Ch] [ebp-18h] BYREF
  Concurrency::details::SchedulerProxy *v37; // [esp+84h] [ebp-10h]
  int v38; // [esp+90h] [ebp-4h]

  v37 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
  if ( sub_4C6CB0(v37) == 2 )
  {
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v37) != 1 )
      sub_5E9F20((char)"currentPokerPlayer->GetPlayerStatus() == ACTIVE", "..\\Casino\\PokerDrawScript.cpp", 514);
    if ( sub_47E190(dword_791364) )
      sub_5E9F20((char)"pokerGame->GetGameNumber() == DRAW_5_CARD", "..\\Casino\\PokerDrawScript.cpp", 516);
    if ( sub_47E280(dword_791364) )
    {
      dword_791318 = sub_46EF30(byte_7912E9 == 0, (int)dword_791308, dword_7912F4);
      if ( !byte_7912E9 && !dword_791318 )
      {
        v30 = 0;
        sub_4C7C40(v31);
        v38 = 4;
        sub_485940(v32, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v38) = 5;
        v6 = dword_791390;
        sub_4A2160(&v17);
        if ( (unsigned __int8)sub_4A1E10(v6) && (unsigned __int8)sub_485320(9, 1) )
          v30 = 1;
        v7 = dword_7913B0;
        sub_4A2160(&v16);
        if ( (unsigned __int8)sub_4A1E10(v7) && (unsigned __int8)sub_485320(9, 0) )
          v30 = 1;
        if ( v30 )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            dword_791318 = 1;
          else
            dword_791318 = 3;
        }
        LOBYTE(v38) = 4;
        ATL::CComCriticalSection::~CComCriticalSection(v32);
        v38 = -1;
        sub_484470(v31);
      }
    }
    else
    {
      dword_791318 = sub_46CD10(byte_7912E9 == 0, (int)dword_791308, dword_7912F4, dword_7912F0);
      if ( !byte_7912E9 && !dword_791318 )
      {
        sub_4C7C40(v36);
        v38 = 0;
        v35 = (__int16)sub_484BF0(v36) >= 4;
        if ( (__int16)sub_485000(v36) >= 4 )
          v35 = 1;
        if ( v35 )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            dword_791318 = 1;
          else
            dword_791318 = 3;
        }
        v38 = -1;
        sub_484470(v36);
      }
      if ( !byte_7912E9 && sub_47D7B0(dword_791364) == 1 && dword_791318 == 2 )
      {
        sub_4C7C40(v33);
        v38 = 1;
        sub_485940(v34, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v38) = 2;
        sub_4A20D0(v18);
        LOBYTE(v38) = 3;
        v0 = sub_4A2100(dword_7913B0, dword_791400, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        v19 = sub_4A2550(v0);
        LOBYTE(v38) = 2;
        ATL::CComCriticalSection::~CComCriticalSection(v18);
        if ( v19 )
          dword_791318 = 1;
        LOBYTE(v38) = 1;
        ATL::CComCriticalSection::~CComCriticalSection(v34);
        v38 = -1;
        sub_484470(v33);
      }
    }
    if ( sub_47D6B0(dword_791364) == 1 && (dword_791318 == 2 || dword_791318 == 4) )
    {
      if ( byte_7912E9 )
        v8 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
      else
        v8 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
      TabbedPane = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
      v29 = sub_4C79F0(TabbedPane, v8);
      unknown_libname_516(v29);
    }
    return 5;
  }
  else if ( sub_4C6CB0(v37) == 1 )
  {
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v37) != 1 )
      sub_5E9F20((char)"currentPokerPlayer->GetPlayerStatus() == ACTIVE", "..\\Casino\\PokerDrawScript.cpp", 601);
    if ( sub_47E190(dword_791364) )
      sub_5E9F20((char)"pokerGame->GetGameNumber() == DRAW_5_CARD", "..\\Casino\\PokerDrawScript.cpp", 602);
    if ( sub_47E280(dword_791364) )
    {
      v28 = sub_46EF30(byte_7912E9 == 0, (int)dword_791308, dword_7912F4);
      if ( !byte_7912E9 && !v28 )
      {
        v21 = 0;
        sub_4C7C40(v22);
        v38 = 10;
        sub_485940(v23, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v38) = 11;
        v9 = dword_791390;
        sub_4A2160(&v13);
        if ( (unsigned __int8)sub_4A1E10(v9) && (unsigned __int8)sub_485320(9, 1) )
          v21 = 1;
        v10 = dword_7913B0;
        sub_4A2160(&v12);
        if ( (unsigned __int8)sub_4A1E10(v10) && (unsigned __int8)sub_485320(9, 0) )
          v21 = 1;
        if ( v21 )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            v28 = 1;
          else
            v28 = 3;
        }
        LOBYTE(v38) = 10;
        ATL::CComCriticalSection::~CComCriticalSection(v23);
        v38 = -1;
        sub_484470(v22);
      }
    }
    else
    {
      v28 = sub_46CD10(byte_7912E9 == 0, (int)dword_791308, dword_7912F4, dword_7912F0);
      if ( !byte_7912E9 && !v28 )
      {
        sub_4C7C40(v27);
        v38 = 6;
        v26 = (__int16)sub_484BF0(v27) >= 4;
        if ( (__int16)sub_485000(v27) >= 4 )
          v26 = 1;
        if ( v26 )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            v28 = 1;
          else
            v28 = 3;
        }
        v38 = -1;
        sub_484470(v27);
      }
      if ( !byte_7912E9 && sub_47D7B0(dword_791364) == 1 && v28 == 2 )
      {
        sub_4C7C40(v24);
        v38 = 7;
        sub_485940(v25, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v38) = 8;
        sub_4A20D0(v14);
        LOBYTE(v38) = 9;
        v3 = sub_4A2100(dword_7913B0, dword_791400, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        v15 = sub_4A2550(v3);
        LOBYTE(v38) = 8;
        ATL::CComCriticalSection::~CComCriticalSection(v14);
        if ( v15 )
          v28 = 1;
        LOBYTE(v38) = 7;
        ATL::CComCriticalSection::~CComCriticalSection(v25);
        v38 = -1;
        sub_484470(v24);
      }
    }
    if ( sub_47D6B0(dword_791364) == 1 && (v28 == 2 || v28 == 4) )
    {
      if ( byte_7912E9 )
        v11 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
      else
        v11 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
      v4 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
      v20 = sub_4C79F0(v4, v11);
      unknown_libname_516(v20);
    }
    if ( !v28 && (unsigned __int8)sub_4C6EB0(v37) )
    {
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
        v28 = 1;
      else
        v28 = 3;
    }
    if ( !v28 )
    {
      v5 = sub_4C6E30(v37);
      if ( v5 > sub_62FBF0(100) )
      {
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 1;
        else
          return 3;
      }
    }
    return v28;
  }
  else
  {
    if ( sub_4C6CB0(v37) == 3 )
      sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 741);
    else
      sub_5E9F20((char)"0", "..\\Casino\\PokerDrawScript.cpp", 744);
    return 0;
  }
}


//======================================================================
// sub_4787E0
// entry 004787e0  size 2364  status ok
//======================================================================

int __thiscall sub_4787E0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  signed int v5; // esi
  Concurrency::details::SchedulerProxy *v6; // eax
  Concurrency::details::ContextBase *v7; // eax
  int v8; // eax
  int v9; // eax
  Concurrency::details::SchedulerProxy *v10; // eax
  Concurrency::details::ContextBase *v11; // eax
  Concurrency::details::SchedulerProxy *v12; // eax
  Concurrency::details::SchedulerProxy *v13; // eax
  int v14; // eax
  Concurrency::details::SchedulerProxy *v15; // eax
  Concurrency::details::VirtualProcessor *v16; // eax
  int v17; // eax
  int v18; // eax
  Concurrency::details::SchedulerProxy *v19; // eax
  int v20; // eax
  Concurrency::details::SchedulerProxy *v21; // eax
  int v22; // esi
  __int16 v23; // ax
  __int16 v24; // ax
  ATL::CComCriticalSection *v25; // eax
  __int16 v26; // ax
  int v27; // esi
  unsigned int v28; // eax
  int v29; // eax
  Concurrency::details::SchedulerProxy *v30; // eax
  Concurrency::details::VirtualProcessor *v31; // eax
  Concurrency::details::SchedulerProxy *v32; // eax
  Concurrency::details::SchedulerProxy *v33; // eax
  struct Concurrency::details::_TaskCollection *v34; // [esp-4h] [ebp-2Ch]
  __int16 ExecutingContext; // [esp-4h] [ebp-2Ch]
  unsigned int v36; // [esp-4h] [ebp-2Ch]
  int v38; // [esp+1Ch] [ebp-Ch]
  __int64 v39; // [esp+20h] [ebp-8h]

  sub_64C8A0(0, 0);
  sub_5FC3A0(a2);
  result = (int)this;
  switch ( *(this + 5) )
  {
    case 0:
      sub_47E540(1);
      byte_7912E8 = 0;
      dword_791308 = 0;
      dword_7912F4 = 0;
      for ( dword_79135C = 0; dword_79135C < sub_47F950(dword_791364); ++dword_79135C )
      {
        *(_BYTE *)(sub_47E390(dword_79135C) + 29) = 0;
        v3 = sub_47E390(dword_79135C);
        if ( sub_4C6CB0(v3)
          && (v4 = sub_47E390(dword_79135C),
              v5 = sub_4C6A70(v4),
              v5 >= (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364)) )
        {
          word_790FB8[dword_79135C] = 0;
          v6 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_79135C);
          Concurrency::details::SchedulerProxy::SetQueueLength(v6, 1u);
          v34 = dword_791308;
          v7 = (Concurrency::details::ContextBase *)sub_47E390(dword_79135C);
          Concurrency::details::ContextBase::SetIndirectAlias(v7, v34);
          v8 = sub_47E390(dword_79135C);
          sub_4C9160(v8);
          v9 = sub_47E390(dword_79135C);
          sub_4DD760(v9);
          dword_791308 = (struct Concurrency::details::_TaskCollection *)((char *)dword_791308 + 1);
          ++dword_7912F4;
        }
        else
        {
          v10 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_79135C);
          Concurrency::details::SchedulerProxy::SetQueueLength(v10, 0);
          v11 = (Concurrency::details::ContextBase *)sub_47E390(dword_79135C);
          Concurrency::details::ContextBase::SetIndirectAlias(
            v11,
            (struct Concurrency::details::_TaskCollection *)0xFFFFFFFF);
        }
      }
      if ( (int)dword_791308 < 2 )
        goto LABEL_10;
      sub_47E860(dword_791364);
      if ( sub_47E170(dword_791364) != 23 )
      {
        if ( sub_47D6B0(dword_791364) == 1 )
        {
          if ( *(_DWORD *)(dword_791364 + 208) == -1 )
          {
            if ( *(_DWORD *)(dword_791364 + 212) == -1 )
              *(_DWORD *)(dword_791364 + 208) = *(_DWORD *)(dword_791364 + 216);
            else
              *(_DWORD *)(dword_791364 + 208) = sub_47BBC0(dword_791364);
          }
          do
          {
            ++*(_DWORD *)(dword_791364 + 208);
            if ( *(_DWORD *)(dword_791364 + 208) > sub_47F950(dword_791364) - 1 )
              *(_DWORD *)(dword_791364 + 208) = 0;
            v12 = (Concurrency::details::SchedulerProxy *)sub_47E390(*(_DWORD *)(dword_791364 + 208));
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v12) );
          while ( sub_47BBC0(dword_791364) != *(_DWORD *)(dword_791364 + 208) )
            sub_47BAC0(dword_791364);
        }
        else
        {
          if ( *(_DWORD *)(dword_791364 + 212) == -1 )
          {
            if ( *(_DWORD *)(dword_791364 + 208) == -1 )
              *(_DWORD *)(dword_791364 + 212) = *(_DWORD *)(dword_791364 + 216);
            else
              *(_DWORD *)(dword_791364 + 212) = sub_47BBC0(dword_791364);
          }
          do
          {
            ++*(_DWORD *)(dword_791364 + 212);
            if ( *(_DWORD *)(dword_791364 + 212) > sub_47F950(dword_791364) - 1 )
              *(_DWORD *)(dword_791364 + 212) = 0;
            v13 = (Concurrency::details::SchedulerProxy *)sub_47E390(*(_DWORD *)(dword_791364 + 212));
          }
          while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v13) );
          while ( sub_47BBC0(dword_791364) != *(_DWORD *)(dword_791364 + 212) )
            sub_47BAC0(dword_791364);
        }
      }
      dword_791358 = 0;
      v14 = sub_47BBC0(dword_791364);
      sub_47E400(v14);
      do
      {
        sub_47E440(dword_791364);
        v15 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      }
      while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v15) );
      *(this + 8) = 0;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 1:
      sub_47ECF0(dword_791364);
      sub_4654D0(*(CRecentFileList **)(dword_791364 + 48));
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 2:
      sub_4F4320((__int16)dword_791308);
      sub_47EC90(0);
      if ( !sub_47D6B0(dword_791364) )
        goto LABEL_37;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 3);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 3:
      dword_7912F0 = 1;
      v16 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v16);
      v17 = sub_47BC60(dword_791364);
      sub_4F5110(dword_7912F0 * v17, ExecutingContext);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 4:
      dword_7912EC = sub_477320();
      sub_47E500(dword_791364);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 5);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 15);
    case 5:
      if ( dword_7912EC == -1 )
      {
        v18 = sub_47BBC0(dword_791364);
        sub_47E400(v18);
        do
        {
          sub_47E440(dword_791364);
          v19 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v19) );
LABEL_37:
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else if ( dword_7912EC == -3 )
      {
        v20 = sub_47BBC0(dword_791364);
        sub_47E400(v20);
        do
        {
          sub_47E440(dword_791364);
          v21 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v21) );
        if ( sub_4F6420(dword_791364 + 56) > 0 )
        {
          v22 = sub_4F6420(dword_791364 + 56);
          v36 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v22;
          v23 = sub_4F64B0(dword_791364 + 56);
          sub_47E3D0(v23);
          sub_4C6B80(v36);
          v24 = sub_4F64B0(dword_791364 + 56);
          v25 = (ATL::CComCriticalSection *)sub_47E3D0(v24);
          ATL::CComCriticalSection::~CComCriticalSection(v25);
          sub_47EC90(0);
          v26 = sub_4F64B0(dword_791364 + 56);
          v38 = *(_DWORD *)(sub_47E3D0(v26) + 4);
          v27 = sub_4F6420(dword_791364 + 56);
          v28 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v39 = sub_64C8A0(v28 * v27, 0);
          sub_5E7E40(v38, 7, v39, HIDWORD(v39));
        }
        byte_7912E8 = 1;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else
      {
        v29 = sub_47E490(dword_7912EC);
        sub_47E400(v29);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 6:
      v30 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v30) )
      {
        v31 = (Concurrency::details::VirtualProcessor *)sub_47E3B0(dword_791364);
        sub_47B010(v31, 1, 0, (int)this, 0, 0, 0);
        do
        {
          sub_47E440(dword_791364);
          v32 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v32) );
        if ( (struct Concurrency::details::_TaskCollection *)++*(this + 8) == dword_791308 )
        {
          *(this + 8) = 0;
          ++dword_791358;
        }
        if ( dword_791358 < 5 )
          return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 8);
      }
      else
      {
        do
        {
          sub_47E440(dword_791364);
          v33 = (Concurrency::details::SchedulerProxy *)sub_47E3B0(dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v33) );
        if ( (struct Concurrency::details::_TaskCollection *)++*(this + 8) == dword_791308 )
        {
          *(this + 8) = 0;
          if ( ++dword_791358 >= 5 )
          {
LABEL_10:
            (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 8);
            return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
          }
          return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
        }
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
    case 8:
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 3) + 28))(*(this + 3), 0);
      return sub_5FC420(0);
    default:
      return result;
  }
}


//======================================================================
// sub_479140
// entry 00479140  size 827  status ok
//======================================================================

int __thiscall sub_479140(int this)
{
  int v1; // eax
  int v4; // [esp+8h] [ebp-18h]
  __int16 k; // [esp+Ch] [ebp-14h]
  __int16 i; // [esp+10h] [ebp-10h]
  __int16 j; // [esp+10h] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &PokerGame::`vftable';
  sub_4F4200(this + 56);
  *(_DWORD *)(this + 1056) = 1;
  *(_BYTE *)(this + 2002) = 1;
  *(_DWORD *)(this + 1068) = 0;
  *(_DWORD *)(this + 1076) = 0;
  *(_DWORD *)(this + 1104) = 0;
  *(_DWORD *)(this + 1108) = 0;
  *(_DWORD *)(this + 1116) = 0;
  *(_DWORD *)(this + 1112) = 0;
  *(_DWORD *)(this + 1120) = 0;
  *(_DWORD *)(this + 1124) = 0;
  *(_DWORD *)(this + 1128) = 0;
  *(_DWORD *)(this + 1132) = 0;
  *(_DWORD *)(this + 1136) = 0;
  *(_DWORD *)(this + 1140) = 0;
  *(_DWORD *)(this + 1144) = 0;
  *(_DWORD *)(this + 1148) = 0;
  *(_DWORD *)(this + 1152) = 0;
  *(_DWORD *)(this + 1064) = 0;
  *(_DWORD *)(this + 44) = 0;
  for ( i = 0; i < 8; ++i )
    *(_DWORD *)(this + 4 * i + 4) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_BYTE *)(this + 1172) = 1;
  byte_791360 = 0;
  sub_47B9A0(0);
  *(_DWORD *)(this + 1072) = 1;
  *(_BYTE *)(this + 992) = sub_5DA7B0(dword_791EB8);
  *(_BYTE *)(this + 2003) = sub_5DA830(dword_791EB8);
  *(_BYTE *)(this + 1032) = 0;
  *(_WORD *)(this + 2000) = 0;
  for ( j = 0; j < 200; ++j )
    *(_DWORD *)(this + 4 * j + 1200) = 0;
  *(_DWORD *)(this + 988) = 0;
  *(_DWORD *)(this + 1188) = 0;
  v4 = sub_6375D0(11);
  *(_DWORD *)(this + 1044) = 0;
  *(_DWORD *)(this + 1156) = 0;
  *(_DWORD *)(this + 208) = -1;
  *(_DWORD *)(this + 212) = -1;
  v1 = sub_47F950(this);
  *(_DWORD *)(this + 216) = sub_62FBF0(v1);
  *(_DWORD *)(this + 1052) = 0;
  *(_DWORD *)(this + 1060) = 1;
  *(_BYTE *)(this + 232) = 0;
  for ( k = 0; k < 200; ++k )
    *(_DWORD *)(this + 4 * k + 1200) = 0;
  *(_DWORD *)(this + 204) = *(_DWORD *)(v4 + 4);
  *(_BYTE *)(this + 200) = 0;
  sub_57AE30(dword_793578);
  return this;
}


//======================================================================
// sub_479480
// entry 00479480  size 895  status ok
//======================================================================

void __thiscall sub_479480(int this)
{
  __int64 v1; // [esp-8h] [ebp-BCh]
  void (__thiscall ***v3)(_DWORD, int); // [esp+4Ch] [ebp-68h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+54h] [ebp-60h]
  void (__thiscall ***v5)(_DWORD, int); // [esp+5Ch] [ebp-58h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+64h] [ebp-50h]
  void (__thiscall ***v7)(_DWORD, int); // [esp+6Ch] [ebp-48h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+74h] [ebp-40h]
  void (__thiscall ***v9)(_DWORD, int); // [esp+7Ch] [ebp-38h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+84h] [ebp-30h]
  void (__thiscall ***v11)(_DWORD, int); // [esp+8Ch] [ebp-28h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+94h] [ebp-20h]
  int j; // [esp+A0h] [ebp-14h]
  __int16 i; // [esp+A4h] [ebp-10h]

  *(_DWORD *)this = &PokerGame::`vftable';
  if ( *(_BYTE *)(this + 2003) )
  {
    v1 = sub_64C8A0(0, 0);
    sub_5DCB00(0);
    sub_5D5AF0(v1, HIDWORD(v1));
  }
  sub_47FAB0(this);
  v12 = *(void (__thiscall ****)(_DWORD, int))(this + 48);
  if ( v12 )
    (**v12)(v12, 1);
  v11 = *(void (__thiscall ****)(_DWORD, int))(this + 52);
  if ( v11 )
    (**v11)(v11, 1);
  v10 = *(void (__thiscall ****)(_DWORD, int))(this + 44);
  if ( v10 )
    (**v10)(v10, 1);
  for ( i = 0; i < 8; ++i )
  {
    v9 = *(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 4);
    if ( v9 )
      (**v9)(v9, 1);
  }
  v8 = *(void (__thiscall ****)(_DWORD, int))(this + 36);
  if ( v8 )
    (**v8)(v8, 1);
  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 1176);
  if ( v7 )
    (**v7)(v7, 1);
  v6 = *(void (__thiscall ****)(_DWORD, int))(this + 1180);
  if ( v6 )
    (**v6)(v6, 1);
  v5 = *(void (__thiscall ****)(_DWORD, int))(this + 1184);
  if ( v5 )
    (**v5)(v5, 1);
  v4 = *(void (__thiscall ****)(_DWORD, int))(this + 220);
  if ( v4 )
    (**v4)(v4, 1);
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 224);
  if ( v3 )
    (**v3)(v3, 1);
  if ( *(_DWORD *)(this + 228) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 228))(*(_DWORD *)(this + 228), 1);
  for ( j = 0; j < 200; ++j )
  {
    if ( *(_DWORD *)(this + 4 * j + 1200) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * j + 1200))(*(_DWORD *)(this + 4 * j + 1200), 1);
  }
  sub_4F4300(this + 56);
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_479800
// entry 00479800  size 90  status ok
//======================================================================

int __thiscall sub_479800(void *this, int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( result = sub_47F950(this); v4 < result; result = sub_47F950(this) )
  {
    v5 = sub_47E390(v4);
    if ( (unsigned __int8)sub_4C61B0(v5) )
      *(_DWORD *)(v5 + 128) = a2;
    ++v4;
  }
  return result;
}


//======================================================================
// sub_479860
// entry 00479860  size 83  status ok
//======================================================================

int __thiscall sub_479860(void *this)
{
  int i; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = sub_47F950(this); v4 < i; i = sub_47F950(this) )
  {
    v5 = sub_47E390(v4);
    if ( (unsigned __int8)sub_4C61B0(v5) )
      return v4;
    ++v4;
  }
  return 0;
}


//======================================================================
// sub_4798C0
// entry 004798c0  size 110  status ok
//======================================================================

int __thiscall sub_4798C0(void *this)
{
  int i; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = sub_47F950(this); v4 < i; i = sub_47F950(this) )
  {
    v5 = sub_47E390(v4);
    if ( (unsigned __int8)sub_4C61B0(v5) )
      return v5;
    ++v4;
  }
  sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 163);
  return 0;
}


//======================================================================
// sub_479930
// entry 00479930  size 42  status ok
//======================================================================

bool __thiscall sub_479930(void *this)
{
  Concurrency::details::SchedulerProxy *v2; // [esp+4h] [ebp-4h]

  v2 = (Concurrency::details::SchedulerProxy *)sub_4798C0(this);
  return Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 3;
}


//======================================================================
// sub_479960
// entry 00479960  size 128  status ok
//======================================================================

char __thiscall sub_479960(void *this)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-4h]

  if ( *(_BYTE *)(dword_791364 + 57) && sub_4F6840(dword_791364 + 56) )
    return 1;
  for ( i = 0; ; ++i )
  {
    v2 = sub_47F950(this);
    if ( i >= v2 )
      break;
    (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)dword_791EB8 + 636))(dword_791EB8, i, &v4);
    if ( v4 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_4799E0
// entry 004799e0  size 2373  status ok
//======================================================================

int __thiscall sub_4799E0(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int IsFixedSize; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+4h] [ebp-8Ch]
  int v16; // [esp+8h] [ebp-88h]
  int v17; // [esp+Ch] [ebp-84h]
  int v18; // [esp+10h] [ebp-80h]
  int v19; // [esp+14h] [ebp-7Ch]
  int v20; // [esp+18h] [ebp-78h]
  int v21; // [esp+1Ch] [ebp-74h]
  _DWORD *v22; // [esp+20h] [ebp-70h]
  _DWORD *v23; // [esp+2Ch] [ebp-64h]
  void *v25; // [esp+34h] [ebp-5Ch]
  void *v26; // [esp+3Ch] [ebp-54h]
  void *v27; // [esp+44h] [ebp-4Ch]
  void *v28; // [esp+4Ch] [ebp-44h]
  void *v29; // [esp+54h] [ebp-3Ch]
  void *v30; // [esp+5Ch] [ebp-34h]
  _DWORD *v31; // [esp+6Ch] [ebp-24h]
  _DWORD *v32; // [esp+74h] [ebp-1Ch]

  sub_6375D0(11);
  sub_47AAB0(0, 0);
  v32 = operator new(0x204u);
  if ( v32 )
    v23 = sub_465760(v32);
  else
    v23 = 0;
  *(_DWORD *)(this + 40) = v23;
  sub_5F87D0(*(_DWORD *)(this + 40));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 60))(*(_DWORD *)(this + 40));
  sub_47CB10(1);
  sub_47BE00(1);
  dword_791364 = this;
  *(_DWORD *)(this + 1068) = sub_47F950(this);
  sub_47D810(*(_DWORD *)(dword_7947E0 + 20248));
  *(_DWORD *)(this + 1108) = 1;
  v31 = operator new(0x24u);
  if ( v31 )
    v22 = sub_465190(v31);
  else
    v22 = 0;
  *(_DWORD *)(this + 48) = v22;
  if ( operator new(0x10u) )
    v21 = sub_60C5F0();
  else
    v21 = 0;
  *(_DWORD *)(this + 52) = v21;
  v30 = operator new(0x1D0u);
  if ( v30 )
  {
    sub_5EC5A0(v30);
    v20 = v1;
  }
  else
  {
    v20 = 0;
  }
  *(_DWORD *)(this + 228) = v20;
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 228) + 68))(*(_DWORD *)(this + 228), 0, 180);
  sub_5ECD00(56, -1, word_75EE1C);
  sub_5ECCB0(20);
  sub_5ECC60(640);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 228) + 108))(*(_DWORD *)(this + 228), 1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 112))(*(_DWORD *)(this + 228));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 64))(*(_DWORD *)(this + 228));
  (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(this + 228) + 180))(*(_DWORD *)(this + 228), &unk_6BB048);
  v29 = operator new(0x1D0u);
  if ( v29 )
  {
    sub_5EC5A0(v29);
    v19 = v2;
  }
  else
  {
    v19 = 0;
  }
  *(_DWORD *)(this + 1176) = v19;
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 84))(*(_DWORD *)(this + 228));
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 1176) + 68))(*(_DWORD *)(this + 1176), 0, v3 + 20);
  sub_5ECD00(56, -1, word_75EE1C);
  sub_5ECCB0(20);
  sub_5ECC60(640);
  sub_5EF310(48);
  IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 228));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 108))(*(_DWORD *)(this + 1176), IsFixedSize);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1176) + 112))(*(_DWORD *)(this + 1176));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1176) + 64))(*(_DWORD *)(this + 1176));
  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), &Source);
  v28 = operator new(0x1D0u);
  if ( v28 )
  {
    sub_5EC5A0(v28);
    v18 = v5;
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(this + 220) = v18;
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 220) + 68))(*(_DWORD *)(this + 220), 0, 284);
  sub_5ECD00(5, -1, word_75EE1C);
  sub_5ECCB0(20);
  sub_5ECC60(640);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 220) + 108))(*(_DWORD *)(this + 220), 5000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 220) + 112))(*(_DWORD *)(this + 220));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 220) + 64))(*(_DWORD *)(this + 220));
  v6 = sub_630F40("SID_POKER_HOLDEM_HINT");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 220) + 180))(*(_DWORD *)(this + 220), v6);
  v27 = operator new(0x1D0u);
  if ( v27 )
  {
    sub_5EC5A0(v27);
    v17 = v7;
  }
  else
  {
    v17 = 0;
  }
  *(_DWORD *)(this + 224) = v17;
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 224) + 68))(*(_DWORD *)(this + 224), 0, 296);
  sub_5ECD00(5, -1, word_75EE1C);
  sub_5ECCB0(20);
  sub_5ECC60(640);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 224) + 108))(*(_DWORD *)(this + 224), 5000);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 224) + 112))(*(_DWORD *)(this + 224));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 224) + 64))(*(_DWORD *)(this + 224));
  v8 = sub_630F40("SID_POKER_HOLDEM_HINT");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 224) + 180))(*(_DWORD *)(this + 224), v8);
  v26 = operator new(0x178u);
  if ( v26 )
  {
    sub_5EAAF0(v26);
    v16 = v9;
  }
  else
  {
    v16 = 0;
  }
  *(_DWORD *)(this + 1180) = v16;
  sub_5EAF00(100007);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1180) + 108))(*(_DWORD *)(this + 1180), 490);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1180) + 112))(*(_DWORD *)(this + 1180));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1180) + 64))(*(_DWORD *)(this + 1180));
  v25 = operator new(0x178u);
  if ( v25 )
  {
    sub_5EAAF0(v25);
    v15 = v10;
  }
  else
  {
    v15 = 0;
  }
  *(_DWORD *)(this + 1184) = v15;
  sub_5EAF00(101001);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1184) + 112))(*(_DWORD *)(this + 1184));
  v11 = CMediaType::IsFixedSize(*(CMediaType **)(this + 228));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1184) + 108))(*(_DWORD *)(this + 1184), v11);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1184) + 64))(*(_DWORD *)(this + 1184));
  v12 = sub_4FB770(dword_791EB8);
  sub_5F2CB0(v12);
  *(_BYTE *)(this + 1033) = 0;
  *(_BYTE *)(this + 1034) = 0;
  *(_BYTE *)(this + 1035) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_BYTE *)(this + 260) = 0;
  v13 = sub_5DA7B0(dword_791EB8);
  sub_47A5C0(v13);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
  {
    if ( o_2_a_10C_s_6___3(*(_DWORD *)(dword_7947E0 + 20220)) == -1 )
      sub_480970(this);
    else
      sub_480B70(this);
  }
  else
  {
    sub_47A830(this);
  }
  sub_47A970(this);
  *(_DWORD *)(this + 1040) = 0;
  return this;
}


//======================================================================
// sub_47A340
// entry 0047a340  size 248  status ok
//======================================================================

int __thiscall sub_47A340(CAtlTraceProcess *this)
{
  int result; // eax
  int v2; // eax
  signed int v3; // esi
  bool v4; // [esp+4h] [ebp-24h]
  CImageDisplay *v6; // [esp+18h] [ebp-10h]
  int i; // [esp+24h] [ebp-4h]

  result = (unsigned __int8)sub_5DA830(dword_791EB8);
  if ( !(_BYTE)result )
  {
    for ( i = 0; ; ++i )
    {
      result = sub_47F950(this);
      if ( i >= result )
        break;
      v6 = (CImageDisplay *)sub_5DCB00(i);
      v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
      if ( v4 && *(_BYTE *)(sub_5DCB00(i) + 1185) )
      {
        v2 = sub_5DCB00(i);
        v3 = sub_5D5A50(v2);
        if ( v3 >= (int)CAtlTraceProcess::MaxSize(this) )
          *(_BYTE *)(sub_5DCB00(i) + 1185) = 0;
      }
    }
  }
  return result;
}


//======================================================================
// sub_47A440
// entry 0047a440  size 201  status ok
//======================================================================

int __thiscall sub_47A440(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  CImageDisplay *v8; // [esp+8h] [ebp-10h]
  int v9; // [esp+14h] [ebp-4h]

  v9 = 0;
  for ( result = sub_47F950(this); v9 < result; result = sub_47F950(this) )
  {
    v8 = (CImageDisplay *)sub_5DCB00(v9);
    if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
    {
      v3 = sub_5DCB00(v9);
      *(_DWORD *)sub_5D52E0(v3) = a2;
      v4 = sub_5DCB00(v9);
      *(_DWORD *)(sub_5D52E0(v4) + 4) = 0;
      v5 = sub_5DCB00(v9);
      sub_63B0A0(v5);
    }
    ++v9;
  }
  return result;
}


//======================================================================
// sub_47A510
// entry 0047a510  size 168  status ok
//======================================================================

int __thiscall sub_47A510(void *this)
{
  int i; // eax
  int v5; // [esp+10h] [ebp-8h]
  CImageDisplay *v6; // [esp+14h] [ebp-4h]

  v5 = 0;
  for ( i = sub_47F950(this); v5 < i; i = sub_47F950(this) )
  {
    v6 = (CImageDisplay *)sub_5DCB00(v5);
    if ( v6 )
    {
      if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
      {
        return sub_5D5A50(v6);
      }
    }
    ++v5;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 382);
  return 0;
}


//======================================================================
// sub_47A5C0
// entry 0047a5c0  size 620  status ok
//======================================================================

int __thiscall sub_47A5C0(_DWORD *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-64h]
  int v5; // [esp+8h] [ebp-60h]
  int v6; // [esp+Ch] [ebp-5Ch]
  int v7; // [esp+10h] [ebp-58h]
  void *v9; // [esp+18h] [ebp-50h]
  void *v10; // [esp+20h] [ebp-48h]
  _DWORD v11[8]; // [esp+38h] [ebp-30h]
  int i; // [esp+58h] [ebp-10h]
  int v13; // [esp+64h] [ebp-4h]

  v11[0] = 1;
  v11[1] = 2;
  v11[2] = 3;
  v11[3] = 4;
  v11[4] = 5;
  v11[5] = -1;
  v11[6] = 6;
  v11[7] = 7;
  v13 = 0;
  if ( operator new(0x42Cu) )
    v7 = sub_4C5750(-1);
  else
    v7 = 0;
  *(this + 9) = v7;
  sub_4C70F0(-1);
  sub_4C6D90(1);
  sub_4C62D0(1);
  v13 = 1;
  if ( operator new(0x42Cu) )
    v6 = sub_4C5750(0);
  else
    v6 = 0;
  v13 = -1;
  *(this + 6) = v6;
  sub_4C70F0(5);
  sub_4C62D0(0);
  for ( i = 0; ; ++i )
  {
    v2 = sub_47F950(dword_791364);
    if ( i >= v2 )
      break;
    if ( i != 5 )
    {
      v10 = operator new(0x42Cu);
      v13 = 2;
      if ( v10 )
        v5 = sub_4C5750(v11[i]);
      else
        v5 = 0;
      v13 = -1;
      *(this + i + 1) = v5;
      sub_4C70F0(i);
      sub_4C62D0(0);
    }
  }
  v9 = operator new(0x10u);
  v13 = 3;
  if ( v9 )
    v4 = sub_60C5F0();
  else
    v4 = 0;
  v13 = -1;
  *(this + 11) = v4;
  result = sub_47F950(dword_791364) - 1;
  for ( i = result; i >= 0; --i )
    result = sub_60C7D0(*(this + i + 1));
  return result;
}


//======================================================================
// sub_47A830
// entry 0047a830  size 307  status ok
//======================================================================

int sub_47A830()
{
  int result; // eax
  int v1; // eax
  int j; // [esp+4h] [ebp-24h]
  int k; // [esp+4h] [ebp-24h]
  _BYTE v4[8]; // [esp+Ch] [ebp-1Ch]
  int v5; // [esp+18h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  v6 = 0;
  for ( i = 0; i < 8; ++i )
    v4[i] = 0;
  for ( i = 0; ; ++i )
  {
    result = sub_47F950(dword_791364);
    if ( i >= result )
      break;
    if ( i != 5 )
    {
      v8 = 0;
      for ( j = 0; j < 8; ++j )
      {
        if ( !v4[j] )
          ++v8;
      }
      v5 = sub_62FBF0(v8);
      v8 = 0;
      for ( k = 0; k < 8; ++k )
      {
        if ( !v4[k] )
        {
          if ( v5 == v8 )
          {
            v1 = sub_481870(k);
            sub_4C67D0(v1);
            v4[k] = 1;
            break;
          }
          ++v8;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_47A970
// entry 0047a970  size 73  status ok
//======================================================================

int sub_47A970()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = sub_47F950(dword_791364);
    if ( i >= result )
      break;
    sub_5DCB00(i);
    sub_6464D0(0, 0);
  }
  return result;
}


//======================================================================
// sub_47AA30
// entry 0047aa30  size 102  status ok
//======================================================================

int __thiscall sub_47AA30(_BYTE *this)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-8h]
  int v3; // [esp+Ch] [ebp-4h]

  *(this + 2002) = 1;
  for ( i = 0; ; ++i )
  {
    result = sub_47F950(dword_791364);
    if ( i >= result )
      break;
    v3 = sub_47E390(i);
    if ( sub_4C6CB0(v3) )
      sub_4C6B30(v3);
  }
  return result;
}


//======================================================================
// sub_47AAB0
// entry 0047aab0  size 389  status ok
//======================================================================

int __stdcall sub_47AAB0(char a1, char a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-14h]
  int v6; // [esp+4h] [ebp-10h]
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]

  if ( a1 )
  {
    sub_5F2B20(3205022, 1);
    if ( a2 )
      v8 = sub_630F40("SID_POKER_CHECK");
    else
      v8 = sub_630F40("SID_POKER_CALL");
    v7 = sub_5F2A60(3205022, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 224))(v7, v8);
    sub_5F2B20(3205023, 1);
    sub_5F2B20(3205024, 1);
    result = sub_5DA7B0(dword_791EB8);
    if ( (_BYTE)result )
      return sub_5F2B20(3205027, 1);
  }
  else
  {
    sub_5F2BA0(3205022);
    v6 = sub_5F2A60(3205022, 0);
    v3 = sub_630F40("SID_POKER_CHECKORCALL");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 224))(v6, v3);
    sub_5F2BA0(3205023);
    v5 = sub_5F2A60(3205023, 0);
    v4 = sub_630F40("SID_POKER_OPENORRAISE");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 224))(v5, v4);
    sub_5F2BA0(3205024);
    result = sub_5DA7B0(dword_791EB8);
    if ( (_BYTE)result )
      return sub_5F2BA0(3205027);
  }
  return result;
}


//======================================================================
// sub_47AC50
// entry 0047ac50  size 527  status ok
//======================================================================

char __thiscall sub_47AC50(CAtlTraceProcess *this)
{
  int v1; // eax
  signed int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  char v7; // [esp+4h] [ebp-44h]
  CImageDisplay *v9; // [esp+1Ch] [ebp-2Ch]
  CImageDisplay *v10; // [esp+2Ch] [ebp-1Ch]
  int j; // [esp+38h] [ebp-10h]
  int v12; // [esp+3Ch] [ebp-Ch]
  int v13; // [esp+40h] [ebp-8h]
  int i; // [esp+44h] [ebp-4h]

  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    sub_5E9F20((char)"!roomPoker->InATournament()", "..\\Casino\\PokerGame.cpp", 556);
  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    v10 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left )
    {
      v1 = sub_5DCB00(i);
      v2 = sub_5D5A50(v1);
      if ( v2 < (int)CAtlTraceProcess::MaxSize(this) )
      {
        if ( *((_BYTE *)dword_162EE84 + 37)
          || ((v9 = (CImageDisplay *)sub_5DCB00(i), CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2)
           || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3
            ? (v7 = 1)
            : (v7 = 0),
              !v7) )
        {
          v13 = sub_5D9570(i);
          v4 = sub_5DCB00(i);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_791EB8 + 612))(dword_791EB8, v4);
          for ( j = 0; j < sub_47F950(this); ++j )
          {
            v12 = sub_47E390(j);
            if ( *(_DWORD *)(sub_5DCB00(*(_DWORD *)(v12 + 4)) + 8) == v13 )
            {
              sub_4C6550(v12);
              break;
            }
          }
        }
        else
        {
          v3 = sub_5DCB00(i);
          sub_5DBB70(v3);
        }
      }
    }
  }
  LOBYTE(v5) = *((_BYTE *)dword_162EE84 + 37);
  if ( (_BYTE)v5 )
  {
    v5 = sub_4798C0(this);
    if ( v5 )
    {
      v5 = sub_5DCB00(*(_DWORD *)(v5 + 4));
      *(_BYTE *)(v5 + 1185) = 1;
    }
  }
  return v5;
}


