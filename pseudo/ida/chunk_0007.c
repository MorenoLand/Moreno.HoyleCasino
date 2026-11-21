//======================================================================
// sub_44F7E0
// entry 0044f7e0  size 81  status ok
//======================================================================

int __thiscall sub_44F7E0(_DWORD *this, int a2, int a3)
{
  if ( a2 <= 0 || a2 >= 15 )
    sub_5E9F20((char)"rank > 0 && rank < 15", "..\\Casino\\paigowai.cpp", 361);
  if ( a2 == 1 )
    a2 = 14;
  return *(this + 11 * a2 + a3 + 12);
}


//======================================================================
// sub_44F840
// entry 0044f840  size 201  status ok
//======================================================================

__int16 __thiscall sub_44F840(_WORD *this, unsigned int a2, unsigned int a3, _WORD *a4, _WORD *a5)
{
  int v5; // esi
  __int16 result; // ax

  if ( a2 > 6 )
    sub_5E9F20((char)"index1 > -1 && index1 < 7", "..\\Casino\\paigowai.cpp", 370);
  if ( a3 > 6 )
    sub_5E9F20((char)"index2 > -1 && index2 < 7", "..\\Casino\\paigowai.cpp", 371);
  v5 = sub_44F680(*(this + a2 + 2));
  if ( v5 < sub_44F680(*(this + a3 + 2)) )
  {
    *a4 = *(this + a3 + 2);
    result = *(this + a2 + 2);
    *a5 = result;
  }
  else
  {
    *a4 = *(this + a2 + 2);
    *a5 = *(this + a3 + 2);
    return (__int16)this;
  }
  return result;
}


//======================================================================
// sub_44F910
// entry 0044f910  size 269  status ok
//======================================================================

char __thiscall sub_44F910(int this)
{
  if ( *(__int16 *)(this + 694) < 5
    && *(__int16 *)(this + 696) < 5
    && *(__int16 *)(this + 700) < 5
    && *(__int16 *)(this + 698) < 5 )
  {
    return 0;
  }
  if ( *(__int16 *)(this + 694) >= 5 )
  {
    *(_DWORD *)(this + 720) = 3;
    *(_DWORD *)(this + 724) = *(__int16 *)(this + 694);
  }
  if ( *(__int16 *)(this + 696) >= 5 )
  {
    *(_DWORD *)(this + 720) = 0;
    *(_DWORD *)(this + 724) = *(__int16 *)(this + 696);
  }
  if ( *(__int16 *)(this + 700) >= 5 )
  {
    *(_DWORD *)(this + 720) = 1;
    *(_DWORD *)(this + 724) = *(__int16 *)(this + 700);
  }
  if ( *(__int16 *)(this + 698) >= 5 )
  {
    *(_DWORD *)(this + 720) = 2;
    *(_DWORD *)(this + 724) = *(__int16 *)(this + 698);
  }
  return 1;
}


//======================================================================
// sub_44FA20
// entry 0044fa20  size 241  status ok
//======================================================================

char __thiscall sub_44FA20(int this)
{
  if ( !*(_BYTE *)(this + 702) || *(_BYTE *)(this + 704) )
    return 0;
  if ( *(_WORD *)(this + 694) != 4
    && *(_WORD *)(this + 696) != 4
    && *(_WORD *)(this + 700) != 4
    && *(_WORD *)(this + 698) != 4 )
  {
    return 0;
  }
  if ( *(_WORD *)(this + 694) == 4 )
    *(_DWORD *)(this + 720) = 3;
  if ( *(_WORD *)(this + 696) == 4 )
    *(_DWORD *)(this + 720) = 0;
  if ( *(_WORD *)(this + 700) == 4 )
    *(_DWORD *)(this + 720) = 1;
  if ( *(_WORD *)(this + 698) == 4 )
    *(_DWORD *)(this + 720) = 2;
  *(_DWORD *)(this + 724) = 4;
  return 1;
}


//======================================================================
// sub_44FB20
// entry 0044fb20  size 821  status ok
//======================================================================

char __thiscall sub_44FB20(int this)
{
  int v2; // [esp+Ch] [ebp-2ACh]
  int v3; // [esp+10h] [ebp-2A8h]
  int v4; // [esp+14h] [ebp-2A4h]
  int v5; // [esp+18h] [ebp-2A0h]
  int i; // [esp+1Ch] [ebp-29Ch]
  int j; // [esp+1Ch] [ebp-29Ch]
  int k; // [esp+1Ch] [ebp-29Ch]
  _DWORD v9[11]; // [esp+20h] [ebp-298h] BYREF
  int v10; // [esp+4Ch] [ebp-26Ch]
  int v11; // [esp+288h] [ebp-30h]

  v4 = 0;
  v3 = 0;
  v2 = 0;
  v5 = 0;
  for ( i = 0; i < 15; ++i )
    qmemcpy(&v9[11 * i], (const void *)(this + 44 * i + 24), 0x2Cu);
  if ( *(_BYTE *)(this + 702) )
  {
    --v10;
    --v11;
  }
  for ( j = 1; j < 15; ++j )
  {
    if ( v9[11 * j] )
    {
      if ( !v2 )
        v4 = j;
      if ( ++v2 >= 5 )
      {
        v5 = v2;
        v3 = v4;
      }
    }
    else
    {
      v2 = 0;
      v4 = 0;
    }
  }
  if ( v5 < 5 )
    return 0;
  *(_DWORD *)(this + 756) = v5;
  *(_DWORD *)(this + 760) = v3;
  if ( *(_BYTE *)(this + 702) )
  {
    if ( v3 <= 2 || (int)v9[11 * v3 - 22] <= 0 )
    {
      if ( v3 + *(_DWORD *)(this + 756) == 15 )
      {
        *(_DWORD *)(this + 764) = --*(_DWORD *)(this + 760);
      }
      else
      {
        *(_DWORD *)(this + 764) = *(_DWORD *)(this + 756) + v3;
        if ( *(int *)(this + 764) < 14 && (int)v9[11 * *(_DWORD *)(this + 764) + 11] > 0 )
          ++*(_DWORD *)(this + 756);
      }
    }
    else
    {
      *(_DWORD *)(this + 760) -= 2;
      *(_DWORD *)(this + 764) = *(_DWORD *)(this + 760) + 1;
      ++*(_DWORD *)(this + 756);
    }
    ++*(_DWORD *)(this + 756);
  }
  for ( k = 0; k < *(_DWORD *)(this + 756); ++k )
    *(_DWORD *)(this + 4 * k + 728) = k + *(_DWORD *)(this + 760);
  return 1;
}


//======================================================================
// sub_44FE60
// entry 0044fe60  size 1157  status ok
//======================================================================

char __thiscall sub_44FE60(int this)
{
  int v3; // [esp+10h] [ebp-2C4h]
  int v4; // [esp+14h] [ebp-2C0h]
  int v5; // [esp+18h] [ebp-2BCh]
  int v6; // [esp+1Ch] [ebp-2B8h]
  int v7; // [esp+20h] [ebp-2B4h]
  char v8; // [esp+27h] [ebp-2ADh]
  int v9; // [esp+28h] [ebp-2ACh]
  int v10; // [esp+2Ch] [ebp-2A8h]
  int i; // [esp+30h] [ebp-2A4h]
  int j; // [esp+30h] [ebp-2A4h]
  int k; // [esp+30h] [ebp-2A4h]
  int m; // [esp+30h] [ebp-2A4h]
  int v15; // [esp+34h] [ebp-2A0h]
  int v16; // [esp+38h] [ebp-29Ch]
  _DWORD v17[11]; // [esp+3Ch] [ebp-298h] BYREF
  int v18; // [esp+68h] [ebp-26Ch]
  int v19; // [esp+2A4h] [ebp-30h]

  if ( !*(_BYTE *)(this + 702) || *(_BYTE *)(this + 707) )
    return 0;
  v9 = 0;
  v3 = 0;
  v4 = 0;
  v10 = 0;
  v16 = 0;
  v8 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v15 = 0;
  for ( i = 0; i < 15; ++i )
    qmemcpy(&v17[11 * i], (const void *)(this + 44 * i + 24), 0x2Cu);
  if ( *(_BYTE *)(this + 702) )
  {
    --v18;
    --v19;
  }
  for ( j = 1; j < 15; ++j )
  {
    if ( v17[11 * j] )
    {
      if ( !v3 )
        v10 = j;
      if ( ++v3 >= 5 )
      {
        v9 = v3;
        v5 = v10;
        v7 = v16;
      }
    }
    else if ( v8 )
    {
      if ( v3 >= 5 && !v4 )
      {
        v4 = v9;
        v6 = v10;
        v15 = v16;
      }
      if ( v10 < 10 )
        j = v16;
      v3 = 0;
      v10 = 0;
      v16 = 0;
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v16 = j;
      if ( !v3 )
        v10 = j;
      if ( ++v3 >= 5 )
      {
        v9 = v3;
        v5 = v10;
        v7 = j;
      }
    }
  }
  if ( v9 < 5 )
    return 0;
  *(_DWORD *)(this + 756) = v9;
  *(_DWORD *)(this + 760) = v5;
  *(_DWORD *)(this + 764) = v7;
  if ( (unsigned __int8)sub_45F940(dword_790738) && *(_DWORD *)(this + 760) == 1 && *(_DWORD *)(this + 764) == 1 )
  {
    *(_DWORD *)(this + 760) = 2;
    *(_DWORD *)(this + 764) = 14;
  }
  for ( k = 0; k < *(_DWORD *)(this + 756); ++k )
    *(_DWORD *)(this + 4 * k + 728) = k + *(_DWORD *)(this + 760);
  if ( v4 >= 5 && v5 != v6 )
  {
    *(_DWORD *)(this + 796) = v4;
    *(_DWORD *)(this + 800) = v6;
    *(_DWORD *)(this + 804) = v15;
    if ( (unsigned __int8)sub_45F940(dword_790738) && *(_DWORD *)(this + 800) == 1 && *(_DWORD *)(this + 804) == 1 )
    {
      *(_DWORD *)(this + 800) = 2;
      *(_DWORD *)(this + 804) = 14;
    }
    for ( m = 0; m < *(_DWORD *)(this + 796); ++m )
      *(_DWORD *)(this + 4 * m + 768) = m + *(_DWORD *)(this + 800);
  }
  return 1;
}


//======================================================================
// sub_4502F0
// entry 004502f0  size 905  status ok
//======================================================================

char __thiscall sub_4502F0(int this)
{
  int v2; // [esp+Ch] [ebp-2ACh]
  int v3; // [esp+10h] [ebp-2A8h]
  int v4; // [esp+14h] [ebp-2A4h]
  int v5; // [esp+18h] [ebp-2A0h]
  int i; // [esp+1Ch] [ebp-29Ch]
  int j; // [esp+1Ch] [ebp-29Ch]
  int k; // [esp+1Ch] [ebp-29Ch]
  _DWORD v9[11]; // [esp+20h] [ebp-298h] BYREF
  int v10; // [esp+4Ch] [ebp-26Ch]
  int v11; // [esp+288h] [ebp-30h]

  if ( !*(_BYTE *)(this + 707) || !*(_BYTE *)(this + 704) )
    return 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v2 = 0;
  for ( i = 0; i < 15; ++i )
    qmemcpy(&v9[11 * i], (const void *)(this + 44 * i + 24), 0x2Cu);
  if ( *(_BYTE *)(this + 702) )
  {
    --v10;
    --v11;
  }
  for ( j = 0; j < *(_DWORD *)(this + 756); ++j )
  {
    if ( v9[11 * *(_DWORD *)(this + 4 * j + 728) + 1 + *(_DWORD *)(this + 720)] )
    {
      if ( !v2 )
        v4 = *(_DWORD *)(this + 4 * j + 728);
      if ( ++v2 >= 5 )
      {
        v5 = v2;
        v3 = v4;
      }
    }
    else
    {
      v2 = 0;
      v4 = 0;
    }
  }
  if ( !v5 )
    return 0;
  *(_DWORD *)(this + 836) = v5;
  *(_DWORD *)(this + 840) = v3;
  if ( *(_BYTE *)(this + 702) )
  {
    if ( v3 + v5 == 15 )
    {
      *(_DWORD *)(this + 844) = v3 - 1;
      --*(_DWORD *)(this + 840);
      if ( v9[11 * *(_DWORD *)(this + 844) - 10 + *(_DWORD *)(this + 720)] )
      {
        --*(_DWORD *)(this + 840);
        ++*(_DWORD *)(this + 836);
      }
    }
    else
    {
      *(_DWORD *)(this + 844) = v5 + v3;
      if ( *(_DWORD *)(this + 844) != 14 && v9[11 * *(_DWORD *)(this + 844) + 12 + *(_DWORD *)(this + 720)] )
        ++*(_DWORD *)(this + 836);
    }
    ++*(_DWORD *)(this + 836);
  }
  for ( k = 0; k < *(_DWORD *)(this + 836); ++k )
    *(_DWORD *)(this + 4 * k + 808) = k + *(_DWORD *)(this + 840);
  return 1;
}


//======================================================================
// sub_450680
// entry 00450680  size 1244  status ok
//======================================================================

char __thiscall sub_450680(int this)
{
  int k; // [esp+Ch] [ebp-2A8h]
  int m; // [esp+Ch] [ebp-2A8h]
  int ii; // [esp+Ch] [ebp-2A8h]
  int jj; // [esp+Ch] [ebp-2A8h]
  int mm; // [esp+Ch] [ebp-2A8h]
  int nn; // [esp+Ch] [ebp-2A8h]
  int v8; // [esp+10h] [ebp-2A4h]
  int i; // [esp+14h] [ebp-2A0h]
  int j; // [esp+14h] [ebp-2A0h]
  int n; // [esp+14h] [ebp-2A0h]
  int kk; // [esp+14h] [ebp-2A0h]
  int v13; // [esp+18h] [ebp-29Ch]
  int v14; // [esp+18h] [ebp-29Ch]
  int v15; // [esp+18h] [ebp-29Ch]
  _DWORD v16[11]; // [esp+1Ch] [ebp-298h] BYREF
  int v17; // [esp+48h] [ebp-26Ch]
  int v18; // [esp+284h] [ebp-30h]

  if ( !*(_BYTE *)(this + 702) || *(_BYTE *)(this + 710) || !*(_BYTE *)(this + 706) || !*(_BYTE *)(this + 709) )
    return 0;
  v8 = 0;
  for ( i = 0; i < 15; ++i )
    qmemcpy(&v16[11 * i], (const void *)(this + 44 * i + 24), 0x2Cu);
  --v17;
  --v18;
  for ( j = 8; j > 0; --j )
  {
    v13 = 0;
    for ( k = 0; k < 7; ++k )
    {
      if ( v16[11 * k + 11 * j] && v16[11 * k + 1 + 11 * j + *(_DWORD *)(this + 720)] )
        ++v13;
      else
        v8 = k + j;
    }
    if ( v13 == 6 )
    {
      *(_DWORD *)(this + 836) = 7;
      *(_DWORD *)(this + 840) = j;
      *(_DWORD *)(this + 844) = v8;
      for ( m = 0; m < 7; ++m )
        *(_DWORD *)(this + 4 * m + 808) = m + *(_DWORD *)(this + 840);
      return 1;
    }
  }
  for ( n = 9; n > 0; --n )
  {
    v14 = 0;
    for ( ii = 0; ii < 6; ++ii )
    {
      if ( v16[11 * ii + 11 * n] && v16[11 * ii + 1 + 11 * n + *(_DWORD *)(this + 720)] )
        ++v14;
      else
        v8 = ii + n;
    }
    if ( v14 == 5 )
    {
      *(_DWORD *)(this + 836) = 6;
      *(_DWORD *)(this + 840) = n;
      *(_DWORD *)(this + 844) = v8;
      for ( jj = 0; jj < 6; ++jj )
        *(_DWORD *)(this + 4 * jj + 808) = jj + *(_DWORD *)(this + 840);
      return 1;
    }
  }
  for ( kk = 10; ; --kk )
  {
    if ( kk <= 0 )
      return 0;
    v15 = 0;
    for ( mm = 0; mm < 5; ++mm )
    {
      if ( v16[11 * mm + 11 * kk] && v16[11 * mm + 1 + 11 * kk + *(_DWORD *)(this + 720)] )
        ++v15;
      else
        v8 = mm + kk;
    }
    if ( v15 == 4 )
      break;
  }
  *(_DWORD *)(this + 836) = 5;
  *(_DWORD *)(this + 840) = kk;
  *(_DWORD *)(this + 844) = v8;
  for ( nn = 0; nn < 5; ++nn )
    *(_DWORD *)(this + 4 * nn + 808) = nn + *(_DWORD *)(this + 840);
  return 1;
}


//======================================================================
// sub_450B60
// entry 00450b60  size 89  status ok
//======================================================================

int __thiscall sub_450B60(_DWORD *this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v6 = 0;
  for ( i = 2; i < 15; ++i )
  {
    if ( sub_44F700(this, i) == a2 && ++v6 == a3 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_450BC0
// entry 00450bc0  size 89  status ok
//======================================================================

int __stdcall sub_450BC0(int a1, int a2, int a3)
{
  int i; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( i = 2; i < 15; ++i )
  {
    if ( *(_DWORD *)(a1 + 44 * i) == a2 && ++v5 == a3 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_450C20
// entry 00450c20  size 36  status ok
//======================================================================

bool __thiscall sub_450C20(_DWORD *this, int a2)
{
  return sub_44F700(this, a2) > 1;
}


//======================================================================
// sub_450C50
// entry 00450c50  size 121  status ok
//======================================================================

void __thiscall sub_450C50(_DWORD *this, int a2, int *a3, int *a4)
{
  int v4; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v4 = sub_44F680(*((_WORD *)this + i + 2));
    if ( !sub_450C20(this, v4) && !--a2 )
    {
      *a3 = sub_44F680(*((_WORD *)this + i + 2));
      *a4 = i;
    }
  }
}


//======================================================================
// sub_450CD0
// entry 00450cd0  size 416  status ok
//======================================================================

int __thiscall sub_450CD0(_DWORD *this, int a2, int *a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v9; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v9 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      for ( i = 6; i > 0; --i )
      {
        v5 = sub_44F680(*((_WORD *)this + i + 2));
        if ( sub_450C20(this, v5) )
        {
          if ( a3 )
          {
            *a3 = i;
            *a4 = i - 1;
          }
          return sub_44F680(*((_WORD *)this + i + 2));
        }
      }
    }
    else if ( a2 == 2 )
    {
      for ( i = 0; i < 7; ++i )
      {
        v6 = sub_44F680(*((_WORD *)this + i + 2));
        if ( sub_450C20(this, v6) )
        {
          if ( v9 )
          {
            if ( a3 )
            {
              *a3 = i;
              *a4 = i + 1;
            }
            return sub_44F680(*((_WORD *)this + i + 2));
          }
          v9 = 1;
        }
      }
    }
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      v4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( sub_450C20(this, v4) )
      {
        if ( a3 )
        {
          *a3 = i;
          *a4 = i + 1;
        }
        return sub_44F680(*((_WORD *)this + i + 2));
      }
    }
  }
  return 0;
}


//======================================================================
// sub_450E70
// entry 00450e70  size 1099  status ok
//======================================================================

int __fastcall sub_450E70(int a1, int a2, int *a3, int *a4)
{
  int result; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int ii; // [esp+8h] [ebp-8h]
  int j; // [esp+Ch] [ebp-4h]
  int k; // [esp+Ch] [ebp-4h]
  int i; // [esp+Ch] [ebp-4h]
  int m; // [esp+Ch] [ebp-4h]
  int n; // [esp+Ch] [ebp-4h]
  int jj; // [esp+Ch] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 709) )
  {
    *a3 = -1;
    *a4 = -1;
    if ( (*(_DWORD *)(a1 + 728) != 1 || *(_DWORD *)(a1 + 764) == 1)
      && ((result = a1, *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 756) + 724) != 14)
       || (result = a1, *(_DWORD *)(a1 + 764) == 14)) )
    {
      for ( i = 0; i < 7; ++i )
      {
        if ( sub_44F680(*(_WORD *)(a1 + 2 * i + 4)) == 14 )
        {
          result = sub_44F6C0(*(_WORD *)(a1 + 2 * i + 4));
          if ( result != -1 )
          {
            if ( *a3 != -1 )
            {
              *a4 = i;
              return result;
            }
            *a3 = i;
          }
        }
        result = i + 1;
      }
    }
    else if ( *(_BYTE *)(a1 + 702) )
    {
      if ( sub_44F700((_DWORD *)a1, 14) == 3 )
      {
        for ( j = 0; j < 3; ++j )
        {
          if ( sub_44F6C0(*(_WORD *)(a1 + 2 * j + 4)) != -1 )
          {
            *a3 = j;
            break;
          }
        }
      }
      result = sub_44F700((_DWORD *)a1, 14);
      if ( result == 4 )
      {
        for ( k = 0; k < 3; ++k )
        {
          result = sub_44F6C0(*(_WORD *)(a1 + 2 * k + 4));
          if ( result != -1 )
          {
            if ( *a3 != -1 )
            {
              *a4 = k;
              return result;
            }
            *a3 = k;
          }
          result = k + 1;
        }
      }
    }
    else
    {
      if ( sub_44F700((_DWORD *)a1, 14) == 2 )
        *a3 = 0;
      result = sub_44F700((_DWORD *)a1, 14);
      if ( result == 3 )
      {
        *a3 = 0;
        *a4 = 1;
      }
    }
    for ( m = 0; m < 7; ++m )
    {
      if ( sub_44F680(*(_WORD *)(a1 + 2 * m + 4)) != 14
        && sub_44F680(*(_WORD *)(a1 + 2 * m + 4)) > *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 756) + 724) )
      {
        if ( *a3 != -1 )
        {
          *a4 = m;
          return m;
        }
        *a3 = m;
      }
      result = m + 1;
    }
    for ( n = 0; n < 7; ++n )
    {
      result = sub_44F680(*(_WORD *)(a1 + 2 * n + 4));
      if ( result != 14 )
      {
        if ( *a3 == -1
          || (v5 = sub_44F680(*(_WORD *)(a1 + 2 * *a3 + 4)),
              result = sub_44F680(*(_WORD *)(a1 + 2 * n + 4)),
              v5 != result) )
        {
          for ( ii = 0; ; ++ii )
          {
            result = ii;
            if ( ii >= *(_DWORD *)(a1 + 756) )
              break;
            if ( sub_44F680(*(_WORD *)(a1 + 2 * n + 4)) == *(_DWORD *)(a1 + 4 * ii + 728) )
            {
              v6 = sub_44F680(*(_WORD *)(a1 + 2 * n + 4));
              if ( sub_450C20((_DWORD *)a1, v6) )
              {
                v7 = sub_44F680(*(_WORD *)(a1 + 2 * n + 4));
                result = sub_44F700((_DWORD *)a1, v7);
                if ( result == 2 )
                {
                  if ( *a3 == -1 )
                  {
                    result = n;
                    *a3 = n;
                    break;
                  }
                  *a4 = n;
                  return result;
                }
                v8 = sub_44F680(*(_WORD *)(a1 + 2 * n + 4));
                if ( sub_44F700((_DWORD *)a1, v8) == 3 )
                {
                  if ( *a3 == -1 )
                  {
                    *a3 = n;
                    *a4 = n + 1;
                    return n + 1;
                  }
                  else
                  {
                    *a4 = n;
                    return n;
                  }
                }
              }
            }
          }
        }
      }
    }
    for ( jj = 0; jj < 7; ++jj )
    {
      result = sub_44F680(*(_WORD *)(a1 + 2 * jj + 4));
      if ( result != 14 )
      {
        result = sub_44F680(*(_WORD *)(a1 + 2 * jj + 4));
        if ( result < *(_DWORD *)(a1 + 728) )
        {
          result = (int)a3;
          if ( *a3 != -1 )
          {
            *a4 = jj;
            return (int)a4;
          }
          *a3 = jj;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_4512C0
// entry 004512c0  size 627  status ok
//======================================================================

int __fastcall sub_4512C0(int a1, int a2, BOOL *a3, int *a4)
{
  int result; // eax
  int v6; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int i; // [esp+Ch] [ebp-8h]
  BOOL v9; // [esp+10h] [ebp-4h]

  result = sub_450E70(a1, a2, &v7, &v6);
  if ( *(_DWORD *)(a1 + 756) == 7 )
  {
    if ( !*(_BYTE *)(a1 + 702)
      || *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 752)
      || *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 748) )
    {
      *a3 = 0;
      result = (int)a4;
      *a4 = 1;
    }
    else
    {
      v9 = sub_44F6C0(*(_WORD *)(a1 + 4)) != -1;
      if ( *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 744)
        || *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 740)
        || *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 736) )
      {
        result = (int)a3;
        *a3 = !v9;
        *a4 = 2;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 764) != *(_DWORD *)(a1 + 732) )
          sub_5E9F20((char)"jokerRankInStraight == straight[1]", "..\\Casino\\paigowai.cpp", 1116);
        result = a1;
        if ( *(_DWORD *)(a1 + 728) == 1 )
        {
          *a3 = 0;
          *a4 = 1;
        }
        else if ( *(_DWORD *)(a1 + 752) == 14 )
        {
          *a3 = !v9;
          result = (int)a4;
          *a4 = 2;
        }
        else
        {
          *a3 = v9;
          result = (int)a4;
          *a4 = 6;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 756) == 6 )
  {
    result = v7;
    *a3 = v7;
    if ( *(_DWORD *)(a1 + 728) == 1 )
    {
      for ( i = 0; i < 7; ++i )
      {
        result = sub_44F680(*(_WORD *)(a1 + 2 * i + 4));
        if ( result == 14 )
        {
          result = (int)a3;
          if ( i != *a3 )
          {
            result = i;
            *a4 = i;
            break;
          }
        }
      }
    }
    else
    {
      for ( i = 0; i < 7; ++i )
      {
        if ( i != v7 )
        {
          if ( sub_44F680(*(_WORD *)(a1 + 2 * i + 4)) == *(_DWORD *)(a1 + 748)
            || (result = sub_44F6C0(*(_WORD *)(a1 + 2 * i + 4)), result == -1)
            && (result = a1, *(_DWORD *)(a1 + 764) == *(_DWORD *)(a1 + 748)) )
          {
            result = i;
            *a4 = i;
            break;
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 756) == 5 )
  {
    result = v7;
    *a3 = v7;
    *a4 = v6;
  }
  return result;
}


//======================================================================
// sub_451540
// entry 00451540  size 162  status ok
//======================================================================

int __thiscall sub_451540(int this, int *a2, int *a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = this;
  if ( *(_BYTE *)(this + 706) )
  {
    *a2 = -1;
    result = (int)a3;
    *a3 = -1;
    for ( i = 0; i < 7; ++i )
    {
      result = sub_44F6C0(*(_WORD *)(this + 2 * i + 4));
      if ( result != *(_DWORD *)(this + 720) )
      {
        result = sub_44F6C0(*(_WORD *)(this + 2 * i + 4));
        if ( result != -1 )
        {
          result = (int)a2;
          if ( *a2 != -1 )
          {
            *a3 = i;
            return (int)a3;
          }
          *a2 = i;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_4515F0
// entry 004515f0  size 162  status ok
//======================================================================

int __thiscall sub_4515F0(int this, int *a2, int *a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = this;
  if ( *(_BYTE *)(this + 706) )
  {
    *a2 = -1;
    result = (int)a3;
    *a3 = -1;
    for ( i = 0; i < 7; ++i )
    {
      if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != *(_DWORD *)(this + 720) )
      {
        result = sub_44F6C0(*(_WORD *)(this + 2 * i + 4));
        if ( result != -1 )
          continue;
      }
      result = (int)a2;
      if ( *a2 != -1 )
      {
        *a3 = i;
        return (int)a3;
      }
      *a2 = i;
    }
  }
  return result;
}


//======================================================================
// sub_4516A0
// entry 004516a0  size 256  status ok
//======================================================================

int __thiscall sub_4516A0(int this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int v4; // esi
  int v5; // [esp+4h] [ebp-1Ch]
  int v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  v8 = 0;
  v11 = 0;
  v10 = 0;
  v7 = 0;
  if ( *(_BYTE *)(this + 702) )
    v5 = *(_DWORD *)(this + 724) + 1;
  else
    v5 = *(_DWORD *)(this + 724);
  v9 = v5;
  sub_451540(this, &v8, &v11);
  result = sub_4515F0(this, &v10, &v7);
  if ( v9 == 7 )
  {
    result = v10;
    *a2 = v10;
    *a3 = v7;
  }
  if ( v9 == 6 )
  {
    v4 = sub_44F680(*(_WORD *)(this + 2 * v8 + 4));
    if ( v4 < sub_44F680(*(_WORD *)(this + 2 * v10 + 4)) )
    {
      *a2 = v10;
      result = (int)a3;
      *a3 = v8;
    }
    else
    {
      *a2 = v8;
      result = v10;
      *a3 = v10;
    }
  }
  if ( v9 == 5 )
  {
    result = v8;
    *a2 = v8;
    *a3 = v11;
  }
  return result;
}


//======================================================================
// sub_4517A0
// entry 004517a0  size 201  status ok
//======================================================================

void __thiscall sub_4517A0(_DWORD *this, int *a2, int *a3, int *a4)
{
  int v4; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v4 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_450C20(this, v4) )
    {
      *a4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( sub_44F680(*((_WORD *)this + i + 2)) == 14 && sub_44F6C0(*((_WORD *)this + i + 2)) == -1 )
      {
        *a2 = i + 1;
        *a3 = i;
      }
      else
      {
        *a2 = i;
        *a3 = i + 1;
      }
      return;
    }
  }
}


//======================================================================
// sub_451870
// entry 00451870  size 934  status ok
//======================================================================

char __thiscall sub_451870(int this, int a2, int a3, int a4, int *a5, int *a6)
{
  int v7; // eax
  int j; // [esp+4h] [ebp-4h]
  int i; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 718) || !*(_BYTE *)(this + 709) )
    return 0;
  *a5 = -1;
  *a6 = -1;
  if ( !*(_BYTE *)(this + 714) )
  {
    if ( !*(_BYTE *)(this + 702) )
    {
      if ( (a2 > *(_DWORD *)(this + 744) || a2 < *(_DWORD *)(this + 728)) && (a2 != 14 || *(_DWORD *)(this + 728) != 1) )
      {
LABEL_59:
        *a5 = a3;
        *a6 = a4;
        return 1;
      }
      if ( *(_DWORD *)(this + 756) == 6
        && (*(_DWORD *)(this + 728) == 1 && a2 == 14 || *(_DWORD *)(this + 728) == a2 || *(_DWORD *)(this + 748) == a2) )
      {
LABEL_54:
        *a5 = a3;
        *a6 = a4;
        return 1;
      }
      return 0;
    }
    if ( *(_DWORD *)(this + 756) == 5 && a2 != 14 && (a2 > *(_DWORD *)(this + 744) || a2 < *(_DWORD *)(this + 728)) )
      goto LABEL_54;
    if ( *(_DWORD *)(this + 756) == 6 )
    {
      if ( a2 == 14 )
      {
        if ( *(_DWORD *)(this + 728) == 1 || *(_DWORD *)(this + 748) == 14 )
          return 0;
        if ( *(_DWORD *)(this + 728) == *(_DWORD *)(this + 764) || *(_DWORD *)(this + 748) == *(_DWORD *)(this + 764) )
          goto LABEL_51;
      }
      if ( a2 == *(_DWORD *)(this + 728) || a2 == *(_DWORD *)(this + 748) )
        goto LABEL_54;
      if ( (*(_DWORD *)(this + 728) == *(_DWORD *)(this + 764) || *(_DWORD *)(this + 748) == *(_DWORD *)(this + 764))
        && a2 > *(_DWORD *)(this + 728)
        && a2 < *(_DWORD *)(this + 748) )
      {
        goto LABEL_59;
      }
    }
    if ( *(_DWORD *)(this + 756) != 7
      || (*(_DWORD *)(this + 728) != 1 || *(_DWORD *)(this + 764) != 7 && *(_DWORD *)(this + 764) != 2)
      && (*(_DWORD *)(this + 752) != 14 || *(_DWORD *)(this + 764) != 8 && *(_DWORD *)(this + 764) != 13) )
    {
      return 0;
    }
LABEL_51:
    *a5 = a3;
    *a6 = a4;
    return 1;
  }
  if ( a2 == 14 )
  {
    if ( *(_BYTE *)(this + 702)
      && *(_DWORD *)(this + 756) == 5
      && (*(_DWORD *)(this + 728) == 1 || *(_DWORD *)(this + 744) == 14) )
    {
      return 0;
    }
    for ( i = 0; i < 3; ++i )
    {
      if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != -1 )
      {
        if ( *a5 != -1 )
        {
          *a6 = i;
          return 1;
        }
        *a5 = i;
      }
    }
  }
  else
  {
    for ( j = 0; j < 7; ++j )
    {
      v7 = sub_44F680(*(_WORD *)(this + 2 * j + 4));
      if ( sub_44F700((_DWORD *)this, v7) == 3 )
      {
        *a5 = j;
        *a6 = j + 1;
        return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_451C20
// entry 00451c20  size 832  status ok
//======================================================================

char __thiscall sub_451C20(int this, int a2, int a3, int a4, int *a5, int *a6)
{
  int v7; // eax
  int v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+4h] [ebp-Ch]
  int j; // [esp+Ch] [ebp-4h]
  int i; // [esp+Ch] [ebp-4h]

  if ( !*(_BYTE *)(this + 718) || !*(_BYTE *)(this + 706) )
    return 0;
  *a5 = -1;
  *a6 = -1;
  if ( *(_DWORD *)(this + 724) == 6 )
  {
    *a5 = a3;
    *a6 = a4;
    return 1;
  }
  if ( *(_BYTE *)(this + 714) )
  {
    if ( a2 == 14 )
    {
      if ( *(_BYTE *)(this + 702)
        && *(_DWORD *)(this + 724) == 4
        && (sub_44F6C0(*(_WORD *)(this + 4)) == *(_DWORD *)(this + 720)
         || sub_44F6C0(*(_WORD *)(this + 6)) == *(_DWORD *)(this + 720)
         || sub_44F6C0(*(_WORD *)(this + 8)) == *(_DWORD *)(this + 720)) )
      {
        return 0;
      }
      for ( i = 0; i < 3; ++i )
      {
        if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != -1 )
        {
          if ( *a5 != -1 )
          {
            *a6 = i;
            return 1;
          }
          *a5 = i;
        }
      }
    }
    else
    {
      for ( j = 0; j < 7; ++j )
      {
        v7 = sub_44F680(*(_WORD *)(this + 2 * j + 4));
        if ( sub_44F700((_DWORD *)this, v7) == 3 )
        {
          if ( sub_44F6C0(*(_WORD *)(this + 2 * j + 4)) == *(_DWORD *)(this + 720) )
            v9 = j + 2;
          else
            v9 = j;
          *a5 = v9;
          if ( sub_44F6C0(*(_WORD *)(this + 2 * j + 6)) == *(_DWORD *)(this + 720) )
            v8 = j + 2;
          else
            v8 = j + 1;
          *a6 = v8;
          return 1;
        }
      }
    }
    return 0;
  }
  else if ( *(_BYTE *)(this + 702) && *(_DWORD *)(this + 724) != 4 )
  {
    if ( a2 == 14
      && (sub_44F6C0(*(_WORD *)(this + 2 * a3 + 4)) == *(_DWORD *)(this + 720)
       || sub_44F6C0(*(_WORD *)(this + 2 * a4 + 4)) == *(_DWORD *)(this + 720)) )
    {
      return 0;
    }
    else
    {
      *a5 = a3;
      *a6 = a4;
      return 1;
    }
  }
  else if ( sub_44F6C0(*(_WORD *)(this + 2 * a3 + 4)) == *(_DWORD *)(this + 720)
         || sub_44F6C0(*(_WORD *)(this + 2 * a3 + 4)) == -1
         || sub_44F6C0(*(_WORD *)(this + 2 * a4 + 4)) == *(_DWORD *)(this + 720)
         || sub_44F6C0(*(_WORD *)(this + 2 * a4 + 4)) == -1 )
  {
    return 0;
  }
  else
  {
    *a5 = a3;
    *a6 = a4;
    return 1;
  }
}


//======================================================================
// sub_451F60
// entry 00451f60  size 162  status ok
//======================================================================

unsigned __int8 __fastcall sub_451F60(int a1, int a2, int *a3, int *a4)
{
  int v4; // esi
  int v5; // eax
  unsigned __int8 result; // al
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v4 = sub_44F680(*(_WORD *)(a1 + 2 * i + 4));
    if ( v4 == sub_44F680(*(_WORD *)(a1 + 2 * i + 6)) )
    {
      v5 = sub_44F680(*(_WORD *)(a1 + 2 * i + 4));
      result = sub_451870(a1, v5, i, i + 1, a3, a4);
      a2 = result;
      if ( result )
        return result;
    }
  }
  return sub_4512C0(a1, a2, a3, a4);
}


//======================================================================
// sub_452010
// entry 00452010  size 162  status ok
//======================================================================

char __thiscall sub_452010(_WORD *this, int *a2, int *a3)
{
  int v3; // esi
  int v4; // eax
  char result; // al
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*(this + i + 2));
    if ( v3 == sub_44F680(*(this + i + 3)) )
    {
      v4 = sub_44F680(*(this + i + 2));
      result = sub_451C20((int)this, v4, i, i + 1, a2, a3);
      if ( result )
        return result;
    }
  }
  return sub_4516A0((int)this, a2, a3);
}


