//======================================================================
// sub_4445D0
// entry 004445d0  size 16  status ok
//======================================================================

char **sub_4445D0()
{
  return &off_713B14;
}


//======================================================================
// sub_444600
// entry 00444600  size 94  status ok
//======================================================================

char __stdcall sub_444600(_DWORD *a1, int a2)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  a1[2] = 1;
  a1[3] = 1;
  a1[4] = 1;
  a1[5] = 0;
  a1[6] = 0;
  return 1;
}


//======================================================================
// sub_444660
// entry 00444660  size 16  status ok
//======================================================================

int sub_444660()
{
  return 12;
}


//======================================================================
// sub_444670
// entry 00444670  size 39  status ok
//======================================================================

char __stdcall sub_444670(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  return 1;
}


//======================================================================
// sub_4446A0
// entry 004446a0  size 72  status ok
//======================================================================

char __stdcall sub_4446A0(_BYTE *a1)
{
  _BYTE *v2; // [esp+8h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  return 1;
}


//======================================================================
// sub_4446F0
// entry 004446f0  size 53  status ok
//======================================================================

char __stdcall sub_4446F0(int a1)
{
  if ( !a1 )
    return 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return 1;
}


//======================================================================
// sub_444750
// entry 00444750  size 253  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_444750(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v8 = sub_63AAE0(7);
  *a2 += *(_DWORD *)(v8 + 4);
  a2[1] += *(_DWORD *)(v8 + 8);
  *a3 += *(_DWORD *)(v8 + 4);
  a3[1] += *(_DWORD *)(v8 + 8);
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)7 )
    {
      sub_5E0C40(a1, &v5, v7);
      *a2 += v7[0] + v5;
      a2[1] += v6;
      *a3 += v5;
      a3[1] += v6;
      *a4 += v7[0];
      result = (struct Concurrency::details::_TaskCollectionBase *)(v7[1] + a4[1]);
      a4[1] = result;
    }
  }
  return result;
}


//======================================================================
// sub_444850
// entry 00444850  size 244  status ok
//======================================================================

char __stdcall sub_444850(int a1, int a2)
{
  int *v2; // eax
  int v3; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-64h] BYREF
  __int64 v6; // [esp+Ch] [ebp-5Ch]
  __int64 v7; // [esp+14h] [ebp-54h]
  __int64 v8; // [esp+1Ch] [ebp-4Ch] BYREF
  __int64 v9; // [esp+24h] [ebp-44h] BYREF
  int v10; // [esp+2Ch] [ebp-3Ch]
  char Destination[52]; // [esp+30h] [ebp-38h] BYREF

  v10 = sub_63AAE0(7);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v6 = sub_64C8A0(0, 0);
  v9 = v6;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)7 )
    sub_5E0C40(a2, &v8, &v9);
  v2 = (int *)sub_64C5C0(v5, v8, HIDWORD(v8));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  return 1;
}


//======================================================================
// sub_444950
// entry 00444950  size 30  status ok
//======================================================================

char __stdcall sub_444950(int a1)
{
  sub_5FB5A0(2, "$0.00");
  return 1;
}


//======================================================================
// sub_444970
// entry 00444970  size 41  status ok
//======================================================================

char __stdcall sub_444970(int a1)
{
  if ( a1 != 3209000 )
    return 0;
  sub_653BD0(7);
  return 1;
}


//======================================================================
// sub_4449A0
// entry 004449a0  size 15  status ok
//======================================================================

char __stdcall sub_4449A0(int a1)
{
  return 0;
}


//======================================================================
// sub_4449B0
// entry 004449b0  size 15  status ok
//======================================================================

char __stdcall sub_4449B0(int a1)
{
  return 0;
}


//======================================================================
// sub_4449C0
// entry 004449c0  size 16  status ok
//======================================================================

void *sub_4449C0()
{
  return &unk_713B18;
}


//======================================================================
// sub_4449E0
// entry 004449e0  size 16  status ok
//======================================================================

void *sub_4449E0()
{
  return &unk_713930;
}


//======================================================================
// sub_4449F0
// entry 004449f0  size 16  status ok
//======================================================================

void *sub_4449F0()
{
  return &unk_713AC4;
}


//======================================================================
// sub_444A00
// entry 00444a00  size 53  status ok
//======================================================================

char __stdcall sub_444A00(int a1, int a2)
{
  if ( a1 != 3209000 )
    return 0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 7, -1);
  return 1;
}


//======================================================================
// sub_444A50
// entry 00444a50  size 41  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_444A50(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &HorseRacingState::`vftable';
  *((_BYTE *)this + 606) = 1;
  return this;
}


//======================================================================
// sub_444AA0
// entry 00444aa0  size 31  status ok
//======================================================================

int sub_444AA0()
{
  sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_444AC0
// entry 00444ac0  size 43  status ok
//======================================================================

char sub_444AC0()
{
  if ( (unsigned __int8)sub_637670(dword_162EE84) )
    return *(_BYTE *)sub_444AA0();
  else
    return 0;
}


//======================================================================
// sub_444B10
// entry 00444b10  size 406  status ok
//======================================================================

int __thiscall sub_444B10(_BYTE *this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  *(this + 605) = 0;
  *(this + 604) = 0;
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + 30 * i + 1) = -1;
    strcpy(this + 120 * i + 8, &Source);
    *((_DWORD *)this + 30 * i + 15) = 0;
    *((_DWORD *)this + 30 * i + 16) = 0;
    *((_DWORD *)this + 30 * i + 17) = -1;
    *((_DWORD *)this + 30 * i + 18) = 0;
    *((_DWORD *)this + 30 * i + 19) = -1;
    for ( j = 0; j < 3; ++j )
    {
      *((_DWORD *)this + 30 * i + 2 * j + 20) = 0;
      *((_DWORD *)this + 30 * i + 2 * j + 21) = 1;
    }
    *((_DWORD *)this + 30 * i + 26) = 0;
    *((_DWORD *)this + 30 * i + 27) = -1;
    *((_DWORD *)this + 30 * i + 28) = -1;
    *((_DWORD *)this + 30 * i + 29) = 0;
    *(this + 120 * i + 120) = 0;
  }
  sub_444F40(this);
  *(this + 606) = 1;
  result = sub_444CB0(this);
  if ( (_BYTE)result )
  {
    v2 = sub_5DCB00(0);
    return sub_5DBB70(v2);
  }
  return result;
}


//======================================================================
// sub_444CB0
// entry 00444cb0  size 38  status ok
//======================================================================

bool sub_444CB0()
{
  int v0; // eax

  v0 = sub_5DCB00(0);
  return sub_5D5A50(v0) < 2;
}


//======================================================================
// sub_444CE0
// entry 00444ce0  size 30  status ok
//======================================================================

int __thiscall sub_444CE0(_BYTE *this)
{
  sub_444B10(this);
  return sub_440020((void *)dword_7906F4);
}


//======================================================================
// sub_444D00
// entry 00444d00  size 44  status ok
//======================================================================

int __thiscall sub_444D00(_DWORD *this, int a2, int a3)
{
  *(this + 30 * a2 + 17) = a3;
  return sub_43FC80((_DWORD **)dword_7906F4, a2);
}


//======================================================================
// sub_444D30
// entry 00444d30  size 501  status ok
//======================================================================

char __thiscall sub_444D30(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  LOBYTE(v2) = a2;
  switch ( a2 )
  {
    case 0:
      if ( (unsigned __int8)sub_445AE0(this) )
      {
        *(_BYTE *)(this + 606) = 0;
        LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_7906EC + 4) + 8))(
                       *(_DWORD *)(dword_7906EC + 4),
                       2,
                       20);
      }
      else
      {
        LOBYTE(v2) = sub_444CB0();
        if ( (_BYTE)v2 )
        {
          v3 = sub_5DCB00(0);
          LOBYTE(v2) = sub_5DBB70(v3);
        }
      }
      break;
    case 1:
      LOBYTE(v2) = sub_445F50(this);
      break;
    case 2:
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7906EC + 4) + 28))(
                     *(_DWORD *)(dword_7906EC + 4),
                     0);
      break;
    case 3:
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
      LOBYTE(v2) = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
                     dword_162EE84,
                     v4);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7906EC + 4) + 28))(*(_DWORD *)(dword_7906EC + 4), 0);
      LOBYTE(v2) = sub_43D2C0(*(_DWORD *)(dword_7906F4 + 24));
      break;
    default:
      break;
  }
  if ( a2 >= 5 && a2 <= 19 )
  {
    v9 = (a2 - 5) / 3;
    v10 = (a2 - 5) % 3;
    v5 = sub_5FB3F0(a2, v9);
    LOBYTE(v2) = sub_600230(v5);
    if ( (_BYTE)v2 )
    {
      v2 = *(_DWORD *)(this + 120 * v9 + 68);
      if ( v2 != v10 )
      {
        v6 = (const char *)sub_5FB8B0(v9 + 20);
        if ( !strcmp(v6, "1") )
        {
          sub_5FB8F0(v9 + 20, &unk_6B83F8);
          sub_440260((_DWORD **)dword_7906F4);
          sub_440310((_DWORD *)dword_7906F4);
          sub_440490((_DWORD **)dword_7906F4);
        }
        sub_444D00((_DWORD *)this, v9, v10);
        LOBYTE(v2) = sub_440310((_DWORD *)dword_7906F4);
      }
    }
  }
  return v2;
}


//======================================================================
// sub_444F40
// entry 00444f40  size 1680  status ok
//======================================================================

void __thiscall sub_444F40(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int j; // [esp+Ch] [ebp-3Ch]
  int k; // [esp+Ch] [ebp-3Ch]
  int v12; // [esp+10h] [ebp-38h]
  _DWORD v13[5]; // [esp+14h] [ebp-34h]
  int v14; // [esp+28h] [ebp-20h]
  int i; // [esp+2Ch] [ebp-1Ch]
  int v16; // [esp+30h] [ebp-18h]
  _DWORD v17[5]; // [esp+34h] [ebp-14h]

  v16 = 0;
  v13[0] = 3;
  v13[1] = 3;
  v13[2] = 4;
  v13[3] = 7;
  v13[4] = 7;
  v17[0] = 1;
  v17[1] = 4;
  v17[2] = 5;
  v17[3] = 5;
  v17[4] = 13;
  while ( v16 < 5 )
  {
    v12 = sub_62FBF0(5);
    if ( !*(this + 30 * v12 + 20) )
    {
      v1 = sub_62FBF0(v17[v16]);
      *(this + 30 * v12 + 20) = v13[v16] + v1;
      switch ( *(this + 30 * v12 + 20) )
      {
        case 3:
          *(this + 30 * v12 + 22) = 2;
          break;
        case 4:
        case 5:
          *(this + 30 * v12 + 22) = sub_62FBF0(2) + 2;
          *(this + 30 * v12 + 24) = sub_62FBF0(2) + 2;
          if ( *(this + 30 * v12 + 24) == 3 )
            *(this + 30 * v12 + 25) = 2;
          break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
          v2 = *(this + 30 * v12 + 20) - 2;
          *(this + 30 * v12 + 22) = v2 - sub_62FBF0(3);
          if ( *(this + 30 * v12 + 22) != 2 )
          {
            v3 = sub_62FBF0(*(this + 30 * v12 + 22));
            *(this + 30 * v12 + 24) = v3 - sub_62FBF0(3);
            if ( (int)*(this + 30 * v12 + 24) < 2 )
              *(this + 30 * v12 + 24) = 2;
          }
          break;
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
          v4 = *(this + 30 * v12 + 20) - 2;
          *(this + 30 * v12 + 22) = v4 - sub_62FBF0(5);
          if ( *(this + 30 * v12 + 22) != 2 )
          {
            v5 = sub_62FBF0(*(this + 30 * v12 + 22));
            *(this + 30 * v12 + 24) = v5 - sub_62FBF0(4);
            if ( (int)*(this + 30 * v12 + 24) < 2 )
              *(this + 30 * v12 + 24) = 2;
          }
          break;
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
          v6 = *(this + 30 * v12 + 20) - 2;
          *(this + 30 * v12 + 22) = v6 - sub_62FBF0(8);
          if ( *(this + 30 * v12 + 22) != 2 )
          {
            v7 = sub_62FBF0(*(this + 30 * v12 + 22));
            *(this + 30 * v12 + 24) = v7 - sub_62FBF0(5);
            if ( (int)*(this + 30 * v12 + 24) < 2 )
              *(this + 30 * v12 + 24) = 2;
          }
          break;
        default:
          break;
      }
      if ( *(this + 30 * v12 + 22) == 2 )
      {
        *(this + 30 * v12 + 24) = 3;
        *(this + 30 * v12 + 25) = 2;
      }
      if ( *(this + 30 * v12 + 24) == 2 && *(this + 30 * v12 + 25) == 2 )
        sub_5E9F20((char)"false", "..\\Casino\\horseracingstate.cpp", 218);
      for ( i = 0; i < 5; ++i )
      {
        if ( i != v12 )
        {
          for ( j = 0; j < 3; ++j )
          {
            if ( *(this + 30 * v12 + 2 * j + 20) > *(this + 30 * i + 2 * j + 20)
              && *(this + 30 * i + 2 * j + 21) == 1
              && *(this + 30 * v12 + 2 * j + 21) == 1
              && j != 2 )
            {
              if ( *(this + 30 * v12 + 2 * j + 22) < *(this + 30 * i + 2 * j + 22)
                && *(this + 30 * v12 + 2 * j + 23) == 1
                && *(this + 30 * i + 2 * j + 23) == 1 )
              {
                v14 = *(this + 30 * v12 + 2 * j + 22);
                *(this + 30 * v12 + 2 * j + 22) = *(this + 30 * i + 2 * j + 22);
                *(this + 30 * i + 2 * j + 22) = v14;
              }
              else if ( *(this + 30 * v12 + 2 * j + 22) == *(this + 30 * i + 2 * j + 22)
                     && *(this + 30 * v12 + 2 * j + 23) == 1
                     && *(this + 30 * i + 2 * j + 23) == 1
                     && (int)*(this + 30 * i + 2 * j + 22) > 2 )
              {
                if ( *(this + 30 * i + 2 * j + 22) == 3 )
                {
                  --*(this + 30 * i + 2 * j + 22);
                }
                else
                {
                  v8 = (int)(this + 30 * i + 1);
                  *(_DWORD *)(v8 + 8 * j + 84) -= sub_62FBF0(3);
                }
              }
            }
          }
        }
      }
      ++v16;
    }
  }
  for ( k = 0; k < 5; ++k )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( *(this + 30 * k + 2 * i + 20) == *(this + 30 * k + 2 * i + 21) && *(this + 30 * k + 2 * i + 20) != 1 )
      {
        *(this + 30 * k + 2 * i + 20) = 1;
        *(this + 30 * k + 2 * i + 21) = 1;
      }
    }
  }
}


//======================================================================
// sub_445600
// entry 00445600  size 135  status ok
//======================================================================

int __thiscall sub_445600(_DWORD *this, int a2)
{
  int i; // [esp+Ch] [ebp-Ch]
  int v4; // [esp+10h] [ebp-8h]
  int v5; // [esp+14h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + 30 * i + 18) > v5 )
    {
      v5 = *(this + 30 * i + 18);
      v4 = i;
    }
  }
  if ( v4 == a2 )
    return 0;
  else
    return v5 - *(this + 30 * a2 + 18);
}


//======================================================================
// sub_445690
// entry 00445690  size 875  status ok
//======================================================================

int __thiscall sub_445690(int this, int a2)
{
  int v3; // [esp+4h] [ebp-14h]
  int v5; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v5 = 8;
  ++*(_DWORD *)(this + 120 * a2 + 72);
  *(_DWORD *)(this + 120 * a2 + 104) = *(_DWORD *)(this + 120 * a2 + 80);
  if ( *(_DWORD *)(dword_7906F4 + 176) == 2 && !sub_445600((_DWORD *)this, a2) )
    *(_DWORD *)(this + 120 * a2 + 104) = sub_62FBF0(5);
  if ( *(int *)(dword_7906F4 + 176) > 0 && sub_445600((_DWORD *)this, a2) >= 6 )
    *(_DWORD *)(this + 120 * a2 + 104) = sub_62FBF0(5);
  v3 = *(_DWORD *)(dword_7906F4 + 176);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(this + 120 * a2 + 116) )
      {
        --*(_DWORD *)(this + 120 * a2 + 116);
        v5 = *(_DWORD *)(*(_DWORD *)(dword_7906F4 + 4 * a2 + 4) + 376);
      }
      else if ( *(_BYTE *)(this + 120 * a2 + 120) )
      {
        if ( !*(_BYTE *)(this + 605) )
        {
          *(_BYTE *)(this + 605) = 1;
          sub_43D2C0(*(_DWORD *)(dword_7906F4 + 24));
          sub_43D6C0(*(_DWORD *)(dword_7906F4 + 24), a2);
        }
        *(_DWORD *)(this + 120 * a2 + 116) = 20;
        v5 = 4;
      }
      else if ( sub_62FBF0(2) && sub_445600((_DWORD *)this, a2) )
      {
        v5 = sub_62FBF0(3) + 9;
        *(_DWORD *)(this + 120 * a2 + 116) = sub_62FBF0(5) + 10;
      }
      else
      {
        if ( !sub_445600((_DWORD *)this, a2) && sub_62FBF0(2) )
          *(_DWORD *)(this + 120 * a2 + 104) = sub_62FBF0(10) + 6;
        v5 = sub_62FBF0(*(_DWORD *)(this + 120 * a2 + 104)) + 11;
      }
    }
    else if ( v3 == 2 )
    {
      if ( *(_DWORD *)(this + 120 * a2 + 116) )
      {
        --*(_DWORD *)(this + 120 * a2 + 116);
        v5 = *(_DWORD *)(*(_DWORD *)(dword_7906F4 + 4 * a2 + 4) + 376);
      }
      else if ( sub_62FBF0(2) && sub_445600((_DWORD *)this, a2) >= 6 )
      {
        v5 = sub_62FBF0(3) + 9;
        *(_DWORD *)(this + 120 * a2 + 116) = sub_62FBF0(5) + 5;
      }
      else
      {
        v5 = sub_62FBF0(*(_DWORD *)(this + 120 * a2 + 104)) + 9;
      }
    }
  }
  else
  {
    for ( i = 0;
          i < 5
       && (int)CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(dword_7906F4 + 4 * i + 4)) < 35;
          ++i )
    {
      ;
    }
    if ( i >= 5 )
      v5 = sub_62FBF0(5) + 12;
    else
      v5 = sub_62FBF0(*(_DWORD *)(this + 120 * a2 + 104)) + 12;
  }
  if ( v5 > 20 )
    return sub_62FBF0(6) + 10;
  return v5;
}


