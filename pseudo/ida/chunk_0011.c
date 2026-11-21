//======================================================================
// sub_4CD540
// entry 004cd540  size 32  status ok
//======================================================================

int __thiscall sub_4CD540(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 409, 2);
}


//======================================================================
// sub_4CD560
// entry 004cd560  size 32  status ok
//======================================================================

int __thiscall sub_4CD560(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 414, 2);
}


//======================================================================
// sub_4CD5A0
// entry 004cd5a0  size 32  status ok
//======================================================================

int __thiscall sub_4CD5A0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 406, 2);
}


//======================================================================
// sub_4CD5C0
// entry 004cd5c0  size 32  status ok
//======================================================================

int __thiscall sub_4CD5C0(_DWORD *this, int a2)
{
  return sub_4CC7E0(this, a2, 416, 2);
}


//======================================================================
// sub_4CEA40
// entry 004cea40  size 334  status ok
//======================================================================

int __thiscall sub_4CEA40(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-8h]
  __int16 j; // [esp+Ch] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3191);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3192);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + i - 2) = 0;
    for ( j = 0; j < 6; ++j )
      *(_BYTE *)(7 * j + *(this + 266) + 42 * a2 + 392 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4CEB90
// entry 004ceb90  size 639  status ok
//======================================================================

int __thiscall sub_4CEB90(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3218);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3219);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3220);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3221);
  *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a3 - 4) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 4) + 1;
  if ( *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 4) == 12288 )
    *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a3 - 4) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 4) - 1;
  if ( a3 > 2 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a3 - 6) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 6) + 1;
    if ( *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 6) == 12288 )
      *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a3 - 6) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 6) - 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a3 - 2) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a3 - 2) + 1;
    result = 14 * a2 + *(this + 266);
    if ( *(_WORD *)(result + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4CEE10
// entry 004cee10  size 680  status ok
//======================================================================

int __thiscall sub_4CEE10(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3249);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3250);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3251);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3252);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 112;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4CF0C0
// entry 004cf0c0  size 725  status ok
//======================================================================

int __thiscall sub_4CF0C0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3280);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3281);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3282);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3283);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 224;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4CF3A0
// entry 004cf3a0  size 1923  status ok
//======================================================================

__int16 __thiscall sub_4CF3A0(_DWORD *this, __int16 a2, __int16 a3, __int16 a4)
{
  int v4; // eax
  __int16 k; // [esp+Ch] [ebp-Ch]
  __int16 j; // [esp+10h] [ebp-8h]
  __int16 i; // [esp+14h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3311);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3312);
  if ( a3 <= 0 )
    sub_5E9F20((char)"shHandStrength>0", "..\\Casino\\PokerPlayer.cpp", 3313);
  if ( a3 > 6 )
    sub_5E9F20((char)"shHandStrength<=PokerHand::MAXTEXASHOLDEMHANDSTRENGTH", "..\\Casino\\PokerPlayer.cpp", 3314);
  if ( a4 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3315);
  if ( a4 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3316);
  ++*(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 2);
  ++*(_BYTE *)(7 * (a3 - 1) + *(this + 266) + 42 * a2 + 392 + a4 - 2);
  if ( *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a4 - 4) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a4 - 4) >> 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a4 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a4 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 2) >>= 1;
    for ( i = 0; i < 6; ++i )
      *(_BYTE *)(7 * i + *(this + 266) + 42 * a2 + 392 + a4 - 2) >>= 1;
  }
  if ( a4 > 2 )
  {
    ++*(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 3);
    ++*(_BYTE *)(7 * (a3 - 1) + *(this + 266) + 42 * a2 + 392 + a4 - 3);
    if ( *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 3) == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a4 - 6) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a4 - 6) >> 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a4 - 6) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a4 - 6) >>= 1;
      *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 3) >>= 1;
      for ( j = 0; j < 6; ++j )
        *(_BYTE *)(7 * j + *(this + 266) + 42 * a2 + 392 + a4 - 3) >>= 1;
    }
  }
  v4 = sub_47F950();
  if ( a4 < v4 )
  {
    ++*(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 1);
    ++*(_BYTE *)(7 * (a3 - 1) + *(this + 266) + 42 * a2 + 392 + a4 - 1);
    LOWORD(v4) = a4;
    if ( *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 1) == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 2 * a4 - 2) = *(_WORD *)(14 * a2 + *(this + 266) + 2 * a4 - 2) >> 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 112 + 2 * a4 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 224 + 2 * a4 - 2) >>= 1;
      v4 = *(unsigned __int8 *)(*(this + 266) + 7 * a2 + 336 + a4 - 1) >> 1;
      *(_BYTE *)(*(this + 266) + 7 * a2 + 336 + a4 - 1) = v4;
      for ( k = 0; k < 6; ++k )
      {
        *(_BYTE *)(7 * k + *(this + 266) + 42 * a2 + 392 + a4 - 1) >>= 1;
        LOWORD(v4) = k + 1;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_4CFB30
// entry 004cfb30  size 752  status ok
//======================================================================

double __thiscall sub_4CFB30(int this, __int16 a2, __int16 a3, __int16 a4)
{
  double v5; // [esp+1Ch] [ebp-48h]
  double v6; // [esp+2Ch] [ebp-38h]
  __int16 i; // [esp+40h] [ebp-24h]
  double v9; // [esp+44h] [ebp-20h]
  double v10; // [esp+4Ch] [ebp-18h]
  double v11; // [esp+54h] [ebp-10h]
  double v12; // [esp+5Ch] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3381);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3382);
  if ( a3 <= 0 )
    sub_5E9F20((char)"shHandStrength>0", "..\\Casino\\PokerPlayer.cpp", 3383);
  if ( a3 > 6 )
    sub_5E9F20((char)"shHandStrength<=PokerHand::MAXTEXASHOLDEMHANDSTRENGTH", "..\\Casino\\PokerPlayer.cpp", 3384);
  if ( a4 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3385);
  if ( a4 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3386);
  v9 = 0.0;
  for ( i = 0; i < 6; ++i )
  {
    v6 = ((double)*(__int16 *)(this + 14 * i + 184 + 2 * a4 - 4) + (double)*(__int16 *)(this + 268)) / 100.0;
    v9 = sub_48E500(i + 1) * v6 + v9;
  }
  if ( v9 <= 0.0 )
    sub_5E9F20((char)"dblAllHandsExpectedUse>0.0", "..\\Casino\\PokerPlayer.cpp", 3393);
  v5 = ((double)*(__int16 *)(this + 14 * (a3 - 1) + 184 + 2 * a4 - 4) + (double)*(__int16 *)(this + 268)) / 100.0;
  v11 = sub_48E500(a3) * v5 / v9;
  if ( *(_BYTE *)(*(_DWORD *)(this + 1064) + 7 * a2 + 336 + a4 - 2) )
    v10 = (double)*(unsigned __int8 *)(7 * (a3 - 1) + *(_DWORD *)(this + 1064) + 42 * a2 + 392 + a4 - 2)
        / (double)*(unsigned __int8 *)(*(_DWORD *)(this + 1064) + 7 * a2 + 336 + a4 - 2);
  else
    v10 = 0.0;
  v12 = ((double)*(unsigned __int8 *)(*(_DWORD *)(this + 1064) + 7 * a2 + 336 + a4 - 2)
       / (double)*(__int16 *)(this + 276)
       * v10
       + v11)
      / ((double)*(unsigned __int8 *)(*(_DWORD *)(this + 1064) + 7 * a2 + 336 + a4 - 2)
       / (double)*(__int16 *)(this + 276)
       + 1.0);
  if ( v12 <= 1.0 )
    return v12;
  else
    return 1.0;
}


//======================================================================
// sub_4CFE20
// entry 004cfe20  size 443  status ok
//======================================================================

double __thiscall sub_4CFE20(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3422);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3423);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3424);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3425);
  v5 = (double)*(__int16 *)(this + 272) / 100.0 / (double)a3;
  if ( !*(_WORD *)(14 * a2 + *(_DWORD *)(this + 1064) + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(14 * a2 + *(_DWORD *)(this + 1064) + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 224 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 278) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 278) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 278) + v5) / (v7 / (double)*(__int16 *)(this + 278) + 1.0);
}


//======================================================================
// sub_4CFFE0
// entry 004cffe0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4CFFE0(_WORD *this)
{
  return *(this + 145);
}


//======================================================================
// sub_4D0000
// entry 004d0000  size 739  status ok
//======================================================================

__int16 __thiscall sub_4D0000(_WORD *this, __int16 a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int16 v16; // [esp+8h] [ebp-8h]
  __int16 v17; // [esp+Ch] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 3445);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 3446);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 148);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 147);
          else
            v5 = (__int16)*(this + 146);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 148);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 147);
          else
            v9 = (__int16)*(this + 146);
          v10 = v9 - sub_62FBF0(5);
          v17 = v10 - sub_62FBF0(5);
        }
        if ( v17 >= 1 )
          return v17;
        else
          return 1;
      case 3:
        if ( a2 == 1 )
        {
          v11 = (__int16)*(this + 148);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 147);
          else
            v13 = (__int16)*(this + 146);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 3495);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 148);
  }
  else if ( a2 == 2 )
  {
    return *(this + 147);
  }
  else
  {
    return *(this + 146);
  }
}


//======================================================================
// sub_4D02F0
// entry 004d02f0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D02F0(_WORD *this)
{
  return *(this + 149);
}


//======================================================================
// sub_4D0310
// entry 004d0310  size 161  status ok
//======================================================================

__int16 __thiscall sub_4D0310(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 150);
    case 1:
      return 2 * *(this + 150);
    case 2:
      return (__int16)*(this + 150) / 2;
    case 3:
      return (__int16)*(this + 150) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 3516);
  return 20;
}


//======================================================================
// sub_4D03C0
// entry 004d03c0  size 3641  status ok
//======================================================================

int __thiscall sub_4D03C0(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 3527);
  switch ( a2 )
  {
    case 1:
      *(this + 161) = 20;
      *(this + 165) = 50;
      *(this + 166) = 10;
      *(this + 167) = 300;
      *(this + 168) = 150;
      *(this + 175) = 80;
      *(this + 176) = 65;
      *(this + 177) = 50;
      *(this + 178) = 70;
      *(this + 179) = 40;
      *(this + 162) = 30;
      *(this + 163) = 50;
      *(this + 164) = 12;
      *(this + 169) = 20;
      *(this + 170) = 35;
      *(this + 171) = 22;
      *(this + 172) = 10;
      *(this + 173) = 30;
      *(this + 174) = 5;
      *(this + 180) = 4;
      *(this + 181) = 3;
      *(this + 182) = 60;
      *(this + 183) = 50;
      *(this + 184) = 1;
      *(this + 185) = 1;
      *(this + 186) = 1;
      *(this + 187) = 10;
      *(this + 188) = 50;
      *(this + 189) = 20;
      result = (int)this;
      break;
    case 2:
      *(this + 161) = 16;
      *(this + 165) = 100;
      *(this + 166) = 50;
      *(this + 167) = 600;
      *(this + 168) = 300;
      *(this + 175) = 75;
      *(this + 176) = 55;
      *(this + 177) = 30;
      *(this + 178) = 80;
      *(this + 179) = 60;
      *(this + 162) = 50;
      *(this + 163) = 70;
      *(this + 164) = 25;
      *(this + 169) = 8;
      *(this + 170) = 45;
      *(this + 171) = 30;
      *(this + 172) = 17;
      *(this + 173) = 10;
      *(this + 174) = 8;
      *(this + 180) = 2;
      *(this + 181) = 8;
      *(this + 182) = 35;
      *(this + 183) = 50;
      *(this + 184) = 1;
      *(this + 185) = 0;
      *(this + 186) = 0;
      *(this + 187) = 15;
      *(this + 188) = 40;
      *(this + 189) = 16;
      result = (int)this;
      break;
    case 3:
      *(this + 161) = 25;
      *(this + 165) = 25;
      *(this + 166) = 5;
      *(this + 167) = 150;
      *(this + 168) = 60;
      *(this + 175) = 90;
      *(this + 176) = 75;
      *(this + 177) = 60;
      *(this + 178) = 50;
      *(this + 179) = 45;
      *(this + 162) = 25;
      *(this + 163) = 40;
      *(this + 164) = 8;
      *(this + 169) = 15;
      *(this + 170) = 30;
      *(this + 171) = 20;
      *(this + 172) = 5;
      *(this + 173) = 40;
      *(this + 174) = 2;
      *(this + 180) = 7;
      *(this + 181) = 2;
      *(this + 182) = 90;
      *(this + 183) = 40;
      *(this + 184) = 1;
      *(this + 185) = 2;
      *(this + 186) = 1;
      *(this + 187) = 8;
      *(this + 188) = 60;
      *(this + 189) = 25;
      result = (int)this;
      break;
    case 4:
      *(this + 161) = 18;
      *(this + 165) = 40;
      *(this + 166) = 15;
      *(this + 167) = 200;
      *(this + 168) = 30;
      *(this + 175) = 80;
      *(this + 176) = 60;
      *(this + 177) = 40;
      *(this + 178) = 60;
      *(this + 179) = 50;
      *(this + 162) = 28;
      *(this + 163) = 35;
      *(this + 164) = 10;
      *(this + 169) = 30;
      *(this + 170) = 33;
      *(this + 171) = 15;
      *(this + 172) = 4;
      *(this + 173) = 35;
      *(this + 174) = 4;
      *(this + 180) = 6;
      *(this + 181) = 3;
      *(this + 182) = 70;
      *(this + 183) = 60;
      *(this + 184) = 2;
      *(this + 185) = 0;
      *(this + 186) = 1;
      *(this + 187) = 12;
      *(this + 188) = 45;
      *(this + 189) = 17;
      result = (int)this;
      break;
    case 5:
      *(this + 161) = 17;
      *(this + 165) = 60;
      *(this + 166) = 25;
      *(this + 167) = 300;
      *(this + 168) = 180;
      *(this + 175) = 90;
      *(this + 176) = 70;
      *(this + 177) = 40;
      *(this + 178) = 75;
      *(this + 179) = 55;
      *(this + 162) = 35;
      *(this + 163) = 45;
      *(this + 164) = 18;
      *(this + 169) = 35;
      *(this + 170) = 30;
      *(this + 171) = 20;
      *(this + 172) = 10;
      *(this + 173) = 25;
      *(this + 174) = 6;
      *(this + 180) = 3;
      *(this + 181) = 5;
      *(this + 182) = 50;
      *(this + 183) = 45;
      *(this + 184) = 1;
      *(this + 185) = 2;
      *(this + 186) = 0;
      *(this + 187) = 9;
      *(this + 188) = 58;
      *(this + 189) = 23;
      result = (int)this;
      break;
    case 6:
      *(this + 161) = 14;
      *(this + 165) = 250;
      *(this + 166) = 75;
      *(this + 167) = 1000;
      *(this + 168) = 300;
      *(this + 175) = 75;
      *(this + 176) = 45;
      *(this + 177) = 25;
      *(this + 178) = 75;
      *(this + 179) = 80;
      *(this + 162) = 40;
      *(this + 163) = 65;
      *(this + 164) = 50;
      *(this + 169) = 30;
      *(this + 170) = 45;
      *(this + 171) = 30;
      *(this + 172) = 14;
      *(this + 173) = 5;
      *(this + 174) = 8;
      *(this + 180) = 2;
      *(this + 181) = 10;
      *(this + 182) = 25;
      *(this + 183) = 65;
      *(this + 184) = 1;
      *(this + 185) = 0;
      *(this + 186) = 0;
      *(this + 187) = 16;
      *(this + 188) = 35;
      *(this + 189) = 13;
      result = (int)this;
      break;
    case 7:
      *(this + 161) = 16;
      *(this + 165) = 100;
      *(this + 166) = 20;
      *(this + 167) = 400;
      *(this + 168) = 200;
      *(this + 175) = 70;
      *(this + 176) = 50;
      *(this + 177) = 30;
      *(this + 178) = 65;
      *(this + 179) = 20;
      *(this + 162) = 30;
      *(this + 163) = 35;
      *(this + 164) = 12;
      *(this + 169) = 50;
      *(this + 170) = 42;
      *(this + 171) = 27;
      *(this + 172) = 12;
      *(this + 173) = 40;
      *(this + 174) = 2;
      *(this + 180) = 3;
      *(this + 181) = 7;
      *(this + 182) = 40;
      *(this + 183) = 55;
      *(this + 184) = 2;
      *(this + 185) = 0;
      *(this + 186) = 2;
      *(this + 187) = 11;
      *(this + 188) = 47;
      *(this + 189) = 18;
      result = (int)this;
      break;
    case 8:
      *(this + 161) = 22;
      *(this + 165) = 50;
      *(this + 166) = 13;
      *(this + 167) = 300;
      *(this + 168) = 150;
      *(this + 175) = 80;
      *(this + 176) = 65;
      *(this + 177) = 50;
      *(this + 178) = 70;
      *(this + 179) = 40;
      *(this + 162) = 30;
      *(this + 163) = 50;
      *(this + 164) = 12;
      *(this + 169) = 20;
      *(this + 170) = 35;
      *(this + 171) = 22;
      *(this + 172) = 13;
      *(this + 173) = 30;
      *(this + 174) = 5;
      *(this + 180) = 8;
      *(this + 181) = 1;
      *(this + 182) = 95;
      *(this + 183) = 50;
      *(this + 184) = 1;
      *(this + 185) = 1;
      *(this + 186) = 1;
      *(this + 187) = 10;
      *(this + 188) = 55;
      *(this + 189) = 23;
      result = (int)this;
      break;
    case 9:
      *(this + 161) = 26;
      *(this + 165) = 50;
      *(this + 166) = 10;
      *(this + 167) = 300;
      *(this + 168) = 150;
      *(this + 175) = 80;
      *(this + 176) = 65;
      *(this + 177) = 40;
      *(this + 178) = 70;
      *(this + 179) = 40;
      *(this + 162) = 30;
      *(this + 163) = 50;
      *(this + 164) = 12;
      *(this + 169) = 20;
      *(this + 170) = 35;
      *(this + 171) = 22;
      *(this + 172) = 8;
      *(this + 173) = 30;
      *(this + 174) = 5;
      *(this + 180) = 4;
      *(this + 181) = 3;
      *(this + 182) = 60;
      *(this + 183) = 50;
      *(this + 184) = 2;
      *(this + 185) = 2;
      *(this + 186) = 2;
      *(this + 187) = 10;
      *(this + 188) = 50;
      *(this + 189) = 20;
      result = (int)this;
      break;
    case 10:
      *(this + 161) = 23;
      *(this + 165) = 35;
      *(this + 166) = 8;
      *(this + 167) = 225;
      *(this + 168) = 100;
      *(this + 175) = 85;
      *(this + 176) = 70;
      *(this + 177) = 55;
      *(this + 178) = 60;
      *(this + 179) = 43;
      *(this + 162) = 28;
      *(this + 163) = 45;
      *(this + 164) = 10;
      *(this + 169) = 18;
      *(this + 170) = 32;
      *(this + 171) = 21;
      *(this + 172) = 8;
      *(this + 173) = 35;
      *(this + 174) = 3;
      *(this + 180) = 6;
      *(this + 181) = 2;
      *(this + 182) = 75;
      *(this + 183) = 45;
      *(this + 184) = 2;
      *(this + 185) = 2;
      *(this + 186) = 1;
      *(this + 187) = 9;
      *(this + 188) = 55;
      *(this + 189) = 22;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4D1230
// entry 004d1230  size 272  status ok
//======================================================================

int __thiscall sub_4D1230(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3855);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3856);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4D1340
// entry 004d1340  size 725  status ok
//======================================================================

int __thiscall sub_4D1340(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3871);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3872);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3873);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3874);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 728;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D1620
// entry 004d1620  size 725  status ok
//======================================================================

int __thiscall sub_4D1620(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3902);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3903);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3904);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3905);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 840;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D1900
// entry 004d1900  size 725  status ok
//======================================================================

int __thiscall sub_4D1900(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3933);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3934);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3935);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3936);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 952;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D1BE0
// entry 004d1be0  size 1305  status ok
//======================================================================

int __thiscall sub_4D1BE0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 3964);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3965);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 3966);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 3967);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + a3 - 1);
    result = a3;
    if ( *(_BYTE *)(*(this + 266) + 7 * a2 + 1064 + a3 - 1) == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 728 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 840 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 952 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 1064;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4D2100
// entry 004d2100  size 453  status ok
//======================================================================

double __thiscall sub_4D2100(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4016);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4017);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 4018);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4019);
  v5 = (double)*(__int16 *)(this + 324) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 728 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 728 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 952 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 328) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 328) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 328) + v5) / (v7 / (double)*(__int16 *)(this + 328) + 1.0);
}


//======================================================================
// sub_4D22D0
// entry 004d22d0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D22D0(_WORD *this)
{
  return *(this + 169);
}


//======================================================================
// sub_4D22F0
// entry 004d22f0  size 226  status ok
//======================================================================

__int16 __thiscall sub_4D22F0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 161);
    case 1:
      v4 = *(this + 161);
      v5 = v4 - sub_62FBF0(10);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 161);
      return sub_62FBF0(10) + v2;
    case 3:
      v3 = *(this + 161);
      return sub_62FBF0(20) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4054);
      return 0;
  }
}


//======================================================================
// sub_4D23E0
// entry 004d23e0  size 35  status ok
//======================================================================

double __thiscall sub_4D23E0(__int16 *this)
{
  return (double)*(this + 163) / 100.0;
}


//======================================================================
// sub_4D2410
// entry 004d2410  size 199  status ok
//======================================================================

double __thiscall sub_4D2410(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 165) / 1000.0;
    case 1:
      return (double)(__int16)*(this + 165) / 800.0;
    case 2:
      return (double)(__int16)*(this + 165) / 1200.0;
    case 3:
      return (double)(__int16)*(this + 165) / 1400.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4075);
  return 0.0;
}


//======================================================================
// sub_4D24E0
// entry 004d24e0  size 199  status ok
//======================================================================

double __thiscall sub_4D24E0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 166) / 1000.0;
    case 1:
      return (double)(__int16)*(this + 166) / 800.0;
    case 2:
      return (double)(__int16)*(this + 166) / 1200.0;
    case 3:
      return (double)(__int16)*(this + 166) / 1400.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4091);
  return 0.0;
}


//======================================================================
// sub_4D25B0
// entry 004d25b0  size 199  status ok
//======================================================================

double __thiscall sub_4D25B0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 167) / 2000.0;
    case 1:
      return (double)(__int16)*(this + 167) / 1600.0;
    case 2:
      return (double)(__int16)*(this + 167) / 2400.0;
    case 3:
      return (double)(__int16)*(this + 167) / 2800.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4107);
  return 0.0;
}


//======================================================================
// sub_4D2680
// entry 004d2680  size 199  status ok
//======================================================================

double __thiscall sub_4D2680(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 168) / 2000.0;
    case 1:
      return (double)(__int16)*(this + 168) / 1600.0;
    case 2:
      return (double)(__int16)*(this + 168) / 2400.0;
    case 3:
      return (double)(__int16)*(this + 168) / 2800.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4123);
  return 0.0;
}


//======================================================================
// sub_4D2750
// entry 004d2750  size 514  status ok
//======================================================================

__int16 __thiscall sub_4D2750(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 4130);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 4131);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 177) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 176);
        else
          v3 = (__int16)*(this + 175);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 177);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 176);
          else
            v5 = *(this + 175);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 177);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 176);
          else
            v7 = *(this + 175);
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
    LOWORD(v2) = *(this + 177);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 176);
  }
  else
  {
    LOWORD(v2) = *(this + 175);
  }
  return v2;
}


//======================================================================
// sub_4D2960
// entry 004d2960  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2960(_WORD *this)
{
  return *(this + 178);
}


//======================================================================
// sub_4D2980
// entry 004d2980  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2980(_WORD *this)
{
  return *(this + 179);
}


//======================================================================
// sub_4D29A0
// entry 004d29a0  size 187  status ok
//======================================================================

__int16 __thiscall sub_4D29A0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 180);
    case 1:
      return (__int16)*(this + 180) / 2;
    case 2:
      v2 = *(this + 180);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 180);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4197);
      return 0;
  }
}


//======================================================================
// sub_4D2A60
// entry 004d2a60  size 49  status ok
//======================================================================

__int16 __thiscall sub_4D2A60(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 181);
  else
    return *(this + 181);
}


//======================================================================
// sub_4D2AA0
// entry 004d2aa0  size 52  status ok
//======================================================================

__int16 __thiscall sub_4D2AA0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 182) / 2;
  else
    return *(this + 182);
}


//======================================================================
// sub_4D2AE0
// entry 004d2ae0  size 739  status ok
//======================================================================

__int16 __thiscall sub_4D2AE0(_WORD *this, __int16 a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int16 v16; // [esp+8h] [ebp-8h]
  __int16 v17; // [esp+Ch] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 4220);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 4221);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 172);
          v4 = sub_62FBF0(8) + v3;
          return sub_62FBF0(8) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 171);
          else
            v5 = (__int16)*(this + 170);
          v6 = sub_62FBF0(8) + v5;
          return sub_62FBF0(8) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 172);
          v8 = v7 - sub_62FBF0(3);
          v17 = v8 - sub_62FBF0(3);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 171);
          else
            v9 = (__int16)*(this + 170);
          v10 = v9 - sub_62FBF0(3);
          v17 = v10 - sub_62FBF0(3);
        }
        if ( v17 >= 1 )
          return v17;
        else
          return 1;
      case 3:
        if ( a2 == 1 )
        {
          v11 = (__int16)*(this + 172);
          v12 = v11 - sub_62FBF0(6);
          v16 = v12 - sub_62FBF0(6);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 171);
          else
            v13 = (__int16)*(this + 170);
          v14 = v13 - sub_62FBF0(6);
          v16 = v14 - sub_62FBF0(6);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4270);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 172);
  }
  else if ( a2 == 2 )
  {
    return *(this + 171);
  }
  else
  {
    return *(this + 170);
  }
}


