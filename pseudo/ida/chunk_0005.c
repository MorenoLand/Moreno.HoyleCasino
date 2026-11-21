//======================================================================
// sub_433950
// entry 00433950  size 16  status ok
//======================================================================

char **sub_433950()
{
  return &off_7131FC;
}


//======================================================================
// sub_433980
// entry 00433980  size 94  status ok
//======================================================================

char __stdcall sub_433980(_DWORD *a1, int a2)
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
// sub_4339E0
// entry 004339e0  size 16  status ok
//======================================================================

int sub_4339E0()
{
  return 24;
}


//======================================================================
// sub_4339F0
// entry 004339f0  size 81  status ok
//======================================================================

char __stdcall sub_4339F0(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  a1[2] = 1;
  a1[3] = 1;
  a1[4] = 0;
  a1[5] = 1;
  a1[6] = 0;
  return 1;
}


//======================================================================
// sub_433A50
// entry 00433a50  size 144  status ok
//======================================================================

char __stdcall sub_433A50(_BYTE *a1)
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
  v2[5] = a1[5];
  v2[6] = a1[6];
  return 1;
}


//======================================================================
// sub_433AE0
// entry 00433ae0  size 73  status ok
//======================================================================

char __stdcall sub_433AE0(_DWORD *a1)
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
// sub_433B50
// entry 00433b50  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_433B50(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(4);
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
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)4 )
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
// sub_433C80
// entry 00433c80  size 446  status ok
//======================================================================

char __stdcall sub_433C80(int a1, int a2)
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

  v20 = sub_63AAE0(4);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)4 )
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
// sub_433E40
// entry 00433e40  size 60  status ok
//======================================================================

char __stdcall sub_433E40(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_433E80
// entry 00433e80  size 41  status ok
//======================================================================

char __stdcall sub_433E80(int a1)
{
  if ( a1 != 3202000 )
    return 0;
  sub_653BD0(4);
  return 1;
}


//======================================================================
// sub_433EB0
// entry 00433eb0  size 15  status ok
//======================================================================

char __stdcall sub_433EB0(int a1)
{
  return 0;
}


//======================================================================
// sub_433EC0
// entry 00433ec0  size 15  status ok
//======================================================================

char __stdcall sub_433EC0(int a1)
{
  return 0;
}


//======================================================================
// sub_433ED0
// entry 00433ed0  size 16  status ok
//======================================================================

void *sub_433ED0()
{
  return &unk_713200;
}


//======================================================================
// sub_433EE0
// entry 00433ee0  size 190  status ok
//======================================================================

void *__stdcall sub_433EE0(int a1)
{
  int v1; // eax

  if ( (dword_7906E4 & 1) == 0 )
  {
    dword_7906E4 |= 1u;
    dword_713224 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_713228 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3202001 )
    return &unk_713220;
  else
    return 0;
}


//======================================================================
// sub_433FA0
// entry 00433fa0  size 16  status ok
//======================================================================

void *sub_433FA0()
{
  return &unk_712AB0;
}


//======================================================================
// sub_433FB0
// entry 00433fb0  size 16  status ok
//======================================================================

void *sub_433FB0()
{
  return &unk_713100;
}


//======================================================================
// sub_433FC0
// entry 00433fc0  size 261  status ok
//======================================================================

char __stdcall sub_433FC0(int a1, int a2)
{
  if ( a2 == 3202000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(4, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 4, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3202000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 4, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_434100
// entry 00434100  size 73  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_434100(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CrapsState::`vftable';
  for ( i = 0; i < 76; ++i )
    *((_DWORD *)this + i + 1) = 0;
  return this;
}


//======================================================================
// sub_434150
// entry 00434150  size 163  status ok
//======================================================================

void __thiscall sub_434150(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &CrapsState::`vftable';
  for ( i = 0; i < 76; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_434200
// entry 00434200  size 62  status ok
//======================================================================

int __stdcall sub_434200(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_434240
// entry 00434240  size 24  status ok
//======================================================================

char sub_434240()
{
  return *(_BYTE *)(sub_434200(-1) + 3);
}


//======================================================================
// sub_434260
// entry 00434260  size 29  status ok
//======================================================================

int __stdcall sub_434260(char a1)
{
  int result; // eax

  result = sub_434200(-1);
  *(_BYTE *)(result + 3) = a1;
  return result;
}


//======================================================================
// sub_434280
// entry 00434280  size 24  status ok
//======================================================================

char sub_434280()
{
  return *(_BYTE *)(sub_434200(-1) + 5);
}


//======================================================================
// sub_4342A0
// entry 004342a0  size 47  status ok
//======================================================================

int __stdcall sub_4342A0(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_434200(-1) + 5) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_4342D0
// entry 004342d0  size 24  status ok
//======================================================================

char sub_4342D0()
{
  return *(_BYTE *)(sub_434200(-1) + 1);
}


//======================================================================
// sub_4342F0
// entry 004342f0  size 29  status ok
//======================================================================

int __stdcall sub_4342F0(char a1)
{
  int result; // eax

  result = sub_434200(-1);
  *(_BYTE *)(result + 1) = a1;
  return result;
}


//======================================================================
// sub_434310
// entry 00434310  size 90  status ok
//======================================================================

int sub_434310()
{
  _DWORD v1[5]; // [esp+4h] [ebp-14h]

  v1[0] = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 5;
  v1[4] = 10;
  if ( (unsigned __int8)sub_5DA830(dword_7906D0) )
    return 2;
  else
    return v1[*(char *)sub_434200(-1)];
}


//======================================================================
// sub_434370
// entry 00434370  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_434370(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_434200(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_434390
// entry 00434390  size 24  status ok
//======================================================================

char sub_434390()
{
  return *(_BYTE *)(sub_434200(-1) + 2);
}


//======================================================================
// sub_4343B0
// entry 004343b0  size 29  status ok
//======================================================================

int __stdcall sub_4343B0(char a1)
{
  int result; // eax

  result = sub_434200(-1);
  *(_BYTE *)(result + 2) = a1;
  return result;
}


//======================================================================
// sub_4343D0
// entry 004343d0  size 24  status ok
//======================================================================

char sub_4343D0()
{
  return *(_BYTE *)(sub_434200(-1) + 4);
}


//======================================================================
// sub_4343F0
// entry 004343f0  size 29  status ok
//======================================================================

int __stdcall sub_4343F0(char a1)
{
  int result; // eax

  result = sub_434200(-1);
  *(_BYTE *)(result + 4) = a1;
  return result;
}


//======================================================================
// sub_434410
// entry 00434410  size 46  status ok
//======================================================================

char sub_434410()
{
  if ( (unsigned __int8)sub_5DA830(dword_7906D0) )
    return 0;
  else
    return *(_BYTE *)(sub_434200(-1) + 6);
}


//======================================================================
// sub_434440
// entry 00434440  size 29  status ok
//======================================================================

int __stdcall sub_434440(char a1)
{
  int result; // eax

  result = sub_434200(-1);
  *(_BYTE *)(result + 6) = a1;
  return result;
}


//======================================================================
// sub_434460
// entry 00434460  size 446  status ok
//======================================================================

int __thiscall sub_434460(int this)
{
  char v1; // al
  int v3; // [esp+0h] [ebp-30h]
  int v4; // [esp+4h] [ebp-2Ch]
  int i; // [esp+1Ch] [ebp-14h]
  int k; // [esp+1Ch] [ebp-14h]
  int j; // [esp+20h] [ebp-10h]

  for ( i = 0; i < 76; ++i )
  {
    if ( operator new(0x114u) )
      v4 = sub_43BB00(v3, v4);
    else
      v4 = 0;
    *(_DWORD *)(this + 4 * i + 4) = v4;
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * i + 4), (struct CPaneDivider *)dword_7134B0[i]);
  }
  for ( j = 0; j < 4; ++j )
  {
    for ( k = 0; k < 76; ++k )
      *(_QWORD *)(this + 608 * j + 308 + 8 * k) = sub_64C8A0(0, 0);
  }
  *(_DWORD *)(this + 2788) = -1;
  *(_DWORD *)(this + 2792) = -1;
  v1 = sub_4343D0();
  sub_434C20(v1 != 0 ? -1 : 1);
  *(_DWORD *)(this + 2744) = 1;
  *(_DWORD *)(this + 2756) = 0;
  *(_DWORD *)(this + 2748) = 0;
  *(_BYTE *)(this + 2772) = 0;
  *(_BYTE *)(this + 2773) = 0;
  *(_DWORD *)(this + 2796) = 0;
  *(_DWORD *)(this + 2780) = 0;
  *(_BYTE *)(this + 2752) = 0;
  return sub_434620(this, v3);
}


//======================================================================
// sub_434620
// entry 00434620  size 195  status ok
//======================================================================

int __thiscall sub_434620(int this)
{
  int i; // [esp+10h] [ebp-4h]
  int j; // [esp+10h] [ebp-4h]

  sub_434BD0(-1, 0);
  *(_DWORD *)(this + 2784) = -1;
  for ( i = 0; i < 4; ++i )
  {
    *(_BYTE *)(sub_5DCB00(i) + 1186) = 0;
    *(_BYTE *)(sub_5DCB00(i) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(i) + 1185) = 0;
  }
  for ( j = 0; j < 76; ++j )
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 4) + 272) = -1;
  *(_BYTE *)(this + 2772) = 0;
  return this;
}


//======================================================================
// sub_4346F0
// entry 004346f0  size 249  status ok
//======================================================================

char __thiscall sub_4346F0(_DWORD *this)
{
  CImageDisplay *v2; // [esp+14h] [ebp-10h]
  int i; // [esp+20h] [ebp-4h]
  int j; // [esp+20h] [ebp-4h]

  if ( *(this + 689) )
    return 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_4349B0(i) )
      return 0;
  }
  for ( j = 0; j < 4; ++j )
  {
    v2 = (CImageDisplay *)sub_5DCB00(j);
    if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(j) + 1185)
      && !*(_BYTE *)(sub_5DCB00(j) + 1184) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_4347F0
// entry 004347f0  size 45  status ok
//======================================================================

int __thiscall sub_4347F0(_DWORD *this)
{
  if ( *(this + 694) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 694));
}


//======================================================================
// sub_434820
// entry 00434820  size 91  status ok
//======================================================================

int __thiscall sub_434820(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( *(this + i + 1) == a2 )
      return i;
  }
  sub_5E9F20((char)"false", "..\\Casino\\crapsstate.cpp", 317);
  return -1;
}


//======================================================================
// sub_434880
// entry 00434880  size 96  status ok
//======================================================================

int __thiscall sub_434880(pairNode **this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( pairNode::raw_length(*(this + i + 1)) == a2 )
      return i;
  }
  sub_5E9F20((char)"false", "..\\Casino\\crapsstate.cpp", 331);
  return -1;
}


//======================================================================
// sub_4348E0
// entry 004348e0  size 200  status ok
//======================================================================

BOOL __thiscall sub_4348E0(_DWORD *this, int a2)
{
  int v4; // [esp+Ch] [ebp-2Ch]
  int v5; // [esp+20h] [ebp-18h]
  int v6; // [esp+24h] [ebp-14h]
  int v7; // [esp+28h] [ebp-10h]
  int v8; // [esp+2Ch] [ebp-Ch]
  int i; // [esp+34h] [ebp-4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0);
  v8 = sub_64C8A0(0, 0);
  for ( i = 0; i < 76; ++i )
  {
    v4 = *(this + i + 1);
    v6 = *(_DWORD *)(v4 + 32 * a2 + 72);
    v7 = *(_DWORD *)(v4 + 32 * a2 + 76);
    if ( v6 || v7 )
    {
      v8 += v6;
      sub_64C510((double)v7);
    }
  }
  return v8 < v5;
}


//======================================================================
// sub_4349B0
// entry 004349b0  size 75  status ok
//======================================================================

char __stdcall sub_4349B0(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_434A00
// entry 00434a00  size 129  status ok
//======================================================================

char __thiscall sub_434A00(_DWORD *this, int a2)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( *(_DWORD *)(*(this + i + 1) + 32 * a2 + 72)
      && !*(_DWORD *)(*(_DWORD *)(dword_7906DC + 4 * i + 20) + 480 * a2 + 380) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_434A90
// entry 00434a90  size 83  status ok
//======================================================================

int __stdcall sub_434A90(int a1)
{
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_4369A0(i, a1) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_434AF0
// entry 00434af0  size 224  status ok
//======================================================================

bool __thiscall sub_434AF0(_DWORD *this)
{
  return !*(this + 689)
      && *(this + 692) + *(this + 691) > 3
      && *(this + 692) + *(this + 691) < 11
      && *(this + 692) + *(this + 691) != 7;
}


//======================================================================
// sub_434BD0
// entry 00434bd0  size 77  status ok
//======================================================================

int __thiscall sub_434BD0(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 694) = a2;
  if ( *(this + 694) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_434C20
// entry 00434c20  size 25  status ok
//======================================================================

_DWORD *__thiscall sub_434C20(_DWORD *this, int a2)
{
  *(this + 685) = a2;
  return this;
}


//======================================================================
// sub_434C40
// entry 00434c40  size 843  status ok
//======================================================================

_DWORD *__thiscall sub_434C40(int this)
{
  _DWORD *result; // eax
  const char *v2; // eax
  const CHAR *v3; // eax
  int v4; // eax
  LONG *p_top; // [esp-4h] [ebp-ACh]
  CImageDisplay *v8; // [esp+14h] [ebp-94h]
  CImageDisplay *v9; // [esp+1Ch] [ebp-8Ch]
  CImageDisplay *v10; // [esp+28h] [ebp-80h]
  _DWORD v11[4]; // [esp+38h] [ebp-70h]
  char Buffer[80]; // [esp+48h] [ebp-60h] BYREF
  int i; // [esp+9Ch] [ebp-Ch]
  int v14; // [esp+A0h] [ebp-8h]
  int v15; // [esp+A4h] [ebp-4h]

  v11[0] = 0;
  v11[1] = 3;
  v11[2] = 2;
  v11[3] = 1;
  v14 = 0;
  v15 = 0;
  result = (_DWORD *)this;
  if ( !*(_BYTE *)(this + 2752) )
  {
    *(_DWORD *)(this + 2748) = 0;
    if ( sub_4343D0() )
    {
      result = sub_434C20((_DWORD *)this, -1);
      *(_BYTE *)(this + 2752) = 1;
    }
    else
    {
      for ( i = 0; i < 4; ++i )
      {
        if ( v11[i] == *(_DWORD *)(this + 2744) )
        {
          v14 = i + 1;
          if ( i + 1 > 3 )
            v14 = 0;
        }
      }
      for ( i = 0; i < 4; ++i )
      {
        v10 = (CImageDisplay *)sub_5DCB00(v11[v14]);
        if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left )
        {
          ++v15;
          v9 = (CImageDisplay *)sub_5DCB00(v11[v14]);
          if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
          {
            if ( !*((_BYTE *)dword_162EE84 + 37) )
            {
              v8 = (CImageDisplay *)sub_5DCB00(v11[v14]);
              p_top = &CImageDisplay::GetDisplayFormat(v8)->rcSource.top;
              v2 = (const char *)sub_630F40("SID_CRAPS_ROLLDICE_FORMAT");
              sprintf(Buffer, v2, p_top);
              v3 = (const CHAR *)sub_630F40("SID_CRAPS_PICKINGSHOOTER");
              if ( sub_62FF10(Buffer, v3, 4u) == 6 )
              {
                sub_434C20((_DWORD *)this, v11[v14]);
                *(_DWORD *)(this + 2744) = v11[v14];
                *(_BYTE *)(this + 2752) = 1;
                return (_DWORD *)this;
              }
            }
          }
          else if ( (unsigned __int8)sub_435040(v11[v14]) )
          {
            sub_434C20((_DWORD *)this, v11[v14]);
            result = (_DWORD *)v11[v14];
            *(_DWORD *)(this + 2744) = result;
            *(_BYTE *)(this + 2752) = 1;
            return result;
          }
        }
        v4 = sub_636610(dword_162EE84);
        if ( v15 == v4 )
        {
          result = sub_434C20((_DWORD *)this, -1);
          *(_BYTE *)(this + 2752) = 1;
          return result;
        }
        if ( ++v14 > 3 )
          v14 = 0;
      }
      return sub_434C20((_DWORD *)this, -1);
    }
  }
  return result;
}


//======================================================================
// sub_434F90
// entry 00434f90  size 173  status ok
//======================================================================

int sub_434F90()
{
  int v0; // eax
  int v1; // esi
  CImageDisplay *v3; // [esp+8h] [ebp-10h]
  int v4; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
    {
      if ( sub_4349B0(i)
        || (v0 = sub_5DCB00(i),
            v1 = sub_5D5A50(v0),
            v1 >= (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0)) )
      {
        ++v4;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_435040
// entry 00435040  size 354  status ok
//======================================================================

bool __stdcall sub_435040(int a1)
{
  CImageDisplay *v4; // [esp+1Ch] [ebp-Ch]

  v4 = (CImageDisplay *)sub_5DCB00(a1);
  if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
  {
    return !(unsigned __int8)sub_4369A0(a1, 2)
        && !(unsigned __int8)sub_4369A0(a1, 5)
        && !(unsigned __int8)sub_4369A0(a1, 55)
        && !(unsigned __int8)sub_4369A0(a1, 56)
        && !(unsigned __int8)sub_4369A0(a1, 57)
        && !(unsigned __int8)sub_4369A0(a1, 58)
        && !(unsigned __int8)sub_4369A0(a1, 59)
        && !(unsigned __int8)sub_4369A0(a1, 60);
  }
  return *(_DWORD *)(sub_5DCB00(a1) + 8) != 22 && *(_DWORD *)(sub_5DCB00(a1) + 8) != 21;
}


//======================================================================
// sub_4351B0
// entry 004351b0  size 212  status ok
//======================================================================

int sub_4351B0()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  _DWORD v2[4]; // [esp+1Ch] [ebp-14h]
  int i; // [esp+2Ch] [ebp-4h]

  v2[0] = 0;
  v2[1] = 3;
  v2[2] = 2;
  v2[3] = 1;
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
// sub_435290
// entry 00435290  size 106  status ok
//======================================================================

char __thiscall sub_435290(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_434820(this, a2);
  if ( !(unsigned __int8)sub_435C60(v2) )
    return sub_4353E0(a2);
  return !(unsigned __int8)sub_5CB920(a2) || sub_5CB820(*(this + 694));
}


//======================================================================
// sub_435300
// entry 00435300  size 216  status ok
//======================================================================

bool __thiscall sub_435300(_DWORD *this, pairNode *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-4h]

  v7 = *(this + 694);
  if ( v7 == -1 )
    return 0;
  if ( pairNode::raw_length(a2) == 2 && !(unsigned __int8)sub_4369A0(v7, 3) )
    return 1;
  v3 = pairNode::raw_length(a2);
  if ( (unsigned __int8)sub_438840(v3) )
  {
    v4 = pairNode::raw_length(a2);
    if ( !(unsigned __int8)sub_4369A0(v7, v4 + 6) )
      return 1;
  }
  v5 = pairNode::raw_length(a2);
  if ( (unsigned __int8)sub_4388A0(v5) && (unsigned __int8)sub_4369A0(v7, 60) )
    return 1;
  v6 = pairNode::raw_length(a2);
  return (unsigned __int8)sub_438870(v6) != 0;
}


//======================================================================
// sub_4353E0
// entry 004353e0  size 2023  status ok
//======================================================================

bool __thiscall sub_4353E0(_DWORD *this, pairNode *a2)
{
  bool result; // al
  bool v3; // [esp+0h] [ebp-E4h]
  bool v4; // [esp+4h] [ebp-E0h]
  bool v5; // [esp+8h] [ebp-DCh]
  bool v6; // [esp+Ch] [ebp-D8h]
  bool v7; // [esp+10h] [ebp-D4h]
  bool v8; // [esp+14h] [ebp-D0h]
  bool v9; // [esp+18h] [ebp-CCh]
  bool v10; // [esp+1Ch] [ebp-C8h]
  bool v11; // [esp+20h] [ebp-C4h]
  bool v12; // [esp+24h] [ebp-C0h]
  bool v13; // [esp+28h] [ebp-BCh]
  bool v14; // [esp+2Ch] [ebp-B8h]
  bool v15; // [esp+30h] [ebp-B4h]
  bool v16; // [esp+34h] [ebp-B0h]
  bool v17; // [esp+38h] [ebp-ACh]
  bool v18; // [esp+3Ch] [ebp-A8h]
  int v20; // [esp+D8h] [ebp-Ch]

  sub_64C8A0(0, 0);
  v20 = pairNode::raw_length(a2);
  switch ( v20 )
  {
    case 0:
      v18 = !*(this + 689) || !*((_DWORD *)a2 + 8 * *(this + 694) + 18);
      result = v18;
      break;
    case 1:
      v17 = *(this + 689) && (unsigned __int8)sub_4369A0(*(this + 694), 0);
      result = v17;
      break;
    case 2:
      result = *(this + 689) == 0;
      break;
    case 3:
      v16 = *(this + 689) && (unsigned __int8)sub_4369A0(*(this + 694), 2);
      result = v16;
      break;
    case 4:
    case 5:
      result = *(this + 689) != 0;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 61:
      result = 1;
      break;
    case 25:
      v14 = (unsigned __int8)sub_4369A0(*(this + 694), 19) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v14;
      break;
    case 26:
      v13 = (unsigned __int8)sub_4369A0(*(this + 694), 20) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v13;
      break;
    case 27:
      v12 = (unsigned __int8)sub_4369A0(*(this + 694), 21) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v12;
      break;
    case 28:
      v11 = (unsigned __int8)sub_4369A0(*(this + 694), 22) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v11;
      break;
    case 29:
      v10 = (unsigned __int8)sub_4369A0(*(this + 694), 23) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v10;
      break;
    case 30:
      v9 = (unsigned __int8)sub_4369A0(*(this + 694), 24) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v9;
      break;
    case 37:
      v8 = (unsigned __int8)sub_4369A0(*(this + 694), 31) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v8;
      break;
    case 38:
      v7 = (unsigned __int8)sub_4369A0(*(this + 694), 32) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v7;
      break;
    case 39:
      v6 = (unsigned __int8)sub_4369A0(*(this + 694), 33) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v6;
      break;
    case 40:
      v5 = (unsigned __int8)sub_4369A0(*(this + 694), 34) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v5;
      break;
    case 41:
      v4 = (unsigned __int8)sub_4369A0(*(this + 694), 35) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v4;
      break;
    case 42:
      v3 = (unsigned __int8)sub_4369A0(*(this + 694), 36) || (unsigned __int8)sub_4369A0(*(this + 694), v20);
      result = v3;
      break;
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
      v15 = sub_434410() || *(this + 689);
      result = v15;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_435C60
// entry 00435c60  size 58  status ok
//======================================================================

bool __stdcall sub_435C60(int a1)
{
  return a1 > 14 && a1 < 22 || a1 > 24 && a1 < 32;
}


//======================================================================
// sub_435CA0
// entry 00435ca0  size 76  status ok
//======================================================================

bool __stdcall sub_435CA0(int a1)
{
  return a1 == 1 || a1 == 25 || a1 == 26 || a1 == 27 || a1 == 28 || a1 == 29 || a1 == 30;
}


//======================================================================
// sub_435CF0
// entry 00435cf0  size 76  status ok
//======================================================================

bool __stdcall sub_435CF0(int a1)
{
  return a1 == 3 || a1 == 37 || a1 == 38 || a1 == 39 || a1 == 40 || a1 == 41 || a1 == 42;
}


//======================================================================
// sub_435D40
// entry 00435d40  size 160  status ok
//======================================================================

bool __stdcall sub_435D40(int a1)
{
  return (unsigned __int8)sub_4369A0(a1, 19)
      || (unsigned __int8)sub_4369A0(a1, 20)
      || (unsigned __int8)sub_4369A0(a1, 21)
      || (unsigned __int8)sub_4369A0(a1, 22)
      || (unsigned __int8)sub_4369A0(a1, 23)
      || (unsigned __int8)sub_4369A0(a1, 24);
}


//======================================================================
// sub_435DE0
// entry 00435de0  size 160  status ok
//======================================================================

bool __stdcall sub_435DE0(int a1)
{
  return (unsigned __int8)sub_4369A0(a1, 31)
      || (unsigned __int8)sub_4369A0(a1, 32)
      || (unsigned __int8)sub_4369A0(a1, 33)
      || (unsigned __int8)sub_4369A0(a1, 34)
      || (unsigned __int8)sub_4369A0(a1, 35)
      || (unsigned __int8)sub_4369A0(a1, 36);
}


//======================================================================
// sub_435E80
// entry 00435e80  size 96  status ok
//======================================================================

char __stdcall sub_435E80(int a1, int a2, int a3, char a4, char a5)
{
  if ( !(unsigned __int8)sub_4369A0(a1, a2) || (unsigned __int8)sub_4369A0(a1, a3) && !a5 )
    return 1;
  if ( a4 )
    sub_42A2B0((_DWORD *)dword_7906DC, a2);
  return 0;
}


//======================================================================
// sub_435EE0
// entry 00435ee0  size 228  status ok
//======================================================================

bool __stdcall sub_435EE0(int a1, char a2, char a3)
{
  return !sub_435E80(a1, 19, 25, a2, a3)
      || !sub_435E80(a1, 20, 26, a2, a3)
      || !sub_435E80(a1, 21, 27, a2, a3)
      || !sub_435E80(a1, 22, 28, a2, a3)
      || !sub_435E80(a1, 23, 29, a2, a3)
      || !sub_435E80(a1, 24, 30, a2, a3);
}


//======================================================================
// sub_435FD0
// entry 00435fd0  size 228  status ok
//======================================================================

bool __stdcall sub_435FD0(int a1, char a2, char a3)
{
  return !sub_435E80(a1, 31, 37, a2, a3)
      || !sub_435E80(a1, 32, 38, a2, a3)
      || !sub_435E80(a1, 33, 39, a2, a3)
      || !sub_435E80(a1, 34, 40, a2, a3)
      || !sub_435E80(a1, 35, 41, a2, a3)
      || !sub_435E80(a1, 36, 42, a2, a3);
}


//======================================================================
// sub_4360C0
// entry 004360c0  size 279  status ok
//======================================================================

char __thiscall sub_4360C0(_DWORD *this, int a2)
{
  if ( *(this + 689) )
  {
    if ( !(unsigned __int8)sub_4369A0(a2, 4)
      && !sub_435D40(a2)
      && !(unsigned __int8)sub_4369A0(a2, 5)
      && !sub_435DE0(a2) )
    {
      return 1;
    }
    if ( !(unsigned __int8)sub_4369A0(a2, 1) && !(unsigned __int8)sub_4369A0(a2, 3) )
      return 1;
    if ( sub_435EE0(a2, 0, 0) || sub_435FD0(a2, 0, 0) )
      return 1;
  }
  else if ( !(unsigned __int8)sub_4369A0(a2, 0) && !(unsigned __int8)sub_4369A0(a2, 2) )
  {
    return 1;
  }
  return 0;
}


//======================================================================
// sub_4361E0
// entry 004361e0  size 79  status ok
//======================================================================

int __thiscall sub_4361E0(_DWORD **this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + i + 1) + 188))(*(this + i + 1), a2, 0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_436230
// entry 00436230  size 107  status ok
//======================================================================

char __thiscall sub_436230(_DWORD *this, int a2)
{
  int i; // [esp+8h] [ebp-4h]

  if ( *(this + 689) )
    return 0;
  for ( i = 0; i < 76; ++i )
  {
    if ( (int)*(this + 152 * a2 + 2 * i + 77) > 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_4362A0
// entry 004362a0  size 434  status ok
//======================================================================

void __thiscall sub_4362A0(_DWORD *this, int a2)
{
  bool v3; // [esp+4h] [ebp-28h]
  CImageDisplay *v5; // [esp+18h] [ebp-14h]
  int i; // [esp+28h] [ebp-4h]

  if ( a2 != -1 && sub_436230(this, a2) && sub_5DCB00(a2) )
  {
    v5 = (CImageDisplay *)sub_5DCB00(a2);
    v3 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
    if ( v3 && !*(_BYTE *)(sub_5DCB00(a2) + 1184) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7906D0 + 656))(dword_7906D0, a2);
      for ( i = 0; i < 76; ++i )
      {
        if ( (int)*(this + 152 * a2 + 2 * i + 77) > 0 )
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)*(this + i + 1) + 196))(
            *(this + i + 1),
            this + 152 * a2 + 2 * i + 77,
            0,
            1);
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      sub_4299B0((_DWORD **)dword_7906DC);
      sub_5DB890(dword_7906D0);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7906D0 + 4) + 8))(
        *(_DWORD *)(dword_7906D0 + 4),
        1,
        0);
    }
  }
}


//======================================================================
// sub_436460
// entry 00436460  size 271  status ok
//======================================================================

int __thiscall sub_436460(_DWORD *this)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v5; // [esp+8h] [ebp-20h]
  int v6; // [esp+Ch] [ebp-1Ch]
  __int64 v7; // [esp+10h] [ebp-18h]
  int j; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v6 = *(this + 689);
  result = v6 != 0;
  if ( !v6 )
  {
    for ( i = 0; i < 4; ++i )
    {
      for ( j = 0; j < 76; ++j )
      {
        if ( (unsigned __int8)sub_4369A0(i, j) )
        {
          v5 = *(this + j + 1);
          result = *(_DWORD *)(v5 + 32 * i + 72);
          v2 = *(_DWORD *)(v5 + 32 * i + 76);
          v3 = (int)(this + 152 * i + 77);
          *(_DWORD *)(v3 + 8 * j) = result;
          *(_DWORD *)(v3 + 8 * j + 4) = v2;
        }
        else
        {
          v7 = sub_64C8A0(0, 0);
          result = j;
          *(_QWORD *)(this + 152 * i + 2 * j + 77) = v7;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_436570
// entry 00436570  size 937  status ok
//======================================================================

int __thiscall sub_436570(_DWORD *this, int a2, int a3)
{
  _BYTE v5[8]; // [esp+18h] [ebp-10h] BYREF
  int v6; // [esp+20h] [ebp-8h]
  int v7; // [esp+24h] [ebp-4h]

  v7 = *(_DWORD *)sub_43BD30(v5, a2);
  v6 = v7 * sub_434310();
  switch ( pairNode::raw_length((pairNode *)*(this + a3 + 1)) )
  {
    case 1:
      if ( sub_434310() <= 2 )
      {
        switch ( *(this + 689) )
        {
          case 5:
          case 9:
            if ( sub_434310() == 1 )
            {
              if ( v6 == 5 )
              {
                v6 = 6;
              }
              else
              {
                while ( v6 % 10 )
                  ++v6;
              }
            }
            break;
          case 6:
          case 8:
            if ( sub_434310() == 1 )
            {
              if ( v7 % 3 )
              {
                while ( v6 % 5 )
                  ++v6;
              }
              else
              {
                v6 = 5 * (v7 / 3);
              }
            }
            if ( sub_434310() == 2 )
            {
              if ( v7 % 2 )
              {
                while ( v6 % 5 )
                  ++v6;
              }
              else
              {
                v6 = v7 / 2 + 2 * v7;
              }
            }
            break;
          default:
            return v6;
        }
      }
      break;
    case 3:
      switch ( *(this + 689) )
      {
        case 4:
        case 0xA:
          v6 *= 2;
          break;
        case 5:
        case 9:
          if ( v6 % 2 && sub_434310() <= 2 )
            ++v6;
          v6 = 3 * v6 / 2;
          break;
        case 6:
        case 8:
          if ( v6 % 5 && sub_434310() <= 2 )
            v6 += 5 - v6 % 5;
          v6 = 6 * v6 / 5;
          break;
        default:
          return v6;
      }
      break;
    case 0x1A:
    case 0x1D:
      if ( sub_434310() == 1 )
      {
        if ( v6 == 5 )
        {
          v6 = 6;
        }
        else
        {
          while ( v6 % 10 )
            ++v6;
        }
      }
      break;
    case 0x1B:
    case 0x1C:
      if ( sub_434310() == 1 )
      {
        if ( v7 % 3 )
        {
          while ( v6 % 5 )
            ++v6;
        }
        else
        {
          v6 = 5 * (v7 / 3);
        }
      }
      if ( sub_434310() == 2 )
      {
        if ( v7 % 2 )
        {
          while ( v6 % 5 )
            ++v6;
        }
        else
        {
          v6 = v7 / 2 + 2 * v7;
        }
      }
      break;
    case 0x25:
    case 0x2A:
      v6 *= 2;
      break;
    case 0x26:
    case 0x29:
      if ( v6 % 2 && sub_434310() <= 2 )
        ++v6;
      v6 = 3 * v6 / 2;
      break;
    case 0x27:
    case 0x28:
      if ( v6 % 5 && sub_434310() <= 2 )
        v6 += 5 - v6 % 5;
      v6 = 6 * v6 / 5;
      break;
    default:
      return v6;
  }
  return v6;
}


//======================================================================
// sub_4369A0
// entry 004369a0  size 86  status ok
//======================================================================

char __thiscall sub_4369A0(pairNode **this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( pairNode::raw_length(*(this + i + 1)) == a3 )
      return sub_5CB7D0(a2, 0);
  }
  return 0;
}


//======================================================================
// sub_436A00
// entry 00436a00  size 70  status ok
//======================================================================

char __thiscall sub_436A00(pairNode **this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( sub_4369A0(this, i, a2) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_436A50
// entry 00436a50  size 55  status ok
//======================================================================

BOOL sub_436A50()
{
  int v1; // [esp+4h] [ebp-8h] BYREF
  _BYTE v2[4]; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)dword_7947E4 + 620))(dword_7947E4, v2, &v1);
  return v1 == 1000000000;
}


//======================================================================
// sub_436A90
// entry 00436a90  size 36  status ok
//======================================================================

BOOL __thiscall sub_436A90(unsigned __int8 *this)
{
  return *(this + 2772) == 0;
}


//======================================================================
// sub_436AC0
// entry 00436ac0  size 189  status ok
//======================================================================

int __thiscall sub_436AC0(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-4h]
  int v4; // [esp+Ch] [ebp-4h]

  *(this + 691) = sub_62FBF0(6) + 1;
  *(this + 692) = sub_62FBF0(6) + 1;
  v3 = sub_607960((int)"CrapsDie0", 0);
  if ( v3 )
    *(this + 691) = v3;
  result = sub_607960((int)"CrapsDie1", 0);
  v4 = result;
  if ( result )
  {
    *(this + 692) = v4;
    return (int)this;
  }
  return result;
}


//======================================================================
// sub_436B80
// entry 00436b80  size 256  status ok
//======================================================================

int __thiscall sub_436B80(int this)
{
  char v2; // [esp+Ch] [ebp-24h]
  _DWORD *v3; // [esp+10h] [ebp-20h]
  _DWORD *v5; // [esp+1Ch] [ebp-14h]

  sub_62FDE0("rolling dice\n", v2);
  sub_436AC0((_DWORD *)this);
  *(_BYTE *)(this + 2772) = 1;
  ++*(_DWORD *)(this + 2748);
  v5 = operator new(0x20u);
  if ( v5 )
  {
    sub_5FC0D0(0);
    *v5 = &CrapsRollingDiceScript::`vftable';
    v3 = v5;
  }
  else
  {
    v3 = 0;
  }
  sub_5FC420(v3);
  return (*(int (__cdecl **)(int))(*(_DWORD *)dword_162EE84 + 128))(101016);
}


//======================================================================
// sub_436C80
// entry 00436c80  size 192  status ok
//======================================================================

int sub_436C80()
{
  CImageDisplay *v1; // [esp+Ch] [ebp-1Ch]
  _DWORD v2[4]; // [esp+14h] [ebp-14h]
  int i; // [esp+24h] [ebp-4h]

  v2[0] = 3;
  v2[1] = 2;
  v2[2] = 1;
  v2[3] = 0;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v2[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && sub_4349B0(v2[i])
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1186) )
    {
      return v2[i];
    }
  }
  return -1;
}


