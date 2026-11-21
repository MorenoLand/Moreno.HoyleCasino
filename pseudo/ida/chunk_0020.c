//======================================================================
// sub_567880
// entry 00567880  size 107  status ok
//======================================================================

int __stdcall sub_567880(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  _BYTE v10[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = sub_5DCB00(a1);
  v9 = *(_DWORD *)(v1 + 1224);
  v8 = *(_DWORD *)(v1 + 1220);
  sub_568430(dword_79343C);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = (_DWORD *)sub_568430(dword_79343C);
  *v5 = v3;
  v5[1] = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_5678F0
// entry 005678f0  size 39  status ok
//======================================================================

int __stdcall sub_5678F0(int a1)
{
  int result; // eax

  result = dword_79343C;
  if ( !*(_BYTE *)(dword_79343C + 24) )
    return sub_562160((_DWORD **)dword_793440);
  return result;
}


//======================================================================
// sub_567920
// entry 00567920  size 43  status ok
//======================================================================

int __stdcall sub_567920(int a1)
{
  int result; // eax

  result = dword_79343C;
  if ( !*(_BYTE *)(dword_79343C + 24) )
    return sub_568FB0(a1);
  return result;
}


//======================================================================
// sub_567950
// entry 00567950  size 76  status ok
//======================================================================

int __stdcall sub_567950(int a1)
{
  int result; // eax
  _BYTE v2[8]; // [esp+8h] [ebp-Ch] BYREF
  int v3; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)(dword_79343C + 4);
  sub_5D0DB0(v2, a1);
  result = v3;
  if ( v3 < *(_DWORD *)(dword_79343C + 4) )
    return sub_562290((_DWORD *)dword_793440);
  return result;
}


//======================================================================
// sub_5679A0
// entry 005679a0  size 314  status ok
//======================================================================

int __thiscall sub_5679A0(_DWORD *this)
{
  int result; // eax
  unsigned __int8 v3; // [esp+Bh] [ebp-1h]

  switch ( *(this + 5) )
  {
    case 1:
      v3 = *((_BYTE *)dword_162EE84 + 37);
      result = v3;
      if ( v3 )
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 2, 20);
      break;
    case 2:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 3, 60);
      break;
    case 3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_793438 + 700))(dword_793438, 20);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 60);
      break;
    case 4:
      sub_568FB0(0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 5, 60);
      break;
    case 5:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_793438 + 740))(dword_793438, 0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 6, 60);
      break;
    case 6:
      sub_568FB0(4);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 7, 60);
      break;
    case 7:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 90);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\vpmroom.cpp", 380);
      break;
  }
  return result;
}


//======================================================================
// sub_567B30
// entry 00567b30  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_567B30(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &VPMultiRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_567B60
// entry 00567b60  size 120  status ok
//======================================================================

_DWORD *sub_567B60()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_566DA0(v2);
  else
    return 0;
}


//======================================================================
// sub_567BE0
// entry 00567be0  size 51  status ok
//======================================================================

char __stdcall sub_567BE0(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_567C40
// entry 00567c40  size 16  status ok
//======================================================================

int sub_567C40()
{
  return 3220000;
}


//======================================================================
// sub_567C50
// entry 00567c50  size 16  status ok
//======================================================================

const char *sub_567C50()
{
  return "videopoker";
}


//======================================================================
// sub_567C70
// entry 00567c70  size 16  status ok
//======================================================================

char **sub_567C70()
{
  return off_74542C;
}


//======================================================================
// sub_567C80
// entry 00567c80  size 16  status ok
//======================================================================

char **sub_567C80()
{
  return &off_74543C;
}


//======================================================================
// sub_567CB0
// entry 00567cb0  size 94  status ok
//======================================================================

char __stdcall sub_567CB0(_DWORD *a1, int a2)
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
// sub_567D10
// entry 00567d10  size 16  status ok
//======================================================================

int sub_567D10()
{
  return 8;
}


//======================================================================
// sub_567D40
// entry 00567d40  size 52  status ok
//======================================================================

char __stdcall sub_567D40(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_567D90
// entry 00567d90  size 16  status ok
//======================================================================

int sub_567D90()
{
  return 16;
}


//======================================================================
// sub_567DA0
// entry 00567da0  size 258  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_567DA0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(17);
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)18 )
    {
      *a2 += *v8;
      a2[1] += v8[1];
      *a3 += *v8;
      a3[1] += v8[1];
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
// sub_567EB0
// entry 00567eb0  size 241  status ok
//======================================================================

char __stdcall sub_567EB0(int a1, int a2)
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

  v10 = sub_63AAE0(17);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v6 = sub_64C8A0(0, 0);
  v9 = v6;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)18 )
    sub_5E0C40(a2, &v8, &v9);
  v2 = (int *)sub_64C5C0(v5, v8, HIDWORD(v8));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  return 1;
}


//======================================================================
// sub_567FB0
// entry 00567fb0  size 30  status ok
//======================================================================

char __stdcall sub_567FB0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  return 1;
}


//======================================================================
// sub_567FD0
// entry 00567fd0  size 41  status ok
//======================================================================

char __stdcall sub_567FD0(int a1)
{
  if ( a1 != 3220000 )
    return 0;
  sub_653BD0(17);
  return 1;
}


//======================================================================
// sub_568000
// entry 00568000  size 87  status ok
//======================================================================

int __stdcall sub_568000(int a1)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 224))(dword_7947E0, 17);
  if ( !v2 )
    sub_5E9F20((char)"poRoomInterface", "..\\Casino\\vpmroominterface.cpp", 304);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 96))(v2, a1);
}


//======================================================================
// sub_568060
// entry 00568060  size 87  status ok
//======================================================================

int __stdcall sub_568060(int a1)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 224))(dword_7947E0, 17);
  if ( !v2 )
    sub_5E9F20((char)"poRoomInterface", "..\\Casino\\vpmroominterface.cpp", 312);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 100))(v2, a1);
}


//======================================================================
// sub_5680C0
// entry 005680c0  size 16  status ok
//======================================================================

void *sub_5680C0()
{
  return &unk_745440;
}


//======================================================================
// sub_5680D0
// entry 005680d0  size 190  status ok
//======================================================================

void *__stdcall sub_5680D0(int a1)
{
  int v1; // eax

  if ( (dword_793448 & 1) == 0 )
  {
    dword_793448 |= 1u;
    dword_745454 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_745458 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3220001 )
    return &unk_745450;
  else
    return 0;
}


//======================================================================
// sub_568190
// entry 00568190  size 16  status ok
//======================================================================

char *sub_568190()
{
  return a1;
}


//======================================================================
// sub_5681A0
// entry 005681a0  size 16  status ok
//======================================================================

void *sub_5681A0()
{
  return &unk_7452D8;
}


//======================================================================
// sub_5681B0
// entry 005681b0  size 147  status ok
//======================================================================

char __stdcall sub_5681B0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_568250(a2);
  if ( v3 == -1 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = v3;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_5682A0(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 18, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_568250
// entry 00568250  size 71  status ok
//======================================================================

int __stdcall sub_568250(int a1)
{
  switch ( a1 )
  {
    case 3220014:
      return 0;
    case 3220019:
      return 5;
    case 3220020:
      return 10;
  }
  return -1;
}


//======================================================================
// sub_5682A0
// entry 005682a0  size 87  status ok
//======================================================================

int __stdcall sub_5682A0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3220021:
      result = 2;
      break;
    case 3220022:
      result = 3;
      break;
    case 3220023:
      result = 4;
      break;
    case 3220024:
      result = 6;
      break;
    case 3220025:
      result = 8;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_568320
// entry 00568320  size 58  status ok
//======================================================================

int __thiscall sub_568320(void *this)
{
  int v2; // [esp+0h] [ebp-4h]

  sub_5D0980(this);
  *(_DWORD *)v2 = &VPMultiState::`vftable';
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_BYTE *)(v2 + 24) = 0;
  return v2;
}


//======================================================================
// sub_568360
// entry 00568360  size 199  status ok
//======================================================================

void __thiscall sub_568360(CExpandoObject *this)
{
  void *v2; // [esp+14h] [ebp-18h]
  void (__thiscall ***v3)(_DWORD, int); // [esp+1Ch] [ebp-10h]

  *(_DWORD *)this = &VPMultiState::`vftable';
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4);
  if ( v3 )
    (**v3)(v3, 1);
  v2 = (void *)*((_DWORD *)this + 13);
  if ( v2 )
  {
    sub_56A720(v2);
    operator delete(v2);
  }
  CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_568430
// entry 00568430  size 31  status ok
//======================================================================

int sub_568430()
{
  sub_6375B0(dword_162EE84);
  return sub_63AAE0(17);
}


//======================================================================
// sub_568450
// entry 00568450  size 209  status ok
//======================================================================

int __thiscall sub_568450(_DWORD *this, char a2)
{
  int result; // eax
  _DWORD v4[5]; // [esp+4h] [ebp-20h]
  int v5; // [esp+18h] [ebp-Ch]
  int v6; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  if ( !*(this + 13) )
    sub_5E9F20((char)"extraHands", "..\\Casino\\vpmstate.cpp", 65);
  v4[0] = 1;
  v4[1] = 5;
  v4[2] = 10;
  v4[3] = 25;
  v4[4] = 50;
  v6 = 0;
  result = unknown_libname_543(*(this + 13));
  v5 = result;
  for ( i = 4; i >= 0; --i )
  {
    sub_56A7A0(v4[i] - 1, a2);
    if ( (unsigned __int8)sub_56A5D0(this) )
    {
      result = i;
      v6 = v4[i] - 1;
      break;
    }
    result = i - 1;
  }
  if ( v5 < v6 )
    return sub_56A7A0(v5, a2);
  return result;
}


//======================================================================
// sub_568530
// entry 00568530  size 134  status ok
//======================================================================

char __thiscall sub_568530(_DWORD *this, int a2)
{
  char v4; // [esp+7h] [ebp-5h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = unknown_libname_543(*(this + 13));
  if ( a2 != 1 && a2 != 5 && a2 != 10 && a2 != 25 && a2 != 50 )
    sub_5E9F20(
      (char)"numHands==1 || numHands==5 || numHands==10 || numHands==25 || numHands==50",
      "..\\Casino\\vpmstate.cpp",
      93);
  sub_56A7A0(a2 - 1, 0);
  v4 = sub_56A5D0(this);
  sub_56A7A0(v5, 0);
  return v4;
}


//======================================================================
// sub_5685C0
// entry 005685c0  size 406  status ok
//======================================================================

int __thiscall sub_5685C0(int this)
{
  char v1; // al
  int v3; // [esp+4h] [ebp-2Ch]
  int v4; // [esp+8h] [ebp-28h]
  void *v6; // [esp+10h] [ebp-20h]
  void *v7; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  if ( !*(_DWORD *)(this + 16) )
  {
    v7 = operator new(0x810u);
    if ( v7 )
      v4 = sub_642E10(v7);
    else
      v4 = 0;
    *(_DWORD *)(this + 16) = v4;
  }
  v1 = sub_5687E0(this);
  sub_642E70(v1 != 0 ? 8 : 0);
  if ( !*(_DWORD *)(this + 52) )
  {
    v6 = operator new(0x3B8u);
    if ( v6 )
      v3 = sub_56A6E0(v6);
    else
      v3 = 0;
    *(_DWORD *)(this + 52) = v3;
  }
  sub_56A800(*(_DWORD *)(this + 52));
  sub_568450((_DWORD *)this, 1);
  sub_56A9C0(*(_DWORD *)(this + 52));
  sub_56AA50(*(_DWORD *)(this + 52));
  sub_5687B0(this);
  *(_DWORD *)(this + 20) = 0;
  *(_BYTE *)(this + 60) = 1;
  for ( i = 0; i < 5; ++i )
  {
    *(_WORD *)(this + 2 * i + 26) = 0;
    *(_WORD *)(this + 2 * i + 36) = 0;
  }
  *(_BYTE *)(this + 48) = 1;
  sub_57AB80(7, &unk_745460);
  return sub_5F2BA0(5009);
}


//======================================================================
// sub_568760
// entry 00568760  size 34  status ok
//======================================================================

bool __thiscall sub_568760(_DWORD *this)
{
  return *(this + 2) == 0;
}


//======================================================================
// sub_568790
// entry 00568790  size 17  status ok
//======================================================================

char __thiscall sub_568790(_BYTE *this)
{
  return *(this + 60);
}


//======================================================================
// sub_5687B0
// entry 005687b0  size 48  status ok
//======================================================================

int sub_5687B0()
{
  sub_6437D0(1, 0);
  return sub_643930(1, 5, "VideoPoker", 1);
}


//======================================================================
// sub_5687E0
// entry 005687e0  size 94  status ok
//======================================================================

bool sub_5687E0()
{
  return *(_DWORD *)(dword_7947E0 + 20244) == 8
      || *(_DWORD *)(dword_7947E0 + 20244) == 9
      || *(_DWORD *)(dword_7947E0 + 20244) == 10;
}


//======================================================================
// sub_568840
// entry 00568840  size 78  status ok
//======================================================================

char __thiscall sub_568840(unsigned __int16 *this, unsigned __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( !a2 )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 13) == a2 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_568890
// entry 00568890  size 180  status ok
//======================================================================

bool __thiscall sub_568890(_WORD *this)
{
  int v2; // esi
  __int16 v3; // [esp+8h] [ebp-Ch]
  __int16 v4; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 13) )
    {
      if ( v3 )
      {
        if ( v4 )
          return 0;
        v4 = *(this + i + 13);
      }
      else
      {
        v3 = *(this + i + 13);
      }
    }
  }
  if ( !v3 || !v4 )
    return 0;
  v2 = sub_641280(v3);
  return v2 == sub_641280(v4);
}


//======================================================================
// sub_568950
// entry 00568950  size 808  status ok
//======================================================================

bool __thiscall sub_568950(_WORD *this, char a2)
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
  int v16; // [esp+8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-1Ch]
  __int16 v18; // [esp+10h] [ebp-18h]
  __int16 v19; // [esp+12h] [ebp-16h]
  __int16 v20; // [esp+14h] [ebp-14h]
  __int16 v21; // [esp+16h] [ebp-12h]
  int i; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  v23 = 0;
  for ( i = 0; i < 5; ++i )
    *(&v18 + i) = 0;
  v17 = 1;
  v16 = 15;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 13) )
    {
      if ( sub_5593D0(*(this + i + 13)) == 20 )
        return 0;
      *(&v18 + v23) = *(this + i + 13);
      if ( sub_641280(*(this + i + 13)) > v17 )
        v17 = sub_641280(*(this + i + 13));
      if ( sub_641280(*(this + i + 13)) < v16 )
        v16 = sub_641280(*(this + i + 13));
      ++v23;
    }
  }
  if ( v23 != 4 )
    return 0;
  v3 = sub_641280(v18);
  if ( v3 == sub_641280(v19) )
    return 0;
  v4 = sub_641280(v18);
  if ( v4 == sub_641280(v20) )
    return 0;
  v5 = sub_641280(v19);
  if ( v5 == sub_641280(v20) )
    return 0;
  v6 = sub_641280(v18);
  if ( v6 == sub_641280(v21) )
    return 0;
  v7 = sub_641280(v19);
  if ( v7 == sub_641280(v21) )
    return 0;
  v8 = sub_641280(v20);
  if ( v8 == sub_641280(v21) )
    return 0;
  if ( v17 - v16 > 4 )
    return 0;
  if ( !a2 )
    return 1;
  v9 = sub_641290(v18);
  if ( v9 != sub_641290(v19) )
    return 0;
  v10 = sub_641290(v18);
  if ( v10 != sub_641290(v20) )
    return 0;
  v11 = sub_641290(v19);
  if ( v11 != sub_641290(v20) )
    return 0;
  v12 = sub_641290(v18);
  if ( v12 != sub_641290(v21) )
    return 0;
  v13 = sub_641290(v19);
  if ( v13 != sub_641290(v21) )
    return 0;
  v14 = sub_641290(v20);
  return v14 == sub_641290(v21);
}


//======================================================================
// sub_568C80
// entry 00568c80  size 592  status ok
//======================================================================

bool __thiscall sub_568C80(_WORD *this, char a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v10; // [esp+8h] [ebp-24h]
  int v11; // [esp+Ch] [ebp-20h]
  int v12; // [esp+10h] [ebp-1Ch]
  __int16 v13; // [esp+14h] [ebp-18h]
  __int16 v14; // [esp+16h] [ebp-16h]
  __int16 v15; // [esp+18h] [ebp-14h]
  int v16; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v16 = 0;
  v10 = 0;
  for ( i = 0; i < 5; ++i )
    *(&v13 + i) = 0;
  v12 = 1;
  v11 = 15;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 13) )
    {
      if ( sub_5593D0(*(this + i + 13)) == 20 )
      {
        ++v10;
      }
      else
      {
        *(&v13 + v16) = *(this + i + 13);
        if ( sub_641280(*(this + i + 13)) > v12 )
          v12 = sub_641280(*(this + i + 13));
        if ( sub_641280(*(this + i + 13)) < v11 )
          v11 = sub_641280(*(this + i + 13));
        ++v16;
      }
    }
  }
  if ( v10 != 1 )
    return 0;
  if ( v16 != 3 )
    return 0;
  v3 = sub_641280(v13);
  if ( v3 == sub_641280(v14) )
    return 0;
  v4 = sub_641280(v13);
  if ( v4 == sub_641280(v15) )
    return 0;
  v5 = sub_641280(v14);
  if ( v5 == sub_641280(v15) )
    return 0;
  if ( v12 - v11 > 4 )
    return 0;
  if ( !a2 )
    return 1;
  v6 = sub_641290(v13);
  if ( v6 != sub_641290(v14) )
    return 0;
  v7 = sub_641290(v13);
  if ( v7 != sub_641290(v15) )
    return 0;
  v8 = sub_641290(v14);
  return v8 == sub_641290(v15);
}


//======================================================================
// sub_568ED0
// entry 00568ed0  size 73  status ok
//======================================================================