//======================================================================
// sub_4520C0
// entry 004520c0  size 1078  status ok
//======================================================================

int __thiscall sub_4520C0(int this)
{
  if ( sub_44F700((_DWORD *)this, 14) == 5 )
    return 26;
  if ( *(_BYTE *)(this + 713) && *(_BYTE *)(this + 714) )
    return 25;
  if ( *(_BYTE *)(this + 713) && *(_BYTE *)(this + 718) )
    return 24;
  if ( *(_BYTE *)(this + 713) && (*(_BYTE *)(this + 709) || *(_BYTE *)(this + 706)) )
    return 27;
  if ( *(_BYTE *)(this + 713) )
    return 23;
  if ( *(_BYTE *)(this + 715) )
    return 22;
  if ( *(_BYTE *)(this + 714) && *(_BYTE *)(this + 717) )
    return 21;
  if ( *(_BYTE *)(this + 702)
    && *(_BYTE *)(this + 703)
    && (*(_BYTE *)(this + 709) || *(_BYTE *)(this + 706))
    && *(_BYTE *)(this + 714)
    && *(_BYTE *)(this + 718) )
  {
    return 19;
  }
  if ( *(_BYTE *)(this + 714) && *(_BYTE *)(this + 718) )
    return 20;
  if ( (*(_BYTE *)(this + 709) || *(_BYTE *)(this + 706)) && *(_BYTE *)(this + 714) )
    return 18;
  if ( (*(_BYTE *)(this + 709) || *(_BYTE *)(this + 706)) && *(_BYTE *)(this + 716) )
    return 17;
  if ( *(_BYTE *)(this + 712) && *(_BYTE *)(this + 717) )
    return 16;
  if ( *(_BYTE *)(this + 706) && *(_BYTE *)(this + 717) )
    return 15;
  if ( *(_BYTE *)(this + 709) && *(_BYTE *)(this + 717) )
    return 14;
  if ( *(_BYTE *)(this + 702) && *(_BYTE *)(this + 712) && *(_BYTE *)(this + 718) )
    return 11;
  if ( *(_BYTE *)(this + 709) && *(_BYTE *)(this + 706) && *(_BYTE *)(this + 718) )
    return 13;
  if ( *(_BYTE *)(this + 709) && *(_BYTE *)(this + 706) )
    return 12;
  if ( *(_BYTE *)(this + 702) && *(_BYTE *)(this + 706) && *(_BYTE *)(this + 718) )
    return 10;
  if ( *(_BYTE *)(this + 702) && *(_BYTE *)(this + 709) && *(_BYTE *)(this + 718) )
    return 9;
  if ( !*(_BYTE *)(this + 702) && *(_BYTE *)(this + 706) && *(_BYTE *)(this + 718) )
    return 8;
  if ( !*(_BYTE *)(this + 702) && *(_BYTE *)(this + 709) && *(_BYTE *)(this + 718) )
    return 7;
  if ( *(_BYTE *)(this + 706) )
    return 6;
  if ( *(_BYTE *)(this + 709) )
    return 5;
  if ( *(_BYTE *)(this + 714) )
    return 4;
  if ( *(_BYTE *)(this + 716) )
    return 3;
  if ( *(_BYTE *)(this + 717) )
    return 2;
  return *(_BYTE *)(this + 718) != 0;
}


//======================================================================
// sub_452500
// entry 00452500  size 1223  status ok
//======================================================================

__int16 __thiscall sub_452500(_DWORD *this, int a2)
{
  __int16 j; // [esp+Ch] [ebp-24h]
  __int16 v5; // [esp+10h] [ebp-20h] BYREF
  __int16 v6; // [esp+14h] [ebp-1Ch]
  __int16 v7; // [esp+18h] [ebp-18h]
  __int16 v8; // [esp+1Ch] [ebp-14h]
  __int16 v9; // [esp+20h] [ebp-10h] BYREF
  __int16 i; // [esp+24h] [ebp-Ch]
  __int16 v11; // [esp+28h] [ebp-8h]
  __int16 v12; // [esp+2Ch] [ebp-4h]

  v12 = 0;
  v6 = 0;
  v5 = 0;
  v9 = 0;
  v7 = 0;
  v8 = 0;
  sub_44EFD0((int)this, a2);
  v11 = sub_4520C0((int)this);
  for ( i = 0; i < 2; ++i )
  {
    switch ( v11 )
    {
      case 0:
        v12 = sub_453D30(&v5, &v9);
        break;
      case 1:
        v12 = sub_453D70(&v5, &v9) + 1;
        break;
      case 2:
        v12 = sub_453E00(&v5, &v9) + 2;
        break;
      case 3:
        v12 = sub_454200(&v5, &v9) + 4;
        break;
      case 4:
        v12 = sub_454250(&v5, &v9) + 5;
        break;
      case 5:
        v12 = sub_4543A0(&v5, &v9) + 9;
        break;
      case 6:
        v12 = sub_4543F0(&v5, &v9) + 10;
        break;
      case 7:
        v12 = sub_454440(&v5, &v9) + 11;
        break;
      case 8:
        v12 = sub_454560(&v5, &v9) + 14;
        break;
      case 9:
        v12 = sub_454960(&v5, &v9) + 17;
        break;
      case 10:
        v12 = sub_454D60(&v5, &v9) + 22;
        break;
      case 11:
        v12 = sub_455060(&v5, &v9) + 27;
        break;
      case 12:
        v12 = sub_455740(&v5, &v9) + 32;
        break;
      case 13:
        v12 = sub_4558F0(&v5, &v9) + 34;
        break;
      case 14:
        v12 = sub_4559C0(&v5, &v9) + 38;
        break;
      case 15:
        v12 = sub_455AC0(&v5, &v9) + 42;
        break;
      case 16:
        v12 = sub_455CB0(&v5, &v9) + 46;
        break;
      case 17:
        v12 = sub_456000(&v5, &v9) + 50;
        break;
      case 18:
        v12 = sub_456020(&v5, &v9) + 51;
        break;
      case 19:
        v12 = sub_4560E0(&v5, &v9) + 53;
        break;
      case 20:
        v12 = sub_456420(&v5, &v9) + 60;
        break;
      case 21:
        v12 = sub_4567C0(&v5, &v9) + 62;
        break;
      case 22:
        v12 = sub_456890(&v5, &v9) + 64;
        break;
      case 23:
        v12 = sub_456920(&v5, &v9) + 65;
        break;
      case 24:
        v12 = sub_456B30(&v5, &v9) + 67;
        break;
      case 25:
        v12 = sub_456CA0(&v5, &v9) + 69;
        break;
      case 26:
        v12 = sub_456E10(&v5, &v9) + 71;
        break;
      case 27:
        v12 = sub_456E50(&v5, &v9) + 72;
        break;
      default:
        v12 = -1;
        break;
    }
    if ( (int)*(this + 199) < 5 || i )
      break;
    v6 = v12;
    for ( j = 0; j < 7; ++j )
      *(this + j + 182) = *(this + j + 192);
    *(this + 189) = *(this + 199);
    *(this + 190) = *(this + 200);
    *(this + 191) = *(this + 201);
    v7 = v5;
    v8 = v9;
  }
  if ( (int)*(this + 199) >= 5 && !(unsigned __int8)sub_456F70(v5, v9, v7, v8) )
    return v6;
  return v12;
}


//======================================================================
// sub_452A40
// entry 00452a40  size 1075  status ok
//======================================================================

__int16 __thiscall sub_452A40(_DWORD *this, int a2, __int16 *a3, __int16 *a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  __int16 j; // [esp+Ch] [ebp-10h]
  __int16 v10; // [esp+10h] [ebp-Ch]
  __int16 v11; // [esp+14h] [ebp-8h]
  __int16 i; // [esp+18h] [ebp-4h]

  v10 = 0;
  v11 = 0;
  sub_44EFD0((int)this, a2);
  *(this + 172) = sub_4520C0((int)this);
  for ( i = 0; i < 2; i = 1 )
  {
    switch ( *(this + 172) )
    {
      case 0:
        sub_453D30(a3, a4);
        break;
      case 1:
        sub_453D70(a3, a4);
        break;
      case 2:
        sub_453E00(a3, a4);
        break;
      case 3:
        sub_454200(a3, a4);
        break;
      case 4:
        sub_454250(a3, a4);
        break;
      case 5:
        sub_4543A0(a3, a4);
        break;
      case 6:
        sub_4543F0(a3, a4);
        break;
      case 7:
        sub_454440(a3, a4);
        break;
      case 8:
        sub_454560(a3, a4);
        break;
      case 9:
        sub_454960(a3, a4);
        break;
      case 0xA:
        sub_454D60(a3, a4);
        break;
      case 0xB:
        sub_455060(a3, a4);
        break;
      case 0xC:
        sub_455740(a3, a4);
        break;
      case 0xD:
        sub_4558F0(a3, a4);
        break;
      case 0xE:
        sub_4559C0(a3, a4);
        break;
      case 0xF:
        sub_455AC0(a3, a4);
        break;
      case 0x10:
        sub_455CB0(a3, a4);
        break;
      case 0x11:
        sub_456000(a3, a4);
        break;
      case 0x12:
        sub_456020(a3, a4);
        break;
      case 0x13:
        sub_4560E0(a3, a4);
        break;
      case 0x14:
        sub_456420(a3, a4);
        break;
      case 0x15:
        sub_4567C0(a3, a4);
        break;
      case 0x16:
        sub_456890(a3, a4);
        break;
      case 0x17:
        sub_456920(a3, a4);
        break;
      case 0x18:
        sub_456B30(a3, a4);
        break;
      case 0x19:
        sub_456CA0(a3, a4);
        break;
      case 0x1A:
        sub_456E10(a3, a4);
        break;
      case 0x1B:
        sub_456E50(a3, a4);
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\paigowai.cpp", 1757);
        break;
    }
    if ( (int)*(this + 199) < 5 || i )
      break;
    for ( j = 0; j < 7; ++j )
      *(this + j + 182) = *(this + j + 192);
    *(this + 189) = *(this + 199);
    *(this + 190) = *(this + 200);
    *(this + 191) = *(this + 201);
    v10 = *a3;
    v11 = *a4;
  }
  v4 = sub_44F680(*a3);
  v5 = sub_44F680(*a4);
  if ( v4 < v5 )
    LOWORD(v5) = sub_5E9F20((char)"GetRank(*lowCard1) >= GetRank(*lowCard2)", "..\\Casino\\paigowai.cpp", 1774);
  if ( (int)*(this + 199) >= 5 )
  {
    v6 = sub_44F680(v10);
    if ( v6 < sub_44F680(v11) )
      sub_5E9F20((char)"GetRank(tempCard1) >= GetRank(tempCard2)", "..\\Casino\\paigowai.cpp", 1778);
    LOWORD(v5) = sub_456F70(*a3, *a4, v10, v11);
    if ( !(_BYTE)v5 )
    {
      *a3 = v10;
      *a4 = v11;
      LOWORD(v5) = v11;
    }
  }
  return v5;
}


//======================================================================
// sub_452EF0
// entry 00452ef0  size 217  status ok
//======================================================================

char __thiscall sub_452EF0(void *this, int a2, __int16 a3, __int16 a4)
{
  _BYTE v5[3]; // [esp+4h] [ebp-14h] BYREF
  char v6; // [esp+7h] [ebp-11h]
  char v7; // [esp+8h] [ebp-10h]
  _BYTE v8[3]; // [esp+Ch] [ebp-Ch] BYREF
  char v9; // [esp+Fh] [ebp-9h]
  char v10; // [esp+10h] [ebp-8h]

  sub_44EFD0((int)this, a2);
  sub_452FD0(a3, a4, v5);
  sub_4530B0(a2, a3, a4, v8);
  if ( v8[0] > 2 || v8[0] > v5[0] )
    return 1;
  if ( v8[0] < v5[0] )
    return 0;
  if ( v8[0] == v5[0] )
  {
    if ( v8[0] == 1 )
    {
      if ( v9 > v6 || v9 == v6 && v10 >= v7 )
        return 1;
    }
    else if ( v8[1] >= v6 )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_452FD0
// entry 00452fd0  size 209  status ok
//======================================================================

int __stdcall sub_452FD0(__int16 a1, __int16 a2, _BYTE *a3)
{
  int v3; // esi
  int v4; // esi
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    a3[i + 3] = -1;
  v3 = sub_44F680(a1);
  if ( v3 == sub_44F680(a2) )
    *a3 = 2;
  else
    *a3 = 1;
  v4 = sub_44F680(a1);
  if ( v4 >= sub_44F680(a2) )
  {
    a3[3] = sub_44F680(a1);
    result = sub_44F680(a2);
  }
  else
  {
    a3[3] = sub_44F680(a2);
    result = sub_44F680(a1);
  }
  a3[4] = result;
  return result;
}


//======================================================================
// sub_4530B0
// entry 004530b0  size 1014  status ok
//======================================================================

char __thiscall sub_4530B0(_WORD *this, int a2, unsigned __int16 a3, unsigned __int16 a4, _BYTE *a5)
{
  int v5; // eax
  char v6; // al
  int v7; // eax
  int j; // [esp+4h] [ebp-2C8h]
  char v11; // [esp+Ah] [ebp-2C2h]
  char v12; // [esp+Bh] [ebp-2C1h]
  _DWORD v13[167]; // [esp+Ch] [ebp-2C0h] BYREF
  char v14; // [esp+2AAh] [ebp-22h]
  char v15; // [esp+2ABh] [ebp-21h]
  int v16; // [esp+2ACh] [ebp-20h]
  char v17; // [esp+2B1h] [ebp-1Bh]
  char v18; // [esp+2B2h] [ebp-1Ah]
  char v19; // [esp+2B3h] [ebp-19h]
  int v20; // [esp+2B4h] [ebp-18h]
  _WORD v21[6]; // [esp+2B8h] [ebp-14h] BYREF
  int i; // [esp+2C8h] [ebp-4h]

  v20 = 0;
  v17 = 0;
  v14 = 0;
  v18 = 0;
  v15 = 0;
  v19 = 0;
  sub_44EFD0((int)this, a2);
  for ( i = 0; i < 7; ++i )
  {
    if ( (unsigned __int16)*(this + i + 2) != a3 && (unsigned __int16)*(this + i + 2) != a4 )
      v21[v20++] = *(this + i + 2);
  }
  for ( i = 2; i < 15; ++i )
  {
    v13[11 * i] = 0;
    for ( j = 0; j < 5; ++j )
    {
      v5 = sub_44F680(v21[j]);
      if ( v5 == i )
        ++v13[11 * i];
    }
  }
  v14 = sub_453830(v21);
  v11 = sub_4538B0(v21);
  v18 = sub_450BC0((int)v13, 4, 1);
  v15 = sub_450BC0((int)v13, 3, 1);
  v12 = sub_450BC0((int)v13, 2, 1);
  if ( v12 )
  {
    for ( i = 2; i < 15; ++i )
    {
      if ( v12 != i && v13[11 * i] == 2 )
      {
        v19 = i;
        break;
      }
    }
  }
  if ( v19 > v12 )
  {
    v16 = v12;
    v12 = v19;
    v19 = v16;
  }
  v20 = 0;
  for ( i = 0; i < 7; ++i )
  {
    if ( (unsigned __int16)*(this + i + 2) != a3 && (unsigned __int16)*(this + i + 2) != a4 )
    {
      v6 = sub_44F680(*(this + i + 2));
      a5[v20 + 3] = v6;
      ++v20;
    }
    if ( i < 2 )
      a5[i + 1] = -1;
  }
  v7 = sub_450BC0((int)v13, 5, 1);
  if ( v7 )
  {
    *a5 = 10;
  }
  else if ( v14 && v11 )
  {
    *a5 = 9;
    a5[1] = v11;
    LOBYTE(v7) = (_BYTE)a5;
  }
  else if ( v18 )
  {
    *a5 = 8;
    a5[1] = v18;
    LOBYTE(v7) = (_BYTE)a5;
  }
  else if ( v15 && v12 )
  {
    *a5 = 7;
    a5[1] = v15;
    LOBYTE(v7) = (_BYTE)a5;
  }
  else if ( v14 )
  {
    *a5 = 6;
    LOBYTE(v7) = (_BYTE)a5;
  }
  else if ( v11 )
  {
    *a5 = 5;
    a5[1] = v11;
    LOBYTE(v7) = (_BYTE)a5;
  }
  else if ( v15 )
  {
    *a5 = 4;
    a5[1] = v15;
    LOBYTE(v7) = (_BYTE)a5;
  }
  else
  {
    LOBYTE(v7) = v12;
    if ( v12 && v19 )
    {
      *a5 = 3;
      a5[1] = v12;
      LOBYTE(v7) = v19;
      a5[2] = v19;
    }
    else if ( v12 )
    {
      *a5 = 2;
      a5[1] = v12;
      LOBYTE(v7) = (_BYTE)a5;
    }
    else
    {
      *a5 = 1;
    }
  }
  return v7;
}


//======================================================================
// sub_4534B0
// entry 004534b0  size 152  status ok
//======================================================================

bool __stdcall sub_4534B0(char *a1, char *a2)
{
  if ( *a1 > *a2 )
    return 1;
  if ( *a1 != *a2 )
    return 0;
  if ( *a1 == 2 )
    return a1[3] >= a2[3];
  if ( a1[3] > a2[3] )
    return 1;
  return a1[3] == a2[3] && a1[4] >= a2[4];
}


//======================================================================
// sub_453550
// entry 00453550  size 369  status ok
//======================================================================

char __stdcall sub_453550(char *a1, char *a2)
{
  char result; // al

  if ( *a1 > *a2 )
    return 1;
  if ( *a1 != *a2 )
    return 0;
  switch ( *a1 )
  {
    case 1:
    case 6:
      return sub_4536F0(a1, a2);
    case 2:
      return sub_453760(a1, a2);
    case 3:
      return sub_4537B0(a1, a2);
    case 4:
    case 7:
    case 8:
      return a1[1] > a2[1];
    case 5:
    case 9:
      if ( a1[1] == a2[1] )
        return 1;
      if ( (unsigned __int8)sub_45F940(dword_790738) )
      {
        if ( a1[1] <= a2[1] )
        {
          if ( a1[1] == 5 && a2[1] != 14 )
            return 1;
        }
        else if ( a1[1] == 14 || a2[1] != 5 )
        {
          return 1;
        }
      }
      else if ( a1[1] > a2[1] )
      {
        return 1;
      }
      result = 0;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\paigowai.cpp", 2076);
      return 0;
  }
  return result;
}


//======================================================================
// sub_4536F0
// entry 004536f0  size 103  status ok
//======================================================================

bool __stdcall sub_4536F0(int a1, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( *(char *)(i + a1 + 3) != *(char *)(i + a2 + 3) )
      return *(char *)(i + a1 + 3) > *(char *)(i + a2 + 3);
  }
  return 1;
}


//======================================================================
// sub_453760
// entry 00453760  size 73  status ok
//======================================================================

bool __stdcall sub_453760(int a1, int a2)
{
  if ( *(char *)(a1 + 1) > *(char *)(a2 + 1) )
    return 1;
  if ( *(char *)(a1 + 1) >= *(char *)(a2 + 1) )
    return sub_4536F0(a1, a2);
  return 0;
}


//======================================================================
// sub_4537B0
// entry 004537b0  size 117  status ok
//======================================================================

bool __stdcall sub_4537B0(int a1, int a2)
{
  if ( *(char *)(a1 + 1) > *(char *)(a2 + 1) )
    return 1;
  if ( *(char *)(a1 + 1) < *(char *)(a2 + 1) )
    return 0;
  if ( *(char *)(a1 + 2) > *(char *)(a2 + 2) )
    return 1;
  if ( *(char *)(a1 + 2) >= *(char *)(a2 + 2) )
    return sub_4536F0(a1, a2);
  return 0;
}


//======================================================================
// sub_453830
// entry 00453830  size 119  status ok
//======================================================================

char __thiscall sub_453830(int this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 706) )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_44F6C0(*(_WORD *)(a2 + 2 * i)) != *(_DWORD *)(this + 720) && sub_44F6C0(*(_WORD *)(a2 + 2 * i)) != -1 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_4538B0
// entry 004538b0  size 1139  status ok
//======================================================================

