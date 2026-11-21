//======================================================================
// sub_592D00
// entry 00592d00  size 873  status ok
//======================================================================

int __thiscall sub_592D00(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  int v4; // [esp+14h] [ebp-30h]
  int v5; // [esp+18h] [ebp-2Ch]
  int v7; // [esp+34h] [ebp-10h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = sub_5980C0(dword_7935A8);
      if ( *(this + 8) == -1 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( !(unsigned __int8)sub_593080(this) || sub_598370(dword_7935A8) )
          result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        else
          result = sub_592AA0((int)this);
      }
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( (unsigned __int8)sub_637630(dword_162EE84) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 156) + 116))(*(_DWORD *)(dword_79359C + 156));
        if ( operator new(0x20u) )
          v5 = sub_6010A0(this);
        else
          v5 = 0;
        sub_5F5D50(v5);
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   100006,
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
      if ( (unsigned __int8)sub_593080(this) )
      {
        if ( operator new(0x24u) )
          v4 = sub_5930E0(*(this + 8), this);
        else
          v4 = 0;
        result = sub_5FC420(v4);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 156) + 112))(*(_DWORD *)(dword_79359C + 156));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 156) + 176))(
          *(_DWORD *)(dword_79359C + 156),
          0);
        v7 = (*(this + 8) == 4) + 5;
        while ( --v7 >= 0 )
        {
          v3 = sub_6436C0(*(_DWORD *)(dword_7935A8 + 4));
          sub_597C00(*(this + 8), v3);
        }
        sub_591A70((_DWORD **)dword_79359C);
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 20);
      }
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      result = sub_592920((int)this);
      break;
    case 4:
      *(_BYTE *)(dword_7935A8 + 278) = 0;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 148) + 112))(*(_DWORD *)(dword_79359C + 148));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 152) + 112))(*(_DWORD *)(dword_79359C + 152));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
        *(_DWORD *)(dword_7935A4 + 4),
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
// sub_593080
// entry 00593080  size 89  status ok
//======================================================================

bool __thiscall sub_593080(_BYTE *this)
{
  return (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 && !*(this + 36) && !*(_BYTE *)(dword_7935A8 + 278);
}


//======================================================================
// sub_5930E0
// entry 005930e0  size 292  status ok
//======================================================================

_DWORD *__thiscall sub_5930E0(_DWORD *this, int a2, int a3)
{
  _DWORD v5[5]; // [esp+8h] [ebp-34h]
  _DWORD v6[8]; // [esp+1Ch] [ebp-20h]

  sub_5FC0D0(a3);
  v6[7] = 0;
  *this = &FourCardPokerDealToScript::`vftable';
  *(this + 8) = a2;
  v5[0] = 3215024;
  v5[1] = 3215022;
  v5[2] = 3215026;
  v5[3] = 3215020;
  v5[4] = 3215028;
  v6[0] = 3215023;
  v6[1] = 3215021;
  v6[2] = 3215025;
  v6[3] = 3215019;
  v6[4] = 3215027;
  sub_5EAF00(v5[a2]);
  sub_5EAF00(v6[a2]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 152) + 176))(*(_DWORD *)(dword_79359C + 152), 0);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(dword_79359C + 148) + 176))(0);
  return this;
}


//======================================================================
// sub_593210
// entry 00593210  size 788  status ok
//======================================================================

int __thiscall sub_593210(_DWORD *this)
{
  int result; // eax
  __int16 v2; // ax
  int v4; // [esp+8h] [ebp-20h]
  _WORD v5[6]; // [esp+Ch] [ebp-1Ch]
  int v6; // [esp+1Ch] [ebp-Ch]
  int v7; // [esp+20h] [ebp-8h]
  __int16 v8; // [esp+24h] [ebp-4h]

  v5[0] = 36;
  v5[1] = 21;
  v5[2] = 28;
  v5[3] = 21;
  v5[4] = 19;
  v8 = 3;
  v6 = *(_DWORD *)(dword_79359C + 152);
  v7 = *(_DWORD *)(dword_79359C + 148);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_793594 <= word_79358C )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, word_793594);
      if ( word_793594 <= word_793588 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_793594);
      if ( word_793594 == 9 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 156) + 112))(*(_DWORD *)(dword_79359C + 156));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 156) + 176))(
          *(_DWORD *)(dword_79359C + 156),
          0);
      }
      else if ( (!*(this + 8) || *(this + 8) == 2) && word_793594 == 17 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 51);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 50);
      }
      else if ( word_793594 > (__int16)v5[*(this + 8)] && !word_793590 )
      {
        v4 = (*(this + 8) == 4) + 5;
        while ( --v4 >= 0 )
        {
          v2 = sub_6436C0(*(_DWORD *)(dword_7935A8 + 4));
          sub_597C00(*(this + 8), v2);
          ++word_793590;
        }
        sub_591A70((_DWORD **)dword_79359C);
        v8 = 2;
      }
      if ( word_793594 >= word_79358C && word_793594 >= word_793588 )
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, v8);
    }
    else if ( result == 2 )
    {
      result = (int)this;
      if ( *(this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
        return sub_5FC420(0);
      }
    }
  }
  else
  {
    word_793594 = 0;
    word_793590 = 0;
    word_79358C = sub_5EB240(v6);
    word_793588 = sub_5EB240(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 50);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 51);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, v8);
  }
  return result;
}


//======================================================================
// sub_593530
// entry 00593530  size 74  status ok
//======================================================================

_DWORD *__thiscall sub_593530(_DWORD *this)
{
  sub_518900(this, 0, 0);
  *this = &FourCardPokerDiscardDialog::`vftable';
  *(this + 120) = 0;
  *(this + 121) = 0;
  *(this + 122) = 0;
  return this;
}


//======================================================================
// sub_593580
// entry 00593580  size 371  status ok
//======================================================================

int __thiscall sub_593580(int this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+24h] [ebp-2Ch]
  void (__thiscall ***v4)(_DWORD, int); // [esp+30h] [ebp-20h]
  void (__thiscall ***v5)(_DWORD, int); // [esp+3Ch] [ebp-14h]

  *(_DWORD *)this = &FourCardPokerDiscardDialog::`vftable';
  v5 = *(void (__thiscall ****)(_DWORD, int))(this + 480);
  if ( v5 )
  {
    if ( *(v5 - 1) )
      (**v5)(v5, 3);
    else
      operator delete(v5 - 1);
  }
  v4 = *(void (__thiscall ****)(_DWORD, int))(this + 484);
  if ( v4 )
  {
    if ( *(v4 - 1) )
      (**v4)(v4, 3);
    else
      operator delete(v4 - 1);
  }
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 488);
  if ( v3 )
  {
    if ( *(v3 - 1) )
      (**v3)(v3, 3);
    else
      operator delete(v3 - 1);
  }
  return sub_518980((void (__thiscall ****)(_DWORD, int))this);
}


//======================================================================
// sub_593700
// entry 00593700  size 327  status ok
//======================================================================

int __thiscall sub_593700(_DWORD *this)
{
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-1Ch]
  int j; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  for ( i = 0; i < *(this + 125) && !*(_BYTE *)(*(this + 120) + 488 * i + 476); ++i )
    ;
  if ( i == *(this + 125) )
  {
    v3 = (const CHAR *)sub_630F40("SID_FOURCARDPOKER_DISCARDING");
    v1 = (const CHAR *)sub_630F40("SID_FOURCARDPOKER_INVALID_DISCARD");
    return sub_62FF10(v1, v3, 0);
  }
  else
  {
    v7 = sub_597D30(dword_7935A8);
    for ( j = i; j < *(this + 125) - 1; ++j )
      *(_WORD *)(dword_7935A8 + 12 * v7 + 200 + 2 * j) = *(_WORD *)(dword_7935A8 + 12 * v7 + 200 + 2 * j + 2);
    *(_WORD *)(dword_7935A8 + 12 * v7 + 200 + 2 * *(this + 125) - 2) = 0;
    sub_5F8990(this);
    *(_DWORD *)(dword_7935A4 + 128) = 0;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
             *(_DWORD *)(dword_7935A4 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_593850
// entry 00593850  size 119  status ok
//======================================================================

int __stdcall sub_593850(__int16 a1)
{
  int v2; // [esp+4h] [ebp-1Ch]
  int v3; // [esp+8h] [ebp-18h]
  _DWORD v4[5]; // [esp+Ch] [ebp-14h]

  v4[0] = -1;
  v4[1] = 1;
  v4[2] = 2;
  v4[3] = 3;
  v4[4] = 0;
  v3 = sub_641280(a1);
  v2 = sub_641290(a1);
  if ( v3 == 14 )
    return 13 * v4[v2];
  else
    return 13 * v4[v2] + v3 - 1;
}


//======================================================================
// sub_5938D0
// entry 005938d0  size 53  status ok
//======================================================================

int __thiscall sub_5938D0(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
      return sub_5F72F0(a2);
  }
  return result;
}


//======================================================================
// sub_593910
// entry 00593910  size 1511  status ok
//======================================================================

int __thiscall sub_593910(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int result; // eax
  int v8; // eax
  int IsFixedSize; // eax
  _DWORD *v10; // [esp+8h] [ebp-44h]
  _DWORD *v11; // [esp+Ch] [ebp-40h]
  _DWORD *v12; // [esp+10h] [ebp-3Ch]
  int *v14; // [esp+18h] [ebp-34h]
  int v15; // [esp+20h] [ebp-2Ch]
  int *v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+2Ch] [ebp-20h]
  int *v18; // [esp+30h] [ebp-1Ch]
  int v19; // [esp+38h] [ebp-14h]
  int i; // [esp+3Ch] [ebp-10h]

  sub_5F83D0(100011, 0);
  v3 = sub_630F40("SID_POKER_SELECTDISARDS");
  sub_5F73E0(v3, 73, 0, 3);
  sub_5F7340(0, 20);
  sub_518AC0((_DWORD *)this, 1);
  sub_5FA880(0, 0, 335, 1, 1, 160, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 0, 335, 1, 1, 161, 1, 255, 255, 255, 0, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 444) + 68))(*(_DWORD *)(this + 444), 126, 166);
  *(_DWORD *)(this + 492) = a3;
  *(_DWORD *)(this + 500) = a2;
  v19 = *(_DWORD *)(this + 500);
  v4 = (488 * (unsigned __int64)(unsigned int)v19) >> 32 != 0 ? -1 : 488 * v19;
  v18 = (int *)operator new(__CFADD__(v4, 4) ? -1 : v4 + 4);
  if ( v18 )
  {
    *v18 = v19;
    `eh vector constructor iterator'(
      v18 + 1,
      0x1E8u,
      v19,
      _AFX_OLE_STATE::_AFX_OLE_STATE,
      _AFX_OLE_STATE::~_AFX_OLE_STATE);
    v12 = v18 + 1;
  }
  else
  {
    v12 = 0;
  }
  *(_DWORD *)(this + 480) = v12;
  v17 = *(_DWORD *)(this + 500);
  v5 = (464 * (unsigned __int64)(unsigned int)v17) >> 32 != 0 ? -1 : 464 * v17;
  v16 = (int *)operator new(__CFADD__(v5, 4) ? -1 : v5 + 4);
  if ( v16 )
  {
    *v16 = v17;
    `eh vector constructor iterator'(v16 + 1, 0x1D0u, v17, sub_5EC5A0, sub_5EC760);
    v11 = v16 + 1;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(this + 484) = v11;
  v15 = *(_DWORD *)(this + 500);
  v6 = (376 * (unsigned __int64)(unsigned int)v15) >> 32 != 0 ? -1 : 376 * v15;
  v14 = (int *)operator new(__CFADD__(v6, 4) ? -1 : v6 + 4);
  if ( v14 )
  {
    *v14 = v15;
    `eh vector constructor iterator'(v14 + 1, 0x178u, v15, sub_5EAAF0, sub_5EAC00);
    v10 = v14 + 1;
  }
  else
  {
    v10 = 0;
  }
  result = (int)v10;
  *(_DWORD *)(this + 488) = v10;
  for ( i = 0; i < *(_DWORD *)(this + 500); ++i )
  {
    sub_590C80(*(_DWORD *)(this + 480) + 488 * i, this, i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(this + 480) + 488 * i) + 200))(
      *(_DWORD *)(this + 480) + 488 * i,
      100001);
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 480) + 488 * i) + 112))(*(_DWORD *)(this + 480) + 488 * i);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(this + 480) + 488 * i) + 68))(
      *(_DWORD *)(this + 480) + 488 * i,
      61 * i + 16,
      42);
    sub_6026F0(i + 49);
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 480) + 488 * i) + 204))(*(_DWORD *)(this + 480) + 488 * i);
    sub_519900((void *)this, (_DWORD *)(*(_DWORD *)(this + 480) + 488 * i), 1);
    sub_5ECC60(55);
    sub_5ECCB0(25);
    sub_5EF310(48);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(this + 484) + 464 * i) + 68))(
      *(_DWORD *)(this + 484) + 464 * i,
      61 * i + 16,
      123);
    v8 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(this + 484) + 464 * i) + 180))(
      *(_DWORD *)(this + 484) + 464 * i,
      v8);
    sub_519960((void *)this, (_DWORD *)(*(_DWORD *)(this + 484) + 464 * i), 1);
    sub_5EAF00(101000);
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 488) + 376 * i) + 112))(*(_DWORD *)(this + 488) + 376 * i);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)(this + 488) + 376 * i) + 68))(
      *(_DWORD *)(this + 488) + 376 * i,
      61 * i + 21,
      42);
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)(*(_DWORD *)(this + 480) + 488 * i));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(this + 488) + 376 * i) + 108))(
      *(_DWORD *)(this + 488) + 376 * i,
      IsFixedSize + 1);
    sub_519900((void *)this, (_DWORD *)(*(_DWORD *)(this + 488) + 376 * i), 0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_593F00
// entry 00593f00  size 398  status ok
//======================================================================

int __thiscall sub_593F00(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v5; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  *(this + 124) = 0;
  for ( i = 0; i < *(this + 125); ++i )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(this + 120) + 488 * i) + 200))(*(this + 120) + 488 * i, 100001);
    v1 = sub_597D30(dword_7935A8);
    v5 = sub_593850(*(_WORD *)(dword_7935A8 + 12 * v1 + 200 + 2 * i));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(this + 120) + 488 * i) + 176))(*(this + 120) + 488 * i, v5);
    sub_6023D0(v5, v5, v5, v5);
    *(_BYTE *)(*(this + 120) + 488 * i + 476) = 0;
    v2 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(this + 121) + 464 * i) + 180))(*(this + 121) + 464 * i, v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(this + 122) + 376 * i) + 112))(*(this + 122) + 376 * i);
  }
  return sub_5F85D0(this);
}


//======================================================================
// sub_594090
// entry 00594090  size 73  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_594090(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &FourCardPokerPlayerDisplay::`vftable';
  for ( i = 0; i < 6; ++i )
    *((_DWORD *)this + i + 2) = 0;
  return this;
}


//======================================================================
// sub_5940E0
// entry 005940e0  size 163  status ok
//======================================================================