__int16 __thiscall sub_568ED0(_WORD *this, __int16 a2)
{
  __int16 result; // ax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 13) )
    {
      *(this + i + 13) = a2;
      return a2;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_568F20
// entry 00568f20  size 81  status ok
//======================================================================

int __thiscall sub_568F20(unsigned __int16 *this, unsigned __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( !a2 )
    return -1;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 13) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_568F80
// entry 00568f80  size 41  status ok
//======================================================================

int __thiscall sub_568F80(_DWORD *this)
{
  sub_56ACE0(*(this + 13));
  return sub_5645C0(*(unsigned __int8 **)(dword_793440 + 184), 0);
}


//======================================================================
// sub_568FB0
// entry 00568fb0  size 669  status ok
//======================================================================

int __thiscall sub_568FB0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v5; // [esp+3Ch] [ebp-8h]

  result = dword_79343C;
  if ( !*(_BYTE *)(dword_79343C + 24) )
  {
    switch ( a2 )
    {
      case 0:
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3220061,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
        sub_5D11B0(this);
        result = sub_561B50(dword_793440);
        if ( *(this + 2) )
          result = sub_56A070(a2, this);
        break;
      case 1:
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3220061,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
        sub_5D0FF0(this);
        sub_561B50(dword_793440);
        v5 = *(this + 2);
        result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
        if ( v5 == result )
          result = sub_56A070(a2, this);
        break;
      case 3:
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3220061,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
        sub_5692B0(this);
        sub_561E20((_DWORD *)dword_793440);
        result = sub_568F80(this);
        break;
      case 4:
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3220061,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
        result = sub_56A070(a2, this);
        break;
      case 5:
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3220061,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
        sub_5D13E0(this);
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          101000,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
        sub_561950(dword_793440);
        result = sub_562730();
        break;
      case 6:
        sub_5627C0((_DWORD **)dword_793440, 0, 20);
        if ( *(this + 1) || *(this + 2) || (unsigned __int8)sub_56A560(this) || (unsigned __int8)sub_56A510(this) )
        {
          result = sub_5DC2E0();
        }
        else
        {
          v3 = sub_5DCB00(0);
          result = sub_5DBB70(v3);
        }
        break;
      default:
        result = dword_79343C;
        break;
    }
  }
  return result;
}


//======================================================================
// sub_569270
// entry 00569270  size 52  status ok
//======================================================================

int __thiscall sub_569270(_WORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    *(this + i + 13) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5692B0
// entry 005692b0  size 63  status ok
//======================================================================

int __thiscall sub_5692B0(_WORD *this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    *(this + i + 13) = *(this + i + 18);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5692F0
// entry 005692f0  size 73  status ok
//======================================================================

int __thiscall sub_5692F0(_WORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 18) )
      ++v2;
  }
  return v2;
}


//======================================================================
// sub_569340
// entry 00569340  size 286  status ok
//======================================================================

int __thiscall sub_569340(__int16 *this, __int16 a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+Ch] [ebp-4h]
  int i; // [esp+Ch] [ebp-4h]

  if ( sub_5692F0(this) )
  {
    v3 = sub_641280(a2);
    if ( v3 > sub_641280(*(this + 18)) )
    {
      result = sub_5692F0(this) - 1;
      for ( i = result; i > -1; --i )
      {
        v4 = sub_641280(a2);
        result = sub_641280(*(this + i + 18));
        if ( v4 >= result )
        {
          for ( j = 4; j > i + 1; --j )
            *(this + j + 18) = *(this + j + 17);
          *(this + i + 19) = a2;
          return i;
        }
      }
    }
    else
    {
      for ( k = 4; k > 0; --k )
        *(this + k + 18) = *(this + k + 17);
      *(this + 18) = a2;
      return (int)this;
    }
  }
  else
  {
    *(this + 18) = a2;
    return (int)this;
  }
  return result;
}


//======================================================================
// sub_569460
// entry 00569460  size 133  status ok
//======================================================================

_WORD *__thiscall sub_569460(_WORD *this, unsigned __int16 a2)
{
  _WORD *result; // eax
  int j; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int16)*(this + i + 18) == a2 )
    {
      for ( j = i; j < 4; ++j )
        *(this + j + 18) = *(this + j + 19);
      *(this + 22) = 0;
      return this;
    }
    result = (_WORD *)(i + 1);
  }
  return result;
}


//======================================================================
// sub_5694F0
// entry 005694f0  size 140  status ok
//======================================================================

void __thiscall sub_5694F0(int this, __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_568840((unsigned __int16 *)this, a2) )
      *(_WORD *)(this + 2 * sub_568F20((unsigned __int16 *)this, a2) + 26) = 0;
    else
      sub_568ED0((_WORD *)this, a2);
    sub_561E20((_DWORD *)dword_793440);
    sub_56ACE0(*(_DWORD *)(this + 52));
    sub_5645C0(*(unsigned __int8 **)(dword_793440 + 184), 0);
  }
}


//======================================================================
// sub_569580
// entry 00569580  size 188  status ok
//======================================================================

void __thiscall sub_569580(void *this, int a2)
{
  int v2; // esi
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793440 + 4 * i + 8) + 76))(*(_DWORD *)(dword_793440
                                                                                                  + 4 * i
                                                                                                  + 8));
    if ( v2 == sub_560340(a2) )
    {
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3220062,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5694F0((int)this, *(_WORD *)(*(_DWORD *)(dword_793440 + 4 * i + 8) + 400));
      return;
    }
  }
}


//======================================================================
// sub_569640
// entry 00569640  size 135  status ok
//======================================================================

int __thiscall sub_569640(int this)
{
  __int16 v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  sub_5687B0();
  *(_BYTE *)(this + 46) = 1;
  *(_DWORD *)(this + 20) = 2;
  for ( i = 0; i < 5; ++i )
  {
    v3 = sub_6436C0(*(_DWORD *)(this + 16));
    sub_5624A0((_DWORD *)dword_793440, v3, i);
    sub_569340((__int16 *)this, v3);
  }
  sub_569780(this);
  *(_BYTE *)(this + 46) = 0;
  return sub_5687B0();
}


//======================================================================
// sub_5696D0
// entry 005696d0  size 174  status ok
//======================================================================

int __thiscall sub_5696D0(int this)
{
  int result; // eax

  ++*(_DWORD *)(this + 20);
  result = this;
  if ( *(_DWORD *)(this + 20) == 1 )
  {
    sub_569FE0(this);
    sub_57AB80(7, &unk_746C70);
    sub_55EF80((_BYTE *)dword_793444);
    sub_5F2B20(5009, 1);
    sub_561D10(1);
    result = sub_561D40(1);
  }
  if ( *(_DWORD *)(this + 20) == 2 )
  {
    sub_569780(this);
    sub_57AB80(7, &unk_745460);
    result = sub_5F2BA0(5009);
    *(_BYTE *)(this + 60) = 1;
  }
  return result;
}


//======================================================================
// sub_569780
// entry 00569780  size 320  status ok
//======================================================================

Concurrency::details::ContextBase *__thiscall sub_569780(int this)
{
  int v1; // eax
  Concurrency::details::ContextBase *result; // eax
  int v4; // [esp+14h] [ebp-10h]
  int v5; // [esp+20h] [ebp-4h]
  int v6; // [esp+20h] [ebp-4h]

  v1 = sub_569FE0(this);
  v5 = sub_5698C0(v1);
  v6 = sub_56B800(*(_DWORD *)(this + 52)) + v5;
  sub_5620C0(dword_793440, v6);
  *(_DWORD *)(this + 20) = 0;
  if ( !*(_BYTE *)(this + 46) )
    sub_5D0A20(v6 + *(_DWORD *)(this + 4));
  *(_DWORD *)(this + 8) = 0;
  v4 = *(_DWORD *)(this + 4);
  if ( v4 * sub_5D0AA0(this) > 100000000 )
  {
    sub_5D13E0(this);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      101000,
      0,
      0,
      5,
      1,
      1.0,
      0.5,
      0);
    sub_561950(dword_793440);
  }
  sub_568450((_DWORD *)this, 0);
  result = (Concurrency::details::ContextBase *)sub_561950(dword_793440);
  if ( !*(_BYTE *)(this + 46) )
  {
    result = dword_162EE84;
    if ( *((_BYTE *)dword_162EE84 + 37) )
      return (Concurrency::details::ContextBase *)(*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793438 + 4)
                                                                                             + 8))(
                                                    *(_DWORD *)(dword_793438 + 4),
                                                    7,
                                                    0);
  }
  return result;
}


//======================================================================
// sub_5698C0
// entry 005698c0  size 1550  status ok
//======================================================================

int __thiscall sub_5698C0(int this, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-1C4h]
  _DWORD v4[9]; // [esp+10h] [ebp-1B8h]
  _DWORD v5[9]; // [esp+34h] [ebp-194h]
  _DWORD v6[9]; // [esp+58h] [ebp-170h]
  _DWORD v7[10]; // [esp+7Ch] [ebp-14Ch]
  _DWORD v8[11]; // [esp+A4h] [ebp-124h]
  _DWORD v9[9]; // [esp+D0h] [ebp-F8h]
  _DWORD v10[10]; // [esp+F4h] [ebp-D4h]
  int v11; // [esp+11Ch] [ebp-ACh]
  _DWORD v12[10]; // [esp+120h] [ebp-A8h]
  _DWORD v13[10]; // [esp+148h] [ebp-80h]
  _DWORD v14[11]; // [esp+170h] [ebp-58h]
  _DWORD v15[11]; // [esp+19Ch] [ebp-2Ch]

  v5[0] = 250;
  v5[1] = 50;
  v5[2] = 25;
  v5[3] = 9;
  v5[4] = 6;
  v5[5] = 4;
  v5[6] = 3;
  v5[7] = 2;
  v5[8] = 1;
  v9[0] = 250;
  v9[1] = 50;
  v9[2] = 25;
  v9[3] = 6;
  v9[4] = 5;
  v9[5] = 4;
  v9[6] = 3;
  v9[7] = 2;
  v9[8] = 1;
  v15[0] = 375;
  v15[1] = 75;
  v15[2] = 80;
  v15[3] = 40;
  v15[4] = 25;
  v15[5] = 8;
  v15[6] = 6;
  v15[7] = 4;
  v15[8] = 2;
  v15[9] = 2;
  v15[10] = 1;
  v6[0] = 250;
  v6[1] = 50;
  v6[2] = 25;
  v6[3] = 6;
  v6[4] = 5;
  v6[5] = 4;
  v6[6] = 3;
  v6[7] = 2;
  v6[8] = 1;
  v4[0] = 250;
  v4[1] = 50;
  v4[2] = 25;
  v4[3] = 9;
  v4[4] = 6;
  v4[5] = 4;
  v4[6] = 3;
  v4[7] = 1;
  v4[8] = 1;
  v10[0] = 500;
  v10[1] = 100;
  v10[2] = 25;
  v10[3] = 16;
  v10[4] = 13;
  v10[5] = 4;
  v10[6] = 3;
  v10[7] = 2;
  v10[8] = 2;
  v10[9] = 1;
  v12[0] = 375;
  v12[1] = 75;
  v12[2] = 25;
  v12[3] = 15;
  v12[4] = 11;
  v12[5] = 4;
  v12[6] = 3;
  v12[7] = 2;
  v12[8] = 2;
  v12[9] = 1;
  v13[0] = 500;
  v13[1] = 100;
  v13[2] = 20;
  v13[3] = 10;
  v13[4] = 8;
  v13[5] = 4;
  v13[6] = 4;
  v13[7] = 2;
  v13[8] = 2;
  v13[9] = 1;
  v14[0] = 1000;
  v14[1] = 200;
  v14[2] = 100;
  v14[3] = 50;
  v14[4] = 17;
  v14[5] = 7;
  v14[6] = 5;
  v14[7] = 3;
  v14[8] = 2;
  v14[9] = 1;
  v14[10] = 1;
  v7[0] = 500;
  v7[1] = 100;
  v7[2] = 50;
  v7[3] = 50;
  v7[4] = 20;
  v7[5] = 8;
  v7[6] = 5;
  v7[7] = 4;
  v7[8] = 2;
  v7[9] = 1;
  v8[0] = 4000;
  v8[1] = 800;
  v8[2] = 25;
  v8[3] = 12;
  v8[4] = 9;
  v8[5] = 6;
  v8[6] = 3;
  v8[7] = 3;
  v8[8] = 3;
  v8[9] = 2;
  v8[10] = 1;
  if ( *(_BYTE *)(this + 46) )
    v3 = 1;
  else
    v3 = *(_DWORD *)(this + 8);
  v11 = v3;
  if ( a2 < 0 )
    return 0;
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
      if ( v11 != 5 || a2 )
        result = v11 * v5[a2];
      else
        result = 5000;
      break;
    case 1:
      if ( v11 != 5 || a2 )
        result = v11 * v9[a2];
      else
        result = 5000;
      break;
    case 2:
      if ( v11 != 5 || a2 )
        result = v11 * v15[a2];
      else
        result = 2500;
      break;
    case 3:
      if ( v11 != 5 || a2 )
        result = v11 * v6[a2];
      else
        result = 4000;
      break;
    case 4:
      if ( v11 != 5 || a2 )
        result = v11 * v4[a2];
      else
        result = 4000;
      break;
    case 5:
      if ( v11 != 5 || a2 )
        result = v11 * v10[a2];
      else
        result = 4000;
      break;
    case 6:
      if ( v11 != 5 || a2 )
        result = v11 * v12[a2];
      else
        result = 4000;
      break;
    case 7:
      if ( v11 != 5 || a2 )
        result = v11 * v13[a2];
      else
        result = 4000;
      break;
    case 8:
      result = v11 * v14[a2];
      break;
    case 9:
      result = v11 * v7[a2];
      break;
    case 0xA:
      result = v11 * v8[a2];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_569F00
// entry 00569f00  size 212  status ok
//======================================================================

int __stdcall sub_569F00(int a1)
{
  int v2; // [esp+0h] [ebp-Ch]

  if ( a1 == -1 )
    return 0;
  v2 = *(_DWORD *)(dword_7947E0 + 20244);
  if ( v2 )
  {
    if ( v2 == 5 )
    {
      if ( a1 > 2 )
      {
        if ( a1 > 5 )
        {
          if ( a1 > 9 )
            return 3220072;
          else
            return 3220073;
        }
        else
        {
          return 3220074;
        }
      }
      else
      {
        return 3220075;
      }
    }
    else if ( v2 == 10 )
    {
      if ( a1 > 2 )
      {
        if ( a1 > 5 )
        {
          if ( a1 > 9 )
            return 3220072;
          else
            return 3220073;
        }
        else
        {
          return 3220074;
        }
      }
      else
      {
        return 3220075;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( a1 > 3 )
  {
    if ( a1 > 5 )
    {
      if ( a1 > 8 )
        return 3220072;
      else
        return 3220073;
    }
    else
    {
      return 3220074;
    }
  }
  else
  {
    return 3220075;
  }
}


//======================================================================
// sub_569FE0
// entry 00569fe0  size 131  status ok
//======================================================================

int __thiscall sub_569FE0(int this)
{
  int v3; // [esp+Ch] [ebp-4h]

  v3 = sub_5592A0((_WORD *)dword_793444, *(_DWORD *)(dword_7947E0 + 20244), this + 36);
  if ( !v3 )
    *(_BYTE *)(this + 47) = 1;
  sub_561E20((_DWORD *)dword_793440);
  if ( *(_DWORD *)(this + 20) == 1 )
    sub_55A4E0(dword_793444, *(_DWORD *)(dword_7947E0 + 20244), this + 36);
  return v3;
}


//======================================================================
// sub_56A070
// entry 0056a070  size 772  status ok
//======================================================================

int __thiscall sub_56A070(int this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-3Ch]
  _DWORD *v4; // [esp+Ch] [ebp-34h]
  int v5; // [esp+14h] [ebp-2Ch]
  __int16 v6; // [esp+18h] [ebp-28h]
  _WORD v7[6]; // [esp+1Ch] [ebp-24h]
  int v8; // [esp+2Ch] [ebp-14h]
  int i; // [esp+30h] [ebp-10h]
  int v10; // [esp+3Ch] [ebp-4h]

  sub_561D40(1);
  if ( !*(_DWORD *)(this + 20) )
  {
    *(_BYTE *)(this + 60) = 0;
    v5 = unknown_libname_543(*(_DWORD *)(this + 52));
    sub_56A7A0(v5, 1);
    sub_56A960(*(_DWORD *)(this + 52));
    sub_56AA50(*(_DWORD *)(this + 52));
    *(_BYTE *)(this + 48) = 1;
    *(_BYTE *)(this + 47) = 0;
    sub_5687B0();
    sub_569270((_WORD *)this);
    for ( i = 0; i < 5; ++i )
      *(_WORD *)(this + 2 * i + 36) = 0;
    sub_5645C0(*(unsigned __int8 **)(dword_793440 + 184), 0);
  }
  if ( *(_DWORD *)(this + 20) == 1 )
  {
    sub_56B130(*(_DWORD *)(this + 52));
    if ( (unsigned __int8)sub_5DF7B0(-1) )
    {
      if ( *(_BYTE *)(this + 48) )
      {
        *(_BYTE *)(this + 48) = sub_56A380(this);
        if ( !*(_BYTE *)(this + 48) )
        {
          sub_569270((_WORD *)this);
          result = sub_561E20((_DWORD *)dword_793440);
          if ( dword_793578 )
            return sub_57C140(dword_793578);
          return result;
        }
      }
    }
    sub_5F2BA0(5009);
  }
  sub_5623D0((_DWORD *)dword_793440);
  for ( i = 0; i < 5; ++i )
    v7[i] = *(_WORD *)(this + 2 * i + 36);
  for ( i = 0; i < 5; ++i )
  {
    if ( !sub_568840((unsigned __int16 *)this, v7[i]) )
    {
      if ( v7[i] )
        v8 = sub_562240((_DWORD *)dword_793440, v7[i]);
      else
        v8 = i;
      if ( sub_5692F0((_WORD *)this) == 5 )
        sub_569460((_WORD *)this, v7[i]);
      v6 = sub_6436C0(*(_DWORD *)(this + 16));
      sub_569340((__int16 *)this, v6);
      *(_WORD *)(*(_DWORD *)(dword_793440 + 4 * v8 + 8) + 400) = v6;
      *(_DWORD *)(*(_DWORD *)(dword_793440 + 4 * v8 + 8) + 416) = v8;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793440 + 4 * v8 + 8) + 112))(*(_DWORD *)(dword_793440
                                                                                                  + 4 * v8
                                                                                                  + 8));
    }
  }
  sub_569270((_WORD *)this);
  v4 = operator new(0x20u);
  v10 = 0;
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &VPMultiDealScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  v10 = -1;
  return sub_5FC420(v2);
}