//======================================================================
// sub_445A00
// entry 00445a00  size 136  status ok
//======================================================================

int __stdcall sub_445A00(int a1)
{
  const char *v1; // eax
  int v2; // eax
  const char *v3; // eax
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v5 = sub_5FB810(a1 + 20);
  v1 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 184))(v5);
  if ( strcmp(v1, &Source) )
  {
    v2 = sub_5FB810(a1 + 20);
    v3 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 184))(v2, v2);
    return atoi(v3);
  }
  return v6;
}


//======================================================================
// sub_445A90
// entry 00445a90  size 67  status ok
//======================================================================

int sub_445A90()
{
  int v1; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v1 = 0;
  for ( i = 0; i < 5; ++i )
    v1 += sub_445A00(i);
  return v1;
}


//======================================================================
// sub_445AE0
// entry 00445ae0  size 861  status ok
//======================================================================

char __thiscall sub_445AE0(_DWORD *this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const CHAR *v4; // eax
  int v6; // eax
  const CHAR *v7; // eax
  const char *v8; // eax
  const CHAR *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  unsigned int Flags; // eax
  int v13; // esi
  const CHAR *v14; // [esp-8h] [ebp-38h]
  const CHAR *v15; // [esp-8h] [ebp-38h]
  const CHAR *v16; // [esp-8h] [ebp-38h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+20h] [ebp-10h]
  int i; // [esp+24h] [ebp-Ch]
  int j; // [esp+24h] [ebp-Ch]
  int k; // [esp+24h] [ebp-Ch]
  __int64 v23; // [esp+28h] [ebp-8h]

  for ( i = 0; i < 5; ++i )
  {
    v1 = (const char *)sub_5FB8B0(i + 20);
    if ( strcmp(v1, &Source) )
    {
      v2 = (const char *)sub_5FB8B0(i + 20);
      if ( !atoi(v2) )
        sub_5FB8F0(i + 20, &Source);
      v3 = (const char *)sub_5FB8B0(i + 20);
      if ( atoi(v3) == 1 )
      {
        sub_5FB8F0(i + 20, &unk_6B83F8);
        sub_440260((_DWORD **)dword_7906F4);
        sub_440310((_DWORD *)dword_7906F4);
        sub_440490((_DWORD **)dword_7906F4);
      }
    }
  }
  v19 = sub_445A90();
  if ( v19 )
  {
    v6 = sub_6375B0(dword_162EE84);
    if ( v19 <= sub_5D5A50(v6) )
    {
      for ( j = 0; j < 5; ++j )
      {
        v8 = (const char *)sub_5FB8B0(j + 20);
        if ( strcmp(v8, &Source) && *(this + 30 * j + 17) == -1 )
        {
          v16 = (const CHAR *)sub_630F40("SID_HORSERACING_INCOMPLETETICKET");
          v9 = (const CHAR *)sub_630F40("SID_HORSERACING_CHOOSEWINPLACEORSHOW");
          sub_62FF10(v9, v16, 0);
          return 0;
        }
      }
      for ( k = 0; k < 5; ++k )
      {
        v10 = (const char *)sub_5FB8B0(k + 20);
        if ( strcmp(v10, &Source) )
        {
          v11 = (const char *)sub_5FB8B0(k + 20);
          *(this + 30 * k + 15) = atoi(v11);
          Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(dword_7906F4 + 4 * k + 180));
          (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(dword_7906F4 + 4 * k + 180) + 176))(
            *(_DWORD *)(dword_7906F4 + 4 * k + 180),
            Flags + 1);
          v18 = *(this + 30 * k + 15);
          v13 = sub_445E80(k);
          *(this + 30 * k + 16) = v18 * sub_445E40(k) / v13;
        }
      }
      v23 = sub_64C8A0(-v19, 0);
      sub_5DCB00(0);
      sub_5D5FB0(v23, HIDWORD(v23));
      sub_5DCB00(0);
      sub_5D5CF0(v23, HIDWORD(v23));
      return 1;
    }
    else
    {
      v15 = (const CHAR *)sub_630F40("SID_CASINO_BANKEXCEEDED");
      v7 = (const CHAR *)sub_630F40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET");
      sub_62FF10(v7, v15, 0);
      return 0;
    }
  }
  else
  {
    v14 = (const CHAR *)sub_630F40("SID_HORSERACING_NOBETSMADE");
    v4 = (const CHAR *)sub_630F40("SID_HORSERACING_MUSTPLACEBET");
    sub_62FF10(v4, v14, 0);
    return 0;
  }
}


//======================================================================
// sub_445E40
// entry 00445e40  size 57  status ok
//======================================================================

int __thiscall sub_445E40(_DWORD *this, int a2)
{
  return *(this + 30 * a2 + 2 * *(this + 30 * a2 + 17) + 20);
}


//======================================================================
// sub_445E80
// entry 00445e80  size 57  status ok
//======================================================================

int __thiscall sub_445E80(_DWORD *this, int a2)
{
  return *(this + 30 * a2 + 2 * *(this + 30 * a2 + 17) + 21);
}


//======================================================================
// sub_445EC0
// entry 00445ec0  size 130  status ok
//======================================================================

int __thiscall sub_445EC0(int this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  *(_DWORD *)(this + 608) = -1;
  *(_DWORD *)(dword_7906F4 + 176) = -1;
  *(_BYTE *)(this + 612) = 0;
  for ( i = 0; i < 5; ++i )
    *(_DWORD *)(this + 4 * i + 616) = -1;
  result = sub_62FBF0(10);
  if ( !result )
  {
    result = 120 * sub_62FBF0(5);
    *(_BYTE *)(this + result + 120) = 1;
  }
  return result;
}


//======================================================================
// sub_445F50
// entry 00445f50  size 150  status ok
//======================================================================

int __thiscall sub_445F50(_DWORD *this)
{
  int v1; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    sub_444D00(this, i, -1);
    *(this + 30 * i + 15) = 0;
    v1 = sub_5FB3A0(i);
    sub_6067E0(v1);
  }
  sub_440200();
  sub_440260((_DWORD **)dword_7906F4);
  sub_440310((_DWORD *)dword_7906F4);
  sub_43FE60((_DWORD **)dword_7906F4);
  return sub_440490((_DWORD **)dword_7906F4);
}


//======================================================================
// sub_445FF0
// entry 00445ff0  size 187  status ok
//======================================================================

int __thiscall sub_445FF0(_DWORD *this, char *Destination, int a3)
{
  if ( *(this + 30 * a3 + 17) == -1 || *(this + 30 * a3 + 27) > *(this + 30 * a3 + 17) )
  {
    strcpy(Destination, &Source);
    return 0;
  }
  else
  {
    sub_64C8D0(*(this + 30 * a3 + 16), 0, Destination, 1, 1, 1);
    return *(this + 30 * a3 + 16);
  }
}


//======================================================================
// sub_446120
// entry 00446120  size 57  status ok
//======================================================================

int __stdcall sub_446120(int a1)
{
  if ( (unsigned __int8)sub_5DA7B0(dword_79070C) )
    return sub_446300(a1);
  else
    return sub_446160(a1);
}


//======================================================================
// sub_446160
// entry 00446160  size 405  status ok
//======================================================================

int __stdcall sub_446160(int a1)
{
  int v1; // eax
  double v3; // [esp+Ch] [ebp-38h]
  double v4; // [esp+1Ch] [ebp-28h]
  int v5; // [esp+30h] [ebp-14h]
  int v6; // [esp+34h] [ebp-10h]
  int i; // [esp+38h] [ebp-Ch]
  int v8; // [esp+3Ch] [ebp-8h]
  int v9; // [esp+40h] [ebp-4h]

  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 688))(dword_79070C);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 692))(dword_79070C);
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
  while ( !(unsigned __int8)sub_446680(a1, i) )
    i -= 5;
  if ( i < v8 || i > v9 )
    sub_5E9F20((char)"theBet >= minBet && theBet <= maxBet", "..\\Casino\\letitrideai.cpp", 55);
  return i;
}


//======================================================================
// sub_446300
// entry 00446300  size 889  status ok
//======================================================================

int __stdcall sub_446300(int a1)
{
  int v1; // eax
  int v2; // esi
  int *v3; // eax
  int v5; // esi
  int v6; // esi
  double v7; // [esp+8h] [ebp-64h]
  double v8; // [esp+14h] [ebp-58h]
  int v9; // [esp+20h] [ebp-4Ch]
  int v10; // [esp+24h] [ebp-48h]
  int v11; // [esp+28h] [ebp-44h]
  int v12; // [esp+2Ch] [ebp-40h]
  _BYTE v13[8]; // [esp+34h] [ebp-38h] BYREF
  _BYTE v14[8]; // [esp+3Ch] [ebp-30h] BYREF
  int v15; // [esp+44h] [ebp-28h]
  int v16; // [esp+48h] [ebp-24h]
  int i; // [esp+4Ch] [ebp-20h]
  int v18; // [esp+50h] [ebp-1Ch]
  int v19; // [esp+54h] [ebp-18h]
  int v20; // [esp+58h] [ebp-14h]
  int v21; // [esp+5Ch] [ebp-10h]
  int v22; // [esp+60h] [ebp-Ch]
  int v23; // [esp+64h] [ebp-8h]
  int v24; // [esp+68h] [ebp-4h]

  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 688))(dword_79070C);
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 692))(dword_79070C);
  v12 = sub_5DCB00(a1);
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 24))(v12);
  v1 = sub_5DCB00(a1);
  v20 = sub_5D5A50(v1);
  v23 = sub_5DA8E0(dword_79070C);
  v24 = sub_5DAC90(dword_79070C);
  v19 = *(_DWORD *)sub_5DAA20(v14);
  i = v18;
  v16 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  if ( v16 < -4 )
    v16 = -1 - sub_62FBF0(5);
  if ( v20 < 3 * v18 )
    sub_5E9F20((char)"bank >= minBet * 3", "..\\Casino\\letitrideai.cpp", 76);
  if ( v20 < v22 )
    v21 = v20;
  else
    v21 = v22;
  if ( v23 < 4 )
  {
    if ( v23 )
    {
      if ( v20 < v19 )
      {
        if ( v19 - v20 > v21 )
        {
          v3 = (int *)sub_5DAC40(v13, a1);
          if ( (double)*v3 / (double)v19 >= 0.5 )
            i = v21 / (sub_62FBF0(3) + 1);
        }
        else
        {
          v2 = v19 - v20;
          i = v2 / (sub_62FBF0(5) + 1);
        }
      }
    }
    else if ( v20 < v19 && v19 - v20 <= v21 )
    {
      i = v18 + v19 - v20;
    }
    for ( i /= 3; i % 5; ++i )
      ;
    if ( i < v18 )
      i = v18;
    if ( i > v22 )
      i = v22;
    while ( !(unsigned __int8)sub_446680(a1, i) )
      i -= 5;
    if ( i < v18 || i > v22 )
      sub_5E9F20((char)"theBet >= minBet && theBet <= maxBet", "..\\Casino\\letitrideai.cpp", 120);
    if ( i )
      return i;
  }
  v11 = sub_5DCB00(a1);
  v10 = sub_5DCB00(a1);
  v5 = sub_62FBF0(5) + 1;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 24))(v10) / v5;
  v8 = (double)v9 * (double)(v18 * v16);
  v6 = sub_62FBF0(5) + 1;
  v7 = (double)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 24))(v11) / v6);
  for ( i = (int)((double)(v18 * (sub_62FBF0(5) + 1)) * v7 + v8) / 3; i % 5; --i )
    ;
  if ( i < v18 )
    i = v18;
  if ( i > v22 )
    i = v22;
  while ( !(unsigned __int8)sub_446680(a1, i) )
    i -= 5;
  if ( i < v18 || i > v22 )
    sub_5E9F20((char)"theBet >= minBet && theBet <= maxBet", "..\\Casino\\letitrideai.cpp", 142);
  return i;
}


//======================================================================
// sub_446680
// entry 00446680  size 47  status ok
//======================================================================

bool __stdcall sub_446680(int a1, int a2)
{
  int v2; // eax

  v2 = sub_5DCB00(a1);
  return sub_5D5A50(v2) >= 3 * a2;
}


//======================================================================
// sub_4466B0
// entry 004466b0  size 726  status ok
//======================================================================

char __stdcall sub_4466B0(int a1)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = sub_44CE00(a1);
  v5 = sub_462BA0(dword_790710 + 10 * a1 + 152, v6, 0);
  if ( v6 == 3 )
  {
    if ( v5 == 4 || v5 == 2 && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 0, 3) > 9 )
      return 1;
    if ( v5 == 6 || v5 == 9 )
    {
      if ( (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 2, 3) > 9 )
        return 1;
      if ( v5 == 9 && !sub_463A40(dword_790710 + 10 * a1 + 152, 2, 3) )
        return 1;
      v2 = sub_4630C0(dword_790710 + 10 * a1 + 152, 0, 3);
      if ( v2 - sub_4630C0(dword_790710 + 10 * a1 + 152, 2, 3) == 3
        && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 0, 3) > 9 )
      {
        return 1;
      }
      v3 = sub_4630C0(dword_790710 + 10 * a1 + 152, 0, 3);
      if ( v3 - sub_4630C0(dword_790710 + 10 * a1 + 152, 2, 3) == 4
        && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 1, 3) > 9 )
      {
        return 1;
      }
    }
  }
  else
  {
    if ( v5 == 8 || v5 == 4 || v5 == 3 || v5 == 2 && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 0, v6) > 9 )
      return 1;
    switch ( v5 )
    {
      case 6:
      case 9:
        return 1;
      case 5:
        return 1;
      case 1:
        v4 = sub_4630C0(dword_790710 + 10 * a1 + 152, 0, v6);
        if ( v4 - sub_4630C0(dword_790710 + 10 * a1 + 152, 3, v6) == 4
          && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 3, v6) > 9 )
        {
          return 1;
        }
        break;
    }
  }
  return 0;
}


//======================================================================
// sub_446990
// entry 00446990  size 292  status ok
//======================================================================

char *__stdcall sub_446990(int a1, int a2, char a3, char *Destination)
{
  const char *v4; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax

  if ( a3 )
  {
    if ( sub_44CE00(a1) == 3 )
    {
      if ( a2 == 4 || a2 == 2 && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 0, 3) > 9 )
      {
LABEL_6:
        v4 = (const char *)sub_630F40("SID_LETITRIDE_STRATEGY_PAIROFTENSORHIGHER");
        return strcpy(Destination, v4);
      }
      v6 = (const char *)sub_630F40("SID_LETITRIDE_STRATEGY_STRAIGHFLUSH_ROYALFLUSH");
      return strcpy(Destination, v6);
    }
    else
    {
      if ( a2 == 8 || a2 == 4 || a2 == 3 || a2 == 2 && (int)sub_4630C0(dword_790710 + 10 * a1 + 152, 0, 4) > 9 )
        goto LABEL_6;
      v7 = (const char *)sub_630F40("SID_LETITRIDE_STRATEGY_STRAIGHT_FLUSH_STRAIGHTFLUSH");
      return strcpy(Destination, v7);
    }
  }
  else
  {
    v8 = (const char *)sub_630F40("SID_LETITRIDE_STRATEGY_DEFAULT");
    return strcpy(Destination, v8);
  }
}


//======================================================================
// sub_446AF0
// entry 00446af0  size 217  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_446AF0(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &LetItRideDisplay::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 21) = 0;
  }
  for ( j = 0; j < 12; ++j )
    *((_DWORD *)this + j + 5) = 0;
  for ( k = 0; k < 2; ++k )
    *((_DWORD *)this + k + 17) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 20) = 0;
  return this;
}


//======================================================================
// sub_446BD0
// entry 00446bd0  size 603  status ok
//======================================================================

void __thiscall sub_446BD0(CNoTrackObject *this)
{
  int i; // [esp+74h] [ebp-10h]
  int j; // [esp+74h] [ebp-10h]
  int k; // [esp+74h] [ebp-10h]

  *(_DWORD *)this = &LetItRideDisplay::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 21) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 21))(*((_DWORD *)this + i + 21), 1);
  }
  for ( j = 0; j < 12; ++j )
  {
    if ( *((_DWORD *)this + j + 5) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 5))(*((_DWORD *)this + j + 5), 1);
  }
  for ( k = 0; k < 2; ++k )
  {
    if ( *((_DWORD *)this + k + 17) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 17))(*((_DWORD *)this + k + 17), 1);
  }
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  if ( *((_DWORD *)this + 25) )
    (***((void (__thiscall ****)(_DWORD, int))this + 25))(*((_DWORD *)this + 25), 1);
  if ( *((_DWORD *)this + 26) )
    (***((void (__thiscall ****)(_DWORD, int))this + 26))(*((_DWORD *)this + 26), 1);
  if ( *((_DWORD *)this + 27) )
    (***((void (__thiscall ****)(_DWORD, int))this + 27))(*((_DWORD *)this + 27), 1);
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_446E30
// entry 00446e30  size 1390  status ok
//======================================================================