void __thiscall sub_5940E0(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &FourCardPokerPlayerDisplay::`vftable';
  for ( i = 0; i < 6; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_594190
// entry 00594190  size 194  status ok
//======================================================================

int __thiscall sub_594190(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp+4h] [ebp-20h]
  void *v6; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  result = (int)this;
  *(this + 1) = a2;
  for ( i = 0; i < 6; ++i )
  {
    v6 = operator new(0x178u);
    if ( v6 )
    {
      sub_5EAAF0(v6);
      v4 = v3;
    }
    else
    {
      v4 = 0;
    }
    *(this + i + 2) = v4;
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 64))(*(this + i + 2));
  }
  return result;
}


//======================================================================
// sub_594260
// entry 00594260  size 366  status ok
//======================================================================

int __thiscall sub_594260(int *this)
{
  int result; // eax
  unsigned __int8 v3; // [esp+7h] [ebp-15h]
  CImageDisplay *v4; // [esp+Ch] [ebp-10h]
  LONG left; // [esp+10h] [ebp-Ch]
  int j; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  if ( *(this + 1) != 4 )
  {
    sub_639110(*(this + 1));
    sub_646380(100);
    sub_639110(*(this + 1));
    sub_6464D0(0, 0);
    sub_5D9180(*(this + 1), 0);
  }
  for ( i = 0; i < 6; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 112))(*(this + i + 2));
  result = (int)this;
  if ( *(this + 1) == 4
    || *(_DWORD *)(*(_DWORD *)(dword_162EE80 + 4) + 4)
    || (v4 = (CImageDisplay *)sub_5DCB00(*(this + 1)),
        left = CImageDisplay::GetDisplayFormat(v4)->rcSource.left,
        result = left == 0,
        left)
    && (v3 = *(_BYTE *)(sub_5DCB00(*(this + 1)) + 1185), (result = v3) == 0)
    && (result = dword_7935A8, !*(_BYTE *)(dword_7935A8 + *(this + 1) + 274)) )
  {
    for ( j = 0; j < 6; ++j )
    {
      result = (unsigned __int16)sub_598420(*(this + 1), j);
      if ( (_WORD)result )
        result = sub_5920E0((_DWORD *)dword_79359C, *(this + 1), j);
    }
  }
  return result;
}


//======================================================================
// sub_5943D0
// entry 005943d0  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5943D0(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &FourCardPokerSayHumanLineScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_594400
// entry 00594400  size 384  status ok
//======================================================================

int __thiscall sub_594400(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  char v3; // [esp-4h] [ebp-48h]
  int v4; // [esp+0h] [ebp-44h]
  CImageDisplay *v7; // [esp+10h] [ebp-34h]
  int v8; // [esp+1Ch] [ebp-28h] BYREF
  int v9; // [esp+20h] [ebp-24h]
  int v10; // [esp+24h] [ebp-20h]
  double v11; // [esp+2Ch] [ebp-18h]
  double v12; // [esp+34h] [ebp-10h]
  int v13; // [esp+40h] [ebp-4h]

  v13 = sub_597D30(dword_7935A8);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      v3 = *(this + 8) == 0;
      v2 = sub_597D30(dword_7935A8);
      result = (unsigned __int8)sub_597CA0(v2, v3);
      if ( (_BYTE)result )
      {
        sub_5FC420(0);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                 *(_DWORD *)(dword_7935A4 + 4),
                 2,
                 0);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
    v9 = -1;
    if ( v13 != -1 )
    {
      v7 = (CImageDisplay *)sub_5DCB00(v13);
      if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
      {
        v8 = v13;
        v10 = -1;
        v11 = 0.0;
        v12 = 1.0;
        v4 = *(this + 8);
        if ( v4 )
        {
          if ( v4 == 1 )
            v9 = 2094;
        }
        else
        {
          v9 = sub_62FBF0(2) != 0 ? 2087 : 2051;
        }
      }
    }
    if ( v9 == -1 )
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    else
      return sub_639390(&v8, this, 0, 0);
  }
  return result;
}


//======================================================================
// sub_594670
// entry 00594670  size 109  status ok
//======================================================================

char *__thiscall sub_594670(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x1E8u, *((_DWORD *)this - 1), _AFX_OLE_STATE::~_AFX_OLE_STATE);
    if ( (a2 & 1) != 0 )
      operator delete(this - 4);
    return this - 4;
  }
  else
  {
    _AFX_OLE_STATE::~_AFX_OLE_STATE(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}


//======================================================================
// sub_5946E0
// entry 005946e0  size 109  status ok
//======================================================================

char *__thiscall sub_5946E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x1D0u, *((_DWORD *)this - 1), sub_5EC760);
    if ( (a2 & 1) != 0 )
      operator delete(this - 4);
    return this - 4;
  }
  else
  {
    sub_5EC760(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}


//======================================================================
// sub_594750
// entry 00594750  size 109  status ok
//======================================================================

char *__thiscall sub_594750(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x178u, *((_DWORD *)this - 1), sub_5EAC00);
    if ( (a2 & 1) != 0 )
      operator delete(this - 4);
    return this - 4;
  }
  else
  {
    sub_5EAC00(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}


//======================================================================
// sub_594830
// entry 00594830  size 132  status ok
//======================================================================

int sub_594830()
{
  _BYTE *v1; // [esp+4h] [ebp-1Ch]
  _BYTE *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x28u);
  if ( v2 )
    v1 = sub_592C60(v2);
  else
    v1 = 0;
  return sub_5FC420(v1);
}


//======================================================================
// sub_5948C0
// entry 005948c0  size 2325  status ok
//======================================================================

int sub_5948C0()
{
  int v1; // eax
  int v2; // [esp+0h] [ebp-138h]
  bool v4; // [esp+8h] [ebp-130h]
  int v5; // [esp+Ch] [ebp-12Ch]
  bool v7; // [esp+14h] [ebp-124h]
  int v8; // [esp+18h] [ebp-120h]
  bool v10; // [esp+20h] [ebp-118h]
  int v11; // [esp+24h] [ebp-114h]
  bool v13; // [esp+2Ch] [ebp-10Ch]
  bool v14; // [esp+30h] [ebp-108h]
  bool v15; // [esp+34h] [ebp-104h]
  bool v16; // [esp+38h] [ebp-100h]
  bool v17; // [esp+3Ch] [ebp-FCh]
  CImageDisplay *v18; // [esp+48h] [ebp-F0h]
  CImageDisplay *v19; // [esp+54h] [ebp-E4h]
  CImageDisplay *v20; // [esp+60h] [ebp-D8h]
  CImageDisplay *v21; // [esp+6Ch] [ebp-CCh]
  CImageDisplay *v22; // [esp+78h] [ebp-C0h]
  CImageDisplay *v23; // [esp+84h] [ebp-B4h]
  CImageDisplay *v24; // [esp+90h] [ebp-A8h]
  CImageDisplay *v25; // [esp+9Ch] [ebp-9Ch]
  CImageDisplay *v26; // [esp+A8h] [ebp-90h]
  CImageDisplay *v27; // [esp+B4h] [ebp-84h]
  CImageDisplay *v28; // [esp+C0h] [ebp-78h]
  CImageDisplay *v29; // [esp+CCh] [ebp-6Ch]
  __int64 v30; // [esp+E0h] [ebp-58h] BYREF
  int v31; // [esp+E8h] [ebp-50h]
  int v32; // [esp+ECh] [ebp-4Ch]
  int IsInfiniteMode; // [esp+F0h] [ebp-48h]
  int v34; // [esp+F4h] [ebp-44h]
  _DWORD v35[4]; // [esp+F8h] [ebp-40h] BYREF
  double v36; // [esp+108h] [ebp-30h]
  double v37; // [esp+110h] [ebp-28h]
  int v38; // [esp+118h] [ebp-20h]
  int v39; // [esp+11Ch] [ebp-1Ch]
  double v40; // [esp+120h] [ebp-18h]
  double v41; // [esp+128h] [ebp-10h]
  int v42; // [esp+130h] [ebp-8h]
  int v43; // [esp+134h] [ebp-4h]

  v30 = sub_64C8A0(0, 0);
  v38 = -1;
  v32 = -1;
  v40 = 0.0;
  v41 = 1.0;
  v43 = sub_597D30(dword_7935A8);
  v39 = -1;
  v42 = -1;
  v31 = -1;
  v34 = 0;
  IsInfiniteMode = CMFCRibbonProgressBar::IsInfiniteMode((CMFCRibbonProgressBar *)dword_7935A8);
  switch ( unknown_libname_573(dword_7935A8) )
  {
    case 0:
      v38 = 2094;
      v41 = 0.75;
      break;
    case 1:
      v38 = 2051;
      v41 = 0.75;
      break;
    case 2:
      sub_5DCB00(v43);
      sub_5D6020(&v30);
      if ( *(int *)(sub_5DCB00(v43) + 1192) <= 3 || sub_62FBF0(2) )
      {
        if ( *(int *)(sub_5DCB00(v43) + 1192) >= -3 || sub_62FBF0(2) )
        {
          if ( *(_BYTE *)(v43 + dword_7935A8 + 279) )
          {
            v27 = (CImageDisplay *)sub_5DCB00(v43);
            v15 = CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 3;
            v38 = v15 ? 1043 : 1022;
            v41 = 1.0;
          }
          else if ( (int)v30 >= 0 )
          {
            if ( (int)v30 > 0 )
            {
              v25 = (CImageDisplay *)sub_5DCB00(v43);
              v13 = CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 2
                 || CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 3;
              v38 = v13 ? 1008 : 1028;
              v41 = 0.5;
            }
          }
          else
          {
            v26 = (CImageDisplay *)sub_5DCB00(v43);
            v14 = CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 3;
            v38 = v14 ? 1000 : 1026;
            v41 = 0.5;
          }
        }
        else
        {
          v28 = (CImageDisplay *)sub_5DCB00(v43);
          v16 = CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 3;
          v38 = v16 ? 1033 : 1023;
          v41 = 0.75;
        }
      }
      else
      {
        v29 = (CImageDisplay *)sub_5DCB00(v43);
        v17 = CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 3;
        v38 = v17 ? 1044 : 1024;
        v41 = 0.75;
      }
      break;
    case 3:
      v42 = sub_5DAC90(dword_7935A4);
      v31 = sub_5DADA0(dword_7935A4);
      if ( !(unsigned __int8)sub_5DB190(dword_7935A4) || v42 == -1 )
      {
        if ( v42 != -1 )
        {
          sub_5DCB00(v42);
          sub_5D6020(&v30);
        }
        if ( v42 == -1 || (int)v30 <= 0 || sub_62FBF0(2) )
        {
          if ( v31 != -1 )
          {
            v20 = (CImageDisplay *)sub_5DCB00(v31);
            if ( CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 3 )
            {
              v5 = -1;
            }
            else
            {
              v5 = v31;
            }
            IsInfiniteMode = v5;
            v19 = (CImageDisplay *)sub_5DCB00(v31);
            v4 = CImageDisplay::GetDisplayFormat(v19)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v19)->rcSource.left == 3;
            v38 = v4 ? 1036 : 1011;
            v41 = 0.5;
          }
        }
        else
        {
          v22 = (CImageDisplay *)sub_5DCB00(v42);
          if ( CImageDisplay::GetDisplayFormat(v22)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v22)->rcSource.left == 3 )
          {
            v8 = -1;
          }
          else
          {
            v8 = v42;
          }
          IsInfiniteMode = v8;
          v21 = (CImageDisplay *)sub_5DCB00(v42);
          v7 = CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 3;
          v38 = v7 ? 1035 : 1010;
          v41 = 0.5;
        }
      }
      else
      {
        v24 = (CImageDisplay *)sub_5DCB00(v42);
        if ( CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 3 )
        {
          v11 = -1;
        }
        else
        {
          v11 = v42;
        }
        IsInfiniteMode = v11;
        v23 = (CImageDisplay *)sub_5DCB00(v42);
        v10 = CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 3;
        v38 = v10 ? 1042 : 1021;
        v41 = 1.0;
      }
      break;
    case 4:
      v39 = 170000;
      break;
    case 5:
      v39 = 170006;
      break;
    default:
      break;
  }
  sub_5994C0(-1, -1);
  if ( IsInfiniteMode == 4 )
  {
    if ( v39 == -1 )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    return sub_5CD7C0(v39, *(_DWORD *)(dword_162EE80 + 4), 0);
  }
  else
  {
    if ( v38 == -1 || !sub_636730(dword_162EE84) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( IsInfiniteMode > -1 )
    {
      v18 = (CImageDisplay *)sub_5DCB00(IsInfiniteMode);
      if ( CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 3 )
      {
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    if ( IsInfiniteMode == -1 )
      v2 = sub_636C50(dword_162EE84);
    else
      v2 = IsInfiniteMode;
    v35[0] = v2;
    v35[1] = v38;
    v35[2] = v32;
    v36 = v40;
    v37 = v41;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
    v1 = sub_637810(2);
    return sub_639390(v35, *(_DWORD *)(dword_162EE80 + 4), v1, 1);
  }
}


//======================================================================
// sub_5951F0
// entry 005951f0  size 779  status ok
//======================================================================

int __thiscall sub_5951F0(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  CImageDisplay *v11; // [esp+18h] [ebp-30h]
  __int64 v12; // [esp+38h] [ebp-10h] BYREF
  __int64 v13; // [esp+40h] [ebp-8h] BYREF

  v13 = sub_64C8A0(0, 0);
  v12 = sub_64C8A0(0, 0);
  v11 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
      sub_57AB80(dword_793578, 11, (int)&unk_74C170);
    else
      sub_57AE30(dword_793578);
    if ( (unsigned __int8)sub_598470(a2) )
      return sub_5DB7D0(0, 175);
    v2 = sub_5DCB00(a2);
    v3 = sub_5D5A50(v2);
    if ( v3 >= (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4) )
    {
      return sub_5DB7D0(0, 175);
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_7935A4) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return sub_595790(this);
    }
    else
    {
      v5 = sub_5DCB00(a2);
      return sub_5DBB70(v5);
    }
  }
  else if ( *(this + 7) )
  {
    *(this + 7) = 0;
    sub_57AE30(dword_793578);
    v7 = sub_5DCB00(a2);
    v8 = sub_5D5A50(v7);
    if ( v8 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4) )
    {
      if ( (unsigned __int8)sub_5DA7B0(dword_7935A4) )
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      else
        sub_5D9570(a2);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
    else
    {
      sub_58FEF0(a2, (int)&v12, (int)&v13);
      if ( (int)v13 > 0 )
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_7935A8 + 12 * a2 + 16) + 196))(
          *(_DWORD *)(dword_7935A8 + 12 * a2 + 16),
          &v13,
          0,
          1);
      if ( (int)v12 > 0 )
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_7935A8 + 12 * a2 + 12) + 196))(
          *(_DWORD *)(dword_7935A8 + 12 * a2 + 12),
          &v12,
          0,
          1);
      *(_BYTE *)(sub_597D00(dword_7935A8) + 1184) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
               *(_DWORD *)(dword_7935A4 + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 7) = 1;
    v6 = sub_637810(2);
    return sub_5DA360(v6);
  }
}


//======================================================================
// sub_595500
// entry 00595500  size 109  status ok
//======================================================================

int __stdcall sub_595500(int a1)
{
  sub_599570(a1, 1);
  sub_591A70((_DWORD **)dword_79359C);
  sub_598810(a1);
  *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7935A4 + 4) + 4))(*(_DWORD *)(dword_7935A4 + 4), 1);
}


//======================================================================
// sub_595570
// entry 00595570  size 369  status ok
//======================================================================

int __thiscall sub_595570(_BYTE *this, int a2)
{
  int v3; // eax
  CImageDisplay *v6; // [esp+8h] [ebp-10h]
  char v7; // [esp+17h] [ebp-1h]

  v6 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(dword_793578, 11, (int)&unk_74D980);
      sub_599590(a2);
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    sub_599570(a2, 1);
    return sub_591FA0(dword_79359C);
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 8) )
    {
      *(this + 8) = 0;
      v7 = sub_590850(a2);
      sub_5997F0(a2, v7);
      sub_5994C0(v7 != 0, a2);
      sub_5994A0(a2, 1);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
               *(_DWORD *)(dword_7935A4 + 4),
               2,
               0);
    }
    else
    {
      *(this + 8) = 1;
      v3 = sub_637810(2);
      return sub_5DA360(v3);
    }
  }
}


//======================================================================
// sub_5956F0
// entry 005956f0  size 154  status ok
//======================================================================

int __thiscall sub_5956F0(_BYTE *this, int a2)
{
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
             *(_DWORD *)(dword_7935A4 + 4),
             500,
             a2);
  sub_599210(dword_7935A8, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
           *(_DWORD *)(dword_7935A4 + 4),
           1,
           0);
}


//======================================================================
// sub_595790
// entry 00595790  size 1250  status ok
//======================================================================

int __thiscall sub_595790(_BYTE *this)
{
  CImageDisplay *v5; // [esp+1Ch] [ebp-3Ch]
  CImageDisplay *v6; // [esp+28h] [ebp-30h]
  CImageDisplay *v7; // [esp+34h] [ebp-24h]
  CImageDisplay *v8; // [esp+44h] [ebp-14h]
  int v9; // [esp+54h] [ebp-4h]
  int v10; // [esp+54h] [ebp-4h]
  int v11; // [esp+54h] [ebp-4h]

  sub_591A70((_DWORD **)dword_79359C);
  if ( unknown_libname_573(dword_7935A8) != -1 )
    return sub_5948C0();
  if ( *(this + 4) )
  {
    v9 = sub_5981B0(dword_7935A8);
    if ( *((_BYTE *)dword_162EE84 + 37) && v9 != -1 )
    {
      v8 = (CImageDisplay *)sub_5DCB00(v9);
      if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v9) + 1185) = 1;
        v9 = sub_5981B0(dword_7935A8);
      }
    }
    if ( v9 == -1 )
    {
      if ( !*(this + 11) )
      {
        sub_599360(dword_7935A8);
        *(this + 11) = 1;
      }
      if ( *(this + 5) )
      {
        if ( (unsigned __int8)sub_5986C0(dword_7935A8) )
        {
          sub_5F2870(dword_162EE80);
          sub_599450(-1, 0);
          return sub_594830();
        }
        else
        {
          v10 = sub_598290(dword_7935A8);
          if ( v10 == -1 )
          {
            if ( *(this + 6) )
            {
              v11 = sub_597FE0(dword_7935A8);
              if ( v11 == -1 )
              {
                sub_599450(-1, 0);
                if ( !(unsigned __int8)sub_5DA7B0(dword_7935A4) || *(this + 9) )
                {
                  if ( (unsigned __int8)sub_5997A0(4) )
                  {
                    if ( *((_BYTE *)dword_162EE84 + 37) )
                      return sub_5956F0(this, 200);
                    else
                      return sub_5921B0((void *)dword_79359C);
                  }
                  else
                  {
                    sub_599570(4, 1);
                    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                             *(_DWORD *)(dword_7935A4 + 4),
                             1,
                             0);
                  }
                }
                else
                {
                  *(this + 9) = 1;
                  sub_5994C0(3, -1);
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                           *(_DWORD *)(dword_7935A4 + 4),
                           1,
                           0);
                }
              }
              else
              {
                sub_599450(v11, 0);
                if ( *(this + 10) || !(unsigned __int8)sub_599A70(v11) )
                {
                  *(this + 10) = 0;
                  sub_595500(v11);
                  v5 = (CImageDisplay *)sub_5DCB00(v11);
                  if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
                    || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
                  {
                    sub_5994C0(2, -1);
                  }
                  else
                  {
                    sub_5994C0(2, v11);
                  }
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                           *(_DWORD *)(dword_7935A4 + 4),
                           1,
                           0);
                }
                else
                {
                  sub_599570(v11, 1);
                  *(this + 10) = 1;
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                           *(_DWORD *)(dword_7935A4 + 4),
                           1,
                           0);
                }
              }
            }
            else
            {
              *(this + 6) = 1;
              sub_599570(4, 1);
              return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                       *(_DWORD *)(dword_7935A4 + 4),
                       1,
                       0);
            }
          }
          else
          {
            *(_BYTE *)(dword_7935A8 + 278) = 0;
            v6 = (CImageDisplay *)sub_5DCB00(v10);
            if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
            {
              sub_599450(v10, 1);
            }
            else
            {
              sub_599450(v10, 0);
            }
            return sub_595570(this, v10);
          }
        }
      }
      else
      {
        *(this + 5) = 1;
        sub_5994C0(5, 4);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                 *(_DWORD *)(dword_7935A4 + 4),
                 1,
                 0);
      }
    }
    else
    {
      v7 = (CImageDisplay *)sub_5DCB00(v9);
      if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
      {
        sub_599450(v9, 1);
      }
      else
      {
        sub_599450(v9, 0);
      }
      return sub_5951F0(this, v9);
    }
  }
  else
  {
    *(this + 4) = 1;
    sub_5994C0(4, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
             *(_DWORD *)(dword_7935A4 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_595CB0
// entry 00595cb0  size 162  status ok
//======================================================================

_DWORD *__thiscall sub_595CB0(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &FourCardPokerRoom::`vftable';
  sub_5F1AD0(65001);
  dword_7935A4 = (int)this;
  dword_793598 = 0;
  dword_79359C = 0;
  dword_7935A0 = 0;
  dword_7935A8 = 0;
  *(this + 32) = 0;
  return this;
}


//======================================================================
// sub_595D60
// entry 00595d60  size 324  status ok
//======================================================================

int __thiscall sub_595D60(_DWORD *this)
{
  *this = &FourCardPokerRoom::`vftable';
  dword_7935A4 = 0;
  if ( dword_793598 )
    (**(void (__thiscall ***)(int, int))dword_793598)(dword_793598, 1);
  dword_793598 = 0;
  if ( dword_79359C )
    (**(void (__thiscall ***)(int, int))dword_79359C)(dword_79359C, 1);
  dword_79359C = 0;
  if ( dword_7935A0 )
    (**(void (__thiscall ***)(int, int))dword_7935A0)(dword_7935A0, 1);
  dword_7935A0 = 0;
  if ( dword_7935A8 )
    (**(void (__thiscall ***)(int, int))dword_7935A8)(dword_7935A8, 1);
  dword_7935A8 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_595EB0
// entry 00595eb0  size 99  status ok
//======================================================================

int __thiscall sub_595EB0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  char v4; // al

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(dword_79359C + 76) )
      {
        v3 = sub_597D30(dword_7935A8);
        v4 = sub_590850(v3);
        return sub_592690(v4);
      }
    }
  }
  return result;
}


//======================================================================
// sub_595F20
// entry 00595f20  size 139  status ok
//======================================================================

int __thiscall sub_595F20(void *this)
{
  int v1; // eax
  int v2; // eax

  v1 = sub_597D30(dword_7935A8);
  if ( (unsigned __int8)sub_598470(v1) )
    *(_BYTE *)(sub_597D00(dword_7935A8) + 1184) = 1;
  else
    *(_BYTE *)(sub_597D00(dword_7935A8) + 1185) = 1;
  v2 = sub_597D00(dword_7935A8);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 20))(v2, v2);
  sub_5DB890(this);
  return sub_595790((_BYTE *)dword_7935A0);
}


//======================================================================
// sub_595FB0
// entry 00595fb0  size 80  status ok
//======================================================================

int __thiscall sub_595FB0(void *this, char a2)
{
  sub_599520(a2 == 0);
  sub_637610(dword_162EE84);
  sub_5DB9B0(dword_7935A4);
  sub_599210(dword_7935A8, this);
  return sub_5956F0((_BYTE *)dword_7935A0, 0);
}


//======================================================================
// sub_596010
// entry 00596010  size 50  status ok
//======================================================================

int __stdcall sub_596010(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 440;
  v2[1] = 98;
  v2[2] = 527;
  v2[3] = 12;
  return v2[a1];
}


//======================================================================
// sub_596050
// entry 00596050  size 50  status ok
//======================================================================

int __stdcall sub_596050(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 267;
  v2[1] = 267;
  v2[2] = 81;
  v2[3] = 81;
  return v2[a1];
}


//======================================================================
// sub_596090
// entry 00596090  size 35  status ok
//======================================================================

int sub_596090()
{
  if ( dword_7935A8 )
    return sub_597D00(dword_7935A8);
  else
    return 0;
}


//======================================================================
// sub_5960C0
// entry 005960c0  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_5960C0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+28h] [ebp-4h]

  v4 = 306;
  v5[0] = 246;
  v5[1] = 150;
  v5[2] = 246;
  v5[3] = 458;
  v5[4] = 76;
  v5[5] = 5;
  v5[6] = 74;
  if ( a2 >= 4 )
  {
    v6 = 0;
    sub_5E9F20((char)"false", "..\\Casino\\fourcardpokerroom.cpp", 133);
    *a1 = 0;
    a1[1] = v6;
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
// sub_596160
// entry 00596160  size 18  status ok
//======================================================================

int __stdcall sub_596160(int a1)
{
  return 1046;
}


//======================================================================
// sub_596180
// entry 00596180  size 198  status ok
//======================================================================

int __stdcall sub_596180(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // ecx
  int *v4; // eax
  int v5; // edx
  int v6; // [esp+4h] [ebp-28h]
  unsigned __int8 v7; // [esp+Bh] [ebp-21h]
  _BYTE v8[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+1Ch] [ebp-10h]
  __int64 v11; // [esp+20h] [ebp-Ch]
  int i; // [esp+28h] [ebp-4h]

  v7 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v7;
  if ( !v7 )
  {
    v11 = sub_64C8A0(0, 0);
    *a2 = v11;
    result = HIDWORD(v11);
    a2[1] = HIDWORD(v11);
    for ( i = 0; i < 3; ++i )
    {
      v6 = *(_DWORD *)(dword_7935A8 + 4 * (i + 3 * a1) + 8);
      v3 = *(_DWORD *)(v6 + 32 * a1 + 76);
      v9 = *(_DWORD *)(v6 + 32 * a1 + 72);
      v10 = v3;
      v4 = (int *)sub_64C5C0(v8, v9, v3);
      v5 = *v4;
      result = v4[1];
      *a2 = v5;
      a2[1] = result;
    }
  }
  return result;
}


//======================================================================
// sub_596250
// entry 00596250  size 16  status ok
//======================================================================

int sub_596250()
{
  return 12;
}


//======================================================================
// sub_596260
// entry 00596260  size 367  status ok
//======================================================================

int __stdcall sub_596260(int a1)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-18h]
  CImageDisplay *v4; // [esp+10h] [ebp-10h]

  result = sub_5D7F40(a1);
  if ( dword_7935A8 )
  {
    result = sub_5981B0(dword_7935A8);
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
            result = sub_599050(v3);
        }
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    result = a1;
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      if ( dword_79359C )
      {
        if ( dword_7935A8 )
        {
          if ( *(_DWORD *)(dword_79359C + 148) )
          {
            if ( *(_DWORD *)(dword_79359C + 152) )
            {
              result = sub_5F54A0(*(_DWORD *)(dword_79359C + 148));
              if ( (_BYTE)result
                || (result = (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_79359C + 152)), (_BYTE)result) )
              {
                *(_BYTE *)(dword_7935A8 + 278) = 1;
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
// sub_5963D0
// entry 005963d0  size 258  status ok
//======================================================================

int __stdcall sub_5963D0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // eax
  CImageDisplay *v9; // [esp+Ch] [ebp-Ch]

  v2 = sub_597D30(dword_7935A8);
  if ( sub_5DCB00(v2) )
  {
    v3 = sub_597D30(dword_7935A8);
    v9 = (CImageDisplay *)sub_5DCB00(v3);
    if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
    {
      switch ( a1 )
      {
        case 3231002:
          v4 = sub_597D30(dword_7935A8);
          sub_599050(v4);
          break;
        case 3231003:
          v5 = sub_597D30(dword_7935A8);
          return sub_597CA0(v5, 1);
        case 3231004:
          v7 = sub_597D30(dword_7935A8);
          return sub_597CA0(v7, 0);
      }
    }
  }
  return sub_5DC7D0(a1, a2);
}


//======================================================================
// sub_5964E0
// entry 005964e0  size 78  status ok
//======================================================================

int __thiscall sub_5964E0(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_5DB890(this);
  sub_591A70((_DWORD **)dword_79359C);
  sub_599210(dword_7935A8, this);
  return sub_595790((_BYTE *)dword_7935A0);
}


//======================================================================
// sub_596530
// entry 00596530  size 170  status ok
//======================================================================

int __thiscall sub_596530(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  char v4; // al
  int v5; // eax
  char v6; // al
  int result; // eax

  v3 = sub_5FB350(50);
  v4 = sub_600230(v3);
  sub_599550(v4);
  v5 = sub_5FB350(51);
  v6 = sub_600230(v5);
  sub_599520(v6);
  if ( (unsigned __int8)sub_5DA830(dword_7935A4) )
    return sub_591A70((_DWORD **)dword_79359C);
  sub_637610(dword_162EE84);
  result = sub_591A70((_DWORD **)dword_79359C);
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_599210(dword_7935A8, this);
    return sub_595790((_BYTE *)dword_7935A0);
  }
  return result;
}


//======================================================================
// sub_5965E0
// entry 005965e0  size 77  status ok
//======================================================================

int __thiscall sub_5965E0(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(dword_79359C + 4 * i + 24) != a2 )
      sub_5CD330(*(_DWORD *)(dword_79359C + 4 * i + 24), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_596630
// entry 00596630  size 36  status ok
//======================================================================

int __thiscall sub_596630(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_596660
// entry 00596660  size 489  status ok
//======================================================================

int __thiscall sub_596660(_DWORD **this)
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
  v13 = operator new(0x130u);
  if ( v13 )
    v6 = sub_597AC0(v13);
  else
    v6 = 0;
  dword_7935A8 = v6;
  sub_5984F0();
  v12 = (_AFX_OLE_STATE *)operator new(8u);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_793598 = (int)v5;
  v11 = (ATL::CCRTHeap *)operator new(0xA0u);
  if ( v11 )
    v4 = sub_590CB0(v11);
  else
    v4 = 0;
  dword_79359C = (int)v4;
  sub_5911E0((int)v4);
  v10 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_7935A0 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &FourCardPokerRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8);
  return sub_5956F0((_BYTE *)dword_7935A0, 0);
}


//======================================================================
// sub_596850
// entry 00596850  size 502  status ok
//======================================================================

int __thiscall sub_596850(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  int result; // eax
  int v11; // [esp+4h] [ebp-38h]
  int v12; // [esp+8h] [ebp-34h]
  _DWORD *v13; // [esp+Ch] [ebp-30h]
  _DWORD *v15; // [esp+14h] [ebp-28h]
  int i; // [esp+1Ch] [ebp-20h]
  _DWORD v17[2]; // [esp+20h] [ebp-1Ch]
  _DWORD v18[2]; // [esp+28h] [ebp-14h]
  int v19; // [esp+38h] [ebp-4h]

  v17[0] = "SID_CASINO_DEALERVOICE";
  v17[1] = "SID_CASINO_CONTINUEBUTTON";
  v18[0] = 50;
  v18[1] = 51;
  for ( i = 0; i < 2; ++i )
  {
    v5 = sub_630F40(v17[i]);
    v6 = sub_5F9EF0(0, v18[i], 3200201, 20, 20 * i + 85, 1, v5, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v6);
  }
  v7 = (char *)sub_630F40("SID_GENERIC_HELP");
  v8 = sub_5FA790(0, 10, v7, 72, 240, 84, 262, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v8);
  v15 = operator new(0x1D0u);
  v19 = 0;
  if ( v15 )
  {
    sub_5EC5A0(v15);
    *v15 = &FourCardPokerSettingsHelpText::`vftable';
    v13 = v15;
  }
  else
  {
    v13 = 0;
  }
  v19 = -1;
  v9 = sub_5FA5B0(v13, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v9);
  if ( (unsigned __int8)sub_5986A0(dword_7935A8) )
  {
    v12 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 244))(v12);
  }
  result = (unsigned __int8)sub_599780(dword_7935A8);
  if ( (_BYTE)result )
  {
    v11 = sub_5FB350(51);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 244))(v11);
  }
  *(this + 124) = 0;
  return result;
}


