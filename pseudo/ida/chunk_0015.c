//======================================================================
// sub_534160
// entry 00534160  size 406  status ok
//======================================================================

int __thiscall sub_534160(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-24h]
  unsigned __int8 v4; // [esp+13h] [ebp-15h]
  _DWORD *v5; // [esp+14h] [ebp-14h]

  switch ( *(this + 5) )
  {
    case 1:
      sub_52C7E0(dword_793390);
      v4 = *((_BYTE *)dword_162EE84 + 37);
      result = v4;
      if ( v4 )
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 2, 20);
      break;
    case 2:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 3, 60);
      break;
    case 3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_793388 + 700))(dword_793388, 20);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 60);
      break;
    case 4:
      sub_5D0F00(dword_79338C);
      sub_52C7E0(dword_793390);
      v5 = operator new(0x20u);
      if ( v5 )
        v2 = sub_530F30(v5);
      else
        v2 = 0;
      sub_5FC420(v2);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      break;
    case 5:
      if ( *(_DWORD *)(dword_793388 + 4) )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 80);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\slotmachineroom.cpp", 371);
      break;
  }
  return result;
}


//======================================================================
// sub_534340
// entry 00534340  size 43  status ok
//======================================================================

int __stdcall sub_534340(int a1)
{
  _DWORD v2[3]; // [esp+4h] [ebp-Ch]

  v2[0] = 199;
  v2[1] = 278;
  v2[2] = 356;
  return v2[a1];
}


//======================================================================
// sub_5343A0
// entry 005343a0  size 18  status ok
//======================================================================

void *__stdcall sub_5343A0(int a1)
{
  return &unk_793398;
}


//======================================================================
// sub_5344B0
// entry 005344b0  size 16  status ok
//======================================================================

int sub_5344B0()
{
  return 90048;
}


//======================================================================
// sub_5344C0
// entry 005344c0  size 16  status ok
//======================================================================

int sub_5344C0()
{
  return 90018;
}


//======================================================================
// sub_5344D0
// entry 005344d0  size 16  status ok
//======================================================================

int sub_5344D0()
{
  return 174;
}


//======================================================================
// sub_534560
// entry 00534560  size 16  status ok
//======================================================================

int sub_534560()
{
  return 90045;
}


//======================================================================
// sub_534570
// entry 00534570  size 16  status ok
//======================================================================

int sub_534570()
{
  return 90020;
}


//======================================================================
// sub_534580
// entry 00534580  size 16  status ok
//======================================================================

int sub_534580()
{
  return 90197;
}


//======================================================================
// sub_534720
// entry 00534720  size 16  status ok
//======================================================================

int sub_534720()
{
  return 9;
}


//======================================================================
// sub_534790
// entry 00534790  size 60  status ok
//======================================================================

int __stdcall sub_534790(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 6:
    case 7:
    case 8:
      result = 1;
      break;
    case 9:
    case 10:
    case 11:
      result = -1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5347F0
// entry 005347f0  size 70  status ok
//======================================================================

int __stdcall sub_5347F0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 6:
    case 9:
      result = 2;
      break;
    case 7:
    case 10:
      result = 3;
      break;
    case 8:
    case 11:
      result = 4;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}


//======================================================================
// sub_534850
// entry 00534850  size 16  status ok
//======================================================================

int sub_534850()
{
  return 3207286;
}


//======================================================================
// sub_5348E0
// entry 005348e0  size 16  status ok
//======================================================================

int sub_5348E0()
{
  return 3207295;
}


//======================================================================
// sub_5348F0
// entry 005348f0  size 16  status ok
//======================================================================

int sub_5348F0()
{
  return 3207258;
}


//======================================================================
// sub_534900
// entry 00534900  size 16  status ok
//======================================================================

int sub_534900()
{
  return 244;
}


//======================================================================
// sub_534C20
// entry 00534c20  size 16  status ok
//======================================================================

int sub_534C20()
{
  return 3207347;
}


//======================================================================
// sub_534C30
// entry 00534c30  size 16  status ok
//======================================================================

int sub_534C30()
{
  return 3207322;
}


//======================================================================
// sub_534C40
// entry 00534c40  size 16  status ok
//======================================================================

int sub_534C40()
{
  return 3207323;
}


//======================================================================
// sub_534C50
// entry 00534c50  size 70  status ok
//======================================================================

int __stdcall sub_534C50(int a1)
{
  switch ( a1 )
  {
    case 1:
      return 12;
    case 2:
      return 20;
    case 3:
      return 28;
    case 4:
      return 36;
  }
  return 44;
}


//======================================================================
// sub_534CA0
// entry 00534ca0  size 26  status ok
//======================================================================

int __stdcall sub_534CA0(int a1)
{
  if ( a1 == 3 )
    return -1;
  else
    return 0;
}


//======================================================================
// sub_534CC0
// entry 00534cc0  size 16  status ok
//======================================================================

int sub_534CC0()
{
  return 3207314;
}


//======================================================================
// sub_534D50
// entry 00534d50  size 16  status ok
//======================================================================

int sub_534D50()
{
  return 12;
}


//======================================================================
// sub_534D60
// entry 00534d60  size 16  status ok
//======================================================================

int sub_534D60()
{
  return 3207307;
}


//======================================================================
// sub_534DD0
// entry 00534dd0  size 60  status ok
//======================================================================

int __stdcall sub_534DD0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 6:
    case 7:
    case 8:
      result = -1;
      break;
    case 9:
    case 10:
    case 11:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_534E30
// entry 00534e30  size 70  status ok
//======================================================================

int __stdcall sub_534E30(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 6:
    case 9:
      result = 4;
      break;
    case 7:
    case 10:
      result = 3;
      break;
    case 8:
    case 11:
      result = 2;
      break;
    default:
      result = a1;
      break;
  }
  return result;
}


//======================================================================
// sub_534E90
// entry 00534e90  size 16  status ok
//======================================================================

int sub_534E90()
{
  return 3207310;
}


//======================================================================
// sub_534EA0
// entry 00534ea0  size 16  status ok
//======================================================================

int sub_534EA0()
{
  return 3207352;
}


//======================================================================
// sub_534EB0
// entry 00534eb0  size 16  status ok
//======================================================================

int sub_534EB0()
{
  return 3207324;
}


//======================================================================
// sub_534EC0
// entry 00534ec0  size 16  status ok
//======================================================================

int sub_534EC0()
{
  return 3207325;
}


//======================================================================
// sub_534ED0
// entry 00534ed0  size 31  status ok
//======================================================================

int __stdcall sub_534ED0(int a1)
{
  if ( a1 == 1 )
    return 14;
  else
    return 27;
}


//======================================================================
// sub_534FD0
// entry 00534fd0  size 16  status ok
//======================================================================

int sub_534FD0()
{
  return 3207339;
}


//======================================================================
// sub_5350D0
// entry 005350d0  size 120  status ok
//======================================================================

_DWORD *sub_5350D0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_532B90(v2);
  else
    return 0;
}


//======================================================================
// sub_535150
// entry 00535150  size 51  status ok
//======================================================================

char __stdcall sub_535150(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_SLOTS");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_5351B0
// entry 005351b0  size 16  status ok
//======================================================================

int sub_5351B0()
{
  return 3207000;
}


//======================================================================
// sub_5351C0
// entry 005351c0  size 16  status ok
//======================================================================

const char *sub_5351C0()
{
  return "SlotMachine";
}


//======================================================================
// sub_5351E0
// entry 005351e0  size 16  status ok
//======================================================================

char **sub_5351E0()
{
  return off_729370;
}


//======================================================================
// sub_5351F0
// entry 005351f0  size 16  status ok
//======================================================================

char **sub_5351F0()
{
  return &off_72938C;
}


//======================================================================
// sub_535220
// entry 00535220  size 94  status ok
//======================================================================

char __stdcall sub_535220(_DWORD *a1, int a2)
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
// sub_535280
// entry 00535280  size 16  status ok
//======================================================================

int sub_535280()
{
  return 8;
}


//======================================================================
// sub_535290
// entry 00535290  size 15  status ok
//======================================================================

char __stdcall sub_535290(int a1)
{
  return 0;
}


//======================================================================
// sub_5352A0
// entry 005352a0  size 15  status ok
//======================================================================

char __stdcall sub_5352A0(int a1)
{
  return 0;
}


//======================================================================
// sub_5352B0
// entry 005352b0  size 52  status ok
//======================================================================

char __stdcall sub_5352B0(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_535310
// entry 00535310  size 319  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_535310(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  __int64 v5; // [esp+14h] [ebp-14h] BYREF
  __int64 v6; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+24h] [ebp-4h]

  v7 = (_DWORD *)sub_63AAE0(14);
  *a2 += *v7;
  a2[1] += v7[1];
  *a3 += *v7;
  a3[1] += v7[1];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)14 )
    {
      v5 = sub_64C8A0(0, 0);
      v6 = sub_64C8A0(0, 0);
      sub_5E0C40(a1, &v5, &v6);
      *a2 += v6 + v5;
      a2[1] += HIDWORD(v5);
      *a3 += v5;
      a3[1] += HIDWORD(v5);
      *a4 += v6;
      a4[1] += HIDWORD(v6);
      return (struct Concurrency::details::_TaskCollectionBase *)a4;
    }
  }
  return result;
}