int __thiscall sub_446E30(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-A4h]
  int v6; // [esp+8h] [ebp-A0h]
  int v7; // [esp+Ch] [ebp-9Ch]
  _DWORD *v8; // [esp+10h] [ebp-98h]
  int v9; // [esp+14h] [ebp-94h]
  _AFX_OLE_STATE *v10; // [esp+18h] [ebp-90h]
  int v11; // [esp+1Ch] [ebp-8Ch]
  int v12; // [esp+20h] [ebp-88h]
  void *v14; // [esp+28h] [ebp-80h]
  void *v15; // [esp+30h] [ebp-78h]
  void *v16; // [esp+38h] [ebp-70h]
  _DWORD *v17; // [esp+40h] [ebp-68h]
  void *v18; // [esp+48h] [ebp-60h]
  _AFX_OLE_STATE *v19; // [esp+50h] [ebp-58h]
  void *v20; // [esp+58h] [ebp-50h]
  void *v21; // [esp+60h] [ebp-48h]
  _DWORD v22[12]; // [esp+68h] [ebp-40h]
  int i; // [esp+98h] [ebp-10h]
  int v24; // [esp+A4h] [ebp-4h]

  v22[0] = 5;
  v22[1] = 4;
  v22[2] = 3;
  v22[3] = 8;
  v22[4] = 7;
  v22[5] = 6;
  v22[6] = 2;
  v22[7] = 1;
  v22[8] = 0;
  v22[9] = 11;
  v22[10] = 10;
  v22[11] = 9;
  v1 = sub_630F40("SID_LETITRIDE");
  sub_5F38B0(v1);
  sub_5F1AD0(3214000);
  sub_5F2BA0(3214003);
  sub_5F2BA0(3214004);
  for ( i = 0; i < 4; ++i )
  {
    v21 = operator new(0x20u);
    v24 = 0;
    if ( v21 )
      v12 = sub_447E30(v21);
    else
      v12 = 0;
    *(this + i + 1) = v12;
    sub_447F70(i);
    v20 = operator new(0x1D0u);
    v24 = 1;
    if ( v20 )
    {
      sub_5EC5A0(v20);
      v11 = v2;
    }
    else
    {
      v11 = 0;
    }
    v24 = -1;
    *(this + i + 21) = v11;
    sub_5EC8F0(&Source, 56, 200, 20, 0, 0, 81, 48, -1);
  }
  for ( i = 0; i < 12; ++i )
  {
    v19 = (_AFX_OLE_STATE *)operator new(0xAE4u);
    v24 = 2;
    if ( v19 )
      v10 = _AFX_OLE_STATE::_AFX_OLE_STATE(v19);
    else
      v10 = 0;
    v24 = -1;
    *(this + i + 5) = v10;
    *(_DWORD *)(*(this + i + 5) + 2784) = i;
    sub_5EAE80(3214001, 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 5) + 176))(*(this + i + 5), v22[i]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode((CPane *)*(this + i + 5), *(_DWORD *)(dword_790710 + 4 * i + 8));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 5) + 116))(*(this + i + 5));
  }
  for ( i = 0; i < 2; ++i )
  {
    v18 = operator new(0x178u);
    v24 = 3;
    if ( v18 )
    {
      sub_5EAAF0(v18);
      v9 = v3;
    }
    else
    {
      v9 = 0;
    }
    v24 = -1;
    *(this + i + 17) = v9;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 17) + 64))(*(this + i + 17));
  }
  v17 = operator new(0x198u);
  v24 = 4;
  if ( v17 )
  {
    sub_5CD6A0(v17);
    *v17 = &LetItRideDealerDisplay::`vftable';
    v8 = v17;
  }
  else
  {
    v8 = 0;
  }
  v24 = -1;
  *(this + 19) = v8;
  sub_5EAE80(0, 0, 0, 0, -1);
  v16 = operator new(0x184u);
  v24 = 5;
  if ( v16 )
    v7 = sub_5F5BF0(v16);
  else
    v7 = 0;
  v24 = -1;
  *(this + 25) = v7;
  sub_5EAE80(2022, 0, 0, 51, -1);
  v15 = operator new(0x184u);
  v24 = 6;
  if ( v15 )
    v6 = sub_5F5BF0(v15);
  else
    v6 = 0;
  v24 = -1;
  *(this + 26) = v6;
  sub_5EAE80(2023, 0, 0, 50, -1);
  v14 = operator new(0x184u);
  v24 = 7;
  if ( v14 )
    v5 = sub_5F5BF0(v14);
  else
    v5 = 0;
  v24 = -1;
  *(this + 27) = v5;
  return sub_5EAE80(3215008, 0, 0, 1, -1);
}


//======================================================================
// sub_4473A0
// entry 004473a0  size 262  status ok
//======================================================================

int sub_4473A0()
{
  char v1; // [esp+0h] [ebp-20h]
  CImageDisplay *v2; // [esp+18h] [ebp-8h]
  unsigned int v3; // [esp+1Ch] [ebp-4h]

  if ( sub_44CEE0(dword_790710) != -1
    && (v3 = sub_44CEE0(dword_790710), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_44CFC0(v3)) )
  {
    return sub_5F2B20(3214002, 1);
  }
  else
  {
    return sub_5F2BA0(3214002);
  }
}


//======================================================================
// sub_4474B0
// entry 004474b0  size 899  status ok
//======================================================================

int __thiscall sub_4474B0(_DWORD **this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  int v4; // esi
  int v6; // [esp+8h] [ebp-60h]
  int j; // [esp+18h] [ebp-50h]
  int v9; // [esp+1Ch] [ebp-4Ch]
  int v10; // [esp+24h] [ebp-44h]
  int v11; // [esp+28h] [ebp-40h]
  int i; // [esp+2Ch] [ebp-3Ch]
  char Destination[52]; // [esp+30h] [ebp-38h] BYREF

  sub_4473A0();
  for ( i = 0; i < 4; ++i )
  {
    sub_4480E0(*(this + i + 1));
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184)
      && (unsigned __int8)sub_5DA7B0(dword_79070C)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_79070C + 708))(dword_79070C, i) )
    {
      v10 = 3 * i;
      for ( j = 0; j < 3; ++j )
      {
        if ( !(*(this + j + v10 + 5))[120 * i + 95] )
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + j + v10 + 5) + 184))(*(this + j + v10 + 5), i, 0);
      }
    }
    if ( (unsigned __int8)sub_44CE60(i) )
    {
      v1 = sub_44CE00(i);
      v9 = sub_462BA0(dword_790710 + 10 * i + 152, v1, 1);
      sub_462F40(v9, Destination);
      v2 = sub_447A70(i, 0);
      v3 = sub_447A70(i, 4) + 35;
      v4 = (v3 - sub_447A70(i, 0)) / 2 + v2;
      v11 = v4 - sub_5F5550(*(this + i + 21)) / 2;
      v6 = sub_447AF0(i, 0) - 17;
      (*(void (__thiscall **)(_DWORD, char *))(**(this + i + 21) + 180))(*(this + i + 21), Destination);
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + i + 21) + 68))(*(this + i + 21), v11, v6);
      (*(void (__thiscall **)(_DWORD))(**(this + i + 21) + 116))(*(this + i + 21));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(this + i + 21) + 112))(*(this + i + 21));
    }
  }
  if ( (unsigned __int8)sub_5DA7B0(dword_79070C) && !dword_163068C )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_79070C + 752))(dword_79070C);
  if ( *(_WORD *)(dword_790710 + 192) )
    sub_447B60(0, *(_WORD *)(dword_790710 + 192), *(_BYTE *)(dword_790710 + 216));
  else
    (*(void (__thiscall **)(_DWORD))(**(this + 17) + 112))(*(this + 17));
  if ( *(_WORD *)(dword_790710 + 194) )
    return sub_447B60(1, *(_WORD *)(dword_790710 + 194), *(_BYTE *)(dword_790710 + 217));
  else
    return (*(int (__thiscall **)(_DWORD))(**(this + 18) + 112))(*(this + 18));
}


//======================================================================
// sub_447840
// entry 00447840  size 100  status ok
//======================================================================

void __thiscall sub_447840(_DWORD **this, int a2, int a3)
{
  int v3; // eax

  if ( a2 != 4 )
  {
    if ( *(this + a3 + 5) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + a3 + 5) + 184))(*(this + a3 + 5), a2, 0);
      v3 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, v3);
    }
  }
}


//======================================================================
// sub_4478B0
// entry 004478b0  size 214  status ok
//======================================================================

int __thiscall sub_4478B0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp-4h] [ebp-10h]
  __int16 v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v9 = *(_DWORD *)(*(this + a2 + 1) + 4 * a3 + 8);
  result = sub_44CD70(a2, a3);
  v8 = result;
  if ( a3 <= 2 )
  {
    v4 = sub_447990(a2);
    sub_5EAF00(v4);
    v5 = sub_4479D0(a2, v8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v5);
    v7 = sub_447AF0(a2, a3);
    v6 = sub_447A70(a2, a3);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(v9, v6, v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, a3 + 5);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
  }
  return result;
}


//======================================================================
// sub_447990
// entry 00447990  size 63  status ok
//======================================================================

int __stdcall sub_447990(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 3215002;
  v2[1] = 3215003;
  v2[2] = 3215001;
  v2[3] = 3215004;
  if ( a1 == -1 )
    return 3215005;
  else
    return v2[a1];
}


//======================================================================
// sub_4479D0
// entry 004479d0  size 158  status ok
//======================================================================

int __stdcall sub_4479D0(int a1, __int16 a2)
{
  int v3; // esi
  _DWORD v4[5]; // [esp+8h] [ebp-14h]

  v4[0] = -1;
  v4[1] = 1;
  v4[2] = 2;
  v4[3] = 3;
  v4[4] = 0;
  if ( !(unsigned __int8)sub_44CE60(a1) )
    return 53;
  if ( sub_641280(a2) == 14 )
    return 13 * v4[sub_641290(a2)];
  v3 = 13 * v4[sub_641290(a2)];
  return v3 + sub_641280(a2) - 1;
}


//======================================================================
// sub_447A70
// entry 00447a70  size 117  status ok
//======================================================================

int __stdcall sub_447A70(int a1, int a2)
{
  _DWORD v3[9]; // [esp+4h] [ebp-24h]

  v3[0] = 340;
  v3[1] = 226;
  v3[2] = 437;
  v3[3] = 117;
  v3[5] = 328;
  v3[6] = 157;
  v3[7] = 478;
  v3[8] = 6;
  if ( a1 == -1 )
    return a2 != 0 ? 293 : 276;
  else
    return v3[a1] + 17 * a2 - 4;
}


//======================================================================
// sub_447AF0
// entry 00447af0  size 100  status ok
//======================================================================

int __stdcall sub_447AF0(int a1, int a2)
{
  _DWORD v3[8]; // [esp+4h] [ebp-24h]

  v3[0] = 245;
  v3[1] = 245;
  v3[2] = 156;
  v3[3] = 156;
  v3[4] = 270;
  v3[5] = 270;
  v3[6] = 85;
  v3[7] = 85;
  if ( a1 == -1 )
    return 77;
  else
    return v3[a1] - 8;
}


//======================================================================
// sub_447B60
// entry 00447b60  size 269  status ok
//======================================================================

int __thiscall sub_447B60(_DWORD **this, int a2, __int16 a3, char a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp-4h] [ebp-8h]

  if ( a4 )
  {
    v4 = sub_447990(-1);
    sub_5EAF00(v4);
    v5 = sub_4479D0(-1, a3);
    (*(void (__thiscall **)(_DWORD, int))(**(this + a2 + 17) + 176))(*(this + a2 + 17), v5);
  }
  else
  {
    sub_5EAF00(3215005);
    (*(void (__thiscall **)(_DWORD, int))(**(this + a2 + 17) + 176))(*(this + a2 + 17), 53);
  }
  v8 = sub_447AF0(-1, a2);
  v6 = sub_447A70(-1, a2);
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + a2 + 17) + 68))(*(this + a2 + 17), v6, v8);
  (*(void (__thiscall **)(_DWORD, int))(**(this + a2 + 17) + 108))(*(this + a2 + 17), a2 + 1);
  return (*(int (__thiscall **)(_DWORD))(**(this + a2 + 17) + 116))(*(this + a2 + 17));
}


//======================================================================
// sub_447C70
// entry 00447c70  size 227  status ok
//======================================================================

int __thiscall sub_447C70(int this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  sub_4474B0((_DWORD **)this);
  if ( !*(_DWORD *)(this + 80) )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v2 = sub_4490C0(v4);
    else
      v2 = 0;
    *(_DWORD *)(this + 80) = v2;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 60))(*(_DWORD *)(this + 80));
    sub_5F7340(0, 170);
  }
  sub_5F85D0(*(_DWORD *)(this + 80));
  sub_5F2B20(3214003, 1);
  return sub_5F2B20(3214004, 1);
}


//======================================================================
// sub_447D60
// entry 00447d60  size 73  status ok
//======================================================================

int __thiscall sub_447D60(_DWORD *this)
{
  if ( *(this + 20) )
  {
    sub_5F8990(*(this + 20));
    *(this + 20) = 0;
  }
  sub_5F2BA0(3214003);
  return sub_5F2BA0(3214004);
}


//======================================================================
// sub_447DB0
// entry 00447db0  size 121  status ok
//======================================================================

int __thiscall sub_447DB0(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_79070C)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_79070C + 724))(dword_79070C, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_44C830(dword_790710) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_449710(v2);
    }
  }
  return result;
}


//======================================================================
// sub_447E30
// entry 00447e30  size 83  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_447E30(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &LetItRidePlayerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 2) = 0;
  *((_DWORD *)this + 7) = 0;
  return this;
}


//======================================================================
// sub_447E90
// entry 00447e90  size 210  status ok
//======================================================================

void __thiscall sub_447E90(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &LetItRidePlayerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 2))(*((_DWORD *)this + i + 2), 1);
  }
  if ( *((_DWORD *)this + 7) )
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_447F70
// entry 00447f70  size 363  status ok
//======================================================================

int __thiscall sub_447F70(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-4Ch]
  int v6; // [esp+8h] [ebp-48h]
  void *v8; // [esp+10h] [ebp-40h]
  void *v9; // [esp+18h] [ebp-38h]
  int v10; // [esp+20h] [ebp-30h]
  _DWORD v11[7]; // [esp+24h] [ebp-2Ch]
  int i; // [esp+40h] [ebp-10h]
  int v13; // [esp+4Ch] [ebp-4h]

  v10 = 308;
  v11[0] = 283;
  v11[1] = 266;
  v11[2] = 286;
  v11[3] = 414;
  v11[4] = 242;
  v11[5] = 132;
  v11[6] = 231;
  *(this + 1) = a2;
  for ( i = 0; i < 5; ++i )
  {
    v9 = operator new(0x178u);
    v13 = 0;
    if ( v9 )
    {
      sub_5EAAF0(v9);
      v6 = v2;
    }
    else
    {
      v6 = 0;
    }
    v13 = -1;
    *(this + i + 2) = v6;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 64))(*(this + i + 2));
  }
  v8 = operator new(0x178u);
  v13 = 1;
  if ( v8 )
  {
    sub_5EAAF0(v8);
    v5 = v3;
  }
  else
  {
    v5 = 0;
  }
  v13 = -1;
  *(this + 7) = v5;
  return sub_5EAE80(5042, v11[2 * *(this + 1) - 1], v11[2 * *(this + 1)], 80, -1);
}


//======================================================================
// sub_4480E0
// entry 004480e0  size 519  status ok
//======================================================================

int __thiscall sub_4480E0(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp-4h] [ebp-20h]
  CImageDisplay *v5; // [esp+Ch] [ebp-10h]
  LONG left; // [esp+10h] [ebp-Ch]
  unsigned int v7; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]
  int j; // [esp+18h] [ebp-4h]

  v7 = *(_DWORD *)(dword_790710 + 4 * *(_DWORD *)(this + 4) + 220);
  if ( sub_639110(*(_DWORD *)(this + 4)) )
  {
    sub_639110(*(_DWORD *)(this + 4));
    sub_646380(100);
    sub_639110(*(_DWORD *)(this + 4));
    sub_6464D0(0, 0);
  }
  sub_5D9180(*(_DWORD *)(this + 4), 0);
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
  if ( *(_DWORD *)(*(_DWORD *)(dword_162EE80 + 4) + 4)
    || (v5 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(this + 4)),
        left = CImageDisplay::GetDisplayFormat(v5)->rcSource.left,
        result = left == 0,
        left)
    && (result = sub_5DCB00(*(_DWORD *)(this + 4)), !*(_BYTE *)(result + 1185)) )
  {
    for ( j = 0; j < 5; ++j )
    {
      if ( (unsigned __int16)sub_44CD70(*(_DWORD *)(this + 4), j) )
        sub_4478B0((_DWORD *)dword_790718, *(_DWORD *)(this + 4), j);
    }
    if ( v7 > 1 )
    {
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
    }
    else
    {
      v3 = sub_447AF0(*(_DWORD *)(this + 4), 0) + 45;
      v2 = sub_447A70(*(_DWORD *)(this + 4), 0);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), v2, v3);
      (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 28) + 176))(*(_DWORD *)(this + 28), v7 != 1);
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
    }
  }
  return result;
}


//======================================================================
// sub_4482F0
// entry 004482f0  size 394  status ok
//======================================================================

int __stdcall sub_4482F0(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790718;
  if ( *(_DWORD *)(dword_790718 + 104) )
  {
    sub_5EAF00(2023);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 104) + 176))(
      *(_DWORD *)(dword_790718 + 104),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 104) + 116))(*(_DWORD *)(dword_790718 + 104));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(0);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790718 + 100) )
  {
    sub_5EAF00(2022);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 100) + 176))(
      *(_DWORD *)(dword_790718 + 100),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 100) + 116))(*(_DWORD *)(dword_790718 + 100));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(a1);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_448480
// entry 00448480  size 342  status ok
//======================================================================

int __stdcall sub_448480(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_790718;
  if ( *(_DWORD *)(dword_790718 + 104) )
  {
    sub_5EAF00(2025);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 104) + 176))(
      *(_DWORD *)(dword_790718 + 104),
      0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(0);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_790718 + 100) )
  {
    sub_5EAF00(2024);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 100) + 176))(
      *(_DWORD *)(dword_790718 + 100),
      0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(a1);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_448620
// entry 00448620  size 16  status ok
//======================================================================

int sub_448620()
{
  return 3214002;
}


//======================================================================
// sub_448630
// entry 00448630  size 112  status ok
//======================================================================

int __thiscall sub_448630(_DWORD *this, int a2, int a3)
{
  _DWORD v4[12]; // [esp+4h] [ebp-30h]

  v4[0] = 375;
  v4[1] = 365;
  v4[2] = 357;
  v4[3] = 201;
  v4[4] = 212;
  v4[5] = 221;
  v4[6] = 540;
  v4[7] = 511;
  v4[8] = 482;
  v4[9] = 46;
  v4[10] = 75;
  v4[11] = 103;
  return v4[*(this + 696)];
}


//======================================================================
// sub_4486A0
// entry 004486a0  size 112  status ok
//======================================================================

int __thiscall sub_4486A0(_DWORD *this, int a2, int a3)
{
  _DWORD v4[12]; // [esp+4h] [ebp-30h]

  v4[0] = 389;
  v4[1] = 350;
  v4[2] = 312;
  v4[3] = 389;
  v4[4] = 351;
  v4[5] = 311;
  v4[6] = 266;
  v4[7] = 239;
  v4[8] = 212;
  v4[9] = 274;
  v4[10] = 247;
  v4[11] = 220;
  return v4[*(this + 696)];
}


//======================================================================
// sub_448710
// entry 00448710  size 87  status ok
//======================================================================

int __thiscall sub_448710(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_448630(this, a2, a3);
  if ( sub_62FBF0(2) )
    return v4 - sub_62FBF0(3);
  else
    return v4 + sub_62FBF0(3);
}


//======================================================================
// sub_448770
// entry 00448770  size 87  status ok
//======================================================================

int __thiscall sub_448770(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_4486A0(this, a2, a3);
  if ( sub_62FBF0(2) )
    return v4 - sub_62FBF0(3);
  else
    return v4 + sub_62FBF0(3);
}


//======================================================================
// sub_4487F0
// entry 004487f0  size 32  status ok
//======================================================================

int __thiscall sub_4487F0(_DWORD *this, int a2, int a3)
{
  return sub_4486A0(this, a2, a3) - 15;
}


//======================================================================
// sub_448810
// entry 00448810  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_448810(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &LetItRideDealScript::`vftable';
  *(this + 36) = sub_637810(4) < 2;
  return this;
}