//======================================================================
// sub_596A50
// entry 00596a50  size 22  status ok
//======================================================================

int sub_596A50()
{
  return sub_5986A0(dword_7935A8);
}


//======================================================================
// sub_596A70
// entry 00596a70  size 49  status ok
//======================================================================

int __thiscall sub_596A70(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3231001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_596AB0
// entry 00596ab0  size 194  status ok
//======================================================================

int __stdcall sub_596AB0(int a1, int a2)
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
// sub_596B80
// entry 00596b80  size 35  status ok
//======================================================================

char __thiscall sub_596B80(void *this)
{
  if ( dword_7935A8 )
    return sub_599160(dword_7935A8, this);
  else
    return 1;
}


//======================================================================
// sub_596BB0
// entry 00596bb0  size 207  status ok
//======================================================================

void __thiscall sub_596BB0(void *this, int a2)
{
  int v2; // [esp-8h] [ebp-1Ch]
  int v3; // [esp-4h] [ebp-18h]
  void *v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]
  int i; // [esp+10h] [ebp-4h]

  v4 = this;
  for ( i = 0; i < 3; ++i )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, void *))(**(_DWORD **)(dword_7935A8 + 4 * (i + 3 * a2) + 8) + 180))(
           *(_DWORD *)(dword_7935A8 + 4 * (i + 3 * a2) + 8),
           v4) )
    {
      v5 = *(_DWORD *)(dword_7935A8 + 4 * (i + 3 * a2) + 8);
      v3 = *(_DWORD *)(v5 + 32 * a2 + 76);
      v2 = *(_DWORD *)(v5 + 32 * a2 + 72);
      sub_5DCB00(a2);
      sub_5D5CF0(v2, v3);
    }
    sub_5CB9B0(*(_DWORD *)(dword_7935A8 + 4 * (i + 3 * a2) + 8));
  }
}


//======================================================================
// sub_596C80
// entry 00596c80  size 119  status ok
//======================================================================

int __stdcall sub_596C80(int a1)
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
  sub_597D50(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_597D50(a1);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_596D00
// entry 00596d00  size 115  status ok
//======================================================================

int __stdcall sub_596D00(int a1)
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
  sub_597D50(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_597D50(-1);
  *(_DWORD *)(v5 + 12) = v3;
  *(_DWORD *)(v5 + 16) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_596D90
// entry 00596d90  size 743  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_596D90(_DWORD *this)
{
  const struct tagVIDEOINFO *result; // eax
  _DWORD *v2; // [esp+8h] [ebp-50h]
  int v4; // [esp+10h] [ebp-48h]
  CImageDisplay *v6; // [esp+18h] [ebp-40h]
  _DWORD *v7; // [esp+24h] [ebp-34h]
  int j; // [esp+2Ch] [ebp-2Ch]
  int i; // [esp+30h] [ebp-28h]
  int v10; // [esp+34h] [ebp-24h]
  int v11; // [esp+38h] [ebp-20h]
  _WORD v12[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  int v13; // [esp+48h] [ebp-10h]
  int v14; // [esp+54h] [ebp-4h]

  v4 = *(this + 5);
  if ( v4 == 1 )
    return (const struct tagVIDEOINFO *)sub_595790((_BYTE *)dword_7935A0);
  if ( v4 != 2 )
  {
    if ( v4 != 500 )
      return (const struct tagVIDEOINFO *)sub_5E9F20((char)"false", "..\\Casino\\fourcardpokerroom.cpp", 428);
    sub_599210(dword_7935A8);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
    return (const struct tagVIDEOINFO *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
  }
  v13 = sub_597D30(dword_7935A8);
  if ( *(_BYTE *)(v13 + dword_7935A8 + 274) )
    return (const struct tagVIDEOINFO *)(*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                                          *(_DWORD *)(dword_7935A4 + 4),
                                          1,
                                          0);
  v6 = (CImageDisplay *)sub_5DCB00(v13);
  result = CImageDisplay::GetDisplayFormat(v6);
  if ( result->rcSource.left != 2 )
  {
    result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(v6)->rcSource.left;
    if ( result != (const struct tagVIDEOINFO *)3 )
    {
      for ( i = 0; i < 4; ++i )
        v12[i] = 0;
      v10 = (v13 == 4) + 5;
      sub_462A40(4, dword_7935A8 + 12 * v13 + 200, v10, (int)v12);
      v11 = sub_4629C0(dword_7935A8 + 12 * v13 + 200, v10, (int)v12, 4);
      if ( v11 == -1 )
        sub_5E9F20((char)"index != -1", "..\\Casino\\fourcardpokerroom.cpp", 412);
      for ( j = v11; j < 5; ++j )
        *(_WORD *)(dword_7935A8 + 12 * v13 + 200 + 2 * j) = *(_WORD *)(dword_7935A8 + 12 * v13 + 200 + 2 * j + 2);
      *(_WORD *)(dword_7935A8 + 12 * v13 + 210) = 0;
      return (const struct tagVIDEOINFO *)(*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4)
                                                                                     + 8))(
                                            *(_DWORD *)(dword_7935A4 + 4),
                                            1,
                                            0);
    }
  }
  if ( !*(_DWORD *)(dword_7935A4 + 128) )
  {
    v7 = operator new(0x1F8u);
    v14 = 0;
    if ( v7 )
      v2 = sub_593530(v7);
    else
      v2 = 0;
    v14 = -1;
    *(_DWORD *)(dword_7935A4 + 128) = v2;
    sub_593910(*(_DWORD *)(dword_7935A4 + 128), 5, 1);
    return (const struct tagVIDEOINFO *)sub_593F00(*(_DWORD **)(dword_7935A4 + 128));
  }
  return result;
}


//======================================================================
// sub_597080
// entry 00597080  size 288  status ok
//======================================================================

void __thiscall sub_597080(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int i; // [esp+4h] [ebp-1Ch]
  int v6; // [esp+8h] [ebp-18h]
  _DWORD v7[3]; // [esp+Ch] [ebp-14h]
  int v8; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]

  if ( dword_163068C )
  {
    v6 = sub_5FB350(50);
    v7[0] = 0;
    v7[1] = sub_5FB350(51);
    v7[2] = 1;
    v8 = 2;
    v9 = -1;
    for ( i = 0; i < v8; ++i )
    {
      if ( v7[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v7[2 * i - 1] + 132))(v7[2 * i - 1], a2) )
      {
        v9 = v7[2 * i];
        break;
      }
    }
    if ( v9 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else if ( v9 )
    {
      if ( v9 == 1 )
      {
        v3 = sub_630F40("SID_CASINO_HELP_CONTINUEBUTTON");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
    }
    else
    {
      v2 = sub_630F40("SID_CASINO_HELP_DEALERVOICE");
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
    }
  }
}


//======================================================================
// sub_5971D0
// entry 005971d0  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5971D0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &FourCardPokerRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_597240
// entry 00597240  size 188  status ok
//======================================================================

void *__stdcall sub_597240(int a1)
{
  int v1; // eax

  if ( (dword_7935AC & 1) == 0 )
  {
    dword_7935AC |= 1u;
    dword_74F7B4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_74F7B8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3231001 )
    return &unk_74F7B0;
  else
    return 0;
}


//======================================================================
// sub_597300
// entry 00597300  size 16  status ok
//======================================================================

void *sub_597300()
{
  return &unk_74F228;
}


//======================================================================
// sub_597310
// entry 00597310  size 16  status ok
//======================================================================

void *sub_597310()
{
  return &unk_74F2C8;
}


//======================================================================
// sub_597340
// entry 00597340  size 51  status ok
//======================================================================

char __stdcall sub_597340(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_FOURCARDPOKER");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_597380
// entry 00597380  size 94  status ok
//======================================================================

char __stdcall sub_597380(_DWORD *a1, int a2)
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
// sub_5973E0
// entry 005973e0  size 16  status ok
//======================================================================

int sub_5973E0()
{
  return 3231000;
}


//======================================================================
// sub_5973F0
// entry 005973f0  size 16  status ok
//======================================================================

void *sub_5973F0()
{
  return &unk_74F7BC;
}


//======================================================================
// sub_597430
// entry 00597430  size 16  status ok
//======================================================================

int sub_597430()
{
  return 11;
}


//======================================================================
// sub_597440
// entry 00597440  size 16  status ok
//======================================================================

const char *sub_597440()
{
  return "FourCardPoker";
}


//======================================================================
// sub_597450
// entry 00597450  size 16  status ok
//======================================================================

int sub_597450()
{
  return 20;
}


//======================================================================
// sub_597470
// entry 00597470  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_597470(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(6);
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
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)6 )
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
// sub_5975A0
// entry 005975a0  size 16  status ok
//======================================================================

int sub_5975A0()
{
  return 25;
}


//======================================================================
// sub_5975B0
// entry 005975b0  size 261  status ok
//======================================================================

char __stdcall sub_5975B0(int a1, int a2)
{
  if ( a2 == 3231000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(6, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 6, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3231000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 6, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_5976D0
// entry 005976d0  size 41  status ok
//======================================================================

char __stdcall sub_5976D0(int a1)
{
  if ( a1 != 3231000 )
    return 0;
  sub_653BD0(6);
  return 1;
}


//======================================================================
// sub_597700
// entry 00597700  size 15  status ok
//======================================================================

char __stdcall sub_597700(int a1)
{
  return 0;
}


//======================================================================
// sub_597710
// entry 00597710  size 15  status ok
//======================================================================

char __stdcall sub_597710(int a1)
{
  return 0;
}


//======================================================================
// sub_597720
// entry 00597720  size 60  status ok
//======================================================================

char __stdcall sub_597720(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_597760
// entry 00597760  size 38  status ok
//======================================================================

char __stdcall sub_597760(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  return 1;
}


//======================================================================
// sub_597790
// entry 00597790  size 65  status ok
//======================================================================

char __stdcall sub_597790(_DWORD *a1)
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
// sub_5977F0
// entry 005977f0  size 120  status ok
//======================================================================

_DWORD *sub_5977F0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x84u);
  if ( v2 )
    return sub_595CB0(v2);
  else
    return 0;
}


//======================================================================
// sub_597870
// entry 00597870  size 78  status ok
//======================================================================

char __stdcall sub_597870(_BYTE *a1)
{
  _BYTE *v2; // [esp+4h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  return 1;
}


//======================================================================
// sub_5978D0
// entry 005978d0  size 446  status ok
//======================================================================

char __stdcall sub_5978D0(int a1, int a2)
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

  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  v20 = sub_63AAE0(6);
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)6 )
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
// sub_597AC0
// entry 00597ac0  size 93  status ok
//======================================================================

int __thiscall sub_597AC0(int this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &FourCardPokerState::`vftable';
  *(_DWORD *)(this + 4) = 0;
  for ( i = 0; i < 12; ++i )
    *(_DWORD *)(this + 4 * i + 8) = 0;
  *(_BYTE *)(this + 300) = 0;
  return this;
}


//======================================================================
// sub_597B20
// entry 00597b20  size 210  status ok
//======================================================================

void __thiscall sub_597B20(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &FourCardPokerState::`vftable';
  if ( *((_DWORD *)this + 1) )
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
  for ( i = 0; i < 12; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_597C00
// entry 00597c00  size 87  status ok
//======================================================================

int __stdcall sub_597C00(int a1, __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 6 && (unsigned __int16)sub_598420(a1, i); ++i )
    ;
  return sub_5994F0(a1, i, a2);
}


//======================================================================
// sub_597C60
// entry 00597c60  size 52  status ok
//======================================================================

int __thiscall sub_597C60(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 270) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_597CA0
// entry 00597ca0  size 96  status ok
//======================================================================

char __thiscall sub_597CA0(_BYTE *this, int a2, char a3)
{
  if ( (unsigned __int8)sub_598750(a2, a3) )
    return 0;
  *(this + 264) = 0;
  sub_5997F0(a2, a3);
  sub_599570(a2, 0);
  sub_5994A0(a2, 1);
  return 1;
}


//======================================================================
// sub_597D00
// entry 00597d00  size 45  status ok
//======================================================================

int __thiscall sub_597D00(_DWORD *this)
{
  if ( *(this + 65) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 65));
}


//======================================================================
// sub_597D30
// entry 00597d30  size 20  status ok
//======================================================================

int __thiscall sub_597D30(_DWORD *this)
{
  return *(this + 65);
}


//======================================================================
// sub_597D50
// entry 00597d50  size 62  status ok
//======================================================================

int __stdcall sub_597D50(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_597D90
// entry 00597d90  size 340  status ok
//======================================================================

int __stdcall sub_597D90(int a1)
{
  int j; // [esp+4h] [ebp-28h]
  int i; // [esp+8h] [ebp-24h]
  _WORD v4[4]; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+14h] [ebp-18h]
  int v6; // [esp+18h] [ebp-14h]
  int v7; // [esp+1Ch] [ebp-10h]
  _WORD v8[4]; // [esp+20h] [ebp-Ch] BYREF

  for ( i = 0; i < 4; ++i )
    v8[i] = 0;
  sub_462A40(4, dword_7935A8 + 12 * a1 + 200, (a1 == 4) + 5, (int)v8);
  v7 = sub_462BA0((int)v8, 4, 0);
  for ( j = 0; j < 4; ++j )
    v4[j] = 0;
  sub_462A40(4, dword_7935A8 + 248, 6, (int)v4);
  v6 = sub_462BA0((int)v4, 4, 0);
  if ( v7 == 8 && v6 == 9 )
    return 1;
  if ( v6 == 9 && v7 == 8 )
    return 0;
  if ( v7 == 4 && (v6 == 6 || v6 == 5) )
    return 1;
  if ( v6 == 4 && (v7 == 6 || v7 == 5) )
    return 0;
  v5 = sub_462DA0((int)v8, v4, 4);
  if ( v5 == 2 )
    return 1;
  else
    return v5;
}


//======================================================================
// sub_597EF0
// entry 00597ef0  size 64  status ok
//======================================================================

int __thiscall sub_597EF0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( *(this + i + 2) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_597F30
// entry 00597f30  size 116  status ok
//======================================================================

int sub_597F30()
{
  int i; // [esp+Ch] [ebp-8h]
  int v2; // [esp+10h] [ebp-4h]

  v2 = 6;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      if ( sub_5983C0(i) < v2 )
        v2 = sub_5983C0(i);
    }
  }
  return v2;
}


//======================================================================
// sub_597FE0
// entry 00597fe0  size 212  status ok
//======================================================================

int sub_597FE0()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  int i; // [esp+1Ch] [ebp-14h]
  _DWORD v3[4]; // [esp+20h] [ebp-10h]

  v3[0] = 3;
  v3[1] = 1;
  v3[2] = 0;
  v3[3] = 2;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v3[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1185)
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1186) )
    {
      return v3[i];
    }
  }
  return -1;
}


//======================================================================
// sub_5980C0
// entry 005980c0  size 234  status ok
//======================================================================

int __thiscall sub_5980C0(CMFCButton *this)
{
  int v1; // esi
  int v2; // esi
  int v3; // esi
  int i; // [esp+10h] [ebp-18h]
  _DWORD v7[5]; // [esp+14h] [ebp-14h]

  v7[0] = 2;
  v7[1] = 0;
  v7[2] = 1;
  v7[3] = 3;
  v7[4] = 4;
  for ( i = 0; i < 5; ++i )
  {
    if ( v7[i] != 4 || (v1 = sub_5983C0(v7[i]), v1 >= CMFCButton::GetVertMargin(this)) )
    {
      if ( !*(_BYTE *)(sub_5DCB00(v7[i]) + 1184) )
        continue;
      v2 = sub_5983C0(v7[i]);
      if ( v2 >= CMFCButton::GetVertMargin(this) )
        continue;
      v3 = sub_5983C0(v7[i]);
      if ( v3 != sub_597F30() )
        continue;
    }
    return v7[i];
  }
  return -1;
}


//======================================================================
// sub_5981B0
// entry 005981b0  size 212  status ok
//======================================================================

int sub_5981B0()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  int i; // [esp+1Ch] [ebp-14h]
  _DWORD v3[4]; // [esp+20h] [ebp-10h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v3[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1184)
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1185) )
    {
      return v3[i];
    }
  }
  return -1;
}


//======================================================================
// sub_598290
// entry 00598290  size 219  status ok
//======================================================================

int sub_598290()
{
  CImageDisplay *v1; // [esp+Ch] [ebp-1Ch]
  int i; // [esp+14h] [ebp-14h]
  _DWORD v3[4]; // [esp+18h] [ebp-10h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v3[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v3[i]) + 1185)
      && !(unsigned __int8)sub_5984D0(v3[i])
      && (unsigned __int8)sub_599020(v3[i]) )
    {
      return v3[i];
    }
  }
  return -1;
}


//======================================================================
// sub_598370
// entry 00598370  size 67  status ok
//======================================================================

int sub_598370()
{
  int i; // [esp+4h] [ebp-8h]
  int v2; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 5; ++i )
    v2 += sub_5983C0(i);
  return v2;
}


//======================================================================
// sub_5983C0
// entry 005983c0  size 83  status ok
//======================================================================

int __stdcall sub_5983C0(int a1)
{
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 6; ++i )
  {
    if ( (unsigned __int16)sub_598420(a1, i) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_598420
// entry 00598420  size 36  status ok
//======================================================================

__int16 __thiscall sub_598420(_WORD *this, int a2, int a3)
{
  return *(this + 6 * a2 + a3 + 100);
}


//======================================================================
// sub_598470
// entry 00598470  size 87  status ok
//======================================================================

char __stdcall sub_598470(int a1)
{
  int i; // [esp+4h] [ebp-8h]

  for ( i = 0; i < 3; ++i )
  {
    if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_5984D0
// entry 005984d0  size 25  status ok
//======================================================================

char __thiscall sub_5984D0(_BYTE *this, int a2)
{
  return *(this + a2 + 270);
}


//======================================================================
// sub_5984F0
// entry 005984f0  size 417  status ok
//======================================================================

int __thiscall sub_5984F0(int this)
{
  __int64 v2; // [esp-8h] [ebp-4Ch]
  _AFX_OLE_STATE *v3; // [esp+4h] [ebp-40h]
  int v4; // [esp+8h] [ebp-3Ch]
  _AFX_OLE_STATE *v6; // [esp+20h] [ebp-24h]
  void *v7; // [esp+28h] [ebp-1Ch]
  int j; // [esp+30h] [ebp-14h]
  int i; // [esp+34h] [ebp-10h]

  if ( !*(_DWORD *)(this + 4) )
  {
    v7 = operator new(0x810u);
    if ( v7 )
      v4 = sub_642E10(v7);
    else
      v4 = 0;
    *(_DWORD *)(this + 4) = v4;
  }
  sub_642E70(0);
  sub_6437D0(1, 0);
  for ( i = 0; i < 12; ++i )
  {
    v6 = (_AFX_OLE_STATE *)operator new(0xF0u);
    if ( v6 )
      v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v6);
    else
      v3 = 0;
    *(_DWORD *)(this + 4 * i + 8) = v3;
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * i + 8), (struct CPaneDivider *)i);
    *(_QWORD *)(this + 8 * i + 56) = sub_64C8A0(0, 0);
  }
  for ( j = 0; j < 5; ++j )
  {
    v2 = sub_64C8A0(0, 0);
    sub_5DCB00(j);
    sub_5D6050(v2, HIDWORD(v2));
  }
  sub_599210(this);
  *(_BYTE *)(this + 278) = 0;
  return this;
}


//======================================================================
// sub_5986A0
// entry 005986a0  size 23  status ok
//======================================================================

char sub_5986A0()
{
  return *(_BYTE *)sub_597D50(-1);
}


//======================================================================
// sub_5986C0
// entry 005986c0  size 61  status ok
//======================================================================

char sub_5986C0()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_5983C0(i) > 0 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_598700
// entry 00598700  size 72  status ok
//======================================================================

char __thiscall sub_598700(int *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]

  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + 6 * a2 + 2 * i + 14) > 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_598750