//======================================================================
// sub_4D2DD0
// entry 004d2dd0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2DD0(_WORD *this)
{
  return *(this + 173);
}


//======================================================================
// sub_4D2DF0
// entry 004d2df0  size 161  status ok
//======================================================================

__int16 __thiscall sub_4D2DF0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 174);
    case 1:
      return 2 * *(this + 174);
    case 2:
      return (__int16)*(this + 174) / 2;
    case 3:
      return (__int16)*(this + 174) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4291);
  return 20;
}


//======================================================================
// sub_4D2EA0
// entry 004d2ea0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2EA0(_WORD *this)
{
  return *(this + 183);
}


//======================================================================
// sub_4D2EC0
// entry 004d2ec0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2EC0(_WORD *this)
{
  return *(this + 184);
}


//======================================================================
// sub_4D2EE0
// entry 004d2ee0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2EE0(_WORD *this)
{
  return *(this + 185);
}


//======================================================================
// sub_4D2F00
// entry 004d2f00  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2F00(_WORD *this)
{
  return *(this + 186);
}


//======================================================================
// sub_4D2F20
// entry 004d2f20  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2F20(_WORD *this)
{
  return *(this + 187);
}


//======================================================================
// sub_4D2F40
// entry 004d2f40  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2F40(_WORD *this)
{
  return *(this + 188);
}


//======================================================================
// sub_4D2F60
// entry 004d2f60  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D2F60(_WORD *this)
{
  return *(this + 189);
}


//======================================================================
// sub_4D2F80
// entry 004d2f80  size 3761  status ok
//======================================================================

int __thiscall sub_4D2F80(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 4337);
  switch ( a2 )
  {
    case 1:
      *(this + 190) = 20;
      *(this + 194) = 50;
      *(this + 195) = 10;
      *(this + 196) = 300;
      *(this + 197) = 150;
      *(this + 204) = 80;
      *(this + 205) = 65;
      *(this + 206) = 50;
      *(this + 207) = 70;
      *(this + 208) = 40;
      *(this + 191) = 20;
      *(this + 192) = 40;
      *(this + 193) = 12;
      *(this + 198) = 20;
      *(this + 199) = 35;
      *(this + 200) = 22;
      *(this + 201) = 10;
      *(this + 202) = 30;
      *(this + 203) = 5;
      *(this + 209) = 4;
      *(this + 210) = 3;
      *(this + 211) = 60;
      *(this + 212) = 50;
      *(this + 213) = 1;
      *(this + 214) = 1;
      *(this + 215) = 1;
      *(this + 216) = 2;
      *(this + 217) = 5;
      *(this + 218) = 50;
      *(this + 219) = 20;
      result = (int)this;
      break;
    case 2:
      *(this + 190) = 17;
      *(this + 194) = 100;
      *(this + 195) = 50;
      *(this + 196) = 450;
      *(this + 197) = 300;
      *(this + 204) = 75;
      *(this + 205) = 55;
      *(this + 206) = 30;
      *(this + 207) = 80;
      *(this + 208) = 60;
      *(this + 191) = 33;
      *(this + 192) = 50;
      *(this + 193) = 25;
      *(this + 198) = 8;
      *(this + 199) = 45;
      *(this + 200) = 30;
      *(this + 201) = 17;
      *(this + 202) = 10;
      *(this + 203) = 7;
      *(this + 209) = 2;
      *(this + 210) = 8;
      *(this + 211) = 35;
      *(this + 212) = 50;
      *(this + 213) = 1;
      *(this + 214) = 0;
      *(this + 215) = 0;
      *(this + 216) = 2;
      *(this + 217) = 6;
      *(this + 218) = 42;
      *(this + 219) = 17;
      result = (int)this;
      break;
    case 3:
      *(this + 190) = 25;
      *(this + 194) = 25;
      *(this + 195) = 5;
      *(this + 196) = 150;
      *(this + 197) = 60;
      *(this + 204) = 90;
      *(this + 205) = 75;
      *(this + 206) = 60;
      *(this + 207) = 50;
      *(this + 208) = 45;
      *(this + 191) = 15;
      *(this + 192) = 27;
      *(this + 193) = 8;
      *(this + 198) = 15;
      *(this + 199) = 30;
      *(this + 200) = 20;
      *(this + 201) = 5;
      *(this + 202) = 40;
      *(this + 203) = 2;
      *(this + 209) = 7;
      *(this + 210) = 2;
      *(this + 211) = 90;
      *(this + 212) = 40;
      *(this + 213) = 1;
      *(this + 214) = 2;
      *(this + 215) = 1;
      *(this + 216) = 3;
      *(this + 217) = 4;
      *(this + 218) = 60;
      *(this + 219) = 25;
      result = (int)this;
      break;
    case 4:
      *(this + 190) = 18;
      *(this + 194) = 40;
      *(this + 195) = 15;
      *(this + 196) = 200;
      *(this + 197) = 30;
      *(this + 204) = 80;
      *(this + 205) = 60;
      *(this + 206) = 40;
      *(this + 207) = 60;
      *(this + 208) = 50;
      *(this + 191) = 20;
      *(this + 192) = 33;
      *(this + 193) = 10;
      *(this + 198) = 30;
      *(this + 199) = 33;
      *(this + 200) = 15;
      *(this + 201) = 4;
      *(this + 202) = 35;
      *(this + 203) = 4;
      *(this + 209) = 6;
      *(this + 210) = 3;
      *(this + 211) = 70;
      *(this + 212) = 60;
      *(this + 213) = 2;
      *(this + 214) = 0;
      *(this + 215) = 1;
      *(this + 216) = 1;
      *(this + 217) = 6;
      *(this + 218) = 45;
      *(this + 219) = 17;
      result = (int)this;
      break;
    case 5:
      *(this + 190) = 17;
      *(this + 194) = 60;
      *(this + 195) = 25;
      *(this + 196) = 300;
      *(this + 197) = 180;
      *(this + 204) = 90;
      *(this + 205) = 70;
      *(this + 206) = 40;
      *(this + 207) = 75;
      *(this + 208) = 55;
      *(this + 191) = 25;
      *(this + 192) = 35;
      *(this + 193) = 12;
      *(this + 198) = 35;
      *(this + 199) = 30;
      *(this + 200) = 20;
      *(this + 201) = 10;
      *(this + 202) = 25;
      *(this + 203) = 6;
      *(this + 209) = 3;
      *(this + 210) = 5;
      *(this + 211) = 50;
      *(this + 212) = 45;
      *(this + 213) = 1;
      *(this + 214) = 2;
      *(this + 215) = 0;
      *(this + 216) = 2;
      *(this + 217) = 4;
      *(this + 218) = 58;
      *(this + 219) = 23;
      result = (int)this;
      break;
    case 6:
      *(this + 190) = 16;
      *(this + 194) = 150;
      *(this + 195) = 75;
      *(this + 196) = 600;
      *(this + 197) = 300;
      *(this + 204) = 75;
      *(this + 205) = 45;
      *(this + 206) = 25;
      *(this + 207) = 75;
      *(this + 208) = 80;
      *(this + 191) = 25;
      *(this + 192) = 50;
      *(this + 193) = 35;
      *(this + 198) = 30;
      *(this + 199) = 45;
      *(this + 200) = 30;
      *(this + 201) = 14;
      *(this + 202) = 5;
      *(this + 203) = 7;
      *(this + 209) = 2;
      *(this + 210) = 10;
      *(this + 211) = 25;
      *(this + 212) = 65;
      *(this + 213) = 1;
      *(this + 214) = 0;
      *(this + 215) = 0;
      *(this + 216) = 1;
      *(this + 217) = 7;
      *(this + 218) = 38;
      *(this + 219) = 15;
      result = (int)this;
      break;
    case 7:
      *(this + 190) = 18;
      *(this + 194) = 100;
      *(this + 195) = 20;
      *(this + 196) = 400;
      *(this + 197) = 200;
      *(this + 204) = 70;
      *(this + 205) = 50;
      *(this + 206) = 30;
      *(this + 207) = 65;
      *(this + 208) = 20;
      *(this + 191) = 20;
      *(this + 192) = 25;
      *(this + 193) = 13;
      *(this + 198) = 50;
      *(this + 199) = 42;
      *(this + 200) = 27;
      *(this + 201) = 12;
      *(this + 202) = 40;
      *(this + 203) = 2;
      *(this + 209) = 3;
      *(this + 210) = 7;
      *(this + 211) = 40;
      *(this + 212) = 55;
      *(this + 213) = 2;
      *(this + 214) = 0;
      *(this + 215) = 2;
      *(this + 216) = 4;
      *(this + 217) = 5;
      *(this + 218) = 47;
      *(this + 219) = 18;
      result = (int)this;
      break;
    case 8:
      *(this + 190) = 22;
      *(this + 194) = 50;
      *(this + 195) = 10;
      *(this + 196) = 300;
      *(this + 197) = 150;
      *(this + 204) = 80;
      *(this + 205) = 65;
      *(this + 206) = 50;
      *(this + 207) = 70;
      *(this + 208) = 40;
      *(this + 191) = 20;
      *(this + 192) = 40;
      *(this + 193) = 12;
      *(this + 198) = 20;
      *(this + 199) = 35;
      *(this + 200) = 22;
      *(this + 201) = 10;
      *(this + 202) = 30;
      *(this + 203) = 5;
      *(this + 209) = 8;
      *(this + 210) = 1;
      *(this + 211) = 95;
      *(this + 212) = 50;
      *(this + 213) = 1;
      *(this + 214) = 1;
      *(this + 215) = 1;
      *(this + 216) = 2;
      *(this + 217) = 5;
      *(this + 218) = 50;
      *(this + 219) = 20;
      result = (int)this;
      break;
    case 9:
      *(this + 190) = 26;
      *(this + 194) = 50;
      *(this + 195) = 10;
      *(this + 196) = 300;
      *(this + 197) = 150;
      *(this + 204) = 80;
      *(this + 205) = 65;
      *(this + 206) = 50;
      *(this + 207) = 70;
      *(this + 208) = 40;
      *(this + 191) = 20;
      *(this + 192) = 40;
      *(this + 193) = 12;
      *(this + 198) = 20;
      *(this + 199) = 35;
      *(this + 200) = 22;
      *(this + 201) = 10;
      *(this + 202) = 30;
      *(this + 203) = 5;
      *(this + 209) = 4;
      *(this + 210) = 3;
      *(this + 211) = 60;
      *(this + 212) = 37;
      *(this + 213) = 1;
      *(this + 214) = 2;
      *(this + 215) = 2;
      *(this + 216) = 3;
      *(this + 217) = 5;
      *(this + 218) = 50;
      *(this + 219) = 20;
      result = (int)this;
      break;
    case 10:
      *(this + 190) = 23;
      *(this + 194) = 33;
      *(this + 195) = 7;
      *(this + 196) = 225;
      *(this + 197) = 105;
      *(this + 204) = 85;
      *(this + 205) = 70;
      *(this + 206) = 55;
      *(this + 207) = 60;
      *(this + 208) = 43;
      *(this + 191) = 17;
      *(this + 192) = 33;
      *(this + 193) = 10;
      *(this + 198) = 18;
      *(this + 199) = 32;
      *(this + 200) = 21;
      *(this + 201) = 8;
      *(this + 202) = 35;
      *(this + 203) = 3;
      *(this + 209) = 5;
      *(this + 210) = 2;
      *(this + 211) = 75;
      *(this + 212) = 45;
      *(this + 213) = 2;
      *(this + 214) = 1;
      *(this + 215) = 1;
      *(this + 216) = 2;
      *(this + 217) = 4;
      *(this + 218) = 55;
      *(this + 219) = 23;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4D3E60
// entry 004d3e60  size 272  status ok
//======================================================================

int __thiscall sub_4D3E60(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4675);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4676);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4D3F70
// entry 004d3f70  size 725  status ok
//======================================================================

int __thiscall sub_4D3F70(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4691);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4692);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 4693);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4694);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1120;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D4250
// entry 004d4250  size 725  status ok
//======================================================================

int __thiscall sub_4D4250(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4722);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4723);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 4724);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4725);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1232;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D4530
// entry 004d4530  size 725  status ok
//======================================================================

int __thiscall sub_4D4530(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4753);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4754);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 4755);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4756);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1344;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D4810
// entry 004d4810  size 1305  status ok
//======================================================================

int __thiscall sub_4D4810(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4784);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4785);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 4786);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4787);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + a3 - 1);
    result = a3;
    if ( *(_BYTE *)(*(this + 266) + 7 * a2 + 1456 + a3 - 1) == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 1120 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 1232 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 1344 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 1456;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4D4D30
// entry 004d4d30  size 453  status ok
//======================================================================

double __thiscall sub_4D4D30(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 4836);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4837);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 4838);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 4839);
  v5 = (double)*(__int16 *)(this + 382) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1120 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1120 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1344 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 386) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 386) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 386) + v5) / (v7 / (double)*(__int16 *)(this + 386) + 1.0);
}


//======================================================================
// sub_4D4F00
// entry 004d4f00  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D4F00(_WORD *this)
{
  return *(this + 198);
}


//======================================================================
// sub_4D4F20
// entry 004d4f20  size 226  status ok
//======================================================================

__int16 __thiscall sub_4D4F20(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 190);
    case 1:
      v4 = *(this + 190);
      v5 = v4 - sub_62FBF0(10);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 190);
      return sub_62FBF0(10) + v2;
    case 3:
      v3 = *(this + 190);
      return sub_62FBF0(20) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4874);
      return 0;
  }
}


//======================================================================
// sub_4D5010
// entry 004d5010  size 35  status ok
//======================================================================

double __thiscall sub_4D5010(__int16 *this)
{
  return (double)*(this + 192) / 100.0;
}


//======================================================================
// sub_4D5040
// entry 004d5040  size 199  status ok
//======================================================================

double __thiscall sub_4D5040(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 194) / 1000.0;
    case 1:
      return (double)(__int16)*(this + 194) / 800.0;
    case 2:
      return (double)(__int16)*(this + 194) / 1200.0;
    case 3:
      return (double)(__int16)*(this + 194) / 1400.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4895);
  return 0.0;
}


//======================================================================
// sub_4D5110
// entry 004d5110  size 199  status ok
//======================================================================

double __thiscall sub_4D5110(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 195) / 1000.0;
    case 1:
      return (double)(__int16)*(this + 195) / 800.0;
    case 2:
      return (double)(__int16)*(this + 195) / 1200.0;
    case 3:
      return (double)(__int16)*(this + 195) / 1400.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4911);
  return 0.0;
}


//======================================================================
// sub_4D51E0
// entry 004d51e0  size 199  status ok
//======================================================================

double __thiscall sub_4D51E0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 196) / 1000.0;
    case 1:
      return (double)(__int16)*(this + 196) / 800.0;
    case 2:
      return (double)(__int16)*(this + 196) / 1200.0;
    case 3:
      return (double)(__int16)*(this + 196) / 1400.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4927);
  return 0.0;
}


//======================================================================
// sub_4D52B0
// entry 004d52b0  size 199  status ok
//======================================================================

double __thiscall sub_4D52B0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 197) / 1000.0;
    case 1:
      return (double)(__int16)*(this + 197) / 800.0;
    case 2:
      return (double)(__int16)*(this + 197) / 1200.0;
    case 3:
      return (double)(__int16)*(this + 197) / 1400.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 4943);
  return 0.0;
}


//======================================================================
// sub_4D5380
// entry 004d5380  size 514  status ok
//======================================================================

__int16 __thiscall sub_4D5380(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 4950);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 4951);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 206) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 205);
        else
          v3 = (__int16)*(this + 204);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 206);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 205);
          else
            v5 = *(this + 204);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 206);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 205);
          else
            v7 = *(this + 204);
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
    LOWORD(v2) = *(this + 206);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 205);
  }
  else
  {
    LOWORD(v2) = *(this + 204);
  }
  return v2;
}


//======================================================================
// sub_4D5590
// entry 004d5590  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5590(_WORD *this)
{
  return *(this + 207);
}


//======================================================================
// sub_4D55B0
// entry 004d55b0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D55B0(_WORD *this)
{
  return *(this + 208);
}


//======================================================================
// sub_4D55D0
// entry 004d55d0  size 187  status ok
//======================================================================

__int16 __thiscall sub_4D55D0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 209);
    case 1:
      return (__int16)*(this + 209) / 2;
    case 2:
      v2 = *(this + 209);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 209);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5017);
      return 0;
  }
}


//======================================================================
// sub_4D5690
// entry 004d5690  size 49  status ok
//======================================================================

__int16 __thiscall sub_4D5690(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 210);
  else
    return *(this + 210);
}


//======================================================================
// sub_4D56D0
// entry 004d56d0  size 52  status ok
//======================================================================

__int16 __thiscall sub_4D56D0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 211) / 2;
  else
    return *(this + 211);
}


//======================================================================
// sub_4D5A20
// entry 004d5a20  size 161  status ok
//======================================================================

__int16 __thiscall sub_4D5A20(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 203);
    case 1:
      return 2 * *(this + 203);
    case 2:
      return (__int16)*(this + 203) / 2;
    case 3:
      return (__int16)*(this + 203) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5111);
  return 20;
}


//======================================================================
// sub_4D5AD0
// entry 004d5ad0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5AD0(_WORD *this)
{
  return *(this + 212);
}


//======================================================================
// sub_4D5AF0
// entry 004d5af0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5AF0(_WORD *this)
{
  return *(this + 213);
}


//======================================================================
// sub_4D5B10
// entry 004d5b10  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5B10(_WORD *this)
{
  return *(this + 214);
}


//======================================================================
// sub_4D5B30
// entry 004d5b30  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5B30(_WORD *this)
{
  return *(this + 215);
}


//======================================================================
// sub_4D5B50
// entry 004d5b50  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5B50(_WORD *this)
{
  return *(this + 216);
}


//======================================================================
// sub_4D5B70
// entry 004d5b70  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5B70(_WORD *this)
{
  return *(this + 217);
}


//======================================================================
// sub_4D5B90
// entry 004d5b90  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5B90(_WORD *this)
{
  return *(this + 218);
}


//======================================================================
// sub_4D5BB0
// entry 004d5bb0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D5BB0(_WORD *this)
{
  return *(this + 219);
}


//======================================================================
// sub_4D5BD0
// entry 004d5bd0  size 2801  status ok
//======================================================================

int __thiscall sub_4D5BD0(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 5162);
  switch ( a2 )
  {
    case 1:
      *(this + 220) = 80;
      *(this + 221) = 100;
      *(this + 222) = 25;
      *(this + 223) = 10;
      *(this + 224) = 3;
      *(this + 225) = 30;
      *(this + 226) = 8;
      *(this + 227) = 20;
      *(this + 228) = 40;
      *(this + 229) = 25;
      *(this + 230) = 10;
      *(this + 231) = 30;
      *(this + 233) = 75;
      *(this + 234) = 50;
      *(this + 235) = 25;
      *(this + 236) = 70;
      *(this + 237) = 40;
      *(this + 232) = 5;
      *(this + 238) = 3;
      *(this + 239) = 3;
      *(this + 240) = 60;
      *(this + 241) = 4;
      result = (int)this;
      break;
    case 2:
      *(this + 220) = 90;
      *(this + 221) = 120;
      *(this + 222) = 37;
      *(this + 223) = 20;
      *(this + 224) = 6;
      *(this + 225) = 60;
      *(this + 226) = 18;
      *(this + 227) = 8;
      *(this + 228) = 45;
      *(this + 229) = 30;
      *(this + 230) = 15;
      *(this + 231) = 10;
      *(this + 232) = 7;
      *(this + 233) = 70;
      *(this + 234) = 45;
      *(this + 235) = 20;
      *(this + 236) = 80;
      *(this + 237) = 65;
      *(this + 238) = 1;
      *(this + 239) = 8;
      *(this + 240) = 35;
      *(this + 241) = 6;
      result = (int)this;
      break;
    case 3:
      *(this + 220) = 50;
      *(this + 221) = 80;
      *(this + 222) = 17;
      *(this + 223) = 7;
      *(this + 224) = 4;
      *(this + 225) = 20;
      *(this + 226) = 12;
      *(this + 227) = 15;
      *(this + 228) = 26;
      *(this + 229) = 13;
      *(this + 230) = 6;
      *(this + 231) = 40;
      *(this + 232) = 2;
      *(this + 233) = 90;
      *(this + 234) = 65;
      *(this + 235) = 43;
      *(this + 236) = 50;
      *(this + 237) = 30;
      *(this + 238) = 6;
      *(this + 239) = 2;
      *(this + 240) = 80;
      *(this + 241) = 3;
      result = (int)this;
      break;
    case 4:
      *(this + 220) = 60;
      *(this + 221) = 85;
      *(this + 222) = 20;
      *(this + 223) = 11;
      *(this + 224) = 5;
      *(this + 225) = 27;
      *(this + 226) = 6;
      *(this + 227) = 14;
      *(this + 228) = 37;
      *(this + 229) = 26;
      *(this + 230) = 12;
      *(this + 231) = 35;
      *(this + 232) = 4;
      *(this + 233) = 85;
      *(this + 234) = 65;
      *(this + 235) = 45;
      *(this + 236) = 60;
      *(this + 237) = 40;
      *(this + 238) = 5;
      *(this + 239) = 3;
      *(this + 240) = 70;
      *(this + 241) = 5;
      result = (int)this;
      break;
    case 5:
      *(this + 220) = 70;
      *(this + 221) = 80;
      *(this + 222) = 28;
      *(this + 223) = 15;
      *(this + 224) = 2;
      *(this + 225) = 45;
      *(this + 226) = 5;
      *(this + 227) = 35;
      *(this + 228) = 35;
      *(this + 229) = 25;
      *(this + 230) = 15;
      *(this + 231) = 25;
      *(this + 232) = 6;
      *(this + 233) = 90;
      *(this + 234) = 60;
      *(this + 235) = 30;
      *(this + 236) = 65;
      *(this + 237) = 55;
      *(this + 238) = 2;
      *(this + 239) = 5;
      *(this + 240) = 50;
      *(this + 241) = 3;
      result = (int)this;
      break;
    case 6:
      *(this + 220) = 85;
      *(this + 221) = 130;
      *(this + 222) = 45;
      *(this + 223) = 20;
      *(this + 224) = 10;
      *(this + 225) = 60;
      *(this + 226) = 23;
      *(this + 227) = 20;
      *(this + 228) = 45;
      *(this + 229) = 30;
      *(this + 230) = 15;
      *(this + 231) = 7;
      *(this + 232) = 8;
      *(this + 233) = 65;
      *(this + 234) = 40;
      *(this + 235) = 15;
      *(this + 236) = 85;
      *(this + 237) = 70;
      *(this + 238) = 1;
      *(this + 239) = 10;
      *(this + 240) = 30;
      *(this + 241) = 7;
      result = (int)this;
      break;
    case 7:
      *(this + 220) = 80;
      *(this + 221) = 105;
      *(this + 222) = 32;
      *(this + 223) = 8;
      *(this + 224) = 2;
      *(this + 225) = 23;
      *(this + 226) = 5;
      *(this + 227) = 50;
      *(this + 228) = 40;
      *(this + 229) = 25;
      *(this + 230) = 10;
      *(this + 231) = 40;
      *(this + 232) = 2;
      *(this + 233) = 60;
      *(this + 234) = 40;
      *(this + 235) = 20;
      *(this + 236) = 80;
      *(this + 237) = 25;
      *(this + 238) = 2;
      *(this + 239) = 7;
      *(this + 240) = 40;
      *(this + 241) = 7;
      result = (int)this;
      break;
    case 8:
      *(this + 220) = 80;
      *(this + 221) = 100;
      *(this + 222) = 22;
      *(this + 223) = 9;
      *(this + 224) = 3;
      *(this + 225) = 25;
      *(this + 226) = 8;
      *(this + 227) = 20;
      *(this + 228) = 35;
      *(this + 229) = 20;
      *(this + 230) = 10;
      *(this + 231) = 30;
      *(this + 233) = 85;
      *(this + 234) = 50;
      *(this + 235) = 25;
      *(this + 236) = 60;
      *(this + 237) = 40;
      *(this + 232) = 5;
      *(this + 238) = 7;
      *(this + 239) = 2;
      *(this + 240) = 100;
      *(this + 241) = 4;
      result = (int)this;
      break;
    case 9:
      *(this + 220) = 80;
      *(this + 221) = 100;
      *(this + 222) = 25;
      *(this + 223) = 10;
      *(this + 224) = 3;
      *(this + 225) = 27;
      *(this + 226) = 7;
      *(this + 227) = 20;
      *(this + 228) = 40;
      *(this + 229) = 25;
      *(this + 230) = 10;
      *(this + 231) = 30;
      *(this + 233) = 75;
      *(this + 234) = 50;
      *(this + 235) = 25;
      *(this + 236) = 70;
      *(this + 237) = 40;
      *(this + 232) = 5;
      *(this + 238) = 3;
      *(this + 239) = 2;
      *(this + 240) = 70;
      *(this + 241) = 2;
      result = (int)this;
      break;
    case 10:
      *(this + 220) = 65;
      *(this + 221) = 90;
      *(this + 222) = 21;
      *(this + 223) = 8;
      *(this + 224) = 4;
      *(this + 225) = 25;
      *(this + 226) = 10;
      *(this + 227) = 17;
      *(this + 228) = 28;
      *(this + 229) = 17;
      *(this + 230) = 7;
      *(this + 231) = 35;
      *(this + 233) = 83;
      *(this + 234) = 60;
      *(this + 235) = 38;
      *(this + 236) = 60;
      *(this + 237) = 35;
      *(this + 232) = 3;
      *(this + 238) = 5;
      *(this + 239) = 2;
      *(this + 240) = 75;
      *(this + 241) = 3;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4D66F0
// entry 004d66f0  size 35  status ok
//======================================================================

double __thiscall sub_4D66F0(__int16 *this)
{
  return (double)*(this + 221) / 100.0;
}


//======================================================================
// sub_4D6720
// entry 004d6720  size 199  status ok
//======================================================================

double __thiscall sub_4D6720(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 223) / 100.0;
    case 1:
      return (double)(__int16)*(this + 223) / 80.0;
    case 2:
      return (double)(__int16)*(this + 223) / 120.0;
    case 3:
      return (double)(__int16)*(this + 223) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5434);
  return 0.0;
}


