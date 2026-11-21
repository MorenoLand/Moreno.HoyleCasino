//======================================================================
// sub_419530
// entry 00419530  size 220  status ok
//======================================================================

int __thiscall sub_419530(_WORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-10h]
  int v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int j; // [esp+Ch] [ebp-4h]

  v6 = 0;
  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v4 = 0;
      else
        v4 = *((char *)this + 280 * a2 + 281);
      a3 = v4;
    }
  }
  if ( a2 == 4 )
  {
    for ( i = 0; i < 15; ++i )
    {
      if ( sub_4193D0(this, 4, 0, i) )
        ++v6;
    }
  }
  else
  {
    for ( j = 0; j < 22; ++j )
    {
      if ( sub_4193D0(this, a2, a3, j) )
        ++v6;
    }
  }
  return v6;
}


//======================================================================
// sub_419610
// entry 00419610  size 95  status ok
//======================================================================

int __thiscall sub_419610(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  if ( a2 == 4 )
    return sub_419530(this, 4, 0);
  for ( i = 0; i < 4; ++i )
    v4 += sub_419530(this, a2, i);
  return v4;
}


//======================================================================
// sub_419670
// entry 00419670  size 265  status ok
//======================================================================

int __thiscall sub_419670(int this, int a2, __int16 a3, int a4)
{
  int result; // eax
  int v5; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  if ( a4 == -1 )
  {
    if ( a2 == -1 )
    {
      a4 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v5 = 0;
      else
        v5 = *(char *)(this + 280 * a2 + 281);
      a4 = v5;
    }
  }
  if ( a2 == 4 )
  {
    for ( i = 0; i < 15 && sub_4193D0((_WORD *)this, 4, 0, i); ++i )
      ;
    sub_419370((_WORD *)this, 4, 0, i, a3);
  }
  else
  {
    for ( j = 0; j < 22 && sub_4193D0((_WORD *)this, a2, a4, j); ++j )
      ;
    sub_419370((_WORD *)this, a2, a4, j, a3);
  }
  result = *(_DWORD *)(this + 1224) + 1;
  *(_DWORD *)(this + 1224) = result;
  return result;
}


//======================================================================
// sub_419780
// entry 00419780  size 71  status ok
//======================================================================

int __thiscall sub_419780(_WORD *this, int a2, int a3, int a4)
{
  __int16 v4; // ax
  int v7; // [esp+8h] [ebp-4h]

  v4 = sub_4193D0(this, a2, a3, a4);
  v7 = sub_641280(v4);
  if ( v7 <= 10 )
    return v7;
  else
    return 10;
}


//======================================================================
// sub_4197D0
// entry 004197d0  size 249  status ok
//======================================================================

int __thiscall sub_4197D0(_WORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-18h]
  int v6; // [esp+8h] [ebp-10h]
  char v7; // [esp+Fh] [ebp-9h]
  int v8; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v4 = 0;
      else
        v4 = *((char *)this + 280 * a2 + 281);
      a3 = v4;
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = sub_419530(this, a2, a3);
  for ( i = 0; i < v8; ++i )
  {
    if ( v7 && sub_419780(this, a2, a3, i) == 1 )
    {
      ++v6;
    }
    else
    {
      v6 += sub_419780(this, a2, a3, i);
      if ( sub_419780(this, a2, a3, i) == 1 )
      {
        v6 += 10;
        v7 = 1;
      }
    }
  }
  return v6;
}


//======================================================================
// sub_4198D0
// entry 004198d0  size 163  status ok
//======================================================================

int __thiscall sub_4198D0(_WORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-14h]
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v4 = 0;
      else
        v4 = *((char *)this + 280 * a2 + 281);
      a3 = v4;
    }
  }
  v6 = 0;
  v7 = sub_419530(this, a2, a3);
  for ( i = 0; i < v7; ++i )
    v6 += sub_419780(this, a2, a3, i);
  return v6;
}


//======================================================================
// sub_419980
// entry 00419980  size 135  status ok
//======================================================================

int __thiscall sub_419980(_WORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-8h]

  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v4 = 0;
      else
        v4 = *((char *)this + 280 * a2 + 281);
      a3 = v4;
    }
  }
  if ( sub_4197D0(this, a2, a3) <= 21 )
    return sub_4197D0(this, a2, a3);
  else
    return sub_4198D0(this, a2, a3);
}


//======================================================================
// sub_419A10
// entry 00419a10  size 191  status ok
//======================================================================

_BYTE *__thiscall sub_419A10(_BYTE *this, int a2)
{
  int v3; // [esp+0h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-4h]

  if ( a2 == -1 )
  {
    v4 = -1;
  }
  else
  {
    if ( a2 == 4 )
      v3 = 0;
    else
      v3 = (char)*(this + 280 * a2 + 281);
    v4 = v3;
  }
  *(this + 280 * a2 + v4 + 276) = 1;
  while ( v4 > -1 )
  {
    if ( !*(this + 280 * a2 + --v4 + 276) )
    {
      *(this + 280 * a2 + 281) = v4;
      return this;
    }
  }
  *(this + 280 * a2 + 281) = -1;
  return this;
}


//======================================================================
// sub_419AD0
// entry 00419ad0  size 192  status ok
//======================================================================

char __thiscall sub_419AD0(int this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-4h]

  v6 = sub_419780((_WORD *)this, a2, a3, a4);
  if ( v6 == 1 )
    v6 = 11;
  ++*(_DWORD *)(this + 1244);
  if ( v6 < 7 )
    ++*(_DWORD *)(this + 1252);
  if ( v6 > 9 )
    --*(_DWORD *)(this + 1252);
  if ( v6 == 11 )
    ++*(_DWORD *)(this + 1256);
  *(_DWORD *)(this + 1248) = sub_419C90(this);
  return sub_419420((_BYTE *)this, a2, a3, a4, 1);
}


//======================================================================
// sub_419C90
// entry 00419c90  size 159  status ok
//======================================================================

int __thiscall sub_419C90(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-18h]
  double v4; // [esp+8h] [ebp-10h]
  double v5; // [esp+10h] [ebp-8h]

  if ( *(this + 311) >= 52 * sub_418700(this) )
    return 0;
  v2 = sub_418700(this);
  v5 = (double)v2 + (double)v2 - (double)(int)*(this + 311) / 26.0;
  if ( v5 < 0.25 )
    v5 = 0.25;
  v4 = (double)(int)*(this + 313) / v5;
  if ( v4 >= 0.0 )
    return (int)(v4 + 0.5);
  else
    return (int)(v4 - 0.5);
}


//======================================================================
// sub_419D30
// entry 00419d30  size 145  status ok
//======================================================================

int __thiscall sub_419D30(_DWORD *this)
{
  double v3; // [esp+8h] [ebp-10h]
  int v4; // [esp+14h] [ebp-4h]

  if ( !*(this + 311) )
    return 0;
  v4 = 4 * sub_418700(this) - *(this + 314);
  if ( v4 <= 0 )
    return -1;
  v3 = (double)(52 * sub_418700(this) - *(this + 311)) / (double)v4;
  if ( v3 < 19.5 )
    return v3 <= 8.67;
  else
    return -1;
}


//======================================================================
// sub_419DD0
// entry 00419dd0  size 212  status ok
//======================================================================

int sub_419DD0()
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
// sub_419EB0
// entry 00419eb0  size 74  status ok
//======================================================================

int __stdcall sub_419EB0(int a1)
{
  __int64 v2; // [esp-8h] [ebp-1Ch]
  _BYTE v3[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = sub_64C8A0(0, 0);
  sub_5CB880(v3, a1);
  return sub_64C6E0(v2, HIDWORD(v2));
}


//======================================================================
// sub_419F00
// entry 00419f00  size 372  status ok
//======================================================================

char __stdcall sub_419F00(int a1)
{
  int v1; // eax
  char *Str1; // [esp+Ch] [ebp-30h]
  CImageDisplay *v5; // [esp+10h] [ebp-2Ch]
  char *Str2; // [esp+14h] [ebp-28h]
  CImageDisplay *v7; // [esp+18h] [ebp-24h]
  CImageDisplay *v8; // [esp+1Ch] [ebp-20h]
  _DWORD v9[4]; // [esp+28h] [ebp-14h]
  int i; // [esp+38h] [ebp-4h]

  v9[0] = 2;
  v9[1] = 0;
  v9[2] = 1;
  v9[3] = 3;
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    return 0;
  v1 = sub_5DCB00(a1);
  if ( (unsigned __int8)sub_5D5840(v1) )
    return 0;
  for ( i = 0; i < 4 && v9[i] != a1; ++i )
  {
    v8 = (CImageDisplay *)sub_5DCB00(v9[i]);
    if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
    {
      v7 = (CImageDisplay *)sub_5DCB00(a1);
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v7)->rcSource.top;
      v5 = (CImageDisplay *)sub_5DCB00(v9[i]);
      Str1 = (char *)&CImageDisplay::GetDisplayFormat(v5)->rcSource.top;
      if ( !strcmp(Str1, Str2) )
      {
        *(_BYTE *)(sub_5DCB00(a1) + 1185) = 1;
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
          *(_DWORD *)(dword_162EE80 + 4),
          1,
          0);
        return 0;
      }
    }
  }
  return 1;
}


//======================================================================
// sub_41A080
// entry 0041a080  size 35  status ok
//======================================================================

bool __thiscall sub_41A080(_DWORD *this, int a2)
{
  return *(this + 2 * a2 + 286) > 0;
}


//======================================================================
// sub_41A0B0
// entry 0041a0b0  size 222  status ok
//======================================================================

char __thiscall sub_41A0B0(_DWORD *this, int a2)
{
  int v2; // eax

  LOBYTE(v2) = sub_41A080(this, a2);
  if ( (_BYTE)v2 )
  {
    v2 = sub_5DCB00(a2);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_790320 + 656))(dword_790320, a2);
      if ( (int)*(this + 2 * a2 + 286) > 0 )
        (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)*(this + a2 + 282) + 196))(
          *(this + a2 + 282),
          this + 2 * a2 + 286,
          0,
          1);
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_40CC00((_DWORD **)dword_79032C);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                     *(_DWORD *)(dword_790320 + 4),
                     1,
                     0);
    }
  }
  return v2;
}


//======================================================================
// sub_41A190
// entry 0041a190  size 202  status ok
//======================================================================

void __thiscall sub_41A190(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-20h]
  int i; // [esp+24h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      v3 = *(this + i + 282);
      v1 = *(_DWORD *)(v3 + 32 * i + 76);
      *(this + 2 * i + 286) = *(_DWORD *)(v3 + 32 * i + 72);
      *(this + 2 * i + 287) = v1;
    }
    else
    {
      *((_QWORD *)this + i + 143) = sub_64C8A0(0, 0);
    }
  }
}


//======================================================================
// sub_41A260
// entry 0041a260  size 99  status ok
//======================================================================

char sub_41A260()
{
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_419EB0(i) || *(_BYTE *)(sub_5DCB00(i) + 1184) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_41A2D0
// entry 0041a2d0  size 120  status ok
//======================================================================

_DWORD *__thiscall sub_41A2D0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v4 = *(this + a3 + 282);
  v5 = *(_DWORD *)(v4 + 32 * a3 + 72);
  v6 = *(_DWORD *)(v4 + 32 * a3 + 76);
  if ( *((_BYTE *)this + 280 * a3 + 268) )
    v5 /= 2;
  *a2 = v5;
  a2[1] = v6;
  return a2;
}


//======================================================================
// sub_41A350
// entry 0041a350  size 61  status ok
//======================================================================

char __thiscall sub_41A350(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_419610(this, i) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_41A390
// entry 0041a390  size 160  status ok
//======================================================================

int __thiscall sub_41A390(_WORD *this)
{
  int v3; // [esp+Ch] [ebp-1Ch]
  int v4; // [esp+10h] [ebp-18h]
  _DWORD v5[4]; // [esp+14h] [ebp-14h]
  int i; // [esp+24h] [ebp-4h]

  v5[0] = 3;
  v5[1] = 1;
  v5[2] = 0;
  v5[3] = 2;
  v4 = 4;
  v3 = sub_419610(this, 4);
  for ( i = 0; i < 4; ++i )
  {
    if ( v3 == sub_419610(this, v5[i]) )
    {
      if ( *(_BYTE *)(sub_5DCB00(v5[i]) + 1184) )
        v4 = v5[i];
    }
  }
  return v4;
}


//======================================================================
// sub_41A430
// entry 0041a430  size 312  status ok
//======================================================================

int __thiscall sub_41A430(_WORD *this)
{
  _DWORD v3[4]; // [esp+18h] [ebp-14h]
  int i; // [esp+28h] [ebp-4h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  if ( !sub_418540() || sub_419780(this, 4, 0, 1) != 1 || sub_419530(this, 4, -1) != 2 )
    return -1;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(v3[i]) + 1184)
      && (unsigned __int8)sub_41A610(v3[i])
      && !*((_BYTE *)this + 280 * v3[i] + 282)
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1186) )
    {
      return v3[i];
    }
    *((_BYTE *)this + 280 * v3[i] + 282) = 1;
  }
  return -1;
}


//======================================================================
// sub_41A570
// entry 0041a570  size 147  status ok
//======================================================================

int __thiscall sub_41A570(_BYTE *this, int a2, char a3)
{
  int result; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-8h] BYREF

  *(this + 280 * a2 + 282) = 1;
  *(this + 280 * a2 + 283) = a3;
  result = (int)this;
  if ( *(this + 280 * a2 + 283) )
  {
    sub_41A660(v5, a2);
    return (*(int (__thiscall **)(_DWORD, _BYTE *, int, _DWORD))(**((_DWORD **)this + a2 + 282) + 196))(
             *((_DWORD *)this + a2 + 282),
             v5,
             1,
             0);
  }
  return result;
}


//======================================================================
// sub_41A610
// entry 0041a610  size 68  status ok
//======================================================================

int __stdcall sub_41A610(int a1)
{
  int *v1; // eax
  int v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  _BYTE v5[8]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = (int *)sub_41A660(v5, a1);
  v4 = v1[1];
  v3 = *v1;
  sub_5DCB00(a1);
  sub_5D5A90(v6);
  return sub_64C7A0(v3, v4);
}


//======================================================================
// sub_41A660
// entry 0041a660  size 147  status ok
//======================================================================

int *__thiscall sub_41A660(_DWORD *this, int *a2, int a3)
{
  int v4; // [esp+14h] [ebp-Ch]
  int v5; // [esp+18h] [ebp-8h]

  v5 = *(_DWORD *)(*(this + a3 + 282) + 32 * a3 + 72);
  v4 = (unsigned __int64)sub_64C8A0(0, 0) >> 32;
  if ( v5 % 2 )
    v4 = 50;
  *a2 = v5 / 2;
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_41A700
// entry 0041a700  size 113  status ok
//======================================================================

int __thiscall sub_41A700(_BYTE *this)
{
  _DWORD v2[4]; // [esp+4h] [ebp-14h]
  int i; // [esp+14h] [ebp-4h]

  v2[0] = 2;
  v2[1] = 0;
  v2[2] = 1;
  v2[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + 280 * v2[i] + 283) )
      return v2[i];
  }
  return -1;
}


//======================================================================
// sub_41A780
// entry 0041a780  size 141  status ok
//======================================================================

int sub_41A780()
{
  _DWORD v1[4]; // [esp+Ch] [ebp-14h]
  int i; // [esp+1Ch] [ebp-4h]

  v1[0] = 2;
  v1[1] = 0;
  v1[2] = 1;
  v1[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_419EB0(v1[i]) && !*(_BYTE *)(sub_5DCB00(v1[i]) + 1186) )
      return v1[i];
  }
  return -1;
}


//======================================================================
// sub_41A830
// entry 0041a830  size 89  status ok
//======================================================================

bool __thiscall sub_41A830(_WORD *this, int a2)
{
  return sub_4194C0(this, a2) == 1 && sub_419530(this, a2, 0) == 2 && sub_419980(this, a2, 0) == 21;
}


//======================================================================
// sub_41A890
// entry 0041a890  size 200  status ok
//======================================================================

int __thiscall sub_41A890(char *this)
{
  int v2; // [esp+0h] [ebp-2Ch]
  int v4; // [esp+8h] [ebp-24h]
  int v5; // [esp+Ch] [ebp-20h]
  _DWORD v6[4]; // [esp+18h] [ebp-14h]
  int i; // [esp+28h] [ebp-4h]

  v6[0] = 2;
  v6[1] = 0;
  v6[2] = 1;
  v6[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(v6[i]) + 1184) )
    {
      v5 = v6[i];
      if ( v5 == -1 )
      {
        v4 = -1;
      }
      else
      {
        v2 = v5 == 4 ? 0 : *(this + 280 * v5 + 281);
        v4 = v2;
      }
      if ( v4 != -1 )
        return v6[i];
    }
  }
  return -1;
}


//======================================================================
// sub_41A960
// entry 0041a960  size 1128  status ok
//======================================================================

char __thiscall sub_41A960(_WORD *this, int a2)
{
  char result; // al
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
  int v13; // [esp+0h] [ebp-68h]
  char v14; // [esp+4h] [ebp-64h]
  int v15; // [esp+8h] [ebp-60h]
  int v16; // [esp+Ch] [ebp-5Ch]
  int v17; // [esp+10h] [ebp-58h]
  int v18; // [esp+14h] [ebp-54h]
  int v19; // [esp+18h] [ebp-50h]
  bool v20; // [esp+1Ch] [ebp-4Ch]
  int v21; // [esp+20h] [ebp-48h]
  int v22; // [esp+24h] [ebp-44h]
  int v23; // [esp+28h] [ebp-40h]
  int v24; // [esp+2Ch] [ebp-3Ch]
  int v25; // [esp+34h] [ebp-34h]

  if ( sub_4194C0(this, a2) > 1 && (!sub_418650() || *((_BYTE *)this + 280 * a2 + 280)) )
    return 0;
  if ( !(unsigned __int8)sub_41AF20(a2) )
    return 0;
  if ( a2 == -1 )
  {
    v3 = sub_419530(this, -1, -1);
  }
  else
  {
    v25 = a2 == 4 ? 0 : *((char *)this + 280 * a2 + 281);
    v3 = sub_419530(this, a2, v25);
  }
  if ( v3 > 2 )
    return 0;
  switch ( sub_4186D0() )
  {
    case 0:
      if ( a2 == -1 )
      {
        v4 = sub_4197D0(this, -1, -1);
      }
      else
      {
        if ( a2 == 4 )
          v24 = 0;
        else
          v24 = *((char *)this + 280 * a2 + 281);
        v4 = sub_4197D0(this, a2, v24);
      }
      result = v4 == 11;
      break;
    case 1:
      if ( a2 == -1 )
      {
        v5 = sub_4197D0(this, -1, -1);
      }
      else
      {
        if ( a2 == 4 )
          v23 = 0;
        else
          v23 = *((char *)this + 280 * a2 + 281);
        v5 = sub_4197D0(this, a2, v23);
      }
      v20 = 1;
      if ( v5 != 11 )
      {
        if ( a2 == -1 )
        {
          v6 = sub_4197D0(this, -1, -1);
        }
        else
        {
          v22 = a2 == 4 ? 0 : *((char *)this + 280 * a2 + 281);
          v6 = sub_4197D0(this, a2, v22);
        }
        if ( v6 != 10 )
        {
          if ( a2 == -1 )
          {
            v7 = sub_4198D0(this, -1, -1);
          }
          else
          {
            v21 = a2 == 4 ? 0 : *((char *)this + 280 * a2 + 281);
            v7 = sub_4198D0(this, a2, v21);
          }
          if ( v7 != 10 )
            v20 = 0;
        }
      }
      result = v20;
      break;
    case 2:
      if ( a2 == -1 )
      {
        v8 = sub_4197D0(this, -1, -1);
      }
      else
      {
        if ( a2 == 4 )
          v19 = 0;
        else
          v19 = *((char *)this + 280 * a2 + 281);
        v8 = sub_4197D0(this, a2, v19);
      }
      if ( v8 == 11 )
        goto LABEL_83;
      if ( a2 == -1 )
      {
        v9 = sub_4197D0(this, -1, -1);
      }
      else
      {
        v18 = a2 == 4 ? 0 : *((char *)this + 280 * a2 + 281);
        v9 = sub_4197D0(this, a2, v18);
      }
      if ( v9 == 10
        || (a2 != -1
          ? (a2 != 4 ? (v17 = *((char *)this + 280 * a2 + 281)) : (v17 = 0), v10 = sub_4197D0(this, a2, v17))
          : (v10 = sub_4197D0(this, -1, -1)),
            v10 == 9
         || (a2 != -1
           ? (a2 != 4 ? (v16 = *((char *)this + 280 * a2 + 281)) : (v16 = 0), v11 = sub_4198D0(this, a2, v16))
           : (v11 = sub_4198D0(this, -1, -1)),
             v11 == 10
          || (a2 != -1
            ? (a2 != 4 ? (v15 = *((char *)this + 280 * a2 + 281)) : (v15 = 0), v12 = sub_4198D0(this, a2, v15))
            : (v12 = sub_4198D0(this, -1, -1)),
              v12 == 9))) )
      {
LABEL_83:
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      result = v14;
      break;
    case 3:
      if ( a2 == -1 )
      {
        result = sub_41AF80(-1, -1);
      }
      else
      {
        if ( a2 == 4 )
          v13 = 0;
        else
          v13 = *((char *)this + 280 * a2 + 281);
        result = sub_41AF80(a2, v13);
      }
      break;
    case 4:
      result = 1;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1074);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_41ADE0
// entry 0041ade0  size 220  status ok
//======================================================================

bool __thiscall sub_41ADE0(_WORD *this, int a2, int a3)
{
  if ( !(unsigned __int8)sub_41AF20(a2) )
    return 0;
  if ( !sub_418600() || !(unsigned __int8)sub_41AFE0(a2, a3) )
    return 0;
  if ( !sub_418690() && sub_419780(this, a2, a3, 0) == 1 && sub_4194C0(this, a2) > 1 )
    return 0;
  if ( sub_418600() == 1 && sub_4194C0(this, a2) == 1 )
    return 1;
  return sub_418600() == 3 && sub_4194C0(this, a2) < 4;
}


//======================================================================
// sub_41AEC0
// entry 0041aec0  size 85  status ok
//======================================================================

bool __thiscall sub_41AEC0(_WORD *this, int a2)
{
  return sub_418580() && sub_4194C0(this, a2) == 1 && sub_419530(this, a2, 0) == 2;
}


//======================================================================
// sub_41AF20
// entry 0041af20  size 91  status ok
//======================================================================

bool __thiscall sub_41AF20(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v4 = *(_DWORD *)(*(this + a2 + 282) + 32 * a2 + 72);
  v2 = sub_5DCB00(a2);
  return sub_5D5A50(v2) >= v4;
}


//======================================================================
// sub_41AF80
// entry 0041af80  size 95  status ok
//======================================================================

bool __thiscall sub_41AF80(_WORD *this, int a2, int a3)
{
  int v3; // esi

  v3 = sub_4197D0(this, a2, a3);
  return v3 == sub_4198D0(this, a2, a3) || sub_4197D0(this, a2, a3) > 21;
}


//======================================================================
// sub_41AFE0
// entry 0041afe0  size 182  status ok
//======================================================================

bool __thiscall sub_41AFE0(_WORD *this, int a2, int a3)
{
  __int16 v3; // ax
  int v4; // esi
  __int16 v5; // ax
  char v7; // [esp+4h] [ebp-Ch]
  int v8; // [esp+8h] [ebp-8h]

  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v8 = 0;
      else
        v8 = *((char *)this + 280 * a2 + 281);
      a3 = v8;
    }
  }
  v7 = 0;
  if ( sub_419530(this, a2, a3) == 2 )
  {
    v3 = sub_4193D0(this, a2, a3, 0);
    v4 = sub_641280(v3);
    v5 = sub_4193D0(this, a2, a3, 1);
    if ( v4 == sub_641280(v5) )
      return 1;
  }
  return v7;
}