char __thiscall sub_4538B0(_BYTE *this, __int16 *a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  char v10; // [esp+9h] [ebp-Bh]
  char v11; // [esp+Ah] [ebp-Ah]
  char v12; // [esp+Bh] [ebp-9h]
  int v14; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]
  int j; // [esp+10h] [ebp-4h]
  int k; // [esp+10h] [ebp-4h]
  int m; // [esp+10h] [ebp-4h]

  v14 = 0;
  v11 = 0;
  v10 = 0;
  v12 = 0;
  if ( !*(this + 709) )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_44F680(a2[i]) == 14 )
    {
      if ( sub_44F6C0(a2[i]) == -1 )
        v10 = 1;
      else
        v11 = 1;
    }
  }
  if ( !v11 && !v10 )
  {
    for ( j = 0; j < 4; ++j )
    {
      v3 = sub_44F680(a2[j]);
      if ( v3 != sub_44F680(a2[j + 1]) + 1 )
        return 0;
    }
    v12 = sub_44F680(*a2);
  }
  if ( !v10 && v11 )
  {
    if ( sub_44F680(a2[4]) != 10 && sub_44F680(a2[4]) != 2 )
      return 0;
    for ( k = 4; k > 1; --k )
    {
      v4 = sub_44F680(a2[k]);
      if ( v4 != sub_44F680(a2[k - 1]) - 1 )
        return 0;
    }
    if ( sub_44F680(a2[4]) == 2 )
      v12 = 5;
    else
      v12 = 14;
  }
  if ( !v11 && v10 )
  {
    for ( m = 4; m > 1; --m )
    {
      v5 = sub_44F680(a2[m - 1]);
      if ( v5 - sub_44F680(a2[m]) > 2 )
        return 0;
      v6 = sub_44F680(a2[m]);
      if ( v6 != sub_44F680(a2[m - 1]) - 1 )
        ++v14;
    }
    if ( v14 > 1 )
      return 0;
    if ( (unsigned __int8)sub_45F940(dword_790738) && sub_44F680(a2[4]) == 2 )
      v12 = 5;
    else
      v12 = sub_44F680(a2[4]) + 4;
  }
  if ( !v10 || !v11 )
    return v12;
  v7 = sub_44F680(a2[2]);
  if ( v7 == sub_44F680(a2[3]) )
    return 0;
  v8 = sub_44F680(a2[2]);
  if ( v8 == sub_44F680(a2[4]) )
    return 0;
  v9 = sub_44F680(a2[3]);
  if ( v9 == sub_44F680(a2[4]) )
    return 0;
  if ( (sub_44F680(a2[2]) < 2
     || sub_44F680(a2[2]) > 5
     || sub_44F680(a2[3]) < 2
     || sub_44F680(a2[3]) > 5
     || sub_44F680(a2[4]) < 2
     || sub_44F680(a2[4]) > 5)
    && (sub_44F680(a2[2]) < 10
     || sub_44F680(a2[2]) > 13
     || sub_44F680(a2[3]) < 10
     || sub_44F680(a2[3]) > 13
     || sub_44F680(a2[4]) < 10
     || sub_44F680(a2[4]) > 13) )
  {
    return 0;
  }
  if ( sub_44F680(a2[4]) >= 6 )
    return 14;
  else
    return 5;
}


//======================================================================
// sub_453D30
// entry 00453d30  size 56  status ok
//======================================================================

__int16 __thiscall sub_453D30(_WORD *this, _WORD *a2, _WORD *a3)
{
  sub_44F840(this, 1u, 2u, a2, a3);
  return 0;
}


//======================================================================
// sub_453D70
// entry 00453d70  size 142  status ok
//======================================================================

__int16 __thiscall sub_453D70(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v6; // [esp+4h] [ebp-Ch]
  unsigned int v7; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v6 = -1;
  v7 = -1;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( !sub_450C20(this, v3) )
    {
      if ( v6 != -1 )
      {
        v7 = i;
        break;
      }
      v6 = i;
    }
  }
  sub_44F840(this, v6, v7, a2, a3);
  return 0;
}


//======================================================================
// sub_453E00
// entry 00453e00  size 969  status ok
//======================================================================

__int16 __thiscall sub_453E00(_DWORD *this, _WORD *a2, _WORD *a3)
{
  unsigned int v5; // [esp+8h] [ebp-34h] BYREF
  int v6; // [esp+Ch] [ebp-30h]
  unsigned int v7; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v8; // [esp+14h] [ebp-28h]
  __int16 v9; // [esp+18h] [ebp-24h]
  int v10; // [esp+1Ch] [ebp-20h]
  unsigned int v11; // [esp+20h] [ebp-1Ch]
  unsigned int v12; // [esp+24h] [ebp-18h] BYREF
  int v13; // [esp+28h] [ebp-14h] BYREF
  int v14; // [esp+2Ch] [ebp-10h]
  int v15; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v16; // [esp+34h] [ebp-8h] BYREF
  int v17; // [esp+38h] [ebp-4h]

  v8 = -1;
  v11 = -1;
  v13 = -1;
  v15 = -1;
  v17 = -1;
  v14 = -1;
  v12 = -1;
  v5 = -1;
  v16 = -1;
  v7 = -1;
  v6 = sub_450CD0(this, 0, 0, 0);
  v10 = sub_450CD0(this, 1, (int *)&v16, &v7);
  if ( !v6 || !v10 )
    sub_5E9F20((char)"hiPairRank != 0 && loPairRank != 0", "..\\Casino\\paigowai.cpp", 2313);
  sub_450C50(this, 1, &v13, (int *)&v12);
  sub_450C50(this, 2, &v15, (int *)&v5);
  switch ( v6 )
  {
    case 3:
      v17 = 11;
      v14 = 10;
      break;
    case 4:
      v17 = 12;
      v14 = 5;
      break;
    case 5:
      if ( v10 > 3 )
      {
        v17 = 13;
        v14 = 3;
      }
      else
      {
        v17 = 12;
        v14 = (v10 != 2) + 9;
      }
      break;
    case 6:
      if ( v10 == 2 )
      {
        v17 = 12;
        v14 = 11;
      }
      else
      {
        v17 = 13;
        v14 = (v10 == 3) + 3;
      }
      break;
    case 7:
      v17 = 13;
      if ( v10 > 4 )
        v14 = (v10 != 5) + 10;
      else
        v14 = (v10 != 4) + 3;
      break;
    case 8:
      if ( v10 > 5 )
      {
        v17 = 14;
        v14 = 3;
      }
      else
      {
        v17 = 13;
        switch ( v10 )
        {
          case 2:
            v14 = 4;
            break;
          case 3:
            v14 = 5;
            break;
          case 4:
            v14 = 11;
            break;
          default:
            v14 = 12;
            break;
        }
      }
      break;
    case 9:
      if ( v10 > 4 )
      {
        v17 = 14;
        v14 = 3;
      }
      else
      {
        v17 = 13;
        if ( v10 == 2 )
        {
          v14 = 10;
        }
        else if ( v10 == 3 )
        {
          v14 = 11;
        }
        else
        {
          v14 = 12;
        }
      }
      break;
    case 10:
      if ( v10 == 2 )
      {
        v17 = 13;
        v14 = 12;
      }
      else
      {
        v17 = 14;
        if ( v10 > 6 )
        {
          if ( v10 == 7 )
          {
            v14 = 5;
          }
          else if ( v10 == 8 )
          {
            v14 = 11;
          }
          else
          {
            v14 = 12;
          }
        }
        else
        {
          v14 = (v10 == 3) + 3;
        }
      }
      break;
    case 11:
      if ( v10 == 10 )
      {
        v17 = 15;
      }
      else
      {
        v17 = 14;
        if ( v10 > 4 )
        {
          switch ( v10 )
          {
            case 5:
              v14 = 9;
              break;
            case 6:
              v14 = 10;
              break;
            case 7:
              v14 = 12;
              break;
            default:
              v14 = 13;
              break;
          }
        }
        else
        {
          v14 = (v10 != 4) + 3;
        }
      }
      break;
    case 12:
      if ( v10 < 7 )
      {
        v17 = 14;
        switch ( v10 )
        {
          case 2:
            v14 = 8;
            break;
          case 3:
            v14 = 10;
            break;
          case 4:
            v14 = 11;
            break;
          default:
            v14 = 13;
            break;
        }
      }
      else
      {
        v17 = 15;
      }
      break;
    case 13:
      if ( v10 == 2 )
      {
        v17 = 14;
        v14 = 12;
      }
      else
      {
        v17 = 15;
      }
      break;
    case 14:
      v17 = 15;
      break;
    default:
      break;
  }
  if ( v13 > v17 || v13 == v17 && v15 >= v14 )
  {
    v9 = 1;
    v8 = v12;
    v11 = v5;
  }
  else
  {
    v9 = 0;
    v8 = v16;
    v11 = v7;
  }
  sub_44F840(this, v8, v11, a2, a3);
  return v9;
}


//======================================================================
// sub_454200
// entry 00454200  size 74  status ok
//======================================================================

__int16 __thiscall sub_454200(_DWORD *this, _WORD *a2, _WORD *a3)
{
  unsigned int v5; // [esp+4h] [ebp-8h] BYREF
  unsigned int v6; // [esp+8h] [ebp-4h] BYREF

  v5 = 1;
  v6 = 2;
  sub_450CD0(this, 0, (int *)&v5, &v6);
  sub_44F840(this, v5, v6, a2, a3);
  return 0;
}


//======================================================================
// sub_454250
// entry 00454250  size 331  status ok
//======================================================================

__int16 __thiscall sub_454250(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v6; // [esp+4h] [ebp-24h] BYREF
  unsigned int v7; // [esp+8h] [ebp-20h]
  unsigned int v8; // [esp+Ch] [ebp-1Ch]
  __int16 v9; // [esp+10h] [ebp-18h]
  unsigned int v10; // [esp+14h] [ebp-14h] BYREF
  unsigned int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch] BYREF
  int i; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h] BYREF

  v12 = -1;
  v14 = -1;
  v10 = -1;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  v11 = 1;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_450C20(this, v3) )
    {
      v7 = i;
      break;
    }
  }
  sub_450C50(this, 1, &v12, (int *)&v10);
  sub_450C50(this, 2, &v14, (int *)&v6);
  v9 = 3;
  v8 = v10;
  v11 = v6;
  if ( sub_44F700(this, 14) == 3 )
  {
    v9 = 0;
    v8 = v7;
    v11 = v10;
  }
  else if ( sub_44F700(this, 13) == 3 && v12 <= 10 && v14 <= 9 )
  {
    v9 = 1;
    v8 = v7;
    v11 = v10;
  }
  else if ( sub_44F700(this, 13) == 3 )
  {
    v9 = 2;
    v8 = v10;
    v11 = v6;
  }
  sub_44F840(this, v8, v11, a2, a3);
  return v9;
}


//======================================================================
// sub_4543A0
// entry 004543a0  size 72  status ok
//======================================================================

__int16 __fastcall sub_4543A0(_WORD *a1, int a2, _WORD *a3, _WORD *a4)
{
  unsigned int v6; // [esp+4h] [ebp-8h] BYREF
  unsigned int v7; // [esp+8h] [ebp-4h] BYREF

  v6 = -1;
  v7 = -1;
  sub_4512C0((int)a1, a2, (BOOL *)&v6, (int *)&v7);
  sub_44F840(a1, v6, v7, a3, a4);
  return 0;
}


//======================================================================
// sub_4543F0
// entry 004543f0  size 72  status ok
//======================================================================

__int16 __thiscall sub_4543F0(_WORD *this, _WORD *a2, _WORD *a3)
{
  unsigned int v5; // [esp+4h] [ebp-8h] BYREF
  unsigned int v6; // [esp+8h] [ebp-4h] BYREF

  v5 = -1;
  v6 = -1;
  sub_4516A0((int)this, &v5, &v6);
  sub_44F840(this, v5, v6, a2, a3);
  return 0;
}


//======================================================================
// sub_454440
// entry 00454440  size 285  status ok
//======================================================================

__int16 __thiscall sub_454440(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v4; // eax
  unsigned int v6; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v7; // [esp+8h] [ebp-18h]
  int v8; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch] BYREF
  int i; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h] BYREF

  v6 = -1;
  v9 = -1;
  sub_4517A0(this, &v8, &v10, &v12);
  if ( sub_451870((int)this, v12, v8, v10, (int *)&v6, (int *)&v9) )
  {
    sub_44F840(this, v6, v9, a2, a3);
    return 0;
  }
  else
  {
    if ( *(this + *(this + 189) + 181) == 14 && v12 > 9 && v12 < 13 )
    {
      v7 = 2;
      v6 = 0;
      for ( i = 1; i < 7; ++i )
      {
        v4 = sub_44F680(*((_WORD *)this + i + 2));
        if ( !sub_450C20(this, v4) )
        {
          v9 = i;
          break;
        }
      }
    }
    else
    {
      v7 = 1;
      sub_4512C0((int)this, (int)&v6, (BOOL *)&v6, (int *)&v9);
    }
    sub_44F840(this, v6, v9, a2, a3);
    return v7;
  }
}


//======================================================================
// sub_454560
// entry 00454560  size 991  status ok
//======================================================================

__int16 __thiscall sub_454560(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v4; // eax
  int v5; // eax
  int v7; // [esp+8h] [ebp-2Ch]
  unsigned int v8; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v9; // [esp+10h] [ebp-24h] BYREF
  unsigned int v10; // [esp+14h] [ebp-20h] BYREF
  __int16 v11; // [esp+18h] [ebp-1Ch]
  int v12; // [esp+1Ch] [ebp-18h]
  unsigned int v13; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+28h] [ebp-Ch]
  int v16; // [esp+2Ch] [ebp-8h] BYREF
  int v17; // [esp+30h] [ebp-4h] BYREF

  v9 = -1;
  v8 = -1;
  v7 = -1;
  v12 = -1;
  v10 = -1;
  v13 = -1;
  sub_4517A0(this, &v14, &v17, &v16);
  if ( sub_451C20((int)this, v16, v14, v17, (int *)&v10, (int *)&v13) )
  {
    sub_44F840(this, v10, v13, a2, a3);
    return 0;
  }
  else
  {
    sub_451540((int)this, (int *)&v9, (int *)&v8);
    v4 = sub_44F680(*((_WORD *)this + v9 + 2));
    if ( sub_450C20(this, v4) )
    {
      v11 = 1;
      v10 = v9;
      v13 = v8;
    }
    else
    {
      v11 = 1;
      v10 = v8;
      v13 = v9;
    }
    for ( i = 0; i < 7; ++i )
    {
      if ( sub_44F6C0(*((_WORD *)this + i + 2)) == *(this + 180) || sub_44F6C0(*((_WORD *)this + i + 2)) == -1 )
      {
        v5 = sub_44F680(*((_WORD *)this + i + 2));
        if ( !sub_450C20(this, v5) )
        {
          if ( v7 != -1 )
          {
            v12 = sub_44F680(*((_WORD *)this + i + 2));
            break;
          }
          v7 = sub_44F680(*((_WORD *)this + i + 2));
        }
      }
    }
    if ( v7 == 14
      && v12 >= 11
      && sub_44F680(*((_WORD *)this + v13 + 2)) < 12
      && sub_44F680(*((_WORD *)this + v10 + 2)) > 6 )
    {
      switch ( sub_44F680(*((_WORD *)this + v10 + 2)) )
      {
        case 7:
          if ( v12 == 13 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 10 )
          {
            v11 = 2;
            v10 = 0;
            v13 = 1;
          }
          break;
        case 8:
          if ( v12 == 12 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 9
            || v12 == 13 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 10 )
          {
            v11 = 2;
            v10 = 0;
            v13 = 1;
          }
          break;
        case 9:
          if ( v12 == 11 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 7
            || v12 == 12 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 10
            || v12 == 13 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 11 )
          {
            v11 = 2;
            v10 = 0;
            v13 = 1;
          }
          break;
        case 10:
          if ( v12 <= 12 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 9
            || v12 == 13 && sub_44F680(*((_WORD *)this + v13 + 2)) <= 11 )
          {
            v11 = 2;
            v10 = 0;
            v13 = 1;
          }
          break;
        case 11:
          if ( sub_44F680(*((_WORD *)this + v13 + 2)) <= 10 )
          {
            v11 = 2;
            v10 = 0;
            v13 = 1;
          }
          break;
        case 12:
          if ( v12 == 13 )
          {
            v11 = 2;
            v10 = 0;
            v13 = 1;
          }
          break;
        default:
          break;
      }
    }
    sub_44F840(this, v10, v13, a2, a3);
    return v11;
  }
}


//======================================================================
// sub_454960
// entry 00454960  size 1024  status ok
//======================================================================

__int16 __thiscall sub_454960(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v4; // edx
  int v5; // eax
  int v7; // [esp+4h] [ebp-24h]
  unsigned int v8; // [esp+8h] [ebp-20h] BYREF
  int v9[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v10; // [esp+14h] [ebp-14h]
  unsigned int v11; // [esp+18h] [ebp-10h] BYREF
  int v12; // [esp+1Ch] [ebp-Ch] BYREF
  int i; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h] BYREF

  v10 = 0;
  v9[1] = *(this + 190);
  v8 = -1;
  v11 = -1;
  sub_4517A0(this, v9, &v12, &v14);
  if ( sub_451870((int)this, v14, v9[0], v12, (int *)&v8, (int *)&v11) )
  {
    sub_44F840(this, v8, v11, a2, a3);
    return 0;
  }
  else if ( v14 == 14 )
  {
    if ( (*(this + 189) != 5 || *(this + 182) == 1 || *(this + 186) == 14) && *(this + 189) != 6 )
    {
      if ( *(this + 189) == 7 )
      {
        v8 = v9[0];
        v11 = 2;
        sub_44F840(this, v9[0], 2u, a2, a3);
        return 3;
      }
      else
      {
        v8 = 2;
        v11 = 3;
        sub_44F840(this, 2u, 3u, a2, a3);
        if ( *(this + 182) == 1 )
          return 1;
        else
          return 4;
      }
    }
    else
    {
      v8 = v9[0];
      for ( i = 2; i < 7; ++i )
      {
        if ( sub_44F680(*((_WORD *)this + i + 2)) > *(this + 186)
          || sub_44F680(*((_WORD *)this + i + 2)) < *(this + 182) )
        {
          v11 = i;
          break;
        }
      }
      sub_44F840(this, v8, v11, a2, a3);
      return 3;
    }
  }
  else
  {
    for ( i = 0; i < 7; ++i )
    {
      if ( sub_44F6C0(*((_WORD *)this + i + 2)) == -1 )
        v7 = *(this + 191);
      else
        v7 = sub_44F680(*((_WORD *)this + i + 2));
      if ( v7 > *(this + 186) || v7 < *(this + 182) )
      {
        v10 = sub_44F680(*((_WORD *)this + i + 2));
        break;
      }
    }
    v4 = (int)this;
    if ( v10 <= *(this + 186) + 1
      && v14 >= 7
      && (int)*(this + 186) >= 10
      && (v4 = (int)this, *(this + 186) != *(this + 191))
      && (*(this + 186) == 10 && (v14 == 9 || v14 == 10)
       || *(this + 186) == 11 && v14 <= 12
       || *(this + 186) == 12 && *(this + 191) == 11 && v14 >= 8 && v14 <= 12
       || *(this + 186) == 12 && *(this + 191) != 11 && v14 >= 8 && v14 <= 12
       || (v4 = (int)this, *(this + 186) == 13) && *(this + 191) == 12 && v14 >= 9 && v14 <= 12
       || *(this + 186) == 13 && (v4 = (int)this, *(this + 191) != 12) && v14 >= 9 && v14 <= 13) )
    {
      v8 = 0;
      for ( i = 1; i < 7; ++i )
      {
        v5 = sub_44F680(*((_WORD *)this + i + 2));
        if ( v5 != v14 )
        {
          v11 = i;
          break;
        }
      }
      sub_44F840(this, v8, v11, a2, a3);
      return 2;
    }
    else
    {
      sub_451F60((int)this, v4, (int *)&v8, (int *)&v11);
      sub_44F840(this, v8, v11, a2, a3);
      return 1;
    }
  }
}


//======================================================================
// sub_454D60
// entry 00454d60  size 763  status ok
//======================================================================

__int16 __thiscall sub_454D60(int this, _WORD *a2, _WORD *a3)
{
  unsigned int v5; // [esp+4h] [ebp-20h] BYREF
  __int16 v6; // [esp+8h] [ebp-1Ch]
  int v7; // [esp+Ch] [ebp-18h]
  unsigned int v8; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+14h] [ebp-10h] BYREF
  int i; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h] BYREF
  int v12; // [esp+20h] [ebp-4h] BYREF

  v5 = -1;
  v8 = -1;
  sub_4517A0((_DWORD *)this, &v9, &v12, &v11);
  if ( sub_451C20(this, v11, v9, v12, (int *)&v5, (int *)&v8) )
  {
    sub_44F840((_WORD *)this, v5, v8, a2, a3);
    return 0;
  }
  else if ( *(_DWORD *)(this + 724) == 5 )
  {
    for ( i = 0; i < 7; ++i )
    {
      if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != *(_DWORD *)(this + 720) )
      {
        if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) == -1 )
        {
          if ( v5 != -1 )
          {
            v8 = i;
            break;
          }
          v5 = i;
        }
        else
        {
          if ( v5 != -1 )
          {
            v8 = i;
            break;
          }
          v5 = i;
        }
      }
    }
    sub_44F840((_WORD *)this, v5, v8, a2, a3);
    return 1;
  }
  else if ( *(_DWORD *)(this + 724) == 4 && sub_44F750((_DWORD *)this, 14, *(_DWORD *)(this + 720)) )
  {
    v7 = sub_44F680(*(_WORD *)(this + 8));
    if ( v7 == 13 )
    {
      v6 = 4;
      v5 = 2;
      if ( sub_44F6C0(*(_WORD *)(this + 8)) == *(_DWORD *)(this + 720) )
      {
        v8 = 3;
      }
      else
      {
        v6 = 3;
        for ( i = 3; i < 7; ++i )
        {
          if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != *(_DWORD *)(this + 720) )
          {
            v8 = i;
            break;
          }
        }
      }
    }
    else if ( v7 == 12
           && sub_44F6C0(*(_WORD *)(this + 8)) == *(_DWORD *)(this + 720)
           && (sub_44F750((_DWORD *)this, 11, *(_DWORD *)(this + 720))
            || sub_44F750((_DWORD *)this, 10, *(_DWORD *)(this + 720))) )
    {
      v6 = 4;
      v5 = 2;
      v8 = 3;
    }
    else
    {
      v6 = 3;
      for ( i = 1; i < 7; ++i )
      {
        if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != *(_DWORD *)(this + 720)
          && sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != -1 )
        {
          if ( v5 != -1 )
          {
            v8 = i;
            break;
          }
          v5 = i;
        }
      }
    }
    sub_44F840((_WORD *)this, v5, v8, a2, a3);
    return v6;
  }
  else
  {
    return sub_454560((_DWORD *)this, a2, a3);
  }
}


//======================================================================
// sub_455060
// entry 00455060  size 1747  status ok
//======================================================================

__int16 __thiscall sub_455060(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-3Ch]
  unsigned int v8; // [esp+8h] [ebp-34h]
  char v9; // [esp+Fh] [ebp-2Dh]
  unsigned int v10; // [esp+10h] [ebp-2Ch] BYREF
  __int16 v11; // [esp+14h] [ebp-28h]
  int v12; // [esp+18h] [ebp-24h]
  unsigned int v13; // [esp+1Ch] [ebp-20h]
  unsigned int v14; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v15; // [esp+24h] [ebp-18h] BYREF
  int v16; // [esp+28h] [ebp-14h]
  int i; // [esp+2Ch] [ebp-10h]
  int v18; // [esp+30h] [ebp-Ch] BYREF
  char v19; // [esp+37h] [ebp-5h]
  int v20; // [esp+38h] [ebp-4h] BYREF

  v10 = -1;
  v14 = -1;
  sub_4517A0(this, (int *)&v15, &v20, &v18);
  if ( sub_451C20((int)this, v18, v15, v20, (int *)&v10, (int *)&v14)
    || sub_451870((int)this, v18, v15, v20, (int *)&v10, (int *)&v14) )
  {
    sub_44F840(this, v10, v14, a2, a3);
    return 0;
  }
  v8 = -1;
  for ( i = 0; i < 7; ++i )
  {
    if ( sub_44F6C0(*((_WORD *)this + i + 2)) != -1 && sub_44F6C0(*((_WORD *)this + i + 2)) != *(this + 180) )
    {
      v4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( !sub_450C20(this, v4) )
      {
        v8 = i;
        break;
      }
    }
  }
  v19 = 1;
  v9 = 1;
  if ( v18 == 14 )
  {
    if ( !sub_44F750(this, 14, *(this + 180)) || (int)*(this + 181) >= 5 )
      v19 = 0;
    if ( *(this + 182) != 1 && *(this + *(this + 189) + 181) != 14 || (int)*(this + 189) > 5 )
      v9 = 0;
    if ( v19 && v9 )
    {
      v10 = 2;
      v14 = 3;
      sub_44F840(this, 2u, 3u, a2, a3);
      if ( *(this + 182) == 1 )
        return 3;
      else
        return 2;
    }
    v10 = v15;
    if ( !v19 && v9 )
    {
      if ( v8 == -1 )
        sub_5E9F20((char)"singletonCardNotInFlush != -1", "..\\Casino\\paigowai.cpp", 3051);
      v14 = v8;
      sub_44F840(this, v10, v8, a2, a3);
      return 1;
    }
    if ( !v9 && v19 )
    {
      if ( (int)*(this + 189) <= 5 )
      {
        for ( i = 2; i < 7; ++i )
        {
          if ( sub_44F680(*((_WORD *)this + i + 2)) > *(this + 186)
            || sub_44F680(*((_WORD *)this + i + 2)) < *(this + 182) )
          {
            v14 = i;
            goto LABEL_49;
          }
        }
        goto LABEL_49;
      }
      if ( *(this + 189) == 6 )
      {
        if ( *(this + 182) == 1 || *(this + 187) == 14 )
        {
          for ( i = 2; i < 7; ++i )
          {
            if ( sub_44F680(*((_WORD *)this + i + 2)) > *(this + 187)
              || sub_44F680(*((_WORD *)this + i + 2)) < *(this + 182) )
            {
              v14 = i;
              goto LABEL_49;
            }
          }
          goto LABEL_49;
        }
      }
      else if ( *(this + 182) != 1 )
      {
        v14 = sub_44F7E0(this, *(this + *(this + 189) + 180), 0);
        goto LABEL_49;
      }
      v14 = sub_44F7E0(this, *(this + *(this + 189) + 181), 0);
LABEL_49:
      sub_44F840(this, v10, v14, a2, a3);
      return 1;
    }
    if ( !v19 )
    {
      sub_455740(a2, a3);
      return 1;
    }
  }
  if ( v8 == -1 )
  {
    if ( *(this + 189) == 5 )
    {
      for ( i = 1; i < 7; ++i )
      {
        if ( sub_44F680(*((_WORD *)this + i + 2)) > *(this + 186)
          || sub_44F680(*((_WORD *)this + i + 2)) < *(this + 182) )
        {
          v8 = i;
          break;
        }
      }
    }
    else if ( *(this + 182) == 1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = sub_44F7E0(this, *(this + 187), 0);
    }
  }
  if ( sub_44F6C0(*((_WORD *)this + v15 + 2)) == *(this + 180) )
    v6 = v20;
  else
    v6 = v15;
  v13 = v6;
  v12 = -1;
  v16 = -1;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + *(this + 209) - 1 - i + 202) != *(this + 191) )
    {
      if ( v12 != -1 )
      {
        v16 = *(this + *(this + 209) - 1 - i + 202);
        break;
      }
      v12 = *(this + *(this + 209) - 1 - i + 202);
    }
  }
  v11 = 3;
  v10 = v13;
  v14 = v8;
  if ( v18 > 7
    && (int)*(this + *(this + 209) + 201) > 10
    && (v12 == 13 && v16 == 12 && v18 >= 9 && v18 <= 13
     || v12 == 13 && v16 == 11 && v18 >= 9 && v18 <= 12
     || v12 == 12 && v16 >= 10 && sub_44F680(*((_WORD *)this + v8 + 2)) < 13
     || v12 == 11 && v18 > 8 && sub_44F680(*((_WORD *)this + v8 + 2)) < 12) )
  {
    v11 = 4;
    v10 = -1;
    v14 = -1;
    for ( i = 0; i < 7; ++i )
    {
      v5 = sub_44F680(*((_WORD *)this + i + 2));
      if ( !sub_450C20(this, v5) )
      {
        if ( v10 != -1 )
        {
          v14 = i;
          break;
        }
        v10 = i;
      }
    }
  }
  sub_44F840(this, v10, v14, a2, a3);
  return v11;
}


//======================================================================
// sub_455740
// entry 00455740  size 431  status ok
//======================================================================

