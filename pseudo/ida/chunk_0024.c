//======================================================================
// sub_5A0750
// entry 005a0750  size 294  status ok
//======================================================================

int __stdcall sub_5A0750(int a1, int a2)
{
  struct Concurrency::IExecutionContext *DefaultDestination; // eax
  struct Concurrency::IExecutionContext *v3; // eax
  struct Concurrency::IExecutionContext *v4; // eax
  struct Concurrency::IExecutionContext *v5; // eax
  int result; // eax
  struct Concurrency::IExecutionContext *v7; // eax
  struct Concurrency::IExecutionContext *v8; // eax
  CImageDisplay *v10; // [esp+Ch] [ebp-Ch]

  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  if ( !sub_5DCB00(DefaultDestination) )
    return sub_5DC7D0(a1, a2);
  v3 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  v10 = (CImageDisplay *)sub_5DCB00(v3);
  if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v10)->rcSource.left != 3 )
  {
    return sub_5DC7D0(a1, a2);
  }
  switch ( a1 )
  {
    case 3232002:
      v4 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
      sub_5A36C0(v4);
      return sub_5DC7D0(a1, a2);
    case 3232003:
      v5 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
      result = sub_5A1EA0(v5, 1, 0);
      break;
    case 3232004:
      v7 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
      result = sub_5A1EA0(v7, 0, 1);
      break;
    case 3232005:
      v8 = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
      result = sub_5A1EA0(v8, 1, 1);
      break;
    default:
      return sub_5DC7D0(a1, a2);
  }
  return result;
}


//======================================================================
// sub_5A0890
// entry 005a0890  size 78  status ok
//======================================================================

int __thiscall sub_5A0890(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_5DB890(this);
  sub_59C2D0((_DWORD **)dword_7935C4);
  sub_5A3880(dword_7935D0, this);
  return sub_59FA00((_BYTE *)dword_7935C8);
}


//======================================================================
// sub_5A08E0
// entry 005a08e0  size 202  status ok
//======================================================================

int __thiscall sub_5A08E0(_BYTE *this, int a2, int a3)
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
  sub_5A3C00(v4);
  v5 = sub_5FB350(51);
  v6 = sub_600230(v5);
  sub_5A3BD0(v6);
  v7 = sub_5FB350(52);
  v8 = sub_600230(v7);
  sub_5A3BA0(v8);
  if ( (unsigned __int8)sub_5DA830(dword_7935CC) )
    return sub_59C2D0((_DWORD **)dword_7935C4);
  sub_637610(dword_162EE84);
  result = sub_59C2D0((_DWORD **)dword_7935C4);
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_5A3880(dword_7935D0, this);
    return sub_59FA00((_BYTE *)dword_7935C8);
  }
  return result;
}


//======================================================================
// sub_5A09B0
// entry 005a09b0  size 77  status ok
//======================================================================

int __thiscall sub_5A09B0(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(dword_7935C4 + 4 * i + 28) != a2 )
      sub_5CD330(*(_DWORD *)(dword_7935C4 + 4 * i + 28), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5A0A00
// entry 005a0a00  size 36  status ok
//======================================================================

int __thiscall sub_5A0A00(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_5A0A30
// entry 005a0a30  size 489  status ok
//======================================================================

int __thiscall sub_5A0A30(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-4Ch]
  _AFX_OLE_STATE *v3; // [esp+8h] [ebp-48h]
  ATL::CCRTHeap *v4; // [esp+Ch] [ebp-44h]
  _AFX_OLE_STATE *v5; // [esp+10h] [ebp-40h]
  Concurrency::details::UMSThreadVirtualProcessor *v6; // [esp+14h] [ebp-3Ch]
  int v8; // [esp+18h] [ebp-38h]
  _DWORD *v9; // [esp+1Ch] [ebp-34h]
  _AFX_OLE_STATE *v10; // [esp+24h] [ebp-2Ch]
  ATL::CCRTHeap *v11; // [esp+2Ch] [ebp-24h]
  _AFX_OLE_STATE *v12; // [esp+34h] [ebp-1Ch]
  void *v13; // [esp+3Ch] [ebp-14h]

  sub_5D8230();
  v13 = operator new(0x124u);
  if ( v13 )
    v6 = (Concurrency::details::UMSThreadVirtualProcessor *)sub_5A1CC0(v13);
  else
    v6 = 0;
  dword_7935D0 = v6;
  sub_5A27C0();
  v12 = (_AFX_OLE_STATE *)operator new(8u);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_7935C0 = (int)v5;
  v11 = (ATL::CCRTHeap *)operator new(0xA8u);
  if ( v11 )
    v4 = sub_59B4D0(v11);
  else
    v4 = 0;
  dword_7935C4 = (int)v4;
  sub_59BA30((int)v4);
  v10 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_7935C8 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &BigRaiseRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8);
  return sub_59F960((_BYTE *)dword_7935C8, 0);
}


//======================================================================
// sub_5A0C20
// entry 005a0c20  size 566  status ok
//======================================================================

_BYTE *__thiscall sub_5A0C20(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+8h] [ebp-40h]
  int v13; // [esp+Ch] [ebp-3Ch]
  _DWORD *v14; // [esp+10h] [ebp-38h]
  _DWORD *v16; // [esp+18h] [ebp-30h]
  int i; // [esp+20h] [ebp-28h]
  _DWORD v18[3]; // [esp+24h] [ebp-24h]
  _DWORD v19[3]; // [esp+30h] [ebp-18h]
  int v20; // [esp+44h] [ebp-4h]

  v18[0] = "SID_CASINO_DEALERVOICE";
  v18[1] = "SID_CASINO_CONTINUEBUTTON";
  v18[2] = "SID_BIGRAISE_CHECKBOX_REQUIRE_ANTE";
  v19[0] = 50;
  v19[1] = 51;
  v19[2] = 52;
  for ( i = 0; i < 3; ++i )
  {
    v5 = sub_630F40(v18[i]);
    v6 = sub_5F9EF0(0, v19[i], 3200201, 20, 20 * i + 85, 1, v5, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v6);
  }
  v7 = (char *)sub_630F40("SID_GENERIC_HELP");
  v8 = sub_5FA790(0, 10, v7, 72, 240, 84, 262, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v8);
  v16 = operator new(0x1D0u);
  v20 = 0;
  if ( v16 )
  {
    sub_5EC5A0(v16);
    *v16 = &BigRaiseSettingsHelpText::`vftable';
    v14 = v16;
  }
  else
  {
    v14 = 0;
  }
  v20 = -1;
  v9 = sub_5FA5B0(v14, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v9);
  if ( (unsigned __int8)sub_5A2990(dword_7935D0) )
  {
    v13 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 244))(v13);
  }
  if ( (unsigned __int8)sub_5A3E10(dword_7935D0) )
  {
    v12 = sub_5FB350(51);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 244))(v12);
  }
  if ( (unsigned __int8)sub_5A2970(dword_7935D0) )
  {
    v10 = sub_5FB350(52);
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 244))(v10);
  }
  *(this + 124) = 0;
  return this;
}


//======================================================================
// sub_5A0E60
// entry 005a0e60  size 22  status ok
//======================================================================

int sub_5A0E60()
{
  return sub_5A2990(dword_7935D0);
}


//======================================================================
// sub_5A0E80
// entry 005a0e80  size 49  status ok
//======================================================================

int __thiscall sub_5A0E80(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3232001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_5A0EC0
// entry 005a0ec0  size 194  status ok
//======================================================================

int __stdcall sub_5A0EC0(int a1, int a2)
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
// sub_5A0F90
// entry 005a0f90  size 35  status ok
//======================================================================

char __thiscall sub_5A0F90(void *this)
{
  if ( dword_7935D0 )
    return sub_5A37D0(dword_7935D0, this);
  else
    return 1;
}


//======================================================================
// sub_5A0FC0
// entry 005a0fc0  size 207  status ok
//======================================================================

void __thiscall sub_5A0FC0(void *this, int a2)
{
  int v2; // [esp-8h] [ebp-1Ch]
  int v3; // [esp-4h] [ebp-18h]
  void *v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]
  int i; // [esp+10h] [ebp-4h]

  v4 = this;
  for ( i = 0; i < 3; ++i )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, void *))(**((_DWORD **)dword_7935D0 + 3 * a2 + i + 2) + 180))(
           *((_DWORD *)dword_7935D0 + 3 * a2 + i + 2),
           v4) )
    {
      v5 = *((_DWORD *)dword_7935D0 + 3 * a2 + i + 2);
      v3 = *(_DWORD *)(v5 + 32 * a2 + 76);
      v2 = *(_DWORD *)(v5 + 32 * a2 + 72);
      sub_5DCB00(a2);
      sub_5D5CF0(v2, v3);
    }
    sub_5CB9B0(*((_DWORD *)dword_7935D0 + 3 * a2 + i + 2));
  }
}


//======================================================================
// sub_5A1090
// entry 005a1090  size 119  status ok
//======================================================================

int __stdcall sub_5A1090(int a1)
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
  sub_5A2040(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_5A2040(a1);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_5A1110
// entry 005a1110  size 115  status ok
//======================================================================

int __stdcall sub_5A1110(int a1)
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
  sub_5A2040(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_5A2040(-1);
  *(_DWORD *)(v5 + 12) = v3;
  *(_DWORD *)(v5 + 16) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_5A11A0
// entry 005a11a0  size 122  status ok
//======================================================================

int __thiscall sub_5A11A0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_59FA00((_BYTE *)dword_7935C8);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\bigraiseroom.cpp", 409);
  sub_5A3880(dword_7935D0, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_5A1220
// entry 005a1220  size 349  status ok
//======================================================================

void __thiscall sub_5A1220(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int i; // [esp+4h] [ebp-24h]
  int v7; // [esp+8h] [ebp-20h]
  _DWORD v8[5]; // [esp+Ch] [ebp-1Ch]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h]

  if ( dword_163068C )
  {
    v7 = sub_5FB350(50);
    v8[0] = 0;
    v8[1] = sub_5FB350(51);
    v8[2] = 1;
    v8[3] = sub_5FB350(52);
    v8[4] = 2;
    v9 = 3;
    v10 = -1;
    for ( i = 0; i < v9; ++i )
    {
      if ( v8[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v8[2 * i - 1] + 132))(v8[2 * i - 1], a2) )
      {
        v10 = v8[2 * i];
        break;
      }
    }
    if ( v10 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else if ( v10 )
    {
      if ( v10 == 1 )
      {
        v3 = sub_630F40("SID_CASINO_HELP_CONTINUEBUTTON");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
      else if ( v10 == 2 )
      {
        v4 = sub_630F40("SID_BIGRAISE_HELP_REQUIRE_ANTE");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
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
// sub_5A13B0
// entry 005a13b0  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5A13B0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &BigRaiseRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_5A1420
// entry 005a1420  size 188  status ok
//======================================================================

void *__stdcall sub_5A1420(int a1)
{
  int v1; // eax

  if ( (dword_7935D4 & 1) == 0 )
  {
    dword_7935D4 |= 1u;
    dword_752FC4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_752FC8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3232001 )
    return &unk_752FC0;
  else
    return 0;
}


//======================================================================
// sub_5A14E0
// entry 005a14e0  size 16  status ok
//======================================================================

void *sub_5A14E0()
{
  return &unk_752A30;
}


//======================================================================
// sub_5A14F0
// entry 005a14f0  size 16  status ok
//======================================================================

void *sub_5A14F0()
{
  return &unk_752AE0;
}


//======================================================================
// sub_5A1520
// entry 005a1520  size 51  status ok
//======================================================================

char __stdcall sub_5A1520(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_BIGRAISE");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_5A1560
// entry 005a1560  size 94  status ok
//======================================================================

char __stdcall sub_5A1560(_DWORD *a1, int a2)
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
// sub_5A15C0
// entry 005a15c0  size 16  status ok
//======================================================================

int sub_5A15C0()
{
  return 3232000;
}


//======================================================================
// sub_5A15D0
// entry 005a15d0  size 16  status ok
//======================================================================

void *sub_5A15D0()
{
  return &unk_752FCC;
}


//======================================================================
// sub_5A1610
// entry 005a1610  size 16  status ok
//======================================================================

int sub_5A1610()
{
  return 11;
}


//======================================================================
// sub_5A1620
// entry 005a1620  size 16  status ok
//======================================================================

const char *sub_5A1620()
{
  return "BigRaise";
}


//======================================================================
// sub_5A1630
// entry 005a1630  size 16  status ok
//======================================================================

int sub_5A1630()
{
  return 20;
}


//======================================================================
// sub_5A1650
// entry 005a1650  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_5A1650(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(1);
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
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)1 )
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
// sub_5A1780
// entry 005a1780  size 16  status ok
//======================================================================

int sub_5A1780()
{
  return 25;
}


//======================================================================
// sub_5A1790
// entry 005a1790  size 279  status ok
//======================================================================

char __stdcall sub_5A1790(int a1, int a2)
{
  if ( a2 == 3232000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(1, -1);
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
        case 5014:
          *(_DWORD *)(dword_7947E0 + 20236) = 1234;
          break;
        default:
          break;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 1, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3232000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 1, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_5A18C0
// entry 005a18c0  size 41  status ok
//======================================================================

char __stdcall sub_5A18C0(int a1)
{
  if ( a1 != 3232000 )
    return 0;
  sub_653BD0(1);
  return 1;
}


//======================================================================
// sub_5A18F0
// entry 005a18f0  size 15  status ok
//======================================================================

char __stdcall sub_5A18F0(int a1)
{
  return 0;
}


//======================================================================
// sub_5A1900
// entry 005a1900  size 15  status ok
//======================================================================

char __stdcall sub_5A1900(int a1)
{
  return 0;
}


//======================================================================
// sub_5A1910
// entry 005a1910  size 60  status ok
//======================================================================

char __stdcall sub_5A1910(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_5A1950
// entry 005a1950  size 45  status ok
//======================================================================

char __stdcall sub_5A1950(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  a1[2] = 1;
  return 1;
}


//======================================================================
// sub_5A1980
// entry 005a1980  size 65  status ok
//======================================================================

char __stdcall sub_5A1980(_DWORD *a1)
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
// sub_5A19E0
// entry 005a19e0  size 120  status ok
//======================================================================

_DWORD *sub_5A19E0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_59FFA0(v2);
  else
    return 0;
}


//======================================================================
// sub_5A1A60
// entry 005a1a60  size 90  status ok
//======================================================================

char __stdcall sub_5A1A60(_BYTE *a1)
{
  _BYTE *v2; // [esp+4h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  return 1;
}


//======================================================================
// sub_5A1AD0
// entry 005a1ad0  size 446  status ok
//======================================================================

char __stdcall sub_5A1AD0(int a1, int a2)
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
  v20 = sub_63AAE0(1);
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)1 )
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
// sub_5A1CC0
// entry 005a1cc0  size 83  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5A1CC0(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BigRaiseState::`vftable';
  *((_DWORD *)this + 1) = 0;
  for ( i = 0; i < 12; ++i )
    *((_DWORD *)this + i + 2) = 0;
  return this;
}


//======================================================================
// sub_5A1D20
// entry 005a1d20  size 210  status ok
//======================================================================

