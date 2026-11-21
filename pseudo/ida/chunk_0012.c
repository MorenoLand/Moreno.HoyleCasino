//======================================================================
// sub_4EC120
// entry 004ec120  size 49  status ok
//======================================================================

__int16 __thiscall sub_4EC120(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 437);
  else
    return *(this + 437);
}


//======================================================================
// sub_4EC160
// entry 004ec160  size 52  status ok
//======================================================================

__int16 __thiscall sub_4EC160(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 438) / 2;
  else
    return *(this + 438);
}


//======================================================================
// sub_4EC1A0
// entry 004ec1a0  size 234  status ok
//======================================================================

int __thiscall sub_4EC1A0(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 10556);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10557);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2016 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4EC290
// entry 004ec290  size 725  status ok
//======================================================================

int __thiscall sub_4EC290(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 10571);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10572);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 10573);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10574);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1792;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4EC570
// entry 004ec570  size 725  status ok
//======================================================================

int __thiscall sub_4EC570(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 10602);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10603);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 10604);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10605);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 1904;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4EC850
// entry 004ec850  size 1107  status ok
//======================================================================

int __thiscall sub_4EC850(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 10633);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10634);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 10635);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10636);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 2016 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2016 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 2016 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 2016 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 2016 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 1792 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 1904 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 2016;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4ECCB0
// entry 004eccb0  size 453  status ok
//======================================================================

double __thiscall sub_4ECCB0(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 10682);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10683);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 10684);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 10685);
  v5 = (double)*(__int16 *)(this + 836) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1792 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1792 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 1904 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 840) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 840) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 840) + v5) / (v7 / (double)*(__int16 *)(this + 840) + 1.0);
}


//======================================================================
// sub_4ECE80
// entry 004ece80  size 21  status ok
//======================================================================

__int16 __thiscall sub_4ECE80(_WORD *this)
{
  return *(this + 425);
}


//======================================================================
// sub_4ECEA0
// entry 004ecea0  size 739  status ok
//======================================================================

__int16 __thiscall sub_4ECEA0(_WORD *this, __int16 a2)
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
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 10705);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 10706);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 428);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 427);
          else
            v5 = (__int16)*(this + 426);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 428);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 427);
          else
            v9 = (__int16)*(this + 426);
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
          v11 = (__int16)*(this + 428);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 427);
          else
            v13 = (__int16)*(this + 426);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10755);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 428);
  }
  else if ( a2 == 2 )
  {
    return *(this + 427);
  }
  else
  {
    return *(this + 426);
  }
}


//======================================================================
// sub_4ED190
// entry 004ed190  size 21  status ok
//======================================================================

__int16 __thiscall sub_4ED190(_WORD *this)
{
  return *(this + 429);
}


//======================================================================
// sub_4ED1B0
// entry 004ed1b0  size 161  status ok
//======================================================================

__int16 __thiscall sub_4ED1B0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 430);
    case 1:
      return 2 * *(this + 430);
    case 2:
      return (__int16)*(this + 430) / 2;
    case 3:
      return (__int16)*(this + 430) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10776);
  return 20;
}


//======================================================================
// sub_4ED260
// entry 004ed260  size 161  status ok
//======================================================================

__int16 __thiscall sub_4ED260(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 439);
    case 1:
      return 2 * *(this + 439);
    case 2:
      return (__int16)*(this + 439) / 2;
    case 3:
      return (__int16)*(this + 439) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 10792);
  return 10;
}


//======================================================================
// sub_4ED310
// entry 004ed310  size 2921  status ok
//======================================================================

int __thiscall sub_4ED310(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 10803);
  switch ( a2 )
  {
    case 1:
      *(this + 440) = 5;
      *(this + 441) = 30;
      *(this + 442) = 50;
      *(this + 443) = 25;
      *(this + 444) = 20;
      *(this + 445) = 6;
      *(this + 446) = 40;
      *(this + 447) = 10;
      *(this + 448) = 20;
      *(this + 449) = 40;
      *(this + 450) = 20;
      *(this + 451) = 5;
      *(this + 452) = 30;
      *(this + 454) = 75;
      *(this + 455) = 50;
      *(this + 456) = 25;
      *(this + 457) = 70;
      *(this + 458) = 60;
      *(this + 453) = 5;
      *(this + 459) = 6;
      *(this + 460) = 30;
      *(this + 461) = 30;
      *(this + 462) = 75;
      result = (int)this;
      break;
    case 2:
      *(this + 440) = 2;
      *(this + 441) = 50;
      *(this + 442) = 70;
      *(this + 443) = 50;
      *(this + 444) = 40;
      *(this + 445) = 12;
      *(this + 446) = 80;
      *(this + 447) = 24;
      *(this + 448) = 8;
      *(this + 461) = 18;
      *(this + 449) = 45;
      *(this + 450) = 30;
      *(this + 451) = 17;
      *(this + 452) = 25;
      *(this + 453) = 8;
      *(this + 454) = 90;
      *(this + 455) = 50;
      *(this + 456) = 30;
      *(this + 457) = 85;
      *(this + 458) = 80;
      *(this + 459) = 3;
      *(this + 460) = 70;
      *(this + 462) = 60;
      result = (int)this;
      break;
    case 3:
      *(this + 440) = 8;
      *(this + 441) = 25;
      *(this + 442) = 40;
      *(this + 443) = 15;
      *(this + 444) = 14;
      *(this + 445) = 8;
      *(this + 446) = 28;
      *(this + 447) = 16;
      *(this + 448) = 15;
      *(this + 449) = 30;
      *(this + 450) = 17;
      *(this + 451) = 4;
      *(this + 452) = 40;
      *(this + 453) = 2;
      *(this + 454) = 90;
      *(this + 455) = 60;
      *(this + 456) = 30;
      *(this + 457) = 50;
      *(this + 458) = 50;
      *(this + 459) = 12;
      *(this + 460) = 20;
      *(this + 461) = 45;
      *(this + 462) = 90;
      result = (int)this;
      break;
    case 4:
      *(this + 440) = 10;
      *(this + 441) = 28;
      *(this + 442) = 35;
      *(this + 443) = 20;
      *(this + 444) = 10;
      *(this + 445) = 14;
      *(this + 446) = 44;
      *(this + 447) = 20;
      *(this + 448) = 28;
      *(this + 449) = 38;
      *(this + 450) = 21;
      *(this + 451) = 5;
      *(this + 452) = 35;
      *(this + 453) = 4;
      *(this + 454) = 80;
      *(this + 455) = 60;
      *(this + 456) = 40;
      *(this + 457) = 60;
      *(this + 458) = 60;
      *(this + 459) = 10;
      *(this + 460) = 30;
      *(this + 461) = 35;
      *(this + 462) = 67;
      result = (int)this;
      break;
    case 5:
      *(this + 440) = 7;
      *(this + 441) = 35;
      *(this + 442) = 45;
      *(this + 443) = 35;
      *(this + 444) = 30;
      *(this + 445) = 4;
      *(this + 446) = 60;
      *(this + 447) = 6;
      *(this + 448) = 35;
      *(this + 449) = 35;
      *(this + 450) = 27;
      *(this + 451) = 7;
      *(this + 452) = 25;
      *(this + 453) = 6;
      *(this + 454) = 90;
      *(this + 455) = 40;
      *(this + 456) = 20;
      *(this + 457) = 55;
      *(this + 458) = 70;
      *(this + 459) = 4;
      *(this + 460) = 40;
      *(this + 461) = 25;
      *(this + 462) = 82;
      result = (int)this;
      break;
    case 6:
      *(this + 440) = 0;
      *(this + 441) = 40;
      *(this + 442) = 65;
      *(this + 443) = 100;
      *(this + 444) = 60;
      *(this + 445) = 20;
      *(this + 446) = 80;
      *(this + 447) = 40;
      *(this + 448) = 30;
      *(this + 449) = 46;
      *(this + 450) = 30;
      *(this + 451) = 15;
      *(this + 452) = 5;
      *(this + 453) = 8;
      *(this + 454) = 65;
      *(this + 455) = 35;
      *(this + 456) = 15;
      *(this + 457) = 75;
      *(this + 458) = 75;
      *(this + 459) = 2;
      *(this + 460) = 80;
      *(this + 461) = 12;
      *(this + 462) = 50;
      result = (int)this;
      break;
    case 7:
      *(this + 440) = 3;
      *(this + 441) = 30;
      *(this + 442) = 35;
      *(this + 443) = 25;
      *(this + 444) = 16;
      *(this + 445) = 4;
      *(this + 446) = 30;
      *(this + 447) = 6;
      *(this + 448) = 50;
      *(this + 449) = 43;
      *(this + 450) = 23;
      *(this + 451) = 12;
      *(this + 452) = 40;
      *(this + 453) = 2;
      *(this + 454) = 60;
      *(this + 455) = 40;
      *(this + 456) = 20;
      *(this + 457) = 60;
      *(this + 458) = 40;
      *(this + 459) = 4;
      *(this + 460) = 65;
      *(this + 461) = 20;
      *(this + 462) = 65;
      result = (int)this;
      break;
    case 8:
      *(this + 440) = 5;
      *(this + 441) = 28;
      *(this + 442) = 46;
      *(this + 443) = 22;
      *(this + 444) = 17;
      *(this + 445) = 8;
      *(this + 446) = 35;
      *(this + 447) = 12;
      *(this + 448) = 20;
      *(this + 449) = 37;
      *(this + 450) = 21;
      *(this + 451) = 6;
      *(this + 452) = 30;
      *(this + 454) = 75;
      *(this + 455) = 50;
      *(this + 456) = 30;
      *(this + 457) = 65;
      *(this + 458) = 50;
      *(this + 453) = 5;
      *(this + 459) = 12;
      *(this + 460) = 15;
      *(this + 461) = 40;
      *(this + 462) = 75;
      result = (int)this;
      break;
    case 9:
      *(this + 440) = 8;
      *(this + 441) = 30;
      *(this + 442) = 50;
      *(this + 443) = 25;
      *(this + 444) = 24;
      *(this + 445) = 10;
      *(this + 446) = 40;
      *(this + 447) = 14;
      *(this + 448) = 20;
      *(this + 449) = 41;
      *(this + 450) = 26;
      *(this + 451) = 8;
      *(this + 452) = 30;
      *(this + 454) = 75;
      *(this + 455) = 50;
      *(this + 456) = 35;
      *(this + 457) = 60;
      *(this + 458) = 40;
      *(this + 453) = 5;
      *(this + 459) = 6;
      *(this + 460) = 30;
      *(this + 461) = 25;
      *(this + 462) = 85;
      result = (int)this;
      break;
    case 10:
      *(this + 440) = 7;
      *(this + 441) = 25;
      *(this + 442) = 40;
      *(this + 443) = 18;
      *(this + 444) = 16;
      *(this + 445) = 8;
      *(this + 446) = 34;
      *(this + 447) = 16;
      *(this + 448) = 17;
      *(this + 449) = 32;
      *(this + 450) = 21;
      *(this + 451) = 5;
      *(this + 452) = 40;
      *(this + 453) = 3;
      *(this + 454) = 90;
      *(this + 455) = 60;
      *(this + 456) = 30;
      *(this + 457) = 50;
      *(this + 458) = 60;
      *(this + 459) = 10;
      *(this + 460) = 20;
      *(this + 461) = 40;
      *(this + 462) = 80;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4EDEB0
// entry 004edeb0  size 226  status ok
//======================================================================

__int16 __thiscall sub_4EDEB0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 440);
    case 1:
      v4 = *(this + 440);
      v5 = v4 - sub_62FBF0(5);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 440);
      return sub_62FBF0(3) + v2;
    case 3:
      v3 = *(this + 440);
      return sub_62FBF0(6) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11086);
      return 0;
  }
}


//======================================================================
// sub_4EDFA0
// entry 004edfa0  size 35  status ok
//======================================================================

double __thiscall sub_4EDFA0(__int16 *this)
{
  return (double)*(this + 442) / 100.0;
}


//======================================================================
// sub_4EDFD0
// entry 004edfd0  size 199  status ok
//======================================================================

double __thiscall sub_4EDFD0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 444) / 100.0;
    case 1:
      return (double)(__int16)*(this + 444) / 80.0;
    case 2:
      return (double)(__int16)*(this + 444) / 120.0;
    case 3:
      return (double)(__int16)*(this + 444) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11107);
  return 0.0;
}


//======================================================================
// sub_4EE0A0
// entry 004ee0a0  size 199  status ok
//======================================================================

double __thiscall sub_4EE0A0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 445) / 100.0;
    case 1:
      return (double)(__int16)*(this + 445) / 80.0;
    case 2:
      return (double)(__int16)*(this + 445) / 120.0;
    case 3:
      return (double)(__int16)*(this + 445) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11123);
  return 0.0;
}


//======================================================================
// sub_4EE170
// entry 004ee170  size 199  status ok
//======================================================================

double __thiscall sub_4EE170(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 446) / 100.0;
    case 1:
      return (double)(__int16)*(this + 446) / 80.0;
    case 2:
      return (double)(__int16)*(this + 446) / 120.0;
    case 3:
      return (double)(__int16)*(this + 446) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11139);
  return 0.0;
}


//======================================================================
// sub_4EE240
// entry 004ee240  size 199  status ok
//======================================================================

double __thiscall sub_4EE240(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 447) / 100.0;
    case 1:
      return (double)(__int16)*(this + 447) / 80.0;
    case 2:
      return (double)(__int16)*(this + 447) / 120.0;
    case 3:
      return (double)(__int16)*(this + 447) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11155);
  return 0.0;
}


//======================================================================
// sub_4EE310
// entry 004ee310  size 514  status ok
//======================================================================

__int16 __thiscall sub_4EE310(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 11162);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 11163);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 456) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 455);
        else
          v3 = (__int16)*(this + 454);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 456);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 455);
          else
            v5 = *(this + 454);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 456);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 455);
          else
            v7 = *(this + 454);
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
    LOWORD(v2) = *(this + 456);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 455);
  }
  else
  {
    LOWORD(v2) = *(this + 454);
  }
  return v2;
}


//======================================================================
// sub_4EE520
// entry 004ee520  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EE520(_WORD *this)
{
  return *(this + 457);
}


//======================================================================
// sub_4EE540
// entry 004ee540  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EE540(_WORD *this)
{
  return *(this + 458);
}


//======================================================================
// sub_4EE560
// entry 004ee560  size 187  status ok
//======================================================================

__int16 __thiscall sub_4EE560(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 459);
    case 1:
      return (__int16)*(this + 459) / 2;
    case 2:
      v2 = *(this + 459);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 459);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11229);
      return 0;
  }
}


//======================================================================
// sub_4EE620
// entry 004ee620  size 49  status ok
//======================================================================

__int16 __thiscall sub_4EE620(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 460);
  else
    return *(this + 460);
}


//======================================================================
// sub_4EE660
// entry 004ee660  size 52  status ok
//======================================================================

__int16 __thiscall sub_4EE660(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 461) / 2;
  else
    return *(this + 461);
}


//======================================================================
// sub_4EE6A0
// entry 004ee6a0  size 153  status ok
//======================================================================

__int16 __thiscall sub_4EE6A0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 462);
    case 1:
      return *(this + 462) - 20;
    case 2:
      return *(this + 462) + 15;
    case 3:
      return *(this + 462) + 30;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11261);
  return 0;
}


//======================================================================
// sub_4EE740
// entry 004ee740  size 234  status ok
//======================================================================

int __thiscall sub_4EE740(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11268);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11269);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3136 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4EE830
// entry 004ee830  size 725  status ok
//======================================================================

int __thiscall sub_4EE830(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11283);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11284);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 11285);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11286);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 2912;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4EEB10
// entry 004eeb10  size 725  status ok
//======================================================================

int __thiscall sub_4EEB10(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11314);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11315);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 11316);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11317);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 3024;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4EEDF0
// entry 004eedf0  size 1107  status ok
//======================================================================

int __thiscall sub_4EEDF0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11345);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11346);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 11347);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11348);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 3136 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3136 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 3136 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3136 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 3136 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 2912 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 3024 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 3136;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4EF250
// entry 004ef250  size 453  status ok
//======================================================================

double __thiscall sub_4EF250(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11394);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11395);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 11396);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11397);
  v5 = (double)*(__int16 *)(this + 882) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2912 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 2912 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 3024 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 886) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 886) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 886) + v5) / (v7 / (double)*(__int16 *)(this + 886) + 1.0);
}


//======================================================================
// sub_4EF420
// entry 004ef420  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EF420(_WORD *this)
{
  return *(this + 448);
}


//======================================================================
// sub_4EF440
// entry 004ef440  size 739  status ok
//======================================================================

__int16 __thiscall sub_4EF440(_WORD *this, __int16 a2)
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
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 11417);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 11418);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 451);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 450);
          else
            v5 = (__int16)*(this + 449);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 451);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 450);
          else
            v9 = (__int16)*(this + 449);
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
          v11 = (__int16)*(this + 451);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 450);
          else
            v13 = (__int16)*(this + 449);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11467);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 451);
  }
  else if ( a2 == 2 )
  {
    return *(this + 450);
  }
  else
  {
    return *(this + 449);
  }
}


//======================================================================
// sub_4EF730
// entry 004ef730  size 21  status ok
//======================================================================

__int16 __thiscall sub_4EF730(_WORD *this)
{
  return *(this + 452);
}


//======================================================================
// sub_4EF750
// entry 004ef750  size 161  status ok
//======================================================================

__int16 __thiscall sub_4EF750(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 453);
    case 1:
      return 2 * *(this + 453);
    case 2:
      return (__int16)*(this + 453) / 2;
    case 3:
      return (__int16)*(this + 453) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11488);
  return 20;
}


//======================================================================
// sub_4EF800
// entry 004ef800  size 3041  status ok
//======================================================================

int __thiscall sub_4EF800(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 11499);
  switch ( a2 )
  {
    case 1:
      *(this + 463) = 5;
      *(this + 464) = 15;
      *(this + 465) = 40;
      *(this + 466) = 25;
      *(this + 467) = 20;
      *(this + 468) = 6;
      *(this + 469) = 40;
      *(this + 470) = 10;
      *(this + 471) = 20;
      *(this + 472) = 40;
      *(this + 473) = 25;
      *(this + 474) = 5;
      *(this + 475) = 30;
      *(this + 477) = 75;
      *(this + 478) = 50;
      *(this + 479) = 25;
      *(this + 480) = 70;
      *(this + 481) = 60;
      *(this + 476) = 5;
      *(this + 482) = 6;
      *(this + 483) = 30;
      *(this + 484) = 20;
      *(this + 485) = 75;
      *(this + 486) = 85;
      result = (int)this;
      break;
    case 2:
      *(this + 463) = 2;
      *(this + 464) = 25;
      *(this + 465) = 55;
      *(this + 466) = 50;
      *(this + 467) = 40;
      *(this + 468) = 12;
      *(this + 469) = 80;
      *(this + 470) = 24;
      *(this + 471) = 8;
      *(this + 484) = 12;
      *(this + 472) = 45;
      *(this + 473) = 28;
      *(this + 474) = 17;
      *(this + 475) = 25;
      *(this + 476) = 8;
      *(this + 477) = 90;
      *(this + 478) = 50;
      *(this + 479) = 30;
      *(this + 480) = 85;
      *(this + 481) = 80;
      *(this + 482) = 3;
      *(this + 483) = 70;
      *(this + 485) = 60;
      *(this + 486) = 75;
      result = (int)this;
      break;
    case 3:
      *(this + 463) = 8;
      *(this + 464) = 10;
      *(this + 465) = 33;
      *(this + 466) = 15;
      *(this + 467) = 14;
      *(this + 468) = 8;
      *(this + 469) = 28;
      *(this + 470) = 16;
      *(this + 471) = 15;
      *(this + 472) = 30;
      *(this + 473) = 20;
      *(this + 474) = 4;
      *(this + 475) = 40;
      *(this + 476) = 2;
      *(this + 477) = 90;
      *(this + 478) = 60;
      *(this + 479) = 30;
      *(this + 480) = 50;
      *(this + 481) = 50;
      *(this + 482) = 12;
      *(this + 483) = 20;
      *(this + 484) = 30;
      *(this + 485) = 90;
      *(this + 486) = 95;
      result = (int)this;
      break;
    case 4:
      *(this + 463) = 10;
      *(this + 464) = 14;
      *(this + 465) = 30;
      *(this + 466) = 20;
      *(this + 467) = 10;
      *(this + 468) = 14;
      *(this + 469) = 44;
      *(this + 470) = 20;
      *(this + 471) = 28;
      *(this + 472) = 38;
      *(this + 473) = 21;
      *(this + 474) = 5;
      *(this + 475) = 35;
      *(this + 476) = 4;
      *(this + 477) = 80;
      *(this + 478) = 60;
      *(this + 479) = 40;
      *(this + 480) = 60;
      *(this + 481) = 60;
      *(this + 482) = 10;
      *(this + 483) = 30;
      *(this + 484) = 26;
      *(this + 485) = 67;
      *(this + 486) = 80;
      result = (int)this;
      break;
    case 5:
      *(this + 463) = 7;
      *(this + 464) = 18;
      *(this + 465) = 37;
      *(this + 466) = 35;
      *(this + 467) = 30;
      *(this + 468) = 4;
      *(this + 469) = 60;
      *(this + 470) = 6;
      *(this + 471) = 35;
      *(this + 472) = 35;
      *(this + 473) = 27;
      *(this + 474) = 7;
      *(this + 475) = 25;
      *(this + 476) = 6;
      *(this + 477) = 90;
      *(this + 478) = 40;
      *(this + 479) = 20;
      *(this + 480) = 55;
      *(this + 481) = 70;
      *(this + 482) = 4;
      *(this + 483) = 40;
      *(this + 484) = 18;
      *(this + 485) = 82;
      *(this + 486) = 88;
      result = (int)this;
      break;
    case 6:
      *(this + 463) = 0;
      *(this + 464) = 20;
      *(this + 465) = 55;
      *(this + 466) = 100;
      *(this + 467) = 60;
      *(this + 468) = 20;
      *(this + 469) = 80;
      *(this + 470) = 40;
      *(this + 471) = 30;
      *(this + 472) = 46;
      *(this + 473) = 32;
      *(this + 474) = 15;
      *(this + 475) = 5;
      *(this + 476) = 8;
      *(this + 477) = 65;
      *(this + 478) = 35;
      *(this + 479) = 15;
      *(this + 480) = 75;
      *(this + 481) = 75;
      *(this + 482) = 2;
      *(this + 483) = 80;
      *(this + 484) = 10;
      *(this + 485) = 50;
      *(this + 486) = 65;
      result = (int)this;
      break;
    case 7:
      *(this + 463) = 3;
      *(this + 464) = 15;
      *(this + 465) = 30;
      *(this + 466) = 25;
      *(this + 467) = 16;
      *(this + 468) = 4;
      *(this + 469) = 30;
      *(this + 470) = 6;
      *(this + 471) = 50;
      *(this + 472) = 43;
      *(this + 473) = 28;
      *(this + 474) = 12;
      *(this + 475) = 40;
      *(this + 476) = 2;
      *(this + 477) = 60;
      *(this + 478) = 40;
      *(this + 479) = 20;
      *(this + 480) = 60;
      *(this + 481) = 40;
      *(this + 482) = 4;
      *(this + 483) = 65;
      *(this + 484) = 15;
      *(this + 485) = 65;
      *(this + 486) = 82;
      result = (int)this;
      break;
    case 8:
      *(this + 463) = 5;
      *(this + 464) = 14;
      *(this + 465) = 39;
      *(this + 466) = 22;
      *(this + 467) = 17;
      *(this + 468) = 8;
      *(this + 469) = 33;
      *(this + 470) = 12;
      *(this + 471) = 20;
      *(this + 472) = 35;
      *(this + 473) = 23;
      *(this + 474) = 6;
      *(this + 475) = 30;
      *(this + 477) = 75;
      *(this + 478) = 50;
      *(this + 479) = 30;
      *(this + 480) = 65;
      *(this + 481) = 50;
      *(this + 476) = 5;
      *(this + 482) = 12;
      *(this + 483) = 15;
      *(this + 484) = 29;
      *(this + 485) = 75;
      *(this + 486) = 87;
      result = (int)this;
      break;
    case 9:
      *(this + 463) = 8;
      *(this + 464) = 15;
      *(this + 465) = 40;
      *(this + 466) = 25;
      *(this + 467) = 24;
      *(this + 468) = 10;
      *(this + 469) = 40;
      *(this + 470) = 14;
      *(this + 471) = 20;
      *(this + 472) = 41;
      *(this + 473) = 30;
      *(this + 474) = 8;
      *(this + 475) = 30;
      *(this + 477) = 75;
      *(this + 478) = 50;
      *(this + 479) = 35;
      *(this + 480) = 60;
      *(this + 481) = 40;
      *(this + 476) = 5;
      *(this + 482) = 6;
      *(this + 483) = 30;
      *(this + 484) = 21;
      *(this + 485) = 85;
      *(this + 486) = 85;
      result = (int)this;
      break;
    case 10:
      *(this + 463) = 7;
      *(this + 464) = 16;
      *(this + 465) = 33;
      *(this + 466) = 18;
      *(this + 467) = 16;
      *(this + 468) = 8;
      *(this + 469) = 34;
      *(this + 470) = 16;
      *(this + 471) = 17;
      *(this + 472) = 32;
      *(this + 473) = 24;
      *(this + 474) = 5;
      *(this + 475) = 40;
      *(this + 476) = 3;
      *(this + 477) = 90;
      *(this + 478) = 60;
      *(this + 479) = 30;
      *(this + 480) = 50;
      *(this + 481) = 60;
      *(this + 482) = 10;
      *(this + 483) = 20;
      *(this + 484) = 34;
      *(this + 485) = 80;
      *(this + 486) = 90;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4F0410
// entry 004f0410  size 226  status ok
//======================================================================

__int16 __thiscall sub_4F0410(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si
  __int16 v4; // [esp+8h] [ebp-4h]
  __int16 v5; // [esp+8h] [ebp-4h]

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 463);
    case 1:
      v4 = *(this + 463);
      v5 = v4 - sub_62FBF0(5);
      if ( v5 < 0 )
        return 0;
      return v5;
    case 2:
      v2 = *(this + 463);
      return sub_62FBF0(3) + v2;
    case 3:
      v3 = *(this + 463);
      return sub_62FBF0(6) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11792);
      return 0;
  }
}