//======================================================================
// sub_436D40
// entry 00436d40  size 1028  status ok
//======================================================================

bool __thiscall sub_436D40(int this)
{
  if ( *(_DWORD *)(this + 2756) || sub_434410() )
    return 0;
  if ( (sub_436A00((pairNode **)this, 25) || sub_436A00((pairNode **)this, 37))
    && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 4
     || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7) )
  {
    return 1;
  }
  if ( (sub_436A00((pairNode **)this, 26) || sub_436A00((pairNode **)this, 38))
    && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 5
     || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7) )
  {
    return 1;
  }
  if ( (sub_436A00((pairNode **)this, 27) || sub_436A00((pairNode **)this, 39))
    && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 6
     || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7) )
  {
    return 1;
  }
  if ( (sub_436A00((pairNode **)this, 28) || sub_436A00((pairNode **)this, 40))
    && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 8
     || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7) )
  {
    return 1;
  }
  if ( (sub_436A00((pairNode **)this, 29) || sub_436A00((pairNode **)this, 41))
    && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 9
     || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7) )
  {
    return 1;
  }
  return (sub_436A00((pairNode **)this, 30) || sub_436A00((pairNode **)this, 42))
      && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 10
       || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7);
}


//======================================================================
// sub_437150
// entry 00437150  size 171  status ok
//======================================================================

bool __thiscall sub_437150(_DWORD *this)
{
  if ( *(this + 689) )
    return 0;
  return *(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 11;
}


//======================================================================
// sub_437200
// entry 00437200  size 78  status ok
//======================================================================

BOOL __thiscall sub_437200(_DWORD *this)
{
  return *(this + 692) + *(this + 691) == *(this + 689);
}


//======================================================================
// sub_437250
// entry 00437250  size 234  status ok
//======================================================================

bool __thiscall sub_437250(_DWORD *this)
{
  if ( *(this + 689) )
    return 0;
  return *(this + 692) + *(this + 691) == 2 || *(this + 692) + *(this + 691) == 3 || *(this + 692) + *(this + 691) == 12;
}


//======================================================================
// sub_437340
// entry 00437340  size 120  status ok
//======================================================================

bool __thiscall sub_437340(_DWORD *this)
{
  return *(this + 689) && *(this + 692) + *(this + 691) == 7;
}


//======================================================================
// sub_4373C0
// entry 004373c0  size 158  status ok
//======================================================================

char __thiscall sub_4373C0(void *this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = sub_62FBF0(a3);
  v6 = v5;
  do
  {
    v6 = (v6 + 1) % a3;
    if ( (*(unsigned __int8 (__thiscall **)(int))(a2 + 32 * v6))((int)this + *(_DWORD *)(a2 + 32 * v6 + 4)) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(a2 + 32 * v6 + 16))(
        *(_DWORD *)(a2 + 32 * v6 + 20) + *(_DWORD *)(dword_7906DC + 360),
        *(_DWORD *)(dword_162EE80 + 4),
        -1);
      return 1;
    }
  }
  while ( v6 != v5 );
  return 0;
}


//======================================================================
// sub_437460
// entry 00437460  size 334  status ok
//======================================================================

bool __thiscall sub_437460(pairNode **this)
{
  if ( sub_436A00(this, 19)
    || sub_436A00(this, 20)
    || sub_436A00(this, 21)
    || sub_436A00(this, 22)
    || sub_436A00(this, 23)
    || sub_436A00(this, 24) )
  {
    return 1;
  }
  if ( sub_436A00(this, 43)
    || sub_436A00(this, 44)
    || sub_436A00(this, 45)
    || sub_436A00(this, 46)
    || sub_436A00(this, 47)
    || sub_436A00(this, 48) )
  {
    return 1;
  }
  return sub_436A00(this, 49)
      || sub_436A00(this, 50)
      || sub_436A00(this, 51)
      || sub_436A00(this, 52)
      || sub_436A00(this, 53)
      || sub_436A00(this, 54);
}


//======================================================================
// sub_4375B0
// entry 004375b0  size 109  status ok
//======================================================================

bool __thiscall sub_4375B0(_DWORD *this)
{
  int v2; // [esp+Ch] [ebp-4h]

  v2 = *(this + 692) + *(this + 691);
  return v2 == 2 || v2 == 3 || v2 == 4 || v2 == 9 || v2 == 10 || v2 == 11 || v2 == 12;
}


//======================================================================
// sub_437620
// entry 00437620  size 563  status ok
//======================================================================

bool __thiscall sub_437620(int this)
{
  if ( !*(_DWORD *)(this + 2756) && !sub_434410() )
    return 0;
  if ( sub_436A00((pairNode **)this, 49) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 4 )
    return 1;
  if ( sub_436A00((pairNode **)this, 50) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 5 )
    return 1;
  if ( sub_436A00((pairNode **)this, 51) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 6 )
    return 1;
  if ( sub_436A00((pairNode **)this, 52) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 8 )
    return 1;
  if ( sub_436A00((pairNode **)this, 53) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 9 )
    return 1;
  return sub_436A00((pairNode **)this, 54) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 10;
}


//======================================================================
// sub_437860
// entry 00437860  size 258  status ok
//======================================================================

bool __thiscall sub_437860(int this)
{
  if ( !*(_DWORD *)(this + 2756) && !sub_434410() )
    return 0;
  if ( *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) != 7 )
    return 0;
  if ( sub_436A00((pairNode **)this, 55) )
    return 1;
  if ( sub_436A00((pairNode **)this, 56) )
    return 1;
  if ( sub_436A00((pairNode **)this, 57) )
    return 1;
  if ( sub_436A00((pairNode **)this, 58) )
    return 1;
  if ( sub_436A00((pairNode **)this, 59) )
    return 1;
  return sub_436A00((pairNode **)this, 60) != 0;
}


//======================================================================
// sub_437970
// entry 00437970  size 49  status ok
//======================================================================

bool __thiscall sub_437970(pairNode **this)
{
  return sub_4375B0(this) && sub_436A00(this, 61);
}


//======================================================================
// sub_4379B0
// entry 004379b0  size 409  status ok
//======================================================================