//======================================================================
// sub_4D67F0
// entry 004d67f0  size 199  status ok
//======================================================================

double __thiscall sub_4D67F0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 224) / 100.0;
    case 1:
      return (double)(__int16)*(this + 224) / 80.0;
    case 2:
      return (double)(__int16)*(this + 224) / 120.0;
    case 3:
      return (double)(__int16)*(this + 224) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5450);
  return 0.0;
}


//======================================================================
// sub_4D68C0
// entry 004d68c0  size 199  status ok
//======================================================================

double __thiscall sub_4D68C0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 225) / 100.0;
    case 1:
      return (double)(__int16)*(this + 225) / 80.0;
    case 2:
      return (double)(__int16)*(this + 225) / 120.0;
    case 3:
      return (double)(__int16)*(this + 225) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5466);
  return 0.0;
}


//======================================================================
// sub_4D6990
// entry 004d6990  size 199  status ok
//======================================================================

double __thiscall sub_4D6990(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 226) / 100.0;
    case 1:
      return (double)(__int16)*(this + 226) / 80.0;
    case 2:
      return (double)(__int16)*(this + 226) / 120.0;
    case 3:
      return (double)(__int16)*(this + 226) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5482);
  return 0.0;
}


//======================================================================
// sub_4D6A60
// entry 004d6a60  size 514  status ok
//======================================================================

__int16 __thiscall sub_4D6A60(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 5489);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 5490);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 235) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 234);
        else
          v3 = (__int16)*(this + 233);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 235);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 234);
          else
            v5 = *(this + 233);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 235);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 234);
          else
            v7 = *(this + 233);
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
    LOWORD(v2) = *(this + 235);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 234);
  }
  else
  {
    LOWORD(v2) = *(this + 233);
  }
  return v2;
}


//======================================================================
// sub_4D6C70
// entry 004d6c70  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D6C70(_WORD *this)
{
  return *(this + 236);
}


//======================================================================
// sub_4D6C90
// entry 004d6c90  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D6C90(_WORD *this)
{
  return *(this + 237);
}


//======================================================================
// sub_4D6CB0
// entry 004d6cb0  size 187  status ok
//======================================================================

__int16 __thiscall sub_4D6CB0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 238);
    case 1:
      return (__int16)*(this + 238) / 2;
    case 2:
      v2 = *(this + 238);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 238);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5556);
      return 0;
  }
}


//======================================================================
// sub_4D6D70
// entry 004d6d70  size 49  status ok
//======================================================================

__int16 __thiscall sub_4D6D70(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 239);
  else
    return *(this + 239);
}


//======================================================================
// sub_4D6DB0
// entry 004d6db0  size 52  status ok
//======================================================================

__int16 __thiscall sub_4D6DB0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 240) / 2;
  else
    return *(this + 240);
}


//======================================================================
// sub_4D6DF0
// entry 004d6df0  size 234  status ok
//======================================================================

int __thiscall sub_4D6DF0(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 5579);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5580);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1736 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4D6EE0
// entry 004d6ee0  size 725  status ok
//======================================================================

int __thiscall sub_4D6EE0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 5594);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5595);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 5596);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5597);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1512;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D71C0
// entry 004d71c0  size 725  status ok
//======================================================================

int __thiscall sub_4D71C0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 5625);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5626);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 5627);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5628);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1624;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D74A0
// entry 004d74a0  size 1107  status ok
//======================================================================

int __thiscall sub_4D74A0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 5656);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5657);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 5658);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5659);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1736 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1736 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 1736 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 1736 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 1736 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 1512 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 1624 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 1736;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4D7900
// entry 004d7900  size 453  status ok
//======================================================================

double __thiscall sub_4D7900(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 5705);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5706);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 5707);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 5708);
  v5 = (double)*(__int16 *)(this + 440) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1512 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1512 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1624 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 444) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 444) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 444) + v5) / (v7 / (double)*(__int16 *)(this + 444) + 1.0);
}


//======================================================================
// sub_4D7AD0
// entry 004d7ad0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D7AD0(_WORD *this)
{
  return *(this + 227);
}


//======================================================================
// sub_4D7AF0
// entry 004d7af0  size 739  status ok
//======================================================================

__int16 __thiscall sub_4D7AF0(_WORD *this, __int16 a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int16 v16; // [esp+8h] [ebp-8h]
  __int16 v17; // [esp+Ch] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 5728);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 5729);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 230);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 229);
          else
            v5 = (__int16)*(this + 228);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 230);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 229);
          else
            v9 = (__int16)*(this + 228);
          v10 = v9 - sub_62FBF0(5);
          v17 = v10 - sub_62FBF0(5);
        }
        if ( v17 >= 1 )
          return v17;
        else
          return 1;
      case 3:
        if ( a2 == 1 )
        {
          v11 = (__int16)*(this + 230);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 229);
          else
            v13 = (__int16)*(this + 228);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5778);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 230);
  }
  else if ( a2 == 2 )
  {
    return *(this + 229);
  }
  else
  {
    return *(this + 228);
  }
}


//======================================================================
// sub_4D7DE0
// entry 004d7de0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D7DE0(_WORD *this)
{
  return *(this + 231);
}


//======================================================================
// sub_4D7E00
// entry 004d7e00  size 161  status ok
//======================================================================

__int16 __thiscall sub_4D7E00(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 232);
    case 1:
      return 2 * *(this + 232);
    case 2:
      return (__int16)*(this + 232) / 2;
    case 3:
      return (__int16)*(this + 232) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5799);
  return 20;
}


//======================================================================
// sub_4D7EB0
// entry 004d7eb0  size 161  status ok
//======================================================================

__int16 __thiscall sub_4D7EB0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 241);
    case 1:
      return 2 * *(this + 241);
    case 2:
      return (__int16)*(this + 241) / 2;
    case 3:
      return (__int16)*(this + 241) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 5815);
  return 10;
}


//======================================================================
// sub_4D7F60
// entry 004d7f60  size 2801  status ok
//======================================================================

int __thiscall sub_4D7F60(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 5826);
  switch ( a2 )
  {
    case 1:
      *(this + 242) = 50;
      *(this + 243) = 75;
      *(this + 244) = 20;
      *(this + 245) = 4;
      *(this + 246) = 1;
      *(this + 247) = 20;
      *(this + 248) = 6;
      *(this + 249) = 20;
      *(this + 250) = 40;
      *(this + 251) = 25;
      *(this + 252) = 10;
      *(this + 253) = 30;
      *(this + 255) = 75;
      *(this + 256) = 50;
      *(this + 257) = 25;
      *(this + 258) = 70;
      *(this + 259) = 40;
      *(this + 254) = 3;
      *(this + 260) = 3;
      *(this + 261) = 3;
      *(this + 262) = 60;
      *(this + 263) = 2;
      result = (int)this;
      break;
    case 2:
      *(this + 242) = 75;
      *(this + 243) = 100;
      *(this + 244) = 30;
      *(this + 245) = 8;
      *(this + 246) = 3;
      *(this + 247) = 30;
      *(this + 248) = 14;
      *(this + 249) = 8;
      *(this + 250) = 50;
      *(this + 251) = 30;
      *(this + 252) = 15;
      *(this + 253) = 10;
      *(this + 254) = 5;
      *(this + 255) = 70;
      *(this + 256) = 45;
      *(this + 257) = 20;
      *(this + 258) = 80;
      *(this + 259) = 65;
      *(this + 260) = 1;
      *(this + 261) = 8;
      *(this + 262) = 35;
      *(this + 263) = 3;
      result = (int)this;
      break;
    case 3:
      *(this + 242) = 30;
      *(this + 243) = 45;
      *(this + 244) = 12;
      *(this + 245) = 3;
      *(this + 246) = 1;
      *(this + 247) = 13;
      *(this + 248) = 9;
      *(this + 249) = 15;
      *(this + 250) = 29;
      *(this + 251) = 15;
      *(this + 252) = 7;
      *(this + 253) = 40;
      *(this + 254) = 1;
      *(this + 255) = 80;
      *(this + 256) = 60;
      *(this + 257) = 35;
      *(this + 258) = 50;
      *(this + 259) = 30;
      *(this + 260) = 5;
      *(this + 261) = 2;
      *(this + 262) = 82;
      *(this + 263) = 2;
      result = (int)this;
      break;
    case 4:
      *(this + 242) = 40;
      *(this + 243) = 60;
      *(this + 244) = 15;
      *(this + 245) = 4;
      *(this + 246) = 2;
      *(this + 247) = 22;
      *(this + 248) = 9;
      *(this + 249) = 14;
      *(this + 250) = 38;
      *(this + 251) = 24;
      *(this + 252) = 12;
      *(this + 253) = 32;
      *(this + 254) = 4;
      *(this + 255) = 85;
      *(this + 256) = 60;
      *(this + 257) = 35;
      *(this + 258) = 60;
      *(this + 259) = 40;
      *(this + 260) = 5;
      *(this + 261) = 3;
      *(this + 262) = 70;
      *(this + 263) = 3;
      result = (int)this;
      break;
    case 5:
      *(this + 242) = 45;
      *(this + 243) = 65;
      *(this + 244) = 23;
      *(this + 245) = 6;
      *(this + 246) = 1;
      *(this + 247) = 26;
      *(this + 248) = 4;
      *(this + 249) = 35;
      *(this + 250) = 38;
      *(this + 251) = 26;
      *(this + 252) = 15;
      *(this + 253) = 25;
      *(this + 254) = 2;
      *(this + 255) = 85;
      *(this + 256) = 55;
      *(this + 257) = 25;
      *(this + 258) = 65;
      *(this + 259) = 55;
      *(this + 260) = 2;
      *(this + 261) = 5;
      *(this + 262) = 50;
      *(this + 263) = 2;
      result = (int)this;
      break;
    case 6:
      *(this + 242) = 75;
      *(this + 243) = 115;
      *(this + 244) = 50;
      *(this + 245) = 10;
      *(this + 246) = 4;
      *(this + 247) = 30;
      *(this + 248) = 15;
      *(this + 249) = 20;
      *(this + 250) = 52;
      *(this + 251) = 34;
      *(this + 252) = 15;
      *(this + 253) = 5;
      *(this + 254) = 6;
      *(this + 255) = 65;
      *(this + 256) = 40;
      *(this + 257) = 15;
      *(this + 258) = 85;
      *(this + 259) = 70;
      *(this + 260) = 1;
      *(this + 261) = 9;
      *(this + 262) = 30;
      *(this + 263) = 4;
      result = (int)this;
      break;
    case 7:
      *(this + 242) = 70;
      *(this + 243) = 110;
      *(this + 244) = 23;
      *(this + 245) = 3;
      *(this + 246) = 1;
      *(this + 247) = 10;
      *(this + 248) = 5;
      *(this + 249) = 50;
      *(this + 250) = 45;
      *(this + 251) = 25;
      *(this + 252) = 10;
      *(this + 253) = 40;
      *(this + 254) = 2;
      *(this + 255) = 60;
      *(this + 256) = 40;
      *(this + 257) = 20;
      *(this + 258) = 80;
      *(this + 259) = 25;
      *(this + 260) = 2;
      *(this + 261) = 7;
      *(this + 262) = 40;
      *(this + 263) = 3;
      result = (int)this;
      break;
    case 8:
      *(this + 242) = 50;
      *(this + 243) = 75;
      *(this + 244) = 20;
      *(this + 245) = 4;
      *(this + 246) = 1;
      *(this + 247) = 17;
      *(this + 248) = 6;
      *(this + 249) = 19;
      *(this + 250) = 35;
      *(this + 251) = 24;
      *(this + 252) = 10;
      *(this + 253) = 30;
      *(this + 255) = 75;
      *(this + 256) = 50;
      *(this + 257) = 25;
      *(this + 258) = 60;
      *(this + 259) = 37;
      *(this + 254) = 3;
      *(this + 260) = 7;
      *(this + 261) = 2;
      *(this + 262) = 100;
      *(this + 263) = 2;
      result = (int)this;
      break;
    case 9:
      *(this + 242) = 50;
      *(this + 243) = 75;
      *(this + 244) = 20;
      *(this + 245) = 5;
      *(this + 246) = 2;
      *(this + 247) = 20;
      *(this + 248) = 6;
      *(this + 249) = 25;
      *(this + 250) = 47;
      *(this + 251) = 25;
      *(this + 252) = 10;
      *(this + 253) = 30;
      *(this + 255) = 75;
      *(this + 256) = 50;
      *(this + 257) = 25;
      *(this + 258) = 70;
      *(this + 259) = 40;
      *(this + 254) = 3;
      *(this + 260) = 3;
      *(this + 261) = 3;
      *(this + 262) = 70;
      *(this + 263) = 1;
      result = (int)this;
      break;
    case 10:
      *(this + 242) = 40;
      *(this + 243) = 60;
      *(this + 244) = 16;
      *(this + 245) = 3;
      *(this + 246) = 1;
      *(this + 247) = 15;
      *(this + 248) = 7;
      *(this + 249) = 17;
      *(this + 250) = 35;
      *(this + 251) = 17;
      *(this + 252) = 7;
      *(this + 253) = 35;
      *(this + 255) = 78;
      *(this + 256) = 55;
      *(this + 257) = 30;
      *(this + 258) = 70;
      *(this + 259) = 40;
      *(this + 254) = 2;
      *(this + 260) = 4;
      *(this + 261) = 2;
      *(this + 262) = 75;
      *(this + 263) = 2;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4D8A80
// entry 004d8a80  size 35  status ok
//======================================================================

double __thiscall sub_4D8A80(__int16 *this)
{
  return (double)*(this + 243) / 100.0;
}


//======================================================================
// sub_4D8AB0
// entry 004d8ab0  size 199  status ok
//======================================================================

double __thiscall sub_4D8AB0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 245) / 100.0;
    case 1:
      return (double)(__int16)*(this + 245) / 80.0;
    case 2:
      return (double)(__int16)*(this + 245) / 120.0;
    case 3:
      return (double)(__int16)*(this + 245) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6098);
  return 0.0;
}


//======================================================================
// sub_4D8B80
// entry 004d8b80  size 199  status ok
//======================================================================

double __thiscall sub_4D8B80(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 246) / 100.0;
    case 1:
      return (double)(__int16)*(this + 246) / 80.0;
    case 2:
      return (double)(__int16)*(this + 246) / 120.0;
    case 3:
      return (double)(__int16)*(this + 246) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6114);
  return 0.0;
}


//======================================================================
// sub_4D8C50
// entry 004d8c50  size 199  status ok
//======================================================================

double __thiscall sub_4D8C50(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 247) / 100.0;
    case 1:
      return (double)(__int16)*(this + 247) / 80.0;
    case 2:
      return (double)(__int16)*(this + 247) / 120.0;
    case 3:
      return (double)(__int16)*(this + 247) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6130);
  return 0.0;
}


//======================================================================
// sub_4D8D20
// entry 004d8d20  size 199  status ok
//======================================================================

double __thiscall sub_4D8D20(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 248) / 100.0;
    case 1:
      return (double)(__int16)*(this + 248) / 80.0;
    case 2:
      return (double)(__int16)*(this + 248) / 120.0;
    case 3:
      return (double)(__int16)*(this + 248) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6146);
  return 0.0;
}


//======================================================================
// sub_4D8DF0
// entry 004d8df0  size 514  status ok
//======================================================================

__int16 __thiscall sub_4D8DF0(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 6153);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 6154);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 257) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 256);
        else
          v3 = (__int16)*(this + 255);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 257);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 256);
          else
            v5 = *(this + 255);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 257);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 256);
          else
            v7 = *(this + 255);
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
    LOWORD(v2) = *(this + 257);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 256);
  }
  else
  {
    LOWORD(v2) = *(this + 255);
  }
  return v2;
}


//======================================================================
// sub_4D9000
// entry 004d9000  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D9000(_WORD *this)
{
  return *(this + 258);
}


//======================================================================
// sub_4D9020
// entry 004d9020  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D9020(_WORD *this)
{
  return *(this + 259);
}


//======================================================================
// sub_4D9040
// entry 004d9040  size 187  status ok
//======================================================================

__int16 __thiscall sub_4D9040(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 260);
    case 1:
      return (__int16)*(this + 260) / 2;
    case 2:
      v2 = *(this + 260);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 260);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6220);
      return 0;
  }
}


//======================================================================
// sub_4D9100
// entry 004d9100  size 49  status ok
//======================================================================

__int16 __thiscall sub_4D9100(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 261);
  else
    return *(this + 261);
}


//======================================================================
// sub_4D9140
// entry 004d9140  size 52  status ok
//======================================================================

__int16 __thiscall sub_4D9140(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 262) / 2;
  else
    return *(this + 262);
}


//======================================================================
// sub_4D9180
// entry 004d9180  size 234  status ok
//======================================================================

int __thiscall sub_4D9180(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 6243);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6244);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2296 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4D9270
// entry 004d9270  size 725  status ok
//======================================================================

int __thiscall sub_4D9270(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 6258);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6259);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 6260);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6261);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 2072;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D9550
// entry 004d9550  size 725  status ok
//======================================================================

int __thiscall sub_4D9550(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 6289);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6290);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 6291);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6292);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 2184;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4D9830
// entry 004d9830  size 1107  status ok
//======================================================================

int __thiscall sub_4D9830(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 6320);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6321);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 6322);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6323);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 2296 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2296 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 2296 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2296 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 2296 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 2072 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 2184 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 2296;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4D9C90
// entry 004d9c90  size 453  status ok
//======================================================================

double __thiscall sub_4D9C90(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 6369);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6370);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 6371);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 6372);
  v5 = (double)*(__int16 *)(this + 484) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2072 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2072 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2184 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 488) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 488) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 488) + v5) / (v7 / (double)*(__int16 *)(this + 488) + 1.0);
}


//======================================================================
// sub_4D9E60
// entry 004d9e60  size 21  status ok
//======================================================================

__int16 __thiscall sub_4D9E60(_WORD *this)
{
  return *(this + 249);
}


//======================================================================
// sub_4D9E80
// entry 004d9e80  size 739  status ok
//======================================================================

__int16 __thiscall sub_4D9E80(_WORD *this, __int16 a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int16 v16; // [esp+8h] [ebp-8h]
  __int16 v17; // [esp+Ch] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 6392);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 6393);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 252);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 251);
          else
            v5 = (__int16)*(this + 250);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 252);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 251);
          else
            v9 = (__int16)*(this + 250);
          v10 = v9 - sub_62FBF0(5);
          v17 = v10 - sub_62FBF0(5);
        }
        if ( v17 >= 1 )
          return v17;
        else
          return 1;
      case 3:
        if ( a2 == 1 )
        {
          v11 = (__int16)*(this + 252);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 251);
          else
            v13 = (__int16)*(this + 250);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6442);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 252);
  }
  else if ( a2 == 2 )
  {
    return *(this + 251);
  }
  else
  {
    return *(this + 250);
  }
}


//======================================================================
// sub_4DA170
// entry 004da170  size 21  status ok
//======================================================================

__int16 __thiscall sub_4DA170(_WORD *this)
{
  return *(this + 253);
}


//======================================================================
// sub_4DA190
// entry 004da190  size 161  status ok
//======================================================================

__int16 __thiscall sub_4DA190(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 254);
    case 1:
      return 2 * *(this + 254);
    case 2:
      return (__int16)*(this + 254) / 2;
    case 3:
      return (__int16)*(this + 254) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6463);
  return 20;
}


//======================================================================
// sub_4DA240
// entry 004da240  size 161  status ok
//======================================================================

__int16 __thiscall sub_4DA240(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 263);
    case 1:
      return 2 * *(this + 263);
    case 2:
      return (__int16)*(this + 263) / 2;
    case 3:
      return (__int16)*(this + 263) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 6479);
  return 10;
}


//======================================================================
// sub_4DA360
// entry 004da360  size 58  status ok
//======================================================================

int __thiscall sub_4DA360(int this)
{
  if ( sub_4C61B0((_DWORD *)this) )
    *(_BYTE *)(dword_791364 + 1033) = 1;
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 116))(*(_DWORD *)(this + 48));
}


//======================================================================
// sub_4DA3A0
// entry 004da3a0  size 32  status ok
//======================================================================

int __thiscall sub_4DA3A0(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 12) + 112))(*(this + 12), this);
}


//======================================================================
// sub_4DA3C0
// entry 004da3c0  size 139  status ok
//======================================================================

int __thiscall sub_4DA3C0(int this, __int16 a2)
{
  if ( a2 < 0 )
    sub_5E9F20((char)"shType >= 0", "..\\Casino\\PokerPlayer.cpp", 6532);
  if ( a2 > 4 )
    sub_5E9F20((char)"shType <= 4", "..\\Casino\\PokerPlayer.cpp", 6533);
  if ( sub_4C61B0((_DWORD *)this) )
    *(_BYTE *)(dword_791364 + 1035) = 1;
  sub_5EAF00(100009);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 116))(*(_DWORD *)(this + 52));
}


//======================================================================
// sub_4DA450
// entry 004da450  size 32  status ok
//======================================================================

int __thiscall sub_4DA450(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 13) + 112))(*(this + 13), this);
}


//======================================================================
// sub_4DA470
// entry 004da470  size 58  status ok
//======================================================================

int __thiscall sub_4DA470(int this)
{
  if ( sub_4C61B0((_DWORD *)this) )
    *(_BYTE *)(dword_791364 + 1034) = 1;
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 116))(*(_DWORD *)(this + 56));
}


//======================================================================
// sub_4DA4B0
// entry 004da4b0  size 32  status ok
//======================================================================

int __thiscall sub_4DA4B0(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 14) + 112))(*(this + 14), this);
}


//======================================================================
// sub_4DA4D0
// entry 004da4d0  size 947  status ok
//======================================================================

int __thiscall sub_4DA4D0(_DWORD **this, char a2)
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
  char Buffer[108]; // [esp+4h] [ebp-70h] BYREF

  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_791390) )
  {
    v2 = (const char *)sub_630F40("SID_POKER_HIGHCARD");
    sprintf(Buffer, "%s", v2);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913B0) )
  {
    v3 = (const char *)sub_630F40("SID_POKER_PAIR");
    sprintf(Buffer, "%s", v3);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_79139C) )
  {
    v4 = (const char *)sub_630F40("SID_POKER_FOURFLUSH");
    sprintf(Buffer, "%s", v4);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_791380) )
  {
    v5 = (const char *)sub_630F40("SID_POKER_TWOPAIR");
    sprintf(Buffer, "%s", v5);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_791418) )
  {
    v6 = (const char *)sub_630F40("SID_POKER_3OFAKIND");
    sprintf(Buffer, "%s", v6);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_79140C) )
  {
    v7 = (const char *)sub_630F40("SID_POKER_STRAIGHT");
    sprintf(Buffer, "%s", v7);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913E4) )
  {
    v8 = (const char *)sub_630F40("SID_POKER_DOG");
    sprintf(Buffer, "%s", v8);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_791384) )
  {
    v9 = (const char *)sub_630F40("SID_POKER_TIGER");
    sprintf(Buffer, "%s", v9);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913A0) )
  {
    v10 = (const char *)sub_630F40("SID_POKER_FLUSH");
    sprintf(Buffer, "%s", v10);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913D4) )
  {
    v11 = (const char *)sub_630F40("SID_POKER_FULLHOUSE");
    sprintf(Buffer, "%s", v11);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_791394) )
  {
    v12 = (const char *)sub_630F40("SID_POKER_4OFAKIND");
    sprintf(Buffer, "%s", v12);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_791398) )
  {
    v13 = (const char *)sub_630F40("SID_POKER_STRAIGHTFLUSH");
    sprintf(Buffer, "%s", v13);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913E8) )
  {
    v14 = (const char *)sub_630F40("SID_POKER_ROYALFLUSH");
    sprintf(Buffer, "%s", v14);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913C4) )
  {
    v15 = (const char *)sub_630F40("SID_POKER_DOGFLUSH");
    sprintf(Buffer, "%s", v15);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913AC) )
  {
    v16 = (const char *)sub_630F40("SID_POKER_TIGERFLUSH");
    sprintf(Buffer, "%s", v16);
  }
  if ( sub_4A1E10((unsigned __int8 *)&a2, (unsigned __int8 *)dword_7913CC) )
  {
    v17 = (const char *)sub_630F40("SID_POKER_5OFAKIND");
    sprintf(Buffer, "%s", v17);
  }
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 9) + 180))(*(this + 9), Buffer);
  (*(void (__thiscall **)(_DWORD))(**(this + 8) + 116))(*(this + 8));
  return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 116))(*(this + 9));
}