// entry 00598750  size 189  status ok
//======================================================================

char __thiscall sub_598750(_BYTE *this, int a2, char a3)
{
  bool v4; // [esp+4h] [ebp-14h]
  CImageDisplay *v6; // [esp+Ch] [ebp-Ch]

  if ( !(unsigned __int8)sub_5DF7B0(-1) || *(this + 264) )
    return 0;
  v6 = (CImageDisplay *)sub_5DCB00(a2);
  v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
  if ( !v4 || a3 == sub_590850(a2) )
    return 0;
  *(this + 264) = 1;
  sub_57C140(dword_793578);
  return 1;
}


//======================================================================
// sub_598810
// entry 00598810  size 2012  status ok
//======================================================================

int __thiscall sub_598810(_DWORD *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  unsigned int *v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int *v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // [esp-8h] [ebp-108h]
  __int64 v15; // [esp-8h] [ebp-108h]
  __int64 v16; // [esp-8h] [ebp-108h]
  int v17; // [esp+0h] [ebp-100h]
  bool v18; // [esp+4h] [ebp-FCh]
  int v19; // [esp+8h] [ebp-F8h]
  bool v20; // [esp+Ch] [ebp-F4h]
  bool v21; // [esp+14h] [ebp-ECh]
  bool v22; // [esp+18h] [ebp-E8h]
  int v24; // [esp+20h] [ebp-E0h]
  int v25; // [esp+24h] [ebp-DCh]
  int v26; // [esp+28h] [ebp-D8h]
  int v27; // [esp+2Ch] [ebp-D4h]
  int v28; // [esp+34h] [ebp-CCh]
  __int64 v29; // [esp+40h] [ebp-C0h]
  _BYTE v30[8]; // [esp+48h] [ebp-B8h] BYREF
  __int64 v31; // [esp+50h] [ebp-B0h]
  __int64 v32; // [esp+58h] [ebp-A8h]
  __int64 v33; // [esp+60h] [ebp-A0h]
  __int64 v34; // [esp+70h] [ebp-90h]
  _BYTE v35[8]; // [esp+78h] [ebp-88h] BYREF
  __int64 v36; // [esp+80h] [ebp-80h]
  __int64 v37; // [esp+88h] [ebp-78h]
  __int64 v38; // [esp+90h] [ebp-70h]
  __int64 v39; // [esp+A0h] [ebp-60h]
  __int64 v40; // [esp+A8h] [ebp-58h]
  unsigned __int64 v41; // [esp+B0h] [ebp-50h]
  __int64 v42; // [esp+B8h] [ebp-48h]
  char v43; // [esp+C3h] [ebp-3Dh]
  __int64 v44; // [esp+C4h] [ebp-3Ch]
  __int64 v45; // [esp+CCh] [ebp-34h]
  unsigned __int64 v46; // [esp+D4h] [ebp-2Ch]
  bool v47; // [esp+DFh] [ebp-21h]
  int i; // [esp+E0h] [ebp-20h]
  int v49; // [esp+E4h] [ebp-1Ch]
  int v50; // [esp+E8h] [ebp-18h]
  int v51; // [esp+ECh] [ebp-14h]
  _WORD v52[4]; // [esp+F0h] [ebp-10h] BYREF
  bool v53; // [esp+FFh] [ebp-1h]

  v51 = 3 * a2;
  v50 = -1;
  v49 = -1;
  v53 = 0;
  v39 = sub_64C8A0(0, 0);
  sub_5DCB00(a2);
  sub_5D6050(v39, HIDWORD(v39));
  v28 = sub_5DCB00(a2);
  *(this + 73) = *(char *)(sub_5D52E0(v28) + 42);
  *(this + 74) = -1;
  for ( i = 0; i < 4; ++i )
    v52[i] = 0;
  sub_462A40(4, (int)(this + 3 * a2 + 50), (a2 == 4) + 5, (int)v52);
  if ( (unsigned __int8)sub_599020(a2) )
  {
    v50 = sub_597D90(a2);
    sub_59A150(a2, v50, 0, 0, 0);
    v49 = sub_462BA0((int)v52, 4, 0);
    v22 = v49 == 4 || v49 == 9 || v49 == 8;
    v47 = v22;
    if ( v22 )
      sub_59A150(a2, 1, v49, 1, 0);
    v21 = *(this + 73) != *(this + 74) && !*(this + 74);
    v53 = v21;
    if ( v21 )
    {
      sub_5DCB00(a2);
      sub_5D70E0(1, 1000000);
      v2 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, -1);
      v14 = sub_64C8A0(0, 0);
      sub_5DCB00(a2);
      return sub_5D6050(v14, HIDWORD(v14));
    }
    sub_59A150(a2, v50, 0, 0, 0);
    if ( v47 )
    {
      v38 = sub_64C8A0(0, 0);
      v45 = v38;
      v37 = sub_64C8A0(0, 0);
      v44 = v37;
      v36 = sub_64C8A0(0, 0);
      v46 = v36;
      v27 = *(this + v51 + 3);
      v4 = *(_DWORD *)(v27 + 32 * a2 + 76);
      LODWORD(v45) = *(_DWORD *)(v27 + 32 * a2 + 72);
      HIDWORD(v45) = v4;
      v26 = *(this + v51 + 3);
      v5 = *(_DWORD *)(v26 + 32 * a2 + 84);
      LODWORD(v44) = *(_DWORD *)(v26 + 32 * a2 + 80);
      HIDWORD(v44) = v5;
      v6 = (unsigned int *)sub_64C5C0(v35, v44, v5);
      v7 = *v6;
      v8 = v6[1];
      v46 = __PAIR64__(v8, v7);
      (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int, int, _DWORD))(*(_DWORD *)*(this + v51 + 3) + 184))(
        *(this + v51 + 3),
        v7,
        v8,
        a2,
        0);
      v34 = sub_64C8A0(0, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)*(this + v51 + 3) + 184))(
        *(this + v51 + 3),
        v34,
        HIDWORD(v34),
        a2,
        1);
    }
  }
  if ( (unsigned __int8)sub_598FF0(a2) )
  {
    v49 = sub_462BA0((int)v52, 4, 0);
    v43 = sub_599A70(a2);
    if ( v43 )
      sub_59A150(a2, 1, v49, 0, 1);
    else
      sub_59A150(a2, 0, v49, 0, 0);
    v20 = *(this + 73) != *(this + 74) && !*(this + 74);
    v53 = v20;
    if ( v20 )
    {
      sub_5DCB00(a2);
      sub_5D70E0(1, 1000000);
      v19 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 4))(v19, -1);
      v15 = sub_64C8A0(0, 0);
      sub_5DCB00(a2);
      return sub_5D6050(v15, HIDWORD(v15));
    }
    if ( v43 )
    {
      v33 = sub_64C8A0(0, 0);
      v42 = v33;
      v32 = sub_64C8A0(0, 0);
      v40 = v32;
      v31 = sub_64C8A0(0, 0);
      v41 = v31;
      v25 = *(this + v51 + 4);
      v9 = *(_DWORD *)(v25 + 32 * a2 + 76);
      LODWORD(v42) = *(_DWORD *)(v25 + 32 * a2 + 72);
      HIDWORD(v42) = v9;
      v24 = *(this + v51 + 4);
      v10 = *(_DWORD *)(v24 + 32 * a2 + 84);
      LODWORD(v40) = *(_DWORD *)(v24 + 32 * a2 + 80);
      HIDWORD(v40) = v10;
      v11 = (unsigned int *)sub_64C5C0(v30, v40, v10);
      v12 = *v11;
      v13 = v11[1];
      v41 = __PAIR64__(v13, v12);
      (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int, int, _DWORD))(*(_DWORD *)*(this + v51 + 4) + 184))(
        *(this + v51 + 4),
        v12,
        v13,
        a2,
        0);
      v29 = sub_64C8A0(0, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)*(this + v51 + 4) + 184))(
        *(this + v51 + 4),
        v29,
        HIDWORD(v29),
        a2,
        1);
    }
  }
  v18 = *(this + 73) != *(this + 74) && !*(this + 74);
  v53 = v18;
  result = v18;
  if ( v18 )
  {
    sub_5DCB00(a2);
    sub_5D70E0(1, 1000000);
    v17 = sub_5DCB00(a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 4))(v17, -1);
    v16 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    return sub_5D6050(v16, HIDWORD(v16));
  }
  return result;
}


//======================================================================
// sub_598FF0
// entry 00598ff0  size 45  status ok
//======================================================================

int __stdcall sub_598FF0(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_599020
// entry 00599020  size 45  status ok
//======================================================================

int __stdcall sub_599020(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_599050
// entry 00599050  size 268  status ok
//======================================================================

char __thiscall sub_599050(int *this, int a2)
{
  int v2; // eax
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 3 * a2;
  LOBYTE(v2) = sub_598700(this, a2);
  if ( (_BYTE)v2 )
  {
    v2 = sub_5DCB00(a2);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7935A4 + 656))(dword_7935A4, a2);
      for ( i = 0; i < 3; ++i )
      {
        if ( *(this + 2 * v6 + 2 * i + 14) > 0 )
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(*(_DWORD *)*(this + v6 + i + 2) + 196))(
            *(this + v6 + i + 2),
            this + 2 * v6 + 2 * i + 14,
            0,
            1);
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_591A70((_DWORD **)dword_79359C);
      sub_5DB890(dword_7935A4);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935A4 + 4) + 8))(
                     *(_DWORD *)(dword_7935A4 + 4),
                     1,
                     0);
    }
  }
  return v2;
}


//======================================================================
// sub_599160
// entry 00599160  size 162  status ok
//======================================================================

char sub_599160()
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
// sub_599210
// entry 00599210  size 332  status ok
//======================================================================

int __thiscall sub_599210(_BYTE *this)
{
  int m; // [esp+10h] [ebp-10h]
  int k; // [esp+14h] [ebp-Ch]
  int j; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  sub_5997C0(this);
  sub_599450(-1, 0);
  sub_5994C0(-1, -1);
  *(this + 264) = 0;
  for ( i = 0; i < 12; ++i )
  {
    sub_5CB9B0(*((_DWORD *)this + i + 2));
    *((_DWORD *)this + i + 38) = -1;
  }
  for ( j = 0; j < 5; ++j )
  {
    sub_599570(j, 0);
    for ( k = 0; k < 6; ++k )
      sub_5994F0(j, k, 0);
  }
  for ( m = 0; m < 4; ++m )
  {
    *(_BYTE *)(sub_5DCB00(m) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1185) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1186) = 0;
    *(this + m + 279) = 0;
    *(this + m + 274) = 0;
  }
  return sub_597C60(this);
}


//======================================================================
// sub_599360
// entry 00599360  size 231  status ok
//======================================================================

void __thiscall sub_599360(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-24h]
  int v4; // [esp+1Ch] [ebp-10h]
  int j; // [esp+20h] [ebp-Ch]
  int i; // [esp+28h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      v4 = 3 * i + j;
      if ( (unsigned __int8)sub_5CB7D0(i, 0) )
      {
        v3 = *(this + v4 + 2);
        v1 = *(_DWORD *)(v3 + 32 * i + 76);
        *(this + 2 * v4 + 14) = *(_DWORD *)(v3 + 32 * i + 72);
        *(this + 2 * v4 + 15) = v1;
      }
      else
      {
        *((_QWORD *)this + v4 + 7) = sub_64C8A0(0, 0);
      }
    }
  }
}


//======================================================================
// sub_599450
// entry 00599450  size 77  status ok
//======================================================================

int __thiscall sub_599450(_DWORD *this, int a2, char a3)
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
// sub_5994A0
// entry 005994a0  size 28  status ok
//======================================================================

char *__thiscall sub_5994A0(_BYTE *this, int a2, char a3)
{
  *(this + a2 + 270) = a3;
  return this + a2;
}


//======================================================================
// sub_5994C0
// entry 005994c0  size 37  status ok
//======================================================================

int __thiscall sub_5994C0(_DWORD *this, int a2, int a3)
{
  *(this + 71) = a2;
  *(this + 72) = a3;
  return a3;
}


//======================================================================
// sub_5994F0
// entry 005994f0  size 40  status ok
//======================================================================

int __thiscall sub_5994F0(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 6 * a2 + a3 + 100) = a4;
  return a3;
}


//======================================================================
// sub_599520
// entry 00599520  size 47  status ok
//======================================================================

int __stdcall sub_599520(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_597D50(-1) + 1) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_599550
// entry 00599550  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_599550(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_597D50(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_599570
// entry 00599570  size 28  status ok
//======================================================================

char *__thiscall sub_599570(_BYTE *this, int a2, char a3)
{
  *(this + a2 + 265) = a3;
  return this + a2;
}


//======================================================================
// sub_599590
// entry 00599590  size 482  status ok
//======================================================================

_DWORD *__thiscall sub_599590(void *this, int a2)
{
  const char *v2; // eax
  char *v3; // eax
  char Source; // [esp+0h] [ebp-7ECh]
  char *Sourcea; // [esp+0h] [ebp-7ECh]
  int i; // [esp+8h] [ebp-7E4h]
  char v8[128]; // [esp+Ch] [ebp-7E0h] BYREF
  char v9[1028]; // [esp+8Ch] [ebp-760h] BYREF
  _WORD v10[5]; // [esp+490h] [ebp-35Ch] BYREF
  char v11; // [esp+49Bh] [ebp-351h]
  char Buffer[64]; // [esp+49Ch] [ebp-350h] BYREF
  char v13[516]; // [esp+4DCh] [ebp-310h] BYREF
  int v14; // [esp+6E0h] [ebp-10Ch]
  char Destination[260]; // [esp+6E4h] [ebp-108h] BYREF

  for ( i = 0; i < 4; ++i )
    v10[i] = 0;
  sub_462A40(4, (int)this + 12 * a2 + 200, (a2 == 4) + 5, (int)v10);
  v14 = sub_462BA0((int)v10, 4, 0);
  v11 = sub_590850(a2);
  if ( v14 == -1 )
    sub_5E9F20((char)"handType != -1", "..\\Casino\\fourcardpokerstate.cpp", 623);
  sprintf(Buffer, "Four Card Poker Tutorial: handType %hd\n", v14);
  sub_62FDE0(Buffer, Source);
  sub_462F40(v14, v8);
  if ( v11 )
    Sourcea = (char *)sub_630F40("SID_FOURCARDPOKER_FOLD");
  else
    Sourcea = (char *)sub_630F40("SID_FOURCARDPOKER_PLAY");
  strcpy(Destination, Sourcea);
  sub_590340(a2, v14, v11, v13);
  v2 = (const char *)sub_630F40("SID_FOURCARDPOKER_CURRENTHAND_FORMAT");
  sprintf(v9, v2, v8, Destination, v13);
  v3 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80((_DWORD *)dword_793578, 1, v3, v9);
}


//======================================================================
// sub_599780
// entry 00599780  size 24  status ok
//======================================================================

char sub_599780()
{
  return *(_BYTE *)(sub_597D50(-1) + 1);
}


//======================================================================
// sub_5997A0
// entry 005997a0  size 25  status ok
//======================================================================

char __thiscall sub_5997A0(_BYTE *this, int a2)
{
  return *(this + a2 + 265);
}


//======================================================================
// sub_5997C0
// entry 005997c0  size 48  status ok
//======================================================================

int sub_5997C0()
{
  sub_6437D0(1, 0);
  return sub_643930(5, 6, "FourCardPoker", 0);
}


//======================================================================
// sub_5997F0
// entry 005997f0  size 630  status ok
//======================================================================

int __thiscall sub_5997F0(_BYTE *this, int a2, char a3)
{
  int result; // eax
  int v4; // edx
  __int64 v5; // [esp-8h] [ebp-64h]
  bool v6; // [esp+0h] [ebp-5Ch]
  int v8; // [esp+8h] [ebp-54h]
  CImageDisplay *v9; // [esp+10h] [ebp-4Ch]
  _DWORD v10[2]; // [esp+34h] [ebp-28h] BYREF
  __int64 v11; // [esp+3Ch] [ebp-20h] BYREF
  int i; // [esp+44h] [ebp-18h]
  int v13; // [esp+48h] [ebp-14h]
  _WORD v14[4]; // [esp+4Ch] [ebp-10h] BYREF
  int v15; // [esp+58h] [ebp-4h]

  v15 = 3 * a2;
  if ( a3 )
  {
    *(this + a2 + 274) = 1;
    v5 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    sub_5D6050(v5, HIDWORD(v5));
    result = (unsigned __int8)sub_5CB7D0(a2, 0);
    if ( (_BYTE)result )
    {
      sub_59A150(a2, 0, 0, 0, 0);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + v15 + 3) + 188))(
               *((_DWORD *)this + v15 + 3),
               a2,
               0);
    }
  }
  else
  {
    v9 = (CImageDisplay *)sub_5DCB00(a2);
    v6 = CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3;
    result = v6;
    if ( !v6 )
    {
      for ( i = 0; i < 4; ++i )
        v14[i] = 0;
      sub_462A40(4, (int)(this + 12 * a2 + 200), (a2 == 4) + 5, (int)v14);
      v13 = sub_462BA0((int)v14, 4, 0);
      if ( v13 > 2 || v13 == 2 && sub_4639E0((int)v14, 4) >= 10 )
      {
        v11 = sub_64C8A0(3 * *(_DWORD *)(*((_DWORD *)this + v15 + 3) + 32 * a2 + 72), 0);
        return (*(int (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**((_DWORD **)this + v15 + 2) + 196))(
                 *((_DWORD *)this + v15 + 2),
                 &v11,
                 0,
                 1);
      }
      else
      {
        v8 = *((_DWORD *)this + v15 + 3);
        v4 = *(_DWORD *)(v8 + 32 * a2 + 76);
        v10[0] = *(_DWORD *)(v8 + 32 * a2 + 72);
        v10[1] = v4;
        return (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(**((_DWORD **)this + v15 + 2) + 196))(
                 *((_DWORD *)this + v15 + 2),
                 v10,
                 0,
                 1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_599A70
// entry 00599a70  size 203  status ok
//======================================================================

bool __thiscall sub_599A70(void *this, int a2)
{
  int i; // [esp+8h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-10h]
  _WORD v6[4]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = 0; i < 4; ++i )
    v6[i] = 0;
  sub_462A40(4, (int)this + 12 * a2 + 200, (a2 == 4) + 5, (int)v6);
  v5 = sub_462BA0((int)v6, 4, 0);
  return (unsigned __int8)sub_598FF0(a2) && (v5 > 2 || v5 == 2 && sub_4639E0((int)v6, 4) >= 14);
}


//======================================================================
// sub_599BF0
// entry 00599bf0  size 1050  status ok
//======================================================================

int __thiscall sub_599BF0(void *this, int *a2, int a3, char a4)
{
  int result; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // eax
  const CHAR *v16; // eax
  int v17; // esi
  int v18; // eax
  const CHAR *v19; // eax
  int v20; // esi
  int v21; // [esp-8h] [ebp-58h]
  const CHAR *v22; // [esp-8h] [ebp-58h]
  const CHAR *v23; // [esp-8h] [ebp-58h]
  int v24; // [esp-4h] [ebp-54h]
  int v25; // [esp-4h] [ebp-54h]
  CImageDisplay *v29; // [esp+10h] [ebp-40h]
  CImageDisplay *v30; // [esp+1Ch] [ebp-34h]
  int v31; // [esp+28h] [ebp-28h] BYREF
  int v32; // [esp+30h] [ebp-20h]
  int v33; // [esp+34h] [ebp-1Ch] BYREF
  int v34; // [esp+3Ch] [ebp-14h] BYREF
  char v35[8]; // [esp+44h] [ebp-Ch] BYREF
  int v36; // [esp+4Ch] [ebp-4h]

  v36 = sub_597D30((_DWORD *)dword_7935A8);
  result = sub_5DCB00(v36);
  if ( !result )
    return result;
  v32 = 3 * v36;
  sub_5CB880(&v33, v36);
  sub_5CB880(&v34, v36);
  sub_5CB880(v35, v36);
  v24 = v36;
  sub_597EF0((_DWORD *)dword_7935A8, (int)this);
  sub_5CB880(&v31, v24);
  if ( !*a2 )
  {
    sub_5DCB00(v36);
    sub_5D5DE0(a2);
  }
  if ( !*a2 )
  {
    *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4);
    v25 = a2[1];
    v21 = *a2;
    sub_5DCB00(v36);
    sub_5D5E10(v21, v25);
  }
  result = (int)a2;
  if ( *a2 <= 0 )
  {
    if ( *a2 < 0 )
    {
      v20 = *a2 + v31;
      if ( v20 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4) )
        *a2 = -v31;
      result = sub_597EF0((_DWORD *)dword_7935A8, (int)this);
      if ( result == v32 && *a2 + v33 < v34 )
      {
        result = -v33;
        *a2 = -v33;
      }
    }
LABEL_46:
    if ( *a2 )
      return sub_5CBA10(a2, a3, a4);
    return result;
  }
  v5 = *a2 + v31;
  if ( v5 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4);
    *a2 = v6 - v31;
  }
  v7 = sub_597EF0((_DWORD *)dword_7935A8, (int)this);
  if ( v7 == v32 && *a2 + v33 < v34 )
    *a2 = v34 - v33;
  v8 = sub_597EF0((_DWORD *)dword_7935A8, (int)this);
  if ( v8 == v32 && *a2 + v33 > 3 * v34 )
    *a2 = 3 * v34 - v33;
  v9 = sub_5DCB00(v36);
  if ( *a2 > sub_5D5A50(v9) )
  {
    v10 = sub_5DCB00(v36);
    *a2 = sub_5D5A50(v10);
  }
  v11 = *a2 + v31;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4);
  if ( v11 >= result )
  {
    v12 = sub_597EF0((_DWORD *)dword_7935A8, (int)this);
    if ( v12 != v32 || (result = *a2 + v33, result >= v34) )
    {
      v13 = sub_597EF0((_DWORD *)dword_7935A8, (int)this);
      if ( v13 == v32 + 1 )
      {
        v14 = v34 + 2 * *a2;
        v15 = sub_5DCB00(v36);
        if ( v14 > sub_5D5A50(v15) )
        {
          v30 = (CImageDisplay *)sub_5DCB00(v36);
          result = (int)CImageDisplay::GetDisplayFormat(v30);
          if ( *(_DWORD *)result == 2 || (result = CImageDisplay::GetDisplayFormat(v30)->rcSource.left, result == 3) )
          {
            v22 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
            v16 = (const CHAR *)sub_630F40("SID_FOURCARDPOKER_INSUFFICIENTFUNDS");
            return sub_62FF10(v16, v22, 0);
          }
          return result;
        }
      }
      result = sub_597EF0((_DWORD *)dword_7935A8, (int)this);
      if ( result == v32 + 2 )
      {
        v17 = v34 + *a2;
        v18 = sub_5DCB00(v36);
        result = sub_5D5A50(v18);
        if ( v17 > result )
        {
          v29 = (CImageDisplay *)sub_5DCB00(v36);
          result = (int)CImageDisplay::GetDisplayFormat(v29);
          if ( *(_DWORD *)result == 2 || (result = CImageDisplay::GetDisplayFormat(v29)->rcSource.left, result == 3) )
          {
            v23 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
            v19 = (const CHAR *)sub_630F40("SID_FOURCARDPOKER_INSUFFICIENTFUNDS_FORANTE");
            return sub_62FF10(v19, v23, 0);
          }
          return result;
        }
      }
      goto LABEL_46;
    }
  }
  return result;
}