void __thiscall sub_5A1D20(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &BigRaiseState::`vftable';
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
// sub_5A1E00
// entry 005a1e00  size 87  status ok
//======================================================================

int __stdcall sub_5A1E00(int a1, __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3 && (unsigned __int16)sub_5A26F0(a1, i); ++i )
    ;
  return sub_5A3B70(a1, i, a2);
}


//======================================================================
// sub_5A1E60
// entry 005a1e60  size 52  status ok
//======================================================================

int __thiscall sub_5A1E60(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 247) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5A1EA0
// entry 005a1ea0  size 327  status ok
//======================================================================

char __thiscall sub_5A1EA0(_BYTE *this, int a2, char a3, char a4)
{
  bool v5; // [esp+0h] [ebp-18h]
  CImageDisplay *v7; // [esp+8h] [ebp-10h]

  v7 = (CImageDisplay *)sub_5DCB00(a2);
  v5 = CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3;
  if ( v5 && (unsigned __int8)sub_5A2A40(a2, a3, a4) )
    return 0;
  *(this + 240) = 0;
  *(this + a2 + 251) = a3;
  if ( !*(this + a2 + 251) && (unsigned __int8)sub_5A3690(a2) )
    sub_5A4390(a2, 3, 0, 0);
  *(this + a2 + 255) = a4;
  if ( !*(this + a2 + 255) )
  {
    if ( (unsigned __int8)sub_5A3630(a2) )
      sub_5A4390(a2, 3, 0, 0);
  }
  sub_5A3C20(a2, 0);
  sub_5A3B20(a2, 1);
  return 1;
}


//======================================================================
// sub_5A1FF0
// entry 005a1ff0  size 45  status ok
//======================================================================

int __thiscall sub_5A1FF0(_DWORD *this)
{
  if ( *(this + 59) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 59));
}


//======================================================================
// sub_5A2040
// entry 005a2040  size 62  status ok
//======================================================================

int __stdcall sub_5A2040(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_5A2080
// entry 005a2080  size 278  status ok
//======================================================================

int __stdcall sub_5A2080(int a1)
{
  int j; // [esp+4h] [ebp-30h]
  int i; // [esp+8h] [ebp-2Ch]
  _WORD v4[6]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v5[12]; // [esp+18h] [ebp-1Ch] BYREF
  _WORD v6[6]; // [esp+24h] [ebp-10h] BYREF

  if ( a1 == 5 )
    return -1;
  for ( i = 0; i < 5; ++i )
    v4[i] = 0;
  sub_462930((int)dword_7935D0 + 6 * a1 + 200, (a1 == 4) + 2, (int)dword_7935D0 + 230, 3, (int)v5);
  sub_462A40(5, (int)v5, 6, (int)v4);
  for ( j = 0; j < 5; ++j )
    v6[j] = 0;
  sub_462930((int)dword_7935D0 + 224, 3, (int)dword_7935D0 + 230, 3, (int)v5);
  sub_462A40(5, (int)v5, 6, (int)v6);
  return sub_462DA0((int)v4, v6, 5);
}


//======================================================================
// sub_5A21A0
// entry 005a21a0  size 64  status ok
//======================================================================

int __thiscall sub_5A21A0(_DWORD *this, int a2)
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
// sub_5A21E0
// entry 005a21e0  size 116  status ok
//======================================================================

int sub_5A21E0()
{
  int i; // [esp+Ch] [ebp-8h]
  int v2; // [esp+10h] [ebp-4h]

  v2 = 3;
  for ( i = 0; i < 6; ++i )
  {
    if ( *(_BYTE *)(sub_5DCB00(i) + 1184) )
    {
      if ( sub_5A2690(i) < v2 )
        v2 = sub_5A2690(i);
    }
  }
  return v2;
}


//======================================================================
// sub_5A2290
// entry 005a2290  size 212  status ok
//======================================================================

int sub_5A2290()
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
// sub_5A2370
// entry 005a2370  size 234  status ok
//======================================================================

int __thiscall sub_5A2370(void *this)
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
    if ( v7[i] != 4
      || (v1 = sub_5A2690(v7[i]), v1 >= Concurrency::details::UMSThreadInternalContext::GetContextKind(this)) )
    {
      if ( !*(_BYTE *)(sub_5DCB00(v7[i]) + 1184) )
        continue;
      v2 = sub_5A2690(v7[i]);
      if ( v2 >= Concurrency::details::UMSThreadInternalContext::GetContextKind(this) )
        continue;
      v3 = sub_5A2690(v7[i]);
      if ( v3 != sub_5A21E0() )
        continue;
    }
    return v7[i];
  }
  return -1;
}


//======================================================================
// sub_5A2460
// entry 005a2460  size 212  status ok
//======================================================================

int sub_5A2460()
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
// sub_5A2540
// entry 005a2540  size 242  status ok
//======================================================================

int sub_5A2540()
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
      && !(unsigned __int8)sub_5A27A0(v3[i])
      && ((unsigned __int8)sub_5A3690(v3[i]) || (unsigned __int8)sub_5A3630(v3[i])) )
    {
      return v3[i];
    }
  }
  return -1;
}


//======================================================================
// sub_5A2640
// entry 005a2640  size 67  status ok
//======================================================================

int sub_5A2640()
{
  int i; // [esp+4h] [ebp-8h]
  int v2; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 6; ++i )
    v2 += sub_5A2690(i);
  return v2;
}


//======================================================================
// sub_5A2690
// entry 005a2690  size 83  status ok
//======================================================================

int __stdcall sub_5A2690(int a1)
{
  int i; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( (unsigned __int16)sub_5A26F0(a1, i) )
      ++v3;
  }
  return v3;
}


//======================================================================
// sub_5A26F0
// entry 005a26f0  size 36  status ok
//======================================================================

__int16 __thiscall sub_5A26F0(_WORD *this, int a2, int a3)
{
  return *(this + 3 * a2 + a3 + 100);
}


//======================================================================
// sub_5A2740
// entry 005a2740  size 87  status ok
//======================================================================

char __stdcall sub_5A2740(int a1)
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
// sub_5A27A0
// entry 005a27a0  size 25  status ok
//======================================================================

char __thiscall sub_5A27A0(_BYTE *this, int a2)
{
  return *(this + a2 + 247);
}


//======================================================================
// sub_5A27C0
// entry 005a27c0  size 417  status ok
//======================================================================

int __thiscall sub_5A27C0(int this)
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
  for ( j = 0; j < 6; ++j )
  {
    v2 = sub_64C8A0(0, 0);
    sub_5DCB00(j);
    sub_5D6050(v2, HIDWORD(v2));
  }
  sub_5A3880(this);
  *(_BYTE *)(this + 259) = 0;
  return this;
}


//======================================================================
// sub_5A2970
// entry 005a2970  size 24  status ok
//======================================================================

char sub_5A2970()
{
  return *(_BYTE *)(sub_5A2040(-1) + 2);
}


//======================================================================
// sub_5A2990
// entry 005a2990  size 23  status ok
//======================================================================

char sub_5A2990()
{
  return *(_BYTE *)sub_5A2040(-1);
}


//======================================================================
// sub_5A29B0
// entry 005a29b0  size 61  status ok
//======================================================================

char sub_5A29B0()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 6; ++i )
  {
    if ( sub_5A2690(i) > 0 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_5A29F0
// entry 005a29f0  size 72  status ok
//======================================================================

char __thiscall sub_5A29F0(int *this, int a2)
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
// sub_5A2A40
// entry 005a2a40  size 204  status ok
//======================================================================

char __thiscall sub_5A2A40(_BYTE *this, int a2, char a3, char a4)
{
  bool v5; // [esp+0h] [ebp-18h]
  CImageDisplay *v7; // [esp+8h] [ebp-10h]
  char v8; // [esp+16h] [ebp-2h] BYREF
  char v9; // [esp+17h] [ebp-1h] BYREF

  sub_59B080(a2, &v8, &v9);
  if ( !(unsigned __int8)sub_5DF7B0(-1) || *(this + 240) )
    return 0;
  v7 = (CImageDisplay *)sub_5DCB00(a2);
  v5 = CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3;
  if ( !v5 || a3 == v8 && a4 == v9 )
    return 0;
  *(this + 240) = 1;
  sub_57C140(dword_793578);
  return 1;
}


//======================================================================
// sub_5A2B10
// entry 005a2b10  size 2848  status ok
//======================================================================

void __thiscall sub_5A2B10(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // edx
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edx
  int v17; // eax
  __int64 v18; // [esp-8h] [ebp-174h]
  __int64 v19; // [esp-8h] [ebp-174h]
  __int64 v20; // [esp-8h] [ebp-174h]
  __int64 v21; // [esp-8h] [ebp-174h]
  bool v22; // [esp+4h] [ebp-168h]
  bool v23; // [esp+Ch] [ebp-160h]
  bool v24; // [esp+14h] [ebp-158h]
  bool v25; // [esp+1Ch] [ebp-150h]
  bool v26; // [esp+20h] [ebp-14Ch]
  int v28; // [esp+28h] [ebp-144h]
  int v29; // [esp+2Ch] [ebp-140h]
  int v30; // [esp+30h] [ebp-13Ch]
  int v31; // [esp+34h] [ebp-138h]
  int v32; // [esp+38h] [ebp-134h]
  int v33; // [esp+3Ch] [ebp-130h]
  int v34; // [esp+44h] [ebp-128h]
  __int64 v35; // [esp+50h] [ebp-11Ch]
  _BYTE v36[8]; // [esp+58h] [ebp-114h] BYREF
  __int64 v37; // [esp+60h] [ebp-10Ch]
  __int64 v38; // [esp+68h] [ebp-104h]
  __int64 v39; // [esp+70h] [ebp-FCh]
  __int64 v40; // [esp+80h] [ebp-ECh]
  _BYTE v41[8]; // [esp+88h] [ebp-E4h] BYREF
  __int64 v42; // [esp+90h] [ebp-DCh]
  __int64 v43; // [esp+98h] [ebp-D4h]
  __int64 v44; // [esp+A0h] [ebp-CCh]
  __int64 v45; // [esp+B0h] [ebp-BCh]
  _BYTE v46[8]; // [esp+B8h] [ebp-B4h] BYREF
  __int64 v47; // [esp+C0h] [ebp-ACh]
  __int64 v48; // [esp+C8h] [ebp-A4h]
  __int64 v49; // [esp+D0h] [ebp-9Ch]
  __int64 v50; // [esp+E0h] [ebp-8Ch]
  __int64 v51; // [esp+E8h] [ebp-84h]
  __int64 v52; // [esp+F0h] [ebp-7Ch]
  __int64 v53; // [esp+F8h] [ebp-74h]
  bool v54; // [esp+103h] [ebp-69h]
  __int64 v55; // [esp+104h] [ebp-68h]
  __int64 v56; // [esp+10Ch] [ebp-60h]
  __int64 v57; // [esp+114h] [ebp-58h]
  bool v58; // [esp+11Fh] [ebp-4Dh]
  __int64 v59; // [esp+120h] [ebp-4Ch]
  __int64 v60; // [esp+128h] [ebp-44h]
  __int64 v61; // [esp+130h] [ebp-3Ch]
  bool v62; // [esp+13Bh] [ebp-31h]
  int i; // [esp+13Ch] [ebp-30h]
  int v64; // [esp+140h] [ebp-2Ch]
  int v65; // [esp+144h] [ebp-28h]
  _BYTE v66[12]; // [esp+148h] [ebp-24h] BYREF
  _WORD v67[6]; // [esp+154h] [ebp-18h] BYREF
  int v68; // [esp+164h] [ebp-8h]
  bool v69; // [esp+16Bh] [ebp-1h]

  if ( a2 != 5 )
  {
    v68 = 3 * a2;
    v65 = -1;
    v64 = -1;
    v69 = 0;
    v50 = sub_64C8A0(0, 0);
    sub_5DCB00(a2);
    sub_5D6050(v50, HIDWORD(v50));
    v34 = sub_5DCB00(a2);
    *(this + 68) = *(char *)(sub_5D52E0(v34) + 42);
    *(this + 69) = -1;
    for ( i = 0; i < 5; ++i )
      v67[i] = 0;
    sub_462930((int)this + 6 * a2 + 200, (a2 == 4) + 2, (int)this + 230, 3, (int)v66);
    sub_462A40(5, (int)v66, 6, (int)v67);
    if ( (unsigned __int8)sub_5A3660(a2) )
    {
      v64 = sub_462BA0((int)v67, 5, 0);
      v26 = v64 > 2 || v64 == 2 && sub_4639E0((int)v67, 5) >= 8;
      v62 = v26;
      if ( v26 )
        sub_5A4390(a2, 1, v64, 1);
      else
        sub_5A4390(a2, 0, v64, 0);
      v25 = *(this + 68) != *(this + 69) && !*(this + 69);
      v69 = v25;
      if ( v25 )
      {
        sub_5DCB00(a2);
        sub_5D70E0(1, 1000000);
        v2 = sub_5DCB00(a2);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, -1);
        v18 = sub_64C8A0(0, 0);
        sub_5DCB00(a2);
        sub_5D6050(v18, HIDWORD(v18));
        return;
      }
      if ( v62 )
      {
        v49 = sub_64C8A0(0, 0);
        v60 = v49;
        v48 = sub_64C8A0(0, 0);
        v59 = v48;
        v47 = sub_64C8A0(0, 0);
        v61 = v47;
        v33 = *(this + v68 + 2);
        v3 = *(_DWORD *)(v33 + 32 * a2 + 76);
        LODWORD(v60) = *(_DWORD *)(v33 + 32 * a2 + 72);
        HIDWORD(v60) = v3;
        v32 = *(this + v68 + 2);
        v4 = *(_DWORD *)(v32 + 32 * a2 + 84);
        LODWORD(v59) = *(_DWORD *)(v32 + 32 * a2 + 80);
        HIDWORD(v59) = v4;
        v5 = (_DWORD *)sub_64C5C0(v46, v59, v4);
        v6 = v5[1];
        LODWORD(v61) = *v5;
        HIDWORD(v61) = v6;
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)*(this + v68 + 2) + 184))(
          *(this + v68 + 2),
          v61,
          v6,
          a2,
          0);
        v45 = sub_64C8A0(0, 0);
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)*(this + v68 + 2) + 184))(
          *(this + v68 + 2),
          v45,
          HIDWORD(v45),
          a2,
          1);
      }
    }
    if ( *((_BYTE *)this + a2 + 251) )
    {
      v64 = sub_462BA0((int)v67, 5, 0);
      v58 = v64 >= 9;
      if ( v64 >= 9 )
        sub_5A4390(a2, 1, v64, 1);
      v24 = *(this + 68) != *(this + 69) && !*(this + 69);
      v69 = v24;
      if ( v24 )
      {
        sub_5DCB00(a2);
        sub_5D70E0(1, 1000000);
        v7 = sub_5DCB00(a2);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 4))(v7, -1);
        v19 = sub_64C8A0(0, 0);
        sub_5DCB00(a2);
        sub_5D6050(v19, HIDWORD(v19));
        return;
      }
      v65 = sub_5A2080(a2);
      sub_5A4390(a2, v65, 0, 0);
      if ( v58 )
      {
        v44 = sub_64C8A0(0, 0);
        v56 = v44;
        v43 = sub_64C8A0(0, 0);
        v55 = v43;
        v42 = sub_64C8A0(0, 0);
        v57 = v42;
        v31 = *(this + v68 + 3);
        v8 = *(_DWORD *)(v31 + 32 * a2 + 76);
        LODWORD(v56) = *(_DWORD *)(v31 + 32 * a2 + 72);
        HIDWORD(v56) = v8;
        v30 = *(this + v68 + 3);
        v9 = *(_DWORD *)(v30 + 32 * a2 + 84);
        LODWORD(v55) = *(_DWORD *)(v30 + 32 * a2 + 80);
        HIDWORD(v55) = v9;
        v10 = (_DWORD *)sub_64C5C0(v41, v55, v9);
        v11 = v10[1];
        LODWORD(v57) = *v10;
        HIDWORD(v57) = v11;
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)*(this + v68 + 3) + 184))(
          *(this + v68 + 3),
          v57,
          v11,
          a2,
          0);
        v40 = sub_64C8A0(0, 0);
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)*(this + v68 + 3) + 184))(
          *(this + v68 + 3),
          v40,
          HIDWORD(v40),
          a2,
          1);
      }
    }
    if ( *((_BYTE *)this + a2 + 255) )
    {
      v64 = sub_462BA0((int)v67, 5, 0);
      v54 = v64 >= 9;
      if ( v64 >= 9 )
        sub_5A4390(a2, 1, v64, 1);
      v23 = *(this + 68) != *(this + 69) && !*(this + 69);
      v69 = v23;
      if ( v23 )
      {
        sub_5DCB00(a2);
        sub_5D70E0(1, 1000000);
        v12 = sub_5DCB00(a2);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 4))(v12, -1);
        v20 = sub_64C8A0(0, 0);
        sub_5DCB00(a2);
        sub_5D6050(v20, HIDWORD(v20));
        return;
      }
      v65 = sub_5A2080(a2);
      sub_5A4390(a2, v65, 0, 0);
      if ( v54 )
      {
        v39 = sub_64C8A0(0, 0);
        v52 = v39;
        v38 = sub_64C8A0(0, 0);
        v51 = v38;
        v37 = sub_64C8A0(0, 0);
        v53 = v37;
        v29 = *(this + v68 + 4);
        v13 = *(_DWORD *)(v29 + 32 * a2 + 76);
        LODWORD(v52) = *(_DWORD *)(v29 + 32 * a2 + 72);
        HIDWORD(v52) = v13;
        v28 = *(this + v68 + 4);
        v14 = *(_DWORD *)(v28 + 32 * a2 + 84);
        LODWORD(v51) = *(_DWORD *)(v28 + 32 * a2 + 80);
        HIDWORD(v51) = v14;
        v15 = (_DWORD *)sub_64C5C0(v36, v51, v14);
        v16 = v15[1];
        LODWORD(v53) = *v15;
        HIDWORD(v53) = v16;
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)*(this + v68 + 4) + 184))(
          *(this + v68 + 4),
          v53,
          v16,
          a2,
          0);
        v35 = sub_64C8A0(0, 0);
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)*(this + v68 + 4) + 184))(
          *(this + v68 + 4),
          v35,
          HIDWORD(v35),
          a2,
          1);
      }
    }
    v22 = *(this + 68) != *(this + 69) && !*(this + 69);
    v69 = v22;
    if ( v22 )
    {
      sub_5DCB00(a2);
      sub_5D70E0(1, 1000000);
      v17 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 4))(v17, -1);
      v21 = sub_64C8A0(0, 0);
      sub_5DCB00(a2);
      sub_5D6050(v21, HIDWORD(v21));
    }
  }
}


//======================================================================
// sub_5A3630
// entry 005a3630  size 45  status ok
//======================================================================

int __stdcall sub_5A3630(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_5A3660
// entry 005a3660  size 45  status ok
//======================================================================

int __stdcall sub_5A3660(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_5A3690
// entry 005a3690  size 45  status ok
//======================================================================

int __stdcall sub_5A3690(int a1)
{
  return sub_5CB7D0(a1, 0);
}


//======================================================================
// sub_5A36C0
// entry 005a36c0  size 268  status ok
//======================================================================

char __thiscall sub_5A36C0(int *this, int a2)
{
  int v2; // eax
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 3 * a2;
  LOBYTE(v2) = sub_5A29F0(this, a2);
  if ( (_BYTE)v2 )
  {
    v2 = sub_5DCB00(a2);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7935CC + 656))(dword_7935CC, a2);
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
      sub_59C2D0((_DWORD **)dword_7935C4);
      sub_5DB890(dword_7935CC);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_7935CC + 4) + 8))(
                     *(_DWORD *)(dword_7935CC + 4),
                     1,
                     0);
    }
  }
  return v2;
}


//======================================================================
// sub_5A37D0
// entry 005a37d0  size 162  status ok
//======================================================================

char sub_5A37D0()
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
// sub_5A3880
// entry 005a3880  size 348  status ok
//======================================================================

int __thiscall sub_5A3880(_BYTE *this)
{
  int m; // [esp+10h] [ebp-10h]
  int k; // [esp+14h] [ebp-Ch]
  int j; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  sub_5A3E50(this);
  sub_5A3AD0(-1, 0);
  sub_5A3B40(-1, -1);
  *(this + 240) = 0;
  for ( i = 0; i < 12; ++i )
  {
    sub_5CB9B0(*((_DWORD *)this + i + 2));
    *((_DWORD *)this + i + 38) = -1;
  }
  for ( j = 0; j < 6; ++j )
  {
    sub_5A3C20(j, 0);
    for ( k = 0; k < 3; ++k )
      sub_5A3B70(j, k, 0);
  }
  for ( m = 0; m < 4; ++m )
  {
    *(_BYTE *)(sub_5DCB00(m) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1185) = 0;
    *(_BYTE *)(sub_5DCB00(m) + 1186) = 0;
    *(this + m + 260) = 0;
    *(this + m + 251) = 0;
    *(this + m + 255) = 0;
  }
  return sub_5A1E60(this);
}


//======================================================================
// sub_5A39E0
// entry 005a39e0  size 231  status ok
//======================================================================

void __thiscall sub_5A39E0(_DWORD *this)
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
// sub_5A3AD0
// entry 005a3ad0  size 77  status ok
//======================================================================

int __thiscall sub_5A3AD0(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 59) = a2;
  if ( *(this + 59) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_5A3B20
// entry 005a3b20  size 28  status ok
//======================================================================

char *__thiscall sub_5A3B20(_BYTE *this, int a2, char a3)
{
  *(this + a2 + 247) = a3;
  return this + a2;
}


//======================================================================
// sub_5A3B40
// entry 005a3b40  size 37  status ok
//======================================================================

int __thiscall sub_5A3B40(_DWORD *this, int a2, int a3)
{
  *(this + 66) = a2;
  *(this + 67) = a3;
  return a3;
}


//======================================================================
// sub_5A3B70
// entry 005a3b70  size 40  status ok
//======================================================================

int __thiscall sub_5A3B70(_WORD *this, int a2, int a3, __int16 a4)
{
  *(this + 3 * a2 + a3 + 100) = a4;
  return a3;
}


//======================================================================
// sub_5A3BA0
// entry 005a3ba0  size 47  status ok
//======================================================================

int __stdcall sub_5A3BA0(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_5A2040(-1) + 2) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_5A3BD0
// entry 005a3bd0  size 47  status ok
//======================================================================

int __stdcall sub_5A3BD0(char a1)
{
  int v1; // eax

  *(_BYTE *)(sub_5A2040(-1) + 1) = a1;
  v1 = sub_6375B0(dword_162EE84);
  return sub_63B0A0(v1);
}


//======================================================================
// sub_5A3C00
// entry 005a3c00  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_5A3C00(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_5A2040(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_5A3C20
// entry 005a3c20  size 28  status ok
//======================================================================

char *__thiscall sub_5A3C20(_BYTE *this, int a2, char a3)
{
  *(this + a2 + 241) = a3;
  return this + a2;
}


//======================================================================
// sub_5A3C40
// entry 005a3c40  size 461  status ok
//======================================================================

_DWORD *__thiscall sub_5A3C40(void *this, int a2)
{
  const char *v2; // eax
  char *v3; // eax
  int v5; // [esp-4h] [ebp-4ACh]
  char Buffer[11]; // [esp+8h] [ebp-4A0h] BYREF
  char v7; // [esp+13h] [ebp-495h] BYREF
  int v8; // [esp+14h] [ebp-494h]
  char Destination[135]; // [esp+18h] [ebp-490h] BYREF
  char v10; // [esp+9Fh] [ebp-409h] BYREF
  char Source[1028]; // [esp+A0h] [ebp-408h] BYREF

  v8 = sub_462BA0((int)this + 6 * a2 + 200, 2, 0);
  sub_462F40(v8, Destination);
  Buffer[0] = 0;
  if ( *((unsigned __int16 *)dword_7935D0 + 144) < 2u || *((unsigned __int16 *)dword_7935D0 + 144) > 0xAu )
  {
    switch ( *((_WORD *)dword_7935D0 + 144) )
    {
      case 0xB:
        sprintf(Buffer, "Jack");
        break;
      case 0xC:
        sprintf(Buffer, "Queen");
        break;
      case 0xD:
        sprintf(Buffer, "King");
        break;
      case 0xE:
        sprintf(Buffer, off_6CF6C0);
        break;
    }
  }
  else
  {
    sprintf(Buffer, "%d", *((unsigned __int16 *)dword_7935D0 + 144));
  }
  v5 = sub_59B080(a2, &v10, &v7);
  v2 = (const char *)sub_630F40("SID_BIGRAISE_CURRENTHAND_FORMAT");
  sprintf(Source, v2, Destination, Buffer, v5);
  v3 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80((_DWORD *)dword_793578, 1, v3, Source);
}


//======================================================================
// sub_5A3E10
// entry 005a3e10  size 24  status ok
//======================================================================

char sub_5A3E10()
{
  return *(_BYTE *)(sub_5A2040(-1) + 1);
}


//======================================================================
// sub_5A3E30
// entry 005a3e30  size 25  status ok
//======================================================================

char __thiscall sub_5A3E30(_BYTE *this, int a2)
{
  return *(this + a2 + 241);
}


//======================================================================
// sub_5A3E50
// entry 005a3e50  size 48  status ok
//======================================================================

int sub_5A3E50()
{
  sub_6437D0(1, 0);
  return sub_643930(6, 3, "BigRaise", 0);
}


//======================================================================
// sub_5A3E80
// entry 005a3e80  size 249  status ok
//======================================================================

bool __stdcall sub_5A3E80(int a1)
{
  int i; // [esp+8h] [ebp-24h]
  int v4; // [esp+Ch] [ebp-20h]
  _BYTE v5[12]; // [esp+10h] [ebp-1Ch] BYREF
  _WORD v6[6]; // [esp+1Ch] [ebp-10h] BYREF

  if ( a1 == 5 )
    return 0;
  for ( i = 0; i < 5; ++i )
    v6[i] = 0;
  sub_462930((int)dword_7935D0 + 6 * a1 + 200, (a1 == 4) + 2, (int)dword_7935D0 + 230, 3, (int)v5);
  sub_462A40(5, (int)v5, 6, (int)v6);
  v4 = sub_462BA0((int)v6, 5, 0);
  return (unsigned __int8)sub_5A3660(a1) && (v4 > 2 || v4 == 2 && sub_4639E0((int)v6, 5) >= 8);
}


//======================================================================
// sub_5A4030
// entry 005a4030  size 804  status ok
//======================================================================

int __thiscall sub_5A4030(void *this, int *a2, int a3, char a4)
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
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // [esp-8h] [ebp-38h]
  int v17; // [esp-8h] [ebp-38h]
  struct Concurrency::IExecutionContext *v18; // [esp-4h] [ebp-34h]
  int v19; // [esp-4h] [ebp-34h]
  int v20; // [esp-4h] [ebp-34h]
  char v22[8]; // [esp+8h] [ebp-28h] BYREF
  _DWORD v23[2]; // [esp+10h] [ebp-20h] BYREF
  int v24; // [esp+18h] [ebp-18h] BYREF
  int v25; // [esp+20h] [ebp-10h]
  int v26; // [esp+24h] [ebp-Ch] BYREF
  struct Concurrency::IExecutionContext *DefaultDestination; // [esp+2Ch] [ebp-4h]

  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0);
  result = sub_5DCB00(DefaultDestination);
  if ( !result )
    return result;
  v25 = 3 * (_DWORD)DefaultDestination;
  sub_5CB880(v23, DefaultDestination);
  sub_5CB880(&v26, DefaultDestination);
  sub_5CB880(v22, DefaultDestination);
  v18 = DefaultDestination;
  sub_5A21A0(dword_7935D0, (int)this);
  sub_5CB880(&v24, v18);
  if ( !*a2 )
  {
    sub_5DCB00(DefaultDestination);
    sub_5D5DE0(a2);
  }
  if ( !*a2 )
  {
    *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC);
    v19 = a2[1];
    v16 = *a2;
    sub_5DCB00(DefaultDestination);
    sub_5D5E10(v16, v19);
  }
  if ( *a2 <= 0 )
  {
    if ( *a2 < 0 )
    {
      v13 = *a2 + v24;
      if ( v13 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC) )
        *a2 = -v24;
      v14 = sub_5A21A0(dword_7935D0, (int)this);
      if ( v14 == v25 + 2 && *a2 + v23[0] < v26 )
        *a2 = -v23[0];
    }
    goto LABEL_28;
  }
  v5 = *a2 + v24;
  if ( v5 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC);
    *a2 = v6 - v24;
  }
  v7 = sub_5A21A0(dword_7935D0, (int)this);
  if ( v7 == v25 + 2 && *a2 + v23[0] < v26 )
    *a2 = v26 - v23[0];
  v8 = sub_5A21A0(dword_7935D0, (int)this);
  if ( v8 == v25 + 2 && *a2 + v23[0] > 3 * v26 )
    *a2 = 3 * v26 - v23[0];
  v9 = sub_5DCB00(DefaultDestination);
  if ( *a2 > sub_5D5A50(v9) )
  {
    v10 = sub_5DCB00(DefaultDestination);
    *a2 = sub_5D5A50(v10);
  }
  v11 = *a2 + v24;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935CC + 688))(dword_7935CC);
  if ( v11 >= result )
  {
    v12 = sub_5A21A0(dword_7935D0, (int)this);
    if ( v12 != v25 + 2 || (result = (int)a2, *a2 + v23[0] >= v26) )
    {
LABEL_28:
      result = (int)a2;
      if ( *a2 )
      {
        v15 = sub_5A21A0(dword_7935D0, (int)this);
        if ( v15 == v25 + 1 )
        {
          v20 = v23[1];
          v17 = v23[0];
          sub_5DCB00(DefaultDestination);
          sub_5D5CF0(v17, v20);
          (*(void (__thiscall **)(_DWORD, struct Concurrency::IExecutionContext *, _DWORD))(**((_DWORD **)dword_7935D0
                                                                                             + v25
                                                                                             + 4)
                                                                                          + 188))(
            *((_DWORD *)dword_7935D0 + v25 + 4),
            DefaultDestination,
            0);
        }
        return sub_5CBA10(a2, a3, a4);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5A4360
// entry 005a4360  size 46  status ok
//======================================================================

void __thiscall sub_5A4360(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_7935C4 )
  {
    v3 = pairNode::raw_length(this);
    sub_59C8E0((_DWORD **)dword_7935C4, a2, v3);
  }
}


//======================================================================
// sub_5A4390
// entry 005a4390  size 1139  status ok
//======================================================================

int __thiscall sub_5A4390(pairNode *this, int a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // eax
  __int64 v14; // [esp+0h] [ebp-64h]
  __int64 v15; // [esp+0h] [ebp-64h]
  __int64 v16; // [esp+0h] [ebp-64h]
  _DWORD *v17; // [esp+8h] [ebp-5Ch]
  int v18; // [esp+Ch] [ebp-58h]
  char v20; // [esp+1Bh] [ebp-49h]
  int v21; // [esp+1Ch] [ebp-48h]
  __int64 v22; // [esp+28h] [ebp-3Ch]
  char v23[8]; // [esp+30h] [ebp-34h] BYREF
  char v24[8]; // [esp+38h] [ebp-2Ch] BYREF
  __int64 v25; // [esp+40h] [ebp-24h]
  __int64 v26; // [esp+48h] [ebp-1Ch]
  int v27; // [esp+50h] [ebp-14h]
  __int64 v28; // [esp+54h] [ebp-10h] BYREF
  __int64 v29; // [esp+5Ch] [ebp-8h]

  v5 = *((_DWORD *)this + 8 * a2 + 19);
  LODWORD(v29) = *((_DWORD *)this + 8 * a2 + 18);
  HIDWORD(v29) = v5;
  v25 = sub_64C8A0(0, 0);
  v26 = v25;
  v27 = 0;
  *((_DWORD *)dword_7935D0 + pairNode::raw_length(this) + 38) = a3;
  if ( a3 == 3 )
  {
    sub_5DCB00(a2);
    sub_5D5CF0(v29, HIDWORD(v29));
    v6 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)dword_7935D0 + v6 + 2) + 188))(
             *((_DWORD *)dword_7935D0 + v6 + 2),
             a2,
             0);
  }
  else
  {
    v21 = sub_5DCB00(a2);
    v20 = *(_BYTE *)(sub_5D52E0(v21) + 42);
    *((_DWORD *)dword_7935D0 + 69) = v20;
    result = (int)dword_7935D0;
    if ( *((_DWORD *)dword_7935D0 + 68) == *((_DWORD *)dword_7935D0 + 69) || *((_DWORD *)dword_7935D0 + 69) )
    {
      v8 = sub_5DCB00(a2);
      result = sub_5D5A50(v8);
      if ( result < 1000000000 )
      {
        if ( a5 )
        {
          switch ( a4 )
          {
            case 10:
              v27 = 50;
              break;
            case 9:
              v27 = 40;
              break;
            case 8:
              v27 = 30;
              break;
            case 7:
              v27 = 20;
              break;
            case 6:
              v27 = 15;
              break;
            case 5:
              v27 = 10;
              break;
            case 4:
              v27 = 7;
              break;
            case 3:
              v27 = 3;
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
          return (*(int (__thiscall **)(pairNode *, _DWORD, int, int, int))(*(_DWORD *)this + 184))(
                   this,
                   v26,
                   v12,
                   a2,
                   1);
        }
        else if ( a3 )
        {
          if ( a3 == 1 )
          {
            if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
            {
              if ( *(int *)(sub_5DCB00(a2) + 1192) < -4 )
                *((_BYTE *)dword_7935D0 + a2 + 260) = 1;
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
          v18 = *(_DWORD *)(dword_7935C4 + 4 * pairNode::raw_length(this) + 28);
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
  }
  return result;
}


//======================================================================
// sub_5A4810
// entry 005a4810  size 166  status ok
//======================================================================

bool __thiscall sub_5A4810(pairNode *this)
{
  int v2; // esi
  char v3; // [esp+4h] [ebp-18h]
  CImageDisplay *v6; // [esp+10h] [ebp-Ch]

  if ( Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0) == (struct Concurrency::IExecutionContext *)-1 )
    return 0;
  v2 = pairNode::raw_length(this) / 3;
  v3 = 0;
  if ( (struct Concurrency::IExecutionContext *)v2 == Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(dword_7935D0) )
  {
    v6 = (CImageDisplay *)sub_5A1FF0(dword_7935D0);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      return 1;
    }
  }
  return v3;
}


//======================================================================
// sub_5A4960
// entry 005a4960  size 447  status ok
//======================================================================

int __thiscall sub_5A4960(void *this, int a2)
{
  int v4; // [esp+4h] [ebp-14h]
  char v5; // [esp+Bh] [ebp-Dh]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v4 = sub_5DCB00(a2);
  v6 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793600 + 688))(dword_793600, this);
  v5 = sub_5DA7B0(dword_793600);
  v8 = sub_5D5A50(v4);
  v7 = *(_DWORD *)(dword_793604 + 1480);
  if ( v6 > v8 && v5 )
    return v8;
  if ( v7 < 1 )
    return v6;
  if ( v7 == 1 )
  {
    if ( 2 * v6 <= v8 )
      return 2 * v6;
    else
      return v8;
  }
  else if ( v7 >= 4 )
  {
    switch ( v7 )
    {
      case 4:
        if ( 4 * v6 <= v8 )
          return 4 * v6;
        else
          return v8;
      case 5:
        if ( 6 * v6 <= v8 )
          return 6 * v6;
        else
          return v8;
      case 6:
        if ( 6 * v6 <= v8 )
          return 6 * v6;
        else
          return v8;
      case 7:
        if ( 8 * v6 <= v8 )
          return 8 * v6;
        else
          return v8;
      case 8:
        if ( 10 * v6 <= v8 )
          return 10 * v6;
        else
          return v8;
      default:
        if ( 12 * v6 <= v8 )
          return 12 * v6;
        else
          return v8;
    }
  }
  else if ( 3 * v6 <= v8 )
  {
    return 3 * v6;
  }
  else
  {
    return v8;
  }
}


//======================================================================
// sub_5A4B20
// entry 005a4b20  size 3325  status ok
//======================================================================

int __thiscall sub_5A4B20(void *this, int a2)
{
  int result; // eax
  int v4; // [esp+10h] [ebp-4DCh]
  _DWORD v5[310]; // [esp+14h] [ebp-4D8h] BYREF

  if ( (unsigned __int8)sub_5B6040(a2) )
    return 0;
  v5[0] = 2;
  v5[1] = 2;
  v5[2] = 2;
  v5[3] = 2;
  v5[4] = 2;
  v5[5] = 2;
  v5[6] = 2;
  v5[7] = 2;
  v5[8] = 2;
  v5[9] = 2;
  v5[10] = 1;
  v5[11] = 1;
  v5[12] = 1;
  v5[13] = 1;
  v5[14] = 1;
  v5[15] = 1;
  v5[16] = 1;
  v5[17] = 1;
  v5[18] = 1;
  v5[19] = 1;
  v5[20] = 1;
  v5[21] = 1;
  v5[22] = 1;
  v5[23] = 1;
  v5[24] = 1;
  v5[25] = 1;
  v5[26] = 1;
  v5[27] = 1;
  v5[28] = 1;
  v5[29] = 1;
  v5[30] = 1;
  v5[31] = 1;
  v5[32] = 1;
  v5[33] = 1;
  v5[34] = 1;
  v5[35] = 1;
  v5[36] = 1;
  v5[37] = 1;
  v5[38] = 1;
  v5[39] = 1;
  v5[40] = 1;
  v5[41] = 1;
  v5[42] = 1;
  v5[43] = 1;
  v5[44] = 1;
  v5[45] = 1;
  v5[46] = 1;
  v5[47] = 1;
  v5[48] = 1;
  v5[49] = 1;
  v5[50] = 1;
  v5[51] = 3;
  v5[52] = 3;
  v5[53] = 3;
  v5[54] = 3;
  v5[55] = 1;
  v5[56] = 1;
  v5[57] = 1;
  v5[58] = 1;
  v5[59] = 1;
  v5[60] = 3;
  v5[61] = 3;
  v5[62] = 3;
  v5[63] = 3;
  v5[64] = 3;
  v5[65] = 3;
  v5[66] = 3;
  v5[67] = 3;
  v5[68] = 1;
  v5[69] = 1;
  v5[70] = 3;
  v5[71] = 3;
  v5[72] = 3;
  v5[73] = 3;
  v5[74] = 3;
  v5[75] = 3;
  v5[76] = 3;
  v5[77] = 3;
  v5[78] = 3;
  v5[79] = 1;
  v5[80] = 1;
  v5[81] = 1;
  v5[82] = 2;
  v5[83] = 2;
  v5[84] = 2;
  v5[85] = 1;
  v5[86] = 1;
  v5[87] = 1;
  v5[88] = 1;
  v5[89] = 1;
  v5[90] = 2;
  v5[91] = 2;
  v5[92] = 2;
  v5[93] = 2;
  v5[94] = 2;
  v5[95] = 1;
  v5[96] = 1;
  v5[97] = 1;
  v5[98] = 1;
  v5[99] = 1;
  v5[100] = 2;
  v5[101] = 2;
  v5[102] = 2;
  v5[103] = 2;
  v5[104] = 2;
  v5[105] = 1;
  v5[106] = 1;
  v5[107] = 1;
  v5[108] = 1;
  v5[109] = 1;
  v5[110] = 2;
  v5[111] = 2;
  v5[112] = 2;
  v5[113] = 2;
  v5[114] = 2;
  v5[115] = 1;
  v5[116] = 1;
  v5[117] = 1;
  v5[118] = 5;
  v5[119] = 1;
  v5[120] = 2;
  v5[121] = 2;
  v5[122] = 2;
  v5[123] = 2;
  v5[124] = 2;
  v5[125] = 1;
  v5[126] = 1;
  v5[127] = 5;
  v5[128] = 5;
  v5[129] = 5;
  v5[130] = 1;
  v5[131] = 1;
  v5[132] = 1;
  v5[133] = 3;
  v5[134] = 3;
  v5[135] = 1;
  v5[136] = 1;
  v5[137] = 1;
  v5[138] = 1;
  v5[139] = 1;
  v5[140] = 1;
  v5[141] = 1;
  v5[142] = 1;
  v5[143] = 3;
  v5[144] = 3;
  v5[145] = 1;
  v5[146] = 1;
  v5[147] = 1;
  v5[148] = 1;
  v5[149] = 1;
  v5[150] = 1;
  v5[151] = 1;
  v5[152] = 3;
  v5[153] = 3;
  v5[154] = 3;
  v5[155] = 1;
  v5[156] = 1;
  v5[157] = 1;
  v5[158] = 1;
  v5[159] = 1;
  v5[160] = 1;
  v5[161] = 1;
  v5[162] = 3;
  v5[163] = 3;
  v5[164] = 3;
  v5[165] = 1;
  v5[166] = 1;
  v5[167] = 1;
  v5[168] = 1;
  v5[169] = 1;
  v5[170] = 1;
  v5[171] = 3;
  v5[172] = 3;
  v5[173] = 3;
  v5[174] = 3;
  v5[175] = 1;
  v5[176] = 1;
  v5[177] = 1;
  v5[178] = 1;
  v5[179] = 1;
  v5[180] = 2;
  v5[181] = 3;
  v5[182] = 3;
  v5[183] = 3;
  v5[184] = 3;
  v5[185] = 2;
  v5[186] = 2;
  v5[187] = 1;
  v5[188] = 1;
  v5[189] = 1;
  v5[190] = 2;
  v5[191] = 2;
  v5[192] = 2;
  v5[193] = 2;
  v5[194] = 2;
  v5[195] = 2;
  v5[196] = 2;
  v5[197] = 2;
  v5[198] = 2;
  v5[199] = 2;
  v5[200] = 2;
  v5[201] = 2;
  v5[202] = 2;
  v5[203] = 2;
  v5[204] = 2;
  v5[205] = 2;
  v5[206] = 2;
  v5[207] = 2;
  v5[208] = 2;
  v5[209] = 2;
  v5[210] = 4;
  v5[211] = 4;
  v5[212] = 4;
  v5[213] = 4;
  v5[214] = 4;
  v5[215] = 4;
  v5[216] = 1;
  v5[217] = 1;
  v5[218] = 1;
  v5[219] = 1;
  v5[220] = 4;
  v5[221] = 4;
  v5[222] = 4;
  v5[223] = 4;
  v5[224] = 4;
  v5[225] = 4;
  v5[226] = 1;
  v5[227] = 1;
  v5[228] = 1;
  v5[229] = 1;
  v5[230] = 1;
  v5[231] = 1;
  v5[232] = 1;
  v5[233] = 4;
  v5[234] = 4;
  v5[235] = 1;
  v5[236] = 1;
  v5[237] = 1;
  v5[238] = 1;
  v5[239] = 1;
  v5[240] = 3;
  v5[241] = 3;
  v5[242] = 3;
  v5[243] = 3;
  v5[244] = 3;
  v5[245] = 3;
  v5[246] = 3;
  v5[247] = 3;
  v5[248] = 1;
  v5[249] = 1;
  v5[250] = 4;
  v5[251] = 4;
  v5[252] = 4;
  v5[253] = 4;
  v5[254] = 4;
  v5[255] = 1;
  v5[256] = 1;
  v5[257] = 1;
  v5[258] = 1;
  v5[259] = 1;
  v5[260] = 4;
  v5[261] = 4;
  v5[262] = 4;
  v5[263] = 4;
  v5[264] = 4;
  v5[265] = 4;
  v5[266] = 1;
  v5[267] = 1;
  v5[268] = 1;
  v5[269] = 1;
  v5[270] = 4;
  v5[271] = 4;
  v5[272] = 4;
  v5[273] = 4;
  v5[274] = 4;
  v5[275] = 4;
  v5[276] = 4;
  v5[277] = 4;
  v5[278] = 4;
  v5[279] = 4;
  v5[280] = 4;
  v5[281] = 4;
  v5[282] = 4;
  v5[283] = 4;
  v5[284] = 4;
  v5[285] = 2;
  v5[286] = 4;
  v5[287] = 4;
  v5[288] = 2;
  v5[289] = 2;
  v5[290] = 2;
  v5[291] = 2;
  v5[292] = 2;
  v5[293] = 2;
  v5[294] = 2;
  v5[295] = 2;
  v5[296] = 2;
  v5[297] = 2;
  v5[298] = 2;
  v5[299] = 2;
  v5[300] = 4;
  v5[301] = 4;
  v5[302] = 4;
  v5[303] = 4;
  v5[304] = 4;
  v5[305] = 4;
  v5[306] = 4;
  v5[307] = 4;
  v5[308] = 4;
  v5[309] = 4;
  v4 = sub_5A67D0(a2);
  switch ( v5[10 * v4 + sub_5A6760(this)] )
  {
    case 1:
      result = 1;
      break;
    case 2:
      result = 0;
      break;
    case 3:
      if ( (unsigned __int8)sub_5B3430(a2) )
        result = 2;
      else
        result = v4 != 18;
      break;
    case 4:
      result = 3;
      break;
    case 5:
      result = (unsigned __int8)sub_5B37F0(a2) != 0 ? 4 : 1;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchai.cpp", 198);
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchai.cpp", 202);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5A5840
// entry 005a5840  size 3837  status ok
//======================================================================

int __thiscall sub_5A5840(void *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // edi
  int v18; // esi
  int v19; // edi
  int v20; // esi
  int v21; // esi
  int v22; // edi
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  int v42; // esi
  int *v43; // eax
  int v44; // edx
  int v45; // esi
  int v46; // esi
  int v47; // [esp+Ch] [ebp-84h]
  double v48; // [esp+10h] [ebp-80h]
  double v49; // [esp+1Ch] [ebp-74h]
  _BYTE v51[8]; // [esp+2Ch] [ebp-64h] BYREF
  _BYTE v52[8]; // [esp+34h] [ebp-5Ch] BYREF
  _BYTE v53[8]; // [esp+3Ch] [ebp-54h] BYREF
  int v54; // [esp+44h] [ebp-4Ch]
  int v55; // [esp+48h] [ebp-48h]
  int v56; // [esp+4Ch] [ebp-44h]
  int v57; // [esp+50h] [ebp-40h]
  int v58; // [esp+54h] [ebp-3Ch]
  _BYTE v59[5]; // [esp+5Bh] [ebp-35h]
  bool v60; // [esp+63h] [ebp-2Dh]
  int v61; // [esp+64h] [ebp-2Ch]
  int v62; // [esp+68h] [ebp-28h]
  int v63; // [esp+6Ch] [ebp-24h]
  int v64; // [esp+70h] [ebp-20h]
  char v65; // [esp+77h] [ebp-19h]
  int v66; // [esp+78h] [ebp-18h]
  int v67; // [esp+7Ch] [ebp-14h]
  int v68; // [esp+80h] [ebp-10h]
  int v69; // [esp+84h] [ebp-Ch]
  int v70; // [esp+88h] [ebp-8h]
  int v71; // [esp+8Ch] [ebp-4h]

  v66 = 0;
  v69 = 0;
  v70 = 0;
  v64 = 0;
  v59[4] = 0;
  v65 = 0;
  v60 = 0;
  *(_DWORD *)v59 = (unsigned __int8)sub_5DA7B0(dword_793600);
  v63 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 688))(dword_793600);
  v68 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 692))(dword_793600);
  v56 = sub_5DCB00(a2);
  v2 = sub_5DCB00(a2);
  v71 = sub_5D5A50(v2);
  v67 = *(_DWORD *)(dword_793604 + 1480);
  v57 = 0;
  if ( v59[0] )
  {
    v66 = *(_DWORD *)sub_5DAA20(v53);
    v69 = *(_DWORD *)sub_5DAAE0(v52);
    v70 = sub_5DA8A0(dword_793600);
    v64 = sub_5DA8C0(dword_793600);
    if ( v71 < v63 )
      return 0;
    if ( v71 == v69 )
      return v63;
    *(_DWORD *)&v59[1] = v71 / 2;
    if ( v70 > v64 )
    {
      v49 = (double)(v66 - v71);
      v48 = (double)(int)sub_62FBF0(v70 - v64) / 8.0 + 1.25;
      v47 = sub_62FBF0(v70 - v64);
      if ( (double)v47 / 8.0 * (double)v71 + v48 < v49 && sub_62FBF0(20) < v67 + 10 )
        *(_DWORD *)&v59[1] = v71;
    }
    if ( *(int *)&v59[1] > v68 )
      *(_DWORD *)&v59[1] = v68;
    if ( v71 == v66 && v69 > v68 + v63 && *(_DWORD *)(sub_5DCB00(a2) + 1188) != 4 )
      return v63;
    if ( v64 < v70 )
    {
      v65 = 0;
      if ( v67 < 10 )
        v58 = 5 * v67;
      else
        v58 = 50;
      if ( v64 > v70 - 6 )
        v58 += 15 * (6 - (v70 - v64));
      if ( v66 - v71 > v68 || v66 - v71 > v71 )
        v58 += 30;
      if ( v70 - v64 > 25 )
        v58 -= 10;
      if ( v58 < 0 )
        v58 = 1;
      if ( v58 > 75 )
        v58 = 75;
      v60 = sub_62FBF0(100) < v58;
    }
    else
    {
      v65 = 1;
      *(_DWORD *)&v59[1] = v68;
      if ( v68 > v71 )
        *(_DWORD *)&v59[1] = v71;
    }
    if ( v65 || v60 )
    {
      if ( v71 == v66 )
      {
        if ( v65 )
        {
          v55 = sub_62FBF0(10);
          if ( v55 >= 2 )
          {
            if ( v55 < 5 )
            {
              if ( v69 >= v63 * sub_62FBF0(40) )
              {
                v8 = sub_62FBF0(60);
                v9 = sub_62FBF0(25);
                v54 = v63 * (v8 - v9) - v63 * (v8 - v9) % 5;
                if ( v54 >= v63 )
                {
                  if ( v54 <= *(int *)&v59[1] )
                    return v54;
                  else
                    return *(_DWORD *)&v59[1];
                }
              }
              else
              {
                v6 = sub_62FBF0(30);
                v7 = sub_62FBF0(20);
                v54 = v69 + v63 * (v6 - v7) - (v69 + v63 * (v6 - v7)) % 5;
                if ( v54 >= v63 )
                {
                  if ( v54 <= *(int *)&v59[1] )
                    return v54;
                  else
                    return *(_DWORD *)&v59[1];
                }
              }
            }
          }
          else
          {
            v4 = v68 - v69;
            v5 = sub_62FBF0(5);
            v54 = v4 + v63 * v5 + 1 - (v4 + v63 * v5 + 1) % 5;
            if ( v54 >= v63 )
            {
              if ( v54 <= *(int *)&v59[1] )
                return v54;
              else
                return *(_DWORD *)&v59[1];
            }
          }
        }
        else
        {
          v55 = sub_62FBF0(15);
          if ( v55 < 2 )
          {
            if ( v69 >= v63 * sub_62FBF0(40) )
            {
              v13 = sub_62FBF0(80);
              v14 = sub_62FBF0(50);
              v54 = v63 * (v13 - v14) - v63 * (v13 - v14) % 5;
              if ( v54 >= v63 )
              {
                if ( v54 <= *(int *)&v59[1] )
                  return v54;
                else
                  return *(_DWORD *)&v59[1];
              }
            }
            else
            {
              v10 = v69 / 2;
              v11 = sub_62FBF0(40);
              v12 = sub_62FBF0(40);
              v54 = v63 * (v11 - v12) + v10 - (v63 * (v11 - v12) + v10) % 5;
              if ( v54 >= v63 )
              {
                if ( v54 <= *(int *)&v59[1] )
                  return v54;
                else
                  return *(_DWORD *)&v59[1];
              }
            }
          }
        }
      }
      else if ( v65 )
      {
        v55 = sub_62FBF0(10);
        if ( v55 >= 5 )
        {
          if ( v55 >= 7 )
          {
            v54 = 0;
          }
          else
          {
            v16 = v66 - v71;
            v17 = sub_62FBF0(10);
            v54 = v63 * (v17 - sub_62FBF0(5) + 1) + v16;
          }
        }
        else
        {
          v15 = v66 - v71;
          v54 = v63 * (sub_62FBF0(40) + 1) + v15;
        }
        v54 -= v54 % 5;
        if ( v54 >= v63 )
        {
          if ( v54 <= *(int *)&v59[1] )
            return v54;
          else
            return *(_DWORD *)&v59[1];
        }
      }
      else
      {
        v55 = sub_62FBF0(10);
        switch ( v70 - v64 )
        {
          case 1:
            v55 -= 3;
            break;
          case 2:
            v55 -= 2;
            break;
          case 3:
            --v55;
            break;
        }
        if ( v55 >= 2 )
        {
          if ( v55 >= 6 )
          {
            v54 = 0;
          }
          else
          {
            v20 = v66 - v71;
            v21 = v20 / (sub_62FBF0(2) + 2);
            v22 = sub_62FBF0(60);
            v54 = v63 * (v22 - sub_62FBF0(30)) + v21;
          }
        }
        else
        {
          v18 = v66 - v71;
          v19 = sub_62FBF0(80);
          v54 = v63 * (v19 - sub_62FBF0(20)) + v18;
        }
        v54 -= v54 % 5;
        if ( v54 >= v63 )
        {
          if ( v54 <= *(int *)&v59[1] )
            return v54;
          else
            return *(_DWORD *)&v59[1];
        }
      }
    }
  }
  v23 = sub_5A4960(this, a2);
  if ( v23 < v63 )
    return 0;
  if ( !v59[0] )
  {
    *(_DWORD *)&v59[1] = v71 / 2;
    if ( v71 / 2 > v68 )
      *(_DWORD *)&v59[1] = v68;
  }
  switch ( *(_DWORD *)(sub_5DCB00(a2) + 1188) )
  {
    case 0:
      v54 = sub_5A4960(this, a2);
      if ( v54 >= v63 )
      {
        if ( v54 <= *(int *)&v59[1] )
          result = v54;
        else
          result = *(_DWORD *)&v59[1];
      }
      else
      {
        result = v63;
      }
      break;
    case 1:
      v54 = 2 * sub_5A4960(this, a2);
      if ( v54 != 2 * v63 || sub_62FBF0(2) )
      {
        v24 = v54 / 10;
        v25 = v54 + (sub_62FBF0(10) - 4) * v24;
        v54 = v25 - v25 % 5;
      }
      else
      {
        v54 = v63;
      }
      if ( v54 >= v63 )
      {
        if ( v54 <= *(int *)&v59[1] )
          result = v54;
        else
          result = *(_DWORD *)&v59[1];
      }
      else
      {
        result = v63;
      }
      break;
    case 2:
      v54 = 5 * sub_5A4960(this, a2);
      if ( v54 != 5 * v63 || sub_62FBF0(2) )
      {
        v26 = v54 / 10;
        v27 = v54 + (sub_62FBF0(10) - 4) * v26;
        v54 = v27 - v27 % 5;
      }
      else
      {
        v54 = v63;
      }
      if ( v54 >= v63 )
      {
        if ( v54 <= *(int *)&v59[1] )
          result = v54;
        else
          result = *(_DWORD *)&v59[1];
      }
      else
      {
        result = v63;
      }
      break;
    case 3:
      v54 = 10 * sub_5A4960(this, a2);
      if ( v54 != 10 * v63 || sub_62FBF0(2) )
      {
        v28 = v54 / 10;
        v29 = v54 + (sub_62FBF0(10) - 4) * v28;
        v54 = v29 - v29 % 5;
      }
      else
      {
        v54 = v63;
      }
      if ( v54 >= v63 )
      {
        if ( v54 <= *(int *)&v59[1] )
          result = v54;
        else
          result = *(_DWORD *)&v59[1];
      }
      else
      {
        result = v63;
      }
      break;
    case 4:
      if ( v67 >= 3 )
      {
        v54 = *(_DWORD *)&v59[1] / (sub_62FBF0(10) + 1);
        v32 = sub_5A4960(this, a2);
        if ( v54 >= 5 * v32 )
        {
          result = v54;
        }
        else
        {
          v54 = 5 * sub_5A4960(this, a2);
          v33 = v54 / 10;
          v34 = v54 + (sub_62FBF0(10) - 4) * v33;
          v54 = v34 - v34 % 5;
          if ( v54 >= v63 )
          {
            if ( v54 <= *(int *)&v59[1] )
              result = v54;
            else
              result = *(_DWORD *)&v59[1];
          }
          else
          {
            result = v63;
          }
        }
      }
      else
      {
        v54 = 5 * sub_5A4960(this, a2);
        if ( v54 != 5 * v63 || sub_62FBF0(2) )
        {
          v30 = v54 / 10;
          v31 = v54 + (sub_62FBF0(10) - 4) * v30;
          v54 = v31 - v31 % 5;
        }
        else
        {
          v54 = v63;
        }
        if ( v54 >= v63 )
        {
          if ( v54 <= *(int *)&v59[1] )
            result = v54;
          else
            result = *(_DWORD *)&v59[1];
        }
        else
        {
          result = v63;
        }
      }
      break;
    case 5:
      if ( v67 <= 2 && *(int *)(v56 + 1196) <= 1 )
        goto LABEL_217;
      if ( *(_BYTE *)(v56 + 1200) || *(int *)(v56 + 1196) >= 4 && v67 < 3 )
      {
        *(_DWORD *)(v56 + 1196) = 1;
        result = sub_5A4960(this, a2);
      }
      else
      {
        ++*(_DWORD *)(v56 + 1196);
        if ( !v57 )
          goto LABEL_217;
        if ( v57 >= v63 )
        {
          if ( v57 <= *(int *)&v59[1] )
          {
            if ( v57 <= v68 / 2 || v65 )
              result = v57;
            else
              result = v68 / 2;
          }
          else
          {
            result = *(_DWORD *)&v59[1];
          }
        }
        else
        {
          result = v63;
        }
      }
      break;
    case 6:
      if ( v67 >= 3 )
      {
        if ( *(_BYTE *)(v56 + 1200) )
        {
          v54 = 5 * sub_5A4960(this, a2);
          v39 = v54 / 10;
          v40 = v54 + (sub_62FBF0(10) - 4) * v39;
          v54 = v40 - v40 % 5;
          if ( v54 >= v63 )
          {
            if ( v54 <= *(int *)&v59[1] )
              result = v54;
            else
              result = *(_DWORD *)&v59[1];
          }
          else
          {
            result = v63;
          }
        }
        else if ( v57 )
        {
          if ( v57 >= v63 )
          {
            if ( v57 <= *(int *)&v59[1] )
            {
              if ( v57 <= v68 / 2 || v65 )
                result = v57;
              else
                result = v68 / 2;
            }
            else
            {
              result = *(_DWORD *)&v59[1];
            }
          }
          else
          {
            result = v63;
          }
        }
        else
        {
          v54 = 5 * sub_5A4960(this, a2);
          v37 = v54 / 10;
          v38 = v54 + (sub_62FBF0(10) - 4) * v37;
          v54 = v38 - v38 % 5;
          if ( v54 >= v63 )
          {
            if ( v54 <= *(int *)&v59[1] )
              result = v54;
            else
              result = *(_DWORD *)&v59[1];
          }
          else
          {
            result = v63;
          }
        }
      }
      else
      {
        v54 = 5 * sub_5A4960(this, a2);
        if ( v54 != 5 * v63 || sub_62FBF0(2) )
        {
          v35 = v54 / 10;
          v36 = v54 + (sub_62FBF0(10) - 4) * v35;
          v54 = v36 - v36 % 5;
        }
        else
        {
          v54 = v63;
        }
        if ( v54 >= v63 )
        {
          if ( v54 <= *(int *)&v59[1] )
            result = v54;
          else
            result = *(_DWORD *)&v59[1];
        }
        else
        {
          result = v63;
        }
      }
      break;
    case 7:
      if ( v67 >= 1 )
      {
        if ( *(_BYTE *)(v56 + 1200) )
        {
          v43 = (int *)sub_5B5130(v51, a2);
          v44 = v43[1];
          v61 = *v43;
          v62 = v44;
          v54 = 2 * v61;
          if ( 2 * v61 >= v63 )
          {
            if ( v54 <= *(int *)&v59[1] )
              result = v54;
            else
              result = *(_DWORD *)&v59[1];
          }
          else
          {
            result = v63;
          }
        }
        else
        {
          v54 = 2 * sub_5A4960(this, a2);
          v45 = v54 / 10;
          v46 = v54 + (sub_62FBF0(10) - 4) * v45;
          v54 = v46 - v46 % 5;
          if ( v54 >= v63 )
          {
            if ( v54 <= *(int *)&v59[1] )
              result = v54;
            else
              result = *(_DWORD *)&v59[1];
          }
          else
          {
            result = v63;
          }
        }
      }
      else
      {
        v54 = 2 * sub_5A4960(this, a2);
        if ( v54 != 2 * v63 || sub_62FBF0(2) )
        {
          v41 = v54 / 10;
          v42 = v54 + (sub_62FBF0(10) - 4) * v41;
          v54 = v42 - v42 % 5;
        }
        else
        {
          v54 = v63;
        }
        if ( v54 >= v63 )
        {
          if ( v54 <= *(int *)&v59[1] )
            result = v54;
          else
            result = *(_DWORD *)&v59[1];
        }
        else
        {
          result = v63;
        }
      }
      break;
    default:
LABEL_217:
      result = sub_5A4960(this, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_5A6760
// entry 005a6760  size 99  status ok
//======================================================================

int sub_5A6760()
{
  int v1; // [esp+4h] [ebp-4h]

  if ( !(unsigned __int16)sub_5B5C60(4, 0, 1) )
    sub_5E9F20(
      (char)"royalMatchState->GetPlayerCard(CASINO_DEALER_ID, 0, 1) != EMPTY_CARD",
      "..\\Casino\\royalmatchai.cpp",
      871);
  v1 = sub_5B5F60(4, 0, 1);
  if ( v1 == 1 )
    v1 = 11;
  return v1 - 2;
}


//======================================================================
// sub_5A67D0
// entry 005a67d0  size 919  status ok
//======================================================================

int __stdcall sub_5A67D0(int a1)
{
  int v2; // esi
  int v3; // [esp+8h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  v4 = sub_5B4E50(a1);
  v5 = sub_5B5830(a1, v4);
  v3 = sub_5B58F0(a1);
  if ( v5 == 2 && (unsigned __int8)sub_5B82F0(a1, v4) && v3 < (char)sub_5B5950(dword_793604) + 1 )
  {
    if ( sub_5B5F60(a1, v4, 0) == 1 )
    {
      if ( (unsigned __int8)sub_5B3710(a1, v4) )
        return 30;
      if ( (unsigned __int8)sub_5B6170(a1) )
        return 0;
      return 13;
    }
    if ( (unsigned __int8)sub_5B36B0(a1) )
      return sub_5B4F50(a1, v4) / 2 + 19;
  }
  if ( (unsigned __int8)sub_5B6170(a1) )
    return 0;
  if ( sub_5B4F50(a1, v4) == 21 )
    return 0;
  if ( (int)sub_5B4F50(a1, v4) >= 21 || (v2 = sub_5B5040(a1, v4), v2 == sub_5B5260(a1, v4)) )
  {
    if ( (int)sub_5B4F50(a1, v4) >= 8 )
    {
      if ( v5 == 2
        && (sub_5B5F60(a1, v4, 0) == 5 && sub_5B5F60(a1, v4, 1) == 3
         || sub_5B5F60(a1, v4, 0) == 3 && sub_5B5F60(a1, v4, 1) == 5) )
      {
        return 2;
      }
      else if ( v5 == 2
             && (sub_5B5F60(a1, v4, 0) == 5 && sub_5B5F60(a1, v4, 1) == 2
              || sub_5B5F60(a1, v4, 0) == 2 && sub_5B5F60(a1, v4, 1) == 6) )
      {
        return 3;
      }
      else if ( (int)sub_5B4F50(a1, v4) >= 17 )
      {
        if ( (int)sub_5B4F50(a1, v4) >= 22 )
        {
          if ( (int)sub_5B5260(a1, v4) >= 8 )
          {
            if ( (int)sub_5B5260(a1, v4) >= 17 )
              return 0;
            else
              return sub_5B5260(a1, v4) - 4;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return sub_5B4F50(a1, v4) - 4;
      }
    }
    else
    {
      return 1;
    }
  }
  else if ( sub_5B4F50(a1, v4) == 12 )
  {
    return 13;
  }
  else
  {
    return sub_5B4F50(a1, v4);
  }
}


//======================================================================
// sub_5A6B70
// entry 005a6b70  size 55  status ok
//======================================================================

int __thiscall sub_5A6B70(void *this, int a2)
{
  if ( (int)sub_62FBF0(10) >= 3 )
    return 0;
  else
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793600 + 688))(dword_793600, this);
}


//======================================================================
// sub_5A6BB0
// entry 005a6bb0  size 156  status ok
//======================================================================

bool __stdcall sub_5A6BB0(int a1)
{
  return (*(_DWORD *)(sub_5DCB00(a1) + 8) == 22
       || *(_DWORD *)(sub_5DCB00(a1) + 8) == 19
       || *(_DWORD *)(sub_5DCB00(a1) + 8) == 28
       || *(_DWORD *)(sub_5DCB00(a1) + 8) == 26)
      && sub_62FBF0(6) == 0;
}


//======================================================================
// sub_5A6C80
// entry 005a6c80  size 221  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5A6C80(ATL::CCRTHeap *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoyalMatchDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 1) = 0;
  for ( j = 0; j < 4; ++j )
  {
    *((_DWORD *)this + j + 6) = 0;
    *((_DWORD *)this + j + 18) = 0;
    *((_DWORD *)this + j + 22) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  return this;
}


//======================================================================
// sub_5A6D60
// entry 005a6d60  size 788  status ok
//======================================================================

void __thiscall sub_5A6D60(CNoTrackObject *this)
{
  int j; // [esp+98h] [ebp-14h]
  int i; // [esp+9Ch] [ebp-10h]

  *(_DWORD *)this = &RoyalMatchDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( *((_DWORD *)this + j + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 6))(*((_DWORD *)this + j + 6), 1);
    if ( *((_DWORD *)this + j + 18) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 18))(*((_DWORD *)this + j + 18), 1);
    if ( *((_DWORD *)this + j + 22) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 22))(*((_DWORD *)this + j + 22), 1);
  }
  if ( *((_DWORD *)this + 10) )
    (***((void (__thiscall ****)(_DWORD, int))this + 10))(*((_DWORD *)this + 10), 1);
  if ( *((_DWORD *)this + 11) )
    (***((void (__thiscall ****)(_DWORD, int))this + 11))(*((_DWORD *)this + 11), 1);
  if ( *((_DWORD *)this + 15) )
    (***((void (__thiscall ****)(_DWORD, int))this + 15))(*((_DWORD *)this + 15), 1);
  if ( *((_DWORD *)this + 16) )
    (***((void (__thiscall ****)(_DWORD, int))this + 16))(*((_DWORD *)this + 16), 1);
  if ( *((_DWORD *)this + 17) )
    (***((void (__thiscall ****)(_DWORD, int))this + 17))(*((_DWORD *)this + 17), 1);
  if ( *((_DWORD *)this + 12) )
    (***((void (__thiscall ****)(_DWORD, int))this + 12))(*((_DWORD *)this + 12), 1);
  if ( *((_DWORD *)this + 13) )
    (***((void (__thiscall ****)(_DWORD, int))this + 13))(*((_DWORD *)this + 13), 1);
  if ( *((_DWORD *)this + 14) )
    (***((void (__thiscall ****)(_DWORD, int))this + 14))(*((_DWORD *)this + 14), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5A7080
// entry 005a7080  size 119  status ok
//======================================================================

int __thiscall sub_5A7080(int *this)
{
  int result; // eax

  if ( *(this + 13) )
  {
    sub_5F8990(*(this + 13));
    *(this + 13) = 0;
  }
  sub_5A8730(0);
  result = (int)this;
  if ( *(this + 10) )
  {
    result = *(this + 10);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 10))(*(this + 10), 1);
    *(this + 10) = 0;
  }
  return result;
}


//======================================================================
// sub_5A7100
// entry 005a7100  size 41  status ok
//======================================================================

int __thiscall sub_5A7100(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 14) )
  {
    result = sub_5F8990(*(this + 14));
    *(this + 14) = 0;
  }
  return result;
}


//======================================================================
// sub_5A7130
// entry 005a7130  size 41  status ok
//======================================================================

int __thiscall sub_5A7130(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 12) )
  {
    result = sub_5F8990(*(this + 12));
    *(this + 12) = 0;
  }
  return result;
}


//======================================================================
// sub_5A7160
// entry 005a7160  size 48  status ok
//======================================================================

BOOL __stdcall sub_5A7160(int a1)
{
  return a1 == 0;
}


//======================================================================
// sub_5A7190
// entry 005a7190  size 64  status ok
//======================================================================

int __stdcall sub_5A7190(int a1, int a2)
{
  switch ( a1 )
  {
    case 1:
      return 0;
    case 2:
    case 3:
      return 1;
    case 4:
      return (a2 >= 2) + 1;
  }
  return 0;
}


//======================================================================
// sub_5A71D0
// entry 005a71d0  size 104  status ok
//======================================================================

int __stdcall sub_5A71D0(int a1, int a2, int a3)
{
  _DWORD v4[5]; // [esp+4h] [ebp-14h]

  v4[0] = 5002;
  v4[1] = 5003;
  v4[2] = 5001;
  v4[3] = 5004;
  v4[4] = 5007;
  if ( a1 < 4 && a3 == 2 && (unsigned __int8)sub_5B60A0(a1, a2) )
    return 5008;
  else
    return v4[a1];
}


//======================================================================
// sub_5A7240
// entry 005a7240  size 539  status ok
//======================================================================

int __stdcall sub_5A7240(int a1, int a2, int a3)
{
  int v4; // eax
  _DWORD v5[48]; // [esp+4h] [ebp-C8h] BYREF
  int v6; // [esp+C4h] [ebp-8h]
  int v7; // [esp+C8h] [ebp-4h]

  v5[0] = 384;
  v5[1] = 210;
  v5[2] = 323;
  v5[3] = 236;
  v5[4] = 402;
  v5[5] = 210;
  v5[6] = 374;
  v5[7] = 120;
  v5[8] = 323;
  v5[9] = 147;
  v5[10] = 402;
  v5[11] = 147;
  v5[12] = 192;
  v5[13] = 236;
  v5[14] = 145;
  v5[15] = 236;
  v5[16] = 224;
  v5[17] = 236;
  v5[18] = 202;
  v5[19] = 147;
  v5[20] = 155;
  v5[21] = 147;
  v5[22] = 234;
  v5[23] = 147;
  v5[24] = 515;
  v5[25] = 174;
  v5[26] = 469;
  v5[27] = 174;
  v5[28] = 548;
  v5[29] = 174;
  v5[30] = 515;
  v5[31] = 89;
  v5[32] = 469;
  v5[33] = 89;
  v5[34] = 548;
  v5[35] = 89;
  v5[36] = 57;
  v5[37] = 174;
  v5[38] = 1;
  v5[39] = 174;
  v5[40] = 80;
  v5[41] = 174;
  v5[42] = 57;
  v5[43] = 89;
  v5[44] = 1;
  v5[45] = 89;
  v5[46] = 80;
  v5[47] = 89;
  if ( a1 == 4 )
    return 14 * a3 + 265;
  v4 = sub_5B58F0(a1);
  v6 = sub_5A7190(v4, a2);
  v7 = v5[12 * a1 + 2 * v6 + 2 * a2] + 12 * a3;
  if ( (unsigned __int8)sub_5B60A0(a1, a2) )
  {
    if ( a3 == 2 )
      v7 -= 20;
  }
  return v7;
}


//======================================================================
// sub_5A7460
// entry 005a7460  size 495  status ok
//======================================================================

int __stdcall sub_5A7460(int a1, int a2, int a3)
{
  int v4; // eax
  _DWORD v5[48]; // [esp+4h] [ebp-C8h] BYREF
  int v6; // [esp+C8h] [ebp-4h]

  v5[0] = 384;
  v5[1] = 210;
  v5[2] = 323;
  v5[3] = 236;
  v5[4] = 402;
  v5[5] = 210;
  v5[6] = 374;
  v5[7] = 120;
  v5[8] = 323;
  v5[9] = 147;
  v5[10] = 402;
  v5[11] = 147;
  v5[12] = 192;
  v5[13] = 236;
  v5[14] = 145;
  v5[15] = 236;
  v5[16] = 224;
  v5[17] = 236;
  v5[18] = 202;
  v5[19] = 147;
  v5[20] = 155;
  v5[21] = 147;
  v5[22] = 234;
  v5[23] = 147;
  v5[24] = 515;
  v5[25] = 174;
  v5[26] = 469;
  v5[27] = 174;
  v5[28] = 548;
  v5[29] = 174;
  v5[30] = 515;
  v5[31] = 89;
  v5[32] = 469;
  v5[33] = 89;
  v5[34] = 548;
  v5[35] = 89;
  v5[36] = 57;
  v5[37] = 174;
  v5[38] = 1;
  v5[39] = 174;
  v5[40] = 80;
  v5[41] = 174;
  v5[42] = 57;
  v5[43] = 89;
  v5[44] = 1;
  v5[45] = 89;
  v5[46] = 80;
  v5[47] = 89;
  if ( a1 == 4 )
    return 70;
  v4 = sub_5B58F0(a1);
  v6 = sub_5A7190(v4, a2);
  return v5[12 * a1 + 1 + 2 * v6 + 2 * a2] - 6 * a3;
}


//======================================================================
// sub_5A7650
// entry 005a7650  size 1763  status ok
//======================================================================

int __thiscall sub_5A7650(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-A8h]
  int v6; // [esp+8h] [ebp-A4h]
  int v7; // [esp+Ch] [ebp-A0h]
  _DWORD *v8; // [esp+10h] [ebp-9Ch]
  int v9; // [esp+14h] [ebp-98h]
  int v10; // [esp+18h] [ebp-94h]
  int v11; // [esp+1Ch] [ebp-90h]
  int v12; // [esp+20h] [ebp-8Ch]
  void *v14; // [esp+28h] [ebp-84h]
  void *v15; // [esp+30h] [ebp-7Ch]
  void *v16; // [esp+38h] [ebp-74h]
  _DWORD *v17; // [esp+40h] [ebp-6Ch]
  void *v18; // [esp+48h] [ebp-64h]
  void *v19; // [esp+50h] [ebp-5Ch]
  void *v20; // [esp+58h] [ebp-54h]
  void *v21; // [esp+60h] [ebp-4Ch]
  int j; // [esp+68h] [ebp-44h]
  int i; // [esp+6Ch] [ebp-40h]
  int v24; // [esp+70h] [ebp-3Ch]
  _DWORD v25[7]; // [esp+74h] [ebp-38h]
  _DWORD v26[4]; // [esp+90h] [ebp-1Ch]
  int v27; // [esp+A8h] [ebp-4h]

  v26[0] = 1;
  v26[1] = 2;
  v26[2] = 0;
  v26[3] = 3;
  v24 = 375;
  v25[0] = 290;
  v25[1] = 264;
  v25[2] = 300;
  v25[3] = 495;
  v25[4] = 240;
  v25[5] = 126;
  v25[6] = 277;
  v1 = sub_630F40("SID_ROYALMATCH");
  sub_5F38B0(v1);
  sub_5F1AD0(65004);
  for ( i = 0; i < 5; ++i )
  {
    v21 = operator new(0x188u);
    v27 = 0;
    if ( v21 )
      v12 = sub_5ABFA0(v21);
    else
      v12 = 0;
    v27 = -1;
    *(_DWORD *)(this + 4 * i + 4) = v12;
    sub_5AC240(i);
  }
  for ( j = 0; j < 4; ++j )
  {
    v20 = operator new(0xCC4u);
    v27 = 1;
    if ( v20 )
      v11 = sub_5A8F40(v20);
    else
      v11 = 0;
    v27 = -1;
    *(_DWORD *)(this + 4 * j + 24) = v11;
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 24) + 3264) = 100;
    sub_5EAE80(5006, 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * j + 24) + 176))(
      *(_DWORD *)(this + 4 * j + 24),
      v26[j]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode(*(CPane **)(this + 4 * j + 24), *(_DWORD *)(dword_793604 + 4 * j + 1408));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 24) + 116))(*(_DWORD *)(this + 4 * j + 24));
    v19 = operator new(0xCC4u);
    v27 = 2;
    if ( v19 )
      v10 = sub_5A8F40(v19);
    else
      v10 = 0;
    v27 = -1;
    *(_DWORD *)(this + 4 * j + 72) = v10;
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 72) + 3264) = 101;
    sub_5EAE80(5006, 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * j + 72) + 176))(
      *(_DWORD *)(this + 4 * j + 72),
      v26[j]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode(*(CPane **)(this + 4 * j + 72), *(_DWORD *)(dword_793604 + 4 * j + 1588));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 72) + 116))(*(_DWORD *)(this + 4 * j + 72));
    v18 = operator new(0x178u);
    v27 = 3;
    if ( v18 )
    {
      sub_5EAAF0(v18);
      v9 = v2;
    }
    else
    {
      v9 = 0;
    }
    v27 = -1;
    *(_DWORD *)(this + 4 * j + 88) = v9;
    sub_5EAE80(3216018, v25[2 * j - 1], v25[2 * j], 100, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 88) + 112))(*(_DWORD *)(this + 4 * j + 88));
  }
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 24) + 68))(*(_DWORD *)(this + 24), -4, 9);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 72) + 68))(*(_DWORD *)(this + 72), 25, -32);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), 22, 10);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 76) + 68))(*(_DWORD *)(this + 76), 67, -18);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), -7, 33);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 80) + 68))(*(_DWORD *)(this + 80), 6, -13);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 36) + 68))(*(_DWORD *)(this + 36), 20, 39);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 84) + 68))(*(_DWORD *)(this + 84), 72, 30);
  v17 = operator new(0x198u);
  v27 = 4;
  if ( v17 )
  {
    sub_5CD6A0(v17);
    *v17 = &RoyalMatchDealerDisplay::`vftable';
    v8 = v17;
  }
  else
  {
    v8 = 0;
  }
  v27 = -1;
  *(_DWORD *)(this + 44) = v8;
  sub_5EAE80(0, 0, 0, 0, -1);
  v16 = operator new(0x184u);
  v27 = 5;
  if ( v16 )
    v7 = sub_5F5BF0(v16);
  else
    v7 = 0;
  v27 = -1;
  *(_DWORD *)(this + 60) = v7;
  sub_5EAE80(5026, 0, 0, 150, -1);
  v15 = operator new(0x184u);
  v27 = 6;
  if ( v15 )
    v6 = sub_5F5BF0(v15);
  else
    v6 = 0;
  v27 = -1;
  *(_DWORD *)(this + 64) = v6;
  sub_5EAE80(5027, 0, 0, 151, -1);
  v14 = operator new(0x178u);
  v27 = 7;
  if ( v14 )
  {
    sub_5EAAF0(v14);
    v5 = v3;
  }
  else
  {
    v5 = 0;
  }
  v27 = -1;
  *(_DWORD *)(this + 68) = v5;
  return sub_5EAE80(5025, 0, 0, 10, -1);
}