//======================================================================
// sub_4DA890
// entry 004da890  size 51  status ok
//======================================================================

int __thiscall sub_4DA890(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 9) + 112))(*(this + 9));
  return (*(int (__thiscall **)(_DWORD))(**(this + 8) + 112))(*(this + 8));
}


//======================================================================
// sub_4DA8D0
// entry 004da8d0  size 1454  status ok
//======================================================================

void __thiscall sub_4DA8D0(_DWORD **this, __int16 a2)
{
  unsigned __int8 *v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char v8; // al
  unsigned __int8 *v9; // eax
  const char *v10; // eax
  unsigned __int8 *v11; // eax
  const char *v12; // eax
  unsigned __int8 *v13; // eax
  const char *v14; // eax
  unsigned __int8 *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // eax
  const char *v18; // eax
  unsigned __int8 *v19; // eax
  const char *v20; // eax
  unsigned __int8 *v21; // eax
  const char *v22; // eax
  unsigned __int8 *v23; // eax
  const char *v24; // eax
  unsigned __int8 *v25; // eax
  const char *v26; // eax
  unsigned __int8 *v27; // eax
  const char *v28; // eax
  unsigned __int8 *v29; // eax
  const char *v30; // eax
  unsigned __int8 *v31; // eax
  const char *v32; // eax
  unsigned __int8 *v33; // eax
  const char *v34; // eax
  unsigned __int8 *v35; // eax
  const char *v36; // eax
  unsigned __int8 *v37; // eax
  const char *v38; // eax
  int v39; // [esp-10h] [ebp-ACh]
  int v40; // [esp-Ch] [ebp-A8h]
  int v41; // [esp-8h] [ebp-A4h]
  unsigned __int8 *v42; // [esp-4h] [ebp-A0h]
  int v43; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v44; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v45; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v46; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v47; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v48; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v49; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v50; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v51; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v52; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v53; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v54; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v55; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v56; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v57; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v58; // [esp-4h] [ebp-A0h]
  char v60; // [esp+Bh] [ebp-91h] BYREF
  char v61; // [esp+Ch] [ebp-90h] BYREF
  char v62; // [esp+Dh] [ebp-8Fh] BYREF
  char v63; // [esp+Eh] [ebp-8Eh] BYREF
  char v64; // [esp+Fh] [ebp-8Dh] BYREF
  char v65; // [esp+10h] [ebp-8Ch] BYREF
  char v66; // [esp+11h] [ebp-8Bh] BYREF
  char v67; // [esp+12h] [ebp-8Ah] BYREF
  char v68; // [esp+13h] [ebp-89h] BYREF
  char v69; // [esp+14h] [ebp-88h] BYREF
  char v70; // [esp+15h] [ebp-87h] BYREF
  char v71; // [esp+16h] [ebp-86h] BYREF
  char v72; // [esp+17h] [ebp-85h] BYREF
  char v73; // [esp+18h] [ebp-84h] BYREF
  char v74; // [esp+19h] [ebp-83h] BYREF
  char v75; // [esp+1Ah] [ebp-82h] BYREF
  char v76; // [esp+1Bh] [ebp-81h] BYREF
  char v77; // [esp+1Ch] [ebp-80h] BYREF
  char v78; // [esp+1Dh] [ebp-7Fh] BYREF
  char v79; // [esp+1Eh] [ebp-7Eh] BYREF
  char v80; // [esp+1Fh] [ebp-7Dh] BYREF
  char Buffer[108]; // [esp+20h] [ebp-7Ch] BYREF
  int v82; // [esp+98h] [ebp-4h]

  v82 = 0;
  v42 = (unsigned __int8 *)dword_791390;
  v2 = sub_4A2160(&a2, &v80);
  if ( sub_4A1E10(v2, v42) )
  {
    v3 = sub_4A22F0(&a2, &v79);
    v43 = (char)sub_4DAE80(v3);
    v4 = sub_4A22A0(&a2, &v78);
    v41 = (char)sub_4DAE80(v4);
    v5 = sub_4A2250(&a2, &v77);
    v40 = (char)sub_4DAE80(v5);
    v6 = sub_4A2200(&a2, &v76);
    v39 = (char)sub_4DAE80(v6);
    v7 = sub_4A21B0(&a2, &v75);
    v8 = sub_4DAE80(v7);
    sprintf(Buffer, "%c-%c-%c-%c-%c", v8, v39, v40, v41, v43);
  }
  else
  {
    v44 = (unsigned __int8 *)dword_7913B0;
    v9 = sub_4A2160(&a2, &v74);
    if ( sub_4A1E10(v9, v44) )
    {
      v10 = (const char *)sub_630F40("SID_POKER_PAIR");
      sprintf(Buffer, "%s", v10);
    }
    else
    {
      v45 = (unsigned __int8 *)dword_79139C;
      v11 = sub_4A2160(&a2, &v73);
      if ( sub_4A1E10(v11, v45) )
      {
        v12 = (const char *)sub_630F40("SID_POKER_FOURFLUSH");
        sprintf(Buffer, "%s", v12);
      }
      else
      {
        v46 = (unsigned __int8 *)dword_791380;
        v13 = sub_4A2160(&a2, &v72);
        if ( sub_4A1E10(v13, v46) )
        {
          v14 = (const char *)sub_630F40("SID_POKER_TWOPAIR");
          sprintf(Buffer, "%s", v14);
        }
        else
        {
          v47 = (unsigned __int8 *)dword_791418;
          v15 = sub_4A2160(&a2, &v71);
          if ( sub_4A1E10(v15, v47) )
          {
            v16 = (const char *)sub_630F40("SID_POKER_3OFAKIND");
            sprintf(Buffer, "%s", v16);
          }
          else
          {
            v48 = (unsigned __int8 *)dword_79140C;
            v17 = sub_4A2160(&a2, &v70);
            if ( sub_4A1E10(v17, v48) )
            {
              v18 = (const char *)sub_630F40("SID_POKER_STRAIGHT");
              sprintf(Buffer, "%s", v18);
            }
            else
            {
              v49 = (unsigned __int8 *)dword_7913E4;
              v19 = sub_4A2160(&a2, &v69);
              if ( sub_4A1E10(v19, v49) )
              {
                v20 = (const char *)sub_630F40("SID_POKER_DOG");
                sprintf(Buffer, "%s", v20);
              }
              else
              {
                v50 = (unsigned __int8 *)dword_791384;
                v21 = sub_4A2160(&a2, &v68);
                if ( sub_4A1E10(v21, v50) )
                {
                  v22 = (const char *)sub_630F40("SID_POKER_TIGER");
                  sprintf(Buffer, "%s", v22);
                }
                else
                {
                  v51 = (unsigned __int8 *)dword_7913A0;
                  v23 = sub_4A2160(&a2, &v67);
                  if ( sub_4A1E10(v23, v51) )
                  {
                    v24 = (const char *)sub_630F40("SID_POKER_FLUSH");
                    sprintf(Buffer, "%s", v24);
                  }
                  else
                  {
                    v52 = (unsigned __int8 *)dword_7913D4;
                    v25 = sub_4A2160(&a2, &v66);
                    if ( sub_4A1E10(v25, v52) )
                    {
                      v26 = (const char *)sub_630F40("SID_POKER_FULLHOUSE");
                      sprintf(Buffer, "%s", v26);
                    }
                    else
                    {
                      v53 = (unsigned __int8 *)dword_791394;
                      v27 = sub_4A2160(&a2, &v65);
                      if ( sub_4A1E10(v27, v53) )
                      {
                        v28 = (const char *)sub_630F40("SID_POKER_4OFAKIND");
                        sprintf(Buffer, "%s", v28);
                      }
                      else
                      {
                        v54 = (unsigned __int8 *)dword_791398;
                        v29 = sub_4A2160(&a2, &v64);
                        if ( sub_4A1E10(v29, v54) )
                        {
                          v30 = (const char *)sub_630F40("SID_POKER_STRAIGHTFLUSH");
                          sprintf(Buffer, "%s", v30);
                        }
                        else
                        {
                          v55 = (unsigned __int8 *)dword_7913E8;
                          v31 = sub_4A2160(&a2, &v63);
                          if ( sub_4A1E10(v31, v55) )
                          {
                            v32 = (const char *)sub_630F40("SID_POKER_ROYALFLUSH");
                            sprintf(Buffer, "%s", v32);
                          }
                          else
                          {
                            v56 = (unsigned __int8 *)dword_7913C4;
                            v33 = sub_4A2160(&a2, &v62);
                            if ( sub_4A1E10(v33, v56) )
                            {
                              v34 = (const char *)sub_630F40("SID_POKER_DOGFLUSH");
                              sprintf(Buffer, "%s", v34);
                            }
                            else
                            {
                              v57 = (unsigned __int8 *)dword_7913AC;
                              v35 = sub_4A2160(&a2, &v61);
                              if ( sub_4A1E10(v35, v57) )
                              {
                                v36 = (const char *)sub_630F40("SID_POKER_TIGERFLUSH");
                                sprintf(Buffer, "%s", v36);
                              }
                              else
                              {
                                v58 = (unsigned __int8 *)dword_7913CC;
                                v37 = sub_4A2160(&a2, &v60);
                                if ( sub_4A1E10(v37, v58) )
                                {
                                  v38 = (const char *)sub_630F40("SID_POKER_5OFAKIND");
                                  sprintf(Buffer, "%s", v38);
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
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 9) + 180))(*(this + 9), Buffer);
  (*(void (__thiscall **)(_DWORD))(**(this + 8) + 116))(*(this + 8));
  (*(void (__thiscall **)(_DWORD))(**(this + 9) + 116))(*(this + 9));
  v82 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&a2);
}


//======================================================================
// sub_4DAE80
// entry 004dae80  size 482  status ok
//======================================================================

char __cdecl sub_4DAE80(unsigned __int8 *a1)
{
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913D0) )
    return 120;
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
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913F4) )
    return 57;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_79138C) )
    return 84;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_791400) )
    return 74;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913BC) )
    return 81;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913E0) )
    return 75;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913C8) )
    return 65;
  if ( sub_4A1FB0(a1, (unsigned __int8 *)dword_7913B4) )
    return 65;
  return 63;
}


//======================================================================
// sub_4DB070
// entry 004db070  size 1429  status ok
//======================================================================

void __thiscall sub_4DB070(_DWORD **this, __int16 a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  char v8; // al
  unsigned __int8 *v9; // eax
  const char *v10; // eax
  unsigned __int8 *v11; // eax
  const char *v12; // eax
  unsigned __int8 *v13; // eax
  const char *v14; // eax
  unsigned __int8 *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // eax
  const char *v18; // eax
  unsigned __int8 *v19; // eax
  const char *v20; // eax
  unsigned __int8 *v21; // eax
  const char *v22; // eax
  unsigned __int8 *v23; // eax
  const char *v24; // eax
  unsigned __int8 *v25; // eax
  const char *v26; // eax
  unsigned __int8 *v27; // eax
  const char *v28; // eax
  unsigned __int8 *v29; // eax
  const char *v30; // eax
  unsigned __int8 *v31; // eax
  const char *v32; // eax
  unsigned __int8 *v33; // eax
  const char *v34; // eax
  unsigned __int8 *v35; // eax
  const char *v36; // eax
  unsigned __int8 *v37; // eax
  const char *v38; // eax
  int v39; // [esp-10h] [ebp-ACh]
  int v40; // [esp-Ch] [ebp-A8h]
  int v41; // [esp-8h] [ebp-A4h]
  unsigned __int8 *v42; // [esp-4h] [ebp-A0h]
  int v43; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v44; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v45; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v46; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v47; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v48; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v49; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v50; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v51; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v52; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v53; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v54; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v55; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v56; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v57; // [esp-4h] [ebp-A0h]
  unsigned __int8 *v58; // [esp-4h] [ebp-A0h]
  char v60; // [esp+Bh] [ebp-91h] BYREF
  char v61; // [esp+Ch] [ebp-90h] BYREF
  char v62; // [esp+Dh] [ebp-8Fh] BYREF
  char v63; // [esp+Eh] [ebp-8Eh] BYREF
  char v64; // [esp+Fh] [ebp-8Dh] BYREF
  char v65; // [esp+10h] [ebp-8Ch] BYREF
  char v66; // [esp+11h] [ebp-8Bh] BYREF
  char v67; // [esp+12h] [ebp-8Ah] BYREF
  char v68; // [esp+13h] [ebp-89h] BYREF
  char v69; // [esp+14h] [ebp-88h] BYREF
  char v70; // [esp+15h] [ebp-87h] BYREF
  char v71; // [esp+16h] [ebp-86h] BYREF
  char v72; // [esp+17h] [ebp-85h] BYREF
  char v73; // [esp+18h] [ebp-84h] BYREF
  char v74; // [esp+19h] [ebp-83h] BYREF
  char v75; // [esp+1Ah] [ebp-82h] BYREF
  char v76; // [esp+1Bh] [ebp-81h] BYREF
  char v77; // [esp+1Ch] [ebp-80h] BYREF
  char v78; // [esp+1Dh] [ebp-7Fh] BYREF
  char v79; // [esp+1Eh] [ebp-7Eh] BYREF
  char v80; // [esp+1Fh] [ebp-7Dh] BYREF
  char Buffer[108]; // [esp+20h] [ebp-7Ch] BYREF
  int v82; // [esp+98h] [ebp-4h]

  v82 = 0;
  v42 = (unsigned __int8 *)dword_791390;
  v2 = sub_4A2160(&a2, &v80);
  if ( sub_4A1E10(v2, v42) )
  {
    v3 = sub_4A22F0(&a2, &v79);
    v43 = sub_4DAE80(v3);
    v4 = sub_4A22A0(&a2, &v78);
    v41 = sub_4DAE80(v4);
    v5 = sub_4A2250(&a2, &v77);
    v40 = sub_4DAE80(v5);
    v6 = sub_4A2200(&a2, &v76);
    v39 = sub_4DAE80(v6);
    v7 = sub_4A21B0(&a2, &v75);
    v8 = sub_4DAE80(v7);
    sprintf(Buffer, "%c-%c-%c-%c-%c", v8, v39, v40, v41, v43);
  }
  else
  {
    v44 = (unsigned __int8 *)dword_7913B0;
    v9 = sub_4A2160(&a2, &v74);
    if ( sub_4A1E10(v9, v44) )
    {
      v10 = (const char *)sub_630F40("SID_POKER_PAIR");
      sprintf(Buffer, "%s", v10);
    }
    else
    {
      v45 = (unsigned __int8 *)dword_79139C;
      v11 = sub_4A2160(&a2, &v73);
      if ( sub_4A1E10(v11, v45) )
      {
        v12 = (const char *)sub_630F40("SID_POKER_FOURFLUSH");
        sprintf(Buffer, "%s", v12);
      }
      else
      {
        v46 = (unsigned __int8 *)dword_791380;
        v13 = sub_4A2160(&a2, &v72);
        if ( sub_4A1E10(v13, v46) )
        {
          v14 = (const char *)sub_630F40("SID_POKER_TWOPAIR");
          sprintf(Buffer, "%s", v14);
        }
        else
        {
          v47 = (unsigned __int8 *)dword_791418;
          v15 = sub_4A2160(&a2, &v71);
          if ( sub_4A1E10(v15, v47) )
          {
            v16 = (const char *)sub_630F40("SID_POKER_3OFAKIND");
            sprintf(Buffer, "%s", v16);
          }
          else
          {
            v48 = (unsigned __int8 *)dword_79140C;
            v17 = sub_4A2160(&a2, &v70);
            if ( sub_4A1E10(v17, v48) )
            {
              v18 = (const char *)sub_630F40("SID_POKER_STRAIGHT");
              sprintf(Buffer, "%s", v18);
            }
            else
            {
              v49 = (unsigned __int8 *)dword_7913E4;
              v19 = sub_4A2160(&a2, &v69);
              if ( sub_4A1E10(v19, v49) )
              {
                v20 = (const char *)sub_630F40("SID_POKER_DOG");
                sprintf(Buffer, "%s", v20);
              }
              else
              {
                v50 = (unsigned __int8 *)dword_791384;
                v21 = sub_4A2160(&a2, &v68);
                if ( sub_4A1E10(v21, v50) )
                {
                  v22 = (const char *)sub_630F40("SID_POKER_TIGER");
                  sprintf(Buffer, "%s", v22);
                }
                else
                {
                  v51 = (unsigned __int8 *)dword_7913A0;
                  v23 = sub_4A2160(&a2, &v67);
                  if ( sub_4A1E10(v23, v51) )
                  {
                    v24 = (const char *)sub_630F40("SID_POKER_FLUSH");
                    sprintf(Buffer, "%s", v24);
                  }
                  else
                  {
                    v52 = (unsigned __int8 *)dword_7913D4;
                    v25 = sub_4A2160(&a2, &v66);
                    if ( sub_4A1E10(v25, v52) )
                    {
                      v26 = (const char *)sub_630F40("SID_POKER_FULLHOUSE");
                      sprintf(Buffer, "%s", v26);
                    }
                    else
                    {
                      v53 = (unsigned __int8 *)dword_791394;
                      v27 = sub_4A2160(&a2, &v65);
                      if ( sub_4A1E10(v27, v53) )
                      {
                        v28 = (const char *)sub_630F40("SID_POKER_4OFAKIND");
                        sprintf(Buffer, "%s", v28);
                      }
                      else
                      {
                        v54 = (unsigned __int8 *)dword_791398;
                        v29 = sub_4A2160(&a2, &v64);
                        if ( sub_4A1E10(v29, v54) )
                        {
                          v30 = (const char *)sub_630F40("SID_POKER_STRAIGHTFLUSH");
                          sprintf(Buffer, "%s", v30);
                        }
                        else
                        {
                          v55 = (unsigned __int8 *)dword_7913E8;
                          v31 = sub_4A2160(&a2, &v63);
                          if ( sub_4A1E10(v31, v55) )
                          {
                            v32 = (const char *)sub_630F40("SID_POKER_ROYALFLUSH");
                            sprintf(Buffer, "%s", v32);
                          }
                          else
                          {
                            v56 = (unsigned __int8 *)dword_7913C4;
                            v33 = sub_4A2160(&a2, &v62);
                            if ( sub_4A1E10(v33, v56) )
                            {
                              v34 = (const char *)sub_630F40("SID_POKER_DOGFLUSH");
                              sprintf(Buffer, "%s", v34);
                            }
                            else
                            {
                              v57 = (unsigned __int8 *)dword_7913AC;
                              v35 = sub_4A2160(&a2, &v61);
                              if ( sub_4A1E10(v35, v57) )
                              {
                                v36 = (const char *)sub_630F40("SID_POKER_TIGERFLUSH");
                                sprintf(Buffer, "%s", v36);
                              }
                              else
                              {
                                v58 = (unsigned __int8 *)dword_7913CC;
                                v37 = sub_4A2160(&a2, &v60);
                                if ( sub_4A1E10(v37, v58) )
                                {
                                  v38 = (const char *)sub_630F40("SID_POKER_5OFAKIND");
                                  sprintf(Buffer, "%s", v38);
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
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 11) + 180))(*(this + 11), Buffer);
  (*(void (__thiscall **)(_DWORD))(**(this + 11) + 116))(*(this + 11));
  v82 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&a2);
}


//======================================================================
// sub_4DB610
// entry 004db610  size 32  status ok
//======================================================================

int __thiscall sub_4DB610(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 11) + 112))(*(this + 11), this);
}


//======================================================================
// sub_4DB630
// entry 004db630  size 1920  status ok
//======================================================================

int __thiscall sub_4DB630(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int IsFixedSize; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp+4h] [ebp-98h]
  int v14; // [esp+8h] [ebp-94h]
  int v15; // [esp+Ch] [ebp-90h]
  int v16; // [esp+10h] [ebp-8Ch]
  int v17; // [esp+14h] [ebp-88h]
  int v18; // [esp+18h] [ebp-84h]
  int v19; // [esp+1Ch] [ebp-80h]
  int v20; // [esp+20h] [ebp-7Ch]
  int v21; // [esp+24h] [ebp-78h]
  int v22; // [esp+28h] [ebp-74h]
  int v24; // [esp+34h] [ebp-68h]
  int v25; // [esp+3Ch] [ebp-60h]
  int v26; // [esp+44h] [ebp-58h]
  int v27; // [esp+4Ch] [ebp-50h]
  void *v28; // [esp+54h] [ebp-48h]
  void *v29; // [esp+5Ch] [ebp-40h]
  void *v30; // [esp+64h] [ebp-38h]
  void *v31; // [esp+6Ch] [ebp-30h]
  void *v32; // [esp+74h] [ebp-28h]
  void *v33; // [esp+7Ch] [ebp-20h]
  int v34; // [esp+84h] [ebp-18h]
  char v35; // [esp+8Bh] [ebp-11h]
  int v36; // [esp+8Ch] [ebp-10h]

  v35 = 1;
  switch ( Concurrency::details::VirtualProcessor::GetExecutionResourceId((Concurrency::details::VirtualProcessor *)this) )
  {
    case 0xFFFFFFFF:
    case 0u:
    case 1u:
    case 6u:
    case 7u:
      v35 = 1;
      break;
    case 2u:
    case 3u:
    case 4u:
    case 5u:
      v35 = 0;
      break;
    default:
      break;
  }
  if ( !*(_DWORD *)(this + 32) )
  {
    v33 = operator new(0x178u);
    if ( v33 )
    {
      sub_5EAAF0(v33);
      v22 = v1;
    }
    else
    {
      v22 = 0;
    }
    *(_DWORD *)(this + 32) = v22;
    if ( v35 )
    {
      sub_5EAF00(100005);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(
        *(_DWORD *)(this + 32),
        *(_DWORD *)(this + 16) + 100,
        *(_DWORD *)(this + 20) + 90);
    }
    else
    {
      sub_5EAF00(100006);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(
        *(_DWORD *)(this + 32),
        *(_DWORD *)(this + 16) - 97,
        *(_DWORD *)(this + 20) + 90);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 112))(*(_DWORD *)(this + 32));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 108))(*(_DWORD *)(this + 32), 400);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 64))(*(_DWORD *)(this + 32));
  }
  if ( !*(_DWORD *)(this + 36) )
  {
    v32 = operator new(0x1D0u);
    if ( v32 )
    {
      sub_5EC5A0(v32);
      v21 = v2;
    }
    else
    {
      v21 = 0;
    }
    *(_DWORD *)(this + 36) = v21;
    sub_5ECD00(56, -1, word_75EE1C);
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 84))(*(_DWORD *)(this + 32));
    v4 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 76))(*(_DWORD *)(this + 32), v3 + 2);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 68))(
      *(_DWORD *)(this + 36),
      (v35 != 0 ? 5 : -5) + v4);
    sub_5ECCB0(20);
    sub_5ECC60(94);
    sub_5EF310((2 - (v35 != 0)) | 0x10);
    IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 32));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 108))(*(_DWORD *)(this + 36), IsFixedSize + 1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 112))(*(_DWORD *)(this + 36));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 64))(*(_DWORD *)(this + 36));
  }
  if ( !*(_DWORD *)(this + 44) )
  {
    v31 = operator new(0x1D0u);
    if ( v31 )
    {
      sub_5EC5A0(v31);
      v20 = v6;
    }
    else
    {
      v20 = 0;
    }
    *(_DWORD *)(this + 44) = v20;
    sub_5ECD00(56, -1, word_75EE1C);
    v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 84))(*(_DWORD *)(this + 32));
    v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 76))(*(_DWORD *)(this + 32), v7 + 20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 44) + 68))(
      *(_DWORD *)(this + 44),
      (v35 != 0 ? 5 : -5) + v8);
    sub_5ECCB0(20);
    sub_5ECC60(94);
    sub_5EF310((2 - (v35 != 0)) | 0x10);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 44) + 108))(*(_DWORD *)(this + 44), 401);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 112))(*(_DWORD *)(this + 44));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 64))(*(_DWORD *)(this + 44));
  }
  if ( v35 )
  {
    v27 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(this + 4)) + 32);
    v19 = unknown_libname_732(v27);
    v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 76))(v19) + 100;
    v26 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(this + 4)) + 32);
    v18 = unknown_libname_732(v26);
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 84))(v18) - 5;
  }
  else
  {
    v25 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(this + 4)) + 32);
    v17 = unknown_libname_732(v25);
    v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 76))(v17);
    v24 = *(_DWORD *)(sub_5DCB00(*(_DWORD *)(this + 4)) + 32);
    v16 = unknown_libname_732(v24);
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 84))(v16) - 5;
  }
  result = this;
  if ( !*(_DWORD *)(this + 48) )
  {
    v30 = operator new(0x178u);
    if ( v30 )
    {
      sub_5EAAF0(v30);
      v15 = v10;
    }
    else
    {
      v15 = 0;
    }
    *(_DWORD *)(this + 48) = v15;
    sub_5EAF00(100010);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 48) + 68))(*(_DWORD *)(this + 48), v34, v36);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 112))(*(_DWORD *)(this + 48));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 48) + 108))(*(_DWORD *)(this + 48), 500);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 64))(*(_DWORD *)(this + 48));
  }
  if ( !*(_DWORD *)(this + 52) )
  {
    v29 = operator new(0x178u);
    if ( v29 )
    {
      sub_5EAAF0(v29);
      v14 = v11;
    }
    else
    {
      v14 = 0;
    }
    *(_DWORD *)(this + 52) = v14;
    sub_5EAF00(100009);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(
      *(_DWORD *)(this + 52),
      v34 + (v35 != 0 ? -2 : 4),
      v36 + 33);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 112))(*(_DWORD *)(this + 52));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 52) + 108))(*(_DWORD *)(this + 52), 500);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 64))(*(_DWORD *)(this + 52));
  }
  if ( !*(_DWORD *)(this + 56) )
  {
    v28 = operator new(0x178u);
    if ( v28 )
    {
      sub_5EAAF0(v28);
      v13 = v12;
    }
    else
    {
      v13 = 0;
    }
    *(_DWORD *)(this + 56) = v13;
    sub_5EAF00(100008);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 56) + 68))(
      *(_DWORD *)(this + 56),
      v34 + (v35 != 0 ? -2 : 4),
      v36 + 14);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 112))(*(_DWORD *)(this + 56));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 56) + 108))(*(_DWORD *)(this + 56), 500);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 64))(*(_DWORD *)(this + 56));
  }
  return result;
}