//======================================================================
// sub_59A010
// entry 0059a010  size 261  status ok
//======================================================================

bool __thiscall sub_59A010(pairNode *this)
{
  int v2; // esi
  char v3; // [esp+4h] [ebp-20h]
  bool v4; // [esp+8h] [ebp-1Ch]
  CImageDisplay *v6; // [esp+18h] [ebp-Ch]

  if ( sub_597D30((_DWORD *)dword_7935A8) == -1 )
    return 0;
  v2 = pairNode::raw_length(this) / 3;
  v3 = 0;
  if ( v2 == sub_597D30((_DWORD *)dword_7935A8) )
  {
    v6 = (CImageDisplay *)sub_597D00((_DWORD *)dword_7935A8);
    v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
    if ( v4
      && (pairNode::raw_length(this) % 3 && !*(_BYTE *)(sub_597D00((_DWORD *)dword_7935A8) + 1184)
       || !(pairNode::raw_length(this) % 3) && *(_BYTE *)(dword_7935A8 + 300)) )
    {
      return 1;
    }
  }
  return v3;
}


//======================================================================
// sub_59A120
// entry 0059a120  size 46  status ok
//======================================================================

void __thiscall sub_59A120(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_79359C )
  {
    v3 = pairNode::raw_length(this);
    sub_592090((_DWORD **)dword_79359C, a2, v3);
  }
}


//======================================================================
// sub_59A150
// entry 0059a150  size 1217  status ok
//======================================================================

int __thiscall sub_59A150(pairNode *this, int a2, int a3, int a4, char a5, char a6)
{
  int v6; // eax
  int result; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // eax
  __int64 v14; // [esp+0h] [ebp-60h]
  __int64 v15; // [esp+0h] [ebp-60h]
  __int64 v16; // [esp+0h] [ebp-60h]
  _DWORD *v17; // [esp+8h] [ebp-58h]
  int v18; // [esp+Ch] [ebp-54h]
  char v20; // [esp+17h] [ebp-49h]
  int v21; // [esp+18h] [ebp-48h]
  __int64 v22; // [esp+24h] [ebp-3Ch]
  char v23[8]; // [esp+2Ch] [ebp-34h] BYREF
  char v24[8]; // [esp+34h] [ebp-2Ch] BYREF
  __int64 v25; // [esp+3Ch] [ebp-24h]
  __int64 v26; // [esp+44h] [ebp-1Ch]
  int v27; // [esp+4Ch] [ebp-14h]
  __int64 v28; // [esp+50h] [ebp-10h] BYREF
  __int64 v29; // [esp+58h] [ebp-8h]

  v6 = *((_DWORD *)this + 8 * a2 + 19);
  LODWORD(v29) = *((_DWORD *)this + 8 * a2 + 18);
  HIDWORD(v29) = v6;
  v25 = sub_64C8A0(0, 0);
  v26 = v25;
  v27 = 0;
  *(_DWORD *)(dword_7935A8 + 4 * pairNode::raw_length(this) + 152) = a3;
  v21 = sub_5DCB00(a2);
  v20 = *(_BYTE *)(sub_5D52E0(v21) + 42);
  *(_DWORD *)(dword_7935A8 + 296) = v20;
  result = *(_DWORD *)(dword_7935A8 + 292);
  if ( result == *(_DWORD *)(dword_7935A8 + 296) || *(_DWORD *)(dword_7935A8 + 296) )
  {
    v8 = sub_5DCB00(a2);
    result = sub_5D5A50(v8);
    if ( result < 1000000000 )
    {
      if ( a5 )
      {
        switch ( a4 )
        {
          case 8:
            v27 = 25;
            break;
          case 9:
            v27 = 20;
            break;
          case 4:
            v27 = 2;
            break;
        }
        v26 = v29;
        sub_64C560((double)v27);
        if ( (int)v29 > 1000000000 )
          LODWORD(v26) = 1000000000;
        sub_5DCB00(a2);
        sub_5D5CF0(v26, HIDWORD(v26));
        sub_5DCB00(a2);
        sub_5D5FB0(v26, HIDWORD(v26));
        return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 184))(
                 this,
                 v26,
                 HIDWORD(v26),
                 a2,
                 1);
      }
      else if ( a6 )
      {
        switch ( a4 )
        {
          case 8:
            v27 = 50;
            break;
          case 9:
            v27 = 40;
            break;
          case 4:
            v27 = 9;
            break;
          case 6:
            v27 = 6;
            break;
          case 5:
            v27 = 4;
            break;
          case 3:
            v27 = 2;
            break;
          default:
            v27 = 1;
            break;
        }
        v26 = v29;
        sub_64C560((double)v27);
        v9 = (_DWORD *)sub_64C5C0(v24, v29, HIDWORD(v29));
        v10 = v9[1];
        LODWORD(v26) = *v9;
        HIDWORD(v26) = v10;
        if ( (int)v26 > 1000000000 )
          LODWORD(v26) = 1000000000;
        v14 = v26;
        sub_5DCB00(a2);
        sub_5D5CF0(v14, HIDWORD(v14));
        v15 = v26;
        sub_5DCB00(a2);
        sub_5D5FB0(v15, HIDWORD(v15));
        v11 = (_DWORD *)sub_64C630(v23, v29, HIDWORD(v29));
        v12 = v11[1];
        LODWORD(v26) = *v11;
        HIDWORD(v26) = v12;
        return (*(int (__thiscall **)(pairNode *, _DWORD, int, int, int))(*(_DWORD *)this + 184))(this, v26, v12, a2, 1);
      }
      else if ( a3 )
      {
        if ( a3 == 1 )
        {
          if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          {
            if ( *(int *)(sub_5DCB00(a2) + 1192) < -4 )
              *(_BYTE *)(a2 + dword_7935A8 + 279) = 1;
            *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
          }
          v13 = sub_5DCB00(a2);
          sub_5D7540(v13);
          v26 = v29;
        }
        if ( (int)v26 > 1000000000 )
          LODWORD(v26) = 1000000000;
        sub_64C5C0(&v28, *((_DWORD *)this + 8 * a2 + 18), *((_DWORD *)this + 8 * a2 + 19));
        if ( (int)v28 >= 1000000000 )
          v28 = sub_64C8A0(1000000000, 0);
        v16 = v28;
        sub_5DCB00(a2);
        sub_5D5CF0(v16, HIDWORD(v16));
        sub_5DCB00(a2);
        sub_5D5FB0(v26, HIDWORD(v26));
        return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v28,
                 HIDWORD(v28),
                 a2,
                 0);
      }
      else
      {
        v18 = *(_DWORD *)(dword_79359C + 4 * pairNode::raw_length(this) + 24);
        (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 196))(v18);
        if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v17 = (_DWORD *)(sub_5DCB00(a2) + 1192);
        --*v17;
        LODWORD(v26) = -(int)v29;
        HIDWORD(v26) = -HIDWORD(v29);
        sub_5DCB00(a2);
        sub_5D5FB0(-(int)v29, -HIDWORD(v29));
        v22 = sub_64C8A0(0, 0);
        return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
                 this,
                 v22,
                 HIDWORD(v22),
                 a2,
                 0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_59A6C0
// entry 0059a6c0  size 42  status ok
//======================================================================

bool __stdcall sub_59A6C0(int a1, int a2)
{
  int v2; // eax

  v2 = sub_5DCB00(a1);
  return sub_5D5A50(v2) >= a2;
}


//======================================================================
// sub_59A6F0
// entry 0059a6f0  size 81  status ok
//======================================================================

int __stdcall sub_59A6F0(int a1, int a2, int a3, int a4)
{
  if ( (unsigned __int8)sub_5DA7B0(dword_7935CC) )
    return sub_59AFE0(a1, a2, a3, a4);
  else
    return sub_59A910(a1, a2, a3, a4);
}


//======================================================================
// sub_59A750
// entry 0059a750  size 445  status ok
//======================================================================

int __stdcall sub_59A750(int a1, __int64 *a2)
{
  int v2; // eax
  bool i; // al
  double v5; // [esp+10h] [ebp-40h]
  double v6; // [esp+20h] [ebp-30h]
  __int64 v7; // [esp+34h] [ebp-1Ch]
  int v8; // [esp+3Ch] [ebp-14h]
  int v9; // [esp+40h] [ebp-10h]
  int v10; // [esp+44h] [ebp-Ch]
  int v11; // [esp+48h] [ebp-8h]
  int v12; // [esp+4Ch] [ebp-4h]

  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 692))(dword_7935CC);
  v2 = sub_5DCB00(a1);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 24))(v2);
  v9 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  if ( v9 < -4 )
    v9 = -1 - sub_62FBF0(5);
  v6 = (double)((sub_62FBF0(5) + 1) * v8 * v11);
  v5 = v6 / (double)(sub_62FBF0(5) + 1);
  v10 = (int)((double)(v8 * v11 * v9) / (double)(sub_62FBF0(5) + 1) + v5) / 2;
  if ( v10 % 5 )
    v10 += 5 - v10 % 5;
  if ( v10 >= v11 )
  {
    if ( v10 > v12 )
      v10 = v12;
    goto LABEL_9;
  }
  v10 = v11;
  for ( i = sub_59A6C0(a1, v11); !i; i = sub_59A6C0(a1, v10) )
  {
    v10 -= 5;
LABEL_9:
    ;
  }
  if ( v10 < v11 )
    v10 = 0;
  if ( v10 > v12 )
    sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\bigraiseai.cpp", 74);
  v7 = sub_64C8A0(v10, 0);
  *a2 = v7;
  return HIDWORD(v7);
}


//======================================================================
// sub_59A910
// entry 0059a910  size 65  status ok
//======================================================================

int __stdcall sub_59A910(int a1, __int64 *a2, int a3, int a4)
{
  sub_59A750(a1, a2);
  sub_59A960(a1, a2, a3);
  return sub_59AA60(a1, a4);
}


//======================================================================
// sub_59A960
// entry 0059a960  size 255  status ok
//======================================================================

int __thiscall sub_59A960(void *this, int a2, _DWORD *a3, __int64 *a4)
{
  bool i; // al
  __int64 v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v8 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC, this);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 692))(dword_7935CC);
  v7 = 3 * *a3;
  if ( v7 % 5 )
    v7 += 5 - v7 % 5;
  if ( v7 >= v8 )
  {
    if ( v7 > v9 )
      v7 = v9;
    goto LABEL_7;
  }
  v7 = v8;
  for ( i = sub_59A6C0(a2, v8); !i; i = sub_59A6C0(a2, v7) )
  {
    v7 -= 5;
LABEL_7:
    ;
  }
  if ( v7 < v8 )
    v7 = 0;
  if ( v7 > v9 )
    sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\bigraiseai.cpp", 115);
  v6 = sub_64C8A0(v7, 0);
  *a4 = v6;
  return HIDWORD(v6);
}


//======================================================================
// sub_59AA60
// entry 0059aa60  size 486  status ok
//======================================================================

int __stdcall sub_59AA60(int a1, __int64 *a2)
{
  int v2; // eax
  int result; // eax
  bool i; // al
  int v5; // [esp+4h] [ebp-50h]
  double v6; // [esp+14h] [ebp-40h]
  double v7; // [esp+24h] [ebp-30h]
  __int64 v8; // [esp+38h] [ebp-1Ch]
  int v9; // [esp+40h] [ebp-14h]
  int v10; // [esp+44h] [ebp-10h]
  int v11; // [esp+48h] [ebp-Ch]
  int v12; // [esp+48h] [ebp-Ch]
  int v13; // [esp+4Ch] [ebp-8h]
  int v14; // [esp+50h] [ebp-4h]

  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 692))(dword_7935CC);
  v2 = sub_5DCB00(a1);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 24))(v2);
  v10 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  result = sub_62FBF0(10);
  if ( result < 7 )
  {
    v7 = (double)((sub_62FBF0(5) + 1) * v9 * v13);
    v6 = v7 / (double)(sub_62FBF0(5) + 1);
    v11 = (int)((double)(v9 * v13 * v10) / (double)(sub_62FBF0(5) + 1) + v6);
    if ( sub_62FBF0(2) == 1 )
      v5 = v11 / 3;
    else
      v5 = v11 / 2;
    v12 = v5;
    if ( v5 % 5 )
      v12 = v5 + 5 - v5 % 5;
    if ( v12 >= v13 )
    {
      if ( v12 > v14 )
        v12 = v14;
      goto LABEL_11;
    }
    v12 = v13;
    for ( i = sub_59A6C0(a1, v13); !i; i = sub_59A6C0(a1, v12) )
    {
      v12 -= 5;
LABEL_11:
      ;
    }
    if ( v12 < v13 )
      v12 = 0;
    if ( v12 > v14 )
      sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\bigraiseai.cpp", 155);
    v8 = sub_64C8A0(v12, 0);
    *a2 = v8;
    return HIDWORD(v8);
  }
  return result;
}


//======================================================================
// sub_59AC50
// entry 0059ac50  size 911  status ok
//======================================================================

int __stdcall sub_59AC50(int a1, __int64 *a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // esi
  double v6; // [esp+8h] [ebp-74h]
  double v7; // [esp+10h] [ebp-6Ch]
  double v8; // [esp+20h] [ebp-5Ch]
  int v9; // [esp+2Ch] [ebp-50h]
  __int64 v10; // [esp+34h] [ebp-48h]
  __int64 v11; // [esp+3Ch] [ebp-40h]
  char v12[8]; // [esp+44h] [ebp-38h] BYREF
  int v13; // [esp+4Ch] [ebp-30h]
  int v14; // [esp+50h] [ebp-2Ch]
  int v15; // [esp+54h] [ebp-28h]
  int v16; // [esp+58h] [ebp-24h]
  int v17; // [esp+5Ch] [ebp-20h]
  int v18; // [esp+60h] [ebp-1Ch]
  int v19; // [esp+64h] [ebp-18h]
  int v20; // [esp+68h] [ebp-14h]
  int v21; // [esp+6Ch] [ebp-10h]
  int v22; // [esp+70h] [ebp-Ch]
  int v23; // [esp+74h] [ebp-8h]
  int v24; // [esp+78h] [ebp-4h]

  v2 = sub_5DCB00(a1);
  v21 = sub_5D5A50(v2);
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC);
  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 692))(dword_7935CC);
  v24 = sub_5DA8A0(dword_7935CC);
  v16 = sub_5DAC90(dword_7935CC);
  v20 = sub_5DA8C0(dword_7935CC);
  v19 = *(_DWORD *)sub_5DAA20(v12);
  v15 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  v13 = 0;
  v22 = 0;
  v9 = sub_5DCB00(a1);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 24))(v9);
  v17 = v18;
  if ( v21 < v23 )
    v22 = v21;
  else
    v22 = v23;
  if ( v15 < -4 )
    v15 = -1 - sub_62FBF0(5);
  if ( v24 - v20 >= 4 )
    goto LABEL_29;
  if ( v24 == v20 && v21 < v19 && v19 - v21 <= v22 )
  {
    v13 = v18 + v19 - v21;
  }
  else if ( v21 < v19 )
  {
    if ( v19 - v21 > v22 )
    {
      if ( (unsigned __int8)sub_59B420(a1) )
        v13 = v22 / (sub_62FBF0(3) + 1);
    }
    else
    {
      v3 = v19 - v21;
      v13 = v3 / (sub_62FBF0(5) + 1);
    }
  }
  if ( v13 % 5 )
    v13 += 5 - v13 % 5;
  if ( v13 <= 0 )
  {
LABEL_29:
    v5 = v14 * v18;
    v8 = (double)((sub_62FBF0(5) + 1) * v5);
    v7 = v8 / (double)(sub_62FBF0(5) + 1);
    v6 = (double)(v14 * v18 * v15);
    v17 = (int)(v6 / (double)(sub_62FBF0(5) + 1) + v7) / 2;
    if ( v17 % 5 )
      v17 += 5 - v17 % 5;
    if ( v17 < v18 )
      v17 = v18;
    if ( v17 > v23 )
      v17 = v23;
    while ( !sub_59A6C0(a1, v17) )
      v17 -= 5;
    if ( v17 < v18 )
      v17 = 0;
    if ( v17 > v23 )
      sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\bigraiseai.cpp", 260);
    v10 = sub_64C8A0(v17, 0);
    *a2 = v10;
    return HIDWORD(v10);
  }
  else
  {
    if ( v13 < v18 )
      v13 = v18;
    if ( v13 > v23 )
      v13 = v23;
    while ( !sub_59A6C0(a1, v13) )
      v13 -= 5;
    if ( v13 < v18 || v13 > v23 )
      sub_5E9F20((char)"tempBet >= minBet && tempBet <= maxBet", "..\\Casino\\bigraiseai.cpp", 228);
    v11 = sub_64C8A0(v13, 0);
    *a2 = v11;
    return HIDWORD(v11);
  }
}


//======================================================================
// sub_59AFE0
// entry 0059afe0  size 65  status ok
//======================================================================

int __thiscall sub_59AFE0(CFormView *this, int a2, __int64 *a3, struct tagVARIANT *a4, int a5)
{
  sub_59AC50(a2, a3);
  CFormView::accHitTest(this, a2, a3, a4);
  return CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(a2, a5);
}


//======================================================================
// sub_59B080
// entry 0059b080  size 793  status ok
//======================================================================

int __stdcall sub_59B080(int a1, _BYTE *a2, _BYTE *a3)
{
  int v4; // [esp+4h] [ebp-Ch]
  __int16 v5[2]; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  if ( *((unsigned __int16 *)dword_7935D0 + 144) < 0xDu )
  {
    if ( sub_4639C0((int)dword_7935D0 + 6 * a1 + 200, 2) )
    {
      *a2 = 1;
      *a3 = 1;
      return sub_630F40("SID_BIGRAISE_STRATEGY_ALL_IN");
    }
    else
    {
      sub_641930(v5, (char *)dword_7935D0 + 6 * a1 + 200, 2);
      sub_641E20(v5, 2);
      v6 = sub_641280(v5[0]);
      v4 = sub_641280(v5[1]);
      if ( *((unsigned __int16 *)dword_7935D0 + 144) >= 2u
        && *((unsigned __int16 *)dword_7935D0 + 144) <= 6u
        && (v4 > 11 || v4 == 11 && v6 >= 7) )
      {
        *a2 = 0;
        *a3 = 1;
        return sub_630F40("SID_BIGRAISE_STRATEGY_SIX");
      }
      else if ( *((_WORD *)dword_7935D0 + 144) == 7 && (v4 > 11 || v4 == 11 && v6 >= 8) )
      {
        *a2 = 0;
        *a3 = 1;
        return sub_630F40("SID_BIGRAISE_STRATEGY_SEVEN");
      }
      else if ( *((_WORD *)dword_7935D0 + 144) == 8 && (v4 > 11 || v4 == 11 && v6 >= 7) )
      {
        if ( v4 == 11 || v6 == 8 )
        {
          *a2 = 1;
          *a3 = 0;
          return sub_630F40("SID_BIGRAISE_STRATEGY_EIGHT_EXCEPTION");
        }
        else
        {
          *a2 = 0;
          *a3 = 1;
          return sub_630F40("SID_BIGRAISE_STRATEGY_EIGHT");
        }
      }
      else if ( *((_WORD *)dword_7935D0 + 144) == 9 && (v4 > 11 || v4 == 11 && v6 >= 7) )
      {
        if ( v4 == 11 || v6 == 9 )
        {
          *a2 = 1;
          *a3 = 0;
          return sub_630F40("SID_BIGRAISE_STRATEGY_NINE_EXCEPTION");
        }
        else
        {
          *a2 = 0;
          *a3 = 1;
          return sub_630F40("SID_BIGRAISE_STRATEGY_NINE");
        }
      }
      else if ( *((_WORD *)dword_7935D0 + 144) == 10 && (v4 > 10 || v4 == 10 && v6 >= 8) )
      {
        *a2 = 0;
        *a3 = 1;
        return sub_630F40("SID_BIGRAISE_STRATEGY_TEN");
      }
      else if ( *((_WORD *)dword_7935D0 + 144) == 11 && (v4 > 11 || v4 == 11 && v6 >= 7) )
      {
        *a2 = 0;
        *a3 = 1;
        return sub_630F40("SID_BIGRAISE_STRATEGY_JACK");
      }
      else if ( *((_WORD *)dword_7935D0 + 144) == 12 && (v4 > 12 || v4 == 12 && v6 >= 8) )
      {
        *a2 = 0;
        *a3 = 1;
        return sub_630F40("SID_BIGRAISE_STRATEGY_QUEEN");
      }
      else
      {
        *a2 = 1;
        *a3 = 0;
        return sub_630F40("SID_BIGRAISE_STRATEGY_RISK_ANTE");
      }
    }
  }
  else
  {
    *a2 = 1;
    *a3 = 1;
    return sub_630F40("SID_BIGRAISE_STRATEGY_ALL_IN_REQUIRED");
  }
}