//======================================================================
// sub_5A7D40
// entry 005a7d40  size 338  status ok
//======================================================================

bool __stdcall sub_5A7D40(int a1, int a2, int a3)
{
  CImageDisplay *v5; // [esp+8h] [ebp-8h]

  if ( a1 == 4 )
  {
    return !a3 && !*(_BYTE *)(dword_7935FC + 9) && sub_5B5730(dword_793604) != -1;
  }
  else
  {
    if ( sub_5B58A0(dword_793604) != 1 )
      return 0;
    v5 = (CImageDisplay *)sub_5DCB00(a1);
    if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left != 1 || (unsigned __int8)sub_5B60A0(a1, a2) || a3 >= 2 )
      return 0;
    if ( (unsigned __int8)sub_5B3300(a1, a2) || (unsigned __int8)sub_5B6040(a1) )
      return 0;
    return sub_5B5010(a1, a2) == -1 || sub_5B5010(a1, a2) == 5 && !(unsigned __int8)sub_5B6530(dword_793604);
  }
}


//======================================================================
// sub_5A7EA0
// entry 005a7ea0  size 555  status ok
//======================================================================

int __thiscall sub_5A7EA0(_DWORD **this)
{
  BOOL v1; // eax
  int result; // eax
  int j; // [esp+Ch] [ebp-Ch]
  int v5; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  sub_5A8890(this);
  if ( *(_DWORD *)(*(_DWORD *)(dword_793604 + 1404) + 2056) == *(_DWORD *)(*(_DWORD *)(dword_793604 + 1404) + 2060) - 1 )
    (*(void (__thiscall **)(_DWORD))(**(this + 17) + 112))(*(this + 17));
  for ( i = 0; i < 4; ++i )
  {
    v5 = *(_DWORD *)(dword_793604 + 4 * i + 1636);
    if ( v5 == -1 || *(_BYTE *)(dword_793604 + 1656) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + i + 22) + 112))(*(this + i + 22));
    }
    else
    {
      v1 = sub_5A7160(v5);
      (*(void (__thiscall **)(_DWORD, BOOL))(**(this + i + 22) + 176))(*(this + i + 22), v1);
      (*(void (__thiscall **)(_DWORD))(**(this + i + 22) + 116))(*(this + i + 22));
    }
  }
  for ( j = 0; j < 5; ++j )
  {
    sub_5AC460(*(this + j + 1));
    if ( j != 4
      && (unsigned __int8)sub_5B60C0(j)
      && (unsigned __int8)sub_5DA7B0(dword_793600)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_793600 + 708))(dword_793600, j)
      && !(*(this + j + 6))[120 * j + 95] )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + j + 6) + 184))(*(this + j + 6), j, 0);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + j + 18) + 184))(*(this + j + 18), j, 0);
    }
  }
  result = (unsigned __int8)sub_5DA7B0(dword_793600);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_793600 + 752))(dword_793600);
  return result;
}