bool __thiscall sub_4379B0(int this)
{
  if ( *(_DWORD *)(this + 2764) != *(_DWORD *)(this + 2768) )
    return 0;
  if ( *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 4 && sub_436A00((pairNode **)this, 8) )
    return 1;
  if ( *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 6 && sub_436A00((pairNode **)this, 9) )
    return 1;
  if ( *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 8 && sub_436A00((pairNode **)this, 10) )
    return 1;
  return *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 10 && sub_436A00((pairNode **)this, 11);
}


//======================================================================
// sub_437B50
// entry 00437b50  size 216  status ok
//======================================================================

bool __thiscall sub_437B50(int this)
{
  return (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 2
       || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 3
       || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 12)
      && sub_436A00((pairNode **)this, 17);
}


//======================================================================
// sub_437C30
// entry 00437c30  size 156  status ok
//======================================================================

bool __thiscall sub_437C30(int this)
{
  return sub_436A00((pairNode **)this, 4)
      && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 7
       || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 11);
}


//======================================================================
// sub_437CD0
// entry 00437cd0  size 501  status ok
//======================================================================

bool __thiscall sub_437CD0(_DWORD *this)
{
  if ( sub_434A90(19) == 1 && *(this + 692) + *(this + 691) == 4 )
    return 1;
  if ( sub_434A90(20) == 1 && *(this + 692) + *(this + 691) == 5 )
    return 1;
  if ( sub_434A90(21) == 1 && *(this + 692) + *(this + 691) == 6 )
    return 1;
  if ( sub_434A90(22) == 1 && *(this + 692) + *(this + 691) == 8 )
    return 1;
  if ( sub_434A90(23) == 1 && *(this + 692) + *(this + 691) == 9 )
    return 1;
  return sub_434A90(24) == 1 && *(this + 692) + *(this + 691) == 10;
}


//======================================================================
// sub_437ED0
// entry 00437ed0  size 501  status ok
//======================================================================

bool __thiscall sub_437ED0(_DWORD *this)
{
  if ( sub_434A90(19) > 1 && *(this + 692) + *(this + 691) == 4 )
    return 1;
  if ( sub_434A90(20) > 1 && *(this + 692) + *(this + 691) == 5 )
    return 1;
  if ( sub_434A90(21) > 1 && *(this + 692) + *(this + 691) == 6 )
    return 1;
  if ( sub_434A90(22) > 1 && *(this + 692) + *(this + 691) == 8 )
    return 1;
  if ( sub_434A90(23) > 1 && *(this + 692) + *(this + 691) == 9 )
    return 1;
  return sub_434A90(24) > 1 && *(this + 692) + *(this + 691) == 10;
}


//======================================================================
// sub_4380D0
// entry 004380d0  size 173  status ok
//======================================================================

bool __thiscall sub_4380D0(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi

  if ( *(this + 692) + *(this + 691) != 7 )
    return 0;
  v2 = sub_434A90(31);
  v3 = sub_434A90(32) + v2;
  v4 = sub_434A90(33) + v3;
  v5 = sub_434A90(34) + v4;
  v6 = sub_434A90(35) + v5;
  return sub_434A90(36) + v6 == 1;
}


//======================================================================
// sub_438180
// entry 00438180  size 173  status ok
//======================================================================

bool __thiscall sub_438180(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi

  if ( *(this + 692) + *(this + 691) != 7 )
    return 0;
  v2 = sub_434A90(31);
  v3 = sub_434A90(32) + v2;
  v4 = sub_434A90(33) + v3;
  v5 = sub_434A90(34) + v4;
  v6 = sub_434A90(35) + v5;
  return sub_434A90(36) + v6 > 1;
}


//======================================================================
// sub_438230
// entry 00438230  size 79  status ok
//======================================================================

bool __thiscall sub_438230(pairNode **this)
{
  return sub_436A00(this, 0) && (sub_437150(this) || sub_437200(this));
}


//======================================================================
// sub_438280
// entry 00438280  size 173  status ok
//======================================================================

bool __thiscall sub_438280(int this)
{
  return sub_436A00((pairNode **)this, 5)
      && (*(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 2
       || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 3);
}


//======================================================================
// sub_438330
// entry 00438330  size 139  status ok
//======================================================================

bool __thiscall sub_438330(int this)
{
  return sub_436A00((pairNode **)this, 2)
      && (sub_437250((_DWORD *)this) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) != 12
       || sub_437340((_DWORD *)this));
}


//======================================================================
// sub_4383C0
// entry 004383c0  size 563  status ok
//======================================================================

bool __thiscall sub_4383C0(int this)
{
  if ( !*(_DWORD *)(this + 2756) && !sub_434410() )
    return 0;
  if ( sub_436A00((pairNode **)this, 43) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 4 )
    return 1;
  if ( sub_436A00((pairNode **)this, 44) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 5 )
    return 1;
  if ( sub_436A00((pairNode **)this, 45) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 6 )
    return 1;
  if ( sub_436A00((pairNode **)this, 46) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 8 )
    return 1;
  if ( sub_436A00((pairNode **)this, 47) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 9 )
    return 1;
  return sub_436A00((pairNode **)this, 48) && *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) == 10;
}


//======================================================================
// sub_438600
// entry 00438600  size 100  status ok
//======================================================================

bool __thiscall sub_438600(pairNode **this)
{
  if ( !sub_437340(this) )
    return 0;
  if ( sub_437460(this) )
    return 0;
  return sub_437860((int)this) || sub_4380D0(this) || sub_438180(this);
}


//======================================================================
// sub_438670
// entry 00438670  size 194  status ok
//======================================================================

bool __thiscall sub_438670(int this)
{
  if ( *(_DWORD *)(this + 2756) || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) != 2 )
    return 0;
  if ( sub_436A00((pairNode **)this, 0) )
    return 0;
  return sub_437970((pairNode **)this)
      || sub_437B50(this)
      || sub_431B50((_DWORD *)this)
      || sub_436A00((pairNode **)this, 12);
}


//======================================================================
// sub_438740
// entry 00438740  size 194  status ok
//======================================================================

bool __thiscall sub_438740(int this)
{
  if ( *(_DWORD *)(this + 2756) || *(_DWORD *)(this + 2768) + *(_DWORD *)(this + 2764) != 3 )
    return 0;
  if ( sub_436A00((pairNode **)this, 0) )
    return 0;
  return sub_437970((pairNode **)this)
      || sub_437B50(this)
      || sub_431B50((_DWORD *)this)
      || sub_436A00((pairNode **)this, 13);
}


//======================================================================
// sub_438810
// entry 00438810  size 46  status ok
//======================================================================

bool __stdcall sub_438810(int a1)
{
  return a1 >= 25 && a1 <= 30;
}


//======================================================================
// sub_438840
// entry 00438840  size 46  status ok
//======================================================================

bool __stdcall sub_438840(int a1)
{
  return a1 >= 31 && a1 <= 36;
}


//======================================================================
// sub_438870
// entry 00438870  size 46  status ok
//======================================================================

bool __stdcall sub_438870(int a1)
{
  return a1 >= 43 && a1 <= 48;
}


//======================================================================
// sub_4388A0
// entry 004388a0  size 46  status ok
//======================================================================

bool __stdcall sub_4388A0(int a1)
{
  return a1 >= 55 && a1 <= 60;
}


//======================================================================
// sub_4388D0
// entry 004388d0  size 46  status ok
//======================================================================

bool __stdcall sub_4388D0(int a1)
{
  return a1 >= 49 && a1 <= 54;
}


//======================================================================
// sub_438900
// entry 00438900  size 144  status ok
//======================================================================

bool __thiscall sub_438900(_DWORD *this, int a2)
{
  if ( sub_434410() )
    return 1;
  return *(this + 689) || !sub_438870(a2) && !sub_438810(a2) && !sub_4388D0(a2) && !sub_4388A0(a2);
}


//======================================================================
// sub_438990
// entry 00438990  size 119  status ok
//======================================================================

bool __thiscall sub_438990(_DWORD *this)
{
  return *(this + 692) + *(this + 691) <= 4 || *(this + 692) + *(this + 691) >= 9;
}


//======================================================================
// sub_438A10
// entry 00438a10  size 8886  status ok
//======================================================================