//======================================================================
// sub_59B420
// entry 0059b420  size 126  status ok
//======================================================================

bool __stdcall sub_59B420(int a1)
{
  int v1; // eax
  double v2; // st7
  int v3; // eax
  bool result; // al
  int v5; // [esp+0h] [ebp-24h]
  _BYTE v6[8]; // [esp+Ch] [ebp-18h] BYREF
  double v7; // [esp+14h] [ebp-10h]
  double v8; // [esp+1Ch] [ebp-8h]

  v8 = (double)*(int *)sub_5DAA20(v6);
  v1 = sub_5DCB00(a1);
  v2 = (double)sub_5D5A50(v1);
  result = 0;
  if ( v2 < v8 )
  {
    v3 = sub_5DCB00(a1);
    v5 = sub_5D5A50(v3);
    v7 = v8 - (double)v5;
    if ( v7 / v8 >= 0.5 )
      return 1;
  }
  return result;
}


//======================================================================
// sub_59B4D0
// entry 0059b4d0  size 203  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_59B4D0(ATL::CCRTHeap *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BigRaiseDisplay::`vftable';
  for ( i = 0; i < 6; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 33) = 0;
  }
  for ( j = 0; j < 12; ++j )
  {
    *((_DWORD *)this + j + 7) = 0;
    *((_DWORD *)this + j + 21) = 0;
  }
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 20) = 0;
  return this;
}


//======================================================================
// sub_59B5A0
// entry 0059b5a0  size 595  status ok
//======================================================================

void __thiscall sub_59B5A0(CNoTrackObject *this)
{
  int j; // [esp+74h] [ebp-14h]
  int i; // [esp+78h] [ebp-10h]

  *(_DWORD *)this = &BigRaiseDisplay::`vftable';
  for ( i = 0; i < 6; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 33) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 33))(*((_DWORD *)this + i + 33), 1);
  }
  for ( j = 0; j < 12; ++j )
  {
    if ( *((_DWORD *)this + j + 7) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 7))(*((_DWORD *)this + j + 7), 1);
    if ( *((_DWORD *)this + j + 21) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 21))(*((_DWORD *)this + j + 21), 1);
  }
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  if ( *((_DWORD *)this + 39) )
    (***((void (__thiscall ****)(_DWORD, int))this + 39))(*((_DWORD *)this + 39), 1);
  if ( *((_DWORD *)this + 40) )
    (***((void (__thiscall ****)(_DWORD, int))this + 40))(*((_DWORD *)this + 40), 1);
  if ( *((_DWORD *)this + 41) )
    (***((void (__thiscall ****)(_DWORD, int))this + 41))(*((_DWORD *)this + 41), 1);
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_59B800
// entry 0059b800  size 89  status ok
//======================================================================

int __thiscall sub_59B800(_DWORD *this)
{
  int result; // eax

  sub_5F2BA0(3232003);
  sub_5F2BA0(3232004);
  sub_5F2BA0(3232005);
  result = (int)this;
  if ( *(this + 20) )
  {
    result = sub_5F8990(*(this + 20));
    *(this + 20) = 0;
  }
  return result;
}


//======================================================================
// sub_59B860
// entry 0059b860  size 61  status ok
//======================================================================

int __stdcall sub_59B860(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 1;
    case 1:
      return 0;
    case 2:
      return 3;
  }
  return 0;
}


//======================================================================
// sub_59B8A0
// entry 0059b8a0  size 181  status ok
//======================================================================

int __stdcall sub_59B8A0(int a1, __int16 a2, int a3)
{
  int v4; // esi
  _DWORD v5[5]; // [esp+8h] [ebp-14h]

  v5[0] = -1;
  v5[1] = 1;
  v5[2] = 2;
  v5[3] = 3;
  v5[4] = 0;
  if ( !(unsigned __int8)sub_5A3E30(a1) && (a1 != 4 || a3 != *((_DWORD *)dword_7935D0 + 71)) )
    return 53;
  if ( sub_641280(a2) == 14 )
    return 13 * v5[sub_641290(a2)];
  v4 = 13 * v5[sub_641290(a2)];
  return v4 + sub_641280(a2) - 1;
}


//======================================================================
// sub_59B960
// entry 0059b960  size 64  status ok
//======================================================================

int __stdcall sub_59B960(int a1)
{
  _DWORD v2[6]; // [esp+4h] [ebp-18h]

  v2[0] = 3215002;
  v2[1] = 3215003;
  v2[2] = 3215001;
  v2[3] = 3215004;
  v2[4] = 3215005;
  v2[5] = 3215005;
  return v2[a1];
}


//======================================================================
// sub_59B9A0
// entry 0059b9a0  size 70  status ok
//======================================================================

int __stdcall sub_59B9A0(int a1, int a2)
{
  _DWORD v3[6]; // [esp+4h] [ebp-18h]

  v3[0] = 332;
  v3[1] = 222;
  v3[2] = 425;
  v3[3] = 115;
  v3[4] = 275;
  v3[5] = 275;
  return v3[a1] + 12 * a2;
}


//======================================================================
// sub_59B9F0
// entry 0059b9f0  size 64  status ok
//======================================================================

int __stdcall sub_59B9F0(int a1, int a2)
{
  _DWORD v3[6]; // [esp+4h] [ebp-18h]

  v3[0] = 237;
  v3[1] = 238;
  v3[2] = 138;
  v3[3] = 138;
  v3[4] = 82;
  v3[5] = 150;
  return v3[a1];
}


//======================================================================
// sub_59BA30
// entry 0059ba30  size 2206  status ok
//======================================================================

int __thiscall sub_59BA30(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-108h]
  int v6; // [esp+8h] [ebp-104h]
  int v7; // [esp+Ch] [ebp-100h]
  _DWORD *v8; // [esp+10h] [ebp-FCh]
  int v9; // [esp+14h] [ebp-F8h]
  _AFX_OLE_STATE *v10; // [esp+18h] [ebp-F4h]
  int v11; // [esp+1Ch] [ebp-F0h]
  int v12; // [esp+20h] [ebp-ECh]
  void *v14; // [esp+28h] [ebp-E4h]
  void *v15; // [esp+30h] [ebp-DCh]
  void *v16; // [esp+38h] [ebp-D4h]
  _DWORD *v17; // [esp+40h] [ebp-CCh]
  void *v18; // [esp+48h] [ebp-C4h]
  _AFX_OLE_STATE *v19; // [esp+50h] [ebp-BCh]
  void *v20; // [esp+58h] [ebp-B4h]
  void *v21; // [esp+60h] [ebp-ACh]
  int j; // [esp+68h] [ebp-A4h]
  int i; // [esp+6Ch] [ebp-A0h]
  int v24; // [esp+70h] [ebp-9Ch]
  _DWORD v25[23]; // [esp+74h] [ebp-98h]
  _DWORD v26[12]; // [esp+D0h] [ebp-3Ch]
  int v27; // [esp+108h] [ebp-4h]

  v26[0] = 5;
  v26[1] = 4;
  v26[2] = 3;
  v26[3] = 8;
  v26[4] = 7;
  v26[5] = 6;
  v26[6] = 2;
  v26[7] = 1;
  v26[8] = 0;
  v26[9] = 11;
  v26[10] = 10;
  v26[11] = 9;
  v24 = 322;
  v25[0] = 310;
  v25[1] = 299;
  v25[2] = 370;
  v25[3] = 351;
  v25[4] = 339;
  v25[5] = 221;
  v25[6] = 308;
  v25[7] = 189;
  v25[8] = 367;
  v25[9] = 242;
  v25[10] = 338;
  v25[11] = 513;
  v25[12] = 232;
  v25[13] = 517;
  v25[14] = 289;
  v25[15] = 545;
  v25[16] = 263;
  v25[17] = 58;
  v25[18] = 233;
  v25[19] = 15;
  v25[20] = 264;
  v25[21] = 70;
  v25[22] = 292;
  v1 = sub_630F40("SID_BIGRAISE");
  sub_5F38B0(v1);
  sub_5F1AD0(65000);
  sub_5F2BA0(3232003);
  sub_5F2BA0(3232004);
  sub_5F2BA0(3232005);
  for ( i = 0; i < 6; ++i )
  {
    v21 = operator new(0x14u);
    v27 = 0;
    if ( v21 )
      v12 = sub_59E270(v21);
    else
      v12 = 0;
    *(_DWORD *)(this + 4 * i + 4) = v12;
    sub_59E370(i);
    v20 = operator new(0x1D0u);
    v27 = 1;
    if ( v20 )
    {
      sub_5EC5A0(v20);
      v11 = v2;
    }
    else
    {
      v11 = 0;
    }
    v27 = -1;
    *(_DWORD *)(this + 4 * i + 132) = v11;
    sub_5EC8F0(&Source, 56, 200, 20, 0, 0, 81, 48, -1);
  }
  for ( j = 0; j < 12; ++j )
  {
    v19 = (_AFX_OLE_STATE *)operator new(0xAE4u);
    v27 = 2;
    if ( v19 )
      v10 = _AFX_OLE_STATE::_AFX_OLE_STATE(v19);
    else
      v10 = 0;
    v27 = -1;
    *(_DWORD *)(this + 4 * j + 28) = v10;
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 28) + 2784) = j;
    sub_5EAE80(3215006, 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * j + 28) + 176))(
      *(_DWORD *)(this + 4 * j + 28),
      v26[j]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode(*(CPane **)(this + 4 * j + 28), *((_DWORD *)dword_7935D0 + j + 2));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 28) + 116))(*(_DWORD *)(this + 4 * j + 28));
    v18 = operator new(0x178u);
    v27 = 3;
    if ( v18 )
    {
      sub_5EAAF0(v18);
      v9 = v3;
    }
    else
    {
      v9 = 0;
    }
    v27 = -1;
    *(_DWORD *)(this + 4 * j + 84) = v9;
    sub_5EAE80(3216018, v25[2 * j - 1], v25[2 * j], 100, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 84) + 112))(*(_DWORD *)(this + 4 * j + 84));
  }
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), -28, -81);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), -41, -1);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 36) + 68))(*(_DWORD *)(this + 36), 21, 34);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 40) + 68))(*(_DWORD *)(this + 40), 20, -80);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 44) + 68))(*(_DWORD *)(this + 44), -25, -5);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 48) + 68))(*(_DWORD *)(this + 48), 18, 40);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(*(_DWORD *)(this + 52), -18, -23);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 56) + 68))(*(_DWORD *)(this + 56), 13, 43);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 60) + 68))(*(_DWORD *)(this + 60), 85, 44);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 64) + 68))(*(_DWORD *)(this + 64), 12, -27);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 68) + 68))(*(_DWORD *)(this + 68), -61, 12);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 72) + 68))(*(_DWORD *)(this + 72), -48, 70);
  v17 = operator new(0x198u);
  v27 = 4;
  if ( v17 )
  {
    sub_5CD6A0(v17);
    *v17 = &BigRaiseDealerDisplay::`vftable';
    v8 = v17;
  }
  else
  {
    v8 = 0;
  }
  v27 = -1;
  *(_DWORD *)(this + 76) = v8;
  sub_5EAE80(0, 0, 0, 0, -1);
  v16 = operator new(0x184u);
  v27 = 5;
  if ( v16 )
    v7 = sub_5F5BF0(v16);
  else
    v7 = 0;
  v27 = -1;
  *(_DWORD *)(this + 156) = v7;
  sub_5EAE80(2022, 0, 0, 51, -1);
  v15 = operator new(0x184u);
  v27 = 6;
  if ( v15 )
    v6 = sub_5F5BF0(v15);
  else
    v6 = 0;
  v27 = -1;
  *(_DWORD *)(this + 160) = v6;
  sub_5EAE80(2023, 0, 0, 50, -1);
  v14 = operator new(0x184u);
  v27 = 7;
  if ( v14 )
    v5 = sub_5F5BF0(v14);
  else
    v5 = 0;
  v27 = -1;
  *(_DWORD *)(this + 164) = v5;
  return sub_5EAE80(3215008, 0, 0, 1, -1);
}


//======================================================================
// sub_59C2D0
// entry 0059c2d0  size 1194  status ok
//======================================================================

int __thiscall sub_59C2D0(_DWORD **this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edi
  int v6; // esi
  int result; // eax
  int v8; // [esp+8h] [ebp-88h]
  int n; // [esp+18h] [ebp-78h]
  _BYTE v11[12]; // [esp+1Ch] [ebp-74h] BYREF
  int v12; // [esp+28h] [ebp-68h]
  _WORD v13[6]; // [esp+2Ch] [ebp-64h] BYREF
  int v14; // [esp+38h] [ebp-58h]
  int m; // [esp+3Ch] [ebp-54h]
  int v16; // [esp+40h] [ebp-50h]
  int k; // [esp+44h] [ebp-4Ch]
  int v18; // [esp+48h] [ebp-48h]
  int j; // [esp+4Ch] [ebp-44h]
  int v20; // [esp+50h] [ebp-40h]
  int i; // [esp+54h] [ebp-3Ch]
  char Destination[52]; // [esp+58h] [ebp-38h] BYREF

  sub_59CA80(this);
  for ( i = 0; i < 4; ++i )
  {
    v20 = 3 * i;
    for ( j = 0; j < 3; ++j )
    {
      v18 = *((_DWORD *)dword_7935D0 + v20 + j + 38);
      if ( v18 == -1 || v18 == 3 )
      {
        (*(void (__thiscall **)(_DWORD))(**(this + v20 + j + 21) + 112))(*(this + v20 + j + 21));
      }
      else
      {
        v1 = sub_59B860(v18);
        (*(void (__thiscall **)(_DWORD, int))(**(this + v20 + j + 21) + 176))(*(this + v20 + j + 21), v1);
        (*(void (__thiscall **)(_DWORD))(**(this + v20 + j + 21) + 116))(*(this + v20 + j + 21));
      }
    }
  }
  for ( k = 0; k < 6; ++k )
  {
    sub_59E440(*(this + k + 1));
    if ( k != 4
      && k != 5
      && *(_BYTE *)(sub_5DCB00(k) + 1184)
      && (unsigned __int8)sub_5DA7B0(dword_7935CC)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7935CC + 708))(dword_7935CC, k) )
    {
      v16 = 3 * k;
      for ( m = 0; m < 3; ++m )
      {
        if ( !(*(this + v16 + m + 7))[120 * k + 95] )
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + v16 + m + 7) + 184))(*(this + v16 + m + 7), k, 0);
      }
    }
    if ( k != 5 && (unsigned __int8)sub_5A3E30(k) && *((_BYTE *)dword_7935D0 + 280) )
    {
      for ( n = 0; n < 5; ++n )
        v13[n] = 0;
      sub_462930((int)dword_7935D0 + 6 * k + 200, (k == 4) + 2, (int)dword_7935D0 + 230, 3, (int)v11);
      sub_462A40(5, (int)v11, 6, (int)v13);
      v2 = sub_462BA0((int)v13, 5, 0);
      sub_462F40(v2, Destination);
      v3 = sub_59B9A0(k, 0);
      v4 = sub_59B9A0(k, 4);
      v5 = v4 - sub_59B9A0(k, 0);
      v14 = (v5 - sub_5F5550(*(this + k + 33)) + 35) / 2 + v3;
      if ( k == 4 )
      {
        v6 = sub_59B9F0(4, 0);
        v8 = v6 + sub_5F5590((*(this + k + 1))[2]) - 68;
      }
      else
      {
        v8 = sub_59B9F0(k, 0) - 17;
      }
      v12 = v8;
      (*(void (__thiscall **)(_DWORD, char *))(**(this + k + 33) + 180))(*(this + k + 33), Destination);
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + k + 33) + 68))(*(this + k + 33), v14, v12);
      (*(void (__thiscall **)(_DWORD))(**(this + k + 33) + 116))(*(this + k + 33));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(this + k + 33) + 112))(*(this + k + 33));
    }
  }
  result = sub_5DA7B0(dword_7935CC);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 752))(dword_7935CC);
  return result;
}


//======================================================================
// sub_59C780
// entry 0059c780  size 338  status ok
//======================================================================

int __thiscall sub_59C780(int this)
{
  struct Concurrency::IExecutionContext *DefaultDestination; // eax
  int result; // eax
  int v3; // eax
  int v4; // [esp+8h] [ebp-1Ch]
  void *v6; // [esp+10h] [ebp-14h]

  sub_59C2D0((_DWORD **)this);
  if ( !*(_DWORD *)(this + 80) )
  {
    v6 = operator new(0x1BCu);
    if ( v6 )
      v4 = sub_59CB50(v6);
    else
      v4 = 0;
    *(_DWORD *)(this + 80) = v4;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 60))(*(_DWORD *)(this + 80));
    sub_5F7340(0, 170);
  }
  sub_5F85D0(*(_DWORD *)(this + 80));
  sub_5F2B20(3232003, 1);
  sub_5F2B20(3232004, 1);
  sub_5F2B20(3232005, 1);
  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  result = sub_4639C0((int)dword_7935D0 + 6 * (_DWORD)DefaultDestination + 200, 2);
  if ( !(_BYTE)result )
  {
    sub_5F2BA0(3232005);
    v3 = sub_5FB300(2);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
  }
  return result;
}


//======================================================================
// sub_59C8E0
// entry 0059c8e0  size 76  status ok
//======================================================================

int __thiscall sub_59C8E0(_DWORD **this, int a2, int a3)
{
  int result; // eax

  if ( a2 != 4 && a2 != 5 )
  {
    result = a3;
    if ( *(this + a3 + 7) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + a3 + 7) + 184))(*(this + a3 + 7), a2, 0);
  }
  return result;
}


//======================================================================
// sub_59C930
// entry 0059c930  size 197  status ok
//======================================================================

int __thiscall sub_59C930(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-10h]
  __int16 v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v9 = *(_DWORD *)(*(this + a2 + 1) + 4 * a3 + 8);
  v8 = sub_5A26F0(a2, a3);
  v3 = sub_59B960(a2);
  sub_5EAF00(v3);
  v4 = sub_59B8A0(a2, v8, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v4);
  v7 = sub_59B9F0(a2, a3);
  v5 = sub_59B9A0(a2, a3);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(v9, v5, v7);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, a3 + 5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
}


//======================================================================
// sub_59CA00
// entry 0059ca00  size 121  status ok
//======================================================================

int __thiscall sub_59CA00(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_7935CC)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_7935CC + 724))(dword_7935CC, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_5A3E10(dword_7935D0) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_59F960(v2);
    }
  }
  return result;
}


//======================================================================
// sub_59CA80
// entry 0059ca80  size 204  status ok
//======================================================================

int sub_59CA80()
{
  char v1; // [esp+0h] [ebp-18h]
  CImageDisplay *v2; // [esp+10h] [ebp-8h]
  unsigned int v3; // [esp+14h] [ebp-4h]

  if ( sub_5A2460(dword_7935D0) != -1
    && (v3 = sub_5A2460(dword_7935D0), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_5A29F0(v3)) )
  {
    return sub_5F2B20(3232002, 1);
  }
  else
  {
    return sub_5F2BA0(3232002);
  }
}


//======================================================================
// sub_59CB50
// entry 0059cb50  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_59CB50(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &BigRaiseActionDialog::`vftable';
  return this;
}


//======================================================================
// sub_59CBA0
// entry 0059cba0  size 232  status ok
//======================================================================

int __stdcall sub_59CBA0(int a1)
{
  struct Concurrency::IExecutionContext *DefaultDestination; // eax
  int result; // eax
  int v3; // [esp+4h] [ebp-20h]
  char v4; // [esp+Ah] [ebp-1Ah]
  char v5; // [esp+Bh] [ebp-19h]

  v5 = a1 == 1 || a1 == 2;
  v4 = !a1 || a1 == 2;
  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  result = sub_5A2A40(DefaultDestination, v4, v5);
  if ( !(_BYTE)result )
  {
    sub_59B800((_DWORD *)dword_7935C4);
    if ( operator new(0x24u) )
      v3 = sub_59E5B0(a1);
    else
      v3 = 0;
    return sub_5FC420(v3);
  }
  return result;
}


//======================================================================
// sub_59CC90
// entry 0059cc90  size 371  status ok
//======================================================================