//======================================================================
// sub_41B0A0
// entry 0041b0a0  size 198  status ok
//======================================================================

int __thiscall sub_41B0A0(_BYTE *this, int a2, int a3)
{
  int v3; // edx
  int v5; // [esp+0h] [ebp-14h]
  int v6; // [esp+8h] [ebp-Ch]
  _DWORD v7[2]; // [esp+Ch] [ebp-8h] BYREF

  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v5 = 0;
      else
        v5 = (char)*(this + 280 * a2 + 281);
      a3 = v5;
    }
  }
  *(this + 280 * a2 + a3 + 268) = 1;
  v6 = *((_DWORD *)this + a2 + 282);
  v3 = *(_DWORD *)(v6 + 32 * a2 + 76);
  v7[0] = *(_DWORD *)(v6 + 32 * a2 + 72);
  v7[1] = v3;
  return (*(int (__thiscall **)(_DWORD, _DWORD *, int, _DWORD))(**((_DWORD **)this + a2 + 282) + 196))(
           *((_DWORD *)this + a2 + 282),
           v7,
           a3,
           0);
}


//======================================================================
// sub_41B170
// entry 0041b170  size 450  status ok
//======================================================================

int __thiscall sub_41B170(_WORD *this, int a2, int a3)
{
  __int16 v3; // ax
  int result; // eax
  int v5; // [esp-8h] [ebp-3Ch]
  int v6; // [esp-4h] [ebp-38h]
  int v7; // [esp+0h] [ebp-34h]
  int v9; // [esp+Ch] [ebp-28h]
  int v10; // [esp+30h] [ebp-4h]

  sub_64C8A0(0, 0);
  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v7 = 0;
      else
        v7 = *((char *)this + 280 * a2 + 281);
      a3 = v7;
    }
  }
  v10 = sub_4194C0(this, a2);
  v3 = sub_4193D0(this, a2, a3, 1);
  sub_419370(this, a2, v10, 0, v3);
  sub_419370(this, a2, a3, 1, 0);
  *((_BYTE *)this + 280 * a2 + 281) = v10;
  v9 = *((_DWORD *)this + a2 + 282);
  v6 = -*(_DWORD *)(v9 + 32 * a2 + 76);
  v5 = -*(_DWORD *)(v9 + 32 * a2 + 72);
  sub_5DCB00(a2);
  sub_5D5CF0(v5, v6);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**((_DWORD **)this + a2 + 282) + 184))(
    *((_DWORD *)this + a2 + 282),
    *(_DWORD *)(*((_DWORD *)this + a2 + 282) + 32 * a2 + 72),
    *(_DWORD *)(*((_DWORD *)this + a2 + 282) + 32 * a2 + 76),
    a2,
    v10);
  result = sub_419780(this, a2, v10, 0);
  if ( result == 1 )
  {
    *((_BYTE *)this + 280 * a2 + 280) = 1;
    return 280 * a2;
  }
  return result;
}


//======================================================================
// sub_41B340
// entry 0041b340  size 245  status ok
//======================================================================

int __thiscall sub_41B340(_BYTE *this, int a2)
{
  int result; // eax
  int v4; // [esp+10h] [ebp-Ch]
  int v5; // [esp+14h] [ebp-8h]
  int v6; // [esp+18h] [ebp-4h]

  v4 = *((_DWORD *)this + a2 + 282);
  v5 = *(_DWORD *)(v4 + 32 * a2 + 72);
  v6 = *(_DWORD *)(v4 + 32 * a2 + 76);
  sub_64C560(0.5);
  sub_5DCB00(a2);
  sub_5D5CF0(v5, v6);
  (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD))(**((_DWORD **)this + a2 + 282) + 184))(
    *((_DWORD *)this + a2 + 282),
    v5,
    v6,
    a2,
    0);
  sub_5DCB00(a2);
  sub_5D5FB0(-v5, -v6);
  sub_4191F0(this, a2, 0, 5);
  result = sub_5DCB00(a2);
  *(_BYTE *)(result + 1186) = 1;
  return result;
}


//======================================================================
// sub_41B440
// entry 0041b440  size 460  status ok
//======================================================================

_BYTE *__thiscall sub_41B440(int this, int a2)
{
  _BYTE *result; // eax
  int v3; // [esp+4h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-4h]

  if ( a2 == -1 )
  {
    v5 = -1;
  }
  else
  {
    if ( a2 == 4 )
      v3 = 0;
    else
      v3 = *(char *)(this + 280 * a2 + 281);
    result = (_BYTE *)v3;
    v5 = v3;
  }
  switch ( *(_DWORD *)(this + 1236) )
  {
    case 0:
      goto LABEL_18;
    case 1:
      if ( (unsigned __int8)sub_41B990(a2, -1) )
      {
        sub_41BBA0(a2, v5, 0, 1, 1);
        sub_4191F0((_BYTE *)this, a2, v5, 6);
        sub_419A10((_BYTE *)this, a2);
        result = (_BYTE *)sub_5DCB00(a2);
        result[1200] = 1;
      }
      else if ( sub_419980((_WORD *)this, a2, v5) == 21 )
      {
LABEL_18:
        result = sub_419A10((_BYTE *)this, a2);
      }
      else
      {
        result = (_BYTE *)(*(_BYTE *)(this + 280 * a2 + 280) != 0);
        if ( *(_BYTE *)(this + 280 * a2 + 280) )
        {
          result = (_BYTE *)sub_41ADE0((_WORD *)this, a2, v5);
          if ( !(_BYTE)result )
            result = sub_419A10((_BYTE *)this, a2);
        }
      }
LABEL_19:
      *(_DWORD *)(this + 1236) = -1;
      return result;
    case 2:
      if ( (unsigned __int8)sub_41B990(a2, -1) )
      {
        sub_41BBA0(a2, v5, 0, 1, 1);
        sub_4191F0((_BYTE *)this, a2, v5, 6);
        *(_BYTE *)(sub_5DCB00(a2) + 1200) = 1;
      }
      goto LABEL_18;
    case 4:
      sub_419A10((_BYTE *)this, a2);
      result = (_BYTE *)sub_5DCB00(a2);
      result[1200] = 1;
      goto LABEL_19;
    default:
      goto LABEL_19;
  }
}


//======================================================================
// sub_41B620
// entry 0041b620  size 221  status ok
//======================================================================

int __thiscall sub_41B620(_BYTE *this, int a2)
{
  int result; // eax

  *(_BYTE *)(sub_5DCB00(a2) + 1186) = 1;
  if ( *(this + 280 * a2 + 283) )
    sub_41BBA0(a2, 1, 1, 2, 1);
  if ( sub_41A830(this, a2) )
  {
    sub_41BBA0(a2, 0, 2, 1, 1);
    sub_4191F0(this, a2, 0, 2);
    result = sub_5DCB00(a2);
    *(_BYTE *)(result + 1200) = 0;
  }
  else
  {
    sub_41BBA0(a2, 0, 0, 1, 1);
    sub_4191F0(this, a2, 0, 0);
    result = sub_5DCB00(a2);
    *(_BYTE *)(result + 1200) = 1;
  }
  return result;
}


//======================================================================
// sub_41B700
// entry 0041b700  size 113  status ok
//======================================================================

int __thiscall sub_41B700(_BYTE *this, int a2)
{
  sub_41BBA0(a2, 1, 0, 1, 1);
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + a2 + 282) + 188))(*((_DWORD *)this + a2 + 282), a2, 1);
  *(this + 280 * a2 + 283) = 0;
  return sub_4191F0(this, a2, 1, -1);
}


//======================================================================
// sub_41B780
// entry 0041b780  size 168  status ok
//======================================================================

_BYTE *__thiscall sub_41B780(_BYTE *this, int a2)
{
  int v3; // [esp+0h] [ebp-10h]

  if ( a2 == -1 )
  {
    sub_41BBA0(-1, -1, 1, 3, 2);
  }
  else
  {
    if ( a2 == 4 )
      v3 = 0;
    else
      v3 = (char)*(this + 280 * a2 + 281);
    sub_41BBA0(a2, v3, 1, 3, 2);
  }
  *(_BYTE *)(sub_5DCB00(a2) + 1186) = 1;
  sub_4191F0(this, a2, 0, 7);
  *(_BYTE *)(sub_5DCB00(a2) + 1200) = 0;
  return sub_419A10(this, a2);
}


//======================================================================
// sub_41B830
// entry 0041b830  size 187  status ok
//======================================================================

char __thiscall sub_41B830(_WORD *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  if ( sub_419980(this, 4, 0) > 17 )
    return 1;
  if ( sub_419980(this, 4, 0) == 17 && (sub_4198D0(this, 4, 0) == 17 || !sub_4185C0()) )
    return 1;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < sub_4194C0(this, i); ++j )
    {
      if ( *((char *)this + 280 * i + j + 272) == -1 )
        return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_41B8F0
// entry 0041b8f0  size 152  status ok
//======================================================================

int __thiscall sub_41B8F0(_WORD *this)
{
  int j; // [esp+4h] [ebp-18h]
  _DWORD v4[4]; // [esp+8h] [ebp-14h]
  int i; // [esp+18h] [ebp-4h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < sub_4194C0(this, v4[i]); ++j )
    {
      if ( *((char *)this + 280 * v4[i] + j + 272) == -1 )
        return v4[i];
    }
  }
  return -1;
}


//======================================================================
// sub_41B990
// entry 0041b990  size 106  status ok
//======================================================================

bool __thiscall sub_41B990(_WORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-8h]

  if ( a3 == -1 )
  {
    if ( a2 == -1 )
    {
      a3 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v4 = 0;
      else
        v4 = *((char *)this + 280 * a2 + 281);
      a3 = v4;
    }
  }
  return sub_419980(this, a2, a3) > 21;
}


//======================================================================
// sub_41BA00
// entry 0041ba00  size 416  status ok
//======================================================================

int __thiscall sub_41BA00(_WORD *this, int a2)
{
  int result; // eax
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = sub_419980(this, 4, 0);
  for ( i = 0; ; ++i )
  {
    if ( i >= sub_4194C0(this, a2) )
    {
      result = sub_5DCB00(a2);
      *(_BYTE *)(result + 1186) = 1;
      return result;
    }
    if ( sub_419530(this, a2, i) <= 1 )
      sub_5E9F20((char)"GetNumCardsPlayerHasInHand(p, i) > 1", "..\\Casino\\blackjackstate.cpp", 1351);
    if ( *((char *)this + 280 * a2 + i + 272) == -1 )
      break;
  }
  if ( v5 <= 21 && v5 >= sub_419980(this, a2, i) )
  {
    if ( v5 == sub_419980(this, a2, i) )
    {
      sub_41BBA0(a2, i, 2, 1, 1);
      sub_4191F0(this, a2, i, 2);
      result = sub_5DCB00(a2);
      *(_BYTE *)(result + 1200) = 0;
    }
    else
    {
      sub_41BBA0(a2, i, 0, 1, 1);
      sub_4191F0(this, a2, i, 0);
      result = sub_5DCB00(a2);
      *(_BYTE *)(result + 1200) = 1;
    }
  }
  else
  {
    sub_41BBA0(a2, i, 1, 1, 1);
    sub_4191F0(this, a2, i, 1);
    result = sub_5DCB00(a2);
    *(_BYTE *)(result + 1200) = 0;
  }
  return result;
}


//======================================================================
// sub_41BBA0
// entry 0041bba0  size 176  status ok
//======================================================================

int __thiscall sub_41BBA0(_WORD *this, int a2, int a3, int a4, int a5, int a6)
{
  char v8; // [esp+Bh] [ebp-5h]
  int i; // [esp+Ch] [ebp-4h]

  v8 = 0;
  sub_41D950(a2, a3, a4, a5, a6);
  for ( i = 0; i < sub_4194C0(this, a2); ++i )
  {
    if ( sub_41B990(this, a2, i) )
    {
      v8 = 1;
      break;
    }
  }
  if ( v8 )
    *(_BYTE *)(sub_5DCB00(a2) + 1186) = 1;
  return sub_4191F0(this, a2, a3, a4);
}


//======================================================================
// sub_41BC50
// entry 0041bc50  size 682  status ok
//======================================================================

int __stdcall sub_41BC50(__int16 a1)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  char *v7; // eax
  char *v9; // [esp+0h] [ebp-5CCh]
  char *v10; // [esp+4h] [ebp-5C8h]
  char *v11; // [esp+8h] [ebp-5C4h]
  char *Source; // [esp+Ch] [ebp-5C0h]
  char Destination[256]; // [esp+14h] [ebp-5B8h] BYREF
  char v14[1024]; // [esp+114h] [ebp-4B8h] BYREF
  char v15[32]; // [esp+514h] [ebp-B8h] BYREF
  char v16[16]; // [esp+534h] [ebp-98h] BYREF
  char Buffer[132]; // [esp+544h] [ebp-88h] BYREF

  v1 = (const char *)sub_630F40("SID_BLACKJACK_10RICH10POOR");
  strcpy(Destination, v1);
  if ( a1 <= 1 )
  {
    if ( a1 >= -1 )
    {
      v2 = (const char *)sub_630F40("SID_BLACKJACK_10NEUTRAL");
      strcpy(v16, v2);
      v3 = (const char *)sub_630F40("SID_BLACKJACK_NORMAL");
      strcpy(v15, v3);
    }
    else
    {
      if ( a1 <= 4 )
        v10 = (char *)sub_630F40("SID_BLACKJACK_10POOR");
      else
        v10 = (char *)sub_630F40("SID_BLACKJACK_VERY10POOR");
      strcpy(v16, v10);
      if ( a1 <= 4 )
        v9 = (char *)sub_630F40("SID_BLACKJACK_CONSERVATIVE");
      else
        v9 = (char *)sub_630F40("SID_BLACKJACK_VERYCONSERVATIVE");
      strcpy(v15, v9);
    }
  }
  else
  {
    if ( a1 <= 4 )
      Source = (char *)sub_630F40("SID_BLACKJACK_10RICH");
    else
      Source = (char *)sub_630F40("SID_BLACKJACK_VERY10RICH");
    strcpy(v16, Source);
    if ( a1 <= 4 )
      v11 = (char *)sub_630F40("SID_BLACKJACK_AGGRESSIVE");
    else
      v11 = (char *)sub_630F40("SID_BLACKJACK_VERYAGGRESSIVE");
    strcpy(v15, v11);
  }
  v4 = (const char *)sub_630F40("SID_BLACKJACK_CURRENTDECK_FORMAT");
  sprintf(Buffer, v4, v16, v15, a1);
  if ( a1 <= 1 )
  {
    if ( a1 >= -1 )
      v6 = (const char *)sub_630F40("SID_BLACKJACK_ABOUT10NEUTRAL");
    else
      v6 = (const char *)sub_630F40("SID_BLACKJACK_ABOUT10POOR");
    sprintf(v14, v6, Destination, Buffer);
  }
  else
  {
    v5 = (const char *)sub_630F40("SID_BLACKJACK_ABOUT10RICH");
    sprintf(v14, v5, Destination, Buffer);
  }
  v7 = (char *)sub_630F40("SID_BLACKJACK_STRATEGY");
  return sub_57BE80(1, v7, v14);
}


//======================================================================
// sub_41BF00
// entry 0041bf00  size 403  status ok
//======================================================================

int __thiscall sub_41BF00(int this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  char *v7; // eax
  int v9; // [esp+0h] [ebp-418h]
  char Destination[1028]; // [esp+8h] [ebp-410h] BYREF
  int v12; // [esp+410h] [ebp-8h]
  int v13; // [esp+414h] [ebp-4h]

  v13 = *(_DWORD *)(this + 1232);
  if ( v13 == -1 )
  {
    v12 = -1;
  }
  else
  {
    if ( v13 == 4 )
      v9 = 0;
    else
      v9 = *(char *)(this + 280 * v13 + 281);
    v12 = v9;
  }
  v1 = (const char *)sub_630F40("SID_BLACKJACK_CHOOSEACTION");
  strcpy(Destination, v1);
  v2 = (const char *)sub_630F40("SID_BLACKJACK_INSTRUCTIONS_HIT");
  strcat(Destination, v2);
  v3 = (const char *)sub_630F40("SID_BLACKJACK_INSTRUCTIONS_STAND");
  strcat(Destination, v3);
  if ( sub_41A960((_WORD *)this, v13) )
  {
    v4 = (const char *)sub_630F40("SID_BLACKJACK_INSTRUCTIONS_DOUBLEDOWN");
    strcat(Destination, v4);
  }
  if ( sub_41ADE0((_WORD *)this, v13, v12) )
  {
    v5 = (const char *)sub_630F40("SID_BLACKJACK_iNSTRUCTIONS_SPLIT");
    strcat(Destination, v5);
  }
  if ( sub_41AEC0((_WORD *)this, v13) )
  {
    v6 = (const char *)sub_630F40("SID_BLACKJACK_INSTRUCTIONS_SURRENDER");
    strcat(Destination, v6);
  }
  v7 = (char *)sub_630F40("SID_SHELL_PLAY");
  return sub_57BE80(0, v7, Destination);
}


//======================================================================
// sub_41C0A0
// entry 0041c0a0  size 1169  status ok
//======================================================================