//======================================================================
// sub_4F0500
// entry 004f0500  size 35  status ok
//======================================================================

double __thiscall sub_4F0500(__int16 *this)
{
  return (double)*(this + 465) / 100.0;
}


//======================================================================
// sub_4F0530
// entry 004f0530  size 199  status ok
//======================================================================

double __thiscall sub_4F0530(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 467) / 100.0;
    case 1:
      return (double)(__int16)*(this + 467) / 80.0;
    case 2:
      return (double)(__int16)*(this + 467) / 120.0;
    case 3:
      return (double)(__int16)*(this + 467) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11813);
  return 0.0;
}


//======================================================================
// sub_4F0600
// entry 004f0600  size 199  status ok
//======================================================================

double __thiscall sub_4F0600(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 468) / 100.0;
    case 1:
      return (double)(__int16)*(this + 468) / 80.0;
    case 2:
      return (double)(__int16)*(this + 468) / 120.0;
    case 3:
      return (double)(__int16)*(this + 468) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11829);
  return 0.0;
}


//======================================================================
// sub_4F06D0
// entry 004f06d0  size 199  status ok
//======================================================================

double __thiscall sub_4F06D0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 469) / 100.0;
    case 1:
      return (double)(__int16)*(this + 469) / 80.0;
    case 2:
      return (double)(__int16)*(this + 469) / 120.0;
    case 3:
      return (double)(__int16)*(this + 469) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11845);
  return 0.0;
}


//======================================================================
// sub_4F07A0
// entry 004f07a0  size 199  status ok
//======================================================================

double __thiscall sub_4F07A0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return (double)(__int16)*(this + 470) / 100.0;
    case 1:
      return (double)(__int16)*(this + 470) / 80.0;
    case 2:
      return (double)(__int16)*(this + 470) / 120.0;
    case 3:
      return (double)(__int16)*(this + 470) / 140.0;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11861);
  return 0.0;
}


//======================================================================
// sub_4F0870
// entry 004f0870  size 514  status ok
//======================================================================

__int16 __thiscall sub_4F0870(_WORD *this, __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  __int16 v10; // [esp+8h] [ebp-4h]

  if ( a2 < 1 )
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 11868);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 11869);
  v10 = 0;
  if ( *(this + 50) )
  {
    if ( *(this + 50) == 1 )
    {
      if ( a2 == 1 )
      {
        LOWORD(v2) = (__int16)*(this + 479) / 2;
      }
      else
      {
        if ( a2 == 2 )
          v3 = (__int16)*(this + 478);
        else
          v3 = (__int16)*(this + 477);
        return v3 / 2;
      }
    }
    else
    {
      if ( *(this + 50) == 2 )
      {
        if ( a2 == 1 )
        {
          v4 = *(this + 479);
          v10 = sub_62FBF0(20) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = *(this + 478);
          else
            v5 = *(this + 477);
          v10 = sub_62FBF0(20) + v5;
        }
      }
      else if ( *(this + 50) == 3 )
      {
        if ( a2 == 1 )
        {
          v6 = *(this + 479);
          v10 = sub_62FBF0(40) + v6;
        }
        else
        {
          if ( a2 == 2 )
            v7 = *(this + 478);
          else
            v7 = *(this + 477);
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
    LOWORD(v2) = *(this + 479);
  }
  else if ( a2 == 2 )
  {
    LOWORD(v2) = *(this + 478);
  }
  else
  {
    LOWORD(v2) = *(this + 477);
  }
  return v2;
}


//======================================================================
// sub_4F0A80
// entry 004f0a80  size 21  status ok
//======================================================================

__int16 __thiscall sub_4F0A80(_WORD *this)
{
  return *(this + 480);
}


//======================================================================
// sub_4F0AA0
// entry 004f0aa0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4F0AA0(_WORD *this)
{
  return *(this + 481);
}


//======================================================================
// sub_4F0AC0
// entry 004f0ac0  size 187  status ok
//======================================================================

__int16 __thiscall sub_4F0AC0(_WORD *this)
{
  __int16 v2; // si
  __int16 v3; // si

  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 482);
    case 1:
      return (__int16)*(this + 482) / 2;
    case 2:
      v2 = *(this + 482);
      return sub_62FBF0(2) + v2;
    case 3:
      v3 = *(this + 482);
      return sub_62FBF0(3) + v3;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 11935);
      return 0;
  }
}


//======================================================================
// sub_4F0B80
// entry 004f0b80  size 49  status ok
//======================================================================

__int16 __thiscall sub_4F0B80(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return 2 * *(this + 483);
  else
    return *(this + 483);
}


//======================================================================
// sub_4F0BC0
// entry 004f0bc0  size 52  status ok
//======================================================================

__int16 __thiscall sub_4F0BC0(_WORD *this)
{
  if ( *(this + 50) == 1 )
    return (__int16)*(this + 484) / 2;
  else
    return *(this + 484);
}


//======================================================================
// sub_4F0C00
// entry 004f0c00  size 234  status ok
//======================================================================

int __thiscall sub_4F0C00(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11958);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11959);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3416 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4F0CF0
// entry 004f0cf0  size 725  status ok
//======================================================================

int __thiscall sub_4F0CF0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 11973);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11974);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 11975);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 11976);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 3192;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4F0FD0
// entry 004f0fd0  size 725  status ok
//======================================================================

int __thiscall sub_4F0FD0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12004);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12005);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 12006);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12007);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 3304;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4F12B0
// entry 004f12b0  size 1107  status ok
//======================================================================

int __thiscall sub_4F12B0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12035);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12036);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 12037);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12038);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 3416 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3416 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 3416 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3416 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 3416 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 3192 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 3304 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 3416;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4F1710
// entry 004f1710  size 453  status ok
//======================================================================

double __thiscall sub_4F1710(int this, __int16 a2, __int16 a3)
{
  double v5; // [esp+28h] [ebp-18h]
  double v6; // [esp+30h] [ebp-10h]
  double v7; // [esp+38h] [ebp-8h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12084);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12085);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 12086);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12087);
  v5 = (double)*(__int16 *)(this + 928) / 100.0 / (double)a3;
  if ( !*(_WORD *)(*(_DWORD *)(this + 1064) + 14 * a2 + 3192 + 2 * a3 - 4) )
    return v5;
  v7 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 3192 + 2 * a3 - 4);
  v6 = (double)*(unsigned __int16 *)(*(_DWORD *)(this + 1064) + 14 * a2 + 3304 + 2 * a3 - 4);
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (v6 / (double)(*(__int16 *)(this + 932) / 2) + v5) / (v7 / (double)(*(__int16 *)(this + 932) / 2) + 1.0);
  else
    return (v6 / (double)*(__int16 *)(this + 932) + v5) / (v7 / (double)*(__int16 *)(this + 932) + 1.0);
}


//======================================================================
// sub_4F18E0
// entry 004f18e0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4F18E0(_WORD *this)
{
  return *(this + 471);
}


//======================================================================
// sub_4F1900
// entry 004f1900  size 739  status ok
//======================================================================

__int16 __thiscall sub_4F1900(_WORD *this, __int16 a2)
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
    sub_5E9F20((char)"shMagnitude>=1", "..\\Casino\\PokerPlayer.cpp", 12107);
  if ( a2 > 3 )
    sub_5E9F20((char)"shMagnitude<=3", "..\\Casino\\PokerPlayer.cpp", 12108);
  if ( *(this + 50) )
  {
    switch ( *(this + 50) )
    {
      case 1:
        if ( a2 == 1 )
        {
          v3 = (__int16)*(this + 474);
          v4 = sub_62FBF0(15) + v3;
          return sub_62FBF0(15) + v4;
        }
        else
        {
          if ( a2 == 2 )
            v5 = (__int16)*(this + 473);
          else
            v5 = (__int16)*(this + 472);
          v6 = sub_62FBF0(15) + v5;
          return sub_62FBF0(15) + v6;
        }
      case 2:
        if ( a2 == 1 )
        {
          v7 = (__int16)*(this + 474);
          v8 = v7 - sub_62FBF0(5);
          v17 = v8 - sub_62FBF0(5);
        }
        else
        {
          if ( a2 == 2 )
            v9 = (__int16)*(this + 473);
          else
            v9 = (__int16)*(this + 472);
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
          v11 = (__int16)*(this + 474);
          v12 = v11 - sub_62FBF0(10);
          v16 = v12 - sub_62FBF0(10);
        }
        else
        {
          if ( a2 == 2 )
            v13 = (__int16)*(this + 473);
          else
            v13 = (__int16)*(this + 472);
          v14 = v13 - sub_62FBF0(10);
          v16 = v14 - sub_62FBF0(10);
        }
        if ( v16 >= 1 )
          return v16;
        else
          return 1;
      default:
        sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 12157);
        return 100;
    }
  }
  else if ( a2 == 1 )
  {
    return *(this + 474);
  }
  else if ( a2 == 2 )
  {
    return *(this + 473);
  }
  else
  {
    return *(this + 472);
  }
}


//======================================================================
// sub_4F1BF0
// entry 004f1bf0  size 21  status ok
//======================================================================

__int16 __thiscall sub_4F1BF0(_WORD *this)
{
  return *(this + 475);
}


//======================================================================
// sub_4F1C10
// entry 004f1c10  size 161  status ok
//======================================================================

__int16 __thiscall sub_4F1C10(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 476);
    case 1:
      return 2 * *(this + 476);
    case 2:
      return (__int16)*(this + 476) / 2;
    case 3:
      return (__int16)*(this + 476) / 4;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 12178);
  return 20;
}


//======================================================================
// sub_4F1CC0
// entry 004f1cc0  size 153  status ok
//======================================================================

__int16 __thiscall sub_4F1CC0(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 485);
    case 1:
      return *(this + 485) - 20;
    case 2:
      return *(this + 485) + 15;
    case 3:
      return *(this + 485) + 30;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 12194);
  return 0;
}


//======================================================================
// sub_4F1D60
// entry 004f1d60  size 153  status ok
//======================================================================

__int16 __thiscall sub_4F1D60(_WORD *this)
{
  switch ( *(this + 50) )
  {
    case 0:
      return *(this + 486);
    case 1:
      return *(this + 486) - 20;
    case 2:
      return *(this + 486) + 5;
    case 3:
      return *(this + 486) + 15;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPlayer.cpp", 12210);
  return 0;
}


//======================================================================
// sub_4F1E00
// entry 004f1e00  size 2801  status ok
//======================================================================

int __thiscall sub_4F1E00(_WORD *this, __int16 a2)
{
  int result; // eax

  result = a2;
  if ( !a2 )
  {
    result = sub_62FBF0(10) + 1;
    a2 = result;
  }
  if ( a2 <= 0 || a2 > 10 )
    result = sub_5E9F20((char)"(shStrategyID > 0) && (shStrategyID <= 10)", "..\\Casino\\PokerPlayer.cpp", 12221);
  switch ( a2 )
  {
    case 1:
      *(this + 487) = 5;
      *(this + 488) = 30;
      *(this + 489) = 50;
      *(this + 490) = 25;
      *(this + 491) = 60;
      *(this + 492) = 30;
      *(this + 493) = 75;
      *(this + 494) = 40;
      *(this + 495) = 20;
      *(this + 496) = 40;
      *(this + 497) = 20;
      *(this + 498) = 5;
      *(this + 499) = 30;
      *(this + 501) = 75;
      *(this + 502) = 50;
      *(this + 503) = 25;
      *(this + 504) = 70;
      *(this + 505) = 60;
      *(this + 500) = 5;
      *(this + 506) = 6;
      *(this + 507) = 30;
      *(this + 508) = 30;
      result = (int)this;
      break;
    case 2:
      *(this + 487) = 2;
      *(this + 488) = 50;
      *(this + 489) = 70;
      *(this + 490) = 50;
      *(this + 491) = 105;
      *(this + 492) = 44;
      *(this + 493) = 150;
      *(this + 494) = 60;
      *(this + 495) = 8;
      *(this + 508) = 18;
      *(this + 496) = 45;
      *(this + 497) = 23;
      *(this + 498) = 17;
      *(this + 499) = 25;
      *(this + 500) = 8;
      *(this + 501) = 90;
      *(this + 502) = 50;
      *(this + 503) = 30;
      *(this + 504) = 85;
      *(this + 505) = 80;
      *(this + 506) = 3;
      *(this + 507) = 70;
      result = (int)this;
      break;
    case 3:
      *(this + 487) = 8;
      *(this + 488) = 25;
      *(this + 489) = 40;
      *(this + 490) = 15;
      *(this + 491) = 45;
      *(this + 492) = 18;
      *(this + 493) = 60;
      *(this + 494) = 28;
      *(this + 495) = 15;
      *(this + 496) = 30;
      *(this + 497) = 15;
      *(this + 498) = 4;
      *(this + 499) = 40;
      *(this + 500) = 2;
      *(this + 501) = 90;
      *(this + 502) = 60;
      *(this + 503) = 30;
      *(this + 504) = 50;
      *(this + 505) = 50;
      *(this + 506) = 12;
      *(this + 507) = 20;
      *(this + 508) = 45;
      result = (int)this;
      break;
    case 4:
      *(this + 487) = 10;
      *(this + 488) = 28;
      *(this + 489) = 35;
      *(this + 490) = 20;
      *(this + 491) = 55;
      *(this + 492) = 24;
      *(this + 493) = 80;
      *(this + 494) = 34;
      *(this + 495) = 14;
      *(this + 496) = 38;
      *(this + 497) = 21;
      *(this + 498) = 5;
      *(this + 499) = 35;
      *(this + 500) = 4;
      *(this + 501) = 80;
      *(this + 502) = 60;
      *(this + 503) = 40;
      *(this + 504) = 60;
      *(this + 505) = 60;
      *(this + 506) = 10;
      *(this + 507) = 30;
      *(this + 508) = 35;
      result = (int)this;
      break;
    case 5:
      *(this + 487) = 7;
      *(this + 488) = 35;
      *(this + 489) = 45;
      *(this + 490) = 35;
      *(this + 491) = 70;
      *(this + 492) = 34;
      *(this + 493) = 105;
      *(this + 494) = 48;
      *(this + 495) = 35;
      *(this + 496) = 35;
      *(this + 497) = 27;
      *(this + 498) = 7;
      *(this + 499) = 25;
      *(this + 500) = 6;
      *(this + 501) = 90;
      *(this + 502) = 40;
      *(this + 503) = 20;
      *(this + 504) = 55;
      *(this + 505) = 70;
      *(this + 506) = 4;
      *(this + 507) = 40;
      *(this + 508) = 25;
      result = (int)this;
      break;
    case 6:
      *(this + 487) = 0;
      *(this + 488) = 40;
      *(this + 489) = 65;
      *(this + 490) = 100;
      *(this + 491) = 105;
      *(this + 492) = 54;
      *(this + 493) = 150;
      *(this + 494) = 70;
      *(this + 495) = 30;
      *(this + 496) = 46;
      *(this + 497) = 30;
      *(this + 498) = 15;
      *(this + 499) = 5;
      *(this + 500) = 8;
      *(this + 501) = 65;
      *(this + 502) = 35;
      *(this + 503) = 15;
      *(this + 504) = 75;
      *(this + 505) = 75;
      *(this + 506) = 2;
      *(this + 507) = 80;
      *(this + 508) = 12;
      result = (int)this;
      break;
    case 7:
      *(this + 487) = 3;
      *(this + 488) = 30;
      *(this + 489) = 35;
      *(this + 490) = 25;
      *(this + 491) = 55;
      *(this + 492) = 16;
      *(this + 493) = 75;
      *(this + 494) = 22;
      *(this + 495) = 50;
      *(this + 496) = 43;
      *(this + 497) = 23;
      *(this + 498) = 12;
      *(this + 499) = 40;
      *(this + 500) = 2;
      *(this + 501) = 60;
      *(this + 502) = 40;
      *(this + 503) = 20;
      *(this + 504) = 60;
      *(this + 505) = 40;
      *(this + 506) = 4;
      *(this + 507) = 65;
      *(this + 508) = 20;
      result = (int)this;
      break;
    case 8:
      *(this + 487) = 5;
      *(this + 488) = 28;
      *(this + 489) = 46;
      *(this + 490) = 22;
      *(this + 491) = 75;
      *(this + 492) = 34;
      *(this + 493) = 105;
      *(this + 494) = 44;
      *(this + 495) = 20;
      *(this + 496) = 41;
      *(this + 497) = 23;
      *(this + 498) = 6;
      *(this + 499) = 30;
      *(this + 501) = 75;
      *(this + 502) = 50;
      *(this + 503) = 30;
      *(this + 504) = 65;
      *(this + 505) = 50;
      *(this + 500) = 5;
      *(this + 506) = 12;
      *(this + 507) = 15;
      *(this + 508) = 40;
      result = (int)this;
      break;
    case 9:
      *(this + 487) = 8;
      *(this + 488) = 30;
      *(this + 489) = 50;
      *(this + 490) = 25;
      *(this + 491) = 45;
      *(this + 492) = 20;
      *(this + 493) = 60;
      *(this + 494) = 32;
      *(this + 495) = 20;
      *(this + 496) = 41;
      *(this + 497) = 26;
      *(this + 498) = 8;
      *(this + 499) = 30;
      *(this + 501) = 75;
      *(this + 502) = 50;
      *(this + 503) = 35;
      *(this + 504) = 60;
      *(this + 505) = 40;
      *(this + 500) = 5;
      *(this + 506) = 6;
      *(this + 507) = 30;
      *(this + 508) = 25;
      result = (int)this;
      break;
    case 10:
      *(this + 487) = 7;
      *(this + 488) = 25;
      *(this + 489) = 40;
      *(this + 490) = 18;
      *(this + 491) = 50;
      *(this + 492) = 22;
      *(this + 493) = 75;
      *(this + 494) = 30;
      *(this + 495) = 17;
      *(this + 496) = 32;
      *(this + 497) = 21;
      *(this + 498) = 5;
      *(this + 499) = 40;
      *(this + 500) = 3;
      *(this + 501) = 90;
      *(this + 502) = 60;
      *(this + 503) = 30;
      *(this + 504) = 50;
      *(this + 505) = 60;
      *(this + 506) = 10;
      *(this + 507) = 20;
      *(this + 508) = 40;
      result = (int)this;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4F3110
// entry 004f3110  size 234  status ok
//======================================================================

int __thiscall sub_4F3110(_DWORD *this, __int16 a2)
{
  int result; // eax
  __int16 i; // [esp+8h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12660);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12661);
  for ( i = 2; ; ++i )
  {
    result = sub_47F950();
    if ( i > result )
      break;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * i - 4) = 0;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * i - 4) = 0;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3696 + i - 2) = 0;
  }
  return result;
}


//======================================================================
// sub_4F3200
// entry 004f3200  size 725  status ok
//======================================================================

int __thiscall sub_4F3200(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12675);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12676);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 12677);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12678);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 3472;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4F34E0
// entry 004f34e0  size 725  status ok
//======================================================================

int __thiscall sub_4F34E0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12706);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12707);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 12708);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12709);
  if ( ++*(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 4) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 4);
  if ( a3 > 2 && ++*(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 6) == 12288 )
    --*(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 6);
  result = sub_47F950();
  if ( a3 < result )
  {
    ++*(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 2);
    result = a3;
    if ( *(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 2) == 12288 )
    {
      result = *(this + 266) + 14 * a2 + 3584;
      --*(_WORD *)(result + 2 * a3 - 2);
    }
  }
  return result;
}


//======================================================================
// sub_4F37C0
// entry 004f37c0  size 1107  status ok
//======================================================================