__int16 __thiscall sub_455740(_WORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // esi
  int v4; // esi
  unsigned int v7; // [esp+8h] [ebp-1Ch]
  __int16 v8; // [esp+Ch] [ebp-18h]
  unsigned int v9; // [esp+10h] [ebp-14h]
  unsigned int v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v13; // [esp+20h] [ebp-4h] BYREF

  sub_4516A0((int)this, &v10, &v11);
  sub_4512C0((int)this, (int)&v12, (BOOL *)&v13, (int *)&v12);
  if ( v10 == -1 || v11 == -1 || v13 == -1 || v12 == -1 )
    sub_5E9F20(
      (char)"highFlushTwoCard != -1 && nextHighFlushTwoCard != -1 && highStraightTwoCard != -1 && nextHighStraightTwoCard != -1",
      "..\\Casino\\paigowai.cpp",
      3237);
  v8 = 0;
  v7 = v10;
  v9 = v11;
  if ( sub_44F680(*(this + v13 + 2)) >= 11 )
  {
    v3 = sub_44F680(*(this + v13 + 2));
    if ( v3 > sub_44F680(*(this + v10 + 2)) )
    {
      v8 = 1;
      v7 = v13;
      v9 = v12;
    }
  }
  v4 = sub_44F680(*(this + v13 + 2));
  if ( v4 == sub_44F680(*(this + v10 + 2)) )
  {
    if ( sub_44F680(*(this + v13 + 2)) == 14 && sub_44F680(*(this + v12 + 2)) >= 11 )
    {
      v8 = 1;
      v7 = v13;
      v9 = v12;
    }
    if ( sub_44F680(*(this + v13 + 2)) < 14 && sub_44F680(*(this + v12 + 2)) >= 9 )
    {
      v8 = 1;
      v7 = v13;
      v9 = v12;
    }
  }
  sub_44F840(this, v7, v9, a2, a3);
  return v8;
}


//======================================================================
// sub_4558F0
// entry 004558f0  size 208  status ok
//======================================================================

__int16 __thiscall sub_4558F0(_DWORD *this, _WORD *a2, _WORD *a3)
{
  unsigned int v5; // [esp+4h] [ebp-18h] BYREF
  unsigned int v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  v5 = -1;
  v6 = -1;
  sub_4517A0(this, &v7, &v9, &v8);
  if ( sub_451C20((int)this, v8, v7, v9, (int *)&v5, (int *)&v6) )
  {
    sub_44F840(this, v5, v6, a2, a3);
    return 0;
  }
  else if ( sub_451870((int)this, v8, v7, v9, (int *)&v5, (int *)&v6) )
  {
    sub_44F840(this, v5, v6, a2, a3);
    return 1;
  }
  else
  {
    return sub_455740(this, a2, a3) + 2;
  }
}


//======================================================================
// sub_4559C0
// entry 004559c0  size 253  status ok
//======================================================================

__int16 __fastcall sub_4559C0(_WORD *a1, int a2, _WORD *a3, _WORD *a4)
{
  int v4; // esi
  unsigned int v7; // [esp+8h] [ebp-14h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-10h]
  unsigned int v9; // [esp+14h] [ebp-8h] BYREF
  unsigned int v10; // [esp+18h] [ebp-4h]

  v8 = -1;
  v10 = -1;
  sub_451F60((int)a1, a2, (int *)&v9, (int *)&v7);
  v4 = sub_44F680(a1[v9 + 2]);
  if ( v4 == sub_44F680(a1[v7 + 2]) )
  {
    v8 = v9;
    v10 = v7;
    sub_44F840(a1, v9, v7, a3, a4);
    return 0;
  }
  else if ( (sub_44F700(a1, 4) == 2 || sub_44F700(a1, 3) == 2) && sub_44F700(a1, 2) == 2 )
  {
    v8 = v9;
    v10 = v7;
    sub_44F840(a1, v9, v7, a3, a4);
    return 3;
  }
  else
  {
    return sub_453E00(a1, a3, a4) + 1;
  }
}


//======================================================================
// sub_455AC0
// entry 00455ac0  size 492  status ok
//======================================================================

__int16 __thiscall sub_455AC0(_WORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // eax
  int v8; // [esp+8h] [ebp-28h]
  unsigned int v9; // [esp+Ch] [ebp-24h] BYREF
  int v10; // [esp+10h] [ebp-20h]
  unsigned int v11; // [esp+14h] [ebp-1Ch]
  unsigned int v12; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-10h]
  unsigned int v14; // [esp+24h] [ebp-Ch]
  int i; // [esp+28h] [ebp-8h]
  int v16; // [esp+2Ch] [ebp-4h]

  v11 = -1;
  v14 = -1;
  sub_452010(this, (int *)&v12, (int *)&v9);
  v3 = sub_44F680(*(this + v12 + 2));
  if ( v3 == sub_44F680(*(this + v9 + 2)) )
  {
    v11 = v12;
    v14 = v9;
    sub_44F840(this, v12, v9, a2, a3);
    return 0;
  }
  else
  {
    v13 = -1;
    v10 = -1;
    v8 = -1;
    v16 = -1;
    for ( i = 0; i < 7; ++i )
    {
      v5 = sub_44F680(*(this + i + 2));
      if ( sub_44F700(this, v5) == 2 )
      {
        if ( v13 == -1 )
        {
          v13 = sub_44F680(*(this + i + 2));
        }
        else if ( v10 == -1 )
        {
          v10 = sub_44F680(*(this + i + 2));
        }
        ++i;
      }
      else
      {
        v6 = sub_44F680(*(this + i + 2));
        if ( sub_44F700(this, v6) == 1 )
        {
          if ( v8 == -1 )
          {
            v8 = sub_44F680(*(this + i + 2));
          }
          else if ( v16 == -1 )
          {
            v16 = sub_44F680(*(this + i + 2));
          }
        }
      }
    }
    if ( v10 + v13 > 7 || v8 > 11 || v16 > 10 )
    {
      return sub_453E00(this, a2, a3) + 1;
    }
    else
    {
      v11 = v12;
      v14 = v9;
      sub_44F840(this, v12, v9, a2, a3);
      return 3;
    }
  }
}


//======================================================================
// sub_455CB0
// entry 00455cb0  size 848  status ok
//======================================================================

__int16 __thiscall sub_455CB0(int this, _WORD *a2, _WORD *a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  unsigned int v9; // [esp+8h] [ebp-28h] BYREF
  unsigned int v10; // [esp+Ch] [ebp-24h] BYREF
  int v11; // [esp+10h] [ebp-20h]
  unsigned int v12; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v13; // [esp+18h] [ebp-18h]
  __int16 v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  unsigned int v16; // [esp+24h] [ebp-Ch]
  int i; // [esp+28h] [ebp-8h]
  unsigned int v18; // [esp+2Ch] [ebp-4h] BYREF

  v13 = -1;
  v16 = -1;
  sub_452010((_WORD *)this, (int *)&v18, (int *)&v9);
  v3 = sub_44F680(*(_WORD *)(this + 2 * v18 + 4));
  if ( v3 == sub_44F680(*(_WORD *)(this + 2 * v9 + 4)) )
  {
    v13 = v18;
    v16 = v9;
    sub_44F840((_WORD *)this, v18, v9, a2, a3);
    LOWORD(v4) = 0;
  }
  else
  {
    sub_451F60(this, (int)&v12, (int *)&v10, (int *)&v12);
    v5 = sub_44F680(*(_WORD *)(this + 2 * v10 + 4));
    if ( v5 == sub_44F680(*(_WORD *)(this + 2 * v12 + 4)) )
    {
      v13 = v10;
      v16 = v12;
      sub_44F840((_WORD *)this, v10, v12, a2, a3);
      LOWORD(v4) = 0;
    }
    else
    {
      v15 = -1;
      v11 = -1;
      for ( i = 0; i < 7; ++i )
      {
        v6 = sub_44F680(*(_WORD *)(this + 2 * i + 4));
        if ( sub_44F700((_DWORD *)this, v6) == 2 )
        {
          if ( v15 == -1 )
          {
            v15 = sub_44F680(*(_WORD *)(this + 2 * i++ + 4));
          }
          else if ( v11 == -1 )
          {
            v11 = sub_44F680(*(_WORD *)(this + 2 * i + 4));
            break;
          }
        }
      }
      v13 = -1;
      v16 = -1;
      if ( v11 + v15 <= 9 || *(_DWORD *)(this + 824) == 6 && v15 <= 6 && v11 <= 5 )
      {
        v14 = 3;
        for ( i = 0; i < 7; ++i )
        {
          if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != -1
            && sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != *(_DWORD *)(this + 720) )
          {
            if ( v13 != -1 )
            {
              v16 = i;
              break;
            }
            v13 = i;
          }
        }
        if ( v16 == -1 )
        {
          if ( *(_DWORD *)(this + 836) == 6 )
          {
            v16 = sub_44F6C0(*(_WORD *)(this + 4)) != *(_DWORD *)(this + 720);
          }
          else
          {
            for ( i = 0; i < 7; ++i )
            {
              if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) == *(_DWORD *)(this + 720)
                && sub_44F680(*(_WORD *)(this + 2 * i + 4)) != 14
                && (sub_44F680(*(_WORD *)(this + 2 * i + 4)) > *(_DWORD *)(this + 824)
                 || sub_44F680(*(_WORD *)(this + 2 * i + 4)) < *(_DWORD *)(this + 808)) )
              {
                v16 = i;
                break;
              }
            }
          }
        }
        sub_44F840((_WORD *)this, v13, v16, a2, a3);
        LOWORD(v4) = v14;
      }
      else
      {
        return sub_453E00((_DWORD *)this, a2, a3) + 1;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_456000
// entry 00456000  size 32  status ok
//======================================================================

__int16 __thiscall sub_456000(_DWORD *this, _WORD *a2, _WORD *a3)
{
  sub_454200(this, a2, a3);
  return 0;
}


//======================================================================
// sub_456020
// entry 00456020  size 191  status ok
//======================================================================

__int16 __thiscall sub_456020(int this, __int16 *a2, __int16 *a3)
{
  int v3; // esi
  unsigned int v6; // [esp+8h] [ebp-8h] BYREF
  unsigned int v7; // [esp+Ch] [ebp-4h] BYREF

  v6 = -1;
  v7 = -1;
  if ( *(_BYTE *)(this + 706) )
    sub_4516A0(this, &v6, &v7);
  else
    sub_4512C0(this, (int)&v6, (BOOL *)&v6, (int *)&v7);
  sub_44F840((_WORD *)this, v6, v7, a2, a3);
  v3 = sub_44F680(*a2);
  if ( v3 == sub_44F680(*a3) )
    return 0;
  if ( sub_44F680(*a2) != 14 )
    sub_5E9F20((char)"GetRank(*low1) == 14", "..\\Casino\\paigowai.cpp", 3576);
  return 1;
}


//======================================================================
// sub_4560E0
// entry 004560e0  size 832  status ok
//======================================================================

__int16 __thiscall sub_4560E0(int this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  int v4; // eax
  int v6; // eax
  unsigned int v8; // [esp+4h] [ebp-1Ch]
  unsigned int v9; // [esp+4h] [ebp-1Ch]
  __int16 v10; // [esp+8h] [ebp-18h]
  __int16 v11; // [esp+8h] [ebp-18h]
  __int16 v12; // [esp+8h] [ebp-18h]
  int v13; // [esp+Ch] [ebp-14h]
  unsigned int v14; // [esp+10h] [ebp-10h]
  unsigned int v15; // [esp+10h] [ebp-10h]
  unsigned int v16; // [esp+10h] [ebp-10h]
  unsigned int v17; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int j; // [esp+18h] [ebp-8h]
  signed int k; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v17 = 0;
  v21 = 0;
  v13 = 0;
  v8 = -1;
  v14 = -1;
  for ( i = 0; i < 7; ++i )
  {
    if ( !v21 )
    {
      v3 = sub_44F680(*(_WORD *)(this + 2 * i + 4));
      if ( sub_44F700((_DWORD *)this, v3) == 2 )
      {
        v21 = sub_44F680(*(_WORD *)(this + 2 * i + 4));
        v17 = i;
      }
    }
    if ( !v13 )
    {
      v4 = sub_44F680(*(_WORD *)(this + 2 * i + 4));
      if ( sub_44F700((_DWORD *)this, v4) == 3 )
        v13 = sub_44F680(*(_WORD *)(this + 2 * i + 4));
    }
  }
  if ( v13 == 14 )
  {
    sub_44F840((_WORD *)this, v17, v17 + 1, a2, a3);
    return 0;
  }
  else if ( *(_BYTE *)(this + 712) )
  {
    if ( *(_DWORD *)(this + 728) == 1 )
    {
      v10 = 1;
      sub_44F840((_WORD *)this, 0, 1u, a2, a3);
    }
    else
    {
      v10 = 2;
      for ( j = 0; j < 3; ++j )
      {
        v6 = sub_44F7E0((_DWORD *)this, v13, j);
        if ( sub_44F6C0(*(_WORD *)(this + 2 * v6 + 4)) != *(_DWORD *)(this + 720) )
        {
          if ( v8 != -1 )
          {
            v15 = sub_44F7E0((_DWORD *)this, v13, j);
            sub_44F840((_WORD *)this, v8, v15, a2, a3);
            return v10;
          }
          v8 = sub_44F7E0((_DWORD *)this, v13, j);
        }
      }
      sub_44F840((_WORD *)this, v8, 0xFFFFFFFF, a2, a3);
    }
    return v10;
  }
  else if ( *(_BYTE *)(this + 706) )
  {
    if ( v13 < 10 )
    {
      v11 = 5;
      v8 = 0;
      v14 = 1;
    }
    else
    {
      v11 = 6;
      for ( k = 0; k < 7; ++k )
      {
        if ( sub_44F680(*(_WORD *)(this + 2 * k + 4)) == v13
          && sub_44F6C0(*(_WORD *)(this + 2 * k + 4)) != *(_DWORD *)(this + 720) )
        {
          if ( v8 != -1 )
          {
            sub_44F840((_WORD *)this, v8, k, a2, a3);
            return v11;
          }
          v8 = k;
        }
      }
    }
    sub_44F840((_WORD *)this, v8, v14, a2, a3);
    return v11;
  }
  else if ( *(_BYTE *)(this + 709) )
  {
    if ( v13 <= 10 )
    {
      v12 = 3;
      sub_44F840((_WORD *)this, 0, 1u, a2, a3);
    }
    else
    {
      v12 = 4;
      v9 = sub_44F7E0((_DWORD *)this, v13, 0);
      v16 = sub_44F7E0((_DWORD *)this, v13, 1);
      sub_44F840((_WORD *)this, v9, v16, a2, a3);
    }
    return v12;
  }
  else
  {
    sub_5E9F20((char)"false", "..\\Casino\\paigowai.cpp", 3694);
    sub_44F840((_WORD *)this, 0xFFFFFFFF, 0xFFFFFFFF, a2, a3);
    return 0;
  }
}


//======================================================================
// sub_456420
// entry 00456420  size 917  status ok
//======================================================================

__int16 __thiscall sub_456420(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v8; // [esp+4h] [ebp-34h]
  int v9; // [esp+8h] [ebp-30h]
  unsigned int v10; // [esp+Ch] [ebp-2Ch]
  __int16 v11; // [esp+10h] [ebp-28h]
  int v12; // [esp+14h] [ebp-24h]
  unsigned int v13; // [esp+18h] [ebp-20h]
  int v14; // [esp+1Ch] [ebp-1Ch]
  int i; // [esp+20h] [ebp-18h]
  int v16; // [esp+24h] [ebp-14h]
  int v17; // [esp+28h] [ebp-10h]
  int v18; // [esp+2Ch] [ebp-Ch]
  char v19; // [esp+33h] [ebp-5h]
  unsigned int v20; // [esp+34h] [ebp-4h]

  v16 = 0;
  v12 = 0;
  v20 = 0;
  v8 = 0;
  v18 = -1;
  v9 = -1;
  v14 = 0;
  v17 = 0;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_44F700(this, v3) == 3 )
    {
      v12 = sub_44F680(*((_WORD *)this + i + 2));
      i += 2;
    }
    else
    {
      v4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( sub_44F700(this, v4) == 2 )
      {
        v16 = sub_44F680(*((_WORD *)this + i + 2));
        v20 = i;
        v8 = ++i;
      }
      else
      {
        v5 = sub_44F680(*((_WORD *)this + i + 2));
        if ( sub_44F700(this, v5) == 1 )
        {
          if ( v18 == -1 )
          {
            v18 = i;
            v14 = sub_44F680(*((_WORD *)this + i + 2));
          }
          else
          {
            v9 = i;
            v17 = sub_44F680(*((_WORD *)this + i + 2));
          }
        }
      }
    }
  }
  v11 = 0;
  v10 = v20;
  v13 = v8;
  v19 = 0;
  if ( v16 < 9 && v14 == 14 && v17 >= 10 )
  {
    if ( v12 == 13 && v16 < 5 && (v16 > 2 && v17 >= 12 || v16 == 2 && v17 >= 11) )
      v19 = 1;
    if ( v12 == 12 && v16 < 6 && (v16 > 2 && v17 >= 13 || v16 == 2 && v17 >= 11) )
      v19 = 1;
    if ( v12 == 11 && v16 < 6 && (v16 > 2 && v17 >= 13 || v16 == 2 && v17 >= 12) )
      v19 = 1;
    if ( v12 == 10 && v16 < 6 && (v16 >= 4 && v17 >= 13 || v16 < 4 && v17 >= 12) )
      v19 = 1;
    if ( v12 > 6 && v12 < 10 && v16 < 7 && (v16 > 3 && v17 >= 13 || v16 < 4 && v17 >= 12) )
      v19 = 1;
    if ( (v12 == 6 || v12 == 5)
      && v16 < 8
      && (v16 > 4 && v17 >= 13 || v16 < 5 && v16 > 2 && v17 >= 12 || v16 == 2 && v17 >= 11) )
    {
      v19 = 1;
    }
    if ( v12 == 4 && (v16 > 5 && v17 >= 13 || v16 > 2 && v16 < 6 && v17 >= 12 || v16 == 2 && v17 >= 11) )
      v19 = 1;
    if ( v12 == 3 && (v16 > 6 && v17 >= 13 || v16 > 4 && v16 < 7 && v17 >= 12 || v16 == 4 && v17 >= 11 || v16 == 2) )
      v19 = 1;
    if ( v12 == 2 && (v16 > 6 && v17 >= 13 || v16 >= 4 && v16 <= 6 && v17 >= 12 || v16 == 3 && v17 >= 11) )
      v19 = 1;
    if ( v19 == 1 )
    {
      v11 = 1;
      v10 = v18;
      v13 = v9;
    }
  }
  sub_44F840(this, v10, v13, a2, a3);
  return v11;
}


//======================================================================
// sub_4567C0
// entry 004567c0  size 205  status ok
//======================================================================

__int16 __thiscall sub_4567C0(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v6; // [esp+4h] [ebp-10h]
  __int16 v7; // [esp+8h] [ebp-Ch]
  unsigned int v8; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v6 = -1;
  v8 = -1;
  v7 = 0;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_44F700(this, v3) == 2 )
    {
      v6 = i;
      v8 = i + 1;
      break;
    }
  }
  if ( sub_44F700(this, 14) == 3 && sub_44F700(this, 3) == 2 && sub_44F700(this, 2) == 2 )
  {
    v7 = 1;
    v6 = 0;
    v8 = 1;
  }
  sub_44F840(this, v6, v8, a2, a3);
  return v7;
}


//======================================================================
// sub_456890
// entry 00456890  size 133  status ok
//======================================================================

__int16 __thiscall sub_456890(_WORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  signed int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*(this + i + 2));
    if ( sub_44F700(this, v3) == 3 )
    {
      sub_44F840(this, i, i + 1, a2, a3);
      return 0;
    }
  }
  sub_44F840(this, 0xFFFFFFFF, 0xFFFFFFFF, a2, a3);
  return 0;
}


//======================================================================
// sub_456920
// entry 00456920  size 517  status ok
//======================================================================

__int16 __thiscall sub_456920(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  int v4; // eax
  unsigned int v7; // [esp+4h] [ebp-28h]
  __int16 v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch]
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h]
  int i; // [esp+20h] [ebp-Ch]
  unsigned int v13; // [esp+24h] [ebp-8h]
  unsigned int v14; // [esp+28h] [ebp-4h]

  v9 = 0;
  v13 = 0;
  v7 = -1;
  v14 = -1;
  v11 = 0;
  v10 = 0;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_44F700(this, v3) == 4 )
    {
      v9 = sub_44F680(*((_WORD *)this + i + 2));
      v13 = i;
      i += 3;
    }
    else
    {
      v4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( sub_44F700(this, v4) == 1 )
      {
        if ( v7 == -1 )
        {
          v7 = i;
          v11 = sub_44F680(*((_WORD *)this + i + 2));
        }
        else if ( v14 == -1 )
        {
          v14 = i;
          v10 = sub_44F680(*((_WORD *)this + i + 2));
        }
      }
    }
  }
  if ( v9 < 7
    || v9 == 13 && v11 == 14 && v10 >= 12
    || v9 == 12 && v11 == 14 && v10 >= 10
    || v9 == 11 && v11 == 14 && v10 >= 3
    || v9 == 10 && (v11 > 13 || v11 == 13 && v10 >= 12)
    || v9 == 9 && (v11 > 13 || v11 == 13 && v10 >= 3)
    || v9 == 8 && (v11 > 12 || v11 == 12 && v10 >= 11)
    || v9 == 7 && v11 >= 12 )
  {
    v8 = 0;
    sub_44F840(this, v7, v14, a2, a3);
  }
  else
  {
    v8 = 1;
    sub_44F840(this, v13, v13 + 1, a2, a3);
  }
  return v8;
}


//======================================================================
// sub_456B30
// entry 00456b30  size 361  status ok
//======================================================================

__int16 __thiscall sub_456B30(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  int v4; // eax
  __int16 v7; // [esp+8h] [ebp-1Ch]
  int v8; // [esp+Ch] [ebp-18h]
  unsigned int v9; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h]
  unsigned int v12; // [esp+20h] [ebp-4h]

  v8 = 0;
  v12 = 0;
  v11 = 0;
  v9 = 0;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_44F700(this, v3) == 4 )
    {
      v8 = sub_44F680(*((_WORD *)this + i + 2));
      v12 = i;
      i += 3;
    }
    else
    {
      v4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( sub_44F700(this, v4) == 2 )
      {
        v11 = sub_44F680(*((_WORD *)this + i + 2));
        v9 = i++;
      }
    }
  }
  if ( v8 == 14 && v11 <= 5 || v8 == 13 && v11 <= 4 || v8 == 12 && v11 <= 4 || v8 == 11 && v11 <= 3 )
  {
    v7 = 1;
    sub_44F840(this, v12, v12 + 1, a2, a3);
  }
  else
  {
    v7 = 0;
    sub_44F840(this, v9, v9 + 1, a2, a3);
  }
  return v7;
}


//======================================================================
// sub_456CA0
// entry 00456ca0  size 358  status ok
//======================================================================

__int16 __thiscall sub_456CA0(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int v3; // eax
  int v4; // eax
  int v7; // [esp+4h] [ebp-20h]
  __int16 v8; // [esp+Ch] [ebp-18h]
  unsigned int v9; // [esp+10h] [ebp-14h]
  int i; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h]
  unsigned int v12; // [esp+20h] [ebp-4h]

  v11 = 0;
  v7 = 0;
  v12 = 0;
  v9 = 0;
  for ( i = 0; i < 7; ++i )
  {
    v3 = sub_44F680(*((_WORD *)this + i + 2));
    if ( sub_44F700(this, v3) == 4 )
    {
      v11 = sub_44F680(*((_WORD *)this + i + 2));
      v12 = i;
      i += 3;
    }
    else
    {
      v4 = sub_44F680(*((_WORD *)this + i + 2));
      if ( sub_44F700(this, v4) == 3 )
      {
        v7 = sub_44F680(*((_WORD *)this + i + 2));
        v9 = i;
        i += 2;
      }
    }
  }
  if ( abs(v11 - v7) == 1 )
  {
    v8 = 0;
    sub_44F840(this, v9, v9 + 1, a2, a3);
  }
  else
  {
    v8 = 1;
    if ( v11 <= v7 )
      sub_44F840(this, v9, v9 + 1, a2, a3);
    else
      sub_44F840(this, v12, v12 + 1, a2, a3);
  }
  return v8;
}


//======================================================================
// sub_456E10
// entry 00456e10  size 56  status ok
//======================================================================

__int16 __thiscall sub_456E10(_WORD *this, _WORD *a2, _WORD *a3)
{
  sub_44F840(this, 0, 1u, a2, a3);
  return 0;
}


//======================================================================
// sub_456E50
// entry 00456e50  size 280  status ok
//======================================================================

__int16 __thiscall sub_456E50(int this, _WORD *a2, _WORD *a3)
{
  unsigned int v5; // [esp+4h] [ebp-Ch]
  signed int i; // [esp+Ch] [ebp-4h]
  signed int j; // [esp+Ch] [ebp-4h]

  v5 = -1;
  if ( *(_BYTE *)(this + 706) )
  {
    for ( i = 0; i < 4; ++i )
    {
      if ( sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != *(_DWORD *)(this + 720)
        && sub_44F6C0(*(_WORD *)(this + 2 * i + 4)) != -1 )
      {
        if ( v5 != -1 )
        {
          sub_44F840((_WORD *)this, v5, i, a2, a3);
          return 0;
        }
        v5 = i;
      }
    }
    sub_44F840((_WORD *)this, v5, 0xFFFFFFFF, a2, a3);
    return 0;
  }
  else
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( sub_44F680(*(_WORD *)(this + 2 * j + 4)) != -1 )
      {
        if ( v5 != -1 )
        {
          sub_44F840((_WORD *)this, v5, j, a2, a3);
          return 0;
        }
        v5 = j;
      }
    }
    sub_44F840((_WORD *)this, v5, 0xFFFFFFFF, a2, a3);
    return 0;
  }
}


//======================================================================
// sub_456F70
// entry 00456f70  size 416  status ok
//======================================================================

char __thiscall sub_456F70(int this, __int16 a2, __int16 a3, __int16 a4, __int16 a5)
{
  __int16 v7; // [esp+4h] [ebp-2Ch]
  char v8[3]; // [esp+8h] [ebp-28h] BYREF
  char v9; // [esp+Bh] [ebp-25h]
  _WORD v10[8]; // [esp+10h] [ebp-20h]
  __int16 i; // [esp+20h] [ebp-10h]
  char v12[3]; // [esp+24h] [ebp-Ch] BYREF
  char v13; // [esp+27h] [ebp-9h]

  for ( i = 0; i < 7; ++i )
    v10[i] = *(_WORD *)(this + 2 * i + 4);
  sub_4530B0((_WORD *)this, *(_DWORD *)(this + 20), a2, a3, v8);
  sub_4530B0((_WORD *)this, *(_DWORD *)(this + 20), a4, a5, v12);
  if ( v8[0] == v12[0] )
  {
    v7 = 0;
  }
  else if ( sub_453550(v8, v12) )
  {
    v7 = -1;
  }
  else
  {
    v7 = 1;
  }
  sub_452FD0(a2, a3, v8);
  sub_452FD0(a4, a5, v12);
  if ( v8[0] > v12[0] )
    return 1;
  if ( v12[0] > v8[0] )
    return 0;
  if ( v8[0] == 2 )
    return v9 >= v13;
  if ( v9 < 11 && v13 < 11 && v7 )
    return v7 == -1;
  return v9 >= v13;
}


//======================================================================
// sub_457110
// entry 00457110  size 226  status ok
//======================================================================

int __thiscall sub_457110(_DWORD *this, _WORD *a2, _WORD *a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-1Ch]
  int i; // [esp+8h] [ebp-18h]
  int j; // [esp+8h] [ebp-18h]
  _WORD v8[8]; // [esp+Ch] [ebp-14h]

  v5 = 0;
  for ( i = 0; i < 7; ++i )
    v8[i] = 0;
  for ( j = 0; j < 7; ++j )
  {
    if ( sub_44F6C0(*((_WORD *)this + j + 2)) != *(this + 180) )
      v8[v5++] = *((_WORD *)this + j + 2);
  }
  *a2 = v8[0];
  *a3 = v8[1];
  if ( !*a2 )
    return sub_5E9F20((char)"card1 != EMPTY_CARD && card2 != EMPTY_CARD", "..\\Casino\\paigowai.cpp", 4214);
  result = (unsigned __int16)*a3;
  if ( !*a3 )
    return sub_5E9F20((char)"card1 != EMPTY_CARD && card2 != EMPTY_CARD", "..\\Casino\\paigowai.cpp", 4214);
  return result;
}


//======================================================================
// sub_457200
// entry 00457200  size 107  status ok
//======================================================================

bool __thiscall sub_457200(int this)
{
  bool v3; // [esp+6h] [ebp-2h]
  bool v4; // [esp+7h] [ebp-1h]

  if ( !*(_BYTE *)(this + 712) )
    return 0;
  v3 = sub_44F750((_DWORD *)this, 14, *(_DWORD *)(this + 720));
  v4 = sub_44F750((_DWORD *)this, 13, *(_DWORD *)(this + 720));
  return v3 && v4;
}


//======================================================================
// sub_457270
// entry 00457270  size 161  status ok
//======================================================================