//======================================================================
// sub_535450
// entry 00535450  size 241  status ok
//======================================================================

char __stdcall sub_535450(int a1, int a2)
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

  v10 = sub_63AAE0(14);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v6 = sub_64C8A0(0, 0);
  v9 = v6;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)14 )
    sub_5E0C40(a2, &v8, &v9);
  v2 = (int *)sub_64C5C0(v5, v8, HIDWORD(v8));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  return 1;
}


//======================================================================
// sub_535550
// entry 00535550  size 30  status ok
//======================================================================

char __stdcall sub_535550(int a1)
{
  sub_5FB5A0(2, "$0.00");
  return 1;
}


//======================================================================
// sub_535570
// entry 00535570  size 41  status ok
//======================================================================

char __stdcall sub_535570(int a1)
{
  if ( a1 != 3207049 )
    return 0;
  sub_653BD0(14);
  return 1;
}


//======================================================================
// sub_5355A0
// entry 005355a0  size 15  status ok
//======================================================================

char __stdcall sub_5355A0(int a1)
{
  return 0;
}


//======================================================================
// sub_5355B0
// entry 005355b0  size 15  status ok
//======================================================================

char __stdcall sub_5355B0(int a1)
{
  return 0;
}


//======================================================================
// sub_5355C0
// entry 005355c0  size 16  status ok
//======================================================================

void *sub_5355C0()
{
  return &unk_729390;
}


//======================================================================
// sub_5355D0
// entry 005355d0  size 190  status ok
//======================================================================

void *__stdcall sub_5355D0(int a1)
{
  int v1; // eax

  if ( (dword_7933C0 & 1) == 0 )
  {
    dword_7933C0 |= 1u;
    dword_7293B4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7293B8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3207001 )
    return &unk_7293B0;
  else
    return 0;
}


//======================================================================
// sub_535690
// entry 00535690  size 16  status ok
//======================================================================

void *sub_535690()
{
  return &unk_725410;
}


//======================================================================
// sub_5356A0
// entry 005356a0  size 16  status ok
//======================================================================

void *sub_5356A0()
{
  return &unk_729008;
}


//======================================================================
// sub_5356B0
// entry 005356b0  size 150  status ok
//======================================================================

char __stdcall sub_5356B0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_535750(a2);
  if ( v3 == -1 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = v3;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_5E05C0(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 14, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_535750
// entry 00535750  size 292  status ok
//======================================================================

int __stdcall sub_535750(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3207007:
      result = 8;
      break;
    case 3207008:
      result = 1;
      break;
    case 3207009:
      result = 3;
      break;
    case 3207010:
      result = 7;
      break;
    case 3207011:
      result = 6;
      break;
    case 3207013:
      result = 5;
      break;
    case 3207014:
      result = 2;
      break;
    case 3207015:
      result = 4;
      break;
    case 3207016:
      result = 11;
      break;
    case 3207017:
      result = 12;
      break;
    case 3207018:
      result = 13;
      break;
    case 3207019:
      result = 14;
      break;
    case 3207020:
      result = 15;
      break;
    case 3207021:
      result = 16;
      break;
    case 3207022:
      result = 17;
      break;
    case 3207023:
      result = 18;
      break;
    case 3207024:
      result = 22;
      break;
    case 3207025:
      result = 26;
      break;
    case 3207026:
      result = 19;
      break;
    case 3207027:
      result = 20;
      break;
    case 3207028:
      result = 21;
      break;
    case 3207029:
      result = 23;
      break;
    case 3207030:
      result = 24;
      break;
    case 3207031:
      result = 25;
      break;
    case 3207032:
      result = 27;
      break;
    case 3207033:
      result = 28;
      break;
    case 3207034:
      result = 29;
      break;
    case 3207035:
      result = 9;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_535940
// entry 00535940  size 31  status ok
//======================================================================

int sub_535940()
{
  sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_535960
// entry 00535960  size 337  status ok
//======================================================================

int __thiscall sub_535960(int this)
{
  int j; // [esp+4h] [ebp-8h]
  int m; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int k; // [esp+8h] [ebp-4h]
  int n; // [esp+8h] [ebp-4h]

  *(_BYTE *)(this + 124) = 0;
  *(_BYTE *)(this + 127) = 0;
  *(_BYTE *)(this + 126) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 132) = 0;
  *(_BYTE *)(this + 125) = 0;
  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 22; ++j )
      *(_BYTE *)(this + j + 22 * i + 21) = -1;
  }
  for ( k = 0; k < 3; ++k )
  {
    for ( m = 0; m < sub_538510(this); ++m )
      *(_BYTE *)(this + m + 22 * k + 21) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_793394 + 88))(
                                             dword_793394,
                                             k,
                                             m);
  }
  for ( n = 0; n < 5; ++n )
    *(_DWORD *)(this + 4 * n + 100) = -1;
  sub_536730(this);
  if ( (unsigned __int8)sub_5DF700(-1) )
    return sub_57AB80(5, &unk_7293C0);
  else
    return sub_57AE30(dword_793578);
}


//======================================================================
// sub_535AC0
// entry 00535ac0  size 29  status ok
//======================================================================

int __thiscall sub_535AC0(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 72))(dword_793394, this);
}


//======================================================================
// sub_535AE0
// entry 00535ae0  size 549  status ok
//======================================================================

int __thiscall sub_535AE0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // eax
  _BYTE v6[8]; // [esp+20h] [ebp-8h] BYREF

  result = a2;
  switch ( a2 )
  {
    case 0:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3207371,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D1210(this);
      result = sub_52C7E0(dword_793390);
      break;
    case 1:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3207371,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D0F00(this);
      result = sub_52C7E0(dword_793390);
      break;
    case 2:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3207371,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D1210(this);
      result = sub_52C7E0(dword_793390);
      if ( *(this + 2) )
        result = sub_535D20(this);
      break;
    case 3:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3207371,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = sub_535D20(this);
      break;
    case 4:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3207371,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D13E0(this);
      sub_52C7E0(dword_793390);
      result = sub_52CA70();
      break;
    case 5:
      sub_5DCB00(0);
      v3 = (_DWORD *)sub_5D5A90(v6);
      if ( sub_5D0D30(*v3, v3[1]) || *(this + 1) || *(this + 2) )
      {
        result = sub_5DC2E0(a2, this);
      }
      else
      {
        v4 = sub_5DCB00(0);
        result = sub_5DBB70(v4);
      }
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_535D20
// entry 00535d20  size 83  status ok
//======================================================================

int __thiscall sub_535D20(_DWORD *this)
{
  ++*(this + 32);
  sub_5385B0(dword_793394);
  *(_DWORD *)(dword_793394 + 4) = *(this + 2);
  return sub_52CB00(dword_793390);
}


//======================================================================
// sub_535D80
// entry 00535d80  size 145  status ok
//======================================================================

int __thiscall sub_535D80(_DWORD *this)
{
  _DWORD *v1; // eax
  _BYTE v4[8]; // [esp+8h] [ebp-8h] BYREF

  sub_52CC70((_DWORD **)dword_793390);
  *(this + 2) = 0;
  sub_5D0A20(*(this + 30) + *(this + 1));
  sub_52E160((_DWORD **)dword_793390);
  v1 = (_DWORD *)sub_5D0C30(v4, *(this + 30));
  sub_5E7E40(0, 4, *v1, v1[1]);
  *(this + 30) = 0;
  sub_52DDF0((_DWORD **)dword_793390);
  return sub_52CD40();
}


//======================================================================
// sub_535E20
// entry 00535e20  size 33  status ok
//======================================================================

int sub_535E20()
{
  int v0; // eax

  v0 = sub_5FB300(3);
  return sub_6026D0(v0);
}


//======================================================================
// sub_535E50
// entry 00535e50  size 29  status ok
//======================================================================

int __thiscall sub_535E50(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 68))(dword_793394, this);
}


//======================================================================
// sub_535E70
// entry 00535e70  size 229  status ok
//======================================================================