int __thiscall sub_41C0A0(int this)
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
  int *v11; // eax
  int v12; // edx
  const char *v13; // eax
  const char *v14; // eax
  char *v15; // eax
  int v17; // [esp-18h] [ebp-68Ch]
  int v18; // [esp+0h] [ebp-674h]
  int v19; // [esp+4h] [ebp-670h]
  _BYTE v21[8]; // [esp+Ch] [ebp-668h] BYREF
  char Destination[16]; // [esp+14h] [ebp-660h] BYREF
  char v23[512]; // [esp+24h] [ebp-650h] BYREF
  int v24; // [esp+224h] [ebp-450h]
  int v25; // [esp+228h] [ebp-44Ch]
  char Source[1028]; // [esp+22Ch] [ebp-448h] BYREF
  char Buffer[8]; // [esp+630h] [ebp-44h] BYREF
  int v28; // [esp+638h] [ebp-3Ch]
  __int16 v29; // [esp+63Ch] [ebp-38h]
  char v30; // [esp+643h] [ebp-31h]
  int v31; // [esp+644h] [ebp-30h] BYREF
  char v32[16]; // [esp+648h] [ebp-2Ch] BYREF
  char v33[16]; // [esp+658h] [ebp-1Ch] BYREF
  __int16 v34; // [esp+66Ch] [ebp-8h]
  int v35; // [esp+670h] [ebp-4h]

  v35 = *(_DWORD *)(this + 1232);
  if ( v35 == -1 )
  {
    v28 = -1;
  }
  else
  {
    if ( v35 == 4 )
      v19 = 0;
    else
      v19 = *(char *)(this + 280 * v35 + 281);
    v28 = v19;
  }
  v34 = sub_419980((_WORD *)this, v35, v28);
  v29 = sub_419780((_WORD *)this, 4, 0, 1);
  v30 = sub_4198D0((_WORD *)this, v35, v28) != v34;
  if ( v29 == 1 )
    v29 = 11;
  if ( v34 >= 20 || v34 == 10 || v34 == 11 )
  {
    v1 = (const char *)sub_630F40("SID_BLACKJACK_VERYSTRONG");
    strcpy(Destination, v1);
  }
  else if ( v34 >= 18 || v34 == 8 || v34 == 9 || v34 >= 12 && v34 <= 19 && v30 )
  {
    v2 = (const char *)sub_630F40("SID_BLACKJACK_STRONG");
    strcpy(Destination, v2);
  }
  else if ( v34 == 17 || v34 == 12 || v34 == 7 )
  {
    v3 = (const char *)sub_630F40("SID_BLACKJACK_NEUTRAL");
    strcpy(Destination, v3);
  }
  else if ( v34 > 6 )
  {
    if ( v34 < 13 || v34 > 16 )
    {
      sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1494);
    }
    else
    {
      v5 = (const char *)sub_630F40("SID_BLACKJACK_VERYWEAK");
      strcpy(Destination, v5);
    }
  }
  else
  {
    v4 = (const char *)sub_630F40("SID_BLACKJACK_WEAK");
    strcpy(Destination, v4);
  }
  if ( v29 < 10 )
  {
    switch ( v29 )
    {
      case 8:
      case 9:
        v7 = (const char *)sub_630F40("SID_BLACKJACK_STRONG");
        strcpy(v33, v7);
        break;
      case 7:
      case 2:
        v8 = (const char *)sub_630F40("SID_BLACKJACK_NEUTRAL");
        strcpy(v33, v8);
        break;
      case 4:
      case 3:
        v9 = (const char *)sub_630F40("SID_BLACKJACK_WEAK");
        strcpy(v33, v9);
        break;
      case 5:
      case 6:
        v10 = (const char *)sub_630F40("SID_BLACKJACK_VERYWEAK");
        strcpy(v33, v10);
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1507);
        break;
    }
  }
  else
  {
    v6 = (const char *)sub_630F40("SID_BLACKJACK_VERYSTRONG");
    strcpy(v33, v6);
  }
  sub_41D3C0(v32, (int)&v31);
  sub_41C540(v23, v34, v29, v30);
  v11 = (int *)sub_41D5A0(v21, v31, v34, v29);
  v12 = v11[1];
  v24 = *v11;
  v24 += 39;
  v25 = v12 + 60;
  if ( v29 == 11 )
  {
    v13 = (const char *)sub_630F40("SID_BLACKJACK_A");
    strcpy(Buffer, v13);
  }
  else
  {
    sprintf(Buffer, off_6B4E68, v29);
  }
  if ( v30 )
    v18 = sub_630F40("SID_BLACKJACK_SOFT");
  else
    v18 = sub_630F40("SID_BLACKJACK_HARD");
  v17 = v34;
  v14 = (const char *)sub_630F40("SID_BLACKJACK_HANDSUMMARY_FORMAT");
  sprintf(Source, v14, v18, v17, Destination, Buffer, v33, v32, v23);
  v15 = (char *)sub_630F40("SID_BLACKJACK_STRATEGY");
  sub_57BE80(1, v15, Source);
  return sub_57C0B0(1, v31, 5019, v24, v25);
}


//======================================================================
// sub_41C540
// entry 0041c540  size 3631  status ok
//======================================================================

char *__thiscall sub_41C540(int this, char *Destination, __int16 a3, __int16 a4, char a5)
{
  bool v5; // al
  bool v6; // al
  const char *v7; // eax
  const char *v8; // eax
  char *result; // eax
  const char *v10; // eax
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
  const char *v30; // eax
  const char *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  const char *v39; // eax
  const char *v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  const char *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  const char *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  const char *v51; // eax
  const char *v52; // eax
  bool v54; // [esp+12h] [ebp-Ah]
  int v55; // [esp+14h] [ebp-8h]
  char v56; // [esp+1Bh] [ebp-1h]

  v55 = *(_DWORD *)(this + 1232);
  if ( v55 == -1 )
  {
    v5 = sub_41ADE0((_WORD *)this, -1, -1);
  }
  else if ( v55 == 4 )
  {
    v5 = sub_41ADE0((_WORD *)this, 4, 0);
  }
  else
  {
    v5 = sub_41ADE0((_WORD *)this, v55, *(char *)(this + 280 * v55 + 281));
  }
  v54 = v5;
  v56 = sub_41A960((_WORD *)this, v55);
  v6 = sub_41AEC0((_WORD *)this, v55);
  switch ( a3 )
  {
    case 4:
      if ( !v54 )
        goto LABEL_109;
      if ( a4 >= 8 )
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION4_DEALERSTRONG");
      else
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION4_DEALERWEAK");
      goto LABEL_170;
    case 5:
    case 7:
      goto LABEL_109;
    case 6:
      if ( !v54 )
        goto LABEL_109;
      if ( a4 >= 8 )
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION6_DEALERSTRONG");
      else
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION6_DEALERWEAK");
      goto LABEL_170;
    case 8:
      if ( !v54 )
        goto LABEL_109;
      if ( a4 <= 4 )
      {
        v8 = (const char *)sub_630F40("SID_BLACKJACK_ACTION8_DEALERWEAK");
        return strcpy(Destination, v8);
      }
      if ( a4 > 6 )
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION8_DEALERSTRONG");
      else
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION8_DEALERVERYWEAK");
      goto LABEL_170;
    case 9:
      if ( !v56 || a4 < 3 || a4 > 6 )
        goto LABEL_109;
      v10 = (const char *)sub_630F40("SID_BLACKJACK_ACTION9_DEALERWEAK");
      return strcpy(Destination, v10);
    case 10:
      if ( v54 )
      {
        if ( a4 > 9 )
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION10_DEALERSTRONG");
        else
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION10_DOUBLE");
      }
      else
      {
        if ( !v56 )
          goto LABEL_109;
        if ( a4 > 9 )
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION10_DEALERVERYSTRONG");
        else
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION10_STRONGHAND");
      }
      goto LABEL_170;
    case 11:
      if ( !v56 )
        goto LABEL_109;
      if ( a4 > 10 )
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION11_DEALERSTRONG");
      else
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION11_STRONGHAND");
      goto LABEL_170;
    case 12:
      if ( !a5 )
      {
        if ( v54 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v13 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERVERYSTRONG_DONTSPLIT");
              return strcpy(Destination, v13);
            }
            else
            {
              v12 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERSTRONG_DONTSPLIT_FORMAT");
              return (char *)sprintf(Destination, v12, a4 + 10);
            }
          }
          else
          {
            v11 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERWEAK");
            return strcpy(Destination, v11);
          }
        }
        else if ( a4 > 3 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v17 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERVERYSTRONG");
              return strcpy(Destination, v17);
            }
            else
            {
              v16 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERSTRONG_FORMAT");
              return (char *)sprintf(Destination, v16, a4 + 10);
            }
          }
          else
          {
            v15 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERWEAK_FORMAT");
            return (char *)sprintf(Destination, v15, a4 + 10);
          }
        }
        else
        {
          v14 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_DEALERSTRONG_TAKEHIT_TRUECOUNTHIGH");
          return strcpy(Destination, v14);
        }
      }
      if ( !v54 )
        goto LABEL_115;
      v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION12_SPLITACES");
      goto LABEL_170;
    case 13:
      if ( !a5 )
      {
        if ( a4 > 3 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v22 = (const char *)sub_630F40("SID_BLACKJACK_DEALERVERYSTRONG");
              return strcpy(Destination, v22);
            }
            else
            {
              v21 = (const char *)sub_630F40("SID_BLACKJACK_DEALERSTRONG_FORMAT");
              return (char *)sprintf(Destination, v21, a4 + 10);
            }
          }
          else
          {
            v20 = (const char *)sub_630F40("SID_BLACKJACK_ACTION13_DEALERWEAK_FORMAT");
            return (char *)sprintf(Destination, v20, a4 + 10);
          }
        }
        else
        {
          v19 = (const char *)sub_630F40("SID_BLACKJACK_ACTION13_DEALERWEAK_TRUECOUNTLOW_FORMAT");
          return (char *)sprintf(Destination, v19, a4 + 10);
        }
      }
      if ( v56 && a4 == 5 || a4 == 6 )
      {
        v18 = (const char *)sub_630F40("SID_BLACKJACK_ACTION13_DEALERWEAK_DOUBLEORHIT");
        return strcpy(Destination, v18);
      }
      goto LABEL_109;
    case 14:
      if ( !a5 )
      {
        if ( v54 )
        {
          if ( a4 > 7 )
          {
            if ( a4 > 10 )
            {
              v26 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERVERYSTRONG_DONTSPLIT7");
              return strcpy(Destination, v26);
            }
            else
            {
              v25 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERSTRONG_DONTSPLIT7_FORMAT");
              return (char *)sprintf(Destination, v25, a4 + 10);
            }
          }
          else
          {
            v24 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERWEAK_SPLIT7");
            return strcpy(Destination, v24);
          }
        }
        else if ( a4 > 6 )
        {
          if ( a4 > 10 )
          {
            v29 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERVERYSTRONG_HIT");
            return strcpy(Destination, v29);
          }
          else
          {
            v28 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v28, a4 + 10);
          }
        }
        else
        {
          v27 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v27, a4 + 10);
        }
      }
      if ( v56 && a4 == 5 || a4 == 6 )
      {
        v23 = (const char *)sub_630F40("SID_BLACKJACK_ACTION14_DEALERWEAK_DOUBLEORHIT");
        return strcpy(Destination, v23);
      }
      goto LABEL_109;
    case 15:
      if ( !a5 )
      {
        if ( a4 > 6 )
        {
          if ( a4 == 10 && v6 )
          {
            v31 = (const char *)sub_630F40("SID_BLACKJACK_ACTION15_DEALERSTRONG_SURRENDERHALF");
            return strcpy(Destination, v31);
          }
          else if ( a4 > 10 )
          {
            v33 = (const char *)sub_630F40("SID_BLACKJACK_ACTION15_DEALERVERYSTRONG_HIT");
            return strcpy(Destination, v33);
          }
          else
          {
            v32 = (const char *)sub_630F40("SID_BLACKJACK_ACTION15_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v32, a4 + 10);
          }
        }
        else
        {
          v30 = (const char *)sub_630F40("SID_BLACKJACK_ACTION15_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v30, a4 + 10);
        }
      }
      if ( a4 <= 3 )
        goto LABEL_109;
      if ( a4 <= 6 )
      {
        if ( !v56 )
          goto LABEL_115;
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION15_DEALERVERYWEAK_DOUBLEORHIT");
        goto LABEL_170;
      }
      if ( !v56 )
        goto LABEL_115;
      goto LABEL_97;
    case 16:
      if ( !a5 )
      {
        if ( v54 )
        {
          v35 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_AVOIDHAND");
          return strcpy(Destination, v35);
        }
        else if ( a4 > 6 )
        {
          if ( a4 >= 9 && v6 )
          {
            v37 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_DEALERSTRONG_SURRENDERHALF");
            return strcpy(Destination, v37);
          }
          else if ( a4 >= 10 )
          {
            if ( a4 == 10 )
            {
              v39 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_DEALERVERYSTRONG_MORE");
              return (char *)sprintf(Destination, v39, a4 + 10);
            }
            else
            {
              v40 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_DEALERVERYSTRONG_HIT");
              return strcpy(Destination, v40);
            }
          }
          else
          {
            v38 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v38, a4 + 10);
          }
        }
        else
        {
          v36 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v36, a4 + 10);
        }
      }
      if ( a4 <= 3 )
      {
LABEL_109:
        v34 = (const char *)sub_630F40("SID_BLACKJACK_NORISKOFBUSTING");
        return strcpy(Destination, v34);
      }
      if ( a4 > 6 )
      {
        if ( v56 )
        {
LABEL_97:
          v7 = (const char *)sub_630F40("SID_BLACKJACK_NORISKOFBUSTING_DONTDOUBLE");
          goto LABEL_170;
        }
      }
      else if ( v56 )
      {
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION16_DEALERVERYWEAK_DOUBLEORHIT");
        goto LABEL_170;
      }
LABEL_115:
      v7 = (const char *)sub_630F40("SID_BLACKJACK_NORISKOFBUSTING");
      goto LABEL_170;
    case 17:
      if ( !a5 )
        goto LABEL_136;
      if ( a4 == 2 )
      {
        v41 = (const char *)sub_630F40("SID_BLACKJACK_ACTION17_HIT");
        return strcpy(Destination, v41);
      }
      if ( a4 > 6 )
      {
        v42 = (const char *)sub_630F40("SID_BLACKJACK_ACTION17_DEALERSTRONG");
        return strcpy(Destination, v42);
      }
      if ( v56 )
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION17_DEALERWEAK_DOUBLEORHIT");
      else
        v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION17_HIT");
      goto LABEL_170;
    case 18:
      if ( !a5 )
      {
        if ( !v54 )
        {
LABEL_136:
          v43 = (const char *)sub_630F40("SID_BLACKJACK_GOODHAND_STAND");
          return strcpy(Destination, v43);
        }
        if ( a4 <= 6 )
        {
          v48 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_DEALERWEAK_SPLIT");
          return strcpy(Destination, v48);
        }
        switch ( a4 )
        {
          case 7:
            v49 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_DEALERWEAK_DONTSPLIT");
            return strcpy(Destination, v49);
          case 8:
            v50 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_SPLIT9SFOR10S_ELSEPUSH");
            return strcpy(Destination, v50);
          case 9:
            v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_SPLIT9SFOR10S_ELSELOSS");
            break;
          default:
            v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_DEALERVERYSTONG_STAND");
            break;
        }
        goto LABEL_170;
      }
      if ( a4 == 2 )
      {
        v44 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_DONTHIT");
        return strcpy(Destination, v44);
      }
      if ( a4 <= 6 )
      {
        if ( v56 )
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_DEALERWEAK_DOUBLEORSTAND");
        else
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_DEALERWEAK_DONTHIT");
        goto LABEL_170;
      }
      if ( a4 > 8 )
      {
        if ( a4 > 10 )
        {
          v47 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_ONEHIT");
          result = strcpy(Destination, v47);
        }
        else
        {
          v46 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_ONEHIT_FORMAT");
          result = (char *)sprintf(Destination, v46, a4 + 10);
        }
      }
      else
      {
        if ( v56 )
          v45 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_SOFT_DONTDOUBLE_FORMAT");
        else
          v45 = (const char *)sub_630F40("SID_BLACKJACK_ACTION18_SOFT_FORMAT");
        result = (char *)sprintf(Destination, v45, a4 + 10);
      }
      break;
    case 19:
      if ( !a5 )
        goto LABEL_171;
      v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION19_DONTHIT");
      goto LABEL_170;
    case 20:
      if ( a5 )
      {
        v51 = (const char *)sub_630F40("SID_BLACKJACK_ACTION20_DONTHIT");
        result = strcpy(Destination, v51);
      }
      else
      {
        if ( v54 )
          v7 = (const char *)sub_630F40("SID_BLACKJACK_ACTION20_DONTSPLIT");
        else
LABEL_171:
          v7 = (const char *)sub_630F40("SID_BLACKJACK_GOODHAND_STAND");
LABEL_170:
        result = strcpy(Destination, v7);
      }
      break;
    case 21:
      v52 = (const char *)sub_630F40("SID_BLACKJACK_ACTION21");
      return strcpy(Destination, v52);
    default:
      return (char *)sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1809);
  }
  return result;
}


//======================================================================
// sub_41D3C0
// entry 0041d3c0  size 457  status ok
//======================================================================

char *__thiscall sub_41D3C0(int this, char *Destination, char *a3)
{
  int v3; // eax
  const char *v4; // eax
  char *result; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int v10; // [esp+8h] [ebp-18h]
  int v12; // [esp+14h] [ebp-Ch]
  bool v13; // [esp+1Bh] [ebp-5h]
  int v14; // [esp+1Ch] [ebp-4h]

  v14 = *(_DWORD *)(this + 1232);
  if ( v14 == -1 )
  {
    v12 = -1;
    v3 = sub_4198D0((_WORD *)this, -1, -1);
  }
  else
  {
    if ( v14 == 4 )
      v10 = 0;
    else
      v10 = *(char *)(this + 280 * v14 + 281);
    v12 = v10;
    v3 = sub_4198D0((_WORD *)this, v14, v10);
  }
  v13 = v3 != sub_419980((_WORD *)this, v14, v12);
  switch ( sub_40B260((void *)dword_790330, *(_DWORD *)(this + 1232)) )
  {
    case 0:
      v4 = (const char *)sub_630F40("SID_BLACKJACK_STAND");
      result = strcpy(Destination, v4);
      if ( v13 )
      {
        *(_DWORD *)a3 = 5045;
      }
      else
      {
        *(_DWORD *)a3 = 5044;
        result = a3;
      }
      break;
    case 1:
      v6 = (const char *)sub_630F40("SID_BLACKJACK_HIT");
      result = strcpy(Destination, v6);
      if ( v13 )
      {
        *(_DWORD *)a3 = 5045;
        result = a3;
      }
      else
      {
        *(_DWORD *)a3 = 5044;
      }
      break;
    case 2:
      v7 = (const char *)sub_630F40("SID_BLACKJACK_DOUBLEDOWN");
      strcpy(Destination, v7);
      result = (char *)v13;
      if ( v13 )
        *(_DWORD *)a3 = 5043;
      else
        *(_DWORD *)a3 = 5048;
      break;
    case 3:
      v8 = (const char *)sub_630F40("SID_BLACKJACK_SPLIT");
      result = strcpy(Destination, v8);
      *(_DWORD *)a3 = 5046;
      break;
    case 4:
      v9 = (const char *)sub_630F40("SID_BLACKJACK_SURRENDER");
      strcpy(Destination, v9);
      *(_DWORD *)a3 = 5047;
      result = a3;
      break;
    default:
      result = (char *)sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1853);
      break;
  }
  return result;
}


//======================================================================
// sub_41D5A0
// entry 0041d5a0  size 673  status ok
//======================================================================

_DWORD *__stdcall sub_41D5A0(_DWORD *a1, int a2, __int16 a3, __int16 a4)
{
  __int16 v5; // [esp+Ch] [ebp-Ch]

  v5 = 0;
  switch ( a2 )
  {
    case 5043:
      if ( a3 < 19 )
      {
        if ( a3 < 17 )
        {
          if ( a3 < 15 )
          {
            if ( a3 < 13 )
              sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1886);
            else
              v5 = 3;
          }
          else
          {
            v5 = 2;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5044:
      if ( a3 < 17 )
      {
        if ( a3 < 13 )
        {
          if ( a3 == 12 )
          {
            v5 = 2;
          }
          else if ( a3 < 4 )
          {
            sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1928);
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5045:
      if ( a3 < 19 )
      {
        if ( a3 == 18 )
        {
          v5 = 1;
        }
        else if ( a3 < 12 )
        {
          sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1916);
        }
        else
        {
          v5 = 2;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5046:
      if ( a3 == 12 )
        v5 = 0;
      else
        v5 = 10 - a3 / 2 + 1;
      break;
    case 5047:
      if ( a3 < 17 )
      {
        switch ( a3 )
        {
          case 16:
            v5 = 1;
            break;
          case 15:
            v5 = 2;
            break;
          case 14:
            v5 = 3;
            break;
          default:
            sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1874);
            break;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5048:
      switch ( a3 )
      {
        case 12:
          v5 = 0;
          break;
        case 11:
          v5 = 1;
          break;
        case 10:
          v5 = 2;
          break;
        case 9:
          v5 = 3;
          break;
        case 8:
          v5 = 4;
          break;
        default:
          sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1900);
          break;
      }
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\blackjackstate.cpp", 1931);
      break;
  }
  *a1 = 14 * (__int16)(a4 - 2);
  a1[1] = 18 * v5;
  return a1;
}


//======================================================================
// sub_41D8A0
// entry 0041d8a0  size 169  status ok
//======================================================================

bool __thiscall sub_41D8A0(pairNode *this)
{
  char v2; // [esp+0h] [ebp-24h]
  bool v3; // [esp+4h] [ebp-20h]
  CImageDisplay *v4; // [esp+14h] [ebp-10h]
  int v5; // [esp+20h] [ebp-4h]

  v5 = *(_DWORD *)(dword_790324 + 1232);
  v2 = 0;
  if ( pairNode::raw_length(this) == v5 )
  {
    v4 = (CImageDisplay *)sub_419080((_DWORD *)dword_790324);
    v3 = CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3;
    if ( v3 && !*(_BYTE *)(sub_419080((_DWORD *)dword_790324) + 1184) )
      return 1;
  }
  return v2;
}


//======================================================================
// sub_41D950
// entry 0041d950  size 723  status ok
//======================================================================

int __thiscall sub_41D950(_QWORD *this, __int64 a2, int a3, int a4, int a5)
{
  int v5; // eax
  int result; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  __int64 v10; // [esp+0h] [ebp-5Ch]
  __int64 v11; // [esp+0h] [ebp-5Ch]
  _DWORD *v12; // [esp+8h] [ebp-54h]
  _BYTE v14[8]; // [esp+1Ch] [ebp-40h] BYREF
  __int64 v15; // [esp+24h] [ebp-38h]
  __int64 v16; // [esp+2Ch] [ebp-30h]
  __int64 v17; // [esp+34h] [ebp-28h]
  __int64 v18; // [esp+3Ch] [ebp-20h]
  double v19; // [esp+44h] [ebp-18h]
  __int64 v20; // [esp+4Ch] [ebp-10h]
  __int64 v21; // [esp+54h] [ebp-8h]

  v21 = *(this + 4 * (_DWORD)a2 + HIDWORD(a2) + 9);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v20 = v16;
  v19 = (double)a4 / (double)a5;
  v5 = sub_5DCB00(a2);
  result = sub_5D5A50(v5);
  if ( result < 1000000000 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v7 = sub_5DCB00(a2);
        sub_5D7540(v7);
        v18 = v21;
        sub_64C560(v19);
        if ( (int)v21 > 1000000000 )
          v18 = 1000000000;
        v8 = (_DWORD *)sub_64C5C0(
                         v14,
                         *((_DWORD *)this + 8 * a2 + 2 * HIDWORD(a2) + 18),
                         *((_DWORD *)this + 8 * a2 + 2 * HIDWORD(a2) + 19));
        v9 = v8[1];
        LODWORD(v20) = *v8;
        HIDWORD(v20) = v9;
        if ( (int)v20 >= 1000000000 )
          v20 = sub_64C8A0(1000000000, 0);
        v10 = v20;
        sub_5DCB00(a2);
        sub_5D5CF0(v10, HIDWORD(v10));
        v11 = v18;
        sub_5DCB00(a2);
        sub_5D5FB0(v11, HIDWORD(v11));
        return (*(int (__thiscall **)(_QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v20,
                 HIDWORD(v20),
                 a2,
                 HIDWORD(a2));
      }
      else if ( a3 == 2 )
      {
        sub_5DCB00(a2);
        return sub_5D5CF0(v21, HIDWORD(v21));
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 4 * a2 + 24) + 192))(
        *(_DWORD *)(dword_79032C + 4 * a2 + 24),
        a2,
        HIDWORD(a2));
      if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      v12 = (_DWORD *)(sub_5DCB00(a2) + 1192);
      --*v12;
      LODWORD(v18) = -(int)v21;
      HIDWORD(v18) = -HIDWORD(v21);
      sub_5DCB00(a2);
      sub_5D5FB0(-(int)v21, -HIDWORD(v21));
      v15 = sub_64C8A0(0, 0);
      return (*(int (__thiscall **)(_QWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 184))(
               this,
               v15,
               HIDWORD(v15),
               a2,
               HIDWORD(a2));
    }
  }
  return result;
}


//======================================================================
// sub_41DC30
// entry 0041dc30  size 104  status ok
//======================================================================

void __stdcall sub_41DC30(unsigned int a1, int a2)
{
  if ( dword_79032C && (!*(_BYTE *)(dword_790324 + 280 * a1 + 283) || *(char *)(dword_790324 + 280 * a1 + 273) != -1) )
    sub_40CD50((_DWORD **)dword_79032C, a1, a2);
}


//======================================================================
// sub_41DD40
// entry 0041dd40  size 57  status ok
//======================================================================

int __stdcall sub_41DD40(int a1)
{
  if ( (unsigned __int8)sub_5DA7B0(dword_790354) )
    return sub_41DF20(a1);
  else
    return sub_41DD80(a1);
}


//======================================================================
// sub_41DD80
// entry 0041dd80  size 405  status ok
//======================================================================

int __stdcall sub_41DD80(int a1)
{
  int v1; // eax
  double v3; // [esp+Ch] [ebp-38h]
  double v4; // [esp+1Ch] [ebp-28h]
  int v5; // [esp+30h] [ebp-14h]
  int v6; // [esp+34h] [ebp-10h]
  int i; // [esp+38h] [ebp-Ch]
  int v8; // [esp+3Ch] [ebp-8h]
  int v9; // [esp+40h] [ebp-4h]

  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 688))(dword_790354);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 692))(dword_790354);
  v1 = sub_5DCB00(a1);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 24))(v1);
  v6 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  if ( v6 < -4 )
    v6 = -1 - sub_62FBF0(5);
  v4 = (double)(v8 * (sub_62FBF0(5) + 1));
  v3 = (double)(v5 / (sub_62FBF0(5) + 1)) * v4;
  for ( i = (int)((double)(v5 / (sub_62FBF0(5) + 1)) * (double)(v8 * v6) + v3) / 3; i % 5; ++i )
    ;
  if ( i < v8 )
    i = v8;
  if ( i > v9 )
    i = v9;
  while ( !(unsigned __int8)sub_41E450(a1, i) )
    i -= 5;
  if ( i < v8 || i > v9 )
    sub_5E9F20((char)"theBet >= minBet && theBet <= maxBet", "..\\Casino\\caribbeanstudai.cpp", 55);
  return i;
}