//======================================================================
// sub_5A80D0
// entry 005a80d0  size 310  status ok
//======================================================================

int __thiscall sub_5A80D0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]
  void *v5; // [esp+10h] [ebp-1Ch]
  void *v6; // [esp+18h] [ebp-14h]

  if ( !*(this + 13) )
  {
    v6 = operator new(0x1BCu);
    if ( v6 )
      v3 = sub_5A8960(v6);
    else
      v3 = 0;
    *(this + 13) = v3;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 13) + 60))(*(this + 13));
    sub_5F7340(-10, 130);
  }
  sub_5F85D0(*(this + 13));
  sub_5A8730(1);
  if ( !*(this + 10) )
  {
    v5 = operator new(0x5Cu);
    if ( v5 )
      v2 = sub_5AB410(v5);
    else
      v2 = 0;
    *(this + 10) = v2;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 10) + 108))(*(this + 10), 0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 10) + 64))(*(this + 10));
}


//======================================================================
// sub_5A8210
// entry 005a8210  size 137  status ok
//======================================================================

int __thiscall sub_5A8210(_DWORD **this, unsigned int a2, int a3)
{
  int result; // eax

  if ( a2 < 4 )
  {
    if ( a3 == 101 && (result = a2, *(this + a2 + 18)) )
    {
      return (*(int (__thiscall **)(_DWORD, unsigned int, _DWORD))(**(this + a2 + 18) + 184))(*(this + a2 + 18), a2, 0);
    }
    else if ( *(this + a2 + 6) )
    {
      return (*(int (__thiscall **)(_DWORD, unsigned int, int))(**(this + a2 + 6) + 184))(*(this + a2 + 6), a2, a3);
    }
  }
  return result;
}


//======================================================================
// sub_5A82A0
// entry 005a82a0  size 530  status ok
//======================================================================

int __thiscall sub_5A82A0(_DWORD *this, int a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // eax
  int v11; // [esp-4h] [ebp-28h]
  __int16 v12; // [esp+8h] [ebp-1Ch]
  _DWORD v13[5]; // [esp+Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-4h]

  v13[0] = -1;
  v13[1] = 1;
  v13[2] = 2;
  v13[3] = 3;
  v13[4] = 0;
  v14 = *(_DWORD *)(*(this + a2 + 1) + 88 * a3 + 40 + 4 * a4);
  v12 = sub_5B5C60(a2, a3, a4);
  v5 = sub_5A71D0(a2, a3, a4);
  sub_5EAF00(v5);
  v11 = sub_5A7460(a2, a3, a4);
  v6 = sub_5A7240(a2, a3, a4);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 68))(v14, v6, v11);
  v7 = 13 * v13[sub_641290(v12)];
  if ( v7 + sub_641280(v12) - 1 >= 52 )
    sub_5E9F20(
      (char)"13 * suitConversion[GetSuit(card)] + GetRank(card) - 1 < 52",
      "..\\Casino\\royalmatchdisplay.cpp",
      368);
  v8 = 13 * v13[sub_641290(v12)];
  v9 = sub_641280(v12);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 176))(v14, v8 + v9 - 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 108))(v14, 7 * a3 + a4 + 5);
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 116))(v14);
  if ( !sub_5A7D40(a2, a3, a4) || a5 )
  {
    if ( !(unsigned __int8)sub_5B84F0(a2, a3, a4) )
      sub_5B3240(a2, a3, a4);
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 176))(v14, 53);
  }
  if ( a2 >= 4 || sub_5B4E50(a2) == a3 || sub_5B4E50(a2) == -1 )
    return sub_5EB5D0(255);
  else
    return sub_5EB5D0(100);
}


//======================================================================
// sub_5A84C0
// entry 005a84c0  size 207  status ok
//======================================================================

int __thiscall sub_5A84C0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 14) )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v2 = sub_5A9EC0(v4);
    else
      v2 = 0;
    *(this + 14) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 14) + 60))(*(this + 14));
    CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(380, 5);
  }
  sub_5AA000(*(this + 14));
  result = dword_7935FC;
  if ( *(_BYTE *)(dword_7935FC + 7) )
    return sub_5F85D0(*(this + 14));
  return result;
}


//======================================================================
// sub_5A8590
// entry 005a8590  size 121  status ok
//======================================================================

int __thiscall sub_5A8590(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_793600)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793600 + 724))(dword_793600, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_5B7D30(dword_793604) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_5AEF40(v2);
    }
  }
  return result;
}


//======================================================================
// sub_5A8610
// entry 005a8610  size 180  status ok
//======================================================================

int __thiscall sub_5A8610(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 12) )
  {
    v4 = operator new(0x1C4u);
    if ( v4 )
      v2 = sub_5ABD70(v4);
    else
      v2 = 0;
    *(this + 12) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 12) + 60))(*(this + 12));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 12));
}


//======================================================================
// sub_5A86D0
// entry 005a86d0  size 96  status ok
//======================================================================