int __thiscall sub_4F37C0(_DWORD *this, __int16 a2, __int16 a3)
{
  int result; // eax

  if ( a2 < 0 )
    sub_5E9F20((char)"shSeat>=0", "..\\Casino\\PokerPlayer.cpp", 12737);
  if ( a2 >= sub_47F950() )
    sub_5E9F20((char)"shSeat<pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12738);
  if ( a3 < 2 )
    sub_5E9F20((char)"shPlayerCount>=2", "..\\Casino\\PokerPlayer.cpp", 12739);
  if ( a3 > sub_47F950() )
    sub_5E9F20((char)"shPlayerCount<=pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerPlayer.cpp", 12740);
  if ( ++*(_BYTE *)(*(this + 266) + 7 * a2 + 3696 + a3 - 2) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 4) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 4) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3696 + a3 - 2) >>= 1;
  }
  if ( a3 > 2 && ++*(_BYTE *)(*(this + 266) + 7 * a2 + 3696 + a3 - 3) == 80 )
  {
    *(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 6) >>= 1;
    *(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 6) >>= 1;
    *(_BYTE *)(*(this + 266) + 7 * a2 + 3696 + a3 - 3) >>= 1;
  }
  result = sub_47F950();
  if ( a3 < result )
  {
    result = (unsigned __int8)++*(_BYTE *)(*(this + 266) + 7 * a2 + 3696 + a3 - 1);
    if ( result == 80 )
    {
      *(_WORD *)(*(this + 266) + 14 * a2 + 3472 + 2 * a3 - 2) >>= 1;
      *(_WORD *)(*(this + 266) + 14 * a2 + 3584 + 2 * a3 - 2) >>= 1;
      result = *(this + 266) + 7 * a2 + 3696;
      *(_BYTE *)(result + a3 - 1) >>= 1;
    }
  }
  return result;
}


//======================================================================
// sub_4F4200
// entry 004f4200  size 256  status ok
//======================================================================

int __thiscall sub_4F4200(int this)
{
  *(_BYTE *)(this + 1) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 116) = 0;
  *(_DWORD *)(this + 120) = 0;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 132) = 0;
  *(_WORD *)(this + 6) = 0;
  return this;
}


//======================================================================
// sub_4F4300
// entry 004f4300  size 19  status ok
//======================================================================

int __thiscall sub_4F4300(void *this)
{
  return sub_4F9760(this, this);
}


//======================================================================
// sub_4F4320
// entry 004f4320  size 2391  status ok
//======================================================================

__int16 *__thiscall sub_4F4320(__int16 *this, __int16 a2)
{
  int v2; // ecx
  int v3; // ecx
  __int16 *result; // eax
  _DWORD *v5; // [esp+4h] [ebp-84h]
  _DWORD *v6; // [esp+8h] [ebp-80h]
  void *v8; // [esp+10h] [ebp-78h]
  int *v9; // [esp+14h] [ebp-74h]
  int v10; // [esp+1Ch] [ebp-6Ch]
  int *v11; // [esp+20h] [ebp-68h]
  int v12; // [esp+28h] [ebp-60h]
  __int16 i; // [esp+78h] [ebp-10h]
  __int16 j; // [esp+78h] [ebp-10h]
  __int16 k; // [esp+78h] [ebp-10h]
  __int16 m; // [esp+78h] [ebp-10h]
  __int16 n; // [esp+78h] [ebp-10h]
  __int16 ii; // [esp+78h] [ebp-10h]
  __int16 jj; // [esp+78h] [ebp-10h]
  __int16 kk; // [esp+78h] [ebp-10h]
  __int16 mm; // [esp+78h] [ebp-10h]

  if ( a2 < 2 )
    sub_5E9F20((char)"shNumberOfPlayers >= 2", "..\\Casino\\PokerPot.cpp", 44);
  if ( *(this + 3) > 0 )
    sub_4F9760(this);
  *((_BYTE *)this + 1) = 1;
  *(this + 3) = a2;
  *(_BYTE *)this = 0;
  *((_BYTE *)this + 2) = 0;
  *((_BYTE *)this + 3) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 12) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 12) )
    sub_5E9F20((char)"pbFolded", "..\\Casino\\PokerPot.cpp", 61);
  for ( i = 0; i < *(this + 3); ++i )
    *(_BYTE *)(i + *((_DWORD *)this + 12)) = 0;
  *((_DWORD *)this + 13) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 13) )
    sub_5E9F20((char)"pbAllIn", "..\\Casino\\PokerPot.cpp", 66);
  for ( j = 0; j < *(this + 3); ++j )
    *(_BYTE *)(j + *((_DWORD *)this + 13)) = 0;
  *((_DWORD *)this + 14) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 14) )
    sub_5E9F20((char)"pbActedThisRound", "..\\Casino\\PokerPot.cpp", 71);
  *((_DWORD *)this + 15) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 15) )
    sub_5E9F20((char)"pbInShowdownYet", "..\\Casino\\PokerPot.cpp", 74);
  for ( k = 0; k < *(this + 3); ++k )
    *(_BYTE *)(k + *((_DWORD *)this + 15)) = 0;
  *((_DWORD *)this + 16) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 16) )
    sub_5E9F20((char)"pbTieNotificationYet", "..\\Casino\\PokerPot.cpp", 79);
  *((_DWORD *)this + 17) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 17) )
    sub_5E9F20((char)"pbHighWinner", "..\\Casino\\PokerPot.cpp", 82);
  *((_DWORD *)this + 18) = operator new(*(this + 3));
  if ( !*((_DWORD *)this + 18) )
    sub_5E9F20((char)"pbLowWinner", "..\\Casino\\PokerPot.cpp", 85);
  *((_DWORD *)this + 26) = operator new(4 * *(this + 3));
  if ( !*((_DWORD *)this + 26) )
    sub_5E9F20((char)"plChipsInPot", "..\\Casino\\PokerPot.cpp", 88);
  for ( m = 0; m < *(this + 3); ++m )
    *(_DWORD *)(*((_DWORD *)this + 26) + 4 * m) = 0;
  *((_DWORD *)this + 27) = operator new(4 * *(this + 3));
  if ( !*((_DWORD *)this + 27) )
    sub_5E9F20((char)"plBonusChipInterest", "..\\Casino\\PokerPot.cpp", 93);
  for ( n = 0; n < *(this + 3); ++n )
    *(_DWORD *)(*((_DWORD *)this + 27) + 4 * n) = 0;
  *((_DWORD *)this + 28) = operator new(4 * *(this + 3));
  if ( !*((_DWORD *)this + 28) )
    sub_5E9F20((char)"plShowdownChips", "..\\Casino\\PokerPot.cpp", 98);
  *((_DWORD *)this + 29) = operator new(4 * *(this + 3));
  if ( !*((_DWORD *)this + 29) )
    sub_5E9F20((char)"plHighShowdownChips", "..\\Casino\\PokerPot.cpp", 101);
  *((_DWORD *)this + 30) = operator new(4 * *(this + 3));
  if ( !*((_DWORD *)this + 30) )
    sub_5E9F20((char)"plLowShowdownChips", "..\\Casino\\PokerPot.cpp", 104);
  *((_DWORD *)this + 19) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 19) )
    sub_5E9F20((char)"pshLastBetOrRaiseIndex", "..\\Casino\\PokerPot.cpp", 107);
  for ( ii = 0; ii < *(this + 3); ++ii )
    *(_WORD *)(*((_DWORD *)this + 19) + 2 * ii) = ii;
  *(this + 22) = *(this + 3);
  *((_DWORD *)this + 23) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 23) )
    sub_5E9F20((char)"pshTotalBetsOrRaises", "..\\Casino\\PokerPot.cpp", 113);
  for ( jj = 0; jj < *(this + 3); ++jj )
    *(_WORD *)(*((_DWORD *)this + 23) + 2 * jj) = 0;
  *((_DWORD *)this + 24) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 24) )
    sub_5E9F20((char)"pshTotalCalls", "..\\Casino\\PokerPot.cpp", 118);
  for ( kk = 0; kk < *(this + 3); ++kk )
    *(_WORD *)(*((_DWORD *)this + 24) + 2 * kk) = 0;
  *((_DWORD *)this + 25) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 25) )
    sub_5E9F20((char)"pshTotalChecks", "..\\Casino\\PokerPot.cpp", 123);
  for ( mm = 0; mm < *(this + 3); ++mm )
    *(_WORD *)(*((_DWORD *)this + 25) + 2 * mm) = 0;
  *((_DWORD *)this + 20) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 20) )
    sub_5E9F20((char)"pshBetsOrRaisesThisRound", "..\\Casino\\PokerPot.cpp", 128);
  *((_DWORD *)this + 21) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 21) )
    sub_5E9F20((char)"pshCallsThisRound", "..\\Casino\\PokerPot.cpp", 131);
  *((_DWORD *)this + 22) = operator new(2 * *(this + 3));
  if ( !*((_DWORD *)this + 22) )
    sub_5E9F20((char)"pshChecksThisRound", "..\\Casino\\PokerPot.cpp", 134);
  v12 = *(this + 3);
  v2 = (unsigned __int64)(unsigned int)v12 >> 30 != 0 ? -1 : 4 * v12;
  v11 = (int *)operator new(__CFADD__(v2, 4) ? -1 : v2 + 4);
  if ( v11 )
  {
    *v11 = v12;
    `eh vector constructor iterator'(
      v11 + 1,
      4u,
      v12,
      (void (__thiscall *)(void *))sub_4A20D0,
      ATL::CComCriticalSection::~CComCriticalSection);
    v6 = v11 + 1;
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)this + 31) = v6;
  if ( !*((_DWORD *)this + 31) )
    sub_5E9F20((char)"pphvHigh", "..\\Casino\\PokerPot.cpp", 137);
  v10 = *(this + 3);
  v3 = (unsigned __int64)(unsigned int)v10 >> 30 != 0 ? -1 : 4 * v10;
  v9 = (int *)operator new(__CFADD__(v3, 4) ? -1 : v3 + 4);
  if ( v9 )
  {
    *v9 = v10;
    `eh vector constructor iterator'(
      v9 + 1,
      4u,
      v10,
      (void (__thiscall *)(void *))sub_4A20D0,
      ATL::CComCriticalSection::~CComCriticalSection);
    v5 = v9 + 1;
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 32) = v5;
  if ( !*((_DWORD *)this + 32) )
    sub_5E9F20((char)"pphvLow", "..\\Casino\\PokerPot.cpp", 140);
  v8 = operator new(4 * *(this + 3));
  result = this;
  *((_DWORD *)this + 33) = v8;
  if ( !*((_DWORD *)this + 33) )
    return (__int16 *)sub_5E9F20((char)"pdeclShowdown", "..\\Casino\\PokerPot.cpp", 143);
  return result;
}


//======================================================================
// sub_4F4C80
// entry 004f4c80  size 403  status ok
//======================================================================

int __thiscall sub_4F4C80(_BYTE *this)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 j; // [esp+4h] [ebp-4h]
  __int16 k; // [esp+4h] [ebp-4h]

  if ( !*(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 148);
  if ( *this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 149);
  if ( *(this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 150);
  if ( *(this + 3) )
    sub_5E9F20((char)"!bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 151);
  if ( !*((_DWORD *)this + 23) )
    sub_5E9F20((char)"pshTotalBetsOrRaises", "..\\Casino\\PokerPot.cpp", 155);
  for ( i = 0; i < *((__int16 *)this + 3); ++i )
    *(_WORD *)(*((_DWORD *)this + 23) + 2 * i) = 0;
  if ( !*((_DWORD *)this + 24) )
    sub_5E9F20((char)"pshTotalCalls", "..\\Casino\\PokerPot.cpp", 159);
  for ( j = 0; j < *((__int16 *)this + 3); ++j )
    *(_WORD *)(*((_DWORD *)this + 24) + 2 * j) = 0;
  if ( !*((_DWORD *)this + 25) )
    sub_5E9F20((char)"pshTotalChecks", "..\\Casino\\PokerPot.cpp", 163);
  for ( k = 0; ; ++k )
  {
    result = k;
    if ( k >= *((__int16 *)this + 3) )
      break;
    *(_WORD *)(*((_DWORD *)this + 25) + 2 * k) = 0;
  }
  return result;
}


//======================================================================
// sub_4F4E20
// entry 004f4e20  size 350  status ok
//======================================================================

int __thiscall sub_4F4E20(__int16 *this, int a2)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 172);
  if ( a2 <= 0 )
    sub_5E9F20((char)"lBonusChips>0L", "..\\Casino\\PokerPot.cpp", 173);
  if ( *(_BYTE *)this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 174);
  if ( *((_BYTE *)this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 175);
  if ( *((_BYTE *)this + 3) )
    sub_5E9F20((char)"!bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 176);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 177);
  *((_DWORD *)this + 3) += a2;
  *((_DWORD *)this + 4) += a2;
  for ( i = 0; ; ++i )
  {
    result = *(this + 3);
    if ( i >= result )
      break;
    if ( !*(_BYTE *)(*((_DWORD *)this + 12) + i) && !*(_BYTE *)(*((_DWORD *)this + 13) + i) )
      *(_DWORD *)(*((_DWORD *)this + 27) + 4 * i) += a2;
  }
  return result;
}


//======================================================================
// sub_4F4F80
// entry 004f4f80  size 388  status ok
//======================================================================

__int16 __thiscall sub_4F4F80(__int16 *this, __int16 a2)
{
  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 194);
  if ( a2 < 0 )
    sub_5E9F20((char)"shAllInPlayer >= 0", "..\\Casino\\PokerPot.cpp", 195);
  if ( a2 >= *(this + 3) )
    sub_5E9F20((char)"shAllInPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 196);
  if ( *(_BYTE *)this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 197);
  if ( *((_BYTE *)this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 198);
  if ( *((_BYTE *)this + 3) )
    sub_5E9F20((char)"!bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 199);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 200);
  if ( *(_BYTE *)(*((_DWORD *)this + 13) + a2) )
    sub_5E9F20((char)"!pbAllIn[shAllInPlayer]", "..\\Casino\\PokerPot.cpp", 201);
  if ( *(_BYTE *)(*((_DWORD *)this + 12) + a2) )
    sub_5E9F20((char)"!pbFolded[shAllInPlayer]", "..\\Casino\\PokerPot.cpp", 202);
  *(_BYTE *)(a2 + *((_DWORD *)this + 13)) = 1;
  if ( (__int16)sub_4F9110(this) != 1 )
    return -1;
  sub_4F9220(this);
  return -3;
}


//======================================================================
// sub_4F5110
// entry 004f5110  size 395  status ok
//======================================================================

__int16 *__thiscall sub_4F5110(__int16 *this, int a2, __int16 a3)
{
  __int16 i; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 220);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 221);
  if ( *(_BYTE *)this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 222);
  if ( *((_BYTE *)this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 223);
  if ( *((_BYTE *)this + 3) )
    sub_5E9F20((char)"!bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 224);
  if ( a3 < 0 )
    sub_5E9F20((char)"shInitialPlayer >= 0", "..\\Casino\\PokerPot.cpp", 225);
  if ( a3 >= *(this + 3) )
    sub_5E9F20((char)"shInitialPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 226);
  if ( *(_BYTE *)(*((_DWORD *)this + 13) + a3) || *(_BYTE *)(*((_DWORD *)this + 12) + a3) )
    sub_5E9F20((char)"!pbAllIn[shInitialPlayer] && !pbFolded[shInitialPlayer]", "..\\Casino\\PokerPot.cpp", 227);
  *((_BYTE *)this + 2) = 1;
  *(this + 4) = a3;
  for ( i = 0; i < *(this + 3); ++i )
    *(_BYTE *)(i + *((_DWORD *)this + 14)) = 0;
  *((_DWORD *)this + 6) = a2;
  return this;
}


//======================================================================
// sub_4F52A0
// entry 004f52a0  size 274  status ok
//======================================================================

__int16 __thiscall sub_4F52A0(int this)
{
  __int16 v3; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 2) )
    sub_5E9F20((char)"bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 240);
  if ( *(_BYTE *)(*(_DWORD *)(this + 56) + *(__int16 *)(this + 8)) )
    sub_5E9F20((char)"!pbActedThisRound[shCurrentPlayer]", "..\\Casino\\PokerPot.cpp", 241);
  *(_DWORD *)(this + 12) += *(_DWORD *)(this + 24);
  *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 8)) += *(_DWORD *)(this + 24);
  *(_BYTE *)(*(__int16 *)(this + 8) + *(_DWORD *)(this + 56)) = 1;
  v3 = sub_4F9050(this);
  if ( v3 < 0 )
    sub_5E9F20((char)"shReturn >= 0", "..\\Casino\\PokerPot.cpp", 248);
  if ( !*(_BYTE *)(*(_DWORD *)(this + 56) + v3) )
    return v3;
  *(_BYTE *)(this + 2) = 0;
  if ( (__int16)sub_4F9110(this) > 1 )
    return -1;
  sub_4F9220(this);
  return -3;
}


//======================================================================
// sub_4F53C0
// entry 004f53c0  size 365  status ok
//======================================================================

__int16 __thiscall sub_4F53C0(int this, int a2)
{
  __int16 v4; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 2) )
    sub_5E9F20((char)"bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 268);
  if ( *(_BYTE *)(*(_DWORD *)(this + 56) + *(__int16 *)(this + 8)) )
    sub_5E9F20((char)"!pbActedThisRound[shCurrentPlayer]", "..\\Casino\\PokerPot.cpp", 269);
  if ( a2 < 0 )
    sub_5E9F20((char)"lPartialAnteChips >= 0", "..\\Casino\\PokerPot.cpp", 270);
  if ( a2 > *(_DWORD *)(this + 24) )
    sub_5E9F20((char)"lPartialAnteChips <= lAnteChips", "..\\Casino\\PokerPot.cpp", 271);
  if ( !a2 )
    a2 = *(_DWORD *)(this + 24);
  *(_DWORD *)(this + 12) += a2;
  *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 8)) += a2;
  *(_BYTE *)(*(__int16 *)(this + 8) + *(_DWORD *)(this + 56)) = 1;
  *(_BYTE *)(*(__int16 *)(this + 8) + *(_DWORD *)(this + 52)) = 1;
  v4 = sub_4F9050(this);
  if ( v4 < 0 )
    sub_5E9F20((char)"shReturn >= 0", "..\\Casino\\PokerPot.cpp", 282);
  if ( !*(_BYTE *)(*(_DWORD *)(this + 56) + v4) )
    return v4;
  *(_BYTE *)(this + 2) = 0;
  if ( (__int16)sub_4F9110(this) > 1 )
    return -1;
  sub_4F9220(this);
  return -3;
}


//======================================================================
// sub_4F5530
// entry 004f5530  size 557  status ok
//======================================================================

int __thiscall sub_4F5530(__int16 *this, __int16 a2, __int16 a3)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 j; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 303);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 304);
  if ( *(_BYTE *)this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 305);
  if ( *((_BYTE *)this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 306);
  if ( *((_BYTE *)this + 3) )
    sub_5E9F20((char)"!bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 307);
  if ( a2 < 0 )
    sub_5E9F20((char)"shInitialPlayer >= 0", "..\\Casino\\PokerPot.cpp", 308);
  if ( a2 >= *(this + 3) )
    sub_5E9F20((char)"shInitialPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 309);
  if ( *(_BYTE *)(*((_DWORD *)this + 13) + a2) || *(_BYTE *)(*((_DWORD *)this + 12) + a2) )
    sub_5E9F20((char)"!pbAllIn[shInitialPlayer] && !pbFolded[shInitialPlayer]", "..\\Casino\\PokerPot.cpp", 310);
  *(this + 68) = a3;
  *(_BYTE *)this = 1;
  *(_BYTE *)(dword_791364 + 1033) = 0;
  *(_BYTE *)(dword_791364 + 1035) = 0;
  *(_BYTE *)(dword_791364 + 1034) = 0;
  sub_479800((void *)dword_791364, 0);
  *(this + 4) = a2;
  *((_DWORD *)this + 5) = *(_DWORD *)(*((_DWORD *)this + 26) + 4 * *(this + 4));
  for ( i = 0; i < *(this + 3); ++i )
    *(_BYTE *)(i + *((_DWORD *)this + 14)) = 0;
  for ( j = 0; ; ++j )
  {
    result = *(this + 3);
    if ( j >= result )
      break;
    *(_WORD *)(*((_DWORD *)this + 20) + 2 * j) = 0;
    *(_WORD *)(*((_DWORD *)this + 21) + 2 * j) = 0;
    *(_WORD *)(*((_DWORD *)this + 22) + 2 * j) = 0;
  }
  return result;
}


//======================================================================
// sub_4F5760
// entry 004f5760  size 350  status ok
//======================================================================

__int16 __thiscall sub_4F5760(__int16 *this)
{
  __int16 v3; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 335);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 336);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 337);
  if ( !(unsigned __int8)sub_4F6640(this) )
    sub_5E9F20((char)"IsCheckOrBetPossible()", "..\\Casino\\PokerPot.cpp", 338);
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 14)) = 1;
  ++*(_WORD *)(*((_DWORD *)this + 22) + 2 * *(this + 4));
  ++*(_WORD *)(*((_DWORD *)this + 25) + 2 * *(this + 4));
  v3 = sub_4F8F20(this);
  if ( v3 < 0 )
    sub_5E9F20((char)"shReturn >= 0", "..\\Casino\\PokerPot.cpp", 344);
  if ( !*(_BYTE *)(*((_DWORD *)this + 14) + v3) || *(_DWORD *)(*((_DWORD *)this + 26) + 4 * v3) != *((_DWORD *)this + 5) )
    return v3;
  *(_BYTE *)this = 0;
  return -1;
}


//======================================================================
// sub_4F58C0
// entry 004f58c0  size 435  status ok
//======================================================================

__int16 __thiscall sub_4F58C0(__int16 *this, int a2)
{
  __int16 v4; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 359);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 360);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 361);
  if ( a2 <= 0 )
    sub_5E9F20((char)"lBetChips > 0", "..\\Casino\\PokerPot.cpp", 362);
  if ( !(unsigned __int8)sub_4F6640(this) )
    sub_5E9F20((char)"IsCheckOrBetPossible()", "..\\Casino\\PokerPot.cpp", 363);
  *(_WORD *)(*((_DWORD *)this + 19) + 2 * *(this + 4)) = (*(this + 22))++;
  ++*(_WORD *)(*((_DWORD *)this + 23) + 2 * *(this + 4));
  ++*(_WORD *)(*((_DWORD *)this + 20) + 2 * *(this + 4));
  *((_DWORD *)this + 3) += a2;
  *(_DWORD *)(*((_DWORD *)this + 26) + 4 * *(this + 4)) += a2;
  *((_DWORD *)this + 5) += a2;
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 14)) = 1;
  v4 = sub_4F8F20(this);
  if ( v4 < 0 )
    sub_5E9F20((char)"shReturn >= 0", "..\\Casino\\PokerPot.cpp", 376);
  return v4;
}


//======================================================================
// sub_4F5A80
// entry 004f5a80  size 435  status ok
//======================================================================