//======================================================================
// sub_56A380
// entry 0056a380  size 398  status ok
//======================================================================

char __thiscall sub_56A380(_WORD *this)
{
  int k; // [esp+4h] [ebp-10h]
  int i; // [esp+8h] [ebp-Ch]
  int j; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  v6 = 0;
  v5 = 0;
  switch ( *(_BYTE *)(dword_793444 + 25) )
  {
    case 0x2E:
      return sub_568890(this);
    case 0x17:
      return sub_568950(this, 0);
    case 9:
      return sub_568950(this, 1);
    case 0x22:
      return sub_568C80(this, 0);
    case 0xA:
      return sub_568C80(this, 1);
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 13) )
      ++v6;
    if ( *(char *)(i + dword_793444 + 20) != -1 )
      ++v5;
  }
  if ( v6 != v5 )
    return 0;
  for ( j = 0; j < 5; ++j )
  {
    if ( *(this + j + 13) )
    {
      for ( k = 0;
            k < 5
         && (*(char *)(k + dword_793444 + 20) == -1
          || *(this + *(char *)(k + dword_793444 + 20) + 18) != *(this + j + 13));
            ++k )
      {
        ;
      }
      if ( k == 5 )
        return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_56A510
// entry 0056a510  size 72  status ok
//======================================================================

char __thiscall sub_56A510(_DWORD *this)
{
  char v3; // [esp+7h] [ebp-5h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = unknown_libname_543(*(this + 13));
  sub_568450(this, 1);
  v3 = sub_56A5D0(this);
  sub_56A7A0(v4, 0);
  return v3;
}


//======================================================================
// sub_56A560
// entry 0056a560  size 19  status ok
//======================================================================

int __thiscall sub_56A560(void *this)
{
  return sub_56A5D0(this);
}


//======================================================================
// sub_56A580
// entry 0056a580  size 76  status ok
//======================================================================

int __thiscall sub_56A580(_DWORD *this, _DWORD *a2)
{
  int *v2; // eax
  int v3; // edx
  int v4; // eax
  _BYTE v6[8]; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+14h] [ebp-4h]

  v7 = unknown_libname_543(*(this + 13)) + 1;
  v2 = (int *)sub_5D0C30(v6, 1);
  v3 = *v2;
  v4 = v2[1];
  *a2 = v3;
  a2[1] = v4;
  return sub_64C560((double)v7);
}


//======================================================================
// sub_56A5D0
// entry 0056a5d0  size 142  status ok
//======================================================================

int __thiscall sub_56A5D0(_DWORD *this)
{
  int *v1; // eax
  int v2; // edx
  _BYTE v5[8]; // [esp+4h] [ebp-2Ch] BYREF
  int v6; // [esp+Ch] [ebp-24h]
  int v7; // [esp+10h] [ebp-20h]
  int v8; // [esp+14h] [ebp-1Ch]
  int v9; // [esp+18h] [ebp-18h] BYREF
  int v10; // [esp+1Ch] [ebp-14h]
  int v11; // [esp+20h] [ebp-10h]
  _DWORD v12[3]; // [esp+24h] [ebp-Ch] BYREF

  v12[2] = sub_5D0AA0(this);
  v8 = 0;
  v11 = *(this + 1);
  sub_56A580(this, v12);
  sub_5DCB00(0);
  sub_5D5AC0(&v9);
  v1 = (int *)sub_5D0C30(v5, v11);
  v2 = v1[1];
  v6 = *v1;
  v7 = v2;
  v9 += v6;
  v10 += v2;
  sub_64C540(&v9);
  return sub_64C7A0(v12[0], v12[1]);
}


//======================================================================
// sub_56A660
// entry 0056a660  size 31  status ok
//======================================================================

BOOL __thiscall sub_56A660(_DWORD *this)
{
  return *(this + 1) > 0;
}


//======================================================================
// sub_56A680
// entry 0056a680  size 92  status ok
//======================================================================

bool __thiscall sub_56A680(_DWORD *this)
{
  return !*(this + 1) && !*(this + 2) && !(unsigned __int8)sub_56A560(this) && !sub_56A510(this);
}


//======================================================================
// sub_56A6E0
// entry 0056a6e0  size 59  status ok
//======================================================================

_DWORD *__thiscall sub_56A6E0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
    *(this + i + 186) = 0;
  return this;
}


//======================================================================
// sub_56A720
// entry 0056a720  size 126  status ok
//======================================================================

void __thiscall sub_56A720(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( *(this + i + 186) )
    {
      (***(this + i + 186))(*(this + i + 186), 1);
      *(this + i + 186) = 0;
    }
  }
}


//======================================================================
// sub_56A7A0
// entry 0056a7a0  size 94  status ok
//======================================================================

int __thiscall sub_56A7A0(_DWORD *this, int a2, unsigned __int8 a3)
{
  int result; // eax

  *(this + 184) = a2;
  CPaneContainer::SetPaneDivider((CPaneContainer *)dword_79343C, (struct CPaneDivider *)(a2 + 1));
  result = a3;
  if ( a3 )
  {
    if ( dword_793440 )
    {
      sub_563FB0(*(_BYTE **)(dword_793440 + 184));
      return sub_564490(*(_DWORD ***)(dword_793440 + 184));
    }
  }
  return result;
}


//======================================================================
// sub_56A800
// entry 0056a800  size 83  status ok
//======================================================================

int __thiscall sub_56A800(_DWORD *this)
{
  int v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *((_WORD *)this + i + 470) = 0;
  sub_56A7A0(this, 49, 1u);
  sub_56A860(this, i);
  return sub_56A960(v3);
}


//======================================================================
// sub_56A860
// entry 0056a860  size 251  status ok
//======================================================================

int __thiscall sub_56A860(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-24h]
  void *v4; // [esp+Ch] [ebp-1Ch]
  int v5; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]

  result = sub_5687E0() ? 7 : 0;
  v5 = result;
  for ( i = 0; i < 49; ++i )
  {
    result = (unsigned __int8)sub_56B950(i, 0);
    if ( (_BYTE)result )
    {
      if ( !*(this + i + 186) )
      {
        v4 = operator new(0x810u);
        if ( v4 )
          v2 = sub_642E10(v4);
        else
          v2 = 0;
        *(this + i + 186) = v2;
      }
      result = sub_642E70(v5);
    }
  }
  return result;
}


//======================================================================
// sub_56A960
// entry 0056a960  size 84  status ok
//======================================================================

void sub_56A960()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( (unsigned __int8)sub_56B950(i, 0) )
      sub_6437D0(1, 0);
  }
}


//======================================================================
// sub_56A9C0
// entry 0056a9c0  size 129  status ok
//======================================================================

void __thiscall sub_56A9C0(_WORD *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( (unsigned __int8)sub_56B950(i, 0) )
    {
      for ( j = 0; j < 5; ++j )
      {
        *(this + 5 * i + j + 123) = 0;
        *((_BYTE *)this + 5 * i + j) = 0;
      }
    }
  }
}


//======================================================================
// sub_56AA50
// entry 0056aa50  size 222  status ok
//======================================================================

int __thiscall sub_56AA50(_WORD *this)
{
  int v3; // [esp+0h] [ebp-10h]
  int k; // [esp+4h] [ebp-Ch]
  __int16 v5; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int j; // [esp+Ch] [ebp-4h]

  *(_DWORD *)(*(_DWORD *)(dword_79343C + 52) + 740) = unknown_libname_543(*(_DWORD *)(dword_79343C + 52));
  for ( i = 0; i < 5; ++i )
    *(this + i + 470) = 0;
  for ( j = 0; j < 49; ++j )
  {
    if ( (unsigned __int8)sub_56B950(j, 0) )
    {
      for ( k = 0; k < 5; ++k )
      {
        v5 = sub_6436C0(*((_DWORD *)this + j + 186));
        sub_56B460(j, k, v5);
      }
    }
  }
  sub_62FDE0("First Deal\n", (char)this);
  return sub_56B260(v3);
}


//======================================================================
// sub_56AB30
// entry 0056ab30  size 318  status ok
//======================================================================

char __thiscall sub_56AB30(_WORD *this, int a2, __int16 a3)
{
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int j; // [esp+14h] [ebp-4h]

  v7 = sub_641280(a3);
  v10 = sub_641290(a3);
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 470) )
    {
      v8 = sub_641280(*(this + i + 470));
      v5 = sub_641290(*(this + i + 470));
      if ( v8 == v7 && v5 == v10 )
        return 1;
    }
  }
  for ( j = 0; j < 5; ++j )
  {
    if ( *(this + 5 * a2 + j + 123) )
    {
      v9 = sub_641280(*(this + 5 * a2 + j + 123));
      v6 = sub_641290(*(this + 5 * a2 + j + 123));
      if ( v9 == v7 && v6 == v10 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_56AC70
// entry 0056ac70  size 109  status ok
//======================================================================

void __thiscall sub_56AC70(_WORD *this, __int16 a2, int a3, char a4)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( (unsigned __int8)sub_56B950(i, 0) )
    {
      *(this + 5 * i + a3 + 123) = a2;
      *((_BYTE *)this + 5 * i + a3) = a4;
    }
  }
}


//======================================================================
// sub_56ACE0
// entry 0056ace0  size 132  status ok
//======================================================================

void __thiscall sub_56ACE0(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(this + i + 470) = 0;
  for ( j = 0; j < 5; ++j )
  {
    if ( (unsigned __int8)sub_561ED0((_DWORD *)dword_793440, j) )
      *(this + j + 470) = sub_561F00((_DWORD *)dword_793440, j);
  }
}


//======================================================================
// sub_56AD70
// entry 0056ad70  size 51  status ok
//======================================================================

bool __thiscall sub_56AD70(_BYTE *this, __int16 a2, int a3, int a4)
{
  return a2 && *(this + 5 * a3 + a4) != 0;
}


//======================================================================
// sub_56ADB0
// entry 0056adb0  size 148  status ok
//======================================================================

void __thiscall sub_56ADB0(_BYTE *this, int a2, int a3)
{
  __int16 v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(_WORD *)(a3 + 2 * i) = 0;
  for ( j = 0; j < 5; ++j )
  {
    v4 = *((_WORD *)this + 5 * a2 + j + 123);
    if ( !sub_56AD70(this, v4, a2, j) )
      *(_WORD *)(a3 + 2 * j) = v4;
  }
}


//======================================================================
// sub_56AE50
// entry 0056ae50  size 113  status ok
//======================================================================

void __thiscall sub_56AE50(_BYTE *this, int a2)
{
  _WORD v2[6]; // [esp+8h] [ebp-14h] BYREF
  int i; // [esp+18h] [ebp-4h]

  sub_56ADB0(this, a2, (int)v2);
  for ( i = 0; i < 5; ++i )
  {
    if ( v2[i] )
      sub_56B490(a2, i);
  }
}


//======================================================================
// sub_56AED0
// entry 0056aed0  size 219  status ok
//======================================================================

int __thiscall sub_56AED0(_WORD *this, int a2)
{
  int result; // eax
  __int16 v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  if ( !(unsigned __int8)sub_56AFB0(a2) )
    sub_5E9F20((char)"IsValidHand(handNum)", "..\\Casino\\vpmstate.cpp", 1222);
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + 5 * a2 + i + 123) )
    {
      do
        v4 = sub_6436C0(*((_DWORD *)this + a2 + 186));
      while ( sub_56AB30(this, a2, v4) );
      sub_56B460(a2, i, v4);
    }
  }
  result = (unsigned __int8)sub_56AFB0(a2);
  if ( !(_BYTE)result )
    return sub_5E9F20((char)"IsValidHand(handNum)", "..\\Casino\\vpmstate.cpp", 1236);
  return result;
}


//======================================================================
// sub_56AFB0
// entry 0056afb0  size 379  status ok
//======================================================================

char __thiscall sub_56AFB0(_WORD *this, int a2)
{
  int j; // [esp+4h] [ebp-4CCh]
  __int16 v5; // [esp+8h] [ebp-4C8h]
  int v6; // [esp+Ch] [ebp-4C4h]
  _DWORD v7[301]; // [esp+10h] [ebp-4C0h] BYREF
  int v8; // [esp+4C4h] [ebp-Ch]
  int i; // [esp+4C8h] [ebp-8h]
  int v10; // [esp+4CCh] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 60; ++j )
      v7[5 * j + i] = 0;
  }
  for ( i = 0; i < 5; ++i )
  {
    v5 = *(this + 5 * a2 + i + 123);
    if ( v5 )
    {
      v6 = sub_641280(v5);
      v8 = sub_641290(v5);
      if ( v6 < 0 )
        v6 = 0;
      if ( v6 > 59 )
        v6 = 59;
      if ( v8 < 0 )
        v8 = 0;
      if ( v8 > 4 )
        v8 = 4;
      v10 = v7[5 * v6 + v8];
      if ( v10 >= 1 )
        return 0;
      ++v7[5 * v6 + v8];
    }
  }
  return 1;
}


//======================================================================
// sub_56B130
// entry 0056b130  size 297  status ok
//======================================================================

int __thiscall sub_56B130(_WORD *this)
{
  int v3; // [esp+0h] [ebp-10h]
  int j; // [esp+4h] [ebp-Ch]
  __int16 v5; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int k; // [esp+Ch] [ebp-4h]
  int m; // [esp+Ch] [ebp-4h]

  sub_56ACE0(this);
  for ( i = 0; i < 49; ++i )
  {
    if ( (unsigned __int8)sub_56B950(i, 0) )
    {
      for ( j = 0; j < 5; ++j )
        *(this + 5 * i + j + 123) = 0;
    }
  }
  for ( k = 0; k < 5; ++k )
  {
    if ( *(this + k + 470) )
    {
      v5 = sub_561F00((_DWORD *)dword_793440, k);
      sub_56AC70(this, v5, k, 1);
    }
  }
  for ( m = 0; m < 49; ++m )
  {
    if ( (unsigned __int8)sub_56B950(m, 0) )
    {
      sub_56AE50(this, m);
      sub_56AED0(this, m);
    }
  }
  sub_62FDE0("Final Deal\n", (char)this);
  return sub_56B260(v3);
}


//======================================================================
// sub_56B260
// entry 0056b260  size 76  status ok
//======================================================================

void sub_56B260()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( (unsigned __int8)sub_56B950(i, 0) )
      sub_56B2B0(i, 1);
  }
}


//======================================================================
// sub_56B2B0
// entry 0056b2b0  size 325  status ok
//======================================================================

int __thiscall sub_56B2B0(_WORD *this, int a2, char a3)
{
  int v3; // eax
  int v5; // [esp-8h] [ebp-21Ch]
  int i; // [esp+4h] [ebp-210h]
  __int16 v8; // [esp+8h] [ebp-20Ch]
  char Destination[256]; // [esp+Ch] [ebp-208h] BYREF
  char Buffer[260]; // [esp+10Ch] [ebp-108h] BYREF

  sprintf(Buffer, "Hand %d: ", a2);
  for ( i = 0; i < 5; ++i )
  {
    v8 = *(this + 5 * a2 + i + 123);
    if ( v8 )
    {
      v5 = sub_641290(v8);
      v3 = sub_641280(v8);
      sub_6413C0(Destination, v3, v5, 0);
      if ( i < 4 )
        strcat(Destination, ",");
      strcat(Buffer, Destination);
    }
    else
    {
      strcat(Buffer, "EMPTY,");
    }
  }
  if ( a3 )
    strcat(Buffer, "\n");
  return sub_62FDE0(Buffer, (char)this);
}


//======================================================================
// sub_56B400
// entry 0056b400  size 87  status ok
//======================================================================

int __thiscall sub_56B400(_WORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + 5 * a2 + i + 123) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_56B460
// entry 0056b460  size 40  status ok
//======================================================================

int __thiscall sub_56B460(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 5 * a2 + a3 + 123) = a4;
  return a3;
}


//======================================================================
// sub_56B490
// entry 0056b490  size 31  status ok
//======================================================================

int __thiscall sub_56B490(_WORD *this, int a2, int a3)
{
  return sub_56B460(this, a2, a3, 0);
}


//======================================================================
// sub_56B4B0
// entry 0056b4b0  size 181  status ok
//======================================================================

int __thiscall sub_56B4B0(_WORD *this, int a2)
{
  int result; // eax
  _WORD v4[6]; // [esp+4h] [ebp-14h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    v4[i] = *(this + 5 * a2 + i + 123);
    result = i + 1;
  }
  for ( i = 0; i < 5; ++i )
    result = sub_56B490(this, a2, i);
  for ( i = 0; i < 5; ++i )
    result = sub_56B570(a2, v4[i]);
  return result;
}


//======================================================================
// sub_56B570
// entry 0056b570  size 406  status ok
//======================================================================

__int16 __thiscall sub_56B570(_WORD *this, int a2, __int16 a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+Ch] [ebp-4h]
  int i; // [esp+Ch] [ebp-4h]

  if ( sub_56B400(this, a2) )
  {
    v4 = sub_641280(a3);
    if ( v4 > sub_641280(*(this + 5 * a2 + 123)) )
    {
      v3 = sub_56B400(this, a2) - 1;
      for ( i = v3; i > -1; --i )
      {
        v5 = sub_641280(a3);
        v3 = sub_641280(*(this + 5 * a2 + i + 123));
        if ( v5 >= v3 )
        {
          for ( j = 4; j > i + 1; --j )
            *(this + 5 * a2 + j + 123) = *(this + 5 * a2 + j + 122);
          v3 = (int)(this + 5 * a2 + 123);
          *(_WORD *)(v3 + 2 * i + 2) = a3;
          return v3;
        }
      }
    }
    else
    {
      for ( k = 4; k > 0; --k )
        *(this + 5 * a2 + k + 123) = *(this + 5 * a2 + k + 122);
      *(this + 5 * a2 + 123) = a3;
      LOWORD(v3) = 10 * a2;
    }
  }
  else
  {
    *(this + 5 * a2 + 123) = a3;
    LOWORD(v3) = a3;
  }
  return v3;
}