int __thiscall sub_5A86D0(void *this)
{
  int result; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_793600)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793600 + 724))(dword_793600, this), (_BYTE)result) )
  {
    result = sub_5B7D30(dword_793604);
    if ( (_BYTE)result )
      return sub_5DB8C0(0, 170);
  }
  return result;
}


//======================================================================
// sub_5A8730
// entry 005a8730  size 349  status ok
//======================================================================

int __thiscall sub_5A8730(void *this, char a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = sub_5B4F00(dword_793604, this);
  v3 = sub_5B4E50(v4);
  if ( a2 )
  {
    sub_5F2B20(3233002, 1);
    sub_5F2B20(3233003, 1);
    sub_5F2B20(3233004, 1);
    sub_5F2B20(3233005, 1);
    sub_5F2B20(3233006, 1);
    if ( !(unsigned __int8)sub_5B3430(v4) )
      sub_5F2BA0(3233004);
    if ( !(unsigned __int8)sub_5B3710(v4, v3) )
      sub_5F2BA0(3233005);
    result = sub_5B37F0(v4);
    if ( !(_BYTE)result )
      return sub_5F2BA0(3233006);
  }
  else
  {
    sub_5F2BA0(3233002);
    sub_5F2BA0(3233003);
    sub_5F2BA0(3233004);
    sub_5F2BA0(3233005);
    return sub_5F2BA0(3233006);
  }
  return result;
}


//======================================================================
// sub_5A8890
// entry 005a8890  size 204  status ok
//======================================================================

int sub_5A8890()
{
  char v1; // [esp+0h] [ebp-18h]
  CImageDisplay *v2; // [esp+10h] [ebp-8h]
  unsigned int v3; // [esp+14h] [ebp-4h]

  if ( sub_5B5380(dword_793604) != -1
    && (v3 = sub_5B5380(dword_793604), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_5B6700(v3)) )
  {
    return sub_5F2B20(3233007, 1);
  }
  else
  {
    return sub_5F2BA0(3233007);
  }
}


//======================================================================
// sub_5A8960
// entry 005a8960  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_5A8960(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &RoyalMatchActionDialog::`vftable';
  return this;
}


//======================================================================
// sub_5A89B0
// entry 005a89b0  size 148  status ok
//======================================================================

int __stdcall sub_5A89B0(int a1)
{
  int v2; // [esp+4h] [ebp-1Ch]

  sub_5A7080((int *)dword_7935F8);
  if ( operator new(0x24u) )
    v2 = sub_5ACB70(a1);
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_5A8A50
// entry 005a8a50  size 487  status ok
//======================================================================

int __thiscall sub_5A8A50(void *this, int a2)
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
  int v11; // [esp+0h] [ebp-8h]

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a2 + 24) == 4 )
      {
        v11 = tolower(*(char *)(a2 + 20)) - 100;
        switch ( v11 )
        {
          case 0:
            v8 = sub_5F2A60(3233004, 0);
            if ( (unsigned __int8)sub_6026D0(v8) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 2);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 4:
            v7 = sub_5F2A60(3233002, 0);
            if ( (unsigned __int8)sub_6026D0(v7) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 1);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 12:
            v9 = sub_5F2A60(3233005, 0);
            if ( (unsigned __int8)sub_6026D0(v9) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 3);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 14:
            v10 = sub_5F2A60(3233006, 0);
            if ( (unsigned __int8)sub_6026D0(v10) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 4);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 15:
            v6 = sub_5F2A60(3233003, 0);
            if ( (unsigned __int8)sub_6026D0(v6) )
            {
              (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 24))(this, 0);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 16:
            v3 = sub_5F2A60(5009, 0);
            if ( (unsigned __int8)sub_6026D0(v3) )
            {
              v4 = sub_5B4F00(dword_793604, v11);
              v5 = sub_5A4B20((void *)dword_7935F4, v4);
              sub_5A8E90(v5);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          default:
            return sub_5F72F0(a2);
        }
      }
      return sub_5F72F0(a2);
    }
  }
  return result;
}


//======================================================================
// sub_5A8C70
// entry 005a8c70  size 533  status ok
//======================================================================

int __thiscall sub_5A8C70(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-58h]
  int v6; // [esp+8h] [ebp-54h]
  int v7; // [esp+Ch] [ebp-50h]
  int i; // [esp+14h] [ebp-48h]
  int v10; // [esp+18h] [ebp-44h]
  _DWORD v11[5]; // [esp+1Ch] [ebp-40h]
  int v12; // [esp+30h] [ebp-2Ch]
  int v13; // [esp+34h] [ebp-28h]
  _DWORD v14[9]; // [esp+38h] [ebp-24h]

  v11[0] = "SID_ROYALMATCH_STAND";
  v11[1] = "SID_ROYALMATCH_HIT";
  v11[2] = "SID_ROYALMATCH_DOUBLE";
  v11[3] = "SID_ROYALMATCH_SPLIT";
  v11[4] = "SID_ROYALMATCH_SURRENDER";
  v13 = 32;
  v14[0] = 34;
  v14[1] = 32;
  v14[2] = 64;
  v14[3] = 32;
  v14[4] = 94;
  v14[5] = 32;
  v14[6] = 124;
  v14[7] = 5;
  v14[8] = 154;
  v12 = sub_5B4F00(dword_793604);
  v10 = sub_5B4E50(v12);
  sub_5F83D0(5014, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_ROYALMATCH_ACTIONS");
  sub_5F73E0(v1, 73, 0, 3);
  for ( i = 0; i < 5; ++i )
  {
    v2 = sub_630F40(v11[i]);
    sub_5F9DE0(0, i, (i == 4) + 3200222, v14[2 * i - 1], v14[2 * i], 2, v2, 72, 75, 74, -1, 0);
    sub_5FB300(i);
    sub_5EB700(1);
  }
  if ( (unsigned __int8)sub_5B6170(v12) )
  {
    v7 = sub_5FB300(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 208))(v7);
  }
  if ( !(unsigned __int8)sub_5B3430(v12) )
  {
    v6 = sub_5FB300(2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
  }
  if ( !(unsigned __int8)sub_5B3710(v12, v10) )
  {
    v5 = sub_5FB300(3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
  }
  result = sub_5B37F0(v12);
  if ( !(_BYTE)result )
  {
    v4 = sub_5FB300(4);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 208))(v4, v4);
  }
  return result;
}


//======================================================================
// sub_5A8E90
// entry 005a8e90  size 173  status ok
//======================================================================

int __stdcall sub_5A8E90(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  _DWORD v3[9]; // [esp+8h] [ebp-24h]

  v2 = 32;
  v3[0] = 34;
  v3[1] = 32;
  v3[2] = 64;
  v3[3] = 32;
  v3[4] = 94;
  v3[5] = 32;
  v3[6] = 124;
  v3[7] = 5;
  v3[8] = 154;
  result = sub_5FB2B0(0);
  if ( !result )
  {
    sub_5F9CE0(0, 0, (a1 == 4) + 5016, v3[2 * a1 - 1], v3[2 * a1], 3, 0, 255, 0);
    sub_5FB2B0(0);
    return sub_5EB5D0(100);
  }
  return result;
}


//======================================================================
// sub_5A8F40
// entry 005a8f40  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_5A8F40(_DWORD *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  sub_5CC1D0(this);
  *this = &RoyalMatchBetArea::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 30; ++j )
      *(this + 30 * i + j + 696) = 0;
  }
  return this;
}


//======================================================================
// sub_5A8FB0
// entry 005a8fb0  size 92  status ok
//======================================================================

int __thiscall sub_5A8FB0(_DWORD *this)
{
  *this = &RoyalMatchBetArea::`vftable';
  sub_5A9510(this);
  return sub_5CC230();
}


//======================================================================
// sub_5A9010
// entry 005a9010  size 1036  status ok
//======================================================================

int __thiscall sub_5A9010(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-Ch] [ebp-34h]
  int IsFixedSize; // [esp-8h] [ebp-30h]
  int v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+8h] [ebp-20h]
  void *v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+18h] [ebp-10h]

  result = sub_5CCA50(a2, a3, a4, a5);
  if ( *(this + 816) != 101 )
  {
    v21 = (int)CMFCToolBarsCustomizeDialog::GetFlags((CMFCToolBarsCustomizeDialog *)*(this + 120 * a2 + 30 * a3 + 95)) <= 32
        ? 33
        : 46;
    result = sub_5B60A0(a2, a3);
    if ( (_BYTE)result )
    {
      if ( sub_5B4E50(a2) && sub_5B4E50(a2) != 2 )
      {
        v9 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 216))(this, a2, a3);
        v10 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 224))(this, a2, a3);
        v11 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*this + 212))(this, a2, a3, a4 * v10 + v9);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 68))(
          *(this + 120 * a2 + 30 * a3 + a4 + 95),
          v11);
      }
      else
      {
        v6 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 216))(this, a2, a3);
        v7 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 224))(this, a2, a3);
        v8 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*this + 212))(this, a2, a3, a4 * v7 + v6);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 68))(
          *(this + 120 * a2 + 30 * a3 + a4 + 95),
          v8 - v21 / 2);
      }
      v20 = operator new(0x190u);
      if ( v20 )
        v18 = sub_5F5F50(v20);
      else
        v18 = 0;
      *(this + 30 * a3 + a4 + 696) = v18;
      IsFixedSize = CMediaType::IsFixedSize((CMediaType *)*(this + 120 * a2 + 30 * a3 + a4 + 95));
      v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 84))(*(this + 120 * a2 + 30 * a3 + a4 + 95));
      v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 76))(*(this + 120 * a2 + 30 * a3 + a4 + 95));
      v13 = (*(int (__thiscall **)(_DWORD *, int))(*this + 204))(this, v21 + v12);
      sub_5EAE80(v13, v15, IsFixedSize, -1, v17);
      v14 = sub_62FBF0(3);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 30 * a3 + a4 + 696) + 176))(
        *(this + 30 * a3 + a4 + 696),
        v14 + 3 * (16 - a5));
      sub_5EB700(1);
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 30 * a3 + a4 + 696) + 116))(*(this + 30 * a3 + a4 + 696));
    }
  }
  return result;
}


//======================================================================
// sub_5A9420
// entry 005a9420  size 233  status ok
//======================================================================

int __thiscall sub_5A9420(_DWORD **this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-14h]
  int (__thiscall ***v6)(_DWORD, int); // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 30; ++i )
  {
    if ( *(this + 30 * a3 + i + 696) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(this + 30 * a3 + i + 696) + 112))(*(this + 30 * a3 + i + 696), v4);
      if ( *(this + 30 * a3 + i + 696) )
      {
        v6 = (int (__thiscall ***)(_DWORD, int))*(this + 30 * a3 + i + 696);
        v4 = (**v6)(v6, 1);
      }
      else
      {
        v4 = 0;
      }
      *(this + 30 * a3 + i + 696) = 0;
    }
  }
  return sub_5CCC70(a2, a3);
}


//======================================================================
// sub_5A9510
// entry 005a9510  size 258  status ok
//======================================================================

int __thiscall sub_5A9510(_DWORD **this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-18h]
  int (__thiscall ***v4)(_DWORD, int); // [esp+Ch] [ebp-Ch]
  int j; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  result = sub_5CCD90(this);
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 30; ++j )
    {
      if ( *(this + 30 * i + j + 696) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(this + 30 * i + j + 696) + 112))(*(this + 30 * i + j + 696), v2);
        if ( *(this + 30 * i + j + 696) )
        {
          v4 = (int (__thiscall ***)(_DWORD, int))*(this + 30 * i + j + 696);
          v2 = (**v4)(v4, 1);
        }
        else
        {
          v2 = 0;
        }
        *(this + 30 * i + j + 696) = 0;
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5A9620
// entry 005a9620  size 141  status ok
//======================================================================

_DWORD *__thiscall sub_5A9620(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v4 = *(this + 94) + 32 * a3 + 72;
  v6 = *(_DWORD *)(v4 + 8 * a4);
  v7 = *(_DWORD *)(v4 + 8 * a4 + 4);
  if ( *(this + 816) == 101 )
  {
    *a2 = v6;
    a2[1] = v7;
    return a2;
  }
  else
  {
    if ( a3 < 4 )
    {
      if ( (unsigned __int8)sub_5B60A0(a3, a4) )
        v6 /= 2;
    }
    *a2 = v6;
    a2[1] = v7;
    return a2;
  }
}


//======================================================================
// sub_5A96D0
// entry 005a96d0  size 32  status ok
//======================================================================

int __stdcall sub_5A96D0(int a1, int a2)
{
  return sub_5A9B10(a1, a2) - 15;
}


//======================================================================
// sub_5A96F0
// entry 005a96f0  size 88  status ok
//======================================================================

int __stdcall sub_5A96F0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5A9750(a1, a2);
  if ( sub_62FBF0(2) == 1 )
    return v3 - sub_62FBF0(3);
  else
    return v3 + sub_62FBF0(3);
}


//======================================================================
// sub_5A9750
// entry 005a9750  size 842  status ok
//======================================================================

int __thiscall sub_5A9750(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD v4[48]; // [esp+8h] [ebp-100h] BYREF
  _DWORD v5[8]; // [esp+C8h] [ebp-40h]
  _DWORD v6[8]; // [esp+E8h] [ebp-20h]

  v4[0] = 359;
  v4[1] = 316;
  v4[2] = 300;
  v4[3] = 272;
  v4[4] = 378;
  v4[5] = 272;
  v4[6] = 350;
  v4[7] = 184;
  v4[8] = 300;
  v4[9] = 184;
  v4[10] = 378;
  v4[11] = 184;
  v4[12] = 226;
  v4[13] = 319;
  v4[14] = 122;
  v4[15] = 272;
  v4[16] = 200;
  v4[17] = 272;
  v4[18] = 177;
  v4[19] = 184;
  v4[20] = 131;
  v4[21] = 184;
  v4[22] = 209;
  v4[23] = 184;
  v4[24] = 489;
  v4[25] = 265;
  v4[26] = 453;
  v4[27] = 203;
  v4[28] = 532;
  v4[29] = 203;
  v4[30] = 499;
  v4[31] = 120;
  v4[32] = 450;
  v4[33] = 120;
  v4[34] = 529;
  v4[35] = 120;
  v4[36] = 90;
  v4[37] = 273;
  v4[38] = -18;
  v4[39] = 203;
  v4[40] = 61;
  v4[41] = 203;
  v4[42] = 36;
  v4[43] = 120;
  v4[44] = -18;
  v4[45] = 120;
  v4[46] = 61;
  v4[47] = 120;
  v6[0] = 323;
  v6[1] = 305;
  v6[2] = 243;
  v6[3] = 306;
  v6[4] = 455;
  v6[5] = 235;
  v6[6] = 110;
  v6[7] = 234;
  v5[0] = 390;
  v5[1] = 272;
  v5[2] = 271;
  v5[3] = 291;
  v5[4] = 501;
  v5[5] = 221;
  v5[6] = 141;
  v5[7] = 267;
  if ( *(this + 816) == 101 )
    return v5[2 * a2];
  switch ( sub_5CB820(a2) )
  {
    case 1:
      result = v4[12 * a2];
      break;
    case 2:
      if ( (unsigned __int8)sub_5B6660(a2) && a3 == 1 )
        result = v6[2 * a2];
      else
        result = v4[12 * a2 + 2 + 2 * a3];
      break;
    case 3:
      result = v4[12 * a2 + 2 + 2 * a3];
      break;
    case 4:
      if ( a3 >= 2 )
        result = v4[12 * a2 + 4 + 2 * a3];
      else
        result = v4[12 * a2 + 2 + 2 * a3];
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 798);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5A9AB0
// entry 005a9ab0  size 88  status ok
//======================================================================

int __stdcall sub_5A9AB0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5A9B10(a1, a2);
  if ( sub_62FBF0(2) == 1 )
    return v3 - sub_62FBF0(3);
  else
    return v3 + sub_62FBF0(3);
}


//======================================================================
// sub_5A9B10
// entry 005a9b10  size 842  status ok
//======================================================================

int __thiscall sub_5A9B10(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-100h] BYREF
  _DWORD v5[48]; // [esp+Ch] [ebp-FCh]
  _DWORD v6[8]; // [esp+CCh] [ebp-3Ch]
  _DWORD v7[7]; // [esp+ECh] [ebp-1Ch]

  v4 = 359;
  v5[0] = 316;
  v5[1] = 300;
  v5[2] = 272;
  v5[3] = 378;
  v5[4] = 272;
  v5[5] = 350;
  v5[6] = 184;
  v5[7] = 300;
  v5[8] = 184;
  v5[9] = 378;
  v5[10] = 184;
  v5[11] = 226;
  v5[12] = 319;
  v5[13] = 122;
  v5[14] = 272;
  v5[15] = 200;
  v5[16] = 272;
  v5[17] = 177;
  v5[18] = 184;
  v5[19] = 131;
  v5[20] = 184;
  v5[21] = 209;
  v5[22] = 184;
  v5[23] = 489;
  v5[24] = 265;
  v5[25] = 453;
  v5[26] = 203;
  v5[27] = 532;
  v5[28] = 203;
  v5[29] = 499;
  v5[30] = 120;
  v5[31] = 450;
  v5[32] = 120;
  v5[33] = 529;
  v5[34] = 120;
  v5[35] = 90;
  v5[36] = 273;
  v5[37] = -18;
  v5[38] = 203;
  v5[39] = 61;
  v5[40] = 203;
  v5[41] = 36;
  v5[42] = 120;
  v5[43] = -18;
  v5[44] = 120;
  v5[45] = 61;
  v5[46] = 120;
  v6[7] = 323;
  v7[0] = 305;
  v7[1] = 243;
  v7[2] = 306;
  v7[3] = 455;
  v7[4] = 235;
  v7[5] = 110;
  v7[6] = 234;
  v5[47] = 390;
  v6[0] = 272;
  v6[1] = 271;
  v6[2] = 291;
  v6[3] = 501;
  v6[4] = 221;
  v6[5] = 141;
  v6[6] = 267;
  if ( *(this + 816) == 101 )
    return v6[2 * a2];
  switch ( sub_5CB820(a2) )
  {
    case 1:
      result = v5[12 * a2];
      break;
    case 2:
      if ( (unsigned __int8)sub_5B6660(a2) && a3 == 1 )
        result = v7[2 * a2];
      else
        result = v5[12 * a2 + 2 + 2 * a3];
      break;
    case 3:
      result = v5[12 * a2 + 2 + 2 * a3];
      break;
    case 4:
      if ( a3 >= 2 )
        result = v5[12 * a2 + 4 + 2 * a3];
      else
        result = v5[12 * a2 + 2 + 2 * a3];
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 863);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5A9E70
// entry 005a9e70  size 16  status ok
//======================================================================

int sub_5A9E70()
{
  return 75;
}


//======================================================================
// sub_5A9E80
// entry 005a9e80  size 64  status ok
//======================================================================

int __thiscall sub_5A9E80(pairNode **this)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 1;
  v2[1] = 2;
  v2[2] = 0;
  v2[3] = 3;
  return v2[pairNode::raw_length(*(this + 94))] + 5009;
}


//======================================================================
// sub_5A9EC0
// entry 005a9ec0  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_5A9EC0(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &RoyalMatchCardCountDialog::`vftable';
  return this;
}


//======================================================================
// sub_5A9F10
// entry 005a9f10  size 52  status ok
//======================================================================

int __stdcall sub_5A9F10(int a1)
{
  *(_BYTE *)(sub_5B5FB0(-1) + 6) = 0;
  sub_637610(dword_162EE84);
  return sub_5A7100((_DWORD *)dword_7935F8);
}


//======================================================================
// sub_5A9F50
// entry 005a9f50  size 163  status ok
//======================================================================

int sub_5A9F50()
{
  int v0; // eax
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5F83D0(1060, 0);
  v0 = sub_630F40("SID_ROYALMATCH_COUNT");
  sub_5F73E0(v0, 73, 0, 3);
  result = sub_5F9DE0(0, 0, 1092, 80, 7, 1, &Source, -1, -1, -1, -1, 0);
  for ( i = 0; i < 4; ++i )
  {
    sub_5FA5B0(0, i, &Source, 35, 100, 15, 5, 14 * i + 38, 1, 5, -1);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5AA000
// entry 005aa000  size 541  status ok
//======================================================================

int sub_5AA000()
{
  const char *v0; // eax
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  int v6; // eax
  int v8; // [esp-4h] [ebp-90h]
  int v9; // [esp-4h] [ebp-90h]
  int v10; // [esp+4h] [ebp-88h]
  int v11; // [esp+8h] [ebp-84h]
  int v12; // [esp+Ch] [ebp-80h]
  int v13; // [esp+14h] [ebp-78h]
  int v14; // [esp+18h] [ebp-74h]
  char Buffer[108]; // [esp+1Ch] [ebp-70h] BYREF

  v13 = sub_5B4000(dword_793604);
  v14 = 4 * sub_5B58A0(dword_793604) - *(_DWORD *)(dword_793604 + 1488);
  v8 = *(_DWORD *)(dword_793604 + 1484);
  v0 = (const char *)sub_630F40("SID_ROYALMATCH_RUNNINGCOUNT_FORMAT");
  sprintf(Buffer, v0, v8);
  v12 = sub_5FB550(0);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v12 + 180))(v12, Buffer);
  v9 = *(_DWORD *)(dword_793604 + 1480);
  v1 = (const char *)sub_630F40("SID_ROYALMATCH_TRUECOUNT_FORMAT");
  sprintf(Buffer, v1, v9);
  v11 = sub_5FB550(1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v11 + 180))(v11, Buffer);
  if ( *(int *)(dword_793604 + 1480) <= 1 )
  {
    if ( *(int *)(dword_793604 + 1480) >= -1 )
      v3 = (const char *)sub_630F40("SID_ROYALMATCH_DECK_NEUTRAL");
    else
      v3 = (const char *)sub_630F40("SID_ROYALMATCH_DECK_LOWCARDRICH");
    sprintf(Buffer, v3);
  }
  else
  {
    v2 = (const char *)sub_630F40("SID_ROYALMATCH_DECK_HIGHCARDRICH");
    sprintf(Buffer, v2);
  }
  v10 = sub_5FB550(2);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v10 + 180))(v10, Buffer);
  if ( v13 <= 0 )
  {
    if ( v13 >= 0 )
      v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACES_NEUTRAL_FORMAT");
    else
      v5 = (const char *)sub_630F40("SID_ROYALMATCH_ACES_POOR_FORMAT");
    sprintf(Buffer, v5, v14);
  }
  else
  {
    v4 = (const char *)sub_630F40("SID_ROYALMATCH_ACES_RICH_FORMAT");
    sprintf(Buffer, v4, v14);
  }
  v6 = sub_5FB550(3);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v6 + 180))(v6, Buffer);
}


//======================================================================
// sub_5AA220
// entry 005aa220  size 339  status ok
//======================================================================

int __stdcall sub_5AA220(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_7935F8;
  if ( *(_DWORD *)(dword_7935F8 + 64) )
  {
    sub_5EAF00(5029);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 176))(*(_DWORD *)(dword_7935F8 + 64), 0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_7935F8 + 60) )
  {
    sub_5EAF00(5028);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 176))(*(_DWORD *)(dword_7935F8 + 60), 0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_5AA380
// entry 005aa380  size 339  status ok
//======================================================================

int __stdcall sub_5AA380(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_7935F8;
  if ( *(_DWORD *)(dword_7935F8 + 64) )
  {
    sub_5EAF00(5037);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 176))(*(_DWORD *)(dword_7935F8 + 64), 0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_7935F8 + 60) )
  {
    sub_5EAF00(5036);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 176))(*(_DWORD *)(dword_7935F8 + 60), 0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_5AA4E0
// entry 005aa4e0  size 391  status ok
//======================================================================

int __stdcall sub_5AA4E0(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_7935F8;
  if ( *(_DWORD *)(dword_7935F8 + 64) )
  {
    sub_5EAF00(5027);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 176))(*(_DWORD *)(dword_7935F8 + 64), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 116))(*(_DWORD *)(dword_7935F8 + 64));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_7935F8 + 60) )
  {
    sub_5EAF00(5026);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 176))(*(_DWORD *)(dword_7935F8 + 60), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 116))(*(_DWORD *)(dword_7935F8 + 60));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_5AA670
// entry 005aa670  size 295  status ok
//======================================================================

_BYTE *__thiscall sub_5AA670(_BYTE *this, char a2, int a3)
{
  sub_5FC0D0(a3);
  *(_DWORD *)this = &RoyalMatchDealerToReadyScript::`vftable';
  *(this + 32) = a2;
  if ( a2 )
  {
    sub_5EAF00(5026);
    sub_5EAF00(5027);
  }
  else
  {
    sub_5EAF00(5028);
    sub_5EAF00(5029);
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 176))(*(_DWORD *)(dword_7935F8 + 60), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 176))(*(_DWORD *)(dword_7935F8 + 64), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 116))(*(_DWORD *)(dword_7935F8 + 60));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 116))(*(_DWORD *)(dword_7935F8 + 64));
  return this;
}


//======================================================================
// sub_5AA7A0
// entry 005aa7a0  size 477  status ok
//======================================================================

int __thiscall sub_5AA7A0(_BYTE *this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++dword_7935E0 <= dword_7935D8 )
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7935F8 + 64) + 176))(
          *(_DWORD *)(dword_7935F8 + 64),
          dword_7935E0);
      if ( dword_7935E0 <= dword_7935DC )
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7935F8 + 60) + 176))(
          *(_DWORD *)(dword_7935F8 + 60),
          dword_7935E0);
      if ( dword_7935E0 == (*(this + 32) != 0 ? 7 : 4) && *(_DWORD *)(dword_793604 + 1456) == sub_5B6790(dword_793604) )
      {
        sub_5EAF00(5025);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 68) + 116))(*(_DWORD *)(dword_7935F8 + 68));
      }
      if ( dword_7935E0 >= dword_7935DC && dword_7935E0 >= dword_7935D8 )
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 2);
      else
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 1);
      return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 28))(this, 4);
    }
    else if ( result == 2 )
    {
      if ( *((_DWORD *)this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 28))(*((_DWORD *)this + 4), 0);
        return sub_5FC420(0);
      }
    }
    else
    {
      return sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1079);
    }
  }
  else
  {
    dword_7935E0 = 0;
    dword_7935DC = sub_5EB240(*(_DWORD *)(dword_7935F8 + 60));
    dword_7935D8 = sub_5EB240(*(_DWORD *)(dword_7935F8 + 64));
    return (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 8))(this, 1, 4);
  }
  return result;
}


//======================================================================
// sub_5AA980
// entry 005aa980  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_5AA980(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &RoyalMatchDealScript::`vftable';
  *(this + 36) = sub_637810(4) < 2;
  return this;
}