bool __thiscall sub_457270(_DWORD *this)
{
  int v2; // esi
  int v5; // [esp+Ch] [ebp-10h]
  __int16 v6; // [esp+10h] [ebp-Ch] BYREF
  int v7; // [esp+14h] [ebp-8h]
  __int16 v8; // [esp+18h] [ebp-4h] BYREF

  if ( !sub_457200((int)this) )
    return 0;
  sub_457110(this, &v6, &v8);
  v2 = sub_44F6C0(v6);
  if ( v2 != sub_44F6C0(v8) )
    return 0;
  v7 = sub_44F680(v6);
  v5 = sub_44F680(v8);
  return v7 == 13 && v5 == 12 || v7 == 12 && v5 == 13;
}


//======================================================================
// sub_457320
// entry 00457320  size 370  status ok
//======================================================================

int __thiscall sub_457320(int this, int a2)
{
  sub_44EFD0(this, a2);
  if ( *(_BYTE *)(this + 710) && *(_DWORD *)(this + 836) == 7 )
    return 28;
  if ( sub_457270((_DWORD *)this) )
    return 29;
  if ( *(_BYTE *)(this + 711) && *(_DWORD *)(this + 836) == 7 )
    return 30;
  if ( sub_44F700((_DWORD *)this, 14) == 5 )
    return 26;
  if ( sub_457200(this) )
    return 31;
  if ( *(_BYTE *)(this + 710) || *(_BYTE *)(this + 711) )
    return 12;
  if ( *(_BYTE *)(this + 713) )
    return 23;
  if ( *(_BYTE *)(this + 714) && *(_BYTE *)(this + 718) || *(_BYTE *)(this + 715) )
    return 20;
  if ( *(_BYTE *)(this + 706) )
    return 6;
  if ( *(_BYTE *)(this + 714) )
    return 4;
  if ( *(_BYTE *)(this + 709) )
    return 5;
  if ( *(_BYTE *)(this + 716) )
    return 3;
  return -1;
}


//======================================================================
// sub_4574A0
// entry 004574a0  size 152  status ok
//======================================================================

int __thiscall sub_4574A0(void *this, int a2)
{
  int result; // eax

  switch ( sub_457320((int)this, a2) )
  {
    case 3:
      result = 0;
      break;
    case 4:
      result = 3;
      break;
    case 5:
      result = 2;
      break;
    case 6:
      result = 4;
      break;
    case 12:
      result = 50;
      break;
    case 20:
      result = 5;
      break;
    case 23:
      result = 20;
      break;
    case 26:
      result = 250;
      break;
    case 28:
      result = 5000;
      break;
    case 29:
      result = 1000;
      break;
    case 30:
      result = 750;
      break;
    case 31:
      result = 100;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_457590
// entry 00457590  size 106  status ok
//======================================================================

int __stdcall sub_457590(int a1)
{
  switch ( a1 )
  {
    case 28:
      return 1000;
    case 29:
      return 250;
    case 30:
      return 100;
    case 26:
      return 50;
    case 31:
      return 25;
    case 12:
      return 10;
    case 23:
      return 5;
  }
  return 0;
}


//======================================================================
// sub_457600
// entry 00457600  size 143  status ok
//======================================================================

int __thiscall sub_457600(void *this, int a2)
{
  int i; // [esp+4h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  v6 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( i != a2 && i != 4 )
    {
      if ( (unsigned __int8)sub_461F10(i) )
      {
        v5 = sub_457320((int)this, i);
        v6 += sub_457590(v5);
      }
    }
  }
  if ( v6 > 50000 )
    return 50000;
  return v6;
}


//======================================================================
// sub_4576C0
// entry 004576c0  size 458  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_4576C0(ATL::CCRTHeap *this)
{
  int i; // [esp+8h] [ebp-10h]
  int j; // [esp+8h] [ebp-10h]
  int k; // [esp+8h] [ebp-10h]
  int m; // [esp+8h] [ebp-10h]
  int n; // [esp+8h] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &PaiGowDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 21) = 0;
    *((_DWORD *)this + i + 26) = 0;
    *((_DWORD *)this + i + 33) = 0;
  }
  for ( j = 0; j < 9; ++j )
    *((_DWORD *)this + j + 6) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  for ( k = 0; k < 5; ++k )
    sub_6044B0(542655828, k + 2002, 0);
  if ( (unsigned __int8)sub_637630(dword_162EE84) )
  {
    for ( m = 0; m < 14; ++m )
      sub_6044B0(542655828, m + 2022, 0);
  }
  for ( n = 0; n < 2; ++n )
    *((_DWORD *)this + n + 31) = 0;
  return this;
}


//======================================================================
// sub_457890
// entry 00457890  size 914  status ok
//======================================================================

void __thiscall sub_457890(CNoTrackObject *this)
{
  int i; // [esp+A4h] [ebp-10h]
  int j; // [esp+A4h] [ebp-10h]
  int k; // [esp+A4h] [ebp-10h]

  *(_DWORD *)this = &PaiGowDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 21) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 21))(*((_DWORD *)this + i + 21), 1);
    if ( *((_DWORD *)this + i + 26) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 26))(*((_DWORD *)this + i + 26), 1);
    if ( *((_DWORD *)this + i + 33) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 33))(*((_DWORD *)this + i + 33), 1);
  }
  for ( j = 0; j < 9; ++j )
  {
    if ( *((_DWORD *)this + j + 6) )
    {
      (***((void (__thiscall ****)(_DWORD, int))this + j + 6))(*((_DWORD *)this + j + 6), 1);
      *((_DWORD *)this + j + 6) = 0;
    }
  }
  for ( k = 0; k < 2; ++k )
  {
    if ( *((_DWORD *)this + k + 31) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 31))(*((_DWORD *)this + k + 31), 1);
  }
  if ( *((_DWORD *)this + 15) )
    (***((void (__thiscall ****)(_DWORD, int))this + 15))(*((_DWORD *)this + 15), 1);
  if ( *((_DWORD *)this + 16) )
    (***((void (__thiscall ****)(_DWORD, int))this + 16))(*((_DWORD *)this + 16), 1);
  if ( *((_DWORD *)this + 17) )
    (***((void (__thiscall ****)(_DWORD, int))this + 17))(*((_DWORD *)this + 17), 1);
  if ( *((_DWORD *)this + 38) )
    (***((void (__thiscall ****)(_DWORD, int))this + 38))(*((_DWORD *)this + 38), 1);
  if ( *((_DWORD *)this + 18) )
    (***((void (__thiscall ****)(_DWORD, int))this + 18))(*((_DWORD *)this + 18), 1);
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_457C30
// entry 00457c30  size 2704  status ok
//======================================================================

int __thiscall sub_457C30(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+8h] [ebp-E0h]
  int v12; // [esp+Ch] [ebp-DCh]
  int v13; // [esp+10h] [ebp-D8h]
  int v14; // [esp+14h] [ebp-D4h]
  int v15; // [esp+18h] [ebp-D0h]
  _DWORD *v16; // [esp+1Ch] [ebp-CCh]
  int v17; // [esp+20h] [ebp-C8h]
  int v18; // [esp+24h] [ebp-C4h]
  int v19; // [esp+2Ch] [ebp-BCh]
  int v20; // [esp+30h] [ebp-B8h]
  int v21; // [esp+34h] [ebp-B4h]
  int v22; // [esp+38h] [ebp-B0h]
  void *v24; // [esp+40h] [ebp-A8h]
  void *v25; // [esp+48h] [ebp-A0h]
  void *v26; // [esp+50h] [ebp-98h]
  void *v27; // [esp+58h] [ebp-90h]
  void *v28; // [esp+60h] [ebp-88h]
  _DWORD *v29; // [esp+68h] [ebp-80h]
  void *v30; // [esp+70h] [ebp-78h]
  void *v31; // [esp+78h] [ebp-70h]
  void *v32; // [esp+80h] [ebp-68h]
  void *v33; // [esp+88h] [ebp-60h]
  int v34; // [esp+90h] [ebp-58h]
  _DWORD v35[4]; // [esp+94h] [ebp-54h]
  int v36; // [esp+A4h] [ebp-44h]
  _DWORD v37[8]; // [esp+A8h] [ebp-40h]
  int i; // [esp+C8h] [ebp-20h]
  _DWORD v39[4]; // [esp+CCh] [ebp-1Ch]
  int v40; // [esp+E4h] [ebp-4h]

  v34 = 5;
  v37[0] = 1;
  v37[1] = 2;
  v37[2] = 0;
  v37[3] = 3;
  v37[4] = 5;
  v37[5] = 6;
  v37[6] = 4;
  v37[7] = 7;
  v35[0] = 437;
  v35[1] = 394;
  v35[2] = 226;
  v35[3] = 185;
  v39[0] = 119;
  v39[1] = 202;
  v39[2] = 202;
  v39[3] = 119;
  v36 = 2012;
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) )
  {
    if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
    {
      v2 = sub_630F40("SID_PAIGOWPOKER1");
      sub_5F38B0(v2);
      sub_5F1AD0(65003);
      v36 = 65005;
    }
  }
  else
  {
    v1 = sub_630F40("SID_PAIGOWPOKER");
    sub_5F38B0(v1);
    sub_5F1AD0(2001);
  }
  for ( i = 0; i < 5; ++i )
  {
    v33 = operator new(0x24u);
    v40 = 0;
    if ( v33 )
      v22 = sub_459B00(v33);
    else
      v22 = 0;
    v40 = -1;
    *(_DWORD *)(this + 4 * i + 4) = v22;
    sub_459C00(i);
    if ( i != 4 && Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
    {
      v32 = operator new(0x178u);
      v40 = 1;
      if ( v32 )
      {
        sub_5EAAF0(v32);
        v21 = v3;
      }
      else
      {
        v21 = 0;
      }
      v40 = -1;
      *(_DWORD *)(this + 4 * i + 132) = v21;
      sub_5EAE80(110013, 0, 0, 3, -1);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * i + 132) + 176))(
        *(_DWORD *)(this + 4 * i + 132),
        0);
    }
  }
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
    v34 = 9;
  for ( i = 0; i < v34; ++i )
  {
    if ( i >= v34 - 1 )
    {
      v30 = operator new(0xAE8u);
      v40 = 3;
      if ( v30 )
        v19 = sub_45A120(4, 0);
      else
        v19 = 0;
      v40 = -1;
      *(_DWORD *)(this + 4 * i + 24) = v19;
    }
    else
    {
      v31 = operator new(0xAE8u);
      v40 = 2;
      if ( v31 )
        v20 = sub_45A120(i % 4, i / 4);
      else
        v20 = 0;
      v40 = -1;
      *(_DWORD *)(this + 4 * i + 24) = v20;
    }
    sub_5EAE80(v36, 0, 0, 1, -1);
    if ( i < v34 - 1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * i + 24) + 176))(
        *(_DWORD *)(this + 4 * i + 24),
        v37[i]);
      if ( i < 4
        && Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1
        && *(_DWORD *)(this + 4 * i + 132) )
      {
        switch ( i )
        {
          case 0:
          case 1:
            if ( i )
              v18 = sub_5F5550(*(_DWORD *)(this + 4 * i + 24)) - 1;
            else
              v18 = 2 - sub_5F5550(*(_DWORD *)(this + 132));
            v4 = v37[i];
            v5 = sub_5F5590(*(_DWORD *)(this + 4 * i + 132));
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 132) + 68))(
              *(_DWORD *)(this + 4 * i + 132),
              v18 + v35[v37[i]],
              v39[v4] - v5 / 2);
            break;
          case 2:
          case 3:
            if ( i == 3 )
              v17 = sub_5F5550(*(_DWORD *)(this + 36)) + 2;
            else
              v17 = -2 - sub_5F5550(*(_DWORD *)(this + 4 * i + 132));
            v6 = v37[i];
            v7 = sub_5F5590(*(_DWORD *)(this + 4 * i + 24));
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 132) + 68))(
              *(_DWORD *)(this + 4 * i + 132),
              v17 + v35[v37[i]],
              v39[v6] + v7 / 2 + 2);
            break;
          default:
            break;
        }
      }
    }
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode(*(CPane **)(this + 4 * i + 24), *(_DWORD *)(dword_790738 + 4));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 24) + 116))(*(_DWORD *)(this + 4 * i + 24));
  }
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 24) + 68))(*(_DWORD *)(this + 24), -41, -3);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), 2, -2);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), 0, -5);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 68))(*(_DWORD *)(this + 36), 0, -1);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 40) + 68))(*(_DWORD *)(this + 40), 37, -18);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 44) + 68))(*(_DWORD *)(this + 44), -2, -2);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 48) + 68))(*(_DWORD *)(this + 48), 2, 0);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(*(_DWORD *)(this + 52), -21, 20);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 132) + 68))(*(_DWORD *)(this + 132), 400, 165);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 136) + 68))(*(_DWORD *)(this + 136), 295, 194);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 140) + 68))(*(_DWORD *)(this + 140), 449, 103);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 144) + 68))(*(_DWORD *)(this + 144), 231, 146);
  }
  v29 = operator new(0x198u);
  v40 = 4;
  if ( v29 )
  {
    sub_5CD6A0(v29);
    *v29 = &PaiGowDealerDisplay::`vftable';
    v16 = v29;
  }
  else
  {
    v16 = 0;
  }
  v40 = -1;
  *(_DWORD *)(this + 60) = v16;
  sub_5EAE80(0, 0, 0, 0, -1);
  v28 = operator new(0x184u);
  v40 = 5;
  if ( v28 )
    v15 = sub_5F5BF0(v28);
  else
    v15 = 0;
  v40 = -1;
  *(_DWORD *)(this + 64) = v15;
  sub_5EAE80(2022, 0, 0, 51, -1);
  v27 = operator new(0x184u);
  v40 = 6;
  if ( v27 )
    v14 = sub_5F5BF0(v27);
  else
    v14 = 0;
  v40 = -1;
  *(_DWORD *)(this + 68) = v14;
  sub_5EAE80(2023, 0, 0, 50, -1);
  v26 = operator new(0x184u);
  v40 = 7;
  if ( v26 )
    v13 = sub_5F5BF0(v26);
  else
    v13 = 0;
  v40 = -1;
  *(_DWORD *)(this + 72) = v13;
  sub_5EAE80(2007, 0, 0, 1, -1);
  v25 = operator new(0x178u);
  v40 = 8;
  if ( v25 )
  {
    sub_5EAAF0(v25);
    v12 = v8;
  }
  else
  {
    v12 = 0;
  }
  v40 = -1;
  *(_DWORD *)(this + 76) = v12;
  sub_5EAE80(2018, 0, 0, 1, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 116))(*(_DWORD *)(this + 76));
  v24 = operator new(0x178u);
  v40 = 9;
  if ( v24 )
  {
    sub_5EAAF0(v24);
    v11 = v9;
  }
  else
  {
    v11 = 0;
  }
  v40 = -1;
  *(_DWORD *)(this + 80) = v11;
  return sub_5EAE80(2019, 0, 0, 1, -1);
}


//======================================================================
// sub_4586D0
// entry 004586d0  size 262  status ok
//======================================================================

int sub_4586D0()
{
  char v1; // [esp+0h] [ebp-20h]
  CImageDisplay *v2; // [esp+18h] [ebp-8h]
  unsigned int v3; // [esp+1Ch] [ebp-4h]

  if ( sub_460840(dword_790738) != -1
    && (v3 = sub_460840(dword_790738), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_460B00(v3)) )
  {
    return sub_5F2B20(3204002, 1);
  }
  else
  {
    return sub_5F2BA0(3204002);
  }
}


//======================================================================
// sub_4587E0
// entry 004587e0  size 872  status ok
//======================================================================

int __thiscall sub_4587E0(_DWORD **this)
{
  int result; // eax
  int v3; // [esp+18h] [ebp-20h]
  _DWORD v4[5]; // [esp+1Ch] [ebp-1Ch]
  int v5; // [esp+30h] [ebp-8h]
  int i; // [esp+34h] [ebp-4h]

  v5 = Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) != 0 ? 9 : 5;
  v4[0] = 3;
  v4[1] = 2;
  v4[2] = 4;
  v4[3] = 1;
  v4[4] = 5;
  sub_4586D0();
  for ( i = 0; i < 5; ++i )
  {
    sub_459CD0(*(this + i + 1));
    sub_459130(i);
    if ( *(this + i + 33) )
    {
      if ( !*(_BYTE *)(i + dword_790738 + 249)
        || (*(unsigned __int8 (__thiscall **)(Concurrency::details::VirtualProcessor *, int))(*(_DWORD *)dword_790734
                                                                                            + 708))(
             dword_790734,
             i) )
      {
        (*(void (__thiscall **)(_DWORD))(**(this + i + 33) + 112))(*(this + i + 33));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(this + i + 33) + 116))(*(this + i + 33));
      }
    }
  }
  for ( i = 0; i < v5; ++i )
  {
    if ( i != v5 - 1
      && *(_BYTE *)(sub_5DCB00(i % 4) + 1184)
      && (unsigned __int8)sub_5DA7B0(dword_790734)
      && !(*(unsigned __int8 (__thiscall **)(Concurrency::details::VirtualProcessor *, int))(*(_DWORD *)dword_790734
                                                                                           + 708))(
            dword_790734,
            i % 4)
      && !(*(this + i + 6))[120 * (i % 4) + 95 + 30 * (i / 4)] )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + i + 6) + 184))(*(this + i + 6), i % 4, i / 4);
    }
  }
  if ( (unsigned __int8)sub_5DA7B0(dword_790734) && !dword_163068C )
    (*(void (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 752))(dword_790734);
  if ( *(_DWORD *)(dword_790738 + 264) > 4u )
  {
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 19) + 176))(*(this + 19), 0);
  }
  else if ( *(_DWORD *)(dword_790738 + 268) >= 4u )
  {
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 19) + 176))(
               *(this + 19),
               v4[*(_DWORD *)(dword_790738 + 264)]);
  }
  else
  {
    v3 = v4[*(_DWORD *)(dword_790738 + 264)] - v4[*(_DWORD *)(dword_790738 + 268)];
    if ( v3 < 1 )
      v3 += 5;
    result = (*(int (__thiscall **)(_DWORD, int))(**(this + 19) + 176))(*(this + 19), v3);
  }
  if ( *(_DWORD *)(dword_790738 + 280) == -1 )
    return sub_459580(this);
  return result;
}


//======================================================================
// sub_458B50
// entry 00458b50  size 132  status ok
//======================================================================

int __thiscall sub_458B50(_DWORD **this, int a2, int a3)
{
  int result; // eax
  int v4; // eax

  result = a3;
  if ( a3 < 2 )
  {
    result = a2 + 4 * a3;
    if ( *(this + result + 6) )
    {
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(this + 4 * a3 + a2 + 6) + 184))(
                 *(this + 4 * a3 + a2 + 6),
                 a2,
                 a3);
      if ( a2 != 4 )
      {
        v4 = sub_5DCB00(a2);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 20))(v4, v4);
      }
    }
  }
  return result;
}


//======================================================================
// sub_458BE0
// entry 00458be0  size 674  status ok
//======================================================================

int __thiscall sub_458BE0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp-Ch] [ebp-6Ch]
  int v8; // [esp-4h] [ebp-64h]
  int v9; // [esp+4h] [ebp-5Ch]
  CImageDisplay *v11; // [esp+14h] [ebp-4Ch]
  void *v12; // [esp+20h] [ebp-40h]
  int v13; // [esp+28h] [ebp-38h]
  int v14; // [esp+2Ch] [ebp-34h]
  __int16 *v15; // [esp+30h] [ebp-30h]
  int v16; // [esp+34h] [ebp-2Ch]
  _DWORD v17[7]; // [esp+38h] [ebp-28h]
  int v18; // [esp+5Ch] [ebp-4h]

  v13 = -1;
  v14 = a3;
  v16 = 376;
  v17[0] = 346;
  v17[1] = 203;
  v17[2] = 346;
  v17[3] = 536;
  v17[4] = 166;
  v17[5] = 49;
  v17[6] = 166;
  v15 = *(__int16 **)(*(this + a2 + 1) + 4 * a3 + 8);
  if ( *(_BYTE *)(a2 + dword_790738 + 229) )
    v14 = sub_458E90(a2, a3);
  v15[200] = sub_4604D0(a2, v14);
  v8 = sub_4590A0(a2, a3, 1, v15[200]);
  v3 = sub_459030(a2, a3);
  (*(void (__thiscall **)(__int16 *, int, int))(*(_DWORD *)v15 + 68))(v15, v3, v8);
  (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)v15 + 108))(v15, a3 + 5);
  if ( a2 != 4 )
  {
    v11 = (CImageDisplay *)sub_5DCB00(a2);
    if ( !CImageDisplay::GetDisplayFormat(v11)->rcSource.left || *(_BYTE *)(sub_5DCB00(a2) + 1185) )
      return (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v15 + 112))(v15);
  }
  result = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v15 + 116))(v15);
  if ( a2 == *(_DWORD *)(dword_790738 + 280) )
  {
    if ( a3 == *(_DWORD *)(dword_790738 + 284) )
      v13 = 0;
    result = a3;
    if ( a3 == *(_DWORD *)(dword_790738 + 288) )
      v13 = 1;
    if ( v13 != -1 )
    {
      if ( !*(this + v13 + 31) )
      {
        v12 = operator new(0x178u);
        v18 = 0;
        if ( v12 )
        {
          sub_5EAAF0(v12);
          v9 = v5;
        }
        else
        {
          v9 = 0;
        }
        v18 = -1;
        *(this + v13 + 31) = v9;
      }
      v7 = v17[2 * a2] + (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v15 + 84))(v15);
      v6 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v15 + 76))(v15);
      sub_5EAE80(101001, v17[2 * a2 - 1] + v6, v7, 32, -1);
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v13 + 31) + 116))(*(this + v13 + 31));
    }
  }
  return result;
}


//======================================================================
// sub_458E90
// entry 00458e90  size 408  status ok
//======================================================================

int __stdcall sub_458E90(int a1, int a2)
{
  __int16 v2; // ax
  int v4; // esi
  int v5; // esi
  int v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v6 = a2;
  if ( a2 >= 5 )
  {
    if ( a2 == 5 )
    {
      v4 = sub_641280(*(_WORD *)(dword_790738 + 2 * a1 + 162));
      if ( v4 >= sub_641280(*(_WORD *)(dword_790738 + 2 * a1 + 172)) )
        return sub_461360(a1, *(_WORD *)(dword_790738 + 2 * a1 + 162));
    }
    else
    {
      v5 = sub_641280(*(_WORD *)(dword_790738 + 2 * a1 + 162));
      if ( v5 < sub_641280(*(_WORD *)(dword_790738 + 2 * a1 + 172)) )
        return sub_461360(a1, *(_WORD *)(dword_790738 + 2 * a1 + 162));
    }
    return sub_461360(a1, *(_WORD *)(dword_790738 + 2 * a1 + 172));
  }
  for ( i = 0; i < 7; ++i )
  {
    v2 = sub_4604D0(a1, i);
    if ( !(unsigned __int8)sub_461220(a1, v2) )
    {
      if ( !v6 )
        return i;
      --v6;
    }
  }
  return a2;
}


//======================================================================
// sub_459030
// entry 00459030  size 104  status ok
//======================================================================

int __stdcall sub_459030(int a1, int a2)
{
  _DWORD v3[11]; // [esp+4h] [ebp-2Ch]

  v3[0] = -45;
  v3[1] = -55;
  v3[2] = -57;
  v3[3] = -45;
  v3[4] = -55;
  v3[6] = 328;
  v3[7] = 157;
  v3[8] = 478;
  v3[9] = 6;
  v3[10] = 240;
  return v3[a1] + 17 * a2;
}


//======================================================================
// sub_4590A0
// entry 004590a0  size 142  status ok
//======================================================================

int __stdcall sub_4590A0(int a1, int a2, char a3, __int16 a4)
{
  _DWORD v5[10]; // [esp+4h] [ebp-2Ch]
  int v6; // [esp+2Ch] [ebp-4h]

  v5[0] = 0;
  v5[1] = 0;
  v5[2] = -15;
  v5[3] = -15;
  v5[4] = -70;
  v5[5] = 270;
  v5[6] = 270;
  v5[7] = 85;
  v5[8] = 85;
  v5[9] = 85;
  v6 = v5[a1];
  if ( a3 && (unsigned __int8)sub_461220(a1, a4) )
    v6 += 25;
  return v6;
}


//======================================================================
// sub_459130
// entry 00459130  size 1091  status ok
//======================================================================

int __thiscall sub_459130(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int result; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-50h]
  int v12; // [esp+14h] [ebp-4Ch]
  unsigned __int8 v14; // [esp+1Fh] [ebp-41h]
  void *v15; // [esp+34h] [ebp-2Ch]
  void *v16; // [esp+3Ch] [ebp-24h]
  int v17; // [esp+44h] [ebp-1Ch]
  int v18; // [esp+48h] [ebp-18h]
  int v19; // [esp+4Ch] [ebp-14h]

  if ( a2 == 3 || a2 == 2 )
  {
    v2 = sub_5EB470(*(_DWORD *)(*(this + a2 + 1) + 8));
    v17 = v2 + sub_459030(a2, 0) + 10;
    v3 = sub_5EB4B0(*(_DWORD *)(*(this + a2 + 1) + 8));
    v18 = v3 + sub_4590A0(a2, 0, 0, 0) + 30;
    v19 = v17 + 80;
  }
  else if ( a2 == 4 )
  {
    v6 = sub_5EB470(*(_DWORD *)(*(this + 5) + 8));
    v17 = v6 + sub_459030(4, 0) + 7;
    v7 = sub_5EB4B0(*(_DWORD *)(*(this + 5) + 8));
    v18 = v7 + sub_4590A0(4, 0, 0, 0) + 31;
    v19 = v17 + 80;
  }
  else
  {
    v4 = sub_5EB470(*(_DWORD *)(*(this + a2 + 1) + 8));
    v17 = v4 + sub_459030(a2, 0) + 8;
    v5 = sub_5EB4B0(*(_DWORD *)(*(this + a2 + 1) + 8));
    v18 = v5 + sub_4590A0(a2, 0, 0, 0) + 35;
    v19 = v17 + 82;
  }
  result = v18 + 15;
  if ( a2 == 4 && *(_BYTE *)(dword_790738 + 277)
    || a2 < 4 && (v14 = *(_BYTE *)(sub_5DCB00(a2) + 1186), (result = v14) != 0) )
  {
    if ( !*(this + a2 + 21) )
    {
      v16 = operator new(0x178u);
      if ( v16 )
      {
        sub_5EAAF0(v16);
        v12 = v9;
      }
      else
      {
        v12 = 0;
      }
      *(this + a2 + 21) = v12;
      sub_5EAE80(5042, v17, v18, 80, -1);
      (*(void (__thiscall **)(_DWORD, bool))(*(_DWORD *)*(this + a2 + 21) + 176))(
        *(this + a2 + 21),
        *(_BYTE *)(a2 + dword_790738 + 239) == 0);
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 21) + 116))(*(this + a2 + 21));
    }
    if ( !*(this + a2 + 26) )
    {
      v15 = operator new(0x178u);
      if ( v15 )
      {
        sub_5EAAF0(v15);
        v11 = v10;
      }
      else
      {
        v11 = 0;
      }
      *(this + a2 + 26) = v11;
      sub_5EAE80(5042, v19, v18 + 15, 80, -1);
      (*(void (__thiscall **)(_DWORD, bool))(*(_DWORD *)*(this + a2 + 26) + 176))(
        *(this + a2 + 26),
        *(_BYTE *)(a2 + dword_790738 + 234) == 0);
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 26) + 116))(*(this + a2 + 26));
    }
  }
  else
  {
    if ( *(this + a2 + 21) )
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 21) + 112))(*(this + a2 + 21));
      if ( *(this + a2 + 21) )
        (**(void (__thiscall ***)(_DWORD, int))*(this + a2 + 21))(*(this + a2 + 21), 1);
      *(this + a2 + 21) = 0;
    }
    result = (int)this;
    if ( *(this + a2 + 26) )
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 26) + 112))(*(this + a2 + 26));
      result = *(this + a2 + 26);
      if ( result )
        result = (**(int (__thiscall ***)(_DWORD, int))*(this + a2 + 26))(*(this + a2 + 26), 1);
      *(this + a2 + 26) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_459580
// entry 00459580  size 104  status ok
//======================================================================

void __thiscall sub_459580(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    if ( *(this + i + 31) )
      (***(this + i + 31))(*(this + i + 31), 1);
    *(this + i + 31) = 0;
  }
}


//======================================================================
// sub_4595F0
// entry 004595f0  size 390  status ok
//======================================================================

int __thiscall sub_4595F0(_DWORD *this)
{
  const CHAR *v1; // eax
  int result; // eax
  const CHAR *v3; // [esp-8h] [ebp-2Ch]
  int v4; // [esp+4h] [ebp-20h]
  void *v6; // [esp+Ch] [ebp-18h]
  int v7; // [esp+14h] [ebp-10h]

  v7 = *(_DWORD *)(dword_790738 + 260);
  if ( (unsigned __int8)sub_45F900(dword_790738) )
  {
    if ( !*(this + 38) )
    {
      v6 = operator new(0x1BCu);
      if ( v6 )
        v4 = sub_45AE90(v6);
      else
        v4 = 0;
      *(this + 38) = v4;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 38) + 60))(*(this + 38));
      sub_5F7340(0, 185);
    }
    return sub_5F85D0(*(this + 38));
  }
  else if ( (unsigned __int8)sub_461320(v7) )
  {
    result = sub_45C0A0(v7);
    if ( (_BYTE)result )
      return sub_45B300(dword_79073C);
  }
  else
  {
    v3 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_ILLEGALLOWHAND");
    v1 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_2CANTBEAT5");
    sub_62FF10(v1, v3, 0);
    *(_WORD *)(dword_790738 + 2 * v7 + 162) = 0;
    *(_WORD *)(dword_790738 + 2 * v7 + 172) = 0;
    return sub_45B300(dword_79073C);
  }
  return result;
}


//======================================================================
// sub_459780
// entry 00459780  size 50  status ok
//======================================================================

int __thiscall sub_459780(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 38) )
  {
    result = sub_5F8990(*(this + 38));
    *(this + 38) = 0;
  }
  return result;
}


//======================================================================
// sub_4597C0
// entry 004597c0  size 29  status ok
//======================================================================

int sub_4597C0()
{
  return sub_5DB7D0(0, 175);
}


//======================================================================
// sub_4597E0
// entry 004597e0  size 121  status ok
//======================================================================

int __thiscall sub_4597E0(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_790734)
    || (result = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *, void *))(*(_DWORD *)dword_790734 + 724))(
                   dword_790734,
                   this),
        (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_45F8B0(dword_790738) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_45B260(v2);
    }
  }
  return result;
}


//======================================================================
// sub_4598E0
// entry 004598e0  size 61  status ok
//======================================================================

int __thiscall sub_4598E0(_DWORD *this)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 2003;
  v2[1] = 2004;
  v2[2] = 2002;
  v2[3] = 2005;
  v2[4] = 2006;
  return v2[*(this + 101)];
}


//======================================================================
// sub_459920
// entry 00459920  size 225  status ok
//======================================================================

int __thiscall sub_459920(int this)
{
  int v2; // esi
  _DWORD v4[5]; // [esp+Ch] [ebp-14h]

  v4[0] = -1;
  v4[1] = 1;
  v4[2] = 2;
  v4[3] = 3;
  v4[4] = 0;
  if ( !*(_BYTE *)(dword_790738 + *(_DWORD *)(this + 404) + 224) )
    return 53;
  if ( sub_641280(*(_WORD *)(this + 400)) == 15 )
    return 52;
  if ( sub_641280(*(_WORD *)(this + 400)) == 14 )
    return 13 * v4[sub_641290(*(_WORD *)(this + 400))];
  v2 = 13 * v4[sub_641290(*(_WORD *)(this + 400))];
  return v2 + sub_641280(*(_WORD *)(this + 400)) - 1;
}


//======================================================================
// sub_459A10
// entry 00459a10  size 125  status ok
//======================================================================

bool __thiscall sub_459A10(_DWORD *this)
{
  return *(_DWORD *)(dword_790738 + 260) == *(this + 101)
      && *(_BYTE *)(dword_790738 + *(this + 101) + 224)
      && !*(_BYTE *)(dword_790738 + *(this + 101) + 229);
}


//======================================================================
// sub_459A90
// entry 00459a90  size 104  status ok
//======================================================================

int __thiscall sub_459A90(int this)
{
  sub_461160(*(_DWORD *)(this + 404), *(_WORD *)(this + 400));
  sub_4587E0((_DWORD **)dword_790740);
  if ( sub_4612D0(*(_DWORD *)(this + 404)) == 2 )
    return sub_4595F0((_DWORD *)dword_790740);
  else
    return sub_459780((_DWORD *)dword_790740);
}


//======================================================================
// sub_459B00
// entry 00459b00  size 73  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_459B00(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &PaiGowPlayerDisplay::`vftable';
  for ( i = 0; i < 7; ++i )
    *((_DWORD *)this + i + 2) = 0;
  return this;
}