//======================================================================
// sub_56B710
// entry 0056b710  size 236  status ok
//======================================================================

int __thiscall sub_56B710(_WORD *this, int a2, int *a3)
{
  _WORD v5[6]; // [esp+8h] [ebp-18h]
  int v6; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    v5[i] = *(this + 5 * a2 + i + 123);
  sub_56B4B0(this, a2);
  *a3 = sub_5592A0((_WORD *)dword_793444, *(_DWORD *)(dword_7947E0 + 20244), (int)(this + 5 * a2 + 123));
  v6 = sub_5698C0(dword_79343C, *a3);
  for ( i = 0; i < 5; ++i )
    *(this + 5 * a2 + i + 123) = v5[i];
  return v6;
}


//======================================================================
// sub_56B800
// entry 0056b800  size 259  status ok
//======================================================================

int __fastcall sub_56B800(char a1)
{
  _WORD *v2; // [esp+0h] [ebp-118h]
  int v3; // [esp+4h] [ebp-114h]
  int v4; // [esp+8h] [ebp-110h] BYREF
  int v5; // [esp+Ch] [ebp-10Ch]
  char Buffer[256]; // [esp+10h] [ebp-108h] BYREF
  int i; // [esp+114h] [ebp-4h]

  v3 = 0;
  v5 = 0;
  sub_62FDE0("Payouts:\n", a1);
  for ( i = 0; i < 49; ++i )
  {
    if ( (unsigned __int8)sub_56B950(i, 0) )
    {
      v5 = sub_56B710(v2, i, &v4);
      if ( v5 )
      {
        v3 += v5;
        sub_56B2B0(v2, i, 0);
        sprintf(Buffer, "\t(wins %d credits with hand index #%d)\n", v5, v4);
        sub_62FDE0(Buffer, (char)v2);
      }
    }
  }
  return v3;
}


//======================================================================
// sub_56B930
// entry 0056b930  size 20  status ok
//======================================================================

int __thiscall sub_56B930(_DWORD *this)
{
  return *(this + 185);
}


//======================================================================
// sub_56B950
// entry 0056b950  size 142  status ok
//======================================================================

bool __thiscall sub_56B950(_DWORD *this, int a2, char a3)
{
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( a3 )
    v5 = sub_56B930(this);
  else
    v5 = unknown_libname_543(this);
  switch ( v5 )
  {
    case 0:
      v4 = 0;
      break;
    case 4:
      v4 = 1;
      break;
    case 9:
      v4 = 2;
      break;
    case 24:
      v4 = 3;
      break;
    default:
      v4 = 4;
      break;
  }
  return dword_7484C0[49 * v4 + a2] != 0;
}


//======================================================================
// sub_56BA40
// entry 0056ba40  size 377  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_56BA40(ATL::CCRTHeap *this)
{
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 j; // [esp+4h] [ebp-4h]
  __int16 k; // [esp+4h] [ebp-4h]
  __int16 m; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoadKillSlot::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 2) = 0;
  for ( j = 0; j < 4; ++j )
  {
    *((_DWORD *)this + j + 13) = 0;
    *((_DWORD *)this + j + 17) = 0;
  }
  for ( k = 0; k < 2; ++k )
  {
    *((_DWORD *)this + k + 21) = 0;
    *((_DWORD *)this + k + 23) = 0;
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  for ( m = 0; m < 7; ++m )
    *((_DWORD *)this + m + 31) = 0;
  *((_DWORD *)this + 1) = 0;
  return this;
}


//======================================================================
// sub_56BBC0
// entry 0056bbc0  size 1958  status ok
//======================================================================

void __thiscall sub_56BBC0(CNoTrackObject *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+60h] [ebp-9Ch]
  void (__thiscall ***v3)(_DWORD, int); // [esp+C8h] [ebp-34h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+D0h] [ebp-2Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+D8h] [ebp-24h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+E0h] [ebp-1Ch]
  void (__thiscall ***v7)(_DWORD, int); // [esp+E8h] [ebp-14h]
  __int16 i; // [esp+ECh] [ebp-10h]
  __int16 j; // [esp+ECh] [ebp-10h]
  __int16 k; // [esp+ECh] [ebp-10h]
  __int16 m; // [esp+ECh] [ebp-10h]

  *(_DWORD *)this = &RoadKillSlot::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 2) )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 2);
      (**v7)(v7, 1);
      *((_DWORD *)this + i + 2) = 0;
    }
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( *((_DWORD *)this + j + 13) )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + j + 13);
      (**v6)(v6, 1);
      *((_DWORD *)this + j + 13) = 0;
    }
    if ( *((_DWORD *)this + j + 17) )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + j + 17);
      (**v5)(v5, 1);
      *((_DWORD *)this + j + 17) = 0;
    }
  }
  for ( k = 0; k < 2; ++k )
  {
    if ( *((_DWORD *)this + k + 21) )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + k + 21);
      (**v4)(v4, 1);
      *((_DWORD *)this + k + 21) = 0;
    }
    if ( *((_DWORD *)this + k + 23) )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + k + 23);
      (**v3)(v3, 1);
      *((_DWORD *)this + k + 23) = 0;
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
    *((_DWORD *)this + 8) = 0;
  }
  if ( *((_DWORD *)this + 10) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 10))(*((_DWORD *)this + 10), 1);
    *((_DWORD *)this + 10) = 0;
  }
  if ( *((_DWORD *)this + 9) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 9))(*((_DWORD *)this + 9), 1);
    *((_DWORD *)this + 9) = 0;
  }
  if ( *((_DWORD *)this + 11) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 11))(*((_DWORD *)this + 11), 1);
    *((_DWORD *)this + 11) = 0;
  }
  if ( *((_DWORD *)this + 12) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 12))(*((_DWORD *)this + 12), 1);
    *((_DWORD *)this + 12) = 0;
  }
  if ( *((_DWORD *)this + 7) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
    *((_DWORD *)this + 7) = 0;
  }
  if ( *((_DWORD *)this + 25) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 25))(*((_DWORD *)this + 25), 1);
    *((_DWORD *)this + 25) = 0;
  }
  if ( *((_DWORD *)this + 26) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 26))(*((_DWORD *)this + 26), 1);
    *((_DWORD *)this + 26) = 0;
  }
  if ( *((_DWORD *)this + 27) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 27))(*((_DWORD *)this + 27), 1);
    *((_DWORD *)this + 27) = 0;
  }
  if ( *((_DWORD *)this + 28) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 28))(*((_DWORD *)this + 28), 1);
    *((_DWORD *)this + 28) = 0;
  }
  if ( *((_DWORD *)this + 29) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 29))(*((_DWORD *)this + 29), 1);
    *((_DWORD *)this + 29) = 0;
  }
  if ( *((_DWORD *)this + 30) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 30))(*((_DWORD *)this + 30), 1);
    *((_DWORD *)this + 30) = 0;
  }
  for ( m = 0; m < 7; ++m )
  {
    if ( *((_DWORD *)this + m + 31) )
    {
      v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + m + 31);
      (**v2)(v2, 1);
      *((_DWORD *)this + m + 31) = 0;
    }
  }
  if ( *((_DWORD *)this + 1) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
    *((_DWORD *)this + 1) = 0;
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_56C370
// entry 0056c370  size 5720  status ok
//======================================================================

int __thiscall sub_56C370(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-104h]
  int v8; // [esp+8h] [ebp-100h]
  int v9; // [esp+Ch] [ebp-FCh]
  int v10; // [esp+10h] [ebp-F8h]
  int v11; // [esp+14h] [ebp-F4h]
  int v12; // [esp+18h] [ebp-F0h]
  int v13; // [esp+1Ch] [ebp-ECh]
  int v14; // [esp+20h] [ebp-E8h]
  int v15; // [esp+24h] [ebp-E4h]
  int v16; // [esp+28h] [ebp-E0h]
  int v17; // [esp+2Ch] [ebp-DCh]
  int v18; // [esp+30h] [ebp-D8h]
  int v19; // [esp+34h] [ebp-D4h]
  int v20; // [esp+38h] [ebp-D0h]
  int v21; // [esp+3Ch] [ebp-CCh]
  _AFX_OLE_STATE *v22; // [esp+40h] [ebp-C8h]
  int v23; // [esp+44h] [ebp-C4h]
  int v24; // [esp+48h] [ebp-C0h]
  int v25; // [esp+4Ch] [ebp-BCh]
  _AFX_OLE_STATE *v26; // [esp+50h] [ebp-B8h]
  void *v28; // [esp+58h] [ebp-B0h]
  void *v29; // [esp+60h] [ebp-A8h]
  void *v30; // [esp+68h] [ebp-A0h]
  void *v31; // [esp+70h] [ebp-98h]
  void *v32; // [esp+80h] [ebp-88h]
  void *v33; // [esp+90h] [ebp-78h]
  void *v34; // [esp+98h] [ebp-70h]
  void *v35; // [esp+A0h] [ebp-68h]
  void *v36; // [esp+C0h] [ebp-48h]
  void *v37; // [esp+C8h] [ebp-40h]
  _AFX_OLE_STATE *v38; // [esp+D0h] [ebp-38h]
  void *v39; // [esp+D8h] [ebp-30h]
  void *v40; // [esp+E0h] [ebp-28h]
  void *v41; // [esp+E8h] [ebp-20h]
  _AFX_OLE_STATE *v42; // [esp+F0h] [ebp-18h]
  __int16 i; // [esp+F8h] [ebp-10h]
  __int16 j; // [esp+F8h] [ebp-10h]
  __int16 k; // [esp+F8h] [ebp-10h]
  __int16 m; // [esp+F8h] [ebp-10h]
  __int16 n; // [esp+F8h] [ebp-10h]

  sub_56D9D0(this);
  *(_DWORD *)(this + 160) = 0;
  *(_DWORD *)(this + 164) = 0;
  *(_BYTE *)(this + 152) = 1;
  *(_BYTE *)(this + 153) = 0;
  for ( i = 0; i < 7; ++i )
    *(_DWORD *)(this + 4 * i + 188) = -1;
  for ( j = 0; j < 5; ++j )
  {
    if ( !*(_DWORD *)(this + 4 * j + 8) )
    {
      v42 = (_AFX_OLE_STATE *)operator new(0x1DCu);
      if ( v42 )
        v26 = _AFX_OLE_STATE::_AFX_OLE_STATE(v42);
      else
        v26 = 0;
      *(_DWORD *)(this + 4 * j + 8) = v26;
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 8) + 64))(*(_DWORD *)(this + 4 * j + 8));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * j + 8) + 200))(
      *(_DWORD *)(this + 4 * j + 8),
      4 * (j < 4) + 90177);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4 * j + 8) + 68))(
      *(_DWORD *)(this + 4 * j + 8),
      0,
      0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * j + 8) + 108))(*(_DWORD *)(this + 4 * j + 8), 1500);
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * j + 8), (struct CPaneDivider *)j);
    if ( j >= 4 )
      sub_6023D0(1, 2, 0, 1);
    else
      sub_6023D0(4 * j, 4 * j + 1, 4 * j + 2, 4 * j + 3);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 8) + 208))(*(_DWORD *)(this + 4 * j + 8));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 8) + 116))(*(_DWORD *)(this + 4 * j + 8));
  }
  for ( k = 0; k < 4; ++k )
  {
    if ( !*(_DWORD *)(this + 4 * k + 52) )
    {
      v41 = operator new(0x178u);
      if ( v41 )
      {
        sub_5EAAF0(v41);
        v25 = v1;
      }
      else
      {
        v25 = 0;
      }
      *(_DWORD *)(this + 4 * k + 52) = v25;
    }
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * k + 52) + 68))(
      *(_DWORD *)(this + 4 * k + 52),
      dword_748898[2 * k],
      dword_74889C[2 * k]);
    sub_5EAF00(90159);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * k + 52) + 176))(*(_DWORD *)(this + 4 * k + 52), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 52) + 64))(*(_DWORD *)(this + 4 * k + 52));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 52) + 108))(*(_DWORD *)(this + 4 * k + 52), 20);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 52) + 112))(*(_DWORD *)(this + 4 * k + 52));
    if ( !*(_DWORD *)(this + 4 * k + 68) )
    {
      v40 = operator new(0x184u);
      if ( v40 )
        v24 = sub_5F5BF0(v40);
      else
        v24 = 0;
      *(_DWORD *)(this + 4 * k + 68) = v24;
    }
    if ( k >= 2 )
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4 * k + 68) + 68))(
        *(_DWORD *)(this + 4 * k + 68),
        k != 2 ? 324 : 255,
        0);
    else
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4 * k + 68) + 68))(
        *(_DWORD *)(this + 4 * k + 68),
        k != 0 ? 0x45 : 0,
        0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 68) + 108))(*(_DWORD *)(this + 4 * k + 68), 10);
    sub_5EAF00(90176);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * k + 68) + 176))(*(_DWORD *)(this + 4 * k + 68), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 68) + 64))(*(_DWORD *)(this + 4 * k + 68));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 68) + 112))(*(_DWORD *)(this + 4 * k + 68));
  }
  if ( !*(_DWORD *)(this + 48) )
  {
    v39 = operator new(0x184u);
    if ( v39 )
      v23 = sub_5F5BF0(v39);
    else
      v23 = 0;
    *(_DWORD *)(this + 48) = v23;
    sub_5EAF00(90007);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 48) + 108))(*(_DWORD *)(this + 48), 90);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 48) + 68))(*(_DWORD *)(this + 48), 120, 128);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 64))(*(_DWORD *)(this + 48));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 112))(*(_DWORD *)(this + 48));
    *(_DWORD *)(*(_DWORD *)(this + 48) + 376) = 4;
  }
  if ( !*(_DWORD *)(this + 28) )
  {
    v38 = (_AFX_OLE_STATE *)operator new(0x1DCu);
    if ( v38 )
      v22 = _AFX_OLE_STATE::_AFX_OLE_STATE(v38);
    else
      v22 = 0;
    *(_DWORD *)(this + 28) = v22;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 64))(*(_DWORD *)(this + 28));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 200))(*(_DWORD *)(this + 28), 90178);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), 0, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 108))(*(_DWORD *)(this + 28), 1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 204))(*(_DWORD *)(this + 28));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
  for ( m = 0; m < 2; ++m )
  {
    if ( !*(_DWORD *)(this + 4 * m + 84) )
    {
      v37 = operator new(0x178u);
      if ( v37 )
      {
        sub_5EAAF0(v37);
        v21 = v2;
      }
      else
      {
        v21 = 0;
      }
      *(_DWORD *)(this + 4 * m + 84) = v21;
    }
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 4 * m + 84) + 68))(
      *(_DWORD *)(this + 4 * m + 84),
      m != 0 ? 0x189 : 0,
      0);
    sub_5EAF00(90160);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 84) + 64))(*(_DWORD *)(this + 4 * m + 84));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * m + 84) + 108))(*(_DWORD *)(this + 4 * m + 84), 10);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 84) + 112))(*(_DWORD *)(this + 4 * m + 84));
    if ( !*(_DWORD *)(this + 4 * m + 92) )
    {
      v36 = operator new(0x184u);
      if ( v36 )
        v20 = sub_5F5BF0(v36);
      else
        v20 = 0;
      *(_DWORD *)(this + 4 * m + 92) = v20;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4 * m + 92) + 68))(
      *(_DWORD *)(this + 4 * m + 92),
      0,
      0);
    sub_5EAF00(90185);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * m + 92) + 176))(*(_DWORD *)(this + 4 * m + 92), m);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 92) + 64))(*(_DWORD *)(this + 4 * m + 92));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * m + 92) + 108))(*(_DWORD *)(this + 4 * m + 92), 10);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 92) + 116))(*(_DWORD *)(this + 4 * m + 92));
  }
  if ( !*(_DWORD *)(this + 32) )
  {
    if ( operator new(0x194u) )
      v19 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(9);
    else
      v19 = 0;
    *(_DWORD *)(this + 32) = v19;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 64))(*(_DWORD *)(this + 32));
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), 527, 236);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 108))(*(_DWORD *)(this + 32), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 116))(*(_DWORD *)(this + 32));
  if ( !*(_DWORD *)(this + 36) )
  {
    if ( operator new(0x194u) )
      v18 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(9);
    else
      v18 = 0;
    *(_DWORD *)(this + 36) = v18;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 64))(*(_DWORD *)(this + 36));
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 36) + 68))(*(_DWORD *)(this + 36), 30, 236);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 108))(*(_DWORD *)(this + 36), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 116))(*(_DWORD *)(this + 36));
  if ( !*(_DWORD *)(this + 40) )
  {
    if ( operator new(0x194u) )
      v17 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(1);
    else
      v17 = 0;
    *(_DWORD *)(this + 40) = v17;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 64))(*(_DWORD *)(this + 40));
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 40) + 68))(*(_DWORD *)(this + 40), 607, 273);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 40) + 108))(*(_DWORD *)(this + 40), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 116))(*(_DWORD *)(this + 40));
  if ( !*(_DWORD *)(this + 44) )
  {
    v35 = operator new(0x194u);
    if ( v35 )
      v16 = sub_570D50(v35);
    else
      v16 = 0;
    *(_DWORD *)(this + 44) = v16;
  }
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 64))(*(_DWORD *)(this + 44));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 116))(*(_DWORD *)(this + 44));
  if ( !*(_DWORD *)(this + 100) )
  {
    v34 = operator new(0x184u);
    if ( v34 )
      v15 = sub_5F5BF0(v34);
    else
      v15 = 0;
    *(_DWORD *)(this + 100) = v15;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 100) + 68))(*(_DWORD *)(this + 100), 0, 0);
  sub_5EAF00(90158);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 100) + 176))(*(_DWORD *)(this + 100), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 100) + 108))(*(_DWORD *)(this + 100), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 64))(*(_DWORD *)(this + 100));
  *(_DWORD *)(*(_DWORD *)(this + 100) + 376) = 8;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 112))(*(_DWORD *)(this + 100));
  if ( !*(_DWORD *)(this + 104) )
  {
    v33 = operator new(0x184u);
    if ( v33 )
      v14 = sub_5F5BF0(v33);
    else
      v14 = 0;
    *(_DWORD *)(this + 104) = v14;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 104) + 68))(*(_DWORD *)(this + 104), 0, 0);
  sub_5EAF00(90172);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 104) + 176))(*(_DWORD *)(this + 104), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 104) + 64))(*(_DWORD *)(this + 104));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 104) + 108))(*(_DWORD *)(this + 104), 10);
  *(_DWORD *)(*(_DWORD *)(this + 104) + 376) = 11;
  if ( operator new(0x1Cu) )
    v13 = sub_600A70(0);
  else
    v13 = 0;
  sub_5F5D50(v13);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 104) + 116))(*(_DWORD *)(this + 104));
  if ( !*(_DWORD *)(this + 108) )
  {
    v32 = operator new(0x184u);
    if ( v32 )
      v12 = sub_5F5BF0(v32);
    else
      v12 = 0;
    *(_DWORD *)(this + 108) = v12;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 108) + 68))(*(_DWORD *)(this + 108), 0, 0);
  sub_5EAF00(90173);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 108) + 176))(*(_DWORD *)(this + 108), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 108) + 64))(*(_DWORD *)(this + 108));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 108) + 108))(*(_DWORD *)(this + 108), 10);
  *(_DWORD *)(*(_DWORD *)(this + 108) + 376) = 13;
  if ( operator new(0x1Cu) )
    v11 = sub_600A70(0);
  else
    v11 = 0;
  sub_5F5D50(v11);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 108) + 116))(*(_DWORD *)(this + 108));
  if ( !*(_DWORD *)(this + 112) )
  {
    v31 = operator new(0x184u);
    if ( v31 )
      v10 = sub_5F5BF0(v31);
    else
      v10 = 0;
    *(_DWORD *)(this + 112) = v10;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 112) + 68))(*(_DWORD *)(this + 112), 0, 0);
  sub_5EAF00(90175);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 112) + 176))(*(_DWORD *)(this + 112), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 112) + 64))(*(_DWORD *)(this + 112));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 108))(*(_DWORD *)(this + 112), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 112) + 116))(*(_DWORD *)(this + 112));
  if ( !*(_DWORD *)(this + 116) )
  {
    v30 = operator new(0x178u);
    if ( v30 )
    {
      sub_5EAAF0(v30);
      v9 = v3;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)(this + 116) = v9;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 116) + 68))(*(_DWORD *)(this + 116), 0, 0);
  sub_5EAF00(90171);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 116) + 176))(*(_DWORD *)(this + 116), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 116) + 64))(*(_DWORD *)(this + 116));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 116) + 108))(*(_DWORD *)(this + 116), 2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 116) + 116))(*(_DWORD *)(this + 116));
  if ( !*(_DWORD *)(this + 120) )
  {
    v29 = operator new(0x178u);
    if ( v29 )
    {
      sub_5EAAF0(v29);
      v8 = v4;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(this + 120) = v8;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 120) + 68))(*(_DWORD *)(this + 120), 0, 0);
  sub_5EAF00(90183);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 120) + 176))(
    *(_DWORD *)(this + 120),
    *(_DWORD *)(this + 156));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 120) + 64))(*(_DWORD *)(this + 120));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 120) + 108))(*(_DWORD *)(this + 120), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 120) + 116))(*(_DWORD *)(this + 120));
  for ( n = 0; n < 7; ++n )
  {
    if ( !*(_DWORD *)(this + 4 * n + 124) )
    {
      v28 = operator new(0x178u);
      if ( v28 )
      {
        sub_5EAAF0(v28);
        v7 = v5;
      }
      else
      {
        v7 = 0;
      }
      *(_DWORD *)(this + 4 * n + 124) = v7;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4 * n + 124) + 68))(
      *(_DWORD *)(this + 4 * n + 124),
      0,
      0);
    sub_5EAF00(90174);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * n + 124) + 176))(
      *(_DWORD *)(this + 4 * n + 124),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * n + 124) + 64))(*(_DWORD *)(this + 4 * n + 124));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * n + 124) + 108))(*(_DWORD *)(this + 4 * n + 124), 10);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * n + 124) + 112))(*(_DWORD *)(this + 4 * n + 124));
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79344C + 4) + 4))(*(_DWORD *)(dword_79344C + 4), 1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79344C + 4) + 28))(*(_DWORD *)(dword_79344C + 4), 0);
  return sub_57AB80(5, &unk_749848);
}