//======================================================================
// sub_4DBDD0
// entry 004dbdd0  size 1694  status ok
//======================================================================

__int16 __thiscall sub_4DBDD0(int this)
{
  __int16 result; // ax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int IsFixedSize; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp+4h] [ebp-64h]
  int v15; // [esp+8h] [ebp-60h]
  int v16; // [esp+Ch] [ebp-5Ch]
  int v17; // [esp+10h] [ebp-58h]
  int v18; // [esp+14h] [ebp-54h]
  int v19; // [esp+18h] [ebp-50h]
  void *v21; // [esp+24h] [ebp-44h]
  void *v22; // [esp+2Ch] [ebp-3Ch]
  void *v23; // [esp+34h] [ebp-34h]
  void *v24; // [esp+3Ch] [ebp-2Ch]
  void *v25; // [esp+44h] [ebp-24h]
  void *v26; // [esp+4Ch] [ebp-1Ch]
  char v27; // [esp+57h] [ebp-11h]
  __int16 i; // [esp+58h] [ebp-10h]
  __int16 j; // [esp+58h] [ebp-10h]

  v27 = 1;
  switch ( Concurrency::details::VirtualProcessor::GetExecutionResourceId((Concurrency::details::VirtualProcessor *)this) )
  {
    case 0xFFFFFFFF:
    case 0u:
    case 1u:
    case 6u:
    case 7u:
      v27 = 1;
      break;
    case 2u:
    case 3u:
    case 4u:
    case 5u:
      v27 = 0;
      break;
    default:
      break;
  }
  result = this;
  if ( !*(_DWORD *)(this + 68) )
  {
    v26 = operator new(0x178u);
    if ( v26 )
    {
      sub_5EAAF0(v26);
      v19 = v2;
    }
    else
    {
      v19 = 0;
    }
    *(_DWORD *)(this + 68) = v19;
    if ( v27 )
    {
      sub_5EAF00(100005);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 68) + 68))(
        *(_DWORD *)(this + 68),
        *(_DWORD *)(this + 16) + 100,
        *(_DWORD *)(this + 20) + 90);
    }
    else
    {
      sub_5EAF00(100006);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 68) + 68))(
        *(_DWORD *)(this + 68),
        *(_DWORD *)(this + 16) - 97,
        *(_DWORD *)(this + 20) + 90);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 112))(*(_DWORD *)(this + 68));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 68) + 108))(*(_DWORD *)(this + 68), 180);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 64))(*(_DWORD *)(this + 68));
  }
  if ( !*(_DWORD *)(this + 60) )
  {
    v25 = operator new(0x1D0u);
    if ( v25 )
    {
      sub_5EC5A0(v25);
      v18 = v3;
    }
    else
    {
      v18 = 0;
    }
    *(_DWORD *)(this + 60) = v18;
    sub_5ECD00(56, -1, word_75EE1C);
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 84))(*(_DWORD *)(this + 68));
    v5 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 68) + 76))(*(_DWORD *)(this + 68), v4 + 2);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 60) + 68))(
      *(_DWORD *)(this + 60),
      (v27 != 0 ? 5 : 7) + v5);
    sub_5ECCB0(20);
    sub_5ECC60(83);
    sub_5EF310(48);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 60) + 112))(*(_DWORD *)(this + 60));
    IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 68));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 60) + 108))(*(_DWORD *)(this + 60), IsFixedSize + 1);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 60) + 64))(*(_DWORD *)(this + 60));
  }
  if ( !*(_DWORD *)(this + 64) )
  {
    v24 = operator new(0x1D0u);
    if ( v24 )
    {
      sub_5EC5A0(v24);
      v17 = v7;
    }
    else
    {
      v17 = 0;
    }
    *(_DWORD *)(this + 64) = v17;
    sub_5ECD00(56, -1, word_75EE1C);
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 60) + 84))(*(_DWORD *)(this + 60));
    v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 68) + 76))(*(_DWORD *)(this + 68), v8 + 18);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 64) + 68))(
      *(_DWORD *)(this + 64),
      (v27 != 0 ? 5 : 7) + v9);
    sub_5ECCB0(20);
    sub_5ECC60(83);
    sub_5EF310(48);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 64) + 112))(*(_DWORD *)(this + 64));
    v10 = CMediaType::IsFixedSize(*(CMediaType **)(this + 68));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 64) + 108))(*(_DWORD *)(this + 64), v10 + 1);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 64) + 64))(*(_DWORD *)(this + 64));
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_DWORD *)(this + 4 * i + 72) )
    {
      v23 = operator new(0x178u);
      if ( v23 )
      {
        sub_5EAAF0(v23);
        v16 = v11;
      }
      else
      {
        v16 = 0;
      }
      *(_DWORD *)(this + 4 * i + 72) = v16;
      sub_5EAF00(101003);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 72) + 112))(*(_DWORD *)(this + 4 * i + 72));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 72) + 108))(
        *(_DWORD *)(this + 4 * i + 72),
        101);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 72) + 64))(*(_DWORD *)(this + 4 * i + 72));
    }
    result = i;
    if ( !*(_DWORD *)(this + 4 * i + 80) )
    {
      v22 = operator new(0x178u);
      if ( v22 )
      {
        sub_5EAAF0(v22);
        v15 = v12;
      }
      else
      {
        v15 = 0;
      }
      *(_DWORD *)(this + 4 * i + 80) = v15;
      sub_5EAF00(101003);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 80) + 112))(*(_DWORD *)(this + 4 * i + 80));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 80) + 108))(
        *(_DWORD *)(this + 4 * i + 80),
        101);
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 80) + 64))(*(_DWORD *)(this + 4 * i + 80));
    }
  }
  for ( j = 0; j < 3; ++j )
  {
    if ( !*(_DWORD *)(this + 4 * j + 88) )
    {
      v21 = operator new(0x178u);
      if ( v21 )
      {
        sub_5EAAF0(v21);
        v14 = v13;
      }
      else
      {
        v14 = 0;
      }
      *(_DWORD *)(this + 4 * j + 88) = v14;
      sub_5EAF00(101002);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 88) + 112))(*(_DWORD *)(this + 4 * j + 88));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * j + 88) + 108))(
        *(_DWORD *)(this + 4 * j + 88),
        121);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 88) + 64))(*(_DWORD *)(this + 4 * j + 88));
    }
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_4DC490
// entry 004dc490  size 51  status ok
//======================================================================

int __thiscall sub_4DC490(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 15) + 112))(*(this + 15));
  return (*(int (__thiscall **)(_DWORD))(**(this + 16) + 112))(*(this + 16));
}


//======================================================================
// sub_4DC4D0
// entry 004dc4d0  size 4419  status ok
//======================================================================

int __thiscall sub_4DC4D0(_DWORD **this, int a2, int a3)
{
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
  char v47[104]; // [esp+8h] [ebp-D8h] BYREF
  char Buffer[108]; // [esp+70h] [ebp-70h] BYREF

  (*(void (__thiscall **)(_DWORD))(**(this + 17) + 116))(*(this + 17));
  if ( a2 > 1007 )
  {
    switch ( a2 )
    {
      case 1008:
        v23 = (const char *)sub_630F40("SID_POKER_OMAHA");
        sprintf(Buffer, v23);
        v24 = (const char *)sub_630F40("SID_POKER_HOLDEM");
        sprintf(v47, v24);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1009:
        v25 = (const char *)sub_630F40("SID_POKER_OMAHA");
        sprintf(Buffer, v25);
        v26 = (const char *)sub_630F40("SID_POKER_HILO");
        sprintf(v47, v26);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1010:
        v27 = (const char *)sub_630F40("SID_POKER_7CARDSTUD");
        sprintf(Buffer, v27);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1011:
        v28 = (const char *)sub_630F40("SID_POKER_7CARDSTUD");
        sprintf(Buffer, v28);
        v29 = (const char *)sub_630F40("SID_POKER_HILO");
        sprintf(v47, v29);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1012:
        v30 = (const char *)sub_630F40("SID_POKER_5CARDDRAW");
        sprintf(Buffer, v30);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1013:
        v31 = (const char *)sub_630F40("SID_POKER_5CARDDRAW");
        sprintf(Buffer, v31);
        v32 = (const char *)sub_630F40("SID_POKER_LOWBALL");
        sprintf(v47, v32);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1014:
        v33 = (const char *)sub_630F40("SID_POKER_5CARDDRAW");
        sprintf(Buffer, v33);
        v34 = (const char *)sub_630F40("SID_POKER_JACKS_ELLIPSIS");
        sprintf(v47, v34);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1015:
        v35 = (const char *)sub_630F40("SID_POKER_5CARDSTUD");
        sprintf(Buffer, v35);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1016:
        v36 = (const char *)sub_630F40("SID_POKER_BASEBALL");
        sprintf(Buffer, v36);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1017:
        v37 = (const char *)sub_630F40("SID_POKER_HIGH");
        sprintf(Buffer, v37);
        v38 = (const char *)sub_630F40("SID_POKER_CHICAGO");
        sprintf(v47, v38);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1018:
        v39 = (const char *)sub_630F40("SID_POKER_MURDER");
        sprintf(Buffer, v39);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1019:
        v40 = (const char *)sub_630F40("SID_POKER_THEBITCH");
        sprintf(Buffer, v40);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1020:
        v41 = (const char *)sub_630F40("SID_POKER_CINCINNATI");
        sprintf(Buffer, v41);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1021:
        v42 = (const char *)sub_630F40("SID_POKER_CRISSCROSS");
        sprintf(Buffer, v42);
        sprintf(v47, &Source);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      case 1022:
        v43 = (const char *)sub_630F40("SID_POKER_PASSTHE");
        sprintf(Buffer, v43);
        v44 = (const char *)sub_630F40("SID_POKER_TRASH");
        sprintf(v47, v44);
        sub_5ECD00(56, -1, word_75EE1C);
        sub_4DA890(this);
        sub_4DB610(this);
        break;
      default:
LABEL_5:
        v3 = (const char *)sub_630F40("SID_POKER_OPEN");
        sprintf(Buffer, v3);
        if ( a3 > 999999 )
        {
LABEL_20:
          sprintf(v47, "$%d,%.3d,%.3d", a3 / 1000000, a3 % 1000000 / 1000, a3 % 1000);
        }
        else if ( a3 > 999 )
        {
LABEL_17:
          sprintf(v47, "$%d,%.3d", a3 / 1000, a3 % 1000);
        }
        else
        {
LABEL_23:
          sprintf(v47, off_6BB590, a3);
        }
        sub_5ECD00(56, -1, word_75EE1C);
        break;
    }
  }
  else
  {
    if ( a2 != 1007 )
    {
      switch ( a2 )
      {
        case 2:
          v4 = (const char *)sub_630F40("SID_POKER_RAISE");
          sprintf(Buffer, v4);
          if ( a3 > 999999 )
            goto LABEL_20;
          if ( a3 <= 999 )
            goto LABEL_23;
          goto LABEL_17;
        case 3:
          v5 = (const char *)sub_630F40("SID_POKER_CALL");
          sprintf(Buffer, v5);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 4:
          v6 = (const char *)sub_630F40("SID_POKER_FOLD");
          sprintf(Buffer, v6);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 5:
          v7 = (const char *)sub_630F40("SID_POKER_CHECK");
          sprintf(Buffer, v7);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 6:
          v8 = (const char *)sub_630F40("SID_POKER_BLINDOPEN");
          sprintf(Buffer, v8);
          if ( a3 > 999999 )
            goto LABEL_20;
          if ( a3 > 999 )
            goto LABEL_17;
          goto LABEL_23;
        case 7:
          v9 = (const char *)sub_630F40("SID_POKER_BLINDRAISE");
          sprintf(Buffer, v9);
          if ( a3 > 999999 )
            goto LABEL_20;
          if ( a3 > 999 )
            goto LABEL_17;
          goto LABEL_23;
        case 9:
          v10 = (const char *)sub_630F40("SID_POKER_ALLIN");
          sprintf(Buffer, v10);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 10:
          v11 = (const char *)sub_630F40("SID_POKER_MATCHPOT");
          sprintf(Buffer, v11);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 99:
          v12 = (const char *)sub_630F40("SID_POKER_THINKING_ELLIPSIS");
          sprintf(Buffer, v12);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 100:
          v13 = (const char *)sub_630F40("SID_POKER_STANDPAT");
          sprintf(Buffer, v13);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 101:
          v14 = (const char *)sub_630F40("SID_POKER_DRAW1");
          sprintf(Buffer, v14);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 102:
          v15 = (const char *)sub_630F40("SID_POKER_DRAW2");
          sprintf(Buffer, v15);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 103:
          v16 = (const char *)sub_630F40("SID_POKER_DRAW3");
          sprintf(Buffer, v16);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 104:
          v17 = (const char *)sub_630F40("SID_POKER_DRAW4");
          sprintf(Buffer, v17);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 105:
          v18 = (const char *)sub_630F40("SID_POKER_DRAW5");
          sprintf(Buffer, v18);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          goto LABEL_52;
        case 200:
          v19 = (const char *)sub_630F40("SID_POKER_IAMIN");
          sprintf(Buffer, v19);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          sub_4DA890(this);
          sub_4DB610(this);
          goto LABEL_52;
        case 201:
          v20 = (const char *)sub_630F40("SID_POKER_SITOUT");
          sprintf(Buffer, v20);
          sprintf(v47, &Source);
          sub_5ECD00(56, -1, word_75EE1C);
          sub_4DA890(this);
          sub_4DB610(this);
          goto LABEL_52;
        default:
          goto LABEL_5;
      }
    }
    v21 = (const char *)sub_630F40("SID_POKER_TEXAS");
    sprintf(Buffer, v21);
    v22 = (const char *)sub_630F40("SID_POKER_HOLDEM");
    sprintf(v47, v22);
    sub_5ECD00(56, -1, word_75EE1C);
    sub_4DA890(this);
    sub_4DB610(this);
  }
LABEL_52:
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 15) + 180))(*(this + 15), Buffer);
  (*(void (__thiscall **)(_DWORD))(**(this + 15) + 116))(*(this + 15));
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 16) + 180))(*(this + 16), v47);
  return (*(int (__thiscall **)(_DWORD))(**(this + 16) + 116))(*(this + 16));
}


//======================================================================
// sub_4DD760
// entry 004dd760  size 26  status ok
//======================================================================

_DWORD *__thiscall sub_4DD760(_DWORD *this)
{
  ++*(this + 27);
  return this;
}


//======================================================================
// sub_4DD780
// entry 004dd780  size 436  status ok
//======================================================================

_BYTE *__stdcall sub_4DD780(_BYTE *a1, Concurrency::details::_CancellationTokenRegistration *a2)
{
  int v3; // [esp+8h] [ebp-14h]
  int Token; // [esp+Ch] [ebp-10h]
  _BYTE *v5; // [esp+10h] [ebp-Ch]
  _BYTE *v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  Token = (int)Concurrency::details::_CancellationTokenRegistration::_GetToken(a2);
  if ( (unsigned int)Token >= 0x34 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 7225);
  v7 = Token / 13;
  v3 = Token % 13;
  v6 = 0;
  if ( Token / 13 )
  {
    switch ( v7 )
    {
      case 1:
        v6 = (_BYTE *)dword_790770;
        break;
      case 2:
        v6 = (_BYTE *)dword_790764;
        break;
      case 3:
        v6 = (_BYTE *)dword_790754;
        break;
    }
  }
  else
  {
    v6 = (_BYTE *)dword_79076C;
  }
  v5 = 0;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      sub_464130(a1, (_BYTE *)dword_790758, v6);
    }
    else if ( v3 == 2 )
    {
      sub_464130(a1, (_BYTE *)dword_790768, v6);
    }
    else if ( v3 == 3 )
    {
      sub_464130(a1, (_BYTE *)dword_790790, v6);
    }
    else if ( v3 == 4 )
    {
      sub_464130(a1, (_BYTE *)dword_790750, v6);
    }
    else if ( v3 == 5 )
    {
      sub_464130(a1, (_BYTE *)dword_79079C, v6);
    }
    else if ( v3 == 6 )
    {
      sub_464130(a1, (_BYTE *)dword_790760, v6);
    }
    else if ( v3 == 7 )
    {
      sub_464130(a1, (_BYTE *)dword_790798, v6);
    }
    else if ( v3 == 8 )
    {
      sub_464130(a1, (_BYTE *)dword_790794, v6);
    }
    else if ( v3 == 9 )
    {
      sub_464130(a1, (_BYTE *)dword_790788, v6);
    }
    else if ( v3 == 10 )
    {
      sub_464130(a1, (_BYTE *)dword_790774, v6);
    }
    else if ( v3 == 11 )
    {
      sub_464130(a1, (_BYTE *)dword_7907B0, v6);
    }
    else
    {
      if ( v3 == 12 )
        v5 = (_BYTE *)dword_7907A8;
      sub_464130(a1, v5, v6);
    }
  }
  else
  {
    sub_464130(a1, (_BYTE *)dword_7907A4, v6);
  }
  return a1;
}


//======================================================================
// sub_4DD940
// entry 004dd940  size 454  status ok
//======================================================================

_BYTE *__stdcall sub_4DD940(_BYTE *a1, Concurrency::details::_CancellationTokenRegistration *a2)
{
  int v3; // [esp+8h] [ebp-14h]
  int Token; // [esp+Ch] [ebp-10h]
  _BYTE *v5; // [esp+10h] [ebp-Ch]
  _BYTE *v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  Token = (int)Concurrency::details::_CancellationTokenRegistration::_GetToken(a2);
  if ( (unsigned int)Token >= 0x34 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 7274);
  v7 = Token / 13;
  v3 = Token % 13;
  v6 = 0;
  if ( Token / 13 )
  {
    switch ( v7 )
    {
      case 1:
        v6 = (_BYTE *)dword_790770;
        break;
      case 2:
        v6 = (_BYTE *)dword_790764;
        break;
      case 3:
        v6 = (_BYTE *)dword_790754;
        break;
    }
  }
  else
  {
    v6 = (_BYTE *)dword_79076C;
  }
  v5 = 0;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      sub_464130(a1, (_BYTE *)dword_790758, v6);
    }
    else
    {
      if ( v3 == 2 )
        goto LABEL_16;
      if ( v3 == 3 )
      {
        sub_464130(a1, (_BYTE *)dword_790790, v6);
        return a1;
      }
      if ( v3 == 4 )
      {
        sub_464130(a1, (_BYTE *)dword_790750, v6);
        return a1;
      }
      if ( v3 == 5 )
      {
        sub_464130(a1, (_BYTE *)dword_79079C, v6);
        return a1;
      }
      if ( v3 == 6 )
      {
        sub_464130(a1, (_BYTE *)dword_790760, v6);
        return a1;
      }
      if ( v3 == 7 )
      {
        sub_464130(a1, (_BYTE *)dword_790798, v6);
        return a1;
      }
      if ( v3 == 8 )
      {
LABEL_16:
        sub_464130(a1, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      }
      else if ( v3 == 9 )
      {
        sub_464130(a1, (_BYTE *)dword_790788, v6);
      }
      else if ( v3 == 10 )
      {
        sub_464130(a1, (_BYTE *)dword_790774, v6);
      }
      else if ( v3 == 11 )
      {
        sub_464130(a1, (_BYTE *)dword_7907B0, v6);
      }
      else
      {
        if ( v3 == 12 )
          v5 = (_BYTE *)dword_7907A8;
        sub_464130(a1, v5, v6);
      }
    }
  }
  else
  {
    sub_464130(a1, (_BYTE *)dword_7907A4, v6);
  }
  return a1;
}


//======================================================================
// sub_4DDB10
// entry 004ddb10  size 472  status ok
//======================================================================

_BYTE *__stdcall sub_4DDB10(_BYTE *a1, Concurrency::details::_CancellationTokenRegistration *a2)
{
  int v3; // [esp+8h] [ebp-14h]
  int Token; // [esp+Ch] [ebp-10h]
  _BYTE *v5; // [esp+10h] [ebp-Ch]
  _BYTE *v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  Token = (int)Concurrency::details::_CancellationTokenRegistration::_GetToken(a2);
  if ( (unsigned int)Token >= 0x34 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 7329);
  v7 = Token / 13;
  v3 = Token % 13;
  v6 = 0;
  if ( Token / 13 )
  {
    switch ( v7 )
    {
      case 1:
        v6 = (_BYTE *)dword_790770;
        break;
      case 2:
        v6 = (_BYTE *)dword_790764;
        break;
      case 3:
        v6 = (_BYTE *)dword_790754;
        break;
    }
  }
  else
  {
    v6 = (_BYTE *)dword_79076C;
  }
  v5 = 0;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      sub_464130(a1, (_BYTE *)dword_790758, v6);
    }
    else if ( v3 == 2 )
    {
      sub_464130(a1, (_BYTE *)dword_790768, v6);
    }
    else if ( v3 == 3 )
    {
      sub_464130(a1, (_BYTE *)dword_790790, v6);
    }
    else if ( v3 == 4 )
    {
      sub_464130(a1, (_BYTE *)dword_790750, v6);
    }
    else if ( v3 == 5 )
    {
      sub_464130(a1, (_BYTE *)dword_79079C, v6);
    }
    else if ( v3 == 6 )
    {
      sub_464130(a1, (_BYTE *)dword_790760, v6);
    }
    else if ( v3 == 7 )
    {
      sub_464130(a1, (_BYTE *)dword_790798, v6);
    }
    else if ( v3 == 8 )
    {
      sub_464130(a1, (_BYTE *)dword_790794, v6);
    }
    else if ( v3 == 9 )
    {
      sub_464130(a1, (_BYTE *)dword_790788, v6);
    }
    else if ( v3 == 10 )
    {
      sub_464130(a1, (_BYTE *)dword_790774, v6);
    }
    else if ( v3 == 11 )
    {
      if ( v6 == (_BYTE *)dword_79076C )
        sub_464130(a1, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      else
        sub_464130(a1, (_BYTE *)dword_7907B0, v6);
    }
    else
    {
      if ( v3 == 12 )
        v5 = (_BYTE *)dword_7907A8;
      sub_464130(a1, v5, v6);
    }
  }
  else
  {
    sub_464130(a1, (_BYTE *)dword_7907A4, v6);
  }
  return a1;
}


//======================================================================
// sub_4DDCF0
// entry 004ddcf0  size 7361  status ok
//======================================================================

