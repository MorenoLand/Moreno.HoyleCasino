//======================================================================
// sub_47AE60
// entry 0047ae60  size 422  status ok
//======================================================================

int __thiscall sub_47AE60(int this)
{
  _DWORD *v2; // [esp+4h] [ebp-38h]
  _DWORD *v3; // [esp+8h] [ebp-34h]
  _DWORD *v4; // [esp+Ch] [ebp-30h]
  int v5; // [esp+10h] [ebp-2Ch]
  _DWORD *v7; // [esp+18h] [ebp-24h]
  _DWORD *v8; // [esp+20h] [ebp-1Ch]
  _DWORD *v9; // [esp+28h] [ebp-14h]

  *(_BYTE *)(this + 2002) = 0;
  sub_5F87D0(*(_DWORD *)(this + 40));
  v5 = sub_47E1D0(this);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v9 = operator new(0x28u);
      if ( v9 )
      {
        sub_5FC0D0(0);
        *v9 = &DealStudScript::`vftable';
        v4 = v9;
      }
      else
      {
        v4 = 0;
      }
      return sub_5FC420(v4);
    }
    else if ( v5 == 2 )
    {
      v8 = operator new(0x28u);
      if ( v8 )
      {
        sub_5FC0D0(0);
        *v8 = &DealHoldemScript::`vftable';
        v3 = v8;
      }
      else
      {
        v3 = 0;
      }
      return sub_5FC420(v3);
    }
    else
    {
      return sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 617);
    }
  }
  else
  {
    v7 = operator new(0x28u);
    if ( v7 )
    {
      sub_5FC0D0(0);
      *v7 = &DealDrawScript::`vftable';
      v2 = v7;
    }
    else
    {
      v2 = 0;
    }
    return sub_5FC420(v2);
  }
}


//======================================================================
// sub_47B010
// entry 0047b010  size 1407  status ok
//======================================================================

int __thiscall sub_47B010(
        int this,
        Concurrency::details::VirtualProcessor *a2,
        int a3,
        char a4,
        int a5,
        char a6,
        int a7,
        char a8)
{
  int v9; // eax
  int Size; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp+8h] [ebp-3Ch]
  int v16; // [esp+8h] [ebp-3Ch]
  int v17; // [esp+8h] [ebp-3Ch]
  int v18; // [esp+8h] [ebp-3Ch]
  int v19; // [esp+8h] [ebp-3Ch]
  _DWORD *v20; // [esp+14h] [ebp-30h]
  _DWORD *v22; // [esp+1Ch] [ebp-28h]
  Concurrency::details::_CancellationTokenRegistration *v23; // [esp+24h] [ebp-20h]
  int i; // [esp+2Ch] [ebp-18h]
  int v25; // [esp+30h] [ebp-14h]

  if ( a3 != 1 )
    sub_5E9F20((char)"numCards == 1", "..\\Casino\\PokerGame.cpp", 625);
  if ( *(_DWORD *)(this + 1044) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 48)) && sub_47E1D0(this) == 1 )
    return 3;
  v25 = 0;
  v22 = operator new(0x30u);
  if ( v22 )
    v20 = sub_463E70(v22, a5);
  else
    v20 = 0;
  for ( i = 0; i < a3; ++i )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      100002,
      0,
      0,
      5,
      1,
      1.0,
      0.5,
      0);
    if ( *(_DWORD *)(this + 1044) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 48)) )
    {
      if ( *(_DWORD *)(this + 1188) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 52)) )
        sub_5E9F20((char)"nDiscardPileCounter < discardPile->Size()", "..\\Casino\\PokerGame.cpp", 644);
      v23 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(*(_DWORD *)(this + 1188));
    }
    else
    {
      v23 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(*(_DWORD *)(this + 1044));
    }
    sub_60C7D0(v23);
    if ( !*((_DWORD *)v23 + 2) )
      sub_463B90(v23);
    v15 = *(_DWORD *)(*(_DWORD *)(this + 4 * sub_47BBC0(this) + 4) + 20);
    v9 = sub_47BBC0(this);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v23 + 2) + 68))(
      *((_DWORD *)v23 + 2),
      *(_DWORD *)(*(_DWORD *)(this + 4 * v9 + 4) + 16),
      v15);
    switch ( Concurrency::details::VirtualProcessor::GetExecutionResourceId(a2) )
    {
      case 0xFFFFFFFF:
      case 0u:
      case 1u:
      case 6u:
      case 7u:
        if ( a8 )
        {
          v16 = *((_DWORD *)a2 + 5) - 10;
          Size = CRecentFileList::GetSize(*((CRecentFileList **)a2 + 3));
          (*(void (__thiscall **)(_DWORD *, int, int))(*v20 + 12))(v20, 13 * (Size + 1) + *((_DWORD *)a2 + 4) + 86, v16);
        }
        else
        {
          v17 = *((_DWORD *)a2 + 5) + 8;
          v11 = CRecentFileList::GetSize(*((CRecentFileList **)a2 + 2));
          (*(void (__thiscall **)(_DWORD *, int, int))(*v20 + 12))(v20, 13 * (v11 - 1) + *((_DWORD *)a2 + 4) + 86, v17);
        }
        break;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
        if ( a8 )
        {
          v18 = *((_DWORD *)a2 + 5) - 10;
          v12 = CRecentFileList::GetSize(*((CRecentFileList **)a2 + 3));
          (*(void (__thiscall **)(_DWORD *, int, int))(*v20 + 12))(v20, 13 * (v12 + 1) + *((_DWORD *)a2 + 4) - 85, v18);
        }
        else
        {
          v19 = *((_DWORD *)a2 + 5) + 8;
          v13 = CRecentFileList::GetSize(*((CRecentFileList **)a2 + 2));
          (*(void (__thiscall **)(_DWORD *, int, int))(*v20 + 12))(v20, 13 * (v13 - 1) + *((_DWORD *)a2 + 4) - 85, v19);
        }
        break;
      default:
        break;
    }
    if ( a8 )
    {
      sub_463D40((int)v23);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v23 + 2) + 108))(*((_DWORD *)v23 + 2), 200);
    }
    else if ( a4 )
    {
      sub_463D40((int)v23);
    }
    else
    {
      sub_463DB0((_DWORD **)v23, a6);
    }
    *(_DWORD *)(*((_DWORD *)v23 + 2) + 388) = sub_637810(4);
    *(_DWORD *)(*((_DWORD *)v23 + 2) + 388) = *(int *)(*((_DWORD *)v23 + 2) + 388) > 3;
    v14 = CRecentFileList::GetSize(*((CRecentFileList **)a2 + 2));
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v23 + 2) + 108))(*((_DWORD *)v23 + 2), v14 + 100);
    sub_5F6050(v20);
    if ( *(_DWORD *)(this + 1044) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 48)) )
    {
      if ( ++*(_DWORD *)(this + 1188) == *(_DWORD *)(this + 1192) )
        sub_47F980(this);
    }
    else
    {
      ++*(_DWORD *)(this + 1044);
      if ( *(_DWORD *)(this + 1044) == CRecentFileList::GetSize(*(CRecentFileList **)(this + 48)) )
        sub_47F980(this);
    }
    if ( a7 == 1
      && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2802 )
    {
      v25 = 1;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2815 )
    {
      v25 = 1;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2828 )
    {
      v25 = 1;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2841 )
    {
      v25 = 1;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2803 )
    {
      v25 = 2;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2816 )
    {
      v25 = 2;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2829 )
    {
      v25 = 2;
    }
    else if ( a7 == 1
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2842 )
    {
      v25 = 2;
    }
    else if ( a7 == 2
           && Concurrency::details::_CancellationTokenRegistration::_GetToken(v23) == (struct Concurrency::details::_CancellationTokenState *)2811 )
    {
      v25 = 4;
    }
  }
  return v25;
}


//======================================================================
// sub_47B5B0
// entry 0047b5b0  size 973  status ok
//======================================================================

int __thiscall sub_47B5B0(int this, CRecentFileList **a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-38h]
  _DWORD *v6; // [esp+14h] [ebp-2Ch]
  _DWORD *v8; // [esp+1Ch] [ebp-24h]
  _DWORD *v9; // [esp+28h] [ebp-18h]
  int v10; // [esp+2Ch] [ebp-14h]

  v8 = operator new(0x30u);
  if ( v8 )
    v6 = sub_463E70(v8, a3);
  else
    v6 = 0;
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    903,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  if ( *(_DWORD *)(this + 1044) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 48)) )
  {
    if ( *(_DWORD *)(this + 1188) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 52)) )
      sub_5E9F20((char)"nDiscardPileCounter < discardPile->Size()", "..\\Casino\\PokerGame.cpp", 748);
    v9 = (_DWORD *)sub_60CA40(*(_DWORD *)(this + 1188));
    sub_60C7D0(v9);
  }
  else
  {
    v9 = (_DWORD *)sub_60CA40(*(_DWORD *)(this + 1044));
    sub_60C7D0(v9);
  }
  if ( !v9[2] )
    sub_463B90(v9);
  v5 = *(_DWORD *)(*(_DWORD *)(this + 4 * sub_47BBC0(this) + 4) + 20);
  v3 = sub_47BBC0(this);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v9[2] + 68))(
    v9[2],
    *(_DWORD *)(*(_DWORD *)(this + 4 * v3 + 4) + 16),
    v5);
  if ( Concurrency::details::VirtualProcessor::GetExecutionResourceId((Concurrency::details::VirtualProcessor *)a2) != -1 )
    sub_5E9F20((char)"dealToPlayer->GetSeatNumber() == -1", "..\\Casino\\PokerGame.cpp", 758);
  v10 = CRecentFileList::GetSize(a2[2]) - 1;
  if ( v10 >= 5 )
    sub_5E9F20((char)"nCurrentHandSize < 5", "..\\Casino\\PokerGame.cpp", 761);
  sub_463DB0((_DWORD **)v9, 0);
  switch ( v10 )
  {
    case 0:
      (*(void (__thiscall **)(_DWORD *, int, int))(*v6 + 12))(v6, (int)a2[4] + 99, (int)a2[5] - 21);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v9[2] + 108))(v9[2], 100);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int, int))(*v6 + 12))(v6, (int)a2[4] + 86, (int)a2[5] + 1);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v9[2] + 108))(v9[2], 101);
      break;
    case 2:
      (*(void (__thiscall **)(_DWORD *, int, int))(*v6 + 12))(v6, (int)a2[4] + 99, (int)a2[5] + 23);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v9[2] + 108))(v9[2], 104);
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int, int))(*v6 + 12))(v6, (int)a2[4] + 112, (int)a2[5] + 1);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v9[2] + 108))(v9[2], 103);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD *, int, int))(*v6 + 12))(v6, (int)a2[4] + 99, (int)a2[5] + 1);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v9[2] + 108))(v9[2], 102);
      break;
    default:
      break;
  }
  *(_DWORD *)(v9[2] + 388) = sub_637810(4);
  sub_5F6050(v6);
  if ( *(_DWORD *)(this + 1044) >= CRecentFileList::GetSize(*(CRecentFileList **)(this + 48)) )
  {
    ++*(_DWORD *)(this + 1188);
    result = this;
    if ( *(_DWORD *)(this + 1188) == *(_DWORD *)(this + 1192) )
      return sub_47F980(this);
  }
  else
  {
    ++*(_DWORD *)(this + 1044);
    result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 48));
    if ( *(_DWORD *)(this + 1044) == result )
      return sub_47F980(this);
  }
  return result;
}


//======================================================================
// sub_47B9A0
// entry 0047b9a0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47B9A0(_DWORD *this, int a2)
{
  *(this + 290) = a2;
  return this;
}


//======================================================================
// sub_47BAC0
// entry 0047bac0  size 248  status ok
//======================================================================

int __thiscall sub_47BAC0(_DWORD *this)
{
  int v1; // eax

  sub_47E390(*(this + 290));
  sub_4C70B0(0);
  if ( *(this + 290) >= sub_47F950(this) - 1 )
  {
    *(this + 290) = 0;
  }
  else
  {
    ++*(this + 290);
    *(this + 290) = *(this + 290);
  }
  while ( 1 )
  {
    v1 = sub_47E390(*(this + 290));
    if ( sub_4C6CB0(v1) )
      break;
    if ( *(this + 290) >= sub_47F950(this) - 1 )
    {
      *(this + 290) = 0;
    }
    else
    {
      ++*(this + 290);
      *(this + 290) = *(this + 290);
    }
  }
  sub_47E390(*(this + 290));
  return sub_4C70B0(1);
}


//======================================================================
// sub_47BBC0
// entry 0047bbc0  size 20  status ok
//======================================================================

int __thiscall sub_47BBC0(_DWORD *this)
{
  return *(this + 290);
}


//======================================================================
// sub_47BBE0
// entry 0047bbe0  size 54  status ok
//======================================================================

int __thiscall sub_47BBE0(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 < 1 )
    result = sub_5E9F20((char)"nAmount>=1", "..\\Casino\\PokerGame.cpp", 872);
  *(this + 268) = a2;
  return result;
}


//======================================================================
// sub_47BC40
// entry 0047bc40  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BC40(_DWORD *this, int a2)
{
  *(this + 269) = a2;
  return this;
}


//======================================================================
// sub_47BC60
// entry 0047bc60  size 20  status ok
//======================================================================

int __thiscall sub_47BC60(_DWORD *this)
{
  return *(this + 269);
}


//======================================================================
// sub_47BC80
// entry 0047bc80  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BC80(_DWORD *this, int a2)
{
  *(this + 270) = a2;
  return this;
}


//======================================================================
// sub_47BCC0
// entry 0047bcc0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BCC0(_DWORD *this, int a2)
{
  *(this + 271) = a2;
  return this;
}


//======================================================================
// sub_47BD00
// entry 0047bd00  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BD00(_DWORD *this, int a2)
{
  *(this + 272) = a2;
  return this;
}


//======================================================================
// sub_47BD40
// entry 0047bd40  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BD40(_DWORD *this, int a2)
{
  *(this + 273) = a2;
  return this;
}


//======================================================================
// sub_47BD80
// entry 0047bd80  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BD80(_DWORD *this, int a2)
{
  *(this + 274) = a2;
  return this;
}


//======================================================================
// sub_47BDC0
// entry 0047bdc0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47BDC0(_DWORD *this, int a2)
{
  *(this + 275) = a2;
  return this;
}


//======================================================================
// sub_47BE00
// entry 0047be00  size 3310  status ok
//======================================================================

int __thiscall sub_47BE00(_DWORD *this, int a2)
{
  *(this + 262) = a2;
  if ( a2 != 10 )
  {
    switch ( a2 )
    {
      case 9:
        sub_47BBE0(this, 1);
        sub_47BC40(this, 800 * *(this + 264));
        sub_47BC80(this, 1000 * *(this + 264));
        sub_47BCC0(this, 2000 * *(this + 264));
        sub_47BD00(this, 4000 * *(this + 264));
        sub_47BD40(this, 500 * *(this + 264));
        sub_47BD80(this, 2500 * *(this + 264));
        sub_47BDC0(this, 5000 * *(this + 264));
        if ( sub_47E170(this) == 23 || sub_47D6B0(this) == 1 )
        {
          switch ( *(this + 264) )
          {
            case 4:
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$2,000-$20,000");
            case 3:
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$1,500-$15,000");
            case 2:
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$1,000-$10,000");
          }
          return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                   *(_DWORD *)(*(this + 10) + 488),
                   "$500-$5,000");
        }
        switch ( *(this + 264) )
        {
          case 4:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$8,000-$16,000");
          case 3:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$6,000-$12,000");
          case 2:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$4,000-$8,000");
        }
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$2,000-$4,000");
      case 8:
        return sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 1023);
      case 7:
        sub_47BBE0(this, 1);
        sub_47BC40(this, 200 * *(this + 264));
        sub_47BC80(this, 250 * *(this + 264));
        sub_47BCC0(this, 500 * *(this + 264));
        sub_47BD00(this, 1000 * *(this + 264));
        sub_47BD40(this, 100 * *(this + 264));
        sub_47BD80(this, 500 * *(this + 264));
        sub_47BDC0(this, 1000 * *(this + 264));
        if ( sub_47E170(this) != 23 && sub_47D6B0(this) != 1 )
        {
          if ( *(this + 264) != 4 )
          {
            if ( *(this + 264) == 3 )
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$1,500-$3,000");
            if ( *(this + 264) == 2 )
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$1,000-$2,000");
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$500-$1,000");
          }
          return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                   *(_DWORD *)(*(this + 10) + 488),
                   "$2,000-$4,000");
        }
        switch ( *(this + 264) )
        {
          case 4:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$400-$4,000");
          case 3:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$300-$3,000");
          case 2:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$200-$2,000");
        }
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$100-$1,000");
      case 6:
        return sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 1060);
      case 5:
        sub_47BBE0(this, 1);
        sub_47BC40(this, 40 * *(this + 264));
        sub_47BC80(this, 50 * *(this + 264));
        sub_47BCC0(this, 100 * *(this + 264));
        sub_47BD00(this, 200 * *(this + 264));
        sub_47BD40(this, 25 * *(this + 264));
        sub_47BD80(this, 125 * *(this + 264));
        sub_47BDC0(this, 250 * *(this + 264));
        if ( sub_47E170(this) == 23 || sub_47D6B0(this) == 1 )
        {
          if ( *(this + 264) != 4 )
          {
            if ( *(this + 264) == 3 )
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$75-$750");
            if ( *(this + 264) == 2 )
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$50-$500");
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$25-$250");
          }
          return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                   *(_DWORD *)(*(this + 10) + 488),
                   "$100-$1,000");
        }
        switch ( *(this + 264) )
        {
          case 4:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$400-$800");
          case 3:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$300-$600");
          case 2:
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$200-$400");
        }
        break;
      case 4:
        return sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 1097);
      case 3:
        sub_47BBE0(this, 1);
        sub_47BC40(this, 10 * *(this + 264));
        sub_47BC80(this, 10 * *(this + 264));
        sub_47BCC0(this, 25 * *(this + 264));
        sub_47BD00(this, 50 * *(this + 264));
        sub_47BD40(this, 5 * *(this + 264));
        sub_47BD80(this, 25 * *(this + 264));
        sub_47BDC0(this, 50 * *(this + 264));
        if ( sub_47E170(this) == 23 || sub_47D6B0(this) == 1 )
        {
          switch ( *(this + 264) )
          {
            case 4:
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$20-$200");
            case 3:
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$15-$150");
            case 2:
              return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                       *(_DWORD *)(*(this + 10) + 488),
                       "$10-$100");
          }
          return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                   *(_DWORD *)(*(this + 10) + 488),
                   "$5-$50");
        }
        if ( *(this + 264) != 4 )
        {
          if ( *(this + 264) == 3 )
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$75-$150");
          if ( *(this + 264) == 2 )
            return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                     *(_DWORD *)(*(this + 10) + 488),
                     "$50-$100");
          return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                   *(_DWORD *)(*(this + 10) + 488),
                   "$25-$50");
        }
        break;
      case 2:
        return sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 1134);
      default:
        return sub_47BBE0(this, 1);
    }
    return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
             *(_DWORD *)(*(this + 10) + 488),
             "$100-$200");
  }
  sub_47BBE0(this, 1);
  sub_47BC40(this, 4000 * *(this + 264));
  sub_47BC80(this, 5000 * *(this + 264));
  sub_47BCC0(this, 10000 * *(this + 264));
  sub_47BD00(this, 20000 * *(this + 264));
  sub_47BD40(this, 2500 * *(this + 264));
  sub_47BD80(this, 12500 * *(this + 264));
  sub_47BDC0(this, 25000 * *(this + 264));
  if ( sub_47E170(this) == 23 || sub_47D6B0(this) == 1 )
  {
    switch ( *(this + 264) )
    {
      case 4:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$10,000-$100,000");
      case 3:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$7,500-$75,000");
      case 2:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$5,000-$50,000");
      default:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$2,500-$25,000");
    }
  }
  else
  {
    switch ( *(this + 264) )
    {
      case 4:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$40,000-$80,000");
      case 3:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$30,000-$60,000");
      case 2:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$20,000-$40,000");
      default:
        return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 488) + 180))(
                 *(_DWORD *)(*(this + 10) + 488),
                 "$10,000-$20,000");
    }
  }
}


//======================================================================
// sub_47CAF0
// entry 0047caf0  size 20  status ok
//======================================================================

int __thiscall sub_47CAF0(_DWORD *this)
{
  return *(this + 262);
}


//======================================================================
// sub_47CB10
// entry 0047cb10  size 100  status ok
//======================================================================

int __thiscall sub_47CB10(_DWORD *this, int a2)
{
  int v2; // eax

  if ( a2 < 1 )
    sub_5E9F20((char)"nMultiplierIn >= 1", "..\\Casino\\PokerGame.cpp", 1150);
  if ( a2 > 4 )
    sub_5E9F20((char)"nMultiplierIn <= 4", "..\\Casino\\PokerGame.cpp", 1151);
  *(this + 264) = a2;
  v2 = sub_47CAF0(this);
  return sub_47BE00(this, v2);
}


//======================================================================
// sub_47CB80
// entry 0047cb80  size 20  status ok
//======================================================================

int __thiscall sub_47CB80(_DWORD *this)
{
  return *(this + 264);
}


//======================================================================
// sub_47CBA0
// entry 0047cba0  size 27  status ok
//======================================================================

int sub_47CBA0()
{
  return 3 * sub_637810(2);
}


//======================================================================
// sub_47CBE0
// entry 0047cbe0  size 20  status ok
//======================================================================

char __thiscall sub_47CBE0(_BYTE *this)
{
  return *(this + 1172);
}


//======================================================================
// sub_47CC00
// entry 0047cc00  size 168  status ok
//======================================================================

int __stdcall sub_47CC00(int a1)
{
  int i; // [esp+8h] [ebp-Ch]
  int j; // [esp+8h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  v5 = 0;
  for ( i = 0; i < 7; ++i )
    *(_DWORD *)(a1 + 4 * i) = -1;
  for ( j = 0; j < 7; ++j )
  {
    v4 = sub_47E390(j);
    if ( !(unsigned __int8)sub_4C61B0(v4) && *(_DWORD *)(sub_5DCB00(*(_DWORD *)(v4 + 4)) + 12) == -1 )
      *(_DWORD *)(a1 + 4 * v5++) = j;
  }
  return v5;
}


//======================================================================
// sub_47CCB0
// entry 0047ccb0  size 35  status ok
//======================================================================

int __stdcall sub_47CCB0(int a1)
{
  if ( a1 == -1 )
    return 0;
  else
    return sub_47E390(a1);
}


//======================================================================
// sub_47CCE0
// entry 0047cce0  size 74  status ok
//======================================================================

int sub_47CCE0()
{
  int v1; // [esp+4h] [ebp-24h]
  int v2; // [esp+8h] [ebp-20h]
  _DWORD v3[7]; // [esp+Ch] [ebp-1Ch] BYREF

  v1 = sub_47CC00((int)v3);
  if ( !v1 )
    return 0;
  v2 = sub_62FC30(0, v1 - 1);
  return sub_47CCB0(v3[v2]);
}


//======================================================================
// sub_47CD30
// entry 0047cd30  size 94  status ok
//======================================================================

char sub_47CD30()
{
  int i; // [esp+4h] [ebp-8h]
  Concurrency::details::SchedulerProxy *v2; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(i);
    if ( v2 && !(unsigned __int8)sub_4C61B0(v2) && Concurrency::details::SchedulerProxy::GetQueueLength(v2) == 1 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_47CD90
// entry 0047cd90  size 109  status ok
//======================================================================

Concurrency::details::SchedulerProxy *sub_47CD90()
{
  int v1; // [esp+4h] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v2; // [esp+8h] [ebp-8h]

  if ( !sub_47CD30() )
    return 0;
  do
  {
    do
    {
      v1 = sub_62FC30(0, 6);
      v2 = (Concurrency::details::SchedulerProxy *)sub_47E390(v1);
    }
    while ( (unsigned __int8)sub_4C61B0(v2) );
  }
  while ( Concurrency::details::SchedulerProxy::GetQueueLength(v2) != 1 );
  return v2;
}


//======================================================================
// sub_47CE00
// entry 0047ce00  size 88  status ok
//======================================================================

int __thiscall sub_47CE00(void *this, _DWORD *a2, int *a3)
{
  int result; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
    return (*(int (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)dword_7947E4 + 620))(dword_7947E4, a2, a3);
  *a2 = sub_480D20(this);
  result = 2 * *a2;
  *a3 = result;
  return result;
}


//======================================================================
// sub_47CE60
// entry 0047ce60  size 20  status ok
//======================================================================

int __thiscall sub_47CE60(_DWORD *this)
{
  return *(this + 279);
}


//======================================================================
// sub_47CE80
// entry 0047ce80  size 1965  status ok
//======================================================================

int __thiscall sub_47CE80(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 279) = a2;
  switch ( *(this + 279) )
  {
    case 0:
      sub_47D6D0(0);
      sub_47E1B0(3);
      sub_47E2A0(0);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 1:
      sub_47D6D0(0);
      sub_47E1B0(4);
      sub_47E2A0(0);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 2:
      sub_47D6D0(0);
      sub_47E1B0(4);
      sub_47E2A0(2);
      sub_47D690(1);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 3:
      sub_47D6D0(0);
      sub_47E1B0(1);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 4:
      sub_47D6D0(0);
      sub_47E1B0(1);
      sub_47E2A0(2);
      sub_47D690(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 5:
      sub_47D6D0(0);
      sub_47E1B0(0);
      sub_47E2A0(0);
      sub_47E260(0);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 6:
      sub_47D6D0(0);
      sub_47E1B0(0);
      sub_47E2A0(1);
      sub_47E260(0);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 7:
      sub_47D6D0(1);
      sub_47E1B0(3);
      sub_47E2A0(0);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 8:
      sub_47D6D0(1);
      sub_47E1B0(4);
      sub_47E2A0(0);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 9:
      sub_47D6D0(1);
      sub_47E1B0(4);
      sub_47E2A0(2);
      sub_47D690(1);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0xA:
      sub_47D6D0(1);
      sub_47E1B0(1);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0xB:
      sub_47D6D0(1);
      sub_47E1B0(1);
      sub_47E2A0(2);
      sub_47D690(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0xC:
      sub_47D6D0(1);
      sub_47E1B0(0);
      sub_47E2A0(0);
      sub_47E260(0);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0xD:
      sub_47D6D0(1);
      sub_47E1B0(0);
      sub_47E2A0(1);
      sub_47E260(0);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0xE:
      sub_47D6D0(1);
      sub_47E1B0(0);
      sub_47E2A0(0);
      sub_47E260(0);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(1);
      break;
    case 0xF:
      sub_47D6D0(1);
      sub_47E1B0(2);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0x10:
      sub_47D6D0(1);
      sub_47E1B0(1);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(1);
      sub_47D750(1);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0x11:
      sub_47D6D0(1);
      sub_47E1B0(1);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(4);
      result = sub_47D7D0(0);
      break;
    case 0x12:
      sub_47D6D0(1);
      sub_47E1B0(1);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(2);
      sub_47D750(2);
      sub_47D790(3);
      result = sub_47D7D0(0);
      break;
    case 0x13:
      sub_47D6D0(1);
      sub_47E1B0(1);
      sub_47E2A0(0);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(2);
      sub_47D790(2);
      result = sub_47D7D0(0);
      break;
    case 0x14:
      sub_47D6D0(1);
      sub_47E1B0(5);
      sub_47E2A0(0);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(1);
      result = sub_47D7D0(0);
      break;
    case 0x15:
      sub_47D6D0(1);
      sub_47E1B0(6);
      sub_47E2A0(2);
      sub_47D690(2);
      sub_47E260(2);
      sub_47D710(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    case 0x16:
      sub_47D6D0(1);
      sub_47E1B0(7);
      sub_47E2A0(2);
      sub_47D690(2);
      sub_47E260(1);
      sub_47D710(0);
      sub_47D750(0);
      sub_47D790(0);
      result = sub_47D7D0(0);
      break;
    default:
      result = sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 1512);
      break;
  }
  return result;
}


//======================================================================
// sub_47D690
// entry 0047d690  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47D690(_DWORD *this, int a2)
{
  *(this + 283) = a2;
  return this;
}


//======================================================================
// sub_47D6B0
// entry 0047d6b0  size 20  status ok
//======================================================================

int __thiscall sub_47D6B0(_DWORD *this)
{
  return *(this + 284);
}


//======================================================================
// sub_47D6D0
// entry 0047d6d0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47D6D0(_DWORD *this, int a2)
{
  *(this + 284) = a2;
  return this;
}


//======================================================================
// sub_47D6F0
// entry 0047d6f0  size 20  status ok
//======================================================================

int __thiscall sub_47D6F0(_DWORD *this)
{
  return *(this + 285);
}


//======================================================================
// sub_47D710
// entry 0047d710  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47D710(_DWORD *this, int a2)
{
  *(this + 285) = a2;
  return this;
}


//======================================================================
// sub_47D730
// entry 0047d730  size 20  status ok
//======================================================================

int __thiscall sub_47D730(_DWORD *this)
{
  return *(this + 286);
}


//======================================================================
// sub_47D750
// entry 0047d750  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47D750(_DWORD *this, int a2)
{
  *(this + 286) = a2;
  return this;
}


//======================================================================
// sub_47D770
// entry 0047d770  size 20  status ok
//======================================================================

int __thiscall sub_47D770(_DWORD *this)
{
  return *(this + 287);
}


//======================================================================
// sub_47D790
// entry 0047d790  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47D790(_DWORD *this, int a2)
{
  *(this + 287) = a2;
  return this;
}


//======================================================================
// sub_47D7B0
// entry 0047d7b0  size 20  status ok
//======================================================================

int __thiscall sub_47D7B0(_DWORD *this)
{
  return *(this + 288);
}


//======================================================================
// sub_47D7D0
// entry 0047d7d0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47D7D0(_DWORD *this, int a2)
{
  *(this + 288) = a2;
  return this;
}


//======================================================================
// sub_47D7F0
// entry 0047d7f0  size 20  status ok
//======================================================================

int __thiscall sub_47D7F0(_DWORD *this)
{
  return *(this + 283);
}


//======================================================================
// sub_47D810
// entry 0047d810  size 2285  status ok
//======================================================================

int __thiscall sub_47D810(unsigned int *this, unsigned int a2)
{
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
  unsigned int v46; // [esp+0h] [ebp-Ch]

  *(this + 278) = a2;
  switch ( *(this + 278) )
  {
    case 0xFFFFFFFF:
      v43 = sub_630F40("SID_POKER_5CARDDRAW");
      sub_5F73E0(v43, 32, 0, 0);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 0u:
      v2 = sub_630F40("SID_POKER_TEXASHOLDEM");
      sub_5F73E0(v2, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 1u:
      v3 = sub_630F40("SID_POKER_OMAHAHOLDEM");
      sub_5F73E0(v3, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 2u:
      v4 = sub_630F40("SID_POKER_OMAHAHOLDEMHILO");
      sub_5F73E0(v4, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 3u:
      v5 = sub_630F40("SID_POKER_7CARDSTUD");
      sub_5F73E0(v5, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 4u:
      v6 = sub_630F40("SID_POKER_7CARDSTUDHILO");
      sub_5F73E0(v6, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 5u:
      v7 = sub_630F40("SID_POKER_5CARDDRAW");
      sub_5F73E0(v7, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 6u:
      v8 = sub_630F40("SID_POKER_5CARDDRAWLOWBALL");
      sub_5F73E0(v8, 31, 0, 3);
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        &Source);
      break;
    case 7u:
      v9 = sub_630F40("SID_POKER_TEXASHOLDEM");
      sub_5F73E0(v9, 32, 0, 0);
      v10 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v10);
      break;
    case 8u:
      v11 = sub_630F40("SID_POKER_OMAHAHOLDEM");
      sub_5F73E0(v11, 32, 0, 0);
      v12 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v12);
      break;
    case 9u:
      v13 = sub_630F40("SID_POKER_OMAHAHOLDEMHILO");
      sub_5F73E0(v13, 32, 0, 0);
      v14 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v14);
      break;
    case 0xAu:
      v15 = sub_630F40("SID_POKER_7CARDSTUD");
      sub_5F73E0(v15, 32, 0, 0);
      v16 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v16);
      break;
    case 0xBu:
      v17 = sub_630F40("SID_POKER_7CARDSTUDHILO");
      sub_5F73E0(v17, 32, 0, 0);
      v18 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v18);
      break;
    case 0xCu:
      v19 = sub_630F40("SID_POKER_5CARDDRAW");
      sub_5F73E0(v19, 32, 0, 0);
      v20 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v20);
      break;
    case 0xDu:
      v21 = sub_630F40("SID_POKER_5CARDDRAWLOWBALL");
      sub_5F73E0(v21, 32, 0, 0);
      v22 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v22);
      break;
    case 0xEu:
      v23 = sub_630F40("SID_POKER_5CARDDRAWJACKS");
      sub_5F73E0(v23, 32, 0, 0);
      v24 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v24);
      break;
    case 0xFu:
      v25 = sub_630F40("SID_POKER_5CARDSTUD");
      sub_5F73E0(v25, 32, 0, 0);
      v26 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v26);
      break;
    case 0x10u:
      v27 = sub_630F40("SID_POKER_BASEBALL");
      sub_5F73E0(v27, 32, 0, 0);
      v28 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v28);
      break;
    case 0x11u:
      v29 = sub_630F40("SID_POKER_HIGHCHICAGO");
      sub_5F73E0(v29, 32, 0, 0);
      v30 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v30);
      break;
    case 0x12u:
      v31 = sub_630F40("SID_POKER_MURDER");
      sub_5F73E0(v31, 32, 0, 0);
      v32 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v32);
      break;
    case 0x13u:
      v33 = sub_630F40("SID_POKER_THEBITCH");
      sub_5F73E0(v33, 32, 0, 0);
      v34 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v34);
      break;
    case 0x14u:
      v35 = sub_630F40("SID_POKER_CINCINNATI");
      sub_5F73E0(v35, 32, 0, 0);
      v36 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v36);
      break;
    case 0x15u:
      v37 = sub_630F40("SID_POKER_CRISSCROSS");
      sub_5F73E0(v37, 32, 0, 0);
      v38 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v38);
      break;
    case 0x16u:
      v39 = sub_630F40("SID_POKER_PASSTHETRASH");
      sub_5F73E0(v39, 32, 0, 0);
      v40 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v40);
      break;
    case 0x17u:
      v41 = sub_630F40("SID_POKER_DEALERSCHOICE");
      sub_5F73E0(v41, 32, 0, 0);
      v42 = sub_630F40("SID_POKER_FRIDAYNIGHT");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 10) + 484) + 180))(
        *(_DWORD *)(*(this + 10) + 484),
        v42);
      break;
    default:
      sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 1688);
      break;
  }
  v46 = *(this + 278);
  if ( v46 == -1 )
  {
    sub_47D6D0(this, -1);
    sub_47E1B0(-1);
    sub_47E2A0(0);
    sub_47E260(-1);
    sub_47D710(this, 0);
    sub_47D790(this, 0);
    sub_47D7D0(this, 0);
  }
  else if ( v46 <= 6 )
  {
    sub_47CE80(this, *(this + 278));
  }
  else
  {
    sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 1728);
  }
  v44 = sub_47CAF0(this);
  return sub_47BE00(this, v44);
}


//======================================================================
// sub_47E170
// entry 0047e170  size 22  status ok
//======================================================================

int sub_47E170()
{
  return *(_DWORD *)(dword_7947E0 + 20248);
}


//======================================================================
// sub_47E190
// entry 0047e190  size 20  status ok
//======================================================================

int __thiscall sub_47E190(_DWORD *this)
{
  return *(this + 280);
}


//======================================================================
// sub_47E1B0
// entry 0047e1b0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47E1B0(_DWORD *this, int a2)
{
  *(this + 280) = a2;
  return this;
}


//======================================================================
// sub_47E1D0
// entry 0047e1d0  size 140  status ok
//======================================================================

int __thiscall sub_47E1D0(_DWORD *this)
{
  if ( *(_DWORD *)(dword_7947E0 + 20248) <= 2u )
    return 2;
  if ( *(_DWORD *)(dword_7947E0 + 20248) == 3 || *(_DWORD *)(dword_7947E0 + 20248) == 4 )
    return 1;
  if ( *(_DWORD *)(dword_7947E0 + 20248) == 5 || *(_DWORD *)(dword_7947E0 + 20248) == 6 )
    return 0;
  return *(this + 281);
}


//======================================================================
// sub_47E260
// entry 0047e260  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47E260(_DWORD *this, int a2)
{
  *(this + 281) = a2;
  return this;
}


//======================================================================
// sub_47E280
// entry 0047e280  size 20  status ok
//======================================================================

int __thiscall sub_47E280(_DWORD *this)
{
  return *(this + 282);
}


//======================================================================
// sub_47E2A0
// entry 0047e2a0  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47E2A0(_DWORD *this, int a2)
{
  *(this + 282) = a2;
  return this;
}


//======================================================================
// sub_47E2C0
// entry 0047e2c0  size 154  status ok
//======================================================================

int __thiscall sub_47E2C0(_DWORD *this)
{
  int result; // eax

  switch ( *(this + 279) )
  {
    case 0:
    case 7:
      result = 0;
      break;
    case 1:
    case 8:
      result = 6;
      break;
    case 2:
    case 9:
      result = 2;
      break;
    case 3:
    case 0xA:
      result = 7;
      break;
    case 4:
    case 0xB:
      result = 1;
      break;
    case 5:
    case 0xC:
      result = 5;
      break;
    case 6:
    case 0xD:
      result = 3;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 1811);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_47E390
// entry 0047e390  size 28  status ok
//======================================================================

int __stdcall sub_47E390(int a1)
{
  return sub_60CA40(a1);
}


//======================================================================
// sub_47E3B0
// entry 0047e3b0  size 28  status ok
//======================================================================

int __thiscall sub_47E3B0(void *this)
{
  int v1; // eax

  v1 = sub_47E420(this);
  return sub_47E390(v1);
}


//======================================================================
// sub_47E3D0
// entry 0047e3d0  size 34  status ok
//======================================================================

int __stdcall sub_47E3D0(int a1)
{
  int v1; // eax

  v1 = sub_47E490(a1);
  return sub_47E390(v1);
}


//======================================================================
// sub_47E400
// entry 0047e400  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_47E400(_DWORD *this, int a2)
{
  *(this + 266) = a2;
  return this;
}


//======================================================================
// sub_47E420
// entry 0047e420  size 20  status ok
//======================================================================

int __thiscall sub_47E420(_DWORD *this)
{
  return *(this + 266);
}


//======================================================================
// sub_47E440
// entry 0047e440  size 67  status ok
//======================================================================

int __thiscall sub_47E440(_DWORD *this)
{
  int result; // eax

  ++*(this + 266);
  result = sub_47F950(dword_791364);
  if ( *(this + 266) >= result )
    *(this + 266) = 0;
  return result;
}


//======================================================================
// sub_47E490
// entry 0047e490  size 106  status ok
//======================================================================

int __thiscall sub_47E490(Concurrency::details::VirtualProcessor **this, struct Concurrency::IExecutionContext *a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    if ( Concurrency::details::VirtualProcessor::GetExecutingContext(*(this + i + 1)) == a2 )
      return i;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 1866);
  return -1;
}


//======================================================================
// sub_47E500
// entry 0047e500  size 63  status ok
//======================================================================

int sub_47E500()
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
           dword_162EE84,
           100001,
           0,
           0,
           5,
           1,
           1.0,
           0.5,
           0);
}


//======================================================================
// sub_47E540
// entry 0047e540  size 247  status ok
//======================================================================

int __thiscall sub_47E540(ATL::CAtlWinModule *this, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  CBaseRenderer *v8; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < sub_47F950(dword_791364); ++i )
  {
    v2 = sub_47E390(i);
    sub_4DA3A0(v2);
    v3 = sub_47E390(i);
    sub_4DA450(v3);
    v4 = sub_47E390(i);
    sub_4DA4B0(v4);
    v5 = sub_47E390(i);
    sub_4DA890(v5);
    v6 = sub_47E390(i);
    sub_4DB610(v6);
    v7 = sub_47E390(i);
    sub_4DC490(v7);
    if ( a2 )
    {
      v8 = (CBaseRenderer *)sub_47E390(i);
      CBaseRenderer::SignalTimerFired(v8);
    }
  }
  sub_47F090(this);
  if ( a2 )
  {
    ATL::CAtlWinModule::~CAtlWinModule(this);
    sub_47EC10(this);
  }
  sub_47E650(this);
  return sub_47E6A0(this);
}


//======================================================================
// sub_47E650
// entry 0047e650  size 79  status ok
//======================================================================

int __thiscall sub_47E650(int this)
{
  int result; // eax
  int v2; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_4C7230(*(_DWORD *)(this + 36));
  for ( i = 0; ; ++i )
  {
    result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 44));
    if ( i >= result )
      break;
    v2 = sub_47E390(i);
    sub_4C7230(v2);
  }
  return result;
}


//======================================================================
// sub_47E6A0
// entry 0047e6a0  size 87  status ok
//======================================================================

int __thiscall sub_47E6A0(int this)
{
  int v1; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_4C7330(*(_DWORD *)(this + 36));
  for ( i = 0; i < CRecentFileList::GetSize(*(CRecentFileList **)(this + 44)); ++i )
  {
    v1 = sub_47E390(i);
    sub_4C7330(v1);
  }
  return sub_47FAB0(this);
}


//======================================================================
// sub_47E700
// entry 0047e700  size 293  status ok
//======================================================================

int __thiscall sub_47E700(int this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  char Buffer[104]; // [esp+4h] [ebp-70h] BYREF
  int v7; // [esp+70h] [ebp-4h]

  v7 = *(_DWORD *)(this + 1072) * sub_4F6840(this + 56);
  if ( v7 <= 999999 )
  {
    if ( v7 <= 999 )
    {
      v3 = (const char *)sub_630F40("SID_POKER_POT2_FORMAT");
      sprintf(Buffer, v3, v7);
    }
    else
    {
      v2 = (const char *)sub_630F40("SID_POKER_POT1_FORMAT");
      sprintf(Buffer, v2, v7 / 1000, v7 % 1000);
    }
  }
  else
  {
    v1 = (const char *)sub_630F40("SID_POKER_POT0_FORMAT");
    sprintf(Buffer, v1, v7 / 1000000, v7 % 1000000 / 1000, v7 % 1000);
  }
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 228) + 180))(*(_DWORD *)(this + 228), Buffer);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 116))(*(_DWORD *)(this + 228));
}


//======================================================================
// sub_47E830
// entry 0047e830  size 38  status ok
//======================================================================

int __thiscall sub_47E830(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 57) + 112))(*(this + 57), this);
}


//======================================================================
// sub_47E860
// entry 0047e860  size 848  status ok
//======================================================================

int __thiscall sub_47E860(int this)
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

  switch ( *(_DWORD *)(this + 1116) )
  {
    case 0:
    case 7:
      v1 = sub_630F40("SID_POKER_TEXASHOLDEM");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v1);
      break;
    case 1:
    case 8:
      v2 = sub_630F40("SID_POKER_OMAHAHOLDEM");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v2);
      break;
    case 2:
    case 9:
      v3 = sub_630F40("SID_POKER_OMAHAHOLDEMHILO");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v3);
      break;
    case 3:
    case 0xA:
      v4 = sub_630F40("SID_POKER_7CARDSTUD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v4);
      break;
    case 4:
    case 0xB:
      v5 = sub_630F40("SID_POKER_7CARDSTUDHILO");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v5);
      break;
    case 5:
    case 0xC:
      v6 = sub_630F40("SID_POKER_5CARDDRAW");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v6);
      break;
    case 6:
    case 0xD:
      v7 = sub_630F40("SID_POKER_5CARDDRAWLOWBALL");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v7);
      break;
    case 0xE:
      v8 = sub_630F40("SID_POKER_5CARDDRAWJACKSORBETTER");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v8);
      break;
    case 0xF:
      v9 = sub_630F40("SID_POKER_5CARDSTUD");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v9);
      break;
    case 0x10:
      v10 = sub_630F40("SID_POKER_BASEBALL");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v10);
      break;
    case 0x11:
      v11 = sub_630F40("SID_POKER_HIGHCHICAGO");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v11);
      break;
    case 0x12:
      v12 = sub_630F40("SID_POKER_MURDER");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v12);
      break;
    case 0x13:
      v13 = sub_630F40("SID_POKER_THEBITCH");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v13);
      break;
    case 0x14:
      v14 = sub_630F40("SID_POKER_CINCINNATI");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v14);
      break;
    case 0x15:
      v15 = sub_630F40("SID_POKER_CRISSCROSS1");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v15);
      break;
    case 0x16:
      v16 = sub_630F40("SID_POKER_PASSTHETRASH");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1176) + 180))(*(_DWORD *)(this + 1176), v16);
      break;
    default:
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 1176) + 180))(
        *(_DWORD *)(this + 1176),
        &Source);
      break;
  }
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1176) + 116))(*(_DWORD *)(this + 1176));
}


//======================================================================
// sub_47EC10
// entry 0047ec10  size 38  status ok
//======================================================================

int __thiscall sub_47EC10(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 294) + 112))(*(this + 294), this);
}


//======================================================================
// sub_47EC50
// entry 0047ec50  size 63  status ok
//======================================================================

int __thiscall sub_47EC50(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 55) + 112))(*(this + 55));
  return (*(int (__thiscall **)(_DWORD))(**(this + 56) + 112))(*(this + 56));
}


//======================================================================
// sub_47EC90
// entry 0047ec90  size 57  status ok
//======================================================================

int __thiscall sub_47EC90(__int16 *this, int a2)
{
  int result; // eax

  result = sub_47E700((int)this);
  if ( a2 > 0 )
  {
    result = (int)this;
    if ( *(this + 1000) < 200 )
      return sub_47F0E0(a2);
  }
  return result;
}


//======================================================================
// sub_47ECF0
// entry 0047ecf0  size 169  status ok
//======================================================================

int __thiscall sub_47ECF0(int this)
{
  int v1; // eax
  int v2; // eax
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v1 = sub_4C6180(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 1160) + 4));
  v5 = sub_646E40(v1);
  v2 = sub_4C6180(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 1160) + 4));
  v6 = sub_646E70(v2);
  if ( *(int *)(this + 1160) >= 2 && *(int *)(this + 1160) <= 5 )
    v5 += 80;
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 1180) + 68))(*(_DWORD *)(this + 1180), v5, v6 + 65);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1180) + 116))(*(_DWORD *)(this + 1180));
}


//======================================================================
// sub_47EDD0
// entry 0047edd0  size 185  status ok
//======================================================================

int __thiscall sub_47EDD0(int this, int a2)
{
  int result; // eax

  if ( a2 < 0 )
    result = sub_5E9F20((char)"nCardIndex >= 0", "..\\Casino\\PokerGame.cpp", 2061);
  if ( a2 > 4 )
    result = sub_5E9F20((char)"nCardIndex <= 4", "..\\Casino\\PokerGame.cpp", 2062);
  if ( a2 > 0 )
  {
    *(_DWORD *)(this + 1156) = a2;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 1184) + 68))(
      *(_DWORD *)(this + 1184),
      13 * (*(_DWORD *)(this + 1156) - 1) + *(_DWORD *)(*(_DWORD *)(this + 36) + 16) + 86,
      *(_DWORD *)(*(_DWORD *)(this + 36) + 20) - 7);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1184) + 116))(*(_DWORD *)(this + 1184));
  }
  return result;
}


//======================================================================
// sub_47EE90
// entry 0047ee90  size 282  status ok
//======================================================================

_BYTE *__thiscall sub_47EE90(_DWORD *this, _BYTE *a2)
{
  Concurrency::details::_CancellationTokenRegistration *v4; // [esp+4h] [ebp-Ch]
  int Token; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  if ( (int)*(this + 289) <= 0 )
    sub_5E9F20((char)"suitSplitPosition > 0", "..\\Casino\\PokerGame.cpp", 2075);
  if ( CRecentFileList::GetSize(*(CRecentFileList **)(*(this + 9) + 8)) != 4 )
    sub_5E9F20((char)"theWidow->hand->Size() == 4", "..\\Casino\\PokerGame.cpp", 2076);
  v4 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(4 - *(this + 289));
  Token = (int)Concurrency::details::_CancellationTokenRegistration::_GetToken(v4);
  if ( (unsigned int)Token >= 0x34 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 2083);
  v6 = Token / 13;
  if ( Token / 13 )
  {
    if ( v6 == 1 )
    {
      *a2 = *(_BYTE *)dword_790770;
      return a2;
    }
    else
    {
      if ( v6 == 2 )
        *a2 = *(_BYTE *)dword_790764;
      else
        *a2 = *(_BYTE *)dword_790754;
      return a2;
    }
  }
  else
  {
    *a2 = *(_BYTE *)dword_79076C;
    return a2;
  }
}


//======================================================================
// sub_47EFB0
// entry 0047efb0  size 212  status ok
//======================================================================

bool __thiscall sub_47EFB0(_DWORD *this)
{
  Concurrency::details::_CancellationTokenRegistration *v3; // [esp+4h] [ebp-Ch]
  int Token; // [esp+Ch] [ebp-4h]

  if ( (int)*(this + 289) <= 0 )
    sub_5E9F20((char)"suitSplitPosition > 0", "..\\Casino\\PokerGame.cpp", 2098);
  if ( CRecentFileList::GetSize(*(CRecentFileList **)(*(this + 9) + 8)) != 4 )
    sub_5E9F20((char)"theWidow->hand->Size() == 4", "..\\Casino\\PokerGame.cpp", 2099);
  v3 = (Concurrency::details::_CancellationTokenRegistration *)sub_60CA40(4 - *(this + 289));
  Token = (int)Concurrency::details::_CancellationTokenRegistration::_GetToken(v3);
  if ( (unsigned int)Token >= 0x34 )
    sub_5E9F20((char)"0", "..\\Casino\\PokerGame.cpp", 2106);
  return !(Token % 13) || Token % 13 >= 7;
}


//======================================================================
// sub_47F090
// entry 0047f090  size 38  status ok
//======================================================================

int __thiscall sub_47F090(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 296) + 112))(*(this + 296), this);
}


//======================================================================
// sub_47F0C0
// entry 0047f0c0  size 20  status ok
//======================================================================

int __thiscall sub_47F0C0(_DWORD *this)
{
  return *(this + 289);
}


//======================================================================
// sub_47F0E0
// entry 0047f0e0  size 2042  status ok
//======================================================================

int __thiscall sub_47F0E0(int this, int a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int result; // eax
  int v8; // [esp+Ch] [ebp-4Ch]
  void *v10; // [esp+14h] [ebp-44h]
  __int16 v11; // [esp+1Ch] [ebp-3Ch]
  __int16 v12; // [esp+1Ch] [ebp-3Ch]
  __int16 v13; // [esp+24h] [ebp-34h]
  __int16 v14; // [esp+24h] [ebp-34h]
  __int16 v15; // [esp+28h] [ebp-30h]
  __int16 v16; // [esp+28h] [ebp-30h]
  __int16 v17; // [esp+2Ch] [ebp-2Ch]
  __int16 v18; // [esp+2Ch] [ebp-2Ch]
  __int16 v19; // [esp+2Ch] [ebp-2Ch]
  int v20; // [esp+38h] [ebp-20h]
  int v21; // [esp+38h] [ebp-20h]
  int v22; // [esp+40h] [ebp-18h]
  __int16 v23; // [esp+44h] [ebp-14h]
  __int16 v24; // [esp+48h] [ebp-10h]

  if ( *(__int16 *)(this + 2000) >= 200 )
    sub_5E9F20((char)"shChipPilesInUse<MAX_CHIP_PILES_IN_POT", "..\\Casino\\PokerGame.cpp", 2132);
  if ( a2 <= 0 )
    sub_5E9F20((char)"lDollarsInPile > 0L", "..\\Casino\\PokerGame.cpp", 2133);
  if ( sub_47E1D0((_DWORD *)this) == 2 )
  {
    v23 = 140;
    v24 = 315;
    v17 = 460;
  }
  else
  {
    v23 = 170;
    v24 = 200;
    v17 = 440;
  }
  if ( a2 < 1000000 )
  {
    if ( a2 < 500000 )
    {
      if ( a2 < 100000 )
      {
        if ( a2 < 50000 )
        {
          if ( a2 < 25000 )
          {
            if ( a2 < 10000 )
            {
              if ( a2 < 5000 )
              {
                if ( a2 < 1000 )
                {
                  if ( a2 < 500 )
                  {
                    if ( a2 < 100 )
                    {
                      if ( a2 < 50 )
                      {
                        if ( a2 < 25 )
                        {
                          if ( a2 < 10 )
                          {
                            if ( a2 < 5 )
                            {
                              v20 = 0;
                              v22 = a2 - 1;
                            }
                            else
                            {
                              v20 = 3;
                              v22 = a2 - 5;
                            }
                          }
                          else
                          {
                            v20 = 6;
                            v22 = a2 - 10;
                          }
                        }
                        else
                        {
                          v20 = 9;
                          v22 = a2 - 25;
                        }
                      }
                      else
                      {
                        v20 = 12;
                        v22 = a2 - 50;
                      }
                    }
                    else
                    {
                      v20 = 15;
                      v22 = a2 - 100;
                    }
                  }
                  else
                  {
                    v20 = 18;
                    v22 = a2 - 500;
                  }
                }
                else
                {
                  v20 = 21;
                  v22 = a2 - 1000;
                }
              }
              else
              {
                v20 = 24;
                v22 = a2 - 5000;
              }
            }
            else
            {
              v20 = 27;
              v22 = a2 - 10000;
            }
          }
          else
          {
            v20 = 30;
            v22 = a2 - 25000;
          }
        }
        else
        {
          v20 = 33;
          v22 = a2 - 50000;
        }
      }
      else
      {
        v20 = 36;
        v22 = a2 - 100000;
      }
    }
    else
    {
      v20 = 39;
      v22 = a2 - 500000;
    }
  }
  else
  {
    v20 = 42;
    v22 = a2 - 1000000;
  }
  v21 = v20 + sub_62FBF0(3);
  if ( *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200) )
  {
    sub_5EAF00(100002);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 176))(
      *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200),
      v21);
    v19 = v17 - sub_5F5550(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    v16 = 295 - sub_5F5590(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    v5 = sub_62FBF0(v19 - v24 + 1);
    v14 = (v5 + sub_62FBF0(v19 - v24 + 1)) / 2 + v24;
    v6 = sub_62FBF0(v16 - v23 + 1);
    v12 = (v6 + sub_62FBF0(v16 - v23 + 1)) / 2 + v23;
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 68))(
      *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200),
      v14,
      v12 + 20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 108))(
      *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200),
      *(__int16 *)(this + 2000) + 2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 116))(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
  }
  else
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v8 = v2;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200) = v8;
    sub_5EAF00(100002);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 176))(
      *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200),
      v21);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 112))(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 108))(
      *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200),
      *(__int16 *)(this + 2000) + 2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 64))(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 116))(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    v18 = v17 - sub_5F5550(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    v15 = 295 - sub_5F5590(*(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200));
    v3 = sub_62FBF0(v18 - v24 + 1);
    v13 = (v3 + sub_62FBF0(v18 - v24 + 1)) / 2 + v24;
    v4 = sub_62FBF0(v15 - v23 + 1);
    v11 = (v4 + sub_62FBF0(v15 - v23 + 1)) / 2 + v23;
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4 * *(__int16 *)(this + 2000) + 1200) + 68))(
      *(_DWORD *)(this + 4 * *(__int16 *)(this + 2000) + 1200),
      v13,
      v11 + 20);
  }
  result = this;
  ++*(_WORD *)(this + 2000);
  if ( v22 )
  {
    if ( *(__int16 *)(this + 2000) < 200 )
      return sub_47F0E0(v22);
  }
  return result;
}


//======================================================================
// sub_47F8E0
// entry 0047f8e0  size 100  status ok
//======================================================================

_WORD *__thiscall sub_47F8E0(_WORD *this)
{
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < (__int16)*(this + 1000); ++i )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 300) + 112))(*((_DWORD *)this + i + 300));
  *(this + 1000) = 0;
  return this;
}


//======================================================================
// sub_47F950
// entry 0047f950  size 41  status ok
//======================================================================

int sub_47F950()
{
  if ( (unsigned __int8)sub_5DA830(dword_791EB8) )
    return 7;
  else
    return 8;
}


//======================================================================
// sub_47F980
// entry 0047f980  size 293  status ok
//======================================================================

int __thiscall sub_47F980(int this)
{
  int Size; // eax
  int result; // eax
  int j; // [esp+10h] [ebp-14h]
  int i; // [esp+14h] [ebp-10h]
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h]
  int v8; // [esp+20h] [ebp-4h]

  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    913,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  for ( i = 0; i < 5; ++i )
  {
    for ( j = *(_DWORD *)(this + 1188); j < CRecentFileList::GetSize(*(CRecentFileList **)(this + 52)); ++j )
    {
      v7 = sub_60CA40(j);
      Size = CRecentFileList::GetSize(*(CRecentFileList **)(this + 52));
      v6 = sub_62FBF0(Size - 1 - *(_DWORD *)(this + 1188));
      v8 = sub_60CA40(v6 + *(_DWORD *)(this + 1188));
      sub_60CA70(j, v8);
      sub_60CA70(v6 + *(_DWORD *)(this + 1188), v7);
    }
  }
  result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 52));
  *(_DWORD *)(this + 1192) = result;
  return result;
}


//======================================================================
// sub_47FAB0
// entry 0047fab0  size 48  status ok
//======================================================================

int __thiscall sub_47FAB0(_DWORD *this)
{
  int result; // eax

  result = sub_60CA10(*(this + 13));
  *(this + 297) = 0;
  *(this + 298) = 0;
  return result;
}


//======================================================================
// sub_47FAE0
// entry 0047fae0  size 24  status ok
//======================================================================

_DWORD *__thiscall sub_47FAE0(_DWORD *this)
{
  *(this + 261) = 0;
  return this;
}


//======================================================================
// sub_47FB00
// entry 0047fb00  size 133  status ok
//======================================================================

int __thiscall sub_47FB00(void *this, unsigned __int8 a2)
{
  int result; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  int v5; // [esp-4h] [ebp-110h]
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  sub_4FB890(dword_791EB8, this);
  result = a2;
  if ( a2 )
  {
    v5 = sub_4FC290(dword_791EB8);
    v3 = (const char *)sub_630F40("SID_POKERTOURNAMENT_GAMESAVED_FORMAT");
    sprintf(Buffer, v3, v5);
    v4 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_GAMESAVED_TITLE");
    return sub_62FF10(Buffer, v4, 0);
  }
  return result;
}


//======================================================================
// sub_47FB90
// entry 0047fb90  size 554  status ok
//======================================================================

int __thiscall sub_47FB90(void *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 1:
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1);
      break;
    case 2:
      sub_480C10(0);
      sub_47FB00(this, 0);
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1);
      break;
    case 3:
      sub_47FFC0(this);
      sub_480C10(0);
      sub_480710(1);
      sub_47FB00(this, 0);
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1);
      break;
    case 4:
      if ( !(unsigned __int8)sub_480F80(this) )
        sub_5E9F20((char)"HumanWasEliminated()", "..\\Casino\\PokerGame.cpp", 2360);
      sub_47FFC0(this);
      sub_480C10(0);
      sub_480710(0);
      sub_47FB00(this, 0);
      result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 3200001, -1);
      break;
    case 5:
      sub_47FFC0(this);
      sub_480C10(0);
      sub_47FB00(this, 0);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 52))(dword_7947E0, 1100);
      break;
    case 6:
      sub_47FB00(this, 1u);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 52))(dword_7947E0, 1100);
      break;
    case 7:
      sub_480C10(0);
      sub_47FB00(this, 0);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 52))(dword_7947E0, 1100);
      break;
    case 8:
      sub_480C10(0);
      sub_47FB00(this, 0);
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_7947E0 + 820))(
                 dword_7947E0,
                 *(_DWORD *)(dword_7947E0 + 20268),
                 *(_DWORD *)(dword_7947E0 + 20272));
      break;
    case 9:
      result = sub_47FB00(this, 0);
      break;
    case 10:
      result = sub_47FB00(this, 1u);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_47FDF0
// entry 0047fdf0  size 449  status ok
//======================================================================

char __thiscall sub_47FDF0(int this)
{
  const CHAR *v1; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  const CHAR *v5; // [esp-8h] [ebp-124h]
  bool v8; // [esp+13h] [ebp-109h]
  char Buffer[260]; // [esp+14h] [ebp-108h] BYREF

  if ( (unsigned __int8)sub_480F30(this) )
  {
    v8 = sub_479930((void *)this);
    if ( !sub_479960((void *)dword_791364) || v8 )
    {
      v3 = (const char *)sub_630F40("SID_SHELL_CONFIRMQUIT_FORMAT");
      sprintf(Buffer, v3, byte_795634);
      v4 = (const CHAR *)sub_630F40("SID_SHELL_QUITTING");
      if ( sub_62FF10(Buffer, v4, 4u) == 6 )
      {
        if ( sub_479960((void *)dword_791364) )
          sub_4815D0(dword_791364);
        sub_47FB90((void *)this, 6);
        *(_BYTE *)(dword_7947E0 + 20228) = 0;
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v5 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_HANDINPROGRESS");
      v1 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_HANDINPROGRESS_MESSAGE");
      if ( sub_62FF10(v1, v5, 1u) == 1 )
      {
        sub_4815D0(dword_791364);
        sub_47FB90((void *)this, 6);
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
  else if ( *(_DWORD *)(this + 252) == 3 && !*(_BYTE *)(this + 1032) )
  {
    sub_4FCB30(7);
    return 0;
  }
  else
  {
    sub_47FB90((void *)this, 5);
    return 1;
  }
}


//======================================================================
// sub_47FFC0
// entry 0047ffc0  size 31  status ok
//======================================================================

int sub_47FFC0()
{
  return o_2_a_10C_s_6___2(*(_DWORD *)(dword_7947E0 + 20220));
}


//======================================================================
// sub_47FFE0
// entry 0047ffe0  size 135  status ok
//======================================================================

int sub_47FFE0()
{
  int v0; // eax
  int result; // eax
  _DWORD v2[14]; // [esp+4h] [ebp-40h] BYREF
  int i; // [esp+3Ch] [ebp-8h]
  int v4; // [esp+40h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v4 = sub_47E390(i);
    v0 = sub_4C6A70(v4);
    v2[2 * i] = v0;
    v2[2 * i + 1] = i;
  }
  result = sub_480070(v2, 7);
  for ( i = 6; i >= 0; --i )
  {
    sub_480580(v2[2 * i + 1]);
    result = i - 1;
  }
  return result;
}


//======================================================================
// sub_480070
// entry 00480070  size 166  status ok
//======================================================================

int __stdcall sub_480070(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  int j; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < a2; ++i )
  {
    for ( j = 0; j < a2 - 1; ++j )
    {
      if ( *(_DWORD *)(a1 + 8 * j) < *(_DWORD *)(a1 + 8 * j + 8) )
      {
        v5 = *(_DWORD *)(a1 + 8 * j);
        v6 = *(_DWORD *)(a1 + 8 * j + 4);
        v3 = *(_DWORD *)(a1 + 8 * j + 12);
        *(_DWORD *)(a1 + 8 * j) = *(_DWORD *)(a1 + 8 * j + 8);
        *(_DWORD *)(a1 + 8 * j + 4) = v3;
        *(_DWORD *)(a1 + 8 * j + 8) = v5;
        *(_DWORD *)(a1 + 8 * j + 12) = v6;
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_480130
// entry 00480130  size 600  status ok
//======================================================================

int __thiscall sub_480130(_DWORD *this)
{
  int result; // eax
  __int64 v2; // [esp-8h] [ebp-7Ch]
  __int64 v4; // [esp+1Ch] [ebp-58h]
  __int64 v5; // [esp+2Ch] [ebp-48h]
  __int64 v6; // [esp+34h] [ebp-40h]
  int v7; // [esp+40h] [ebp-34h]
  int v8; // [esp+44h] [ebp-30h]
  int v9; // [esp+48h] [ebp-2Ch]
  int i; // [esp+4Ch] [ebp-28h]
  int j; // [esp+4Ch] [ebp-28h]
  int v12; // [esp+50h] [ebp-24h]
  _DWORD v13[7]; // [esp+58h] [ebp-1Ch] BYREF

  v8 = -1;
  for ( i = 0; i < 7; ++i )
    v13[i] = 0;
  sub_519E40(*(this + 61), *(this + 62), v13);
  for ( j = 6; j >= 0; --j )
  {
    if ( *(this + j + 249) != -1 )
    {
      v12 = sub_47E390(*(this + j + 249));
      if ( (unsigned __int8)sub_4C61B0(v12) )
        v8 = 6 - j;
    }
  }
  result = o_2_a_10C_s_6__(*(this + 61), v8 == 0);
  if ( v8 != -1 )
  {
    if ( !v8 )
      sub_520730(*(this + 61), *(this + 62));
    v7 = v13[v8];
    if ( v7 < 1000 )
      sub_5E9F20((char)"prizeAmount >= 1000", "..\\Casino\\PokerGame.cpp", 2533);
    v6 = sub_64C8A0(v7, 0);
    *(_QWORD *)(sub_5DCB00(0) + 1244) = v6;
    v9 = v7 + *(_DWORD *)(sub_5DCB00(0) + 1204);
    v5 = sub_64C8A0(v9, 0);
    *(_QWORD *)(sub_5DCB00(0) + 1204) = v5;
    v2 = sub_64C8A0(v9, 0);
    sub_5DCB00(0);
    sub_5D59E0(v2, HIDWORD(v2));
    o_2_a_10C_s_6___1(*(this + 61), v7);
    v4 = sub_64C8A0(v9, 0);
    return sub_5E7E40(0, 6, v4, HIDWORD(v4));
  }
  return result;
}


//======================================================================
// sub_480390
// entry 00480390  size 59  status ok
//======================================================================

int __thiscall sub_480390(void *this)
{
  if ( !(unsigned __int8)sub_480F80(this) )
    sub_5E9F20((char)"HumanWasEliminated()", "..\\Casino\\PokerGame.cpp", 2550);
  return sub_47FB90(this, 4);
}


//======================================================================
// sub_4803D0
// entry 004803d0  size 276  status ok
//======================================================================

int __thiscall sub_4803D0(_DWORD *this)
{
  int v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  int result; // eax
  int v6; // [esp-4h] [ebp-11Ch]
  int v8; // [esp+Ch] [ebp-10Ch]
  char Buffer[260]; // [esp+10h] [ebp-108h] BYREF

  v8 = *(this + 63);
  if ( (unsigned __int8)sub_480F80(this) )
    goto LABEL_6;
  if ( v8 == 3 )
  {
    v1 = sub_4806F0(this);
    v6 = sub_520870(v1);
    v2 = (const char *)sub_630F40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND3_FORMAT");
    sprintf(Buffer, v2, v6);
  }
  else
  {
    v3 = (const char *)sub_630F40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND1OR2");
    sprintf(Buffer, v3);
  }
  v4 = (const CHAR *)sub_630F40("SID_POKERTOURNAMENT_FORFEIT");
  result = sub_62FF10(Buffer, v4, 1u);
  if ( result != 2 )
  {
LABEL_6:
    if ( v8 == 3 )
      return sub_4FCB30(3);
    else
      return sub_47FB90(this, 3);
  }
  return result;
}


//======================================================================
// sub_4804F0
// entry 004804f0  size 65  status ok
//======================================================================

char __thiscall sub_4804F0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    if ( *(this + i + 249) == a2 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_480540
// entry 00480540  size 61  status ok
//======================================================================

char __thiscall sub_480540(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    if ( *(this + i + 249) == -1 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_480580
// entry 00480580  size 92  status ok
//======================================================================

char __thiscall sub_480580(_DWORD *this, int a2)
{
  int v2; // eax

  LOBYTE(v2) = sub_4804F0(this, a2);
  if ( !(_BYTE)v2 )
  {
    *(this + sub_4806B0(this) + 249) = a2;
    v2 = sub_4805E0(this);
    if ( v2 != -1 )
      *(this + 255) = v2;
  }
  return v2;
}


//======================================================================
// sub_4805E0
// entry 004805e0  size 193  status ok
//======================================================================

int __thiscall sub_4805E0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-18h]
  int i; // [esp+8h] [ebp-14h]
  int j; // [esp+8h] [ebp-14h]
  int k; // [esp+8h] [ebp-14h]
  _BYTE v6[8]; // [esp+Ch] [ebp-10h]
  int v7; // [esp+18h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 7; ++i )
    v6[i] = 0;
  for ( j = 0; j < 7; ++j )
  {
    v7 = *(this + j + 249);
    if ( v7 != -1 )
    {
      ++v2;
      v6[v7] = 1;
    }
  }
  if ( v2 == 6 )
  {
    for ( k = 0; k < 7; ++k )
    {
      if ( !v6[k] )
        return k;
    }
  }
  return -1;
}


//======================================================================
// sub_4806B0
// entry 004806b0  size 62  status ok
//======================================================================

int __thiscall sub_4806B0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    if ( *(this + i + 249) == -1 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_4806F0
// entry 004806f0  size 32  status ok
//======================================================================

int __thiscall sub_4806F0(_DWORD *this)
{
  return 7 - sub_4806B0(this);
}


//======================================================================
// sub_480710
// entry 00480710  size 43  status ok
//======================================================================

_BYTE *__thiscall sub_480710(_BYTE *this, char a2)
{
  _BYTE *result; // eax

  result = this;
  *(this + 976) = a2;
  if ( a2 )
    return (_BYTE *)sub_480C10(0);
  return result;
}


//======================================================================
// sub_480740
// entry 00480740  size 157  status ok
//======================================================================

int sub_480740()
{
  int i; // [esp+10h] [ebp-8h]
  CImageDisplay *v3; // [esp+14h] [ebp-4h]

  for ( i = 0; i < sub_47F950(); ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 3 )
    {
      return i;
    }
  }
  sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 2689);
  return 0;
}


//======================================================================
// sub_4807E0
// entry 004807e0  size 318  status ok
//======================================================================

void __thiscall sub_4807E0(_DWORD *this, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]
  int j; // [esp+Ch] [ebp-8h]
  int k; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( a2 == 1 )
  {
    for ( i = 0; i < 33; ++i )
    {
      *(this + 5 * i + 72) = -1;
      *(this + 5 * i + 75) = -1;
      *(this + 5 * i + 73) = 0;
      *(this + 5 * i + 76) = dword_72064C[3 * i];
      *((_BYTE *)this + 20 * i + 296) = 0;
    }
  }
  else
  {
    for ( j = 0; j < 7; ++j )
    {
      v3 = *(this + j + 237);
      if ( v3 != -1 )
      {
        v7 = sub_47E390(j);
        *(this + 5 * v3 + 72) = sub_4C6A70(v7);
      }
    }
  }
  for ( k = 0; k < 7; ++k )
    *(this + k + 237) = -1;
}


//======================================================================
// sub_480920
// entry 00480920  size 70  status ok
//======================================================================

int __thiscall sub_480920(unsigned int *this)
{
  unsigned int v2; // [esp+4h] [ebp-4h]

  v2 = *(this + 62);
  if ( v2 > 4 )
    sub_5E9F20((char)"(0<=x) && (x<=4)", "..\\Casino\\PokerGame.cpp", 2731);
  return dword_71E3B0[v2];
}


//======================================================================
// sub_480970
// entry 00480970  size 510  status ok
//======================================================================

int __thiscall sub_480970(unsigned int *this)
{
  int v1; // esi
  int v2; // eax
  __int64 v4; // [esp-8h] [ebp-40h]
  __int64 v5; // [esp-8h] [ebp-40h]
  __int64 v7; // [esp+10h] [ebp-28h]
  __int64 v8; // [esp+28h] [ebp-10h]
  int v9; // [esp+30h] [ebp-8h]
  int i; // [esp+34h] [ebp-4h]
  int j; // [esp+34h] [ebp-4h]
  int k; // [esp+34h] [ebp-4h]

  *(this + 61) = *(_DWORD *)(dword_7947E0 + 20220);
  *(this + 62) = *(_DWORD *)(dword_7947E0 + 20224);
  v1 = sub_5DCB00(0);
  v9 = *(_DWORD *)(v1 + 1204) - sub_480920(this);
  v8 = sub_64C8A0(v9, 0);
  *(_QWORD *)(sub_5DCB00(0) + 1204) = v8;
  v2 = sub_480920(this);
  v4 = sub_64C8A0(v2, 0);
  sub_5DCB00(0);
  sub_5D5AF0(v4, HIDWORD(v4));
  v5 = sub_64C8A0(v9, 0);
  sub_5DCB00(0);
  sub_5D59E0(v5, HIDWORD(v5));
  v7 = sub_64C8A0(0, 0);
  *(_QWORD *)(sub_5DCB00(0) + 1244) = v7;
  sub_480710(this, 0);
  sub_480C10(1);
  *(this + 63) = 1;
  for ( i = 0; i < 3; ++i )
    *(this + i + 66) = 1;
  for ( j = 0; j < 7; ++j )
    *(this + j + 249) = -1;
  *(this + 256) = -1;
  *(this + 59) = 0;
  *(this + 60) = -1;
  for ( k = 0; k < 3; ++k )
    *(this + k + 69) = 0;
  sub_481A00(1);
  return sub_4FB890(dword_791EB8);
}


//======================================================================
// sub_480B70
// entry 00480b70  size 146  status ok
//======================================================================

int __thiscall sub_480B70(int this)
{
  int result; // eax
  __int64 v3; // [esp+Ch] [ebp-8h]

  *(_DWORD *)(this + 244) = *(_DWORD *)(dword_7947E0 + 20220);
  *(_DWORD *)(this + 248) = *(_DWORD *)(dword_7947E0 + 20224);
  sub_4FBCA0(dword_791EB8);
  sub_480710((_BYTE *)this, 0);
  *(_BYTE *)(dword_7947E0 + 20228) = 1;
  v3 = sub_64C8A0(0, 0);
  result = sub_5DCB00(0);
  *(_QWORD *)(result + 1244) = v3;
  return result;
}


//======================================================================
// sub_480C10
// entry 00480c10  size 97  status ok
//======================================================================

char __stdcall sub_480C10(char a1)
{
  int v2; // [esp+0h] [ebp-10h]

  if ( a1 )
    v2 = *(_DWORD *)(dword_7947E0 + 20224);
  else
    v2 = -1;
  sub_520790(*(_DWORD *)(dword_7947E0 + 20220), v2);
  *(_BYTE *)(dword_7947E0 + 20228) = a1;
  return a1;
}


//======================================================================
// sub_480C80
// entry 00480c80  size 51  status ok
//======================================================================

int __thiscall sub_480C80(_DWORD *this)
{
  if ( *(this + 64) == 14 )
    return 2;
  else
    return 3;
}


//======================================================================
// sub_480CC0
// entry 00480cc0  size 83  status ok
//======================================================================

int __thiscall sub_480CC0(void *this)
{
  if ( (unsigned __int8)sub_480EA0(this, this, 0) )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_791EB8 + 720))(dword_791EB8) )
    return 4;
  return 3;
}


//======================================================================
// sub_480D20
// entry 00480d20  size 342  status ok
//======================================================================

int __thiscall sub_480D20(int this)
{
  int v3; // [esp+8h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-10h]
  char *v5; // [esp+14h] [ebp-8h]
  int v6; // [esp+18h] [ebp-4h]

  v3 = *(_DWORD *)(this + 252);
  v5 = (char *)&unk_7207EC + 384 * *(_DWORD *)(this + 244) + 48 * *(_DWORD *)(this + 248) + 16 * v3 - 16;
  v6 = *(_DWORD *)(this + 4 * v3 + 260);
  sub_466800(*(_BYTE **)(this + 40), 0);
  if ( v6 >= 8 )
  {
    if ( (v6 - 1) % 7 )
    {
      if ( !*(_DWORD *)(this + 236) )
        sub_5E9F20((char)"lastMin!=0", "..\\Casino\\PokerGame.cpp", 2871);
      v4 = *(_DWORD *)(this + 236);
    }
    else
    {
      if ( *(_DWORD *)(this + 240) == v6 )
      {
        if ( !*(_DWORD *)(this + 236) )
          sub_5E9F20((char)"lastMin!=0", "..\\Casino\\PokerGame.cpp", 2863);
        v4 = *(_DWORD *)(this + 236);
      }
      else
      {
        *(_DWORD *)(this + 240) = v6;
        v4 = *((_DWORD *)v5 + 2) + *(_DWORD *)(this + 236);
      }
      sub_466800(*(_BYTE **)(this + 40), 1);
    }
  }
  else
  {
    *(_DWORD *)(this + 240) = -1;
    v4 = *((_DWORD *)v5 + 1);
  }
  *(_DWORD *)(this + 236) = v4;
  return v4;
}


//======================================================================
// sub_480EA0
// entry 00480ea0  size 56  status ok
//======================================================================

bool __thiscall sub_480EA0(_DWORD *this)
{
  return *(this + 64) == 14 || *(this + 64) == 42;
}


//======================================================================
// sub_480EE0
// entry 00480ee0  size 73  status ok
//======================================================================

int __thiscall sub_480EE0(int *this)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = *(this + 63);
  if ( v3 < 1 || v3 > 3 )
    sub_5E9F20((char)"(1<=currentRound) && (currentRound<=3)", "..\\Casino\\PokerGame.cpp", 2893);
  return *(this + v3 + 65);
}


//======================================================================
// sub_480F30
// entry 00480f30  size 78  status ok
//======================================================================

bool __thiscall sub_480F30(_BYTE *this)
{
  if ( !*(_BYTE *)(dword_7947E0 + 20228) )
    return 0;
  if ( (unsigned __int8)sub_480F80(this) )
    return 0;
  return *(this + 976) == 0;
}


//======================================================================
// sub_480F80
// entry 00480f80  size 308  status ok
//======================================================================

bool __thiscall sub_480F80(int *this)
{
  int v2; // eax
  CImageDisplay *v6; // [esp+Ch] [ebp-20h]
  CImageDisplay *v7; // [esp+18h] [ebp-14h]
  int i; // [esp+24h] [ebp-8h]
  char v9; // [esp+2Bh] [ebp-1h]

  v9 = 0;
  if ( !*(_BYTE *)(dword_7947E0 + 20228) )
    return 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= sub_47F950() )
      return v9 == 0;
    v7 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
    {
      v9 = 1;
    }
    v6 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      v2 = sub_5DCB00(i);
      if ( !sub_5D5A50(v2) )
        break;
    }
  }
  if ( *(this + 256) == -1 )
    *(this + 256) = sub_480EE0(this);
  return 1;
}


//======================================================================
// sub_4810C0
// entry 004810c0  size 135  status ok
//======================================================================

bool __stdcall sub_4810C0(int a1)
{
  int v1; // eax
  int v3; // [esp+Ch] [ebp-8h]

  v1 = sub_5DCB00(0);
  v3 = sub_5D5A50(v1);
  if ( !*(_BYTE *)(dword_7947E0 + 20228) )
    return 0;
  if ( v3 <= 0 )
    return 0;
  if ( a1 == 1 )
    return 1;
  return sub_481550(0) <= (a1 == 2) + 1;
}


//======================================================================
// sub_481150
// entry 00481150  size 267  status ok
//======================================================================

int __thiscall sub_481150(int this)
{
  *(_BYTE *)(this + 1033) = 0;
  *(_BYTE *)(this + 1034) = 0;
  *(_BYTE *)(this + 1035) = 0;
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) && (*(_DWORD *)(this + 256) == 14 || *(_DWORD *)(this + 256) == 42) )
    *(_BYTE *)(this + 260) = 1;
  if ( (unsigned __int8)sub_5DA7B0(dword_791EB8) && *(_BYTE *)(this + 260) )
  {
    if ( *(_DWORD *)(this + 256) == 14 )
    {
      if ( !(unsigned __int8)sub_481A00(2) )
      {
        *(_BYTE *)(dword_791364 + 1032) = 1;
        sub_480390((void *)this);
      }
    }
    else if ( !(unsigned __int8)sub_481A00(3) )
    {
      *(_BYTE *)(dword_791364 + 1032) = 1;
      sub_480390((void *)this);
    }
  }
  *(_BYTE *)(this + 260) = 0;
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_791EB8 + 4) + 28))(
           *(_DWORD *)(dword_791EB8 + 4),
           0);
}


//======================================================================
// sub_481260
// entry 00481260  size 59  status ok
//======================================================================

int __thiscall sub_481260(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-8h]

  v2 = sub_4805E0(this);
  if ( v2 == -1 )
    return 0;
  else
    return sub_47E390(v2);
}


//======================================================================
// sub_481500
// entry 00481500  size 78  status ok
//======================================================================

_DWORD *__thiscall sub_481500(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax

  sub_47FFE0();
  *a3 = *(this + 255);
  *a4 = *(this + 254);
  result = a5;
  *a5 = *(this + 253);
  if ( a2 == 3 )
  {
    *a5 = -1;
    return a5;
  }
  return result;
}


//======================================================================
// sub_481550
// entry 00481550  size 123  status ok
//======================================================================

int __stdcall sub_481550(int a1)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v1 = sub_5DCB00(a1);
  v4 = sub_5D5A50(v1);
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != a1 )
    {
      v2 = sub_5DCB00(i);
      if ( sub_5D5A50(v2) > v4 )
        ++v6;
    }
  }
  return v6;
}


//======================================================================
// sub_4815D0
// entry 004815d0  size 177  status ok
//======================================================================

int __thiscall sub_4815D0(_BYTE *this)
{
  int v1; // eax
  _BYTE v4[8]; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-Ch]
  Concurrency::details::SchedulerProxy *v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v7 = -1;
  v5 = sub_4F6840(this + 56);
  v6 = sub_47CD90();
  if ( v6 )
  {
    v1 = sub_4C6A70(v6);
    sub_4C6AA0(v5 + v1);
  }
  v7 = sub_480740();
  (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_791EB8 + 636))(dword_791EB8, v7, v4);
  *(this + 1033) = 0;
  *(this + 1034) = 0;
  *(this + 1035) = 0;
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_791EB8 + 724))(dword_791EB8);
}


//======================================================================
// sub_481690
// entry 00481690  size 288  status ok
//======================================================================

void __thiscall sub_481690(ATL::CComCriticalSection *this)
{
  int i; // [esp+Ch] [ebp-8h]
  int v3; // [esp+10h] [ebp-4h]

  sub_480F80((int *)dword_791364);
  if ( ++*((_DWORD *)this + 64) == 14 )
  {
    *((_DWORD *)this + 63) = 2;
    *((_DWORD *)this + *((_DWORD *)this + 63) + 65) = 1;
  }
  else if ( *((_DWORD *)this + 64) == 42 )
  {
    *((_DWORD *)this + 63) = 3;
    *((_DWORD *)this + *((_DWORD *)this + 63) + 65) = 1;
  }
  else
  {
    ++*((_DWORD *)this + *((_DWORD *)this + 63) + 65);
  }
  for ( i = 0; i < sub_47F950(); ++i )
  {
    v3 = sub_47E390(i);
    if ( sub_4C6A70(v3) <= 0 )
      sub_480580(this, i);
  }
  ATL::CComCriticalSection::~CComCriticalSection(this);
}


//======================================================================
// sub_4817B0
// entry 004817b0  size 181  status ok
//======================================================================

bool __thiscall sub_4817B0(_DWORD *this, int a2)
{
  bool result; // al
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF

  v8 = sub_480C80(this);
  sub_481500(this, v8, &v11, &v9, &v10);
  if ( a2 == v11 || a2 == v9 || a2 == v10 )
    return 1;
  if ( v10 == -1 )
    return 0;
  v3 = sub_47E390(a2);
  result = 0;
  if ( (unsigned __int8)sub_4C61B0(v3) )
  {
    if ( a2 != v10 )
    {
      v4 = sub_5DCB00(a2);
      v5 = sub_5D5A50(v4);
      v6 = sub_5DCB00(v10);
      if ( v5 == sub_5D5A50(v6) )
        return 1;
    }
  }
  return result;
}


//======================================================================
// sub_481870
// entry 00481870  size 97  status ok
//======================================================================

int __stdcall sub_481870(unsigned int a1)
{
  _DWORD v2[8]; // [esp+4h] [ebp-20h]

  v2[0] = 1;
  v2[1] = 2;
  v2[2] = 4;
  v2[3] = 5;
  v2[4] = 6;
  v2[5] = 7;
  v2[6] = 9;
  v2[7] = 10;
  if ( a1 >= 8 )
    a1 = 0;
  return v2[a1];
}


//======================================================================
// sub_4818E0
// entry 004818e0  size 59  status ok
//======================================================================

int __stdcall sub_4818E0(int a1, int a2, int a3)
{
  if ( sub_607960((int)"SpecialDebugMode", 0) )
    return sub_483300(a2, a3);
  return a1;
}


//======================================================================
// sub_481920
// entry 00481920  size 215  status ok
//======================================================================

int sub_481920()
{
  int v0; // eax
  CImageDisplay *v3; // [esp+10h] [ebp-18h]
  CImageDisplay *v4; // [esp+14h] [ebp-14h]
  unsigned int v5; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  for ( i = 0; i < sub_47F950(); ++i )
  {
    v4 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      v3 = (CImageDisplay *)sub_5DCB00(i);
      if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2 )
      {
        v0 = sub_5DCB00(i);
        v5 = sub_4842B0(v0) - 2;
        if ( v5 <= 0x16 )
          return v5;
      }
    }
  }
  return -1;
}


//======================================================================
// sub_481A00
// entry 00481a00  size 1642  status ok
//======================================================================

char __thiscall sub_481A00(unsigned int *this, int a2)
{
  int v3; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const char *v5; // [esp-4h] [ebp-FCh]
  char v6; // [esp+0h] [ebp-F8h]
  int v9; // [esp+1Ch] [ebp-DCh]
  int v10; // [esp+1Ch] [ebp-DCh]
  int v11; // [esp+20h] [ebp-D8h]
  _BYTE v12[8]; // [esp+24h] [ebp-D4h]
  int v13; // [esp+2Ch] [ebp-CCh]
  _DWORD v14[6]; // [esp+30h] [ebp-C8h]
  int v15; // [esp+48h] [ebp-B0h]
  CImageDisplay *v16; // [esp+4Ch] [ebp-ACh]
  int v17; // [esp+50h] [ebp-A8h]
  int v18; // [esp+54h] [ebp-A4h]
  char Buffer[104]; // [esp+58h] [ebp-A0h] BYREF
  int v20; // [esp+C4h] [ebp-34h]
  int v21; // [esp+C8h] [ebp-30h]
  int i; // [esp+CCh] [ebp-2Ch]
  int v23; // [esp+D0h] [ebp-28h]
  _DWORD v24[8]; // [esp+D4h] [ebp-24h]
  int v25; // [esp+F4h] [ebp-4h]

  v16 = 0;
  if ( *(this + a2 + 68) )
    return 1;
  if ( sub_4810C0(a2) )
  {
    sub_636EE0(dword_162EE84);
    sub_636F70(dword_162EE84);
    *(this + a2 + 68) = 1;
    v23 = sub_480920(this);
    v3 = sub_5DCB00(0);
    v15 = sub_5D5A50(v3);
    v17 = sub_481920();
    for ( i = 0; i < 8; ++i )
      v24[i] = -1;
    sub_4807E0(this, a2);
    sprintf(Buffer, "Advancing players to round %d\n", a2);
    sub_62FDE0(Buffer, v6);
    sub_482070(a2, v15, v23, *(_DWORD *)(dword_7947E0 + 20220), v17, this + 72);
    v9 = 0;
    for ( i = 0; i < 33; ++i )
    {
      if ( *(this + 5 * i + 73) == a2 )
        v24[v9++] = i;
    }
    if ( v9 != 6 )
      sub_5E9F20((char)"j==6", "..\\Casino\\PokerGame.cpp", 3353);
    for ( i = 0; i < 6; ++i )
      v12[i] = 0;
    for ( i = 0; i < 6; ++i )
    {
      do
      {
        v25 = sub_62FBF0(6);
        if ( v25 < 0 )
          sub_5E9F20((char)"x>=0", "..\\Casino\\PokerGame.cpp", 3364);
        if ( v25 > 5 )
          sub_5E9F20((char)"x<=5", "..\\Casino\\PokerGame.cpp", 3365);
      }
      while ( v12[v25] );
      v14[i] = v25;
      v12[v25] = 1;
    }
    v10 = 0;
    for ( i = 0; i < sub_47F950(); ++i )
    {
      v11 = sub_47E390(i);
      if ( !(unsigned __int8)sub_4C61B0(v11) )
      {
        v18 = v24[v14[v10]];
        *(_DWORD *)(v11 + 116) = v18;
        v13 = dword_720648[3 * v18];
        *(this + i + 237) = v18;
        v16 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(v11 + 4));
        if ( CImageDisplay::GetDisplayFormat(v16)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v16)->rcSource.left == 3 )
        {
          sub_5E9F20((char)"!casinoPlayer->IsHuman()", "..\\Casino\\PokerGame.cpp", 3389);
        }
        v5 = (const char *)sub_630F40((&off_720650)[3 * v18]);
        DisplayFormat = CImageDisplay::GetDisplayFormat(v16);
        strcpy((char *)&DisplayFormat->rcSource.top, v5);
        if ( v18 >= 33 || v18 < 23 )
        {
          *((_DWORD *)v16 + 3) = v13;
        }
        else
        {
          sub_63B490(v13);
          *((_DWORD *)v16 + 3) = -1;
        }
        ++v10;
        v25 = sub_481870(*(this + 5 * v18 + 75));
        sub_4C67D0(v25);
        v25 = sub_4818E0(*(this + 5 * v18 + 76), a2, v10);
        sub_4C68C0(v25);
        v20 = *(this + 5 * v18 + 72);
        v21 = 0;
        sub_4C6AA0(v20);
        sub_5D5AF0(v20, v21);
      }
    }
    sub_47E540((ATL::CAtlWinModule *)this, 1);
    for ( i = 0; i < sub_47F950(); ++i )
    {
      sub_5DCB00(i);
      sub_6464D0(0, 0);
      sub_483630(i);
    }
    if ( *(_DWORD *)(dword_791364 + 244) == 4 )
    {
      switch ( a2 )
      {
        case 1:
          if ( sub_47E170() != 2 )
          {
            *(_DWORD *)(dword_7947E0 + 20248) = 2;
            sub_47D810(this, *(_DWORD *)(dword_7947E0 + 20248));
          }
          break;
        case 2:
          *(_DWORD *)(dword_7947E0 + 20248) = 3;
          sub_47D810(this, *(_DWORD *)(dword_7947E0 + 20248));
          break;
        case 3:
          *(_DWORD *)(dword_7947E0 + 20248) = 0;
          sub_47D810(this, *(_DWORD *)(dword_7947E0 + 20248));
          break;
      }
    }
    for ( i = 0; i < 7; ++i )
      sub_5D9180(i, 1);
    return 1;
  }
  else
  {
    *(_BYTE *)(dword_7947E0 + 20228) = 0;
    return 0;
  }
}


//======================================================================
// sub_482070
// entry 00482070  size 3342  status ok
//======================================================================

void __thiscall sub_482070(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  double v7; // st7
  int v8; // [esp+0h] [ebp-E0h]
  int v9; // [esp+4h] [ebp-DCh]
  int v11; // [esp+14h] [ebp-CCh]
  int v12; // [esp+18h] [ebp-C8h]
  int j; // [esp+1Ch] [ebp-C4h]
  int k; // [esp+1Ch] [ebp-C4h]
  _BYTE v15[8]; // [esp+20h] [ebp-C0h]
  int v16; // [esp+2Ch] [ebp-B4h]
  int v17; // [esp+30h] [ebp-B0h]
  int v18; // [esp+34h] [ebp-ACh]
  double v19; // [esp+38h] [ebp-A8h] BYREF
  int v20; // [esp+44h] [ebp-9Ch]
  double v21; // [esp+48h] [ebp-98h] BYREF
  int i; // [esp+50h] [ebp-90h]
  int v23; // [esp+54h] [ebp-8Ch]
  _DWORD v24[34]; // [esp+58h] [ebp-88h] BYREF

  v23 = 0;
  v18 = 0;
  v16 = 0;
  v20 = 0;
  v21 = 0.0;
  v19 = 0.0;
  if ( a2 < 1 || a2 > 3 )
    sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 3481);
  for ( i = 0; i < 8; ++i )
    v15[i] = 0;
  if ( a2 == 1 )
    goto LABEL_59;
  for ( i = 0; i < 33; ++i )
  {
    if ( *(_DWORD *)(a7 + 20 * i + 4) == a2 - 1 )
      v24[i] = *(_DWORD *)(a7 + 20 * i);
    else
      v24[i] = -1;
  }
  sub_482D80(v24, 33);
  v17 = 0;
  if ( a2 == 2 )
  {
    for ( i = 32; i >= 0; --i )
    {
      if ( *(_DWORD *)(a7 + 20 * i) == v24[v17] && *(_DWORD *)(a7 + 20 * i + 4) == 1 && *(int *)(a7 + 20 * i) > 0 )
      {
        sub_482E10(i, 2, a7);
        break;
      }
    }
    v17 = 1;
  }
  else if ( a2 != 3 )
  {
    goto LABEL_59;
  }
  for ( i = 32; i >= 0; --i )
  {
    if ( *(_DWORD *)(a7 + 20 * i) == v24[v17] && *(_DWORD *)(a7 + 20 * i + 4) == a2 - 1 && *(int *)(a7 + 20 * i) > 0 )
      ++v23;
  }
  for ( i = 23; i < 33; ++i )
  {
    if ( *(_DWORD *)(a7 + 20 * i) == v24[v17] && *(_DWORD *)(a7 + 20 * i + 4) == a2 - 1 && *(int *)(a7 + 20 * i) > 0 )
      ++v18;
  }
  if ( v18 == 1 || v23 == 1 )
  {
    for ( i = 32; i >= 0; --i )
    {
      if ( *(_DWORD *)(a7 + 20 * i) == v24[v17] && *(_DWORD *)(a7 + 20 * i + 4) == a2 - 1 && *(int *)(a7 + 20 * i) > 0 )
        goto LABEL_56;
    }
  }
  else
  {
    if ( v18 > 1 )
      v23 = v18;
    v16 = sub_62FBF0(v23);
    v23 = 0;
    for ( i = 32; i >= 0; --i )
    {
      if ( *(_DWORD *)(a7 + 20 * i) == v24[v17] && *(_DWORD *)(a7 + 20 * i + 4) == a2 - 1 && *(int *)(a7 + 20 * i) > 0 )
      {
        if ( v16 == v23 )
        {
LABEL_56:
          sub_482E10(i, a2, a7);
          v20 = 1;
          break;
        }
        ++v23;
      }
    }
  }
LABEL_59:
  switch ( a2 )
  {
    case 1:
      for ( i = 0; i < 1; ++i )
        sub_482E80(1, 0, 1, a6, a7);
      for ( i = 0; i < 3; ++i )
        sub_482E80(2, 0, 1, a6, a7);
      for ( i = 0; i < 1; ++i )
        sub_482E80(2, 1, 1, a6, a7);
      for ( i = 0; i < 1; ++i )
        sub_482E80(3, 1, 1, a6, a7);
      break;
    case 2:
      for ( i = 0; i < 1; ++i )
        sub_482E80(1, 0, a2, a6, a7);
      for ( i = 0; i < 1; ++i )
        sub_482E80(2, 0, a2, a6, a7);
      for ( i = 0; i < 1; ++i )
        sub_482E80(1, 1, a2, a6, a7);
      for ( i = 0; i < 2; ++i )
        sub_482E80(2, 1, a2, a6, a7);
      for ( i = 0; i < 1; ++i )
        sub_482E80(3, 1, a2, a6, a7);
      break;
    case 3:
      v11 = 0;
      v12 = 0;
      for ( i = 23; i < 33; ++i )
      {
        if ( *(_BYTE *)(a7 + 20 * i + 8) && sub_62FBF0(2) )
        {
          *(_DWORD *)(a7 + 20 * i + 4) = a2;
          *(_BYTE *)(a7 + 20 * i + 8) = 0;
          if ( *(_DWORD *)(a7 + 20 * i + 16) == 1 )
            ++v11;
          if ( *(_DWORD *)(a7 + 20 * i + 16) == 2 )
            ++v12;
        }
      }
      for ( i = 0; i < 1 && v11 < 2; ++i )
      {
        sub_482E80(1, 0, a2, a6, a7);
        ++v11;
      }
      for ( i = 0; i < 1 && v12 < 3; ++i )
      {
        sub_482E80(2, 0, a2, a6, a7);
        ++v12;
      }
      while ( v11 < 2 )
      {
        sub_482E80(1, 1, a2, a6, a7);
        ++v11;
      }
      while ( v12 < 3 )
      {
        sub_482E80(2, 1, a2, a6, a7);
        ++v12;
      }
      if ( !v20 )
        sub_482E80(2, 1, a2, a6, a7);
      break;
  }
  if ( a2 == 1 )
  {
    for ( i = 0; i < 33; ++i )
    {
      if ( *(_DWORD *)(a7 + 20 * i + 4) == 1 )
        *(_DWORD *)(a7 + 20 * i) = a4;
    }
  }
  else
  {
    sub_4830E0(&v19, &v21, a2, a3, a5, a4, v24);
    for ( i = 0; i < 33; ++i )
    {
      if ( *(_DWORD *)(a7 + 20 * i + 4) == a2 && *(_DWORD *)(a7 + 20 * i) == -1 )
      {
        v7 = sub_4832E0(this, v8, v9);
        *(_DWORD *)(a7 + 20 * i) = (int)(v7 * v19 + v21);
      }
      if ( a2 == 2 && *(_DWORD *)(a7 + 20 * i + 4) == 2 && (double)a4 * 0.9 > (double)*(int *)(a7 + 20 * i) )
      {
        v9 = sub_62FBF0(20);
        *(_DWORD *)(a7 + 20 * i) = (int)(((double)v9 / 1000.0 + 0.9) * (double)a4);
      }
      if ( a2 == 3 && *(_DWORD *)(a7 + 20 * i + 4) == 3 && (double)a4 * 1.2 > (double)*(int *)(a7 + 20 * i) )
      {
        v8 = sub_62FBF0(20);
        *(_DWORD *)(a7 + 20 * i) = (int)(((double)v8 / 1000.0 + 1.2) * (double)a4);
      }
    }
  }
  for ( i = 0; i < 33; ++i )
  {
    if ( *(_DWORD *)(a7 + 20 * i + 4) == a2 && *(_DWORD *)(a7 + 20 * i + 12) != -1 )
      v15[*(_DWORD *)(a7 + 20 * i + 12)] = 1;
  }
  for ( i = 0; i < 33; ++i )
  {
    if ( *(_DWORD *)(a7 + 20 * i + 4) == a2 && *(_DWORD *)(a7 + 20 * i + 12) == -1 )
    {
      v23 = 0;
      for ( j = 0; j < 8; ++j )
      {
        if ( !v15[j] )
          ++v23;
      }
      v16 = sub_62FBF0(v23);
      v23 = 0;
      for ( k = 0; k < 8; ++k )
      {
        if ( !v15[k] )
        {
          if ( v16 == v23 )
          {
            *(_DWORD *)(a7 + 20 * i + 12) = k;
            v15[k] = 1;
            break;
          }
          ++v23;
        }
      }
    }
  }
}


//======================================================================
// sub_482D80
// entry 00482d80  size 141  status ok
//======================================================================

int __stdcall sub_482D80(int a1, int a2)
{
  int result; // eax
  int j; // [esp+8h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < a2; ++i )
  {
    for ( j = 0; j < a2 - 1; ++j )
    {
      if ( *(_DWORD *)(a1 + 4 * j) < *(_DWORD *)(a1 + 4 * j + 4) )
      {
        v4 = *(_DWORD *)(a1 + 4 * j);
        *(_DWORD *)(a1 + 4 * j) = *(_DWORD *)(a1 + 4 * j + 4);
        *(_DWORD *)(a1 + 4 * j + 4) = v4;
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_482E10
// entry 00482e10  size 102  status ok
//======================================================================

int __stdcall sub_482E10(int a1, int a2, int a3)
{
  if ( a2 == 2 )
  {
    *(_BYTE *)(a3 + 20 * a1 + 8) = 1;
    *(_DWORD *)(a3 + 20 * a1) = -1;
    return a3;
  }
  else if ( a2 == 3 )
  {
    *(_DWORD *)(a3 + 20 * a1 + 4) = 3;
    return 3;
  }
  else
  {
    return sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 3760);
  }
}


//======================================================================
// sub_482E80
// entry 00482e80  size 607  status ok
//======================================================================

int __stdcall sub_482E80(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+8h] [ebp-10h]
  int i; // [esp+Ch] [ebp-Ch]
  int j; // [esp+Ch] [ebp-Ch]
  int k; // [esp+Ch] [ebp-Ch]
  int m; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]
  int v14; // [esp+14h] [ebp-4h]

  v13 = 0;
  if ( a2 >= 2 )
    sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 3769);
  if ( a2 )
  {
    v7 = 0;
    v12 = 23;
  }
  else
  {
    v7 = 23;
    v12 = 33;
  }
  for ( i = v7; i < v12; ++i )
  {
    if ( i != a4
      && *(_DWORD *)(a5 + 20 * i + 16) == a1
      && (!*(_DWORD *)(a5 + 20 * i + 4) || a3 == 3 && *(_BYTE *)(a5 + 20 * i + 8) && a2 == 1) )
    {
      ++v13;
    }
  }
  if ( !v13 )
    sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 3789);
  v6 = sub_62FBF0(v13);
  v14 = 0;
  for ( j = v7; j < v12; ++j )
  {
    if ( j != a4
      && *(_DWORD *)(a5 + 20 * j + 16) == a1
      && (!*(_DWORD *)(a5 + 20 * j + 4) || a3 == 3 && *(_BYTE *)(a5 + 20 * j + 8) && a2 == 1) )
    {
      if ( v6 == v14 )
      {
        *(_DWORD *)(a5 + 20 * j + 4) = a3;
        return a3;
      }
      ++v14;
    }
  }
  sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 3810);
  for ( k = 32; k >= 0; --k )
  {
    if ( !*(_DWORD *)(a5 + 20 * k + 4) || a3 == 3 && *(_BYTE *)(a5 + 20 * k + 8) )
    {
      *(_DWORD *)(a5 + 20 * k + 4) = a3;
      return a3;
    }
  }
  result = sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 3820);
  for ( m = 32; m >= 0; --m )
  {
    if ( *(_DWORD *)(a5 + 20 * m + 4) != a3 )
    {
      *(_DWORD *)(a5 + 20 * m + 4) = a3;
      return a3;
    }
    result = m - 1;
  }
  return result;
}


//======================================================================
// sub_4830E0
// entry 004830e0  size 498  status ok
//======================================================================

double *__stdcall sub_4830E0(double *a1, double *a2, int a3, int a4, int a5, int a6, int *a7)
{
  double v8; // [esp+14h] [ebp-18h]
  double v9; // [esp+14h] [ebp-18h]
  double v10; // [esp+14h] [ebp-18h]
  int i; // [esp+20h] [ebp-Ch]
  int j; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h]

  *a2 = (double)a4 + *a2;
  v13 = 1;
  if ( *a7 > 0 )
  {
    *a2 = (double)*a7 + *a2;
    v13 = 2;
  }
  if ( a3 == 2 && a7[1] > 0 )
  {
    *a2 = (double)a7[1] + *a2;
    ++v13;
  }
  for ( i = 0; i < 6; ++i )
  {
    *a2 = (double)(a6 * dword_71E3C8[12 * a5 - 12 + 6 * a3 + i]) / 1000.0 + *a2;
    ++v13;
  }
  *a2 = *a2 / (double)v13;
  *a1 = *a1 + ((double)a4 - *a2) * ((double)a4 - *a2);
  if ( *a7 > 0 )
  {
    v8 = (double)*a7 - *a2;
    *a1 = *a1 + v8 * v8;
  }
  if ( a3 == 2 && a7[1] > 0 )
  {
    v9 = (double)a7[1] - *a2;
    *a1 = *a1 + v9 * v9;
  }
  for ( j = 0; j < 6; ++j )
  {
    v10 = (double)(a6 * dword_71E3C8[12 * a5 - 12 + 6 * a3 + j]) / 1000.0 - *a2;
    *a1 = *a1 + v10 * v10;
  }
  *a1 = *a1 / (double)v13;
  *a1 = sqrt(*a1);
  return a1;
}


//======================================================================
// sub_4832E0
// entry 004832e0  size 28  status ok
//======================================================================

double sub_4832E0()
{
  return dbl_71E568[sub_62FBF0(91)];
}


//======================================================================
// sub_483300
// entry 00483300  size 720  status ok
//======================================================================

int __stdcall sub_483300(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 1:
      switch ( a2 )
      {
        case 1:
          result = sub_607960((int)"PlayerStrategy1", 0);
          break;
        case 2:
          result = sub_607960((int)"PlayerStrategy2", 0);
          break;
        case 3:
          result = sub_607960((int)"PlayerStrategy3", 0);
          break;
        case 4:
          result = sub_607960((int)"PlayerStrategy4", 0);
          break;
        case 5:
          result = sub_607960((int)"PlayerStrategy5", 0);
          break;
        case 6:
          result = sub_607960((int)"PlayerStrategy6", 0);
          break;
        case 7:
          result = sub_607960((int)"PlayerStrategy7", 0);
          break;
        default:
          goto LABEL_29;
      }
      break;
    case 2:
      switch ( a2 )
      {
        case 1:
          result = sub_607960((int)"Round2PlayerStrategy1", 0);
          break;
        case 2:
          result = sub_607960((int)"Round2PlayerStrategy2", 0);
          break;
        case 3:
          result = sub_607960((int)"Round2PlayerStrategy3", 0);
          break;
        case 4:
          result = sub_607960((int)"Round2PlayerStrategy4", 0);
          break;
        case 5:
          result = sub_607960((int)"Round2PlayerStrategy5", 0);
          break;
        case 6:
          result = sub_607960((int)"Round2PlayerStrategy6", 0);
          break;
        case 7:
          result = sub_607960((int)"Round2PlayerStrategy7", 0);
          break;
        default:
          goto LABEL_29;
      }
      break;
    case 3:
      switch ( a2 )
      {
        case 1:
          result = sub_607960((int)"Round3PlayerStrategy1", 0);
          break;
        case 2:
          result = sub_607960((int)"Round3PlayerStrategy2", 0);
          break;
        case 3:
          result = sub_607960((int)"Round3PlayerStrategy3", 0);
          break;
        case 4:
          result = sub_607960((int)"Round3PlayerStrategy4", 0);
          break;
        case 5:
          result = sub_607960((int)"Round3PlayerStrategy5", 0);
          break;
        case 6:
          result = sub_607960((int)"Round3PlayerStrategy6", 0);
          break;
        case 7:
          result = sub_607960((int)"Round3PlayerStrategy7", 0);
          break;
        default:
          goto LABEL_29;
      }
      break;
    default:
LABEL_29:
      sub_5E9F20((char)"false", "..\\Casino\\PokerGame.cpp", 4009);
      return 0;
  }
  return result;
}


//======================================================================
// sub_483630
// entry 00483630  size 341  status ok
//======================================================================

int __fastcall sub_483630(char a1, int a2, int a3)
{
  const char *v3; // eax
  _DWORD *v4; // eax
  unsigned int v5; // eax
  int v7; // [esp-4h] [ebp-94h]
  int v9; // [esp+0h] [ebp-90h]
  char v10; // [esp+0h] [ebp-90h]
  char v11; // [esp+0h] [ebp-90h]
  char v12; // [esp+0h] [ebp-90h]
  char v13; // [esp+0h] [ebp-90h]
  char v14; // [esp+0h] [ebp-90h]
  _BYTE v15[8]; // [esp+Ch] [ebp-84h] BYREF
  int v16; // [esp+14h] [ebp-7Ch]
  char Buffer[108]; // [esp+18h] [ebp-78h] BYREF
  Concurrency::details::VirtualProcessor *v18; // [esp+88h] [ebp-8h]
  unsigned int ExecutionResourceId; // [esp+8Ch] [ebp-4h]

  v18 = (Concurrency::details::VirtualProcessor *)sub_47E390(a3);
  ExecutionResourceId = Concurrency::details::VirtualProcessor::GetExecutionResourceId(v18);
  v16 = sub_5DCB00(ExecutionResourceId);
  sub_62FDE0("----------------------------------\n", a1);
  v3 = (const char *)sub_4C6150(v18, v9);
  sprintf(Buffer, "Player %d:  %s\n", a3, v3);
  sub_62FDE0(Buffer, v10);
  v7 = sub_4C6A70(v18);
  v4 = (_DWORD *)sub_5D5A90(v15);
  sprintf(Buffer, "Bank: %d, (%d=player)\n", *v4, v7);
  sub_62FDE0(Buffer, v11);
  sprintf(Buffer, "Primary Strategy: %d\n", *((_DWORD *)v18 + 255));
  sub_62FDE0(Buffer, v12);
  sprintf(Buffer, "Secondary Strategy: %d\n", *((_DWORD *)v18 + 256));
  sub_62FDE0(Buffer, v13);
  v5 = Concurrency::details::VirtualProcessor::GetExecutionResourceId(v18);
  sprintf(Buffer, "Seat: %d\n", v5);
  return sub_62FDE0(Buffer, v14);
}


//======================================================================
// sub_483790
// entry 00483790  size 374  status ok
//======================================================================

int __thiscall sub_483790(int *this)
{
  int v1; // eax
  int result; // eax
  int v3; // [esp+0h] [ebp-30h]
  char *Source; // [esp+8h] [ebp-28h]
  CImageDisplay *v6; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  int v8; // [esp+14h] [ebp-1Ch]
  BOOL v9; // [esp+18h] [ebp-18h]
  int v10; // [esp+1Ch] [ebp-14h]
  char v11; // [esp+23h] [ebp-Dh]
  int v12; // [esp+24h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp-8h] BYREF
  int v14; // [esp+2Ch] [ebp-4h] BYREF

  v11 = 0;
  v10 = -1;
  v9 = !sub_480F80(this);
  v3 = sub_5F2A60(3205027, 0);
  v1 = sub_630F40(off_71E860[v9]);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 224))(v3, v1);
  if ( !sub_480EA0(this) )
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_791EB8 + 4) + 28))(
             *(_DWORD *)(dword_791EB8 + 4),
             0);
  v8 = sub_480C80(this);
  if ( sub_480F80(this) )
  {
    v11 = 1;
    v10 = *(this + 256);
  }
  else if ( !sub_4810C0(v8) )
  {
    v11 = 1;
    v10 = -1;
  }
  sub_481500(this, v8, &v14, &v12, &v13);
  v6 = (CImageDisplay *)sub_5DCB00(0);
  Source = (char *)&CImageDisplay::GetDisplayFormat(v6)->rcSource.top;
  result = sub_4FC950(v8 - 1, v11, v10, Source, v14, v12, v13);
  for ( i = 0; i < 7; ++i )
  {
    result = i;
    *(this + i + 249) = -1;
  }
  return result;
}


//======================================================================
// sub_483910
// entry 00483910  size 208  status ok
//======================================================================

int __thiscall sub_483910(_DWORD *this, int a2, int a3)
{
  bool v5; // [esp+7h] [ebp-5h]
  int v6; // [esp+8h] [ebp-4h]

  v6 = sub_47E390(a3);
  if ( !v6 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  v5 = sub_4817B0(this, *(_DWORD *)(v6 + 4));
  if ( (unsigned __int8)sub_4C61B0(v6) )
  {
    if ( !sub_47CCE0() )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
    if ( v5 )
      return sub_4CD540(a2);
    else
      return sub_4CD560(a2);
  }
  else if ( v5 )
  {
    return sub_4CD4E0(a2);
  }
  else
  {
    return sub_4CD520(a2);
  }
}


//======================================================================
// sub_4839E0
// entry 004839e0  size 133  status ok
//======================================================================

int __thiscall sub_4839E0(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_481260(this);
  if ( !v3 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  if ( !(unsigned __int8)sub_4C61B0(v3) )
    return sub_4CD5A0(a2);
  if ( !sub_47CCE0() )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  return sub_4CD5C0(a2);
}


//======================================================================
// sub_483A70
// entry 00483a70  size 435  status ok
//======================================================================

int __stdcall sub_483A70(__int16 a1, __int16 *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int result; // eax
  __int16 i; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  if ( a1 < 0 )
    sub_5E9F20((char)"shSeat >= 0", "..\\Casino\\PokerGame.cpp", 4164);
  if ( a1 >= sub_47F950() )
    sub_5E9F20((char)"shSeat < pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerGame.cpp", 4165);
  if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
    sub_5E9F20((char)"roomPoker->InATournament()", "..\\Casino\\PokerGame.cpp", 4166);
  v3 = sub_47E390(a1);
  v11 = sub_4C6A70(v3);
  v12 = 0;
  *a2 = 1;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    if ( i != a1 )
    {
      v4 = sub_47E390(i);
      if ( sub_4C6CB0(v4) )
      {
        v5 = sub_47E390(i);
        if ( sub_4C6A70(v5) > v12 )
        {
          v6 = sub_47E390(i);
          v12 = sub_4C6A70(v6);
        }
        v7 = sub_47E390(i);
        if ( sub_4C6A70(v7) > v11 )
          ++*a2;
      }
    }
  }
  if ( *a2 < 1 )
    sub_5E9F20((char)"shPosition >= 1", "..\\Casino\\PokerGame.cpp", 4184);
  v8 = *a2;
  result = sub_47F950();
  if ( v8 > result )
    result = sub_5E9F20((char)"shPosition <= pokerGame->GetNumberOfPlayersAtTable()", "..\\Casino\\PokerGame.cpp", 4185);
  *a3 = v12 - v11;
  return result;
}


//======================================================================
// sub_483C30
// entry 00483c30  size 535  status ok
//======================================================================

int __thiscall sub_483C30(int *this, _WORD *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // eax
  signed int v5; // esi
  int v6; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int16 v14; // [esp+8h] [ebp-Ch]
  __int16 i; // [esp+Ch] [ebp-8h]
  __int16 j; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h]

  if ( !(unsigned __int8)sub_5DA7B0(dword_791EB8) )
    sub_5E9F20((char)"roomPoker->InATournament()", "..\\Casino\\PokerGame.cpp", 4193);
  *a2 = 0;
  v14 = 0;
  for ( i = 0; i < sub_47F950(); ++i )
  {
    v3 = sub_47E390(i);
    if ( sub_4C6CB0(v3) )
    {
      v4 = sub_47E390(i);
      v5 = sub_4C6A70(v4);
      if ( v5 >= (int)CAtlTraceProcess::MaxSize((CAtlTraceProcess *)this) )
        ++v14;
    }
  }
  if ( v14 >= 2 )
  {
    v6 = sub_5DA8A0(dword_791EB8);
    if ( v6 >= sub_5DA8C0(dword_791EB8) )
      return -1;
  }
  v17 = -1;
  *(this + 245) = -1;
  for ( j = 0; j < sub_47F950(); ++j )
  {
    v8 = sub_47E390(j);
    if ( sub_4C6CB0(v8) )
    {
      v9 = sub_47E390(j);
      if ( sub_4C6A70(v9) <= v17 )
      {
        v11 = sub_47E390(j);
        if ( sub_4C6A70(v11) == v17 )
          *(this + 245) = -2;
      }
      else
      {
        v10 = sub_47E390(j);
        v17 = sub_4C6A70(v10);
        *(this + 245) = j;
      }
    }
  }
  if ( *(this + 245) == -1 )
    sub_5E9F20((char)"nTournamentWinnerIndex != -1", "..\\Casino\\PokerGame.cpp", 4227);
  if ( *(this + 245) >= 0 )
  {
    *a2 = sub_483E50(*(this + 245));
    v12 = sub_47E390(*(this + 245));
    *a3 = sub_4C6A70(v12);
  }
  return *(this + 245);
}


//======================================================================
// sub_483E50
// entry 00483e50  size 955  status ok
//======================================================================

__int16 __thiscall sub_483E50(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  char Buffer[104]; // [esp+8h] [ebp-D0h] BYREF
  int v6[6]; // [esp+70h] [ebp-68h]
  __int16 v7; // [esp+88h] [ebp-50h]
  int Value; // [esp+8Ch] [ebp-4Ch]
  __int16 v9; // [esp+90h] [ebp-48h]
  _DWORD v10[15]; // [esp+94h] [ebp-44h] BYREF
  __int16 i; // [esp+D4h] [ebp-4h]

  switch ( *(this + 247) )
  {
    case 0x3E8:
      LOWORD(v6[0]) = 1;
      break;
    case 0x1388:
      LOWORD(v6[0]) = 2;
      break;
    case 0x61A8:
      LOWORD(v6[0]) = 3;
      break;
    case 0xC350:
      LOWORD(v6[0]) = 4;
      break;
    case 0x186A0:
      LOWORD(v6[0]) = 5;
      break;
    case 0x7A120:
      LOWORD(v6[0]) = 6;
      break;
    default:
      return 0;
  }
  switch ( sub_47E170() )
  {
    case 7:
      v7 = 1;
      goto LABEL_26;
    case 8:
      v7 = 2;
      goto LABEL_26;
    case 9:
      v7 = 3;
      goto LABEL_26;
    case 10:
      v7 = 4;
      goto LABEL_26;
    case 11:
      v7 = 5;
      goto LABEL_26;
    case 12:
      v7 = 6;
      goto LABEL_26;
    case 18:
      v7 = 9;
      goto LABEL_26;
    case 20:
      v7 = 7;
      goto LABEL_26;
    case 21:
      v7 = 8;
      goto LABEL_26;
    case 23:
      v7 = 10;
LABEL_26:
      for ( i = 0; i < 5; ++i )
      {
        sprintf(Buffer, "PokerHighScore_%d_%d_%d", v7, SLOWORD(v6[0]), i + 1);
        v3 = sub_607960((int)Buffer, 0);
        v6[i + 1] = v3;
        sprintf(Buffer, "PokerHighName_%d_%d_%d", v7, SLOWORD(v6[0]), i + 1);
        (*(void (__thiscall **)(_DWORD, char *, const char *, _DWORD *, int))(**(_DWORD **)(dword_7960D8 + 20) + 16))(
          *(_DWORD *)(dword_7960D8 + 20),
          Buffer,
          "Empty",
          &v10[3 * i],
          12);
      }
      v4 = sub_47E390(a2);
      Value = sub_4C6A70(v4);
      v9 = 5;
      i = 0;
      break;
    default:
      return 0;
  }
  while ( i < 5 )
  {
    if ( Value > v6[i + 1] )
    {
      v9 = i;
      break;
    }
    ++i;
  }
  if ( v9 == 5 )
    return 0;
  sprintf(Buffer, "PokerHighScore_%d_%d_%d", v7, SLOWORD(v6[0]), v9 + 1);
  sub_6079D0((int)Buffer, Value);
  sprintf(Buffer, "PokerHighName_%d_%d_%d", v7, SLOWORD(v6[0]), v9 + 1);
  for ( i = v9 + 1; i < 5; ++i )
  {
    sprintf(Buffer, "PokerHighScore_%d_%d_%d", v7, SLOWORD(v6[0]), i + 1);
    sub_6079D0((int)Buffer, v6[i]);
    sprintf(Buffer, "PokerHighName_%d_%d_%d", v7, SLOWORD(v6[0]), i + 1);
    (*(void (__thiscall **)(_DWORD, char *, _DWORD *))(**(_DWORD **)(dword_7960D8 + 20) + 20))(
      *(_DWORD *)(dword_7960D8 + 20),
      Buffer,
      &v10[3 * i - 3]);
  }
  return v9 + 1;
}


//======================================================================
// sub_4842B0
// entry 004842b0  size 73  status ok
//======================================================================

DWORD __thiscall sub_4842B0(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20((char)"!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 87);
  return CImageDisplay::GetDisplayFormat(this)->bmiHeader.biClrImportant;
}


//======================================================================
// sub_484300
// entry 00484300  size 32  status ok
//======================================================================

void __thiscall sub_484300(_WORD *this)
{
  *(_DWORD *)this = 0;
  *(this + 2) = 0;
}


//======================================================================
// sub_484320
// entry 00484320  size 328  status ok
//======================================================================

__int16 *__thiscall sub_484320(__int16 *this, int a2)
{
  _DWORD *v3; // [esp+4h] [ebp-28h]
  int *v5; // [esp+Ch] [ebp-20h]
  int v6; // [esp+14h] [ebp-18h]
  int i; // [esp+18h] [ebp-14h]

  *(this + 2) = *(_WORD *)(a2 + 4);
  if ( *(this + 2) )
  {
    v6 = (__int16)(7 * ((*(this + 2) + 6) / 7));
    v5 = (int *)operator new(__CFADD__(v6, 4) ? -1 : v6 + 4);
    if ( v5 )
    {
      *v5 = v6;
      `eh vector constructor iterator'(
        v5 + 1,
        1u,
        v6,
        (void (__thiscall *)(void *))sub_464110,
        ATL::CComCriticalSection::~CComCriticalSection);
      v3 = v5 + 1;
    }
    else
    {
      v3 = 0;
    }
    *(_DWORD *)this = v3;
    if ( !*(_DWORD *)this )
      sub_5E9F20((char)"ppcCardsInHand", "..\\Casino\\PokerHand.cpp", 23);
    for ( i = 0; i < *(this + 2); ++i )
      *(_BYTE *)(*(_DWORD *)this + i) = *(_BYTE *)(*(_DWORD *)a2 + i);
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}


//======================================================================
// sub_484470
// entry 00484470  size 19  status ok
//======================================================================

void __thiscall sub_484470(void *this)
{
  sub_4A1D40(this, this);
}


//======================================================================
// sub_484490
// entry 00484490  size 352  status ok
//======================================================================

__int16 *__thiscall sub_484490(__int16 *this, __int16 *a2)
{
  _DWORD *v3; // [esp+4h] [ebp-28h]
  int *v5; // [esp+Ch] [ebp-20h]
  int v6; // [esp+14h] [ebp-18h]
  int i; // [esp+18h] [ebp-14h]

  if ( this == a2 )
    return this;
  sub_4A1D40(this);
  *(this + 2) = a2[2];
  if ( *(this + 2) )
  {
    v6 = (__int16)(7 * ((*(this + 2) + 6) / 7));
    v5 = (int *)operator new(__CFADD__(v6, 4) ? -1 : v6 + 4);
    if ( v5 )
    {
      *v5 = v6;
      `eh vector constructor iterator'(
        v5 + 1,
        1u,
        v6,
        (void (__thiscall *)(void *))sub_464110,
        ATL::CComCriticalSection::~CComCriticalSection);
      v3 = v5 + 1;
    }
    else
    {
      v3 = 0;
    }
    *(_DWORD *)this = v3;
    if ( !*(_DWORD *)this )
      sub_5E9F20((char)"ppcCardsInHand", "..\\Casino\\PokerHand.cpp", 50);
    for ( i = 0; i < *(this + 2); ++i )
      *(_BYTE *)(*(_DWORD *)this + i) = *(_BYTE *)(*(_DWORD *)a2 + i);
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}


//======================================================================
// sub_4845F0
// entry 004845f0  size 168  status ok
//======================================================================

__int16 *__thiscall sub_4845F0(__int16 *this, __int16 *a2, int a3)
{
  int i; // [esp+Ch] [ebp-18h]
  __int16 v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  sub_484320(v6, a3);
  v7 = 1;
  for ( i = 0; i < *(this + 2); ++i )
    sub_484830(i + *(_DWORD *)this);
  sub_484320(a2, (int)v6);
  LOBYTE(v7) = 0;
  sub_484470(v6);
  return a2;
}


//======================================================================
// sub_4846A0
// entry 004846a0  size 67  status ok
//======================================================================

void *__thiscall sub_4846A0(void *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < *(__int16 *)(a2 + 4); ++i )
    sub_484830(i + *(_DWORD *)a2);
  return this;
}


//======================================================================
// sub_4846F0
// entry 004846f0  size 192  status ok
//======================================================================

__int16 *__thiscall sub_4846F0(void *this, __int16 *a2, int a3)
{
  int i; // [esp+Ch] [ebp-18h]
  __int16 v5[4]; // [esp+10h] [ebp-14h] BYREF
  int v6; // [esp+20h] [ebp-4h]

  sub_484320(v5, (int)this);
  v6 = 1;
  for ( i = 0; i < *(__int16 *)(a3 + 4); ++i )
  {
    if ( (unsigned __int8)sub_484BA0(i + *(_DWORD *)a3) )
      sub_484AD0(i + *(_DWORD *)a3);
  }
  sub_484320(a2, (int)v5);
  LOBYTE(v6) = 0;
  sub_484470(v5);
  return a2;
}


//======================================================================
// sub_4847B0
// entry 004847b0  size 91  status ok
//======================================================================

void *__thiscall sub_4847B0(void *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < *(__int16 *)(a2 + 4); ++i )
  {
    if ( (unsigned __int8)sub_484BA0(i + *(_DWORD *)a2) )
      sub_484AD0(i + *(_DWORD *)a2);
  }
  return this;
}


//======================================================================
// sub_484830
// entry 00484830  size 658  status ok
//======================================================================

_BYTE *__thiscall sub_484830(__int16 *this, _BYTE *a2)
{
  _DWORD *v3; // [esp+8h] [ebp-4Ch]
  _BYTE *v4; // [esp+Ch] [ebp-48h]
  _BYTE *v5; // [esp+14h] [ebp-40h]
  char v7; // [esp+20h] [ebp-34h]
  int *v8; // [esp+2Ch] [ebp-28h]
  int v9; // [esp+34h] [ebp-20h]
  char v10; // [esp+3Ah] [ebp-1Ah] BYREF
  char v11; // [esp+3Bh] [ebp-19h] BYREF
  int i; // [esp+3Ch] [ebp-18h]
  __int16 v13; // [esp+40h] [ebp-14h]
  _DWORD *v14; // [esp+44h] [ebp-10h]
  int v15; // [esp+50h] [ebp-4h]

  v7 = 0;
  if ( (unsigned __int8)sub_484BA0(a2) )
  {
    v5 = sub_464130(&v11, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
    v15 = 0;
    v7 = 1;
    if ( !sub_464500(a2, v5) )
    {
      v4 = sub_464130(&v10, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
      v15 = 1;
      v7 = 3;
      if ( !sub_464500(a2, v4) )
        sub_5E9F20(
          (char)"!ContainsCard(pcAdd) || (pcAdd == PokerCard(BugRank,BugSuit)) || (pcAdd == PokerCard(WildRank,WildSuit))",
          "..\\Casino\\PokerHand.cpp",
          120);
    }
  }
  v15 = 0;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    ATL::CComCriticalSection::~CComCriticalSection(&v10);
  }
  v15 = -1;
  if ( (v7 & 1) != 0 )
    ATL::CComCriticalSection::~CComCriticalSection(&v11);
  if ( !(*(this + 2) % 7) && (*(this + 2) || !*(_DWORD *)this) )
  {
    v13 = 7 * ((*(this + 2) + 7) / 7);
    v9 = v13;
    v8 = (int *)operator new(__CFADD__(v13, 4) ? -1 : v13 + 4);
    v15 = 2;
    if ( v8 )
    {
      *v8 = v9;
      `eh vector constructor iterator'(
        v8 + 1,
        1u,
        v9,
        (void (__thiscall *)(void *))sub_464110,
        ATL::CComCriticalSection::~CComCriticalSection);
      v3 = v8 + 1;
    }
    else
    {
      v3 = 0;
    }
    v15 = -1;
    v14 = v3;
    if ( !v3 )
      sub_5E9F20((char)"ppcNew", "..\\Casino\\PokerHand.cpp", 127);
    for ( i = 0; i < *(this + 2); ++i )
      *((_BYTE *)v14 + i) = *(_BYTE *)(*(_DWORD *)this + i);
    if ( *(_DWORD *)this )
      sub_4A1DA0(3);
    *(_DWORD *)this = v14;
  }
  *(_BYTE *)(*(_DWORD *)this + (*(this + 2))++) = *a2;
  return a2;
}


//======================================================================
// sub_484AD0
// entry 00484ad0  size 171  status ok
//======================================================================

_BYTE *__thiscall sub_484AD0(__int16 *this, _BYTE *a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < *(this + 2); ++i )
  {
    if ( sub_464500(a2, (_BYTE *)(i + *(_DWORD *)this)) )
    {
      if ( i != *(this + 2) - 1 )
        *(_BYTE *)(*(_DWORD *)this + i) = *(_BYTE *)(*(_DWORD *)this + *(this + 2) - 1);
      break;
    }
  }
  if ( i >= *(this + 2) )
    sub_5E9F20((char)"nIndex<shSize", "..\\Casino\\PokerHand.cpp", 171);
  --*(this + 2);
  return a2;
}


//======================================================================
// sub_484B80
// entry 00484b80  size 20  status ok
//======================================================================

_WORD *__thiscall sub_484B80(_WORD *this)
{
  *(this + 2) = 0;
  return this;
}


//======================================================================
// sub_484BA0
// entry 00484ba0  size 77  status ok
//======================================================================

char __thiscall sub_484BA0(__int16 *this, _BYTE *a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < *(this + 2); ++i )
  {
    if ( sub_464500((_BYTE *)(i + *(_DWORD *)this), a2) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_484BF0
// entry 00484bf0  size 444  status ok
//======================================================================

__int16 __thiscall sub_484BF0(_WORD *this)
{
  unsigned __int8 *v1; // eax
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v6; // [esp-4h] [ebp-24h]
  unsigned __int8 *v7; // [esp-4h] [ebp-24h]
  unsigned __int8 *v8; // [esp-4h] [ebp-24h]
  unsigned __int8 *v9; // [esp-4h] [ebp-24h]
  char v11; // [esp+4h] [ebp-1Ch] BYREF
  char v12; // [esp+5h] [ebp-1Bh] BYREF
  char v13; // [esp+6h] [ebp-1Ah] BYREF
  char v14; // [esp+7h] [ebp-19h] BYREF
  __int16 v15; // [esp+8h] [ebp-18h]
  __int16 i; // [esp+Ch] [ebp-14h]
  __int16 v17; // [esp+10h] [ebp-10h]
  __int16 v18; // [esp+12h] [ebp-Eh]
  __int16 v19; // [esp+14h] [ebp-Ch]
  __int16 v20; // [esp+16h] [ebp-Ah]
  __int16 j; // [esp+1Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
    *(&v17 + i) = 0;
  for ( j = 0; j < (__int16)*(this + 2); ++j )
  {
    v6 = (unsigned __int8 *)dword_79076C;
    v1 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v14);
    if ( sub_4640B0(v1, v6) )
    {
      ++v17;
    }
    else
    {
      v7 = (unsigned __int8 *)dword_790754;
      v2 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v13);
      if ( sub_4640B0(v2, v7) )
      {
        ++v18;
      }
      else
      {
        v8 = (unsigned __int8 *)dword_790764;
        v3 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v12);
        if ( sub_4640B0(v3, v8) )
        {
          ++v19;
        }
        else
        {
          v9 = (unsigned __int8 *)dword_790770;
          v4 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v11);
          if ( sub_4640B0(v4, v9) )
            ++v20;
        }
      }
    }
  }
  v15 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(&v17 + i) > v15 )
      v15 = *(&v17 + i);
  }
  if ( *(this + 2) && v15 <= 0 )
    sub_5E9F20((char)"(shSize == 0) || (shReturn > 0)", "..\\Casino\\PokerHand.cpp", 222);
  return v15;
}


//======================================================================
// sub_484DB0
// entry 00484db0  size 590  status ok
//======================================================================

_BOOL2 __thiscall sub_484DB0(_WORD *this)
{
  _BYTE *v1; // eax
  _BYTE *v2; // eax
  unsigned __int8 *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  unsigned __int8 *v7; // [esp-4h] [ebp-3Ch]
  char v9; // [esp+13h] [ebp-25h] BYREF
  char v10; // [esp+14h] [ebp-24h] BYREF
  char v11; // [esp+15h] [ebp-23h] BYREF
  char v12; // [esp+16h] [ebp-22h] BYREF
  char v13; // [esp+17h] [ebp-21h] BYREF
  __int16 *v14; // [esp+18h] [ebp-20h]
  __int16 j; // [esp+1Ch] [ebp-1Ch]
  __int16 *v16; // [esp+20h] [ebp-18h]
  __int16 v17; // [esp+24h] [ebp-14h]
  _BOOL2 v18; // [esp+28h] [ebp-10h]
  unsigned __int8 v19; // [esp+2Fh] [ebp-9h]
  __int16 v20; // [esp+30h] [ebp-8h]
  unsigned __int8 i; // [esp+37h] [ebp-1h]

  v14 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v16 = v14;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v16[i] = 0;
  for ( j = 0; j < (__int16)*(this + 2); ++j )
  {
    v1 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v13);
    v2 = sub_463F80(v1, &v12);
    ++v16[(unsigned __int8)*v2];
    v7 = (unsigned __int8 *)dword_7907A4;
    v3 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v11);
    if ( sub_464050(v3, v7) )
    {
      v4 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v10);
      v5 = sub_463FD0(v4, &v9);
      ++v16[(unsigned __int8)*v5];
    }
  }
  v17 = 0;
  v19 = 0;
  for ( i = *(_BYTE *)dword_7913F0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
  {
    if ( v16[i] > 0 )
    {
      if ( v19 )
        v17 += i - 1 - v19;
      v19 = i;
    }
  }
  v20 = 0;
  v19 = 0;
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
  {
    if ( v16[i] > 0 )
    {
      if ( v19 )
        v20 += i - 1 - v19;
      v19 = i;
    }
  }
  if ( v20 >= v17 )
    v18 = v17;
  else
    v18 = v20;
  if ( !v18 )
    v18 = v16[*(unsigned __int8 *)dword_7913B4] > 0;
  operator delete(v16);
  return v18;
}


//======================================================================
// sub_485000
// entry 00485000  size 800  status ok
//======================================================================

__int16 __thiscall sub_485000(__int16 *this)
{
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
  unsigned __int8 *v15; // [esp-4h] [ebp-38h]
  unsigned __int8 *v16; // [esp-4h] [ebp-38h]
  unsigned __int8 *v17; // [esp-4h] [ebp-38h]
  unsigned __int8 *v18; // [esp-4h] [ebp-38h]
  unsigned __int8 *v19; // [esp-4h] [ebp-38h]
  unsigned __int8 *v20; // [esp-4h] [ebp-38h]
  unsigned __int8 *v21; // [esp-4h] [ebp-38h]
  unsigned __int8 *v22; // [esp-4h] [ebp-38h]
  unsigned __int8 *v23; // [esp-4h] [ebp-38h]
  unsigned __int8 *v24; // [esp-4h] [ebp-38h]
  unsigned __int8 *v25; // [esp-4h] [ebp-38h]
  unsigned __int8 *v26; // [esp-4h] [ebp-38h]
  unsigned __int8 *v27; // [esp-4h] [ebp-38h]
  char v29; // [esp+7h] [ebp-2Dh] BYREF
  char v30; // [esp+8h] [ebp-2Ch] BYREF
  char v31; // [esp+9h] [ebp-2Bh] BYREF
  char v32; // [esp+Ah] [ebp-2Ah] BYREF
  char v33; // [esp+Bh] [ebp-29h] BYREF
  char v34; // [esp+Ch] [ebp-28h] BYREF
  char v35; // [esp+Dh] [ebp-27h] BYREF
  char v36; // [esp+Eh] [ebp-26h] BYREF
  char v37; // [esp+Fh] [ebp-25h] BYREF
  char v38; // [esp+10h] [ebp-24h] BYREF
  char v39; // [esp+11h] [ebp-23h] BYREF
  char v40; // [esp+12h] [ebp-22h] BYREF
  char v41; // [esp+13h] [ebp-21h] BYREF
  __int16 v42; // [esp+14h] [ebp-20h]
  _BYTE v43[16]; // [esp+18h] [ebp-1Ch]
  __int16 v44; // [esp+2Ch] [ebp-8h]
  __int16 i; // [esp+30h] [ebp-4h]

  v42 = 0;
  v44 = 0;
  if ( !*(this + 2) )
    return 0;
  for ( i = 1; i < 15; ++i )
    v43[i] = 0;
  for ( i = 0; i < *(this + 2); ++i )
  {
    v15 = (unsigned __int8 *)dword_7907A4;
    v2 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v41);
    if ( sub_464050(v2, v15) )
    {
      v43[14] = 1;
      v43[1] = 1;
    }
    v16 = (unsigned __int8 *)dword_790758;
    v3 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v40);
    if ( sub_464050(v3, v16) )
      v43[2] = 1;
    v17 = (unsigned __int8 *)dword_790768;
    v4 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v39);
    if ( sub_464050(v4, v17) )
      v43[3] = 1;
    v18 = (unsigned __int8 *)dword_790790;
    v5 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v38);
    if ( sub_464050(v5, v18) )
      v43[4] = 1;
    v19 = (unsigned __int8 *)dword_790750;
    v6 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v37);
    if ( sub_464050(v6, v19) )
      v43[5] = 1;
    v20 = (unsigned __int8 *)dword_79079C;
    v7 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v36);
    if ( sub_464050(v7, v20) )
      v43[6] = 1;
    v21 = (unsigned __int8 *)dword_790760;
    v8 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v35);
    if ( sub_464050(v8, v21) )
      v43[7] = 1;
    v22 = (unsigned __int8 *)dword_790798;
    v9 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v34);
    if ( sub_464050(v9, v22) )
      v43[8] = 1;
    v23 = (unsigned __int8 *)dword_790794;
    v10 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v33);
    if ( sub_464050(v10, v23) )
      v43[9] = 1;
    v24 = (unsigned __int8 *)dword_790788;
    v11 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v32);
    if ( sub_464050(v11, v24) )
      v43[10] = 1;
    v25 = (unsigned __int8 *)dword_790774;
    v12 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v31);
    if ( sub_464050(v12, v25) )
      v43[11] = 1;
    v26 = (unsigned __int8 *)dword_7907B0;
    v13 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v30);
    if ( sub_464050(v13, v26) )
      v43[12] = 1;
    v27 = (unsigned __int8 *)dword_7907A8;
    v14 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v29);
    if ( sub_464050(v14, v27) )
      v43[13] = 1;
  }
  for ( i = 1; i < 15; ++i )
  {
    if ( v43[i] )
    {
      ++v42;
    }
    else
    {
      if ( v42 > v44 )
        v44 = v42;
      v42 = 0;
    }
  }
  return v44;
}


//======================================================================
// sub_485320
// entry 00485320  size 860  status ok
//======================================================================

BOOL __thiscall sub_485320(_WORD *this, __int16 a2, __int16 a3)
{
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
  unsigned __int8 *v17; // [esp-4h] [ebp-20h]
  unsigned __int8 *v18; // [esp-4h] [ebp-20h]
  unsigned __int8 *v19; // [esp-4h] [ebp-20h]
  unsigned __int8 *v20; // [esp-4h] [ebp-20h]
  unsigned __int8 *v21; // [esp-4h] [ebp-20h]
  unsigned __int8 *v22; // [esp-4h] [ebp-20h]
  unsigned __int8 *v23; // [esp-4h] [ebp-20h]
  unsigned __int8 *v24; // [esp-4h] [ebp-20h]
  unsigned __int8 *v25; // [esp-4h] [ebp-20h]
  unsigned __int8 *v26; // [esp-4h] [ebp-20h]
  unsigned __int8 *v27; // [esp-4h] [ebp-20h]
  unsigned __int8 *v28; // [esp-4h] [ebp-20h]
  unsigned __int8 *v29; // [esp-4h] [ebp-20h]
  char v31; // [esp+7h] [ebp-15h] BYREF
  char v32; // [esp+8h] [ebp-14h] BYREF
  char v33; // [esp+9h] [ebp-13h] BYREF
  char v34; // [esp+Ah] [ebp-12h] BYREF
  char v35; // [esp+Bh] [ebp-11h] BYREF
  char v36; // [esp+Ch] [ebp-10h] BYREF
  char v37; // [esp+Dh] [ebp-Fh] BYREF
  char v38; // [esp+Eh] [ebp-Eh] BYREF
  char v39; // [esp+Fh] [ebp-Dh] BYREF
  char v40; // [esp+10h] [ebp-Ch] BYREF
  char v41; // [esp+11h] [ebp-Bh] BYREF
  char v42; // [esp+12h] [ebp-Ah] BYREF
  char v43; // [esp+13h] [ebp-9h] BYREF
  __int16 v44; // [esp+14h] [ebp-8h]
  __int16 i; // [esp+18h] [ebp-4h]

  v44 = 0;
  for ( i = 0; i < (__int16)*(this + 2); ++i )
  {
    v17 = (unsigned __int8 *)dword_7907A4;
    v3 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v43);
    if ( sub_464050(v3, v17) && a2 < 1 )
      ++v44;
    v18 = (unsigned __int8 *)dword_790758;
    v4 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v42);
    if ( sub_464050(v4, v18) && a2 < 2 )
      ++v44;
    v19 = (unsigned __int8 *)dword_790768;
    v5 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v41);
    if ( sub_464050(v5, v19) && a2 < 3 )
      ++v44;
    v20 = (unsigned __int8 *)dword_790790;
    v6 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v40);
    if ( sub_464050(v6, v20) && a2 < 4 )
      ++v44;
    v21 = (unsigned __int8 *)dword_790750;
    v7 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v39);
    if ( sub_464050(v7, v21) && a2 < 5 )
      ++v44;
    v22 = (unsigned __int8 *)dword_79079C;
    v8 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v38);
    if ( sub_464050(v8, v22) && a2 < 6 )
      ++v44;
    v23 = (unsigned __int8 *)dword_790760;
    v9 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v37);
    if ( sub_464050(v9, v23) && a2 < 7 )
      ++v44;
    v24 = (unsigned __int8 *)dword_790798;
    v10 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v36);
    if ( sub_464050(v10, v24) && a2 < 8 )
      ++v44;
    v25 = (unsigned __int8 *)dword_790794;
    v11 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v35);
    if ( sub_464050(v11, v25) && a2 < 9 )
      ++v44;
    v26 = (unsigned __int8 *)dword_790788;
    v12 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v34);
    if ( sub_464050(v12, v26) && a2 < 10 )
      ++v44;
    v27 = (unsigned __int8 *)dword_790774;
    v13 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v33);
    if ( sub_464050(v13, v27) && a2 < 11 )
      ++v44;
    v28 = (unsigned __int8 *)dword_7907B0;
    v14 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v32);
    if ( sub_464050(v14, v28) && a2 < 12 )
      ++v44;
    v29 = (unsigned __int8 *)dword_7907A8;
    v15 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v31);
    if ( sub_464050(v15, v29) && a2 < 13 )
      ++v44;
  }
  return v44 <= a3;
}


//======================================================================
// sub_485680
// entry 00485680  size 691  status ok
//======================================================================

__int16 *__thiscall sub_485680(
        __int16 *this,
        __int16 *a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  int v10; // edx
  int v11; // eax
  int *v12; // [esp+Ch] [ebp-4Ch]
  int *v14; // [esp+1Ch] [ebp-3Ch]
  _BYTE v15[4]; // [esp+20h] [ebp-38h] BYREF
  void *v16; // [esp+24h] [ebp-34h]
  int *v17; // [esp+28h] [ebp-30h]
  __int16 i; // [esp+2Ch] [ebp-2Ch]
  __int16 v19[4]; // [esp+30h] [ebp-28h] BYREF
  int v20; // [esp+38h] [ebp-20h] BYREF
  __int16 v21[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  int v22; // [esp+44h] [ebp-14h] BYREF
  int *v23; // [esp+48h] [ebp-10h]
  int v24; // [esp+54h] [ebp-4h]

  if ( *(this + 2) > 5 )
  {
    sub_484300(v19);
    v24 = 1;
    sub_4A20D0(&v20);
    LOBYTE(v24) = 2;
    if ( a3 )
      sub_4A2100(dword_791390, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    else
      sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    sub_484300(v21);
    LOBYTE(v24) = 3;
    sub_4A20D0(&v22);
    LOBYTE(v24) = 4;
    v16 = operator new(0xCu);
    LOBYTE(v24) = 5;
    if ( v16 )
      v12 = sub_464ED0((int *)v16, *(this + 2), 5);
    else
      v12 = 0;
    v17 = v12;
    LOBYTE(v24) = 4;
    v23 = v12;
    while ( sub_465000(v23) )
    {
      sub_484B80(v21);
      for ( i = 0; ; ++i )
      {
        v10 = i;
        if ( i >= 5 )
          break;
        v11 = sub_465110((int)v23, i);
        sub_484830(v21, (_BYTE *)(*(_DWORD *)this + v11));
      }
      LOBYTE(v10) = a3;
      v22 = *(_DWORD *)sub_485940(v15, v10, a4, a5, a6, a7, a8, a9);
      ATL::CComCriticalSection::~CComCriticalSection(v15);
      if ( a3 )
      {
        if ( (unsigned __int8)sub_4A2440(&v20) )
        {
          v20 = v22;
          sub_484490(v19, v21);
        }
      }
      else if ( (unsigned __int8)sub_4A2550(&v20) )
      {
        v20 = v22;
        sub_484490(v19, v21);
      }
    }
    v14 = v23;
    if ( v23 )
    {
      sub_464FD0((void **)v23);
      operator delete(v14);
    }
    sub_484320(a2, (int)v19);
    LOBYTE(v24) = 3;
    ATL::CComCriticalSection::~CComCriticalSection(&v22);
    LOBYTE(v24) = 2;
    sub_484470(v21);
    LOBYTE(v24) = 1;
    ATL::CComCriticalSection::~CComCriticalSection(&v20);
    LOBYTE(v24) = 0;
    sub_484470(v19);
    return a2;
  }
  else
  {
    sub_484320(a2, (int)this);
    v24 = 0;
    return a2;
  }
}


//======================================================================
// sub_485940
// entry 00485940  size 28257  status ok
//======================================================================

_DWORD *__thiscall sub_485940(__int16 *this, _DWORD *a2, char a3, char a4, char a5, char a6, char a7, char a8, char a9)
{
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  unsigned __int8 *v23; // eax
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // eax
  unsigned __int8 *v26; // eax
  _BYTE *v27; // eax
  char v28; // dl
  _BYTE *v29; // eax
  _BYTE *v30; // eax
  _BYTE *v31; // eax
  _BYTE *v32; // eax
  _BYTE *v33; // eax
  _BYTE *v34; // eax
  _BYTE *v35; // eax
  _BYTE *v36; // eax
  _BYTE *v37; // eax
  unsigned __int8 *v38; // [esp-4h] [ebp-408h]
  unsigned __int8 *v39; // [esp-4h] [ebp-408h]
  unsigned __int8 *v40; // [esp-4h] [ebp-408h]
  unsigned __int8 *v41; // [esp-4h] [ebp-408h]
  unsigned __int8 *v42; // [esp-4h] [ebp-408h]
  unsigned __int8 *v43; // [esp-4h] [ebp-408h]
  unsigned __int8 *v44; // [esp-4h] [ebp-408h]
  _BYTE *v45; // [esp-4h] [ebp-408h]
  _BYTE *v46; // [esp-4h] [ebp-408h]
  _BYTE *v47; // [esp-4h] [ebp-408h]
  _BYTE *v48; // [esp-4h] [ebp-408h]
  _BYTE *v49; // [esp-4h] [ebp-408h]
  _BYTE *v50; // [esp-4h] [ebp-408h]
  _BYTE *v51; // [esp-4h] [ebp-408h]
  _BYTE *v52; // [esp-4h] [ebp-408h]
  _BYTE *v53; // [esp-4h] [ebp-408h]
  _BYTE *v54; // [esp-4h] [ebp-408h]
  int v55; // [esp+8h] [ebp-3FCh]
  int v56; // [esp+Ch] [ebp-3F8h]
  int v57; // [esp+10h] [ebp-3F4h]
  int v58; // [esp+14h] [ebp-3F0h]
  char v59; // [esp+1Bh] [ebp-3E9h]
  bool v60; // [esp+1Ch] [ebp-3E8h]
  _BYTE *v61; // [esp+20h] [ebp-3E4h]
  bool v62; // [esp+28h] [ebp-3DCh]
  _BYTE *v63; // [esp+2Ch] [ebp-3D8h]
  bool v64; // [esp+34h] [ebp-3D0h]
  _BYTE *v65; // [esp+38h] [ebp-3CCh]
  bool v66; // [esp+40h] [ebp-3C4h]
  _BYTE *v67; // [esp+44h] [ebp-3C0h]
  bool v68; // [esp+4Ch] [ebp-3B8h]
  _BYTE *v69; // [esp+50h] [ebp-3B4h]
  _BYTE *v70; // [esp+58h] [ebp-3ACh]
  _BYTE *v71; // [esp+60h] [ebp-3A4h]
  _BYTE *v72; // [esp+68h] [ebp-39Ch]
  _BYTE *v73; // [esp+70h] [ebp-394h]
  int v74; // [esp+78h] [ebp-38Ch]
  int v75; // [esp+7Ch] [ebp-388h]
  _BYTE *v76; // [esp+80h] [ebp-384h]
  _BYTE *v77; // [esp+88h] [ebp-37Ch]
  _BYTE *v78; // [esp+90h] [ebp-374h]
  int v79; // [esp+98h] [ebp-36Ch]
  _BYTE *v80; // [esp+9Ch] [ebp-368h]
  _BYTE *v81; // [esp+A4h] [ebp-360h]
  int v82; // [esp+ACh] [ebp-358h]
  _BYTE *v83; // [esp+B0h] [ebp-354h]
  _BYTE *v84; // [esp+B8h] [ebp-34Ch]
  int v85; // [esp+C0h] [ebp-344h]
  _BYTE *v86; // [esp+C4h] [ebp-340h]
  _BYTE *v87; // [esp+CCh] [ebp-338h]
  int v88; // [esp+D4h] [ebp-330h]
  int v89; // [esp+D8h] [ebp-32Ch]
  int v90; // [esp+DCh] [ebp-328h]
  int v91; // [esp+E0h] [ebp-324h]
  int *v92; // [esp+F8h] [ebp-30Ch]
  int v94; // [esp+1A4h] [ebp-260h]
  unsigned __int8 v95; // [esp+1AFh] [ebp-255h] BYREF
  unsigned __int8 v96; // [esp+1B0h] [ebp-254h] BYREF
  unsigned __int8 v97; // [esp+1B1h] [ebp-253h] BYREF
  unsigned __int8 v98; // [esp+1B2h] [ebp-252h] BYREF
  unsigned __int8 v99; // [esp+1B3h] [ebp-251h] BYREF
  void *v100; // [esp+1B4h] [ebp-250h]
  __int16 *v101; // [esp+1B8h] [ebp-24Ch]
  unsigned __int8 v102; // [esp+1BFh] [ebp-245h] BYREF
  unsigned __int8 v103; // [esp+1C0h] [ebp-244h] BYREF
  unsigned __int8 v104; // [esp+1C1h] [ebp-243h] BYREF
  unsigned __int8 v105; // [esp+1C2h] [ebp-242h] BYREF
  char v106; // [esp+1C3h] [ebp-241h] BYREF
  char v107; // [esp+1C4h] [ebp-240h] BYREF
  char v108; // [esp+1C5h] [ebp-23Fh] BYREF
  char v109; // [esp+1C6h] [ebp-23Eh] BYREF
  char v110; // [esp+1C7h] [ebp-23Dh] BYREF
  unsigned __int8 v111; // [esp+1C8h] [ebp-23Ch] BYREF
  unsigned __int8 v112; // [esp+1C9h] [ebp-23Bh] BYREF
  unsigned __int8 v113; // [esp+1CAh] [ebp-23Ah] BYREF
  unsigned __int8 v114; // [esp+1CBh] [ebp-239h] BYREF
  unsigned __int8 v115; // [esp+1CCh] [ebp-238h] BYREF
  unsigned __int8 v116; // [esp+1CDh] [ebp-237h] BYREF
  unsigned __int8 v117; // [esp+1CEh] [ebp-236h] BYREF
  char v118; // [esp+1CFh] [ebp-235h] BYREF
  char v119; // [esp+1D0h] [ebp-234h] BYREF
  char v120; // [esp+1D1h] [ebp-233h] BYREF
  char v121; // [esp+1D2h] [ebp-232h] BYREF
  char v122; // [esp+1D3h] [ebp-231h] BYREF
  char v123; // [esp+1D4h] [ebp-230h] BYREF
  char v124; // [esp+1D5h] [ebp-22Fh] BYREF
  char v125; // [esp+1D6h] [ebp-22Eh] BYREF
  char v126; // [esp+1D7h] [ebp-22Dh] BYREF
  char v127; // [esp+1D8h] [ebp-22Ch] BYREF
  char v128; // [esp+1D9h] [ebp-22Bh] BYREF
  char v129; // [esp+1DAh] [ebp-22Ah] BYREF
  char v130; // [esp+1DBh] [ebp-229h] BYREF
  char v131; // [esp+1DCh] [ebp-228h] BYREF
  char v132; // [esp+1DDh] [ebp-227h] BYREF
  char v133; // [esp+1DEh] [ebp-226h] BYREF
  char v134; // [esp+1DFh] [ebp-225h] BYREF
  char v135; // [esp+1E0h] [ebp-224h] BYREF
  char v136; // [esp+1E1h] [ebp-223h] BYREF
  char v137; // [esp+1E2h] [ebp-222h] BYREF
  char v138; // [esp+1E3h] [ebp-221h] BYREF
  char v139; // [esp+1E4h] [ebp-220h] BYREF
  char v140; // [esp+1E5h] [ebp-21Fh] BYREF
  char v141; // [esp+1E6h] [ebp-21Eh] BYREF
  char v142; // [esp+1E7h] [ebp-21Dh] BYREF
  char v143; // [esp+1E8h] [ebp-21Ch] BYREF
  char v144; // [esp+1E9h] [ebp-21Bh] BYREF
  char v145; // [esp+1EAh] [ebp-21Ah] BYREF
  char v146; // [esp+1EBh] [ebp-219h] BYREF
  char v147; // [esp+1ECh] [ebp-218h] BYREF
  char v148; // [esp+1EDh] [ebp-217h] BYREF
  char v149; // [esp+1EEh] [ebp-216h] BYREF
  char v150; // [esp+1EFh] [ebp-215h] BYREF
  char v151; // [esp+1F0h] [ebp-214h] BYREF
  char v152; // [esp+1F1h] [ebp-213h] BYREF
  char v153; // [esp+1F2h] [ebp-212h] BYREF
  char v154; // [esp+1F3h] [ebp-211h] BYREF
  char v155; // [esp+1F4h] [ebp-210h] BYREF
  char v156; // [esp+1F5h] [ebp-20Fh] BYREF
  char v157; // [esp+1F6h] [ebp-20Eh] BYREF
  char v158; // [esp+1F7h] [ebp-20Dh] BYREF
  char v159; // [esp+1F8h] [ebp-20Ch] BYREF
  char v160; // [esp+1F9h] [ebp-20Bh] BYREF
  char v161; // [esp+1FAh] [ebp-20Ah] BYREF
  char v162; // [esp+1FBh] [ebp-209h] BYREF
  char v163; // [esp+1FCh] [ebp-208h] BYREF
  char v164; // [esp+1FDh] [ebp-207h] BYREF
  char v165; // [esp+1FEh] [ebp-206h] BYREF
  char v166; // [esp+1FFh] [ebp-205h] BYREF
  char v167; // [esp+200h] [ebp-204h] BYREF
  char v168; // [esp+201h] [ebp-203h] BYREF
  char v169; // [esp+202h] [ebp-202h] BYREF
  char v170; // [esp+203h] [ebp-201h] BYREF
  char v171; // [esp+204h] [ebp-200h] BYREF
  char v172; // [esp+205h] [ebp-1FFh] BYREF
  char v173; // [esp+206h] [ebp-1FEh] BYREF
  char v174; // [esp+207h] [ebp-1FDh] BYREF
  char v175; // [esp+208h] [ebp-1FCh] BYREF
  char v176; // [esp+209h] [ebp-1FBh] BYREF
  char v177; // [esp+20Ah] [ebp-1FAh] BYREF
  char v178; // [esp+20Bh] [ebp-1F9h] BYREF
  char v179; // [esp+20Ch] [ebp-1F8h] BYREF
  char v180; // [esp+20Dh] [ebp-1F7h] BYREF
  char v181; // [esp+20Eh] [ebp-1F6h] BYREF
  char v182; // [esp+20Fh] [ebp-1F5h] BYREF
  char v183; // [esp+210h] [ebp-1F4h] BYREF
  char v184; // [esp+211h] [ebp-1F3h] BYREF
  char v185; // [esp+212h] [ebp-1F2h] BYREF
  char v186; // [esp+213h] [ebp-1F1h] BYREF
  char v187; // [esp+214h] [ebp-1F0h] BYREF
  char v188; // [esp+215h] [ebp-1EFh] BYREF
  char v189; // [esp+216h] [ebp-1EEh] BYREF
  char v190; // [esp+217h] [ebp-1EDh] BYREF
  char v191; // [esp+218h] [ebp-1ECh] BYREF
  char v192; // [esp+219h] [ebp-1EBh] BYREF
  char v193; // [esp+21Ah] [ebp-1EAh] BYREF
  char v194; // [esp+21Bh] [ebp-1E9h] BYREF
  char v195; // [esp+21Ch] [ebp-1E8h] BYREF
  char v196; // [esp+21Dh] [ebp-1E7h] BYREF
  char v197; // [esp+21Eh] [ebp-1E6h] BYREF
  char v198; // [esp+21Fh] [ebp-1E5h] BYREF
  char v199; // [esp+220h] [ebp-1E4h] BYREF
  char v200; // [esp+221h] [ebp-1E3h] BYREF
  char v201; // [esp+222h] [ebp-1E2h] BYREF
  char v202; // [esp+223h] [ebp-1E1h] BYREF
  char v203; // [esp+224h] [ebp-1E0h] BYREF
  char v204; // [esp+225h] [ebp-1DFh] BYREF
  char v205; // [esp+226h] [ebp-1DEh] BYREF
  char v206; // [esp+227h] [ebp-1DDh] BYREF
  char v207; // [esp+228h] [ebp-1DCh] BYREF
  char v208; // [esp+229h] [ebp-1DBh] BYREF
  char v209; // [esp+22Ah] [ebp-1DAh] BYREF
  char v210; // [esp+22Bh] [ebp-1D9h] BYREF
  char v211; // [esp+22Ch] [ebp-1D8h] BYREF
  char v212; // [esp+22Dh] [ebp-1D7h] BYREF
  char v213; // [esp+22Eh] [ebp-1D6h] BYREF
  char v214; // [esp+22Fh] [ebp-1D5h] BYREF
  char v215; // [esp+230h] [ebp-1D4h] BYREF
  char v216; // [esp+231h] [ebp-1D3h] BYREF
  char v217; // [esp+232h] [ebp-1D2h] BYREF
  char v218; // [esp+233h] [ebp-1D1h] BYREF
  char v219; // [esp+234h] [ebp-1D0h] BYREF
  char v220; // [esp+235h] [ebp-1CFh] BYREF
  char v221; // [esp+236h] [ebp-1CEh] BYREF
  char v222; // [esp+237h] [ebp-1CDh] BYREF
  int v223; // [esp+238h] [ebp-1CCh]
  char v224; // [esp+23Fh] [ebp-1C5h] BYREF
  char v225; // [esp+240h] [ebp-1C4h] BYREF
  char v226; // [esp+241h] [ebp-1C3h] BYREF
  char v227; // [esp+242h] [ebp-1C2h] BYREF
  char v228; // [esp+243h] [ebp-1C1h] BYREF
  int v229; // [esp+244h] [ebp-1C0h]
  char v230; // [esp+248h] [ebp-1BCh] BYREF
  char v231; // [esp+249h] [ebp-1BBh] BYREF
  char v232; // [esp+24Ah] [ebp-1BAh] BYREF
  char v233; // [esp+24Bh] [ebp-1B9h] BYREF
  _BYTE v234[3]; // [esp+24Ch] [ebp-1B8h] BYREF
  _BYTE v235[2]; // [esp+24Fh] [ebp-1B5h] BYREF
  char v236; // [esp+251h] [ebp-1B3h] BYREF
  bool v237; // [esp+252h] [ebp-1B2h]
  _BYTE v238[2]; // [esp+253h] [ebp-1B1h] BYREF
  char v239; // [esp+255h] [ebp-1AFh] BYREF
  bool v240; // [esp+256h] [ebp-1AEh]
  _BYTE v241[2]; // [esp+257h] [ebp-1ADh] BYREF
  char v242; // [esp+259h] [ebp-1ABh] BYREF
  bool v243; // [esp+25Ah] [ebp-1AAh]
  _BYTE v244[2]; // [esp+25Bh] [ebp-1A9h] BYREF
  char v245; // [esp+25Dh] [ebp-1A7h] BYREF
  bool v246; // [esp+25Eh] [ebp-1A6h]
  _BYTE v247[2]; // [esp+25Fh] [ebp-1A5h] BYREF
  char v248; // [esp+261h] [ebp-1A3h] BYREF
  bool v249; // [esp+262h] [ebp-1A2h]
  _BYTE v250[2]; // [esp+263h] [ebp-1A1h] BYREF
  char v251; // [esp+265h] [ebp-19Fh] BYREF
  char v252; // [esp+266h] [ebp-19Eh]
  _BYTE v253[2]; // [esp+267h] [ebp-19Dh] BYREF
  char v254; // [esp+269h] [ebp-19Bh] BYREF
  char v255; // [esp+26Ah] [ebp-19Ah]
  _BYTE v256[2]; // [esp+26Bh] [ebp-199h] BYREF
  char v257; // [esp+26Dh] [ebp-197h] BYREF
  char v258; // [esp+26Eh] [ebp-196h]
  _BYTE v259[2]; // [esp+26Fh] [ebp-195h] BYREF
  char v260; // [esp+271h] [ebp-193h] BYREF
  char v261; // [esp+272h] [ebp-192h]
  unsigned __int8 v262; // [esp+273h] [ebp-191h] BYREF
  unsigned __int8 v263; // [esp+274h] [ebp-190h] BYREF
  unsigned __int8 v264; // [esp+275h] [ebp-18Fh] BYREF
  unsigned __int8 v265; // [esp+276h] [ebp-18Eh] BYREF
  unsigned __int8 v266; // [esp+277h] [ebp-18Dh] BYREF
  _BYTE v267[2]; // [esp+278h] [ebp-18Ch] BYREF
  char v268; // [esp+27Ah] [ebp-18Ah] BYREF
  bool v269; // [esp+27Bh] [ebp-189h]
  char v270; // [esp+27Ch] [ebp-188h] BYREF
  char v271; // [esp+27Dh] [ebp-187h] BYREF
  char v272; // [esp+27Eh] [ebp-186h] BYREF
  char v273; // [esp+27Fh] [ebp-185h] BYREF
  char v274; // [esp+280h] [ebp-184h] BYREF
  char v275; // [esp+281h] [ebp-183h] BYREF
  char v276; // [esp+282h] [ebp-182h] BYREF
  char v277; // [esp+283h] [ebp-181h] BYREF
  char v278; // [esp+284h] [ebp-180h] BYREF
  char v279; // [esp+285h] [ebp-17Fh] BYREF
  char v280; // [esp+286h] [ebp-17Eh] BYREF
  char v281; // [esp+287h] [ebp-17Dh] BYREF
  char v282; // [esp+288h] [ebp-17Ch] BYREF
  char v283; // [esp+289h] [ebp-17Bh] BYREF
  _BYTE v284[3]; // [esp+28Ah] [ebp-17Ah] BYREF
  char v285; // [esp+28Dh] [ebp-177h] BYREF
  bool v286; // [esp+28Eh] [ebp-176h]
  char v287; // [esp+28Fh] [ebp-175h] BYREF
  bool v288; // [esp+290h] [ebp-174h]
  char v289; // [esp+291h] [ebp-173h] BYREF
  bool v290; // [esp+292h] [ebp-172h]
  char v291; // [esp+293h] [ebp-171h] BYREF
  bool v292; // [esp+294h] [ebp-170h]
  char v293; // [esp+295h] [ebp-16Fh] BYREF
  char v294; // [esp+296h] [ebp-16Eh] BYREF
  char v295; // [esp+297h] [ebp-16Dh] BYREF
  char v296; // [esp+298h] [ebp-16Ch] BYREF
  char v297; // [esp+299h] [ebp-16Bh] BYREF
  char v298; // [esp+29Ah] [ebp-16Ah] BYREF
  char v299; // [esp+29Bh] [ebp-169h] BYREF
  char v300; // [esp+29Ch] [ebp-168h] BYREF
  char v301; // [esp+29Dh] [ebp-167h] BYREF
  char v302; // [esp+29Eh] [ebp-166h] BYREF
  char v303; // [esp+29Fh] [ebp-165h] BYREF
  char v304; // [esp+2A0h] [ebp-164h] BYREF
  char v305; // [esp+2A1h] [ebp-163h] BYREF
  char v306; // [esp+2A2h] [ebp-162h] BYREF
  _BYTE v307[3]; // [esp+2A3h] [ebp-161h] BYREF
  char v308; // [esp+2A6h] [ebp-15Eh] BYREF
  bool v309; // [esp+2A7h] [ebp-15Dh]
  char v310; // [esp+2A8h] [ebp-15Ch] BYREF
  bool v311; // [esp+2A9h] [ebp-15Bh]
  char v312; // [esp+2AAh] [ebp-15Ah] BYREF
  bool v313; // [esp+2ABh] [ebp-159h]
  char v314; // [esp+2ACh] [ebp-158h] BYREF
  bool v315; // [esp+2ADh] [ebp-157h]
  char v316; // [esp+2AEh] [ebp-156h] BYREF
  char v317; // [esp+2AFh] [ebp-155h] BYREF
  char v318; // [esp+2B0h] [ebp-154h] BYREF
  char v319; // [esp+2B1h] [ebp-153h] BYREF
  unsigned __int8 v320; // [esp+2B2h] [ebp-152h] BYREF
  char v321; // [esp+2B3h] [ebp-151h] BYREF
  char v322; // [esp+2B4h] [ebp-150h] BYREF
  char v323; // [esp+2B5h] [ebp-14Fh] BYREF
  char v324; // [esp+2B6h] [ebp-14Eh] BYREF
  char v325; // [esp+2B7h] [ebp-14Dh] BYREF
  char v326; // [esp+2B8h] [ebp-14Ch] BYREF
  char v327; // [esp+2B9h] [ebp-14Bh] BYREF
  char v328; // [esp+2BAh] [ebp-14Ah] BYREF
  char v329; // [esp+2BBh] [ebp-149h] BYREF
  __int16 *v330; // [esp+2BCh] [ebp-148h]
  int *v331; // [esp+2C0h] [ebp-144h]
  void *v332; // [esp+2C4h] [ebp-140h]
  char v333[4]; // [esp+2C8h] [ebp-13Ch] BYREF
  void *v334; // [esp+2CCh] [ebp-138h]
  int *v335; // [esp+2D0h] [ebp-134h]
  char v336[4]; // [esp+2D6h] [ebp-12Eh] BYREF
  unsigned __int8 kk; // [esp+2DAh] [ebp-12Ah]
  unsigned __int8 jj; // [esp+2DBh] [ebp-129h]
  unsigned __int8 ii; // [esp+2DCh] [ebp-128h]
  unsigned __int8 n; // [esp+2DDh] [ebp-127h]
  unsigned __int8 v341; // [esp+2DEh] [ebp-126h]
  unsigned __int8 mm; // [esp+2DFh] [ebp-125h]
  __int16 *v343; // [esp+2E0h] [ebp-124h]
  unsigned __int8 v344; // [esp+2E6h] [ebp-11Eh]
  unsigned __int8 v345; // [esp+2E7h] [ebp-11Dh]
  __int16 v346; // [esp+2E8h] [ebp-11Ch]
  unsigned __int8 v347; // [esp+2EFh] [ebp-115h]
  __int16 v348; // [esp+2F0h] [ebp-114h]
  unsigned __int8 v349; // [esp+2F6h] [ebp-10Eh]
  char v350; // [esp+2F7h] [ebp-10Dh]
  __int16 v351; // [esp+2F8h] [ebp-10Ch]
  unsigned __int8 v352; // [esp+2FFh] [ebp-105h]
  __int16 v353; // [esp+300h] [ebp-104h]
  unsigned __int8 v354; // [esp+306h] [ebp-FEh]
  char v355; // [esp+307h] [ebp-FDh]
  char v356[4]; // [esp+308h] [ebp-FCh] BYREF
  _BYTE v357[8]; // [esp+30Ch] [ebp-F8h] BYREF
  int v358; // [esp+314h] [ebp-F0h]
  __int16 v359; // [esp+318h] [ebp-ECh]
  unsigned __int8 v360; // [esp+31Fh] [ebp-E5h]
  int v361; // [esp+320h] [ebp-E4h]
  char v362; // [esp+326h] [ebp-DEh]
  unsigned __int8 v363; // [esp+327h] [ebp-DDh]
  char v364[4]; // [esp+328h] [ebp-DCh] BYREF
  char v365[4]; // [esp+32Ch] [ebp-D8h] BYREF
  _BYTE *v366; // [esp+330h] [ebp-D4h]
  __int16 v367; // [esp+334h] [ebp-D0h]
  unsigned __int8 v368; // [esp+33Bh] [ebp-C9h]
  _BYTE *v369; // [esp+33Ch] [ebp-C8h]
  __int16 v370; // [esp+340h] [ebp-C4h]
  unsigned __int8 v371; // [esp+345h] [ebp-BFh]
  char v372; // [esp+346h] [ebp-BEh]
  char v373; // [esp+347h] [ebp-BDh]
  char v374[4]; // [esp+348h] [ebp-BCh] BYREF
  char v375[4]; // [esp+34Ch] [ebp-B8h] BYREF
  _BYTE *v376; // [esp+350h] [ebp-B4h]
  __int16 v377; // [esp+354h] [ebp-B0h]
  unsigned __int8 v378; // [esp+35Bh] [ebp-A9h]
  _BYTE *v379; // [esp+35Ch] [ebp-A8h]
  __int16 v380; // [esp+360h] [ebp-A4h]
  unsigned __int8 v381; // [esp+365h] [ebp-9Fh]
  char v382; // [esp+366h] [ebp-9Eh]
  char v383; // [esp+367h] [ebp-9Dh]
  __int16 v384; // [esp+368h] [ebp-9Ch]
  __int16 v385; // [esp+36Ch] [ebp-98h]
  int v386; // [esp+370h] [ebp-94h] BYREF
  int v387; // [esp+374h] [ebp-90h] BYREF
  int v388; // [esp+378h] [ebp-8Ch] BYREF
  __int16 v389[4]; // [esp+37Ch] [ebp-88h] BYREF
  int v390; // [esp+384h] [ebp-80h] BYREF
  int *v391; // [esp+388h] [ebp-7Ch]
  unsigned __int8 v392; // [esp+38Fh] [ebp-75h]
  _BYTE v393[4]; // [esp+390h] [ebp-74h]
  __int16 *v394; // [esp+394h] [ebp-70h]
  _BYTE v395[7]; // [esp+398h] [ebp-6Ch]
  unsigned __int8 v396; // [esp+39Fh] [ebp-65h]
  __int16 m; // [esp+3A0h] [ebp-64h]
  unsigned __int8 v398; // [esp+3A7h] [ebp-5Dh]
  __int16 v399; // [esp+3A8h] [ebp-5Ch]
  _BYTE v400[4]; // [esp+3ACh] [ebp-58h]
  int v401; // [esp+3B0h] [ebp-54h] BYREF
  unsigned __int8 v402; // [esp+3B7h] [ebp-4Dh]
  _BYTE v403[7]; // [esp+3B8h] [ebp-4Ch]
  unsigned __int8 v404; // [esp+3BFh] [ebp-45h]
  __int16 v405; // [esp+3C0h] [ebp-44h]
  __int16 v406; // [esp+3C4h] [ebp-40h]
  unsigned __int8 v407; // [esp+3CBh] [ebp-39h]
  _BYTE v408[6]; // [esp+3CCh] [ebp-38h]
  char v409; // [esp+3D2h] [ebp-32h]
  unsigned __int8 v410; // [esp+3D3h] [ebp-31h]
  __int16 v411; // [esp+3D4h] [ebp-30h]
  __int16 i; // [esp+3D8h] [ebp-2Ch]
  unsigned __int8 j; // [esp+3DDh] [ebp-27h]
  unsigned __int8 k; // [esp+3DEh] [ebp-26h]
  char v415; // [esp+3DFh] [ebp-25h]
  __int16 v416; // [esp+3E0h] [ebp-24h]
  __int16 v417; // [esp+3E2h] [ebp-22h]
  __int16 v418; // [esp+3E4h] [ebp-20h]
  __int16 v419; // [esp+3E6h] [ebp-1Eh]
  __int16 v420; // [esp+3ECh] [ebp-18h]
  char v421; // [esp+3F3h] [ebp-11h]
  __int16 v422; // [esp+3F4h] [ebp-10h]
  int v423; // [esp+400h] [ebp-4h]
  bool v424; // [esp+414h] [ebp+10h]
  bool v425; // [esp+418h] [ebp+14h]

  v94 = 0;
  if ( !a4 && !a5 )
    sub_5E9F20((char)"bAllowAceHigh || bAllowAceLow", "..\\Casino\\PokerHand.cpp", 407);
  v424 = a4 != 0;
  v425 = a5 != 0;
  if ( !*(this + 2) )
  {
    sub_4A20D0(v336);
    v423 = 1;
    *a2 = *(_DWORD *)sub_4A2100(dword_791390, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    LOBYTE(v423) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(v336);
    return a2;
  }
  if ( !a3 && *(this + 2) > 5 )
  {
    sub_4A20D0(&v388);
    v423 = 2;
    sub_4A20D0(&v390);
    LOBYTE(v423) = 3;
    sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    sub_484300(v389);
    LOBYTE(v423) = 4;
    v334 = operator new(0xCu);
    LOBYTE(v423) = 5;
    if ( v334 )
      v92 = sub_464ED0((int *)v334, *(this + 2), 5);
    else
      v92 = 0;
    v335 = v92;
    LOBYTE(v423) = 4;
    v391 = v92;
    while ( sub_465000(v391) )
    {
      sub_484B80(v389);
      for ( i = 0; ; ++i )
      {
        v10 = i;
        if ( i >= 5 )
          break;
        v11 = sub_465110((int)v391, i);
        sub_484830(v389, (_BYTE *)(*(_DWORD *)this + v11));
      }
      LOBYTE(v10) = 0;
      v388 = *(_DWORD *)sub_485940(v333, v10, v424, v425, a6, a7, a8, a9);
      ATL::CComCriticalSection::~CComCriticalSection(v333);
      if ( (unsigned __int8)sub_4A2550(&v390) )
        v390 = v388;
    }
    v331 = v391;
    v332 = v391;
    if ( v391 )
    {
      sub_464FD0((void **)v332);
      operator delete(v332);
    }
    *a2 = v390;
    LOBYTE(v423) = 3;
    sub_484470(v389);
    LOBYTE(v423) = 2;
    ATL::CComCriticalSection::~CComCriticalSection(&v390);
    LOBYTE(v423) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(&v388);
    return a2;
  }
  if ( !a3 )
  {
    v12 = v424;
    if ( v424 && v425 )
    {
      LOBYTE(v12) = 0;
      v13 = sub_485940(&v387, v12, 1, 0, a6, a7, a8, a9);
      v423 = 6;
      LOBYTE(v13) = 0;
      sub_485940(&v386, v13, 0, 1, a6, a7, a8, a9);
      LOBYTE(v423) = 7;
      if ( (unsigned __int8)sub_4A2550(&v386) )
        *a2 = v387;
      else
        *a2 = v386;
      LOBYTE(v423) = 6;
      ATL::CComCriticalSection::~CComCriticalSection(&v386);
      LOBYTE(v423) = 0;
      ATL::CComCriticalSection::~CComCriticalSection(&v387);
      return a2;
    }
  }
  if ( !a3 && *(this + 2) > 5 )
    sub_5E9F20((char)"bHighValue || (shSize <= 5)", "..\\Casino\\PokerHand.cpp", 458);
  sub_4A20D0(&v401);
  v423 = 8;
  v330 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v394 = v330;
  v405 = 0;
  v422 = 0;
  for ( j = 0; j <= (int)*(unsigned __int8 *)dword_7913C8; ++j )
    v394[j] = 0;
  for ( i = 0; i < *(this + 2); ++i )
  {
    v38 = (unsigned __int8 *)dword_79077C;
    v14 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v329);
    if ( sub_464050(v14, v38) )
    {
      ++v422;
    }
    else
    {
      v39 = (unsigned __int8 *)dword_7907B4;
      v15 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v328);
      if ( sub_464050(v15, v39) )
      {
        ++v405;
      }
      else
      {
        v40 = (unsigned __int8 *)dword_7907A4;
        v16 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v327);
        if ( sub_464050(v16, v40) )
        {
          if ( v424 )
          {
            v17 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v326);
            v18 = sub_463F80(v17, &v325);
            ++v394[(unsigned __int8)*v18];
          }
          if ( v425 )
          {
            v19 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v324);
            v20 = sub_463FD0(v19, &v323);
            ++v394[(unsigned __int8)*v20];
          }
        }
        else
        {
          v21 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v322);
          v22 = sub_463F80(v21, &v321);
          ++v394[(unsigned __int8)*v22];
        }
      }
    }
  }
  v420 = 0;
  v407 = *(_BYTE *)dword_7913D0;
  for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
  {
    v385 = v394[j];
    if ( j == *(unsigned __int8 *)dword_7913C8 )
    {
      v385 += v405;
    }
    else if ( j == *(unsigned __int8 *)dword_7913B4 )
    {
      v385 += v405;
    }
    if ( v385 > v420 )
    {
      v420 = v385;
      v407 = j;
    }
  }
  if ( !v420 )
  {
    if ( !v422 )
      sub_5E9F20((char)"shWildCount", "..\\Casino\\PokerHand.cpp", 508);
    if ( a3 )
      v407 = v424 + *(_BYTE *)dword_7913E0;
  }
  v406 = 0;
  v402 = *(_BYTE *)dword_7913D0;
  for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
  {
    v384 = v394[j];
    if ( j == *(unsigned __int8 *)dword_7913C8 )
    {
      v384 += v405;
    }
    else if ( j == *(unsigned __int8 *)dword_7913B4 )
    {
      v384 += v405;
    }
    if ( v384 > v406 && j != v407 )
    {
      v406 = v384;
      v402 = j;
    }
  }
  v415 = 0;
  v392 = 0;
  v409 = 0;
  v421 = 0;
  if ( a3 )
    v91 = v422;
  else
    v91 = 0;
  if ( v91 + v420 >= 5 )
  {
    v320 = v407;
    sub_4A2100(dword_7913CC, &v320, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    goto LABEL_1093;
  }
  if ( a6 && (*(this + 2) >= 5 || a7 && *(this + 2) >= 4) )
  {
    v392 = *(_BYTE *)dword_7913D0;
    for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_791404 - v425; --j )
    {
      if ( a3 )
        v411 = v422 + v405;
      else
        v411 = 0;
      for ( k = 0; k < 5u; ++k )
      {
        if ( !v394[j - k]
          && (a3 || !v405 || j - k != *(unsigned __int8 *)dword_7913B4 && j - k != *(unsigned __int8 *)dword_7913C8) )
        {
          if ( !v411 )
            break;
          --v411;
        }
      }
      if ( k == 5 )
      {
        v415 = 1;
        v392 = j;
        break;
      }
    }
    for ( m = 0; m < 4; ++m )
      *(&v416 + m) = 0;
    for ( i = 0; i < *(this + 2); ++i )
    {
      v41 = (unsigned __int8 *)dword_79076C;
      v23 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v319);
      if ( sub_4640B0(v23, v41) )
      {
        ++v416;
      }
      else
      {
        v42 = (unsigned __int8 *)dword_790754;
        v24 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v318);
        if ( sub_4640B0(v24, v42) )
        {
          ++v417;
        }
        else
        {
          v43 = (unsigned __int8 *)dword_790764;
          v25 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v317);
          if ( sub_4640B0(v25, v43) )
          {
            ++v418;
          }
          else
          {
            v44 = (unsigned __int8 *)dword_790770;
            v26 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v316);
            if ( sub_4640B0(v26, v44) )
              ++v419;
          }
        }
      }
    }
    for ( m = 0; m < 4; ++m )
    {
      if ( a3 )
        v90 = v405 + v422;
      else
        v90 = 0;
      if ( v90 + *(&v416 + m) >= 5 )
      {
        v409 = 1;
        v421 = 0;
        break;
      }
      if ( a7 )
      {
        v89 = a3 ? v405 + v422 : 0;
        if ( v89 + *(&v416 + m) == 4 )
          v421 = 1;
      }
    }
    if ( v409 && a8 )
    {
      for ( m = 0; m < 4; ++m )
      {
        v408[m] = *(_BYTE *)dword_7913D0;
        v395[m] = *(_BYTE *)dword_7913D0;
        v400[m] = *(_BYTE *)dword_7913D0;
        v393[m] = *(_BYTE *)dword_7913D0;
        v403[m] = *(_BYTE *)dword_7913D0;
      }
      v382 = 0;
      v383 = 0;
      for ( m = 0; m < 4; ++m )
      {
        if ( a3 )
          v88 = v405 + v422;
        else
          v88 = 0;
        if ( v88 + *(&v416 + m) >= 5 )
        {
          v379 = 0;
          if ( m )
          {
            switch ( m )
            {
              case 1:
                v379 = (_BYTE *)dword_790754;
                break;
              case 2:
                v379 = (_BYTE *)dword_790764;
                break;
              case 3:
                v379 = (_BYTE *)dword_790770;
                break;
            }
          }
          else
          {
            v379 = (_BYTE *)dword_79076C;
          }
          if ( a3 )
            v411 = v422 + v405;
          else
            v411 = 0;
          v87 = sub_464130(&v314, (_BYTE *)dword_7907A8, v379);
          LOBYTE(v423) = 9;
          v315 = sub_484BA0(this, v87) == 0;
          LOBYTE(v423) = 8;
          ATL::CComCriticalSection::~CComCriticalSection(&v314);
          if ( v315 )
          {
            if ( !v411 )
              continue;
            --v411;
          }
          v86 = sub_464130(&v312, (_BYTE *)dword_790798, v379);
          LOBYTE(v423) = 10;
          v313 = sub_484BA0(this, v86) == 0;
          LOBYTE(v423) = 8;
          ATL::CComCriticalSection::~CComCriticalSection(&v312);
          if ( v313 )
          {
            if ( !v411 )
              continue;
            --v411;
          }
          v380 = 0;
          v381 = 0;
          for ( j = *(_BYTE *)dword_7913BC; j >= (int)*(unsigned __int8 *)dword_7913F4; --j )
          {
            if ( !v394[j] )
            {
              if ( v411 )
              {
                --v411;
              }
              else
              {
                ++v380;
                v381 = j;
              }
            }
          }
          if ( v380 )
          {
            if ( v380 == 1 )
            {
              v382 = 1;
              v408[m] = *(_BYTE *)dword_7913E0;
              v403[m] = *(_BYTE *)dword_791410;
              if ( v381 == *(unsigned __int8 *)dword_7913BC )
              {
                v395[m] = *(_BYTE *)dword_791400;
                v400[m] = *(_BYTE *)dword_79138C;
                v393[m] = *(_BYTE *)dword_7913F4;
              }
              else if ( v381 == *(unsigned __int8 *)dword_791400 )
              {
                v395[m] = *(_BYTE *)dword_7913BC;
                v400[m] = *(_BYTE *)dword_79138C;
                v393[m] = *(_BYTE *)dword_7913F4;
              }
              else if ( v381 == *(unsigned __int8 *)dword_79138C )
              {
                v395[m] = *(_BYTE *)dword_7913BC;
                v400[m] = *(_BYTE *)dword_791400;
                v393[m] = *(_BYTE *)dword_7913F4;
              }
              else if ( v381 == *(unsigned __int8 *)dword_7913F4 )
              {
                v395[m] = *(_BYTE *)dword_7913BC;
                v400[m] = *(_BYTE *)dword_791400;
                v393[m] = *(_BYTE *)dword_79138C;
              }
              else
              {
                sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 718);
              }
            }
          }
          else
          {
            v382 = 1;
            v408[m] = *(_BYTE *)dword_7913E0;
            v395[m] = *(_BYTE *)dword_7913BC;
            v400[m] = *(_BYTE *)dword_791400;
            v393[m] = *(_BYTE *)dword_79138C;
            v403[m] = *(_BYTE *)dword_791410;
          }
        }
      }
      if ( !v382 )
      {
        for ( m = 0; m < 4; ++m )
        {
          if ( a3 )
            v85 = v405 + v422;
          else
            v85 = 0;
          if ( v85 + *(&v416 + m) >= 5 )
          {
            v376 = 0;
            if ( m )
            {
              switch ( m )
              {
                case 1:
                  v376 = (_BYTE *)dword_790754;
                  break;
                case 2:
                  v376 = (_BYTE *)dword_790764;
                  break;
                case 3:
                  v376 = (_BYTE *)dword_790770;
                  break;
              }
            }
            else
            {
              v376 = (_BYTE *)dword_79076C;
            }
            if ( a3 )
              v411 = v422 + v405;
            else
              v411 = 0;
            v84 = sub_464130(&v310, (_BYTE *)dword_790798, v376);
            LOBYTE(v423) = 11;
            v311 = sub_484BA0(this, v84) == 0;
            LOBYTE(v423) = 8;
            ATL::CComCriticalSection::~CComCriticalSection(&v310);
            if ( v311 )
            {
              if ( !v411 )
                continue;
              --v411;
            }
            v83 = sub_464130(&v308, (_BYTE *)dword_790768, v376);
            LOBYTE(v423) = 12;
            v309 = sub_484BA0(this, v83) == 0;
            LOBYTE(v423) = 8;
            ATL::CComCriticalSection::~CComCriticalSection(&v308);
            if ( v309 )
            {
              if ( !v411 )
                continue;
              --v411;
            }
            v377 = 0;
            v378 = 0;
            for ( j = *(_BYTE *)dword_7913F8; j >= (int)*(unsigned __int8 *)dword_791414; --j )
            {
              if ( !v394[j] )
              {
                if ( v411 )
                {
                  --v411;
                }
                else
                {
                  ++v377;
                  v378 = j;
                }
              }
            }
            if ( v377 )
            {
              if ( v377 == 1 )
              {
                v383 = 1;
                v408[m] = *(_BYTE *)dword_791410;
                v403[m] = *(_BYTE *)dword_7913D8;
                if ( v378 == *(unsigned __int8 *)dword_7913F8 )
                {
                  v395[m] = *(_BYTE *)dword_791404;
                  v400[m] = *(_BYTE *)dword_7913A4;
                  v393[m] = *(_BYTE *)dword_791414;
                }
                else if ( v378 == *(unsigned __int8 *)dword_791404 )
                {
                  v395[m] = *(_BYTE *)dword_7913F8;
                  v400[m] = *(_BYTE *)dword_7913A4;
                  v393[m] = *(_BYTE *)dword_791414;
                }
                else if ( v378 == *(unsigned __int8 *)dword_7913A4 )
                {
                  v395[m] = *(_BYTE *)dword_7913F8;
                  v400[m] = *(_BYTE *)dword_791404;
                  v393[m] = *(_BYTE *)dword_791414;
                }
                else if ( v378 == *(unsigned __int8 *)dword_791414 )
                {
                  v395[m] = *(_BYTE *)dword_7913F8;
                  v400[m] = *(_BYTE *)dword_791404;
                  v393[m] = *(_BYTE *)dword_7913A4;
                }
                else
                {
                  sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 809);
                }
              }
            }
            else
            {
              v383 = 1;
              v408[m] = *(_BYTE *)dword_791410;
              v395[m] = *(_BYTE *)dword_7913F8;
              v400[m] = *(_BYTE *)dword_791404;
              v393[m] = *(_BYTE *)dword_7913A4;
              v403[m] = *(_BYTE *)dword_7913D8;
            }
          }
        }
      }
      if ( v382 || v383 )
      {
        v399 = 0;
        for ( m = 1; m < 4; ++m )
        {
          v307[2] = v408[m];
          if ( !(unsigned __int8)sub_4A1FB0(dword_7913D0) )
          {
            v307[1] = v408[v399];
            if ( (unsigned __int8)sub_4A1FB0(dword_7913D0) )
            {
              v399 = m;
            }
            else
            {
              sub_4A20D0(v374);
              LOBYTE(v423) = 13;
              sub_4A20D0(v375);
              LOBYTE(v423) = 14;
              v307[0] = v403[m];
              v306 = v393[m];
              v305 = v400[m];
              v304 = v395[m];
              v303 = v408[m];
              sub_4A2100(dword_7913AC, &v303, &v304, &v305, &v306, v307);
              v302 = v403[v399];
              v301 = v393[v399];
              v300 = v400[v399];
              v299 = v395[v399];
              v298 = v408[v399];
              sub_4A2100(dword_7913AC, &v298, &v299, &v300, &v301, &v302);
              if ( (unsigned __int8)sub_4A2440(v375) )
                v399 = m;
              LOBYTE(v423) = 13;
              ATL::CComCriticalSection::~CComCriticalSection(v375);
              LOBYTE(v423) = 8;
              ATL::CComCriticalSection::~CComCriticalSection(v374);
            }
          }
        }
        v297 = v403[v399];
        v296 = v393[v399];
        v295 = v400[v399];
        v294 = v395[v399];
        v293 = v408[v399];
        sub_4A2100(dword_7913AC, &v293, &v294, &v295, &v296, &v297);
        goto LABEL_1093;
      }
    }
    if ( v409 && a9 )
    {
      for ( m = 0; m < 4; ++m )
      {
        v408[m] = *(_BYTE *)dword_7913D0;
        v395[m] = *(_BYTE *)dword_7913D0;
        v400[m] = *(_BYTE *)dword_7913D0;
        v393[m] = *(_BYTE *)dword_7913D0;
        v403[m] = *(_BYTE *)dword_7913D0;
      }
      v373 = 0;
      v372 = 0;
      for ( m = 0; m < 4; ++m )
      {
        if ( v424 )
        {
          v82 = a3 ? v405 + v422 : 0;
          if ( v82 + *(&v416 + m) >= 5 )
          {
            v369 = 0;
            if ( m )
            {
              switch ( m )
              {
                case 1:
                  v369 = (_BYTE *)dword_790754;
                  break;
                case 2:
                  v369 = (_BYTE *)dword_790764;
                  break;
                case 3:
                  v369 = (_BYTE *)dword_790770;
                  break;
              }
            }
            else
            {
              v369 = (_BYTE *)dword_79076C;
            }
            if ( a3 )
              v411 = v422 + v405;
            else
              v411 = 0;
            v81 = sub_464130(&v291, (_BYTE *)dword_7907A4, v369);
            LOBYTE(v423) = 15;
            v292 = sub_484BA0(this, v81) == 0;
            LOBYTE(v423) = 8;
            ATL::CComCriticalSection::~CComCriticalSection(&v291);
            if ( v292 )
            {
              if ( !v411 )
                continue;
              --v411;
            }
            v80 = sub_464130(&v289, (_BYTE *)dword_790794, v369);
            LOBYTE(v423) = 16;
            v290 = sub_484BA0(this, v80) == 0;
            LOBYTE(v423) = 8;
            ATL::CComCriticalSection::~CComCriticalSection(&v289);
            if ( v290 )
            {
              if ( !v411 )
                continue;
              --v411;
            }
            v370 = 0;
            v371 = 0;
            for ( j = *(_BYTE *)dword_7913E0; j >= (int)*(unsigned __int8 *)dword_79138C; --j )
            {
              if ( !v394[j] )
              {
                if ( v411 )
                {
                  --v411;
                }
                else
                {
                  ++v370;
                  v371 = j;
                }
              }
            }
            if ( v370 )
            {
              if ( v370 == 1 )
              {
                v373 = 1;
                v408[m] = *(_BYTE *)dword_7913C8;
                v403[m] = *(_BYTE *)dword_7913F4;
                if ( v371 == *(unsigned __int8 *)dword_7913E0 )
                {
                  v395[m] = *(_BYTE *)dword_7913BC;
                  v400[m] = *(_BYTE *)dword_791400;
                  v393[m] = *(_BYTE *)dword_79138C;
                }
                else if ( v371 == *(unsigned __int8 *)dword_7913BC )
                {
                  v395[m] = *(_BYTE *)dword_7913E0;
                  v400[m] = *(_BYTE *)dword_791400;
                  v393[m] = *(_BYTE *)dword_79138C;
                }
                else if ( v371 == *(unsigned __int8 *)dword_791400 )
                {
                  v395[m] = *(_BYTE *)dword_7913E0;
                  v400[m] = *(_BYTE *)dword_7913BC;
                  v393[m] = *(_BYTE *)dword_79138C;
                }
                else if ( v371 == *(unsigned __int8 *)dword_79138C )
                {
                  v395[m] = *(_BYTE *)dword_7913E0;
                  v400[m] = *(_BYTE *)dword_7913BC;
                  v393[m] = *(_BYTE *)dword_791400;
                }
                else
                {
                  sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 954);
                }
              }
            }
            else
            {
              v373 = 1;
              v408[m] = *(_BYTE *)dword_7913C8;
              v395[m] = *(_BYTE *)dword_7913E0;
              v400[m] = *(_BYTE *)dword_7913BC;
              v393[m] = *(_BYTE *)dword_791400;
              v403[m] = *(_BYTE *)dword_7913F4;
            }
          }
        }
      }
      if ( !v373 )
      {
        for ( m = 0; m < 4; ++m )
        {
          if ( a3 )
            v79 = v405 + v422;
          else
            v79 = 0;
          if ( v79 + *(&v416 + m) >= 5 )
          {
            v366 = 0;
            if ( m )
            {
              switch ( m )
              {
                case 1:
                  v366 = (_BYTE *)dword_790754;
                  break;
                case 2:
                  v366 = (_BYTE *)dword_790764;
                  break;
                case 3:
                  v366 = (_BYTE *)dword_790770;
                  break;
              }
            }
            else
            {
              v366 = (_BYTE *)dword_79076C;
            }
            if ( a3 )
              v411 = v422 + v405;
            else
              v411 = 0;
            v78 = sub_464130(&v287, (_BYTE *)dword_790760, v366);
            LOBYTE(v423) = 17;
            v288 = sub_484BA0(this, v78) == 0;
            LOBYTE(v423) = 8;
            ATL::CComCriticalSection::~CComCriticalSection(&v287);
            if ( v288 )
            {
              if ( !v411 )
                continue;
              --v411;
            }
            v77 = sub_464130(&v285, (_BYTE *)dword_790758, v366);
            LOBYTE(v423) = 18;
            v286 = sub_484BA0(this, v77) == 0;
            LOBYTE(v423) = 8;
            ATL::CComCriticalSection::~CComCriticalSection(&v285);
            if ( v286 )
            {
              if ( !v411 )
                continue;
              --v411;
            }
            v367 = 0;
            v368 = 0;
            for ( j = *(_BYTE *)dword_791404; j >= (int)*(unsigned __int8 *)dword_7913D8; --j )
            {
              if ( !v394[j] )
              {
                if ( v411 )
                {
                  --v411;
                }
                else
                {
                  ++v367;
                  v368 = j;
                }
              }
            }
            if ( v367 )
            {
              if ( v367 == 1 )
              {
                v372 = 1;
                v408[m] = *(_BYTE *)dword_7913F8;
                v403[m] = *(_BYTE *)dword_7913F0;
                if ( v368 == *(unsigned __int8 *)dword_791404 )
                {
                  v395[m] = *(_BYTE *)dword_7913A4;
                  v400[m] = *(_BYTE *)dword_791414;
                  v393[m] = *(_BYTE *)dword_7913D8;
                }
                else if ( v368 == *(unsigned __int8 *)dword_7913A4 )
                {
                  v395[m] = *(_BYTE *)dword_791404;
                  v400[m] = *(_BYTE *)dword_791414;
                  v393[m] = *(_BYTE *)dword_7913D8;
                }
                else if ( v368 == *(unsigned __int8 *)dword_791414 )
                {
                  v395[m] = *(_BYTE *)dword_791404;
                  v400[m] = *(_BYTE *)dword_7913A4;
                  v393[m] = *(_BYTE *)dword_7913D8;
                }
                else if ( v368 == *(unsigned __int8 *)dword_7913D8 )
                {
                  v395[m] = *(_BYTE *)dword_791404;
                  v400[m] = *(_BYTE *)dword_7913A4;
                  v393[m] = *(_BYTE *)dword_791414;
                }
                else
                {
                  sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 1045);
                }
              }
            }
            else
            {
              v372 = 1;
              v408[m] = *(_BYTE *)dword_7913F8;
              v395[m] = *(_BYTE *)dword_791404;
              v400[m] = *(_BYTE *)dword_7913A4;
              v393[m] = *(_BYTE *)dword_791414;
              v403[m] = *(_BYTE *)dword_7913F0;
            }
          }
        }
      }
      if ( v373 || v372 )
      {
        v399 = 0;
        for ( m = 1; m < 4; ++m )
        {
          v284[2] = v408[m];
          if ( !(unsigned __int8)sub_4A1FB0(dword_7913D0) )
          {
            v284[1] = v408[v399];
            if ( (unsigned __int8)sub_4A1FB0(dword_7913D0) )
            {
              v399 = m;
            }
            else
            {
              sub_4A20D0(v364);
              LOBYTE(v423) = 19;
              sub_4A20D0(v365);
              LOBYTE(v423) = 20;
              v284[0] = v403[m];
              v283 = v393[m];
              v282 = v400[m];
              v281 = v395[m];
              v280 = v408[m];
              sub_4A2100(dword_7913C4, &v280, &v281, &v282, &v283, v284);
              v279 = v403[v399];
              v278 = v393[v399];
              v277 = v400[v399];
              v276 = v395[v399];
              v275 = v408[v399];
              sub_4A2100(dword_7913C4, &v275, &v276, &v277, &v278, &v279);
              if ( (unsigned __int8)sub_4A2440(v365) )
                v399 = m;
              LOBYTE(v423) = 19;
              ATL::CComCriticalSection::~CComCriticalSection(v365);
              LOBYTE(v423) = 8;
              ATL::CComCriticalSection::~CComCriticalSection(v364);
            }
          }
        }
        v274 = v403[v399];
        v273 = v393[v399];
        v272 = v400[v399];
        v271 = v395[v399];
        v270 = v408[v399];
        sub_4A2100(dword_7913C4, &v270, &v271, &v272, &v273, &v274);
        goto LABEL_1093;
      }
    }
    if ( v409 && v415 )
    {
      if ( !a3 && v422 + v405 )
        sub_5E9F20((char)"bHighValue || ((shBugCount + shWildCount)==0)", "..\\Casino\\PokerHand.cpp", 1093);
      v362 = 0;
      v363 = *(_BYTE *)dword_7913D0;
      for ( m = 0; m < 4; ++m )
      {
        if ( v422 + v405 + *(&v416 + m) >= 5 )
        {
          v361 = 0;
          if ( m )
          {
            switch ( m )
            {
              case 1:
                v361 = dword_790754;
                break;
              case 2:
                v361 = dword_790764;
                break;
              case 3:
                v361 = dword_790770;
                break;
            }
          }
          else
          {
            v361 = dword_79076C;
          }
          for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_791404 - v425; --j )
          {
            v411 = v422 + v405;
            for ( k = 0; k < 5u; ++k )
            {
              v267[1] = j - k;
              v45 = (_BYTE *)v361;
              v27 = (_BYTE *)sub_4A1F30(v267);
              v76 = sub_464130(&v268, v27, v45);
              LOBYTE(v423) = 21;
              v269 = sub_484BA0(this, v76) == 0;
              LOBYTE(v423) = 8;
              ATL::CComCriticalSection::~CComCriticalSection(&v268);
              if ( v269 )
              {
                if ( !v411 )
                  break;
                --v411;
              }
            }
            if ( k == 5 )
            {
              v362 = 1;
              if ( j > (int)v363 )
                v363 = j;
              break;
            }
          }
        }
      }
      if ( v362 )
      {
        v266 = v363;
        sub_4A2100(dword_791398, &v266, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        goto LABEL_1093;
      }
    }
  }
  if ( a3 )
    v75 = v422;
  else
    v75 = 0;
  if ( v75 + v420 == 4 )
  {
    v398 = *(_BYTE *)dword_7913D0;
    if ( a3 || !v422 )
    {
      if ( *(this + 2) > 4 )
      {
        for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
        {
          if ( j != v407 )
          {
            if ( v394[j] > 0 )
            {
              v398 = j;
              break;
            }
            if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
            {
              --v405;
              v398 = j;
              break;
            }
          }
        }
      }
    }
    else
    {
      if ( v407 == *(unsigned __int8 *)dword_7913F0 - v425 )
        v28 = *(_BYTE *)dword_7913D8;
      else
        v28 = *(_BYTE *)dword_7913F0;
      v398 = v28 - v425;
    }
    if ( *(this + 2) >= 5 && v398 == *(unsigned __int8 *)dword_7913D0 )
      sub_5E9F20((char)"(shSize < 5) || (ucKicker1 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 1174);
    v265 = v398;
    v264 = v407;
    sub_4A2100(dword_791394, &v264, &v265, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    goto LABEL_1093;
  }
  if ( a3 )
    v74 = v422;
  else
    v74 = 0;
  if ( v74 + v420 == 3 && v406 >= 2 )
  {
    v360 = *(_BYTE *)dword_7913D0;
    if ( v406 <= 2 )
    {
      v360 = v402;
    }
    else
    {
      for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
      {
        v359 = v394[j];
        if ( j == *(unsigned __int8 *)dword_7913C8 )
        {
          v359 += v405;
        }
        else if ( j == *(unsigned __int8 *)dword_7913B4 )
        {
          v359 += v405;
        }
        if ( v359 >= 2 && j != v407 )
        {
          v360 = j;
          break;
        }
      }
    }
    if ( v360 <= (int)*(unsigned __int8 *)dword_7913D0 )
      sub_5E9F20((char)"ucFullHouseMinorIndex>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1207);
    v263 = v360;
    v262 = v407;
    sub_4A2100(dword_7913D4, &v262, &v263, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    goto LABEL_1093;
  }
  v399 = 0;
  if ( !v409 && !v421 )
    goto LABEL_637;
  for ( m = 0; m < 4; ++m )
  {
    v408[m] = *(_BYTE *)dword_7913D0;
    v395[m] = *(_BYTE *)dword_7913D0;
    v400[m] = *(_BYTE *)dword_7913D0;
    v393[m] = *(_BYTE *)dword_7913D0;
    v403[m] = *(_BYTE *)dword_7913D0;
  }
  for ( m = 0; m < 4; ++m )
  {
    if ( a3 )
      v411 = v422 + v405;
    else
      v411 = 0;
    if ( v411 + *(&v416 + m) >= 5 || v421 && v411 + *(&v416 + m) == 4 )
    {
      v358 = 0;
      if ( m )
      {
        switch ( m )
        {
          case 1:
            v358 = dword_790754;
            break;
          case 2:
            v358 = dword_790764;
            break;
          case 3:
            v358 = dword_790770;
            break;
        }
      }
      else
      {
        v358 = dword_79076C;
      }
      for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - v425; --j )
      {
        v259[1] = j;
        v46 = (_BYTE *)v358;
        v29 = (_BYTE *)sub_4A1F30(v259);
        v73 = sub_464130(&v260, v29, v46);
        LOBYTE(v423) = 22;
        v261 = sub_484BA0(this, v73);
        LOBYTE(v423) = 8;
        ATL::CComCriticalSection::~CComCriticalSection(&v260);
        if ( v261 )
        {
          v408[m] = j;
          break;
        }
        if ( v411 )
        {
          --v411;
          v408[m] = j;
          break;
        }
      }
      for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - v425; --j )
      {
        if ( j != (unsigned __int8)v408[m] )
        {
          v256[1] = j;
          v47 = (_BYTE *)v358;
          v30 = (_BYTE *)sub_4A1F30(v256);
          v72 = sub_464130(&v257, v30, v47);
          LOBYTE(v423) = 23;
          v258 = sub_484BA0(this, v72);
          LOBYTE(v423) = 8;
          ATL::CComCriticalSection::~CComCriticalSection(&v257);
          if ( v258 )
          {
            v395[m] = j;
            break;
          }
          if ( v411 )
          {
            --v411;
            v395[m] = j;
            break;
          }
        }
      }
      for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - v425; --j )
      {
        if ( j != (unsigned __int8)v408[m] && j != (unsigned __int8)v395[m] )
        {
          v253[1] = j;
          v48 = (_BYTE *)v358;
          v31 = (_BYTE *)sub_4A1F30(v253);
          v71 = sub_464130(&v254, v31, v48);
          LOBYTE(v423) = 24;
          v255 = sub_484BA0(this, v71);
          LOBYTE(v423) = 8;
          ATL::CComCriticalSection::~CComCriticalSection(&v254);
          if ( v255 )
          {
            v400[m] = j;
            break;
          }
          if ( v411 )
          {
            --v411;
            v400[m] = j;
            break;
          }
        }
      }
      for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - v425; --j )
      {
        if ( j != (unsigned __int8)v408[m] && j != (unsigned __int8)v395[m] && j != (unsigned __int8)v400[m] )
        {
          v250[1] = j;
          v49 = (_BYTE *)v358;
          v32 = (_BYTE *)sub_4A1F30(v250);
          v70 = sub_464130(&v251, v32, v49);
          LOBYTE(v423) = 25;
          v252 = sub_484BA0(this, v70);
          LOBYTE(v423) = 8;
          ATL::CComCriticalSection::~CComCriticalSection(&v251);
          if ( v252 )
          {
            v393[m] = j;
            break;
          }
          if ( v411 )
          {
            --v411;
            v393[m] = j;
            break;
          }
        }
      }
      if ( (unsigned __int8)v408[m] <= (int)*(unsigned __int8 *)dword_7913D0 )
        sub_5E9F20((char)"ucFlushStrength[shSuitIndex]>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1312);
      if ( (unsigned __int8)v395[m] <= (int)*(unsigned __int8 *)dword_7913D0 )
        sub_5E9F20((char)"ucFlushKicker1[shSuitIndex]>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1313);
      if ( (unsigned __int8)v400[m] <= (int)*(unsigned __int8 *)dword_7913D0 )
        sub_5E9F20((char)"ucFlushKicker2[shSuitIndex]>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1314);
      if ( (unsigned __int8)v393[m] <= (int)*(unsigned __int8 *)dword_7913D0 )
        sub_5E9F20((char)"ucFlushKicker3[shSuitIndex]>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1315);
      if ( v409 )
      {
        for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - v425; --j )
        {
          v68 = 0;
          if ( j != (unsigned __int8)v408[m]
            && j != (unsigned __int8)v395[m]
            && j != (unsigned __int8)v400[m]
            && j != (unsigned __int8)v393[m] )
          {
            v247[1] = j;
            v50 = (_BYTE *)v358;
            v33 = (_BYTE *)sub_4A1F30(v247);
            v69 = sub_464130(&v248, v33, v50);
            LOBYTE(v423) = 26;
            v94 |= 2u;
            if ( sub_484BA0(this, v69) )
              v68 = 1;
          }
          v249 = v68;
          v423 = 8;
          if ( (v94 & 2) != 0 )
          {
            v94 &= ~2u;
            ATL::CComCriticalSection::~CComCriticalSection(&v248);
          }
          if ( v249 )
          {
            v403[m] = j;
            break;
          }
        }
        if ( (unsigned __int8)v403[m] <= (int)*(unsigned __int8 *)dword_7913D0 )
          sub_5E9F20((char)"ucFlushKicker4[shSuitIndex]>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1332);
      }
      else if ( *(this + 2) > 4 && v421 )
      {
        for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - v425; --j )
        {
          v66 = 0;
          if ( m )
          {
            v244[1] = j;
            v51 = (_BYTE *)dword_79076C;
            v34 = (_BYTE *)sub_4A1F30(v244);
            v67 = sub_464130(&v245, v34, v51);
            LOBYTE(v423) = 27;
            v94 |= 4u;
            if ( sub_484BA0(this, v67) )
              v66 = 1;
          }
          v246 = v66;
          v423 = 8;
          if ( (v94 & 4) != 0 )
          {
            v94 &= ~4u;
            ATL::CComCriticalSection::~CComCriticalSection(&v245);
          }
          if ( v246 )
          {
            v403[m] = j;
            break;
          }
          v64 = 0;
          if ( m != 1 )
          {
            v241[1] = j;
            v52 = (_BYTE *)dword_790754;
            v35 = (_BYTE *)sub_4A1F30(v241);
            v65 = sub_464130(&v242, v35, v52);
            LOBYTE(v423) = 28;
            v94 |= 8u;
            if ( sub_484BA0(this, v65) )
              v64 = 1;
          }
          v243 = v64;
          v423 = 8;
          if ( (v94 & 8) != 0 )
          {
            v94 &= ~8u;
            ATL::CComCriticalSection::~CComCriticalSection(&v242);
          }
          if ( v243 )
          {
            v403[m] = j;
            break;
          }
          v62 = 0;
          if ( m != 2 )
          {
            v238[1] = j;
            v53 = (_BYTE *)dword_790764;
            v36 = (_BYTE *)sub_4A1F30(v238);
            v63 = sub_464130(&v239, v36, v53);
            LOBYTE(v423) = 29;
            v94 |= 0x10u;
            if ( sub_484BA0(this, v63) )
              v62 = 1;
          }
          v240 = v62;
          v423 = 8;
          if ( (v94 & 0x10) != 0 )
          {
            v94 &= ~0x10u;
            ATL::CComCriticalSection::~CComCriticalSection(&v239);
          }
          if ( v240 )
          {
            v403[m] = j;
            break;
          }
          v60 = 0;
          if ( m != 3 )
          {
            v235[1] = j;
            v54 = (_BYTE *)dword_790770;
            v37 = (_BYTE *)sub_4A1F30(v235);
            v61 = sub_464130(&v236, v37, v54);
            LOBYTE(v423) = 30;
            v94 |= 0x20u;
            if ( sub_484BA0(this, v61) )
              v60 = 1;
          }
          v237 = v60;
          v423 = 8;
          if ( (v94 & 0x20) != 0 )
          {
            v94 &= ~0x20u;
            ATL::CComCriticalSection::~CComCriticalSection(&v236);
          }
          if ( v237 )
          {
            v403[m] = j;
            break;
          }
        }
        if ( !a3 && v422 )
        {
          if ( v403[m] != *(_BYTE *)dword_7913D0 )
            sub_5E9F20((char)"ucFlushKicker4[shSuitIndex] == EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1361);
          v357[7] = 0;
          for ( v403[m] = *(_BYTE *)dword_7913F0 - v425;
                v403[m] == v408[m]
             || v403[m] == v395[m]
             || v403[m] == v400[m]
             || v403[m] == v393[m]
             || a6
             && (unsigned __int8)v408[m] == (unsigned __int8)v395[m] + 1
             && (unsigned __int8)v408[m] == (unsigned __int8)v400[m] + 2
             && (unsigned __int8)v408[m] == (unsigned __int8)v393[m] + 3
             && (unsigned __int8)v408[m] == (unsigned __int8)v403[m] + 4
             || a6
             && (unsigned __int8)v408[m] == (unsigned __int8)v395[m] + 1
             && (unsigned __int8)v408[m] == (unsigned __int8)v400[m] + 2
             && (unsigned __int8)v408[m] == (unsigned __int8)v393[m] + 4
             && (unsigned __int8)v408[m] == (unsigned __int8)v403[m] + 3
             || a6
             && (unsigned __int8)v408[m] == (unsigned __int8)v395[m] + 1
             && (unsigned __int8)v408[m] == (unsigned __int8)v400[m] + 3
             && (unsigned __int8)v408[m] == (unsigned __int8)v393[m] + 4
             && (unsigned __int8)v408[m] == (unsigned __int8)v403[m] + 2
             || a6
             && (unsigned __int8)v408[m] == (unsigned __int8)v395[m] + 2
             && (unsigned __int8)v408[m] == (unsigned __int8)v400[m] + 3
             && (unsigned __int8)v408[m] == (unsigned __int8)v393[m] + 4
             && (unsigned __int8)v408[m] == (unsigned __int8)v403[m] + 1
             || a6
             && (unsigned __int8)v408[m] == (unsigned __int8)v395[m] + 1
             && (unsigned __int8)v408[m] == (unsigned __int8)v400[m] + 2
             && (unsigned __int8)v408[m] == (unsigned __int8)v393[m] + 3
             && (unsigned __int8)v408[m] == (unsigned __int8)v403[m] - 1
             || a8
             && (unsigned __int8)v408[m] <= (int)*(unsigned __int8 *)dword_791410
             && (unsigned __int8)v393[m] >= (int)*(unsigned __int8 *)dword_7913D8
             && (unsigned __int8)v403[m] <= (int)*(unsigned __int8 *)dword_791410
             && (unsigned __int8)v403[m] >= (int)*(unsigned __int8 *)dword_7913D8
             && (v408[m] == *(_BYTE *)dword_791410 || v403[m] == *(_BYTE *)dword_791410)
             && (v393[m] == *(_BYTE *)dword_7913D8 || v403[m] == *(_BYTE *)dword_7913D8)
             || a9
             && (unsigned __int8)v408[m] <= (int)*(unsigned __int8 *)dword_7913F8
             && (unsigned __int8)v393[m] >= (int)*(unsigned __int8 *)dword_7913F0
             && (unsigned __int8)v403[m] <= (int)*(unsigned __int8 *)dword_7913F8
             && (unsigned __int8)v403[m] >= (int)*(unsigned __int8 *)dword_7913F0
             && (v408[m] == *(_BYTE *)dword_7913F8 || v403[m] == *(_BYTE *)dword_7913F8)
             && (v393[m] == *(_BYTE *)dword_7913F0 || v403[m] == *(_BYTE *)dword_7913F0);
                ++v403[m] )
          {
            ;
          }
        }
        if ( !a3 && v405 )
        {
          if ( v424 )
            v59 = *(_BYTE *)dword_7913C8;
          else
            v59 = *(_BYTE *)dword_7913B4;
          v403[m] = v59;
          break;
        }
        if ( (unsigned __int8)v403[m] <= (int)*(unsigned __int8 *)dword_7913D0 )
          sub_5E9F20((char)"ucFlushKicker4[shSuitIndex]>EmptyValue.ucValue", "..\\Casino\\PokerHand.cpp", 1419);
      }
    }
  }
  for ( m = 1; m < 4; ++m )
  {
    v234[2] = v408[m];
    if ( !(unsigned __int8)sub_4A1FB0(dword_7913D0) )
    {
      v234[1] = v408[v399];
      if ( (unsigned __int8)sub_4A1FB0(dword_7913D0) )
      {
        v399 = m;
      }
      else
      {
        sub_4A20D0(v356);
        LOBYTE(v423) = 31;
        sub_4A20D0(v357);
        LOBYTE(v423) = 32;
        if ( v421 )
          v58 = dword_79139C;
        else
          v58 = dword_7913A0;
        v229 = v58;
        v234[0] = v403[m];
        v233 = v393[m];
        v232 = v400[m];
        v231 = v395[m];
        v230 = v408[m];
        sub_4A2100(v58, &v230, &v231, &v232, &v233, v234);
        if ( v421 )
          v57 = dword_79139C;
        else
          v57 = dword_7913A0;
        v223 = v57;
        v228 = v403[v399];
        v227 = v393[v399];
        v226 = v400[v399];
        v225 = v395[v399];
        v224 = v408[v399];
        sub_4A2100(v57, &v224, &v225, &v226, &v227, &v228);
        if ( (unsigned __int8)sub_4A2440(v357) )
          v399 = m;
        LOBYTE(v423) = 31;
        ATL::CComCriticalSection::~CComCriticalSection(v357);
        LOBYTE(v423) = 8;
        ATL::CComCriticalSection::~CComCriticalSection(v356);
      }
    }
  }
  if ( !v409 )
  {
LABEL_637:
    if ( a8 && *(this + 2) >= 5 )
    {
      v355 = 1;
      if ( a3 )
        v411 = v405 + v422;
      else
        v411 = 0;
      if ( !v394[*(unsigned __int8 *)dword_7913E0] )
      {
        if ( v411 )
          --v411;
        else
          v355 = 0;
      }
      if ( !v394[*(unsigned __int8 *)dword_791410] )
      {
        if ( v411 )
          --v411;
        else
          v355 = 0;
      }
      if ( v355 )
      {
        v353 = 0;
        v354 = 0;
        for ( j = *(_BYTE *)dword_7913BC; j >= (int)*(unsigned __int8 *)dword_7913F4; --j )
        {
          if ( !v394[j] )
          {
            if ( v411 )
            {
              --v411;
            }
            else
            {
              ++v353;
              v354 = j;
            }
          }
        }
        if ( !v353 )
        {
          v217 = *(_BYTE *)dword_791410;
          v216 = *(_BYTE *)dword_79138C;
          v215 = *(_BYTE *)dword_791400;
          v214 = *(_BYTE *)dword_7913BC;
          v213 = *(_BYTE *)dword_7913E0;
          sub_4A2100(dword_791384, &v213, &v214, &v215, &v216, &v217);
          goto LABEL_1093;
        }
        if ( v353 == 1 )
        {
          if ( v354 == *(unsigned __int8 *)dword_7913BC )
          {
            v212 = *(_BYTE *)dword_791410;
            v211 = *(_BYTE *)dword_7913F4;
            v210 = *(_BYTE *)dword_79138C;
            v209 = *(_BYTE *)dword_791400;
            v208 = *(_BYTE *)dword_7913E0;
            sub_4A2100(dword_791384, &v208, &v209, &v210, &v211, &v212);
            goto LABEL_1093;
          }
          if ( v354 == *(unsigned __int8 *)dword_791400 )
          {
            v207 = *(_BYTE *)dword_791410;
            v206 = *(_BYTE *)dword_7913F4;
            v205 = *(_BYTE *)dword_79138C;
            v204 = *(_BYTE *)dword_7913BC;
            v203 = *(_BYTE *)dword_7913E0;
            sub_4A2100(dword_791384, &v203, &v204, &v205, &v206, &v207);
            goto LABEL_1093;
          }
          if ( v354 == *(unsigned __int8 *)dword_79138C )
          {
            v202 = *(_BYTE *)dword_791410;
            v201 = *(_BYTE *)dword_7913F4;
            v200 = *(_BYTE *)dword_791400;
            v199 = *(_BYTE *)dword_7913BC;
            v198 = *(_BYTE *)dword_7913E0;
            sub_4A2100(dword_791384, &v198, &v199, &v200, &v201, &v202);
            goto LABEL_1093;
          }
          if ( v354 == *(unsigned __int8 *)dword_7913F4 )
          {
            v197 = *(_BYTE *)dword_791410;
            v196 = *(_BYTE *)dword_79138C;
            v195 = *(_BYTE *)dword_791400;
            v194 = *(_BYTE *)dword_7913BC;
            v193 = *(_BYTE *)dword_7913E0;
            sub_4A2100(dword_791384, &v193, &v194, &v195, &v196, &v197);
            goto LABEL_1093;
          }
          sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 1541);
        }
      }
      v355 = 1;
      if ( a3 )
        v411 = v405 + v422;
      else
        v411 = 0;
      if ( !v394[*(unsigned __int8 *)dword_791410] )
      {
        if ( v411 )
          --v411;
        else
          v355 = 0;
      }
      if ( !v394[*(unsigned __int8 *)dword_7913D8] )
      {
        if ( v411 )
          --v411;
        else
          v355 = 0;
      }
      if ( v355 )
      {
        v351 = 0;
        v352 = 0;
        for ( j = *(_BYTE *)dword_7913F8; j >= (int)*(unsigned __int8 *)dword_791414; --j )
        {
          if ( !v394[j] )
          {
            if ( v411 )
            {
              --v411;
            }
            else
            {
              ++v351;
              v352 = j;
            }
          }
        }
        if ( !v351 )
        {
          v192 = *(_BYTE *)dword_7913D8;
          v191 = *(_BYTE *)dword_7913A4;
          v190 = *(_BYTE *)dword_791404;
          v189 = *(_BYTE *)dword_7913F8;
          v188 = *(_BYTE *)dword_791410;
          sub_4A2100(dword_791384, &v188, &v189, &v190, &v191, &v192);
          goto LABEL_1093;
        }
        if ( v351 == 1 )
        {
          if ( v352 == *(unsigned __int8 *)dword_7913F8 )
          {
            v187 = *(_BYTE *)dword_7913D8;
            v186 = *(_BYTE *)dword_791414;
            v185 = *(_BYTE *)dword_7913A4;
            v184 = *(_BYTE *)dword_791404;
            v183 = *(_BYTE *)dword_791410;
            sub_4A2100(dword_791384, &v183, &v184, &v185, &v186, &v187);
            goto LABEL_1093;
          }
          if ( v352 == *(unsigned __int8 *)dword_791404 )
          {
            v182 = *(_BYTE *)dword_7913D8;
            v181 = *(_BYTE *)dword_791414;
            v180 = *(_BYTE *)dword_7913A4;
            v179 = *(_BYTE *)dword_7913F8;
            v178 = *(_BYTE *)dword_791410;
            sub_4A2100(dword_791384, &v178, &v179, &v180, &v181, &v182);
            goto LABEL_1093;
          }
          if ( v352 == *(unsigned __int8 *)dword_7913A4 )
          {
            v177 = *(_BYTE *)dword_7913D8;
            v176 = *(_BYTE *)dword_791414;
            v175 = *(_BYTE *)dword_791404;
            v174 = *(_BYTE *)dword_7913F8;
            v173 = *(_BYTE *)dword_791410;
            sub_4A2100(dword_791384, &v173, &v174, &v175, &v176, &v177);
            goto LABEL_1093;
          }
          if ( v352 == *(unsigned __int8 *)dword_791414 )
          {
            v172 = *(_BYTE *)dword_7913D8;
            v171 = *(_BYTE *)dword_7913A4;
            v170 = *(_BYTE *)dword_791404;
            v169 = *(_BYTE *)dword_7913F8;
            v168 = *(_BYTE *)dword_791410;
            sub_4A2100(dword_791384, &v168, &v169, &v170, &v171, &v172);
            goto LABEL_1093;
          }
          sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 1620);
        }
      }
    }
    if ( a9 && *(this + 2) >= 5 )
    {
      v350 = 1;
      if ( a3 )
        v411 = v405 + v422;
      else
        v411 = 0;
      if ( !v394[*(unsigned __int8 *)dword_7913C8] )
      {
        if ( v411 && v424 )
        {
          --v411;
        }
        else if ( !v405 || !v424 )
        {
          v350 = 0;
        }
      }
      if ( !v394[*(unsigned __int8 *)dword_7913F4] )
      {
        if ( v411 )
          --v411;
        else
          v350 = 0;
      }
      if ( v350 )
      {
        v348 = 0;
        v349 = 0;
        for ( j = *(_BYTE *)dword_7913E0; j >= (int)*(unsigned __int8 *)dword_79138C; --j )
        {
          if ( !v394[j] )
          {
            if ( v411 )
            {
              --v411;
            }
            else
            {
              ++v348;
              v349 = j;
            }
          }
        }
        if ( !v348 )
        {
          v167 = *(_BYTE *)dword_7913F4;
          v166 = *(_BYTE *)dword_791400;
          v165 = *(_BYTE *)dword_7913BC;
          v164 = *(_BYTE *)dword_7913E0;
          v163 = *(_BYTE *)dword_7913C8;
          sub_4A2100(dword_7913E4, &v163, &v164, &v165, &v166, &v167);
          goto LABEL_1093;
        }
        if ( v348 == 1 )
        {
          if ( v349 == *(unsigned __int8 *)dword_7913E0 )
          {
            v162 = *(_BYTE *)dword_7913F4;
            v161 = *(_BYTE *)dword_79138C;
            v160 = *(_BYTE *)dword_791400;
            v159 = *(_BYTE *)dword_7913BC;
            v158 = *(_BYTE *)dword_7913C8;
            sub_4A2100(dword_7913E4, &v158, &v159, &v160, &v161, &v162);
            goto LABEL_1093;
          }
          if ( v349 == *(unsigned __int8 *)dword_7913BC )
          {
            v157 = *(_BYTE *)dword_7913F4;
            v156 = *(_BYTE *)dword_79138C;
            v155 = *(_BYTE *)dword_791400;
            v154 = *(_BYTE *)dword_7913E0;
            v153 = *(_BYTE *)dword_7913C8;
            sub_4A2100(dword_7913E4, &v153, &v154, &v155, &v156, &v157);
            goto LABEL_1093;
          }
          if ( v349 == *(unsigned __int8 *)dword_791400 )
          {
            v152 = *(_BYTE *)dword_7913F4;
            v151 = *(_BYTE *)dword_79138C;
            v150 = *(_BYTE *)dword_7913BC;
            v149 = *(_BYTE *)dword_7913E0;
            v148 = *(_BYTE *)dword_7913C8;
            sub_4A2100(dword_7913E4, &v148, &v149, &v150, &v151, &v152);
            goto LABEL_1093;
          }
          if ( v349 == *(unsigned __int8 *)dword_79138C )
          {
            v147 = *(_BYTE *)dword_7913F4;
            v146 = *(_BYTE *)dword_791400;
            v145 = *(_BYTE *)dword_7913BC;
            v144 = *(_BYTE *)dword_7913E0;
            v143 = *(_BYTE *)dword_7913C8;
            sub_4A2100(dword_7913E4, &v143, &v144, &v145, &v146, &v147);
            goto LABEL_1093;
          }
          sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 1706);
        }
      }
      v350 = 1;
      if ( a3 )
        v411 = v405 + v422;
      else
        v411 = 0;
      if ( !v394[*(unsigned __int8 *)dword_7913F8] )
      {
        if ( v411 )
          --v411;
        else
          v350 = 0;
      }
      if ( !v394[*(unsigned __int8 *)dword_7913F0] )
      {
        if ( v411 )
          --v411;
        else
          v350 = 0;
      }
      if ( v350 )
      {
        v346 = 0;
        v347 = 0;
        for ( j = *(_BYTE *)dword_791404; j >= (int)*(unsigned __int8 *)dword_7913D8; --j )
        {
          if ( !v394[j] )
          {
            if ( v411 )
            {
              --v411;
            }
            else
            {
              ++v346;
              v347 = j;
            }
          }
        }
        if ( !v346 )
        {
          v142 = *(_BYTE *)dword_7913F0;
          v141 = *(_BYTE *)dword_791414;
          v140 = *(_BYTE *)dword_7913A4;
          v139 = *(_BYTE *)dword_791404;
          v138 = *(_BYTE *)dword_7913F8;
          sub_4A2100(dword_7913E4, &v138, &v139, &v140, &v141, &v142);
          goto LABEL_1093;
        }
        if ( v346 == 1 )
        {
          if ( v347 == *(unsigned __int8 *)dword_791404 )
          {
            v137 = *(_BYTE *)dword_7913F0;
            v136 = *(_BYTE *)dword_7913D8;
            v135 = *(_BYTE *)dword_791414;
            v134 = *(_BYTE *)dword_7913A4;
            v133 = *(_BYTE *)dword_7913F8;
            sub_4A2100(dword_7913E4, &v133, &v134, &v135, &v136, &v137);
            goto LABEL_1093;
          }
          if ( v347 == *(unsigned __int8 *)dword_7913A4 )
          {
            v132 = *(_BYTE *)dword_7913F0;
            v131 = *(_BYTE *)dword_7913D8;
            v130 = *(_BYTE *)dword_791414;
            v129 = *(_BYTE *)dword_791404;
            v128 = *(_BYTE *)dword_7913F8;
            sub_4A2100(dword_7913E4, &v128, &v129, &v130, &v131, &v132);
            goto LABEL_1093;
          }
          if ( v347 == *(unsigned __int8 *)dword_791414 )
          {
            v127 = *(_BYTE *)dword_7913F0;
            v126 = *(_BYTE *)dword_7913D8;
            v125 = *(_BYTE *)dword_7913A4;
            v124 = *(_BYTE *)dword_791404;
            v123 = *(_BYTE *)dword_7913F8;
            sub_4A2100(dword_7913E4, &v123, &v124, &v125, &v126, &v127);
            goto LABEL_1093;
          }
          if ( v347 == *(unsigned __int8 *)dword_7913D8 )
          {
            v122 = *(_BYTE *)dword_7913F0;
            v121 = *(_BYTE *)dword_791414;
            v120 = *(_BYTE *)dword_7913A4;
            v119 = *(_BYTE *)dword_791404;
            v118 = *(_BYTE *)dword_7913F8;
            sub_4A2100(dword_7913E4, &v118, &v119, &v120, &v121, &v122);
            goto LABEL_1093;
          }
          sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 1785);
        }
      }
    }
    if ( v415 )
    {
      v117 = v392;
      sub_4A2100(dword_79140C, &v117, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    }
    else
    {
      if ( a3 )
        v56 = v422;
      else
        v56 = 0;
      if ( v56 + v420 == 3 )
      {
        v398 = *(_BYTE *)dword_7913D0;
        if ( *(this + 2) > 3 )
        {
          for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
          {
            if ( j != v407 )
            {
              if ( v394[j] > 0 )
              {
                v398 = j;
                break;
              }
              if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
              {
                --v405;
                v398 = j;
                break;
              }
            }
          }
        }
        v396 = *(_BYTE *)dword_7913D0;
        if ( *(this + 2) > 4 )
        {
          for ( j = v398; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
          {
            if ( j != v407 && j != v398 )
            {
              if ( v394[j] > 0 )
              {
                v396 = j;
                break;
              }
              if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
              {
                --v405;
                v396 = j;
                break;
              }
            }
          }
        }
        if ( !a3 && v422 )
        {
          v345 = *(_BYTE *)dword_7913F0 - v425;
          if ( v398 == *(unsigned __int8 *)dword_7913D0 )
          {
            while ( v345 == v407 )
              ++v345;
            v398 = v345++;
            --v422;
          }
          if ( v422 && v396 == *(unsigned __int8 *)dword_7913D0 )
          {
            while ( v345 == v407 || v345 == v398 )
              ++v345;
            if ( v345 <= (int)v398 )
            {
              v396 = v345;
            }
            else
            {
              v396 = v398;
              v398 = v345;
            }
            ++v345;
            --v422;
          }
        }
        if ( *(this + 2) >= 5 && v396 == *(unsigned __int8 *)dword_7913D0 )
          sub_5E9F20((char)"(shSize < 5) || (ucKicker2 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 1869);
        if ( *(this + 2) >= 4 && v398 == *(unsigned __int8 *)dword_7913D0 )
          sub_5E9F20((char)"(shSize < 4) || (ucKicker1 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 1870);
        v116 = v396;
        v115 = v398;
        v114 = v407;
        sub_4A2100(dword_791418, &v114, &v115, &v116, &byte_7913FF, &byte_7913FF);
      }
      else if ( v420 == 2 && v406 == 2 )
      {
        v398 = *(_BYTE *)dword_7913D0;
        if ( *(this + 2) > 4 )
        {
          for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
          {
            if ( j != v407 && j != v402 )
            {
              if ( v394[j] > 0 )
              {
                v398 = j;
                break;
              }
              if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
              {
                --v405;
                v398 = j;
                break;
              }
            }
          }
          if ( v398 == *(unsigned __int8 *)dword_7913D0 && !a3 && v422 )
          {
            if ( v407 == *(unsigned __int8 *)dword_7913F0 - v425 || v402 == *(unsigned __int8 *)dword_7913F0 - v425 )
            {
              if ( v407 == *(unsigned __int8 *)dword_7913D8 - v425 || v402 == *(unsigned __int8 *)dword_7913D8 - v425 )
                v398 = *(_BYTE *)dword_791414 - v425;
              else
                v398 = *(_BYTE *)dword_7913D8 - v425;
            }
            else
            {
              v398 = *(_BYTE *)dword_7913F0 - v425;
            }
          }
        }
        if ( *(this + 2) >= 5 && v398 == *(unsigned __int8 *)dword_7913D0 )
          sub_5E9F20((char)"(shSize < 5) || (ucKicker1 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 1914);
        v113 = v398;
        v112 = v402;
        v111 = v407;
        sub_4A2100(dword_791380, &v111, &v112, &v113, &byte_7913FF, &byte_7913FF);
      }
      else if ( v421 )
      {
        if ( *(this + 2) >= 5 && v403[v399] == *(_BYTE *)dword_7913D0 )
          sub_5E9F20(
            (char)"(shSize < 5) || (ucFlushKicker4[shBestFlushSuitIndex] != EmptyValue.ucValue)",
            "..\\Casino\\PokerHand.cpp",
            1925);
        v110 = v403[v399];
        v109 = v393[v399];
        v108 = v400[v399];
        v107 = v395[v399];
        v106 = v408[v399];
        sub_4A2100(dword_79139C, &v106, &v107, &v108, &v109, &v110);
      }
      else
      {
        if ( a3 )
          v55 = v422;
        else
          v55 = 0;
        if ( v55 + v420 == 2 )
        {
          v398 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 2 )
          {
            for ( j = v424 + *(_BYTE *)dword_7913E0; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 )
              {
                if ( v394[j] > 0 )
                {
                  v398 = j;
                  break;
                }
                if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
                {
                  --v405;
                  v398 = j;
                  break;
                }
              }
            }
          }
          v396 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 3 )
          {
            for ( j = v398; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 && j != v398 )
              {
                if ( v394[j] > 0 )
                {
                  v396 = j;
                  break;
                }
                if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
                {
                  --v405;
                  v396 = j;
                  break;
                }
              }
            }
          }
          v410 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 4 )
          {
            for ( j = v396; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 && j != v398 && j != v396 )
              {
                if ( v394[j] > 0 )
                {
                  v410 = j;
                  break;
                }
                if ( v405 && (j == *(unsigned __int8 *)dword_7913C8 || j == *(unsigned __int8 *)dword_7913B4) )
                {
                  --v405;
                  v410 = j;
                  break;
                }
              }
            }
          }
          if ( !a3 && v422 )
          {
            v344 = *(_BYTE *)dword_7913F0 - v425;
            if ( v398 == *(unsigned __int8 *)dword_7913D0 )
            {
              while ( v344 == v407 )
                ++v344;
              v398 = v344++;
              --v422;
            }
            if ( v422 && v396 == *(unsigned __int8 *)dword_7913D0 )
            {
              while ( v344 == v407 || v344 == v398 )
                ++v344;
              if ( v344 <= (int)v398 )
              {
                v396 = v344;
              }
              else
              {
                v396 = v398;
                v398 = v344;
              }
              ++v344;
              --v422;
            }
            if ( v422 && v410 == *(unsigned __int8 *)dword_7913D0 )
            {
              while ( v344 == v407 || v344 == v398 || v344 == v396 )
                ++v344;
              if ( v344 <= (int)v398 )
              {
                if ( v344 <= (int)v396 )
                {
                  v410 = v344;
                }
                else
                {
                  v410 = v396;
                  v396 = v344;
                }
              }
              else
              {
                v410 = v396;
                v396 = v398;
                v398 = v344;
              }
              ++v344;
              --v422;
            }
          }
          if ( *(this + 2) >= 5 && v410 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 5) || (ucKicker3 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2050);
          if ( *(this + 2) >= 4 && v396 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 4) || (ucKicker2 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2051);
          if ( *(this + 2) >= 3 && v398 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 3) || (ucKicker1 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2052);
          v105 = v410;
          v104 = v396;
          v103 = v398;
          v102 = v407;
          sub_4A2100(dword_7913B0, &v102, &v103, &v104, &v105, &byte_7913FF);
        }
        else
        {
          v398 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 1 )
          {
            for ( j = v407; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 )
              {
                if ( v394[j] > 0 )
                {
                  v398 = j;
                  break;
                }
                if ( v405 && j == *(unsigned __int8 *)dword_7913B4 )
                {
                  --v405;
                  v398 = j;
                  break;
                }
              }
            }
          }
          v396 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 2 )
          {
            for ( j = v398; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 && j != v398 )
              {
                if ( v394[j] > 0 )
                {
                  v396 = j;
                  break;
                }
                if ( v405 && j == *(unsigned __int8 *)dword_7913B4 )
                {
                  --v405;
                  v396 = j;
                  break;
                }
              }
            }
          }
          v410 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 3 )
          {
            for ( j = v396; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 && j != v398 && j != v396 )
              {
                if ( v394[j] > 0 )
                {
                  v410 = j;
                  break;
                }
                if ( v405 && j == *(unsigned __int8 *)dword_7913B4 )
                {
                  --v405;
                  v410 = j;
                  break;
                }
              }
            }
          }
          v404 = *(_BYTE *)dword_7913D0;
          if ( *(this + 2) > 4 )
          {
            for ( j = v410; j >= *(unsigned __int8 *)dword_7913F0 - (1 - v424); --j )
            {
              if ( j != v407 && j != v398 && j != v396 && j != v410 )
              {
                if ( v394[j] > 0 )
                {
                  v404 = j;
                  break;
                }
                if ( v405 && j == *(unsigned __int8 *)dword_7913B4 )
                {
                  --v405;
                  v404 = j;
                  break;
                }
              }
            }
          }
          if ( !a3 && v422 )
          {
            v101 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
            v343 = v101;
            for ( j = *(_BYTE *)dword_7913D0; j <= (int)*(unsigned __int8 *)dword_7913C8; ++j )
              v343[j] = 0;
            ++v343[v407];
            ++v343[v398];
            ++v343[v396];
            ++v343[v410];
            ++v343[v404];
            mm = *(_BYTE *)dword_7913F0 - v425;
            while ( v422 )
            {
              while ( v343[mm] > 0 )
                ++mm;
              v343[mm] = 2;
              --v422;
            }
            if ( *(this + 2) == 5 && (a6 || a9 && !v425) )
            {
              v341 = *(_BYTE *)dword_7913F0 - v425;
              for ( n = v424 + *(_BYTE *)dword_7913E0; !v343[n]; --n )
                ;
              if ( a6 )
              {
                while ( n == v341 + 4
                     || a8 && n == *(unsigned __int8 *)dword_791410 && v341 == *(unsigned __int8 *)dword_7913D8
                     || a9 && n == *(unsigned __int8 *)dword_7913F8 && v341 == *(unsigned __int8 *)dword_7913F0 )
                {
                  for ( ii = n; v343[ii] != 2; --ii )
                    ;
                  v343[ii] = 0;
                  v343[n + 1] = 2;
                  while ( !v343[v341] )
                    ++v341;
                  ++n;
                }
              }
              else if ( a9 && n == *(unsigned __int8 *)dword_7913F8 && v341 == *(unsigned __int8 *)dword_7913F0 )
              {
                for ( jj = *(_BYTE *)dword_7913D8; v343[jj]; ++jj )
                  ;
                if ( v343[*(unsigned __int8 *)dword_7913F0] == 2 )
                {
                  v343[*(unsigned __int8 *)dword_7913F0] = 0;
                  v343[jj] = 2;
                }
                else
                {
                  for ( kk = *(_BYTE *)dword_7913F8; v343[kk] != 2; --kk )
                    ;
                  v343[*(unsigned __int8 *)dword_791410] = 2;
                  v343[kk] = 0;
                }
              }
            }
            for ( mm = v424 + *(_BYTE *)dword_7913E0; !v343[mm] && mm >= *(unsigned __int8 *)dword_7913F0 - v425; --mm )
              ;
            if ( mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
            {
              v407 = mm;
              v343[mm] = 0;
            }
            while ( !v343[mm] && mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
              --mm;
            if ( mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
            {
              v398 = mm;
              v343[mm] = 0;
            }
            while ( !v343[mm] && mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
              --mm;
            if ( mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
            {
              v396 = mm;
              v343[mm] = 0;
            }
            while ( !v343[mm] && mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
              --mm;
            if ( mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
            {
              v410 = mm;
              v343[mm] = 0;
            }
            while ( !v343[mm] && mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
              --mm;
            if ( mm >= *(unsigned __int8 *)dword_7913F0 - v425 )
            {
              v404 = mm;
              v343[mm] = 0;
            }
            v100 = v343;
            operator delete(v343);
          }
          if ( *(this + 2) >= 5 && v404 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 5) || (ucKicker4 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2262);
          if ( *(this + 2) >= 4 && v410 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 4) || (ucKicker3 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2263);
          if ( *(this + 2) >= 3 && v396 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 3) || (ucKicker2 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2264);
          if ( *(this + 2) >= 2 && v398 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20((char)"(shSize < 2) || (ucKicker1 != EmptyValue.ucValue)", "..\\Casino\\PokerHand.cpp", 2265);
          if ( *(this + 2) >= 1 && v407 == *(unsigned __int8 *)dword_7913D0 )
            sub_5E9F20(
              (char)"(shSize < 1) || (ucMostHighIndex != EmptyValue.ucValue)",
              "..\\Casino\\PokerHand.cpp",
              2266);
          if ( *(this + 2) >= 5 && a6 && v407 == v398 + 1 && v398 == v396 + 1 && v396 == v410 + 1 && v410 == v404 + 1 )
            sub_5E9F20(
              (char)"(shSize < 5) || !bAllowStraightsAndFlushes || (ucMostHighIndex != (ucKicker1 + 1)) || (ucKicker1 != "
                    "(ucKicker2 + 1)) || (ucKicker2 != (ucKicker3 + 1)) || (ucKicker3 != (ucKicker4 + 1))",
              "..\\Casino\\PokerHand.cpp",
              2267);
          if ( *(this + 2) >= 5
            && a9
            && v407 == *(unsigned __int8 *)dword_7913C8
            && v404 == *(unsigned __int8 *)dword_7913F4 )
          {
            sub_5E9F20(
              (char)"(shSize < 5) || !bAllowDogs || (ucMostHighIndex != AceHighValue.ucValue) || (ucKicker4 != NineValue.ucValue)",
              "..\\Casino\\PokerHand.cpp",
              2268);
          }
          if ( *(this + 2) >= 5
            && a9
            && v407 == *(unsigned __int8 *)dword_7913F8
            && v404 == *(unsigned __int8 *)dword_7913F0 )
          {
            sub_5E9F20(
              (char)"(shSize < 5) || !bAllowDogs || (ucMostHighIndex != SevenValue.ucValue) || (ucKicker4 != TwoValue.ucValue)",
              "..\\Casino\\PokerHand.cpp",
              2269);
          }
          if ( *(this + 2) >= 5
            && a8
            && v407 == *(unsigned __int8 *)dword_7913E0
            && v404 == *(unsigned __int8 *)dword_791410 )
          {
            sub_5E9F20(
              (char)"(shSize < 5) || !bAllowTigers || (ucMostHighIndex != KingValue.ucValue) || (ucKicker4 != EightValue.ucValue)",
              "..\\Casino\\PokerHand.cpp",
              2270);
          }
          if ( *(this + 2) >= 5
            && a8
            && v407 == *(unsigned __int8 *)dword_791410
            && v404 == *(unsigned __int8 *)dword_7913D8 )
          {
            sub_5E9F20(
              (char)"(shSize < 5) || !bAllowTigers || (ucMostHighIndex != EightValue.ucValue) || (ucKicker4 != ThreeValue.ucValue)",
              "..\\Casino\\PokerHand.cpp",
              2271);
          }
          v99 = v404;
          v98 = v410;
          v97 = v396;
          v96 = v398;
          v95 = v407;
          sub_4A2100(dword_791390, &v95, &v96, &v97, &v98, &v99);
        }
      }
    }
    goto LABEL_1093;
  }
  v222 = v403[v399];
  v221 = v393[v399];
  v220 = v400[v399];
  v219 = v395[v399];
  v218 = v408[v399];
  sub_4A2100(dword_7913A0, &v218, &v219, &v220, &v221, &v222);
LABEL_1093:
  if ( v394[*(unsigned __int8 *)dword_7913D0] )
    sub_5E9F20((char)"pshValueCount[EmptyValue.ucValue] == 0", "..\\Casino\\PokerHand.cpp", 2278);
  if ( !v424 && v394[*(unsigned __int8 *)dword_7913C8] )
    sub_5E9F20((char)"pshValueCount[AceHighValue.ucValue] == 0", "..\\Casino\\PokerHand.cpp", 2280);
  if ( !v425 && v394[*(unsigned __int8 *)dword_7913B4] )
    sub_5E9F20((char)"pshValueCount[AceLowValue.ucValue] == 0", "..\\Casino\\PokerHand.cpp", 2282);
  operator delete(v394);
  *a2 = v401;
  LOBYTE(v423) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v401);
  return a2;
}


//======================================================================
// sub_48C7B0
// entry 0048c7b0  size 1117  status ok
//======================================================================

__int16 *__thiscall sub_48C7B0(
        __int16 *this,
        __int16 *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  int v10; // eax
  int v11; // eax
  int *v13; // [esp+10h] [ebp-78h]
  int *v14; // [esp+18h] [ebp-70h]
  int *v16; // [esp+28h] [ebp-60h]
  int *v17; // [esp+30h] [ebp-58h]
  int v18; // [esp+34h] [ebp-54h] BYREF
  void *v19; // [esp+38h] [ebp-50h]
  int *v20; // [esp+3Ch] [ebp-4Ch]
  int v21; // [esp+40h] [ebp-48h] BYREF
  void *v22; // [esp+44h] [ebp-44h]
  int *v23; // [esp+48h] [ebp-40h]
  __int16 j; // [esp+4Ch] [ebp-3Ch]
  __int16 v25[4]; // [esp+50h] [ebp-38h] BYREF
  int *v26; // [esp+58h] [ebp-30h]
  __int16 i; // [esp+5Ch] [ebp-2Ch]
  __int16 v28[4]; // [esp+60h] [ebp-28h] BYREF
  int *v29; // [esp+68h] [ebp-20h]
  int v30; // [esp+6Ch] [ebp-1Ch] BYREF
  __int16 v31[4]; // [esp+70h] [ebp-18h] BYREF
  int v32; // [esp+78h] [ebp-10h] BYREF
  int v33; // [esp+84h] [ebp-4h]

  if ( *(this + 2) != 4 && *(this + 2) != 2 )
    sub_5E9F20((char)"(shSize == 4) || (shSize == 2)", "..\\Casino\\PokerHand.cpp", 2300);
  v22 = operator new(0xCu);
  v33 = 1;
  if ( v22 )
    v14 = sub_464ED0((int *)v22, *(this + 2), 2);
  else
    v14 = 0;
  v23 = v14;
  LOBYTE(v33) = 0;
  v29 = v14;
  sub_484300(v28);
  v33 = 2;
  sub_4A20D0(&v30);
  LOBYTE(v33) = 3;
  if ( a4 )
    sub_4A2100(dword_791390, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  else
    sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  sub_484300(v31);
  LOBYTE(v33) = 4;
  sub_4A20D0(&v32);
  LOBYTE(v33) = 5;
  while ( sub_465000(v29) )
  {
    sub_484B80(v31);
    for ( i = 0; i < 2; ++i )
    {
      v10 = sub_465110((int)v29, i);
      sub_484830(v31, (_BYTE *)(*(_DWORD *)this + v10));
    }
    if ( *(__int16 *)(a3 + 4) > 3 )
    {
      v19 = operator new(0xCu);
      LOBYTE(v33) = 6;
      if ( v19 )
        v13 = sub_464ED0((int *)v19, *(__int16 *)(a3 + 4), 3);
      else
        v13 = 0;
      v20 = v13;
      LOBYTE(v33) = 5;
      v26 = v13;
      while ( sub_465000(v26) )
      {
        sub_484320(v25, (int)v31);
        LOBYTE(v33) = 7;
        for ( j = 0; j < 3; ++j )
        {
          v11 = sub_465110((int)v26, j);
          sub_484830(v25, (_BYTE *)(*(_DWORD *)a3 + v11));
        }
        v32 = *sub_485940(v25, &v18, a4, a5, a6, a7, a8, a9, a10);
        ATL::CComCriticalSection::~CComCriticalSection(&v18);
        if ( a4 )
        {
          if ( (unsigned __int8)sub_4A2440(&v30) )
          {
            v30 = v32;
            sub_484490(v28, v25);
          }
        }
        else if ( (unsigned __int8)sub_4A2550(&v30) )
        {
          v30 = v32;
          sub_484490(v28, v25);
        }
        LOBYTE(v33) = 5;
        sub_484470(v25);
      }
      v17 = v26;
      if ( v26 )
      {
        sub_464FD0((void **)v26);
        operator delete(v17);
      }
    }
    else
    {
      sub_4846A0(v31, a3);
      v32 = *sub_485940(v31, &v21, a4, a5, a6, a7, a8, a9, a10);
      ATL::CComCriticalSection::~CComCriticalSection(&v21);
      if ( a4 )
      {
        if ( (unsigned __int8)sub_4A2440(&v30) )
        {
          v30 = v32;
          sub_484490(v28, v31);
        }
      }
      else if ( (unsigned __int8)sub_4A2550(&v30) )
      {
        v30 = v32;
        sub_484490(v28, v31);
      }
    }
  }
  v16 = v29;
  if ( v29 )
  {
    sub_464FD0((void **)v29);
    operator delete(v16);
  }
  sub_484320(a2, (int)v28);
  LOBYTE(v33) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v32);
  LOBYTE(v33) = 3;
  sub_484470(v31);
  LOBYTE(v33) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v30);
  LOBYTE(v33) = 0;
  sub_484470(v28);
  return a2;
}


//======================================================================
// sub_48CC10
// entry 0048cc10  size 188  status ok
//======================================================================

_DWORD *__thiscall sub_48CC10(
        __int16 *this,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  __int16 *v11; // [esp+4h] [ebp-24h]
  __int16 v12[4]; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-4h]

  v11 = sub_48C7B0(this, v12, a3, a4, a5, a6, a7, a8, a9, a10);
  v13 = 1;
  sub_485940(v11, a2, a4, a5, a6, a7, a8, a9, a10);
  LOBYTE(v13) = 0;
  sub_484470(v12);
  return a2;
}


//======================================================================
// sub_48CCD0
// entry 0048ccd0  size 1250  status ok
//======================================================================

_DWORD *__thiscall sub_48CCD0(_WORD *this, _DWORD *a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  unsigned __int8 *v9; // [esp-4h] [ebp-30h]
  unsigned __int8 *v10; // [esp-4h] [ebp-30h]
  unsigned __int8 *v11; // [esp-4h] [ebp-30h]
  char v13; // [esp+Dh] [ebp-1Fh] BYREF
  char v14; // [esp+Eh] [ebp-1Eh] BYREF
  char v15; // [esp+Fh] [ebp-1Dh] BYREF
  char v16; // [esp+10h] [ebp-1Ch] BYREF
  char v17; // [esp+11h] [ebp-1Bh] BYREF
  char v18; // [esp+12h] [ebp-1Ah] BYREF
  char v19; // [esp+13h] [ebp-19h] BYREF
  __int16 i; // [esp+14h] [ebp-18h]
  unsigned __int8 v21; // [esp+1Bh] [ebp-11h]
  int v22; // [esp+1Ch] [ebp-10h] BYREF
  int v23; // [esp+28h] [ebp-4h]

  v21 = 0;
  for ( i = 0; i < (__int16)*(this + 2); ++i )
  {
    v9 = (unsigned __int8 *)dword_790780;
    v2 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v19);
    if ( !sub_4640E0(v2, v9) )
      sub_5E9F20((char)"ppcCardsInHand[shCardIndex].GetSuit() != WildSuit", "..\\Casino\\PokerHand.cpp", 2410);
    v10 = (unsigned __int8 *)dword_790784;
    v3 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v18);
    if ( !sub_4640E0(v3, v10) )
      sub_5E9F20((char)"ppcCardsInHand[shCardIndex].GetSuit() != BugSuit", "..\\Casino\\PokerHand.cpp", 2411);
    v11 = (unsigned __int8 *)dword_79076C;
    v4 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v17);
    if ( sub_4640B0(v4, v11) )
    {
      v5 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v16);
      v6 = sub_463F80(v5, &v15);
      if ( (unsigned __int8)*v6 > (int)v21 )
      {
        v7 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v14);
        v21 = *sub_463F80(v7, &v13);
      }
    }
  }
  sub_4A20D0(&v22);
  v23 = 1;
  if ( v21 == *(unsigned __int8 *)dword_7913C8 )
  {
    sub_4A2100(dword_791390, dword_7913B4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913E0 )
  {
    sub_4A2100(dword_791390, dword_7913F0, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913BC )
  {
    sub_4A2100(dword_791390, dword_7913D8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_791400 )
  {
    sub_4A2100(dword_791390, dword_791414, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_79138C )
  {
    sub_4A2100(dword_791390, dword_7913A4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913F4 )
  {
    sub_4A2100(dword_791390, dword_791404, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_791410 )
  {
    sub_4A2100(dword_791390, dword_7913F8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913F8 )
  {
    sub_4A2100(dword_791390, dword_791410, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_791404 )
  {
    sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913A4 )
  {
    sub_4A2100(dword_791390, dword_79138C, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_791414 )
  {
    sub_4A2100(dword_791390, dword_791400, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913D8 )
  {
    sub_4A2100(dword_791390, dword_7913BC, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else if ( v21 == *(unsigned __int8 *)dword_7913F0 )
  {
    sub_4A2100(dword_791390, dword_7913E0, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  else
  {
    sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  }
  *a2 = v22;
  LOBYTE(v23) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v22);
  return a2;
}


//======================================================================
// sub_48D1C0
// entry 0048d1c0  size 507  status ok
//======================================================================

_DWORD *__thiscall sub_48D1C0(_WORD *this, _DWORD *a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v7; // [esp-4h] [ebp-3Ch]
  unsigned __int8 *v8; // [esp-4h] [ebp-3Ch]
  unsigned __int8 *v9; // [esp-4h] [ebp-3Ch]
  unsigned __int8 *v10; // [esp-4h] [ebp-3Ch]
  _BYTE v12[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  _BYTE v13[4]; // [esp+20h] [ebp-18h] BYREF
  char v14; // [esp+24h] [ebp-14h] BYREF
  char v15; // [esp+25h] [ebp-13h] BYREF
  char v16; // [esp+26h] [ebp-12h] BYREF
  char v17; // [esp+27h] [ebp-11h] BYREF
  __int16 i; // [esp+28h] [ebp-10h]
  int v19; // [esp+34h] [ebp-4h]

  for ( i = 0; i < (__int16)*(this + 2); ++i )
  {
    v7 = (unsigned __int8 *)dword_790780;
    v2 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v17);
    if ( !sub_4640E0(v2, v7) )
      sub_5E9F20((char)"ppcCardsInHand[shCardIndex].GetSuit() != WildSuit", "..\\Casino\\PokerHand.cpp", 2456);
    v8 = (unsigned __int8 *)dword_790784;
    v3 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v16);
    if ( !sub_4640E0(v3, v8) )
      sub_5E9F20((char)"ppcCardsInHand[shCardIndex].GetSuit() != BugSuit", "..\\Casino\\PokerHand.cpp", 2457);
    v9 = (unsigned __int8 *)dword_79076C;
    v4 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v15);
    if ( sub_4640B0(v4, v9) )
    {
      v10 = (unsigned __int8 *)dword_7907B0;
      v5 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v14);
      if ( sub_464050(v5, v10) )
      {
        sub_4A20D0(v13);
        v19 = 1;
        *a2 = *(_DWORD *)sub_4A2100(dword_791390, dword_7913B4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        LOBYTE(v19) = 0;
        ATL::CComCriticalSection::~CComCriticalSection(v13);
        return a2;
      }
    }
  }
  sub_4A20D0(v12);
  v19 = 2;
  *a2 = *(_DWORD *)sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  LOBYTE(v19) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(v12);
  return a2;
}


//======================================================================
// sub_48D3C0
// entry 0048d3c0  size 2226  status ok
//======================================================================

_DWORD *__thiscall sub_48D3C0(_WORD *this, _DWORD *a2, char a3, char a4)
{
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  unsigned __int8 *v14; // [esp-4h] [ebp-34h]
  unsigned __int8 *v15; // [esp-4h] [ebp-34h]
  char v17; // [esp+Dh] [ebp-23h] BYREF
  char v18; // [esp+Eh] [ebp-22h] BYREF
  char v19; // [esp+Fh] [ebp-21h] BYREF
  char v20; // [esp+10h] [ebp-20h] BYREF
  char v21; // [esp+11h] [ebp-1Fh] BYREF
  char v22; // [esp+12h] [ebp-1Eh] BYREF
  char v23; // [esp+13h] [ebp-1Dh] BYREF
  char v24; // [esp+14h] [ebp-1Ch] BYREF
  char v25; // [esp+15h] [ebp-1Bh] BYREF
  char v26; // [esp+16h] [ebp-1Ah] BYREF
  char v27; // [esp+17h] [ebp-19h] BYREF
  __int16 i; // [esp+18h] [ebp-18h]
  unsigned __int8 v29; // [esp+1Fh] [ebp-11h]
  int v30; // [esp+20h] [ebp-10h] BYREF
  int v31; // [esp+2Ch] [ebp-4h]

  if ( a4 )
    v29 = 0;
  else
    v29 = *(_BYTE *)dword_7913C8;
  for ( i = 0; i < (__int16)*(this + 2); ++i )
  {
    v14 = (unsigned __int8 *)dword_790780;
    v4 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v27);
    if ( !sub_4640E0(v4, v14) )
      sub_5E9F20((char)"ppcCardsInHand[shCardIndex].GetSuit() != WildSuit", "..\\Casino\\PokerHand.cpp", 2480);
    v15 = (unsigned __int8 *)dword_790784;
    v5 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v26);
    if ( !sub_4640E0(v5, v15) )
      sub_5E9F20((char)"ppcCardsInHand[shCardIndex].GetSuit() != BugSuit", "..\\Casino\\PokerHand.cpp", 2481);
    v6 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v25);
    if ( sub_4640B0(v6, (unsigned __int8 *)&a3) )
    {
      if ( a4 )
      {
        v7 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v24);
        v8 = sub_463F80(v7, &v23);
        if ( (unsigned __int8)*v8 > (int)v29 )
        {
          v9 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v22);
          v29 = *sub_463F80(v9, &v21);
        }
      }
      else
      {
        v10 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v20);
        v11 = sub_463FD0(v10, &v19);
        if ( (unsigned __int8)*v11 < (int)v29 )
        {
          v12 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v18);
          v29 = *sub_463FD0(v12, &v17);
        }
      }
    }
  }
  sub_4A20D0(&v30);
  v31 = 1;
  if ( a4 )
  {
    if ( v29 != *(unsigned __int8 *)dword_7913C8 )
    {
      if ( v29 != *(unsigned __int8 *)dword_7913E0 )
      {
        if ( v29 != *(unsigned __int8 *)dword_7913BC )
        {
          if ( v29 != *(unsigned __int8 *)dword_791400 )
          {
            if ( v29 != *(unsigned __int8 *)dword_79138C )
            {
              if ( v29 != *(unsigned __int8 *)dword_7913F4 )
              {
                if ( v29 != *(unsigned __int8 *)dword_791410 )
                {
                  if ( v29 != *(unsigned __int8 *)dword_7913F8 )
                  {
                    if ( v29 != *(unsigned __int8 *)dword_791404 )
                    {
                      if ( v29 != *(unsigned __int8 *)dword_7913A4 )
                      {
                        if ( v29 != *(unsigned __int8 *)dword_791414 )
                        {
                          if ( v29 != *(unsigned __int8 *)dword_7913D8 )
                          {
                            if ( v29 != *(unsigned __int8 *)dword_7913F0 )
                              goto LABEL_60;
                            goto LABEL_37;
                          }
                          goto LABEL_39;
                        }
                        goto LABEL_41;
                      }
                      goto LABEL_43;
                    }
                    goto LABEL_45;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              goto LABEL_51;
            }
            goto LABEL_53;
          }
          goto LABEL_55;
        }
        goto LABEL_57;
      }
      goto LABEL_59;
    }
  }
  else if ( v29 != *(unsigned __int8 *)dword_7913B4 )
  {
    if ( v29 == *(unsigned __int8 *)dword_7913E0 )
    {
LABEL_37:
      sub_4A2100(dword_791390, dword_7913E0, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_7913BC )
    {
LABEL_39:
      sub_4A2100(dword_791390, dword_7913BC, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_791400 )
    {
LABEL_41:
      sub_4A2100(dword_791390, dword_791400, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_79138C )
    {
LABEL_43:
      sub_4A2100(dword_791390, dword_79138C, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_7913F4 )
    {
LABEL_45:
      sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_791410 )
    {
LABEL_47:
      sub_4A2100(dword_791390, dword_791410, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_7913F8 )
    {
LABEL_49:
      sub_4A2100(dword_791390, dword_7913F8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_791404 )
    {
LABEL_51:
      sub_4A2100(dword_791390, dword_791404, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_7913A4 )
    {
LABEL_53:
      sub_4A2100(dword_791390, dword_7913A4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_791414 )
    {
LABEL_55:
      sub_4A2100(dword_791390, dword_791414, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 == *(unsigned __int8 *)dword_7913D8 )
    {
LABEL_57:
      sub_4A2100(dword_791390, dword_7913D8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
    if ( v29 != *(unsigned __int8 *)dword_7913F0 )
    {
LABEL_60:
      sub_4A2100(dword_7913CC, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
      goto LABEL_61;
    }
LABEL_59:
    sub_4A2100(dword_791390, dword_7913F0, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
    goto LABEL_61;
  }
  sub_4A2100(dword_791390, dword_7913B4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
LABEL_61:
  *a2 = v30;
  LOBYTE(v31) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v30);
  return a2;
}


//======================================================================
// sub_48DC80
// entry 0048dc80  size 2172  status ok
//======================================================================

__int16 __thiscall sub_48DC80(__int16 *this)
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
  unsigned __int8 *v29; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v30; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v31; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v32; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v33; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v34; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v35; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v36; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v37; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v38; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v39; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v40; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v41; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v42; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v43; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v44; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v45; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v46; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v47; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v48; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v49; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v50; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v51; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v52; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v53; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v54; // [esp-4h] [ebp-5Ch]
  unsigned __int8 *v55; // [esp-4h] [ebp-5Ch]
  _BYTE *v56; // [esp+4h] [ebp-54h]
  _BYTE *v57; // [esp+Ch] [ebp-4Ch]
  char v59; // [esp+1Eh] [ebp-3Ah] BYREF
  char v60; // [esp+1Fh] [ebp-39h] BYREF
  char v61; // [esp+20h] [ebp-38h] BYREF
  char v62; // [esp+21h] [ebp-37h] BYREF
  char v63; // [esp+22h] [ebp-36h] BYREF
  char v64; // [esp+23h] [ebp-35h] BYREF
  char v65; // [esp+24h] [ebp-34h] BYREF
  char v66; // [esp+25h] [ebp-33h] BYREF
  char v67; // [esp+26h] [ebp-32h] BYREF
  char v68; // [esp+27h] [ebp-31h] BYREF
  char v69; // [esp+28h] [ebp-30h] BYREF
  char v70; // [esp+29h] [ebp-2Fh] BYREF
  char v71; // [esp+2Ah] [ebp-2Eh] BYREF
  char v72; // [esp+2Bh] [ebp-2Dh] BYREF
  char v73; // [esp+2Ch] [ebp-2Ch] BYREF
  char v74; // [esp+2Dh] [ebp-2Bh] BYREF
  char v75; // [esp+2Eh] [ebp-2Ah] BYREF
  char v76; // [esp+2Fh] [ebp-29h] BYREF
  char v77; // [esp+30h] [ebp-28h] BYREF
  char v78; // [esp+31h] [ebp-27h] BYREF
  char v79; // [esp+32h] [ebp-26h] BYREF
  char v80; // [esp+33h] [ebp-25h] BYREF
  char v81; // [esp+34h] [ebp-24h] BYREF
  char v82; // [esp+35h] [ebp-23h] BYREF
  char v83; // [esp+36h] [ebp-22h] BYREF
  char v84; // [esp+37h] [ebp-21h] BYREF
  char v85; // [esp+38h] [ebp-20h] BYREF
  char v86; // [esp+39h] [ebp-1Fh] BYREF
  char v87; // [esp+3Ah] [ebp-1Eh] BYREF
  char v88; // [esp+3Bh] [ebp-1Dh] BYREF
  __int16 v89; // [esp+3Ch] [ebp-1Ch]
  bool v90; // [esp+43h] [ebp-15h]
  __int16 v91; // [esp+44h] [ebp-14h]
  __int16 v92; // [esp+48h] [ebp-10h]
  int v93; // [esp+54h] [ebp-4h]

  if ( *(this + 2) != 2 )
    sub_5E9F20((char)"shSize == 2", "..\\Casino\\PokerHand.cpp", 2566);
  v57 = sub_464130(&v88, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  v93 = 0;
  if ( sub_484BA0(this, v57) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 2567);
  v93 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v88);
  v56 = sub_464130(&v87, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  v93 = 1;
  if ( sub_484BA0(this, v56) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 2568);
  v93 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v87);
  v29 = sub_464400((_BYTE *)(*(_DWORD *)this + 1), &v85);
  v1 = sub_464400(*(_BYTE **)this, &v86);
  v90 = sub_4640B0(v1, v29);
  v91 = 0;
  v30 = (unsigned __int8 *)dword_7907A4;
  v2 = sub_464480(*(_BYTE **)this, &v84);
  if ( sub_464050(v2, v30) )
  {
    v91 = 14;
  }
  else
  {
    v31 = (unsigned __int8 *)dword_7907A8;
    v3 = sub_464480(*(_BYTE **)this, &v83);
    if ( sub_464050(v3, v31) )
    {
      v91 = 13;
    }
    else
    {
      v32 = (unsigned __int8 *)dword_7907B0;
      v4 = sub_464480(*(_BYTE **)this, &v82);
      if ( sub_464050(v4, v32) )
      {
        v91 = 12;
      }
      else
      {
        v33 = (unsigned __int8 *)dword_790774;
        v5 = sub_464480(*(_BYTE **)this, &v81);
        if ( sub_464050(v5, v33) )
        {
          v91 = 11;
        }
        else
        {
          v34 = (unsigned __int8 *)dword_790788;
          v6 = sub_464480(*(_BYTE **)this, &v80);
          if ( sub_464050(v6, v34) )
          {
            v91 = 10;
          }
          else
          {
            v35 = (unsigned __int8 *)dword_790794;
            v7 = sub_464480(*(_BYTE **)this, &v79);
            if ( sub_464050(v7, v35) )
            {
              v91 = 9;
            }
            else
            {
              v36 = (unsigned __int8 *)dword_790798;
              v8 = sub_464480(*(_BYTE **)this, &v78);
              if ( sub_464050(v8, v36) )
              {
                v91 = 8;
              }
              else
              {
                v37 = (unsigned __int8 *)dword_790760;
                v9 = sub_464480(*(_BYTE **)this, &v77);
                if ( sub_464050(v9, v37) )
                {
                  v91 = 7;
                }
                else
                {
                  v38 = (unsigned __int8 *)dword_79079C;
                  v10 = sub_464480(*(_BYTE **)this, &v76);
                  if ( sub_464050(v10, v38) )
                  {
                    v91 = 6;
                  }
                  else
                  {
                    v39 = (unsigned __int8 *)dword_790750;
                    v11 = sub_464480(*(_BYTE **)this, &v75);
                    if ( sub_464050(v11, v39) )
                    {
                      v91 = 5;
                    }
                    else
                    {
                      v40 = (unsigned __int8 *)dword_790790;
                      v12 = sub_464480(*(_BYTE **)this, &v74);
                      if ( sub_464050(v12, v40) )
                      {
                        v91 = 4;
                      }
                      else
                      {
                        v41 = (unsigned __int8 *)dword_790768;
                        v13 = sub_464480(*(_BYTE **)this, &v73);
                        if ( sub_464050(v13, v41) )
                        {
                          v91 = 3;
                        }
                        else
                        {
                          v42 = (unsigned __int8 *)dword_790758;
                          v14 = sub_464480(*(_BYTE **)this, &v72);
                          if ( sub_464050(v14, v42) )
                            v91 = 2;
                          else
                            sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 2604);
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
  v92 = 0;
  v43 = (unsigned __int8 *)dword_7907A4;
  v15 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v71);
  if ( sub_464050(v15, v43) )
  {
    v92 = 14;
  }
  else
  {
    v44 = (unsigned __int8 *)dword_7907A8;
    v16 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v70);
    if ( sub_464050(v16, v44) )
    {
      v92 = 13;
    }
    else
    {
      v45 = (unsigned __int8 *)dword_7907B0;
      v17 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v69);
      if ( sub_464050(v17, v45) )
      {
        v92 = 12;
      }
      else
      {
        v46 = (unsigned __int8 *)dword_790774;
        v18 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v68);
        if ( sub_464050(v18, v46) )
        {
          v92 = 11;
        }
        else
        {
          v47 = (unsigned __int8 *)dword_790788;
          v19 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v67);
          if ( sub_464050(v19, v47) )
          {
            v92 = 10;
          }
          else
          {
            v48 = (unsigned __int8 *)dword_790794;
            v20 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v66);
            if ( sub_464050(v20, v48) )
            {
              v92 = 9;
            }
            else
            {
              v49 = (unsigned __int8 *)dword_790798;
              v21 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v65);
              if ( sub_464050(v21, v49) )
              {
                v92 = 8;
              }
              else
              {
                v50 = (unsigned __int8 *)dword_790760;
                v22 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v64);
                if ( sub_464050(v22, v50) )
                {
                  v92 = 7;
                }
                else
                {
                  v51 = (unsigned __int8 *)dword_79079C;
                  v23 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v63);
                  if ( sub_464050(v23, v51) )
                  {
                    v92 = 6;
                  }
                  else
                  {
                    v52 = (unsigned __int8 *)dword_790750;
                    v24 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v62);
                    if ( sub_464050(v24, v52) )
                    {
                      v92 = 5;
                    }
                    else
                    {
                      v53 = (unsigned __int8 *)dword_790790;
                      v25 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v61);
                      if ( sub_464050(v25, v53) )
                      {
                        v92 = 4;
                      }
                      else
                      {
                        v54 = (unsigned __int8 *)dword_790768;
                        v26 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v60);
                        if ( sub_464050(v26, v54) )
                        {
                          v92 = 3;
                        }
                        else
                        {
                          v55 = (unsigned __int8 *)dword_790758;
                          v27 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v59);
                          if ( sub_464050(v27, v55) )
                            v92 = 2;
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
  if ( v92 > v91 )
  {
    v89 = v92;
    v92 = v91;
    v91 = v89;
  }
  if ( v91 >= 12 && v92 >= 12 )
    return 6;
  if ( v91 >= 10 && v92 >= 10 )
    return 5;
  if ( v91 >= 9 && v92 >= 9 )
    return 4;
  if ( v91 == 14 )
    return 4;
  if ( v90 )
  {
    if ( v92 == 8 && v91 <= 10 )
      return 4;
    if ( v92 == 7 && v91 == 8 )
      return 4;
    if ( v92 == 6 && v91 == 7 )
      return 4;
    if ( v92 == 8 )
      return 3;
    if ( v91 == 13 )
      return 3;
    if ( v92 == 7 && v91 == 9 )
      return 3;
    if ( v92 == 6 && v91 == 8 )
      return 3;
    if ( v92 == 5 && v91 == 6 )
      return 3;
    if ( v92 == 4 && v91 == 5 )
      return 3;
  }
  else
  {
    if ( v92 == 8 && v91 <= 9 )
      return 4;
    if ( v92 == 7 && v91 == 7 )
      return 4;
    if ( v92 == 8 )
      return 3;
    if ( v91 == 13 )
      return 3;
    if ( v92 == 7 && v91 == 8 )
      return 3;
    if ( v92 == v91 )
      return 3;
  }
  if ( v90 )
    return 2;
  if ( v91 >= 11 )
    return 2;
  if ( v92 < 6 )
    return 1;
  return 2;
}


//======================================================================
// sub_48E500
// entry 0048e500  size 211  status ok
//======================================================================

double __cdecl sub_48E500(__int16 a1)
{
  if ( a1 <= 0 )
    sub_5E9F20((char)"shStrength>0", "..\\Casino\\PokerHand.cpp", 2704);
  if ( a1 > 6 )
    sub_5E9F20((char)"shStrength<=MAXTEXASHOLDEMHANDSTRENGTH", "..\\Casino\\PokerHand.cpp", 2705);
  switch ( a1 )
  {
    case 1:
      return 0.2352941176470588;
    case 2:
      return 0.3167420814479638;
    case 3:
      return 0.1251885369532428;
    case 4:
      return 0.1794871794871795;
    case 5:
      return 0.09351432880844646;
    case 6:
      return 0.04977375565610859;
  }
  sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 2721);
  return 0.0;
}


//======================================================================
// sub_48E5E0
// entry 0048e5e0  size 1062  status ok
//======================================================================

void __thiscall sub_48E5E0(__int16 *this, int a2, __int16 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, __int16 a7)
{
  __int16 v7; // ax
  __int16 *v8; // [esp+8h] [ebp-6Ch]
  _BYTE *v9; // [esp+10h] [ebp-64h]
  _BYTE *v10; // [esp+18h] [ebp-5Ch]
  int v12; // [esp+28h] [ebp-4Ch] BYREF
  __int16 v13[4]; // [esp+2Ch] [ebp-48h] BYREF
  char v14; // [esp+35h] [ebp-3Fh] BYREF
  char v15; // [esp+36h] [ebp-3Eh] BYREF
  char v16; // [esp+37h] [ebp-3Dh] BYREF
  _DWORD v17[2]; // [esp+38h] [ebp-3Ch] BYREF
  __int16 v18; // [esp+40h] [ebp-34h]
  __int16 v19[4]; // [esp+44h] [ebp-30h] BYREF
  int v20; // [esp+4Ch] [ebp-28h] BYREF
  char v21; // [esp+53h] [ebp-21h] BYREF
  __int16 i; // [esp+54h] [ebp-20h]
  int v23; // [esp+58h] [ebp-1Ch] BYREF
  _DWORD v24[2]; // [esp+5Ch] [ebp-18h] BYREF
  __int16 v25; // [esp+64h] [ebp-10h]
  int v26; // [esp+70h] [ebp-4h]

  v26 = 0;
  if ( *(this + 2) != 2 )
    sub_5E9F20((char)"shSize == 2", "..\\Casino\\PokerHand.cpp", 2736);
  if ( a3 < 3 )
    sub_5E9F20((char)"phWidow.shSize >= 3", "..\\Casino\\PokerHand.cpp", 2737);
  v10 = sub_464130(&v15, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v26) = 1;
  if ( sub_484BA0(this, v10) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 2738);
  v26 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v15);
  v9 = sub_464130(&v14, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v26) = 2;
  if ( sub_484BA0(this, v9) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 2739);
  v26 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v14);
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  sub_484300(v19);
  LOBYTE(v26) = 3;
  v8 = sub_4845F0(this, v13, (int)&a2);
  LOBYTE(v26) = 4;
  sub_485940(v8, &v20, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v26) = 6;
  sub_484470(v13);
  sub_4A20D0(&v23);
  LOBYTE(v26) = 7;
  sub_464110(&v16);
  LOBYTE(v26) = 8;
  sub_464110(&v21);
  LOBYTE(v26) = 9;
  sub_4646A0(v24);
  LOBYTE(v26) = 10;
  sub_4646A0(v17);
  LOBYTE(v26) = 11;
  sub_4646F0(v24);
  sub_4648B0(v24, *(_BYTE **)this);
  sub_4648B0(v24, (_BYTE *)(*(_DWORD *)this + 1));
  for ( i = 0; i < a3; ++i )
    sub_4648B0(v24, (_BYTE *)(a2 + i));
  while ( sub_464A10((unsigned __int16 *)v24, &v16) )
  {
    v17[0] = v24[0];
    v17[1] = v24[1];
    v18 = v25;
    while ( sub_464A10((unsigned __int16 *)v17, &v21) )
    {
      sub_484B80(v19);
      sub_484830(v19, &v16);
      sub_484830(v19, &v21);
      if ( a7 > 0 )
      {
        if ( a7 > 6 )
          sub_5E9F20((char)"shStrength <= MAXTEXASHOLDEMHANDSTRENGTH", "..\\Casino\\PokerHand.cpp", 2770);
        v7 = sub_48DC80(v19);
        if ( v7 != a7 )
          continue;
      }
      for ( i = 0; i < a3; ++i )
        sub_484830(v19, (_BYTE *)(a2 + i));
      v23 = *sub_485940(v19, &v12, 1, 1, 1, 1, 0, 0, 0);
      ATL::CComCriticalSection::~CComCriticalSection(&v12);
      if ( (unsigned __int8)sub_4A2440(&v20) )
      {
        ++*a4;
      }
      else if ( (unsigned __int8)sub_4A2340(&v20) )
      {
        ++*a5;
      }
      else
      {
        ++*a6;
      }
    }
  }
  LOBYTE(v26) = 10;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v17);
  LOBYTE(v26) = 9;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v24);
  LOBYTE(v26) = 8;
  ATL::CComCriticalSection::~CComCriticalSection(&v21);
  LOBYTE(v26) = 7;
  ATL::CComCriticalSection::~CComCriticalSection(&v16);
  LOBYTE(v26) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v23);
  LOBYTE(v26) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v20);
  LOBYTE(v26) = 0;
  sub_484470(v19);
  v26 = -1;
  sub_484470(&a2);
}


//======================================================================
// sub_48EA10
// entry 0048ea10  size 979  status ok
//======================================================================

void __thiscall sub_48EA10(__int16 *this, int a2, __int16 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // [esp-4h] [ebp-64h]
  int v8; // [esp-4h] [ebp-64h]
  int v9; // [esp-4h] [ebp-64h]
  int v10; // [esp-4h] [ebp-64h]
  _BYTE *v11; // [esp+8h] [ebp-58h]
  _BYTE *v12; // [esp+10h] [ebp-50h]
  char v14; // [esp+23h] [ebp-3Dh] BYREF
  char v15; // [esp+24h] [ebp-3Ch] BYREF
  char v16; // [esp+25h] [ebp-3Bh] BYREF
  char v17; // [esp+26h] [ebp-3Ah] BYREF
  char v18; // [esp+27h] [ebp-39h] BYREF
  char v19; // [esp+28h] [ebp-38h] BYREF
  char v20; // [esp+29h] [ebp-37h] BYREF
  int v21; // [esp+2Ah] [ebp-36h] BYREF
  char v22; // [esp+2Eh] [ebp-32h] BYREF
  char v23; // [esp+2Fh] [ebp-31h] BYREF
  __int16 i; // [esp+30h] [ebp-30h]
  char v25; // [esp+37h] [ebp-29h] BYREF
  __int16 v26[4]; // [esp+38h] [ebp-28h] BYREF
  int v27; // [esp+40h] [ebp-20h] BYREF
  int v28; // [esp+44h] [ebp-1Ch] BYREF
  unsigned __int16 v29[6]; // [esp+48h] [ebp-18h] BYREF
  int v30; // [esp+5Ch] [ebp-4h]

  v30 = 0;
  if ( *(this + 2) != 2 )
    sub_5E9F20((char)"shSize == 2", "..\\Casino\\PokerHand.cpp", 2797);
  if ( a3 != 3 && a3 != 4 )
    sub_5E9F20((char)"(phWidow.shSize == 3) || (phWidow.shSize == 4)", "..\\Casino\\PokerHand.cpp", 2798);
  v12 = sub_464130(&v23, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v30) = 1;
  if ( sub_484BA0(this, v12) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 2799);
  v30 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v23);
  v11 = sub_464130(&v22, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v30) = 2;
  if ( sub_484BA0(this, v11) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 2800);
  v30 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v22);
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  sub_4845F0(this, v26, (int)&a2);
  LOBYTE(v30) = 3;
  sub_485940(v26, &v27, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v30) = 4;
  sub_4A20D0(&v28);
  LOBYTE(v30) = 5;
  sub_464110(&v25);
  LOBYTE(v30) = 6;
  sub_4646A0(v29);
  LOBYTE(v30) = 7;
  sub_4646F0(v29);
  sub_4648B0(v29, *(_BYTE **)this);
  sub_4648B0(v29, (_BYTE *)(*(_DWORD *)this + 1));
  for ( i = 0; i < a3; ++i )
    sub_4648B0(v29, (_BYTE *)(a2 + i));
  while ( sub_464A10(v29, &v25) )
  {
    sub_484830(v26, &v25);
    v28 = *sub_485940(v26, &v21, 1, 1, 1, 1, 0, 0, 0);
    ATL::CComCriticalSection::~CComCriticalSection(&v21);
    v7 = sub_4A2160(&v19);
    sub_4A2160(&v20);
    if ( (unsigned __int8)sub_4A1ED0(v7) )
    {
      v8 = dword_79140C;
      sub_4A2160(&v18);
      if ( (unsigned __int8)sub_4A1F00(v8) )
        ++*a4;
    }
    v9 = sub_4A2160(&v16);
    sub_4A2160(&v17);
    if ( (unsigned __int8)sub_4A1ED0(v9) )
    {
      ++*a5;
    }
    else if ( (unsigned __int8)sub_4A2440(&v27)
           && (v10 = sub_4A2160(&v14), sub_4A2160(&v15), (unsigned __int8)sub_4A1E10(v10)) )
    {
      ++*a6;
    }
    else
    {
      ++*a7;
    }
    sub_484AD0(v26, &v25);
  }
  LOBYTE(v30) = 6;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v29);
  LOBYTE(v30) = 5;
  ATL::CComCriticalSection::~CComCriticalSection(&v25);
  LOBYTE(v30) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v28);
  LOBYTE(v30) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v27);
  LOBYTE(v30) = 0;
  sub_484470(v26);
  v30 = -1;
  sub_484470(&a2);
}


//======================================================================
// sub_48EDF0
// entry 0048edf0  size 857  status ok
//======================================================================

char __thiscall sub_48EDF0(__int16 *this, char a2)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  _BYTE *v6; // eax
  unsigned __int8 *v8; // [esp-4h] [ebp-50h]
  unsigned __int8 *v9; // [esp-4h] [ebp-50h]
  unsigned __int8 *v10; // [esp-4h] [ebp-50h]
  unsigned __int8 *v11; // [esp-4h] [ebp-50h]
  _BYTE *v12; // [esp-4h] [ebp-50h]
  _BYTE *v13; // [esp+4h] [ebp-48h]
  _BYTE v15[2]; // [esp+10h] [ebp-3Ch] BYREF
  char v16; // [esp+12h] [ebp-3Ah] BYREF
  char v17; // [esp+13h] [ebp-39h] BYREF
  char v18; // [esp+14h] [ebp-38h] BYREF
  char v19; // [esp+15h] [ebp-37h] BYREF
  char v20; // [esp+16h] [ebp-36h] BYREF
  char v21; // [esp+17h] [ebp-35h]
  __int16 v22; // [esp+18h] [ebp-34h]
  unsigned __int8 m; // [esp+1Fh] [ebp-2Dh]
  __int16 v24; // [esp+20h] [ebp-2Ch]
  unsigned __int8 k; // [esp+27h] [ebp-25h]
  int v26; // [esp+28h] [ebp-24h]
  __int16 i; // [esp+2Ch] [ebp-20h]
  __int16 j; // [esp+30h] [ebp-1Ch]
  __int16 v29; // [esp+34h] [ebp-18h]
  __int16 v30; // [esp+36h] [ebp-16h]
  __int16 v31; // [esp+38h] [ebp-14h]
  __int16 v32; // [esp+3Ah] [ebp-12h]
  int v33; // [esp+48h] [ebp-4h]

  if ( *(this + 2) && (*(this + 2) < 3 || *(this + 2) > 5) )
    sub_5E9F20((char)"(shSize==0) || ((shSize>=3) && (shSize<=5))", "..\\Casino\\PokerHand.cpp", 2844);
  for ( i = 0; i < 4; ++i )
    *(&v29 + i) = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v8 = (unsigned __int8 *)dword_79076C;
    v2 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v20);
    if ( sub_4640B0(v2, v8) )
    {
      ++v29;
    }
    else
    {
      v9 = (unsigned __int8 *)dword_790754;
      v3 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v19);
      if ( sub_4640B0(v3, v9) )
      {
        ++v30;
      }
      else
      {
        v10 = (unsigned __int8 *)dword_790764;
        v4 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v18);
        if ( sub_4640B0(v4, v10) )
        {
          ++v31;
        }
        else
        {
          v11 = (unsigned __int8 *)dword_790770;
          v5 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v17);
          if ( sub_4640B0(v5, v11) )
            ++v32;
        }
      }
    }
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( *(&v29 + i) >= 3 )
    {
      v26 = 0;
      if ( i )
      {
        switch ( i )
        {
          case 1:
            v26 = dword_790754;
            break;
          case 2:
            v26 = dword_790764;
            break;
          case 3:
            v26 = dword_790770;
            break;
        }
      }
      else
      {
        v26 = dword_79076C;
      }
      for ( k = *(_BYTE *)dword_7913C8; k >= (int)*(unsigned __int8 *)dword_7913A4; --k )
      {
        v22 = 0;
        v24 = 0;
        for ( m = 0; m < 5u; ++m )
        {
          v15[1] = k - m;
          v12 = (_BYTE *)v26;
          v6 = (_BYTE *)sub_4A1F30(v15);
          v13 = sub_464130(&v16, v6, v12);
          v33 = 0;
          v21 = sub_484BA0(this, v13);
          v33 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v16);
          if ( a2 )
          {
            if ( v21 )
              ++v22;
            else
              ++v24;
          }
          else if ( v21 )
          {
            if ( v22 >= 3 )
              break;
            ++v22;
          }
          else
          {
            ++v24;
          }
        }
        if ( v24 <= 2 && m == 5 )
          return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_48F150
// entry 0048f150  size 10011  status ok
//======================================================================

__int16 __thiscall sub_48F150(__int16 *this)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  unsigned __int8 *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  unsigned __int8 *v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  unsigned __int8 *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  unsigned __int8 *v19; // eax
  _BYTE *v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  _BYTE *v23; // eax
  unsigned __int8 *v24; // eax
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  int v27; // [esp-4h] [ebp-1E8h]
  int v28; // [esp-4h] [ebp-1E8h]
  unsigned __int8 *v29; // [esp-4h] [ebp-1E8h]
  unsigned __int8 *v30; // [esp-4h] [ebp-1E8h]
  int v31; // [esp-4h] [ebp-1E8h]
  int v32; // [esp-4h] [ebp-1E8h]
  int v33; // [esp-4h] [ebp-1E8h]
  int v34; // [esp-4h] [ebp-1E8h]
  int v35; // [esp-4h] [ebp-1E8h]
  int v36; // [esp-4h] [ebp-1E8h]
  int v37; // [esp-4h] [ebp-1E8h]
  int v38; // [esp-4h] [ebp-1E8h]
  unsigned __int8 *v39; // [esp-4h] [ebp-1E8h]
  int v40; // [esp-4h] [ebp-1E8h]
  int v41; // [esp-4h] [ebp-1E8h]
  int v42; // [esp-4h] [ebp-1E8h]
  int v43; // [esp-4h] [ebp-1E8h]
  int v44; // [esp-4h] [ebp-1E8h]
  unsigned __int8 *v45; // [esp-4h] [ebp-1E8h]
  int v46; // [esp-4h] [ebp-1E8h]
  unsigned __int8 *v47; // [esp-4h] [ebp-1E8h]
  char v49; // [esp+4Bh] [ebp-199h] BYREF
  char v50; // [esp+4Ch] [ebp-198h] BYREF
  char v51; // [esp+4Dh] [ebp-197h] BYREF
  char v52; // [esp+4Eh] [ebp-196h] BYREF
  char v53; // [esp+4Fh] [ebp-195h] BYREF
  __int16 *v54; // [esp+50h] [ebp-194h]
  char v55; // [esp+55h] [ebp-18Fh] BYREF
  void *v56; // [esp+5Ch] [ebp-188h]
  char v57; // [esp+63h] [ebp-181h] BYREF
  char v58; // [esp+64h] [ebp-180h] BYREF
  char v59; // [esp+65h] [ebp-17Fh] BYREF
  char v60; // [esp+66h] [ebp-17Eh] BYREF
  char v61; // [esp+67h] [ebp-17Dh] BYREF
  __int16 *v62; // [esp+68h] [ebp-17Ch]
  char v63; // [esp+73h] [ebp-171h] BYREF
  char v64; // [esp+79h] [ebp-16Bh] BYREF
  char v65; // [esp+7Dh] [ebp-167h] BYREF
  char v66; // [esp+83h] [ebp-161h] BYREF
  char v67; // [esp+89h] [ebp-15Bh] BYREF
  void *v68; // [esp+90h] [ebp-154h]
  char v69; // [esp+97h] [ebp-14Dh] BYREF
  char v70; // [esp+98h] [ebp-14Ch] BYREF
  char v71; // [esp+99h] [ebp-14Bh] BYREF
  char v72; // [esp+9Ah] [ebp-14Ah] BYREF
  char v73; // [esp+9Bh] [ebp-149h] BYREF
  __int16 *v74; // [esp+9Ch] [ebp-148h]
  char v75; // [esp+A3h] [ebp-141h] BYREF
  char v76; // [esp+A7h] [ebp-13Dh] BYREF
  char v77; // [esp+ADh] [ebp-137h] BYREF
  char v78; // [esp+B3h] [ebp-131h] BYREF
  char v79; // [esp+B4h] [ebp-130h] BYREF
  char v80; // [esp+B5h] [ebp-12Fh] BYREF
  char v81; // [esp+BAh] [ebp-12Ah] BYREF
  char v82; // [esp+BBh] [ebp-129h] BYREF
  void *v83; // [esp+BCh] [ebp-128h]
  char v84; // [esp+C3h] [ebp-121h] BYREF
  char v85; // [esp+C4h] [ebp-120h] BYREF
  char v86; // [esp+C5h] [ebp-11Fh] BYREF
  char v87; // [esp+C6h] [ebp-11Eh] BYREF
  char v88; // [esp+C7h] [ebp-11Dh] BYREF
  __int16 *v89; // [esp+C8h] [ebp-11Ch]
  void *v90; // [esp+E0h] [ebp-104h]
  char v91; // [esp+E7h] [ebp-FDh] BYREF
  char v92; // [esp+E8h] [ebp-FCh] BYREF
  char v93; // [esp+E9h] [ebp-FBh] BYREF
  char v94; // [esp+EAh] [ebp-FAh] BYREF
  char v95; // [esp+EBh] [ebp-F9h] BYREF
  __int16 *v96; // [esp+ECh] [ebp-F8h]
  char v97; // [esp+F7h] [ebp-EDh] BYREF
  char v98; // [esp+FAh] [ebp-EAh] BYREF
  char v99; // [esp+FBh] [ebp-E9h]
  char v100; // [esp+FCh] [ebp-E8h]
  unsigned __int8 v101; // [esp+FDh] [ebp-E7h]
  char v102; // [esp+FEh] [ebp-E6h]
  char v103; // [esp+FFh] [ebp-E5h]
  char v104; // [esp+100h] [ebp-E4h]
  unsigned __int8 v105; // [esp+101h] [ebp-E3h]
  char v106; // [esp+102h] [ebp-E2h]
  char v107; // [esp+103h] [ebp-E1h]
  __int16 nn; // [esp+104h] [ebp-E0h]
  __int16 v109; // [esp+108h] [ebp-DCh]
  __int16 *v110; // [esp+10Ch] [ebp-D8h]
  __int16 v111; // [esp+110h] [ebp-D4h]
  __int16 v112; // [esp+114h] [ebp-D0h]
  __int16 v113; // [esp+118h] [ebp-CCh]
  __int16 v114; // [esp+11Ch] [ebp-C8h]
  char v115; // [esp+122h] [ebp-C2h]
  unsigned __int8 mm; // [esp+123h] [ebp-C1h]
  __int16 v117; // [esp+124h] [ebp-C0h]
  char v118; // [esp+129h] [ebp-BBh]
  char v119; // [esp+12Ah] [ebp-BAh]
  unsigned __int8 v120; // [esp+12Bh] [ebp-B9h]
  char v121; // [esp+12Ch] [ebp-B8h]
  char v122; // [esp+12Dh] [ebp-B7h]
  unsigned __int8 v123; // [esp+12Eh] [ebp-B6h]
  char v124; // [esp+12Fh] [ebp-B5h]
  __int16 kk; // [esp+130h] [ebp-B4h]
  __int16 v126; // [esp+134h] [ebp-B0h]
  __int16 *v127; // [esp+138h] [ebp-ACh]
  __int16 v128; // [esp+13Ch] [ebp-A8h]
  __int16 v129; // [esp+140h] [ebp-A4h]
  __int16 v130; // [esp+144h] [ebp-A0h]
  char v131; // [esp+14Ah] [ebp-9Ah]
  unsigned __int8 jj; // [esp+14Bh] [ebp-99h]
  __int16 v133; // [esp+14Ch] [ebp-98h]
  char v134; // [esp+153h] [ebp-91h]
  char v135; // [esp+154h] [ebp-90h]
  unsigned __int8 v136; // [esp+155h] [ebp-8Fh]
  char v137; // [esp+156h] [ebp-8Eh]
  char v138; // [esp+157h] [ebp-8Dh]
  char v139; // [esp+158h] [ebp-8Ch]
  unsigned __int8 v140; // [esp+159h] [ebp-8Bh]
  char v141; // [esp+15Ah] [ebp-8Ah]
  char v142; // [esp+15Bh] [ebp-89h]
  __int16 ii; // [esp+15Ch] [ebp-88h]
  __int16 v144; // [esp+160h] [ebp-84h]
  __int16 *v145; // [esp+164h] [ebp-80h]
  __int16 v146; // [esp+168h] [ebp-7Ch]
  __int16 v147; // [esp+16Ch] [ebp-78h]
  __int16 v148; // [esp+170h] [ebp-74h]
  __int16 v149; // [esp+174h] [ebp-70h]
  char v150; // [esp+17Ah] [ebp-6Ah]
  unsigned __int8 n; // [esp+17Bh] [ebp-69h]
  __int16 v152; // [esp+17Ch] [ebp-68h]
  int v153; // [esp+180h] [ebp-64h] BYREF
  char v154; // [esp+185h] [ebp-5Fh]
  char v155; // [esp+186h] [ebp-5Eh]
  unsigned __int8 v156; // [esp+187h] [ebp-5Dh]
  char v157; // [esp+188h] [ebp-5Ch]
  char v158; // [esp+189h] [ebp-5Bh]
  unsigned __int8 v159; // [esp+18Ah] [ebp-5Ah]
  char v160; // [esp+18Bh] [ebp-59h]
  __int16 m; // [esp+18Ch] [ebp-58h]
  __int16 v162; // [esp+190h] [ebp-54h]
  __int16 *v163; // [esp+194h] [ebp-50h]
  __int16 v164; // [esp+198h] [ebp-4Ch]
  __int16 v165; // [esp+19Ch] [ebp-48h]
  __int16 v166; // [esp+1A0h] [ebp-44h]
  char v167; // [esp+1A6h] [ebp-3Eh]
  unsigned __int8 k; // [esp+1A7h] [ebp-3Dh]
  __int16 v169; // [esp+1A8h] [ebp-3Ch]
  __int16 v170; // [esp+1ACh] [ebp-38h]
  char v171; // [esp+1B2h] [ebp-32h]
  unsigned __int8 v172; // [esp+1B3h] [ebp-31h]
  __int16 v173; // [esp+1B4h] [ebp-30h]
  char v174; // [esp+1B9h] [ebp-2Bh]
  char v175; // [esp+1BAh] [ebp-2Ah]
  unsigned __int8 v176; // [esp+1BBh] [ebp-29h]
  __int16 j; // [esp+1BCh] [ebp-28h]
  __int16 *v178; // [esp+1C0h] [ebp-24h]
  __int16 v179; // [esp+1C4h] [ebp-20h]
  __int16 v180; // [esp+1C8h] [ebp-1Ch]
  char v181; // [esp+1CEh] [ebp-16h]
  unsigned __int8 i; // [esp+1CFh] [ebp-15h]
  __int16 v183; // [esp+1D0h] [ebp-14h]
  int v184; // [esp+1D4h] [ebp-10h] BYREF
  int v185; // [esp+1E0h] [ebp-4h]

  if ( *(this + 2) && (*(this + 2) < 3 || *(this + 2) > 5) )
    sub_5E9F20((char)"(shSize==0) || ((shSize>=3) && (shSize<=5))", "..\\Casino\\PokerHand.cpp", 2917);
  switch ( *(this + 2) )
  {
    case 0:
      return 0;
    case 3:
      sub_485940(this, &v184, 1, 1, 1, 1, 0, 0, 0);
      v185 = 0;
      v27 = dword_791418;
      sub_4A2160(&v98);
      if ( (unsigned __int8)sub_4A1E10(v27) )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v184);
        return 1;
      }
      else
      {
        v28 = dword_7913B0;
        sub_4A2160(&v97);
        if ( (unsigned __int8)sub_4A1E10(v28) )
        {
          if ( sub_484BF0(this) == 2 )
          {
            v185 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v184);
            return 2;
          }
          else
          {
            v185 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v184);
            return 3;
          }
        }
        else
        {
          v96 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
          v178 = v96;
          for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
            v178[i] = 0;
          v181 = 0;
          for ( j = 0; j < *(this + 2); ++j )
          {
            v2 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v95);
            v3 = sub_463F80(v2, &v94);
            ++v178[(unsigned __int8)*v3];
            v29 = (unsigned __int8 *)dword_7907A4;
            v4 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v93);
            if ( sub_464050(v4, v29) )
            {
              v5 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v92);
              v6 = sub_463FD0(v5, &v91);
              ++v178[(unsigned __int8)*v6];
              v181 = 1;
            }
          }
          v179 = 0;
          v183 = 0;
          if ( v181 )
          {
            v173 = 0;
            v176 = 0;
            v174 = 0;
            v175 = 0;
            for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
            {
              if ( v178[i] > 0 )
              {
                if ( v176 )
                {
                  if ( v174 )
                  {
                    if ( v175 )
                    {
                      v173 = i - 1 - v176;
                      break;
                    }
                    v183 = i - 1 - v176;
                    v175 = 1;
                  }
                  else
                  {
                    v179 = i - 1 - v176;
                    v174 = 1;
                  }
                }
                v176 = i;
              }
            }
            if ( v173 < v179 )
              v179 = v173;
          }
          else
          {
            v172 = 0;
            v171 = 0;
            for ( i = *(_BYTE *)dword_7913F0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
            {
              if ( v178[i] > 0 )
              {
                if ( v172 )
                {
                  if ( v171 )
                  {
                    v183 = i - 1 - v172;
                    break;
                  }
                  v179 = i - 1 - v172;
                  v171 = 1;
                }
                v172 = i;
              }
            }
          }
          v90 = v178;
          operator delete(v178);
          if ( v183 + v179 > 2 )
            v180 = v179 <= 2 || v183 <= 2;
          else
            v180 = 2;
          if ( sub_484BF0(this) == 3 )
          {
            if ( v180 == 2 )
            {
              v185 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v184);
              return 4;
            }
            else
            {
              v185 = -1;
              if ( v180 == 1 )
              {
                ATL::CComCriticalSection::~CComCriticalSection(&v184);
                return 5;
              }
              else
              {
                ATL::CComCriticalSection::~CComCriticalSection(&v184);
                return 6;
              }
            }
          }
          else if ( sub_484BF0(this) == 2 )
          {
            if ( v180 == 2 )
            {
              v185 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v184);
              return 7;
            }
            else
            {
              v185 = -1;
              if ( v180 == 1 )
              {
                ATL::CComCriticalSection::~CComCriticalSection(&v184);
                return 8;
              }
              else
              {
                ATL::CComCriticalSection::~CComCriticalSection(&v184);
                return 9;
              }
            }
          }
          else if ( v180 == 2 )
          {
            v185 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v184);
            return 10;
          }
          else
          {
            v185 = -1;
            if ( v180 == 1 )
            {
              ATL::CComCriticalSection::~CComCriticalSection(&v184);
              return 11;
            }
            else
            {
              ATL::CComCriticalSection::~CComCriticalSection(&v184);
              return 12;
            }
          }
        }
      }
    case 4:
      v170 = sub_49B360();
      switch ( v170 )
      {
        case 27:
          return 13;
        case 26:
        case 25:
          return 14;
        case 24:
          return 15;
        case 23:
          return 16;
        case 22:
          return 17;
        case 21:
          return 18;
        case 20:
          return 19;
        case 19:
        case 18:
          return 20;
        case 17:
          return 21;
      }
      if ( v170 > 16 )
        sub_5E9F20((char)"shCincinnatiIndex <= 16", "..\\Casino\\PokerHand.cpp", 3074);
      if ( v170 < 12 )
        sub_5E9F20((char)"shCincinnatiIndex >= 12", "..\\Casino\\PokerHand.cpp", 3075);
      v89 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
      v163 = v89;
      for ( k = 0; k <= (int)*(unsigned __int8 *)dword_7913C8; ++k )
        v163[k] = 0;
      v167 = 0;
      for ( m = 0; m < *(this + 2); ++m )
      {
        v7 = sub_464480((_BYTE *)(*(_DWORD *)this + m), &v88);
        v8 = sub_463F80(v7, &v87);
        ++v163[(unsigned __int8)*v8];
        v30 = (unsigned __int8 *)dword_7907A4;
        v9 = sub_464480((_BYTE *)(*(_DWORD *)this + m), &v86);
        if ( sub_464050(v9, v30) )
        {
          v10 = sub_464480((_BYTE *)(*(_DWORD *)this + m), &v85);
          v11 = sub_463FD0(v10, &v84);
          ++v163[(unsigned __int8)*v11];
          v167 = 1;
        }
      }
      v164 = 0;
      v169 = 0;
      v162 = 0;
      v166 = 0;
      if ( v167 )
      {
        v159 = 0;
        v157 = 0;
        v158 = 0;
        v160 = 0;
        for ( k = *(_BYTE *)dword_7913B4; k <= (int)*(unsigned __int8 *)dword_7913C8; ++k )
        {
          if ( v163[k] > 0 )
          {
            if ( v159 )
            {
              if ( v157 )
              {
                if ( v158 )
                {
                  if ( v160 )
                  {
                    v166 = k - 1 - v159;
                    break;
                  }
                  v162 = k - 1 - v159;
                  v160 = 1;
                }
                else
                {
                  v169 = k - 1 - v159;
                  v158 = 1;
                }
              }
              else
              {
                v164 = k - 1 - v159;
                v157 = 1;
              }
            }
            v159 = k;
          }
        }
      }
      else
      {
        v156 = 0;
        v154 = 0;
        v155 = 0;
        for ( k = *(_BYTE *)dword_7913F0; k <= (int)*(unsigned __int8 *)dword_7913E0; ++k )
        {
          if ( v163[k] > 0 )
          {
            if ( v156 )
            {
              if ( v154 )
              {
                if ( v155 )
                {
                  v162 = k - 1 - v156;
                  break;
                }
                v169 = k - 1 - v156;
                v155 = 1;
              }
              else
              {
                v164 = k - 1 - v156;
                v154 = 1;
              }
            }
            v156 = k;
          }
        }
      }
      v83 = v163;
      operator delete(v163);
      if ( v167 )
      {
        if ( v162 + v169 + v164 > 1 )
        {
          if ( v166 + v162 + v169 > 1 )
          {
            if ( v169 + v164 > 2 )
            {
              if ( v162 + v169 > 2 )
              {
                if ( v166 + v162 > 2 )
                  v165 = v164 <= 3 || v169 <= 3 || v162 <= 3 || v166 <= 3;
                else
                  v165 = 2;
              }
              else
              {
                v165 = 2;
              }
            }
            else
            {
              v165 = 2;
            }
          }
          else
          {
            v165 = 3;
          }
        }
        else
        {
          v165 = 3;
        }
      }
      else if ( v162 + v169 + v164 > 1 )
      {
        if ( v169 + v164 > 2 )
        {
          if ( v162 + v169 > 2 )
            v165 = v164 <= 3 || v169 <= 3 || v162 <= 3;
          else
            v165 = 2;
        }
        else
        {
          v165 = 2;
        }
      }
      else
      {
        v165 = 3;
      }
      switch ( v170 )
      {
        case 16:
          switch ( v165 )
          {
            case 3:
              return 22;
            case 2:
              return 23;
            case 1:
              return 24;
          }
          return 25;
        case 15:
          switch ( v165 )
          {
            case 3:
              return 26;
            case 2:
              return 27;
            case 1:
              return 28;
          }
          return 29;
        case 14:
          switch ( v165 )
          {
            case 3:
              return 30;
            case 2:
              return 31;
            case 1:
              return 32;
          }
          return 33;
        case 13:
          switch ( v165 )
          {
            case 3:
              return 34;
            case 2:
              return 35;
            case 1:
              return 36;
          }
          return 37;
        case 12:
          switch ( v165 )
          {
            case 3:
              return 38;
            case 2:
              return 39;
            case 1:
              return 40;
          }
          return 41;
      }
      sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 3255);
      return 0;
  }
  if ( *(this + 2) != 5 )
  {
    sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 3762);
    return 0;
  }
  sub_485940(this, &v153, 1, 1, 1, 1, 0, 0, 0);
  v185 = 1;
  v31 = dword_791398;
  sub_4A2160(&v82);
  if ( (unsigned __int8)sub_4A1E10(v31) )
  {
    v32 = dword_7913C8;
    sub_4A21B0(&v81);
    if ( (unsigned __int8)sub_4A1FB0(v32) )
    {
      v185 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v153);
      return 42;
    }
    else
    {
      v185 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v153);
      return 43;
    }
  }
  v33 = dword_791394;
  sub_4A2160(&v80);
  if ( (unsigned __int8)sub_4A1E10(v33) )
  {
    v34 = dword_7913C8;
    sub_4A21B0(&v79);
    if ( (unsigned __int8)sub_4A1FB0(v34) )
    {
      v35 = dword_7913E0;
      sub_4A2200(&v78);
      if ( (unsigned __int8)sub_4A1FB0(v35) )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 44;
      }
      else
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 45;
      }
    }
    else
    {
      v36 = dword_7913C8;
      sub_4A2200(&v77);
      if ( (unsigned __int8)sub_4A1FB0(v36) )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 44;
      }
      else
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 45;
      }
    }
  }
  v37 = dword_7913D4;
  sub_4A2160(&v76);
  if ( (unsigned __int8)sub_4A1E10(v37) )
  {
    v185 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v153);
    return 46;
  }
  v38 = dword_7913A0;
  sub_4A2160(&v75);
  if ( (unsigned __int8)sub_4A1E10(v38) )
  {
    v74 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
    v145 = v74;
    for ( n = 0; n <= (int)*(unsigned __int8 *)dword_7913C8; ++n )
      v145[n] = 0;
    v150 = 0;
    for ( ii = 0; ii < *(this + 2); ++ii )
    {
      v12 = sub_464480((_BYTE *)(*(_DWORD *)this + ii), &v73);
      v13 = sub_463F80(v12, &v72);
      ++v145[(unsigned __int8)*v13];
      v39 = (unsigned __int8 *)dword_7907A4;
      v14 = sub_464480((_BYTE *)(*(_DWORD *)this + ii), &v71);
      if ( sub_464050(v14, v39) )
      {
        v15 = sub_464480((_BYTE *)(*(_DWORD *)this + ii), &v70);
        v16 = sub_463FD0(v15, &v69);
        ++v145[(unsigned __int8)*v16];
        v150 = 1;
      }
    }
    v146 = 0;
    v152 = 0;
    v144 = 0;
    v148 = 0;
    v149 = 0;
    if ( v150 )
    {
      v140 = 0;
      v138 = 0;
      v139 = 0;
      v141 = 0;
      v142 = 0;
      for ( n = *(_BYTE *)dword_7913B4; n <= (int)*(unsigned __int8 *)dword_7913C8; ++n )
      {
        if ( v145[n] > 0 )
        {
          if ( v140 )
          {
            if ( v138 )
            {
              if ( v139 )
              {
                if ( v141 )
                {
                  if ( v142 )
                  {
                    v149 = n - 1 - v140;
                    break;
                  }
                  v148 = n - 1 - v140;
                  v142 = 1;
                }
                else
                {
                  v144 = n - 1 - v140;
                  v141 = 1;
                }
              }
              else
              {
                v152 = n - 1 - v140;
                v139 = 1;
              }
            }
            else
            {
              v146 = n - 1 - v140;
              v138 = 1;
            }
          }
          v140 = n;
        }
      }
    }
    else
    {
      v136 = 0;
      v134 = 0;
      v135 = 0;
      v137 = 0;
      for ( n = *(_BYTE *)dword_7913F0; n <= (int)*(unsigned __int8 *)dword_7913E0; ++n )
      {
        if ( v145[n] > 0 )
        {
          if ( v136 )
          {
            if ( v134 )
            {
              if ( v135 )
              {
                if ( v137 )
                {
                  v148 = n - 1 - v136;
                  break;
                }
                v144 = n - 1 - v136;
                v137 = 1;
              }
              else
              {
                v152 = n - 1 - v136;
                v135 = 1;
              }
            }
            else
            {
              v146 = n - 1 - v136;
              v134 = 1;
            }
          }
          v136 = n;
        }
      }
    }
    v68 = v145;
    operator delete(v145);
    if ( v150 )
    {
      if ( v144 + v152 + v146 > 1 )
      {
        if ( v148 + v144 + v152 > 1 )
        {
          if ( v149 + v148 + v144 > 1 )
          {
            if ( v152 + v146 > 2 )
            {
              if ( v144 + v152 > 2 )
                v147 = v148 + v144 <= 2 || v149 + v148 <= 2;
              else
                v147 = 1;
            }
            else
            {
              v147 = 1;
            }
          }
          else
          {
            v147 = 2;
          }
        }
        else
        {
          v147 = 2;
        }
      }
      else
      {
        v147 = 2;
      }
    }
    else if ( v144 + v152 + v146 > 1 )
    {
      if ( v148 + v144 + v152 > 1 )
      {
        if ( v152 + v146 > 2 )
          v147 = v144 + v152 <= 2 || v148 + v144 <= 2;
        else
          v147 = 1;
      }
      else
      {
        v147 = 2;
      }
    }
    else
    {
      v147 = 2;
    }
    if ( v147 == 2 )
    {
      v185 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v153);
      return 47;
    }
    else
    {
      v185 = -1;
      if ( v147 == 1 )
      {
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 48;
      }
      else
      {
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 49;
      }
    }
  }
  else
  {
    v40 = dword_79140C;
    sub_4A2160(&v67);
    if ( (unsigned __int8)sub_4A1E10(v40) )
    {
      if ( sub_484BF0(this) == 4 )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 50;
      }
      else if ( sub_484BF0(this) == 3 )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 51;
      }
      else
      {
        v41 = dword_7913C8;
        sub_4A21B0(&v66);
        if ( (unsigned __int8)sub_4A1FB0(v41) )
        {
          v185 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 52;
        }
        else
        {
          v185 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 53;
        }
      }
    }
    v42 = dword_791418;
    sub_4A2160(&v65);
    if ( (unsigned __int8)sub_4A1E10(v42) )
    {
      v185 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v153);
      return 54;
    }
    v43 = dword_791380;
    sub_4A2160(&v64);
    if ( (unsigned __int8)sub_4A1E10(v43) )
    {
      if ( sub_484BF0(this) == 3 )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 55;
      }
      else
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 56;
      }
    }
    v44 = dword_7913B0;
    sub_4A2160(&v63);
    if ( (unsigned __int8)sub_4A1E10(v44) )
    {
      if ( sub_484BF0(this) == 4 )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 57;
      }
      else if ( sub_484BF0(this) == 3 )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 58;
      }
      else
      {
        v62 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
        v127 = v62;
        for ( jj = 0; jj <= (int)*(unsigned __int8 *)dword_7913C8; ++jj )
          v127[jj] = 0;
        v131 = 0;
        for ( kk = 0; kk < *(this + 2); ++kk )
        {
          v17 = sub_464480((_BYTE *)(*(_DWORD *)this + kk), &v61);
          v18 = sub_463F80(v17, &v60);
          ++v127[(unsigned __int8)*v18];
          v45 = (unsigned __int8 *)dword_7907A4;
          v19 = sub_464480((_BYTE *)(*(_DWORD *)this + kk), &v59);
          if ( sub_464050(v19, v45) )
          {
            v20 = sub_464480((_BYTE *)(*(_DWORD *)this + kk), &v58);
            v21 = sub_463FD0(v20, &v57);
            ++v127[(unsigned __int8)*v21];
            v131 = 1;
          }
        }
        v128 = 0;
        v133 = 0;
        v126 = 0;
        v130 = 0;
        if ( v131 )
        {
          v123 = 0;
          v121 = 0;
          v122 = 0;
          v124 = 0;
          for ( jj = *(_BYTE *)dword_7913B4; jj <= (int)*(unsigned __int8 *)dword_7913C8; ++jj )
          {
            if ( v127[jj] > 0 )
            {
              if ( v123 )
              {
                if ( v121 )
                {
                  if ( v122 )
                  {
                    if ( v124 )
                    {
                      v130 = jj - 1 - v123;
                      break;
                    }
                    v126 = jj - 1 - v123;
                    v124 = 1;
                  }
                  else
                  {
                    v133 = jj - 1 - v123;
                    v122 = 1;
                  }
                }
                else
                {
                  v128 = jj - 1 - v123;
                  v121 = 1;
                }
              }
              v123 = jj;
            }
          }
        }
        else
        {
          v120 = 0;
          v118 = 0;
          v119 = 0;
          for ( jj = *(_BYTE *)dword_7913F0; jj <= (int)*(unsigned __int8 *)dword_7913E0; ++jj )
          {
            if ( v127[jj] > 0 )
            {
              if ( v120 )
              {
                if ( v118 )
                {
                  if ( v119 )
                  {
                    v126 = jj - 1 - v120;
                    break;
                  }
                  v133 = jj - 1 - v120;
                  v119 = 1;
                }
                else
                {
                  v128 = jj - 1 - v120;
                  v118 = 1;
                }
              }
              v120 = jj;
            }
          }
        }
        v56 = v127;
        operator delete(v127);
        if ( v131 )
        {
          if ( v126 + v133 + v128 > 1 )
          {
            if ( v130 + v126 + v133 > 1 )
            {
              if ( v133 + v128 > 2 )
                v129 = v126 + v133 <= 2 || v130 + v126 <= 2;
              else
                v129 = 1;
            }
            else
            {
              v129 = 2;
            }
          }
          else
          {
            v129 = 2;
          }
        }
        else if ( v126 + v133 + v128 > 1 )
        {
          v129 = v133 + v128 <= 2 || v126 + v133 <= 2;
        }
        else
        {
          v129 = 2;
        }
        if ( v129 == 2 )
        {
          v185 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 59;
        }
        else
        {
          v185 = -1;
          if ( v129 == 1 )
          {
            ATL::CComCriticalSection::~CComCriticalSection(&v153);
            return 60;
          }
          else
          {
            ATL::CComCriticalSection::~CComCriticalSection(&v153);
            return 61;
          }
        }
      }
    }
    else
    {
      v46 = dword_791390;
      sub_4A2160(&v55);
      if ( !(unsigned __int8)sub_4A1E10(v46) )
      {
        sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 3759);
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 0;
      }
      v54 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
      v110 = v54;
      for ( mm = 0; mm <= (int)*(unsigned __int8 *)dword_7913C8; ++mm )
        v110[mm] = 0;
      v115 = 0;
      for ( nn = 0; nn < *(this + 2); ++nn )
      {
        v22 = sub_464480((_BYTE *)(*(_DWORD *)this + nn), &v53);
        v23 = sub_463F80(v22, &v52);
        ++v110[(unsigned __int8)*v23];
        v47 = (unsigned __int8 *)dword_7907A4;
        v24 = sub_464480((_BYTE *)(*(_DWORD *)this + nn), &v51);
        if ( sub_464050(v24, v47) )
        {
          v25 = sub_464480((_BYTE *)(*(_DWORD *)this + nn), &v50);
          v26 = sub_463FD0(v25, &v49);
          ++v110[(unsigned __int8)*v26];
          v115 = 1;
        }
      }
      v111 = 0;
      v117 = 0;
      v109 = 0;
      v113 = 0;
      v114 = 0;
      if ( v115 )
      {
        v105 = 0;
        v103 = 0;
        v104 = 0;
        v106 = 0;
        v107 = 0;
        for ( mm = *(_BYTE *)dword_7913B4; mm <= (int)*(unsigned __int8 *)dword_7913C8; ++mm )
        {
          if ( v110[mm] > 0 )
          {
            if ( v105 )
            {
              if ( v103 )
              {
                if ( v104 )
                {
                  if ( v106 )
                  {
                    if ( v107 )
                    {
                      v114 = mm - 1 - v105;
                      break;
                    }
                    v113 = mm - 1 - v105;
                    v107 = 1;
                  }
                  else
                  {
                    v109 = mm - 1 - v105;
                    v106 = 1;
                  }
                }
                else
                {
                  v117 = mm - 1 - v105;
                  v104 = 1;
                }
              }
              else
              {
                v111 = mm - 1 - v105;
                v103 = 1;
              }
            }
            v105 = mm;
          }
        }
      }
      else
      {
        v101 = 0;
        v99 = 0;
        v100 = 0;
        v102 = 0;
        for ( mm = *(_BYTE *)dword_7913F0; mm <= (int)*(unsigned __int8 *)dword_7913E0; ++mm )
        {
          if ( v110[mm] > 0 )
          {
            if ( v101 )
            {
              if ( v99 )
              {
                if ( v100 )
                {
                  if ( v102 )
                  {
                    v113 = mm - 1 - v101;
                    break;
                  }
                  v109 = mm - 1 - v101;
                  v102 = 1;
                }
                else
                {
                  v117 = mm - 1 - v101;
                  v100 = 1;
                }
              }
              else
              {
                v111 = mm - 1 - v101;
                v99 = 1;
              }
            }
            v101 = mm;
          }
        }
      }
      operator delete(v110);
      if ( v115 )
      {
        if ( v109 + v117 + v111 > 1 )
        {
          if ( v113 + v109 + v117 > 1 )
          {
            if ( v114 + v113 + v109 > 1 )
            {
              if ( v117 + v111 > 2 )
              {
                if ( v109 + v117 > 2 )
                  v112 = v113 + v109 <= 2 || v114 + v113 <= 2;
                else
                  v112 = 1;
              }
              else
              {
                v112 = 1;
              }
            }
            else
            {
              v112 = 2;
            }
          }
          else
          {
            v112 = 2;
          }
        }
        else
        {
          v112 = 2;
        }
      }
      else if ( v109 + v117 + v111 > 1 )
      {
        if ( v113 + v109 + v117 > 1 )
        {
          if ( v117 + v111 > 2 )
            v112 = v109 + v117 <= 2 || v113 + v109 <= 2;
          else
            v112 = 1;
        }
        else
        {
          v112 = 2;
        }
      }
      else
      {
        v112 = 2;
      }
      if ( sub_484BF0(this) == 4 )
      {
        if ( v112 == 2 )
        {
          v185 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 62;
        }
        else
        {
          v185 = -1;
          if ( v112 == 1 )
          {
            ATL::CComCriticalSection::~CComCriticalSection(&v153);
            return 63;
          }
          else
          {
            ATL::CComCriticalSection::~CComCriticalSection(&v153);
            return 64;
          }
        }
      }
      else if ( sub_484BF0(this) == 3 )
      {
        if ( v112 == 2 )
        {
          v185 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 65;
        }
        else
        {
          v185 = -1;
          if ( v112 == 1 )
          {
            ATL::CComCriticalSection::~CComCriticalSection(&v153);
            return 66;
          }
          else
          {
            ATL::CComCriticalSection::~CComCriticalSection(&v153);
            return 67;
          }
        }
      }
      else if ( v112 == 2 )
      {
        v185 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v153);
        return 68;
      }
      else
      {
        v185 = -1;
        if ( v112 == 1 )
        {
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 69;
        }
        else
        {
          ATL::CComCriticalSection::~CComCriticalSection(&v153);
          return 70;
        }
      }
    }
  }
}


//======================================================================
// sub_491870
// entry 00491870  size 293  status ok
//======================================================================

__int16 __thiscall sub_491870(_WORD *this)
{
  _BYTE *v1; // eax
  _BYTE *v2; // eax
  char v5; // [esp+Eh] [ebp-16h] BYREF
  char v6; // [esp+Fh] [ebp-15h] BYREF
  __int16 *v7; // [esp+10h] [ebp-14h]
  __int16 j; // [esp+14h] [ebp-10h]
  __int16 v9; // [esp+18h] [ebp-Ch]
  __int16 *v10; // [esp+1Ch] [ebp-8h]
  unsigned __int8 i; // [esp+23h] [ebp-1h]

  v9 = 0;
  v7 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v10 = v7;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v10[i] = 0;
  for ( j = 0; j < (__int16)*(this + 2); ++j )
  {
    v1 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v6);
    v2 = sub_463FD0(v1, &v5);
    ++v10[(unsigned __int8)*v2];
  }
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_791410; ++i )
  {
    if ( v10[i] > 0 )
      ++v9;
  }
  operator delete(v10);
  return v9;
}


//======================================================================
// sub_4919A0
// entry 004919a0  size 1094  status ok
//======================================================================

_DWORD *__thiscall sub_4919A0(_WORD *this, _DWORD *a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  char v6; // [esp+16h] [ebp-4Ah] BYREF
  char v7; // [esp+17h] [ebp-49h] BYREF
  __int16 *v8; // [esp+18h] [ebp-48h]
  __int16 j; // [esp+1Ch] [ebp-44h]
  unsigned __int8 i; // [esp+23h] [ebp-3Dh]
  __int16 *v11; // [esp+24h] [ebp-3Ch]
  _DWORD v12[5]; // [esp+28h] [ebp-38h]
  __int16 v13; // [esp+3Ch] [ebp-24h]
  unsigned __int8 v14; // [esp+43h] [ebp-1Dh]
  int v15; // [esp+44h] [ebp-1Ch] BYREF
  __int16 v16; // [esp+48h] [ebp-18h]
  __int16 v17; // [esp+4Ch] [ebp-14h]
  __int16 v18; // [esp+50h] [ebp-10h]
  int v19; // [esp+5Ch] [ebp-4h]

  if ( sub_491870(this) < 3 )
    sub_5E9F20((char)"GetDifferentEightsOrBetterCount() >= 3", "..\\Casino\\PokerHand.cpp", 3794);
  if ( (__int16)*(this + 2) > 5 )
    sub_5E9F20((char)"shSize <= 5", "..\\Casino\\PokerHand.cpp", 3795);
  v8 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v11 = v8;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v11[i] = 0;
  for ( j = 0; j < (__int16)*(this + 2); ++j )
  {
    v2 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v7);
    v3 = sub_463FD0(v2, &v6);
    ++v11[(unsigned __int8)*v3];
  }
  sub_4A20D0(&v15);
  v19 = 1;
  v18 = 0;
  v14 = *(_BYTE *)dword_7913B4;
  v16 = 0;
  v13 = 0;
  v17 = 0;
  while ( v18 < 5 )
  {
    if ( v11[v14] > 0 && v11[v14] < 4 )
    {
      ++v17;
      goto LABEL_35;
    }
    if ( v13 < 2 && v11[v14] < 4 )
    {
      ++v13;
      while ( v17 + v13 > 2 )
      {
        --v17;
        if ( ++v16 > 3 )
          sub_5E9F20((char)"shWidowUsed <= 3", "..\\Casino\\PokerHand.cpp", 3823);
      }
      goto LABEL_35;
    }
    if ( v11[v14] <= 0 || v16 >= 3 )
    {
      if ( ++v14 > (int)*(unsigned __int8 *)dword_791410 )
        sub_5E9F20((char)"ucCurrent <= EightValue.ucValue", "..\\Casino\\PokerHand.cpp", 3839);
    }
    else
    {
      ++v16;
      while ( v17 + v16 > 3 )
      {
        --v17;
        if ( ++v13 > 2 )
          sub_5E9F20((char)"shOwnUsed <= 2", "..\\Casino\\PokerHand.cpp", 3833);
      }
LABEL_35:
      if ( v14 == *(unsigned __int8 *)dword_7913B4 )
      {
        v12[v18] = dword_7913B4;
      }
      else if ( v14 == *(unsigned __int8 *)dword_7913F0 )
      {
        v12[v18] = dword_7913F0;
      }
      else if ( v14 == *(unsigned __int8 *)dword_7913D8 )
      {
        v12[v18] = dword_7913D8;
      }
      else if ( v14 == *(unsigned __int8 *)dword_791414 )
      {
        v12[v18] = dword_791414;
      }
      else if ( v14 == *(unsigned __int8 *)dword_7913A4 )
      {
        v12[v18] = dword_7913A4;
      }
      else if ( v14 == *(unsigned __int8 *)dword_791404 )
      {
        v12[v18] = dword_791404;
      }
      else if ( v14 == *(unsigned __int8 *)dword_7913F8 )
      {
        v12[v18] = dword_7913F8;
      }
      else if ( v14 == *(unsigned __int8 *)dword_791410 )
      {
        v12[v18] = dword_791410;
      }
      ++v14;
      ++v18;
    }
  }
  sub_4A2100(dword_791390, v12[4], v12[3], v12[2], v12[1], v12[0]);
  operator delete(v11);
  *a2 = v15;
  LOBYTE(v19) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v15);
  return a2;
}


//======================================================================
// sub_491DF0
// entry 00491df0  size 1588  status ok
//======================================================================

void __thiscall sub_491DF0(__int16 *this, int a2, __int16 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, char a7)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11[6]; // [esp-8h] [ebp-B4h] BYREF
  _DWORD *v12; // [esp+10h] [ebp-9Ch]
  __int16 *v13; // [esp+14h] [ebp-98h]
  _DWORD *v14; // [esp+18h] [ebp-94h]
  BOOL v15; // [esp+1Ch] [ebp-90h]
  int v16; // [esp+20h] [ebp-8Ch]
  int v17; // [esp+24h] [ebp-88h]
  int *v18; // [esp+28h] [ebp-84h]
  int *v19; // [esp+2Ch] [ebp-80h]
  _BYTE *v20; // [esp+30h] [ebp-7Ch]
  _BYTE *v21; // [esp+34h] [ebp-78h]
  _BYTE *v22; // [esp+38h] [ebp-74h]
  _BYTE *v23; // [esp+3Ch] [ebp-70h]
  __int16 *v24; // [esp+40h] [ebp-6Ch]
  int v25; // [esp+44h] [ebp-68h]
  _BYTE v26[5]; // [esp+4Ah] [ebp-62h] BYREF
  char v27; // [esp+4Fh] [ebp-5Dh]
  _BYTE v28[4]; // [esp+50h] [ebp-5Ch] BYREF
  int *v29; // [esp+54h] [ebp-58h]
  int v30; // [esp+58h] [ebp-54h] BYREF
  _BYTE v31[5]; // [esp+5Ch] [ebp-50h] BYREF
  bool v32; // [esp+61h] [ebp-4Bh]
  int v33; // [esp+62h] [ebp-4Ah] BYREF
  int v34; // [esp+66h] [ebp-46h] BYREF
  char v35; // [esp+6Ah] [ebp-42h] BYREF
  char v36; // [esp+6Bh] [ebp-41h] BYREF
  __int16 i; // [esp+6Ch] [ebp-40h]
  char v38; // [esp+73h] [ebp-39h] BYREF
  _DWORD v39[2]; // [esp+74h] [ebp-38h] BYREF
  __int16 v40; // [esp+7Ch] [ebp-30h]
  __int16 v41[4]; // [esp+80h] [ebp-2Ch] BYREF
  int v42; // [esp+88h] [ebp-24h] BYREF
  _BYTE v43[5]; // [esp+8Fh] [ebp-1Dh] BYREF
  _DWORD v44[2]; // [esp+94h] [ebp-18h] BYREF
  __int16 v45; // [esp+9Ch] [ebp-10h]
  int v46; // [esp+A8h] [ebp-4h]

  v24 = this;
  v25 = 0;
  v46 = 0;
  if ( *(this + 2) != 4 )
    sub_5E9F20((char)"shSize == 4", "..\\Casino\\PokerHand.cpp", 3876);
  if ( a3 < 3 )
    sub_5E9F20((char)"phWidow.shSize >= 3", "..\\Casino\\PokerHand.cpp", 3877);
  v23 = sub_464130(&v36, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  v22 = v23;
  LOBYTE(v46) = 1;
  v25 |= 1u;
  if ( sub_484BA0(v24, v23) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 3878);
  v46 = 0;
  if ( (v25 & 1) != 0 )
  {
    v25 &= ~1u;
    ATL::CComCriticalSection::~CComCriticalSection(&v36);
  }
  v21 = sub_464130(&v35, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  v20 = v21;
  LOBYTE(v46) = 2;
  v25 |= 2u;
  if ( sub_484BA0(v24, v21) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 3879);
  v46 = 0;
  if ( (v25 & 2) != 0 )
  {
    v25 &= ~2u;
    ATL::CComCriticalSection::~CComCriticalSection(&v35);
  }
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  sub_484300(v41);
  LOBYTE(v46) = 3;
  sub_4A20D0(&v42);
  LOBYTE(v46) = 4;
  if ( a7 )
  {
    v19 = sub_48CC10(v24, &v34, (int)&a2, 1, 1, 1, 1, 0, 0, 0);
    v42 = *v19;
    ATL::CComCriticalSection::~CComCriticalSection(&v34);
  }
  else
  {
    v18 = sub_48CC10(v24, &v33, (int)&a2, 0, 0, 1, 0, 0, 0, 0);
    v42 = *v18;
    ATL::CComCriticalSection::~CComCriticalSection(&v33);
  }
  sub_4A20D0(&v43[1]);
  LOBYTE(v46) = 5;
  sub_464110(&v38);
  LOBYTE(v46) = 6;
  sub_464110(v43);
  LOBYTE(v46) = 7;
  sub_4646A0(v44);
  LOBYTE(v46) = 8;
  sub_4646A0(v39);
  LOBYTE(v46) = 9;
  v15 = !a7
     && (sub_4A20D0(v31),
         v17 = v7,
         v16 = v7,
         LOBYTE(v46) = 10,
         v25 |= 4u,
         v8 = sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF),
         (unsigned __int8)sub_4A24D0(v8));
  v32 = v15;
  v46 = 9;
  if ( (v25 & 4) != 0 )
  {
    v25 &= ~4u;
    ATL::CComCriticalSection::~CComCriticalSection(v31);
  }
  if ( v32 )
    sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  sub_4646F0(v44);
  sub_4648B0(v44, *(_BYTE **)v24);
  sub_4648B0(v44, (_BYTE *)(*(_DWORD *)v24 + 1));
  sub_4648B0(v44, (_BYTE *)(*(_DWORD *)v24 + 2));
  sub_4648B0(v44, (_BYTE *)(*(_DWORD *)v24 + 3));
  for ( i = 0; i < a3; ++i )
    sub_4648B0(v44, (_BYTE *)(a2 + i));
  while ( sub_464A10((unsigned __int16 *)v44, &v38) )
  {
    v39[0] = v44[0];
    v39[1] = v44[1];
    v40 = v45;
    while ( sub_464A10((unsigned __int16 *)v39, v43) )
    {
      sub_484B80(v41);
      sub_484830(v41, &v38);
      sub_484830(v41, v43);
      if ( a7 )
      {
        v14 = sub_48CC10(v41, &v30, (int)&a2, 1, 1, 1, 1, 0, 0, 0);
        *(_DWORD *)&v43[1] = *v14;
        ATL::CComCriticalSection::~CComCriticalSection(&v30);
        if ( (unsigned __int8)sub_4A2440(&v42) )
        {
          ++*a4;
        }
        else if ( (unsigned __int8)sub_4A2340(&v42) )
        {
          ++*a5;
        }
        else
        {
          ++*a6;
        }
      }
      else
      {
        v29 = v11;
        v13 = sub_484320((__int16 *)v11, (int)&a2);
        v12 = (_DWORD *)sub_4A1350(v28, v11[0], v11[1]);
        v11[5] = (int)v12;
        *(_DWORD *)&v43[1] = *v12;
        ATL::CComCriticalSection::~CComCriticalSection(v28);
        sub_4A20D0(v26);
        v11[4] = v9;
        v11[3] = v9;
        LOBYTE(v46) = 11;
        v10 = sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        v27 = sub_4A24D0(v10);
        LOBYTE(v46) = 9;
        ATL::CComCriticalSection::~CComCriticalSection(v26);
        if ( v27 )
          sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
        if ( (unsigned __int8)sub_4A2550(&v42) )
        {
          ++*a4;
        }
        else if ( (unsigned __int8)sub_4A2340(&v42) )
        {
          ++*a5;
        }
        else
        {
          ++*a6;
        }
      }
    }
  }
  LOBYTE(v46) = 8;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v39);
  LOBYTE(v46) = 7;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v44);
  LOBYTE(v46) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(v43);
  LOBYTE(v46) = 5;
  ATL::CComCriticalSection::~CComCriticalSection(&v38);
  LOBYTE(v46) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v43[1]);
  LOBYTE(v46) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v42);
  LOBYTE(v46) = 0;
  sub_484470(v41);
  v46 = -1;
  sub_484470(&a2);
}


//======================================================================
// sub_492430
// entry 00492430  size 2222  status ok
//======================================================================

void __thiscall sub_492430(
        __int16 *this,
        _WORD *a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        __int16 *a9,
        _WORD *a10)
{
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // eax
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  unsigned __int8 *v17; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  int v20; // eax
  unsigned __int8 *v21; // [esp-4h] [ebp-B8h]
  unsigned __int8 *v22; // [esp-4h] [ebp-B8h]
  unsigned __int8 *v23; // [esp-4h] [ebp-B8h]
  unsigned __int8 *v24; // [esp-4h] [ebp-B8h]
  _BYTE *v25; // [esp-4h] [ebp-B8h]
  unsigned __int8 *v26; // [esp-4h] [ebp-B8h]
  _WORD *v27; // [esp+Ch] [ebp-A8h]
  int *v28; // [esp+10h] [ebp-A4h]
  _BYTE *v29; // [esp+1Ch] [ebp-98h]
  _BYTE *v30; // [esp+24h] [ebp-90h]
  _BYTE *v31; // [esp+2Ch] [ebp-88h]
  int *v33; // [esp+48h] [ebp-6Ch]
  int *v34; // [esp+4Ch] [ebp-68h]
  char v35; // [esp+57h] [ebp-5Dh] BYREF
  char v36; // [esp+58h] [ebp-5Ch] BYREF
  char v37; // [esp+59h] [ebp-5Bh] BYREF
  char v38; // [esp+5Ah] [ebp-5Ah] BYREF
  char v39; // [esp+5Bh] [ebp-59h] BYREF
  _WORD *v40; // [esp+5Ch] [ebp-58h]
  __int16 *v41; // [esp+60h] [ebp-54h]
  _BYTE v42[2]; // [esp+66h] [ebp-4Eh] BYREF
  char v43; // [esp+68h] [ebp-4Ch] BYREF
  char v44; // [esp+69h] [ebp-4Bh]
  char v45; // [esp+6Ah] [ebp-4Ah] BYREF
  char v46; // [esp+6Bh] [ebp-49h] BYREF
  char v47; // [esp+6Ch] [ebp-48h] BYREF
  char v48; // [esp+6Dh] [ebp-47h] BYREF
  char v49; // [esp+6Eh] [ebp-46h] BYREF
  char v50; // [esp+6Fh] [ebp-45h] BYREF
  __int16 v51; // [esp+70h] [ebp-44h]
  __int16 v52; // [esp+74h] [ebp-40h]
  unsigned __int8 ii; // [esp+7Ah] [ebp-3Ah]
  unsigned __int8 n; // [esp+7Bh] [ebp-39h]
  __int16 m; // [esp+7Ch] [ebp-38h]
  int v56; // [esp+80h] [ebp-34h]
  _WORD *v57; // [esp+84h] [ebp-30h]
  __int16 *v58; // [esp+88h] [ebp-2Ch]
  __int16 i; // [esp+8Ch] [ebp-28h]
  unsigned __int8 k; // [esp+93h] [ebp-21h]
  __int16 j; // [esp+94h] [ebp-20h]
  __int16 v62; // [esp+98h] [ebp-1Ch]
  __int16 v63; // [esp+9Ah] [ebp-1Ah]
  __int16 v64; // [esp+9Ch] [ebp-18h]
  __int16 v65; // [esp+9Eh] [ebp-16h]
  int *v66; // [esp+A4h] [ebp-10h]
  int v67; // [esp+B0h] [ebp-4h]

  if ( *(this + 2) != 4 )
    sub_5E9F20((char)"shSize == 4", "..\\Casino\\PokerHand.cpp", 3959);
  v31 = sub_464130(&v50, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  v67 = 0;
  if ( sub_484BA0(this, v31) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 3960);
  v67 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v50);
  v30 = sub_464130(&v49, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  v67 = 1;
  if ( sub_484BA0(this, v30) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 3961);
  v67 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v49);
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  for ( i = 0; i < 4; ++i )
    *(&v62 + i) = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v21 = (unsigned __int8 *)dword_79076C;
    v10 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v48);
    if ( sub_4640B0(v10, v21) )
    {
      ++v62;
    }
    else
    {
      v22 = (unsigned __int8 *)dword_790754;
      v11 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v47);
      if ( sub_4640B0(v11, v22) )
      {
        ++v63;
      }
      else
      {
        v23 = (unsigned __int8 *)dword_790764;
        v12 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v46);
        if ( sub_4640B0(v12, v23) )
        {
          ++v64;
        }
        else
        {
          v24 = (unsigned __int8 *)dword_790770;
          v13 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v45);
          if ( sub_4640B0(v13, v24) )
            ++v65;
        }
      }
    }
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( *(&v62 + i) >= 2 )
    {
      *a8 = *(&v62 + i) - 2;
      for ( k = *(_BYTE *)dword_7913C8; k >= (int)*(unsigned __int8 *)dword_7913F0; --k )
      {
        v56 = 0;
        if ( i )
        {
          switch ( i )
          {
            case 1:
              v56 = dword_790754;
              break;
            case 2:
              v56 = dword_790764;
              break;
            case 3:
              v56 = dword_790770;
              break;
          }
        }
        else
        {
          v56 = dword_79076C;
        }
        v42[1] = k;
        v25 = (_BYTE *)v56;
        v14 = (_BYTE *)sub_4A1F30(v42);
        v29 = sub_464130(&v43, v14, v25);
        v67 = 2;
        v44 = sub_484BA0(this, v29);
        v67 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v43);
        if ( v44 )
        {
          if ( *a9 <= 0 )
            *a9 = k - *(unsigned __int8 *)dword_7913F0 + 2;
          else
            *a10 = k - *(unsigned __int8 *)dword_7913F0 + 2;
          break;
        }
      }
    }
  }
  v41 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v58 = v41;
  v40 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v57 = v40;
  for ( k = 0; k <= (int)*(unsigned __int8 *)dword_7913C8; ++k )
    v58[k] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v15 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v39);
    v16 = sub_463F80(v15, &v38);
    ++v58[(unsigned __int8)*v16];
    v26 = (unsigned __int8 *)dword_7907A4;
    v17 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v37);
    if ( sub_464050(v17, v26) )
    {
      v18 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v36);
      v19 = sub_463FD0(v18, &v35);
      ++v58[(unsigned __int8)*v19];
    }
  }
  for ( k = *(_BYTE *)dword_7913F0; k <= (int)*(unsigned __int8 *)dword_7913C8; ++k )
  {
    if ( v58[k] >= 2 )
    {
      *a3 = v58[k] - 2;
      *a5 = *a4;
      *a4 = k - *(unsigned __int8 *)dword_7913F0 + 2;
    }
    if ( v58[k] >= 1 )
    {
      *a7 = *a6;
      *a6 = k - *(unsigned __int8 *)dword_7913F0 + 2;
    }
  }
  v34 = (int *)operator new(0xCu);
  v67 = 3;
  if ( v34 )
    v28 = sub_464ED0(v34, 13, 3);
  else
    v28 = 0;
  v67 = -1;
  v66 = v28;
LABEL_61:
  while ( sub_465000(v66) )
  {
    for ( k = 0; k <= (int)*(unsigned __int8 *)dword_7913C8; ++k )
      v57[k] = 0;
    for ( m = 0; m < 3; ++m )
    {
      v20 = sub_465110((int)v66, m);
      v27 = &v57[*(unsigned __int8 *)dword_7913B4 + v20];
      ++*v27;
    }
    v57[*(unsigned __int8 *)dword_7913C8] = v57[*(unsigned __int8 *)dword_7913B4];
    for ( n = *(_BYTE *)dword_7913C8; n >= (int)*(unsigned __int8 *)dword_7913A4; --n )
    {
      v51 = 0;
      v52 = 1;
      for ( ii = 0; ii < 5u; ++ii )
      {
        if ( (__int16)v57[n - ii] <= 0 )
        {
          if ( v58[n - ii] <= 0 )
            break;
        }
        else
        {
          ++v51;
          v52 *= 4 - v58[n - ii];
        }
      }
      if ( ii == 5 && v51 == 3 )
      {
        *a2 += v52;
        goto LABEL_61;
      }
    }
  }
  v33 = v66;
  if ( v66 )
  {
    sub_464FD0((void **)v66);
    operator delete(v33);
  }
  operator delete(v58);
  operator delete(v57);
}


//======================================================================
// sub_492CE0
// entry 00492ce0  size 7740  status ok
//======================================================================

void __thiscall sub_492CE0(
        __int16 *this,
        int a2,
        __int16 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        _DWORD *a15,
        _DWORD *a16,
        _DWORD *a17,
        _DWORD *a18)
{
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  unsigned __int8 *v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  _BYTE *v23; // eax
  _BYTE *v24; // eax
  unsigned __int8 *v25; // eax
  _BYTE *v26; // eax
  _BYTE *v27; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // si
  int v31; // eax
  unsigned __int8 *v32; // eax
  unsigned __int8 *v33; // eax
  unsigned __int8 *v34; // eax
  unsigned __int8 *v35; // eax
  unsigned __int8 *v36; // eax
  unsigned __int8 *v37; // eax
  unsigned __int8 *v38; // eax
  unsigned __int8 *v39; // eax
  unsigned __int8 *v40; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v41; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v42; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v43; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v44; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v45; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v46; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v47; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v48; // [esp-4h] [ebp-1BCh]
  unsigned __int8 *v49; // [esp-4h] [ebp-1BCh]
  _BYTE *v50; // [esp+Ch] [ebp-1ACh]
  _BYTE *v51; // [esp+14h] [ebp-1A4h]
  _BYTE *v52; // [esp+1Ch] [ebp-19Ch]
  _BYTE *v53; // [esp+24h] [ebp-194h]
  _BYTE *v54; // [esp+2Ch] [ebp-18Ch]
  _BYTE *v55; // [esp+34h] [ebp-184h]
  _BYTE *v56; // [esp+3Ch] [ebp-17Ch]
  _BYTE *v57; // [esp+44h] [ebp-174h]
  _BYTE *v58; // [esp+4Ch] [ebp-16Ch]
  int *v59; // [esp+54h] [ebp-164h]
  _WORD *v60; // [esp+5Ch] [ebp-15Ch]
  int *v61; // [esp+60h] [ebp-158h]
  _BYTE *v62; // [esp+74h] [ebp-144h]
  _BYTE *v63; // [esp+7Ch] [ebp-13Ch]
  _BYTE *v64; // [esp+84h] [ebp-134h]
  _BYTE *v65; // [esp+8Ch] [ebp-12Ch]
  int *v67; // [esp+A0h] [ebp-118h]
  char v68; // [esp+A7h] [ebp-111h] BYREF
  char v69; // [esp+A8h] [ebp-110h]
  char v70; // [esp+A9h] [ebp-10Fh] BYREF
  bool v71; // [esp+AAh] [ebp-10Eh]
  char v72; // [esp+ABh] [ebp-10Dh] BYREF
  bool v73; // [esp+ACh] [ebp-10Ch]
  char v74; // [esp+ADh] [ebp-10Bh] BYREF
  bool v75; // [esp+AEh] [ebp-10Ah]
  char v76; // [esp+AFh] [ebp-109h] BYREF
  bool v77; // [esp+B0h] [ebp-108h]
  char v78; // [esp+B1h] [ebp-107h] BYREF
  bool v79; // [esp+B2h] [ebp-106h]
  char v80; // [esp+B3h] [ebp-105h] BYREF
  char v81; // [esp+B4h] [ebp-104h] BYREF
  char v82; // [esp+B5h] [ebp-103h]
  char v83; // [esp+B6h] [ebp-102h] BYREF
  char v84; // [esp+B7h] [ebp-101h]
  void *v85; // [esp+B8h] [ebp-100h]
  int *v86; // [esp+BCh] [ebp-FCh]
  char v87; // [esp+C0h] [ebp-F8h] BYREF
  char v88; // [esp+C1h] [ebp-F7h] BYREF
  char v89; // [esp+C2h] [ebp-F6h] BYREF
  char v90; // [esp+C3h] [ebp-F5h] BYREF
  char v91; // [esp+C4h] [ebp-F4h] BYREF
  char v92; // [esp+C5h] [ebp-F3h] BYREF
  char v93; // [esp+C6h] [ebp-F2h] BYREF
  char v94; // [esp+C7h] [ebp-F1h] BYREF
  void *v95; // [esp+C8h] [ebp-F0h]
  void *v96; // [esp+CCh] [ebp-ECh]
  void *v97; // [esp+D0h] [ebp-E8h]
  int *v98; // [esp+D4h] [ebp-E4h]
  void *v99; // [esp+D8h] [ebp-E0h]
  void *v100; // [esp+DCh] [ebp-DCh]
  int *v101; // [esp+E0h] [ebp-D8h]
  _WORD *v102; // [esp+E4h] [ebp-D4h]
  char v103; // [esp+EBh] [ebp-CDh] BYREF
  char v104; // [esp+ECh] [ebp-CCh] BYREF
  char v105; // [esp+EDh] [ebp-CBh] BYREF
  char v106; // [esp+EEh] [ebp-CAh] BYREF
  char v107; // [esp+EFh] [ebp-C9h] BYREF
  __int16 *v108; // [esp+F0h] [ebp-C8h]
  char v109; // [esp+F7h] [ebp-C1h] BYREF
  char v110; // [esp+F8h] [ebp-C0h] BYREF
  char v111; // [esp+F9h] [ebp-BFh] BYREF
  char v112; // [esp+FAh] [ebp-BEh] BYREF
  char v113; // [esp+FBh] [ebp-BDh] BYREF
  __int16 *v114; // [esp+FCh] [ebp-BCh]
  char v115; // [esp+100h] [ebp-B8h] BYREF
  char v116; // [esp+101h] [ebp-B7h] BYREF
  char v117; // [esp+102h] [ebp-B6h] BYREF
  char v118; // [esp+103h] [ebp-B5h] BYREF
  _BYTE *v119; // [esp+104h] [ebp-B4h]
  _BYTE *v120; // [esp+108h] [ebp-B0h]
  _BYTE *v121; // [esp+10Ch] [ebp-ACh]
  _BYTE *v122; // [esp+110h] [ebp-A8h]
  __int16 i4; // [esp+114h] [ebp-A4h]
  __int16 v124[5]; // [esp+118h] [ebp-A0h] BYREF
  char v125; // [esp+122h] [ebp-96h]
  unsigned __int8 i2; // [esp+123h] [ebp-95h]
  __int16 v127; // [esp+124h] [ebp-94h]
  __int16 v128; // [esp+128h] [ebp-90h]
  __int16 v129; // [esp+12Ch] [ebp-8Ch]
  __int16 v130; // [esp+130h] [ebp-88h]
  unsigned __int8 nn; // [esp+136h] [ebp-82h]
  char v132; // [esp+137h] [ebp-81h]
  __int16 v133; // [esp+138h] [ebp-80h]
  unsigned __int8 mm; // [esp+13Dh] [ebp-7Bh]
  unsigned __int8 v135; // [esp+13Eh] [ebp-7Ah]
  unsigned __int8 v136; // [esp+13Fh] [ebp-79h]
  __int16 v137; // [esp+140h] [ebp-78h]
  unsigned __int8 i1; // [esp+144h] [ebp-74h]
  unsigned __int8 v139; // [esp+145h] [ebp-73h]
  unsigned __int8 kk; // [esp+146h] [ebp-72h]
  unsigned __int8 jj; // [esp+147h] [ebp-71h]
  __int16 v142; // [esp+148h] [ebp-70h]
  __int16 v143; // [esp+14Ch] [ebp-6Ch]
  __int16 v144; // [esp+150h] [ebp-68h]
  __int16 v145; // [esp+154h] [ebp-64h]
  __int16 v146; // [esp+158h] [ebp-60h]
  unsigned __int8 n; // [esp+15Eh] [ebp-5Ah]
  char v148; // [esp+15Fh] [ebp-59h]
  __int16 v149; // [esp+160h] [ebp-58h]
  __int16 k; // [esp+164h] [ebp-54h]
  unsigned __int8 m; // [esp+169h] [ebp-4Fh]
  unsigned __int8 v152; // [esp+16Ah] [ebp-4Eh]
  unsigned __int8 v153; // [esp+16Bh] [ebp-4Dh]
  __int16 v154; // [esp+16Ch] [ebp-4Ch]
  unsigned __int8 ii; // [esp+172h] [ebp-46h]
  unsigned __int8 v156; // [esp+173h] [ebp-45h]
  __int16 *v157; // [esp+174h] [ebp-44h]
  __int16 *v158; // [esp+178h] [ebp-40h]
  __int16 v159; // [esp+17Ch] [ebp-3Ch]
  __int16 v160; // [esp+17Eh] [ebp-3Ah]
  __int16 v161; // [esp+180h] [ebp-38h]
  __int16 v162; // [esp+182h] [ebp-36h]
  __int16 i3; // [esp+184h] [ebp-34h]
  _WORD *v164; // [esp+188h] [ebp-30h]
  __int16 v165; // [esp+18Ch] [ebp-2Ch]
  __int16 v166; // [esp+18Eh] [ebp-2Ah]
  __int16 v167; // [esp+190h] [ebp-28h]
  __int16 v168; // [esp+192h] [ebp-26h]
  __int16 v169; // [esp+194h] [ebp-24h]
  __int16 v170; // [esp+196h] [ebp-22h]
  __int16 v171; // [esp+198h] [ebp-20h]
  __int16 v172; // [esp+19Ah] [ebp-1Eh]
  unsigned __int8 i; // [esp+1A3h] [ebp-15h]
  __int16 j; // [esp+1A4h] [ebp-14h]
  int *v175; // [esp+1A8h] [ebp-10h]
  int v176; // [esp+1B4h] [ebp-4h]

  v176 = 0;
  if ( *(this + 2) != 4 )
    sub_5E9F20((char)"shSize == 4", "..\\Casino\\PokerHand.cpp", 4110);
  if ( a3 != 3 && a3 != 4 && a3 != 5 )
    sub_5E9F20(
      (char)"(phWidow.shSize == 3) || (phWidow.shSize == 4) || (phWidow.shSize == 5)",
      "..\\Casino\\PokerHand.cpp",
      4111);
  v65 = sub_464130(&v118, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v176) = 1;
  if ( sub_484BA0(this, v65) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 4112);
  v176 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v118);
  v64 = sub_464130(&v117, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v176) = 2;
  if ( sub_484BA0(this, v64) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 4113);
  v176 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v117);
  v63 = sub_464130(&v116, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v176) = 3;
  if ( sub_484BA0((__int16 *)&a2, v63) )
    sub_5E9F20((char)"!phWidow.ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 4114);
  v176 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v116);
  v62 = sub_464130(&v115, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v176) = 4;
  if ( sub_484BA0((__int16 *)&a2, v62) )
    sub_5E9F20((char)"!phWidow.ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 4115);
  v176 = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v115);
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  *a15 = 0;
  *a16 = 0;
  *a17 = 0;
  *a18 = 0;
  v114 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v158 = v114;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v158[i] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v18 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v113);
    v19 = sub_463F80(v18, &v112);
    ++v158[(unsigned __int8)*v19];
    v40 = (unsigned __int8 *)dword_7907A4;
    v20 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v111);
    if ( sub_464050(v20, v40) )
    {
      v21 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v110);
      v22 = sub_463FD0(v21, &v109);
      ++v158[(unsigned __int8)*v22];
    }
  }
  v108 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v157 = v108;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v157[i] = 0;
  for ( j = 0; j < a3; ++j )
  {
    v23 = sub_464480((_BYTE *)(a2 + j), &v107);
    v24 = sub_463F80(v23, &v106);
    ++v157[(unsigned __int8)*v24];
    v41 = (unsigned __int8 *)dword_7907A4;
    v25 = sub_464480((_BYTE *)(a2 + j), &v105);
    if ( sub_464050(v25, v41) )
    {
      v26 = sub_464480((_BYTE *)(a2 + j), &v104);
      v27 = sub_463FD0(v26, &v103);
      ++v157[(unsigned __int8)*v27];
    }
  }
  v102 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v164 = v102;
  v175 = 0;
  if ( a3 < 5 )
  {
    v100 = operator new(0xCu);
    LOBYTE(v176) = 5;
    if ( v100 )
      v61 = sub_464ED0((int *)v100, 13, 5 - a3);
    else
      v61 = 0;
    v101 = v61;
    LOBYTE(v176) = 0;
    v175 = v61;
    sub_465000(v61);
  }
  do
  {
    for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
      v164[i] = 0;
    v154 = 1;
    for ( k = 0; k < 5 - a3; ++k )
    {
      v28 = sub_465110((int)v175, k);
      v60 = &v164[*(unsigned __int8 *)dword_7913B4 + v28];
      ++*v60;
      v29 = sub_465110((int)v175, k);
      v30 = 4 - v158[*(unsigned __int8 *)dword_7913B4 + v29];
      v31 = sub_465110((int)v175, k);
      v154 *= v30 - v157[*(unsigned __int8 *)dword_7913B4 + v31];
      if ( v154 < 0 )
        v154 = 0;
    }
    v164[*(unsigned __int8 *)dword_7913C8] = v164[*(unsigned __int8 *)dword_7913B4];
    if ( v154 )
    {
      for ( m = *(_BYTE *)dword_7913C8; m >= (int)*(unsigned __int8 *)dword_7913F0; --m )
      {
        v149 = v164[m] + v157[m];
        if ( v149 == 2 && v158[m] == 2 )
        {
          *a5 += v154;
          break;
        }
        if ( v149 == 3 )
        {
          if ( v158[m] == 1 )
            *a5 += v154;
          else
            *a6 += v154;
          break;
        }
      }
      if ( m < (int)*(unsigned __int8 *)dword_7913F0 )
        *a4 += v154;
      v152 = 0;
      v156 = 0;
      for ( m = *(_BYTE *)dword_7913C8; m >= (int)*(unsigned __int8 *)dword_7913F0; --m )
      {
        v148 = 0;
        for ( n = *(_BYTE *)dword_7913C8; n >= (int)*(unsigned __int8 *)dword_7913F0; --n )
        {
          if ( n != m )
          {
            v145 = v164[m] + v157[m];
            if ( v145 > 3 )
              v145 = 3;
            v146 = v164[n] + v157[n];
            if ( v146 > 2 )
              v146 = 2;
            if ( v146 + v145 >= 3 )
            {
              if ( !v152 )
              {
                v152 = m;
                v156 = n;
              }
              if ( v145 + v158[m] >= 3 && v146 + v158[n] >= 2 && v158[n] + v158[m] >= 2 )
              {
                if ( m == v152 && n == v156 )
                  *a8 += v154;
                else
                  *a9 += v154;
                v148 = 1;
                break;
              }
            }
          }
        }
        if ( v148 )
          break;
      }
      if ( m < (int)*(unsigned __int8 *)dword_7913F0 )
      {
        if ( v152 )
          *a10 += v154;
        else
          *a7 += v154;
      }
      v153 = 0;
      for ( ii = *(_BYTE *)dword_7913C8; ii >= (int)*(unsigned __int8 *)dword_7913A4; --ii )
      {
        v143 = 0;
        v142 = 0;
        v144 = 0;
        for ( jj = 0; jj < 5u; ++jj )
        {
          if ( v157[ii - jj] > 0 || (__int16)v164[ii - jj] > 0 )
            ++v142;
          if ( v158[ii - jj] > 0 )
            ++v143;
          if ( v157[ii - jj] > 0 || (__int16)v164[ii - jj] > 0 || v158[ii - jj] > 0 )
            ++v144;
        }
        if ( v142 >= 3 )
        {
          if ( !v153 )
            v153 = ii;
          if ( v143 >= 2 && v144 == 5 )
          {
            if ( v153 == ii )
              *a16 += v154;
            else
              *a17 += v154;
            break;
          }
        }
      }
      if ( ii == *(unsigned __int8 *)dword_791414 )
      {
        if ( v153 )
          *a18 += v154;
        else
          *a15 += v154;
      }
    }
  }
  while ( a3 < 5 && sub_465000(v175) );
  if ( a3 == 3 )
  {
    for ( kk = *(_BYTE *)dword_7913B4; kk <= (int)*(unsigned __int8 *)dword_7913E0; ++kk )
    {
      for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
        v164[i] = 0;
      v137 = (3 - v158[kk] - v157[kk]) * (4 - v158[kk] - v157[kk]) / 2;
      if ( v137 > 0 )
      {
        v164[kk] += 2;
        v164[*(unsigned __int8 *)dword_7913C8] = v164[*(unsigned __int8 *)dword_7913B4];
        for ( mm = *(_BYTE *)dword_7913C8; mm >= (int)*(unsigned __int8 *)dword_7913F0; --mm )
        {
          v133 = v164[mm] + v157[mm];
          if ( v133 == 2 && v158[mm] == 2 )
          {
            *a5 += v137;
            break;
          }
          if ( v133 == 3 )
          {
            if ( v158[mm] == 1 )
              *a5 += v137;
            else
              *a6 += v137;
            break;
          }
        }
        if ( mm < (int)*(unsigned __int8 *)dword_7913F0 )
          *a4 += v137;
        v135 = 0;
        v139 = 0;
        for ( mm = *(_BYTE *)dword_7913C8; mm >= (int)*(unsigned __int8 *)dword_7913F0; --mm )
        {
          v132 = 0;
          for ( nn = *(_BYTE *)dword_7913C8; nn >= (int)*(unsigned __int8 *)dword_7913F0; --nn )
          {
            if ( nn != mm )
            {
              v129 = v164[mm] + v157[mm];
              if ( v129 > 3 )
                v129 = 3;
              v130 = v164[nn] + v157[nn];
              if ( v130 > 2 )
                v130 = 2;
              if ( v130 + v129 >= 3 )
              {
                if ( !v135 )
                {
                  v135 = mm;
                  v139 = nn;
                }
                if ( v129 + v158[mm] >= 3 && v130 + v158[nn] >= 2 && v158[nn] + v158[mm] >= 2 )
                {
                  if ( mm == v135 && nn == v139 )
                    *a8 += v137;
                  else
                    *a9 += v137;
                  v132 = 1;
                  break;
                }
              }
            }
          }
          if ( v132 )
            break;
        }
        if ( mm < (int)*(unsigned __int8 *)dword_7913F0 )
        {
          if ( v135 )
            *a10 += v137;
          else
            *a7 += v137;
        }
        v136 = 0;
        for ( i1 = *(_BYTE *)dword_7913C8; i1 >= (int)*(unsigned __int8 *)dword_7913A4; --i1 )
        {
          v128 = 0;
          v127 = 0;
          for ( i2 = 0; i2 < 5u; ++i2 )
          {
            if ( v157[i1 - i2] > 0 || (__int16)v164[i1 - i2] > 0 )
              ++v127;
            if ( v158[i1 - i2] > 0 )
              ++v128;
          }
          if ( v127 >= 3 )
          {
            if ( !v136 )
              v136 = i1;
            if ( v128 >= 2 )
            {
              if ( v136 == i1 )
                *a16 += v137;
              else
                *a17 += v137;
              break;
            }
          }
        }
        if ( i1 == *(unsigned __int8 *)dword_791414 )
        {
          if ( v136 )
            *a18 += v137;
          else
            *a15 += v137;
        }
      }
    }
  }
  if ( a3 < 5 )
  {
    v98 = v175;
    v99 = v175;
    if ( v175 )
    {
      sub_464FD0((void **)v99);
      operator delete(v99);
    }
  }
  v97 = v158;
  operator delete(v158);
  v96 = v157;
  operator delete(v157);
  v95 = v164;
  operator delete(v164);
  for ( i3 = 0; i3 < 4; ++i3 )
    *(&v159 + i3) = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v42 = (unsigned __int8 *)dword_79076C;
    v32 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v94);
    if ( sub_4640B0(v32, v42) )
    {
      ++v159;
    }
    else
    {
      v43 = (unsigned __int8 *)dword_790754;
      v33 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v93);
      if ( sub_4640B0(v33, v43) )
      {
        ++v160;
      }
      else
      {
        v44 = (unsigned __int8 *)dword_790764;
        v34 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v92);
        if ( sub_4640B0(v34, v44) )
        {
          ++v161;
        }
        else
        {
          v45 = (unsigned __int8 *)dword_790770;
          v35 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v91);
          if ( sub_4640B0(v35, v45) )
            ++v162;
        }
      }
    }
  }
  for ( i3 = 0; i3 < 4; ++i3 )
    *(&v165 + i3) = 0;
  for ( j = 0; j < a3; ++j )
  {
    v46 = (unsigned __int8 *)dword_79076C;
    v36 = sub_464400((_BYTE *)(a2 + j), &v90);
    if ( sub_4640B0(v36, v46) )
    {
      ++v165;
    }
    else
    {
      v47 = (unsigned __int8 *)dword_790754;
      v37 = sub_464400((_BYTE *)(a2 + j), &v89);
      if ( sub_4640B0(v37, v47) )
      {
        ++v166;
      }
      else
      {
        v48 = (unsigned __int8 *)dword_790764;
        v38 = sub_464400((_BYTE *)(a2 + j), &v88);
        if ( sub_4640B0(v38, v48) )
        {
          ++v167;
        }
        else
        {
          v49 = (unsigned __int8 *)dword_790770;
          v39 = sub_464400((_BYTE *)(a2 + j), &v87);
          if ( sub_4640B0(v39, v49) )
            ++v168;
        }
      }
    }
  }
  if ( a3 < 5 )
  {
    v85 = operator new(0xCu);
    LOBYTE(v176) = 6;
    if ( v85 )
      v59 = sub_464ED0((int *)v85, 52, 5 - a3);
    else
      v59 = 0;
    v86 = v59;
    LOBYTE(v176) = 0;
    v175 = v59;
    sub_465000(v59);
  }
  do
  {
    for ( i3 = 0; i3 < 4; ++i3 )
      *(&v169 + i3) = 0;
    v125 = 0;
    sub_484320(v124, (int)&a2);
    LOBYTE(v176) = 7;
    for ( i4 = 0; i4 < 5 - a3; ++i4 )
    {
      v122 = 0;
      if ( sub_465110((int)v175, i4) / 13 )
      {
        if ( sub_465110((int)v175, i4) / 13 == 1 )
        {
          v122 = (_BYTE *)dword_790754;
          ++v170;
        }
        else if ( sub_465110((int)v175, i4) / 13 == 2 )
        {
          v122 = (_BYTE *)dword_790764;
          ++v171;
        }
        else if ( sub_465110((int)v175, i4) / 13 == 3 )
        {
          v122 = (_BYTE *)dword_790770;
          ++v172;
        }
      }
      else
      {
        v122 = (_BYTE *)dword_79076C;
        ++v169;
      }
      v121 = 0;
      if ( sub_465110((int)v175, i4) % 13 )
      {
        if ( sub_465110((int)v175, i4) % 13 == 1 )
        {
          v121 = (_BYTE *)dword_790758;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 2 )
        {
          v121 = (_BYTE *)dword_790768;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 3 )
        {
          v121 = (_BYTE *)dword_790790;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 4 )
        {
          v121 = (_BYTE *)dword_790750;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 5 )
        {
          v121 = (_BYTE *)dword_79079C;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 6 )
        {
          v121 = (_BYTE *)dword_790760;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 7 )
        {
          v121 = (_BYTE *)dword_790798;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 8 )
        {
          v121 = (_BYTE *)dword_790794;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 9 )
        {
          v121 = (_BYTE *)dword_790788;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 10 )
        {
          v121 = (_BYTE *)dword_790774;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 11 )
        {
          v121 = (_BYTE *)dword_7907B0;
        }
        else if ( sub_465110((int)v175, i4) % 13 == 12 )
        {
          v121 = (_BYTE *)dword_7907A8;
        }
      }
      else
      {
        v121 = (_BYTE *)dword_7907A4;
      }
      v58 = sub_464130(&v83, v121, v122);
      LOBYTE(v176) = 8;
      v84 = sub_484BA0(this, v58);
      LOBYTE(v176) = 7;
      ATL::CComCriticalSection::~CComCriticalSection(&v83);
      if ( v84 )
      {
        v125 = 1;
        break;
      }
      v57 = sub_464130(&v81, v121, v122);
      LOBYTE(v176) = 9;
      v82 = sub_484BA0((__int16 *)&a2, v57);
      LOBYTE(v176) = 7;
      ATL::CComCriticalSection::~CComCriticalSection(&v81);
      if ( v82 )
      {
        v125 = 1;
        break;
      }
      v56 = sub_464130(&v80, v121, v122);
      LOBYTE(v176) = 10;
      sub_484830(v124, v56);
      LOBYTE(v176) = 7;
      ATL::CComCriticalSection::~CComCriticalSection(&v80);
    }
    if ( !v125 )
    {
      for ( i3 = 0; i3 < 4; ++i3 )
      {
        if ( *(&v169 + i3) + *(&v165 + i3) >= 3 )
        {
          if ( *(&v159 + i3) < 2 )
          {
            ++*a14;
          }
          else
          {
            v119 = 0;
            if ( i3 )
            {
              switch ( i3 )
              {
                case 1:
                  v119 = (_BYTE *)dword_790754;
                  break;
                case 2:
                  v119 = (_BYTE *)dword_790764;
                  break;
                case 3:
                  v119 = (_BYTE *)dword_790770;
                  break;
              }
            }
            else
            {
              v119 = (_BYTE *)dword_79076C;
            }
            v55 = sub_464130(&v78, (_BYTE *)dword_7907A4, v119);
            LOBYTE(v176) = 11;
            v79 = sub_484BA0(v124, v55) == 0;
            LOBYTE(v176) = 7;
            ATL::CComCriticalSection::~CComCriticalSection(&v78);
            if ( v79 )
            {
              v120 = (_BYTE *)dword_7907A4;
            }
            else
            {
              v54 = sub_464130(&v76, (_BYTE *)dword_7907A8, v119);
              LOBYTE(v176) = 12;
              v77 = sub_484BA0(v124, v54) == 0;
              LOBYTE(v176) = 7;
              ATL::CComCriticalSection::~CComCriticalSection(&v76);
              if ( v77 )
              {
                v120 = (_BYTE *)dword_7907A8;
              }
              else
              {
                v53 = sub_464130(&v74, (_BYTE *)dword_7907B0, v119);
                LOBYTE(v176) = 13;
                v75 = sub_484BA0(v124, v53) == 0;
                LOBYTE(v176) = 7;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                if ( v75 )
                {
                  v120 = (_BYTE *)dword_7907B0;
                }
                else
                {
                  v52 = sub_464130(&v72, (_BYTE *)dword_790774, v119);
                  LOBYTE(v176) = 14;
                  v73 = sub_484BA0(v124, v52) == 0;
                  LOBYTE(v176) = 7;
                  ATL::CComCriticalSection::~CComCriticalSection(&v72);
                  if ( v73 )
                  {
                    v120 = (_BYTE *)dword_790774;
                  }
                  else
                  {
                    v51 = sub_464130(&v70, (_BYTE *)dword_790788, v119);
                    LOBYTE(v176) = 15;
                    v71 = sub_484BA0(v124, v51) == 0;
                    LOBYTE(v176) = 7;
                    ATL::CComCriticalSection::~CComCriticalSection(&v70);
                    if ( v71 )
                      v120 = (_BYTE *)dword_790788;
                    else
                      v120 = (_BYTE *)dword_790794;
                  }
                }
              }
            }
            v50 = sub_464130(&v68, v120, v119);
            LOBYTE(v176) = 16;
            v69 = sub_484BA0(this, v50);
            LOBYTE(v176) = 7;
            ATL::CComCriticalSection::~CComCriticalSection(&v68);
            if ( v69 )
              ++*a12;
            else
              ++*a13;
          }
          break;
        }
      }
      if ( i3 == 4 )
        ++*a11;
    }
    LOBYTE(v176) = 0;
    sub_484470(v124);
  }
  while ( a3 < 5 && sub_465000(v175) );
  if ( a3 < 5 )
  {
    v67 = v175;
    if ( v175 )
    {
      sub_464FD0((void **)v175);
      operator delete(v67);
    }
  }
  v176 = -1;
  sub_484470(&a2);
}


//======================================================================
// sub_494B20
// entry 00494b20  size 556  status ok
//======================================================================

void __thiscall sub_494B20(
        __int16 *this,
        _WORD *a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        __int16 *a9,
        _WORD *a10,
        __int16 *a11,
        _WORD *a12,
        _WORD *a13)
{
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  unsigned __int8 *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  unsigned __int8 *v18; // [esp-4h] [ebp-2Ch]
  char v20; // [esp+13h] [ebp-15h] BYREF
  char v21; // [esp+14h] [ebp-14h] BYREF
  char v22; // [esp+15h] [ebp-13h] BYREF
  char v23; // [esp+16h] [ebp-12h] BYREF
  char v24; // [esp+17h] [ebp-11h] BYREF
  __int16 *v25; // [esp+18h] [ebp-10h]
  __int16 j; // [esp+1Ch] [ebp-Ch]
  __int16 *v27; // [esp+20h] [ebp-8h]
  unsigned __int8 i; // [esp+27h] [ebp-1h]

  sub_492430(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  v25 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v27 = v25;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v27[i] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v13 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v24);
    v14 = sub_463F80(v13, &v23);
    ++v27[(unsigned __int8)*v14];
    v18 = (unsigned __int8 *)dword_7907A4;
    v15 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v22);
    if ( sub_464050(v15, v18) )
    {
      v16 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v21);
      v17 = sub_463FD0(v16, &v20);
      ++v27[(unsigned __int8)*v17];
    }
  }
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_791410; ++i )
  {
    if ( v27[i] > 0 )
    {
      ++*a11;
      if ( *a12 )
      {
        if ( !*a13 )
          *a13 = i - *(unsigned __int8 *)dword_7913F0 + 2;
      }
      else
      {
        *a12 = i - *(unsigned __int8 *)dword_7913F0 + 2;
      }
    }
  }
  if ( *a11 < 2 )
  {
    *a12 = 0;
    *a11 = 0;
  }
  operator delete(v27);
}


//======================================================================
// sub_494D50
// entry 00494d50  size 2959  status ok
//======================================================================

void __thiscall sub_494D50(
        __int16 *this,
        int a2,
        __int16 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        _DWORD *a15,
        _DWORD *a16,
        _DWORD *a17,
        _DWORD *a18,
        _DWORD *a19,
        _DWORD *a20,
        _DWORD *a21,
        unsigned __int8 *a22)
{
  _BYTE *v22; // eax
  _BYTE *v23; // eax
  unsigned __int8 *v24; // eax
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  _BYTE *v27; // eax
  _BYTE *v28; // eax
  unsigned __int8 *v29; // eax
  _BYTE *v30; // eax
  _BYTE *v31; // eax
  int v32; // eax
  int v33; // eax
  __int16 v34; // si
  int v35; // eax
  int v36; // [esp-44h] [ebp-134h] BYREF
  __int16 v37; // [esp-40h] [ebp-130h]
  _DWORD *v38; // [esp-3Ch] [ebp-12Ch]
  _DWORD *v39; // [esp-38h] [ebp-128h]
  _DWORD *v40; // [esp-34h] [ebp-124h]
  _DWORD *v41; // [esp-30h] [ebp-120h]
  _DWORD *v42; // [esp-2Ch] [ebp-11Ch]
  _DWORD *v43; // [esp-28h] [ebp-118h]
  _DWORD *v44; // [esp-24h] [ebp-114h]
  _DWORD *v45; // [esp-20h] [ebp-110h]
  _DWORD *v46; // [esp-1Ch] [ebp-10Ch]
  _DWORD *v47; // [esp-18h] [ebp-108h]
  _DWORD *v48; // [esp-14h] [ebp-104h]
  _DWORD *v49; // [esp-10h] [ebp-100h]
  _DWORD *v50; // [esp-Ch] [ebp-FCh]
  _DWORD *v51; // [esp-8h] [ebp-F8h]
  unsigned __int8 *v52; // [esp-4h] [ebp-F4h]
  void *v53; // [esp+8h] [ebp-E8h]
  _WORD *v54; // [esp+Ch] [ebp-E4h]
  int *v55; // [esp+10h] [ebp-E0h]
  _WORD *v56; // [esp+14h] [ebp-DCh]
  _WORD *v57; // [esp+18h] [ebp-D8h]
  _WORD *v58; // [esp+1Ch] [ebp-D4h]
  _WORD *v59; // [esp+20h] [ebp-D0h]
  __int16 *v60; // [esp+24h] [ebp-CCh]
  __int16 *v61; // [esp+28h] [ebp-C8h]
  void *v62; // [esp+2Ch] [ebp-C4h]
  void *v63; // [esp+30h] [ebp-C0h]
  void *v64; // [esp+34h] [ebp-BCh]
  int *v65; // [esp+38h] [ebp-B8h]
  void *v66; // [esp+3Ch] [ebp-B4h]
  void *v67; // [esp+40h] [ebp-B0h]
  int *v68; // [esp+44h] [ebp-ACh]
  _WORD *v69; // [esp+48h] [ebp-A8h]
  char v70; // [esp+4Fh] [ebp-A1h] BYREF
  char v71; // [esp+50h] [ebp-A0h] BYREF
  char v72; // [esp+51h] [ebp-9Fh] BYREF
  char v73; // [esp+52h] [ebp-9Eh] BYREF
  char v74; // [esp+53h] [ebp-9Dh] BYREF
  _WORD *v75; // [esp+54h] [ebp-9Ch]
  char v76; // [esp+5Bh] [ebp-95h] BYREF
  char v77; // [esp+5Ch] [ebp-94h] BYREF
  char v78; // [esp+5Dh] [ebp-93h] BYREF
  char v79; // [esp+5Eh] [ebp-92h] BYREF
  char v80; // [esp+5Fh] [ebp-91h] BYREF
  _WORD *v81; // [esp+60h] [ebp-90h]
  int *v82; // [esp+64h] [ebp-8Ch]
  __int16 ii; // [esp+68h] [ebp-88h]
  __int16 v84; // [esp+6Ch] [ebp-84h]
  _BYTE v85[8]; // [esp+70h] [ebp-80h]
  __int16 v86; // [esp+78h] [ebp-78h]
  unsigned __int8 v87; // [esp+7Fh] [ebp-71h]
  __int16 v88; // [esp+80h] [ebp-70h]
  __int16 v89; // [esp+84h] [ebp-6Ch]
  __int16 v90; // [esp+88h] [ebp-68h]
  __int16 v91; // [esp+8Ch] [ebp-64h]
  __int16 v92; // [esp+90h] [ebp-60h]
  unsigned __int8 n; // [esp+97h] [ebp-59h]
  __int16 m; // [esp+98h] [ebp-58h]
  __int16 v95; // [esp+9Ch] [ebp-54h]
  _BYTE v96[8]; // [esp+A0h] [ebp-50h]
  __int16 v97; // [esp+ACh] [ebp-44h]
  unsigned __int8 v98; // [esp+B3h] [ebp-3Dh]
  __int16 v99; // [esp+B4h] [ebp-3Ch]
  __int16 k; // [esp+B8h] [ebp-38h]
  __int16 v101; // [esp+BCh] [ebp-34h]
  __int16 v102; // [esp+C0h] [ebp-30h]
  __int16 v103; // [esp+C4h] [ebp-2Ch]
  __int16 v104; // [esp+C8h] [ebp-28h]
  _WORD *v105; // [esp+CCh] [ebp-24h]
  _WORD *v106; // [esp+D0h] [ebp-20h]
  _WORD *v107; // [esp+D4h] [ebp-1Ch]
  unsigned __int8 i; // [esp+DBh] [ebp-15h]
  __int16 j; // [esp+DCh] [ebp-14h]
  int *v110; // [esp+E0h] [ebp-10h]
  int v111; // [esp+ECh] [ebp-4h]

  v61 = this;
  v111 = 0;
  v52 = a22;
  v51 = a21;
  v50 = a20;
  v49 = a19;
  v48 = a18;
  v47 = a17;
  v46 = a16;
  v45 = a15;
  v44 = a14;
  v43 = a13;
  v42 = a12;
  v41 = a11;
  v40 = a10;
  v39 = a9;
  v38 = a8;
  v82 = &v36;
  v60 = sub_484320((__int16 *)&v36, (int)&a2);
  sub_492CE0(v61, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52);
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  v81 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v106 = v81;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v106[i] = 0;
  for ( j = 0; j < v61[2]; ++j )
  {
    v52 = (unsigned __int8 *)&v79;
    v22 = sub_464480((_BYTE *)(*(_DWORD *)v61 + j), &v80);
    v23 = sub_463F80(v22, v52);
    v59 = &v106[(unsigned __int8)*v23];
    ++*v59;
    v52 = (unsigned __int8 *)dword_7907A4;
    v24 = sub_464480((_BYTE *)(*(_DWORD *)v61 + j), &v78);
    if ( sub_464050(v24, v52) )
    {
      v52 = (unsigned __int8 *)&v76;
      v25 = sub_464480((_BYTE *)(*(_DWORD *)v61 + j), &v77);
      v26 = sub_463FD0(v25, v52);
      v58 = &v106[(unsigned __int8)*v26];
      ++*v58;
    }
  }
  v75 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v105 = v75;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v105[i] = 0;
  for ( j = 0; j < a3; ++j )
  {
    v52 = (unsigned __int8 *)&v73;
    v27 = sub_464480((_BYTE *)(a2 + j), &v74);
    v28 = sub_463F80(v27, v52);
    v57 = &v105[(unsigned __int8)*v28];
    ++*v57;
    v52 = (unsigned __int8 *)dword_7907A4;
    v29 = sub_464480((_BYTE *)(a2 + j), &v72);
    if ( sub_464050(v29, v52) )
    {
      v52 = (unsigned __int8 *)&v70;
      v30 = sub_464480((_BYTE *)(a2 + j), &v71);
      v31 = sub_463FD0(v30, v52);
      v56 = &v105[(unsigned __int8)*v31];
      ++*v56;
    }
  }
  v69 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v107 = v69;
  v110 = 0;
  if ( a3 < 5 )
  {
    v67 = operator new(0xCu);
    LOBYTE(v111) = 1;
    if ( v67 )
      v55 = sub_464ED0((int *)v67, 13, 5 - a3);
    else
      v55 = 0;
    v68 = v55;
    LOBYTE(v111) = 0;
    v110 = v55;
    sub_465000(v55);
  }
  do
  {
    for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
      v107[i] = 0;
    v102 = 1;
    for ( k = 0; k < 5 - a3; ++k )
    {
      v32 = sub_465110((int)v110, k);
      v54 = &v107[*(unsigned __int8 *)dword_7913B4 + v32];
      ++*v54;
      v33 = sub_465110((int)v110, k);
      v34 = 4 - v106[*(unsigned __int8 *)dword_7913B4 + v33];
      v35 = sub_465110((int)v110, k);
      v102 *= v34 - v105[*(unsigned __int8 *)dword_7913B4 + v35];
      if ( v102 < 0 )
        v102 = 0;
    }
    v107[*(unsigned __int8 *)dword_7913C8] = v107[*(unsigned __int8 *)dword_7913B4];
    if ( v102 )
    {
      v103 = 0;
      v101 = 0;
      v104 = 0;
      for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_791410; ++i )
      {
        if ( (__int16)v106[i] > 0 )
          ++v103;
        if ( (__int16)v105[i] > 0 || (__int16)v107[i] > 0 )
          ++v101;
        if ( (__int16)v106[i] > 0 || (__int16)v105[i] > 0 || (__int16)v107[i] > 0 )
          ++v104;
      }
      if ( v101 >= 3 )
      {
        if ( v104 < 5 || v103 < 2 )
        {
          *a7 += v102;
        }
        else
        {
          v99 = 2;
          v95 = 0;
          v98 = *(_BYTE *)dword_7913B4;
          while ( v95 < 5 )
          {
            if ( (__int16)v105[v98] <= 0 && (__int16)v107[v98] <= 0 )
            {
              if ( v99 > 0 )
              {
                --v99;
                v96[v95++] = v98;
              }
            }
            else
            {
              v96[v95++] = v98;
            }
            if ( v98 > (int)*(unsigned __int8 *)dword_791410 )
              sub_5E9F20((char)"ucCurrent <= EightValue.ucValue", "..\\Casino\\PokerHand.cpp", 4780);
            ++v98;
          }
          v97 = 0;
          for ( m = 0; m < 5; ++m )
          {
            if ( (__int16)v106[(unsigned __int8)v96[m]] > 0 )
              ++v97;
          }
          if ( v97 < 2 )
            *a6 += v102;
          else
            *a5 += v102;
        }
      }
      else
      {
        *a4 += v102;
      }
    }
  }
  while ( a3 < 5 && sub_465000(v110) );
  if ( a3 == 3 )
  {
    for ( n = *(_BYTE *)dword_7913B4; n <= (int)*(unsigned __int8 *)dword_7913E0; ++n )
    {
      for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
        v107[i] = 0;
      v90 = (3 - (__int16)v106[n] - (__int16)v105[n]) * (4 - (__int16)v106[n] - (__int16)v105[n]) / 2;
      if ( v90 > 0 )
      {
        v107[n] += 2;
        v107[*(unsigned __int8 *)dword_7913C8] = v107[*(unsigned __int8 *)dword_7913B4];
        v91 = 0;
        v89 = 0;
        v92 = 0;
        for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_791410; ++i )
        {
          if ( (__int16)v106[i] > 0 )
            ++v91;
          if ( (__int16)v105[i] > 0 || (__int16)v107[i] > 0 )
            ++v89;
          if ( (__int16)v106[i] > 0 || (__int16)v105[i] > 0 || (__int16)v107[i] > 0 )
            ++v92;
        }
        if ( v89 >= 3 )
        {
          if ( v92 < 5 || v91 < 2 )
          {
            *a7 += v90;
          }
          else
          {
            v88 = 2;
            v84 = 0;
            v87 = *(_BYTE *)dword_7913B4;
            while ( v84 < 5 )
            {
              if ( (__int16)v105[v87] <= 0 && (__int16)v107[v87] <= 0 )
              {
                if ( v88 > 0 )
                {
                  --v88;
                  v85[v84++] = v87;
                }
              }
              else
              {
                v85[v84++] = v87;
              }
              if ( v87 > (int)*(unsigned __int8 *)dword_791410 )
                sub_5E9F20((char)"ucCurrent <= EightValue.ucValue", "..\\Casino\\PokerHand.cpp", 4852);
              ++v87;
            }
            v86 = 0;
            for ( ii = 0; ii < 5; ++ii )
            {
              if ( (__int16)v106[(unsigned __int8)v85[ii]] > 0 )
                ++v86;
            }
            if ( v86 < 2 )
              *a6 += v90;
            else
              *a5 += v90;
          }
        }
        else
        {
          *a4 += v90;
        }
      }
    }
  }
  if ( a3 < 5 )
  {
    v65 = v110;
    v66 = v110;
    if ( v110 )
    {
      sub_464FD0((void **)v66);
      operator delete(v66);
      v53 = v66;
    }
    else
    {
      v53 = 0;
    }
  }
  v64 = v106;
  operator delete(v106);
  v63 = v105;
  operator delete(v105);
  v62 = v107;
  operator delete(v107);
  v111 = -1;
  sub_484470(&a2);
}


//======================================================================
// sub_4958E0
// entry 004958e0  size 1065  status ok
//======================================================================

void __thiscall sub_4958E0(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14)
{
  int v14; // [esp-4h] [ebp-4Ch]
  int v15; // [esp-4h] [ebp-4Ch]
  int v16; // [esp-4h] [ebp-4Ch]
  int v17; // [esp-4h] [ebp-4Ch]
  int v18; // [esp-4h] [ebp-4Ch]
  int v19; // [esp-4h] [ebp-4Ch]
  int v20; // [esp-4h] [ebp-4Ch]
  int v21; // [esp-4h] [ebp-4Ch]
  int v22; // [esp-4h] [ebp-4Ch]
  char v24; // [esp+Dh] [ebp-3Bh] BYREF
  char v25; // [esp+Eh] [ebp-3Ah] BYREF
  char v26; // [esp+Fh] [ebp-39h] BYREF
  char v27; // [esp+10h] [ebp-38h] BYREF
  char v28; // [esp+11h] [ebp-37h] BYREF
  char v29; // [esp+12h] [ebp-36h] BYREF
  char v30; // [esp+13h] [ebp-35h] BYREF
  char v31; // [esp+14h] [ebp-34h] BYREF
  char v32; // [esp+15h] [ebp-33h] BYREF
  int v33; // [esp+16h] [ebp-32h] BYREF
  char v34; // [esp+1Bh] [ebp-2Dh] BYREF
  _DWORD v35[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  __int16 v36; // [esp+24h] [ebp-24h]
  __int16 v37[5]; // [esp+28h] [ebp-20h] BYREF
  bool v38; // [esp+33h] [ebp-15h]
  int v39; // [esp+34h] [ebp-14h] BYREF
  char v40; // [esp+3Ah] [ebp-Eh] BYREF
  bool v41; // [esp+3Bh] [ebp-Dh]
  int v42; // [esp+44h] [ebp-4h]

  v42 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  sub_484320(v37, (int)this);
  LOBYTE(v42) = 1;
  sub_464110(&v34);
  LOBYTE(v42) = 2;
  sub_464110(&v40);
  LOBYTE(v42) = 3;
  sub_4A20D0(&v39);
  LOBYTE(v42) = 4;
  sub_4646A0(v35);
  LOBYTE(v42) = 5;
  v38 = *(this + 2) > 5;
  v41 = *(this + 2) > 6;
  do
  {
    if ( !v41 && !sub_464A10((unsigned __int16 *)&a2, &v34) )
      break;
    if ( !v38 )
    {
      v35[0] = a2;
      v35[1] = a3;
      v36 = a4;
    }
    do
    {
      if ( !v38 && !sub_464A10((unsigned __int16 *)v35, &v40) )
        break;
      if ( !v41 )
        sub_484830(v37, &v34);
      if ( !v38 )
        sub_484830(v37, &v40);
      v39 = *sub_485940(v37, &v33, 1, 1, 1, 1, 0, 0, 0);
      ATL::CComCriticalSection::~CComCriticalSection(&v33);
      v14 = dword_7913CC;
      sub_4A2160(&v32);
      if ( (unsigned __int8)sub_4A1E10(v14) )
      {
        ++*a5;
      }
      else
      {
        v15 = dword_791398;
        sub_4A2160(&v31);
        if ( (unsigned __int8)sub_4A1E10(v15) )
        {
          ++*a6;
        }
        else
        {
          v16 = dword_791394;
          sub_4A2160(&v30);
          if ( (unsigned __int8)sub_4A1E10(v16) )
          {
            ++*a7;
          }
          else
          {
            v17 = dword_7913D4;
            sub_4A2160(&v29);
            if ( (unsigned __int8)sub_4A1E10(v17) )
            {
              ++*a8;
            }
            else
            {
              v18 = dword_7913A0;
              sub_4A2160(&v28);
              if ( (unsigned __int8)sub_4A1E10(v18) )
              {
                ++*a9;
              }
              else
              {
                v19 = dword_79140C;
                sub_4A2160(&v27);
                if ( (unsigned __int8)sub_4A1E10(v19) )
                {
                  ++*a10;
                }
                else
                {
                  v20 = dword_791418;
                  sub_4A2160(&v26);
                  if ( (unsigned __int8)sub_4A1E10(v20) )
                  {
                    ++*a11;
                  }
                  else
                  {
                    v21 = dword_791380;
                    sub_4A2160(&v25);
                    if ( (unsigned __int8)sub_4A1E10(v21) )
                    {
                      ++*a12;
                    }
                    else
                    {
                      v22 = dword_7913B0;
                      sub_4A2160(&v24);
                      if ( (unsigned __int8)sub_4A1E10(v22) )
                        ++*a13;
                      else
                        ++*a14;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( !v41 )
        sub_484AD0(v37, &v34);
      if ( !v38 )
        sub_484AD0(v37, &v40);
    }
    while ( !v38 );
  }
  while ( !v41 );
  LOBYTE(v42) = 4;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v35);
  LOBYTE(v42) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v39);
  LOBYTE(v42) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v40);
  LOBYTE(v42) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v34);
  LOBYTE(v42) = 0;
  sub_484470(v37);
  v42 = -1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
}


//======================================================================
// sub_495D10
// entry 00495d10  size 1249  status ok
//======================================================================

void __thiscall sub_495D10(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14)
{
  int v14; // [esp-4h] [ebp-58h]
  int v15; // [esp-4h] [ebp-58h]
  int v16; // [esp-4h] [ebp-58h]
  int v17; // [esp-4h] [ebp-58h]
  int v18; // [esp-4h] [ebp-58h]
  int v19; // [esp-4h] [ebp-58h]
  int v20; // [esp-4h] [ebp-58h]
  int v21; // [esp-4h] [ebp-58h]
  int v22; // [esp-4h] [ebp-58h]
  char v24; // [esp+Dh] [ebp-47h] BYREF
  char v25; // [esp+Eh] [ebp-46h] BYREF
  char v26; // [esp+Fh] [ebp-45h] BYREF
  char v27; // [esp+10h] [ebp-44h] BYREF
  char v28; // [esp+11h] [ebp-43h] BYREF
  char v29; // [esp+12h] [ebp-42h] BYREF
  char v30; // [esp+13h] [ebp-41h] BYREF
  char v31; // [esp+14h] [ebp-40h] BYREF
  char v32; // [esp+15h] [ebp-3Fh] BYREF
  int v33; // [esp+16h] [ebp-3Eh] BYREF
  char v34; // [esp+1Bh] [ebp-39h] BYREF
  int v35; // [esp+1Ch] [ebp-38h] BYREF
  int v36; // [esp+20h] [ebp-34h]
  __int16 v37; // [esp+24h] [ebp-30h]
  __int16 v38[4]; // [esp+28h] [ebp-2Ch] BYREF
  bool v39; // [esp+31h] [ebp-23h]
  bool v40; // [esp+32h] [ebp-22h]
  char v41; // [esp+33h] [ebp-21h] BYREF
  int v42; // [esp+34h] [ebp-20h] BYREF
  _DWORD v43[2]; // [esp+38h] [ebp-1Ch] BYREF
  __int16 v44; // [esp+40h] [ebp-14h]
  char v45; // [esp+46h] [ebp-Eh] BYREF
  bool v46; // [esp+47h] [ebp-Dh]
  int v47; // [esp+50h] [ebp-4h]

  v47 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  sub_484320(v38, (int)this);
  LOBYTE(v47) = 1;
  sub_464110(&v34);
  LOBYTE(v47) = 2;
  sub_464110(&v45);
  LOBYTE(v47) = 3;
  sub_464110(&v41);
  LOBYTE(v47) = 4;
  sub_4A20D0(&v42);
  LOBYTE(v47) = 5;
  sub_4646A0(&v35);
  LOBYTE(v47) = 6;
  sub_4646A0(v43);
  LOBYTE(v47) = 7;
  v40 = *(this + 2) > 2;
  v39 = *(this + 2) > 3;
  v46 = *(this + 2) > 4;
  do
  {
    if ( !v46 && !sub_464A10((unsigned __int16 *)&a2, &v34) )
      break;
    if ( !v39 )
    {
      v35 = a2;
      v36 = a3;
      v37 = a4;
    }
    do
    {
      if ( !v39 && !sub_464A10((unsigned __int16 *)&v35, &v45) )
        break;
      if ( !v40 )
      {
        v43[0] = v35;
        v43[1] = v36;
        v44 = v37;
      }
      do
      {
        if ( !v40 && !sub_464A10((unsigned __int16 *)v43, &v41) )
          break;
        if ( !v46 )
          sub_484830(v38, &v34);
        if ( !v39 )
          sub_484830(v38, &v45);
        if ( !v40 )
          sub_484830(v38, &v41);
        v42 = *sub_485940(v38, &v33, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(&v33);
        v14 = dword_7913CC;
        sub_4A2160(&v32);
        if ( (unsigned __int8)sub_4A1E10(v14) )
        {
          ++*a5;
        }
        else
        {
          v15 = dword_791398;
          sub_4A2160(&v31);
          if ( (unsigned __int8)sub_4A1E10(v15) )
          {
            ++*a6;
          }
          else
          {
            v16 = dword_791394;
            sub_4A2160(&v30);
            if ( (unsigned __int8)sub_4A1E10(v16) )
            {
              ++*a7;
            }
            else
            {
              v17 = dword_7913D4;
              sub_4A2160(&v29);
              if ( (unsigned __int8)sub_4A1E10(v17) )
              {
                ++*a8;
              }
              else
              {
                v18 = dword_7913A0;
                sub_4A2160(&v28);
                if ( (unsigned __int8)sub_4A1E10(v18) )
                {
                  ++*a9;
                }
                else
                {
                  v19 = dword_79140C;
                  sub_4A2160(&v27);
                  if ( (unsigned __int8)sub_4A1E10(v19) )
                  {
                    ++*a10;
                  }
                  else
                  {
                    v20 = dword_791418;
                    sub_4A2160(&v26);
                    if ( (unsigned __int8)sub_4A1E10(v20) )
                    {
                      ++*a11;
                    }
                    else
                    {
                      v21 = dword_791380;
                      sub_4A2160(&v25);
                      if ( (unsigned __int8)sub_4A1E10(v21) )
                      {
                        ++*a12;
                      }
                      else
                      {
                        v22 = dword_7913B0;
                        sub_4A2160(&v24);
                        if ( (unsigned __int8)sub_4A1E10(v22) )
                          ++*a13;
                        else
                          ++*a14;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( !v46 )
          sub_484AD0(v38, &v34);
        if ( !v39 )
          sub_484AD0(v38, &v45);
        if ( !v40 )
          sub_484AD0(v38, &v41);
      }
      while ( !v40 );
    }
    while ( !v39 );
  }
  while ( !v46 );
  LOBYTE(v47) = 6;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v43);
  LOBYTE(v47) = 5;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v35);
  LOBYTE(v47) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v42);
  LOBYTE(v47) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v41);
  LOBYTE(v47) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v45);
  LOBYTE(v47) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v34);
  LOBYTE(v47) = 0;
  sub_484470(v38);
  v47 = -1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
}


//======================================================================
// sub_496200
// entry 00496200  size 357  status ok
//======================================================================

_DWORD *__thiscall sub_496200(void *this, _DWORD *a2, unsigned __int16 a3, int a4, int a5)
{
  int v7; // [esp+12h] [ebp-22h] BYREF
  char v8; // [esp+17h] [ebp-1Dh] BYREF
  __int16 v9[4]; // [esp+18h] [ebp-1Ch] BYREF
  int v10; // [esp+20h] [ebp-14h] BYREF
  int v11; // [esp+24h] [ebp-10h] BYREF
  int v12; // [esp+30h] [ebp-4h]

  v12 = 1;
  sub_4A20D0(&v11);
  LOBYTE(v12) = 2;
  sub_4A2100(dword_791390, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  sub_484320(v9, (int)this);
  LOBYTE(v12) = 3;
  sub_464110(&v8);
  LOBYTE(v12) = 4;
  sub_4A20D0(&v10);
  LOBYTE(v12) = 5;
  while ( sub_464A10(&a3, &v8) )
  {
    sub_484830(v9, &v8);
    v10 = *sub_485940(v9, &v7, 1, 1, 1, 1, 0, 0, 0);
    ATL::CComCriticalSection::~CComCriticalSection(&v7);
    if ( (unsigned __int8)sub_4A2440(&v11) )
      v11 = v10;
    sub_484AD0(v9, &v8);
  }
  *a2 = v11;
  LOBYTE(v12) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v10);
  LOBYTE(v12) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v8);
  LOBYTE(v12) = 2;
  sub_484470(v9);
  LOBYTE(v12) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v11);
  LOBYTE(v12) = 0;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a3);
  return a2;
}


//======================================================================
// sub_496370
// entry 00496370  size 865  status ok
//======================================================================

void __thiscall sub_496370(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int v11; // [esp+Eh] [ebp-3Eh] BYREF
  char v12; // [esp+13h] [ebp-39h] BYREF
  int v13; // [esp+14h] [ebp-38h] BYREF
  int v14; // [esp+18h] [ebp-34h]
  __int16 v15; // [esp+1Ch] [ebp-30h]
  bool v16; // [esp+21h] [ebp-2Bh]
  bool v17; // [esp+22h] [ebp-2Ah]
  char v18; // [esp+23h] [ebp-29h] BYREF
  int v19; // [esp+24h] [ebp-28h] BYREF
  _DWORD v20[2]; // [esp+28h] [ebp-24h] BYREF
  __int16 v21; // [esp+30h] [ebp-1Ch]
  char v22; // [esp+37h] [ebp-15h] BYREF
  int v23; // [esp+38h] [ebp-14h] BYREF
  bool v24; // [esp+3Fh] [ebp-Dh]
  int v25; // [esp+48h] [ebp-4h]

  v25 = 1;
  if ( a7 < 1 )
    sub_5E9F20((char)"shHoleCards >= 1", "..\\Casino\\PokerHand.cpp", 5113);
  if ( a7 > 3 )
    sub_5E9F20((char)"shHoleCards <= 3", "..\\Casino\\PokerHand.cpp", 5114);
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  sub_464110(&v12);
  LOBYTE(v25) = 2;
  sub_464110(&v22);
  LOBYTE(v25) = 3;
  sub_464110(&v18);
  LOBYTE(v25) = 4;
  sub_485940(this, &v23, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v25) = 5;
  sub_4A20D0(&v19);
  LOBYTE(v25) = 6;
  sub_4646A0(&v13);
  LOBYTE(v25) = 7;
  sub_4646A0(v20);
  LOBYTE(v25) = 8;
  v17 = a7 != 3;
  v16 = a7 < 2;
  v24 = a7 < 1;
  do
  {
    if ( !v24 && !sub_464A10((unsigned __int16 *)&a2, &v12) )
      break;
    if ( !v16 )
    {
      v13 = a2;
      v14 = a3;
      v15 = a4;
    }
    do
    {
      if ( !v16 && !sub_464A10((unsigned __int16 *)&v13, &v22) )
        break;
      if ( !v17 )
      {
        v20[0] = v13;
        v20[1] = v14;
        v21 = v15;
      }
      do
      {
        if ( !v17 && !sub_464A10((unsigned __int16 *)v20, &v18) )
          break;
        if ( !v24 )
          sub_484830(&a5, &v12);
        if ( !v16 )
          sub_484830(&a5, &v22);
        if ( !v17 )
          sub_484830(&a5, &v18);
        v19 = *sub_485940(&a5, &v11, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(&v11);
        if ( (unsigned __int8)sub_4A2440(&v23) )
        {
          ++*a8;
        }
        else if ( (unsigned __int8)sub_4A2340(&v23) )
        {
          ++*a9;
        }
        else
        {
          ++*a10;
        }
        if ( !v24 )
          sub_484AD0(&a5, &v12);
        if ( !v16 )
          sub_484AD0(&a5, &v22);
        if ( !v17 )
          sub_484AD0(&a5, &v18);
      }
      while ( !v17 );
    }
    while ( !v16 );
  }
  while ( !v24 );
  LOBYTE(v25) = 7;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v20);
  LOBYTE(v25) = 6;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v13);
  LOBYTE(v25) = 5;
  ATL::CComCriticalSection::~CComCriticalSection(&v19);
  LOBYTE(v25) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v23);
  LOBYTE(v25) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v18);
  LOBYTE(v25) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v22);
  LOBYTE(v25) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v12);
  LOBYTE(v25) = 0;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
  v25 = -1;
  sub_484470(&a5);
}


//======================================================================
// sub_4966E0
// entry 004966e0  size 1087  status ok
//======================================================================

void __thiscall sub_4966E0(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14)
{
  int v14; // [esp-4h] [ebp-4Ch]
  int v15; // [esp-4h] [ebp-4Ch]
  int v16; // [esp-4h] [ebp-4Ch]
  int v17; // [esp-4h] [ebp-4Ch]
  int v18; // [esp-4h] [ebp-4Ch]
  int v19; // [esp-4h] [ebp-4Ch]
  int v20; // [esp-4h] [ebp-4Ch]
  int v21; // [esp-4h] [ebp-4Ch]
  int v22; // [esp-4h] [ebp-4Ch]
  int v23; // [esp-4h] [ebp-4Ch]
  char v25; // [esp+Ch] [ebp-3Ch] BYREF
  char v26; // [esp+Dh] [ebp-3Bh] BYREF
  char v27; // [esp+Eh] [ebp-3Ah] BYREF
  char v28; // [esp+Fh] [ebp-39h] BYREF
  char v29; // [esp+10h] [ebp-38h] BYREF
  char v30; // [esp+11h] [ebp-37h] BYREF
  char v31; // [esp+12h] [ebp-36h] BYREF
  char v32; // [esp+13h] [ebp-35h] BYREF
  char v33; // [esp+14h] [ebp-34h] BYREF
  char v34; // [esp+15h] [ebp-33h] BYREF
  _BYTE v35[5]; // [esp+16h] [ebp-32h] BYREF
  char v36; // [esp+1Bh] [ebp-2Dh] BYREF
  _DWORD v37[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  __int16 v38; // [esp+24h] [ebp-24h]
  __int16 v39[5]; // [esp+28h] [ebp-20h] BYREF
  bool v40; // [esp+33h] [ebp-15h]
  int v41; // [esp+34h] [ebp-14h] BYREF
  char v42; // [esp+3Ah] [ebp-Eh] BYREF
  bool v43; // [esp+3Bh] [ebp-Dh]
  int v44; // [esp+44h] [ebp-4h]

  v44 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  sub_484320(v39, (int)this);
  LOBYTE(v44) = 1;
  sub_464110(&v36);
  LOBYTE(v44) = 2;
  sub_464110(&v42);
  LOBYTE(v44) = 3;
  sub_4A20D0(&v41);
  LOBYTE(v44) = 4;
  sub_4646A0(v37);
  LOBYTE(v44) = 5;
  v40 = *(this + 2) > 5;
  v43 = *(this + 2) > 6;
  do
  {
    if ( !v43 && !sub_464A10((unsigned __int16 *)&a2, &v36) )
      break;
    if ( !v40 )
    {
      v37[0] = a2;
      v37[1] = a3;
      v38 = a4;
    }
    do
    {
      if ( !v40 && !sub_464A10((unsigned __int16 *)v37, &v42) )
        break;
      if ( !v43 )
        sub_484830(v39, &v36);
      if ( !v40 )
        sub_484830(v39, &v42);
      v41 = *(_DWORD *)sub_4A1910(v35);
      ATL::CComCriticalSection::~CComCriticalSection(v35);
      v14 = dword_791390;
      sub_4A2160(&v34);
      if ( (unsigned __int8)sub_4A1E40(v14) )
      {
        ++*a14;
      }
      else
      {
        v15 = dword_7913A4;
        sub_4A21B0(&v33);
        if ( (unsigned __int8)sub_4A1FB0(v15) )
        {
          ++*a5;
        }
        else
        {
          v16 = dword_791404;
          sub_4A21B0(&v32);
          if ( (unsigned __int8)sub_4A1FB0(v16) )
          {
            ++*a6;
          }
          else
          {
            v17 = dword_7913F8;
            sub_4A21B0(&v31);
            if ( (unsigned __int8)sub_4A1FB0(v17) )
            {
              ++*a7;
            }
            else
            {
              v18 = dword_791410;
              sub_4A21B0(&v30);
              if ( (unsigned __int8)sub_4A1FB0(v18) )
              {
                ++*a8;
              }
              else
              {
                v19 = dword_7913F4;
                sub_4A21B0(&v29);
                if ( (unsigned __int8)sub_4A1FB0(v19) )
                {
                  ++*a9;
                }
                else
                {
                  v20 = dword_79138C;
                  sub_4A21B0(&v28);
                  if ( (unsigned __int8)sub_4A1FB0(v20) )
                  {
                    ++*a10;
                  }
                  else
                  {
                    v21 = dword_791400;
                    sub_4A21B0(&v27);
                    if ( (unsigned __int8)sub_4A1FB0(v21) )
                    {
                      ++*a11;
                    }
                    else
                    {
                      v22 = dword_7913BC;
                      sub_4A21B0(&v26);
                      if ( (unsigned __int8)sub_4A1FB0(v22) )
                      {
                        ++*a12;
                      }
                      else
                      {
                        v23 = dword_7913E0;
                        sub_4A21B0(&v25);
                        if ( (unsigned __int8)sub_4A1FB0(v23) )
                          ++*a13;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( !v43 )
        sub_484AD0(v39, &v36);
      if ( !v40 )
        sub_484AD0(v39, &v42);
    }
    while ( !v40 );
  }
  while ( !v43 );
  LOBYTE(v44) = 4;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v37);
  LOBYTE(v44) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v41);
  LOBYTE(v44) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v42);
  LOBYTE(v44) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v36);
  LOBYTE(v44) = 0;
  sub_484470(v39);
  v44 = -1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
}


//======================================================================
// sub_496B20
// entry 00496b20  size 1209  status ok
//======================================================================

void __thiscall sub_496B20(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        _DWORD *a15,
        _DWORD *a16)
{
  _BYTE v17[4]; // [esp+12h] [ebp-4Eh] BYREF
  int v18; // [esp+16h] [ebp-4Ah] BYREF
  char v19; // [esp+1Bh] [ebp-45h] BYREF
  int v20; // [esp+1Ch] [ebp-44h] BYREF
  int v21; // [esp+20h] [ebp-40h]
  __int16 v22; // [esp+24h] [ebp-3Ch]
  bool v23; // [esp+2Ah] [ebp-36h]
  bool v24; // [esp+2Bh] [ebp-35h]
  _BYTE v25[7]; // [esp+2Ch] [ebp-34h] BYREF
  char v26; // [esp+33h] [ebp-2Dh] BYREF
  int v27; // [esp+34h] [ebp-2Ch] BYREF
  _DWORD v28[2]; // [esp+38h] [ebp-28h] BYREF
  __int16 v29; // [esp+40h] [ebp-20h]
  char v30; // [esp+47h] [ebp-19h] BYREF
  int v31; // [esp+48h] [ebp-18h] BYREF
  int v32; // [esp+4Ch] [ebp-14h] BYREF
  bool v33; // [esp+53h] [ebp-Dh]
  int v34; // [esp+5Ch] [ebp-4h]

  v34 = 1;
  if ( a7 < 1 )
    sub_5E9F20((char)"shHoleCards >= 1", "..\\Casino\\PokerHand.cpp", 5296);
  if ( a7 > 3 )
    sub_5E9F20((char)"shHoleCards <= 3", "..\\Casino\\PokerHand.cpp", 5297);
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  *a15 = 0;
  *a16 = 0;
  sub_464110(&v19);
  LOBYTE(v34) = 2;
  sub_464110(&v30);
  LOBYTE(v34) = 3;
  sub_464110(&v26);
  LOBYTE(v34) = 4;
  sub_485940(this, &v32, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v34) = 5;
  sub_4A1910(v25);
  LOBYTE(v34) = 6;
  sub_4A20D0(&v27);
  LOBYTE(v34) = 7;
  sub_4A20D0(&v31);
  LOBYTE(v34) = 8;
  sub_4646A0(&v20);
  LOBYTE(v34) = 9;
  sub_4646A0(v28);
  LOBYTE(v34) = 10;
  v24 = a7 != 3;
  v23 = a7 < 2;
  v33 = a7 < 1;
  do
  {
    if ( !v33 && !sub_464A10((unsigned __int16 *)&a2, &v19) )
      break;
    if ( !v23 )
    {
      v20 = a2;
      v21 = a3;
      v22 = a4;
    }
    do
    {
      if ( !v23 && !sub_464A10((unsigned __int16 *)&v20, &v30) )
        break;
      if ( !v24 )
      {
        v28[0] = v20;
        v28[1] = v21;
        v29 = v22;
      }
      do
      {
        if ( !v24 && !sub_464A10((unsigned __int16 *)v28, &v26) )
          break;
        if ( !v33 )
          sub_484830(&a5, &v19);
        if ( !v23 )
          sub_484830(&a5, &v30);
        if ( !v24 )
          sub_484830(&a5, &v26);
        v27 = *sub_485940(&a5, &v18, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(&v18);
        v31 = *(_DWORD *)sub_4A1910(v17);
        ATL::CComCriticalSection::~CComCriticalSection(v17);
        if ( (unsigned __int8)sub_4A2440(&v32) )
        {
          if ( (unsigned __int8)sub_4A2550(v25) )
          {
            ++*a8;
          }
          else if ( (unsigned __int8)sub_4A2340(v25) )
          {
            ++*a11;
          }
          else
          {
            ++*a14;
          }
        }
        else if ( (unsigned __int8)sub_4A2340(&v32) )
        {
          if ( (unsigned __int8)sub_4A2550(v25) )
          {
            ++*a9;
          }
          else if ( (unsigned __int8)sub_4A2340(v25) )
          {
            ++*a12;
          }
          else
          {
            ++*a15;
          }
        }
        else if ( (unsigned __int8)sub_4A2550(v25) )
        {
          ++*a10;
        }
        else if ( (unsigned __int8)sub_4A2340(v25) )
        {
          ++*a13;
        }
        else
        {
          ++*a16;
        }
        if ( !v33 )
          sub_484AD0(&a5, &v19);
        if ( !v23 )
          sub_484AD0(&a5, &v30);
        if ( !v24 )
          sub_484AD0(&a5, &v26);
      }
      while ( !v24 );
    }
    while ( !v23 );
  }
  while ( !v33 );
  LOBYTE(v34) = 9;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v28);
  LOBYTE(v34) = 8;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v20);
  LOBYTE(v34) = 7;
  ATL::CComCriticalSection::~CComCriticalSection(&v31);
  LOBYTE(v34) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v27);
  LOBYTE(v34) = 5;
  ATL::CComCriticalSection::~CComCriticalSection(v25);
  LOBYTE(v34) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v32);
  LOBYTE(v34) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v26);
  LOBYTE(v34) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v30);
  LOBYTE(v34) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v19);
  LOBYTE(v34) = 0;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
  v34 = -1;
  sub_484470(&a5);
}


//======================================================================
// sub_496FE0
// entry 00496fe0  size 1709  status ok
//======================================================================

void __thiscall sub_496FE0(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        _DWORD *a15,
        _DWORD *a16)
{
  _BYTE *v16; // [esp+8h] [ebp-A0h]
  _BYTE *v17; // [esp+10h] [ebp-98h]
  _BYTE *v18; // [esp+18h] [ebp-90h]
  _BYTE *v19; // [esp+24h] [ebp-84h]
  _BYTE *v20; // [esp+2Ch] [ebp-7Ch]
  _BYTE *v21; // [esp+34h] [ebp-74h]
  int v23; // [esp+40h] [ebp-68h] BYREF
  char v24; // [esp+44h] [ebp-64h] BYREF
  char v25; // [esp+45h] [ebp-63h] BYREF
  char v26; // [esp+46h] [ebp-62h] BYREF
  char v27; // [esp+47h] [ebp-61h]
  int v28; // [esp+48h] [ebp-60h] BYREF
  char v29; // [esp+4Ch] [ebp-5Ch] BYREF
  char v30; // [esp+4Dh] [ebp-5Bh] BYREF
  char v31; // [esp+4Eh] [ebp-5Ah] BYREF
  char v32; // [esp+4Fh] [ebp-59h]
  __int16 v33[5]; // [esp+50h] [ebp-58h] BYREF
  char v34; // [esp+5Bh] [ebp-4Dh] BYREF
  int v35; // [esp+5Ch] [ebp-4Ch] BYREF
  int v36; // [esp+60h] [ebp-48h]
  __int16 v37; // [esp+64h] [ebp-44h]
  bool v38; // [esp+6Ah] [ebp-3Eh]
  bool v39; // [esp+6Bh] [ebp-3Dh]
  int v40; // [esp+6Ch] [ebp-3Ch] BYREF
  char v41; // [esp+73h] [ebp-35h] BYREF
  int v42; // [esp+74h] [ebp-34h] BYREF
  _DWORD v43[2]; // [esp+78h] [ebp-30h] BYREF
  __int16 v44; // [esp+80h] [ebp-28h]
  char v45; // [esp+87h] [ebp-21h] BYREF
  int v46; // [esp+88h] [ebp-20h] BYREF
  __int16 v47[4]; // [esp+8Ch] [ebp-1Ch] BYREF
  int v48; // [esp+94h] [ebp-14h] BYREF
  bool v49; // [esp+9Bh] [ebp-Dh]
  int v50; // [esp+A4h] [ebp-4h]

  v50 = 1;
  if ( a7 < 1 )
    sub_5E9F20((char)"shHoleCards >= 1", "..\\Casino\\PokerHand.cpp", 5420);
  if ( a7 > 3 )
    sub_5E9F20((char)"shHoleCards <= 3", "..\\Casino\\PokerHand.cpp", 5421);
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  *a15 = 0;
  *a16 = 0;
  sub_464110(&v34);
  LOBYTE(v50) = 2;
  sub_464110(&v45);
  LOBYTE(v50) = 3;
  sub_464110(&v41);
  LOBYTE(v50) = 4;
  sub_485940(this, &v48, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v50) = 5;
  sub_484320(v47, (int)this);
  LOBYTE(v50) = 6;
  v21 = sub_464130(&v31, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v50) = 7;
  v32 = sub_484BA0(v47, v21);
  LOBYTE(v50) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v31);
  if ( v32 )
  {
    v20 = sub_464130(&v30, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
    LOBYTE(v50) = 8;
    sub_484AD0(v47, v20);
    LOBYTE(v50) = 6;
    ATL::CComCriticalSection::~CComCriticalSection(&v30);
    v19 = sub_464130(&v29, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
    LOBYTE(v50) = 9;
    sub_484830(v47, v19);
    LOBYTE(v50) = 6;
    ATL::CComCriticalSection::~CComCriticalSection(&v29);
  }
  sub_48CCD0(v47, &v40);
  LOBYTE(v50) = 10;
  sub_4A20D0(&v42);
  LOBYTE(v50) = 11;
  sub_4A20D0(&v46);
  LOBYTE(v50) = 12;
  sub_4646A0(&v35);
  LOBYTE(v50) = 13;
  sub_4646A0(v43);
  LOBYTE(v50) = 14;
  v39 = a7 != 3;
  v38 = a7 < 2;
  v49 = a7 < 1;
  do
  {
    if ( !v49 && !sub_464A10((unsigned __int16 *)&a2, &v34) )
      break;
    if ( !v38 )
    {
      v35 = a2;
      v36 = a3;
      v37 = a4;
    }
    do
    {
      if ( !v38 && !sub_464A10((unsigned __int16 *)&v35, &v45) )
        break;
      if ( !v39 )
      {
        v43[0] = v35;
        v43[1] = v36;
        v44 = v37;
      }
      while ( v39 || sub_464A10((unsigned __int16 *)v43, &v41) )
      {
        if ( !v49 )
          sub_484830(&a5, &v34);
        if ( !v38 )
          sub_484830(&a5, &v45);
        if ( !v39 )
          sub_484830(&a5, &v41);
        v42 = *sub_485940(&a5, &v28, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(&v28);
        sub_484320(v33, (int)&a5);
        LOBYTE(v50) = 15;
        v18 = sub_464130(&v26, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
        LOBYTE(v50) = 16;
        v27 = sub_484BA0(v33, v18);
        LOBYTE(v50) = 15;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        if ( v27 )
        {
          v17 = sub_464130(&v25, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
          LOBYTE(v50) = 17;
          sub_484AD0(v33, v17);
          LOBYTE(v50) = 15;
          ATL::CComCriticalSection::~CComCriticalSection(&v25);
          v16 = sub_464130(&v24, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
          LOBYTE(v50) = 18;
          sub_484830(v33, v16);
          LOBYTE(v50) = 15;
          ATL::CComCriticalSection::~CComCriticalSection(&v24);
        }
        v46 = *sub_48CCD0(v33, &v23);
        ATL::CComCriticalSection::~CComCriticalSection(&v23);
        if ( (unsigned __int8)sub_4A2440(&v48) )
        {
          if ( (unsigned __int8)sub_4A2550(&v40) )
          {
            ++*a8;
          }
          else if ( (unsigned __int8)sub_4A2340(&v40) )
          {
            ++*a8;
          }
          else
          {
            ++*a14;
          }
        }
        else if ( (unsigned __int8)sub_4A2340(&v48) )
        {
          if ( (unsigned __int8)sub_4A2550(&v40) )
          {
            ++*a9;
          }
          else if ( (unsigned __int8)sub_4A2340(&v40) )
          {
            ++*a12;
          }
          else
          {
            ++*a15;
          }
        }
        else if ( (unsigned __int8)sub_4A2550(&v40) )
        {
          ++*a10;
        }
        else if ( (unsigned __int8)sub_4A2340(&v40) )
        {
          ++*a13;
        }
        else
        {
          ++*a16;
        }
        if ( !v49 )
          sub_484AD0(&a5, &v34);
        if ( !v38 )
          sub_484AD0(&a5, &v45);
        if ( !v39 )
          sub_484AD0(&a5, &v41);
        if ( v39 )
        {
          LOBYTE(v50) = 14;
          sub_484470(v33);
          break;
        }
        LOBYTE(v50) = 14;
        sub_484470(v33);
      }
    }
    while ( !v38 );
  }
  while ( !v49 );
  LOBYTE(v50) = 13;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v43);
  LOBYTE(v50) = 12;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v35);
  LOBYTE(v50) = 11;
  ATL::CComCriticalSection::~CComCriticalSection(&v46);
  LOBYTE(v50) = 10;
  ATL::CComCriticalSection::~CComCriticalSection(&v42);
  LOBYTE(v50) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v40);
  LOBYTE(v50) = 5;
  sub_484470(v47);
  LOBYTE(v50) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v48);
  LOBYTE(v50) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v41);
  LOBYTE(v50) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&v45);
  LOBYTE(v50) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v34);
  LOBYTE(v50) = 0;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
  v50 = -1;
  sub_484470(&a5);
}


//======================================================================
// sub_497690
// entry 00497690  size 1329  status ok
//======================================================================

void __thiscall sub_497690(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        _DWORD *a15,
        _DWORD *a16)
{
  _BYTE *v16; // [esp+Ch] [ebp-60h]
  int v18; // [esp+1Eh] [ebp-4Eh] BYREF
  int v19; // [esp+22h] [ebp-4Ah] BYREF
  char v20; // [esp+26h] [ebp-46h] BYREF
  char v21; // [esp+27h] [ebp-45h] BYREF
  int v22; // [esp+28h] [ebp-44h] BYREF
  int v23; // [esp+2Ch] [ebp-40h]
  __int16 v24; // [esp+30h] [ebp-3Ch]
  bool v25; // [esp+36h] [ebp-36h]
  bool v26; // [esp+37h] [ebp-35h]
  int v27; // [esp+38h] [ebp-34h] BYREF
  char v28; // [esp+3Fh] [ebp-2Dh] BYREF
  int v29; // [esp+40h] [ebp-2Ch] BYREF
  _DWORD v30[2]; // [esp+44h] [ebp-28h] BYREF
  __int16 v31; // [esp+4Ch] [ebp-20h]
  char v32; // [esp+53h] [ebp-19h] BYREF
  int v33; // [esp+54h] [ebp-18h] BYREF
  int v34; // [esp+58h] [ebp-14h] BYREF
  bool v35; // [esp+5Fh] [ebp-Dh]
  int v36; // [esp+68h] [ebp-4h]

  v36 = 1;
  if ( a7 < 1 )
    sub_5E9F20((char)"shHoleCards >= 1", "..\\Casino\\PokerHand.cpp", 5555);
  if ( a7 > 3 )
    sub_5E9F20((char)"shHoleCards <= 3", "..\\Casino\\PokerHand.cpp", 5556);
  v16 = sub_464130(&v20, (_BYTE *)dword_7907B0, (_BYTE *)dword_79076C);
  LOBYTE(v36) = 2;
  if ( sub_484BA0(&a5, v16) )
    sub_5E9F20(
      (char)"!phOpponentShowing.ContainsCard(PokerCard(QueenRank,SpadesSuit))",
      "..\\Casino\\PokerHand.cpp",
      5557);
  v36 = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v20);
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  *a15 = 0;
  *a16 = 0;
  sub_464110(&v21);
  LOBYTE(v36) = 3;
  sub_464110(&v32);
  LOBYTE(v36) = 4;
  sub_464110(&v28);
  LOBYTE(v36) = 5;
  sub_485940(this, &v34, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v36) = 6;
  sub_48D1C0(this, &v27);
  LOBYTE(v36) = 7;
  sub_4A20D0(&v29);
  LOBYTE(v36) = 8;
  sub_4A20D0(&v33);
  LOBYTE(v36) = 9;
  sub_4646A0(&v22);
  LOBYTE(v36) = 10;
  sub_4646A0(v30);
  LOBYTE(v36) = 11;
  v26 = a7 != 3;
  v25 = a7 < 2;
  v35 = a7 < 1;
  do
  {
    if ( !v35 && !sub_464A10((unsigned __int16 *)&a2, &v21) )
      break;
    if ( !v25 )
    {
      v22 = a2;
      v23 = a3;
      v24 = a4;
    }
    do
    {
      if ( !v25 && !sub_464A10((unsigned __int16 *)&v22, &v32) )
        break;
      if ( !v26 )
      {
        v30[0] = v22;
        v30[1] = v23;
        v31 = v24;
      }
      do
      {
        if ( !v26 && !sub_464A10((unsigned __int16 *)v30, &v28) )
          break;
        if ( !v35 )
          sub_484830(&a5, &v21);
        if ( !v25 )
          sub_484830(&a5, &v32);
        if ( !v26 )
          sub_484830(&a5, &v28);
        v29 = *sub_485940(&a5, &v19, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(&v19);
        v33 = *sub_48D1C0(&a5, &v18);
        ATL::CComCriticalSection::~CComCriticalSection(&v18);
        if ( (unsigned __int8)sub_4A2440(&v34) )
        {
          if ( (unsigned __int8)sub_4A2550(&v27) )
          {
            ++*a8;
          }
          else if ( (unsigned __int8)sub_4A2340(&v27) )
          {
            ++*a8;
          }
          else
          {
            ++*a14;
          }
        }
        else if ( (unsigned __int8)sub_4A2340(&v34) )
        {
          if ( (unsigned __int8)sub_4A2550(&v27) )
          {
            ++*a9;
          }
          else if ( (unsigned __int8)sub_4A2340(&v27) )
          {
            ++*a12;
          }
          else
          {
            ++*a15;
          }
        }
        else if ( (unsigned __int8)sub_4A2550(&v27) )
        {
          ++*a10;
        }
        else if ( (unsigned __int8)sub_4A2340(&v27) )
        {
          ++*a13;
        }
        else
        {
          ++*a16;
        }
        if ( !v35 )
          sub_484AD0(&a5, &v21);
        if ( !v25 )
          sub_484AD0(&a5, &v32);
        if ( !v26 )
          sub_484AD0(&a5, &v28);
      }
      while ( !v26 );
    }
    while ( !v25 );
  }
  while ( !v35 );
  LOBYTE(v36) = 10;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v30);
  LOBYTE(v36) = 9;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v22);
  LOBYTE(v36) = 8;
  ATL::CComCriticalSection::~CComCriticalSection(&v33);
  LOBYTE(v36) = 7;
  ATL::CComCriticalSection::~CComCriticalSection(&v29);
  LOBYTE(v36) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v27);
  LOBYTE(v36) = 5;
  ATL::CComCriticalSection::~CComCriticalSection(&v34);
  LOBYTE(v36) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v28);
  LOBYTE(v36) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v32);
  LOBYTE(v36) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v21);
  LOBYTE(v36) = 0;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
  v36 = -1;
  sub_484470(&a5);
}


//======================================================================
// sub_497BD0
// entry 00497bd0  size 1325  status ok
//======================================================================

void __thiscall sub_497BD0(
        __int16 *this,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        int a8,
        __int16 a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        _DWORD *a14,
        _DWORD *a15,
        _DWORD *a16,
        _DWORD *a17,
        _DWORD *a18)
{
  int v19; // [esp+12h] [ebp-56h] BYREF
  int v20; // [esp+16h] [ebp-52h] BYREF
  char v21; // [esp+1Bh] [ebp-4Dh] BYREF
  int v22; // [esp+1Ch] [ebp-4Ch] BYREF
  int v23; // [esp+20h] [ebp-48h]
  __int16 v24; // [esp+24h] [ebp-44h]
  bool v25; // [esp+2Ah] [ebp-3Eh]
  bool v26; // [esp+2Bh] [ebp-3Dh]
  int v27; // [esp+2Ch] [ebp-3Ch] BYREF
  char v28; // [esp+33h] [ebp-35h] BYREF
  int v29; // [esp+34h] [ebp-34h] BYREF
  _DWORD v30[2]; // [esp+38h] [ebp-30h] BYREF
  __int16 v31; // [esp+40h] [ebp-28h]
  char v32; // [esp+47h] [ebp-21h] BYREF
  int v33; // [esp+48h] [ebp-20h] BYREF
  __int16 v34[4]; // [esp+4Ch] [ebp-1Ch] BYREF
  int v35; // [esp+54h] [ebp-14h] BYREF
  bool v36; // [esp+5Bh] [ebp-Dh]
  int v37; // [esp+64h] [ebp-4h]

  v37 = 2;
  if ( a9 < 1 )
    sub_5E9F20((char)"shHoleCards >= 1", "..\\Casino\\PokerHand.cpp", 5680);
  if ( a9 > 3 )
    sub_5E9F20((char)"shHoleCards <= 3", "..\\Casino\\PokerHand.cpp", 5681);
  sub_484300(v34);
  LOBYTE(v37) = 3;
  sub_484B80(v34);
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  *a14 = 0;
  *a15 = 0;
  *a16 = 0;
  *a17 = 0;
  *a18 = 0;
  sub_464110(&v21);
  LOBYTE(v37) = 4;
  sub_464110(&v32);
  LOBYTE(v37) = 5;
  sub_464110(&v28);
  LOBYTE(v37) = 6;
  sub_485940(this, &v35, 1, 1, 1, 1, 0, 0, 0);
  LOBYTE(v37) = 7;
  sub_48CCD0(&a5, &v27);
  LOBYTE(v37) = 8;
  sub_4A20D0(&v29);
  LOBYTE(v37) = 9;
  sub_4A20D0(&v33);
  LOBYTE(v37) = 10;
  sub_4646A0(&v22);
  LOBYTE(v37) = 11;
  sub_4646A0(v30);
  LOBYTE(v37) = 12;
  v26 = a9 != 3;
  v25 = a9 < 2;
  v36 = a9 < 1;
  do
  {
    if ( !v36 && !sub_464A10((unsigned __int16 *)&a2, &v21) )
      break;
    if ( !v25 )
    {
      v22 = a2;
      v23 = a3;
      v24 = a4;
    }
    do
    {
      if ( !v25 && !sub_464A10((unsigned __int16 *)&v22, &v32) )
        break;
      if ( !v26 )
      {
        v30[0] = v22;
        v30[1] = v23;
        v31 = v24;
      }
      do
      {
        if ( !v26 && !sub_464A10((unsigned __int16 *)v30, &v28) )
          break;
        if ( !v36 )
        {
          sub_484830(&a7, &v21);
          sub_484830(v34, &v21);
        }
        if ( !v25 )
        {
          sub_484830(&a7, &v32);
          sub_484830(v34, &v32);
        }
        if ( !v26 )
        {
          sub_484830(&a7, &v28);
          sub_484830(v34, &v28);
        }
        v29 = *sub_485940(&a7, &v20, 1, 1, 1, 1, 0, 0, 0);
        ATL::CComCriticalSection::~CComCriticalSection(&v20);
        v33 = *sub_48CCD0(v34, &v19);
        ATL::CComCriticalSection::~CComCriticalSection(&v19);
        if ( (unsigned __int8)sub_4A2440(&v35) )
        {
          if ( (unsigned __int8)sub_4A2550(&v27) )
          {
            ++*a10;
          }
          else if ( (unsigned __int8)sub_4A2340(&v27) )
          {
            ++*a10;
          }
          else
          {
            ++*a16;
          }
        }
        else if ( (unsigned __int8)sub_4A2340(&v35) )
        {
          if ( (unsigned __int8)sub_4A2550(&v27) )
          {
            ++*a11;
          }
          else if ( (unsigned __int8)sub_4A2340(&v27) )
          {
            ++*a14;
          }
          else
          {
            ++*a17;
          }
        }
        else if ( (unsigned __int8)sub_4A2550(&v27) )
        {
          ++*a12;
        }
        else if ( (unsigned __int8)sub_4A2340(&v27) )
        {
          ++*a15;
        }
        else
        {
          ++*a18;
        }
        if ( !v36 )
        {
          sub_484AD0(&a7, &v21);
          sub_484AD0(v34, &v21);
        }
        if ( !v25 )
        {
          sub_484AD0(&a7, &v32);
          sub_484AD0(v34, &v32);
        }
        if ( !v26 )
        {
          sub_484AD0(&a7, &v28);
          sub_484AD0(v34, &v28);
        }
      }
      while ( !v26 );
    }
    while ( !v25 );
  }
  while ( !v36 );
  LOBYTE(v37) = 11;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v30);
  LOBYTE(v37) = 10;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&v22);
  LOBYTE(v37) = 9;
  ATL::CComCriticalSection::~CComCriticalSection(&v33);
  LOBYTE(v37) = 8;
  ATL::CComCriticalSection::~CComCriticalSection(&v29);
  LOBYTE(v37) = 7;
  ATL::CComCriticalSection::~CComCriticalSection(&v27);
  LOBYTE(v37) = 6;
  ATL::CComCriticalSection::~CComCriticalSection(&v35);
  LOBYTE(v37) = 5;
  ATL::CComCriticalSection::~CComCriticalSection(&v28);
  LOBYTE(v37) = 4;
  ATL::CComCriticalSection::~CComCriticalSection(&v32);
  LOBYTE(v37) = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v21);
  LOBYTE(v37) = 2;
  sub_484470(v34);
  LOBYTE(v37) = 1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)&a2);
  LOBYTE(v37) = 0;
  sub_484470(&a5);
  v37 = -1;
  sub_484470(&a7);
}


//======================================================================
// sub_498100
// entry 00498100  size 2072  status ok
//======================================================================

__int16 __thiscall sub_498100(__int16 *this)
{
  int v2; // [esp-4h] [ebp-88h]
  int v3; // [esp-4h] [ebp-88h]
  int v4; // [esp-4h] [ebp-88h]
  int v5; // [esp-4h] [ebp-88h]
  int v6; // [esp-4h] [ebp-88h]
  int v7; // [esp-4h] [ebp-88h]
  int v8; // [esp-4h] [ebp-88h]
  int v9; // [esp-4h] [ebp-88h]
  int v10; // [esp-4h] [ebp-88h]
  int v11; // [esp-4h] [ebp-88h]
  int v12; // [esp-4h] [ebp-88h]
  int v13; // [esp-4h] [ebp-88h]
  int v14; // [esp-4h] [ebp-88h]
  int v15; // [esp-4h] [ebp-88h]
  int v16; // [esp-4h] [ebp-88h]
  int v17; // [esp-4h] [ebp-88h]
  int v18; // [esp-4h] [ebp-88h]
  int v19; // [esp-4h] [ebp-88h]
  int v20; // [esp-4h] [ebp-88h]
  int v21; // [esp-4h] [ebp-88h]
  int v22; // [esp-4h] [ebp-88h]
  int v23; // [esp-4h] [ebp-88h]
  int v24; // [esp-4h] [ebp-88h]
  int v25; // [esp-4h] [ebp-88h]
  int v26; // [esp-4h] [ebp-88h]
  int v27; // [esp-4h] [ebp-88h]
  int v28; // [esp-4h] [ebp-88h]
  int v29; // [esp-4h] [ebp-88h]
  int v30; // [esp-4h] [ebp-88h]
  char v31; // [esp+Dh] [ebp-77h] BYREF
  char v32; // [esp+11h] [ebp-73h] BYREF
  char v33; // [esp+15h] [ebp-6Fh] BYREF
  char v34; // [esp+18h] [ebp-6Ch] BYREF
  char v35; // [esp+19h] [ebp-6Bh] BYREF
  char v36; // [esp+1Fh] [ebp-65h] BYREF
  char v37; // [esp+23h] [ebp-61h] BYREF
  char v38; // [esp+27h] [ebp-5Dh] BYREF
  char v39; // [esp+2Bh] [ebp-59h] BYREF
  char v40; // [esp+2Fh] [ebp-55h] BYREF
  char v41; // [esp+33h] [ebp-51h] BYREF
  char v42; // [esp+37h] [ebp-4Dh] BYREF
  char v43; // [esp+3Bh] [ebp-49h] BYREF
  char v44; // [esp+3Fh] [ebp-45h] BYREF
  char v45; // [esp+43h] [ebp-41h] BYREF
  char v46; // [esp+47h] [ebp-3Dh] BYREF
  char v47; // [esp+4Ah] [ebp-3Ah] BYREF
  char v48; // [esp+4Bh] [ebp-39h] BYREF
  char v49; // [esp+51h] [ebp-33h] BYREF
  char v50; // [esp+54h] [ebp-30h] BYREF
  char v51; // [esp+55h] [ebp-2Fh] BYREF
  char v52; // [esp+5Bh] [ebp-29h] BYREF
  char v53; // [esp+5Eh] [ebp-26h] BYREF
  char v54; // [esp+5Fh] [ebp-25h] BYREF
  char v55; // [esp+63h] [ebp-21h] BYREF
  char v56; // [esp+67h] [ebp-1Dh] BYREF
  char v57; // [esp+6Bh] [ebp-19h] BYREF
  char v58; // [esp+6Fh] [ebp-15h] BYREF
  char v59; // [esp+73h] [ebp-11h] BYREF
  int v60; // [esp+74h] [ebp-10h] BYREF
  int v61; // [esp+80h] [ebp-4h]

  sub_485940(this, &v60, 1, 1, 1, 1, 0, 0, 0);
  v61 = 0;
  v2 = dword_791398;
  sub_4A2160(&v59);
  if ( (unsigned __int8)sub_4A1E10(v2) )
  {
    v61 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v60);
    return 28;
  }
  else
  {
    v3 = dword_791394;
    sub_4A2160(&v58);
    if ( (unsigned __int8)sub_4A1E10(v3) )
    {
      v61 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v60);
      return 27;
    }
    else
    {
      v4 = dword_7913D4;
      sub_4A2160(&v57);
      if ( (unsigned __int8)sub_4A1E10(v4) )
      {
        v61 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v60);
        return 26;
      }
      else
      {
        v5 = dword_7913A0;
        sub_4A2160(&v56);
        if ( (unsigned __int8)sub_4A1E10(v5) )
        {
          v61 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v60);
          return 25;
        }
        else
        {
          v6 = dword_79140C;
          sub_4A2160(&v55);
          if ( (unsigned __int8)sub_4A1E10(v6) )
          {
            v61 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v60);
            return 24;
          }
          else
          {
            v7 = dword_791418;
            sub_4A2160(&v54);
            if ( (unsigned __int8)sub_4A1E10(v7) )
            {
              v8 = dword_7913C8;
              sub_4A21B0(&v53);
              if ( (unsigned __int8)sub_4A1FB0(v8) )
              {
                v61 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v60);
                return 23;
              }
              else
              {
                v9 = dword_791400;
                sub_4A21B0(&v52);
                if ( (unsigned __int8)sub_4A2040(v9) )
                {
                  v61 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v60);
                  return 22;
                }
                else
                {
                  v61 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v60);
                  return 21;
                }
              }
            }
            else
            {
              v10 = dword_791380;
              sub_4A2160(&v51);
              if ( (unsigned __int8)sub_4A1E10(v10) )
              {
                v11 = dword_7913C8;
                sub_4A21B0(&v50);
                if ( (unsigned __int8)sub_4A1FB0(v11) )
                {
                  v61 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v60);
                  return 20;
                }
                else
                {
                  v12 = dword_791400;
                  sub_4A21B0(&v49);
                  if ( (unsigned __int8)sub_4A2040(v12) )
                  {
                    v61 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v60);
                    return 19;
                  }
                  else
                  {
                    v61 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v60);
                    return 18;
                  }
                }
              }
              else
              {
                v13 = dword_7913B0;
                sub_4A2160(&v48);
                if ( (unsigned __int8)sub_4A1E10(v13) )
                {
                  v14 = dword_7913C8;
                  sub_4A21B0(&v47);
                  if ( (unsigned __int8)sub_4A1FB0(v14) )
                  {
                    v61 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v60);
                    return 17;
                  }
                  else
                  {
                    v15 = dword_7913E0;
                    sub_4A21B0(&v46);
                    if ( (unsigned __int8)sub_4A1FB0(v15) )
                    {
                      v61 = -1;
                      ATL::CComCriticalSection::~CComCriticalSection(&v60);
                      return 16;
                    }
                    else
                    {
                      v16 = dword_7913BC;
                      sub_4A21B0(&v45);
                      if ( (unsigned __int8)sub_4A1FB0(v16) )
                      {
                        v61 = -1;
                        ATL::CComCriticalSection::~CComCriticalSection(&v60);
                        return 15;
                      }
                      else
                      {
                        v17 = dword_791400;
                        sub_4A21B0(&v44);
                        if ( (unsigned __int8)sub_4A1FB0(v17) )
                        {
                          v61 = -1;
                          ATL::CComCriticalSection::~CComCriticalSection(&v60);
                          return 14;
                        }
                        else
                        {
                          v18 = dword_79138C;
                          sub_4A21B0(&v43);
                          if ( (unsigned __int8)sub_4A1FB0(v18) )
                          {
                            v61 = -1;
                            ATL::CComCriticalSection::~CComCriticalSection(&v60);
                            return 13;
                          }
                          else
                          {
                            v19 = dword_7913F4;
                            sub_4A21B0(&v42);
                            if ( (unsigned __int8)sub_4A1FB0(v19) )
                            {
                              v61 = -1;
                              ATL::CComCriticalSection::~CComCriticalSection(&v60);
                              return 12;
                            }
                            else
                            {
                              v20 = dword_791410;
                              sub_4A21B0(&v41);
                              if ( (unsigned __int8)sub_4A1FB0(v20) )
                              {
                                v61 = -1;
                                ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                return 11;
                              }
                              else
                              {
                                v21 = dword_7913F8;
                                sub_4A21B0(&v40);
                                if ( (unsigned __int8)sub_4A1FB0(v21) )
                                {
                                  v61 = -1;
                                  ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                  return 10;
                                }
                                else
                                {
                                  v22 = dword_791404;
                                  sub_4A21B0(&v39);
                                  if ( (unsigned __int8)sub_4A1FB0(v22) )
                                  {
                                    v61 = -1;
                                    ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                    return 9;
                                  }
                                  else
                                  {
                                    v23 = dword_7913A4;
                                    sub_4A21B0(&v38);
                                    if ( (unsigned __int8)sub_4A1FB0(v23) )
                                    {
                                      v61 = -1;
                                      ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                      return 8;
                                    }
                                    else
                                    {
                                      v24 = dword_791414;
                                      sub_4A21B0(&v37);
                                      if ( (unsigned __int8)sub_4A1FB0(v24) )
                                      {
                                        v61 = -1;
                                        ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                        return 7;
                                      }
                                      else
                                      {
                                        v25 = dword_7913D8;
                                        sub_4A21B0(&v36);
                                        if ( (unsigned __int8)sub_4A1FB0(v25) )
                                        {
                                          v61 = -1;
                                          ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                          return 6;
                                        }
                                        else
                                        {
                                          v61 = -1;
                                          ATL::CComCriticalSection::~CComCriticalSection(&v60);
                                          return 5;
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
                  v26 = dword_791390;
                  sub_4A2160(&v35);
                  if ( !(unsigned __int8)sub_4A1E10(v26) )
                    sub_5E9F20((char)"phv.GetCategory() == NoPair", "..\\Casino\\PokerHand.cpp", 5872);
                  v27 = dword_7913C8;
                  sub_4A21B0(&v34);
                  if ( (unsigned __int8)sub_4A1FB0(v27) )
                  {
                    v61 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v60);
                    return 4;
                  }
                  else
                  {
                    v28 = dword_7913E0;
                    sub_4A21B0(&v33);
                    if ( (unsigned __int8)sub_4A1FB0(v28) )
                    {
                      v61 = -1;
                      ATL::CComCriticalSection::~CComCriticalSection(&v60);
                      return 3;
                    }
                    else
                    {
                      v29 = dword_7913BC;
                      sub_4A21B0(&v32);
                      if ( (unsigned __int8)sub_4A1FB0(v29) )
                      {
                        v61 = -1;
                        ATL::CComCriticalSection::~CComCriticalSection(&v60);
                        return 2;
                      }
                      else
                      {
                        v30 = dword_791400;
                        sub_4A21B0(&v31);
                        if ( (unsigned __int8)sub_4A1FB0(v30) )
                        {
                          v61 = -1;
                          ATL::CComCriticalSection::~CComCriticalSection(&v60);
                          return 1;
                        }
                        else
                        {
                          v61 = -1;
                          ATL::CComCriticalSection::~CComCriticalSection(&v60);
                          return 0;
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


//======================================================================
// sub_498920
// entry 00498920  size 845  status ok
//======================================================================

__int16 __thiscall sub_498920(_WORD *this)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  unsigned __int8 *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  unsigned __int8 *v7; // [esp-4h] [ebp-50h]
  char v9; // [esp+1Fh] [ebp-2Dh] BYREF
  char v10; // [esp+20h] [ebp-2Ch] BYREF
  char v11; // [esp+21h] [ebp-2Bh] BYREF
  char v12; // [esp+22h] [ebp-2Ah] BYREF
  char v13; // [esp+23h] [ebp-29h] BYREF
  __int16 *v14; // [esp+24h] [ebp-28h]
  unsigned __int8 k; // [esp+2Bh] [ebp-21h]
  __int16 v16; // [esp+2Ch] [ebp-20h]
  __int16 v17; // [esp+30h] [ebp-1Ch]
  __int16 j; // [esp+34h] [ebp-18h]
  __int16 *v19; // [esp+38h] [ebp-14h]
  __int16 v20; // [esp+3Ch] [ebp-10h]
  __int16 v21; // [esp+40h] [ebp-Ch]
  __int16 v22; // [esp+44h] [ebp-8h]
  unsigned __int8 v23; // [esp+4Ah] [ebp-2h]
  unsigned __int8 i; // [esp+4Bh] [ebp-1h]

  if ( sub_484BF0(this) == 4 )
    return 29;
  v14 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v19 = v14;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v19[i] = 0;
  for ( j = 0; j < (__int16)*(this + 2); ++j )
  {
    v2 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v13);
    v3 = sub_463F80(v2, &v12);
    ++v19[(unsigned __int8)*v3];
    v7 = (unsigned __int8 *)dword_7907A4;
    v4 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v11);
    if ( sub_464050(v4, v7) )
    {
      v5 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v10);
      v6 = sub_463FD0(v5, &v9);
      ++v19[(unsigned __int8)*v6];
    }
  }
  v23 = 0;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
  {
    if ( v19[i] <= 0 )
    {
      v21 = 0;
    }
    else
    {
      if ( i != *(unsigned __int8 *)dword_7913B4 )
        ++v20;
      if ( ++v21 > v22 )
      {
        v22 = v21;
        v23 = i;
      }
    }
  }
  if ( v22 == 5 )
    goto LABEL_44;
  if ( v22 == 4 )
  {
    operator delete(v19);
    if ( v23 == *(unsigned __int8 *)dword_791414 )
      return 31;
    if ( v23 == *(unsigned __int8 *)dword_7913C8 )
      return 31;
    return 30;
  }
  if ( v20 < 4 )
  {
LABEL_44:
    operator delete(v19);
    return -1;
  }
  v17 = 0;
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_79138C; ++i )
  {
    v16 = 0;
    for ( k = 0; k < 5u; ++k )
    {
      if ( v19[k + i] > 0 )
        ++v16;
    }
    if ( v16 > v17 )
      v17 = v16;
  }
  operator delete(v19);
  if ( v17 == 5 )
    sub_5E9F20((char)"shMostHave != 5", "..\\Casino\\PokerHand.cpp", 5958);
  if ( v17 == 4 )
    return 31;
  else
    return -1;
}


//======================================================================
// sub_498C70
// entry 00498c70  size 6619  status ok
//======================================================================

void __thiscall sub_498C70(__int16 *this, __int16 a2, int a3, __int16 a4)
{
  unsigned __int8 *v4; // eax
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  unsigned __int8 *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  _BYTE *v23; // eax
  _BYTE *v24; // eax
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  _BYTE *v27; // eax
  _BYTE *v28; // eax
  unsigned __int8 *v29; // eax
  _BYTE *v30; // eax
  _BYTE *v31; // eax
  _BYTE *v32; // eax
  _BYTE *v33; // eax
  _BYTE *v34; // eax
  _BYTE *v35; // eax
  _BYTE *v36; // eax
  _BYTE *v37; // eax
  _BYTE *v38; // eax
  _BYTE *v39; // eax
  _BYTE *v40; // eax
  _BYTE *v41; // eax
  _BYTE *v42; // eax
  _BYTE *v43; // eax
  _BYTE *v44; // eax
  _BYTE *v45; // eax
  _BYTE *v46; // eax
  _BYTE *v47; // eax
  _BYTE *v48; // eax
  _BYTE *v49; // eax
  unsigned __int8 *v50; // eax
  unsigned __int8 *v51; // eax
  unsigned __int8 *v52; // eax
  unsigned __int8 *v53; // eax
  unsigned __int8 *v54; // eax
  unsigned __int8 *v55; // eax
  unsigned __int8 *v56; // eax
  unsigned __int8 *v57; // eax
  _BYTE *v58; // eax
  _BYTE *v59; // eax
  _BYTE *v60; // eax
  _BYTE *v61; // eax
  unsigned __int8 *v62; // [esp-4h] [ebp-110h]
  unsigned __int8 *v63; // [esp-4h] [ebp-110h]
  unsigned __int8 *v64; // [esp-4h] [ebp-110h]
  unsigned __int8 *v65; // [esp-4h] [ebp-110h]
  unsigned __int8 *v66; // [esp-4h] [ebp-110h]
  unsigned __int8 *v67; // [esp-4h] [ebp-110h]
  unsigned __int8 *v68; // [esp-4h] [ebp-110h]
  unsigned __int8 *v69; // [esp-4h] [ebp-110h]
  int v70; // [esp-4h] [ebp-110h]
  _BYTE *v71; // [esp-4h] [ebp-110h]
  unsigned __int8 *v72; // [esp-4h] [ebp-110h]
  int v73; // [esp-4h] [ebp-110h]
  _BYTE *v74; // [esp-4h] [ebp-110h]
  unsigned __int8 *v75; // [esp-4h] [ebp-110h]
  int v76; // [esp-4h] [ebp-110h]
  _BYTE *v77; // [esp-4h] [ebp-110h]
  int v78; // [esp-4h] [ebp-110h]
  _BYTE *v79; // [esp-4h] [ebp-110h]
  _BYTE *v80; // [esp-4h] [ebp-110h]
  int v81; // [esp-4h] [ebp-110h]
  _BYTE *v82; // [esp-4h] [ebp-110h]
  _BYTE *v83; // [esp-4h] [ebp-110h]
  int v84; // [esp-4h] [ebp-110h]
  _BYTE *v85; // [esp-4h] [ebp-110h]
  _BYTE *v86; // [esp-4h] [ebp-110h]
  _BYTE *v87; // [esp-4h] [ebp-110h]
  unsigned __int8 *v88; // [esp-4h] [ebp-110h]
  unsigned __int8 *v89; // [esp-4h] [ebp-110h]
  unsigned __int8 *v90; // [esp-4h] [ebp-110h]
  unsigned __int8 *v91; // [esp-4h] [ebp-110h]
  unsigned __int8 *v92; // [esp-4h] [ebp-110h]
  unsigned __int8 *v93; // [esp-4h] [ebp-110h]
  unsigned __int8 *v94; // [esp-4h] [ebp-110h]
  unsigned __int8 *v95; // [esp-4h] [ebp-110h]
  int v96; // [esp-4h] [ebp-110h]
  _BYTE *v97; // [esp-4h] [ebp-110h]
  _BYTE *v98; // [esp-4h] [ebp-110h]
  _BYTE *v99; // [esp-4h] [ebp-110h]
  _BYTE *v100; // [esp-4h] [ebp-110h]
  char v102; // [esp+19h] [ebp-F3h] BYREF
  char v103; // [esp+1Ah] [ebp-F2h] BYREF
  char v104; // [esp+1Bh] [ebp-F1h] BYREF
  char v105; // [esp+1Ch] [ebp-F0h] BYREF
  char v106; // [esp+1Dh] [ebp-EFh] BYREF
  char v107; // [esp+1Eh] [ebp-EEh] BYREF
  char v108; // [esp+1Fh] [ebp-EDh] BYREF
  char v109; // [esp+20h] [ebp-ECh] BYREF
  char v110; // [esp+21h] [ebp-EBh] BYREF
  char v111; // [esp+22h] [ebp-EAh] BYREF
  char v112; // [esp+23h] [ebp-E9h] BYREF
  char v113; // [esp+24h] [ebp-E8h] BYREF
  char v114; // [esp+25h] [ebp-E7h] BYREF
  char v115; // [esp+26h] [ebp-E6h] BYREF
  char v116; // [esp+27h] [ebp-E5h] BYREF
  char v117; // [esp+28h] [ebp-E4h] BYREF
  char v118; // [esp+29h] [ebp-E3h] BYREF
  char v119; // [esp+2Ah] [ebp-E2h] BYREF
  char v120; // [esp+2Bh] [ebp-E1h] BYREF
  char v121; // [esp+2Ch] [ebp-E0h] BYREF
  char v122; // [esp+2Dh] [ebp-DFh] BYREF
  char v123; // [esp+2Eh] [ebp-DEh] BYREF
  char v124; // [esp+2Fh] [ebp-DDh] BYREF
  char v125; // [esp+30h] [ebp-DCh] BYREF
  char v126; // [esp+31h] [ebp-DBh] BYREF
  char v127; // [esp+32h] [ebp-DAh] BYREF
  char v128; // [esp+33h] [ebp-D9h] BYREF
  char v129; // [esp+34h] [ebp-D8h] BYREF
  char v130; // [esp+35h] [ebp-D7h] BYREF
  char v131; // [esp+36h] [ebp-D6h] BYREF
  char v132; // [esp+37h] [ebp-D5h] BYREF
  char v133; // [esp+38h] [ebp-D4h] BYREF
  char v134; // [esp+39h] [ebp-D3h] BYREF
  char v135; // [esp+3Ah] [ebp-D2h] BYREF
  char v136; // [esp+3Bh] [ebp-D1h] BYREF
  char v137; // [esp+3Ch] [ebp-D0h] BYREF
  char v138; // [esp+3Dh] [ebp-CFh] BYREF
  char v139; // [esp+3Eh] [ebp-CEh] BYREF
  char v140; // [esp+3Fh] [ebp-CDh] BYREF
  char v141; // [esp+40h] [ebp-CCh] BYREF
  char v142; // [esp+41h] [ebp-CBh] BYREF
  char v143; // [esp+42h] [ebp-CAh] BYREF
  char v144; // [esp+43h] [ebp-C9h] BYREF
  char v145; // [esp+44h] [ebp-C8h] BYREF
  char v146; // [esp+45h] [ebp-C7h] BYREF
  char v147; // [esp+46h] [ebp-C6h] BYREF
  char v148; // [esp+47h] [ebp-C5h] BYREF
  char v149; // [esp+48h] [ebp-C4h] BYREF
  char v150; // [esp+49h] [ebp-C3h] BYREF
  char v151; // [esp+4Ah] [ebp-C2h] BYREF
  char v152; // [esp+4Bh] [ebp-C1h] BYREF
  char v153; // [esp+4Ch] [ebp-C0h] BYREF
  char v154; // [esp+4Dh] [ebp-BFh] BYREF
  char v155; // [esp+4Eh] [ebp-BEh] BYREF
  char v156; // [esp+4Fh] [ebp-BDh] BYREF
  char v157; // [esp+50h] [ebp-BCh] BYREF
  char v158; // [esp+51h] [ebp-BBh] BYREF
  char v159; // [esp+52h] [ebp-BAh] BYREF
  char v160; // [esp+53h] [ebp-B9h] BYREF
  void *v161; // [esp+54h] [ebp-B8h]
  char v162; // [esp+5Bh] [ebp-B1h] BYREF
  char v163; // [esp+5Ch] [ebp-B0h] BYREF
  char v164; // [esp+5Dh] [ebp-AFh] BYREF
  char v165; // [esp+5Eh] [ebp-AEh] BYREF
  char v166; // [esp+5Fh] [ebp-ADh] BYREF
  __int16 *v167; // [esp+60h] [ebp-ACh]
  char v168; // [esp+64h] [ebp-A8h] BYREF
  char v169; // [esp+65h] [ebp-A7h] BYREF
  char v170; // [esp+66h] [ebp-A6h] BYREF
  char v171; // [esp+67h] [ebp-A5h] BYREF
  char v172; // [esp+68h] [ebp-A4h] BYREF
  char v173; // [esp+69h] [ebp-A3h] BYREF
  char v174; // [esp+6Ah] [ebp-A2h] BYREF
  char v175; // [esp+6Bh] [ebp-A1h] BYREF
  char v176; // [esp+6Ch] [ebp-A0h] BYREF
  char v177; // [esp+6Dh] [ebp-9Fh] BYREF
  char v178; // [esp+6Eh] [ebp-9Eh] BYREF
  char v179; // [esp+6Fh] [ebp-9Dh] BYREF
  void *v180; // [esp+70h] [ebp-9Ch]
  char v181; // [esp+77h] [ebp-95h] BYREF
  char v182; // [esp+78h] [ebp-94h] BYREF
  char v183; // [esp+79h] [ebp-93h] BYREF
  char v184; // [esp+7Ah] [ebp-92h] BYREF
  char v185; // [esp+7Bh] [ebp-91h] BYREF
  __int16 *v186; // [esp+7Ch] [ebp-90h]
  char v187; // [esp+80h] [ebp-8Ch] BYREF
  char v188; // [esp+81h] [ebp-8Bh] BYREF
  char v189; // [esp+82h] [ebp-8Ah] BYREF
  char v190; // [esp+83h] [ebp-89h] BYREF
  char v191; // [esp+84h] [ebp-88h] BYREF
  char v192; // [esp+85h] [ebp-87h] BYREF
  char v193; // [esp+86h] [ebp-86h] BYREF
  char v194; // [esp+87h] [ebp-85h] BYREF
  char v195; // [esp+88h] [ebp-84h] BYREF
  char v196; // [esp+89h] [ebp-83h] BYREF
  char v197; // [esp+8Ah] [ebp-82h] BYREF
  char v198; // [esp+8Bh] [ebp-81h] BYREF
  __int16 v199; // [esp+8Ch] [ebp-80h]
  __int16 mm; // [esp+90h] [ebp-7Ch]
  __int16 v201; // [esp+94h] [ebp-78h]
  __int16 v202; // [esp+96h] [ebp-76h]
  __int16 v203; // [esp+98h] [ebp-74h]
  __int16 v204; // [esp+9Ah] [ebp-72h]
  __int16 nn; // [esp+9Ch] [ebp-70h]
  int v206; // [esp+A0h] [ebp-6Ch] BYREF
  int v207; // [esp+A4h] [ebp-68h] BYREF
  int v208; // [esp+A8h] [ebp-64h] BYREF
  int v209; // [esp+ACh] [ebp-60h] BYREF
  int v210; // [esp+B0h] [ebp-5Ch] BYREF
  unsigned __int8 kk; // [esp+B7h] [ebp-55h]
  __int16 v212; // [esp+B8h] [ebp-54h]
  __int16 jj; // [esp+BCh] [ebp-50h]
  __int16 *v214; // [esp+C0h] [ebp-4Ch]
  int v215; // [esp+C4h] [ebp-48h] BYREF
  unsigned __int8 v216; // [esp+CAh] [ebp-42h]
  unsigned __int8 ii; // [esp+CBh] [ebp-41h]
  __int16 n; // [esp+CCh] [ebp-40h]
  __int16 *v219; // [esp+D0h] [ebp-3Ch]
  __int16 v220; // [esp+D4h] [ebp-38h]
  __int16 v221; // [esp+D8h] [ebp-34h]
  int v222; // [esp+DCh] [ebp-30h] BYREF
  unsigned __int8 v223; // [esp+E2h] [ebp-2Ah]
  unsigned __int8 m; // [esp+E3h] [ebp-29h]
  __int16 v225; // [esp+E4h] [ebp-28h]
  __int16 j; // [esp+E8h] [ebp-24h]
  __int16 v227; // [esp+ECh] [ebp-20h]
  __int16 v228; // [esp+EEh] [ebp-1Eh]
  __int16 v229; // [esp+F0h] [ebp-1Ch]
  __int16 v230; // [esp+F2h] [ebp-1Ah]
  __int16 k; // [esp+F8h] [ebp-14h]
  __int16 i; // [esp+FCh] [ebp-10h]
  int v233; // [esp+108h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shHandIndex>=0", "..\\Casino\\PokerHand.cpp", 5975);
  if ( a2 >= 32 )
    sub_5E9F20((char)"shHandIndex<DRAWNUMBEROFINDICES", "..\\Casino\\PokerHand.cpp", 5976);
  if ( a4 )
  {
    switch ( a2 )
    {
      case 29:
        if ( a4 != -1 )
          sub_5E9F20((char)"shBluffIndex == -1", "..\\Casino\\PokerHand.cpp", 5989);
        for ( i = 0; i < 5; ++i )
          *(_BYTE *)(a3 + i) = 1;
        for ( j = 0; j < 4; ++j )
          *(&v227 + j) = 0;
        for ( k = 0; k < *(this + 2); ++k )
        {
          v62 = (unsigned __int8 *)dword_79076C;
          v4 = sub_464400((_BYTE *)(*(_DWORD *)this + k), &v198);
          if ( sub_4640B0(v4, v62) )
          {
            ++v227;
          }
          else
          {
            v63 = (unsigned __int8 *)dword_790754;
            v5 = sub_464400((_BYTE *)(*(_DWORD *)this + k), &v197);
            if ( sub_4640B0(v5, v63) )
            {
              ++v228;
            }
            else
            {
              v64 = (unsigned __int8 *)dword_790764;
              v6 = sub_464400((_BYTE *)(*(_DWORD *)this + k), &v196);
              if ( sub_4640B0(v6, v64) )
              {
                ++v229;
              }
              else
              {
                v65 = (unsigned __int8 *)dword_790770;
                v7 = sub_464400((_BYTE *)(*(_DWORD *)this + k), &v195);
                if ( sub_4640B0(v7, v65) )
                  ++v230;
              }
            }
          }
        }
        v225 = 0;
        for ( j = 0; j < 4; ++j )
        {
          if ( *(&v227 + j) == 4 )
          {
            for ( i = 0; i < 5; ++i )
            {
              if ( j )
              {
                switch ( j )
                {
                  case 1:
                    v67 = (unsigned __int8 *)dword_790754;
                    v9 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v193);
                    if ( sub_4640B0(v9, v67) )
                      *(_BYTE *)(a3 + i) = 0;
                    break;
                  case 2:
                    v68 = (unsigned __int8 *)dword_790764;
                    v10 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v192);
                    if ( sub_4640B0(v10, v68) )
                      *(_BYTE *)(a3 + i) = 0;
                    break;
                  case 3:
                    v69 = (unsigned __int8 *)dword_790770;
                    v11 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v191);
                    if ( sub_4640B0(v11, v69) )
                      *(_BYTE *)(a3 + i) = 0;
                    break;
                }
              }
              else
              {
                v66 = (unsigned __int8 *)dword_79076C;
                v8 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v194);
                if ( sub_4640B0(v8, v66) )
                  *(_BYTE *)(a3 + i) = 0;
              }
            }
            break;
          }
        }
        if ( j >= 4 )
          sub_5E9F20((char)"shSuitIndex<4", "..\\Casino\\PokerHand.cpp", 6041);
        break;
      case 30:
        if ( a4 != -1 )
          sub_5E9F20((char)"shBluffIndex == -1", "..\\Casino\\PokerHand.cpp", 6047);
        sub_485940(this, &v222, 1, 1, 1, 1, 0, 0, 0);
        v233 = 0;
        v70 = dword_7913B0;
        sub_4A2160(&v190);
        if ( (unsigned __int8)sub_4A1E10(v70) )
        {
          for ( i = 0; i < 5; ++i )
            *(_BYTE *)(a3 + i) = 0;
          for ( i = 0; i < 5; ++i )
          {
            v12 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v188);
            v71 = sub_463F80(v12, &v187);
            sub_4A21B0(&v189);
            if ( (unsigned __int8)sub_4A1FB0(v71) )
            {
              *(_BYTE *)(a3 + i) = 1;
              v233 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v222);
              return;
            }
          }
          sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 6061);
        }
        for ( i = 0; i < 5; ++i )
          *(_BYTE *)(a3 + i) = 1;
        v186 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
        v219 = v186;
        for ( m = 0; m <= (int)*(unsigned __int8 *)dword_7913C8; ++m )
          v219[m] = 0;
        for ( n = 0; n < *(this + 2); ++n )
        {
          v13 = sub_464480((_BYTE *)(*(_DWORD *)this + n), &v185);
          v14 = sub_463F80(v13, &v184);
          ++v219[(unsigned __int8)*v14];
          v72 = (unsigned __int8 *)dword_7907A4;
          v15 = sub_464480((_BYTE *)(*(_DWORD *)this + n), &v183);
          if ( sub_464050(v15, v72) )
          {
            v16 = sub_464480((_BYTE *)(*(_DWORD *)this + n), &v182);
            v17 = sub_463FD0(v16, &v181);
            ++v219[(unsigned __int8)*v17];
          }
        }
        v223 = 0;
        v220 = 0;
        v221 = 0;
        for ( m = *(_BYTE *)dword_7913B4; m <= (int)*(unsigned __int8 *)dword_7913C8; ++m )
        {
          if ( v219[m] <= 0 )
          {
            v220 = 0;
          }
          else if ( ++v220 > v221 )
          {
            v221 = v220;
            v223 = m;
          }
        }
        v180 = v219;
        operator delete(v219);
        if ( v221 != 4 )
          sub_5E9F20((char)"shMostInARowSoFar == 4", "..\\Casino\\PokerHand.cpp", 6097);
        for ( i = 0; i < 5; ++i )
        {
          v18 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v179);
          v19 = sub_463FD0(v18, &v178);
          if ( (unsigned __int8)*v19 == v223 )
          {
            *(_BYTE *)(a3 + i) = 0;
          }
          else
          {
            v20 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v177);
            v21 = sub_463F80(v20, &v176);
            if ( (unsigned __int8)*v21 == v223 - 1 )
            {
              *(_BYTE *)(a3 + i) = 0;
            }
            else
            {
              v22 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v175);
              v23 = sub_463F80(v22, &v174);
              if ( (unsigned __int8)*v23 == v223 - 2 )
              {
                *(_BYTE *)(a3 + i) = 0;
              }
              else
              {
                v24 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v173);
                v25 = sub_463F80(v24, &v172);
                if ( (unsigned __int8)*v25 == v223 - 3 )
                  *(_BYTE *)(a3 + i) = 0;
              }
            }
          }
        }
        v233 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v222);
        break;
      case 31:
        if ( a4 != -1 )
          sub_5E9F20((char)"shBluffIndex == -1", "..\\Casino\\PokerHand.cpp", 6116);
        sub_485940(this, &v215, 1, 1, 1, 1, 0, 0, 0);
        v233 = 1;
        v73 = dword_7913B0;
        sub_4A2160(&v171);
        if ( (unsigned __int8)sub_4A1E10(v73) )
        {
          for ( i = 0; i < 5; ++i )
            *(_BYTE *)(a3 + i) = 0;
          for ( i = 0; i < 5; ++i )
          {
            v26 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v169);
            v74 = sub_463F80(v26, &v168);
            sub_4A21B0(&v170);
            if ( (unsigned __int8)sub_4A1FB0(v74) )
            {
              *(_BYTE *)(a3 + i) = 1;
              v233 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v215);
              return;
            }
          }
          sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 6130);
        }
        for ( i = 0; i < 5; ++i )
          *(_BYTE *)(a3 + i) = 1;
        v167 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
        v214 = v167;
        for ( ii = 0; ii <= (int)*(unsigned __int8 *)dword_7913C8; ++ii )
          v214[ii] = 0;
        for ( jj = 0; jj < *(this + 2); ++jj )
        {
          v27 = sub_464480((_BYTE *)(*(_DWORD *)this + jj), &v166);
          v28 = sub_463F80(v27, &v165);
          ++v214[(unsigned __int8)*v28];
          v75 = (unsigned __int8 *)dword_7907A4;
          v29 = sub_464480((_BYTE *)(*(_DWORD *)this + jj), &v164);
          if ( sub_464050(v29, v75) )
          {
            v30 = sub_464480((_BYTE *)(*(_DWORD *)this + jj), &v163);
            v31 = sub_463FD0(v30, &v162);
            ++v214[(unsigned __int8)*v31];
          }
        }
        v216 = 0;
        for ( ii = *(_BYTE *)dword_7913B4; ii <= (int)*(unsigned __int8 *)dword_79138C; ++ii )
        {
          v212 = 0;
          for ( kk = 0; kk < 5u; ++kk )
          {
            if ( v214[kk + ii] > 0 )
              ++v212;
          }
          if ( v212 == 5 )
            sub_5E9F20((char)"shHaveIt != 5", "..\\Casino\\PokerHand.cpp", 6157);
          if ( v212 == 4 )
            v216 = ii;
        }
        v161 = v214;
        operator delete(v214);
        if ( !v216 )
          sub_5E9F20((char)"ucLastOneBaseIndex != 0", "..\\Casino\\PokerHand.cpp", 6163);
        for ( i = 0; i < 5; ++i )
        {
          v32 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v160);
          v33 = sub_463FD0(v32, &v159);
          if ( (unsigned __int8)*v33 == v216 )
          {
            *(_BYTE *)(a3 + i) = 0;
          }
          else
          {
            v34 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v158);
            v35 = sub_463F80(v34, &v157);
            if ( (unsigned __int8)*v35 == v216 + 1 )
            {
              *(_BYTE *)(a3 + i) = 0;
            }
            else
            {
              v36 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v156);
              v37 = sub_463F80(v36, &v155);
              if ( (unsigned __int8)*v37 == v216 + 2 )
              {
                *(_BYTE *)(a3 + i) = 0;
              }
              else
              {
                v38 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v154);
                v39 = sub_463F80(v38, &v153);
                if ( (unsigned __int8)*v39 == v216 + 3 )
                {
                  *(_BYTE *)(a3 + i) = 0;
                }
                else
                {
                  v40 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v152);
                  v41 = sub_463F80(v40, &v151);
                  if ( (unsigned __int8)*v41 == v216 + 4 )
                    *(_BYTE *)(a3 + i) = 0;
                }
              }
            }
          }
        }
        v233 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v215);
        break;
      case 27:
        if ( a4 != -1 )
          sub_5E9F20((char)"shBluffIndex == -1", "..\\Casino\\PokerHand.cpp", 6183);
        for ( i = 0; i < 5; ++i )
          *(_BYTE *)(a3 + i) = 1;
        sub_485940(this, &v210, 1, 1, 1, 1, 0, 0, 0);
        v233 = 2;
        v76 = dword_791394;
        sub_4A2160(&v150);
        if ( !(unsigned __int8)sub_4A1E10(v76) )
          sub_5E9F20((char)"phvTemp.GetCategory() == FourOfAKind", "..\\Casino\\PokerHand.cpp", 6187);
        for ( i = 0; i < 5; ++i )
        {
          v42 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v148);
          v77 = sub_463F80(v42, &v147);
          sub_4A21B0(&v149);
          if ( (unsigned __int8)sub_4A1FB0(v77) )
            *(_BYTE *)(a3 + i) = 0;
        }
        v233 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v210);
        break;
      default:
        if ( a2 < 24 || a2 > 28 )
        {
          if ( a2 < 21 || a2 > 23 )
          {
            if ( a2 < 18 || a2 > 20 )
            {
              if ( a2 < 5 || a2 > 17 )
              {
                if ( (unsigned int)a2 > 4 )
                {
                  sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 6345);
                }
                else if ( a4 == 2 && sub_484BF0(this) == 3 )
                {
                  for ( i = 0; i < 5; ++i )
                    *(_BYTE *)(a3 + i) = 1;
                  for ( mm = 0; mm < 4; ++mm )
                    *(&v201 + mm) = 0;
                  for ( nn = 0; nn < *(this + 2); ++nn )
                  {
                    v88 = (unsigned __int8 *)dword_79076C;
                    v50 = sub_464400((_BYTE *)(*(_DWORD *)this + nn), &v122);
                    if ( sub_4640B0(v50, v88) )
                    {
                      ++v201;
                    }
                    else
                    {
                      v89 = (unsigned __int8 *)dword_790754;
                      v51 = sub_464400((_BYTE *)(*(_DWORD *)this + nn), &v121);
                      if ( sub_4640B0(v51, v89) )
                      {
                        ++v202;
                      }
                      else
                      {
                        v90 = (unsigned __int8 *)dword_790764;
                        v52 = sub_464400((_BYTE *)(*(_DWORD *)this + nn), &v120);
                        if ( sub_4640B0(v52, v90) )
                        {
                          ++v203;
                        }
                        else
                        {
                          v91 = (unsigned __int8 *)dword_790770;
                          v53 = sub_464400((_BYTE *)(*(_DWORD *)this + nn), &v119);
                          if ( sub_4640B0(v53, v91) )
                            ++v204;
                        }
                      }
                    }
                  }
                  v199 = 0;
                  for ( mm = 0; mm < 4; ++mm )
                  {
                    if ( *(&v201 + mm) == 3 )
                    {
                      for ( i = 0; i < 5; ++i )
                      {
                        if ( mm )
                        {
                          switch ( mm )
                          {
                            case 1:
                              v93 = (unsigned __int8 *)dword_790754;
                              v55 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v117);
                              if ( sub_4640B0(v55, v93) )
                                *(_BYTE *)(a3 + i) = 0;
                              break;
                            case 2:
                              v94 = (unsigned __int8 *)dword_790764;
                              v56 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v116);
                              if ( sub_4640B0(v56, v94) )
                                *(_BYTE *)(a3 + i) = 0;
                              break;
                            case 3:
                              v95 = (unsigned __int8 *)dword_790770;
                              v57 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v115);
                              if ( sub_4640B0(v57, v95) )
                                *(_BYTE *)(a3 + i) = 0;
                              break;
                          }
                        }
                        else
                        {
                          v92 = (unsigned __int8 *)dword_79076C;
                          v54 = sub_464400((_BYTE *)(*(_DWORD *)this + i), &v118);
                          if ( sub_4640B0(v54, v92) )
                            *(_BYTE *)(a3 + i) = 0;
                        }
                      }
                      break;
                    }
                  }
                  if ( mm >= 4 )
                    sub_5E9F20((char)"shSuitIndex<4", "..\\Casino\\PokerHand.cpp", 6318);
                }
                else
                {
                  for ( i = 0; i < 5; ++i )
                    *(_BYTE *)(a3 + i) = 1;
                  sub_485940(this, &v206, 1, 1, 1, 1, 0, 0, 0);
                  v233 = 6;
                  v96 = dword_791390;
                  sub_4A2160(&v114);
                  if ( !(unsigned __int8)sub_4A1E10(v96) )
                    sub_5E9F20((char)"phvTemp.GetCategory() == NoPair", "..\\Casino\\PokerHand.cpp", 6324);
                  for ( i = 0; i < 5; ++i )
                  {
                    v58 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v112);
                    v97 = sub_463F80(v58, &v111);
                    sub_4A21B0(&v113);
                    if ( (unsigned __int8)sub_4A1FB0(v97) )
                    {
                      *(_BYTE *)(a3 + i) = 0;
                    }
                    else
                    {
                      v59 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v109);
                      v98 = sub_463F80(v59, &v108);
                      sub_4A2200(&v110);
                      if ( (unsigned __int8)sub_4A1FB0(v98) )
                        *(_BYTE *)(a3 + i) = 0;
                    }
                    if ( a4 != -1 )
                    {
                      v60 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v106);
                      v99 = sub_463F80(v60, &v105);
                      sub_4A2250(&v107);
                      if ( (unsigned __int8)sub_4A1FB0(v99) )
                        *(_BYTE *)(a3 + i) = 0;
                    }
                    if ( a4 != -1 && a4 != 2 )
                    {
                      v61 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v103);
                      v100 = sub_463F80(v61, &v102);
                      sub_4A22A0(&v104);
                      if ( (unsigned __int8)sub_4A1FB0(v100) )
                        *(_BYTE *)(a3 + i) = 0;
                    }
                  }
                  v233 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v206);
                }
              }
              else
              {
                for ( i = 0; i < 5; ++i )
                  *(_BYTE *)(a3 + i) = 1;
                sub_485940(this, &v207, 1, 1, 1, 1, 0, 0, 0);
                v233 = 5;
                v84 = dword_7913B0;
                sub_4A2160(&v132);
                if ( !(unsigned __int8)sub_4A1E10(v84) )
                  sub_5E9F20((char)"phvTemp.GetCategory() == OnePair", "..\\Casino\\PokerHand.cpp", 6244);
                for ( i = 0; i < 5; ++i )
                {
                  v47 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v130);
                  v85 = sub_463F80(v47, &v129);
                  sub_4A21B0(&v131);
                  if ( (unsigned __int8)sub_4A1FB0(v85) )
                    *(_BYTE *)(a3 + i) = 0;
                  if ( a4 != -1 )
                  {
                    v48 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v127);
                    v86 = sub_463F80(v48, &v126);
                    sub_4A2200(&v128);
                    if ( (unsigned __int8)sub_4A1FB0(v86) )
                      *(_BYTE *)(a3 + i) = 0;
                  }
                  if ( a4 != -1 && a4 != 2 )
                  {
                    v49 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v124);
                    v87 = sub_463F80(v49, &v123);
                    sub_4A2250(&v125);
                    if ( (unsigned __int8)sub_4A1FB0(v87) )
                      *(_BYTE *)(a3 + i) = 0;
                  }
                }
                v233 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v207);
              }
            }
            else
            {
              if ( a4 != -1 )
                sub_5E9F20((char)"shBluffIndex == -1", "..\\Casino\\PokerHand.cpp", 6224);
              for ( i = 0; i < 5; ++i )
                *(_BYTE *)(a3 + i) = 1;
              sub_485940(this, &v208, 1, 1, 1, 1, 0, 0, 0);
              v233 = 4;
              v81 = dword_791380;
              sub_4A2160(&v139);
              if ( !(unsigned __int8)sub_4A1E10(v81) )
                sub_5E9F20((char)"phvTemp.GetCategory() == TwoPair", "..\\Casino\\PokerHand.cpp", 6228);
              for ( i = 0; i < 5; ++i )
              {
                v45 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v137);
                v82 = sub_463F80(v45, &v136);
                sub_4A21B0(&v138);
                if ( (unsigned __int8)sub_4A1FB0(v82) )
                {
                  *(_BYTE *)(a3 + i) = 0;
                }
                else
                {
                  v46 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v134);
                  v83 = sub_463F80(v46, &v133);
                  sub_4A2200(&v135);
                  if ( (unsigned __int8)sub_4A1FB0(v83) )
                    *(_BYTE *)(a3 + i) = 0;
                }
              }
              v233 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v208);
            }
          }
          else
          {
            for ( i = 0; i < 5; ++i )
              *(_BYTE *)(a3 + i) = 1;
            sub_485940(this, &v209, 1, 1, 1, 1, 0, 0, 0);
            v233 = 3;
            v78 = dword_791418;
            sub_4A2160(&v146);
            if ( !(unsigned __int8)sub_4A1E10(v78) )
              sub_5E9F20((char)"phvTemp.GetCategory() == ThreeOfAKind", "..\\Casino\\PokerHand.cpp", 6209);
            for ( i = 0; i < 5; ++i )
            {
              v43 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v144);
              v79 = sub_463F80(v43, &v143);
              sub_4A21B0(&v145);
              if ( (unsigned __int8)sub_4A1FB0(v79) )
                *(_BYTE *)(a3 + i) = 0;
              if ( a4 != 2 )
              {
                v44 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v141);
                v80 = sub_463F80(v44, &v140);
                sub_4A2200(&v142);
                if ( (unsigned __int8)sub_4A1FB0(v80) )
                  *(_BYTE *)(a3 + i) = 0;
              }
            }
            v233 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v209);
          }
        }
        else
        {
          if ( a4 != -1 )
            sub_5E9F20((char)"shBluffIndex == -1", "..\\Casino\\PokerHand.cpp", 6198);
          for ( i = 0; i < 5; ++i )
            *(_BYTE *)(a3 + i) = 0;
        }
        break;
    }
  }
  else
  {
    for ( i = 0; i < 5; ++i )
      *(_BYTE *)(a3 + i) = 0;
  }
}


//======================================================================
// sub_49A650
// entry 0049a650  size 3341  status ok
//======================================================================

__int16 __thiscall sub_49A650(__int16 *this)
{
  int v2; // [esp-4h] [ebp-C0h]
  int v3; // [esp-4h] [ebp-C0h]
  int v4; // [esp-4h] [ebp-C0h]
  int v5; // [esp-4h] [ebp-C0h]
  int v6; // [esp-4h] [ebp-C0h]
  int v7; // [esp-4h] [ebp-C0h]
  int v8; // [esp-4h] [ebp-C0h]
  int v9; // [esp-4h] [ebp-C0h]
  int v10; // [esp-4h] [ebp-C0h]
  int v11; // [esp-4h] [ebp-C0h]
  int v12; // [esp-4h] [ebp-C0h]
  int v13; // [esp-4h] [ebp-C0h]
  int v14; // [esp-4h] [ebp-C0h]
  int v15; // [esp-4h] [ebp-C0h]
  int v16; // [esp-4h] [ebp-C0h]
  int v17; // [esp-4h] [ebp-C0h]
  int v18; // [esp-4h] [ebp-C0h]
  int v19; // [esp-4h] [ebp-C0h]
  int v20; // [esp-4h] [ebp-C0h]
  int v21; // [esp-4h] [ebp-C0h]
  int v22; // [esp-4h] [ebp-C0h]
  int v23; // [esp-4h] [ebp-C0h]
  int v24; // [esp-4h] [ebp-C0h]
  int v25; // [esp-4h] [ebp-C0h]
  int v26; // [esp-4h] [ebp-C0h]
  int v27; // [esp-4h] [ebp-C0h]
  int v28; // [esp-4h] [ebp-C0h]
  int v29; // [esp-4h] [ebp-C0h]
  int v30; // [esp-4h] [ebp-C0h]
  int v31; // [esp-4h] [ebp-C0h]
  int v32; // [esp-4h] [ebp-C0h]
  int v33; // [esp-4h] [ebp-C0h]
  int v34; // [esp-4h] [ebp-C0h]
  int v35; // [esp-4h] [ebp-C0h]
  int v36; // [esp-4h] [ebp-C0h]
  int v37; // [esp-4h] [ebp-C0h]
  int v38; // [esp-4h] [ebp-C0h]
  int v39; // [esp-4h] [ebp-C0h]
  int v40; // [esp-4h] [ebp-C0h]
  int v41; // [esp-4h] [ebp-C0h]
  int v42; // [esp-4h] [ebp-C0h]
  int v43; // [esp-4h] [ebp-C0h]
  int v44; // [esp-4h] [ebp-C0h]
  int v45; // [esp-4h] [ebp-C0h]
  int v46; // [esp-4h] [ebp-C0h]
  int v47; // [esp-4h] [ebp-C0h]
  int v48; // [esp-4h] [ebp-C0h]
  int v49; // [esp-4h] [ebp-C0h]
  char v50; // [esp+11h] [ebp-ABh] BYREF
  char v51; // [esp+14h] [ebp-A8h] BYREF
  char v52; // [esp+15h] [ebp-A7h] BYREF
  char v53; // [esp+1Bh] [ebp-A1h] BYREF
  char v54; // [esp+1Eh] [ebp-9Eh] BYREF
  char v55; // [esp+1Fh] [ebp-9Dh] BYREF
  char v56; // [esp+25h] [ebp-97h] BYREF
  char v57; // [esp+28h] [ebp-94h] BYREF
  char v58; // [esp+29h] [ebp-93h] BYREF
  char v59; // [esp+2Dh] [ebp-8Fh] BYREF
  char v60; // [esp+31h] [ebp-8Bh] BYREF
  char v61; // [esp+35h] [ebp-87h] BYREF
  char v62; // [esp+39h] [ebp-83h] BYREF
  char v63; // [esp+3Dh] [ebp-7Fh] BYREF
  char v64; // [esp+40h] [ebp-7Ch] BYREF
  char v65; // [esp+41h] [ebp-7Bh] BYREF
  char v66; // [esp+45h] [ebp-77h] BYREF
  char v67; // [esp+49h] [ebp-73h] BYREF
  char v68; // [esp+4Dh] [ebp-6Fh] BYREF
  char v69; // [esp+51h] [ebp-6Bh] BYREF
  char v70; // [esp+54h] [ebp-68h] BYREF
  char v71; // [esp+55h] [ebp-67h] BYREF
  char v72; // [esp+59h] [ebp-63h] BYREF
  char v73; // [esp+5Dh] [ebp-5Fh] BYREF
  char v74; // [esp+61h] [ebp-5Bh] BYREF
  char v75; // [esp+64h] [ebp-58h] BYREF
  char v76; // [esp+65h] [ebp-57h] BYREF
  char v77; // [esp+69h] [ebp-53h] BYREF
  char v78; // [esp+6Dh] [ebp-4Fh] BYREF
  char v79; // [esp+70h] [ebp-4Ch] BYREF
  char v80; // [esp+71h] [ebp-4Bh] BYREF
  char v81; // [esp+75h] [ebp-47h] BYREF
  char v82; // [esp+78h] [ebp-44h] BYREF
  char v83; // [esp+79h] [ebp-43h] BYREF
  char v84; // [esp+7Ch] [ebp-40h] BYREF
  char v85; // [esp+7Dh] [ebp-3Fh] BYREF
  char v86; // [esp+83h] [ebp-39h] BYREF
  char v87; // [esp+87h] [ebp-35h] BYREF
  char v88; // [esp+8Bh] [ebp-31h] BYREF
  char v89; // [esp+8Fh] [ebp-2Dh] BYREF
  char v90; // [esp+93h] [ebp-29h] BYREF
  char v91; // [esp+97h] [ebp-25h] BYREF
  char v92; // [esp+9Bh] [ebp-21h] BYREF
  char v93; // [esp+9Fh] [ebp-1Dh] BYREF
  char v94; // [esp+A3h] [ebp-19h] BYREF
  char v95; // [esp+A6h] [ebp-16h] BYREF
  char v96; // [esp+A7h] [ebp-15h] BYREF
  char v97; // [esp+ABh] [ebp-11h] BYREF
  int v98; // [esp+ACh] [ebp-10h] BYREF
  int v99; // [esp+B8h] [ebp-4h]

  sub_485940(this, &v98, 0, 0, 1, 0, 0, 0, 0);
  v99 = 0;
  v2 = dword_791380;
  sub_4A2160(&v97);
  if ( (unsigned __int8)sub_4A1F00(v2) )
  {
    v99 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v98);
    return 0;
  }
  v3 = dword_7913B0;
  sub_4A2160(&v96);
  if ( (unsigned __int8)sub_4A1E10(v3) )
  {
    v4 = dword_7913B4;
    sub_4A21B0(&v95);
    if ( (unsigned __int8)sub_4A1FB0(v4) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 11;
    }
    else
    {
      v5 = dword_7913F0;
      sub_4A21B0(&v94);
      if ( (unsigned __int8)sub_4A1FB0(v5) )
      {
        v99 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v98);
        return 10;
      }
      else
      {
        v6 = dword_7913D8;
        sub_4A21B0(&v93);
        if ( (unsigned __int8)sub_4A1FB0(v6) )
        {
          v99 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v98);
          return 9;
        }
        else
        {
          v7 = dword_791414;
          sub_4A21B0(&v92);
          if ( (unsigned __int8)sub_4A1FB0(v7) )
          {
            v99 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v98);
            return 8;
          }
          else
          {
            v8 = dword_7913A4;
            sub_4A21B0(&v91);
            if ( (unsigned __int8)sub_4A1FB0(v8) )
            {
              v99 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v98);
              return 7;
            }
            else
            {
              v9 = dword_791404;
              sub_4A21B0(&v90);
              if ( (unsigned __int8)sub_4A1FB0(v9) )
              {
                v99 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v98);
                return 6;
              }
              else
              {
                v10 = dword_7913F8;
                sub_4A21B0(&v89);
                if ( (unsigned __int8)sub_4A1FB0(v10) )
                {
                  v99 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v98);
                  return 5;
                }
                else
                {
                  v11 = dword_791410;
                  sub_4A21B0(&v88);
                  if ( (unsigned __int8)sub_4A1FB0(v11) )
                  {
                    v99 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v98);
                    return 4;
                  }
                  else
                  {
                    v12 = dword_7913F4;
                    sub_4A21B0(&v87);
                    if ( (unsigned __int8)sub_4A1FB0(v12) )
                    {
                      v99 = -1;
                      ATL::CComCriticalSection::~CComCriticalSection(&v98);
                      return 3;
                    }
                    else
                    {
                      v13 = dword_79138C;
                      sub_4A21B0(&v86);
                      if ( (unsigned __int8)sub_4A1FB0(v13) )
                      {
                        v99 = -1;
                        ATL::CComCriticalSection::~CComCriticalSection(&v98);
                        return 2;
                      }
                      else
                      {
                        v99 = -1;
                        ATL::CComCriticalSection::~CComCriticalSection(&v98);
                        return 1;
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
  v14 = dword_791390;
  sub_4A2160(&v85);
  if ( !(unsigned __int8)sub_4A1E10(v14) )
    sub_5E9F20((char)"phv.GetCategory() == NoPair", "..\\Casino\\PokerHand.cpp", 6382);
  v15 = dword_7913A4;
  sub_4A21B0(&v84);
  if ( (unsigned __int8)sub_4A1FB0(v15) )
  {
    v99 = -1;
    ATL::CComCriticalSection::~CComCriticalSection(&v98);
    return 41;
  }
  v16 = dword_791404;
  sub_4A21B0(&v83);
  if ( (unsigned __int8)sub_4A1FB0(v16) )
  {
    v17 = dword_791414;
    sub_4A2200(&v82);
    if ( (unsigned __int8)sub_4A1FB0(v17) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 40;
    }
    v18 = dword_7913A4;
    sub_4A2200(&v81);
    if ( (unsigned __int8)sub_4A1FB0(v18) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 39;
    }
    goto LABEL_97;
  }
  v19 = dword_7913F8;
  sub_4A21B0(&v80);
  if ( (unsigned __int8)sub_4A1FB0(v19) )
  {
    v20 = dword_791414;
    sub_4A2200(&v79);
    if ( (unsigned __int8)sub_4A1FB0(v20) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 38;
    }
    v21 = dword_7913A4;
    sub_4A2200(&v78);
    if ( (unsigned __int8)sub_4A1FB0(v21) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 37;
    }
    v22 = dword_791404;
    sub_4A2200(&v77);
    if ( (unsigned __int8)sub_4A1FB0(v22) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 36;
    }
    goto LABEL_97;
  }
  v23 = dword_791410;
  sub_4A21B0(&v76);
  if ( (unsigned __int8)sub_4A1FB0(v23) )
  {
    v24 = dword_791414;
    sub_4A2200(&v75);
    if ( (unsigned __int8)sub_4A1FB0(v24) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 35;
    }
    v25 = dword_7913A4;
    sub_4A2200(&v74);
    if ( (unsigned __int8)sub_4A1FB0(v25) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 34;
    }
    v26 = dword_791404;
    sub_4A2200(&v73);
    if ( (unsigned __int8)sub_4A1FB0(v26) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 33;
    }
    v27 = dword_7913F8;
    sub_4A2200(&v72);
    if ( (unsigned __int8)sub_4A1FB0(v27) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 32;
    }
    goto LABEL_97;
  }
  v28 = dword_7913F4;
  sub_4A21B0(&v71);
  if ( (unsigned __int8)sub_4A1FB0(v28) )
  {
    v29 = dword_791414;
    sub_4A2200(&v70);
    if ( (unsigned __int8)sub_4A1FB0(v29) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 31;
    }
    v30 = dword_7913A4;
    sub_4A2200(&v69);
    if ( (unsigned __int8)sub_4A1FB0(v30) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 30;
    }
    v31 = dword_791404;
    sub_4A2200(&v68);
    if ( (unsigned __int8)sub_4A1FB0(v31) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 29;
    }
    v32 = dword_7913F8;
    sub_4A2200(&v67);
    if ( (unsigned __int8)sub_4A1FB0(v32) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 28;
    }
    v33 = dword_791410;
    sub_4A2200(&v66);
    if ( (unsigned __int8)sub_4A1FB0(v33) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 27;
    }
    goto LABEL_97;
  }
  v34 = dword_79138C;
  sub_4A21B0(&v65);
  if ( (unsigned __int8)sub_4A1FB0(v34) )
  {
    v35 = dword_791414;
    sub_4A2200(&v64);
    if ( (unsigned __int8)sub_4A1FB0(v35) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 26;
    }
    v36 = dword_7913A4;
    sub_4A2200(&v63);
    if ( (unsigned __int8)sub_4A1FB0(v36) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 25;
    }
    v37 = dword_791404;
    sub_4A2200(&v62);
    if ( (unsigned __int8)sub_4A1FB0(v37) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 24;
    }
    v38 = dword_7913F8;
    sub_4A2200(&v61);
    if ( (unsigned __int8)sub_4A1FB0(v38) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 23;
    }
    v39 = dword_791410;
    sub_4A2200(&v60);
    if ( (unsigned __int8)sub_4A1FB0(v39) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 22;
    }
    v40 = dword_7913F4;
    sub_4A2200(&v59);
    if ( (unsigned __int8)sub_4A1FB0(v40) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 21;
    }
    goto LABEL_97;
  }
  v41 = dword_791400;
  sub_4A21B0(&v58);
  if ( (unsigned __int8)sub_4A1FB0(v41) )
  {
    v42 = dword_791404;
    sub_4A2200(&v57);
    if ( (unsigned __int8)sub_4A20A0(v42) )
    {
      v99 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v98);
      return 20;
    }
    else
    {
      v43 = dword_791410;
      sub_4A2200(&v56);
      if ( (unsigned __int8)sub_4A20A0(v43) )
      {
        v99 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v98);
        return 19;
      }
      else
      {
        v99 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v98);
        return 18;
      }
    }
  }
  else
  {
    v44 = dword_7913BC;
    sub_4A21B0(&v55);
    if ( (unsigned __int8)sub_4A1FB0(v44) )
    {
      v45 = dword_791404;
      sub_4A2200(&v54);
      if ( (unsigned __int8)sub_4A20A0(v45) )
      {
        v99 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v98);
        return 17;
      }
      else
      {
        v46 = dword_791410;
        sub_4A2200(&v53);
        if ( (unsigned __int8)sub_4A20A0(v46) )
        {
          v99 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v98);
          return 16;
        }
        else
        {
          v99 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v98);
          return 15;
        }
      }
    }
    else
    {
      v47 = dword_7913E0;
      sub_4A21B0(&v52);
      if ( !(unsigned __int8)sub_4A1FB0(v47) )
      {
LABEL_97:
        sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 6471);
        v99 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v98);
        return 0;
      }
      v48 = dword_791404;
      sub_4A2200(&v51);
      if ( (unsigned __int8)sub_4A20A0(v48) )
      {
        v99 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v98);
        return 14;
      }
      else
      {
        v49 = dword_7913F4;
        sub_4A2200(&v50);
        if ( (unsigned __int8)sub_4A20A0(v49) )
        {
          v99 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v98);
          return 13;
        }
        else
        {
          v99 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v98);
          return 12;
        }
      }
    }
  }
}


//======================================================================
// sub_49B360
// entry 0049b360  size 3681  status ok
//======================================================================

__int16 __thiscall sub_49B360(__int16 *this)
{
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
  int v21; // [esp-4h] [ebp-C4h]
  int v22; // [esp-4h] [ebp-C4h]
  int v23; // [esp-4h] [ebp-C4h]
  int v24; // [esp-4h] [ebp-C4h]
  int v25; // [esp-4h] [ebp-C4h]
  int v26; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v27; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v28; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v29; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v30; // [esp-4h] [ebp-C4h]
  int v31; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v32; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v33; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v34; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v35; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v36; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v37; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v38; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v39; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v40; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v41; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v42; // [esp-4h] [ebp-C4h]
  int v43; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v44; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v45; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v46; // [esp-4h] [ebp-C4h]
  unsigned __int8 *v47; // [esp-4h] [ebp-C4h]
  int v48; // [esp-4h] [ebp-C4h]
  int v49; // [esp-4h] [ebp-C4h]
  char v51; // [esp+Bh] [ebp-B5h] BYREF
  char v52; // [esp+11h] [ebp-AFh] BYREF
  char v53; // [esp+19h] [ebp-A7h] BYREF
  char v54; // [esp+1Ah] [ebp-A6h] BYREF
  char v55; // [esp+1Bh] [ebp-A5h] BYREF
  char v56; // [esp+1Ch] [ebp-A4h] BYREF
  char v57; // [esp+1Dh] [ebp-A3h] BYREF
  char v58; // [esp+24h] [ebp-9Ch] BYREF
  char v59; // [esp+25h] [ebp-9Bh] BYREF
  char v60; // [esp+26h] [ebp-9Ah] BYREF
  char v61; // [esp+27h] [ebp-99h] BYREF
  char v62; // [esp+28h] [ebp-98h] BYREF
  char v63; // [esp+29h] [ebp-97h] BYREF
  char v64; // [esp+2Ah] [ebp-96h] BYREF
  char v65; // [esp+2Bh] [ebp-95h] BYREF
  char v66; // [esp+2Ch] [ebp-94h] BYREF
  char v67; // [esp+2Dh] [ebp-93h] BYREF
  char v68; // [esp+2Eh] [ebp-92h] BYREF
  char v69; // [esp+2Fh] [ebp-91h] BYREF
  char v70; // [esp+30h] [ebp-90h] BYREF
  char v71; // [esp+31h] [ebp-8Fh] BYREF
  char v72; // [esp+34h] [ebp-8Ch] BYREF
  char v73; // [esp+35h] [ebp-8Bh] BYREF
  char v74; // [esp+36h] [ebp-8Ah] BYREF
  char v75; // [esp+37h] [ebp-89h] BYREF
  char v76; // [esp+3Bh] [ebp-85h] BYREF
  char v77; // [esp+42h] [ebp-7Eh] BYREF
  char v78; // [esp+43h] [ebp-7Dh] BYREF
  char v79; // [esp+44h] [ebp-7Ch] BYREF
  char v80; // [esp+45h] [ebp-7Bh] BYREF
  char v81; // [esp+4Bh] [ebp-75h] BYREF
  char v82; // [esp+4Fh] [ebp-71h] BYREF
  char v83; // [esp+55h] [ebp-6Bh] BYREF
  char v84; // [esp+5Dh] [ebp-63h] BYREF
  char v85; // [esp+61h] [ebp-5Fh] BYREF
  char v86; // [esp+67h] [ebp-59h] BYREF
  __int16 ii; // [esp+68h] [ebp-58h]
  __int16 n; // [esp+6Ch] [ebp-54h]
  __int16 v89; // [esp+70h] [ebp-50h]
  __int16 v90; // [esp+74h] [ebp-4Ch]
  __int16 v91; // [esp+76h] [ebp-4Ah]
  __int16 v92; // [esp+78h] [ebp-48h]
  __int16 v93; // [esp+7Ah] [ebp-46h]
  __int16 v94; // [esp+7Ch] [ebp-44h]
  __int16 v95; // [esp+80h] [ebp-40h]
  __int16 k; // [esp+84h] [ebp-3Ch]
  __int16 v97; // [esp+88h] [ebp-38h]
  __int16 v98; // [esp+8Ch] [ebp-34h]
  __int16 v99; // [esp+8Eh] [ebp-32h]
  __int16 v100; // [esp+90h] [ebp-30h]
  __int16 v101; // [esp+92h] [ebp-2Eh]
  __int16 m; // [esp+94h] [ebp-2Ch]
  __int16 j; // [esp+98h] [ebp-28h]
  __int16 i; // [esp+9Ch] [ebp-24h]
  __int16 v105; // [esp+A0h] [ebp-20h]
  __int16 v106; // [esp+A4h] [ebp-1Ch]
  __int16 v107; // [esp+A6h] [ebp-1Ah]
  __int16 v108; // [esp+A8h] [ebp-18h]
  __int16 v109; // [esp+AAh] [ebp-16h]
  int v110; // [esp+B0h] [ebp-10h] BYREF
  int v111; // [esp+BCh] [ebp-4h]

  if ( *(this + 2) < 0 )
    sub_5E9F20((char)"shSize>=0", "..\\Casino\\PokerHand.cpp", 6477);
  if ( *(this + 2) > 4 )
    sub_5E9F20((char)"shSize<=4", "..\\Casino\\PokerHand.cpp", 6478);
  if ( !*(this + 2) )
    return 1;
  if ( *(this + 2) == 1 )
    return 2;
  sub_485940(this, &v110, 1, 1, 1, 1, 0, 0, 0);
  v111 = 0;
  if ( *(this + 2) == 2 )
  {
    v21 = dword_791390;
    sub_4A2160(&v86);
    if ( (unsigned __int8)sub_4A1E10(v21) )
    {
      if ( sub_484BF0(this) == 2 )
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 4;
      }
      else
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 3;
      }
    }
    else
    {
      v22 = dword_7913B0;
      sub_4A2160(&v85);
      if ( !(unsigned __int8)sub_4A1E10(v22) )
        sub_5E9F20((char)"phv.GetCategory() == OnePair", "..\\Casino\\PokerHand.cpp", 6498);
      v111 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v110);
      return 5;
    }
  }
  else if ( *(this + 2) == 3 )
  {
    v23 = dword_791390;
    sub_4A2160(&v84);
    if ( (unsigned __int8)sub_4A1E10(v23) )
    {
      if ( sub_484BF0(this) == 3 )
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 8;
      }
      else if ( sub_484BF0(this) == 2 )
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 7;
      }
      else
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 6;
      }
    }
    else
    {
      v24 = dword_7913B0;
      sub_4A2160(&v83);
      if ( (unsigned __int8)sub_4A1E10(v24) )
      {
        if ( sub_484BF0(this) == 2 )
        {
          v111 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v110);
          return 10;
        }
        else
        {
          v111 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v110);
          return 9;
        }
      }
      else
      {
        v25 = dword_791418;
        sub_4A2160(&v82);
        if ( !(unsigned __int8)sub_4A1E10(v25) )
          sub_5E9F20((char)"phv.GetCategory() == ThreeOfAKind", "..\\Casino\\PokerHand.cpp", 6522);
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 11;
      }
    }
  }
  else
  {
    if ( *(this + 2) != 4 )
      sub_5E9F20((char)"shSize == 4", "..\\Casino\\PokerHand.cpp", 6528);
    v26 = dword_791390;
    sub_4A2160(&v81);
    if ( (unsigned __int8)sub_4A1E10(v26) )
    {
      if ( sub_484BF0(this) == 4 )
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 16;
      }
      else if ( sub_484BF0(this) == 3 )
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 15;
      }
      else if ( sub_484BF0(this) == 2 )
      {
        for ( i = 0; i < 4; ++i )
          *(&v106 + i) = 0;
        for ( j = 0; j < *(this + 2); ++j )
        {
          v27 = (unsigned __int8 *)dword_79076C;
          v2 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v80);
          if ( sub_4640B0(v2, v27) )
          {
            ++v106;
          }
          else
          {
            v28 = (unsigned __int8 *)dword_790754;
            v3 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v79);
            if ( sub_4640B0(v3, v28) )
            {
              ++v107;
            }
            else
            {
              v29 = (unsigned __int8 *)dword_790764;
              v4 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v78);
              if ( sub_4640B0(v4, v29) )
              {
                ++v108;
              }
              else
              {
                v30 = (unsigned __int8 *)dword_790770;
                v5 = sub_464400((_BYTE *)(*(_DWORD *)this + j), &v77);
                if ( sub_4640B0(v5, v30) )
                  ++v109;
              }
            }
          }
        }
        v105 = 0;
        for ( i = 0; i < 4; ++i )
        {
          if ( *(&v106 + i) > 0 )
            ++v105;
        }
        if ( v105 == 2 )
        {
          v111 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v110);
          return 14;
        }
        else
        {
          if ( v105 != 3 )
            sub_5E9F20((char)"shDifferentSuits == 3", "..\\Casino\\PokerHand.cpp", 6564);
          v111 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v110);
          return 13;
        }
      }
      else
      {
        v111 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v110);
        return 12;
      }
    }
    else
    {
      v31 = dword_7913B0;
      sub_4A2160(&v76);
      if ( (unsigned __int8)sub_4A1E10(v31) )
      {
        if ( sub_484BF0(this) == 3 )
        {
          v111 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v110);
          return 21;
        }
        else if ( sub_484BF0(this) == 2 )
        {
          for ( k = 0; k < 4; ++k )
            *(&v98 + k) = 0;
          for ( m = 0; m < *(this + 2); ++m )
          {
            v32 = (unsigned __int8 *)dword_79076C;
            v6 = sub_464400((_BYTE *)(*(_DWORD *)this + m), &v75);
            if ( sub_4640B0(v6, v32) )
            {
              ++v98;
            }
            else
            {
              v33 = (unsigned __int8 *)dword_790754;
              v7 = sub_464400((_BYTE *)(*(_DWORD *)this + m), &v74);
              if ( sub_4640B0(v7, v33) )
              {
                ++v99;
              }
              else
              {
                v34 = (unsigned __int8 *)dword_790764;
                v8 = sub_464400((_BYTE *)(*(_DWORD *)this + m), &v73);
                if ( sub_4640B0(v8, v34) )
                {
                  ++v100;
                }
                else
                {
                  v35 = (unsigned __int8 *)dword_790770;
                  v9 = sub_464400((_BYTE *)(*(_DWORD *)this + m), &v72);
                  if ( sub_4640B0(v9, v35) )
                    ++v101;
                }
              }
            }
          }
          v97 = 0;
          for ( k = 0; k < 4; ++k )
          {
            if ( *(&v98 + k) > 0 )
              ++v97;
          }
          if ( v97 == 2 )
          {
            v111 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v110);
            return 20;
          }
          else
          {
            if ( v97 != 3 )
              sub_5E9F20((char)"shDifferentSuits == 3", "..\\Casino\\PokerHand.cpp", 6605);
            v36 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v70);
            v10 = sub_464480(*(_BYTE **)this, &v71);
            if ( sub_464050(v10, v36) )
            {
              v95 = 2;
              v94 = 3;
            }
            else
            {
              v37 = sub_464480((_BYTE *)(*(_DWORD *)this + 2), &v68);
              v11 = sub_464480(*(_BYTE **)this, &v69);
              if ( sub_464050(v11, v37) )
              {
                v95 = 1;
                v94 = 3;
              }
              else
              {
                v38 = sub_464480((_BYTE *)(*(_DWORD *)this + 3), &v66);
                v12 = sub_464480(*(_BYTE **)this, &v67);
                if ( sub_464050(v12, v38) )
                {
                  v95 = 1;
                  v94 = 2;
                }
                else
                {
                  v39 = sub_464480((_BYTE *)(*(_DWORD *)this + 2), &v64);
                  v13 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v65);
                  if ( sub_464050(v13, v39) )
                  {
                    v95 = 0;
                    v94 = 3;
                  }
                  else
                  {
                    v40 = sub_464480((_BYTE *)(*(_DWORD *)this + 3), &v62);
                    v14 = sub_464480((_BYTE *)(*(_DWORD *)this + 1), &v63);
                    if ( sub_464050(v14, v40) )
                    {
                      v95 = 0;
                      v94 = 2;
                    }
                    else
                    {
                      v41 = sub_464480((_BYTE *)(*(_DWORD *)this + 3), &v60);
                      v15 = sub_464480((_BYTE *)(*(_DWORD *)this + 2), &v61);
                      if ( !sub_464050(v15, v41) )
                        sub_5E9F20(
                          (char)"ppcCardsInHand[2].GetRank() == ppcCardsInHand[3].GetRank()",
                          "..\\Casino\\PokerHand.cpp",
                          6635);
                      v95 = 0;
                      v94 = 1;
                    }
                  }
                }
              }
            }
            v42 = sub_464400((_BYTE *)(*(_DWORD *)this + v94), &v58);
            v16 = sub_464400((_BYTE *)(*(_DWORD *)this + v95), &v59);
            if ( sub_4640B0(v16, v42) )
            {
              v111 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v110);
              return 19;
            }
            else
            {
              v111 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v110);
              return 18;
            }
          }
        }
        else
        {
          v111 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v110);
          return 17;
        }
      }
      else
      {
        v43 = dword_791380;
        sub_4A2160(&v57);
        if ( (unsigned __int8)sub_4A1E10(v43) )
        {
          if ( sub_484BF0(this) == 2 )
          {
            for ( n = 0; n < 4; ++n )
              *(&v90 + n) = 0;
            for ( ii = 0; ii < *(this + 2); ++ii )
            {
              v44 = (unsigned __int8 *)dword_79076C;
              v17 = sub_464400((_BYTE *)(*(_DWORD *)this + ii), &v56);
              if ( sub_4640B0(v17, v44) )
              {
                ++v90;
              }
              else
              {
                v45 = (unsigned __int8 *)dword_790754;
                v18 = sub_464400((_BYTE *)(*(_DWORD *)this + ii), &v55);
                if ( sub_4640B0(v18, v45) )
                {
                  ++v91;
                }
                else
                {
                  v46 = (unsigned __int8 *)dword_790764;
                  v19 = sub_464400((_BYTE *)(*(_DWORD *)this + ii), &v54);
                  if ( sub_4640B0(v19, v46) )
                  {
                    ++v92;
                  }
                  else
                  {
                    v47 = (unsigned __int8 *)dword_790770;
                    v20 = sub_464400((_BYTE *)(*(_DWORD *)this + ii), &v53);
                    if ( sub_4640B0(v20, v47) )
                      ++v93;
                  }
                }
              }
            }
            v89 = 0;
            for ( n = 0; n < 4; ++n )
            {
              if ( *(&v90 + n) > 0 )
                ++v89;
            }
            if ( v89 == 2 )
            {
              v111 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v110);
              return 24;
            }
            else
            {
              if ( v89 != 3 )
                sub_5E9F20((char)"shDifferentSuits == 3", "..\\Casino\\PokerHand.cpp", 6679);
              v111 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v110);
              return 23;
            }
          }
          else
          {
            v111 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v110);
            return 22;
          }
        }
        else
        {
          v48 = dword_791418;
          sub_4A2160(&v52);
          if ( (unsigned __int8)sub_4A1E10(v48) )
          {
            if ( sub_484BF0(this) == 2 )
            {
              v111 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v110);
              return 26;
            }
            else
            {
              v111 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v110);
              return 25;
            }
          }
          else
          {
            v49 = dword_791394;
            sub_4A2160(&v51);
            if ( !(unsigned __int8)sub_4A1E10(v49) )
              sub_5E9F20((char)"phv.GetCategory() == FourOfAKind", "..\\Casino\\PokerHand.cpp", 6695);
            v111 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v110);
            return 27;
          }
        }
      }
    }
  }
}


//======================================================================
// sub_49C1D0
// entry 0049c1d0  size 1317  status ok
//======================================================================

void __thiscall sub_49C1D0(__int16 *this, _DWORD *a2, __int16 *a3)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  unsigned __int8 *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 *v10; // [esp-4h] [ebp-90h]
  _WORD *v11; // [esp+Ch] [ebp-80h]
  int *v12; // [esp+10h] [ebp-7Ch]
  _BYTE *v13; // [esp+1Ch] [ebp-70h]
  _BYTE *v14; // [esp+24h] [ebp-68h]
  int *v16; // [esp+40h] [ebp-4Ch]
  int *v17; // [esp+44h] [ebp-48h]
  char v18; // [esp+4Fh] [ebp-3Dh] BYREF
  char v19; // [esp+50h] [ebp-3Ch] BYREF
  char v20; // [esp+51h] [ebp-3Bh] BYREF
  char v21; // [esp+52h] [ebp-3Ah] BYREF
  char v22; // [esp+53h] [ebp-39h] BYREF
  _WORD *v23; // [esp+54h] [ebp-38h]
  __int16 *v24; // [esp+58h] [ebp-34h]
  char v25; // [esp+5Ch] [ebp-30h] BYREF
  char v26; // [esp+5Dh] [ebp-2Fh] BYREF
  unsigned __int8 n; // [esp+5Eh] [ebp-2Eh]
  unsigned __int8 m; // [esp+5Fh] [ebp-2Dh]
  __int16 k; // [esp+60h] [ebp-2Ch]
  __int16 v30; // [esp+64h] [ebp-28h]
  __int16 j; // [esp+68h] [ebp-24h]
  _WORD *v32; // [esp+6Ch] [ebp-20h]
  __int16 *v33; // [esp+70h] [ebp-1Ch]
  unsigned __int8 i; // [esp+77h] [ebp-15h]
  __int16 v35; // [esp+78h] [ebp-14h]
  int *v36; // [esp+7Ch] [ebp-10h]
  int v37; // [esp+88h] [ebp-4h]

  if ( *(this + 2) < 0 )
    sub_5E9F20((char)"shSize >= 0", "..\\Casino\\PokerHand.cpp", 6706);
  if ( *(this + 2) > 7 )
    sub_5E9F20((char)"shSize <= 7", "..\\Casino\\PokerHand.cpp", 6707);
  v14 = sub_464130(&v26, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  v37 = 0;
  if ( sub_484BA0(this, v14) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 6708);
  v37 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v26);
  v13 = sub_464130(&v25, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  v37 = 1;
  if ( sub_484BA0(this, v13) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 6709);
  v37 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v25);
  *a3 = sub_484BF0(this);
  v24 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v33 = v24;
  v23 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v32 = v23;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v33[i] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v3 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v22);
    v4 = sub_463F80(v3, &v21);
    ++v33[(unsigned __int8)*v4];
    v10 = (unsigned __int8 *)dword_7907A4;
    v5 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v20);
    if ( sub_464050(v5, v10) )
    {
      v6 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v19);
      v7 = sub_463FD0(v6, &v18);
      ++v33[(unsigned __int8)*v7];
    }
  }
  *a2 = 0;
  v35 = 8 - *(this + 2);
  if ( v35 > 4 )
    v35 = 4;
  v17 = (int *)operator new(0xCu);
  v37 = 2;
  if ( v17 )
    v12 = sub_464ED0(v17, 13, v35);
  else
    v12 = 0;
  v37 = -1;
  v36 = v12;
LABEL_23:
  while ( sub_465000(v36) )
  {
    for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
      v32[i] = 0;
    v30 = 1;
    for ( k = 0; k < v35; ++k )
    {
      v8 = sub_465110((int)v36, k);
      v11 = &v32[*(unsigned __int8 *)dword_7913B4 + v8];
      ++*v11;
      v9 = sub_465110((int)v36, k);
      v30 *= 4 - v33[*(unsigned __int8 *)dword_7913B4 + v9];
    }
    v32[*(unsigned __int8 *)dword_7913C8] = v32[*(unsigned __int8 *)dword_7913B4];
    for ( m = *(_BYTE *)dword_7913C8; m >= (int)*(unsigned __int8 *)dword_7913A4; --m )
    {
      for ( n = 0; n < 5u && ((__int16)v32[m - n] > 0 || v33[m - n] > 0); ++n )
        ;
      if ( n == 5 )
      {
        *a2 += v30;
        goto LABEL_23;
      }
    }
  }
  v16 = v36;
  if ( v36 )
  {
    sub_464FD0((void **)v36);
    operator delete(v16);
  }
  operator delete(v33);
  operator delete(v32);
}


//======================================================================
// sub_49C700
// entry 0049c700  size 88  status ok
//======================================================================

__int16 __thiscall sub_49C700(__int16 *this)
{
  if ( *(this + 2) < 0 )
    sub_5E9F20((char)"shSize>=0", "..\\Casino\\PokerHand.cpp", 6773);
  if ( *(this + 2) > 3 )
    sub_5E9F20((char)"shSize<=3", "..\\Casino\\PokerHand.cpp", 6774);
  return sub_49B360(this);
}


//======================================================================
// sub_49C760
// entry 0049c760  size 1317  status ok
//======================================================================

void __thiscall sub_49C760(__int16 *this, _DWORD *a2, __int16 *a3)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  unsigned __int8 *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 *v10; // [esp-4h] [ebp-90h]
  _WORD *v11; // [esp+Ch] [ebp-80h]
  int *v12; // [esp+10h] [ebp-7Ch]
  _BYTE *v13; // [esp+1Ch] [ebp-70h]
  _BYTE *v14; // [esp+24h] [ebp-68h]
  int *v16; // [esp+40h] [ebp-4Ch]
  int *v17; // [esp+44h] [ebp-48h]
  char v18; // [esp+4Fh] [ebp-3Dh] BYREF
  char v19; // [esp+50h] [ebp-3Ch] BYREF
  char v20; // [esp+51h] [ebp-3Bh] BYREF
  char v21; // [esp+52h] [ebp-3Ah] BYREF
  char v22; // [esp+53h] [ebp-39h] BYREF
  _WORD *v23; // [esp+54h] [ebp-38h]
  __int16 *v24; // [esp+58h] [ebp-34h]
  char v25; // [esp+5Ch] [ebp-30h] BYREF
  char v26; // [esp+5Dh] [ebp-2Fh] BYREF
  unsigned __int8 n; // [esp+5Eh] [ebp-2Eh]
  unsigned __int8 m; // [esp+5Fh] [ebp-2Dh]
  __int16 v29; // [esp+60h] [ebp-2Ch]
  __int16 j; // [esp+64h] [ebp-28h]
  _WORD *v31; // [esp+68h] [ebp-24h]
  __int16 *v32; // [esp+6Ch] [ebp-20h]
  __int16 k; // [esp+70h] [ebp-1Ch]
  unsigned __int8 i; // [esp+77h] [ebp-15h]
  __int16 v35; // [esp+78h] [ebp-14h]
  int *v36; // [esp+7Ch] [ebp-10h]
  int v37; // [esp+88h] [ebp-4h]

  if ( *(this + 2) < 0 )
    sub_5E9F20((char)"shSize >= 0", "..\\Casino\\PokerHand.cpp", 6785);
  if ( *(this + 2) > 6 )
    sub_5E9F20((char)"shSize <= 6", "..\\Casino\\PokerHand.cpp", 6786);
  v14 = sub_464130(&v26, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  v37 = 0;
  if ( sub_484BA0(this, v14) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 6787);
  v37 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v26);
  v13 = sub_464130(&v25, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  v37 = 1;
  if ( sub_484BA0(this, v13) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 6788);
  v37 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(&v25);
  *a3 = sub_484BF0(this);
  v24 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v32 = v24;
  v23 = operator new(2 * (*(unsigned __int8 *)dword_7913C8 + 1));
  v31 = v23;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
    v32[i] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v3 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v22);
    v4 = sub_463F80(v3, &v21);
    ++v32[(unsigned __int8)*v4];
    v10 = (unsigned __int8 *)dword_7907A4;
    v5 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v20);
    if ( sub_464050(v5, v10) )
    {
      v6 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v19);
      v7 = sub_463FD0(v6, &v18);
      ++v32[(unsigned __int8)*v7];
    }
  }
  *a2 = 0;
  v35 = 7 - *(this + 2);
  if ( v35 > 4 )
    v35 = 4;
  v17 = (int *)operator new(0xCu);
  v37 = 2;
  if ( v17 )
    v12 = sub_464ED0(v17, 13, v35);
  else
    v12 = 0;
  v37 = -1;
  v36 = v12;
LABEL_23:
  while ( sub_465000(v36) )
  {
    for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913C8; ++i )
      v31[i] = 0;
    v29 = 1;
    for ( k = 0; k < v35; ++k )
    {
      v8 = sub_465110((int)v36, k);
      v11 = &v31[*(unsigned __int8 *)dword_7913B4 + v8];
      ++*v11;
      v9 = sub_465110((int)v36, k);
      v29 *= 4 - v32[*(unsigned __int8 *)dword_7913B4 + v9];
    }
    v31[*(unsigned __int8 *)dword_7913C8] = v31[*(unsigned __int8 *)dword_7913B4];
    for ( m = *(_BYTE *)dword_7913C8; m >= (int)*(unsigned __int8 *)dword_7913A4; --m )
    {
      for ( n = 0; n < 5u && ((__int16)v31[m - n] > 0 || v32[m - n] > 0); ++n )
        ;
      if ( n == 5 )
      {
        *a2 += v29;
        goto LABEL_23;
      }
    }
  }
  v16 = v36;
  if ( v36 )
  {
    sub_464FD0((void **)v36);
    operator delete(v16);
  }
  operator delete(v32);
  operator delete(v31);
}


//======================================================================
// sub_49CC90
// entry 0049cc90  size 179  status ok
//======================================================================

void __thiscall sub_49CC90(
        __int16 *this,
        _WORD *a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11)
{
  int v12[2]; // [esp+8h] [ebp-18h] BYREF
  __int16 v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]

  sub_4646A0(v12);
  v14 = 0;
  sub_4646F0(v12);
  sub_4649C0(v12, (int)this);
  sub_4966E0(this, v12[0], v12[1], v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v14 = -1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)v12);
}


//======================================================================
// sub_49CD50
// entry 0049cd50  size 3501  status ok
//======================================================================

void __thiscall sub_49CD50(
        __int16 *this,
        char a2,
        char a3,
        int a4,
        __int16 a5,
        int a6,
        __int16 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13)
{
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // [esp+10h] [ebp-D8h]
  _BYTE *v20; // [esp+18h] [ebp-D0h]
  _BYTE *v21; // [esp+20h] [ebp-C8h]
  _BYTE *v22; // [esp+28h] [ebp-C0h]
  _BYTE *v23; // [esp+30h] [ebp-B8h]
  _BYTE *v24; // [esp+38h] [ebp-B0h]
  char v26; // [esp+5Eh] [ebp-8Ah] BYREF
  char v27; // [esp+5Fh] [ebp-89h] BYREF
  _WORD *v28; // [esp+60h] [ebp-88h]
  char v29; // [esp+66h] [ebp-82h] BYREF
  char v30; // [esp+67h] [ebp-81h] BYREF
  __int16 *v31; // [esp+68h] [ebp-80h]
  char v32; // [esp+6Eh] [ebp-7Ah] BYREF
  char v33; // [esp+6Fh] [ebp-79h] BYREF
  _WORD *v34; // [esp+70h] [ebp-78h]
  char v35; // [esp+76h] [ebp-72h] BYREF
  char v36; // [esp+77h] [ebp-71h] BYREF
  char v37; // [esp+78h] [ebp-70h] BYREF
  char v38; // [esp+79h] [ebp-6Fh] BYREF
  char v39; // [esp+7Ah] [ebp-6Eh] BYREF
  char v40; // [esp+7Bh] [ebp-6Dh] BYREF
  _DWORD v41[5]; // [esp+7Ch] [ebp-6Ch]
  unsigned __int8 v42; // [esp+93h] [ebp-55h]
  __int16 v43; // [esp+94h] [ebp-54h]
  __int16 v44; // [esp+98h] [ebp-50h]
  __int16 v45; // [esp+9Ch] [ebp-4Ch]
  __int16 m; // [esp+A0h] [ebp-48h]
  __int16 v47; // [esp+A4h] [ebp-44h]
  _BYTE v48[4]; // [esp+A8h] [ebp-40h] BYREF
  __int16 v49; // [esp+ACh] [ebp-3Ch]
  __int16 v50; // [esp+AEh] [ebp-3Ah]
  __int16 v51; // [esp+B0h] [ebp-38h]
  __int16 v52; // [esp+B2h] [ebp-36h]
  __int16 v53; // [esp+B8h] [ebp-30h]
  __int16 v54; // [esp+BCh] [ebp-2Ch]
  int k; // [esp+C0h] [ebp-28h]
  __int16 *v56; // [esp+C4h] [ebp-24h]
  _WORD *v57; // [esp+C8h] [ebp-20h]
  __int16 *v58; // [esp+CCh] [ebp-1Ch]
  _WORD *v59; // [esp+D0h] [ebp-18h]
  unsigned __int8 i; // [esp+D7h] [ebp-11h]
  __int16 j; // [esp+D8h] [ebp-10h]
  int v62; // [esp+E4h] [ebp-4h]

  v62 = 3;
  if ( *(this + 2) != 4 )
    sub_5E9F20((char)"shSize == 4", "..\\Casino\\PokerHand.cpp", 6891);
  if ( a5 < 1 || a5 > 3 )
    sub_5E9F20((char)"(phWidow.shSize >=1) && (phWidow.shSize <= 3)", "..\\Casino\\PokerHand.cpp", 6892);
  if ( (unsigned int)a7 >= 4 )
    sub_5E9F20((char)"(phOtherWidow.shSize >=0) && (phOtherWidow.shSize <= 3)", "..\\Casino\\PokerHand.cpp", 6893);
  v24 = sub_464130(&v40, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v62) = 4;
  if ( sub_484BA0(this, v24) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 6894);
  v62 = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v40);
  v23 = sub_464130(&v39, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v62) = 5;
  if ( sub_484BA0(this, v23) )
    sub_5E9F20((char)"!ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 6895);
  v62 = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v39);
  v22 = sub_464130(&v38, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v62) = 6;
  if ( sub_484BA0((__int16 *)&a4, v22) )
    sub_5E9F20((char)"!phWidow.ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 6896);
  v62 = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v38);
  v21 = sub_464130(&v37, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v62) = 7;
  if ( sub_484BA0((__int16 *)&a4, v21) )
    sub_5E9F20((char)"!phWidow.ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 6897);
  v62 = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v37);
  v20 = sub_464130(&v36, (_BYTE *)dword_7907B4, (_BYTE *)dword_790784);
  LOBYTE(v62) = 8;
  if ( sub_484BA0((__int16 *)&a6, v20) )
    sub_5E9F20((char)"!phOtherWidow.ContainsCard(PokerCard(BugRank,BugSuit))", "..\\Casino\\PokerHand.cpp", 6898);
  v62 = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v36);
  v19 = sub_464130(&v35, (_BYTE *)dword_79077C, (_BYTE *)dword_790780);
  LOBYTE(v62) = 9;
  if ( sub_484BA0((__int16 *)&a6, v19) )
    sub_5E9F20((char)"!phOtherWidow.ContainsCard(PokerCard(WildRank,WildSuit))", "..\\Casino\\PokerHand.cpp", 6899);
  v62 = 3;
  ATL::CComCriticalSection::~CComCriticalSection(&v35);
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  *a12 = 0;
  *a13 = 0;
  v34 = operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v57 = v34;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v57[i] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v13 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v33);
    v14 = sub_463FD0(v13, &v32);
    ++v57[(unsigned __int8)*v14];
  }
  v31 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v56 = v31;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v56[i] = 0;
  for ( j = 0; j < a5; ++j )
  {
    v15 = sub_464480((_BYTE *)(a4 + j), &v30);
    v16 = sub_463FD0(v15, &v29);
    ++v56[(unsigned __int8)*v16];
  }
  v28 = operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v59 = v28;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v59[i] = 0;
  for ( j = 0; j < a7; ++j )
  {
    v17 = sub_464480((_BYTE *)(a6 + j), &v27);
    v18 = sub_463FD0(v17, &v26);
    ++v59[(unsigned __int8)*v18];
  }
  v58 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  for ( k = 0; k < 28561; ++k )
  {
    for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
      v58[i] = 0;
    v47 = 1;
    v49 = k % 13;
    v50 = k / 13 % 13;
    if ( v49 <= v50 )
    {
      v51 = k / 169 % 13;
      if ( v49 <= v51 && v50 <= v51 )
      {
        v52 = k / 2197;
        if ( v49 <= v52 && v50 <= v52 && v51 <= v52 )
        {
          for ( m = 0; m < 4; ++m )
            ++v58[*(unsigned __int8 *)dword_7913B4 + *(&v49 + m)];
          v54 = 0;
          for ( m = 0; m < 4; ++m )
          {
            if ( m == 3 || *(&v50 + m) > *(&v49 + m) )
            {
              v45 = 4
                  - v57[*(unsigned __int8 *)dword_7913B4 + *(&v49 + m)]
                  - v56[*(unsigned __int8 *)dword_7913B4 + *(&v49 + m)]
                  - v59[*(unsigned __int8 *)dword_7913B4 + *(&v49 + m)];
              v44 = v54 + 1;
              if ( v45 != (__int16)(v54 + 1) )
              {
                if ( v45 >= v44 )
                {
                  if ( v44 == 2 && v45 == 4 )
                    v47 *= 6;
                  else
                    v47 *= v45;
                }
                else
                {
                  v47 = 0;
                }
              }
              v54 = 0;
            }
            else
            {
              ++v54;
            }
          }
          if ( v47 )
          {
            sub_4A20D0(v48);
            LOBYTE(v62) = 10;
            v53 = 0;
            for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
            {
              if ( v58[i] <= 0 )
              {
                if ( v56[i] > 0 )
                  ++v53;
              }
              else
              {
                ++v53;
              }
            }
            if ( v53 >= 5 )
            {
              v43 = 0;
              v42 = *(_BYTE *)dword_7913B4;
              while ( v43 < 5 )
              {
                if ( v58[v42] || v56[v42] )
                {
                  if ( v42 == *(unsigned __int8 *)dword_7913B4 )
                  {
                    v41[v43] = dword_7913B4;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913F0 )
                  {
                    v41[v43] = dword_7913F0;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913D8 )
                  {
                    v41[v43] = dword_7913D8;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_791414 )
                  {
                    v41[v43] = dword_791414;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913A4 )
                  {
                    v41[v43] = dword_7913A4;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_791404 )
                  {
                    v41[v43] = dword_791404;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913F8 )
                  {
                    v41[v43] = dword_7913F8;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_791410 )
                  {
                    v41[v43] = dword_791410;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913F4 )
                  {
                    v41[v43] = dword_7913F4;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_79138C )
                  {
                    v41[v43] = dword_79138C;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_791400 )
                  {
                    v41[v43] = dword_791400;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913BC )
                  {
                    v41[v43] = dword_7913BC;
                  }
                  else if ( v42 == *(unsigned __int8 *)dword_7913E0 )
                  {
                    v41[v43] = dword_7913E0;
                  }
                  ++v42;
                  ++v43;
                }
                else if ( ++v42 > (int)*(unsigned __int8 *)dword_7913E0 )
                {
                  sub_5E9F20((char)"ucCurrent <= KingValue.ucValue", "..\\Casino\\PokerHand.cpp", 7015);
                }
              }
              sub_4A2100(dword_791390, v41[4], v41[3], v41[2], v41[1], v41[0]);
            }
            else
            {
              sub_4A2100(dword_791390, dword_7913C8, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
            }
            if ( (unsigned __int8)sub_4A2550(&a2) )
            {
              *a8 += v47;
            }
            else if ( (unsigned __int8)sub_4A2340(&a2) )
            {
              *a9 += v47;
            }
            else
            {
              *a10 += v47;
            }
            if ( (unsigned __int8)sub_4A2550(&a3) )
            {
              *a11 += v47;
            }
            else if ( (unsigned __int8)sub_4A2340(&a3) )
            {
              *a12 += v47;
            }
            else
            {
              *a13 += v47;
            }
            LOBYTE(v62) = 3;
            ATL::CComCriticalSection::~CComCriticalSection(v48);
          }
        }
      }
    }
  }
  operator delete(v57);
  operator delete(v56);
  operator delete(v59);
  operator delete(v58);
  LOBYTE(v62) = 2;
  ATL::CComCriticalSection::~CComCriticalSection(&a2);
  LOBYTE(v62) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&a3);
  LOBYTE(v62) = 0;
  sub_484470(&a4);
  v62 = -1;
  sub_484470(&a6);
}


//======================================================================
// sub_49DB00
// entry 0049db00  size 1161  status ok
//======================================================================

void __thiscall sub_49DB00(__int16 *this, _DWORD *a2, __int16 *a3, __int16 *a4)
{
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  int v8; // [esp-4h] [ebp-54h]
  int v9; // [esp-4h] [ebp-54h]
  int v10; // [esp-4h] [ebp-54h]
  int v11; // [esp-4h] [ebp-54h]
  int v12; // [esp-4h] [ebp-54h]
  char v14; // [esp+Bh] [ebp-45h] BYREF
  char v15; // [esp+Ch] [ebp-44h] BYREF
  char v16; // [esp+Dh] [ebp-43h] BYREF
  char v17; // [esp+Eh] [ebp-42h] BYREF
  char v18; // [esp+Fh] [ebp-41h] BYREF
  char v19; // [esp+10h] [ebp-40h] BYREF
  char v20; // [esp+11h] [ebp-3Fh] BYREF
  char v21; // [esp+12h] [ebp-3Eh] BYREF
  char v22; // [esp+13h] [ebp-3Dh] BYREF
  char v23; // [esp+14h] [ebp-3Ch] BYREF
  char v24; // [esp+15h] [ebp-3Bh] BYREF
  char v25; // [esp+16h] [ebp-3Ah] BYREF
  char v26; // [esp+17h] [ebp-39h] BYREF
  int v27; // [esp+18h] [ebp-38h]
  int v28; // [esp+1Ch] [ebp-34h]
  int v29; // [esp+20h] [ebp-30h]
  __int16 j; // [esp+24h] [ebp-2Ch]
  __int16 v31; // [esp+28h] [ebp-28h]
  _DWORD v32[3]; // [esp+2Ch] [ebp-24h] BYREF
  __int16 i; // [esp+3Ch] [ebp-14h]
  int v34; // [esp+40h] [ebp-10h] BYREF
  int v35; // [esp+4Ch] [ebp-4h]

  if ( *(this + 2) != 7 )
    sub_5E9F20((char)"shSize == 7", "..\\Casino\\PokerHand.cpp", 7075);
  sub_485940(this, v32, 1, 1, 1, 1, 0, 0, 0);
  v35 = 0;
  sub_485940(this, &v34, 0, 1, 1, 0, 0, 0, 0);
  LOBYTE(v35) = 1;
  for ( i = 0; i < 7; ++i )
    *((_BYTE *)&v32[1] + i) = 0;
  v8 = dword_791390;
  sub_4A2160(&v26);
  if ( (unsigned __int8)sub_4A1E10(v8) )
  {
    for ( i = 0; i < *(this + 2); ++i )
    {
      v9 = sub_4A2200(&v23);
      v4 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v25);
      sub_463FD0(v4, &v24);
      if ( (unsigned __int8)sub_4A1FB0(v9) )
      {
        *((_BYTE *)&v32[1] + i) = 1;
        break;
      }
    }
    for ( i = 0; i < *(this + 2); ++i )
    {
      v10 = sub_4A2250(&v20);
      v5 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v22);
      sub_463FD0(v5, &v21);
      if ( (unsigned __int8)sub_4A1FB0(v10) )
      {
        *((_BYTE *)&v32[1] + i) = 1;
        break;
      }
    }
    for ( i = 0; i < *(this + 2); ++i )
    {
      v11 = sub_4A22A0(&v17);
      v6 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v19);
      sub_463FD0(v6, &v18);
      if ( (unsigned __int8)sub_4A1FB0(v11) )
      {
        *((_BYTE *)&v32[1] + i) = 1;
        break;
      }
    }
    for ( i = 0; i < *(this + 2); ++i )
    {
      v12 = sub_4A22F0(&v14);
      v7 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v16);
      sub_463FD0(v7, &v15);
      if ( (unsigned __int8)sub_4A1FB0(v12) )
      {
        *((_BYTE *)&v32[1] + i) = 1;
        break;
      }
    }
    v31 = 0;
    for ( j = 0; j < 7; ++j )
    {
      if ( !*((_BYTE *)&v32[1] + j) )
      {
        if ( v31 >= 3 )
          sub_5E9F20((char)"shIndex<3", "..\\Casino\\PokerHand.cpp", 7128);
        a2[v31++] = 6 - j;
      }
    }
    if ( v31 != 3 )
      sub_5E9F20((char)"shIndex == 3", "..\\Casino\\PokerHand.cpp", 7133);
  }
  else
  {
    *a2 = 0;
    a2[1] = 1;
    a2[2] = 2;
  }
  if ( a2[2] > a2[1] )
  {
    v29 = a2[2];
    a2[2] = a2[1];
    a2[1] = v29;
  }
  if ( a2[2] > *a2 )
  {
    v28 = a2[2];
    a2[2] = *a2;
    *a2 = v28;
  }
  if ( a2[1] > *a2 )
  {
    v27 = a2[1];
    a2[1] = *a2;
    *a2 = v27;
  }
  sub_484B80(a3);
  sub_484490(a4, this);
  for ( i = 0; i < 3; ++i )
  {
    sub_484830(a3, (_BYTE *)(a2[i] + *(_DWORD *)this));
    sub_484AD0(a4, (_BYTE *)(a2[i] + *(_DWORD *)this));
  }
  if ( a3[2] != 3 )
    sub_5E9F20((char)"phPassed.shSize == 3", "..\\Casino\\PokerHand.cpp", 7169);
  if ( a4[2] != 4 )
    sub_5E9F20((char)"phKept.shSize == 4", "..\\Casino\\PokerHand.cpp", 7170);
  LOBYTE(v35) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(&v34);
  v35 = -1;
  ATL::CComCriticalSection::~CComCriticalSection(v32);
}


//======================================================================
// sub_49DF90
// entry 0049df90  size 1174  status ok
//======================================================================

__int16 __thiscall sub_49DF90(__int16 *this)
{
  int v2; // [esp-4h] [ebp-58h]
  int v3; // [esp-4h] [ebp-58h]
  int v4; // [esp-4h] [ebp-58h]
  int v5; // [esp-4h] [ebp-58h]
  int v6; // [esp-4h] [ebp-58h]
  int v7; // [esp-4h] [ebp-58h]
  int v8; // [esp-4h] [ebp-58h]
  int v9; // [esp-4h] [ebp-58h]
  int v10; // [esp-4h] [ebp-58h]
  int v11; // [esp-4h] [ebp-58h]
  char v12; // [esp+1Dh] [ebp-37h] BYREF
  char v13; // [esp+1Eh] [ebp-36h] BYREF
  char v14; // [esp+1Fh] [ebp-35h] BYREF
  char v15; // [esp+20h] [ebp-34h] BYREF
  char v16; // [esp+21h] [ebp-33h] BYREF
  char v17; // [esp+27h] [ebp-2Dh] BYREF
  char v18; // [esp+2Bh] [ebp-29h] BYREF
  char v19; // [esp+2Fh] [ebp-25h] BYREF
  char v20; // [esp+33h] [ebp-21h] BYREF
  char v21; // [esp+37h] [ebp-1Dh] BYREF
  char v22; // [esp+3Bh] [ebp-19h] BYREF
  char v23; // [esp+3Eh] [ebp-16h] BYREF
  char v24; // [esp+3Fh] [ebp-15h] BYREF
  int v25; // [esp+40h] [ebp-14h]
  int v26; // [esp+44h] [ebp-10h] BYREF
  int v27; // [esp+50h] [ebp-4h]

  sub_485940(this, &v26, 0, 0, 1, 0, 0, 0, 0);
  v27 = 0;
  v2 = dword_791390;
  sub_4A2160(&v24);
  if ( (unsigned __int8)sub_4A1E10(v2) )
  {
    v3 = dword_791414;
    sub_4A2200(&v23);
    if ( (unsigned __int8)sub_4A1FB0(v3) )
    {
      v27 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v26);
      return 42;
    }
    else
    {
      v4 = dword_7913A4;
      sub_4A2200(&v22);
      if ( (unsigned __int8)sub_4A1FB0(v4) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 43;
      }
      else
      {
        v5 = dword_791404;
        sub_4A2200(&v21);
        if ( (unsigned __int8)sub_4A1FB0(v5) )
        {
          v27 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v26);
          return 44;
        }
        else
        {
          v6 = dword_7913F8;
          sub_4A2200(&v20);
          if ( (unsigned __int8)sub_4A1FB0(v6) )
          {
            v27 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v26);
            return 45;
          }
          else
          {
            v7 = dword_791410;
            sub_4A2200(&v19);
            if ( (unsigned __int8)sub_4A1FB0(v7) )
            {
              v27 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v26);
              return 46;
            }
            else
            {
              v8 = dword_7913F4;
              sub_4A2200(&v18);
              if ( (unsigned __int8)sub_4A1FB0(v8) )
              {
                v27 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v26);
                return 47;
              }
              else
              {
                v9 = dword_79138C;
                sub_4A2200(&v17);
                if ( (unsigned __int8)sub_4A1FB0(v9) )
                {
                  v27 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v26);
                  return 48;
                }
                else
                {
                  v27 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v26);
                  return 49;
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
    v10 = dword_7913B0;
    sub_4A2160(&v16);
    if ( (unsigned __int8)sub_4A1E10(v10) )
    {
      v11 = sub_4A2200(&v14);
      sub_4A21B0(&v15);
      if ( (unsigned __int8)sub_4A2010(v11) )
        v25 = sub_4A21B0(&v13);
      else
        v25 = sub_4A2200(&v12);
      if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 42;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 43;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 44;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 45;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 46;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 47;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 48;
      }
      else
      {
        v27 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v26);
        return 49;
      }
    }
    else
    {
      v27 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v26);
      return -1;
    }
  }
}


//======================================================================
// sub_49E430
// entry 0049e430  size 2574  status ok
//======================================================================

__int16 __thiscall sub_49E430(__int16 *this)
{
  int v2; // [esp-4h] [ebp-98h]
  int v3; // [esp-4h] [ebp-98h]
  int v4; // [esp-4h] [ebp-98h]
  int v5; // [esp-4h] [ebp-98h]
  int v6; // [esp-4h] [ebp-98h]
  int v7; // [esp-4h] [ebp-98h]
  int v8; // [esp-4h] [ebp-98h]
  int v9; // [esp-4h] [ebp-98h]
  int v10; // [esp-4h] [ebp-98h]
  int v11; // [esp-4h] [ebp-98h]
  int v12; // [esp-4h] [ebp-98h]
  int v13; // [esp-4h] [ebp-98h]
  int v14; // [esp-4h] [ebp-98h]
  int v15; // [esp-4h] [ebp-98h]
  int v16; // [esp-4h] [ebp-98h]
  int v17; // [esp-4h] [ebp-98h]
  char v18; // [esp+1Fh] [ebp-75h] BYREF
  char v19; // [esp+20h] [ebp-74h] BYREF
  char v20; // [esp+21h] [ebp-73h] BYREF
  char v21; // [esp+22h] [ebp-72h] BYREF
  char v22; // [esp+23h] [ebp-71h] BYREF
  char v23; // [esp+37h] [ebp-5Dh] BYREF
  char v24; // [esp+38h] [ebp-5Ch] BYREF
  char v25; // [esp+39h] [ebp-5Bh] BYREF
  char v26; // [esp+3Ah] [ebp-5Ah] BYREF
  char v27; // [esp+3Bh] [ebp-59h] BYREF
  char v28; // [esp+4Eh] [ebp-46h] BYREF
  char v29; // [esp+4Fh] [ebp-45h] BYREF
  char v30; // [esp+50h] [ebp-44h] BYREF
  char v31; // [esp+51h] [ebp-43h] BYREF
  char v32; // [esp+52h] [ebp-42h] BYREF
  char v33; // [esp+53h] [ebp-41h] BYREF
  char v34; // [esp+54h] [ebp-40h] BYREF
  char v35; // [esp+55h] [ebp-3Fh] BYREF
  char v36; // [esp+5Bh] [ebp-39h] BYREF
  char v37; // [esp+5Fh] [ebp-35h] BYREF
  char v38; // [esp+63h] [ebp-31h] BYREF
  char v39; // [esp+67h] [ebp-2Dh] BYREF
  char v40; // [esp+6Bh] [ebp-29h] BYREF
  char v41; // [esp+6Fh] [ebp-25h] BYREF
  char v42; // [esp+73h] [ebp-21h] BYREF
  char v43; // [esp+76h] [ebp-1Eh] BYREF
  char v44; // [esp+77h] [ebp-1Dh] BYREF
  int v45; // [esp+78h] [ebp-1Ch]
  int v46; // [esp+7Ch] [ebp-18h]
  int v47; // [esp+80h] [ebp-14h]
  int v48; // [esp+84h] [ebp-10h] BYREF
  int v49; // [esp+90h] [ebp-4h]

  sub_485940(this, &v48, 0, 0, 1, 0, 0, 0, 0);
  v49 = 0;
  v2 = dword_791390;
  sub_4A2160(&v44);
  if ( (unsigned __int8)sub_4A1E10(v2) )
  {
    v3 = dword_7913D8;
    sub_4A2250(&v43);
    if ( (unsigned __int8)sub_4A1FB0(v3) )
    {
      v49 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v48);
      return 50;
    }
    else
    {
      v4 = dword_791414;
      sub_4A2250(&v42);
      if ( (unsigned __int8)sub_4A1FB0(v4) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 51;
      }
      else
      {
        v5 = dword_7913A4;
        sub_4A2250(&v41);
        if ( (unsigned __int8)sub_4A1FB0(v5) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 52;
        }
        else
        {
          v6 = dword_791404;
          sub_4A2250(&v40);
          if ( (unsigned __int8)sub_4A1FB0(v6) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 53;
          }
          else
          {
            v7 = dword_7913F8;
            sub_4A2250(&v39);
            if ( (unsigned __int8)sub_4A1FB0(v7) )
            {
              v49 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v48);
              return 54;
            }
            else
            {
              v8 = dword_791410;
              sub_4A2250(&v38);
              if ( (unsigned __int8)sub_4A1FB0(v8) )
              {
                v49 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v48);
                return 55;
              }
              else
              {
                v9 = dword_7913F4;
                sub_4A2250(&v37);
                if ( (unsigned __int8)sub_4A1FB0(v9) )
                {
                  v49 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v48);
                  return 56;
                }
                else
                {
                  v10 = dword_79138C;
                  sub_4A2250(&v36);
                  if ( (unsigned __int8)sub_4A1FB0(v10) )
                  {
                    v49 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v48);
                    return 57;
                  }
                  else
                  {
                    v49 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v48);
                    return 58;
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
    v11 = dword_7913B0;
    sub_4A2160(&v35);
    if ( (unsigned __int8)sub_4A1E10(v11) )
    {
      v12 = sub_4A2200(&v33);
      sub_4A21B0(&v34);
      if ( (unsigned __int8)sub_4A2010(v12) )
      {
        v47 = sub_4A2200(&v32);
      }
      else
      {
        v13 = sub_4A2250(&v30);
        sub_4A21B0(&v31);
        if ( (unsigned __int8)sub_4A2010(v13) )
          v47 = sub_4A21B0(&v29);
        else
          v47 = sub_4A2250(&v28);
      }
      if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 50;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 51;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 52;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 53;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 54;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 55;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 56;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 57;
      }
      else
      {
        v49 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v48);
        return 58;
      }
    }
    else
    {
      v14 = dword_791380;
      sub_4A2160(&v27);
      if ( (unsigned __int8)sub_4A1E10(v14) )
      {
        v15 = sub_4A2250(&v25);
        sub_4A21B0(&v26);
        if ( (unsigned __int8)sub_4A2010(v15) )
          v46 = sub_4A21B0(&v24);
        else
          v46 = sub_4A2250(&v23);
        if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 50;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 51;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 52;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 53;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 54;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 55;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 56;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 57;
        }
        else
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return 58;
        }
      }
      else
      {
        v16 = dword_791418;
        sub_4A2160(&v22);
        if ( (unsigned __int8)sub_4A1E10(v16) )
        {
          v17 = sub_4A2200(&v20);
          sub_4A21B0(&v21);
          if ( (unsigned __int8)sub_4A2010(v17) )
            v45 = sub_4A21B0(&v19);
          else
            v45 = sub_4A2200(&v18);
          if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 50;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 51;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 52;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 53;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 54;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 55;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 56;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 57;
          }
          else
          {
            v49 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v48);
            return 58;
          }
        }
        else
        {
          v49 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v48);
          return -1;
        }
      }
    }
  }
}


//======================================================================
// sub_49EE40
// entry 0049ee40  size 4464  status ok
//======================================================================

__int16 __thiscall sub_49EE40(__int16 *this)
{
  int v2; // [esp-4h] [ebp-E0h]
  int v3; // [esp-4h] [ebp-E0h]
  int v4; // [esp-4h] [ebp-E0h]
  int v5; // [esp-4h] [ebp-E0h]
  int v6; // [esp-4h] [ebp-E0h]
  int v7; // [esp-4h] [ebp-E0h]
  int v8; // [esp-4h] [ebp-E0h]
  int v9; // [esp-4h] [ebp-E0h]
  int v10; // [esp-4h] [ebp-E0h]
  int v11; // [esp-4h] [ebp-E0h]
  int v12; // [esp-4h] [ebp-E0h]
  int v13; // [esp-4h] [ebp-E0h]
  int v14; // [esp-4h] [ebp-E0h]
  int v15; // [esp-4h] [ebp-E0h]
  int v16; // [esp-4h] [ebp-E0h]
  int v17; // [esp-4h] [ebp-E0h]
  int v18; // [esp-4h] [ebp-E0h]
  int v19; // [esp-4h] [ebp-E0h]
  int v20; // [esp-4h] [ebp-E0h]
  int v21; // [esp-4h] [ebp-E0h]
  int v22; // [esp-4h] [ebp-E0h]
  int v23; // [esp-4h] [ebp-E0h]
  int v24; // [esp-4h] [ebp-E0h]
  char v25; // [esp+1Fh] [ebp-BDh] BYREF
  char v26; // [esp+20h] [ebp-BCh] BYREF
  char v27; // [esp+21h] [ebp-BBh] BYREF
  char v28; // [esp+22h] [ebp-BAh] BYREF
  char v29; // [esp+23h] [ebp-B9h] BYREF
  char v30; // [esp+39h] [ebp-A3h] BYREF
  char v31; // [esp+3Ah] [ebp-A2h] BYREF
  char v32; // [esp+3Bh] [ebp-A1h] BYREF
  char v33; // [esp+3Ch] [ebp-A0h] BYREF
  char v34; // [esp+3Dh] [ebp-9Fh] BYREF
  char v35; // [esp+52h] [ebp-8Ah] BYREF
  char v36; // [esp+53h] [ebp-89h] BYREF
  char v37; // [esp+54h] [ebp-88h] BYREF
  char v38; // [esp+55h] [ebp-87h] BYREF
  char v39; // [esp+56h] [ebp-86h] BYREF
  char v40; // [esp+57h] [ebp-85h] BYREF
  char v41; // [esp+58h] [ebp-84h] BYREF
  char v42; // [esp+59h] [ebp-83h] BYREF
  char v43; // [esp+6Eh] [ebp-6Eh] BYREF
  char v44; // [esp+6Fh] [ebp-6Dh] BYREF
  char v45; // [esp+70h] [ebp-6Ch] BYREF
  char v46; // [esp+71h] [ebp-6Bh] BYREF
  char v47; // [esp+72h] [ebp-6Ah] BYREF
  char v48; // [esp+73h] [ebp-69h] BYREF
  char v49; // [esp+74h] [ebp-68h] BYREF
  char v50; // [esp+75h] [ebp-67h] BYREF
  char v51; // [esp+8Ah] [ebp-52h] BYREF
  char v52; // [esp+8Bh] [ebp-51h] BYREF
  char v53; // [esp+8Ch] [ebp-50h] BYREF
  char v54; // [esp+8Dh] [ebp-4Fh] BYREF
  char v55; // [esp+8Eh] [ebp-4Eh] BYREF
  char v56; // [esp+8Fh] [ebp-4Dh] BYREF
  char v57; // [esp+90h] [ebp-4Ch] BYREF
  char v58; // [esp+91h] [ebp-4Bh] BYREF
  char v59; // [esp+97h] [ebp-45h] BYREF
  char v60; // [esp+9Bh] [ebp-41h] BYREF
  char v61; // [esp+9Fh] [ebp-3Dh] BYREF
  char v62; // [esp+A3h] [ebp-39h] BYREF
  char v63; // [esp+A7h] [ebp-35h] BYREF
  char v64; // [esp+ABh] [ebp-31h] BYREF
  char v65; // [esp+AFh] [ebp-2Dh] BYREF
  char v66; // [esp+B3h] [ebp-29h] BYREF
  char v67; // [esp+B6h] [ebp-26h] BYREF
  char v68; // [esp+B7h] [ebp-25h] BYREF
  int v69; // [esp+B8h] [ebp-24h]
  int v70; // [esp+BCh] [ebp-20h]
  int v71; // [esp+C0h] [ebp-1Ch]
  int v72; // [esp+C4h] [ebp-18h]
  int v73; // [esp+C8h] [ebp-14h]
  int v74; // [esp+CCh] [ebp-10h] BYREF
  int v75; // [esp+D8h] [ebp-4h]

  sub_485940(this, &v74, 0, 0, 1, 0, 0, 0, 0);
  v75 = 0;
  v2 = dword_791390;
  sub_4A2160(&v68);
  if ( (unsigned __int8)sub_4A1E10(v2) )
  {
    v3 = dword_7913F0;
    sub_4A22A0(&v67);
    if ( (unsigned __int8)sub_4A1FB0(v3) )
    {
      v75 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v74);
      return 59;
    }
    else
    {
      v4 = dword_7913D8;
      sub_4A22A0(&v66);
      if ( (unsigned __int8)sub_4A1FB0(v4) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 60;
      }
      else
      {
        v5 = dword_791414;
        sub_4A22A0(&v65);
        if ( (unsigned __int8)sub_4A1FB0(v5) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 61;
        }
        else
        {
          v6 = dword_7913A4;
          sub_4A22A0(&v64);
          if ( (unsigned __int8)sub_4A1FB0(v6) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 62;
          }
          else
          {
            v7 = dword_791404;
            sub_4A22A0(&v63);
            if ( (unsigned __int8)sub_4A1FB0(v7) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 63;
            }
            else
            {
              v8 = dword_7913F8;
              sub_4A22A0(&v62);
              if ( (unsigned __int8)sub_4A1FB0(v8) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 64;
              }
              else
              {
                v9 = dword_791410;
                sub_4A22A0(&v61);
                if ( (unsigned __int8)sub_4A1FB0(v9) )
                {
                  v75 = -1;
                  ATL::CComCriticalSection::~CComCriticalSection(&v74);
                  return 65;
                }
                else
                {
                  v10 = dword_7913F4;
                  sub_4A22A0(&v60);
                  if ( (unsigned __int8)sub_4A1FB0(v10) )
                  {
                    v75 = -1;
                    ATL::CComCriticalSection::~CComCriticalSection(&v74);
                    return 66;
                  }
                  else
                  {
                    v11 = dword_79138C;
                    sub_4A22A0(&v59);
                    if ( (unsigned __int8)sub_4A1FB0(v11) )
                    {
                      v75 = -1;
                      ATL::CComCriticalSection::~CComCriticalSection(&v74);
                      return 67;
                    }
                    else
                    {
                      v75 = -1;
                      ATL::CComCriticalSection::~CComCriticalSection(&v74);
                      return 68;
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
    v12 = dword_7913B0;
    sub_4A2160(&v58);
    if ( (unsigned __int8)sub_4A1E10(v12) )
    {
      v13 = sub_4A2250(&v56);
      sub_4A21B0(&v57);
      if ( (unsigned __int8)sub_4A2010(v13) )
      {
        v73 = sub_4A2250(&v55);
      }
      else
      {
        v14 = sub_4A22A0(&v53);
        sub_4A21B0(&v54);
        if ( (unsigned __int8)sub_4A2010(v14) )
          v73 = sub_4A21B0(&v52);
        else
          v73 = sub_4A22A0(&v51);
      }
      if ( (unsigned __int8)sub_4A1FB0(dword_7913F0) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 59;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 60;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 61;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 62;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 63;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 64;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 65;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 66;
      }
      else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 67;
      }
      else
      {
        v75 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v74);
        return 68;
      }
    }
    else
    {
      v15 = dword_791380;
      sub_4A2160(&v50);
      if ( (unsigned __int8)sub_4A1E10(v15) )
      {
        v16 = sub_4A2250(&v48);
        sub_4A21B0(&v49);
        if ( (unsigned __int8)sub_4A2010(v16) )
        {
          v17 = sub_4A2250(&v46);
          sub_4A2200(&v47);
          if ( (unsigned __int8)sub_4A2010(v17) )
            v72 = sub_4A2200(&v45);
          else
            v72 = sub_4A2250(&v44);
        }
        else
        {
          v72 = sub_4A21B0(&v43);
        }
        if ( (unsigned __int8)sub_4A1FB0(dword_7913F0) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 59;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 60;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 61;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 62;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 63;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 64;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 65;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 66;
        }
        else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 67;
        }
        else
        {
          v75 = -1;
          ATL::CComCriticalSection::~CComCriticalSection(&v74);
          return 68;
        }
      }
      else
      {
        v18 = dword_791418;
        sub_4A2160(&v42);
        if ( (unsigned __int8)sub_4A1E10(v18) )
        {
          v19 = sub_4A2200(&v40);
          sub_4A21B0(&v41);
          if ( (unsigned __int8)sub_4A2010(v19) )
          {
            v71 = sub_4A2200(&v39);
          }
          else
          {
            v20 = sub_4A2250(&v37);
            sub_4A21B0(&v38);
            if ( (unsigned __int8)sub_4A2010(v20) )
              v71 = sub_4A21B0(&v36);
            else
              v71 = sub_4A2250(&v35);
          }
          if ( (unsigned __int8)sub_4A1FB0(dword_7913F0) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 59;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 60;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 61;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 62;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 63;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 64;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 65;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 66;
          }
          else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 67;
          }
          else
          {
            v75 = -1;
            ATL::CComCriticalSection::~CComCriticalSection(&v74);
            return 68;
          }
        }
        else
        {
          v21 = dword_7913D4;
          sub_4A2160(&v34);
          if ( (unsigned __int8)sub_4A1E10(v21) )
          {
            v22 = sub_4A2200(&v32);
            sub_4A21B0(&v33);
            if ( (unsigned __int8)sub_4A2010(v22) )
              v70 = sub_4A21B0(&v31);
            else
              v70 = sub_4A2200(&v30);
            if ( (unsigned __int8)sub_4A1FB0(dword_7913F0) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 59;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 60;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 61;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 62;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 63;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 64;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 65;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 66;
            }
            else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 67;
            }
            else
            {
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return 68;
            }
          }
          else
          {
            v23 = dword_791394;
            sub_4A2160(&v29);
            if ( (unsigned __int8)sub_4A1E10(v23) )
            {
              v24 = sub_4A2200(&v27);
              sub_4A21B0(&v28);
              if ( (unsigned __int8)sub_4A2010(v24) )
                v69 = sub_4A21B0(&v26);
              else
                v69 = sub_4A2200(&v25);
              if ( (unsigned __int8)sub_4A1FB0(dword_7913F0) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 59;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_7913D8) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 60;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_791414) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 61;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_7913A4) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 62;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_791404) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 63;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_7913F8) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 64;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_791410) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 65;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_7913F4) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 66;
              }
              else if ( (unsigned __int8)sub_4A1FB0(dword_79138C) )
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 67;
              }
              else
              {
                v75 = -1;
                ATL::CComCriticalSection::~CComCriticalSection(&v74);
                return 68;
              }
            }
            else
            {
              sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 7528);
              v75 = -1;
              ATL::CComCriticalSection::~CComCriticalSection(&v74);
              return -1;
            }
          }
        }
      }
    }
  }
}


//======================================================================
// sub_49FFB0
// entry 0049ffb0  size 5013  status ok
//======================================================================

void __thiscall sub_49FFB0(__int16 *this, __int16 a2, _BYTE *a3)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  _BYTE *v23; // eax
  _BYTE *v24; // eax
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  _BYTE *v27; // eax
  _BYTE *v28; // eax
  _BYTE *v29; // eax
  _BYTE *v30; // eax
  _BYTE *v31; // eax
  _BYTE *v32; // eax
  _BYTE *v33; // eax
  _BYTE *v34; // eax
  int v35; // [esp-4h] [ebp-A0h]
  _BYTE *v36; // [esp-4h] [ebp-A0h]
  int v37; // [esp-4h] [ebp-A0h]
  _BYTE *v38; // [esp-4h] [ebp-A0h]
  int v39; // [esp-4h] [ebp-A0h]
  _BYTE *v40; // [esp-4h] [ebp-A0h]
  _BYTE *v41; // [esp-4h] [ebp-A0h]
  int v42; // [esp-4h] [ebp-A0h]
  int v43; // [esp-4h] [ebp-A0h]
  _BYTE *v44; // [esp-4h] [ebp-A0h]
  _BYTE *v45; // [esp-4h] [ebp-A0h]
  _BYTE *v46; // [esp-4h] [ebp-A0h]
  int v47; // [esp-4h] [ebp-A0h]
  _BYTE *v48; // [esp-4h] [ebp-A0h]
  _BYTE *v49; // [esp-4h] [ebp-A0h]
  int v50; // [esp-4h] [ebp-A0h]
  _BYTE *v51; // [esp-4h] [ebp-A0h]
  int v52; // [esp-4h] [ebp-A0h]
  _BYTE *v53; // [esp-4h] [ebp-A0h]
  _BYTE *v54; // [esp-4h] [ebp-A0h]
  _BYTE *v55; // [esp-4h] [ebp-A0h]
  int v56; // [esp-4h] [ebp-A0h]
  int v57; // [esp-4h] [ebp-A0h]
  _BYTE *v58; // [esp-4h] [ebp-A0h]
  _BYTE *v59; // [esp-4h] [ebp-A0h]
  _BYTE *v60; // [esp-4h] [ebp-A0h]
  _BYTE *v61; // [esp-4h] [ebp-A0h]
  _BYTE *v62; // [esp-4h] [ebp-A0h]
  int v63; // [esp-4h] [ebp-A0h]
  int v64; // [esp-4h] [ebp-A0h]
  _BYTE *v65; // [esp-4h] [ebp-A0h]
  _BYTE *v66; // [esp-4h] [ebp-A0h]
  _BYTE *v67; // [esp-4h] [ebp-A0h]
  _BYTE *v68; // [esp-4h] [ebp-A0h]
  _BYTE *v69; // [esp-4h] [ebp-A0h]
  int v70; // [esp-4h] [ebp-A0h]
  int v71; // [esp-4h] [ebp-A0h]
  _BYTE *v72; // [esp-4h] [ebp-A0h]
  _BYTE *v73; // [esp-4h] [ebp-A0h]
  _BYTE *v74; // [esp-4h] [ebp-A0h]
  _BYTE *v75; // [esp-4h] [ebp-A0h]
  int v76; // [esp-4h] [ebp-A0h]
  _BYTE *v77; // [esp-4h] [ebp-A0h]
  _BYTE *v78; // [esp-4h] [ebp-A0h]
  _BYTE *v79; // [esp-4h] [ebp-A0h]
  int v80; // [esp-4h] [ebp-A0h]
  _BYTE *v81; // [esp-4h] [ebp-A0h]
  _BYTE *v82; // [esp-4h] [ebp-A0h]
  char v84; // [esp+8h] [ebp-94h] BYREF
  char v85; // [esp+9h] [ebp-93h] BYREF
  char v86; // [esp+Ah] [ebp-92h] BYREF
  char v87; // [esp+Bh] [ebp-91h] BYREF
  char v88; // [esp+Ch] [ebp-90h] BYREF
  char v89; // [esp+Dh] [ebp-8Fh] BYREF
  char v90; // [esp+Eh] [ebp-8Eh] BYREF
  char v91; // [esp+Fh] [ebp-8Dh] BYREF
  char v92; // [esp+10h] [ebp-8Ch] BYREF
  char v93; // [esp+11h] [ebp-8Bh] BYREF
  char v94; // [esp+12h] [ebp-8Ah] BYREF
  char v95; // [esp+13h] [ebp-89h] BYREF
  char v96; // [esp+14h] [ebp-88h] BYREF
  char v97; // [esp+15h] [ebp-87h] BYREF
  char v98; // [esp+16h] [ebp-86h] BYREF
  char v99; // [esp+17h] [ebp-85h] BYREF
  char v100; // [esp+18h] [ebp-84h] BYREF
  char v101; // [esp+19h] [ebp-83h] BYREF
  char v102; // [esp+1Ah] [ebp-82h] BYREF
  char v103; // [esp+1Bh] [ebp-81h] BYREF
  char v104; // [esp+1Ch] [ebp-80h] BYREF
  char v105; // [esp+1Dh] [ebp-7Fh] BYREF
  char v106; // [esp+1Eh] [ebp-7Eh] BYREF
  char v107; // [esp+1Fh] [ebp-7Dh] BYREF
  char v108; // [esp+20h] [ebp-7Ch] BYREF
  char v109; // [esp+21h] [ebp-7Bh] BYREF
  char v110; // [esp+22h] [ebp-7Ah] BYREF
  char v111; // [esp+23h] [ebp-79h] BYREF
  char v112; // [esp+24h] [ebp-78h] BYREF
  char v113; // [esp+25h] [ebp-77h] BYREF
  char v114; // [esp+26h] [ebp-76h] BYREF
  char v115; // [esp+27h] [ebp-75h] BYREF
  char v116; // [esp+28h] [ebp-74h] BYREF
  char v117; // [esp+29h] [ebp-73h] BYREF
  char v118; // [esp+2Ah] [ebp-72h] BYREF
  char v119; // [esp+2Bh] [ebp-71h] BYREF
  char v120; // [esp+2Ch] [ebp-70h] BYREF
  char v121; // [esp+2Dh] [ebp-6Fh] BYREF
  char v122; // [esp+2Eh] [ebp-6Eh] BYREF
  char v123; // [esp+2Fh] [ebp-6Dh] BYREF
  char v124; // [esp+30h] [ebp-6Ch] BYREF
  char v125; // [esp+31h] [ebp-6Bh] BYREF
  char v126; // [esp+32h] [ebp-6Ah] BYREF
  char v127; // [esp+33h] [ebp-69h] BYREF
  char v128; // [esp+34h] [ebp-68h] BYREF
  char v129; // [esp+35h] [ebp-67h] BYREF
  char v130; // [esp+36h] [ebp-66h] BYREF
  char v131; // [esp+37h] [ebp-65h] BYREF
  char v132; // [esp+38h] [ebp-64h] BYREF
  char v133; // [esp+39h] [ebp-63h] BYREF
  char v134; // [esp+3Ah] [ebp-62h] BYREF
  char v135; // [esp+3Bh] [ebp-61h] BYREF
  char v136; // [esp+3Ch] [ebp-60h] BYREF
  char v137; // [esp+3Dh] [ebp-5Fh] BYREF
  char v138; // [esp+3Eh] [ebp-5Eh] BYREF
  char v139; // [esp+3Fh] [ebp-5Dh] BYREF
  char v140; // [esp+40h] [ebp-5Ch] BYREF
  char v141; // [esp+41h] [ebp-5Bh] BYREF
  char v142; // [esp+42h] [ebp-5Ah] BYREF
  char v143; // [esp+43h] [ebp-59h] BYREF
  char v144; // [esp+44h] [ebp-58h] BYREF
  char v145; // [esp+45h] [ebp-57h] BYREF
  char v146; // [esp+46h] [ebp-56h] BYREF
  char v147; // [esp+47h] [ebp-55h] BYREF
  char v148; // [esp+48h] [ebp-54h] BYREF
  char v149; // [esp+49h] [ebp-53h] BYREF
  char v150; // [esp+4Ah] [ebp-52h] BYREF
  char v151; // [esp+4Bh] [ebp-51h] BYREF
  char v152; // [esp+4Ch] [ebp-50h] BYREF
  char v153; // [esp+4Dh] [ebp-4Fh] BYREF
  char v154; // [esp+4Eh] [ebp-4Eh] BYREF
  char v155; // [esp+4Fh] [ebp-4Dh] BYREF
  char v156; // [esp+50h] [ebp-4Ch] BYREF
  char v157; // [esp+51h] [ebp-4Bh] BYREF
  char v158; // [esp+52h] [ebp-4Ah] BYREF
  char v159; // [esp+53h] [ebp-49h] BYREF
  char v160; // [esp+54h] [ebp-48h] BYREF
  char v161; // [esp+55h] [ebp-47h] BYREF
  char v162; // [esp+56h] [ebp-46h] BYREF
  char v163; // [esp+57h] [ebp-45h] BYREF
  char v164; // [esp+58h] [ebp-44h] BYREF
  char v165; // [esp+59h] [ebp-43h] BYREF
  char v166; // [esp+5Ah] [ebp-42h] BYREF
  char v167; // [esp+5Bh] [ebp-41h] BYREF
  char v168; // [esp+5Ch] [ebp-40h] BYREF
  char v169; // [esp+5Dh] [ebp-3Fh] BYREF
  char v170; // [esp+5Eh] [ebp-3Eh] BYREF
  char v171; // [esp+5Fh] [ebp-3Dh] BYREF
  char v172; // [esp+60h] [ebp-3Ch] BYREF
  char v173; // [esp+61h] [ebp-3Bh] BYREF
  char v174; // [esp+62h] [ebp-3Ah] BYREF
  char v175; // [esp+63h] [ebp-39h] BYREF
  char v176; // [esp+64h] [ebp-38h] BYREF
  char v177; // [esp+65h] [ebp-37h] BYREF
  char v178; // [esp+66h] [ebp-36h] BYREF
  char v179; // [esp+67h] [ebp-35h] BYREF
  char v180; // [esp+68h] [ebp-34h] BYREF
  char v181; // [esp+69h] [ebp-33h] BYREF
  char v182; // [esp+6Ah] [ebp-32h] BYREF
  char v183; // [esp+6Bh] [ebp-31h] BYREF
  char v184; // [esp+6Ch] [ebp-30h] BYREF
  char v185; // [esp+6Dh] [ebp-2Fh] BYREF
  char v186; // [esp+6Eh] [ebp-2Eh] BYREF
  char v187; // [esp+6Fh] [ebp-2Dh] BYREF
  char v188; // [esp+70h] [ebp-2Ch] BYREF
  char v189; // [esp+71h] [ebp-2Bh] BYREF
  char v190; // [esp+72h] [ebp-2Ah] BYREF
  char v191; // [esp+73h] [ebp-29h] BYREF
  char v192; // [esp+74h] [ebp-28h] BYREF
  char v193; // [esp+75h] [ebp-27h] BYREF
  char v194; // [esp+76h] [ebp-26h] BYREF
  char v195; // [esp+77h] [ebp-25h] BYREF
  char v196; // [esp+78h] [ebp-24h] BYREF
  char v197; // [esp+79h] [ebp-23h] BYREF
  char v198; // [esp+7Ah] [ebp-22h] BYREF
  char v199; // [esp+7Bh] [ebp-21h] BYREF
  int v200; // [esp+7Ch] [ebp-20h] BYREF
  char v201; // [esp+83h] [ebp-19h]
  int v202; // [esp+84h] [ebp-18h] BYREF
  int v203; // [esp+88h] [ebp-14h] BYREF
  __int16 i; // [esp+8Ch] [ebp-10h]
  int v205; // [esp+98h] [ebp-4h]

  if ( a2 < 0 )
    sub_5E9F20((char)"shHandIndex>=0", "..\\Casino\\PokerHand.cpp", 7538);
  if ( a2 >= 69 )
    sub_5E9F20((char)"shHandIndex<LOWBALLNUMBEROFINDICES", "..\\Casino\\PokerHand.cpp", 7539);
  for ( i = 0; i < 5; ++i )
    a3[i] = 0;
  if ( a2 > 41 )
  {
    if ( a2 > 49 )
    {
      if ( a2 > 58 )
      {
        sub_485940(this, &v200, 0, 0, 1, 0, 0, 0, 0);
        v205 = 2;
        v52 = dword_791390;
        sub_4A2160(&v161);
        if ( (unsigned __int8)sub_4A1E10(v52) )
        {
          for ( i = 0; i < 5; ++i )
          {
            v13 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v159);
            v53 = sub_463FD0(v13, &v158);
            sub_4A21B0(&v160);
            if ( (unsigned __int8)sub_4A1FB0(v53) )
            {
              a3[i] = 1;
            }
            else
            {
              v14 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v156);
              v54 = sub_463FD0(v14, &v155);
              sub_4A2200(&v157);
              if ( (unsigned __int8)sub_4A1FB0(v54) )
              {
                a3[i] = 1;
              }
              else
              {
                v15 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v153);
                v55 = sub_463FD0(v15, &v152);
                sub_4A2250(&v154);
                if ( (unsigned __int8)sub_4A1FB0(v55) )
                  a3[i] = 1;
              }
            }
          }
        }
        else
        {
          v56 = dword_7913B0;
          sub_4A2160(&v151);
          if ( (unsigned __int8)sub_4A1E10(v56) )
          {
            v57 = sub_4A2250(&v149);
            sub_4A21B0(&v150);
            if ( (unsigned __int8)sub_4A2010(v57) )
            {
              for ( i = 0; i < 5; ++i )
              {
                v16 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v147);
                v58 = sub_463FD0(v16, &v146);
                sub_4A21B0(&v148);
                if ( (unsigned __int8)sub_4A1FB0(v58) )
                {
                  a3[i] = 1;
                }
                else
                {
                  v17 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v144);
                  v59 = sub_463FD0(v17, &v143);
                  sub_4A2200(&v145);
                  if ( (unsigned __int8)sub_4A1FB0(v59) )
                    a3[i] = 1;
                }
              }
            }
            else
            {
              for ( i = 0; i < 5; ++i )
              {
                v18 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v141);
                v60 = sub_463FD0(v18, &v140);
                sub_4A2200(&v142);
                if ( (unsigned __int8)sub_4A1FB0(v60) )
                {
                  a3[i] = 1;
                }
                else
                {
                  v19 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v138);
                  v61 = sub_463FD0(v19, &v137);
                  sub_4A2250(&v139);
                  if ( (unsigned __int8)sub_4A1FB0(v61) )
                    a3[i] = 1;
                }
              }
              for ( i = 0; i < 5; ++i )
              {
                v20 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v135);
                v62 = sub_463FD0(v20, &v134);
                sub_4A21B0(&v136);
                if ( (unsigned __int8)sub_4A1FB0(v62) )
                {
                  a3[i] = 1;
                  break;
                }
              }
              if ( i >= 5 )
                sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7704);
            }
          }
          else
          {
            v63 = dword_791380;
            sub_4A2160(&v133);
            if ( (unsigned __int8)sub_4A1E10(v63) )
            {
              v64 = sub_4A21B0(&v131);
              sub_4A2250(&v132);
              if ( (unsigned __int8)sub_4A2010(v64) )
              {
                for ( i = 0; i < 5; ++i )
                {
                  v21 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v129);
                  v65 = sub_463FD0(v21, &v128);
                  sub_4A2250(&v130);
                  if ( (unsigned __int8)sub_4A1FB0(v65) )
                    a3[i] = 1;
                }
                for ( i = 0; i < 5; ++i )
                {
                  v22 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v126);
                  v66 = sub_463FD0(v22, &v125);
                  sub_4A21B0(&v127);
                  if ( (unsigned __int8)sub_4A1FB0(v66) )
                  {
                    a3[i] = 1;
                    break;
                  }
                }
                if ( i >= 5 )
                  sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7724);
                for ( i = 0; i < 5; ++i )
                {
                  v23 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v123);
                  v67 = sub_463FD0(v23, &v122);
                  sub_4A2200(&v124);
                  if ( (unsigned __int8)sub_4A1FB0(v67) )
                  {
                    a3[i] = 1;
                    break;
                  }
                }
                if ( i >= 5 )
                  sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7733);
              }
              else
              {
                for ( i = 0; i < 5; ++i )
                {
                  v24 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v120);
                  v68 = sub_463FD0(v24, &v119);
                  sub_4A21B0(&v121);
                  if ( (unsigned __int8)sub_4A1FB0(v68) )
                    a3[i] = 1;
                }
                for ( i = 0; i < 5; ++i )
                {
                  v25 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v117);
                  v69 = sub_463FD0(v25, &v116);
                  sub_4A2200(&v118);
                  if ( (unsigned __int8)sub_4A1FB0(v69) )
                  {
                    a3[i] = 1;
                    break;
                  }
                }
                if ( i >= 5 )
                  sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7750);
              }
            }
            else
            {
              v70 = dword_791418;
              sub_4A2160(&v115);
              if ( (unsigned __int8)sub_4A1E10(v70) )
              {
                v71 = sub_4A2200(&v113);
                sub_4A21B0(&v114);
                if ( (unsigned __int8)sub_4A2010(v71) )
                {
                  for ( i = 0; i < 5; ++i )
                  {
                    v26 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v111);
                    v72 = sub_463FD0(v26, &v110);
                    sub_4A21B0(&v112);
                    if ( (unsigned __int8)sub_4A1FB0(v72) )
                      a3[i] = 1;
                  }
                }
                else
                {
                  for ( i = 0; i < 5; ++i )
                  {
                    v27 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v108);
                    v73 = sub_463FD0(v27, &v107);
                    sub_4A21B0(&v109);
                    if ( (unsigned __int8)sub_4A1FB0(v73) )
                      a3[i] = 1;
                  }
                  for ( i = 0; i < 5; ++i )
                  {
                    v28 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v105);
                    v74 = sub_463FD0(v28, &v104);
                    sub_4A21B0(&v106);
                    if ( (unsigned __int8)sub_4A1FB0(v74) )
                    {
                      a3[i] = 0;
                      break;
                    }
                  }
                  if ( i >= 5 )
                    sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7778);
                  for ( i = 0; i < 5; ++i )
                  {
                    v29 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v102);
                    v75 = sub_463FD0(v29, &v101);
                    sub_4A2200(&v103);
                    if ( (unsigned __int8)sub_4A1FB0(v75) )
                      a3[i] = 1;
                  }
                }
              }
              else
              {
                v76 = dword_7913D4;
                sub_4A2160(&v100);
                if ( (unsigned __int8)sub_4A1E10(v76) )
                {
                  for ( i = 0; i < 5; ++i )
                  {
                    v30 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v98);
                    v77 = sub_463FD0(v30, &v97);
                    sub_4A21B0(&v99);
                    if ( (unsigned __int8)sub_4A1FB0(v77) )
                      a3[i] = 1;
                  }
                  for ( i = 0; i < 5; ++i )
                  {
                    v31 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v95);
                    v78 = sub_463FD0(v31, &v94);
                    sub_4A21B0(&v96);
                    if ( (unsigned __int8)sub_4A1FB0(v78) )
                    {
                      a3[i] = 0;
                      break;
                    }
                  }
                  if ( i >= 5 )
                    sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7801);
                  for ( i = 0; i < 5; ++i )
                  {
                    v32 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v92);
                    v79 = sub_463FD0(v32, &v91);
                    sub_4A2200(&v93);
                    if ( (unsigned __int8)sub_4A1FB0(v79) )
                    {
                      a3[i] = 1;
                      break;
                    }
                  }
                  if ( i >= 5 )
                    sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7810);
                }
                else
                {
                  v80 = dword_791394;
                  sub_4A2160(&v90);
                  if ( (unsigned __int8)sub_4A1E10(v80) )
                  {
                    for ( i = 0; i < 5; ++i )
                    {
                      v33 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v88);
                      v81 = sub_463FD0(v33, &v87);
                      sub_4A21B0(&v89);
                      if ( (unsigned __int8)sub_4A1FB0(v81) )
                        a3[i] = 1;
                    }
                    for ( i = 0; i < 5; ++i )
                    {
                      v34 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v85);
                      v82 = sub_463FD0(v34, &v84);
                      sub_4A21B0(&v86);
                      if ( (unsigned __int8)sub_4A1FB0(v82) )
                      {
                        a3[i] = 0;
                        break;
                      }
                    }
                    if ( i >= 5 )
                      sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7827);
                  }
                  else
                  {
                    sub_5E9F20((char)"0", "..\\Casino\\PokerHand.cpp", 7830);
                  }
                }
              }
            }
          }
        }
        if ( (a3[4] != 0) + (a3[3] != 0) + (a3[2] != 0) + (a3[1] != 0) + (*a3 != 0) != 3 )
          sub_5E9F20(
            (char)"((bDiscard[0] ? 1 : 0) + (bDiscard[1] ? 1 : 0) + (bDiscard[2] ? 1 : 0) + (bDiscard[3] ? 1 : 0) + (bDis"
                  "card[4] ? 1 : 0) ) == 3",
            "..\\Casino\\PokerHand.cpp",
            7832);
        v205 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v200);
      }
      else
      {
        sub_485940(this, &v202, 0, 0, 1, 0, 0, 0, 0);
        v205 = 1;
        v39 = dword_791390;
        sub_4A2160(&v191);
        if ( (unsigned __int8)sub_4A1E10(v39) )
        {
          for ( i = 0; i < 5; ++i )
          {
            v5 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v189);
            v40 = sub_463FD0(v5, &v188);
            sub_4A21B0(&v190);
            if ( (unsigned __int8)sub_4A1FB0(v40) )
            {
              a3[i] = 1;
            }
            else
            {
              v6 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v186);
              v41 = sub_463FD0(v6, &v185);
              sub_4A2200(&v187);
              if ( (unsigned __int8)sub_4A1FB0(v41) )
                a3[i] = 1;
            }
          }
        }
        else
        {
          v42 = dword_7913B0;
          sub_4A2160(&v184);
          if ( (unsigned __int8)sub_4A1E10(v42) )
          {
            v43 = sub_4A2200(&v182);
            sub_4A21B0(&v183);
            if ( (unsigned __int8)sub_4A2010(v43) )
            {
              for ( i = 0; i < 5; ++i )
              {
                v7 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v180);
                v44 = sub_463FD0(v7, &v179);
                sub_4A21B0(&v181);
                if ( (unsigned __int8)sub_4A1FB0(v44) )
                  a3[i] = 1;
              }
            }
            else
            {
              for ( i = 0; i < 5; ++i )
              {
                v8 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v177);
                v45 = sub_463FD0(v8, &v176);
                sub_4A21B0(&v178);
                if ( (unsigned __int8)sub_4A1FB0(v45) )
                {
                  a3[i] = 1;
                  break;
                }
              }
              if ( i >= 5 )
                sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7607);
              for ( i = 0; i < 5; ++i )
              {
                v9 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v174);
                v46 = sub_463FD0(v9, &v173);
                sub_4A2200(&v175);
                if ( (unsigned __int8)sub_4A1FB0(v46) )
                  a3[i] = 1;
              }
            }
          }
          else
          {
            v47 = dword_791380;
            sub_4A2160(&v172);
            if ( (unsigned __int8)sub_4A1E10(v47) )
            {
              for ( i = 0; i < 5; ++i )
              {
                v10 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v170);
                v48 = sub_463FD0(v10, &v169);
                sub_4A21B0(&v171);
                if ( (unsigned __int8)sub_4A1FB0(v48) )
                {
                  a3[i] = 1;
                  break;
                }
              }
              if ( i >= 5 )
                sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7625);
              for ( i = 0; i < 5; ++i )
              {
                v11 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v167);
                v49 = sub_463FD0(v11, &v166);
                sub_4A2200(&v168);
                if ( (unsigned __int8)sub_4A1FB0(v49) )
                {
                  a3[i] = 1;
                  break;
                }
              }
              if ( i >= 5 )
                sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7634);
            }
            else
            {
              v50 = dword_791418;
              sub_4A2160(&v165);
              if ( (unsigned __int8)sub_4A1E10(v50) )
              {
                v201 = 0;
                for ( i = 0; i < 5; ++i )
                {
                  v12 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v163);
                  v51 = sub_463FD0(v12, &v162);
                  sub_4A21B0(&v164);
                  if ( (unsigned __int8)sub_4A1FB0(v51) )
                  {
                    if ( v201 )
                    {
                      a3[i] = 1;
                      break;
                    }
                    a3[i] = 1;
                    v201 = 1;
                  }
                }
                if ( i >= 5 )
                  sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7655);
              }
            }
          }
        }
        if ( (a3[4] != 0) + (a3[3] != 0) + (a3[2] != 0) + (a3[1] != 0) + (*a3 != 0) != 2 )
          sub_5E9F20(
            (char)"((bDiscard[0] ? 1 : 0) + (bDiscard[1] ? 1 : 0) + (bDiscard[2] ? 1 : 0) + (bDiscard[3] ? 1 : 0) + (bDis"
                  "card[4] ? 1 : 0) ) == 2",
            "..\\Casino\\PokerHand.cpp",
            7657);
        v205 = -1;
        ATL::CComCriticalSection::~CComCriticalSection(&v202);
      }
    }
    else
    {
      sub_485940(this, &v203, 0, 0, 1, 0, 0, 0, 0);
      v205 = 0;
      v35 = dword_791390;
      sub_4A2160(&v199);
      if ( (unsigned __int8)sub_4A1E10(v35) )
      {
        for ( i = 0; i < 5; ++i )
        {
          v3 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v197);
          v36 = sub_463FD0(v3, &v196);
          sub_4A21B0(&v198);
          if ( (unsigned __int8)sub_4A1FB0(v36) )
            a3[i] = 1;
        }
      }
      else
      {
        v37 = dword_7913B0;
        sub_4A2160(&v195);
        if ( (unsigned __int8)sub_4A1E10(v37) )
        {
          for ( i = 0; i < 5; ++i )
          {
            v4 = sub_464480((_BYTE *)(*(_DWORD *)this + i), &v193);
            v38 = sub_463FD0(v4, &v192);
            sub_4A21B0(&v194);
            if ( (unsigned __int8)sub_4A1FB0(v38) )
            {
              a3[i] = 1;
              break;
            }
          }
          if ( i >= 5 )
            sub_5E9F20((char)"shTemp < 5", "..\\Casino\\PokerHand.cpp", 7569);
        }
      }
      if ( (a3[4] != 0) + (a3[3] != 0) + (a3[2] != 0) + (a3[1] != 0) + (*a3 != 0) != 1 )
        sub_5E9F20(
          (char)"((bDiscard[0] ? 1 : 0) + (bDiscard[1] ? 1 : 0) + (bDiscard[2] ? 1 : 0) + (bDiscard[3] ? 1 : 0) + (bDisca"
                "rd[4] ? 1 : 0) ) == 1",
          "..\\Casino\\PokerHand.cpp",
          7571);
      v205 = -1;
      ATL::CComCriticalSection::~CComCriticalSection(&v203);
    }
  }
}


//======================================================================
// sub_4A1350
// entry 004a1350  size 1461  status ok
//======================================================================

_DWORD *__thiscall sub_4A1350(_WORD *this, _DWORD *a2, int a3, __int16 a4)
{
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char v10; // [esp+1Eh] [ebp-62h] BYREF
  char v11; // [esp+1Fh] [ebp-61h] BYREF
  __int16 *v12; // [esp+20h] [ebp-60h]
  char v13; // [esp+26h] [ebp-5Ah] BYREF
  char v14; // [esp+27h] [ebp-59h] BYREF
  __int16 *v15; // [esp+28h] [ebp-58h]
  _DWORD v16[5]; // [esp+2Ch] [ebp-54h]
  __int16 v17; // [esp+40h] [ebp-40h]
  unsigned __int8 v18; // [esp+47h] [ebp-39h]
  __int16 v19; // [esp+48h] [ebp-38h]
  __int16 v20; // [esp+4Ch] [ebp-34h]
  __int16 v21; // [esp+50h] [ebp-30h]
  __int16 *v22; // [esp+54h] [ebp-2Ch]
  __int16 *v23; // [esp+58h] [ebp-28h]
  __int16 v24; // [esp+5Ch] [ebp-24h]
  int v25; // [esp+60h] [ebp-20h] BYREF
  __int16 v26; // [esp+64h] [ebp-1Ch]
  unsigned __int8 i; // [esp+6Bh] [ebp-15h]
  __int16 j; // [esp+6Ch] [ebp-14h]
  __int16 v29; // [esp+70h] [ebp-10h]
  int v30; // [esp+7Ch] [ebp-4h]

  v30 = 1;
  v15 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v23 = v15;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v23[i] = 0;
  for ( j = 0; j < (__int16)*(this + 2); ++j )
  {
    v4 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v14);
    v5 = sub_463FD0(v4, &v13);
    ++v23[(unsigned __int8)*v5];
  }
  v12 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v22 = v12;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v22[i] = 0;
  for ( j = 0; j < a4; ++j )
  {
    v6 = sub_464480((_BYTE *)(a3 + j), &v11);
    v7 = sub_463FD0(v6, &v10);
    ++v22[(unsigned __int8)*v7];
  }
  sub_4A20D0(&v25);
  LOBYTE(v30) = 2;
  sub_4A2100(dword_791390, dword_7913F4, &byte_7913FF, &byte_7913FF, &byte_7913FF, &byte_7913FF);
  v26 = 0;
  v24 = 0;
  v29 = 0;
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_791410; ++i )
  {
    if ( v23[i] > 0 )
      ++v26;
    if ( v22[i] > 0 )
      ++v24;
    if ( v23[i] > 0 || v22[i] > 0 )
      ++v29;
  }
  if ( v26 >= 2 && v24 >= 3 && v29 >= 5 )
  {
    v21 = 0;
    v18 = *(_BYTE *)dword_7913B4;
    v19 = 0;
    v17 = 0;
    v20 = 0;
    while ( 1 )
    {
      if ( v21 >= 5 )
      {
        sub_4A2100(dword_791390, v16[4], v16[3], v16[2], v16[1], v16[0]);
        goto LABEL_68;
      }
      if ( v23[v18] > 0 && v22[v18] > 0 )
      {
        ++v20;
        goto LABEL_50;
      }
      if ( v23[v18] > 0 && v17 < 2 )
        break;
      if ( v22[v18] <= 0 || v19 >= 3 )
      {
        if ( ++v18 > (int)*(unsigned __int8 *)dword_791410 )
          sub_5E9F20((char)"ucCurrent <= EightValue.ucValue", "..\\Casino\\PokerHand.cpp", 7906);
      }
      else
      {
        ++v19;
        while ( v20 + v19 > 3 )
        {
          --v20;
          if ( ++v17 > 2 )
            sub_5E9F20((char)"shOwnUsed <= 2", "..\\Casino\\PokerHand.cpp", 7900);
        }
LABEL_50:
        if ( v18 == *(unsigned __int8 *)dword_7913B4 )
        {
          v16[v21] = dword_7913B4;
        }
        else if ( v18 == *(unsigned __int8 *)dword_7913F0 )
        {
          v16[v21] = dword_7913F0;
        }
        else if ( v18 == *(unsigned __int8 *)dword_7913D8 )
        {
          v16[v21] = dword_7913D8;
        }
        else if ( v18 == *(unsigned __int8 *)dword_791414 )
        {
          v16[v21] = dword_791414;
        }
        else if ( v18 == *(unsigned __int8 *)dword_7913A4 )
        {
          v16[v21] = dword_7913A4;
        }
        else if ( v18 == *(unsigned __int8 *)dword_791404 )
        {
          v16[v21] = dword_791404;
        }
        else if ( v18 == *(unsigned __int8 *)dword_7913F8 )
        {
          v16[v21] = dword_7913F8;
        }
        else if ( v18 == *(unsigned __int8 *)dword_791410 )
        {
          v16[v21] = dword_791410;
        }
        ++v18;
        ++v21;
      }
    }
    ++v17;
    while ( v20 + v17 > 2 )
    {
      --v20;
      if ( ++v19 > 3 )
        sub_5E9F20((char)"shWidowUsed <= 3", "..\\Casino\\PokerHand.cpp", 7890);
    }
    goto LABEL_50;
  }
LABEL_68:
  operator delete(v23);
  operator delete(v22);
  *a2 = v25;
  LOBYTE(v30) = 1;
  ATL::CComCriticalSection::~CComCriticalSection(&v25);
  LOBYTE(v30) = 0;
  sub_484470(&a3);
  return a2;
}


//======================================================================
// sub_4A1910
// entry 004a1910  size 1065  status ok
//======================================================================

_DWORD *__thiscall sub_4A1910(__int16 *this, _DWORD *a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  char v6; // [esp+1Ah] [ebp-42h] BYREF
  char v7; // [esp+1Bh] [ebp-41h] BYREF
  __int16 *v8; // [esp+1Ch] [ebp-40h]
  __int16 j; // [esp+20h] [ebp-3Ch]
  __int16 *v10; // [esp+24h] [ebp-38h]
  _DWORD v11[5]; // [esp+28h] [ebp-34h]
  unsigned __int8 v12; // [esp+3Fh] [ebp-1Dh]
  int v13; // [esp+40h] [ebp-1Ch] BYREF
  __int16 v14; // [esp+44h] [ebp-18h]
  unsigned __int8 i; // [esp+4Bh] [ebp-11h]
  __int16 v16; // [esp+4Ch] [ebp-10h]
  int v17; // [esp+58h] [ebp-4h]

  v8 = (__int16 *)operator new(2 * (*(unsigned __int8 *)dword_7913E0 + 1));
  v10 = v8;
  for ( i = 0; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
    v10[i] = 0;
  for ( j = 0; j < *(this + 2); ++j )
  {
    v2 = sub_464480((_BYTE *)(*(_DWORD *)this + j), &v7);
    v3 = sub_463FD0(v2, &v6);
    ++v10[(unsigned __int8)*v3];
  }
  sub_4A20D0(&v13);
  v17 = 1;
  v14 = 0;
  for ( i = *(_BYTE *)dword_7913B4; i <= (int)*(unsigned __int8 *)dword_7913E0; ++i )
  {
    if ( v10[i] > 0 )
      ++v14;
  }
  if ( v14 >= 5 )
  {
    v16 = 0;
    v12 = *(_BYTE *)dword_7913B4;
    while ( v16 < 5 )
    {
      if ( v10[v12] )
      {
        if ( v12 == *(unsigned __int8 *)dword_7913B4 )
        {
          v11[v16] = dword_7913B4;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913F0 )
        {
          v11[v16] = dword_7913F0;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913D8 )
        {
          v11[v16] = dword_7913D8;
        }
        else if ( v12 == *(unsigned __int8 *)dword_791414 )
        {
          v11[v16] = dword_791414;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913A4 )
        {
          v11[v16] = dword_7913A4;
        }
        else if ( v12 == *(unsigned __int8 *)dword_791404 )
        {
          v11[v16] = dword_791404;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913F8 )
        {
          v11[v16] = dword_7913F8;
        }
        else if ( v12 == *(unsigned __int8 *)dword_791410 )
        {
          v11[v16] = dword_791410;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913F4 )
        {
          v11[v16] = dword_7913F4;
        }
        else if ( v12 == *(unsigned __int8 *)dword_79138C )
        {
          v11[v16] = dword_79138C;
        }
        else if ( v12 == *(unsigned __int8 *)dword_791400 )
        {
          v11[v16] = dword_791400;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913BC )
        {
          v11[v16] = dword_7913BC;
        }
        else if ( v12 == *(unsigned __int8 *)dword_7913E0 )
        {
          v11[v16] = dword_7913E0;
        }
        ++v12;
        ++v16;
      }
      else if ( ++v12 > (int)*(unsigned __int8 *)dword_7913E0 )
      {
        sub_5E9F20((char)"ucCurrent <= KingValue.ucValue", "..\\Casino\\PokerHand.cpp", 7968);
      }
    }
    sub_4A2100(dword_791390, v11[4], v11[3], v11[2], v11[1], v11[0]);
    operator delete(v10);
    *a2 = v13;
    LOBYTE(v17) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(&v13);
    return a2;
  }
  else
  {
    operator delete(v10);
    sub_485940(this, a2, 0, 0, 1, 0, 0, 0, 0);
    LOBYTE(v17) = 0;
    ATL::CComCriticalSection::~CComCriticalSection(&v13);
    return a2;
  }
}


//======================================================================
// sub_4A1D40
// entry 004a1d40  size 81  status ok
//======================================================================

_WORD *__thiscall sub_4A1D40(_WORD *this)
{
  _WORD *result; // eax

  result = this;
  *(this + 2) = 0;
  if ( *(_DWORD *)this )
  {
    result = (_WORD *)sub_4A1DA0(3);
    *(_DWORD *)this = 0;
  }
  return result;
}


//======================================================================
// sub_4A1DA0
// entry 004a1da0  size 106  status ok
//======================================================================

char *__thiscall sub_4A1DA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 1u, *((_DWORD *)this - 1), ATL::CComCriticalSection::~CComCriticalSection);
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
// sub_4A1E10
// entry 004a1e10  size 34  status ok
//======================================================================

bool __thiscall sub_4A1E10(unsigned __int8 *this, unsigned __int8 *a2)
{
  return *this == *a2;
}