//======================================================================
// sub_459B50
// entry 00459b50  size 163  status ok
//======================================================================

void __thiscall sub_459B50(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &PaiGowPlayerDisplay::`vftable';
  for ( i = 0; i < 7; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_459C00
// entry 00459c00  size 203  status ok
//======================================================================

int __thiscall sub_459C00(
        struct Concurrency::details::SchedulerBase **this,
        struct Concurrency::details::SchedulerBase *a2)
{
  int result; // eax
  struct Concurrency::details::SchedulerBase *v3; // [esp+4h] [ebp-20h]
  Concurrency::details::FairScheduleGroup *v5; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  result = (int)this;
  *(this + 1) = a2;
  for ( i = 0; i < 7; ++i )
  {
    v5 = (Concurrency::details::FairScheduleGroup *)operator new(0x1A0u);
    if ( v5 )
      v3 = (struct Concurrency::details::SchedulerBase *)Concurrency::details::FairScheduleGroup::FairScheduleGroup(
                                                           v5,
                                                           *(this + 1),
                                                           0);
    else
      v3 = 0;
    *(this + i + 2) = v3;
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 64))(*(this + i + 2));
  }
  return result;
}


//======================================================================
// sub_459CD0
// entry 00459cd0  size 343  status ok
//======================================================================

int __thiscall sub_459CD0(int *this)
{
  int result; // eax
  unsigned __int8 v3; // [esp+7h] [ebp-11h]
  CImageDisplay *v4; // [esp+Ch] [ebp-Ch]
  LONG left; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]

  if ( *(this + 1) != 4 )
  {
    sub_639110(*(this + 1));
    sub_646380(100);
    sub_639110(*(this + 1));
    sub_6464D0(0, 0);
    sub_5D9180(*(this + 1), 0);
  }
  for ( i = 0; i < 7; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 112))(*(this + i + 2));
  result = (int)this;
  if ( *(this + 1) == 4
    || *(_DWORD *)(*((_DWORD *)dword_790734 + 1) + 4)
    || (v4 = (CImageDisplay *)sub_5DCB00(*(this + 1)),
        left = CImageDisplay::GetDisplayFormat(v4)->rcSource.left,
        result = left == 0,
        left)
    && (v3 = *(_BYTE *)(sub_5DCB00(*(this + 1)) + 1185), (result = v3) == 0) )
  {
    for ( j = 0; j < 7; ++j )
    {
      result = sub_4604D0(*(this + 1), j);
      if ( (_WORD)result )
        result = sub_458BE0((_DWORD *)dword_790740, *(this + 1), j);
    }
  }
  return result;
}


//======================================================================
// sub_459E30
// entry 00459e30  size 394  status ok
//======================================================================

int __stdcall sub_459E30(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790740;
  if ( *(_DWORD *)(dword_790740 + 68) )
  {
    sub_5EAF00(2023);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 68) + 176))(*(_DWORD *)(dword_790740 + 68), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 68) + 116))(*(_DWORD *)(dword_790740 + 68));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(0);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790740 + 64) )
  {
    sub_5EAF00(2022);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 64) + 176))(*(_DWORD *)(dword_790740 + 64), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 64) + 116))(*(_DWORD *)(dword_790740 + 64));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(a1);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_459FC0
// entry 00459fc0  size 342  status ok
//======================================================================

int __stdcall sub_459FC0(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790740;
  if ( *(_DWORD *)(dword_790740 + 68) )
  {
    sub_5EAF00(2025);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 68) + 176))(*(_DWORD *)(dword_790740 + 68), 0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(0);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790740 + 64) )
  {
    sub_5EAF00(2024);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 64) + 176))(*(_DWORD *)(dword_790740 + 64), 0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(a1);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_45A120
// entry 0045a120  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_45A120(_DWORD *this, int a2, int a3)
{
  sub_5CC1D0(this);
  *this = &PaiGowBetArea::`vftable';
  *(this + 696) = a2;
  *(this + 697) = a3;
  return this;
}


//======================================================================
// sub_45A180
// entry 0045a180  size 61  status ok
//======================================================================

int __thiscall sub_45A180(_DWORD *this)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 5010;
  v2[1] = 5011;
  v2[2] = 5009;
  v2[3] = 5012;
  v2[4] = 5010;
  return v2[*(this + 696)];
}


//======================================================================
// sub_45A1C0
// entry 0045a1c0  size 197  status ok
//======================================================================

int __stdcall sub_45A1C0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-18h]
  int v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]

  v3 = 359;
  v4 = 211;
  v5 = 410;
  v6 = 160;
  v7 = 272;
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v3 = 367;
        v4 = 245;
        v5 = 419;
        v6 = 176;
      }
    }
    else
    {
      v3 = 331;
      v4 = 206;
      v5 = 396;
      v6 = 138;
    }
  }
  if ( sub_62FBF0(2) )
    return *(&v3 + a1) - sub_62FBF0(3);
  else
    return *(&v3 + a1) + sub_62FBF0(3);
}


//======================================================================
// sub_45A290
// entry 0045a290  size 197  status ok
//======================================================================

int __stdcall sub_45A290(int a1, int a2)
{
  int v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v4 = 190;
  v5 = 190;
  v6 = 106;
  v7 = 106;
  v8 = 204;
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v4 = 174;
        v5 = 192;
        v6 = 109;
        v7 = 139;
      }
    }
    else
    {
      v4 = 192;
      v5 = 191;
      v6 = 135;
      v7 = 129;
    }
  }
  if ( sub_62FBF0(2) )
    return *(&v4 + a1) - sub_62FBF0(3);
  else
    return *(&v4 + a1) + sub_62FBF0(3);
}


//======================================================================
// sub_45A360
// entry 0045a360  size 143  status ok
//======================================================================

int __stdcall sub_45A360(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v3 = 359;
  v4 = 211;
  v5 = 410;
  v6 = 160;
  v7 = 272;
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v3 = 326;
        v4 = 245;
        v5 = 412;
        v6 = 160;
      }
    }
    else
    {
      v3 = 369;
      v4 = 201;
      v5 = 391;
      v6 = 178;
    }
  }
  return *(&v3 + a1);
}


//======================================================================
// sub_45A3F0
// entry 0045a3f0  size 143  status ok
//======================================================================

int __stdcall sub_45A3F0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v3 = 190;
  v4 = 190;
  v5 = 106;
  v6 = 106;
  v7 = 204;
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v3 = 191;
        v4 = 191;
        v5 = 107;
        v6 = 107;
      }
    }
    else
    {
      v3 = 190;
      v4 = 190;
      v5 = 138;
      v6 = 138;
    }
  }
  return *(&v3 + a1);
}


//======================================================================
// sub_45A480
// entry 0045a480  size 164  status ok
//======================================================================

int __thiscall sub_45A480(int *this, int a2)
{
  int result; // eax
  int v3; // [esp-8h] [ebp-10h]
  int v4; // [esp-4h] [ebp-Ch]

  result = *(this + 696);
  if ( result == *(_DWORD *)(dword_790738 + 260) )
  {
    sub_5F4F50(a2);
    result = (unsigned __int8)sub_5F56A0(a2);
    if ( (_BYTE)result )
    {
      v4 = *(this + 697);
      v3 = *(this + 696);
      _RTDynamicCast(*(this + 94), 0, &CasinoBet `RTTI Type Descriptor', &PaiGowBet `RTTI Type Descriptor', 0);
      result = sub_462730(v3, v4);
      if ( (_BYTE)result )
      {
        result = (*(int (__thiscall **)(int *, int))(*this + 24))(this, a2);
        *(_BYTE *)(a2 + 4) = 1;
      }
    }
  }
  return result;
}


//======================================================================
// sub_45A530
// entry 0045a530  size 164  status ok
//======================================================================

int __thiscall sub_45A530(int *this, int a2)
{
  int result; // eax
  int v3; // [esp-8h] [ebp-10h]
  int v4; // [esp-4h] [ebp-Ch]

  result = *(this + 696);
  if ( result == *(_DWORD *)(dword_790738 + 260) )
  {
    sub_5F4F50(a2);
    result = (unsigned __int8)sub_5F56A0(a2);
    if ( (_BYTE)result )
    {
      v4 = *(this + 697);
      v3 = *(this + 696);
      _RTDynamicCast(*(this + 94), 0, &CasinoBet `RTTI Type Descriptor', &PaiGowBet `RTTI Type Descriptor', 0);
      result = sub_4627B0(v3, v4);
      if ( (_BYTE)result )
      {
        result = (*(int (__thiscall **)(int *, int))(*this + 24))(this, a2);
        *(_BYTE *)(a2 + 4) = 1;
      }
    }
  }
  return result;
}


//======================================================================
// sub_45A5E0
// entry 0045a5e0  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_45A5E0(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &PaiGowDealScript::`vftable';
  *(this + 36) = sub_637810(4) < 2;
  return this;
}


//======================================================================
// sub_45A680
// entry 0045a680  size 89  status ok
//======================================================================

bool __thiscall sub_45A680(_BYTE *this)
{
  return (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 && !*(this + 36) && !*(_BYTE *)(dword_790738 + 278);
}


//======================================================================
// sub_45A6E0
// entry 0045a6e0  size 904  status ok
//======================================================================

int __thiscall sub_45A6E0(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  int v4; // [esp+14h] [ebp-30h]
  int v5; // [esp+18h] [ebp-2Ch]
  int i; // [esp+34h] [ebp-10h]
  int j; // [esp+34h] [ebp-10h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = sub_460F00(dword_790738);
      if ( *(this + 8) == -1 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( sub_45A680(this) && *(_DWORD *)(dword_790738 + 264) == *(this + 8) )
          result = sub_459E30((int)this);
        else
          result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( (unsigned __int8)sub_637630(dword_162EE84) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 72) + 116))(*(_DWORD *)(dword_790740 + 72));
        if ( operator new(0x20u) )
          v5 = sub_6010A0(this);
        else
          v5 = 0;
        sub_5F5D50(v5);
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   101008,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
      }
      else
      {
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 3);
      }
      break;
    case 2:
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
      if ( sub_45A680(this) )
      {
        if ( operator new(0x24u) )
          v4 = sub_45AA80(*(this + 8), this);
        else
          v4 = 0;
        result = sub_5FC420(v4);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 72) + 112))(*(_DWORD *)(dword_790740 + 72));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 72) + 176))(
          *(_DWORD *)(dword_790740 + 72),
          0);
        for ( i = 0; i < 7; ++i )
        {
          v3 = sub_6436C0(*(_DWORD *)(dword_790738 + 88));
          sub_460500(*(this + 8), v3);
        }
        sub_4587E0((_DWORD **)dword_790740);
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 20);
      }
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      for ( j = 0; j < 5; ++j )
        sub_641ED0(dword_790738 + 14 * j + 92, 7);
      sub_45FD30(dword_790738);
      result = sub_459FC0((int)this);
      break;
    case 4:
      *(_BYTE *)(dword_790738 + 278) = 0;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 64) + 112))(*(_DWORD *)(dword_790740 + 64));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 68) + 112))(*(_DWORD *)(dword_790740 + 68));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
        *((_DWORD *)dword_790734 + 1),
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
// sub_45AA80
// entry 0045aa80  size 208  status ok
//======================================================================

_DWORD *__thiscall sub_45AA80(_DWORD *this, int a2, int a3)
{
  sub_5FC0D0(a3);
  *this = &PaiGowDealToScript::`vftable';
  *(this + 8) = a2;
  sub_5EAF00(dword_71748C[a2]);
  sub_5EAF00(dword_717478[a2]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 68) + 176))(*(_DWORD *)(dword_790740 + 68), 0);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(dword_790740 + 64) + 176))(0);
  return this;
}


//======================================================================
// sub_45AB50
// entry 0045ab50  size 827  status ok
//======================================================================

int __thiscall sub_45AB50(_DWORD *this)
{
  int result; // eax
  __int16 v2; // ax
  __int16 v3; // ax
  _WORD v5[6]; // [esp+8h] [ebp-1Ch]
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h]
  __int16 v8; // [esp+20h] [ebp-4h]

  v5[0] = 36;
  v5[1] = 21;
  v5[2] = 24;
  v5[3] = 19;
  v5[4] = 18;
  v8 = 3;
  v6 = *(_DWORD *)(dword_790740 + 68);
  v7 = *(_DWORD *)(dword_790740 + 64);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_790730 <= word_790728 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, word_790730);
      if ( word_790730 <= word_790724 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_790730);
      if ( word_790730 == 9 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 72) + 112))(*(_DWORD *)(dword_790740 + 72));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 72) + 176))(
          *(_DWORD *)(dword_790740 + 72),
          0);
      }
      else if ( (!*(this + 8) || *(this + 8) == 2) && word_790730 == 17 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 51);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 50);
      }
      else if ( word_790730 > (__int16)v5[*(this + 8)] && word_79072C < 7 )
      {
        if ( word_79072C != 6 )
        {
          v3 = sub_6436C0(*(_DWORD *)(dword_790738 + 88));
          sub_460500(*(this + 8), v3);
        }
        v2 = sub_6436C0(*(_DWORD *)(dword_790738 + 88));
        sub_460500(*(this + 8), v2);
        sub_4587E0((_DWORD **)dword_790740);
        word_79072C += 2;
        v8 = 2;
      }
      if ( word_790730 >= word_790728 && word_790730 >= word_790724 )
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, v8);
    }
    else if ( result == 2 )
    {
      if ( *(this + 4) )
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
      return sub_5FC420(0);
    }
  }
  else
  {
    word_790730 = 0;
    word_79072C = 0;
    word_790728 = sub_5EB240(v6);
    word_790724 = sub_5EB240(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 50);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 51);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, v8);
  }
  return result;
}


//======================================================================
// sub_45AE90
// entry 0045ae90  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_45AE90(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &PaiGowDoneDialog::`vftable';
  return this;
}


//======================================================================
// sub_45AEE0
// entry 0045aee0  size 177  status ok
//======================================================================

int __thiscall sub_45AEE0(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  sub_5F83D0(1045, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 16);
  v1 = sub_630F40("SID_PAIGOWPOKER_FINISHEDWITHHAND");
  sub_5FA5B0(0, -1, v1, 31, 130, 17, 7, 1, 1, 5, -1);
  v2 = sub_630F40("SID_GENERIC_CONTINUE");
  sub_5F9DE0(0, 0, 3200230, 4, 25, 1, v2, 72, 75, 74, -1, 13);
  v3 = sub_630F40("SID_GENERIC_DONTASKAGAIN");
  return sub_5F9EF0(0, 1, 3200201, 5, 55, 1, v3, 31, 69, 66, -1, 20, 0);
}


//======================================================================
// sub_45AFA0
// entry 0045afa0  size 244  status ok
//======================================================================

int __stdcall sub_45AFA0(int a1)
{
  int result; // eax
  const CHAR *v2; // eax
  int v3; // eax
  char v4; // al
  const CHAR *v5; // [esp-8h] [ebp-10h]
  int v6; // [esp+4h] [ebp-4h]

  result = dword_790738;
  v6 = *(_DWORD *)(dword_790738 + 260);
  if ( !a1 )
  {
    if ( (unsigned __int8)sub_461320(v6) )
    {
      result = (unsigned __int8)sub_45C0A0(v6);
      if ( (_BYTE)result )
      {
        v3 = sub_5FB350(1);
        v4 = sub_600230(v3);
        sub_45F920(v4 == 0);
        sub_459780((_DWORD *)dword_790740);
        return sub_45B300(dword_79073C);
      }
    }
    else
    {
      v5 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_ILLEGALLOWHAND");
      v2 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_2CANTBEAT5");
      sub_62FF10(v2, v5, 0);
      *(_WORD *)(dword_790738 + 2 * v6 + 162) = 0;
      *(_WORD *)(dword_790738 + 2 * v6 + 172) = 0;
      sub_459780((_DWORD *)dword_790740);
      return sub_45B300(dword_79073C);
    }
  }
  return result;
}


//======================================================================
// sub_45B0A0
// entry 0045b0a0  size 70  status ok
//======================================================================

int __thiscall sub_45B0A0(void *this, char a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_5FB350(1);
  if ( a2 )
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)v4 + 244))(v4, this);
  else
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)v4 + 248))(v4, this);
}


//======================================================================
// sub_45B0F0
// entry 0045b0f0  size 34  status ok
//======================================================================

int sub_45B0F0()
{
  int v1; // [esp+4h] [ebp-4h]

  v1 = sub_5FB350(1);
  return sub_600230(v1);
}


//======================================================================
// sub_45B150
// entry 0045b150  size 16  status ok
//======================================================================

int sub_45B150()
{
  return 500;
}


//======================================================================
// sub_45B260
// entry 0045b260  size 146  status ok
//======================================================================

int __thiscall sub_45B260(_BYTE *this, int a2)
{
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)dword_790734 + 1) + 8))(
             *((_DWORD *)dword_790734 + 1),
             500,
             a2);
  sub_45FFE0(dword_790738, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
           *((_DWORD *)dword_790734 + 1),
           1,
           0);
}


//======================================================================
// sub_45B300
// entry 0045b300  size 1178  status ok
//======================================================================

int __thiscall sub_45B300(_BYTE *this)
{
  int result; // eax
  __int64 v2; // [esp-8h] [ebp-74h]
  int v5; // [esp+1Ch] [ebp-50h]
  CImageDisplay *v6; // [esp+28h] [ebp-44h]
  CImageDisplay *v7; // [esp+38h] [ebp-34h]
  int v8; // [esp+4Ch] [ebp-20h]
  int v9; // [esp+50h] [ebp-1Ch]
  bool v10; // [esp+67h] [ebp-5h]
  int v11; // [esp+68h] [ebp-4h]
  int v12; // [esp+68h] [ebp-4h]
  int v13; // [esp+68h] [ebp-4h]
  int v14; // [esp+68h] [ebp-4h]

  sub_4587E0((_DWORD **)dword_790740);
  if ( *(_DWORD *)(dword_790738 + 292) == -1 )
  {
    if ( *(_DWORD *)(dword_790738 + 268) == -1 )
      sub_45B7A0(this);
    if ( *(this + 6) )
    {
      v11 = sub_460840(dword_790738);
      if ( *((_BYTE *)dword_162EE84 + 37) && v11 != -1 )
      {
        v7 = (CImageDisplay *)sub_5DCB00(v11);
        if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
        {
          *(_BYTE *)(sub_5DCB00(v11) + 1185) = 1;
          v11 = sub_460840(dword_790738);
        }
      }
      if ( v11 == -1 )
      {
        if ( !*(this + 10) )
        {
          sub_460D50(dword_790738);
          *(this + 10) = 1;
        }
        if ( (unsigned __int8)sub_460EA0(dword_790738) )
        {
          sub_5F2870(dword_162EE80);
          sub_460420(-1, 0);
          return sub_45BDF0();
        }
        else
        {
          v12 = sub_461050(dword_790738);
          if ( v12 == -1 )
          {
            v13 = sub_461450(dword_790738);
            if ( v13 == -1 )
            {
              if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) != 1
                || (v14 = sub_4618E0(dword_790738), v14 == -1) )
              {
                if ( *(this + 7) || !(unsigned __int8)sub_5DA7B0(dword_790734) )
                {
                  sub_460420(-1, 0);
                  *(_DWORD *)(dword_790738 + 268) = -1;
                  if ( *((_BYTE *)dword_162EE84 + 37) )
                    return sub_45B260(this, 200);
                  else
                    return sub_4597E0((void *)dword_790740);
                }
                else
                {
                  *(this + 7) = 1;
                  v5 = dword_790738;
                  *(_DWORD *)(dword_790738 + 292) = 1;
                  *(_DWORD *)(v5 + 296) = -1;
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
                           *((_DWORD *)dword_790734 + 1),
                           1,
                           0);
                }
              }
              else
              {
                sub_460420(v14, 0);
                sub_45C610(v14, 1);
                return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
                         *((_DWORD *)dword_790734 + 1),
                         1,
                         0);
              }
            }
            else
            {
              if ( *(_DWORD *)(dword_790738 + 268) != 4 && !*(this + 8) )
              {
                *(this + 8) = 1;
                v2 = sub_64C8A0(0, 0);
                sub_5DCB00(*(_DWORD *)(dword_790738 + 268));
                sub_5D6050(v2, HIDWORD(v2));
              }
              if ( v13 == 4 )
                sub_460420(-1, 0);
              else
                sub_460420(v13, 0);
              sub_45C210(v13);
              result = Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734);
              if ( result == 1 )
              {
                result = sub_4619F0(v13);
                if ( (_BYTE)result )
                  return sub_45C610(v13, 0);
              }
            }
          }
          else
          {
            *(_BYTE *)(dword_790738 + 278) = 0;
            if ( v12 == 4 )
              sub_460420(-1, 0);
            else
              sub_460420(v12, 0);
            return sub_45BE80(v12);
          }
        }
      }
      else
      {
        if ( v11 == 4 )
        {
          sub_460420(-1, 0);
        }
        else
        {
          v6 = (CImageDisplay *)sub_5DCB00(v11);
          if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
          {
            sub_460420(v11, 1);
          }
          else
          {
            sub_460420(v11, 0);
          }
        }
        return sub_45B9C0(v11);
      }
    }
    else
    {
      return sub_45B960(this);
    }
  }
  else
  {
    v10 = *(_DWORD *)(dword_790738 + 292) == 5;
    result = sub_45C680(this);
    if ( v10 )
    {
      v9 = *(_DWORD *)(dword_790738 + 260);
      v8 = dword_790738;
      *(_DWORD *)(dword_790738 + 292) = 2;
      result = v8;
      *(_DWORD *)(v8 + 296) = v9;
    }
  }
  return result;
}


//======================================================================
// sub_45B7A0
// entry 0045b7a0  size 439  status ok
//======================================================================

int __thiscall sub_45B7A0(void *this)
{
  const char *v1; // eax
  const CHAR *v2; // eax
  int v3; // eax
  LONG *p_top; // [esp-4h] [ebp-134h]
  CImageDisplay *v6; // [esp+Ch] [ebp-124h]
  _DWORD v7[5]; // [esp+14h] [ebp-11Ch]
  char Buffer[256]; // [esp+28h] [ebp-108h] BYREF
  int v9; // [esp+12Ch] [ebp-4h]

  v7[0] = 2;
  v7[1] = 1;
  v7[2] = 3;
  v7[3] = 0;
  v7[4] = 4;
  sub_460EE0(dword_790738, this);
  *(_DWORD *)(dword_790738 + 268) = 4;
  v9 = sub_4607E0(dword_790738);
  if ( v9 != -1 && v9 != 4 )
  {
    if ( (unsigned __int8)sub_460640(v9) )
    {
      v6 = (CImageDisplay *)sub_5DCB00(v9);
      p_top = &CImageDisplay::GetDisplayFormat(v6)->rcSource.top;
      v1 = (const char *)sub_630F40("SID_PAIGOWPOKER_ASKTOBEBANKER_FORMAT");
      sprintf(Buffer, v1, p_top);
      v2 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_PLAYBANKER");
      if ( sub_62FF10(Buffer, v2, 4u) == 6 )
        *(_DWORD *)(dword_790738 + 268) = v9;
    }
  }
  if ( !(unsigned __int8)sub_45F990(dword_790738) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 80) + 112))(*(_DWORD *)(dword_790740 + 80));
  v3 = sub_460700(dword_790738);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790740 + 80) + 176))(
    *(_DWORD *)(dword_790740 + 80),
    v7[v3]);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790740 + 80) + 116))(*(_DWORD *)(dword_790740 + 80));
}


//======================================================================
// sub_45B960
// entry 0045b960  size 83  status ok
//======================================================================

int __thiscall sub_45B960(_BYTE *this)
{
  int v2; // [esp+4h] [ebp-4h]

  *(this + 6) = 1;
  v2 = dword_790738;
  *(_DWORD *)(dword_790738 + 292) = 3;
  *(_DWORD *)(v2 + 296) = 4;
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
           *((_DWORD *)dword_790734 + 1),
           1,
           0);
}


//======================================================================
// sub_45B9C0
// entry 0045b9c0  size 1061  status ok
//======================================================================