int __thiscall sub_535E70(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-2Ch]
  int v5; // [esp+8h] [ebp-24h]
  _DWORD v6[5]; // [esp+Ch] [ebp-20h]
  int i; // [esp+20h] [ebp-Ch]
  int v8; // [esp+24h] [ebp-8h]
  int v9; // [esp+28h] [ebp-4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
  v9 = -1;
  for ( i = 0; i < 5; ++i )
  {
    v8 = *(this + i + 25);
    if ( v8 != -1 && v5 != 1 )
    {
      if ( *(this + i + 25) == 1000 )
      {
        v8 = sub_535E50(this) - 1;
      }
      else
      {
        v1 = sub_535E50(this);
        v8 = v1 - *(this + i + 25);
        if ( v8 < 0 )
          v8 = 0;
      }
    }
    v6[i] = v8;
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( v9 <= v6[i] )
      v3 = v6[i];
    else
      v3 = v9;
    v9 = v3;
  }
  return v9;
}


//======================================================================
// sub_535F60
// entry 00535f60  size 138  status ok
//======================================================================

int __thiscall sub_535F60(_DWORD *this)
{
  int result; // eax
  char Buffer[108]; // [esp+4h] [ebp-78h] BYREF
  int i; // [esp+74h] [ebp-8h]
  int v5; // [esp+78h] [ebp-4h]

  result = sub_536730(this);
  v5 = 0;
  for ( i = 0; i < 3; ++i )
  {
    sprintf(Buffer, "SlotReel%d", i);
    v5 = sub_607960((int)Buffer, -1);
    if ( v5 != -1 )
      *(this + i + 22) = v5;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_535FF0
// entry 00535ff0  size 210  status ok
//======================================================================

int __thiscall sub_535FF0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-10h]

  sub_536D40(this);
  sub_52E160((_DWORD **)dword_793390);
  sub_535F60(this);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
  switch ( v2 )
  {
    case 1:
      result = sub_536BC0(this);
      *(this + 30) = result;
      break;
    case 3:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 9 )
        result = sub_536DA0(1, 3, 4);
      else
        result = sub_536DA0(1, 0, 2);
      *(this + 30) = result;
      break;
    case 5:
      result = sub_537050(this);
      *(this + 30) = result;
      break;
    default:
      return sub_5E9F20((char)"false", "..\\Casino\\slotmachinestate.cpp", 264);
  }
  return result;
}


//======================================================================
// sub_5360D0
// entry 005360d0  size 49  status ok
//======================================================================

int __thiscall sub_5360D0(char *this, int a2)
{
  return *(this + 22 * a2 + sub_537880(a2, 1) + 21);
}


//======================================================================
// sub_536110
// entry 00536110  size 49  status ok
//======================================================================

int __thiscall sub_536110(char *this, int a2)
{
  return *(this + 22 * a2 + sub_537880(a2, 3) + 21);
}


//======================================================================
// sub_536150
// entry 00536150  size 79  status ok
//======================================================================

char __thiscall sub_536150(_DWORD *this)
{
  int i; // [esp+8h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 25) != -1 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_5361A0
// entry 005361a0  size 110  status ok
//======================================================================

int __thiscall sub_5361A0(void *this)
{
  int v2; // [esp+0h] [ebp-Ch]

  sub_536D40(this);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
  switch ( v2 )
  {
    case 1:
      return sub_536BC0(this);
    case 3:
      return sub_536DA0(1, 0, 2);
    case 5:
      return sub_537050(this);
  }
  return 0;
}


//======================================================================
// sub_536210
// entry 00536210  size 49  status ok
//======================================================================

int __thiscall sub_536210(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    *(this + i + 16) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_536250
// entry 00536250  size 72  status ok
//======================================================================

int __thiscall sub_536250(_BYTE *this)
{
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 16) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_5362A0
// entry 005362a0  size 1043  status ok
//======================================================================

int __thiscall sub_5362A0(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-1Ch]
  int v4; // [esp+10h] [ebp-14h]
  int v5; // [esp+14h] [ebp-10h]
  int v6; // [esp+18h] [ebp-Ch]

  v4 = 50;
  v5 = 50;
  v6 = 100;
  v3 = 0;
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0x13:
    case 0x15:
      v5 = 22;
      v4 = 22;
      break;
    case 0x1B:
    case 0x1D:
      v4 = 60;
      v5 = 40;
      v6 = 20;
      v3 = 80;
      break;
    default:
      break;
  }
  result = sub_62FBF0(100);
  if ( result > v6 )
  {
    if ( v3 > 0 )
    {
      result = sub_62FBF0(100);
      if ( result < v3 )
      {
        if ( (int)sub_62FBF0(100) >= 40 )
        {
          do
            *(this + 22) = sub_536B40(0);
          while ( *((char *)this + sub_537880(0, 2) + 21) != -1 );
          do
            *(this + 23) = sub_536B40(1);
          while ( *((char *)this + sub_537880(1, 2) + 43) != -1 );
          do
          {
            *(this + 24) = sub_536B40(2);
            result = sub_537880(2, 2) + 44;
          }
          while ( *((char *)this + result + 21) != -1 );
        }
        else
        {
          do
            *(this + 22) = sub_536B40(0);
          while ( *((char *)this + sub_537880(0, 2) + 21) == -1 );
          do
            *(this + 23) = sub_536B40(1);
          while ( *((char *)this + sub_537880(1, 2) + 43) == -1 );
          do
          {
            *(this + 24) = sub_536B40(2);
            result = sub_537880(2, 2) + 44;
          }
          while ( *((char *)this + result + 21) == -1 );
        }
      }
    }
  }
  else if ( sub_62FBF0(100) >= v4 )
  {
    result = sub_62FBF0(100);
    if ( result < v5 )
    {
      do
        *(this + 22) = sub_536B40(0);
      while ( *((char *)this + sub_537880(0, 2) + 21) == -1 );
      do
        *(this + 23) = sub_536B40(1);
      while ( *((char *)this + sub_537880(1, 2) + 43) != -1 );
      do
      {
        *(this + 24) = sub_536B40(2);
        result = sub_537880(2, 2) + 44;
      }
      while ( *((char *)this + result + 21) == -1 );
    }
  }
  else
  {
    do
      *(this + 22) = sub_536B40(0);
    while ( *((char *)this + sub_537880(0, 2) + 21) != -1 );
    do
      *(this + 23) = sub_536B40(1);
    while ( *((char *)this + sub_537880(1, 2) + 43) == -1 );
    do
    {
      *(this + 24) = sub_536B40(2);
      result = sub_537880(2, 2) + 44;
    }
    while ( *((char *)this + result + 21) != -1 );
  }
  return result;
}


//======================================================================
// sub_5366D0
// entry 005366d0  size 93  status ok
//======================================================================

int __thiscall sub_5366D0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  do
  {
    for ( i = 0; i < 3; ++i )
      *(this + i + 22) = sub_536B40(i);
    sub_5362A0(this);
    result = sub_5361A0(this);
  }
  while ( result > 0 );
  return result;
}


//======================================================================
// sub_536730
// entry 00536730  size 963  status ok
//======================================================================