int __thiscall sub_438A10(_DWORD *this, int a2)
{
  int v4; // [esp+318h] [ebp-4h]

  v4 = -1;
  if ( sub_438870(a2) && !sub_438900(this, a2) )
    return -1;
  switch ( a2 )
  {
    case 0:
      if ( sub_437150(this) || sub_437200(this) )
        v4 = 1;
      if ( sub_437250(this) || sub_437340(this) )
        return 0;
      return v4;
    case 1:
      if ( sub_437200(this) )
        v4 = 1;
      if ( sub_437340(this) )
        return 0;
      return v4;
    case 2:
      if ( sub_437150(this) || sub_437200(this) )
        v4 = 0;
      if ( sub_437250(this) && *(this + 692) + *(this + 691) != 12 || sub_437340(this) )
        return 1;
      return v4;
    case 3:
      if ( sub_437340(this) )
        v4 = 1;
      if ( sub_437200(this) )
        return 0;
      return v4;
    case 4:
      if ( *(this + 689) )
      {
        if ( *(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 11 )
        {
          return 1;
        }
        else if ( *(this + 692) + *(this + 691) == 2
               || *(this + 692) + *(this + 691) == 3
               || *(this + 692) + *(this + 691) == 12 )
        {
          return 0;
        }
      }
      return v4;
    case 5:
      if ( *(this + 689) )
      {
        switch ( *(this + 692) + *(this + 691) )
        {
          case 12:
            return -1;
          case 7:
          case 11:
            return 0;
          case 2:
          case 3:
            return 1;
        }
      }
      return v4;
    case 6:
      if ( *(this + 692) + *(this + 691) == 6 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 7:
      if ( *(this + 692) + *(this + 691) == 8 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 8:
      if ( *(this + 692) + *(this + 691) == 4 && *(this + 691) == *(this + 692) )
        return 1;
      if ( *(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 4 )
        return 0;
      return v4;
    case 9:
      if ( *(this + 692) + *(this + 691) == 6 && *(this + 691) == *(this + 692) )
        return 1;
      if ( *(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 6 )
        return 0;
      return v4;
    case 10:
      if ( *(this + 692) + *(this + 691) == 8 && *(this + 691) == *(this + 692) )
        return 1;
      if ( *(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 8 )
        return 0;
      return v4;
    case 11:
      if ( *(this + 692) + *(this + 691) == 10 && *(this + 691) == *(this + 692) )
        return 1;
      if ( *(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 10 )
        return 0;
      return v4;
    case 12:
      return *(this + 692) + *(this + 691) == 2;
    case 13:
      return *(this + 692) + *(this + 691) == 3;
    case 14:
      return *(this + 692) + *(this + 691) == 11;
    case 15:
      return *(this + 692) + *(this + 691) == 12;
    case 16:
      return *(this + 692) + *(this + 691) == 7;
    case 17:
      return *(this + 692) + *(this + 691) == 2
          || *(this + 692) + *(this + 691) == 3
          || *(this + 692) + *(this + 691) == 12;
    case 18:
      return *(this + 692) + *(this + 691) == 2
          || *(this + 692) + *(this + 691) == 3
          || *(this + 692) + *(this + 691) == 11
          || *(this + 692) + *(this + 691) == 12;
    case 19:
    case 43:
    case 49:
      goto LABEL_108;
    case 20:
    case 44:
    case 50:
      goto LABEL_118;
    case 21:
    case 45:
    case 51:
      goto LABEL_128;
    case 22:
    case 46:
    case 52:
      goto LABEL_138;
    case 23:
    case 47:
    case 53:
      goto LABEL_148;
    case 24:
    case 48:
    case 54:
      goto LABEL_158;
    case 25:
      if ( !*(this + 689)
        && (*(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 4)
        && !sub_438900(this, a2) )
      {
        return 3;
      }
LABEL_108:
      if ( *(this + 692) + *(this + 691) == 4 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 26:
      if ( !*(this + 689)
        && (*(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 5)
        && !sub_438900(this, a2) )
      {
        return 3;
      }
LABEL_118:
      if ( *(this + 692) + *(this + 691) == 5 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 27:
      if ( !*(this + 689)
        && (*(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 6)
        && !sub_438900(this, a2) )
      {
        return 3;
      }
LABEL_128:
      if ( *(this + 692) + *(this + 691) == 6 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 28:
      if ( !*(this + 689)
        && (*(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 8)
        && !sub_438900(this, a2) )
      {
        return 3;
      }
LABEL_138:
      if ( *(this + 692) + *(this + 691) == 8 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 29:
      if ( !*(this + 689)
        && (*(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 9)
        && !sub_438900(this, a2) )
      {
        return 3;
      }
LABEL_148:
      if ( *(this + 692) + *(this + 691) == 9 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 30:
      if ( !*(this + 689)
        && (*(this + 692) + *(this + 691) == 7 || *(this + 692) + *(this + 691) == 10)
        && !sub_438900(this, a2) )
      {
        return 3;
      }
LABEL_158:
      if ( *(this + 692) + *(this + 691) == 10 )
        v4 = 1;
      if ( *(this + 692) + *(this + 691) == 7 )
        return 0;
      return v4;
    case 31:
    case 55:
      goto LABEL_168;
    case 32:
    case 56:
      goto LABEL_178;
    case 33:
    case 57:
      goto LABEL_188;
    case 34:
    case 58:
      goto LABEL_198;
    case 35:
    case 59:
      goto LABEL_208;
    case 36:
    case 60:
      goto LABEL_218;
    case 37:
      if ( *(this + 689) || *(this + 692) + *(this + 691) != 7 && *(this + 692) + *(this + 691) != 4 || sub_434410() )
      {
LABEL_168:
        if ( *(this + 692) + *(this + 691) == 7 )
          v4 = 1;
        if ( *(this + 692) + *(this + 691) == 4 )
          v4 = 0;
      }
      else
      {
        v4 = 3;
      }
      break;
    case 38:
      if ( *(this + 689) || *(this + 692) + *(this + 691) != 7 && *(this + 692) + *(this + 691) != 5 || sub_434410() )
      {
LABEL_178:
        if ( *(this + 692) + *(this + 691) == 7 )
          v4 = 1;
        if ( *(this + 692) + *(this + 691) == 5 )
          v4 = 0;
      }
      else
      {
        v4 = 3;
      }
      break;
    case 39:
      if ( *(this + 689) || *(this + 692) + *(this + 691) != 7 && *(this + 692) + *(this + 691) != 6 || sub_434410() )
      {
LABEL_188:
        if ( *(this + 692) + *(this + 691) == 7 )
          v4 = 1;
        if ( *(this + 692) + *(this + 691) == 6 )
          v4 = 0;
      }
      else
      {
        v4 = 3;
      }
      break;
    case 40:
      if ( *(this + 689) || *(this + 692) + *(this + 691) != 7 && *(this + 692) + *(this + 691) != 8 || sub_434410() )
      {
LABEL_198:
        if ( *(this + 692) + *(this + 691) == 7 )
          v4 = 1;
        if ( *(this + 692) + *(this + 691) == 8 )
          v4 = 0;
      }
      else
      {
        v4 = 3;
      }
      break;
    case 41:
      if ( *(this + 689) || *(this + 692) + *(this + 691) != 7 && *(this + 692) + *(this + 691) != 9 || sub_434410() )
      {
LABEL_208:
        if ( *(this + 692) + *(this + 691) == 7 )
          v4 = 1;
        if ( *(this + 692) + *(this + 691) == 9 )
          v4 = 0;
      }
      else
      {
        v4 = 3;
      }
      break;
    case 42:
      if ( *(this + 689) || *(this + 692) + *(this + 691) != 7 && *(this + 692) + *(this + 691) != 10 || sub_434410() )
      {
LABEL_218:
        if ( *(this + 692) + *(this + 691) == 7 )
          v4 = 1;
        if ( *(this + 692) + *(this + 691) == 10 )
          v4 = 0;
      }
      else
      {
        v4 = 3;
      }
      break;
    case 61:
      v4 = sub_438990(this);
      break;
    default:
      return v4;
  }
  return v4;
}


//======================================================================
// sub_43ADC0
// entry 0043adc0  size 395  status ok
//======================================================================

int __thiscall sub_43ADC0(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-34h]
  int v4; // [esp+30h] [ebp-4h]

  v4 = dword_713230[2 * a2];
  switch ( a2 )
  {
    case 1:
      switch ( *(this + 689) )
      {
        case 4:
        case 0xA:
          v4 = 2;
          break;
        case 5:
        case 9:
          v4 = 3;
          break;
        case 6:
        case 8:
          v4 = 6;
          break;
        default:
          return v4;
      }
      break;
    case 3:
      switch ( *(this + 689) )
      {
        case 4:
        case 0xA:
          v4 = 1;
          break;
        case 5:
        case 9:
          v4 = 2;
          break;
        case 6:
        case 8:
          v4 = 5;
          break;
        default:
          return v4;
      }
      break;
    case 18:
      switch ( *(this + 692) + *(this + 691) )
      {
        case 2:
        case 12:
          v4 = 30;
          break;
        case 3:
        case 11:
          v4 = 15;
          break;
        default:
          return v4;
      }
      break;
    case 61:
      v3 = *(this + 692) + *(this + 691);
      if ( v3 == 2 || v3 == 12 )
        v4 = 2;
      else
        v4 = 1;
      break;
    default:
      return v4;
  }
  return v4;
}


//======================================================================
// sub_43AFF0
// entry 0043aff0  size 395  status ok
//======================================================================

int __thiscall sub_43AFF0(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-34h]
  int v4; // [esp+30h] [ebp-4h]

  v4 = dword_713234[2 * a2];
  switch ( a2 )
  {
    case 1:
      switch ( *(this + 689) )
      {
        case 4:
        case 0xA:
          v4 = 1;
          break;
        case 5:
        case 9:
          v4 = 2;
          break;
        case 6:
        case 8:
          v4 = 5;
          break;
        default:
          return v4;
      }
      break;
    case 3:
      switch ( *(this + 689) )
      {
        case 4:
        case 0xA:
          v4 = 2;
          break;
        case 5:
        case 9:
          v4 = 3;
          break;
        case 6:
        case 8:
          v4 = 6;
          break;
        default:
          return v4;
      }
      break;
    case 18:
      switch ( *(this + 692) + *(this + 691) )
      {
        case 2:
        case 12:
          v4 = 1;
          break;
        case 3:
        case 11:
          v4 = 1;
          break;
        default:
          return v4;
      }
      break;
    case 61:
      v3 = *(this + 692) + *(this + 691);
      if ( v3 == 2 || v3 == 12 )
        v4 = 1;
      else
        v4 = 1;
      break;
    default:
      return v4;
  }
  return v4;
}


//======================================================================
// sub_43B220
// entry 0043b220  size 35  status ok
//======================================================================

BOOL __thiscall sub_43B220(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + a2 + 1) + 272) == 0;
}


//======================================================================
// sub_43B250
// entry 0043b250  size 64  status ok
//======================================================================

char __thiscall sub_43B250(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( sub_43B220(this, i) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_43B290
// entry 0043b290  size 125  status ok
//======================================================================

void __thiscall sub_43B290(pairNode **this)
{
  int v1; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 76; ++i )
  {
    if ( *((_DWORD *)*(this + i + 1) + 68) == 1 || *((_DWORD *)*(this + i + 1) + 68) == 3 )
    {
      v1 = pairNode::raw_length(*(this + i + 1));
      if ( !sub_438870(v1) )
        sub_5CB9B0(*(this + i + 1));
    }
  }
}


//======================================================================
// sub_43B310
// entry 0043b310  size 224  status ok
//======================================================================

int sub_43B310()
{
  int v0; // eax
  __int64 v2; // [esp-8h] [ebp-2Ch]
  CImageDisplay *v3; // [esp+4h] [ebp-20h]
  int i; // [esp+14h] [ebp-10h]
  __int64 v5; // [esp+18h] [ebp-Ch] BYREF
  int v6; // [esp+20h] [ebp-4h]

  v6 = -1;
  v5 = sub_64C8A0(0, 0);
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
    {
      v0 = sub_5DCB00(i);
      if ( (unsigned __int8)sub_5D5920(v0) )
      {
        v2 = v5;
        sub_5DCB00(i);
        if ( (unsigned __int8)sub_64C6E0(v2, HIDWORD(v2)) )
        {
          sub_5DCB00(i);
          sub_5D6020(&v5);
          v6 = i;
        }
      }
    }
  }
  return v6;
}


//======================================================================
// sub_43B3F0
// entry 0043b3f0  size 227  status ok
//======================================================================

int sub_43B3F0()
{
  int v0; // eax
  __int64 v2; // [esp-8h] [ebp-2Ch]
  CImageDisplay *v3; // [esp+4h] [ebp-20h]
  __int64 v4; // [esp+14h] [ebp-10h] BYREF
  int i; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h]

  v6 = -1;
  v4 = sub_64C8A0(1000000000, 0);
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
    {
      v0 = sub_5DCB00(i);
      if ( (unsigned __int8)sub_5D58D0(v0) )
      {
        v2 = v4;
        sub_5DCB00(i);
        if ( (unsigned __int8)sub_64C6A0(v2, HIDWORD(v2)) )
        {
          sub_5DCB00(i);
          sub_5D6020(&v4);
          v6 = i;
        }
      }
    }
  }
  return v6;
}


//======================================================================
// sub_43B4E0
// entry 0043b4e0  size 80  status ok
//======================================================================

bool sub_43B4E0()
{
  int v2; // [esp+8h] [ebp-4h]

  v2 = sub_5DA8C0(dword_7906D0);
  return (unsigned __int8)sub_5DA7B0(dword_7906D0) && v2 >= sub_5DA8A0(dword_7906D0);
}


//======================================================================
// sub_43B530
// entry 0043b530  size 161  status ok
//======================================================================

bool __thiscall sub_43B530(void *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  bool result; // al
  _BYTE v6[8]; // [esp+8h] [ebp-24h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v8; // [esp+18h] [ebp-14h]
  int v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+20h] [ebp-Ch]
  int v11; // [esp+24h] [ebp-8h]
  int v12; // [esp+28h] [ebp-4h]

  v12 = sub_5DA880(dword_7906D0);
  v9 = 40 * v12 / 100;
  v11 = sub_43B6F0(this, 40 * v12 % 100);
  v10 = sub_43B790(this);
  v8 = sub_5DA8C0(dword_7906D0);
  result = 0;
  if ( v8 != 1 && a2 == v11 )
  {
    sub_5DCB00(a2);
    v2 = (_DWORD *)sub_5D5A90(v7);
    sub_5DCB00(v10);
    v3 = (_DWORD *)sub_5D5A90(v6);
    if ( *v2 < *v3 - v9 )
      return 1;
  }
  return result;
}


//======================================================================
// sub_43B5E0
// entry 0043b5e0  size 271  status ok
//======================================================================

bool __stdcall sub_43B5E0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+0h] [ebp-2Ch]
  int v7; // [esp+4h] [ebp-28h]
  int v8; // [esp+14h] [ebp-18h]
  int v9; // [esp+18h] [ebp-14h]
  __int64 v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+24h] [ebp-8h]
  int v12; // [esp+28h] [ebp-4h]

  v10 = sub_64C8A0(0, 0);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0);
  (*(void (__thiscall **)(int, int, __int64 *))(*(_DWORD *)dword_7906D0 + 636))(dword_7906D0, a1, &v10);
  v9 = v10;
  if ( (unsigned __int8)sub_5DA7B0(dword_7906D0) )
  {
    v8 = sub_5DA8C0(dword_7906D0);
    v1 = sub_5DA8A0(dword_7906D0);
    if ( v11 * (v1 - v8) >= 400 )
    {
      v2 = sub_5DA8A0(dword_7906D0);
      v7 = v11 * (v2 - v8);
    }
    else
    {
      v7 = 400;
    }
    v12 = v7;
  }
  else
  {
    if ( 10 * v11 >= 500 )
      v6 = 10 * v11;
    else
      v6 = 500;
    v12 = v6;
  }
  v3 = sub_5DCB00(a1);
  v4 = sub_5D5A50(v3);
  return v9 + v4 < v12;
}


//======================================================================
// sub_43B6F0
// entry 0043b6f0  size 155  status ok
//======================================================================

int sub_43B6F0()
{
  int *v0; // eax
  _BYTE v2[8]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v3[8]; // [esp+14h] [ebp-14h] BYREF
  int v4; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  int v6; // [esp+24h] [ebp-4h]

  v6 = 1000000000;
  v4 = -1;
  for ( i = 0; i < 4; ++i )
  {
    if ( !*(_BYTE *)(sub_5DCB00(i) + 1185) )
    {
      sub_5DCB00(i);
      v0 = (int *)sub_5D5A90(v3);
      if ( *v0 < v6 )
      {
        sub_5DCB00(i);
        v6 = *(_DWORD *)sub_5D5A90(v2);
        v4 = i;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_43B790
// entry 0043b790  size 155  status ok
//======================================================================

int sub_43B790()
{
  _DWORD *v0; // eax
  _BYTE v2[8]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v3[8]; // [esp+14h] [ebp-14h] BYREF
  int v4; // [esp+1Ch] [ebp-Ch]
  int v5; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v5 = 0;
  v4 = -1;
  for ( i = 0; i < 4; ++i )
  {
    if ( !*(_BYTE *)(sub_5DCB00(i) + 1185) )
    {
      sub_5DCB00(i);
      v0 = (_DWORD *)sub_5D5A90(v3);
      if ( *v0 > v5 )
      {
        sub_5DCB00(i);
        v5 = *(_DWORD *)sub_5D5A90(v2);
        v4 = i;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_43B830
// entry 0043b830  size 712  status ok
//======================================================================

int __thiscall sub_43B830(int this, char a2)
{
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  char *v10; // eax
  char Destination[2048]; // [esp+Ch] [ebp-808h] BYREF
  int v14; // [esp+810h] [ebp-4h]

  v14 = *(_DWORD *)(dword_7906D4 + 2776);
  if ( v14 == -1 )
    sub_5E9F20((char)"p != -1", "..\\Casino\\crapsstate.cpp", 2456);
  Destination[0] = 0;
  if ( *(_DWORD *)(this + 2756) )
  {
    v3 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_2");
    strcpy(Destination, v3);
    if ( sub_435D40(v14) )
    {
      v4 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_3");
      strcat(Destination, v4);
    }
  }
  else
  {
    v2 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_1");
    strcpy(Destination, v2);
  }
  v5 = (char *)sub_630F40("SID_CASINO_BETTING");
  sub_57BE80(0, v5, Destination);
  Destination[0] = 0;
  if ( *(_DWORD *)(this + 2756) )
  {
    if ( a2
      || sub_4369A0((pairNode **)this, v14, 0) && !sub_4369A0((pairNode **)this, v14, 1)
      || sub_4369A0((pairNode **)this, v14, 2) && !sub_4369A0((pairNode **)this, v14, 3) )
    {
      v7 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_5");
      strcat(Destination, v7);
    }
    if ( !sub_4369A0((pairNode **)this, v14, 4)
      && !sub_435D40(v14)
      && !sub_4369A0((pairNode **)this, v14, 5)
      && !sub_435DE0(v14) )
    {
      v8 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_6");
      strcat(Destination, v8);
    }
    if ( sub_435D40(v14) || sub_435DE0(v14) )
    {
      v9 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_7");
      strcat(Destination, v9);
    }
  }
  else
  {
    v6 = (const char *)sub_630F40("SID_CRAPS_TUTORIAL_4");
    strcat(Destination, v6);
  }
  v10 = (char *)sub_630F40("SID_CRAPS_STRATEGY");
  return sub_57BE80(1, v10, Destination);
}


//======================================================================
// sub_43BB00
// entry 0043bb00  size 172  status ok
//======================================================================

_DWORD *__thiscall sub_43BB00(_DWORD *this)
{
  int i; // [esp+10h] [ebp-10h]

  sub_5CB4B0();
  *this = &CrapsBet::`vftable';
  for ( i = 0; i < 4; ++i )
    *((_QWORD *)this + i + 30) = sub_64C8A0(0, 0);
  *(this + 68) = -1;
  return this;
}


//======================================================================
// sub_43BBD0
// entry 0043bbd0  size 246  status ok
//======================================================================

void __thiscall sub_43BBD0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  if ( a4 <= 3 )
  {
    if ( !*(this + 8 * a4 + 18) && !*(this + 8 * a4 + 19)
      || !sub_434820((_DWORD *)dword_7906D4, (int)this) && !(unsigned __int8)sub_5CB7D0(a4, a5)
      || sub_434820((_DWORD *)dword_7906D4, (int)this) == 2 && !(unsigned __int8)sub_5CB7D0(a4, a5) )
    {
      *(this + 2 * a4 + 60) = a2;
      *(this + 2 * a4 + 61) = a3;
    }
    sub_5CB6D0(a2, a3, a4, a5);
  }
}


//======================================================================
// sub_43BCD0
// entry 0043bcd0  size 83  status ok
//======================================================================

void __thiscall sub_43BCD0(_QWORD *this, int a2, int a3)
{
  if ( a2 <= 3 )
  {
    sub_5CB780(a2, a3);
    *(this + a2 + 30) = sub_64C8A0(0, 0);
  }
}


//======================================================================
// sub_43BD30
// entry 0043bd30  size 537  status ok
//======================================================================

_DWORD *__thiscall sub_43BD30(pairNode *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int v4; // eax

  switch ( pairNode::raw_length(this) )
  {
    case 1:
    case 3:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
      sub_43BD30(a2, a3);
      result = a2;
      break;
    default:
      v4 = *((_DWORD *)this + 2 * a3 + 61);
      *a2 = *((_DWORD *)this + 2 * a3 + 60);
      a2[1] = v4;
      result = a2;
      break;
  }
  return result;
}


//======================================================================
// sub_43BFC0
// entry 0043bfc0  size 157  status ok
//======================================================================

char __thiscall sub_43BFC0(void *this)
{
  char v2; // [esp+0h] [ebp-1Ch]
  CImageDisplay *v4; // [esp+10h] [ebp-Ch]

  if ( sub_4347F0((_DWORD *)dword_7906D4)
    && ((v4 = (CImageDisplay *)sub_4347F0((_DWORD *)dword_7906D4),
         CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2)
     || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3
      ? (v2 = 1)
      : (v2 = 0),
        v2 && !*(_BYTE *)(sub_4347F0((_DWORD *)dword_7906D4) + 1184)) )
  {
    return sub_435290((_DWORD *)dword_7906D4, (int)this);
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_43C060
// entry 0043c060  size 187  status ok
//======================================================================

bool __thiscall sub_43C060(pairNode *this)
{
  bool v2; // [esp+0h] [ebp-1Ch]
  CImageDisplay *v4; // [esp+10h] [ebp-Ch]

  if ( (*(unsigned __int8 (__thiscall **)(pairNode *))(*(_DWORD *)this + 176))(this) )
    return 1;
  if ( sub_4347F0((_DWORD *)dword_7906D4) )
  {
    v4 = (CImageDisplay *)sub_4347F0((_DWORD *)dword_7906D4);
    v2 = CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3;
    if ( v2 && !*(_BYTE *)(sub_4347F0((_DWORD *)dword_7906D4) + 1184) )
      return sub_435300((_DWORD *)dword_7906D4, this);
  }
  return 0;
}


//======================================================================
// sub_43C120
// entry 0043c120  size 3090  status ok
//======================================================================

CImageDisplay *__thiscall sub_43C120(pairNode *this, int *a2, int a3, char a4)
{
  CImageDisplay *result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
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
  int v21; // esi
  int v22; // esi
  const CHAR *v23; // eax
  int v24; // eax
  int v25; // eax
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  const CHAR *v33; // [esp+0h] [ebp-1A4h]
  char v34; // [esp+8h] [ebp-19Ch]
  double v35; // [esp+10h] [ebp-194h]
  double v37; // [esp+24h] [ebp-180h]
  int v38; // [esp+30h] [ebp-174h]
  bool v39; // [esp+34h] [ebp-170h]
  int v41; // [esp+48h] [ebp-15Ch]
  char v42[8]; // [esp+54h] [ebp-150h] BYREF
  __int64 v43; // [esp+5Ch] [ebp-148h]
  __int64 v44; // [esp+64h] [ebp-140h]
  double v45; // [esp+6Ch] [ebp-138h]
  __int64 v46; // [esp+74h] [ebp-130h]
  double v47; // [esp+7Ch] [ebp-128h]
  bool v48; // [esp+87h] [ebp-11Dh]
  CImageDisplay *v49; // [esp+88h] [ebp-11Ch]
  __int64 v50; // [esp+8Ch] [ebp-118h]
  char Buffer[256]; // [esp+94h] [ebp-110h] BYREF
  int v52; // [esp+198h] [ebp-Ch]
  CImageDisplay *v53; // [esp+19Ch] [ebp-8h]
  int v54; // [esp+1A0h] [ebp-4h]

  v48 = *a2 >= 0;
  result = (CImageDisplay *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 604))(dword_7906D0);
  v49 = result;
  if ( !result )
    return result;
  v52 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7906D0 + 688))(dword_7906D0);
  v43 = sub_64C8A0(0, 0);
  v50 = v43;
  sprintf(Buffer, "CRAPS: adding %d dollars and %d cents to bet.\n", *a2, a2[1]);
  sub_62FDE0(Buffer, v34);
  if ( pairNode::raw_length(this) == 43
    || pairNode::raw_length(this) == 44
    || pairNode::raw_length(this) == 47
    || pairNode::raw_length(this) == 48 )
  {
    if ( *a2 )
    {
      if ( *a2 < 0 )
      {
        for ( *a2 = -*a2; *a2 % 5 || *a2 < v52; ++*a2 )
          ;
        *a2 = -*a2;
      }
    }
    else if ( *((int *)v49 + 303) <= 0 )
    {
      for ( *a2 = v52; *a2 % 5 || *a2 < v52; ++*a2 )
        ;
    }
    else if ( *((_DWORD *)v49 + 303) <= 5 * v52 || *((_DWORD *)v49 + 303) % 5 )
    {
      for ( *a2 = *((_DWORD *)v49 + 303); *a2 % 5 || *a2 < v52; ++*a2 )
        ;
    }
    else
    {
      *a2 = *((_DWORD *)v49 + 303);
    }
  }
  if ( pairNode::raw_length(this) == 45 || pairNode::raw_length(this) == 46 )
  {
    if ( *a2 )
    {
      if ( *a2 < 0 )
      {
        for ( *a2 = -*a2; *a2 % 6 || *a2 < v52; ++*a2 )
          ;
        *a2 = -*a2;
      }
    }
    else if ( *((int *)v49 + 303) <= 0 )
    {
      for ( *a2 = v52; *a2 % 6 || *a2 < v52; ++*a2 )
        ;
    }
    else if ( *((_DWORD *)v49 + 303) <= 6 * v52 || *((_DWORD *)v49 + 303) % 6 )
    {
      for ( *a2 = *((_DWORD *)v49 + 303); *a2 % 6 || *a2 < v52; ++*a2 )
        ;
    }
    else
    {
      *a2 = *((_DWORD *)v49 + 303);
    }
  }
  v5 = pairNode::raw_length(this);
  if ( sub_435CA0(v5) || (v6 = pairNode::raw_length(this), sub_435CF0(v6)) )
  {
    if ( !*a2 && v48 && sub_5D5A50(v49) )
    {
      v39 = CImageDisplay::GetDisplayFormat(v49)->rcSource.left == 2
         || CImageDisplay::GetDisplayFormat(v49)->rcSource.left == 3;
      if ( v39 && sub_4342D0() )
      {
        v7 = sub_434820((_DWORD *)dword_7906D4, (int)this);
        *a2 = sub_436570((_DWORD *)dword_7906D4, *((_DWORD *)v49 + 1), v7);
      }
      else
      {
        *a2 = *((_DWORD *)v49 + 303);
      }
      v41 = *((_DWORD *)v49 + 1);
      v8 = *((_DWORD *)this + 8 * v41 + 19);
      v53 = (CImageDisplay *)*((_DWORD *)this + 8 * v41 + 18);
      v54 = v8;
      v9 = sub_434820((_DWORD *)dword_7906D4, (int)this);
      result = (CImageDisplay *)sub_436570((_DWORD *)dword_7906D4, *((_DWORD *)v49 + 1), v9);
      if ( v53 == result )
        return result;
      v10 = (int)v53 + *a2;
      v11 = sub_434820((_DWORD *)dword_7906D4, (int)this);
      if ( v10 > sub_436570((_DWORD *)dword_7906D4, *((_DWORD *)v49 + 1), v11) )
      {
        v12 = sub_434820((_DWORD *)dword_7906D4, (int)this);
        v13 = sub_436570((_DWORD *)dword_7906D4, *((_DWORD *)v49 + 1), v12);
        *a2 = v13 - (_DWORD)v53;
        result = (CImageDisplay *)a2;
        if ( *a2 <= 0 )
          result = (CImageDisplay *)sub_5E9F20((char)"deltaBet.dollars > 0", "..\\Casino\\crapsstate.cpp", 2753);
        if ( *a2 <= 0 )
          return result;
      }
      if ( sub_5D5A50(v49) >= *a2 )
        v38 = *a2;
      else
        v38 = sub_5D5A50(v49);
      *a2 = v38;
      a4 = 0;
    }
  }
  if ( pairNode::raw_length(this) == 18 )
  {
    if ( *a2 )
    {
      if ( *a2 < 0 )
      {
        for ( *a2 = -*a2; *a2 % 4 || *a2 < v52; ++*a2 )
          ;
        *a2 = -*a2;
      }
    }
    else if ( *((int *)v49 + 303) <= 0 )
    {
      *a2 = 4 * v52;
    }
    else if ( *((_DWORD *)v49 + 303) <= 4 * v52 || *((_DWORD *)v49 + 303) % 4 )
    {
      for ( *a2 = *((_DWORD *)v49 + 303); *a2 % 4 || *a2 < v52; ++*a2 )
        ;
    }
    else
    {
      *a2 = *((_DWORD *)v49 + 303);
    }
  }
  if ( v48 )
  {
    v14 = pairNode::raw_length(this);
    if ( sub_4388A0(v14) || (v15 = pairNode::raw_length(this), sub_4388D0(v15)) )
    {
      if ( !*a2 )
      {
        if ( *((int *)v49 + 303) <= 0 )
          *a2 = v52;
        else
          *a2 = *((_DWORD *)v49 + 303);
      }
      v16 = pairNode::raw_length(this);
      if ( sub_4388D0(v16) )
      {
        v17 = a2[1];
        LODWORD(v50) = *a2;
        HIDWORD(v50) = v17;
      }
      else
      {
        v18 = pairNode::raw_length(this);
        v37 = (double)sub_43ADC0((_DWORD *)dword_7906D4, v18);
        v19 = pairNode::raw_length(this);
        v47 = v37 / (double)sub_43AFF0((_DWORD *)dword_7906D4, v19);
        v20 = a2[1];
        LODWORD(v46) = *a2;
        HIDWORD(v46) = v20;
        sub_64C560(v47);
        v50 = v46;
      }
      sub_64C560(0.05);
      v21 = v50 + *a2;
      if ( v21 > sub_5D5A50(v49) )
      {
        v22 = v50 + *a2;
        if ( v22 > sub_5D5A50(v49) )
        {
          result = (CImageDisplay *)CImageDisplay::GetDisplayFormat(v49);
          if ( *(_DWORD *)result == 2
            || (result = (CImageDisplay *)CImageDisplay::GetDisplayFormat(v49)->rcSource.left,
                result == (CImageDisplay *)3) )
          {
            v33 = (const CHAR *)sub_630F40("SID_CASINO_BANKEXCEEDED");
            v23 = (const CHAR *)sub_630F40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET");
            return (CImageDisplay *)sub_62FF10(v23, v33, 0);
          }
          return result;
        }
      }
      LODWORD(v50) = -(int)v50;
      HIDWORD(v50) = -HIDWORD(v50);
      sub_5D5CF0(v50, HIDWORD(v50));
    }
  }
  if ( !v48 )
  {
    v24 = pairNode::raw_length(this);
    if ( sub_4388A0(v24) || (v25 = pairNode::raw_length(this), sub_4388D0(v25)) )
    {
      v26 = (int *)sub_5CB880(v42, *((_DWORD *)v49 + 1));
      v27 = v26[1];
      *a2 = *v26;
      a2[1] = v27;
      v28 = pairNode::raw_length(this);
      if ( sub_4388D0(v28) )
      {
        v29 = a2[1];
        LODWORD(v50) = *a2;
        HIDWORD(v50) = v29;
      }
      else
      {
        v30 = pairNode::raw_length(this);
        v35 = (double)sub_43ADC0((_DWORD *)dword_7906D4, v30);
        v31 = pairNode::raw_length(this);
        v45 = v35 / (double)sub_43AFF0((_DWORD *)dword_7906D4, v31);
        v32 = a2[1];
        LODWORD(v44) = *a2;
        HIDWORD(v44) = v32;
        sub_64C560(v45);
        v50 = v44;
      }
      sub_64C560(0.05);
      sub_5D5CF0(v50, HIDWORD(v50));
      if ( !v50 )
        *a2 = 5;
      *a2 = -*a2;
      a2[1] = -a2[1];
    }
  }
  if ( pairNode::raw_length(this) == 8
    || pairNode::raw_length(this) == 9
    || pairNode::raw_length(this) == 10
    || pairNode::raw_length(this) == 11 )
  {
    a4 = 0;
  }
  if ( pairNode::raw_length(this) == 17 || pairNode::raw_length(this) == 14 )
    a4 = 0;
  if ( pairNode::raw_length(this) == 16
    || pairNode::raw_length(this) == 12
    || pairNode::raw_length(this) == 15
    || pairNode::raw_length(this) == 13 )
  {
    a4 = 0;
  }
  result = (CImageDisplay *)sub_5CBA10(a2, a3, a4);
  if ( !v48 )
    return (CImageDisplay *)sub_5DA460(dword_7906D0);
  return result;
}


//======================================================================
// sub_43CD40
// entry 0043cd40  size 903  status ok
//======================================================================

int __thiscall sub_43CD40(_DWORD *this, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // [esp+0h] [ebp-64h]
  __int64 v10; // [esp+0h] [ebp-64h]
  __int64 v11; // [esp+0h] [ebp-64h]
  _DWORD *v12; // [esp+8h] [ebp-5Ch]
  double v13; // [esp+14h] [ebp-50h]
  _BYTE v15[8]; // [esp+2Ch] [ebp-38h] BYREF
  __int64 v16; // [esp+34h] [ebp-30h]
  __int64 v17; // [esp+3Ch] [ebp-28h]
  __int64 v18; // [esp+44h] [ebp-20h]
  double v19; // [esp+4Ch] [ebp-18h]
  __int64 v20; // [esp+54h] [ebp-10h]
  __int64 v21; // [esp+5Ch] [ebp-8h]

  v21 = *((_QWORD *)this + 4 * a2 + 9);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v20 = v16;
  v2 = pairNode::raw_length((pairNode *)this);
  v13 = (double)sub_43ADC0((_DWORD *)dword_7906D4, v2);
  v3 = pairNode::raw_length((pairNode *)this);
  v19 = v13 / (double)sub_43AFF0((_DWORD *)dword_7906D4, v3);
  v4 = sub_5DCB00(a2);
  result = sub_5D5A50(v4);
  if ( result < 2000000000 )
  {
    if ( pairNode::raw_length((pairNode *)this) == 18 && HIDWORD(a2) == 1 )
      LODWORD(v21) = (int)v21 / 4;
    *(this + 68) = -1;
    if ( (int)v21 <= 0 )
      sub_5E9F20((char)"originalBet.dollars > 0", "..\\Casino\\crapsstate.cpp", 2944);
    if ( HIDWORD(a2) )
    {
      if ( HIDWORD(a2) == 1 )
      {
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v6 = sub_5DCB00(a2);
        sub_5D7540(v6);
        v18 = v21;
        sub_64C560(v19);
        if ( (int)v21 > 1000000000 )
          v18 = 1000000000;
        v20 = *(_QWORD *)sub_64C5C0(v15, v21, HIDWORD(v21));
        if ( (int)v20 >= 1000000000 )
          v20 = sub_64C8A0(1000000000, 0);
        v7 = pairNode::raw_length((pairNode *)this);
        if ( sub_438870(v7) )
        {
          v9 = v18;
          sub_5DCB00(a2);
          sub_5D5CF0(v9, HIDWORD(v9));
          (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 184))(
            this,
            v21,
            HIDWORD(v21),
            a2,
            0);
        }
        else
        {
          v10 = v20;
          sub_5DCB00(a2);
          sub_5D5CF0(v10, HIDWORD(v10));
          (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 184))(
            this,
            v20,
            HIDWORD(v20),
            a2,
            0);
        }
        v11 = v18;
        sub_5DCB00(a2);
        sub_5D5FB0(v11, HIDWORD(v11));
        *(this + 68) = 1;
      }
      else if ( HIDWORD(a2) == 3 )
      {
        sub_5DCB00(a2);
        sub_5D5CF0(v21, HIDWORD(v21));
        *(this + 68) = 3;
      }
    }
    else
    {
      if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
      v12 = (_DWORD *)(sub_5DCB00(a2) + 1192);
      --*v12;
      LODWORD(v18) = -(int)v21;
      HIDWORD(v18) = -HIDWORD(v21);
      sub_5DCB00(a2);
      sub_5D5FB0(-(int)v21, -HIDWORD(v21));
      *(this + 68) = 0;
    }
    v8 = sub_434820((_DWORD *)dword_7906D4, (int)this);
    return sub_42C5F0(*(_DWORD **)(dword_7906DC + 4 * v8 + 20), a2, SHIDWORD(a2));
  }
  return result;
}


//======================================================================
// sub_43D0D0
// entry 0043d0d0  size 53  status ok
//======================================================================

void __thiscall sub_43D0D0(void *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_7906DC )
  {
    v3 = sub_434820((_DWORD *)dword_7906D4, (int)this);
    sub_42A050((_DWORD **)dword_7906DC, v3, a2);
  }
}


//======================================================================
// sub_43D170
// entry 0043d170  size 230  status ok
//======================================================================

_DWORD *__thiscall sub_43D170(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  sub_5F5BF0(this);
  *this = &HorseAnnouncer::`vftable';
  *(this + 97) = 0;
  *((_BYTE *)this + 392) = 0;
  sub_43DA90(this);
  sub_5F5CC0(this);
  sub_5EB570(this);
  v4 = operator new(0x48u);
  if ( v4 )
    v2 = sub_43E2C0(v4);
  else
    v2 = 0;
  sub_5F5DF0(v2);
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*(this + 95) + 8))(0);
  return this;
}


//======================================================================
// sub_43D280
// entry 0043d280  size 19  status ok
//======================================================================

int __thiscall sub_43D280(void *this)
{
  return sub_5F5CF0(this);
}


//======================================================================
// sub_43D2A0
// entry 0043d2a0  size 29  status ok
//======================================================================

int __thiscall sub_43D2A0(_BYTE *this)
{
  *(this + 392) = 0;
  return sub_43DA40(this, this);
}


//======================================================================
// sub_43D2C0
// entry 0043d2c0  size 139  status ok
//======================================================================

int __thiscall sub_43D2C0(int this)
{
  int result; // eax

  *(_BYTE *)(this + 392) = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 0, 0);
  sub_609870(*(_DWORD *)(dword_7906EC + 136), 1);
  *(_DWORD *)(dword_7906EC + 136) = 0;
  result = sub_609870(*(_DWORD *)(dword_7906EC + 140), 1);
  *(_DWORD *)(dword_7906EC + 140) = 0;
  return result;
}


//======================================================================
// sub_43D350
// entry 0043d350  size 58  status ok
//======================================================================

bool __thiscall sub_43D350(_BYTE *this)
{
  return (unsigned __int8)sub_444AC0(dword_7906F0) && *(this + 392) != 1;
}


//======================================================================
// sub_43D390
// entry 0043d390  size 127  status ok
//======================================================================

int __thiscall sub_43D390(int this)
{
  int result; // eax

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 0;
    sub_43F1B0(*(_DWORD *)(this + 380), 101030, *(_DWORD *)(this + 416), 101031, *(_DWORD *)(this + 420), -1);
    result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 1, 15);
    *(_BYTE *)(this + 392) = 1;
  }
  return result;
}


//======================================================================
// sub_43D410
// entry 0043d410  size 286  status ok
//======================================================================

int __thiscall sub_43D410(int this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int v7; // eax
  _DWORD v9[5]; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 1;
    v10 = a2;
    for ( i = 0; i < 5; ++i )
    {
      v9[i] = 0;
      switch ( i )
      {
        case 0:
          v10 = a2;
          break;
        case 1:
          v10 = a3;
          break;
        case 2:
          v10 = a4;
          break;
        case 3:
          v10 = a5;
          break;
        case 4:
          v10 = a6;
          break;
        default:
          break;
      }
      v7 = sub_43D9B0(v10);
      v9[i] = v7;
    }
    sub_43F1B0(
      *(_DWORD *)(this + 380),
      v9[0],
      *(_DWORD *)(this + 444),
      v9[1],
      *(_DWORD *)(this + 448),
      v9[2],
      *(_DWORD *)(this + 452),
      v9[3],
      *(_DWORD *)(this + 456),
      v9[4],
      *(_DWORD *)(this + 460),
      -1);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 5, 0);
  }
  return result;
}


//======================================================================
// sub_43D550
// entry 0043d550  size 224  status ok
//======================================================================

int __thiscall sub_43D550(int this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int v7; // eax
  _DWORD v9[3]; // [esp+8h] [ebp-14h]
  int v10; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 1;
    v10 = a4;
    for ( i = 0; i < 3; ++i )
    {
      v9[i] = 0;
      if ( i )
      {
        if ( i == 1 )
        {
          v10 = a5;
        }
        else if ( i == 2 )
        {
          v10 = a6;
        }
      }
      else
      {
        v10 = a4;
      }
      v7 = sub_43D9B0(v10);
      v9[i] = v7;
    }
    sub_43F1B0(*(_DWORD *)(this + 380), a2, v9[0], v9[1], v9[2], -1);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), a3, 0);
  }
  return result;
}


//======================================================================
// sub_43D630
// entry 0043d630  size 45  status ok
//======================================================================

int __thiscall sub_43D630(int *this, int a2, int a3, int a4)
{
  return sub_43D550((int)this, *(this + 106), 16, a2, a3, a4);
}


//======================================================================
// sub_43D660
// entry 0043d660  size 45  status ok
//======================================================================

int __thiscall sub_43D660(int *this, int a2, int a3, int a4)
{
  return sub_43D550((int)this, *(this + 107), 21, a2, a3, a4);
}


//======================================================================
// sub_43D690
// entry 0043d690  size 45  status ok
//======================================================================

int __thiscall sub_43D690(int *this, int a2, int a3, int a4)
{
  return sub_43D550((int)this, *(this + 110), 26, a2, a3, a4);
}


//======================================================================
// sub_43D6C0
// entry 0043d6c0  size 112  status ok
//======================================================================

int __thiscall sub_43D6C0(int this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp-8h] [ebp-Ch]

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 1;
    v4 = *(_DWORD *)(this + 476);
    v3 = sub_43D9B0(a2);
    sub_43F1B0(*(_DWORD *)(this + 380), v3, v4, -1);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 31, 0);
  }
  return result;
}


//======================================================================
// sub_43D730
// entry 0043d730  size 99  status ok
//======================================================================

int __thiscall sub_43D730(int this)
{
  int result; // eax

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 1;
    sub_43F1B0(*(_DWORD *)(this + 380), *(_DWORD *)(this + 480), -1);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 34, 0);
  }
  return result;
}