int __thiscall sub_4DDCF0(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 7387);
  switch ( a2 )
  {
    case 1:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 935;
      *(this + 309) = 955;
      *(this + 310) = 968;
      *(this + 311) = 979;
      *(this + 312) = 988;
      *(this + 313) = 992;
      *(this + 314) = 994;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 191;
      *(this + 320) = 170;
      *(this + 321) = 85;
      *(this + 264) = 5;
      *(this + 265) = 30;
      *(this + 266) = 50;
      *(this + 267) = 25;
      *(this + 268) = 20;
      *(this + 269) = 15;
      *(this + 270) = 30;
      *(this + 271) = 20;
      *(this + 272) = 200;
      *(this + 273) = 80;
      *(this + 274) = 130;
      *(this + 275) = 40;
      *(this + 276) = 20;
      *(this + 277) = 40;
      *(this + 278) = 20;
      *(this + 279) = 5;
      *(this + 280) = 30;
      *(this + 282) = 75;
      *(this + 283) = 50;
      *(this + 284) = 25;
      *(this + 285) = 70;
      *(this + 286) = 60;
      *(this + 281) = 5;
      *(this + 287) = 3;
      *(this + 288) = 30;
      *(this + 289) = 60;
      *(this + 322) = 3;
      *(this + 323) = 50;
      result = (int)this;
      break;
    case 2:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 507;
      *(this + 296) = 540;
      *(this + 297) = 572;
      *(this + 298) = 605;
      *(this + 299) = 637;
      *(this + 300) = 670;
      *(this + 301) = 702;
      *(this + 302) = 735;
      *(this + 303) = 767;
      *(this + 304) = 800;
      *(this + 305) = 832;
      *(this + 306) = 865;
      *(this + 307) = 897;
      *(this + 308) = 915;
      *(this + 309) = 935;
      *(this + 310) = 948;
      *(this + 311) = 969;
      *(this + 312) = 978;
      *(this + 313) = 982;
      *(this + 314) = 984;
      *(this + 315) = 987;
      *(this + 316) = 994;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 171;
      *(this + 320) = 150;
      *(this + 321) = 65;
      *(this + 264) = 2;
      *(this + 265) = 50;
      *(this + 266) = 70;
      *(this + 267) = 50;
      *(this + 268) = 35;
      *(this + 269) = 22;
      *(this + 270) = 50;
      *(this + 271) = 30;
      *(this + 272) = 280;
      *(this + 273) = 100;
      *(this + 274) = 180;
      *(this + 275) = 55;
      *(this + 276) = 8;
      *(this + 289) = 35;
      *(this + 277) = 45;
      *(this + 278) = 30;
      *(this + 279) = 17;
      *(this + 280) = 25;
      *(this + 281) = 8;
      *(this + 282) = 90;
      *(this + 283) = 50;
      *(this + 284) = 30;
      *(this + 285) = 85;
      *(this + 286) = 80;
      *(this + 287) = 1;
      *(this + 288) = 70;
      *(this + 322) = 1;
      *(this + 323) = 30;
      result = (int)this;
      break;
    case 3:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 935;
      *(this + 309) = 955;
      *(this + 310) = 968;
      *(this + 311) = 979;
      *(this + 312) = 988;
      *(this + 313) = 992;
      *(this + 314) = 994;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 211;
      *(this + 320) = 190;
      *(this + 321) = 105;
      *(this + 264) = 8;
      *(this + 265) = 25;
      *(this + 266) = 40;
      *(this + 267) = 15;
      *(this + 268) = 15;
      *(this + 269) = 9;
      *(this + 270) = 20;
      *(this + 271) = 14;
      *(this + 272) = 120;
      *(this + 273) = 50;
      *(this + 274) = 80;
      *(this + 275) = 23;
      *(this + 276) = 15;
      *(this + 277) = 30;
      *(this + 278) = 18;
      *(this + 279) = 4;
      *(this + 280) = 40;
      *(this + 281) = 2;
      *(this + 282) = 90;
      *(this + 283) = 60;
      *(this + 284) = 30;
      *(this + 285) = 50;
      *(this + 286) = 50;
      *(this + 287) = 6;
      *(this + 288) = 20;
      *(this + 289) = 83;
      *(this + 322) = 5;
      *(this + 323) = 70;
      result = (int)this;
      break;
    case 4:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 935;
      *(this + 309) = 955;
      *(this + 310) = 968;
      *(this + 311) = 979;
      *(this + 312) = 988;
      *(this + 313) = 992;
      *(this + 314) = 994;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 161;
      *(this + 320) = 140;
      *(this + 321) = 55;
      *(this + 264) = 10;
      *(this + 265) = 28;
      *(this + 266) = 35;
      *(this + 267) = 20;
      *(this + 268) = 18;
      *(this + 269) = 12;
      *(this + 270) = 27;
      *(this + 271) = 17;
      *(this + 272) = 180;
      *(this + 273) = 80;
      *(this + 274) = 115;
      *(this + 275) = 35;
      *(this + 276) = 14;
      *(this + 277) = 38;
      *(this + 278) = 21;
      *(this + 279) = 5;
      *(this + 280) = 35;
      *(this + 281) = 4;
      *(this + 282) = 80;
      *(this + 283) = 60;
      *(this + 284) = 40;
      *(this + 285) = 60;
      *(this + 286) = 60;
      *(this + 287) = 5;
      *(this + 288) = 30;
      *(this + 289) = 70;
      *(this + 322) = 2;
      *(this + 323) = 70;
      result = (int)this;
      break;
    case 5:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 915;
      *(this + 309) = 935;
      *(this + 310) = 948;
      *(this + 311) = 969;
      *(this + 312) = 978;
      *(this + 313) = 982;
      *(this + 314) = 989;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 181;
      *(this + 320) = 160;
      *(this + 321) = 75;
      *(this + 264) = 7;
      *(this + 265) = 35;
      *(this + 266) = 45;
      *(this + 267) = 35;
      *(this + 268) = 23;
      *(this + 269) = 17;
      *(this + 270) = 35;
      *(this + 271) = 24;
      *(this + 272) = 230;
      *(this + 273) = 100;
      *(this + 274) = 160;
      *(this + 275) = 50;
      *(this + 276) = 35;
      *(this + 277) = 35;
      *(this + 278) = 27;
      *(this + 279) = 7;
      *(this + 280) = 25;
      *(this + 281) = 6;
      *(this + 282) = 90;
      *(this + 283) = 40;
      *(this + 284) = 20;
      *(this + 285) = 55;
      *(this + 286) = 70;
      *(this + 287) = 2;
      *(this + 288) = 40;
      *(this + 289) = 50;
      *(this + 322) = 2;
      *(this + 323) = 40;
      result = (int)this;
      break;
    case 6:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 905;
      *(this + 309) = 925;
      *(this + 310) = 938;
      *(this + 311) = 964;
      *(this + 312) = 973;
      *(this + 313) = 977;
      *(this + 314) = 979;
      *(this + 315) = 982;
      *(this + 316) = 989;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 151;
      *(this + 320) = 130;
      *(this + 321) = 45;
      *(this + 264) = 0;
      *(this + 265) = 40;
      *(this + 266) = 65;
      *(this + 267) = 100;
      *(this + 268) = 38;
      *(this + 269) = 27;
      *(this + 270) = 50;
      *(this + 271) = 35;
      *(this + 272) = 320;
      *(this + 273) = 120;
      *(this + 274) = 240;
      *(this + 275) = 60;
      *(this + 276) = 30;
      *(this + 277) = 46;
      *(this + 278) = 30;
      *(this + 279) = 15;
      *(this + 280) = 5;
      *(this + 281) = 8;
      *(this + 282) = 65;
      *(this + 283) = 35;
      *(this + 284) = 15;
      *(this + 285) = 75;
      *(this + 286) = 75;
      *(this + 287) = 1;
      *(this + 288) = 80;
      *(this + 289) = 25;
      *(this + 322) = 1;
      *(this + 323) = 20;
      result = (int)this;
      break;
    case 7:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 507;
      *(this + 296) = 540;
      *(this + 297) = 572;
      *(this + 298) = 605;
      *(this + 299) = 637;
      *(this + 300) = 670;
      *(this + 301) = 702;
      *(this + 302) = 735;
      *(this + 303) = 767;
      *(this + 304) = 800;
      *(this + 305) = 832;
      *(this + 306) = 865;
      *(this + 307) = 897;
      *(this + 308) = 910;
      *(this + 309) = 925;
      *(this + 310) = 938;
      *(this + 311) = 949;
      *(this + 312) = 958;
      *(this + 313) = 962;
      *(this + 314) = 964;
      *(this + 315) = 967;
      *(this + 316) = 984;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 191;
      *(this + 320) = 170;
      *(this + 321) = 85;
      *(this + 264) = 3;
      *(this + 265) = 30;
      *(this + 266) = 35;
      *(this + 267) = 25;
      *(this + 268) = 18;
      *(this + 269) = 8;
      *(this + 270) = 25;
      *(this + 271) = 11;
      *(this + 272) = 180;
      *(this + 273) = 90;
      *(this + 274) = 160;
      *(this + 275) = 35;
      *(this + 276) = 50;
      *(this + 277) = 43;
      *(this + 278) = 23;
      *(this + 279) = 12;
      *(this + 280) = 40;
      *(this + 281) = 2;
      *(this + 282) = 60;
      *(this + 283) = 40;
      *(this + 284) = 20;
      *(this + 285) = 60;
      *(this + 286) = 40;
      *(this + 287) = 2;
      *(this + 288) = 65;
      *(this + 289) = 40;
      *(this + 322) = 4;
      *(this + 323) = 55;
      result = (int)this;
      break;
    case 8:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 935;
      *(this + 309) = 955;
      *(this + 310) = 968;
      *(this + 311) = 979;
      *(this + 312) = 988;
      *(this + 313) = 992;
      *(this + 314) = 994;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 206;
      *(this + 320) = 185;
      *(this + 321) = 100;
      *(this + 264) = 5;
      *(this + 265) = 28;
      *(this + 266) = 46;
      *(this + 267) = 22;
      *(this + 268) = 25;
      *(this + 269) = 17;
      *(this + 270) = 32;
      *(this + 271) = 22;
      *(this + 272) = 190;
      *(this + 273) = 80;
      *(this + 274) = 150;
      *(this + 275) = 33;
      *(this + 276) = 20;
      *(this + 277) = 41;
      *(this + 278) = 23;
      *(this + 279) = 6;
      *(this + 280) = 30;
      *(this + 282) = 75;
      *(this + 283) = 50;
      *(this + 284) = 30;
      *(this + 285) = 65;
      *(this + 286) = 50;
      *(this + 281) = 5;
      *(this + 287) = 6;
      *(this + 288) = 15;
      *(this + 289) = 80;
      *(this + 322) = 6;
      *(this + 323) = 60;
      result = (int)this;
      break;
    case 9:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 935;
      *(this + 309) = 955;
      *(this + 310) = 968;
      *(this + 311) = 979;
      *(this + 312) = 988;
      *(this + 313) = 992;
      *(this + 314) = 994;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 226;
      *(this + 320) = 205;
      *(this + 321) = 85;
      *(this + 264) = 8;
      *(this + 265) = 30;
      *(this + 266) = 50;
      *(this + 267) = 25;
      *(this + 268) = 15;
      *(this + 269) = 10;
      *(this + 270) = 20;
      *(this + 271) = 16;
      *(this + 272) = 200;
      *(this + 273) = 80;
      *(this + 274) = 130;
      *(this + 275) = 40;
      *(this + 276) = 20;
      *(this + 277) = 41;
      *(this + 278) = 26;
      *(this + 279) = 8;
      *(this + 280) = 30;
      *(this + 282) = 75;
      *(this + 283) = 50;
      *(this + 284) = 35;
      *(this + 285) = 60;
      *(this + 286) = 40;
      *(this + 281) = 5;
      *(this + 287) = 3;
      *(this + 288) = 30;
      *(this + 289) = 50;
      *(this + 322) = 3;
      *(this + 323) = 65;
      result = (int)this;
      break;
    case 10:
      *(this + 290) = 24;
      *(this + 291) = 72;
      *(this + 292) = 138;
      *(this + 293) = 243;
      *(this + 294) = 404;
      *(this + 295) = 517;
      *(this + 296) = 550;
      *(this + 297) = 582;
      *(this + 298) = 615;
      *(this + 299) = 647;
      *(this + 300) = 680;
      *(this + 301) = 712;
      *(this + 302) = 745;
      *(this + 303) = 777;
      *(this + 304) = 810;
      *(this + 305) = 842;
      *(this + 306) = 875;
      *(this + 307) = 907;
      *(this + 308) = 935;
      *(this + 309) = 955;
      *(this + 310) = 968;
      *(this + 311) = 979;
      *(this + 312) = 988;
      *(this + 313) = 992;
      *(this + 314) = 994;
      *(this + 315) = 997;
      *(this + 316) = 999;
      *(this + 317) = 1000;
      *(this + 318) = 1000;
      *(this + 319) = 206;
      *(this + 320) = 185;
      *(this + 321) = 85;
      *(this + 264) = 7;
      *(this + 265) = 25;
      *(this + 266) = 40;
      *(this + 267) = 18;
      *(this + 268) = 18;
      *(this + 269) = 11;
      *(this + 270) = 25;
      *(this + 271) = 15;
      *(this + 272) = 160;
      *(this + 273) = 80;
      *(this + 274) = 100;
      *(this + 275) = 29;
      *(this + 276) = 17;
      *(this + 277) = 32;
      *(this + 278) = 21;
      *(this + 279) = 5;
      *(this + 280) = 40;
      *(this + 281) = 3;
      *(this + 282) = 90;
      *(this + 283) = 60;
      *(this + 284) = 30;
      *(this + 285) = 50;
      *(this + 286) = 60;
      *(this + 287) = 6;
      *(this + 288) = 20;
      *(this + 289) = 80;
      *(this + 322) = 3;
      *(this + 323) = 60;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4DF9E0
// entry 004df9e0  size 226  status ok
//======================================================================

__int16 __thiscall sub_4DF9E0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 264);
    case 1:
      v4 = *(this + 264);
      v5 = v4 - sub_62FBF0(5);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 264);
      return sub_62FBF0(3) + v2;
    case 3:
      v3 = *(this + 264);
      return sub_62FBF0(6) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8040);
      return 0;
  }
}


//======================================================================
// sub_4DFAD0
// entry 004dfad0  size 35  status ok
//======================================================================

double __thiscall sub_4DFAD0(__int16 *this)
{
  return (double)*(this + 266) / 100.0;
}


//======================================================================
// sub_4DFB00
// entry 004dfb00  size 199  status ok
//======================================================================

double __thiscall sub_4DFB00(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 268) / 100.0;
    case 1:
      return (double)(__int16)*(this + 268) / 80.0;
    case 2:
      return (double)(__int16)*(this + 268) / 120.0;
    case 3:
      return (double)(__int16)*(this + 268) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8061);
  return 0.0;
}


//======================================================================
// sub_4DFBD0
// entry 004dfbd0  size 199  status ok
//======================================================================

double __thiscall sub_4DFBD0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 269) / 100.0;
    case 1:
      return (double)(__int16)*(this + 269) / 80.0;
    case 2:
      return (double)(__int16)*(this + 269) / 120.0;
    case 3:
      return (double)(__int16)*(this + 269) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8077);
  return 0.0;
}


//======================================================================
// sub_4DFCA0
// entry 004dfca0  size 199  status ok
//======================================================================

double __thiscall sub_4DFCA0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 270) / 100.0;
    case 1:
      return (double)(__int16)*(this + 270) / 80.0;
    case 2:
      return (double)(__int16)*(this + 270) / 120.0;
    case 3:
      return (double)(__int16)*(this + 270) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8093);
  return 0.0;
}


//======================================================================
// sub_4DFD70
// entry 004dfd70  size 199  status ok
//======================================================================

double __thiscall sub_4DFD70(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 271) / 100.0;
    case 1:
      return (double)(__int16)*(this + 271) / 80.0;
    case 2:
      return (double)(__int16)*(this + 271) / 120.0;
    case 3:
      return (double)(__int16)*(this + 271) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8109);
  return 0.0;
}


//======================================================================
// sub_4DFE40
// entry 004dfe40  size 199  status ok
//======================================================================

double __thiscall sub_4DFE40(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 272) / 100.0;
    case 1:
      return (double)(__int16)*(this + 272) / 80.0;
    case 2:
      return (double)(__int16)*(this + 272) / 120.0;
    case 3:
      return (double)(__int16)*(this + 272) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8125);
  return 0.0;
}


//======================================================================
// sub_4DFF10
// entry 004dff10  size 199  status ok
//======================================================================

double __thiscall sub_4DFF10(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 273) / 100.0;
    case 1:
      return (double)(__int16)*(this + 273) / 80.0;
    case 2:
      return (double)(__int16)*(this + 273) / 120.0;
    case 3:
      return (double)(__int16)*(this + 273) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8141);
  return 0.0;
}


//======================================================================
// sub_4DFFE0
// entry 004dffe0  size 199  status ok
//======================================================================

double __thiscall sub_4DFFE0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 274) / 100.0;
    case 1:
      return (double)(__int16)*(this + 274) / 80.0;
    case 2:
      return (double)(__int16)*(this + 274) / 120.0;
    case 3:
      return (double)(__int16)*(this + 274) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8157);
  return 0.0;
}


//======================================================================
// sub_4E00B0
// entry 004e00b0  size 199  status ok
//======================================================================

double __thiscall sub_4E00B0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 275) / 100.0;
    case 1:
      return (double)(__int16)*(this + 275) / 80.0;
    case 2:
      return (double)(__int16)*(this + 275) / 120.0;
    case 3:
      return (double)(__int16)*(this + 275) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8173);
  return 0.0;
}


//======================================================================
// sub_4E0180
// entry 004e0180  size 514  status ok
//======================================================================

__int16 __thiscall sub_4E0180(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 8180);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 8181);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 284) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 283);
        else
          v3 = (__int16)*(this + 282);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 284);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 283);
          else
            v5 = *(this + 282);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 284);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 283);
          else
            v7 = *(this + 282);
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
    LOWORD(v2) = *(this + 284);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 283);
  }
  else
  {
    LOWORD(v2) = *(this + 282);
  }
  return v2;
}


//======================================================================
// sub_4E0390
// entry 004e0390  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E0390(_WORD *this)
{
  return *(this + 285);
}


//======================================================================
// sub_4E03B0
// entry 004e03b0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E03B0(_WORD *this)
{
  return *(this + 286);
}


//======================================================================
// sub_4E03D0
// entry 004e03d0  size 187  status ok
//======================================================================

__int16 __thiscall sub_4E03D0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 287);
    case 1:
      return (__int16)*(this + 287) / 2;
    case 2:
      v2 = *(this + 287);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 287);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8247);
      return 0;
  }
}


//======================================================================
// sub_4E0490
// entry 004e0490  size 49  status ok
//======================================================================

__int16 __thiscall sub_4E0490(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 288);
  else
    return *(this + 288);
}


//======================================================================
// sub_4E04D0
// entry 004e04d0  size 52  status ok
//======================================================================

__int16 __thiscall sub_4E04D0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 289) / 2;
  else
    return *(this + 289);
}


//======================================================================
// sub_4E0510
// entry 004e0510  size 234  status ok
//======================================================================

int __thiscall sub_4E0510(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 8270);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8271);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2576 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4E0600
// entry 004e0600  size 725  status ok
//======================================================================

int __thiscall sub_4E0600(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 8285);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8286);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 8287);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8288);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 2352;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4E08E0
// entry 004e08e0  size 725  status ok
//======================================================================

int __thiscall sub_4E08E0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 8316);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8317);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 8318);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8319);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 2464;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4E0BC0
// entry 004e0bc0  size 1107  status ok
//======================================================================

int __thiscall sub_4E0BC0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 8347);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8348);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 8349);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8350);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 2576 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2576 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 2576 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2576 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 2576 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 2352 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 2464 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 2576;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4E1020
// entry 004e1020  size 453  status ok
//======================================================================

double __thiscall sub_4E1020(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 8396);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8397);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 8398);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 8399);
  v5 = (double)*(__int16 *)(this + 530) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2352 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2352 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2464 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 534) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 534) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 534) + v5) / (v7 / (double)*(__int16 *)(this + 534) + 1.0);
}


//======================================================================
// sub_4E11F0
// entry 004e11f0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E11F0(_WORD *this)
{
  return *(this + 276);
}


//======================================================================
// sub_4E1210
// entry 004e1210  size 739  status ok
//======================================================================

__int16 __thiscall sub_4E1210(_WORD *this, __int16 a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int16 v16; // [esp+8h] [ebp-8h]
  __int16 v17; // [esp+Ch] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 8419);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 8420);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 279);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 278);
          else
            v5 = (__int16)*(this + 277);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 279);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 278);
          else
            v9 = (__int16)*(this + 277);
          v10 = v9 - sub_62FBF0(5);
          v17 = v10 - sub_62FBF0(5);
        }
        if ( v17 >= 1 )
          return v17;
        else
          return 1;
      case 3:
        if ( a2 == 1 )
        {
          v11 = (__int16)*(this + 279);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 278);
          else
            v13 = (__int16)*(this + 277);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8469);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 279);
  }
  else if ( a2 == 2 )
  {
    return *(this + 278);
  }
  else
  {
    return *(this + 277);
  }
}


//======================================================================
// sub_4E1500
// entry 004e1500  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E1500(_WORD *this)
{
  return *(this + 280);
}


//======================================================================
// sub_4E1520
// entry 004e1520  size 161  status ok
//======================================================================

__int16 __thiscall sub_4E1520(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 281);
    case 1:
      return 2 * *(this + 281);
    case 2:
      return (__int16)*(this + 281) / 2;
    case 3:
      return (__int16)*(this + 281) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8490);
  return 20;
}


//======================================================================
// sub_4E15D0
// entry 004e15d0  size 91  status ok
//======================================================================

__int16 __thiscall sub_4E15D0(_WORD *this, __int16 a2)
{
  if ( a2 < 0 )
    sub_5E9F20((char)"shHandIndex>=0", "..\\Casino\\PokerPlayer.cpp", 8497);
  if ( a2 >= 32 )
    sub_5E9F20((char)"shHandIndex<PokerHand::DRAWNUMBEROFINDICES", "..\\Casino\\PokerPlayer.cpp", 8498);
  return *(this + a2 + 290);
}


//======================================================================
// sub_4E1630
// entry 004e1630  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E1630(_WORD *this)
{
  return *(this + 322);
}


//======================================================================
// sub_4E1650
// entry 004e1650  size 226  status ok
//======================================================================

__int16 __thiscall sub_4E1650(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 323);
    case 1:
      v4 = *(this + 323);
      v5 = v4 - sub_62FBF0(50);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 323);
      return sub_62FBF0(30) + v2;
    case 3:
      v3 = *(this + 323);
      return sub_62FBF0(60) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 8525);
      return 0;
  }
}


//======================================================================
// sub_4E1740
// entry 004e1740  size 31782  status ok
//======================================================================