int __thiscall sub_536730(_BYTE *this)
{
  int result; // eax
  int v3; // [esp+24h] [ebp-3Ch]
  bool v4; // [esp+2Bh] [ebp-35h]
  int v5; // [esp+2Ch] [ebp-34h]
  int v6; // [esp+34h] [ebp-2Ch]
  int v7; // [esp+3Ch] [ebp-24h]
  int j; // [esp+40h] [ebp-20h]
  int v9; // [esp+44h] [ebp-1Ch]
  int v10; // [esp+4Ch] [ebp-14h]
  int v11; // [esp+50h] [ebp-10h]
  int v12; // [esp+54h] [ebp-Ch]
  int v13; // [esp+58h] [ebp-8h]
  int i; // [esp+5Ch] [ebp-4h]
  int k; // [esp+5Ch] [ebp-4h]

  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
  sub_536210(this);
  for ( i = 0; i < 3; ++i )
    *((_DWORD *)this + i + 22) = sub_536B40(i);
  if ( v12 > 1 && !(unsigned __int8)sub_538440(this) )
  {
    v4 = 0;
    v9 = v12 != 3 ? 60 : 50;
    v6 = v12 != 3 ? 1 : 10;
    v7 = 20;
    v10 = 95;
    v5 = 0;
    switch ( *(_DWORD *)(dword_7947E0 + 20244) )
    {
      case 0x13:
      case 0x15:
        v10 = 75;
        v9 = 20;
        v7 = 10;
        break;
      case 0x14:
        v10 = 60;
        break;
      case 0x17:
        v5 = 5;
        break;
      case 0x18:
        v10 = 30;
        v9 = 40;
        break;
      case 0x19:
        v5 = 5;
        break;
      case 0x1B:
      case 0x1D:
        v10 = 30;
        v9 = 30;
        v6 = 30;
        break;
      case 0x1C:
        v10 = 20;
        break;
      default:
        goto LABEL_14;
    }
    do
    {
LABEL_14:
      if ( v5 && sub_62FBF0(100) < v5 )
      {
        sub_5366D0(this);
        v4 = 0;
      }
      else
      {
        for ( j = 0; j < 3; ++j )
          *((_DWORD *)this + j + 22) = sub_536B40(j);
        sub_5362A0(this);
        v3 = sub_5361A0(this);
        if ( v3 > 0 )
        {
          switch ( sub_536250(this) )
          {
            case 0:
              v4 = 0;
              break;
            case 1:
              v4 = sub_62FBF0(100) > v9;
              break;
            case 2:
              v4 = sub_62FBF0(100) > v6;
              break;
            case 3:
              v4 = sub_62FBF0(100) > 2 * (v12 == 3) + 1;
              break;
            case 4:
              v4 = sub_62FBF0(100) > (v12 == 3) + 1;
              break;
            case 5:
              v4 = sub_62FBF0(100) > 1;
              break;
            default:
              break;
          }
        }
        else
        {
          v4 = sub_62FBF0(100) > v10;
        }
        if ( !v4 && v3 > 0 && v3 > (v12 != 3 ? 80 : 60) )
          v4 = sub_62FBF0(100) < v7;
      }
    }
    while ( v4 );
  }
  result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 76))(dword_793394);
  if ( (_BYTE)result )
  {
    for ( k = 0; k < 3; ++k )
    {
      v11 = sub_5360D0(this, k);
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 80))(dword_793394, v11) == 1 )
      {
        result = dword_793394;
        *(_DWORD *)(dword_793394 + 4 * k + 8) = 1;
      }
      else
      {
        v13 = sub_536110(this, k);
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 80))(dword_793394, v13);
        if ( result == -1 )
        {
          result = dword_793394;
          *(_DWORD *)(dword_793394 + 4 * k + 8) = -1;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_536B40
// entry 00536b40  size 65  status ok
//======================================================================

int __stdcall sub_536B40(int a1)
{
  int v1; // eax

  v1 = sub_62FBF0(0x7FFFFFFF) % 64;
  return sub_536B90(a1, v1);
}


//======================================================================
// sub_536B90
// entry 00536b90  size 40  status ok
//======================================================================

int __stdcall sub_536B90(int a1, int a2)
{
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_793394 + 84))(dword_793394, a1, a2);
}


//======================================================================
// sub_536BC0
// entry 00536bc0  size 371  status ok
//======================================================================

int __thiscall sub_536BC0(int this)
{
  int v1; // eax
  int i; // [esp+10h] [ebp-14h]
  int v5; // [esp+14h] [ebp-10h]
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h]
  int v8; // [esp+20h] [ebp-4h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 100))(dword_793394);
  v7 = *(_DWORD *)(dword_7947E0 + 20244);
  for ( i = 0; ; ++i )
  {
    if ( i >= v5 )
      return 0;
    v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 104))(dword_793394, i);
    v6 = sub_537E60(v1, 1);
    if ( v6 != -1 )
      break;
  }
  if ( !v6 )
    *(_BYTE *)(this + 124) = 1;
  if ( v7 == 12 && (i == 28 || i == 29) )
  {
    *(_DWORD *)(this + 100) = sub_535E50((void *)this) - v6 - 1;
    v8 = 6 * *(_DWORD *)(this + 8);
    *(_BYTE *)(this + 126) = 1;
  }
  else
  {
    *(_DWORD *)(this + 100) = sub_535E50((void *)this) - v6 - 1;
    v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_793394 + 92))(
           dword_793394,
           *(_DWORD *)(this + 8),
           v6);
  }
  return v8 * (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 96))(dword_793394, i);
}


//======================================================================
// sub_536D40
// entry 00536d40  size 88  status ok
//======================================================================

int __thiscall sub_536D40(int this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(_DWORD *)(this + 4 * i + 100) = -1;
  *(_BYTE *)(this + 124) = 0;
  *(_BYTE *)(this + 126) = 0;
  *(_DWORD *)(this + 120) = 0;
  return sub_5385B0(dword_793394);
}


//======================================================================
// sub_536DA0
// entry 00536da0  size 686  status ok
//======================================================================

int __thiscall sub_536DA0(int this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-78h]
  int j; // [esp+Ch] [ebp-68h]
  _BYTE v10[4]; // [esp+10h] [ebp-64h]
  int v11; // [esp+14h] [ebp-60h]
  int v12; // [esp+18h] [ebp-5Ch]
  int v13; // [esp+1Ch] [ebp-58h]
  int v14; // [esp+20h] [ebp-54h]
  int v15; // [esp+24h] [ebp-50h]
  _DWORD v16[3]; // [esp+28h] [ebp-4Ch]
  int v17; // [esp+34h] [ebp-40h]
  _DWORD v18[10]; // [esp+38h] [ebp-3Ch] BYREF
  char v19; // [esp+63h] [ebp-11h]
  int v20; // [esp+64h] [ebp-10h]
  int i; // [esp+68h] [ebp-Ch]
  _BYTE v22[4]; // [esp+6Ch] [ebp-8h]
  int v23; // [esp+70h] [ebp-4h]

  v12 = 0;
  v11 = 0;
  i = 0;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 100))(dword_793394);
  v17 = -1;
  v14 = 0;
  v15 = *(_DWORD *)(this + 8);
  v20 = 0;
  v19 = 0;
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = a4;
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = 0;
  for ( i = 0; i < 3; ++i )
  {
    v10[i] = v15 >= i + 1;
    dword_7933C4[i] = -1;
  }
  v11 = *(_DWORD *)(this + 8);
  for ( j = 0; j < 3; ++j )
  {
    v14 = v16[j];
    if ( v10[j] )
    {
      for ( i = 0; dword_7933C4[j] == -1 && i < v13; ++i )
      {
        v7 = v14;
        v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 104))(dword_793394, i);
        v17 = sub_537E60(v4, v7);
        if ( v17 != -1 )
        {
          qmemcpy(
            v18,
            (const void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 104))(dword_793394, i),
            sizeof(v18));
          *(_DWORD *)(this + 4 * j + 100) = v18[9];
          *(_BYTE *)(j + this + 16) = 1;
          if ( !v17 )
          {
            *(_BYTE *)(this + 124) = 1;
            v22[j] = 1;
          }
          if ( *(_BYTE *)(this + 124)
            && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 60))(dword_793394)
            && ((unsigned __int8)sub_538440(this) || v11 == 3 && v22[j] == 1 && j == 2 && !v19) )
          {
            if ( (unsigned __int8)sub_538440(this) )
              v12 -= 100;
            v20 = sub_5374B0(this);
            v12 += v20;
            v19 = 1;
          }
          else
          {
            if ( v17 )
              v23 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_793394 + 92))(dword_793394, v11, v17);
            else
              v23 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_793394 + 92))(dword_793394, j + 1, 0);
            v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 96))(dword_793394, i);
            v12 += v23 * v5;
          }
          dword_7933C4[j] = v17;
        }
      }
    }
  }
  return v12;
}


//======================================================================
// sub_537050
// entry 00537050  size 523  status ok
//======================================================================

int __thiscall sub_537050(int this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp-4h] [ebp-68h]
  int j; // [esp+Ch] [ebp-58h]
  _BYTE v7[8]; // [esp+10h] [ebp-54h]
  int v8; // [esp+1Ch] [ebp-48h]
  int v9; // [esp+20h] [ebp-44h]
  int v10; // [esp+24h] [ebp-40h]
  int v11; // [esp+28h] [ebp-3Ch]
  int v12; // [esp+2Ch] [ebp-38h]
  int v13; // [esp+30h] [ebp-34h]
  _DWORD v14[10]; // [esp+34h] [ebp-30h] BYREF
  int i; // [esp+5Ch] [ebp-8h]
  int v16; // [esp+60h] [ebp-4h]

  v9 = 0;
  v8 = 0;
  i = 0;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 100))(dword_793394);
  v13 = -1;
  v11 = 0;
  v12 = *(_DWORD *)(this + 8);
  for ( i = 0; i < 5; ++i )
  {
    v7[i] = v12 >= i + 1;
    dword_7933C4[i] = -1;
  }
  v8 = *(_DWORD *)(this + 8);
  for ( j = 0; j < 5; ++j )
  {
    v11 = dword_72AC14[j];
    if ( v7[j] )
    {
      for ( i = 0; dword_7933C4[j] == -1 && i < v10; ++i )
      {
        v4 = v11;
        v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 104))(dword_793394, i);
        v13 = sub_537E60(v1, v4);
        if ( v13 != -1 )
        {
          qmemcpy(
            v14,
            (const void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 104))(dword_793394, i),
            sizeof(v14));
          *(_DWORD *)(this + 4 * j + 100) = v14[9];
          *(_BYTE *)(j + this + 16) = 1;
          if ( !v13 )
            *(_BYTE *)(this + 124) = 1;
          if ( v13 )
            v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_793394 + 92))(dword_793394, v8, v13);
          else
            v16 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_793394 + 92))(dword_793394, j + 1, 0);
          v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 96))(dword_793394, i);
          v9 += v16 * v2;
          dword_7933C4[j] = v13;
        }
      }
    }
  }
  return v9;
}