//======================================================================
// sub_4488B0
// entry 004488b0  size 89  status ok
//======================================================================

bool __thiscall sub_4488B0(_BYTE *this)
{
  return (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 && !*(this + 36) && !*(_BYTE *)(dword_790710 + 209);
}


//======================================================================
// sub_448910
// entry 00448910  size 892  status ok
//======================================================================

int __thiscall sub_448910(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  int v4; // [esp+14h] [ebp-30h]
  int v5; // [esp+18h] [ebp-2Ch]
  int i; // [esp+34h] [ebp-10h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = sub_44D380(dword_790710);
      if ( *(this + 8) == -1 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( !sub_4488B0(this) || sub_44CE90(dword_790710) )
          result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        else
          result = sub_4482F0((int)this);
      }
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( (unsigned __int8)sub_637630(dword_162EE84) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 108) + 116))(*(_DWORD *)(dword_790718 + 108));
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
      if ( sub_4488B0(this) )
      {
        if ( operator new(0x24u) )
          v4 = sub_448CA0(*(this + 8), this);
        else
          v4 = 0;
        result = sub_5FC420(v4);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 108) + 112))(*(_DWORD *)(dword_790718 + 108));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 108) + 176))(
          *(_DWORD *)(dword_790718 + 108),
          0);
        for ( i = 0; i < 3; ++i )
        {
          v3 = sub_6436C0(*(_DWORD *)(dword_790710 + 4));
          sub_44CDA0(*(this + 8), v3);
        }
        sub_4474B0((_DWORD **)dword_790718);
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 20);
      }
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      result = sub_448480((int)this);
      break;
    case 4:
      *(_BYTE *)(dword_790710 + 209) = 0;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 100) + 112))(*(_DWORD *)(dword_790718 + 100));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 104) + 112))(*(_DWORD *)(dword_790718 + 104));
      *(_WORD *)(dword_790710 + 192) = sub_6436C0(*(_DWORD *)(dword_790710 + 4));
      *(_WORD *)(dword_790710 + 194) = sub_6436C0(*(_DWORD *)(dword_790710 + 4));
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
        *(_DWORD *)(dword_79070C + 4),
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
// sub_448CA0
// entry 00448ca0  size 208  status ok
//======================================================================

_DWORD *__thiscall sub_448CA0(_DWORD *this, int a2, int a3)
{
  sub_5FC0D0(a3);
  *this = &LetItRideDealToScript::`vftable';
  *(this + 8) = a2;
  sub_5EAF00(dword_713C3C[a2]);
  sub_5EAF00(dword_713C28[a2]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 104) + 176))(*(_DWORD *)(dword_790718 + 104), 0);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(dword_790718 + 100) + 176))(0);
  return this;
}


//======================================================================
// sub_448D70
// entry 00448d70  size 835  status ok
//======================================================================

int __thiscall sub_448D70(_DWORD *this)
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
  v5[2] = 28;
  v5[3] = 21;
  v5[4] = 19;
  v8 = 3;
  v6 = *(_DWORD *)(dword_790718 + 104);
  v7 = *(_DWORD *)(dword_790718 + 100);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_790708 <= word_790700 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, word_790708);
      if ( word_790708 <= word_7906FC )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_790708);
      if ( word_790708 == 9 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_790718 + 108) + 112))(*(_DWORD *)(dword_790718 + 108));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_790718 + 108) + 176))(
          *(_DWORD *)(dword_790718 + 108),
          0);
      }
      else if ( (!*(this + 8) || *(this + 8) == 2) && word_790708 == 17 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 51);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 50);
      }
      else if ( word_790708 > (__int16)v5[*(this + 8)] && word_790704 < 7 )
      {
        if ( word_790704 < 3 )
        {
          if ( word_790704 != 2 )
          {
            v3 = sub_6436C0(*(_DWORD *)(dword_790710 + 4));
            sub_44CDA0(*(this + 8), v3);
          }
          v2 = sub_6436C0(*(_DWORD *)(dword_790710 + 4));
          sub_44CDA0(*(this + 8), v2);
        }
        sub_4474B0((_DWORD **)dword_790718);
        word_790704 += 2;
        v8 = 2;
      }
      if ( word_790708 >= word_790700 && word_790708 >= word_7906FC )
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
    word_790708 = 0;
    word_790704 = 0;
    word_790700 = sub_5EB240(v6);
    word_7906FC = sub_5EB240(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 50);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 51);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, v8);
  }
  return result;
}


//======================================================================
// sub_4490C0
// entry 004490c0  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_4490C0(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &LetItRideActionDialog::`vftable';
  return this;
}


//======================================================================
// sub_449110
// entry 00449110  size 261  status ok
//======================================================================

int __thiscall sub_449110(void *this, int a2)
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
          sub_5DB240(dword_79070C);
          *(_BYTE *)(a2 + 4) = 1;
        }
        if ( tolower(*(char *)(a2 + 20)) == 114 )
        {
          v3 = sub_5F2A60(3214004, 0);
          if ( (unsigned __int8)sub_6026D0(v3) )
          {
            (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 24))(this, 0);
            *(_BYTE *)(a2 + 4) = 1;
          }
        }
        if ( tolower(*(char *)(a2 + 20)) == 98 )
        {
          v4 = sub_5F2A60(3214003, 0);
          if ( (unsigned __int8)sub_6026D0(v4) )
          {
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 1);
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
// sub_449220
// entry 00449220  size 219  status ok
//======================================================================

int __thiscall sub_449220(CMFCTabCtrl *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int i; // [esp+4h] [ebp-18h]
  _DWORD v6[2]; // [esp+8h] [ebp-14h]
  _DWORD v7[3]; // [esp+10h] [ebp-Ch]

  v7[0] = "SID_LETITRIDE_LETITRIDE";
  v7[1] = "SID_LETITRIDE_TAKEITBACK";
  v6[0] = 0;
  v6[1] = 1;
  v7[2] = *(_DWORD *)(dword_790710 + 196);
  sub_5F83D0(1228, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_GENERIC_ACTIONS");
  result = sub_5F73E0(v1, 73, 0, 3);
  for ( i = 0; i < 2; ++i )
  {
    v3 = sub_630F40(v7[i]);
    sub_5F9DE0(0, v6[i], 3200223, 17, 33 * i + 40, 2, v3, 72, 75, 74, -1, 0);
    sub_5FB300(i);
    result = sub_5EB700(1);
  }
  return result;
}


//======================================================================
// sub_449300
// entry 00449300  size 94  status ok
//======================================================================

int __stdcall sub_449300(char a1)
{
  int result; // eax

  result = sub_5FB2B0(0);
  if ( !result )
  {
    sub_5F9CE0(0, 0, 5017, 17, 35 * (a1 == 0) + 40, 3, 0, 255, 0);
    sub_5FB2B0(0);
    return sub_5EB5D0(100);
  }
  return result;
}


//======================================================================
// sub_449360
// entry 00449360  size 203  status ok
//======================================================================

int __stdcall sub_449360(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-24h]

  result = sub_44D5E0(*(_DWORD *)(dword_790710 + 196), a1 == 0);
  if ( !(_BYTE)result )
  {
    sub_447D60((_DWORD *)dword_790718);
    if ( operator new(0x24u) )
      v2 = sub_449430(a1);
    else
      v2 = 0;
    return sub_5FC420(v2);
  }
  return result;
}


//======================================================================
// sub_449430
// entry 00449430  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_449430(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &LetItRideSayHumanLineScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_449460
// entry 00449460  size 373  status ok
//======================================================================

int __thiscall sub_449460(_DWORD *this)
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

  v11 = *(_DWORD *)(dword_790710 + 196);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      result = (unsigned __int8)sub_44D6A0(*(_DWORD *)(dword_790710 + 196), *(this + 8) == 0);
      if ( (_BYTE)result )
      {
        sub_5FC420(0);
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
                 *(_DWORD *)(dword_79070C + 4),
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
            v7 = 2027;
        }
        else
        {
          v7 = 2024;
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
// sub_449710
// entry 00449710  size 133  status ok
//======================================================================

int __thiscall sub_449710(_BYTE *this, int a2)
{
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 9) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_79070C + 4) + 8))(
             *(_DWORD *)(dword_79070C + 4),
             500,
             a2);
  sub_44CA20(dword_790710, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
           *(_DWORD *)(dword_79070C + 4),
           1,
           0);
}


//======================================================================
// sub_4497A0
// entry 004497a0  size 1159  status ok
//======================================================================

int __thiscall sub_4497A0(_BYTE *this)
{
  int v5; // [esp+14h] [ebp-4Ch]
  int v6; // [esp+18h] [ebp-48h]
  int v7; // [esp+1Ch] [ebp-44h]
  CImageDisplay *v8; // [esp+20h] [ebp-40h]
  int v9; // [esp+2Ch] [ebp-34h]
  int v10; // [esp+30h] [ebp-30h]
  CImageDisplay *v11; // [esp+34h] [ebp-2Ch]
  CImageDisplay *v12; // [esp+44h] [ebp-1Ch]
  int v13; // [esp+54h] [ebp-Ch]
  int v14; // [esp+5Ch] [ebp-4h]
  int v15; // [esp+5Ch] [ebp-4h]
  int v16; // [esp+5Ch] [ebp-4h]

  sub_4474B0((_DWORD **)dword_790718);
  if ( *(_DWORD *)(dword_790710 + 244) != -1 )
    return sub_44A170(this);
  if ( *(this + 4) )
  {
    v14 = sub_44CEE0(dword_790710);
    if ( *((_BYTE *)dword_162EE84 + 37) && v14 != -1 )
    {
      v12 = (CImageDisplay *)sub_5DCB00(v14);
      if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v14) + 1185) = 1;
        v14 = sub_44CEE0(dword_790710);
      }
    }
    if ( v14 == -1 )
    {
      if ( !*(this + 9) )
      {
        sub_44D120(dword_790710);
        *(this + 9) = 1;
      }
      if ( *(this + 5) )
      {
        if ( (unsigned __int8)sub_44D2C0(dword_790710) )
        {
          sub_5F2870(dword_162EE80);
          sub_44CCF0(-1, 0);
          return sub_449E80();
        }
        else
        {
          v15 = sub_44D430(dword_790710);
          if ( v15 == -1 )
          {
            if ( (unsigned __int8)sub_44D700(dword_790710) )
            {
              sub_44D7E0(dword_790710);
              v9 = dword_790710;
              *(_DWORD *)(dword_790710 + 244) = 3;
              *(_DWORD *)(v9 + 248) = -1;
              return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
                       *(_DWORD *)(dword_79070C + 4),
                       1,
                       0);
            }
            else
            {
              v16 = sub_44DCE0(dword_790710);
              if ( v16 == -1 )
              {
                sub_44CCF0(-1, 0);
                if ( !(unsigned __int8)sub_5DA7B0(dword_79070C) || *(this + 8) )
                {
                  if ( *((_BYTE *)dword_162EE84 + 37) )
                    return sub_449710(this, 200);
                  else
                    return sub_447DB0((void *)dword_790718);
                }
                else
                {
                  *(this + 8) = 1;
                  v5 = dword_790710;
                  *(_DWORD *)(dword_790710 + 244) = 4;
                  *(_DWORD *)(v5 + 248) = -1;
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
                           *(_DWORD *)(dword_79070C + 4),
                           1,
                           0);
                }
              }
              else
              {
                sub_44CCF0(v16, 0);
                sub_44A110(v16);
                v8 = (CImageDisplay *)sub_5DCB00(v16);
                if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
                  || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
                {
                  v6 = -1;
                }
                else
                {
                  v6 = v16;
                }
                v7 = dword_790710;
                *(_DWORD *)(dword_790710 + 244) = 2;
                *(_DWORD *)(v7 + 248) = v6;
                return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
                         *(_DWORD *)(dword_79070C + 4),
                         1,
                         0);
              }
            }
          }
          else
          {
            *(_BYTE *)(dword_790710 + 209) = 0;
            sub_44CCF0(v15, 0);
            return sub_449F10(v15);
          }
        }
      }
      else
      {
        *(this + 5) = 1;
        if ( (unsigned __int8)sub_44D210(dword_790710) )
        {
          v10 = dword_790710;
          *(_DWORD *)(dword_790710 + 244) = 6;
          *(_DWORD *)(v10 + 248) = 4;
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
                   *(_DWORD *)(dword_79070C + 4),
                   1,
                   0);
        }
        else
        {
          return sub_449710(this, 0);
        }
      }
    }
    else
    {
      v11 = (CImageDisplay *)sub_5DCB00(v14);
      if ( CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v11)->rcSource.left == 3 )
      {
        sub_44CCF0(v14, 1);
      }
      else
      {
        sub_44CCF0(v14, 0);
      }
      return sub_449C30(v14);
    }
  }
  else
  {
    *(this + 4) = 1;
    v13 = dword_790710;
    *(_DWORD *)(dword_790710 + 244) = 5;
    *(_DWORD *)(v13 + 248) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
             *(_DWORD *)(dword_79070C + 4),
             1,
             0);
  }
}


//======================================================================
// sub_449C30
// entry 00449c30  size 587  status ok
//======================================================================

int __thiscall sub_449C30(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  CImageDisplay *v12; // [esp+14h] [ebp-20h]
  __int64 v13; // [esp+2Ch] [ebp-8h] BYREF

  v12 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
      sub_57AB80(11, &unk_713CC8);
    else
      sub_57AE30(dword_793578);
    v2 = sub_5DCB00(a2);
    v3 = sub_5D5A50(v2);
    result = 3 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 688))(dword_79070C);
    if ( v3 < result )
    {
      if ( (unsigned __int8)sub_5DA7B0(dword_79070C) )
      {
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
        return sub_4497A0(this);
      }
      else
      {
        v5 = sub_5DCB00(a2);
        return sub_5DBB70(v5);
      }
    }
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 6) )
    {
      *(this + 6) = 0;
      v7 = sub_5DCB00(a2);
      v8 = sub_5D5A50(v7);
      if ( v8 < 3 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 688))(dword_79070C) )
      {
        if ( (unsigned __int8)sub_5DA7B0(dword_79070C) )
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
        v9 = sub_446120(a2);
        v13 = sub_64C8A0(v9, 0);
        return (*(int (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_790710 + 12 * a2 + 8) + 196))(
                 *(_DWORD *)(dword_790710 + 12 * a2 + 8),
                 &v13,
                 0,
                 1);
      }
    }
    else
    {
      *(this + 6) = 1;
      v6 = sub_637810(2);
      return sub_5DA360(v6);
    }
  }
  return result;
}