int __thiscall sub_4E1740(_WORD *this, __int16 a2)
{
  int result; // eax
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

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 8582);
  switch ( a2 )
  {
    case 1:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 348;
      *(this + 362) = 439;
      *(this + 363) = 463;
      *(this + 364) = 533;
      *(this + 365) = 615;
      *(this + 366) = 633;
      *(this + 367) = 682;
      *(this + 368) = 746;
      *(this + 369) = 769;
      *(this + 370) = 796;
      *(this + 371) = 832;
      *(this + 372) = 853;
      *(this + 373) = 864;
      *(this + 374) = 870;
      *(this + 375) = 872;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)15560 * 0.02127659574468085);
      *(this + 392) = (int)((double)15560 * 0.02127659574468085);
      *(this + 393) = (int)((double)15440 * 0.02127659574468085);
      *(this + 394) = (int)((double)14880 * 0.02127659574468085);
      *(this + 395) = (int)((double)11280 * 0.02127659574468085);
      *(this + 396) = (int)((double)6480 * 0.02127659574468085);
      *(this + 397) = (int)((double)2480 * 0.02127659574468085);
      *(this + 398) = (int)((double)560 * 0.02127659574468085);
      v3 = (int)((double)164480 * 0.0009250693802035153);
      *(this + 399) = v3;
      *(this + 400) = v3;
      *(this + 401) = v3;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)43200
                           + (double)38400
                           + (double)24000
                           + (double)9600
                           + (double)2240)
                          * 0.0009250693802035153);
      *(this + 403) = (int)(((double)172800 / 2.0 + (double)38400 + (double)24000 + (double)9600 + (double)2240)
                          * 0.0009250693802035153);
      *(this + 404) = (int)(((double)192000 / 2.0 + (double)24000 + (double)9600 + (double)2240) * 0.0009250693802035153);
      *(this + 405) = (int)(((double)144000 / 2.0 + (double)9600 + (double)2240) * 0.0009250693802035153);
      *(this + 406) = (int)(((double)67200 / 2.0 + (double)2240) * 0.0009250693802035153);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.0009250693802035153);
      v4 = (int)((double)2876160 * 0.00002775208140610546);
      *(this + 408) = v4;
      *(this + 409) = v4;
      *(this + 410) = v4;
      *(this + 411) = v4;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)691200
                           + (double)768000
                           + (double)576000
                           + (double)268800
                           + (double)71680)
                          * 0.00002775208140610546);
      *(this + 413) = (int)(((double)3456000 / 3.0 + (double)768000 + (double)576000 + (double)268800 + (double)71680)
                          * 0.00002775208140610546);
      *(this + 414) = (int)(((double)4608000 / 3.0 + (double)576000 + (double)268800 + (double)71680)
                          * 0.00002775208140610546);
      *(this + 415) = (int)(((double)4032000 / 3.0 + (double)268800 + (double)71680) * 0.00002775208140610546);
      *(this + 416) = (int)(((double)2150400 / 3.0 + (double)71680) * 0.00002775208140610546);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00002775208140610546);
      *(this + 324) = 5;
      *(this + 325) = 30;
      *(this + 326) = 50;
      *(this + 327) = 25;
      *(this + 328) = 60;
      *(this + 329) = 30;
      *(this + 330) = 75;
      *(this + 331) = 40;
      *(this + 332) = 50;
      *(this + 333) = 20;
      *(this + 334) = 10;
      *(this + 335) = 20;
      *(this + 336) = 40;
      *(this + 337) = 20;
      *(this + 338) = 5;
      *(this + 339) = 30;
      *(this + 341) = 75;
      *(this + 342) = 50;
      *(this + 343) = 25;
      *(this + 344) = 70;
      *(this + 345) = 60;
      *(this + 340) = 5;
      *(this + 346) = 6;
      *(this + 347) = 30;
      *(this + 348) = 30;
      result = (int)this;
      break;
    case 2:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 248;
      *(this + 362) = 339;
      *(this + 363) = 363;
      *(this + 364) = 533;
      *(this + 365) = 515;
      *(this + 366) = 533;
      *(this + 367) = 582;
      *(this + 368) = 646;
      *(this + 369) = 669;
      *(this + 370) = 746;
      *(this + 371) = 782;
      *(this + 372) = 803;
      *(this + 373) = 814;
      *(this + 374) = 820;
      *(this + 375) = 822;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)14520 * 0.02446808510638298);
      *(this + 392) = (int)((double)14520 * 0.02446808510638298);
      *(this + 393) = (int)((double)14400 * 0.02446808510638298);
      *(this + 394) = (int)((double)13840 * 0.02446808510638298);
      *(this + 395) = (int)((double)9040 * 0.02446808510638298);
      *(this + 396) = (int)((double)4240 * 0.02446808510638298);
      *(this + 397) = (int)((double)1240 * 0.02446808510638298);
      *(this + 398) = (int)((double)280 * 0.02446808510638298);
      v5 = (int)((double)144160 * 0.0008325624421831638);
      *(this + 399) = v5;
      *(this + 400) = v5;
      *(this + 401) = v5;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)43200
                           + (double)32000
                           + (double)16000
                           + (double)4800
                           + (double)1120)
                          * 0.0008325624421831638);
      *(this + 403) = (int)(((double)172800 / 2.0 + (double)32000 + (double)16000 + (double)4800 + (double)1120)
                          * 0.0008325624421831638);
      *(this + 404) = (int)(((double)160000 / 2.0 + (double)16000 + (double)4800 + (double)1120) * 0.0008325624421831638);
      *(this + 405) = (int)(((double)96000 / 2.0 + (double)4800 + (double)1120) * 0.0008325624421831638);
      *(this + 406) = (int)(((double)33600 / 2.0 + (double)1120) * 0.0008325624421831638);
      *(this + 407) = (int)((double)8960 / 2.0 * 0.0008325624421831638);
      v6 = (int)((double)2385920 * 0.00002518244423887347);
      *(this + 408) = v6;
      *(this + 409) = v6;
      *(this + 410) = v6;
      *(this + 411) = v6;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)691200
                           + (double)640000
                           + (double)384000
                           + (double)134400
                           + (double)35840)
                          * 0.00002518244423887347);
      *(this + 413) = (int)(((double)3456000 / 3.0 + (double)640000 + (double)384000 + (double)134400 + (double)35840)
                          * 0.00002518244423887347);
      *(this + 414) = (int)(((double)3840000 / 3.0 + (double)384000 + (double)134400 + (double)35840)
                          * 0.00002518244423887347);
      *(this + 415) = (int)(((double)2688000 / 3.0 + (double)134400 + (double)35840) * 0.00002518244423887347);
      *(this + 416) = (int)(((double)1075200 / 3.0 + (double)35840) * 0.00002518244423887347);
      *(this + 417) = (int)((double)322560 / 3.0 * 0.00002518244423887347);
      *(this + 324) = 2;
      *(this + 325) = 50;
      *(this + 326) = 70;
      *(this + 327) = 50;
      *(this + 328) = 105;
      *(this + 329) = 44;
      *(this + 330) = 150;
      *(this + 331) = 60;
      *(this + 332) = 70;
      *(this + 333) = 25;
      *(this + 334) = 10;
      *(this + 335) = 8;
      *(this + 348) = 18;
      *(this + 336) = 45;
      *(this + 337) = 30;
      *(this + 338) = 17;
      *(this + 339) = 25;
      *(this + 340) = 8;
      *(this + 341) = 90;
      *(this + 342) = 50;
      *(this + 343) = 30;
      *(this + 344) = 85;
      *(this + 345) = 80;
      *(this + 346) = 3;
      *(this + 347) = 70;
      result = (int)this;
      break;
    case 3:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 348;
      *(this + 362) = 439;
      *(this + 363) = 463;
      *(this + 364) = 533;
      *(this + 365) = 615;
      *(this + 366) = 633;
      *(this + 367) = 682;
      *(this + 368) = 746;
      *(this + 369) = 769;
      *(this + 370) = 796;
      *(this + 371) = 832;
      *(this + 372) = 853;
      *(this + 373) = 864;
      *(this + 374) = 870;
      *(this + 375) = 872;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)16760 * 0.02234042553191489);
      *(this + 392) = (int)((double)16760 * 0.02234042553191489);
      *(this + 393) = (int)((double)16640 * 0.02234042553191489);
      *(this + 394) = (int)((double)16480 * 0.02234042553191489);
      *(this + 395) = (int)((double)13480 * 0.02234042553191489);
      *(this + 396) = (int)((double)8680 * 0.02234042553191489);
      *(this + 397) = (int)((double)3680 * 0.02234042553191489);
      *(this + 398) = (int)((double)560 * 0.02234042553191489);
      v7 = (int)((double)186080 * 0.001017576318223867);
      *(this + 399) = v7;
      *(this + 400) = v7;
      *(this + 401) = v7;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)45600
                           + (double)44800
                           + (double)32000
                           + (double)14400
                           + (double)2240)
                          * 0.001017576318223867);
      *(this + 403) = (int)(((double)182400 / 2.0 + (double)44800 + (double)32000 + (double)14400 + (double)2240)
                          * 0.001017576318223867);
      *(this + 404) = (int)(((double)224000 / 2.0 + (double)32000 + (double)14400 + (double)2240) * 0.001017576318223867);
      *(this + 405) = (int)(((double)192000 / 2.0 + (double)14400 + (double)2240) * 0.001017576318223867);
      *(this + 406) = (int)(((double)100800 / 2.0 + (double)2240) * 0.001017576318223867);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.001017576318223867);
      v8 = (int)((double)3368960 * 0.00003083564600678385);
      *(this + 408) = v8;
      *(this + 409) = v8;
      *(this + 410) = v8;
      *(this + 411) = v8;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)729600
                           + (double)896000
                           + (double)768000
                           + (double)403200
                           + (double)71680)
                          * 0.00003083564600678385);
      *(this + 413) = (int)(((double)3648000 / 3.0 + (double)896000 + (double)768000 + (double)403200 + (double)71680)
                          * 0.00003083564600678385);
      *(this + 414) = (int)(((double)5376000 / 3.0 + (double)768000 + (double)403200 + (double)71680)
                          * 0.00003083564600678385);
      *(this + 415) = (int)(((double)5376000 / 3.0 + (double)403200 + (double)71680) * 0.00003083564600678385);
      *(this + 416) = (int)(((double)3225600 / 3.0 + (double)71680) * 0.00003083564600678385);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00003083564600678385);
      *(this + 324) = 8;
      *(this + 325) = 25;
      *(this + 326) = 40;
      *(this + 327) = 15;
      *(this + 328) = 45;
      *(this + 329) = 18;
      *(this + 330) = 60;
      *(this + 331) = 28;
      *(this + 332) = 35;
      *(this + 333) = 16;
      *(this + 334) = 7;
      *(this + 335) = 15;
      *(this + 336) = 30;
      *(this + 337) = 18;
      *(this + 338) = 4;
      *(this + 339) = 40;
      *(this + 340) = 2;
      *(this + 341) = 90;
      *(this + 342) = 60;
      *(this + 343) = 30;
      *(this + 344) = 50;
      *(this + 345) = 50;
      *(this + 346) = 11;
      *(this + 347) = 20;
      *(this + 348) = 43;
      result = (int)this;
      break;
    case 4:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 248;
      *(this + 362) = 339;
      *(this + 363) = 363;
      *(this + 364) = 533;
      *(this + 365) = 515;
      *(this + 366) = 533;
      *(this + 367) = 582;
      *(this + 368) = 646;
      *(this + 369) = 669;
      *(this + 370) = 746;
      *(this + 371) = 782;
      *(this + 372) = 803;
      *(this + 373) = 814;
      *(this + 374) = 820;
      *(this + 375) = 822;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)13720 * 0.02021276595744681);
      *(this + 392) = (int)((double)13720 * 0.02021276595744681);
      *(this + 393) = (int)((double)13600 * 0.02021276595744681);
      *(this + 394) = (int)((double)12240 * 0.02021276595744681);
      *(this + 395) = (int)((double)8040 * 0.02021276595744681);
      *(this + 396) = (int)((double)3240 * 0.02021276595744681);
      *(this + 397) = (int)((double)1240 * 0.02021276595744681);
      *(this + 398) = (int)((double)280 * 0.02021276595744681);
      v9 = (int)((double)132160 * 0.0008788159111933394);
      *(this + 399) = v9;
      *(this + 400) = v9;
      *(this + 401) = v9;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)38400
                           + (double)28800
                           + (double)12000
                           + (double)4800
                           + (double)1120)
                          * 0.0008788159111933394);
      *(this + 403) = (int)(((double)153600 / 2.0 + (double)28800 + (double)12000 + (double)4800 + (double)1120)
                          * 0.0008788159111933394);
      *(this + 404) = (int)(((double)144000 / 2.0 + (double)12000 + (double)4800 + (double)1120) * 0.0008788159111933394);
      *(this + 405) = (int)(((double)72000 / 2.0 + (double)4800 + (double)1120) * 0.0008788159111933394);
      *(this + 406) = (int)(((double)33600 / 2.0 + (double)1120) * 0.0008788159111933394);
      *(this + 407) = (int)((double)8960 / 2.0 * 0.0008788159111933394);
      v10 = (int)((double)2149120 * 0.00002621029910576626);
      *(this + 408) = v10;
      *(this + 409) = v10;
      *(this + 410) = v10;
      *(this + 411) = v10;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)614400
                           + (double)576000
                           + (double)288000
                           + (double)134400
                           + (double)35840)
                          * 0.00002621029910576626);
      *(this + 413) = (int)(((double)3072000 / 3.0 + (double)576000 + (double)288000 + (double)134400 + (double)35840)
                          * 0.00002621029910576626);
      *(this + 414) = (int)(((double)3456000 / 3.0 + (double)288000 + (double)134400 + (double)35840)
                          * 0.00002621029910576626);
      *(this + 415) = (int)(((double)2016000 / 3.0 + (double)134400 + (double)35840) * 0.00002621029910576626);
      *(this + 416) = (int)(((double)1075200 / 3.0 + (double)35840) * 0.00002621029910576626);
      *(this + 417) = (int)((double)322560 / 3.0 * 0.00002621029910576626);
      *(this + 324) = 10;
      *(this + 325) = 28;
      *(this + 326) = 35;
      *(this + 327) = 20;
      *(this + 328) = 55;
      *(this + 329) = 24;
      *(this + 330) = 80;
      *(this + 331) = 34;
      *(this + 332) = 45;
      *(this + 333) = 20;
      *(this + 334) = 10;
      *(this + 335) = 14;
      *(this + 336) = 38;
      *(this + 337) = 21;
      *(this + 338) = 5;
      *(this + 339) = 35;
      *(this + 340) = 4;
      *(this + 341) = 80;
      *(this + 342) = 60;
      *(this + 343) = 40;
      *(this + 344) = 60;
      *(this + 345) = 60;
      *(this + 346) = 10;
      *(this + 347) = 30;
      *(this + 348) = 35;
      result = (int)this;
      break;
    case 5:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 298;
      *(this + 362) = 389;
      *(this + 363) = 413;
      *(this + 364) = 533;
      *(this + 365) = 565;
      *(this + 366) = 583;
      *(this + 367) = 632;
      *(this + 368) = 696;
      *(this + 369) = 719;
      *(this + 370) = 771;
      *(this + 371) = 807;
      *(this + 372) = 828;
      *(this + 373) = 839;
      *(this + 374) = 845;
      *(this + 375) = 847;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)14360 * 0.02127659574468085);
      *(this + 392) = (int)((double)14360 * 0.02127659574468085);
      *(this + 393) = (int)((double)14240 * 0.02127659574468085);
      *(this + 394) = (int)((double)12880 * 0.02127659574468085);
      *(this + 395) = (int)((double)9880 * 0.02127659574468085);
      *(this + 396) = (int)((double)3480 * 0.02127659574468085);
      *(this + 397) = (int)((double)2480 * 0.02127659574468085);
      *(this + 398) = (int)((double)560 * 0.02127659574468085);
      v11 = (int)((double)144480 * 0.0009481961147086031);
      *(this + 399) = v11;
      *(this + 400) = v11;
      *(this + 401) = v11;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)38400
                           + (double)35200
                           + (double)12000
                           + (double)9600
                           + (double)2240)
                          * 0.0009481961147086031);
      *(this + 403) = (int)(((double)153600 / 2.0 + (double)35200 + (double)12000 + (double)9600 + (double)2240)
                          * 0.0009481961147086031);
      *(this + 404) = (int)(((double)176000 / 2.0 + (double)12000 + (double)9600 + (double)2240) * 0.0009481961147086031);
      *(this + 405) = (int)(((double)72000 / 2.0 + (double)9600 + (double)2240) * 0.0009481961147086031);
      *(this + 406) = (int)(((double)67200 / 2.0 + (double)2240) * 0.0009481961147086031);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.0009481961147086031);
      v12 = (int)((double)2447360 * 0.00002929386370644465);
      *(this + 408) = v12;
      *(this + 409) = v12;
      *(this + 410) = v12;
      *(this + 411) = v12;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)614400
                           + (double)704000
                           + (double)288000
                           + (double)268800
                           + (double)71680)
                          * 0.00002929386370644465);
      *(this + 413) = (int)(((double)3072000 / 3.0 + (double)704000 + (double)288000 + (double)268800 + (double)71680)
                          * 0.00002929386370644465);
      *(this + 414) = (int)(((double)4224000 / 3.0 + (double)288000 + (double)268800 + (double)71680)
                          * 0.00002929386370644465);
      *(this + 415) = (int)(((double)2016000 / 3.0 + (double)268800 + (double)71680) * 0.00002929386370644465);
      *(this + 416) = (int)(((double)2150400 / 3.0 + (double)71680) * 0.00002929386370644465);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00002929386370644465);
      *(this + 324) = 7;
      *(this + 325) = 35;
      *(this + 326) = 45;
      *(this + 327) = 35;
      *(this + 328) = 70;
      *(this + 329) = 34;
      *(this + 330) = 105;
      *(this + 331) = 48;
      *(this + 332) = 60;
      *(this + 333) = 25;
      *(this + 334) = 12;
      *(this + 335) = 35;
      *(this + 336) = 35;
      *(this + 337) = 27;
      *(this + 338) = 7;
      *(this + 339) = 25;
      *(this + 340) = 6;
      *(this + 341) = 90;
      *(this + 342) = 40;
      *(this + 343) = 20;
      *(this + 344) = 55;
      *(this + 345) = 70;
      *(this + 346) = 4;
      *(this + 347) = 40;
      *(this + 348) = 25;
      result = (int)this;
      break;
    case 6:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 248;
      *(this + 362) = 339;
      *(this + 363) = 363;
      *(this + 364) = 533;
      *(this + 365) = 515;
      *(this + 366) = 533;
      *(this + 367) = 582;
      *(this + 368) = 646;
      *(this + 369) = 669;
      *(this + 370) = 746;
      *(this + 371) = 782;
      *(this + 372) = 803;
      *(this + 373) = 814;
      *(this + 374) = 820;
      *(this + 375) = 822;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)13036 * 0.02127659574468085);
      *(this + 392) = (int)((double)13036 * 0.02127659574468085);
      *(this + 393) = (int)((double)12916 * 0.02127659574468085);
      *(this + 394) = (int)((double)10756 * 0.02127659574468085);
      *(this + 395) = (int)((double)7156 * 0.02127659574468085);
      *(this + 396) = (int)((double)3156 * 0.02127659574468085);
      *(this + 397) = (int)((double)816 * 0.02127659574468085);
      *(this + 398) = (int)((double)168 * 0.02127659574468085);
      v13 = (int)((double)122080 * 0.0005550416281221092);
      *(this + 399) = v13;
      *(this + 400) = v13;
      *(this + 401) = v13;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)33600
                           + (double)25600
                           + (double)12000
                           + (double)3168
                           + (double)672)
                          * 0.0005550416281221092);
      *(this + 403) = (int)(((double)134400 / 2.0 + (double)25600 + (double)12000 + (double)3168 + (double)672)
                          * 0.0005550416281221092);
      *(this + 404) = (int)(((double)128000 / 2.0 + (double)12000 + (double)3168 + (double)672) * 0.0005550416281221092);
      *(this + 405) = (int)(((double)72000 / 2.0 + (double)3168 + (double)672) * 0.0005550416281221092);
      *(this + 406) = (int)(((double)22176 / 2.0 + (double)672) * 0.0005550416281221092);
      *(this + 407) = (int)((double)5376 / 2.0 * 0.0005550416281221092);
      v14 = (int)((double)1948288 * 0.00002209887963819509);
      *(this + 408) = v14;
      *(this + 409) = v14;
      *(this + 410) = v14;
      *(this + 411) = v14;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)537600
                           + (double)512000
                           + (double)288000
                           + (double)88704
                           + (double)21504)
                          * 0.00002209887963819509);
      *(this + 413) = (int)(((double)2688000 / 3.0 + (double)512000 + (double)288000 + (double)88704 + (double)21504)
                          * 0.00002209887963819509);
      *(this + 414) = (int)(((double)3072000 / 3.0 + (double)288000 + (double)88704 + (double)21504)
                          * 0.00002209887963819509);
      *(this + 415) = (int)(((double)2016000 / 3.0 + (double)88704 + (double)21504) * 0.00002209887963819509);
      *(this + 416) = (int)(((double)709632 / 3.0 + (double)21504) * 0.00002209887963819509);
      *(this + 417) = (int)((double)193536 / 3.0 * 0.00002209887963819509);
      *(this + 324) = 0;
      *(this + 325) = 40;
      *(this + 326) = 65;
      *(this + 327) = 100;
      *(this + 328) = 105;
      *(this + 329) = 54;
      *(this + 330) = 150;
      *(this + 331) = 70;
      *(this + 332) = 80;
      *(this + 333) = 30;
      *(this + 334) = 15;
      *(this + 335) = 30;
      *(this + 336) = 46;
      *(this + 337) = 30;
      *(this + 338) = 15;
      *(this + 339) = 5;
      *(this + 340) = 8;
      *(this + 341) = 65;
      *(this + 342) = 35;
      *(this + 343) = 15;
      *(this + 344) = 75;
      *(this + 345) = 75;
      *(this + 346) = 2;
      *(this + 347) = 80;
      *(this + 348) = 12;
      result = (int)this;
      break;
    case 7:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 348;
      *(this + 362) = 439;
      *(this + 363) = 463;
      *(this + 364) = 533;
      *(this + 365) = 615;
      *(this + 366) = 633;
      *(this + 367) = 682;
      *(this + 368) = 746;
      *(this + 369) = 769;
      *(this + 370) = 796;
      *(this + 371) = 832;
      *(this + 372) = 853;
      *(this + 373) = 864;
      *(this + 374) = 870;
      *(this + 375) = 872;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)16560 * 0.02127659574468085);
      *(this + 392) = (int)((double)16560 * 0.02127659574468085);
      *(this + 393) = (int)((double)16440 * 0.02127659574468085);
      *(this + 394) = (int)((double)15880 * 0.02127659574468085);
      *(this + 395) = (int)((double)14080 * 0.02127659574468085);
      *(this + 396) = (int)((double)8480 * 0.02127659574468085);
      *(this + 397) = (int)((double)2480 * 0.02127659574468085);
      *(this + 398) = (int)((double)560 * 0.02127659574468085);
      v15 = (int)((double)182080 * 0.0009713228492136911);
      *(this + 399) = v15;
      *(this + 400) = v15;
      *(this + 401) = v15;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)43200
                           + (double)48000
                           + (double)32000
                           + (double)9600
                           + (double)2240)
                          * 0.0009713228492136911);
      *(this + 403) = (int)(((double)172800 / 2.0 + (double)48000 + (double)32000 + (double)9600 + (double)2240)
                          * 0.0009713228492136911);
      *(this + 404) = (int)(((double)240000 / 2.0 + (double)32000 + (double)9600 + (double)2240) * 0.0009713228492136911);
      *(this + 405) = (int)(((double)192000 / 2.0 + (double)9600 + (double)2240) * 0.0009713228492136911);
      *(this + 406) = (int)(((double)67200 / 2.0 + (double)2240) * 0.0009713228492136911);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.0009713228492136911);
      v16 = (int)((double)3260160 * 0.00002826600883955186);
      *(this + 408) = v16;
      *(this + 409) = v16;
      *(this + 410) = v16;
      *(this + 411) = v16;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)691200
                           + (double)960000
                           + (double)768000
                           + (double)268800
                           + (double)71680)
                          * 0.00002826600883955186);
      *(this + 413) = (int)(((double)3456000 / 3.0 + (double)960000 + (double)768000 + (double)268800 + (double)71680)
                          * 0.00002826600883955186);
      *(this + 414) = (int)(((double)5760000 / 3.0 + (double)768000 + (double)268800 + (double)71680)
                          * 0.00002826600883955186);
      *(this + 415) = (int)(((double)5376000 / 3.0 + (double)268800 + (double)71680) * 0.00002826600883955186);
      *(this + 416) = (int)(((double)2150400 / 3.0 + (double)71680) * 0.00002826600883955186);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00002826600883955186);
      *(this + 324) = 3;
      *(this + 325) = 30;
      *(this + 326) = 35;
      *(this + 327) = 25;
      *(this + 328) = 55;
      *(this + 329) = 16;
      *(this + 330) = 75;
      *(this + 331) = 22;
      *(this + 332) = 45;
      *(this + 333) = 22;
      *(this + 334) = 11;
      *(this + 335) = 50;
      *(this + 336) = 43;
      *(this + 337) = 23;
      *(this + 338) = 12;
      *(this + 339) = 40;
      *(this + 340) = 2;
      *(this + 341) = 60;
      *(this + 342) = 40;
      *(this + 343) = 20;
      *(this + 344) = 60;
      *(this + 345) = 40;
      *(this + 346) = 4;
      *(this + 347) = 65;
      *(this + 348) = 20;
      result = (int)this;
      break;
    case 8:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 348;
      *(this + 362) = 439;
      *(this + 363) = 463;
      *(this + 364) = 533;
      *(this + 365) = 615;
      *(this + 366) = 633;
      *(this + 367) = 682;
      *(this + 368) = 746;
      *(this + 369) = 769;
      *(this + 370) = 796;
      *(this + 371) = 832;
      *(this + 372) = 853;
      *(this + 373) = 864;
      *(this + 374) = 870;
      *(this + 375) = 872;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)15760 * 0.01808510638297872);
      *(this + 392) = (int)((double)15760 * 0.01808510638297872);
      *(this + 393) = (int)((double)15640 * 0.01808510638297872);
      *(this + 394) = (int)((double)15080 * 0.01808510638297872);
      *(this + 395) = (int)((double)12680 * 0.01808510638297872);
      *(this + 396) = (int)((double)5480 * 0.01808510638297872);
      *(this + 397) = (int)((double)2480 * 0.01808510638297872);
      *(this + 398) = (int)((double)560 * 0.01808510638297872);
      v17 = (int)((double)166880 * 0.0009250693802035153);
      *(this + 399) = v17;
      *(this + 400) = v17;
      *(this + 401) = v17;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)43200
                           + (double)44800
                           + (double)20000
                           + (double)9600
                           + (double)2240)
                          * 0.0009250693802035153);
      *(this + 403) = (int)(((double)172800 / 2.0 + (double)44800 + (double)20000 + (double)9600 + (double)2240)
                          * 0.0009250693802035153);
      *(this + 404) = (int)(((double)224000 / 2.0 + (double)20000 + (double)9600 + (double)2240) * 0.0009250693802035153);
      *(this + 405) = (int)(((double)120000 / 2.0 + (double)9600 + (double)2240) * 0.0009250693802035153);
      *(this + 406) = (int)(((double)67200 / 2.0 + (double)2240) * 0.0009250693802035153);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.0009250693802035153);
      v18 = (int)((double)2908160 * 0.00002775208140610546);
      *(this + 408) = v18;
      *(this + 409) = v18;
      *(this + 410) = v18;
      *(this + 411) = v18;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)691200
                           + (double)896000
                           + (double)480000
                           + (double)268800
                           + (double)71680)
                          * 0.00002775208140610546);
      *(this + 413) = (int)(((double)3456000 / 3.0 + (double)896000 + (double)480000 + (double)268800 + (double)71680)
                          * 0.00002775208140610546);
      *(this + 414) = (int)(((double)5376000 / 3.0 + (double)480000 + (double)268800 + (double)71680)
                          * 0.00002775208140610546);
      *(this + 415) = (int)(((double)3360000 / 3.0 + (double)268800 + (double)71680) * 0.00002775208140610546);
      *(this + 416) = (int)(((double)2150400 / 3.0 + (double)71680) * 0.00002775208140610546);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00002775208140610546);
      *(this + 324) = 5;
      *(this + 325) = 28;
      *(this + 326) = 46;
      *(this + 327) = 22;
      *(this + 328) = 75;
      *(this + 329) = 34;
      *(this + 330) = 105;
      *(this + 331) = 44;
      *(this + 332) = 48;
      *(this + 333) = 20;
      *(this + 334) = 10;
      *(this + 335) = 20;
      *(this + 336) = 41;
      *(this + 337) = 23;
      *(this + 338) = 6;
      *(this + 339) = 30;
      *(this + 341) = 75;
      *(this + 342) = 50;
      *(this + 343) = 30;
      *(this + 344) = 65;
      *(this + 345) = 50;
      *(this + 340) = 5;
      *(this + 346) = 12;
      *(this + 347) = 15;
      *(this + 348) = 40;
      result = (int)this;
      break;
    case 9:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 348;
      *(this + 362) = 439;
      *(this + 363) = 463;
      *(this + 364) = 533;
      *(this + 365) = 615;
      *(this + 366) = 633;
      *(this + 367) = 682;
      *(this + 368) = 746;
      *(this + 369) = 769;
      *(this + 370) = 796;
      *(this + 371) = 832;
      *(this + 372) = 853;
      *(this + 373) = 864;
      *(this + 374) = 870;
      *(this + 375) = 872;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)16360 * 0.01914893617021277);
      *(this + 392) = (int)((double)16360 * 0.01914893617021277);
      *(this + 393) = (int)((double)16240 * 0.01914893617021277);
      *(this + 394) = (int)((double)15680 * 0.01914893617021277);
      *(this + 395) = (int)((double)13880 * 0.01914893617021277);
      *(this + 396) = (int)((double)7480 * 0.01914893617021277);
      *(this + 397) = (int)((double)2480 * 0.01914893617021277);
      *(this + 398) = (int)((double)560 * 0.01914893617021277);
      v19 = (int)((double)178080 * 0.0008556891766882517);
      *(this + 399) = v19;
      *(this + 400) = v19;
      *(this + 401) = v19;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)43200
                           + (double)48000
                           + (double)28000
                           + (double)9600
                           + (double)2240)
                          * 0.0008556891766882517);
      *(this + 403) = (int)(((double)172800 / 2.0 + (double)48000 + (double)28000 + (double)9600 + (double)2240)
                          * 0.0008556891766882517);
      *(this + 404) = (int)(((double)240000 / 2.0 + (double)28000 + (double)9600 + (double)2240) * 0.0008556891766882517);
      *(this + 405) = (int)(((double)168000 / 2.0 + (double)9600 + (double)2240) * 0.0008556891766882517);
      *(this + 406) = (int)(((double)67200 / 2.0 + (double)2240) * 0.0008556891766882517);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.0008556891766882517);
      v20 = (int)((double)3164160 * 0.00002775208140610546);
      *(this + 408) = v20;
      *(this + 409) = v20;
      *(this + 410) = v20;
      *(this + 411) = v20;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)691200
                           + (double)960000
                           + (double)672000
                           + (double)268800
                           + (double)71680)
                          * 0.00002775208140610546);
      *(this + 413) = (int)(((double)3456000 / 3.0 + (double)960000 + (double)672000 + (double)268800 + (double)71680)
                          * 0.00002775208140610546);
      *(this + 414) = (int)(((double)5760000 / 3.0 + (double)672000 + (double)268800 + (double)71680)
                          * 0.00002775208140610546);
      *(this + 415) = (int)(((double)4704000 / 3.0 + (double)268800 + (double)71680) * 0.00002775208140610546);
      *(this + 416) = (int)(((double)2150400 / 3.0 + (double)71680) * 0.00002775208140610546);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00002775208140610546);
      *(this + 324) = 8;
      *(this + 325) = 30;
      *(this + 326) = 50;
      *(this + 327) = 25;
      *(this + 328) = 45;
      *(this + 329) = 20;
      *(this + 330) = 60;
      *(this + 331) = 32;
      *(this + 332) = 50;
      *(this + 333) = 20;
      *(this + 334) = 10;
      *(this + 335) = 20;
      *(this + 336) = 41;
      *(this + 337) = 26;
      *(this + 338) = 8;
      *(this + 339) = 30;
      *(this + 341) = 75;
      *(this + 342) = 50;
      *(this + 343) = 35;
      *(this + 344) = 60;
      *(this + 345) = 40;
      *(this + 340) = 5;
      *(this + 346) = 6;
      *(this + 347) = 30;
      *(this + 348) = 25;
      result = (int)this;
      break;
    case 10:
      *(this + 349) = 15;
      *(this + 350) = 51;
      *(this + 351) = 80;
      *(this + 352) = 97;
      *(this + 353) = 114;
      *(this + 354) = 132;
      *(this + 355) = 152;
      *(this + 356) = 172;
      *(this + 357) = 193;
      *(this + 358) = 216;
      *(this + 359) = 240;
      *(this + 360) = 265;
      *(this + 361) = 348;
      *(this + 362) = 439;
      *(this + 363) = 463;
      *(this + 364) = 533;
      *(this + 365) = 615;
      *(this + 366) = 633;
      *(this + 367) = 682;
      *(this + 368) = 746;
      *(this + 369) = 769;
      *(this + 370) = 796;
      *(this + 371) = 832;
      *(this + 372) = 853;
      *(this + 373) = 864;
      *(this + 374) = 870;
      *(this + 375) = 872;
      *(this + 376) = 889;
      *(this + 377) = 914;
      *(this + 378) = 928;
      *(this + 379) = 934;
      *(this + 380) = 936;
      *(this + 381) = 948;
      *(this + 382) = 963;
      *(this + 383) = 971;
      *(this + 384) = 974;
      *(this + 385) = 980;
      *(this + 386) = 988;
      *(this + 387) = 991;
      *(this + 388) = 994;
      *(this + 389) = 997;
      *(this + 390) = 1000;
      *(this + 391) = (int)((double)16560 * 0.02340425531914894);
      *(this + 392) = (int)((double)16560 * 0.02340425531914894);
      *(this + 393) = (int)((double)16440 * 0.02340425531914894);
      *(this + 394) = (int)((double)15880 * 0.02340425531914894);
      *(this + 395) = (int)((double)14080 * 0.02340425531914894);
      *(this + 396) = (int)((double)8480 * 0.02340425531914894);
      *(this + 397) = (int)((double)2480 * 0.02340425531914894);
      *(this + 398) = (int)((double)560 * 0.02340425531914894);
      v21 = (int)((double)182080 * 0.001040703052728955);
      *(this + 399) = v21;
      *(this + 400) = v21;
      *(this + 401) = v21;
      *(this + 402) = (int)(((double)93120 / 2.0
                           + (double)43200
                           + (double)48000
                           + (double)32000
                           + (double)9600
                           + (double)2240)
                          * 0.001040703052728955);
      *(this + 403) = (int)(((double)172800 / 2.0 + (double)48000 + (double)32000 + (double)9600 + (double)2240)
                          * 0.001040703052728955);
      *(this + 404) = (int)(((double)240000 / 2.0 + (double)32000 + (double)9600 + (double)2240) * 0.001040703052728955);
      *(this + 405) = (int)(((double)192000 / 2.0 + (double)9600 + (double)2240) * 0.001040703052728955);
      *(this + 406) = (int)(((double)67200 / 2.0 + (double)2240) * 0.001040703052728955);
      *(this + 407) = (int)((double)17920 / 2.0 * 0.001040703052728955);
      v22 = (int)((double)3260160 * 0.00002826600883955186);
      *(this + 408) = v22;
      *(this + 409) = v22;
      *(this + 410) = v22;
      *(this + 411) = v22;
      *(this + 412) = (int)(((double)1489920 / 3.0
                           + (double)691200
                           + (double)960000
                           + (double)768000
                           + (double)268800
                           + (double)71680)
                          * 0.00002826600883955186);
      *(this + 413) = (int)(((double)3456000 / 3.0 + (double)960000 + (double)768000 + (double)268800 + (double)71680)
                          * 0.00002826600883955186);
      *(this + 414) = (int)(((double)5760000 / 3.0 + (double)768000 + (double)268800 + (double)71680)
                          * 0.00002826600883955186);
      *(this + 415) = (int)(((double)5376000 / 3.0 + (double)268800 + (double)71680) * 0.00002826600883955186);
      *(this + 416) = (int)(((double)2150400 / 3.0 + (double)71680) * 0.00002826600883955186);
      *(this + 417) = (int)((double)645120 / 3.0 * 0.00002826600883955186);
      *(this + 324) = 7;
      *(this + 325) = 25;
      *(this + 326) = 40;
      *(this + 327) = 18;
      *(this + 328) = 50;
      *(this + 329) = 22;
      *(this + 330) = 75;
      *(this + 331) = 30;
      *(this + 332) = 40;
      *(this + 333) = 20;
      *(this + 334) = 10;
      *(this + 335) = 17;
      *(this + 336) = 32;
      *(this + 337) = 21;
      *(this + 338) = 5;
      *(this + 339) = 40;
      *(this + 340) = 3;
      *(this + 341) = 90;
      *(this + 342) = 60;
      *(this + 343) = 30;
      *(this + 344) = 50;
      *(this + 345) = 60;
      *(this + 346) = 10;
      *(this + 347) = 20;
      *(this + 348) = 40;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4E9390