int __thiscall sub_45B9C0(_BYTE *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  CImageDisplay *v14; // [esp+14h] [ebp-44h]
  int v15; // [esp+4Ch] [ebp-Ch]
  __int64 v16; // [esp+50h] [ebp-8h] BYREF

  if ( a2 == 4 )
  {
    if ( *(_DWORD *)(dword_790738 + 268) == 4 || (v15 = *(_DWORD *)(dword_790738 + 300)) == 0 )
    {
      v2 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
      v16 = sub_64C8A0(v2, 0);
    }
    else
    {
      v16 = sub_64C8A0(v15, 0);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(dword_790738 + 4) + 184))(
      *(_DWORD *)(dword_790738 + 4),
      v16,
      HIDWORD(v16),
      4,
      0);
    *(_BYTE *)(dword_790738 + 276) = 1;
    sub_57AE30(dword_793578);
    return sub_45B300(this);
  }
  else
  {
    v14 = (CImageDisplay *)sub_5DCB00(a2);
    if ( CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v14)->rcSource.left == 3 )
    {
      if ( (unsigned __int8)sub_5DF700(-1) )
        sub_57AB80(11, &unk_7174E8);
      else
        sub_57AE30(dword_793578);
      v4 = sub_5DCB00(a2);
      if ( (unsigned __int8)sub_5D5840(v4) )
      {
        result = Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734);
        if ( result == 1 )
          return sub_4597C0();
      }
      else if ( (unsigned __int8)sub_5DA7B0(dword_790734) )
      {
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
        return sub_45B300(this);
      }
      else
      {
        result = sub_460960(a2);
        if ( (_BYTE)result )
        {
          v5 = sub_5DCB00(a2);
          return sub_5DBB70(v5);
        }
      }
    }
    else if ( *(this + 4) )
    {
      *(this + 4) = 0;
      sub_57AE30(dword_793578);
      v7 = sub_5DCB00(a2);
      if ( (unsigned __int8)sub_5D5840(v7) )
      {
        v8 = sub_44E7F0(a2);
        v16 = sub_64C8A0(v8, 0);
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_790738 + 4) + 196))(
          *(_DWORD *)(dword_790738 + 4),
          &v16,
          0,
          1);
        *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
        if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1
          && (int)sub_62FBF0(100) > 40 )
        {
          v9 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
          v16 = sub_64C8A0(v9, 0);
          v10 = sub_5DCB00(a2);
          v11 = sub_5D5A50(v10);
          if ( v11 >= 2 * (int)v16 )
          {
            (*(void (__thiscall **)(_DWORD, __int64 *, int, int))(**(_DWORD **)(dword_790738 + 4) + 196))(
              *(_DWORD *)(dword_790738 + 4),
              &v16,
              1,
              1);
            *(_BYTE *)(a2 + dword_790738 + 244) = 1;
            if ( (int)v16 >= 5 )
              *(_BYTE *)(a2 + dword_790738 + 249) = 1;
          }
        }
      }
      else if ( (unsigned __int8)sub_5DA7B0(dword_790734) )
      {
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      }
      else
      {
        sub_5D9570(a2);
      }
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
    else
    {
      *(this + 4) = 1;
      v6 = sub_637810(2);
      return sub_5DA360(v6);
    }
  }
  return result;
}


//======================================================================
// sub_45BDF0
// entry 0045bdf0  size 132  status ok
//======================================================================

int __cdecl sub_45BDF0()
{
  _BYTE *v1; // [esp+4h] [ebp-1Ch]
  _BYTE *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x28u);
  if ( v2 )
    v1 = sub_45A5E0(v2);
  else
    v1 = 0;
  return sub_5FC420(v1);
}


//======================================================================
// sub_45BE80
// entry 0045be80  size 544  status ok
//======================================================================

int __thiscall sub_45BE80(_BYTE *this, int a2)
{
  int v3; // eax
  int v6; // [esp+8h] [ebp-18h]
  CImageDisplay *v7; // [esp+14h] [ebp-Ch]

  v7 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
  {
    *(_BYTE *)(a2 + dword_790738 + 224) = 1;
    sub_4587E0((_DWORD **)dword_790740);
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(11, &unk_718CF8);
      return sub_461F80(a2);
    }
    else
    {
      return sub_57AE30(dword_793578);
    }
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 5) || a2 == 4 )
    {
      *(this + 5) = 0;
      if ( a2 == 4 )
      {
        *(_BYTE *)(dword_790738 + 228) = 1;
        sub_4587E0((_DWORD **)dword_790740);
      }
      sub_452A40(
        (_DWORD *)dword_790744,
        a2,
        (__int16 *)(dword_790738 + 2 * a2 + 162),
        (__int16 *)(dword_790738 + 2 * a2 + 172));
      if ( *(unsigned __int16 *)(dword_790738 + 2 * a2 + 162) == *(unsigned __int16 *)(dword_790738 + 2 * a2 + 172) )
        sub_5E9F20((char)"paiGowState->low1[p] != paiGowState->low2[p]", "..\\Casino\\paigowgame.cpp", 416);
      if ( !(unsigned __int8)sub_461320(a2) )
        sub_5E9F20((char)"paiGowState->IsLowHandValid(p)", "..\\Casino\\paigowgame.cpp", 417);
      sub_45C0A0(a2);
      v6 = dword_790738;
      *(_DWORD *)(dword_790738 + 292) = a2 != 4 ? 0 : 4;
      *(_DWORD *)(v6 + 296) = a2;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
               *((_DWORD *)dword_790734 + 1),
               1,
               0);
    }
    else
    {
      *(this + 5) = 1;
      v3 = sub_637810(2);
      return sub_5DA360(v3);
    }
  }
}


//======================================================================
// sub_45C0A0
// entry 0045c0a0  size 365  status ok
//======================================================================

char __thiscall sub_45C0A0(_BYTE *this, int a2)
{
  char v4; // [esp+4h] [ebp-28h]
  CImageDisplay *v6; // [esp+10h] [ebp-1Ch]
  CImageDisplay *v7; // [esp+20h] [ebp-Ch]

  if ( !(unsigned __int8)sub_5DF7B0(-1)
    || *(this + 9)
    || ((v7 = (CImageDisplay *)sub_5DCB00(a2), CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2)
     || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3
      ? (v4 = 1)
      : (v4 = 0),
        !v4 || (unsigned __int8)sub_4613B0(a2)) )
  {
    *(this + 9) = 0;
    *(_BYTE *)(a2 + dword_790738 + 229) = 1;
    sub_45FDE0(a2);
    *(_DWORD *)(dword_790738 + 280) = -1;
    *(_DWORD *)(dword_790738 + 284) = -1;
    *(_DWORD *)(dword_790738 + 288) = -1;
    v6 = (CImageDisplay *)sub_5DCB00(a2);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      *(_BYTE *)(a2 + dword_790738 + 224) = 0;
    }
    return 1;
  }
  else
  {
    *(this + 9) = 1;
    sub_57C140(dword_793578);
    return 0;
  }
}


//======================================================================
// sub_45C210
// entry 0045c210  size 1009  status ok
//======================================================================

int __stdcall sub_45C210(int a1)
{
  char v2; // [esp+0h] [ebp-18Ch]
  int v4; // [esp+8h] [ebp-184h]
  bool v5; // [esp+13h] [ebp-179h]
  bool v6; // [esp+1Bh] [ebp-171h]
  CImageDisplay *v7; // [esp+44h] [ebp-148h]
  char v8[8]; // [esp+64h] [ebp-128h] BYREF
  char v9[8]; // [esp+6Ch] [ebp-120h] BYREF
  char v10[8]; // [esp+74h] [ebp-118h] BYREF
  char Buffer[260]; // [esp+7Ch] [ebp-110h] BYREF
  char v12[8]; // [esp+180h] [ebp-Ch] BYREF

  sprintf(Buffer, "Resolving player bet for player %d\n", a1);
  sub_62FDE0(Buffer, v2);
  if ( *(_DWORD *)(dword_790738 + 268) == 4 )
  {
    v7 = (CImageDisplay *)sub_5DCB00(a1);
    if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
    {
      *(_DWORD *)(dword_790738 + 300) = *(_DWORD *)(*(_DWORD *)(dword_790738 + 4) + 32 * a1 + 72);
    }
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(dword_790738 + 268) + dword_790738 + 224) = 1;
  }
  *(_BYTE *)(a1 + dword_790738 + 224) = 1;
  sub_4587E0((_DWORD **)dword_790740);
  sub_452FD0(
    *(_WORD *)(dword_790738 + 2 * *(_DWORD *)(dword_790738 + 268) + 162),
    *(_WORD *)(dword_790738 + 2 * *(_DWORD *)(dword_790738 + 268) + 172),
    v8);
  sub_4530B0(
    (_WORD *)dword_790744,
    *(_DWORD *)(dword_790738 + 268),
    *(_WORD *)(dword_790738 + 2 * *(_DWORD *)(dword_790738 + 268) + 162),
    *(_WORD *)(dword_790738 + 2 * *(_DWORD *)(dword_790738 + 268) + 172),
    v12);
  sub_452FD0(*(_WORD *)(dword_790738 + 2 * a1 + 162), *(_WORD *)(dword_790738 + 2 * a1 + 172), v9);
  sub_4530B0(
    (_WORD *)dword_790744,
    a1,
    *(_WORD *)(dword_790738 + 2 * a1 + 162),
    *(_WORD *)(dword_790738 + 2 * a1 + 172),
    v10);
  v6 = !sub_4534B0(v8, v9);
  *(_BYTE *)(a1 + dword_790738 + 234) = v6;
  v5 = sub_453550(v12, v10) == 0;
  *(_BYTE *)(a1 + dword_790738 + 239) = v5;
  sub_461600(a1);
  if ( a1 == 4 )
    *(_BYTE *)(dword_790738 + 277) = 1;
  else
    *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  if ( a1 != 4 )
  {
    v4 = dword_790738;
    *(_DWORD *)(dword_790738 + 292) = 5;
    *(_DWORD *)(v4 + 296) = 4;
  }
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_790734 + 1) + 8))(
           *((_DWORD *)dword_790734 + 1),
           1,
           0);
}


//======================================================================
// sub_45C610
// entry 0045c610  size 100  status ok
//======================================================================

int __fastcall sub_45C610(char a1, int a2, int a3, int a4)
{
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  sprintf(Buffer, "Resolving bonus bet for player %d\n", a3);
  sub_62FDE0(Buffer, a1);
  return sub_461A10(a3, a4);
}


//======================================================================
// sub_45C680
// entry 0045c680  size 2852  status ok
//======================================================================

int sub_45C680()
{
  int v0; // eax
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // eax
  int v9; // [esp+4h] [ebp-12Ch]
  int v11; // [esp+Ch] [ebp-124h]
  bool v12; // [esp+10h] [ebp-120h]
  bool v14; // [esp+18h] [ebp-118h]
  bool v17; // [esp+24h] [ebp-10Ch]
  bool v18; // [esp+28h] [ebp-108h]
  bool v19; // [esp+2Ch] [ebp-104h]
  bool v21; // [esp+3Bh] [ebp-F5h]
  bool v22; // [esp+3Ch] [ebp-F4h]
  CImageDisplay *v23; // [esp+44h] [ebp-ECh]
  int v24; // [esp+50h] [ebp-E0h]
  CImageDisplay *v25; // [esp+5Ch] [ebp-D4h]
  CImageDisplay *v26; // [esp+68h] [ebp-C8h]
  CImageDisplay *v27; // [esp+74h] [ebp-BCh]
  CImageDisplay *v28; // [esp+80h] [ebp-B0h]
  CImageDisplay *v29; // [esp+8Ch] [ebp-A4h]
  CImageDisplay *v30; // [esp+98h] [ebp-98h]
  CImageDisplay *v31; // [esp+A4h] [ebp-8Ch]
  CImageDisplay *v32; // [esp+B0h] [ebp-80h]
  CImageDisplay *v33; // [esp+BCh] [ebp-74h]
  CImageDisplay *v34; // [esp+CCh] [ebp-64h]
  int v35; // [esp+D8h] [ebp-58h]
  int v36; // [esp+E0h] [ebp-50h]
  int v37; // [esp+E4h] [ebp-4Ch]
  int v38; // [esp+E8h] [ebp-48h]
  char v39; // [esp+EFh] [ebp-41h]
  _DWORD v40[4]; // [esp+F0h] [ebp-40h] BYREF
  double v41; // [esp+100h] [ebp-30h]
  double v42; // [esp+108h] [ebp-28h]
  int v43; // [esp+110h] [ebp-20h]
  int v44; // [esp+114h] [ebp-1Ch]
  double v45; // [esp+118h] [ebp-18h]
  double v46; // [esp+120h] [ebp-10h]
  bool v47; // [esp+12Bh] [ebp-5h]
  unsigned int v48; // [esp+12Ch] [ebp-4h]

  v43 = -1;
  v44 = -1;
  v35 = -1;
  v45 = 0.0;
  v46 = 1.0;
  v48 = *(_DWORD *)(dword_790738 + 260);
  if ( v48 >= 4 )
  {
    v21 = 0;
  }
  else
  {
    v34 = (CImageDisplay *)sub_5DCB00(v48);
    v22 = CImageDisplay::GetDisplayFormat(v34)->rcSource.left == 2
       || CImageDisplay::GetDisplayFormat(v34)->rcSource.left == 3;
    v21 = v22;
  }
  v47 = v21;
  v39 = 1;
  v37 = *(_DWORD *)(dword_790738 + 296);
  switch ( *(_DWORD *)(dword_790738 + 292) )
  {
    case 0:
      v39 = 0;
      v33 = (CImageDisplay *)sub_5DCB00(v48);
      if ( CImageDisplay::GetDisplayFormat(v33)->rcSource.left != 2
        && CImageDisplay::GetDisplayFormat(v33)->rcSource.left != 3 )
      {
        if ( sub_44EAF0(v48) )
        {
          v44 = 2035;
          v35 = 1028;
          v45 = 0.25;
          v46 = 0.75;
        }
        if ( sub_44EBC0(v48) )
        {
          v44 = 2036;
          v35 = 1026;
          v45 = 0.25;
          v46 = 0.75;
        }
      }
      break;
    case 1:
      if ( (unsigned __int8)sub_5DB190(dword_790734) )
      {
        if ( sub_5DAC90(dword_790734) != -1 )
        {
          v6 = sub_5DAC90(dword_790734);
          v29 = (CImageDisplay *)sub_5DCB00(v6);
          if ( CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 3 )
          {
            v44 = 1042;
          }
          else
          {
            v37 = sub_5DAC90(dword_790734);
            v44 = 1021;
          }
          v46 = 1.0;
        }
      }
      else if ( *(int *)(dword_7947E0 + 20216) > 2 )
      {
        v36 = sub_5DADA0(dword_790734);
        v38 = sub_5DAC90(dword_790734);
        if ( v38 == -1 || sub_4605C0(v38) != 1 )
        {
          if ( v36 != -1 && !sub_4605C0(v36) )
          {
            v26 = (CImageDisplay *)sub_5DCB00(v36);
            if ( CImageDisplay::GetDisplayFormat(v26)->rcSource.left != 2
              && CImageDisplay::GetDisplayFormat(v26)->rcSource.left != 3 )
            {
              v37 = v36;
            }
            v25 = (CImageDisplay *)sub_5DCB00(v36);
            v12 = CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 3;
            v44 = v12 ? 1036 : 1011;
            v46 = 0.5;
          }
        }
        else
        {
          v28 = (CImageDisplay *)sub_5DCB00(v38);
          if ( CImageDisplay::GetDisplayFormat(v28)->rcSource.left != 2
            && CImageDisplay::GetDisplayFormat(v28)->rcSource.left != 3 )
          {
            v37 = v38;
          }
          v27 = (CImageDisplay *)sub_5DCB00(v38);
          v14 = CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 3;
          v44 = v14 ? 1035 : 1010;
          v46 = 0.5;
        }
      }
      break;
    case 2:
      if ( v48 != 4 && v48 != -1 )
      {
        if ( !sub_44EAF0(v48) || sub_4605C0(v48) )
        {
          if ( sub_44EBC0(v48) && sub_4605C0(v48) == 1 )
          {
            v44 = v47 ? 2044 : 2040;
            v35 = v47 ? 1037 : 1012;
            v45 = 0.25;
            v46 = 0.75;
          }
          else if ( sub_4605C0(v48) == 1 )
          {
            v44 = v47 ? 1008 : 1020;
            v35 = v47 ? -1 : 1028;
            v45 = 0.5;
            v46 = 0.5;
          }
          else if ( !sub_4605C0(v48) )
          {
            if ( v47
              && (v0 = sub_5DCB00(v48),
                  v1 = sub_5D5A50(v0),
                  v1 > (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734))
              && (v2 = sub_5DCB00(v48),
                  v3 = sub_5D5A50(v2),
                  v3 < 10
                     * (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734)) )
            {
              v44 = 1040;
              v46 = 0.75;
            }
            else
            {
              v4 = sub_5DCB00(v48);
              if ( sub_5D5A50(v4) || (v5 = sub_5DCB00(v48), sub_5D5A70(v5)) )
              {
                v30 = (CImageDisplay *)sub_5DCB00(v48);
                v17 = CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 2
                   || CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 3;
                v44 = v17 ? 1000 : 1026;
                v46 = 0.5;
                v45 = 0.5;
              }
              else
              {
                if ( v47 )
                  v44 = 1038;
                else
                  v44 = 1013;
                v46 = 0.75;
              }
            }
          }
        }
        else
        {
          v32 = (CImageDisplay *)sub_5DCB00(v48);
          v19 = CImageDisplay::GetDisplayFormat(v32)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v32)->rcSource.left == 3;
          v44 = v19 ? 2041 : 2037;
          v31 = (CImageDisplay *)sub_5DCB00(v48);
          v18 = CImageDisplay::GetDisplayFormat(v31)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v31)->rcSource.left == 3;
          v35 = v18 ? 1039 : 1014;
          v45 = 0.25;
          v46 = 0.75;
        }
      }
      break;
    case 3:
      v43 = 52050;
      break;
    case 4:
      if ( *(_DWORD *)(dword_790738 + 268) == 4 )
      {
        if ( sub_44EAF0(4) )
          v43 = 52275;
        if ( sub_44EBC0(4) )
          v43 = 52300;
      }
      break;
    case 5:
      if ( *(_DWORD *)(dword_790738 + 268) == 4 )
      {
        v11 = sub_4605C0(v48);
        if ( v11 )
        {
          if ( v11 == 1 )
          {
            v43 = 52225;
          }
          else if ( v11 == 2 )
          {
            v43 = 52175;
          }
        }
        else
        {
          v43 = 52075;
        }
      }
      break;
    default:
      break;
  }
  v24 = dword_790738;
  *(_DWORD *)(dword_790738 + 292) = -1;
  *(_DWORD *)(v24 + 296) = -1;
  if ( v37 == 4 )
  {
    if ( v43 == -1 )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    return sub_5CD7C0(v43, *(_DWORD *)(dword_162EE80 + 4), 0);
  }
  else
  {
    if ( v44 == -1 || !sub_636730(dword_162EE84) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( v37 > -1 )
    {
      v23 = (CImageDisplay *)sub_5DCB00(v37);
      if ( CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 3 )
      {
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    if ( v37 == -1 )
      v9 = sub_636C50(dword_162EE84);
    else
      v9 = v37;
    v40[0] = v9;
    v40[1] = v44;
    v40[2] = v35;
    v41 = v45;
    v42 = v46;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
    v8 = sub_637810(2);
    return sub_639390(v40, *(_DWORD *)(dword_162EE80 + 4), v8, v39);
  }
}


//======================================================================
// sub_45D1F0
// entry 0045d1f0  size 149  status ok
//======================================================================

Concurrency::details::VirtualProcessor *__thiscall sub_45D1F0(Concurrency::details::VirtualProcessor *this)
{
  sub_5D7B60(this);
  *(_DWORD *)this = &PaiGowRoom::`vftable';
  sub_5F1AD0(2001);
  dword_790734 = this;
  dword_790738 = 0;
  dword_79073C = 0;
  dword_790740 = 0;
  dword_790744 = 0;
  return this;
}


//======================================================================
// sub_45D290
// entry 0045d290  size 324  status ok
//======================================================================

int __thiscall sub_45D290(_DWORD *this)
{
  *this = &PaiGowRoom::`vftable';
  dword_790734 = 0;
  if ( dword_790738 )
    (**(void (__thiscall ***)(int, int))dword_790738)(dword_790738, 1);
  dword_790738 = 0;
  if ( dword_79073C )
    (**(void (__thiscall ***)(int, int))dword_79073C)(dword_79073C, 1);
  dword_79073C = 0;
  if ( dword_790740 )
    (**(void (__thiscall ***)(int, int))dword_790740)(dword_790740, 1);
  dword_790740 = 0;
  if ( dword_790744 )
    (**(void (__thiscall ***)(int, int))dword_790744)(dword_790744, 1);
  dword_790744 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_45D3E0
// entry 0045d3e0  size 492  status ok
//======================================================================

int __thiscall sub_45D3E0(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-4Ch]
  ATL::CCRTHeap *v3; // [esp+8h] [ebp-48h]
  ATL::CCRTHeap *v4; // [esp+Ch] [ebp-44h]
  _AFX_OLE_STATE *v5; // [esp+10h] [ebp-40h]
  int v6; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+18h] [ebp-38h]
  _DWORD *v9; // [esp+1Ch] [ebp-34h]
  ATL::CCRTHeap *v10; // [esp+24h] [ebp-2Ch]
  ATL::CCRTHeap *v11; // [esp+2Ch] [ebp-24h]
  _AFX_OLE_STATE *v12; // [esp+34h] [ebp-1Ch]

  sub_5D8230();
  if ( operator new(0x130u) )
    v6 = sub_45F6A0();
  else
    v6 = 0;
  dword_790738 = v6;
  sub_45FE80();
  v12 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_79073C = (int)v5;
  v11 = (ATL::CCRTHeap *)operator new(0x9Cu);
  if ( v11 )
    v4 = sub_4576C0(v11);
  else
    v4 = 0;
  dword_790740 = (int)v4;
  sub_457C30((int)v4);
  v10 = (ATL::CCRTHeap *)operator new(0x350u);
  if ( v10 )
    v3 = sub_44E770(v10);
  else
    v3 = 0;
  dword_790744 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &PaiGowRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8, -1);
  return sub_45B260((_BYTE *)dword_79073C, 0);
}


//======================================================================
// sub_45D5D0
// entry 0045d5d0  size 196  status ok
//======================================================================

int __stdcall sub_45D5D0(int a1, int a2)
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
// sub_45D6A0
// entry 0045d6a0  size 49  status ok
//======================================================================

int __thiscall sub_45D6A0(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3204001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_45D6E0
// entry 0045d6e0  size 203  status ok
//======================================================================

int __stdcall sub_45D6E0(int a1, int a2)
{
  bool v3; // [esp+4h] [ebp-20h]
  CImageDisplay *v4; // [esp+10h] [ebp-14h]

  if ( sub_5DCB00(*(_DWORD *)(dword_790738 + 260)) )
  {
    v4 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_790738 + 260));
    v3 = CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3;
    if ( v3 && a1 == 3204002 )
      sub_460B40(*(_DWORD *)(dword_790738 + 260));
  }
  return sub_5DC7D0(a1, a2);
}


//======================================================================
// sub_45D7B0
// entry 0045d7b0  size 508  status ok
//======================================================================

int __thiscall sub_45D7B0(void *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-1Ch]
  CImageDisplay *v7; // [esp+14h] [ebp-10h]

  sub_5D7F40(a2);
  if ( dword_790738 )
    v5 = sub_460840(dword_790738);
  else
    v5 = -1;
  if ( *(_DWORD *)(a2 + 24) == 4
    && !*(_BYTE *)(a2 + 4)
    && v5 != -1
    && tolower(*(char *)(a2 + 20)) == 112
    && sub_5DCB00(v5) )
  {
    v7 = (CImageDisplay *)sub_5DCB00(v5);
    if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
    {
      sub_460B40(v5);
    }
  }
  if ( !*(_BYTE *)(a2 + 4)
    && *(_DWORD *)(a2 + 24) == 4
    && *(_BYTE *)(a2 + 20) == 32
    && dword_790738
    && *(_DWORD *)(dword_790738 + 260) != -1 )
  {
    sub_5CB5B0(*(_DWORD *)(dword_790738 + 4));
  }
  if ( !*(_BYTE *)(a2 + 4) && *(_DWORD *)(a2 + 24) == 4 && tolower(*(char *)(a2 + 20)) == 116 )
  {
    v2 = sub_5F2A60(5009, 0);
    if ( (unsigned __int8)sub_6026D0(v2) )
      sub_5DB240(this);
  }
  result = a2;
  if ( !*(_BYTE *)(a2 + 4) && *(_DWORD *)(a2 + 24) == 1 )
  {
    if ( dword_790740 )
    {
      if ( dword_790738 )
      {
        result = dword_790740;
        if ( *(_DWORD *)(dword_790740 + 64) )
        {
          if ( *(_DWORD *)(dword_790740 + 68) )
          {
            if ( (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_790740 + 64))
              || (result = sub_5F54A0(*(_DWORD *)(dword_790740 + 68)), (_BYTE)result) )
            {
              result = dword_790738;
              *(_BYTE *)(dword_790738 + 278) = 1;
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_45D9B0
// entry 0045d9b0  size 158  status ok
//======================================================================

int __stdcall sub_45D9B0(int a1, CImageDisplay *a2)
{
  const CHAR *v2; // eax
  const CHAR *v4; // [esp-8h] [ebp-1Ch]
  bool v5; // [esp+0h] [ebp-14h]

  v5 = CImageDisplay::GetDisplayFormat(a2)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(a2)->rcSource.left == 3;
  if ( !v5 || *((_DWORD *)a2 + 1) != *(_DWORD *)(dword_790738 + 268) )
    return sub_5D9F70(a1, a2);
  v4 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_PLAYERCHANGES");
  v2 = (const CHAR *)sub_630F40("SID_PAIGOWPOKER_CANTCHANGEBANKER");
  return sub_62FF10(v2, v4, 0);
}


//======================================================================
// sub_45DA50
// entry 0045da50  size 35  status ok
//======================================================================

char __thiscall sub_45DA50(void *this)
{
  if ( dword_790738 )
    return sub_4601B0(dword_790738, this);
  else
    return 1;
}


//======================================================================
// sub_45DA80
// entry 0045da80  size 243  status ok
//======================================================================

int __thiscall sub_45DA80(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 128) == 1 )
  {
    if ( (unsigned __int8)sub_4603A0(*(_DWORD *)(dword_790738 + 260)) )
    {
      *(_BYTE *)(sub_4603F0(dword_790738) + 1184) = 1;
      if ( *(int *)(*(_DWORD *)(dword_790738 + 4) + 32 * *(_DWORD *)(dword_790738 + 260) + 80) >= 5 )
        *(_BYTE *)(*(_DWORD *)(dword_790738 + 260) + dword_790738 + 249) = 1;
    }
    else
    {
      *(_BYTE *)(sub_4603F0(dword_790738) + 1185) = 1;
    }
    sub_5DB890(this);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4) + 8))(*(_DWORD *)(this + 4), 1, 0);
  }
  return result;
}


//======================================================================
// sub_45DB80
// entry 0045db80  size 55  status ok
//======================================================================

int __thiscall sub_45DB80(void *this, char a2)
{
  sub_45F8D0(a2 == 0);
  sub_5DB9B0(this);
  return sub_45B260((_BYTE *)dword_79073C, 0);
}


//======================================================================
// sub_45DBC0
// entry 0045dbc0  size 195  status ok
//======================================================================

char __stdcall sub_45DBC0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
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
// sub_45DC90
// entry 0045dc90  size 57  status ok
//======================================================================

int __stdcall sub_45DC90(int a1)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 453;
  v2[1] = 79;
  v2[2] = 528;
  v2[3] = 21;
  v2[4] = 0;
  return v2[a1];
}


//======================================================================
// sub_45DCD0
// entry 0045dcd0  size 57  status ok
//======================================================================

int __stdcall sub_45DCD0(int a1)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 294;
  v2[1] = 300;
  v2[2] = 154;
  v2[3] = 154;
  v2[4] = 0;
  return v2[a1];
}


//======================================================================
// sub_45DD10
// entry 0045dd10  size 35  status ok
//======================================================================

int sub_45DD10()
{
  if ( dword_790738 )
    return sub_4603F0(dword_790738);
  else
    return 0;
}


//======================================================================
// sub_45DD40
// entry 0045dd40  size 65  status ok
//======================================================================

int __thiscall sub_45DD40(_DWORD *this)
{
  if ( *(this + 32) != 1 )
    *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 604))(this) + 1184) = 1;
  return sub_45B300((_BYTE *)dword_79073C);
}


//======================================================================
// sub_45DD90
// entry 0045dd90  size 77  status ok
//======================================================================

int __thiscall sub_45DD90(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_DWORD *)(dword_790740 + 4 * i + 24) != a2 )
      sub_5CD330(*(_DWORD *)(dword_790740 + 4 * i + 24), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_45DDE0
// entry 0045dde0  size 315  status ok
//======================================================================

int __thiscall sub_45DDE0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // [esp-8h] [ebp-2Ch]
  int v4; // [esp-8h] [ebp-2Ch]
  int v5; // [esp-4h] [ebp-28h]
  int v6; // [esp-4h] [ebp-28h]
  int v8; // [esp+4h] [ebp-20h]
  int v9; // [esp+8h] [ebp-1Ch]
  unsigned __int8 v10; // [esp+Fh] [ebp-15h]

  v10 = *(_BYTE *)(sub_5DCB00(a2) + 1184);
  result = v10;
  if ( v10 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790738 + 4) + 180))(*(_DWORD *)(dword_790738 + 4)) )
    {
      v9 = *(_DWORD *)(dword_790738 + 4);
      v5 = *(_DWORD *)(v9 + 32 * a2 + 76);
      v3 = *(_DWORD *)(v9 + 32 * a2 + 72);
      sub_5DCB00(a2);
      sub_5D5CF0(v3, v5);
      if ( *(this + 32) == 1 )
      {
        v8 = *(_DWORD *)(dword_790738 + 4);
        v6 = *(_DWORD *)(v8 + 32 * a2 + 84);
        v4 = *(_DWORD *)(v8 + 32 * a2 + 80);
        sub_5DCB00(a2);
        sub_5D5CF0(v4, v6);
      }
    }
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790738 + 4) + 188))(
      *(_DWORD *)(dword_790738 + 4),
      a2,
      0);
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_790738 + 4) + 188))(
             *(_DWORD *)(dword_790738 + 4),
             a2,
             1);
  }
  return result;
}