__int16 __thiscall sub_4F5A80(__int16 *this, int a2)
{
  __int16 v4; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 384);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 385);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 386);
  if ( a2 <= 0 )
    sub_5E9F20((char)"lBetChips > 0", "..\\Casino\\PokerPot.cpp", 387);
  if ( !(unsigned __int8)sub_4F6640(this) )
    sub_5E9F20((char)"IsCheckOrBetPossible()", "..\\Casino\\PokerPot.cpp", 388);
  *(_WORD *)(*((_DWORD *)this + 19) + 2 * *(this + 4)) = (*(this + 22))++;
  ++*(_WORD *)(*((_DWORD *)this + 23) + 2 * *(this + 4));
  ++*(_WORD *)(*((_DWORD *)this + 20) + 2 * *(this + 4));
  *((_DWORD *)this + 3) += a2;
  *(_DWORD *)(*((_DWORD *)this + 26) + 4 * *(this + 4)) += a2;
  *((_DWORD *)this + 5) += a2;
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 13)) = 1;
  v4 = sub_4F8F20(this);
  if ( v4 < 0 )
    sub_5E9F20((char)"shReturn >= 0", "..\\Casino\\PokerPot.cpp", 401);
  return v4;
}


//======================================================================
// sub_4F5C40
// entry 004f5c40  size 132  status ok
//======================================================================

__int16 __thiscall sub_4F5C40(int this, int a2, char a3)
{
  __int16 v5; // [esp+4h] [ebp-8h]
  __int16 v6; // [esp+8h] [ebp-4h]

  v6 = *(_WORD *)(this + 8);
  v5 = sub_4F58C0((__int16 *)this, a2);
  --*(_WORD *)(*(_DWORD *)(this + 92) + 2 * v6);
  --*(_WORD *)(*(_DWORD *)(this + 80) + 2 * v6);
  if ( a3 )
    *(_BYTE *)(v6 + *(_DWORD *)(this + 56)) = 0;
  return v5;
}


//======================================================================
// sub_4F5CD0
// entry 004f5cd0  size 417  status ok
//======================================================================

__int16 __thiscall sub_4F5CD0(__int16 *this)
{
  int v1; // esi
  int v2; // edi
  __int16 v5; // [esp+Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 421);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 422);
  if ( !(unsigned __int8)sub_4F6690(this) )
    sub_5E9F20((char)"IsCallPossible()", "..\\Casino\\PokerPot.cpp", 423);
  *((_DWORD *)this + 3) += sub_4F67D0(this);
  v1 = *(this + 4);
  v2 = *((_DWORD *)this + 26);
  *(_DWORD *)(v2 + 4 * v1) += sub_4F67D0(this);
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 14)) = 1;
  ++*(_WORD *)(*((_DWORD *)this + 24) + 2 * *(this + 4));
  ++*(_WORD *)(*((_DWORD *)this + 21) + 2 * *(this + 4));
  v5 = sub_4F8F20(this);
  if ( v5 < 0
    || !*(_BYTE *)(*((_DWORD *)this + 14) + v5)
    || *(_DWORD *)(*((_DWORD *)this + 26) + 4 * v5) != *((_DWORD *)this + 5) )
  {
    return v5;
  }
  *(_BYTE *)this = 0;
  if ( (__int16)sub_4F9110(this) != 1 )
    return -1;
  sub_4F9220(this);
  if ( sub_4F6420(this) )
    sub_5E9F20((char)"GetRefundChips() == 0L", "..\\Casino\\PokerPot.cpp", 438);
  return -3;
}


//======================================================================
// sub_4F5E80
// entry 004f5e80  size 401  status ok
//======================================================================

__int16 __thiscall sub_4F5E80(__int16 *this, int a2)
{
  __int16 v4; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 451);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 452);
  if ( !(unsigned __int8)sub_4F6690(this) )
    sub_5E9F20((char)"IsCallPossible()", "..\\Casino\\PokerPot.cpp", 453);
  if ( !a2 )
    a2 = sub_4F67D0(this);
  *((_DWORD *)this + 3) += a2;
  *(_DWORD *)(*((_DWORD *)this + 26) + 4 * *(this + 4)) += a2;
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 13)) = 1;
  ++*(_WORD *)(*((_DWORD *)this + 24) + 2 * *(this + 4));
  ++*(_WORD *)(*((_DWORD *)this + 21) + 2 * *(this + 4));
  v4 = sub_4F8F20(this);
  if ( v4 < 0 || *(_DWORD *)(*((_DWORD *)this + 26) + 4 * v4) != *((_DWORD *)this + 5) )
    return v4;
  if ( (__int16)sub_4F9110(this) > 1 )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 14) + v4) )
    {
      *(_BYTE *)this = 0;
      return -1;
    }
    else
    {
      return v4;
    }
  }
  else
  {
    *(_BYTE *)this = 0;
    sub_4F9220(this);
    return -3;
  }
}


//======================================================================
// sub_4F6020
// entry 004f6020  size 486  status ok
//======================================================================

__int16 __thiscall sub_4F6020(__int16 *this, int a2)
{
  int v2; // esi
  int v3; // edi
  __int16 v6; // [esp+Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 488);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 489);
  if ( (__int16)sub_4F9110(this) < 2 )
    sub_5E9F20((char)"ActivePlayersLeft() >= 2", "..\\Casino\\PokerPot.cpp", 490);
  if ( a2 <= 0 )
    sub_5E9F20((char)"lRaiseChips > 0", "..\\Casino\\PokerPot.cpp", 491);
  if ( !(unsigned __int8)sub_4F66E0(this) )
    sub_5E9F20((char)"IsRaisePossible()", "..\\Casino\\PokerPot.cpp", 492);
  *(_WORD *)(*((_DWORD *)this + 19) + 2 * *(this + 4)) = (*(this + 22))++;
  ++*(_WORD *)(*((_DWORD *)this + 23) + 2 * *(this + 4));
  ++*(_WORD *)(*((_DWORD *)this + 20) + 2 * *(this + 4));
  --*(this + 68);
  *((_DWORD *)this + 3) += a2 + sub_4F67D0(this);
  v2 = *(this + 4);
  v3 = *((_DWORD *)this + 26);
  *(_DWORD *)(v3 + 4 * v2) += a2 + sub_4F67D0(this);
  *((_DWORD *)this + 5) = *(_DWORD *)(*((_DWORD *)this + 26) + 4 * *(this + 4));
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 14)) = 1;
  v6 = sub_4F8F20(this);
  if ( v6 < 0 )
    sub_5E9F20((char)"shReturn >= 0", "..\\Casino\\PokerPot.cpp", 506);
  return v6;
}


//======================================================================
// sub_4F6210
// entry 004f6210  size 60  status ok
//======================================================================

__int16 __thiscall sub_4F6210(int this, int a2)
{
  __int16 v4; // [esp+4h] [ebp-8h]
  __int16 v5; // [esp+8h] [ebp-4h]

  v5 = *(_WORD *)(this + 8);
  v4 = sub_4F6020((__int16 *)this, a2);
  *(_BYTE *)(v5 + *(_DWORD *)(this + 52)) = 1;
  return v4;
}


//======================================================================
// sub_4F6250
// entry 004f6250  size 132  status ok
//======================================================================

__int16 __thiscall sub_4F6250(int this, int a2, char a3)
{
  __int16 v5; // [esp+4h] [ebp-8h]
  __int16 v6; // [esp+8h] [ebp-4h]

  v6 = *(_WORD *)(this + 8);
  v5 = sub_4F6020((__int16 *)this, a2);
  --*(_WORD *)(*(_DWORD *)(this + 92) + 2 * v6);
  --*(_WORD *)(*(_DWORD *)(this + 80) + 2 * v6);
  if ( a3 )
    *(_BYTE *)(v6 + *(_DWORD *)(this + 56)) = 0;
  return v5;
}


//======================================================================
// sub_4F62E0
// entry 004f62e0  size 309  status ok
//======================================================================

__int16 __thiscall sub_4F62E0(__int16 *this)
{
  __int16 v3; // [esp+4h] [ebp-4h]

  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 536);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 537);
  *(_BYTE *)(*(this + 4) + *((_DWORD *)this + 12)) = 1;
  v3 = sub_4F8F20(this);
  if ( v3 < 0 )
    return v3;
  if ( (__int16)sub_4F91A0(this) == 1 )
  {
    *(_BYTE *)this = 0;
    return -2;
  }
  else if ( (__int16)sub_4F9110(this) > 1 )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 14) + v3)
      && *(_DWORD *)(*((_DWORD *)this + 26) + 4 * v3) == *((_DWORD *)this + 5) )
    {
      *(_BYTE *)this = 0;
      return -1;
    }
    else
    {
      return v3;
    }
  }
  else if ( *(_BYTE *)(*((_DWORD *)this + 12) + v3)
         || *(_DWORD *)(*((_DWORD *)this + 26) + 4 * v3) == *((_DWORD *)this + 5) )
  {
    *(_BYTE *)this = 0;
    sub_4F9220(this);
    return -3;
  }
  else
  {
    return v3;
  }
}


//======================================================================
// sub_4F6420
// entry 004f6420  size 129  status ok
//======================================================================

int __thiscall sub_4F6420(int this)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 573);
  if ( (__int16)sub_4F9110(this) > 1 )
    sub_5E9F20((char)"ActivePlayersLeft() <= 1", "..\\Casino\\PokerPot.cpp", 574);
  if ( (__int16)sub_4F91A0(this) <= 1 )
    sub_5E9F20((char)"TotalPlayersLeft() > 1", "..\\Casino\\PokerPot.cpp", 575);
  return *(_DWORD *)(this + 28);
}


//======================================================================
// sub_4F64B0
// entry 004f64b0  size 130  status ok
//======================================================================

__int16 __thiscall sub_4F64B0(int this)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 582);
  if ( (__int16)sub_4F9110(this) > 1 )
    sub_5E9F20((char)"ActivePlayersLeft() <= 1", "..\\Casino\\PokerPot.cpp", 583);
  if ( (__int16)sub_4F91A0(this) <= 1 )
    sub_5E9F20((char)"TotalPlayersLeft() > 1", "..\\Casino\\PokerPot.cpp", 584);
  return *(_WORD *)(this + 32);
}


//======================================================================
// sub_4F6540
// entry 004f6540  size 245  status ok
//======================================================================

__int16 __thiscall sub_4F6540(_BYTE *this)
{
  __int16 i; // [esp+4h] [ebp-4h]

  if ( !*(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 591);
  if ( (__int16)sub_4F91A0(this) != 1 )
    sub_5E9F20((char)"TotalPlayersLeft() == 1", "..\\Casino\\PokerPot.cpp", 592);
  if ( *this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 593);
  if ( *(this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 594);
  for ( i = 0; i < *((__int16 *)this + 3); ++i )
  {
    if ( !*(_BYTE *)(*((_DWORD *)this + 12) + i) )
      return i;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerPot.cpp", 602);
  return -1;
}


//======================================================================
// sub_4F6640
// entry 004f6640  size 79  status ok
//======================================================================

bool __thiscall sub_4F6640(_BYTE *this)
{
  if ( !*(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 608);
  return *this && sub_4F67D0(this) == 0;
}


//======================================================================
// sub_4F6690
// entry 004f6690  size 79  status ok
//======================================================================

bool __thiscall sub_4F6690(_BYTE *this)
{
  if ( !*(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 621);
  return *this && sub_4F67D0(this) > 0;
}


//======================================================================
// sub_4F66E0
// entry 004f66e0  size 231  status ok
//======================================================================

bool __thiscall sub_4F66E0(int this)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 634);
  if ( !*(_BYTE *)this )
    return 0;
  if ( !sub_4F6690((_BYTE *)this) )
    return 0;
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
  {
    if ( !*(_WORD *)(this + 136) && (__int16)sub_4F9110(this) >= 2 )
      return 0;
  }
  else if ( !*(_WORD *)(this + 136) && (__int16)sub_4F9110(this) > 2 )
  {
    return 0;
  }
  return (__int16)sub_4F9110(this) != 1;
}


//======================================================================
// sub_4F67D0
// entry 004f67d0  size 102  status ok
//======================================================================

int __thiscall sub_4F67D0(__int16 *this)
{
  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 673);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 674);
  return *((_DWORD *)this + 5) - *(_DWORD *)(*((_DWORD *)this + 26) + 4 * *(this + 4));
}


//======================================================================
// sub_4F6840
// entry 004f6840  size 51  status ok
//======================================================================

int __thiscall sub_4F6840(int this)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 681);
  return *(_DWORD *)(this + 12);
}


//======================================================================
// sub_4F6880
// entry 004f6880  size 163  status ok
//======================================================================

__int16 __thiscall sub_4F6880(__int16 *this, __int16 a2)
{
  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 690);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 691);
  if ( a2 < 0 )
    sub_5E9F20((char)"shPlayer >= 0", "..\\Casino\\PokerPot.cpp", 692);
  if ( a2 >= *(this + 3) )
    sub_5E9F20((char)"shPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 693);
  return *(_WORD *)(*((_DWORD *)this + 20) + 2 * a2);
}


//======================================================================
// sub_4F6930
// entry 004f6930  size 163  status ok
//======================================================================

__int16 __thiscall sub_4F6930(__int16 *this, __int16 a2)
{
  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 702);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 703);
  if ( a2 < 0 )
    sub_5E9F20((char)"shPlayer >= 0", "..\\Casino\\PokerPot.cpp", 704);
  if ( a2 >= *(this + 3) )
    sub_5E9F20((char)"shPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 705);
  return *(_WORD *)(*((_DWORD *)this + 21) + 2 * a2);
}


//======================================================================
// sub_4F69E0
// entry 004f69e0  size 163  status ok
//======================================================================

__int16 __thiscall sub_4F69E0(__int16 *this, __int16 a2)
{
  if ( !*((_BYTE *)this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 714);
  if ( !*(_BYTE *)this )
    sub_5E9F20((char)"bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 715);
  if ( a2 < 0 )
    sub_5E9F20((char)"shPlayer >= 0", "..\\Casino\\PokerPot.cpp", 716);
  if ( a2 >= *(this + 3) )
    sub_5E9F20((char)"shPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 717);
  return *(_WORD *)(*((_DWORD *)this + 22) + 2 * a2);
}


//======================================================================
// sub_4F6A90
// entry 004f6a90  size 130  status ok
//======================================================================

__int16 __thiscall sub_4F6A90(int this, __int16 a2)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 726);
  if ( a2 < 0 )
    sub_5E9F20((char)"shPlayer >= 0", "..\\Casino\\PokerPot.cpp", 727);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 728);
  return *(_WORD *)(*(_DWORD *)(this + 92) + 2 * a2);
}


//======================================================================
// sub_4F6B20
// entry 004f6b20  size 130  status ok
//======================================================================

__int16 __thiscall sub_4F6B20(int this, __int16 a2)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 737);
  if ( a2 < 0 )
    sub_5E9F20((char)"shPlayer >= 0", "..\\Casino\\PokerPot.cpp", 738);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 739);
  return *(_WORD *)(*(_DWORD *)(this + 96) + 2 * a2);
}


//======================================================================
// sub_4F6BB0
// entry 004f6bb0  size 130  status ok
//======================================================================

__int16 __thiscall sub_4F6BB0(int this, __int16 a2)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 748);
  if ( a2 < 0 )
    sub_5E9F20((char)"shPlayer >= 0", "..\\Casino\\PokerPot.cpp", 749);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 750);
  return *(_WORD *)(*(_DWORD *)(this + 100) + 2 * a2);
}


//======================================================================
// sub_4F6C40
// entry 004f6c40  size 51  status ok
//======================================================================

int __thiscall sub_4F6C40(_DWORD *this, __int16 a2)
{
  if ( *((_BYTE *)this + 1) && *(_BYTE *)this )
    return *(_DWORD *)(*(this + 26) + 4 * a2);
  else
    return 0;
}


//======================================================================
// sub_4F6C80
// entry 004f6c80  size 489  status ok
//======================================================================

char __thiscall sub_4F6C80(_BYTE *this)
{
  __int16 i; // [esp+4h] [ebp-4h]

  if ( !*(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 765);
  if ( *(this + 2) )
    sub_5E9F20((char)"!bAnteRoundInProgress", "..\\Casino\\PokerPot.cpp", 766);
  if ( *this )
    sub_5E9F20((char)"!bBettingRoundInProgress", "..\\Casino\\PokerPot.cpp", 767);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  for ( i = 0; i < *((__int16 *)this + 3); ++i )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 12) + i) || *(_DWORD *)(*((_DWORD *)this + 26) + 4 * i) <= *((_DWORD *)this + 9) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)this + 12) + i)
        && *(_DWORD *)(*((_DWORD *)this + 26) + 4 * i) == *((_DWORD *)this + 9)
        && *(_DWORD *)(*((_DWORD *)this + 27) + 4 * i) > *((_DWORD *)this + 10) )
      {
        *((_DWORD *)this + 9) = *(_DWORD *)(*((_DWORD *)this + 26) + 4 * i);
        *((_DWORD *)this + 10) = *(_DWORD *)(*((_DWORD *)this + 27) + 4 * i);
      }
    }
    else
    {
      *((_DWORD *)this + 9) = *(_DWORD *)(*((_DWORD *)this + 26) + 4 * i);
      *((_DWORD *)this + 10) = *(_DWORD *)(*((_DWORD *)this + 27) + 4 * i);
    }
  }
  if ( *((int *)this + 9) <= 0 && *((int *)this + 10) <= 0 )
  {
    *(this + 1) = 0;
    *(this + 3) = 0;
    *(this + 5) = 0;
    if ( *((_DWORD *)this + 3) )
      sub_5E9F20((char)"lTotalPot == 0L", "..\\Casino\\PokerPot.cpp", 809);
    if ( *((_DWORD *)this + 4) )
      sub_5E9F20((char)"lTotalBonusChips == 0L", "..\\Casino\\PokerPot.cpp", 810);
    return 0;
  }
  else
  {
    *(this + 3) = 1;
    *(this + 5) = 0;
    *((_WORD *)this + 23) = -1;
    return 1;
  }
}


//======================================================================
// sub_4F6E70
// entry 004f6e70  size 471  status ok
//======================================================================

__int16 __thiscall sub_4F6E70(int this)
{
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 v4; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 817);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 818);
  if ( *(__int16 *)(this + 46) == -1 )
  {
    for ( i = 0; i < *(__int16 *)(this + 6); ++i )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
        && *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i) == *(_DWORD *)(this + 36)
        && *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * i) == *(_DWORD *)(this + 40) )
      {
        if ( *(__int16 *)(this + 46) == -1 )
        {
          *(_WORD *)(this + 46) = i;
        }
        else if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76)
                                                                            + 2 * *(__int16 *)(this + 46)) )
        {
          *(_WORD *)(this + 46) = i;
        }
      }
    }
  }
  v4 = *(_WORD *)(this + 46);
  if ( !*(_BYTE *)(*(_DWORD *)(this + 60) + v4) )
    return *(_WORD *)(this + 46);
  do
  {
    if ( ++v4 == *(__int16 *)(this + 6) )
      v4 = 0;
  }
  while ( v4 != *(__int16 *)(this + 46)
       && (*(_BYTE *)(*(_DWORD *)(this + 48) + v4)
        || *(_BYTE *)(*(_DWORD *)(this + 60) + v4)
        || *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * v4) != *(_DWORD *)(this + 36)
        || *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v4) != *(_DWORD *)(this + 40)) );
  if ( v4 == *(__int16 *)(this + 46) )
    return -1;
  else
    return v4;
}


//======================================================================
// sub_4F7050
// entry 004f7050  size 453  status ok
//======================================================================

void __thiscall sub_4F7050(int this, __int16 a2, int a3)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 865);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 866);
  if ( a2 < 0 )
    sub_5E9F20((char)"shShowdownPlayer >= 0", "..\\Casino\\PokerPot.cpp", 867);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shShowdownPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 868);
  if ( *(_BYTE *)(*(_DWORD *)(this + 48) + a2) )
    sub_5E9F20((char)"!pbFolded[shShowdownPlayer]", "..\\Casino\\PokerPot.cpp", 869);
  if ( *(_BYTE *)(*(_DWORD *)(this + 60) + a2) )
    sub_5E9F20((char)"!pbInShowdownYet[shShowdownPlayer]", "..\\Casino\\PokerPot.cpp", 870);
  if ( *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * a2) != *(_DWORD *)(this + 36) )
    sub_5E9F20((char)"plChipsInPot[shShowdownPlayer] == lCurrentShowdownLevel", "..\\Casino\\PokerPot.cpp", 871);
  if ( *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * a2) != *(_DWORD *)(this + 40) )
    sub_5E9F20(
      (char)"plBonusChipInterest[shShowdownPlayer] == lCurrentShowdownBonusLevel",
      "..\\Casino\\PokerPot.cpp",
      872);
  *(_BYTE *)(a2 + *(_DWORD *)(this + 60)) = 1;
  *(_DWORD *)(*(_DWORD *)(this + 124) + 4 * a2) = a3;
  *(_DWORD *)(*(_DWORD *)(this + 128) + 4 * a2) = a3;
  *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * a2) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&a3);
}


//======================================================================
// sub_4F7220
// entry 004f7220  size 420  status ok
//======================================================================

void __thiscall sub_4F7220(int this, __int16 a2, int a3, int a4, int a5)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 887);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 888);
  if ( a2 < 0 )
    sub_5E9F20((char)"shShowdownPlayer >= 0", "..\\Casino\\PokerPot.cpp", 889);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shShowdownPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 890);
  if ( *(_BYTE *)(*(_DWORD *)(this + 48) + a2) )
    sub_5E9F20((char)"!pbFolded[shShowdownPlayer]", "..\\Casino\\PokerPot.cpp", 891);
  if ( *(_BYTE *)(*(_DWORD *)(this + 60) + a2) )
    sub_5E9F20((char)"!pbInShowdownYet[shShowdownPlayer]", "..\\Casino\\PokerPot.cpp", 892);
  if ( *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * a2) != *(_DWORD *)(this + 36) )
    sub_5E9F20((char)"plChipsInPot[shShowdownPlayer] == lCurrentShowdownLevel", "..\\Casino\\PokerPot.cpp", 893);
  *(_BYTE *)(a2 + *(_DWORD *)(this + 60)) = 1;
  *(_DWORD *)(*(_DWORD *)(this + 124) + 4 * a2) = a3;
  *(_DWORD *)(*(_DWORD *)(this + 128) + 4 * a2) = a4;
  *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * a2) = a5;
  ATL::CComCriticalSection::~CComCriticalSection(&a3);
  ATL::CComCriticalSection::~CComCriticalSection(&a4);
}


//======================================================================
// sub_4F73D0
// entry 004f73d0  size 1230  status ok
//======================================================================