//======================================================================
// sub_5AAA20
// entry 005aaa20  size 809  status ok
//======================================================================

int __thiscall sub_5AAA20(_DWORD *this)
{
  int result; // eax
  __int16 v2; // ax
  _BYTE *v3; // [esp+4h] [ebp-38h]
  int v4; // [esp+8h] [ebp-34h]
  _BYTE *v5; // [esp+Ch] [ebp-30h]
  _BYTE *v7; // [esp+18h] [ebp-24h]
  _BYTE *v8; // [esp+28h] [ebp-14h]

  switch ( unknown_libname_843(this) )
  {
    case 0:
      *(this + 8) = sub_5B52E0(dword_793604);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      if ( !(unsigned __int8)sub_5AAD60(this) )
        goto LABEL_7;
      v8 = operator new(0x24u);
      if ( v8 )
        v5 = sub_5AA670(v8, 1, (int)this);
      else
        v5 = 0;
      result = sub_5FC420(v5);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( (unsigned __int8)sub_5AAD60(this) )
      {
        if ( operator new(0x28u) )
          v4 = sub_5AADF0(*(this + 8), 0, this);
        else
          v4 = 0;
        result = sub_5FC420(v4);
      }
      else
      {
        v2 = sub_6436C0(*(_DWORD *)(dword_793604 + 1404));
        sub_5B31B0(*(this + 8), v2, -1);
        sub_5A7EA0((_DWORD **)dword_7935F8);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 2:
      if ( sub_5B5830(4, -1) == 2 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      else
      {
        *(this + 8) = sub_5B52E0(dword_793604);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( (unsigned __int8)sub_5AAD60(this) )
        {
          v7 = operator new(0x24u);
          if ( v7 )
            v3 = sub_5AA670(v7, 0, (int)this);
          else
            v3 = 0;
          result = sub_5FC420(v3);
        }
        else
        {
          result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 3);
        }
      }
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      if ( (unsigned __int8)sub_5AAD60(this) )
        result = sub_5AA380((int)this);
      else
LABEL_7:
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 112))(*(_DWORD *)(dword_7935F8 + 64));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 112))(*(_DWORD *)(dword_7935F8 + 60));
      *(_BYTE *)(dword_793604 + 1472) = 0;
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
        *(_DWORD *)(dword_793600 + 4),
        1,
        0);
      result = sub_5FC420(0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1166);
      break;
  }
  return result;
}


//======================================================================
// sub_5AAD60
// entry 005aad60  size 142  status ok
//======================================================================

bool __thiscall sub_5AAD60(_BYTE *this)
{
  return sub_5EB240(*(_DWORD *)(dword_7935F8 + 60)) >= 0
      && sub_5EB240(*(_DWORD *)(dword_7935F8 + 64)) >= 0
      && sub_5EB240(*(_DWORD *)(dword_7935F8 + 68)) >= 0
      && (unsigned __int8)sub_637630(dword_162EE84)
      && !byte_795F94
      && !*(this + 36)
      && !*(_BYTE *)(dword_793604 + 1472);
}


//======================================================================
// sub_5AADF0
// entry 005aadf0  size 413  status ok
//======================================================================

_DWORD *__thiscall sub_5AADF0(_DWORD *this, int a2, char a3, int a4)
{
  sub_5FC0D0(a4);
  *this = &RoyalMatchDealToScript::`vftable';
  *(this + 8) = a2;
  *((_BYTE *)this + 36) = a3;
  *((_BYTE *)this + 37) = 0;
  switch ( *(this + 8) )
  {
    case 0:
      sub_5EAF00(5032);
      break;
    case 1:
      sub_5EAF00(5033);
      break;
    case 2:
      sub_5EAF00(5031);
      break;
    case 3:
      sub_5EAF00(5034);
      break;
    case 4:
      sub_5EAF00(5035);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1203);
      break;
  }
  sub_5EAF00(5030);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 176))(*(_DWORD *)(dword_7935F8 + 64), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 176))(*(_DWORD *)(dword_7935F8 + 60), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_7935F8 + 64) + 108))(*(_DWORD *)(dword_7935F8 + 64), 150);
  (*(void (__cdecl **)(int))(**(_DWORD **)(dword_7935F8 + 60) + 108))(151);
  return this;
}


//======================================================================
// sub_5AAFB0
// entry 005aafb0  size 1097  status ok
//======================================================================

int __thiscall sub_5AAFB0(_BYTE *this)
{
  int result; // eax
  int v2; // eax
  __int16 v3; // ax
  _DWORD v5[3]; // [esp+1Ch] [ebp-2Ch]
  int v6; // [esp+28h] [ebp-20h]
  int v7; // [esp+2Ch] [ebp-1Ch]
  _DWORD v8[5]; // [esp+30h] [ebp-18h]
  int v9; // [esp+44h] [ebp-4h]

  v5[0] = 101003;
  v5[1] = 101004;
  v5[2] = 101005;
  v8[0] = 6;
  v8[1] = 6;
  v8[2] = 6;
  v8[3] = 5;
  v8[4] = 5;
  v9 = 7;
  v6 = *(_DWORD *)(dword_7935F8 + 64);
  v7 = *(_DWORD *)(dword_7935F8 + 60);
  switch ( unknown_libname_843(this) )
  {
    case 0:
      dword_7935F0 = 0;
      dword_7935EC = 0;
      dword_7935E8 = sub_5EB240(v6);
      dword_7935E4 = sub_5EB240(v7);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
      if ( *(_DWORD *)(dword_793604 + 1456) == sub_5B6790(dword_793604) )
        *(this + 37) = 1;
      result = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 8))(this, 1, 4);
      break;
    case 1:
      if ( ++dword_7935F0 <= dword_7935E8 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 176))(v6, dword_7935F0);
      if ( dword_7935F0 <= dword_7935E4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 176))(v7, dword_7935F0);
      if ( dword_7935F0 == v8[*((_DWORD *)this + 8)] - 1 )
      {
        v2 = sub_62FBF0(3);
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          v5[v2],
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
      }
      else if ( dword_7935F0 == v8[*((_DWORD *)this + 8)] )
      {
        v3 = sub_6436C0(*(_DWORD *)(dword_793604 + 1404));
        sub_5B31B0(*((_DWORD *)this + 8), v3, -1);
        sub_5A7EA0((_DWORD **)dword_7935F8);
      }
      if ( dword_7935F0 >= dword_7935E8 && dword_7935F0 >= dword_7935E4 )
      {
        if ( *(this + 37) )
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 2);
        else
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 4);
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 1);
      }
      result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 28))(this, 4);
      break;
    case 2:
      dword_7935F0 = 0;
      sub_5EAF00(5039);
      sub_5EAF00(5038);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
      dword_7935E8 = sub_5EB240(v6);
      dword_7935E4 = sub_5EB240(v7);
      result = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 8))(this, 3, 4);
      break;
    case 3:
      if ( ++dword_7935F0 <= dword_7935E8 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 176))(v6, dword_7935F0);
      if ( dword_7935F0 <= dword_7935E4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 176))(v7, dword_7935F0);
      if ( dword_7935F0 == 3 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 68) + 112))(*(_DWORD *)(dword_7935F8 + 68));
      }
      else if ( dword_7935F0 == v9 )
      {
        sub_5EAF00(5041);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 68) + 116))(*(_DWORD *)(dword_7935F8 + 68));
      }
      if ( dword_7935F0 >= dword_7935E8 && dword_7935F0 >= dword_7935E4 )
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 4);
      else
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 4))(this, 3);
      result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 28))(this, 4);
      break;
    case 4:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 108))(v6, 151);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 108))(v7, 150);
      if ( *((_DWORD *)this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 28))(*((_DWORD *)this + 4), 0);
        result = sub_5FC420(0);
      }
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1333);
      break;
  }
  return result;
}


//======================================================================
// sub_5AB410
// entry 005ab410  size 121  status ok
//======================================================================

_DWORD *__thiscall sub_5AB410(void *this)
{
  _DWORD *v2; // [esp+0h] [ebp-4h]

  sub_5F49D0(this);
  *v2 = &RoyalMatchFlickPad::`vftable';
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[5] = 0;
  v2[4] = 0;
  v2[6] = 640;
  v2[7] = 480;
  v2[22] = 0;
  return v2;
}


//======================================================================
// sub_5AB4B0
// entry 005ab4b0  size 424  status ok
//======================================================================

int __thiscall sub_5AB4B0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-18h]
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v7 = sub_5B4F00(dword_793604);
  v5 = sub_5B4E50(v7);
  v4 = abs(*(this + 20) - *(this + 18));
  if ( v4 < 50 )
    v4 = 0;
  result = *(this + 21) - *(this + 19);
  v6 = result;
  if ( result < 50 )
    v6 = 0;
  v2 = *(this + 22);
  if ( v2 == 8 )
  {
    if ( v4 > v6 && (unsigned __int8)sub_5AD1F0(v7, 0, 1) )
      return sub_5A7080((int *)dword_7935F8);
    result = v6;
    if ( v6 > v4 )
    {
      result = sub_5B6170(v7);
      if ( !(_BYTE)result )
      {
        result = sub_5AD1F0(v7, 1, 1);
        if ( (_BYTE)result )
          return sub_5A7080((int *)dword_7935F8);
      }
    }
  }
  else
  {
    if ( v2 != 16 )
      return sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1398);
    if ( v4 > v6 )
    {
      result = sub_5B3710(v7, v5);
      if ( (_BYTE)result )
      {
        result = sub_5AD1F0(v7, 3, 1);
        if ( (_BYTE)result )
          return sub_5A7080((int *)dword_7935F8);
      }
    }
    if ( v6 > v4 )
    {
      result = sub_5B3430(v7);
      if ( (_BYTE)result )
      {
        result = (unsigned __int8)sub_5AD1F0(v7, 2, 1);
        if ( (_BYTE)result )
          return sub_5A7080((int *)dword_7935F8);
      }
    }
  }
  return result;
}


//======================================================================
// sub_5AB660
// entry 005ab660  size 392  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_5AB660(int this, int a2)
{
  const struct tagVIDEOINFO *result; // eax
  int v3; // eax
  int v4; // [esp+0h] [ebp-18h]
  bool v5; // [esp+4h] [ebp-14h]
  CImageDisplay *v7; // [esp+Ch] [ebp-Ch]

  result = (const struct tagVIDEOINFO *)a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = (const struct tagVIDEOINFO *)sub_5B4F00(dword_793604);
    if ( result != (const struct tagVIDEOINFO *)-1 )
    {
      result = (const struct tagVIDEOINFO *)sub_5B4F00(dword_793604);
      if ( result != (const struct tagVIDEOINFO *)4 )
      {
        v3 = sub_5B4F00(dword_793604);
        v7 = (CImageDisplay *)sub_5DCB00(v3);
        result = CImageDisplay::GetDisplayFormat(v7);
        v5 = 1;
        if ( result->rcSource.left != 2 )
        {
          result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(v7)->rcSource.left;
          if ( result != (const struct tagVIDEOINFO *)3 )
            v5 = 0;
        }
        if ( v5 && *(_DWORD *)(dword_7935F8 + 52) )
        {
          result = (const struct tagVIDEOINFO *)a2;
          v4 = *(_DWORD *)(a2 + 24);
          if ( v4 == 1 )
          {
            result = (const struct tagVIDEOINFO *)(*(_DWORD *)(a2 + 28) & 0x18);
            if ( result )
            {
              result = (const struct tagVIDEOINFO *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 168))(this);
              if ( !(_BYTE)result )
              {
                *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 8);
                *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 12);
                *(_BYTE *)(this + 8) = 1;
                result = (const struct tagVIDEOINFO *)this;
                *(_BYTE *)(this + 9) = 1;
                if ( (*(_DWORD *)(a2 + 28) & 8) != 0 )
                {
                  *(_DWORD *)(this + 88) = 8;
                  return (const struct tagVIDEOINFO *)this;
                }
                else if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
                {
                  result = (const struct tagVIDEOINFO *)this;
                  *(_DWORD *)(this + 88) = 16;
                }
              }
            }
          }
          else if ( v4 == 2 )
          {
            result = (const struct tagVIDEOINFO *)(*(_DWORD *)(this + 88) & *(_DWORD *)(a2 + 28));
            if ( result )
            {
              result = (const struct tagVIDEOINFO *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 168))(this);
              if ( (_BYTE)result )
              {
                *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 8);
                *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 12);
                sub_5AB4B0((_DWORD *)this);
                *(_BYTE *)(this + 8) = 0;
                *(_BYTE *)(this + 9) = 0;
                return (const struct tagVIDEOINFO *)this;
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
// sub_5AB8A0
// entry 005ab8a0  size 1058  status ok
//======================================================================

int __thiscall sub_5AB8A0(int *this)
{
  int result; // eax
  __int16 v2; // ax
  int v3; // eax
  _DWORD *v4; // [esp+4h] [ebp-30h]
  _BYTE *v5; // [esp+8h] [ebp-2Ch]
  _DWORD *v7; // [esp+18h] [ebp-1Ch]
  _BYTE *v8; // [esp+20h] [ebp-14h]

  result = unknown_libname_843(this);
  switch ( result )
  {
    case 0:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 1);
      result = (*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
      break;
    case 1:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 2);
      if ( *(int *)(*(_DWORD *)(dword_793604 + 1404) + 2056) < 0 )
        sub_5B7F70(dword_793604);
      if ( *(_DWORD *)(dword_793604 + 1468) != 2 )
        goto LABEL_21;
      result = sub_5CD7C0(52250, this, 0);
      break;
    case 2:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 3);
      if ( !(unsigned __int8)sub_5ABCE0(this) )
        goto LABEL_21;
      v8 = operator new(0x24u);
      if ( v8 )
        v5 = sub_5AA670(v8, 1, (int)this);
      else
        v5 = 0;
      result = sub_5FC420(v5);
      break;
    case 3:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 4);
      if ( !(unsigned __int8)sub_5ABCE0(this) )
      {
        v2 = sub_6436C0(*(_DWORD *)(dword_793604 + 1404));
        sub_5B31B0(*(this + 9), v2, -1);
        sub_5A7EA0((_DWORD **)dword_7935F8);
        if ( (unsigned __int8)sub_5B6740(dword_793604) )
        {
          sub_5EAF00(5041);
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 68) + 116))(*(_DWORD *)(dword_7935F8 + 68));
        }
        goto LABEL_21;
      }
      v7 = operator new(0x28u);
      if ( v7 )
        v4 = sub_5AADF0(v7, *(this + 9), 1, (int)this);
      else
        v4 = 0;
      result = sub_5FC420(v4);
      break;
    case 4:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 5);
      if ( !(unsigned __int8)sub_5ABCE0(this) )
        goto LABEL_21;
      result = sub_5AA380((int)this);
      break;
    case 5:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 6);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 64) + 112))(*(_DWORD *)(dword_7935F8 + 64));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 60) + 112))(*(_DWORD *)(dword_7935F8 + 60));
      *(_BYTE *)(dword_793604 + 1472) = 0;
      if ( (unsigned __int8)sub_5B3300(*(this + 9), -1) )
      {
        if ( *(this + 9) == 4 )
        {
          result = sub_5CD7C0(52125, this, 0);
        }
        else
        {
          v3 = sub_5B4E50(*(this + 9));
          sub_5AC560(v3, 1);
          result = sub_5CD7C0(52325, this, 0);
        }
      }
      else if ( *(this + 9) == 4 || *(_DWORD *)(dword_793604 + 1468) == 2 || (unsigned __int8)sub_5B6170(*(this + 9)) )
      {
LABEL_21:
        result = (*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
      }
      else
      {
        sub_5B7310(11, 2);
        result = sub_5AD620(this);
      }
      break;
    case 6:
      if ( *(this + 4) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 28))(*(this + 4), 0);
        result = sub_5FC420(0);
      }
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1560);
      break;
  }
  return result;
}


//======================================================================
// sub_5ABCE0
// entry 005abce0  size 142  status ok
//======================================================================

bool __thiscall sub_5ABCE0(_BYTE *this)
{
  return sub_5EB240(*(_DWORD *)(dword_7935F8 + 60)) > 0
      && sub_5EB240(*(_DWORD *)(dword_7935F8 + 64)) > 0
      && sub_5EB240(*(_DWORD *)(dword_7935F8 + 68)) > 0
      && (unsigned __int8)sub_637630(dword_162EE84)
      && !byte_795F94
      && !*(this + 32)
      && !*(_BYTE *)(dword_793604 + 1472);
}


//======================================================================
// sub_5ABD70
// entry 005abd70  size 48  status ok
//======================================================================

