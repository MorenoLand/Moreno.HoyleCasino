//======================================================================
// sub_4A1E40
// entry 004a1e40  size 34  status ok
//======================================================================

bool __thiscall sub_4A1E40(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this != *a2;
}


//======================================================================
// sub_4A1E70
// entry 004a1e70  size 34  status ok
//======================================================================

bool __thiscall sub_4A1E70(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this < (int)*a2;
}


//======================================================================
// sub_4A1ED0
// entry 004a1ed0  size 34  status ok
//======================================================================

bool __thiscall sub_4A1ED0(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this > (int)*a2;
}


//======================================================================
// sub_4A1F00
// entry 004a1f00  size 34  status ok
//======================================================================

bool __thiscall sub_4A1F00(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this >= (int)*a2;
}


//======================================================================
// sub_4A1F30
// entry 004a1f30  size 120  status ok
//======================================================================

_BYTE *__thiscall sub_4A1F30(_BYTE *this, _BYTE *a2)
{
  if ( !(unsigned __int8)sub_4A1FE0(dword_7913D0) )
    sub_5E9F20((char)"*this != EmptyValue", "..\\Casino\\PokerHandValue.cpp", 116);
  if ( (unsigned __int8)sub_4A1FB0(dword_7913B4) )
    *a2 = *(_BYTE *)dword_7907A4;
  else
    *a2 = *this - 2;
  return a2;
}


//======================================================================
// sub_4A1FB0
// entry 004a1fb0  size 34  status ok
//======================================================================

bool __thiscall sub_4A1FB0(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this == *a2;
}


//======================================================================
// sub_4A1FE0
// entry 004a1fe0  size 34  status ok
//======================================================================

bool __thiscall sub_4A1FE0(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this != *a2;
}


//======================================================================
// sub_4A2010
// entry 004a2010  size 34  status ok
//======================================================================

bool __thiscall sub_4A2010(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this > (int)*a2;
}


//======================================================================
// sub_4A2040
// entry 004a2040  size 34  status ok
//======================================================================

bool __thiscall sub_4A2040(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this >= (int)*a2;
}


//======================================================================
// sub_4A20A0
// entry 004a20a0  size 34  status ok
//======================================================================

bool __thiscall sub_4A20A0(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this <= (int)*a2;
}


//======================================================================
// sub_4A20D0
// entry 004a20d0  size 29  status ok
//======================================================================

void __thiscall sub_4A20D0(_WORD *this)
{
  *(_BYTE *)this = 0;
  *(this + 1) = 0;
}


//======================================================================
// sub_4A2100
// entry 004a2100  size 81  status ok
//======================================================================

_WORD *__thiscall sub_4A2100(
        _WORD *this,
        _BYTE *a2,
        _BYTE *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  *(_BYTE *)this = *a3 + *a2;
  *(this + 1) = *a7 + 16 * *a6 + (*a5 << 8) + (*a4 << 12);
  return this;
}


//======================================================================
// sub_4A2160
// entry 004a2160  size 74  status ok
//======================================================================

_BYTE *__thiscall sub_4A2160(_BYTE *this, _BYTE *a2)
{
  if ( !*this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 391);
  *a2 = *this & 0xF0;
  return a2;
}


//======================================================================
// sub_4A21B0
// entry 004a21b0  size 71  status ok
//======================================================================

_BYTE *__thiscall sub_4A21B0(_BYTE *this, _BYTE *a2)
{
  if ( !*this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 398);
  *a2 = *this & 0xF;
  return a2;
}


//======================================================================
// sub_4A2200
// entry 004a2200  size 78  status ok
//======================================================================

_BYTE *__thiscall sub_4A2200(_WORD *this, _BYTE *a2)
{
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 405);
  *a2 = (*(this + 1) & 0xF000) >> 12;
  return a2;
}


//======================================================================
// sub_4A2250
// entry 004a2250  size 78  status ok
//======================================================================

_BYTE *__thiscall sub_4A2250(_WORD *this, _BYTE *a2)
{
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 412);
  *a2 = (unsigned __int16)(*(this + 1) & 0xF00) >> 8;
  return a2;
}


//======================================================================
// sub_4A22A0
// entry 004a22a0  size 78  status ok
//======================================================================

_BYTE *__thiscall sub_4A22A0(_WORD *this, _BYTE *a2)
{
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 419);
  *a2 = (*(this + 1) & 0xF0) >> 4;
  return a2;
}


//======================================================================
// sub_4A22F0
// entry 004a22f0  size 72  status ok
//======================================================================

_BYTE *__thiscall sub_4A22F0(_WORD *this, _BYTE *a2)
{
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 426);
  *a2 = *(this + 1) & 0xF;
  return a2;
}


//======================================================================
// sub_4A2340
// entry 004a2340  size 121  status ok
//======================================================================

bool __thiscall sub_4A2340(unsigned __int8 *this, unsigned __int8 *a2)
{
  if ( !*this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 435);
  if ( !*a2 )
    sub_5E9F20((char)"phRHS.ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 436);
  return *this == *a2 && *((unsigned __int16 *)this + 1) == *((unsigned __int16 *)a2 + 1);
}


//======================================================================
// sub_4A23C0
// entry 004a23c0  size 121  status ok
//======================================================================

bool __thiscall sub_4A23C0(unsigned __int8 *this, unsigned __int8 *a2)
{
  if ( !*this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 449);
  if ( !*a2 )
    sub_5E9F20((char)"phRHS.ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 450);
  return *this != *a2 || *((unsigned __int16 *)this + 1) != *((unsigned __int16 *)a2 + 1);
}


//======================================================================
// sub_4A2440
// entry 004a2440  size 137  status ok
//======================================================================

bool __thiscall sub_4A2440(unsigned __int8 *this, unsigned __int8 *a2)
{
  if ( !*this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 463);
  if ( !*a2 )
    sub_5E9F20((char)"phRHS.ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 464);
  return *this > (int)*a2 || *this == *a2 && *((unsigned __int16 *)this + 1) > (int)*((unsigned __int16 *)a2 + 1);
}


//======================================================================
// sub_4A24D0
// entry 004a24d0  size 125  status ok
//======================================================================

bool __thiscall sub_4A24D0(unsigned __int8 *this, unsigned __int8 *a2)
{
  if ( !*this )
    sub_5E9F20((char)"ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 478);
  if ( !*a2 )
    sub_5E9F20((char)"phRHS.ucCategoryAndStrength != 0u", "..\\Casino\\PokerHandValue.cpp", 479);
  return sub_4A2340(this, a2) || sub_4A2440(this, a2);
}


//======================================================================
// sub_4A2550
// entry 004a2550  size 25  status ok
//======================================================================

bool __thiscall sub_4A2550(unsigned __int8 *this, unsigned __int8 *a2)
{
  return sub_4A2440(a2, this);
}


//======================================================================
// sub_4A2570
// entry 004a2570  size 25  status ok
//======================================================================

bool __thiscall sub_4A2570(unsigned __int8 *this, unsigned __int8 *a2)
{
  return sub_4A24D0(a2, this);
}


//======================================================================
// sub_4A2590
// entry 004a2590  size 162  status ok
//======================================================================

int __cdecl sub_4A2590(int a1, int a2, int a3)
{
  int v3; // esi

  if ( sub_47E420((_DWORD *)dword_791364) < 0 )
    sub_5E9F20((char)"pokerGame->GetCurrentPlayer() >= 0", "..\\Casino\\PokerHoldemAI.cpp", 815);
  v3 = sub_47E420((_DWORD *)dword_791364);
  if ( v3 >= sub_47F950() )
    sub_5E9F20(
      (char)"pokerGame->GetCurrentPlayer() < pokerGame->GetNumberOfPlayersAtTable()",
      "..\\Casino\\PokerHoldemAI.cpp",
      816);
  dword_791890 = sub_47E3B0((void *)dword_791364);
  if ( a1 )
    return sub_4A2CC0(a1, a2, a3);
  else
    return sub_4A2640(0, a2, a3);
}


//======================================================================
// sub_4A2640
// entry 004a2640  size 1566  status ok
//======================================================================

int __cdecl sub_4A2640(int a1, __int16 a2, __int16 a3)
{
  int v3; // esi
  __int16 v4; // ax
  int v5; // esi
  int v6; // eax
  __int16 v7; // ax
  int v8; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  Concurrency::details::SchedulerProxy *v16; // eax
  Concurrency::details::VirtualProcessor *v17; // eax
  __int16 ExecutingContext; // ax
  Concurrency::details::VirtualProcessor *v19; // eax
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 j; // [esp+8h] [ebp-34h]
  __int16 v24; // [esp+Ch] [ebp-30h]
  __int16 i; // [esp+14h] [ebp-28h]
  __int16 v26; // [esp+18h] [ebp-24h]
  __int16 v27; // [esp+1Ch] [ebp-20h]
  __int16 v28; // [esp+20h] [ebp-1Ch]
  __int16 v29[4]; // [esp+24h] [ebp-18h] BYREF
  int v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+38h] [ebp-4h]

  v30 = sub_47E420((_DWORD *)dword_791364);
  if ( word_791D80[v30] )
  {
    v28 = sub_4CC4F0(dword_791890);
    v3 = sub_62FBF0(v28);
    word_791798[v30] = (v3 - sub_62FBF0(v28)) / 2;
    sub_4C7C40(v29);
    v31 = 0;
    v4 = sub_48DC80(v29);
    word_7919C8[v30] = v4;
    word_791D80[v30] = 0;
    v5 = (int)(sub_4CC570(word_7919C8[v30], a2) * 100.0);
    v6 = sub_4C6DB0(dword_791890);
    if ( v5 <= sub_62FBF0(100 - v6) )
    {
      word_791768[v30] = 0;
    }
    else
    {
      v26 = 0;
      v7 = sub_4CBD10(dword_791890);
      v27 = word_7919C8[v30] + v7 - a3 - 1 + 10;
      for ( i = 0; i < v27; ++i )
      {
        v8 = (int)(sub_4CC570(word_7919C8[v30], a2) * 10.0);
        if ( v8 > sub_62FBF0(100) )
          ++v26;
      }
      if ( v26 < 5 )
      {
        if ( v26 < 3 )
        {
          if ( v26 < 1 )
            word_791768[v30] = 2;
          else
            word_791768[v30] = 3;
        }
        else
        {
          word_791768[v30] = 4;
        }
      }
      else
      {
        word_791768[v30] = 5;
      }
    }
    v31 = -1;
    sub_484470(v29);
  }
  if ( word_791768[v30] )
  {
    switch ( word_791768[v30] )
    {
      case 5:
        v10 = sub_62FBF0(100);
        if ( v10 < (__int16)sub_4A2C60(a1, 3) )
        {
          sub_4C79D0(3);
          v11 = sub_62FBF0(100);
          if ( v11 < (__int16)sub_4CC3B0(dword_791890) )
            word_791768[v30] = 4;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
      case 4:
        v12 = sub_62FBF0(100);
        if ( v12 < (__int16)sub_4A2C60(a1, 2) )
        {
          sub_4C79D0(2);
          v13 = sub_62FBF0(100);
          if ( v13 < (__int16)sub_4CC3B0(dword_791890) )
            word_791768[v30] = 3;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
      case 3:
        v14 = sub_62FBF0(100);
        if ( v14 < (__int16)sub_4A2C60(a1, 1) )
        {
          sub_4C79D0(1);
          v15 = sub_62FBF0(100);
          if ( v15 < (__int16)sub_4CC3B0(dword_791890) )
            word_791768[v30] = 2;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
      return 0;
    if ( sub_47D6B0((_DWORD *)dword_791364) != 1 )
      return 1;
  }
  if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 3;
  if ( sub_47D6B0((_DWORD *)dword_791364) != 1 )
    return 1;
  v24 = 0;
  for ( j = 0; j < sub_47F950(); ++j )
  {
    if ( j != v30 )
    {
      v16 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v16) == 1 )
      {
        v17 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v17);
        v24 += sub_4F69E0(ExecutingContext);
        v19 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
        v20 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v19);
        if ( (__int16)sub_4F6880(v20) > 0 )
        {
          v24 = 0;
          break;
        }
      }
    }
  }
  v21 = sub_4CC3F0(dword_791890);
  if ( (__int16)sub_62FBF0(v21 + 1) * v24 + word_791798[v30] <= 10 )
    return 1;
  v22 = sub_62FBF0(3);
  sub_4C79D0(v22 + 1);
  return 2;
}


//======================================================================
// sub_4A2C60
// entry 004a2c60  size 85  status ok
//======================================================================

__int16 __cdecl sub_4A2C60(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4CC1A0(a2);
  if ( a1 == 5 && (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    v3 += (100 - v3) / 2;
  return v3;
}


//======================================================================
// sub_4A2CC0
// entry 004a2cc0  size 3324  status ok
//======================================================================

int __cdecl sub_4A2CC0(int a1, int a2, int a3)
{
  int v3; // esi
  __int16 ExecutingContext; // ax
  int v5; // esi
  int v6; // esi
  __int16 v7; // di
  __int16 v8; // ax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  __int16 v18; // ax
  int v19; // esi
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // esi
  __int16 v23; // ax
  double v24; // st7
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // eax
  int v30; // esi
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // eax
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // [esp-18h] [ebp-E0h] BYREF
  __int16 v40; // [esp-14h] [ebp-DCh]
  int *v41; // [esp-10h] [ebp-D8h]
  int *v42; // [esp-Ch] [ebp-D4h]
  int *v43; // [esp-8h] [ebp-D0h]
  _DWORD *v44; // [esp-4h] [ebp-CCh]
  int v45; // [esp+Ch] [ebp-BCh]
  int v46; // [esp+10h] [ebp-B8h]
  int v47; // [esp+14h] [ebp-B4h]
  int v48; // [esp+18h] [ebp-B0h]
  int v49; // [esp+1Ch] [ebp-ACh]
  int v50; // [esp+20h] [ebp-A8h]
  int v51; // [esp+24h] [ebp-A4h]
  int v52; // [esp+28h] [ebp-A0h]
  int v53; // [esp+2Ch] [ebp-9Ch]
  int v54; // [esp+30h] [ebp-98h]
  int v55; // [esp+34h] [ebp-94h]
  double v56; // [esp+38h] [ebp-90h]
  int v57; // [esp+40h] [ebp-88h]
  double v58; // [esp+44h] [ebp-84h]
  HFONT Font; // [esp+4Ch] [ebp-7Ch]
  int v60; // [esp+50h] [ebp-78h]
  int v61; // [esp+54h] [ebp-74h]
  int v62; // [esp+58h] [ebp-70h]
  int v63; // [esp+5Ch] [ebp-6Ch]
  int v64; // [esp+60h] [ebp-68h]
  int v65; // [esp+64h] [ebp-64h]
  int v66; // [esp+68h] [ebp-60h]
  int *v67; // [esp+6Ch] [ebp-5Ch]
  int *v68; // [esp+70h] [ebp-58h]
  double v69; // [esp+74h] [ebp-54h]
  double v70; // [esp+7Ch] [ebp-4Ch]
  double v71; // [esp+84h] [ebp-44h]
  double v72; // [esp+8Ch] [ebp-3Ch]
  __int16 v73; // [esp+94h] [ebp-34h]
  __int16 k; // [esp+98h] [ebp-30h]
  __int16 i; // [esp+9Ch] [ebp-2Ch]
  __int16 v76; // [esp+A0h] [ebp-28h]
  __int16 v77; // [esp+A4h] [ebp-24h]
  __int16 v78[4]; // [esp+A8h] [ebp-20h] BYREF
  __int16 j; // [esp+B0h] [ebp-18h]
  int v80; // [esp+B4h] [ebp-14h]
  Concurrency::details::SchedulerProxy *v81; // [esp+B8h] [ebp-10h]
  int v82; // [esp+C4h] [ebp-4h]

  v80 = sub_47E420((_DWORD *)dword_791364);
  v81 = 0;
  if ( word_791D80[v80] == a1 )
  {
    if ( word_7919B8[v80] == a3 || word_791768[v80] == 6 || word_791768[v80] == 2 )
    {
      dbl_791D90[v80] = sub_4A3A60(a1, a2);
    }
    else
    {
      word_7919B8[v80] = a3;
      dbl_791D90[v80] = sub_4A3A60(a1, a2);
      word_791768[v80] = 1;
    }
  }
  else
  {
    sub_4C7C40(v78);
    v82 = 0;
    if ( a1 >= 5 )
    {
      word_791798[v80] = 10;
    }
    else
    {
      v44 = (_DWORD *)(4 * v80 + 7936040);
      v43 = (int *)(4 * v80 + 7935040);
      v42 = (int *)(4 * v80 + 7937280);
      v41 = (int *)(4 * v80 + 7936664);
      v68 = &v39;
      v66 = sub_4C7C40(&v39);
      sub_48EA10(v78, v39, v40, v41, v42, v43, v44);
      v77 = 0;
      for ( i = 0; ; ++i )
      {
        v3 = i;
        if ( v3 >= sub_47F950() )
          break;
        if ( i != v80 )
        {
          v81 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v81) == 1 )
          {
            ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v81);
            v77 += sub_4F6A90(ExecutingContext);
          }
        }
      }
      v76 = sub_4CC4F0(dword_791890);
      v5 = sub_62FBF0(v76);
      v6 = v5 - sub_62FBF0(v76);
      v7 = v77;
      v8 = sub_4CC4B0(dword_791890);
      word_791798[v80] = v6 - sub_62FBF0(v8 + 1) * v7;
    }
    for ( j = 5; j >= 0; --j )
    {
      v44 = (_DWORD *)(j + 1);
      v43 = &dword_791460[6 * v80 + j];
      v42 = &dword_7919D8[6 * v80 + j];
      v41 = &dword_7915C8[6 * v80 + j];
      v67 = &v39;
      v65 = sub_4C7C40(&v39);
      sub_48E5E0(v78, v39, v40, v41, v42, v43, (__int16)v44);
    }
    word_791D80[v80] = a1;
    word_7919B8[v80] = a3;
    if ( a1 == 3 )
    {
      v9 = sub_62FBF0(21);
      v10 = v9 + sub_62FBF0(21) + 60;
      v11 = sub_62FBF0(21) + v10;
      v64 = sub_62FBF0(21) + v11;
      dbl_791DD0[v80] = (double)v64 * 0.01;
      v12 = sub_62FBF0(21);
      v13 = v12 + sub_62FBF0(21) + 60;
      v14 = sub_62FBF0(21) + v13;
      v63 = sub_62FBF0(21) + v14;
      dbl_791520[v80] = (double)v63 * 0.01;
      for ( k = 0; ; ++k )
      {
        v15 = k;
        if ( v15 >= sub_47F950() )
          break;
        v16 = sub_62FBF0(51);
        v17 = v16 + sub_62FBF0(51) + 25;
        v62 = sub_62FBF0(51) + v17;
        dbl_791AE0[8 * v80 + k] = (double)v62 * 0.01;
      }
      v18 = sub_4CC530(dword_791890);
      v19 = sub_62FBF0(v18);
      v20 = sub_4CC530(dword_791890);
      v61 = sub_62FBF0(v20) + v19;
      dbl_791D40[v80] = (double)v61 / 10.0 + 1.0;
      v21 = sub_4CC550(dword_791890);
      v22 = sub_62FBF0(v21);
      v23 = sub_4CC550(dword_791890);
      v60 = sub_62FBF0(v23) + v22;
      dbl_7917E8[v80] = (double)v60 / 10.0 + 1.0;
    }
    v24 = sub_4A3A60(a1, a2);
    dbl_791D90[v80] = v24;
    word_791768[v80] = 1;
    if ( a1 == 5 )
    {
      for ( j = 5; j >= 0 && dword_7915C8[6 * v80 + j] <= 0; --j )
        ;
      if ( j == -1 )
        word_791768[v80] = 6;
    }
    v82 = -1;
    sub_484470(v78);
  }
  if ( word_791768[v80] == 6 )
  {
    sub_4C79D0(3);
    if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    {
      if ( (unsigned __int8)sub_4A39C0() || sub_62FBF0(20) )
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
  }
  if ( word_791768[v80] == 1 )
  {
    if ( (unsigned __int8)sub_4F6690(dword_791364 + 56) )
    {
      Font = CMFCCaptionBar::OnGetFont((CMFCCaptionBar *)dword_791890);
      v58 = ((double)(int)Font / 100.0 + dbl_791D90[v80]) * dbl_791D90[v80];
      v57 = sub_4F67D0(dword_791364 + 56);
      v56 = (double)v57;
      v55 = sub_4F6840(dword_791364 + 56);
      v72 = v58 / (v56 / (double)v55);
      v73 = (a3 - 1) * sub_4D0310(dword_791890);
      v26 = sub_62FBF0(v73);
      v27 = sub_62FBF0(v73) + v26;
      v54 = v27 - sub_62FBF0(v73);
      if ( (double)v54 / 10.0 + 1.0 >= v72 )
        return 0;
      if ( !(unsigned __int8)sub_4A4090(a1, a3) )
      {
        v28 = sub_62FBF0(100);
        if ( v28 < (__int16)sub_4CFFE0(dword_791890) )
          word_791768[v80] = 2;
        return 3;
      }
    }
    else if ( !(unsigned __int8)sub_4A4090(a1, a3) )
    {
      return 1;
    }
  }
  switch ( word_791768[v80] )
  {
    case 5:
    case 12:
      if ( word_791768[v80] == 5 )
      {
        v29 = sub_47CE60((_DWORD *)dword_791364);
        v53 = sub_4C6EF0(a1 == 5, v29);
      }
      else
      {
        v53 = sub_4C6F50(dword_791890);
      }
      v52 = sub_62FBF0(100 - v53);
      v71 = (double)v52;
      v51 = sub_4A2C60(a1, 3);
      if ( (double)v51 > v71 )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v80] == 12 )
        {
          return 0;
        }
        v30 = sub_62FBF0(100);
        if ( v30 >= (__int16)sub_4CC3B0(dword_791890) )
        {
          v31 = sub_62FBF0(100);
          if ( v31 < (__int16)sub_4CC3D0(dword_791890) )
            word_791768[v80] = 1;
        }
        else
        {
          word_791768[v80] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 11:
      if ( word_791768[v80] == 4 )
      {
        v32 = sub_47CE60((_DWORD *)dword_791364);
        v50 = sub_4C6EF0(a1 == 5, v32);
      }
      else
      {
        v50 = sub_4C6F50(dword_791890);
      }
      v49 = sub_62FBF0(100 - v50);
      v70 = (double)v49;
      v48 = sub_4A2C60(a1, 2);
      if ( (double)v48 > v70 )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v80] == 11 )
        {
          return 0;
        }
        v33 = sub_62FBF0(100);
        if ( v33 >= (__int16)sub_4CC3B0(dword_791890) )
        {
          v34 = sub_62FBF0(100);
          if ( v34 < (__int16)sub_4CC3D0(dword_791890) )
            word_791768[v80] = 1;
        }
        else
        {
          word_791768[v80] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        if ( word_791768[v80] == 11 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 10:
      if ( word_791768[v80] == 3 )
      {
        v35 = sub_47CE60((_DWORD *)dword_791364);
        v47 = sub_4C6EF0(a1 == 5, v35);
      }
      else
      {
        v47 = sub_4C6F50(dword_791890);
      }
      v46 = sub_62FBF0(100 - v47);
      v69 = (double)v46;
      v45 = sub_4A2C60(a1, 1);
      if ( (double)v45 > v69 )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v80] == 10 )
        {
          return 0;
        }
        v36 = sub_62FBF0(100);
        if ( v36 >= (__int16)sub_4CC3B0(dword_791890) )
        {
          v37 = sub_62FBF0(100);
          if ( v37 < (__int16)sub_4CC3D0(dword_791890) )
            word_791768[v80] = 1;
        }
        else
        {
          word_791768[v80] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        if ( word_791768[v80] == 10 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_123;
  switch ( word_791768[v80] )
  {
    case 12:
      return 0;
    case 11:
      return 0;
    case 10:
      return 0;
  }
LABEL_123:
  v38 = sub_62FBF0(100);
  if ( v38 < (__int16)sub_4CC3D0(dword_791890) )
    word_791768[v80] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_4A39C0
// entry 004a39c0  size 155  status ok
//======================================================================

char sub_4A39C0()
{
  Concurrency::details::SchedulerProxy *v0; // eax
  Concurrency::details::VirtualProcessor *v1; // eax
  __int16 ExecutingContext; // ax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != sub_47E420((_DWORD *)dword_791364) )
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
// sub_4A3A60
// entry 004a3a60  size 1571  status ok
//======================================================================

double __cdecl sub_4A3A60(int a1, int a2)
{
  int v2; // esi
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v11; // [esp+10h] [ebp-FCh]
  double v12; // [esp+18h] [ebp-F4h]
  _WORD *v13; // [esp+24h] [ebp-E8h]
  _BYTE *v14; // [esp+2Ch] [ebp-E0h]
  __int16 *v15; // [esp+34h] [ebp-D8h]
  __int16 *v16; // [esp+3Ch] [ebp-D0h]
  int v17; // [esp+44h] [ebp-C8h]
  double v18; // [esp+50h] [ebp-BCh]
  double v19; // [esp+5Ch] [ebp-B0h]
  double v20; // [esp+68h] [ebp-A4h]
  _BYTE v21[8]; // [esp+74h] [ebp-98h] BYREF
  int v22; // [esp+7Ch] [ebp-90h] BYREF
  __int16 v23[4]; // [esp+80h] [ebp-8Ch] BYREF
  _BYTE v24[8]; // [esp+88h] [ebp-84h] BYREF
  _BYTE v25[8]; // [esp+90h] [ebp-7Ch] BYREF
  double v26; // [esp+98h] [ebp-74h]
  double v27; // [esp+A0h] [ebp-6Ch]
  double v28; // [esp+A8h] [ebp-64h]
  __int16 j; // [esp+B4h] [ebp-58h]
  unsigned __int8 v30; // [esp+BBh] [ebp-51h] BYREF
  __int16 v31; // [esp+BCh] [ebp-50h]
  __int16 v32; // [esp+C0h] [ebp-4Ch]
  __int16 v33; // [esp+C4h] [ebp-48h]
  __int16 v34; // [esp+C8h] [ebp-44h]
  struct Concurrency::IExecutionContext *ExecutingContext; // [esp+CCh] [ebp-40h]
  __int16 v36; // [esp+D0h] [ebp-3Ch]
  char v37; // [esp+D7h] [ebp-35h]
  double v38; // [esp+D8h] [ebp-34h]
  double v39; // [esp+E0h] [ebp-2Ch]
  __int16 i; // [esp+E8h] [ebp-24h]
  int v41; // [esp+ECh] [ebp-20h]
  double v42; // [esp+F0h] [ebp-1Ch]
  double v43; // [esp+F8h] [ebp-14h]
  int v44; // [esp+108h] [ebp-4h]

  v41 = sub_47E420((_DWORD *)dword_791364);
  v42 = 1.0;
  v43 = sub_4CBE00(dword_791890) / (double)a2;
  for ( i = 0; ; ++i )
  {
    v2 = i;
    if ( v2 >= sub_47F950() )
      break;
    if ( i != v41 )
    {
      v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
      {
        v38 = 0.0;
        v39 = sub_4CFE20(i, a2);
        if ( v39 * dbl_791AE0[8 * v41 + i] <= v43 )
        {
          v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
          v32 = sub_4F6880((__int16)ExecutingContext);
          v34 = sub_4F6930((__int16)ExecutingContext);
          v31 = sub_4F6A90((__int16)ExecutingContext) - v32;
          v36 = sub_4F6B20((__int16)ExecutingContext) - v34;
          if ( v32 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 303);
          if ( v34 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 304);
          if ( v31 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 305);
          if ( v36 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 306);
          v37 = 0;
          v5 = sub_4CBE60(dword_791890);
          v20 = v5 * (double)v31 + 1.0;
          v6 = sub_4CBF30(dword_791890);
          v19 = v6 * (double)v36 + v20;
          v7 = sub_4CC000(dword_791890);
          v18 = v7 * (double)v32 + v19;
          v8 = sub_4CC0D0(dword_791890);
          v38 = v8 * (double)v34 + v18;
          v17 = sub_4C7C40(v24);
          v44 = 0;
          v16 = (__int16 *)sub_4C7C40(v25);
          LOBYTE(v44) = 1;
          v15 = sub_4845F0(v16, v23, v17);
          LOBYTE(v44) = 2;
          v14 = sub_485940(v15, &v22, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v44) = 3;
          sub_4A2160(v14, &v30);
          LOBYTE(v44) = 2;
          ATL::CComCriticalSection::~CComCriticalSection(&v22);
          LOBYTE(v44) = 1;
          sub_484470(v23);
          LOBYTE(v44) = 0;
          sub_484470(v25);
          v44 = -1;
          sub_484470(v24);
          v13 = (_WORD *)sub_4C7C40(v21);
          v44 = 4;
          v33 = sub_484BF0(v13);
          v44 = -1;
          sub_484470(v21);
          if ( v33 == 3 && sub_4A1E70(&v30, (unsigned __int8 *)dword_7913A0) )
          {
            v38 = v38 * dbl_791D40[v41];
          }
          else if ( v33 == 4 && sub_4A1E70(&v30, (unsigned __int8 *)dword_7913A0) )
          {
            v38 = v38 * dbl_7917E8[v41];
          }
        }
        else
        {
          v37 = 1;
        }
        for ( j = 5; j >= 0; --j )
        {
          v28 = (double)(dword_791460[6 * v41 + j] + dword_7919D8[6 * v41 + j] + dword_7915C8[6 * v41 + j]);
          if ( v37 )
          {
            v12 = (double)dword_7915C8[6 * v41 + j] / v28;
            v9 = sub_48E500(j + 1);
            v11 = (double)dword_7919D8[6 * v41 + j] / v28;
            v42 = (1.0 - v9 * v12 - sub_48E500(j + 1) * v11 * 0.25) * v42;
          }
          else
          {
            v27 = sub_4CFB30(i, j + 1, a2);
            v42 = (1.0
                 - (double)dword_7915C8[6 * v41 + j] / v28 * v38 * v27
                 - v38 * 0.25 * ((double)dword_7919D8[6 * v41 + j] / v28) * v27)
                * v42;
          }
          if ( v42 < 0.0 )
            v42 = 0.0;
        }
      }
    }
  }
  v42 = v42 * dbl_791DD0[v41];
  if ( a1 < 5 )
  {
    v26 = sub_4CBE30(dword_791890);
    v42 = (double)dword_791A98[v41] / (50.0 - (double)a1) * v26 * dbl_791520[v41] + v42;
  }
  if ( v42 > 100.0 )
    return 100.0;
  return v42;
}


//======================================================================
// sub_4A4090
// entry 004a4090  size 945  status ok
//======================================================================

char __cdecl sub_4A4090(int a1, int a2)
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

  v16 = sub_47E420((_DWORD *)dword_791364);
  v17 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
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
  v7 = sub_4CC3F0(dword_791890);
  v19 = sub_62FBF0(v7 + 1);
  if ( v19 * v17 + word_791798[v16] <= 10 )
    v8 = dbl_791D90[v16];
  else
    v8 = (double)(word_791798[v16] + v19 * v17 - 10) / 100.0 + dbl_791D90[v16];
  v15 = sub_4D0000(3);
  v20 = sub_4D0000(2);
  v18 = sub_4D0000(1);
  v22 = sub_4D02F0(dword_791890);
  v13 = (double)(int)sub_62FBF0(v22) / 100.0 + 1.0;
  v21 = (v13 - (double)(int)sub_62FBF0(v22) / 100.0) / (double)a2;
  v9 = sub_47CE60((_DWORD *)dword_791364);
  if ( (double)(v15 - sub_4C6F90(a1 == 5, v9)) / 100.0 + v21 >= dbl_791D90[v16] )
  {
    v11 = sub_47CE60((_DWORD *)dword_791364);
    if ( (double)(v20 - sub_4C6F90(a1 == 5, v11)) / 100.0 + v21 >= dbl_791D90[v16] )
    {
      v12 = sub_47CE60((_DWORD *)dword_791364);
      if ( (double)(v18 - sub_4C6F90(a1 == 5, v12)) / 100.0 + v21 >= dbl_791D90[v16] )
      {
        if ( (double)(v15 - sub_4C6FD0(dword_791890)) / 100.0 + v21 >= v8 )
        {
          if ( (double)(v20 - sub_4C6FD0(dword_791890)) / 100.0 + v21 >= v8 )
          {
            if ( (double)(v18 - sub_4C6FD0(dword_791890)) / 100.0 + v21 >= v8 )
            {
              return 0;
            }
            else
            {
              word_791768[v16] = 10;
              return 1;
            }
          }
          else
          {
            word_791768[v16] = 11;
            return 1;
          }
        }
        else
        {
          word_791768[v16] = 12;
          return 1;
        }
      }
      else
      {
        word_791768[v16] = 3;
        return 1;
      }
    }
    else
    {
      word_791768[v16] = 4;
      return 1;
    }
  }
  else
  {
    word_791768[v16] = 5;
    return 1;
  }
}


//======================================================================
// sub_4A4450
// entry 004a4450  size 162  status ok
//======================================================================

int __cdecl sub_4A4450(int a1, int a2, int a3)
{
  int v3; // esi

  if ( sub_47E420((_DWORD *)dword_791364) < 0 )
    sub_5E9F20((char)"pokerGame->GetCurrentPlayer() >= 0", "..\\Casino\\PokerHoldemAI.cpp", 1722);
  v3 = sub_47E420((_DWORD *)dword_791364);
  if ( v3 >= sub_47F950() )
    sub_5E9F20(
      (char)"pokerGame->GetCurrentPlayer() < pokerGame->GetNumberOfPlayersAtTable()",
      "..\\Casino\\PokerHoldemAI.cpp",
      1723);
  dword_791890 = sub_47E3B0((void *)dword_791364);
  if ( a1 )
    return sub_4A4E40(a1, a2, a3);
  else
    return sub_4A4500(0, a2, a3);
}


//======================================================================
// sub_4A4500
// entry 004a4500  size 2258  status ok
//======================================================================

int __cdecl sub_4A4500(int a1, int a2, __int16 a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // eax
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  Concurrency::details::SchedulerProxy *v13; // eax
  Concurrency::details::VirtualProcessor *v14; // eax
  __int16 ExecutingContext; // ax
  Concurrency::details::VirtualProcessor *v16; // eax
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 j; // [esp+8h] [ebp-70h]
  __int16 v21; // [esp+Ch] [ebp-6Ch]
  __int16 i; // [esp+14h] [ebp-64h]
  __int16 v23; // [esp+18h] [ebp-60h] BYREF
  __int16 v24; // [esp+1Ch] [ebp-5Ch] BYREF
  __int16 v25; // [esp+20h] [ebp-58h] BYREF
  __int16 v26; // [esp+24h] [ebp-54h] BYREF
  __int16 v27; // [esp+28h] [ebp-50h]
  __int16 v28[4]; // [esp+2Ch] [ebp-4Ch] BYREF
  __int16 v29; // [esp+34h] [ebp-44h] BYREF
  __int16 v30; // [esp+38h] [ebp-40h]
  __int16 v31; // [esp+3Ch] [ebp-3Ch] BYREF
  __int16 v32; // [esp+40h] [ebp-38h]
  __int16 v33; // [esp+44h] [ebp-34h] BYREF
  __int16 v34; // [esp+48h] [ebp-30h]
  __int16 v35; // [esp+4Ch] [ebp-2Ch] BYREF
  __int16 v36; // [esp+50h] [ebp-28h]
  __int16 v37; // [esp+54h] [ebp-24h] BYREF
  __int16 v38; // [esp+58h] [ebp-20h]
  __int16 v39; // [esp+5Ch] [ebp-1Ch]
  __int16 v40; // [esp+60h] [ebp-18h]
  __int16 v41; // [esp+64h] [ebp-14h]
  int v42; // [esp+68h] [ebp-10h]
  int v43; // [esp+74h] [ebp-4h]

  v42 = sub_47E420((_DWORD *)dword_791364);
  if ( word_791D80[v42] )
  {
    v27 = sub_4D2AA0(dword_791890);
    v3 = sub_62FBF0(v27);
    word_791798[v42] = (v3 - sub_62FBF0(v27)) / 2;
    sub_4C7C40(v28);
    v43 = 0;
    word_791D80[v42] = 0;
    sub_492430(v28, &v35, &v33, &v26, &v23, &v31, &v29, &v37, &v25, &v24);
    v39 = 0;
    v32 = sub_4D2EA0(dword_791890);
    v36 = sub_4D2EC0(dword_791890);
    v40 = sub_4D2EE0(dword_791890);
    v34 = sub_4D2F00(dword_791890);
    v39 += v35 / v32;
    switch ( v26 )
    {
      case 14:
        v39 += v36 + 9;
        break;
      case 13:
        v39 += v36 + 7;
        break;
      case 12:
        v39 += v36 + 3;
        break;
      default:
        if ( v26 <= 8 )
        {
          if ( v26 >= 2 )
            v39 += v36;
        }
        else
        {
          v39 += v36 + 1;
        }
        break;
    }
    if ( v23 == 13 )
    {
      v39 += v36 + 7;
    }
    else if ( v23 == 12 )
    {
      v39 += v36 + 3;
    }
    else if ( v23 <= 8 )
    {
      if ( v23 >= 2 )
        v39 += v36;
    }
    else
    {
      v39 += v36 + 1;
    }
    if ( v33 > 0 )
      v39 -= 5 * v33 * v33;
    switch ( v25 )
    {
      case 14:
        v39 += v40 + 9;
        break;
      case 13:
        v39 += v40 + 7;
        break;
      case 12:
        v39 += v40 + 3;
        break;
      default:
        if ( v25 >= 2 )
          v39 += v40 + 1;
        break;
    }
    switch ( v24 )
    {
      case 14:
        v39 += v40 + 9;
        break;
      case 13:
        v39 += v40 + 7;
        break;
      case 12:
        v39 += v40 + 3;
        break;
      default:
        if ( v24 >= 2 )
          v39 += v40 + 1;
        break;
    }
    if ( v37 > 0 )
      v39 -= v37 * v37;
    if ( v31 == 14 )
    {
      v39 += v34 + 4;
    }
    else if ( v31 == 13 )
    {
      v39 += v34 + 2;
    }
    if ( v29 == 13 )
    {
      v39 += v34 + 2;
    }
    else if ( v29 == 12 )
    {
      v39 += v34;
    }
    if ( v39 < 0 )
      v39 = 0;
    v30 = v39 / 5;
    v38 = v39 - a3 + 10;
    v41 = sub_4D22F0(dword_791890);
    for ( i = 0; i < v38; ++i )
    {
      v4 = v41;
      v5 = sub_4C6DB0(dword_791890);
      if ( v4 > sub_62FBF0(100 - v5) )
        ++v30;
    }
    if ( v30 < 12 || sub_62FBF0(2) )
    {
      if ( v30 < 10 || (int)sub_62FBF0(5) >= 2 )
      {
        if ( v30 < 8 || sub_62FBF0(3) )
        {
          if ( v30 < 5 )
            word_791768[v42] = 0;
          else
            word_791768[v42] = 2;
        }
        else
        {
          word_791768[v42] = 3;
        }
      }
      else
      {
        word_791768[v42] = 4;
      }
    }
    else
    {
      word_791768[v42] = 5;
    }
    v43 = -1;
    sub_484470(v28);
  }
  if ( word_791768[v42] )
  {
    switch ( word_791768[v42] )
    {
      case 5:
        v7 = sub_62FBF0(100);
        if ( v7 < (__int16)sub_4A4DE0(a1, 3) )
        {
          sub_4C79D0(3);
          v8 = sub_62FBF0(100);
          if ( v8 < (__int16)sub_4D2960(dword_791890) )
            word_791768[v42] = 4;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
      case 4:
        v9 = sub_62FBF0(100);
        if ( v9 < (__int16)sub_4A4DE0(a1, 2) )
        {
          sub_4C79D0(2);
          v10 = sub_62FBF0(100);
          if ( v10 < (__int16)sub_4D2960(dword_791890) )
            word_791768[v42] = 3;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
      case 3:
        v11 = sub_62FBF0(100);
        if ( v11 < (__int16)sub_4A4DE0(a1, 1) )
        {
          sub_4C79D0(1);
          v12 = sub_62FBF0(100);
          if ( v12 < (__int16)sub_4D2960(dword_791890) )
            word_791768[v42] = 2;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
      return 0;
    if ( sub_47D6B0((_DWORD *)dword_791364) != 1 )
      return 1;
  }
  if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 3;
  if ( sub_47D6B0((_DWORD *)dword_791364) != 1 )
    return 1;
  v21 = 0;
  for ( j = 0; j < sub_47F950(); ++j )
  {
    if ( j != v42 )
    {
      v13 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v13) == 1 )
      {
        v14 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v14);
        v21 += sub_4F69E0(ExecutingContext);
        v16 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
        v17 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v16);
        if ( (__int16)sub_4F6880(v17) > 0 )
        {
          v21 = 0;
          break;
        }
      }
    }
  }
  v18 = sub_4D29A0(dword_791890);
  if ( (__int16)sub_62FBF0(v18 + 1) * v21 + word_791798[v42] <= 10 )
    return 1;
  v19 = sub_62FBF0(3);
  sub_4C79D0(v19 + 1);
  return 2;
}


//======================================================================
// sub_4A4DE0
// entry 004a4de0  size 85  status ok
//======================================================================

__int16 __cdecl sub_4A4DE0(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4D2750(a2);
  if ( a1 == 5 && (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    v3 += (100 - v3) / 2;
  return v3;
}


//======================================================================
// sub_4A4E40
// entry 004a4e40  size 3136  status ok
//======================================================================

int __cdecl sub_4A4E40(int a1, int a2, _DWORD *a3)
{
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  __int16 ExecutingContext; // ax
  int v6; // esi
  int v7; // esi
  __int16 v8; // ax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  double v15; // st7
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // [esp-44h] [ebp-100h] BYREF
  __int16 v31; // [esp-40h] [ebp-FCh]
  _DWORD *v32; // [esp-3Ch] [ebp-F8h]
  _DWORD *v33; // [esp-38h] [ebp-F4h]
  _DWORD *v34; // [esp-34h] [ebp-F0h]
  _DWORD *v35; // [esp-30h] [ebp-ECh]
  _DWORD *v36; // [esp-2Ch] [ebp-E8h]
  _DWORD *v37; // [esp-28h] [ebp-E4h]
  _DWORD *v38; // [esp-24h] [ebp-E0h]
  _DWORD *v39; // [esp-20h] [ebp-DCh]
  _DWORD *v40; // [esp-1Ch] [ebp-D8h]
  _DWORD *v41; // [esp-18h] [ebp-D4h] BYREF
  _DWORD *v42; // [esp-14h] [ebp-D0h]
  int *v43; // [esp-10h] [ebp-CCh]
  int *v44; // [esp-Ch] [ebp-C8h]
  int *v45; // [esp-8h] [ebp-C4h]
  int v46; // [esp-4h] [ebp-C0h]
  int v47; // [esp+Ch] [ebp-B0h]
  int v48; // [esp+10h] [ebp-ACh]
  int v49; // [esp+14h] [ebp-A8h]
  int v50; // [esp+18h] [ebp-A4h]
  int v51; // [esp+1Ch] [ebp-A0h]
  int v52; // [esp+20h] [ebp-9Ch]
  int v53; // [esp+24h] [ebp-98h]
  int v54; // [esp+28h] [ebp-94h]
  int v55; // [esp+2Ch] [ebp-90h]
  int v56; // [esp+30h] [ebp-8Ch]
  int v57; // [esp+34h] [ebp-88h]
  double v58; // [esp+38h] [ebp-84h]
  int v59; // [esp+40h] [ebp-7Ch]
  double v60; // [esp+44h] [ebp-78h]
  HFONT Font; // [esp+4Ch] [ebp-70h]
  int v62; // [esp+50h] [ebp-6Ch]
  int v63; // [esp+54h] [ebp-68h]
  int v64; // [esp+58h] [ebp-64h]
  int v65; // [esp+5Ch] [ebp-60h]
  int *v66; // [esp+60h] [ebp-5Ch]
  _DWORD **v67; // [esp+64h] [ebp-58h]
  double v68; // [esp+68h] [ebp-54h]
  double v69; // [esp+70h] [ebp-4Ch]
  double v70; // [esp+78h] [ebp-44h]
  double v71; // [esp+80h] [ebp-3Ch]
  double v72; // [esp+88h] [ebp-34h]
  __int16 v73; // [esp+90h] [ebp-2Ch]
  __int16 j; // [esp+94h] [ebp-28h]
  __int16 i; // [esp+98h] [ebp-24h]
  __int16 v76; // [esp+9Ch] [ebp-20h]
  __int16 v77; // [esp+A0h] [ebp-1Ch]
  __int16 v78[4]; // [esp+A4h] [ebp-18h] BYREF
  int v79; // [esp+ACh] [ebp-10h]
  int v80; // [esp+B8h] [ebp-4h]

  v79 = sub_47E420((_DWORD *)dword_791364);
  if ( word_791D80[v79] == a1 )
  {
    if ( (_DWORD *)word_7919B8[v79] == a3 || word_791768[v79] == 6 || word_791768[v79] == 2 )
    {
      v46 = (int)a3;
      dbl_791D90[v79] = sub_4A5A80(a1, a2);
    }
    else
    {
      word_7919B8[v79] = (__int16)a3;
      v46 = (int)a3;
      dbl_791D90[v79] = sub_4A5A80(a1, a2);
      word_791768[v79] = 1;
    }
  }
  else
  {
    sub_4C7C40(v78);
    v80 = 0;
    if ( a1 >= 5 )
    {
      word_791798[v79] = 10;
    }
    else
    {
      v77 = 0;
      for ( i = 0; i < sub_47F950(); ++i )
      {
        if ( i != v79 )
        {
          v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
          {
            v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
            ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
            v77 += sub_4F6A90(ExecutingContext);
          }
        }
      }
      v76 = sub_4D2AA0(dword_791890);
      v6 = sub_62FBF0(v76);
      v7 = v6 - sub_62FBF0(v76);
      v8 = sub_4D2A60(dword_791890);
      word_791798[v79] = v7 - sub_62FBF0(v8 + 1) * v77;
    }
    v46 = 1;
    v45 = &dword_791460[6 * v79];
    v44 = &dword_7919D8[6 * v79];
    v43 = &dword_7915C8[6 * v79];
    v67 = &v41;
    v65 = sub_4C7C40(&v41);
    sub_491DF0(v78, (int)v41, (__int16)v42, v43, v44, v45, v46);
    v46 = 4 * v79 + 7935624;
    v45 = (int *)(4 * v79 + 7935400);
    v44 = (int *)(4 * v79 + 7935328);
    v43 = (int *)(4 * v79 + 7935008);
    v42 = (_DWORD *)(4 * v79 + 7937312);
    v41 = (_DWORD *)(4 * v79 + 7937552);
    v40 = (_DWORD *)(4 * v79 + 7935368);
    v39 = (_DWORD *)(4 * v79 + 7936112);
    v38 = (_DWORD *)(4 * v79 + 7936704);
    v37 = (_DWORD *)(4 * v79 + 7936072);
    v36 = (_DWORD *)(4 * v79 + 7936148);
    v35 = (_DWORD *)(4 * v79 + 7936180);
    v34 = (_DWORD *)(4 * v79 + 7935656);
    v33 = (_DWORD *)(4 * v79 + 7936212);
    v32 = (_DWORD *)(4 * v79 + 7936312);
    v66 = &v30;
    v64 = sub_4C7C40(&v30);
    sub_492CE0(v78, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, (_DWORD *)v46);
    word_791D80[v79] = a1;
    word_7919B8[v79] = (__int16)a3;
    if ( a1 == 3 )
    {
      v9 = sub_62FBF0(21);
      v10 = v9 + sub_62FBF0(21) + 60;
      v11 = sub_62FBF0(21) + v10;
      v63 = sub_62FBF0(21) + v11;
      dbl_791DD0[v79] = (double)v63 * 0.01;
      for ( j = 0; ; ++j )
      {
        v12 = j;
        if ( v12 >= sub_47F950() )
          break;
        v13 = sub_62FBF0(51);
        v14 = v13 + sub_62FBF0(51) + 25;
        v62 = sub_62FBF0(51) + v14;
        dbl_791AE0[8 * v79 + j] = (double)v62 * 0.01;
      }
    }
    v46 = (int)a3;
    v15 = sub_4A5A80(a1, a2);
    dbl_791D90[v79] = v15;
    word_791768[v79] = 1;
    if ( a1 == 5 && !dword_7915C8[6 * v79] )
      word_791768[v79] = 6;
    v80 = -1;
    sub_484470(v78);
  }
  if ( word_791768[v79] == 6 )
  {
    sub_4C79D0(3);
    if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    {
      if ( sub_4A39C0() || sub_62FBF0(20) )
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
  }
  if ( word_791768[v79] == 1 )
  {
    if ( (unsigned __int8)sub_4F6690(dword_791364 + 56) )
    {
      v71 = 1.92;
      Font = CMFCCaptionBar::OnGetFont((CMFCCaptionBar *)dword_791890);
      v60 = ((double)(int)Font / 100.0 + 1.0) * v71 * dbl_791D90[v79];
      v59 = sub_4F67D0(dword_791364 + 56);
      v58 = (double)v59;
      v57 = sub_4F6840(dword_791364 + 56);
      v72 = v60 / (v58 / (double)v57);
      v73 = ((_WORD)a3 - 1) * sub_4D2DF0(dword_791890);
      v17 = sub_62FBF0(v73);
      v18 = sub_62FBF0(v73) + v17;
      v56 = v18 - sub_62FBF0(v73);
      if ( (double)v56 / 10.0 + 1.0 >= v72 )
        return 0;
      if ( !(unsigned __int8)sub_4A63A0(a1, a3) )
      {
        v19 = sub_62FBF0(100);
        if ( v19 < (__int16)sub_4D22D0(dword_791890) )
          word_791768[v79] = 2;
        return 3;
      }
    }
    else if ( !(unsigned __int8)sub_4A63A0(a1, a3) )
    {
      return 1;
    }
  }
  switch ( word_791768[v79] )
  {
    case 5:
    case 12:
      if ( word_791768[v79] == 5 )
      {
        v20 = sub_47CE60((_DWORD *)dword_791364);
        v55 = sub_4C6EF0(a1 == 5, v20);
      }
      else
      {
        v55 = sub_4C6F50(dword_791890);
      }
      v54 = sub_62FBF0(100 - v55);
      v70 = (double)v54;
      v53 = sub_4A4DE0(a1, 3);
      if ( (double)v53 > v70 )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v79] == 12 )
        {
          return 0;
        }
        v21 = sub_62FBF0(100);
        if ( v21 >= (__int16)sub_4D2960(dword_791890) )
        {
          v22 = sub_62FBF0(100);
          if ( v22 < (__int16)sub_4D2980(dword_791890) )
            word_791768[v79] = 1;
        }
        else
        {
          word_791768[v79] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 11:
      if ( word_791768[v79] == 4 )
      {
        v23 = sub_47CE60((_DWORD *)dword_791364);
        v52 = sub_4C6EF0(a1 == 5, v23);
      }
      else
      {
        v52 = sub_4C6F50(dword_791890);
      }
      v51 = sub_62FBF0(100 - v52);
      v69 = (double)v51;
      v50 = sub_4A4DE0(a1, 2);
      if ( (double)v50 > v69 )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v79] == 11 )
        {
          return 0;
        }
        v24 = sub_62FBF0(100);
        if ( v24 >= (__int16)sub_4D2960(dword_791890) )
        {
          v25 = sub_62FBF0(100);
          if ( v25 < (__int16)sub_4D2980(dword_791890) )
            word_791768[v79] = 1;
        }
        else
        {
          word_791768[v79] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        if ( word_791768[v79] == 11 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 10:
      if ( word_791768[v79] == 3 )
      {
        v26 = sub_47CE60((_DWORD *)dword_791364);
        v49 = sub_4C6EF0(a1 == 5, v26);
      }
      else
      {
        v49 = sub_4C6F50(dword_791890);
      }
      v48 = sub_62FBF0(100 - v49);
      v68 = (double)v48;
      v47 = sub_4A4DE0(a1, 1);
      if ( (double)v47 > v68 )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v79] == 10 )
        {
          return 0;
        }
        v27 = sub_62FBF0(100);
        if ( v27 >= (__int16)sub_4D2960(dword_791890) )
        {
          v28 = sub_62FBF0(100);
          if ( v28 < (__int16)sub_4D2980(dword_791890) )
            word_791768[v79] = 1;
        }
        else
        {
          word_791768[v79] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        if ( word_791768[v79] == 10 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_115;
  switch ( word_791768[v79] )
  {
    case 12:
      return 0;
    case 11:
      return 0;
    case 10:
      return 0;
  }
LABEL_115:
  v29 = sub_62FBF0(100);
  if ( v29 < (__int16)sub_4D2980(dword_791890) )
    word_791768[v79] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_4A5A80
// entry 004a5a80  size 2328  status ok
//======================================================================

double __cdecl sub_4A5A80(int a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  double v4; // st7
  double v6; // [esp+28h] [ebp-11Ch]
  double v7; // [esp+34h] [ebp-110h]
  double v8; // [esp+40h] [ebp-104h]
  double v9; // [esp+4Ch] [ebp-F8h]
  __int16 j; // [esp+58h] [ebp-ECh]
  __int16 v11; // [esp+5Ch] [ebp-E8h]
  __int16 v12; // [esp+60h] [ebp-E4h]
  __int16 v13; // [esp+64h] [ebp-E0h]
  __int16 ExecutingContext; // [esp+68h] [ebp-DCh]
  __int16 v15; // [esp+6Ch] [ebp-D8h]
  char v16; // [esp+73h] [ebp-D1h]
  double v17; // [esp+74h] [ebp-D0h]
  __int16 i; // [esp+88h] [ebp-BCh]
  double v19; // [esp+8Ch] [ebp-B8h]
  double v20; // [esp+94h] [ebp-B0h]
  __int16 v21; // [esp+A8h] [ebp-9Ch]
  double v22; // [esp+ACh] [ebp-98h]
  double v23; // [esp+B4h] [ebp-90h]
  int v24; // [esp+C0h] [ebp-84h]
  double v25; // [esp+C4h] [ebp-80h]
  double v26; // [esp+CCh] [ebp-78h]
  double v27; // [esp+D4h] [ebp-70h]
  double v28; // [esp+DCh] [ebp-68h]
  double v29; // [esp+E4h] [ebp-60h]
  double v30; // [esp+ECh] [ebp-58h]
  int v31; // [esp+F8h] [ebp-4Ch]
  double v32; // [esp+FCh] [ebp-48h]
  double v33; // [esp+104h] [ebp-40h]
  double v34; // [esp+10Ch] [ebp-38h]
  double v35; // [esp+114h] [ebp-30h]
  double v36; // [esp+11Ch] [ebp-28h]
  double v37; // [esp+124h] [ebp-20h]
  double v38; // [esp+12Ch] [ebp-18h]
  double v39; // [esp+134h] [ebp-10h]
  double v40; // [esp+13Ch] [ebp-8h]

  v24 = sub_47E420((_DWORD *)dword_791364);
  v34 = 1.0;
  v35 = sub_4D23E0(dword_791890) / (double)a2;
  v21 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v24 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v17 = 0.0;
        if ( sub_4D2100(i, a2) * dbl_791AE0[8 * v24 + i] <= v35 )
        {
          ++v21;
          v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
          v12 = sub_4F6880(ExecutingContext);
          v13 = sub_4F6930(ExecutingContext);
          v11 = sub_4F6A90(ExecutingContext) - v12;
          v15 = sub_4F6B20(ExecutingContext) - v13;
          if ( v12 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 875);
          if ( v13 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 876);
          if ( v11 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 877);
          if ( v15 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 878);
          v16 = 0;
          v8 = sub_4D2410(dword_791890) * (double)v11 + 1.0;
          v7 = sub_4D24E0(dword_791890) * (double)v15 + v8;
          v6 = sub_4D25B0(dword_791890) * (double)v12 + v7;
          v17 = sub_4D2680(dword_791890) * (double)v13 + v6;
        }
        else
        {
          v16 = 1;
        }
        for ( j = 0; j < 6; ++j )
        {
          v9 = (double)(dword_791460[6 * v24] + dword_7919D8[6 * v24] + dword_7915C8[6 * v24]);
          if ( v16 )
            v4 = (1.0 - (double)dword_7915C8[6 * v24] / v9 - (double)dword_7919D8[6 * v24] / v9 * 0.25) * v34;
          else
            v4 = (1.0 - (double)dword_7915C8[6 * v24] / v9 * v17 - v17 * 0.25 * ((double)dword_7919D8[6 * v24] / v9))
               * v34;
          v34 = v4;
          if ( v4 < 0.0 )
            v34 = 0.0;
        }
      }
    }
  }
  v31 = dword_791AC0[v24] + dword_791848[v24] + dword_791894[v24] + dword_7918B4[v24];
  v36 = 1.0 - (double)dword_791938[v24] / (double)v31;
  v39 = 0.0;
  if ( dword_7918D4[v24] > 0 )
    v39 = (double)dword_7918D4[v24] / (double)(dword_7916A8[v24] + dword_7918D4[v24]);
  v30 = 1.0 - (double)dword_7918B4[v24] / (double)v31;
  v23 = 0.0;
  if ( dword_791894[v24] > 0 )
    v23 = (double)dword_791894[v24]
        / ((double)dword_791894[v24] + (double)dword_791848[v24] + (double)dword_791AC0[v24]);
  v37 = 0.0;
  if ( dword_791848[v24] > 0 )
    v37 = (double)dword_791848[v24]
        / ((double)dword_791894[v24] + (double)dword_791848[v24] + (double)dword_791AC0[v24]);
  v20 = 1.0 - (double)dword_791870[v24] / (double)v31;
  v25 = 0.0;
  if ( dword_791588[v24] > 0 )
    v25 = (double)dword_791588[v24]
        / ((double)dword_791588[v24] + (double)dword_791E10[v24] + (double)dword_791D20[v24]);
  v26 = 0.0;
  if ( dword_791E10[v24] > 0 )
    v26 = (double)dword_791E10[v24]
        / ((double)dword_791588[v24] + (double)dword_791E10[v24] + (double)dword_791D20[v24]);
  v22 = 1.0 - (double)dword_791420[v24] / (double)v31;
  v29 = 0.0;
  if ( dword_791560[v24] > 0 )
    v29 = (double)dword_791560[v24]
        / ((double)dword_791560[v24] + (double)dword_7915A8[v24] + (double)dword_791688[v24]);
  v19 = 0.0;
  if ( dword_7915A8[v24] > 0 )
    v19 = (double)dword_7915A8[v24]
        / ((double)dword_791560[v24] + (double)dword_7915A8[v24] + (double)dword_791688[v24]);
  v32 = (double)(__int16)sub_4D2F40(dword_791890) / 100.0;
  v33 = (double)(__int16)sub_4D2F60(dword_791890) / 100.0;
  v28 = v33 / (double)(v21 + 1);
  if ( 1.0 - v33 < v30 )
    v30 = v30 - v28;
  if ( 1.0 - v33 < v20 )
    v20 = v20 - v28;
  if ( 1.0 - v33 < v22 )
    v22 = v22 - v28;
  v40 = (double)(__int16)sub_4D2F20(dword_791890) / 100.0 * (double)(v21 + 6 - a1);
  v27 = v32 / (double)(v21 + 1);
  v38 = ((v36 * v39
        + (1.0 - v36) * v30 * v23
        + (1.0 - v36) * (1.0 - v30) * v20 * v25
        + (1.0 - v36) * (1.0 - v30) * (1.0 - v20) * v22 * v29
        + (1.0 - v36) * v27 * v30 * v37
        + (1.0 - v36) * v27 * (1.0 - v30) * v20 * v26
        + (1.0 - v36) * v27 * (1.0 - v30) * (1.0 - v20) * v22 * v19
        + (1.0 - v36) * (1.0 - v30) * (1.0 - v20) * (1.0 - v22) * v34)
       * v40
       + (1.0 - v40) * v34)
      * dbl_791DD0[v24];
  if ( v38 > 100.0 )
    v38 = 100.0;
  if ( v38 < 0.0 )
    return 0.0;
  return v38;
}


//======================================================================
// sub_4A63A0
// entry 004a63a0  size 948  status ok
//======================================================================

char __cdecl sub_4A63A0(int a1, int a2)
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

  v16 = sub_47E420((_DWORD *)dword_791364);
  v17 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
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
  v7 = sub_4D29A0(dword_791890);
  v19 = 5 * sub_62FBF0(v7 + 1);
  if ( v19 * v17 + word_791798[v16] <= 10 )
    v8 = dbl_791D90[v16];
  else
    v8 = (double)(word_791798[v16] + v19 * v17 - 10) / 100.0 + dbl_791D90[v16];
  v15 = sub_4D2AE0(3);
  v20 = sub_4D2AE0(2);
  v18 = sub_4D2AE0(1);
  v22 = sub_4D2DD0(dword_791890);
  v13 = (double)(int)sub_62FBF0(v22) / 100.0 + 1.0;
  v21 = (v13 - (double)(int)sub_62FBF0(v22) / 100.0) / (double)a2;
  v9 = sub_47CE60((_DWORD *)dword_791364);
  if ( (double)(v15 - sub_4C6F90(a1 == 5, v9)) / 100.0 + v21 >= dbl_791D90[v16] )
  {
    v11 = sub_47CE60((_DWORD *)dword_791364);
    if ( (double)(v20 - sub_4C6F90(a1 == 5, v11)) / 100.0 + v21 >= dbl_791D90[v16] )
    {
      v12 = sub_47CE60((_DWORD *)dword_791364);
      if ( (double)(v18 - sub_4C6F90(a1 == 5, v12)) / 100.0 + v21 >= dbl_791D90[v16] )
      {
        if ( (double)(v15 - sub_4C6FD0(dword_791890)) / 100.0 + v21 >= v8 )
        {
          if ( (double)(v20 - sub_4C6FD0(dword_791890)) / 100.0 + v21 >= v8 )
          {
            if ( (double)(v18 - sub_4C6FD0(dword_791890)) / 100.0 + v21 >= v8 )
            {
              return 0;
            }
            else
            {
              word_791768[v16] = 10;
              return 1;
            }
          }
          else
          {
            word_791768[v16] = 11;
            return 1;
          }
        }
        else
        {
          word_791768[v16] = 12;
          return 1;
        }
      }
      else
      {
        word_791768[v16] = 3;
        return 1;
      }
    }
    else
    {
      word_791768[v16] = 4;
      return 1;
    }
  }
  else
  {
    word_791768[v16] = 5;
    return 1;
  }
}


//======================================================================
// sub_4A6760
// entry 004a6760  size 162  status ok
//======================================================================

int __cdecl sub_4A6760(int a1, int a2, int a3)
{
  int v3; // esi

  if ( sub_47E420((_DWORD *)dword_791364) < 0 )
    sub_5E9F20((char)"pokerGame->GetCurrentPlayer() >= 0", "..\\Casino\\PokerHoldemAI.cpp", 2728);
  v3 = sub_47E420((_DWORD *)dword_791364);
  if ( v3 >= sub_47F950() )
    sub_5E9F20(
      (char)"pokerGame->GetCurrentPlayer() < pokerGame->GetNumberOfPlayersAtTable()",
      "..\\Casino\\PokerHoldemAI.cpp",
      2729);
  dword_791890 = sub_47E3B0((void *)dword_791364);
  if ( a1 )
    return sub_4A72B0(a1, a2, a3);
  else
    return sub_4A6810(0, a2, a3);
}


//======================================================================
// sub_4A6810
// entry 004a6810  size 2621  status ok
//======================================================================

int __cdecl sub_4A6810(int a1, int a2, __int16 a3)
{
  int v3; // esi
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // dx
  __int16 v8; // ax
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // esi
  int v13; // eax
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  Concurrency::details::SchedulerProxy *v21; // eax
  Concurrency::details::VirtualProcessor *v22; // eax
  __int16 ExecutingContext; // ax
  Concurrency::details::VirtualProcessor *v24; // eax
  __int16 v25; // ax
  __int16 v26; // ax
  __int16 v27; // ax
  __int16 j; // [esp+8h] [ebp-80h]
  __int16 v29; // [esp+Ch] [ebp-7Ch]
  __int16 i; // [esp+14h] [ebp-74h]
  __int16 v31; // [esp+18h] [ebp-70h] BYREF
  __int16 v32; // [esp+1Ch] [ebp-6Ch] BYREF
  __int16 v33; // [esp+20h] [ebp-68h] BYREF
  __int16 v34; // [esp+24h] [ebp-64h] BYREF
  __int16 v35; // [esp+28h] [ebp-60h] BYREF
  __int16 v36; // [esp+2Ch] [ebp-5Ch] BYREF
  __int16 v37; // [esp+30h] [ebp-58h] BYREF
  __int16 v38; // [esp+34h] [ebp-54h]
  __int16 v39; // [esp+38h] [ebp-50h]
  __int16 v40[4]; // [esp+3Ch] [ebp-4Ch] BYREF
  __int16 v41; // [esp+44h] [ebp-44h] BYREF
  __int16 v42; // [esp+48h] [ebp-40h]
  __int16 v43; // [esp+4Ch] [ebp-3Ch] BYREF
  __int16 v44; // [esp+50h] [ebp-38h]
  __int16 v45; // [esp+54h] [ebp-34h] BYREF
  __int16 v46; // [esp+58h] [ebp-30h]
  __int16 v47; // [esp+5Ch] [ebp-2Ch] BYREF
  __int16 v48; // [esp+60h] [ebp-28h]
  __int16 v49; // [esp+64h] [ebp-24h] BYREF
  __int16 v50; // [esp+68h] [ebp-20h]
  __int16 v51; // [esp+6Ch] [ebp-1Ch]
  __int16 v52; // [esp+70h] [ebp-18h]
  __int16 v53; // [esp+74h] [ebp-14h]
  int v54; // [esp+78h] [ebp-10h]
  int v55; // [esp+84h] [ebp-4h]

  v54 = sub_47E420((_DWORD *)dword_791364);
  if ( word_791D80[v54] )
  {
    v39 = sub_4D56D0(dword_791890);
    v3 = sub_62FBF0(v39);
    word_791798[v54] = (v3 - sub_62FBF0(v39)) / 2;
    sub_4C7C40(v40);
    v55 = 0;
    word_791D80[v54] = 0;
    sub_494B20(v40, &v47, &v45, &v37, &v31, &v43, &v41, &v49, &v34, &v32, &v33, &v35, &v36);
    v51 = 0;
    v44 = sub_4D5AD0(dword_791890);
    v48 = sub_4D5AF0(dword_791890);
    v52 = sub_4D5B10(dword_791890);
    v46 = sub_4D5B30(dword_791890);
    v51 += v47 / v44;
    switch ( v37 )
    {
      case 14:
        v51 += v48 + 9;
        break;
      case 13:
        v51 += v48 + 7;
        break;
      case 12:
        v51 += v48 + 3;
        break;
      default:
        if ( v37 <= 8 )
        {
          if ( v37 >= 2 )
            v51 += v48;
        }
        else
        {
          v51 += v48 + 1;
        }
        break;
    }
    if ( v31 == 13 )
    {
      v51 += v48 + 7;
    }
    else if ( v31 == 12 )
    {
      v51 += v48 + 3;
    }
    else if ( v31 <= 8 )
    {
      if ( v31 >= 2 )
        v51 += v48;
    }
    else
    {
      v51 += v48 + 1;
    }
    if ( v45 > 0 )
      v51 -= 5 * v45 * v45;
    switch ( v34 )
    {
      case 14:
        v51 += v52 + 9;
        break;
      case 13:
        v51 += v52 + 7;
        break;
      case 12:
        v51 += v52 + 3;
        break;
      default:
        if ( v34 >= 2 )
          v51 += v52 + 1;
        break;
    }
    switch ( v32 )
    {
      case 14:
        v51 += v52 + 9;
        break;
      case 13:
        v51 += v52 + 7;
        break;
      case 12:
        v51 += v52 + 3;
        break;
      default:
        if ( v32 >= 2 )
          v51 += v52 + 1;
        break;
    }
    if ( v49 > 0 )
      v51 -= v49 * v49;
    if ( v43 == 14 )
    {
      v51 += v46 + 4;
    }
    else if ( v43 == 13 )
    {
      v51 += v46 + 2;
    }
    if ( v41 == 13 )
    {
      v51 += v46 + 2;
    }
    else if ( v41 == 12 )
    {
      v51 += v46;
    }
    if ( v51 < 0 )
      v51 = 0;
    v38 = 0;
    if ( v33 == 2 )
    {
      v4 = sub_4D5B50(dword_791890);
      v38 += v4 + 3;
    }
    else if ( v33 == 3 )
    {
      v5 = sub_4D5B50(dword_791890);
      v38 += v5 + 6;
    }
    switch ( v35 )
    {
      case 1:
        v6 = sub_4D5B50(dword_791890);
        v38 += v6 + 8;
        break;
      case 2:
        v7 = sub_4D5B50(dword_791890);
        v38 += v7 + 4;
        break;
      case 3:
        v8 = sub_4D5B50(dword_791890);
        v38 += v8;
        break;
    }
    switch ( v36 )
    {
      case 2:
        v9 = sub_4D5B50(dword_791890);
        v38 += v9 + 8;
        break;
      case 3:
        v10 = sub_4D5B50(dword_791890);
        v38 += v10 + 4;
        break;
      case 4:
        v11 = sub_4D5B50(dword_791890);
        v38 += v11;
        break;
    }
    v42 = (v38 + 2 * v51) / 15;
    v50 = (v38 + 2 * v51) / 3 - a3 + 10;
    v53 = sub_4D4F20(dword_791890);
    for ( i = 0; i < v50; ++i )
    {
      v12 = v53;
      v13 = sub_4C6DB0(dword_791890);
      if ( v12 > sub_62FBF0(100 - v13) )
        ++v42;
    }
    if ( v42 < 12 || sub_62FBF0(2) )
    {
      if ( v42 < 10 || (int)sub_62FBF0(5) >= 2 )
      {
        if ( v42 < 8 || sub_62FBF0(3) )
        {
          if ( v42 < 5 )
            word_791768[v54] = 0;
          else
            word_791768[v54] = 2;
        }
        else
        {
          word_791768[v54] = 3;
        }
      }
      else
      {
        word_791768[v54] = 4;
      }
    }
    else
    {
      word_791768[v54] = 5;
    }
    v55 = -1;
    sub_484470(v40);
  }
  if ( word_791768[v54] )
  {
    switch ( word_791768[v54] )
    {
      case 5:
        v15 = sub_62FBF0(100);
        if ( v15 < (__int16)sub_4A7250(a1, 3) )
        {
          sub_4C79D0(3);
          v16 = sub_62FBF0(100);
          if ( v16 < (__int16)sub_4D5590(dword_791890) )
            word_791768[v54] = 4;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
      case 4:
        v17 = sub_62FBF0(100);
        if ( v17 < (__int16)sub_4A7250(a1, 2) )
        {
          sub_4C79D0(2);
          v18 = sub_62FBF0(100);
          if ( v18 < (__int16)sub_4D5590(dword_791890) )
            word_791768[v54] = 3;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
      case 3:
        v19 = sub_62FBF0(100);
        if ( v19 < (__int16)sub_4A7250(a1, 1) )
        {
          sub_4C79D0(1);
          v20 = sub_62FBF0(100);
          if ( v20 < (__int16)sub_4D5590(dword_791890) )
            word_791768[v54] = 2;
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 2;
          if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
            return 4;
          return 3;
        }
        break;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
      return 0;
    if ( sub_47D6B0((_DWORD *)dword_791364) != 1 )
      return 1;
  }
  if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 3;
  if ( sub_47D6B0((_DWORD *)dword_791364) != 1 )
    return 1;
  v29 = 0;
  for ( j = 0; j < sub_47F950(); ++j )
  {
    if ( j != v54 )
    {
      v21 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v21) == 1 )
      {
        v22 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v22);
        v29 += sub_4F69E0(ExecutingContext);
        v24 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
        v25 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v24);
        if ( (__int16)sub_4F6880(v25) > 0 )
        {
          v29 = 0;
          break;
        }
      }
    }
  }
  v26 = sub_4D55D0(dword_791890);
  if ( (__int16)sub_62FBF0(v26 + 1) * v29 + word_791798[v54] <= 10 )
    return 1;
  v27 = sub_62FBF0(3);
  sub_4C79D0(v27 + 1);
  return 2;
}


//======================================================================
// sub_4A7250
// entry 004a7250  size 85  status ok
//======================================================================

__int16 __cdecl sub_4A7250(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4D5380(a2);
  if ( a1 == 5 && (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    v3 += (100 - v3) / 2;
  return v3;
}


//======================================================================
// sub_4A72B0
// entry 004a72b0  size 3352  status ok
//======================================================================

int __cdecl sub_4A72B0(int a1, int a2, unsigned __int8 *a3)
{
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  __int16 ExecutingContext; // ax
  int v6; // esi
  int v7; // esi
  __int16 v8; // ax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  double v15; // st7
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // [esp-54h] [ebp-118h] BYREF
  __int16 v31; // [esp-50h] [ebp-114h]
  _DWORD *v32; // [esp-4Ch] [ebp-110h]
  _DWORD *v33; // [esp-48h] [ebp-10Ch]
  _DWORD *v34; // [esp-44h] [ebp-108h]
  _DWORD *v35; // [esp-40h] [ebp-104h]
  _DWORD *v36; // [esp-3Ch] [ebp-100h]
  _DWORD *v37; // [esp-38h] [ebp-FCh]
  _DWORD *v38; // [esp-34h] [ebp-F8h]
  _DWORD *v39; // [esp-30h] [ebp-F4h]
  _DWORD *v40; // [esp-2Ch] [ebp-F0h]
  _DWORD *v41; // [esp-28h] [ebp-ECh]
  _DWORD *v42; // [esp-24h] [ebp-E8h]
  _DWORD *v43; // [esp-20h] [ebp-E4h]
  _DWORD *v44; // [esp-1Ch] [ebp-E0h]
  _DWORD *v45; // [esp-18h] [ebp-DCh] BYREF
  _DWORD *v46; // [esp-14h] [ebp-D8h]
  int *v47; // [esp-10h] [ebp-D4h]
  int *v48; // [esp-Ch] [ebp-D0h]
  int *v49; // [esp-8h] [ebp-CCh]
  int v50; // [esp-4h] [ebp-C8h]
  int v51; // [esp+Ch] [ebp-B8h]
  int v52; // [esp+10h] [ebp-B4h]
  int v53; // [esp+14h] [ebp-B0h]
  int v54; // [esp+18h] [ebp-ACh]
  int v55; // [esp+1Ch] [ebp-A8h]
  int v56; // [esp+20h] [ebp-A4h]
  int v57; // [esp+24h] [ebp-A0h]
  int v58; // [esp+28h] [ebp-9Ch]
  int v59; // [esp+2Ch] [ebp-98h]
  int v60; // [esp+30h] [ebp-94h]
  int v61; // [esp+34h] [ebp-90h]
  double v62; // [esp+38h] [ebp-8Ch]
  int v63; // [esp+40h] [ebp-84h]
  double v64; // [esp+44h] [ebp-80h]
  HFONT Font; // [esp+4Ch] [ebp-78h]
  int v66; // [esp+50h] [ebp-74h]
  int v67; // [esp+54h] [ebp-70h]
  int v68; // [esp+58h] [ebp-6Ch]
  int v69; // [esp+5Ch] [ebp-68h]
  int v70; // [esp+60h] [ebp-64h]
  int *v71; // [esp+64h] [ebp-60h]
  _DWORD **v72; // [esp+68h] [ebp-5Ch]
  _DWORD **v73; // [esp+6Ch] [ebp-58h]
  double v74; // [esp+70h] [ebp-54h]
  double v75; // [esp+78h] [ebp-4Ch]
  double v76; // [esp+80h] [ebp-44h]
  double v77; // [esp+88h] [ebp-3Ch]
  double v78; // [esp+90h] [ebp-34h]
  __int16 v79; // [esp+98h] [ebp-2Ch]
  __int16 j; // [esp+9Ch] [ebp-28h]
  __int16 i; // [esp+A0h] [ebp-24h]
  __int16 v82; // [esp+A4h] [ebp-20h]
  __int16 v83; // [esp+A8h] [ebp-1Ch]
  __int16 v84[4]; // [esp+ACh] [ebp-18h] BYREF
  int v85; // [esp+B4h] [ebp-10h]
  int v86; // [esp+C0h] [ebp-4h]

  v85 = sub_47E420((_DWORD *)dword_791364);
  if ( word_791D80[v85] == a1 )
  {
    if ( (unsigned __int8 *)word_7919B8[v85] == a3 || word_791768[v85] == 6 || word_791768[v85] == 2 )
    {
      v50 = (int)a3;
      dbl_791D90[v85] = sub_4A7FD0(a1, a2);
    }
    else
    {
      word_7919B8[v85] = (__int16)a3;
      v50 = (int)a3;
      dbl_791D90[v85] = sub_4A7FD0(a1, a2);
      word_791768[v85] = 1;
    }
  }
  else
  {
    sub_4C7C40(v84);
    v86 = 0;
    if ( a1 >= 5 )
    {
      word_791798[v85] = 10;
    }
    else
    {
      v83 = 0;
      for ( i = 0; i < sub_47F950(); ++i )
      {
        if ( i != v85 )
        {
          v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
          {
            v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
            ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
            v83 += sub_4F6A90(ExecutingContext);
          }
        }
      }
      v82 = sub_4D56D0(dword_791890);
      v6 = sub_62FBF0(v82);
      v7 = v6 - sub_62FBF0(v82);
      v8 = sub_4D5690(dword_791890);
      word_791798[v85] = v7 - sub_62FBF0(v8 + 1) * v83;
    }
    v50 = 1;
    v49 = &dword_791460[6 * v85];
    v48 = &dword_7919D8[6 * v85];
    v47 = &dword_7915C8[6 * v85];
    v73 = &v45;
    v70 = sub_4C7C40(&v45);
    sub_491DF0(v84, (int)v45, (__int16)v46, v47, v48, v49, v50);
    v50 = 0;
    v49 = &dword_791464[6 * v85];
    v48 = &dword_7919DC[6 * v85];
    v47 = &dword_7915CC[6 * v85];
    v72 = &v45;
    v69 = sub_4C7C40(&v45);
    sub_491DF0(v84, (int)v45, (__int16)v46, v47, v48, v49, v50);
    v50 = 4 * v85 + 7935624;
    v49 = (int *)(4 * v85 + 7935400);
    v48 = (int *)(4 * v85 + 7935328);
    v47 = (int *)(4 * v85 + 7935008);
    v46 = (_DWORD *)(4 * v85 + 7937312);
    v45 = (_DWORD *)(4 * v85 + 7937552);
    v44 = (_DWORD *)(4 * v85 + 7935368);
    v43 = (_DWORD *)(4 * v85 + 7936112);
    v42 = (_DWORD *)(4 * v85 + 7936704);
    v41 = (_DWORD *)(4 * v85 + 7936072);
    v40 = (_DWORD *)(4 * v85 + 7936148);
    v39 = (_DWORD *)(4 * v85 + 7936180);
    v38 = (_DWORD *)(4 * v85 + 7935656);
    v37 = (_DWORD *)(4 * v85 + 7936212);
    v36 = (_DWORD *)(4 * v85 + 7936312);
    v35 = (_DWORD *)(4 * v85 + 7935864);
    v34 = (_DWORD *)(4 * v85 + 7937248);
    v33 = (_DWORD *)(4 * v85 + 7935688);
    v32 = (_DWORD *)(4 * v85 + 7936408);
    v71 = &v30;
    v68 = sub_4C7C40(&v30);
    sub_494D50(
      v84,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      (unsigned __int8 *)v50);
    word_791D80[v85] = a1;
    word_7919B8[v85] = (__int16)a3;
    if ( a1 == 3 )
    {
      v9 = sub_62FBF0(21);
      v10 = v9 + sub_62FBF0(21) + 60;
      v11 = sub_62FBF0(21) + v10;
      v67 = sub_62FBF0(21) + v11;
      dbl_791DD0[v85] = (double)v67 * 0.01;
      for ( j = 0; ; ++j )
      {
        v12 = j;
        if ( v12 >= sub_47F950() )
          break;
        v13 = sub_62FBF0(51);
        v14 = v13 + sub_62FBF0(51) + 25;
        v66 = sub_62FBF0(51) + v14;
        dbl_791AE0[8 * v85 + j] = (double)v66 * 0.01;
      }
    }
    v50 = (int)a3;
    v15 = sub_4A7FD0(a1, a2);
    dbl_791D90[v85] = v15;
    word_791768[v85] = 1;
    if ( a1 == 5 )
    {
      if ( !(dword_7915CC[6 * v85] + dword_7915C8[6 * v85]) )
        word_791768[v85] = 6;
      if ( !(dword_7919D8[6 * v85] + dword_7915C8[6 * v85]) )
        word_791768[v85] = 6;
      if ( !(dword_7919DC[6 * v85] + dword_7915CC[6 * v85]) )
        word_791768[v85] = 6;
    }
    v86 = -1;
    sub_484470(v84);
  }
  if ( word_791768[v85] == 6 )
  {
    sub_4C79D0(3);
    if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    {
      if ( sub_4A39C0() || sub_62FBF0(20) )
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
  }
  if ( word_791768[v85] == 1 )
  {
    if ( (unsigned __int8)sub_4F6690(dword_791364 + 56) )
    {
      v77 = 1.92;
      Font = CMFCCaptionBar::OnGetFont((CMFCCaptionBar *)dword_791890);
      v64 = ((double)(int)Font / 100.0 + dbl_791D90[v85]) * dbl_791D90[v85] * v77;
      v63 = sub_4F67D0(dword_791364 + 56);
      v62 = (double)v63;
      v61 = sub_4F6840(dword_791364 + 56);
      v78 = v64 / (v62 / (double)v61);
      v79 = ((_WORD)a3 - 1) * sub_4D5A20(dword_791890);
      v17 = sub_62FBF0(v79);
      v18 = sub_62FBF0(v79) + v17;
      v60 = v18 - sub_62FBF0(v79);
      if ( (double)v60 / 10.0 + 1.0 >= v78 )
        return 0;
      if ( !sub_4A63A0(a1, (int)a3) )
      {
        v19 = sub_62FBF0(100);
        if ( v19 < (__int16)sub_4D4F00(dword_791890) )
          word_791768[v85] = 2;
        return 3;
      }
    }
    else if ( !sub_4A63A0(a1, (int)a3) )
    {
      return 1;
    }
  }
  switch ( word_791768[v85] )
  {
    case 5:
    case 12:
      if ( word_791768[v85] == 5 )
      {
        v20 = sub_47CE60((_DWORD *)dword_791364);
        v59 = sub_4C6EF0(a1 == 5, v20);
      }
      else
      {
        v59 = sub_4C6F50(dword_791890);
      }
      v58 = sub_62FBF0(100 - v59);
      v76 = (double)v58;
      v57 = sub_4A7250(a1, 3);
      if ( (double)v57 > v76 )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v85] == 12 )
        {
          return 0;
        }
        v21 = sub_62FBF0(100);
        if ( v21 >= (__int16)sub_4D5590(dword_791890) )
        {
          v22 = sub_62FBF0(100);
          if ( v22 < (__int16)sub_4D55B0(dword_791890) )
            word_791768[v85] = 1;
        }
        else
        {
          word_791768[v85] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 11:
      if ( word_791768[v85] == 4 )
      {
        v23 = sub_47CE60((_DWORD *)dword_791364);
        v56 = sub_4C6EF0(a1 == 5, v23);
      }
      else
      {
        v56 = sub_4C6F50(dword_791890);
      }
      v55 = sub_62FBF0(100 - v56);
      v75 = (double)v55;
      v54 = sub_4A7250(a1, 2);
      if ( (double)v54 > v75 )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v85] == 11 )
        {
          return 0;
        }
        v24 = sub_62FBF0(100);
        if ( v24 >= (__int16)sub_4D5590(dword_791890) )
        {
          v25 = sub_62FBF0(100);
          if ( v25 < (__int16)sub_4D55B0(dword_791890) )
            word_791768[v85] = 1;
        }
        else
        {
          word_791768[v85] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        if ( word_791768[v85] == 11 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 10:
      if ( word_791768[v85] == 3 )
      {
        v26 = sub_47CE60((_DWORD *)dword_791364);
        v53 = sub_4C6EF0(a1 == 5, v26);
      }
      else
      {
        v53 = sub_4C6F50(dword_791890);
      }
      v52 = sub_62FBF0(100 - v53);
      v74 = (double)v52;
      v51 = sub_4A7250(a1, 1);
      if ( (double)v51 > v74 )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v85] == 10 )
        {
          return 0;
        }
        v27 = sub_62FBF0(100);
        if ( v27 >= (__int16)sub_4D5590(dword_791890) )
        {
          v28 = sub_62FBF0(100);
          if ( v28 < (__int16)sub_4D55B0(dword_791890) )
            word_791768[v85] = 1;
        }
        else
        {
          word_791768[v85] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
          return 4;
        if ( word_791768[v85] == 10 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_119;
  switch ( word_791768[v85] )
  {
    case 12:
      return 0;
    case 11:
      return 0;
    case 10:
      return 0;
  }
LABEL_119:
  v29 = sub_62FBF0(100);
  if ( v29 < (__int16)sub_4D55B0(dword_791890) )
    word_791768[v85] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_4A7FD0
// entry 004a7fd0  size 3040  status ok
//======================================================================

double __cdecl sub_4A7FD0(int a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  double v4; // st7
  double v6; // [esp+3Ch] [ebp-130h]
  double v7; // [esp+48h] [ebp-124h]
  double v8; // [esp+54h] [ebp-118h]
  __int16 j; // [esp+60h] [ebp-10Ch]
  __int16 v10; // [esp+64h] [ebp-108h]
  __int16 v11; // [esp+68h] [ebp-104h]
  __int16 v12; // [esp+6Ch] [ebp-100h]
  __int16 ExecutingContext; // [esp+70h] [ebp-FCh]
  __int16 v14; // [esp+74h] [ebp-F8h]
  char v15; // [esp+7Bh] [ebp-F1h]
  double v16; // [esp+7Ch] [ebp-F0h]
  __int16 i; // [esp+90h] [ebp-DCh]
  double v18; // [esp+94h] [ebp-D8h]
  double v19; // [esp+9Ch] [ebp-D0h]
  double v20; // [esp+A4h] [ebp-C8h]
  double v21; // [esp+ACh] [ebp-C0h]
  double v22; // [esp+ACh] [ebp-C0h]
  __int16 v23; // [esp+B8h] [ebp-B4h]
  double v24; // [esp+BCh] [ebp-B0h]
  double v25; // [esp+C4h] [ebp-A8h]
  double v26; // [esp+CCh] [ebp-A0h]
  int v27; // [esp+D8h] [ebp-94h]
  double v28; // [esp+DCh] [ebp-90h]
  double v29; // [esp+E4h] [ebp-88h]
  double v30; // [esp+ECh] [ebp-80h]
  double v31; // [esp+F4h] [ebp-78h]
  double v32; // [esp+FCh] [ebp-70h]
  double v33; // [esp+104h] [ebp-68h]
  int v34; // [esp+110h] [ebp-5Ch]
  double v35; // [esp+114h] [ebp-58h]
  double v36; // [esp+11Ch] [ebp-50h]
  double v37; // [esp+124h] [ebp-48h]
  double v38; // [esp+12Ch] [ebp-40h]
  double v39; // [esp+134h] [ebp-38h]
  double v40; // [esp+13Ch] [ebp-30h]
  double v41; // [esp+144h] [ebp-28h]
  double v42; // [esp+14Ch] [ebp-20h]
  double v43; // [esp+154h] [ebp-18h]
  double v44; // [esp+15Ch] [ebp-10h]
  double v45; // [esp+164h] [ebp-8h]

  v27 = sub_47E420((_DWORD *)dword_791364);
  v39 = 1.0;
  v25 = 1.0;
  v40 = sub_4D5010(dword_791890) / (double)a2;
  v23 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v27 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v16 = 0.0;
        if ( sub_4D4D30(i, a2) * dbl_791AE0[8 * v27 + i] <= v40 )
        {
          ++v23;
          v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
          v11 = sub_4F6880(ExecutingContext);
          v12 = sub_4F6930(ExecutingContext);
          v10 = sub_4F6A90(ExecutingContext) - v11;
          v14 = sub_4F6B20(ExecutingContext) - v12;
          if ( v11 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 1791);
          if ( v12 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 1792);
          if ( v10 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 1793);
          if ( v14 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 1794);
          v15 = 0;
          v8 = sub_4D5040(dword_791890) * (double)v10 + 1.0;
          v7 = sub_4D5110(dword_791890) * (double)v14 + v8;
          v6 = sub_4D51E0(dword_791890) * (double)v11 + v7;
          v16 = sub_4D52B0(dword_791890) * (double)v12 + v6;
        }
        else
        {
          v15 = 1;
        }
        for ( j = 0; j < 6; ++j )
        {
          if ( v15 )
          {
            v39 = (1.0
                 - (double)dword_7915C8[6 * v27]
                 / (double)(dword_791460[6 * v27] + dword_7919D8[6 * v27] + dword_7915C8[6 * v27])
                 - (double)dword_7919D8[6 * v27]
                 / (double)(dword_791460[6 * v27] + dword_7919D8[6 * v27] + dword_7915C8[6 * v27])
                 * 0.25)
                * v39;
            v4 = (1.0
                - (double)dword_7915CC[6 * v27]
                / (double)(dword_791464[6 * v27] + dword_7919DC[6 * v27] + dword_7915CC[6 * v27]))
               * v25;
          }
          else
          {
            v39 = (1.0
                 - (double)dword_7915C8[6 * v27]
                 / (double)(dword_791460[6 * v27] + dword_7919D8[6 * v27] + dword_7915C8[6 * v27])
                 * v16
                 - v16
                 * 0.25
                 * ((double)dword_7919D8[6 * v27]
                  / (double)(dword_791460[6 * v27] + dword_7919D8[6 * v27] + dword_7915C8[6 * v27])))
                * v39;
            v4 = (1.0
                - (double)dword_7915CC[6 * v27]
                / (double)(dword_791464[6 * v27] + dword_7919DC[6 * v27] + dword_7915CC[6 * v27])
                * v16)
               * v25;
          }
          v25 = v4;
          if ( v39 < 0.0 )
            v39 = 0.0;
          if ( v4 < 0.0 )
            v25 = 0.0;
        }
      }
    }
  }
  v34 = dword_791AC0[v27] + dword_791848[v27] + dword_791894[v27] + dword_7918B4[v27];
  v18 = 1.0 - (double)dword_791998[v27] / (double)v34;
  v35 = 0.0;
  if ( dword_7916C8[v27] > 0 )
    v35 = (double)dword_7916C8[v27]
        / ((double)dword_7916C8[v27] + (double)dword_791CE0[v27] + (double)dword_791778[v27]);
  v36 = 0.0;
  if ( dword_791CE0[v27] > 0 )
    v36 = (double)dword_791CE0[v27]
        / ((double)dword_7916C8[v27] + (double)dword_791CE0[v27] + (double)dword_791778[v27]);
  v41 = 1.0 - (double)dword_791938[v27] / (double)v34;
  v44 = 0.0;
  if ( dword_7918D4[v27] > 0 )
    v44 = (double)dword_7918D4[v27] / (double)(dword_7916A8[v27] + dword_7918D4[v27]);
  v33 = 1.0 - (double)dword_7918B4[v27] / (double)v34;
  v26 = 0.0;
  if ( dword_791894[v27] > 0 )
    v26 = (double)dword_791894[v27]
        / ((double)dword_791894[v27] + (double)dword_791848[v27] + (double)dword_791AC0[v27]);
  v42 = 0.0;
  if ( dword_791848[v27] > 0 )
    v42 = (double)dword_791848[v27]
        / ((double)dword_791894[v27] + (double)dword_791848[v27] + (double)dword_791AC0[v27]);
  v20 = 1.0 - (double)dword_791870[v27] / (double)v34;
  v28 = 0.0;
  if ( dword_791588[v27] > 0 )
    v28 = (double)dword_791588[v27]
        / ((double)dword_791588[v27] + (double)dword_791E10[v27] + (double)dword_791D20[v27]);
  v29 = 0.0;
  if ( dword_791E10[v27] > 0 )
    v29 = (double)dword_791E10[v27]
        / ((double)dword_791588[v27] + (double)dword_791E10[v27] + (double)dword_791D20[v27]);
  v24 = 1.0 - (double)dword_791420[v27] / (double)v34;
  v32 = 0.0;
  if ( dword_791560[v27] > 0 )
    v32 = (double)dword_791560[v27]
        / ((double)dword_791560[v27] + (double)dword_7915A8[v27] + (double)dword_791688[v27]);
  v19 = 0.0;
  if ( dword_7915A8[v27] > 0 )
    v19 = (double)dword_7915A8[v27]
        / ((double)dword_791560[v27] + (double)dword_7915A8[v27] + (double)dword_791688[v27]);
  v37 = (double)(__int16)sub_4D5B90(dword_791890) / 100.0;
  v38 = (double)(__int16)sub_4D5BB0(dword_791890) / 100.0;
  v30 = v37 / (double)(v23 + 1);
  v31 = v38 / (double)(v23 + 1);
  if ( 1.0 - v38 < v33 )
    v33 = v33 - v31;
  if ( 1.0 - v38 < v20 )
    v20 = v20 - v31;
  if ( 1.0 - v38 < v24 )
    v24 = v24 - v31;
  v21 = v41 * v44
      + (1.0 - v41) * v33 * v26
      + (1.0 - v41) * (1.0 - v33) * v20 * v28
      + (1.0 - v41) * (1.0 - v33) * (1.0 - v20) * v24 * v32
      + (1.0 - v41) * v30 * v33 * v42
      + (1.0 - v41) * v30 * (1.0 - v33) * v20 * v29
      + (1.0 - v41) * v30 * (1.0 - v33) * (1.0 - v20) * v24 * v19
      + (1.0 - v41) * (1.0 - v33) * (1.0 - v20) * (1.0 - v24) * v39;
  v22 = (v21 + v35 + v30 * v36) / 2.0 * v18 + (1.0 - v18) * v21;
  if ( !(dword_791464[6 * v27] + dword_7915CC[6 * v27]) )
    v25 = v22 + v35 + v30 * v36;
  v45 = (double)(__int16)sub_4D5B70(dword_791890) / 100.0 * (double)(v23 + 6 - a1);
  v43 = (v22 * v45 + ((v39 + v25) / 2.0 * v18 + (1.0 - v18) * v39) * (1.0 - v45)) * dbl_791DD0[v27];
  if ( v43 > 100.0 )
    v43 = 100.0;
  if ( v43 < 0.0 )
    return 0.0;
  return v43;
}


//======================================================================
// sub_4A8BB0
// entry 004a8bb0  size 3351  status ok
//======================================================================

int __cdecl sub_4A8BB0(int a1, int a2, int a3)
{
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  __int16 v5; // ax
  int v6; // esi
  int v7; // esi
  __int16 v8; // ax
  Concurrency::details::SchedulerProxy *v9; // eax
  Concurrency::details::VirtualProcessor *v10; // eax
  __int16 ExecutingContext; // ax
  __int16 v12; // ax
  int v14; // esi
  int v15; // esi
  __int16 v16; // si
  __int16 v17; // di
  int v18; // esi
  int v19; // esi
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  double v34; // [esp+Ch] [ebp-44h]
  __int16 v35; // [esp+18h] [ebp-38h]
  int v36; // [esp+1Ch] [ebp-34h]
  int v37; // [esp+1Ch] [ebp-34h]
  double v38; // [esp+20h] [ebp-30h]
  __int16 v39; // [esp+2Ch] [ebp-24h]
  int v40; // [esp+30h] [ebp-20h]
  __int16 v41; // [esp+34h] [ebp-1Ch]
  __int16 i; // [esp+38h] [ebp-18h]
  __int16 v43; // [esp+3Ch] [ebp-14h]
  __int16 j; // [esp+40h] [ebp-10h]
  __int16 v45; // [esp+44h] [ebp-Ch]
  __int16 v46; // [esp+48h] [ebp-8h]
  int v47; // [esp+4Ch] [ebp-4h]

  v47 = sub_47E420((_DWORD *)dword_791364);
  if ( v47 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerHoldemAI.cpp", 4383);
  if ( v47 >= sub_47F950() )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerHoldemAI.cpp", 4384);
  dword_791890 = sub_47E3B0((void *)dword_791364);
  if ( word_791D80[v47] == a1 )
  {
    if ( word_7919B8[v47] == a3
      || word_791768[v47] == 6
      || word_791768[v47] == 7
      || word_791768[v47] == 8
      || word_791768[v47] == 9
      || word_791768[v47] == 2 )
    {
      dbl_791D90[v47] = sub_4AF990(a1, a2);
    }
    else
    {
      word_7919B8[v47] = a3;
      dbl_791D90[v47] = sub_4AF990(a1, a2);
      word_791768[v47] = 1;
    }
  }
  else
  {
    if ( a1 )
    {
      if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
      {
        v43 = 0;
        for ( i = 0; i < sub_47F950(); ++i )
        {
          if ( i != v47 )
          {
            v9 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v9) == 1 )
            {
              v10 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
              ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v10);
              v43 += sub_4F6880(ExecutingContext);
            }
          }
        }
        v12 = sub_4EE620(dword_791890);
        word_791798[v47] -= sub_62FBF0(v12 + 1) * v43;
      }
    }
    else
    {
      sub_4B0190();
      v46 = 0;
      for ( j = 0; j < sub_47F950(); ++j )
      {
        if ( j != v47 )
        {
          v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
          {
            v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
            v5 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
            v46 += sub_4F6A90(v5);
          }
        }
      }
      v45 = sub_4EE660(dword_791890);
      v6 = sub_62FBF0(v45);
      v7 = v6 - sub_62FBF0(v45);
      v8 = sub_4EE620(dword_791890);
      word_791798[v47] = v7 - sub_62FBF0(v8 + 1) * v46;
    }
    word_791D80[v47] = a1;
    word_7919B8[v47] = a3;
    sub_4A98D0(a1);
    dbl_791D90[v47] = sub_4AF990(a1, a2);
    word_791768[v47] = 1;
    if ( dbl_791958[v47] <= 0.9999 )
    {
      if ( a1 == 4 && dbl_7916E8[v47] > 0.99 )
      {
        word_791768[v47] = 8;
      }
      else if ( a1 == 3 && dbl_7916E8[v47] > 0.99 )
      {
        word_791768[v47] = 9;
      }
      else if ( a1 == 2 && dbl_7916E8[v47] > 0.99 && !sub_62FBF0(3) )
      {
        word_791768[v47] = 9;
      }
    }
    else if ( a1 == 4 )
    {
      word_791768[v47] = 6;
    }
    else
    {
      word_791768[v47] = 7;
    }
  }
  switch ( word_791768[v47] )
  {
    case 6:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( sub_4A39C0() || sub_62FBF0(8) )
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
    case 8:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( sub_4A39C0() || sub_62FBF0(5) )
          return 2;
        else
          return 1;
      }
      else if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
      {
        v14 = sub_62FBF0(100);
        if ( v14 < (__int16)sub_4EE520(dword_791890) )
        {
          v15 = sub_62FBF0(100);
          if ( v15 < (__int16)sub_4EE520(dword_791890) )
            word_791768[v47] = 5;
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
        v39 = 0;
        if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
          v39 = 4 - a1;
        v34 = (double)sub_4F67D0(dword_791364 + 56);
        v38 = dbl_791D90[v47] / (v34 / (double)sub_4F6840(dword_791364 + 56));
        v16 = sub_4EF750(dword_791890);
        v17 = sub_62FBF0(a3 - 1);
        v41 = (v17 + sub_62FBF0(v39) + 1) * v16;
        if ( a1 < sub_47F0C0((_DWORD *)dword_791364) )
          v41 = 0;
        v18 = sub_62FBF0(v41);
        v19 = sub_62FBF0(v41) + v18;
        v36 = v19 - sub_62FBF0(v41);
        if ( a1 < sub_47F0C0((_DWORD *)dword_791364) )
        {
          v20 = sub_4EDEB0(dword_791890);
          v36 -= sub_62FBF0(v20);
          v35 = sub_47F0C0((_DWORD *)dword_791364);
          if ( v35 == 1 )
          {
            v21 = sub_4EDEB0(dword_791890);
            v36 -= sub_62FBF0(v21);
          }
          else if ( v35 == 2 )
          {
            v22 = sub_4EDEB0(dword_791890);
            v36 -= sub_62FBF0(v22 / 2);
          }
        }
        v40 = (__int16)sub_4EF750(dword_791890);
        if ( v40 > 10 )
          v40 = 10;
        v37 = v36 - sub_62FBF0((10 - v40) / 2 + 5 - a1);
        if ( v37 < -19 )
          v37 = -19;
        if ( (double)v37 / 20.0 + 1.0 >= v38 )
          return 0;
        if ( !(unsigned __int8)sub_4AFE60(a1, a3) )
        {
          v23 = sub_62FBF0(100);
          if ( v23 < (__int16)sub_4EF420(dword_791890) )
            word_791768[v47] = 2;
          return 3;
        }
      }
      else if ( !(unsigned __int8)sub_4AFE60(a1, a3) )
      {
        return 1;
      }
      break;
  }
  switch ( word_791768[v47] )
  {
    case 5:
    case 12:
    case 7:
    case 9:
      v24 = sub_62FBF0(100);
      if ( v24 < (__int16)sub_4B02B0(a1, 3) )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v47] == 12 )
        {
          return 0;
        }
        v25 = sub_62FBF0(100);
        if ( v25 >= (__int16)sub_4EE520(dword_791890) )
        {
          v26 = sub_62FBF0(100);
          if ( v26 < (__int16)sub_4EE540(dword_791890) && word_791768[v47] != 7 )
            word_791768[v47] = 1;
        }
        else
        {
          word_791768[v47] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && (sub_62FBF0(2) || word_791768[v47] == 9) )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 11:
      v27 = sub_62FBF0(100);
      if ( v27 < (__int16)sub_4B02B0(a1, 2) )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v47] == 11 )
        {
          return 0;
        }
        v28 = sub_62FBF0(100);
        if ( v28 >= (__int16)sub_4EE520(dword_791890) )
        {
          v29 = sub_62FBF0(100);
          if ( v29 < (__int16)sub_4EE540(dword_791890) )
            word_791768[v47] = 1;
        }
        else
        {
          word_791768[v47] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(2) )
          return 4;
        if ( word_791768[v47] == 11 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 10:
      v30 = sub_62FBF0(100);
      if ( v30 < (__int16)sub_4B02B0(a1, 1) )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v47] == 10 )
        {
          return 0;
        }
        v31 = sub_62FBF0(100);
        if ( v31 >= (__int16)sub_4EE520(dword_791890) )
        {
          v32 = sub_62FBF0(100);
          if ( v32 < (__int16)sub_4EE540(dword_791890) )
            word_791768[v47] = 1;
        }
        else
        {
          word_791768[v47] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(2) )
          return 4;
        if ( word_791768[v47] == 10 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_160;
  switch ( word_791768[v47] )
  {
    case 12:
      return 0;
    case 11:
      return 0;
    case 10:
      return 0;
  }
LABEL_160:
  v33 = sub_62FBF0(100);
  if ( v33 < (__int16)sub_4EE540(dword_791890) )
    word_791768[v47] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_4A98D0
// entry 004a98d0  size 24757  status ok
//======================================================================

void __cdecl sub_4A98D0(int a1)
{
  unsigned __int8 *v1; // eax
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // eax
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // eax
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  unsigned __int8 *v30; // eax
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // eax
  unsigned __int8 *v36; // eax
  unsigned __int8 *v37; // eax
  unsigned __int8 *v38; // eax
  unsigned __int8 *v39; // eax
  unsigned __int8 *v40; // eax
  unsigned __int8 *v41; // eax
  unsigned __int8 *v42; // eax
  unsigned __int8 *v43; // eax
  unsigned __int8 *v44; // eax
  unsigned __int8 *v45; // eax
  unsigned __int8 *v46; // eax
  unsigned __int8 *v47; // eax
  unsigned __int8 *v48; // eax
  unsigned __int8 *v49; // eax
  unsigned __int8 *v50; // eax
  unsigned __int8 *v51; // eax
  unsigned __int8 *v52; // eax
  unsigned __int8 *v53; // eax
  unsigned __int8 *v54; // eax
  unsigned __int8 *v55; // eax
  unsigned __int8 *v56; // eax
  unsigned __int8 *v57; // eax
  unsigned __int8 *v58; // eax
  unsigned __int8 *v59; // eax
  unsigned __int8 *v60; // eax
  unsigned __int8 *v61; // eax
  unsigned __int8 *v62; // eax
  unsigned __int8 *v63; // eax
  unsigned __int8 *v64; // eax
  unsigned __int8 *v65; // eax
  unsigned __int8 *v66; // eax
  unsigned __int8 *v67; // eax
  unsigned __int8 *v68; // eax
  unsigned __int8 *v69; // eax
  unsigned __int8 *v70; // eax
  unsigned __int8 *v71; // eax
  unsigned __int8 *v72; // eax
  unsigned __int8 *v73; // eax
  unsigned __int8 *v74; // eax
  unsigned __int8 *v75; // eax
  unsigned __int8 *v76; // eax
  unsigned __int8 *v77; // eax
  unsigned __int8 *v78; // eax
  unsigned __int8 *v79; // eax
  unsigned __int8 *v80; // eax
  unsigned __int8 *v81; // eax
  unsigned __int8 *v82; // eax
  unsigned __int8 *v83; // eax
  unsigned __int8 *v84; // eax
  unsigned __int8 *v85; // eax
  unsigned __int8 *v86; // eax
  unsigned __int8 *v87; // eax
  unsigned __int8 *v88; // eax
  unsigned __int8 *v89; // eax
  unsigned __int8 *v90; // eax
  unsigned __int8 *v91; // eax
  unsigned __int8 *v92; // eax
  unsigned __int8 *v93; // eax
  unsigned __int8 *v94; // eax
  unsigned __int8 *v95; // eax
  unsigned __int8 *v96; // eax
  unsigned __int8 *v97; // eax
  unsigned __int8 *v98; // eax
  unsigned __int8 *v99; // eax
  unsigned __int8 *v100; // eax
  unsigned __int8 *v101; // eax
  unsigned __int8 *v102; // eax
  unsigned __int8 *v103; // eax
  unsigned __int8 *v104; // eax
  unsigned __int8 *v105; // eax
  unsigned __int8 *v106; // eax
  unsigned __int8 *v107; // eax
  unsigned __int8 *v108; // eax
  unsigned __int8 *v109; // eax
  unsigned __int8 *v110; // eax
  unsigned __int8 *v111; // eax
  unsigned __int8 *v112; // eax
  unsigned __int8 *v113; // eax
  unsigned __int8 *v114; // eax
  unsigned __int8 *v115; // eax
  unsigned __int8 *v116; // eax
  unsigned __int8 *v117; // eax
  unsigned __int8 *v118; // eax
  unsigned __int8 *v119; // eax
  unsigned __int8 *v120; // eax
  unsigned __int8 *v121; // eax
  unsigned __int8 *v122; // eax
  unsigned __int8 *v123; // eax
  unsigned __int8 *v124; // eax
  unsigned __int8 *v125; // eax
  unsigned __int8 *v126; // eax
  unsigned __int8 *v127; // eax
  unsigned __int8 *v128; // eax
  unsigned __int8 *v129; // eax
  unsigned __int8 *v130; // eax
  unsigned __int8 *v131; // eax
  unsigned __int8 *v132; // eax
  unsigned __int8 *v133; // eax
  unsigned __int8 *v134; // eax
  unsigned __int8 *v135; // eax
  unsigned __int8 *v136; // eax
  unsigned __int8 *v137; // eax
  unsigned __int8 *v138; // eax
  unsigned __int8 *v139; // eax
  unsigned __int8 *v140; // eax
  unsigned __int8 *v141; // eax
  unsigned __int8 *v142; // eax
  unsigned __int8 *v143; // eax
  unsigned __int8 *v144; // eax
  unsigned __int8 *v145; // eax
  unsigned __int8 *v146; // eax
  unsigned __int8 *v147; // eax
  unsigned __int8 *v148; // eax
  unsigned __int8 *v149; // eax
  unsigned __int8 *v150; // eax
  unsigned __int8 *v151; // eax
  unsigned __int8 *v152; // eax
  unsigned __int8 *v153; // eax
  unsigned __int8 *v154; // eax
  unsigned __int8 *v155; // eax
  unsigned __int8 *v156; // eax
  unsigned __int8 *v157; // eax
  unsigned __int8 *v158; // eax
  unsigned __int8 *v159; // eax
  unsigned __int8 *v160; // eax
  unsigned __int8 *v161; // eax
  unsigned __int8 *v162; // eax
  unsigned __int8 *v163; // eax
  unsigned __int8 *v164; // eax
  unsigned __int8 *v165; // eax
  unsigned __int8 *v166; // eax
  unsigned __int8 *v167; // eax
  unsigned __int8 *v168; // eax
  unsigned __int8 *v169; // eax
  unsigned __int8 *v170; // eax
  unsigned __int8 *v171; // eax
  unsigned __int8 *v172; // eax
  unsigned __int8 *v173; // eax
  unsigned __int8 *v174; // eax
  unsigned __int8 *v175; // eax
  unsigned __int8 *v176; // eax
  unsigned __int8 *v177; // eax
  unsigned __int8 *v178; // eax
  unsigned __int8 *v179; // eax
  unsigned __int8 *v180; // eax
  unsigned __int8 *v181; // eax
  unsigned __int8 *v182; // eax
  unsigned __int8 *v183; // eax
  unsigned __int8 *v184; // eax
  unsigned __int8 *v185; // eax
  unsigned __int8 *v186; // eax
  unsigned __int8 *v187; // eax
  unsigned __int8 *v188; // eax
  unsigned __int8 *v189; // eax
  unsigned __int8 *v190; // eax
  unsigned __int8 *v191; // eax
  unsigned __int8 *v192; // eax
  unsigned __int8 *v193; // eax
  unsigned __int8 *v194; // eax
  unsigned __int8 *v195; // eax
  unsigned __int8 *v196; // eax
  unsigned __int8 *v197; // eax
  unsigned __int8 *v198; // eax
  unsigned __int8 *v199; // eax
  unsigned __int8 *v200; // eax
  unsigned __int8 *v201; // eax
  unsigned __int8 *v202; // eax
  unsigned __int8 *v203; // eax
  unsigned __int8 *v204; // eax
  unsigned __int8 *v205; // eax
  unsigned __int8 *v206; // eax
  unsigned __int8 *v207; // eax
  unsigned __int8 *v208; // eax
  unsigned __int8 *v209; // eax
  unsigned __int8 *v210; // eax
  unsigned __int8 *v211; // eax
  unsigned __int8 *v212; // eax
  unsigned __int8 *v213; // eax
  unsigned __int8 *v214; // eax
  unsigned __int8 *v215; // eax
  unsigned __int8 *v216; // eax
  unsigned __int8 *v217; // eax
  unsigned __int8 *v218; // eax
  unsigned __int8 *v219; // eax
  unsigned __int8 *v220; // eax
  unsigned __int8 *v221; // eax
  unsigned __int8 *v222; // eax
  unsigned __int8 *v223; // eax
  unsigned __int8 *v224; // eax
  unsigned __int8 *v225; // eax
  unsigned __int8 *v226; // eax
  unsigned __int8 *v227; // eax
  unsigned __int8 *v228; // eax
  unsigned __int8 *v229; // eax
  unsigned __int8 *v230; // eax
  unsigned __int8 *v231; // eax
  unsigned __int8 *v232; // eax
  unsigned __int8 *v233; // eax
  unsigned __int8 *v234; // eax
  unsigned __int8 *v235; // eax
  unsigned __int8 *v236; // eax
  unsigned __int8 *v237; // eax
  unsigned __int8 *v238; // eax
  unsigned __int8 *v239; // eax
  unsigned __int8 *v240; // eax
  unsigned __int8 *v241; // eax
  unsigned __int8 *v242; // eax
  unsigned __int8 *v243; // eax
  unsigned __int8 *v244; // eax
  unsigned __int8 *v245; // eax
  unsigned __int8 *v246; // eax
  unsigned __int8 *v247; // eax
  unsigned __int8 *v248; // eax
  unsigned __int8 *v249; // eax
  unsigned __int8 *v250; // eax
  unsigned __int8 *v251; // eax
  unsigned __int8 *v252; // eax
  unsigned __int8 *v253; // eax
  unsigned __int8 *v254; // eax
  unsigned __int8 *v255; // eax
  unsigned __int8 *v256; // eax
  unsigned __int8 *v257; // eax
  unsigned __int8 *v258; // eax
  unsigned __int8 *v259; // eax
  unsigned __int8 *v260; // eax
  unsigned __int8 *v261; // eax
  unsigned __int8 *v262; // eax
  unsigned __int8 *v263; // eax
  unsigned __int8 *v264; // eax
  unsigned __int8 *v265; // eax
  unsigned __int8 *v266; // eax
  unsigned __int8 *v267; // eax
  unsigned __int8 *v268; // eax
  unsigned __int8 *v269; // eax
  unsigned __int8 *v270; // eax
  unsigned __int8 *v271; // eax
  unsigned __int8 *v272; // eax
  unsigned __int8 *v273; // eax
  unsigned __int8 *v274; // eax
  unsigned __int8 *v275; // eax
  unsigned __int8 *v276; // eax
  unsigned __int8 *v277; // eax
  unsigned __int8 *v278; // eax
  unsigned __int8 *v279; // eax
  unsigned __int8 *v280; // eax
  unsigned __int8 *v281; // eax
  unsigned __int8 *v282; // eax
  unsigned __int8 *v283; // eax
  unsigned __int8 *v284; // eax
  unsigned __int8 *v285; // [esp-4h] [ebp-498h]
  unsigned __int8 *v286; // [esp-4h] [ebp-498h]
  unsigned __int8 *v287; // [esp-4h] [ebp-498h]
  unsigned __int8 *v288; // [esp-4h] [ebp-498h]
  unsigned __int8 *v289; // [esp-4h] [ebp-498h]
  unsigned __int8 *v290; // [esp-4h] [ebp-498h]
  unsigned __int8 *v291; // [esp-4h] [ebp-498h]
  unsigned __int8 *v292; // [esp-4h] [ebp-498h]
  unsigned __int8 *v293; // [esp-4h] [ebp-498h]
  unsigned __int8 *v294; // [esp-4h] [ebp-498h]
  unsigned __int8 *v295; // [esp-4h] [ebp-498h]
  unsigned __int8 *v296; // [esp-4h] [ebp-498h]
  unsigned __int8 *v297; // [esp-4h] [ebp-498h]
  unsigned __int8 *v298; // [esp-4h] [ebp-498h]
  unsigned __int8 *v299; // [esp-4h] [ebp-498h]
  unsigned __int8 *v300; // [esp-4h] [ebp-498h]
  unsigned __int8 *v301; // [esp-4h] [ebp-498h]
  unsigned __int8 *v302; // [esp-4h] [ebp-498h]
  unsigned __int8 *v303; // [esp-4h] [ebp-498h]
  unsigned __int8 *v304; // [esp-4h] [ebp-498h]
  unsigned __int8 *v305; // [esp-4h] [ebp-498h]
  unsigned __int8 *v306; // [esp-4h] [ebp-498h]
  unsigned __int8 *v307; // [esp-4h] [ebp-498h]
  unsigned __int8 *v308; // [esp-4h] [ebp-498h]
  unsigned __int8 *v309; // [esp-4h] [ebp-498h]
  unsigned __int8 *v310; // [esp-4h] [ebp-498h]
  unsigned __int8 *v311; // [esp-4h] [ebp-498h]
  unsigned __int8 *v312; // [esp-4h] [ebp-498h]
  unsigned __int8 *v313; // [esp-4h] [ebp-498h]
  unsigned __int8 *v314; // [esp-4h] [ebp-498h]
  unsigned __int8 *v315; // [esp-4h] [ebp-498h]
  unsigned __int8 *v316; // [esp-4h] [ebp-498h]
  unsigned __int8 *v317; // [esp-4h] [ebp-498h]
  unsigned __int8 *v318; // [esp-4h] [ebp-498h]
  unsigned __int8 *v319; // [esp-4h] [ebp-498h]
  unsigned __int8 *v320; // [esp-4h] [ebp-498h]
  unsigned __int8 *v321; // [esp-4h] [ebp-498h]
  unsigned __int8 *v322; // [esp-4h] [ebp-498h]
  unsigned __int8 *v323; // [esp-4h] [ebp-498h]
  unsigned __int8 *v324; // [esp-4h] [ebp-498h]
  unsigned __int8 *v325; // [esp-4h] [ebp-498h]
  unsigned __int8 *v326; // [esp-4h] [ebp-498h]
  unsigned __int8 *v327; // [esp-4h] [ebp-498h]
  unsigned __int8 *v328; // [esp-4h] [ebp-498h]
  unsigned __int8 *v329; // [esp-4h] [ebp-498h]
  unsigned __int8 *v330; // [esp-4h] [ebp-498h]
  unsigned __int8 *v331; // [esp-4h] [ebp-498h]
  unsigned __int8 *v332; // [esp-4h] [ebp-498h]
  unsigned __int8 *v333; // [esp-4h] [ebp-498h]
  unsigned __int8 *v334; // [esp-4h] [ebp-498h]
  unsigned __int8 *v335; // [esp-4h] [ebp-498h]
  unsigned __int8 *v336; // [esp-4h] [ebp-498h]
  unsigned __int8 *v337; // [esp-4h] [ebp-498h]
  unsigned __int8 *v338; // [esp-4h] [ebp-498h]
  unsigned __int8 *v339; // [esp-4h] [ebp-498h]
  unsigned __int8 *v340; // [esp-4h] [ebp-498h]
  unsigned __int8 *v341; // [esp-4h] [ebp-498h]
  unsigned __int8 *v342; // [esp-4h] [ebp-498h]
  unsigned __int8 *v343; // [esp-4h] [ebp-498h]
  unsigned __int8 *v344; // [esp-4h] [ebp-498h]
  unsigned __int8 *v345; // [esp-4h] [ebp-498h]
  unsigned __int8 *v346; // [esp-4h] [ebp-498h]
  unsigned __int8 *v347; // [esp-4h] [ebp-498h]
  unsigned __int8 *v348; // [esp-4h] [ebp-498h]
  unsigned __int8 *v349; // [esp-4h] [ebp-498h]
  unsigned __int8 *v350; // [esp-4h] [ebp-498h]
  unsigned __int8 *v351; // [esp-4h] [ebp-498h]
  unsigned __int8 *v352; // [esp-4h] [ebp-498h]
  unsigned __int8 *v353; // [esp-4h] [ebp-498h]
  unsigned __int8 *v354; // [esp-4h] [ebp-498h]
  unsigned __int8 *v355; // [esp-4h] [ebp-498h]
  unsigned __int8 *v356; // [esp-4h] [ebp-498h]
  unsigned __int8 *v357; // [esp-4h] [ebp-498h]
  unsigned __int8 *v358; // [esp-4h] [ebp-498h]
  unsigned __int8 *v359; // [esp-4h] [ebp-498h]
  unsigned __int8 *v360; // [esp-4h] [ebp-498h]
  unsigned __int8 *v361; // [esp-4h] [ebp-498h]
  unsigned __int8 *v362; // [esp-4h] [ebp-498h]
  unsigned __int8 *v363; // [esp-4h] [ebp-498h]
  unsigned __int8 *v364; // [esp-4h] [ebp-498h]
  unsigned __int8 *v365; // [esp-4h] [ebp-498h]
  unsigned __int8 *v366; // [esp-4h] [ebp-498h]
  unsigned __int8 *v367; // [esp-4h] [ebp-498h]
  unsigned __int8 *v368; // [esp-4h] [ebp-498h]
  unsigned __int8 *v369; // [esp-4h] [ebp-498h]
  unsigned __int8 *v370; // [esp-4h] [ebp-498h]
  unsigned __int8 *v371; // [esp-4h] [ebp-498h]
  unsigned __int8 *v372; // [esp-4h] [ebp-498h]
  unsigned __int8 *v373; // [esp-4h] [ebp-498h]
  unsigned __int8 *v374; // [esp-4h] [ebp-498h]
  unsigned __int8 *v375; // [esp-4h] [ebp-498h]
  unsigned __int8 *v376; // [esp-4h] [ebp-498h]
  unsigned __int8 *v377; // [esp-4h] [ebp-498h]
  unsigned __int8 *v378; // [esp-4h] [ebp-498h]
  unsigned __int8 *v379; // [esp-4h] [ebp-498h]
  unsigned __int8 *v380; // [esp-4h] [ebp-498h]
  unsigned __int8 *v381; // [esp-4h] [ebp-498h]
  unsigned __int8 *v382; // [esp-4h] [ebp-498h]
  unsigned __int8 *v383; // [esp-4h] [ebp-498h]
  unsigned __int8 *v384; // [esp-4h] [ebp-498h]
  unsigned __int8 *v385; // [esp-4h] [ebp-498h]
  unsigned __int8 *v386; // [esp-4h] [ebp-498h]
  unsigned __int8 *v387; // [esp-4h] [ebp-498h]
  unsigned __int8 *v388; // [esp-4h] [ebp-498h]
  unsigned __int8 *v389; // [esp-4h] [ebp-498h]
  unsigned __int8 *v390; // [esp-4h] [ebp-498h]
  unsigned __int8 *v391; // [esp-4h] [ebp-498h]
  unsigned __int8 *v392; // [esp-4h] [ebp-498h]
  unsigned __int8 *v393; // [esp-4h] [ebp-498h]
  unsigned __int8 *v394; // [esp-4h] [ebp-498h]
  unsigned __int8 *v395; // [esp-4h] [ebp-498h]
  unsigned __int8 *v396; // [esp-4h] [ebp-498h]
  unsigned __int8 *v397; // [esp-4h] [ebp-498h]
  unsigned __int8 *v398; // [esp-4h] [ebp-498h]
  unsigned __int8 *v399; // [esp-4h] [ebp-498h]
  unsigned __int8 *v400; // [esp-4h] [ebp-498h]
  unsigned __int8 *v401; // [esp-4h] [ebp-498h]
  unsigned __int8 *v402; // [esp-4h] [ebp-498h]
  unsigned __int8 *v403; // [esp-4h] [ebp-498h]
  unsigned __int8 *v404; // [esp-4h] [ebp-498h]
  unsigned __int8 *v405; // [esp-4h] [ebp-498h]
  unsigned __int8 *v406; // [esp-4h] [ebp-498h]
  unsigned __int8 *v407; // [esp-4h] [ebp-498h]
  unsigned __int8 *v408; // [esp-4h] [ebp-498h]
  unsigned __int8 *v409; // [esp-4h] [ebp-498h]
  unsigned __int8 *v410; // [esp-4h] [ebp-498h]
  unsigned __int8 *v411; // [esp-4h] [ebp-498h]
  unsigned __int8 *v412; // [esp-4h] [ebp-498h]
  unsigned __int8 *v413; // [esp-4h] [ebp-498h]
  unsigned __int8 *v414; // [esp-4h] [ebp-498h]
  unsigned __int8 *v415; // [esp-4h] [ebp-498h]
  unsigned __int8 *v416; // [esp-4h] [ebp-498h]
  unsigned __int8 *v417; // [esp-4h] [ebp-498h]
  unsigned __int8 *v418; // [esp-4h] [ebp-498h]
  unsigned __int8 *v419; // [esp-4h] [ebp-498h]
  unsigned __int8 *v420; // [esp-4h] [ebp-498h]
  unsigned __int8 *v421; // [esp-4h] [ebp-498h]
  unsigned __int8 *v422; // [esp-4h] [ebp-498h]
  unsigned __int8 *v423; // [esp-4h] [ebp-498h]
  unsigned __int8 *v424; // [esp-4h] [ebp-498h]
  unsigned __int8 *v425; // [esp-4h] [ebp-498h]
  unsigned __int8 *v426; // [esp-4h] [ebp-498h]
  unsigned __int8 *v427; // [esp-4h] [ebp-498h]
  unsigned __int8 *v428; // [esp-4h] [ebp-498h]
  unsigned __int8 *v429; // [esp-4h] [ebp-498h]
  unsigned __int8 *v430; // [esp-4h] [ebp-498h]
  unsigned __int8 *v431; // [esp-4h] [ebp-498h]
  unsigned __int8 *v432; // [esp-4h] [ebp-498h]
  unsigned __int8 *v433; // [esp-4h] [ebp-498h]
  unsigned __int8 *v434; // [esp-4h] [ebp-498h]
  unsigned __int8 *v435; // [esp-4h] [ebp-498h]
  unsigned __int8 *v436; // [esp-4h] [ebp-498h]
  unsigned __int8 *v437; // [esp-4h] [ebp-498h]
  unsigned __int8 *v438; // [esp-4h] [ebp-498h]
  unsigned __int8 *v439; // [esp-4h] [ebp-498h]
  unsigned __int8 *v440; // [esp-4h] [ebp-498h]
  unsigned __int8 *v441; // [esp-4h] [ebp-498h]
  unsigned __int8 *v442; // [esp-4h] [ebp-498h]
  unsigned __int8 *v443; // [esp-4h] [ebp-498h]
  unsigned __int8 *v444; // [esp-4h] [ebp-498h]
  unsigned __int8 *v445; // [esp-4h] [ebp-498h]
  unsigned __int8 *v446; // [esp-4h] [ebp-498h]
  unsigned __int8 *v447; // [esp-4h] [ebp-498h]
  unsigned __int8 *v448; // [esp-4h] [ebp-498h]
  unsigned __int8 *v449; // [esp-4h] [ebp-498h]
  unsigned __int8 *v450; // [esp-4h] [ebp-498h]
  unsigned __int8 *v451; // [esp-4h] [ebp-498h]
  unsigned __int8 *v452; // [esp-4h] [ebp-498h]
  unsigned __int8 *v453; // [esp-4h] [ebp-498h]
  unsigned __int8 *v454; // [esp-4h] [ebp-498h]
  unsigned __int8 *v455; // [esp-4h] [ebp-498h]
  unsigned __int8 *v456; // [esp-4h] [ebp-498h]
  unsigned __int8 *v457; // [esp-4h] [ebp-498h]
  unsigned __int8 *v458; // [esp-4h] [ebp-498h]
  unsigned __int8 *v459; // [esp-4h] [ebp-498h]
  unsigned __int8 *v460; // [esp-4h] [ebp-498h]
  unsigned __int8 *v461; // [esp-4h] [ebp-498h]
  unsigned __int8 *v462; // [esp-4h] [ebp-498h]
  unsigned __int8 *v463; // [esp-4h] [ebp-498h]
  unsigned __int8 *v464; // [esp-4h] [ebp-498h]
  unsigned __int8 *v465; // [esp-4h] [ebp-498h]
  unsigned __int8 *v466; // [esp-4h] [ebp-498h]
  unsigned __int8 *v467; // [esp-4h] [ebp-498h]
  unsigned __int8 *v468; // [esp-4h] [ebp-498h]
  unsigned __int8 *v469; // [esp-4h] [ebp-498h]
  unsigned __int8 *v470; // [esp-4h] [ebp-498h]
  unsigned __int8 *v471; // [esp-4h] [ebp-498h]
  unsigned __int8 *v472; // [esp-4h] [ebp-498h]
  unsigned __int8 *v473; // [esp-4h] [ebp-498h]
  unsigned __int8 *v474; // [esp-4h] [ebp-498h]
  unsigned __int8 *v475; // [esp-4h] [ebp-498h]
  unsigned __int8 *v476; // [esp-4h] [ebp-498h]
  unsigned __int8 *v477; // [esp-4h] [ebp-498h]
  unsigned __int8 *v478; // [esp-4h] [ebp-498h]
  unsigned __int8 *v479; // [esp-4h] [ebp-498h]
  unsigned __int8 *v480; // [esp-4h] [ebp-498h]
  unsigned __int8 *v481; // [esp-4h] [ebp-498h]
  unsigned __int8 *v482; // [esp-4h] [ebp-498h]
  unsigned __int8 *v483; // [esp-4h] [ebp-498h]
  unsigned __int8 *v484; // [esp-4h] [ebp-498h]
  unsigned __int8 *v485; // [esp-4h] [ebp-498h]
  unsigned __int8 *v486; // [esp-4h] [ebp-498h]
  unsigned __int8 *v487; // [esp-4h] [ebp-498h]
  unsigned __int8 *v488; // [esp-4h] [ebp-498h]
  unsigned __int8 *v489; // [esp-4h] [ebp-498h]
  unsigned __int8 *v490; // [esp-4h] [ebp-498h]
  unsigned __int8 *v491; // [esp-4h] [ebp-498h]
  unsigned __int8 *v492; // [esp-4h] [ebp-498h]
  unsigned __int8 *v493; // [esp-4h] [ebp-498h]
  unsigned __int8 *v494; // [esp-4h] [ebp-498h]
  unsigned __int8 *v495; // [esp-4h] [ebp-498h]
  unsigned __int8 *v496; // [esp-4h] [ebp-498h]
  unsigned __int8 *v497; // [esp-4h] [ebp-498h]
  unsigned __int8 *v498; // [esp-4h] [ebp-498h]
  unsigned __int8 *v499; // [esp-4h] [ebp-498h]
  unsigned __int8 *v500; // [esp-4h] [ebp-498h]
  unsigned __int8 *v501; // [esp-4h] [ebp-498h]
  unsigned __int8 *v502; // [esp-4h] [ebp-498h]
  unsigned __int8 *v503; // [esp-4h] [ebp-498h]
  unsigned __int8 *v504; // [esp-4h] [ebp-498h]
  unsigned __int8 *v505; // [esp-4h] [ebp-498h]
  unsigned __int8 *v506; // [esp-4h] [ebp-498h]
  unsigned __int8 *v507; // [esp-4h] [ebp-498h]
  unsigned __int8 *v508; // [esp-4h] [ebp-498h]
  unsigned __int8 *v509; // [esp-4h] [ebp-498h]
  unsigned __int8 *v510; // [esp-4h] [ebp-498h]
  unsigned __int8 *v511; // [esp-4h] [ebp-498h]
  unsigned __int8 *v512; // [esp-4h] [ebp-498h]
  unsigned __int8 *v513; // [esp-4h] [ebp-498h]
  unsigned __int8 *v514; // [esp-4h] [ebp-498h]
  unsigned __int8 *v515; // [esp-4h] [ebp-498h]
  unsigned __int8 *v516; // [esp-4h] [ebp-498h]
  unsigned __int8 *v517; // [esp-4h] [ebp-498h]
  unsigned __int8 *v518; // [esp-4h] [ebp-498h]
  unsigned __int8 *v519; // [esp-4h] [ebp-498h]
  unsigned __int8 *v520; // [esp-4h] [ebp-498h]
  unsigned __int8 *v521; // [esp-4h] [ebp-498h]
  unsigned __int8 *v522; // [esp-4h] [ebp-498h]
  unsigned __int8 *v523; // [esp-4h] [ebp-498h]
  unsigned __int8 *v524; // [esp-4h] [ebp-498h]
  unsigned __int8 *v525; // [esp-4h] [ebp-498h]
  unsigned __int8 *v526; // [esp-4h] [ebp-498h]
  unsigned __int8 *v527; // [esp-4h] [ebp-498h]
  unsigned __int8 *v528; // [esp-4h] [ebp-498h]
  unsigned __int8 *v529; // [esp-4h] [ebp-498h]
  unsigned __int8 *v530; // [esp-4h] [ebp-498h]
  unsigned __int8 *v531; // [esp-4h] [ebp-498h]
  unsigned __int8 *v532; // [esp-4h] [ebp-498h]
  unsigned __int8 *v533; // [esp-4h] [ebp-498h]
  unsigned __int8 *v534; // [esp-4h] [ebp-498h]
  unsigned __int8 *v535; // [esp-4h] [ebp-498h]
  unsigned __int8 *v536; // [esp-4h] [ebp-498h]
  unsigned __int8 *v537; // [esp-4h] [ebp-498h]
  unsigned __int8 *v538; // [esp-4h] [ebp-498h]
  unsigned __int8 *v539; // [esp-4h] [ebp-498h]
  unsigned __int8 *v540; // [esp-4h] [ebp-498h]
  unsigned __int8 *v541; // [esp-4h] [ebp-498h]
  unsigned __int8 *v542; // [esp-4h] [ebp-498h]
  unsigned __int8 *v543; // [esp-4h] [ebp-498h]
  unsigned __int8 *v544; // [esp-4h] [ebp-498h]
  unsigned __int8 *v545; // [esp-4h] [ebp-498h]
  unsigned __int8 *v546; // [esp-4h] [ebp-498h]
  unsigned __int8 *v547; // [esp-4h] [ebp-498h]
  unsigned __int8 *v548; // [esp-4h] [ebp-498h]
  unsigned __int8 *v549; // [esp-4h] [ebp-498h]
  unsigned __int8 *v550; // [esp-4h] [ebp-498h]
  unsigned __int8 *v551; // [esp-4h] [ebp-498h]
  unsigned __int8 *v552; // [esp-4h] [ebp-498h]
  unsigned __int8 *v553; // [esp-4h] [ebp-498h]
  unsigned __int8 *v554; // [esp-4h] [ebp-498h]
  unsigned __int8 *v555; // [esp-4h] [ebp-498h]
  unsigned __int8 *v556; // [esp-4h] [ebp-498h]
  unsigned __int8 *v557; // [esp-4h] [ebp-498h]
  unsigned __int8 *v558; // [esp-4h] [ebp-498h]
  unsigned __int8 *v559; // [esp-4h] [ebp-498h]
  unsigned __int8 *v560; // [esp-4h] [ebp-498h]
  unsigned __int8 *v561; // [esp-4h] [ebp-498h]
  unsigned __int8 *v562; // [esp-4h] [ebp-498h]
  unsigned __int8 *v563; // [esp-4h] [ebp-498h]
  unsigned __int8 *v564; // [esp-4h] [ebp-498h]
  unsigned __int8 *v565; // [esp-4h] [ebp-498h]
  unsigned __int8 *v566; // [esp-4h] [ebp-498h]
  unsigned __int8 *v567; // [esp-4h] [ebp-498h]
  unsigned __int8 *v568; // [esp-4h] [ebp-498h]
  bool v569; // [esp+Ch] [ebp-488h]
  _BYTE *v570; // [esp+10h] [ebp-484h]
  bool v571; // [esp+18h] [ebp-47Ch]
  _BYTE *v572; // [esp+1Ch] [ebp-478h]
  bool v573; // [esp+24h] [ebp-470h]
  _BYTE *v574; // [esp+28h] [ebp-46Ch]
  bool v575; // [esp+30h] [ebp-464h]
  _BYTE *v576; // [esp+34h] [ebp-460h]
  bool v577; // [esp+3Ch] [ebp-458h]
  _BYTE *v578; // [esp+40h] [ebp-454h]
  bool v579; // [esp+48h] [ebp-44Ch]
  _BYTE *v580; // [esp+4Ch] [ebp-448h]
  bool v581; // [esp+54h] [ebp-440h]
  _BYTE *v582; // [esp+58h] [ebp-43Ch]
  bool v583; // [esp+60h] [ebp-434h]
  _BYTE *v584; // [esp+64h] [ebp-430h]
  bool v585; // [esp+6Ch] [ebp-428h]
  _BYTE *v586; // [esp+70h] [ebp-424h]
  bool v587; // [esp+78h] [ebp-41Ch]
  _BYTE *v588; // [esp+7Ch] [ebp-418h]
  bool v589; // [esp+84h] [ebp-410h]
  _BYTE *v590; // [esp+88h] [ebp-40Ch]
  bool v591; // [esp+90h] [ebp-404h]
  _BYTE *v592; // [esp+94h] [ebp-400h]
  _BYTE *v593; // [esp+9Ch] [ebp-3F8h]
  _BYTE *v594; // [esp+A4h] [ebp-3F0h]
  _BYTE *v595; // [esp+ACh] [ebp-3E8h]
  _BYTE *v596; // [esp+B4h] [ebp-3E0h]
  _BYTE *v597; // [esp+BCh] [ebp-3D8h]
  _BYTE *v598; // [esp+C4h] [ebp-3D0h]
  _BYTE *v599; // [esp+CCh] [ebp-3C8h]
  _BYTE *v600; // [esp+D4h] [ebp-3C0h]
  _BYTE *v601; // [esp+DCh] [ebp-3B8h]
  _BYTE *v602; // [esp+E4h] [ebp-3B0h]
  _BYTE *v603; // [esp+ECh] [ebp-3A8h]
  _BYTE *v604; // [esp+F4h] [ebp-3A0h]
  _BYTE *v605; // [esp+FCh] [ebp-398h]
  bool v606; // [esp+114h] [ebp-380h]
  _BYTE *v607; // [esp+118h] [ebp-37Ch]
  bool v608; // [esp+120h] [ebp-374h]
  _BYTE *v609; // [esp+124h] [ebp-370h]
  bool v610; // [esp+12Ch] [ebp-368h]
  _BYTE *v611; // [esp+130h] [ebp-364h]
  bool v612; // [esp+138h] [ebp-35Ch]
  _BYTE *v613; // [esp+13Ch] [ebp-358h]
  bool v614; // [esp+144h] [ebp-350h]
  _BYTE *v615; // [esp+148h] [ebp-34Ch]
  bool v616; // [esp+150h] [ebp-344h]
  _BYTE *v617; // [esp+154h] [ebp-340h]
  bool v618; // [esp+15Ch] [ebp-338h]
  _BYTE *v619; // [esp+160h] [ebp-334h]
  bool v620; // [esp+168h] [ebp-32Ch]
  _BYTE *v621; // [esp+16Ch] [ebp-328h]
  bool v622; // [esp+174h] [ebp-320h]
  _BYTE *v623; // [esp+178h] [ebp-31Ch]
  bool v624; // [esp+180h] [ebp-314h]
  _BYTE *v625; // [esp+184h] [ebp-310h]
  bool v626; // [esp+18Ch] [ebp-308h]
  _BYTE *v627; // [esp+190h] [ebp-304h]
  bool v628; // [esp+198h] [ebp-2FCh]
  _BYTE *v629; // [esp+19Ch] [ebp-2F8h]
  _BYTE *v630; // [esp+1A4h] [ebp-2F0h]
  _BYTE *v631; // [esp+1ACh] [ebp-2E8h]
  _BYTE *v632; // [esp+1B4h] [ebp-2E0h]
  _BYTE *v633; // [esp+1BCh] [ebp-2D8h]
  _BYTE *v634; // [esp+1C4h] [ebp-2D0h]
  _BYTE *v635; // [esp+1CCh] [ebp-2C8h]
  _BYTE *v636; // [esp+1D4h] [ebp-2C0h]
  _BYTE *v637; // [esp+1DCh] [ebp-2B8h]
  _BYTE *v638; // [esp+1E4h] [ebp-2B0h]
  _BYTE *v639; // [esp+1ECh] [ebp-2A8h]
  _BYTE *v640; // [esp+1F4h] [ebp-2A0h]
  _BYTE *v641; // [esp+1FCh] [ebp-298h]
  _BYTE *v642; // [esp+204h] [ebp-290h]
  unsigned int v643; // [esp+20Ch] [ebp-288h]
  int v644; // [esp+20Ch] [ebp-288h]
  int v645; // [esp+20Ch] [ebp-288h]
  int v646; // [esp+20Ch] [ebp-288h]
  int v647; // [esp+20Ch] [ebp-288h]
  int v648; // [esp+20Ch] [ebp-288h]
  int v649; // [esp+20Ch] [ebp-288h]
  int v650; // [esp+20Ch] [ebp-288h]
  int v651; // [esp+20Ch] [ebp-288h]
  int v652; // [esp+20Ch] [ebp-288h]
  int v653; // [esp+20Ch] [ebp-288h]
  int v654; // [esp+20Ch] [ebp-288h]
  int v655; // [esp+20Ch] [ebp-288h]
  int v656; // [esp+20Ch] [ebp-288h]
  int v657; // [esp+20Ch] [ebp-288h]
  int v658; // [esp+20Ch] [ebp-288h]
  int v659; // [esp+20Ch] [ebp-288h]
  int v660; // [esp+20Ch] [ebp-288h]
  int v661; // [esp+20Ch] [ebp-288h]
  int v662; // [esp+20Ch] [ebp-288h]
  int v663; // [esp+20Ch] [ebp-288h]
  int v664; // [esp+20Ch] [ebp-288h]
  int v665; // [esp+20Ch] [ebp-288h]
  char v666; // [esp+212h] [ebp-282h] BYREF
  bool v667; // [esp+213h] [ebp-281h]
  char v668; // [esp+214h] [ebp-280h] BYREF
  bool v669; // [esp+215h] [ebp-27Fh]
  char v670; // [esp+216h] [ebp-27Eh] BYREF
  bool v671; // [esp+217h] [ebp-27Dh]
  char v672; // [esp+218h] [ebp-27Ch] BYREF
  bool v673; // [esp+219h] [ebp-27Bh]
  char v674; // [esp+21Ah] [ebp-27Ah] BYREF
  bool v675; // [esp+21Bh] [ebp-279h]
  char v676; // [esp+21Ch] [ebp-278h] BYREF
  bool v677; // [esp+21Dh] [ebp-277h]
  char v678; // [esp+21Eh] [ebp-276h] BYREF
  bool v679; // [esp+21Fh] [ebp-275h]
  char v680; // [esp+220h] [ebp-274h] BYREF
  bool v681; // [esp+221h] [ebp-273h]
  char v682; // [esp+222h] [ebp-272h] BYREF
  bool v683; // [esp+223h] [ebp-271h]
  char v684; // [esp+224h] [ebp-270h] BYREF
  bool v685; // [esp+225h] [ebp-26Fh]
  char v686; // [esp+226h] [ebp-26Eh] BYREF
  bool v687; // [esp+227h] [ebp-26Dh]
  char v688; // [esp+228h] [ebp-26Ch] BYREF
  bool v689; // [esp+229h] [ebp-26Bh]
  char v690; // [esp+22Ah] [ebp-26Ah] BYREF
  char v691; // [esp+22Bh] [ebp-269h]
  char v692; // [esp+22Ch] [ebp-268h] BYREF
  char v693; // [esp+22Dh] [ebp-267h]
  char v694; // [esp+22Eh] [ebp-266h] BYREF
  char v695; // [esp+22Fh] [ebp-265h]
  char v696; // [esp+230h] [ebp-264h] BYREF
  char v697; // [esp+231h] [ebp-263h]
  char v698; // [esp+232h] [ebp-262h] BYREF
  char v699; // [esp+233h] [ebp-261h]
  char v700; // [esp+234h] [ebp-260h] BYREF
  char v701; // [esp+235h] [ebp-25Fh]
  char v702; // [esp+236h] [ebp-25Eh] BYREF
  char v703; // [esp+237h] [ebp-25Dh]
  char v704; // [esp+238h] [ebp-25Ch] BYREF
  char v705; // [esp+239h] [ebp-25Bh]
  char v706; // [esp+23Ah] [ebp-25Ah] BYREF
  char v707; // [esp+23Bh] [ebp-259h]
  char v708; // [esp+23Ch] [ebp-258h] BYREF
  char v709; // [esp+23Dh] [ebp-257h]
  char v710; // [esp+23Eh] [ebp-256h] BYREF
  char v711; // [esp+23Fh] [ebp-255h]
  char v712; // [esp+240h] [ebp-254h] BYREF
  char v713; // [esp+241h] [ebp-253h]
  char v714; // [esp+242h] [ebp-252h] BYREF
  char v715; // [esp+243h] [ebp-251h]
  char v716; // [esp+244h] [ebp-250h] BYREF
  bool v717; // [esp+245h] [ebp-24Fh]
  char v718; // [esp+246h] [ebp-24Eh] BYREF
  bool v719; // [esp+247h] [ebp-24Dh]
  char v720; // [esp+248h] [ebp-24Ch] BYREF
  bool v721; // [esp+249h] [ebp-24Bh]
  char v722; // [esp+24Ah] [ebp-24Ah] BYREF
  bool v723; // [esp+24Bh] [ebp-249h]
  char v724; // [esp+24Ch] [ebp-248h] BYREF
  bool v725; // [esp+24Dh] [ebp-247h]
  char v726; // [esp+24Eh] [ebp-246h] BYREF
  bool v727; // [esp+24Fh] [ebp-245h]
  char v728; // [esp+250h] [ebp-244h] BYREF
  bool v729; // [esp+251h] [ebp-243h]
  char v730; // [esp+252h] [ebp-242h] BYREF
  bool v731; // [esp+253h] [ebp-241h]
  char v732; // [esp+254h] [ebp-240h] BYREF
  bool v733; // [esp+255h] [ebp-23Fh]
  char v734; // [esp+256h] [ebp-23Eh] BYREF
  bool v735; // [esp+257h] [ebp-23Dh]
  char v736; // [esp+258h] [ebp-23Ch] BYREF
  bool v737; // [esp+259h] [ebp-23Bh]
  char v738; // [esp+25Ah] [ebp-23Ah] BYREF
  bool v739; // [esp+25Bh] [ebp-239h]
  char v740; // [esp+25Ch] [ebp-238h] BYREF
  char v741; // [esp+25Dh] [ebp-237h]
  char v742; // [esp+25Eh] [ebp-236h] BYREF
  char v743; // [esp+25Fh] [ebp-235h]
  char v744; // [esp+260h] [ebp-234h] BYREF
  char v745; // [esp+261h] [ebp-233h]
  char v746; // [esp+262h] [ebp-232h] BYREF
  char v747; // [esp+263h] [ebp-231h]
  char v748; // [esp+264h] [ebp-230h] BYREF
  char v749; // [esp+265h] [ebp-22Fh]
  char v750; // [esp+266h] [ebp-22Eh] BYREF
  char v751; // [esp+267h] [ebp-22Dh]
  char v752; // [esp+268h] [ebp-22Ch] BYREF
  char v753; // [esp+269h] [ebp-22Bh]
  char v754; // [esp+26Ah] [ebp-22Ah] BYREF
  char v755; // [esp+26Bh] [ebp-229h]
  char v756; // [esp+26Ch] [ebp-228h] BYREF
  char v757; // [esp+26Dh] [ebp-227h]
  char v758; // [esp+26Eh] [ebp-226h] BYREF
  char v759; // [esp+26Fh] [ebp-225h]
  char v760; // [esp+270h] [ebp-224h] BYREF
  char v761; // [esp+271h] [ebp-223h]
  char v762; // [esp+272h] [ebp-222h] BYREF
  char v763; // [esp+273h] [ebp-221h]
  char v764; // [esp+274h] [ebp-220h] BYREF
  char v765; // [esp+275h] [ebp-21Fh]
  char v766; // [esp+276h] [ebp-21Eh] BYREF
  char v767; // [esp+277h] [ebp-21Dh] BYREF
  char v768; // [esp+278h] [ebp-21Ch] BYREF
  char v769; // [esp+279h] [ebp-21Bh] BYREF
  char v770; // [esp+27Ah] [ebp-21Ah] BYREF
  char v771; // [esp+27Bh] [ebp-219h] BYREF
  char v772; // [esp+27Ch] [ebp-218h] BYREF
  char v773; // [esp+27Dh] [ebp-217h] BYREF
  char v774; // [esp+27Eh] [ebp-216h] BYREF
  char v775; // [esp+27Fh] [ebp-215h] BYREF
  char v776; // [esp+280h] [ebp-214h] BYREF
  char v777; // [esp+281h] [ebp-213h] BYREF
  char v778; // [esp+282h] [ebp-212h] BYREF
  char v779; // [esp+283h] [ebp-211h] BYREF
  char v780; // [esp+284h] [ebp-210h] BYREF
  char v781; // [esp+285h] [ebp-20Fh] BYREF
  char v782; // [esp+286h] [ebp-20Eh] BYREF
  char v783; // [esp+287h] [ebp-20Dh] BYREF
  char v784; // [esp+288h] [ebp-20Ch] BYREF
  char v785; // [esp+289h] [ebp-20Bh] BYREF
  char v786; // [esp+28Ah] [ebp-20Ah] BYREF
  char v787; // [esp+28Bh] [ebp-209h] BYREF
  char v788; // [esp+28Ch] [ebp-208h] BYREF
  char v789; // [esp+28Dh] [ebp-207h] BYREF
  char v790; // [esp+28Eh] [ebp-206h] BYREF
  char v791; // [esp+28Fh] [ebp-205h] BYREF
  char v792; // [esp+290h] [ebp-204h] BYREF
  char v793; // [esp+291h] [ebp-203h] BYREF
  char v794; // [esp+292h] [ebp-202h] BYREF
  char v795; // [esp+293h] [ebp-201h] BYREF
  char v796; // [esp+294h] [ebp-200h] BYREF
  char v797; // [esp+295h] [ebp-1FFh] BYREF
  char v798; // [esp+296h] [ebp-1FEh] BYREF
  char v799; // [esp+297h] [ebp-1FDh] BYREF
  char v800; // [esp+298h] [ebp-1FCh] BYREF
  char v801; // [esp+299h] [ebp-1FBh] BYREF
  char v802; // [esp+29Ah] [ebp-1FAh] BYREF
  char v803; // [esp+29Bh] [ebp-1F9h] BYREF
  char v804; // [esp+29Ch] [ebp-1F8h] BYREF
  char v805; // [esp+29Dh] [ebp-1F7h] BYREF
  char v806; // [esp+29Eh] [ebp-1F6h] BYREF
  char v807; // [esp+29Fh] [ebp-1F5h] BYREF
  char v808; // [esp+2A0h] [ebp-1F4h] BYREF
  char v809; // [esp+2A1h] [ebp-1F3h] BYREF
  char v810; // [esp+2A2h] [ebp-1F2h] BYREF
  char v811; // [esp+2A3h] [ebp-1F1h] BYREF
  char v812; // [esp+2A4h] [ebp-1F0h] BYREF
  char v813; // [esp+2A5h] [ebp-1EFh] BYREF
  char v814; // [esp+2A6h] [ebp-1EEh] BYREF
  char v815; // [esp+2A7h] [ebp-1EDh] BYREF
  char v816; // [esp+2A8h] [ebp-1ECh] BYREF
  char v817; // [esp+2A9h] [ebp-1EBh] BYREF
  char v818; // [esp+2AAh] [ebp-1EAh] BYREF
  char v819; // [esp+2ABh] [ebp-1E9h] BYREF
  char v820; // [esp+2ACh] [ebp-1E8h] BYREF
  char v821; // [esp+2ADh] [ebp-1E7h] BYREF
  char v822; // [esp+2AEh] [ebp-1E6h] BYREF
  char v823; // [esp+2AFh] [ebp-1E5h] BYREF
  char v824; // [esp+2B0h] [ebp-1E4h] BYREF
  char v825; // [esp+2B1h] [ebp-1E3h] BYREF
  char v826; // [esp+2B2h] [ebp-1E2h] BYREF
  char v827; // [esp+2B3h] [ebp-1E1h] BYREF
  char v828; // [esp+2B4h] [ebp-1E0h] BYREF
  char v829; // [esp+2B5h] [ebp-1DFh] BYREF
  char v830; // [esp+2B6h] [ebp-1DEh] BYREF
  char v831; // [esp+2B7h] [ebp-1DDh] BYREF
  char v832; // [esp+2B8h] [ebp-1DCh] BYREF
  char v833; // [esp+2B9h] [ebp-1DBh] BYREF
  char v834; // [esp+2BAh] [ebp-1DAh] BYREF
  char v835; // [esp+2BBh] [ebp-1D9h] BYREF
  char v836; // [esp+2BCh] [ebp-1D8h] BYREF
  char v837; // [esp+2BDh] [ebp-1D7h] BYREF
  char v838; // [esp+2BEh] [ebp-1D6h] BYREF
  char v839; // [esp+2BFh] [ebp-1D5h] BYREF
  char v840; // [esp+2C0h] [ebp-1D4h] BYREF
  char v841; // [esp+2C1h] [ebp-1D3h] BYREF
  char v842; // [esp+2C2h] [ebp-1D2h] BYREF
  char v843; // [esp+2C3h] [ebp-1D1h] BYREF
  char v844; // [esp+2C4h] [ebp-1D0h] BYREF
  char v845; // [esp+2C5h] [ebp-1CFh] BYREF
  char v846; // [esp+2C6h] [ebp-1CEh] BYREF
  char v847; // [esp+2C7h] [ebp-1CDh] BYREF
  char v848; // [esp+2C8h] [ebp-1CCh] BYREF
  char v849; // [esp+2C9h] [ebp-1CBh] BYREF
  char v850; // [esp+2CAh] [ebp-1CAh] BYREF
  char v851; // [esp+2CBh] [ebp-1C9h] BYREF
  char v852; // [esp+2CCh] [ebp-1C8h] BYREF
  char v853; // [esp+2CDh] [ebp-1C7h] BYREF
  char v854; // [esp+2CEh] [ebp-1C6h] BYREF
  char v855; // [esp+2CFh] [ebp-1C5h] BYREF
  char v856; // [esp+2D0h] [ebp-1C4h] BYREF
  char v857; // [esp+2D1h] [ebp-1C3h] BYREF
  char v858; // [esp+2D2h] [ebp-1C2h] BYREF
  char v859; // [esp+2D3h] [ebp-1C1h] BYREF
  char v860; // [esp+2D4h] [ebp-1C0h] BYREF
  char v861; // [esp+2D5h] [ebp-1BFh] BYREF
  char v862; // [esp+2D6h] [ebp-1BEh] BYREF
  char v863; // [esp+2D7h] [ebp-1BDh] BYREF
  char v864; // [esp+2D8h] [ebp-1BCh] BYREF
  char v865; // [esp+2D9h] [ebp-1BBh] BYREF
  char v866; // [esp+2DAh] [ebp-1BAh] BYREF
  char v867; // [esp+2DBh] [ebp-1B9h] BYREF
  char v868; // [esp+2DCh] [ebp-1B8h] BYREF
  char v869; // [esp+2DDh] [ebp-1B7h] BYREF
  char v870; // [esp+2DEh] [ebp-1B6h] BYREF
  char v871; // [esp+2DFh] [ebp-1B5h] BYREF
  char v872; // [esp+2E0h] [ebp-1B4h] BYREF
  char v873; // [esp+2E1h] [ebp-1B3h] BYREF
  char v874; // [esp+2E2h] [ebp-1B2h] BYREF
  char v875; // [esp+2E3h] [ebp-1B1h] BYREF
  char v876; // [esp+2E4h] [ebp-1B0h] BYREF
  char v877; // [esp+2E5h] [ebp-1AFh] BYREF
  char v878; // [esp+2E6h] [ebp-1AEh] BYREF
  char v879; // [esp+2E7h] [ebp-1ADh] BYREF
  char v880; // [esp+2E8h] [ebp-1ACh] BYREF
  char v881; // [esp+2E9h] [ebp-1ABh] BYREF
  char v882; // [esp+2EAh] [ebp-1AAh] BYREF
  char v883; // [esp+2EBh] [ebp-1A9h] BYREF
  char v884; // [esp+2ECh] [ebp-1A8h] BYREF
  char v885; // [esp+2EDh] [ebp-1A7h] BYREF
  char v886; // [esp+2EEh] [ebp-1A6h] BYREF
  char v887; // [esp+2EFh] [ebp-1A5h] BYREF
  char v888; // [esp+2F0h] [ebp-1A4h] BYREF
  char v889; // [esp+2F1h] [ebp-1A3h] BYREF
  char v890; // [esp+2F2h] [ebp-1A2h] BYREF
  char v891; // [esp+2F3h] [ebp-1A1h] BYREF
  char v892; // [esp+2F4h] [ebp-1A0h] BYREF
  char v893; // [esp+2F5h] [ebp-19Fh] BYREF
  char v894; // [esp+2F6h] [ebp-19Eh] BYREF
  char v895; // [esp+2F7h] [ebp-19Dh] BYREF
  char v896; // [esp+2F8h] [ebp-19Ch] BYREF
  char v897; // [esp+2F9h] [ebp-19Bh] BYREF
  char v898; // [esp+2FAh] [ebp-19Ah] BYREF
  char v899; // [esp+2FBh] [ebp-199h] BYREF
  char v900; // [esp+2FCh] [ebp-198h] BYREF
  char v901; // [esp+2FDh] [ebp-197h] BYREF
  char v902; // [esp+2FEh] [ebp-196h] BYREF
  char v903; // [esp+2FFh] [ebp-195h] BYREF
  char v904; // [esp+300h] [ebp-194h] BYREF
  char v905; // [esp+301h] [ebp-193h] BYREF
  char v906; // [esp+302h] [ebp-192h] BYREF
  char v907; // [esp+303h] [ebp-191h] BYREF
  char v908; // [esp+304h] [ebp-190h] BYREF
  char v909; // [esp+305h] [ebp-18Fh] BYREF
  char v910; // [esp+306h] [ebp-18Eh] BYREF
  char v911; // [esp+307h] [ebp-18Dh] BYREF
  char v912; // [esp+308h] [ebp-18Ch] BYREF
  char v913; // [esp+309h] [ebp-18Bh] BYREF
  char v914; // [esp+30Ah] [ebp-18Ah] BYREF
  char v915; // [esp+30Bh] [ebp-189h] BYREF
  char v916; // [esp+30Ch] [ebp-188h] BYREF
  char v917; // [esp+30Dh] [ebp-187h] BYREF
  char v918; // [esp+30Eh] [ebp-186h] BYREF
  char v919; // [esp+30Fh] [ebp-185h] BYREF
  char v920; // [esp+310h] [ebp-184h] BYREF
  char v921; // [esp+311h] [ebp-183h] BYREF
  char v922; // [esp+312h] [ebp-182h] BYREF
  char v923; // [esp+313h] [ebp-181h] BYREF
  char v924; // [esp+314h] [ebp-180h] BYREF
  char v925; // [esp+315h] [ebp-17Fh] BYREF
  char v926; // [esp+316h] [ebp-17Eh] BYREF
  char v927; // [esp+317h] [ebp-17Dh] BYREF
  char v928; // [esp+318h] [ebp-17Ch] BYREF
  char v929; // [esp+319h] [ebp-17Bh] BYREF
  char v930; // [esp+31Ah] [ebp-17Ah] BYREF
  char v931; // [esp+31Bh] [ebp-179h] BYREF
  char v932; // [esp+31Ch] [ebp-178h] BYREF
  char v933; // [esp+31Dh] [ebp-177h] BYREF
  char v934; // [esp+31Eh] [ebp-176h] BYREF
  char v935; // [esp+31Fh] [ebp-175h] BYREF
  char v936; // [esp+320h] [ebp-174h] BYREF
  char v937; // [esp+321h] [ebp-173h] BYREF
  char v938; // [esp+322h] [ebp-172h] BYREF
  char v939; // [esp+323h] [ebp-171h] BYREF
  char v940; // [esp+324h] [ebp-170h] BYREF
  char v941; // [esp+325h] [ebp-16Fh] BYREF
  char v942; // [esp+326h] [ebp-16Eh] BYREF
  char v943; // [esp+327h] [ebp-16Dh] BYREF
  char v944; // [esp+328h] [ebp-16Ch] BYREF
  char v945; // [esp+329h] [ebp-16Bh] BYREF
  char v946; // [esp+32Ah] [ebp-16Ah] BYREF
  char v947; // [esp+32Bh] [ebp-169h] BYREF
  char v948; // [esp+32Ch] [ebp-168h] BYREF
  char v949; // [esp+32Dh] [ebp-167h] BYREF
  char v950; // [esp+32Eh] [ebp-166h] BYREF
  char v951; // [esp+32Fh] [ebp-165h] BYREF
  char v952; // [esp+330h] [ebp-164h] BYREF
  char v953; // [esp+331h] [ebp-163h] BYREF
  char v954; // [esp+332h] [ebp-162h] BYREF
  char v955; // [esp+333h] [ebp-161h] BYREF
  char v956; // [esp+334h] [ebp-160h] BYREF
  char v957; // [esp+335h] [ebp-15Fh] BYREF
  char v958; // [esp+336h] [ebp-15Eh] BYREF
  char v959; // [esp+337h] [ebp-15Dh] BYREF
  char v960; // [esp+338h] [ebp-15Ch] BYREF
  char v961; // [esp+339h] [ebp-15Bh] BYREF
  char v962; // [esp+33Ah] [ebp-15Ah] BYREF
  char v963; // [esp+33Bh] [ebp-159h] BYREF
  char v964; // [esp+33Ch] [ebp-158h] BYREF
  char v965; // [esp+33Dh] [ebp-157h] BYREF
  char v966; // [esp+33Eh] [ebp-156h] BYREF
  char v967; // [esp+33Fh] [ebp-155h] BYREF
  char v968; // [esp+340h] [ebp-154h] BYREF
  char v969; // [esp+341h] [ebp-153h] BYREF
  char v970; // [esp+342h] [ebp-152h] BYREF
  char v971; // [esp+343h] [ebp-151h] BYREF
  char v972; // [esp+344h] [ebp-150h] BYREF
  char v973; // [esp+345h] [ebp-14Fh] BYREF
  char v974; // [esp+346h] [ebp-14Eh] BYREF
  char v975; // [esp+347h] [ebp-14Dh] BYREF
  char v976; // [esp+348h] [ebp-14Ch] BYREF
  char v977; // [esp+349h] [ebp-14Bh] BYREF
  char v978; // [esp+34Ah] [ebp-14Ah] BYREF
  char v979; // [esp+34Bh] [ebp-149h] BYREF
  char v980; // [esp+34Ch] [ebp-148h] BYREF
  char v981; // [esp+34Dh] [ebp-147h] BYREF
  char v982; // [esp+34Eh] [ebp-146h] BYREF
  char v983; // [esp+34Fh] [ebp-145h] BYREF
  char v984; // [esp+350h] [ebp-144h] BYREF
  char v985; // [esp+351h] [ebp-143h] BYREF
  char v986; // [esp+352h] [ebp-142h] BYREF
  char v987; // [esp+353h] [ebp-141h] BYREF
  char v988; // [esp+354h] [ebp-140h] BYREF
  char v989; // [esp+355h] [ebp-13Fh] BYREF
  char v990; // [esp+356h] [ebp-13Eh] BYREF
  char v991; // [esp+357h] [ebp-13Dh] BYREF
  char v992; // [esp+358h] [ebp-13Ch] BYREF
  char v993; // [esp+359h] [ebp-13Bh] BYREF
  char v994; // [esp+35Ah] [ebp-13Ah] BYREF
  char v995; // [esp+35Bh] [ebp-139h] BYREF
  char v996; // [esp+35Ch] [ebp-138h] BYREF
  char v997; // [esp+35Dh] [ebp-137h] BYREF
  char v998; // [esp+35Eh] [ebp-136h] BYREF
  char v999; // [esp+35Fh] [ebp-135h] BYREF
  char v1000; // [esp+360h] [ebp-134h] BYREF
  char v1001; // [esp+361h] [ebp-133h] BYREF
  char v1002; // [esp+362h] [ebp-132h] BYREF
  char v1003; // [esp+363h] [ebp-131h] BYREF
  char v1004; // [esp+364h] [ebp-130h] BYREF
  char v1005; // [esp+365h] [ebp-12Fh] BYREF
  char v1006; // [esp+366h] [ebp-12Eh] BYREF
  char v1007; // [esp+367h] [ebp-12Dh] BYREF
  char v1008; // [esp+368h] [ebp-12Ch] BYREF
  char v1009; // [esp+369h] [ebp-12Bh] BYREF
  char v1010; // [esp+36Ah] [ebp-12Ah] BYREF
  char v1011; // [esp+36Bh] [ebp-129h] BYREF
  char v1012; // [esp+36Ch] [ebp-128h] BYREF
  char v1013; // [esp+36Dh] [ebp-127h] BYREF
  char v1014; // [esp+36Eh] [ebp-126h] BYREF
  char v1015; // [esp+36Fh] [ebp-125h] BYREF
  char v1016; // [esp+370h] [ebp-124h] BYREF
  char v1017; // [esp+371h] [ebp-123h] BYREF
  char v1018; // [esp+372h] [ebp-122h] BYREF
  char v1019; // [esp+373h] [ebp-121h] BYREF
  char v1020; // [esp+374h] [ebp-120h] BYREF
  char v1021; // [esp+375h] [ebp-11Fh] BYREF
  char v1022; // [esp+376h] [ebp-11Eh] BYREF
  char v1023; // [esp+377h] [ebp-11Dh] BYREF
  char v1024; // [esp+378h] [ebp-11Ch] BYREF
  char v1025; // [esp+379h] [ebp-11Bh] BYREF
  char v1026; // [esp+37Ah] [ebp-11Ah] BYREF
  char v1027; // [esp+37Bh] [ebp-119h] BYREF
  char v1028; // [esp+37Ch] [ebp-118h] BYREF
  char v1029; // [esp+37Dh] [ebp-117h] BYREF
  char v1030; // [esp+37Eh] [ebp-116h] BYREF
  char v1031; // [esp+37Fh] [ebp-115h] BYREF
  char v1032; // [esp+380h] [ebp-114h] BYREF
  char v1033; // [esp+381h] [ebp-113h] BYREF
  char v1034; // [esp+382h] [ebp-112h] BYREF
  char v1035; // [esp+383h] [ebp-111h] BYREF
  char v1036; // [esp+384h] [ebp-110h] BYREF
  char v1037; // [esp+385h] [ebp-10Fh] BYREF
  char v1038; // [esp+386h] [ebp-10Eh] BYREF
  char v1039; // [esp+387h] [ebp-10Dh] BYREF
  char v1040; // [esp+388h] [ebp-10Ch] BYREF
  char v1041; // [esp+389h] [ebp-10Bh] BYREF
  char v1042; // [esp+38Ah] [ebp-10Ah] BYREF
  char v1043; // [esp+38Bh] [ebp-109h] BYREF
  char v1044; // [esp+38Ch] [ebp-108h] BYREF
  char v1045; // [esp+38Dh] [ebp-107h] BYREF
  char v1046; // [esp+38Eh] [ebp-106h] BYREF
  char v1047; // [esp+38Fh] [ebp-105h] BYREF
  char v1048; // [esp+390h] [ebp-104h] BYREF
  char v1049; // [esp+391h] [ebp-103h] BYREF
  char v1050; // [esp+392h] [ebp-102h] BYREF
  char v1051; // [esp+393h] [ebp-101h] BYREF
  char v1052; // [esp+394h] [ebp-100h] BYREF
  char v1053; // [esp+395h] [ebp-FFh] BYREF
  char v1054; // [esp+396h] [ebp-FEh] BYREF
  char v1055; // [esp+397h] [ebp-FDh] BYREF
  char v1056; // [esp+398h] [ebp-FCh] BYREF
  char v1057; // [esp+399h] [ebp-FBh] BYREF
  char v1058; // [esp+39Ah] [ebp-FAh] BYREF
  char v1059; // [esp+39Bh] [ebp-F9h] BYREF
  char v1060; // [esp+39Ch] [ebp-F8h] BYREF
  char v1061; // [esp+39Dh] [ebp-F7h] BYREF
  char v1062; // [esp+39Eh] [ebp-F6h] BYREF
  char v1063; // [esp+39Fh] [ebp-F5h] BYREF
  char v1064; // [esp+3A0h] [ebp-F4h] BYREF
  char v1065; // [esp+3A1h] [ebp-F3h] BYREF
  char v1066; // [esp+3A2h] [ebp-F2h] BYREF
  char v1067; // [esp+3A3h] [ebp-F1h] BYREF
  char v1068; // [esp+3A4h] [ebp-F0h] BYREF
  char v1069; // [esp+3A5h] [ebp-EFh] BYREF
  char v1070; // [esp+3A6h] [ebp-EEh] BYREF
  char v1071; // [esp+3A7h] [ebp-EDh] BYREF
  char v1072; // [esp+3A8h] [ebp-ECh] BYREF
  char v1073; // [esp+3A9h] [ebp-EBh] BYREF
  char v1074; // [esp+3AAh] [ebp-EAh] BYREF
  char v1075; // [esp+3ABh] [ebp-E9h] BYREF
  char v1076; // [esp+3ACh] [ebp-E8h] BYREF
  char v1077; // [esp+3ADh] [ebp-E7h] BYREF
  char v1078; // [esp+3AEh] [ebp-E6h] BYREF
  char v1079; // [esp+3AFh] [ebp-E5h] BYREF
  char v1080; // [esp+3B0h] [ebp-E4h] BYREF
  char v1081; // [esp+3B1h] [ebp-E3h] BYREF
  char v1082; // [esp+3B2h] [ebp-E2h] BYREF
  char v1083; // [esp+3B3h] [ebp-E1h] BYREF
  char v1084; // [esp+3B4h] [ebp-E0h] BYREF
  char v1085; // [esp+3B5h] [ebp-DFh] BYREF
  char v1086; // [esp+3B6h] [ebp-DEh] BYREF
  char v1087; // [esp+3B7h] [ebp-DDh] BYREF
  char v1088; // [esp+3B8h] [ebp-DCh] BYREF
  char v1089; // [esp+3B9h] [ebp-DBh] BYREF
  char v1090; // [esp+3BAh] [ebp-DAh] BYREF
  char v1091; // [esp+3BBh] [ebp-D9h] BYREF
  char v1092; // [esp+3BCh] [ebp-D8h] BYREF
  char v1093; // [esp+3BDh] [ebp-D7h] BYREF
  char v1094; // [esp+3BEh] [ebp-D6h] BYREF
  char v1095; // [esp+3BFh] [ebp-D5h] BYREF
  char v1096; // [esp+3C0h] [ebp-D4h] BYREF
  char v1097; // [esp+3C1h] [ebp-D3h] BYREF
  char v1098; // [esp+3C2h] [ebp-D2h] BYREF
  char v1099; // [esp+3C3h] [ebp-D1h] BYREF
  char v1100; // [esp+3C4h] [ebp-D0h] BYREF
  char v1101; // [esp+3C5h] [ebp-CFh] BYREF
  char v1102; // [esp+3C6h] [ebp-CEh] BYREF
  char v1103; // [esp+3C7h] [ebp-CDh] BYREF
  double v1104; // [esp+3C8h] [ebp-CCh]
  double v1105; // [esp+3D0h] [ebp-C4h]
  double v1106; // [esp+3D8h] [ebp-BCh]
  double v1107; // [esp+3E0h] [ebp-B4h]
  __int16 v1108; // [esp+3ECh] [ebp-A8h]
  double v1109; // [esp+3F0h] [ebp-A4h]
  __int16 v1110; // [esp+3F8h] [ebp-9Ch]
  unsigned __int8 *v1111; // [esp+3FCh] [ebp-98h]
  __int16 j; // [esp+400h] [ebp-94h]
  __int16 v1113[4]; // [esp+404h] [ebp-90h] BYREF
  __int16 v1114[4]; // [esp+40Ch] [ebp-88h] BYREF
  int v1115; // [esp+414h] [ebp-80h] BYREF
  int v1116; // [esp+418h] [ebp-7Ch] BYREF
  __int16 v1117[4]; // [esp+41Ch] [ebp-78h] BYREF
  __int16 v1118; // [esp+424h] [ebp-70h]
  __int16 v1119[4]; // [esp+428h] [ebp-6Ch] BYREF
  int v1120; // [esp+430h] [ebp-64h] BYREF
  int v1121; // [esp+434h] [ebp-60h]
  int v1122; // [esp+438h] [ebp-5Ch]
  int v1123; // [esp+43Ch] [ebp-58h] BYREF
  __int16 v1124; // [esp+440h] [ebp-54h]
  int v1125; // [esp+444h] [ebp-50h] BYREF
  double v1126; // [esp+448h] [ebp-4Ch]
  int v1127; // [esp+454h] [ebp-40h] BYREF
  __int16 v1128; // [esp+458h] [ebp-3Ch] BYREF
  __int16 v1129[4]; // [esp+45Ch] [ebp-38h] BYREF
  __int16 v1130[4]; // [esp+464h] [ebp-30h] BYREF
  int v1131; // [esp+46Ch] [ebp-28h] BYREF
  __int16 v1132; // [esp+470h] [ebp-24h] BYREF
  int v1133; // [esp+474h] [ebp-20h]
  __int16 v1134; // [esp+478h] [ebp-1Ch]
  __int16 i; // [esp+47Ch] [ebp-18h]
  __int16 v1136[4]; // [esp+480h] [ebp-14h] BYREF
  int v1137; // [esp+490h] [ebp-4h]

  v643 = 0;
  v1122 = sub_47E420((_DWORD *)dword_791364);
  sub_4C7C40(v1119);
  v1137 = 0;
  sub_4C7F10(v1117, a1);
  LOBYTE(v1137) = 1;
  sub_484320(v1136, (int)v1119);
  LOBYTE(v1137) = 2;
  sub_4846A0(v1119, (int)v1117);
  sub_485680(v1119, v1114, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v1137) = 3;
  sub_4846F0(v1114, v1113, (int)v1117);
  LOBYTE(v1137) = 4;
  sub_4846F0(v1114, v1130, (int)v1113);
  LOBYTE(v1137) = 5;
  sub_4846F0(v1117, v1129, (int)v1130);
  LOBYTE(v1137) = 6;
  sub_485940(v1114, &v1115, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v1137) = 7;
  sub_485940(v1117, &v1127, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v1137) = 8;
  sub_485940(v1113, &v1125, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v1137) = 9;
  sub_485940(v1130, &v1120, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v1137) = 10;
  sub_485940(v1129, &v1116, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v1137) = 11;
  if ( a1 >= 4 )
  {
    v1123 = 0;
    v1128 = 0;
  }
  else
  {
    sub_49C1D0(v1119, &v1123, &v1128);
  }
  sub_49C1D0(v1117, &v1131, &v1132);
  v1134 = sub_49B360(v1117);
  v1118 = 0;
  v1126 = -0.02;
  v285 = (unsigned __int8 *)dword_791390;
  v1 = sub_4A2160(&v1115, &v1103);
  if ( sub_4A1E10(v1, v285) )
  {
    v1118 = 0;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v290 = sub_4A21B0(&v1127, &v1097);
        v6 = sub_4A21B0(&v1115, &v1098);
        if ( sub_4A1FB0(v6, v290) )
        {
          v291 = (unsigned __int8 *)dword_7913E0;
          v7 = sub_4A2200(&v1115, &v1096);
          if ( sub_4A1FB0(v7, v291) )
          {
            v1126 = 0.9;
          }
          else
          {
            v292 = (unsigned __int8 *)dword_7913BC;
            v8 = sub_4A2200(&v1115, &v1095);
            if ( sub_4A1FB0(v8, v292) )
            {
              v1126 = 0.7;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_791400;
              v9 = sub_4A2200(&v1115, &v1094);
              if ( sub_4A1FB0(v9, v293) )
              {
                v1126 = 0.6;
              }
              else
              {
                v294 = (unsigned __int8 *)dword_79138C;
                v10 = sub_4A2200(&v1115, &v1093);
                if ( sub_4A1FB0(v10, v294) )
                  v1126 = 0.4;
                else
                  v1126 = 0.1;
              }
            }
          }
        }
        else
        {
          v295 = (unsigned __int8 *)dword_7913C8;
          v11 = sub_4A21B0(&v1115, &v1092);
          if ( sub_4A1FB0(v11, v295) )
          {
            v1126 = 0.9;
          }
          else
          {
            v296 = (unsigned __int8 *)dword_7913E0;
            v12 = sub_4A21B0(&v1115, &v1091);
            if ( sub_4A1FB0(v12, v296) )
            {
              v1126 = 0.7;
            }
            else
            {
              v297 = (unsigned __int8 *)dword_7913BC;
              v13 = sub_4A21B0(&v1115, &v1090);
              if ( sub_4A1FB0(v13, v297) )
                v1126 = 0.4;
              else
                v1126 = 0.2;
            }
          }
        }
      }
      else
      {
        v298 = sub_4A21B0(&v1127, &v1088);
        v14 = sub_4A21B0(&v1115, &v1089);
        if ( sub_4A1FB0(v14, v298) )
        {
          v299 = sub_4A2200(&v1127, &v1086);
          v15 = sub_4A2200(&v1115, &v1087);
          if ( sub_4A1FB0(v15, v299) )
          {
            v300 = (unsigned __int8 *)dword_7913BC;
            v16 = sub_4A2250(&v1115, &v1085);
            if ( sub_4A1FB0(v16, v300) )
            {
              v1126 = 0.9;
            }
            else
            {
              v301 = (unsigned __int8 *)dword_791400;
              v17 = sub_4A2250(&v1115, &v1084);
              if ( sub_4A1FB0(v17, v301) )
              {
                v1126 = 0.5;
              }
              else
              {
                v302 = (unsigned __int8 *)dword_79138C;
                v18 = sub_4A2250(&v1115, &v1083);
                if ( sub_4A1FB0(v18, v302) )
                  v1126 = 0.2;
                else
                  v1126 = 0.05;
              }
            }
          }
          else
          {
            v303 = (unsigned __int8 *)dword_7913E0;
            v19 = sub_4A2200(&v1115, &v1082);
            if ( sub_4A1FB0(v19, v303) )
            {
              v1126 = 0.9;
            }
            else
            {
              v304 = (unsigned __int8 *)dword_7913BC;
              v20 = sub_4A2200(&v1115, &v1081);
              if ( sub_4A1FB0(v20, v304) )
              {
                v1126 = 0.6;
              }
              else
              {
                v305 = (unsigned __int8 *)dword_791400;
                v21 = sub_4A2200(&v1115, &v1080);
                if ( sub_4A1FB0(v21, v305) )
                {
                  v1126 = 0.4;
                }
                else
                {
                  v306 = (unsigned __int8 *)dword_79138C;
                  v22 = sub_4A2200(&v1115, &v1079);
                  if ( sub_4A1FB0(v22, v306) )
                    v1126 = 0.2;
                  else
                    v1126 = 0.05;
                }
              }
            }
          }
        }
        else
        {
          v307 = (unsigned __int8 *)dword_7913C8;
          v23 = sub_4A21B0(&v1115, &v1078);
          if ( sub_4A1FB0(v23, v307) )
          {
            v1126 = 0.9;
          }
          else
          {
            v308 = (unsigned __int8 *)dword_7913E0;
            v24 = sub_4A21B0(&v1115, &v1077);
            if ( sub_4A1FB0(v24, v308) )
            {
              v1126 = 0.6;
            }
            else
            {
              v309 = (unsigned __int8 *)dword_7913BC;
              v25 = sub_4A21B0(&v1115, &v1076);
              if ( sub_4A1FB0(v25, v309) )
                v1126 = 0.3;
              else
                v1126 = 0.1;
            }
          }
        }
      }
    }
    else
    {
      v286 = (unsigned __int8 *)dword_7913C8;
      v2 = sub_4A21B0(&v1115, &v1102);
      if ( sub_4A1FB0(v2, v286) )
      {
        v1126 = 0.9;
      }
      else
      {
        v287 = (unsigned __int8 *)dword_7913E0;
        v3 = sub_4A21B0(&v1115, &v1101);
        if ( sub_4A1FB0(v3, v287) )
        {
          v1126 = 0.7;
        }
        else
        {
          v288 = (unsigned __int8 *)dword_7913BC;
          v4 = sub_4A21B0(&v1115, &v1100);
          if ( sub_4A1FB0(v4, v288) )
          {
            v1126 = 0.6;
          }
          else
          {
            v289 = (unsigned __int8 *)dword_791400;
            v5 = sub_4A21B0(&v1115, &v1099);
            if ( sub_4A1FB0(v5, v289) )
              v1126 = 0.4;
            else
              v1126 = 0.1;
          }
        }
      }
    }
  }
  else
  {
    v310 = (unsigned __int8 *)dword_7913B0;
    v26 = sub_4A2160(&v1115, &v1075);
    if ( sub_4A1E10(v26, v310) )
    {
      v1118 = 1;
      v311 = (unsigned __int8 *)dword_7913B0;
      v27 = sub_4A2160(&v1127, &v1074);
      if ( sub_4A1E10(v27, v311) )
      {
        v312 = sub_4A2200(&v1127, &v1072);
        v28 = sub_4A2200(&v1115, &v1073);
        if ( sub_4A1FB0(v28, v312) )
        {
          v313 = sub_4A2250(&v1127, &v1070);
          v29 = sub_4A2250(&v1115, &v1071);
          if ( sub_4A1FB0(v29, v313) )
          {
            v314 = (unsigned __int8 *)dword_7913BC;
            v30 = sub_4A22A0(&v1115, &v1069);
            if ( sub_4A1FB0(v30, v314) )
            {
              v1126 = 0.9;
            }
            else
            {
              v315 = (unsigned __int8 *)dword_791400;
              v31 = sub_4A22A0(&v1115, &v1068);
              if ( sub_4A1FB0(v31, v315) )
              {
                v1126 = 0.7;
              }
              else
              {
                v316 = (unsigned __int8 *)dword_79138C;
                v32 = sub_4A22A0(&v1115, &v1067);
                if ( sub_4A1FB0(v32, v316) )
                {
                  v1126 = 0.6;
                }
                else
                {
                  v317 = (unsigned __int8 *)dword_7913F4;
                  v33 = sub_4A22A0(&v1115, &v1066);
                  if ( sub_4A1FB0(v33, v317) )
                    v1126 = 0.4;
                  else
                    v1126 = 0.1;
                }
              }
            }
          }
          else
          {
            v318 = (unsigned __int8 *)dword_7913E0;
            v34 = sub_4A2250(&v1115, &v1065);
            if ( sub_4A1FB0(v34, v318) )
            {
              v1126 = 0.9;
            }
            else
            {
              v319 = (unsigned __int8 *)dword_7913BC;
              v35 = sub_4A2250(&v1115, &v1064);
              if ( sub_4A1FB0(v35, v319) )
              {
                v1126 = 0.7;
              }
              else
              {
                v320 = (unsigned __int8 *)dword_791400;
                v36 = sub_4A2250(&v1115, &v1063);
                if ( sub_4A1FB0(v36, v320) )
                {
                  v1126 = 0.6;
                }
                else
                {
                  v321 = (unsigned __int8 *)dword_79138C;
                  v37 = sub_4A2200(&v1115, &v1062);
                  if ( sub_4A1FB0(v37, v321) )
                    v1126 = 0.4;
                  else
                    v1126 = 0.1;
                }
              }
            }
          }
        }
        else
        {
          v322 = (unsigned __int8 *)dword_7913C8;
          v38 = sub_4A2200(&v1115, &v1061);
          if ( sub_4A1FB0(v38, v322) )
          {
            v1126 = 0.9;
          }
          else
          {
            v323 = (unsigned __int8 *)dword_7913E0;
            v39 = sub_4A2200(&v1115, &v1060);
            if ( sub_4A1FB0(v39, v323) )
            {
              v1126 = 0.7;
            }
            else
            {
              v324 = (unsigned __int8 *)dword_7913BC;
              v40 = sub_4A2200(&v1115, &v1059);
              if ( sub_4A1FB0(v40, v324) )
              {
                v1126 = 0.6;
              }
              else
              {
                v325 = (unsigned __int8 *)dword_791400;
                v41 = sub_4A2200(&v1115, &v1058);
                if ( sub_4A1FB0(v41, v325) )
                  v1126 = 0.4;
                else
                  v1126 = 0.1;
              }
            }
          }
        }
      }
      else if ( a1 )
      {
        v338 = sub_4A21B0(&v1127, &v1044);
        v54 = sub_4A21B0(&v1115, &v1045);
        if ( sub_4A2010(v54, v338) )
        {
          v339 = (unsigned __int8 *)dword_7913C8;
          v55 = sub_4A21B0(&v1115, &v1043);
          if ( sub_4A1FB0(v55, v339) )
          {
            v1126 = 1.0;
          }
          else
          {
            v340 = (unsigned __int8 *)dword_7913E0;
            v56 = sub_4A21B0(&v1115, &v1042);
            if ( sub_4A1FB0(v56, v340) )
            {
              v1126 = 0.9;
            }
            else
            {
              v341 = (unsigned __int8 *)dword_7913BC;
              v57 = sub_4A21B0(&v1115, &v1041);
              if ( sub_4A1FB0(v57, v341) )
              {
                v1126 = 0.85;
              }
              else
              {
                v342 = (unsigned __int8 *)dword_791400;
                v58 = sub_4A21B0(&v1115, &v1040);
                if ( sub_4A1FB0(v58, v342) )
                  v1126 = 0.8;
                else
                  v1126 = 0.75;
              }
            }
          }
        }
        else
        {
          v343 = sub_4A21B0(&v1127, &v1038);
          v59 = sub_4A21B0(&v1115, &v1039);
          if ( sub_4A1FB0(v59, v343) )
            v1126 = 0.5;
          else
            v1126 = 0.2;
        }
      }
      else
      {
        v326 = (unsigned __int8 *)dword_7913C8;
        v42 = sub_4A21B0(&v1115, &v1057);
        if ( sub_4A1FB0(v42, v326) )
        {
          v1126 = 0.9615384615384616;
        }
        else
        {
          v327 = (unsigned __int8 *)dword_7913E0;
          v43 = sub_4A21B0(&v1115, &v1056);
          if ( sub_4A1FB0(v43, v327) )
          {
            v1126 = 0.8846153846153846;
          }
          else
          {
            v328 = (unsigned __int8 *)dword_7913BC;
            v44 = sub_4A21B0(&v1115, &v1055);
            if ( sub_4A1FB0(v44, v328) )
            {
              v1126 = 0.8076923076923077;
            }
            else
            {
              v329 = (unsigned __int8 *)dword_791400;
              v45 = sub_4A21B0(&v1115, &v1054);
              if ( sub_4A1FB0(v45, v329) )
              {
                v1126 = 0.7307692307692307;
              }
              else
              {
                v330 = (unsigned __int8 *)dword_79138C;
                v46 = sub_4A21B0(&v1115, &v1053);
                if ( sub_4A1FB0(v46, v330) )
                {
                  v1126 = 0.6538461538461539;
                }
                else
                {
                  v331 = (unsigned __int8 *)dword_7913F4;
                  v47 = sub_4A21B0(&v1115, &v1052);
                  if ( sub_4A1FB0(v47, v331) )
                  {
                    v1126 = 0.5769230769230769;
                  }
                  else
                  {
                    v332 = (unsigned __int8 *)dword_791410;
                    v48 = sub_4A21B0(&v1115, &v1051);
                    if ( sub_4A1FB0(v48, v332) )
                    {
                      v1126 = 0.5;
                    }
                    else
                    {
                      v333 = (unsigned __int8 *)dword_7913F8;
                      v49 = sub_4A21B0(&v1115, &v1050);
                      if ( sub_4A1FB0(v49, v333) )
                      {
                        v1126 = 0.4230769230769231;
                      }
                      else
                      {
                        v334 = (unsigned __int8 *)dword_791404;
                        v50 = sub_4A21B0(&v1115, &v1049);
                        if ( sub_4A1FB0(v50, v334) )
                        {
                          v1126 = 0.3461538461538461;
                        }
                        else
                        {
                          v335 = (unsigned __int8 *)dword_7913A4;
                          v51 = sub_4A21B0(&v1115, &v1048);
                          if ( sub_4A1FB0(v51, v335) )
                          {
                            v1126 = 0.2692307692307692;
                          }
                          else
                          {
                            v336 = (unsigned __int8 *)dword_791414;
                            v52 = sub_4A21B0(&v1115, &v1047);
                            if ( sub_4A1FB0(v52, v336) )
                            {
                              v1126 = 0.1923076923076923;
                            }
                            else
                            {
                              v337 = (unsigned __int8 *)dword_7913D8;
                              v53 = sub_4A21B0(&v1115, &v1046);
                              if ( sub_4A1FB0(v53, v337) )
                                v1126 = 0.1153846153846154;
                              else
                                v1126 = 0.03846153846153846;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v344 = (unsigned __int8 *)dword_791380;
      v60 = sub_4A2160(&v1115, &v1037);
      if ( sub_4A1E10(v60, v344) )
      {
        v1118 = 2;
        v345 = (unsigned __int8 *)dword_791380;
        v61 = sub_4A2160(&v1127, &v1036);
        if ( sub_4A1E10(v61, v345) )
        {
          v346 = sub_4A21B0(&v1127, &v1034);
          v62 = sub_4A21B0(&v1115, &v1035);
          if ( sub_4A2010(v62, v346) )
          {
            v347 = (unsigned __int8 *)dword_7913C8;
            v63 = sub_4A21B0(&v1115, &v1033);
            if ( sub_4A1FB0(v63, v347) )
            {
              v1126 = 0.95;
            }
            else
            {
              v348 = (unsigned __int8 *)dword_7913E0;
              v64 = sub_4A21B0(&v1115, &v1032);
              if ( sub_4A1FB0(v64, v348) )
              {
                v1126 = 0.85;
              }
              else
              {
                v349 = (unsigned __int8 *)dword_7913BC;
                v65 = sub_4A21B0(&v1115, &v1031);
                if ( sub_4A1FB0(v65, v349) )
                {
                  v1126 = 0.75;
                }
                else
                {
                  v350 = (unsigned __int8 *)dword_791400;
                  v66 = sub_4A21B0(&v1115, &v1030);
                  if ( sub_4A1FB0(v66, v350) )
                    v1126 = 0.65;
                  else
                    v1126 = 0.55;
                }
              }
            }
          }
          else
          {
            v351 = sub_4A2200(&v1127, &v1028);
            v67 = sub_4A2200(&v1115, &v1029);
            if ( sub_4A2010(v67, v351) )
            {
              v352 = sub_4A2200(&v1127, &v1026);
              v68 = sub_4A2200(&v1115, &v1027);
              if ( sub_4A2010(v68, v352) )
              {
                v353 = (unsigned __int8 *)dword_7913E0;
                v69 = sub_4A21B0(&v1115, &v1025);
                if ( sub_4A1FB0(v69, v353) )
                {
                  v1126 = 0.95;
                }
                else
                {
                  v354 = (unsigned __int8 *)dword_7913BC;
                  v70 = sub_4A21B0(&v1115, &v1024);
                  if ( sub_4A1FB0(v70, v354) )
                  {
                    v1126 = 0.85;
                  }
                  else
                  {
                    v355 = (unsigned __int8 *)dword_791400;
                    v71 = sub_4A21B0(&v1115, &v1023);
                    if ( sub_4A1FB0(v71, v355) )
                    {
                      v1126 = 0.75;
                    }
                    else
                    {
                      v356 = (unsigned __int8 *)dword_79138C;
                      v72 = sub_4A21B0(&v1115, &v1022);
                      if ( sub_4A1FB0(v72, v356) )
                        v1126 = 0.65;
                      else
                        v1126 = 0.55;
                    }
                  }
                }
              }
            }
            else
            {
              v357 = (unsigned __int8 *)dword_7913C8;
              v73 = sub_4A2250(&v1115, &v1021);
              if ( sub_4A1FB0(v73, v357) )
                v1126 = 0.5;
              else
                v1126 = 0.2;
            }
          }
        }
        else
        {
          v358 = (unsigned __int8 *)dword_7913B0;
          v74 = sub_4A2160(&v1127, &v1020);
          if ( sub_4A1E10(v74, v358) )
          {
            v359 = sub_4A21B0(&v1127, &v1018);
            v75 = sub_4A21B0(&v1115, &v1019);
            if ( sub_4A1FB0(v75, v359) )
            {
              v360 = sub_4A2200(&v1127, &v1016);
              v76 = sub_4A2200(&v1115, &v1017);
              if ( sub_4A2010(v76, v360) )
              {
                v361 = (unsigned __int8 *)dword_7913E0;
                v77 = sub_4A21B0(&v1115, &v1015);
                if ( sub_4A1FB0(v77, v361) )
                {
                  v1126 = 0.95;
                }
                else
                {
                  v362 = (unsigned __int8 *)dword_7913BC;
                  v78 = sub_4A21B0(&v1115, &v1014);
                  if ( sub_4A1FB0(v78, v362) )
                  {
                    v1126 = 0.85;
                  }
                  else
                  {
                    v363 = (unsigned __int8 *)dword_791400;
                    v79 = sub_4A21B0(&v1115, &v1013);
                    if ( sub_4A1FB0(v79, v363) )
                      v1126 = 0.75;
                    else
                      v1126 = 0.65;
                  }
                }
              }
              else
              {
                v364 = sub_4A2200(&v1127, &v1011);
                v80 = sub_4A2200(&v1115, &v1012);
                if ( sub_4A1FB0(v80, v364) )
                  v1126 = 0.5;
                else
                  v1126 = 0.25;
              }
            }
            else
            {
              v365 = sub_4A21B0(&v1127, &v1009);
              v81 = sub_4A2200(&v1115, &v1010);
              if ( sub_4A1FB0(v81, v365) )
              {
                v366 = sub_4A2200(&v1127, &v1007);
                v82 = sub_4A21B0(&v1115, &v1008);
                if ( sub_4A2010(v82, v366) )
                {
                  v367 = (unsigned __int8 *)dword_7913C8;
                  v83 = sub_4A21B0(&v1115, &v1006);
                  if ( sub_4A1FB0(v83, v367) )
                  {
                    v1126 = 0.95;
                  }
                  else
                  {
                    v368 = (unsigned __int8 *)dword_7913E0;
                    v84 = sub_4A21B0(&v1115, &v1005);
                    if ( sub_4A1FB0(v84, v368) )
                    {
                      v1126 = 0.85;
                    }
                    else
                    {
                      v369 = (unsigned __int8 *)dword_7913BC;
                      v85 = sub_4A21B0(&v1115, &v1004);
                      if ( sub_4A1FB0(v85, v369) )
                      {
                        v1126 = 0.75;
                      }
                      else
                      {
                        v370 = (unsigned __int8 *)dword_791400;
                        v86 = sub_4A21B0(&v1115, &v1003);
                        if ( sub_4A1FB0(v86, v370) )
                          v1126 = 0.65;
                        else
                          v1126 = 0.55;
                      }
                    }
                  }
                }
                else
                {
                  v371 = sub_4A2200(&v1127, &v1001);
                  v87 = sub_4A21B0(&v1115, &v1002);
                  if ( sub_4A1FB0(v87, v371) )
                  {
                    v372 = (unsigned __int8 *)dword_7913C8;
                    v88 = sub_4A21B0(&v1115, &v1000);
                    if ( sub_4A1FB0(v88, v372) )
                    {
                      v1126 = 0.95;
                    }
                    else
                    {
                      v373 = (unsigned __int8 *)dword_7913E0;
                      v89 = sub_4A21B0(&v1115, &v999);
                      if ( sub_4A1FB0(v89, v373) )
                      {
                        v1126 = 0.8;
                      }
                      else
                      {
                        v374 = (unsigned __int8 *)dword_7913BC;
                        v90 = sub_4A21B0(&v1115, &v998);
                        if ( sub_4A1FB0(v90, v374) )
                        {
                          v1126 = 0.65;
                        }
                        else
                        {
                          v375 = (unsigned __int8 *)dword_791400;
                          v91 = sub_4A21B0(&v1115, &v997);
                          if ( sub_4A1FB0(v91, v375) )
                            v1126 = 0.5;
                          else
                            v1126 = 0.35;
                        }
                      }
                    }
                  }
                  else
                  {
                    v1126 = 0.35;
                  }
                }
              }
              else
              {
                v376 = (unsigned __int8 *)dword_7913C8;
                v92 = sub_4A21B0(&v1115, &v996);
                if ( sub_4A1FB0(v92, v376) )
                {
                  v1126 = 0.95;
                }
                else
                {
                  v377 = (unsigned __int8 *)dword_7913E0;
                  v93 = sub_4A21B0(&v1115, &v995);
                  if ( sub_4A1FB0(v93, v377) )
                  {
                    v1126 = 0.9;
                  }
                  else
                  {
                    v378 = (unsigned __int8 *)dword_7913BC;
                    v94 = sub_4A21B0(&v1115, &v994);
                    if ( sub_4A1FB0(v94, v378) )
                    {
                      v1126 = 0.85;
                    }
                    else
                    {
                      v379 = (unsigned __int8 *)dword_791400;
                      v95 = sub_4A21B0(&v1115, &v993);
                      if ( sub_4A1FB0(v95, v379) )
                        v1126 = 0.8;
                      else
                        v1126 = 0.75;
                    }
                  }
                }
              }
            }
          }
          else if ( a1 )
          {
            v384 = sub_4A21B0(&v1127, &v987);
            v100 = sub_4A21B0(&v1115, &v988);
            if ( sub_4A2010(v100, v384) )
            {
              v385 = (unsigned __int8 *)dword_7913C8;
              v101 = sub_4A21B0(&v1115, &v986);
              if ( sub_4A1FB0(v101, v385) )
              {
                v1126 = 0.95;
              }
              else
              {
                v386 = (unsigned __int8 *)dword_7913E0;
                v102 = sub_4A21B0(&v1115, &v985);
                if ( sub_4A1FB0(v102, v386) )
                {
                  v1126 = 0.8;
                }
                else
                {
                  v387 = (unsigned __int8 *)dword_7913BC;
                  v103 = sub_4A21B0(&v1115, &v984);
                  if ( sub_4A1FB0(v103, v387) )
                  {
                    v1126 = 0.7;
                  }
                  else
                  {
                    v388 = (unsigned __int8 *)dword_791400;
                    v104 = sub_4A21B0(&v1115, &v983);
                    if ( sub_4A1FB0(v104, v388) )
                      v1126 = 0.6;
                    else
                      v1126 = 0.35;
                  }
                }
              }
            }
            else
            {
              v1126 = 0.2;
            }
          }
          else
          {
            v380 = (unsigned __int8 *)dword_7913C8;
            v96 = sub_4A21B0(&v1115, &v992);
            if ( sub_4A1FB0(v96, v380) )
            {
              v1126 = 0.95;
            }
            else
            {
              v381 = (unsigned __int8 *)dword_7913E0;
              v97 = sub_4A21B0(&v1115, &v991);
              if ( sub_4A1FB0(v97, v381) )
              {
                v1126 = 0.85;
              }
              else
              {
                v382 = (unsigned __int8 *)dword_7913BC;
                v98 = sub_4A21B0(&v1115, &v990);
                if ( sub_4A1FB0(v98, v382) )
                {
                  v1126 = 0.75;
                }
                else
                {
                  v383 = (unsigned __int8 *)dword_791400;
                  v99 = sub_4A21B0(&v1115, &v989);
                  if ( sub_4A1FB0(v99, v383) )
                    v1126 = 0.5;
                  else
                    v1126 = 0.2;
                }
              }
            }
          }
        }
      }
      else
      {
        v389 = (unsigned __int8 *)dword_791418;
        v105 = sub_4A2160(&v1115, &v982);
        if ( sub_4A1E10(v105, v389) )
        {
          v1118 = 3;
          v390 = (unsigned __int8 *)dword_791418;
          v106 = sub_4A2160(&v1127, &v981);
          if ( sub_4A1E10(v106, v390) )
          {
            v391 = sub_4A2200(&v1127, &v979);
            v107 = sub_4A2200(&v1115, &v980);
            if ( sub_4A2010(v107, v391) )
            {
              v392 = (unsigned __int8 *)dword_7913C8;
              v108 = sub_4A2200(&v1115, &v978);
              if ( sub_4A1FB0(v108, v392) )
              {
                v1126 = 0.95;
              }
              else
              {
                v393 = (unsigned __int8 *)dword_7913E0;
                v109 = sub_4A2200(&v1115, &v977);
                if ( sub_4A1FB0(v109, v393) )
                  v1126 = 0.7;
                else
                  v1126 = 0.6;
              }
            }
            else
            {
              v394 = sub_4A2250(&v1127, &v975);
              v110 = sub_4A2250(&v1115, &v976);
              if ( sub_4A2010(v110, v394) )
                v1126 = 0.5;
              else
                v1126 = 0.35;
            }
          }
          else
          {
            v395 = (unsigned __int8 *)dword_7913B0;
            v111 = sub_4A2160(&v1127, &v974);
            if ( sub_4A1E10(v111, v395) )
            {
              v396 = sub_4A2200(&v1127, &v972);
              v112 = sub_4A2200(&v1115, &v973);
              if ( sub_4A2010(v112, v396) )
              {
                v397 = (unsigned __int8 *)dword_7913C8;
                v113 = sub_4A2200(&v1115, &v971);
                if ( sub_4A1FB0(v113, v397) )
                {
                  v1126 = 0.95;
                }
                else
                {
                  v398 = (unsigned __int8 *)dword_7913E0;
                  v114 = sub_4A2200(&v1115, &v970);
                  if ( sub_4A1FB0(v114, v398) )
                    v1126 = 0.75;
                  else
                    v1126 = 0.65;
                }
              }
              else
              {
                v399 = sub_4A2250(&v1127, &v968);
                v115 = sub_4A2250(&v1115, &v969);
                if ( sub_4A2010(v115, v399) )
                  v1126 = 0.5;
                else
                  v1126 = 0.35;
              }
            }
            else
            {
              v400 = (unsigned __int8 *)dword_7913C8;
              v116 = sub_4A21B0(&v1115, &v967);
              if ( sub_4A1FB0(v116, v400) )
              {
                v1126 = 0.9615384615384616;
              }
              else
              {
                v401 = (unsigned __int8 *)dword_7913E0;
                v117 = sub_4A21B0(&v1115, &v966);
                if ( sub_4A1FB0(v117, v401) )
                {
                  v1126 = 0.8846153846153846;
                }
                else
                {
                  v402 = (unsigned __int8 *)dword_7913BC;
                  v118 = sub_4A21B0(&v1115, &v965);
                  if ( sub_4A1FB0(v118, v402) )
                  {
                    v1126 = 0.8076923076923077;
                  }
                  else
                  {
                    v403 = (unsigned __int8 *)dword_791400;
                    v119 = sub_4A21B0(&v1115, &v964);
                    if ( sub_4A1FB0(v119, v403) )
                    {
                      v1126 = 0.7307692307692307;
                    }
                    else
                    {
                      v404 = (unsigned __int8 *)dword_79138C;
                      v120 = sub_4A21B0(&v1115, &v963);
                      if ( sub_4A1FB0(v120, v404) )
                      {
                        v1126 = 0.6538461538461539;
                      }
                      else
                      {
                        v405 = (unsigned __int8 *)dword_7913F4;
                        v121 = sub_4A21B0(&v1115, &v962);
                        if ( sub_4A1FB0(v121, v405) )
                        {
                          v1126 = 0.5769230769230769;
                        }
                        else
                        {
                          v406 = (unsigned __int8 *)dword_791410;
                          v122 = sub_4A21B0(&v1115, &v961);
                          if ( sub_4A1FB0(v122, v406) )
                          {
                            v1126 = 0.5;
                          }
                          else
                          {
                            v407 = (unsigned __int8 *)dword_7913F8;
                            v123 = sub_4A21B0(&v1115, &v960);
                            if ( sub_4A1FB0(v123, v407) )
                            {
                              v1126 = 0.4230769230769231;
                            }
                            else
                            {
                              v408 = (unsigned __int8 *)dword_791404;
                              v124 = sub_4A21B0(&v1115, &v959);
                              if ( sub_4A1FB0(v124, v408) )
                              {
                                v1126 = 0.3461538461538461;
                              }
                              else
                              {
                                v409 = (unsigned __int8 *)dword_7913A4;
                                v125 = sub_4A21B0(&v1115, &v958);
                                if ( sub_4A1FB0(v125, v409) )
                                {
                                  v1126 = 0.2692307692307692;
                                }
                                else
                                {
                                  v410 = (unsigned __int8 *)dword_791414;
                                  v126 = sub_4A21B0(&v1115, &v957);
                                  if ( sub_4A1FB0(v126, v410) )
                                  {
                                    v1126 = 0.1923076923076923;
                                  }
                                  else
                                  {
                                    v411 = (unsigned __int8 *)dword_7913D8;
                                    v127 = sub_4A21B0(&v1115, &v956);
                                    if ( sub_4A1FB0(v127, v411) )
                                      v1126 = 0.1153846153846154;
                                    else
                                      v1126 = 0.03846153846153846;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v412 = (unsigned __int8 *)dword_79140C;
          v128 = sub_4A2160(&v1115, &v955);
          if ( sub_4A1E10(v128, v412) )
          {
            v1118 = 4;
            v413 = (unsigned __int8 *)dword_7913C8;
            v129 = sub_4A21B0(&v1115, &v954);
            if ( sub_4A1FB0(v129, v413) )
            {
              v1126 = 0.95;
            }
            else
            {
              v414 = (unsigned __int8 *)dword_7913E0;
              v130 = sub_4A21B0(&v1115, &v953);
              if ( sub_4A1FB0(v130, v414) )
              {
                v1126 = 0.85;
              }
              else
              {
                v415 = (unsigned __int8 *)dword_7913BC;
                v131 = sub_4A21B0(&v1115, &v952);
                if ( sub_4A1FB0(v131, v415) )
                {
                  v1126 = 0.75;
                }
                else
                {
                  v416 = (unsigned __int8 *)dword_791400;
                  v132 = sub_4A21B0(&v1115, &v951);
                  if ( sub_4A1FB0(v132, v416) )
                  {
                    v1126 = 0.65;
                  }
                  else
                  {
                    v417 = (unsigned __int8 *)dword_79138C;
                    v133 = sub_4A21B0(&v1115, &v950);
                    if ( sub_4A1FB0(v133, v417) )
                    {
                      v1126 = 0.55;
                    }
                    else
                    {
                      v418 = (unsigned __int8 *)dword_7913F4;
                      v134 = sub_4A21B0(&v1115, &v949);
                      if ( sub_4A1FB0(v134, v418) )
                      {
                        v1126 = 0.45;
                      }
                      else
                      {
                        v419 = (unsigned __int8 *)dword_791410;
                        v135 = sub_4A21B0(&v1115, &v948);
                        if ( sub_4A1FB0(v135, v419) )
                        {
                          v1126 = 0.35;
                        }
                        else
                        {
                          v420 = (unsigned __int8 *)dword_7913F8;
                          v136 = sub_4A21B0(&v1115, &v947);
                          if ( sub_4A1FB0(v136, v420) )
                          {
                            v1126 = 0.25;
                          }
                          else
                          {
                            v421 = (unsigned __int8 *)dword_791404;
                            v137 = sub_4A21B0(&v1115, &v946);
                            if ( sub_4A1FB0(v137, v421) )
                              v1126 = 0.15;
                            else
                              v1126 = 0.05;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( a1 > 1 )
            {
              switch ( a1 )
              {
                case 2:
                  v1126 = (1.0 - (double)v1131 / 211876.0) * v1126;
                  break;
                case 3:
                  v1126 = (1.0 - (double)v1131 / 230300.0) * v1126;
                  break;
                case 4:
                  v1126 = (1.0 - (double)v1131 / 249900.0) * v1126;
                  break;
              }
            }
            else
            {
              v1126 = (1.0 - (double)v1131 / 194580.0) * v1126;
            }
          }
          else
          {
            v422 = (unsigned __int8 *)dword_7913A0;
            v138 = sub_4A2160(&v1115, &v945);
            if ( sub_4A1E10(v138, v422) )
            {
              v1118 = 5;
              switch ( v1132 )
              {
                case 4:
                  v423 = sub_4A21B0(&v1120, &v943);
                  v139 = sub_4A21B0(&v1125, &v944);
                  if ( sub_4A2010(v139, v423) )
                  {
                    v424 = (unsigned __int8 *)dword_7913C8;
                    v140 = sub_4A21B0(&v1125, &v942);
                    if ( sub_4A1FB0(v140, v424) )
                    {
                      v1126 = 1.0;
                    }
                    else
                    {
                      v425 = (unsigned __int8 *)dword_7913E0;
                      v141 = sub_4A21B0(&v1125, &v941);
                      if ( sub_4A1FB0(v141, v425) )
                      {
                        v1126 = 0.7;
                      }
                      else
                      {
                        v426 = (unsigned __int8 *)dword_7913BC;
                        v142 = sub_4A21B0(&v1125, &v940);
                        if ( sub_4A1FB0(v142, v426) )
                          v1126 = 0.4;
                        else
                          v1126 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v427 = sub_4A2200(&v1120, &v938);
                    v143 = sub_4A2200(&v1125, &v939);
                    if ( sub_4A2010(v143, v427) )
                    {
                      v428 = (unsigned __int8 *)dword_7913E0;
                      v144 = sub_4A21B0(&v1125, &v937);
                      if ( sub_4A1FB0(v144, v428) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v429 = (unsigned __int8 *)dword_7913BC;
                        v145 = sub_4A21B0(&v1125, &v936);
                        if ( sub_4A1FB0(v145, v429) )
                        {
                          v1126 = 0.7;
                        }
                        else
                        {
                          v430 = (unsigned __int8 *)dword_791400;
                          v146 = sub_4A21B0(&v1125, &v935);
                          if ( sub_4A1FB0(v146, v430) )
                            v1126 = 0.4;
                          else
                            v1126 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v431 = sub_4A2250(&v1120, &v933);
                      v147 = sub_4A2250(&v1125, &v934);
                      if ( sub_4A2010(v147, v431) )
                      {
                        v432 = (unsigned __int8 *)dword_7913BC;
                        v148 = sub_4A21B0(&v1125, &v932);
                        if ( sub_4A1FB0(v148, v432) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v433 = (unsigned __int8 *)dword_791400;
                          v149 = sub_4A21B0(&v1125, &v931);
                          if ( sub_4A1FB0(v149, v433) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v434 = (unsigned __int8 *)dword_79138C;
                            v150 = sub_4A21B0(&v1125, &v930);
                            if ( sub_4A1FB0(v150, v434) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                      else
                      {
                        v435 = sub_4A22A0(&v1120, &v928);
                        v151 = sub_4A22A0(&v1125, &v929);
                        if ( sub_4A2010(v151, v435) )
                        {
                          v436 = (unsigned __int8 *)dword_791400;
                          v152 = sub_4A21B0(&v1125, &v927);
                          if ( sub_4A1FB0(v152, v436) )
                          {
                            v1126 = 1.0;
                          }
                          else
                          {
                            v437 = (unsigned __int8 *)dword_79138C;
                            v153 = sub_4A21B0(&v1125, &v926);
                            if ( sub_4A1FB0(v153, v437) )
                            {
                              v1126 = 0.7;
                            }
                            else
                            {
                              v438 = (unsigned __int8 *)dword_7913F4;
                              v154 = sub_4A21B0(&v1125, &v925);
                              if ( sub_4A1FB0(v154, v438) )
                                v1126 = 0.4;
                              else
                                v1126 = 0.2;
                            }
                          }
                        }
                        else
                        {
                          v439 = (unsigned __int8 *)dword_7913F4;
                          v155 = sub_4A21B0(&v1125, &v924);
                          if ( sub_4A1FB0(v155, v439) )
                          {
                            v1126 = 1.0;
                          }
                          else
                          {
                            v440 = (unsigned __int8 *)dword_791410;
                            v156 = sub_4A21B0(&v1125, &v923);
                            if ( sub_4A1FB0(v156, v440) )
                            {
                              v1126 = 0.7;
                            }
                            else
                            {
                              v441 = (unsigned __int8 *)dword_7913F8;
                              v157 = sub_4A21B0(&v1125, &v922);
                              if ( sub_4A1FB0(v157, v441) )
                                v1126 = 0.4;
                              else
                                v1126 = 0.2;
                            }
                          }
                        }
                      }
                    }
                  }
                  break;
                case 3:
                  v442 = sub_4A21B0(&v1120, &v920);
                  v158 = sub_4A21B0(&v1125, &v921);
                  if ( sub_4A2010(v158, v442) )
                  {
                    v443 = (unsigned __int8 *)dword_7913C8;
                    v159 = sub_4A21B0(&v1125, &v919);
                    if ( sub_4A1FB0(v159, v443) )
                    {
                      v1126 = 1.0;
                    }
                    else
                    {
                      v444 = (unsigned __int8 *)dword_7913E0;
                      v160 = sub_4A21B0(&v1125, &v918);
                      if ( sub_4A1FB0(v160, v444) )
                      {
                        v1126 = 0.7;
                      }
                      else
                      {
                        v445 = (unsigned __int8 *)dword_7913BC;
                        v161 = sub_4A21B0(&v1125, &v917);
                        if ( sub_4A1FB0(v161, v445) )
                          v1126 = 0.4;
                        else
                          v1126 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v446 = sub_4A2200(&v1120, &v915);
                    v162 = sub_4A2200(&v1125, &v916);
                    if ( sub_4A2010(v162, v446) )
                    {
                      v447 = (unsigned __int8 *)dword_7913E0;
                      v163 = sub_4A21B0(&v1125, &v914);
                      if ( sub_4A1FB0(v163, v447) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v448 = (unsigned __int8 *)dword_7913BC;
                        v164 = sub_4A21B0(&v1125, &v913);
                        if ( sub_4A1FB0(v164, v448) )
                        {
                          v1126 = 0.7;
                        }
                        else
                        {
                          v449 = (unsigned __int8 *)dword_791400;
                          v165 = sub_4A21B0(&v1125, &v912);
                          if ( sub_4A1FB0(v165, v449) )
                            v1126 = 0.4;
                          else
                            v1126 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v450 = sub_4A2250(&v1120, &v910);
                      v166 = sub_4A2250(&v1125, &v911);
                      if ( sub_4A2010(v166, v450) )
                      {
                        v451 = (unsigned __int8 *)dword_7913BC;
                        v167 = sub_4A21B0(&v1125, &v909);
                        if ( sub_4A1FB0(v167, v451) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v452 = (unsigned __int8 *)dword_791400;
                          v168 = sub_4A21B0(&v1125, &v908);
                          if ( sub_4A1FB0(v168, v452) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v453 = (unsigned __int8 *)dword_79138C;
                            v169 = sub_4A21B0(&v1125, &v907);
                            if ( sub_4A1FB0(v169, v453) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                      else
                      {
                        v454 = (unsigned __int8 *)dword_791400;
                        v170 = sub_4A21B0(&v1125, &v906);
                        if ( sub_4A1FB0(v170, v454) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v455 = (unsigned __int8 *)dword_79138C;
                          v171 = sub_4A21B0(&v1125, &v905);
                          if ( sub_4A1FB0(v171, v455) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v456 = (unsigned __int8 *)dword_7913F4;
                            v172 = sub_4A21B0(&v1125, &v904);
                            if ( sub_4A1FB0(v172, v456) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                    }
                  }
                  break;
                case 2:
                  if ( v1134 == 14 || v1134 == 20 || v1134 == 24 )
                  {
                    v457 = sub_4A21B0(&v1120, &v902);
                    v173 = sub_4A21B0(&v1125, &v903);
                    if ( sub_4A2010(v173, v457)
                      && (v458 = sub_4A21B0(&v1116, &v900), v174 = sub_4A21B0(&v1125, &v901), sub_4A2010(v174, v458)) )
                    {
                      v459 = (unsigned __int8 *)dword_7913C8;
                      v175 = sub_4A21B0(&v1125, &v899);
                      if ( sub_4A1FB0(v175, v459) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v460 = (unsigned __int8 *)dword_7913E0;
                        v176 = sub_4A21B0(&v1125, &v898);
                        if ( sub_4A1FB0(v176, v460) )
                        {
                          v1126 = 0.7;
                        }
                        else
                        {
                          v461 = (unsigned __int8 *)dword_7913BC;
                          v177 = sub_4A21B0(&v1125, &v897);
                          if ( sub_4A1FB0(v177, v461) )
                            v1126 = 0.4;
                          else
                            v1126 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v462 = sub_4A2200(&v1120, &v895);
                      v178 = sub_4A2200(&v1125, &v896);
                      if ( sub_4A2010(v178, v462)
                        && (v463 = sub_4A2200(&v1116, &v893), v179 = sub_4A2200(&v1125, &v894), sub_4A2010(v179, v463)) )
                      {
                        v464 = (unsigned __int8 *)dword_7913E0;
                        v180 = sub_4A21B0(&v1125, &v892);
                        if ( sub_4A1FB0(v180, v464) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v465 = (unsigned __int8 *)dword_7913BC;
                          v181 = sub_4A21B0(&v1125, &v891);
                          if ( sub_4A1FB0(v181, v465) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v466 = (unsigned __int8 *)dword_791400;
                            v182 = sub_4A21B0(&v1125, &v890);
                            if ( sub_4A1FB0(v182, v466) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                      else
                      {
                        v467 = (unsigned __int8 *)dword_7913BC;
                        v183 = sub_4A21B0(&v1125, &v889);
                        if ( sub_4A1FB0(v183, v467) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v468 = (unsigned __int8 *)dword_791400;
                          v184 = sub_4A21B0(&v1125, &v888);
                          if ( sub_4A1FB0(v184, v468) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v469 = (unsigned __int8 *)dword_79138C;
                            v185 = sub_4A21B0(&v1125, &v887);
                            if ( sub_4A1FB0(v185, v469) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v470 = sub_4A21B0(&v1120, &v885);
                    v186 = sub_4A21B0(&v1125, &v886);
                    if ( sub_4A2010(v186, v470) )
                    {
                      v471 = (unsigned __int8 *)dword_7913C8;
                      v187 = sub_4A21B0(&v1125, &v884);
                      if ( sub_4A1FB0(v187, v471) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v472 = (unsigned __int8 *)dword_7913E0;
                        v188 = sub_4A21B0(&v1125, &v883);
                        if ( sub_4A1FB0(v188, v472) )
                        {
                          v1126 = 0.7;
                        }
                        else
                        {
                          v473 = (unsigned __int8 *)dword_7913BC;
                          v189 = sub_4A21B0(&v1125, &v882);
                          if ( sub_4A1FB0(v189, v473) )
                            v1126 = 0.4;
                          else
                            v1126 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v474 = sub_4A2200(&v1120, &v880);
                      v190 = sub_4A2200(&v1125, &v881);
                      if ( sub_4A2010(v190, v474) )
                      {
                        v475 = (unsigned __int8 *)dword_7913E0;
                        v191 = sub_4A21B0(&v1125, &v879);
                        if ( sub_4A1FB0(v191, v475) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v476 = (unsigned __int8 *)dword_7913BC;
                          v192 = sub_4A21B0(&v1125, &v878);
                          if ( sub_4A1FB0(v192, v476) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v477 = (unsigned __int8 *)dword_791400;
                            v193 = sub_4A21B0(&v1125, &v877);
                            if ( sub_4A1FB0(v193, v477) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                      else
                      {
                        v478 = (unsigned __int8 *)dword_7913BC;
                        v194 = sub_4A21B0(&v1125, &v876);
                        if ( sub_4A1FB0(v194, v478) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v479 = (unsigned __int8 *)dword_791400;
                          v195 = sub_4A21B0(&v1125, &v875);
                          if ( sub_4A1FB0(v195, v479) )
                          {
                            v1126 = 0.7;
                          }
                          else
                          {
                            v480 = (unsigned __int8 *)dword_79138C;
                            v196 = sub_4A21B0(&v1125, &v874);
                            if ( sub_4A1FB0(v196, v480) )
                              v1126 = 0.4;
                            else
                              v1126 = 0.2;
                          }
                        }
                      }
                    }
                  }
                  break;
                default:
                  v481 = (unsigned __int8 *)dword_7913C8;
                  v197 = sub_4A21B0(&v1115, &v873);
                  if ( sub_4A1FB0(v197, v481) )
                  {
                    v1126 = 0.95;
                  }
                  else
                  {
                    v482 = (unsigned __int8 *)dword_7913E0;
                    v198 = sub_4A21B0(&v1115, &v872);
                    if ( sub_4A1FB0(v198, v482) )
                    {
                      v1126 = 0.7;
                    }
                    else
                    {
                      v483 = (unsigned __int8 *)dword_7913BC;
                      v199 = sub_4A21B0(&v1115, &v871);
                      if ( sub_4A1FB0(v199, v483) )
                        v1126 = 0.4;
                      else
                        v1126 = 0.1;
                    }
                  }
                  break;
              }
            }
            else
            {
              v484 = (unsigned __int8 *)dword_7913D4;
              v200 = sub_4A2160(&v1115, &v870);
              if ( sub_4A1E10(v200, v484) )
              {
                v1118 = 6;
                v485 = (unsigned __int8 *)dword_791418;
                v201 = sub_4A2160(&v1127, &v869);
                if ( sub_4A1E10(v201, v485) )
                {
                  v486 = sub_4A21B0(&v1127, &v867);
                  v202 = sub_4A21B0(&v1115, &v868);
                  if ( sub_4A2010(v202, v486) )
                  {
                    v487 = (unsigned __int8 *)dword_7913C8;
                    v203 = sub_4A21B0(&v1115, &v866);
                    if ( sub_4A1FB0(v203, v487) )
                    {
                      v1126 = 1.0;
                    }
                    else
                    {
                      v488 = (unsigned __int8 *)dword_7913E0;
                      v204 = sub_4A21B0(&v1115, &v865);
                      if ( sub_4A1FB0(v204, v488) )
                        v1126 = 0.95;
                      else
                        v1126 = 0.9;
                    }
                  }
                  else
                  {
                    v489 = sub_4A2200(&v1127, &v863);
                    v205 = sub_4A2200(&v1115, &v864);
                    if ( sub_4A2010(v205, v489) )
                    {
                      v490 = (unsigned __int8 *)dword_7913C8;
                      v206 = sub_4A2200(&v1115, &v862);
                      if ( sub_4A1FB0(v206, v490) )
                      {
                        v1126 = 0.8;
                      }
                      else
                      {
                        v491 = (unsigned __int8 *)dword_7913E0;
                        v207 = sub_4A2200(&v1115, &v861);
                        if ( sub_4A1FB0(v207, v491) )
                          v1126 = 0.7;
                        else
                          v1126 = 0.5;
                      }
                    }
                    else
                    {
                      v1126 = 0.2;
                    }
                  }
                }
                else
                {
                  v492 = (unsigned __int8 *)dword_791380;
                  v208 = sub_4A2160(&v1127, &v860);
                  if ( sub_4A1E10(v208, v492) )
                  {
                    v493 = sub_4A21B0(&v1127, &v858);
                    v209 = sub_4A21B0(&v1115, &v859);
                    if ( sub_4A2010(v209, v493) )
                    {
                      v494 = (unsigned __int8 *)dword_7913C8;
                      v210 = sub_4A21B0(&v1115, &v857);
                      if ( sub_4A1FB0(v210, v494) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v495 = (unsigned __int8 *)dword_7913E0;
                        v211 = sub_4A21B0(&v1115, &v856);
                        if ( sub_4A1FB0(v211, v495) )
                          v1126 = 0.95;
                        else
                          v1126 = 0.9;
                      }
                    }
                    else
                    {
                      v496 = sub_4A21B0(&v1127, &v854);
                      v212 = sub_4A21B0(&v1115, &v855);
                      if ( sub_4A1FB0(v212, v496) )
                      {
                        v497 = sub_4A2200(&v1127, &v852);
                        v213 = sub_4A2200(&v1115, &v853);
                        if ( sub_4A2010(v213, v497) )
                          v1126 = 0.8;
                        else
                          v1126 = 0.5;
                      }
                      else
                      {
                        v1126 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v498 = (unsigned __int8 *)dword_7913B0;
                    v214 = sub_4A2160(&v1127, &v851);
                    if ( sub_4A1E10(v214, v498) )
                    {
                      v499 = sub_4A21B0(&v1127, &v849);
                      v215 = sub_4A21B0(&v1115, &v850);
                      if ( sub_4A2010(v215, v499) )
                      {
                        v500 = sub_4A2200(&v1127, &v847);
                        v216 = sub_4A21B0(&v1115, &v848);
                        if ( sub_4A2010(v216, v500) )
                        {
                          v501 = (unsigned __int8 *)dword_7913C8;
                          v217 = sub_4A21B0(&v1115, &v846);
                          if ( sub_4A1FB0(v217, v501) )
                          {
                            v1126 = 1.0;
                          }
                          else
                          {
                            v502 = (unsigned __int8 *)dword_7913E0;
                            v218 = sub_4A21B0(&v1115, &v845);
                            if ( sub_4A1FB0(v218, v502) )
                            {
                              v1126 = 0.95;
                            }
                            else
                            {
                              v503 = (unsigned __int8 *)dword_7913BC;
                              v219 = sub_4A21B0(&v1115, &v844);
                              if ( sub_4A1FB0(v219, v503) )
                                v1126 = 0.9;
                              else
                                v1126 = 0.85;
                            }
                          }
                        }
                        else
                        {
                          v504 = sub_4A2200(&v1127, &v842);
                          v220 = sub_4A21B0(&v1115, &v843);
                          if ( sub_4A1FB0(v220, v504) )
                            v1126 = 0.8;
                          else
                            v1126 = 0.75;
                        }
                      }
                      else
                      {
                        v505 = sub_4A21B0(&v1127, &v840);
                        v221 = sub_4A21B0(&v1115, &v841);
                        if ( sub_4A1FB0(v221, v505) )
                        {
                          v506 = sub_4A2200(&v1127, &v838);
                          v222 = sub_4A2200(&v1115, &v839);
                          if ( sub_4A2010(v222, v506) )
                          {
                            v1126 = 0.65;
                          }
                          else
                          {
                            v507 = sub_4A2200(&v1127, &v836);
                            v223 = sub_4A2200(&v1115, &v837);
                            if ( sub_4A1FB0(v223, v507) )
                              v1126 = 0.5;
                            else
                              v1126 = 0.35;
                          }
                        }
                        else
                        {
                          v1126 = 0.25;
                        }
                      }
                    }
                    else
                    {
                      v508 = (unsigned __int8 *)dword_7913C8;
                      v224 = sub_4A21B0(&v1115, &v835);
                      if ( sub_4A1FB0(v224, v508) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v509 = (unsigned __int8 *)dword_7913E0;
                        v225 = sub_4A21B0(&v1115, &v834);
                        if ( sub_4A1FB0(v225, v509) )
                        {
                          v1126 = 0.9166666666666666;
                        }
                        else
                        {
                          v510 = (unsigned __int8 *)dword_7913BC;
                          v226 = sub_4A21B0(&v1115, &v833);
                          if ( sub_4A1FB0(v226, v510) )
                          {
                            v1126 = 0.8333333333333334;
                          }
                          else
                          {
                            v511 = (unsigned __int8 *)dword_791400;
                            v227 = sub_4A21B0(&v1115, &v832);
                            if ( sub_4A1FB0(v227, v511) )
                            {
                              v1126 = 0.75;
                            }
                            else
                            {
                              v512 = (unsigned __int8 *)dword_79138C;
                              v228 = sub_4A21B0(&v1115, &v831);
                              if ( sub_4A1FB0(v228, v512) )
                              {
                                v1126 = 0.6666666666666666;
                              }
                              else
                              {
                                v513 = (unsigned __int8 *)dword_7913F4;
                                v229 = sub_4A21B0(&v1115, &v830);
                                if ( sub_4A1FB0(v229, v513) )
                                {
                                  v1126 = 0.5833333333333334;
                                }
                                else
                                {
                                  v514 = (unsigned __int8 *)dword_791410;
                                  v230 = sub_4A21B0(&v1115, &v829);
                                  if ( sub_4A1FB0(v230, v514) )
                                  {
                                    v1126 = 0.5;
                                  }
                                  else
                                  {
                                    v515 = (unsigned __int8 *)dword_7913F8;
                                    v231 = sub_4A21B0(&v1115, &v828);
                                    if ( sub_4A1FB0(v231, v515) )
                                    {
                                      v1126 = 0.4166666666666667;
                                    }
                                    else
                                    {
                                      v516 = (unsigned __int8 *)dword_791404;
                                      v232 = sub_4A21B0(&v1115, &v827);
                                      if ( sub_4A1FB0(v232, v516) )
                                      {
                                        v1126 = 0.3333333333333333;
                                      }
                                      else
                                      {
                                        v517 = (unsigned __int8 *)dword_7913A4;
                                        v233 = sub_4A21B0(&v1115, &v826);
                                        if ( sub_4A1FB0(v233, v517) )
                                        {
                                          v1126 = 0.25;
                                        }
                                        else
                                        {
                                          v518 = (unsigned __int8 *)dword_791414;
                                          v234 = sub_4A21B0(&v1115, &v825);
                                          if ( sub_4A1FB0(v234, v518) )
                                          {
                                            v1126 = 0.1666666666666667;
                                          }
                                          else
                                          {
                                            v519 = (unsigned __int8 *)dword_7913D8;
                                            v235 = sub_4A21B0(&v1115, &v824);
                                            if ( sub_4A1FB0(v235, v519) )
                                              v1126 = 0.08333333333333333;
                                            else
                                              v1126 = 0.0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v520 = (unsigned __int8 *)dword_791394;
                v236 = sub_4A2160(&v1115, &v823);
                if ( sub_4A1E10(v236, v520) )
                {
                  v1118 = 7;
                  v521 = (unsigned __int8 *)dword_791394;
                  v237 = sub_4A2160(&v1127, &v822);
                  if ( sub_4A1E10(v237, v521) )
                  {
                    v522 = sub_4A21B0(&v1127, &v820);
                    v238 = sub_4A21B0(&v1115, &v821);
                    if ( sub_4A2010(v238, v522) )
                    {
                      v1126 = 1.0;
                    }
                    else
                    {
                      v523 = (unsigned __int8 *)dword_7913C8;
                      v239 = sub_4A21B0(&v1127, &v819);
                      if ( sub_4A1FB0(v239, v523) )
                      {
                        v524 = (unsigned __int8 *)dword_7913E0;
                        v240 = sub_4A2200(&v1115, &v818);
                        if ( sub_4A1FB0(v240, v524) )
                        {
                          v1126 = 0.98;
                        }
                        else
                        {
                          v525 = (unsigned __int8 *)dword_7913BC;
                          v241 = sub_4A2200(&v1115, &v817);
                          if ( sub_4A1FB0(v241, v525) )
                            v1126 = 0.3;
                          else
                            v1126 = 0.1;
                        }
                      }
                      else
                      {
                        v526 = (unsigned __int8 *)dword_7913C8;
                        v242 = sub_4A2200(&v1115, &v816);
                        if ( sub_4A1FB0(v242, v526) )
                        {
                          v1126 = 0.98;
                        }
                        else
                        {
                          v527 = (unsigned __int8 *)dword_7913E0;
                          v243 = sub_4A2200(&v1115, &v815);
                          if ( sub_4A1FB0(v243, v527) )
                            v1126 = 0.3;
                          else
                            v1126 = 0.1;
                        }
                      }
                    }
                  }
                  else
                  {
                    v528 = (unsigned __int8 *)dword_791418;
                    v244 = sub_4A2160(&v1127, &v814);
                    if ( sub_4A1E10(v244, v528) )
                    {
                      v529 = sub_4A21B0(&v1127, &v812);
                      v245 = sub_4A21B0(&v1115, &v813);
                      if ( sub_4A2010(v245, v529) )
                      {
                        v1126 = 1.0;
                      }
                      else
                      {
                        v530 = sub_4A21B0(&v1127, &v810);
                        v246 = sub_4A21B0(&v1115, &v811);
                        if ( sub_4A1FB0(v246, v530) )
                          v1126 = 0.99;
                        else
                          v1126 = 0.05;
                      }
                    }
                    else
                    {
                      v531 = (unsigned __int8 *)dword_791380;
                      v247 = sub_4A2160(&v1127, &v809);
                      if ( sub_4A1E10(v247, v531) )
                      {
                        v532 = sub_4A21B0(&v1127, &v807);
                        v248 = sub_4A21B0(&v1115, &v808);
                        if ( sub_4A2010(v248, v532) )
                        {
                          v1126 = 1.0;
                        }
                        else
                        {
                          v533 = sub_4A21B0(&v1127, &v805);
                          v249 = sub_4A21B0(&v1115, &v806);
                          if ( sub_4A1FB0(v249, v533) )
                          {
                            v1126 = 0.95;
                          }
                          else
                          {
                            v534 = sub_4A2200(&v1127, &v803);
                            v250 = sub_4A21B0(&v1115, &v804);
                            if ( sub_4A2010(v250, v534) )
                            {
                              v1126 = 0.6;
                            }
                            else
                            {
                              v535 = sub_4A2200(&v1127, &v801);
                              v251 = sub_4A21B0(&v1115, &v802);
                              if ( sub_4A1FB0(v251, v535) )
                                v1126 = 0.3;
                              else
                                v1126 = 0.02;
                            }
                          }
                        }
                      }
                      else
                      {
                        v536 = (unsigned __int8 *)dword_7913B0;
                        v252 = sub_4A2160(&v1127, &v800);
                        if ( sub_4A1E10(v252, v536) )
                        {
                          v537 = sub_4A21B0(&v1127, &v798);
                          v253 = sub_4A21B0(&v1115, &v799);
                          if ( sub_4A2010(v253, v537) )
                          {
                            v538 = (unsigned __int8 *)dword_7913C8;
                            v254 = sub_4A21B0(&v1115, &v797);
                            if ( sub_4A1FB0(v254, v538) )
                            {
                              v1126 = 1.0;
                            }
                            else
                            {
                              v539 = (unsigned __int8 *)dword_7913E0;
                              v255 = sub_4A21B0(&v1115, &v796);
                              if ( sub_4A1FB0(v255, v539) )
                              {
                                v1126 = 0.95;
                              }
                              else
                              {
                                v540 = (unsigned __int8 *)dword_7913BC;
                                v256 = sub_4A21B0(&v1115, &v795);
                                if ( sub_4A1FB0(v256, v540) )
                                {
                                  v1126 = 0.9;
                                }
                                else
                                {
                                  v541 = (unsigned __int8 *)dword_791400;
                                  v257 = sub_4A21B0(&v1115, &v794);
                                  if ( sub_4A1FB0(v257, v541) )
                                    v1126 = 0.85;
                                  else
                                    v1126 = 0.8;
                                }
                              }
                            }
                          }
                          else
                          {
                            v542 = sub_4A21B0(&v1127, &v792);
                            v258 = sub_4A21B0(&v1115, &v793);
                            if ( sub_4A1FB0(v258, v542) )
                            {
                              v543 = (unsigned __int8 *)dword_7913C8;
                              v259 = sub_4A21B0(&v1115, &v791);
                              if ( sub_4A1FB0(v259, v543) )
                              {
                                v1126 = 1.0;
                              }
                              else
                              {
                                v544 = (unsigned __int8 *)dword_7913E0;
                                v260 = sub_4A21B0(&v1115, &v790);
                                if ( sub_4A1FB0(v260, v544) )
                                {
                                  v1126 = 0.9;
                                }
                                else
                                {
                                  v545 = (unsigned __int8 *)dword_7913BC;
                                  v261 = sub_4A21B0(&v1115, &v789);
                                  if ( sub_4A1FB0(v261, v545) )
                                    v1126 = 0.8;
                                  else
                                    v1126 = 0.7;
                                }
                              }
                            }
                            else
                            {
                              v1126 = 0.2;
                            }
                          }
                        }
                        else
                        {
                          v546 = (unsigned __int8 *)dword_7913C8;
                          v262 = sub_4A21B0(&v1115, &v788);
                          if ( sub_4A1FB0(v262, v546) )
                          {
                            v1126 = 1.0;
                          }
                          else
                          {
                            v547 = (unsigned __int8 *)dword_7913E0;
                            v263 = sub_4A21B0(&v1115, &v787);
                            if ( sub_4A1FB0(v263, v547) )
                            {
                              v1126 = 0.9166666666666666;
                            }
                            else
                            {
                              v548 = (unsigned __int8 *)dword_7913BC;
                              v264 = sub_4A21B0(&v1115, &v786);
                              if ( sub_4A1FB0(v264, v548) )
                              {
                                v1126 = 0.8333333333333334;
                              }
                              else
                              {
                                v549 = (unsigned __int8 *)dword_791400;
                                v265 = sub_4A21B0(&v1115, &v785);
                                if ( sub_4A1FB0(v265, v549) )
                                {
                                  v1126 = 0.75;
                                }
                                else
                                {
                                  v550 = (unsigned __int8 *)dword_79138C;
                                  v266 = sub_4A21B0(&v1115, &v784);
                                  if ( sub_4A1FB0(v266, v550) )
                                  {
                                    v1126 = 0.6666666666666666;
                                  }
                                  else
                                  {
                                    v551 = (unsigned __int8 *)dword_7913F4;
                                    v267 = sub_4A21B0(&v1115, &v783);
                                    if ( sub_4A1FB0(v267, v551) )
                                    {
                                      v1126 = 0.5833333333333334;
                                    }
                                    else
                                    {
                                      v552 = (unsigned __int8 *)dword_791410;
                                      v268 = sub_4A21B0(&v1115, &v782);
                                      if ( sub_4A1FB0(v268, v552) )
                                      {
                                        v1126 = 0.5;
                                      }
                                      else
                                      {
                                        v553 = (unsigned __int8 *)dword_7913F8;
                                        v269 = sub_4A21B0(&v1115, &v781);
                                        if ( sub_4A1FB0(v269, v553) )
                                        {
                                          v1126 = 0.4166666666666667;
                                        }
                                        else
                                        {
                                          v554 = (unsigned __int8 *)dword_791404;
                                          v270 = sub_4A21B0(&v1115, &v780);
                                          if ( sub_4A1FB0(v270, v554) )
                                          {
                                            v1126 = 0.3333333333333333;
                                          }
                                          else
                                          {
                                            v555 = (unsigned __int8 *)dword_7913A4;
                                            v271 = sub_4A21B0(&v1115, &v779);
                                            if ( sub_4A1FB0(v271, v555) )
                                            {
                                              v1126 = 0.25;
                                            }
                                            else
                                            {
                                              v556 = (unsigned __int8 *)dword_791414;
                                              v272 = sub_4A21B0(&v1115, &v778);
                                              if ( sub_4A1FB0(v272, v556) )
                                              {
                                                v1126 = 0.1666666666666667;
                                              }
                                              else
                                              {
                                                v557 = (unsigned __int8 *)dword_7913D8;
                                                v273 = sub_4A21B0(&v1115, &v777);
                                                if ( sub_4A1FB0(v273, v557) )
                                                  v1126 = 0.08333333333333333;
                                                else
                                                  v1126 = 0.0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v558 = (unsigned __int8 *)dword_791398;
                  v274 = sub_4A2160(&v1115, &v776);
                  if ( sub_4A1E10(v274, v558) )
                  {
                    v1118 = 8;
                    v559 = (unsigned __int8 *)dword_7913C8;
                    v275 = sub_4A21B0(&v1115, &v775);
                    if ( sub_4A1FB0(v275, v559) )
                    {
                      v1126 = 0.95;
                    }
                    else
                    {
                      v560 = (unsigned __int8 *)dword_7913E0;
                      v276 = sub_4A21B0(&v1115, &v774);
                      if ( sub_4A1FB0(v276, v560) )
                      {
                        v1126 = 0.85;
                      }
                      else
                      {
                        v561 = (unsigned __int8 *)dword_7913BC;
                        v277 = sub_4A21B0(&v1115, &v773);
                        if ( sub_4A1FB0(v277, v561) )
                        {
                          v1126 = 0.75;
                        }
                        else
                        {
                          v562 = (unsigned __int8 *)dword_791400;
                          v278 = sub_4A21B0(&v1115, &v772);
                          if ( sub_4A1FB0(v278, v562) )
                          {
                            v1126 = 0.65;
                          }
                          else
                          {
                            v563 = (unsigned __int8 *)dword_79138C;
                            v279 = sub_4A21B0(&v1115, &v771);
                            if ( sub_4A1FB0(v279, v563) )
                            {
                              v1126 = 0.55;
                            }
                            else
                            {
                              v564 = (unsigned __int8 *)dword_7913F4;
                              v280 = sub_4A21B0(&v1115, &v770);
                              if ( sub_4A1FB0(v280, v564) )
                              {
                                v1126 = 0.45;
                              }
                              else
                              {
                                v565 = (unsigned __int8 *)dword_791410;
                                v281 = sub_4A21B0(&v1115, &v769);
                                if ( sub_4A1FB0(v281, v565) )
                                {
                                  v1126 = 0.35;
                                }
                                else
                                {
                                  v566 = (unsigned __int8 *)dword_7913F8;
                                  v282 = sub_4A21B0(&v1115, &v768);
                                  if ( sub_4A1FB0(v282, v566) )
                                  {
                                    v1126 = 0.25;
                                  }
                                  else
                                  {
                                    v567 = (unsigned __int8 *)dword_791404;
                                    v283 = sub_4A21B0(&v1115, &v767);
                                    if ( sub_4A1FB0(v283, v567) )
                                      v1126 = 0.15;
                                    else
                                      v1126 = 0.05;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( a1 > 1 )
                    {
                      switch ( a1 )
                      {
                        case 2:
                          v1126 = (1.0 - (double)v1131 / 211876.0) * v1126;
                          break;
                        case 3:
                          v1126 = (1.0 - (double)v1131 / 230300.0) * v1126;
                          break;
                        case 4:
                          v1126 = (1.0 - (double)v1131 / 249900.0) * v1126;
                          break;
                      }
                    }
                    else
                    {
                      v1126 = (1.0 - (double)v1131 / 194580.0) * v1126;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v1126 <= -0.01 )
    sub_5E9F20((char)"dblWithinCategory > -0.01", "..\\Casino\\PokerHoldemAI.cpp", 3772);
  if ( v1126 >= 1.01 )
    sub_5E9F20((char)"dblWithinCategory < 1.01", "..\\Casino\\PokerHoldemAI.cpp", 3773);
  v1133 = 0;
  for ( i = 0; i < 9; ++i )
    v1133 += dword_71E868[9 * v1134 - 9 + i];
  v1121 = 0;
  for ( i = 0; i < v1118; ++i )
    v1121 += dword_71E868[9 * v1134 - 9 + i];
  v1121 += (int)((double)dword_71E868[9 * v1134 - 9 + v1118] * v1126);
  dbl_7916E8[v1122] = (double)v1121 / (double)v1133;
  v1124 = 0;
  dbl_791958[v1122] = 0.0;
  for ( j = 0; j < 4; ++j )
  {
    v1111 = 0;
    if ( j )
    {
      switch ( j )
      {
        case 1:
          v1111 = (unsigned __int8 *)dword_790754;
          break;
        case 2:
          v1111 = (unsigned __int8 *)dword_790764;
          break;
        case 3:
          v1111 = (unsigned __int8 *)dword_790770;
          break;
      }
    }
    else
    {
      v1111 = (unsigned __int8 *)dword_79076C;
    }
    if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
    {
      v568 = v1111;
      v284 = sub_47EE90((_DWORD *)dword_791364, &v766);
      if ( sub_4640E0(v284, v568) )
        continue;
    }
    if ( a1 < sub_47F0C0((_DWORD *)dword_791364) || sub_47EFB0((_DWORD *)dword_791364) )
    {
      v642 = sub_464130(&v764, (_BYTE *)dword_7907A4, v1111);
      LOBYTE(v1137) = 12;
      v765 = sub_484BA0(v1136, v642);
      LOBYTE(v1137) = 11;
      ATL::CComCriticalSection::~CComCriticalSection(&v764);
      if ( v765 )
      {
        v1110 = 13;
      }
      else
      {
        v641 = sub_464130(&v762, (_BYTE *)dword_7907A8, v1111);
        LOBYTE(v1137) = 13;
        v763 = sub_484BA0(v1136, v641);
        LOBYTE(v1137) = 11;
        ATL::CComCriticalSection::~CComCriticalSection(&v762);
        if ( v763 )
        {
          v1110 = 12;
        }
        else
        {
          v640 = sub_464130(&v760, (_BYTE *)dword_7907B0, v1111);
          LOBYTE(v1137) = 14;
          v761 = sub_484BA0(v1136, v640);
          LOBYTE(v1137) = 11;
          ATL::CComCriticalSection::~CComCriticalSection(&v760);
          if ( v761 )
          {
            v1110 = 11;
          }
          else
          {
            v639 = sub_464130(&v758, (_BYTE *)dword_790774, v1111);
            LOBYTE(v1137) = 15;
            v759 = sub_484BA0(v1136, v639);
            LOBYTE(v1137) = 11;
            ATL::CComCriticalSection::~CComCriticalSection(&v758);
            if ( v759 )
            {
              v1110 = 10;
            }
            else
            {
              v638 = sub_464130(&v756, (_BYTE *)dword_790788, v1111);
              LOBYTE(v1137) = 16;
              v757 = sub_484BA0(v1136, v638);
              LOBYTE(v1137) = 11;
              ATL::CComCriticalSection::~CComCriticalSection(&v756);
              if ( v757 )
              {
                v1110 = 9;
              }
              else
              {
                v637 = sub_464130(&v754, (_BYTE *)dword_790794, v1111);
                LOBYTE(v1137) = 17;
                v755 = sub_484BA0(v1136, v637);
                LOBYTE(v1137) = 11;
                ATL::CComCriticalSection::~CComCriticalSection(&v754);
                if ( v755 )
                {
                  v1110 = 8;
                }
                else
                {
                  v636 = sub_464130(&v752, (_BYTE *)dword_790798, v1111);
                  LOBYTE(v1137) = 18;
                  v753 = sub_484BA0(v1136, v636);
                  LOBYTE(v1137) = 11;
                  ATL::CComCriticalSection::~CComCriticalSection(&v752);
                  if ( v753 )
                  {
                    v1110 = 7;
                  }
                  else
                  {
                    v635 = sub_464130(&v750, (_BYTE *)dword_790760, v1111);
                    LOBYTE(v1137) = 19;
                    v751 = sub_484BA0(v1136, v635);
                    LOBYTE(v1137) = 11;
                    ATL::CComCriticalSection::~CComCriticalSection(&v750);
                    if ( v751 )
                    {
                      v1110 = 6;
                    }
                    else
                    {
                      v634 = sub_464130(&v748, (_BYTE *)dword_79079C, v1111);
                      LOBYTE(v1137) = 20;
                      v749 = sub_484BA0(v1136, v634);
                      LOBYTE(v1137) = 11;
                      ATL::CComCriticalSection::~CComCriticalSection(&v748);
                      if ( v749 )
                      {
                        v1110 = 5;
                      }
                      else
                      {
                        v633 = sub_464130(&v746, (_BYTE *)dword_790750, v1111);
                        LOBYTE(v1137) = 21;
                        v747 = sub_484BA0(v1136, v633);
                        LOBYTE(v1137) = 11;
                        ATL::CComCriticalSection::~CComCriticalSection(&v746);
                        if ( v747 )
                        {
                          v1110 = 4;
                        }
                        else
                        {
                          v632 = sub_464130(&v744, (_BYTE *)dword_790790, v1111);
                          LOBYTE(v1137) = 22;
                          v745 = sub_484BA0(v1136, v632);
                          LOBYTE(v1137) = 11;
                          ATL::CComCriticalSection::~CComCriticalSection(&v744);
                          if ( v745 )
                          {
                            v1110 = 3;
                          }
                          else
                          {
                            v631 = sub_464130(&v742, (_BYTE *)dword_790768, v1111);
                            LOBYTE(v1137) = 23;
                            v743 = sub_484BA0(v1136, v631);
                            LOBYTE(v1137) = 11;
                            ATL::CComCriticalSection::~CComCriticalSection(&v742);
                            if ( v743 )
                            {
                              v1110 = 2;
                            }
                            else
                            {
                              v630 = sub_464130(&v740, (_BYTE *)dword_790758, v1111);
                              LOBYTE(v1137) = 24;
                              v741 = sub_484BA0(v1136, v630);
                              LOBYTE(v1137) = 11;
                              ATL::CComCriticalSection::~CComCriticalSection(&v740);
                              v1110 = v741 != 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v1110 > 0 )
      {
        v629 = sub_464130(&v738, (_BYTE *)dword_790768, v1111);
        LOBYTE(v1137) = 25;
        v644 = v643 | 1;
        v628 = sub_484BA0(v1117, v629) && v1110 < 2;
        v739 = v628;
        v1137 = 11;
        if ( (v644 & 1) != 0 )
        {
          v644 &= ~1u;
          ATL::CComCriticalSection::~CComCriticalSection(&v738);
        }
        if ( v739 )
          ++v1110;
        v627 = sub_464130(&v736, (_BYTE *)dword_790790, v1111);
        LOBYTE(v1137) = 26;
        v645 = v644 | 2;
        v626 = sub_484BA0(v1117, v627) && v1110 < 3;
        v737 = v626;
        v1137 = 11;
        if ( (v645 & 2) != 0 )
        {
          v645 &= ~2u;
          ATL::CComCriticalSection::~CComCriticalSection(&v736);
        }
        if ( v737 )
          ++v1110;
        v625 = sub_464130(&v734, (_BYTE *)dword_790750, v1111);
        LOBYTE(v1137) = 27;
        v646 = v645 | 4;
        v624 = sub_484BA0(v1117, v625) && v1110 < 4;
        v735 = v624;
        v1137 = 11;
        if ( (v646 & 4) != 0 )
        {
          v646 &= ~4u;
          ATL::CComCriticalSection::~CComCriticalSection(&v734);
        }
        if ( v735 )
          ++v1110;
        v623 = sub_464130(&v732, (_BYTE *)dword_79079C, v1111);
        LOBYTE(v1137) = 28;
        v647 = v646 | 8;
        v622 = sub_484BA0(v1117, v623) && v1110 < 5;
        v733 = v622;
        v1137 = 11;
        if ( (v647 & 8) != 0 )
        {
          v647 &= ~8u;
          ATL::CComCriticalSection::~CComCriticalSection(&v732);
        }
        if ( v733 )
          ++v1110;
        v621 = sub_464130(&v730, (_BYTE *)dword_790760, v1111);
        LOBYTE(v1137) = 29;
        v648 = v647 | 0x10;
        v620 = sub_484BA0(v1117, v621) && v1110 < 6;
        v731 = v620;
        v1137 = 11;
        if ( (v648 & 0x10) != 0 )
        {
          v648 &= ~0x10u;
          ATL::CComCriticalSection::~CComCriticalSection(&v730);
        }
        if ( v731 )
          ++v1110;
        v619 = sub_464130(&v728, (_BYTE *)dword_790798, v1111);
        LOBYTE(v1137) = 30;
        v649 = v648 | 0x20;
        v618 = sub_484BA0(v1117, v619) && v1110 < 7;
        v729 = v618;
        v1137 = 11;
        if ( (v649 & 0x20) != 0 )
        {
          v649 &= ~0x20u;
          ATL::CComCriticalSection::~CComCriticalSection(&v728);
        }
        if ( v729 )
          ++v1110;
        v617 = sub_464130(&v726, (_BYTE *)dword_790794, v1111);
        LOBYTE(v1137) = 31;
        v650 = v649 | 0x40;
        v616 = sub_484BA0(v1117, v617) && v1110 < 8;
        v727 = v616;
        v1137 = 11;
        if ( (v650 & 0x40) != 0 )
        {
          v650 &= ~0x40u;
          ATL::CComCriticalSection::~CComCriticalSection(&v726);
        }
        if ( v727 )
          ++v1110;
        v615 = sub_464130(&v724, (_BYTE *)dword_790788, v1111);
        LOBYTE(v1137) = 32;
        v651 = v650 | 0x80;
        v614 = sub_484BA0(v1117, v615) && v1110 < 9;
        v725 = v614;
        v1137 = 11;
        if ( (v651 & 0x80) != 0 )
        {
          v651 &= ~0x80u;
          ATL::CComCriticalSection::~CComCriticalSection(&v724);
        }
        if ( v725 )
          ++v1110;
        v613 = sub_464130(&v722, (_BYTE *)dword_790774, v1111);
        LOBYTE(v1137) = 33;
        v652 = v651 | 0x100;
        v612 = sub_484BA0(v1117, v613) && v1110 < 10;
        v723 = v612;
        v1137 = 11;
        if ( (v652 & 0x100) != 0 )
        {
          v652 &= ~0x100u;
          ATL::CComCriticalSection::~CComCriticalSection(&v722);
        }
        if ( v723 )
          ++v1110;
        v611 = sub_464130(&v720, (_BYTE *)dword_7907B0, v1111);
        LOBYTE(v1137) = 34;
        v653 = v652 | 0x200;
        v610 = sub_484BA0(v1117, v611) && v1110 < 11;
        v721 = v610;
        v1137 = 11;
        if ( (v653 & 0x200) != 0 )
        {
          v653 &= ~0x200u;
          ATL::CComCriticalSection::~CComCriticalSection(&v720);
        }
        if ( v721 )
          ++v1110;
        v609 = sub_464130(&v718, (_BYTE *)dword_7907A8, v1111);
        LOBYTE(v1137) = 35;
        v654 = v653 | 0x400;
        v608 = sub_484BA0(v1117, v609) && v1110 < 12;
        v719 = v608;
        v1137 = 11;
        if ( (v654 & 0x400) != 0 )
        {
          v654 &= ~0x400u;
          ATL::CComCriticalSection::~CComCriticalSection(&v718);
        }
        if ( v719 )
          ++v1110;
        v607 = sub_464130(&v716, (_BYTE *)dword_7907A4, v1111);
        LOBYTE(v1137) = 36;
        v643 = v654 | 0x800;
        v606 = sub_484BA0(v1117, v607) && v1110 < 13;
        v717 = v606;
        v1137 = 11;
        if ( (v643 & 0x800) != 0 )
        {
          v643 &= ~0x800u;
          ATL::CComCriticalSection::~CComCriticalSection(&v716);
        }
        if ( v717 )
          ++v1110;
        v1109 = (48.0 - (double)a1 - (double)(13 - v1110)) / (48.0 - (double)a1);
        v1109 = (47.0 - (double)a1 - (double)(13 - v1110)) / (47.0 - (double)a1) * v1109;
        v1109 = (46.0 - (double)a1 - (double)(13 - v1110)) / (46.0 - (double)a1) * v1109;
        v1109 = (45.0 - (double)a1 - (double)(13 - v1110)) / (45.0 - (double)a1) * v1109;
        if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
        {
          dbl_791958[v1122] = v1109;
        }
        else
        {
          if ( v1110 == 13 )
            ++v1124;
          dbl_791958[v1122] = v1109 / 8.0 + dbl_791958[v1122];
        }
      }
    }
    if ( a1 < sub_47F0C0((_DWORD *)dword_791364) || !sub_47EFB0((_DWORD *)dword_791364) )
    {
      v605 = sub_464130(&v714, (_BYTE *)dword_7907A4, v1111);
      LOBYTE(v1137) = 37;
      v715 = sub_484BA0(v1136, v605);
      LOBYTE(v1137) = 11;
      ATL::CComCriticalSection::~CComCriticalSection(&v714);
      if ( v715 )
      {
        v1108 = 13;
      }
      else
      {
        v604 = sub_464130(&v712, (_BYTE *)dword_790758, v1111);
        LOBYTE(v1137) = 38;
        v713 = sub_484BA0(v1136, v604);
        LOBYTE(v1137) = 11;
        ATL::CComCriticalSection::~CComCriticalSection(&v712);
        if ( v713 )
        {
          v1108 = 12;
        }
        else
        {
          v603 = sub_464130(&v710, (_BYTE *)dword_790768, v1111);
          LOBYTE(v1137) = 39;
          v711 = sub_484BA0(v1136, v603);
          LOBYTE(v1137) = 11;
          ATL::CComCriticalSection::~CComCriticalSection(&v710);
          if ( v711 )
          {
            v1108 = 11;
          }
          else
          {
            v602 = sub_464130(&v708, (_BYTE *)dword_790790, v1111);
            LOBYTE(v1137) = 40;
            v709 = sub_484BA0(v1136, v602);
            LOBYTE(v1137) = 11;
            ATL::CComCriticalSection::~CComCriticalSection(&v708);
            if ( v709 )
            {
              v1108 = 10;
            }
            else
            {
              v601 = sub_464130(&v706, (_BYTE *)dword_790750, v1111);
              LOBYTE(v1137) = 41;
              v707 = sub_484BA0(v1136, v601);
              LOBYTE(v1137) = 11;
              ATL::CComCriticalSection::~CComCriticalSection(&v706);
              if ( v707 )
              {
                v1108 = 9;
              }
              else
              {
                v600 = sub_464130(&v704, (_BYTE *)dword_79079C, v1111);
                LOBYTE(v1137) = 42;
                v705 = sub_484BA0(v1136, v600);
                LOBYTE(v1137) = 11;
                ATL::CComCriticalSection::~CComCriticalSection(&v704);
                if ( v705 )
                {
                  v1108 = 8;
                }
                else
                {
                  v599 = sub_464130(&v702, (_BYTE *)dword_790760, v1111);
                  LOBYTE(v1137) = 43;
                  v703 = sub_484BA0(v1136, v599);
                  LOBYTE(v1137) = 11;
                  ATL::CComCriticalSection::~CComCriticalSection(&v702);
                  if ( v703 )
                  {
                    v1108 = 7;
                  }
                  else
                  {
                    v598 = sub_464130(&v700, (_BYTE *)dword_790798, v1111);
                    LOBYTE(v1137) = 44;
                    v701 = sub_484BA0(v1136, v598);
                    LOBYTE(v1137) = 11;
                    ATL::CComCriticalSection::~CComCriticalSection(&v700);
                    if ( v701 )
                    {
                      v1108 = 6;
                    }
                    else
                    {
                      v597 = sub_464130(&v698, (_BYTE *)dword_790794, v1111);
                      LOBYTE(v1137) = 45;
                      v699 = sub_484BA0(v1136, v597);
                      LOBYTE(v1137) = 11;
                      ATL::CComCriticalSection::~CComCriticalSection(&v698);
                      if ( v699 )
                      {
                        v1108 = 5;
                      }
                      else
                      {
                        v596 = sub_464130(&v696, (_BYTE *)dword_790788, v1111);
                        LOBYTE(v1137) = 46;
                        v697 = sub_484BA0(v1136, v596);
                        LOBYTE(v1137) = 11;
                        ATL::CComCriticalSection::~CComCriticalSection(&v696);
                        if ( v697 )
                        {
                          v1108 = 4;
                        }
                        else
                        {
                          v595 = sub_464130(&v694, (_BYTE *)dword_790774, v1111);
                          LOBYTE(v1137) = 47;
                          v695 = sub_484BA0(v1136, v595);
                          LOBYTE(v1137) = 11;
                          ATL::CComCriticalSection::~CComCriticalSection(&v694);
                          if ( v695 )
                          {
                            v1108 = 3;
                          }
                          else
                          {
                            v594 = sub_464130(&v692, (_BYTE *)dword_7907B0, v1111);
                            LOBYTE(v1137) = 48;
                            v693 = sub_484BA0(v1136, v594);
                            LOBYTE(v1137) = 11;
                            ATL::CComCriticalSection::~CComCriticalSection(&v692);
                            if ( v693 )
                            {
                              v1108 = 2;
                            }
                            else
                            {
                              v593 = sub_464130(&v690, (_BYTE *)dword_7907A8, v1111);
                              LOBYTE(v1137) = 49;
                              v691 = sub_484BA0(v1136, v593);
                              LOBYTE(v1137) = 11;
                              ATL::CComCriticalSection::~CComCriticalSection(&v690);
                              v1108 = v691 != 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v1108 > 0 )
      {
        v592 = sub_464130(&v688, (_BYTE *)dword_7907B0, v1111);
        LOBYTE(v1137) = 50;
        v655 = v643 | 0x1000;
        v591 = sub_484BA0(v1117, v592) && v1108 < 2;
        v689 = v591;
        v1137 = 11;
        if ( (v655 & 0x1000) != 0 )
        {
          v655 &= ~0x1000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v688);
        }
        if ( v689 )
          ++v1108;
        v590 = sub_464130(&v686, (_BYTE *)dword_790774, v1111);
        LOBYTE(v1137) = 51;
        v656 = v655 | 0x2000;
        v589 = sub_484BA0(v1117, v590) && v1108 < 3;
        v687 = v589;
        v1137 = 11;
        if ( (v656 & 0x2000) != 0 )
        {
          v656 &= ~0x2000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v686);
        }
        if ( v687 )
          ++v1108;
        v588 = sub_464130(&v684, (_BYTE *)dword_790788, v1111);
        LOBYTE(v1137) = 52;
        v657 = v656 | 0x4000;
        v587 = sub_484BA0(v1117, v588) && v1108 < 4;
        v685 = v587;
        v1137 = 11;
        if ( (v657 & 0x4000) != 0 )
        {
          v657 &= ~0x4000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v684);
        }
        if ( v685 )
          ++v1108;
        v586 = sub_464130(&v682, (_BYTE *)dword_790794, v1111);
        LOBYTE(v1137) = 53;
        v658 = v657 | 0x8000;
        v585 = sub_484BA0(v1117, v586) && v1108 < 5;
        v683 = v585;
        v1137 = 11;
        if ( (v658 & 0x8000) != 0 )
        {
          v658 &= ~0x8000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v682);
        }
        if ( v683 )
          ++v1108;
        v584 = sub_464130(&v680, (_BYTE *)dword_790798, v1111);
        LOBYTE(v1137) = 54;
        v659 = v658 | 0x10000;
        v583 = sub_484BA0(v1117, v584) && v1108 < 6;
        v681 = v583;
        v1137 = 11;
        if ( (v659 & 0x10000) != 0 )
        {
          v659 &= ~0x10000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v680);
        }
        if ( v681 )
          ++v1108;
        v582 = sub_464130(&v678, (_BYTE *)dword_790760, v1111);
        LOBYTE(v1137) = 55;
        v660 = v659 | 0x20000;
        v581 = sub_484BA0(v1117, v582) && v1108 < 7;
        v679 = v581;
        v1137 = 11;
        if ( (v660 & 0x20000) != 0 )
        {
          v660 &= ~0x20000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v678);
        }
        if ( v679 )
          ++v1108;
        v580 = sub_464130(&v676, (_BYTE *)dword_79079C, v1111);
        LOBYTE(v1137) = 56;
        v661 = v660 | 0x40000;
        v579 = sub_484BA0(v1117, v580) && v1108 < 8;
        v677 = v579;
        v1137 = 11;
        if ( (v661 & 0x40000) != 0 )
        {
          v661 &= ~0x40000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v676);
        }
        if ( v677 )
          ++v1108;
        v578 = sub_464130(&v674, (_BYTE *)dword_790750, v1111);
        LOBYTE(v1137) = 57;
        v662 = v661 | 0x80000;
        v577 = sub_484BA0(v1117, v578) && v1108 < 9;
        v675 = v577;
        v1137 = 11;
        if ( (v662 & 0x80000) != 0 )
        {
          v662 &= ~0x80000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v674);
        }
        if ( v675 )
          ++v1108;
        v576 = sub_464130(&v672, (_BYTE *)dword_790790, v1111);
        LOBYTE(v1137) = 58;
        v663 = v662 | 0x100000;
        v575 = sub_484BA0(v1117, v576) && v1108 < 10;
        v673 = v575;
        v1137 = 11;
        if ( (v663 & 0x100000) != 0 )
        {
          v663 &= ~0x100000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v672);
        }
        if ( v673 )
          ++v1108;
        v574 = sub_464130(&v670, (_BYTE *)dword_790768, v1111);
        LOBYTE(v1137) = 59;
        v664 = v663 | 0x200000;
        v573 = sub_484BA0(v1117, v574) && v1108 < 11;
        v671 = v573;
        v1137 = 11;
        if ( (v664 & 0x200000) != 0 )
        {
          v664 &= ~0x200000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v670);
        }
        if ( v671 )
          ++v1108;
        v572 = sub_464130(&v668, (_BYTE *)dword_790758, v1111);
        LOBYTE(v1137) = 60;
        v665 = v664 | 0x400000;
        v571 = sub_484BA0(v1117, v572) && v1108 < 12;
        v669 = v571;
        v1137 = 11;
        if ( (v665 & 0x400000) != 0 )
        {
          v665 &= ~0x400000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v668);
        }
        if ( v669 )
          ++v1108;
        v570 = sub_464130(&v666, (_BYTE *)dword_7907A4, v1111);
        LOBYTE(v1137) = 61;
        v643 = (unsigned int)&unk_800000 | v665;
        v569 = sub_484BA0(v1117, v570) && v1108 < 13;
        v667 = v569;
        v1137 = 11;
        if ( ((unsigned int)&unk_800000 & v643) != 0 )
        {
          v643 &= ~0x800000u;
          ATL::CComCriticalSection::~CComCriticalSection(&v666);
        }
        if ( v667 )
          ++v1108;
        v1107 = (48.0 - (double)a1 - (double)(13 - v1108)) / (48.0 - (double)a1);
        v1107 = v1107 * v1107;
        v1107 = v1107 * v1107;
        if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
        {
          dbl_791958[v1122] = v1107;
        }
        else
        {
          if ( v1108 == 13 )
            ++v1124;
          dbl_791958[v1122] = v1107 / 8.0 + dbl_791958[v1122];
        }
      }
    }
  }
  dbl_791728[v1122] = 0.0;
  dbl_791728[v1122] = (double)v1124 / 8.0 + dbl_791728[v1122];
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( v1118 < 4 )
      {
        v1106 = (double)v1123 / 16215.0 - (double)v1131 / 249900.0;
        if ( v1106 > 0.0 )
          dbl_791728[v1122] = dbl_791728[v1122] + v1106;
      }
    }
    else if ( a1 == 2 )
    {
      if ( v1118 < 4 && v1134 < 4 )
      {
        v1105 = (double)v1123 / 1035.0 - (double)v1131 / 230300.0;
        if ( v1105 > 0.0 )
          dbl_791728[v1122] = dbl_791728[v1122] + v1105;
      }
    }
    else if ( a1 == 3 && v1118 < 4 && v1134 < 7 )
    {
      v1104 = (double)v1123 / 45.0 - (double)v1131 / 211876.0;
      if ( v1104 > 0.0 )
        dbl_791728[v1122] = dbl_791728[v1122] + v1104;
    }
  }
  else if ( v1118 < 4 )
  {
    dbl_791728[v1122] = (double)v1123 / 194580.0 + dbl_791728[v1122];
  }
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        if ( v1118 < 4 && v1128 == 4 )
          dbl_791728[v1122] = dbl_791728[v1122] + 0.4909343200740056;
        break;
      case 2:
        if ( v1118 >= 4 || v1134 >= 4 )
        {
          if ( v1118 < 4 && v1134 == 4 && v1128 == 4 )
            dbl_791728[v1122] = dbl_791728[v1122] + 0.1826086956521739;
        }
        else if ( v1128 == 4 )
        {
          dbl_791728[v1122] = dbl_791728[v1122] + 0.3652173913043478;
        }
        break;
      case 3:
        if ( v1118 >= 4 || v1134 >= 7 )
        {
          if ( v1118 < 4 && v1134 == 7 )
            dbl_791728[v1122] = dbl_791728[v1122] + 0.14;
        }
        else
        {
          dbl_791728[v1122] = dbl_791728[v1122] + 0.2;
        }
        break;
    }
  }
  else if ( v1118 < 4 )
  {
    if ( v1128 == 4 )
    {
      dbl_791728[v1122] = dbl_791728[v1122] + 0.574992207295982;
    }
    else if ( v1128 == 3 )
    {
      dbl_791728[v1122] = dbl_791728[v1122] + 0.09994603761948814;
    }
  }
  LOBYTE(v1137) = 10;
  ATL::CComCriticalSection::~CComCriticalSection(&v1116);
  LOBYTE(v1137) = 9;
  ATL::CComCriticalSection::~CComCriticalSection(&v1120);
  LOBYTE(v1137) = 8;
  ATL::CComCriticalSection::~CComCriticalSection(&v1125);
  LOBYTE(v1137) = 7;
  ATL::CComCriticalSection::~CComCriticalSection(&v1127);
  LOBYTE(v1137) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v1115);
  LOBYTE(v1137) = 5;
  sub_484470(v1129);
  LOBYTE(v1137) = 4;
  sub_484470(v1130);
  LOBYTE(v1137) = 3;
  sub_484470(v1113);
  LOBYTE(v1137) = 2;
  sub_484470(v1114);
  LOBYTE(v1137) = 1;
  sub_484470(v1136);
  LOBYTE(v1137) = 0;
  sub_484470(v1117);
  v1137 = -1;
  sub_484470(v1119);
}


//======================================================================
// sub_4AF990
// entry 004af990  size 1217  status ok
//======================================================================

double __cdecl sub_4AF990(int a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  double v4; // st7
  double v5; // st7
  double v7; // [esp+10h] [ebp-88h]
  double v8; // [esp+1Ch] [ebp-7Ch]
  double v9; // [esp+28h] [ebp-70h]
  double v10; // [esp+34h] [ebp-64h]
  double v11; // [esp+40h] [ebp-58h]
  double v12; // [esp+48h] [ebp-50h]
  __int16 v13; // [esp+54h] [ebp-44h]
  __int16 v14; // [esp+58h] [ebp-40h]
  __int16 v15; // [esp+5Ch] [ebp-3Ch]
  __int16 v16; // [esp+60h] [ebp-38h]
  __int16 ExecutingContext; // [esp+64h] [ebp-34h]
  __int16 v18; // [esp+68h] [ebp-30h]
  char v19; // [esp+6Fh] [ebp-29h]
  double v20; // [esp+70h] [ebp-28h]
  __int16 i; // [esp+80h] [ebp-18h]
  int v22; // [esp+84h] [ebp-14h]
  double v23; // [esp+88h] [ebp-10h]
  double v24; // [esp+88h] [ebp-10h]
  double v25; // [esp+90h] [ebp-8h]

  v22 = sub_47E420((_DWORD *)dword_791364);
  v23 = 1.0;
  v25 = sub_4EDFA0(dword_791890) / (double)a2;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v22 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v20 = 0.0;
        if ( sub_4EF250(i, a2) * dbl_791AE0[8 * v22 + i] <= v25 )
        {
          v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
          v14 = sub_4F6880(ExecutingContext);
          v16 = sub_4F6930(ExecutingContext);
          v13 = sub_4F6A90(ExecutingContext) - v14;
          v18 = sub_4F6B20(ExecutingContext) - v16;
          if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) || v16 || v14 )
            v15 = 0;
          else
            v15 = sub_4F69E0(ExecutingContext);
          if ( v14 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 4153);
          if ( v16 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 4154);
          if ( v15 < 0 )
            sub_5E9F20((char)"shCurrentChecks >= 0", "..\\Casino\\PokerHoldemAI.cpp", 4155);
          if ( v13 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 4156);
          if ( v18 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 4157);
          v19 = 0;
          v10 = sub_4EDFD0(dword_791890) * (double)v13 + 1.0;
          v9 = sub_4EE0A0(dword_791890) * (double)v18 + v10;
          v8 = sub_4EE170(dword_791890) * (double)v14 + v9;
          v7 = sub_4EE240(dword_791890) * (double)v16 + v8;
          v20 = v7 - (double)(__int16)sub_4EDEB0(dword_791890) / 35.0 * (double)v15;
        }
        else
        {
          v19 = 1;
        }
        if ( v19 )
        {
          if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
          {
            if ( dbl_791958[v22] >= dbl_7916E8[v22] )
              v4 = (4.0 * dbl_791958[v22] + dbl_7916E8[v22]) / 5.0 * v23;
            else
              v4 = (4.0 * dbl_7916E8[v22] + dbl_791958[v22]) / 5.0 * v23;
            v23 = v4;
          }
          else
          {
            v23 = ((dbl_791958[v22] - 0.5) * 2.0 + dbl_7916E8[v22]) * v23;
          }
        }
        else
        {
          v12 = 1.0 - (1.0 - dbl_7916E8[v22]) * v20;
          v11 = 1.0 - (1.0 - dbl_791958[v22]) * v20;
          if ( v12 < 0.0 )
            v12 = 0.0;
          if ( v11 < 0.0 )
            v11 = 0.0;
          if ( a1 >= sub_47F0C0((_DWORD *)dword_791364) )
          {
            if ( v11 >= v12 )
              v5 = (4.0 * v11 + v12) / 5.0 * v23;
            else
              v5 = (4.0 * v12 + v11) / 5.0 * v23;
            v23 = v5;
          }
          else
          {
            v23 = ((v11 - 0.5) * 2.0 + v12) * v23;
          }
        }
        if ( v23 < 0.0 )
          v23 = 0.0;
      }
    }
  }
  v24 = ((double)(__int16)sub_4EE6A0(dword_791890) / 100.0 * dbl_791728[v22] + v23) * dbl_791DD0[v22];
  if ( v24 > 100.0 )
    return 100.0;
  return v24;
}


//======================================================================
// sub_4AFE60
// entry 004afe60  size 807  status ok
//======================================================================

char __cdecl sub_4AFE60(int a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  __int16 ExecutingContext; // ax
  Concurrency::details::VirtualProcessor *v5; // eax
  __int16 v6; // ax
  __int16 v7; // ax
  double v8; // st7
  double v10; // [esp+20h] [ebp-48h]
  __int16 i; // [esp+30h] [ebp-38h]
  __int16 v12; // [esp+34h] [ebp-34h]
  int v13; // [esp+38h] [ebp-30h]
  __int16 v14; // [esp+3Ch] [ebp-2Ch]
  __int16 v15; // [esp+40h] [ebp-28h]
  __int16 v16; // [esp+44h] [ebp-24h]
  __int16 v17; // [esp+54h] [ebp-14h]
  double v18; // [esp+58h] [ebp-10h]
  __int16 v19; // [esp+64h] [ebp-4h]

  v13 = sub_47E420((_DWORD *)dword_791364);
  v14 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v13 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
        v14 += sub_4F69E0(ExecutingContext);
        v5 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        v6 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v5);
        if ( (__int16)sub_4F6880(v6) > 0 )
        {
          v14 = 0;
          break;
        }
      }
    }
  }
  v7 = sub_4EE560(dword_791890);
  v16 = sub_62FBF0(v7 + 1);
  if ( v16 * v14 + word_791798[v13] <= 10 )
    v8 = dbl_791D90[v13];
  else
    v8 = (double)(word_791798[v13] + v16 * v14 - 10) / 100.0 + dbl_791D90[v13];
  v12 = sub_4EF440(3);
  v17 = sub_4EF440(2);
  v15 = sub_4EF440(1);
  v19 = sub_4EF730(dword_791890);
  v10 = (double)(int)sub_62FBF0(v19) / 100.0 + 1.0;
  v18 = (v10 - (double)(int)sub_62FBF0(v19) / 100.0) / (double)a2;
  if ( (double)v12 / 100.0 + v18 >= dbl_791D90[v13] )
  {
    if ( (double)v17 / 100.0 + v18 >= dbl_791D90[v13] )
    {
      if ( (double)v15 / 100.0 + v18 >= dbl_791D90[v13] )
      {
        if ( (double)v12 / 100.0 + v18 >= v8 )
        {
          if ( (double)v17 / 100.0 + v18 >= v8 )
          {
            if ( (double)v15 / 100.0 + v18 >= v8 )
            {
              return 0;
            }
            else
            {
              word_791768[v13] = 10;
              return 1;
            }
          }
          else
          {
            word_791768[v13] = 11;
            return 1;
          }
        }
        else
        {
          word_791768[v13] = 12;
          return 1;
        }
      }
      else
      {
        word_791768[v13] = 3;
        return 1;
      }
    }
    else
    {
      word_791768[v13] = 4;
      return 1;
    }
  }
  else
  {
    word_791768[v13] = 5;
    return 1;
  }
}


//======================================================================
// sub_4B0190
// entry 004b0190  size 278  status ok
//======================================================================

int sub_4B0190()
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

  v10 = sub_47E420((_DWORD *)dword_791364);
  v0 = sub_62FBF0(21);
  v1 = v0 + sub_62FBF0(21) + 60;
  v2 = sub_62FBF0(21) + v1;
  dbl_791DD0[v10] = (double)(sub_62FBF0(21) + v2) * 0.01;
  v3 = sub_62FBF0(21);
  v4 = v3 + sub_62FBF0(21) + 60;
  v5 = sub_62FBF0(21) + v4;
  dbl_791520[v10] = (double)(sub_62FBF0(21) + v5) * 0.01;
  for ( i = 0; ; ++i )
  {
    result = sub_47F950();
    if ( i >= result )
      break;
    v7 = sub_62FBF0(51);
    v8 = v7 + sub_62FBF0(51) + 25;
    dbl_791AE0[8 * v10 + i] = (double)(sub_62FBF0(51) + v8) * 0.01;
  }
  return result;
}


//======================================================================
// sub_4B02B0
// entry 004b02b0  size 151  status ok
//======================================================================

__int16 __cdecl sub_4B02B0(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4EE310(a2);
  if ( a1 == 4 && (unsigned __int8)sub_4F6640(dword_791364 + 56) )
  {
    v3 += (100 - v3) / 2;
  }
  else if ( a1 < 3
         && word_791768[sub_47E420((_DWORD *)dword_791364)] != 7
         && !(unsigned __int8)sub_4F6640(dword_791364 + 56) )
  {
    v3 /= 2;
  }
  return v3;
}


//======================================================================
// sub_4B0350
// entry 004b0350  size 3342  status ok
//======================================================================

int __cdecl sub_4B0350(int a1, int a2, int a3)
{
  Concurrency::details::SchedulerProxy *v3; // eax
  Concurrency::details::VirtualProcessor *v4; // eax
  __int16 v5; // ax
  int v6; // esi
  int v7; // esi
  __int16 v8; // ax
  Concurrency::details::SchedulerProxy *v9; // eax
  Concurrency::details::VirtualProcessor *v10; // eax
  __int16 ExecutingContext; // ax
  __int16 v12; // ax
  int v14; // esi
  int v15; // esi
  __int16 v16; // si
  int v17; // esi
  int v18; // esi
  __int16 v19; // ax
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  double v31; // [esp+Ch] [ebp-38h]
  int v32; // [esp+18h] [ebp-2Ch]
  double v33; // [esp+1Ch] [ebp-28h]
  __int16 v34; // [esp+28h] [ebp-1Ch]
  __int16 i; // [esp+2Ch] [ebp-18h]
  __int16 v36; // [esp+30h] [ebp-14h]
  __int16 j; // [esp+34h] [ebp-10h]
  __int16 v38; // [esp+38h] [ebp-Ch]
  __int16 v39; // [esp+3Ch] [ebp-8h]
  int v40; // [esp+40h] [ebp-4h]

  v40 = sub_47E420((_DWORD *)dword_791364);
  if ( v40 < 0 )
    sub_5E9F20((char)"currentPlayer >= 0", "..\\Casino\\PokerHoldemAI.cpp", 6673);
  if ( v40 >= sub_47F950() )
    sub_5E9F20((char)"currentPlayer < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerHoldemAI.cpp", 6674);
  dword_791890 = sub_47E3B0((void *)dword_791364);
  if ( word_791D80[v40] == a1 )
  {
    if ( word_7919B8[v40] == a3
      || word_791768[v40] == 6
      || word_791768[v40] == 8
      || word_791768[v40] == 9
      || word_791768[v40] == 2 )
    {
      dbl_791D90[v40] = sub_4B6FF0(a1, a2);
    }
    else
    {
      word_7919B8[v40] = a3;
      dbl_791D90[v40] = sub_4B6FF0(a1, a2);
      word_791768[v40] = 1;
    }
  }
  else
  {
    if ( a1 )
    {
      v36 = 0;
      for ( i = 0; i < sub_47F950(); ++i )
      {
        if ( i != v40 )
        {
          v9 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v9) == 1 )
          {
            v10 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
            ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v10);
            v36 += sub_4F6880(ExecutingContext);
          }
        }
      }
      v12 = sub_4F0B80(dword_791890);
      word_791798[v40] -= sub_62FBF0(v12 + 1) * v36;
    }
    else
    {
      sub_4B79A0();
      v39 = 0;
      for ( j = 0; j < sub_47F950(); ++j )
      {
        if ( j != v40 )
        {
          v3 = (Concurrency::details::SchedulerProxy *)sub_47E390(j);
          if ( Concurrency::details::SchedulerProxy::GetQueueLength(v3) == 1 )
          {
            v4 = (Concurrency::details::VirtualProcessor *)sub_47E390(j);
            v5 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v4);
            v39 += sub_4F6A90(v5);
          }
        }
      }
      v38 = sub_4F0BC0(dword_791890);
      v6 = sub_62FBF0(v38);
      v7 = v6 - sub_62FBF0(v38);
      v8 = sub_4F0B80(dword_791890);
      word_791798[v40] = v7 - sub_62FBF0(v8 + 1) * v39;
    }
    word_791D80[v40] = a1;
    word_7919B8[v40] = a3;
    sub_4B1060(a1);
    dbl_791D90[v40] = sub_4B6FF0(a1, a2);
    word_791768[v40] = 1;
    if ( a1 == 5 && dbl_791958[v40] > 0.9999 )
    {
      word_791768[v40] = 6;
    }
    else if ( a1 == 5 && dbl_7916E8[v40] > 0.9999 )
    {
      word_791768[v40] = 6;
    }
    else if ( a1 == 5 && dbl_791958[v40] > 0.99 )
    {
      word_791768[v40] = 8;
    }
    else if ( a1 == 5 && dbl_7916E8[v40] > 0.99 )
    {
      word_791768[v40] = 8;
    }
    else if ( a1 == 4 && dbl_791958[v40] > 0.99 )
    {
      word_791768[v40] = 9;
    }
    else if ( a1 == 4 && dbl_7916E8[v40] > 0.99 )
    {
      word_791768[v40] = 9;
    }
    else if ( a1 != 3 || dbl_791958[v40] <= 0.99 || sub_62FBF0(2) )
    {
      if ( a1 != 3 || dbl_7916E8[v40] <= 0.99 || sub_62FBF0(2) )
      {
        if ( a1 != 2 || dbl_791958[v40] <= 0.99 || sub_62FBF0(3) )
        {
          if ( a1 == 2 && dbl_7916E8[v40] > 0.99 && !sub_62FBF0(3) )
            word_791768[v40] = 9;
        }
        else
        {
          word_791768[v40] = 9;
        }
      }
      else
      {
        word_791768[v40] = 9;
      }
    }
    else
    {
      word_791768[v40] = 9;
    }
  }
  switch ( word_791768[v40] )
  {
    case 6:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( sub_4A39C0() || sub_62FBF0(8) )
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
    case 8:
      sub_4C79D0(3);
      if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
      {
        if ( sub_4A39C0() || sub_62FBF0(5) )
          return 2;
        else
          return 1;
      }
      else if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) )
      {
        v14 = sub_62FBF0(100);
        if ( v14 < (__int16)sub_4F0A80(dword_791890) )
        {
          v15 = sub_62FBF0(100);
          if ( v15 < (__int16)sub_4F0A80(dword_791890) )
            word_791768[v40] = 5;
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
        v31 = (double)sub_4F67D0(dword_791364 + 56);
        v33 = dbl_791D90[v40] / (v31 / (double)sub_4F6840(dword_791364 + 56));
        v16 = sub_4F1C10(dword_791890);
        v34 = (sub_62FBF0(a3 - 1) + 1) * v16;
        if ( !a1 )
          v34 = 0;
        v17 = sub_62FBF0(v34);
        v18 = sub_62FBF0(v34) + v17;
        v32 = v18 - sub_62FBF0(v34);
        if ( !a1 )
        {
          v19 = sub_4F0410(dword_791890);
          v32 -= sub_62FBF0(v19);
        }
        if ( v32 < -19 )
          v32 = -19;
        if ( (double)v32 / 20.0 + 1.0 >= v33 )
          return 0;
        if ( !(unsigned __int8)sub_4B7670(a1, a3) )
        {
          v20 = sub_62FBF0(100);
          if ( v20 < (__int16)sub_4F18E0(dword_791890) )
            word_791768[v40] = 2;
          return 3;
        }
      }
      else if ( !(unsigned __int8)sub_4B7670(a1, a3) )
      {
        return 1;
      }
      break;
  }
  switch ( word_791768[v40] )
  {
    case 5:
    case 12:
    case 9:
      v21 = sub_62FBF0(100);
      if ( v21 < (__int16)sub_4B7AC0(a1, 3) )
      {
        sub_4C79D0(3);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v40] == 12 )
        {
          return 0;
        }
        v22 = sub_62FBF0(100);
        if ( v22 >= (__int16)sub_4F0A80(dword_791890) )
        {
          v23 = sub_62FBF0(100);
          if ( v23 < (__int16)sub_4F0AA0(dword_791890) )
            word_791768[v40] = 1;
        }
        else
        {
          word_791768[v40] = 4;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && (sub_62FBF0(2) || word_791768[v40] == 9) )
          return 4;
        return 3;
      }
      break;
    case 4:
    case 11:
      v24 = sub_62FBF0(100);
      if ( v24 < (__int16)sub_4B7AC0(a1, 2) )
      {
        sub_4C79D0(2);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v40] == 11 )
        {
          return 0;
        }
        v25 = sub_62FBF0(100);
        if ( v25 >= (__int16)sub_4F0A80(dword_791890) )
        {
          v26 = sub_62FBF0(100);
          if ( v26 < (__int16)sub_4F0AA0(dword_791890) )
            word_791768[v40] = 1;
        }
        else
        {
          word_791768[v40] = 3;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(2) )
          return 4;
        if ( word_791768[v40] == 11 )
          return 0;
        return 3;
      }
      break;
    case 3:
    case 10:
      v27 = sub_62FBF0(100);
      if ( v27 < (__int16)sub_4B7AC0(a1, 1) )
      {
        sub_4C79D0(1);
        if ( !(unsigned __int8)sub_4F6640(dword_791364 + 56)
          && !(unsigned __int8)sub_4F66E0(dword_791364 + 56)
          && word_791768[v40] == 10 )
        {
          return 0;
        }
        v28 = sub_62FBF0(100);
        if ( v28 >= (__int16)sub_4F0A80(dword_791890) )
        {
          v29 = sub_62FBF0(100);
          if ( v29 < (__int16)sub_4F0AA0(dword_791890) )
            word_791768[v40] = 1;
        }
        else
        {
          word_791768[v40] = 2;
        }
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          return 2;
        if ( (unsigned __int8)sub_4F66E0(dword_791364 + 56) && sub_62FBF0(2) )
          return 4;
        if ( word_791768[v40] == 10 )
          return 0;
        return 3;
      }
      break;
  }
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    goto LABEL_169;
  switch ( word_791768[v40] )
  {
    case 12:
      return 0;
    case 11:
      return 0;
    case 10:
      return 0;
  }
LABEL_169:
  v30 = sub_62FBF0(100);
  if ( v30 < (__int16)sub_4F0AA0(dword_791890) )
    word_791768[v40] = 1;
  if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    return 1;
  else
    return 3;
}


//======================================================================
// sub_4B1060
// entry 004b1060  size 24456  status ok
//======================================================================

void __cdecl sub_4B1060(int a1)
{
  int v1; // ecx
  int v2; // ecx
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // eax
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // eax
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  unsigned __int8 *v30; // eax
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // eax
  unsigned __int8 *v36; // eax
  unsigned __int8 *v37; // eax
  unsigned __int8 *v38; // eax
  unsigned __int8 *v39; // eax
  unsigned __int8 *v40; // eax
  unsigned __int8 *v41; // eax
  unsigned __int8 *v42; // eax
  unsigned __int8 *v43; // eax
  unsigned __int8 *v44; // eax
  unsigned __int8 *v45; // eax
  unsigned __int8 *v46; // eax
  unsigned __int8 *v47; // eax
  unsigned __int8 *v48; // eax
  unsigned __int8 *v49; // eax
  unsigned __int8 *v50; // eax
  unsigned __int8 *v51; // eax
  unsigned __int8 *v52; // eax
  unsigned __int8 *v53; // eax
  unsigned __int8 *v54; // eax
  unsigned __int8 *v55; // eax
  unsigned __int8 *v56; // eax
  unsigned __int8 *v57; // eax
  unsigned __int8 *v58; // eax
  unsigned __int8 *v59; // eax
  unsigned __int8 *v60; // eax
  unsigned __int8 *v61; // eax
  unsigned __int8 *v62; // eax
  unsigned __int8 *v63; // eax
  unsigned __int8 *v64; // eax
  unsigned __int8 *v65; // eax
  unsigned __int8 *v66; // eax
  unsigned __int8 *v67; // eax
  unsigned __int8 *v68; // eax
  unsigned __int8 *v69; // eax
  unsigned __int8 *v70; // eax
  unsigned __int8 *v71; // eax
  unsigned __int8 *v72; // eax
  unsigned __int8 *v73; // eax
  unsigned __int8 *v74; // eax
  unsigned __int8 *v75; // eax
  unsigned __int8 *v76; // eax
  unsigned __int8 *v77; // eax
  unsigned __int8 *v78; // eax
  unsigned __int8 *v79; // eax
  unsigned __int8 *v80; // eax
  unsigned __int8 *v81; // eax
  unsigned __int8 *v82; // eax
  unsigned __int8 *v83; // eax
  unsigned __int8 *v84; // eax
  unsigned __int8 *v85; // eax
  unsigned __int8 *v86; // eax
  unsigned __int8 *v87; // eax
  unsigned __int8 *v88; // eax
  unsigned __int8 *v89; // eax
  unsigned __int8 *v90; // eax
  unsigned __int8 *v91; // eax
  unsigned __int8 *v92; // eax
  unsigned __int8 *v93; // eax
  unsigned __int8 *v94; // eax
  unsigned __int8 *v95; // eax
  unsigned __int8 *v96; // eax
  unsigned __int8 *v97; // eax
  unsigned __int8 *v98; // eax
  unsigned __int8 *v99; // eax
  unsigned __int8 *v100; // eax
  unsigned __int8 *v101; // eax
  unsigned __int8 *v102; // eax
  unsigned __int8 *v103; // eax
  unsigned __int8 *v104; // eax
  unsigned __int8 *v105; // eax
  unsigned __int8 *v106; // eax
  unsigned __int8 *v107; // eax
  unsigned __int8 *v108; // eax
  unsigned __int8 *v109; // eax
  unsigned __int8 *v110; // eax
  unsigned __int8 *v111; // eax
  unsigned __int8 *v112; // eax
  unsigned __int8 *v113; // eax
  unsigned __int8 *v114; // eax
  unsigned __int8 *v115; // eax
  unsigned __int8 *v116; // eax
  unsigned __int8 *v117; // eax
  unsigned __int8 *v118; // eax
  unsigned __int8 *v119; // eax
  unsigned __int8 *v120; // eax
  unsigned __int8 *v121; // eax
  unsigned __int8 *v122; // eax
  unsigned __int8 *v123; // eax
  unsigned __int8 *v124; // eax
  unsigned __int8 *v125; // eax
  unsigned __int8 *v126; // eax
  unsigned __int8 *v127; // eax
  unsigned __int8 *v128; // eax
  double v129; // st7
  double v130; // st7
  double v131; // st7
  double v132; // st7
  unsigned __int8 *v133; // eax
  unsigned __int8 *v134; // eax
  unsigned __int8 *v135; // eax
  unsigned __int8 *v136; // eax
  unsigned __int8 *v137; // eax
  unsigned __int8 *v138; // eax
  unsigned __int8 *v139; // eax
  unsigned __int8 *v140; // eax
  unsigned __int8 *v141; // eax
  unsigned __int8 *v142; // eax
  unsigned __int8 *v143; // eax
  unsigned __int8 *v144; // eax
  unsigned __int8 *v145; // eax
  unsigned __int8 *v146; // eax
  unsigned __int8 *v147; // eax
  unsigned __int8 *v148; // eax
  unsigned __int8 *v149; // eax
  unsigned __int8 *v150; // eax
  unsigned __int8 *v151; // eax
  unsigned __int8 *v152; // eax
  unsigned __int8 *v153; // eax
  unsigned __int8 *v154; // eax
  unsigned __int8 *v155; // eax
  unsigned __int8 *v156; // eax
  unsigned __int8 *v157; // eax
  unsigned __int8 *v158; // eax
  unsigned __int8 *v159; // eax
  unsigned __int8 *v160; // eax
  unsigned __int8 *v161; // eax
  unsigned __int8 *v162; // eax
  unsigned __int8 *v163; // eax
  unsigned __int8 *v164; // eax
  unsigned __int8 *v165; // eax
  unsigned __int8 *v166; // eax
  unsigned __int8 *v167; // eax
  unsigned __int8 *v168; // eax
  unsigned __int8 *v169; // eax
  unsigned __int8 *v170; // eax
  unsigned __int8 *v171; // eax
  unsigned __int8 *v172; // eax
  unsigned __int8 *v173; // eax
  unsigned __int8 *v174; // eax
  unsigned __int8 *v175; // eax
  unsigned __int8 *v176; // eax
  unsigned __int8 *v177; // eax
  unsigned __int8 *v178; // eax
  unsigned __int8 *v179; // eax
  unsigned __int8 *v180; // eax
  unsigned __int8 *v181; // eax
  unsigned __int8 *v182; // eax
  unsigned __int8 *v183; // eax
  unsigned __int8 *v184; // eax
  unsigned __int8 *v185; // eax
  unsigned __int8 *v186; // eax
  unsigned __int8 *v187; // eax
  unsigned __int8 *v188; // eax
  unsigned __int8 *v189; // eax
  unsigned __int8 *v190; // eax
  unsigned __int8 *v191; // eax
  unsigned __int8 *v192; // eax
  unsigned __int8 *v193; // eax
  unsigned __int8 *v194; // eax
  unsigned __int8 *v195; // eax
  unsigned __int8 *v196; // eax
  unsigned __int8 *v197; // eax
  unsigned __int8 *v198; // eax
  unsigned __int8 *v199; // eax
  unsigned __int8 *v200; // eax
  unsigned __int8 *v201; // eax
  unsigned __int8 *v202; // eax
  unsigned __int8 *v203; // eax
  unsigned __int8 *v204; // eax
  unsigned __int8 *v205; // eax
  unsigned __int8 *v206; // eax
  unsigned __int8 *v207; // eax
  unsigned __int8 *v208; // eax
  unsigned __int8 *v209; // eax
  unsigned __int8 *v210; // eax
  unsigned __int8 *v211; // eax
  unsigned __int8 *v212; // eax
  unsigned __int8 *v213; // eax
  unsigned __int8 *v214; // eax
  unsigned __int8 *v215; // eax
  unsigned __int8 *v216; // eax
  unsigned __int8 *v217; // eax
  unsigned __int8 *v218; // eax
  unsigned __int8 *v219; // eax
  unsigned __int8 *v220; // eax
  unsigned __int8 *v221; // eax
  unsigned __int8 *v222; // eax
  unsigned __int8 *v223; // eax
  unsigned __int8 *v224; // eax
  unsigned __int8 *v225; // eax
  unsigned __int8 *v226; // eax
  unsigned __int8 *v227; // eax
  unsigned __int8 *v228; // eax
  unsigned __int8 *v229; // eax
  unsigned __int8 *v230; // eax
  unsigned __int8 *v231; // eax
  unsigned __int8 *v232; // eax
  unsigned __int8 *v233; // eax
  unsigned __int8 *v234; // eax
  unsigned __int8 *v235; // eax
  unsigned __int8 *v236; // eax
  unsigned __int8 *v237; // eax
  unsigned __int8 *v238; // eax
  unsigned __int8 *v239; // eax
  unsigned __int8 *v240; // eax
  unsigned __int8 *v241; // eax
  unsigned __int8 *v242; // eax
  unsigned __int8 *v243; // eax
  unsigned __int8 *v244; // eax
  unsigned __int8 *v245; // eax
  unsigned __int8 *v246; // eax
  unsigned __int8 *v247; // eax
  unsigned __int8 *v248; // eax
  unsigned __int8 *v249; // eax
  unsigned __int8 *v250; // eax
  unsigned __int8 *v251; // eax
  unsigned __int8 *v252; // eax
  unsigned __int8 *v253; // eax
  unsigned __int8 *v254; // eax
  unsigned __int8 *v255; // eax
  unsigned __int8 *v256; // eax
  unsigned __int8 *v257; // eax
  unsigned __int8 *v258; // eax
  unsigned __int8 *v259; // eax
  unsigned __int8 *v260; // eax
  unsigned __int8 *v261; // eax
  unsigned __int8 *v262; // eax
  unsigned __int8 *v263; // eax
  double v264; // st7
  double v265; // st7
  double v266; // st7
  double v267; // st7
  double v268; // st7
  unsigned __int8 *v269; // eax
  unsigned __int8 *v270; // eax
  unsigned __int8 *v271; // eax
  unsigned __int8 *v272; // eax
  unsigned __int8 *v273; // eax
  unsigned __int8 *v274; // eax
  unsigned __int8 *v275; // eax
  unsigned __int8 *v276; // eax
  unsigned __int8 *v277; // eax
  unsigned __int8 *v278; // eax
  unsigned __int8 *v279; // eax
  unsigned __int8 *v280; // eax
  unsigned __int8 *v281; // eax
  unsigned __int8 *v282; // eax
  double v283; // st7
  int v284; // [esp-28h] [ebp-700h] BYREF
  __int16 v285; // [esp-24h] [ebp-6FCh]
  int v286; // [esp-20h] [ebp-6F8h] BYREF
  __int16 v287; // [esp-1Ch] [ebp-6F4h]
  int *v288; // [esp-18h] [ebp-6F0h]
  int *v289; // [esp-14h] [ebp-6ECh]
  int *v290; // [esp-10h] [ebp-6E8h]
  int *v291; // [esp-Ch] [ebp-6E4h]
  int *v292; // [esp-8h] [ebp-6E0h]
  unsigned __int8 *v293; // [esp-4h] [ebp-6DCh]
  int v294; // [esp+4h] [ebp-6D4h]
  int v295; // [esp+8h] [ebp-6D0h]
  int v296; // [esp+Ch] [ebp-6CCh]
  int v297; // [esp+10h] [ebp-6C8h]
  int v298; // [esp+14h] [ebp-6C4h]
  int v299; // [esp+18h] [ebp-6C0h]
  int v300; // [esp+1Ch] [ebp-6BCh]
  int v301; // [esp+20h] [ebp-6B8h]
  int v302; // [esp+24h] [ebp-6B4h]
  int v303; // [esp+28h] [ebp-6B0h]
  int v304; // [esp+2Ch] [ebp-6ACh]
  int v305; // [esp+30h] [ebp-6A8h]
  int v306; // [esp+34h] [ebp-6A4h]
  int v307; // [esp+38h] [ebp-6A0h]
  int v308; // [esp+3Ch] [ebp-69Ch]
  int v309; // [esp+40h] [ebp-698h]
  int v310; // [esp+44h] [ebp-694h]
  int v311; // [esp+48h] [ebp-690h]
  int v312; // [esp+4Ch] [ebp-68Ch]
  int v313; // [esp+50h] [ebp-688h]
  int v314; // [esp+54h] [ebp-684h]
  int v315; // [esp+58h] [ebp-680h]
  int v316; // [esp+5Ch] [ebp-67Ch]
  int v317; // [esp+60h] [ebp-678h]
  int v318; // [esp+64h] [ebp-674h]
  int v319; // [esp+68h] [ebp-670h]
  int v320; // [esp+6Ch] [ebp-66Ch]
  int v321; // [esp+70h] [ebp-668h]
  int v322; // [esp+74h] [ebp-664h]
  int v323; // [esp+78h] [ebp-660h]
  int v324; // [esp+7Ch] [ebp-65Ch]
  int v325; // [esp+80h] [ebp-658h]
  int v326; // [esp+84h] [ebp-654h]
  int v327; // [esp+88h] [ebp-650h]
  int v328; // [esp+8Ch] [ebp-64Ch]
  int v329; // [esp+90h] [ebp-648h]
  int v330; // [esp+94h] [ebp-644h]
  int v331; // [esp+98h] [ebp-640h]
  int v332; // [esp+9Ch] [ebp-63Ch]
  int v333; // [esp+A0h] [ebp-638h]
  int v334; // [esp+A4h] [ebp-634h]
  int v335; // [esp+A8h] [ebp-630h]
  int v336; // [esp+ACh] [ebp-62Ch]
  int v337; // [esp+B0h] [ebp-628h]
  int v338; // [esp+B4h] [ebp-624h]
  int v339; // [esp+B8h] [ebp-620h]
  int v340; // [esp+BCh] [ebp-61Ch]
  int v341; // [esp+C0h] [ebp-618h]
  int v342; // [esp+C4h] [ebp-614h]
  int v343; // [esp+C8h] [ebp-610h]
  int v344; // [esp+CCh] [ebp-60Ch]
  int v345; // [esp+D0h] [ebp-608h]
  int v346; // [esp+D4h] [ebp-604h]
  int v347; // [esp+D8h] [ebp-600h]
  int v348; // [esp+DCh] [ebp-5FCh]
  int v349; // [esp+E0h] [ebp-5F8h]
  int v350; // [esp+E4h] [ebp-5F4h]
  int v351; // [esp+E8h] [ebp-5F0h]
  int v352; // [esp+ECh] [ebp-5ECh]
  int v353; // [esp+F0h] [ebp-5E8h]
  int v354; // [esp+F4h] [ebp-5E4h]
  int v355; // [esp+F8h] [ebp-5E0h]
  int v356; // [esp+FCh] [ebp-5DCh]
  int v357; // [esp+100h] [ebp-5D8h]
  int v358; // [esp+104h] [ebp-5D4h]
  int v359; // [esp+108h] [ebp-5D0h]
  int v360; // [esp+10Ch] [ebp-5CCh]
  int v361; // [esp+110h] [ebp-5C8h]
  int v362; // [esp+114h] [ebp-5C4h]
  int v363; // [esp+118h] [ebp-5C0h]
  int v364; // [esp+11Ch] [ebp-5BCh]
  int v365; // [esp+120h] [ebp-5B8h]
  int v366; // [esp+124h] [ebp-5B4h]
  int v367; // [esp+128h] [ebp-5B0h]
  int v368; // [esp+12Ch] [ebp-5ACh]
  int v369; // [esp+130h] [ebp-5A8h]
  int v370; // [esp+134h] [ebp-5A4h]
  int v371; // [esp+138h] [ebp-5A0h]
  int v372; // [esp+13Ch] [ebp-59Ch]
  int v373; // [esp+140h] [ebp-598h]
  int v374; // [esp+144h] [ebp-594h]
  int v375; // [esp+148h] [ebp-590h]
  int v376; // [esp+14Ch] [ebp-58Ch]
  int v377; // [esp+150h] [ebp-588h]
  int v378; // [esp+154h] [ebp-584h]
  int v379; // [esp+158h] [ebp-580h]
  int v380; // [esp+15Ch] [ebp-57Ch]
  int v381; // [esp+160h] [ebp-578h]
  int v382; // [esp+164h] [ebp-574h]
  int v383; // [esp+168h] [ebp-570h]
  __int16 *v384; // [esp+16Ch] [ebp-56Ch]
  __int16 *v385; // [esp+170h] [ebp-568h]
  __int16 *v386; // [esp+174h] [ebp-564h]
  __int16 *v387; // [esp+178h] [ebp-560h]
  __int16 *v388; // [esp+17Ch] [ebp-55Ch]
  __int16 *v389; // [esp+180h] [ebp-558h]
  __int16 *v390; // [esp+184h] [ebp-554h]
  __int16 *v391; // [esp+188h] [ebp-550h]
  __int16 *v392; // [esp+18Ch] [ebp-54Ch]
  int v393; // [esp+190h] [ebp-548h]
  _BYTE *v394; // [esp+194h] [ebp-544h]
  _BYTE *v395; // [esp+198h] [ebp-540h]
  _BYTE *v396; // [esp+19Ch] [ebp-53Ch]
  _BYTE *v397; // [esp+1A0h] [ebp-538h]
  _BYTE *v398; // [esp+1A4h] [ebp-534h]
  _BYTE *v399; // [esp+1A8h] [ebp-530h]
  _BYTE *v400; // [esp+1ACh] [ebp-52Ch]
  _BYTE *v401; // [esp+1B0h] [ebp-528h]
  int v402; // [esp+1B4h] [ebp-524h]
  _BYTE *v403; // [esp+1B8h] [ebp-520h]
  _BYTE *v404; // [esp+1BCh] [ebp-51Ch]
  _BYTE *v405; // [esp+1C0h] [ebp-518h]
  _BYTE *v406; // [esp+1C4h] [ebp-514h]
  _BYTE *v407; // [esp+1C8h] [ebp-510h]
  _BYTE *v408; // [esp+1CCh] [ebp-50Ch]
  _BYTE *v409; // [esp+1D0h] [ebp-508h]
  _BYTE *v410; // [esp+1D4h] [ebp-504h]
  unsigned __int8 *v411; // [esp+1D8h] [ebp-500h]
  unsigned __int8 *v412; // [esp+1DCh] [ebp-4FCh]
  unsigned __int8 *v413; // [esp+1E0h] [ebp-4F8h]
  unsigned __int8 *v414; // [esp+1E4h] [ebp-4F4h]
  int v415; // [esp+1E8h] [ebp-4F0h]
  char v416; // [esp+1EEh] [ebp-4EAh] BYREF
  char v417; // [esp+1EFh] [ebp-4E9h] BYREF
  char v418; // [esp+1F0h] [ebp-4E8h] BYREF
  char v419; // [esp+1F1h] [ebp-4E7h] BYREF
  char v420; // [esp+1F2h] [ebp-4E6h] BYREF
  char v421; // [esp+1F3h] [ebp-4E5h] BYREF
  char v422; // [esp+1F4h] [ebp-4E4h] BYREF
  char v423; // [esp+1F5h] [ebp-4E3h] BYREF
  char v424; // [esp+1F6h] [ebp-4E2h] BYREF
  char v425; // [esp+1F7h] [ebp-4E1h] BYREF
  char v426; // [esp+1F8h] [ebp-4E0h] BYREF
  char v427; // [esp+1F9h] [ebp-4DFh] BYREF
  char v428; // [esp+1FAh] [ebp-4DEh] BYREF
  char v429; // [esp+1FBh] [ebp-4DDh] BYREF
  int *v430; // [esp+1FCh] [ebp-4DCh]
  void *v431; // [esp+200h] [ebp-4D8h]
  int *v432; // [esp+204h] [ebp-4D4h]
  void *v433; // [esp+208h] [ebp-4D0h]
  int *v434; // [esp+20Ch] [ebp-4CCh]
  void *v435; // [esp+210h] [ebp-4C8h]
  char v436; // [esp+215h] [ebp-4C3h] BYREF
  char v437; // [esp+216h] [ebp-4C2h] BYREF
  char v438; // [esp+217h] [ebp-4C1h] BYREF
  char v439; // [esp+218h] [ebp-4C0h] BYREF
  char v440; // [esp+219h] [ebp-4BFh] BYREF
  char v441; // [esp+21Ah] [ebp-4BEh] BYREF
  char v442; // [esp+21Bh] [ebp-4BDh] BYREF
  char v443; // [esp+21Ch] [ebp-4BCh] BYREF
  char v444; // [esp+21Dh] [ebp-4BBh] BYREF
  char v445; // [esp+21Eh] [ebp-4BAh] BYREF
  char v446; // [esp+21Fh] [ebp-4B9h] BYREF
  char v447; // [esp+220h] [ebp-4B8h] BYREF
  char v448; // [esp+221h] [ebp-4B7h] BYREF
  char v449; // [esp+222h] [ebp-4B6h] BYREF
  char v450; // [esp+223h] [ebp-4B5h] BYREF
  char v451; // [esp+224h] [ebp-4B4h] BYREF
  char v452; // [esp+225h] [ebp-4B3h] BYREF
  char v453; // [esp+226h] [ebp-4B2h] BYREF
  char v454; // [esp+227h] [ebp-4B1h] BYREF
  char v455; // [esp+228h] [ebp-4B0h] BYREF
  char v456; // [esp+229h] [ebp-4AFh] BYREF
  char v457; // [esp+22Ah] [ebp-4AEh] BYREF
  char v458; // [esp+22Bh] [ebp-4ADh] BYREF
  char v459; // [esp+22Ch] [ebp-4ACh] BYREF
  char v460; // [esp+22Dh] [ebp-4ABh] BYREF
  char v461; // [esp+22Eh] [ebp-4AAh] BYREF
  char v462; // [esp+22Fh] [ebp-4A9h] BYREF
  char v463; // [esp+230h] [ebp-4A8h] BYREF
  char v464; // [esp+231h] [ebp-4A7h] BYREF
  char v465; // [esp+232h] [ebp-4A6h] BYREF
  char v466; // [esp+233h] [ebp-4A5h] BYREF
  char v467; // [esp+234h] [ebp-4A4h] BYREF
  char v468; // [esp+235h] [ebp-4A3h] BYREF
  char v469; // [esp+236h] [ebp-4A2h] BYREF
  char v470; // [esp+237h] [ebp-4A1h] BYREF
  char v471; // [esp+238h] [ebp-4A0h] BYREF
  char v472; // [esp+239h] [ebp-49Fh] BYREF
  char v473; // [esp+23Ah] [ebp-49Eh] BYREF
  char v474; // [esp+23Bh] [ebp-49Dh] BYREF
  char v475; // [esp+23Ch] [ebp-49Ch] BYREF
  char v476; // [esp+23Dh] [ebp-49Bh] BYREF
  char v477; // [esp+23Eh] [ebp-49Ah] BYREF
  char v478; // [esp+23Fh] [ebp-499h] BYREF
  char v479; // [esp+240h] [ebp-498h] BYREF
  char v480; // [esp+241h] [ebp-497h] BYREF
  char v481; // [esp+242h] [ebp-496h] BYREF
  char v482; // [esp+243h] [ebp-495h] BYREF
  char v483; // [esp+244h] [ebp-494h] BYREF
  char v484; // [esp+245h] [ebp-493h] BYREF
  char v485; // [esp+246h] [ebp-492h] BYREF
  char v486; // [esp+247h] [ebp-491h] BYREF
  char v487; // [esp+248h] [ebp-490h] BYREF
  char v488; // [esp+249h] [ebp-48Fh] BYREF
  char v489; // [esp+24Ah] [ebp-48Eh] BYREF
  char v490; // [esp+24Bh] [ebp-48Dh] BYREF
  char v491; // [esp+24Ch] [ebp-48Ch] BYREF
  char v492; // [esp+24Dh] [ebp-48Bh] BYREF
  char v493; // [esp+24Eh] [ebp-48Ah] BYREF
  char v494; // [esp+24Fh] [ebp-489h] BYREF
  char v495; // [esp+250h] [ebp-488h] BYREF
  char v496; // [esp+251h] [ebp-487h] BYREF
  char v497; // [esp+252h] [ebp-486h] BYREF
  char v498; // [esp+253h] [ebp-485h] BYREF
  char v499; // [esp+254h] [ebp-484h] BYREF
  char v500; // [esp+255h] [ebp-483h] BYREF
  char v501; // [esp+256h] [ebp-482h] BYREF
  char v502; // [esp+257h] [ebp-481h] BYREF
  char v503; // [esp+258h] [ebp-480h] BYREF
  char v504; // [esp+259h] [ebp-47Fh] BYREF
  char v505; // [esp+25Ah] [ebp-47Eh] BYREF
  char v506; // [esp+25Bh] [ebp-47Dh] BYREF
  char v507; // [esp+25Ch] [ebp-47Ch] BYREF
  char v508; // [esp+25Dh] [ebp-47Bh] BYREF
  char v509; // [esp+25Eh] [ebp-47Ah] BYREF
  char v510; // [esp+25Fh] [ebp-479h] BYREF
  char v511; // [esp+260h] [ebp-478h] BYREF
  char v512; // [esp+261h] [ebp-477h] BYREF
  char v513; // [esp+262h] [ebp-476h] BYREF
  char v514; // [esp+263h] [ebp-475h] BYREF
  char v515; // [esp+264h] [ebp-474h] BYREF
  char v516; // [esp+265h] [ebp-473h] BYREF
  char v517; // [esp+266h] [ebp-472h] BYREF
  char v518; // [esp+267h] [ebp-471h] BYREF
  char v519; // [esp+268h] [ebp-470h] BYREF
  char v520; // [esp+269h] [ebp-46Fh] BYREF
  char v521; // [esp+26Ah] [ebp-46Eh] BYREF
  char v522; // [esp+26Bh] [ebp-46Dh] BYREF
  char v523; // [esp+26Ch] [ebp-46Ch] BYREF
  char v524; // [esp+26Dh] [ebp-46Bh] BYREF
  char v525; // [esp+26Eh] [ebp-46Ah] BYREF
  char v526; // [esp+26Fh] [ebp-469h] BYREF
  char v527; // [esp+270h] [ebp-468h] BYREF
  char v528; // [esp+271h] [ebp-467h] BYREF
  char v529; // [esp+272h] [ebp-466h] BYREF
  char v530; // [esp+273h] [ebp-465h] BYREF
  char v531; // [esp+274h] [ebp-464h] BYREF
  char v532; // [esp+275h] [ebp-463h] BYREF
  char v533; // [esp+276h] [ebp-462h] BYREF
  char v534; // [esp+277h] [ebp-461h] BYREF
  char v535; // [esp+278h] [ebp-460h] BYREF
  char v536; // [esp+279h] [ebp-45Fh] BYREF
  char v537; // [esp+27Ah] [ebp-45Eh] BYREF
  char v538; // [esp+27Bh] [ebp-45Dh] BYREF
  char v539; // [esp+27Ch] [ebp-45Ch] BYREF
  char v540; // [esp+27Dh] [ebp-45Bh] BYREF
  char v541; // [esp+27Eh] [ebp-45Ah] BYREF
  char v542; // [esp+27Fh] [ebp-459h] BYREF
  char v543; // [esp+280h] [ebp-458h] BYREF
  char v544; // [esp+281h] [ebp-457h] BYREF
  char v545; // [esp+282h] [ebp-456h] BYREF
  char v546; // [esp+283h] [ebp-455h] BYREF
  char v547; // [esp+284h] [ebp-454h] BYREF
  char v548; // [esp+285h] [ebp-453h] BYREF
  char v549; // [esp+286h] [ebp-452h] BYREF
  char v550; // [esp+287h] [ebp-451h] BYREF
  char v551; // [esp+288h] [ebp-450h] BYREF
  char v552; // [esp+289h] [ebp-44Fh] BYREF
  char v553; // [esp+28Ah] [ebp-44Eh] BYREF
  char v554; // [esp+28Bh] [ebp-44Dh] BYREF
  char v555; // [esp+28Ch] [ebp-44Ch] BYREF
  char v556; // [esp+28Dh] [ebp-44Bh] BYREF
  char v557; // [esp+28Eh] [ebp-44Ah] BYREF
  char v558; // [esp+28Fh] [ebp-449h] BYREF
  char v559; // [esp+290h] [ebp-448h] BYREF
  char v560; // [esp+291h] [ebp-447h] BYREF
  char v561; // [esp+292h] [ebp-446h] BYREF
  char v562; // [esp+293h] [ebp-445h] BYREF
  char v563; // [esp+294h] [ebp-444h] BYREF
  char v564; // [esp+295h] [ebp-443h] BYREF
  char v565; // [esp+296h] [ebp-442h] BYREF
  char v566; // [esp+297h] [ebp-441h] BYREF
  char v567; // [esp+298h] [ebp-440h] BYREF
  char v568; // [esp+299h] [ebp-43Fh] BYREF
  char v569; // [esp+29Ah] [ebp-43Eh] BYREF
  char v570; // [esp+29Bh] [ebp-43Dh] BYREF
  char v571; // [esp+29Ch] [ebp-43Ch] BYREF
  char v572; // [esp+29Dh] [ebp-43Bh] BYREF
  char v573; // [esp+29Eh] [ebp-43Ah] BYREF
  char v574; // [esp+29Fh] [ebp-439h] BYREF
  char v575; // [esp+2A0h] [ebp-438h] BYREF
  char v576; // [esp+2A1h] [ebp-437h] BYREF
  char v577; // [esp+2A2h] [ebp-436h] BYREF
  char v578; // [esp+2A3h] [ebp-435h] BYREF
  char v579; // [esp+2A4h] [ebp-434h] BYREF
  char v580; // [esp+2A5h] [ebp-433h] BYREF
  char v581; // [esp+2A6h] [ebp-432h] BYREF
  char v582; // [esp+2A7h] [ebp-431h] BYREF
  char v583; // [esp+2A8h] [ebp-430h] BYREF
  char v584; // [esp+2A9h] [ebp-42Fh] BYREF
  char v585; // [esp+2AAh] [ebp-42Eh] BYREF
  char v586; // [esp+2ABh] [ebp-42Dh] BYREF
  char v587; // [esp+2ACh] [ebp-42Ch] BYREF
  char v588; // [esp+2ADh] [ebp-42Bh] BYREF
  char v589; // [esp+2AEh] [ebp-42Ah] BYREF
  char v590; // [esp+2AFh] [ebp-429h] BYREF
  char v591; // [esp+2B0h] [ebp-428h] BYREF
  char v592; // [esp+2B1h] [ebp-427h] BYREF
  char v593; // [esp+2B2h] [ebp-426h] BYREF
  char v594; // [esp+2B3h] [ebp-425h] BYREF
  char v595; // [esp+2B4h] [ebp-424h] BYREF
  char v596; // [esp+2B5h] [ebp-423h] BYREF
  char v597; // [esp+2B6h] [ebp-422h] BYREF
  char v598; // [esp+2B7h] [ebp-421h] BYREF
  char v599; // [esp+2B8h] [ebp-420h] BYREF
  char v600; // [esp+2B9h] [ebp-41Fh] BYREF
  char v601; // [esp+2BAh] [ebp-41Eh] BYREF
  char v602; // [esp+2BBh] [ebp-41Dh] BYREF
  char v603; // [esp+2BCh] [ebp-41Ch] BYREF
  char v604; // [esp+2BDh] [ebp-41Bh] BYREF
  char v605; // [esp+2BEh] [ebp-41Ah] BYREF
  char v606; // [esp+2BFh] [ebp-419h] BYREF
  char v607; // [esp+2C0h] [ebp-418h] BYREF
  char v608; // [esp+2C1h] [ebp-417h] BYREF
  char v609; // [esp+2C2h] [ebp-416h] BYREF
  char v610; // [esp+2C3h] [ebp-415h] BYREF
  char v611; // [esp+2C4h] [ebp-414h] BYREF
  char v612; // [esp+2C5h] [ebp-413h] BYREF
  char v613; // [esp+2C6h] [ebp-412h] BYREF
  char v614; // [esp+2C7h] [ebp-411h] BYREF
  char v615; // [esp+2C8h] [ebp-410h] BYREF
  char v616; // [esp+2C9h] [ebp-40Fh] BYREF
  char v617; // [esp+2CAh] [ebp-40Eh] BYREF
  char v618; // [esp+2CBh] [ebp-40Dh] BYREF
  char v619; // [esp+2CCh] [ebp-40Ch] BYREF
  char v620; // [esp+2CDh] [ebp-40Bh] BYREF
  char v621; // [esp+2CEh] [ebp-40Ah] BYREF
  char v622; // [esp+2CFh] [ebp-409h] BYREF
  char v623; // [esp+2D0h] [ebp-408h] BYREF
  char v624; // [esp+2D1h] [ebp-407h] BYREF
  char v625; // [esp+2D2h] [ebp-406h] BYREF
  char v626; // [esp+2D3h] [ebp-405h] BYREF
  char v627; // [esp+2D4h] [ebp-404h] BYREF
  char v628; // [esp+2D5h] [ebp-403h] BYREF
  char v629; // [esp+2D6h] [ebp-402h] BYREF
  char v630; // [esp+2D7h] [ebp-401h] BYREF
  char v631; // [esp+2D8h] [ebp-400h] BYREF
  char v632; // [esp+2D9h] [ebp-3FFh] BYREF
  char v633; // [esp+2DAh] [ebp-3FEh] BYREF
  char v634; // [esp+2DBh] [ebp-3FDh] BYREF
  char v635; // [esp+2DCh] [ebp-3FCh] BYREF
  char v636; // [esp+2DDh] [ebp-3FBh] BYREF
  char v637; // [esp+2DEh] [ebp-3FAh] BYREF
  char v638; // [esp+2DFh] [ebp-3F9h] BYREF
  char v639; // [esp+2E0h] [ebp-3F8h] BYREF
  char v640; // [esp+2E1h] [ebp-3F7h] BYREF
  char v641; // [esp+2E2h] [ebp-3F6h] BYREF
  char v642; // [esp+2E3h] [ebp-3F5h] BYREF
  char v643; // [esp+2E4h] [ebp-3F4h] BYREF
  char v644; // [esp+2E5h] [ebp-3F3h] BYREF
  char v645; // [esp+2E6h] [ebp-3F2h] BYREF
  char v646; // [esp+2E7h] [ebp-3F1h] BYREF
  char v647; // [esp+2E8h] [ebp-3F0h] BYREF
  char v648; // [esp+2E9h] [ebp-3EFh] BYREF
  char v649; // [esp+2EAh] [ebp-3EEh] BYREF
  char v650; // [esp+2EBh] [ebp-3EDh] BYREF
  char v651; // [esp+2ECh] [ebp-3ECh] BYREF
  char v652; // [esp+2EDh] [ebp-3EBh] BYREF
  char v653; // [esp+2EEh] [ebp-3EAh] BYREF
  char v654; // [esp+2EFh] [ebp-3E9h] BYREF
  char v655; // [esp+2F0h] [ebp-3E8h] BYREF
  char v656; // [esp+2F1h] [ebp-3E7h] BYREF
  char v657; // [esp+2F2h] [ebp-3E6h] BYREF
  char v658; // [esp+2F3h] [ebp-3E5h] BYREF
  char v659; // [esp+2F4h] [ebp-3E4h] BYREF
  char v660; // [esp+2F5h] [ebp-3E3h] BYREF
  char v661; // [esp+2F6h] [ebp-3E2h] BYREF
  char v662; // [esp+2F7h] [ebp-3E1h] BYREF
  char v663; // [esp+2F8h] [ebp-3E0h] BYREF
  char v664; // [esp+2F9h] [ebp-3DFh] BYREF
  char v665; // [esp+2FAh] [ebp-3DEh] BYREF
  char v666; // [esp+2FBh] [ebp-3DDh] BYREF
  char v667; // [esp+2FCh] [ebp-3DCh] BYREF
  char v668; // [esp+2FDh] [ebp-3DBh] BYREF
  char v669; // [esp+2FEh] [ebp-3DAh] BYREF
  char v670; // [esp+2FFh] [ebp-3D9h] BYREF
  char v671; // [esp+300h] [ebp-3D8h] BYREF
  char v672; // [esp+301h] [ebp-3D7h] BYREF
  char v673; // [esp+302h] [ebp-3D6h] BYREF
  char v674; // [esp+303h] [ebp-3D5h] BYREF
  char v675; // [esp+304h] [ebp-3D4h] BYREF
  char v676; // [esp+305h] [ebp-3D3h] BYREF
  char v677; // [esp+306h] [ebp-3D2h] BYREF
  char v678; // [esp+307h] [ebp-3D1h] BYREF
  char v679; // [esp+308h] [ebp-3D0h] BYREF
  char v680; // [esp+309h] [ebp-3CFh] BYREF
  char v681; // [esp+30Ah] [ebp-3CEh] BYREF
  char v682; // [esp+30Bh] [ebp-3CDh] BYREF
  char v683; // [esp+30Ch] [ebp-3CCh] BYREF
  char v684; // [esp+30Dh] [ebp-3CBh] BYREF
  char v685; // [esp+30Eh] [ebp-3CAh] BYREF
  char v686; // [esp+30Fh] [ebp-3C9h] BYREF
  char v687; // [esp+310h] [ebp-3C8h] BYREF
  char v688; // [esp+311h] [ebp-3C7h] BYREF
  char v689; // [esp+312h] [ebp-3C6h] BYREF
  char v690; // [esp+313h] [ebp-3C5h] BYREF
  char v691; // [esp+314h] [ebp-3C4h] BYREF
  char v692; // [esp+315h] [ebp-3C3h] BYREF
  char v693; // [esp+316h] [ebp-3C2h] BYREF
  char v694; // [esp+317h] [ebp-3C1h] BYREF
  char v695; // [esp+318h] [ebp-3C0h] BYREF
  char v696; // [esp+319h] [ebp-3BFh] BYREF
  char v697; // [esp+31Ah] [ebp-3BEh] BYREF
  char v698; // [esp+31Bh] [ebp-3BDh] BYREF
  char v699; // [esp+31Ch] [ebp-3BCh] BYREF
  char v700; // [esp+31Dh] [ebp-3BBh] BYREF
  char v701; // [esp+31Eh] [ebp-3BAh] BYREF
  char v702; // [esp+31Fh] [ebp-3B9h] BYREF
  char v703; // [esp+320h] [ebp-3B8h] BYREF
  char v704; // [esp+321h] [ebp-3B7h] BYREF
  char v705; // [esp+322h] [ebp-3B6h] BYREF
  char v706; // [esp+323h] [ebp-3B5h] BYREF
  char v707; // [esp+324h] [ebp-3B4h] BYREF
  char v708; // [esp+325h] [ebp-3B3h] BYREF
  char v709; // [esp+326h] [ebp-3B2h] BYREF
  char v710; // [esp+327h] [ebp-3B1h] BYREF
  char v711; // [esp+328h] [ebp-3B0h] BYREF
  char v712; // [esp+329h] [ebp-3AFh] BYREF
  char v713; // [esp+32Ah] [ebp-3AEh] BYREF
  char v714; // [esp+32Bh] [ebp-3ADh] BYREF
  char v715; // [esp+32Ch] [ebp-3ACh] BYREF
  char v716; // [esp+32Dh] [ebp-3ABh] BYREF
  char v717; // [esp+32Eh] [ebp-3AAh] BYREF
  char v718; // [esp+32Fh] [ebp-3A9h] BYREF
  char v719; // [esp+330h] [ebp-3A8h] BYREF
  char v720; // [esp+331h] [ebp-3A7h] BYREF
  char v721; // [esp+332h] [ebp-3A6h] BYREF
  char v722; // [esp+333h] [ebp-3A5h] BYREF
  char v723; // [esp+334h] [ebp-3A4h] BYREF
  char v724; // [esp+335h] [ebp-3A3h] BYREF
  char v725; // [esp+336h] [ebp-3A2h] BYREF
  char v726; // [esp+337h] [ebp-3A1h] BYREF
  char v727; // [esp+338h] [ebp-3A0h] BYREF
  char v728; // [esp+339h] [ebp-39Fh] BYREF
  char v729; // [esp+33Ah] [ebp-39Eh] BYREF
  char v730; // [esp+33Bh] [ebp-39Dh] BYREF
  char v731; // [esp+33Ch] [ebp-39Ch] BYREF
  char v732; // [esp+33Dh] [ebp-39Bh] BYREF
  char v733; // [esp+33Eh] [ebp-39Ah] BYREF
  char v734; // [esp+33Fh] [ebp-399h] BYREF
  char v735; // [esp+340h] [ebp-398h] BYREF
  char v736; // [esp+341h] [ebp-397h] BYREF
  int v737; // [esp+342h] [ebp-396h] BYREF
  char v738; // [esp+347h] [ebp-391h] BYREF
  int v739; // [esp+348h] [ebp-390h] BYREF
  char v740; // [esp+34Dh] [ebp-38Bh] BYREF
  int v741; // [esp+34Eh] [ebp-38Ah] BYREF
  char v742; // [esp+353h] [ebp-385h] BYREF
  int v743; // [esp+354h] [ebp-384h] BYREF
  char v744; // [esp+358h] [ebp-380h]
  char v745; // [esp+359h] [ebp-37Fh] BYREF
  int v746; // [esp+35Ah] [ebp-37Eh] BYREF
  char v747; // [esp+35Fh] [ebp-379h] BYREF
  int v748; // [esp+360h] [ebp-378h] BYREF
  char v749; // [esp+365h] [ebp-373h] BYREF
  int v750; // [esp+366h] [ebp-372h] BYREF
  char v751; // [esp+36Bh] [ebp-36Dh] BYREF
  int v752; // [esp+36Ch] [ebp-36Ch] BYREF
  char v753; // [esp+371h] [ebp-367h]
  int v754; // [esp+372h] [ebp-366h] BYREF
  int v755; // [esp+376h] [ebp-362h] BYREF
  bool v756; // [esp+37Bh] [ebp-35Dh]
  double v757; // [esp+37Ch] [ebp-35Ch]
  double v758; // [esp+384h] [ebp-354h]
  double v759; // [esp+38Ch] [ebp-34Ch]
  double v760; // [esp+394h] [ebp-344h]
  double v761; // [esp+39Ch] [ebp-33Ch]
  double v762; // [esp+3A4h] [ebp-334h]
  double v763; // [esp+3ACh] [ebp-32Ch]
  double v764; // [esp+3B4h] [ebp-324h]
  double v765; // [esp+3BCh] [ebp-31Ch]
  double v766; // [esp+3C4h] [ebp-314h]
  double v767; // [esp+3CCh] [ebp-30Ch]
  double v768; // [esp+3D4h] [ebp-304h]
  __int16 v769; // [esp+3E0h] [ebp-2F8h] BYREF
  __int16 v770; // [esp+3E4h] [ebp-2F4h] BYREF
  __int16 v771; // [esp+3E8h] [ebp-2F0h]
  double v772; // [esp+3ECh] [ebp-2ECh]
  double v773; // [esp+3F4h] [ebp-2E4h]
  double v774; // [esp+3FCh] [ebp-2DCh]
  double v775; // [esp+404h] [ebp-2D4h]
  double v776; // [esp+40Ch] [ebp-2CCh]
  double v777; // [esp+414h] [ebp-2C4h]
  double v778; // [esp+41Ch] [ebp-2BCh]
  double v779; // [esp+424h] [ebp-2B4h]
  double v780; // [esp+42Ch] [ebp-2ACh]
  double v781; // [esp+434h] [ebp-2A4h]
  __int16 v782; // [esp+43Ch] [ebp-29Ch]
  __int16 v783; // [esp+440h] [ebp-298h] BYREF
  double v784; // [esp+444h] [ebp-294h]
  double v785; // [esp+44Ch] [ebp-28Ch]
  double v786; // [esp+454h] [ebp-284h]
  double v787; // [esp+45Ch] [ebp-27Ch]
  double v788; // [esp+464h] [ebp-274h]
  double v789; // [esp+46Ch] [ebp-26Ch]
  double v790; // [esp+474h] [ebp-264h]
  double v791; // [esp+47Ch] [ebp-25Ch]
  double v792; // [esp+484h] [ebp-254h]
  double v793; // [esp+48Ch] [ebp-24Ch]
  __int16 v794; // [esp+494h] [ebp-244h] BYREF
  __int16 v795; // [esp+498h] [ebp-240h] BYREF
  double v796; // [esp+49Ch] [ebp-23Ch]
  double v797; // [esp+4A4h] [ebp-234h]
  double v798; // [esp+4ACh] [ebp-22Ch]
  double v799; // [esp+4B4h] [ebp-224h]
  double v800; // [esp+4BCh] [ebp-21Ch]
  double v801; // [esp+4C4h] [ebp-214h]
  double v802; // [esp+4CCh] [ebp-20Ch]
  double v803; // [esp+4D4h] [ebp-204h]
  double v804; // [esp+4DCh] [ebp-1FCh]
  double v805; // [esp+4E4h] [ebp-1F4h]
  __int16 v806; // [esp+4ECh] [ebp-1ECh] BYREF
  __int16 v807; // [esp+4F0h] [ebp-1E8h] BYREF
  __int16 v808; // [esp+4F4h] [ebp-1E4h] BYREF
  __int16 v809; // [esp+4F8h] [ebp-1E0h] BYREF
  __int16 v810; // [esp+4FCh] [ebp-1DCh] BYREF
  __int16 v811; // [esp+500h] [ebp-1D8h] BYREF
  __int16 v812; // [esp+504h] [ebp-1D4h] BYREF
  __int16 v813; // [esp+508h] [ebp-1D0h] BYREF
  __int16 v814; // [esp+50Ch] [ebp-1CCh] BYREF
  __int16 v815; // [esp+510h] [ebp-1C8h] BYREF
  double v816; // [esp+514h] [ebp-1C4h]
  double v817; // [esp+51Ch] [ebp-1BCh]
  double v818; // [esp+524h] [ebp-1B4h]
  double v819; // [esp+52Ch] [ebp-1ACh]
  double v820; // [esp+534h] [ebp-1A4h]
  double v821; // [esp+53Ch] [ebp-19Ch]
  double v822; // [esp+544h] [ebp-194h]
  double v823; // [esp+54Ch] [ebp-18Ch]
  double v824; // [esp+554h] [ebp-184h]
  __int16 v825; // [esp+560h] [ebp-178h] BYREF
  __int16 v826; // [esp+564h] [ebp-174h] BYREF
  __int16 v827; // [esp+568h] [ebp-170h] BYREF
  __int16 v828; // [esp+56Ch] [ebp-16Ch] BYREF
  __int16 v829; // [esp+570h] [ebp-168h] BYREF
  char v830; // [esp+574h] [ebp-164h] BYREF
  char v831; // [esp+578h] [ebp-160h] BYREF
  char v832; // [esp+57Ch] [ebp-15Ch] BYREF
  int v833; // [esp+580h] [ebp-158h]
  double v834; // [esp+584h] [ebp-154h]
  int v835; // [esp+590h] [ebp-148h]
  double v836; // [esp+594h] [ebp-144h]
  int v837; // [esp+59Ch] [ebp-13Ch]
  int v838; // [esp+5A0h] [ebp-138h]
  __int16 v839; // [esp+5A4h] [ebp-134h] BYREF
  __int16 v840; // [esp+5A8h] [ebp-130h] BYREF
  __int16 v841[4]; // [esp+5ACh] [ebp-12Ch] BYREF
  double v842; // [esp+5B4h] [ebp-124h]
  int v843; // [esp+5C0h] [ebp-118h] BYREF
  int v844; // [esp+5C4h] [ebp-114h] BYREF
  __int16 v845[4]; // [esp+5C8h] [ebp-110h] BYREF
  int v846; // [esp+5D0h] [ebp-108h] BYREF
  int v847; // [esp+5D4h] [ebp-104h] BYREF
  int v848; // [esp+5D8h] [ebp-100h] BYREF
  __int16 v849[4]; // [esp+5DCh] [ebp-FCh] BYREF
  int v850; // [esp+5E4h] [ebp-F4h] BYREF
  __int16 v851; // [esp+5E8h] [ebp-F0h] BYREF
  __int16 v852; // [esp+5ECh] [ebp-ECh]
  int v853; // [esp+5F0h] [ebp-E8h] BYREF
  __int16 v854[4]; // [esp+5F4h] [ebp-E4h] BYREF
  __int16 v855; // [esp+5FCh] [ebp-DCh] BYREF
  __int16 v856[4]; // [esp+600h] [ebp-D8h] BYREF
  int v857; // [esp+608h] [ebp-D0h] BYREF
  int v858; // [esp+60Ch] [ebp-CCh] BYREF
  int v859; // [esp+610h] [ebp-C8h] BYREF
  double v860; // [esp+614h] [ebp-C4h]
  double v861; // [esp+61Ch] [ebp-BCh]
  int v862; // [esp+624h] [ebp-B4h]
  __int16 v863[4]; // [esp+628h] [ebp-B0h] BYREF
  int v864; // [esp+630h] [ebp-A8h] BYREF
  int v865; // [esp+634h] [ebp-A4h] BYREF
  __int16 v866[4]; // [esp+638h] [ebp-A0h] BYREF
  __int16 v867; // [esp+640h] [ebp-98h]
  int v868; // [esp+644h] [ebp-94h] BYREF
  int v869; // [esp+648h] [ebp-90h] BYREF
  double v870; // [esp+64Ch] [ebp-8Ch]
  int v871; // [esp+658h] [ebp-80h] BYREF
  double v872; // [esp+65Ch] [ebp-7Ch]
  int v873; // [esp+668h] [ebp-70h] BYREF
  __int16 v874; // [esp+66Ch] [ebp-6Ch]
  int v875; // [esp+670h] [ebp-68h] BYREF
  __int16 v876; // [esp+674h] [ebp-64h]
  int v877; // [esp+678h] [ebp-60h] BYREF
  char v878; // [esp+67Fh] [ebp-59h]
  __int16 v879[4]; // [esp+680h] [ebp-58h] BYREF
  int v880; // [esp+688h] [ebp-50h] BYREF
  __int16 v881[4]; // [esp+68Ch] [ebp-4Ch] BYREF
  __int16 v882[4]; // [esp+694h] [ebp-44h] BYREF
  __int16 v883[4]; // [esp+69Ch] [ebp-3Ch] BYREF
  __int16 v884; // [esp+6A4h] [ebp-34h]
  int v885; // [esp+6A8h] [ebp-30h] BYREF
  int v886; // [esp+6ACh] [ebp-2Ch] BYREF
  int v887; // [esp+6B0h] [ebp-28h] BYREF
  int v888; // [esp+6B4h] [ebp-24h] BYREF
  __int16 v889; // [esp+6B8h] [ebp-20h]
  __int16 i; // [esp+6BCh] [ebp-1Ch]
  __int16 v891[4]; // [esp+6C0h] [ebp-18h] BYREF
  int v892; // [esp+6C8h] [ebp-10h] BYREF
  int v893; // [esp+6D4h] [ebp-4h]

  v415 = 0;
  v862 = sub_47E420((_DWORD *)dword_791364);
  sub_4C7C40(v854);
  v893 = 0;
  LOWORD(v1) = a1;
  sub_4C7D30(v879, 1, v1);
  LOBYTE(v893) = 1;
  LOWORD(v2) = a1;
  sub_4C7D30(v849, 0, v2);
  LOBYTE(v893) = 2;
  sub_485940(v879, &v880, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v893) = 3;
  sub_485940(v849, &v843, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v893) = 4;
  sub_484320(v881, (int)v854);
  LOBYTE(v893) = 5;
  sub_4846A0(v881, (int)v879);
  sub_484320(v841, (int)v854);
  LOBYTE(v893) = 6;
  sub_4846A0(v841, (int)v849);
  sub_484300(v845);
  LOBYTE(v893) = 7;
  sub_485680(v881, v891, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v893) = 8;
  sub_485680(v841, v863, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v893) = 9;
  sub_484320(v882, (int)v845);
  LOBYTE(v893) = 10;
  sub_4847B0(v882, (int)v879);
  sub_4847B0(v882, (int)v849);
  sub_485940(v882, &v871, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v893) = 11;
  v414 = (unsigned __int8 *)sub_485940(v863, &v754, 1, 1, 1, 1, 0, 0, 0);
  v413 = v414;
  LOBYTE(v893) = 12;
  v412 = (unsigned __int8 *)sub_485940(v891, &v755, 1, 1, 1, 1, 0, 0, 0);
  v411 = v412;
  LOBYTE(v893) = 13;
  v756 = sub_4A2440(v412, v414);
  LOBYTE(v893) = 12;
  ATL::CComCriticalSection::~CComCriticalSection(&v755);
  LOBYTE(v893) = 11;
  ATL::CComCriticalSection::~CComCriticalSection(&v754);
  if ( v756 )
  {
    sub_484490(v845, v881);
    byte_791AB8[v862] = 1;
    v410 = sub_485940(v863, &v750, 1, 1, 1, 1, 0, 0, 0);
    v409 = v410;
    LOBYTE(v893) = 14;
    v408 = sub_485940(v891, &v752, 1, 1, 1, 1, 0, 0, 0);
    v407 = v408;
    v893 = 15;
    v415 |= 3u;
    v293 = sub_4A2160(v410, &v749);
    v3 = sub_4A2160(v408, &v751);
    if ( !sub_4A1E10(v3, v293) )
      goto LABEL_5;
    v406 = sub_485940(v863, &v746, 1, 1, 1, 1, 0, 0, 0);
    v405 = v406;
    v893 = 16;
    v404 = sub_485940(v891, &v748, 1, 1, 1, 1, 0, 0, 0);
    v403 = v404;
    v893 = 17;
    v415 |= 0xCu;
    v293 = sub_4A21B0(v406, &v745);
    v4 = sub_4A21B0(v404, &v747);
    if ( sub_4A1FB0(v4, v293) )
      v402 = 1;
    else
LABEL_5:
      v402 = 0;
    v753 = v402;
    v893 = 16;
    if ( (v415 & 8) != 0 )
    {
      v415 &= ~8u;
      ATL::CComCriticalSection::~CComCriticalSection(&v748);
    }
    v893 = 15;
    if ( (v415 & 4) != 0 )
    {
      v415 &= ~4u;
      ATL::CComCriticalSection::~CComCriticalSection(&v746);
    }
    v893 = 14;
    if ( (v415 & 2) != 0 )
    {
      v415 &= ~2u;
      ATL::CComCriticalSection::~CComCriticalSection(&v752);
    }
    v893 = 11;
    if ( (v415 & 1) != 0 )
    {
      v415 &= ~1u;
      ATL::CComCriticalSection::~CComCriticalSection(&v750);
    }
    if ( v753 )
      byte_791868[v862] = 1;
    else
      byte_791868[v862] = 0;
  }
  else
  {
    sub_484490(v845, v841);
    byte_791868[v862] = 1;
    v401 = sub_485940(v863, &v741, 1, 1, 1, 1, 0, 0, 0);
    v400 = v401;
    LOBYTE(v893) = 18;
    v399 = sub_485940(v891, &v743, 1, 1, 1, 1, 0, 0, 0);
    v398 = v399;
    v893 = 19;
    v415 |= 0x30u;
    v293 = sub_4A2160(v401, &v740);
    v5 = sub_4A2160(v399, &v742);
    if ( !sub_4A1E10(v5, v293) )
      goto LABEL_20;
    v397 = sub_485940(v863, &v737, 1, 1, 1, 1, 0, 0, 0);
    v396 = v397;
    v893 = 20;
    v395 = sub_485940(v891, &v739, 1, 1, 1, 1, 0, 0, 0);
    v394 = v395;
    v893 = 21;
    v415 |= 0xC0u;
    v293 = sub_4A21B0(v397, &v736);
    v6 = sub_4A21B0(v395, &v738);
    if ( sub_4A1FB0(v6, v293) )
      v393 = 1;
    else
LABEL_20:
      v393 = 0;
    v744 = v393;
    v893 = 20;
    if ( (v415 & 0x80) != 0 )
    {
      v415 &= ~0x80u;
      ATL::CComCriticalSection::~CComCriticalSection(&v739);
    }
    v893 = 19;
    if ( (v415 & 0x40) != 0 )
    {
      v415 &= ~0x40u;
      ATL::CComCriticalSection::~CComCriticalSection(&v737);
    }
    v893 = 18;
    if ( (v415 & 0x20) != 0 )
    {
      v415 &= ~0x20u;
      ATL::CComCriticalSection::~CComCriticalSection(&v743);
    }
    v893 = 11;
    if ( (v415 & 0x10) != 0 )
    {
      v415 &= ~0x10u;
      ATL::CComCriticalSection::~CComCriticalSection(&v741);
    }
    if ( v744 )
      byte_791AB8[v862] = 1;
    else
      byte_791AB8[v862] = 0;
  }
  sub_484300(v883);
  LOBYTE(v893) = 22;
  sub_485680(v881, v856, 0, 1, 1, 0, 0, 0, 0);
  LOBYTE(v893) = 23;
  sub_485680(v841, v866, 0, 1, 1, 0, 0, 0, 0);
  LOBYTE(v893) = 24;
  sub_485940(v856, &v857, 0, 1, 1, 0, 0, 0, 0);
  LOBYTE(v893) = 25;
  sub_485940(v866, &v887, 0, 1, 1, 0, 0, 0, 0);
  LOBYTE(v893) = 26;
  sub_4A20D0(&v892);
  LOBYTE(v893) = 27;
  if ( sub_4A2550((unsigned __int8 *)&v857, (unsigned __int8 *)&v887) )
  {
    sub_484490(v883, v881);
    v892 = v857;
    if ( byte_791AB8[v862] )
      byte_791868[v862] = 0;
  }
  else
  {
    sub_484490(v883, v841);
    v892 = v887;
    if ( byte_791868[v862] )
      byte_791AB8[v862] = 0;
  }
  sub_485940(v845, &v846, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v893) = 28;
  if ( a1 >= 5 )
  {
    v858 = 0;
    v864 = 0;
    v874 = 0;
  }
  else
  {
    sub_49C760(v881, &v858, &v839);
    sub_49C760(v841, &v864, &v840);
    if ( v839 <= v840 )
      v874 = v840;
    else
      v874 = v839;
  }
  sub_49C760(v879, &v850, &v851);
  sub_49C760(v849, &v875, &v855);
  if ( v851 <= v855 )
    v884 = v855;
  else
    v884 = v851;
  v867 = sub_49C700(v879);
  v876 = sub_49C700(v849);
  v852 = 0;
  v872 = -0.02;
  sub_4A20D0(&v868);
  LOBYTE(v893) = 29;
  if ( sub_4A2440((unsigned __int8 *)&v843, (unsigned __int8 *)&v880) )
    v868 = v843;
  else
    v868 = v880;
  v293 = (unsigned __int8 *)dword_791390;
  v7 = sub_4A2160(&v846, &v735);
  if ( sub_4A1E10(v7, v293) )
  {
    v852 = 0;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v293 = sub_4A21B0(&v868, &v729);
        v12 = sub_4A21B0(&v846, &v730);
        if ( sub_4A1FB0(v12, v293) )
        {
          v293 = (unsigned __int8 *)dword_7913E0;
          v13 = sub_4A2200(&v846, &v728);
          if ( sub_4A1FB0(v13, v293) )
          {
            v872 = 0.9;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913BC;
            v14 = sub_4A2200(&v846, &v727);
            if ( sub_4A1FB0(v14, v293) )
            {
              v872 = 0.7;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_791400;
              v15 = sub_4A2200(&v846, &v726);
              if ( sub_4A1FB0(v15, v293) )
              {
                v872 = 0.6;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_79138C;
                v16 = sub_4A2200(&v846, &v725);
                if ( sub_4A1FB0(v16, v293) )
                  v872 = 0.4;
                else
                  v872 = 0.1;
              }
            }
          }
        }
        else
        {
          v293 = (unsigned __int8 *)dword_7913C8;
          v17 = sub_4A21B0(&v846, &v724);
          if ( sub_4A1FB0(v17, v293) )
          {
            v872 = 0.9;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v18 = sub_4A21B0(&v846, &v723);
            if ( sub_4A1FB0(v18, v293) )
            {
              v872 = 0.7;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v19 = sub_4A21B0(&v846, &v722);
              if ( sub_4A1FB0(v19, v293) )
                v872 = 0.4;
              else
                v872 = 0.2;
            }
          }
        }
      }
      else
      {
        v293 = sub_4A21B0(&v868, &v720);
        v20 = sub_4A21B0(&v846, &v721);
        if ( sub_4A1FB0(v20, v293) )
        {
          v293 = sub_4A2200(&v868, &v718);
          v21 = sub_4A2200(&v846, &v719);
          if ( sub_4A1FB0(v21, v293) )
          {
            v293 = (unsigned __int8 *)dword_7913BC;
            v22 = sub_4A2250(&v846, &v717);
            if ( sub_4A1FB0(v22, v293) )
            {
              v872 = 0.9;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_791400;
              v23 = sub_4A2250(&v846, &v716);
              if ( sub_4A1FB0(v23, v293) )
              {
                v872 = 0.5;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_79138C;
                v24 = sub_4A2250(&v846, &v715);
                if ( sub_4A1FB0(v24, v293) )
                  v872 = 0.2;
                else
                  v872 = 0.05;
              }
            }
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v25 = sub_4A2200(&v846, &v714);
            if ( sub_4A1FB0(v25, v293) )
            {
              v872 = 0.9;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v26 = sub_4A2200(&v846, &v713);
              if ( sub_4A1FB0(v26, v293) )
              {
                v872 = 0.6;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_791400;
                v27 = sub_4A2200(&v846, &v712);
                if ( sub_4A1FB0(v27, v293) )
                {
                  v872 = 0.4;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_79138C;
                  v28 = sub_4A2200(&v846, &v711);
                  if ( sub_4A1FB0(v28, v293) )
                    v872 = 0.2;
                  else
                    v872 = 0.05;
                }
              }
            }
          }
        }
        else
        {
          v293 = (unsigned __int8 *)dword_7913C8;
          v29 = sub_4A21B0(&v846, &v710);
          if ( sub_4A1FB0(v29, v293) )
          {
            v872 = 0.9;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v30 = sub_4A21B0(&v846, &v709);
            if ( sub_4A1FB0(v30, v293) )
            {
              v872 = 0.6;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v31 = sub_4A21B0(&v846, &v708);
              if ( sub_4A1FB0(v31, v293) )
                v872 = 0.3;
              else
                v872 = 0.1;
            }
          }
        }
      }
    }
    else
    {
      v293 = (unsigned __int8 *)dword_7913C8;
      v8 = sub_4A21B0(&v846, &v734);
      if ( sub_4A1FB0(v8, v293) )
      {
        v872 = 0.9;
      }
      else
      {
        v293 = (unsigned __int8 *)dword_7913E0;
        v9 = sub_4A21B0(&v846, &v733);
        if ( sub_4A1FB0(v9, v293) )
        {
          v872 = 0.7;
        }
        else
        {
          v293 = (unsigned __int8 *)dword_7913BC;
          v10 = sub_4A21B0(&v846, &v732);
          if ( sub_4A1FB0(v10, v293) )
          {
            v872 = 0.6;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_791400;
            v11 = sub_4A21B0(&v846, &v731);
            if ( sub_4A1FB0(v11, v293) )
              v872 = 0.4;
            else
              v872 = 0.1;
          }
        }
      }
    }
  }
  else
  {
    v293 = (unsigned __int8 *)dword_7913B0;
    v32 = sub_4A2160(&v846, &v707);
    if ( sub_4A1E10(v32, v293) )
    {
      v852 = 1;
      v293 = (unsigned __int8 *)dword_7913B0;
      v33 = sub_4A2160(&v868, &v706);
      if ( sub_4A1E10(v33, v293) )
      {
        v293 = sub_4A2200(&v868, &v704);
        v34 = sub_4A2200(&v846, &v705);
        if ( sub_4A1FB0(v34, v293) )
        {
          v293 = sub_4A2250(&v868, &v702);
          v35 = sub_4A2250(&v846, &v703);
          if ( sub_4A1FB0(v35, v293) )
          {
            v293 = (unsigned __int8 *)dword_7913BC;
            v36 = sub_4A22A0(&v846, &v701);
            if ( sub_4A1FB0(v36, v293) )
            {
              v872 = 0.9;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_791400;
              v37 = sub_4A22A0(&v846, &v700);
              if ( sub_4A1FB0(v37, v293) )
              {
                v872 = 0.7;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_79138C;
                v38 = sub_4A22A0(&v846, &v699);
                if ( sub_4A1FB0(v38, v293) )
                {
                  v872 = 0.6;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913F4;
                  v39 = sub_4A22A0(&v846, &v698);
                  if ( sub_4A1FB0(v39, v293) )
                    v872 = 0.4;
                  else
                    v872 = 0.1;
                }
              }
            }
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v40 = sub_4A2250(&v846, &v697);
            if ( sub_4A1FB0(v40, v293) )
            {
              v872 = 0.9;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v41 = sub_4A2250(&v846, &v696);
              if ( sub_4A1FB0(v41, v293) )
              {
                v872 = 0.7;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_791400;
                v42 = sub_4A2250(&v846, &v695);
                if ( sub_4A1FB0(v42, v293) )
                {
                  v872 = 0.6;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_79138C;
                  v43 = sub_4A2200(&v846, &v694);
                  if ( sub_4A1FB0(v43, v293) )
                    v872 = 0.4;
                  else
                    v872 = 0.1;
                }
              }
            }
          }
        }
        else
        {
          v293 = (unsigned __int8 *)dword_7913C8;
          v44 = sub_4A2200(&v846, &v693);
          if ( sub_4A1FB0(v44, v293) )
          {
            v872 = 0.9;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v45 = sub_4A2200(&v846, &v692);
            if ( sub_4A1FB0(v45, v293) )
            {
              v872 = 0.7;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v46 = sub_4A2200(&v846, &v691);
              if ( sub_4A1FB0(v46, v293) )
              {
                v872 = 0.6;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_791400;
                v47 = sub_4A2200(&v846, &v690);
                if ( sub_4A1FB0(v47, v293) )
                  v872 = 0.4;
                else
                  v872 = 0.1;
              }
            }
          }
        }
      }
      else if ( a1 )
      {
        v293 = sub_4A21B0(&v868, &v676);
        v60 = sub_4A21B0(&v846, &v677);
        if ( sub_4A2010(v60, v293) )
        {
          v293 = (unsigned __int8 *)dword_7913C8;
          v61 = sub_4A21B0(&v846, &v675);
          if ( sub_4A1FB0(v61, v293) )
          {
            v872 = 1.0;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v62 = sub_4A21B0(&v846, &v674);
            if ( sub_4A1FB0(v62, v293) )
            {
              v872 = 0.9;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v63 = sub_4A21B0(&v846, &v673);
              if ( sub_4A1FB0(v63, v293) )
              {
                v872 = 0.85;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_791400;
                v64 = sub_4A21B0(&v846, &v672);
                if ( sub_4A1FB0(v64, v293) )
                  v872 = 0.8;
                else
                  v872 = 0.75;
              }
            }
          }
        }
        else
        {
          v293 = sub_4A21B0(&v868, &v670);
          v65 = sub_4A21B0(&v846, &v671);
          if ( sub_4A1FB0(v65, v293) )
            v872 = 0.5;
          else
            v872 = 0.2;
        }
      }
      else
      {
        v293 = (unsigned __int8 *)dword_7913C8;
        v48 = sub_4A21B0(&v846, &v689);
        if ( sub_4A1FB0(v48, v293) )
        {
          v872 = 0.9615384615384616;
        }
        else
        {
          v293 = (unsigned __int8 *)dword_7913E0;
          v49 = sub_4A21B0(&v846, &v688);
          if ( sub_4A1FB0(v49, v293) )
          {
            v872 = 0.8846153846153846;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913BC;
            v50 = sub_4A21B0(&v846, &v687);
            if ( sub_4A1FB0(v50, v293) )
            {
              v872 = 0.8076923076923077;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_791400;
              v51 = sub_4A21B0(&v846, &v686);
              if ( sub_4A1FB0(v51, v293) )
              {
                v872 = 0.7307692307692307;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_79138C;
                v52 = sub_4A21B0(&v846, &v685);
                if ( sub_4A1FB0(v52, v293) )
                {
                  v872 = 0.6538461538461539;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913F4;
                  v53 = sub_4A21B0(&v846, &v684);
                  if ( sub_4A1FB0(v53, v293) )
                  {
                    v872 = 0.5769230769230769;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_791410;
                    v54 = sub_4A21B0(&v846, &v683);
                    if ( sub_4A1FB0(v54, v293) )
                    {
                      v872 = 0.5;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913F8;
                      v55 = sub_4A21B0(&v846, &v682);
                      if ( sub_4A1FB0(v55, v293) )
                      {
                        v872 = 0.4230769230769231;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791404;
                        v56 = sub_4A21B0(&v846, &v681);
                        if ( sub_4A1FB0(v56, v293) )
                        {
                          v872 = 0.3461538461538461;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_7913A4;
                          v57 = sub_4A21B0(&v846, &v680);
                          if ( sub_4A1FB0(v57, v293) )
                          {
                            v872 = 0.2692307692307692;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_791414;
                            v58 = sub_4A21B0(&v846, &v679);
                            if ( sub_4A1FB0(v58, v293) )
                            {
                              v872 = 0.1923076923076923;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_7913D8;
                              v59 = sub_4A21B0(&v846, &v678);
                              if ( sub_4A1FB0(v59, v293) )
                                v872 = 0.1153846153846154;
                              else
                                v872 = 0.03846153846153846;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v293 = (unsigned __int8 *)dword_791380;
      v66 = sub_4A2160(&v846, &v669);
      if ( sub_4A1E10(v66, v293) )
      {
        v852 = 2;
        v293 = (unsigned __int8 *)dword_7913B0;
        v67 = sub_4A2160(&v868, &v668);
        if ( sub_4A1E10(v67, v293) )
        {
          v293 = sub_4A21B0(&v868, &v666);
          v68 = sub_4A21B0(&v846, &v667);
          if ( sub_4A1FB0(v68, v293) )
          {
            v293 = sub_4A2200(&v868, &v664);
            v69 = sub_4A2200(&v846, &v665);
            if ( sub_4A2010(v69, v293) )
            {
              v293 = (unsigned __int8 *)dword_7913E0;
              v70 = sub_4A21B0(&v846, &v663);
              if ( sub_4A1FB0(v70, v293) )
              {
                v872 = 0.95;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_7913BC;
                v71 = sub_4A21B0(&v846, &v662);
                if ( sub_4A1FB0(v71, v293) )
                {
                  v872 = 0.85;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_791400;
                  v72 = sub_4A21B0(&v846, &v661);
                  if ( sub_4A1FB0(v72, v293) )
                    v872 = 0.75;
                  else
                    v872 = 0.65;
                }
              }
            }
            else
            {
              v293 = sub_4A2200(&v868, &v659);
              v73 = sub_4A2200(&v846, &v660);
              if ( sub_4A1FB0(v73, v293) )
                v872 = 0.5;
              else
                v872 = 0.25;
            }
          }
          else
          {
            v293 = sub_4A21B0(&v868, &v657);
            v74 = sub_4A2200(&v846, &v658);
            if ( sub_4A1FB0(v74, v293) )
            {
              v293 = sub_4A2200(&v868, &v655);
              v75 = sub_4A21B0(&v846, &v656);
              if ( sub_4A2010(v75, v293) )
              {
                v293 = (unsigned __int8 *)dword_7913C8;
                v76 = sub_4A21B0(&v846, &v654);
                if ( sub_4A1FB0(v76, v293) )
                {
                  v872 = 0.95;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913E0;
                  v77 = sub_4A21B0(&v846, &v653);
                  if ( sub_4A1FB0(v77, v293) )
                  {
                    v872 = 0.85;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_7913BC;
                    v78 = sub_4A21B0(&v846, &v652);
                    if ( sub_4A1FB0(v78, v293) )
                    {
                      v872 = 0.75;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_791400;
                      v79 = sub_4A21B0(&v846, &v651);
                      if ( sub_4A1FB0(v79, v293) )
                        v872 = 0.65;
                      else
                        v872 = 0.55;
                    }
                  }
                }
              }
              else
              {
                v293 = sub_4A2200(&v868, &v649);
                v80 = sub_4A21B0(&v846, &v650);
                if ( sub_4A1FB0(v80, v293) )
                {
                  v293 = (unsigned __int8 *)dword_7913C8;
                  v81 = sub_4A21B0(&v846, &v648);
                  if ( sub_4A1FB0(v81, v293) )
                  {
                    v872 = 0.95;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_7913E0;
                    v82 = sub_4A21B0(&v846, &v647);
                    if ( sub_4A1FB0(v82, v293) )
                    {
                      v872 = 0.8;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913BC;
                      v83 = sub_4A21B0(&v846, &v646);
                      if ( sub_4A1FB0(v83, v293) )
                      {
                        v872 = 0.65;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791400;
                        v84 = sub_4A21B0(&v846, &v645);
                        if ( sub_4A1FB0(v84, v293) )
                          v872 = 0.5;
                        else
                          v872 = 0.35;
                      }
                    }
                  }
                }
                else
                {
                  v872 = 0.35;
                }
              }
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913C8;
              v85 = sub_4A21B0(&v846, &v644);
              if ( sub_4A1FB0(v85, v293) )
              {
                v872 = 0.95;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_7913E0;
                v86 = sub_4A21B0(&v846, &v643);
                if ( sub_4A1FB0(v86, v293) )
                {
                  v872 = 0.9;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913BC;
                  v87 = sub_4A21B0(&v846, &v642);
                  if ( sub_4A1FB0(v87, v293) )
                  {
                    v872 = 0.85;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_791400;
                    v88 = sub_4A21B0(&v846, &v641);
                    if ( sub_4A1FB0(v88, v293) )
                      v872 = 0.8;
                    else
                      v872 = 0.75;
                  }
                }
              }
            }
          }
        }
        else if ( a1 )
        {
          v293 = sub_4A21B0(&v868, &v635);
          v93 = sub_4A21B0(&v846, &v636);
          if ( sub_4A2010(v93, v293) )
          {
            v293 = (unsigned __int8 *)dword_7913C8;
            v94 = sub_4A21B0(&v846, &v634);
            if ( sub_4A1FB0(v94, v293) )
            {
              v872 = 0.95;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913E0;
              v95 = sub_4A21B0(&v846, &v633);
              if ( sub_4A1FB0(v95, v293) )
              {
                v872 = 0.8;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_7913BC;
                v96 = sub_4A21B0(&v846, &v632);
                if ( sub_4A1FB0(v96, v293) )
                {
                  v872 = 0.7;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_791400;
                  v97 = sub_4A21B0(&v846, &v631);
                  if ( sub_4A1FB0(v97, v293) )
                    v872 = 0.6;
                  else
                    v872 = 0.35;
                }
              }
            }
          }
          else
          {
            v872 = 0.2;
          }
        }
        else
        {
          v293 = (unsigned __int8 *)dword_7913C8;
          v89 = sub_4A21B0(&v846, &v640);
          if ( sub_4A1FB0(v89, v293) )
          {
            v872 = 0.95;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913E0;
            v90 = sub_4A21B0(&v846, &v639);
            if ( sub_4A1FB0(v90, v293) )
            {
              v872 = 0.85;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913BC;
              v91 = sub_4A21B0(&v846, &v638);
              if ( sub_4A1FB0(v91, v293) )
              {
                v872 = 0.75;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_791400;
                v92 = sub_4A21B0(&v846, &v637);
                if ( sub_4A1FB0(v92, v293) )
                  v872 = 0.5;
                else
                  v872 = 0.2;
              }
            }
          }
        }
      }
      else
      {
        v293 = (unsigned __int8 *)dword_791418;
        v98 = sub_4A2160(&v846, &v630);
        if ( sub_4A1E10(v98, v293) )
        {
          v852 = 3;
          v293 = (unsigned __int8 *)dword_791418;
          v99 = sub_4A2160(&v868, &v629);
          if ( sub_4A1E10(v99, v293) )
          {
            v293 = (unsigned __int8 *)dword_7913C8;
            v100 = sub_4A2200(&v846, &v628);
            if ( sub_4A1FB0(v100, v293) )
            {
              v872 = 0.95;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913E0;
              v101 = sub_4A2200(&v846, &v627);
              if ( sub_4A1FB0(v101, v293) )
                v872 = 0.7;
              else
                v872 = 0.6;
            }
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913B0;
            v102 = sub_4A2160(&v868, &v626);
            if ( sub_4A1E10(v102, v293) )
            {
              v293 = sub_4A2200(&v868, &v624);
              v103 = sub_4A2200(&v846, &v625);
              if ( sub_4A2010(v103, v293) )
              {
                v293 = (unsigned __int8 *)dword_7913C8;
                v104 = sub_4A2200(&v846, &v623);
                if ( sub_4A1FB0(v104, v293) )
                {
                  v872 = 0.95;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913E0;
                  v105 = sub_4A2200(&v846, &v622);
                  if ( sub_4A1FB0(v105, v293) )
                    v872 = 0.75;
                  else
                    v872 = 0.65;
                }
              }
              else
              {
                v293 = sub_4A2250(&v868, &v620);
                v106 = sub_4A2250(&v846, &v621);
                if ( sub_4A2010(v106, v293) )
                  v872 = 0.5;
                else
                  v872 = 0.35;
              }
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913C8;
              v107 = sub_4A21B0(&v846, &v619);
              if ( sub_4A1FB0(v107, v293) )
              {
                v872 = 0.9615384615384616;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_7913E0;
                v108 = sub_4A21B0(&v846, &v618);
                if ( sub_4A1FB0(v108, v293) )
                {
                  v872 = 0.8846153846153846;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913BC;
                  v109 = sub_4A21B0(&v846, &v617);
                  if ( sub_4A1FB0(v109, v293) )
                  {
                    v872 = 0.8076923076923077;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_791400;
                    v110 = sub_4A21B0(&v846, &v616);
                    if ( sub_4A1FB0(v110, v293) )
                    {
                      v872 = 0.7307692307692307;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_79138C;
                      v111 = sub_4A21B0(&v846, &v615);
                      if ( sub_4A1FB0(v111, v293) )
                      {
                        v872 = 0.6538461538461539;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913F4;
                        v112 = sub_4A21B0(&v846, &v614);
                        if ( sub_4A1FB0(v112, v293) )
                        {
                          v872 = 0.5769230769230769;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791410;
                          v113 = sub_4A21B0(&v846, &v613);
                          if ( sub_4A1FB0(v113, v293) )
                          {
                            v872 = 0.5;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_7913F8;
                            v114 = sub_4A21B0(&v846, &v612);
                            if ( sub_4A1FB0(v114, v293) )
                            {
                              v872 = 0.4230769230769231;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_791404;
                              v115 = sub_4A21B0(&v846, &v611);
                              if ( sub_4A1FB0(v115, v293) )
                              {
                                v872 = 0.3461538461538461;
                              }
                              else
                              {
                                v293 = (unsigned __int8 *)dword_7913A4;
                                v116 = sub_4A21B0(&v846, &v610);
                                if ( sub_4A1FB0(v116, v293) )
                                {
                                  v872 = 0.2692307692307692;
                                }
                                else
                                {
                                  v293 = (unsigned __int8 *)dword_791414;
                                  v117 = sub_4A21B0(&v846, &v609);
                                  if ( sub_4A1FB0(v117, v293) )
                                  {
                                    v872 = 0.1923076923076923;
                                  }
                                  else
                                  {
                                    v293 = (unsigned __int8 *)dword_7913D8;
                                    v118 = sub_4A21B0(&v846, &v608);
                                    if ( sub_4A1FB0(v118, v293) )
                                      v872 = 0.1153846153846154;
                                    else
                                      v872 = 0.03846153846153846;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v293 = (unsigned __int8 *)dword_79140C;
          v119 = sub_4A2160(&v846, &v607);
          if ( sub_4A1E10(v119, v293) )
          {
            v852 = 4;
            v293 = (unsigned __int8 *)dword_7913C8;
            v120 = sub_4A21B0(&v846, &v606);
            if ( sub_4A1FB0(v120, v293) )
            {
              v872 = 0.95;
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913E0;
              v121 = sub_4A21B0(&v846, &v605);
              if ( sub_4A1FB0(v121, v293) )
              {
                v872 = 0.85;
              }
              else
              {
                v293 = (unsigned __int8 *)dword_7913BC;
                v122 = sub_4A21B0(&v846, &v604);
                if ( sub_4A1FB0(v122, v293) )
                {
                  v872 = 0.75;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_791400;
                  v123 = sub_4A21B0(&v846, &v603);
                  if ( sub_4A1FB0(v123, v293) )
                  {
                    v872 = 0.65;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_79138C;
                    v124 = sub_4A21B0(&v846, &v602);
                    if ( sub_4A1FB0(v124, v293) )
                    {
                      v872 = 0.55;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913F4;
                      v125 = sub_4A21B0(&v846, &v601);
                      if ( sub_4A1FB0(v125, v293) )
                      {
                        v872 = 0.45;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791410;
                        v126 = sub_4A21B0(&v846, &v600);
                        if ( sub_4A1FB0(v126, v293) )
                        {
                          v872 = 0.35;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_7913F8;
                          v127 = sub_4A21B0(&v846, &v599);
                          if ( sub_4A1FB0(v127, v293) )
                          {
                            v872 = 0.25;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_791404;
                            v128 = sub_4A21B0(&v846, &v598);
                            if ( sub_4A1FB0(v128, v293) )
                              v872 = 0.15;
                            else
                              v872 = 0.05;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            switch ( a1 )
            {
              case 1:
                v872 = (1.0 - (double)v875 / 249900.0) * v872;
                break;
              case 2:
                if ( v875 <= v850 )
                  v129 = (1.0 - (double)v850 / 249900.0) * v872;
                else
                  v129 = (1.0 - (double)v875 / 249900.0) * v872;
                v872 = v129;
                break;
              case 3:
                if ( (double)v850 / 249900.0 >= (double)v875 / 230300.0 )
                  v130 = (1.0 - (double)v850 / 249900.0) * v872;
                else
                  v130 = (1.0 - (double)v875 / 230300.0) * v872;
                v872 = v130;
                break;
              case 4:
                if ( v875 <= v850 )
                  v131 = (1.0 - (double)v850 / 230300.0) * v872;
                else
                  v131 = (1.0 - (double)v875 / 230300.0) * v872;
                v872 = v131;
                break;
              case 5:
                if ( v875 <= v850 )
                  v132 = (1.0 - (double)v850 / 211876.0) * v872;
                else
                  v132 = (1.0 - (double)v875 / 211876.0) * v872;
                v872 = v132;
                break;
            }
          }
          else
          {
            v293 = (unsigned __int8 *)dword_7913A0;
            v133 = sub_4A2160(&v846, &v597);
            if ( sub_4A1E10(v133, v293) )
            {
              v852 = 5;
              if ( v884 == 3 )
              {
                if ( v851 > v855 )
                  goto LABEL_333;
                v293 = sub_4A21B0(&v843, &v595);
                v134 = sub_4A21B0(&v880, &v596);
                if ( sub_4A2010(v134, v293) )
                  goto LABEL_333;
                v293 = sub_4A21B0(&v843, &v593);
                v135 = sub_4A21B0(&v880, &v594);
                if ( sub_4A1FB0(v135, v293) )
                {
                  v293 = sub_4A2200(&v843, &v591);
                  v136 = sub_4A2200(&v880, &v592);
                  if ( sub_4A2010(v136, v293) )
                    goto LABEL_333;
                }
                v293 = sub_4A21B0(&v843, &v589);
                v137 = sub_4A21B0(&v880, &v590);
                if ( sub_4A1FB0(v137, v293)
                  && (v293 = sub_4A2200(&v843, &v587), v138 = sub_4A2200(&v880, &v588), sub_4A1FB0(v138, v293))
                  && (v293 = sub_4A2250(&v843, &v585), v139 = sub_4A2250(&v880, &v586), sub_4A2010(v139, v293)) )
                {
LABEL_333:
                  v293 = sub_4A21B0(&v880, &v583);
                  v140 = sub_4A21B0(&v871, &v584);
                  if ( sub_4A2010(v140, v293) )
                  {
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v141 = sub_4A21B0(&v871, &v582);
                    if ( sub_4A1FB0(v141, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v142 = sub_4A21B0(&v871, &v581);
                      if ( sub_4A1FB0(v142, v293) )
                      {
                        v872 = 0.7;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v143 = sub_4A21B0(&v871, &v580);
                        if ( sub_4A1FB0(v143, v293) )
                          v872 = 0.4;
                        else
                          v872 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v293 = sub_4A2200(&v880, &v578);
                    v144 = sub_4A2200(&v871, &v579);
                    if ( sub_4A2010(v144, v293) )
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v145 = sub_4A21B0(&v871, &v577);
                      if ( sub_4A1FB0(v145, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v146 = sub_4A21B0(&v871, &v576);
                        if ( sub_4A1FB0(v146, v293) )
                        {
                          v872 = 0.7;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v147 = sub_4A21B0(&v871, &v575);
                          if ( sub_4A1FB0(v147, v293) )
                            v872 = 0.4;
                          else
                            v872 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v293 = sub_4A2250(&v880, &v573);
                      v148 = sub_4A2250(&v871, &v574);
                      if ( sub_4A2010(v148, v293) )
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v149 = sub_4A21B0(&v871, &v572);
                        if ( sub_4A1FB0(v149, v293) )
                        {
                          v872 = 1.0;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v150 = sub_4A21B0(&v871, &v571);
                          if ( sub_4A1FB0(v150, v293) )
                          {
                            v872 = 0.7;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_79138C;
                            v151 = sub_4A21B0(&v871, &v570);
                            if ( sub_4A1FB0(v151, v293) )
                              v872 = 0.4;
                            else
                              v872 = 0.2;
                          }
                        }
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791400;
                        v152 = sub_4A21B0(&v871, &v569);
                        if ( sub_4A1FB0(v152, v293) )
                        {
                          v872 = 1.0;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_79138C;
                          v153 = sub_4A21B0(&v871, &v568);
                          if ( sub_4A1FB0(v153, v293) )
                          {
                            v872 = 0.7;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_7913F4;
                            v154 = sub_4A21B0(&v871, &v567);
                            if ( sub_4A1FB0(v154, v293) )
                              v872 = 0.4;
                            else
                              v872 = 0.2;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v293 = sub_4A21B0(&v843, &v565);
                  v155 = sub_4A21B0(&v871, &v566);
                  if ( sub_4A2010(v155, v293) )
                  {
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v156 = sub_4A21B0(&v871, &v564);
                    if ( sub_4A1FB0(v156, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v157 = sub_4A21B0(&v871, &v563);
                      if ( sub_4A1FB0(v157, v293) )
                      {
                        v872 = 0.7;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v158 = sub_4A21B0(&v871, &v562);
                        if ( sub_4A1FB0(v158, v293) )
                          v872 = 0.4;
                        else
                          v872 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v293 = sub_4A2200(&v843, &v560);
                    v159 = sub_4A2200(&v871, &v561);
                    if ( sub_4A2010(v159, v293) )
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v160 = sub_4A21B0(&v871, &v559);
                      if ( sub_4A1FB0(v160, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v161 = sub_4A21B0(&v871, &v558);
                        if ( sub_4A1FB0(v161, v293) )
                        {
                          v872 = 0.7;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v162 = sub_4A21B0(&v871, &v557);
                          if ( sub_4A1FB0(v162, v293) )
                            v872 = 0.4;
                          else
                            v872 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v293 = sub_4A2250(&v843, &v555);
                      v163 = sub_4A2250(&v871, &v556);
                      if ( sub_4A2010(v163, v293) )
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v164 = sub_4A21B0(&v871, &v554);
                        if ( sub_4A1FB0(v164, v293) )
                        {
                          v872 = 1.0;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v165 = sub_4A21B0(&v871, &v553);
                          if ( sub_4A1FB0(v165, v293) )
                          {
                            v872 = 0.7;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_79138C;
                            v166 = sub_4A21B0(&v871, &v552);
                            if ( sub_4A1FB0(v166, v293) )
                              v872 = 0.4;
                            else
                              v872 = 0.2;
                          }
                        }
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791400;
                        v167 = sub_4A21B0(&v871, &v551);
                        if ( sub_4A1FB0(v167, v293) )
                        {
                          v872 = 1.0;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_79138C;
                          v168 = sub_4A21B0(&v871, &v550);
                          if ( sub_4A1FB0(v168, v293) )
                          {
                            v872 = 0.7;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_7913F4;
                            v169 = sub_4A21B0(&v871, &v549);
                            if ( sub_4A1FB0(v169, v293) )
                              v872 = 0.4;
                            else
                              v872 = 0.2;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if ( v884 == 2 )
              {
                if ( v851 > v855
                  || (v293 = sub_4A21B0(&v843, &v547), v170 = sub_4A21B0(&v880, &v548), sub_4A2010(v170, v293))
                  || (v293 = sub_4A21B0(&v843, &v545), v171 = sub_4A21B0(&v880, &v546), sub_4A1FB0(v171, v293))
                  && (v293 = sub_4A2200(&v843, &v543), v172 = sub_4A2200(&v880, &v544), sub_4A2010(v172, v293)) )
                {
                  v293 = sub_4A21B0(&v880, &v541);
                  v173 = sub_4A21B0(&v871, &v542);
                  if ( sub_4A2010(v173, v293) )
                  {
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v174 = sub_4A21B0(&v871, &v540);
                    if ( sub_4A1FB0(v174, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v175 = sub_4A21B0(&v871, &v539);
                      if ( sub_4A1FB0(v175, v293) )
                      {
                        v872 = 0.7;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v176 = sub_4A21B0(&v871, &v538);
                        if ( sub_4A1FB0(v176, v293) )
                          v872 = 0.4;
                        else
                          v872 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v293 = sub_4A2200(&v880, &v536);
                    v177 = sub_4A2200(&v871, &v537);
                    if ( sub_4A2010(v177, v293) )
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v178 = sub_4A21B0(&v871, &v535);
                      if ( sub_4A1FB0(v178, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v179 = sub_4A21B0(&v871, &v534);
                        if ( sub_4A1FB0(v179, v293) )
                        {
                          v872 = 0.7;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v180 = sub_4A21B0(&v871, &v533);
                          if ( sub_4A1FB0(v180, v293) )
                            v872 = 0.4;
                          else
                            v872 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913BC;
                      v181 = sub_4A21B0(&v871, &v532);
                      if ( sub_4A1FB0(v181, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791400;
                        v182 = sub_4A21B0(&v871, &v531);
                        if ( sub_4A1FB0(v182, v293) )
                        {
                          v872 = 0.7;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_79138C;
                          v183 = sub_4A21B0(&v871, &v530);
                          if ( sub_4A1FB0(v183, v293) )
                            v872 = 0.4;
                          else
                            v872 = 0.2;
                        }
                      }
                    }
                  }
                }
                else
                {
                  v293 = sub_4A21B0(&v843, &v528);
                  v184 = sub_4A21B0(&v871, &v529);
                  if ( sub_4A2010(v184, v293) )
                  {
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v185 = sub_4A21B0(&v871, &v527);
                    if ( sub_4A1FB0(v185, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v186 = sub_4A21B0(&v871, &v526);
                      if ( sub_4A1FB0(v186, v293) )
                      {
                        v872 = 0.7;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v187 = sub_4A21B0(&v871, &v525);
                        if ( sub_4A1FB0(v187, v293) )
                          v872 = 0.4;
                        else
                          v872 = 0.2;
                      }
                    }
                  }
                  else
                  {
                    v293 = sub_4A2200(&v843, &v523);
                    v188 = sub_4A2200(&v871, &v524);
                    if ( sub_4A2010(v188, v293) )
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v189 = sub_4A21B0(&v871, &v522);
                      if ( sub_4A1FB0(v189, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v190 = sub_4A21B0(&v871, &v521);
                        if ( sub_4A1FB0(v190, v293) )
                        {
                          v872 = 0.7;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v191 = sub_4A21B0(&v871, &v520);
                          if ( sub_4A1FB0(v191, v293) )
                            v872 = 0.4;
                          else
                            v872 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913BC;
                      v192 = sub_4A21B0(&v871, &v519);
                      if ( sub_4A1FB0(v192, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_791400;
                        v193 = sub_4A21B0(&v871, &v518);
                        if ( sub_4A1FB0(v193, v293) )
                        {
                          v872 = 0.7;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_79138C;
                          v194 = sub_4A21B0(&v871, &v517);
                          if ( sub_4A1FB0(v194, v293) )
                            v872 = 0.4;
                          else
                            v872 = 0.2;
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v293 = (unsigned __int8 *)dword_7913C8;
                v195 = sub_4A21B0(&v846, &v516);
                if ( sub_4A1FB0(v195, v293) )
                {
                  v872 = 0.95;
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913E0;
                  v196 = sub_4A21B0(&v846, &v515);
                  if ( sub_4A1FB0(v196, v293) )
                  {
                    v872 = 0.7;
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_7913BC;
                    v197 = sub_4A21B0(&v846, &v514);
                    if ( sub_4A1FB0(v197, v293) )
                      v872 = 0.4;
                    else
                      v872 = 0.1;
                  }
                }
              }
            }
            else
            {
              v293 = (unsigned __int8 *)dword_7913D4;
              v198 = sub_4A2160(&v846, &v513);
              if ( sub_4A1E10(v198, v293) )
              {
                v852 = 6;
                v293 = (unsigned __int8 *)dword_791418;
                v199 = sub_4A2160(&v868, &v512);
                if ( sub_4A1E10(v199, v293) )
                {
                  v293 = sub_4A21B0(&v868, &v510);
                  v200 = sub_4A21B0(&v846, &v511);
                  if ( sub_4A2010(v200, v293) )
                  {
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v201 = sub_4A21B0(&v846, &v509);
                    if ( sub_4A1FB0(v201, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v202 = sub_4A21B0(&v846, &v508);
                      if ( sub_4A1FB0(v202, v293) )
                        v872 = 0.95;
                      else
                        v872 = 0.9;
                    }
                  }
                  else
                  {
                    v293 = sub_4A2200(&v868, &v506);
                    v203 = sub_4A2200(&v846, &v507);
                    if ( sub_4A2010(v203, v293) )
                    {
                      v293 = (unsigned __int8 *)dword_7913C8;
                      v204 = sub_4A2200(&v846, &v505);
                      if ( sub_4A1FB0(v204, v293) )
                      {
                        v872 = 0.8;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913E0;
                        v205 = sub_4A2200(&v846, &v504);
                        if ( sub_4A1FB0(v205, v293) )
                          v872 = 0.7;
                        else
                          v872 = 0.5;
                      }
                    }
                    else
                    {
                      v872 = 0.2;
                    }
                  }
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_7913B0;
                  v206 = sub_4A2160(&v868, &v503);
                  if ( sub_4A1E10(v206, v293) )
                  {
                    v293 = sub_4A21B0(&v868, &v501);
                    v207 = sub_4A21B0(&v846, &v502);
                    if ( sub_4A2010(v207, v293) )
                    {
                      v293 = sub_4A2200(&v868, &v499);
                      v208 = sub_4A21B0(&v846, &v500);
                      if ( sub_4A2010(v208, v293) )
                      {
                        v293 = (unsigned __int8 *)dword_7913C8;
                        v209 = sub_4A21B0(&v846, &v498);
                        if ( sub_4A1FB0(v209, v293) )
                        {
                          v872 = 1.0;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_7913E0;
                          v210 = sub_4A21B0(&v846, &v497);
                          if ( sub_4A1FB0(v210, v293) )
                          {
                            v872 = 0.95;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_7913BC;
                            v211 = sub_4A21B0(&v846, &v496);
                            if ( sub_4A1FB0(v211, v293) )
                              v872 = 0.9;
                            else
                              v872 = 0.85;
                          }
                        }
                      }
                      else
                      {
                        v293 = sub_4A2200(&v868, &v494);
                        v212 = sub_4A21B0(&v846, &v495);
                        if ( sub_4A1FB0(v212, v293) )
                          v872 = 0.8;
                        else
                          v872 = 0.75;
                      }
                    }
                    else
                    {
                      v293 = sub_4A21B0(&v868, &v492);
                      v213 = sub_4A21B0(&v846, &v493);
                      if ( sub_4A1FB0(v213, v293) )
                      {
                        v293 = sub_4A2200(&v868, &v490);
                        v214 = sub_4A2200(&v846, &v491);
                        if ( sub_4A2010(v214, v293) )
                        {
                          v872 = 0.65;
                        }
                        else
                        {
                          v293 = sub_4A2200(&v868, &v488);
                          v215 = sub_4A2200(&v846, &v489);
                          if ( sub_4A1FB0(v215, v293) )
                            v872 = 0.5;
                          else
                            v872 = 0.35;
                        }
                      }
                      else
                      {
                        v872 = 0.25;
                      }
                    }
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v216 = sub_4A21B0(&v846, &v487);
                    if ( sub_4A1FB0(v216, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v217 = sub_4A21B0(&v846, &v486);
                      if ( sub_4A1FB0(v217, v293) )
                      {
                        v872 = 0.9166666666666666;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v218 = sub_4A21B0(&v846, &v485);
                        if ( sub_4A1FB0(v218, v293) )
                        {
                          v872 = 0.8333333333333334;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v219 = sub_4A21B0(&v846, &v484);
                          if ( sub_4A1FB0(v219, v293) )
                          {
                            v872 = 0.75;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_79138C;
                            v220 = sub_4A21B0(&v846, &v483);
                            if ( sub_4A1FB0(v220, v293) )
                            {
                              v872 = 0.6666666666666666;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_7913F4;
                              v221 = sub_4A21B0(&v846, &v482);
                              if ( sub_4A1FB0(v221, v293) )
                              {
                                v872 = 0.5833333333333334;
                              }
                              else
                              {
                                v293 = (unsigned __int8 *)dword_791410;
                                v222 = sub_4A21B0(&v846, &v481);
                                if ( sub_4A1FB0(v222, v293) )
                                {
                                  v872 = 0.5;
                                }
                                else
                                {
                                  v293 = (unsigned __int8 *)dword_7913F8;
                                  v223 = sub_4A21B0(&v846, &v480);
                                  if ( sub_4A1FB0(v223, v293) )
                                  {
                                    v872 = 0.4166666666666667;
                                  }
                                  else
                                  {
                                    v293 = (unsigned __int8 *)dword_791404;
                                    v224 = sub_4A21B0(&v846, &v479);
                                    if ( sub_4A1FB0(v224, v293) )
                                    {
                                      v872 = 0.3333333333333333;
                                    }
                                    else
                                    {
                                      v293 = (unsigned __int8 *)dword_7913A4;
                                      v225 = sub_4A21B0(&v846, &v478);
                                      if ( sub_4A1FB0(v225, v293) )
                                      {
                                        v872 = 0.25;
                                      }
                                      else
                                      {
                                        v293 = (unsigned __int8 *)dword_791414;
                                        v226 = sub_4A21B0(&v846, &v477);
                                        if ( sub_4A1FB0(v226, v293) )
                                        {
                                          v872 = 0.1666666666666667;
                                        }
                                        else
                                        {
                                          v293 = (unsigned __int8 *)dword_7913D8;
                                          v227 = sub_4A21B0(&v846, &v476);
                                          if ( sub_4A1FB0(v227, v293) )
                                            v872 = 0.08333333333333333;
                                          else
                                            v872 = 0.0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v293 = (unsigned __int8 *)dword_791394;
                v228 = sub_4A2160(&v846, &v475);
                if ( sub_4A1E10(v228, v293) )
                {
                  v852 = 7;
                  v293 = (unsigned __int8 *)dword_791418;
                  v229 = sub_4A2160(&v868, &v474);
                  if ( sub_4A1E10(v229, v293) )
                  {
                    v293 = sub_4A21B0(&v868, &v472);
                    v230 = sub_4A21B0(&v846, &v473);
                    if ( sub_4A2010(v230, v293) )
                    {
                      v872 = 1.0;
                    }
                    else
                    {
                      v293 = sub_4A21B0(&v868, &v470);
                      v231 = sub_4A21B0(&v846, &v471);
                      if ( sub_4A1FB0(v231, v293) )
                        v872 = 0.99;
                      else
                        v872 = 0.05;
                    }
                  }
                  else
                  {
                    v293 = (unsigned __int8 *)dword_7913B0;
                    v232 = sub_4A2160(&v868, &v469);
                    if ( sub_4A1E10(v232, v293) )
                    {
                      v293 = sub_4A21B0(&v868, &v467);
                      v233 = sub_4A21B0(&v846, &v468);
                      if ( sub_4A2010(v233, v293) )
                      {
                        v293 = (unsigned __int8 *)dword_7913C8;
                        v234 = sub_4A21B0(&v846, &v466);
                        if ( sub_4A1FB0(v234, v293) )
                        {
                          v872 = 1.0;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_7913E0;
                          v235 = sub_4A21B0(&v846, &v465);
                          if ( sub_4A1FB0(v235, v293) )
                          {
                            v872 = 0.95;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_7913BC;
                            v236 = sub_4A21B0(&v846, &v464);
                            if ( sub_4A1FB0(v236, v293) )
                            {
                              v872 = 0.9;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_791400;
                              v237 = sub_4A21B0(&v846, &v463);
                              if ( sub_4A1FB0(v237, v293) )
                                v872 = 0.85;
                              else
                                v872 = 0.8;
                            }
                          }
                        }
                      }
                      else
                      {
                        v293 = sub_4A21B0(&v868, &v461);
                        v238 = sub_4A21B0(&v846, &v462);
                        if ( sub_4A1FB0(v238, v293) )
                        {
                          v293 = (unsigned __int8 *)dword_7913C8;
                          v239 = sub_4A21B0(&v846, &v460);
                          if ( sub_4A1FB0(v239, v293) )
                          {
                            v872 = 1.0;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_7913E0;
                            v240 = sub_4A21B0(&v846, &v459);
                            if ( sub_4A1FB0(v240, v293) )
                            {
                              v872 = 0.9;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_7913BC;
                              v241 = sub_4A21B0(&v846, &v458);
                              if ( sub_4A1FB0(v241, v293) )
                                v872 = 0.8;
                              else
                                v872 = 0.7;
                            }
                          }
                        }
                        else
                        {
                          v872 = 0.2;
                        }
                      }
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913C8;
                      v242 = sub_4A21B0(&v846, &v457);
                      if ( sub_4A1FB0(v242, v293) )
                      {
                        v872 = 1.0;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913E0;
                        v243 = sub_4A21B0(&v846, &v456);
                        if ( sub_4A1FB0(v243, v293) )
                        {
                          v872 = 0.9166666666666666;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_7913BC;
                          v244 = sub_4A21B0(&v846, &v455);
                          if ( sub_4A1FB0(v244, v293) )
                          {
                            v872 = 0.8333333333333334;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_791400;
                            v245 = sub_4A21B0(&v846, &v454);
                            if ( sub_4A1FB0(v245, v293) )
                            {
                              v872 = 0.75;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_79138C;
                              v246 = sub_4A21B0(&v846, &v453);
                              if ( sub_4A1FB0(v246, v293) )
                              {
                                v872 = 0.6666666666666666;
                              }
                              else
                              {
                                v293 = (unsigned __int8 *)dword_7913F4;
                                v247 = sub_4A21B0(&v846, &v452);
                                if ( sub_4A1FB0(v247, v293) )
                                {
                                  v872 = 0.5833333333333334;
                                }
                                else
                                {
                                  v293 = (unsigned __int8 *)dword_791410;
                                  v248 = sub_4A21B0(&v846, &v451);
                                  if ( sub_4A1FB0(v248, v293) )
                                  {
                                    v872 = 0.5;
                                  }
                                  else
                                  {
                                    v293 = (unsigned __int8 *)dword_7913F8;
                                    v249 = sub_4A21B0(&v846, &v450);
                                    if ( sub_4A1FB0(v249, v293) )
                                    {
                                      v872 = 0.4166666666666667;
                                    }
                                    else
                                    {
                                      v293 = (unsigned __int8 *)dword_791404;
                                      v250 = sub_4A21B0(&v846, &v449);
                                      if ( sub_4A1FB0(v250, v293) )
                                      {
                                        v872 = 0.3333333333333333;
                                      }
                                      else
                                      {
                                        v293 = (unsigned __int8 *)dword_7913A4;
                                        v251 = sub_4A21B0(&v846, &v448);
                                        if ( sub_4A1FB0(v251, v293) )
                                        {
                                          v872 = 0.25;
                                        }
                                        else
                                        {
                                          v293 = (unsigned __int8 *)dword_791414;
                                          v252 = sub_4A21B0(&v846, &v447);
                                          if ( sub_4A1FB0(v252, v293) )
                                          {
                                            v872 = 0.1666666666666667;
                                          }
                                          else
                                          {
                                            v293 = (unsigned __int8 *)dword_7913D8;
                                            v253 = sub_4A21B0(&v846, &v446);
                                            if ( sub_4A1FB0(v253, v293) )
                                              v872 = 0.08333333333333333;
                                            else
                                              v872 = 0.0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v293 = (unsigned __int8 *)dword_791398;
                  v254 = sub_4A2160(&v846, &v445);
                  if ( sub_4A1E10(v254, v293) )
                  {
                    v852 = 8;
                    v293 = (unsigned __int8 *)dword_7913C8;
                    v255 = sub_4A21B0(&v846, &v444);
                    if ( sub_4A1FB0(v255, v293) )
                    {
                      v872 = 0.95;
                    }
                    else
                    {
                      v293 = (unsigned __int8 *)dword_7913E0;
                      v256 = sub_4A21B0(&v846, &v443);
                      if ( sub_4A1FB0(v256, v293) )
                      {
                        v872 = 0.85;
                      }
                      else
                      {
                        v293 = (unsigned __int8 *)dword_7913BC;
                        v257 = sub_4A21B0(&v846, &v442);
                        if ( sub_4A1FB0(v257, v293) )
                        {
                          v872 = 0.75;
                        }
                        else
                        {
                          v293 = (unsigned __int8 *)dword_791400;
                          v258 = sub_4A21B0(&v846, &v441);
                          if ( sub_4A1FB0(v258, v293) )
                          {
                            v872 = 0.65;
                          }
                          else
                          {
                            v293 = (unsigned __int8 *)dword_79138C;
                            v259 = sub_4A21B0(&v846, &v440);
                            if ( sub_4A1FB0(v259, v293) )
                            {
                              v872 = 0.55;
                            }
                            else
                            {
                              v293 = (unsigned __int8 *)dword_7913F4;
                              v260 = sub_4A21B0(&v846, &v439);
                              if ( sub_4A1FB0(v260, v293) )
                              {
                                v872 = 0.45;
                              }
                              else
                              {
                                v293 = (unsigned __int8 *)dword_791410;
                                v261 = sub_4A21B0(&v846, &v438);
                                if ( sub_4A1FB0(v261, v293) )
                                {
                                  v872 = 0.35;
                                }
                                else
                                {
                                  v293 = (unsigned __int8 *)dword_7913F8;
                                  v262 = sub_4A21B0(&v846, &v437);
                                  if ( sub_4A1FB0(v262, v293) )
                                  {
                                    v872 = 0.25;
                                  }
                                  else
                                  {
                                    v293 = (unsigned __int8 *)dword_791404;
                                    v263 = sub_4A21B0(&v846, &v436);
                                    if ( sub_4A1FB0(v263, v293) )
                                      v872 = 0.15;
                                    else
                                      v872 = 0.05;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    switch ( a1 )
                    {
                      case 1:
                        v872 = (1.0 - (double)v875 / 249900.0) * v872;
                        break;
                      case 2:
                        if ( v875 <= v850 )
                          v264 = (1.0 - (double)v850 / 249900.0) * v872;
                        else
                          v264 = (1.0 - (double)v875 / 249900.0) * v872;
                        v872 = v264;
                        break;
                      case 3:
                        if ( (double)v850 / 249900.0 >= (double)v875 / 230300.0 )
                          v265 = (1.0 - (double)v850 / 249900.0) * v872;
                        else
                          v265 = (1.0 - (double)v875 / 230300.0) * v872;
                        v872 = v265;
                        break;
                      case 4:
                        if ( v875 <= v850 )
                          v266 = (1.0 - (double)v850 / 230300.0) * v872;
                        else
                          v266 = (1.0 - (double)v875 / 230300.0) * v872;
                        v872 = v266;
                        break;
                      case 5:
                        if ( v875 <= v850 )
                          v267 = (1.0 - (double)v850 / 211876.0) * v872;
                        else
                          v267 = (1.0 - (double)v875 / 211876.0) * v872;
                        v872 = v267;
                        break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v872 <= -0.01 )
    sub_5E9F20((char)"dblWithinCategory > -0.01", "..\\Casino\\PokerHoldemAI.cpp", 5697);
  if ( v872 >= 1.01 )
    sub_5E9F20((char)"dblWithinCategory < 1.01", "..\\Casino\\PokerHoldemAI.cpp", 5698);
  if ( a1 <= 1 || a1 == 3 )
  {
    v889 = v876;
    v838 = 0;
    for ( i = 0; i < 9; ++i )
      v838 += dword_71EC38[9 * v889 - 9 + i];
    v837 = 0;
    for ( i = 0; i < v852; ++i )
      v837 += dword_71EC38[9 * v889 - 9 + i];
    v837 += (int)((double)dword_71EC38[9 * v889 - 9 + v852] * v872);
    dbl_7916E8[v862] = (double)v837 / (double)v838;
  }
  else
  {
    v889 = v867;
    v835 = 0;
    for ( i = 0; i < 9; ++i )
      v835 += dword_71EC38[9 * v889 - 9 + i];
    v833 = 0;
    for ( i = 0; i < v852; ++i )
      v833 += dword_71EC38[9 * v889 - 9 + i];
    v833 += (int)((double)dword_71EC38[9 * v889 - 9 + v852] * v872);
    v834 = (double)v833 / (double)v835;
    v889 = v876;
    v835 = 0;
    for ( i = 0; i < 9; ++i )
      v835 += dword_71EC38[9 * v889 - 9 + i];
    v833 = 0;
    for ( i = 0; i < v852; ++i )
      v833 += dword_71EC38[9 * v889 - 9 + i];
    v833 += (int)((double)dword_71EC38[9 * v889 - 9 + v852] * v872);
    v836 = (double)v833 / (double)v835;
    if ( v834 >= v836 )
    {
      dbl_7916E8[v862] = v836;
      v889 = v876;
    }
    else
    {
      dbl_7916E8[v862] = v834;
      v889 = v867;
    }
  }
  dbl_791958[v862] = 0.0;
  dbl_7918F8[v862] = 0.0;
  dbl_7917A8[v862] = 0.0;
  v873 = 1;
  v847 = 0;
  v885 = 0;
  v848 = 1;
  v865 = 0;
  v859 = 0;
  v844 = 1;
  v877 = 0;
  v888 = 0;
  v869 = 1;
  v853 = 0;
  v886 = 0;
  if ( a1 == 1 )
  {
    v293 = (unsigned __int8 *)&v831;
    v292 = (int *)&v830;
    v291 = (int *)&v832;
    v290 = &v885;
    v289 = &v847;
    v288 = &v873;
    v435 = &v286;
    v392 = sub_484320((__int16 *)&v286, (int)v879);
    v391 = v392;
    LOBYTE(v893) = 30;
    v434 = &v284;
    v390 = sub_484320((__int16 *)&v284, (int)v849);
    LOBYTE(v893) = 29;
    sub_49CD50(v854, v887, v887, v284, v285, v286, v287, v288, v289, v290, v291, v292, v293);
  }
  else if ( a1 > 1 )
  {
    v293 = (unsigned __int8 *)&v888;
    v292 = &v877;
    v291 = &v844;
    v290 = &v885;
    v289 = &v847;
    v288 = &v873;
    v433 = &v286;
    v389 = sub_484320((__int16 *)&v286, (int)v879);
    v388 = v389;
    LOBYTE(v893) = 31;
    v432 = &v284;
    v387 = sub_484320((__int16 *)&v284, (int)v849);
    LOBYTE(v893) = 29;
    sub_49CD50(v854, v887, v857, v284, v285, v286, v287, v288, v289, v290, v291, v292, v293);
    v293 = (unsigned __int8 *)&v859;
    v292 = &v865;
    v291 = &v848;
    v290 = &v886;
    v289 = &v853;
    v288 = &v869;
    v431 = &v286;
    v386 = sub_484320((__int16 *)&v286, (int)v849);
    v385 = v386;
    LOBYTE(v893) = 32;
    v430 = &v284;
    v384 = sub_484320((__int16 *)&v284, (int)v879);
    LOBYTE(v893) = 29;
    sub_49CD50(v854, v857, v887, v284, v285, v286, v287, v288, v289, v290, v291, v292, v293);
  }
  dbl_7918F8[v862] = 0.0;
  dbl_7917A8[v862] = 0.0;
  v860 = ((double)v885 + (double)v847 * 0.5) / ((double)v873 + (double)v847 + (double)v885);
  v870 = ((double)v859 + (double)v865 * 0.5) / ((double)v848 + (double)v865 + (double)v859);
  v842 = ((double)v888 + (double)v877 * 0.5) / ((double)v844 + (double)v877 + (double)v888);
  v861 = ((double)v886 + (double)v853 * 0.5) / ((double)v869 + (double)v853 + (double)v886);
  if ( a1 <= 1 )
  {
    dbl_7918F8[v862] = v860;
  }
  else
  {
    if ( v870 <= v860 )
      dbl_7918F8[v862] = v870;
    else
      dbl_7918F8[v862] = v860;
    if ( v861 <= v842 )
      dbl_7917A8[v862] = v861;
    else
      dbl_7917A8[v862] = v842;
  }
  if ( dbl_7917A8[v862] >= dbl_7918F8[v862] )
    v268 = dbl_7917A8[v862];
  else
    v268 = dbl_7918F8[v862];
  dbl_791958[v862] = v268;
  v878 = 0;
  dbl_791728[v862] = 0.0;
  if ( a1 < 5 )
  {
    sub_49CC90(v881, &v794, &v810, &v806, &v813, &v769, &v807, &v814, &v808, &v783, &v811);
    v771 = v811 + v783 + v808 + v814 + v807 + v769 + v813 + v806 + v810 + v794;
    sub_49CC90(v841, &v812, &v795, &v829, &v825, &v809, &v826, &v828, &v770, &v815, &v827);
    v782 = v827 + v815 + v770 + v828 + v826 + v809 + v825 + v829 + v795 + v812;
    v796 = 0.001986784893990329;
    v797 = 0.008927957435019835;
    v798 = 0.02376597120026407;
    v799 = 0.04841216355609347;
    v800 = 0.08274078862314156;
    v801 = 0.1235830502413731;
    v802 = 0.1637211349351524;
    v803 = 0.1908822448783114;
    v804 = 0.1867326308592177;
    v805 = 0.1692472733774361;
    v784 = 0.005843903063253338;
    v785 = 0.02355548353262888;
    v786 = 0.05551133852815302;
    v787 = 0.09845082272573158;
    v788 = 0.1433229664170514;
    v789 = 0.176970376850662;
    v790 = 0.1856501228542367;
    v791 = 0.160391602738014;
    v792 = 0.1041913954794186;
    v793 = 0.04611198781085052;
    v816 = 0.001986784893990329;
    v817 = 0.001986784893990329 + 0.008927957435019835;
    v818 = v817 + 0.02376597120026407;
    v819 = v818 + 0.04841216355609347;
    v820 = v819 + 0.08274078862314156;
    v821 = v820 + 0.1235830502413731;
    v822 = v821 + 0.1637211349351524;
    v823 = v822 + 0.1908822448783114;
    v824 = v823 + 0.1867326308592177;
    v772 = 0.005843903063253338;
    v773 = 0.005843903063253338 + 0.02355548353262888;
    v774 = v773 + 0.05551133852815302;
    v775 = v774 + 0.09845082272573158;
    v776 = v775 + 0.1433229664170514;
    v777 = v776 + 0.176970376850662;
    v778 = v777 + 0.1856501228542367;
    v779 = v778 + 0.160391602738014;
    v780 = v779 + 0.1041913954794186;
    v781 = 0.0;
    if ( a1 )
    {
      switch ( a1 )
      {
        case 1:
          v373 = v812;
          v372 = v782;
          v371 = v795;
          v370 = v782;
          v369 = v829;
          v368 = v782;
          v367 = v825;
          v366 = v782;
          v365 = v809;
          v364 = v782;
          v363 = v794;
          v362 = v771;
          v361 = v810;
          v360 = v771;
          v359 = v806;
          v358 = v771;
          v357 = v813;
          v356 = v771;
          v355 = v769;
          v354 = v771;
          v781 = ((double)v812 * 1.0 / (double)v782
                + (1.0 - v772) * (double)v795 / (double)v782
                + (1.0 - v773) * (double)v829 / (double)v782
                + (1.0 - v774) * (double)v825 / (double)v782
                + (1.0 - v775) * (double)v809 / (double)v782)
               * 0.35
               + ((double)v794 * 1.0 / (double)v771
                + (1.0 - v816) * (double)v810 / (double)v771
                + (1.0 - v817) * (double)v806 / (double)v771
                + (1.0 - v818) * (double)v813 / (double)v771
                + (1.0 - v819) * (double)v769 / (double)v771)
               * 0.65;
          v293 = (unsigned __int8 *)dword_791390;
          v269 = sub_4A2160(&v887, &v429);
          if ( sub_4A1E10(v269, v293) )
          {
            v293 = (unsigned __int8 *)dword_7913F4;
            v270 = sub_4A21B0(&v887, &v428);
            if ( sub_4A20A0(v270, v293) )
            {
              v781 = 0.0;
              v878 = 1;
            }
          }
          break;
        case 2:
          v353 = v812;
          v352 = v782;
          v351 = v795;
          v350 = v782;
          v349 = v829;
          v348 = v782;
          v347 = v825;
          v346 = v782;
          v345 = v809;
          v344 = v782;
          v343 = v794;
          v342 = v771;
          v341 = v810;
          v340 = v771;
          v339 = v806;
          v338 = v771;
          v337 = v813;
          v336 = v771;
          v335 = v769;
          v334 = v771;
          v781 = ((double)v812 * 1.0 / (double)v782
                + (1.0 - v772) * (double)v795 / (double)v782
                + (1.0 - v773) * (double)v829 / (double)v782
                + (1.0 - v774) * (double)v825 / (double)v782
                + (1.0 - v775) * (double)v809 / (double)v782)
               * 0.65
               + ((double)v794 * 1.0 / (double)v771
                + (1.0 - v772) * (double)v810 / (double)v771
                + (1.0 - v773) * (double)v806 / (double)v771
                + (1.0 - v774) * (double)v813 / (double)v771
                + (1.0 - v775) * (double)v769 / (double)v771)
               * 0.35;
          v293 = (unsigned __int8 *)dword_791390;
          v271 = sub_4A2160(&v857, &v427);
          if ( sub_4A1E10(v271, v293)
            && (v293 = (unsigned __int8 *)dword_7913F4, v272 = sub_4A21B0(&v857, &v426), sub_4A20A0(v272, v293)) )
          {
            v781 = 0.0;
            v878 = 1;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_791390;
            v273 = sub_4A2160(&v887, &v425);
            if ( sub_4A1E10(v273, v293) )
            {
              v293 = (unsigned __int8 *)dword_7913F4;
              v274 = sub_4A21B0(&v887, &v424);
              if ( sub_4A20A0(v274, v293) )
              {
                v781 = 0.0;
                v878 = 1;
              }
            }
          }
          break;
        case 3:
          v333 = v812;
          v332 = v782;
          v331 = v795;
          v330 = v782;
          v329 = v829;
          v328 = v782;
          v327 = v825;
          v326 = v782;
          v325 = v809;
          v324 = v782;
          v323 = v794;
          v322 = v771;
          v321 = v810;
          v320 = v771;
          v319 = v806;
          v318 = v771;
          v317 = v813;
          v316 = v771;
          v315 = v769;
          v314 = v771;
          v781 = ((double)v812 * 1.0 / (double)v782
                + (1.0 - v772) * (double)v795 / (double)v782
                + (1.0 - v773) * (double)v829 / (double)v782
                + (1.0 - v774) * (double)v825 / (double)v782
                + (1.0 - v775) * (double)v809 / (double)v782)
               * 0.35
               + ((double)v794 * 1.0 / (double)v771
                + (1.0 - v772) * (double)v810 / (double)v771
                + (1.0 - v773) * (double)v806 / (double)v771
                + (1.0 - v774) * (double)v813 / (double)v771
                + (1.0 - v775) * (double)v769 / (double)v771)
               * 0.65;
          v293 = (unsigned __int8 *)dword_791390;
          v275 = sub_4A2160(&v857, &v423);
          if ( sub_4A1E10(v275, v293)
            && (v293 = (unsigned __int8 *)dword_7913F4, v276 = sub_4A21B0(&v857, &v422), sub_4A20A0(v276, v293)) )
          {
            v781 = 0.0;
            v878 = 1;
          }
          else
          {
            v293 = (unsigned __int8 *)dword_791390;
            v277 = sub_4A2160(&v887, &v421);
            if ( sub_4A1E10(v277, v293) )
            {
              v293 = (unsigned __int8 *)dword_7913F4;
              v278 = sub_4A21B0(&v887, &v420);
              if ( sub_4A20A0(v278, v293) )
              {
                v781 = 0.0;
                v878 = 1;
              }
            }
          }
          break;
        default:
          if ( a1 != 4 )
            sub_5E9F20((char)"cardsInWidow == 4", "..\\Casino\\PokerHoldemAI.cpp", 6105);
          v313 = v812;
          v312 = v782;
          v311 = v795;
          v310 = v782;
          v309 = v829;
          v308 = v782;
          v307 = v825;
          v306 = v782;
          v305 = v809;
          v304 = v782;
          v768 = (double)v812 * 1.0 / (double)v782
               + (1.0 - v772) * (double)v795 / (double)v782
               + (1.0 - v773) * (double)v829 / (double)v782
               + (1.0 - v774) * (double)v825 / (double)v782
               + (1.0 - v775) * (double)v809 / (double)v782;
          v303 = v794;
          v302 = v771;
          v301 = v810;
          v300 = v771;
          v299 = v806;
          v298 = v771;
          v297 = v813;
          v296 = v771;
          v295 = v769;
          v294 = v771;
          v767 = (double)v794 * 1.0 / (double)v771
               + (1.0 - v772) * (double)v810 / (double)v771
               + (1.0 - v773) * (double)v806 / (double)v771
               + (1.0 - v774) * (double)v813 / (double)v771
               + (1.0 - v775) * (double)v769 / (double)v771;
          if ( a1 > 1
            && (v293 = (unsigned __int8 *)dword_791390, v279 = sub_4A2160(&v857, &v419), sub_4A1E10(v279, v293))
            && (v293 = (unsigned __int8 *)dword_7913F4, v280 = sub_4A21B0(&v857, &v418), sub_4A20A0(v280, v293)) )
          {
            v781 = 0.0;
            v878 = 1;
          }
          else if ( a1 > 0
                 && (v293 = (unsigned __int8 *)dword_791390, v281 = sub_4A2160(&v887, &v417), sub_4A1E10(v281, v293))
                 && (v293 = (unsigned __int8 *)dword_7913F4, v282 = sub_4A21B0(&v887, &v416), sub_4A20A0(v282, v293)) )
          {
            v781 = 0.0;
            v878 = 1;
          }
          else if ( a1 == 4 )
          {
            if ( v767 >= v768 )
              v781 = v767;
            else
              v781 = v768;
          }
          else
          {
            v781 = 0.0;
          }
          break;
      }
    }
    else
    {
      v383 = v812;
      v382 = v782;
      v381 = v795;
      v380 = v782;
      v379 = v829;
      v378 = v782;
      v377 = v825;
      v376 = v782;
      v375 = v809;
      v374 = v782;
      v781 = (double)v812 * 1.0 / (double)v782
           + (1.0 - v816) * (double)v795 / (double)v782
           + (1.0 - v817) * (double)v829 / (double)v782
           + (1.0 - v818) * (double)v825 / (double)v782
           + (1.0 - v819) * (double)v809 / (double)v782;
    }
    dbl_791728[v862] = dbl_791728[v862] + v781;
  }
  if ( !v878 )
  {
    if ( a1 )
    {
      switch ( a1 )
      {
        case 1:
          if ( v852 < 4 )
          {
            v765 = (double)v864 / 1081.0 - (double)v875 / 249900.0;
            v766 = (double)v858 / 17296.0;
            if ( v765 >= v766 )
              v283 = dbl_791728[v862] + v765;
            else
              v283 = dbl_791728[v862] + v766;
            dbl_791728[v862] = v283;
          }
          break;
        case 2:
          if ( v852 < 4 )
          {
            v763 = (double)v864 / 1081.0 - (double)v875 / 249900.0;
            v764 = (double)v858 / 1081.0 - (double)v850 / 249900.0;
            if ( v763 >= v764 )
            {
              if ( v763 > 0.0 )
                dbl_791728[v862] = dbl_791728[v862] + v763;
            }
            else
            {
              dbl_791728[v862] = dbl_791728[v862] + v764;
            }
          }
          break;
        case 3:
          if ( v852 < 4 && v876 < 4 && v867 < 4 )
          {
            v761 = (double)v864 / 46.0 - (double)v875 / 230300.0;
            v762 = (double)v858 / 1081.0 - (double)v850 / 249900.0;
            if ( v761 >= v762 )
            {
              if ( v761 > 0.0 )
                dbl_791728[v862] = dbl_791728[v862] + v761;
            }
            else
            {
              dbl_791728[v862] = dbl_791728[v862] + v762;
            }
          }
          break;
        default:
          if ( a1 == 4 && v852 < 4 && v876 < 4 && v867 < 4 )
          {
            v759 = (double)v864 / 46.0 - (double)v875 / 230300.0;
            v760 = (double)v858 / 46.0 - (double)v850 / 230300.0;
            if ( v759 >= v760 )
            {
              if ( v759 > 0.0 )
                dbl_791728[v862] = dbl_791728[v862] + v759;
            }
            else
            {
              dbl_791728[v862] = dbl_791728[v862] + v760;
            }
          }
          break;
      }
    }
    else if ( v852 < 4 )
    {
      dbl_791728[v862] = (double)v864 / 17296.0 + dbl_791728[v862];
    }
    if ( a1 )
    {
      if ( a1 > 2 )
      {
        if ( v852 >= 4 || v876 >= 4 || v867 >= 4 )
        {
          if ( v852 < 4 && (v876 < 4 && v867 == 4 || v876 == 4 && v867 < 4) && v874 == 4 )
            dbl_791728[v862] = dbl_791728[v862] + 0.09782608695652174;
        }
        else if ( v874 == 4 )
        {
          dbl_791728[v862] = dbl_791728[v862] + 0.1956521739130435;
        }
      }
      else if ( v852 < 4 && v874 == 4 )
      {
        dbl_791728[v862] = dbl_791728[v862] + 0.3538390379278446;
      }
    }
    else if ( v852 < 4 )
    {
      if ( v874 == 4 )
      {
        v758 = 0.4716119333950046;
        v757 = (1.0 - 0.4716119333950046) * 0.3636363636363636;
        dbl_791728[v862] = v757 + 0.4716119333950046 + dbl_791728[v862];
      }
      else if ( v874 == 3 )
      {
        dbl_791728[v862] = dbl_791728[v862] + 0.07284921369102684;
      }
    }
  }
  LOBYTE(v893) = 28;
  ATL::CComCriticalSection::~CComCriticalSection(&v868);
  LOBYTE(v893) = 27;
  ATL::CComCriticalSection::~CComCriticalSection(&v846);
  LOBYTE(v893) = 26;
  ATL::CComCriticalSection::~CComCriticalSection(&v892);
  LOBYTE(v893) = 25;
  ATL::CComCriticalSection::~CComCriticalSection(&v887);
  LOBYTE(v893) = 24;
  ATL::CComCriticalSection::~CComCriticalSection(&v857);
  LOBYTE(v893) = 23;
  sub_484470(v866);
  LOBYTE(v893) = 22;
  sub_484470(v856);
  LOBYTE(v893) = 11;
  sub_484470(v883);
  LOBYTE(v893) = 10;
  ATL::CComCriticalSection::~CComCriticalSection(&v871);
  LOBYTE(v893) = 9;
  sub_484470(v882);
  LOBYTE(v893) = 8;
  sub_484470(v863);
  LOBYTE(v893) = 7;
  sub_484470(v891);
  LOBYTE(v893) = 6;
  sub_484470(v845);
  LOBYTE(v893) = 5;
  sub_484470(v841);
  LOBYTE(v893) = 4;
  sub_484470(v881);
  LOBYTE(v893) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v843);
  LOBYTE(v893) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v880);
  LOBYTE(v893) = 1;
  sub_484470(v849);
  LOBYTE(v893) = 0;
  sub_484470(v879);
  v893 = -1;
  sub_484470(v854);
}


//======================================================================
// sub_4B6FF0
// entry 004b6ff0  size 1660  status ok
//======================================================================

double __cdecl sub_4B6FF0(int a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v9; // [esp+10h] [ebp-C8h]
  double v10; // [esp+1Ch] [ebp-BCh]
  double v11; // [esp+28h] [ebp-B0h]
  double v12; // [esp+34h] [ebp-A4h]
  __int16 v13; // [esp+40h] [ebp-98h]
  __int16 v14; // [esp+44h] [ebp-94h]
  __int16 v15; // [esp+48h] [ebp-90h]
  __int16 v16; // [esp+4Ch] [ebp-8Ch]
  __int16 ExecutingContext; // [esp+50h] [ebp-88h]
  __int16 v18; // [esp+54h] [ebp-84h]
  double v19; // [esp+58h] [ebp-80h]
  double v20; // [esp+60h] [ebp-78h]
  double v21; // [esp+68h] [ebp-70h]
  double v22; // [esp+70h] [ebp-68h]
  __int16 i; // [esp+80h] [ebp-58h]
  __int16 v24; // [esp+84h] [ebp-54h]
  double v25; // [esp+88h] [ebp-50h]
  double v26; // [esp+88h] [ebp-50h]
  double v27; // [esp+88h] [ebp-50h]
  int v28; // [esp+94h] [ebp-44h]
  double v29; // [esp+98h] [ebp-40h]
  double v30; // [esp+A0h] [ebp-38h]
  double v31; // [esp+A8h] [ebp-30h]
  double v32; // [esp+A8h] [ebp-30h]
  double v33; // [esp+A8h] [ebp-30h]
  double v34; // [esp+B0h] [ebp-28h]
  double v35; // [esp+B8h] [ebp-20h]
  double v36; // [esp+B8h] [ebp-20h]
  double v37; // [esp+C0h] [ebp-18h]
  double v38; // [esp+C8h] [ebp-10h]
  __int16 j; // [esp+D4h] [ebp-4h]
  __int16 k; // [esp+D4h] [ebp-4h]
  __int16 m; // [esp+D4h] [ebp-4h]

  v28 = sub_47E420((_DWORD *)dword_791364);
  v37 = sub_4F0500(dword_791890) / (double)a2;
  v34 = 1.0;
  v30 = 1.0;
  v38 = 1.0;
  v24 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v28 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        ++v24;
        if ( sub_4F1710(i, a2) * dbl_791AE0[8 * v28 + i] <= v37 )
        {
          v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
          ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
          v14 = sub_4F6880(ExecutingContext);
          v16 = sub_4F6930(ExecutingContext);
          v13 = sub_4F6A90(ExecutingContext) - v14;
          v18 = sub_4F6B20(ExecutingContext) - v16;
          if ( v16 || v14 )
            v15 = 0;
          else
            v15 = sub_4F69E0(ExecutingContext);
          if ( v14 < 0 )
            sub_5E9F20((char)"shCurrentBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 6388);
          if ( v16 < 0 )
            sub_5E9F20((char)"shCurrentCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 6389);
          if ( v15 < 0 )
            sub_5E9F20((char)"shCurrentChecks >= 0", "..\\Casino\\PokerHoldemAI.cpp", 6390);
          if ( v13 < 0 )
            sub_5E9F20((char)"shOldBets >= 0", "..\\Casino\\PokerHoldemAI.cpp", 6391);
          if ( v18 < 0 )
            sub_5E9F20((char)"shOldCalls >= 0", "..\\Casino\\PokerHoldemAI.cpp", 6392);
          v12 = sub_4F0530(dword_791890) * (double)v13 + 1.0;
          v11 = sub_4F0600(dword_791890) * (double)v18 + v12;
          v10 = sub_4F06D0(dword_791890) * (double)v14 + v11;
          v9 = sub_4F07A0(dword_791890) * (double)v16 + v10;
          v22 = v9 - (double)(__int16)sub_4F0410(dword_791890) / 35.0 * (double)v15;
        }
        else
        {
          v22 = 1.0;
        }
        v20 = 1.0 - (1.0 - dbl_7916E8[v28]) * v22;
        v19 = 1.0 - (1.0 - dbl_791958[v28]) * v22;
        if ( dbl_7917A8[v28] >= dbl_7918F8[v28] )
        {
          if ( byte_791AB8[v28] )
            v5 = 1.0 - (1.0 - dbl_7917A8[v28]) * v22;
          else
            v5 = 1.0 - (1.0 - dbl_7918F8[v28]) * v22;
          v21 = v5;
        }
        else
        {
          if ( byte_791868[v28] )
            v4 = 1.0 - (1.0 - dbl_7918F8[v28]) * v22;
          else
            v4 = 1.0 - (1.0 - dbl_7917A8[v28]) * v22;
          v21 = v4;
        }
        if ( v20 < 0.0 )
          v20 = 0.0;
        if ( v19 < 0.0 )
          v19 = 0.0;
        if ( v21 < 0.0 )
          v21 = 0.0;
        if ( v19 >= v20 )
        {
          v34 = v34 * v19;
          v6 = (0.5 * v19 + 0.5) * v30;
        }
        else
        {
          v34 = v34 * v20;
          v6 = (0.5 * v20 + 0.5) * v30;
        }
        v30 = v6;
        if ( v21 <= v20 )
          v7 = (2.0 * v20 + 3.0 * v21) / 5.0 * v38;
        else
          v7 = (3.0 * v20 + 2.0 * v21) / 5.0 * v38;
        v38 = v7;
      }
    }
  }
  v29 = (double)(__int16)sub_4F1CC0(dword_791890) / 200.0 * dbl_791728[v28];
  v31 = 1.0;
  for ( j = 0; j < v24; ++j )
    v31 = v31 * 0.5;
  v25 = 0.5 * v31 + 0.0;
  v32 = 1.0;
  for ( k = 0; k < v24 - 1; ++k )
    v32 = v32 * 0.5;
  v26 = (1.0 - v32) * 0.5 * (v30 + v29) + v25;
  v33 = 1.0;
  for ( m = 0; m < v24; ++m )
    v33 = v33 * 0.5;
  v27 = 1.0 * v33 * (v34 + v29) + v26;
  if ( v38 <= 0.1 || v38 <= v27 )
  {
    v35 = v27;
    byte_791580[v28] = 0;
  }
  else
  {
    v35 = v38;
    byte_791580[v28] = 1;
  }
  v36 = v35 * dbl_791DD0[v28];
  if ( v36 > 100.0 )
    return 100.0;
  return v36;
}


//======================================================================
// sub_4B7670
// entry 004b7670  size 807  status ok
//======================================================================

char __cdecl sub_4B7670(int a1, int a2)
{
  Concurrency::details::SchedulerProxy *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  __int16 ExecutingContext; // ax
  Concurrency::details::VirtualProcessor *v5; // eax
  __int16 v6; // ax
  __int16 v7; // ax
  double v8; // st7
  double v10; // [esp+20h] [ebp-48h]
  __int16 i; // [esp+30h] [ebp-38h]
  __int16 v12; // [esp+34h] [ebp-34h]
  int v13; // [esp+38h] [ebp-30h]
  __int16 v14; // [esp+3Ch] [ebp-2Ch]
  __int16 v15; // [esp+40h] [ebp-28h]
  __int16 v16; // [esp+44h] [ebp-24h]
  __int16 v17; // [esp+54h] [ebp-14h]
  double v18; // [esp+58h] [ebp-10h]
  __int16 v19; // [esp+64h] [ebp-4h]

  v13 = sub_47E420((_DWORD *)dword_791364);
  v14 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != v13 )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      {
        v3 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v3);
        v14 += sub_4F69E0(ExecutingContext);
        v5 = (Concurrency::details::VirtualProcessor *)sub_47E390(i);
        v6 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v5);
        if ( (__int16)sub_4F6880(v6) > 0 )
        {
          v14 = 0;
          break;
        }
      }
    }
  }
  v7 = sub_4F0AC0(dword_791890);
  v16 = sub_62FBF0(v7 + 1);
  if ( v16 * v14 + word_791798[v13] <= 10 )
    v8 = dbl_791D90[v13];
  else
    v8 = (double)(word_791798[v13] + v16 * v14 - 10) / 100.0 + dbl_791D90[v13];
  v12 = sub_4F1900(3);
  v17 = sub_4F1900(2);
  v15 = sub_4F1900(1);
  v19 = sub_4F1BF0(dword_791890);
  v10 = (double)(int)sub_62FBF0(v19) / 100.0 + 1.0;
  v18 = (v10 - (double)(int)sub_62FBF0(v19) / 100.0) / (double)a2;
  if ( (double)v12 / 100.0 + v18 >= dbl_791D90[v13] )
  {
    if ( (double)v17 / 100.0 + v18 >= dbl_791D90[v13] )
    {
      if ( (double)v15 / 100.0 + v18 >= dbl_791D90[v13] )
      {
        if ( (double)v12 / 100.0 + v18 >= v8 )
        {
          if ( (double)v17 / 100.0 + v18 >= v8 )
          {
            if ( (double)v15 / 100.0 + v18 >= v8 )
            {
              return 0;
            }
            else
            {
              word_791768[v13] = 10;
              return 1;
            }
          }
          else
          {
            word_791768[v13] = 11;
            return 1;
          }
        }
        else
        {
          word_791768[v13] = 12;
          return 1;
        }
      }
      else
      {
        word_791768[v13] = 3;
        return 1;
      }
    }
    else
    {
      word_791768[v13] = 4;
      return 1;
    }
  }
  else
  {
    word_791768[v13] = 5;
    return 1;
  }
}


//======================================================================
// sub_4B79A0
// entry 004b79a0  size 278  status ok
//======================================================================

int sub_4B79A0()
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

  v10 = sub_47E420((_DWORD *)dword_791364);
  v0 = sub_62FBF0(21);
  v1 = v0 + sub_62FBF0(21) + 60;
  v2 = sub_62FBF0(21) + v1;
  dbl_791DD0[v10] = (double)(sub_62FBF0(21) + v2) * 0.01;
  v3 = sub_62FBF0(21);
  v4 = v3 + sub_62FBF0(21) + 60;
  v5 = sub_62FBF0(21) + v4;
  dbl_791520[v10] = (double)(sub_62FBF0(21) + v5) * 0.01;
  for ( i = 0; ; ++i )
  {
    result = sub_47F950();
    if ( i >= result )
      break;
    v7 = sub_62FBF0(51);
    v8 = v7 + sub_62FBF0(51) + 25;
    dbl_791AE0[8 * v10 + i] = (double)(sub_62FBF0(51) + v8) * 0.01;
  }
  return result;
}


//======================================================================
// sub_4B7AC0
// entry 004b7ac0  size 85  status ok
//======================================================================

__int16 __cdecl sub_4B7AC0(int a1, __int16 a2)
{
  __int16 v3; // [esp+0h] [ebp-4h]

  v3 = sub_4F0870(a2);
  if ( a1 == 5 && (unsigned __int8)sub_4F6640(dword_791364 + 56) )
    v3 += (100 - v3) / 2;
  return v3;
}


//======================================================================
// sub_4B7D90
// entry 004b7d90  size 96  status ok
//======================================================================

bool sub_4B7D90()
{
  if ( sub_47E190((_DWORD *)dword_791364) == 5 )
    return *(_DWORD *)&dword_791E74 > 1;
  if ( sub_47E190((_DWORD *)dword_791364) == 6 )
    return *(_DWORD *)&dword_791E74 > 2;
  return *(_DWORD *)&dword_791E74 > 3;
}


//======================================================================
// sub_4B7DF0
// entry 004b7df0  size 46954  status ok
//======================================================================

int __thiscall sub_4B7DF0(_DWORD *this, int a2)
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
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // edi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // esi
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
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  const char *v139; // eax
  const char *v140; // eax
  const char *v141; // eax
  const char *v142; // eax
  const char *v143; // eax
  _WORD *v144; // eax
  unsigned __int8 *v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // eax
  int v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  int v156; // eax
  int v157; // eax
  _BYTE *v158; // eax
  _BYTE *v159; // eax
  _BYTE *v160; // eax
  _BYTE *v161; // eax
  _BYTE *v162; // eax
  const char *v163; // eax
  int v164; // eax
  int v165; // eax
  int v166; // eax
  int v167; // eax
  const char *v168; // eax
  const char *v169; // eax
  const char *v170; // eax
  const char *v171; // eax
  const char *v172; // eax
  unsigned __int8 *v173; // eax
  int v174; // eax
  unsigned __int8 *v175; // eax
  int v176; // eax
  unsigned __int8 *v177; // eax
  int v178; // eax
  unsigned __int8 *v179; // eax
  int v180; // eax
  int v181; // eax
  int v182; // eax
  int v183; // eax
  int v184; // eax
  int v185; // eax
  int v186; // edx
  int v187; // ecx
  int v188; // eax
  int v189; // eax
  int v190; // eax
  int v191; // eax
  int v192; // eax
  int v193; // eax
  int v194; // eax
  int v195; // eax
  int v196; // eax
  Concurrency::details::SchedulerProxy *v197; // eax
  int v198; // eax
  int v199; // eax
  int v200; // esi
  int v201; // edi
  int v202; // edi
  int v203; // eax
  int v204; // esi
  __int16 v205; // ax
  __int16 v206; // ax
  ATL::CComCriticalSection *v207; // eax
  int v208; // eax
  __int16 v209; // ax
  int v210; // esi
  unsigned int v211; // eax
  int v212; // eax
  int v213; // esi
  int v214; // esi
  int v215; // eax
  Concurrency::details::SchedulerProxy *v216; // eax
  int v217; // eax
  int v218; // eax
  int v219; // eax
  int v220; // eax
  __int16 v221; // ax
  Concurrency::details::SchedulerProxy *v222; // eax
  __int16 v223; // ax
  Concurrency::details::SchedulerProxy *v224; // eax
  __int16 v225; // ax
  ATL::CAtlWinModule *v226; // eax
  __int16 v227; // si
  int v228; // esi
  int v229; // eax
  unsigned __int8 *v230; // edx
  int v231; // esi
  int v232; // eax
  int v233; // esi
  int v234; // eax
  _WORD *v235; // eax
  unsigned __int8 *v236; // eax
  int v237; // esi
  int v238; // eax
  unsigned __int8 *v239; // eax
  char *v240; // eax
  int v241; // esi
  int v242; // eax
  int v243; // eax
  int v244; // eax
  int v245; // eax
  int v246; // eax
  int v247; // esi
  ATL::CComCriticalSection *v248; // eax
  int v249; // eax
  int v250; // esi
  unsigned int v251; // eax
  int v252; // eax
  int v253; // eax
  int v254; // esi
  ATL::CComCriticalSection *v255; // eax
  int v256; // eax
  int v257; // esi
  unsigned int v258; // eax
  int v259; // esi
  int v260; // edi
  int v261; // edi
  int v262; // esi
  int v263; // edi
  int v264; // edi
  _WORD *v265; // eax
  _WORD *v266; // eax
  _WORD *v267; // eax
  _WORD *v268; // eax
  _WORD *v269; // eax
  _WORD *v270; // eax
  int v271; // esi
  ATL::CComCriticalSection *v272; // eax
  int v273; // eax
  int v274; // esi
  unsigned int v275; // eax
  int v276; // eax
  int v277; // eax
  int v278; // esi
  ATL::CComCriticalSection *v279; // eax
  int v280; // eax
  int v281; // esi
  unsigned int v282; // eax
  int v283; // esi
  int v284; // edi
  int v285; // edi
  int v286; // esi
  int v287; // edi
  int v288; // edi
  int v289; // eax
  int v290; // eax
  int v291; // eax
  int v292; // eax
  int v293; // eax
  int v294; // esi
  ATL::CComCriticalSection *v295; // eax
  int v296; // esi
  unsigned int v297; // eax
  unsigned __int8 *v298; // eax
  unsigned __int8 *v299; // eax
  unsigned __int8 *v300; // eax
  unsigned __int8 *v301; // eax
  int v302; // eax
  int v303; // eax
  int v304; // esi
  ATL::CComCriticalSection *v305; // eax
  int v306; // esi
  unsigned int v307; // eax
  unsigned __int8 *v308; // eax
  unsigned __int8 *v309; // eax
  unsigned __int8 *v310; // eax
  unsigned __int8 *v311; // eax
  int v312; // esi
  int v313; // edi
  int v314; // edi
  int v315; // esi
  int v316; // edi
  int v317; // edi
  int v318; // eax
  int v319; // esi
  int v320; // eax
  int v321; // esi
  ATL::CComCriticalSection *v322; // eax
  int v323; // esi
  unsigned int v324; // eax
  int v325; // esi
  int v326; // edi
  int v327; // edi
  int v328; // esi
  int v329; // edi
  int v330; // edi
  int v331; // eax
  int v332; // eax
  unsigned __int8 *v333; // eax
  unsigned __int8 *v334; // eax
  unsigned __int8 *v335; // eax
  int v336; // eax
  int v337; // esi
  int v338; // eax
  Concurrency::details::SchedulerProxy *v339; // eax
  int v340; // eax
  Concurrency::details::SchedulerProxy *v341; // eax
  int v342; // eax
  unsigned __int8 *v343; // eax
  unsigned __int8 *v344; // eax
  unsigned __int8 *v345; // eax
  unsigned __int8 *v346; // eax
  unsigned __int8 *v347; // eax
  unsigned __int8 *v348; // eax
  unsigned __int8 *v349; // eax
  unsigned __int8 *v350; // eax
  unsigned __int8 *v351; // eax
  unsigned __int8 *v352; // eax
  unsigned __int8 *v353; // eax
  unsigned __int8 *v354; // eax
  int v355; // eax
  int v356; // eax
  int v357; // eax
  int v358; // eax
  int v359; // [esp-14h] [ebp-AA4h]
  int v360; // [esp-10h] [ebp-AA0h]
  int v361; // [esp-Ch] [ebp-A9Ch] BYREF
  int v362; // [esp-8h] [ebp-A98h]
  unsigned int v363; // [esp-4h] [ebp-A94h]
  BOOL v364; // [esp+Ch] [ebp-A84h]
  _BYTE *v365; // [esp+10h] [ebp-A80h]
  __int16 *v366; // [esp+18h] [ebp-A78h]
  BOOL v367; // [esp+20h] [ebp-A70h]
  _BYTE *v368; // [esp+24h] [ebp-A6Ch]
  __int16 *v369; // [esp+2Ch] [ebp-A64h]
  BOOL v370; // [esp+34h] [ebp-A5Ch]
  _BYTE *v371; // [esp+38h] [ebp-A58h]
  __int16 *v372; // [esp+40h] [ebp-A50h]
  BOOL v373; // [esp+48h] [ebp-A48h]
  _BYTE *v374; // [esp+4Ch] [ebp-A44h]
  __int16 *v375; // [esp+54h] [ebp-A3Ch]
  BOOL v376; // [esp+5Ch] [ebp-A34h]
  _BYTE *v377; // [esp+60h] [ebp-A30h]
  __int16 *v378; // [esp+68h] [ebp-A28h]
  BOOL v379; // [esp+70h] [ebp-A20h]
  _BYTE *v380; // [esp+74h] [ebp-A1Ch]
  __int16 *v381; // [esp+7Ch] [ebp-A14h]
  BOOL v382; // [esp+84h] [ebp-A0Ch]
  _BYTE *v383; // [esp+88h] [ebp-A08h]
  __int16 *v384; // [esp+90h] [ebp-A00h]
  BOOL v385; // [esp+98h] [ebp-9F8h]
  _BYTE *v386; // [esp+9Ch] [ebp-9F4h]
  __int16 *v387; // [esp+A4h] [ebp-9ECh]
  BOOL v388; // [esp+ACh] [ebp-9E4h]
  _BYTE *v389; // [esp+B0h] [ebp-9E0h]
  __int16 *v390; // [esp+B8h] [ebp-9D8h]
  BOOL v391; // [esp+C0h] [ebp-9D0h]
  _BYTE *v392; // [esp+C4h] [ebp-9CCh]
  __int16 *v393; // [esp+CCh] [ebp-9C4h]
  BOOL v394; // [esp+D4h] [ebp-9BCh]
  _BYTE *v395; // [esp+D8h] [ebp-9B8h]
  __int16 *v396; // [esp+E0h] [ebp-9B0h]
  BOOL v397; // [esp+E8h] [ebp-9A8h]
  _BYTE *v398; // [esp+ECh] [ebp-9A4h]
  __int16 *v399; // [esp+F4h] [ebp-99Ch]
  BOOL v400; // [esp+FCh] [ebp-994h]
  _BYTE *v401; // [esp+100h] [ebp-990h]
  __int16 *v402; // [esp+108h] [ebp-988h]
  BOOL v403; // [esp+110h] [ebp-980h]
  _BYTE *v404; // [esp+114h] [ebp-97Ch]
  __int16 *v405; // [esp+11Ch] [ebp-974h]
  BOOL v406; // [esp+124h] [ebp-96Ch]
  _BYTE *v407; // [esp+128h] [ebp-968h]
  __int16 *v408; // [esp+130h] [ebp-960h]
  _WORD *v409; // [esp+138h] [ebp-958h]
  _WORD *v410; // [esp+13Ch] [ebp-954h]
  _WORD *v411; // [esp+140h] [ebp-950h]
  _WORD *v412; // [esp+144h] [ebp-94Ch]
  _WORD *v413; // [esp+148h] [ebp-948h]
  _WORD *v414; // [esp+14Ch] [ebp-944h]
  int v415; // [esp+150h] [ebp-940h]
  int v416; // [esp+154h] [ebp-93Ch]
  int v417; // [esp+158h] [ebp-938h]
  int v418; // [esp+15Ch] [ebp-934h]
  int v419; // [esp+160h] [ebp-930h]
  int v420; // [esp+164h] [ebp-92Ch]
  int v421; // [esp+168h] [ebp-928h]
  int v422; // [esp+16Ch] [ebp-924h]
  int v423; // [esp+170h] [ebp-920h]
  int v424; // [esp+174h] [ebp-91Ch]
  _DWORD *v425; // [esp+178h] [ebp-918h]
  _DWORD *v426; // [esp+17Ch] [ebp-914h]
  int v427; // [esp+180h] [ebp-910h]
  int v428; // [esp+184h] [ebp-90Ch]
  __int16 *v429; // [esp+188h] [ebp-908h]
  __int16 *v430; // [esp+18Ch] [ebp-904h]
  __int16 *v431; // [esp+190h] [ebp-900h]
  __int16 *v432; // [esp+194h] [ebp-8FCh]
  _WORD *v433; // [esp+198h] [ebp-8F8h]
  _WORD *v434; // [esp+19Ch] [ebp-8F4h]
  __int16 *v435; // [esp+1A0h] [ebp-8F0h]
  __int16 *v436; // [esp+1A4h] [ebp-8ECh]
  __int16 *v437; // [esp+1A8h] [ebp-8E8h]
  __int16 *v438; // [esp+1ACh] [ebp-8E4h]
  int v439; // [esp+1B0h] [ebp-8E0h]
  int v440; // [esp+1B4h] [ebp-8DCh]
  int v441; // [esp+1B8h] [ebp-8D8h]
  int v442; // [esp+1BCh] [ebp-8D4h]
  int v443; // [esp+1C0h] [ebp-8D0h]
  int v444; // [esp+1C4h] [ebp-8CCh]
  int v445; // [esp+1C8h] [ebp-8C8h]
  int v446; // [esp+1CCh] [ebp-8C4h]
  int v447; // [esp+1D0h] [ebp-8C0h]
  int v448; // [esp+1D4h] [ebp-8BCh]
  int v449; // [esp+1D8h] [ebp-8B8h]
  int v450; // [esp+1DCh] [ebp-8B4h]
  int v451; // [esp+1E0h] [ebp-8B0h]
  int v452; // [esp+1E4h] [ebp-8ACh]
  int v453; // [esp+1E8h] [ebp-8A8h]
  int v454; // [esp+1ECh] [ebp-8A4h]
  int v455; // [esp+1F0h] [ebp-8A0h]
  int v456; // [esp+1F4h] [ebp-89Ch]
  int v457; // [esp+1F8h] [ebp-898h]
  int v458; // [esp+1FCh] [ebp-894h]
  int v459; // [esp+200h] [ebp-890h]
  int v460; // [esp+204h] [ebp-88Ch]
  int v461; // [esp+208h] [ebp-888h]
  int v462; // [esp+20Ch] [ebp-884h]
  __int16 *v463; // [esp+210h] [ebp-880h]
  __int16 *v464; // [esp+214h] [ebp-87Ch]
  _WORD *v465; // [esp+218h] [ebp-878h]
  _WORD *v466; // [esp+21Ch] [ebp-874h]
  __int16 *v467; // [esp+220h] [ebp-870h]
  __int16 *v468; // [esp+224h] [ebp-86Ch]
  __int16 *v469; // [esp+228h] [ebp-868h]
  __int16 *v470; // [esp+22Ch] [ebp-864h]
  int v471; // [esp+230h] [ebp-860h]
  int v472; // [esp+234h] [ebp-85Ch]
  int v473; // [esp+238h] [ebp-858h]
  int v474; // [esp+23Ch] [ebp-854h]
  char v475; // [esp+243h] [ebp-84Dh] BYREF
  int v476; // [esp+244h] [ebp-84Ch] BYREF
  _BYTE v477[10]; // [esp+248h] [ebp-848h] BYREF
  bool v478; // [esp+252h] [ebp-83Eh]
  char v479; // [esp+253h] [ebp-83Dh] BYREF
  int v480; // [esp+254h] [ebp-83Ch] BYREF
  _BYTE v481[10]; // [esp+258h] [ebp-838h] BYREF
  bool v482; // [esp+262h] [ebp-82Eh]
  char v483; // [esp+263h] [ebp-82Dh] BYREF
  int v484; // [esp+264h] [ebp-82Ch] BYREF
  _BYTE v485[10]; // [esp+268h] [ebp-828h] BYREF
  bool v486; // [esp+272h] [ebp-81Eh]
  char v487; // [esp+273h] [ebp-81Dh] BYREF
  int v488; // [esp+274h] [ebp-81Ch] BYREF
  _BYTE v489[10]; // [esp+278h] [ebp-818h] BYREF
  bool v490; // [esp+282h] [ebp-80Eh]
  char v491; // [esp+283h] [ebp-80Dh] BYREF
  int v492; // [esp+284h] [ebp-80Ch] BYREF
  _BYTE v493[10]; // [esp+288h] [ebp-808h] BYREF
  bool v494; // [esp+292h] [ebp-7FEh]
  char v495; // [esp+293h] [ebp-7FDh] BYREF
  int v496; // [esp+294h] [ebp-7FCh] BYREF
  _BYTE v497[10]; // [esp+298h] [ebp-7F8h] BYREF
  bool v498; // [esp+2A2h] [ebp-7EEh]
  char v499; // [esp+2A3h] [ebp-7EDh] BYREF
  int v500; // [esp+2A4h] [ebp-7ECh] BYREF
  _BYTE v501[10]; // [esp+2A8h] [ebp-7E8h] BYREF
  bool v502; // [esp+2B2h] [ebp-7DEh]
  char v503; // [esp+2B3h] [ebp-7DDh] BYREF
  int v504; // [esp+2B4h] [ebp-7DCh] BYREF
  _BYTE v505[10]; // [esp+2B8h] [ebp-7D8h] BYREF
  bool v506; // [esp+2C2h] [ebp-7CEh]
  char v507; // [esp+2C3h] [ebp-7CDh] BYREF
  int v508; // [esp+2C4h] [ebp-7CCh] BYREF
  _BYTE v509[10]; // [esp+2C8h] [ebp-7C8h] BYREF
  bool v510; // [esp+2D2h] [ebp-7BEh]
  char v511; // [esp+2D3h] [ebp-7BDh] BYREF
  int v512; // [esp+2D4h] [ebp-7BCh] BYREF
  _BYTE v513[10]; // [esp+2D8h] [ebp-7B8h] BYREF
  bool v514; // [esp+2E2h] [ebp-7AEh]
  char v515; // [esp+2E3h] [ebp-7ADh] BYREF
  int v516; // [esp+2E4h] [ebp-7ACh] BYREF
  _BYTE v517[10]; // [esp+2E8h] [ebp-7A8h] BYREF
  bool v518; // [esp+2F2h] [ebp-79Eh]
  char v519; // [esp+2F3h] [ebp-79Dh] BYREF
  int v520; // [esp+2F4h] [ebp-79Ch] BYREF
  _BYTE v521[10]; // [esp+2F8h] [ebp-798h] BYREF
  bool v522; // [esp+302h] [ebp-78Eh]
  char v523; // [esp+303h] [ebp-78Dh] BYREF
  int v524; // [esp+304h] [ebp-78Ch] BYREF
  _BYTE v525[10]; // [esp+308h] [ebp-788h] BYREF
  bool v526; // [esp+312h] [ebp-77Eh]
  char v527; // [esp+313h] [ebp-77Dh] BYREF
  int v528; // [esp+314h] [ebp-77Ch] BYREF
  _BYTE v529[10]; // [esp+318h] [ebp-778h] BYREF
  bool v530; // [esp+322h] [ebp-76Eh]
  char v531; // [esp+323h] [ebp-76Dh] BYREF
  int v532; // [esp+324h] [ebp-76Ch] BYREF
  _BYTE v533[11]; // [esp+328h] [ebp-768h] BYREF
  bool v534; // [esp+333h] [ebp-75Dh]
  __int64 v535; // [esp+334h] [ebp-75Ch]
  char v536; // [esp+33Ch] [ebp-754h] BYREF
  char v537; // [esp+33Dh] [ebp-753h] BYREF
  char v538; // [esp+33Eh] [ebp-752h] BYREF
  char v539; // [esp+33Fh] [ebp-751h] BYREF
  __int64 v540; // [esp+340h] [ebp-750h]
  char v541; // [esp+348h] [ebp-748h] BYREF
  char v542; // [esp+349h] [ebp-747h] BYREF
  char v543; // [esp+34Ah] [ebp-746h] BYREF
  char v544; // [esp+34Bh] [ebp-745h] BYREF
  __int64 v545; // [esp+34Ch] [ebp-744h]
  __int64 v546; // [esp+354h] [ebp-73Ch]
  __int64 v547; // [esp+35Ch] [ebp-734h]
  __int16 v548; // [esp+364h] [ebp-72Ch] BYREF
  __int16 v549; // [esp+368h] [ebp-728h] BYREF
  __int16 v550; // [esp+36Ch] [ebp-724h] BYREF
  __int64 v551; // [esp+370h] [ebp-720h]
  __int64 v552; // [esp+378h] [ebp-718h]
  char v553; // [esp+383h] [ebp-70Dh] BYREF
  _BYTE v554[8]; // [esp+384h] [ebp-70Ch] BYREF
  _BYTE v555[8]; // [esp+38Ch] [ebp-704h] BYREF
  _BYTE v556[11]; // [esp+394h] [ebp-6FCh] BYREF
  char v557; // [esp+39Fh] [ebp-6F1h] BYREF
  _BYTE v558[8]; // [esp+3A0h] [ebp-6F0h] BYREF
  _BYTE v559[10]; // [esp+3A8h] [ebp-6E8h] BYREF
  int v560; // [esp+3B2h] [ebp-6DEh] BYREF
  char v561; // [esp+3B6h] [ebp-6DAh] BYREF
  char v562; // [esp+3B7h] [ebp-6D9h] BYREF
  _BYTE v563[8]; // [esp+3B8h] [ebp-6D8h] BYREF
  void *v564; // [esp+3C0h] [ebp-6D0h]
  void *v565; // [esp+3C4h] [ebp-6CCh]
  _WORD v566[2]; // [esp+3CAh] [ebp-6C6h] BYREF
  bool v567; // [esp+3CFh] [ebp-6C1h]
  void *v568; // [esp+3D0h] [ebp-6C0h]
  char v569; // [esp+3D7h] [ebp-6B9h] BYREF
  void *v570; // [esp+3D8h] [ebp-6B8h]
  char v571; // [esp+3DFh] [ebp-6B1h] BYREF
  _BYTE v572[8]; // [esp+3E0h] [ebp-6B0h] BYREF
  _BYTE v573[11]; // [esp+3E8h] [ebp-6A8h] BYREF
  char v574; // [esp+3F3h] [ebp-69Dh] BYREF
  _BYTE v575[8]; // [esp+3F4h] [ebp-69Ch] BYREF
  __int64 v576; // [esp+3FCh] [ebp-694h]
  char v577; // [esp+406h] [ebp-68Ah] BYREF
  char v578; // [esp+407h] [ebp-689h] BYREF
  _BYTE v579[8]; // [esp+408h] [ebp-688h] BYREF
  _BYTE v580[11]; // [esp+410h] [ebp-680h] BYREF
  char v581; // [esp+41Bh] [ebp-675h] BYREF
  char v582; // [esp+41Ch] [ebp-674h] BYREF
  char v583; // [esp+41Dh] [ebp-673h] BYREF
  char v584; // [esp+41Eh] [ebp-672h] BYREF
  char v585; // [esp+41Fh] [ebp-671h] BYREF
  _BYTE v586[11]; // [esp+420h] [ebp-670h] BYREF
  char v587; // [esp+42Bh] [ebp-665h] BYREF
  char v588; // [esp+42Ch] [ebp-664h] BYREF
  char v589; // [esp+42Dh] [ebp-663h] BYREF
  char v590; // [esp+42Eh] [ebp-662h] BYREF
  char v591; // [esp+42Fh] [ebp-661h] BYREF
  void *v592; // [esp+430h] [ebp-660h]
  _WORD v593[2]; // [esp+436h] [ebp-65Ah] BYREF
  bool v594; // [esp+43Bh] [ebp-655h]
  void *v595; // [esp+43Ch] [ebp-654h]
  char v596; // [esp+443h] [ebp-64Dh] BYREF
  void *v597; // [esp+444h] [ebp-64Ch]
  char v598; // [esp+44Ah] [ebp-646h] BYREF
  char v599; // [esp+44Bh] [ebp-645h] BYREF
  int i; // [esp+44Ch] [ebp-644h]
  int v601; // [esp+450h] [ebp-640h]
  int v602; // [esp+454h] [ebp-63Ch]
  int v603; // [esp+458h] [ebp-638h]
  int v604; // [esp+45Ch] [ebp-634h]
  int v605; // [esp+460h] [ebp-630h]
  int v606; // [esp+464h] [ebp-62Ch]
  int v607; // [esp+468h] [ebp-628h]
  int v608; // [esp+46Ch] [ebp-624h]
  int v609; // [esp+470h] [ebp-620h]
  __int16 v610; // [esp+474h] [ebp-61Ch] BYREF
  int v611; // [esp+478h] [ebp-618h] BYREF
  int v612; // [esp+47Ch] [ebp-614h]
  __int64 v613; // [esp+480h] [ebp-610h]
  int v614; // [esp+488h] [ebp-608h]
  __int64 v615; // [esp+48Ch] [ebp-604h]
  int v616; // [esp+494h] [ebp-5FCh]
  __int64 v617; // [esp+498h] [ebp-5F8h]
  char v618; // [esp+4A3h] [ebp-5EDh]
  int v619; // [esp+4A4h] [ebp-5ECh]
  __int64 v620; // [esp+4A8h] [ebp-5E8h]
  int v621; // [esp+4B0h] [ebp-5E0h]
  __int64 v622; // [esp+4B4h] [ebp-5DCh]
  char v623; // [esp+4BFh] [ebp-5D1h]
  __int16 v624; // [esp+4C0h] [ebp-5D0h]
  __int16 v625; // [esp+4C4h] [ebp-5CCh]
  int v626; // [esp+4C8h] [ebp-5C8h]
  __int64 v627; // [esp+4CCh] [ebp-5C4h]
  int v628; // [esp+4D4h] [ebp-5BCh]
  __int64 v629; // [esp+4D8h] [ebp-5B8h]
  char v630; // [esp+4E3h] [ebp-5ADh]
  int v631; // [esp+4E4h] [ebp-5ACh] BYREF
  int v632; // [esp+4E8h] [ebp-5A8h] BYREF
  int v633; // [esp+4ECh] [ebp-5A4h] BYREF
  int v634; // [esp+4F0h] [ebp-5A0h] BYREF
  __int16 v635[4]; // [esp+4F4h] [ebp-59Ch] BYREF
  __int16 v636[4]; // [esp+4FCh] [ebp-594h] BYREF
  int v637; // [esp+504h] [ebp-58Ch] BYREF
  int v638; // [esp+508h] [ebp-588h] BYREF
  int v639; // [esp+50Ch] [ebp-584h] BYREF
  __int16 v640[4]; // [esp+510h] [ebp-580h] BYREF
  __int16 v641[4]; // [esp+518h] [ebp-578h] BYREF
  int v642; // [esp+520h] [ebp-570h] BYREF
  __int16 v643; // [esp+524h] [ebp-56Ch]
  __int16 v644[4]; // [esp+528h] [ebp-568h] BYREF
  __int16 v645; // [esp+530h] [ebp-560h]
  __int16 v646[4]; // [esp+534h] [ebp-55Ch] BYREF
  __int16 v647[4]; // [esp+53Ch] [ebp-554h] BYREF
  int v648; // [esp+544h] [ebp-54Ch] BYREF
  int v649[2]; // [esp+548h] [ebp-548h] BYREF
  __int16 v650[4]; // [esp+550h] [ebp-540h] BYREF
  __int16 v651[4]; // [esp+558h] [ebp-538h] BYREF
  __int16 v652[4]; // [esp+560h] [ebp-530h] BYREF
  unsigned __int8 *v653; // [esp+568h] [ebp-528h] BYREF
  int v654; // [esp+56Ch] [ebp-524h] BYREF
  __int16 v655[4]; // [esp+570h] [ebp-520h] BYREF
  __int16 v656[4]; // [esp+578h] [ebp-518h] BYREF
  int v657; // [esp+580h] [ebp-510h] BYREF
  __int16 v658; // [esp+584h] [ebp-50Ch]
  __int16 v659; // [esp+588h] [ebp-508h]
  __int16 v660[4]; // [esp+58Ch] [ebp-504h] BYREF
  int v661; // [esp+594h] [ebp-4FCh] BYREF
  int v662; // [esp+598h] [ebp-4F8h]
  __int64 v663; // [esp+59Ch] [ebp-4F4h]
  int v664; // [esp+5A4h] [ebp-4ECh] BYREF
  _BYTE v665[8]; // [esp+5A8h] [ebp-4E8h] BYREF
  __int16 v666[4]; // [esp+5B0h] [ebp-4E0h] BYREF
  int v667; // [esp+5B8h] [ebp-4D8h] BYREF
  __int16 v668[4]; // [esp+5BCh] [ebp-4D4h] BYREF
  int v669; // [esp+5C4h] [ebp-4CCh] BYREF
  int v670; // [esp+5C8h] [ebp-4C8h] BYREF
  __int16 v671[4]; // [esp+5CCh] [ebp-4C4h] BYREF
  int v672; // [esp+5D4h] [ebp-4BCh] BYREF
  int v673; // [esp+5D8h] [ebp-4B8h] BYREF
  char Buffer[52]; // [esp+5DCh] [ebp-4B4h] BYREF
  __int16 v675; // [esp+610h] [ebp-480h]
  __int16 v676; // [esp+614h] [ebp-47Ch]
  int v677[2]; // [esp+618h] [ebp-478h] BYREF
  __int16 v678[4]; // [esp+620h] [ebp-470h] BYREF
  __int16 v679[4]; // [esp+628h] [ebp-468h] BYREF
  __int16 v680[4]; // [esp+630h] [ebp-460h] BYREF
  unsigned __int8 *v681; // [esp+638h] [ebp-458h] BYREF
  int v682; // [esp+63Ch] [ebp-454h] BYREF
  __int16 v683[4]; // [esp+640h] [ebp-450h] BYREF
  __int16 v684[4]; // [esp+648h] [ebp-448h] BYREF
  int v685; // [esp+650h] [ebp-440h] BYREF
  __int16 v686[4]; // [esp+654h] [ebp-43Ch] BYREF
  __int16 v687; // [esp+65Ch] [ebp-434h]
  __int16 v688[4]; // [esp+660h] [ebp-430h] BYREF
  __int16 v689[4]; // [esp+668h] [ebp-428h] BYREF
  int v690; // [esp+670h] [ebp-420h] BYREF
  int v691; // [esp+674h] [ebp-41Ch]
  __int16 v692; // [esp+678h] [ebp-418h]
  char Destination[1024]; // [esp+67Ch] [ebp-414h] BYREF
  unsigned __int8 *v694; // [esp+A80h] [ebp-10h]
  int v695; // [esp+A8Ch] [ebp-4h]

  v473 = (int)this;
  v474 = 0;
  v694 = *(unsigned __int8 **)(*(this + 3) + 4);
  result = sub_5FC3A0(a2);
  v472 = *(_DWORD *)(v473 + 20);
  switch ( v472 )
  {
    case 0:
      if ( (int)dword_791E50 < 2 )
        goto LABEL_3;
      *(_DWORD *)&dword_791E74 = 0;
      for ( word_791EAC = 0; ; ++word_791EAC )
      {
        v3 = word_791EAC;
        if ( v3 >= sub_47F950() )
          break;
        for ( word_791EA8 = 0; ; ++word_791EA8 )
        {
          v4 = word_791EA8;
          if ( v4 >= sub_47F950() )
            break;
          v5 = sub_47E390(word_791EAC);
          if ( sub_4C6CB0(v5) )
          {
            v6 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_791EA8);
            if ( Concurrency::details::SchedulerProxy::GetQueueLength(v6) == 1 )
            {
              if ( sub_47E190((_DWORD *)dword_791364) == 3 )
              {
                LOWORD(v363) = (_WORD)dword_791E50;
                LOWORD(v362) = word_791EA8;
                sub_47E390(word_791EAC);
                sub_4CEB90(v362, v363);
              }
              else if ( sub_47E190((_DWORD *)dword_791364) != 4 || sub_47E280((_DWORD *)dword_791364) )
              {
                if ( sub_47E190((_DWORD *)dword_791364) == 4 && sub_47E280((_DWORD *)dword_791364) == 2 )
                {
                  LOWORD(v363) = (_WORD)dword_791E50;
                  LOWORD(v362) = word_791EA8;
                  sub_47E390(word_791EAC);
                  sub_4D3F70(v362, v363);
                }
                else if ( sub_47E190((_DWORD *)dword_791364) == 5 )
                {
                  LOWORD(v363) = (_WORD)dword_791E50;
                  LOWORD(v362) = word_791EA8;
                  sub_47E390(word_791EAC);
                  sub_4EE830(v362, v363);
                }
                else if ( sub_47E190((_DWORD *)dword_791364) == 6 )
                {
                  LOWORD(v363) = (_WORD)dword_791E50;
                  LOWORD(v362) = word_791EA8;
                  sub_47E390(word_791EAC);
                  sub_4F0CF0(v362, v363);
                }
              }
              else
              {
                LOWORD(v363) = (_WORD)dword_791E50;
                LOWORD(v362) = word_791EA8;
                sub_47E390(word_791EAC);
                sub_4D1340(v362, v363);
              }
              sub_47E390(word_791EAC);
              sub_4C6ED0(0);
              v7 = sub_47E390(word_791EAC);
              v8 = sub_4C6E70(v7);
              if ( v8 > sub_62FBF0(100) )
              {
                sub_47E390(word_791EAC);
                sub_4C6ED0(1);
              }
            }
          }
        }
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 1);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 4);
    case 1:
      for ( dword_791EA4 = 0; dword_791EA4 < sub_47F950(); ++dword_791EA4 )
      {
        v9 = sub_47E390(dword_791EA4);
        if ( sub_4C6CB0(v9) == 2 || byte_791360 )
        {
          sub_47E390(dword_791EA4);
          sub_4C7360();
          v10 = sub_47E390(dword_791EA4);
          sub_4C76E0(v10);
        }
      }
      if ( sub_47D6B0((_DWORD *)dword_791364) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 3);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 2);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 4);
    case 2:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      v11 = sub_47BBC0((_DWORD *)dword_791364);
      sub_47E400((_DWORD *)dword_791364, v11);
      do
      {
        sub_47E440((_DWORD *)dword_791364);
        v12 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      }
      while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v12) );
      LOWORD(v363) = ((int)dword_791E50 > 2) + word_71EDC4;
      v13 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v13);
      sub_4F5530(ExecutingContext, v363);
      if ( (int)dword_791E50 <= 2 )
      {
        v17 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
        dword_791E3C = sub_4C3F40(v17);
        sub_47E500();
      }
      else
      {
        v15 = CAtlTraceProcess::Base((CAtlTraceProcess *)dword_791364);
        dword_791E3C = sub_4C3F40(v15);
        sub_47E500();
        if ( dword_791E3C < 0 )
          sub_5E9F20((char)"nNextPlayer >= 0", "..\\Casino\\PokerHoldScript.cpp", 859);
        v16 = sub_47E490(
                (Concurrency::details::VirtualProcessor **)dword_791364,
                (struct Concurrency::IExecutionContext *)dword_791E3C);
        sub_47E400((_DWORD *)dword_791364, v16);
        dword_791E3C = sub_4C4070();
        sub_47E500();
      }
      if ( dword_791E3C >= 0 )
        goto LABEL_625;
      if ( dword_791E3C == -3 )
        goto LABEL_46;
      sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 880);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
    case 3:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      if ( byte_791E38 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 13);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 30);
      }
      else
      {
        v18 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v18);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v19 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( Concurrency::details::SchedulerProxy::GetQueueLength(v19) != 1 );
        LOWORD(v363) = word_71EDC4;
        v20 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
        v21 = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v20);
        sub_4F5530(v21, v363);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 4);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      }
    case 4:
      v22 = sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v22) != 2 || *(_BYTE *)(dword_791364 + 200) )
      {
        sub_47E3B0((void *)dword_791364);
        sub_4DC4D0(99, 0);
      }
      *(_BYTE *)(dword_791364 + 232) = 1;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 5);
      v23 = sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v23) == 2 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      v24 = sub_47CBA0();
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, v24);
    case 5:
      if ( byte_791E84 )
      {
        byte_791E84 = 0;
        dword_791EA0 = 5;
      }
      else
      {
        dword_791EA0 = sub_4C4290();
      }
      if ( dword_791EA0 == 5 )
      {
        v692 = 0;
        switch ( dword_791E7C )
        {
          case 5:
            v692 = 0;
            break;
          case 2:
            v692 = 2;
            break;
          case 1:
            v692 = 1;
            break;
          case 4:
            v692 = 2;
            break;
          case 3:
            v692 = 1;
            break;
          default:
            if ( dword_791E7C )
              sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 948);
            else
              v692 = 3;
            break;
        }
        v25 = (unsigned __int8 *)sub_47D6B0((_DWORD *)dword_791364);
        if ( v25 )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56)
            || (v29 = sub_4F67D0(dword_791364 + 56),
                v30 = sub_47E3B0((void *)dword_791364),
                v31 = sub_4C6A70(v30),
                v29 < v31 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364)) )
          {
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), -1, 0, 0, v692);
          }
          else
          {
            sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), 0, 0, 0, v692);
          }
        }
        else if ( *(_DWORD *)&dword_791E74 )
        {
          LOWORD(v25) = v692;
          v363 = (unsigned int)v25;
          v28 = sub_4C3BB0();
          sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), v28, 0, 0, v363);
        }
        else
        {
          LOWORD(v26) = v692;
          v363 = (unsigned int)v26;
          v27 = sub_4C3BB0();
          sub_467FE0(*(_DWORD *)(dword_791EB8 + 156), v27, 1, 0, v363);
        }
        v32 = sub_47E3B0((void *)dword_791364);
        sub_4DC490(v32);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 8);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      }
      else
      {
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (dword_791EA0 == 2 || dword_791EA0 == 4) )
        {
          v33 = sub_47E3B0((void *)dword_791364);
          dword_791E44 = sub_4C7970(v33);
        }
        v34 = sub_47E3B0((void *)dword_791364);
        sub_4DC490(v34);
        if ( dword_791EA0 == 2 && sub_47D6B0((_DWORD *)dword_791364) == 1 )
        {
          v35 = sub_47E3B0((void *)dword_791364);
          v36 = sub_4C6A70(v35);
          v691 = v36 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          if ( v691 < (int)CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364) )
            dword_791EA0 = 1;
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 9);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      }
    case 6:
      if ( !CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) )
        goto LABEL_533;
      if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) == 2 )
      {
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          dword_791EA0 = 2;
        else
          dword_791EA0 = 4;
      }
      else if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) == 1 )
      {
        if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
          dword_791EA0 = 1;
        else
          dword_791EA0 = 3;
      }
      else
      {
        if ( CMFCBaseTabCtrl::IsAutoColor(*(CMFCBaseTabCtrl **)(dword_791EB8 + 156)) != 3 )
        {
LABEL_533:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 6);
          return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
        }
        dword_791EA0 = 0;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 10);
      v362 = dword_791EA0;
      sub_47E3B0((void *)dword_791364);
      return sub_4CC890(v362, v473);
    case 8:
      if ( sub_47E190((_DWORD *)dword_791364) == 3 )
      {
        if ( sub_47E280((_DWORD *)dword_791364) )
          sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGH", "..\\Casino\\PokerHoldScript.cpp", 1001);
        sub_47E3B0((void *)dword_791364);
        sub_4C7C40(v689);
        v695 = 0;
        sub_4C7C40(v688);
        LOBYTE(v695) = 1;
        sub_4846A0(v689, (int)v688);
        sub_485940(v689, &v690, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v695) = 2;
        LOBYTE(v363) = *sub_4A2160(&v690, &v599);
        sub_47E3B0((void *)dword_791364);
        sub_4DA4D0(v363);
        v687 = sub_48F150(v688);
        v471 = v687 - 1;
        switch ( v687 )
        {
          case 1:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1024);
            goto LABEL_102;
          case 2:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1029);
            v39 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v39);
            v40 = sub_630F40("SID_POKER_FLUSHDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v40);
            break;
          case 3:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1034);
            v41 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v41);
            v42 = sub_630F40("SID_POKER_FLUSHUNLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v42);
            break;
          case 4:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1039);
            goto LABEL_111;
          case 5:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1044);
            v45 = sub_630F40("SID_POKER_FLUSHLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v45);
            v46 = sub_630F40("SID_POKER_STRAIGHTDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v46);
            break;
          case 6:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1049);
            goto LABEL_117;
          case 7:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1054);
            v49 = sub_630F40("SID_POKER_FLUSHDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v49);
            v50 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v50);
            break;
          case 8:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1059);
            v51 = sub_630F40("SID_POKER_FLUSHDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v51);
            v52 = sub_630F40("SID_POKER_STRAIGHTDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v52);
            break;
          case 9:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1064);
            v53 = sub_630F40("SID_POKER_FLUSHDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v53);
            v54 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v54);
            break;
          case 10:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1069);
            v55 = sub_630F40("SID_POKER_FLUSHUNLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v55);
            v56 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v56);
            break;
          case 11:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1074);
            v57 = sub_630F40("SID_POKER_FLUSHUNLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v57);
            v58 = sub_630F40("SID_POKER_STRAIGHTDEVELOPING");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v58);
            break;
          case 12:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1079);
            v59 = sub_630F40("SID_POKER_FLUSHUNLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v59);
            v60 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v60);
            break;
          case 13:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1084);
            goto LABEL_138;
          case 14:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1089);
            goto LABEL_102;
          case 15:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1094);
            goto LABEL_144;
          case 16:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1099);
            goto LABEL_147;
          case 17:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1104);
            goto LABEL_267;
          case 18:
            if ( !sub_48EDF0(v688, 1) )
              goto LABEL_274;
            goto LABEL_272;
          case 19:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1121);
LABEL_144:
            v63 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v63);
            v64 = sub_630F40("SID_POKER_FLUSH1IN2");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v64);
            break;
          case 20:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1126);
LABEL_147:
            v65 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v65);
            v66 = sub_630F40("SID_POKER_FLUSH1IN4");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v66);
            break;
          case 21:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1131);
            goto LABEL_267;
          case 22:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1136);
            v67 = sub_630F40("SID_POKER_STRAIGHTFLUSHORFLUSH");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v67);
            v68 = sub_630F40("SID_POKER_STRAIGHTVERYPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v68);
            break;
          case 23:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1141);
LABEL_111:
            v43 = sub_630F40("SID_POKER_STRAIGHTFLUSHORFLUSH");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v43);
            v44 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v44);
            break;
          case 24:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1146);
LABEL_117:
            v47 = sub_630F40("SID_POKER_FLUSHLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v47);
            v48 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v48);
            break;
          case 25:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1151);
            goto LABEL_173;
          case 26:
            if ( !sub_48EDF0(v688, 1) )
              goto LABEL_295;
            goto LABEL_294;
          case 27:
            if ( !sub_48EDF0(v688, 1) )
              goto LABEL_299;
            goto LABEL_298;
          case 28:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1170);
            v71 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v71);
            v72 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v72);
            break;
          case 29:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1175);
            goto LABEL_183;
          case 30:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1180);
            v75 = sub_630F40("SID_POKER_FLUSH1IN2");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v75);
            v76 = sub_630F40("SID_POKER_STRAIGHTVERYPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v76);
            break;
          case 31:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1185);
            v77 = sub_630F40("SID_POKER_FLUSH1IN2");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v77);
            v78 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v78);
            break;
          case 32:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1190);
            v79 = sub_630F40("SID_POKER_FLUSH1IN2");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v79);
            v80 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v80);
            break;
          case 33:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1195);
            v81 = sub_630F40("SID_POKER_FLUSH1IN2");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v81);
            v82 = sub_630F40("SID_POKER_NOSTRAIGHTSPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v82);
            break;
          case 34:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1200);
            v83 = sub_630F40("SID_POKER_FLUSH1IN4");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v83);
            v84 = sub_630F40("SID_POKER_STRAIGHTVERYPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v84);
            break;
          case 35:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1205);
            v85 = sub_630F40("SID_POKER_FLUSH1IN4");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v85);
            v86 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v86);
            break;
          case 36:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1210);
            v87 = sub_630F40("SID_POKER_FLUSH1IN4");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v87);
            v88 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v88);
            break;
          case 37:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1215);
            v89 = sub_630F40("SID_POKER_FLUSH1IN4");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v89);
            v90 = sub_630F40("SID_POKER_NOSTRAIGHTSPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v90);
            break;
          case 38:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1220);
            goto LABEL_210;
          case 39:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1225);
            goto LABEL_213;
          case 40:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1230);
            v95 = sub_630F40("SID_POKER_NOFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v95);
            v96 = sub_630F40("SID_POKER_NOSTRAIGHTS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v96);
            break;
          case 41:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1235);
            v97 = sub_630F40("SID_POKER_NOFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v97);
            v98 = sub_630F40("SID_POKER_NOSTRAIGHTSPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v98);
            break;
          case 42:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1240);
            v99 = sub_630F40("SID_POKER_STRAIGHTFLUSHONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v99);
            v100 = sub_630F40("SID_POKER_ALLHANDSWIN");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v100);
            break;
          case 43:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1245);
            v101 = sub_630F40("SID_POKER_STRAIGHTFLUSHONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v101);
            v102 = sub_630F40("SID_POKER_BETTERSTRAITFLUSHPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v102);
            break;
          case 44:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1250);
            v103 = sub_630F40("SID_POKER_FOUROFAKINDONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v103);
            v104 = sub_630F40("SID_POKER_ALLHANDSWIN");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v104);
            break;
          case 45:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1255);
LABEL_138:
            v61 = sub_630F40("SID_POKER_FOUROFAKINDONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v61);
            v62 = sub_630F40("SID_POKER_BEST5THCARDWINS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v62);
            break;
          case 46:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1260);
            v105 = sub_630F40("SID_POKER_FOUROFAKINDPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v105);
            v106 = sub_630F40("SID_POKER_FULLHOUSEONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v106);
            break;
          case 47:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1265);
            goto LABEL_237;
          case 48:
            if ( !sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1270);
LABEL_237:
            v107 = sub_630F40("SID_POKER_STRAIGHTFLUSHPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v107);
            v108 = sub_630F40("SID_POKER_FLUSHONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v108);
            break;
          case 49:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1275);
            v109 = sub_630F40("SID_POKER_FLUSHONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v109);
            v110 = sub_630F40("SID_POKER_HIGHFLUSHWINS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v110);
            break;
          case 50:
            if ( sub_48EDF0(v688, 1) )
            {
              v111 = sub_630F40("SID_POKER_STRAIGHTFLUSHPOSSIBLE");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v111);
              v112 = sub_630F40("SID_POKER_FLUSHLIKELY_STRAIGHTONBOARD");
            }
            else
            {
              v113 = sub_630F40("SID_POKER_FLUSHLIKELY");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v113);
              v112 = sub_630F40("SID_POKER_STRAIGHTONBOARD");
            }
            goto LABEL_273;
          case 51:
            if ( sub_48EDF0(v688, 1) )
              v114 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FLUSH");
            else
              v114 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v114);
            v115 = sub_630F40("SID_POKER_STRAIGHTONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v115);
            break;
          case 52:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1299);
            v116 = sub_630F40("SID_POKER_STRAIGHTONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v116);
            v117 = sub_630F40("SID_POKER_ALLHANDSWIN");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v117);
            break;
          case 53:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1304);
            v118 = sub_630F40("SID_POKER_STRAIGHTONBOARD");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v118);
            v119 = sub_630F40("SID_POKER_BETTERSTRAITPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v119);
            break;
          case 54:
            if ( sub_484BF0(v688) == 3 )
            {
              if ( sub_48EDF0(v688, 1) )
                v120 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FOUROFAKIND");
              else
                v120 = sub_630F40("SID_POKER_FOUROFAKINDPOSSIBLE");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v120);
              v121 = sub_630F40("SID_POKER_FULLHOUSELIKELY_FLUSHPOSSIBLE");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                *(_DWORD *)(dword_791364 + 224),
                v121);
            }
            else
            {
LABEL_102:
              v37 = sub_630F40("SID_POKER_FOUROFAKINDPOSSIBLE");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v37);
              v38 = sub_630F40("SID_POKER_FULLHOUSELIKELY");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                *(_DWORD *)(dword_791364 + 224),
                v38);
            }
            break;
          case 55:
            if ( !sub_48EDF0(v688, 1) )
              goto LABEL_274;
            goto LABEL_272;
          case 56:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1336);
LABEL_267:
            v122 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v122);
            v123 = sub_630F40("SID_POKER_NOFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v123);
            break;
          case 57:
            if ( sub_48EDF0(v688, 1) )
            {
              v124 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FOUROFAKIND");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v124);
              v112 = sub_630F40("SID_POKER_FULLHOUSE_FLUSHLIKELY");
            }
            else
            {
              v125 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v125);
              v112 = sub_630F40("SID_POKER_FLUSHLIKELY");
            }
            goto LABEL_273;
          case 58:
            if ( sub_48EDF0(v688, 1) )
            {
LABEL_272:
              v126 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FOUROFAKIND");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v126);
              v112 = sub_630F40("SID_POKER_FULLHOUSE_FLUSH");
            }
            else
            {
LABEL_274:
              v127 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                *(_DWORD *)(dword_791364 + 220),
                v127);
              v112 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
            }
LABEL_273:
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v112);
            break;
          case 59:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1365);
            v128 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v128);
            v129 = sub_630F40("SID_POKER_NOFLUSHES_STRAIGHTVERYPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v129);
            break;
          case 60:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1370);
            v130 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v130);
            v131 = sub_630F40("SID_POKER_NOFLUSHES_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v131);
            break;
          case 61:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1375);
            v132 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v132);
            v133 = sub_630F40("SID_POKER_NOSTRAIGHTSORFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v133);
            break;
          case 62:
            if ( sub_48EDF0(v688, 1) )
              v134 = sub_630F40("SID_POKER_STRAIGHTFLUSHORFLUSH");
            else
              v134 = sub_630F40("SID_POKER_FLUSHLIKELY");
            goto LABEL_296;
          case 63:
            if ( sub_48EDF0(v688, 1) )
              v135 = sub_630F40("SID_POKER_STRAIGHTFLUSHORFLUSH");
            else
              v135 = sub_630F40("SID_POKER_FLUSHLIKELY");
            goto LABEL_300;
          case 64:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1394);
LABEL_173:
            v69 = sub_630F40("SID_POKER_FLUSHLIKELY");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v69);
            v70 = sub_630F40("SID_POKER_NOSTRAIGHTSPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v70);
            break;
          case 65:
            if ( sub_48EDF0(v688, 1) )
LABEL_294:
              v134 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FLUSH");
            else
LABEL_295:
              v134 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
LABEL_296:
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v134);
            v136 = sub_630F40("SID_POKER_STRAIGHTVERYPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v136);
            break;
          case 66:
            if ( sub_48EDF0(v688, 1) )
LABEL_298:
              v135 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FLUSH");
            else
LABEL_299:
              v135 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
LABEL_300:
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v135);
            v137 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v137);
            break;
          case 67:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1413);
LABEL_183:
            v73 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v73);
            v74 = sub_630F40("SID_POKER_NOSTRAIGHTSPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v74);
            break;
          case 68:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1418);
LABEL_210:
            v91 = sub_630F40("SID_POKER_NOFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v91);
            v92 = sub_630F40("SID_POKER_STRAIGHTVERYPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v92);
            break;
          case 69:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1423);
LABEL_213:
            v93 = sub_630F40("SID_POKER_NOFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v93);
            v94 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v94);
            break;
          case 70:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1428);
            v138 = sub_630F40("SID_POKER_NOSTRAIGHTSORFLUSHES");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              v138);
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              &Source);
            break;
          default:
            if ( sub_48EDF0(v688, 1) )
              sub_5E9F20(
                (char)"!phWidow.IsHoldemWidowStraightFlushPossible(true)",
                "..\\Casino\\PokerHoldScript.cpp",
                1016);
            sub_47D6B0((_DWORD *)dword_791364);
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
              *(_DWORD *)(dword_791364 + 220),
              &Source);
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              &Source);
            break;
        }
        v139 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 220) + 184))(*(_DWORD *)(dword_791364 + 220));
        strcpy(Destination, v139);
        if ( Destination[0] )
        {
          v141 = (const char *)sub_630F40("SID_POKER_HINT_SHAREDCARDS");
          strcpy(Destination, v141);
          v142 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 220) + 184))(*(_DWORD *)(dword_791364 + 220));
          strcat(Destination, v142);
          strcat(Destination, "\n");
          v143 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 224) + 184))(*(_DWORD *)(dword_791364 + 224));
          strcat(Destination, v143);
        }
        else
        {
          v140 = (const char *)sub_630F40("SID_POKER_PREFLOP");
          strcpy(Destination, v140);
        }
        sub_57BE80(1, 0, Destination);
        LOBYTE(v695) = 1;
        ATL::CComCriticalSection::~CComCriticalSection(&v690);
        LOBYTE(v695) = 0;
        sub_484470(v688);
        v695 = -1;
        sub_484470(v689);
LABEL_521:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 6);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      }
      if ( sub_47E190((_DWORD *)dword_791364) != 4 )
      {
        if ( sub_47E190((_DWORD *)dword_791364) == 5 )
        {
          sub_47E3B0((void *)dword_791364);
          sub_4C7C40(v671);
          v695 = 18;
          v461 = sub_4C7F10(v586, dword_791E74);
          v460 = v461;
          LOBYTE(v695) = 19;
          sub_4846A0(v671, v461);
          LOBYTE(v695) = 18;
          sub_484470(v586);
          sub_485940(v671, &v672, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v695) = 20;
          LOBYTE(v363) = *sub_4A2160(&v672, &v585);
          sub_47E3B0((void *)dword_791364);
          sub_4DA4D0(v363);
          if ( *(_BYTE *)(dword_791364 + 200) )
          {
            if ( *(int *)&dword_791E74 < sub_47F0C0((_DWORD *)dword_791364) )
            {
              if ( sub_47F0C0((_DWORD *)dword_791364) == 1 )
              {
                v182 = sub_630F40("SID_POKER_POT_1STCARD_DETERMINES_SPLIT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v182);
              }
              else if ( sub_47F0C0((_DWORD *)dword_791364) == 2 )
              {
                v183 = sub_630F40("SID_POKER_POT_2NDCARD_DETERMINES_SPLIT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v183);
              }
              else if ( sub_47F0C0((_DWORD *)dword_791364) == 3 )
              {
                v184 = sub_630F40("SID_POKER_POT_3RDCARD_DETERMINES_SPLIT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v184);
              }
              else if ( sub_47F0C0((_DWORD *)dword_791364) == 4 )
              {
                v185 = sub_630F40("SID_POKER_POT_4THCARD_DETERMINES_SPLIT");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v185);
              }
            }
            else
            {
              v363 = dword_79076C;
              v173 = sub_47EE90((_DWORD *)dword_791364, &v584);
              if ( sub_4640B0(v173, (unsigned __int8 *)v363) )
              {
                if ( sub_47EFB0((_DWORD *)dword_791364) )
                  v174 = sub_630F40("SID_POKER_POT_HIGHSPADE_SPLITS");
                else
                  v174 = sub_630F40("SID_POKER_POT_LOWSPADE_SPLITS");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                  *(_DWORD *)(dword_791364 + 220),
                  v174);
              }
              else
              {
                v363 = dword_790754;
                v175 = sub_47EE90((_DWORD *)dword_791364, &v583);
                if ( sub_4640B0(v175, (unsigned __int8 *)v363) )
                {
                  if ( sub_47EFB0((_DWORD *)dword_791364) )
                    v176 = sub_630F40("SID_POKER_POT_HIGHHEART_SPLITS");
                  else
                    v176 = sub_630F40("SID_POKER_POT_LOWHEART_SPLITS");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                    *(_DWORD *)(dword_791364 + 220),
                    v176);
                }
                else
                {
                  v363 = dword_790764;
                  v177 = sub_47EE90((_DWORD *)dword_791364, &v582);
                  if ( sub_4640B0(v177, (unsigned __int8 *)v363) )
                  {
                    if ( sub_47EFB0((_DWORD *)dword_791364) )
                      v178 = sub_630F40("SID_POKER_POT_HIGHDIAMOND_SPLITS");
                    else
                      v178 = sub_630F40("SID_POKER_POT_LOWDIAMOND_SPLITS");
                    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                      *(_DWORD *)(dword_791364 + 220),
                      v178);
                  }
                  else
                  {
                    v363 = dword_790770;
                    v179 = sub_47EE90((_DWORD *)dword_791364, &v581);
                    if ( sub_4640B0(v179, (unsigned __int8 *)v363) )
                    {
                      if ( sub_47EFB0((_DWORD *)dword_791364) )
                      {
                        v180 = sub_630F40("SID_POKER_POT_HIGHCLUB_SPLITS");
                        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                          *(_DWORD *)(dword_791364 + 220),
                          v180);
                      }
                      else
                      {
                        v181 = sub_630F40("SID_POKER_POT_LOWCLUB_SPLITS");
                        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                          *(_DWORD *)(dword_791364 + 220),
                          v181);
                      }
                    }
                  }
                }
              }
            }
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              &Source);
            ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
          }
          LOBYTE(v695) = 18;
          ATL::CComCriticalSection::~CComCriticalSection(&v672);
          v695 = -1;
          sub_484470(v671);
        }
        else if ( sub_47E190((_DWORD *)dword_791364) == 6 )
        {
          if ( sub_47E280((_DWORD *)dword_791364) != 2 )
            sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerHoldScript.cpp", 1806);
          if ( sub_47D7F0((_DWORD *)dword_791364) != 2 )
            sub_5E9F20((char)"pokerGame->GetHighlowRules() == DECLARE", "..\\Casino\\PokerHoldScript.cpp", 1807);
          sub_47E3B0((void *)dword_791364);
          sub_4C7C40(v665);
          v695 = 21;
          sub_484320(v668, (int)v665);
          LOBYTE(v695) = 22;
          LOWORD(v186) = dword_791E74;
          v459 = sub_4C7D30(v580, 1, v186);
          v458 = v459;
          LOBYTE(v695) = 23;
          sub_4846A0(v668, v459);
          LOBYTE(v695) = 22;
          sub_484470(v580);
          sub_485940(v668, &v669, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v695) = 24;
          sub_485940(v668, &v667, 0, 1, 1, 0, 0, 0, 0);
          LOBYTE(v695) = 25;
          sub_484320(v666, (int)v665);
          LOBYTE(v695) = 26;
          LOWORD(v187) = dword_791E74;
          v457 = sub_4C7D30(v579, 0, v187);
          v456 = v457;
          LOBYTE(v695) = 27;
          sub_4846A0(v666, v457);
          LOBYTE(v695) = 26;
          sub_484470(v579);
          sub_485940(v666, &v664, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v695) = 28;
          sub_485940(v666, &v670, 0, 1, 1, 0, 0, 0, 0);
          LOBYTE(v695) = 29;
          if ( *(_DWORD *)&dword_791E74 == 1 || sub_4A2440((unsigned __int8 *)&v664, (unsigned __int8 *)&v669) )
          {
            LOBYTE(v363) = *sub_4A2160(&v664, &v578);
            sub_47E3B0((void *)dword_791364);
            sub_4DA4D0(v363);
          }
          else
          {
            LOBYTE(v363) = *sub_4A2160(&v669, &v577);
            sub_47E3B0((void *)dword_791364);
            sub_4DA4D0(v363);
          }
          if ( *(_DWORD *)&dword_791E74 == 1 || sub_4A2550((unsigned __int8 *)&v670, (unsigned __int8 *)&v667) )
          {
            LOBYTE(v363) = v670;
            sub_47E3B0((void *)dword_791364);
            sub_4DB070(v363);
          }
          else
          {
            LOBYTE(v363) = v667;
            sub_47E3B0((void *)dword_791364);
            sub_4DB070(v363);
          }
          if ( *(_BYTE *)(dword_791364 + 200) )
          {
            if ( *(_DWORD *)&dword_791E74 )
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
              if ( ++word_791E9C > 3 )
                word_791E9C = 1;
              switch ( word_791E9C )
              {
                case 1:
                  v188 = sub_630F40("SID_POKER_INDENT_BESTLOWHAND");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                    *(_DWORD *)(dword_791364 + 220),
                    v188);
                  v189 = sub_630F40("SID_POKER_INDENT_USEROWCOL");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                    *(_DWORD *)(dword_791364 + 224),
                    v189);
                  break;
                case 2:
                  v190 = sub_630F40("SID_POKER_INDENT_BESTLOWHAND");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                    *(_DWORD *)(dword_791364 + 220),
                    v190);
                  v191 = sub_630F40("SID_POKER_INDENT_HILOMUSTWINBOTH");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                    *(_DWORD *)(dword_791364 + 224),
                    v191);
                  break;
                case 3:
                  v192 = sub_630F40("SID_POKER_INDENT_HILOMUSTWINBOTH");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
                    *(_DWORD *)(dword_791364 + 220),
                    v192);
                  v193 = sub_630F40("SID_POKER_INDENT_USEROWCOL");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
                    *(_DWORD *)(dword_791364 + 224),
                    v193);
                  break;
                default:
                  sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 1858);
                  break;
              }
            }
            ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
          }
          LOBYTE(v695) = 28;
          ATL::CComCriticalSection::~CComCriticalSection(&v670);
          LOBYTE(v695) = 26;
          ATL::CComCriticalSection::~CComCriticalSection(&v664);
          LOBYTE(v695) = 25;
          sub_484470(v666);
          LOBYTE(v695) = 24;
          ATL::CComCriticalSection::~CComCriticalSection(&v667);
          LOBYTE(v695) = 22;
          ATL::CComCriticalSection::~CComCriticalSection(&v669);
          LOBYTE(v695) = 21;
          sub_484470(v668);
          v695 = -1;
          sub_484470(v665);
        }
        goto LABEL_521;
      }
      sub_4C7C40(v686);
      v695 = 3;
      if ( sub_47E280((_DWORD *)dword_791364) )
      {
        if ( sub_47E280((_DWORD *)dword_791364) != 2 )
          sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerHoldScript.cpp", 1464);
        sub_47E3B0((void *)dword_791364);
        sub_4C7C40(v679);
        LOBYTE(v695) = 8;
        sub_4C7C40(v677);
        LOBYTE(v695) = 9;
        sub_48CC10(v679, &v682, (int)v677, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v695) = 10;
        sub_48CC10(v679, &v681, (int)v677, 0, 0, 1, 0, 0, 0, 0);
        LOBYTE(v695) = 11;
        sub_48C7B0(v679, v678, (int)v677, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v695) = 12;
        sub_48C7B0(v679, v680, (int)v677, 0, 0, 1, 0, 0, 0, 0);
        LOBYTE(v695) = 13;
        LOBYTE(v363) = *sub_4A2160(&v682, &v596);
        sub_47E3B0((void *)dword_791364);
        sub_4DA4D0(v363);
        v363 = 1;
        v595 = &v361;
        v468 = sub_484320((__int16 *)&v361, (int)v678);
        v467 = v468;
        LOBYTE(v695) = 14;
        sub_47E3B0((void *)dword_791364);
        LOBYTE(v695) = 13;
        sub_4C88A0(v361, v362, v363);
        if ( sub_47D7F0((_DWORD *)dword_791364) != 1 )
          sub_5E9F20(
            (char)"pokerGame->GetHighlowRules() == NODECLARE_EIGHTSORBETTER",
            "..\\Casino\\PokerHoldScript.cpp",
            1476);
        sub_4A20D0(v593);
        v466 = v144;
        v465 = v144;
        LOBYTE(v695) = 15;
        v145 = (unsigned __int8 *)sub_4A2100(
                                    v144,
                                    (_BYTE *)dword_791390,
                                    (_BYTE *)dword_7913F4,
                                    (unsigned __int8 *)&byte_7913FF,
                                    (unsigned __int8 *)&byte_7913FF,
                                    (unsigned __int8 *)&byte_7913FF,
                                    (unsigned __int8 *)&byte_7913FF);
        v594 = sub_4A2550((unsigned __int8 *)&v681, v145);
        LOBYTE(v695) = 13;
        ATL::CComCriticalSection::~CComCriticalSection(v593);
        if ( v594 )
        {
          v363 = (unsigned int)v681;
          sub_47E3B0((void *)dword_791364);
          sub_4DB070(v363);
          v363 = 2;
          v592 = &v361;
          v464 = sub_484320((__int16 *)&v361, (int)v680);
          v463 = v464;
          LOBYTE(v695) = 16;
          sub_47E3B0((void *)dword_791364);
          LOBYTE(v695) = 13;
          sub_4C88A0(v361, v362, v363);
        }
        LOBYTE(v695) = 12;
        sub_484470(v680);
        LOBYTE(v695) = 11;
        sub_484470(v678);
        LOBYTE(v695) = 10;
        ATL::CComCriticalSection::~CComCriticalSection(&v681);
        LOBYTE(v695) = 9;
        ATL::CComCriticalSection::~CComCriticalSection(&v682);
        LOBYTE(v695) = 8;
        sub_484470(v677);
        LOBYTE(v695) = 3;
        sub_484470(v679);
      }
      else
      {
        sub_47E3B0((void *)dword_791364);
        sub_4C7C40(v684);
        LOBYTE(v695) = 4;
        sub_48C7B0(v684, v683, (int)v686, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v695) = 5;
        sub_48CC10(v684, &v685, (int)v686, 1, 1, 1, 1, 0, 0, 0);
        LOBYTE(v695) = 6;
        LOBYTE(v363) = *sub_4A2160(&v685, &v598);
        sub_47E3B0((void *)dword_791364);
        sub_4DA4D0(v363);
        v363 = 0;
        v597 = &v361;
        v470 = sub_484320((__int16 *)&v361, (int)v683);
        v469 = v470;
        LOBYTE(v695) = 7;
        sub_47E3B0((void *)dword_791364);
        LOBYTE(v695) = 6;
        sub_4C88A0(v361, v362, v363);
        LOBYTE(v695) = 5;
        ATL::CComCriticalSection::~CComCriticalSection(&v685);
        LOBYTE(v695) = 4;
        sub_484470(v683);
        LOBYTE(v695) = 3;
        sub_484470(v684);
      }
      v676 = sub_48F150(v686);
      v462 = v676 - 1;
      switch ( v676 )
      {
        case 1:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1497);
          goto LABEL_419;
        case 2:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1501);
          goto LABEL_419;
        case 3:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1505);
          goto LABEL_419;
        case 4:
          if ( !sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1509);
          v146 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FLUSH_STRAIGHT_POSSIBLE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v146);
          break;
        case 5:
        case 6:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1514);
          goto LABEL_426;
        case 7:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1518);
          goto LABEL_429;
        case 8:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1522);
          goto LABEL_351;
        case 9:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1526);
          goto LABEL_354;
        case 10:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1530);
          goto LABEL_429;
        case 11:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1534);
          goto LABEL_360;
        case 12:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1538);
          v150 = sub_630F40("SID_POKER_NOGOODPOSSIBILITIES");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v150);
          break;
        case 13:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1542);
          goto LABEL_366;
        case 14:
        case 15:
        case 16:
        case 17:
        case 19:
        case 20:
        case 21:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1552);
          goto LABEL_419;
        case 18:
          if ( !sub_48EDF0(v686, 0) )
            goto LABEL_416;
          goto LABEL_412;
        case 22:
        case 23:
        case 26:
        case 27:
          if ( !sub_48EDF0(v686, 0) )
            goto LABEL_423;
          goto LABEL_421;
        case 24:
        case 25:
        case 28:
        case 29:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1574);
          goto LABEL_426;
        case 30:
        case 31:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1579);
          goto LABEL_429;
        case 32:
        case 36:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1584);
LABEL_351:
          v147 = sub_630F40("SID_POKER_FLUSH_STRAIGHT_DEVELOPING");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v147);
          break;
        case 33:
        case 37:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1589);
LABEL_354:
          v148 = sub_630F40("SID_POKER_FLUSHISDEVELOPING");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v148);
          break;
        case 34:
        case 35:
        case 38:
        case 39:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1596);
          goto LABEL_429;
        case 40:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1600);
LABEL_360:
          v149 = sub_630F40("SID_POKER_STRAIGHTDEVELOPING");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v149);
          break;
        case 41:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1604);
          v152 = sub_630F40("SID_POKER_NOFLUSHES_NOSTRAIGHTS");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v152);
          break;
        case 42:
        case 43:
          if ( !sub_48EDF0(v686, 0) )
            goto LABEL_423;
          goto LABEL_421;
        case 44:
        case 45:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1616);
LABEL_366:
          v151 = sub_630F40("SID_POKER_FULLHOUSEPOSSIBLE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v151);
          break;
        case 46:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1620);
          goto LABEL_419;
        case 47:
        case 48:
        case 50:
        case 51:
          if ( !sub_48EDF0(v686, 0) )
            goto LABEL_423;
          goto LABEL_421;
        case 49:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1633);
          goto LABEL_426;
        case 52:
        case 53:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1638);
          goto LABEL_429;
        case 54:
          if ( sub_48EDF0(v686, 0) )
            goto LABEL_412;
          v153 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
          goto LABEL_422;
        case 55:
        case 57:
        case 58:
          if ( sub_48EDF0(v686, 0) )
LABEL_412:
            v153 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FOUROFAKIND");
          else
LABEL_416:
            v153 = sub_630F40("SID_POKER_FOUROFAKIND_FULLHOUSE_FLUSH");
          goto LABEL_422;
        case 56:
        case 59:
        case 60:
        case 61:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1659);
LABEL_419:
          v154 = sub_630F40("SID_POKER_FOUROFAKINDORFULLHOUSEPOSSIBLE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v154);
          break;
        case 62:
        case 63:
        case 65:
        case 66:
          if ( sub_48EDF0(v686, 0) )
LABEL_421:
            v153 = sub_630F40("SID_POKER_STRAIGHTFLUSH_FLUSH_STRAIGHT_POSSIBLE");
          else
LABEL_423:
            v153 = sub_630F40("SID_POKER_FLUSH_STRAIGHT_POSSIBLE");
LABEL_422:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v153);
          break;
        case 64:
        case 67:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1673);
LABEL_426:
          v155 = sub_630F40("SID_POKER_FLUSHPOSSIBLE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v155);
          break;
        case 68:
        case 69:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1678);
LABEL_429:
          v156 = sub_630F40("SID_POKER_STRAIGHTPOSSIBLE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v156);
          break;
        case 70:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1682);
          v157 = sub_630F40("SID_POKER_NOSTRAIGHTSORFLUSHES");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            v157);
          break;
        default:
          if ( sub_48EDF0(v686, 0) )
            sub_5E9F20(
              (char)"!phWidow.IsHoldemWidowStraightFlushPossible(false)",
              "..\\Casino\\PokerHoldScript.cpp",
              1493);
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 220) + 180))(
            *(_DWORD *)(dword_791364 + 220),
            &Source);
          break;
      }
      if ( sub_47E280((_DWORD *)dword_791364) != 2 )
      {
        if ( *(_DWORD *)&dword_791E74 )
        {
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            &Source);
        }
        else
        {
          v167 = sub_630F40("SID_POKER_RULE_3CARDSFROMBOARD");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            v167);
        }
LABEL_457:
        v168 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 220) + 184))(*(_DWORD *)(dword_791364 + 220));
        strcpy(Destination, v168);
        if ( Destination[0] )
        {
          v170 = (const char *)sub_630F40("SID_POKER_HINT_SHAREDCARDS");
          strcpy(Destination, v170);
          v171 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 220) + 184))(*(_DWORD *)(dword_791364 + 220));
          strcat(Destination, v171);
          strcat(Destination, "\n");
          v172 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791364 + 224) + 184))(*(_DWORD *)(dword_791364 + 224));
          strcat(Destination, v172);
        }
        else
        {
          v169 = (const char *)sub_630F40("SID_POKER_PREFLOP_OMAHAHOLDEM");
          strcpy(Destination, v169);
        }
        sub_57BE80(1, 0, Destination);
        v695 = -1;
        sub_484470(v686);
        goto LABEL_521;
      }
      v675 = sub_491870(v686);
      if ( v675 >= 3 )
      {
        sub_4919A0(v686, &v673);
        LOBYTE(v695) = 17;
        v158 = sub_4A22F0(&v673, &v591);
        v363 = (char)sub_4C4A30(v158);
        v159 = sub_4A22A0(&v673, &v590);
        v362 = (char)sub_4C4A30(v159);
        v160 = sub_4A2250(&v673, &v589);
        v361 = (char)sub_4C4A30(v160);
        v161 = sub_4A2200(&v673, &v588);
        v360 = (char)sub_4C4A30(v161);
        v162 = sub_4A21B0(&v673, &v587);
        v359 = (char)sub_4C4A30(v162);
        v163 = (const char *)sub_630F40("SID_POKER_LOWHAND_POSSIBLE_FORMAT");
        sprintf(Buffer, v163, v359, v360);
        (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_791364 + 224) + 180))(
          *(_DWORD *)(dword_791364 + 224),
          Buffer);
        LOBYTE(v695) = 3;
        ATL::CComCriticalSection::~CComCriticalSection(&v673);
        goto LABEL_457;
      }
      if ( !*(_DWORD *)&dword_791E74 )
      {
        if ( sub_47D6B0((_DWORD *)dword_791364) )
          v164 = sub_630F40("SID_POKER_RULE_3CARDSFROMBOARD");
        else
          v164 = sub_630F40("SID_POKER_BLINDOPENANDRAISE");
        goto LABEL_449;
      }
      if ( *(_DWORD *)&dword_791E74 == 3 )
      {
        if ( v675 == 2 )
        {
          v165 = sub_630F40("SID_POKER_LOWHAND_NEEDS1MORE");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            v165);
          goto LABEL_457;
        }
        if ( v675 == 1 )
        {
          v164 = sub_630F40("SID_POKER_LOWHAND_NEEDS2MORE");
LABEL_449:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
            *(_DWORD *)(dword_791364 + 224),
            v164);
          goto LABEL_457;
        }
      }
      else
      {
        if ( *(_DWORD *)&dword_791E74 != 4 )
        {
          if ( *(_DWORD *)&dword_791E74 == 5 )
          {
            v166 = sub_630F40("SID_POKER_LOWHAND_NOTPOSSIBLE");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791364 + 224) + 180))(
              *(_DWORD *)(dword_791364 + 224),
              v166);
          }
          goto LABEL_457;
        }
        if ( v675 == 2 )
        {
          v164 = sub_630F40("SID_POKER_LOWHAND_NEEDS1MORE");
          goto LABEL_449;
        }
      }
      v164 = sub_630F40("SID_POKER_LOWHAND_NOTPOSSIBLE");
      goto LABEL_449;
    case 9:
      switch ( dword_791EA0 )
      {
        case 1:
          dword_791E48 = 2;
          break;
        case 2:
          sub_4C3950(1, 0);
          break;
        case 3:
          sub_4C37F0(1);
          break;
        case 4:
          sub_4C3C70(1, 0);
          break;
        default:
          if ( dword_791EA0 )
            sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 1998);
          else
            dword_791E48 = 1;
          break;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 10);
      v199 = sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v199) != 1 || !dword_791E48 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      switch ( dword_791E48 )
      {
        case 1:
          v200 = sub_4F6840(dword_791364 + 56);
          v201 = sub_62FBF0(2 * (_DWORD)dword_791E50);
          v202 = v201 + sub_62FBF0(2 * (_DWORD)dword_791E50) + 5;
          if ( v200 <= CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v202 )
          {
            if ( *(_DWORD *)&dword_791E74 != 5
              || sub_47E190((_DWORD *)dword_791364) == 5
              || sub_47E190((_DWORD *)dword_791364) == 6 )
            {
              sub_47E3B0((void *)dword_791364);
              return sub_4CC980(v694);
            }
            else
            {
              sub_47E3B0((void *)dword_791364);
              return sub_4CC9A0(v694);
            }
          }
          else
          {
            sub_47E3B0((void *)dword_791364);
            return sub_4CC9C0(v694);
          }
        case 2:
          sub_47E3B0((void *)dword_791364);
          return sub_4CC9E0(v694);
        case 3:
          if ( sub_47E190((_DWORD *)dword_791364) == 5 || sub_47E190((_DWORD *)dword_791364) == 6 )
          {
            if ( sub_47E190((_DWORD *)dword_791364) == 5 )
            {
              if ( *(_DWORD *)&dword_791E74 == 4 )
                goto LABEL_595;
              if ( *(int *)&dword_791E74 <= 0 || !sub_62FBF0(2) )
                goto LABEL_598;
            }
            else
            {
              if ( sub_47E190((_DWORD *)dword_791364) != 6 )
                return sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 2072);
              if ( *(_DWORD *)&dword_791E74 == 5 )
              {
LABEL_595:
                sub_47E3B0((void *)dword_791364);
                return sub_4CD130(v694);
              }
              if ( *(int *)&dword_791E74 <= 0 || !sub_62FBF0(2) )
                goto LABEL_598;
            }
          }
          else
          {
            if ( *(_DWORD *)&dword_791E74 == 5 )
              goto LABEL_595;
            if ( *(int *)&dword_791E74 < 3 )
            {
              if ( sub_62FBF0(2) )
              {
                sub_47E3B0((void *)dword_791364);
                return sub_4CD150(v694);
              }
              goto LABEL_598;
            }
            if ( !sub_62FBF0(2) )
            {
LABEL_598:
              sub_47E3B0((void *)dword_791364);
              return sub_4CCAE0(v694);
            }
          }
          sub_47E3B0((void *)dword_791364);
          return sub_4CD110(v694);
        case 4:
          if ( sub_47E190((_DWORD *)dword_791364) == 5 )
          {
            if ( *(_DWORD *)&dword_791E74 == 4 )
              goto LABEL_605;
          }
          else if ( *(_DWORD *)&dword_791E74 == 5 )
          {
LABEL_605:
            sub_47E3B0((void *)dword_791364);
            return sub_4CCAB0(v694);
          }
          sub_47E3B0((void *)dword_791364);
          return sub_4CCA60(v694);
        case 5:
          if ( sub_47E190((_DWORD *)dword_791364) == 5 )
          {
            if ( *(_DWORD *)&dword_791E74 == 4 )
              goto LABEL_612;
          }
          else if ( *(_DWORD *)&dword_791E74 == 5 )
          {
LABEL_612:
            sub_47E3B0((void *)dword_791364);
            return sub_4CCA20(v694);
          }
          sub_47E3B0((void *)dword_791364);
          return sub_4CCA00(v694);
      }
      if ( dword_791E48 != 6 )
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      sub_47E3B0((void *)dword_791364);
      return sub_4CCA90(v694);
    case 10:
      v194 = sub_47E3B0((void *)dword_791364);
      sub_4DA890(v194);
      v195 = sub_47E3B0((void *)dword_791364);
      sub_4DB610(v195);
      v196 = sub_47E3B0((void *)dword_791364);
      sub_4C8EB0(v196);
      sub_47EC50((_DWORD **)dword_791364);
      switch ( dword_791EA0 )
      {
        case 1:
          dword_791E3C = (__int16)sub_4F5760(dword_791364 + 56);
          sub_47E3B0((void *)dword_791364);
          sub_4DC4D0(5, 0);
          break;
        case 2:
          if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
            dword_791E3C = sub_4C3950(0, dword_791E44);
          else
            dword_791E3C = sub_4C3950(0, 0);
LABEL_542:
          sub_47E500();
          break;
        case 3:
          dword_791E3C = sub_4C37F0(0);
          sub_47E500();
          break;
        case 4:
          if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
            dword_791E3C = sub_4C3C70(0, dword_791E44);
          else
            dword_791E3C = sub_4C3C70(0, 0);
          goto LABEL_542;
        default:
          if ( dword_791EA0 )
          {
            sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 1981);
          }
          else
          {
            v197 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
            Concurrency::details::SchedulerProxy::SetQueueLength(v197, 3u);
            v198 = sub_47E3B0((void *)dword_791364);
            sub_4C7230(v198);
            sub_47E3B0((void *)dword_791364);
            sub_4DC4D0(4, 0);
            dword_791E3C = (__int16)sub_4F62E0(dword_791364 + 56);
            --dword_791E40;
          }
          break;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 11);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 20);
    case 11:
      *(_BYTE *)(dword_791364 + 232) = 0;
      switch ( dword_791E3C )
      {
        case -1:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 13);
          break;
        case -2:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 26);
          break;
        case -3:
LABEL_46:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 12);
          break;
        default:
LABEL_625:
          v203 = sub_47E490(
                   (Concurrency::details::VirtualProcessor **)dword_791364,
                   (struct Concurrency::IExecutionContext *)dword_791E3C);
          sub_47E400((_DWORD *)dword_791364, v203);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 4);
          break;
      }
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
    case 12:
      if ( sub_4F6420(dword_791364 + 56) > 0 )
      {
        v204 = sub_4F6420(dword_791364 + 56);
        v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v204;
        v205 = sub_4F64B0(dword_791364 + 56);
        sub_47E3D0(v205);
        sub_4C6B80(v363);
        v206 = sub_4F64B0(dword_791364 + 56);
        v207 = (ATL::CComCriticalSection *)sub_47E3D0(v206);
        ATL::CComCriticalSection::~CComCriticalSection(v207);
        ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)dword_791364);
        v208 = sub_4F6840(dword_791364 + 56);
        sub_47EC90((__int16 *)dword_791364, v208);
        v209 = sub_4F64B0(dword_791364 + 56);
        v662 = *(_DWORD *)(sub_47E3D0(v209) + 4);
        v210 = sub_4F6420(dword_791364 + 56);
        v211 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v576 = sub_64C8A0(v211 * v210, 0);
        v663 = v576;
        sub_5E7E40(v662, 7, v576, HIDWORD(v576));
      }
      byte_791E38 = 1;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 13);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 4);
    case 13:
      *(_DWORD *)(dword_791364 + 1040) = 0;
      if ( *(_DWORD *)&dword_791E74 == 5 )
      {
        byte_791E39 = 1;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 23);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 14);
      }
      return sub_5FC490(1);
    case 14:
      for ( dword_791E98 = 0; dword_791E98 < sub_47F950(); ++dword_791E98 )
      {
        v212 = sub_47E390(dword_791E98);
        sub_4DC490(v212);
      }
      sub_47B010(dword_791364, *(Concurrency::details::VirtualProcessor **)(dword_791364 + 36), 1, 1, v473, 0, 0, 0);
      if ( ++*(_DWORD *)&dword_791E74 == 3 )
      {
        for ( word_791EAC = 0; ; ++word_791EAC )
        {
          v213 = word_791EAC;
          if ( v213 >= sub_47F950() )
            break;
          for ( word_791EA8 = 0; ; ++word_791EA8 )
          {
            v214 = word_791EA8;
            if ( v214 >= sub_47F950() )
              break;
            v215 = sub_47E390(word_791EAC);
            if ( sub_4C6CB0(v215) )
            {
              v216 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_791EA8);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v216) == 1 )
              {
                if ( sub_47E190((_DWORD *)dword_791364) == 3 )
                {
                  LOWORD(v363) = (_WORD)dword_791E50;
                  LOWORD(v362) = word_791EA8;
                  sub_47E390(word_791EAC);
                  sub_4CEE10(v362, v363);
                }
                else if ( sub_47E190((_DWORD *)dword_791364) != 4 || sub_47E280((_DWORD *)dword_791364) )
                {
                  if ( sub_47E190((_DWORD *)dword_791364) == 4 && sub_47E280((_DWORD *)dword_791364) == 2 )
                  {
                    LOWORD(v363) = (_WORD)dword_791E50;
                    LOWORD(v362) = word_791EA8;
                    sub_47E390(word_791EAC);
                    sub_4D4250(v362, v363);
                  }
                }
                else
                {
                  LOWORD(v363) = (_WORD)dword_791E50;
                  LOWORD(v362) = word_791EA8;
                  sub_47E390(word_791EAC);
                  sub_4D1620(v362, v363);
                }
              }
            }
          }
        }
      }
      if ( *(int *)&dword_791E74 >= 3 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 3);
      else
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 14);
    case 15:
      for ( dword_791E98 = 0; dword_791E98 < sub_47F950(); ++dword_791E98 )
      {
        v217 = sub_47E390(dword_791E98);
        sub_4DC490(v217);
      }
      v218 = sub_47E190((_DWORD *)dword_791364);
      v219 = sub_60CA40(4 - (v218 != 6) - *(_DWORD *)&dword_791E74);
      sub_463D40(v219);
      if ( sub_47E190((_DWORD *)dword_791364) == 6 )
      {
        v455 = *(_DWORD *)&dword_791E74;
        switch ( *(_DWORD *)&dword_791E74 )
        {
          case 0:
            v454 = *(_DWORD *)(sub_60CA40(4 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v454 + 108))(v454, 100);
            break;
          case 1:
            v453 = *(_DWORD *)(sub_60CA40(4 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v453 + 108))(v453, 101);
            break;
          case 2:
            v452 = *(_DWORD *)(sub_60CA40(4 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v452 + 108))(v452, 104);
            break;
          case 3:
            v451 = *(_DWORD *)(sub_60CA40(4 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v451 + 108))(v451, 103);
            break;
          case 4:
            v450 = *(_DWORD *)(sub_60CA40(4 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v450 + 108))(v450, 102);
            break;
          default:
            break;
        }
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 5 )
      {
        v449 = *(_DWORD *)&dword_791E74;
        switch ( *(_DWORD *)&dword_791E74 )
        {
          case 0:
            v448 = *(_DWORD *)(sub_60CA40(3 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v448 + 108))(v448, 95);
            break;
          case 1:
            v447 = *(_DWORD *)(sub_60CA40(3 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v447 + 108))(v447, 96);
            break;
          case 2:
            v446 = *(_DWORD *)(sub_60CA40(3 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v446 + 108))(v446, 97);
            break;
          case 3:
            v445 = *(_DWORD *)(sub_60CA40(3 - *(_DWORD *)&dword_791E74) + 8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v445 + 108))(v445, 98);
            break;
          default:
            break;
        }
      }
      else
      {
        sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 2256);
      }
      ++*(_DWORD *)&dword_791E74;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 3);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 15);
    case 23:
      for ( dword_791E98 = 0; dword_791E98 < sub_47F950(); ++dword_791E98 )
      {
        v220 = sub_47E390(dword_791E98);
        sub_4DC490(v220);
      }
      if ( (unsigned __int8)sub_4F6C80(dword_791364 + 56) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 24);
      else
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 27);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
    case 24:
      if ( (__int16)sub_4F6E70(dword_791364 + 56) == -1 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 25);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 10);
      }
      else
      {
        v221 = sub_4F6E70(dword_791364 + 56);
        v222 = (Concurrency::details::SchedulerProxy *)sub_47E3D0(v221);
        if ( Concurrency::details::SchedulerProxy::GetQueueLength(v222) == 3 )
          sub_5E9F20(
            (char)"pokerGame->GetPokerPlayerWithPotIndex( pokerGame->thePot.GetShowdownPlayer() )->GetPlayerStatus() != FOLDED",
            "..\\Casino\\PokerHoldScript.cpp",
            2282);
        v223 = sub_4F6E70(dword_791364 + 56);
        v224 = (Concurrency::details::SchedulerProxy *)sub_47E3D0(v223);
        if ( !Concurrency::details::SchedulerProxy::GetQueueLength(v224) )
          sub_5E9F20(
            (char)"pokerGame->GetPokerPlayerWithPotIndex( pokerGame->thePot.GetShowdownPlayer() )->GetPlayerStatus() != NOTPLAYING",
            "..\\Casino\\PokerHoldScript.cpp",
            2283);
        v225 = sub_4F6E70(dword_791364 + 56);
        v226 = (ATL::CAtlWinModule *)sub_47E3D0(v225);
        ATL::CAtlWinModule::~CAtlWinModule(v226);
        if ( sub_47E190((_DWORD *)dword_791364) == 3 )
        {
          v659 = sub_4F6E70(dword_791364 + 56);
          if ( sub_47E280((_DWORD *)dword_791364) )
            sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGH", "..\\Casino\\PokerHoldScript.cpp", 2288);
          sub_47E3D0(v659);
          sub_4C7C40(v660);
          v695 = 30;
          if ( word_791D80[sub_47E490(
                             (Concurrency::details::VirtualProcessor **)dword_791364,
                             (struct Concurrency::IExecutionContext *)v659)] == -1 )
          {
            v227 = sub_48DC80(v660);
            word_7919C8[sub_47E490(
                          (Concurrency::details::VirtualProcessor **)dword_791364,
                          (struct Concurrency::IExecutionContext *)v659)] = v227;
          }
          for ( word_791E94 = 0; ; ++word_791E94 )
          {
            v228 = word_791E94;
            if ( v228 >= sub_47F950() )
              break;
            v229 = sub_47E390(word_791E94);
            if ( sub_4C6CB0(v229) )
            {
              LOWORD(v230) = (_WORD)dword_791E50;
              v363 = (unsigned int)v230;
              LOWORD(v362) = word_7919C8[sub_47E490(
                                           (Concurrency::details::VirtualProcessor **)dword_791364,
                                           (struct Concurrency::IExecutionContext *)v659)];
              LOWORD(v361) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)v659);
              sub_47E390(word_791E94);
              sub_4CF3A0(v361, v362, v363);
            }
          }
          v444 = sub_4C7C40(v575);
          v443 = v444;
          LOBYTE(v695) = 31;
          sub_4846A0(v660, v444);
          LOBYTE(v695) = 30;
          sub_484470(v575);
          sub_485940(v660, &v661, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v695) = 32;
          LOBYTE(v363) = *sub_4A2160(&v661, &v574);
          sub_47E3D0(v659);
          sub_4DA4D0(v363);
          sub_4F7050(v659, v661);
          LOBYTE(v695) = 30;
          ATL::CComCriticalSection::~CComCriticalSection(&v661);
          v695 = -1;
          sub_484470(v660);
        }
        else if ( sub_47E190((_DWORD *)dword_791364) == 4 )
        {
          v658 = sub_4F6E70(dword_791364 + 56);
          if ( sub_47E280((_DWORD *)dword_791364) )
          {
            if ( sub_47E280((_DWORD *)dword_791364) != 2 )
              sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerHoldScript.cpp", 2341);
            for ( word_791E94 = 0; ; ++word_791E94 )
            {
              v233 = word_791E94;
              if ( v233 >= sub_47F950() )
                break;
              v234 = sub_47E390(word_791E94);
              if ( sub_4C6CB0(v234) )
              {
                LOWORD(v363) = (_WORD)dword_791E50;
                LOWORD(v362) = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v658);
                sub_47E390(word_791E94);
                sub_4D4810(v362, v363);
              }
            }
            sub_47E3D0(v658);
            sub_4C7C40(v651);
            v695 = 41;
            sub_4C7C40(v649);
            LOBYTE(v695) = 42;
            sub_48CC10(v651, &v654, (int)v649, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 43;
            sub_48CC10(v651, &v653, (int)v649, 0, 0, 1, 0, 0, 0, 0);
            LOBYTE(v695) = 44;
            sub_48C7B0(v651, v650, (int)v649, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 45;
            sub_48C7B0(v651, v652, (int)v649, 0, 0, 1, 0, 0, 0, 0);
            LOBYTE(v695) = 46;
            LOBYTE(v363) = *sub_4A2160(&v654, &v569);
            sub_47E3D0(v658);
            sub_4DA4D0(v363);
            v363 = 1;
            v568 = &v361;
            v436 = sub_484320((__int16 *)&v361, (int)v650);
            v435 = v436;
            LOBYTE(v695) = 47;
            sub_47E3D0(v658);
            LOBYTE(v695) = 46;
            sub_4C88A0(v361, v362, v363);
            if ( sub_47D7F0((_DWORD *)dword_791364) == 1 )
            {
              sub_4A20D0(v566);
              v434 = v235;
              v433 = v235;
              LOBYTE(v695) = 48;
              v236 = (unsigned __int8 *)sub_4A2100(
                                          v235,
                                          (_BYTE *)dword_791390,
                                          (_BYTE *)dword_7913F4,
                                          (unsigned __int8 *)&byte_7913FF,
                                          (unsigned __int8 *)&byte_7913FF,
                                          (unsigned __int8 *)&byte_7913FF,
                                          (unsigned __int8 *)&byte_7913FF);
              v567 = sub_4A2550((unsigned __int8 *)&v653, v236);
              LOBYTE(v695) = 46;
              ATL::CComCriticalSection::~CComCriticalSection(v566);
              if ( v567 )
              {
                v363 = (unsigned int)v653;
                sub_47E3D0(v658);
                sub_4DB070(v363);
                v363 = 2;
                v565 = &v361;
                v432 = sub_484320((__int16 *)&v361, (int)v652);
                v431 = v432;
                LOBYTE(v695) = 49;
                sub_47E3D0(v658);
                LOBYTE(v695) = 46;
                sub_4C88A0(v361, v362, v363);
              }
            }
            else
            {
              v363 = (unsigned int)v653;
              sub_47E3D0(v658);
              sub_4DB070(v363);
              v363 = 2;
              v564 = &v361;
              v430 = sub_484320((__int16 *)&v361, (int)v652);
              v429 = v430;
              LOBYTE(v695) = 50;
              sub_47E3D0(v658);
              LOBYTE(v695) = 46;
              sub_4C88A0(v361, v362, v363);
            }
            sub_4F7220(v658, v654, v653, 0);
            LOBYTE(v695) = 45;
            sub_484470(v652);
            LOBYTE(v695) = 44;
            sub_484470(v650);
            LOBYTE(v695) = 43;
            ATL::CComCriticalSection::~CComCriticalSection(&v653);
            LOBYTE(v695) = 42;
            ATL::CComCriticalSection::~CComCriticalSection(&v654);
            LOBYTE(v695) = 41;
            sub_484470(v649);
            v695 = -1;
            sub_484470(v651);
          }
          else
          {
            for ( word_791E94 = 0; ; ++word_791E94 )
            {
              v231 = word_791E94;
              if ( v231 >= sub_47F950() )
                break;
              v232 = sub_47E390(word_791E94);
              if ( sub_4C6CB0(v232) )
              {
                LOWORD(v363) = (_WORD)dword_791E50;
                LOWORD(v362) = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v658);
                sub_47E390(word_791E94);
                sub_4D1BE0(v362, v363);
              }
            }
            sub_47E3D0(v658);
            sub_4C7C40(v656);
            v695 = 33;
            v442 = sub_4C7C40(v573);
            v441 = v442;
            LOBYTE(v695) = 34;
            sub_48C7B0(v656, v655, v442, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 36;
            sub_484470(v573);
            v440 = sub_4C7C40(v572);
            v439 = v440;
            LOBYTE(v695) = 37;
            sub_48CC10(v656, &v657, v440, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 39;
            sub_484470(v572);
            LOBYTE(v363) = *sub_4A2160(&v657, &v571);
            sub_47E3D0(v658);
            sub_4DA4D0(v363);
            v363 = 0;
            v570 = &v361;
            v438 = sub_484320((__int16 *)&v361, (int)v655);
            v437 = v438;
            LOBYTE(v695) = 40;
            sub_47E3D0(v658);
            LOBYTE(v695) = 39;
            sub_4C88A0(v361, v362, v363);
            sub_4F7050(v658, v657);
            LOBYTE(v695) = 36;
            ATL::CComCriticalSection::~CComCriticalSection(&v657);
            LOBYTE(v695) = 33;
            sub_484470(v655);
            v695 = -1;
            sub_484470(v656);
          }
        }
        else if ( sub_47E190((_DWORD *)dword_791364) == 5 )
        {
          v645 = sub_4F6E70(dword_791364 + 56);
          if ( sub_47E280((_DWORD *)dword_791364) )
            sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGH", "..\\Casino\\PokerHoldScript.cpp", 2382);
          if ( sub_47D770((_DWORD *)dword_791364) != 1 )
            sub_5E9F20(
              (char)"pokerGame->GetSuitSplitRules() == RANDOM_SUITSPLIT",
              "..\\Casino\\PokerHoldScript.cpp",
              2383);
          for ( word_791E94 = 0; ; ++word_791E94 )
          {
            v237 = word_791E94;
            if ( v237 >= sub_47F950() )
              break;
            v238 = sub_47E390(word_791E94);
            if ( sub_4C6CB0(v238) )
            {
              LOWORD(v363) = (_WORD)dword_791E50;
              LOWORD(v362) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)v645);
              sub_47E390(word_791E94);
              sub_4EEDF0(v362, v363);
            }
          }
          sub_47E3D0(v645);
          sub_4C7C40(v646);
          v695 = 51;
          sub_484320(v647, (int)v646);
          LOBYTE(v695) = 52;
          v428 = sub_4C7C40(v563);
          v427 = v428;
          LOBYTE(v695) = 53;
          sub_4846A0(v646, v428);
          LOBYTE(v695) = 52;
          sub_484470(v563);
          sub_485940(v646, &v648, 1, 1, 1, 1, 0, 0, 0);
          LOBYTE(v695) = 54;
          LOBYTE(v363) = *sub_4A2160(&v648, &v562);
          sub_47E3D0(v645);
          sub_4DA4D0(v363);
          LOBYTE(v239) = sub_47EFB0((_DWORD *)dword_791364);
          v363 = (unsigned int)v239;
          v240 = sub_47EE90((_DWORD *)dword_791364, &v561);
          v426 = sub_48D3C0(v647, &v560, *v240, v363);
          v425 = v426;
          LOBYTE(v695) = 55;
          sub_4F7220(v645, v648, *v426, 0);
          LOBYTE(v695) = 54;
          ATL::CComCriticalSection::~CComCriticalSection(&v560);
          LOBYTE(v695) = 52;
          ATL::CComCriticalSection::~CComCriticalSection(&v648);
          LOBYTE(v695) = 51;
          sub_484470(v647);
          v695 = -1;
          sub_484470(v646);
        }
        else if ( sub_47E190((_DWORD *)dword_791364) == 6 )
        {
          v643 = sub_4F6E70(dword_791364 + 56);
          if ( sub_47E280((_DWORD *)dword_791364) != 2 )
            sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerHoldScript.cpp", 2408);
          if ( sub_47D7F0((_DWORD *)dword_791364) != 2 )
            sub_5E9F20((char)"pokerGame->GetHighlowRules() == DECLARE", "..\\Casino\\PokerHoldScript.cpp", 2409);
          if ( !dword_791E54[sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)v643)] )
            sub_5E9F20(
              (char)"declPlayerDeclaration[pokerGame->GetPlayerWithPotIndex(shPlayerIndex)] != PokerPot::CARDSSPEAK",
              "..\\Casino\\PokerHoldScript.cpp",
              2410);
          for ( word_791E94 = 0; ; ++word_791E94 )
          {
            v241 = word_791E94;
            if ( v241 >= sub_47F950() )
              break;
            v242 = sub_47E390(word_791E94);
            if ( sub_4C6CB0(v242) )
            {
              LOWORD(v363) = (_WORD)dword_791E50;
              LOWORD(v362) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)v643);
              sub_47E390(word_791E94);
              sub_4F12B0(v362, v363);
            }
          }
          sub_47E3D0(v643);
          sub_4C7C40(v644);
          v695 = 56;
          if ( dword_791E54[sub_47E490(
                              (Concurrency::details::VirtualProcessor **)dword_791364,
                              (struct Concurrency::IExecutionContext *)v643)] == 1 )
          {
            sub_484320(v641, (int)v644);
            LOBYTE(v695) = 57;
            sub_484320(v640, (int)v644);
            LOBYTE(v695) = 58;
            v424 = sub_4C7D30(v559, 1, 5);
            v423 = v424;
            LOBYTE(v695) = 59;
            sub_4846A0(v641, v424);
            LOBYTE(v695) = 58;
            sub_484470(v559);
            v422 = sub_4C7D30(v558, 0, 5);
            v421 = v422;
            LOBYTE(v695) = 60;
            sub_4846A0(v640, v422);
            LOBYTE(v695) = 58;
            sub_484470(v558);
            sub_485940(v641, &v639, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 61;
            sub_485940(v640, &v638, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 62;
            sub_4A20D0(&v642);
            LOBYTE(v695) = 63;
            if ( sub_4A2440((unsigned __int8 *)&v639, (unsigned __int8 *)&v638) )
              v642 = v639;
            else
              v642 = v638;
            LOBYTE(v363) = *sub_4A2160(&v642, &v557);
            sub_47E3D0(v643);
            sub_4DA4D0(v363);
            v243 = sub_47E490(
                     (Concurrency::details::VirtualProcessor **)dword_791364,
                     (struct Concurrency::IExecutionContext *)v643);
            sub_4F7220(v643, v642, v642, dword_791E54[v243]);
            LOBYTE(v695) = 62;
            ATL::CComCriticalSection::~CComCriticalSection(&v642);
            LOBYTE(v695) = 61;
            ATL::CComCriticalSection::~CComCriticalSection(&v638);
            LOBYTE(v695) = 58;
            ATL::CComCriticalSection::~CComCriticalSection(&v639);
            LOBYTE(v695) = 57;
            sub_484470(v640);
            LOBYTE(v695) = 56;
            sub_484470(v641);
          }
          else if ( dword_791E54[sub_47E490(
                                   (Concurrency::details::VirtualProcessor **)dword_791364,
                                   (struct Concurrency::IExecutionContext *)v643)] == 2 )
          {
            sub_484320(v636, (int)v644);
            LOBYTE(v695) = 64;
            sub_484320(v635, (int)v644);
            LOBYTE(v695) = 65;
            v420 = sub_4C7D30(v556, 1, 5);
            v419 = v420;
            LOBYTE(v695) = 66;
            sub_4846A0(v636, v420);
            LOBYTE(v695) = 65;
            sub_484470(v556);
            v418 = sub_4C7D30(v555, 0, 5);
            v417 = v418;
            LOBYTE(v695) = 67;
            sub_4846A0(v635, v418);
            LOBYTE(v695) = 65;
            sub_484470(v555);
            sub_485940(v636, &v634, 0, 1, 1, 0, 0, 0, 0);
            LOBYTE(v695) = 68;
            sub_485940(v635, &v633, 0, 1, 1, 0, 0, 0, 0);
            LOBYTE(v695) = 69;
            sub_4A20D0(&v637);
            LOBYTE(v695) = 70;
            if ( sub_4A2550((unsigned __int8 *)&v634, (unsigned __int8 *)&v633) )
              v637 = v634;
            else
              v637 = v633;
            LOBYTE(v363) = v637;
            sub_47E3D0(v643);
            sub_4DB070(v363);
            v244 = sub_47E490(
                     (Concurrency::details::VirtualProcessor **)dword_791364,
                     (struct Concurrency::IExecutionContext *)v643);
            sub_4F7220(v643, v637, v637, dword_791E54[v244]);
            LOBYTE(v695) = 69;
            ATL::CComCriticalSection::~CComCriticalSection(&v637);
            LOBYTE(v695) = 68;
            ATL::CComCriticalSection::~CComCriticalSection(&v633);
            LOBYTE(v695) = 65;
            ATL::CComCriticalSection::~CComCriticalSection(&v634);
            LOBYTE(v695) = 64;
            sub_484470(v635);
            LOBYTE(v695) = 56;
            sub_484470(v636);
          }
          else if ( dword_791E54[sub_47E490(
                                   (Concurrency::details::VirtualProcessor **)dword_791364,
                                   (struct Concurrency::IExecutionContext *)v643)] == 3 )
          {
            v245 = sub_47E490(
                     (Concurrency::details::VirtualProcessor **)dword_791364,
                     (struct Concurrency::IExecutionContext *)v643);
            v416 = sub_4C7D30(v554, byte_791E30[v245], 5);
            v415 = v416;
            LOBYTE(v695) = 71;
            sub_4846A0(v644, v416);
            LOBYTE(v695) = 56;
            sub_484470(v554);
            sub_485940(v644, &v632, 1, 1, 1, 1, 0, 0, 0);
            LOBYTE(v695) = 72;
            sub_485940(v644, &v631, 0, 1, 1, 0, 0, 0, 0);
            LOBYTE(v695) = 73;
            LOBYTE(v363) = *sub_4A2160(&v632, &v553);
            sub_47E3D0(v643);
            sub_4DA4D0(v363);
            LOBYTE(v363) = v631;
            sub_47E3D0(v643);
            sub_4DB070(v363);
            v246 = sub_47E490(
                     (Concurrency::details::VirtualProcessor **)dword_791364,
                     (struct Concurrency::IExecutionContext *)v643);
            sub_4F7220(v643, v632, v631, dword_791E54[v246]);
            LOBYTE(v695) = 72;
            ATL::CComCriticalSection::~CComCriticalSection(&v631);
            LOBYTE(v695) = 56;
            ATL::CComCriticalSection::~CComCriticalSection(&v632);
          }
          else
          {
            sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 2468);
          }
          v695 = -1;
          sub_484470(v644);
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 24);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 30);
      }
    case 25:
      if ( sub_47E280((_DWORD *)dword_791364) != 2 && !sub_47D770((_DWORD *)dword_791364) )
      {
        word_791E90 = sub_4F73D0(1);
        if ( word_791E90 == -4 )
        {
          v630 = 1;
          while ( 1 )
          {
            word_791E90 = sub_4F7AE0(dword_791364 + 56);
            if ( word_791E90 == -1 )
              break;
            v247 = sub_4F78A0(word_791E90);
            v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v247;
            sub_47E3D0(word_791E90);
            sub_4C6B80(v363);
            v248 = (ATL::CComCriticalSection *)sub_47E3D0(word_791E90);
            ATL::CComCriticalSection::~CComCriticalSection(v248);
            v249 = sub_47E3D0(word_791E90);
            sub_4DA360(v249);
            v628 = *(_DWORD *)(sub_47E3D0(word_791E90) + 4);
            v250 = sub_4F78A0(word_791E90);
            v251 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
            v552 = sub_64C8A0(v251 * v250, 0);
            v629 = v552;
            sub_5E7E40(v628, 7, v552, HIDWORD(v552));
            if ( v630 )
            {
              v252 = sub_47E3D0(word_791E90);
              if ( sub_4C6CB0(v252) == 1 )
              {
                dword_791E48 = 12;
                dword_791E4C = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_791E90);
                v630 = 0;
              }
              else
              {
                dword_791E48 = 0;
              }
            }
            else
            {
              v253 = sub_47E3D0(word_791E90);
              if ( sub_4C6CB0(v253) == 1 && !sub_62FBF0(2) )
                dword_791E4C = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)word_791E90);
            }
          }
        }
        else
        {
          if ( word_791E90 < 0 )
            sub_5E9F20((char)"shWinner >= 0", "..\\Casino\\PokerHoldScript.cpp", 2518);
          v254 = sub_4F78A0(word_791E90);
          v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v254;
          sub_47E3D0(word_791E90);
          sub_4C6B80(v363);
          v255 = (ATL::CComCriticalSection *)sub_47E3D0(word_791E90);
          ATL::CComCriticalSection::~CComCriticalSection(v255);
          v256 = sub_47E3D0(word_791E90);
          sub_4DA360(v256);
          v626 = *(_DWORD *)(sub_47E3D0(word_791E90) + 4);
          v257 = sub_4F78A0(word_791E90);
          v258 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v551 = sub_64C8A0(v258 * v257, 0);
          v627 = v551;
          sub_5E7E40(v626, 7, v551, HIDWORD(v551));
          if ( byte_791E39
            && (v259 = sub_4F78A0(word_791E90),
                v260 = sub_62FBF0(2 * (_DWORD)dword_791E50),
                v261 = v260 + sub_62FBF0(2 * (_DWORD)dword_791E50) + 5,
                v259 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v261) )
          {
            dword_791E48 = 10;
          }
          else if ( byte_791E39
                 && (v262 = sub_4F78A0(word_791E90),
                     v263 = sub_62FBF0((int)dword_791E50 / 4),
                     v264 = v263 + sub_62FBF0((int)dword_791E50 / 4) + 3,
                     v262 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v264) )
          {
            dword_791E48 = 9;
          }
          else
          {
            dword_791E48 = 7;
          }
          dword_791E4C = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)word_791E90);
        }
        goto LABEL_886;
      }
      if ( sub_47D7F0((_DWORD *)dword_791364) == 1 )
      {
        sub_4A20D0(&v550);
        v414 = v265;
        v413 = v265;
        v695 = 74;
        v266 = sub_4A2100(
                 v265,
                 (_BYTE *)dword_791390,
                 (_BYTE *)dword_7913F4,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF);
        sub_4F7BD0(*(_DWORD *)v266);
        v695 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v550);
      }
      else if ( sub_47D770((_DWORD *)dword_791364) == 1 )
      {
        sub_4A20D0(&v549);
        v412 = v267;
        v411 = v267;
        v695 = 75;
        v268 = sub_4A2100(
                 v267,
                 (_BYTE *)dword_7913B0,
                 (_BYTE *)dword_7913B4,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF);
        sub_4F7BD0(*(_DWORD *)v268);
        v695 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v549);
      }
      else
      {
        sub_4A20D0(&v548);
        v410 = v269;
        v409 = v269;
        v695 = 76;
        v270 = sub_4A2100(
                 v269,
                 (_BYTE *)dword_7913CC,
                 (_BYTE *)dword_7913C8,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF,
                 (unsigned __int8 *)&byte_7913FF);
        sub_4F7BD0(*(_DWORD *)v270);
        v695 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v548);
      }
      v625 = sub_4F8C30(1);
      v624 = sub_4F8C30(0);
      if ( v625 == -5 && v624 == -5 )
        sub_5E9F20(
          (char)"(shHighWinner!=PokerPot::NOWINNER) || (shLowWinner!=PokerPot::NOWINNER)",
          "..\\Casino\\PokerHoldScript.cpp",
          2554);
      if ( v625 == -4 )
      {
        v623 = 1;
        while ( 1 )
        {
          v625 = sub_4F8D90(1);
          if ( v625 == -1 )
            break;
          v271 = sub_4F79B0(v625, 1);
          v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v271;
          sub_47E3D0(v625);
          sub_4C6B80(v363);
          v272 = (ATL::CComCriticalSection *)sub_47E3D0(v625);
          ATL::CComCriticalSection::~CComCriticalSection(v272);
          v273 = sub_47E3D0(v625);
          sub_4DA470(v273);
          v621 = *(_DWORD *)(sub_47E3D0(v625) + 4);
          v274 = sub_4F79B0(v625, 1);
          v275 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v547 = sub_64C8A0(v275 * v274, 0);
          v622 = v547;
          sub_5E7E40(v621, 7, v547, HIDWORD(v547));
          if ( v624 == -5 )
          {
            if ( v623 )
            {
              v276 = sub_47E3D0(v625);
              if ( sub_4C6CB0(v276) == 1 )
              {
                dword_791E48 = 12;
                dword_791E4C = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v625);
                v623 = 0;
              }
              else
              {
                dword_791E48 = 0;
              }
            }
            else
            {
              v277 = sub_47E3D0(v625);
              if ( sub_4C6CB0(v277) == 1 && !sub_62FBF0(2) )
                dword_791E4C = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v625);
            }
          }
          else
          {
            dword_791E48 = 0;
          }
        }
        goto LABEL_839;
      }
      if ( v625 == -5 )
        goto LABEL_839;
      if ( v625 < 0 )
        sub_5E9F20((char)"shHighWinner >= 0", "..\\Casino\\PokerHoldScript.cpp", 2607);
      v278 = sub_4F79B0(v625, 1);
      v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v278;
      sub_47E3D0(v625);
      sub_4C6B80(v363);
      v279 = (ATL::CComCriticalSection *)sub_47E3D0(v625);
      ATL::CComCriticalSection::~CComCriticalSection(v279);
      v280 = sub_47E3D0(v625);
      sub_4DA470(v280);
      v619 = *(_DWORD *)(sub_47E3D0(v625) + 4);
      v281 = sub_4F79B0(v625, 1);
      v282 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      v546 = sub_64C8A0(v282 * v281, 0);
      v620 = v546;
      sub_5E7E40(v619, 7, v546, HIDWORD(v546));
      if ( v624 == -5 )
      {
        if ( byte_791E39
          && (v283 = sub_4F79B0(v625, 1),
              v284 = sub_62FBF0(2 * (_DWORD)dword_791E50),
              v285 = v284 + sub_62FBF0(2 * (_DWORD)dword_791E50) + 5,
              v283 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v285) )
        {
          dword_791E48 = 10;
        }
        else if ( byte_791E39
               && (v286 = sub_4F79B0(v625, 1),
                   v287 = sub_62FBF0((int)dword_791E50 / 4),
                   v288 = v287 + sub_62FBF0((int)dword_791E50 / 4) + 3,
                   v286 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v288) )
        {
          dword_791E48 = 9;
        }
        else
        {
          dword_791E48 = 7;
        }
LABEL_828:
        dword_791E4C = sub_47E490(
                         (Concurrency::details::VirtualProcessor **)dword_791364,
                         (struct Concurrency::IExecutionContext *)v625);
        goto LABEL_839;
      }
      if ( v624 == -4 )
      {
        dword_791E48 = 0;
      }
      else
      {
        if ( v624 == v625 )
        {
          if ( sub_47E190((_DWORD *)dword_791364) == 5 && (v289 = sub_47E3D0(v624), sub_4C6CB0(v289) == 1) )
            dword_791E48 = 14;
          else
            dword_791E48 = 13;
          goto LABEL_828;
        }
        v290 = sub_47E3D0(v625);
        if ( sub_4C6CB0(v290) == 1 )
        {
          v291 = sub_47E3D0(v624);
          if ( sub_4C6CB0(v291) == 1 )
          {
            if ( sub_47E190((_DWORD *)dword_791364) == 5 && sub_62FBF0(3) )
            {
              dword_791E48 = 16;
              dword_791E4C = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)v624);
              goto LABEL_839;
            }
            dword_791E48 = 15;
            if ( !sub_62FBF0(2) )
              goto LABEL_828;
            goto LABEL_836;
          }
        }
        v292 = sub_47E3D0(v625);
        if ( sub_4C6CB0(v292) == 1 )
        {
          dword_791E48 = 15;
          dword_791E4C = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)v625);
          goto LABEL_839;
        }
        v293 = sub_47E3D0(v624);
        if ( sub_4C6CB0(v293) == 1 )
        {
          if ( sub_47E190((_DWORD *)dword_791364) == 5 )
            dword_791E48 = 16;
          else
            dword_791E48 = 15;
LABEL_836:
          dword_791E4C = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)v624);
          goto LABEL_839;
        }
        dword_791E48 = 0;
      }
LABEL_839:
      if ( v624 == -4 )
      {
        v618 = 1;
        while ( 1 )
        {
          v624 = sub_4F8D90(0);
          if ( v624 == -1 )
            break;
          v294 = sub_4F79B0(v624, 0);
          v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v294;
          sub_47E3D0(v624);
          sub_4C6B80(v363);
          v295 = (ATL::CComCriticalSection *)sub_47E3D0(v624);
          ATL::CComCriticalSection::~CComCriticalSection(v295);
          v616 = *(_DWORD *)(sub_47E3D0(v624) + 4);
          v296 = sub_4F79B0(v624, 0);
          v297 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v545 = sub_64C8A0(v297 * v296, 0);
          v617 = v545;
          sub_5E7E40(v616, 7, v545, HIDWORD(v545));
          if ( sub_47E190((_DWORD *)dword_791364) == 5 )
          {
            v363 = dword_79076C;
            v298 = sub_47EE90((_DWORD *)dword_791364, &v544);
            if ( sub_4640B0(v298, (unsigned __int8 *)v363) )
            {
              sub_47E3D0(v624);
              sub_4DA3C0(3);
            }
            else
            {
              v363 = dword_790754;
              v299 = sub_47EE90((_DWORD *)dword_791364, &v543);
              if ( sub_4640B0(v299, (unsigned __int8 *)v363) )
              {
                sub_47E3D0(v624);
                sub_4DA3C0(1);
              }
              else
              {
                v363 = dword_790764;
                v300 = sub_47EE90((_DWORD *)dword_791364, &v542);
                if ( sub_4640B0(v300, (unsigned __int8 *)v363) )
                {
                  sub_47E3D0(v624);
                  sub_4DA3C0(4);
                }
                else
                {
                  v363 = dword_790770;
                  v301 = sub_47EE90((_DWORD *)dword_791364, &v541);
                  if ( sub_4640B0(v301, (unsigned __int8 *)v363) )
                  {
                    sub_47E3D0(v624);
                    sub_4DA3C0(2);
                  }
                  else
                  {
                    sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 2719);
                  }
                }
              }
            }
          }
          else
          {
            sub_47E3D0(v624);
            sub_4DA3C0(0);
          }
          if ( v625 == -5 )
          {
            if ( v618 )
            {
              v302 = sub_47E3D0(v624);
              if ( sub_4C6CB0(v302) == 1 )
              {
                dword_791E48 = 12;
                dword_791E4C = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v624);
                v618 = 0;
              }
              else
              {
                dword_791E48 = 0;
              }
            }
            else
            {
              v303 = sub_47E3D0(v624);
              if ( sub_4C6CB0(v303) == 1 && !sub_62FBF0(2) )
                dword_791E4C = sub_47E490(
                                 (Concurrency::details::VirtualProcessor **)dword_791364,
                                 (struct Concurrency::IExecutionContext *)v624);
            }
          }
        }
      }
      else if ( v624 != -5 )
      {
        if ( v624 < 0 )
          sub_5E9F20((char)"shLowWinner >= 0", "..\\Casino\\PokerHoldScript.cpp", 2746);
        v304 = sub_4F79B0(v624, 0);
        v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v304;
        sub_47E3D0(v624);
        sub_4C6B80(v363);
        v305 = (ATL::CComCriticalSection *)sub_47E3D0(v624);
        ATL::CComCriticalSection::~CComCriticalSection(v305);
        v614 = *(_DWORD *)(sub_47E3D0(v624) + 4);
        v306 = sub_4F79B0(v624, 0);
        v307 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
        v540 = sub_64C8A0(v307 * v306, 0);
        v615 = v540;
        sub_5E7E40(v614, 7, v540, HIDWORD(v540));
        if ( sub_47E190((_DWORD *)dword_791364) == 5 )
        {
          v363 = dword_79076C;
          v308 = sub_47EE90((_DWORD *)dword_791364, &v539);
          if ( sub_4640B0(v308, (unsigned __int8 *)v363) )
          {
            sub_47E3D0(v624);
            sub_4DA3C0(3);
          }
          else
          {
            v363 = dword_790754;
            v309 = sub_47EE90((_DWORD *)dword_791364, &v538);
            if ( sub_4640B0(v309, (unsigned __int8 *)v363) )
            {
              sub_47E3D0(v624);
              sub_4DA3C0(1);
            }
            else
            {
              v363 = dword_790764;
              v310 = sub_47EE90((_DWORD *)dword_791364, &v537);
              if ( sub_4640B0(v310, (unsigned __int8 *)v363) )
              {
                sub_47E3D0(v624);
                sub_4DA3C0(4);
              }
              else
              {
                v363 = dword_790770;
                v311 = sub_47EE90((_DWORD *)dword_791364, &v536);
                if ( sub_4640B0(v311, (unsigned __int8 *)v363) )
                {
                  sub_47E3D0(v624);
                  sub_4DA3C0(2);
                }
                else
                {
                  sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 2771);
                }
              }
            }
          }
        }
        else
        {
          sub_47E3D0(v624);
          sub_4DA3C0(0);
        }
        if ( v625 == -5 )
        {
          if ( byte_791E39
            && (v312 = sub_4F79B0(v624, 0),
                v313 = sub_62FBF0(2 * (_DWORD)dword_791E50),
                v314 = v313 + sub_62FBF0(2 * (_DWORD)dword_791E50) + 5,
                v312 > CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v314) )
          {
            dword_791E48 = 10;
          }
          else if ( byte_791E39
                 && (v315 = sub_4F79B0(v624, 0),
                     v316 = sub_62FBF0((int)dword_791E50 / 4),
                     v317 = v316 + sub_62FBF0((int)dword_791E50 / 4) + 3,
                     v315 < CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v317) )
          {
            dword_791E48 = 9;
          }
          else
          {
            dword_791E48 = 7;
          }
          dword_791E4C = sub_47E490(
                           (Concurrency::details::VirtualProcessor **)dword_791364,
                           (struct Concurrency::IExecutionContext *)v624);
        }
      }
LABEL_886:
      byte_791E39 = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 23);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 30);
    case 26:
      word_791E90 = sub_4F6540(dword_791364 + 56);
      v318 = sub_47E3D0(word_791E90);
      sub_4DA360(v318);
      for ( word_791E94 = 0; ; ++word_791E94 )
      {
        v319 = word_791E94;
        if ( v319 >= sub_47F950() )
          break;
        v320 = sub_47E390(word_791E94);
        if ( sub_4C6CB0(v320) )
        {
          if ( sub_47E190((_DWORD *)dword_791364) == 3 )
          {
            LOWORD(v363) = (_WORD)dword_791E50;
            LOWORD(v362) = sub_47E490(
                             (Concurrency::details::VirtualProcessor **)dword_791364,
                             (struct Concurrency::IExecutionContext *)word_791E90);
            sub_47E390(word_791E94);
            sub_4CF0C0(v362, v363);
          }
          else if ( sub_47E190((_DWORD *)dword_791364) != 4 || sub_47E280((_DWORD *)dword_791364) )
          {
            if ( sub_47E190((_DWORD *)dword_791364) == 4 && sub_47E280((_DWORD *)dword_791364) == 2 )
            {
              LOWORD(v363) = (_WORD)dword_791E50;
              LOWORD(v362) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_791E90);
              sub_47E390(word_791E94);
              sub_4D4530(v362, v363);
            }
            else if ( sub_47E190((_DWORD *)dword_791364) == 5 )
            {
              LOWORD(v363) = (_WORD)dword_791E50;
              LOWORD(v362) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_791E90);
              sub_47E390(word_791E94);
              sub_4EEB10(v362, v363);
            }
            else if ( sub_47E190((_DWORD *)dword_791364) == 6 )
            {
              LOWORD(v363) = (_WORD)dword_791E50;
              LOWORD(v362) = sub_47E490(
                               (Concurrency::details::VirtualProcessor **)dword_791364,
                               (struct Concurrency::IExecutionContext *)word_791E90);
              sub_47E390(word_791E94);
              sub_4F0FD0(v362, v363);
            }
          }
          else
          {
            LOWORD(v363) = (_WORD)dword_791E50;
            LOWORD(v362) = sub_47E490(
                             (Concurrency::details::VirtualProcessor **)dword_791364,
                             (struct Concurrency::IExecutionContext *)word_791E90);
            sub_47E390(word_791E94);
            sub_4D1900(v362, v363);
          }
        }
      }
      v321 = sub_4F6840(dword_791364 + 56);
      v363 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v321;
      sub_47E3D0(word_791E90);
      sub_4C6B80(v363);
      v322 = (ATL::CComCriticalSection *)sub_47E3D0(word_791E90);
      ATL::CComCriticalSection::~CComCriticalSection(v322);
      v612 = *(_DWORD *)(sub_47E3D0(word_791E90) + 4);
      v323 = sub_4F6840(dword_791364 + 56);
      v324 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      v535 = sub_64C8A0(v324 * v323, 0);
      v613 = v535;
      sub_5E7E40(v612, 7, v535, HIDWORD(v535));
      v325 = sub_4F6840(dword_791364 + 56);
      v326 = sub_62FBF0(2 * (_DWORD)dword_791E50);
      v327 = v326 + sub_62FBF0(2 * (_DWORD)dword_791E50) + 5;
      if ( v325 <= CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364) * v327 )
      {
        v328 = sub_4F6840(dword_791364 + 56);
        v329 = sub_62FBF0((int)dword_791E50 / 4);
        v330 = v329 + sub_62FBF0((int)dword_791E50 / 4) + 3;
        if ( v328 >= CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364) * v330 )
          dword_791E48 = 11;
        else
          dword_791E48 = 9;
      }
      else
      {
        dword_791E48 = 10;
      }
      dword_791E4C = sub_47E490(
                       (Concurrency::details::VirtualProcessor **)dword_791364,
                       (struct Concurrency::IExecutionContext *)word_791E90);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 27);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 45);
    case 27:
      if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
        goto LABEL_927;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_791EB8 + 724))(dword_791EB8);
      dword_791E78 = sub_483C30((int *)dword_791364, word_791E88, &dword_791E8C);
      if ( dword_791E78 >= 0 )
      {
        ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 28);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
      }
      v331 = sub_47E390(dword_791E4C);
      if ( sub_4C6CB0(v331) == 1
        && (dword_791E48 == 7
         || dword_791E48 == 9
         || dword_791E48 == 10
         || dword_791E48 == 11
         || dword_791E48 == 12
         || dword_791E48 == 13
         || dword_791E48 == 14
         || dword_791E48 == 15
         || dword_791E48 == 16) )
      {
        sub_483A70(dword_791E4C, &v610, &v611);
        if ( v610 == 1 && v611 < 0 && !sub_62FBF0(2) )
          dword_791E48 = 8;
      }
LABEL_927:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 29);
      if ( !dword_791E48 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 1);
      if ( dword_791E48 == 8 )
      {
        v363 = (unsigned int)v694;
        sub_47E390(dword_791E4C);
        return sub_4CD3A0(v363);
      }
      v332 = sub_47E390(dword_791E4C);
      if ( sub_4C6CB0(v332) == 1 )
      {
        switch ( dword_791E48 )
        {
          case 7:
            sub_47E390(dword_791E4C);
            v408 = (__int16 *)sub_4C7C40(v533);
            v695 = 77;
            v407 = sub_485940(v408, &v532, 1, 1, 1, 1, 0, 0, 0);
            v695 = 78;
            v474 |= 3u;
            v363 = dword_7913D4;
            v333 = sub_4A2160(v407, &v531);
            v406 = sub_4A1F00(v333, (unsigned __int8 *)v363)
                && !sub_62FBF0(2)
                && sub_47E190((_DWORD *)dword_791364) != 5;
            v534 = v406;
            v695 = 77;
            if ( (v474 & 2) != 0 )
            {
              v474 &= ~2u;
              ATL::CComCriticalSection::~CComCriticalSection(&v532);
            }
            v695 = -1;
            if ( (v474 & 1) != 0 )
            {
              v474 &= ~1u;
              sub_484470(v533);
            }
            v363 = (unsigned int)v694;
            if ( v534 )
            {
              sub_47E390(dword_791E4C);
              return sub_4CCBA0(v363);
            }
            else
            {
              sub_47E390(dword_791E4C);
              return sub_4CCB20(v363);
            }
          case 10:
            sub_47E390(dword_791E4C);
            v405 = (__int16 *)sub_4C7C40(v529);
            v695 = 79;
            v404 = sub_485940(v405, &v528, 1, 1, 1, 1, 0, 0, 0);
            v695 = 80;
            v474 |= 0xCu;
            v363 = dword_7913D4;
            v334 = sub_4A2160(v404, &v527);
            v403 = sub_4A1F00(v334, (unsigned __int8 *)v363)
                && !sub_62FBF0(2)
                && sub_47E190((_DWORD *)dword_791364) != 5;
            v530 = v403;
            v695 = 79;
            if ( (v474 & 8) != 0 )
            {
              v474 &= ~8u;
              ATL::CComCriticalSection::~CComCriticalSection(&v528);
            }
            v695 = -1;
            if ( (v474 & 4) != 0 )
            {
              v474 &= ~4u;
              sub_484470(v529);
            }
            v363 = (unsigned int)v694;
            if ( v530 )
            {
              sub_47E390(dword_791E4C);
              return sub_4CCBA0(v363);
            }
            else
            {
              sub_47E390(dword_791E4C);
              return sub_4CCC20(v363);
            }
          case 9:
            sub_47E390(dword_791E4C);
            v402 = (__int16 *)sub_4C7C40(v525);
            v695 = 81;
            v401 = sub_485940(v402, &v524, 1, 1, 1, 1, 0, 0, 0);
            v695 = 82;
            v474 |= 0x30u;
            v363 = dword_7913D4;
            v335 = sub_4A2160(v401, &v523);
            v400 = sub_4A1F00(v335, (unsigned __int8 *)v363)
                && !sub_62FBF0(2)
                && sub_47E190((_DWORD *)dword_791364) != 5;
            v526 = v400;
            v695 = 81;
            if ( (v474 & 0x20) != 0 )
            {
              v474 &= ~0x20u;
              ATL::CComCriticalSection::~CComCriticalSection(&v524);
            }
            v695 = -1;
            if ( (v474 & 0x10) != 0 )
            {
              v474 &= ~0x10u;
              sub_484470(v525);
            }
            v363 = (unsigned int)v694;
            if ( v526 )
            {
              sub_47E390(dword_791E4C);
              return sub_4CCBA0(v363);
            }
            else
            {
              sub_47E390(dword_791E4C);
              return sub_4CCBE0(v363);
            }
          case 11:
            v363 = (unsigned int)v694;
            sub_47E390(dword_791E4C);
            return sub_4CCB60(v363);
          case 12:
            v363 = (unsigned int)v694;
            sub_47E390(dword_791E4C);
            return sub_4CCDE0(v363);
          case 15:
            v363 = (unsigned int)v694;
            sub_47E390(dword_791E4C);
            return sub_4CCF80(v363);
          case 16:
            v363 = (unsigned int)v694;
            sub_47E390(dword_791E4C);
            return sub_4CD280(v363);
          case 13:
            v363 = (unsigned int)v694;
            sub_47E390(dword_791E4C);
            return sub_4CCFC0(v363);
          case 14:
            v363 = (unsigned int)v694;
            sub_47E390(dword_791E4C);
            return sub_4CD2B0(v363);
        }
      }
      else
      {
        v336 = sub_47E390(dword_791E4C);
        if ( sub_4C6CB0(v336) == 2 )
        {
          v602 = 0;
          v603 = 0;
          for ( word_791E94 = 0; ; ++word_791E94 )
          {
            v337 = word_791E94;
            if ( v337 >= sub_47F950() )
              break;
            v338 = sub_47E390(word_791E94);
            if ( sub_4C6CB0(v338) == 1 )
            {
              ++v603;
              v339 = (Concurrency::details::SchedulerProxy *)sub_47E390(word_791E94);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v339) == 1 )
                ++v602;
            }
          }
          v604 = sub_62FBF0(v602) + 1;
          v608 = 0;
          v606 = 0;
          while ( v608 < sub_47F950() && v606 < v604 )
          {
            v340 = sub_47E390(v608);
            if ( sub_4C6CB0(v340) == 1 )
            {
              v341 = (Concurrency::details::SchedulerProxy *)sub_47E390(v608);
              if ( Concurrency::details::SchedulerProxy::GetQueueLength(v341) == 1 )
              {
                if ( ++v606 < v604 )
                  ++v608;
              }
              else
              {
                ++v608;
              }
            }
            else
            {
              ++v608;
            }
          }
          if ( v608 >= sub_47F950() )
          {
            v607 = -1;
          }
          else
          {
            v607 = v608;
            v601 = sub_47E390(v608);
            if ( v601 && *(_DWORD *)(sub_5DCB00(*(_DWORD *)(v601 + 4)) + 12) != -1 )
              v607 = -1;
          }
          v609 = sub_62FBF0(v603) + 1;
          v608 = 0;
          v606 = 0;
          while ( v608 < sub_47F950() && v606 < v609 )
          {
            v342 = sub_47E390(v608);
            if ( sub_4C6CB0(v342) == 1 )
            {
              if ( ++v606 < v609 )
                ++v608;
            }
            else
            {
              ++v608;
            }
          }
          v605 = 0;
          if ( v608 >= sub_47F950() )
            dword_791E48 = 0;
          else
            v605 = v608;
          switch ( dword_791E48 )
          {
            case 7:
              sub_47E390(dword_791E4C);
              v399 = (__int16 *)sub_4C7C40(v521);
              v695 = 83;
              v398 = sub_485940(v399, &v520, 1, 1, 1, 1, 0, 0, 0);
              v695 = 84;
              v474 |= 0xC0u;
              v363 = dword_7913A0;
              v343 = sub_4A2160(v398, &v519);
              v397 = sub_4A1F00(v343, (unsigned __int8 *)v363) && sub_47E190((_DWORD *)dword_791364) != 5;
              v522 = v397;
              v695 = 83;
              if ( (v474 & 0x80) != 0 )
              {
                v474 &= ~0x80u;
                ATL::CComCriticalSection::~CComCriticalSection(&v520);
              }
              v695 = -1;
              if ( (v474 & 0x40) != 0 )
              {
                v474 &= ~0x40u;
                sub_484470(v521);
              }
              if ( v522 )
              {
                if ( v607 < 0 )
                {
                  v363 = (unsigned int)v694;
                  sub_47E390(v605);
                  return sub_4CCCE0(v363);
                }
                else
                {
                  sub_47E390(v607);
                  v396 = (__int16 *)sub_4C7C40(v517);
                  v695 = 85;
                  v395 = sub_485940(v396, &v516, 1, 1, 1, 1, 0, 0, 0);
                  v695 = 86;
                  v474 |= 0x300u;
                  v363 = dword_7913D4;
                  v344 = sub_4A2160(v395, &v515);
                  v394 = sub_4A1F00(v344, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                  v518 = v394;
                  v695 = 85;
                  if ( (v474 & 0x200) != 0 )
                  {
                    v474 &= ~0x200u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v516);
                  }
                  v695 = -1;
                  if ( (v474 & 0x100) != 0 )
                  {
                    v474 &= ~0x100u;
                    sub_484470(v517);
                  }
                  if ( v518 )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCE00(v363);
                  }
                  else
                  {
                    sub_47E390(v607);
                    v393 = (__int16 *)sub_4C7C40(v513);
                    v695 = 87;
                    v392 = sub_485940(v393, &v512, 1, 1, 1, 1, 0, 0, 0);
                    v695 = 88;
                    v474 |= 0xC00u;
                    v363 = dword_791390;
                    v345 = sub_4A2160(v392, &v511);
                    v391 = sub_4A1E10(v345, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                    v514 = v391;
                    v695 = 87;
                    if ( (v474 & 0x800) != 0 )
                    {
                      v474 &= ~0x800u;
                      ATL::CComCriticalSection::~CComCriticalSection(&v512);
                    }
                    v695 = -1;
                    if ( (v474 & 0x400) != 0 )
                    {
                      v474 &= ~0x400u;
                      sub_484470(v513);
                    }
                    if ( v514 )
                    {
                      v363 = (unsigned int)v694;
                      sub_47E390(v607);
                      return sub_4CCE40(v363);
                    }
                    else if ( sub_62FBF0(3) )
                    {
                      v363 = (unsigned int)v694;
                      sub_47E390(v607);
                      return sub_4CCCE0(v363);
                    }
                    else
                    {
                      v363 = (unsigned int)v694;
                      sub_47E390(v607);
                      return sub_4CCDA0(v363);
                    }
                  }
                }
              }
              else if ( v607 < 0 )
              {
                v363 = (unsigned int)v694;
                sub_47E390(v605);
                return sub_4CCC60(v363);
              }
              else
              {
                sub_47E390(v607);
                v390 = (__int16 *)sub_4C7C40(v509);
                v695 = 89;
                v389 = sub_485940(v390, &v508, 1, 1, 1, 1, 0, 0, 0);
                v695 = 90;
                v474 |= 0x3000u;
                v363 = dword_7913D4;
                v346 = sub_4A2160(v389, &v507);
                v388 = sub_4A1F00(v346, (unsigned __int8 *)v363)
                    && !sub_62FBF0(2)
                    && sub_47E190((_DWORD *)dword_791364) != 5;
                v510 = v388;
                v695 = 89;
                if ( (v474 & 0x2000) != 0 )
                {
                  v474 &= ~0x2000u;
                  ATL::CComCriticalSection::~CComCriticalSection(&v508);
                }
                v695 = -1;
                if ( (v474 & 0x1000) != 0 )
                {
                  v474 &= ~0x1000u;
                  sub_484470(v509);
                }
                if ( v510 )
                {
                  v363 = (unsigned int)v694;
                  sub_47E390(v607);
                  return sub_4CCE00(v363);
                }
                else
                {
                  sub_47E390(v607);
                  v387 = (__int16 *)sub_4C7C40(v505);
                  v695 = 91;
                  v386 = sub_485940(v387, &v504, 1, 1, 1, 1, 0, 0, 0);
                  v695 = 92;
                  v474 |= 0xC000u;
                  v363 = dword_791390;
                  v347 = sub_4A2160(v386, &v503);
                  v385 = sub_4A1E10(v347, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                  v506 = v385;
                  v695 = 91;
                  if ( (v474 & 0x8000) != 0 )
                  {
                    v474 &= ~0x8000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v504);
                  }
                  v695 = -1;
                  if ( (v474 & 0x4000) != 0 )
                  {
                    v474 &= ~0x4000u;
                    sub_484470(v505);
                  }
                  if ( v506 )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCE40(v363);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCC60(v363);
                  }
                  else
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCDA0(v363);
                  }
                }
              }
            case 10:
              sub_47E390(dword_791E4C);
              v384 = (__int16 *)sub_4C7C40(v501);
              v695 = 93;
              v383 = sub_485940(v384, &v500, 1, 1, 1, 1, 0, 0, 0);
              v695 = 94;
              v474 |= 0x30000u;
              v363 = dword_7913A0;
              v348 = sub_4A2160(v383, &v499);
              v382 = sub_4A1F00(v348, (unsigned __int8 *)v363) && sub_47E190((_DWORD *)dword_791364) != 5;
              v502 = v382;
              v695 = 93;
              if ( (v474 & 0x20000) != 0 )
              {
                v474 &= ~0x20000u;
                ATL::CComCriticalSection::~CComCriticalSection(&v500);
              }
              v695 = -1;
              if ( (v474 & 0x10000) != 0 )
              {
                v474 &= ~0x10000u;
                sub_484470(v501);
              }
              if ( v502 )
              {
                if ( v607 < 0 )
                {
                  v363 = (unsigned int)v694;
                  sub_47E390(v605);
                  return sub_4CCCE0(v363);
                }
                else
                {
                  sub_47E390(v607);
                  v381 = (__int16 *)sub_4C7C40(v497);
                  v695 = 95;
                  v380 = sub_485940(v381, &v496, 1, 1, 1, 1, 0, 0, 0);
                  v695 = 96;
                  v474 |= 0xC0000u;
                  v363 = dword_7913D4;
                  v349 = sub_4A2160(v380, &v495);
                  v379 = sub_4A1F00(v349, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                  v498 = v379;
                  v695 = 95;
                  if ( (v474 & 0x80000) != 0 )
                  {
                    v474 &= ~0x80000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v496);
                  }
                  v695 = -1;
                  if ( (v474 & 0x40000) != 0 )
                  {
                    v474 &= ~0x40000u;
                    sub_484470(v497);
                  }
                  if ( v498 )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCE00(v363);
                  }
                  else
                  {
                    sub_47E390(v607);
                    v378 = (__int16 *)sub_4C7C40(v493);
                    v695 = 97;
                    v377 = sub_485940(v378, &v492, 1, 1, 1, 1, 0, 0, 0);
                    v695 = 98;
                    v474 |= 0x300000u;
                    v363 = dword_791390;
                    v350 = sub_4A2160(v377, &v491);
                    v376 = sub_4A1E10(v350, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                    v494 = v376;
                    v695 = 97;
                    if ( (v474 & 0x200000) != 0 )
                    {
                      v474 &= ~0x200000u;
                      ATL::CComCriticalSection::~CComCriticalSection(&v492);
                    }
                    v695 = -1;
                    if ( (v474 & 0x100000) != 0 )
                    {
                      v474 &= ~0x100000u;
                      sub_484470(v493);
                    }
                    if ( v494 )
                    {
                      v363 = (unsigned int)v694;
                      sub_47E390(v607);
                      return sub_4CCE40(v363);
                    }
                    else if ( sub_62FBF0(3) )
                    {
                      v363 = (unsigned int)v694;
                      sub_47E390(v607);
                      return sub_4CCCE0(v363);
                    }
                    else
                    {
                      v363 = (unsigned int)v694;
                      sub_47E390(v607);
                      return sub_4CCDA0(v363);
                    }
                  }
                }
              }
              else if ( v607 < 0 )
              {
                v363 = (unsigned int)v694;
                sub_47E390(v605);
                return sub_4CCD60(v363);
              }
              else
              {
                sub_47E390(v607);
                v375 = (__int16 *)sub_4C7C40(v489);
                v695 = 99;
                v374 = sub_485940(v375, &v488, 1, 1, 1, 1, 0, 0, 0);
                v695 = 100;
                v474 |= (unsigned int)&unk_800000 | 0x400000;
                v363 = dword_7913D4;
                v351 = sub_4A2160(v374, &v487);
                v373 = sub_4A1F00(v351, (unsigned __int8 *)v363)
                    && !sub_62FBF0(2)
                    && sub_47E190((_DWORD *)dword_791364) != 5;
                v490 = v373;
                v695 = 99;
                if ( ((unsigned int)&unk_800000 & v474) != 0 )
                {
                  v474 &= ~0x800000u;
                  ATL::CComCriticalSection::~CComCriticalSection(&v488);
                }
                v695 = -1;
                if ( (v474 & 0x400000) != 0 )
                {
                  v474 &= ~0x400000u;
                  sub_484470(v489);
                }
                if ( v490 )
                {
                  v363 = (unsigned int)v694;
                  sub_47E390(v607);
                  return sub_4CCE00(v363);
                }
                else
                {
                  sub_47E390(v607);
                  v372 = (__int16 *)sub_4C7C40(v485);
                  v695 = 101;
                  v371 = sub_485940(v372, &v484, 1, 1, 1, 1, 0, 0, 0);
                  v695 = 102;
                  v474 |= (unsigned int)&unk_1000000 | 0x2000000;
                  v363 = dword_791390;
                  v352 = sub_4A2160(v371, &v483);
                  v370 = sub_4A1E10(v352, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                  v486 = v370;
                  v695 = 101;
                  if ( (v474 & 0x2000000) != 0 )
                  {
                    v474 &= ~0x2000000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v484);
                  }
                  v695 = -1;
                  if ( ((unsigned int)&unk_1000000 & v474) != 0 )
                  {
                    v474 &= ~0x1000000u;
                    sub_484470(v485);
                  }
                  if ( v486 )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCE40(v363);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCD60(v363);
                  }
                  else
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCDA0(v363);
                  }
                }
              }
            case 9:
              if ( v607 < 0 )
              {
                v363 = (unsigned int)v694;
                sub_47E390(v605);
                return sub_4CCD20(v363);
              }
              else
              {
                sub_47E390(v607);
                v369 = (__int16 *)sub_4C7C40(v481);
                v695 = 103;
                v368 = sub_485940(v369, &v480, 1, 1, 1, 1, 0, 0, 0);
                v695 = 104;
                v474 |= 0xC000000u;
                v363 = dword_7913D4;
                v353 = sub_4A2160(v368, &v479);
                v367 = sub_4A1F00(v353, (unsigned __int8 *)v363)
                    && !sub_62FBF0(2)
                    && sub_47E190((_DWORD *)dword_791364) != 5;
                v482 = v367;
                v695 = 103;
                if ( (v474 & 0x8000000) != 0 )
                {
                  v474 &= ~0x8000000u;
                  ATL::CComCriticalSection::~CComCriticalSection(&v480);
                }
                v695 = -1;
                if ( (v474 & 0x4000000) != 0 )
                {
                  v474 &= ~0x4000000u;
                  sub_484470(v481);
                }
                if ( v482 )
                {
                  v363 = (unsigned int)v694;
                  sub_47E390(v607);
                  return sub_4CCE00(v363);
                }
                else
                {
                  sub_47E390(v607);
                  v366 = (__int16 *)sub_4C7C40(v477);
                  v695 = 105;
                  v365 = sub_485940(v366, &v476, 1, 1, 1, 1, 0, 0, 0);
                  v695 = 106;
                  v474 |= 0x30000000u;
                  v363 = dword_791390;
                  v354 = sub_4A2160(v365, &v475);
                  v364 = sub_4A1E10(v354, (unsigned __int8 *)v363) && !sub_62FBF0(2);
                  v478 = v364;
                  v695 = 105;
                  if ( (v474 & 0x20000000) != 0 )
                  {
                    v474 &= ~0x20000000u;
                    ATL::CComCriticalSection::~CComCriticalSection(&v476);
                  }
                  v695 = -1;
                  if ( (v474 & 0x10000000) != 0 )
                  {
                    v474 &= ~0x10000000u;
                    sub_484470(v477);
                  }
                  if ( v478 )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCE40(v363);
                  }
                  else if ( sub_62FBF0(3) )
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCD20(v363);
                  }
                  else
                  {
                    v363 = (unsigned int)v694;
                    sub_47E390(v607);
                    return sub_4CCDA0(v363);
                  }
                }
              }
            case 11:
              v363 = (unsigned int)v694;
              sub_47E390(v605);
              return sub_4CCCA0(v363);
            case 13:
              v363 = (unsigned int)v694;
              if ( v607 < 0 )
                sub_47E390(v605);
              else
                sub_47E390(v607);
              return sub_4CCFE0(v363);
          }
        }
      }
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v473 + 28))(v473, 1);
    case 28:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 29);
      v355 = sub_47E390(dword_791E78);
      if ( sub_4C6CB0(v355) == 2 )
      {
        for ( i = dword_791E78; ; i = sub_62FBF0(v357) )
        {
          v356 = sub_47E390(i);
          if ( sub_4C6CB0(v356) == 1 )
            break;
          v357 = sub_47F950();
        }
        if ( sub_62FBF0(1) )
        {
          sub_47E390(i);
          return sub_4CD190(v694);
        }
        else
        {
          sub_47E390(i);
          return sub_4CD1B0(v694);
        }
      }
      else if ( sub_62FBF0(3) == 10 )
      {
        sub_47E390(dword_791E78);
        return sub_4CD1D0(v694);
      }
      else
      {
        sub_47E390(dword_791E78);
        return sub_4CD170(v694);
      }
    case 29:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 30);
      if ( (int)sub_637810(4) >= 3 || (int)sub_637810(4) < 0 )
        return sub_5FC490(3);
      v358 = sub_637810(4);
      return sub_5FC490(v358 + 1);
    case 30:
    case 31:
LABEL_3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v473 + 4))(v473, 32);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v473 + 28))(v473, 0);
    case 32:
      ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_791364);
      sub_47AA30((_BYTE *)dword_791364);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v473 + 12) + 28))(*(_DWORD *)(v473 + 12), 0);
      return sub_5FC420(0);
    default:
      return result;
  }
}


//======================================================================
// sub_4C37F0
// entry 004c37f0  size 341  status ok
//======================================================================

int __cdecl sub_4C37F0(char a1)
{
  int v1; // esi
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]
  int v7; // [esp+Ch] [ebp-4h]

  v4 = -99;
  v5 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v1 = sub_4C6A70(v5);
  dword_791E80 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_791E80 > sub_4F67D0(dword_791364 + 56) )
  {
    if ( !a1 )
    {
      v2 = sub_4F67D0(dword_791364 + 56);
      v7 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v2;
      sub_4C6C10(v7);
      ATL::CComCriticalSection::~CComCriticalSection(v5);
      sub_4DC4D0(3, 0);
      v4 = (__int16)sub_4F5CD0(dword_791364 + 56);
      sub_47EC90((__int16 *)dword_791364, v7);
    }
    dword_791E48 = 3;
  }
  else
  {
    if ( !a1 )
    {
      v6 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v6);
      ATL::CComCriticalSection::~CComCriticalSection(v5);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v5, 2u);
      v4 = (__int16)sub_4F5E80(dword_791E80);
      sub_47EC90((__int16 *)dword_791364, v6);
    }
    dword_791E48 = 6;
  }
  return v4;
}


//======================================================================
// sub_4C3950
// entry 004c3950  size 595  status ok
//======================================================================

int __cdecl sub_4C3950(char a1, int a2)
{
  char *v2; // eax
  int v3; // esi
  int v5; // [esp+Ch] [ebp-10h]
  Concurrency::details::SchedulerProxy *v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  v5 = -99;
  v6 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  if ( *(_BYTE *)(dword_7947E0 + 20276)
    && v6 == (Concurrency::details::SchedulerProxy *)sub_4798C0((void *)dword_791364) )
  {
    v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
    v9 = sub_64CAB0(v2);
  }
  else if ( a2 <= 0 )
  {
    if ( sub_4B7D90() )
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
  dword_791E80 = v3 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_791E80 > v9 )
  {
    if ( !a1 )
    {
      v8 = v9 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v8);
      ATL::CComCriticalSection::~CComCriticalSection(v6);
      if ( *(_DWORD *)&dword_791E74 || sub_47D6B0((_DWORD *)dword_791364) )
        sub_4DC4D0(1, v8);
      else
        sub_4DC4D0(2, v8);
      v5 = (__int16)sub_4F58C0(v9);
      sub_47EC90((__int16 *)dword_791364, v8);
    }
    dword_791E48 = 4;
  }
  else
  {
    if ( !a1 )
    {
      v7 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v7);
      ATL::CComCriticalSection::~CComCriticalSection(v6);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v6, 2u);
      v5 = (__int16)sub_4F5A80(dword_791E80);
      sub_47EC90((__int16 *)dword_791364, v7);
    }
    dword_791E48 = 6;
  }
  return v5;
}


//======================================================================
// sub_4C3BB0
// entry 004c3bb0  size 192  status ok
//======================================================================

unsigned int sub_4C3BB0()
{
  int v0; // eax
  int v1; // esi
  signed int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  if ( sub_4B7D90() )
    v4 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
  else
    v4 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  v0 = sub_47E3B0((void *)dword_791364);
  v1 = sub_4C6A70(v0);
  dword_791E80 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  dword_791E80 -= sub_4F67D0(dword_791364 + 56);
  if ( dword_791E80 > v4 )
    return v4 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  v3 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( v3 < 0 )
    return 0;
  return v3;
}


//======================================================================
// sub_4C3C70
// entry 004c3c70  size 715  status ok
//======================================================================

int __cdecl sub_4C3C70(char a1, int a2)
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
  int v12; // [esp+18h] [ebp-4h]
  int v13; // [esp+18h] [ebp-4h]

  v10 = -99;
  v11 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  if ( *(_BYTE *)(dword_7947E0 + 20276)
    && v11 == (Concurrency::details::SchedulerProxy *)sub_4798C0((void *)dword_791364) )
  {
    v2 = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_791EB8 + 156) + 516) + 184))(*(_DWORD *)(*(_DWORD *)(dword_791EB8 + 156) + 516));
    v9 = sub_64CAB0(v2);
  }
  else if ( a2 <= 0 )
  {
    if ( sub_4B7D90() )
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
  dword_791E80 = v3 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_791E80 <= sub_4F67D0(dword_791364 + 56) )
    return sub_4C37F0(a1);
  if ( dword_791E80 > v9 + sub_4F67D0(dword_791364 + 56) )
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
      sub_47EC90((__int16 *)dword_791364, v13);
    }
    dword_791E48 = 5;
  }
  else
  {
    if ( a2 > 0 )
    {
      v5 = dword_791E80 - sub_4F67D0(dword_791364 + 56);
      if ( v5 < (int)CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364) )
        return sub_4C37F0(a1);
    }
    if ( !a1 )
    {
      v12 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v12);
      ATL::CComCriticalSection::~CComCriticalSection(v11);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v11, 2u);
      v6 = sub_4F67D0(dword_791364 + 56);
      v10 = (__int16)sub_4F6210(dword_791E80 - v6);
      sub_47EC90((__int16 *)dword_791364, v12);
    }
    dword_791E48 = 6;
  }
  return v10;
}


//======================================================================
// sub_4C3F40
// entry 004c3f40  size 300  status ok
//======================================================================

int __cdecl sub_4C3F40(int a1)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]
  int v6; // [esp+Ch] [ebp-4h]

  v4 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v1 = sub_4C6A70(v4);
  dword_791E80 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_791E80 > a1 )
  {
    v6 = a1 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v6);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0(6, v6);
    v3 = (__int16)sub_4F5C40(a1, 1);
    sub_47EC90((__int16 *)dword_791364, v6);
    dword_791E48 = 0;
  }
  else
  {
    v5 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0(9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v4, 2u);
    v3 = (__int16)sub_4F5A80(dword_791E80);
    sub_47EC90((__int16 *)dword_791364, v5);
    dword_791E48 = 6;
  }
  return v3;
}


//======================================================================
// sub_4C4070
// entry 004c4070  size 540  status ok
//======================================================================

int sub_4C4070()
{
  int v0; // esi
  int v1; // esi
  int v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int v6; // [esp+4h] [ebp-10h]
  Concurrency::details::SchedulerProxy *v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v7 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v0 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
  v11 = v0 - sub_4F67D0(dword_791364 + 56);
  v1 = sub_4C6A70(v7);
  dword_791E80 = v1 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_791E80 > sub_4F67D0(dword_791364 + 56) )
  {
    if ( dword_791E80 > v11 + sub_4F67D0(dword_791364 + 56) )
    {
      v3 = v11 + sub_4F67D0(dword_791364 + 56);
      v10 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v3;
      sub_4C6C10(v10);
      ATL::CComCriticalSection::~CComCriticalSection(v7);
      v4 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4DC4D0(7, v11 * v4);
      v6 = (__int16)sub_4F6250(v11, 1);
      sub_47EC90((__int16 *)dword_791364, v10);
      dword_791E48 = 0;
    }
    else
    {
      v9 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
      sub_4C6C10(v9);
      ATL::CComCriticalSection::~CComCriticalSection(v7);
      sub_4DC4D0(9, 0);
      Concurrency::details::SchedulerProxy::SetQueueLength(v7, 2u);
      v2 = sub_4F67D0(dword_791364 + 56);
      v6 = (__int16)sub_4F6210(dword_791E80 - v2);
      sub_47EC90((__int16 *)dword_791364, v9);
      dword_791E48 = 6;
    }
  }
  else
  {
    v8 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v8);
    ATL::CComCriticalSection::~CComCriticalSection(v7);
    sub_4DC4D0(9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v7, 2u);
    v6 = (__int16)sub_4F5E80(dword_791E80);
    sub_47EC90((__int16 *)dword_791364, v8);
    dword_791E48 = 6;
  }
  return v6;
}


//======================================================================
// sub_4C4290
// entry 004c4290  size 1952  status ok
//======================================================================

int sub_4C4290()
{
  int v0; // eax
  Concurrency::details::SchedulerProxy *v1; // eax
  int v3; // eax
  Concurrency::details::SchedulerProxy *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  struct CDockablePane *TabbedPane; // [esp-8h] [ebp-24h]
  struct CDockablePane *v10; // [esp-8h] [ebp-24h]
  struct CDockablePane *v11; // [esp-8h] [ebp-24h]
  struct CDockablePane *v12; // [esp-8h] [ebp-24h]
  struct CDockablePane *v13; // [esp-8h] [ebp-24h]
  int v14; // [esp-4h] [ebp-20h]
  int v15; // [esp-4h] [ebp-20h]
  int v16; // [esp-4h] [ebp-20h]
  int v17; // [esp-4h] [ebp-20h]
  int v18; // [esp-4h] [ebp-20h]
  int v19; // [esp+4h] [ebp-18h]
  int v20; // [esp+8h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]

  v0 = sub_47E3B0((void *)dword_791364);
  if ( sub_4C6CB0(v0) == 2 )
  {
    v1 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
    if ( Concurrency::details::SchedulerProxy::GetQueueLength(v1) != 1 )
      sub_5E9F20(
        (char)"pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() == ACTIVE",
        "..\\Casino\\PokerHoldScript.cpp",
        531);
    if ( sub_47E190((_DWORD *)dword_791364) == 3 )
    {
      dword_791E7C = sub_4A2590(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
    }
    else if ( sub_47E190((_DWORD *)dword_791364) == 4 )
    {
      if ( sub_47E280((_DWORD *)dword_791364) )
      {
        if ( sub_47E280((_DWORD *)dword_791364) != 2 )
          sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerHoldScript.cpp", 543);
        if ( sub_47D7F0((_DWORD *)dword_791364) != 1 )
          sub_5E9F20(
            (char)"pokerGame->GetHighlowRules() == NODECLARE_EIGHTSORBETTER",
            "..\\Casino\\PokerHoldScript.cpp",
            544);
        dword_791E7C = sub_4A6760(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
      }
      else
      {
        dword_791E7C = sub_4A4450(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
      }
    }
    else if ( sub_47E190((_DWORD *)dword_791364) == 5 )
    {
      dword_791E7C = sub_4A8BB0(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
    }
    else if ( sub_47E190((_DWORD *)dword_791364) == 6 )
    {
      dword_791E7C = sub_4B0350(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
    }
    else
    {
      sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 553);
    }
    if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (dword_791E7C == 2 || dword_791E7C == 4) )
    {
      if ( sub_4B7D90() )
        v14 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
      else
        v14 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
      TabbedPane = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
      sub_47E3B0((void *)dword_791364);
      v24 = sub_4C79F0(TabbedPane, v14);
      sub_47E3B0((void *)dword_791364);
      unknown_libname_516(v24);
    }
    return 5;
  }
  else
  {
    v3 = sub_47E3B0((void *)dword_791364);
    if ( sub_4C6CB0(v3) == 1 )
    {
      v4 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      if ( Concurrency::details::SchedulerProxy::GetQueueLength(v4) != 1 )
        sub_5E9F20(
          (char)"pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() == ACTIVE",
          "..\\Casino\\PokerHoldScript.cpp",
          574);
      v23 = 0;
      if ( sub_47E190((_DWORD *)dword_791364) == 3 )
      {
        v23 = sub_4A2590(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v23 == 2 || v23 == 4) )
        {
          if ( sub_4B7D90() )
            v15 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v15 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v10 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          sub_47E3B0((void *)dword_791364);
          v22 = sub_4C79F0(v10, v15);
          sub_47E3B0((void *)dword_791364);
          unknown_libname_516(v22);
        }
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 4 )
      {
        if ( sub_47E280((_DWORD *)dword_791364) )
        {
          if ( sub_47E280((_DWORD *)dword_791364) != 2 )
            sub_5E9F20((char)"pokerGame->GetHighlowType() == HIGHLOW", "..\\Casino\\PokerHoldScript.cpp", 602);
          if ( sub_47D7F0((_DWORD *)dword_791364) != 1 )
            sub_5E9F20(
              (char)"pokerGame->GetHighlowRules() == NODECLARE_EIGHTSORBETTER",
              "..\\Casino\\PokerHoldScript.cpp",
              603);
          v23 = sub_4A6760(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
        }
        else
        {
          v23 = sub_4A4450(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
        }
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v23 == 2 || v23 == 4) )
        {
          if ( sub_4B7D90() )
            v16 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v16 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v11 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          sub_47E3B0((void *)dword_791364);
          v21 = sub_4C79F0(v11, v16);
          sub_47E3B0((void *)dword_791364);
          unknown_libname_516(v21);
        }
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 5 )
      {
        v23 = sub_4A8BB0(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v23 == 2 || v23 == 4) )
        {
          if ( sub_4B7D90() )
            v17 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v17 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v12 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          sub_47E3B0((void *)dword_791364);
          v20 = sub_4C79F0(v12, v17);
          sub_47E3B0((void *)dword_791364);
          unknown_libname_516(v20);
        }
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 6 )
      {
        v23 = sub_4B0350(*(int *)&dword_791E74, (int)dword_791E50, dword_791E40);
        if ( sub_47D6B0((_DWORD *)dword_791364) == 1 && (v23 == 2 || v23 == 4) )
        {
          if ( sub_4B7D90() )
            v18 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
          else
            v18 = CAtlTraceProcess::ModuleCount((CAtlTraceProcess *)dword_791364);
          v13 = CMDIChildWndEx::GetTabbedPane((CMDIChildWndEx *)dword_791364);
          sub_47E3B0((void *)dword_791364);
          v19 = sub_4C79F0(v13, v18);
          sub_47E3B0((void *)dword_791364);
          unknown_libname_516(v19);
        }
      }
      else
      {
        sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 649);
      }
      if ( !v23 )
      {
        v5 = sub_47E3B0((void *)dword_791364);
        if ( (unsigned __int8)sub_4C6EB0(v5) )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            v23 = 1;
          else
            v23 = 3;
        }
      }
      if ( !v23 )
      {
        v6 = sub_47E3B0((void *)dword_791364);
        v7 = sub_4C6E30(v6);
        if ( v7 > sub_62FBF0(100) )
        {
          if ( (unsigned __int8)sub_4F6640(dword_791364 + 56) )
            return 1;
          else
            return 3;
        }
      }
      return v23;
    }
    else
    {
      v8 = sub_47E3B0((void *)dword_791364);
      if ( sub_4C6CB0(v8) == 3 )
        sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 711);
      else
        sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 714);
      return 0;
    }
  }
}


//======================================================================
// sub_4C4A30
// entry 004c4a30  size 279  status ok
//======================================================================

char __cdecl sub_4C4A30(unsigned __int8 *a1)
{
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913F0) )
    return 50;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913D8) )
    return 51;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_791414) )
    return 52;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913A4) )
    return 53;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_791404) )
    return 54;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913F8) )
    return 55;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_791410) )
    return 56;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913B4) )
    return 65;
  sub_5E9F20((char)"0", "..\\Casino\\PokerHoldScript.cpp", 745);
  return 63;
}


//======================================================================
// sub_4C4B50
// entry 004c4b50  size 2705  status ok
//======================================================================

int __thiscall sub_4C4B50(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  signed int v6; // esi
  Concurrency::details::SchedulerProxy *v7; // eax
  Concurrency::details::ContextBase *v8; // eax
  int v9; // eax
  int v10; // eax
  Concurrency::details::SchedulerProxy *v11; // eax
  Concurrency::details::ContextBase *v12; // eax
  Concurrency::details::SchedulerProxy *v13; // eax
  Concurrency::details::SchedulerProxy *v14; // eax
  int v15; // eax
  Concurrency::details::SchedulerProxy *v16; // eax
  Concurrency::details::VirtualProcessor *v17; // eax
  int v18; // eax
  int v19; // eax
  Concurrency::details::SchedulerProxy *v20; // eax
  int v21; // eax
  Concurrency::details::SchedulerProxy *v22; // eax
  int v23; // esi
  __int16 v24; // ax
  __int16 v25; // ax
  ATL::CComCriticalSection *v26; // eax
  __int16 v27; // ax
  int v28; // esi
  unsigned int v29; // eax
  int v30; // eax
  Concurrency::details::SchedulerProxy *v31; // eax
  Concurrency::details::VirtualProcessor *v32; // eax
  Concurrency::details::SchedulerProxy *v33; // eax
  int v34; // eax
  struct Concurrency::details::_TaskCollection *v35; // [esp+Ch] [ebp-2Ch]
  __int16 ExecutingContext; // [esp+Ch] [ebp-2Ch]
  unsigned int v37; // [esp+Ch] [ebp-2Ch]
  int v39; // [esp+2Ch] [ebp-Ch]
  __int64 v40; // [esp+30h] [ebp-8h]

  result = sub_5FC3A0(a2);
  switch ( *(this + 5) )
  {
    case 0:
      sub_47E540((ATL::CAtlWinModule *)dword_791364, 1);
      byte_791E38 = 0;
      dword_791E50 = 0;
      dword_791E40 = 0;
      for ( dword_791EB4 = 0; dword_791EB4 < sub_47F950(); ++dword_791EB4 )
      {
        v3 = sub_47E390(dword_791EB4);
        if ( *(_BYTE *)(sub_5DCB00(*(_DWORD *)(v3 + 4)) + 1185)
          || (v4 = sub_47E390(dword_791EB4), !sub_4C6CB0(v4))
          || (v5 = sub_47E390(dword_791EB4),
              v6 = sub_4C6A70(v5),
              v6 < (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364)) )
        {
          v11 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_791EB4);
          Concurrency::details::SchedulerProxy::SetQueueLength(v11, 0);
          v12 = (Concurrency::details::ContextBase *)sub_47E390(dword_791EB4);
          Concurrency::details::ContextBase::SetIndirectAlias(
            v12,
            (struct Concurrency::details::_TaskCollection *)0xFFFFFFFF);
        }
        else
        {
          word_791D80[dword_791EB4] = -1;
          v7 = (Concurrency::details::SchedulerProxy *)sub_47E390(dword_791EB4);
          Concurrency::details::SchedulerProxy::SetQueueLength(v7, 1u);
          v35 = dword_791E50;
          v8 = (Concurrency::details::ContextBase *)sub_47E390(dword_791EB4);
          Concurrency::details::ContextBase::SetIndirectAlias(v8, v35);
          v9 = sub_47E390(dword_791EB4);
          sub_4C9160(v9);
          v10 = sub_47E390(dword_791EB4);
          sub_4DD760(v10);
          dword_791E50 = (struct Concurrency::details::_TaskCollection *)((char *)dword_791E50 + 1);
          ++dword_791E40;
        }
      }
      if ( (int)dword_791E50 >= 2 )
      {
        sub_47E860(dword_791364);
        if ( sub_47E170() != 23 )
        {
          if ( sub_47D6B0((_DWORD *)dword_791364) == 1 )
          {
            if ( *(_DWORD *)(dword_791364 + 208) == -1 )
            {
              if ( *(_DWORD *)(dword_791364 + 212) == -1 )
                *(_DWORD *)(dword_791364 + 208) = *(_DWORD *)(dword_791364 + 216);
              else
                *(_DWORD *)(dword_791364 + 208) = sub_47BBC0((_DWORD *)dword_791364);
            }
            do
            {
              ++*(_DWORD *)(dword_791364 + 208);
              if ( *(_DWORD *)(dword_791364 + 208) > sub_47F950() - 1 )
                *(_DWORD *)(dword_791364 + 208) = 0;
              v13 = (Concurrency::details::SchedulerProxy *)sub_47E390(*(_DWORD *)(dword_791364 + 208));
            }
            while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v13) );
            while ( sub_47BBC0((_DWORD *)dword_791364) != *(_DWORD *)(dword_791364 + 208) )
              sub_47BAC0((_DWORD *)dword_791364);
          }
          else
          {
            if ( *(_DWORD *)(dword_791364 + 212) == -1 )
            {
              if ( *(_DWORD *)(dword_791364 + 208) == -1 )
                *(_DWORD *)(dword_791364 + 212) = *(_DWORD *)(dword_791364 + 216);
              else
                *(_DWORD *)(dword_791364 + 212) = sub_47BBC0((_DWORD *)dword_791364);
            }
            do
            {
              ++*(_DWORD *)(dword_791364 + 212);
              if ( *(_DWORD *)(dword_791364 + 212) > sub_47F950() - 1 )
                *(_DWORD *)(dword_791364 + 212) = 0;
              v14 = (Concurrency::details::SchedulerProxy *)sub_47E390(*(_DWORD *)(dword_791364 + 212));
            }
            while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v14) );
            while ( sub_47BBC0((_DWORD *)dword_791364) != *(_DWORD *)(dword_791364 + 212) )
              sub_47BAC0((_DWORD *)dword_791364);
          }
        }
        dword_791EB0 = 0;
        v15 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v15);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v16 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v16) );
        *(this + 8) = 0;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 8);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
    case 1:
      sub_47ECF0(dword_791364);
      sub_4654D0(*(CRecentFileList **)(dword_791364 + 48));
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD *, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               100000,
               this,
               0,
               5,
               1,
               1.0,
               0.5,
               0);
    case 2:
      sub_4F4320((__int16)dword_791E50);
      sub_47EC90((__int16 *)dword_791364, 0);
      if ( !sub_47D6B0((_DWORD *)dword_791364) )
        goto LABEL_38;
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 3);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 3:
      v17 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v17);
      v18 = sub_47BC60((_DWORD *)dword_791364);
      sub_4F5110(v18, ExecutingContext);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 4:
      dword_791E3C = sub_4C5610();
      sub_47E500();
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 5);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 15);
    case 5:
      if ( dword_791E3C == -1 )
      {
        v19 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v19);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v20 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v20) );
LABEL_38:
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else if ( dword_791E3C == -3 )
      {
        v21 = sub_47BBC0((_DWORD *)dword_791364);
        sub_47E400((_DWORD *)dword_791364, v21);
        do
        {
          sub_47E440((_DWORD *)dword_791364);
          v22 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
        }
        while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v22) );
        if ( sub_4F6420(dword_791364 + 56) > 0 )
        {
          v23 = sub_4F6420(dword_791364 + 56);
          v37 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v23;
          v24 = sub_4F64B0(dword_791364 + 56);
          sub_47E3D0(v24);
          sub_4C6B80(v37);
          v25 = sub_4F64B0(dword_791364 + 56);
          v26 = (ATL::CComCriticalSection *)sub_47E3D0(v25);
          ATL::CComCriticalSection::~CComCriticalSection(v26);
          sub_47EC90((__int16 *)dword_791364, 0);
          v27 = sub_4F64B0(dword_791364 + 56);
          v39 = *(_DWORD *)(sub_47E3D0(v27) + 4);
          v28 = sub_4F6420(dword_791364 + 56);
          v29 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
          v40 = sub_64C8A0(v29 * v28, 0);
          sub_5E7E40(v39, 7, v40, HIDWORD(v40));
        }
        byte_791E38 = 1;
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else
      {
        v30 = sub_47E490(
                (Concurrency::details::VirtualProcessor **)dword_791364,
                (struct Concurrency::IExecutionContext *)dword_791E3C);
        sub_47E400((_DWORD *)dword_791364, v30);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    case 6:
      v31 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      if ( !Concurrency::details::SchedulerProxy::GetQueueLength(v31) )
        sub_5E9F20(
          (char)"pokerGame->GetCurrentPokerPlayer()->GetPlayerStatus() != NOTPLAYING",
          "..\\Casino\\PokerHoldScript.cpp",
          3430);
      v32 = (Concurrency::details::VirtualProcessor *)sub_47E3B0((void *)dword_791364);
      sub_47B010(dword_791364, v32, 1, 0, (int)this, 0, 0, 0);
      do
      {
        sub_47E440((_DWORD *)dword_791364);
        v33 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
      }
      while ( !Concurrency::details::SchedulerProxy::GetQueueLength(v33) );
      if ( (struct Concurrency::details::_TaskCollection *)++*(this + 8) == dword_791E50 )
      {
        *(this + 8) = 0;
        ++dword_791EB0;
      }
      if ( sub_47E190((_DWORD *)dword_791364) == 3 && dword_791EB0 < 2
        || sub_47E190((_DWORD *)dword_791364) == 4 && dword_791EB0 < 4
        || sub_47E190((_DWORD *)dword_791364) == 5 && dword_791EB0 < 4
        || sub_47E190((_DWORD *)dword_791364) == 6 && dword_791EB0 < 4 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      }
      else if ( sub_47E190((_DWORD *)dword_791364) == 5 || sub_47E190((_DWORD *)dword_791364) == 6 )
      {
        dword_791EB0 = 0;
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 7);
      }
      else
      {
LABEL_73:
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 8);
      }
      break;
    case 7:
      if ( sub_47E190((_DWORD *)dword_791364) == 6 )
        sub_47B5B0(dword_791364, *(CRecentFileList ***)(dword_791364 + 36), (int)this);
      else
        sub_47B010(
          dword_791364,
          *(Concurrency::details::VirtualProcessor **)(dword_791364 + 36),
          1,
          0,
          (int)this,
          1,
          0,
          0);
      ++dword_791EB0;
      if ( (sub_47E190((_DWORD *)dword_791364) != 5 || dword_791EB0 >= 4)
        && (sub_47E190((_DWORD *)dword_791364) != 6 || dword_791EB0 >= 5) )
      {
        goto LABEL_73;
      }
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 7);
      break;
    case 8:
      if ( sub_47E190((_DWORD *)dword_791364) == 5 )
      {
        v34 = sub_62FBF0(4);
        sub_47EDD0(dword_791364, v34 + 1);
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 3) + 28))(*(this + 3), 0);
      return sub_5FC420(0);
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4C5610
// entry 004c5610  size 279  status ok
//======================================================================

int sub_4C5610()
{
  int v0; // esi
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v4 = (Concurrency::details::SchedulerProxy *)sub_47E3B0((void *)dword_791364);
  v0 = sub_4C6A70(v4);
  dword_791E80 = v0 / (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
  if ( dword_791E80 > sub_47BC60((_DWORD *)dword_791364) )
  {
    v1 = sub_47BC60((_DWORD *)dword_791364);
    v5 = CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364) * v1;
    sub_4C6C10(v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    v3 = (__int16)sub_4F52A0(dword_791364 + 56);
  }
  else
  {
    v5 = dword_791E80 * CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
    sub_4C6C10(v5);
    ATL::CComCriticalSection::~CComCriticalSection(v4);
    sub_4DC4D0(9, 0);
    Concurrency::details::SchedulerProxy::SetQueueLength(v4, 2u);
    v3 = (__int16)sub_4F53C0(dword_791E80);
  }
  sub_47EC90((__int16 *)dword_791364, v5);
  return v3;
}


//======================================================================
// sub_4C5750
// entry 004c5750  size 974  status ok
//======================================================================

int __thiscall sub_4C5750(int this, int a2)
{
  void *v3; // [esp+8h] [ebp-44h]
  CImageDisplay *v6; // [esp+14h] [ebp-38h]
  CImageDisplay *v7; // [esp+1Ch] [ebp-30h]
  CImageDisplay *v8; // [esp+24h] [ebp-28h]
  ATL::ATLImplementationDetails::CAtlStringMgrStaticInitializer *v9; // [esp+30h] [ebp-1Ch]
  __int16 k; // [esp+38h] [ebp-14h]
  __int16 i; // [esp+3Ch] [ebp-10h]
  __int16 j; // [esp+3Ch] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &PokerPlayer::`vftable';
  *(_DWORD *)(this + 4) = a2;
  if ( *(_DWORD *)(this + 4) == -1 )
  {
    *(_DWORD *)(this + 112) = 2;
  }
  else
  {
    v8 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(this + 4));
    if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
    {
      *(_DWORD *)(this + 112) = 2;
    }
    v7 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(this + 4));
    if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 1 )
      *(_DWORD *)(this + 112) = 1;
    v6 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(this + 4));
    if ( !CImageDisplay::GetDisplayFormat(v6)->rcSource.left )
      *(_DWORD *)(this + 112) = 0;
  }
  *(_DWORD *)(this + 120) = 1;
  *(_DWORD *)(this + 124) = -1;
  *(_DWORD *)(this + 128) = 0;
  *(_BYTE *)(this + 132) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 136) = 1;
  *(_DWORD *)(this + 140) = 1;
  *(_BYTE *)(this + 144) = 1;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 30) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  CBaseRenderer::SignalTimerFired((CBaseRenderer *)this);
  *(_DWORD *)(this + 148) = 0;
  *(_WORD *)(this + 152) = 0;
  for ( i = 0; i < 2; ++i )
  {
    *(_DWORD *)(this + 4 * i + 72) = 0;
    *(_DWORD *)(this + 4 * i + 80) = 0;
  }
  for ( j = 0; j < 3; ++j )
    *(_DWORD *)(this + 4 * j + 88) = 0;
  v9 = (ATL::ATLImplementationDetails::CAtlStringMgrStaticInitializer *)operator new(0xEA8u);
  if ( v9 )
    v3 = ATL::ATLImplementationDetails::CAtlStringMgrStaticInitializer::EnsureLinked(v9);
  else
    v3 = 0;
  *(_DWORD *)(this + 1064) = v3;
  *(_WORD *)(this + 100) = 0;
  for ( k = 0; k < sub_47F950(); ++k )
  {
    sub_4CEA40(k);
    sub_4D1230(k);
    sub_4D3E60(k);
    sub_4D6DF0(k);
    sub_4EC1A0(k);
    sub_4D9180(k);
    sub_4E0510(k);
    sub_4E9E60(k);
    sub_4EE740(k);
    sub_4F0C00(k);
    sub_4F3110(k);
  }
  return this;
}


//======================================================================
// sub_4C5B20
// entry 004c5b20  size 1578  status ok
//======================================================================

void __thiscall sub_4C5B20(ATL::CComCriticalSection **this)
{
  ATL::CComCriticalSection *v2; // [esp+4Ch] [ebp-8Ch]
  void (__thiscall ***v3)(_DWORD, int); // [esp+54h] [ebp-84h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+5Ch] [ebp-7Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+64h] [ebp-74h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+6Ch] [ebp-6Ch]
  void (__thiscall ***v7)(_DWORD, int); // [esp+74h] [ebp-64h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+7Ch] [ebp-5Ch]
  void (__thiscall ***v9)(_DWORD, int); // [esp+84h] [ebp-54h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+8Ch] [ebp-4Ch]
  void (__thiscall ***v11)(_DWORD, int); // [esp+94h] [ebp-44h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+9Ch] [ebp-3Ch]
  void (__thiscall ***v13)(_DWORD, int); // [esp+A4h] [ebp-34h]
  void (__thiscall ***v14)(_DWORD, int); // [esp+ACh] [ebp-2Ch]
  void (__thiscall ***v15)(_DWORD, int); // [esp+B4h] [ebp-24h]
  void (__thiscall ***v16)(_DWORD, int); // [esp+BCh] [ebp-1Ch]
  void (__thiscall ***v17)(_DWORD, int); // [esp+C4h] [ebp-14h]
  __int16 i; // [esp+C8h] [ebp-10h]
  __int16 j; // [esp+C8h] [ebp-10h]

  *this = (ATL::CComCriticalSection *)&PokerPlayer::`vftable';
  if ( *(this + 2) )
  {
    v17 = (void (__thiscall ***)(_DWORD, int))*(this + 2);
    if ( v17 )
      (**v17)(v17, 1);
    *(this + 2) = 0;
  }
  if ( *(this + 3) )
  {
    v16 = (void (__thiscall ***)(_DWORD, int))*(this + 3);
    if ( v16 )
      (**v16)(v16, 1);
    *(this + 3) = 0;
  }
  if ( *(this + 8) )
  {
    v15 = (void (__thiscall ***)(_DWORD, int))*(this + 8);
    if ( v15 )
      (**v15)(v15, 1);
    *(this + 8) = 0;
  }
  if ( *(this + 9) )
  {
    v14 = (void (__thiscall ***)(_DWORD, int))*(this + 9);
    if ( v14 )
      (**v14)(v14, 1);
    *(this + 9) = 0;
  }
  if ( *(this + 10) )
  {
    v13 = (void (__thiscall ***)(_DWORD, int))*(this + 10);
    if ( v13 )
      (**v13)(v13, 1);
    *(this + 10) = 0;
  }
  if ( *(this + 11) )
  {
    v12 = (void (__thiscall ***)(_DWORD, int))*(this + 11);
    if ( v12 )
      (**v12)(v12, 1);
    *(this + 11) = 0;
  }
  if ( *(this + 12) )
  {
    v11 = (void (__thiscall ***)(_DWORD, int))*(this + 12);
    if ( v11 )
      (**v11)(v11, 1);
    *(this + 12) = 0;
  }
  if ( *(this + 13) )
  {
    v10 = (void (__thiscall ***)(_DWORD, int))*(this + 13);
    if ( v10 )
      (**v10)(v10, 1);
    *(this + 13) = 0;
  }
  if ( *(this + 14) )
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*(this + 14);
    if ( v9 )
      (**v9)(v9, 1);
    *(this + 14) = 0;
  }
  if ( *(this + 17) )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))*(this + 17);
    if ( v8 )
      (**v8)(v8, 1);
    *(this + 17) = 0;
  }
  if ( *(this + 15) )
  {
    v7 = (void (__thiscall ***)(_DWORD, int))*(this + 15);
    if ( v7 )
      (**v7)(v7, 1);
    *(this + 15) = 0;
  }
  if ( *(this + 16) )
  {
    v6 = (void (__thiscall ***)(_DWORD, int))*(this + 16);
    if ( v6 )
      (**v6)(v6, 1);
    *(this + 16) = 0;
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( *(this + i + 18) )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))*(this + i + 18);
      if ( v5 )
        (**v5)(v5, 1);
      *(this + i + 18) = 0;
    }
    if ( *(this + i + 20) )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))*(this + i + 20);
      if ( v4 )
        (**v4)(v4, 1);
      *(this + i + 20) = 0;
    }
  }
  for ( j = 0; j < 3; ++j )
  {
    if ( *(this + j + 22) )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))*(this + j + 22);
      if ( v3 )
        (**v3)(v3, 1);
      *(this + j + 22) = 0;
    }
  }
  if ( *(this + 266) )
  {
    v2 = *(this + 266);
    if ( v2 )
    {
      ATL::CComCriticalSection::~CComCriticalSection(v2);
      operator delete(v2);
    }
    *(this + 266) = 0;
  }
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_4C6150
// entry 004c6150  size 42  status ok
//======================================================================

LONG *__thiscall sub_4C6150(_DWORD *this)
{
  CImageDisplay *v2; // [esp+4h] [ebp-4h]

  v2 = (CImageDisplay *)sub_5DCB00(*(this + 1));
  return &CImageDisplay::GetDisplayFormat(v2)->rcSource.top;
}


//======================================================================
// sub_4C6180
// entry 004c6180  size 43  status ok
//======================================================================

int __thiscall sub_4C6180(_DWORD *this)
{
  return *(_DWORD *)(sub_5DCB00(*(this + 1)) + 32);
}


//======================================================================
// sub_4C61B0
// entry 004c61b0  size 88  status ok
//======================================================================

bool __thiscall sub_4C61B0(_DWORD *this)
{
  CImageDisplay *v3; // [esp+8h] [ebp-Ch]

  v3 = (CImageDisplay *)sub_5DCB00(*(this + 1));
  return CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 3;
}


//======================================================================
// sub_4C6210
// entry 004c6210  size 63  status ok
//======================================================================

BOOL __thiscall sub_4C6210(_DWORD *this)
{
  CImageDisplay *v2; // [esp+4h] [ebp-8h]

  v2 = (CImageDisplay *)sub_5DCB00(*(this + 1));
  return CImageDisplay::GetDisplayFormat(v2)->rcSource.left != 0;
}


//======================================================================
// sub_4C6250
// entry 004c6250  size 73  status ok
//======================================================================

int __thiscall sub_4C6250(_DWORD *this, int a2, int a3, double a4, double a5, int a6, int a7)
{
  _DWORD v8[4]; // [esp+4h] [ebp-20h] BYREF
  double v9; // [esp+14h] [ebp-10h]
  double v10; // [esp+1Ch] [ebp-8h]

  v8[0] = *(this + 1);
  v8[1] = a2;
  v8[2] = a3;
  v9 = a4;
  v10 = a5;
  return sub_639390(v8, a6, a7, 1);
}


//======================================================================
// sub_4C62D0
// entry 004c62d0  size 625  status ok
//======================================================================

int __thiscall sub_4C62D0(int this, char a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-70h]
  int v4; // [esp+Ch] [ebp-68h]
  int v5; // [esp+14h] [ebp-60h]
  int v6; // [esp+1Ch] [ebp-58h]

  result = this;
  if ( *(_DWORD *)(this + 112) )
  {
    if ( a2 )
    {
      if ( *(_DWORD *)(this + 8) )
        (***(void (__thiscall ****)(_DWORD, int))(this + 8))(*(_DWORD *)(this + 8), 1);
      if ( operator new(0x10u) )
        v6 = sub_60C5F0();
      else
        v6 = 0;
      *(_DWORD *)(this + 8) = v6;
      if ( *(_DWORD *)(this + 12) )
        (***(void (__thiscall ****)(_DWORD, int))(this + 12))(*(_DWORD *)(this + 12), 1);
      if ( operator new(0x10u) )
        v5 = sub_60C5F0();
      else
        v5 = 0;
      *(_DWORD *)(this + 12) = v5;
      return v5;
    }
    else
    {
      *(_DWORD *)(this + 108) = 0;
      if ( *(_DWORD *)(this + 8) )
        (***(void (__thiscall ****)(_DWORD, int))(this + 8))(*(_DWORD *)(this + 8), 1);
      if ( operator new(0x10u) )
        v4 = sub_60C5F0();
      else
        v4 = 0;
      *(_DWORD *)(this + 8) = v4;
      if ( *(_DWORD *)(this + 12) )
        (***(void (__thiscall ****)(_DWORD, int))(this + 12))(*(_DWORD *)(this + 12), 1);
      if ( operator new(0x10u) )
        v3 = sub_60C5F0();
      else
        v3 = 0;
      *(_DWORD *)(this + 12) = v3;
      ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)this);
      sub_4DB630();
      sub_4DBDD0();
      return sub_4C6550(this);
    }
  }
  return result;
}


//======================================================================
// sub_4C6550
// entry 004c6550  size 128  status ok
//======================================================================

int __thiscall sub_4C6550(void *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_4C65D0(this, this);
  if ( v3 == 1 )
    v3 = sub_62FBF0(1000) >= 35;
  if ( v3 == 2 && (int)sub_62FBF0(1000) < 45 )
    v3 = 3;
  v1 = sub_62FBF0(8);
  return sub_4C66B0(v1, v3);
}


//======================================================================
// sub_4C65D0
// entry 004c65d0  size 147  status ok
//======================================================================

int __thiscall sub_4C65D0(_DWORD *this)
{
  int v3; // [esp+8h] [ebp-8h]
  unsigned int v4; // [esp+Ch] [ebp-4h]

  if ( sub_4C61B0(this) )
    return -1;
  v3 = sub_5DCB00(*(this + 1));
  v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 368))(
         dword_162EE84,
         *(_DWORD *)(v3 + 8));
  if ( v4 <= 9 )
    return dword_72064C[3 * v4 + 69];
  sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 286);
  return -1;
}


//======================================================================
// sub_4C6670
// entry 004c6670  size 51  status ok
//======================================================================

bool __stdcall sub_4C6670(int a1)
{
  if ( a1 < 1 || a1 > 10 )
    return 0;
  if ( a1 == 3 )
    return 0;
  return a1 != 8;
}


//======================================================================
// sub_4C66B0
// entry 004c66b0  size 242  status ok
//======================================================================

int __thiscall sub_4C66B0(_DWORD *this, unsigned int a2, int a3)
{
  if ( *(this + 28) == 2 )
  {
    a2 = 6;
    a3 = 2;
  }
  if ( a2 >= 8 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 336);
    a2 = sub_62FBF0(8);
  }
  switch ( a2 )
  {
    case 0u:
      sub_4C67D0(1);
      break;
    case 1u:
      sub_4C67D0(2);
      break;
    case 2u:
      sub_4C67D0(4);
      break;
    case 3u:
      sub_4C67D0(5);
      break;
    case 4u:
      sub_4C67D0(6);
      break;
    case 5u:
      sub_4C67D0(7);
      break;
    case 6u:
      sub_4C67D0(9);
      break;
    case 7u:
      sub_4C67D0(10);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 370);
      sub_4C67D0(1);
      break;
  }
  return sub_4C68C0(a3);
}


//======================================================================
// sub_4C67D0
// entry 004c67d0  size 227  status ok
//======================================================================

int __thiscall sub_4C67D0(_DWORD *this, int a2)
{
  int result; // eax

  if ( !sub_4C6670(a2) )
    sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 382);
  sub_4C9300(a2);
  sub_4C9BE0(a2);
  sub_4D03C0(a2);
  sub_4D2F80(a2);
  sub_4D5BD0(a2);
  sub_4D7F60(a2);
  sub_4DDCF0(a2);
  sub_4E1740(a2);
  sub_4EAF80(a2);
  sub_4ED310(a2);
  sub_4EF800(a2);
  result = sub_4F1E00(a2);
  *(this + 255) = a2;
  return result;
}


//======================================================================
// sub_4C68C0
// entry 004c68c0  size 54  status ok
//======================================================================

int __thiscall sub_4C68C0(_DWORD *this, int a2)
{
  if ( a2 == -1 )
    *(this + 256) = 0;
  else
    *(this + 256) = a2;
  return sub_4C6900(this);
}


//======================================================================
// sub_4C6900
// entry 004c6900  size 362  status ok
//======================================================================

int __thiscall sub_4C6900(int this)
{
  int v2; // [esp+0h] [ebp-34h]
  _DWORD v4[8]; // [esp+10h] [ebp-24h] BYREF
  int v5; // [esp+30h] [ebp-4h]

  v5 = 0;
  v5 = *(_DWORD *)(this + 1024);
  if ( v5 == 1 || v5 == 2 || v5 == 3 )
  {
    if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
      v2 = *(_DWORD *)(dword_7947E0 + 20220);
    else
      v2 = sub_47E2C0((_DWORD *)dword_791364);
    sub_519C80(v2, *(_DWORD *)(this + 1024), v4);
    *(_DWORD *)(this + 1028) = v4[0];
    *(_DWORD *)(this + 1032) = v4[1];
    *(_DWORD *)(this + 1036) = v4[2];
    *(_DWORD *)(this + 1040) = v4[4];
    *(_DWORD *)(this + 1044) = v4[5];
    *(_DWORD *)(this + 1052) = v4[7];
    *(_DWORD *)(this + 1048) = v4[6];
    *(_DWORD *)(this + 1056) = v4[3];
    *(_BYTE *)(this + 1060) = 0;
    return this;
  }
  else
  {
    *(_DWORD *)(this + 1028) = 0;
    *(_DWORD *)(this + 1032) = 0;
    *(_DWORD *)(this + 1036) = 0;
    *(_DWORD *)(this + 1040) = 0;
    *(_DWORD *)(this + 1044) = 0;
    *(_DWORD *)(this + 1048) = 0;
    *(_DWORD *)(this + 1052) = 0;
    *(_DWORD *)(this + 1056) = 0;
    *(_BYTE *)(this + 1060) = 0;
    return this;
  }
}


//======================================================================
// sub_4C6A70
// entry 004c6a70  size 33  status ok
//======================================================================

int __thiscall sub_4C6A70(_DWORD *this)
{
  int v1; // eax

  v1 = sub_5DCB00(*(this + 1));
  return sub_5D5A50(v1);
}


//======================================================================
// sub_4C6AA0
// entry 004c6aa0  size 76  status ok
//======================================================================

int __thiscall sub_4C6AA0(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // [esp-4h] [ebp-10h]

  v2 = sub_5DCB00(*(this + 1));
  v4 = sub_5D5A70(v2);
  sub_5DCB00(*(this + 1));
  return sub_5D5AF0(a2, v4);
}


//======================================================================
// sub_4C6B30
// entry 004c6b30  size 79  status ok
//======================================================================

_DWORD *__thiscall sub_4C6B30(_DWORD *this)
{
  _DWORD *v2; // [esp+0h] [ebp-8h]

  *(_DWORD *)(sub_5DCB00(*(this + 1)) + 1228) = *(this + 26);
  v2 = (_DWORD *)(sub_5DCB00(*(this + 1)) + 1220);
  *v2 += *(this + 26);
  return this;
}


//======================================================================
// sub_4C6B80
// entry 004c6b80  size 131  status ok
//======================================================================

int __thiscall sub_4C6B80(_DWORD *this, int a2)
{
  *(this + 26) += a2;
  if ( sub_4C61B0(this) )
    *(_DWORD *)(dword_791364 + 1036) = a2;
  sub_5DCB00(*(this + 1));
  sub_5D5CF0(a2, 0);
  sub_5D9180(*(this + 1), 0);
  return sub_4C6A70(this);
}


//======================================================================
// sub_4C6C10
// entry 004c6c10  size 153  status ok
//======================================================================

int __thiscall sub_4C6C10(_DWORD *this, int a2)
{
  *(this + 26) -= a2;
  if ( sub_4C61B0(this) && *(_BYTE *)(dword_791364 + 56) )
    *(this + 32) += a2;
  sub_5DCB00(*(this + 1));
  sub_5D5CF0(-a2, 0);
  sub_5D9180(*(this + 1), 0);
  return sub_4C6A70(this);
}


//======================================================================
// sub_4C6CB0
// entry 004c6cb0  size 211  status ok
//======================================================================

int __thiscall sub_4C6CB0(_DWORD *this)
{
  CImageDisplay *v4; // [esp+8h] [ebp-1Ch]
  CImageDisplay *v5; // [esp+10h] [ebp-14h]
  CImageDisplay *v6; // [esp+18h] [ebp-Ch]

  v6 = (CImageDisplay *)sub_5DCB00(*(this + 1));
  if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
  {
    return 2;
  }
  v5 = (CImageDisplay *)sub_5DCB00(*(this + 1));
  if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 1 )
    return 1;
  v4 = (CImageDisplay *)sub_5DCB00(*(this + 1));
  if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left )
    return *(this + 28);
  else
    return 0;
}


//======================================================================
// sub_4C6D90
// entry 004c6d90  size 22  status ok
//======================================================================

_DWORD *__thiscall sub_4C6D90(_DWORD *this, int a2)
{
  *(this + 28) = a2;
  return this;
}


//======================================================================
// sub_4C6DB0
// entry 004c6db0  size 20  status ok
//======================================================================

int __thiscall sub_4C6DB0(_DWORD *this)
{
  return *(this + 257);
}


//======================================================================
// sub_4C6E30
// entry 004c6e30  size 20  status ok
//======================================================================

int __thiscall sub_4C6E30(_DWORD *this)
{
  return *(this + 259);
}


//======================================================================
// sub_4C6E70
// entry 004c6e70  size 20  status ok
//======================================================================

int __thiscall sub_4C6E70(_DWORD *this)
{
  return *(this + 264);
}


//======================================================================
// sub_4C6EB0
// entry 004c6eb0  size 20  status ok
//======================================================================

char __thiscall sub_4C6EB0(_BYTE *this)
{
  return *(this + 1060);
}


//======================================================================
// sub_4C6ED0
// entry 004c6ed0  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_4C6ED0(_BYTE *this, char a2)
{
  *(this + 1060) = a2;
  return this;
}


//======================================================================
// sub_4C6EF0
// entry 004c6ef0  size 64  status ok
//======================================================================

int __thiscall sub_4C6EF0(_DWORD *this, char a2, int a3)
{
  int v3; // eax

  if ( a3 == 6 )
    v3 = a2 != 0 ? 0 : 9;
  else
    v3 = a2 != 0 ? 9 : 0;
  return *(this + 260) + v3;
}


//======================================================================
// sub_4C6F50
// entry 004c6f50  size 20  status ok
//======================================================================

int __thiscall sub_4C6F50(_DWORD *this)
{
  return *(this + 261);
}


//======================================================================
// sub_4C6F90
// entry 004c6f90  size 32  status ok
//======================================================================

int __thiscall sub_4C6F90(_DWORD *this, char a2, int a3)
{
  return *(this + 262) + (a2 != 0);
}


//======================================================================
// sub_4C6FD0
// entry 004c6fd0  size 20  status ok
//======================================================================

int __thiscall sub_4C6FD0(_DWORD *this)
{
  return *(this + 263);
}


//======================================================================
// sub_4C7090
// entry 004c7090  size 20  status ok
//======================================================================

char __thiscall sub_4C7090(_BYTE *this)
{
  return *(this + 132);
}


//======================================================================
// sub_4C70B0
// entry 004c70b0  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_4C70B0(_BYTE *this, char a2)
{
  *(this + 132) = a2;
  return this;
}


//======================================================================
// sub_4C70F0
// entry 004c70f0  size 273  status ok
//======================================================================

_DWORD *__thiscall sub_4C70F0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  *(this + 35) = a2;
  result = (_DWORD *)*(this + 35);
  switch ( (unsigned int)result )
  {
    case 0xFFFFFFFF:
      *(this + 4) = 119;
      *(this + 5) = 213;
      result = this;
      break;
    case 0u:
      *(this + 4) = 14;
      *(this + 5) = 30;
      result = this;
      break;
    case 1u:
      *(this + 4) = 218;
      *(this + 5) = 30;
      break;
    case 2u:
      *(this + 4) = 530;
      *(this + 5) = 30;
      result = this;
      break;
    case 3u:
      *(this + 4) = 530;
      *(this + 5) = 170;
      result = this;
      break;
    case 4u:
      *(this + 4) = 530;
      *(this + 5) = 310;
      break;
    case 5u:
      *(this + 4) = 321;
      *(this + 5) = 310;
      result = this;
      break;
    case 6u:
      *(this + 4) = 14;
      *(this + 5) = 310;
      result = this;
      break;
    case 7u:
      *(this + 4) = 14;
      *(this + 5) = 170;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4C7230
// entry 004c7230  size 188  status ok
//======================================================================

int __thiscall sub_4C7230(CRecentFileList **this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId((Concurrency::details::VirtualProcessor *)this) != -1 )
    sub_4C8EB0(this);
  for ( i = 0; i < CRecentFileList::GetSize(*(this + 2)); ++i )
  {
    v3 = sub_4C72F0(*(this + 2), i);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 112))(v3);
  }
  for ( j = 0; ; ++j )
  {
    result = CRecentFileList::GetSize(*(this + 3));
    if ( j >= result )
      break;
    v4 = sub_4C72F0(*(this + 3), j);
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 112))(v4);
  }
  return result;
}


//======================================================================
// sub_4C72F0
// entry 004c72f0  size 24  status ok
//======================================================================

int __cdecl sub_4C72F0(int a1, int a2)
{
  return *(_DWORD *)(sub_4C7310(a1, a2) + 8);
}


//======================================================================
// sub_4C7310
// entry 004c7310  size 17  status ok
//======================================================================

int __cdecl sub_4C7310(int a1, int a2)
{
  return sub_60CA40(a2);
}


//======================================================================
// sub_4C7330
// entry 004c7330  size 33  status ok
//======================================================================

int __thiscall sub_4C7330(_DWORD *this)
{
  sub_60CA10(*(this + 2));
  return sub_60CA10(*(this + 3));
}


//======================================================================
// sub_4C7360
// entry 004c7360  size 860  status ok
//======================================================================

int __thiscall sub_4C7360(CRecentFileList **this)
{
  int result; // eax
  int Size; // eax
  _BYTE *v3; // [esp+4h] [ebp-7Ch]
  _BYTE *v4; // [esp+Ch] [ebp-74h]
  _BYTE *v5; // [esp+14h] [ebp-6Ch]
  _BYTE *v6; // [esp+1Ch] [ebp-64h]
  _BYTE *v7; // [esp+24h] [ebp-5Ch]
  _BYTE *v8; // [esp+2Ch] [ebp-54h]
  _BYTE *v9; // [esp+34h] [ebp-4Ch]
  _BYTE *v10; // [esp+3Ch] [ebp-44h]
  char v12; // [esp+48h] [ebp-38h] BYREF
  char v13; // [esp+49h] [ebp-37h] BYREF
  bool v14; // [esp+4Ah] [ebp-36h]
  char v15; // [esp+4Bh] [ebp-35h] BYREF
  char v16; // [esp+4Ch] [ebp-34h] BYREF
  bool v17; // [esp+4Dh] [ebp-33h]
  char v18; // [esp+4Eh] [ebp-32h] BYREF
  char v19; // [esp+4Fh] [ebp-31h] BYREF
  bool v20; // [esp+50h] [ebp-30h]
  char v21; // [esp+51h] [ebp-2Fh] BYREF
  char v22; // [esp+52h] [ebp-2Eh] BYREF
  bool v23; // [esp+53h] [ebp-2Dh]
  int v24; // [esp+54h] [ebp-2Ch]
  int v25; // [esp+58h] [ebp-28h]
  int j; // [esp+5Ch] [ebp-24h]
  int i; // [esp+60h] [ebp-20h]
  bool v28; // [esp+67h] [ebp-19h]
  Concurrency::details::_CancellationTokenRegistration *v29; // [esp+68h] [ebp-18h]
  Concurrency::details::_CancellationTokenRegistration *v30; // [esp+6Ch] [ebp-14h]
  Concurrency::details::_CancellationTokenRegistration *v31; // [esp+70h] [ebp-10h]
  int v32; // [esp+7Ch] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize(*(this + 2));
    if ( i >= result )
      break;
    for ( j = 0; ; ++j )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( j >= Size - 1 )
        break;
      v30 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), j);
      v31 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), j + 1);
      v24 = *((_DWORD *)v30 + 3);
      v25 = *((_DWORD *)v31 + 3);
      if ( sub_47D6F0((_DWORD *)dword_791364) == 1 )
      {
        v10 = sub_464130(&v21, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
        v32 = 0;
        v9 = (_BYTE *)sub_4DD940((int)&v22, v30);
        LOBYTE(v32) = 1;
        v23 = sub_464500(v9, v10);
        LOBYTE(v32) = 0;
        ATL::CComCriticalSection::~CComCriticalSection(&v22);
        v32 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v21);
        if ( v23 )
          v24 += 100;
        v8 = sub_464130(&v18, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
        v32 = 2;
        v7 = (_BYTE *)sub_4DD940((int)&v19, v31);
        LOBYTE(v32) = 3;
        v20 = sub_464500(v7, v8);
        LOBYTE(v32) = 2;
        ATL::CComCriticalSection::~CComCriticalSection(&v19);
        v32 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v18);
        if ( v20 )
          v25 += 100;
      }
      else if ( sub_47D6F0((_DWORD *)dword_791364) == 2 )
      {
        v6 = sub_464130(&v15, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
        v32 = 4;
        v5 = (_BYTE *)sub_4DDB10((int)&v16, v30);
        LOBYTE(v32) = 5;
        v17 = sub_464500(v5, v6);
        LOBYTE(v32) = 4;
        ATL::CComCriticalSection::~CComCriticalSection(&v16);
        v32 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v15);
        if ( v17 )
          v24 += 100;
        v4 = sub_464130(&v12, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
        v32 = 6;
        v3 = (_BYTE *)sub_4DDB10((int)&v13, v31);
        LOBYTE(v32) = 7;
        v14 = sub_464500(v3, v4);
        LOBYTE(v32) = 6;
        ATL::CComCriticalSection::~CComCriticalSection(&v13);
        v32 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v12);
        if ( v14 )
          v25 += 100;
      }
      if ( sub_47CE60((_DWORD *)dword_791364) == 6 || sub_47CE60((_DWORD *)dword_791364) == 13 )
        v28 = v24 > v25;
      else
        v28 = v24 < v25;
      if ( v28 )
      {
        v29 = v31;
        sub_60C890(v31);
        sub_60C7D0(v29);
      }
    }
  }
  return result;
}


//======================================================================
// sub_4C76E0
// entry 004c76e0  size 285  status ok
//======================================================================

int __thiscall sub_4C76E0(int this)
{
  int result; // eax
  int Size; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-1Ch]
  int v6; // [esp-4h] [ebp-1Ch]
  int i; // [esp+8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  unsigned int ExecutionResourceId; // [esp+14h] [ebp-4h]

  ExecutionResourceId = Concurrency::details::VirtualProcessor::GetExecutionResourceId((Concurrency::details::VirtualProcessor *)this);
  result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8)) - 1;
  for ( i = result; i > -1; --i )
  {
    v9 = sub_4C7310(*(_DWORD *)(this + 8), i);
    v10 = *(_DWORD *)(v9 + 8);
    switch ( ExecutionResourceId )
    {
      case 0xFFFFFFFF:
      case 0u:
      case 1u:
      case 6u:
      case 7u:
        v5 = *(_DWORD *)(this + 20) + 8;
        Size = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8));
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 68))(
          v10,
          13 * (Size - 1 - i) + *(_DWORD *)(this + 16) + 86,
          v5);
        break;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
        v6 = *(_DWORD *)(this + 20) + 8;
        v3 = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8));
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 68))(
          v10,
          13 * (v3 - 1 - i) + *(_DWORD *)(this + 16) - 85,
          v6);
        break;
      default:
        break;
    }
    sub_463D40(v9);
    v4 = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8));
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 108))(v10, v4 - i + 90);
  }
  return result;
}


//======================================================================
// sub_4C7820
// entry 004c7820  size 313  status ok
//======================================================================

int __thiscall sub_4C7820(int this, char a2)
{
  int result; // eax
  int Size; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-18h]
  int v6; // [esp-4h] [ebp-18h]
  int i; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  unsigned int ExecutionResourceId; // [esp+10h] [ebp-4h]

  ExecutionResourceId = Concurrency::details::VirtualProcessor::GetExecutionResourceId((Concurrency::details::VirtualProcessor *)this);
  result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8)) - 1;
  for ( i = result; i > -1; --i )
  {
    v9 = sub_4C72F0(*(_DWORD *)(this + 8), i);
    switch ( ExecutionResourceId )
    {
      case 0xFFFFFFFF:
      case 0u:
      case 1u:
      case 6u:
      case 7u:
        v5 = *(_DWORD *)(this + 20) + 8;
        Size = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8));
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(
          v9,
          13 * (Size - 1 - i) + *(_DWORD *)(this + 16) + 86,
          v5);
        break;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
        v6 = *(_DWORD *)(this + 20) + 8;
        v4 = CRecentFileList::GetSize(*(CRecentFileList **)(this + 8));
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(
          v9,
          13 * (v4 - 1 - i) + *(_DWORD *)(this + 16) - 85,
          v6);
        break;
      default:
        break;
    }
    if ( a2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, 104 - i);
    else
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, 13 - i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
  }
  return result;
}


//======================================================================
// sub_4C7970
// entry 004c7970  size 55  status ok
//======================================================================

int __thiscall sub_4C7970(int *this)
{
  if ( *(this + 37) <= 0 )
    sub_5E9F20((char)"lDesiredLimitBetOrRaiseChips > 0L", "..\\Casino\\PokerPlayer.cpp", 942);
  return *(this + 37);
}


//======================================================================
// sub_4C79D0
// entry 004c79d0  size 27  status ok
//======================================================================

_WORD *__thiscall sub_4C79D0(_WORD *this, __int16 a2)
{
  *(this + 76) = a2;
  return this;
}


//======================================================================
// sub_4C79F0
// entry 004c79f0  size 591  status ok
//======================================================================

int __thiscall sub_4C79F0(__int16 *this, int a2, int a3)
{
  int v4; // esi
  __int16 v6; // [esp+Ch] [ebp-10h]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]
  int v9; // [esp+18h] [ebp-4h]
  int v10; // [esp+18h] [ebp-4h]

  if ( a2 <= 0 )
    sub_5E9F20((char)"lMin > 0L", "..\\Casino\\PokerPlayer.cpp", 959);
  if ( a3 <= 0 )
    sub_5E9F20((char)"lMax > 0L", "..\\Casino\\PokerPlayer.cpp", 960);
  if ( a2 >= a3 )
    sub_5E9F20((char)"lMin < lMax", "..\\Casino\\PokerPlayer.cpp", 961);
  v7 = 4 * a3 / 10;
  if ( a2 >= v7 )
    sub_5E9F20((char)"lMin < lMedian", "..\\Casino\\PokerPlayer.cpp", 963);
  if ( *(this + 76) <= 0 )
    sub_5E9F20((char)"shLimitBetOrRaiseAggressiveness > 0", "..\\Casino\\PokerPlayer.cpp", 965);
  if ( *(this + 76) > 4 )
    sub_5E9F20((char)"shLimitBetOrRaiseAggressiveness <= 4", "..\\Casino\\PokerPlayer.cpp", 966);
  if ( *(this + 76) == 4 )
    return a3;
  v8 = sub_62FBF0(100);
  if ( v8 < *(this + *(this + 76) + 76) )
    return a2;
  v9 = v8 - *(this + *(this + 76) + 76);
  if ( v9 < *(this + *(this + 76) + 79) )
    return a2 * (sub_62FBF0((__int16)(v7 / a2)) + 1);
  v10 = v9 - *(this + *(this + 76) + 79);
  if ( v10 >= *(this + *(this + 76) + 82) )
  {
    if ( v10 - *(this + *(this + 76) + 82) >= *(this + *(this + 76) + 85) )
      return a3;
    else
      return v7 + a2 * (sub_62FBF0((__int16)((a3 - v7) / a2)) + 1);
  }
  else
  {
    v6 = v7 / a2;
    v4 = sub_62FBF0(v6);
    return a2 * (v4 + sub_62FBF0(v6) + 2);
  }
}


//======================================================================
// sub_4C7C40
// entry 004c7c40  size 229  status ok
//======================================================================

__int16 *__thiscall sub_4C7C40(CRecentFileList **this, __int16 *a2)
{
  int Size; // eax
  Concurrency::details::_CancellationTokenRegistration *v3; // eax
  _BYTE *v5; // [esp+4h] [ebp-2Ch]
  _BYTE v7[5]; // [esp+17h] [ebp-19h] BYREF
  __int16 v8[4]; // [esp+1Ch] [ebp-14h] BYREF
  int v9; // [esp+2Ch] [ebp-4h]

  sub_484300(v8);
  v9 = 1;
  if ( *(this + 2) )
  {
    for ( *(_DWORD *)&v7[1] = 0; ; ++*(_DWORD *)&v7[1] )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( *(int *)&v7[1] >= Size )
        break;
      v3 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), *(int *)&v7[1]);
      v5 = (_BYTE *)sub_4DD780((int)v7, v3);
      LOBYTE(v9) = 2;
      sub_484830(v8, v5);
      LOBYTE(v9) = 1;
      ATL::CComCriticalSection::~CComCriticalSection(v7);
    }
  }
  sub_484320(a2, (int)v8);
  LOBYTE(v9) = 0;
  sub_484470(v8);
  return a2;
}


//======================================================================
// sub_4C7D30
// entry 004c7d30  size 465  status ok
//======================================================================

__int16 *__thiscall sub_4C7D30(CRecentFileList **this, __int16 *a2, char a3, __int16 a4)
{
  int Size; // eax
  Concurrency::details::_CancellationTokenRegistration *v5; // eax
  _BYTE *v7; // [esp+4h] [ebp-2Ch]
  _BYTE v9[5]; // [esp+17h] [ebp-19h] BYREF
  __int16 v10[4]; // [esp+1Ch] [ebp-14h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  if ( CRecentFileList::GetSize(*(this + 2)) != 5 )
    sub_5E9F20((char)"hand->Size() == 5", "..\\Casino\\PokerPlayer.cpp", 1018);
  if ( a4 < 0 )
    sub_5E9F20((char)"shCardsToUse >= 0", "..\\Casino\\PokerPlayer.cpp", 1019);
  if ( a4 > 5 )
    sub_5E9F20((char)"shCardsToUse <= 5", "..\\Casino\\PokerPlayer.cpp", 1020);
  sub_484300(v10);
  v11 = 1;
  if ( *(this + 2) )
  {
    for ( *(_DWORD *)&v9[1] = 0; ; ++*(_DWORD *)&v9[1] )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( *(int *)&v9[1] >= Size )
        break;
      if ( (*(_DWORD *)&v9[1] != 4 || a4 >= 1 && !a3)
        && (*(_DWORD *)&v9[1] != 2 || a4 >= 3 && !a3)
        && (*(_DWORD *)&v9[1] != 3 || a4 >= 2 && a3)
        && (*(_DWORD *)&v9[1] != 1 || a4 >= 4 && a3)
        && (*(_DWORD *)&v9[1] || a4 >= 5) )
      {
        v5 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), *(int *)&v9[1]);
        v7 = (_BYTE *)sub_4DD780((int)v9, v5);
        LOBYTE(v11) = 2;
        sub_484830(v10, v7);
        LOBYTE(v11) = 1;
        ATL::CComCriticalSection::~CComCriticalSection(v9);
      }
    }
  }
  sub_484320(a2, (int)v10);
  LOBYTE(v11) = 0;
  sub_484470(v10);
  return a2;
}


//======================================================================
// sub_4C7F10
// entry 004c7f10  size 410  status ok
//======================================================================

__int16 *__thiscall sub_4C7F10(CRecentFileList **this, __int16 *a2, __int16 a3)
{
  int Size; // eax
  Concurrency::details::_CancellationTokenRegistration *v4; // eax
  _BYTE *v6; // [esp+4h] [ebp-2Ch]
  _BYTE v8[5]; // [esp+17h] [ebp-19h] BYREF
  __int16 v9[4]; // [esp+1Ch] [ebp-14h] BYREF
  int v10; // [esp+2Ch] [ebp-4h]

  if ( CRecentFileList::GetSize(*(this + 2)) != 4 )
    sub_5E9F20((char)"hand->Size() == 4", "..\\Casino\\PokerPlayer.cpp", 1047);
  if ( a3 < 0 )
    sub_5E9F20((char)"shCardsToUse >= 0", "..\\Casino\\PokerPlayer.cpp", 1048);
  if ( a3 > 4 )
    sub_5E9F20((char)"shCardsToUse <= 4", "..\\Casino\\PokerPlayer.cpp", 1049);
  sub_484300(v9);
  v10 = 1;
  if ( *(this + 2) )
  {
    for ( *(_DWORD *)&v8[1] = 0; ; ++*(_DWORD *)&v8[1] )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( *(int *)&v8[1] >= Size )
        break;
      if ( (*(_DWORD *)&v8[1] != 3 || a3 >= 1)
        && (*(_DWORD *)&v8[1] != 2 || a3 >= 2)
        && (*(_DWORD *)&v8[1] != 1 || a3 >= 3)
        && (*(_DWORD *)&v8[1] || a3 >= 4) )
      {
        v4 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), *(int *)&v8[1]);
        v6 = (_BYTE *)sub_4DD780((int)v8, v4);
        LOBYTE(v10) = 2;
        sub_484830(v9, v6);
        LOBYTE(v10) = 1;
        ATL::CComCriticalSection::~CComCriticalSection(v8);
      }
    }
  }
  sub_484320(a2, (int)v9);
  LOBYTE(v10) = 0;
  sub_484470(v9);
  return a2;
}


//======================================================================
// sub_4C80B0
// entry 004c80b0  size 343  status ok
//======================================================================

__int16 *__thiscall sub_4C80B0(CRecentFileList **this, __int16 *a2)
{
  int Size; // eax
  Concurrency::details::_CancellationTokenRegistration *v3; // eax
  int v4; // eax
  Concurrency::details::_CancellationTokenRegistration *v5; // eax
  _BYTE *v7; // [esp+4h] [ebp-38h]
  _BYTE *v8; // [esp+Ch] [ebp-30h]
  _WORD v10[3]; // [esp+1Eh] [ebp-1Eh] BYREF
  int i; // [esp+24h] [ebp-18h]
  __int16 v12[4]; // [esp+28h] [ebp-14h] BYREF
  int v13; // [esp+38h] [ebp-4h]

  sub_484300(v12);
  v13 = 1;
  if ( *(this + 2) )
  {
    for ( i = 0; ; ++i )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( i >= Size )
        break;
      v3 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), i);
      v8 = (_BYTE *)sub_4DD940((int)v10 + 1, v3);
      LOBYTE(v13) = 2;
      sub_484830(v12, v8);
      LOBYTE(v13) = 1;
      ATL::CComCriticalSection::~CComCriticalSection((char *)v10 + 1);
    }
  }
  if ( *(this + 3) )
  {
    for ( *(_DWORD *)&v10[1] = 0; ; ++*(_DWORD *)&v10[1] )
    {
      v4 = CRecentFileList::GetSize(*(this + 3));
      if ( *(int *)&v10[1] >= v4 )
        break;
      v5 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 3), *(int *)&v10[1]);
      v7 = (_BYTE *)sub_4DD940((int)v10, v5);
      LOBYTE(v13) = 3;
      sub_484830(v12, v7);
      LOBYTE(v13) = 1;
      ATL::CComCriticalSection::~CComCriticalSection(v10);
    }
  }
  sub_484320(a2, (int)v12);
  LOBYTE(v13) = 0;
  sub_484470(v12);
  return a2;
}


//======================================================================
// sub_4C8210
// entry 004c8210  size 229  status ok
//======================================================================

__int16 *__thiscall sub_4C8210(CRecentFileList **this, __int16 *a2)
{
  int Size; // eax
  Concurrency::details::_CancellationTokenRegistration *v3; // eax
  _BYTE *v5; // [esp+4h] [ebp-2Ch]
  _BYTE v7[5]; // [esp+17h] [ebp-19h] BYREF
  __int16 v8[4]; // [esp+1Ch] [ebp-14h] BYREF
  int v9; // [esp+2Ch] [ebp-4h]

  sub_484300(v8);
  v9 = 1;
  if ( *(this + 2) )
  {
    for ( *(_DWORD *)&v7[1] = 0; ; ++*(_DWORD *)&v7[1] )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( *(int *)&v7[1] >= Size )
        break;
      v3 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), *(int *)&v7[1]);
      v5 = (_BYTE *)sub_4DDB10((int)v7, v3);
      LOBYTE(v9) = 2;
      sub_484830(v8, v5);
      LOBYTE(v9) = 1;
      ATL::CComCriticalSection::~CComCriticalSection(v7);
    }
  }
  sub_484320(a2, (int)v8);
  LOBYTE(v9) = 0;
  sub_484470(v8);
  return a2;
}


//======================================================================
// sub_4C8300
// entry 004c8300  size 402  status ok
//======================================================================

__int16 *__thiscall sub_4C8300(CRecentFileList **this, __int16 *a2)
{
  int Size; // eax
  int v3; // esi
  Concurrency::details::_CancellationTokenRegistration *v4; // eax
  _BYTE *v6; // [esp+8h] [ebp-30h]
  _BYTE v8[5]; // [esp+1Bh] [ebp-1Dh] BYREF
  int v9; // [esp+20h] [ebp-18h]
  __int16 v10[4]; // [esp+24h] [ebp-14h] BYREF
  int v11; // [esp+34h] [ebp-4h]

  sub_484300(v10);
  v11 = 1;
  if ( sub_47E1D0((_DWORD *)dword_791364) != 1 )
    sub_5E9F20((char)"pokerGame->GetGameType() == STUDPOKER", "..\\Casino\\PokerPlayer.cpp", 1107);
  if ( *(this + 2) )
  {
    v9 = CRecentFileList::GetSize(*(this + 2)) - 1;
    for ( *(_DWORD *)&v8[1] = (sub_47E190((_DWORD *)dword_791364) != 2) + 1; ; ++*(_DWORD *)&v8[1] )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( *(int *)&v8[1] >= Size )
        break;
      if ( *(int *)&v8[1] < 6 )
      {
        if ( v9 - *(_DWORD *)&v8[1] < 0 )
          sub_5E9F20((char)"(nAdjust-nIndex)>=0", "..\\Casino\\PokerPlayer.cpp", 1117);
        v3 = v9 - *(_DWORD *)&v8[1];
        if ( v3 >= CRecentFileList::GetSize(*(this + 2)) )
          sub_5E9F20((char)"(nAdjust-nIndex)<hand->Size()", "..\\Casino\\PokerPlayer.cpp", 1118);
        v4 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310(
                                                                       (int)*(this + 2),
                                                                       v9 - *(_DWORD *)&v8[1]);
        v6 = (_BYTE *)sub_4DD780((int)v8, v4);
        LOBYTE(v11) = 2;
        sub_484830(v10, v6);
        LOBYTE(v11) = 1;
        ATL::CComCriticalSection::~CComCriticalSection(v8);
      }
    }
  }
  sub_484320(a2, (int)v10);
  LOBYTE(v11) = 0;
  sub_484470(v10);
  return a2;
}


//======================================================================
// sub_4C84A0
// entry 004c84a0  size 604  status ok
//======================================================================

__int16 *__thiscall sub_4C84A0(CRecentFileList **this, __int16 *a2)
{
  int Size; // eax
  int v3; // esi
  Concurrency::details::_CancellationTokenRegistration *v4; // eax
  int v5; // eax
  int v6; // esi
  Concurrency::details::_CancellationTokenRegistration *v7; // eax
  _BYTE *v9; // [esp+8h] [ebp-40h]
  _BYTE *v10; // [esp+10h] [ebp-38h]
  _WORD v12[3]; // [esp+22h] [ebp-26h] BYREF
  int v13; // [esp+28h] [ebp-20h]
  int i; // [esp+2Ch] [ebp-1Ch]
  int v15; // [esp+30h] [ebp-18h]
  __int16 v16[4]; // [esp+34h] [ebp-14h] BYREF
  int v17; // [esp+44h] [ebp-4h]

  sub_484300(v16);
  v17 = 1;
  if ( sub_47E1D0((_DWORD *)dword_791364) != 1 )
    sub_5E9F20((char)"pokerGame->GetGameType() == STUDPOKER", "..\\Casino\\PokerPlayer.cpp", 1129);
  if ( *(this + 2) )
  {
    v15 = CRecentFileList::GetSize(*(this + 2)) - 1;
    for ( i = 2; ; ++i )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( i >= Size )
        break;
      if ( i < 6 )
      {
        if ( v15 - i < 0 )
          sub_5E9F20((char)"(nAdjust-nIndex)>=0", "..\\Casino\\PokerPlayer.cpp", 1138);
        v3 = v15 - i;
        if ( v3 >= CRecentFileList::GetSize(*(this + 2)) )
          sub_5E9F20((char)"(nAdjust-nIndex)<hand->Size()", "..\\Casino\\PokerPlayer.cpp", 1139);
        v4 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), v15 - i);
        v10 = (_BYTE *)sub_4DD940((int)v12 + 1, v4);
        LOBYTE(v17) = 2;
        sub_484830(v16, v10);
        LOBYTE(v17) = 1;
        ATL::CComCriticalSection::~CComCriticalSection((char *)v12 + 1);
      }
    }
  }
  if ( *(this + 3) )
  {
    v13 = CRecentFileList::GetSize(*(this + 3)) - 1;
    for ( *(_DWORD *)&v12[1] = 0; ; ++*(_DWORD *)&v12[1] )
    {
      v5 = CRecentFileList::GetSize(*(this + 3));
      if ( *(int *)&v12[1] >= v5 )
        break;
      if ( v13 - *(_DWORD *)&v12[1] < 0 )
        sub_5E9F20((char)"(nAdjust-nIndex)>=0", "..\\Casino\\PokerPlayer.cpp", 1149);
      v6 = v13 - *(_DWORD *)&v12[1];
      if ( v6 >= CRecentFileList::GetSize(*(this + 3)) )
        sub_5E9F20((char)"(nAdjust-nIndex)<handSecondRow->Size()", "..\\Casino\\PokerPlayer.cpp", 1150);
      v7 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310(
                                                                     (int)*(this + 3),
                                                                     v13 - *(_DWORD *)&v12[1]);
      v9 = (_BYTE *)sub_4DD940((int)v12, v7);
      LOBYTE(v17) = 3;
      sub_484830(v16, v9);
      LOBYTE(v17) = 1;
      ATL::CComCriticalSection::~CComCriticalSection(v12);
    }
  }
  sub_484320(a2, (int)v16);
  LOBYTE(v17) = 0;
  sub_484470(v16);
  return a2;
}


//======================================================================
// sub_4C8700
// entry 004c8700  size 411  status ok
//======================================================================

__int16 *__thiscall sub_4C8700(CRecentFileList **this, __int16 *a2)
{
  int Size; // eax
  int v3; // eax
  int v4; // esi
  Concurrency::details::_CancellationTokenRegistration *v5; // eax
  _BYTE *v7; // [esp+8h] [ebp-30h]
  _BYTE v9[5]; // [esp+1Bh] [ebp-1Dh] BYREF
  int v10; // [esp+20h] [ebp-18h]
  __int16 v11[4]; // [esp+24h] [ebp-14h] BYREF
  int v12; // [esp+34h] [ebp-4h]

  sub_484300(v11);
  v12 = 1;
  if ( sub_47E1D0((_DWORD *)dword_791364) != 1 )
    sub_5E9F20((char)"pokerGame->GetGameType() == STUDPOKER", "..\\Casino\\PokerPlayer.cpp", 1161);
  if ( *(this + 2) )
  {
    v10 = CRecentFileList::GetSize(*(this + 2)) - 1;
    for ( *(_DWORD *)&v9[1] = 0; ; ++*(_DWORD *)&v9[1] )
    {
      Size = CRecentFileList::GetSize(*(this + 2));
      if ( *(int *)&v9[1] >= Size )
        break;
      if ( *(int *)&v9[1] < 6 )
      {
        v3 = sub_47E190((_DWORD *)dword_791364);
        if ( *(int *)&v9[1] >= (v3 != 2) + 1 )
          continue;
      }
      if ( v10 - *(_DWORD *)&v9[1] < 0 )
        sub_5E9F20((char)"(nAdjust-nIndex)>=0", "..\\Casino\\PokerPlayer.cpp", 1170);
      v4 = v10 - *(_DWORD *)&v9[1];
      if ( v4 >= CRecentFileList::GetSize(*(this + 2)) )
        sub_5E9F20((char)"(nAdjust-nIndex)<hand->Size()", "..\\Casino\\PokerPlayer.cpp", 1171);
      v5 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), v10 - *(_DWORD *)&v9[1]);
      v7 = (_BYTE *)sub_4DD780((int)v9, v5);
      LOBYTE(v12) = 2;
      sub_484830(v11, v7);
      LOBYTE(v12) = 1;
      ATL::CComCriticalSection::~CComCriticalSection(v9);
    }
  }
  sub_484320(a2, (int)v11);
  LOBYTE(v12) = 0;
  sub_484470(v11);
  return a2;
}


//======================================================================
// sub_4C88A0
// entry 004c88a0  size 1544  status ok
//======================================================================

void __thiscall sub_4C88A0(CRecentFileList **this, __int16 a2, int a3, __int16 a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int Size; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _BYTE *v16; // [esp+4h] [ebp-54h]
  _BYTE *v17; // [esp+Ch] [ebp-4Ch]
  _BYTE *v18; // [esp+14h] [ebp-44h]
  _BYTE *v19; // [esp+1Ch] [ebp-3Ch]
  char v21; // [esp+28h] [ebp-30h] BYREF
  char v22; // [esp+29h] [ebp-2Fh]
  char v23; // [esp+2Ah] [ebp-2Eh] BYREF
  char v24; // [esp+2Bh] [ebp-2Dh]
  char v25; // [esp+2Ch] [ebp-2Ch] BYREF
  char v26; // [esp+2Dh] [ebp-2Bh]
  char v27; // [esp+2Eh] [ebp-2Ah] BYREF
  char v28; // [esp+2Fh] [ebp-29h]
  int k; // [esp+30h] [ebp-28h]
  int j; // [esp+34h] [ebp-24h]
  int i; // [esp+38h] [ebp-20h]
  int m; // [esp+3Ch] [ebp-1Ch]
  Concurrency::details::_CancellationTokenRegistration *v33; // [esp+40h] [ebp-18h]
  int v34; // [esp+44h] [ebp-14h]
  __int16 v35; // [esp+48h] [ebp-10h]
  int v36; // [esp+54h] [ebp-4h]

  v36 = 0;
  v35 = 0;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        for ( i = 0; ; ++i )
        {
          Size = CRecentFileList::GetSize(*(this + 2));
          if ( i >= Size )
            break;
          v33 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), i);
          v18 = (_BYTE *)sub_4DD780((int)&v25, v33);
          LOBYTE(v36) = 2;
          v26 = sub_484BA0(&a2, v18);
          LOBYTE(v36) = 0;
          ATL::CComCriticalSection::~CComCriticalSection(&v25);
          if ( v26 )
          {
            v34 = *((_DWORD *)v33 + 2);
            if ( !v34 )
              sub_5E9F20((char)"cardView", "..\\Casino\\PokerPlayer.cpp", 1210);
            if ( v35 >= 2 )
              sub_5E9F20((char)"shTagToUse < MAX_TAGS", "..\\Casino\\PokerPlayer.cpp", 1211);
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + v35 + 18) + 176))(*(this + v35 + 18), 0);
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 84))(v34);
            v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v34 + 76))(v34, v8 + 33);
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 18) + 68))(*(this + v35 + 18), v9 + 4);
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v35 + 18) + 116))(*(this + v35 + 18));
            ++v35;
          }
        }
        break;
      case 2:
        for ( j = 0; ; ++j )
        {
          v10 = CRecentFileList::GetSize(*(this + 2));
          if ( j >= v10 )
            break;
          v33 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), j);
          v17 = (_BYTE *)sub_4DD780((int)&v23, v33);
          LOBYTE(v36) = 3;
          v24 = sub_484BA0(&a2, v17);
          LOBYTE(v36) = 0;
          ATL::CComCriticalSection::~CComCriticalSection(&v23);
          if ( v24 )
          {
            v34 = *((_DWORD *)v33 + 2);
            if ( !v34 )
              sub_5E9F20((char)"cardView", "..\\Casino\\PokerPlayer.cpp", 1227);
            if ( v35 >= 2 )
              sub_5E9F20((char)"shTagToUse < MAX_TAGS", "..\\Casino\\PokerPlayer.cpp", 1228);
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 20) + 176))(*(this + v35 + 20), 1);
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 84))(v34);
            v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v34 + 76))(v34, v11 + 51);
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 20) + 68))(*(this + v35 + 20), v12 + 4);
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v35 + 20) + 116))(*(this + v35 + 20));
            ++v35;
          }
        }
        break;
      case 3:
        for ( k = 0; ; ++k )
        {
          v13 = CRecentFileList::GetSize(*(this + 2));
          if ( k >= v13 )
            break;
          v33 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), k);
          v16 = (_BYTE *)sub_4DD780((int)&v21, v33);
          LOBYTE(v36) = 4;
          v22 = sub_484BA0(&a2, v16);
          LOBYTE(v36) = 0;
          ATL::CComCriticalSection::~CComCriticalSection(&v21);
          if ( v22 )
          {
            v34 = *((_DWORD *)v33 + 2);
            if ( !v34 )
              sub_5E9F20((char)"cardView", "..\\Casino\\PokerPlayer.cpp", 1244);
            if ( v35 >= 3 )
              sub_5E9F20((char)"shTagToUse < MAX_HOLE_TAGS", "..\\Casino\\PokerPlayer.cpp", 1245);
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 22) + 176))(*(this + v35 + 22), 2);
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 84))(v34);
            v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v34 + 76))(v34, v14 + 35);
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 22) + 68))(*(this + v35 + 22), v15 + 5);
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v35 + 22) + 116))(*(this + v35 + 22));
            ++v35;
          }
        }
        break;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 1254);
        break;
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      v4 = CRecentFileList::GetSize(*(this + 2));
      if ( m >= v4 )
        break;
      v33 = (Concurrency::details::_CancellationTokenRegistration *)sub_4C7310((int)*(this + 2), m);
      v19 = (_BYTE *)sub_4DD780((int)&v27, v33);
      LOBYTE(v36) = 1;
      v28 = sub_484BA0(&a2, v19);
      LOBYTE(v36) = 0;
      ATL::CComCriticalSection::~CComCriticalSection(&v27);
      if ( v28 )
      {
        v34 = *((_DWORD *)v33 + 2);
        if ( !v34 )
          sub_5E9F20((char)"cardView", "..\\Casino\\PokerPlayer.cpp", 1193);
        if ( v35 >= 2 )
          sub_5E9F20((char)"shTagToUse < MAX_TAGS", "..\\Casino\\PokerPlayer.cpp", 1194);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 18) + 176))(*(this + v35 + 18), 2);
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 84))(v34);
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v34 + 76))(v34, v5 + 35);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v35 + 18) + 68))(*(this + v35 + 18), v6 + 4);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v35 + 18) + 116))(*(this + v35 + 18));
        ++v35;
      }
    }
  }
  v36 = -1;
  sub_484470(&a2);
}


//======================================================================
// sub_4C8EB0
// entry 004c8eb0  size 164  status ok
//======================================================================

int __thiscall sub_4C8EB0(_DWORD **this)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 18) + 112))(*(this + i + 18));
    HIWORD(result) = (unsigned int)(*(int (__thiscall **)(_DWORD))(**(this + i + 20) + 112))(*(this + i + 20)) >> 16;
    LOWORD(result) = i + 1;
  }
  for ( j = 0; j < 3; ++j )
    result = (*(int (__thiscall **)(_DWORD))(**(this + j + 22) + 112))(*(this + j + 22));
  return result;
}


//======================================================================
// sub_4C8F60
// entry 004c8f60  size 46  status ok
//======================================================================

bool __thiscall sub_4C8F60(_DWORD *this)
{
  int v1; // esi

  v1 = sub_4C6A70(this);
  return v1 >= (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)dword_791364);
}


//======================================================================
// sub_4C9160
// entry 004c9160  size 414  status ok
//======================================================================

Concurrency::details::VirtualProcessor *__thiscall sub_4C9160(Concurrency::details::VirtualProcessor *this)
{
  Concurrency::details::VirtualProcessor *result; // eax
  __int16 ExecutionResourceId; // ax
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int v9; // edi
  int v11; // [esp+10h] [ebp-10h] BYREF
  __int16 v12; // [esp+14h] [ebp-Ch]
  __int16 v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h]

  result = (Concurrency::details::VirtualProcessor *)(unsigned __int8)sub_5DA7B0(dword_791EB8);
  if ( (_BYTE)result )
  {
    ExecutionResourceId = Concurrency::details::VirtualProcessor::GetExecutionResourceId(this);
    sub_483A70(ExecutionResourceId, &v13, &v11);
    v3 = CAtlTraceProcess::CategoryCount((CAtlTraceProcess *)dword_791364);
    v14 = v11 / v3;
    v12 = sub_5DA8A0(dword_791EB8) - *(_WORD *)(dword_791EB8 + 152);
    if ( v12 < 1 )
      v12 = 1;
    if ( v13 == 1 )
    {
      v4 = -v14 / (v12 / 2 + 1);
      v5 = sub_62FBF0(5);
      result = (Concurrency::details::VirtualProcessor *)sub_62FBF0(5);
      if ( v4 <= (int)result + v5 )
      {
        *((_WORD *)this + 50) = 0;
        return this;
      }
      else
      {
        *((_WORD *)this + 50) = 1;
      }
    }
    else
    {
      v6 = v14 / (v12 / 2 + 1);
      v7 = sub_62FBF0(7);
      if ( v6 <= sub_62FBF0(5) + v7 )
      {
        v8 = v14 / (v12 / 2 + 1);
        v9 = sub_62FBF0(3);
        result = (Concurrency::details::VirtualProcessor *)sub_62FBF0(3);
        if ( v8 <= (int)result + v9 )
        {
          *((_WORD *)this + 50) = 0;
        }
        else
        {
          result = (Concurrency::details::VirtualProcessor *)sub_62FBF0(3);
          if ( result )
          {
            *((_WORD *)this + 50) = 2;
          }
          else
          {
            *((_WORD *)this + 50) = 0;
            return this;
          }
        }
      }
      else
      {
        result = (Concurrency::details::VirtualProcessor *)sub_62FBF0(3);
        if ( result )
        {
          *((_WORD *)this + 50) = 3;
        }
        else
        {
          *((_WORD *)this + 50) = 2;
          return this;
        }
      }
    }
  }
  else
  {
    *((_WORD *)this + 50) = 0;
  }
  return result;
}


//======================================================================
// sub_4C9300
// entry 004c9300  size 2219  status ok
//======================================================================

int __thiscall sub_4C9300(_WORD *this, __int16 a2)
{
  int result; // eax

  if ( !a2 )
    a2 = sub_62FBF0(10) + 1;
  if ( a2 <= 0 || a2 > 10 )
    sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 1414);
  switch ( a2 )
  {
    case 1:
    case 7:
    case 8:
    case 9:
      *(this + 77) = 2;
      *(this + 80) = 28;
      *(this + 83) = 40;
      *(this + 86) = 20;
      *(this + 89) = 10;
      *(this + 78) = 1;
      *(this + 81) = 19;
      *(this + 84) = 35;
      *(this + 87) = 25;
      *(this + 90) = 20;
      *(this + 79) = 1;
      *(this + 82) = 14;
      *(this + 85) = 30;
      *(this + 88) = 30;
      *(this + 91) = 25;
      break;
    case 2:
      *(this + 77) = 10;
      *(this + 80) = 30;
      *(this + 83) = 30;
      *(this + 86) = 20;
      *(this + 89) = 10;
      *(this + 78) = 10;
      *(this + 81) = 10;
      *(this + 84) = 35;
      *(this + 87) = 30;
      *(this + 90) = 15;
      *(this + 79) = 2;
      *(this + 82) = 18;
      *(this + 85) = 25;
      *(this + 88) = 35;
      *(this + 91) = 20;
      break;
    case 3:
      *(this + 77) = 2;
      *(this + 80) = 28;
      *(this + 83) = 30;
      *(this + 86) = 20;
      *(this + 89) = 20;
      *(this + 78) = 1;
      *(this + 81) = 14;
      *(this + 84) = 25;
      *(this + 87) = 30;
      *(this + 90) = 30;
      *(this + 79) = 1;
      *(this + 82) = 9;
      *(this + 85) = 25;
      *(this + 88) = 30;
      *(this + 91) = 35;
      break;
    case 4:
      *(this + 77) = 2;
      *(this + 80) = 28;
      *(this + 83) = 25;
      *(this + 86) = 20;
      *(this + 89) = 25;
      *(this + 78) = 5;
      *(this + 81) = 2;
      *(this + 84) = 33;
      *(this + 87) = 30;
      *(this + 90) = 30;
      *(this + 79) = 5;
      *(this + 82) = 1;
      *(this + 85) = 29;
      *(this + 88) = 30;
      *(this + 91) = 35;
      break;
    case 5:
      *(this + 77) = 5;
      *(this + 80) = 25;
      *(this + 83) = 40;
      *(this + 86) = 25;
      *(this + 89) = 5;
      *(this + 78) = 1;
      *(this + 81) = 19;
      *(this + 84) = 40;
      *(this + 87) = 25;
      *(this + 90) = 15;
      *(this + 79) = 1;
      *(this + 82) = 14;
      *(this + 85) = 30;
      *(this + 88) = 35;
      *(this + 91) = 20;
      break;
    case 6:
      *(this + 77) = 10;
      *(this + 80) = 40;
      *(this + 83) = 20;
      *(this + 86) = 20;
      *(this + 89) = 10;
      *(this + 78) = 2;
      *(this + 81) = 27;
      *(this + 84) = 26;
      *(this + 87) = 30;
      *(this + 90) = 15;
      *(this + 79) = 1;
      *(this + 82) = 22;
      *(this + 85) = 30;
      *(this + 88) = 26;
      *(this + 91) = 21;
      break;
    case 10:
      *(this + 77) = 2;
      *(this + 80) = 18;
      *(this + 83) = 40;
      *(this + 86) = 30;
      *(this + 89) = 10;
      *(this + 78) = 1;
      *(this + 81) = 14;
      *(this + 84) = 30;
      *(this + 87) = 35;
      *(this + 90) = 20;
      *(this + 79) = 1;
      *(this + 82) = 14;
      *(this + 85) = 25;
      *(this + 88) = 30;
      *(this + 91) = 30;
      break;
    default:
      break;
  }
  if ( (__int16)*(this + 89)
     + (__int16)*(this + 86)
     + (__int16)*(this + 83)
     + (__int16)*(this + 80)
     + (__int16)*(this + 77) != 100 )
    sub_5E9F20(
      (char)"(shMinimumBetChance[0]+shLowishBetChance[0]+shMedianBetChance[0]+shHighishBetChance[0]+shMaximumBetChance[0]) == 100",
      "..\\Casino\\PokerPlayer.cpp",
      1599);
  if ( (__int16)*(this + 90)
     + (__int16)*(this + 87)
     + (__int16)*(this + 84)
     + (__int16)*(this + 81)
     + (__int16)*(this + 78) != 100 )
    sub_5E9F20(
      (char)"(shMinimumBetChance[1]+shLowishBetChance[1]+shMedianBetChance[1]+shHighishBetChance[1]+shMaximumBetChance[1]) == 100",
      "..\\Casino\\PokerPlayer.cpp",
      1600);
  result = (__int16)*(this + 91)
         + (__int16)*(this + 88)
         + (__int16)*(this + 85)
         + (__int16)*(this + 82)
         + (__int16)*(this + 79);
  if ( result != 100 )
    return sub_5E9F20(
             (char)"(shMinimumBetChance[2]+shLowishBetChance[2]+shMedianBetChance[2]+shHighishBetChance[2]+shMaximumBetChance[2]) == 100",
             "..\\Casino\\PokerPlayer.cpp",
             1601);
  return result;
}


//======================================================================
// sub_4C9BE0
// entry 004c9be0  size 8441  status ok
//======================================================================

int __thiscall sub_4C9BE0(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 1610);
  switch ( a2 )
  {
    case 1:
      *(this + 135) = 5;
      *(this + 134) = 15;
      *(this + 136) = 30;
      *(this + 137) = 50;
      *(this + 138) = 10;
      *(this + 139) = 25;
      *(this + 140) = 50;
      *(this + 141) = 10;
      *(this + 142) = 3;
      *(this + 143) = 20;
      *(this + 144) = 5;
      *(this + 145) = 20;
      *(this + 146) = 40;
      *(this + 147) = 25;
      *(this + 148) = 10;
      *(this + 149) = 30;
      *(this + 151) = 75;
      *(this + 152) = 50;
      *(this + 153) = 25;
      *(this + 154) = 50;
      *(this + 155) = 25;
      *(this + 150) = 5;
      *(this + 156) = 3;
      *(this + 157) = 3;
      *(this + 158) = 60;
      *(this + 159) = 10;
      *(this + 160) = 40;
      *(this + 133) = 100;
      *(this + 126) = 97;
      *(this + 119) = 80;
      *(this + 112) = 30;
      *(this + 105) = 3;
      *(this + 98) = 1;
      *(this + 132) = 100;
      *(this + 125) = 95;
      *(this + 118) = 82;
      *(this + 111) = 33;
      *(this + 104) = 6;
      *(this + 97) = 2;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 90;
      *(this + 110) = 50;
      *(this + 103) = 10;
      *(this + 96) = 3;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 95;
      *(this + 109) = 60;
      *(this + 102) = 15;
      *(this + 95) = 5;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 100;
      *(this + 108) = 75;
      *(this + 101) = 20;
      *(this + 94) = 7;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 80;
      *(this + 100) = 30;
      *(this + 93) = 10;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 100;
      *(this + 99) = 50;
      *(this + 92) = 17;
      result = (int)this;
      break;
    case 2:
      *(this + 135) = 2;
      *(this + 134) = 30;
      *(this + 136) = 50;
      *(this + 137) = 70;
      *(this + 138) = 10;
      *(this + 139) = 50;
      *(this + 140) = 20;
      *(this + 141) = 20;
      *(this + 142) = 6;
      *(this + 143) = 40;
      *(this + 144) = 12;
      *(this + 145) = 8;
      *(this + 158) = 35;
      *(this + 146) = 45;
      *(this + 147) = 35;
      *(this + 148) = 25;
      *(this + 149) = 10;
      *(this + 150) = 8;
      *(this + 151) = 90;
      *(this + 152) = 50;
      *(this + 153) = 30;
      *(this + 154) = 70;
      *(this + 155) = 60;
      *(this + 156) = 1;
      *(this + 157) = 8;
      *(this + 159) = 30;
      *(this + 160) = 90;
      *(this + 133) = 100;
      *(this + 126) = 97;
      *(this + 119) = 30;
      *(this + 112) = 3;
      *(this + 105) = 2;
      *(this + 98) = 1;
      *(this + 132) = 100;
      *(this + 125) = 100;
      *(this + 118) = 35;
      *(this + 111) = 3;
      *(this + 104) = 2;
      *(this + 97) = 1;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 45;
      *(this + 110) = 15;
      *(this + 103) = 3;
      *(this + 96) = 1;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 65;
      *(this + 109) = 30;
      *(this + 102) = 5;
      *(this + 95) = 2;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 85;
      *(this + 108) = 50;
      *(this + 101) = 8;
      *(this + 94) = 3;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 65;
      *(this + 100) = 15;
      *(this + 93) = 7;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 85;
      *(this + 99) = 30;
      *(this + 92) = 15;
      result = (int)this;
      break;
    case 3:
      *(this + 135) = 8;
      *(this + 134) = 8;
      *(this + 136) = 25;
      *(this + 137) = 40;
      *(this + 138) = 6;
      *(this + 139) = 15;
      *(this + 140) = 70;
      *(this + 141) = 7;
      *(this + 142) = 4;
      *(this + 143) = 14;
      *(this + 144) = 8;
      *(this + 145) = 15;
      *(this + 146) = 28;
      *(this + 147) = 12;
      *(this + 148) = 6;
      *(this + 149) = 40;
      *(this + 150) = 2;
      *(this + 151) = 90;
      *(this + 152) = 60;
      *(this + 153) = 30;
      *(this + 154) = 30;
      *(this + 155) = 20;
      *(this + 156) = 6;
      *(this + 157) = 2;
      *(this + 158) = 90;
      *(this + 159) = 5;
      *(this + 160) = 20;
      *(this + 133) = 100;
      *(this + 126) = 100;
      *(this + 119) = 100;
      *(this + 112) = 80;
      *(this + 105) = 20;
      *(this + 98) = 7;
      *(this + 132) = 100;
      *(this + 125) = 100;
      *(this + 118) = 100;
      *(this + 111) = 90;
      *(this + 104) = 35;
      *(this + 97) = 15;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 100;
      *(this + 110) = 100;
      *(this + 103) = 50;
      *(this + 96) = 18;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 100;
      *(this + 109) = 100;
      *(this + 102) = 65;
      *(this + 95) = 23;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 100;
      *(this + 108) = 100;
      *(this + 101) = 80;
      *(this + 94) = 30;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 100;
      *(this + 100) = 95;
      *(this + 93) = 50;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 100;
      *(this + 99) = 98;
      *(this + 92) = 75;
      result = (int)this;
      break;
    case 4:
      *(this + 135) = 10;
      *(this + 134) = 35;
      *(this + 136) = 28;
      *(this + 137) = 35;
      *(this + 138) = 12;
      *(this + 139) = 20;
      *(this + 140) = 30;
      *(this + 141) = 10;
      *(this + 142) = 7;
      *(this + 143) = 22;
      *(this + 144) = 10;
      *(this + 145) = 14;
      *(this + 146) = 40;
      *(this + 147) = 22;
      *(this + 148) = 8;
      *(this + 149) = 35;
      *(this + 150) = 4;
      *(this + 151) = 80;
      *(this + 152) = 60;
      *(this + 153) = 40;
      *(this + 154) = 40;
      *(this + 155) = 20;
      *(this + 156) = 5;
      *(this + 157) = 3;
      *(this + 158) = 70;
      *(this + 159) = 20;
      *(this + 160) = 45;
      *(this + 133) = 100;
      *(this + 126) = 80;
      *(this + 119) = 40;
      *(this + 112) = 10;
      *(this + 105) = 5;
      *(this + 98) = 1;
      *(this + 132) = 100;
      *(this + 125) = 85;
      *(this + 118) = 50;
      *(this + 111) = 15;
      *(this + 104) = 7;
      *(this + 97) = 2;
      *(this + 131) = 100;
      *(this + 124) = 90;
      *(this + 117) = 60;
      *(this + 110) = 20;
      *(this + 103) = 10;
      *(this + 96) = 3;
      *(this + 130) = 100;
      *(this + 123) = 95;
      *(this + 116) = 70;
      *(this + 109) = 25;
      *(this + 102) = 13;
      *(this + 95) = 5;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 85;
      *(this + 108) = 38;
      *(this + 101) = 20;
      *(this + 94) = 8;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 70;
      *(this + 100) = 40;
      *(this + 93) = 16;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 100;
      *(this + 99) = 60;
      *(this + 92) = 32;
      result = (int)this;
      break;
    case 5:
      *(this + 135) = 7;
      *(this + 134) = 20;
      *(this + 136) = 35;
      *(this + 137) = 45;
      *(this + 138) = 30;
      *(this + 139) = 35;
      *(this + 140) = 15;
      *(this + 141) = 15;
      *(this + 142) = 2;
      *(this + 143) = 30;
      *(this + 144) = 3;
      *(this + 145) = 35;
      *(this + 146) = 35;
      *(this + 147) = 25;
      *(this + 148) = 15;
      *(this + 149) = 25;
      *(this + 150) = 6;
      *(this + 151) = 90;
      *(this + 152) = 40;
      *(this + 153) = 20;
      *(this + 154) = 45;
      *(this + 155) = 40;
      *(this + 156) = 2;
      *(this + 157) = 5;
      *(this + 158) = 50;
      *(this + 159) = 15;
      *(this + 160) = 50;
      *(this + 133) = 100;
      *(this + 126) = 75;
      *(this + 119) = 50;
      *(this + 112) = 45;
      *(this + 105) = 15;
      *(this + 98) = 2;
      *(this + 132) = 100;
      *(this + 125) = 77;
      *(this + 118) = 53;
      *(this + 111) = 50;
      *(this + 104) = 20;
      *(this + 97) = 4;
      *(this + 131) = 100;
      *(this + 124) = 80;
      *(this + 117) = 67;
      *(this + 110) = 55;
      *(this + 103) = 25;
      *(this + 96) = 6;
      *(this + 130) = 100;
      *(this + 123) = 90;
      *(this + 116) = 75;
      *(this + 109) = 60;
      *(this + 102) = 30;
      *(this + 95) = 10;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 85;
      *(this + 108) = 80;
      *(this + 101) = 40;
      *(this + 94) = 15;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 93;
      *(this + 107) = 90;
      *(this + 100) = 55;
      *(this + 93) = 18;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 90;
      *(this + 99) = 67;
      *(this + 92) = 25;
      result = (int)this;
      break;
    case 6:
      *(this + 135) = 0;
      *(this + 134) = 45;
      *(this + 136) = 40;
      *(this + 137) = 65;
      *(this + 138) = 20;
      *(this + 139) = 100;
      *(this + 140) = 3;
      *(this + 141) = 30;
      *(this + 142) = 10;
      *(this + 143) = 40;
      *(this + 144) = 20;
      *(this + 145) = 30;
      *(this + 146) = 47;
      *(this + 147) = 38;
      *(this + 148) = 25;
      *(this + 149) = 5;
      *(this + 150) = 8;
      *(this + 151) = 65;
      *(this + 152) = 35;
      *(this + 153) = 15;
      *(this + 154) = 65;
      *(this + 155) = 55;
      *(this + 156) = 1;
      *(this + 157) = 10;
      *(this + 158) = 25;
      *(this + 159) = 50;
      *(this + 160) = 120;
      *(this + 133) = 95;
      *(this + 126) = 80;
      *(this + 119) = 20;
      *(this + 112) = 1;
      *(this + 105) = 1;
      *(this + 98) = 1;
      *(this + 132) = 97;
      *(this + 125) = 84;
      *(this + 118) = 30;
      *(this + 111) = 1;
      *(this + 104) = 1;
      *(this + 97) = 0;
      *(this + 131) = 99;
      *(this + 124) = 89;
      *(this + 117) = 40;
      *(this + 110) = 5;
      *(this + 103) = 2;
      *(this + 96) = 1;
      *(this + 130) = 100;
      *(this + 123) = 94;
      *(this + 116) = 50;
      *(this + 109) = 10;
      *(this + 102) = 2;
      *(this + 95) = 1;
      *(this + 129) = 100;
      *(this + 122) = 98;
      *(this + 115) = 65;
      *(this + 108) = 20;
      *(this + 101) = 3;
      *(this + 94) = 1;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 80;
      *(this + 107) = 30;
      *(this + 100) = 8;
      *(this + 93) = 3;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 40;
      *(this + 99) = 17;
      *(this + 92) = 7;
      result = (int)this;
      break;
    case 7:
      *(this + 135) = 3;
      *(this + 134) = 25;
      *(this + 136) = 30;
      *(this + 137) = 35;
      *(this + 138) = 7;
      *(this + 139) = 25;
      *(this + 140) = 80;
      *(this + 141) = 8;
      *(this + 142) = 2;
      *(this + 143) = 15;
      *(this + 144) = 3;
      *(this + 145) = 50;
      *(this + 146) = 45;
      *(this + 147) = 35;
      *(this + 148) = 25;
      *(this + 149) = 40;
      *(this + 150) = 2;
      *(this + 151) = 60;
      *(this + 152) = 40;
      *(this + 153) = 20;
      *(this + 154) = 50;
      *(this + 155) = 5;
      *(this + 156) = 2;
      *(this + 157) = 7;
      *(this + 158) = 40;
      *(this + 159) = 10;
      *(this + 160) = 50;
      *(this + 133) = 100;
      *(this + 126) = 100;
      *(this + 119) = 95;
      *(this + 112) = 40;
      *(this + 105) = 5;
      *(this + 98) = 1;
      *(this + 132) = 100;
      *(this + 125) = 100;
      *(this + 118) = 97;
      *(this + 111) = 45;
      *(this + 104) = 10;
      *(this + 97) = 2;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 99;
      *(this + 110) = 50;
      *(this + 103) = 10;
      *(this + 96) = 3;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 100;
      *(this + 109) = 55;
      *(this + 102) = 15;
      *(this + 95) = 4;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 100;
      *(this + 108) = 60;
      *(this + 101) = 25;
      *(this + 94) = 5;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 70;
      *(this + 100) = 38;
      *(this + 93) = 8;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 80;
      *(this + 99) = 44;
      *(this + 92) = 14;
      result = (int)this;
      break;
    case 8:
      *(this + 135) = 5;
      *(this + 134) = 13;
      *(this + 136) = 28;
      *(this + 137) = 46;
      *(this + 138) = 11;
      *(this + 139) = 22;
      *(this + 140) = 50;
      *(this + 141) = 10;
      *(this + 142) = 4;
      *(this + 143) = 20;
      *(this + 144) = 6;
      *(this + 145) = 20;
      *(this + 146) = 40;
      *(this + 147) = 25;
      *(this + 148) = 8;
      *(this + 149) = 30;
      *(this + 151) = 75;
      *(this + 152) = 50;
      *(this + 153) = 30;
      *(this + 154) = 50;
      *(this + 155) = 25;
      *(this + 150) = 5;
      *(this + 156) = 6;
      *(this + 157) = 1;
      *(this + 158) = 80;
      *(this + 159) = 12;
      *(this + 160) = 45;
      *(this + 133) = 100;
      *(this + 126) = 97;
      *(this + 119) = 80;
      *(this + 112) = 30;
      *(this + 105) = 3;
      *(this + 98) = 1;
      *(this + 132) = 100;
      *(this + 125) = 95;
      *(this + 118) = 82;
      *(this + 111) = 33;
      *(this + 104) = 6;
      *(this + 97) = 2;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 90;
      *(this + 110) = 50;
      *(this + 103) = 10;
      *(this + 96) = 3;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 95;
      *(this + 109) = 60;
      *(this + 102) = 15;
      *(this + 95) = 5;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 100;
      *(this + 108) = 75;
      *(this + 101) = 20;
      *(this + 94) = 7;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 80;
      *(this + 100) = 30;
      *(this + 93) = 10;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 100;
      *(this + 99) = 50;
      *(this + 92) = 17;
      result = (int)this;
      break;
    case 9:
      *(this + 135) = 8;
      *(this + 134) = 15;
      *(this + 136) = 30;
      *(this + 137) = 50;
      *(this + 138) = 12;
      *(this + 139) = 25;
      *(this + 140) = 50;
      *(this + 141) = 12;
      *(this + 142) = 5;
      *(this + 143) = 20;
      *(this + 144) = 7;
      *(this + 145) = 20;
      *(this + 146) = 40;
      *(this + 147) = 25;
      *(this + 148) = 14;
      *(this + 149) = 30;
      *(this + 151) = 75;
      *(this + 152) = 50;
      *(this + 153) = 35;
      *(this + 154) = 50;
      *(this + 155) = 25;
      *(this + 150) = 5;
      *(this + 156) = 3;
      *(this + 157) = 3;
      *(this + 158) = 50;
      *(this + 159) = 10;
      *(this + 160) = 40;
      *(this + 133) = 100;
      *(this + 126) = 100;
      *(this + 119) = 100;
      *(this + 112) = 80;
      *(this + 105) = 20;
      *(this + 98) = 7;
      *(this + 132) = 100;
      *(this + 125) = 100;
      *(this + 118) = 100;
      *(this + 111) = 90;
      *(this + 104) = 35;
      *(this + 97) = 15;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 100;
      *(this + 110) = 100;
      *(this + 103) = 50;
      *(this + 96) = 18;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 100;
      *(this + 109) = 100;
      *(this + 102) = 65;
      *(this + 95) = 23;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 100;
      *(this + 108) = 100;
      *(this + 101) = 80;
      *(this + 94) = 30;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 100;
      *(this + 100) = 95;
      *(this + 93) = 50;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 100;
      *(this + 99) = 98;
      *(this + 92) = 75;
      result = (int)this;
      break;
    case 10:
      *(this + 135) = 7;
      *(this + 134) = 11;
      *(this + 136) = 25;
      *(this + 137) = 40;
      *(this + 138) = 6;
      *(this + 139) = 18;
      *(this + 140) = 60;
      *(this + 141) = 8;
      *(this + 142) = 4;
      *(this + 143) = 17;
      *(this + 144) = 8;
      *(this + 145) = 17;
      *(this + 146) = 32;
      *(this + 147) = 14;
      *(this + 148) = 8;
      *(this + 149) = 40;
      *(this + 150) = 3;
      *(this + 151) = 90;
      *(this + 152) = 60;
      *(this + 153) = 30;
      *(this + 154) = 38;
      *(this + 155) = 20;
      *(this + 156) = 6;
      *(this + 157) = 2;
      *(this + 158) = 80;
      *(this + 159) = 5;
      *(this + 160) = 30;
      *(this + 133) = 100;
      *(this + 126) = 100;
      *(this + 119) = 100;
      *(this + 112) = 60;
      *(this + 105) = 10;
      *(this + 98) = 3;
      *(this + 132) = 100;
      *(this + 125) = 100;
      *(this + 118) = 100;
      *(this + 111) = 70;
      *(this + 104) = 20;
      *(this + 97) = 8;
      *(this + 131) = 100;
      *(this + 124) = 100;
      *(this + 117) = 100;
      *(this + 110) = 90;
      *(this + 103) = 35;
      *(this + 96) = 10;
      *(this + 130) = 100;
      *(this + 123) = 100;
      *(this + 116) = 100;
      *(this + 109) = 100;
      *(this + 102) = 32;
      *(this + 95) = 12;
      *(this + 129) = 100;
      *(this + 122) = 100;
      *(this + 115) = 100;
      *(this + 108) = 100;
      *(this + 101) = 40;
      *(this + 94) = 15;
      *(this + 128) = 100;
      *(this + 121) = 100;
      *(this + 114) = 100;
      *(this + 107) = 100;
      *(this + 100) = 50;
      *(this + 93) = 25;
      *(this + 127) = 100;
      *(this + 120) = 100;
      *(this + 113) = 100;
      *(this + 106) = 100;
      *(this + 99) = 60;
      *(this + 92) = 38;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4CBD10
// entry 004cbd10  size 226  status ok
//======================================================================

__int16 __thiscall sub_4CBD10(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 135);
    case 1:
      v4 = *(this + 135);
      v5 = v4 - sub_62FBF0(5);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 135);
      return sub_62FBF0(3) + v2;
    case 3:
      v3 = *(this + 135);
      return sub_62FBF0(6) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2353);
      return 0;
  }
}


//======================================================================
// sub_4CBE00
// entry 004cbe00  size 35  status ok
//======================================================================

double __thiscall sub_4CBE00(__int16 *this)
{
  return (double)*(this + 137) / 100.0;
}


//======================================================================
// sub_4CBE30
// entry 004cbe30  size 35  status ok
//======================================================================

double __thiscall sub_4CBE30(__int16 *this)
{
  return (double)*(this + 140) / 100.0;
}


//======================================================================
// sub_4CBE60
// entry 004cbe60  size 199  status ok
//======================================================================

double __thiscall sub_4CBE60(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 141) / 100.0;
    case 1:
      return (double)(__int16)*(this + 141) / 80.0;
    case 2:
      return (double)(__int16)*(this + 141) / 120.0;
    case 3:
      return (double)(__int16)*(this + 141) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2379);
  return 0.0;
}


//======================================================================
// sub_4CBF30
// entry 004cbf30  size 199  status ok
//======================================================================

double __thiscall sub_4CBF30(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 142) / 100.0;
    case 1:
      return (double)(__int16)*(this + 142) / 80.0;
    case 2:
      return (double)(__int16)*(this + 142) / 120.0;
    case 3:
      return (double)(__int16)*(this + 142) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2395);
  return 0.0;
}


//======================================================================
// sub_4CC000
// entry 004cc000  size 199  status ok
//======================================================================

double __thiscall sub_4CC000(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 143) / 100.0;
    case 1:
      return (double)(__int16)*(this + 143) / 80.0;
    case 2:
      return (double)(__int16)*(this + 143) / 120.0;
    case 3:
      return (double)(__int16)*(this + 143) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2411);
  return 0.0;
}


//======================================================================
// sub_4CC0D0
// entry 004cc0d0  size 199  status ok
//======================================================================

double __thiscall sub_4CC0D0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 144) / 100.0;
    case 1:
      return (double)(__int16)*(this + 144) / 80.0;
    case 2:
      return (double)(__int16)*(this + 144) / 120.0;
    case 3:
      return (double)(__int16)*(this + 144) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2427);
  return 0.0;
}


//======================================================================
// sub_4CC1A0
// entry 004cc1a0  size 514  status ok
//======================================================================

__int16 __thiscall sub_4CC1A0(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 2434);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 2435);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 153) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 152);
        else
          v3 = (__int16)*(this + 151);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 153);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 152);
          else
            v5 = *(this + 151);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 153);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 152);
          else
            v7 = *(this + 151);
          v10 = sub_62FBF0(40) + v7;
        }
      }
      if ( v10 > 96 )
        v10 = 96;
      LOWORD(v2) = v10;
    }
  }
  else if ( a2 == 1 )
  {
    LOWORD(v2) = *(this + 153);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 152);
  }
  else
  {
    LOWORD(v2) = *(this + 151);
  }
  return v2;
}


//======================================================================
// sub_4CC3B0
// entry 004cc3b0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4CC3B0(_WORD *this)
{
  return *(this + 154);
}


//======================================================================
// sub_4CC3D0
// entry 004cc3d0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4CC3D0(_WORD *this)
{
  return *(this + 155);
}


//======================================================================
// sub_4CC3F0
// entry 004cc3f0  size 187  status ok
//======================================================================

__int16 __thiscall sub_4CC3F0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 156);
    case 1:
      return (__int16)*(this + 156) / 2;
    case 2:
      v2 = *(this + 156);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 156);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2501);
      return 0;
  }
}


//======================================================================
// sub_4CC4B0
// entry 004cc4b0  size 49  status ok
//======================================================================

__int16 __thiscall sub_4CC4B0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 157);
  else
    return *(this + 157);
}


//======================================================================
// sub_4CC4F0
// entry 004cc4f0  size 52  status ok
//======================================================================

__int16 __thiscall sub_4CC4F0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 158) / 2;
  else
    return *(this + 158);
}


//======================================================================
// sub_4CC530
// entry 004cc530  size 21  status ok
//======================================================================

__int16 __thiscall sub_4CC530(_WORD *this)
{
  return *(this + 159);
}


//======================================================================
// sub_4CC550
// entry 004cc550  size 21  status ok
//======================================================================

__int16 __thiscall sub_4CC550(_WORD *this)
{
  return *(this + 160);
}


//======================================================================
// sub_4CC570
// entry 004cc570  size 586  status ok
//======================================================================

double __thiscall sub_4CC570(_WORD *this, __int16 a2, __int16 a3)
{
  int v4; // esi
  int v5; // esi
  int v6; // esi
  double v8; // [esp+18h] [ebp-18h]
  double v9; // [esp+20h] [ebp-10h]
  double v10; // [esp+28h] [ebp-8h]

  if ( a2 <= 0 )
    sub_5E9F20((char)"shHandStrength>0", "..\\Casino\\PokerPlayer.cpp", 2534);
  if ( a2 > 6 )
    sub_5E9F20((char)"shHandStrength<=PokerHand::MAXTEXASHOLDEMHANDSTRENGTH", "..\\Casino\\PokerPlayer.cpp", 2535);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 2536);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 2537);
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 7 * a2 + a3 + 83) / 100.0;
    case 1:
      v4 = -sub_62FBF0(30);
      v10 = (double)((__int16)*(this + 7 * a2 + a3 + 83) + v4 - sub_62FBF0(30)) / 100.0;
      if ( v10 >= 0.0 )
        return v10;
      else
        return 0.0;
    case 2:
      v5 = sub_62FBF0(30);
      v9 = (double)((__int16)*(this + 7 * a2 + a3 + 83) + sub_62FBF0(30) + v5) / 100.0;
      if ( v9 <= 1.0 )
        return v9;
      else
        return 1.0;
    case 3:
      v6 = sub_62FBF0(60);
      v8 = (double)((__int16)*(this + 7 * a2 + a3 + 83) + sub_62FBF0(60) + v6) / 100.0;
      if ( v8 <= 1.0 )
        return v8;
      else
        return 1.0;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 2566);
      return 0.0;
  }
}


//======================================================================
// sub_4CC7E0
// entry 004cc7e0  size 142  status ok
//======================================================================

int __thiscall sub_4CC7E0(_DWORD *this, int a2, int a3, __int16 a4)
{
  double v5; // [esp+20h] [ebp-8h]

  v5 = 0.5;
  switch ( a4 )
  {
    case 1:
      v5 = 0.5;
      break;
    case 2:
      v5 = 0.75;
      break;
    case 3:
      v5 = 1.0;
      break;
    case 4:
      v5 = 0.25;
      break;
    case 5:
      v5 = 0.125;
      break;
    default:
      return sub_4C6250(this, a3, -1, 0.0, v5, a2, 0);
  }
  return sub_4C6250(this, a3, -1, 0.0, v5, a2, 0);
}


//======================================================================
// sub_4CC890
// entry 004cc890  size 209  status ok
//======================================================================

int __thiscall sub_4CC890(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax

  switch ( a2 )
  {
    case 0:
      v4 = sub_62FBF0(2);
      result = sub_4CC7E0(this, a3, v4 != 0 ? 2087 : 2051, 2);
      break;
    case 1:
      result = sub_4CC7E0(this, a3, 2050, 2);
      break;
    case 2:
      result = sub_4CC7E0(this, a3, 2054, 2);
      break;
    case 3:
      result = sub_4CC7E0(this, a3, 2046, 2);
      break;
    case 4:
      result = sub_4CC7E0(this, a3, 2055, 2);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2609);
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 28))(a3, 0);
      break;
  }
  return result;
}


//======================================================================
// sub_4CC980
// entry 004cc980  size 32  status ok
//======================================================================

int __thiscall sub_4CC980(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2051, 4);
}


//======================================================================
// sub_4CC9A0
// entry 004cc9a0  size 32  status ok
//======================================================================

int __thiscall sub_4CC9A0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2051, 1);
}


//======================================================================
// sub_4CC9C0
// entry 004cc9c0  size 32  status ok
//======================================================================

int __thiscall sub_4CC9C0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2052, 2);
}


//======================================================================
// sub_4CC9E0
// entry 004cc9e0  size 32  status ok
//======================================================================

int __thiscall sub_4CC9E0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2050, 4);
}


//======================================================================
// sub_4CCA00
// entry 004cca00  size 32  status ok
//======================================================================

int __thiscall sub_4CCA00(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2055, 2);
}


//======================================================================
// sub_4CCA20
// entry 004cca20  size 32  status ok
//======================================================================

int __thiscall sub_4CCA20(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2055, 2);
}


//======================================================================
// sub_4CCA60
// entry 004cca60  size 34  status ok
//======================================================================

int __stdcall sub_4CCA60(int a1)
{
  int result; // eax

  if ( a1 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 28))(a1, 0);
  return result;
}


//======================================================================
// sub_4CCA90
// entry 004cca90  size 32  status ok
//======================================================================

int __thiscall sub_4CCA90(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2045, 2);
}


//======================================================================
// sub_4CCAB0
// entry 004ccab0  size 34  status ok
//======================================================================

int __stdcall sub_4CCAB0(int a1)
{
  int result; // eax

  if ( a1 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 28))(a1, 0);
  return result;
}


//======================================================================
// sub_4CCAE0
// entry 004ccae0  size 32  status ok
//======================================================================

int __thiscall sub_4CCAE0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2046, 5);
}


//======================================================================
// sub_4CCB20
// entry 004ccb20  size 52  status ok
//======================================================================

int __thiscall sub_4CCB20(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1020 : 2061, 2);
}


//======================================================================
// sub_4CCB60
// entry 004ccb60  size 52  status ok
//======================================================================

int __thiscall sub_4CCB60(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1020 : 2062, 2);
}


//======================================================================
// sub_4CCBA0
// entry 004ccba0  size 52  status ok
//======================================================================

int __thiscall sub_4CCBA0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1020 : 2061, 2);
}


//======================================================================
// sub_4CCBE0
// entry 004ccbe0  size 52  status ok
//======================================================================

int __thiscall sub_4CCBE0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1020 : 2067, 2);
}


//======================================================================
// sub_4CCC20
// entry 004ccc20  size 52  status ok
//======================================================================

int __thiscall sub_4CCC20(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1020 : 2065, 2);
}


//======================================================================
// sub_4CCC60
// entry 004ccc60  size 52  status ok
//======================================================================

int __thiscall sub_4CCC60(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1008 : 2073, 2);
}


//======================================================================
// sub_4CCCA0
// entry 004ccca0  size 52  status ok
//======================================================================

int __thiscall sub_4CCCA0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1008 : 2074, 2);
}


//======================================================================
// sub_4CCCE0
// entry 004ccce0  size 52  status ok
//======================================================================

int __thiscall sub_4CCCE0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1008 : 2073, 2);
}


//======================================================================
// sub_4CCD20
// entry 004ccd20  size 52  status ok
//======================================================================

int __thiscall sub_4CCD20(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1008 : 2079, 2);
}


//======================================================================
// sub_4CCD60
// entry 004ccd60  size 52  status ok
//======================================================================

int __thiscall sub_4CCD60(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1034 : 2077, 2);
}


//======================================================================
// sub_4CCDA0
// entry 004ccda0  size 50  status ok
//======================================================================

int __thiscall sub_4CCDA0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1014 : 1026, 2);
}


//======================================================================
// sub_4CCDE0
// entry 004ccde0  size 32  status ok
//======================================================================

int __thiscall sub_4CCDE0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2070, 2);
}


//======================================================================
// sub_4CCE00
// entry 004cce00  size 52  status ok
//======================================================================

int __thiscall sub_4CCE00(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1014 : 2088, 2);
}


//======================================================================
// sub_4CCE40
// entry 004cce40  size 52  status ok
//======================================================================

int __thiscall sub_4CCE40(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_62FBF0(2);
  return sub_4CC7E0(this, a2, v2 != 0 ? 1026 : 2053, 2);
}


//======================================================================
// sub_4CCE80
// entry 004cce80  size 32  status ok
//======================================================================

int __thiscall sub_4CCE80(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2060, 2);
}


//======================================================================
// sub_4CCEA0
// entry 004ccea0  size 34  status ok
//======================================================================

int __stdcall sub_4CCEA0(int a1)
{
  int result; // eax

  if ( a1 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 28))(a1, 0);
  return result;
}


//======================================================================
// sub_4CCED0
// entry 004cced0  size 32  status ok
//======================================================================

int __thiscall sub_4CCED0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2059, 2);
}


//======================================================================
// sub_4CCEF0
// entry 004ccef0  size 32  status ok
//======================================================================

int __thiscall sub_4CCEF0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2072, 2);
}


//======================================================================
// sub_4CCF10
// entry 004ccf10  size 34  status ok
//======================================================================

int __stdcall sub_4CCF10(int a1)
{
  int result; // eax

  if ( a1 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 28))(a1, 0);
  return result;
}


//======================================================================
// sub_4CCF40
// entry 004ccf40  size 32  status ok
//======================================================================

int __thiscall sub_4CCF40(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2071, 2);
}


//======================================================================
// sub_4CCF60
// entry 004ccf60  size 32  status ok
//======================================================================

int __thiscall sub_4CCF60(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2046, 2);
}


//======================================================================
// sub_4CCF80
// entry 004ccf80  size 32  status ok
//======================================================================

int __thiscall sub_4CCF80(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2069, 2);
}


//======================================================================
// sub_4CCFA0
// entry 004ccfa0  size 32  status ok
//======================================================================

int __thiscall sub_4CCFA0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2058, 2);
}


//======================================================================
// sub_4CCFC0
// entry 004ccfc0  size 32  status ok
//======================================================================

int __thiscall sub_4CCFC0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2063, 2);
}


//======================================================================
// sub_4CCFE0
// entry 004ccfe0  size 32  status ok
//======================================================================

int __thiscall sub_4CCFE0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2075, 2);
}


//======================================================================
// sub_4CD090
// entry 004cd090  size 32  status ok
//======================================================================

int __thiscall sub_4CD090(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2068, 2);
}


//======================================================================
// sub_4CD0B0
// entry 004cd0b0  size 32  status ok
//======================================================================

int __thiscall sub_4CD0B0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2080, 2);
}


//======================================================================
// sub_4CD0D0
// entry 004cd0d0  size 32  status ok
//======================================================================

int __thiscall sub_4CD0D0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2056, 2);
}


//======================================================================
// sub_4CD0F0
// entry 004cd0f0  size 32  status ok
//======================================================================

int __thiscall sub_4CD0F0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2057, 2);
}


//======================================================================
// sub_4CD110
// entry 004cd110  size 32  status ok
//======================================================================

int __thiscall sub_4CD110(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2048, 2);
}


//======================================================================
// sub_4CD130
// entry 004cd130  size 32  status ok
//======================================================================

int __thiscall sub_4CD130(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2047, 2);
}


//======================================================================
// sub_4CD150
// entry 004cd150  size 32  status ok
//======================================================================

int __thiscall sub_4CD150(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 2049, 2);
}


//======================================================================
// sub_4CD170
// entry 004cd170  size 32  status ok
//======================================================================

int __thiscall sub_4CD170(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 1021, 3);
}


//======================================================================
// sub_4CD190
// entry 004cd190  size 32  status ok
//======================================================================

int __thiscall sub_4CD190(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 1025, 3);
}


//======================================================================
// sub_4CD1B0
// entry 004cd1b0  size 32  status ok
//======================================================================

int __thiscall sub_4CD1B0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 1042, 3);
}


//======================================================================
// sub_4CD1D0
// entry 004cd1d0  size 32  status ok
//======================================================================

int __thiscall sub_4CD1D0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 1000, 3);
}


//======================================================================
// sub_4CD1F0
// entry 004cd1f0  size 40  status ok
//======================================================================

int __stdcall sub_4CD1F0(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2886);
}


//======================================================================
// sub_4CD220
// entry 004cd220  size 40  status ok
//======================================================================

int __stdcall sub_4CD220(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2892);
}


//======================================================================
// sub_4CD250
// entry 004cd250  size 40  status ok
//======================================================================

int __stdcall sub_4CD250(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2898);
}


//======================================================================
// sub_4CD280
// entry 004cd280  size 40  status ok
//======================================================================

int __stdcall sub_4CD280(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2904);
}


//======================================================================
// sub_4CD2B0
// entry 004cd2b0  size 40  status ok
//======================================================================

int __stdcall sub_4CD2B0(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2910);
}


//======================================================================
// sub_4CD2E0
// entry 004cd2e0  size 40  status ok
//======================================================================

int __stdcall sub_4CD2E0(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2916);
}


//======================================================================
// sub_4CD310
// entry 004cd310  size 40  status ok
//======================================================================

int __stdcall sub_4CD310(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2922);
}


//======================================================================
// sub_4CD340
// entry 004cd340  size 40  status ok
//======================================================================

int __stdcall sub_4CD340(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2928);
}


//======================================================================
// sub_4CD370
// entry 004cd370  size 40  status ok
//======================================================================

int __stdcall sub_4CD370(int a1)
{
  return sub_5E9F20((char)"false", "..\\Casino\\PokerPlayer.cpp", 2934);
}


//======================================================================
// sub_4CD3A0
// entry 004cd3a0  size 32  status ok
//======================================================================

int __thiscall sub_4CD3A0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 1010, 2);
}


//======================================================================
// sub_4CD4E0
// entry 004cd4e0  size 32  status ok
//======================================================================

int __thiscall sub_4CD4E0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 400, 2);
}


//======================================================================
// sub_4CD520
// entry 004cd520  size 32  status ok
//======================================================================

int __thiscall sub_4CD520(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 404, 2);
}