//======================================================================
// sub_41DF20
// entry 0041df20  size 873  status ok
//======================================================================

int __stdcall sub_41DF20(int a1)
{
  int v1; // eax
  int v2; // esi
  int *v3; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  double v8; // [esp+8h] [ebp-64h]
  double v9; // [esp+14h] [ebp-58h]
  int v10; // [esp+20h] [ebp-4Ch]
  int v11; // [esp+24h] [ebp-48h]
  int v12; // [esp+28h] [ebp-44h]
  int v13; // [esp+2Ch] [ebp-40h]
  _BYTE v14[8]; // [esp+34h] [ebp-38h] BYREF
  _BYTE v15[8]; // [esp+3Ch] [ebp-30h] BYREF
  int v16; // [esp+44h] [ebp-28h]
  int v17; // [esp+48h] [ebp-24h]
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  int v20; // [esp+54h] [ebp-18h]
  int v21; // [esp+58h] [ebp-14h]
  int v22; // [esp+5Ch] [ebp-10h]
  int v23; // [esp+60h] [ebp-Ch]
  int v24; // [esp+64h] [ebp-8h]
  int v25; // [esp+68h] [ebp-4h]

  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 688))(dword_790354);
  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 692))(dword_790354);
  v13 = sub_5DCB00(a1);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 24))(v13);
  v1 = sub_5DCB00(a1);
  v21 = sub_5D5A50(v1);
  v24 = sub_5DA8E0(dword_790354);
  v25 = sub_5DAC90(dword_790354);
  v20 = *(_DWORD *)sub_5DAA20(v15);
  v18 = v19;
  v17 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  if ( v17 < -4 )
    v17 = -1 - sub_62FBF0(5);
  if ( v21 < 3 * v19 )
    sub_5E9F20((char)"bank >= minBet * 3", "..\\Casino\\caribbeanstudai.cpp", 76);
  if ( v21 < v23 )
    v22 = v21;
  else
    v22 = v23;
  if ( v24 < 4 )
  {
    if ( v24 )
    {
      if ( v21 < v20 )
      {
        if ( v20 - v21 > v22 )
        {
          v3 = (int *)sub_5DAC40(v14, a1);
          if ( (double)*v3 / (double)v20 >= 0.5 )
            v18 = v22 / (sub_62FBF0(3) + 1);
        }
        else
        {
          v2 = v20 - v21;
          v18 = v2 / (sub_62FBF0(5) + 1);
        }
      }
    }
    else if ( v21 < v20 && v20 - v21 <= v22 )
    {
      v18 = v19 + v20 - v21;
    }
    while ( v18 % 5 )
      ++v18;
    while ( !(unsigned __int8)sub_41E450(a1, v18) )
      v18 -= 5;
    if ( v18 < v19 || v18 > v23 )
      sub_5E9F20((char)"theBet >= minBet && theBet <= maxBet", "..\\Casino\\caribbeanstudai.cpp", 113);
    if ( v18 )
      return v18;
  }
  v12 = sub_5DCB00(a1);
  v11 = sub_5DCB00(a1);
  v5 = sub_62FBF0(5) + 1;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 24))(v11) / v5;
  v9 = (double)v10 * (double)(v19 * v17);
  v6 = sub_62FBF0(5) + 1;
  v8 = (double)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 24))(v12) / v6);
  v18 = (int)((double)(v19 * (sub_62FBF0(5) + 1)) * v8 + v9);
  v7 = sub_5DA8A0(dword_790354);
  if ( v24 > 2 * v7 / 3 )
    v18 /= 3;
  while ( v18 % 5 )
    --v18;
  if ( v18 < v19 )
    v18 = v19;
  if ( v18 > v23 )
    v18 = v23;
  while ( !(unsigned __int8)sub_41E450(a1, v18) )
    v18 -= 5;
  if ( v18 < v19 || v18 > v23 )
    sub_5E9F20((char)"theBet >= minBet && theBet <= maxBet", "..\\Casino\\caribbeanstudai.cpp", 137);
  return v18;
}


//======================================================================
// sub_41E290
// entry 0041e290  size 438  status ok
//======================================================================

bool __stdcall sub_41E290(int a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // [esp+4h] [ebp-20h]
  int i; // [esp+8h] [ebp-1Ch]
  _DWORD v6[5]; // [esp+Ch] [ebp-18h]
  __int16 v7; // [esp+20h] [ebp-4h]

  v4 = sub_462BA0(dword_790358 + 10 * a1 + 108, 5, 0);
  v7 = sub_4262E0(4, 4);
  if ( v4 > 1 )
    return 0;
  for ( i = 0; i < 5; ++i )
    v6[i] = sub_4630C0(dword_790358 + 10 * a1 + 108, i, 5);
  if ( v6[0] != 14 || v6[1] != 13 )
    return 1;
  if ( (int)sub_641280(v7) >= 2 && (int)sub_641280(v7) <= 12 )
  {
    v2 = sub_641280(v7);
    if ( sub_463A40(dword_790358 + 10 * a1 + 108, v2, 5) )
      return 0;
  }
  if ( (int)sub_641280(v7) >= 13
    && (sub_463A40(dword_790358 + 10 * a1 + 108, 11, 5) || sub_463A40(dword_790358 + 10 * a1 + 108, 12, 5)) )
  {
    return 0;
  }
  v3 = sub_641280(v7);
  return sub_463A40(dword_790358 + 10 * a1 + 108, v3, 5)
      || !sub_463A40(dword_790358 + 10 * a1 + 108, 12, 5)
      || sub_641280(v7) >= v6[3];
}


//======================================================================
// sub_41E450
// entry 0041e450  size 115  status ok
//======================================================================

int __stdcall sub_41E450(int a1, int a2)
{
  int v3; // [esp-8h] [ebp-2Ch]
  int v4; // [esp-4h] [ebp-28h]
  _BYTE v5[8]; // [esp+4h] [ebp-20h] BYREF
  __int64 v6; // [esp+Ch] [ebp-18h]
  __int64 v7; // [esp+14h] [ebp-10h]
  _DWORD v8[2]; // [esp+1Ch] [ebp-8h] BYREF

  v6 = sub_64C8A0(2 * a2, 0);
  v7 = sub_64C8A0(a2, 0);
  sub_64C5C0(v8, v6, HIDWORD(v6));
  v4 = v8[1];
  v3 = v8[0];
  sub_5DCB00(a1);
  sub_5D5A90(v5);
  return sub_64C7A0(v3, v4);
}


//======================================================================
// sub_41E4D0
// entry 0041e4d0  size 109  status ok
//======================================================================

char *__stdcall sub_41E4D0(int a1, int a2, char a3, char *Destination)
{
  const char *v4; // eax
  const char *v6; // eax

  if ( a3 )
  {
    v4 = (const char *)sub_630F40("SID_CARIBBEANSTUD_STRATEGY_SHOULDFOLD");
    return strcpy(Destination, v4);
  }
  else
  {
    if ( a2 <= 1 )
      v6 = (const char *)sub_630F40("SID_CARIBBEANSTUD_STRATEGY_ACEKING");
    else
      v6 = (const char *)sub_630F40("SID_CARIBBEANSTUD_STRATEGY_PAIRORHIGHER");
    return strcpy(Destination, v6);
  }
}


//======================================================================
// sub_41E570
// entry 0041e570  size 231  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_41E570(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CaribbeanStudDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 25) = 0;
  }
  for ( j = 0; j < 8; ++j )
    *((_DWORD *)this + j + 6) = 0;
  for ( k = 0; k < 4; ++k )
  {
    *((_DWORD *)this + k + 17) = 0;
    *((_DWORD *)this + k + 21) = 0;
  }
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  return this;
}


//======================================================================
// sub_41E660
// entry 0041e660  size 675  status ok
//======================================================================

void __thiscall sub_41E660(CNoTrackObject *this)
{
  int i; // [esp+80h] [ebp-10h]
  int j; // [esp+80h] [ebp-10h]
  int k; // [esp+80h] [ebp-10h]

  *(_DWORD *)this = &CaribbeanStudDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 25) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 25))(*((_DWORD *)this + i + 25), 1);
  }
  for ( j = 0; j < 8; ++j )
  {
    if ( *((_DWORD *)this + j + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 6))(*((_DWORD *)this + j + 6), 1);
  }
  for ( k = 0; k < 4; ++k )
  {
    if ( *((_DWORD *)this + k + 17) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 17))(*((_DWORD *)this + k + 17), 1);
    if ( *((_DWORD *)this + k + 21) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 21))(*((_DWORD *)this + k + 21), 1);
  }
  if ( *((_DWORD *)this + 14) )
    (***((void (__thiscall ****)(_DWORD, int))this + 14))(*((_DWORD *)this + 14), 1);
  if ( *((_DWORD *)this + 30) )
    (***((void (__thiscall ****)(_DWORD, int))this + 30))(*((_DWORD *)this + 30), 1);
  if ( *((_DWORD *)this + 31) )
    (***((void (__thiscall ****)(_DWORD, int))this + 31))(*((_DWORD *)this + 31), 1);
  if ( *((_DWORD *)this + 15) )
    (***((void (__thiscall ****)(_DWORD, int))this + 15))(*((_DWORD *)this + 15), 1);
  if ( *((_DWORD *)this + 16) )
    (***((void (__thiscall ****)(_DWORD, int))this + 16))(*((_DWORD *)this + 16), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_41E910
// entry 0041e910  size 1934  status ok
//======================================================================

int __thiscall sub_41E910(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+0h] [ebp-F8h]
  int v5; // [esp+4h] [ebp-F4h]
  int v6; // [esp+4h] [ebp-F4h]
  int v7; // [esp+8h] [ebp-F0h]
  _DWORD *v8; // [esp+Ch] [ebp-ECh]
  int v9; // [esp+10h] [ebp-E8h]
  _DWORD *v10; // [esp+14h] [ebp-E4h]
  int v11; // [esp+18h] [ebp-E0h]
  _AFX_OLE_STATE *v12; // [esp+1Ch] [ebp-DCh]
  int v13; // [esp+20h] [ebp-D8h]
  int v14; // [esp+24h] [ebp-D4h]
  void *v16; // [esp+30h] [ebp-C8h]
  void *v17; // [esp+38h] [ebp-C0h]
  _DWORD *v18; // [esp+40h] [ebp-B8h]
  void *v19; // [esp+48h] [ebp-B0h]
  _DWORD *v20; // [esp+50h] [ebp-A8h]
  void *v21; // [esp+58h] [ebp-A0h]
  _AFX_OLE_STATE *v22; // [esp+60h] [ebp-98h]
  void *v23; // [esp+68h] [ebp-90h]
  void *v24; // [esp+70h] [ebp-88h]
  int v25; // [esp+78h] [ebp-80h]
  _DWORD v26[7]; // [esp+7Ch] [ebp-7Ch]
  _DWORD v27[4]; // [esp+98h] [ebp-60h]
  _DWORD v28[8]; // [esp+A8h] [ebp-50h]
  int v29; // [esp+C8h] [ebp-30h]
  _DWORD v30[7]; // [esp+CCh] [ebp-2Ch]
  int i; // [esp+E8h] [ebp-10h]
  int v32; // [esp+F4h] [ebp-4h]

  v28[0] = 2;
  v28[1] = 3;
  v28[2] = 4;
  v28[3] = 5;
  v28[4] = 0;
  v28[5] = 1;
  v28[6] = 6;
  v28[7] = 7;
  v27[0] = 3213016;
  v27[1] = 3213017;
  v27[2] = 3213015;
  v27[3] = 3213018;
  v29 = 360;
  v30[0] = 245;
  v30[1] = 239;
  v30[2] = 244;
  v30[3] = 474;
  v30[4] = 193;
  v30[5] = 117;
  v30[6] = 194;
  v25 = 337;
  v26[0] = 267;
  v26[1] = 240;
  v26[2] = 267;
  v26[3] = 449;
  v26[4] = 216;
  v26[5] = 118;
  v26[6] = 217;
  v1 = sub_630F40("SID_CARIBBEANSTUD");
  sub_5F38B0(v1);
  sub_5F1AD0(3213000);
  sub_5F2BA0(3213003);
  sub_5F2BA0(3213004);
  for ( i = 0; i < 5; ++i )
  {
    v24 = operator new(0x24u);
    v32 = 0;
    if ( v24 )
      v14 = sub_41FD80(v24);
    else
      v14 = 0;
    *(this + i + 1) = v14;
    sub_41FEF0(i);
    v23 = operator new(0x1D0u);
    v32 = 1;
    if ( v23 )
    {
      sub_5EC5A0(v23);
      v13 = v2;
    }
    else
    {
      v13 = 0;
    }
    v32 = -1;
    *(this + i + 25) = v13;
    sub_5EC8F0(&Source, 56, 200, 20, 0, 0, 81, 48, -1);
  }
  for ( i = 0; i < 8; ++i )
  {
    v22 = (_AFX_OLE_STATE *)operator new(0xAE4u);
    v32 = 2;
    if ( v22 )
      v12 = _AFX_OLE_STATE::_AFX_OLE_STATE(v22);
    else
      v12 = 0;
    v32 = -1;
    *(this + i + 6) = v12;
    *(_DWORD *)(*(this + i + 6) + 2784) = i;
    sub_5EAE80(3213006, 0, 0, 2, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 6) + 176))(*(this + i + 6), v28[i]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode((CPane *)*(this + i + 6), *(_DWORD *)(dword_790358 + 4 * i + 8));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 6) + 116))(*(this + i + 6));
  }
  for ( i = 0; i < 4; ++i )
  {
    v21 = operator new(0x1DCu);
    v32 = 3;
    if ( v21 )
      v11 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(
              v4,
              v5);
    else
      v11 = 0;
    v32 = -1;
    *(this + i + 17) = v11;
    sub_5EAE80(v27[i], v26[2 * i - 1], v26[2 * i], 1, -1);
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 17), (struct CPaneDivider *)i);
    sub_602EB0(*(this + i + 17));
    *(_DWORD *)(*(this + i + 17) + 376) = 3;
    *(_BYTE *)(*(this + i + 17) + 437) = 1;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 17) + 116))(*(this + i + 17));
    v20 = operator new(0x184u);
    v32 = 4;
    if ( v20 )
    {
      sub_5F5BF0(v20);
      *v20 = &CaribbeanStudJackpotCoinBet::`vftable';
      v10 = v20;
    }
    else
    {
      v10 = 0;
    }
    v32 = -1;
    *(this + i + 21) = v10;
    sub_5EAE80(3213019, v30[2 * i - 1], v30[2 * i], 2, i);
  }
  v19 = operator new(0x48u);
  v32 = 5;
  if ( v19 )
    v9 = sub_420BB0(v19);
  else
    v9 = 0;
  v32 = -1;
  *(this + 15) = v9;
  sub_420D90(v4, v5);
  sub_421070(*(this + 15));
  v18 = operator new(0x198u);
  v32 = 6;
  if ( v18 )
  {
    sub_5CD6A0(v18);
    *v18 = &CaribbeanStudDealerDisplay::`vftable';
    v8 = v18;
  }
  else
  {
    v8 = 0;
  }
  v32 = -1;
  *(this + 14) = v8;
  sub_5EAE80(0, 0, 0, 0, -1);
  v17 = operator new(0x184u);
  v32 = 7;
  if ( v17 )
    v7 = sub_5F5BF0(v17);
  else
    v7 = 0;
  v32 = -1;
  *(this + 30) = v7;
  sub_5EAE80(5026, 0, 0, 50, -1);
  v16 = operator new(0x184u);
  v32 = 8;
  if ( v16 )
    v6 = sub_5F5BF0(v16);
  else
    v6 = 0;
  v32 = -1;
  *(this + 31) = v6;
  return sub_5EAE80(5027, 0, 0, 51, -1);
}


//======================================================================
// sub_41F0A0
// entry 0041f0a0  size 262  status ok
//======================================================================

int sub_41F0A0()
{
  char v1; // [esp+0h] [ebp-20h]
  CImageDisplay *v2; // [esp+18h] [ebp-8h]
  unsigned int v3; // [esp+1Ch] [ebp-4h]

  if ( sub_426420(dword_790358) != -1
    && (v3 = sub_426420(dword_790358), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_426670(v3)) )
  {
    return sub_5F2B20(3213002, 1);
  }
  else
  {
    return sub_5F2BA0(3213002);
  }
}


//======================================================================
// sub_41F1B0
// entry 0041f1b0  size 1268  status ok
//======================================================================