int __thiscall sub_59CC90(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

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
          sub_5DB240(dword_7935CC);
          *(_BYTE *)(a2 + 4) = 1;
        }
        else if ( tolower(*(char *)(a2 + 20)) == 98 && (v3 = sub_5F2A60(3232004, 0), (unsigned __int8)sub_6026D0(v3)) )
        {
          (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 1);
          *(_BYTE *)(a2 + 4) = 1;
        }
        else if ( (tolower(*(char *)(a2 + 20)) == 99 || tolower(*(char *)(a2 + 20)) == 112)
               && (v4 = sub_5F2A60(3232003, 0), (unsigned __int8)sub_6026D0(v4)) )
        {
          (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 24))(this, 0);
          *(_BYTE *)(a2 + 4) = 1;
        }
        else if ( tolower(*(char *)(a2 + 20)) == 97 )
        {
          v5 = sub_5F2A60(3232005, 0);
          if ( (unsigned __int8)sub_6026D0(v5) )
          {
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 2);
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
// sub_59CE10
// entry 0059ce10  size 233  status ok
//======================================================================

int __thiscall sub_59CE10(CMFCTabCtrl *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int i; // [esp+4h] [ebp-20h]
  _DWORD v6[3]; // [esp+8h] [ebp-1Ch]
  _DWORD v7[4]; // [esp+14h] [ebp-10h]

  v7[0] = "SID_BIGRAISE_RISK_ANTE";
  v7[1] = "SID_BIGRAISE_RISK_BIG_RAISE";
  v7[2] = "SID_BIGRAISE_ALL_IN";
  v6[0] = 0;
  v6[1] = 1;
  v6[2] = 2;
  v7[3] = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  sub_5F83D0(65002, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_GENERIC_ACTIONS");
  result = sub_5F73E0(v1, 73, 0, 3);
  for ( i = 0; i < 3; ++i )
  {
    v3 = sub_630F40(v7[i]);
    sub_5F9DE0(0, v6[i], 65006, 10, 35 * i + 38, 2, v3, 72, 75, 74, -1, 0);
    sub_5FB300(i);
    sub_5EB700(1);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_59CF00
// entry 0059cf00  size 94  status ok
//======================================================================

int __stdcall sub_59CF00(unsigned __int8 a1, unsigned __int8 a2)
{
  int result; // eax

  result = sub_5FB2B0(0);
  if ( !result )
  {
    sub_5F9CE0(0, 0, 65007, 10, 35 * (a1 + 2 * a2) + 3, 3, 0, 255, 0);
    sub_5FB2B0(0);
    return sub_5EB5D0(100);
  }
  return result;
}


//======================================================================
// sub_59CFC0
// entry 0059cfc0  size 32  status ok
//======================================================================

int __stdcall sub_59CFC0(int a1, int a2)
{
  return sub_59D110(a1, a2) - 15;
}


//======================================================================
// sub_59CFE0
// entry 0059cfe0  size 87  status ok
//======================================================================

int __stdcall sub_59CFE0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_59D0A0(a1, a2);
  if ( sub_62FBF0(2) )
    return v3 + sub_62FBF0(3);
  else
    return v3 - sub_62FBF0(3);
}


//======================================================================
// sub_59D040
// entry 0059d040  size 87  status ok
//======================================================================

int __stdcall sub_59D040(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_59D110(a1, a2);
  if ( sub_62FBF0(2) )
    return v3 + sub_62FBF0(3);
  else
    return v3 - sub_62FBF0(3);
}


//======================================================================
// sub_59D0A0
// entry 0059d0a0  size 112  status ok
//======================================================================

int __thiscall sub_59D0A0(_DWORD *this, int a2, int a3)
{
  _DWORD v4[12]; // [esp+4h] [ebp-30h]

  v4[0] = 342;
  v4[1] = 320;
  v4[2] = 371;
  v4[3] = 221;
  v4[4] = 189;
  v4[5] = 242;
  v4[6] = 514;
  v4[7] = 514;
  v4[8] = 555;
  v4[9] = 56;
  v4[10] = 15;
  v4[11] = 57;
  return v4[*(this + 696)];
}


//======================================================================
// sub_59D110
// entry 0059d110  size 112  status ok
//======================================================================

int __thiscall sub_59D110(_DWORD *this, int a2, int a3)
{
  _DWORD v4[12]; // [esp+4h] [ebp-30h]

  v4[0] = 310;
  v4[1] = 347;
  v4[2] = 341;
  v4[3] = 310;
  v4[4] = 341;
  v4[5] = 346;
  v4[6] = 234;
  v4[7] = 270;
  v4[8] = 243;
  v4[9] = 234;
  v4[10] = 242;
  v4[11] = 272;
  return v4[*(this + 696)];
}


//======================================================================
// sub_59D180
// entry 0059d180  size 16  status ok
//======================================================================

int sub_59D180()
{
  return 3215007;
}


//======================================================================
// sub_59D190
// entry 0059d190  size 373  status ok
//======================================================================

int __stdcall sub_59D190(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_7935C4;
  if ( *(_DWORD *)(dword_7935C4 + 160) )
  {
    sub_5EAF00(2025);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 160) + 176))(
      *(_DWORD *)(dword_7935C4 + 160),
      0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_7935C4 + 156) )
  {
    sub_5EAF00(2024);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 156) + 176))(
      *(_DWORD *)(dword_7935C4 + 156),
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
// sub_59D310
// entry 0059d310  size 433  status ok
//======================================================================

int __stdcall sub_59D310(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_7935C4;
  if ( *(_DWORD *)(dword_7935C4 + 160) )
  {
    sub_5EAF00(2023);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 160) + 176))(
      *(_DWORD *)(dword_7935C4 + 160),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 160) + 116))(*(_DWORD *)(dword_7935C4 + 160));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_7935C4 + 156) )
  {
    sub_5EAF00(2022);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 156) + 176))(
      *(_DWORD *)(dword_7935C4 + 156),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 156) + 116))(*(_DWORD *)(dword_7935C4 + 156));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_59D4D0
// entry 0059d4d0  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_59D4D0(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &BigRaiseDealCommunityScript::`vftable';
  *(this + 32) = sub_637810(4) < 2;
  return this;
}


//======================================================================
// sub_59D570
// entry 0059d570  size 738  status ok
//======================================================================

int __thiscall sub_59D570(void *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  int v4; // [esp+14h] [ebp-24h]
  int v6; // [esp+28h] [ebp-10h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
      if ( !(unsigned __int8)sub_59D870(this) || sub_5A2640(dword_7935D0) )
        result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      else
        result = sub_59D310((int)this);
      break;
    case 1:
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 2);
      if ( (unsigned __int8)sub_637630(dword_162EE84) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 116))(*(_DWORD *)(dword_7935C4 + 164));
        if ( operator new(0x20u) )
          v4 = sub_6010A0(this);
        else
          v4 = 0;
        sub_5F5D50(v4);
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   100006,
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
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 3);
      }
      break;
    case 2:
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 3);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 112))(*(_DWORD *)(dword_7935C4 + 164));
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 176))(
        *(_DWORD *)(dword_7935C4 + 164),
        0);
      v6 = 3;
      while ( --v6 >= 0 )
      {
        v3 = sub_6436C0(*((_DWORD *)dword_7935D0 + 1));
        sub_5A1E00(5, v3);
      }
      sub_5A3C20(5, 1);
      sub_59C2D0((_DWORD **)dword_7935C4);
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 20);
      break;
    case 3:
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 4);
      result = sub_59D190((int)this);
      break;
    case 4:
      *((_BYTE *)dword_7935D0 + 259) = 0;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 156) + 112))(*(_DWORD *)(dword_7935C4 + 156));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 160) + 112))(*(_DWORD *)(dword_7935C4 + 160));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
        *(_DWORD *)(dword_7935CC + 4),
        1,
        0);
      result = sub_5FC420(0);
      *((_BYTE *)dword_7935D0 + 280) = 1;
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_59D870
// entry 0059d870  size 89  status ok
//======================================================================

bool __thiscall sub_59D870(_BYTE *this)
{
  return (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 && !*(this + 32) && !*((_BYTE *)dword_7935D0 + 259);
}


//======================================================================
// sub_59D8D0
// entry 0059d8d0  size 144  status ok
//======================================================================

_BYTE *__thiscall sub_59D8D0(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &BigRaiseDealScript::`vftable';
  *(this + 36) = sub_637810(4) < 2;
  *((_BYTE *)dword_7935D0 + 280) = 0;
  *((_DWORD *)dword_7935D0 + 71) = 2;
  return this;
}


//======================================================================
// sub_59D980
// entry 0059d980  size 1008  status ok
//======================================================================

int __thiscall sub_59D980(_DWORD *this)
{
  int v1; // kr00_4
  int v2; // eax
  int result; // eax
  __int16 v4; // ax
  int v5; // [esp+14h] [ebp-30h]
  int v6; // [esp+18h] [ebp-2Ch]
  int v8; // [esp+34h] [ebp-10h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = sub_5A2370(dword_7935D0);
      if ( *(this + 8) == -1 )
      {
        v2 = sub_637810(0);
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 12))(this, 3, v2 / 4 + 1);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( !(unsigned __int8)sub_59DD90(this) || sub_5A2640(dword_7935D0) )
          result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        else
          result = sub_59D310((int)this);
      }
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( (unsigned __int8)sub_637630(dword_162EE84) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 116))(*(_DWORD *)(dword_7935C4 + 164));
        if ( operator new(0x20u) )
          v6 = sub_6010A0(this);
        else
          v6 = 0;
        sub_5F5D50(v6);
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   100006,
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
      if ( (unsigned __int8)sub_59DD90(this) )
      {
        if ( operator new(0x24u) )
          v5 = sub_59DDF0(*(this + 8), this);
        else
          v5 = 0;
        result = sub_5FC420(v5);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 112))(*(_DWORD *)(dword_7935C4 + 164));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 176))(
          *(_DWORD *)(dword_7935C4 + 164),
          0);
        v8 = (*(this + 8) == 4) + 2;
        while ( --v8 >= 0 )
        {
          v4 = sub_6436C0(*((_DWORD *)dword_7935D0 + 1));
          sub_5A1E00(*(this + 8), v4);
        }
        sub_59C2D0((_DWORD **)dword_7935C4);
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 20);
      }
      break;
    case 3:
      *((_WORD *)dword_7935D0 + 144) = sub_641280(*((_WORD *)dword_7935D0 + *((_DWORD *)dword_7935D0 + 71) + 112));
      if ( (int)sub_641280(*((_WORD *)dword_7935D0 + 114)) > 9 )
      {
        if ( (int)sub_641280(*((_WORD *)dword_7935D0 + 114)) <= 13 )
        {
          *((_WORD *)dword_7935D0 + 113) = *((_WORD *)dword_7935D0 + 114);
          *((_WORD *)dword_7935D0 + 114) = 0;
          *((_DWORD *)dword_7935D0 + 71) = 1;
        }
      }
      else
      {
        *((_WORD *)dword_7935D0 + 114) = 0;
      }
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      result = sub_59D190((int)this);
      break;
    case 4:
      *((_BYTE *)dword_7935D0 + 259) = 0;
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
        *(_DWORD *)(dword_7935CC + 4),
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
// sub_59DD90
// entry 0059dd90  size 89  status ok
//======================================================================

bool __thiscall sub_59DD90(_BYTE *this)
{
  return (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 && !*(this + 36) && !*((_BYTE *)dword_7935D0 + 259);
}


//======================================================================
// sub_59DDF0
// entry 0059ddf0  size 306  status ok
//======================================================================

_DWORD *__thiscall sub_59DDF0(_DWORD *this, int a2, int a3)
{
  _DWORD v5[6]; // [esp+8h] [ebp-3Ch]
  _DWORD v6[9]; // [esp+20h] [ebp-24h]

  sub_5FC0D0(a3);
  v6[8] = 0;
  *this = &BigRaiseDealToScript::`vftable';
  *(this + 8) = a2;
  v5[0] = 3215024;
  v5[1] = 3215022;
  v5[2] = 3215026;
  v5[3] = 3215020;
  v5[4] = 3215028;
  v5[5] = 3215028;
  v6[0] = 3215023;
  v6[1] = 3215021;
  v6[2] = 3215025;
  v6[3] = 3215019;
  v6[4] = 3215027;
  v6[5] = 3215027;
  sub_5EAF00(v5[a2]);
  sub_5EAF00(v6[a2]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 160) + 176))(*(_DWORD *)(dword_7935C4 + 160), 0);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 156) + 176))(0);
  return this;
}


//======================================================================
// sub_59DF30
// entry 0059df30  size 819  status ok
//======================================================================

int __thiscall sub_59DF30(_DWORD *this)
{
  int result; // eax
  __int16 v2; // ax
  int v3; // [esp+0h] [ebp-2Ch]
  int v5; // [esp+Ch] [ebp-20h]
  _WORD v6[6]; // [esp+10h] [ebp-1Ch]
  int v7; // [esp+20h] [ebp-Ch]
  int v8; // [esp+24h] [ebp-8h]
  __int16 v9; // [esp+28h] [ebp-4h]

  v6[0] = 36;
  v6[1] = 21;
  v6[2] = 28;
  v6[3] = 21;
  v6[4] = 19;
  v6[5] = 19;
  v9 = 3;
  v7 = *(_DWORD *)(dword_7935C4 + 160);
  v8 = *(_DWORD *)(dword_7935C4 + 156);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_7935BC <= word_7935B4 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_7935BC);
      if ( word_7935BC <= word_7935B0 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 176))(v8, word_7935BC);
      if ( word_7935BC == 9 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 112))(*(_DWORD *)(dword_7935C4 + 164));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935C4 + 164) + 176))(
          *(_DWORD *)(dword_7935C4 + 164),
          0);
      }
      else if ( (!*(this + 8) || *(this + 8) == 2) && word_7935BC == 17 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 51);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 108))(v8, 50);
      }
      else if ( word_7935BC > (__int16)v6[*(this + 8)] && !word_7935B8 )
      {
        if ( *(this + 8) == 4 )
          v3 = 3;
        else
          v3 = (*(this + 8) == 5) + 2;
        v5 = v3;
        while ( --v5 >= 0 )
        {
          v2 = sub_6436C0(*((_DWORD *)dword_7935D0 + 1));
          sub_5A1E00(*(this + 8), v2);
          ++word_7935B8;
        }
        sub_59C2D0((_DWORD **)dword_7935C4);
        v9 = 2;
      }
      if ( word_7935BC >= word_7935B4 && word_7935BC >= word_7935B0 )
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, v9);
    }
    else if ( result == 2 )
    {
      result = (int)this;
      if ( *(this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
        return sub_5FC420(0);
      }
    }
  }
  else
  {
    word_7935BC = 0;
    word_7935B8 = 0;
    word_7935B4 = sub_5EB240(v7);
    word_7935B0 = sub_5EB240(v8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 50);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 108))(v8, 51);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 176))(v8, 0);
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, v9);
  }
  return result;
}


//======================================================================
// sub_59E270
// entry 0059e270  size 73  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_59E270(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BigRaisePlayerDisplay::`vftable';
  for ( i = 0; i < 3; ++i )
    *((_DWORD *)this + i + 2) = 0;
  return this;
}


//======================================================================
// sub_59E2C0
// entry 0059e2c0  size 163  status ok
//======================================================================

void __thiscall sub_59E2C0(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &BigRaisePlayerDisplay::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_59E370
// entry 0059e370  size 194  status ok
//======================================================================

int __thiscall sub_59E370(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp+4h] [ebp-20h]
  void *v6; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  result = (int)this;
  *(this + 1) = a2;
  for ( i = 0; i < 3; ++i )
  {
    v6 = operator new(0x178u);
    if ( v6 )
    {
      sub_5EAAF0(v6);
      v4 = v3;
    }
    else
    {
      v4 = 0;
    }
    *(this + i + 2) = v4;
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 64))(*(this + i + 2));
  }
  return result;
}


//======================================================================
// sub_59E440
// entry 0059e440  size 358  status ok
//======================================================================

int __fastcall sub_59E440(int a1)
{
  int result; // eax
  CImageDisplay *v3; // [esp+Ch] [ebp-10h]
  LONG left; // [esp+10h] [ebp-Ch]
  int j; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  result = a1;
  if ( *(_DWORD *)(a1 + 4) != 4 && *(_DWORD *)(a1 + 4) != 5 )
  {
    sub_639110(*(_DWORD *)(a1 + 4));
    sub_646380(100);
    sub_639110(*(_DWORD *)(a1 + 4));
    sub_6464D0(0, 0);
    result = sub_5D9180(*(_DWORD *)(a1 + 4), 0);
  }
  for ( i = 0; i < 3; ++i )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * i + 8) + 112))(*(_DWORD *)(a1 + 4 * i + 8));
  if ( *(_DWORD *)(a1 + 4) == 4
    || *(_DWORD *)(a1 + 4) == 5
    || (result = dword_162EE80, *(_DWORD *)(*(_DWORD *)(dword_162EE80 + 4) + 4))
    || (v3 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(a1 + 4)),
        left = CImageDisplay::GetDisplayFormat(v3)->rcSource.left,
        result = left == 0,
        left)
    && (result = sub_5DCB00(*(_DWORD *)(a1 + 4)), !*(_BYTE *)(result + 1185)) )
  {
    for ( j = 0; j < 3; ++j )
    {
      if ( (unsigned __int16)sub_5A26F0(*(_DWORD *)(a1 + 4), j) )
        sub_59C930((_DWORD *)dword_7935C4, *(_DWORD *)(a1 + 4), j);
      result = j + 1;
    }
  }
  return result;
}


//======================================================================
// sub_59E5B0
// entry 0059e5b0  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_59E5B0(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &BigRaiseSayHumanLineScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_59E5E0
// entry 0059e5e0  size 425  status ok
//======================================================================

int __thiscall sub_59E5E0(_DWORD *this)
{
  int result; // eax
  struct Concurrency::IExecutionContext *v2; // eax
  char v3; // [esp+2h] [ebp-46h]
  char v4; // [esp+3h] [ebp-45h]
  int v5; // [esp+4h] [ebp-44h]
  CImageDisplay *v8; // [esp+14h] [ebp-34h]
  struct Concurrency::IExecutionContext *v9; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+24h] [ebp-24h]
  int v11; // [esp+28h] [ebp-20h]
  double v12; // [esp+30h] [ebp-18h]
  double v13; // [esp+38h] [ebp-10h]
  struct Concurrency::IExecutionContext *DefaultDestination; // [esp+44h] [ebp-4h]

  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      v4 = *(this + 8) == 1 || *(this + 8) == 2;
      v3 = !*(this + 8) || *(this + 8) == 2;
      v2 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
      result = sub_5A1EA0(v2, v3, v4);
      if ( (_BYTE)result )
      {
        sub_5FC420(0);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                 *(_DWORD *)(dword_7935CC + 4),
                 1,
                 0);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
    v10 = -1;
    if ( DefaultDestination != (struct Concurrency::IExecutionContext *)-1 )
    {
      v8 = (CImageDisplay *)sub_5DCB00(DefaultDestination);
      if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
      {
        v9 = DefaultDestination;
        v11 = -1;
        v12 = 0.0;
        v13 = 1.0;
        v5 = *(this + 8);
        if ( v5 )
        {
          if ( v5 == 2 )
            v10 = 2045;
        }
        else
        {
          v10 = 2094;
        }
      }
    }
    if ( v10 == -1 )
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
    else
      return sub_639390(&v9, this, 0, 0);
  }
  return result;
}


//======================================================================
// sub_59E920
// entry 0059e920  size 132  status ok
//======================================================================

int sub_59E920()
{
  _BYTE *v1; // [esp+4h] [ebp-1Ch]
  _BYTE *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x28u);
  if ( v2 )
    v1 = sub_59D8D0(v2);
  else
    v1 = 0;
  return sub_5FC420(v1);
}


//======================================================================
// sub_59E9B0
// entry 0059e9b0  size 2325  status ok
//======================================================================