//======================================================================
// sub_56D9D0
// entry 0056d9d0  size 96  status ok
//======================================================================

_DWORD *__thiscall sub_56D9D0(_DWORD *this)
{
  _DWORD *result; // eax

  *(this + 39) = *(_DWORD *)(dword_7947E0 + 20240);
  result = this;
  if ( *(this + 39) >= 0xCu )
  {
    result = (_DWORD *)sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 337);
    *(this + 39) = 3;
  }
  return result;
}


//======================================================================
// sub_56DA30
// entry 0056da30  size 499  status ok
//======================================================================

__int64 *__thiscall sub_56DA30(_DWORD *this, __int64 *a2, int a3)
{
  __int64 v5; // [esp+10h] [ebp-8h]

  v5 = sub_64C8A0(0, 0);
  if ( a3 > 999999999 )
    sub_5E9F20((char)"numCredits <= MAX_ROADKILL_CREDITS", "..\\Casino\\roadkillslot.cpp", 346);
  switch ( *(this + 39) )
  {
    case 0:
      LODWORD(v5) = a3 / 20;
      HIDWORD(v5) = 5 * (a3 % 20);
      break;
    case 1:
      LODWORD(v5) = a3 / 10;
      HIDWORD(v5) = 10 * (a3 % 10);
      break;
    case 2:
      LODWORD(v5) = a3 / 4;
      HIDWORD(v5) = 25 * (a3 % 4);
      break;
    case 3:
      LODWORD(v5) = a3;
      break;
    case 4:
      if ( a3 < 200000000 )
        LODWORD(v5) = 5 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 5:
      if ( a3 < 100000000 )
        LODWORD(v5) = 10 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 6:
      if ( a3 < 40000000 )
        LODWORD(v5) = 25 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 7:
      if ( a3 < (int)&unk_1312D00 )
        LODWORD(v5) = 50 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 8:
      if ( a3 < (int)&unk_989680 )
        LODWORD(v5) = 100 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 9:
      if ( a3 < (int)&unk_989680 )
        LODWORD(v5) = 250 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 0xA:
      if ( a3 < (int)&unk_1312D00 )
        LODWORD(v5) = 500 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    case 0xB:
      if ( a3 < 1000000 )
        LODWORD(v5) = 1000 * a3;
      else
        LODWORD(v5) = 1000000000;
      break;
    default:
      break;
  }
  *a2 = v5;
  return a2;
}


//======================================================================
// sub_56DC60
// entry 0056dc60  size 388  status ok
//======================================================================

int __thiscall sub_56DC60(_DWORD *this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  if ( a2 > 1000000000 )
    sub_5E9F20((char)"money.dollars <= 1000000000", "..\\Casino\\roadkillslot.cpp", 423);
  switch ( *(this + 39) )
  {
    case 0:
      if ( a2 <= 49999999 )
        v5 = 20 * a2 + a3 / 5;
      else
        v5 = 999999999;
      break;
    case 1:
      if ( a2 <= 99999999 )
        v5 = 10 * a2 + a3 / 10;
      else
        v5 = 999999999;
      break;
    case 2:
      if ( a2 <= 249999999 )
        v5 = 4 * a2 + a3 / 25;
      else
        v5 = 999999999;
      break;
    case 3:
      if ( a2 <= 999999999 )
        v5 = a2;
      else
        v5 = 999999999;
      break;
    case 4:
      v5 = a2 / 5;
      break;
    case 5:
      v5 = a2 / 10;
      break;
    case 6:
      v5 = a2 / 25;
      break;
    case 7:
      v5 = a2 / 50;
      break;
    case 8:
      v5 = a2 / 100;
      break;
    case 9:
      v5 = a2 / 250;
      break;
    case 0xA:
      v5 = a2 / 500;
      break;
    case 0xB:
      v5 = a2 / 1000;
      break;
    default:
      return v5;
  }
  return v5;
}


//======================================================================
// sub_56DE20
// entry 0056de20  size 244  status ok
//======================================================================

int __thiscall sub_56DE20(int this)
{
  int *v1; // eax
  int result; // eax
  _BYTE v4[8]; // [esp+4h] [ebp-Ch] BYREF
  __int16 i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 204))(*(_DWORD *)(this + 4 * i + 8));
  if ( !*(_DWORD *)(this + 164) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 208))(*(_DWORD *)(this + 20));
  sub_5DCB00(0);
  v1 = (int *)sub_5D5A90(v4);
  result = sub_56DC60((_DWORD *)this, *v1, v1[1]);
  if ( !result && !*(_DWORD *)(this + 160) && !*(_DWORD *)(this + 164) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 208))(*(_DWORD *)(this + 8));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 208))(*(_DWORD *)(this + 12));
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 208))(*(_DWORD *)(this + 16));
  }
  return result;
}


//======================================================================
// sub_56DF20
// entry 0056df20  size 78  status ok
//======================================================================

__int16 __thiscall sub_56DF20(_DWORD **this)
{
  __int16 result; // ax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 2) + 208))(*(this + i + 2));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_56DF70
// entry 0056df70  size 116  status ok
//======================================================================

int __thiscall sub_56DF70(_DWORD *this, int a2)
{
  const CHAR *v2; // eax
  const CHAR *v4; // [esp-8h] [ebp-Ch]

  *(this + 40) += a2;
  if ( *(this + 40) > 0x3B9AC9FFu )
  {
    v4 = (const CHAR *)sub_630F40("SID_ROADPIZZA");
    v2 = (const CHAR *)sub_630F40("SID_ROADPIZZA_MAXCREDITS");
    sub_62FF10(v2, v4, 0);
    sub_56E6B0(this);
  }
  return sub_5709B0(*(this + 40));
}


//======================================================================
// sub_56DFF0
// entry 0056dff0  size 169  status ok
//======================================================================

int __thiscall sub_56DFF0(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  v3 = this;
  *(this + 40) -= a2;
  if ( !*(this + 40) && !*(this + 41) )
  {
    sub_56E340(this);
    if ( !*((_BYTE *)v3 + 153) )
    {
      sub_56F870(v3);
      sub_56E3E0(v3);
    }
  }
  return sub_5709B0(v3[40]);
}


//======================================================================
// sub_56E0A0
// entry 0056e0a0  size 100  status ok
//======================================================================

int __thiscall sub_56E0A0(_DWORD *this, int a2)
{
  if ( a2 > 2 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 552);
    a2 = 2;
  }
  if ( a2 )
    sub_56E480(this);
  *(this + 41) = a2;
  return sub_5709B0(*(this + 41));
}


//======================================================================
// sub_56E110
// entry 0056e110  size 131  status ok
//======================================================================

int __thiscall sub_56E110(int *this, int a2)
{
  int result; // eax

  *(this + 42) = a2;
  if ( *(this + 42) > 999999999 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 571);
    *(this + 42) = 999999999;
  }
  sub_5709B0(*(this + 42));
  result = (int)this;
  if ( *(this + 42) > 0 )
    return sub_56DF70(this, *(this + 42));
  return result;
}


//======================================================================
// sub_56E1A0
// entry 0056e1a0  size 128  status ok
//======================================================================

int __thiscall sub_56E1A0(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 42) += a2;
  if ( (int)*(this + 42) > 999999999 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 586);
    *(this + 42) = 999999999;
  }
  result = sub_5709B0(*(this + 42));
  if ( a2 > 0 )
    return sub_56DF70(this, a2);
  return result;
}


//======================================================================
// sub_56E230
// entry 0056e230  size 263  status ok
//======================================================================

int __thiscall sub_56E230(_DWORD **this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-44h]
  void *v5; // [esp+Ch] [ebp-3Ch]
  _DWORD v6[10]; // [esp+14h] [ebp-34h]
  int v7; // [esp+44h] [ebp-4h]

  v6[0] = 4;
  v6[1] = 3;
  v6[2] = 0;
  v6[3] = 1;
  v6[4] = 2;
  v6[5] = 5;
  v6[6] = 6;
  v6[7] = 7;
  v6[8] = -1;
  v6[9] = -1;
  v1 = sub_56F0D0(this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 26) + 176))(*(this + 26), v6[v1]);
  v5 = operator new(0x28u);
  v7 = 0;
  if ( v5 )
    v3 = sub_601110(0, 0, 1, 0, 0);
  else
    v3 = 0;
  v7 = -1;
  sub_5F5D50(v3);
  return (*(int (__thiscall **)(_DWORD))(**(this + 26) + 116))(*(this + 26));
}


//======================================================================
// sub_56E340
// entry 0056e340  size 152  status ok
//======================================================================

int __thiscall sub_56E340(_DWORD **this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1Cu) )
    v2 = sub_600A70(0);
  else
    v2 = 0;
  sub_5F5D50(v2);
  return (*(int (__thiscall **)(_DWORD))(**(this + 26) + 116))(*(this + 26));
}


//======================================================================
// sub_56E3E0
// entry 0056e3e0  size 152  status ok
//======================================================================

int __thiscall sub_56E3E0(_DWORD **this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1Cu) )
    v2 = sub_600A70(0);
  else
    v2 = 0;
  sub_5F5D50(v2);
  return (*(int (__thiscall **)(_DWORD))(**(this + 27) + 116))(*(this + 27));
}


//======================================================================
// sub_56E480
// entry 0056e480  size 91  status ok
//======================================================================

int __thiscall sub_56E480(int this)
{
  if ( !*(_BYTE *)(this + 153) )
  {
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 108) + 112))(*(_DWORD *)(this + 108));
  }
  sub_5F5D50(0);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 104) + 112))(*(_DWORD *)(this + 104));
}


//======================================================================
// sub_56E4E0
// entry 0056e4e0  size 114  status ok
//======================================================================

int __thiscall sub_56E4E0(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 164) != 2 )
  {
    if ( *(_DWORD *)(this + 160) )
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 204))(*(_DWORD *)(this + 20));
      if ( *(int *)(this + 164) < 2 )
      {
        sub_56E0A0((_DWORD *)this, *(_DWORD *)(this + 164) + 1);
        return sub_56DFF0((_DWORD *)this, 1);
      }
    }
    else
    {
      return sub_56E800(1);
    }
  }
  return result;
}


//======================================================================
// sub_56E560
// entry 0056e560  size 183  status ok
//======================================================================

int __thiscall sub_56E560(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 164) != 2 )
  {
    if ( *(_DWORD *)(this + 160) )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 204))(*(_DWORD *)(this + 20));
      if ( *(_DWORD *)(this + 160) <= (unsigned int)(2 - *(_DWORD *)(this + 164)) )
      {
        sub_56E0A0((_DWORD *)this, *(_DWORD *)(this + 160));
        return sub_56DFF0((_DWORD *)this, *(_DWORD *)(this + 160));
      }
      else
      {
        sub_56DFF0((_DWORD *)this, 2 - *(_DWORD *)(this + 164));
        return sub_56E0A0((_DWORD *)this, 2);
      }
    }
    else
    {
      return sub_56E800(2 - *(_DWORD *)(this + 164));
    }
  }
  return result;
}


//======================================================================
// sub_56E640
// entry 0056e640  size 104  status ok
//======================================================================

int __thiscall sub_56E640(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 164) )
  {
    *(_BYTE *)(this + 152) = 0;
    sub_56DF20((_DWORD **)this);
    sub_56E110((int *)this, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79344C + 4) + 4))(*(_DWORD *)(dword_79344C + 4), 2);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79344C + 4) + 28))(
             *(_DWORD *)(dword_79344C + 4),
             0);
  }
  return result;
}


//======================================================================
// sub_56E6B0
// entry 0056e6b0  size 331  status ok
//======================================================================

int __thiscall sub_56E6B0(int this)
{
  __int64 *v1; // eax
  int v2; // edx
  __int64 *v3; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // edx
  int v8; // [esp+4h] [ebp-3Ch]
  int v9; // [esp+4h] [ebp-3Ch]
  int v10; // [esp+8h] [ebp-38h]
  int v11; // [esp+8h] [ebp-38h]
  _BYTE v13[8]; // [esp+10h] [ebp-30h] BYREF
  __int64 v14; // [esp+18h] [ebp-28h] BYREF
  __int64 v15; // [esp+20h] [ebp-20h] BYREF
  int v16; // [esp+28h] [ebp-18h]
  int v17; // [esp+2Ch] [ebp-14h]
  int v18; // [esp+30h] [ebp-10h]
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  v16 = 0;
  v17 = 0;
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    101000,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  v1 = sub_56DA30((_DWORD *)this, &v15, *(_DWORD *)(this + 160));
  v2 = *((_DWORD *)v1 + 1);
  v18 = *(_DWORD *)v1;
  v19 = v2;
  v3 = sub_56DA30((_DWORD *)this, &v14, *(_DWORD *)(this + 164));
  v4 = *((_DWORD *)v3 + 1);
  v20 = *(_DWORD *)v3;
  v21 = v4;
  sub_56E0A0((_DWORD *)this, 0);
  sub_56E110((int *)this, 0);
  sub_56DFF0((_DWORD *)this, *(_DWORD *)(this + 160));
  if ( v18 >= 1000000000 )
  {
    v18 = 1000000000;
    v19 = 0;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 208))(*(_DWORD *)(this + 20));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 208))(*(_DWORD *)(this + 24));
  v5 = (int *)sub_64C5C0(v13, v20, v21);
  v6 = v5[1];
  v16 = *v5;
  v17 = v6;
  v10 = v6;
  v8 = v16;
  sub_5DCB00(0);
  sub_5D5FB0(v8, v10);
  v11 = v17;
  v9 = v16;
  sub_5DCB00(0);
  return sub_5D5CF0(v9, v11);
}


//======================================================================
// sub_56E800
// entry 0056e800  size 297  status ok
//======================================================================