//======================================================================
// sub_537260
// entry 00537260  size 520  status ok
//======================================================================

int __thiscall sub_537260(void *this)
{
  int v2; // [esp+18h] [ebp-Ch]
  int v3; // [esp+1Ch] [ebp-8h]
  int v4; // [esp+20h] [ebp-4h]

  v2 = 5000;
  v3 = *(_DWORD *)(dword_7947E0 + 20244);
  v4 = *(_DWORD *)(dword_7947E0 + 20240);
  switch ( v4 )
  {
    case 0:
    case 1:
    case 2:
      v2 = *(_DWORD *)(dword_7947E0 + 20176);
      break;
    case 3:
      v2 = *(_DWORD *)(dword_7947E0 + 20180);
      break;
    case 4:
    case 5:
      v2 = *(_DWORD *)(dword_7947E0 + 20184);
      break;
    case 6:
    case 7:
      v2 = *(_DWORD *)(dword_7947E0 + 20188);
      break;
    case 8:
    case 9:
    case 10:
    case 11:
      v2 = *(_DWORD *)(dword_7947E0 + 20192);
      break;
    default:
      break;
  }
  if ( (unsigned __int8)sub_538490(this) )
  {
    switch ( v3 )
    {
      case 21:
        if ( v4 == 10 )
        {
          return *(_DWORD *)(dword_7947E0 + 20192) + 500000;
        }
        else if ( v4 == 11 )
        {
          return *(_DWORD *)(dword_7947E0 + 20192) + 1500000;
        }
        break;
      case 25:
        switch ( v4 )
        {
          case 8:
            v2 = *(_DWORD *)(dword_7947E0 + 20192) + 500000;
            break;
          case 9:
            v2 = *(_DWORD *)(dword_7947E0 + 20192) + 2000000;
            break;
          case 10:
            v2 = (int)&loc_4C4B40 + *(_DWORD *)(dword_7947E0 + 20192);
            break;
          case 11:
            v2 = (int)&unk_B71B00 + *(_DWORD *)(dword_7947E0 + 20192);
            break;
          default:
            return v2;
        }
        break;
      case 29:
        switch ( v4 )
        {
          case 8:
            v2 = *(_DWORD *)(dword_7947E0 + 20192) + 600000;
            break;
          case 9:
            v2 = *(_DWORD *)(dword_7947E0 + 20192) + 1700000;
            break;
          case 10:
            v2 = *(_DWORD *)(dword_7947E0 + 20192) + 3500000;
            break;
          case 11:
            v2 = (int)&loc_632E9A + *(_DWORD *)(dword_7947E0 + 20192) + 6;
            break;
          default:
            return v2;
        }
        break;
    }
  }
  return v2;
}


//======================================================================
// sub_5374B0
// entry 005374b0  size 419  status ok
//======================================================================

int __thiscall sub_5374B0(void *this)
{
  int v2; // [esp+Ch] [ebp-8h]
  int v3; // [esp+10h] [ebp-4h]

  v2 = sub_537260(this);
  v3 = 0;
  switch ( *(_DWORD *)(dword_7947E0 + 20240) )
  {
    case 0:
      v3 = 20 * v2;
      sub_5DE880(0);
      break;
    case 1:
      v3 = 10 * v2;
      sub_5DE880(0);
      break;
    case 2:
      v3 = 4 * v2;
      sub_5DE880(0);
      break;
    case 3:
      v3 = v2;
      sub_5DE880(1);
      break;
    case 4:
      v3 = v2 / 5;
      sub_5DE880(5);
      break;
    case 5:
      v3 = v2 / 10;
      sub_5DE880(5);
      break;
    case 6:
      v3 = v2 / 25;
      sub_5DE880(25);
      break;
    case 7:
      v3 = v2 / 50;
      sub_5DE880(25);
      break;
    case 8:
      v3 = v2 / 100;
      sub_5DE880(100);
      break;
    case 9:
      v3 = v2 / 250;
      sub_5DE880(100);
      break;
    case 0xA:
      v3 = v2 / 500;
      sub_5DE880(100);
      break;
    case 0xB:
      v3 = v2 / 1000;
      sub_5DE880(100);
      break;
    default:
      return v3;
  }
  return v3;
}


//======================================================================
// sub_537690
// entry 00537690  size 470  status ok
//======================================================================

int __thiscall sub_537690(char *this, int a2, int a3)
{
  int result; // eax

  switch ( a3 )
  {
    case 0:
      result = *(this + 22 * a2 + sub_537880(a2, 1) + 21);
      break;
    case 1:
      result = *(this + 22 * a2 + sub_537880(a2, 2) + 21);
      break;
    case 2:
      result = *(this + 22 * a2 + sub_537880(a2, 3) + 21);
      break;
    case 3:
      if ( a2 )
      {
        if ( a2 == 1 )
          goto LABEL_10;
        if ( a2 != 2 )
          goto LABEL_19;
        result = *(this + sub_537880(2, 3) + 65);
      }
      else
      {
        result = *(this + sub_537880(0, 1) + 21);
      }
      break;
    case 4:
      if ( a2 )
      {
        if ( a2 == 1 )
        {
LABEL_10:
          result = *(this + sub_537880(1, 2) + 43);
        }
        else
        {
          if ( a2 != 2 )
            goto LABEL_19;
          result = *(this + sub_537880(2, 1) + 65);
        }
      }
      else
      {
        result = *(this + sub_537880(0, 3) + 21);
      }
      break;
    default:
LABEL_19:
      sub_5E9F20((char)"false", "..\\Casino\\slotmachinestate.cpp", 972);
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_537880
// entry 00537880  size 131  status ok
//======================================================================

int __thiscall sub_537880(_DWORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v6 = *(this + a2 + 22);
  v5 = a3 - 2;
  while ( v5 )
  {
    if ( v5 >= 0 )
    {
      if ( ++v6 > sub_538510(this) - 1 )
        v6 = 0;
      --v5;
    }
    else
    {
      if ( --v6 < 0 )
        v6 = sub_538510(this) - 1;
      ++v5;
    }
  }
  return v6;
}


//======================================================================
// sub_537910
// entry 00537910  size 319  status ok
//======================================================================

bool __thiscall sub_537910(char *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-Ch]

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 76))(dword_793394) )
    return a2 == sub_537690(this, a3, a4);
  if ( a4 != 1 )
    goto LABEL_7;
  if ( *(_DWORD *)(dword_793394 + 4 * a3 + 8) == 1 )
  {
    v8 = sub_537880(this, a3, 1);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_793394 + 108))(
             dword_793394,
             *(this + 22 * a3 + v8 + 21)) == a2;
  }
  if ( *(_DWORD *)(dword_793394 + 4 * a3 + 8) == -1 )
  {
    v7 = sub_537880(this, a3, 3);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_793394 + 108))(
             dword_793394,
             *(this + 22 * a3 + v7 + 21)) == a2;
  }
  else
  {
LABEL_7:
    v5 = sub_537690(this, a3, a4);
    return a2 == (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 108))(dword_793394, v5);
  }
}


//======================================================================
// sub_537A50
// entry 00537a50  size 109  status ok
//======================================================================

bool __thiscall sub_537A50(char *this, int a2, int a3, int a4, int a5)
{
  return sub_537910(this, a2, 0, a5) && sub_537910(this, a3, 1, a5) && sub_537910(this, a4, 2, a5);
}


//======================================================================
// sub_537AC0
// entry 00537ac0  size 74  status ok
//======================================================================

char __thiscall sub_537AC0(char *this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( !sub_537910(this, a2, i, a3) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_537B10
// entry 00537b10  size 112  status ok
//======================================================================

BOOL __thiscall sub_537B10(char *this, int a2, int a3, char a4)
{
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v6 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( sub_537910(this, a2, i, a3) )
      ++v6;
  }
  if ( a4 )
    return v6 == 2;
  else
    return v6 > 1;
}


//======================================================================
// sub_537B80
// entry 00537b80  size 112  status ok
//======================================================================

BOOL __thiscall sub_537B80(char *this, int a2, int a3, char a4)
{
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v6 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( sub_537910(this, a2, i, a3) )
      ++v6;
  }
  if ( a4 )
    return v6 == 1;
  else
    return v6 > 0;
}


//======================================================================
// sub_537BF0
// entry 00537bf0  size 101  status ok
//======================================================================