//======================================================================
// sub_449E80
// entry 00449e80  size 132  status ok
//======================================================================

int __cdecl sub_449E80()
{
  _BYTE *v1; // [esp+4h] [ebp-1Ch]
  _BYTE *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x28u);
  if ( v2 )
    v1 = sub_448810(v2);
  else
    v1 = 0;
  return sub_5FC420(v1);
}


//======================================================================
// sub_449F10
// entry 00449f10  size 511  status ok
//======================================================================

int __thiscall sub_449F10(_BYTE *this, int a2)
{
  int v3; // eax
  int v6; // [esp+10h] [ebp-18h]
  CImageDisplay *v7; // [esp+18h] [ebp-10h]

  v7 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(11, &unk_7154D8);
      sub_44DF90(a2);
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    *(_BYTE *)(a2 + dword_790710 + 201) = 1;
    return sub_447C70(dword_790718);
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(this + 7) )
    {
      if ( *(_BYTE *)(dword_790710 + 240) )
      {
        *(this + 7) = 0;
        *(_BYTE *)(dword_790710 + 240) = 0;
        sub_44D510(a2, *(_BYTE *)(dword_790710 + 241));
        *(_BYTE *)(a2 + dword_790710 + 205) = 1;
      }
      else
      {
        *(_BYTE *)(dword_790710 + 240) = 1;
        *(_BYTE *)(dword_790710 + 241) = sub_4466B0(a2);
        v6 = dword_790710;
        *(_DWORD *)(dword_790710 + 244) = *(unsigned __int8 *)(dword_790710 + 241) == 0;
        *(_DWORD *)(v6 + 248) = a2;
      }
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
               *(_DWORD *)(dword_79070C + 4),
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
// sub_44A110
// entry 0044a110  size 87  status ok
//======================================================================

int __stdcall sub_44A110(int a1)
{
  int result; // eax

  *(_BYTE *)(a1 + dword_790710 + 201) = 1;
  sub_4474B0((_DWORD **)dword_790718);
  sub_44DDC0(a1);
  result = sub_5DCB00(a1);
  *(_BYTE *)(result + 1186) = 1;
  return result;
}


//======================================================================
// sub_44A170
// entry 0044a170  size 2449  status ok
//======================================================================

int sub_44A170()
{
  int v1; // eax
  int v2; // [esp+0h] [ebp-13Ch]
  bool v4; // [esp+8h] [ebp-134h]
  int v5; // [esp+Ch] [ebp-130h]
  bool v7; // [esp+14h] [ebp-128h]
  int v8; // [esp+18h] [ebp-124h]
  bool v10; // [esp+20h] [ebp-11Ch]
  int v11; // [esp+24h] [ebp-118h]
  bool v13; // [esp+2Ch] [ebp-110h]
  bool v14; // [esp+30h] [ebp-10Ch]
  bool v15; // [esp+34h] [ebp-108h]
  bool v16; // [esp+38h] [ebp-104h]
  bool v17; // [esp+3Ch] [ebp-100h]
  CImageDisplay *v18; // [esp+48h] [ebp-F4h]
  int v19; // [esp+54h] [ebp-E8h]
  CImageDisplay *v20; // [esp+58h] [ebp-E4h]
  CImageDisplay *v21; // [esp+64h] [ebp-D8h]
  CImageDisplay *v22; // [esp+70h] [ebp-CCh]
  CImageDisplay *v23; // [esp+7Ch] [ebp-C0h]
  CImageDisplay *v24; // [esp+88h] [ebp-B4h]
  CImageDisplay *v25; // [esp+94h] [ebp-A8h]
  CImageDisplay *v26; // [esp+A0h] [ebp-9Ch]
  CImageDisplay *v27; // [esp+ACh] [ebp-90h]
  CImageDisplay *v28; // [esp+B8h] [ebp-84h]
  CImageDisplay *v29; // [esp+C4h] [ebp-78h]
  CImageDisplay *v30; // [esp+D0h] [ebp-6Ch]
  __int64 v31; // [esp+E8h] [ebp-54h] BYREF
  int v32; // [esp+F0h] [ebp-4Ch]
  int v33; // [esp+F4h] [ebp-48h]
  int v34; // [esp+F8h] [ebp-44h]
  _DWORD v35[4]; // [esp+FCh] [ebp-40h] BYREF
  double v36; // [esp+10Ch] [ebp-30h]
  double v37; // [esp+114h] [ebp-28h]
  int v38; // [esp+11Ch] [ebp-20h]
  int v39; // [esp+120h] [ebp-1Ch]
  double v40; // [esp+124h] [ebp-18h]
  double v41; // [esp+12Ch] [ebp-10h]
  int v42; // [esp+134h] [ebp-8h]
  int v43; // [esp+138h] [ebp-4h]

  v31 = sub_64C8A0(0, 0);
  v34 = -1;
  v38 = -1;
  v33 = -1;
  v40 = 0.0;
  v41 = 1.0;
  v43 = *(_DWORD *)(dword_790710 + 196);
  v39 = -1;
  v42 = -1;
  v32 = -1;
  v34 = *(_DWORD *)(dword_790710 + 248);
  switch ( *(_DWORD *)(dword_790710 + 244) )
  {
    case 0:
      v38 = 2024;
      v41 = 0.75;
      break;
    case 1:
      v38 = 2027;
      v41 = 0.75;
      break;
    case 2:
      sub_5DCB00(v43);
      sub_5D6020(&v31);
      if ( *(int *)(sub_5DCB00(v43) + 1192) <= 3 || sub_62FBF0(2) )
      {
        if ( *(int *)(sub_5DCB00(v43) + 1192) >= -3 || sub_62FBF0(2) )
        {
          if ( *(_BYTE *)(v43 + dword_790710 + 236) )
          {
            v28 = (CImageDisplay *)sub_5DCB00(v43);
            v15 = CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v28)->rcSource.left == 3;
            v38 = v15 ? 1043 : 1022;
            v41 = 1.0;
          }
          else if ( (int)v31 >= 0 )
          {
            if ( (int)v31 > 0 )
            {
              v26 = (CImageDisplay *)sub_5DCB00(v43);
              v13 = CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 2
                 || CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 3;
              v38 = v13 ? 1008 : 1028;
              v41 = 0.5;
            }
          }
          else
          {
            v27 = (CImageDisplay *)sub_5DCB00(v43);
            v14 = CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v27)->rcSource.left == 3;
            v38 = v14 ? 1000 : 1026;
            v41 = 0.5;
          }
        }
        else
        {
          v29 = (CImageDisplay *)sub_5DCB00(v43);
          v16 = CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 3;
          v38 = v16 ? 1033 : 1023;
          v41 = 0.75;
        }
      }
      else
      {
        v30 = (CImageDisplay *)sub_5DCB00(v43);
        v17 = CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 3;
        v38 = v17 ? 1044 : 1024;
        v41 = 0.75;
      }
      break;
    case 3:
      v34 = sub_44D820(dword_790710);
      if ( v34 == -1 )
      {
        v34 = sub_44DC20(dword_790710);
        if ( v34 != -1 )
        {
          v38 = 2025;
          v41 = 0.75;
        }
      }
      else
      {
        v38 = 2026;
        v41 = 0.75;
      }
      break;
    case 4:
      v42 = sub_5DAC90(dword_79070C);
      v32 = sub_5DADA0(dword_79070C);
      if ( !(unsigned __int8)sub_5DB190(dword_79070C) || v42 == -1 )
      {
        if ( v42 != -1 )
        {
          sub_5DCB00(v42);
          sub_5D6020(&v31);
        }
        if ( v42 == -1 || (int)v31 <= 0 || sub_62FBF0(2) )
        {
          if ( v32 != -1 )
          {
            v21 = (CImageDisplay *)sub_5DCB00(v32);
            if ( CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v21)->rcSource.left == 3 )
            {
              v5 = -1;
            }
            else
            {
              v5 = v32;
            }
            v34 = v5;
            v20 = (CImageDisplay *)sub_5DCB00(v32);
            v4 = CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v20)->rcSource.left == 3;
            v38 = v4 ? 1036 : 1011;
            v41 = 0.5;
          }
        }
        else
        {
          v23 = (CImageDisplay *)sub_5DCB00(v42);
          if ( CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v23)->rcSource.left == 3 )
          {
            v8 = -1;
          }
          else
          {
            v8 = v42;
          }
          v34 = v8;
          v22 = (CImageDisplay *)sub_5DCB00(v42);
          v7 = CImageDisplay::GetDisplayFormat(v22)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v22)->rcSource.left == 3;
          v38 = v7 ? 1035 : 1010;
          v41 = 0.5;
        }
      }
      else
      {
        v25 = (CImageDisplay *)sub_5DCB00(v42);
        if ( CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v25)->rcSource.left == 3 )
        {
          v11 = -1;
        }
        else
        {
          v11 = v42;
        }
        v34 = v11;
        v24 = (CImageDisplay *)sub_5DCB00(v42);
        v10 = CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 3;
        v38 = v10 ? 1042 : 1021;
        v41 = 1.0;
      }
      break;
    case 5:
      v39 = 170000;
      break;
    case 6:
      v39 = 170006;
      break;
    default:
      break;
  }
  v19 = dword_790710;
  *(_DWORD *)(dword_790710 + 244) = -1;
  *(_DWORD *)(v19 + 248) = -1;
  if ( v34 == 4 )
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
    if ( v34 > -1 )
    {
      v18 = (CImageDisplay *)sub_5DCB00(v34);
      if ( CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v18)->rcSource.left == 3 )
      {
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                 *(_DWORD *)(dword_162EE80 + 4),
                 1,
                 0);
      }
    }
    if ( v34 == -1 )
      v2 = sub_636C50(dword_162EE84);
    else
      v2 = v34;
    v35[0] = v2;
    v35[1] = v38;
    v35[2] = v33;
    v36 = v40;
    v37 = v41;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
    v1 = sub_637810(2);
    return sub_639390(v35, *(_DWORD *)(dword_162EE80 + 4), v1, 1);
  }
}


//======================================================================
// sub_44AB50
// entry 0044ab50  size 149  status ok
//======================================================================

_DWORD *__thiscall sub_44AB50(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &LetItRideRoom::`vftable';
  sub_5F1AD0(3214000);
  dword_79070C = (int)this;
  dword_790710 = 0;
  dword_790714 = 0;
  dword_790718 = 0;
  dword_79071C = 0;
  return this;
}


//======================================================================
// sub_44ABF0
// entry 0044abf0  size 324  status ok
//======================================================================

int __thiscall sub_44ABF0(_DWORD *this)
{
  *this = &LetItRideRoom::`vftable';
  dword_79070C = 0;
  if ( dword_790710 )
    (**(void (__thiscall ***)(int, int))dword_790710)(dword_790710, 1);
  dword_790710 = 0;
  if ( dword_790714 )
    (**(void (__thiscall ***)(int, int))dword_790714)(dword_790714, 1);
  dword_790714 = 0;
  if ( dword_790718 )
    (**(void (__thiscall ***)(int, int))dword_790718)(dword_790718, 1);
  dword_790718 = 0;
  if ( dword_79071C )
    (**(void (__thiscall ***)(int, int))dword_79071C)(dword_79071C, 1);
  dword_79071C = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_44AD40
// entry 0044ad40  size 486  status ok
//======================================================================

int __thiscall sub_44AD40(_DWORD **this)
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
  v13 = operator new(0xFCu);
  if ( v13 )
    v6 = sub_44C670(v13);
  else
    v6 = 0;
  dword_790710 = v6;
  sub_44C870();
  v12 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_790714 = (int)v5;
  v11 = (ATL::CCRTHeap *)operator new(0x70u);
  if ( v11 )
    v4 = sub_446AF0(v11);
  else
    v4 = 0;
  dword_790718 = (int)v4;
  sub_446E30(v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_79071C = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &LetItRideRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8, -1);
  return sub_449710((_BYTE *)dword_790714, 0);
}


//======================================================================
// sub_44AF30
// entry 0044af30  size 355  status ok
//======================================================================

int __stdcall sub_44AF30(int a1)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-18h]
  CImageDisplay *v4; // [esp+10h] [ebp-10h]

  result = sub_5D7F40(a1);
  if ( dword_790710 )
  {
    result = sub_44CEE0(dword_790710);
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
            result = sub_44D010(v3);
        }
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    result = a1;
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      if ( dword_790718 )
      {
        if ( dword_790710 )
        {
          if ( *(_DWORD *)(dword_790718 + 100) )
          {
            if ( *(_DWORD *)(dword_790718 + 104) )
            {
              result = sub_5F54A0(*(_DWORD *)(dword_790718 + 100));
              if ( (_BYTE)result
                || (result = (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_790718 + 104)), (_BYTE)result) )
              {
                *(_BYTE *)(dword_790710 + 209) = 1;
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
// sub_44B0A0
// entry 0044b0a0  size 196  status ok
//======================================================================

int __stdcall sub_44B0A0(int a1, int a2)
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
// sub_44B170
// entry 0044b170  size 49  status ok
//======================================================================

int __thiscall sub_44B170(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3214001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_44B1B0
// entry 0044b1b0  size 295  status ok
//======================================================================

int __stdcall sub_44B1B0(int a1, int a2)
{
  CImageDisplay *v4; // [esp+18h] [ebp-14h]

  if ( sub_5DCB00(*(_DWORD *)(dword_790710 + 196)) )
  {
    v4 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_790710 + 196));
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      switch ( a1 )
      {
        case 3214002:
          sub_44D010(*(_DWORD *)(dword_790710 + 196));
          break;
        case 3214003:
          return sub_44D6A0(*(_DWORD *)(dword_790710 + 196), 0);
        case 3214004:
          return sub_44D6A0(*(_DWORD *)(dword_790710 + 196), 1);
      }
    }
  }
  return sub_5DC7D0(a1, a2);
}


//======================================================================
// sub_44B2E0
// entry 0044b2e0  size 35  status ok
//======================================================================

char __thiscall sub_44B2E0(void *this)
{
  if ( dword_790710 )
    return sub_44CBE0(dword_790710, this);
  else
    return 1;
}


//======================================================================
// sub_44B310
// entry 0044b310  size 77  status ok
//======================================================================

int __thiscall sub_44B310(void *this, char a2)
{
  sub_44C850(a2 == 0);
  sub_637610(dword_162EE84);
  sub_5DB9B0(this);
  sub_44CA20(dword_790710, this);
  return sub_449710((_BYTE *)dword_790714, 0);
}


//======================================================================
// sub_44B360
// entry 0044b360  size 50  status ok
//======================================================================

int __stdcall sub_44B360(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 427;
  v2[1] = 123;
  v2[2] = 538;
  v2[3] = 9;
  return v2[a1];
}


//======================================================================
// sub_44B3A0
// entry 0044b3a0  size 50  status ok
//======================================================================

int __stdcall sub_44B3A0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 242;
  v2[1] = 242;
  v2[2] = 102;
  v2[3] = 104;
  return v2[a1];
}


//======================================================================
// sub_44B3E0
// entry 0044b3e0  size 35  status ok
//======================================================================

int __thiscall sub_44B3E0(void *this)
{
  if ( dword_790710 )
    return sub_44CCC0(dword_790710, this);
  else
    return 0;
}


//======================================================================
// sub_44B410
// entry 0044b410  size 77  status ok
//======================================================================

int __thiscall sub_44B410(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(dword_790718 + 4 * i + 20) != a2 )
      sub_5CD330(*(_DWORD *)(dword_790718 + 4 * i + 20), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_44B460
// entry 0044b460  size 207  status ok
//======================================================================

void __thiscall sub_44B460(void *this, int a2)
{
  int v2; // [esp-8h] [ebp-1Ch]
  int v3; // [esp-4h] [ebp-18h]
  void *v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]
  int i; // [esp+10h] [ebp-4h]

  v4 = this;
  for ( i = 0; i < 3; ++i )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, void *))(**(_DWORD **)(dword_790710 + 4 * (i + 3 * a2) + 8) + 180))(
           *(_DWORD *)(dword_790710 + 4 * (i + 3 * a2) + 8),
           v4) )
    {
      v5 = *(_DWORD *)(dword_790710 + 4 * (i + 3 * a2) + 8);
      v3 = *(_DWORD *)(v5 + 32 * a2 + 76);
      v2 = *(_DWORD *)(v5 + 32 * a2 + 72);
      sub_5DCB00(a2);
      sub_5D5CF0(v2, v3);
    }
    sub_5CB9B0(*(_DWORD *)(dword_790710 + 4 * (i + 3 * a2) + 8));
  }
}


//======================================================================
// sub_44B530
// entry 0044b530  size 195  status ok
//======================================================================

int __stdcall sub_44B530(int a1, int a2)
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

  v11 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v11;
  v7 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v7;
  if ( !v7 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v6 = *(_DWORD *)(dword_790710 + 4 * (i + 3 * a1) + 8);
      v3 = *(_DWORD *)(v6 + 32 * a1 + 76);
      v9 = *(_DWORD *)(v6 + 32 * a1 + 72);
      v10 = v3;
      v4 = (int *)sub_64C5C0(v8, v9, v3);
      v5 = *v4;
      result = v4[1];
      *(_DWORD *)a2 = v5;
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}