int __thiscall sub_41F1B0(_DWORD **this)
{
  int v1; // eax
  const char *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int result; // eax
  int j; // [esp+1Ch] [ebp-54h]
  int v18; // [esp+20h] [ebp-50h]
  int v19; // [esp+20h] [ebp-50h]
  __int64 v20; // [esp+24h] [ebp-4Ch] BYREF
  int v21; // [esp+2Ch] [ebp-44h]
  int v22; // [esp+30h] [ebp-40h]
  char Destination[52]; // [esp+34h] [ebp-3Ch] BYREF
  int i; // [esp+6Ch] [ebp-4h]

  v20 = sub_64C8A0(0, 0);
  v22 = 0;
  sub_41F0A0();
  for ( i = 0; i < 5; ++i )
  {
    sub_420110(*(this + i + 1));
    if ( i != 4
      && *(_BYTE *)(sub_5DCB00(i) + 1184)
      && (unsigned __int8)sub_5DA7B0(dword_790354)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_790354 + 708))(dword_790354, i) )
    {
      v21 = 2 * i;
      for ( j = 0; j < 2; ++j )
      {
        if ( !(*(this + j + v21 + 6))[120 * i + 95] )
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + j + v21 + 6) + 184))(*(this + j + v21 + 6), i, 0);
      }
    }
    if ( *(_BYTE *)(i + dword_790358 + 169) )
    {
      v1 = sub_462BA0(dword_790358 + 10 * i + 108, 5, 0);
      sub_462F40(v1, Destination);
      if ( i == 4 )
      {
        if ( (unsigned __int8)sub_426E80(dword_790358) )
          v2 = (const char *)sub_630F40("SID_CARIBBEANSTUD_QUALIFIES");
        else
          v2 = (const char *)sub_630F40("SID_CARIBBEANSTUD_DOESNOTQUALIFY");
        strcat(Destination, v2);
      }
      v3 = sub_41F8E0(i, 0);
      v4 = sub_41F8E0(i, 4) + 65;
      v5 = (v4 - sub_41F8E0(i, 0)) / 2 + v3;
      v22 = v5 - sub_5F5550(*(this + i + 25)) / 2;
      if ( i == 2 || i == 3 )
      {
        v6 = sub_41F920(i, 0);
        v18 = v6 + sub_5F5590((*(this + i + 1))[2]) + 6;
      }
      else
      {
        v7 = sub_41F920(i, 0);
        v8 = sub_5F5590((*(this + i + 1))[2]);
        v18 = v8 + v7 - (i != 4 ? -1 : 83);
      }
      (*(void (__thiscall **)(_DWORD, char *))(**(this + i + 25) + 180))(*(this + i + 25), Destination);
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + i + 25) + 68))(*(this + i + 25), v22, v18);
      (*(void (__thiscall **)(_DWORD))(**(this + i + 25) + 116))(*(this + i + 25));
    }
    else if ( i == 4 )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + 29) + 112))(*(this + 29));
    }
    else
    {
      (*(void (__thiscall **)(int, int, __int64 *))(*(_DWORD *)dword_790354 + 636))(dword_790354, i, &v20);
      if ( !sub_426370(i) || (_DWORD)v20 )
      {
        (*(void (__thiscall **)(_DWORD))(**(this + i + 25) + 112))(*(this + i + 25));
      }
      else
      {
        v9 = sub_41F8E0(i, 0);
        v10 = sub_41F8E0(i, 4) + 65;
        v11 = (v10 - sub_41F8E0(i, 0)) / 2 + v9;
        v22 = v11 - sub_5F5550(*(this + i + 25)) / 2;
        if ( i == 2 || i == 3 )
        {
          v12 = sub_41F920(i, 0);
          v19 = v12 + sub_5F5590((*(this + i + 1))[2]) + 6;
        }
        else
        {
          v13 = sub_41F920(i, 0);
          v19 = sub_5F5590((*(this + i + 1))[2]) + v13;
        }
        v14 = sub_630F40("SID_CARIBBEANSTUD_FOLD");
        (*(void (__thiscall **)(_DWORD, int))(**(this + i + 25) + 180))(*(this + i + 25), v14);
        (*(void (__thiscall **)(_DWORD, int, int))(**(this + i + 25) + 68))(*(this + i + 25), v22, v19);
        (*(void (__thiscall **)(_DWORD))(**(this + i + 25) + 116))(*(this + i + 25));
      }
    }
  }
  result = sub_5DA7B0(dword_790354);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 752))(dword_790354);
  return result;
}


//======================================================================
// sub_41F6B0
// entry 0041f6b0  size 100  status ok
//======================================================================

void __thiscall sub_41F6B0(_DWORD **this, int a2, int a3)
{
  int v3; // eax

  if ( a2 != 4 )
  {
    if ( *(this + a3 + 6) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + a3 + 6) + 184))(*(this + a3 + 6), a2, 0);
      v3 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, v3);
    }
  }
}


//======================================================================
// sub_41F720
// entry 0041f720  size 197  status ok
//======================================================================

int __thiscall sub_41F720(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-10h]
  __int16 v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v9 = *(_DWORD *)(*(this + a2 + 1) + 4 * a3 + 8);
  v8 = sub_4262E0(a2, a3);
  v3 = sub_41F7F0(a2);
  sub_5EAF00(v3);
  v4 = sub_41F830(a2, v8, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v4);
  v7 = sub_41F920(a2, a3);
  v5 = sub_41F8E0(a2, a3);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(v9, v5, v7);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, a3 + 5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
}


//======================================================================
// sub_41F7F0
// entry 0041f7f0  size 57  status ok
//======================================================================

int __stdcall sub_41F7F0(int a1)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 3215002;
  v2[1] = 3215003;
  v2[2] = 3215001;
  v2[3] = 3215004;
  v2[4] = 3215005;
  return v2[a1];
}


//======================================================================
// sub_41F830
// entry 0041f830  size 173  status ok
//======================================================================

int __stdcall sub_41F830(int a1, __int16 a2, int a3)
{
  int v4; // esi
  _DWORD v5[5]; // [esp+Ch] [ebp-14h]

  v5[0] = -1;
  v5[1] = 1;
  v5[2] = 2;
  v5[3] = 3;
  v5[4] = 0;
  if ( !*(_BYTE *)(a1 + dword_790358 + 169) && (a1 != 4 || a3 != 4) )
    return 53;
  if ( sub_641280(a2) == 14 )
    return 13 * v5[sub_641290(a2)];
  v4 = 13 * v5[sub_641290(a2)];
  return v4 + sub_641280(a2) - 1;
}


//======================================================================
// sub_41F8E0
// entry 0041f8e0  size 63  status ok
//======================================================================

int __stdcall sub_41F8E0(int a1, int a2)
{
  _DWORD v3[5]; // [esp+4h] [ebp-14h]

  v3[0] = 339;
  v3[1] = 187;
  v3[2] = 469;
  v3[3] = 50;
  v3[4] = 272;
  return v3[a1] + 12 * a2;
}


//======================================================================
// sub_41F920
// entry 0041f920  size 60  status ok
//======================================================================

int __stdcall sub_41F920(int a1, int a2)
{
  _DWORD v3[5]; // [esp+4h] [ebp-14h]

  v3[0] = 209;
  v3[1] = 211;
  v3[2] = 158;
  v3[3] = 158;
  v3[4] = 118;
  return v3[a1] - 10;
}


//======================================================================
// sub_41F960
// entry 0041f960  size 43  status ok
//======================================================================

int __thiscall sub_41F960(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + a2 + 17) + 204))(*(this + a2 + 17), this);
}


//======================================================================
// sub_41F990
// entry 0041f990  size 43  status ok
//======================================================================

int __thiscall sub_41F990(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + a2 + 17) + 208))(*(this + a2 + 17), this);
}


//======================================================================
// sub_41F9C0
// entry 0041f9c0  size 251  status ok
//======================================================================

int __thiscall sub_41F9C0(_DWORD **this, int a2)
{
  int v3; // [esp+14h] [ebp-1Ch]

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + a2 + 21) + 176))(*(this + a2 + 21), 0);
  (*(void (__thiscall **)(_DWORD))(**(this + a2 + 21) + 116))(*(this + a2 + 21));
  if ( operator new(0x20u) )
    v3 = sub_600F30(3, 0);
  else
    v3 = 0;
  sub_5F5D50(v3);
  return (*(int (__cdecl **)(int))(*(_DWORD *)dword_162EE84 + 128))(3213000);
}


//======================================================================
// sub_41FAC0
// entry 0041fac0  size 91  status ok
//======================================================================

int __thiscall sub_41FAC0(_DWORD **this, int a2)
{
  sub_5F5D50(0);
  (*(void (__thiscall **)(_DWORD))(**(this + a2 + 21) + 112))(*(this + a2 + 21));
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + a2 + 17) + 176))(*(this + a2 + 17), 0);
}


//======================================================================
// sub_41FB20
// entry 0041fb20  size 57  status ok
//======================================================================

int __thiscall sub_41FB20(_DWORD **this)
{
  sub_41F960(this, *(_DWORD *)(dword_790358 + 160));
  return sub_5DB7D0(0, 175);
}


//======================================================================
// sub_41FB60
// entry 0041fb60  size 227  status ok
//======================================================================

int __thiscall sub_41FB60(int this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  sub_41F1B0((_DWORD **)this);
  if ( !*(_DWORD *)(this + 64) )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v2 = sub_421ED0(v4);
    else
      v2 = 0;
    *(_DWORD *)(this + 64) = v2;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 64) + 60))(*(_DWORD *)(this + 64));
    sub_5F7340(5, 180);
  }
  sub_5F85D0(*(_DWORD *)(this + 64));
  sub_5F2B20(3213003, 1);
  return sub_5F2B20(3213004, 1);
}


//======================================================================
// sub_41FC50
// entry 0041fc50  size 73  status ok
//======================================================================

int __thiscall sub_41FC50(_DWORD *this)
{
  int result; // eax

  sub_5F2BA0(3213003);
  sub_5F2BA0(3213004);
  result = (int)this;
  if ( *(this + 16) )
  {
    result = sub_5F8990(*(this + 16));
    *(this + 16) = 0;
  }
  return result;
}


//======================================================================
// sub_41FCA0
// entry 0041fca0  size 121  status ok
//======================================================================

int __thiscall sub_41FCA0(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_790354)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_790354 + 724))(dword_790354, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_425DA0(dword_790358) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_422560(v2);
    }
  }
  return result;
}


//======================================================================
// sub_41FD80
// entry 0041fd80  size 93  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_41FD80(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CaribbeanStudPlayerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 2) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  return this;
}


//======================================================================
// sub_41FDE0
// entry 0041fde0  size 257  status ok
//======================================================================

void __thiscall sub_41FDE0(CNoTrackObject *this)
{
  int i; // [esp+2Ch] [ebp-10h]

  *(_DWORD *)this = &CaribbeanStudPlayerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  if ( *((_DWORD *)this + 7) )
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
  if ( *((_DWORD *)this + 8) )
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_41FEF0
// entry 0041fef0  size 532  status ok
//======================================================================

int __thiscall sub_41FEF0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-78h]
  int v7; // [esp+8h] [ebp-74h]
  int v8; // [esp+Ch] [ebp-70h]
  void *v10; // [esp+14h] [ebp-68h]
  void *v11; // [esp+1Ch] [ebp-60h]
  void *v12; // [esp+24h] [ebp-58h]
  int v13; // [esp+2Ch] [ebp-50h]
  _DWORD v14[7]; // [esp+30h] [ebp-4Ch]
  int i; // [esp+4Ch] [ebp-30h]
  int v16; // [esp+50h] [ebp-2Ch]
  _DWORD v17[7]; // [esp+54h] [ebp-28h]
  int v18; // [esp+78h] [ebp-4h]

  v13 = 308;
  v14[0] = 283;
  v14[1] = 266;
  v14[2] = 286;
  v14[3] = 414;
  v14[4] = 242;
  v14[5] = 132;
  v14[6] = 231;
  v16 = 303;
  v17[0] = 340;
  v17[1] = 246;
  v17[2] = 379;
  v17[3] = 441;
  v17[4] = 287;
  v17[5] = 35;
  v17[6] = 316;
  *(this + 1) = a2;
  for ( i = 0; i < 5; ++i )
  {
    v12 = operator new(0x178u);
    v18 = 0;
    if ( v12 )
    {
      sub_5EAAF0(v12);
      v8 = v2;
    }
    else
    {
      v8 = 0;
    }
    v18 = -1;
    *(this + i + 2) = v8;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 64))(*(this + i + 2));
  }
  v11 = operator new(0x178u);
  v18 = 1;
  if ( v11 )
  {
    sub_5EAAF0(v11);
    v7 = v3;
  }
  else
  {
    v7 = 0;
  }
  v18 = -1;
  *(this + 7) = v7;
  sub_5EAE80(5042, v14[2 * *(this + 1) - 1], v14[2 * *(this + 1)], 80, -1);
  v10 = operator new(0x178u);
  v18 = 2;
  if ( v10 )
  {
    sub_5EAAF0(v10);
    v6 = v4;
  }
  else
  {
    v6 = 0;
  }
  v18 = -1;
  *(this + 8) = v6;
  return sub_5EAE80(5042, v17[2 * *(this + 1) - 1], v17[2 * *(this + 1)], 80, -1);
}


//======================================================================
// sub_420110
// entry 00420110  size 961  status ok
//======================================================================

int __thiscall sub_420110(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // [esp-4h] [ebp-28h]
  int v5; // [esp-4h] [ebp-28h]
  unsigned int v7; // [esp+14h] [ebp-10h]
  unsigned int v8; // [esp+18h] [ebp-Ch]
  int i; // [esp+20h] [ebp-4h]
  int j; // [esp+20h] [ebp-4h]

  v7 = *(_DWORD *)(dword_790358 + 4 * *(_DWORD *)(this + 4) + 176);
  v8 = *(_DWORD *)(dword_790358 + 4 * *(_DWORD *)(this + 4) + 192);
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
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
  if ( *(_BYTE *)(dword_790358 + *(_DWORD *)(this + 4) + 169) && sub_426370(*(_DWORD *)(this + 4)) == 5 )
    sub_641E20(dword_790358 + 10 * *(_DWORD *)(this + 4) + 108, 5);
  if ( *(_DWORD *)(this + 4) == 4 || *(_DWORD *)(dword_790358 + 4 * *(_DWORD *)(this + 4) + 176) != 4 )
  {
    for ( j = 0; j < 5; ++j )
    {
      if ( (unsigned __int16)sub_4262E0(*(_DWORD *)(this + 4), j) )
        sub_41F720((_DWORD *)dword_790360, *(_DWORD *)(this + 4), j);
    }
  }
  result = this;
  if ( *(_DWORD *)(this + 4) != 4 )
  {
    if ( (unsigned __int8)sub_4272E0(*(_DWORD *)(this + 4)) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790360 + 4 * *(_DWORD *)(this + 4) + 68) + 176))(
        *(_DWORD *)(dword_790360 + 4 * *(_DWORD *)(this + 4) + 68),
        1);
    else
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 4 * *(_DWORD *)(this + 4) + 68) + 176))(
        *(_DWORD *)(dword_790360 + 4 * *(_DWORD *)(this + 4) + 68),
        0);
    if ( v7 >= 4 )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
    }
    else
    {
      v4 = sub_41F920(*(_DWORD *)(this + 4), 0) + 45;
      v2 = sub_41F8E0(*(_DWORD *)(this + 4), 0);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), v2, v4);
      switch ( v7 )
      {
        case 0u:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 176))(*(_DWORD *)(this + 28), 1);
          break;
        case 1u:
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 28) + 176))(*(_DWORD *)(this + 28), 0);
          break;
        case 2u:
        case 3u:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 176))(*(_DWORD *)(this + 28), 3);
          break;
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
    }
    if ( v8 >= 4 )
    {
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 112))(*(_DWORD *)(this + 32));
    }
    else
    {
      v5 = sub_41F920(*(_DWORD *)(this + 4), 0) + 85;
      v3 = sub_41F8E0(*(_DWORD *)(this + 4), 0);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), v3, v5);
      switch ( v8 )
      {
        case 0u:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 176))(*(_DWORD *)(this + 32), 1);
          break;
        case 1u:
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 32) + 176))(*(_DWORD *)(this + 32), 0);
          break;
        case 2u:
        case 3u:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 176))(*(_DWORD *)(this + 32), 3);
          break;
      }
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 116))(*(_DWORD *)(this + 32));
    }
  }
  return result;
}


//======================================================================
// sub_420500
// entry 00420500  size 391  status ok
//======================================================================

int __stdcall sub_420500(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790360;
  if ( *(_DWORD *)(dword_790360 + 124) )
  {
    sub_5EAF00(5027);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 124) + 176))(
      *(_DWORD *)(dword_790360 + 124),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 124) + 116))(*(_DWORD *)(dword_790360 + 124));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790360 + 120) )
  {
    sub_5EAF00(5026);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 120) + 176))(
      *(_DWORD *)(dword_790360 + 120),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 120) + 116))(*(_DWORD *)(dword_790360 + 120));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_420690
// entry 00420690  size 339  status ok
//======================================================================

int __stdcall sub_420690(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790360;
  if ( *(_DWORD *)(dword_790360 + 124) )
  {
    sub_5EAF00(5029);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 124) + 176))(
      *(_DWORD *)(dword_790360 + 124),
      0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790360 + 120) )
  {
    sub_5EAF00(5028);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 120) + 176))(
      *(_DWORD *)(dword_790360 + 120),
      0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_4207F0
// entry 004207f0  size 339  status ok
//======================================================================

int __stdcall sub_4207F0(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790360;
  if ( *(_DWORD *)(dword_790360 + 124) )
  {
    sub_5EAF00(5037);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 124) + 176))(
      *(_DWORD *)(dword_790360 + 124),
      0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790360 + 120) )
  {
    sub_5EAF00(5036);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 120) + 176))(
      *(_DWORD *)(dword_790360 + 120),
      0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_420990
// entry 00420990  size 16  status ok
//======================================================================

int sub_420990()
{
  return 3213007;
}


//======================================================================
// sub_4209A0
// entry 004209a0  size 84  status ok
//======================================================================

int __thiscall sub_4209A0(_DWORD *this, int a2, int a3)
{
  _DWORD v4[8]; // [esp+4h] [ebp-20h]

  v4[0] = 358;
  v4[1] = 368;
  v4[2] = 227;
  v4[3] = 215;
  v4[4] = 473;
  v4[5] = 506;
  v4[6] = 98;
  v4[7] = 67;
  return v4[*(this + 696)];
}


//======================================================================
// sub_420A00
// entry 00420a00  size 84  status ok
//======================================================================

int __thiscall sub_420A00(_DWORD *this, int a2, int a3)
{
  _DWORD v4[8]; // [esp+4h] [ebp-20h]

  v4[0] = 295;
  v4[1] = 338;
  v4[2] = 295;
  v4[3] = 337;
  v4[4] = 242;
  v4[5] = 274;
  v4[6] = 242;
  v4[7] = 275;
  return v4[*(this + 696)];
}


//======================================================================
// sub_420A60
// entry 00420a60  size 87  status ok
//======================================================================

int __thiscall sub_420A60(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_4209A0(this, a2, a3);
  if ( sub_62FBF0(2) )
    return v4 - sub_62FBF0(3);
  else
    return v4 + sub_62FBF0(3);
}


//======================================================================
// sub_420AC0
// entry 00420ac0  size 87  status ok
//======================================================================

int __thiscall sub_420AC0(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_420A00(this, a2, a3);
  if ( sub_62FBF0(2) )
    return v4 - sub_62FBF0(3);
  else
    return v4 + sub_62FBF0(3);
}


//======================================================================
// sub_420B40
// entry 00420b40  size 32  status ok
//======================================================================

int __thiscall sub_420B40(_DWORD *this, int a2, int a3)
{
  return sub_420A00(this, a2, a3) - 15;
}


//======================================================================
// sub_420B60
// entry 00420b60  size 65  status ok
//======================================================================

int __thiscall sub_420B60(CMFCToolBarsCustomizeDialog *this)
{
  int result; // eax
  int v2; // eax

  result = CMFCToolBarsCustomizeDialog::GetFlags(this);
  if ( result == 3 )
  {
    v2 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790360 + 4 * v2 + 68) + 176))(
             *(_DWORD *)(dword_790360 + 4 * v2 + 68),
             1);
  }
  return result;
}


//======================================================================
// sub_420BB0
// entry 00420bb0  size 133  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_420BB0(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CaribbeanStudJackpotDisplay::`vftable';
  *((_DWORD *)this + 1) = 0;
  for ( i = 0; i < 3; ++i )
    *((_DWORD *)this + i + 2) = 0;
  for ( j = 0; j < 12; ++j )
    *((_DWORD *)this + j + 5) = 0;
  *((_DWORD *)this + 17) = 0;
  return this;
}


//======================================================================
// sub_420C40
// entry 00420c40  size 334  status ok
//======================================================================