_DWORD *__thiscall sub_5ABD70(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &RoyalMatchInsuranceDialog::`vftable';
  *(this + 111) = 0;
  return this;
}


//======================================================================
// sub_5ABDC0
// entry 005abdc0  size 169  status ok
//======================================================================

int __stdcall sub_5ABDC0(int a1)
{
  int v2; // [esp+4h] [ebp-20h]

  sub_5A7130((_DWORD *)dword_7935F8);
  if ( operator new(0x24u) )
    v2 = sub_5ACB70(6 - (a1 == 0));
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_5ABE70
// entry 005abe70  size 303  status ok
//======================================================================

int __thiscall sub_5ABE70(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  sub_5F83D0(3200243, 0);
  CMFCTabCtrl::HideInactiveWindow((CMFCTabCtrl *)this, 20);
  v1 = sub_630F40("SID_ROYALMATCH_INSURANCE");
  sub_5F73E0(v1, 73, 0, 3);
  v2 = sub_630F40("SID_ROYALMATCH_WANTINSURANCE");
  sub_5FA5B0(0, 0, v2, 31, 217, 85, 18, 38, 1, 48, -1);
  v3 = sub_630F40("SID_GENERIC_YES");
  sub_5F9DE0(0, 0, 3200222, 45, 125, 2, v3, 72, 75, 74, -1, 121);
  v4 = sub_630F40("SID_GENERIC_NO");
  sub_5F9DE0(0, 1, 3200222, 132, 125, 2, v4, 72, 75, 74, -1, 110);
  *(_DWORD *)(this + 444) = sub_5F9CE0(0, 0, 5016, 117, 137, 3, 0, 255, 0);
  sub_5EB5D0(100);
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 444) + 112))(*(_DWORD *)(this + 444));
  *(_BYTE *)(this + 448) = 1;
  return result;
}


//======================================================================
// sub_5ABFA0
// entry 005abfa0  size 162  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5ABFA0(ATL::CCRTHeap *this)
{
  int k; // [esp+4h] [ebp-Ch]
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoyalMatchPlayerDisplay::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 22; ++j )
      *((_DWORD *)this + 22 * i + j + 10) = 0;
  }
  for ( k = 0; k < 4; ++k )
  {
    *((_DWORD *)this + k + 2) = 0;
    *((_DWORD *)this + k + 6) = 0;
  }
  return this;
}


//======================================================================
// sub_5AC050
// entry 005ac050  size 326  status ok
//======================================================================

void __thiscall sub_5AC050(CNoTrackObject *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+28h] [ebp-1Ch]
  int k; // [esp+2Ch] [ebp-18h]
  int j; // [esp+30h] [ebp-14h]
  int i; // [esp+34h] [ebp-10h]

  *(_DWORD *)this = &RoyalMatchPlayerDisplay::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 22; ++j )
    {
      if ( *((_DWORD *)this + 22 * i + j + 10) )
      {
        v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 22 * i + j + 10);
        (**v2)(v2, 1);
      }
    }
  }
  for ( k = 0; k < 4; ++k )
  {
    if ( *((_DWORD *)this + k + 2) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 2))(*((_DWORD *)this + k + 2), 1);
    if ( *((_DWORD *)this + k + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 6))(*((_DWORD *)this + k + 6), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5AC1A0
// entry 005ac1a0  size 80  status ok
//======================================================================

int __thiscall sub_5AC1A0(int *this, int a2)
{
  if ( *(this + 1) == 4 )
    return sub_5A7240(*(this + 1), a2, 0) - 27;
  else
    return sub_5A7240(*(this + 1), a2, 0) - 1;
}


//======================================================================
// sub_5AC1F0
// entry 005ac1f0  size 80  status ok
//======================================================================

int __thiscall sub_5AC1F0(int *this, int a2)
{
  if ( *(this + 1) == 4 )
    return sub_5A7460(*(this + 1), a2, 0) + 2;
  else
    return sub_5A7460(*(this + 1), a2, 0) - 19;
}


//======================================================================
// sub_5AC240
// entry 005ac240  size 538  status ok
//======================================================================

_DWORD *__thiscall sub_5AC240(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-40h]
  int v6; // [esp+8h] [ebp-3Ch]
  int v7; // [esp+Ch] [ebp-38h]
  void *v9; // [esp+14h] [ebp-30h]
  void *v10; // [esp+1Ch] [ebp-28h]
  void *v11; // [esp+24h] [ebp-20h]
  int k; // [esp+2Ch] [ebp-18h]
  int j; // [esp+30h] [ebp-14h]
  int i; // [esp+34h] [ebp-10h]

  result = this;
  *(this + 1) = a2;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 22; ++j )
    {
      v11 = operator new(0x178u);
      if ( v11 )
      {
        sub_5EAAF0(v11);
        v7 = v3;
      }
      else
      {
        v7 = 0;
      }
      *(this + 22 * i + j + 10) = v7;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 22 * i + j + 10) + 64))(*(this + 22 * i + j + 10));
      result = (_DWORD *)(j + 1);
    }
  }
  for ( k = 0; k < 4; ++k )
  {
    v10 = operator new(0x1D4u);
    if ( v10 )
      v6 = sub_5CD360(v10);
    else
      v6 = 0;
    *(this + k + 2) = v6;
    sub_5EC8F0(&Source, 4, 30, 15, 0, 0, 120, 48, -1);
    sub_5EE8C0(255, 255, 204);
    v9 = operator new(0x178u);
    if ( v9 )
    {
      sub_5EAAF0(v9);
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    *(this + k + 6) = v5;
    result = (_DWORD *)sub_5EAE80(5042, 0, 0, 80, -1);
  }
  return result;
}


//======================================================================
// sub_5AC460
// entry 005ac460  size 182  status ok
//======================================================================

int __thiscall sub_5AC460(_DWORD *this)
{
  if ( *(this + 1) != 4 )
  {
    if ( sub_639110(*(this + 1)) )
    {
      sub_639110(*(this + 1));
      sub_646380(100);
      sub_639110(*(this + 1));
      sub_6464D0(0, 0);
    }
    sub_5D8F50(*(this + 1));
  }
  sub_5AC520(this);
  sub_5AC620(this);
  sub_5AC850(this);
  if ( (unsigned __int8)sub_5B7D10(dword_793604) )
    return sub_5A84C0((_DWORD *)dword_7935F8);
  else
    return sub_5A7100((_DWORD *)dword_7935F8);
}


//======================================================================
// sub_5AC520
// entry 005ac520  size 53  status ok
//======================================================================

int sub_5AC520()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    sub_5AC560(i, 0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5AC560
// entry 005ac560  size 177  status ok
//======================================================================

void __thiscall sub_5AC560(int *this, int a2, char a3)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 22; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 22 * a2 + i + 10) + 112))(*(this + 22 * a2 + i + 10));
  for ( j = 0; j < 22; ++j )
  {
    if ( (unsigned __int16)sub_5B5C60(*(this + 1), a2, j) )
      sub_5A82A0((_DWORD *)dword_7935F8, *(this + 1), a2, j, a3);
  }
}


//======================================================================
// sub_5AC620
// entry 005ac620  size 558  status ok
//======================================================================

signed int __thiscall sub_5AC620(int this)
{
  signed int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // [esp-4h] [ebp-50h]
  int v6; // [esp+4h] [ebp-48h]
  int v7; // [esp+8h] [ebp-44h]
  char Buffer[52]; // [esp+Ch] [ebp-40h] BYREF
  int j; // [esp+44h] [ebp-8h]
  int i; // [esp+48h] [ebp-4h]

  if ( *(_DWORD *)(this + 4) != 4
    || (int)sub_5B5830(4, 0) >= 3
    || (result = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 40)), result != 53) )
  {
    for ( i = 0; i < 4; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
    for ( j = 0; ; ++j )
    {
      result = sub_5B58F0(*(_DWORD *)(this + 4));
      if ( j >= result )
        break;
      v7 = sub_5B5260(*(_DWORD *)(this + 4), j);
      v6 = sub_5B4F50(*(_DWORD *)(this + 4), j);
      if ( *(_DWORD *)(this + 4) == 4 )
      {
        v2 = sub_5B4F50(4, 0);
        sprintf(Buffer, "%d", v2);
      }
      else if ( v7 == v6 || v6 > 21 )
      {
        sprintf(Buffer, "%d", v7);
      }
      else
      {
        sprintf(Buffer, "%d/%d", v6, v7);
      }
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 4 * j + 8) + 180))(
        *(_DWORD *)(this + 4 * j + 8),
        Buffer);
      v4 = sub_5AC1F0((int *)this, j);
      v3 = sub_5AC1A0((int *)this, j);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * j + 8) + 68))(
        *(_DWORD *)(this + 4 * j + 8),
        v3,
        v4);
      if ( !(unsigned __int8)sub_5B7D50(dword_793604)
        || (int)sub_5B5830(*(_DWORD *)(this + 4), j) <= 1
        || CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 88 * j + 40)) == 53 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 8) + 112))(*(_DWORD *)(this + 4 * j + 8));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 8) + 116))(*(_DWORD *)(this + 4 * j + 8));
      }
    }
  }
  return result;
}


//======================================================================
// sub_5AC850
// entry 005ac850  size 763  status ok
//======================================================================

int __fastcall sub_5AC850(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int v7; // edi
  int v9; // [esp+10h] [ebp-18h]
  int v10; // [esp+14h] [ebp-14h]
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-Ch]
  int j; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  result = a1;
  if ( *(_DWORD *)(a1 + 4) != 4 )
  {
    for ( i = 0; i < 4; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * i + 24) + 112))(*(_DWORD *)(a1 + 4 * i + 24));
    for ( j = 0; ; ++j )
    {
      result = sub_5B58F0(*(_DWORD *)(a1 + 4));
      if ( j >= result )
        break;
      switch ( sub_5B5010(*(_DWORD *)(a1 + 4), j) )
      {
        case 0:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4 * j + 24) + 176))(*(_DWORD *)(a1 + 4 * j + 24), 1);
          break;
        case 1:
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4 * j + 24) + 176))(
            *(_DWORD *)(a1 + 4 * j + 24),
            0);
          break;
        case 2:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4 * j + 24) + 176))(*(_DWORD *)(a1 + 4 * j + 24), 3);
          break;
        case 5:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4 * j + 24) + 176))(*(_DWORD *)(a1 + 4 * j + 24), 4);
          break;
        case 6:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4 * j + 24) + 176))(*(_DWORD *)(a1 + 4 * j + 24), 2);
          break;
        case 7:
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4 * j + 24) + 176))(*(_DWORD *)(a1 + 4 * j + 24), 5);
          break;
        default:
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * j + 24) + 112))(*(_DWORD *)(a1 + 4 * j + 24));
          break;
      }
      if ( sub_5B5010(*(_DWORD *)(a1 + 4), j) != -1 )
      {
        v9 = *(_DWORD *)(a1 + 88 * j + 40);
        v10 = *(_DWORD *)(a1 + 88 * j + 40 + 4 * sub_5B5830(*(_DWORD *)(a1 + 4), j) - 4);
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 76))(v10);
        v4 = sub_5F5550(v10) + v3;
        v11 = (v4 - (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9)) / 2 + v2;
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 84))(v10);
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 84))(v9);
        v7 = sub_5F5590(v9) + v6;
        v13 = (v7 - (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 84))(v10)) / 2 + v5;
        v12 = v11 - sub_5F5550(*(_DWORD *)(a1 + 4 * j + 24)) / 2;
        v14 = v13 - sub_5F5590(*(_DWORD *)(a1 + 4 * j + 24)) / 2;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4 * j + 24) + 68))(
          *(_DWORD *)(a1 + 4 * j + 24),
          v12,
          v14);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * j + 24) + 116))(*(_DWORD *)(a1 + 4 * j + 24));
      }
    }
  }
  return result;
}


//======================================================================
// sub_5ACB70
// entry 005acb70  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5ACB70(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &RoyalMatchSayHumanLineScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_5ACBA0
// entry 005acba0  size 519  status ok
//======================================================================

int __thiscall sub_5ACBA0(int *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-48h]
  int v4; // [esp+Ch] [ebp-3Ch]
  CImageDisplay *v6; // [esp+14h] [ebp-34h]
  int v7; // [esp+20h] [ebp-28h] BYREF
  int v8; // [esp+24h] [ebp-24h]
  int v9; // [esp+28h] [ebp-20h]
  double v10; // [esp+30h] [ebp-18h]
  double v11; // [esp+38h] [ebp-10h]
  int v12; // [esp+44h] [ebp-4h]

  v12 = sub_5B4F00(dword_793604);
  v4 = unknown_libname_843(this);
  if ( v4 )
  {
    if ( v4 != 1 )
      return sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1926);
    sub_5FC420(0);
    v2 = *(this + 8);
    if ( v2 < 5 || v2 > 6 )
    {
      result = sub_5AD1F0(v12, *(this + 8), 1);
      if ( !(_BYTE)result )
        return result;
    }
    else
    {
      sub_5B73E0(v12, *(this + 8) == 5);
    }
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  else
  {
    (*(void (__thiscall **)(int *, int))(*this + 4))(this, 1);
    v8 = -1;
    if ( v12 != -1 )
    {
      v6 = (CImageDisplay *)sub_5DCB00(v12);
      if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
      {
        v7 = v12;
        v9 = -1;
        v10 = 0.0;
        v11 = 1.0;
        switch ( *(this + 8) )
        {
          case 0:
            v8 = 2005;
            break;
          case 1:
            v8 = 2000;
            break;
          case 2:
            v8 = 2002;
            break;
          case 3:
            v8 = 2004;
            break;
          case 4:
            v8 = 2096;
            break;
          case 5:
            v8 = 2008;
            break;
          case 6:
            v8 = 2095;
            break;
          default:
            sub_5E9F20((char)"false", "..\\Casino\\royalmatchdisplay.cpp", 1894);
            break;
        }
      }
    }
    if ( v8 == -1 )
      return (*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
    else
      return sub_639390(&v7, this, 0, 0);
  }
}


//======================================================================
// sub_5ACF90
// entry 005acf90  size 263  status ok
//======================================================================

int __thiscall sub_5ACF90(_BYTE *this, int a2)
{
  CImageDisplay *v4; // [esp+8h] [ebp-10h]
  char v5; // [esp+17h] [ebp-1h]

  if ( *(this + 8) )
  {
    v4 = (CImageDisplay *)sub_5DCB00(a2);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      return sub_5A8610((_DWORD *)dword_7935F8);
    }
    else
    {
      v5 = sub_5A6BB0(a2);
      sub_5B73E0(a2, v5);
      if ( v5 )
        sub_5B7310(0, a2);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
               *(_DWORD *)(dword_793600 + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 8) = 1;
    sub_5B7310(8, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_5AD0A0
// entry 005ad0a0  size 329  status ok
//======================================================================

int sub_5AD0A0()
{
  __int64 v1; // [esp+8h] [ebp-34h]
  _BYTE *v2; // [esp+14h] [ebp-28h]
  _BYTE *v3; // [esp+1Ch] [ebp-20h]
  int i; // [esp+2Ch] [ebp-10h]

  sub_5F2870(dword_162EE80);
  for ( i = 0; i < 4; ++i )
  {
    v1 = sub_64C8A0(0, 0);
    sub_5DCB00(i);
    sub_5D6050(v1, HIDWORD(v1));
  }
  if ( (unsigned __int8)sub_5B6740(dword_793604) )
  {
    sub_5B7EF0(dword_793604);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793600 + 4) + 4))(*(_DWORD *)(dword_793600 + 4), 1);
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             4019,
             *(_DWORD *)(dword_793600 + 4),
             0,
             5,
             1,
             1.0,
             0.5,
             0);
  }
  else
  {
    v3 = operator new(0x28u);
    if ( v3 )
      v2 = sub_5AA980(v3);
    else
      v2 = 0;
    return sub_5DA390(v2);
  }
}


//======================================================================
// sub_5AD1F0
// entry 005ad1f0  size 751  status ok
//======================================================================

char __thiscall sub_5AD1F0(_BYTE *this, int a2, int a3, char a4)
{
  int v5; // [esp+4h] [ebp-40h]
  int v6; // [esp+8h] [ebp-3Ch]
  bool v7; // [esp+10h] [ebp-34h]
  CImageDisplay *v9; // [esp+18h] [ebp-2Ch]
  Concurrency::details::_TaskCollection *v10; // [esp+24h] [ebp-20h]
  Concurrency::details::_TaskCollection *v11; // [esp+2Ch] [ebp-18h]
  int v12; // [esp+34h] [ebp-10h]

  v12 = sub_5B4E50(a2);
  if ( a3 == -1 )
    a3 = *(_DWORD *)(dword_793604 + 1468);
  v9 = (CImageDisplay *)sub_5DCB00(a2);
  v7 = CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3;
  if ( v7 && (unsigned __int8)sub_5DF7B0(-1) && a4 && !*(this + 25) && a3 != sub_5A4B20((void *)dword_7935F4, a2) )
  {
    sub_5A80D0((_DWORD *)dword_7935F8);
    *(this + 25) = 1;
    sub_57C140(dword_793578);
    return 0;
  }
  else
  {
    *(this + 25) = 0;
    *(_DWORD *)(dword_793604 + 1468) = a3;
    *(this + 13) = 1;
    switch ( a3 )
    {
      case 0:
        sub_5AEE50(a2);
        break;
      case 1:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793600 + 4) + 4))(*(_DWORD *)(dword_793600 + 4), 1);
        v11 = (Concurrency::details::_TaskCollection *)operator new(0x28u);
        if ( v11 )
          v6 = Concurrency::details::_TaskCollection::_TaskCollection(
                 v11,
                 *(struct Concurrency::details::_CancellationTokenState **)(dword_793600 + 4));
        else
          v6 = 0;
        sub_5FC420(v6);
        break;
      case 2:
        sub_5B3EE0(a2, v12);
        sub_5A7EA0((_DWORD **)dword_7935F8);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793600 + 4) + 4))(*(_DWORD *)(dword_793600 + 4), 1);
        v10 = (Concurrency::details::_TaskCollection *)operator new(0x28u);
        if ( v10 )
          v5 = Concurrency::details::_TaskCollection::_TaskCollection(
                 v10,
                 *(struct Concurrency::details::_CancellationTokenState **)(dword_793600 + 4));
        else
          v5 = 0;
        sub_5FC420(v5);
        break;
      case 3:
        sub_5B8090(a2, v12);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7935F8 + 4 * a2 + 24) + 116))(*(_DWORD *)(dword_7935F8 + 4 * a2 + 24));
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
          *(_DWORD *)(dword_793600 + 4),
          1,
          0);
        break;
      case 4:
        sub_5B81F0(a2);
        sub_5AEE50(a2);
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\royalmatchgame.cpp", 187);
        break;
    }
    return 1;
  }
}


//======================================================================
// sub_5AD500
// entry 005ad500  size 288  status ok
//======================================================================

int __thiscall sub_5AD500(_BYTE *this)
{
  int v3; // [esp+4h] [ebp-4h]

  if ( *(this + 9) )
  {
    v3 = sub_5B5590(dword_793604);
    if ( v3 == -1 )
    {
      sub_5B70E0(-1, 0);
      return sub_5A8590((void *)dword_7935F8);
    }
    else
    {
      sub_5B70E0(v3, 0);
      if ( *(this + 10) )
      {
        *(this + 10) = 0;
        sub_5B3CE0(v3);
      }
      else
      {
        *(this + 10) = 1;
        sub_5B7310(2, v3);
      }
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
               *(_DWORD *)(dword_793600 + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 9) = 1;
    sub_5A82A0((_DWORD *)dword_7935F8, 4, 0, 0, 0);
    sub_5B7310(9, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_5AD620
// entry 005ad620  size 5092  status ok
//======================================================================

int __thiscall sub_5AD620(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+4h] [ebp-1ACh]
  int v13; // [esp+8h] [ebp-1A8h]
  bool v18; // [esp+24h] [ebp-18Ch]
  int v19; // [esp+28h] [ebp-188h]
  int v23; // [esp+38h] [ebp-178h]
  bool v27; // [esp+48h] [ebp-168h]
  int v30; // [esp+54h] [ebp-15Ch]
  CImageDisplay *v36; // [esp+74h] [ebp-13Ch]
  CImageDisplay *v37; // [esp+80h] [ebp-130h]
  CImageDisplay *v38; // [esp+8Ch] [ebp-124h]
  CImageDisplay *v39; // [esp+98h] [ebp-118h]
  CImageDisplay *v40; // [esp+A4h] [ebp-10Ch]
  CImageDisplay *v41; // [esp+B0h] [ebp-100h]
  CImageDisplay *v42; // [esp+BCh] [ebp-F4h]
  CImageDisplay *v43; // [esp+C8h] [ebp-E8h]
  CImageDisplay *v44; // [esp+D4h] [ebp-DCh]
  CImageDisplay *v45; // [esp+E0h] [ebp-D0h]
  CImageDisplay *v46; // [esp+ECh] [ebp-C4h]
  CImageDisplay *v47; // [esp+F8h] [ebp-B8h]
  CImageDisplay *v48; // [esp+104h] [ebp-ACh]
  CImageDisplay *v49; // [esp+110h] [ebp-A0h]
  CImageDisplay *v50; // [esp+11Ch] [ebp-94h]
  CImageDisplay *v51; // [esp+128h] [ebp-88h]
  CImageDisplay *v52; // [esp+134h] [ebp-7Ch]
  CImageDisplay *v53; // [esp+140h] [ebp-70h]
  int k; // [esp+14Ch] [ebp-64h]
  int v55; // [esp+150h] [ebp-60h]
  int j; // [esp+158h] [ebp-58h]
  int i; // [esp+15Ch] [ebp-54h]
  int v58; // [esp+160h] [ebp-50h]
  int v59; // [esp+164h] [ebp-4Ch]
  char v60; // [esp+16Bh] [ebp-45h]
  int v61; // [esp+16Ch] [ebp-44h]
  int v62; // [esp+170h] [ebp-40h]
  int v63; // [esp+174h] [ebp-3Ch]
  _DWORD v64[4]; // [esp+178h] [ebp-38h] BYREF
  double v65; // [esp+188h] [ebp-28h]
  double v66; // [esp+190h] [ebp-20h]
  double v67; // [esp+198h] [ebp-18h]
  double v68; // [esp+1A0h] [ebp-10h]
  int v69; // [esp+1ACh] [ebp-4h]

  v60 = 1;
  v61 = sub_5B5CB0(dword_793604);
  v62 = -1;
  v59 = -1;
  v69 = sub_5B4F00(dword_793604);
  v67 = 0.0;
  v68 = 1.0;
  v58 = -1;
  v63 = -1;
  switch ( sub_5B5240(dword_793604) )
  {
    case 0:
      v63 = 2008;
      break;
    case 1:
      switch ( *(_DWORD *)(dword_793604 + 1468) )
      {
        case 0:
          v63 = 2005;
          v51 = (CImageDisplay *)sub_5DCB00(v61);
          if ( CImageDisplay::GetDisplayFormat(v51)->rcSource.left != 2
            && CImageDisplay::GetDisplayFormat(v51)->rcSource.left != 3 )
          {
            if ( (int)sub_5B4F50(v61, -1) <= 16 || (int)sub_5B4F50(v61, -1) >= 20 )
            {
              if ( (int)sub_5B4F50(v61, -1) > 19 && (int)sub_5B4F50(v61, -1) < 22 )
                v63 = 2007;
            }
            else
            {
              v63 = 2006;
            }
          }
          break;
        case 1:
          v63 = 2000;
          break;
        case 2:
          v63 = 2002;
          break;
        case 3:
          v63 = 2004;
          break;
        case 4:
          v63 = 1026;
          v50 = (CImageDisplay *)sub_5DCB00(v61);
          if ( CImageDisplay::GetDisplayFormat(v50)->rcSource.left != 2
            && CImageDisplay::GetDisplayFormat(v50)->rcSource.left != 3 )
          {
            v58 = 1014;
            sub_5B73A0(v69, 2);
            v60 = 0;
          }
          break;
        default:
          sub_5E9F20((char)"false", "..\\Casino\\royalmatchgame.cpp", 309);
          break;
      }
      break;
    case 2:
      if ( sub_5B4F50(v69, -1) == 21 )
      {
        sub_5B73A0(v69, 1);
        v53 = (CImageDisplay *)sub_5DCB00(v69);
        if ( CImageDisplay::GetDisplayFormat(v53)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v53)->rcSource.left == 3 )
        {
          v63 = 1037;
          v68 = 0.5;
        }
      }
      else
      {
        sub_5B73A0(v69, 2);
        v52 = (CImageDisplay *)sub_5DCB00(v69);
        if ( CImageDisplay::GetDisplayFormat(v52)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v52)->rcSource.left == 3 )
        {
          v63 = 1000;
          v68 = 0.25;
        }
        else
        {
          v63 = 1025;
          v58 = 1026;
          v67 = 0.4;
          v68 = 0.5;
        }
      }
      break;
    case 3:
      v63 = 2003;
      break;
    case 4:
      v30 = *(_DWORD *)(dword_793604 + 1468);
      if ( v30 == 1 )
      {
        v60 = sub_5B58A0(dword_793604) != 1;
        if ( (unsigned __int8)sub_5B3300(v69, -1) )
        {
          sub_5B73A0(v69, 2);
          v49 = (CImageDisplay *)sub_5DCB00(v69);
          if ( CImageDisplay::GetDisplayFormat(v49)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v49)->rcSource.left == 3 )
          {
            v63 = 1000;
            v58 = 1039;
          }
          else
          {
            v63 = 2001;
            v58 = 1026;
          }
          v67 = 0.4;
          v68 = 0.75;
        }
        else if ( sub_5B58A0(dword_793604) != 1 )
        {
          if ( sub_5B4F50(v69, -1) == 21 )
          {
            sub_5B73A0(v69, 1);
            v48 = (CImageDisplay *)sub_5DCB00(v69);
            if ( CImageDisplay::GetDisplayFormat(v48)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v48)->rcSource.left == 3 )
            {
              v63 = 1008;
              v58 = 2012;
              v67 = 0.5;
            }
            else
            {
              v63 = 1028;
              v58 = 1012;
              v67 = 0.2;
            }
            v68 = 0.5;
          }
          else
          {
            v47 = (CImageDisplay *)sub_5DCB00(v69);
            v27 = CImageDisplay::GetDisplayFormat(v47)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v47)->rcSource.left == 3;
            if ( v27 || (int)sub_5B4F50(v69, -1) <= 11 || (int)sub_5B4F50(v69, -1) >= 17 )
            {
              if ( (int)sub_5B4F50(v69, -1) <= 11 || (int)sub_5B4F50(v69, -1) >= 17 )
              {
                if ( (int)sub_5B5830(v69, -1) > 4 )
                {
                  v63 = 2010;
                  v68 = 0.5;
                }
              }
              else
              {
                v63 = 2011;
                v58 = 1000;
                v67 = 0.2;
                v68 = 0.25;
                sub_5B73A0(v69, 2);
              }
            }
            else
            {
              v63 = 1026;
              v58 = 1014;
              v67 = 0.5;
              v68 = 0.5;
              sub_5B73A0(v69, 2);
            }
          }
        }
      }
      else if ( v30 == 2 )
      {
        v60 = sub_5B58A0(dword_793604) != 1;
        if ( (unsigned __int8)sub_5B3300(v69, -1) )
        {
          sub_5B73A0(v69, 2);
          v46 = (CImageDisplay *)sub_5DCB00(v69);
          if ( CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 3 )
          {
            v63 = 1000;
          }
          else
          {
            v63 = 2001;
          }
          v68 = 0.5;
        }
        else if ( sub_5B58A0(dword_793604) != 1 )
        {
          if ( sub_5B4F50(v69, -1) == 21 )
          {
            sub_5B73A0(v69, 1);
            v45 = (CImageDisplay *)sub_5DCB00(v69);
            if ( CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 3 )
            {
              v63 = 2009;
              v58 = 1037;
            }
            else
            {
              v63 = 1028;
              v58 = 1012;
            }
            v67 = 0.4;
            v68 = 0.5;
          }
          else if ( (int)sub_5B4F50(v69, -1) < 15 )
          {
            sub_5B73A0(v69, 2);
            v44 = (CImageDisplay *)sub_5DCB00(v69);
            if ( CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 3 )
            {
              v63 = 1033;
              v58 = 1039;
            }
            else
            {
              v63 = 1025;
              v58 = 1014;
            }
            v67 = 0.2;
            v68 = 0.5;
          }
        }
      }
      break;
    case 5:
      for ( i = 3; i > -1; --i )
      {
        if ( sub_5B5010(v69, i) != -1 )
        {
          v23 = sub_5B5010(v69, i);
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              sub_5B73A0(v69, 1);
              v43 = (CImageDisplay *)sub_5DCB00(v69);
              if ( CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 2
                || CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 3 )
              {
                v63 = 1008;
                v58 = 1037;
                v67 = 0.2;
                v68 = 0.5;
              }
              else
              {
                if ( *(int *)(sub_5DCB00(v69) + 1192) <= 5 )
                  v63 = 1020;
                else
                  v63 = 1024;
                v58 = 1028;
                v67 = 0.4;
                v68 = 0.5;
              }
            }
          }
          else
          {
            sub_5B73A0(v69, 2);
            v42 = (CImageDisplay *)sub_5DCB00(v69);
            if ( CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 3 )
            {
              v63 = 1000;
              v58 = 1039;
              v67 = 0.2;
              v68 = 0.5;
            }
            else
            {
              if ( *(int *)(sub_5DCB00(v69) + 1192) >= -5 )
              {
                v63 = 1026;
              }
              else if ( sub_62FBF0(2) )
              {
                v63 = 1023;
              }
              else
              {
                v63 = 1009;
              }
              v58 = 1014;
              v67 = 0.2;
              v68 = 0.5;
            }
          }
          goto LABEL_231;
        }
      }
      break;
    case 6:
      if ( (unsigned __int8)sub_5DB190(dword_793600) )
      {
        if ( sub_5DAC90(dword_793600) != -1 )
        {
          v2 = sub_5DAC90(dword_793600);
          v41 = (CImageDisplay *)sub_5DCB00(v2);
          if ( CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 3 )
          {
            v19 = -1;
          }
          else
          {
            v19 = sub_5DAC90(dword_793600);
          }
          v61 = v19;
          v3 = sub_5DAC90(dword_793600);
          v40 = (CImageDisplay *)sub_5DCB00(v3);
          v18 = CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 3;
          v63 = v18 ? 1042 : 1021;
          v68 = 1.0;
        }
      }
      else if ( (int)sub_62FBF0(10) >= 6 )
      {
        v69 = sub_5DADA0(dword_793600);
        if ( v69 != -1 )
        {
          v4 = sub_5DCB00(v69);
          v5 = sub_5D5A50(v4);
          if ( v5 < sub_5DA880(dword_793600) / 10 )
          {
            v37 = (CImageDisplay *)sub_5DCB00(v69);
            if ( CImageDisplay::GetDisplayFormat(v37)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v37)->rcSource.left == 3 )
            {
              v63 = 1040;
            }
            else
            {
              v61 = v69;
              v63 = 1015;
            }
            v68 = 0.5;
          }
        }
        if ( v63 == -1 )
        {
          for ( j = 0; j < 4; ++j )
          {
            v6 = sub_5DCB00(j);
            if ( !sub_5D5A50(v6) && !*(this + j + 20) )
            {
              *(this + j + 20) = 1;
              v36 = (CImageDisplay *)sub_5DCB00(j);
              if ( CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 2
                || CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 3 )
              {
                v63 = 1038;
              }
              else
              {
                v61 = j;
                v63 = 1013;
              }
              v68 = 0.75;
              goto LABEL_231;
            }
          }
        }
      }
      else if ( sub_62FBF0(2) )
      {
        v69 = sub_5DAC90(dword_793600);
        if ( v69 != -1 )
        {
          v39 = (CImageDisplay *)sub_5DCB00(v69);
          if ( CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 3 )
          {
            v63 = 1035;
          }
          else
          {
            v61 = v69;
            v63 = 1010;
          }
          v68 = 0.25;
        }
      }
      else
      {
        v69 = sub_5DADA0(dword_793600);
        if ( v69 != -1 )
        {
          v38 = (CImageDisplay *)sub_5DCB00(v69);
          if ( CImageDisplay::GetDisplayFormat(v38)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v38)->rcSource.left == 3 )
          {
            v63 = 1036;
          }
          else
          {
            v61 = v69;
            v63 = 1011;
          }
          v68 = 0.25;
        }
      }
      break;
    case 7:
      v62 = 52050;
      break;
    case 8:
      v62 = 52150;
      break;
    case 9:
      v62 = 52200;
      break;
    case 10:
      v62 = 52101;
      break;
    case 11:
      v59 = 0;
      if ( (unsigned __int8)sub_5B7D50(dword_793604) && (sub_5B58A0(dword_793604) > 1 || sub_5B4F00(dword_793604) == -1) )
      {
        if ( v69 == -1 )
          v7 = sub_5B4F50(4, -1);
        else
          v7 = sub_5B4F50(v69, -1);
        v55 = v7;
        if ( v69 == -1 )
          v8 = sub_5B5260(4, -1);
        else
          v8 = sub_5B5260(v69, -1);
        if ( v8 == v55 || v55 > 19 )
          v62 = v55 + 51997;
        else
          v62 = v8 + 52017;
      }
      break;
    case 12:
      for ( k = 3; k > -1; --k )
      {
        if ( sub_5B5010(v69, k) != -1 )
        {
          v13 = sub_5B5010(v69, k);
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              v62 = 52225;
            }
            else if ( v13 == 2 )
            {
              v62 = 52175;
            }
          }
          else
          {
            v62 = 52075;
          }
          goto LABEL_231;
        }
      }
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\royalmatchgame.cpp", 677);
      break;
  }
LABEL_231:
  sub_5B7310(-1, -1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  if ( !a2 )
    a2 = *(_DWORD *)(dword_162EE80 + 4);
  if ( v61 == 4 )
  {
    if ( v62 == -1 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
    if ( v62 == 52200 || v62 == 52101 )
      *(_BYTE *)(*(_DWORD *)(dword_7935F8 + 44) + 400) = 1;
    if ( v59 == -1 )
      return sub_5CD7C0(v62, a2, 0);
    else
      return sub_5CD700(v62, v59, a2, 0);
  }
  else
  {
    if ( v63 == -1 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
    if ( v61 == -1 )
    {
      v10 = sub_5B5C90(0);
      v12 = sub_5B5CD0(v10);
    }
    else
    {
      v12 = v61;
    }
    v64[0] = v12;
    v64[1] = v63;
    v64[2] = v58;
    v65 = v67;
    v66 = v68;
    if ( v12 == -1 )
    {
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
               *(_DWORD *)(dword_793600 + 4),
               1,
               0);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793600 + 4) + 4))(*(_DWORD *)(dword_793600 + 4), 1);
      v11 = sub_637810(2);
      return sub_639390(v64, a2, v11, v60);
    }
  }
}


//======================================================================
// sub_5AEA50
// entry 005aea50  size 201  status ok
//======================================================================

int __thiscall sub_5AEA50(_BYTE *this, int a2)
{
  if ( *(this + 11) )
  {
    if ( *(this + 14) )
    {
      *(this + 11) = 0;
      *(this + 14) = 0;
      sub_5B3E60(a2);
    }
    else
    {
      *(this + 14) = 1;
      sub_5B7310(3, a2);
    }
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  else
  {
    *(this + 11) = 1;
    sub_5B7310(10, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_5AEB20
// entry 005aeb20  size 49  status ok
//======================================================================

int __thiscall sub_5AEB20(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    *(this + i + 20) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5AEB60
// entry 005aeb60  size 739  status ok
//======================================================================

int __thiscall sub_5AEB60(_BYTE *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  BOOL v8; // [esp+0h] [ebp-44h]
  CImageDisplay *v10; // [esp+14h] [ebp-30h]
  __int64 v11; // [esp+30h] [ebp-14h] BYREF
  int v12; // [esp+38h] [ebp-Ch]
  __int64 v13; // [esp+3Ch] [ebp-8h] BYREF

  v10 = (CImageDisplay *)sub_5DCB00(a2);
  v8 = CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3;
  if ( v8 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(dword_793578, 11, (int)&unk_753238);
      sub_5B7A70(*(_DWORD *)(dword_793604 + 1480));
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    v2 = sub_5DCB00(a2);
    if ( (unsigned __int8)sub_5D5840(v2) )
    {
      return sub_5DB7D0(0, 175);
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_793600) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return sub_5AF1B0(v8, this);
    }
    else
    {
      result = sub_5B7D70(a2);
      if ( (_BYTE)result )
      {
        v4 = sub_5DCB00(a2);
        return sub_5DBB70(v4);
      }
    }
  }
  else if ( *(this + 4) )
  {
    *(this + 4) = 0;
    sub_57AE30(dword_793578);
    v6 = sub_5DCB00(a2);
    if ( (unsigned __int8)sub_5D5840(v6) )
    {
      v7 = sub_5A5840((void *)dword_7935F4, a2);
      v13 = sub_64C8A0(v7, 0);
      (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_793604 + 4 * a2 + 1408) + 196))(
        *(_DWORD *)(dword_793604 + 4 * a2 + 1408),
        &v13,
        0,
        1);
      v12 = sub_5A6B70((void *)dword_7935F4, a2);
      if ( v12 > 0 )
      {
        v11 = sub_64C8A0(v12, 0);
        (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_793604 + 4 * a2 + 1588) + 196))(
          *(_DWORD *)(dword_793604 + 4 * a2 + 1588),
          &v11,
          0,
          1);
      }
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_793600) )
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
    v5 = sub_637810(2);
    return sub_5DA360(v5);
  }
  return result;
}


//======================================================================
// sub_5AEE50
// entry 005aee50  size 235  status ok
//======================================================================

int __thiscall sub_5AEE50(_BYTE *this, int a2)
{
  CImageDisplay *v4; // [esp+Ch] [ebp-Ch]

  if ( *(this + 16) )
  {
    *(this + 13) = 0;
    *(this + 16) = 0;
    sub_5B6C90(a2);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  else
  {
    *(this + 16) = 1;
    v4 = (CImageDisplay *)sub_5DCB00(a2);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      sub_5B7310(4, -1);
    }
    else
    {
      sub_5B7310(4, a2);
    }
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_5AEF40
// entry 005aef40  size 217  status ok
//======================================================================

int __thiscall sub_5AEF40(_BYTE *this, int a2)
{
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 11) = 0;
  *(this + 10) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 16) = 0;
  *(this + 18) = 0;
  *(this + 17) = 0;
  *(this + 19) = 0;
  *(this + 15) = 0;
  *(this + 24) = 0;
  *(this + 25) = 0;
  if ( a2 )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             500,
             a2);
  sub_5B6A60(dword_793604, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
           *(_DWORD *)(dword_793600 + 4),
           1,
           0);
}


//======================================================================
// sub_5AF020
// entry 005af020  size 394  status ok
//======================================================================

char __thiscall sub_5AF020(_BYTE *this, int a2)
{
  CImageDisplay *v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+14h] [ebp-4h]

  v6 = sub_5B4E50(a2);
  if ( sub_5B5830(a2, v6) == 1 )
    return sub_5AD1F0(this, a2, 1, 0);
  v5 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
  {
    *(this + 5) = 0;
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(dword_793578, 11, (int)&unk_756258);
      sub_5B74A0(dword_793604);
      sub_5B7600(dword_793604);
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    return sub_5A80D0((_DWORD *)dword_7935F8);
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(_DWORD *)(dword_793604 + 1468) == -1 )
      *(_DWORD *)(dword_793604 + 1468) = sub_5A4B20((void *)dword_7935F4, a2);
    if ( *(this + 12) )
    {
      *(this + 12) = 0;
      return sub_5AD1F0(this, a2, -1, 1);
    }
    else
    {
      *(this + 12) = 1;
      sub_5B7310(1, a2);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
               *(_DWORD *)(dword_793600 + 4),
               1,
               0);
    }
  }
}


//======================================================================
// sub_5AF1B0
// entry 005af1b0  size 1694  status ok
//======================================================================

char __thiscall sub_5AF1B0(_BYTE *this)
{
  int v3; // [esp+Ch] [ebp-44h]
  CImageDisplay *v5; // [esp+1Ch] [ebp-34h]
  CImageDisplay *v6; // [esp+28h] [ebp-28h]
  Concurrency::details::_TaskCollection *v7; // [esp+38h] [ebp-18h]
  int v8; // [esp+40h] [ebp-10h]
  int v9; // [esp+40h] [ebp-10h]
  int v10; // [esp+40h] [ebp-10h]
  int v11; // [esp+40h] [ebp-10h]
  int v12; // [esp+40h] [ebp-10h]
  int v13; // [esp+40h] [ebp-10h]

  if ( *((_BYTE *)dword_162EE84 + 37) )
    sub_5B7220(dword_793604);
  sub_5A7EA0((_DWORD **)dword_7935F8);
  sub_5A8730((void *)dword_7935F8, 0);
  if ( sub_5B5240(dword_793604) != -1 )
    return sub_5AD620(this, 0);
  if ( !*(this + 7) )
  {
    *(this + 7) = 1;
    sub_5B7310(7, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  v8 = sub_5B5380(dword_793604);
  if ( v8 != -1 )
  {
    v6 = (CImageDisplay *)sub_5DCB00(v8);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      sub_5B70E0(v8, 1);
    }
    else
    {
      sub_5B70E0(v8, 0);
    }
    return sub_5AEB60(this, v8);
  }
  if ( !*(this + 24) )
  {
    sub_5B6F40(dword_793604);
    *(this + 24) = 1;
  }
  if ( !(unsigned __int8)sub_5B64C0(dword_793604) )
  {
    sub_5B70E0(-1, 0);
    return sub_5AEF40(this, 200);
  }
  if ( (unsigned __int8)sub_5B66C0(dword_793604) )
  {
    sub_5B70E0(-1, 0);
    return sub_5AD0A0();
  }
  v9 = sub_5B56C0(dword_793604);
  if ( v9 != -1 )
  {
    sub_5B70E0(v9, 0);
    sub_5B3B60(v9);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  if ( !*(_BYTE *)(dword_793604 + 1656) )
  {
    sub_5B70E0(-1, 0);
    return sub_5A86D0((void *)dword_7935F8);
  }
  v10 = sub_5B5460(dword_793604);
  if ( v10 != -1 )
  {
    sub_5B70E0(v10, 0);
    return sub_5ACF90(this, v10);
  }
  if ( (unsigned __int8)CSourceStream::Exit((CSourceStream *)dword_793604) )
  {
    sub_5B70E0(-1, 0);
    return sub_5AD500(this);
  }
  v11 = sub_5B57C0(dword_793604);
  if ( v11 != -1 )
  {
    sub_5B70E0(v11, 0);
    sub_5B3DF0(v11);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  v12 = sub_5B5730(dword_793604);
  if ( v12 != -1 )
  {
    sub_5B70E0(v12, 0);
    if ( (unsigned __int8)sub_5B6040(v12) )
      return sub_5AEA50(this, v12);
    if ( *(this + 13) )
      return sub_5AEE50(this, v12);
    return sub_5AF020(this, v12);
  }
  sub_5B70E0(-1, 0);
  if ( !(unsigned __int8)sub_5B6530(dword_793604) )
  {
    if ( *(this + 15) )
    {
      *(this + 15) = 0;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793600 + 4) + 4))(*(_DWORD *)(dword_793600 + 4), 1);
      v7 = (Concurrency::details::_TaskCollection *)operator new(0x28u);
      if ( v7 )
        v3 = Concurrency::details::_TaskCollection::_TaskCollection(
               v7,
               *(struct Concurrency::details::_CancellationTokenState **)(dword_793600 + 4));
      else
        v3 = 0;
      return sub_5FC420(v3);
    }
LABEL_37:
    *(this + 15) = 1;
    sub_5B7310(11, 4);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
             *(_DWORD *)(dword_793600 + 4),
             1,
             0);
  }
  if ( !*(this + 15) && !(unsigned __int8)sub_5B3300(4, -1) )
    goto LABEL_37;
  v13 = sub_5B5620(dword_793604);
  if ( v13 == -1 )
  {
    if ( !(unsigned __int8)sub_5DA7B0(dword_793600) || *(this + 19) )
    {
      sub_5B70E0(-1, 0);
      if ( *((_BYTE *)dword_162EE84 + 37) )
        return sub_5AEF40(this, 200);
      else
        return sub_5A8590((void *)dword_7935F8);
    }
    else
    {
      *(this + 19) = 1;
      sub_5B7310(6, -1);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
               *(_DWORD *)(dword_793600 + 4),
               1,
               0);
    }
  }
  else
  {
    sub_5B70E0(v13, 0);
    sub_5B3870(v13);
    if ( *(this + 17) )
    {
      if ( *(this + 18) )
      {
        *(this + 17) = 0;
        *(this + 18) = 0;
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
                 *(_DWORD *)(dword_793600 + 4),
                 1,
                 0);
      }
      else
      {
        *(this + 18) = 1;
        v5 = (CImageDisplay *)sub_5DCB00(v13);
        if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
        {
          sub_5B7310(5, -1);
        }
        else
        {
          sub_5B7310(5, v13);
        }
        return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
                 *(_DWORD *)(dword_793600 + 4),
                 1,
                 0);
      }
    }
    else
    {
      *(this + 17) = 1;
      sub_5B7310(12, 4);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793600 + 4) + 8))(
               *(_DWORD *)(dword_793600 + 4),
               1,
               0);
    }
  }
}


//======================================================================
// sub_5AF990
// entry 005af990  size 324  status ok
//======================================================================

int __thiscall sub_5AF990(_DWORD *this)
{
  *this = &RoyalMatchRoom::`vftable';
  dword_793600 = 0;
  if ( dword_793604 )
    (**(void (__thiscall ***)(int, int))dword_793604)(dword_793604, 1);
  dword_793604 = 0;
  if ( dword_7935FC )
    (**(void (__thiscall ***)(int, int))dword_7935FC)(dword_7935FC, 1);
  dword_7935FC = 0;
  if ( dword_7935F8 )
    (**(void (__thiscall ***)(int, int))dword_7935F8)(dword_7935F8, 1);
  dword_7935F8 = 0;
  if ( dword_7935F4 )
    (**(void (__thiscall ***)(int, int))dword_7935F4)(dword_7935F4, 1);
  dword_7935F4 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_5AFAE0
// entry 005afae0  size 188  status ok
//======================================================================

char __stdcall sub_5AFAE0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v8; // [esp+4h] [ebp-12Ch]
  char Destination[28]; // [esp+Ch] [ebp-124h] BYREF
  char Buffer[260]; // [esp+28h] [ebp-108h] BYREF

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
// sub_5AFBA0
// entry 005afba0  size 150  status ok
//======================================================================

int __thiscall sub_5AFBA0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(dword_7935F8 + 52) )
      {
        v3 = sub_5B4F00(dword_793604);
        v4 = sub_5A4B20((void *)dword_7935F4, v3);
        result = sub_5A8E90(v4);
      }
      if ( *(_DWORD *)(dword_7935F8 + 48) )
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_7935F8 + 48) + 444) + 116))(*(_DWORD *)(*(_DWORD *)(dword_7935F8 + 48) + 444));
    }
  }
  return result;
}