//======================================================================
// sub_44B600
// entry 0044b600  size 22  status ok
//======================================================================

int __thiscall sub_44B600(void *this)
{
  return sub_44C7F0(dword_790710, this);
}


//======================================================================
// sub_44B620
// entry 0044b620  size 36  status ok
//======================================================================

int __thiscall sub_44B620(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_44B650
// entry 0044b650  size 115  status ok
//======================================================================

int __stdcall sub_44B650(int a1)
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
  sub_44C7B0(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_44C7B0(-1);
  *(_DWORD *)(v5 + 12) = v3;
  *(_DWORD *)(v5 + 16) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_44B6D0
// entry 0044b6d0  size 119  status ok
//======================================================================

int __stdcall sub_44B6D0(int a1)
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
  sub_44C7B0(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_44C7B0(a1);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_44B750
// entry 0044b750  size 107  status ok
//======================================================================

int __thiscall sub_44B750(void *this, int a2)
{
  int result; // eax
  char v3; // al

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(dword_790718 + 80) )
      {
        v3 = sub_4466B0(*(_DWORD *)(dword_790710 + 196));
        return sub_449300(v3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_44B7C0
// entry 0044b7c0  size 18  status ok
//======================================================================

int __stdcall sub_44B7C0(int a1)
{
  return 1046;
}


//======================================================================
// sub_44B7E0
// entry 0044b7e0  size 70  status ok
//======================================================================

int __thiscall sub_44B7E0(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_4474B0((_DWORD **)dword_790718);
  sub_44CA20(dword_790710, this);
  return sub_4497A0((_BYTE *)dword_790714);
}


//======================================================================
// sub_44B830
// entry 0044b830  size 589  status ok
//======================================================================

int __thiscall sub_44B830(_BYTE *this, int a2, int a3, int a4, int a5)
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
    *v17 = &LetItRideSettingsHelpText::`vftable';
    v15 = v17;
  }
  else
  {
    v15 = 0;
  }
  v21 = -1;
  v9 = sub_5FA5B0(v15, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v9);
  if ( (unsigned __int8)sub_44C7F0(dword_790710) )
  {
    v14 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
  }
  result = (unsigned __int8)sub_44C830(dword_790710);
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
// sub_44BA80
// entry 0044ba80  size 216  status ok
//======================================================================

int __thiscall sub_44BA80(_BYTE *this, int a2, int a3)
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
  sub_44C810(v4);
  v5 = sub_5FB350(51);
  v6 = sub_600230(v5);
  sub_44C850(v6);
  if ( dword_7947B0 )
  {
    v7 = sub_5FB350(51);
    v8 = sub_600230(v7);
    sub_5CDD10(v8 == 0);
  }
  if ( (unsigned __int8)sub_5DA830(dword_79070C) )
    return sub_4474B0((_DWORD **)dword_790718);
  sub_637610(dword_162EE84);
  sub_4474B0((_DWORD **)dword_790718);
  result = (int)this;
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_44CA20(dword_790710, this);
    return sub_4497A0((_BYTE *)dword_790714);
  }
  return result;
}


//======================================================================
// sub_44BB60
// entry 0044bb60  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_44BB60(_DWORD *a1, int a2)
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
    sub_5E9F20((char)"false", "..\\Casino\\letitrideroom.cpp", 376);
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
// sub_44BC00
// entry 0044bc00  size 284  status ok
//======================================================================

void __thiscall sub_44BC00(void *this, int a2)
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
// sub_44BD20
// entry 0044bd20  size 122  status ok
//======================================================================

int __thiscall sub_44BD20(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_4497A0((_BYTE *)dword_790714);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\letitrideroom.cpp", 437);
  sub_44CA20(dword_790710, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_44BDE0
// entry 0044bde0  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_44BDE0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &LetItRideRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_44BE10
// entry 0044be10  size 120  status ok
//======================================================================

_DWORD *sub_44BE10()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_44AB50(v2);
  else
    return 0;
}


//======================================================================
// sub_44BE90
// entry 0044be90  size 51  status ok
//======================================================================

char __stdcall sub_44BE90(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_LETITRIDE");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_44BEF0
// entry 0044bef0  size 16  status ok
//======================================================================

int sub_44BEF0()
{
  return 3214000;
}


//======================================================================
// sub_44BF00
// entry 0044bf00  size 16  status ok
//======================================================================

const char *sub_44BF00()
{
  return "letitride";
}


//======================================================================
// sub_44BF20
// entry 0044bf20  size 16  status ok
//======================================================================

char **sub_44BF20()
{
  return &off_7172F8;
}


//======================================================================
// sub_44BF30
// entry 0044bf30  size 16  status ok
//======================================================================

char **sub_44BF30()
{
  return &off_717300;
}


//======================================================================
// sub_44BF60
// entry 0044bf60  size 94  status ok
//======================================================================

char __stdcall sub_44BF60(_DWORD *a1, int a2)
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
// sub_44BFC0
// entry 0044bfc0  size 16  status ok
//======================================================================

int sub_44BFC0()
{
  return 20;
}


//======================================================================
// sub_44BFD0
// entry 0044bfd0  size 46  status ok
//======================================================================

char __stdcall sub_44BFD0(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  return 1;
}


//======================================================================
// sub_44C000
// entry 0044c000  size 84  status ok
//======================================================================

char __stdcall sub_44C000(_BYTE *a1)
{
  _BYTE *v2; // [esp+4h] [ebp-8h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  return 1;
}


//======================================================================
// sub_44C060
// entry 0044c060  size 73  status ok
//======================================================================

char __stdcall sub_44C060(_DWORD *a1)
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
// sub_44C0C0
// entry 0044c0c0  size 16  status ok
//======================================================================

int sub_44C0C0()
{
  return 8;
}


//======================================================================
// sub_44C0D0
// entry 0044c0d0  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_44C0D0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(9);
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
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)9 )
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
// sub_44C200
// entry 0044c200  size 446  status ok
//======================================================================

char __stdcall sub_44C200(int a1, int a2)
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

  v20 = sub_63AAE0(9);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)9 )
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
// sub_44C3C0
// entry 0044c3c0  size 60  status ok
//======================================================================

char __stdcall sub_44C3C0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_44C400
// entry 0044c400  size 41  status ok
//======================================================================

char __stdcall sub_44C400(int a1)
{
  if ( a1 != 3214000 )
    return 0;
  sub_653BD0(9);
  return 1;
}


//======================================================================
// sub_44C430
// entry 0044c430  size 15  status ok
//======================================================================

char __stdcall sub_44C430(int a1)
{
  return 0;
}


//======================================================================
// sub_44C440
// entry 0044c440  size 15  status ok
//======================================================================

char __stdcall sub_44C440(int a1)
{
  return 0;
}


//======================================================================
// sub_44C450
// entry 0044c450  size 16  status ok
//======================================================================

void *sub_44C450()
{
  return &unk_717304;
}


//======================================================================
// sub_44C460
// entry 0044c460  size 190  status ok
//======================================================================

void *__stdcall sub_44C460(int a1)
{
  int v1; // eax

  if ( (dword_790720 & 1) == 0 )
  {
    dword_790720 |= 1u;
    dword_717328 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_71732C = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3214001 )
    return &unk_717324;
  else
    return 0;
}


//======================================================================
// sub_44C520
// entry 0044c520  size 16  status ok
//======================================================================

void *sub_44C520()
{
  return &unk_716D70;
}


//======================================================================
// sub_44C530
// entry 0044c530  size 16  status ok
//======================================================================

void *sub_44C530()
{
  return &unk_717230;
}


//======================================================================
// sub_44C540
// entry 0044c540  size 261  status ok
//======================================================================

char __stdcall sub_44C540(int a1, int a2)
{
  if ( a2 == 3214000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(9, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 9, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3214000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 9, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_44C670
// entry 0044c670  size 83  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_44C670(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &LetItRideState::`vftable';
  *((_DWORD *)this + 1) = 0;
  for ( i = 0; i < 12; ++i )
    *((_DWORD *)this + i + 2) = 0;
  return this;
}


//======================================================================
// sub_44C6D0
// entry 0044c6d0  size 210  status ok
//======================================================================

void __thiscall sub_44C6D0(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &LetItRideState::`vftable';
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
// sub_44C7B0
// entry 0044c7b0  size 62  status ok
//======================================================================

int __stdcall sub_44C7B0(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_44C7F0
// entry 0044c7f0  size 23  status ok
//======================================================================

char __thiscall sub_44C7F0(void *this)
{
  return *(_BYTE *)sub_44C7B0(-1);
}


//======================================================================
// sub_44C810
// entry 0044c810  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_44C810(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_44C7B0(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_44C830
// entry 0044c830  size 24  status ok
//======================================================================

char sub_44C830()
{
  return *(_BYTE *)(sub_44C7B0(-1) + 1);
}


//======================================================================
// sub_44C850
// entry 0044c850  size 29  status ok
//======================================================================

int __stdcall sub_44C850(char a1)
{
  int result; // eax

  result = sub_44C7B0(-1);
  *(_BYTE *)(result + 1) = a1;
  return result;
}


//======================================================================
// sub_44C870
// entry 0044c870  size 417  status ok
//======================================================================

int __thiscall sub_44C870(int this)
{
  __int64 v2; // [esp-8h] [ebp-48h]
  _AFX_OLE_STATE *v3; // [esp+4h] [ebp-3Ch]
  int v4; // [esp+8h] [ebp-38h]
  _AFX_OLE_STATE *v6; // [esp+20h] [ebp-20h]
  void *v7; // [esp+28h] [ebp-18h]
  int i; // [esp+30h] [ebp-10h]
  int j; // [esp+30h] [ebp-10h]

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
  for ( j = 0; j < 4; ++j )
  {
    v2 = sub_64C8A0(0, 0);
    sub_5DCB00(j);
    sub_5D6050(v2, HIDWORD(v2));
  }
  sub_44CA20(this);
  *(_BYTE *)(this + 209) = 0;
  return this;
}


//======================================================================
// sub_44CA20
// entry 0044ca20  size 439  status ok
//======================================================================

int __thiscall sub_44CA20(int this)
{
  int result; // eax
  int k; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]
  int m; // [esp+14h] [ebp-4h]
  int n; // [esp+14h] [ebp-4h]

  sub_44CCF0(-1, 0);
  *(_DWORD *)(this + 244) = -1;
  *(_DWORD *)(this + 248) = -1;
  sub_44CC90(this);
  *(_BYTE *)(this + 200) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_BYTE *)(this + 216) = 0;
  *(_BYTE *)(this + 217) = 0;
  result = this;
  *(_BYTE *)(this + 240) = 0;
  *(_BYTE *)(this + 241) = 0;
  for ( i = 0; i < 12; ++i )
    result = sub_5CB9B0(*(_DWORD *)(this + 4 * i + 8));
  for ( j = 0; j < 4; ++j )
  {
    for ( k = 0; k < 5; ++k )
    {
      sub_44CD40(j, k, 0);
      result = k + 1;
    }
  }
  for ( m = 0; m < 2; ++m )
  {
    *(_WORD *)(this + 2 * m + 192) = 0;
    result = m + 1;
  }
  for ( n = 0; n < 4; ++n )
  {
    *(_BYTE *)(n + this + 201) = 0;
    *(_BYTE *)(sub_5DCB00(n) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(n) + 1185) = 0;
    *(_BYTE *)(sub_5DCB00(n) + 1186) = 0;
    *(_BYTE *)(n + this + 205) = 0;
    *(_DWORD *)(this + 4 * n + 220) = -1;
    *(_BYTE *)(n + this + 236) = 0;
    result = n + 1;
  }
  return result;
}


//======================================================================
// sub_44CBE0
// entry 0044cbe0  size 162  status ok
//======================================================================

char sub_44CBE0()
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
// sub_44CC90
// entry 0044cc90  size 48  status ok
//======================================================================

int sub_44CC90()
{
  sub_6437D0(1, 0);
  return sub_643930(5, 3, "LetItRide", 0);
}


//======================================================================
// sub_44CCC0
// entry 0044ccc0  size 45  status ok
//======================================================================

int __thiscall sub_44CCC0(_DWORD *this)
{
  if ( *(this + 49) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 49));
}


//======================================================================
// sub_44CCF0
// entry 0044ccf0  size 77  status ok
//======================================================================

int __thiscall sub_44CCF0(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 49) = a2;
  if ( *(this + 49) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_44CD40
// entry 0044cd40  size 40  status ok
//======================================================================

int __thiscall sub_44CD40(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 5 * a2 + a3 + 76) = a4;
  return a3;
}


//======================================================================
// sub_44CD70
// entry 0044cd70  size 36  status ok
//======================================================================

__int16 __thiscall sub_44CD70(_WORD *this, int a2, int a3)
{
  return *(this + 5 * a2 + a3 + 76);
}


//======================================================================
// sub_44CDA0
// entry 0044cda0  size 87  status ok
//======================================================================

int __thiscall sub_44CDA0(_WORD *this, int a2, __int16 a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5 && sub_44CD70(this, a2, i); ++i )
    ;
  return sub_44CD40(this, a2, i, a3);
}


//======================================================================
// sub_44CE00
// entry 0044ce00  size 83  status ok
//======================================================================

int __thiscall sub_44CE00(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_44CD70(this, a2, i) )
      ++v4;
  }
  return v4;
}


//======================================================================
// sub_44CE60
// entry 0044ce60  size 35  status ok
//======================================================================

char __thiscall sub_44CE60(_BYTE *this, int a2)
{
  if ( a2 == -1 )
    return 1;
  else
    return *(this + a2 + 201);
}


//======================================================================
// sub_44CE90
// entry 0044ce90  size 67  status ok
//======================================================================

int __thiscall sub_44CE90(_WORD *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 4; ++i )
    v3 += sub_44CE00(this, i);
  return v3;
}


//======================================================================
// sub_44CEE0
// entry 0044cee0  size 212  status ok
//======================================================================

int sub_44CEE0()
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
// sub_44CFC0
// entry 0044cfc0  size 66  status ok
//======================================================================

char __thiscall sub_44CFC0(int *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + 6 * a2 + 2 * i + 14) > 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_44D010
// entry 0044d010  size 261  status ok
//======================================================================

char __thiscall sub_44D010(int *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  _DWORD v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-4h]

  LOBYTE(v2) = sub_44CFC0(this, a2);
  if ( (_BYTE)v2 )
  {
    v2 = sub_5DCB00(a2);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_79070C + 656))(dword_79070C, a2);
      for ( i = 0; i < 3; ++i )
      {
        v3 = i + 3 * a2;
        v4 = *(this + 2 * v3 + 14);
        v5 = *(this + 2 * v3 + 15);
        v8[0] = v4;
        v8[1] = v5;
        if ( v4 > 0 )
        {
          LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)*(this + 3 * a2 + i + 2) + 196))(
                         *(this + 3 * a2 + i + 2),
                         v8,
                         0,
                         1);
          return v2;
        }
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_4474B0((_DWORD **)dword_790718);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
                     *(_DWORD *)(dword_79070C + 4),
                     1,
                     0);
    }
  }
  return v2;
}


//======================================================================
// sub_44D120
// entry 0044d120  size 225  status ok
//======================================================================

void __thiscall sub_44D120(_DWORD *this)
{
  int v1; // edx
  int v3; // [esp+8h] [ebp-20h]
  int v4; // [esp+1Ch] [ebp-Ch]
  int j; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      v4 = j + 3 * i;
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
// sub_44D210
// entry 0044d210  size 162  status ok
//======================================================================

char sub_44D210()
{
  CImageDisplay *v1; // [esp+14h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(i) + 1185)
      && *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_44D2C0
// entry 0044d2c0  size 61  status ok
//======================================================================

char __thiscall sub_44D2C0(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( sub_44CE00(this, i) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_44D300
// entry 0044d300  size 116  status ok
//======================================================================

int __thiscall sub_44D300(_WORD *this)
{
  int v3; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 5;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      if ( sub_44CE00(this, i) < v3 )
        v3 = sub_44CE00(this, i);
    }
  }
  return v3;
}


//======================================================================
// sub_44D380
// entry 0044d380  size 171  status ok
//======================================================================

int __thiscall sub_44D380(_WORD *this)
{
  int v1; // esi
  _DWORD v4[4]; // [esp+10h] [ebp-14h]
  int i; // [esp+20h] [ebp-4h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(v4[i]) + 1184) )
    {
      if ( sub_44CE00(this, v4[i]) < 3 )
      {
        v1 = sub_44CE00(this, v4[i]);
        if ( v1 == sub_44D300(this) )
          return v4[i];
      }
    }
  }
  return -1;
}


//======================================================================
// sub_44D430
// entry 0044d430  size 221  status ok
//======================================================================

int __thiscall sub_44D430(_DWORD *this)
{
  CImageDisplay *v3; // [esp+Ch] [ebp-1Ch]
  _DWORD v4[4]; // [esp+14h] [ebp-14h]
  int i; // [esp+24h] [ebp-4h]

  v4[0] = 2;
  v4[1] = 0;
  v4[2] = 1;
  v4[3] = 3;
  if ( *(this + 53) == 2 )
    return -1;
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(v4[i]);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v4[i]) + 1185)
      && !*((_BYTE *)this + v4[i] + 205) )
    {
      return v4[i];
    }
  }
  return -1;
}


//======================================================================
// sub_44D510
// entry 0044d510  size 136  status ok
//======================================================================

int __thiscall sub_44D510(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v4; // [esp-8h] [ebp-1Ch]
  int v5; // [esp-4h] [ebp-18h]
  int v7; // [esp+4h] [ebp-10h]
  int v8; // [esp+10h] [ebp-4h]

  result = 3 * a2;
  v8 = 3 * a2;
  if ( !a3 )
  {
    v7 = *(this + *(this + 53) + v8 + 2);
    v5 = *(_DWORD *)(v7 + 32 * a2 + 76);
    v4 = *(_DWORD *)(v7 + 32 * a2 + 72);
    sub_5DCB00(a2);
    sub_5D5CF0(v4, v5);
    return sub_5CB9B0(*(this + *(this + 53) + v8 + 2));
  }
  return result;
}


//======================================================================
// sub_44D5A0
// entry 0044d5a0  size 52  status ok
//======================================================================

int __thiscall sub_44D5A0(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 205) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_44D5E0
// entry 0044d5e0  size 189  status ok
//======================================================================

char __thiscall sub_44D5E0(_BYTE *this, int a2, char a3)
{
  bool v4; // [esp+4h] [ebp-14h]
  CImageDisplay *v6; // [esp+Ch] [ebp-Ch]

  if ( !(unsigned __int8)sub_5DF7B0(-1) || *(this + 200) )
    return 0;
  v6 = (CImageDisplay *)sub_5DCB00(a2);
  v4 = CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
  if ( !v4 || a3 == sub_4466B0(a2) )
    return 0;
  *(this + 200) = 1;
  sub_57C140(dword_793578);
  return 1;
}


//======================================================================
// sub_44D6A0
// entry 0044d6a0  size 94  status ok
//======================================================================

char __thiscall sub_44D6A0(_BYTE *this, int a2, char a3)
{
  if ( sub_44D5E0(this, a2, a3) )
    return 0;
  *(this + 200) = 0;
  sub_44D510(this, a2, a3);
  *(this + a2 + 201) = 0;
  *(this + a2 + 205) = 1;
  return 1;
}


//======================================================================
// sub_44D700
// entry 0044d700  size 28  status ok
//======================================================================

bool __thiscall sub_44D700(_DWORD *this)
{
  return *(this + 53) < 2;
}


//======================================================================
// sub_44D720
// entry 0044d720  size 60  status ok
//======================================================================

bool __thiscall sub_44D720(_BYTE *this)
{
  return !*(this + 216) || !*(this + 217);
}


//======================================================================
// sub_44D760
// entry 0044d760  size 123  status ok
//======================================================================

int __thiscall sub_44D760(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  result = this;
  if ( *(_BYTE *)(this + 216) )
  {
    v3 = 1;
    result = this;
    *(_BYTE *)(this + 217) = 1;
  }
  else
  {
    v3 = 0;
    *(_BYTE *)(this + 216) = 1;
  }
  for ( i = 0; i < 4; ++i )
    result = sub_44CDA0((_WORD *)this, i, *(_WORD *)(this + 2 * v3 + 192));
  return result;
}


//======================================================================
// sub_44D7E0
// entry 0044d7e0  size 63  status ok
//======================================================================

int __thiscall sub_44D7E0(int this)
{
  if ( sub_44D720((_BYTE *)this) )
    sub_44D760(this);
  sub_44D5A0((_BYTE *)this);
  ++*(_DWORD *)(this + 212);
  return this;
}


//======================================================================
// sub_44D820
// entry 0044d820  size 187  status ok
//======================================================================

int sub_44D820()
{
  int v1; // ecx
  CImageDisplay *v2; // [esp+Ch] [ebp-10h]
  int v3; // [esp+14h] [ebp-8h]
  int v4; // [esp+18h] [ebp-4h]

  v3 = 0;
  v4 = sub_62FBF0(4);
  while ( v3 < 4 )
  {
    v2 = (CImageDisplay *)sub_5DCB00(v4);
    if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v4) + 1185)
      && (unsigned __int8)sub_44D8E0(v4) )
    {
      return v4;
    }
    v1 = v4++;
    if ( v1 >= 4 )
      v4 = 0;
    ++v3;
  }
  return -1;
}


//======================================================================
// sub_44D8E0
// entry 0044d8e0  size 418  status ok
//======================================================================

bool __thiscall sub_44D8E0(int this, int a2)
{
  int v2; // eax
  __int16 v3; // ax
  int v4; // eax
  _WORD v7[6]; // [esp+4h] [ebp-1Ch] BYREF
  int v8; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int v10; // [esp+1Ch] [ebp-4h]

  v2 = sub_44CE00((_WORD *)this, a2);
  v10 = sub_462BA0(this + 10 * a2 + 152, v2, 0);
  if ( v10 == 2 && (int)sub_4639E0(this + 10 * a2 + 152, 5) < 10 )
    v10 = 1;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_DWORD *)(this + 212) == 1 && sub_44CD70((_WORD *)this, a2, i) == *(_WORD *)(this + 192) )
    {
      v7[i] = 0;
    }
    else if ( *(_DWORD *)(this + 212) == 2 && sub_44CD70((_WORD *)this, a2, i) == *(_WORD *)(this + 194) )
    {
      v7[i] = 0;
    }
    else
    {
      v3 = sub_44CD70((_WORD *)this, a2, i);
      v7[i] = v3;
    }
  }
  v4 = sub_44CE00((_WORD *)this, a2);
  v8 = sub_462BA0(v7, v4 - 1, 0);
  if ( v8 == 2 && (int)sub_4639E0(this + 10 * a2 + 152, 5) < 10 )
    v8 = 1;
  if ( v10 > v8 )
    return 1;
  if ( v8 >= 5 && v10 == 2 )
    return 1;
  return v10 >= 5 && v10 != 8;
}


//======================================================================
// sub_44DA90
// entry 0044da90  size 399  status ok
//======================================================================

bool __thiscall sub_44DA90(int this, int a2)
{
  int v2; // eax
  __int16 v3; // ax
  int v4; // eax
  _WORD v7[6]; // [esp+4h] [ebp-1Ch] BYREF
  int v8; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int v10; // [esp+1Ch] [ebp-4h]

  v2 = sub_44CE00((_WORD *)this, a2);
  v10 = sub_462BA0(this + 10 * a2 + 152, v2, 0);
  if ( v10 == 2 && (int)sub_4639E0(this + 10 * a2 + 152, 5) < 10 )
    v10 = 1;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_DWORD *)(this + 212) == 1 && sub_44CD70((_WORD *)this, a2, i) == *(_WORD *)(this + 192) )
    {
      v7[i] = 0;
    }
    else if ( *(_DWORD *)(this + 212) == 2 && sub_44CD70((_WORD *)this, a2, i) == *(_WORD *)(this + 194) )
    {
      v7[i] = 0;
    }
    else
    {
      v3 = sub_44CD70((_WORD *)this, a2, i);
      v7[i] = v3;
    }
  }
  v4 = sub_44CE00((_WORD *)this, a2);
  v8 = sub_462BA0(v7, v4 - 1, 0);
  if ( v8 == 2 && (int)sub_4639E0(this + 10 * a2 + 152, 5) < 10 )
    v8 = 1;
  return (v8 < 5 || v10 != 2) && v10 < v8;
}


//======================================================================
// sub_44DC20
// entry 0044dc20  size 187  status ok
//======================================================================

int __thiscall sub_44DC20(void *this)
{
  int v2; // ecx
  CImageDisplay *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+14h] [ebp-8h]
  int v6; // [esp+18h] [ebp-4h]

  v5 = 0;
  v6 = sub_62FBF0(4);
  while ( v5 < 4 )
  {
    v4 = (CImageDisplay *)sub_5DCB00(v6);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v6) + 1185)
      && sub_44DA90((int)this, v6) )
    {
      return v6;
    }
    v2 = v6++;
    if ( v2 >= 4 )
      v6 = 0;
    ++v5;
  }
  return -1;
}


//======================================================================
// sub_44DCE0
// entry 0044dce0  size 212  status ok
//======================================================================

int sub_44DCE0()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  _DWORD v2[4]; // [esp+1Ch] [ebp-14h]
  int i; // [esp+2Ch] [ebp-4h]

  v2[0] = 3;
  v2[1] = 1;
  v2[2] = 0;
  v2[3] = 2;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v2[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1185)
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1186) )
    {
      return v2[i];
    }
  }
  return -1;
}


//======================================================================
// sub_44DDC0
// entry 0044ddc0  size 449  status ok
//======================================================================

int __thiscall sub_44DDC0(_DWORD *this, int a2)
{
  int result; // eax
  __int64 v3; // [esp-8h] [ebp-40h]
  __int64 v4; // [esp-8h] [ebp-40h]
  int v5; // [esp+0h] [ebp-38h]
  char v7; // [esp+Bh] [ebp-2Dh]
  int v8; // [esp+Ch] [ebp-2Ch]
  char v9; // [esp+13h] [ebp-25h]
  int v10; // [esp+14h] [ebp-24h]
  int v11; // [esp+28h] [ebp-10h]
  int i; // [esp+34h] [ebp-4h]

  v11 = sub_462BA0((char *)this + 10 * a2 + 152, 5, 0);
  if ( v11 == 2 && (int)sub_4639E0((char *)this + 10 * a2 + 152, 5) < 10 )
    v11 = 1;
  *(this + a2 + 55) = v11 != 1;
  v3 = sub_64C8A0(0, 0);
  sub_5DCB00(a2);
  sub_5D6050(v3, HIDWORD(v3));
  v10 = sub_5DCB00(a2);
  v9 = *(_BYTE *)(sub_5D52E0(v10) + 42);
  result = v9;
  for ( i = 0; i < 3; ++i )
  {
    result = sub_5CB7D0(a2, 0);
    if ( (_BYTE)result )
    {
      sub_44E340(a2, v11);
      v8 = sub_5DCB00(a2);
      v7 = *(_BYTE *)(sub_5D52E0(v8) + 42);
      result = v7;
      if ( v9 != v7 && !v7 )
      {
        v5 = sub_5DCB00(a2);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, -1);
        v4 = sub_64C8A0(0, 0);
        sub_5DCB00(a2);
        return sub_5D6050(v4, HIDWORD(v4));
      }
    }
  }
  return result;
}


//======================================================================
// sub_44DF90
// entry 0044df90  size 405  status ok
//======================================================================

int __thiscall sub_44DF90(_WORD *this, int a2)
{
  int v2; // eax
  const char *v3; // eax
  char *v4; // eax
  char Source; // [esp+0h] [ebp-9E0h]
  char *Sourcea; // [esp+0h] [ebp-9E0h]
  char v9[128]; // [esp+8h] [ebp-9D8h] BYREF
  char v10[1031]; // [esp+88h] [ebp-958h] BYREF
  char v11; // [esp+48Fh] [ebp-551h]
  char Buffer[64]; // [esp+490h] [ebp-550h] BYREF
  char v13[1028]; // [esp+4D0h] [ebp-510h] BYREF
  int v14; // [esp+8D4h] [ebp-10Ch]
  char Destination[260]; // [esp+8D8h] [ebp-108h] BYREF

  v11 = sub_4466B0(a2);
  v2 = sub_44CE00(this, a2);
  v14 = sub_462BA0(this + 5 * a2 + 76, v2, 0);
  if ( v14 == -1 )
    sub_5E9F20((char)"handType != -1", "..\\Casino\\letitridestate.cpp", 646);
  sprintf(Buffer, "Let it Ride Tutorial: handType %hd\n", v14);
  sub_62FDE0(Buffer, Source);
  sub_462F40(v14, v9);
  if ( v11 )
    Sourcea = (char *)sub_630F40("SID_LETITRIDE_LETITRIDE");
  else
    Sourcea = (char *)sub_630F40("SID_LETITRIDE_TAKEBETBACK");
  strcpy(Destination, Sourcea);
  sub_446990(a2, v14, v11, v13);
  v3 = (const char *)sub_630F40("SID_LETITRIDE_CURRENTHAND_FORMAT");
  sprintf(v10, v3, v9, Destination, v13);
  v4 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80(1, v4, v10);
}


//======================================================================
// sub_44E170
// entry 0044e170  size 457  status ok
//======================================================================

int __thiscall sub_44E170(pairNode *this, _DWORD *a2, int a3, char a4)
{
  int v4; // eax
  int v5; // eax
  const CHAR *v6; // eax
  int result; // eax
  int v8; // eax
  const CHAR *v9; // [esp-8h] [ebp-44h]
  double v11; // [esp+24h] [ebp-18h]
  __int64 v12; // [esp+2Ch] [ebp-10h] BYREF
  int v13; // [esp+34h] [ebp-8h]
  int i; // [esp+38h] [ebp-4h]

  v13 = 3 * *(_DWORD *)(dword_790710 + 196);
  v12 = sub_64C8A0(0, 0);
  if ( *a2 )
  {
    v4 = a2[1];
    LODWORD(v12) = *a2;
    HIDWORD(v12) = v4;
  }
  else
  {
    sub_44CCC0((_DWORD *)dword_790710);
    sub_5D5DE0(&v12);
  }
  if ( !(_DWORD)v12 )
    LODWORD(v12) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_79070C + 688))(dword_79070C);
  if ( (int)v12 <= 0
    || (v11 = (double)(int)v12 * 3.0, v5 = sub_44CCC0((_DWORD *)dword_790710), (double)sub_5D5A50(v5) >= v11) )
  {
    sub_5CBA10(a2, a3, a4);
    result = a3;
    if ( *((_DWORD *)this + 8 * *(_DWORD *)(dword_790710 + 196) + 2 * a3 + 18) )
    {
      for ( i = 0; i < 3; ++i )
      {
        v8 = pairNode::raw_length(this);
        if ( v13 != v8 )
          sub_5CBA10(a2, a3, a4);
        ++v13;
      }
      *(_BYTE *)(sub_44CCC0((_DWORD *)dword_790710) + 1184) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79070C + 4) + 8))(
               *(_DWORD *)(dword_79070C + 4),
               1,
               0);
    }
  }
  else
  {
    v9 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
    v6 = (const CHAR *)sub_630F40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET");
    return sub_62FF10(v6, v9, 0);
  }
  return result;
}


//======================================================================
// sub_44E340
// entry 0044e340  size 735  status ok
//======================================================================

int __thiscall sub_44E340(pairNode *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // eax
  __int64 v7; // [esp+0h] [ebp-7Ch]
  __int64 v8; // [esp+0h] [ebp-7Ch]
  _DWORD *v9; // [esp+8h] [ebp-74h]
  int v10; // [esp+Ch] [ebp-70h]
  char v12[8]; // [esp+1Ch] [ebp-60h] BYREF
  __int64 v13; // [esp+24h] [ebp-58h]
  __int64 v14; // [esp+2Ch] [ebp-50h]
  __int64 v15; // [esp+34h] [ebp-48h]
  int v16; // [esp+3Ch] [ebp-40h]
  int v17; // [esp+40h] [ebp-3Ch]
  int v18; // [esp+44h] [ebp-38h]
  int v19; // [esp+48h] [ebp-34h]
  int v20; // [esp+4Ch] [ebp-30h]
  int v21; // [esp+50h] [ebp-2Ch]
  int v22; // [esp+54h] [ebp-28h]
  int v23; // [esp+58h] [ebp-24h]
  int v24; // [esp+5Ch] [ebp-20h]
  int v25; // [esp+60h] [ebp-1Ch]
  __int64 v26; // [esp+64h] [ebp-18h]
  __int64 v27; // [esp+6Ch] [ebp-10h]
  __int64 v28; // [esp+74h] [ebp-8h]

  v16 = 0;
  v17 = 1;
  v18 = 2;
  v19 = 3;
  v20 = 5;
  v21 = 8;
  v22 = 11;
  v23 = 50;
  v24 = 200;
  v25 = 1000;
  v3 = *((_DWORD *)this + 8 * a2 + 19);
  LODWORD(v28) = *((_DWORD *)this + 8 * a2 + 18);
  HIDWORD(v28) = v3;
  v15 = sub_64C8A0(0, 0);
  v26 = v15;
  v14 = sub_64C8A0(0, 0);
  v27 = v14;
  v4 = sub_5DCB00(a2);
  result = sub_5D5A50(v4);
  if ( result < 1000000000 )
  {
    if ( a3 > 1 )
    {
      if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
      {
        if ( *(int *)(sub_5DCB00(a2) + 1192) < -3 )
          *(_BYTE *)(a2 + dword_790710 + 236) = 1;
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      }
      v6 = sub_5DCB00(a2);
      sub_5D7540(v6);
      v26 = v28;
      sub_64C560((double)*((int *)&v15 + a3 + 1));
      if ( (int)v26 > 1000000000 )
        LODWORD(v26) = 1000000000;
      v27 = *(_QWORD *)sub_64C5C0(v12, *((_DWORD *)this + 8 * a2 + 18), *((_DWORD *)this + 8 * a2 + 19));
      if ( (int)v27 >= 1000000000 )
        v27 = sub_64C8A0(1000000000, 0);
      v7 = v27;
      sub_5DCB00(a2);
      sub_5D5CF0(v7, HIDWORD(v7));
      v8 = v26;
      sub_5DCB00(a2);
      sub_5D5FB0(v8, HIDWORD(v8));
      return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
               this,
               v27,
               HIDWORD(v27),
               a2,
               0);
    }
    else
    {
      v10 = *(_DWORD *)(dword_790718 + 4 * pairNode::raw_length(this) + 20);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 196))(v10);
      if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      v9 = (_DWORD *)(sub_5DCB00(a2) + 1192);
      --*v9;
      LODWORD(v26) = -(int)v28;
      HIDWORD(v26) = -HIDWORD(v28);
      sub_5DCB00(a2);
      sub_5D5FB0(-(int)v28, -HIDWORD(v28));
      v13 = sub_64C8A0(0, 0);
      return (*(int (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
               this,
               v13,
               HIDWORD(v13),
               a2,
               0);
    }
  }
  return result;
}


//======================================================================
// sub_44E620
// entry 0044e620  size 46  status ok
//======================================================================

void __thiscall sub_44E620(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_790718 )
  {
    v3 = pairNode::raw_length(this);
    sub_447840((_DWORD **)dword_790718, a2, v3);
  }
}


//======================================================================
// sub_44E650
// entry 0044e650  size 177  status ok
//======================================================================

bool __thiscall sub_44E650(pairNode *this)
{
  char v2; // [esp+0h] [ebp-24h]
  bool v3; // [esp+4h] [ebp-20h]
  CImageDisplay *v4; // [esp+14h] [ebp-10h]
  int v5; // [esp+20h] [ebp-4h]

  v5 = *(_DWORD *)(dword_790710 + 196);
  v2 = 0;
  if ( pairNode::raw_length(this) / 3 == v5 )
  {
    v4 = (CImageDisplay *)sub_44CCC0((_DWORD *)dword_790710);
    v3 = CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3;
    if ( v3 && !*(_BYTE *)(sub_44CCC0((_DWORD *)dword_790710) + 1184) )
      return 1;
  }
  return v2;
}


//======================================================================
// sub_44E770
// entry 0044e770  size 82  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_44E770(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &PaiGowAI::`vftable';
  for ( i = 0; i < 7; ++i )
    *((_WORD *)this + i + 2) = 0;
  *((_DWORD *)this + 5) = -1;
  return this;
}


//======================================================================
// sub_44E7F0
// entry 0044e7f0  size 378  status ok
//======================================================================

int __stdcall sub_44E7F0(int a1)
{
  int v1; // eax
  double v3; // [esp+Ch] [ebp-38h]
  double v4; // [esp+1Ch] [ebp-28h]
  int v5; // [esp+2Ch] [ebp-18h]
  int v6; // [esp+30h] [ebp-14h]
  int v7; // [esp+34h] [ebp-10h]
  int v8; // [esp+38h] [ebp-Ch]
  int v9; // [esp+3Ch] [ebp-8h]
  int v10; // [esp+40h] [ebp-4h]

  v8 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
  v10 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 692))(dword_790734);
  v7 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  v1 = sub_5DCB00(a1);
  v9 = sub_5D5A50(v1);
  v6 = sub_44E970(a1);
  if ( v9 < v8 )
    sub_5E9F20((char)"bank >= minBet", "..\\Casino\\paigowai.cpp", 34);
  if ( v7 < -4 )
    v7 = -1 - sub_62FBF0(5);
  if ( (unsigned __int8)sub_5DA7B0(dword_790734) )
  {
    v5 = sub_44EDB0(a1);
  }
  else
  {
    v4 = (double)(v8 * (sub_62FBF0(5) + 1));
    v3 = (double)(v6 / (sub_62FBF0(5) + 1)) * v4;
    v5 = (int)((double)(v6 / (sub_62FBF0(5) + 1)) * (double)(v8 * v7) + v3);
  }
  if ( v5 > v10 )
    v5 = v10;
  if ( v5 > v9 )
    v5 = v9;
  if ( v5 < v8 )
    return v8;
  return v5;
}


//======================================================================
// sub_44E970
// entry 0044e970  size 377  status ok
//======================================================================

int __stdcall sub_44E970(int a1)
{
  int v2; // [esp+8h] [ebp-80h]
  int v3; // [esp+Ch] [ebp-7Ch]
  _DWORD v4[10]; // [esp+10h] [ebp-78h]
  _DWORD v5[10]; // [esp+38h] [ebp-50h]
  _DWORD v6[10]; // [esp+60h] [ebp-28h]

  v6[0] = 8;
  v6[1] = 10;
  v6[2] = 2;
  v6[3] = 1;
  v6[4] = 5;
  v6[5] = 5;
  v6[6] = 8;
  v6[7] = 4;
  v6[8] = 6;
  v6[9] = 10;
  v4[0] = 4;
  v4[1] = 10;
  v4[2] = 8;
  v4[3] = 1;
  v4[4] = 5;
  v4[5] = 10;
  v4[6] = 10;
  v4[7] = 6;
  v4[8] = 10;
  v4[9] = 10;
  v5[0] = 8;
  v5[1] = 10;
  v5[2] = 5;
  v5[3] = 5;
  v5[4] = 5;
  v5[5] = 2;
  v5[6] = 8;
  v5[7] = 4;
  v5[8] = 4;
  v5[9] = 10;
  v2 = sub_5DCB00(a1);
  v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 368))(
         dword_162EE84,
         *(_DWORD *)(v2 + 8));
  if ( !(unsigned __int8)sub_5DA7B0(dword_790734) )
    return v6[v3];
  if ( (unsigned __int8)sub_44ECA0(a1) )
    return v4[v3];
  if ( (unsigned __int8)sub_44ED20(a1) )
    return v5[v3];
  else
    return v6[v3];
}