void __thiscall sub_420C40(CNoTrackObject *this)
{
  int i; // [esp+38h] [ebp-10h]
  int j; // [esp+38h] [ebp-10h]

  *(_DWORD *)this = &CaribbeanStudJackpotDisplay::`vftable';
  if ( *((_DWORD *)this + 1) )
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  for ( j = 0; j < 12; ++j )
  {
    if ( *((_DWORD *)this + j + 5) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 5))(*((_DWORD *)this + j + 5), 1);
  }
  if ( *((_DWORD *)this + 17) )
    (***((void (__thiscall ****)(_DWORD, int))this + 17))(*((_DWORD *)this + 17), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_420D90
// entry 00420d90  size 734  status ok
//======================================================================

int __thiscall sub_420D90(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-8Ch]
  int v6; // [esp+8h] [ebp-88h]
  int v7; // [esp+Ch] [ebp-84h]
  int v8; // [esp+10h] [ebp-80h]
  int v9; // [esp+14h] [ebp-7Ch]
  void *v11; // [esp+1Ch] [ebp-74h]
  void *v12; // [esp+24h] [ebp-6Ch]
  void *v13; // [esp+2Ch] [ebp-64h]
  void *v14; // [esp+34h] [ebp-5Ch]
  void *v15; // [esp+3Ch] [ebp-54h]
  _DWORD v16[3]; // [esp+44h] [ebp-4Ch]
  int i; // [esp+50h] [ebp-40h]
  _DWORD v18[6]; // [esp+54h] [ebp-3Ch]
  int v19; // [esp+6Ch] [ebp-24h]
  int v20; // [esp+70h] [ebp-20h]
  int v21; // [esp+74h] [ebp-1Ch]
  int v22; // [esp+78h] [ebp-18h]
  int v23; // [esp+7Ch] [ebp-14h]
  int v24; // [esp+80h] [ebp-10h]
  int v25; // [esp+8Ch] [ebp-4h]

  v18[0] = 146;
  v18[1] = 136;
  v18[2] = 125;
  v18[3] = 113;
  v18[4] = 102;
  v18[5] = 91;
  v19 = 79;
  v20 = 68;
  v21 = 57;
  v22 = 45;
  v23 = 34;
  v24 = 23;
  v16[0] = 118;
  v16[1] = 84;
  v16[2] = 48;
  v15 = operator new(0x178u);
  v25 = 0;
  if ( v15 )
  {
    sub_5EAAF0(v15);
    v9 = v1;
  }
  else
  {
    v9 = 0;
  }
  v25 = -1;
  *(this + 1) = v9;
  sub_5EAE80(3213020, v19, 41, 1, -1);
  for ( i = 0; i < 3; ++i )
  {
    v14 = operator new(0x178u);
    v25 = 1;
    if ( v14 )
    {
      sub_5EAAF0(v14);
      v8 = v2;
    }
    else
    {
      v8 = 0;
    }
    v25 = -1;
    *(this + i + 2) = v8;
    sub_5EAE80(3213021, v16[i], 45, 1, -1);
  }
  for ( i = 0; i < 12; ++i )
  {
    v13 = operator new(0x178u);
    v25 = 2;
    if ( v13 )
    {
      sub_5EAAF0(v13);
      v7 = v3;
    }
    else
    {
      v7 = 0;
    }
    v25 = -1;
    *(this + i + 5) = v7;
    sub_5EAE80(3213022, v18[i], 43, 1, -1);
  }
  v12 = operator new(0x188u);
  v25 = 3;
  if ( v12 )
    v6 = sub_4212A0();
  else
    v6 = 0;
  v25 = -1;
  *(this + 17) = v6;
  sub_5EAE80(3213025, 155, 46, 1, -1);
  v11 = operator new(0x1Cu);
  v25 = 4;
  if ( v11 )
    v5 = sub_600A70(0);
  else
    v5 = 0;
  v25 = -1;
  return sub_5F5D50(v5);
}


//======================================================================
// sub_421070
// entry 00421070  size 558  status ok
//======================================================================

int __thiscall sub_421070(_DWORD **this)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-34h]
  int v7; // [esp+4h] [ebp-30h]
  int Value; // [esp+Ch] [ebp-28h]
  signed int v10; // [esp+10h] [ebp-24h]
  char Buffer[16]; // [esp+14h] [ebp-20h] BYREF
  char String[4]; // [esp+28h] [ebp-Ch] BYREF
  int i; // [esp+2Ch] [ebp-8h]
  int v14; // [esp+30h] [ebp-4h]

  HIBYTE(v10) = 0;
  v14 = 0;
  Value = sub_427560(dword_790358);
  String[0] = 0;
  String[1] = 0;
  if ( (int)sub_62FBF0(4) < 2 )
  {
    v1 = sub_62FBF0(3);
    (*(void (__thiscall **)(_DWORD, int))(**(this + 1) + 176))(*(this + 1), v1);
  }
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 116))(*(this + 1));
  Buffer[0] = 0;
  itoa(Value, Buffer, 10);
  v10 = strlen(Buffer);
  if ( sub_62FBF0(2) )
  {
    for ( i = 0; i < 3; ++i )
    {
      v2 = sub_62FBF0(3);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 2) + 176))(*(this + i + 2), v2);
    }
  }
  (*(void (__thiscall **)(_DWORD))(**(this + 2) + 116))(*(this + 2));
  if ( v10 <= 6 )
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 112))(*(this + 3));
  else
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 116))(*(this + 3));
  v7 = 0;
  if ( v10 <= 9 )
    result = (*(int (__thiscall **)(_DWORD))(**(this + 4) + 112))(*(this + 4));
  else
    result = (*(int (__thiscall **)(_DWORD))(**(this + 4) + 116))(*(this + 4));
  v6 = 0;
  for ( i = v10 - 1; i > -1; --i )
  {
    String[0] = Buffer[i];
    v4 = sub_62FBF0(3);
    sub_5EAF00(v4 + 3213022);
    v5 = atoi(String);
    (*(void (__thiscall **)(_DWORD, int))(**(this + v14 + 5) + 176))(*(this + v14 + 5), v5);
    result = (*(int (__thiscall **)(_DWORD, int, int))(**(this + v14 + 5) + 116))(*(this + v14 + 5), v6, v7);
    ++v14;
  }
  return result;
}


//======================================================================
// sub_4212A0
// entry 004212a0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_4212A0(_DWORD *this)
{
  sub_5F5BF0(this);
  *this = &CaribbeanStudJackpotMiniDigits::`vftable';
  *(this + 97) = sub_62FBF0(3) + 3213025;
  return this;
}


//======================================================================
// sub_421310
// entry 00421310  size 128  status ok
//======================================================================

int __thiscall sub_421310(CMFCToolBarsCustomizeDialog *this)
{
  int result; // eax

  if ( (int)CMFCToolBarsCustomizeDialog::GetFlags(this) % 2 )
  {
    sub_5EAF00(*((_DWORD *)this + 97));
    if ( (int)++*((_DWORD *)this + 97) > 3213027 )
      *((_DWORD *)this + 97) = 3213025;
  }
  result = CMFCToolBarsCustomizeDialog::GetFlags(this);
  if ( !result )
    return sub_421070(*(_DWORD ***)(dword_790360 + 60));
  return result;
}


//======================================================================
// sub_421390
// entry 00421390  size 154  status ok
//======================================================================

_BYTE *__thiscall sub_421390(_BYTE *this)
{
  bool v2; // [esp+4h] [ebp-18h]

  sub_5FC0D0(0);
  *(_DWORD *)this = &CaribbeanStudDealScript::`vftable';
  v2 = *((_BYTE *)dword_162EE84 + 37) || (int)sub_637810(4) < 2;
  *(this + 36) = v2;
  return this;
}


//======================================================================
// sub_421450
// entry 00421450  size 89  status ok
//======================================================================

bool __thiscall sub_421450(_BYTE *this)
{
  return (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 && !*(this + 36) && !*(_BYTE *)(dword_790358 + 174);
}


//======================================================================
// sub_4214B0
// entry 004214b0  size 909  status ok
//======================================================================

int __thiscall sub_4214B0(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  int v4; // [esp+10h] [ebp-40h]
  int v5; // [esp+14h] [ebp-3Ch]
  int v6; // [esp+18h] [ebp-38h]
  char v8; // [esp+3Fh] [ebp-11h]
  int i; // [esp+40h] [ebp-10h]

  v8 = 0;
  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = sub_4269A0(dword_790358);
      for ( i = 0; i < 4; ++i )
      {
        if ( (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_790360 + 4 * i + 84)) )
          v8 = 1;
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 4 * i + 84) + 112))(*(_DWORD *)(dword_790360 + 4 * i + 84));
      }
      if ( v8 )
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3213001,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      if ( !sub_421450(this) )
        goto LABEL_14;
      if ( operator new(0x24u) )
        v6 = sub_421860(1, this);
      else
        v6 = 0;
      result = sub_5FC420(v6);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( sub_421450(this) )
      {
        if ( operator new(0x24u) )
          v5 = sub_421B00(*(this + 8), 0, this);
        else
          v5 = 0;
        result = sub_5FC420(v5);
      }
      else
      {
        v3 = sub_6436C0(*(_DWORD *)(dword_790358 + 4));
        sub_426310(*(this + 8), v3);
        sub_41F1B0((_DWORD **)dword_790360);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 2:
      if ( sub_426370(4) == 5 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      else
      {
        *(this + 8) = sub_4269A0(dword_790358);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( sub_421450(this) )
        {
          if ( operator new(0x24u) )
            v4 = sub_421860(0, this);
          else
            v4 = 0;
          result = sub_5FC420(v4);
        }
        else
        {
          result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 3);
        }
      }
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      if ( sub_421450(this) )
        result = sub_4207F0((int)this);
      else
LABEL_14:
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 124) + 112))(*(_DWORD *)(dword_790360 + 124));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 120) + 112))(*(_DWORD *)(dword_790360 + 120));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
        *(_DWORD *)(dword_790354 + 4),
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
// sub_421860
// entry 00421860  size 285  status ok
//======================================================================

_BYTE *__thiscall sub_421860(_BYTE *this, char a2, int a3)
{
  sub_5FC0D0(a3);
  *(_DWORD *)this = &CaribbeanStudDealerToReadyScript::`vftable';
  *(this + 32) = a2;
  sub_5EAF00(a2 != 0 ? 5026 : 5028);
  sub_5EAF00(a2 != 0 ? 5027 : 5029);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 120) + 176))(*(_DWORD *)(dword_790360 + 120), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 124) + 176))(*(_DWORD *)(dword_790360 + 124), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 120) + 116))(*(_DWORD *)(dword_790360 + 120));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790360 + 124) + 116))(*(_DWORD *)(dword_790360 + 124));
  return this;
}


//======================================================================
// sub_421980
// entry 00421980  size 371  status ok
//======================================================================

int __thiscall sub_421980(_DWORD **this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_790340 <= word_790338 )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 124) + 176))(
          *(_DWORD *)(dword_790360 + 124),
          word_790340);
      if ( word_790340 <= word_79033C )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 120) + 176))(
          *(_DWORD *)(dword_790360 + 120),
          word_790340);
      if ( word_790340 >= word_79033C && word_790340 >= word_790338 )
        ((void (__thiscall *)(_DWORD **, int))(*this)[1])(this, 2);
      else
        ((void (__thiscall *)(_DWORD **, int))(*this)[1])(this, 1);
      return ((int (__thiscall *)(_DWORD **, int))(*this)[7])(this, 4);
    }
    else if ( result == 2 )
    {
      if ( *(this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 4) + 28))(*(this + 4), 0);
        return sub_5FC420(0);
      }
    }
  }
  else
  {
    word_790340 = 0;
    word_79033C = sub_5EB240(*(_DWORD *)(dword_790360 + 120));
    word_790338 = sub_5EB240(*(_DWORD *)(dword_790360 + 124));
    return ((int (__thiscall *)(_DWORD **, int, int))(*this)[2])(this, 1, 4);
  }
  return result;
}


//======================================================================
// sub_421B00
// entry 00421b00  size 293  status ok
//======================================================================

_DWORD *__thiscall sub_421B00(_DWORD *this, unsigned int a2, int a3, int a4)
{
  sub_5FC0D0(a4);
  *this = &CaribbeanStudDealToScript::`vftable';
  if ( a2 > 4 )
    sub_5E9F20((char)"(0<=p) && (p<=4)", "..\\Casino\\caribbeanstuddisplay.cpp", 975);
  *(this + 8) = a2;
  sub_5EAF00(dword_70CE4C[a2]);
  sub_5EAF00(5030);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 124) + 176))(*(_DWORD *)(dword_790360 + 124), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 120) + 176))(*(_DWORD *)(dword_790360 + 120), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790360 + 124) + 108))(*(_DWORD *)(dword_790360 + 124), 50);
  (*(void (__cdecl **)(int))(**(_DWORD **)(dword_790360 + 120) + 108))(51);
  return this;
}


//======================================================================
// sub_421C30
// entry 00421c30  size 670  status ok
//======================================================================

int __thiscall sub_421C30(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  __int16 v3; // ax
  _DWORD v5[3]; // [esp+1Ch] [ebp-24h]
  int v6; // [esp+28h] [ebp-18h]
  int v7; // [esp+2Ch] [ebp-14h]
  _WORD v8[6]; // [esp+30h] [ebp-10h]

  v5[0] = 101003;
  v5[1] = 101004;
  v5[2] = 101005;
  v8[0] = 6;
  v8[1] = 6;
  v8[2] = 6;
  v8[3] = 5;
  v8[4] = 5;
  v8[5] = 7;
  v6 = *(_DWORD *)(dword_790360 + 124);
  v7 = *(_DWORD *)(dword_790360 + 120);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_790350 <= word_790348 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, word_790350);
      if ( word_790350 <= word_790344 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_790350);
      if ( word_790350 == (__int16)v8[*(this + 8)] - 1 )
      {
        v2 = sub_62FBF0(3);
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          v5[v2],
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      }
      else if ( word_790350 == (__int16)v8[*(this + 8)] )
      {
        v3 = sub_6436C0(*(_DWORD *)(dword_790358 + 4));
        sub_426310(*(this + 8), v3);
        sub_41F1B0((_DWORD **)dword_790360);
      }
      if ( word_790350 >= word_790348 && word_790350 >= word_790344 )
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 4);
    }
    else if ( result == 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 51);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 50);
      if ( *(this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
        return sub_5FC420(0);
      }
    }
  }
  else
  {
    word_790350 = 0;
    word_79034C = 0;
    word_790348 = sub_5EB240(v6);
    word_790344 = sub_5EB240(v7);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 1, 4);
  }
  return result;
}


//======================================================================
// sub_421ED0
// entry 00421ed0  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_421ED0(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &CaribbeanStudActionDialog::`vftable';
  return this;
}


//======================================================================
// sub_421F20
// entry 00421f20  size 261  status ok
//======================================================================

int __thiscall sub_421F20(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a2 + 24) == 4 )
      {
        if ( tolower(*(char *)(a2 + 20)) == 116 )
        {
          sub_5DB240(dword_790354);
          *(_BYTE *)(a2 + 4) = 1;
        }
        if ( tolower(*(char *)(a2 + 20)) == 99 )
        {
          v3 = sub_5F2A60(3213004, 0);
          if ( (unsigned __int8)sub_6026D0(v3) )
          {
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 1);
            *(_BYTE *)(a2 + 4) = 1;
          }
        }
        if ( tolower(*(char *)(a2 + 20)) == 102 )
        {
          v4 = sub_5F2A60(3213003, 0);
          if ( (unsigned __int8)sub_6026D0(v4) )
          {
            (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 24))(this, 0);
            *(_BYTE *)(a2 + 4) = 1;
          }
        }
      }
      return sub_5F72F0(a2);
    }
  }
  return result;
}


//======================================================================
// sub_422030
// entry 00422030  size 219  status ok
//======================================================================

int __thiscall sub_422030(CMFCTabCtrl *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int i; // [esp+4h] [ebp-18h]
  _DWORD v6[2]; // [esp+8h] [ebp-14h]
  _DWORD v7[3]; // [esp+10h] [ebp-Ch]

  v7[0] = "SID_CARIBBEANSTUD_FOLD";
  v7[1] = "SID_CARIBBEANSTUD_CALL";
  v6[0] = 0;
  v6[1] = 1;
  v7[2] = *(_DWORD *)(dword_790358 + 160);
  sub_5F83D0(1060, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_GENERIC_ACTIONS");
  result = sub_5F73E0(v1, 73, 0, 3);
  for ( i = 0; i < 2; ++i )
  {
    v3 = sub_630F40(v7[i]);
    sub_5F9DE0(0, v6[i], 3200222, 10, 35 * i + 38, 2, v3, 72, 75, 74, -1, 0);
    sub_5FB300(i);
    result = sub_5EB700(1);
  }
  return result;
}


//======================================================================
// sub_422110
// entry 00422110  size 94  status ok
//======================================================================

int __stdcall sub_422110(char a1)
{
  int result; // eax

  result = sub_5FB2B0(0);
  if ( !result )
  {
    sub_5F9CE0(0, 0, 5016, 10, 35 * (a1 == 0) + 38, 3, 0, 255, 0);
    sub_5FB2B0(0);
    return sub_5EB5D0(100);
  }
  return result;
}


//======================================================================
// sub_422170
// entry 00422170  size 202  status ok
//======================================================================

int __stdcall sub_422170(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-24h]

  result = sub_426C80(*(_DWORD *)(dword_790358 + 160), a1 == 0);
  if ( !(_BYTE)result )
  {
    sub_41FC50((_DWORD *)dword_790360);
    if ( operator new(0x24u) )
      v2 = sub_422240(a1);
    else
      v2 = 0;
    return sub_5FC420(v2);
  }
  return result;
}


//======================================================================
// sub_422240
// entry 00422240  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_422240(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &CaribbeanStudSayHumanLineScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_422270
// entry 00422270  size 391  status ok
//======================================================================

int __thiscall sub_422270(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-48h]
  CImageDisplay *v5; // [esp+14h] [ebp-34h]
  int v6; // [esp+20h] [ebp-28h] BYREF
  int v7; // [esp+24h] [ebp-24h]
  int v8; // [esp+28h] [ebp-20h]
  double v9; // [esp+30h] [ebp-18h]
  double v10; // [esp+38h] [ebp-10h]
  int v11; // [esp+44h] [ebp-4h]

  v11 = *(_DWORD *)(dword_790358 + 160);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      result = (unsigned __int8)sub_426D40(*(_DWORD *)(dword_790358 + 160), *(this + 8) == 0);
      if ( (_BYTE)result )
      {
        sub_5FC420(0);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                 *(_DWORD *)(dword_790354 + 4),
                 1,
                 0);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
    v7 = -1;
    if ( v11 != -1 )
    {
      v5 = (CImageDisplay *)sub_5DCB00(v11);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
      {
        v6 = v11;
        v8 = -1;
        v9 = 0.0;
        v10 = 1.0;
        v2 = *(this + 8);
        if ( v2 )
        {
          if ( v2 == 1 )
            v7 = 2013;
        }
        else
        {
          v7 = sub_62FBF0(2) != 0 ? 2087 : 2051;
        }
      }
    }
    if ( v7 == -1 )
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    else
      return sub_639390(&v6, this, 0, 0);
  }
  return result;
}


//======================================================================
// sub_422560
// entry 00422560  size 154  status ok
//======================================================================

int __thiscall sub_422560(_BYTE *this, int a2)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_790354 + 4) + 8))(
             *(_DWORD *)(dword_790354 + 4),
             500,
             a2);
  sub_425FB0(dword_790358, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
           *(_DWORD *)(dword_790354 + 4),
           1,
           0);
}


//======================================================================
// sub_422600
// entry 00422600  size 1525  status ok
//======================================================================

int __thiscall sub_422600(_BYTE *this)
{
  _BYTE *v3; // [esp+8h] [ebp-84h]
  int v6; // [esp+24h] [ebp-68h]
  int v7; // [esp+28h] [ebp-64h]
  int v8; // [esp+2Ch] [ebp-60h]
  CImageDisplay *v9; // [esp+30h] [ebp-5Ch]
  int v10; // [esp+3Ch] [ebp-50h]
  int v11; // [esp+40h] [ebp-4Ch]
  int v12; // [esp+48h] [ebp-44h]
  CImageDisplay *v13; // [esp+4Ch] [ebp-40h]
  CImageDisplay *v14; // [esp+5Ch] [ebp-30h]
  int v15; // [esp+6Ch] [ebp-20h]
  _BYTE *v16; // [esp+74h] [ebp-18h]
  int v17; // [esp+7Ch] [ebp-10h]
  int v18; // [esp+7Ch] [ebp-10h]
  int v19; // [esp+7Ch] [ebp-10h]
  int v20; // [esp+7Ch] [ebp-10h]

  sub_41F1B0((_DWORD **)dword_790360);
  if ( *(_DWORD *)(dword_790358 + 224) != -1 )
    return sub_4230D0(this);
  if ( *(this + 4) )
  {
    v17 = sub_426420(dword_790358);
    if ( *((_BYTE *)dword_162EE84 + 37) && v17 != -1 )
    {
      v14 = (CImageDisplay *)sub_5DCB00(v17);
      if ( CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v17) + 1185) = 1;
        v17 = sub_426420(dword_790358);
      }
    }
    if ( v17 == -1 )
    {
      if ( !*(this + 11) )
      {
        sub_426810(dword_790358);
        *(this + 11) = 1;
      }
      if ( *(this + 6) )
      {
        if ( (unsigned __int8)sub_426960(dword_790358) )
        {
          sub_426260(-1, 0);
          v16 = operator new(0x28u);
          if ( v16 )
            v3 = sub_421390(v16);
          else
            v3 = 0;
          return sub_5DA390(v3);
        }
        else
        {
          v18 = sub_426A40(dword_790358);
          if ( v18 == -1 )
          {
            if ( *(this + 8) )
            {
              v19 = sub_426DA0(dword_790358);
              if ( v19 == -1 )
              {
                v20 = sub_4271F0(dword_790358);
                if ( v20 == -1 )
                {
                  sub_426260(-1, 0);
                  if ( !(unsigned __int8)sub_5DA7B0(dword_790354) || *(this + 9) )
                  {
                    if ( *(_BYTE *)(dword_790358 + 173) )
                    {
                      if ( *((_BYTE *)dword_162EE84 + 37) )
                        return sub_422560(this, 200);
                      else
                        return sub_41FCA0((void *)dword_790360);
                    }
                    else
                    {
                      *(_BYTE *)(dword_790358 + 173) = 1;
                      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                               *(_DWORD *)(dword_790354 + 4),
                               1,
                               0);
                    }
                  }
                  else
                  {
                    *(this + 9) = 1;
                    v6 = dword_790358;
                    *(_DWORD *)(dword_790358 + 224) = 3;
                    *(_DWORD *)(v6 + 228) = -1;
                    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                             *(_DWORD *)(dword_790354 + 4),
                             1,
                             0);
                  }
                }
                else
                {
                  sub_426260(v20, 0);
                  sub_4230B0(v20);
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                           *(_DWORD *)(dword_790354 + 4),
                           1,
                           0);
                }
              }
              else
              {
                sub_426260(v19, 0);
                if ( !(unsigned __int8)sub_427670(v19) || *(this + 10) )
                {
                  *(this + 10) = 0;
                  sub_423030(v19);
                  v9 = (CImageDisplay *)sub_5DCB00(v19);
                  if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
                    || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
                  {
                    v7 = -1;
                  }
                  else
                  {
                    v7 = v19;
                  }
                  v8 = dword_790358;
                  *(_DWORD *)(dword_790358 + 224) = 2;
                  *(_DWORD *)(v8 + 228) = v7;
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                           *(_DWORD *)(dword_790354 + 4),
                           1,
                           0);
                }
                else
                {
                  *(this + 10) = 1;
                  v10 = dword_790358;
                  *(_DWORD *)(dword_790358 + 224) = 7;
                  *(_DWORD *)(v10 + 228) = 4;
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                           *(_DWORD *)(dword_790354 + 4),
                           1,
                           0);
                }
              }
            }
            else
            {
              *(this + 8) = 1;
              *(_BYTE *)(dword_790358 + 173) = 1;
              if ( !(unsigned __int8)sub_426E80(dword_790358) )
              {
                v11 = dword_790358;
                *(_DWORD *)(dword_790358 + 224) = 6;
                *(_DWORD *)(v11 + 228) = 4;
              }
              return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                       *(_DWORD *)(dword_790354 + 4),
                       1,
                       0);
            }
          }
          else
          {
            sub_426260(v18, 0);
            return sub_422EA0(v18);
          }
        }
      }
      else
      {
        *(this + 6) = 1;
        v12 = dword_790358;
        *(_DWORD *)(dword_790358 + 224) = 5;
        *(_DWORD *)(v12 + 228) = 4;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                 *(_DWORD *)(dword_790354 + 4),
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
        sub_426260(v17, 1);
      }
      else
      {
        sub_426260(v17, 0);
      }
      return sub_422C00(v17);
    }
  }
  else
  {
    *(this + 4) = 1;
    v15 = dword_790358;
    *(_DWORD *)(dword_790358 + 224) = 4;
    *(_DWORD *)(v15 + 228) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
             *(_DWORD *)(dword_790354 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_422C00
// entry 00422c00  size 667  status ok
//======================================================================

int __thiscall sub_422C00(_BYTE *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  CImageDisplay *v9; // [esp+14h] [ebp-20h]
  __int64 v10; // [esp+2Ch] [ebp-8h] BYREF

  v9 = (CImageDisplay *)sub_426230(dword_790358);
  if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
      sub_57AB80(11, &unk_70CEE0);
    else
      sub_57AE30(dword_793578);
    if ( (unsigned __int8)sub_4263D0(a2) )
    {
      return sub_41FB20((_DWORD **)dword_790360);
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_790354) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return sub_422600(this);
    }
    else
    {
      v3 = sub_5DCB00(a2);
      return sub_5DBB70(v3);
    }
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 5) )
    {
      *(this + 5) = 0;
      if ( (unsigned __int8)sub_4263D0(a2) )
      {
        v5 = sub_41DD40(a2);
        v10 = sub_64C8A0(v5, 0);
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_790358 + 8 * a2 + 8) + 196))(
          *(_DWORD *)(dword_790358 + 8 * a2 + 8),
          &v10,
          0,
          1);
        v6 = sub_5DCB00(a2);
        if ( sub_5D5A50(v6) > 1 && sub_62FBF0(20) == 1 )
        {
          sub_426620(a2);
          sub_41F9C0((_DWORD **)dword_790360, a2);
        }
        *(_BYTE *)(sub_426230(dword_790358) + 1184) = 1;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
                 *(_DWORD *)(dword_790354 + 4),
                 1,
                 0);
      }
      else
      {
        if ( (unsigned __int8)sub_5DA7B0(dword_790354) )
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
      v4 = sub_637810(2);
      return sub_5DA360(v4);
    }
  }
}