int sub_59E9B0()
{
  int v1; // eax
  int v2; // [esp+0h] [ebp-138h]
  bool v4; // [esp+8h] [ebp-130h]
  int v5; // [esp+Ch] [ebp-12Ch]
  bool v7; // [esp+14h] [ebp-124h]
  int v8; // [esp+18h] [ebp-120h]
  bool v10; // [esp+20h] [ebp-118h]
  int v11; // [esp+24h] [ebp-114h]
  bool v13; // [esp+2Ch] [ebp-10Ch]
  bool v14; // [esp+30h] [ebp-108h]
  bool v15; // [esp+34h] [ebp-104h]
  bool v16; // [esp+38h] [ebp-100h]
  bool v17; // [esp+3Ch] [ebp-FCh]
  CImageDisplay *v18; // [esp+48h] [ebp-F0h]
  CImageDisplay *v19; // [esp+54h] [ebp-E4h]
  CImageDisplay *v20; // [esp+60h] [ebp-D8h]
  CImageDisplay *v21; // [esp+6Ch] [ebp-CCh]
  CImageDisplay *v22; // [esp+78h] [ebp-C0h]
  CImageDisplay *v23; // [esp+84h] [ebp-B4h]
  CImageDisplay *v24; // [esp+90h] [ebp-A8h]
  CImageDisplay *v25; // [esp+9Ch] [ebp-9Ch]
  CImageDisplay *v26; // [esp+A8h] [ebp-90h]
  CImageDisplay *v27; // [esp+B4h] [ebp-84h]
  CImageDisplay *v28; // [esp+C0h] [ebp-78h]
  CImageDisplay *v29; // [esp+CCh] [ebp-6Ch]
  __int64 v30; // [esp+E0h] [ebp-58h] BYREF
  int v31; // [esp+E8h] [ebp-50h]
  int v32; // [esp+ECh] [ebp-4Ch]
  int v33; // [esp+F0h] [ebp-48h]
  int v34; // [esp+F4h] [ebp-44h]
  _DWORD v35[4]; // [esp+F8h] [ebp-40h] BYREF
  double v36; // [esp+108h] [ebp-30h]
  double v37; // [esp+110h] [ebp-28h]
  int v38; // [esp+118h] [ebp-20h]
  int v39; // [esp+11Ch] [ebp-1Ch]
  double v40; // [esp+120h] [ebp-18h]
  double v41; // [esp+128h] [ebp-10h]
  int v42; // [esp+130h] [ebp-8h]
  struct Concurrency::IExecutionContext *DefaultDestination; // [esp+134h] [ebp-4h]

  v30 = sub_64C8A0(0, 0);
  v38 = -1;
  v32 = -1;
  v40 = 0.0;
  v41 = 1.0;
  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  v39 = -1;
  v42 = -1;
  v31 = -1;
  v34 = 0;
  v33 = unknown_libname_580(dword_7935D0);
  switch ( unknown_libname_579(dword_7935D0) )
  {
    case 0:
      v38 = 2094;
      v41 = 0.75;
      break;
    case 1:
      v38 = 2045;
      v41 = 0.75;
      break;
    case 2:
      sub_5DCB00(DefaultDestination);
      sub_5D6020(&v30);
      if ( *(int *)(sub_5DCB00(DefaultDestination) + 1192) <= 3 || sub_62FBF0(2) )
      {
        if ( *(int *)(sub_5DCB00(DefaultDestination) + 1192) >= -3 || sub_62FBF0(2) )
        {
          if ( *((_BYTE *)dword_7935D0 + (_DWORD)DefaultDestination + 260) )
          {
            v27 = (CImageDisplay *)sub_5DCB00(DefaultDestination);
            v15 = CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 3;
            v38 = v15 ? 1043 : 1022;
            v41 = 1.0;
          }
          else if ( (int)v30 >= 0 )
          {
            if ( (int)v30 > 0 )
            {
              v25 = (CImageDisplay *)sub_5DCB00(DefaultDestination);
              v13 = CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 2
                 || CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 3;
              v38 = v13 ? 1008 : 1028;
              v41 = 0.5;
            }
          }
          else
          {
            v26 = (CImageDisplay *)sub_5DCB00(DefaultDestination);
            v14 = CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 3;
            v38 = v14 ? 1000 : 1026;
            v41 = 0.5;
          }
        }
        else
        {
          v28 = (CImageDisplay *)sub_5DCB00(DefaultDestination);
          v16 = CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 3;
          v38 = v16 ? 1033 : 1023;
          v41 = 0.75;
        }
      }
      else
      {
        v29 = (CImageDisplay *)sub_5DCB00(DefaultDestination);
        v17 = CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 3;
        v38 = v17 ? 1044 : 1024;
        v41 = 0.75;
      }
      break;
    case 3:
      v42 = sub_5DAC90(dword_7935CC);
      v31 = sub_5DADA0(dword_7935CC);
      if ( !(unsigned __int8)sub_5DB190(dword_7935CC) || v42 == -1 )
      {
        if ( v42 != -1 )
        {
          sub_5DCB00(v42);
          sub_5D6020(&v30);
        }
        if ( v42 == -1 || (int)v30 <= 0 || sub_62FBF0(2) )
        {
          if ( v31 != -1 )
          {
            v20 = (CImageDisplay *)sub_5DCB00(v31);
            if ( CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 3 )
            {
              v5 = -1;
            }
            else
            {
              v5 = v31;
            }
            v33 = v5;
            v19 = (CImageDisplay *)sub_5DCB00(v31);
            v4 = CImageDisplay::GetDisplayFormat(v19)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v19)->rcSource.left == 3;
            v38 = v4 ? 1036 : 1011;
            v41 = 0.5;
          }
        }
        else
        {
          v22 = (CImageDisplay *)sub_5DCB00(v42);
          if ( CImageDisplay::GetDisplayFormat(v22)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v22)->rcSource.left == 3 )
          {
            v8 = -1;
          }
          else
          {
            v8 = v42;
          }
          v33 = v8;
          v21 = (CImageDisplay *)sub_5DCB00(v42);
          v7 = CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 3;
          v38 = v7 ? 1035 : 1010;
          v41 = 0.5;
        }
      }
      else
      {
        v24 = (CImageDisplay *)sub_5DCB00(v42);
        if ( CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 3 )
        {
          v11 = -1;
        }
        else
        {
          v11 = v42;
        }
        v33 = v11;
        v23 = (CImageDisplay *)sub_5DCB00(v42);
        v10 = CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 3;
        v38 = v10 ? 1042 : 1021;
        v41 = 1.0;
      }
      break;
    case 4:
      v39 = 170000;
      break;
    case 5:
      v39 = 170006;
      break;
    default:
      break;
  }
  sub_5A3B40(-1, -1);
  if ( v33 == 4 )
  {
    if ( v39 == -1 )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    return sub_5CD7C0(v39, *(_DWORD *)(dword_162EE80 + 4), 0);
  }
  else
  {
    if ( v38 == -1 || !sub_636730(dword_162EE84) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    if ( v33 > -1 )
    {
      v18 = (CImageDisplay *)sub_5DCB00(v33);
      if ( CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 3 )
      {
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    if ( v33 == -1 )
      v2 = sub_636C50(dword_162EE84);
    else
      v2 = v33;
    v35[0] = v2;
    v35[1] = v38;
    v35[2] = v32;
    v36 = v40;
    v37 = v41;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
    v1 = sub_637810(2);
    return sub_639390(v35, *(_DWORD *)(dword_162EE80 + 4), v1, 1);
  }
}


//======================================================================
// sub_59F2E0
// entry 0059f2e0  size 862  status ok
//======================================================================

int __thiscall sub_59F2E0(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  CImageDisplay *v11; // [esp+18h] [ebp-40h]
  __int64 v12; // [esp+3Ch] [ebp-1Ch] BYREF
  int v13; // [esp+44h] [ebp-14h]
  __int64 v14; // [esp+48h] [ebp-10h] BYREF
  __int64 v15; // [esp+50h] [ebp-8h] BYREF

  v14 = sub_64C8A0(0, 0);
  v15 = sub_64C8A0(0, 0);
  v12 = sub_64C8A0(0, 0);
  v13 = 3 * a2;
  v11 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
      sub_57AB80(dword_793578, 11, (int)&unk_74F988);
    else
      sub_57AE30(dword_793578);
    if ( (unsigned __int8)sub_5A2740(a2) )
      return sub_5DB7D0(0, 175);
    v2 = sub_5DCB00(a2);
    v3 = sub_5D5A50(v2);
    if ( v3 >= (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC) )
    {
      return sub_5DB7D0(0, 175);
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_7935CC) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return sub_59FA00();
    }
    else
    {
      v5 = sub_5DCB00(a2);
      return sub_5DBB70(v5);
    }
  }
  else if ( *(this + 7) )
  {
    *(this + 7) = 0;
    sub_57AE30(dword_793578);
    v7 = sub_5DCB00(a2);
    v8 = sub_5D5A50(v7);
    if ( v8 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC) )
    {
      if ( (unsigned __int8)sub_5DA7B0(dword_7935CC) )
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      else
        sub_5D9570(a2);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
    else
    {
      sub_59A6F0(a2, (int)&v15, (int)&v14, (int)&v12);
      if ( (int)v15 > 0 )
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**((_DWORD **)dword_7935D0 + v13 + 3) + 196))(
          *((_DWORD *)dword_7935D0 + v13 + 3),
          &v15,
          0,
          1);
      if ( (int)v14 > 0 )
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**((_DWORD **)dword_7935D0 + v13 + 4) + 196))(
          *((_DWORD *)dword_7935D0 + v13 + 4),
          &v14,
          0,
          1);
      if ( (int)v12 > 0 )
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**((_DWORD **)dword_7935D0 + v13 + 2) + 196))(
          *((_DWORD *)dword_7935D0 + v13 + 2),
          &v12,
          0,
          1);
      *(_BYTE *)(sub_5A1FF0(dword_7935D0) + 1184) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
               *(_DWORD *)(dword_7935CC + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 7) = 1;
    v6 = sub_637810(2);
    return sub_5DA360(v6);
  }
}


//======================================================================
// sub_59F640
// entry 0059f640  size 109  status ok
//======================================================================

int __stdcall sub_59F640(int a1)
{
  sub_5A3C20(a1, 1);
  sub_59C2D0((_DWORD **)dword_7935C4);
  sub_5A2B10(a1);
  *(_BYTE *)(sub_5DCB00(a1) + 1186) = 1;
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7935CC + 4) + 4))(*(_DWORD *)(dword_7935CC + 4), 1);
}


//======================================================================
// sub_59F6B0
// entry 0059f6b0  size 676  status ok
//======================================================================

int __thiscall sub_59F6B0(_BYTE *this, int a2)
{
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-44h]
  _DWORD *v6; // [esp+Ch] [ebp-40h]
  CImageDisplay *v9; // [esp+18h] [ebp-34h]
  _DWORD *v10; // [esp+24h] [ebp-28h]
  _DWORD *v11; // [esp+2Ch] [ebp-20h]
  _BYTE v12[10]; // [esp+34h] [ebp-18h] BYREF
  char v13; // [esp+3Eh] [ebp-Eh] BYREF
  char v14; // [esp+3Fh] [ebp-Dh] BYREF
  int v15; // [esp+48h] [ebp-4h]

  v9 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(dword_793578, 11, (int)&unk_751198);
      sub_5A3C40(a2);
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    if ( *(_DWORD *)sub_5CB880(v12, a2) )
    {
      v3 = sub_59B080(a2, &v14, &v13);
      if ( v3 == sub_630F40("SID_BIGRAISE_STRATEGY_ALL_IN_REQUIRED") )
      {
        v10 = operator new(0x24u);
        v15 = 1;
        if ( v10 )
          v5 = sub_59E5B0(v10, 2);
        else
          v5 = 0;
        v15 = -1;
        return sub_5FC420(v5);
      }
      else
      {
        sub_5A3C20(a2, 1);
        return sub_59C780(dword_7935C4);
      }
    }
    else
    {
      v11 = operator new(0x24u);
      v15 = 0;
      if ( v11 )
        v6 = sub_59E5B0(v11, 0);
      else
        v6 = 0;
      v15 = -1;
      return sub_5FC420(v6);
    }
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 8) )
    {
      *(this + 8) = 0;
      sub_59B080(a2, &v14, &v13);
      sub_5A1EA0(a2, v14, v13);
      if ( v14 )
        sub_5A3B40(v13 != 0, a2);
      sub_5A3B20(a2, 1);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
               *(_DWORD *)(dword_7935CC + 4),
               1,
               0);
    }
    else
    {
      *(this + 8) = 1;
      v4 = sub_637810(2);
      return sub_5DA360(v4);
    }
  }
}


//======================================================================
// sub_59F960
// entry 0059f960  size 154  status ok
//======================================================================

int __thiscall sub_59F960(_BYTE *this, int a2)
{
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_7935CC + 4) + 8))(
             *(_DWORD *)(dword_7935CC + 4),
             500,
             a2);
  sub_5A3880(dword_7935D0, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
           *(_DWORD *)(dword_7935CC + 4),
           1,
           0);
}


//======================================================================
// sub_59FA00
// entry 0059fa00  size 1388  status ok
//======================================================================

int __thiscall sub_59FA00(_BYTE *this)
{
  _BYTE *v3; // [esp+Ch] [ebp-68h]
  CImageDisplay *v6; // [esp+24h] [ebp-50h]
  CImageDisplay *v7; // [esp+30h] [ebp-44h]
  CImageDisplay *v8; // [esp+3Ch] [ebp-38h]
  CImageDisplay *v9; // [esp+4Ch] [ebp-28h]
  _BYTE *v10; // [esp+5Ch] [ebp-18h]
  int v11; // [esp+64h] [ebp-10h]
  int v12; // [esp+64h] [ebp-10h]
  int v13; // [esp+64h] [ebp-10h]

  sub_59C2D0((_DWORD **)dword_7935C4);
  if ( unknown_libname_579(dword_7935D0) != -1 )
    return sub_59E9B0();
  if ( *(this + 4) )
  {
    v11 = sub_5A2460(dword_7935D0);
    if ( *((_BYTE *)dword_162EE84 + 37) && v11 != -1 )
    {
      v9 = (CImageDisplay *)sub_5DCB00(v11);
      if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v11) + 1185) = 1;
        v11 = sub_5A2460(dword_7935D0);
      }
    }
    if ( v11 == -1 )
    {
      if ( !*(this + 11) )
      {
        sub_5A39E0(dword_7935D0);
        *(this + 11) = 1;
      }
      if ( *(this + 5) )
      {
        if ( (unsigned __int8)sub_5A29B0(dword_7935D0) )
        {
          sub_5F2870(dword_162EE80);
          sub_5A3AD0(-1, 0);
          return sub_59E920();
        }
        else
        {
          v12 = sub_5A2540(dword_7935D0);
          if ( v12 == -1 )
          {
            if ( *(this + 6) )
            {
              v13 = sub_5A2290(dword_7935D0);
              if ( v13 == -1 )
              {
                sub_5A3AD0(-1, 0);
                if ( !(unsigned __int8)sub_5DA7B0(dword_7935CC) || *(this + 9) )
                {
                  if ( (unsigned __int8)sub_5A3E30(4) )
                  {
                    if ( *((_BYTE *)dword_162EE84 + 37) )
                      return sub_59F960(this, 200);
                    else
                      return sub_59CA00((void *)dword_7935C4);
                  }
                  else
                  {
                    sub_5A3C20(4, 1);
                    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                             *(_DWORD *)(dword_7935CC + 4),
                             1,
                             0);
                  }
                }
                else
                {
                  *(this + 9) = 1;
                  sub_5A3B40(3, -1);
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                           *(_DWORD *)(dword_7935CC + 4),
                           1,
                           0);
                }
              }
              else
              {
                sub_5A3AD0(v13, 0);
                if ( *(this + 10) || !(unsigned __int8)sub_5A3E80(v13) )
                {
                  *(this + 10) = 0;
                  sub_59F640(v13);
                  v6 = (CImageDisplay *)sub_5DCB00(v13);
                  if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
                    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
                  {
                    sub_5A3B40(2, -1);
                  }
                  else
                  {
                    sub_5A3B40(2, v13);
                  }
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                           *(_DWORD *)(dword_7935CC + 4),
                           1,
                           0);
                }
                else
                {
                  sub_5A3C20(v13, 1);
                  *(this + 10) = 1;
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                           *(_DWORD *)(dword_7935CC + 4),
                           1,
                           0);
                }
              }
            }
            else
            {
              *(this + 6) = 1;
              sub_5A3C20(4, 1);
              v10 = operator new(0x24u);
              if ( v10 )
                v3 = sub_59D4D0(v10);
              else
                v3 = 0;
              sub_5FC420(v3);
              sub_5A3C20(5, 1);
              return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                       *(_DWORD *)(dword_7935CC + 4),
                       1,
                       0);
            }
          }
          else
          {
            *((_BYTE *)dword_7935D0 + 259) = 0;
            v7 = (CImageDisplay *)sub_5DCB00(v12);
            if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
            {
              sub_5A3AD0(v12, 1);
            }
            else
            {
              sub_5A3AD0(v12, 0);
            }
            return sub_59F6B0(this, v12);
          }
        }
      }
      else
      {
        *(this + 5) = 1;
        sub_5A3B40(5, 4);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                 *(_DWORD *)(dword_7935CC + 4),
                 1,
                 0);
      }
    }
    else
    {
      v8 = (CImageDisplay *)sub_5DCB00(v11);
      if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
      {
        sub_5A3AD0(v11, 1);
      }
      else
      {
        sub_5A3AD0(v11, 0);
      }
      return sub_59F2E0(this, v11);
    }
  }
  else
  {
    *(this + 4) = 1;
    sub_5A3B40(4, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
             *(_DWORD *)(dword_7935CC + 4),
             1,
             0);
  }
}


//======================================================================
// sub_59FFA0
// entry 0059ffa0  size 149  status ok
//======================================================================

_DWORD *__thiscall sub_59FFA0(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &BigRaiseRoom::`vftable';
  sub_5F1AD0(65000);
  dword_7935CC = (int)this;
  dword_7935C0 = 0;
  dword_7935C4 = 0;
  dword_7935C8 = 0;
  dword_7935D0 = 0;
  return this;
}


//======================================================================
// sub_5A0040
// entry 005a0040  size 324  status ok
//======================================================================

int __thiscall sub_5A0040(_DWORD *this)
{
  *this = &BigRaiseRoom::`vftable';
  dword_7935CC = 0;
  if ( dword_7935C0 )
    (**(void (__thiscall ***)(int, int))dword_7935C0)(dword_7935C0, 1);
  dword_7935C0 = 0;
  if ( dword_7935C4 )
    (**(void (__thiscall ***)(int, int))dword_7935C4)(dword_7935C4, 1);
  dword_7935C4 = 0;
  if ( dword_7935C8 )
    (**(void (__thiscall ***)(int, int))dword_7935C8)(dword_7935C8, 1);
  dword_7935C8 = 0;
  if ( dword_7935D0 )
    (**(void (__thiscall ***)(Concurrency::details::UMSThreadVirtualProcessor *, int))dword_7935D0)(dword_7935D0, 1);
  dword_7935D0 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_5A0190
// entry 005a0190  size 117  status ok
//======================================================================

int __thiscall sub_5A0190(void *this, int a2)
{
  int result; // eax
  struct Concurrency::IExecutionContext *DefaultDestination; // eax
  unsigned __int8 v5; // [esp+6h] [ebp-2h] BYREF
  unsigned __int8 v6; // [esp+7h] [ebp-1h] BYREF

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(dword_7935C4 + 80) )
      {
        DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
        sub_59B080((int)DefaultDestination, &v6, &v5);
        return sub_59CF00(v6, v5);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5A0210
// entry 005a0210  size 281  status ok
//======================================================================

int __thiscall sub_5A0210(void *this)
{
  const CHAR *v1; // eax
  struct Concurrency::IExecutionContext *v3; // eax
  int v4; // eax
  const CHAR *v5; // [esp-8h] [ebp-30h]
  _BYTE v7[8]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v8[8]; // [esp+18h] [ebp-10h] BYREF
  int v9; // [esp+20h] [ebp-8h]
  struct Concurrency::IExecutionContext *DefaultDestination; // [esp+24h] [ebp-4h]

  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  v9 = 3 * (_DWORD)DefaultDestination;
  if ( !(unsigned __int8)sub_5A2970(dword_7935D0)
    || *(_DWORD *)sub_5CB880(v8, DefaultDestination)
    || *(int *)sub_5CB880(v7, DefaultDestination) <= 0 )
  {
    v3 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
    if ( (unsigned __int8)sub_5A2740(v3) )
      *(_BYTE *)(sub_5A1FF0(dword_7935D0) + 1184) = 1;
    else
      *(_BYTE *)(sub_5A1FF0(dword_7935D0) + 1185) = 1;
    v4 = sub_5A1FF0(dword_7935D0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 20))(v4, v4);
    sub_5DB890(this);
    return sub_59FA00((_BYTE *)dword_7935C8);
  }
  else
  {
    v5 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
    v1 = (const CHAR *)sub_630F40("SID_BIGRAISE_INVALID_ANTE_BET");
    return sub_62FF10(v1, v5, 0);
  }
}


//======================================================================
// sub_5A0330
// entry 005a0330  size 80  status ok
//======================================================================

int __thiscall sub_5A0330(void *this, char a2)
{
  sub_5A3BD0(a2 == 0);
  sub_637610(dword_162EE84);
  sub_5DB9B0(dword_7935CC);
  sub_5A3880(dword_7935D0, this);
  return sub_59F960((_BYTE *)dword_7935C8, 0);
}


//======================================================================
// sub_5A0390
// entry 005a0390  size 50  status ok
//======================================================================

int __stdcall sub_5A0390(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 440;
  v2[1] = 98;
  v2[2] = 527;
  v2[3] = 12;
  return v2[a1];
}


//======================================================================
// sub_5A03D0
// entry 005a03d0  size 50  status ok
//======================================================================

int __stdcall sub_5A03D0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 267;
  v2[1] = 267;
  v2[2] = 81;
  v2[3] = 81;
  return v2[a1];
}


//======================================================================
// sub_5A0410
// entry 005a0410  size 35  status ok
//======================================================================

int sub_5A0410()
{
  if ( dword_7935D0 )
    return sub_5A1FF0(dword_7935D0);
  else
    return 0;
}


//======================================================================
// sub_5A0440
// entry 005a0440  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_5A0440(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+28h] [ebp-4h]

  v4 = 306;
  v5[0] = 246;
  v5[1] = 150;
  v5[2] = 246;
  v5[3] = 458;
  v5[4] = 76;
  v5[5] = 5;
  v5[6] = 74;
  if ( a2 >= 4 )
  {
    v6 = 0;
    sub_5E9F20((char)"false", "..\\Casino\\bigraiseroom.cpp", 143);
    *a1 = 0;
    a1[1] = v6;
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
// sub_5A04E0
// entry 005a04e0  size 18  status ok
//======================================================================

int __stdcall sub_5A04E0(int a1)
{
  return 1046;
}


//======================================================================
// sub_5A0500
// entry 005a0500  size 198  status ok
//======================================================================

int __stdcall sub_5A0500(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // ecx
  int *v4; // eax
  int v5; // edx
  int v6; // [esp+4h] [ebp-28h]
  unsigned __int8 v7; // [esp+Bh] [ebp-21h]
  _BYTE v8[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+1Ch] [ebp-10h]
  __int64 v11; // [esp+20h] [ebp-Ch]
  int i; // [esp+28h] [ebp-4h]

  v7 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v7;
  if ( !v7 )
  {
    v11 = sub_64C8A0(0, 0);
    *a2 = v11;
    result = HIDWORD(v11);
    a2[1] = HIDWORD(v11);
    for ( i = 0; i < 3; ++i )
    {
      v6 = *((_DWORD *)dword_7935D0 + 3 * a1 + i + 2);
      v3 = *(_DWORD *)(v6 + 32 * a1 + 76);
      v9 = *(_DWORD *)(v6 + 32 * a1 + 72);
      v10 = v3;
      v4 = (int *)sub_64C5C0(v8, v9, v3);
      v5 = *v4;
      result = v4[1];
      *a2 = v5;
      a2[1] = result;
    }
  }
  return result;
}


//======================================================================
// sub_5A05D0
// entry 005a05d0  size 16  status ok
//======================================================================

int sub_5A05D0()
{
  return 9;
}


//======================================================================
// sub_5A05E0
// entry 005a05e0  size 367  status ok
//======================================================================

int __stdcall sub_5A05E0(int a1)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-18h]
  CImageDisplay *v4; // [esp+10h] [ebp-10h]

  result = sub_5D7F40(a1);
  if ( dword_7935D0 )
  {
    result = sub_5A2460(dword_7935D0);
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
            result = sub_5A36C0(v3);
        }
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    result = a1;
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      if ( dword_7935C4 )
      {
        if ( dword_7935D0 )
        {
          if ( *(_DWORD *)(dword_7935C4 + 156) )
          {
            if ( *(_DWORD *)(dword_7935C4 + 160) )
            {
              result = sub_5F54A0(*(_DWORD *)(dword_7935C4 + 156));
              if ( (_BYTE)result
                || (result = (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_7935C4 + 160)), (_BYTE)result) )
              {
                *((_BYTE *)dword_7935D0 + 259) = 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