//======================================================================
// sub_43D7A0
// entry 0043d7a0  size 391  status ok
//======================================================================

int __thiscall sub_43D7A0(int this, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-18h]
  int v7; // [esp+18h] [ebp-Ch]
  int v8; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 1;
    v7 = a2;
    v8 = 10000 * *(_DWORD *)(this + 388);
    for ( i = 0; i < 3; ++i )
    {
      v6[i] = 0;
      if ( i )
      {
        if ( i == 1 )
        {
          v7 = a3;
        }
        else if ( i == 2 )
        {
          v7 = a4;
        }
      }
      else
      {
        v7 = a2;
      }
      switch ( v7 )
      {
        case 0:
          v6[i] = v8 + 150098;
          break;
        case 1:
          v6[i] = v8 + 150097;
          break;
        case 2:
          v6[i] = v8 + 150096;
          break;
        case 3:
          v6[i] = v8 + 150095;
          break;
        case 4:
          v6[i] = v8 + 150094;
          break;
        default:
          sub_5E9F20((char)"0", "..\\Casino\\horseracingannouncer.cpp", 376);
          break;
      }
    }
    sub_43F1B0(
      *(_DWORD *)(this + 380),
      v6[0],
      *(_DWORD *)(this + 484),
      v6[1],
      *(_DWORD *)(this + 488),
      v6[2],
      *(_DWORD *)(this + 492),
      -1);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 36, 0);
  }
  return result;
}


//======================================================================
// sub_43D940
// entry 0043d940  size 110  status ok
//======================================================================

int __thiscall sub_43D940(int this)
{
  int result; // eax

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(this + 392) = 1;
    *(_BYTE *)(dword_7906F0 + 604) = 1;
    sub_43F1B0(*(_DWORD *)(this + 380), *(_DWORD *)(this + 468), -1);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 43, 0);
  }
  return result;
}


//======================================================================
// sub_43D9B0
// entry 0043d9b0  size 121  status ok
//======================================================================

int __thiscall sub_43D9B0(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 0:
      result = *(this + 103);
      break;
    case 1:
      result = *(this + 102);
      break;
    case 2:
      result = *(this + 101);
      break;
    case 3:
      result = *(this + 100);
      break;
    case 4:
      result = *(this + 99);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\horseracingannouncer.cpp", 422);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_43DA40
// entry 0043da40  size 69  status ok
//======================================================================

int __thiscall sub_43DA40(_DWORD *this)
{
  if ( sub_62FBF0(2) )
    *(this + 97) = 1;
  else
    *(this + 97) = 0;
  sub_43DBF0(this);
  return sub_43DEE0(this);
}


//======================================================================
// sub_43DA90
// entry 0043da90  size 349  status ok
//======================================================================

_DWORD *__thiscall sub_43DA90(_DWORD *this)
{
  *(this + 99) = 0;
  *(this + 100) = 0;
  *(this + 101) = 0;
  *(this + 102) = 0;
  *(this + 103) = 0;
  *(this + 104) = 0;
  *(this + 105) = 0;
  *(this + 106) = 0;
  *(this + 107) = 0;
  *(this + 108) = 0;
  *(this + 109) = 0;
  *(this + 110) = 0;
  *(this + 111) = 0;
  *(this + 112) = 0;
  *(this + 113) = 0;
  *(this + 114) = 0;
  *(this + 115) = 0;
  *(this + 116) = 0;
  *(this + 117) = 0;
  *(this + 118) = 0;
  *(this + 119) = 0;
  *(this + 120) = 0;
  *(this + 121) = 0;
  *(this + 122) = 0;
  *(this + 123) = 0;
  *(this + 124) = 0;
  return this;
}


//======================================================================
// sub_43DBF0
// entry 0043dbf0  size 737  status ok
//======================================================================

int __thiscall sub_43DBF0(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  sub_43DA90(this);
  v3 = 10000 * *(this + 97);
  *(this + 99) = v3 + dword_713620;
  *(this + 100) = v3 + dword_71362C;
  *(this + 101) = v3 + dword_713638;
  *(this + 102) = v3 + dword_713644;
  *(this + 103) = v3 + dword_713650;
  *(this + 104) = v3 + dword_71365C[sub_62FBF0(3)];
  *(this + 105) = v3 + dword_713668[sub_62FBF0(3)];
  *(this + 106) = v3 + dword_713674[sub_62FBF0(3)];
  *(this + 107) = v3 + dword_713680[sub_62FBF0(3)];
  *(this + 108) = v3 + dword_71368C[sub_62FBF0(3)];
  *(this + 109) = v3 + dword_713698[sub_62FBF0(3)];
  *(this + 110) = v3 + dword_7136A4[sub_62FBF0(3)];
  *(this + 111) = v3 + dword_7136B0[sub_62FBF0(4)];
  *(this + 112) = v3 + dword_7136C0[sub_62FBF0(4)];
  *(this + 113) = v3 + dword_7136D0[sub_62FBF0(4)];
  *(this + 114) = v3 + dword_7136E0[sub_62FBF0(4)];
  *(this + 115) = v3 + dword_7136F0[sub_62FBF0(4)];
  *(this + 116) = v3 + dword_713700[sub_62FBF0(5)];
  *(this + 117) = v3 + dword_713714[sub_62FBF0(5)];
  *(this + 118) = v3 + dword_713728[sub_62FBF0(5)];
  *(this + 119) = v3 + dword_71373C[sub_62FBF0(5)];
  *(this + 120) = v3 + dword_713750[sub_62FBF0(3)];
  *(this + 121) = v3 + dword_71375C[sub_62FBF0(5)];
  *(this + 122) = v3 + dword_713770[sub_62FBF0(5)];
  *(this + 123) = v3 + dword_713784[sub_62FBF0(5)];
  result = sub_62FBF0(5);
  *(this + 124) = v3 + dword_713798[result];
  return result;
}


//======================================================================
// sub_43DEE0
// entry 0043dee0  size 981  status ok
//======================================================================

int __thiscall sub_43DEE0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = sub_43D350((_BYTE *)this);
  if ( (_BYTE)result )
  {
    sub_6044B0(541542223, *(_DWORD *)(this + 396), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 400), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 404), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 408), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 412), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 416), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 420), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 424), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 428), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 432), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 436), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 440), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 444), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 448), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 452), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 456), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 460), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 464), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 468), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 472), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 476), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 480), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 484), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 488), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 492), 0);
    sub_6044B0(541542223, *(_DWORD *)(this + 496), 0);
    v3 = 10000 * *(_DWORD *)(this + 388);
    sub_6044B0(541542223, v3 + 150094, 0);
    sub_6044B0(541542223, v3 + 150095, 0);
    sub_6044B0(541542223, v3 + 150096, 0);
    sub_6044B0(541542223, v3 + 150097, 0);
    return sub_6044B0(541542223, v3 + 150098, 0);
  }
  return result;
}


//======================================================================
// sub_43E2C0
// entry 0043e2c0  size 75  status ok
//======================================================================

_DWORD *__thiscall sub_43E2C0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5FC0D0(0);
  *this = &HorseAnnouncerScript::`vftable';
  for ( i = 0; i < 10; ++i )
    *(this + i + 8) = 0;
  return this;
}


//======================================================================
// sub_43E310
// entry 0043e310  size 3550  status ok
//======================================================================

int __thiscall sub_43E310(int *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+34h] [ebp-38h]

  result = unknown_libname_843(this);
  switch ( result )
  {
    case 0:
      return result;
    case 1:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 2);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 0,
                 5,
                 1,
                 1.0,
                 0.5,
                 0);
      break;
    case 2:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 3);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 3:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 4);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        *(this + 10),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        *(this + 11),
        this,
        1,
        5,
        1,
        1.0,
        0.5,
        dword_7906EC + 140);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7906EC + 4) + 4))(*(_DWORD *)(dword_7906EC + 4), 3);
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7906EC + 4) + 28))(
                 *(_DWORD *)(dword_7906EC + 4),
                 0);
      break;
    case 4:
      result = *(this + 3);
      *(_BYTE *)(result + 392) = 0;
      break;
    case 5:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 6);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 6:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 7);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 7:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 8);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 10),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 8:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 9);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 11),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 9:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 10);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 12),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 10:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 11);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 13),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 11:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 12);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 14),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 12:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 13);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 15),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 13:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 14);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 16),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 14:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 15);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 17),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 15:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    case 16:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 17);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 17:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 18);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 18:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 19);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 10),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 19:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 20);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 11),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 20:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    case 21:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 22);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 22:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 23);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 23:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 24);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 10),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 24:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 25);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 11),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 25:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    case 26:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 27);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 27:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 28);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 28:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 29);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 10),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 29:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 30);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 11),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 30:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    case 31:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 32);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 32:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 33);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 33:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    case 34:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 35);
      v3 = sub_5FB300(2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 35:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      v2 = sub_5FB300(2);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 204))(v2, v2);
      break;
    case 36:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 37);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 37:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 38);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 9),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 38:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 39);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 10),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 39:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 40);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 11),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 40:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 41);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 12),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 41:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 42);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 13),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 140);
      break;
    case 42:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    case 43:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 44);
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int *, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 *(this + 8),
                 this,
                 1,
                 5,
                 1,
                 1.0,
                 0.5,
                 dword_7906EC + 136);
      break;
    case 44:
      *(_BYTE *)(*(this + 3) + 392) = 0;
      result = (int)this;
      break;
    default:
      result = sub_5E9F20((char)"0", "..\\Casino\\horseracingannouncer.cpp", 816);
      break;
  }
  return result;
}


//======================================================================
// sub_43F1B0
// entry 0043f1b0  size 130  status ok
//======================================================================

va_list sub_43F1B0(int a1, va_list a2, ...)
{
  va_list result; // eax
  int i; // [esp+0h] [ebp-10h]
  va_list v4; // [esp+4h] [ebp-Ch]
  va_list v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]
  va_list va; // [esp+20h] [ebp+10h] BYREF

  va_start(va, a2);
  for ( i = 0; i < 10; ++i )
    *(_DWORD *)(a1 + 4 * i + 32) = 0;
  v6 = 0;
  result = a2;
  v4 = a2;
  va_copy(v5, va);
  while ( v4 != (va_list)-1 && v6 < 10 )
  {
    *(_DWORD *)(a1 + 4 * v6++ + 32) = v4;
    result = v5 + 4;
    v5 += 4;
    v4 = (va_list)*((_DWORD *)v5 - 1);
  }
  return result;
}


//======================================================================
// sub_43F270
// entry 0043f270  size 439  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_43F270(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]
  int m; // [esp+4h] [ebp-4h]
  int n; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &HorseRacingDisplay::`vftable';
  *((_DWORD *)this + 6) = 0;
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 8) = 0;
    *((_DWORD *)this + i + 28) = 0;
    *((_DWORD *)this + i + 33) = 0;
    *((_DWORD *)this + i + 50) = 0;
  }
  for ( j = 0; j < 15; ++j )
    *((_DWORD *)this + j + 13) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  for ( k = 0; k < 5; ++k )
  {
    *((_DWORD *)this + k + 45) = 0;
    *((_DWORD *)this + k + 55) = 0;
    *((_DWORD *)this + k + 60) = 0;
  }
  for ( m = 0; m < 3; ++m )
    *((_DWORD *)this + m + 65) = 0;
  *((_DWORD *)this + 68) = 0;
  for ( n = 0; n < 2; ++n )
    *((_DWORD *)this + n + 69) = 0;
  return this;
}


//======================================================================
// sub_43F430
// entry 0043f430  size 1482  status ok
//======================================================================