int __thiscall sub_56E800(int this, int a2)
{
  __int64 *v2; // eax
  int v3; // edx
  int v4; // eax
  __int64 *v5; // eax
  int v6; // edx
  int v8; // [esp-8h] [ebp-2Ch]
  int v9; // [esp-8h] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-28h]
  int v11; // [esp-4h] [ebp-28h]
  __int64 v13; // [esp+4h] [ebp-20h] BYREF
  __int64 v14; // [esp+Ch] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17[2]; // [esp+1Ch] [ebp-8h] BYREF

  if ( a2 + *(_DWORD *)(this + 164) > 2 )
    sub_5E9F20((char)"curBet + numCredits <= MAX_ROADKILL_BET", "..\\Casino\\roadkillslot.cpp", 735);
  v2 = sub_56DA30((_DWORD *)this, &v14, a2);
  v3 = *(_DWORD *)v2;
  v4 = *((_DWORD *)v2 + 1);
  v15 = v3;
  v16 = v4;
  sub_5DCB00(0);
  sub_5D5AC0(v17);
  if ( (unsigned __int8)sub_64C6A0(v15, v16) )
  {
    a2 = sub_56DC60((_DWORD *)this, v17[0], v17[1]);
    v5 = sub_56DA30((_DWORD *)this, &v13, a2);
    v6 = *((_DWORD *)v5 + 1);
    v15 = *(_DWORD *)v5;
    v16 = v6;
  }
  sub_56E0A0((_DWORD *)this, a2 + *(_DWORD *)(this + 164));
  if ( *(_DWORD *)(this + 164) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 204))(*(_DWORD *)(this + 20));
  v15 = -v15;
  v16 = -v16;
  v10 = v16;
  v8 = v15;
  sub_5DCB00(0);
  sub_5D5FB0(v8, v10);
  v11 = v16;
  v9 = v15;
  sub_5DCB00(0);
  return sub_5D5CF0(v9, v11);
}


//======================================================================
// sub_56E930
// entry 0056e930  size 186  status ok
//======================================================================

int __thiscall sub_56E930(int *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  __int64 v5; // [esp+Ch] [ebp-8h] BYREF

  v5 = sub_64C8A0(0, 0);
  sub_5DCB00(0);
  sub_5D5AC0(&v5);
  if ( *(this + 39) > 2 && (v1 = sub_56E9F0(*(this + 39)), (int)v5 < v1)
    || (result = (int)this, *(this + 39) <= 2)
    && !(_DWORD)v5
    && (result = sub_56EAC0(*(this + 39)), SHIDWORD(v5) < result) )
  {
    result = (int)this;
    if ( !*(this + 40) && !*(this + 41) )
    {
      v3 = sub_5DCB00(0);
      return sub_5DBB70(v3);
    }
  }
  return result;
}


//======================================================================
// sub_56E9F0
// entry 0056e9f0  size 158  status ok
//======================================================================

int __stdcall sub_56E9F0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
    case 1:
    case 2:
      sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 776);
      goto LABEL_13;
    case 3:
      result = 1;
      break;
    case 4:
      result = 5;
      break;
    case 5:
      result = 10;
      break;
    case 6:
      result = 25;
      break;
    case 7:
      result = 50;
      break;
    case 8:
      result = 100;
      break;
    case 9:
      result = 250;
      break;
    case 10:
      result = 500;
      break;
    case 11:
      result = 1000;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 786);
LABEL_13:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_56EAC0
// entry 0056eac0  size 91  status ok
//======================================================================

int __stdcall sub_56EAC0(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 5;
    case 1:
      return 10;
    case 2:
      return 25;
  }
  sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 798);
  return 0;
}


//======================================================================
// sub_56EB20
// entry 0056eb20  size 149  status ok
//======================================================================

int __thiscall sub_56EB20(void *this)
{
  int v3; // [esp+4h] [ebp-14h]
  __int16 v4; // [esp+8h] [ebp-10h]
  __int16 i; // [esp+Ch] [ebp-Ch]
  double v6; // [esp+10h] [ebp-8h]

  v4 = -1;
  v6 = 0.0;
  v3 = sub_62FBF0(1000000);
  for ( i = 0; i < 10; ++i )
  {
    v6 = 1000000.0 * dbl_748928[i] + v6;
    if ( (double)v3 < v6 )
    {
      v4 = i;
      break;
    }
  }
  if ( v4 == -1 )
    return sub_56EE90(this);
  else
    return sub_56F040(v4);
}


//======================================================================
// sub_56EBC0
// entry 0056ebc0  size 339  status ok
//======================================================================

int __thiscall sub_56EBC0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v2 = (int)this;
  v5 = 0;
  v3 = *(this + 41);
  sub_56E0A0(this, 0);
  if ( (unsigned __int8)sub_56F160(v2) )
  {
    v4 = sub_56F0D0(v2);
    if ( v4 < 8 )
    {
      v5 = v3 * dword_7488F0[v4];
      sub_56E230((_DWORD **)v2);
      if ( *(_BYTE *)(v2 + 153) )
      {
        if ( v4 != 1 )
          sub_56F560(v4);
      }
    }
    sub_56E110((int *)v2, v5);
    if ( v4 == 8 && !*(_BYTE *)(v2 + 153) )
      sub_56F3E0(v2, v3);
    if ( v4 == 9 )
      sub_56F870(v2);
  }
  else
  {
    sub_56E480(v2);
    sub_56E110((int *)v2, 0);
  }
  if ( !*(_DWORD *)(v2 + 160) )
  {
    sub_56E340((_DWORD **)v2);
    if ( !*(_BYTE *)(v2 + 153) )
    {
      sub_56F870(v2);
      sub_56E3E0((_DWORD **)v2);
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 44) + 400) )
    *(_BYTE *)(v2 + 153) = 0;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79344C + 4) + 4))(*(_DWORD *)(dword_79344C + 4), 1);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79344C + 4) + 28))(
           *(_DWORD *)(dword_79344C + 4),
           0);
}


//======================================================================
// sub_56ED20
// entry 0056ed20  size 357  status ok
//======================================================================

void __thiscall sub_56ED20(_DWORD *this)
{
  int v1; // [esp+10h] [ebp-20h]
  int i; // [esp+20h] [ebp-10h]

  for ( i = 0; i < 7 && *(this + i + 47) != -1; ++i )
    ;
  if ( i )
  {
    if ( i == 1 )
    {
      sub_56E1A0(this, dword_748918);
    }
    else if ( i >= 3 )
    {
      if ( i >= 7 )
        sub_56E1A0(this, dword_748924);
      else
        sub_56E1A0(this, dword_748920);
    }
    else
    {
      sub_56E1A0(this, dword_74891C);
    }
    if ( operator new(0x28u) )
      v1 = sub_601110(0, 0, 1, 0, 0);
    else
      v1 = 0;
    sub_5F5D50(v1);
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        103018,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
  }
}


//======================================================================
// sub_56EE90
// entry 0056ee90  size 425  status ok
//======================================================================

int __thiscall sub_56EE90(_DWORD *this)
{
  int result; // eax

  *(this + 43) = sub_62FBF0(10);
  *(this + 44) = sub_62FBF0(10);
  if ( (unsigned __int8)sub_56F130(*(this + 43), *(this + 44)) )
  {
    *(this + 45) = sub_62FBF0(9);
    if ( (int)*(this + 45) >= 1 )
      ++*(this + 45);
  }
  else
  {
    *(this + 45) = sub_62FBF0(10);
  }
  if ( (unsigned __int8)sub_56F130(*(this + 43), *(this + 44))
    && (unsigned __int8)sub_56F130(*(this + 43), *(this + 45)) )
  {
    *(this + 46) = sub_62FBF0(8);
    if ( *(this + 46) < *(this + 45) )
    {
      result = (int)this;
      if ( (int)*(this + 46) >= 1 )
      {
        result = ++*(this + 46);
        if ( result >= *(this + 45) )
        {
          result = (int)this;
          ++*(this + 46);
        }
      }
    }
    else
    {
      result = *(this + 46) + 1;
      *(this + 46) = result;
      if ( (int)*(this + 46) >= 1 )
      {
        result = (int)this;
        ++*(this + 46);
      }
    }
  }
  else
  {
    result = sub_62FBF0(10);
    *(this + 46) = result;
  }
  return result;
}


//======================================================================
// sub_56F040
// entry 0056f040  size 140  status ok
//======================================================================

__int16 __thiscall sub_56F040(_DWORD *this, int a2)
{
  __int16 result; // ax
  __int16 i; // [esp+4h] [ebp-8h]
  __int16 v5; // [esp+8h] [ebp-4h]

  v5 = sub_62FBF0(4);
  result = v5;
  *(this + v5 + 43) = a2;
  for ( i = 0; i < 4; ++i )
  {
    if ( i != v5 )
    {
      if ( sub_62FBF0(5) )
        *(this + i + 43) = a2;
      else
        *(this + i + 43) = 1;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_56F0D0
// entry 0056f0d0  size 83  status ok
//======================================================================

int __thiscall sub_56F0D0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 1;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 43) != 1 )
      return *(this + i + 43);
  }
  return v2;
}


//======================================================================
// sub_56F130
// entry 0056f130  size 39  status ok
//======================================================================

bool __stdcall sub_56F130(int a1, int a2)
{
  return a1 == 1 || a2 == 1 || a1 == a2;
}


//======================================================================
// sub_56F160
// entry 0056f160  size 125  status ok
//======================================================================

char __thiscall sub_56F160(_DWORD *this)
{
  int j; // [esp+4h] [ebp-10h]
  char v4; // [esp+Bh] [ebp-9h]
  int i; // [esp+10h] [ebp-4h]

  v4 = 1;
  for ( i = 0; i < 3; ++i )
  {
    for ( j = i; j < 4; ++j )
    {
      if ( !sub_56F130(*(this + i + 43), *(this + j + 43)) )
        v4 = 0;
    }
  }
  return v4;
}


//======================================================================
// sub_56F1E0
// entry 0056f1e0  size 470  status ok
//======================================================================

int __thiscall sub_56F1E0(int this)
{
  int result; // eax

  result = (unsigned __int8)sub_56F160((_DWORD *)this);
  if ( (_BYTE)result )
  {
    result = sub_56F0D0((_DWORD *)this);
    switch ( result )
    {
      case 0:
      case 1:
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103017,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
        break;
      case 2:
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103009,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
        break;
      case 3:
      case 4:
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103015,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
        break;
      case 6:
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103006,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
        break;
      case 7:
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103008,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
        break;
      case 8:
        if ( !*(_BYTE *)(this + 153) )
          result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                     dword_162EE84,
                     103016,
                     0,
                     0,
                     5,
                     1,
                     1.0,
                     0.5,
                     0);
        break;
      case 9:
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103020,
                   0,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
        break;
      default:
        return result;
    }
  }
  return result;
}


//======================================================================
// sub_56F3E0
// entry 0056f3e0  size 146  status ok
//======================================================================

int __thiscall sub_56F3E0(int this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x28u) )
    v2 = sub_571200(*(_DWORD *)(this + 44));
  else
    v2 = 0;
  result = sub_5F5DF0(v2);
  *(_BYTE *)(this + 153) = 1;
  return result;
}


//======================================================================
// sub_56F480
// entry 0056f480  size 213  status ok
//======================================================================

int __thiscall sub_56F480(int this)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 44) + 388) + 176))(
    *(_DWORD *)(*(_DWORD *)(this + 44) + 388),
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 44) + 392) + 176))(
    *(_DWORD *)(*(_DWORD *)(this + 44) + 392),
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 44) + 396) + 176))(
    *(_DWORD *)(*(_DWORD *)(this + 44) + 396),
    0);
  sub_5F5DF0(0);
  result = unknown_libname_843(*(_DWORD *)(dword_79344C + 4));
  if ( result == 1 )
  {
    *(_BYTE *)(this + 153) = 0;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79344C + 4) + 4))(*(_DWORD *)(dword_79344C + 4), 1);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79344C + 4) + 28))(
             *(_DWORD *)(dword_79344C + 4),
             0);
  }
  return result;
}


//======================================================================
// sub_56F560
// entry 0056f560  size 745  status ok
//======================================================================

int __thiscall sub_56F560(_DWORD **this, _DWORD *a2)
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
  int v11; // [esp-4h] [ebp-14h]
  __int16 i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    result = (int)this;
    if ( *(this + i + 47) == a2 )
      return result;
    if ( *(this + i + 47) == (_DWORD *)-1 )
      break;
  }
  *(this + i + 47) = a2;
  if ( i )
  {
    switch ( i )
    {
      case 1:
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 176))(*(this + 27), 2);
        break;
      case 3:
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 176))(*(this + 27), 1);
        break;
      case 6:
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 27) + 176))(*(this + 27), 0);
        break;
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 176))(*(this + 27), 3);
  }
  (*(void (__thiscall **)(_DWORD))(**(this + 27) + 116))(*(this + 27));
  switch ( (unsigned int)a2 )
  {
    case 0u:
      v9 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v9);
      break;
    case 2u:
      v8 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v8 + 2);
      break;
    case 3u:
      v7 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v7 + 4);
      break;
    case 4u:
      v6 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v6 + 6);
      break;
    case 5u:
      v5 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v5 + 8);
      break;
    case 6u:
      v4 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v4 + 10);
      break;
    case 7u:
      v3 = sub_62FBF0(2);
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 31) + 176))(*(this + i + 31), v3 + 12);
      break;
    default:
      break;
  }
  v11 = dword_7488BC[2 * i] + sub_62FBF0(5) - 2;
  v10 = sub_62FBF0(5);
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + i + 31) + 68))(
    *(this + i + 31),
    dword_7488B8[2 * i] + v10 - 2,
    v11);
  return (*(int (__thiscall **)(_DWORD))(**(this + i + 31) + 116))(*(this + i + 31));
}


//======================================================================
// sub_56F870
// entry 0056f870  size 112  status ok
//======================================================================

int __thiscall sub_56F870(_DWORD **this)
{
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 31) + 112))(*(this + i + 31));
    *(this + i + 47) = (_DWORD *)-1;
  }
  return (*(int (__thiscall **)(_DWORD))(**(this + 27) + 112))(*(this + 27));
}


//======================================================================
// sub_56F8E0
// entry 0056f8e0  size 201  status ok
//======================================================================

int __thiscall sub_56F8E0(int *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  void *v4; // [esp+10h] [ebp-1Ch]

  result = (int)this;
  if ( *(this + 1) )
  {
    result = *(this + 1);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 1))(*(this + 1), 1);
    *(this + 1) = 0;
  }
  if ( !*(this + 1) )
  {
    v4 = operator new(0x84u);
    if ( v4 )
      v2 = sub_571660(v4);
    else
      v2 = 0;
    *(this + 1) = v2;
    return v2;
  }
  return result;
}


//======================================================================
// sub_56F9F0
// entry 0056f9f0  size 184  status ok
//======================================================================

void __thiscall sub_56F9F0(pairNode *this)
{
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    100004,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  switch ( pairNode::raw_length(this) )
  {
    case 0:
      ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)dword_793450);
      break;
    case 1:
      sub_56E560(dword_793450);
      break;
    case 2:
      sub_56E4E0(dword_793450);
      break;
    case 3:
      sub_56E640(dword_793450);
      break;
    case 4:
      sub_56E6B0(dword_793450);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 1161);
      break;
  }
}


//======================================================================
// sub_56FAC0
// entry 0056fac0  size 136  status ok
//======================================================================