char __thiscall sub_537BF0(char *this, int a2, int a3, int a4)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( !sub_537910(this, a2, i, a4) && !sub_537910(this, a3, i, a4) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_537C60
// entry 00537c60  size 128  status ok
//======================================================================

char __thiscall sub_537C60(char *this, int a2, int a3, int a4, int a5)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    if ( !sub_537910(this, a2, i, a5) && !sub_537910(this, a3, i, a5) && !sub_537910(this, a4, i, a5) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_537CE0
// entry 00537ce0  size 102  status ok
//======================================================================

bool __thiscall sub_537CE0(char *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( sub_537910(this, a2, a5, 1) )
    return 1;
  if ( sub_537910(this, a3, a5, 1) )
    return 1;
  return sub_537910(this, a4, a5, 1);
}


//======================================================================
// sub_537DE0
// entry 00537de0  size 114  status ok
//======================================================================

int __stdcall sub_537DE0(_DWORD *a1)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = *a1 != 100;
  if ( a1[1] != 100 )
    ++v2;
  if ( a1[2] != 100 )
    ++v2;
  if ( a1[3] != 100 )
    ++v2;
  if ( a1[4] != 100 )
    ++v2;
  return v2;
}


//======================================================================
// sub_537E60
// entry 00537e60  size 1450  status ok
//======================================================================

int __thiscall sub_537E60(char *this, int *a2, int a3)
{
  int result; // eax
  bool v4; // al
  bool v5; // [esp+0h] [ebp-24h]
  bool v6; // [esp+4h] [ebp-20h]
  bool v7; // [esp+8h] [ebp-1Ch]
  bool v9; // [esp+18h] [ebp-Ch]
  bool v10; // [esp+19h] [ebp-Bh]
  bool v11; // [esp+1Ah] [ebp-Ah]
  int i; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v13 = sub_537DE0(a2);
  for ( i = 0; i < 3; ++i )
    *(&v9 + i) = 0;
  switch ( a2[6] )
  {
    case 1:
      if ( !sub_537AC0(this, *a2, a3) )
        goto LABEL_81;
      result = a2[7];
      break;
    case 2:
      if ( v13 == 2 )
      {
        if ( !sub_537BF0(this, *a2, a2[1], a3) )
          goto LABEL_81;
        result = a2[7];
      }
      else
      {
        if ( v13 != 3 || !sub_537C60(this, *a2, a2[1], a2[2], a3) )
          goto LABEL_81;
        result = a2[7];
      }
      break;
    case 3:
      if ( !sub_537B10(this, *a2, a3, 0) )
        goto LABEL_81;
      result = a2[7];
      break;
    case 4:
      if ( !sub_537B80(this, *a2, a3, 0) )
        goto LABEL_81;
      result = a2[7];
      break;
    case 5:
      if ( !sub_537A50(this, *a2, a2[1], a2[2], a3) )
        goto LABEL_81;
      result = a2[7];
      break;
    case 6:
      if ( v13 != 3 )
      {
        sub_5E9F20((char)"0", "..\\Casino\\slotmachinestate.cpp", 1182);
        goto LABEL_81;
      }
      if ( !sub_537A50(this, *a2, a2[1], a2[2], a3)
        && !sub_537A50(this, *a2, a2[2], a2[1], a3)
        && !sub_537A50(this, a2[1], *a2, a2[2], a3)
        && !sub_537A50(this, a2[1], a2[2], *a2, a3)
        && !sub_537A50(this, a2[2], *a2, a2[1], a3)
        && !sub_537A50(this, a2[2], a2[1], *a2, a3) )
      {
        goto LABEL_81;
      }
      result = a2[7];
      break;
    case 7:
      v9 = sub_537910(this, *a2, 0, a3);
      v10 = sub_537910(this, *a2, 1, a3);
      v11 = sub_537910(this, *a2, 2, a3);
      if ( !v9 && !v10 && !v11 )
        goto LABEL_81;
      for ( i = 0; ; ++i )
      {
        if ( i >= 3 )
          goto LABEL_81;
        if ( sub_537910(this, a2[1], i, a3) )
          break;
      }
      result = a2[7];
      break;
    case 8:
      v9 = sub_537910(this, *a2, 0, a3);
      v10 = sub_537910(this, *a2, 1, a3);
      v11 = sub_537910(this, *a2, 2, a3);
      if ( !v9 && !v10 && !v11 )
        goto LABEL_81;
      for ( i = 0; i < 3; ++i )
      {
        if ( !*(&v9 + i) )
        {
          v4 = sub_537CE0(this, a2[1], a2[2], a2[3], i, a3);
          *(&v9 + i) = v4;
        }
      }
      if ( !v9 || !v10 || !v11 )
        goto LABEL_81;
      result = a2[7];
      break;
    case 9:
      v7 = sub_537910(this, *a2, 0, a3) || sub_537910(this, a2[1], 0, a3);
      v9 = v7;
      v6 = sub_537910(this, a2[2], 1, a3) || sub_537910(this, a2[3], 1, a3);
      v10 = v6;
      v5 = sub_537910(this, a2[4], 2, a3) || sub_537910(this, a2[5], 2, a3);
      v11 = v5;
      if ( !v9 || !v10 || !v11 )
        goto LABEL_81;
      result = a2[7];
      break;
    case 10:
      if ( !sub_537910(this, *a2, 0, a3) )
        goto LABEL_81;
      result = a2[7];
      break;
    case 11:
      if ( !sub_537910(this, *a2, 0, a3) || !sub_537910(this, *a2, 1, a3) )
        goto LABEL_81;
      result = a2[7];
      break;
    default:
LABEL_81:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_538440
// entry 00538440  size 72  status ok
//======================================================================

bool __thiscall sub_538440(void *this)
{
  return (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 60))(dword_793394)
      && !(unsigned __int8)sub_5384E0(this);
}


//======================================================================
// sub_538490
// entry 00538490  size 72  status ok
//======================================================================

bool __thiscall sub_538490(void *this)
{
  return (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 60))(dword_793394)
      && (unsigned __int8)sub_5384E0(this);
}


//======================================================================
// sub_5384E0
// entry 005384e0  size 39  status ok
//======================================================================

BOOL __thiscall sub_5384E0(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 56))(dword_793394, this) == 1;
}


//======================================================================
// sub_538510
// entry 00538510  size 16  status ok
//======================================================================

int sub_538510()
{
  return 22;
}


//======================================================================
// sub_5385B0
// entry 005385b0  size 53  status ok
//======================================================================

int __thiscall sub_5385B0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    *(this + i + 2) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5385F0
// entry 005385f0  size 37  status ok
//======================================================================

int sub_5385F0()
{
  return dword_737090[*(_DWORD *)(dword_7947E0 + 20240)];
}


//======================================================================
// sub_538620
// entry 00538620  size 29  status ok
//======================================================================

int __stdcall sub_538620(int a1, int a2)
{
  return dword_72AC98[22 * a1 + a2];
}


//======================================================================
// sub_538640
// entry 00538640  size 29  status ok
//======================================================================

int __stdcall sub_538640(int a1, int a2)
{
  return dword_72ADA0[64 * a1 + a2];
}


//======================================================================
// sub_538660
// entry 00538660  size 32  status ok
//======================================================================