void __thiscall sub_43F430(CNoTrackObject *this)
{
  int i; // [esp+ECh] [ebp-10h]
  int j; // [esp+ECh] [ebp-10h]
  int k; // [esp+ECh] [ebp-10h]
  int m; // [esp+ECh] [ebp-10h]
  int n; // [esp+ECh] [ebp-10h]

  *(_DWORD *)this = &HorseRacingDisplay::`vftable';
  if ( *((_DWORD *)this + 6) )
    (***((void (__thiscall ****)(_DWORD, int))this + 6))(*((_DWORD *)this + 6), 1);
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 8) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 8))(*((_DWORD *)this + i + 8), 1);
    if ( *((_DWORD *)this + i + 28) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 28))(*((_DWORD *)this + i + 28), 1);
    if ( *((_DWORD *)this + i + 33) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 33))(*((_DWORD *)this + i + 33), 1);
    if ( *((_DWORD *)this + i + 50) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 50))(*((_DWORD *)this + i + 50), 1);
  }
  for ( j = 0; j < 15; ++j )
  {
    if ( *((_DWORD *)this + j + 13) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 13))(*((_DWORD *)this + j + 13), 1);
  }
  if ( *((_DWORD *)this + 38) )
    (***((void (__thiscall ****)(_DWORD, int))this + 38))(*((_DWORD *)this + 38), 1);
  if ( *((_DWORD *)this + 39) )
    (***((void (__thiscall ****)(_DWORD, int))this + 39))(*((_DWORD *)this + 39), 1);
  if ( *((_DWORD *)this + 40) )
    (***((void (__thiscall ****)(_DWORD, int))this + 40))(*((_DWORD *)this + 40), 1);
  if ( *((_DWORD *)this + 41) )
    (***((void (__thiscall ****)(_DWORD, int))this + 41))(*((_DWORD *)this + 41), 1);
  if ( *((_DWORD *)this + 42) )
    (***((void (__thiscall ****)(_DWORD, int))this + 42))(*((_DWORD *)this + 42), 1);
  if ( *((_DWORD *)this + 43) )
    (***((void (__thiscall ****)(_DWORD, int))this + 43))(*((_DWORD *)this + 43), 1);
  for ( k = 0; k < 5; ++k )
  {
    if ( *((_DWORD *)this + k + 45) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 45))(*((_DWORD *)this + k + 45), 1);
    if ( *((_DWORD *)this + k + 55) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 55))(*((_DWORD *)this + k + 55), 1);
    if ( *((_DWORD *)this + k + 60) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 60))(*((_DWORD *)this + k + 60), 1);
  }
  for ( m = 0; m < 3; ++m )
  {
    if ( *((_DWORD *)this + m + 65) )
      (***((void (__thiscall ****)(_DWORD, int))this + m + 65))(*((_DWORD *)this + m + 65), 1);
  }
  if ( *((_DWORD *)this + 68) )
    (***((void (__thiscall ****)(_DWORD, int))this + 68))(*((_DWORD *)this + 68), 1);
  for ( n = 0; n < 2; ++n )
  {
    if ( *((_DWORD *)this + n + 69) )
      (***((void (__thiscall ****)(_DWORD, int))this + n + 69))(*((_DWORD *)this + n + 69), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_43FA00
// entry 0043fa00  size 168  status ok
//======================================================================

int __thiscall sub_43FA00(_DWORD *this)
{
  int v1; // eax
  _DWORD *v3; // [esp+4h] [ebp-1Ch]
  _DWORD *v5; // [esp+Ch] [ebp-14h]

  v1 = sub_630F40("SID_HORSERACING");
  sub_5F38B0(v1);
  if ( !*(this + 6) )
  {
    v5 = operator new(0x1F4u);
    if ( v5 )
      v3 = sub_43D170(v5);
    else
      v3 = 0;
    *(this + 6) = v3;
  }
  return sub_440020(this);
}


//======================================================================
// sub_43FAB0
// entry 0043fab0  size 184  status ok
//======================================================================

int __stdcall sub_43FAB0(int a1, int a2)
{
  _DWORD v3[20]; // [esp+4h] [ebp-50h]

  v3[0] = 120004;
  v3[1] = 120005;
  v3[2] = 120006;
  v3[3] = 120019;
  v3[4] = 120016;
  v3[5] = 120017;
  v3[6] = 120018;
  v3[7] = 120020;
  v3[8] = 120025;
  v3[9] = 120026;
  v3[10] = 120027;
  v3[11] = 120032;
  v3[12] = 120033;
  v3[13] = 120034;
  v3[14] = 120035;
  v3[15] = 120036;
  v3[16] = 120037;
  v3[17] = 120038;
  v3[18] = 120039;
  v3[19] = 120040;
  return sub_5EAF00(v3[4 * a1 + a2]);
}


//======================================================================
// sub_43FB70
// entry 0043fb70  size 254  status ok
//======================================================================

int __thiscall sub_43FB70(_DWORD **this, int a2, int a3)
{
  int result; // eax

  result = a3;
  switch ( a3 )
  {
    case 0:
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + a2 + 1) + 176))(*(this + a2 + 1), 0);
      break;
    case 1:
      result = (*(int (__thiscall **)(_DWORD, int))(**(this + a2 + 1) + 176))(
                 *(this + a2 + 1),
                 *(_DWORD *)(dword_7906F0 + 120 * a2 + 72) - 45);
      break;
    case 2:
      result = (*(int (__thiscall **)(_DWORD, int))(**(this + a2 + 1) + 176))(
                 *(this + a2 + 1),
                 *(_DWORD *)(dword_7906F0 + 120 * a2 + 72) - 105);
      break;
    case 3:
      result = (*(int (__thiscall **)(_DWORD, int))(**(this + a2 + 1) + 176))(
                 *(this + a2 + 1),
                 *(_DWORD *)(dword_7906F0 + 120 * a2 + 72) - 135);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_43FC80
// entry 0043fc80  size 478  status ok
//======================================================================

int __thiscall sub_43FC80(_DWORD **this, int a2)
{
  int v2; // eax
  int v5; // [esp+Ch] [ebp-24h]
  int v6; // [esp+10h] [ebp-20h]
  __int64 v7; // [esp+14h] [ebp-1Ch]
  int v8; // [esp+1Ch] [ebp-14h]
  char Buffer[12]; // [esp+20h] [ebp-10h] BYREF

  v2 = sub_445A00(a2);
  v7 = sub_64C8A0(v2, 0);
  v6 = *(_DWORD *)(dword_7906F0 + 120 * a2 + 68);
  v8 = *(_DWORD *)(dword_7906F0 + 120 * a2 + 4 + 8 * v6 + 76);
  v5 = *(_DWORD *)(dword_7906F0 + 120 * a2 + 4 + 8 * v6 + 80);
  if ( v6 == -1 )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + a2 + 28) + 112))(*(this + a2 + 28));
    (*(void (__thiscall **)(_DWORD))(**(this + a2 + 33) + 112))(*(this + a2 + 33));
  }
  else
  {
    sprintf(Buffer, "%d - %d", v8, v5);
    (*(void (__thiscall **)(_DWORD, char *))(**(this + a2 + 28) + 180))(*(this + a2 + 28), Buffer);
    (*(void (__thiscall **)(_DWORD))(**(this + a2 + 28) + 116))(*(this + a2 + 28));
    LODWORD(v7) = v8 * (int)v7 / v5;
    if ( (_DWORD)v7 )
    {
      sub_64C8D0(v7, SHIDWORD(v7), Buffer, 1, 1, 1);
      (*(void (__thiscall **)(_DWORD, char *))(**(this + a2 + 33) + 180))(*(this + a2 + 33), Buffer);
      (*(void (__thiscall **)(_DWORD))(**(this + a2 + 33) + 116))(*(this + a2 + 33));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(this + a2 + 33) + 112))(*(this + a2 + 33));
    }
  }
  return sub_43FE60(this);
}


//======================================================================
// sub_43FE60
// entry 0043fe60  size 439  status ok
//======================================================================

int __thiscall sub_43FE60(_DWORD **this)
{
  int v3; // [esp+4h] [ebp-48h]
  int v4; // [esp+Ch] [ebp-40h]
  __int64 v5; // [esp+20h] [ebp-2Ch]
  char Destination[28]; // [esp+28h] [ebp-24h] BYREF
  int i; // [esp+48h] [ebp-4h]

  v5 = sub_64C8A0(0, 0);
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_DWORD *)(dword_7906F0 + 120 * i + 68) == -1 || !sub_445A00(i) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + i + 8) + 112))(*(this + i + 8));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(this + i + 8) + 116))(*(this + i + 8));
      v4 = *(_DWORD *)(dword_7906F0 + 120 * i + 4 + 8 * *(_DWORD *)(dword_7906F0 + 120 * i + 68) + 76);
      v3 = *(_DWORD *)(dword_7906F0 + 120 * i + 4 + 8 * *(_DWORD *)(dword_7906F0 + 120 * i + 68) + 80);
      LODWORD(v5) = v5 + v4 * sub_445A00(i) / v3;
    }
  }
  if ( !(_DWORD)v5 )
    return (*(int (__thiscall **)(_DWORD))(**(this + 39) + 112))(*(this + 39));
  sub_64C8D0(v5, SHIDWORD(v5), Destination, 1, 1, 1);
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 39) + 180))(*(this + 39), Destination);
  return (*(int (__thiscall **)(_DWORD))(**(this + 39) + 116))(*(this + 39));
}


//======================================================================
// sub_440020
// entry 00440020  size 67  status ok
//======================================================================

int __thiscall sub_440020(void *this)
{
  int v3; // [esp+0h] [ebp-4h]
  int v4; // [esp+0h] [ebp-4h]

  sub_4404D0(this);
  sub_5F1AD0(120010);
  sub_440700(this);
  sub_4412F0(v3);
  sub_440070(v4);
  return sub_440260(v4);
}


//======================================================================
// sub_440070
// entry 00440070  size 400  status ok
//======================================================================

int __thiscall sub_440070(_DWORD **this)
{
  int result; // eax
  int i; // [esp+10h] [ebp-1Ch]
  int v4; // [esp+14h] [ebp-18h]
  char Buffer[12]; // [esp+18h] [ebp-14h] BYREF
  int j; // [esp+28h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      sprintf(
        Buffer,
        "%d - %d ",
        *(_DWORD *)(dword_7906F0 + 120 * i + 4 + 8 * j + 76),
        *(_DWORD *)(dword_7906F0 + 120 * i + 4 + 8 * j + 80));
      v4 = *(_DWORD *)(dword_7906F0 + 120 * i + 4 + 8 * j + 80) != 2 ? 0 : 3;
      if ( *(this + 3 * i + j + 13) )
      {
        (*(void (__thiscall **)(_DWORD, char *))(**(this + 3 * i + j + 13) + 180))(*(this + 3 * i + j + 13), Buffer);
        (*(void (__thiscall **)(_DWORD, int))(**(this + 3 * i + j + 13) + 72))(
          *(this + 3 * i + j + 13),
          dword_713818[6 * i + 2 * j] + v4 - 17);
        (*(void (__thiscall **)(_DWORD))(**(this + 3 * i + j + 13) + 116))(*(this + 3 * i + j + 13));
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_440200
// entry 00440200  size 90  status ok
//======================================================================

void sub_440200()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_5FB810(i + 20) )
      sub_5FB8F0(i + 20, &Source);
  }
}


//======================================================================
// sub_440260
// entry 00440260  size 171  status ok
//======================================================================

int __thiscall sub_440260(_DWORD **this)
{
  int v1; // eax
  int result; // eax
  __int64 v4; // [esp+Ch] [ebp-1Ch]
  char Destination[12]; // [esp+14h] [ebp-14h] BYREF
  int i; // [esp+24h] [ebp-4h]

  v1 = sub_445A90(dword_7906F0);
  v4 = sub_64C8A0(v1, 0);
  sub_64C8D0(v4, SHIDWORD(v4), Destination, 1, 1, 1);
  result = (*(int (__thiscall **)(_DWORD, char *))(**(this + 38) + 180))(*(this + 38), Destination);
  for ( i = 0; i < 5; ++i )
    result = sub_43FC80(this, i);
  return result;
}


//======================================================================
// sub_440310
// entry 00440310  size 375  status ok
//======================================================================

int __thiscall sub_440310(_DWORD *this)
{
  const char *v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // [esp+0h] [ebp-2Ch]
  int v5; // [esp+4h] [ebp-28h]
  int j; // [esp+14h] [ebp-18h]
  int i; // [esp+18h] [ebp-14h]
  unsigned __int8 v9; // [esp+1Fh] [ebp-Dh]

  v9 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v1 = (const char *)sub_5FB8B0(i + 20);
    if ( strcmp(v1, &Source) )
    {
      for ( j = 0; j < 3; ++j )
      {
        v2 = sub_5FB3A0(i);
        if ( sub_606570(v2, v4) == 3 * i + j + 5 )
          break;
      }
      if ( j == 3 && !v9 )
        v9 = 1;
    }
  }
  result = v9;
  if ( v9 )
  {
    if ( !*(_DWORD *)(*(this + 40) + 384) )
    {
      if ( operator new(0x28u) )
        v5 = sub_601110(0, 0, 1, 0, 0);
      else
        v5 = 0;
      return sub_5F5D50(v5);
    }
  }
  else
  {
    sub_5F5D50(0);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 40) + 112))(*(this + 40));
  }
  return result;
}


//======================================================================
// sub_440490
// entry 00440490  size 51  status ok
//======================================================================

int __thiscall sub_440490(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    sub_43FC80(this, i);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_4404D0
// entry 004404d0  size 547  status ok
//======================================================================

int __thiscall sub_4404D0(_DWORD **this)
{
  int v1; // eax
  int result; // eax
  int v3; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]
  int j; // [esp+Ch] [ebp-4h]
  int k; // [esp+Ch] [ebp-4h]

  if ( sub_5FB300(4) )
  {
    v3 = sub_5FB300(4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 112))(v3);
  }
  if ( sub_5FB300(3) )
  {
    v1 = sub_5FB300(3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 112))(v1, v1);
  }
  result = (int)this;
  if ( *(this + 68) )
  {
    sub_5F5D50(0);
    result = (*(int (__thiscall **)(_DWORD))(**(this + 68) + 112))(*(this + 68));
  }
  for ( i = 0; i < 3; ++i )
  {
    result = (int)this;
    if ( *(this + i + 65) )
      result = (*(int (__thiscall **)(_DWORD))(**(this + i + 65) + 112))(*(this + i + 65));
  }
  for ( j = 0; j < 5; ++j )
  {
    if ( *(this + j + 45) )
      (*(void (__thiscall **)(_DWORD))(**(this + j + 45) + 112))(*(this + j + 45));
    if ( *(this + j + 50) )
      (*(void (__thiscall **)(_DWORD))(**(this + j + 50) + 112))(*(this + j + 50));
    if ( *(this + j + 55) )
      (*(void (__thiscall **)(_DWORD))(**(this + j + 55) + 112))(*(this + j + 55));
    if ( *(this + j + 60) )
      (*(void (__thiscall **)(_DWORD))(**(this + j + 60) + 112))(*(this + j + 60));
    result = j + 1;
  }
  for ( k = 0; k < 2; ++k )
  {
    result = (int)this;
    if ( *(this + k + 69) )
      result = (*(int (__thiscall **)(_DWORD))(**(this + k + 69) + 112))(*(this + k + 69));
  }
  return result;
}


//======================================================================
// sub_440700
// entry 00440700  size 3056  status ok
//======================================================================

int __thiscall sub_440700(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+4h] [ebp-178h]
  int v10; // [esp+8h] [ebp-174h]
  int v11; // [esp+Ch] [ebp-170h]
  int v12; // [esp+10h] [ebp-16Ch]
  int v13; // [esp+14h] [ebp-168h]
  int v14; // [esp+18h] [ebp-164h]
  int v15; // [esp+1Ch] [ebp-160h]
  int v16; // [esp+20h] [ebp-15Ch]
  int v17; // [esp+24h] [ebp-158h]
  int v18; // [esp+28h] [ebp-154h]
  int v19; // [esp+2Ch] [ebp-150h]
  _AFX_OLE_STATE *v20; // [esp+30h] [ebp-14Ch]
  int v21; // [esp+34h] [ebp-148h]
  int v22; // [esp+38h] [ebp-144h]
  void *v24; // [esp+44h] [ebp-138h]
  void *v25; // [esp+4Ch] [ebp-130h]
  void *v26; // [esp+54h] [ebp-128h]
  void *v27; // [esp+5Ch] [ebp-120h]
  void *v28; // [esp+64h] [ebp-118h]
  void *v29; // [esp+6Ch] [ebp-110h]
  void *v30; // [esp+74h] [ebp-108h]
  void *v31; // [esp+7Ch] [ebp-100h]
  void *v32; // [esp+84h] [ebp-F8h]
  _AFX_OLE_STATE *v33; // [esp+8Ch] [ebp-F0h]
  int j; // [esp+94h] [ebp-E8h]
  int v35; // [esp+98h] [ebp-E4h]
  _DWORD v36[30]; // [esp+9Ch] [ebp-E0h]
  _DWORD v37[5]; // [esp+114h] [ebp-68h]
  _DWORD v38[5]; // [esp+128h] [ebp-54h]
  _DWORD v39[3]; // [esp+13Ch] [ebp-40h]
  _DWORD v40[5]; // [esp+148h] [ebp-34h]
  int i; // [esp+15Ch] [ebp-20h]
  int v42; // [esp+160h] [ebp-1Ch]
  _DWORD v43[3]; // [esp+164h] [ebp-18h]
  int v44; // [esp+178h] [ebp-4h]

  v42 = 0;
  v39[0] = 124;
  v39[1] = 177;
  v39[2] = 233;
  v43[0] = 120009;
  v43[1] = 120007;
  v43[2] = 120021;
  v37[0] = 357;
  v37[1] = 323;
  v37[2] = 290;
  v37[3] = 256;
  v37[4] = 224;
  v35 = 302;
  v36[0] = 161;
  v36[1] = 403;
  v36[2] = 161;
  v36[3] = 490;
  v36[4] = 161;
  v36[5] = 302;
  v36[6] = 145;
  v36[7] = 403;
  v36[8] = 145;
  v36[9] = 490;
  v36[10] = 145;
  v36[11] = 302;
  v36[12] = 129;
  v36[13] = 403;
  v36[14] = 129;
  v36[15] = 490;
  v36[16] = 129;
  v36[17] = 302;
  v36[18] = 113;
  v36[19] = 403;
  v36[20] = 113;
  v36[21] = 490;
  v36[22] = 113;
  v36[23] = 302;
  v36[24] = 97;
  v36[25] = 403;
  v36[26] = 97;
  v36[27] = 490;
  v36[28] = 97;
  v38[0] = 372;
  v38[1] = 339;
  v38[2] = 305;
  v38[3] = 271;
  v38[4] = 238;
  v40[0] = 154;
  v40[1] = 138;
  v40[2] = 122;
  v40[3] = 106;
  v40[4] = 90;
  if ( !sub_5FB300(0) )
    sub_5F9DE0(0, 0, 120012, 480, 439, 1, &Source, -1, -1, -1, -1, 0);
  v22 = sub_5FB300(0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 116))(v22);
  if ( !sub_5FB300(1) )
    sub_5F9DE0(0, 1, 120011, 355, 439, 1, &Source, -1, -1, -1, -1, 0);
  v21 = sub_5FB300(1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 116))(v21);
  for ( i = 0; i < 5; ++i )
  {
    if ( !sub_5FB810(i + 20) )
    {
      v33 = (_AFX_OLE_STATE *)operator new(0x1FCu);
      v44 = 0;
      if ( v33 )
        v20 = _AFX_OLE_STATE::_AFX_OLE_STATE(v33);
      else
        v20 = 0;
      v44 = -1;
      sub_5FA6A0(v20, i + 20, 120024, 18, v37[i], &Source, 25, 90, 25, 5, 4, 2, 4, 48);
    }
    *(_BYTE *)(sub_5FB810(i + 20) + 157) = 1;
    if ( i != 4 )
    {
      v1 = sub_5FB810(i + 20);
      sub_60C330(v1);
    }
    v19 = sub_5FB810(i + 20);
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 116))(v19);
  }
  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 3; ++j )
    {
      if ( !sub_5FB3F0(v42 + 5, i) )
        sub_5F9FF0(0, 0, v42 + 5, i, v43[j], v39[j], 33 * (4 - i) + 216, 1, &Source, 0, -1, -1, -1, 20, 0);
      sub_5FB3F0(v42 + 5, i);
      sub_5FFF90(0, 1, 2, 0, 3, 3, 3, 3);
      v18 = sub_5FB3F0(v42 + 5, i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
      ++v42;
    }
  }
  for ( i = 0; i < 15; ++i )
  {
    if ( !*(this + i + 13) )
    {
      v32 = operator new(0x1D0u);
      v44 = 1;
      if ( v32 )
      {
        sub_5EC5A0(v32);
        v17 = v2;
      }
      else
      {
        v17 = 0;
      }
      v44 = -1;
      *(this + i + 13) = v17;
      sub_5EC8F0(&Source, 106, 85, 15, v36[2 * i - 1] - 17, v36[2 * i], 1, 18, -1);
    }
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 28) )
    {
      v31 = operator new(0x1D0u);
      v44 = 2;
      if ( v31 )
      {
        sub_5EC5A0(v31);
        v16 = v3;
      }
      else
      {
        v16 = 0;
      }
      v44 = -1;
      *(this + i + 28) = v16;
      sub_5EC8F0(&Source, 25, 50, 15, 456, v38[i], 1, 18, -1);
    }
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 33) )
    {
      v30 = operator new(0x1D0u);
      v44 = 3;
      if ( v30 )
      {
        sub_5EC5A0(v30);
        v15 = v4;
      }
      else
      {
        v15 = 0;
      }
      v44 = -1;
      *(this + i + 33) = v15;
      sub_5EC8F0(&Source, 25, 100, 15, 520, v38[i], 2, 48, -1);
    }
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 8) )
    {
      v29 = operator new(0x178u);
      v44 = 4;
      if ( v29 )
      {
        sub_5EAAF0(v29);
        v14 = v5;
      }
      else
      {
        v14 = 0;
      }
      v44 = -1;
      *(this + i + 8) = v14;
      sub_5EAE80(120052, 30, v40[i], 2, -1);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 8) + 176))(*(this + i + 8), 4 - i);
    }
  }
  if ( !*(this + 38) )
  {
    v28 = operator new(0x1D0u);
    v44 = 5;
    if ( v28 )
    {
      sub_5EC5A0(v28);
      v13 = v6;
    }
    else
    {
      v13 = 0;
    }
    v44 = -1;
    *(this + 38) = v13;
    sub_5EC8F0(&Source, 25, 100, 15, 17, 414, 1, 48, -1);
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 38) + 116))(*(this + 38));
  if ( !*(this + 39) )
  {
    v27 = operator new(0x1D0u);
    v44 = 6;
    if ( v27 )
    {
      sub_5EC5A0(v27);
      v12 = v7;
    }
    else
    {
      v12 = 0;
    }
    v44 = -1;
    *(this + 39) = v12;
    sub_5EC8F0(&Source, 25, 100, 15, 520, 414, 1, 48, -1);
  }
  if ( !*(this + 40) )
  {
    v26 = operator new(0x184u);
    v44 = 7;
    if ( v26 )
      v11 = sub_5F5BF0(v26);
    else
      v11 = 0;
    v44 = -1;
    *(this + 40) = v11;
    sub_5EAE80(120048, 128, 211, 2, -1);
    *(_DWORD *)(*(this + 40) + 376) = 20;
  }
  if ( !*(this + 41) )
  {
    v25 = operator new(0x184u);
    v44 = 8;
    if ( v25 )
      v10 = sub_5F5BF0(v25);
    else
      v10 = 0;
    v44 = -1;
    *(this + 41) = v10;
    sub_5EAE80(120058, 2, 0, 2, -1);
  }
  *(_DWORD *)(*(this + 41) + 376) = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 41) + 116))(*(this + 41));
  v24 = operator new(0x1Cu);
  v44 = 9;
  if ( v24 )
    v9 = sub_600A70(0);
  else
    v9 = 0;
  v44 = -1;
  return sub_5F5D50(v9);
}


//======================================================================
// sub_4412F0
// entry 004412f0  size 777  status ok
//======================================================================

_DWORD *__thiscall sub_4412F0(_DWORD *this)
{
  int v1; // eax
  _DWORD *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-44h]
  int v6; // [esp+8h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-3Ch]
  int v8; // [esp+10h] [ebp-38h]
  void *v10; // [esp+18h] [ebp-30h]
  void *v11; // [esp+20h] [ebp-28h]
  void *v12; // [esp+28h] [ebp-20h]
  void *v13; // [esp+30h] [ebp-18h]
  int i; // [esp+38h] [ebp-10h]

  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 1) )
    {
      v13 = operator new(0x184u);
      if ( v13 )
        v8 = sub_5F5BF0(v13);
      else
        v8 = 0;
      *(this + i + 1) = v8;
      sub_43FAB0(i, 0);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 64))(*(this + i + 1));
      CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 1), (struct CPaneDivider *)i);
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 112))(*(this + i + 1));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 1) + 108))(*(this + i + 1), 10 - i);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 1) + 176))(*(this + i + 1), 0);
    if ( !*(this + i + 45) )
    {
      v12 = operator new(0x178u);
      if ( v12 )
      {
        sub_5EAAF0(v12);
        v7 = v1;
      }
      else
      {
        v7 = 0;
      }
      *(this + i + 45) = v7;
      sub_5EAE80(120057, 0, 0, i + 26, -1);
    }
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 45) + 176))(*(this + i + 45), 8 - 2 * i);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 45) + 112))(*(this + i + 45));
  }
  result = this;
  if ( !*(this + 42) )
  {
    v11 = operator new(0x178u);
    if ( v11 )
    {
      sub_5EAAF0(v11);
      v6 = v3;
    }
    else
    {
      v6 = 0;
    }
    *(this + 42) = v6;
    result = (_DWORD *)sub_5EAE80(120041, 0, 0, 25, -1);
  }
  if ( !*(this + 43) )
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    *(this + 43) = v5;
    return (_DWORD *)sub_5EAE80(120047, 0, 0, 25, -1);
  }
  return result;
}


//======================================================================
// sub_441600
// entry 00441600  size 75  status ok
//======================================================================

int __thiscall sub_441600(_DWORD **this)
{
  if ( *(this + 43) )
    (*(void (__thiscall **)(_DWORD))(**(this + 43) + 116))(*(this + 43));
  sub_445EC0(dword_7906F0);
  sub_441650(this);
  return sub_441A90(this);
}


//======================================================================
// sub_441650
// entry 00441650  size 1078  status ok
//======================================================================

void __thiscall sub_441650(_DWORD **this)
{
  int v1; // [esp+0h] [ebp-68h]
  int v2; // [esp+4h] [ebp-64h]
  int v3; // [esp+8h] [ebp-60h]
  int v4; // [esp+Ch] [ebp-5Ch]
  int v5; // [esp+10h] [ebp-58h]
  int v6; // [esp+14h] [ebp-54h]
  int v7; // [esp+18h] [ebp-50h]
  int v8; // [esp+1Ch] [ebp-4Ch]
  int i; // [esp+64h] [ebp-4h]
  int j; // [esp+64h] [ebp-4h]
  int k; // [esp+64h] [ebp-4h]
  int m; // [esp+64h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_5FB300(i) )
      sub_5FBCB0(0, i);
  }
  if ( *(this + 38) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 38) + 112))(*(this + 38));
    if ( *(this + 38) )
      v8 = (*(int (__thiscall **)(_DWORD, int))**(this + 38))(*(this + 38), 1);
    else
      v8 = 0;
    *(this + 38) = 0;
  }
  if ( *(this + 39) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 39) + 112))(*(this + 39));
    if ( *(this + 39) )
      v7 = (*(int (__thiscall **)(_DWORD, int))**(this + 39))(*(this + 39), 1);
    else
      v7 = 0;
    *(this + 39) = 0;
  }
  if ( *(this + 40) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 40) + 112))(*(this + 40));
    if ( *(this + 40) )
      v6 = (*(int (__thiscall **)(_DWORD, int))**(this + 40))(*(this + 40), 1);
    else
      v6 = 0;
    *(this + 40) = 0;
  }
  if ( *(this + 41) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 41) + 112))(*(this + 41));
    if ( *(this + 41) )
      v5 = (*(int (__thiscall **)(_DWORD, int))**(this + 41))(*(this + 41), 1);
    else
      v5 = 0;
    *(this + 41) = 0;
  }
  for ( j = 0; j < 5; ++j )
  {
    if ( sub_5FB810(j + 20) )
      sub_5FBE00(0, j + 20);
    sub_5FBD10(0, j);
  }
  for ( k = 0; k < 5; ++k )
  {
    if ( *(this + k + 28) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + k + 28) + 112))(*(this + k + 28));
      if ( *(this + k + 28) )
        v4 = (*(int (__thiscall **)(_DWORD, int))**(this + k + 28))(*(this + k + 28), 1);
      else
        v4 = 0;
      *(this + k + 28) = 0;
    }
    if ( *(this + k + 33) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + k + 33) + 112))(*(this + k + 33));
      if ( *(this + k + 33) )
        v3 = (*(int (__thiscall **)(_DWORD, int))**(this + k + 33))(*(this + k + 33), 1);
      else
        v3 = 0;
      *(this + k + 33) = 0;
    }
    if ( *(this + k + 8) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + k + 8) + 112))(*(this + k + 8));
      if ( *(this + k + 8) )
        v2 = (*(int (__thiscall **)(_DWORD, int))**(this + k + 8))(*(this + k + 8), 1);
      else
        v2 = 0;
      *(this + k + 8) = 0;
    }
  }
  for ( m = 0; m < 15; ++m )
  {
    if ( *(this + m + 13) )
    {
      (*(void (__thiscall **)(_DWORD, int, int, int, int, int, int, int, int))(**(this + m + 13) + 112))(
        *(this + m + 13),
        v1,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7,
        v8);
      if ( *(this + m + 13) )
        v1 = (*(int (__thiscall **)(_DWORD, int))**(this + m + 13))(*(this + m + 13), 1);
      else
        v1 = 0;
      *(this + m + 13) = 0;
    }
  }
}


//======================================================================
// sub_441A90
// entry 00441a90  size 466  status ok
//======================================================================

int __thiscall sub_441A90(int this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-38h]
  void *v4; // [esp+Ch] [ebp-30h]
  _DWORD v5[3]; // [esp+14h] [ebp-28h]
  int i; // [esp+20h] [ebp-1Ch]
  _DWORD v7[3]; // [esp+24h] [ebp-18h]
  int v8; // [esp+38h] [ebp-4h]

  v7[0] = 120001;
  v7[1] = 120002;
  v7[2] = 120003;
  v5[0] = 120041;
  v5[1] = 120028;
  v5[2] = 120029;
  sub_5F1AD0(v7[++*(_DWORD *)(this + 176)]);
  result = this;
  if ( *(_DWORD *)(this + 168) )
  {
    sub_5EAF00(v5[*(_DWORD *)(this + 176)]);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 168) + 116))(*(_DWORD *)(this + 168));
  }
  for ( i = 0; i < 5; ++i )
  {
    result = this;
    if ( *(_DWORD *)(this + 4 * i + 4) )
      result = sub_5F5D50(0);
  }
  for ( i = 0; i < 5; ++i )
  {
    sub_43FAB0(i, *(_DWORD *)(this + 176));
    sub_43FB70((_DWORD **)this, i, *(_DWORD *)(this + 176));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 4) + 116))(*(_DWORD *)(this + 4 * i + 4));
    if ( unknown_libname_843(*(_DWORD *)(dword_7906EC + 4)) == 3 )
    {
      v4 = operator new(0x20u);
      v8 = 0;
      if ( v4 )
        v2 = sub_443A90(0);
      else
        v2 = 0;
      v8 = -1;
      sub_5F5D50(v2);
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_441C70
// entry 00441c70  size 267  status ok
//======================================================================

int __thiscall sub_441C70(int this)
{
  int result; // eax

  sub_6044B0(542523735, 101030, 0);
  sub_6044B0(542523735, 101031, 0);
  sub_6044B0(542523735, 101033, 0);
  sub_6044B0(542523735, 101032, 0);
  *(_BYTE *)(dword_7906F0 + 605) = 0;
  *(_BYTE *)(this + 28) = 0;
  sub_441600((_DWORD **)this);
  sub_43D2A0(*(_BYTE **)(this + 24));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7906EC + 4) + 4))(*(_DWORD *)(dword_7906EC + 4), 3);
  sub_43D390(*(_DWORD *)(this + 24));
  result = sub_444AC0(dword_7906F0);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             101030,
             *(_DWORD *)(dword_7906EC + 4),
             0,
             5,
             1,
             1.0,
             0.5,
             0);
  return result;
}


//======================================================================
// sub_441D80
// entry 00441d80  size 1018  status ok
//======================================================================

int __thiscall sub_441D80(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-5Ch]
  int v3; // [esp+8h] [ebp-58h]
  int k; // [esp+44h] [ebp-1Ch]
  int m; // [esp+44h] [ebp-1Ch]
  int n; // [esp+44h] [ebp-1Ch]
  int v8; // [esp+48h] [ebp-18h]
  int v9; // [esp+4Ch] [ebp-14h]
  int i; // [esp+50h] [ebp-10h]
  int j; // [esp+50h] [ebp-10h]
  int ii; // [esp+50h] [ebp-10h]

  v8 = 0;
  v9 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(_DWORD *)(*(this + i + 1) + 384) )
    {
      if ( operator new(0x20u) )
        v3 = sub_443A90(0);
      else
        v3 = 0;
      sub_5F5D50(v3);
    }
  }
  if ( ++dword_7906E8 == 10 )
  {
    sub_442180(this);
    dword_7906E8 = 0;
  }
  result = (int)this;
  v2 = *(this + 44);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v8 = 75;
    }
    else if ( v2 == 2 )
    {
      v8 = 45;
    }
  }
  else
  {
    v8 = 80;
  }
  if ( *(this + 44) == 2 )
  {
    for ( j = 0; j < 5; ++j )
    {
      if ( *(this + j + 1)
        && CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + j + 1)) == 39
        && *(_DWORD *)(dword_7906F0 + 120 * j + 108) == -1 )
      {
        if ( !*(_BYTE *)(dword_7906F0 + 612) && *(_DWORD *)(dword_7906F0 + 608) == -1 )
        {
          for ( k = 0; k < 5; ++k )
          {
            if ( j != k && CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + k + 1)) == 39 )
            {
              *(_BYTE *)(dword_7906F0 + 612) = 1;
              break;
            }
          }
          if ( *(_BYTE *)(dword_7906F0 + 612) )
          {
            for ( m = 0; m < 5; ++m )
              *(_DWORD *)(dword_7906F0 + 4 * m + 616) = *(_DWORD *)(dword_7906F0 + 120 * m + 72);
          }
        }
        if ( *(_DWORD *)(dword_7906F0 + 608) == -1 )
        {
          for ( n = 0; n < 5; ++n )
          {
            if ( j == n )
            {
              *(_DWORD *)(dword_7906F0 + 120 * n + 112) = 0;
            }
            else
            {
              *(_DWORD *)(dword_7906F0 + 120 * n + 112) = *(_DWORD *)(dword_7906F0 + 120 * j + 72)
                                                        - *(_DWORD *)(dword_7906F0 + 120 * n + 72);
              if ( *(int *)(dword_7906F0 + 120 * n + 112) < 0 )
                *(_DWORD *)(dword_7906F0 + 120 * n + 112) = 0;
            }
          }
        }
        *(_DWORD *)(dword_7906F0 + 120 * j + 108) = ++*(_DWORD *)(dword_7906F0 + 608);
      }
      if ( *(this + j + 1)
        && CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + j + 1)) == 45 )
      {
        ++v9;
      }
      result = j + 1;
    }
    if ( v9 == 5 )
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7906EC + 4) + 4))(
               *(_DWORD *)(dword_7906EC + 4),
               4);
  }
  else
  {
    for ( ii = 0; ii < 5; ++ii )
    {
      result = (int)this;
      if ( *(this + ii + 1) )
      {
        result = CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + ii + 1));
        if ( result == v8 )
          return sub_441A90((int)this);
      }
    }
  }
  return result;
}


//======================================================================
// sub_442180
// entry 00442180  size 781  status ok
//======================================================================

int __thiscall sub_442180(int this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-58h]
  int v4; // [esp+10h] [ebp-54h]
  int j; // [esp+34h] [ebp-30h]
  int k; // [esp+34h] [ebp-30h]
  int v7; // [esp+38h] [ebp-2Ch]
  int v8; // [esp+3Ch] [ebp-28h]
  int v9; // [esp+40h] [ebp-24h]
  int v10; // [esp+44h] [ebp-20h]
  int v11; // [esp+48h] [ebp-1Ch]
  _DWORD Base[5]; // [esp+4Ch] [ebp-18h] BYREF
  int i; // [esp+60h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    Base[i] = *(_DWORD *)(dword_7906F0 + 120 * i + 72);
    *(&v7 + i) = -1;
  }
  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 5; ++j )
    {
      if ( *(_DWORD *)(dword_7906F0 + 120 * i + 108) == j )
      {
        *(&v7 + j) = i;
        break;
      }
    }
  }
  qsort(Base, 5u, 4u, std::_Idl_distance<char *,char *>);
  for ( i = 0; i < 5; ++i )
  {
    for ( k = 0; k < 5; ++k )
    {
      if ( *(_DWORD *)(dword_7906F0 + 120 * i + 72) == Base[k] && *(&v7 + k) == -1 )
      {
        *(&v7 + k) = i;
        break;
      }
    }
  }
  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4 * *(&v7 + i) + 180) + 68))(
      *(_DWORD *)(this + 4 * *(&v7 + i) + 180),
      0,
      20 * i);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *(&v7 + i) + 180) + 116))(*(_DWORD *)(this
                                                                                                  + 4 * *(&v7 + i)
                                                                                                  + 180));
  }
  if ( *(_DWORD *)(dword_7906F0 + 120 * v7 + 72) == 23 )
    sub_43D630(*(int **)(this + 24), v7, v8, v9);
  if ( *(int *)(dword_7906F0 + 120 * v7 + 72) >= 48 && *(int *)(dword_7906F0 + 120 * v7 + 72) <= 52 )
  {
    if ( sub_62FBF0(2) )
      sub_43D660(*(int **)(this + 24), v7, v8, v9);
    else
      sub_43D410(*(_DWORD *)(this + 24), v7, v8, v9, v10, v11);
  }
  result = 120 * v7;
  if ( *(int *)(dword_7906F0 + 120 * v7 + 72) >= 108 )
  {
    result = 120 * v7;
    if ( *(int *)(dword_7906F0 + 120 * v7 + 72) <= 115 )
      result = sub_43D690(*(int **)(this + 24), v7, v8, v9);
  }
  if ( !*(_BYTE *)(this + 28) )
  {
    v4 = *(_DWORD *)(dword_7906F0 + 120 * v7 + 72);
    v3 = *(_DWORD *)(dword_7906F0 + 120 * v8 + 72);
    result = v4 - v3;
    if ( v4 == v3 )
    {
      result = *(_DWORD *)(dword_7906F0 + 120 * v7 + 72);
      if ( result >= 135 )
      {
        result = *(_DWORD *)(dword_7906F0 + 120 * v7 + 72);
        if ( result <= 142 )
          return sub_43D940(*(_DWORD *)(this + 24));
      }
    }
  }
  return result;
}


//======================================================================
// sub_442490
// entry 00442490  size 959  status ok
//======================================================================

int __thiscall sub_442490(int *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+4h] [ebp-40h]
  int m; // [esp+28h] [ebp-1Ch]
  int i; // [esp+40h] [ebp-4h]
  int j; // [esp+40h] [ebp-4h]
  int k; // [esp+40h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    sub_5F5D50(0);
  ++*(this + 44);
  sub_5F1AD0(120031);
  sub_5EAF00(120030);
  for ( j = 0; j < 5; ++j )
  {
    sub_43FAB0(j, *(this + 44));
    if ( *(_DWORD *)(dword_7906F0 + 4 * j + 616) - 134 < 0 || *(_DWORD *)(dword_7906F0 + 4 * j + 616) == 148 )
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 1) + 112))(*(this + j + 1));
    else
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + j + 1) + 176))(
        *(this + j + 1),
        *(_DWORD *)(dword_7906F0 + 4 * j + 616) - 134);
  }
  for ( k = 0; k < 5; ++k )
  {
    for ( m = 0; m < 5; ++m )
    {
      if ( k != m
        && *(_DWORD *)(dword_7906F0 + 4 * k + 616) == *(_DWORD *)(dword_7906F0 + 4 * m + 616)
        && CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + k + 1)) == 10
        && CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + m + 1)) == 10 )
      {
        v1 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + m + 1) + 76))(*(this + m + 1), 0);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + m + 1) + 68))(*(this + m + 1), v1 - 5);
        v2 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + k + 1) + 76))(*(this + k + 1), 0);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + k + 1) + 68))(*(this + k + 1), v2 - 5);
        if ( *(_DWORD *)(dword_7906F0 + 120 * k + 108) >= *(_DWORD *)(dword_7906F0 + 120 * m + 108) )
        {
          v5 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + k + 1) + 76))(*(this + k + 1), 0) - 2;
          v6 = sub_62FBF0(3);
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + k + 1) + 68))(*(this + k + 1), v5 - v6);
        }
        else
        {
          v3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + m + 1) + 76))(*(this + m + 1), 0) - 2;
          v4 = sub_62FBF0(3);
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + m + 1) + 68))(*(this + m + 1), v3 - v4);
        }
      }
    }
  }
  if ( !sub_5FB300(2) )
    sub_5F9DE0(0, 2, 120049, 480, 439, 2, &Source, -1, -1, -1, -1, 0);
  v8 = sub_5FB300(2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8);
  return sub_43D730(*(this + 6));
}


//======================================================================
// sub_442850
// entry 00442850  size 2735  status ok
//======================================================================

int __thiscall sub_442850(int *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v7; // [esp-8h] [ebp-120h]
  __int64 v8; // [esp-8h] [ebp-120h]
  int v9; // [esp+4h] [ebp-114h]
  int v10; // [esp+8h] [ebp-110h]
  int v11; // [esp+Ch] [ebp-10Ch]
  int v12; // [esp+10h] [ebp-108h]
  int v13; // [esp+14h] [ebp-104h]
  int v14; // [esp+18h] [ebp-100h]
  int v15; // [esp+1Ch] [ebp-FCh]
  int v16; // [esp+20h] [ebp-F8h]
  int v17; // [esp+24h] [ebp-F4h]
  void *v19; // [esp+54h] [ebp-C4h]
  void *v20; // [esp+5Ch] [ebp-BCh]
  void *v21; // [esp+64h] [ebp-B4h]
  void *v22; // [esp+6Ch] [ebp-ACh]
  void *v23; // [esp+74h] [ebp-A4h]
  void *v24; // [esp+7Ch] [ebp-9Ch]
  void *v25; // [esp+84h] [ebp-94h]
  int j; // [esp+8Ch] [ebp-8Ch]
  char v27[36]; // [esp+90h] [ebp-88h] BYREF
  __int64 v28; // [esp+B4h] [ebp-64h]
  _DWORD v29[5]; // [esp+BCh] [ebp-5Ch]
  int v30; // [esp+D0h] [ebp-48h]
  int v31; // [esp+D4h] [ebp-44h]
  int v32[3]; // [esp+D8h] [ebp-40h]
  char Destination[28]; // [esp+E4h] [ebp-34h] BYREF
  int v34; // [esp+104h] [ebp-14h]
  int i; // [esp+108h] [ebp-10h]
  int v36; // [esp+114h] [ebp-4h]

  v34 = 0;
  v29[0] = 304;
  v29[1] = 321;
  v29[2] = 338;
  v29[3] = 355;
  v29[4] = 372;
  v30 = 0;
  v31 = 0;
  sub_5F1AD0(120022);
  sub_443300(this);
  for ( i = 0; i < 3; ++i )
  {
    if ( !*(this + i + 65) )
    {
      v25 = operator new(0x178u);
      v36 = 0;
      if ( v25 )
      {
        sub_5EAAF0(v25);
        v17 = v1;
      }
      else
      {
        v17 = 0;
      }
      v36 = -1;
      *(this + i + 65) = v17;
      sub_5EAE80(i + 120053, 0, 0, 2, -1);
    }
    v32[i] = -1;
    for ( j = 0; j < 5; ++j )
    {
      if ( *(_DWORD *)(dword_7906F0 + 120 * j + 108) == i )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 65) + 176))(*(this + i + 65), 4 - j);
        v32[i] = j;
        break;
      }
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 65) + 116))(*(this + i + 65));
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(this + i + 69) )
    {
      v24 = operator new(0x178u);
      v36 = 1;
      if ( v24 )
      {
        sub_5EAAF0(v24);
        v16 = v2;
      }
      else
      {
        v16 = 0;
      }
      v36 = -1;
      *(this + i + 69) = v16;
      sub_5EAE80(i + 120061, 463 * i + 37, 67, 2, -1);
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 69) + 116))(*(this + i + 69));
  }
  if ( !sub_5FB300(3) )
    sub_5F9DE0(0, 3, 120051, 488, 434, 2, &Source, -1, -1, -1, -1, 0);
  v15 = sub_5FB300(3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 116))(v15);
  if ( !sub_5FB300(4) )
    sub_5F9DE0(0, 4, 120050, 428, 396, 2, &Source, -1, -1, -1, -1, 0);
  v14 = sub_5FB300(4);
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 116))(v14);
  if ( !byte_795F94 )
  {
    if ( !*(this + 68) )
    {
      v23 = operator new(0x184u);
      v36 = 2;
      if ( v23 )
        v13 = sub_5F5BF0(v23);
      else
        v13 = 0;
      v36 = -1;
      *(this + 68) = v13;
      sub_5EAE80(120056, 0, -140, 3, -1);
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 68) + 116))(*(this + 68));
    v22 = operator new(0x1Cu);
    v36 = 3;
    if ( v22 )
      v12 = sub_600A70(0);
    else
      v12 = 0;
    v36 = -1;
    sub_5F5D50(v12);
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 50) )
    {
      v21 = operator new(0x178u);
      v36 = 4;
      if ( v21 )
      {
        sub_5EAAF0(v21);
        v11 = v3;
      }
      else
      {
        v11 = 0;
      }
      v36 = -1;
      *(this + i + 50) = v11;
      sub_5EAE80(120023, 139, v29[*(_DWORD *)(dword_7906F0 + 120 * i + 108)], 1, -1);
    }
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*(this + i + 50) + 68))(
      *(this + i + 50),
      139,
      v29[*(_DWORD *)(dword_7906F0 + 120 * i + 108)]);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 50) + 176))(*(this + i + 50), 4 - i);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 50) + 116))(*(this + i + 50));
    if ( !*(this + i + 55) )
    {
      v20 = operator new(0x1D0u);
      v36 = 5;
      if ( v20 )
      {
        sub_5EC5A0(v20);
        v10 = v4;
      }
      else
      {
        v10 = 0;
      }
      v36 = -1;
      *(this + i + 55) = v10;
      sub_5EC8F0(&Source, 106, 100, 15, 340, v29[*(_DWORD *)(dword_7906F0 + 120 * i + 108)], 1, 48, -1);
    }
    strcpy(Destination, &Source);
    sprintf(Destination, "%d", *(_DWORD *)(dword_7906F0 + 120 * i + 112));
    (*(void (__thiscall **)(_DWORD, char *))(*(_DWORD *)*(this + i + 55) + 180))(*(this + i + 55), Destination);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*(this + i + 55) + 68))(
      *(this + i + 55),
      340,
      v29[*(_DWORD *)(dword_7906F0 + 120 * i + 108)]);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 55) + 116))(*(this + i + 55));
    if ( !*(this + i + 60) )
    {
      v19 = operator new(0x1D0u);
      v36 = 6;
      if ( v19 )
      {
        sub_5EC5A0(v19);
        v9 = v5;
      }
      else
      {
        v9 = 0;
      }
      v36 = -1;
      *(this + i + 60) = v9;
      sub_5EC8F0("$0.00", 106, 185, 15, 445, v29[*(_DWORD *)(dword_7906F0 + 120 * i + 108)], 2, 48, -1);
    }
    v30 = sub_445FF0(v27, i);
    v34 += v30;
    strcpy(v27, "$");
    sub_64C8D0(v30, v31, v27, 1, 1, 1);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*(this + i + 60) + 68))(
      *(this + i + 60),
      445,
      v29[*(_DWORD *)(dword_7906F0 + 120 * i + 108)]);
    (*(void (__thiscall **)(_DWORD, char *))(*(_DWORD *)*(this + i + 60) + 180))(*(this + i + 60), v27);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 60) + 116))(*(this + i + 60));
  }
  v28 = sub_64C8A0(v34, 0);
  v7 = v28;
  sub_5DCB00(0);
  sub_5D5FB0(v7, HIDWORD(v7));
  v8 = v28;
  sub_5DCB00(0);
  sub_5D5CF0(v8, HIDWORD(v8));
  return sub_43D7A0(*(this + 6), v32[0], v32[1], v32[2]);
}


//======================================================================
// sub_443300
// entry 00443300  size 205  status ok
//======================================================================

int __thiscall sub_443300(_DWORD **this)
{
  int result; // eax
  int v2; // eax
  int i; // [esp+8h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(this + 42) + 112))(*(this + 42));
  (*(void (__thiscall **)(_DWORD))(**(this + 43) + 112))(*(this + 43));
  result = sub_5FB300(2);
  if ( result )
  {
    v2 = sub_5FB300(2);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
  }
  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 1) + 112))(*(this + i + 1));
    result = (*(int (__thiscall **)(_DWORD))(**(this + i + 45) + 112))(*(this + i + 45));
  }
  return result;
}


//======================================================================
// sub_4433D0
// entry 004433d0  size 57  status ok
//======================================================================

int __thiscall sub_4433D0(int *this)
{
  sub_442850(this);
  *(_BYTE *)(dword_7906F0 + 606) = 1;
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7906EC + 4) + 4))(*(_DWORD *)(dword_7906EC + 4), 6);
}


//======================================================================
// sub_443460
// entry 00443460  size 25  status ok
//======================================================================

int __stdcall sub_443460(int a1)
{
  return sub_5F4B60(a1);
}


//======================================================================
// sub_443480
// entry 00443480  size 518  status ok
//======================================================================

int __thiscall sub_443480(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  const char *v6; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // [esp+0h] [ebp-1Ch]
  int v10; // [esp+4h] [ebp-18h]
  int v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  char v14; // [esp+17h] [ebp-5h]
  int i; // [esp+18h] [ebp-4h]
  int j; // [esp+18h] [ebp-4h]

  v14 = 0;
  result = sub_60B710(a2);
  for ( i = 0; i < 5; ++i )
  {
    result = sub_5FB810(i + 20);
    if ( result )
    {
      v3 = sub_5FB810(i + 20);
      sub_60C330(v3);
      result = sub_5FB810(i + 20);
      if ( (void *)result == this )
      {
        v4 = sub_5FB810(i + 20);
        result = sub_60C300(v4);
      }
    }
  }
  for ( j = 0; j < 5; ++j )
  {
    v5 = sub_5FB810(j + 20);
    if ( !(unsigned __int8)sub_60C370(v5) )
    {
      v12 = sub_5FB810(j + 20);
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 184))(v12);
      if ( !strcmp(v6, "1") )
      {
        v11 = sub_5FB810(j + 20);
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)v11 + 180))(v11, &unk_6B83F8);
        v14 = 1;
      }
    }
    v7 = sub_5FB810(j + 20);
    result = (unsigned __int8)sub_60C370(v7);
    if ( !(_BYTE)result )
    {
      v10 = sub_5FB810(j + 20);
      v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 184))(v10);
      result = strcmp(v8, "0");
      if ( !result )
      {
        v9 = sub_5FB810(j + 20);
        result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 180))(v9, &Source);
        v14 = 1;
      }
    }
  }
  if ( v14 )
  {
    sub_440260((_DWORD **)dword_7906F4);
    sub_440310((_DWORD *)dword_7906F4);
    return sub_440490((_DWORD **)dword_7906F4);
  }
  return result;
}


//======================================================================
// sub_443690
// entry 00443690  size 323  status ok
//======================================================================

bool __thiscall sub_443690(void *this, int a2)
{
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  char Str1[4]; // [esp+4h] [ebp-4h] BYREF

  strcpy(Str1, "0");
  Str1[0] = *(_BYTE *)(a2 + 20);
  if ( (unsigned __int8)sub_60C370(this) && *(_BYTE *)(a2 + 20) == 9 )
    return 1;
  if ( !(unsigned __int8)sub_60C370(this) || !(unsigned __int8)sub_60B7A0(a2) )
    return 0;
  if ( *(_BYTE *)(a2 + 20) == 22 )
    return 1;
  v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
  if ( !atoi(v3) && !strcmp(Str1, "0") )
    return 0;
  v4 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
  if ( atoi(v4) > 100 )
    return 0;
  v5 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
  if ( atoi(v5) == 100 && strcmp(Str1, "0") )
    return 0;
  return atoi(Str1) || !strcmp(Str1, "0");
}


//======================================================================
// sub_4437E0
// entry 004437e0  size 680  status ok
//======================================================================

int __thiscall sub_4437E0(pairNode *this, int a2)
{
  int v2; // eax
  const char *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax
  const char *v8; // eax
  int v9; // eax
  int v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  unsigned __int8 v13; // [esp+Fh] [ebp-Dh]
  int v14; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]
  int j; // [esp+18h] [ebp-4h]

  v14 = pairNode::raw_length(this) - 20;
  v13 = 0;
  if ( *(_BYTE *)(a2 + 20) == 9 )
  {
    for ( i = 0; i < 5; ++i )
    {
      v2 = sub_5FB810(i + 20);
      if ( (unsigned __int8)sub_60C370(v2) )
      {
        v11 = sub_5FB810(i + 20);
        v3 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 184))(v11);
        if ( !strcmp(v3, "1") )
        {
          v10 = sub_5FB810(i + 20);
          (*(void (__thiscall **)(int, void *))(*(_DWORD *)v10 + 180))(v10, &unk_6B83F8);
          v13 = 1;
        }
      }
      v4 = sub_5FB810(i + 20);
      if ( (unsigned __int8)sub_60C370(v4) )
      {
        v5 = sub_5FB810(i + 20);
        sub_60C330(v5);
        if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
        {
          if ( i == 4 )
            v6 = sub_5FB810(20);
          else
            v6 = sub_5FB810(i + 21);
        }
        else if ( i )
        {
          v6 = sub_5FB810(i + 19);
        }
        else
        {
          v6 = sub_5FB810(24);
        }
        sub_60C300(v6);
        *(_BYTE *)(a2 + 4) = 1;
        break;
      }
    }
    result = v13;
    if ( v13 )
    {
      sub_440260((_DWORD **)dword_7906F4);
      sub_440310((_DWORD *)dword_7906F4);
      return sub_440490((_DWORD **)dword_7906F4);
    }
  }
  else
  {
    v8 = (const char *)(*(int (__thiscall **)(pairNode *))(*(_DWORD *)this + 184))(this);
    if ( strcmp(v8, &Source) )
    {
      for ( j = 0; j < 3; ++j )
      {
        v9 = sub_5FB3F0(j + 3 * v14 + 5, v14);
        if ( (unsigned __int8)sub_600230(v9) )
          break;
      }
    }
    sub_60B7D0(a2);
    sub_440260((_DWORD **)dword_7906F4);
    sub_440310((_DWORD *)dword_7906F4);
    return sub_440490((_DWORD **)dword_7906F4);
  }
  return result;
}


//======================================================================
// sub_443A90
// entry 00443a90  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_443A90(_DWORD *this, int a2)
{
  sub_6010A0(a2);
  *this = &CycleHorse::`vftable';
  return this;
}