__int16 __thiscall sub_4F73D0(int this, char a2)
{
  int v4; // [esp+Ch] [ebp-2Ch]
  __int16 v5; // [esp+10h] [ebp-28h]
  __int16 v6; // [esp+18h] [ebp-20h]
  int v7; // [esp+1Ch] [ebp-1Ch]
  __int16 v8; // [esp+20h] [ebp-18h]
  int v9; // [esp+24h] [ebp-14h] BYREF
  __int16 i; // [esp+28h] [ebp-10h]
  int v11; // [esp+34h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 905);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 906);
  if ( sub_4F6E70(this) != -1 )
    sub_5E9F20((char)"GetShowdownPlayer() == ENDOFROUND", "..\\Casino\\PokerPot.cpp", 907);
  *(_BYTE *)(this + 4) = 0;
  sub_4A20D0(&v9);
  v11 = 0;
  if ( a2 )
    sub_4A2100(
      &v9,
      (_BYTE *)dword_791390,
      &byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF);
  else
    sub_4A2100(
      &v9,
      (_BYTE *)dword_7913CC,
      (_BYTE *)dword_7913C8,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF);
  v6 = 0;
  v8 = -1;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    *(_BYTE *)(i + *(_DWORD *)(this + 64)) = 1;
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
      && *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i) == *(_DWORD *)(this + 36)
      && *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * i) == *(_DWORD *)(this + 40) )
    {
      if ( a2 )
      {
        if ( v6 && !sub_4A2550((unsigned __int8 *)&v9, (unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i)) )
        {
          if ( sub_4A2340((unsigned __int8 *)&v9, (unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i)) )
            ++v6;
        }
        else
        {
          v6 = 1;
          v8 = i;
          v9 = *(_DWORD *)(*(_DWORD *)(this + 124) + 4 * i);
        }
      }
      else if ( v6 && !sub_4A2440((unsigned __int8 *)&v9, (unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i)) )
      {
        if ( sub_4A2340((unsigned __int8 *)&v9, (unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i)) )
          ++v6;
      }
      else
      {
        v6 = 1;
        v8 = i;
        v9 = *(_DWORD *)(*(_DWORD *)(this + 128) + 4 * i);
      }
    }
  }
  if ( v8 < 0 )
    sub_5E9F20((char)"shFirstWinningIndex >= 0", "..\\Casino\\PokerPot.cpp", 950);
  if ( v6 < 0 )
    sub_5E9F20((char)"shNumberOfWinners >= 0", "..\\Casino\\PokerPot.cpp", 951);
  v7 = sub_4F9580(this);
  *(_BYTE *)(this + 5) = 1;
  if ( v6 == 1 )
  {
    *(_DWORD *)(*(_DWORD *)(this + 112) + 4 * v8) = v7;
    v11 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v9);
    return v8;
  }
  else
  {
    v4 = v7 / v6;
    v5 = v8;
    for ( i = 0; i < *(__int16 *)(this + 6); ++i )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
      {
        if ( a2 )
        {
          if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v9) )
          {
            *(_DWORD *)(*(_DWORD *)(this + 112) + 4 * i) += v4;
            if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v5) )
              v5 = i;
            *(_BYTE *)(i + *(_DWORD *)(this + 64)) = 0;
          }
        }
        else if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v9) )
        {
          *(_DWORD *)(*(_DWORD *)(this + 112) + 4 * i) += v4;
          if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v5) )
            v5 = i;
          *(_BYTE *)(i + *(_DWORD *)(this + 64)) = 0;
        }
      }
    }
    *(_DWORD *)(*(_DWORD *)(this + 112) + 4 * v5) += v7 % v6;
    v11 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v9);
    return -4;
  }
}


//======================================================================
// sub_4F78A0
// entry 004f78a0  size 272  status ok
//======================================================================

int __thiscall sub_4F78A0(int this, __int16 a2)
{
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1001);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1002);
  if ( a2 < 0 )
    sub_5E9F20((char)"shShowdownPlayer >= 0", "..\\Casino\\PokerPot.cpp", 1003);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shShowdownPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 1004);
  if ( !*(_BYTE *)(this + 5) )
    sub_5E9F20((char)"bHaveShowdownResult", "..\\Casino\\PokerPot.cpp", 1005);
  if ( *(_BYTE *)(this + 4) )
    sub_5E9F20((char)"!bHighLowShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1006);
  if ( !*(_BYTE *)(*(_DWORD *)(this + 60) + a2) )
    sub_5E9F20((char)"pbInShowdownYet[shShowdownPlayer]", "..\\Casino\\PokerPot.cpp", 1007);
  return *(_DWORD *)(*(_DWORD *)(this + 112) + 4 * a2);
}


//======================================================================
// sub_4F79B0
// entry 004f79b0  size 297  status ok
//======================================================================

int __thiscall sub_4F79B0(int this, __int16 a2, char a3)
{
  int v3; // edx

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1017);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1018);
  if ( a2 < 0 )
    sub_5E9F20((char)"shShowdownPlayer >= 0", "..\\Casino\\PokerPot.cpp", 1019);
  if ( a2 >= *(__int16 *)(this + 6) )
    sub_5E9F20((char)"shShowdownPlayer < shTotalPlayers", "..\\Casino\\PokerPot.cpp", 1020);
  if ( !*(_BYTE *)(this + 5) )
    sub_5E9F20((char)"bHaveShowdownResult", "..\\Casino\\PokerPot.cpp", 1021);
  if ( !*(_BYTE *)(this + 4) )
    sub_5E9F20((char)"bHighLowShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1022);
  if ( !*(_BYTE *)(*(_DWORD *)(this + 60) + a2) )
    sub_5E9F20((char)"pbInShowdownYet[shShowdownPlayer]", "..\\Casino\\PokerPot.cpp", 1023);
  if ( a3 )
    v3 = *(_DWORD *)(this + 116);
  else
    v3 = *(_DWORD *)(this + 120);
  return *(_DWORD *)(v3 + 4 * a2);
}


//======================================================================
// sub_4F7AE0
// entry 004f7ae0  size 228  status ok
//======================================================================

__int16 __thiscall sub_4F7AE0(int this)
{
  __int16 i; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1034);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1035);
  if ( !*(_BYTE *)(this + 5) )
    sub_5E9F20((char)"bHaveShowdownResult", "..\\Casino\\PokerPot.cpp", 1036);
  if ( *(_BYTE *)(this + 4) )
    sub_5E9F20((char)"!bHighLowShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1037);
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 64) + i) )
    {
      *(_BYTE *)(i + *(_DWORD *)(this + 64)) = 1;
      return i;
    }
  }
  return -1;
}


//======================================================================
// sub_4F7BD0
// entry 004f7bd0  size 4185  status ok
//======================================================================

void __thiscall sub_4F7BD0(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+8h] [ebp-60h]
  __int16 v6; // [esp+Ch] [ebp-5Ch]
  int v7; // [esp+10h] [ebp-58h]
  int v8; // [esp+10h] [ebp-58h]
  int v9; // [esp+14h] [ebp-54h]
  int v10; // [esp+14h] [ebp-54h]
  int v11; // [esp+18h] [ebp-50h]
  __int16 v12; // [esp+1Ch] [ebp-4Ch]
  int v13; // [esp+20h] [ebp-48h]
  int v14; // [esp+24h] [ebp-44h]
  __int16 v15; // [esp+28h] [ebp-40h]
  int v16; // [esp+2Ch] [ebp-3Ch]
  int v17; // [esp+30h] [ebp-38h]
  int v18; // [esp+34h] [ebp-34h] BYREF
  __int16 v19; // [esp+38h] [ebp-30h]
  __int16 v20; // [esp+3Ch] [ebp-2Ch]
  __int16 v21; // [esp+40h] [ebp-28h]
  __int16 i; // [esp+44h] [ebp-24h]
  char v23; // [esp+4Bh] [ebp-1Dh]
  __int16 v24; // [esp+4Ch] [ebp-1Ch]
  __int16 v25; // [esp+50h] [ebp-18h]
  int v26; // [esp+54h] [ebp-14h] BYREF
  __int16 v27; // [esp+58h] [ebp-10h]
  int v28; // [esp+64h] [ebp-4h]

  v28 = 0;
  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1056);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1057);
  if ( sub_4F6E70(this) != -1 )
    sub_5E9F20((char)"GetShowdownPlayer() == ENDOFROUND", "..\\Casino\\PokerPot.cpp", 1058);
  *(_BYTE *)(this + 5) = 1;
  sub_4A20D0(&v18);
  LOBYTE(v28) = 1;
  sub_4A2100(
    &v18,
    (_BYTE *)dword_791390,
    &byte_7913FF,
    (unsigned __int8 *)&byte_7913FF,
    (unsigned __int8 *)&byte_7913FF,
    (unsigned __int8 *)&byte_7913FF,
    (unsigned __int8 *)&byte_7913FF);
  sub_4A20D0(&v26);
  LOBYTE(v28) = 2;
  v26 = a2;
  v19 = 0;
  v24 = 0;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    *(_BYTE *)(i + *(_DWORD *)(this + 68)) = 0;
    *(_BYTE *)(i + *(_DWORD *)(this + 72)) = 0;
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
    {
      ++v19;
      if ( *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) != 2
        && sub_4A2440((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18) )
      {
        v18 = *(_DWORD *)(*(_DWORD *)(this + 124) + 4 * i);
      }
      if ( *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) != 1
        && sub_4A2550((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26) )
      {
        v26 = *(_DWORD *)(*(_DWORD *)(this + 128) + 4 * i);
      }
      if ( *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
        ++v24;
    }
  }
  if ( v24 > 0 && v24 != v19 )
  {
    for ( i = 0; i < *(__int16 *)(this + 6); ++i )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
        && *(_BYTE *)(*(_DWORD *)(this + 60) + i)
        && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3
        && (sub_4A23C0((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
         || sub_4A23C0((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)) )
      {
        sub_4A2100(
          (_WORD *)(*(_DWORD *)(this + 124) + 4 * i),
          (_BYTE *)dword_791390,
          &byte_7913FF,
          (unsigned __int8 *)&byte_7913FF,
          (unsigned __int8 *)&byte_7913FF,
          (unsigned __int8 *)&byte_7913FF,
          (unsigned __int8 *)&byte_7913FF);
        sub_4A2100(
          (_WORD *)(*(_DWORD *)(this + 128) + 4 * i),
          (_BYTE *)dword_7913CC,
          (_BYTE *)dword_7913C8,
          (unsigned __int8 *)&byte_7913FF,
          (unsigned __int8 *)&byte_7913FF,
          (unsigned __int8 *)&byte_7913FF,
          (unsigned __int8 *)&byte_7913FF);
      }
    }
    sub_4A2100(
      &v18,
      (_BYTE *)dword_791390,
      &byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF,
      (unsigned __int8 *)&byte_7913FF);
    v26 = a2;
    for ( i = 0; i < *(__int16 *)(this + 6); ++i )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) != 2
          && sub_4A2440((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18) )
        {
          v18 = *(_DWORD *)(*(_DWORD *)(this + 124) + 4 * i);
        }
        if ( *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) != 1
          && sub_4A2550((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26) )
        {
          v26 = *(_DWORD *)(*(_DWORD *)(this + 128) + 4 * i);
        }
      }
    }
  }
  v27 = 0;
  v20 = 0;
  v25 = -1;
  v21 = -1;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
    {
      if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
        && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) <= 1u )
      {
        ++v27;
        v25 = i;
      }
      if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
        && (!*(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) || *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 2) )
      {
        ++v20;
        v21 = i;
      }
      if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
        && sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
        && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
      {
        ++v27;
        v25 = i;
        ++v20;
        v21 = i;
      }
    }
  }
  *(_BYTE *)(this + 4) = 1;
  v23 = 0;
  if ( !v20 && !v27 )
  {
    if ( v25 != -1 )
      sub_5E9F20((char)"shLastHighWinner == -1", "..\\Casino\\PokerPot.cpp", 1171);
    if ( v21 != -1 )
      sub_5E9F20((char)"shLastLowWinner == -1", "..\\Casino\\PokerPot.cpp", 1172);
    v23 = 1;
    for ( i = 0; i < *(__int16 *)(this + 6); ++i )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
      {
        if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
          && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
        {
          ++v27;
          v25 = i;
        }
        if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
          && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
        {
          ++v20;
          v21 = i;
        }
      }
    }
    if ( v25 < 0 )
      sub_5E9F20((char)"shLastHighWinner >= 0", "..\\Casino\\PokerPot.cpp", 1192);
    if ( v21 < 0 )
      sub_5E9F20((char)"shLastLowWinner >= 0", "..\\Casino\\PokerPot.cpp", 1193);
    if ( v27 <= 0 )
      sub_5E9F20((char)"shHighWinners>0", "..\\Casino\\PokerPot.cpp", 1194);
    if ( v20 <= 0 )
      sub_5E9F20((char)"shLowWinners>0", "..\\Casino\\PokerPot.cpp", 1195);
  }
  if ( v20 )
  {
    if ( v27 )
    {
      v5 = sub_4F9580(this);
      v7 = v5 / 2;
      v9 = v5 % 2 + v5 / 2 % v20;
      v11 = v5 / 2 / v20;
      if ( v27 != 1 && v20 == 1 )
        v11 += v9;
      else
        v7 += v9;
      v10 = v7 % v27;
      v8 = v7 / v27;
      if ( v25 < 0 )
        sub_5E9F20((char)"shLastHighWinner >= 0", "..\\Casino\\PokerPot.cpp", 1273);
      *(_BYTE *)(v25 + *(_DWORD *)(this + 68)) = 1;
      *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * v25) += v8;
      v6 = v25;
      if ( v27 > 1 )
      {
        for ( i = 0; i < v25; ++i )
        {
          if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
          {
            if ( v23 )
            {
              if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
                && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
              {
                *(_BYTE *)(i + *(_DWORD *)(this + 68)) = 1;
                *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * i) += v8;
                if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v6) )
                  v6 = i;
              }
            }
            else
            {
              if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
                && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) <= 1u )
              {
                *(_BYTE *)(i + *(_DWORD *)(this + 68)) = 1;
                *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * i) += v8;
                if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v6) )
                  v6 = i;
              }
              if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
                && sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
                && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
              {
                *(_BYTE *)(i + *(_DWORD *)(this + 68)) = 1;
                *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * i) += v8;
                if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v6) )
                  v6 = i;
              }
            }
          }
        }
      }
      *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * v6) += v10;
      if ( v21 < 0 )
        sub_5E9F20((char)"shLastLowWinner >= 0", "..\\Casino\\PokerPot.cpp", 1320);
      *(_BYTE *)(v21 + *(_DWORD *)(this + 72)) = 1;
      *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * v21) += v11;
      if ( v20 > 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
          {
            if ( v23 )
            {
              if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
                && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
              {
                *(_BYTE *)(i + *(_DWORD *)(this + 72)) = 1;
                *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * i) += v11;
              }
            }
            else
            {
              if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
                && (!*(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) || *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 2) )
              {
                *(_BYTE *)(i + *(_DWORD *)(this + 72)) = 1;
                *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * i) += v11;
              }
              if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
                && sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
                && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 3 )
              {
                *(_BYTE *)(i + *(_DWORD *)(this + 72)) = 1;
                *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * i) += v11;
              }
            }
          }
        }
      }
    }
    else
    {
      v3 = sub_4F9580(this);
      v13 = v3 % v20;
      v14 = v3 / v20;
      if ( v21 < 0 )
        sub_5E9F20((char)"shLastLowWinner >= 0", "..\\Casino\\PokerPot.cpp", 1234);
      *(_BYTE *)(v21 + *(_DWORD *)(this + 72)) = 1;
      *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * v21) += v14;
      v12 = v21;
      if ( v20 > 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
            && *(_BYTE *)(*(_DWORD *)(this + 60) + i)
            && sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 128) + 4 * i), (unsigned __int8 *)&v26)
            && (!*(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) || *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) == 2) )
          {
            *(_BYTE *)(i + *(_DWORD *)(this + 72)) = 1;
            *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * i) += v14;
            if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v12) )
              v12 = i;
          }
        }
      }
      *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * v12) += v13;
    }
  }
  else
  {
    v2 = sub_4F9580(this);
    v17 = v2 % v27;
    v16 = v2 / v27;
    if ( v25 < 0 )
      sub_5E9F20((char)"shLastHighWinner >= 0", "..\\Casino\\PokerPot.cpp", 1204);
    *(_BYTE *)(v25 + *(_DWORD *)(this + 68)) = 1;
    *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * v25) += v16;
    v15 = v25;
    if ( v27 > 1 )
    {
      for ( i = 0; i < v25; ++i )
      {
        if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) )
        {
          if ( *(_BYTE *)(*(_DWORD *)(this + 60) + i) )
          {
            if ( sub_4A2340((unsigned __int8 *)(*(_DWORD *)(this + 124) + 4 * i), (unsigned __int8 *)&v18)
              && *(_DWORD *)(*(_DWORD *)(this + 132) + 4 * i) <= 1u )
            {
              *(_BYTE *)(i + *(_DWORD *)(this + 68)) = 1;
              *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * i) += v16;
              if ( *(__int16 *)(*(_DWORD *)(this + 76) + 2 * i) > *(__int16 *)(*(_DWORD *)(this + 76) + 2 * v15) )
                v15 = i;
            }
          }
        }
      }
    }
    *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * v15) += v17;
  }
  LOBYTE(v28) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v26);
  LOBYTE(v28) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v18);
  v28 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&a2);
}


//======================================================================
// sub_4F8C30
// entry 004f8c30  size 348  status ok
//======================================================================

__int16 __thiscall sub_4F8C30(int this, char a2)
{
  __int16 v4; // [esp+4h] [ebp-Ch]
  __int16 i; // [esp+8h] [ebp-8h]
  __int16 v6; // [esp+Ch] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1365);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1366);
  if ( !*(_BYTE *)(this + 5) )
    sub_5E9F20((char)"bHaveShowdownResult", "..\\Casino\\PokerPot.cpp", 1367);
  if ( !*(_BYTE *)(this + 4) )
    sub_5E9F20((char)"bHighLowShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1368);
  v6 = 0;
  v4 = -1;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
      && *(_BYTE *)(*(_DWORD *)(this + 60) + i)
      && (a2 && *(_BYTE *)(*(_DWORD *)(this + 68) + i) || !a2 && *(_BYTE *)(*(_DWORD *)(this + 72) + i)) )
    {
      ++v6;
      v4 = i;
    }
  }
  if ( !v6 )
    return -5;
  if ( v6 == 1 )
    return v4;
  return -4;
}


//======================================================================
// sub_4F8D90
// entry 004f8d90  size 388  status ok
//======================================================================

__int16 __thiscall sub_4F8D90(int this, char a2)
{
  int v3; // ecx
  __int16 v5; // [esp+4h] [ebp-8h]
  __int16 i; // [esp+8h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1395);
  if ( !*(_BYTE *)(this + 3) )
    sub_5E9F20((char)"bShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1396);
  if ( !*(_BYTE *)(this + 5) )
    sub_5E9F20((char)"bHaveShowdownResult", "..\\Casino\\PokerPot.cpp", 1397);
  if ( !*(_BYTE *)(this + 4) )
    sub_5E9F20((char)"bHighLowShowdownInProgress", "..\\Casino\\PokerPot.cpp", 1398);
  v5 = -1;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
      && *(_BYTE *)(*(_DWORD *)(this + 60) + i)
      && (a2 && *(_BYTE *)(*(_DWORD *)(this + 68) + i) || !a2 && *(_BYTE *)(*(_DWORD *)(this + 72) + i)) )
    {
      v5 = i;
      break;
    }
  }
  if ( i == *(__int16 *)(this + 6) )
    return -1;
  if ( v5 < 0 )
    sub_5E9F20((char)"shFirstWinner>=0", "..\\Casino\\PokerPot.cpp", 1416);
  if ( a2 )
    v3 = *(_DWORD *)(this + 68);
  else
    v3 = *(_DWORD *)(this + 72);
  *(_BYTE *)(v5 + v3) = 0;
  return v5;
}


//======================================================================
// sub_4F8F20
// entry 004f8f20  size 298  status ok
//======================================================================

__int16 __thiscall sub_4F8F20(__int16 *this)
{
  __int16 v3; // [esp+4h] [ebp-4h]

  v3 = *(this + 4);
  *(this + 4) = v3 + 1;
  if ( *(this + 4) == *(this + 3) )
    *(this + 4) = 0;
  while ( *(this + 4) != v3
       && (*(_BYTE *)(*((_DWORD *)this + 12) + *(this + 4)) || *(_BYTE *)(*((_DWORD *)this + 13) + *(this + 4))) )
  {
    if ( ++*(this + 4) == *(this + 3) )
      *(this + 4) = 0;
  }
  if ( *(this + 4) != v3 )
    return *(this + 4);
  if ( (__int16)sub_4F91A0(this) == 1 )
  {
    *(_BYTE *)this = 0;
    return -2;
  }
  else if ( (__int16)sub_4F9110(this) > 1 )
  {
    sub_5E9F20((char)"0", "..\\Casino\\PokerPot.cpp", 1456);
    return -2;
  }
  else
  {
    *(_BYTE *)this = 0;
    sub_4F9220(this);
    return -3;
  }
}


//======================================================================
// sub_4F9050
// entry 004f9050  size 180  status ok
//======================================================================

__int16 __thiscall sub_4F9050(int this)
{
  __int16 v2; // [esp+4h] [ebp-4h]

  v2 = *(_WORD *)(this + 8);
  *(_WORD *)(this + 8) = v2 + 1;
  if ( *(__int16 *)(this + 8) == *(__int16 *)(this + 6) )
    *(_WORD *)(this + 8) = 0;
  while ( *(__int16 *)(this + 8) != v2
       && (*(_BYTE *)(*(_DWORD *)(this + 48) + *(__int16 *)(this + 8))
        || *(_BYTE *)(*(_DWORD *)(this + 52) + *(__int16 *)(this + 8))) )
  {
    if ( ++*(_WORD *)(this + 8) == *(_WORD *)(this + 6) )
      *(_WORD *)(this + 8) = 0;
  }
  return *(_WORD *)(this + 8);
}


//======================================================================
// sub_4F9110
// entry 004f9110  size 142  status ok
//======================================================================

__int16 __thiscall sub_4F9110(int this)
{
  __int16 v3; // [esp+4h] [ebp-8h]
  __int16 i; // [esp+8h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1482);
  v3 = 0;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) && !*(_BYTE *)(*(_DWORD *)(this + 52) + i) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_4F91A0
// entry 004f91a0  size 124  status ok
//======================================================================