int __thiscall sub_56FAC0(pairNode *this)
{
  int v1; // kr00_4
  int result; // eax

  sub_602650(this);
  v1 = pairNode::raw_length(this);
  switch ( v1 )
  {
    case 0:
      result = sub_5F2BA0(3207006);
      break;
    case 1:
      result = sub_5F2BA0(3207005);
      break;
    case 2:
      result = sub_5F2BA0(3207004);
      break;
    case 3:
      result = sub_5F2BA0(3207003);
      break;
    case 4:
      result = sub_5F2BA0(3207002);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_56FB60
// entry 0056fb60  size 146  status ok
//======================================================================

int __thiscall sub_56FB60(pairNode *this)
{
  int v1; // kr00_4
  int result; // eax

  sub_6025C0(this);
  v1 = pairNode::raw_length(this);
  switch ( v1 )
  {
    case 0:
      result = sub_5F2B20(3207006, 1);
      break;
    case 1:
      result = sub_5F2B20(3207005, 1);
      break;
    case 2:
      result = sub_5F2B20(3207004, 1);
      break;
    case 3:
      result = sub_5F2B20(3207003, 1);
      break;
    case 4:
      result = sub_5F2B20(3207002, 1);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_56FC50
// entry 0056fc50  size 40  status ok
//======================================================================

int sub_56FC50()
{
  int result; // eax

  result = unknown_libname_843(*(_DWORD *)(dword_79344C + 4));
  if ( result == 1 )
    return sub_5DC2E0();
  return result;
}


//======================================================================
// sub_56FC80
// entry 0056fc80  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_56FC80(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &RoadKillSlotSpinScript::`vftable';
  return this;
}


//======================================================================
// sub_56FCD0
// entry 0056fcd0  size 1514  status ok
//======================================================================

int __thiscall sub_56FCD0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp+14h] [ebp-3Ch]
  int v5; // [esp+18h] [ebp-38h]
  int v6; // [esp+1Ch] [ebp-34h]
  int i; // [esp+40h] [ebp-10h]
  int j; // [esp+40h] [ebp-10h]
  int k; // [esp+40h] [ebp-10h]
  int m; // [esp+40h] [ebp-10h]

  result = sub_5FC3A0(a2);
  switch ( a2 )
  {
    case 0:
      sub_56EB20((void *)dword_793450);
      for ( i = 0; i < 2; ++i )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 4 * i + 84) + 112))(*(_DWORD *)(dword_793450 + 4 * i + 84));
      for ( j = 0; j < 4; ++j )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 4 * j + 68) + 116))(*(_DWORD *)(dword_793450 + 4 * j + 68));
        if ( operator new(0x2Cu) )
          v6 = sub_5714A0(12, 2, 10);
        else
          v6 = 0;
        sub_5F5D50(v6);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 4 * j + 52) + 112))(*(_DWORD *)(dword_793450 + 4 * j + 52));
      }
      if ( operator new(0x2Cu) )
        v5 = sub_5714A0(15, 5, 13);
      else
        v5 = 0;
      sub_5F5D50(v5);
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          103014,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 210);
      break;
    case 1:
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 2);
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, void *, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                   dword_162EE84,
                   103013,
                   this,
                   0,
                   5,
                   1,
                   1.0,
                   0.5,
                   0);
      else
        result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 10);
      break;
    case 2:
      for ( k = 0; k < 2; ++k )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 4 * k + 84) + 116))(*(_DWORD *)(dword_793450 + 4 * k + 84));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 100) + 116))(*(_DWORD *)(dword_793450 + 100));
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793450 + 100) + 176))(
        *(_DWORD *)(dword_793450 + 100),
        0);
      if ( operator new(0x20u) )
        v4 = sub_571420(0);
      else
        v4 = 0;
      sub_5F5D50(v4);
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          103012,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 3);
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 25);
      break;
    case 3:
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
      {
        if ( sub_56F160((_DWORD *)dword_793450) && sub_56F0D0((_DWORD *)dword_793450) == 5 )
        {
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            103021,
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
          v3 = sub_62FBF0(2);
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            2 * v3 + 103005,
            0,
            0,
            5,
            1,
            1.0,
            0.5,
            0);
        }
      }
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 4);
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 20);
      break;
    case 4:
      for ( m = 0; m < 4; ++m )
      {
        sub_5F5D50(0);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 4 * m + 68) + 112))(*(_DWORD *)(dword_793450 + 4 * m + 68));
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793450 + 4 * m + 52) + 176))(
          *(_DWORD *)(dword_793450 + 4 * m + 52),
          *(_DWORD *)(dword_793450 + 4 * m + 172));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 4 * m + 52) + 116))(*(_DWORD *)(dword_793450 + 4 * m + 52));
      }
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
        sub_56F1E0(dword_793450);
      sub_5F5D50(0);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 5);
      result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 28))(this, 15);
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79344C + 4) + 4))(*(_DWORD *)(dword_79344C + 4), 3);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79344C + 4) + 28))(*(_DWORD *)(dword_79344C + 4), 0);
      result = sub_5FC420(0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5703E0
// entry 005703e0  size 350  status ok
//======================================================================

int __thiscall sub_5703E0(__int16 *this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+14h] [ebp-20h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+20h] [ebp-14h]
  __int16 i; // [esp+24h] [ebp-10h]

  *(_DWORD *)this = &RoadKillSlotCounter::`vftable';
  if ( *((_DWORD *)this + 99) )
  {
    for ( i = 0; i < *(this + 194); ++i )
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 99) + 4 * i) )
      {
        v4 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 99) + 4 * i);
        if ( v4 )
          (**v4)(v4, 1);
        *(_DWORD *)(*((_DWORD *)this + 99) + 4 * i) = 0;
      }
    }
    operator delete(*((void **)this + 99));
    *((_DWORD *)this + 99) = 0;
  }
  if ( *((_DWORD *)this + 100) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 100);
    if ( v3 )
      (**v3)(v3, 1);
    *((_DWORD *)this + 100) = 0;
  }
  return sub_5F5C40();
}


//======================================================================
// sub_570540
// entry 00570540  size 563  status ok
//======================================================================

_DWORD *__thiscall sub_570540(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // eax
  int v3; // eax
  int IsFixedSize; // eax
  int v5; // [esp+4h] [ebp-20h]
  void *v7; // [esp+Ch] [ebp-18h]
  __int16 i; // [esp+14h] [ebp-10h]

  sub_5F5CC0(this);
  *(this + 98) = 0;
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 120))(this, 9 * *((__int16 *)this + 194), 25);
  for ( i = 0; ; ++i )
  {
    result = this;
    if ( i >= *((__int16 *)this + 194) )
      break;
    v7 = operator new(0x178u);
    if ( v7 )
    {
      sub_5EAAF0(v7);
      v5 = v2;
    }
    else
    {
      v5 = 0;
    }
    *(_DWORD *)(*(this + 99) + 4 * i) = v5;
    sub_5EAF00(90180);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 99) + 4 * i) + 176))(
      *(_DWORD *)(*(this + 99) + 4 * i),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 99) + 4 * i) + 64))(*(_DWORD *)(*(this + 99) + 4 * i));
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(this + 99) + 4 * i) + 68))(
      *(_DWORD *)(*(this + 99) + 4 * i),
      *(this + 6) - 9 * (i + 1),
      v3);
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)this);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 99) + 4 * i) + 108))(
      *(_DWORD *)(*(this + 99) + 4 * i),
      IsFixedSize);
    if ( CMFCScanliner::channels((CMFCScanliner *)this) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 99) + 4 * i) + 112))(*(_DWORD *)(*(this + 99) + 4 * i));
    else
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 99) + 4 * i) + 116))(*(_DWORD *)(*(this + 99) + 4 * i));
  }
  return result;
}


//======================================================================
// sub_570780
// entry 00570780  size 154  status ok
//======================================================================

int __thiscall sub_570780(int this, int a2, int a3)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5EB260(a2, a3);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= *(__int16 *)(this + 388) )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) )
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 68))(
        *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i),
        *(_DWORD *)(this + 24) - 9 * (i + 1),
        a3);
  }
  return result;
}


//======================================================================
// sub_570820
// entry 00570820  size 129  status ok
//======================================================================

int __thiscall sub_570820(int this, int a2)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5F5300(a2);
  for ( i = 0; ; ++i )
  {
    result = this;
    if ( i >= *(__int16 *)(this + 388) )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 108))(
        *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i),
        a2);
  }
  return result;
}


//======================================================================
// sub_5708B0
// entry 005708b0  size 121  status ok
//======================================================================

int __thiscall sub_5708B0(void *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5EB5A0(this, this);
  for ( i = 0; ; ++i )
  {
    result = *(__int16 *)(v2 + 388);
    if ( i >= result )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 396) + 4 * i) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(v2 + 396) + 4 * i) + 112))(*(_DWORD *)(*(_DWORD *)(v2 + 396) + 4 * i));
  }
  return result;
}


//======================================================================
// sub_570930
// entry 00570930  size 121  status ok
//======================================================================

int __thiscall sub_570930(int this)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5EB570(this);
  for ( i = 0; ; ++i )
  {
    result = *(__int16 *)(this + 388);
    if ( i >= result )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 116))(*(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i));
  }
  return result;
}


//======================================================================
// sub_5709B0
// entry 005709b0  size 277  status ok
//======================================================================

int __thiscall sub_5709B0(__int16 *this, int a2)
{
  int v3; // [esp+4h] [ebp-24h]
  int i; // [esp+14h] [ebp-14h]
  int v6; // [esp+18h] [ebp-10h]
  int v7; // [esp+18h] [ebp-10h]

  v6 = 1;
  for ( i = 0; i < *(this + 194); ++i )
    v6 *= 10;
  v7 = v6 - 1;
  if ( a2 < 0 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 1456);
    a2 = 0;
  }
  if ( a2 > v7 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 1460);
    a2 = v7;
  }
  if ( operator new(0x34u) )
    v3 = sub_570AD0(a2, this);
  else
    v3 = 0;
  return sub_5F5DF0(v3);
}


//======================================================================
// sub_570AD0
// entry 00570ad0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_570AD0(_DWORD *this, int a2, int a3)
{
  sub_5FC0D0(0);
  *this = &RoadKillSlotCounterScript::`vftable';
  *(this + 8) = a2;
  *(this + 12) = a3;
  *(this + 9) = 1;
  *(this + 10) = GetTickCount();
  *((_BYTE *)this + 44) = *(this + 8) >= *(_DWORD *)(*(this + 12) + 392);
  return this;
}


//======================================================================
// sub_570B40
// entry 00570b40  size 38  status ok
//======================================================================

int __thiscall sub_570B40(_DWORD *this)
{
  *this = &RoadKillSlotCounterScript::`vftable';
  *(this + 12) = 0;
  return sub_5FC150();
}


//======================================================================
// sub_570B70
// entry 00570b70  size 480  status ok
//======================================================================

int __thiscall sub_570B70(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-20h]
  DWORD TickCount; // [esp+Ch] [ebp-14h]
  char v5; // [esp+13h] [ebp-Dh]
  unsigned int Flags; // [esp+14h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  TickCount = GetTickCount();
  v5 = 0;
  if ( unknown_libname_843(this) )
    return sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 1538);
  v8 = *(this + 8);
  for ( i = 0; i < *(this + 9); ++i )
  {
    Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(*(_DWORD *)(*(this + 12) + 396)
                                                                                  + 4 * i));
    if ( Flags == 2 * (v8 % 10) )
    {
      if ( *(this + 9) < *(__int16 *)(*(this + 12) + 388) && *(this + 9) == i + 1 )
      {
        ++*(this + 9);
        *(this + 10) = TickCount;
      }
    }
    else
    {
      if ( *((_BYTE *)this + 44) )
        v2 = Flags + 1;
      else
        v2 = Flags - 1;
      v7 = v2;
      if ( v2 == 20 )
        v7 = 0;
      if ( v7 == -1 )
        v7 = 19;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(*(this + 12) + 396) + 4 * i) + 176))(
        *(_DWORD *)(*(_DWORD *)(*(this + 12) + 396) + 4 * i),
        v7);
      v5 = 1;
    }
    v8 /= 10;
  }
  if ( v5 )
  {
    if ( TickCount > *(this + 10) + 300 )
    {
      if ( *(this + 9) < *(__int16 *)(*(this + 12) + 388) )
        ++*(this + 9);
      *(this + 10) = TickCount;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 5);
  }
  else
  {
    *(_DWORD *)(*(this + 12) + 392) = *(this + 8);
    return (int)this;
  }
}


//======================================================================
// sub_570D50
// entry 00570d50  size 80  status ok
//======================================================================

_DWORD *__thiscall sub_570D50(_DWORD *this)
{
  sub_5F5BF0(this);
  *this = &RoadKillSlotTimer::`vftable';
  *(this + 97) = 0;
  *(this + 98) = 0;
  *(this + 99) = 0;
  *((_BYTE *)this + 400) = 1;
  return this;
}


//======================================================================
// sub_570DA0
// entry 00570da0  size 311  status ok
//======================================================================

int __thiscall sub_570DA0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&RoadKillSlotTimer::`vftable';
  if ( *(this + 97) )
  {
    (***(this + 97))(*(this + 97), 1);
    *(this + 97) = 0;
  }
  if ( *(this + 98) )
  {
    (***(this + 98))(*(this + 98), 1);
    *(this + 98) = 0;
  }
  if ( *(this + 99) )
  {
    (***(this + 99))(*(this + 99), 1);
    *(this + 99) = 0;
  }
  return sub_5F5C40();
}


//======================================================================
// sub_570EE0
// entry 00570ee0  size 799  status ok
//======================================================================

int __thiscall sub_570EE0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-34h]
  int v6; // [esp+8h] [ebp-30h]
  int v7; // [esp+Ch] [ebp-2Ch]
  void *v9; // [esp+14h] [ebp-24h]
  void *v10; // [esp+1Ch] [ebp-1Ch]
  void *v11; // [esp+24h] [ebp-14h]

  sub_5F5CC0(this);
  if ( !*(this + 97) )
  {
    v11 = operator new(0x178u);
    if ( v11 )
    {
      sub_5EAAF0(v11);
      v7 = v1;
    }
    else
    {
      v7 = 0;
    }
    *(this + 97) = v7;
  }
  sub_5EAF00(90184);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 97) + 176))(*(this + 97), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 97) + 64))(*(this + 97));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 97) + 68))(*(this + 97), 418, 53);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 97) + 108))(*(this + 97), 10);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 97) + 116))(*(this + 97));
  if ( !*(this + 98) )
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v6 = v2;
    }
    else
    {
      v6 = 0;
    }
    *(this + 98) = v6;
  }
  sub_5EAF00(90184);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 98) + 176))(*(this + 98), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 98) + 64))(*(this + 98));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 98) + 68))(*(this + 98), 434, 53);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 98) + 108))(*(this + 98), 10);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 98) + 116))(*(this + 98));
  if ( !*(this + 99) )
  {
    v9 = operator new(0x178u);
    if ( v9 )
    {
      sub_5EAAF0(v9);
      v5 = v3;
    }
    else
    {
      v5 = 0;
    }
    *(this + 99) = v5;
  }
  sub_5EAF00(90184);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 99) + 176))(*(this + 99), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 99) + 64))(*(this + 99));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 99) + 68))(*(this + 99), 444, 53);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 99) + 108))(*(this + 99), 10);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 99) + 116))(*(this + 99));
}


//======================================================================
// sub_571200
// entry 00571200  size 135  status ok
//======================================================================

_DWORD *__thiscall sub_571200(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &RoadKillSlotTimerScript::`vftable';
  *(this + 9) = CMediaType::IsFixedSize(dword_162EE84) + 7260;
  *(this + 8) = a2;
  *(_BYTE *)(*(this + 8) + 400) = 0;
  return this;
}


//======================================================================
// sub_571290
// entry 00571290  size 51  status ok
//======================================================================

int __thiscall sub_571290(_DWORD *this)
{
  *this = &RoadKillSlotTimerScript::`vftable';
  *(_BYTE *)(*(this + 8) + 400) = 1;
  *(this + 8) = 0;
  return sub_5FC150();
}


//======================================================================
// sub_5712D0
// entry 005712d0  size 326  status ok
//======================================================================

int __thiscall sub_5712D0(_DWORD *this)
{
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  if ( unknown_libname_843(this) )
    return sub_5E9F20((char)"false", "..\\Casino\\roadkillslot.cpp", 1642);
  v4 = (*(this + 9) - CMediaType::IsFixedSize(dword_162EE84)) / 60;
  v3 = v4 / 60;
  v4 %= 60;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 176))(*(_DWORD *)(*(this + 8) + 388), v3);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 176))(
    *(_DWORD *)(*(this + 8) + 392),
    v4 / 10);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 176))(
    *(_DWORD *)(*(this + 8) + 396),
    v4 % 10);
  if ( v4 || v3 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 5);
  }
  else
  {
    *(_BYTE *)(*(this + 8) + 400) = 1;
    return sub_56F480(dword_793450);
  }
}


//======================================================================
// sub_571420
// entry 00571420  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_571420(_DWORD *this, int a2)
{
  sub_6010A0(a2);
  *this = &RoadKillSlotEndLoop::`vftable';
  return this;
}


//======================================================================
// sub_571470
// entry 00571470  size 40  status ok
//======================================================================

int __thiscall sub_571470(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
  return sub_6005D0(this);
}


//======================================================================
// sub_5714A0
// entry 005714a0  size 135  status ok
//======================================================================

_DWORD *__thiscall sub_5714A0(_DWORD *this, int a2, int a3, int a4)
{
  sub_600A70(0);
  *this = &RoadKillSlotAccelerateCycle::`vftable';
  *(this + 7) = a2;
  *(this + 8) = a3;
  *(this + 9) = a4;
  *(this + 10) = CMediaType::IsFixedSize(dword_162EE84);
  return this;
}


//======================================================================
// sub_571550
// entry 00571550  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_571550(_DWORD *this, int a2, int a3)
{
  sub_6004E0(a2, 0);
  *(_DWORD *)(*(this + 1) + 376) = *(this + 7);
  return this;
}


//======================================================================
// sub_571580
// entry 00571580  size 216  status ok
//======================================================================

unsigned int __thiscall sub_571580(int this)
{
  int IsFixedSize; // eax
  int v2; // eax

  IsFixedSize = CMediaType::IsFixedSize(dword_162EE84);
  if ( abs(IsFixedSize - *(_DWORD *)(this + 40)) > *(_DWORD *)(this + 36) )
  {
    *(_DWORD *)(this + 40) = CMediaType::IsFixedSize(dword_162EE84);
    if ( --*(_DWORD *)(*(_DWORD *)(this + 4) + 376) < *(_DWORD *)(this + 32) )
      *(_DWORD *)(*(_DWORD *)(this + 4) + 376) = *(_DWORD *)(this + 32);
  }
  v2 = CMediaType::IsFixedSize(dword_162EE84);
  if ( abs(v2 - *(_DWORD *)(this + 16)) < *(_DWORD *)(*(_DWORD *)(this + 4) + 376) )
    return CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 4));
  *(_DWORD *)(this + 16) = CMediaType::IsFixedSize(dword_162EE84);
  return *(_DWORD *)(this + 12) + CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 4));
}


//======================================================================
// sub_571660
// entry 00571660  size 254  status ok
//======================================================================

int __thiscall sub_571660(int this)
{
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 j; // [esp+4h] [ebp-4h]
  __int16 k; // [esp+4h] [ebp-4h]
  __int16 m; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &RoadKillSlotDebug::`vftable';
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(this + 4 * i + 8) = 0;
  for ( j = 0; j < 7; ++j )
    *(_DWORD *)(this + 4 * j + 24) = -1;
  for ( k = 0; k < 9; ++k )
    *(_DWORD *)(this + 4 * k + 64) = 0;
  for ( m = 0; m < 8; ++m )
    *(_DWORD *)(this + 4 * m + 100) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_BYTE *)(this + 4) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  return this;
}


//======================================================================
// sub_571800
// entry 00571800  size 149  status ok
//======================================================================

int __thiscall sub_571800(void *this)
{
  int v3; // [esp+4h] [ebp-14h]
  __int16 v4; // [esp+8h] [ebp-10h]
  __int16 i; // [esp+Ch] [ebp-Ch]
  double v6; // [esp+10h] [ebp-8h]

  v4 = -1;
  v6 = 0.0;
  v3 = sub_62FBF0(1000000);
  for ( i = 0; i < 10; ++i )
  {
    v6 = 1000000.0 * dbl_748928[i] + v6;
    if ( (double)v3 < v6 )
    {
      v4 = i;
      break;
    }
  }
  if ( v4 == -1 )
    return sub_571A50(this);
  else
    return sub_571BA0(v4);
}


//======================================================================
// sub_5718A0
// entry 005718a0  size 233  status ok
//======================================================================

int __thiscall sub_5718A0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  result = (unsigned __int8)sub_571CB0(this);
  if ( (_BYTE)result )
  {
    result = sub_571C30(this);
    v3 = result;
    if ( result < 8 )
    {
      v4 = *(_DWORD *)(this + 56) * dword_7488F0[result];
      *(_DWORD *)(this + 60) += v4;
      *(_DWORD *)(this + 4 * result + 64) += v4;
      *(_DWORD *)(this + 96) += v4;
      result = this;
      if ( *(_BYTE *)(this + 4) )
      {
        if ( v3 != 1 )
          result = sub_571D30(v3);
      }
    }
    if ( v3 == 8 )
    {
      result = this;
      if ( !*(_BYTE *)(this + 4) )
      {
        *(_BYTE *)(this + 4) = 1;
        result = this;
        *(_DWORD *)(this + 52) = 0;
      }
    }
    if ( v3 == 9 )
      result = sub_571D90(this);
  }
  if ( *(_BYTE *)(this + 4) )
  {
    result = this;
    if ( *(int *)(this + 52) >= 20 )
      *(_BYTE *)(this + 4) = 0;
  }
  return result;
}