//======================================================================
// sub_443AE0
// entry 00443ae0  size 179  status ok
//======================================================================

int __thiscall sub_443AE0(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h]

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    v4 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 4))(this);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1));
    if ( result != v4 )
    {
      if ( (CMFCToolBarsCustomizeDialog *)v4 == *(this + 7) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), *(this + 7));
        return (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 5))(this);
      }
      else
      {
        v2 = pairNode::raw_length(*(this + 1));
        *((_DWORD *)*(this + 1) + 94) = sub_445690(v2);
        return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v4);
      }
    }
  }
  return result;
}


//======================================================================
// sub_443BD0
// entry 00443bd0  size 19  status ok
//======================================================================

int __thiscall sub_443BD0(void *this)
{
  return sub_60C370(this);
}


//======================================================================
// sub_443C50
// entry 00443c50  size 365  status ok
//======================================================================

_DWORD *__thiscall sub_443C50(_DWORD *this)
{
  __int16 i; // [esp+8h] [ebp-10h]

  sub_5D7B60(this);
  *this = &HorseRacingRoom::`vftable';
  dword_7906EC = (int)this;
  dword_7906F0 = 0;
  dword_7906F4 = 0;
  for ( i = 0; i < 3; ++i )
  {
    sub_6044B0(542655828, i + 120004, 0);
    sub_6044B0(542655828, i + 120016, 0);
    sub_6044B0(542655828, i + 120025, 0);
    sub_6044B0(542655828, i + 120033, 0);
    sub_6044B0(542655828, i + 120037, 0);
  }
  *(this + 32) = 0;
  *(this + 33) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  return this;
}


//======================================================================
// sub_443DC0
// entry 00443dc0  size 190  status ok
//======================================================================

int __thiscall sub_443DC0(_DWORD *this)
{
  *this = &HorseRacingRoom::`vftable';
  dword_7906EC = 0;
  if ( dword_7906F0 )
    (**(void (__thiscall ***)(int, int))dword_7906F0)(dword_7906F0, 1);
  if ( dword_7906F4 )
    (**(void (__thiscall ***)(int, int))dword_7906F4)(dword_7906F4, 1);
  return sub_5D7BD0();
}