//======================================================================
// sub_422EA0
// entry 00422ea0  size 396  status ok
//======================================================================

int __thiscall sub_422EA0(_BYTE *this, int a2)
{
  int v3; // eax
  int v6; // [esp+Ch] [ebp-18h]
  CImageDisplay *v7; // [esp+14h] [ebp-10h]
  char v8; // [esp+23h] [ebp-1h]

  v7 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(11, &unk_70E6F0);
      sub_4276F0(a2);
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    *(_BYTE *)(a2 + dword_790358 + 169) = 1;
    return sub_41FB60(dword_790360);
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 7) )
    {
      *(this + 7) = 0;
      v8 = sub_41E290(a2);
      sub_426AD0(a2, v8);
      v6 = dword_790358;
      *(_DWORD *)(dword_790358 + 224) = v8 != 0;
      *(_DWORD *)(v6 + 228) = a2;
      *(_BYTE *)(a2 + dword_790358 + 165) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790354 + 4) + 8))(
               *(_DWORD *)(dword_790354 + 4),
               1,
               0);
    }
    else
    {
      *(this + 7) = 1;
      v3 = sub_637810(2);
      return sub_5DA360(v3);
    }
  }
}


//======================================================================
// sub_423030
// entry 00423030  size 114  status ok
//======================================================================

int __stdcall sub_423030(int a1)
{
  *(_BYTE *)(a1 + dword_790358 + 169) = 1;
  sub_41F1B0((_DWORD **)dword_790360);
  sub_426ED0(a1);
  *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790354 + 4) + 4))(*(_DWORD *)(dword_790354 + 4), 1);
}


//======================================================================
// sub_4230B0
// entry 004230b0  size 28  status ok
//======================================================================

int __stdcall sub_4230B0(int a1)
{
  return sub_427300(a1);
}


//======================================================================
// sub_4230D0
// entry 004230d0  size 2963  status ok
//======================================================================

int sub_4230D0()
{
  int v1; // eax
  int v2; // [esp+0h] [ebp-170h]
  bool v4; // [esp+8h] [ebp-168h]
  int v5; // [esp+Ch] [ebp-164h]
  bool v7; // [esp+14h] [ebp-15Ch]
  int v8; // [esp+18h] [ebp-158h]
  bool v10; // [esp+20h] [ebp-150h]
  int v11; // [esp+24h] [ebp-14Ch]
  bool v13; // [esp+2Ch] [ebp-144h]
  bool v14; // [esp+30h] [ebp-140h]
  bool v15; // [esp+34h] [ebp-13Ch]
  bool v16; // [esp+38h] [ebp-138h]
  bool v17; // [esp+3Ch] [ebp-134h]
  bool v18; // [esp+40h] [ebp-130h]
  bool v19; // [esp+44h] [ebp-12Ch]
  bool v20; // [esp+48h] [ebp-128h]
  CImageDisplay *v21; // [esp+54h] [ebp-11Ch]
  int v22; // [esp+60h] [ebp-110h]
  CImageDisplay *v23; // [esp+64h] [ebp-10Ch]
  CImageDisplay *v24; // [esp+70h] [ebp-100h]
  CImageDisplay *v25; // [esp+7Ch] [ebp-F4h]
  CImageDisplay *v26; // [esp+88h] [ebp-E8h]
  CImageDisplay *v27; // [esp+94h] [ebp-DCh]
  CImageDisplay *v28; // [esp+A0h] [ebp-D0h]
  CImageDisplay *v29; // [esp+ACh] [ebp-C4h]
  CImageDisplay *v30; // [esp+B8h] [ebp-B8h]
  CImageDisplay *v31; // [esp+C4h] [ebp-ACh]
  CImageDisplay *v32; // [esp+D0h] [ebp-A0h]
  CImageDisplay *v33; // [esp+DCh] [ebp-94h]
  CImageDisplay *v34; // [esp+E8h] [ebp-88h]
  CImageDisplay *v35; // [esp+F4h] [ebp-7Ch]
  CImageDisplay *v36; // [esp+100h] [ebp-70h]
  __int64 v37; // [esp+118h] [ebp-58h] BYREF
  int v38; // [esp+120h] [ebp-50h]
  int v39; // [esp+124h] [ebp-4Ch]
  int v40; // [esp+128h] [ebp-48h]
  int v41; // [esp+12Ch] [ebp-44h]
  _DWORD v42[4]; // [esp+130h] [ebp-40h] BYREF
  double v43; // [esp+140h] [ebp-30h]
  double v44; // [esp+148h] [ebp-28h]
  int v45; // [esp+150h] [ebp-20h]
  int v46; // [esp+154h] [ebp-1Ch]
  double v47; // [esp+158h] [ebp-18h]
  double v48; // [esp+160h] [ebp-10h]
  int v49; // [esp+168h] [ebp-8h]
  int v50; // [esp+16Ch] [ebp-4h]

  v37 = sub_64C8A0(0, 0);
  v41 = -1;
  v45 = -1;
  v39 = -1;
  v47 = 0.0;
  v48 = 1.0;
  v50 = *(_DWORD *)(dword_790358 + 160);
  v46 = -1;
  v40 = -1;
  v49 = -1;
  v38 = -1;
  v41 = *(_DWORD *)(dword_790358 + 228);
  switch ( *(_DWORD *)(dword_790358 + 224) )
  {
    case 0:
      v45 = 2013;
      v48 = 0.75;
      break;
    case 1:
      v45 = 2051;
      v48 = 0.75;
      break;
    case 2:
      sub_5DCB00(v50);
      sub_5D6020(&v37);
      if ( (unsigned __int8)sub_4275A0(v50) )
      {
        v36 = (CImageDisplay *)sub_5DCB00(v50);
        v20 = CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 3;
        v45 = v20 ? -1 : 2015;
        v48 = 1.0;
      }
      else if ( (unsigned __int8)sub_427600(v50) )
      {
        v35 = (CImageDisplay *)sub_5DCB00(v50);
        v19 = CImageDisplay::GetDisplayFormat(v35)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v35)->rcSource.left == 3;
        v45 = v19 ? -1 : 2016;
        v48 = 1.0;
      }
      else if ( (unsigned __int8)sub_427670(v50) )
      {
        v34 = (CImageDisplay *)sub_5DCB00(v50);
        v18 = CImageDisplay::GetDisplayFormat(v34)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v34)->rcSource.left == 3;
        v45 = v18 ? 1037 : 2014;
        v48 = 1.0;
      }
      else if ( *(int *)(sub_5DCB00(v50) + 1192) <= 3 || sub_62FBF0(2) )
      {
        if ( *(int *)(sub_5DCB00(v50) + 1192) >= -3 || sub_62FBF0(2) )
        {
          if ( *(_BYTE *)(v50 + dword_790358 + 208) )
          {
            v31 = (CImageDisplay *)sub_5DCB00(v50);
            v15 = CImageDisplay::GetDisplayFormat(v31)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v31)->rcSource.left == 3;
            v45 = v15 ? 1043 : 1022;
            v48 = 1.0;
          }
          else if ( (int)v37 >= 0 )
          {
            if ( (int)v37 > 0 )
            {
              v29 = (CImageDisplay *)sub_5DCB00(v50);
              v13 = CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 2
                 || CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 3;
              v45 = v13 ? 1008 : 1028;
              v48 = 0.5;
            }
          }
          else
          {
            v30 = (CImageDisplay *)sub_5DCB00(v50);
            v14 = CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 3;
            v45 = v14 ? 1000 : 1026;
            v48 = 0.5;
          }
        }
        else
        {
          v32 = (CImageDisplay *)sub_5DCB00(v50);
          v16 = CImageDisplay::GetDisplayFormat(v32)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v32)->rcSource.left == 3;
          v45 = v16 ? 1033 : 1023;
          v48 = 0.75;
        }
      }
      else
      {
        v33 = (CImageDisplay *)sub_5DCB00(v50);
        v17 = CImageDisplay::GetDisplayFormat(v33)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v33)->rcSource.left == 3;
        v45 = v17 ? 1044 : 1024;
        v48 = 0.75;
      }
      break;
    case 3:
      v49 = sub_5DAC90(dword_790354);
      v38 = sub_5DADA0(dword_790354);
      if ( !(unsigned __int8)sub_5DB190(dword_790354) || v49 == -1 )
      {
        if ( v49 != -1 )
        {
          sub_5DCB00(v49);
          sub_5D6020(&v37);
        }
        if ( v49 == -1 || (int)v37 <= 0 || sub_62FBF0(2) )
        {
          if ( v38 != -1 )
          {
            v24 = (CImageDisplay *)sub_5DCB00(v38);
            if ( CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 3 )
            {
              v5 = -1;
            }
            else
            {
              v5 = v38;
            }
            v41 = v5;
            v23 = (CImageDisplay *)sub_5DCB00(v38);
            v4 = CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 3;
            v45 = v4 ? 1036 : 1011;
            v48 = 0.5;
          }
        }
        else
        {
          v26 = (CImageDisplay *)sub_5DCB00(v49);
          if ( CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 3 )
          {
            v8 = -1;
          }
          else
          {
            v8 = v49;
          }
          v41 = v8;
          v25 = (CImageDisplay *)sub_5DCB00(v49);
          v7 = CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 3;
          v45 = v7 ? 1035 : 1010;
          v48 = 0.5;
        }
      }
      else
      {
        v28 = (CImageDisplay *)sub_5DCB00(v49);
        if ( CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 3 )
        {
          v11 = -1;
        }
        else
        {
          v11 = v49;
        }
        v41 = v11;
        v27 = (CImageDisplay *)sub_5DCB00(v49);
        v10 = CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 3;
        v45 = v10 ? 1042 : 1021;
        v48 = 1.0;
      }
      break;
    case 4:
      if ( sub_62FBF0(5) == 1 )
        v46 = 170015;
      else
        v46 = 170000;
      break;
    case 5:
      v46 = 170006;
      break;
    case 6:
      v46 = 170018;
      break;
    case 7:
      v46 = 170021;
      break;
    default:
      break;
  }
  v22 = dword_790358;
  *(_DWORD *)(dword_790358 + 224) = -1;
  *(_DWORD *)(v22 + 228) = -1;
  if ( v41 == 4 )
  {
    if ( v46 == -1 )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( v46 == 7 )
      *(_BYTE *)(*(_DWORD *)(dword_790360 + 56) + 400) = 1;
    if ( v40 == -1 )
      return sub_5CD7C0(v46, *(_DWORD *)(dword_162EE80 + 4), 0);
    else
      return sub_5CD700(v46, v40, *(_DWORD *)(dword_162EE80 + 4), 0);
  }
  else
  {
    if ( v45 == -1 || !sub_636730(dword_162EE84) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( v41 > -1 )
    {
      v21 = (CImageDisplay *)sub_5DCB00(v41);
      if ( CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 3 )
      {
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    if ( v41 == -1 )
      v2 = sub_636C50(dword_162EE84);
    else
      v2 = v41;
    v42[0] = v2;
    v42[1] = v45;
    v42[2] = v39;
    v43 = v47;
    v44 = v48;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
    v1 = sub_637810(2);
    return sub_639390(v42, *(_DWORD *)(dword_162EE80 + 4), v1, 1);
  }
}


//======================================================================
// sub_423CC0
// entry 00423cc0  size 149  status ok
//======================================================================

_DWORD *__thiscall sub_423CC0(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &CaribbeanStudRoom::`vftable';
  sub_5F1AD0(3213000);
  dword_790354 = (int)this;
  dword_790358 = 0;
  dword_79035C = 0;
  dword_790360 = 0;
  dword_790364 = 0;
  return this;
}


//======================================================================
// sub_423D60
// entry 00423d60  size 324  status ok
//======================================================================

int __thiscall sub_423D60(_DWORD *this)
{
  *this = &CaribbeanStudRoom::`vftable';
  dword_790354 = 0;
  if ( dword_790358 )
    (**(void (__thiscall ***)(int, int))dword_790358)(dword_790358, 1);
  dword_790358 = 0;
  if ( dword_79035C )
    (**(void (__thiscall ***)(int, int))dword_79035C)(dword_79035C, 1);
  dword_79035C = 0;
  if ( dword_790360 )
    (**(void (__thiscall ***)(int, int))dword_790360)(dword_790360, 1);
  dword_790360 = 0;
  if ( dword_790364 )
    (**(void (__thiscall ***)(int, int))dword_790364)(dword_790364, 1);
  dword_790364 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_423EB0
// entry 00423eb0  size 489  status ok
//======================================================================

int __thiscall sub_423EB0(_DWORD **this)
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
  void *v13; // [esp+3Ch] [ebp-14h]

  sub_5D8230();
  v13 = operator new(0xE8u);
  if ( v13 )
    v6 = sub_425BE0(v13);
  else
    v6 = 0;
  dword_790358 = v6;
  sub_425DF0();
  v12 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_79035C = (int)v5;
  v11 = (ATL::CCRTHeap *)operator new(0x80u);
  if ( v11 )
    v4 = sub_41E570(v11);
  else
    v4 = 0;
  dword_790360 = (int)v4;
  sub_41E910(v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_790364 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &CaribbeanStudRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8, -1);
  return sub_422560((_BYTE *)dword_79035C, 0);
}


//======================================================================
// sub_4240A0
// entry 004240a0  size 355  status ok
//======================================================================

int __stdcall sub_4240A0(int a1)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-18h]
  CImageDisplay *v4; // [esp+10h] [ebp-10h]

  result = sub_5D7F40(a1);
  if ( dword_790358 )
  {
    result = sub_426420(dword_790358);
    v3 = result;
  }
  else
  {
    v3 = -1;
  }
  if ( *(_DWORD *)(a1 + 24) == 4 )
  {
    result = a1;
    if ( !*(_BYTE *)(a1 + 4) && v3 != -1 )
    {
      result = tolower(*(char *)(a1 + 20));
      if ( result == 112 )
      {
        result = sub_5DCB00(v3);
        if ( result )
        {
          v4 = (CImageDisplay *)sub_5DCB00(v3);
          result = CImageDisplay::GetDisplayFormat(v4)->rcSource.left;
          if ( result == 2 || (result = (int)CImageDisplay::GetDisplayFormat(v4), *(_DWORD *)result == 3) )
            result = sub_4266C0(v3);
        }
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    result = a1;
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      if ( dword_790360 )
      {
        if ( dword_790358 )
        {
          if ( *(_DWORD *)(dword_790360 + 120) )
          {
            if ( *(_DWORD *)(dword_790360 + 124) )
            {
              result = sub_5F54A0(*(_DWORD *)(dword_790360 + 120));
              if ( (_BYTE)result
                || (result = (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_790360 + 124)), (_BYTE)result) )
              {
                *(_BYTE *)(dword_790358 + 174) = 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_424210
// entry 00424210  size 196  status ok
//======================================================================

int __stdcall sub_424210(int a1, int a2)
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
// sub_4242E0
// entry 004242e0  size 49  status ok
//======================================================================

int __thiscall sub_4242E0(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3213001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_424320
// entry 00424320  size 330  status ok
//======================================================================

int __stdcall sub_424320(int a1, int a2)
{
  int result; // eax
  CImageDisplay *v4; // [esp+10h] [ebp-14h]

  if ( !sub_5DCB00(*(_DWORD *)(dword_790358 + 160)) )
    return sub_5DC7D0(a1, a2);
  v4 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_790358 + 160));
  if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v4)->rcSource.left != 3 )
  {
    return sub_5DC7D0(a1, a2);
  }
  result = a1;
  switch ( a1 )
  {
    case 3213002:
      sub_4266C0(*(_DWORD *)(dword_790358 + 160));
      return sub_5DC7D0(a1, a2);
    case 3213003:
      if ( dword_790360 && *(_DWORD *)(dword_790360 + 64) )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790360 + 64) + 24))(
                 *(_DWORD *)(dword_790360 + 64),
                 0);
      break;
    case 3213004:
      if ( dword_790360 )
      {
        if ( *(_DWORD *)(dword_790360 + 64) )
          return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790360 + 64) + 24))(
                   *(_DWORD *)(dword_790360 + 64),
                   1);
      }
      break;
    default:
      return sub_5DC7D0(a1, a2);
  }
  return result;
}


//======================================================================
// sub_424470
// entry 00424470  size 354  status ok
//======================================================================