__int16 __thiscall sub_4F91A0(int this)
{
  __int16 v3; // [esp+4h] [ebp-8h]
  __int16 i; // [esp+8h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1497);
  v3 = 0;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_4F9220
// entry 004f9220  size 863  status ok
//======================================================================

int __thiscall sub_4F9220(int this)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-1Ch]
  __int16 i; // [esp+Ch] [ebp-18h]
  __int16 j; // [esp+Ch] [ebp-18h]
  __int16 k; // [esp+Ch] [ebp-18h]
  int v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+18h] [ebp-Ch]
  int v10; // [esp+1Ch] [ebp-8h]
  __int16 v11; // [esp+20h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1) )
    sub_5E9F20((char)"bInitialized", "..\\Casino\\PokerPot.cpp", 1511);
  if ( sub_4F9110(this) > 1 )
    sub_5E9F20((char)"ActivePlayersLeft() <= 1", "..\\Casino\\PokerPot.cpp", 1512);
  v8 = 0;
  v7 = 0;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
      && (*(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i) > v8
       || *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i) == v8 && *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * i) > v7) )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i);
      v7 = *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * i);
      *(_WORD *)(this + 32) = i;
    }
  }
  v3 = 0;
  v9 = 0;
  v11 = 0;
  for ( j = 0; j < *(__int16 *)(this + 6); ++j )
  {
    if ( j != *(__int16 *)(this + 32)
      && !*(_BYTE *)(*(_DWORD *)(this + 48) + j)
      && (*(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) > v3
       || *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) == v3 && *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * j) > v9) )
    {
      v3 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j);
      v9 = *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * j);
      v11 = j;
    }
  }
  *(_DWORD *)(this + 28) = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 32))
                         - *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * v11);
  *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 32)) -= *(_DWORD *)(this + 28);
  *(_DWORD *)(this + 12) -= *(_DWORD *)(this + 28);
  v10 = *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * *(__int16 *)(this + 32))
      - *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v11);
  *(_DWORD *)(this + 12) -= v10;
  *(_DWORD *)(this + 16) -= v10;
  *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * *(__int16 *)(this + 32)) -= v10;
  *(_DWORD *)(this + 28) += v10;
  for ( k = 0; ; ++k )
  {
    result = this;
    if ( k >= *(__int16 *)(this + 6) )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(this + 48) + k)
      && *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * k) > *(_DWORD *)(*(_DWORD *)(this + 104) + 4
                                                                                            * *(__int16 *)(this + 32)) )
    {
      *(_DWORD *)(this + 28) += *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * k)
                              - *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 32));
      *(_DWORD *)(this + 12) -= *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * k)
                              - *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 32));
      *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * k) = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * *(__int16 *)(this + 32));
    }
  }
  return result;
}


//======================================================================
// sub_4F9580
// entry 004f9580  size 473  status ok
//======================================================================

int __thiscall sub_4F9580(int this)
{
  int v2; // [esp+4h] [ebp-14h]
  int v3; // [esp+8h] [ebp-10h]
  int v4; // [esp+Ch] [ebp-Ch]
  __int16 i; // [esp+14h] [ebp-4h]
  __int16 j; // [esp+14h] [ebp-4h]

  v2 = 0;
  v4 = 0;
  for ( i = 0; i < *(__int16 *)(this + 6); ++i )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + i)
      && !*(_BYTE *)(*(_DWORD *)(this + 60) + i)
      && (*(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i) > v2 || *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * i) > v4) )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * i);
      v4 = *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * i);
    }
  }
  v3 = *(_DWORD *)(this + 40) - v4;
  *(_DWORD *)(this + 12) -= v3;
  *(_DWORD *)(this + 16) -= v3;
  for ( j = 0; j < *(__int16 *)(this + 6); ++j )
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 60) + j) )
    {
      *(_DWORD *)(*(_DWORD *)(this + 112) + 4 * j) = 0;
      *(_DWORD *)(*(_DWORD *)(this + 116) + 4 * j) = 0;
      *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * j) = 0;
    }
    if ( *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) > v2 )
    {
      *(_DWORD *)(this + 12) -= *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) - v2;
      v3 += *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) - v2;
      *(_DWORD *)(*(_DWORD *)(this + 104) + 4 * j) = v2;
    }
    if ( !*(_BYTE *)(*(_DWORD *)(this + 48) + j) && *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * j) > v4 )
      *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * j) = v4;
  }
  return v3;
}


//======================================================================
// sub_4F9760
// entry 004f9760  size 955  status ok
//======================================================================

void __thiscall sub_4F9760(int this)
{
  if ( *(_DWORD *)(this + 48) )
  {
    operator delete(*(void **)(this + 48));
    *(_DWORD *)(this + 48) = 0;
  }
  if ( *(_DWORD *)(this + 52) )
  {
    operator delete(*(void **)(this + 52));
    *(_DWORD *)(this + 52) = 0;
  }
  if ( *(_DWORD *)(this + 56) )
  {
    operator delete(*(void **)(this + 56));
    *(_DWORD *)(this + 56) = 0;
  }
  if ( *(_DWORD *)(this + 60) )
  {
    operator delete(*(void **)(this + 60));
    *(_DWORD *)(this + 60) = 0;
  }
  if ( *(_DWORD *)(this + 64) )
  {
    operator delete(*(void **)(this + 64));
    *(_DWORD *)(this + 64) = 0;
  }
  if ( *(_DWORD *)(this + 68) )
  {
    operator delete(*(void **)(this + 68));
    *(_DWORD *)(this + 68) = 0;
  }
  if ( *(_DWORD *)(this + 72) )
  {
    operator delete(*(void **)(this + 72));
    *(_DWORD *)(this + 72) = 0;
  }
  if ( *(_DWORD *)(this + 104) )
  {
    operator delete(*(void **)(this + 104));
    *(_DWORD *)(this + 104) = 0;
  }
  if ( *(_DWORD *)(this + 108) )
  {
    operator delete(*(void **)(this + 108));
    *(_DWORD *)(this + 108) = 0;
  }
  if ( *(_DWORD *)(this + 112) )
  {
    operator delete(*(void **)(this + 112));
    *(_DWORD *)(this + 112) = 0;
  }
  if ( *(_DWORD *)(this + 116) )
  {
    operator delete(*(void **)(this + 116));
    *(_DWORD *)(this + 116) = 0;
  }
  if ( *(_DWORD *)(this + 120) )
  {
    operator delete(*(void **)(this + 120));
    *(_DWORD *)(this + 120) = 0;
  }
  if ( *(_DWORD *)(this + 124) )
  {
    sub_4F9B20(3);
    *(_DWORD *)(this + 124) = 0;
  }
  if ( *(_DWORD *)(this + 128) )
  {
    sub_4F9B20(3);
    *(_DWORD *)(this + 128) = 0;
  }
  if ( *(_DWORD *)(this + 132) )
  {
    operator delete(*(void **)(this + 132));
    *(_DWORD *)(this + 132) = 0;
  }
  if ( *(_DWORD *)(this + 76) )
  {
    operator delete(*(void **)(this + 76));
    *(_DWORD *)(this + 76) = 0;
  }
  if ( *(_DWORD *)(this + 92) )
  {
    operator delete(*(void **)(this + 92));
    *(_DWORD *)(this + 92) = 0;
  }
  if ( *(_DWORD *)(this + 96) )
  {
    operator delete(*(void **)(this + 96));
    *(_DWORD *)(this + 96) = 0;
  }
  if ( *(_DWORD *)(this + 100) )
  {
    operator delete(*(void **)(this + 100));
    *(_DWORD *)(this + 100) = 0;
  }
  if ( *(_DWORD *)(this + 80) )
  {
    operator delete(*(void **)(this + 80));
    *(_DWORD *)(this + 80) = 0;
  }
  if ( *(_DWORD *)(this + 84) )
  {
    operator delete(*(void **)(this + 84));
    *(_DWORD *)(this + 84) = 0;
  }
  if ( *(_DWORD *)(this + 88) )
  {
    operator delete(*(void **)(this + 88));
    *(_DWORD *)(this + 88) = 0;
  }
}


//======================================================================
// sub_4F9B20
// entry 004f9b20  size 106  status ok
//======================================================================

char *__thiscall sub_4F9B20(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 4u, *((_DWORD *)this - 1), ATL::CComCriticalSection::~CComCriticalSection);
    if ( (a2 & 1) != 0 )
      operator delete(this - 4);
    return this - 4;
  }
  else
  {
    ATL::CComCriticalSection::~CComCriticalSection(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}


//======================================================================
// sub_4F9B90
// entry 004f9b90  size 212  status ok
//======================================================================

_DWORD *__thiscall sub_4F9B90(_DWORD *this)
{
  int v1; // eax

  sub_5D7B60(this);
  *this = &PokerRoom::`vftable';
  if ( (unsigned __int8)sub_5DA830(this) )
    v1 = sub_630F40("SID_POKERTOURNAMENT");
  else
    v1 = sub_4FA1A0(this);
  sub_5F38B0(v1);
  sub_5F1AD0(100003);
  dword_791EB8 = (int)this;
  *(this + 41) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_BYTE *)this + 148) = 0;
  sub_4FC210(this);
  return this;
}


//======================================================================
// sub_4F9C70
// entry 004f9c70  size 22  status ok
//======================================================================

int sub_4F9C70()
{
  return sub_47A340((CAtlTraceProcess *)dword_791364);
}


//======================================================================
// sub_4F9C90
// entry 004f9c90  size 33  status ok
//======================================================================

bool sub_4F9C90()
{
  return *(_BYTE *)(dword_7947E0 + 20201) == 0;
}


//======================================================================
// sub_4F9CC0
// entry 004f9cc0  size 158  status ok
//======================================================================

int __thiscall sub_4F9CC0(_DWORD *this)
{
  void *Buffer; // [esp+8h] [ebp-10h]

  *this = &PokerRoom::`vftable';
  Buffer = (void *)sub_520D60();
  sub_5209D0(Buffer);
  sub_520510(0);
  sub_4FC790(this);
  sub_5F38B0(0);
  sub_4FD030(*(this + 1));
  dword_791EB8 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_4F9D60
// entry 004f9d60  size 18  status ok
//======================================================================

int __stdcall sub_4F9D60(int a1)
{
  return 1046;
}


//======================================================================
// sub_4F9D80
// entry 004f9d80  size 311  status ok
//======================================================================

int __thiscall sub_4F9D80(void *this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]

  *a2 = 0;
  *a3 = 0;
  if ( (unsigned __int8)sub_5DA830(this) )
  {
    v4 = sub_5DA880(this);
    if ( v4 > 25000 )
    {
      if ( v4 == 100000 )
      {
        *a2 = 2500;
      }
      else if ( v4 == 500000 )
      {
        *a2 = 10000;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 25000:
          *a2 = 500;
          break;
        case 1000:
          *a2 = 25;
          break;
        case 5000:
          *a2 = 100;
          break;
      }
    }
    *a3 *= 2;
    if ( *(_DWORD *)(dword_7947E0 + 20248) == 5 || (result = dword_7947E0, *(_DWORD *)(dword_7947E0 + 20248) == 6) )
    {
      result = sub_5DA880(this);
      if ( result == 5000 )
      {
        *a2 = 250;
        *a3 = 500;
      }
      else
      {
        *a2 *= 2;
        result = (int)a3;
        *a3 *= 2;
      }
    }
  }
  else
  {
    *a2 = *(_DWORD *)(dword_7947E0 + 20236);
    result = dword_7947E0;
    *a3 = 2 * *(_DWORD *)(dword_7947E0 + 20236);
  }
  return result;
}


//======================================================================
// sub_4F9EC0
// entry 004f9ec0  size 476  status ok
//======================================================================

CImageDisplay *__thiscall sub_4F9EC0(void *this, CImageDisplay *a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int *v4; // eax
  int v5; // edx
  CImageDisplay *result; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  _BYTE v14[8]; // [esp+14h] [ebp-48h] BYREF
  _BYTE v15[8]; // [esp+1Ch] [ebp-40h] BYREF
  __int64 v16; // [esp+24h] [ebp-38h]
  __int64 v17; // [esp+2Ch] [ebp-30h]
  __int64 v18; // [esp+34h] [ebp-28h]
  __int64 v19; // [esp+3Ch] [ebp-20h]
  _BYTE v20[8]; // [esp+44h] [ebp-18h] BYREF
  _BYTE v21[8]; // [esp+4Ch] [ebp-10h] BYREF
  _BYTE v22[4]; // [esp+54h] [ebp-8h] BYREF
  int v23; // [esp+58h] [ebp-4h] BYREF

  if ( (unsigned __int8)sub_5DA830(this) )
  {
    sub_5D9670(a2);
    v2 = (_DWORD *)sub_5D5A90(v21);
    v3 = v2[1];
    *((_DWORD *)a2 + 313) = *v2;
    *((_DWORD *)a2 + 314) = v3;
    v4 = (int *)sub_5D5A90(v20);
    v5 = *v4;
    result = (CImageDisplay *)v4[1];
    *((_DWORD *)a2 + 315) = v5;
    *((_DWORD *)a2 + 316) = result;
  }
  else
  {
    if ( CImageDisplay::GetDisplayFormat(a2)->rcSource.left != 2
      && CImageDisplay::GetDisplayFormat(a2)->rcSource.left != 3 )
    {
      (*(void (__thiscall **)(void *, int *, _BYTE *))(*(_DWORD *)this + 620))(this, &v23, v22);
      if ( v23 > 250 )
      {
        if ( v23 == 1000 )
        {
          v16 = sub_64C8A0(100000, 0);
          sub_5D5AF0(v16, HIDWORD(v16));
        }
      }
      else
      {
        switch ( v23 )
        {
          case 250:
            v17 = sub_64C8A0(25000, 0);
            sub_5D5AF0(v17, HIDWORD(v17));
            break;
          case 5:
            v19 = sub_64C8A0(1000, 0);
            sub_5D5AF0(v19, HIDWORD(v19));
            break;
          case 25:
            v18 = sub_64C8A0(5000, 0);
            sub_5D5AF0(v18, HIDWORD(v18));
            break;
        }
      }
    }
    v7 = (int *)sub_5D5A90(v15);
    v8 = *v7;
    v9 = v7[1];
    *((_DWORD *)a2 + 313) = v8;
    *((_DWORD *)a2 + 314) = v9;
    v10 = (_DWORD *)sub_5D5A90(v14);
    v11 = v10[1];
    *((_DWORD *)a2 + 315) = *v10;
    *((_DWORD *)a2 + 316) = v11;
    return a2;
  }
  return result;
}


//======================================================================
// sub_4FA0A0
// entry 004fa0a0  size 241  status ok
//======================================================================

int __thiscall sub_4FA0A0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax

  result = sub_5D7F40(a2);
  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    result = *(unsigned __int8 *)(a2 + 4);
    if ( !*(_BYTE *)(a2 + 4) )
    {
      if ( dword_791364 )
      {
        result = sub_5DA7B0(this);
        if ( (_BYTE)result )
        {
          result = tolower(*(char *)(a2 + 20));
          if ( result == 105 )
          {
            v3 = sub_5F2A60(3205026, 0);
            result = sub_6026D0(v3);
            if ( (_BYTE)result )
            {
              (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3205026, -1);
              result = a2;
              *(_BYTE *)(a2 + 4) = 1;
            }
          }
          else if ( result == 120 )
          {
            v4 = sub_5F2A60(3205027, 0);
            result = sub_6026D0(v4);
            if ( (_BYTE)result )
            {
              (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3205027, -1);
              *(_BYTE *)(a2 + 4) = 1;
              return a2;
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_4FA1A0
// entry 004fa1a0  size 38  status ok
//======================================================================

int sub_4FA1A0()
{
  return sub_630F40(off_71EE04[*(_DWORD *)(dword_7947E0 + 20248)]);
}


//======================================================================
// sub_4FA1D0
// entry 004fa1d0  size 180  status ok
//======================================================================

int __thiscall sub_4FA1D0(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  sub_5D8230();
  sub_5D85E0(this);
  sub_57AE30(dword_793578);
  *(this + 41) = 0;
  v4 = operator new(0x20u);
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &RoomPokerScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  return sub_5F1B70(v2);
}


//======================================================================
// sub_4FA290
// entry 004fa290  size 77  status ok
//======================================================================

char __thiscall sub_4FA290(int this)
{
  if ( !*(_DWORD *)(this + 164) || !*(_DWORD *)(*(_DWORD *)(this + 164) + 40) )
    return 1;
  if ( *(_BYTE *)(this + 168) )
    return sub_5F8910(*(_DWORD *)(*(_DWORD *)(this + 164) + 40));
  return 1;
}


//======================================================================
// sub_4FA2E0
// entry 004fa2e0  size 143  status ok
//======================================================================

int __thiscall sub_4FA2E0(int *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  v4 = operator new(0x7D4u);
  if ( v4 )
    v2 = sub_479140((int)v4);
  else
    v2 = 0;
  *(this + 41) = v2;
  return sub_4799E0(*(this + 41));
}


//======================================================================
// sub_4FA370
// entry 004fa370  size 178  status ok
//======================================================================

int __thiscall sub_4FA370(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  _DWORD *v3; // esi
  _DWORD *v4; // esi

  sub_5D8020(this);
  result = (int)this;
  if ( *(this + 41) && (v2 = *(this + 41), result = *(unsigned __int8 *)(v2 + 232), *(_BYTE *)(v2 + 232)) )
  {
    v3 = (_DWORD *)*(this + 41);
    result = sub_47E420(v3);
    if ( dword_791EBC != v3[result + 1] )
    {
      v4 = (_DWORD *)*(this + 41);
      dword_791EBC = v4[sub_47E420(v4) + 1];
      return sub_5D8A20(1, *(_DWORD *)(dword_791EBC + 4), 0);
    }
  }
  else if ( dword_791EBC )
  {
    result = sub_5D8A20(0, -1, 0);
    dword_791EBC = 0;
  }
  return result;
}


//======================================================================
// sub_4FA4C0
// entry 004fa4c0  size 78  status ok
//======================================================================

int __stdcall sub_4FA4C0(int a1)
{
  _DWORD v2[8]; // [esp+4h] [ebp-20h]

  v2[0] = 321;
  v2[1] = 14;
  v2[2] = 218;
  v2[3] = 530;
  v2[4] = 530;
  v2[5] = 530;
  v2[6] = 14;
  v2[7] = 14;
  return v2[a1];
}


//======================================================================
// sub_4FA510
// entry 004fa510  size 78  status ok
//======================================================================

int __stdcall sub_4FA510(int a1)
{
  _DWORD v2[8]; // [esp+4h] [ebp-20h]

  v2[0] = 310;
  v2[1] = 30;
  v2[2] = 30;
  v2[3] = 30;
  v2[4] = 170;
  v2[5] = 310;
  v2[6] = 310;
  v2[7] = 170;
  return v2[a1];
}


//======================================================================
// sub_4FA560
// entry 004fa560  size 68  status ok
//======================================================================

int __thiscall sub_4FA560(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax

  if ( !*(this + 41) )
    return 0;
  v1 = (_DWORD *)*(this + 41);
  v2 = sub_47E420(v1);
  return sub_5DCB00(*(_DWORD *)(v1[v2 + 1] + 4));
}


//======================================================================
// sub_4FA5B0
// entry 004fa5b0  size 175  status ok
//======================================================================

int __thiscall sub_4FA5B0(_DWORD *this, int a2, int *a3)
{
  int result; // eax
  __int16 ExecutingContext; // [esp+4h] [ebp-28h]
  _DWORD v6[8]; // [esp+8h] [ebp-24h]
  Concurrency::details::VirtualProcessor *v7; // [esp+28h] [ebp-4h]

  v6[0] = 5;
  v6[1] = 0;
  v6[2] = 1;
  v6[3] = 2;
  v6[4] = 3;
  v6[5] = 4;
  v6[6] = 6;
  v6[7] = 7;
  *a3 = 0;
  a3[1] = 0;
  result = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 128))(this);
  if ( !(_BYTE)result )
  {
    v7 = (Concurrency::details::VirtualProcessor *)sub_47E390(v6[a2]);
    ExecutingContext = (unsigned __int16)Concurrency::details::VirtualProcessor::GetExecutingContext(v7);
    result = sub_4F6C40((_DWORD *)(*(this + 41) + 56), ExecutingContext);
    *a3 = result;
  }
  return result;
}


//======================================================================
// sub_4FA660
// entry 004fa660  size 105  status ok
//======================================================================

int __stdcall sub_4FA660(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  _BYTE v8[8]; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  v9 = sub_6375D0(11);
  v1 = sub_5DCB00(a1);
  v2 = (int *)sub_64C5C0(v8, *(_DWORD *)(v1 + 1220), *(_DWORD *)(v1 + 1224));
  v3 = *v2;
  v4 = v2[1];
  v5 = v9;
  *(_DWORD *)(v9 + 8) = v3;
  *(_DWORD *)(v5 + 12) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_4FA6D0
// entry 004fa6d0  size 419  status ok
//======================================================================

int __thiscall sub_4FA6D0(void *this, int a2, int a3)
{
  switch ( a3 )
  {
    case 100001:
      if ( (unsigned __int8)sub_5DA830(this) )
        sub_5FE640(-2, 0);
      else
        sub_5FE240(5017, -1, -1, 0);
      sub_5FE640(100006, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      break;
    case 100035:
      sub_5FE640(100038, 0);
      if ( (unsigned __int8)sub_5DA830(this) )
      {
        sub_5FE640(100037, 0);
        sub_5FE640(-2, 0);
        sub_5FE640(-2, 0);
      }
      break;
    case 100055:
      sub_5FE640(100058, 0);
      sub_5FE240(5009, -1, -1, 0);
      sub_5FE240(5020, -1, -1, 1);
      sub_5FE240(5019, -1, -1, 0);
      if ( (unsigned __int8)sub_5DA830(this) )
      {
        sub_5FE640(100057, 0);
        sub_5FE640(100054, 0);
        sub_5FE240(3205028, -1, -2, 0);
        sub_5FE240(100054, -1, -2, 0);
      }
      break;
  }
  return sub_5D8670(a2, a3);
}


//======================================================================
// sub_4FA880
// entry 004fa880  size 458  status ok
//======================================================================

int __fastcall sub_4FA880(int a1, int a2, int a3, int a4)
{
  int result; // eax

  if ( !*(_BYTE *)(a1 + 56) && a3 >= 100089 && a3 <= 100098 )
    return sub_4FB640(a3, a4);
  result = a3 - 3205022;
  switch ( a3 )
  {
    case 3205022:
      if ( *(_DWORD *)(a1 + 156) )
      {
        result = *(_DWORD *)(a1 + 156);
        if ( *(_DWORD *)(result + 480) )
        {
          result = (unsigned __int8)sub_6026D0(*(_DWORD *)(*(_DWORD *)(a1 + 156) + 480));
          if ( (_BYTE)result )
            result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 156) + 480) + 192))(*(_DWORD *)(*(_DWORD *)(a1 + 156) + 480));
        }
      }
      break;
    case 3205023:
      result = a1;
      if ( *(_DWORD *)(a1 + 156) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 156) + 484) )
        {
          result = sub_6026D0(*(_DWORD *)(*(_DWORD *)(a1 + 156) + 484));
          if ( (_BYTE)result )
            result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 156) + 484) + 192))(*(_DWORD *)(*(_DWORD *)(a1 + 156) + 484));
        }
      }
      break;
    case 3205024:
      if ( *(_DWORD *)(a1 + 156) )
      {
        result = *(_DWORD *)(a1 + 156);
        if ( *(_DWORD *)(result + 488) )
        {
          result = (unsigned __int8)sub_6026D0(*(_DWORD *)(*(_DWORD *)(a1 + 156) + 488));
          if ( (_BYTE)result )
            result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 156) + 488) + 192))(*(_DWORD *)(*(_DWORD *)(a1 + 156) + 488));
        }
      }
      break;
    case 3205026:
      result = sub_4FC7D0(a3 - 3205022, a1);
      break;
    case 3205027:
      result = sub_4803D0((_DWORD *)dword_791364);
      break;
    case 3205028:
      sub_60CCE0(3110001);
      goto LABEL_24;
    default:
LABEL_24:
      result = sub_5DC7D0(a3, a4);
      break;
  }
  return result;
}


//======================================================================
// sub_4FAA70
// entry 004faa70  size 89  status ok
//======================================================================