//======================================================================
// sub_443E80
// entry 00443e80  size 330  status ok
//======================================================================

int __thiscall sub_443E80(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-34h]
  ATL::CCRTHeap *v3; // [esp+8h] [ebp-30h]
  int v4; // [esp+Ch] [ebp-2Ch]
  _DWORD *v6; // [esp+14h] [ebp-24h]
  ATL::CCRTHeap *v7; // [esp+1Ch] [ebp-1Ch]
  void *v8; // [esp+24h] [ebp-14h]

  sub_5D8230();
  v8 = operator new(0x27Cu);
  if ( v8 )
    v4 = sub_444A50(v8);
  else
    v4 = 0;
  dword_7906F0 = v4;
  sub_444B10(v4);
  v7 = (ATL::CCRTHeap *)operator new(0x11Cu);
  if ( v7 )
    v3 = sub_43F270(v7);
  else
    v3 = 0;
  dword_7906F4 = (int)v3;
  sub_43FA00(v3);
  v6 = operator new(0x20u);
  if ( v6 )
  {
    sub_5FC0D0(0);
    *v6 = &HorseRacingRoomScript::`vftable';
    v2 = v6;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
}


//======================================================================
// sub_443FD0
// entry 00443fd0  size 35  status ok
//======================================================================

char sub_443FD0()
{
  if ( dword_7906F0 )
    return *(_BYTE *)(dword_7906F0 + 606);
  else
    return 1;
}


//======================================================================
// sub_444000
// entry 00444000  size 111  status ok
//======================================================================

int __stdcall sub_444000(int a1)
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
  sub_444AA0(dword_7906F0);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_444AA0(dword_7906F0);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_444070
// entry 00444070  size 28  status ok
//======================================================================

int __stdcall sub_444070(int a1)
{
  return sub_444D30(a1);
}


//======================================================================
// sub_444090
// entry 00444090  size 722  status ok
//======================================================================

int __thiscall sub_444090(void *this)
{
  int result; // eax

  result = unknown_libname_843(this) - 2;
  switch ( result )
  {
    case 0:
      result = sub_441C70(dword_7906F4);
      dword_7906F8 = 1;
      break;
    case 1:
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 3);
      sub_441D80((_DWORD *)dword_7906F4);
      if ( dword_7906F8 == 2 )
      {
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          101033,
          0,
          0,
          10,
          0,
          1.0,
          0.5,
          dword_7906EC + 128);
        dword_7906F8 = 0;
      }
      if ( dword_7906F8 == 1 )
      {
        dword_7906F8 = 2;
        if ( !(unsigned __int8)sub_444AC0(dword_7906F0) )
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101031,
            0,
            0,
            5,
            1,
            1.0,
            0.5,
            0);
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          101032,
          0,
          0,
          10,
          0,
          1.0,
          0.5,
          dword_7906EC + 132);
      }
      if ( !dword_7906F8 )
      {
        if ( !(unsigned __int8)sub_5F4570(101033) )
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101033,
            0,
            0,
            10,
            0,
            1.0,
            0.5,
            dword_7906EC + 128);
        if ( !(unsigned __int8)sub_5F4570(101032) )
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101032,
            0,
            0,
            10,
            0,
            1.0,
            0.5,
            dword_7906EC + 132);
      }
      goto LABEL_16;
    case 2:
      sub_609870(*(_DWORD *)(dword_7906EC + 128), 1);
      *(_DWORD *)(dword_7906EC + 128) = 0;
      sub_609870(*(_DWORD *)(dword_7906EC + 132), 1);
      *(_DWORD *)(dword_7906EC + 132) = 0;
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 5);
      if ( *(_BYTE *)(dword_7906F0 + 612) )
        result = sub_442490((int *)dword_7906F4);
      else
LABEL_16:
        result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      break;
    case 3:
      result = sub_4433D0((int *)dword_7906F4);
      break;
    case 4:
      result = sub_444CE0(dword_7906F0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_444380
// entry 00444380  size 191  status ok
//======================================================================

int __stdcall sub_444380(int a1, int a2)
{
  switch ( a2 )
  {
    case 100001:
      sub_5FE640(100006, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      sub_5FE240(5017, -1, -1, 0);
      break;
    case 100035:
      sub_5FE640(100038, 0);
      break;
    case 100055:
      sub_5FE640(-2, 0);
      sub_5FE640(100058, 0);
      break;
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_444480
// entry 00444480  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_444480(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &HorseRacingRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_4444B0
// entry 004444b0  size 120  status ok
//======================================================================

_DWORD *sub_4444B0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x90u);
  if ( v2 )
    return sub_443C50(v2);
  else
    return 0;
}


//======================================================================
// sub_444530
// entry 00444530  size 51  status ok
//======================================================================

char __stdcall sub_444530(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_HORSERACING");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_444590
// entry 00444590  size 16  status ok
//======================================================================

int sub_444590()
{
  return 3209000;
}


//======================================================================
// sub_4445A0
// entry 004445a0  size 16  status ok
//======================================================================

const char *sub_4445A0()
{
  return "videopoker";
}


//======================================================================
// sub_4445C0
// entry 004445c0  size 16  status ok
//======================================================================

char **sub_4445C0()
{
  return &off_713B0C;
}