const struct tagVIDEOINFO *__stdcall sub_424470(int a1)
{
  const struct tagVIDEOINFO *result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  const CHAR *v6; // eax
  const CHAR *v7; // [esp-8h] [ebp-34h]
  CImageDisplay *v9; // [esp+Ch] [ebp-20h]
  __int64 v10; // [esp+24h] [ebp-8h] BYREF

  v10 = sub_64C8A0(0, 0);
  result = *(const struct tagVIDEOINFO **)(dword_790358 + 160);
  if ( result == (const struct tagVIDEOINFO *)a1 )
  {
    v9 = (CImageDisplay *)sub_5DCB00(a1);
    result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(v9)->rcSource.left;
    if ( result == (const struct tagVIDEOINFO *)2
      || (result = CImageDisplay::GetDisplayFormat(v9), result->rcSource.left == 3) )
    {
      result = (const struct tagVIDEOINFO *)sub_4272E0(a1);
      if ( !(_BYTE)result )
      {
        sub_4265A0(a1, &v10);
        v2 = sub_5DCB00(a1);
        v3 = sub_5D5A50(v2) - 1;
        if ( v3 >= 3 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 688))(dword_790354)
          && (v4 = sub_5DCB00(a1), v5 = sub_5D5A50(v4), v5 - 1 >= 2 * (int)v10) )
        {
          sub_426620(a1);
          return (const struct tagVIDEOINFO *)sub_41F9C0((_DWORD **)dword_790360, a1);
        }
        else
        {
          v7 = (const CHAR *)sub_630F40("SID_CARIBBEANSTUD_INVALIDBET");
          v6 = (const CHAR *)sub_630F40("SID_CARIBBEANSTUD_NOTENOUGHMONEY");
          return (const struct tagVIDEOINFO *)sub_62FF10(v6, v7, 0);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_4245E0
// entry 004245e0  size 170  status ok
//======================================================================

int __stdcall sub_4245E0(int a1)
{
  int result; // eax
  bool v2; // [esp+0h] [ebp-18h]
  CImageDisplay *v3; // [esp+8h] [ebp-10h]

  result = dword_790358;
  if ( *(_DWORD *)(dword_790358 + 160) == a1 )
  {
    v3 = (CImageDisplay *)sub_5DCB00(a1);
    v2 = CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 3;
    result = v2;
    if ( v2 )
    {
      result = sub_4272E0(a1);
      if ( (_BYTE)result )
      {
        sub_426910(a1);
        return sub_41FAC0((_DWORD **)dword_790360, a1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_424690
// entry 00424690  size 35  status ok
//======================================================================

char __thiscall sub_424690(void *this)
{
  if ( dword_790358 )
    return sub_426150(dword_790358, this);
  else
    return 1;
}


//======================================================================
// sub_4246C0
// entry 004246c0  size 264  status ok
//======================================================================

int __thiscall sub_4246C0(_DWORD **this)
{
  const CHAR *v1; // eax
  int v3; // eax
  const CHAR *v4; // [esp-8h] [ebp-24h]

  if ( (unsigned __int8)sub_426500(*(_DWORD *)(dword_790358 + 160)) )
  {
    *(_BYTE *)(sub_426230(dword_790358) + 1184) = 1;
  }
  else
  {
    if ( (unsigned __int8)sub_4272E0(*(_DWORD *)(dword_790358 + 160)) )
    {
      v4 = (const CHAR *)sub_630F40("SID_CARIBBEANSTUD_CANNOTADVANCE");
      v1 = (const CHAR *)sub_630F40("SID_CARIBBEANSTUD_NEEDMINIMUMBET");
      return sub_62FF10(v1, v4, 0);
    }
    *(_BYTE *)(sub_426230(dword_790358) + 1185) = 1;
  }
  sub_41F990((_DWORD **)dword_790360, *(_DWORD *)(dword_790358 + 160));
  v3 = sub_426230(dword_790358);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, v3);
  sub_5DB890(this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_4247D0
// entry 004247d0  size 66  status ok
//======================================================================

int __thiscall sub_4247D0(void *this, char a2)
{
  sub_425DC0(a2 == 0);
  sub_5DB9B0(this);
  sub_425FB0(dword_790358, this);
  return sub_422560((_BYTE *)dword_79035C, 0);
}


//======================================================================
// sub_424820
// entry 00424820  size 50  status ok
//======================================================================

int __stdcall sub_424820(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 416;
  v2[1] = 133;
  v2[2] = 537;
  v2[3] = 6;
  return v2[a1];
}


//======================================================================
// sub_424860
// entry 00424860  size 50  status ok
//======================================================================

int __stdcall sub_424860(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 292;
  v2[1] = 292;
  v2[2] = 247;
  v2[3] = 249;
  return v2[a1];
}


//======================================================================
// sub_4248A0
// entry 004248a0  size 35  status ok
//======================================================================

int sub_4248A0()
{
  if ( dword_790358 )
    return sub_426230(dword_790358);
  else
    return 0;
}


//======================================================================
// sub_4248D0
// entry 004248d0  size 77  status ok
//======================================================================

int __thiscall sub_4248D0(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 8; ++i )
  {
    if ( *(_DWORD *)(dword_790360 + 4 * i + 24) != a2 )
      sub_5CD330(*(_DWORD *)(dword_790360 + 4 * i + 24), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_424920
// entry 00424920  size 258  status ok
//======================================================================

int __thiscall sub_424920(void *this, int a2)
{
  int result; // eax
  int v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  void *v5; // [esp+0h] [ebp-14h]
  int v6; // [esp+4h] [ebp-10h]
  int i; // [esp+10h] [ebp-4h]

  v5 = this;
  result = sub_4272E0(a2);
  if ( (_BYTE)result )
  {
    sub_41FAC0((_DWORD **)dword_790360, a2);
    result = sub_426910(a2);
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, void *))(**(_DWORD **)(dword_790358 + 4 * (i + 2 * a2) + 8) + 180))(
           *(_DWORD *)(dword_790358 + 4 * (i + 2 * a2) + 8),
           v5) )
    {
      v6 = *(_DWORD *)(dword_790358 + 4 * (i + 2 * a2) + 8);
      v4 = *(_DWORD *)(v6 + 32 * a2 + 76);
      v3 = *(_DWORD *)(v6 + 32 * a2 + 72);
      sub_5DCB00(a2);
      sub_5D5CF0(v3, v4);
    }
    result = sub_5CB9B0(*(_DWORD *)(dword_790358 + 4 * (i + 2 * a2) + 8));
  }
  return result;
}


//======================================================================
// sub_424A30
// entry 00424a30  size 272  status ok
//======================================================================

int __stdcall sub_424A30(int a1, int a2)
{
  int result; // eax
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // [esp+4h] [ebp-38h]
  unsigned __int8 v11; // [esp+Bh] [ebp-31h]
  _BYTE v12[8]; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+18h] [ebp-24h]
  int v14; // [esp+1Ch] [ebp-20h]
  _BYTE v15[8]; // [esp+20h] [ebp-1Ch] BYREF
  __int64 v16; // [esp+28h] [ebp-14h]
  __int64 v17; // [esp+30h] [ebp-Ch]
  int i; // [esp+38h] [ebp-4h]

  v17 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v17;
  v11 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v11;
  if ( !v11 )
  {
    result = sub_4272E0(a1);
    if ( (_BYTE)result )
    {
      v16 = sub_64C8A0(1, 0);
      v3 = (int *)sub_64C5C0(v15, v16, HIDWORD(v16));
      v4 = *v3;
      v5 = v3[1];
      result = a2;
      *(_DWORD *)a2 = v4;
      *(_DWORD *)(a2 + 4) = v5;
    }
    for ( i = 0; i < 2; ++i )
    {
      v10 = *(_DWORD *)(dword_790358 + 4 * (i + 2 * a1) + 8);
      v6 = *(_DWORD *)(v10 + 32 * a1 + 76);
      v13 = *(_DWORD *)(v10 + 32 * a1 + 72);
      v14 = v6;
      v7 = (int *)sub_64C5C0(v12, v13, v6);
      v8 = *v7;
      v9 = v7[1];
      result = a2;
      *(_DWORD *)a2 = v8;
      *(_DWORD *)(a2 + 4) = v9;
    }
  }
  return result;
}


//======================================================================
// sub_424B40
// entry 00424b40  size 22  status ok
//======================================================================

int __thiscall sub_424B40(void *this)
{
  return sub_425D60(dword_790358, this);
}


//======================================================================
// sub_424B60
// entry 00424b60  size 36  status ok
//======================================================================

int __thiscall sub_424B60(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_424B90
// entry 00424b90  size 115  status ok
//======================================================================

int __stdcall sub_424B90(int a1)
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
  sub_425D20(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_425D20(-1);
  *(_DWORD *)(v5 + 12) = v3;
  *(_DWORD *)(v5 + 16) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_424C10
// entry 00424c10  size 119  status ok
//======================================================================

int __stdcall sub_424C10(int a1)
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
  sub_425D20(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_425D20(a1);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_424C90
// entry 00424c90  size 107  status ok
//======================================================================

int __thiscall sub_424C90(void *this, int a2)
{
  int result; // eax
  char v3; // al

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(dword_790360 + 64) )
      {
        v3 = sub_41E290(*(_DWORD *)(dword_790358 + 160));
        return sub_422110(v3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_424D00
// entry 00424d00  size 18  status ok
//======================================================================

int __stdcall sub_424D00(int a1)
{
  return 1046;
}


//======================================================================
// sub_424D20
// entry 00424d20  size 78  status ok
//======================================================================

int __thiscall sub_424D20(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_5DB890(this);
  sub_41F1B0((_DWORD **)dword_790360);
  sub_425FB0(dword_790358, this);
  return sub_422600((_BYTE *)dword_79035C);
}


//======================================================================
// sub_424D70
// entry 00424d70  size 589  status ok
//======================================================================

int __thiscall sub_424D70(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // [esp+4h] [ebp-40h]
  int v13; // [esp+Ch] [ebp-38h]
  int v14; // [esp+10h] [ebp-34h]
  _DWORD *v15; // [esp+14h] [ebp-30h]
  _DWORD *v17; // [esp+1Ch] [ebp-28h]
  _DWORD v18[2]; // [esp+24h] [ebp-20h]
  _DWORD v19[2]; // [esp+2Ch] [ebp-18h]
  int i; // [esp+34h] [ebp-10h]
  int v21; // [esp+40h] [ebp-4h]

  v19[0] = "SID_CASINO_DEALERVOICE";
  v19[1] = "SID_CASINO_CONTINUEBUTTON";
  v18[0] = 50;
  v18[1] = 51;
  for ( i = 0; i < 2; ++i )
  {
    v5 = sub_630F40(v19[i]);
    v6 = sub_5F9EF0(0, v18[i], 3200201, 20, 20 * i + 85, 1, v5, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v6);
  }
  v7 = (char *)sub_630F40("SID_GENERIC_HELP");
  v8 = sub_5FA790(0, 10, v7, 72, 240, 84, 262, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v8);
  v17 = operator new(0x1D0u);
  v21 = 0;
  if ( v17 )
  {
    sub_5EC5A0(v17);
    *v17 = &CaribbeanStudSettingsHelpText::`vftable';
    v15 = v17;
  }
  else
  {
    v15 = 0;
  }
  v21 = -1;
  v9 = sub_5FA5B0(v15, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v9);
  if ( (unsigned __int8)sub_425D60(dword_790358) )
  {
    v14 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
  }
  result = (unsigned __int8)sub_425DA0(dword_790358);
  if ( (_BYTE)result )
  {
    v13 = sub_5FB350(51);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 244))(v13);
  }
  if ( dword_7947B0 )
  {
    if ( (unsigned __int8)sub_5CDD60(dword_7947B0) )
    {
      v11 = sub_5FB350(51);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11);
    }
    else
    {
      v12 = sub_5FB350(51);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 244))(v12);
    }
  }
  *(this + 124) = 0;
  return result;
}


//======================================================================
// sub_424FC0
// entry 00424fc0  size 216  status ok
//======================================================================

int __thiscall sub_424FC0(_BYTE *this, int a2, int a3)
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
  sub_425D80(v4);
  v5 = sub_5FB350(51);
  v6 = sub_600230(v5);
  sub_425DC0(v6);
  if ( dword_7947B0 )
  {
    v7 = sub_5FB350(51);
    v8 = sub_600230(v7);
    sub_5CDD10(v8 == 0);
  }
  if ( (unsigned __int8)sub_5DA830(dword_790354) )
    return sub_41F1B0((_DWORD **)dword_790360);
  sub_637610(dword_162EE84);
  sub_41F1B0((_DWORD **)dword_790360);
  result = (int)this;
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_425FB0(dword_790358, this);
    return sub_422600((_BYTE *)dword_79035C);
  }
  return result;
}


//======================================================================
// sub_4250A0
// entry 004250a0  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_4250A0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v4 = 329;
  v5[0] = 219;
  v5[1] = 134;
  v5[2] = 219;
  v5[3] = 458;
  v5[4] = 147;
  v5[5] = 5;
  v5[6] = 147;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 4 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\caribbeanstudroom.cpp", 441);
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
// sub_425140
// entry 00425140  size 284  status ok
//======================================================================

void __thiscall sub_425140(void *this, int a2)
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
// sub_425260
// entry 00425260  size 122  status ok
//======================================================================

int __thiscall sub_425260(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_422600((_BYTE *)dword_79035C);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\caribbeanstudroom.cpp", 502);
  sub_425FB0(dword_790358, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_4252E0
// entry 004252e0  size 15  status ok
//======================================================================

char __stdcall sub_4252E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return 0;
}


//======================================================================
// sub_425350
// entry 00425350  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_425350(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &CaribbeanStudRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_425380
// entry 00425380  size 120  status ok
//======================================================================

_DWORD *sub_425380()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_423CC0(v2);
  else
    return 0;
}


//======================================================================
// sub_425400
// entry 00425400  size 51  status ok
//======================================================================

char __stdcall sub_425400(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_CARIBBEANSTUDPOKER");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_425460
// entry 00425460  size 16  status ok
//======================================================================

int sub_425460()
{
  return 3213000;
}


//======================================================================
// sub_425470
// entry 00425470  size 16  status ok
//======================================================================

const char *sub_425470()
{
  return "caribbeanstud";
}


//======================================================================
// sub_425490
// entry 00425490  size 16  status ok
//======================================================================

char **sub_425490()
{
  return &off_710524;
}


//======================================================================
// sub_4254A0
// entry 004254a0  size 16  status ok
//======================================================================

char **sub_4254A0()
{
  return &off_71052C;
}


//======================================================================
// sub_4254D0
// entry 004254d0  size 94  status ok
//======================================================================

char __stdcall sub_4254D0(_DWORD *a1, int a2)
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
// sub_425530
// entry 00425530  size 16  status ok
//======================================================================

int sub_425530()
{
  return 20;
}


//======================================================================
// sub_425540
// entry 00425540  size 46  status ok
//======================================================================

char __stdcall sub_425540(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  return 1;
}


//======================================================================
// sub_425570
// entry 00425570  size 84  status ok
//======================================================================

char __stdcall sub_425570(_BYTE *a1)
{
  _BYTE *v2; // [esp+8h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  return 1;
}


//======================================================================
// sub_4255D0
// entry 004255d0  size 73  status ok
//======================================================================

char __stdcall sub_4255D0(_DWORD *a1)
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
// sub_425640
// entry 00425640  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_425640(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(3);
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
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)3 )
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
// sub_425770
// entry 00425770  size 446  status ok
//======================================================================

char __stdcall sub_425770(int a1, int a2)
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

  v20 = sub_63AAE0(3);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)3 )
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
// sub_425930
// entry 00425930  size 60  status ok
//======================================================================

char __stdcall sub_425930(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_425970
// entry 00425970  size 41  status ok
//======================================================================

char __stdcall sub_425970(int a1)
{
  if ( a1 != 3213000 )
    return 0;
  sub_653BD0(3);
  return 1;
}


//======================================================================
// sub_4259A0
// entry 004259a0  size 15  status ok
//======================================================================

char __stdcall sub_4259A0(int a1)
{
  return 0;
}


//======================================================================
// sub_4259B0
// entry 004259b0  size 15  status ok
//======================================================================

char __stdcall sub_4259B0(int a1)
{
  return 0;
}


//======================================================================
// sub_4259C0
// entry 004259c0  size 16  status ok
//======================================================================

void *sub_4259C0()
{
  return &unk_710530;
}


//======================================================================
// sub_4259D0
// entry 004259d0  size 190  status ok
//======================================================================

void *__stdcall sub_4259D0(int a1)
{
  int v1; // eax

  if ( (dword_790368 & 1) == 0 )
  {
    dword_790368 |= 1u;
    dword_710554 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_710558 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3213001 )
    return &unk_710550;
  else
    return 0;
}


//======================================================================
// sub_425A90
// entry 00425a90  size 16  status ok
//======================================================================

void *sub_425A90()
{
  return &unk_70FF98;
}


//======================================================================
// sub_425AA0
// entry 00425aa0  size 16  status ok
//======================================================================

void *sub_425AA0()
{
  return &unk_710458;
}


//======================================================================
// sub_425AB0
// entry 00425ab0  size 261  status ok
//======================================================================

char __stdcall sub_425AB0(int a1, int a2)
{
  if ( a2 == 3213000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(3, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3213000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_425BE0
// entry 00425be0  size 83  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_425BE0(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CaribbeanStudState::`vftable';
  *((_DWORD *)this + 1) = 0;
  for ( i = 0; i < 8; ++i )
    *((_DWORD *)this + i + 2) = 0;
  return this;
}


//======================================================================
// sub_425C40
// entry 00425c40  size 210  status ok
//======================================================================

void __thiscall sub_425C40(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &CaribbeanStudState::`vftable';
  if ( *((_DWORD *)this + 1) )
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
  for ( i = 0; i < 8; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_425D20
// entry 00425d20  size 62  status ok
//======================================================================

int __stdcall sub_425D20(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_425D60
// entry 00425d60  size 23  status ok
//======================================================================

char __thiscall sub_425D60(void *this)
{
  return *(_BYTE *)sub_425D20(-1);
}


//======================================================================
// sub_425D80
// entry 00425d80  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_425D80(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_425D20(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_425DA0
// entry 00425da0  size 24  status ok
//======================================================================

char sub_425DA0()
{
  return *(_BYTE *)(sub_425D20(-1) + 1);
}


//======================================================================
// sub_425DC0
// entry 00425dc0  size 47  status ok
//======================================================================

int __stdcall sub_425DC0(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_425D20(-1) + 1) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_425DF0
// entry 00425df0  size 443  status ok
//======================================================================

int __thiscall sub_425DF0(_DWORD *this)
{
  __int64 v2; // [esp-8h] [ebp-48h]
  _AFX_OLE_STATE *v3; // [esp+4h] [ebp-3Ch]
  int v4; // [esp+8h] [ebp-38h]
  _AFX_OLE_STATE *v6; // [esp+20h] [ebp-20h]
  void *v7; // [esp+28h] [ebp-18h]
  int i; // [esp+30h] [ebp-10h]
  int j; // [esp+30h] [ebp-10h]
  int k; // [esp+30h] [ebp-10h]

  if ( !*(this + 1) )
  {
    v7 = operator new(0x810u);
    if ( v7 )
      v4 = sub_642E10(v7);
    else
      v4 = 0;
    *(this + 1) = v4;
  }
  sub_642E70(0);
  sub_6437D0(1, 0);
  for ( i = 0; i < 8; ++i )
  {
    v6 = (_AFX_OLE_STATE *)operator new(0xF0u);
    if ( v6 )
      v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v6);
    else
      v3 = 0;
    *(this + i + 2) = v3;
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 2), (struct CPaneDivider *)i);
    *((_QWORD *)this + i + 5) = sub_64C8A0(0, 0);
  }
  for ( j = 0; j < 5; ++j )
    *((_BYTE *)this + j + 104) = 0;
  for ( k = 0; k < 5; ++k )
  {
    v2 = sub_64C8A0(0, 0);
    sub_5DCB00(k);
    sub_5D6050(v2, HIDWORD(v2));
  }
  return sub_425FB0(this);
}


//======================================================================
// sub_425FB0
// entry 00425fb0  size 405  status ok
//======================================================================

int __thiscall sub_425FB0(int this)
{
  int result; // eax
  int k; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]
  int m; // [esp+14h] [ebp-4h]

  *(_BYTE *)(this + 174) = 0;
  *(_BYTE *)(this + 164) = 0;
  sub_426200(this);
  sub_426C40(this);
  sub_426260(-1, 0);
  *(_DWORD *)(this + 224) = -1;
  result = this;
  *(_DWORD *)(this + 228) = -1;
  for ( i = 0; i < 8; ++i )
    result = sub_5CB9B0(*(_DWORD *)(this + 4 * i + 8));
  for ( j = 0; j < 5; ++j )
  {
    *(_BYTE *)(j + this + 169) = 0;
    for ( k = 0; k < 5; ++k )
    {
      sub_4262B0(j, k, 0);
      result = k + 1;
    }
  }
  for ( m = 0; m < 4; ++m )
  {
    *(_BYTE *)(sub_5DCB00(m) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1185) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1186) = 0;
    *(_BYTE *)(m + this + 212) = 0;
    *(_BYTE *)(m + this + 216) = 0;
    *(_BYTE *)(m + this + 208) = 0;
    *(_BYTE *)(m + this + 220) = 0;
    *(_DWORD *)(this + 4 * m + 176) = -1;
    *(_DWORD *)(this + 4 * m + 192) = -1;
    result = m + 1;
  }
  return result;
}


//======================================================================
// sub_426150
// entry 00426150  size 162  status ok
//======================================================================

char sub_426150()
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
// sub_426200
// entry 00426200  size 48  status ok
//======================================================================

int sub_426200()
{
  sub_6437D0(1, 0);
  return sub_643930(5, 5, "CarStud", 1);
}


//======================================================================
// sub_426230
// entry 00426230  size 45  status ok
//======================================================================

int __thiscall sub_426230(_DWORD *this)
{
  if ( *(this + 40) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 40));
}


//======================================================================
// sub_426260
// entry 00426260  size 77  status ok
//======================================================================

int __thiscall sub_426260(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 40) = a2;
  if ( *(this + 40) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_4262B0
// entry 004262b0  size 37  status ok
//======================================================================

int __thiscall sub_4262B0(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 5 * a2 + a3 + 54) = a4;
  return a3;
}


//======================================================================
// sub_4262E0
// entry 004262e0  size 33  status ok
//======================================================================

__int16 __thiscall sub_4262E0(_WORD *this, int a2, int a3)
{
  return *(this + 5 * a2 + a3 + 54);
}


//======================================================================
// sub_426310
// entry 00426310  size 87  status ok
//======================================================================

int __thiscall sub_426310(_WORD *this, int a2, __int16 a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5 && sub_4262E0(this, a2, i); ++i )
    ;
  return sub_4262B0(this, a2, i, a3);
}


//======================================================================
// sub_426370
// entry 00426370  size 83  status ok
//======================================================================

int __thiscall sub_426370(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_4262E0(this, a2, i) )
      ++v4;
  }
  return v4;
}


//======================================================================
// sub_4263D0
// entry 004263d0  size 70  status ok
//======================================================================

bool __stdcall sub_4263D0(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_5DCB00(a1);
  v2 = sub_5D5A50(v1);
  return v2 >= 3 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_790354 + 688))(dword_790354);
}


//======================================================================
// sub_426420
// entry 00426420  size 212  status ok
//======================================================================

int sub_426420()
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
// sub_426500
// entry 00426500  size 86  status ok
//======================================================================

char __stdcall sub_426500(int a1)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_426560
// entry 00426560  size 64  status ok
//======================================================================

int __thiscall sub_426560(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
  {
    if ( *(this + i + 2) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_4265A0
// entry 004265a0  size 128  status ok
//======================================================================

_DWORD *__thiscall sub_4265A0(_DWORD *this, int a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(*(this + 2 * a2 + 2) + 32 * a2 + 72);
  a3[1] = *(_DWORD *)(*(this + 2 * a2 + 2) + 32 * a2 + 76);
  return a3;
}


//======================================================================
// sub_426620
// entry 00426620  size 73  status ok
//======================================================================

char *__thiscall sub_426620(_BYTE *this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-14h]

  v3 = sub_64C8A0(-1, 0);
  sub_5DCB00(a2);
  sub_5D5CF0(v3, HIDWORD(v3));
  *(this + a2 + 212) = 1;
  return this + a2;
}


//======================================================================
// sub_426670
// entry 00426670  size 71  status ok
//======================================================================

char __thiscall sub_426670(int *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]

  for ( i = 0; i < 2; ++i )
  {
    if ( *(this + 4 * a2 + 2 * i + 10) > 0 )
      return 1;
  }
  return 0;
}