//======================================================================
// sub_571990
// entry 00571990  size 181  status ok
//======================================================================

_DWORD *__thiscall sub_571990(_DWORD *this)
{
  _DWORD *result; // eax
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 7 && *(this + i + 6) != -1; ++i )
    result = (_DWORD *)(i + 1);
  if ( i )
  {
    if ( i == 1 )
    {
      v3 = dword_748918;
    }
    else if ( i >= 3 )
    {
      if ( i >= 7 )
        v3 = dword_748924;
      else
        v3 = dword_748920;
    }
    else
    {
      v3 = dword_74891C;
    }
    *(this + 15) += v3;
    *(this + i + 24) += v3;
    *(this + 32) += v3;
    return this;
  }
  return result;
}


//======================================================================
// sub_571A50
// entry 00571a50  size 334  status ok
//======================================================================

int __thiscall sub_571A50(_DWORD *this)
{
  int result; // eax

  *(this + 2) = sub_62FBF0(10);
  *(this + 3) = sub_62FBF0(10);
  if ( (unsigned __int8)sub_571C80(*(this + 2), *(this + 3)) )
  {
    *(this + 4) = sub_62FBF0(9);
    if ( (int)*(this + 4) >= 1 )
      ++*(this + 4);
  }
  else
  {
    *(this + 4) = sub_62FBF0(10);
  }
  if ( (unsigned __int8)sub_571C80(*(this + 2), *(this + 3)) && (unsigned __int8)sub_571C80(*(this + 2), *(this + 4)) )
  {
    *(this + 5) = sub_62FBF0(8);
    if ( *(this + 5) < *(this + 4) )
    {
      result = (int)this;
      if ( (int)*(this + 5) >= 1 )
      {
        result = ++*(this + 5);
        if ( result >= *(this + 4) )
        {
          result = (int)this;
          ++*(this + 5);
        }
      }
    }
    else
    {
      result = *(this + 5) + 1;
      *(this + 5) = result;
      if ( (int)*(this + 5) >= 1 )
      {
        result = (int)this;
        ++*(this + 5);
      }
    }
  }
  else
  {
    result = sub_62FBF0(10);
    *(this + 5) = result;
  }
  return result;
}


//======================================================================
// sub_571BA0
// entry 00571ba0  size 131  status ok
//======================================================================

__int16 __thiscall sub_571BA0(_DWORD *this, int a2)
{
  __int16 result; // ax
  __int16 i; // [esp+4h] [ebp-8h]
  __int16 v5; // [esp+8h] [ebp-4h]

  v5 = sub_62FBF0(4);
  result = v5;
  *(this + v5 + 2) = a2;
  for ( i = 0; i < 4; ++i )
  {
    if ( i != v5 )
    {
      if ( sub_62FBF0(5) )
        *(this + i + 2) = a2;
      else
        *(this + i + 2) = 1;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_571C30
// entry 00571c30  size 77  status ok
//======================================================================

int __thiscall sub_571C30(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 1;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 2) != 1 )
      return *(this + i + 2);
  }
  return v2;
}


//======================================================================
// sub_571C80
// entry 00571c80  size 39  status ok
//======================================================================

bool __stdcall sub_571C80(int a1, int a2)
{
  return a1 == 1 || a2 == 1 || a1 == a2;
}


//======================================================================
// sub_571CB0
// entry 00571cb0  size 119  status ok
//======================================================================

char __thiscall sub_571CB0(_DWORD *this)
{
  int j; // [esp+4h] [ebp-10h]
  char v4; // [esp+Bh] [ebp-9h]
  int i; // [esp+10h] [ebp-4h]

  v4 = 1;
  for ( i = 0; i < 3; ++i )
  {
    for ( j = i; j < 4; ++j )
    {
      if ( !sub_571C80(*(this + i + 2), *(this + j + 2)) )
        v4 = 0;
    }
  }
  return v4;
}


//======================================================================
// sub_571D30
// entry 00571d30  size 96  status ok
//======================================================================

_DWORD *__thiscall sub_571D30(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    result = this;
    if ( *(this + i + 6) == a2 )
      return result;
    if ( *(this + i + 6) == -1 )
      break;
  }
  *(this + i + 6) = a2;
  return (_DWORD *)a2;
}


//======================================================================
// sub_571D90
// entry 00571d90  size 59  status ok
//======================================================================

__int16 __thiscall sub_571D90(_DWORD *this)
{
  __int16 result; // ax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 7; ++i )
  {
    *(this + i + 6) = -1;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_571FE0
// entry 00571fe0  size 204  status ok
//======================================================================

_DWORD *__thiscall sub_571FE0(_DWORD *this)
{
  int v1; // eax
  __int16 i; // [esp+8h] [ebp-10h]

  sub_5D7B60(this);
  *this = &RoadKillSlotRoom::`vftable';
  v1 = sub_630F40("SID_VIDEOSLOTS");
  sub_5F38B0(v1);
  dword_79344C = (int)this;
  sub_5F1AD0(0);
  sub_5F1B10(0, 0, 0);
  for ( i = 0; i < 4; ++i )
    sub_6044B0(542655828, 90176, 0);
  return this;
}


//======================================================================
// sub_5720B0
// entry 005720b0  size 164  status ok
//======================================================================

int __thiscall sub_5720B0(_DWORD *this)
{
  *this = &RoadKillSlotRoom::`vftable';
  sub_5DE170(dword_7947E0);
  if ( dword_793450 )
    (**(void (__thiscall ***)(int, int))dword_793450)(dword_793450, 1);
  dword_793450 = 0;
  dword_79344C = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_572160
// entry 00572160  size 247  status ok
//======================================================================

int __thiscall sub_572160(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-28h]
  ATL::CCRTHeap *v3; // [esp+8h] [ebp-24h]
  _DWORD *v5; // [esp+10h] [ebp-1Ch]
  ATL::CCRTHeap *v6; // [esp+18h] [ebp-14h]

  sub_5D8230();
  *(this + 32) = CMediaType::IsFixedSize(dword_162EE84);
  if ( !dword_793450 )
  {
    v6 = (ATL::CCRTHeap *)operator new(0xD8u);
    if ( v6 )
      v3 = sub_56BA40(v6);
    else
      v3 = 0;
    dword_793450 = (int)v3;
  }
  v5 = operator new(0x20u);
  if ( v5 )
  {
    sub_5FC0D0(0);
    *v5 = &RoadKillSlotRoomScript::`vftable';
    v2 = v5;
  }
  else
  {
    v2 = 0;
  }
  return sub_5F1B70(v2);
}


//======================================================================
// sub_572260
// entry 00572260  size 232  status ok
//======================================================================

int __stdcall sub_572260(int a1, int a2)
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
      sub_5FE640(100037, 0);
      sub_5FE640(-2, 2);
      break;
    case 100055:
      sub_5FE640(100058, 0);
      sub_5FE240(5019, -1, -1, 0);
      break;
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_572350
// entry 00572350  size 49  status ok
//======================================================================

int __thiscall sub_572350(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3212002, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_572390
// entry 00572390  size 219  status ok
//======================================================================

int __stdcall sub_572390(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 3207002:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 24) + 192))(*(_DWORD *)(dword_793450 + 24));
      break;
    case 3207003:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 20) + 192))(*(_DWORD *)(dword_793450 + 20));
      break;
    case 3207004:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 16) + 192))(*(_DWORD *)(dword_793450 + 16));
      break;
    case 3207005:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 12) + 192))(*(_DWORD *)(dword_793450 + 12));
      break;
    case 3207006:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 8) + 192))(*(_DWORD *)(dword_793450 + 8));
      break;
    default:
      result = sub_5DC7D0(a1, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_572480
// entry 00572480  size 370  status ok
//======================================================================

int __thiscall sub_572480(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    switch ( tolower(*(char *)(a2 + 20)) )
    {
      case 'b':
        v5 = sub_5F2A60(3207004, 0);
        if ( (unsigned __int8)sub_6026D0(v5) )
          (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207004, -1);
        break;
      case 'c':
        v2 = sub_5F2A60(3207002, 0);
        if ( (unsigned __int8)sub_6026D0(v2) )
          (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207002, -1);
        break;
      case 'm':
        v6 = sub_5F2A60(3207005, 0);
        if ( (unsigned __int8)sub_6026D0(v6) )
          (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207005, -1);
        break;
      case 'p':
        v4 = sub_5F2A60(3207006, 0);
        if ( (unsigned __int8)sub_6026D0(v4) )
          (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207006, -1);
        break;
      case 's':
        v3 = sub_5F2A60(3207003, 0);
        if ( (unsigned __int8)sub_6026D0(v3) )
          (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207003, -1);
        break;
      default:
        return sub_5D7F40(a2);
    }
  }
  return sub_5D7F40(a2);
}


//======================================================================
// sub_572620
// entry 00572620  size 43  status ok
//======================================================================

int __thiscall sub_572620(_DWORD *this)
{
  if ( unknown_libname_843(*(this + 1)) == 1 )
    sub_572950(this);
  return sub_5D8020(this);
}


//======================================================================
// sub_572660
// entry 00572660  size 21  status ok
//======================================================================

int sub_572660()
{
  return sub_5DCB00(0);
}


//======================================================================
// sub_572680
// entry 00572680  size 706  status ok
//======================================================================

int __thiscall sub_572680(_DWORD **this, int a2)
{
  __int64 *v2; // eax
  int v3; // edx
  __int64 *v4; // eax
  int v5; // edx
  int v6; // eax
  int result; // eax
  int v8; // [esp+2Ch] [ebp-48h]
  int v9; // [esp+2Ch] [ebp-48h]
  int v10; // [esp+30h] [ebp-44h]
  int v11; // [esp+30h] [ebp-44h]
  int v12; // [esp+38h] [ebp-3Ch]
  void *v14; // [esp+40h] [ebp-34h]
  __int64 v15; // [esp+48h] [ebp-2Ch] BYREF
  __int64 v16; // [esp+50h] [ebp-24h] BYREF
  int v17; // [esp+58h] [ebp-1Ch]
  int v18; // [esp+5Ch] [ebp-18h]
  int v19[2]; // [esp+60h] [ebp-14h] BYREF
  int v20; // [esp+70h] [ebp-4h]

  sub_5DCB00(0);
  sub_5D5AC0(v19);
  v2 = sub_56DA30((_DWORD *)dword_793450, &v16, a2);
  v3 = *((_DWORD *)v2 + 1);
  v17 = *(_DWORD *)v2;
  v18 = v3;
  if ( (unsigned __int8)sub_64C6A0(v17, v3) )
    a2 = sub_56DC60((_DWORD *)dword_793450, v19[0], v19[1]);
  if ( (unsigned int)(*(_DWORD *)(dword_793450 + 160) + a2) > 0x3B9AC9FF )
    a2 = 999999999 - *(_DWORD *)(dword_793450 + 160);
  v4 = sub_56DA30((_DWORD *)dword_793450, &v15, a2);
  v5 = *(_DWORD *)v4;
  v6 = *((_DWORD *)v4 + 1);
  v17 = -v5;
  v18 = -v6;
  v10 = -v6;
  v8 = -v5;
  sub_5DCB00(0);
  sub_5D5FB0(v8, v10);
  v11 = v18;
  v9 = v17;
  sub_5DCB00(0);
  result = sub_5D5CF0(v9, v11);
  if ( a2 )
  {
    if ( !*(_DWORD *)(dword_793450 + 160) && !*(_DWORD *)(dword_793450 + 164) )
      sub_56E480(dword_793450);
    sub_56DF70((_DWORD *)dword_793450, a2);
    if ( unknown_libname_843(*(_DWORD *)(dword_79344C + 4)) == 1
      && (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
    {
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        103016,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
    }
    (*(void (__thiscall **)(_DWORD, int))(**(this + 1) + 4))(*(this + 1), 1);
    if ( v17 || v18 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793450 + 48) + 176))(
        *(_DWORD *)(dword_793450 + 48),
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 48) + 116))(*(_DWORD *)(dword_793450 + 48));
      v14 = operator new(0x20u);
      v20 = 0;
      if ( v14 )
        v12 = sub_6010A0(*(this + 1));
      else
        v12 = 0;
      v20 = -1;
      sub_5F5D50(v12);
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               101014,
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
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 28))(*(this + 1), 0);
    }
  }
  return result;
}


//======================================================================
// sub_572950
// entry 00572950  size 39  status ok
//======================================================================

int __thiscall sub_572950(void *this)
{
  int result; // eax

  result = (unsigned __int8)sub_637670(dword_162EE84);
  if ( (_BYTE)result )
    return sub_572980(this);
  return result;
}


//======================================================================
// sub_572980
// entry 00572980  size 100  status ok
//======================================================================

int __thiscall sub_572980(_DWORD *this)
{
  int result; // eax

  result = CMediaType::IsFixedSize(dword_162EE84);
  if ( result > *(this + 32) )
  {
    *(this + 32) = CMediaType::IsFixedSize(dword_162EE84) + 2700;
    result = (unsigned __int8)sub_5F4740(dword_162EE84);
    if ( !(_BYTE)result )
      return sub_5F4620(103004, 1.0);
  }
  return result;
}


//======================================================================
// sub_5729F0
// entry 005729f0  size 125  status ok
//======================================================================

int __stdcall sub_5729F0(int a1)
{
  int result; // eax
  __int64 v2; // [esp-8h] [ebp-14h]
  __int64 v3; // [esp-8h] [ebp-14h]
  __int64 v4; // [esp+4h] [ebp-8h] BYREF

  sub_56DA30((_DWORD *)dword_793450, &v4, *(_DWORD *)(dword_793450 + 160));
  v2 = v4;
  sub_5DCB00(0);
  sub_5D5FB0(v2, HIDWORD(v2));
  v3 = v4;
  sub_5DCB00(a1);
  sub_5D5CF0(v3, HIDWORD(v3));
  *(_DWORD *)(dword_793450 + 160) = 0;
  result = dword_793450;
  *(_DWORD *)(dword_793450 + 164) = 0;
  return result;
}


//======================================================================
// sub_572A70
// entry 00572a70  size 108  status ok
//======================================================================

int __stdcall sub_572A70(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // eax
  _BYTE v8[8]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+Ch] [ebp-4h]

  sub_6375B0(dword_162EE84);
  v9 = (_DWORD *)sub_63AAE0(14);
  v1 = sub_5DCB00(a1);
  v2 = (int *)sub_64C5C0(v8, *(_DWORD *)(v1 + 1220), *(_DWORD *)(v1 + 1224));
  v3 = *v2;
  v4 = v2[1];
  v5 = v9;
  *v9 = v3;
  v5[1] = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_572AE0
// entry 00572ae0  size 22  status ok
//======================================================================

int sub_572AE0()
{
  return sub_56DE20(dword_793450);
}


//======================================================================
// sub_572B00
// entry 00572b00  size 443  status ok
//======================================================================

int __thiscall sub_572B00(void *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-20h]
  _DWORD *v4; // [esp+10h] [ebp-14h]

  switch ( unknown_libname_843(this) )
  {
    case 0:
      sub_56C370(dword_793450);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
      result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      break;
    case 1:
      *(_BYTE *)(dword_793450 + 152) = 1;
      sub_56DE20(dword_793450);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 48) + 112))(*(_DWORD *)(dword_793450 + 48));
      if ( !*(_DWORD *)(dword_793450 + 160) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793450 + 24) + 208))(*(_DWORD *)(dword_793450 + 24));
      if ( !*(_BYTE *)(dword_793450 + 153) )
        sub_56ED20((_DWORD *)dword_793450);
      result = sub_56E930((int *)dword_793450);
      break;
    case 2:
      *(_BYTE *)(dword_793450 + 152) = 0;
      if ( !*(_BYTE *)(dword_793450 + 153) )
        sub_56F870((_DWORD **)dword_793450);
      sub_56EB20((void *)dword_793450);
      sub_56E480(dword_793450);
      v4 = operator new(0x20u);
      if ( v4 )
        v2 = sub_56FC80(v4);
      else
        v2 = 0;
      result = sub_5FC420(v2);
      break;
    case 3:
      result = sub_56EBC0((_DWORD *)dword_793450);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\roadkillslotroom.cpp", 303);
      break;
  }
  return result;
}


//======================================================================
// sub_572D00
// entry 00572d00  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_572D00(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &RoadKillSlotRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_572D30
// entry 00572d30  size 120  status ok
//======================================================================

_DWORD *sub_572D30()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x84u);
  if ( v2 )
    return sub_571FE0(v2);
  else
    return 0;
}


//======================================================================
// sub_572DB0
// entry 00572db0  size 51  status ok
//======================================================================

char __stdcall sub_572DB0(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_ROADPIZZA");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_572E10
// entry 00572e10  size 16  status ok
//======================================================================

int sub_572E10()
{
  return 3211000;
}


//======================================================================
// sub_572E20
// entry 00572e20  size 16  status ok
//======================================================================

const char *sub_572E20()
{
  return "RoadKill";
}


//======================================================================
// sub_572E40
// entry 00572e40  size 16  status ok
//======================================================================

char **sub_572E40()
{
  return off_749394;
}


//======================================================================
// sub_572E50
// entry 00572e50  size 16  status ok
//======================================================================

char **sub_572E50()
{
  return &off_7493A0;
}


//======================================================================
// sub_572E80
// entry 00572e80  size 94  status ok
//======================================================================

char __stdcall sub_572E80(_DWORD *a1, int a2)
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
// sub_572EE0
// entry 00572ee0  size 16  status ok
//======================================================================

int sub_572EE0()
{
  return 8;
}


//======================================================================
// sub_572EF0
// entry 00572ef0  size 15  status ok
//======================================================================

char __stdcall sub_572EF0(int a1)
{
  return 0;
}


//======================================================================
// sub_572F00
// entry 00572f00  size 15  status ok
//======================================================================

char __stdcall sub_572F00(int a1)
{
  return 0;
}