// entry 004e9390  size 226  status ok
//======================================================================

__int16 __thiscall sub_4E9390(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 324);
    case 1:
      v4 = *(this + 324);
      v5 = v4 - sub_62FBF0(5);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 324);
      return sub_62FBF0(3) + v2;
    case 3:
      v3 = *(this + 324);
      return sub_62FBF0(6) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9686);
      return 0;
  }
}


//======================================================================
// sub_4E9480
// entry 004e9480  size 35  status ok
//======================================================================

double __thiscall sub_4E9480(__int16 *this)
{
  return (double)*(this + 326) / 100.0;
}


//======================================================================
// sub_4E94B0
// entry 004e94b0  size 223  status ok
//======================================================================

double __thiscall sub_4E94B0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 328) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 328) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 328) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 328) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9707);
  return 0.0;
}


//======================================================================
// sub_4E9590
// entry 004e9590  size 223  status ok
//======================================================================

double __thiscall sub_4E9590(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 329) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 329) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 329) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 329) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9723);
  return 0.0;
}


//======================================================================
// sub_4E9670
// entry 004e9670  size 223  status ok
//======================================================================

double __thiscall sub_4E9670(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 330) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 330) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 330) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 330) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9739);
  return 0.0;
}


//======================================================================
// sub_4E9750
// entry 004e9750  size 223  status ok
//======================================================================

double __thiscall sub_4E9750(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 331) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 331) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 331) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 331) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9755);
  return 0.0;
}


//======================================================================
// sub_4E9830
// entry 004e9830  size 223  status ok
//======================================================================

double __thiscall sub_4E9830(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 332) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 332) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 332) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 332) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9771);
  return 0.0;
}


//======================================================================
// sub_4E9910
// entry 004e9910  size 223  status ok
//======================================================================

double __thiscall sub_4E9910(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 333) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 333) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 333) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 333) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9787);
  return 0.0;
}


//======================================================================
// sub_4E99F0
// entry 004e99f0  size 223  status ok
//======================================================================

double __thiscall sub_4E99F0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 334) * dbl_71EDC8 / 100.0;
    case 1:
      return (double)(__int16)*(this + 334) * dbl_71EDC8 / 80.0;
    case 2:
      return (double)(__int16)*(this + 334) * dbl_71EDC8 / 120.0;
    case 3:
      return (double)(__int16)*(this + 334) * dbl_71EDC8 / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9803);
  return 0.0;
}


//======================================================================
// sub_4E9AD0
// entry 004e9ad0  size 514  status ok
//======================================================================

__int16 __thiscall sub_4E9AD0(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 9810);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 9811);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 343) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 342);
        else
          v3 = (__int16)*(this + 341);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 343);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 342);
          else
            v5 = *(this + 341);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 343);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 342);
          else
            v7 = *(this + 341);
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
    LOWORD(v2) = *(this + 343);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 342);
  }
  else
  {
    LOWORD(v2) = *(this + 341);
  }
  return v2;
}


//======================================================================
// sub_4E9CE0
// entry 004e9ce0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E9CE0(_WORD *this)
{
  return *(this + 344);
}


//======================================================================
// sub_4E9D00
// entry 004e9d00  size 21  status ok
//======================================================================

__int16 __thiscall sub_4E9D00(_WORD *this)
{
  return *(this + 345);
}


//======================================================================
// sub_4E9D20
// entry 004e9d20  size 187  status ok
//======================================================================

__int16 __thiscall sub_4E9D20(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 346);
    case 1:
      return (__int16)*(this + 346) / 2;
    case 2:
      v2 = *(this + 346);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 346);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 9877);
      return 0;
  }
}


//======================================================================
// sub_4E9DE0
// entry 004e9de0  size 49  status ok
//======================================================================

__int16 __thiscall sub_4E9DE0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 347);
  else
    return *(this + 347);
}


//======================================================================
// sub_4E9E20
// entry 004e9e20  size 61  status ok
//======================================================================

int __thiscall sub_4E9E20(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 348) / 4;
  else
    return (__int16)*(this + 348) / 2;
}


//======================================================================
// sub_4E9E60
// entry 004e9e60  size 234  status ok
//======================================================================

int __thiscall sub_4E9E60(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 9900);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 9901);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2632 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2744 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2856 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4EA970
// entry 004ea970  size 453  status ok
//======================================================================

double __thiscall sub_4EA970(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 10026);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10027);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 10028);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10029);
  v5 = (double)*(__int16 *)(this + 650) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2632 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2632 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2744 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 654) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 654) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 654) + v5) / (v7 / (double)*(__int16 *)(this + 654) + 1.0);
}


//======================================================================
// sub_4EAB40
// entry 004eab40  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EAB40(_WORD *this)
{
  return *(this + 335);
}


//======================================================================
// sub_4EAB60
// entry 004eab60  size 739  status ok
//======================================================================

__int16 __thiscall sub_4EAB60(_WORD *this, __int16 a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  __int16 v16; // [esp+8h] [ebp-8h]
  __int16 v17; // [esp+Ch] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 10049);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 10050);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 338);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 337);
          else
            v5 = (__int16)*(this + 336);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 338);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 337);
          else
            v9 = (__int16)*(this + 336);
          v10 = v9 - sub_62FBF0(5);
          v17 = v10 - sub_62FBF0(5);
        }
        if ( v17 >= 1 )
          return v17;
        else
          return 1;
      case 3:
        if ( a2 == 1 )
        {
          v11 = (__int16)*(this + 338);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 337);
          else
            v13 = (__int16)*(this + 336);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10099);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 338);
  }
  else if ( a2 == 2 )
  {
    return *(this + 337);
  }
  else
  {
    return *(this + 336);
  }
}


//======================================================================
// sub_4EAE50
// entry 004eae50  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EAE50(_WORD *this)
{
  return *(this + 339);
}


//======================================================================
// sub_4EAE70
// entry 004eae70  size 161  status ok
//======================================================================

__int16 __thiscall sub_4EAE70(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 340);
    case 1:
      return 2 * *(this + 340);
    case 2:
      return (__int16)*(this + 340) / 2;
    case 3:
      return (__int16)*(this + 340) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10120);
  return 20;
}


//======================================================================
// sub_4EAF20
// entry 004eaf20  size 91  status ok
//======================================================================

__int16 __thiscall sub_4EAF20(_WORD *this, __int16 a2)
{
  if ( a2 < 0 )
    sub_5E9F20((char)"shHandIndex>=0", "..\\Casino\\PokerPlayer.cpp", 10127);
  if ( a2 >= 69 )
    sub_5E9F20((char)"shHandIndex<PokerHand::LOWBALLNUMBEROFINDICES", "..\\Casino\\PokerPlayer.cpp", 10128);
  return *(this + a2 + 349);
}


//======================================================================
// sub_4EAF80
// entry 004eaf80  size 2801  status ok
//======================================================================

int __thiscall sub_4EAF80(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 10139);
  switch ( a2 )
  {
    case 1:
      *(this + 418) = 80;
      *(this + 419) = 100;
      *(this + 420) = 50;
      *(this + 421) = 10;
      *(this + 422) = 3;
      *(this + 423) = 30;
      *(this + 424) = 8;
      *(this + 425) = 20;
      *(this + 426) = 40;
      *(this + 427) = 25;
      *(this + 428) = 10;
      *(this + 429) = 30;
      *(this + 431) = 75;
      *(this + 432) = 50;
      *(this + 433) = 25;
      *(this + 434) = 70;
      *(this + 435) = 40;
      *(this + 430) = 5;
      *(this + 436) = 3;
      *(this + 437) = 3;
      *(this + 438) = 30;
      *(this + 439) = 4;
      result = (int)this;
      break;
    case 2:
      *(this + 418) = 90;
      *(this + 419) = 120;
      *(this + 420) = 75;
      *(this + 421) = 20;
      *(this + 422) = 6;
      *(this + 423) = 60;
      *(this + 424) = 18;
      *(this + 425) = 8;
      *(this + 426) = 45;
      *(this + 427) = 30;
      *(this + 428) = 15;
      *(this + 429) = 10;
      *(this + 430) = 7;
      *(this + 431) = 70;
      *(this + 432) = 45;
      *(this + 433) = 20;
      *(this + 434) = 80;
      *(this + 435) = 65;
      *(this + 436) = 1;
      *(this + 437) = 8;
      *(this + 438) = 18;
      *(this + 439) = 6;
      result = (int)this;
      break;
    case 3:
      *(this + 418) = 50;
      *(this + 419) = 80;
      *(this + 420) = 35;
      *(this + 421) = 7;
      *(this + 422) = 4;
      *(this + 423) = 20;
      *(this + 424) = 12;
      *(this + 425) = 15;
      *(this + 426) = 25;
      *(this + 427) = 14;
      *(this + 428) = 5;
      *(this + 429) = 40;
      *(this + 430) = 2;
      *(this + 431) = 90;
      *(this + 432) = 70;
      *(this + 433) = 50;
      *(this + 434) = 50;
      *(this + 435) = 30;
      *(this + 436) = 6;
      *(this + 437) = 2;
      *(this + 438) = 45;
      *(this + 439) = 3;
      result = (int)this;
      break;
    case 4:
      *(this + 418) = 60;
      *(this + 419) = 85;
      *(this + 420) = 40;
      *(this + 421) = 11;
      *(this + 422) = 5;
      *(this + 423) = 33;
      *(this + 424) = 15;
      *(this + 425) = 14;
      *(this + 426) = 43;
      *(this + 427) = 28;
      *(this + 428) = 12;
      *(this + 429) = 35;
      *(this + 430) = 4;
      *(this + 431) = 85;
      *(this + 432) = 65;
      *(this + 433) = 45;
      *(this + 434) = 60;
      *(this + 435) = 40;
      *(this + 436) = 5;
      *(this + 437) = 3;
      *(this + 438) = 35;
      *(this + 439) = 5;
      result = (int)this;
      break;
    case 5:
      *(this + 418) = 70;
      *(this + 419) = 80;
      *(this + 420) = 55;
      *(this + 421) = 15;
      *(this + 422) = 2;
      *(this + 423) = 45;
      *(this + 424) = 5;
      *(this + 425) = 35;
      *(this + 426) = 35;
      *(this + 427) = 25;
      *(this + 428) = 15;
      *(this + 429) = 25;
      *(this + 430) = 6;
      *(this + 431) = 90;
      *(this + 432) = 60;
      *(this + 433) = 30;
      *(this + 434) = 65;
      *(this + 435) = 55;
      *(this + 436) = 2;
      *(this + 437) = 5;
      *(this + 438) = 25;
      *(this + 439) = 3;
      result = (int)this;
      break;
    case 6:
      *(this + 418) = 85;
      *(this + 419) = 130;
      *(this + 420) = 90;
      *(this + 421) = 20;
      *(this + 422) = 10;
      *(this + 423) = 60;
      *(this + 424) = 30;
      *(this + 425) = 30;
      *(this + 426) = 45;
      *(this + 427) = 30;
      *(this + 428) = 15;
      *(this + 429) = 5;
      *(this + 430) = 8;
      *(this + 431) = 60;
      *(this + 432) = 40;
      *(this + 433) = 15;
      *(this + 434) = 85;
      *(this + 435) = 70;
      *(this + 436) = 1;
      *(this + 437) = 10;
      *(this + 438) = 12;
      *(this + 439) = 8;
      result = (int)this;
      break;
    case 7:
      *(this + 418) = 80;
      *(this + 419) = 105;
      *(this + 420) = 65;
      *(this + 421) = 8;
      *(this + 422) = 2;
      *(this + 423) = 23;
      *(this + 424) = 5;
      *(this + 425) = 50;
      *(this + 426) = 40;
      *(this + 427) = 25;
      *(this + 428) = 10;
      *(this + 429) = 40;
      *(this + 430) = 2;
      *(this + 431) = 60;
      *(this + 432) = 40;
      *(this + 433) = 20;
      *(this + 434) = 80;
      *(this + 435) = 25;
      *(this + 436) = 2;
      *(this + 437) = 7;
      *(this + 438) = 20;
      *(this + 439) = 7;
      result = (int)this;
      break;
    case 8:
      *(this + 418) = 80;
      *(this + 419) = 100;
      *(this + 420) = 45;
      *(this + 421) = 10;
      *(this + 422) = 3;
      *(this + 423) = 30;
      *(this + 424) = 8;
      *(this + 425) = 20;
      *(this + 426) = 40;
      *(this + 427) = 25;
      *(this + 428) = 12;
      *(this + 429) = 30;
      *(this + 431) = 75;
      *(this + 432) = 50;
      *(this + 433) = 25;
      *(this + 434) = 70;
      *(this + 435) = 40;
      *(this + 430) = 5;
      *(this + 436) = 7;
      *(this + 437) = 2;
      *(this + 438) = 50;
      *(this + 439) = 4;
      result = (int)this;
      break;
    case 9:
      *(this + 418) = 80;
      *(this + 419) = 100;
      *(this + 420) = 50;
      *(this + 421) = 10;
      *(this + 422) = 3;
      *(this + 423) = 27;
      *(this + 424) = 7;
      *(this + 425) = 20;
      *(this + 426) = 40;
      *(this + 427) = 25;
      *(this + 428) = 10;
      *(this + 429) = 30;
      *(this + 431) = 75;
      *(this + 432) = 50;
      *(this + 433) = 25;
      *(this + 434) = 70;
      *(this + 435) = 40;
      *(this + 430) = 5;
      *(this + 436) = 3;
      *(this + 437) = 2;
      *(this + 438) = 35;
      *(this + 439) = 2;
      result = (int)this;
      break;
    case 10:
      *(this + 418) = 65;
      *(this + 419) = 90;
      *(this + 420) = 41;
      *(this + 421) = 8;
      *(this + 422) = 4;
      *(this + 423) = 25;
      *(this + 424) = 10;
      *(this + 425) = 17;
      *(this + 426) = 28;
      *(this + 427) = 17;
      *(this + 428) = 7;
      *(this + 429) = 35;
      *(this + 431) = 83;
      *(this + 432) = 60;
      *(this + 433) = 38;
      *(this + 434) = 60;
      *(this + 435) = 35;
      *(this + 430) = 3;
      *(this + 436) = 5;
      *(this + 437) = 2;
      *(this + 438) = 38;
      *(this + 439) = 3;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4EBAA0
// entry 004ebaa0  size 35  status ok
//======================================================================

double __thiscall sub_4EBAA0(__int16 *this)
{
  return (double)*(this + 419) / 100.0;
}


//======================================================================
// sub_4EBAD0
// entry 004ebad0  size 199  status ok
//======================================================================

double __thiscall sub_4EBAD0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 421) / 100.0;
    case 1:
      return (double)(__int16)*(this + 421) / 80.0;
    case 2:
      return (double)(__int16)*(this + 421) / 120.0;
    case 3:
      return (double)(__int16)*(this + 421) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10411);
  return 0.0;
}


//======================================================================
// sub_4EBBA0
// entry 004ebba0  size 199  status ok
//======================================================================

double __thiscall sub_4EBBA0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 422) / 100.0;
    case 1:
      return (double)(__int16)*(this + 422) / 80.0;
    case 2:
      return (double)(__int16)*(this + 422) / 120.0;
    case 3:
      return (double)(__int16)*(this + 422) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10427);
  return 0.0;
}


//======================================================================
// sub_4EBC70
// entry 004ebc70  size 199  status ok
//======================================================================

double __thiscall sub_4EBC70(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 423) / 100.0;
    case 1:
      return (double)(__int16)*(this + 423) / 80.0;
    case 2:
      return (double)(__int16)*(this + 423) / 120.0;
    case 3:
      return (double)(__int16)*(this + 423) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10443);
  return 0.0;
}


//======================================================================
// sub_4EBD40
// entry 004ebd40  size 199  status ok
//======================================================================

double __thiscall sub_4EBD40(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 424) / 100.0;
    case 1:
      return (double)(__int16)*(this + 424) / 80.0;
    case 2:
      return (double)(__int16)*(this + 424) / 120.0;
    case 3:
      return (double)(__int16)*(this + 424) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10459);
  return 0.0;
}


//======================================================================
// sub_4EBE10
// entry 004ebe10  size 514  status ok
//======================================================================

__int16 __thiscall sub_4EBE10(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 10466);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 10467);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 433) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 432);
        else
          v3 = (__int16)*(this + 431);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 433);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 432);
          else
            v5 = *(this + 431);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 433);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 432);
          else
            v7 = *(this + 431);
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
    LOWORD(v2) = *(this + 433);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 432);
  }
  else
  {
    LOWORD(v2) = *(this + 431);
  }
  return v2;
}


//======================================================================
// sub_4EC020
// entry 004ec020  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EC020(_WORD *this)
{
  return *(this + 434);
}


//======================================================================
// sub_4EC040
// entry 004ec040  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EC040(_WORD *this)
{
  return *(this + 435);
}


//======================================================================
// sub_4EC060
// entry 004ec060  size 187  status ok
//======================================================================

__int16 __thiscall sub_4EC060(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 436);
    case 1:
      return (__int16)*(this + 436) / 2;
    case 2:
      v2 = *(this + 436);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 436);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10533);
      return 0;
  }
}