int __thiscall sub_4FAA70(void *this)
{
  int v1; // eax
  int v4; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(dword_7947E0 + 20201) )
    v4 = 3205025;
  else
    v4 = 3205021;
  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(v4, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_4FAAD0
// entry 004faad0  size 1987  status ok
//======================================================================

int __thiscall sub_4FAAD0(_DWORD *this, int a2)
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
  int v13; // [esp+0h] [ebp-10h]
  int v15; // [esp+8h] [ebp-8h]
  int v16; // [esp+Ch] [ebp-4h]

  v15 = 0;
  v16 = 0;
  result = dword_793578;
  if ( !*(_DWORD *)(dword_793578 + 448) )
  {
    v13 = *(__int16 *)(*(this + 39) + 500);
    switch ( v13 )
    {
      case 1:
        v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 480) + 76))(*(_DWORD *)(*(this + 39) + 480));
        v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 480) + 84))(*(_DWORD *)(*(this + 39) + 480));
        break;
      case 2:
        v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 484) + 76))(*(_DWORD *)(*(this + 39) + 484));
        v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 484) + 84))(*(_DWORD *)(*(this + 39) + 484));
        break;
      case 3:
        v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 488) + 76))(*(_DWORD *)(*(this + 39) + 488));
        v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 488) + 84))(*(_DWORD *)(*(this + 39) + 488));
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\PokerRoom.cpp", 456);
        break;
    }
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(this + 39) + 504) + 68))(
      *(_DWORD *)(*(this + 39) + 504),
      v15 + 1,
      v16 + 1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 39) + 504) + 108))(
      *(_DWORD *)(*(this + 39) + 504),
      100);
    sub_5EB5D0(100);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 39) + 504) + 116))(*(_DWORD *)(*(this + 39) + 504));
  }
  if ( *(_DWORD *)(dword_793578 + 448) == 1 )
  {
    *(_DWORD *)(*(this + 40) + 544) = 0;
    if ( *(_BYTE *)(*(this + 40) + 552) )
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 480) + 476) = 1;
      v3 = sub_630F40("SID_POKER_DISCARD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 500) + 180))(
        *(_DWORD *)(*(this + 40) + 500),
        v3);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 520) + 116))(*(_DWORD *)(*(this + 40) + 520));
      ++*(_DWORD *)(*(this + 40) + 544);
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 480) + 476) = 0;
      v4 = sub_630F40("SID_POKER_HOLD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 500) + 180))(
        *(_DWORD *)(*(this + 40) + 500),
        v4);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 520) + 112))(*(_DWORD *)(*(this + 40) + 520));
    }
    if ( *(_BYTE *)(*(this + 40) + 551) )
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 484) + 476) = 1;
      v5 = sub_630F40("SID_POKER_DISCARD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 504) + 180))(
        *(_DWORD *)(*(this + 40) + 504),
        v5);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 524) + 116))(*(_DWORD *)(*(this + 40) + 524));
      ++*(_DWORD *)(*(this + 40) + 544);
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 484) + 476) = 0;
      v6 = sub_630F40("SID_POKER_HOLD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 504) + 180))(
        *(_DWORD *)(*(this + 40) + 504),
        v6);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 524) + 112))(*(_DWORD *)(*(this + 40) + 524));
    }
    if ( *(_BYTE *)(*(this + 40) + 550) )
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 488) + 476) = 1;
      v7 = sub_630F40("SID_POKER_DISCARD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 508) + 180))(
        *(_DWORD *)(*(this + 40) + 508),
        v7);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 528) + 116))(*(_DWORD *)(*(this + 40) + 528));
      ++*(_DWORD *)(*(this + 40) + 544);
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 488) + 476) = 0;
      v8 = sub_630F40("SID_POKER_HOLD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 508) + 180))(
        *(_DWORD *)(*(this + 40) + 508),
        v8);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 528) + 112))(*(_DWORD *)(*(this + 40) + 528));
    }
    if ( *(_BYTE *)(*(this + 40) + 549) )
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 492) + 476) = 1;
      v9 = sub_630F40("SID_POKER_DISCARD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 512) + 180))(
        *(_DWORD *)(*(this + 40) + 512),
        v9);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 532) + 116))(*(_DWORD *)(*(this + 40) + 532));
      ++*(_DWORD *)(*(this + 40) + 544);
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 492) + 476) = 0;
      v10 = sub_630F40("SID_POKER_HOLD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 512) + 180))(
        *(_DWORD *)(*(this + 40) + 512),
        v10);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 532) + 112))(*(_DWORD *)(*(this + 40) + 532));
    }
    if ( *(_BYTE *)(*(this + 40) + 548) )
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 496) + 476) = 1;
      v11 = sub_630F40("SID_POKER_DISCARD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 516) + 180))(
        *(_DWORD *)(*(this + 40) + 516),
        v11);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 536) + 116))(*(_DWORD *)(*(this + 40) + 536));
      result = *(_DWORD *)(*(this + 40) + 544) + 1;
      *(_DWORD *)(*(this + 40) + 544) = result;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(*(this + 40) + 496) + 476) = 0;
      v12 = sub_630F40("SID_POKER_HOLD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 40) + 516) + 180))(
        *(_DWORD *)(*(this + 40) + 516),
        v12);
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 40) + 536) + 112))(*(_DWORD *)(*(this + 40) + 536));
    }
  }
  return result;
}


//======================================================================
// sub_4FB2A0
// entry 004fb2a0  size 21  status ok
//======================================================================

int __thiscall sub_4FB2A0(void *this, int a2, int a3)
{
  return sub_4FB580(this, this);
}


//======================================================================
// sub_4FB2C0
// entry 004fb2c0  size 310  status ok
//======================================================================

int __thiscall sub_4FB2C0(void *this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+18h] [ebp-10h]
  _DWORD *v6; // [esp+1Ch] [ebp-Ch]
  int v7; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  v8 = *(_DWORD *)(sub_5DCB00(a2) + 8);
  if ( !a3
    || *(_DWORD *)(a3 + 8) == -1
    || !(*(unsigned __int8 (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 320))(this, a2, a3, 0) )
  {
    return sub_64DA20(a2, a3);
  }
  sub_64DA20(a2, a3);
  result = *(_DWORD *)(a3 + 8);
  if ( v8 != result )
  {
    v7 = *(_DWORD *)(a3 + 8);
    for ( i = 0; ; ++i )
    {
      result = sub_47F950();
      if ( i >= result )
        break;
      v6 = (_DWORD *)sub_47E390(i);
      if ( *(_DWORD *)(sub_5DCB00(v6[1]) + 8) == v7 )
        return sub_4C6550(v6);
    }
  }
  return result;
}


//======================================================================
// sub_4FB400
// entry 004fb400  size 146  status ok
//======================================================================

int __thiscall sub_4FB400(void *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  sub_636E70(dword_162EE84);
  result = sub_4FB580(this, this);
  if ( a3 != -1 )
  {
    for ( i = 0; ; ++i )
    {
      result = sub_47F950();
      if ( i >= result )
        break;
      v5 = (_DWORD *)sub_47E390(i);
      if ( *(_DWORD *)(sub_5DCB00(v5[1]) + 8) == a3 )
        return sub_4C6550(v5);
    }
  }
  return result;
}


//======================================================================
// sub_4FB4A0
// entry 004fb4a0  size 215  status ok
//======================================================================

_DWORD *__stdcall sub_4FB4A0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-48h]
  _DWORD v5[15]; // [esp+8h] [ebp-44h]
  int v6; // [esp+44h] [ebp-8h]
  int v7; // [esp+48h] [ebp-4h]

  v4 = 240;
  v5[0] = 210;
  v5[1] = 115;
  v5[2] = 20;
  v5[3] = 315;
  v5[4] = 20;
  v5[5] = 360;
  v5[6] = 20;
  v5[7] = 360;
  v5[8] = 170;
  v5[9] = 360;
  v5[10] = 310;
  v5[11] = 115;
  v5[12] = 310;
  v5[13] = 115;
  v5[14] = 170;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 8 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\PokerRoom.cpp", 609);
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
// sub_4FB580
// entry 004fb580  size 183  status ok
//======================================================================

void sub_4FB580()
{
  CImageDisplay *v0; // [esp+4h] [ebp-10h]
  int i; // [esp+Ch] [ebp-8h]
  Concurrency::details::SchedulerProxy *v2; // [esp+10h] [ebp-4h]

  if ( dword_791EB8 && *(_DWORD *)(dword_791EB8 + 164) )
  {
    for ( i = 7; i >= 0; --i )
    {
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
      if ( v2
        && (v0 = (CImageDisplay *)sub_5DCB00(*((_DWORD *)v2 + 1)), CImageDisplay::GetDisplayFormat(v0)->rcSource.left) )
      {
        sub_5D9180(i, 0);
      }
      else if ( v2 )
      {
        sub_4C6D90(v2, 0);
        Concurrency::details::SchedulerProxy::SetQueueLength(v2, 0);
      }
    }
  }
}


//======================================================================
// sub_4FB640
// entry 004fb640  size 201  status ok
//======================================================================

int __thiscall sub_4FB640(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-8h]

  if ( a2 >= 100089 && a2 <= 100098 )
  {
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
           dword_162EE84,
           a2 - 100089);
  }
  else
  {
    sub_5E9F20((char)"false", "..\\Casino\\PokerRoom.cpp", 647);
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 356))(
           dword_162EE84,
           0);
  }
  sub_5F2C40(a3);
  sub_5F2CB0(a2);
  *(_DWORD *)(sub_6375D0(11) + 4) = v5;
  sub_637610(dword_162EE84);
  result = *(this + 41);
  *(_DWORD *)(result + 204) = v5;
  return result;
}


//======================================================================
// sub_4FB770
// entry 004fb770  size 53  status ok
//======================================================================

int __thiscall sub_4FB770(_DWORD *this)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 368))(
           dword_162EE84,
           *(_DWORD *)(*(this + 41) + 204))
       + 100089;
}


//======================================================================
// sub_4FB7B0
// entry 004fb7b0  size 75  status ok
//======================================================================

int __thiscall sub_4FB7B0(void *this)
{
  sub_5DB2C0(this);
  if ( (unsigned __int8)sub_5DF700(-1) )
    return sub_5F2B20(5020, 1);
  else
    return sub_5F2BA0(5020);
}


//======================================================================
// sub_4FB800
// entry 004fb800  size 62  status ok
//======================================================================

bool __thiscall sub_4FB800(void *this)
{
  return (unsigned __int8)sub_5DA830(this) || (unsigned __int8)sub_5D8C80(this);
}


//======================================================================
// sub_4FB840
// entry 004fb840  size 68  status ok
//======================================================================

int __thiscall sub_4FB840(_DWORD *this)
{
  if ( *(_DWORD *)(*(this + 1) + 4) )
    sub_5FC420(0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 16))(*(this + 1));
  return sub_636EE0(dword_162EE84);
}


//======================================================================
// sub_4FB890
// entry 004fb890  size 1025  status ok
//======================================================================

int __thiscall sub_4FB890(void *this)
{
  LONG *v1; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-44h]
  _DWORD *v5; // [esp+28h] [ebp-20h]
  int v6; // [esp+2Ch] [ebp-1Ch]
  int v7; // [esp+30h] [ebp-18h]
  int v8; // [esp+3Ch] [ebp-Ch]
  int i; // [esp+40h] [ebp-8h]
  int j; // [esp+40h] [ebp-8h]
  int k; // [esp+40h] [ebp-8h]
  int m; // [esp+40h] [ebp-8h]
  int n; // [esp+40h] [ebp-8h]
  int ii; // [esp+40h] [ebp-8h]
  void *Buffer; // [esp+44h] [ebp-4h]

  v8 = o_2_a_10C_s_6___4(*(_DWORD *)(dword_791364 + 244));
  *(_DWORD *)(v8 + 20) = *(_DWORD *)(dword_791364 + 236);
  *(_DWORD *)(v8 + 24) = *(_DWORD *)(dword_791364 + 240);
  *(_WORD *)(v8 + 60) = sub_47BBC0((_DWORD *)dword_791364);
  *(_WORD *)(v8 + 62) = sub_47CB80((_DWORD *)dword_791364);
  *(_DWORD *)(v8 + 8) = sub_47CE60((_DWORD *)dword_791364);
  *(_DWORD *)(v8 + 56) = *(_DWORD *)(dword_791364 + 256);
  *(_BYTE *)(v8 + 40) = *(_BYTE *)(dword_791364 + 260);
  *(_DWORD *)(v8 + 4) = *(_DWORD *)(dword_791364 + 248);
  *(_DWORD *)(v8 + 36) = *(_DWORD *)(dword_791364 + 252);
  *(_DWORD *)(v8 + 32) = sub_47A510((void *)dword_791364);
  for ( i = 0; i < 3; ++i )
    *(_BYTE *)(i + v8 + 41) = *(_DWORD *)(dword_791364 + 4 * i + 276) != 0;
  for ( j = 0; j < 3; ++j )
    *(_DWORD *)(v8 + 4 * j + 44) = *(_DWORD *)(dword_791364 + 4 * j + 264);
  for ( k = 0; k < 7; ++k )
    *(_DWORD *)(v8 + 4 * k + 64) = *(_DWORD *)(dword_791364 + 4 * k + 948);
  for ( m = 0; m < 7; ++m )
  {
    v5 = (_DWORD *)sub_47E390(m);
    v7 = v5[1];
    *(_DWORD *)(v8 + 124 * m + 232) = v7;
    v6 = sub_4C6CB0(v5);
    *(_DWORD *)(v8 + 124 * m + 228) = v6;
    if ( v6 )
      v4 = sub_4C6A70(v5);
    else
      v4 = -1;
    *(_DWORD *)(v8 + 124 * m + 224) = v4;
    sub_5DCB00(v7);
    v1 = sub_4C6150(v5);
    strcpy((char *)(v8 + 124 * m + 124), (const char *)v1);
    if ( !sub_4C61B0(v5) )
    {
      *(_DWORD *)(v8 + 124 * m + 236) = v5[29];
      *(_DWORD *)(v8 + 124 * m + 240) = v5[255];
      *(_DWORD *)(v8 + 124 * m + 244) = v5[256];
    }
  }
  for ( n = 0; n < 33; ++n )
  {
    *(_DWORD *)(v8 + 20 * n + 1012) = *(_DWORD *)(dword_791364 + 20 * n + 288);
    *(_DWORD *)(v8 + 20 * n + 1024) = *(_DWORD *)(dword_791364 + 20 * n + 300);
    *(_DWORD *)(v8 + 20 * n + 1016) = *(_DWORD *)(dword_791364 + 20 * n + 292);
    *(_DWORD *)(v8 + 20 * n + 1028) = *(_DWORD *)(dword_791364 + 20 * n + 304);
    *(_BYTE *)(v8 + 20 * n + 1020) = *(_BYTE *)(dword_791364 + 20 * n + 296);
  }
  for ( ii = 0; ii < 7; ++ii )
    *(_DWORD *)(v8 + 4 * ii + 92) = *(_DWORD *)(dword_791364 + 4 * ii + 996);
  *(_DWORD *)(v8 + 120) = *(_DWORD *)(dword_791364 + 1024);
  v2 = sub_6375B0(dword_162EE84);
  sub_63B0A0(v2);
  Buffer = (void *)sub_520D60();
  return sub_5209D0(Buffer);
}


//======================================================================
// sub_4FBCA0
// entry 004fbca0  size 1387  status ok
//======================================================================

int __thiscall sub_4FBCA0(_DWORD *this)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v2; // eax
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int result; // eax
  const char *v9; // [esp-4h] [ebp-70h]
  _BYTE v11[8]; // [esp+34h] [ebp-38h] BYREF
  _DWORD *v12; // [esp+3Ch] [ebp-30h]
  int v13; // [esp+40h] [ebp-2Ch]
  int v14; // [esp+44h] [ebp-28h]
  int v15; // [esp+48h] [ebp-24h]
  CImageDisplay *v16; // [esp+4Ch] [ebp-20h]
  int v17; // [esp+50h] [ebp-1Ch]
  int v18; // [esp+54h] [ebp-18h]
  int v19; // [esp+58h] [ebp-14h]
  int v20; // [esp+5Ch] [ebp-10h]
  int v21; // [esp+60h] [ebp-Ch]
  int v22; // [esp+64h] [ebp-8h]
  int i; // [esp+68h] [ebp-4h]

  v21 = *(_DWORD *)(dword_791364 + 244);
  v22 = o_2_a_10C_s_6___4(v21);
  sub_4FB840(this);
  sub_47E540((ATL::CAtlWinModule *)dword_791364, 1);
  *(_DWORD *)(dword_791364 + 236) = *(_DWORD *)(v22 + 20);
  *(_DWORD *)(dword_791364 + 240) = *(_DWORD *)(v22 + 24);
  *(_DWORD *)(dword_791364 + 1160) = *(__int16 *)(v22 + 60);
  sub_47CB10((_DWORD *)dword_791364, *(__int16 *)(v22 + 62));
  sub_47CE80((_DWORD *)dword_791364, *(_DWORD *)(v22 + 8));
  *(_DWORD *)(dword_791364 + 256) = *(_DWORD *)(v22 + 56);
  *(_BYTE *)(dword_791364 + 260) = *(_BYTE *)(v22 + 40);
  *(_DWORD *)(dword_791364 + 248) = *(_DWORD *)(v22 + 4);
  *(_DWORD *)(dword_791364 + 252) = *(_DWORD *)(v22 + 36);
  for ( i = 0; i < 3; ++i )
    *(_DWORD *)(dword_791364 + 4 * i + 276) = *(unsigned __int8 *)(i + v22 + 41);
  sub_47A440((void *)dword_791364, *(_DWORD *)(v22 + 32));
  for ( i = 0; i < 3; ++i )
    *(_DWORD *)(dword_791364 + 4 * i + 264) = *(_DWORD *)(v22 + 4 * i + 44);
  for ( i = 0; i < 7; ++i )
    *(_DWORD *)(dword_791364 + 4 * i + 948) = *(_DWORD *)(v22 + 4 * i + 64);
  for ( i = 0; i < 7; ++i )
  {
    v12 = (_DWORD *)sub_47E390(i);
    v13 = *(_DWORD *)(v22 + 124 * i + 232);
    v16 = (CImageDisplay *)sub_5DCB00(v13);
    sub_4C6D90(v12, *(_DWORD *)(v22 + 124 * i + 228));
    if ( *(_DWORD *)(v22 + 124 * i + 224) != -1 )
    {
      sub_4C6AA0(v12, *(_DWORD *)(v22 + 124 * i + 224));
      v19 = *(_DWORD *)(v22 + 124 * i + 224);
      v20 = 0;
      sub_5D5AF0(v19, 0);
    }
    if ( !sub_4C61B0(v12) )
    {
      v18 = *(_DWORD *)(v22 + 124 * i + 236);
      v14 = dword_720648[3 * v18];
      v12[29] = v18;
      if ( v18 >= 33 || v18 < 23 )
      {
        *((_DWORD *)v16 + 3) = v14;
      }
      else
      {
        sub_63B490(v14);
        *((_DWORD *)v16 + 3) = -1;
      }
      sub_4C67D0(v12, *(_DWORD *)(v22 + 124 * i + 240));
      sub_4C68C0(v12, *(_DWORD *)(v22 + 124 * i + 244));
      v9 = (const char *)sub_630F40((&off_720650)[3 * v18]);
      DisplayFormat = CImageDisplay::GetDisplayFormat(v16);
      strcpy((char *)&DisplayFormat->rcSource.top, v9);
    }
  }
  v17 = sub_6375D0(11);
  v2 = sub_5DCB00(0);
  v3 = (int *)sub_64C630(v11, *(_DWORD *)(v2 + 1236), *(_DWORD *)(v2 + 1240));
  v4 = *v3;
  v5 = v3[1];
  v6 = v17;
  *(_DWORD *)(v17 + 16) = v4;
  *(_DWORD *)(v6 + 20) = v5;
  v7 = sub_5DCB00(0);
  sub_63B0A0(v7);
  for ( i = 0; i < 33; ++i )
  {
    *(_DWORD *)(dword_791364 + 20 * i + 288) = *(_DWORD *)(v22 + 20 * i + 1012);
    *(_DWORD *)(dword_791364 + 20 * i + 300) = *(_DWORD *)(v22 + 20 * i + 1024);
    *(_DWORD *)(dword_791364 + 20 * i + 292) = *(_DWORD *)(v22 + 20 * i + 1016);
    *(_DWORD *)(dword_791364 + 20 * i + 304) = *(_DWORD *)(v22 + 20 * i + 1028);
    *(_BYTE *)(dword_791364 + 20 * i + 296) = *(_BYTE *)(v22 + 20 * i + 1020);
  }
  for ( i = 0; i < 7; ++i )
    *(_DWORD *)(dword_791364 + 4 * i + 996) = *(_DWORD *)(v22 + 4 * i + 92);
  *(_DWORD *)(dword_791364 + 1024) = *(_DWORD *)(v22 + 120);
  v15 = sub_480D20(dword_791364);
  sub_47BC40((_DWORD *)dword_791364, v15 / 2);
  sub_47BC80((_DWORD *)dword_791364, v15 / 2);
  sub_47BCC0((_DWORD *)dword_791364, v15);
  sub_47BD00((_DWORD *)dword_791364, 2 * v15);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_791EB8 + 4) + 4))(*(_DWORD *)(dword_791EB8 + 4), 2);
  result = sub_47E860(dword_791364);
  for ( i = 0; i < 7; ++i )
    result = sub_5D9180(i, 1);
  return result;
}


//======================================================================
// sub_4FC210
// entry 004fc210  size 121  status ok
//======================================================================

int __thiscall sub_4FC210(_DWORD *this)
{
  void *Buffer; // [esp+4h] [ebp-4h]

  *(this + 38) = -1;
  *(this + 32) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  *(this + 33) = 0;
  *(this + 36) = 0;
  Buffer = (void *)sub_520D60(this);
  sub_5208B0(Buffer);
  return sub_520510(1);
}


//======================================================================
// sub_4FC290
// entry 004fc290  size 56  status ok
//======================================================================

int sub_4FC290()
{
  if ( *(_DWORD *)(dword_791364 + 244) == 4 )
    return sub_630F40("SID_POKERTOURNAMENT_TRIPLECROWN");
  else
    return sub_4FA1A0();
}


//======================================================================
// sub_4FC2D0
// entry 004fc2d0  size 370  status ok
//======================================================================

char __thiscall sub_4FC2D0(void *this)
{
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-1Ch]
  bool v6; // [esp+13h] [ebp-1h]

  if ( *(_BYTE *)(dword_791364 + 976) )
    return 1;
  if ( !(unsigned __int8)sub_5DA7B0(this) )
    return sub_5D8710(this);
  if ( !sub_480F80((int *)dword_791364) && *(_BYTE *)(dword_7947E0 + 20228) )
  {
    v6 = sub_479930((void *)dword_791364);
    if ( !sub_479960((void *)dword_791364) || v6 )
    {
      if ( !sub_479960((void *)dword_791364) )
      {
LABEL_20:
        sub_47FB90((void *)dword_791364, 10);
        *(_BYTE *)(dword_7947E0 + 20228) = 0;
        return 1;
      }
    }
    else
    {
      v3 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_HANDINPROGRESS");
      v2 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_HANDINPROGRESS_MESSAGE");
      if ( sub_62FF10(v2, v3, 1u) != 1 )
        return 0;
    }
    sub_4815D0((_BYTE *)dword_791364);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(dword_791364 + 252) == 3 && !*(_BYTE *)(dword_791364 + 1032) )
  {
    sub_4FCB30(8);
    return 0;
  }
  else
  {
    sub_47FB90((void *)dword_791364, 9);
    return 1;
  }
}