//======================================================================
// sub_44EAF0
// entry 0044eaf0  size 202  status ok
//======================================================================

bool __stdcall sub_44EAF0(int a1)
{
  _BYTE v3[8]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE v4[8]; // [esp+14h] [ebp-Ch] BYREF

  sub_452FD0(*(_WORD *)(dword_790738 + 2 * a1 + 162), *(_WORD *)(dword_790738 + 2 * a1 + 172), v3);
  sub_4530B0(a1, *(_WORD *)(dword_790738 + 2 * a1 + 162), *(_WORD *)(dword_790738 + 2 * a1 + 172), v4);
  return v3[0] == 2 && v4[0] >= 3;
}


//======================================================================
// sub_44EBC0
// entry 0044ebc0  size 220  status ok
//======================================================================

bool __stdcall sub_44EBC0(int a1)
{
  bool v3; // [esp+Ah] [ebp-16h]
  char v4; // [esp+Bh] [ebp-15h]
  _BYTE v5[8]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE v6[8]; // [esp+14h] [ebp-Ch] BYREF

  v3 = 0;
  v4 = 0;
  sub_452FD0(*(_WORD *)(dword_790738 + 2 * a1 + 162), *(_WORD *)(dword_790738 + 2 * a1 + 172), v5);
  sub_4530B0(a1, *(_WORD *)(dword_790738 + 2 * a1 + 162), *(_WORD *)(dword_790738 + 2 * a1 + 172), v6);
  if ( v5[0] == 1 )
    v3 = v5[3] <= 12;
  if ( v6[0] <= 2 && v6[1] < 10 )
    v4 = 1;
  return v3 && v4;
}