int __stdcall sub_538660(int a1, int a2)
{
  return dword_72AC28[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538680
// entry 00538680  size 25  status ok
//======================================================================

int __stdcall sub_538680(int a1)
{
  return dword_72B0C0[10 * a1];
}


//======================================================================
// sub_5386A0
// entry 005386a0  size 16  status ok
//======================================================================

int sub_5386A0()
{
  return 7;
}


//======================================================================
// sub_5386B0
// entry 005386b0  size 24  status ok
//======================================================================

char *__stdcall sub_5386B0(int a1)
{
  return (char *)&unk_72B0A0 + 40 * a1;
}


//======================================================================
// sub_5386D0
// entry 005386d0  size 29  status ok
//======================================================================

int __stdcall sub_5386D0(int a1, int a2)
{
  return dword_72B270[22 * a1 + a2];
}


//======================================================================
// sub_5386F0
// entry 005386f0  size 29  status ok
//======================================================================

int __stdcall sub_5386F0(int a1, int a2)
{
  return dword_72B378[64 * a1 + a2];
}


//======================================================================
// sub_538710
// entry 00538710  size 32  status ok
//======================================================================

int __stdcall sub_538710(int a1, int a2)
{
  return dword_72B1B8[9 * a1 - 9 + a2];
}


//======================================================================
// sub_538730
// entry 00538730  size 25  status ok
//======================================================================

int __stdcall sub_538730(int a1)
{
  return dword_72B698[10 * a1];
}


//======================================================================
// sub_538750
// entry 00538750  size 16  status ok
//======================================================================

int sub_538750()
{
  return 9;
}


//======================================================================
// sub_538760
// entry 00538760  size 24  status ok
//======================================================================

char *__stdcall sub_538760(int a1)
{
  return (char *)&unk_72B678 + 40 * a1;
}


//======================================================================
// sub_538780
// entry 00538780  size 29  status ok
//======================================================================

int __stdcall sub_538780(int a1, int a2)
{
  return dword_72B838[22 * a1 + a2];
}


//======================================================================
// sub_5387A0
// entry 005387a0  size 29  status ok
//======================================================================

int __stdcall sub_5387A0(int a1, int a2)
{
  return dword_72B940[64 * a1 + a2];
}


//======================================================================
// sub_5387C0
// entry 005387c0  size 32  status ok
//======================================================================

int __stdcall sub_5387C0(int a1, int a2)
{
  return dword_72B7E0[7 * a1 - 7 + a2];
}


//======================================================================
// sub_5387E0
// entry 005387e0  size 25  status ok
//======================================================================

int __stdcall sub_5387E0(int a1)
{
  return dword_72BC60[10 * a1];
}


//======================================================================
// sub_538800
// entry 00538800  size 16  status ok
//======================================================================

int sub_538800()
{
  return 7;
}


//======================================================================
// sub_538810
// entry 00538810  size 24  status ok
//======================================================================

char *__stdcall sub_538810(int a1)
{
  return (char *)&unk_72BC40 + 40 * a1;
}


//======================================================================
// sub_538830
// entry 00538830  size 29  status ok
//======================================================================

int __stdcall sub_538830(int a1, int a2)
{
  return dword_72BDB8[22 * a1 + a2];
}


//======================================================================
// sub_538850
// entry 00538850  size 29  status ok
//======================================================================

int __stdcall sub_538850(int a1, int a2)
{
  return dword_72BEC0[64 * a1 + a2];
}


//======================================================================
// sub_538870
// entry 00538870  size 32  status ok
//======================================================================

int __stdcall sub_538870(int a1, int a2)
{
  return dword_72BD58[8 * a1 - 8 + a2];
}


//======================================================================
// sub_538890
// entry 00538890  size 25  status ok
//======================================================================

int __stdcall sub_538890(int a1)
{
  return dword_72C1E0[10 * a1];
}


//======================================================================
// sub_5388B0
// entry 005388b0  size 16  status ok
//======================================================================

int sub_5388B0()
{
  return 8;
}


//======================================================================
// sub_5388C0
// entry 005388c0  size 24  status ok
//======================================================================

char *__stdcall sub_5388C0(int a1)
{
  return (char *)&unk_72C1C0 + 40 * a1;
}


//======================================================================
// sub_5388E0
// entry 005388e0  size 29  status ok
//======================================================================

int __stdcall sub_5388E0(int a1, int a2)
{
  return dword_72C358[22 * a1 + a2];
}


//======================================================================
// sub_538900
// entry 00538900  size 29  status ok
//======================================================================

int __stdcall sub_538900(int a1, int a2)
{
  return dword_72C460[64 * a1 + a2];
}


//======================================================================
// sub_538920
// entry 00538920  size 32  status ok
//======================================================================

int __stdcall sub_538920(int a1, int a2)
{
  return dword_72C300[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538940
// entry 00538940  size 25  status ok
//======================================================================

int __stdcall sub_538940(int a1)
{
  return dword_72C780[10 * a1];
}


//======================================================================
// sub_538960
// entry 00538960  size 16  status ok
//======================================================================

int sub_538960()
{
  return 7;
}


//======================================================================
// sub_538970
// entry 00538970  size 24  status ok
//======================================================================

char *__stdcall sub_538970(int a1)
{
  return (char *)&unk_72C760 + 40 * a1;
}


//======================================================================
// sub_538990
// entry 00538990  size 29  status ok
//======================================================================

int __stdcall sub_538990(int a1, int a2)
{
  return dword_72C930[22 * a1 + a2];
}


//======================================================================
// sub_5389B0
// entry 005389b0  size 29  status ok
//======================================================================

int __stdcall sub_5389B0(int a1, int a2)
{
  return dword_72CA38[64 * a1 + a2];
}


//======================================================================
// sub_5389D0
// entry 005389d0  size 32  status ok
//======================================================================

int __stdcall sub_5389D0(int a1, int a2)
{
  return dword_72C878[9 * a1 - 9 + a2];
}


//======================================================================
// sub_5389F0
// entry 005389f0  size 25  status ok
//======================================================================

int __stdcall sub_5389F0(int a1)
{
  return dword_72CD58[10 * a1];
}


//======================================================================
// sub_538A10
// entry 00538a10  size 16  status ok
//======================================================================

int sub_538A10()
{
  return 9;
}


//======================================================================
// sub_538A20
// entry 00538a20  size 24  status ok
//======================================================================

char *__stdcall sub_538A20(int a1)
{
  return (char *)&unk_72CD38 + 40 * a1;
}


//======================================================================
// sub_538A40
// entry 00538a40  size 29  status ok
//======================================================================

int __stdcall sub_538A40(int a1, int a2)
{
  return dword_72CEF8[22 * a1 + a2];
}


//======================================================================
// sub_538A60
// entry 00538a60  size 29  status ok
//======================================================================

int __stdcall sub_538A60(int a1, int a2)
{
  return dword_72D000[64 * a1 + a2];
}


//======================================================================
// sub_538A80
// entry 00538a80  size 32  status ok
//======================================================================

int __stdcall sub_538A80(int a1, int a2)
{
  return dword_72CEA0[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538AA0
// entry 00538aa0  size 25  status ok
//======================================================================

int __stdcall sub_538AA0(int a1)
{
  return dword_72D320[10 * a1];
}


//======================================================================
// sub_538AC0
// entry 00538ac0  size 16  status ok
//======================================================================

int sub_538AC0()
{
  return 7;
}


//======================================================================
// sub_538AD0
// entry 00538ad0  size 24  status ok
//======================================================================

char *__stdcall sub_538AD0(int a1)
{
  return (char *)&unk_72D300 + 40 * a1;
}


//======================================================================
// sub_538AF0
// entry 00538af0  size 29  status ok
//======================================================================

int __stdcall sub_538AF0(int a1, int a2)
{
  return dword_72D478[22 * a1 + a2];
}


//======================================================================
// sub_538B10
// entry 00538b10  size 29  status ok
//======================================================================

int __stdcall sub_538B10(int a1, int a2)
{
  return dword_72D580[64 * a1 + a2];
}


//======================================================================
// sub_538B30
// entry 00538b30  size 32  status ok
//======================================================================

int __stdcall sub_538B30(int a1, int a2)
{
  return dword_72D418[8 * a1 - 8 + a2];
}


//======================================================================
// sub_538B50
// entry 00538b50  size 25  status ok
//======================================================================

int __stdcall sub_538B50(int a1)
{
  return dword_72D8A0[10 * a1];
}


//======================================================================
// sub_538B70
// entry 00538b70  size 16  status ok
//======================================================================

int sub_538B70()
{
  return 8;
}


//======================================================================
// sub_538B80
// entry 00538b80  size 24  status ok
//======================================================================

char *__stdcall sub_538B80(int a1)
{
  return (char *)&unk_72D880 + 40 * a1;
}


//======================================================================
// sub_538BA0
// entry 00538ba0  size 29  status ok
//======================================================================

int __stdcall sub_538BA0(int a1, int a2)
{
  return dword_72DE10[22 * a1 + a2];
}


//======================================================================
// sub_538BC0
// entry 00538bc0  size 29  status ok
//======================================================================

int __stdcall sub_538BC0(int a1, int a2)
{
  return dword_72DF18[64 * a1 + a2];
}


//======================================================================
// sub_538BE0
// entry 00538be0  size 32  status ok
//======================================================================

int __stdcall sub_538BE0(int a1, int a2)
{
  return dword_72D9C0[9 * a1 - 9 + a2];
}


//======================================================================
// sub_538C00
// entry 00538c00  size 25  status ok
//======================================================================

int __stdcall sub_538C00(int a1)
{
  return dword_72DA98[10 * a1];
}


//======================================================================
// sub_538C20
// entry 00538c20  size 16  status ok
//======================================================================

int sub_538C20()
{
  return 23;
}


//======================================================================
// sub_538C30
// entry 00538c30  size 24  status ok
//======================================================================

char *__stdcall sub_538C30(int a1)
{
  return (char *)&unk_72DA78 + 40 * a1;
}


//======================================================================
// sub_538C50
// entry 00538c50  size 29  status ok
//======================================================================

int __stdcall sub_538C50(int a1, int a2)
{
  return dword_72E788[22 * a1 + a2];
}


//======================================================================
// sub_538C70
// entry 00538c70  size 29  status ok
//======================================================================

int __stdcall sub_538C70(int a1, int a2)
{
  return dword_72E890[64 * a1 + a2];
}


//======================================================================
// sub_538C90
// entry 00538c90  size 32  status ok
//======================================================================

int __stdcall sub_538C90(int a1, int a2)
{
  return dword_72E218[9 * a1 - 9 + a2];
}


//======================================================================
// sub_538CB0
// entry 00538cb0  size 25  status ok
//======================================================================

int __stdcall sub_538CB0(int a1)
{
  return dword_72E2A8[10 * a1];
}


//======================================================================
// sub_538CE0
// entry 00538ce0  size 24  status ok
//======================================================================

char *__stdcall sub_538CE0(int a1)
{
  return (char *)&unk_72E288 + 40 * a1;
}


//======================================================================
// sub_538D00
// entry 00538d00  size 29  status ok
//======================================================================

int __stdcall sub_538D00(int a1, int a2)
{
  return dword_72FB30[22 * a1 + a2];
}


//======================================================================
// sub_538D20
// entry 00538d20  size 29  status ok
//======================================================================

int __stdcall sub_538D20(int a1, int a2)
{
  return dword_72FC38[64 * a1 + a2];
}


//======================================================================
// sub_538D40
// entry 00538d40  size 32  status ok
//======================================================================

int __stdcall sub_538D40(int a1, int a2)
{
  return dword_72EB90[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538D60
// entry 00538d60  size 25  status ok
//======================================================================

int __stdcall sub_538D60(int a1)
{
  return dword_72ECF0[10 * a1];
}


//======================================================================
// sub_538D80
// entry 00538d80  size 16  status ok
//======================================================================

int sub_538D80()
{
  return 23;
}


//======================================================================
// sub_538D90
// entry 00538d90  size 24  status ok
//======================================================================

char *__stdcall sub_538D90(int a1)
{
  return (char *)&unk_72ECD0 + 40 * a1;
}


//======================================================================
// sub_538DB0
// entry 00538db0  size 29  status ok
//======================================================================

int __stdcall sub_538DB0(int a1, int a2)
{
  return dword_72FF38[22 * a1 + a2];
}


//======================================================================
// sub_538DD0
// entry 00538dd0  size 29  status ok
//======================================================================

int __stdcall sub_538DD0(int a1, int a2)
{
  return dword_730040[64 * a1 + a2];
}


//======================================================================
// sub_538DF0
// entry 00538df0  size 32  status ok
//======================================================================

int __stdcall sub_538DF0(int a1, int a2)
{
  return dword_72EBE8[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538E10
// entry 00538e10  size 25  status ok
//======================================================================

int __stdcall sub_538E10(int a1)
{
  return dword_72F088[10 * a1];
}


//======================================================================
// sub_538E30
// entry 00538e30  size 16  status ok
//======================================================================

int sub_538E30()
{
  return 23;
}


//======================================================================
// sub_538E40
// entry 00538e40  size 24  status ok
//======================================================================

char *__stdcall sub_538E40(int a1)
{
  return (char *)&unk_72F068 + 40 * a1;
}


//======================================================================
// sub_538E60
// entry 00538e60  size 29  status ok
//======================================================================

int __stdcall sub_538E60(int a1, int a2)
{
  return dword_730748[22 * a1 + a2];
}


//======================================================================
// sub_538E80
// entry 00538e80  size 29  status ok
//======================================================================

int __stdcall sub_538E80(int a1, int a2)
{
  return dword_730850[64 * a1 + a2];
}


//======================================================================
// sub_538EA0
// entry 00538ea0  size 32  status ok
//======================================================================

int __stdcall sub_538EA0(int a1, int a2)
{
  return dword_72EC40[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538EC0
// entry 00538ec0  size 25  status ok
//======================================================================

int __stdcall sub_538EC0(int a1)
{
  return dword_72F420[10 * a1];
}


//======================================================================
// sub_538EE0
// entry 00538ee0  size 16  status ok
//======================================================================

int sub_538EE0()
{
  return 23;
}


//======================================================================
// sub_538EF0
// entry 00538ef0  size 24  status ok
//======================================================================

char *__stdcall sub_538EF0(int a1)
{
  return (char *)&unk_72F400 + 40 * a1;
}


//======================================================================
// sub_538F10
// entry 00538f10  size 29  status ok
//======================================================================

int __stdcall sub_538F10(int a1, int a2)
{
  return dword_730340[22 * a1 + a2];
}


//======================================================================
// sub_538F30
// entry 00538f30  size 29  status ok
//======================================================================

int __stdcall sub_538F30(int a1, int a2)
{
  return dword_730448[64 * a1 + a2];
}


//======================================================================
// sub_538F50
// entry 00538f50  size 32  status ok
//======================================================================

int __stdcall sub_538F50(int a1, int a2)
{
  return dword_72EBE8[7 * a1 - 7 + a2];
}


//======================================================================
// sub_538F70
// entry 00538f70  size 25  status ok
//======================================================================

int __stdcall sub_538F70(int a1)
{
  return dword_72F7B8[10 * a1];
}


//======================================================================
// sub_538F90
// entry 00538f90  size 16  status ok
//======================================================================

int sub_538F90()
{
  return 23;
}


//======================================================================
// sub_538FA0
// entry 00538fa0  size 24  status ok
//======================================================================

char *__stdcall sub_538FA0(int a1)
{
  return (char *)&unk_72F798 + 40 * a1;
}


//======================================================================
// sub_538FC0
// entry 00538fc0  size 29  status ok
//======================================================================

int __stdcall sub_538FC0(int a1, int a2)
{
  return dword_730EF8[22 * a1 + a2];
}


//======================================================================
// sub_538FE0
// entry 00538fe0  size 29  status ok
//======================================================================

int __stdcall sub_538FE0(int a1, int a2)
{
  return dword_731000[64 * a1 + a2];
}


//======================================================================
// sub_539000
// entry 00539000  size 32  status ok
//======================================================================

int __stdcall sub_539000(int a1, int a2)
{
  return dword_730B50[8 * a1 - 8 + a2];
}


//======================================================================
// sub_539020
// entry 00539020  size 71  status ok
//======================================================================

int __thiscall sub_539020(_DWORD *this, int a2)
{
  if ( *(this + 1) == 1 )
    return dword_730BD0[10 * a2];
  if ( *(this + 1) == 2 )
    return dword_730C98[10 * a2];
  return dword_730DD8[10 * a2];
}


//======================================================================
// sub_539070
// entry 00539070  size 48  status ok
//======================================================================

int __thiscall sub_539070(_DWORD *this)
{
  if ( *(this + 1) == 1 )
    return 5;
  else
    return 8;
}


//======================================================================
// sub_5390A0
// entry 005390a0  size 68  status ok
//======================================================================

char *__thiscall sub_5390A0(_DWORD *this, int a2)
{
  if ( *(this + 1) == 1 )
    return (char *)&unk_730BB0 + 40 * a2;
  if ( *(this + 1) == 2 )
    return (char *)&unk_730C78 + 40 * a2;
  return (char *)&unk_730DB8 + 40 * a2;
}


//======================================================================
// sub_5390F0
// entry 005390f0  size 42  status ok
//======================================================================

int sub_5390F0()
{
  if ( *(_DWORD *)(dword_79338C + 8) == 1 )
    return 5;
  else
    return 8;
}


//======================================================================
// sub_539120
// entry 00539120  size 29  status ok
//======================================================================

int __stdcall sub_539120(int a1, int a2)
{
  return dword_731758[64 * a1 + a2];
}


//======================================================================
// sub_539140
// entry 00539140  size 29  status ok
//======================================================================

int __stdcall sub_539140(int a1, int a2)
{
  return dword_731650[22 * a1 + a2];
}


//======================================================================
// sub_539160
// entry 00539160  size 25  status ok
//======================================================================

int __stdcall sub_539160(int a1)
{
  return dword_731378[10 * a1];
}


//======================================================================
// sub_539180
// entry 00539180  size 32  status ok
//======================================================================

int __stdcall sub_539180(int a1, int a2)
{
  return dword_731300[7 * a1 - 7 + a2];
}


//======================================================================
// sub_5391A0
// entry 005391a0  size 16  status ok
//======================================================================

int sub_5391A0()
{
  return 19;
}


//======================================================================
// sub_5391B0
// entry 005391b0  size 24  status ok
//======================================================================

char *__stdcall sub_5391B0(int a1)
{
  return (char *)&unk_731358 + 40 * a1;
}


//======================================================================
// sub_5391D0
// entry 005391d0  size 29  status ok
//======================================================================

int __stdcall sub_5391D0(int a1, int a2)
{
  return dword_7320B0[64 * a1 + a2];
}


//======================================================================
// sub_5391F0
// entry 005391f0  size 29  status ok
//======================================================================

int __stdcall sub_5391F0(int a1, int a2)
{
  return dword_731FA8[22 * a1 + a2];
}


//======================================================================
// sub_539210
// entry 00539210  size 25  status ok
//======================================================================

int __stdcall sub_539210(int a1)
{
  return dword_731B18[10 * a1];
}