//======================================================================
// sub_4FC450
// entry 004fc450  size 170  status ok
//======================================================================

int __stdcall sub_4FC450(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _BYTE v13[8]; // [esp+4h] [ebp-1Ch] BYREF
  _BYTE v14[8]; // [esp+Ch] [ebp-14h] BYREF
  __int64 v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-4h]

  v16 = sub_6375D0(11);
  v1 = sub_480920((unsigned int *)dword_791364);
  v15 = sub_64C8A0(v1, 0);
  v2 = (int *)sub_64C630(v14, v15, HIDWORD(v15));
  v3 = *v2;
  v4 = v2[1];
  v5 = v16;
  *(_DWORD *)(v16 + 16) = v3;
  *(_DWORD *)(v5 + 20) = v4;
  v6 = sub_5DCB00(a1);
  v7 = (int *)sub_64C5C0(v13, *(_DWORD *)(v6 + 1244), *(_DWORD *)(v6 + 1248));
  v8 = *v7;
  v9 = v7[1];
  v10 = v16;
  *(_DWORD *)(v16 + 16) = v8;
  *(_DWORD *)(v10 + 20) = v9;
  v11 = sub_5DCB00(a1);
  return sub_63B0A0(v11);
}


//======================================================================
// sub_4FC500
// entry 004fc500  size 316  status ok
//======================================================================

bool __thiscall sub_4FC500(void *this)
{
  char v2; // [esp+0h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-8h]

  if ( !(unsigned __int8)sub_5DA7B0(this) )
    return 1;
  v4 = *(_DWORD *)(dword_791364 + 252);
  if ( sub_5DAEC0(this) <= 1 )
  {
    if ( v4 >= 3 )
    {
      sub_481690((ATL::CComCriticalSection *)dword_791364);
      sub_4FCB30(2);
      return 0;
    }
    if ( v4 == 2 && *(int *)(dword_791364 + 256) < 41 )
    {
      *(_DWORD *)(dword_791364 + 256) = 41;
    }
    else if ( v4 <= 1 && *(int *)(dword_791364 + 256) < 13 )
    {
      *(_DWORD *)(dword_791364 + 256) = 13;
    }
  }
  sub_481690((ATL::CComCriticalSection *)dword_791364);
  v2 = *(_BYTE *)(dword_791364 + 1033) || *(_BYTE *)(dword_791364 + 1035) || *(_BYTE *)(dword_791364 + 1034);
  o_2_a_10C_s_6___0(*(_DWORD *)(dword_791364 + 244), v2);
  return (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 720))(this) == 0;
}


//======================================================================
// sub_4FC640
// entry 004fc640  size 93  status ok
//======================================================================

bool __thiscall sub_4FC640(void *this)
{
  return !(unsigned __int8)sub_5DA7B0(this)
      || *(_DWORD *)(dword_791364 + 252) == 3 && (sub_5DAEC0(this) == 1 || sub_480540((_DWORD *)dword_791364));
}


//======================================================================
// sub_4FC6A0
// entry 004fc6a0  size 233  status ok
//======================================================================

int __thiscall sub_4FC6A0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-1Ch]

  if ( !*(this + 32) )
  {
    if ( operator new(0x1BCu) )
      v2 = sub_51CAD0();
    else
      v2 = 0;
    *(this + 32) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 32) + 60))(*(this + 32));
    CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(0, 0);
  }
  sub_51CBA0(*(this + 32));
  result = sub_5F88F0(*(this + 32));
  if ( (_BYTE)result )
    return sub_5F85D0(*(this + 32));
  return result;
}


//======================================================================
// sub_4FC790
// entry 004fc790  size 50  status ok
//======================================================================

int __thiscall sub_4FC790(_DWORD *this)
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
// sub_4FC7D0
// entry 004fc7d0  size 263  status ok
//======================================================================

int __thiscall sub_4FC7D0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-28h]
  void *v4; // [esp+18h] [ebp-14h]

  if ( !*(this + 33) )
  {
    v4 = operator new(0x1D4u);
    if ( v4 )
      v2 = sub_51CC80(v4);
    else
      v2 = 0;
    *(this + 33) = v2;
    *(_BYTE *)(*(this + 33) + 448) = 1;
    *(_DWORD *)(*(this + 33) + 444) = *(_DWORD *)(dword_791364 + 244);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 33) + 60))(*(this + 33));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 33));
}


//======================================================================
// sub_4FC8E0
// entry 004fc8e0  size 50  status ok
//======================================================================

int __thiscall sub_4FC8E0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 33) )
  {
    result = sub_5F8990(*(this + 33));
    *(this + 33) = 0;
  }
  return result;
}


//======================================================================
// sub_4FC920
// entry 004fc920  size 46  status ok
//======================================================================

void __thiscall sub_4FC920(void *this)
{
  if ( (unsigned __int8)sub_5DA7B0(this) )
    std::locale::facet::facet_Register((struct std::locale::facet *)1);
  else
    sub_64F290(this);
}


//======================================================================
// sub_4FC950
// entry 004fc950  size 386  status ok
//======================================================================

int __thiscall sub_4FC950(_DWORD *this, int a2, char a3, int a4, char *Source, int a6, int a7, int a8)
{
  int v9; // [esp+4h] [ebp-3Ch]
  void *v11; // [esp+Ch] [ebp-34h]
  char *v12; // [esp+14h] [ebp-2Ch]
  int v13; // [esp+18h] [ebp-28h]
  _DWORD v14[3]; // [esp+1Ch] [ebp-24h]
  int v15; // [esp+28h] [ebp-18h]
  int i; // [esp+2Ch] [ebp-14h]
  _DWORD *v17; // [esp+30h] [ebp-10h]
  int v18; // [esp+3Ch] [ebp-4h]

  v14[0] = a6;
  v14[1] = a7;
  v14[2] = a8;
  if ( !*(this + 36) )
  {
    v11 = operator new(0x3D0u);
    v18 = 0;
    if ( v11 )
      v9 = sub_51EBD0(v11);
    else
      v9 = 0;
    v18 = -1;
    *(this + 36) = v9;
    sub_51EC30(a2);
    sub_51EC50(a3, a4);
    sub_51EC80(Source);
    for ( i = 0; i < 3; ++i )
    {
      v13 = v14[i];
      if ( v13 != -1 )
      {
        v17 = (_DWORD *)sub_47E390(v13);
        v12 = (char *)sub_4C6150(v17);
        v15 = sub_4C6A70(v17);
        sub_51ECB0(v12, v15);
      }
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 36) + 60))(*(this + 36));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 36));
}


//======================================================================
// sub_4FCAE0
// entry 004fcae0  size 73  status ok
//======================================================================

int __thiscall sub_4FCAE0(int this)
{
  if ( *(_DWORD *)(this + 144) )
  {
    sub_5F8990(*(_DWORD *)(this + 144));
    *(_DWORD *)(this + 144) = 0;
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 28))(*(_DWORD *)(this + 4), 0);
}


//======================================================================
// sub_4FCB30
// entry 004fcb30  size 325  status ok
//======================================================================

int __thiscall sub_4FCB30(CMultiPaneFrameWnd **this, HWND a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-24h]
  void *v6; // [esp+14h] [ebp-14h]

  *(_BYTE *)(dword_791364 + 1032) = 1;
  if ( a2 == (HWND)3 )
  {
    v2 = sub_479860((void *)dword_791364);
    sub_480580((_DWORD *)dword_791364, v2);
    sub_47FFE0();
  }
  if ( !*(this + 34) )
  {
    v6 = operator new(0x1E4u);
    if ( v6 )
      v4 = sub_51A6B0(v6);
    else
      v4 = 0;
    *(this + 34) = (CMultiPaneFrameWnd *)v4;
    CMultiPaneFrameWnd::SetLastFocusedPane(*(this + 34), a2);
    sub_51A7F0(*(_DWORD *)(dword_791364 + 244), *(_DWORD *)(dword_791364 + 248));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 34) + 60))(*(this + 34));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 34));
}


//======================================================================
// sub_4FCC80
// entry 004fcc80  size 50  status ok
//======================================================================

int __thiscall sub_4FCC80(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 34) )
  {
    result = sub_5F8990(*(this + 34));
    *(this + 34) = 0;
  }
  return result;
}


//======================================================================
// sub_4FCCC0
// entry 004fccc0  size 198  status ok
//======================================================================

int __thiscall sub_4FCCC0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 35) )
  {
    v4 = operator new(0x1C4u);
    if ( v4 )
      v2 = sub_51AFC0(v4);
    else
      v2 = 0;
    *(this + 35) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 35) + 60))(*(this + 35));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 35));
}


//======================================================================
// sub_4FCDE0
// entry 004fcde0  size 83  status ok
//======================================================================

_DWORD *__stdcall sub_4FCDE0(_DWORD *a1, int a2)
{
  int v2; // ecx
  int v4; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h]

  sub_5D5A90(&v4);
  if ( (unsigned __int8)sub_5DA7B0(dword_7947E4) )
  {
    v2 = *(_DWORD *)(a2 + 1208);
    v4 = *(_DWORD *)(a2 + 1204);
    v5 = v2;
  }
  *a1 = v4;
  a1[1] = v5;
  return a1;
}


//======================================================================
// sub_4FCE40
// entry 004fce40  size 61  status ok
//======================================================================

int sub_4FCE40()
{
  if ( *(_BYTE *)(dword_7947E0 + 20200) && dword_791EB8 )
    return (unsigned __int8)sub_47FDF0(*(_DWORD *)(dword_791EB8 + 164));
  else
    return -1;
}


//======================================================================
// sub_4FCE80
// entry 004fce80  size 425  status ok
//======================================================================

int sub_4FCE80()
{
  int result; // eax
  _DWORD *v1; // [esp+4h] [ebp-28h]
  _DWORD *v2; // [esp+8h] [ebp-24h]
  _DWORD *v3; // [esp+10h] [ebp-1Ch]
  _DWORD *v4; // [esp+18h] [ebp-14h]

  sub_4FA2E0((int *)dword_791EB8);
  sub_4FB580();
  v4 = operator new(0x208u);
  if ( v4 )
    v2 = sub_467090(v4);
  else
    v2 = 0;
  *(_DWORD *)(dword_791EB8 + 156) = v2;
  sub_5198C0(340, 220);
  sub_5F87D0(*(_DWORD *)(dword_791EB8 + 156));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791EB8 + 156) + 60))(*(_DWORD *)(dword_791EB8 + 156));
  v3 = operator new(0x22Cu);
  if ( v3 )
    v1 = sub_46A260(v3);
  else
    v1 = 0;
  *(_DWORD *)(dword_791EB8 + 160) = v1;
  sub_5F83D0(100011, 0);
  sub_5F7340(0, 20);
  sub_5F87D0(*(_DWORD *)(dword_791EB8 + 160));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_791EB8 + 160) + 60))(*(_DWORD *)(dword_791EB8 + 160));
  result = sub_5DA7B0(dword_791EB8);
  if ( (_BYTE)result )
    return sub_4FC6A0((_DWORD *)dword_791EB8);
  return result;
}


//======================================================================
// sub_4FD030
// entry 004fd030  size 65  status ok
//======================================================================

int sub_4FD030()
{
  int result; // eax

  result = dword_791EB8;
  if ( *(_DWORD *)(dword_791EB8 + 164) )
    return (***(int (__thiscall ****)(_DWORD, int))(dword_791EB8 + 164))(*(_DWORD *)(dword_791EB8 + 164), 1);
  return result;
}


//======================================================================
// sub_4FD080
// entry 004fd080  size 1319  status ok
//======================================================================

int __thiscall sub_4FD080(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // [esp+4h] [ebp-64h]
  _DWORD *v4; // [esp+8h] [ebp-60h]
  _DWORD *v5; // [esp+Ch] [ebp-5Ch]
  _DWORD *v6; // [esp+18h] [ebp-50h]
  _DWORD *v7; // [esp+1Ch] [ebp-4Ch]
  int v8; // [esp+20h] [ebp-48h]
  _DWORD *v10; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v11; // [esp+34h] [ebp-34h]
  _DWORD *v12; // [esp+3Ch] [ebp-2Ch]
  _DWORD *v13; // [esp+44h] [ebp-24h]
  _DWORD *v14; // [esp+4Ch] [ebp-1Ch]
  _DWORD *v15; // [esp+54h] [ebp-14h]

  result = sub_5FC3A0(a2);
  switch ( *(this + 5) )
  {
    case 0:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 1:
      sub_4FCE80();
      if ( (unsigned __int8)sub_5DA830(dword_791EB8)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_791EB8 + 720))(dword_791EB8) )
      {
        result = sub_4FCB30((CMultiPaneFrameWnd **)dword_791EB8, (HWND)2);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 2:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 3);
      if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
      {
        result = sub_481150(*(_DWORD *)(dword_791EB8 + 164));
      }
      else
      {
        sub_47AC50(*(CAtlTraceProcess **)(dword_791EB8 + 164));
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 3:
      if ( !(unsigned __int8)unknown_libname_761(dword_791EB8) )
        sub_466E90(*(_DWORD ***)(*(_DWORD *)(dword_791EB8 + 164) + 40));
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      break;
    case 4:
      v8 = sub_47E1D0(*(_DWORD **)(dword_791EB8 + 164));
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v15 = operator new(0x20u);
          if ( v15 )
          {
            sub_5FC0D0(0);
            *v15 = &PokerStudPlayScript::`vftable';
            v7 = v15;
          }
          else
          {
            v7 = 0;
          }
          sub_5FC420(v7);
        }
        else if ( v8 == 2 )
        {
          v14 = operator new(0x20u);
          if ( v14 )
          {
            sub_5FC0D0(0);
            *v14 = &PokerHoldemPlayScript::`vftable';
            v6 = v14;
          }
          else
          {
            v6 = 0;
          }
          sub_5FC420(v6);
        }
        else
        {
          sub_5E9F20((char)"0", "..\\Casino\\PokerRoom.cpp", 1345);
        }
      }
      else
      {
        v13 = operator new(0x20u);
        if ( v13 )
        {
          sub_5FC0D0(0);
          *v13 = &PokerDrawPlayScript::`vftable';
          sub_5FC420(v13);
        }
        else
        {
          sub_5FC420(0);
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 5);
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 6);
      if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
        goto LABEL_33;
      dword_791EC0 = sub_480CC0((void *)dword_791364);
      switch ( dword_791EC0 )
      {
        case 1:
          v12 = operator new(0x24u);
          if ( v12 )
          {
            sub_5FC0D0(0);
            *v12 = &PokerTournamentComment_EndOfRoundScript::`vftable';
            v5 = v12;
          }
          else
          {
            v5 = 0;
          }
          result = sub_5FC420(v5);
          break;
        case 3:
          v11 = operator new(0x20u);
          if ( v11 )
          {
            sub_5FC0D0(0);
            *v11 = &PokerTournamentComment_EndOfHandScript::`vftable';
            v4 = v11;
          }
          else
          {
            v4 = 0;
          }
          result = sub_5FC420(v4);
          break;
        case 4:
          v10 = operator new(0x20u);
          if ( v10 )
          {
            sub_5FC0D0(0);
            *v10 = &PokerTournamentComment_EndOfTournamentScript::`vftable';
            v3 = v10;
          }
          else
          {
            v3 = 0;
          }
          result = sub_5FC420(v3);
          break;
        default:
          goto LABEL_33;
      }
      break;
    case 6:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 7);
      if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) )
        result = sub_483790(*(int **)(dword_791EB8 + 164));
      else
LABEL_33:
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, 0);
      result = sub_5DA7B0(dword_791EB8);
      if ( (_BYTE)result )
        result = sub_4FC6A0((_DWORD *)dword_791EB8);
      break;
    case 8:
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
                 dword_162EE84,
                 11);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_4FD5D0
// entry 004fd5d0  size 99  status ok
//======================================================================

int __thiscall sub_4FD5D0(void *this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( !result )
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
  if ( result == 1 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_791EB8 + 4) + 28))(*(_DWORD *)(dword_791EB8 + 4), 0);
    return sub_5FC420(0);
  }
  return result;
}


//======================================================================
// sub_4FD640
// entry 004fd640  size 198  status ok
//======================================================================

int __thiscall sub_4FD640(int *this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      sub_483910((_DWORD *)dword_791364, (int)this, *(this + 8));
      if ( ++*(this + 8) < 7 )
        return (*(int (__thiscall **)(int *, int))(*this + 4))(this, 1);
      else
        return (*(int (__thiscall **)(int *, int))(*this + 4))(this, 2);
    }
    else if ( result == 2 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_791EB8 + 4) + 28))(*(_DWORD *)(dword_791EB8 + 4), 0);
      return sub_5FC420(0);
    }
  }
  else
  {
    *(this + 8) = 0;
    return (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, 1, 0);
  }
  return result;
}


//======================================================================
// sub_4FD710
// entry 004fd710  size 112  status ok
//======================================================================

int __thiscall sub_4FD710(void *this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_791EB8 + 4) + 28))(*(_DWORD *)(dword_791EB8 + 4), 0);
      return sub_5FC420(0);
    }
  }
  else
  {
    sub_4839E0((_DWORD *)dword_791364, (int)this);
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
  }
  return result;
}


//======================================================================
// sub_4FD7B0
// entry 004fd7b0  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_4FD7B0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &PokerRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_4FD7E0
// entry 004fd7e0  size 120  status ok
//======================================================================

_DWORD *sub_4FD7E0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0xACu);
  if ( v2 )
    return sub_4F9B90(v2);
  else
    return 0;
}


//======================================================================
// sub_4FD860
// entry 004fd860  size 51  status ok
//======================================================================

char __stdcall sub_4FD860(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_POKER");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_4FD8C0
// entry 004fd8c0  size 16  status ok
//======================================================================

int sub_4FD8C0()
{
  return 3205000;
}


//======================================================================
// sub_4FD8D0
// entry 004fd8d0  size 16  status ok
//======================================================================

const char *sub_4FD8D0()
{
  return "poker";
}


//======================================================================
// sub_4FD8F0
// entry 004fd8f0  size 16  status ok
//======================================================================

char **sub_4FD8F0()
{
  return &off_720594;
}


//======================================================================
// sub_4FD900
// entry 004fd900  size 16  status ok
//======================================================================

char **sub_4FD900()
{
  return &off_72059C;
}


//======================================================================
// sub_4FD910
// entry 004fd910  size 16  status ok
//======================================================================

int sub_4FD910()
{
  return 8;
}


//======================================================================
// sub_4FD920
// entry 004fd920  size 16  status ok
//======================================================================

int sub_4FD920()
{
  return 8;
}


//======================================================================
// sub_4FD930
// entry 004fd930  size 118  status ok
//======================================================================

char __stdcall sub_4FD930(int *a1, int a2)
{
  if ( !a1 )
    return 0;
  *a1 = sub_47F950();
  a1[1] = 1;
  a1[2] = sub_47F950();
  a1[3] = 1;
  a1[4] = 1;
  a1[5] = 0;
  a1[6] = sub_47F950() - 1;
  return 1;
}


//======================================================================
// sub_4FD9B0
// entry 004fd9b0  size 16  status ok
//======================================================================

int sub_4FD9B0()
{
  return 24;
}


//======================================================================
// sub_4FD9C0
// entry 004fd9c0  size 80  status ok
//======================================================================

char __stdcall sub_4FD9C0(int a1)
{
  if ( !a1 )
    return 0;
  *(_WORD *)a1 = sub_47F950();
  *(_DWORD *)(a1 + 4) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84
                                                                                           + 356))(
                          dword_162EE84,
                          0);
  return 1;
}


//======================================================================
// sub_4FDA10
// entry 004fda10  size 86  status ok
//======================================================================

char __stdcall sub_4FDA10(int a1)
{
  int v2; // [esp+8h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *(_WORD *)v2 = *(_WORD *)a1;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(a1 + 4);
  return 1;
}


//======================================================================
// sub_4FDA70
// entry 004fda70  size 73  status ok
//======================================================================

char __stdcall sub_4FDA70(_DWORD *a1)
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
// sub_4FDAE0
// entry 004fdae0  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_4FDAE0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(11);
  *a2 += v8[4] + v8[2];
  a2[1] += v8[3];
  *a3 += v8[2];
  a3[1] += v8[3];
  *a4 += v8[4];
  a4[1] += v8[5];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)11 )
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
// sub_4FDC10
// entry 004fdc10  size 446  status ok
//======================================================================

char __stdcall sub_4FDC10(int a1, int a2)
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

  v20 = sub_63AAE0(11);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)11 )
    sub_5E0C40(a2, &v18, &v19);
  v10 = v19;
  v9 = v18;
  sub_64C5C0(v15, *(_DWORD *)(v20 + 16), *(_DWORD *)(v20 + 20));
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
// sub_4FDDD0
// entry 004fddd0  size 60  status ok
//======================================================================

char __stdcall sub_4FDDD0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_4FDE10
// entry 004fde10  size 41  status ok
//======================================================================

char __stdcall sub_4FDE10(int a1)
{
  if ( a1 != 3205000 )
    return 0;
  sub_653BD0(11);
  return 1;
}


//======================================================================
// sub_4FDE40
// entry 004fde40  size 15  status ok
//======================================================================

char __stdcall sub_4FDE40(int a1)
{
  return 0;
}


//======================================================================
// sub_4FDE50
// entry 004fde50  size 15  status ok
//======================================================================

char __stdcall sub_4FDE50(int a1)
{
  return 0;
}


//======================================================================
// sub_4FDE60
// entry 004fde60  size 16  status ok
//======================================================================

void *sub_4FDE60()
{
  return &unk_7205A0;
}


//======================================================================
// sub_4FDE70
// entry 004fde70  size 295  status ok
//======================================================================

int *__stdcall sub_4FDE70(int a1)
{
  int v1; // eax
  int v2; // eax

  if ( (dword_791EC4 & 1) == 0 )
  {
    dword_791EC4 |= 1u;
    dword_7205C4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7205C8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
    dword_7205CC = 3205025;
    dword_7205D0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7205D4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v2);
  }
  if ( a1 == 3205021 )
    return (int *)&unk_7205C0;
  if ( a1 == 3205025 )
    return &dword_7205CC;
  return 0;
}


//======================================================================
// sub_4FDFA0
// entry 004fdfa0  size 16  status ok
//======================================================================

void *sub_4FDFA0()
{
  return &unk_71EF58;
}


//======================================================================
// sub_4FDFB0
// entry 004fdfb0  size 16  status ok
//======================================================================

void *sub_4FDFB0()
{
  return &unk_7203E0;
}