//======================================================================
// sub_44ECA0
// entry 0044eca0  size 120  status ok
//======================================================================

bool __stdcall sub_44ECA0(int a1)
{
  int v1; // eax
  double v2; // st7
  bool result; // al
  _BYTE v4[8]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v5[8]; // [esp+10h] [ebp-18h] BYREF
  double v6; // [esp+18h] [ebp-10h]
  double v7; // [esp+20h] [ebp-8h]

  v6 = 0.0;
  v7 = (double)*(int *)sub_5DAA20(v5);
  v1 = sub_5DCB00(a1);
  v2 = (double)sub_5D5A50(v1);
  result = 0;
  if ( v2 >= v7 )
  {
    v6 = (double)*(int *)sub_5DAAE0(v4);
    if ( v6 / v7 >= 0.25 )
      return 1;
  }
  return result;
}


//======================================================================
// sub_44ED20
// entry 0044ed20  size 131  status ok
//======================================================================

bool __stdcall sub_44ED20(int a1)
{
  int v1; // eax
  double v2; // st7
  int v3; // eax
  bool result; // al
  int v5; // [esp+0h] [ebp-24h]
  _BYTE v6[8]; // [esp+Ch] [ebp-18h] BYREF
  double v7; // [esp+14h] [ebp-10h]
  double v8; // [esp+1Ch] [ebp-8h]

  v7 = 0.0;
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
// sub_44EDB0
// entry 0044edb0  size 538  status ok
//======================================================================

int __stdcall sub_44EDB0(int a1)
{
  int v1; // eax
  int v2; // esi
  int v4; // esi
  int v5; // esi
  double v6; // [esp+8h] [ebp-58h]
  double v7; // [esp+10h] [ebp-50h]
  double v8; // [esp+20h] [ebp-40h]
  char v9[8]; // [esp+30h] [ebp-30h] BYREF
  int v10; // [esp+38h] [ebp-28h]
  int v11; // [esp+3Ch] [ebp-24h]
  int v12; // [esp+40h] [ebp-20h]
  int v13; // [esp+44h] [ebp-1Ch]
  int v14; // [esp+48h] [ebp-18h]
  int v15; // [esp+4Ch] [ebp-14h]
  int v16; // [esp+50h] [ebp-10h]
  int v17; // [esp+54h] [ebp-Ch]
  int v18; // [esp+58h] [ebp-8h]
  int v19; // [esp+5Ch] [ebp-4h]

  v1 = sub_5DCB00(a1);
  v16 = sub_5D5A50(v1);
  v13 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 688))(dword_790734);
  v18 = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *))(*(_DWORD *)dword_790734 + 692))(dword_790734);
  v19 = sub_5DA8A0(dword_790734);
  v12 = sub_5DAC90(dword_790734);
  v15 = sub_5DA8C0(dword_790734);
  v14 = *(_DWORD *)sub_5DAA20(v9);
  v11 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  v10 = 0;
  v17 = 0;
  if ( v16 < v18 )
    v17 = v16;
  else
    v17 = v18;
  if ( v19 - v15 < 4 )
  {
    if ( v19 == v15 )
    {
      if ( v16 < v14 && v14 - v16 <= v17 )
        v10 = v13 + v14 - v16;
    }
    else if ( v16 < v14 )
    {
      if ( v14 - v16 > v17 )
      {
        if ( sub_44ED20(a1) )
          v10 = v17 / (sub_62FBF0(3) + 1);
      }
      else
      {
        v2 = v14 - v16;
        v10 = v2 / (sub_62FBF0(5) + 1);
      }
    }
    while ( v10 % 5 )
      ++v10;
    if ( v10 )
      return v10;
  }
  v8 = (double)(v13 * (sub_62FBF0(5) + 1));
  v4 = sub_44E970(a1);
  v7 = (double)(v4 / (sub_62FBF0(5) + 1)) * v8;
  v6 = (double)(v13 * v11);
  v5 = sub_44E970(a1);
  return (int)((double)(v5 / (sub_62FBF0(5) + 1)) * v6 + v7);
}


//======================================================================
// sub_44EFD0
// entry 0044efd0  size 623  status ok
//======================================================================

int __thiscall sub_44EFD0(int this, int a2)
{
  int k; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]
  int m; // [esp+8h] [ebp-4h]

  *(_DWORD *)(this + 20) = a2;
  *(_DWORD *)(this + 684) = 0;
  *(_DWORD *)(this + 688) = -1;
  *(_WORD *)(this + 694) = 0;
  *(_WORD *)(this + 696) = 0;
  *(_WORD *)(this + 700) = 0;
  *(_WORD *)(this + 698) = 0;
  *(_DWORD *)(this + 720) = -1;
  *(_DWORD *)(this + 724) = 0;
  *(_DWORD *)(this + 756) = 0;
  *(_DWORD *)(this + 760) = -1;
  *(_DWORD *)(this + 764) = 0;
  *(_DWORD *)(this + 796) = 0;
  *(_DWORD *)(this + 800) = -1;
  *(_DWORD *)(this + 804) = 0;
  *(_DWORD *)(this + 836) = 0;
  *(_DWORD *)(this + 840) = -1;
  *(_DWORD *)(this + 844) = 0;
  for ( i = 0; i < 7; ++i )
  {
    *(_DWORD *)(this + 4 * i + 728) = 0;
    *(_DWORD *)(this + 4 * i + 768) = 0;
    *(_DWORD *)(this + 4 * i + 808) = 0;
  }
  for ( j = 0; j < 15; ++j )
  {
    *(_DWORD *)(this + 44 * j + 24) = 0;
    for ( k = 0; k < 5; ++k )
    {
      *(_DWORD *)(this + 44 * j + 24 + 4 * k + 4) = 0;
      *(_DWORD *)(this + 44 * j + 24 + 4 * k + 24) = -1;
    }
  }
  for ( m = 0; m < 7; ++m )
    *(_WORD *)(this + 2 * m + 4) = sub_4604D0(a2, m);
  *(_WORD *)(this + 694) = sub_642890(this + 4, 7, 4);
  *(_WORD *)(this + 696) = sub_642890(this + 4, 7, 1);
  *(_WORD *)(this + 700) = sub_642890(this + 4, 7, 2);
  *(_WORD *)(this + 698) = sub_642890(this + 4, 7, 3);
  sub_44F240(this);
  return sub_44F460(this);
}


//======================================================================
// sub_44F240
// entry 0044f240  size 529  status ok
//======================================================================

void __thiscall sub_44F240(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // [esp+4h] [ebp-14h]
  int k; // [esp+Ch] [ebp-Ch]
  int m; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    v2 = this + 11 * sub_44F680(*((_WORD *)this + i + 2)) + 6;
    ++*v2;
    if ( sub_44F680(*((_WORD *)this + i + 2)) == 14 )
    {
      ++*(this + 17);
      if ( sub_44F6C0(*((_WORD *)this + i + 2)) == -1 )
      {
        *(this + 22) = 1;
        *(this + 165) = 1;
      }
      else
      {
        *(this + sub_44F6C0(*((_WORD *)this + i + 2)) + 18) = 1;
        *(this + sub_44F6C0(*((_WORD *)this + i + 2)) + 161) = 1;
      }
    }
    else
    {
      v1 = (int)(this + 11 * sub_44F680(*((_WORD *)this + i + 2)) + 6);
      *(_DWORD *)(v1 + 4 * sub_44F6C0(*((_WORD *)this + i + 2)) + 4) = 1;
    }
  }
  for ( j = 1; j < 15; ++j )
  {
    if ( sub_44F700(j) )
    {
      for ( k = 0; k < 7; ++k )
      {
        if ( sub_44F680(*((_WORD *)this + k + 2)) == j || sub_44F680(*((_WORD *)this + k + 2)) == 14 && j == 1 )
        {
          for ( m = 0; m < 5; ++m )
          {
            if ( *(this + 11 * j + m + 12) == -1 )
            {
              *(this + 11 * j + m + 12) = k;
              break;
            }
          }
        }
      }
    }
  }
}


//======================================================================
// sub_44F460
// entry 0044f460  size 531  status ok
//======================================================================

int __thiscall sub_44F460(_BYTE *this)
{
  int result; // eax
  bool v2; // [esp+0h] [ebp-14h]
  bool v3; // [esp+4h] [ebp-10h]
  bool v4; // [esp+8h] [ebp-Ch]
  bool v5; // [esp+Ch] [ebp-8h]

  *(this + 702) = sub_44F750(14, 4);
  v5 = sub_44F700(14) && (!*(this + 702) || (int)sub_44F700(14) > 1);
  *(this + 703) = v5;
  *(this + 704) = sub_44F910(this);
  *(this + 705) = sub_44FA20(this);
  v4 = *(this + 704) || *(this + 705);
  *(this + 706) = v4;
  *(this + 707) = sub_44FB20(this);
  *(this + 708) = sub_44FE60(this);
  v3 = *(this + 707) || *(this + 708);
  *(this + 709) = v3;
  *(this + 710) = sub_4502F0(this);
  *(this + 711) = sub_450680(this);
  v2 = *(this + 710) || *(this + 711);
  *(this + 712) = v2;
  *(this + 713) = sub_450B60(4, 1) != 0;
  *(this + 714) = sub_450B60(3, 1) != 0;
  *(this + 715) = sub_450B60(3, 2) != 0;
  *(this + 716) = sub_450B60(2, 3) != 0;
  *(this + 717) = sub_450B60(2, 2) != 0;
  result = sub_450B60(2, 1);
  *(this + 718) = result != 0;
  return result;
}


//======================================================================
// sub_44F680
// entry 0044f680  size 51  status ok
//======================================================================

int __stdcall sub_44F680(__int16 a1)
{
  if ( sub_641280(a1) == 15 )
    return 14;
  else
    return sub_641280(a1);
}


//======================================================================
// sub_44F6C0
// entry 0044f6c0  size 52  status ok
//======================================================================

int __stdcall sub_44F6C0(__int16 a1)
{
  if ( sub_641290(a1) == 15 )
    return -1;
  else
    return sub_641290(a1) - 1;
}


//======================================================================
// sub_44F700
// entry 0044f700  size 74  status ok
//======================================================================

int __thiscall sub_44F700(_DWORD *this, int a2)
{
  if ( a2 <= 0 || a2 >= 15 )
    sub_5E9F20((char)"rank > 0 && rank < 15", "..\\Casino\\paigowai.cpp", 338);
  if ( a2 == 1 )
    a2 = 14;
  return *(this + 11 * a2 + 6);
}


//======================================================================
// sub_44F750
// entry 0044f750  size 141  status ok
//======================================================================

bool __thiscall sub_44F750(_DWORD *this, int a2, unsigned int a3)
{
  if ( a2 <= 0 || a2 >= 15 )
    sub_5E9F20((char)"rank > 0 && rank < 15", "..\\Casino\\paigowai.cpp", 347);
  if ( a3 > 4 )
    sub_5E9F20((char)"suit > -1 && suit < 5", "..\\Casino\\paigowai.cpp", 348);
  if ( a2 == 1 )
    a2 = 14;
  return sub_44F700(this, a2) && *(this + 11 * a2 + a3 + 7);
}