//======================================================================
// sub_45DF20
// entry 0045df20  size 205  status ok
//======================================================================

int __stdcall sub_45DF20(int a1, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // ecx
  int *v5; // eax
  int v6; // edx
  int v7; // [esp+4h] [ebp-30h]
  int v8; // [esp+8h] [ebp-2Ch]
  unsigned __int8 v9; // [esp+Fh] [ebp-25h]
  _BYTE v10[8]; // [esp+14h] [ebp-20h] BYREF
  int v11; // [esp+1Ch] [ebp-18h]
  int v12; // [esp+20h] [ebp-14h]
  int v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+28h] [ebp-Ch]
  __int64 v15; // [esp+2Ch] [ebp-8h]

  v15 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v15;
  v9 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v9;
  if ( !v9 )
  {
    v8 = *(_DWORD *)(dword_790738 + 4);
    v3 = *(_DWORD *)(v8 + 32 * a1 + 84);
    v11 = *(_DWORD *)(v8 + 32 * a1 + 80);
    v12 = v3;
    v7 = *(_DWORD *)(dword_790738 + 4);
    v4 = *(_DWORD *)(v7 + 32 * a1 + 76);
    v13 = *(_DWORD *)(v7 + 32 * a1 + 72);
    v14 = v4;
    v5 = (int *)sub_64C5C0(v10, v11, v3);
    v6 = *v5;
    result = v5[1];
    *(_DWORD *)a2 = v6;
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}


//======================================================================
// sub_45DFF0
// entry 0045dff0  size 22  status ok
//======================================================================

int __thiscall sub_45DFF0(void *this)
{
  return sub_45F870(dword_790738, this);
}


//======================================================================
// sub_45E010
// entry 0045e010  size 36  status ok
//======================================================================

int __thiscall sub_45E010(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_45E040
// entry 0045e040  size 115  status ok
//======================================================================

int __stdcall sub_45E040(int a1)
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
  sub_45F830(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_45F830(-1);
  *(_DWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 20) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_45E0C0
// entry 0045e0c0  size 119  status ok
//======================================================================

int __stdcall sub_45E0C0(int a1)
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
  sub_45F830(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_45F830(a1);
  *(_DWORD *)(v5 + 8) = v3;
  *(_DWORD *)(v5 + 12) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_45E140
// entry 0045e140  size 227  status ok
//======================================================================

int __thiscall sub_45E140(void *this, int a2)
{
  int result; // eax
  __int16 v4; // [esp+4h] [ebp-Ch] BYREF
  __int16 v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = *(_DWORD *)(dword_790738 + 260);
  result = sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = (unsigned __int8)sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      sub_452A40((_DWORD *)dword_790744, v6, &v4, &v5);
      *(_DWORD *)(dword_790738 + 284) = sub_461360(v6, v4);
      *(_DWORD *)(dword_790738 + 288) = sub_461360(v6, v5);
      *(_DWORD *)(dword_790738 + 280) = v6;
      sub_458BE0((_DWORD *)dword_790740, v6, *(_DWORD *)(dword_790738 + 284));
      return sub_458BE0((_DWORD *)dword_790740, v6, *(_DWORD *)(dword_790738 + 288));
    }
  }
  return result;
}


//======================================================================
// sub_45E230
// entry 0045e230  size 18  status ok
//======================================================================

int __stdcall sub_45E230(int a1)
{
  return 1046;
}


//======================================================================
// sub_45E250
// entry 0045e250  size 70  status ok
//======================================================================

int __thiscall sub_45E250(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_4587E0((_DWORD **)dword_790740);
  sub_45FFE0(dword_790738, this);
  return sub_45B300((_BYTE *)dword_79073C);
}


//======================================================================
// sub_45E2A0
// entry 0045e2a0  size 1015  status ok
//======================================================================

int __thiscall sub_45E2A0(int this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  int result; // eax
  int v11; // [esp+4h] [ebp-6Ch]
  int v12; // [esp+8h] [ebp-68h]
  int v13; // [esp+Ch] [ebp-64h]
  int v14; // [esp+10h] [ebp-60h]
  int v15; // [esp+14h] [ebp-5Ch]
  int v16; // [esp+18h] [ebp-58h]
  int v17; // [esp+1Ch] [ebp-54h]
  int v18; // [esp+20h] [ebp-50h]
  int v19; // [esp+24h] [ebp-4Ch]
  int v20; // [esp+28h] [ebp-48h]
  int v21; // [esp+2Ch] [ebp-44h]
  int v22; // [esp+30h] [ebp-40h]
  int v23; // [esp+34h] [ebp-3Ch]
  _DWORD *v24; // [esp+38h] [ebp-38h]
  _DWORD *v26; // [esp+40h] [ebp-30h]
  _DWORD v27[5]; // [esp+48h] [ebp-28h]
  int i; // [esp+5Ch] [ebp-14h]
  _BYTE *v29; // [esp+60h] [ebp-10h]
  int v30; // [esp+6Ch] [ebp-4h]

  v27[0] = "SID_PAIGOWPOKER_OPTION_1";
  v27[1] = "SID_PAIGOWPOKER_OPTION_2";
  v27[2] = "SID_PAIGOWPOKER_OPTION_3";
  v27[3] = "SID_PAIGOWPOKER_OPTION_4";
  v27[4] = "SID_PAIGOWPOKER_OPTION_5";
  for ( i = 0; i < 5; ++i )
  {
    v5 = sub_630F40(v27[i]);
    v6 = sub_5F9EF0(0, i + 50, 3200201, 20, 20 * i + 85, 1, v5, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v6);
  }
  v7 = (char *)sub_630F40("SID_GENERIC_HELP");
  v8 = sub_5FA790(0, 10, v7, 72, 240, 104, 262, 260, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v8);
  v26 = operator new(0x1D0u);
  v30 = 0;
  if ( v26 )
  {
    sub_5EC5A0(v26);
    *v26 = &PaiGowSettingsHelpText::`vftable';
    v24 = v26;
  }
  else
  {
    v24 = 0;
  }
  v30 = -1;
  v9 = sub_5FA5B0(v24, 50, &Source, 35, 230, 96, 268, 272, 3, 5, -1);
  sub_5FF5A0(v9);
  v29 = (_BYTE *)sub_6375D0(-1);
  if ( (unsigned __int8)sub_45F940(dword_790738) )
  {
    v23 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 244))(v23);
  }
  if ( v29[2] )
  {
    v22 = sub_5FB350(51);
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 244))(v22);
  }
  if ( v29[1] )
  {
    v21 = sub_5FB350(52);
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 244))(v21);
  }
  if ( *(_DWORD *)(dword_790740 + 152) )
  {
    if ( (unsigned __int8)sub_45B0F0() )
    {
      v20 = sub_5FB350(52);
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 248))(v20);
    }
    else
    {
      v19 = sub_5FB350(52);
      (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 244))(v19);
    }
  }
  if ( (unsigned __int8)sub_45F990(dword_790738) )
  {
    v18 = sub_5FB350(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 244))(v18);
  }
  if ( (unsigned __int8)sub_5DA830(dword_790734)
    || (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734) == 100 )
  {
    v17 = sub_5FB350(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 208))(v17);
  }
  if ( *v29 )
  {
    v16 = sub_5FB350(54);
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 244))(v16);
  }
  result = sub_5DA830(dword_790734);
  if ( (_BYTE)result )
  {
    v15 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 208))(v15);
    v14 = sub_5FB350(53);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 208))(v14);
  }
  if ( *(_DWORD *)(this + 128) == 1 )
  {
    v13 = sub_5FB350(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 248))(v13);
    v12 = sub_5FB350(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 208))(v12);
    v11 = sub_5FB350(53);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 112))(v11);
  }
  *(_BYTE *)(this + 124) = 0;
  return result;
}


//======================================================================
// sub_45E6A0
// entry 0045e6a0  size 381  status ok
//======================================================================

int __thiscall sub_45E6A0(int this, int a2, int a3)
{
  int v3; // eax
  char v4; // al
  int v5; // eax
  char v6; // al
  int v7; // eax
  char v8; // al
  int v9; // eax
  char v10; // al
  int result; // eax
  int v12; // eax
  char v13; // al
  int v14; // eax
  char v15; // al

  v3 = sub_5FB350(51);
  v4 = sub_600230(v3);
  sub_45F920(v4);
  v5 = sub_5FB350(52);
  v6 = sub_600230(v5);
  sub_45F8D0(v6);
  if ( *(_DWORD *)(dword_790740 + 152) )
  {
    v7 = sub_5FB350(52);
    v8 = sub_600230(v7);
    sub_45B0A0(*(void **)(dword_790740 + 152), v8 == 0);
  }
  v9 = sub_5FB350(54);
  v10 = sub_600230(v9);
  sub_45F890(v10);
  if ( (unsigned __int8)sub_5DA830(dword_790734) )
    return sub_4587E0((_DWORD **)dword_790740);
  v12 = sub_5FB350(50);
  v13 = sub_600230(v12);
  sub_45F970(v13);
  if ( !(unsigned __int8)sub_5DA830(dword_790734)
    && (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734) != 100
    && *(_DWORD *)(this + 128) != 1 )
  {
    v14 = sub_5FB350(53);
    v15 = sub_600230(v14);
    sub_45F9F0(v15);
  }
  sub_637610(dword_162EE84);
  sub_4587E0((_DWORD **)dword_790740);
  result = *(unsigned __int8 *)(this + 124);
  if ( *(_BYTE *)(this + 124) )
  {
    *(_BYTE *)(this + 124) = 0;
    sub_45FFE0(dword_790738, this);
    return sub_45B300((_BYTE *)dword_79073C);
  }
  return result;
}


//======================================================================
// sub_45E820
// entry 0045e820  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_45E820(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v4 = 306;
  v5[0] = 246;
  v5[1] = 150;
  v5[2] = 246;
  v5[3] = 458;
  v5[4] = 76;
  v5[5] = 5;
  v5[6] = 74;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 4 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\paigowroom.cpp", 481);
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
// sub_45E900
// entry 0045e900  size 38  status ok
//======================================================================

int __thiscall sub_45E900(Concurrency::details::VirtualProcessor *this)
{
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(this) == 1 )
    return 10;
  else
    return 2;
}


//======================================================================
// sub_45E930
// entry 0045e930  size 464  status ok
//======================================================================

void __thiscall sub_45E930(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+4h] [ebp-34h]
  _DWORD v9[9]; // [esp+8h] [ebp-30h]
  int v10; // [esp+2Ch] [ebp-Ch]
  int i; // [esp+30h] [ebp-8h]
  int v12; // [esp+34h] [ebp-4h]

  v12 = -1;
  if ( dword_163068C )
  {
    v8 = sub_5FB350(50);
    v9[0] = 0;
    v9[1] = sub_5FB350(51);
    v9[2] = 1;
    v9[3] = sub_5FB350(52);
    v9[4] = 2;
    v9[5] = sub_5FB350(53);
    v9[6] = 3;
    v9[7] = sub_5FB350(54);
    v9[8] = 4;
    v10 = 5;
    for ( i = 0; i < v10; ++i )
    {
      if ( v9[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v9[2 * i - 1] + 132))(v9[2 * i - 1], a2) )
      {
        v12 = v9[2 * i];
        break;
      }
    }
    if ( v12 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else
    {
      if ( !v12 )
      {
        v2 = sub_630F40("SID_PAIGOWPOKER_ROLLOVER1");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
      }
      if ( v12 == 1 )
      {
        v3 = sub_630F40("SID_PAIGOWPOKER_ROLLOVER2");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
      if ( v12 == 2 )
      {
        v4 = sub_630F40("SID_PAIGOWPOKER_ROLLOVER3");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
      }
      if ( v12 == 3 )
      {
        v5 = sub_630F40("SID_PAIGOWPOKER_ROLLOVER4");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v5);
      }
      if ( v12 == 4 )
      {
        v6 = sub_630F40("SID_PAIGOWPOKER_ROLLOVER5");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v6);
      }
    }
  }
}


//======================================================================
// sub_45EB00
// entry 0045eb00  size 122  status ok
//======================================================================

int __thiscall sub_45EB00(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_45B300((_BYTE *)dword_79073C);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\paigowroom.cpp", 572);
  sub_45FFE0(dword_790738, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_45EBB0
// entry 0045ebb0  size 51  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_45EBB0(ATL::CCRTHeap *this, int a2)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &PaiGowRoomInterface::`vftable';
  *((_DWORD *)this + 1) = a2;
  return this;
}


//======================================================================
// sub_45EBF0
// entry 0045ebf0  size 141  status ok
//======================================================================

Concurrency::details::VirtualProcessor *__thiscall sub_45EBF0(_DWORD *this)
{
  Concurrency::details::VirtualProcessor *v2; // [esp+4h] [ebp-20h]
  Concurrency::details::VirtualProcessor *v4; // [esp+Ch] [ebp-18h]

  v4 = (Concurrency::details::VirtualProcessor *)operator new(0x84u);
  if ( v4 )
    v2 = sub_45D1F0(v4);
  else
    v2 = 0;
  unknown_libname_502(*(this + 1));
  return v2;
}


//======================================================================
// sub_45EC80
// entry 0045ec80  size 96  status ok
//======================================================================

char __thiscall sub_45EC80(_DWORD *this, char *Destination)
{
  const char *v3; // eax

  if ( !Destination )
    return 0;
  if ( *(this + 1) == 1 )
    v3 = (const char *)sub_630F40("SID_PAIGOWPOKER1");
  else
    v3 = (const char *)sub_630F40("SID_PAIGOWPOKER");
  strcpy(Destination, v3);
  return 1;
}


//======================================================================
// sub_45ECE0
// entry 0045ece0  size 72  status ok
//======================================================================

int __thiscall sub_45ECE0(_DWORD *this)
{
  if ( *(this + 1) == 1 )
    return sub_630F40("SID_PAIGOWPOKER1");
  else
    return sub_630F40("SID_PAIGOWPOKER");
}


//======================================================================
// sub_45ED30
// entry 0045ed30  size 39  status ok
//======================================================================

int __thiscall sub_45ED30(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = -1;
  if ( !*(this + 1) )
    return 3204000;
  return v2;
}


//======================================================================
// sub_45ED60
// entry 0045ed60  size 54  status ok
//======================================================================

const char *__thiscall sub_45ED60(_DWORD *this)
{
  if ( *(this + 1) == 1 )
    return "fortpg";
  else
    return "paigow";
}


//======================================================================
// sub_45EDB0
// entry 0045edb0  size 16  status ok
//======================================================================

char **sub_45EDB0()
{
  return off_71B00C;
}


//======================================================================
// sub_45EDC0
// entry 0045edc0  size 16  status ok
//======================================================================

char **sub_45EDC0()
{
  return &off_71B018;
}


//======================================================================
// sub_45EDF0
// entry 0045edf0  size 94  status ok
//======================================================================

char __stdcall sub_45EDF0(_DWORD *a1, int a2)
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
// sub_45EE50
// entry 0045ee50  size 16  status ok
//======================================================================

int sub_45EE50()
{
  return 24;
}


//======================================================================
// sub_45EE60
// entry 0045ee60  size 67  status ok
//======================================================================

char __stdcall sub_45EE60(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  a1[2] = 1;
  a1[3] = 1;
  a1[4] = 0;
  return 1;
}


//======================================================================
// sub_45EEB0
// entry 0045eeb0  size 120  status ok
//======================================================================

char __stdcall sub_45EEB0(_BYTE *a1)
{
  _BYTE *v2; // [esp+8h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[3];
  v2[4] = a1[4];
  return 1;
}


//======================================================================
// sub_45EF30
// entry 0045ef30  size 73  status ok
//======================================================================

char __stdcall sub_45EF30(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  return 1;
}


//======================================================================
// sub_45EF90
// entry 0045ef90  size 16  status ok
//======================================================================

int sub_45EF90()
{
  return 9;
}


//======================================================================
// sub_45EFA0
// entry 0045efa0  size 327  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__thiscall sub_45EFA0(
        _DWORD *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h]
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v10; // [esp+14h] [ebp-4h]

  v10 = (_DWORD *)sub_63AAE0(*(this + 1) != 0 ? 5 : 10);
  *a3 += v10[4] + v10[2];
  a3[1] += v10[3];
  *a4 += v10[2];
  a4[1] += v10[3];
  *a5 += v10[4];
  a5[1] += v10[5];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)(*(this + 1) != 0 ? 5 : 10) )
    {
      sub_5E0C40(a2, &v7, v9);
      *a3 += v9[0] + v7;
      a3[1] += v8;
      *a4 += v7;
      a4[1] += v8;
      *a5 += v9[0];
      result = (struct Concurrency::details::_TaskCollectionBase *)(v9[1] + a5[1]);
      a5[1] = result;
    }
  }
  return result;
}


//======================================================================
// sub_45F0F0
// entry 0045f0f0  size 482  status ok
//======================================================================

char __thiscall sub_45F0F0(_DWORD *this, int a2, int a3)
{
  int *v3; // eax
  int v4; // eax
  int *v5; // eax
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  __int64 v10; // [esp-24h] [ebp-ACh]
  __int64 v11; // [esp-18h] [ebp-A0h]
  char v13[8]; // [esp+4h] [ebp-84h] BYREF
  char v14[8]; // [esp+Ch] [ebp-7Ch] BYREF
  char v15[8]; // [esp+14h] [ebp-74h] BYREF
  char v16[8]; // [esp+1Ch] [ebp-6Ch] BYREF
  char v17[8]; // [esp+24h] [ebp-64h] BYREF
  __int64 v18; // [esp+2Ch] [ebp-5Ch]
  __int64 v19; // [esp+34h] [ebp-54h]
  __int64 v20; // [esp+3Ch] [ebp-4Ch] BYREF
  __int64 v21; // [esp+44h] [ebp-44h] BYREF
  int v22; // [esp+4Ch] [ebp-3Ch]
  char Destination[52]; // [esp+50h] [ebp-38h] BYREF

  v22 = sub_63AAE0(*(this + 1) != 0 ? 5 : 10);
  v19 = sub_64C8A0(0, 0);
  v20 = v19;
  v18 = sub_64C8A0(0, 0);
  v21 = v18;
  sub_5E0690(a2, a3);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)(*(this + 1) != 0 ? 5 : 10) )
    sub_5E0C40(a3, &v20, &v21);
  v11 = v21;
  v10 = v20;
  sub_64C5C0(v17, *(_DWORD *)(v22 + 16), *(_DWORD *)(v22 + 20));
  sub_64C5C0(v16, v10, HIDWORD(v10));
  v3 = (int *)sub_64C5C0(v15, v11, HIDWORD(v11));
  sub_64C8D0(*v3, v3[1], Destination, 1, 1, 1);
  v4 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v4, Destination);
  v5 = (int *)sub_64C5C0(v14, v20, HIDWORD(v20));
  sub_64C8D0(*v5, v5[1], Destination, 1, 1, 1);
  v6 = sub_630F40("SID_CASINOSTATS_GAMEPLAYNET_COLON");
  sub_654390(1, v6, Destination);
  v7 = (int *)sub_64C5C0(v13, v21, HIDWORD(v21));
  sub_64C8D0(*v7, v7[1], Destination, 1, 1, 1);
  v8 = sub_630F40("SID_CASINOSTATS_TOURNAMENTNET_COLON");
  sub_654390(2, v8, Destination);
  return 1;
}


//======================================================================
// sub_45F2E0
// entry 0045f2e0  size 60  status ok
//======================================================================

char __stdcall sub_45F2E0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_45F320
// entry 0045f320  size 67  status ok
//======================================================================

char __stdcall sub_45F320(int a1)
{
  if ( a1 == 3204000 )
  {
    sub_653BD0(10);
    return 1;
  }
  else if ( a1 == 3204004 )
  {
    sub_653BD0(5);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_45F370
// entry 0045f370  size 15  status ok
//======================================================================

char __stdcall sub_45F370(int a1)
{
  return 0;
}


//======================================================================
// sub_45F380
// entry 0045f380  size 15  status ok
//======================================================================

char __stdcall sub_45F380(int a1)
{
  return 0;
}


//======================================================================
// sub_45F390
// entry 0045f390  size 54  status ok
//======================================================================

void *__thiscall sub_45F390(_DWORD *this)
{
  if ( *(this + 1) == 1 )
    return &unk_71B01C;
  else
    return &unk_71B03C;
}


//======================================================================
// sub_45F3D0
// entry 0045f3d0  size 190  status ok
//======================================================================

void *__stdcall sub_45F3D0(int a1)
{
  int v1; // eax

  if ( (dword_790748 & 1) == 0 )
  {
    dword_790748 |= 1u;
    dword_71B060 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_71B064 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3204001 )
    return &unk_71B05C;
  else
    return 0;
}


//======================================================================
// sub_45F490
// entry 0045f490  size 62  status ok
//======================================================================

void *__thiscall sub_45F490(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  v2 = *(this + 1);
  if ( !v2 )
    return &unk_71A588;
  if ( v2 == 1 )
    return &unk_71AA48;
  return (void *)v3;
}


//======================================================================
// sub_45F4D0
// entry 0045f4d0  size 62  status ok
//======================================================================

void *__thiscall sub_45F4D0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  v2 = *(this + 1);
  if ( !v2 )
    return &unk_71AF08;
  if ( v2 == 1 )
    return &unk_71AF78;
  return (void *)v3;
}


//======================================================================
// sub_45F510
// entry 0045f510  size 361  status ok
//======================================================================

char __stdcall sub_45F510(int a1, int a2)
{
  int v3; // [esp+Ch] [ebp-4h]

  if ( a2 == 3204000 || a2 == 3204004 )
  {
    if ( a2 == 3204000 )
      v3 = 10;
    else
      v3 = 5;
    if ( a1 == 5015 )
    {
      sub_5DBD00(v3, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, v3, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3204000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 10, -1);
    return 1;
  }
  else if ( a1 == 3204004 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 5, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_45F6A0
// entry 0045f6a0  size 204  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_45F6A0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &PaiGowState::`vftable';
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 66) = -1;
  *((_DWORD *)this + 67) = -1;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 68) = sub_62FBF0(5);
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 71) = -1;
  *((_DWORD *)this + 72) = -1;
  return this;
}


//======================================================================
// sub_45F770
// entry 0045f770  size 180  status ok
//======================================================================

void __thiscall sub_45F770(CNoTrackObject *this)
{
  *(_DWORD *)this = &PaiGowState::`vftable';
  if ( *((_DWORD *)this + 22) )
    (***((void (__thiscall ****)(_DWORD, int))this + 22))(*((_DWORD *)this + 22), 1);
  if ( *((_DWORD *)this + 1) )
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_45F830
// entry 0045f830  size 62  status ok
//======================================================================

int __stdcall sub_45F830(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_45F870
// entry 0045f870  size 23  status ok
//======================================================================

char sub_45F870()
{
  return *(_BYTE *)sub_45F830(-1);
}


//======================================================================
// sub_45F890
// entry 0045f890  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_45F890(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_45F830(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_45F8B0
// entry 0045f8b0  size 24  status ok
//======================================================================

char sub_45F8B0()
{
  return *(_BYTE *)(sub_45F830(-1) + 1);
}


//======================================================================
// sub_45F8D0
// entry 0045f8d0  size 47  status ok
//======================================================================

int __stdcall sub_45F8D0(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_45F830(-1) + 1) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_45F900
// entry 0045f900  size 24  status ok
//======================================================================

char sub_45F900()
{
  return *(_BYTE *)(sub_45F830(-1) + 2);
}


//======================================================================
// sub_45F920
// entry 0045f920  size 29  status ok
//======================================================================

int __stdcall sub_45F920(char a1)
{
  int result; // eax

  result = sub_45F830(-1);
  *(_BYTE *)(result + 2) = a1;
  return result;
}


//======================================================================
// sub_45F940
// entry 0045f940  size 46  status ok
//======================================================================

char sub_45F940()
{
  if ( (unsigned __int8)sub_5DA830(dword_790734) )
    return 1;
  else
    return *(_BYTE *)(sub_45F830(-1) + 3);
}


//======================================================================
// sub_45F970
// entry 0045f970  size 29  status ok
//======================================================================

int __stdcall sub_45F970(char a1)
{
  int result; // eax

  result = sub_45F830(-1);
  *(_BYTE *)(result + 3) = a1;
  return result;
}


//======================================================================
// sub_45F990
// entry 0045f990  size 93  status ok
//======================================================================

char sub_45F990()
{
  if ( (unsigned __int8)sub_5DA830(dword_790734)
    || (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734) == 100 )
  {
    return 0;
  }
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(dword_790734) == 1 )
    return 0;
  return *(_BYTE *)(sub_45F830(-1) + 4);
}


//======================================================================
// sub_45F9F0
// entry 0045f9f0  size 29  status ok
//======================================================================

int __stdcall sub_45F9F0(char a1)
{
  int result; // eax

  result = sub_45F830(-1);
  *(_BYTE *)(result + 4) = a1;
  return result;
}


//======================================================================
// sub_45FA10
// entry 0045fa10  size 704  status ok
//======================================================================

char *__stdcall sub_45FA10(__int16 a1, char *Destination)
{
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
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  char *result; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax

  switch ( sub_641280(a1) )
  {
    case 0:
      v2 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKNONE");
      strcpy(Destination, v2);
      break;
    case 1:
      v3 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKACELOW");
      strcpy(Destination, v3);
      break;
    case 2:
      v4 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK2");
      strcpy(Destination, v4);
      break;
    case 3:
      v5 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK3");
      strcpy(Destination, v5);
      break;
    case 4:
      v6 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK4");
      strcpy(Destination, v6);
      break;
    case 5:
      v7 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK5");
      strcpy(Destination, v7);
      break;
    case 6:
      v8 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK6");
      strcpy(Destination, v8);
      break;
    case 7:
      v9 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK7");
      strcpy(Destination, v9);
      break;
    case 8:
      v10 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK8");
      strcpy(Destination, v10);
      break;
    case 9:
      v11 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK9");
      strcpy(Destination, v11);
      break;
    case 0xA:
      v12 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANK10");
      strcpy(Destination, v12);
      break;
    case 0xB:
      v13 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKJACK");
      strcpy(Destination, v13);
      break;
    case 0xC:
      v14 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKQUEEN");
      strcpy(Destination, v14);
      break;
    case 0xD:
      v15 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKKING");
      strcpy(Destination, v15);
      break;
    case 0xE:
      v16 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKACEHIGH");
      strcpy(Destination, v16);
      break;
    case 0xF:
      v17 = (const char *)sub_630F40("SID_PAIGOWPOKER_RANKJOKER");
      strcpy(Destination, v17);
      break;
    default:
      break;
  }
  result = (char *)sub_641290(a1);
  switch ( (unsigned int)result )
  {
    case 0u:
      v19 = (const char *)sub_630F40("SID_PAIGOWPOKER_NOSUIT");
      result = strcat(Destination, v19);
      break;
    case 1u:
      v20 = (const char *)sub_630F40("SID_PAIGOWPOKER_CLUBS");
      result = strcat(Destination, v20);
      break;
    case 2u:
      v21 = (const char *)sub_630F40("SID_PAIGOWPOKER_DIAMONDS");
      result = strcat(Destination, v21);
      break;
    case 3u:
      v22 = (const char *)sub_630F40("SID_PAIGOWPOKER_HEARTS");
      result = strcat(Destination, v22);
      break;
    case 4u:
      v23 = (const char *)sub_630F40("SID_PAIGOWPOKER_SPADES");
      result = strcat(Destination, v23);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_45FD30
// entry 0045fd30  size 176  status ok
//======================================================================

void __fastcall sub_45FD30(char a1)
{
  __int16 v1; // ax
  char v2; // [esp+0h] [ebp-44h]
  char v3; // [esp+0h] [ebp-44h]
  int j; // [esp+4h] [ebp-40h]
  int i; // [esp+8h] [ebp-3Ch]
  char Buffer[52]; // [esp+Ch] [ebp-38h] BYREF

  v2 = a1;
  for ( i = 0; i < 5; ++i )
  {
    sprintf(Buffer, "Player %d:\n", i);
    sub_62FDE0(Buffer, v2);
    for ( j = 0; j < 7; ++j )
    {
      v1 = sub_4604D0(i, j);
      sub_45FA10(v1, Buffer);
      sub_62FDE0(Buffer, v3);
    }
    sub_62FDE0("\n\n", v3);
  }
}