//======================================================================
// sub_5AFC40
// entry 005afc40  size 139  status ok
//======================================================================

char __thiscall sub_5AFC40(void *this)
{
  int v1; // eax
  int v2; // eax

  v1 = sub_5B4F00(dword_793604);
  if ( (unsigned __int8)sub_5B60C0(v1) )
    *(_BYTE *)(sub_5B4ED0(dword_793604) + 1184) = 1;
  else
    *(_BYTE *)(sub_5B4ED0(dword_793604) + 1185) = 1;
  v2 = sub_5B4ED0(dword_793604);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 20))(v2, v2);
  sub_5DB890(this);
  return sub_5AF1B0((_BYTE *)dword_7935FC);
}


//======================================================================
// sub_5AFCD0
// entry 005afcd0  size 154  status ok
//======================================================================

int __thiscall sub_5AFCD0(_DWORD **this, char a2)
{
  int result; // eax

  if ( a2 )
    sub_5B7460(0);
  sub_5DB9B0(this);
  if ( *(_BYTE *)(dword_793604 + 1656) )
  {
    *(_BYTE *)(dword_793604 + 1656) = 0;
    sub_5B6A60(dword_793604, this);
    result = sub_5AEF40((_BYTE *)dword_7935FC, 0);
  }
  else
  {
    *(_BYTE *)(dword_793604 + 1656) = 1;
    result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
  }
  if ( a2 )
    *(_BYTE *)(dword_793604 + 1656) = 1;
  return result;
}


//======================================================================
// sub_5AFD80
// entry 005afd80  size 50  status ok
//======================================================================

int __stdcall sub_5AFD80(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 400;
  v2[1] = 138;
  v2[2] = 531;
  v2[3] = 5;
  return v2[a1];
}


//======================================================================
// sub_5AFDC0
// entry 005afdc0  size 50  status ok
//======================================================================

int __stdcall sub_5AFDC0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 309;
  v2[1] = 309;
  v2[2] = 241;
  v2[3] = 241;
  return v2[a1];
}


//======================================================================
// sub_5AFE00
// entry 005afe00  size 37  status ok
//======================================================================

int sub_5AFE00()
{
  if ( dword_793604 )
    return sub_5B4ED0(dword_793604);
  else
    return 0;
}


//======================================================================
// sub_5AFE30
// entry 005afe30  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_5AFE30(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+28h] [ebp-4h]

  v4 = 329;
  v5[0] = 219;
  v5[1] = 134;
  v5[2] = 219;
  v5[3] = 458;
  v5[4] = 147;
  v5[5] = 5;
  v5[6] = 147;
  if ( a2 >= 4 )
  {
    v6 = 0;
    sub_5E9F20((char)"false", "..\\Casino\\royalmatchroom.cpp", 174);
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
// sub_5AFED0
// entry 005afed0  size 18  status ok
//======================================================================

int __stdcall sub_5AFED0(int a1)
{
  return 1046;
}


//======================================================================
// sub_5AFEF0
// entry 005afef0  size 147  status ok
//======================================================================

int __stdcall sub_5AFEF0(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  switch ( a2 )
  {
    case 2000:
      v3 = sub_648330("BJ_HIT");
      break;
    case 2002:
      v3 = sub_648330("BJ_DOUBLE");
      break;
    case 2004:
      v3 = sub_648330("BJ_SPLIT");
      break;
    case 2005:
    case 2006:
    case 2007:
      v3 = sub_648330("BJ_STAND");
      break;
    case 2008:
      v3 = sub_648330("BJ_PASS");
      break;
    default:
      return v3;
  }
  return v3;
}


//======================================================================
// sub_5AFFB0
// entry 005affb0  size 173  status ok
//======================================================================

int __stdcall sub_5AFFB0(int a1, int a2)
{
  int result; // eax
  int *v3; // eax
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // [esp-8h] [ebp-34h]
  int v8; // [esp-4h] [ebp-30h]
  unsigned __int8 v9; // [esp+7h] [ebp-25h]
  _BYTE v10[8]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-18h] BYREF
  _BYTE v12[8]; // [esp+1Ch] [ebp-10h] BYREF
  __int64 v13; // [esp+24h] [ebp-8h]

  v13 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v13;
  v9 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v9;
  if ( !v9 )
  {
    v3 = (int *)sub_5CB880(v11, a1);
    v8 = v3[1];
    v7 = *v3;
    sub_5CB880(v12, a1);
    v4 = (int *)sub_64C5C0(v10, v7, v8);
    v5 = *v4;
    v6 = v4[1];
    *(_DWORD *)a2 = v5;
    *(_DWORD *)(a2 + 4) = v6;
    return a2;
  }
  return result;
}


//======================================================================
// sub_5B0060
// entry 005b0060  size 16  status ok
//======================================================================

int sub_5B0060()
{
  return 11;
}


//======================================================================
// sub_5B0070
// entry 005b0070  size 440  status ok
//======================================================================

int __stdcall sub_5B0070(int a1)
{
  int v1; // eax
  int result; // eax
  int v4; // [esp+8h] [ebp-18h]
  CImageDisplay *v5; // [esp+10h] [ebp-10h]

  sub_5D7F40(a1);
  if ( dword_793604 )
    v4 = sub_5B5380(dword_793604);
  else
    v4 = -1;
  if ( *(_DWORD *)(a1 + 24) == 4
    && !*(_BYTE *)(a1 + 4)
    && v4 != -1
    && tolower(*(char *)(a1 + 20)) == 116
    && sub_5DCB00(v4) )
  {
    v5 = (CImageDisplay *)sub_5DCB00(v4);
    if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
    {
      sub_5B6880(v4);
    }
  }
  if ( !*(_BYTE *)(a1 + 4)
    && *(_DWORD *)(a1 + 24) == 4
    && *(_BYTE *)(a1 + 20) == 32
    && dword_793604
    && sub_5B4F00(dword_793604) != -1 )
  {
    v1 = sub_5B4F00(dword_793604);
    sub_5CB5B0(*(_DWORD *)(dword_793604 + 4 * v1 + 1408));
  }
  result = *(unsigned __int8 *)(a1 + 4);
  if ( !*(_BYTE *)(a1 + 4) && *(_DWORD *)(a1 + 24) == 1 )
  {
    if ( dword_7935F8 )
    {
      if ( dword_793604 )
      {
        if ( *(_DWORD *)(dword_7935F8 + 60) )
        {
          result = dword_7935F8;
          if ( *(_DWORD *)(dword_7935F8 + 64) )
          {
            result = sub_5F54A0(*(_DWORD *)(dword_7935F8 + 60));
            if ( (_BYTE)result || (result = sub_5F54A0(*(_DWORD *)(dword_7935F8 + 64)), (_BYTE)result) )
              *(_BYTE *)(dword_793604 + 1472) = 1;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5B0230
// entry 005b0230  size 453  status ok
//======================================================================

char __stdcall sub_5B0230(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char result; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  CImageDisplay *v12; // [esp+Ch] [ebp-Ch]

  v2 = sub_5B4F00(dword_793604);
  if ( !sub_5DCB00(v2) )
    return sub_5DC7D0(a1, a2);
  v3 = sub_5B4F00(dword_793604);
  v12 = (CImageDisplay *)sub_5DCB00(v3);
  if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v12)->rcSource.left != 3 )
  {
    return sub_5DC7D0(a1, a2);
  }
  switch ( a1 )
  {
    case 3233002:
      v4 = sub_5B4F00(dword_793604);
      result = sub_5AD1F0((_BYTE *)dword_7935FC, v4, 1, 1);
      if ( result )
        result = sub_5A7080((int *)dword_7935F8);
      break;
    case 3233003:
      v6 = sub_5B4F00(dword_793604);
      result = sub_5AD1F0((_BYTE *)dword_7935FC, v6, 0, 1);
      if ( result )
        result = sub_5A7080((int *)dword_7935F8);
      break;
    case 3233004:
      v7 = sub_5B4F00(dword_793604);
      result = sub_5AD1F0((_BYTE *)dword_7935FC, v7, 2, 1);
      if ( result )
        result = sub_5A7080((int *)dword_7935F8);
      break;
    case 3233005:
      v8 = sub_5B4F00(dword_793604);
      result = sub_5AD1F0((_BYTE *)dword_7935FC, v8, 3, 1);
      if ( result )
        result = sub_5A7080((int *)dword_7935F8);
      break;
    case 3233006:
      v9 = sub_5B4F00(dword_793604);
      result = sub_5AD1F0((_BYTE *)dword_7935FC, v9, 4, 1);
      if ( result )
        result = sub_5A7080((int *)dword_7935F8);
      break;
    case 3233007:
      v10 = sub_5B4F00(dword_793604);
      sub_5B6880(v10);
      return sub_5DC7D0(a1, a2);
    default:
      return sub_5DC7D0(a1, a2);
  }
  return result;
}


//======================================================================
// sub_5B0410
// entry 005b0410  size 78  status ok
//======================================================================

char __thiscall sub_5B0410(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_5DB890(this);
  sub_5A7EA0((_DWORD **)dword_7935F8);
  sub_5B6A60(dword_793604, this);
  return sub_5AF1B0((_BYTE *)dword_7935FC);
}


//======================================================================
// sub_5B0460
// entry 005b0460  size 567  status ok
//======================================================================

char __thiscall sub_5B0460(char *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  char result; // al
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  Concurrency::details::VirtualProcessor *v19; // eax
  _BYTE *v21; // [esp+4h] [ebp-4h]

  v21 = (_BYTE *)sub_6375D0(-1);
  v3 = sub_5FB350(59);
  v21[4] = sub_600230(v3);
  v4 = sub_5FB350(60);
  v21[5] = sub_600230(v4);
  v5 = sub_5FB350(61);
  v21[6] = sub_600230(v5);
  v6 = sub_5FB350(62);
  v21[7] = sub_600230(v6);
  if ( dword_7947B0 )
  {
    v7 = sub_5FB350(62);
    v8 = sub_600230(v7);
    sub_5CDD10(v8 == 0);
  }
  if ( (unsigned __int8)sub_5DA7B0(this) )
    return sub_5A7EA0((_DWORD **)dword_7935F8);
  v10 = sub_5FB5E0(50);
  v21[13] = sub_605F40(v10);
  v11 = sub_5FB5E0(51);
  v21[9] = sub_605F40(v11);
  v12 = sub_5FB5E0(52);
  v21[8] = sub_605F40(v12);
  v13 = sub_5FB5E0(53);
  v21[11] = sub_605F40(v13);
  v14 = sub_5FB5E0(54);
  v21[10] = sub_605F40(v14);
  v15 = sub_5FB350(55);
  *v21 = sub_600230(v15);
  v16 = sub_5FB350(56);
  v21[1] = sub_600230(v16);
  v17 = sub_5FB350(57);
  v21[2] = sub_600230(v17);
  v18 = sub_5FB350(58);
  v21[3] = sub_600230(v18);
  v19 = (Concurrency::details::VirtualProcessor *)sub_5FB860(0);
  v21[12] = (unsigned __int8)Concurrency::details::VirtualProcessor::GetOwningRoot(v19);
  sub_637610(dword_162EE84);
  if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 128))(this) )
    sub_5B8430(dword_793604);
  sub_5A7EA0((_DWORD **)dword_7935F8);
  result = *(this + 124);
  if ( result )
  {
    *(this + 124) = 0;
    sub_5B6A60(dword_793604, this);
    return sub_5AF1B0((_BYTE *)dword_7935FC);
  }
  return result;
}


//======================================================================
// sub_5B06A0
// entry 005b06a0  size 113  status ok
//======================================================================

int __thiscall sub_5B06A0(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_DWORD *)(dword_7935F8 + 4 * i + 24) != a2 )
      sub_5CD330(*(_DWORD *)(dword_7935F8 + 4 * i + 24), v3);
    if ( *(_DWORD *)(dword_7935F8 + 4 * i + 72) != a2 )
      sub_5CD330(*(_DWORD *)(dword_7935F8 + 4 * i + 72), v3);
    result = i + 1;
  }
  return result;
}


