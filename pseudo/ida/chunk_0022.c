//======================================================================
// sub_582660
// entry 00582660  size 170  status ok
//======================================================================

int __thiscall sub_582660(pairNode *this)
{
  int v1; // kr00_4
  int result; // eax

  sub_602330(this);
  v1 = pairNode::raw_length(this);
  switch ( v1 )
  {
    case 0:
      sub_582180(*((_DWORD **)this + 119));
      result = sub_5822E0(*((_DWORD **)this + 119));
      break;
    case 1:
      sub_5821C0(*((_DWORD **)this + 119));
      result = sub_5822E0(*((_DWORD **)this + 119));
      break;
    case 2:
      sub_582210(*((_DWORD **)this + 119));
      result = sub_5822E0(*((_DWORD **)this + 119));
      break;
    case 3:
      sub_582270(*((_DWORD **)this + 119));
      result = sub_5822E0(*((_DWORD **)this + 119));
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_582720
// entry 00582720  size 40  status ok
//======================================================================

int __thiscall sub_582720(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 204))(this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this);
}


//======================================================================
// sub_582750
// entry 00582750  size 40  status ok
//======================================================================

int __thiscall sub_582750(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 208))(this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
}


//======================================================================
// sub_582780
// entry 00582780  size 1041  status ok
//======================================================================

_DWORD *__thiscall sub_582780(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-34h]
  int v8; // [esp+8h] [ebp-30h]
  int v9; // [esp+Ch] [ebp-2Ch]
  void *v11; // [esp+14h] [ebp-24h]
  void *v12; // [esp+1Ch] [ebp-1Ch]
  void *v13; // [esp+24h] [ebp-14h]

  sub_5F71F0(0, 0);
  *this = &KenoQuickPlayDialog::`vftable';
  if ( a2 < 1 || a2 > 100 )
    sub_5E9F20((char)"newGamesToPlay >=1 && newGamesToPlay <= 100", "..\\Casino\\kenodisplay.cpp", 1246);
  *(this + 111) = a2;
  *(this + 112) = 0;
  sub_5F83D0(1253, 0);
  sub_5F7340(0, 0);
  sub_5F85D0(this);
  v2 = sub_630F40("SID_KENO_QUICKPLAY");
  sub_5F73E0(v2, 32, 0, 3);
  v13 = operator new(0x1D0u);
  if ( v13 )
  {
    sub_5EC5A0(v13);
    v9 = v3;
  }
  else
  {
    v9 = 0;
  }
  *(this + 113) = v9;
  *(_DWORD *)(*(this + 113) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 113) + 64))(*(this + 113));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 113) + 108))(*(this + 113), 10);
  sub_5ECD00(35, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 113) + 68))(*(this + 113), 15, 38);
  v4 = sub_630F40("SID_KENO_PLAYING");
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 113) + 180))(*(this + 113), v4);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 113) + 116))(*(this + 113));
  v12 = operator new(0x1D0u);
  if ( v12 )
  {
    sub_5EC5A0(v12);
    v8 = v5;
  }
  else
  {
    v8 = 0;
  }
  *(this + 114) = v8;
  *(_DWORD *)(*(this + 114) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 64))(*(this + 114));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 114) + 108))(*(this + 114), 10);
  sub_5ECD00(103, -1, word_75EE1C);
  sub_5ECC60(50);
  sub_5ECCB0(20);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 114) + 68))(*(this + 114), 109, 40);
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 114) + 180))(*(this + 114), &Source);
  sub_5EF310(6);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 116))(*(this + 114));
  v11 = operator new(0x5Cu);
  if ( v11 )
    v7 = sub_5F6130(v11);
  else
    v7 = 0;
  *(this + 115) = v7;
  *(_DWORD *)(*(this + 115) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 115) + 64))(*(this + 115));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 115) + 108))(*(this + 115), 60);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 115) + 68))(*(this + 115), 16, 56);
  sub_5F6580(160, 160, 200);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 115) + 120))(*(this + 115), 0, 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 115) + 116))(*(this + 115));
  return this;
}


//======================================================================
// sub_582BA0
// entry 00582ba0  size 295  status ok
//======================================================================

int __thiscall sub_582BA0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&KenoQuickPlayDialog::`vftable';
  if ( *(this + 113) )
    (***(this + 113))(*(this + 113), 1);
  *(this + 113) = 0;
  if ( *(this + 114) )
    (***(this + 114))(*(this + 114), 1);
  *(this + 114) = 0;
  if ( *(this + 115) )
    (***(this + 115))(*(this + 115), 1);
  *(this + 115) = 0;
  if ( dword_793584 )
    sub_58AF00(dword_793584);
  return sub_5F7260();
}


//======================================================================
// sub_582CD0
// entry 00582cd0  size 370  status ok
//======================================================================

int __thiscall sub_582CD0(int (__thiscall ***this)(void *, int))
{
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-18h] BYREF
  float v4; // [esp+24h] [ebp-4h]

  if ( *(this + 112) == *(this + 111) )
  {
    sub_5F87D0(this);
    *(_DWORD *)(dword_793584 + 15372) = 0;
    result = (int)this;
    if ( this )
      return (**this)(this, 1);
  }
  else
  {
    sub_5E0EA0(dword_7947E0);
    if ( dword_793584 )
    {
      sub_589050(*(_DWORD *)(dword_7947E0 + 152));
      sub_5890F0(0);
    }
    *(this + 112) = (int (__thiscall **)(void *, int))((char *)*(this + 112) + 1);
    sprintf(Buffer, "%d/%d", *(this + 112), *(this + 111));
    (*((void (__thiscall **)(_DWORD, char *))**(this + 114) + 45))(*(this + 114), Buffer);
    if ( *(this + 112) == *(this + 111) )
      v4 = 143.0;
    else
      v4 = 143.0 / (double)(int)*(this + 111) * (double)(int)*(this + 112);
    return (*((int (__thiscall **)(_DWORD, int, int))**(this + 115) + 30))(*(this + 115), (int)v4, 10);
  }
  return result;
}


//======================================================================
// sub_582F70
// entry 00582f70  size 152  status ok
//======================================================================

void __thiscall sub_582F70(CNoTrackObject *this)
{
  *(_DWORD *)this = &KenoGame::`vftable';
  if ( *((_DWORD *)this + 21) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 21))(*((_DWORD *)this + 21), 1);
    *((_DWORD *)this + 21) = 0;
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_583010
// entry 00583010  size 19  status ok
//======================================================================

int __thiscall sub_583010(void *this)
{
  return sub_583030(this);
}


//======================================================================
// sub_583030
// entry 00583030  size 348  status ok
//======================================================================

int __thiscall sub_583030(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-2Ch]
  int v3; // [esp+8h] [ebp-28h]
  void *v5; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  for ( i = 0; i < 20; ++i )
    *(this + i + 1) = -1;
  result = (int)this;
  if ( !*(this + 21) )
  {
    v5 = operator new(0x184u);
    if ( v5 )
      v3 = sub_5F5BF0(v5);
    else
      v3 = 0;
    *(this + 21) = v3;
    sub_5EAF00(3203019);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 21) + 64))(*(this + 21));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 21) + 108))(*(this + 21), 1);
    *(_DWORD *)(*(this + 21) + 376) = 8;
    if ( operator new(0x1Cu) )
      v2 = sub_600A70(0);
    else
      v2 = 0;
    sub_5F5D50(v2);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 21) + 116))(*(this + 21));
  }
  return result;
}


//======================================================================
// sub_5831C0
// entry 005831c0  size 190  status ok
//======================================================================

_BYTE *__thiscall sub_5831C0(_BYTE *this)
{
  int v1; // eax

  sub_5D7B60(this);
  *(_DWORD *)this = &KenoRoom::`vftable';
  v1 = sub_630F40("SID_KENO");
  sub_5F38B0(v1);
  dword_79357C = (int)this;
  dword_793580 = 0;
  *(this + 136) = 0;
  *(this + 137) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 32) = 0;
  sub_5F1AD0(3203042);
  return this;
}


//======================================================================
// sub_583280
// entry 00583280  size 282  status ok
//======================================================================

int __thiscall sub_583280(int this)
{
  *(_DWORD *)this = &KenoRoom::`vftable';
  if ( *(_BYTE *)(this + 137) )
  {
    sub_5E1070(dword_7947E0);
    sub_583830(this);
  }
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)this);
  if ( *(_DWORD *)(this + 132) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 132))(*(_DWORD *)(this + 132), 1);
    *(_DWORD *)(this + 132) = 0;
  }
  sub_5F38B0(0);
  if ( dword_793580 )
    (**(void (__thiscall ***)(int, int))dword_793580)(dword_793580, 1);
  dword_793580 = 0;
  dword_79357C = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_5833A0
// entry 005833a0  size 527  status ok
//======================================================================

int sub_5833A0()
{
  int v0; // eax
  int v1; // eax
  const char *v2; // eax
  const CHAR *v3; // eax
  int v5; // [esp-4h] [ebp-14Ch]
  _DWORD *v6; // [esp+4h] [ebp-144h]
  LONG *p_top; // [esp+10h] [ebp-138h]
  CImageDisplay *v9; // [esp+14h] [ebp-134h]
  CImageDisplay *v10; // [esp+18h] [ebp-130h]
  _DWORD *v11; // [esp+24h] [ebp-124h]
  char Buffer[260]; // [esp+2Ch] [ebp-11Ch] BYREF
  int v13; // [esp+134h] [ebp-14h]
  int i; // [esp+138h] [ebp-10h]
  int v15; // [esp+144h] [ebp-4h]

  sub_5D8230();
  for ( i = 0; ; ++i )
  {
    v0 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v0 )
      break;
    v10 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
    {
      v1 = sub_5DCB00(i);
      v13 = sub_5D52E0(v1);
      if ( *(_DWORD *)(v13 + 44) )
      {
        v9 = (CImageDisplay *)sub_5DCB00(i);
        p_top = &CImageDisplay::GetDisplayFormat(v9)->rcSource.top;
        v5 = *(_DWORD *)(v13 + 44);
        v2 = (const char *)sub_630F40("SID_KENO_PLAYERHASWON_FORMAT");
        sprintf(Buffer, v2, p_top, v5);
        v3 = (const CHAR *)sub_630F40("SID_KENO_UPDATE");
        sub_62FF10(Buffer, v3, 0);
      }
      sub_5E1410(i);
    }
  }
  v11 = operator new(0x20u);
  v15 = 0;
  if ( v11 )
  {
    sub_5FC0D0(0);
    *v11 = &KenoRoomScript::`vftable';
    v6 = v11;
  }
  else
  {
    v6 = 0;
  }
  v15 = -1;
  return sub_5F1B70(v6);
}


//======================================================================
// sub_5835B0
// entry 005835b0  size 243  status ok
//======================================================================

int __thiscall sub_5835B0(int *this)
{
  _DWORD *v2; // [esp+4h] [ebp-28h]
  CReflectorWnd *v3; // [esp+8h] [ebp-24h]
  _DWORD *v5; // [esp+10h] [ebp-1Ch]
  CReflectorWnd *v6; // [esp+18h] [ebp-14h]

  if ( !dword_793580 )
  {
    v6 = (CReflectorWnd *)operator new(0x58u);
    if ( v6 )
      v3 = CReflectorWnd::CReflectorWnd(v6);
    else
      v3 = 0;
    dword_793580 = (int)v3;
  }
  sub_583010((void *)dword_793580);
  if ( !*(this + 33) )
  {
    v5 = operator new(0x20Cu);
    if ( v5 )
      v2 = sub_57D600(v5);
    else
      v2 = 0;
    *(this + 33) = (int)v2;
  }
  return sub_57E3D0(*(this + 33));
}


//======================================================================
// sub_5836B0
// entry 005836b0  size 191  status ok
//======================================================================

int __stdcall sub_5836B0(int a1, int a2)
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
// sub_583770
// entry 00583770  size 59  status ok
//======================================================================

int __thiscall sub_583770(int this)
{
  int result; // eax

  sub_5D8020(this);
  result = this;
  if ( *(_DWORD *)(this + 132) )
  {
    if ( !*(_BYTE *)(this + 137) )
      return sub_57E550(*(_DWORD *)(this + 132));
  }
  return result;
}


//======================================================================
// sub_5837B0
// entry 005837b0  size 25  status ok
//======================================================================

int __stdcall sub_5837B0(int a1)
{
  return sub_5D7F40(a1);
}


//======================================================================
// sub_5837D0
// entry 005837d0  size 86  status ok
//======================================================================

int __thiscall sub_5837D0(int this)
{
  int result; // eax

  *(_BYTE *)(this + 136) = 1;
  *(_BYTE *)(this + 137) = 1;
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)this);
  sub_57E760(*(_DWORD **)(this + 132));
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84);
  if ( (_BYTE)result )
    return sub_583A50(this);
  return result;
}


//======================================================================
// sub_583830
// entry 00583830  size 198  status ok
//======================================================================

int __thiscall sub_583830(ATL::CComCriticalSection *this)
{
  CImageDisplay *v4; // [esp+8h] [ebp-10h]
  int i; // [esp+14h] [ebp-4h]

  sub_583AA0(this);
  *((_BYTE *)this + 137) = 0;
  *((_BYTE *)this + 136) = 0;
  ATL::CComCriticalSection::~CComCriticalSection(this);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    v4 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      sub_5E1410(i);
    }
  }
  return sub_583900(this);
}


//======================================================================
// sub_583900
// entry 00583900  size 54  status ok
//======================================================================

int sub_583900()
{
  int IsFixedSize; // esi
  int result; // eax

  IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_7947E0);
  result = 3600 * (char)sub_5E2F60(dword_7947E0);
  dword_75D7AC = result + IsFixedSize;
  return result;
}


//======================================================================
// sub_583940
// entry 00583940  size 80  status ok
//======================================================================

int __thiscall sub_583940(int this)
{
  int result; // eax

  result = this;
  if ( *(_BYTE *)(this + 137) )
  {
    sub_57E8B0(*(_DWORD *)(this + 132));
    sub_583900();
    sub_57E3D0(*(_DWORD *)(this + 132));
    sub_5E1070(dword_7947E0);
    return sub_583830((ATL::CComCriticalSection *)this);
  }
  return result;
}


//======================================================================
// sub_583990
// entry 00583990  size 55  status ok
//======================================================================

int __thiscall sub_583990(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_5FC3A0(a2);
  if ( !*(this + 5) )
    return sub_5835B0((int *)dword_79357C);
  return result;
}


//======================================================================
// sub_583A20
// entry 00583a20  size 37  status ok
//======================================================================

int __thiscall sub_583A20(_DWORD **this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 33) )
    return sub_57E9B0(*(this + 33));
  return result;
}


//======================================================================
// sub_583A50
// entry 00583a50  size 71  status ok
//======================================================================

int __thiscall sub_583A50(void *this)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
           dword_162EE84,
           101017,
           0,
           0,
           10,
           0,
           1.0,
           0.5,
           (int)this + 128);
}


//======================================================================
// sub_583AA0
// entry 00583aa0  size 50  status ok
//======================================================================

_DWORD *__thiscall sub_583AA0(_DWORD *this)
{
  sub_609870(*(this + 32), 1);
  *(this + 32) = 0;
  return this;
}


//======================================================================
// sub_583B00
// entry 00583b00  size 31  status ok
//======================================================================

int __thiscall sub_583B00(void *this)
{
  int result; // eax

  if ( dword_793584 )
    return sub_589290(dword_793584, this);
  return result;
}


//======================================================================
// sub_583B20
// entry 00583b20  size 16  status ok
//======================================================================

int sub_583B20()
{
  return 101001;
}


//======================================================================
// sub_583B60
// entry 00583b60  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_583B60(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &KenoRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_583B90
// entry 00583b90  size 120  status ok
//======================================================================

_BYTE *sub_583B90()
{
  _BYTE *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x8Cu);
  if ( v2 )
    return sub_5831C0(v2);
  else
    return 0;
}


//======================================================================
// sub_583C10
// entry 00583c10  size 51  status ok
//======================================================================

char __stdcall sub_583C10(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_KENO");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_583C70
// entry 00583c70  size 16  status ok
//======================================================================

int sub_583C70()
{
  return 3203000;
}


//======================================================================
// sub_583C80
// entry 00583c80  size 16  status ok
//======================================================================

const char *sub_583C80()
{
  return "keno";
}


//======================================================================
// sub_583CA0
// entry 00583ca0  size 16  status ok
//======================================================================

char **sub_583CA0()
{
  return off_74BD68;
}


//======================================================================
// sub_583CB0
// entry 00583cb0  size 16  status ok
//======================================================================

char **sub_583CB0()
{
  return &off_74BD74;
}


//======================================================================
// sub_583CE0
// entry 00583ce0  size 94  status ok
//======================================================================

char __stdcall sub_583CE0(_DWORD *a1, int a2)
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
// sub_583D40
// entry 00583d40  size 16  status ok
//======================================================================

int sub_583D40()
{
  return 8;
}


//======================================================================
// sub_583D50
// entry 00583d50  size 15  status ok
//======================================================================

char __stdcall sub_583D50(int a1)
{
  return 0;
}


//======================================================================
// sub_583D60
// entry 00583d60  size 15  status ok
//======================================================================

char __stdcall sub_583D60(int a1)
{
  return 0;
}


//======================================================================
// sub_583D70
// entry 00583d70  size 52  status ok
//======================================================================

char __stdcall sub_583D70(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_583DC0
// entry 00583dc0  size 16  status ok
//======================================================================

int sub_583DC0()
{
  return 7;
}


//======================================================================
// sub_583DD0
// entry 00583dd0  size 251  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_583DD0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(8);
  *a2 += *v8;
  a2[1] += v8[1];
  *a3 += *v8;
  a3[1] += v8[1];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)8 )
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
// sub_583ED0
// entry 00583ed0  size 241  status ok
//======================================================================

char __stdcall sub_583ED0(int a1, int a2)
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

  v10 = sub_63AAE0(8);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v6 = sub_64C8A0(0, 0);
  v9 = v6;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)8 )
    sub_5E0C40(a2, &v8, &v9);
  v2 = (int *)sub_64C5C0(v5, v8, HIDWORD(v8));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  return 1;
}


//======================================================================
// sub_583FD0
// entry 00583fd0  size 30  status ok
//======================================================================

char __stdcall sub_583FD0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  return 1;
}


//======================================================================
// sub_583FF0
// entry 00583ff0  size 41  status ok
//======================================================================

char __stdcall sub_583FF0(int a1)
{
  if ( a1 != 3203000 )
    return 0;
  sub_653BD0(8);
  return 1;
}


//======================================================================
// sub_584020
// entry 00584020  size 15  status ok
//======================================================================

char __stdcall sub_584020(int a1)
{
  return 0;
}


//======================================================================
// sub_584030
// entry 00584030  size 15  status ok
//======================================================================

char __stdcall sub_584030(int a1)
{
  return 0;
}


//======================================================================
// sub_584040
// entry 00584040  size 16  status ok
//======================================================================

void *sub_584040()
{
  return &unk_74BD78;
}


//======================================================================
// sub_584060
// entry 00584060  size 16  status ok
//======================================================================

void *sub_584060()
{
  return &unk_74B618;
}


//======================================================================
// sub_584070
// entry 00584070  size 16  status ok
//======================================================================

void *sub_584070()
{
  return &unk_74BC68;
}


//======================================================================
// sub_584080
// entry 00584080  size 75  status ok
//======================================================================

char __stdcall sub_584080(int a1, int a2)
{
  if ( a2 != 100031 && a2 != 100030 )
    return 0;
  if ( a1 != 3203001 )
    return 0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 8, -1);
  return 1;
}


//======================================================================
// sub_5840E0
// entry 005840e0  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_5840E0(void *this, int a2, int a3)
{
  _DWORD *v4; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v4 = &KenoScrollButton::`vftable';
  v4[119] = a2;
  v4[120] = a3;
  return v4;
}


//======================================================================
// sub_584140
// entry 00584140  size 51  status ok
//======================================================================

int __thiscall sub_584140(int this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 476) + 184))(
           *(_DWORD *)(this + 476),
           *(_DWORD *)(this + 480),
           1);
}


//======================================================================
// sub_584180
// entry 00584180  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_584180(_DWORD *this, int a2)
{
  sub_5F5F50(this);
  *this = &KenoScroller::`vftable';
  *(this + 100) = a2;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 9) = 0;
  *(this + 101) = 0;
  *(this + 102) = 0;
  *(this + 103) = 0;
  *(this + 104) = 0;
  return this;
}


//======================================================================
// sub_584210
// entry 00584210  size 37  status ok
//======================================================================

int __thiscall sub_584210(_DWORD *this, int a2, int a3)
{
  *(this + 103) = a2;
  *(this + 104) = a3;
  return a3;
}


//======================================================================
// sub_584260
// entry 00584260  size 20  status ok
//======================================================================

int __thiscall sub_584260(_DWORD *this)
{
  return *(this + 104);
}


//======================================================================
// sub_584280
// entry 00584280  size 829  status ok
//======================================================================

int __thiscall sub_584280(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-8h]

  result = sub_5F56A0(a2);
  if ( (_BYTE)result || (result = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 168))(this), (_BYTE)result) )
  {
    if ( !*(_BYTE *)(a2 + 4) )
    {
      result = a2;
      v9 = *(_DWORD *)(a2 + 24);
      switch ( v9 )
      {
        case 1:
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 132))(this, a2)
            && (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
          {
            *(_BYTE *)(a2 + 4) = 1;
          }
          result = (*(int (__thiscall **)(_DWORD *, int))(*this + 132))(this, a2);
          if ( (_BYTE)result )
          {
            result = *(_DWORD *)(a2 + 28) & 8;
            if ( result )
            {
              result = (*(int (__thiscall **)(_DWORD *))(*this + 168))(this);
              if ( !(_BYTE)result )
              {
                *((_BYTE *)this + 8) = 1;
                *((_BYTE *)this + 9) = 1;
                *(_BYTE *)(a2 + 4) = 1;
                if ( Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)*(this + 100)) )
                {
                  v3 = *(_DWORD *)(a2 + 8) - (*(int (__thiscall **)(_DWORD *))(*this + 76))(this);
                  result = (int)this;
                  *(this + 101) = v3;
                }
                else
                {
                  *(this + 102) = *(_DWORD *)(a2 + 12) - (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
                  return (int)this;
                }
              }
            }
          }
          break;
        case 2:
          if ( (*(_DWORD *)(a2 + 28) & 8) != 0 )
          {
            result = (*(int (__thiscall **)(_DWORD *))(*this + 168))(this);
            if ( (_BYTE)result )
            {
              sub_585310(a2);
              *((_BYTE *)this + 8) = 0;
              *((_BYTE *)this + 9) = 0;
              *(_BYTE *)(a2 + 4) = 1;
              return a2;
            }
          }
          break;
        case 3:
          result = (*(int (__thiscall **)(_DWORD *))(*this + 168))(this);
          if ( (_BYTE)result )
          {
            if ( Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)*(this + 100)) )
            {
              if ( *(_DWORD *)(a2 + 8) - *(this + 101) >= *(this + 103) )
              {
                if ( *(_DWORD *)(a2 + 8) - *(this + 101) <= *(this + 104) )
                {
                  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
                  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 68))(
                    this,
                    *(_DWORD *)(a2 + 8) - *(this + 101),
                    v8);
                }
                else
                {
                  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
                  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 68))(this, *(this + 104), v7);
                }
              }
              else
              {
                v6 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 68))(this, *(this + 103), v6);
              }
            }
            else if ( *(_DWORD *)(a2 + 12) - *(this + 102) >= *(this + 103) )
            {
              if ( *(_DWORD *)(a2 + 12) - *(this + 102) <= *(this + 104) )
                v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 76))(this, *(_DWORD *)(a2 + 12) - *(this + 102));
              else
                v5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, *(this + 104));
              (*(void (__thiscall **)(_DWORD *, int))(*this + 68))(this, v5);
            }
            else
            {
              v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, *(this + 103));
              (*(void (__thiscall **)(_DWORD *, int))(*this + 68))(this, v4);
            }
            sub_585310(a2);
            result = a2;
            *(_BYTE *)(a2 + 4) = 1;
          }
          break;
      }
    }
  }
  return result;
}


//======================================================================
// sub_5845C0
// entry 005845c0  size 401  status ok
//======================================================================

_DWORD *__thiscall sub_5845C0(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+4h] [ebp-34h]
  _DWORD *v4; // [esp+8h] [ebp-30h]
  _DWORD *v5; // [esp+Ch] [ebp-2Ch]
  _DWORD *v7; // [esp+14h] [ebp-24h]
  void *v8; // [esp+1Ch] [ebp-1Ch]
  void *v9; // [esp+24h] [ebp-14h]

  sub_5F6130(this);
  *this = &KenoScrollBox::`vftable';
  *(this + 26) = a2;
  *((_BYTE *)this + 108) = 1;
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 30) = 0;
  *(this + 31) = 0;
  *(this + 32) = 0;
  v9 = operator new(0x1E4u);
  if ( v9 )
    v5 = sub_5840E0(v9, (int)this, 1);
  else
    v5 = 0;
  *(this + 23) = v5;
  sub_602EF0(20, 10);
  v8 = operator new(0x1E4u);
  if ( v8 )
    v4 = sub_5840E0(v8, (int)this, 0);
  else
    v4 = 0;
  *(this + 24) = v4;
  sub_602EF0(20, 10);
  v7 = operator new(0x1A4u);
  if ( v7 )
    v3 = sub_584180(v7, (int)this);
  else
    v3 = 0;
  *(this + 25) = v3;
  return this;
}


//======================================================================
// sub_584760
// entry 00584760  size 284  status ok
//======================================================================

void __thiscall sub_584760(CExpandoObject *this)
{
  *(_DWORD *)this = &KenoScrollBox::`vftable';
  if ( *((_DWORD *)this + 23) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 23))(*((_DWORD *)this + 23), 1);
    *((_DWORD *)this + 23) = 0;
  }
  if ( *((_DWORD *)this + 24) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 24))(*((_DWORD *)this + 24), 1);
    *((_DWORD *)this + 24) = 0;
  }
  if ( *((_DWORD *)this + 25) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 25))(*((_DWORD *)this + 25), 1);
    *((_DWORD *)this + 25) = 0;
  }
  CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_584880
// entry 00584880  size 400  status ok
//======================================================================

int __thiscall sub_584880(_DWORD *this)
{
  sub_5F6490(0, 0, 0);
  sub_5F5010(this);
  *(_DWORD *)(*(this + 23) + 4) = *(this + 1);
  if ( *(this + 30) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 23) + 200))(*(this + 23), *(this + 30));
  else
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 23) + 200))(*(this + 23), 3200203);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 23) + 176))(*(this + 23), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 23) + 64))(*(this + 23));
  *(_DWORD *)(*(this + 24) + 4) = *(this + 1);
  if ( *(this + 31) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 24) + 200))(*(this + 24), *(this + 31));
  else
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 24) + 200))(*(this + 24), 3200204);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 24) + 176))(*(this + 24), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 24) + 64))(*(this + 24));
  *(_DWORD *)(*(this + 25) + 4) = *(this + 1);
  if ( *(this + 32) )
    sub_5EAF00(*(this + 32));
  else
    sub_5EAF00(3200207);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 25) + 176))(*(this + 25), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 25) + 64))(*(this + 25));
  return sub_585070(this);
}


//======================================================================
// sub_584A10
// entry 00584a10  size 206  status ok
//======================================================================

int __thiscall sub_584A10(unsigned __int8 *this, int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-8h]

  result = sub_5F56A0(a2);
  if ( (_BYTE)result )
  {
    result = *(this + 108);
    if ( *(this + 108) )
    {
      if ( !*(_BYTE *)(a2 + 4) )
      {
        result = a2;
        v3 = *(_DWORD *)(a2 + 24);
        if ( v3 == 1 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)this + 132))(this, a2)
            && (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
          {
            *(_BYTE *)(a2 + 4) = 1;
          }
          result = (*(int (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)this + 132))(this, a2);
          if ( (_BYTE)result )
          {
            result = *(_DWORD *)(a2 + 28) & 8;
            if ( result )
            {
              *(_BYTE *)(a2 + 4) = 1;
              return sub_585240(a2);
            }
          }
        }
        else if ( v3 == 2 )
        {
          result = a2;
          if ( (*(_DWORD *)(a2 + 28) & 8) != 0 )
            *(_BYTE *)(a2 + 4) = 1;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_584AE0
// entry 00584ae0  size 426  status ok
//======================================================================

int __thiscall sub_584AE0(int this, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int result; // eax
  int v16; // [esp-4h] [ebp-Ch]

  sub_5F6210(a2, a3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 92) + 68))(*(_DWORD *)(this + 92), a2, a3);
  if ( *(_DWORD *)(this + 104) )
  {
    v8 = a2 + sub_5F5550(this);
    v9 = sub_5F5550(*(_DWORD *)(this + 96));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 96) + 68))(*(_DWORD *)(this + 96), v8 - (v9 - 1));
    v10 = sub_5F5550(*(_DWORD *)(this + 92));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 100) + 68))(*(_DWORD *)(this + 100), a2 + v10, a3);
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 76))(*(_DWORD *)(this + 96));
    v12 = sub_5F5550(*(_DWORD *)(this + 100));
    v13 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 100) + 76))(*(_DWORD *)(this + 100), v11 - v12);
    sub_584210(*(_DWORD **)(this + 100), v13, a3);
  }
  else
  {
    v3 = a3 + sub_5F5590(this);
    v16 = v3 - (sub_5F5590(*(_DWORD *)(this + 96)) - 1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 96) + 68))(*(_DWORD *)(this + 96), a2);
    v4 = sub_5F5590(*(_DWORD *)(this + 92));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 100) + 68))(*(_DWORD *)(this + 100), a2, a3 + v4);
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 84))(*(_DWORD *)(this + 96));
    v6 = sub_5F5590(*(_DWORD *)(this + 100));
    v7 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 100) + 84))(*(_DWORD *)(this + 100), v5 - v6);
    sub_584210(*(_DWORD **)(this + 100), v7, v16);
  }
  v14 = sub_584260(*(_DWORD **)(this + 100));
  result = unknown_libname_560(*(_DWORD *)(this + 100));
  *(_DWORD *)(this + 112) = v14 - result;
  return result;
}


//======================================================================
// sub_584C90
// entry 00584c90  size 462  status ok
//======================================================================

int __thiscall sub_584C90(_DWORD **this, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int result; // eax
  int v16; // [esp-4h] [ebp-14h]
  int v18; // [esp+8h] [ebp-8h]
  int v19; // [esp+Ch] [ebp-4h]

  sub_5F6240(a2, a3);
  v18 = ((int (__thiscall *)(_DWORD **))(*this)[19])(this);
  v19 = ((int (__thiscall *)(_DWORD **))(*this)[21])(this);
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 23) + 68))(*(this + 23), v18, v19);
  if ( *(this + 26) )
  {
    v8 = v18 + sub_5F5550(this);
    v9 = sub_5F5550(*(this + 24));
    (*(void (__thiscall **)(_DWORD, int))(**(this + 24) + 68))(*(this + 24), v8 - (v9 - 1));
    v10 = sub_5F5550(*(this + 23));
    (*(void (__thiscall **)(_DWORD, int, int))(**(this + 25) + 68))(*(this + 25), v18 + v10, v19);
    v11 = (*(int (__thiscall **)(_DWORD))(**(this + 24) + 76))(*(this + 24));
    v12 = sub_5F5550(*(this + 25));
    v13 = (*(int (__thiscall **)(_DWORD, int))(**(this + 25) + 76))(*(this + 25), v11 - v12);
    sub_584210(*(this + 25), v13, v19);
  }
  else
  {
    v3 = v19 + sub_5F5590(this);
    v16 = v3 - (sub_5F5590(*(this + 24)) - 1);
    (*(void (__thiscall **)(_DWORD, int))(**(this + 24) + 68))(*(this + 24), v18);
    v4 = sub_5F5590(*(this + 23));
    (*(void (__thiscall **)(_DWORD, int, int))(**(this + 25) + 68))(*(this + 25), v18, v19 + v4);
    v5 = (*(int (__thiscall **)(_DWORD))(**(this + 24) + 84))(*(this + 24));
    v6 = sub_5F5590(*(this + 25));
    v7 = (*(int (__thiscall **)(_DWORD, int))(**(this + 25) + 84))(*(this + 25), v5 - v6);
    sub_584210(*(this + 25), v7, v16);
  }
  v14 = sub_584260(*(this + 25));
  result = unknown_libname_560(*(this + 25));
  *(this + 28) = (_DWORD *)(v14 - result);
  return result;
}


//======================================================================
// sub_584E60
// entry 00584e60  size 103  status ok
//======================================================================

int __thiscall sub_584E60(_DWORD **this, int a2)
{
  sub_5F5300(a2);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 23) + 108))(*(this + 23), a2 + 1);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 24) + 108))(*(this + 24), a2 + 1);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 25) + 108))(*(this + 25), a2 + 1);
}


//======================================================================
// sub_584ED0
// entry 00584ed0  size 124  status ok
//======================================================================

int __thiscall sub_584ED0(int this, int a2, int a3, int a4)
{
  *(_DWORD *)(this + 120) = a2;
  *(_DWORD *)(this + 124) = a3;
  *(_DWORD *)(this + 128) = a4;
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 92) + 200))(
    *(_DWORD *)(this + 92),
    *(_DWORD *)(this + 120));
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 96) + 200))(
    *(_DWORD *)(this + 96),
    *(_DWORD *)(this + 124));
  return sub_5EAF00(*(_DWORD *)(this + 128));
}


//======================================================================
// sub_584F50
// entry 00584f50  size 112  status ok
//======================================================================

int __thiscall sub_584F50(int this)
{
  sub_5F6270(this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 116))(*(_DWORD *)(this + 92));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 116))(*(_DWORD *)(this + 96));
  if ( *(_BYTE *)(this + 108) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 116))(*(_DWORD *)(this + 100));
  else
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 112))(*(_DWORD *)(this + 100));
}


//======================================================================
// sub_584FC0
// entry 00584fc0  size 78  status ok
//======================================================================

int __thiscall sub_584FC0(_DWORD **this)
{
  sub_5F62B0(this);
  (*(void (__thiscall **)(_DWORD))(**(this + 23) + 112))(*(this + 23));
  (*(void (__thiscall **)(_DWORD))(**(this + 24) + 112))(*(this + 24));
  return (*(int (__thiscall **)(_DWORD))(**(this + 25) + 112))(*(this + 25));
}


//======================================================================
// sub_585010
// entry 00585010  size 89  status ok
//======================================================================

int __thiscall sub_585010(int this)
{
  *(_BYTE *)(this + 108) = 1;
  sub_5850D0(this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 116))(*(_DWORD *)(this + 100));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 204))(*(_DWORD *)(this + 92));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 204))(*(_DWORD *)(this + 96));
}


//======================================================================
// sub_585070
// entry 00585070  size 89  status ok
//======================================================================

int __thiscall sub_585070(int this)
{
  *(_BYTE *)(this + 108) = 0;
  sub_585100(this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 112))(*(_DWORD *)(this + 100));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 208))(*(_DWORD *)(this + 92));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 208))(*(_DWORD *)(this + 96));
}


//======================================================================
// sub_5850D0
// entry 005850d0  size 41  status ok
//======================================================================

int sub_5850D0()
{
  return sub_5F6510(word_75F49C);
}


//======================================================================
// sub_585100
// entry 00585100  size 41  status ok
//======================================================================

int sub_585100()
{
  return sub_5F6510(word_75F498);
}


//======================================================================
// sub_585150
// entry 00585150  size 232  status ok
//======================================================================

int __thiscall sub_585150(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v6; // eax
  int v8; // [esp+8h] [ebp-4h]

  v8 = unknown_libname_560(*(this + 25));
  if ( a2
    && (v2 = (*(int (__thiscall **)(_DWORD *))(*this + 176))(this),
        a2 >= v2 - (*(int (__thiscall **)(_DWORD *))(*this + 180))(this)) )
  {
    v8 += *(this + 28);
  }
  else if ( sub_585470(this) )
  {
    v3 = a2 * *(this + 28);
    v8 += v3 / sub_585470(this);
  }
  if ( *(this + 26) )
  {
    v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 25) + 84))(*(this + 25));
    return (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 25) + 68))(*(this + 25), v8, v6);
  }
  else
  {
    v4 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 25) + 76))(*(this + 25), v8);
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 25) + 68))(*(this + 25), v4);
  }
}


//======================================================================
// sub_585240
// entry 00585240  size 205  status ok
//======================================================================

int __thiscall sub_585240(_DWORD **this, int a2)
{
  int v4; // [esp+Ch] [ebp-Ch]
  int v5; // [esp+10h] [ebp-8h]
  int v6; // [esp+14h] [ebp-4h]

  v5 = ((int (__thiscall *)(_DWORD **))(*this)[45])(this);
  if ( *(this + 26) )
  {
    v4 = *(_DWORD *)(a2 + 8);
    v6 = (*(int (__thiscall **)(_DWORD))(**(this + 25) + 76))(*(this + 25));
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 12);
    v6 = (*(int (__thiscall **)(_DWORD))(**(this + 25) + 84))(*(this + 25));
  }
  if ( v4 >= v6 )
  {
    if ( v5 > 1 )
      return ((int (__thiscall *)(_DWORD **, _DWORD, int))(*this)[46])(this, 0, v5);
    else
      return ((int (__thiscall *)(_DWORD **, _DWORD, int))(*this)[46])(this, 0, 1);
  }
  else if ( v5 > 1 )
  {
    return ((int (__thiscall *)(_DWORD **, int, int))(*this)[46])(this, 1, v5);
  }
  else
  {
    return ((int (__thiscall *)(_DWORD **, int, int))(*this)[46])(this, 1, 1);
  }
}


//======================================================================
// sub_585310
// entry 00585310  size 338  status ok
//======================================================================

int __thiscall sub_585310(_DWORD **this, int a2)
{
  double v3; // [esp+18h] [ebp-24h]
  double v5; // [esp+2Ch] [ebp-10h]
  double X; // [esp+2Ch] [ebp-10h]
  int v7; // [esp+38h] [ebp-4h]
  int v8; // [esp+38h] [ebp-4h]

  v5 = 0.0;
  if ( *(this + 26) )
    v7 = (*(int (__thiscall **)(_DWORD))(**(this + 25) + 76))(*(this + 25));
  else
    v7 = (*(int (__thiscall **)(_DWORD))(**(this + 25) + 84))(*(this + 25));
  v8 = v7 - unknown_libname_560(*(this + 25));
  if ( sub_585470(this) )
  {
    v3 = (double)(int)*(this + 28);
    X = (double)v8 / (v3 / (double)sub_585470(this));
    if ( fmod(X, 1.0) >= 0.5 )
      v5 = ceil(X);
    else
      v5 = floor(X);
  }
  if ( v5 < 0.0
    || ((int (__thiscall *)(_DWORD **))(*this)[44])(this)
    && (double)((int (__thiscall *)(_DWORD **))(*this)[44])(this) <= v5 )
  {
    sub_5E9F20(
      (char)"firstItem >= 0 && (!GetNumItems() || firstItem < GetNumItems())",
      "..\\Casino\\kenoscrollbox.cpp",
      371);
  }
  return ((int (__thiscall *)(_DWORD **, int))(*this)[47])(this, (int)v5);
}


//======================================================================
// sub_585470
// entry 00585470  size 66  status ok
//======================================================================

int __thiscall sub_585470(void *this)
{
  int v1; // esi
  int v4; // [esp+8h] [ebp-4h]

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 176))(this);
  v4 = v1 - (*(int (__thiscall **)(void *))(*(_DWORD *)this + 180))(this);
  if ( v4 < 0 )
    return 0;
  return v4;
}


//======================================================================
// sub_585500
// entry 00585500  size 217  status ok
//======================================================================

int __thiscall sub_585500(_DWORD *this, int a2, int a3)
{
  int v3; // esi

  if ( a2 == 1 )
  {
    if ( *(this + 29) - a3 >= 0 )
      *(this + 29) -= a3;
    else
      *(this + 29) = 0;
  }
  else
  {
    v3 = a3 + *(this + 29);
    if ( v3 <= (*(int (__thiscall **)(_DWORD *))(*this + 176))(this) - 1 )
      *(this + 29) += a3;
    else
      *(this + 29) = (*(int (__thiscall **)(_DWORD *))(*this + 176))(this) - 1;
  }
  if ( (int)*(this + 29) < 0 || *(this + 29) > (*(int (__thiscall **)(_DWORD *))(*this + 176))(this) - 1 )
    sub_5E9F20((char)"selectedID >= 0 && selectedID <= (GetNumItems() - 1)", "..\\Casino\\kenoscrollbox.cpp", 414);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, *(this + 29));
}


//======================================================================
// sub_5855E0
// entry 005855e0  size 37  status ok
//======================================================================

int __thiscall sub_5855E0(int *this, int a2)
{
  *(this + 29) = a2;
  return sub_585150(this, *(this + 29));
}


//======================================================================
// sub_5857A0
// entry 005857a0  size 136  status ok
//======================================================================

int __thiscall sub_5857A0(_BYTE **this)
{
  int i; // [esp+4h] [ebp-4h]

  **(this + 1) = 0;
  (*(this + 1))[1] = 1;
  (*(this + 1))[2] = 1;
  (*(this + 1))[3] = 0;
  (*(this + 1))[4] = 0;
  *((_DWORD *)*(this + 1) + 7) = 0;
  *((_DWORD *)*(this + 1) + 8) = 0;
  for ( i = 0; i < 20; ++i )
    (*(this + 1))[i + 5] = 0;
  return sub_585830(this);
}


//======================================================================
// sub_585830
// entry 00585830  size 22  status ok
//======================================================================

int __thiscall sub_585830(void *this)
{
  return sub_589290(dword_793584, this);
}


//======================================================================
// sub_585850
// entry 00585850  size 493  status ok
//======================================================================

int __thiscall sub_585850(int *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  result = (unsigned __int8)sub_585EB0(this);
  if ( (_BYTE)result )
  {
    v5 = sub_585E60(a2);
    if ( v5 == -1 )
    {
      result = sub_585ED0(this);
      if ( result == 20 )
        return result;
      result = *(this + 1);
      if ( *(char *)result >= 4 )
        return result;
      v3 = *(this + 1);
      *(_BYTE *)(v3 + sub_585ED0(this) + 5) = a2;
      if ( sub_585ED0(this) == 20 )
      {
        if ( *(char *)(*(this + 1) + 1) >= 6 )
          *(_BYTE *)(*(this + 1) + 1) = 10;
        else
          *(_BYTE *)(*(this + 1) + 1) = 5;
      }
      else
      {
        if ( sub_585ED0(this) > 9 && *(_BYTE *)(*(this + 1) + 1) == 1 )
          *(_BYTE *)(*(this + 1) + 1) = 2;
        if ( sub_585ED0(this) < 10 && *(_BYTE *)(*(this + 1) + 1) == 2 )
          *(_BYTE *)(*(this + 1) + 1) = 1;
      }
    }
    else
    {
      for ( i = v5; i < 19; ++i )
        *(_BYTE *)(*(this + 1) + i + 5) = *(_BYTE *)(*(this + 1) + i + 6);
      *(_BYTE *)(*(this + 1) + 24) = 0;
      if ( sub_585ED0(this) < 10 && *(_BYTE *)(*(this + 1) + 1) == 2 )
        *(_BYTE *)(*(this + 1) + 1) = 1;
    }
    if ( sub_585ED0(this) < 4 || sub_585ED0(this) > 6 )
    {
      if ( *(_BYTE *)(*(this + 1) + 3) )
      {
        *(_BYTE *)(*(this + 1) + 3) = 0;
        switch ( *(_BYTE *)(*(this + 1) + 1) )
        {
          case 7:
            *(_BYTE *)(*(this + 1) + 1) = 1;
            break;
          case 0xE:
            *(_BYTE *)(*(this + 1) + 1) = 5;
            break;
          case 0x1C:
            *(_BYTE *)(*(this + 1) + 1) = 10;
            break;
          case 0x46:
            *(_BYTE *)(*(this + 1) + 1) = 20;
            break;
          default:
            return sub_585830(this);
        }
      }
    }
    return sub_585830(this);
  }
  return result;
}


//======================================================================
// sub_585AA0
// entry 00585aa0  size 33  status ok
//======================================================================

int __thiscall sub_585AA0(_DWORD *this, char a2)
{
  *(_BYTE *)(*(this + 1) + 2) = a2;
  return sub_585830(this);
}


//======================================================================
// sub_585AD0
// entry 00585ad0  size 42  status ok
//======================================================================

int __thiscall sub_585AD0(_DWORD *this, char a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 1) )
  {
    *(_BYTE *)(*(this + 1) + 1) = a2;
    return sub_585830(this);
  }
  return result;
}


//======================================================================
// sub_585B00
// entry 00585b00  size 370  status ok
//======================================================================

int __thiscall sub_585B00(int this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int i; // [esp+8h] [ebp-4h]

  if ( a2 == 1 || a2 == 2 || a2 == 3 || (result = this, **(char **)(this + 4) != a2) )
  {
    **(_BYTE **)(this + 4) = a2;
    for ( i = 0; i < 20; ++i )
      *(_BYTE *)(*(_DWORD *)(this + 4) + i + 5) = 0;
    switch ( a2 )
    {
      case 1:
        while ( sub_585ED0(this) != 5 )
        {
          v3 = sub_62FBF0(80);
          sub_585850((int *)this, v3 + 1);
          **(_BYTE **)(*(_DWORD *)(dword_793584 + 15208) + 4) = 1;
        }
        break;
      case 2:
        while ( sub_585ED0(this) != 10 )
        {
          v4 = sub_62FBF0(80);
          sub_585850((int *)this, v4 + 1);
          **(_BYTE **)(*(_DWORD *)(dword_793584 + 15208) + 4) = 2;
        }
        break;
      case 3:
        while ( sub_585ED0(this) != 20 )
        {
          v5 = sub_62FBF0(80);
          sub_585850((int *)this, v5 + 1);
          **(_BYTE **)(*(_DWORD *)(dword_793584 + 15208) + 4) = 3;
        }
        break;
      case 4:
      case 5:
      case 6:
        sub_585AD0((_DWORD *)this, 5);
        break;
      default:
        break;
    }
    sub_589290(dword_793584, a2 - 1);
    return sub_585830((void *)this);
  }
  return result;
}


//======================================================================
// sub_585C90
// entry 00585c90  size 235  status ok
//======================================================================

int __thiscall sub_585C90(_DWORD *this, char a2)
{
  if ( a2 )
  {
    *(_BYTE *)(*(this + 1) + 3) = 1;
    switch ( *(_BYTE *)(*(this + 1) + 1) )
    {
      case 1:
        *(_BYTE *)(*(this + 1) + 1) = 7;
        break;
      case 5:
        *(_BYTE *)(*(this + 1) + 1) = 14;
        break;
      case 0xA:
        *(_BYTE *)(*(this + 1) + 1) = 28;
        break;
      case 0x14:
        *(_BYTE *)(*(this + 1) + 1) = 70;
        break;
      default:
        return sub_585830(this);
    }
  }
  else
  {
    *(_BYTE *)(*(this + 1) + 3) = 0;
    switch ( *(_BYTE *)(*(this + 1) + 1) )
    {
      case 7:
        *(_BYTE *)(*(this + 1) + 1) = 1;
        break;
      case 0xE:
        *(_BYTE *)(*(this + 1) + 1) = 5;
        break;
      case 0x1C:
        *(_BYTE *)(*(this + 1) + 1) = 10;
        break;
      case 0x46:
        *(_BYTE *)(*(this + 1) + 1) = 20;
        break;
      default:
        return sub_585830(this);
    }
  }
  return sub_585830(this);
}


//======================================================================
// sub_585E00
// entry 00585e00  size 40  status ok
//======================================================================

int __thiscall sub_585E00(_DWORD *this)
{
  *(_DWORD *)(*(this + 1) + 28) = *(_DWORD *)(dword_7947E0 + 152);
  return sub_585830(this);
}


//======================================================================
// sub_585E30
// entry 00585e30  size 33  status ok
//======================================================================

int __thiscall sub_585E30(_DWORD *this, int a2)
{
  *(_DWORD *)(*(this + 1) + 32) = a2;
  return sub_585830(this);
}


//======================================================================
// sub_585E60
// entry 00585e60  size 75  status ok
//======================================================================

int __thiscall sub_585E60(_DWORD *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = sub_585ED0(this); v5 < i; i = sub_585ED0(this) )
  {
    if ( *(char *)(*(this + 1) + v5 + 5) == a2 )
      return v5;
    ++v5;
  }
  return -1;
}


//======================================================================
// sub_585EB0
// entry 00585eb0  size 26  status ok
//======================================================================

BOOL __thiscall sub_585EB0(_DWORD *this)
{
  return *(_DWORD *)(*(this + 1) + 28) == 0;
}


//======================================================================
// sub_585ED0
// entry 00585ed0  size 76  status ok
//======================================================================

int __thiscall sub_585ED0(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 20; ++i )
  {
    if ( *(_BYTE *)(*(this + 1) + i + 5) )
      ++v2;
  }
  return v2;
}


//======================================================================
// sub_585F20
// entry 00585f20  size 558  status ok
//======================================================================

_DWORD *__thiscall sub_585F20(_DWORD *this)
{
  int i; // [esp+8h] [ebp-10h]
  int j; // [esp+8h] [ebp-10h]
  int k; // [esp+8h] [ebp-10h]
  int m; // [esp+8h] [ebp-10h]
  int n; // [esp+8h] [ebp-10h]

  sub_5F71F0(1, 0);
  *this = &KenoTicketDialog::`vftable';
  sub_5F83D0(3203000, 0);
  if ( (unsigned __int8)sub_635CB0(8) )
    sub_583940(dword_79357C);
  *(this + 3803) = 0;
  *(this + 196) = 0;
  *(this + 197) = 0;
  *(this + 3805) = 0;
  *(this + 3809) = 0;
  *(this + 3810) = 0;
  *(this + 3811) = 0;
  *(this + 3812) = 0;
  *(this + 3802) = 0;
  *(this + 200) = 0;
  *(this + 3813) = 0;
  *(this + 3804) = 0;
  *(this + 3814) = 0;
  *(this + 3815) = 0;
  *(this + 3816) = 0;
  for ( i = 0; i < 2; ++i )
    *(this + i + 198) = 0;
  for ( j = 0; j < 5; ++j )
    *(this + j + 191) = 0;
  for ( k = 0; k < 2; ++k )
    ;
  for ( m = 0; m < 3; ++m )
    *(this + m + 3806) = 0;
  for ( n = 0; n < 80; ++n )
    *(this + n + 111) = 0;
  *(this + 201) = 0;
  *(this + 3843) = 0;
  return this;
}


//======================================================================
// sub_586150
// entry 00586150  size 2206  status ok
//======================================================================

int __thiscall sub_586150(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+F8h] [ebp-10h]
  int j; // [esp+F8h] [ebp-10h]
  int k; // [esp+F8h] [ebp-10h]
  int m; // [esp+F8h] [ebp-10h]
  int n; // [esp+F8h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&KenoTicketDialog::`vftable';
  if ( *(this + 3803) )
  {
    (***(this + 3803))(*(this + 3803), 1);
    *(this + 3803) = 0;
  }
  if ( *(this + 196) )
  {
    (***(this + 196))(*(this + 196), 1);
    *(this + 196) = 0;
  }
  if ( *(this + 197) )
  {
    (***(this + 197))(*(this + 197), 1);
    *(this + 197) = 0;
  }
  if ( *(this + 3805) )
  {
    (***(this + 3805))(*(this + 3805), 1);
    *(this + 3805) = 0;
  }
  if ( *(this + 3809) )
  {
    (***(this + 3809))(*(this + 3809), 1);
    *(this + 3809) = 0;
  }
  if ( *(this + 3810) )
  {
    (***(this + 3810))(*(this + 3810), 1);
    *(this + 3810) = 0;
  }
  if ( *(this + 3811) )
  {
    (***(this + 3811))(*(this + 3811), 1);
    *(this + 3811) = 0;
  }
  if ( *(this + 3812) )
  {
    (***(this + 3812))(*(this + 3812), 1);
    *(this + 3812) = 0;
  }
  if ( *(this + 3802) )
  {
    (***(this + 3802))(*(this + 3802), 1);
    *(this + 3802) = 0;
  }
  if ( *(this + 3813) )
  {
    (***(this + 3813))(*(this + 3813), 1);
    *(this + 3813) = 0;
  }
  if ( *(this + 3804) )
  {
    (***(this + 3804))(*(this + 3804), 1);
    *(this + 3804) = 0;
  }
  if ( *(this + 3814) )
  {
    (***(this + 3814))(*(this + 3814), 1);
    *(this + 3814) = 0;
  }
  if ( *(this + 3815) )
  {
    (***(this + 3815))(*(this + 3815), 1);
    *(this + 3815) = 0;
  }
  if ( *(this + 3816) )
  {
    (***(this + 3816))(*(this + 3816), 1);
    *(this + 3816) = 0;
  }
  if ( *(this + 3843) )
  {
    (***(this + 3843))(*(this + 3843), 1);
    *(this + 3843) = 0;
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( *(this + i + 198) )
    {
      (***(this + i + 198))(*(this + i + 198), 1);
      *(this + i + 198) = 0;
    }
  }
  for ( j = 0; j < 5; ++j )
  {
    if ( *(this + j + 191) )
    {
      (***(this + j + 191))(*(this + j + 191), 1);
      *(this + j + 191) = 0;
    }
  }
  for ( k = 0; k < 2; ++k )
    ;
  for ( m = 0; m < 3; ++m )
  {
    if ( *(this + m + 3806) )
    {
      (***(this + m + 3806))(*(this + m + 3806), 1);
      *(this + m + 3806) = 0;
    }
  }
  for ( n = 0; n < 80; ++n )
  {
    if ( *(this + n + 111) )
    {
      (***(this + n + 111))(*(this + n + 111), 1);
      *(this + n + 111) = 0;
    }
  }
  if ( *(this + 201) )
  {
    (***(this + 201))(*(this + 201), 1);
    *(this + 201) = 0;
  }
  dword_793584 = 0;
  return sub_5F7260();
}


//======================================================================
// sub_5869F0
// entry 005869f0  size 6406  status ok
//======================================================================

int __thiscall sub_5869F0(_DWORD *this)
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
  char *v14; // eax
  int v16; // [esp-14h] [ebp-194h]
  int v17; // [esp-10h] [ebp-190h]
  int v18; // [esp+4h] [ebp-17Ch]
  int v19; // [esp+8h] [ebp-178h]
  int v20; // [esp+Ch] [ebp-174h]
  char v21; // [esp+10h] [ebp-170h]
  _DWORD *v22; // [esp+14h] [ebp-16Ch]
  int v23; // [esp+18h] [ebp-168h]
  _AFX_OLE_STATE *v24; // [esp+1Ch] [ebp-164h]
  _AFX_OLE_STATE *v25; // [esp+20h] [ebp-160h]
  _AFX_OLE_STATE *v26; // [esp+24h] [ebp-15Ch]
  int v27; // [esp+28h] [ebp-158h]
  int v28; // [esp+2Ch] [ebp-154h]
  int v29; // [esp+30h] [ebp-150h]
  int v30; // [esp+34h] [ebp-14Ch]
  _AFX_OLE_STATE *v31; // [esp+38h] [ebp-148h]
  int v32; // [esp+3Ch] [ebp-144h]
  int v33; // [esp+40h] [ebp-140h]
  int v34; // [esp+44h] [ebp-13Ch]
  int v35; // [esp+48h] [ebp-138h]
  int v36; // [esp+4Ch] [ebp-134h]
  int v37; // [esp+50h] [ebp-130h]
  CLongBinary *v38; // [esp+54h] [ebp-12Ch]
  _DWORD *v40; // [esp+64h] [ebp-11Ch]
  void *v41; // [esp+6Ch] [ebp-114h]
  _AFX_OLE_STATE *v42; // [esp+74h] [ebp-10Ch]
  _AFX_OLE_STATE *v43; // [esp+7Ch] [ebp-104h]
  _AFX_OLE_STATE *v44; // [esp+84h] [ebp-FCh]
  void *v45; // [esp+8Ch] [ebp-F4h]
  void *v46; // [esp+94h] [ebp-ECh]
  void *v47; // [esp+9Ch] [ebp-E4h]
  void *v48; // [esp+A4h] [ebp-DCh]
  _AFX_OLE_STATE *v49; // [esp+ACh] [ebp-D4h]
  void *v50; // [esp+B4h] [ebp-CCh]
  void *v51; // [esp+BCh] [ebp-C4h]
  void *v52; // [esp+C4h] [ebp-BCh]
  void *v53; // [esp+CCh] [ebp-B4h]
  void *v54; // [esp+D4h] [ebp-ACh]
  void *v55; // [esp+DCh] [ebp-A4h]
  CLongBinary *v56; // [esp+E4h] [ebp-9Ch]
  int v57; // [esp+ECh] [ebp-94h]
  _DWORD v58[5]; // [esp+F0h] [ebp-90h]
  _DWORD v59[2]; // [esp+104h] [ebp-7Ch]
  _DWORD v60[3]; // [esp+10Ch] [ebp-74h]
  int v61; // [esp+118h] [ebp-68h]
  _DWORD v62[3]; // [esp+11Ch] [ebp-64h]
  int v63; // [esp+128h] [ebp-58h]
  _DWORD v64[9]; // [esp+12Ch] [ebp-54h]
  _DWORD v65[3]; // [esp+150h] [ebp-30h]
  struct CPaneDivider *i; // [esp+15Ch] [ebp-24h]
  _DWORD v67[5]; // [esp+160h] [ebp-20h]
  int v68; // [esp+17Ch] [ebp-4h]

  v67[0] = "SID_KENO_TICKET_NEW";
  v67[1] = "SID_KENO_TICKET_DUPLICATE";
  v67[2] = "SID_KENO_TICKET_DELETE";
  v67[3] = "SID_KENO_TICKET_CLOSE";
  v67[4] = "SID_KENO_TICKET_SUBMIT";
  v63 = 336;
  v64[0] = 100;
  v64[1] = 362;
  v64[2] = 138;
  v64[3] = 436;
  v64[4] = 100;
  v64[5] = 462;
  v64[6] = 371;
  v64[7] = 362;
  v64[8] = 371;
  v59[0] = "SID_KENO_NEWGAMEEVERY_ELLIPSIS";
  v59[1] = "SID_KENO_MARK_COLON";
  v61 = 362;
  v62[0] = 187;
  v62[1] = 362;
  v62[2] = 235;
  v60[0] = 50;
  v60[1] = 162;
  v60[2] = 385;
  v65[0] = "SID_KENO";
  v65[1] = "SID_KENO_NEXTGAMENUMBER_COLON";
  v65[2] = "SID_KENO_GAMETIME";
  v57 = 65;
  v58[0] = 25;
  v58[1] = 235;
  v58[2] = 25;
  v58[3] = 170;
  v58[4] = 25;
  if ( !*(this + 3802) )
  {
    v56 = (CLongBinary *)operator new(8u);
    v68 = 0;
    if ( v56 )
      v38 = CLongBinary::CLongBinary(v56);
    else
      v38 = 0;
    v68 = -1;
    *(this + 3802) = v38;
  }
  sub_5887C0(this);
  sub_588C30();
  sub_5FA880(0, 0, 518, 1, 40, 360, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 0, 518, 1, 40, 361, 1, 255, 255, 255, 0, 0, 0);
  for ( i = 0; (int)i < 3; i = (struct CPaneDivider *)((char *)i + 1) )
  {
    if ( !*(this + (_DWORD)i + 3806) )
    {
      v55 = operator new(0x1D0u);
      v68 = 1;
      if ( v55 )
      {
        sub_5EC5A0(v55);
        v37 = v1;
      }
      else
      {
        v37 = 0;
      }
      v68 = -1;
      *(this + (_DWORD)i + 3806) = v37;
    }
    *(_DWORD *)(*(this + (_DWORD)i + 3806) + 4) = this;
    v2 = sub_630F40(v65[(_DWORD)i]);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + (_DWORD)i + 3806) + 180))(*(this + (_DWORD)i + 3806), v2);
    sub_5ECC60(v58[2 * (_DWORD)i - 1]);
    sub_5ECCB0(v58[2 * (_DWORD)i]);
    sub_5ECD00(73, -1, word_75EE1C);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + (_DWORD)i + 3806) + 64))(*(this + (_DWORD)i + 3806));
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + (_DWORD)i + 3806) + 68))(
      *(this + (_DWORD)i + 3806),
      v60[(_DWORD)i],
      6);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + (_DWORD)i + 3806) + 108))(*(this + (_DWORD)i + 3806), 1);
  }
  if ( !*(this + 3811) )
  {
    v54 = operator new(0x1D0u);
    v68 = 2;
    if ( v54 )
    {
      sub_5EC5A0(v54);
      v36 = v3;
    }
    else
    {
      v36 = 0;
    }
    v68 = -1;
    *(this + 3811) = v36;
  }
  *(_DWORD *)(*(this + 3811) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 3811) + 180))(*(this + 3811), &Source);
  sub_5ECD00(43, -1, word_75EE1C);
  sub_5ECC60(37);
  sub_5ECCB0(47);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3811) + 64))(*(this + 3811));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3811) + 108))(*(this + 3811), 1);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3811) + 68))(*(this + 3811), 7, 55);
  if ( !*(this + 3809) )
  {
    v53 = operator new(0x1D0u);
    v68 = 3;
    if ( v53 )
    {
      sub_5EC5A0(v53);
      v35 = v4;
    }
    else
    {
      v35 = 0;
    }
    v68 = -1;
    *(this + 3809) = v35;
  }
  *(_DWORD *)(*(this + 3809) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 3809) + 180))(*(this + 3809), "1/1");
  sub_5ECD00(31, -1, word_75EE1C);
  sub_5ECC60(100);
  sub_5ECCB0(23);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3809) + 64))(*(this + 3809));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3809) + 68))(*(this + 3809), 337, 40);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3809) + 108))(*(this + 3809), 1);
  if ( !*(this + 3810) )
  {
    v52 = operator new(0x1D0u);
    v68 = 4;
    if ( v52 )
    {
      sub_5EC5A0(v52);
      v34 = v5;
    }
    else
    {
      v34 = 0;
    }
    v68 = -1;
    *(this + 3810) = v34;
  }
  *(_DWORD *)(*(this + 3810) + 4) = this;
  v6 = sub_630F40("SID_KENO_NET_COLON");
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3810) + 180))(*(this + 3810), v6);
  sub_5ECD00(31, -1, word_75EE1C);
  sub_5ECC60(185);
  sub_5ECCB0(25);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3810) + 64))(*(this + 3810));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3810) + 68))(*(this + 3810), 337, 55);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3810) + 108))(*(this + 3810), 1);
  if ( !*(this + 3812) )
  {
    v51 = operator new(0x1D0u);
    v68 = 5;
    if ( v51 )
    {
      sub_5EC5A0(v51);
      v33 = v7;
    }
    else
    {
      v33 = 0;
    }
    v68 = -1;
    *(this + 3812) = v33;
  }
  *(_DWORD *)(*(this + 3812) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 3812) + 180))(*(this + 3812), &Source);
  sub_5ECD00(44, -1, word_75EE1C);
  sub_5ECC60(107);
  sub_5ECCB0(17);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3812) + 64))(*(this + 3812));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3812) + 68))(*(this + 3812), 86, 204);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3812) + 108))(*(this + 3812), 1);
  if ( !*(this + 3813) )
  {
    v50 = operator new(0x1D0u);
    v68 = 6;
    if ( v50 )
    {
      sub_5EC5A0(v50);
      v32 = v8;
    }
    else
    {
      v32 = 0;
    }
    v68 = -1;
    *(this + 3813) = v32;
  }
  *(_DWORD *)(*(this + 3813) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 3813) + 180))(*(this + 3813), "$1");
  sub_5ECD00(43, -1, word_75EE1C);
  sub_5ECC60(88);
  sub_5ECCB0(27);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3813) + 64))(*(this + 3813));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3813) + 108))(*(this + 3813), 1);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3813) + 68))(*(this + 3813), 170, 75);
  v49 = (_AFX_OLE_STATE *)operator new(0x1FCu);
  v68 = 7;
  if ( v49 )
    v31 = _AFX_OLE_STATE::_AFX_OLE_STATE(v49);
  else
    v31 = 0;
  v68 = -1;
  *(this + 200) = sub_5FA6A0(v31, 0, 0, 68, 76, "1", 43, 80, 27, 0, 0, 2, 3, 5);
  sub_60C330(*(this + 200));
  *(_BYTE *)(*(this + 200) + 157) = 1;
  sub_60C560(*(this + 200));
  *(_DWORD *)(*(this + 200) + 160) = 1;
  if ( !*(this + 3804) )
  {
    v48 = operator new(0x228u);
    v68 = 8;
    if ( v48 )
      v30 = sub_58B140(v48);
    else
      v30 = 0;
    v68 = -1;
    *(this + 3804) = v30;
  }
  *(_DWORD *)(*(this + 3804) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3804) + 64))(*(this + 3804));
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3804) + 68))(*(this + 3804), 275, 40);
  sub_5EAF00(3203002);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3804) + 108))(*(this + 3804), 100);
  if ( !*(this + 3814) )
  {
    v47 = operator new(0x1D0u);
    v68 = 9;
    if ( v47 )
    {
      sub_5EC5A0(v47);
      v29 = v9;
    }
    else
    {
      v29 = 0;
    }
    v68 = -1;
    *(this + 3814) = v29;
  }
  *(_DWORD *)(*(this + 3814) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 3814) + 180))(*(this + 3814), &Source);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3814) + 64))(*(this + 3814));
  sub_5ECD00(31, -1, word_75EE1C);
  sub_5ECC60(185);
  sub_5ECCB0(16);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3814) + 68))(*(this + 3814), 337, 70);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3814) + 108))(*(this + 3814), 1);
  if ( !*(this + 3815) )
  {
    v46 = operator new(0x178u);
    v68 = 10;
    if ( v46 )
    {
      sub_5EAAF0(v46);
      v28 = v10;
    }
    else
    {
      v28 = 0;
    }
    v68 = -1;
    *(this + 3815) = v28;
  }
  *(_DWORD *)(*(this + 3815) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3815) + 64))(*(this + 3815));
  sub_5EAF00(3203007);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3815) + 108))(*(this + 3815), 7);
  if ( !*(this + 3816) )
  {
    v45 = operator new(0x178u);
    v68 = 11;
    if ( v45 )
    {
      sub_5EAAF0(v45);
      v27 = v11;
    }
    else
    {
      v27 = 0;
    }
    v68 = -1;
    *(this + 3816) = v27;
  }
  *(_DWORD *)(*(this + 3816) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3816) + 64))(*(this + 3816));
  sub_5EAF00(3203009);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3816) + 108))(*(this + 3816), 10);
  for ( i = 0; (int)i < 5; i = (struct CPaneDivider *)((char *)i + 1) )
  {
    if ( !*(this + (_DWORD)i + 191) )
    {
      v44 = (_AFX_OLE_STATE *)operator new(0x1DCu);
      v68 = 12;
      if ( v44 )
        v26 = _AFX_OLE_STATE::_AFX_OLE_STATE(v44);
      else
        v26 = 0;
      v68 = -1;
      *(this + (_DWORD)i + 191) = v26;
    }
    *(_DWORD *)(*(this + (_DWORD)i + 191) + 4) = this;
    sub_5EAE80(3200223 - (i != (struct CPaneDivider *)1), v64[2 * (_DWORD)i - 1], v64[2 * (_DWORD)i], 1, -1);
    v12 = sub_630F40(v67[(_DWORD)i]);
    (*(void (__thiscall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + (_DWORD)i + 191) + 220))(
      *(this + (_DWORD)i + 191),
      v12,
      72,
      75,
      74,
      -1,
      0,
      0);
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + (_DWORD)i + 191), i);
    if ( i == (struct CPaneDivider *)3 )
    {
      sub_6026F0(13);
      sub_6023D0(4, 5, 6, 7);
    }
  }
  if ( !*(this + 3803) )
  {
    v43 = (_AFX_OLE_STATE *)operator new(0x1DCu);
    v68 = 13;
    if ( v43 )
      v25 = _AFX_OLE_STATE::_AFX_OLE_STATE(v43);
    else
      v25 = 0;
    v68 = -1;
    *(this + 3803) = v25;
    *(_DWORD *)(*(this + 3803) + 4) = this;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3803) + 200))(*(this + 3803), 3203056);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3803) + 64))(*(this + 3803));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3803) + 108))(*(this + 3803), 1);
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3803) + 68))(*(this + 3803), 520, 40);
  }
  if ( !*(this + 196) )
  {
    v42 = (_AFX_OLE_STATE *)operator new(0x208u);
    v68 = 14;
    if ( v42 )
      v24 = _AFX_OLE_STATE::_AFX_OLE_STATE(v42);
    else
      v24 = 0;
    v68 = -1;
    *(this + 196) = v24;
    *(_DWORD *)(*(this + 196) + 4) = this;
    sub_5EAE80(3203011, 7, 88, 4, -1);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 196) + 220))(
      *(this + 196),
      &Source,
      103,
      -1,
      48,
      -1,
      0,
      0);
  }
  for ( i = 0; (int)i < 2; i = (struct CPaneDivider *)((char *)i + 1) )
  {
    v17 = v62[2 * (_DWORD)i] - 15;
    v16 = v62[2 * (_DWORD)i - 1];
    v13 = sub_630F40(v59[(_DWORD)i]);
    sub_5FA5B0(0, -1, v13, 31, 150, 15, v16, v17, 1, 5, -1);
    sub_5FAEE0(
      0,
      i,
      3200209,
      v62[2 * (_DWORD)i - 1],
      v62[2 * (_DWORD)i],
      1,
      (struct Concurrency::details::SchedulerBase *)((i != 0) + 3203003),
      1,
      &Source,
      31,
      69,
      66,
      -1);
  }
  for ( i = 0; (int)i < 80; i = (struct CPaneDivider *)((char *)i + 1) )
  {
    if ( !*(this + (_DWORD)i + 111) )
    {
      v41 = operator new(0x20Cu);
      v68 = 15;
      if ( v41 )
        v23 = sub_58D320(v41);
      else
        v23 = 0;
      v68 = -1;
      *(this + (_DWORD)i + 111) = v23;
      *(_DWORD *)(*(this + (_DWORD)i + 111) + 4) = this;
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + (_DWORD)i + 111) + 200))(
        *(this + (_DWORD)i + 111),
        3203001);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + (_DWORD)i + 111) + 64))(*(this + (_DWORD)i + 111));
      (*(void (__thiscall **)(_DWORD, struct CPaneDivider *))(*(_DWORD *)*(this + (_DWORD)i + 111) + 176))(
        *(this + (_DWORD)i + 111),
        i);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + (_DWORD)i + 111) + 108))(*(this + (_DWORD)i + 111), 1);
      sub_5FFF90(i, i, i, i, i, i, i, i);
      sub_602790(0);
    }
  }
  v14 = (char *)sub_630F40("SID_GENERIC_HELP");
  sub_5FA790(0, -1, v14, 72, 210, 70, 322, 280, 1, 120, 124, 161, 255, 255, 255, 0);
  if ( !*(this + 3805) )
  {
    v40 = operator new(0x1D0u);
    v68 = 16;
    if ( v40 )
    {
      sub_5EC5A0(v40);
      *v40 = &KenoDialogHelpText::`vftable';
      v22 = v40;
    }
    else
    {
      v22 = 0;
    }
    v68 = -1;
    *(this + 3805) = v22;
  }
  *(_DWORD *)(*(this + 3805) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 3805) + 180))(*(this + 3805), &Source);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3805) + 64))(*(this + 3805));
  sub_5EF3B0(12);
  sub_5ECD00(35, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 3805) + 68))(*(this + 3805), 330, 290);
  sub_5ECC60(195);
  sub_5ECCB0(100);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3805) + 108))(*(this + 3805), 1);
  v21 = sub_5E2F60(dword_7947E0);
  switch ( v21 )
  {
    case 2:
      v20 = sub_5FB5E0(0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v20 + 240))(v20, 3203005, 0);
      break;
    case 5:
      v19 = sub_5FB5E0(0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v19 + 240))(v19, 3203006, 0);
      break;
    case 10:
      v18 = sub_5FB5E0(0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 240))(v18, 3203007, 0);
      break;
  }
  if ( !sub_588A80(this) )
    sub_5F2BA0(3203008);
  sub_589050(-1);
  return sub_58DFB0(*(this + *(this + 3842) + 3833));
}


//======================================================================
// sub_588300
// entry 00588300  size 511  status ok
//======================================================================

int __thiscall sub_588300(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]
  int m; // [esp+4h] [ebp-4h]

  sub_5F85D0(this);
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(this + i + 191) + 116))(*(this + i + 191));
  for ( j = 0; j < 3; ++j )
    (*(void (__thiscall **)(_DWORD))(**(this + j + 3806) + 116))(*(this + j + 3806));
  (*(void (__thiscall **)(_DWORD))(**(this + 3803) + 116))(*(this + 3803));
  (*(void (__thiscall **)(_DWORD))(**(this + 196) + 116))(*(this + 196));
  (*(void (__thiscall **)(_DWORD))(**(this + 197) + 116))(*(this + 197));
  (*(void (__thiscall **)(_DWORD))(**(this + 3805) + 116))(*(this + 3805));
  (*(void (__thiscall **)(_DWORD))(**(this + 3811) + 116))(*(this + 3811));
  (*(void (__thiscall **)(_DWORD))(**(this + 3809) + 116))(*(this + 3809));
  (*(void (__thiscall **)(_DWORD))(**(this + 3810) + 116))(*(this + 3810));
  (*(void (__thiscall **)(_DWORD))(**(this + 3812) + 116))(*(this + 3812));
  (*(void (__thiscall **)(_DWORD))(**(this + 3813) + 116))(*(this + 3813));
  result = (*(int (__thiscall **)(_DWORD))(**(this + 200) + 116))(*(this + 200));
  for ( k = 0; k < 2; ++k )
    result = (*(int (__thiscall **)(_DWORD))(**(this + k + 198) + 116))(*(this + k + 198));
  for ( m = 0; m < 80; ++m )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + m + 111) + 116))(*(this + m + 111));
    result = m + 1;
  }
  return result;
}


//======================================================================
// sub_588500
// entry 00588500  size 58  status ok
//======================================================================

int __thiscall sub_588500(_DWORD **this)
{
  if ( *(this + 3843) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 3843) + 8))(*(this + 3843));
  else
    return sub_5F8340(this);
}


//======================================================================
// sub_588540
// entry 00588540  size 41  status ok
//======================================================================

_DWORD *__thiscall sub_588540(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  if ( !*(this + 3843) )
    return (_DWORD *)sub_5F72F0(a2);
  return result;
}


//======================================================================
// sub_588570
// entry 00588570  size 545  status ok
//======================================================================

int __thiscall sub_588570(int *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // [esp+4h] [ebp-34h]
  _DWORD *v5; // [esp+8h] [ebp-30h]
  _DWORD *v7; // [esp+14h] [ebp-24h]
  _DWORD *v8; // [esp+1Ch] [ebp-1Ch]
  int v9; // [esp+24h] [ebp-14h]
  int v10; // [esp+28h] [ebp-10h]

  result = a2;
  switch ( a2 )
  {
    case 3203005:
    case 3203006:
    case 3203007:
      sub_58A690(this);
      result = sub_583900();
      break;
    case 3203008:
      if ( sub_585EB0((_DWORD *)*(this + 3802)) )
      {
        v9 = *(this + *(this + 3842) + 3833) - 1;
        if ( v9 < 0 )
          v9 = 0;
        sub_58DFB0(v9);
      }
      v10 = sub_588A80(this);
      if ( v10 < 1 || v10 > 100 )
      {
        sub_5E9F20((char)"0", "..\\Casino\\kenoticketdialog.cpp", 730);
        v7 = operator new(0x1D0u);
        if ( v7 )
          v4 = sub_582780(v7, 1);
        else
          v4 = 0;
        *(this + 3843) = (int)v4;
        result = (int)v4;
      }
      else
      {
        v8 = operator new(0x1D0u);
        if ( v8 )
          v5 = sub_582780(v8, v10);
        else
          v5 = 0;
        *(this + 3843) = (int)v5;
        result = (int)v5;
      }
      break;
    case 3203009:
      result = sub_585B00(*(this + 3802), 0);
      break;
    case 3203010:
      result = sub_585B00(*(this + 3802), 1);
      break;
    case 3203011:
      result = sub_585B00(*(this + 3802), 2);
      break;
    case 3203012:
      result = sub_585B00(*(this + 3802), 3);
      break;
    case 3203013:
      result = sub_585B00(*(this + 3802), 4);
      break;
    case 3203014:
      result = sub_585B00(*(this + 3802), 5);
      break;
    case 3203015:
      result = sub_585B00(*(this + 3802), 6);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5887C0
// entry 005887c0  size 697  status ok
//======================================================================

int __thiscall sub_5887C0(char *this)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int result; // eax
  char *Destination; // [esp+0h] [ebp-2Ch]
  CImageDisplay *v6; // [esp+Ch] [ebp-20h]
  char *Str2; // [esp+10h] [ebp-1Ch]
  CImageDisplay *v8; // [esp+14h] [ebp-18h]
  CImageDisplay *v9; // [esp+18h] [ebp-14h]
  int n; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]
  int j; // [esp+28h] [ebp-4h]
  int k; // [esp+28h] [ebp-4h]
  int m; // [esp+28h] [ebp-4h]

  *((_DWORD *)this + 3841) = 0;
  *((_DWORD *)this + 3842) = 0;
  for ( i = 0; i < 4; ++i )
  {
    strcpy(this + 16 * i + 15268, &Source);
    *((_DWORD *)this + i + 3833) = 0;
    *((_DWORD *)this + i + 3837) = 0;
  }
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++j )
  {
    v9 = (CImageDisplay *)sub_5DCB00(j);
    if ( CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3 )
    {
      v8 = (CImageDisplay *)sub_5DCB00(j);
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v8)->rcSource.top;
      if ( strcmp(this + 16 * *((_DWORD *)this + 3841) + 15268, Str2) )
      {
        Destination = this + 16 * (*((_DWORD *)this + 3841))++ + 15268;
        v6 = (CImageDisplay *)sub_5DCB00(j);
        DisplayFormat = CImageDisplay::GetDisplayFormat(v6);
        strcpy(Destination, (const char *)&DisplayFormat->rcSource.top);
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 3841); ++k )
    sub_5E2B90(this + 16 * k + 15268, this + 3600 * k + 808, -1);
  for ( m = 0; ; ++m )
  {
    result = m;
    if ( m >= *((_DWORD *)this + 3841) )
      break;
    for ( n = 0; n < 100 && *((_DWORD *)this + 900 * m + 9 * n + 209); ++n )
      ++*((_DWORD *)this + m + 3837);
    if ( *((_DWORD *)this + m + 3837) )
      *((_DWORD *)this + m + 3833) = *((_DWORD *)this + m + 3837) - 1;
    else
      *((_DWORD *)this + m + 3837) = 1;
  }
  return result;
}


//======================================================================
// sub_588A80
// entry 00588a80  size 431  status ok
//======================================================================

int __thiscall sub_588A80(_DWORD *this)
{
  char v2; // [esp+0h] [ebp-38h]
  int v3; // [esp+0h] [ebp-38h]
  int v4; // [esp+4h] [ebp-34h]
  int v5; // [esp+8h] [ebp-30h]
  int v6; // [esp+10h] [ebp-28h]
  int v7; // [esp+18h] [ebp-20h]
  int v8; // [esp+1Ch] [ebp-1Ch]
  int j; // [esp+24h] [ebp-14h]
  int v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+2Ch] [ebp-Ch]
  int i; // [esp+30h] [ebp-8h]
  int v13; // [esp+34h] [ebp-4h]

  v10 = *(_DWORD *)(dword_7947E0 + 152);
  v13 = 0;
  for ( i = 0; i < *(this + 3841); ++i )
  {
    v11 = 0;
    for ( j = 0; j < 100; ++j )
    {
      v7 = *(this + 900 * i + 9 * j + 209);
      v8 = v7 + *((char *)this + 3600 * i + 36 * j + 810) - 1;
      if ( !*((_BYTE *)this + 3600 * i + 36 * j + 812) && v7 && v7 <= v10 && v8 >= v10 )
      {
        if ( v11 <= v8 )
          v5 = v7 + *((char *)this + 3600 * i + 36 * j + 810) - 1;
        else
          v5 = v11;
        v11 = v5;
      }
    }
    if ( v13 <= v11 )
      v4 = v11;
    else
      v4 = v13;
    v13 = v4;
  }
  if ( v13 )
  {
    v6 = v13 - v10 + 1;
    if ( v6 > 100 )
      sub_5E9F20((char)"totGamesToPlay <= 100", "..\\Casino\\kenoticketdialog.cpp", 815);
    if ( v6 >= 100 )
      v3 = 100;
    else
      v3 = v13 - v10 + 1;
    sub_62FDE0("Games to play to resolve all open tickets:%d \n", v3);
    return v3;
  }
  else
  {
    sub_62FDE0("Games to play to resolve all open tickets: 0\n", v2);
    return 0;
  }
}


//======================================================================
// sub_588C30
// entry 00588c30  size 1052  status ok
//======================================================================

int __thiscall sub_588C30(int this)
{
  int v2; // [esp+4h] [ebp-40h]
  int v3; // [esp+8h] [ebp-3Ch]
  int v4; // [esp+Ch] [ebp-38h]
  void *v6; // [esp+14h] [ebp-30h]
  void *v7; // [esp+1Ch] [ebp-28h]
  void *v8; // [esp+24h] [ebp-20h]
  _DWORD v9[2]; // [esp+2Ch] [ebp-18h]
  int i; // [esp+34h] [ebp-10h]
  int v11; // [esp+40h] [ebp-4h]

  v9[0] = 143;
  v9[1] = 243;
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(_DWORD *)(this + 4 * i + 792) )
    {
      v8 = operator new(0x8Cu);
      v11 = 0;
      if ( v8 )
        v4 = sub_58D750(i);
      else
        v4 = 0;
      v11 = -1;
      *(_DWORD *)(this + 4 * i + 792) = v4;
      *(_DWORD *)(*(_DWORD *)(this + 4 * i + 792) + 4) = this;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 792) + 64))(*(_DWORD *)(this + 4 * i + 792));
      sub_584ED0(*(_DWORD *)(this + 4 * i + 792), 3203005, 3203006, 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4 * i + 792) + 68))(
        *(_DWORD *)(this + 4 * i + 792),
        v9[i],
        39);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 792) + 120))(
        *(_DWORD *)(this + 4 * i + 792),
        15,
        29);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 792) + 108))(
        *(_DWORD *)(this + 4 * i + 792),
        1);
      if ( i )
      {
        sub_58D840((char *)&Source);
        sub_5ECC60(73);
        sub_5ECCB0(27);
        sub_58D840("$1");
        CMFCRibbonPanel::SetCenterColumnVert(*(CMFCRibbonPanel **)(this + 796), 4);
      }
      else
      {
        sub_58D840((char *)&Source);
        sub_5ECC60(85);
        sub_5ECCB0(25);
        sub_58D840((char *)(this + 16 * *(_DWORD *)(this + 15368) + 15268));
      }
      if ( i || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 792) + 176))(*(_DWORD *)(this + 792)) != 1 )
        sub_58DCE0(*(_DWORD *)(this + 4 * i + 792));
      else
        sub_58DEF0(*(_DWORD *)(this + 4 * i + 792));
    }
  }
  if ( !*(_DWORD *)(this + 788) )
  {
    v7 = operator new(0x84u);
    v11 = 1;
    if ( v7 )
      v3 = sub_58DF60(v7);
    else
      v3 = 0;
    v11 = -1;
    *(_DWORD *)(this + 788) = v3;
  }
  *(_DWORD *)(*(_DWORD *)(this + 788) + 4) = this;
  sub_584ED0(*(_DWORD *)(this + 788), 3200203, 3200204, 3200207);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 788) + 64))(*(_DWORD *)(this + 788));
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 788) + 68))(*(_DWORD *)(this + 788), 280, 48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 788) + 120))(*(_DWORD *)(this + 788), 15, 256);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 788) + 108))(*(_DWORD *)(this + 788), 1);
  sub_585010(*(_DWORD *)(this + 788));
  sub_5F62F0(0);
  v6 = operator new(0x17Cu);
  v11 = 2;
  if ( v6 )
    v2 = sub_58EC60(this);
  else
    v2 = 0;
  *(_DWORD *)(this + 804) = v2;
  return v2;
}


//======================================================================
// sub_589050
// entry 00589050  size 153  status ok
//======================================================================

int __thiscall sub_589050(_DWORD **this, int a2)
{
  const char *v2; // eax
  int result; // eax
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  if ( a2 == -1 )
    a2 = *(_DWORD *)(dword_7947E0 + 152);
  v2 = (const char *)sub_630F40("SID_KENO_NEXTGAME_FORMAT");
  result = sprintf(Buffer, v2, a2);
  if ( *(this + 3807) )
    return (*(int (__thiscall **)(_DWORD, char *))(**(this + 3807) + 180))(*(this + 3807), Buffer);
  return result;
}


//======================================================================
// sub_5890F0
// entry 005890f0  size 189  status ok
//======================================================================

int __thiscall sub_5890F0(_DWORD **this, int a2)
{
  const char *v2; // eax
  int result; // eax
  char Buffer[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = (const char *)sub_630F40("SID_KENO_GAMETIME_FORMAT");
  result = sprintf(Buffer, v2, a2 / 3600, a2 % 3600 / 60);
  if ( *(this + 3808) )
    return (*(int (__thiscall **)(_DWORD, char *))(**(this + 3808) + 180))(*(this + 3808), Buffer);
  return result;
}


//======================================================================
// sub_5891B0
// entry 005891b0  size 213  status ok
//======================================================================

int __thiscall sub_5891B0(int this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < *(_DWORD *)(this + 15364); ++i )
  {
    for ( j = 0; j < *(_DWORD *)(this + 4 * i + 15348); ++j )
    {
      if ( *(_DWORD *)(this + 3600 * i + 808 + 36 * j + 28) )
        sub_5E2B90((char *)(this + 16 * i + 15268), 36 * j + this + 3600 * i + 808, j);
    }
  }
  result = sub_585EB0(*(_DWORD **)(this + 15208));
  if ( !(_BYTE)result )
    return sub_589290(this, this);
  return result;
}


//======================================================================
// sub_589290
// entry 00589290  size 4216  status ok
//======================================================================

int __thiscall sub_589290(int this)
{
  int v1; // eax
  const char *v2; // eax
  int v3; // eax
  const char *v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // [esp-4h] [ebp-2A8h]
  int v8; // [esp+Ch] [ebp-298h]
  int v9; // [esp+10h] [ebp-294h]
  int v10; // [esp+1Ch] [ebp-288h]
  int v11; // [esp+20h] [ebp-284h]
  int v12; // [esp+24h] [ebp-280h]
  int v13; // [esp+28h] [ebp-27Ch]
  int v14; // [esp+2Ch] [ebp-278h]
  int v15; // [esp+30h] [ebp-274h]
  int v16; // [esp+34h] [ebp-270h]
  int v18; // [esp+60h] [ebp-244h]
  int v19; // [esp+64h] [ebp-240h]
  _DWORD v20[9]; // [esp+68h] [ebp-23Ch] BYREF
  char Buffer[260]; // [esp+8Ch] [ebp-218h] BYREF
  __int64 v22; // [esp+190h] [ebp-114h] BYREF
  int i; // [esp+198h] [ebp-10Ch]
  char Source[260]; // [esp+19Ch] [ebp-108h] BYREF

  v22 = sub_64C8A0(0, 0);
  qmemcpy(v20, *(const void **)(*(_DWORD *)(this + 15208) + 4), sizeof(v20));
  switch ( LOBYTE(v20[0]) )
  {
    case 0:
      v16 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 240))(v16, 3203009, 0);
      break;
    case 1:
      v15 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 240))(v15, 3203010, 0);
      break;
    case 2:
      v14 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 240))(v14, 3203011, 0);
      break;
    case 3:
      v13 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 240))(v13, 3203012, 0);
      break;
    case 4:
      v12 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 240))(v12, 3203013, 0);
      break;
    case 5:
      v11 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 240))(v11, 3203014, 0);
      break;
    case 6:
      v10 = sub_5FB5E0(1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 240))(v10, 3203015, 0);
      break;
    default:
      break;
  }
  for ( i = 0; i < 80; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 444) + 248))(*(_DWORD *)(this + 4 * i + 444));
  if ( *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15348) )
    sprintf(
      Buffer,
      "%d/%d",
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332) + 1,
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15348));
  else
    sprintf(Buffer, "%d/%d", *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332) + 1, 1);
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 15236) + 180))(*(_DWORD *)(this + 15236), Buffer);
  if ( v20[7] )
  {
    sprintf(Buffer, "%04d", v20[7]);
    if ( SBYTE2(v20[0]) > 1 )
    {
      v18 = v20[7] + SBYTE2(v20[0]) - 1;
      if ( v18 > 1000 )
        v18 = v20[7] + SBYTE2(v20[0]) - 1001;
      sprintf(Source, "-%04d", v18);
      strcat(Buffer, Source);
    }
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 15248) + 180))(*(_DWORD *)(this + 15248), Buffer);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 15248) + 180))(
      *(_DWORD *)(this + 15248),
      &::Source);
  }
  if ( LOBYTE(v20[1]) )
  {
    if ( v20[8] <= SBYTE2(v20[0]) * -SBYTE1(v20[0]) )
      sub_5EAF00(3203009);
    else
      sub_5EAF00(3203010);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 15264) + 68))(*(_DWORD *)(this + 15264), 20, 105);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 15264) + 116))(*(_DWORD *)(this + 15264));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 15264) + 112))(*(_DWORD *)(this + 15264));
  }
  if ( SLOBYTE(v20[0]) > 3 )
  {
    switch ( LOBYTE(v20[0]) )
    {
      case 4:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 15260) + 176))(*(_DWORD *)(this + 15260), 2);
        break;
      case 5:
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 15260) + 176))(*(_DWORD *)(this + 15260), 0);
        break;
      case 6:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 15260) + 176))(*(_DWORD *)(this + 15260), 1);
        break;
    }
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 15244) + 180))(
      *(_DWORD *)(this + 15244),
      &::Source);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 15260) + 116))(*(_DWORD *)(this + 15260));
    if ( SLOBYTE(v20[0]) == 4 )
    {
      for ( i = 1; i < 11; ++i )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 440) + 244))(*(_DWORD *)(this + 4 * i + 440));
      for ( i = 71; i < 81; ++i )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 440) + 244))(*(_DWORD *)(this + 4 * i + 440));
      for ( i = 11; i < 62; i += 10 )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 440) + 244))(*(_DWORD *)(this + 4 * i + 440));
      for ( i = 20; i < 71; i += 10 )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 440) + 244))(*(_DWORD *)(this + 4 * i + 440));
    }
  }
  else
  {
    for ( i = 0; i < 20; ++i )
    {
      if ( *((char *)&v20[1] + i + 1) < 1 || *((char *)&v20[1] + i + 1) > 80 )
      {
        if ( *((_BYTE *)&v20[1] + i + 1) )
          sub_5E9F20((char)"0", "..\\Casino\\kenoticketdialog.cpp", 1005);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *((char *)&v20[1] + i + 1) + 440) + 244))(*(_DWORD *)(this + 4 * *((char *)&v20[1] + i + 1) + 440));
      }
    }
    if ( sub_58A470(this) )
    {
      if ( sub_58A470(this) >= 10 )
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 15244) + 68))(*(_DWORD *)(this + 15244), 7, 55);
      else
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 15244) + 68))(*(_DWORD *)(this + 15244), 17, 55);
      v1 = sub_58A470(this);
      sprintf(Buffer, "%d", v1);
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 15244) + 180))(*(_DWORD *)(this + 15244), Buffer);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 15244) + 180))(
        *(_DWORD *)(this + 15244),
        &::Source);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 15260) + 112))(*(_DWORD *)(this + 15260));
  }
  if ( sub_58A470(this) >= 4 && sub_58A470(this) <= 6 && HIBYTE(v20[0]) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 784) + 244))(*(_DWORD *)(this + 784));
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 784) + 248))(*(_DWORD *)(this + 784));
  if ( sub_58A470(this) == 20 )
  {
    if ( SBYTE1(v20[0]) == 5 )
LABEL_72:
      CMFCRibbonPanel::SetCenterColumnVert(*(CMFCRibbonPanel **)(this + 796), 1);
    else
LABEL_77:
      CMFCRibbonPanel::SetCenterColumnVert(*(CMFCRibbonPanel **)(this + 796), 0);
  }
  else
  {
    switch ( BYTE1(v20[0]) )
    {
      case 1:
      case 2:
      case 7:
        CMFCRibbonPanel::SetCenterColumnVert(*(CMFCRibbonPanel **)(this + 796), 3);
        break;
      case 5:
      case 0xE:
        CMFCRibbonPanel::SetCenterColumnVert(*(CMFCRibbonPanel **)(this + 796), 2);
        break;
      case 0xA:
      case 0x1C:
        goto LABEL_72;
      case 0x14:
      case 0x46:
        goto LABEL_77;
      default:
        break;
    }
  }
  sprintf(Buffer, off_6BB590, SBYTE1(v20[0]));
  sub_58D840(Buffer);
  if ( BYTE2(v20[0]) )
  {
    sprintf(Buffer, "%d", SBYTE2(v20[0]));
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 800) + 180))(*(_DWORD *)(this + 800), Buffer);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 800) + 180))(*(_DWORD *)(this + 800), &::Source);
  }
  if ( v20[7] )
  {
    if ( v20[8] < 0 )
    {
      v7 = -v20[8];
      v2 = (const char *)sub_630F40("SID_KENO_NETNEGATIVE_FORMAT");
    }
    else
    {
      v7 = v20[8];
      v2 = (const char *)sub_630F40("SID_KENO_NETPOSITIVE_FORMAT");
    }
    sprintf(Buffer, v2, v7);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 15240) + 180))(*(_DWORD *)(this + 15240), Buffer);
  }
  else
  {
    v3 = sub_630F40("SID_KENO_NET_COLON");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 15240) + 180))(*(_DWORD *)(this + 15240), v3);
  }
  sprintf(Buffer, off_6BB590, SBYTE2(v20[0]) * SBYTE1(v20[0]));
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 15252) + 180))(*(_DWORD *)(this + 15252), Buffer);
  if ( sub_585EB0(*(_DWORD **)(this + 15208)) )
  {
    for ( i = 0; i < 80; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 444) + 204))(*(_DWORD *)(this + 4 * i + 444));
    sub_60C300(*(_DWORD *)(this + 800));
    v9 = sub_5FB5E0(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 204))(v9);
    if ( sub_58A470(this) < 4 || sub_58A470(this) > 6 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 784) + 208))(*(_DWORD *)(this + 784));
    else
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 784) + 204))(*(_DWORD *)(this + 784));
    if ( SLOBYTE(v20[0]) > 3 )
      sub_58DEF0(*(_DWORD *)(this + 796));
    else
      sub_58DCE0(*(_DWORD *)(this + 796));
  }
  else
  {
    for ( i = 0; i < 80; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 444) + 208))(*(_DWORD *)(this + 4 * i + 444));
    sub_60C330(*(_DWORD *)(this + 800));
    v8 = sub_5FB5E0(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 208))(v8);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 784) + 208))(*(_DWORD *)(this + 784));
    sub_58DEF0(*(_DWORD *)(this + 796));
  }
  v4 = (const char *)sub_630F40("SID_KENO_BANK_COLON");
  strcpy(Source, v4);
  sub_5DE230((char *)(this + 16 * *(_DWORD *)(this + 15368) + 15268), &v22);
  sub_64C8D0(v22, SHIDWORD(v22), Buffer, 1, 1, 1);
  strcat(Source, Buffer);
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 15256) + 180))(*(_DWORD *)(this + 15256), Source);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 15256) + 116))(*(_DWORD *)(this + 15256));
  sub_58A380(this);
  sub_58F530(*(_DWORD *)(*(_DWORD *)(this + 15208) + 4));
  if ( sub_588A80((_DWORD *)this) )
    sub_5F2B20(3203008, 1);
  else
    sub_5F2BA0(3203008);
  v19 = sub_58A470(this);
  if ( *(_DWORD *)(sub_5FB5E0(1) + 496) == 3203012 && v19 != 20
    || *(_DWORD *)(sub_5FB5E0(1) + 496) == 3203011 && v19 != 10
    || (result = sub_5FB5E0(1), *(_DWORD *)(result + 496) == 3203010) && v19 != 5 )
  {
    v6 = sub_5FB5E0(1);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 240))(v6, 3203009, 0);
    **(_BYTE **)(*(_DWORD *)(this + 15208) + 4) = 0;
    return this;
  }
  return result;
}


//======================================================================
// sub_58A380
// entry 0058a380  size 231  status ok
//======================================================================

int __thiscall sub_58A380(_DWORD **this)
{
  if ( sub_585EB0(*(this + 3802))
    && (sub_58A470(this) || *(char *)(*(this + 3802))[1] >= 4)
    && (sub_58A470(this) <= 15 || sub_58A470(this) >= 20) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 195) + 204))(*(this + 195));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 195) + 208))(*(this + 195));
  }
  if ( sub_585EB0(*(this + 3802)) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 192) + 208))(*(this + 192));
  else
    return (*(int (__thiscall **)(_DWORD))(**(this + 192) + 204))(*(this + 192));
}


//======================================================================
// sub_58A470
// entry 0058a470  size 99  status ok
//======================================================================

int __thiscall sub_58A470(_DWORD *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 80; ++i )
  {
    if ( *(this + i + 111) )
    {
      if ( (unsigned __int8)sub_600230(*(this + i + 111)) )
        ++v3;
    }
  }
  return v3;
}


//======================================================================
// sub_58A4E0
// entry 0058a4e0  size 73  status ok
//======================================================================

_DWORD *__thiscall sub_58A4E0(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  if ( *(this + 3842) != a2 )
  {
    *(this + 3842) = a2;
    return (_DWORD *)sub_58DFB0(*(this + *(this + 3842) + 3833));
  }
  return result;
}


//======================================================================
// sub_58A530
// entry 0058a530  size 30  status ok
//======================================================================

int __thiscall sub_58A530(_DWORD *this)
{
  return *(this + *(this + 3842) + 3837);
}


//======================================================================
// sub_58A550
// entry 0058a550  size 30  status ok
//======================================================================

int __thiscall sub_58A550(_DWORD *this)
{
  return *(this + *(this + 3842) + 3833);
}


//======================================================================
// sub_58A570
// entry 0058a570  size 133  status ok
//======================================================================

int __thiscall sub_58A570(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  char v3; // [esp-8h] [ebp-Ch]
  int v4; // [esp-4h] [ebp-8h]

  if ( **(char **)(*(_DWORD *)(dword_793584 + 15208) + 4) >= 4
    || (result = sub_58A470(this)) != 0 && (sub_58A470(this) <= 15 || (result = sub_58A470(this), result >= 20)) )
  {
    v4 = *(char *)(*(_DWORD *)(*(this + 3802) + 4) + 1);
    v3 = *(_BYTE *)(*(_DWORD *)(*(this + 3802) + 4) + 3) != 0;
    v2 = sub_58A470(this);
    return sub_58B380(v2, v3, v4);
  }
  return result;
}


//======================================================================
// sub_58A600
// entry 0058a600  size 38  status ok
//======================================================================

int __thiscall sub_58A600(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 3804) + 112))(*(this + 3804), this);
}


//======================================================================
// sub_58A630
// entry 0058a630  size 83  status ok
//======================================================================

int __thiscall sub_58A630(_DWORD *this, int a2)
{
  *(this + *(this + 3842) + 3833) = a2;
  return sub_5856F0(this + 900 * *(this + 3842) + 9 * a2 + 202);
}


//======================================================================
// sub_58A690
// entry 0058a690  size 166  status ok
//======================================================================

int sub_58A690()
{
  int result; // eax
  int v1; // eax
  int v2; // [esp+10h] [ebp-4h]

  v2 = 2;
  switch ( *(_DWORD *)(sub_5FB5E0(0) + 496) )
  {
    case 0x30DFBD:
      v2 = 2;
      break;
    case 0x30DFBE:
      v2 = 5;
      break;
    case 0x30DFBF:
      v2 = 10;
      break;
    case 0x30DFC0:
      v2 = 2;
      break;
    default:
      break;
  }
  result = sub_5E2F60(dword_7947E0);
  if ( v2 != (char)result )
  {
    v1 = sub_5DE600(dword_7947E0);
    *(_BYTE *)(sub_5D52E0(v1) + 94) = v2;
    return sub_637610(dword_162EE84);
  }
  return result;
}


//======================================================================
// sub_58A750
// entry 0058a750  size 359  status ok
//======================================================================

int __thiscall sub_58A750(int this)
{
  int result; // eax
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-1Ch]
  int v5; // [esp+4h] [ebp-10h]
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-4h]

  sub_5DE230((char *)(this + 16 * *(_DWORD *)(this + 15368) + 15268), v6);
  v5 = v6[0];
  result = sub_585EB0(*(_DWORD **)(this + 15208));
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 15208) + 4) + 2) )
      sub_585AA0(*(_DWORD **)(this + 15208), 1);
    v7 = *(char *)(*(_DWORD *)(*(_DWORD *)(this + 15208) + 4) + 2)
       * *(char *)(*(_DWORD *)(*(_DWORD *)(this + 15208) + 4) + 1);
    if ( v5 < v7 )
    {
      v3 = (const CHAR *)sub_630F40("SID_KENO_CANTSUBMITTICKET");
      v2 = (const CHAR *)sub_630F40("SID_KENO_NOTENOUGHMONEY");
      return sub_62FF10(v2, v3, 0);
    }
    else
    {
      v6[0] = v5 - v7;
      sub_5DE620((char *)(this + 16 * *(_DWORD *)(this + 15368) + 15268), v6);
      sub_585E00(*(_DWORD **)(this + 15208));
      sub_585E30(*(_DWORD **)(this + 15208), -v7);
      return sub_5E2C40(
               (char *)(this + 16 * *(_DWORD *)(this + 15368) + 15268),
               *(_DWORD *)(*(_DWORD *)(this + 15208) + 4),
               *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332),
               0);
    }
  }
  return result;
}


//======================================================================
// sub_58A8C0
// entry 0058a8c0  size 325  status ok
//======================================================================

int __thiscall sub_58A8C0(_DWORD *this)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = sub_58A550(this);
  sub_58ACF0(this);
  **(_BYTE **)(*(this + 3802) + 4) = *((_BYTE *)this + 3600 * *(this + 3842) + 36 * v3 + 808);
  *(_BYTE *)(*(_DWORD *)(*(this + 3802) + 4) + 1) = *((_BYTE *)this + 3600 * *(this + 3842) + 36 * v3 + 809);
  *(_BYTE *)(*(_DWORD *)(*(this + 3802) + 4) + 2) = *((_BYTE *)this + 3600 * *(this + 3842) + 36 * v3 + 810);
  *(_BYTE *)(*(_DWORD *)(*(this + 3802) + 4) + 3) = *((_BYTE *)this + 3600 * *(this + 3842) + 36 * v3 + 811);
  for ( i = 0; i < 20; ++i )
    *(_BYTE *)(*(_DWORD *)(*(this + 3802) + 4) + i + 5) = *((_BYTE *)this + 3600 * *(this + 3842) + 36 * v3 + i + 813);
  return sub_589290((int)this);
}


//======================================================================
// sub_58AA10
// entry 0058aa10  size 725  status ok
//======================================================================

int __thiscall sub_58AA10(int this)
{
  int result; // eax
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-18h]
  int i; // [esp+Ch] [ebp-4h]
  int j; // [esp+Ch] [ebp-4h]

  if ( sub_585EB0(*(_DWORD **)(this + 15208)) )
    return sub_5857A0(*(_BYTE ***)(this + 15208));
  v3 = (const CHAR *)sub_630F40("SID_KENO_DELETETICKET_TITLE");
  v2 = (const CHAR *)sub_630F40("SID_KENO_DELETETICKET_MESSAGE");
  result = sub_62FF10(v2, v3, 4u);
  if ( result != 7 )
  {
    for ( i = *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332); i < 99; ++i )
      qmemcpy(
        (void *)(36 * i + this + 3600 * *(_DWORD *)(this + 15368) + 808),
        (const void *)(36 * (i + 1) + this + 3600 * *(_DWORD *)(this + 15368) + 808),
        0x24u);
    sub_5E2E40(
      (char *)(this + 16 * *(_DWORD *)(this + 15368) + 15268),
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332));
    *(_BYTE *)(this + 3600 * *(_DWORD *)(this + 15368) + 4372) = 0;
    *(_BYTE *)(this + 3600 * *(_DWORD *)(this + 15368) + 4373) = 1;
    *(_BYTE *)(this + 3600 * *(_DWORD *)(this + 15368) + 4374) = 1;
    *(_BYTE *)(this + 3600 * *(_DWORD *)(this + 15368) + 4375) = 0;
    *(_BYTE *)(this + 3600 * *(_DWORD *)(this + 15368) + 4376) = 0;
    *(_DWORD *)(this + 3600 * *(_DWORD *)(this + 15368) + 4400) = 0;
    *(_DWORD *)(this + 3600 * *(_DWORD *)(this + 15368) + 4404) = 0;
    for ( j = 0; j < 20; ++j )
      *(_BYTE *)(this + j + 3600 * *(_DWORD *)(this + 15368) + 4377) = 0;
    if ( (int)--*(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332) < 0 )
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332) = 0;
    if ( (int)--*(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15348) < 1 )
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15348) = 1;
    return sub_58DFB0(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332));
  }
  return result;
}


//======================================================================
// sub_58ACF0
// entry 0058acf0  size 518  status ok
//======================================================================

int __thiscall sub_58ACF0(int this)
{
  const char *v1; // eax
  const CHAR *v2; // eax
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF

  if ( sub_58A530((_DWORD *)this) < 100 )
  {
    if ( sub_585EB0(*(_DWORD **)(this + 15208)) )
    {
      return sub_5857A0(*(_BYTE ***)(this + 15208));
    }
    else if ( *(_DWORD *)(this
                        + 3600 * *(_DWORD *)(this + 15368)
                        + 808
                        + 36 * (*(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15348) - 1)
                        + 28) )
    {
      *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332) = (*(_DWORD *)(this
                                                                             + 4 * *(_DWORD *)(this + 15368)
                                                                             + 15348))++;
      *(_BYTE *)(this
               + 3600 * *(_DWORD *)(this + 15368)
               + 808
               + 36 * *(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332)) = -1;
      return sub_58DFB0(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15332));
    }
    else
    {
      sub_58DFB0(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 15368) + 15348) - 1);
      return sub_5857A0(*(_BYTE ***)(this + 15208));
    }
  }
  else
  {
    v1 = (const char *)sub_630F40("SID_KENO_MAXTICKETS_MESSAGE");
    sprintf(Buffer, v1, 100);
    v2 = (const CHAR *)sub_630F40("SID_KENO_MAXTICKETS_TITLE");
    return sub_62FF10(Buffer, v2, 0);
  }
}


//======================================================================
// sub_58AF00
// entry 0058af00  size 97  status ok
//======================================================================

int __thiscall sub_58AF00(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = sub_5FB5E0(0);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 240))(v2, 3203005, 1);
  if ( sub_588A80(this) )
    return sub_5F2B20(3203008, 1);
  else
    return sub_5F2BA0(3203008);
}


//======================================================================
// sub_58AFB0
// entry 0058afb0  size 177  status ok
//======================================================================

int __thiscall sub_58AFB0(pairNode *this)
{
  int v1; // kr00_4
  int result; // eax

  v1 = pairNode::raw_length(this);
  switch ( v1 )
  {
    case 0:
      result = sub_58ACF0(dword_793584);
      break;
    case 1:
      result = sub_58A8C0((_DWORD *)dword_793584);
      break;
    case 2:
      result = sub_58AA10(dword_793584);
      break;
    case 3:
      sub_58A690();
      (*(void (__thiscall **)(pairNode *, _DWORD))(*(_DWORD *)this + 216))(this, 0);
      sub_5F87D0(*((_DWORD *)this + 1));
      if ( dword_79357C )
        sub_583A20((_DWORD **)dword_79357C);
      result = sub_5F8990(dword_793584);
      dword_793584 = 0;
      break;
    case 4:
      result = sub_58A750(dword_793584);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_58B0C0
// entry 0058b0c0  size 114  status ok
//======================================================================

int __stdcall sub_58B0C0(int a1)
{
  int result; // eax

  result = a1;
  if ( !*(_BYTE *)(a1 + 4) )
  {
    result = (unsigned __int8)sub_5F56A0(a1);
    if ( (_BYTE)result )
    {
      result = sub_58A570((_DWORD *)dword_793584);
      *(_BYTE *)(a1 + 4) = 1;
    }
    else if ( *(_DWORD *)(dword_793584 + 15216) )
    {
      result = sub_5F54A0(*(_DWORD *)(dword_793584 + 15216));
      if ( (_BYTE)result )
        return sub_58A600((_DWORD **)dword_793584);
    }
  }
  return result;
}


//======================================================================
// sub_58B140
// entry 0058b140  size 119  status ok
//======================================================================

_DWORD *__thiscall sub_58B140(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5EAAF0(this);
  *this = &KenoPayoutDisplay::`vftable';
  *(this + 94) = 0;
  *(this + 137) = 0;
  for ( i = 0; i < 21; ++i )
  {
    *(this + i + 95) = 0;
    *(this + i + 116) = 0;
  }
  return this;
}


//======================================================================
// sub_58B1C0
// entry 0058b1c0  size 443  status ok
//======================================================================

void __thiscall sub_58B1C0(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+38h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&KenoPayoutDisplay::`vftable';
  if ( *(this + 94) )
  {
    (***(this + 94))(*(this + 94), 1);
    *(this + 94) = 0;
  }
  if ( *(this + 137) )
  {
    (***(this + 137))(*(this + 137), 1);
    *(this + 137) = 0;
  }
  for ( i = 0; i < 21; ++i )
  {
    if ( *(this + i + 95) )
    {
      (***(this + i + 95))(*(this + i + 95), 1);
      *(this + i + 95) = 0;
    }
    if ( *(this + i + 116) )
    {
      (***(this + i + 116))(*(this + i + 116), 1);
      *(this + i + 116) = 0;
    }
  }
  sub_5EAC00(this);
}


//======================================================================
// sub_58B380
// entry 0058b380  size 7258  status ok
//======================================================================

int __thiscall sub_58B380(CMediaType *this, int a2, unsigned __int8 a3, int a4)
{
  _DWORD *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int v10; // eax
  int v11; // eax
  int IsFixedSize; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v26; // [esp+4h] [ebp-770h]
  _DWORD *v27; // [esp+8h] [ebp-76Ch]
  _DWORD *v28; // [esp+10h] [ebp-764h]
  _DWORD *v29; // [esp+14h] [ebp-760h]
  void *v31; // [esp+1Ch] [ebp-758h]
  void *v32; // [esp+24h] [ebp-750h]
  void *v33; // [esp+2Ch] [ebp-748h]
  void *v34; // [esp+34h] [ebp-740h]
  int v35; // [esp+3Ch] [ebp-738h]
  _DWORD v36[36]; // [esp+40h] [ebp-734h]
  _DWORD v37[16]; // [esp+D0h] [ebp-6A4h]
  _DWORD v38[28]; // [esp+110h] [ebp-664h] BYREF
  int v39; // [esp+180h] [ebp-5F4h]
  int v40; // [esp+184h] [ebp-5F0h]
  _DWORD v41[317]; // [esp+188h] [ebp-5ECh] BYREF
  int i; // [esp+67Ch] [ebp-F8h]
  char Buffer[52]; // [esp+680h] [ebp-F4h] BYREF
  _DWORD v44[43]; // [esp+6B8h] [ebp-BCh] BYREF
  int v45; // [esp+764h] [ebp-10h]
  int v46; // [esp+770h] [ebp-4h]

  v36[22] = 1;
  v36[23] = 1;
  v36[24] = 2;
  v36[25] = 3;
  v36[26] = 3;
  v36[27] = 4;
  v36[28] = 4;
  v36[29] = 4;
  v36[30] = 5;
  v36[31] = 6;
  v36[32] = 6;
  v36[33] = 7;
  v36[34] = 8;
  v36[35] = 9;
  v37[0] = 9;
  v35 = **(char **)(*(_DWORD *)(dword_793584 + 15208) + 4);
  v41[0] = "3";
  v41[1] = "15";
  v41[2] = "30";
  v41[3] = "60";
  v41[4] = "12";
  v41[5] = "60";
  v41[6] = "120";
  v41[7] = "240";
  v41[8] = "42";
  v41[9] = "210";
  v41[10] = "420";
  v41[11] = "840";
  v41[12] = "1";
  v41[13] = "5";
  v41[14] = "10";
  v41[15] = "20";
  v41[16] = "120";
  v41[17] = "600";
  v41[18] = "1,200";
  v41[19] = "2,400";
  v41[20] = "3";
  v41[21] = "15";
  v41[22] = "30";
  v41[23] = "60";
  v41[24] = "1";
  v41[25] = "5";
  v41[26] = "10";
  v41[27] = "20";
  v41[28] = "1,360";
  v41[29] = "2,720";
  v41[30] = "5,440";
  v41[31] = "13,600";
  v41[32] = "20";
  v41[33] = "40";
  v41[34] = "80";
  v41[35] = "200";
  v41[36] = "800";
  v41[37] = "4,000";
  v41[38] = "8,000";
  v41[39] = "16,000";
  v41[40] = "9";
  v41[41] = "45";
  v41[42] = "90";
  v41[43] = "180";
  v41[44] = "1";
  v41[45] = "5";
  v41[46] = "10";
  v41[47] = "20";
  v41[48] = "7,000";
  v41[49] = "14,000";
  v41[50] = "28,000";
  v41[51] = "70,000";
  v41[52] = "40";
  v41[53] = "80";
  v41[54] = "160";
  v41[55] = "400";
  v41[56] = "1,500";
  v41[57] = "7,500";
  v41[58] = "15,000";
  v41[59] = "30,000";
  v41[60] = "88";
  v41[61] = "440";
  v41[62] = "880";
  v41[63] = "1,760";
  v41[64] = "4";
  v41[65] = "20";
  v41[66] = "40";
  v41[67] = "80";
  v41[68] = "1";
  v41[69] = "5";
  v41[70] = "10";
  v41[71] = "20";
  v41[72] = "20,000";
  v41[73] = "40,000";
  v41[74] = "80,000";
  v41[75] = "100,000";
  v41[76] = "420";
  v41[77] = "840";
  v41[78] = "1,680";
  v41[79] = "4,200";
  v41[80] = "40";
  v41[81] = "80";
  v41[82] = "160";
  v41[83] = "400";
  v41[84] = "7,000";
  v41[85] = "35,000";
  v41[86] = "70,000";
  v41[87] = "100,000";
  v41[88] = "350";
  v41[89] = "1,750";
  v41[90] = "3,500";
  v41[91] = "7,000";
  v41[92] = "20";
  v41[93] = "100";
  v41[94] = "200";
  v41[95] = "400";
  v41[96] = &unk_6B83F8;
  v41[97] = "10";
  v41[98] = "20";
  v41[99] = "40";
  v41[100] = "20,000";
  v41[101] = "100,000";
  v41[102] = "100,000";
  v41[103] = "100,000";
  v41[104] = "1,500";
  v41[105] = "7,500";
  v41[106] = "15,000";
  v41[107] = "30,000";
  v41[108] = "90";
  v41[109] = "450";
  v41[110] = "900";
  v41[111] = "1,800";
  v41[112] = "9";
  v41[113] = "45";
  v41[114] = "90";
  v41[115] = "180";
  v41[116] = "25,000";
  v41[117] = "100,000";
  v41[118] = "100,000";
  v41[119] = "100,000";
  v41[120] = "4,000";
  v41[121] = "20,000";
  v41[122] = "40,000";
  v41[123] = "80,000";
  v41[124] = "300";
  v41[125] = "1,500";
  v41[126] = "3,000";
  v41[127] = "6,000";
  v41[128] = "43";
  v41[129] = "215";
  v41[130] = "430";
  v41[131] = "860";
  v41[132] = "4";
  v41[133] = "20";
  v41[134] = "40";
  v41[135] = "80";
  v41[136] = "50,000";
  v41[137] = "100,000";
  v41[138] = "100,000";
  v41[139] = "100,000";
  v41[140] = "8,000";
  v41[141] = "20,000";
  v41[142] = "40,000";
  v41[143] = "80,000";
  v41[144] = "2,000";
  v41[145] = "5,000";
  v41[146] = "10,000";
  v41[147] = "20,000";
  v41[148] = "260";
  v41[149] = "650";
  v41[150] = "1,300";
  v41[151] = "2,600";
  v41[152] = "40";
  v41[153] = "100";
  v41[154] = "200";
  v41[155] = "400";
  v41[156] = "4";
  v41[157] = "10";
  v41[158] = "20";
  v41[159] = "40";
  v41[160] = "50,000";
  v41[161] = "100,000";
  v41[162] = "100,000";
  v41[163] = "100,000";
  v41[164] = "25,000";
  v41[165] = "62,500";
  v41[166] = "100,000";
  v41[167] = "100,000";
  v41[168] = "4,500";
  v41[169] = "11,250";
  v41[170] = "22,500";
  v41[171] = "45,000";
  v41[172] = "800";
  v41[173] = "2,000";
  v41[174] = "4,000";
  v41[175] = "8,000";
  v41[176] = "150";
  v41[177] = "375";
  v41[178] = "750";
  v41[179] = "1,500";
  v41[180] = "18";
  v41[181] = "45";
  v41[182] = "90";
  v41[183] = "180";
  v41[184] = "50,000";
  v41[185] = "100,000";
  v41[186] = "100,000";
  v41[187] = "100,000";
  v41[188] = "25,000";
  v41[189] = "62,500";
  v41[190] = "100,000";
  v41[191] = "100,000";
  v41[192] = "5,000";
  v41[193] = "12,500";
  v41[194] = "25,000";
  v41[195] = "50,000";
  v41[196] = "1,200";
  v41[197] = "3,000";
  v41[198] = "6,000";
  v41[199] = "12,000";
  v41[200] = "500";
  v41[201] = "1,250";
  v41[202] = "2,500";
  v41[203] = "5,000";
  v41[204] = "60";
  v41[205] = "150";
  v41[206] = "300";
  v41[207] = "600";
  v41[208] = "10";
  v41[209] = "25";
  v41[210] = "50";
  v41[211] = "100";
  v41[212] = "100,000";
  v41[213] = "100,000";
  v41[214] = "100,000";
  v41[215] = "100,000";
  v41[216] = "50,000";
  v41[217] = "100,000";
  v41[218] = "100,000";
  v41[219] = "100,000";
  v41[220] = "18,000";
  v41[221] = "45,000";
  v41[222] = "90,000";
  v41[223] = "100,000";
  v41[224] = "8,000";
  v41[225] = "20,000";
  v41[226] = "40,000";
  v41[227] = "80,000";
  v41[228] = "1,500";
  v41[229] = "3,750";
  v41[230] = "7,500";
  v41[231] = "15,000";
  v41[232] = "160";
  v41[233] = "400";
  v41[234] = "800";
  v41[235] = "1,600";
  v41[236] = "30";
  v41[237] = "75";
  v41[238] = "150";
  v41[239] = "300";
  v41[240] = &unk_6B83F8;
  v41[241] = "5";
  v41[242] = "10";
  v41[243] = "20";
  v41[244] = "100,000";
  v41[245] = "100,000";
  v41[246] = "100,000";
  v41[247] = "100,000";
  v41[248] = "70,000";
  v41[249] = "100,000";
  v41[250] = "100,000";
  v41[251] = "100,000";
  v41[252] = "25,000";
  v41[253] = "62,500";
  v41[254] = "100,000";
  v41[255] = "100,000";
  v41[256] = "15,000";
  v41[257] = "37,500";
  v41[258] = "75,000";
  v41[259] = "100,000";
  v41[260] = "1,500";
  v41[261] = "3,750";
  v41[262] = "7,500";
  v41[263] = "15,000";
  v41[264] = "600";
  v41[265] = "1,500";
  v41[266] = "3,000";
  v41[267] = "6,000";
  v41[268] = "85";
  v41[269] = "212";
  v41[270] = "425";
  v41[271] = "850";
  v41[272] = "20";
  v41[273] = "50";
  v41[274] = "100";
  v41[275] = "200";
  v41[276] = &unk_6B83F8;
  v41[277] = "5";
  v41[278] = "10";
  v41[279] = "20";
  v41[280] = "100,000";
  v41[281] = "100,000";
  v41[282] = "100,000";
  v41[283] = "100,000";
  v41[284] = "100,000";
  v41[285] = "100,000";
  v41[286] = "100,000";
  v41[287] = "100,000";
  v41[288] = "70,000";
  v41[289] = "100,000";
  v41[290] = "100,000";
  v41[291] = "100,000";
  v41[292] = "25,000";
  v41[293] = "62,500";
  v41[294] = "100,000";
  v41[295] = "100,000";
  v41[296] = "5,600";
  v41[297] = "14,000";
  v41[298] = "28,000";
  v41[299] = "56,000";
  v41[300] = "600";
  v41[301] = "1,500";
  v41[302] = "3,000";
  v41[303] = "6,000";
  v41[304] = "200";
  v41[305] = "500";
  v41[306] = "1,000";
  v41[307] = "2,000";
  v41[308] = "50";
  v41[309] = "125";
  v41[310] = "250";
  v41[311] = "500";
  v41[312] = "20";
  v41[313] = "50";
  v41[314] = "100";
  v41[315] = "200";
  v44[0] = "100,000";
  v44[1] = "100,000";
  v44[2] = "100,000";
  v44[3] = "100,000";
  v44[4] = "100,000";
  v44[5] = "100,000";
  v44[6] = "100,000";
  v44[7] = "100,000";
  v44[8] = "50,000";
  v44[9] = "100,000";
  v44[10] = "25,000";
  v44[11] = "50,000";
  v44[12] = "12,500";
  v44[13] = "25,000";
  v44[14] = "5,000";
  v44[15] = "10,000";
  v44[16] = "1,000";
  v44[17] = "2,000";
  v44[18] = "200";
  v44[19] = "400";
  v44[20] = "50";
  v44[21] = "100";
  v44[22] = "25";
  v44[23] = "50";
  v44[24] = "10";
  v44[25] = "20";
  v44[26] = "5";
  v44[27] = "10";
  v44[28] = "0";
  v44[29] = "0";
  v44[30] = "0";
  v44[31] = "0";
  v44[32] = "0";
  v44[33] = "0";
  v44[34] = "5";
  v44[35] = "10";
  v44[36] = "5";
  v44[37] = "10";
  v44[38] = "10";
  v44[39] = "20";
  v44[40] = "500";
  v44[41] = "1,000";
  v36[0] = "250,000";
  v36[1] = "50,000";
  v36[2] = "3,000";
  v36[3] = "1,000";
  v36[4] = "200";
  v36[5] = "40";
  v36[6] = "10";
  v36[7] = "3";
  v36[8] = "1";
  v36[9] = "1";
  v36[10] = "1";
  v36[11] = "1";
  v36[12] = "1";
  v36[13] = "3";
  v36[14] = "10";
  v36[15] = "40";
  v36[16] = "200";
  v36[17] = "1,000";
  v36[18] = "3,000";
  v36[19] = "50,000";
  v36[20] = "250,000";
  v38[0] = "250,000";
  v38[1] = "100,000";
  v38[2] = "60,000";
  v38[3] = "25,000";
  v38[4] = "5,000";
  v38[5] = "1,000";
  v38[6] = "200";
  v38[7] = "50";
  v38[8] = "10";
  v38[9] = "3";
  v38[10] = "1";
  v38[11] = "1";
  v38[12] = "1";
  v38[13] = "1";
  v38[14] = "1";
  v38[15] = "3";
  v38[16] = "10";
  v38[17] = "30";
  v38[18] = "300";
  v38[19] = "1,500";
  v38[20] = "25,000";
  v37[1] = 0;
  v37[2] = 1;
  v37[3] = 2;
  v37[4] = 4;
  v37[5] = 9;
  v37[6] = 14;
  v37[7] = 21;
  v37[8] = 25;
  v37[9] = 29;
  v37[10] = 34;
  v37[11] = 40;
  v37[12] = 46;
  v37[13] = 53;
  v37[14] = 61;
  v37[15] = 70;
  memset(&v38[22], 0, 12);
  v38[25] = 7;
  v38[26] = 12;
  v38[27] = 18;
  if ( a2 > 9 )
  {
    if ( a2 > 15 )
      sub_5EAF00(3203002);
    else
      sub_5EAF00(3203003);
  }
  else
  {
    sub_5EAF00(3203004);
  }
  if ( !a4 )
    a4 = 1;
  if ( !*((_DWORD *)this + 94) )
  {
    v34 = operator new(0x1D0u);
    v46 = 0;
    if ( v34 )
    {
      sub_5EC5A0(v34);
      v29 = v4;
    }
    else
    {
      v29 = 0;
    }
    v46 = -1;
    *((_DWORD *)this + 94) = v29;
  }
  *(_DWORD *)(*((_DWORD *)this + 94) + 4) = *((_DWORD *)this + 1);
  if ( v35 < 4 )
  {
    if ( a2 == 1 )
    {
      v8 = (const char *)sub_630F40("SID_KENO_1SPOT");
      sprintf(Buffer, v8);
    }
    else
    {
      v9 = (const char *)sub_630F40("SID_KENO_MORETHAN1SPOT_FORMAT");
      sprintf(Buffer, v9, a2, a4);
    }
  }
  else
  {
    if ( v35 == 4 )
    {
      v5 = (const char *)sub_630F40("SID_KENO_THEEDGE");
      sprintf(Buffer, v5);
    }
    if ( v35 == 5 )
    {
      v6 = (const char *)sub_630F40("SID_KENO_TOPANDBOTTOM");
      sprintf(Buffer, v6);
    }
    if ( v35 == 6 )
    {
      v7 = (const char *)sub_630F40("SID_KENO_LEFTANDRIGHT");
      sprintf(Buffer, v7);
    }
  }
  (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 94) + 180))(*((_DWORD *)this + 94), Buffer);
  sub_5ECC60(200);
  sub_5ECCB0(25);
  sub_5ECD00(73, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 94) + 64))(*((_DWORD *)this + 94));
  v10 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
  v11 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v10 + 7);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 94) + 68))(*((_DWORD *)this + 94), v11 + 9);
  IsFixedSize = CMediaType::IsFixedSize(this);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 94) + 108))(*((_DWORD *)this + 94), IsFixedSize + 1);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 94) + 116))(*((_DWORD *)this + 94));
  if ( !*((_DWORD *)this + 137) )
  {
    v33 = operator new(0x178u);
    v46 = 1;
    if ( v33 )
    {
      sub_5EAAF0(v33);
      v28 = v13;
    }
    else
    {
      v28 = 0;
    }
    v46 = -1;
    *((_DWORD *)this + 137) = v28;
  }
  *(_DWORD *)(*((_DWORD *)this + 137) + 4) = *((_DWORD *)this + 1);
  sub_5EAF00(3203008);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 137) + 64))(*((_DWORD *)this + 137));
  v14 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
  v15 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v14);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 137) + 68))(*((_DWORD *)this + 137), v15);
  v16 = CMediaType::IsFixedSize(this);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 137) + 108))(*((_DWORD *)this + 137), v16 + 1);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 137) + 116))(*((_DWORD *)this + 137));
  if ( a2 <= 15 )
    v40 = v36[a2 + 21] - a3;
  else
    v40 = 21;
  v45 = 0;
  switch ( a4 )
  {
    case 1:
    case 2:
    case 7:
      v45 = 0;
      break;
    case 5:
    case 14:
      v45 = 1;
      break;
    case 10:
    case 28:
      v45 = 2;
      break;
    case 20:
    case 70:
      v45 = 3;
      break;
    default:
      break;
  }
  if ( a3 )
    v39 = v38[a2 + 21];
  else
    v39 = v37[a2];
  if ( a2 == 20 )
    v45 = a4 != 5;
  if ( v35 >= 4 )
  {
    sub_5EAF00(3203002);
    v40 = 21;
    a2 = 20;
    v45 = 0;
  }
  for ( i = 0; i < v40; ++i )
  {
    if ( !*((_DWORD *)this + i + 95) )
    {
      v32 = operator new(0x1D0u);
      v46 = 2;
      if ( v32 )
      {
        sub_5EC5A0(v32);
        v27 = v17;
      }
      else
      {
        v27 = 0;
      }
      v46 = -1;
      *((_DWORD *)this + i + 95) = v27;
    }
    *(_DWORD *)(*((_DWORD *)this + i + 95) + 4) = *((_DWORD *)this + 1);
    sprintf(Buffer, "%d", a2 - i);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 95) + 64))(*((_DWORD *)this + i + 95));
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + i + 95) + 180))(*((_DWORD *)this + i + 95), Buffer);
    sub_5ECD00(31, -1, word_75EE1C);
    v18 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
    v19 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v18 + 15 * (i + 1) + 32);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 95) + 68))(*((_DWORD *)this + i + 95), v19 + 12);
    v20 = CMediaType::IsFixedSize(this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 95) + 108))(*((_DWORD *)this + i + 95), v20 + 1);
    sub_5ECC60(20);
    sub_5ECCB0(15);
    sub_5EF310(18);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 95) + 116))(*((_DWORD *)this + i + 95));
    if ( !*((_DWORD *)this + i + 116) )
    {
      v31 = operator new(0x1D0u);
      v46 = 3;
      if ( v31 )
      {
        sub_5EC5A0(v31);
        v26 = v21;
      }
      else
      {
        v26 = 0;
      }
      v46 = -1;
      *((_DWORD *)this + i + 116) = v26;
    }
    *(_DWORD *)(*((_DWORD *)this + i + 116) + 4) = *((_DWORD *)this + 1);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 116) + 64))(*((_DWORD *)this + i + 116));
    if ( a2 == 20 && v35 < 4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + i + 116) + 180))(
        *((_DWORD *)this + i + 116),
        v44[2 * i + v45]);
    }
    else if ( v35 < 4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + i + 116) + 180))(
        *((_DWORD *)this + i + 116),
        v41[4 * i + 4 * v39 + v45]);
    }
    else if ( v35 == 4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + i + 116) + 180))(
        *((_DWORD *)this + i + 116),
        v38[i]);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + i + 116) + 180))(
        *((_DWORD *)this + i + 116),
        v36[i]);
    }
    sub_5ECD00(31, -1, word_75EE1C);
    v22 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
    v23 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v22 + 15 * (i + 1) + 32);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 116) + 68))(*((_DWORD *)this + i + 116), v23 + 20);
    sub_5ECC60(140);
    sub_5ECCB0(15);
    sub_5EF310(18);
    v24 = CMediaType::IsFixedSize(this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 116) + 108))(*((_DWORD *)this + i + 116), v24 + 2);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 116) + 116))(*((_DWORD *)this + i + 116));
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_58D040
// entry 0058d040  size 280  status ok
//======================================================================

int __thiscall sub_58D040(_DWORD **this)
{
  int v2; // [esp+0h] [ebp-20h]
  int i; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(this + 94) + 112))(*(this + 94));
  (*(void (__thiscall **)(_DWORD))(**(this + 137) + 112))(*(this + 137));
  for ( i = 0; i < 21; ++i )
  {
    if ( *(this + i + 95) )
    {
      (*(void (__thiscall **)(_DWORD, int))**(this + i + 95))(*(this + i + 95), 1);
      *(this + i + 95) = 0;
    }
    if ( *(this + i + 116) )
    {
      v2 = (*(int (__thiscall **)(_DWORD, int))**(this + i + 116))(*(this + i + 116), 1);
      *(this + i + 116) = 0;
    }
  }
  return sub_5EB5A0(this, v2);
}


//======================================================================
// sub_58D1A0
// entry 0058d1a0  size 380  status ok
//======================================================================

int __thiscall sub_58D1A0(void *this, int a2)
{
  int result; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  char v7; // al
  char v9; // [esp+7h] [ebp-5h]
  char String[4]; // [esp+8h] [ebp-4h] BYREF

  strcpy(String, "0");
  String[0] = *(_BYTE *)(a2 + 20);
  v9 = 0;
  if ( *(_BYTE *)(a2 + 20) == 6
    || *(_BYTE *)(a2 + 20) == 5
    || *(_BYTE *)(a2 + 20) == 3
    || *(_BYTE *)(a2 + 20) == 4
    || *(_BYTE *)(a2 + 20) == 23
    || *(_BYTE *)(a2 + 20) == 22 )
  {
    v9 = 1;
  }
  if ( v9
    || (atoi(String) || (result = strcmp(String, "0")) == 0)
    && (v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this), result = atoi(v3),
                                                                                          result <= 10)
    && ((v4 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this), atoi(v4) != 10)
     || (result = strcmp(String, "0")) == 0) )
  {
    sub_60B7D0(a2);
    result = a2;
    if ( *(_BYTE *)(a2 + 4) )
    {
      v5 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
      if ( !strcmp(v5, &Source) )
      {
        return sub_585AA0(*(_DWORD **)(dword_793584 + 15208), 0);
      }
      else
      {
        v6 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
        v7 = atoi(v6);
        return sub_585AA0(*(_DWORD **)(dword_793584 + 15208), v7);
      }
    }
  }
  return result;
}


//======================================================================
// sub_58D320
// entry 0058d320  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_58D320(void *this)
{
  _DWORD *v2; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v2 = &KenoNumberCheckBox::`vftable';
  v2[130] = 0;
  return v2;
}


//======================================================================
// sub_58D350
// entry 0058d350  size 161  status ok
//======================================================================

void __thiscall sub_58D350(CExpandoObject *this)
{
  *(_DWORD *)this = &KenoNumberCheckBox::`vftable';
  if ( *((_DWORD *)this + 130) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 130))(*((_DWORD *)this + 130), 1);
    *((_DWORD *)this + 130) = 0;
  }
  CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_58D400
// entry 0058d400  size 25  status ok
//======================================================================

int __stdcall sub_58D400(int a1)
{
  return sub_5F4D00(a1);
}


//======================================================================
// sub_58D420
// entry 0058d420  size 39  status ok
//======================================================================

int __thiscall sub_58D420(CMFCToolBarsCustomizeDialog *this)
{
  unsigned int Flags; // eax

  Flags = CMFCToolBarsCustomizeDialog::GetFlags(this);
  return sub_585850(*(int **)(dword_793584 + 15208), Flags + 1);
}


//======================================================================
// sub_58D450
// entry 0058d450  size 462  status ok
//======================================================================

int __thiscall sub_58D450(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // [esp-4h] [ebp-24h]
  int v5; // [esp+4h] [ebp-1Ch]
  void *v7; // [esp+Ch] [ebp-14h]

  if ( sub_58A470((_DWORD *)dword_793584) != 20
    || (result = **(char **)(*(_DWORD *)(dword_793584 + 15208) + 4), result == 4) )
  {
    result = sub_600160(this);
    if ( !*(this + 130) )
    {
      v7 = operator new(0x1D0u);
      if ( v7 )
      {
        sub_5EC5A0(v7);
        v5 = v2;
      }
      else
      {
        v5 = 0;
      }
      *(this + 130) = v5;
      *(_DWORD *)(*(this + 130) + 4) = *(this + 1);
      (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 130) + 180))(*(this + 130), "X");
      sub_5ECD00(43, -1, word_75EE1C);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 64))(*(this + 130));
      v4 = sub_5EB4B0(this) - 6;
      v3 = sub_5EB470(this);
      (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 130) + 68))(*(this + 130), v3 - 3, v4);
      sub_5ECC60(30);
      sub_5ECCB0(50);
      sub_5EF310(48);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 130) + 108))(*(this + 130), 1);
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 116))(*(this + 130));
    }
  }
  return result;
}


//======================================================================
// sub_58D620
// entry 0058d620  size 121  status ok
//======================================================================

int __thiscall sub_58D620(int *this)
{
  int result; // eax

  sub_6001B0(this);
  result = (int)this;
  if ( *(this + 130) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 112))(*(this + 130));
    result = *(this + 130);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 130))(*(this + 130), 1);
    *(this + 130) = 0;
  }
  return result;
}


//======================================================================
// sub_58D6E0
// entry 0058d6e0  size 25  status ok
//======================================================================

int __stdcall sub_58D6E0(int a1)
{
  return sub_5F4D00(a1);
}


//======================================================================
// sub_58D700
// entry 0058d700  size 66  status ok
//======================================================================

int __thiscall sub_58D700(void *this)
{
  if ( (unsigned __int8)sub_600230(this) )
    return sub_585C90(*(_DWORD **)(dword_793584 + 15208), 1);
  else
    return sub_585C90(*(_DWORD **)(dword_793584 + 15208), 0);
}


//======================================================================
// sub_58D750
// entry 0058d750  size 60  status ok
//======================================================================

_DWORD *__thiscall sub_58D750(_DWORD *this, int a2)
{
  sub_5845C0(this, 0);
  *this = &KenoItemScroller::`vftable';
  *(this + 33) = a2;
  *(this + 34) = 0;
  return this;
}


//======================================================================
// sub_58D790
// entry 0058d790  size 161  status ok
//======================================================================

void __thiscall sub_58D790(CExpandoObject *this)
{
  *(_DWORD *)this = &KenoItemScroller::`vftable';
  if ( *((_DWORD *)this + 34) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 34))(*((_DWORD *)this + 34), 1);
    *((_DWORD *)this + 34) = 0;
  }
  sub_584760(this);
}


//======================================================================
// sub_58D840
// entry 0058d840  size 390  status ok
//======================================================================

int __thiscall sub_58D840(_DWORD *this, char *Str)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-1Ch]
  void *v6; // [esp+Ch] [ebp-14h]

  if ( !*(this + 34) )
  {
    v6 = operator new(0x1D0u);
    if ( v6 )
    {
      sub_5EC5A0(v6);
      v4 = v2;
    }
    else
    {
      v4 = 0;
    }
    *(this + 34) = v4;
    *(_DWORD *)(*(this + 34) + 4) = *(this + 1);
    (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 34) + 180))(*(this + 34), &Source);
    sub_5ECD00(2 * (*(this + 33) == 0) + 43, -1, word_75EE1C);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 34) + 64))(*(this + 34));
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 34) + 68))(
      *(this + 34),
      *(this + 33) != 0 ? 170 : 58,
      45);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 34) + 108))(*(this + 34), 2);
  }
  return sub_5EE710(Str);
}


//======================================================================
// sub_58D9D0
// entry 0058d9d0  size 355  status ok
//======================================================================

int __thiscall sub_58D9D0(_DWORD *this, int a2)
{
  _DWORD v4[4]; // [esp+4h] [ebp-38h]
  _DWORD v5[2]; // [esp+14h] [ebp-28h]
  _DWORD v6[4]; // [esp+1Ch] [ebp-20h]
  _DWORD v7[4]; // [esp+2Ch] [ebp-10h]

  v4[0] = 20;
  v4[1] = 10;
  v4[2] = 5;
  v4[3] = 1;
  v6[0] = 70;
  v6[1] = 28;
  v6[2] = 14;
  v6[3] = 7;
  v7[0] = 20;
  v7[1] = 10;
  v7[2] = 5;
  v7[3] = 2;
  v5[0] = 10;
  v5[1] = 5;
  if ( *(this + 33) )
  {
    if ( (unsigned __int8)sub_600230(*(_DWORD *)(dword_793584 + 784)) )
    {
      sub_585AD0(*(_DWORD **)(dword_793584 + 15208), v6[a2]);
    }
    else if ( sub_58A470((_DWORD *)dword_793584) == 20 )
    {
      sub_585AD0(*(_DWORD **)(dword_793584 + 15208), v5[a2]);
    }
    else if ( sub_58A470((_DWORD *)dword_793584) <= 9 || sub_58A470((_DWORD *)dword_793584) >= 20 )
    {
      sub_585AD0(*(_DWORD **)(dword_793584 + 15208), v4[a2]);
    }
    else
    {
      sub_585AD0(*(_DWORD **)(dword_793584 + 15208), v7[a2]);
    }
  }
  else
  {
    sub_58D840(this, (char *)(dword_793584 + 16 * a2 + 15268));
    sub_58A4E0((_DWORD *)dword_793584, a2);
  }
  return sub_58DCE0(this);
}


//======================================================================
// sub_58DB40
// entry 0058db40  size 134  status ok
//======================================================================

int __thiscall sub_58DB40(int this)
{
  int result; // eax

  sub_584F50(this);
  if ( *(_DWORD *)(this + 136) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 136) + 116))(*(_DWORD *)(this + 136));
  if ( !(unsigned __int8)sub_6026D0(*(_DWORD *)(this + 96)) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 112))(*(_DWORD *)(this + 96));
  result = sub_6026D0(*(_DWORD *)(this + 92));
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 112))(*(_DWORD *)(this + 92));
  return result;
}


//======================================================================
// sub_58DBD0
// entry 0058dbd0  size 59  status ok
//======================================================================

int __thiscall sub_58DBD0(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD, int))(**(this + 23) + 108))(*(this + 23), a2);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 24) + 108))(*(this + 24), a2);
}


//======================================================================
// sub_58DC50
// entry 0058dc50  size 66  status ok
//======================================================================

int __thiscall sub_58DC50(_DWORD *this)
{
  if ( !*(this + 33) )
    return sub_636690(dword_162EE84, this);
  if ( sub_58A470((_DWORD *)dword_793584) == 20 )
    return 2;
  return 4;
}


//======================================================================
// sub_58DCE0
// entry 0058dce0  size 527  status ok
//======================================================================

int __thiscall sub_58DCE0(_BYTE *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  *(this + 73) = 0;
  *(this + 72) = 0;
  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 176))(this);
  result = (int)this;
  if ( !*((_DWORD *)this + 33) )
  {
    if ( *((_DWORD *)this + 29) + 1 >= v3 )
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 112))(*((_DWORD *)this + 24));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 208))(*((_DWORD *)this + 24));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 116))(*((_DWORD *)this + 24));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 204))(*((_DWORD *)this + 24));
    }
    if ( *((int *)this + 29) > 0 )
    {
LABEL_6:
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 23) + 116))(*((_DWORD *)this + 23));
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 23) + 204))(*((_DWORD *)this + 23));
    }
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 33) != 1 )
    return result;
  if ( *(_DWORD *)(*(_DWORD *)(dword_793584 + 15208) + 4) && sub_585EB0(*(_DWORD **)(dword_793584 + 15208)) )
  {
    if ( *((_DWORD *)this + 29) + 1 >= v3 )
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 112))(*((_DWORD *)this + 24));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 208))(*((_DWORD *)this + 24));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 116))(*((_DWORD *)this + 24));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 204))(*((_DWORD *)this + 24));
    }
    if ( *((int *)this + 29) > 0 )
      goto LABEL_6;
LABEL_15:
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 23) + 112))(*((_DWORD *)this + 23));
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 23) + 208))(*((_DWORD *)this + 23));
  }
  return sub_58DEF0(this);
}


//======================================================================
// sub_58DEF0
// entry 0058def0  size 107  status ok
//======================================================================

int __thiscall sub_58DEF0(int this)
{
  *(_BYTE *)(this + 73) = 0;
  *(_BYTE *)(this + 72) = 0;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 112))(*(_DWORD *)(this + 96));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 208))(*(_DWORD *)(this + 96));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 112))(*(_DWORD *)(this + 92));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 208))(*(_DWORD *)(this + 92));
}


//======================================================================
// sub_58DF60
// entry 0058df60  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_58DF60(_DWORD *this)
{
  sub_5845C0(this, 0);
  *this = &TicketScroller::`vftable';
  return this;
}


//======================================================================
// sub_58DFB0
// entry 0058dfb0  size 45  status ok
//======================================================================

int __thiscall sub_58DFB0(_DWORD *this, int a2)
{
  *(this + 29) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, *(this + 29));
}


//======================================================================
// sub_58E000
// entry 0058e000  size 64  status ok
//======================================================================

int sub_58E000()
{
  if ( *(_DWORD *)(dword_793584 + 4 * *(_DWORD *)(dword_793584 + 15368) + 15348) )
    return *(_DWORD *)(dword_793584 + 4 * *(_DWORD *)(dword_793584 + 15368) + 15348);
  else
    return 1;
}


//======================================================================
// sub_58E050
// entry 0058e050  size 40  status ok
//======================================================================

int __thiscall sub_58E050(int *this, int a2)
{
  sub_5855E0(this, a2);
  return sub_58A630((_DWORD *)dword_793584, a2);
}


//======================================================================
// sub_58E080
// entry 0058e080  size 2935  status ok
//======================================================================

void __thiscall sub_58E080(void *this, int a2)
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
  int v32; // [esp+24h] [ebp-350h]
  char v33; // [esp+29h] [ebp-34Bh]
  char v34; // [esp+2Bh] [ebp-349h]
  int v35; // [esp+2Ch] [ebp-348h]
  _DWORD v36[206]; // [esp+30h] [ebp-344h]
  int i; // [esp+368h] [ebp-Ch]
  int v38; // [esp+36Ch] [ebp-8h]
  unsigned int v39; // [esp+370h] [ebp-4h]

  v39 = -1;
  if ( dword_793584 )
  {
    v35 = *(_DWORD *)(dword_793584 + 764);
    v36[0] = 0;
    v36[1] = *(_DWORD *)(dword_793584 + 768);
    v36[2] = 1;
    v36[3] = *(_DWORD *)(dword_793584 + 772);
    v36[4] = 2;
    v36[5] = *(_DWORD *)(dword_793584 + 776);
    v36[6] = 3;
    v36[7] = *(_DWORD *)(dword_793584 + 780);
    v36[8] = 4;
    v36[9] = *(_DWORD *)(dword_793584 + 15212);
    v36[10] = 5;
    v36[11] = sub_5FB5E0(0);
    v36[12] = 6;
    v36[13] = sub_5FB5E0(1);
    v36[14] = 7;
    v36[15] = *(_DWORD *)(dword_793584 + 15244);
    v36[16] = 8;
    v36[17] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 792) + 136);
    v36[18] = 9;
    v36[19] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 792) + 96);
    v36[20] = 10;
    v36[21] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 792) + 92);
    v36[22] = 11;
    v36[23] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 796) + 136);
    v36[24] = 12;
    v36[25] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 796) + 96);
    v36[26] = 13;
    v36[27] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 796) + 92);
    v36[28] = 14;
    v36[29] = *(_DWORD *)(dword_793584 + 800);
    v36[30] = 15;
    v36[31] = *(_DWORD *)(dword_793584 + 15252);
    v36[32] = 16;
    v36[33] = *(_DWORD *)(dword_793584 + 15248);
    v36[34] = 17;
    v36[35] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 804) + 324);
    v36[36] = 18;
    v36[37] = *(_DWORD *)(*(_DWORD *)(dword_793584 + 804) + 328);
    v36[38] = 19;
    v36[39] = *(_DWORD *)(dword_793584 + 788);
    v36[40] = 20;
    v36[41] = *(_DWORD *)(dword_793584 + 15236);
    v36[42] = 21;
    v36[43] = *(_DWORD *)(dword_793584 + 15240);
    v36[44] = 22;
    for ( i = 0; i < 80; ++i )
    {
      v36[2 * i + 45] = *(_DWORD *)(dword_793584 + 4 * i + 444);
      v36[2 * i + 46] = i;
    }
    v38 = 80;
    for ( i = 0; i < v38; ++i )
    {
      if ( v36[2 * i + 45]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v36[2 * i + 45] + 132))(v36[2 * i + 45], a2)
        && (unsigned __int8)sub_5F54A0(v36[2 * i + 45]) )
      {
        v39 = v36[2 * i + 46];
        break;
      }
    }
    if ( v39 >= 0x50 )
    {
      v39 = -1;
      v38 = 23;
      for ( i = 0; i < v38; ++i )
      {
        if ( v36[2 * i - 1]
          && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v36[2 * i - 1] + 132))(v36[2 * i - 1], a2)
          && (unsigned __int8)sub_5F54A0(v36[2 * i - 1]) )
        {
          v39 = v36[2 * i];
          break;
        }
      }
      if ( v39 != -1 )
      {
        switch ( v39 )
        {
          case 0u:
            v6 = sub_630F40("SID_KENO_HELP_NEW");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v6);
            return;
          case 1u:
            v7 = sub_630F40("SID_KENO_HELP_DUPLICATE");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v7);
            return;
          case 2u:
            v8 = sub_630F40("SID_KENO_HELP_DELETE");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v8);
            return;
          case 3u:
            v9 = sub_630F40("SID_KENO_HELP_CLOSE");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v9);
            return;
          case 4u:
            if ( (unsigned __int8)sub_6026D0(*(_DWORD *)(dword_793584 + 780)) )
            {
              v10 = sub_630F40("SID_KENO_HELP_SUBMIT");
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v10);
              return;
            }
            v32 = sub_58A470((_DWORD *)dword_793584);
            if ( v32 )
            {
              if ( v32 >= 16 && v32 <= 19 )
              {
                v13 = sub_630F40("SID_KENO_HELP_PICKMAX15");
                (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v13);
                return;
              }
            }
            else if ( **(_BYTE **)(*(_DWORD *)(dword_793584 + 15208) + 4) != 5
                   && **(_BYTE **)(*(_DWORD *)(dword_793584 + 15208) + 4) != 6 )
            {
              v12 = sub_630F40("SID_KENO_HELP_PICKATLEASTONE");
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v12);
              return;
            }
            v11 = sub_630F40("SID_KENO_HELP_ALREADYSUBMITTED");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v11);
            return;
          case 5u:
            if ( sub_58A470((_DWORD *)dword_793584) )
              v14 = sub_630F40("SID_KENO_HELP_ROLLMOUSETOSEEPAYOUTS");
            else
              v14 = sub_630F40("SID_KENO_HELP_USEICONTOSEEPAYOUTS");
            goto LABEL_57;
          case 6u:
            v15 = sub_630F40("SID_KENO_HELP_SETTIME");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v15);
            return;
          case 7u:
            v16 = sub_5FB5E0(1);
            if ( (unsigned __int8)sub_6026D0(v16) )
              v14 = sub_630F40("SID_KENO_HELP_AUTOPICK");
            else
              v14 = sub_630F40("SID_KENO_HELP_NOTAVAILABLEFORSUBMITTED");
LABEL_57:
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v14);
            return;
          case 8u:
            if ( (unsigned __int8)sub_6026D0(*(_DWORD *)(dword_793584 + 784))
              || (unsigned __int8)sub_600230(*(_DWORD *)(dword_793584 + 784)) )
            {
              v17 = sub_630F40("SID_KENO_HELP_SPECIALBOX");
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v17);
            }
            else
            {
              v18 = sub_630F40("SID_KENO_HELP_NUMBEROFPICKS");
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v18);
            }
            return;
          case 9u:
            v19 = sub_630F40("SID_KENO_HELP_PLAYERNAME");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v19);
            return;
          case 0xAu:
          case 0xBu:
            v20 = sub_630F40("SID_KENO_HELP_MULTIPLEPLAYERS");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v20);
            return;
          case 0xCu:
            v21 = sub_630F40("SID_KENO_HELP_PRICEPERGAME");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v21);
            return;
          case 0xDu:
          case 0xEu:
            v22 = sub_630F40("SID_KENO_HELP_CHANGEPRICEPERGAME");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v22);
            return;
          case 0xFu:
            v23 = sub_630F40("SID_KENO_HELP_NUMBEROFGAMES");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v23);
            return;
          case 0x10u:
            v24 = sub_630F40("SID_KENO_HELP_PRICETOPLAY");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v24);
            return;
          case 0x11u:
            v25 = sub_630F40("SID_KENO_HELP_GAMESVALIDFOR");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v25);
            return;
          case 0x12u:
          case 0x13u:
            v26 = sub_630F40("SID_KENO_HELP_GAMERESULTS");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v26);
            return;
          case 0x14u:
            v27 = sub_630F40("SID_KENO_HELP_VIEWALLTICKETS");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v27);
            return;
          case 0x15u:
            v28 = sub_630F40("SID_KENO_HELP_TICKETRATIO");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v28);
            return;
          case 0x16u:
            v29 = sub_630F40("SID_KENO_HELP_NETAMOUNT");
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v29);
            return;
          default:
            sub_5E9F20((char)"false", "..\\Casino\\kenoticketdialog.cpp", 2469);
            return;
        }
      }
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else
    {
      v33 = sub_600230(*(_DWORD *)(dword_793584 + 4 * v39 + 444));
      v34 = sub_5F54A0(*(_DWORD *)(*(_DWORD *)(dword_793584 + 804) + 4 * v39 + 4));
      if ( *(_DWORD *)(sub_5FB5E0(1) + 496) == 3203013
        || *(_DWORD *)(sub_5FB5E0(1) + 496) == 3203014
        || *(_DWORD *)(sub_5FB5E0(1) + 496) == 3203015 )
      {
        v2 = sub_630F40("SID_KENO_HELP_NOCHANGE");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
      }
      else if ( v33 && v34 )
      {
        v3 = sub_630F40("SID_KENO_HELP_SELECTEDANDDRAWN");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
      else if ( v33 )
      {
        v4 = sub_630F40("SID_KENO_HELP_SELECTED");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
      }
      else if ( v34 )
      {
        v5 = sub_630F40("SID_KENO_HELP_DRAWN");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v5);
      }
      else
      {
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
      }
    }
  }
}


//======================================================================
// sub_58EC60
// entry 0058ec60  size 1564  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_58EC60(ATL::CCRTHeap *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-64h]
  int v6; // [esp+8h] [ebp-60h]
  int v7; // [esp+Ch] [ebp-5Ch]
  int v8; // [esp+10h] [ebp-58h]
  void *v10; // [esp+18h] [ebp-50h]
  void *v11; // [esp+20h] [ebp-48h]
  int v12; // [esp+38h] [ebp-30h]
  int k; // [esp+3Ch] [ebp-2Ch]
  int m; // [esp+44h] [ebp-24h]
  int v15; // [esp+54h] [ebp-14h]
  int i; // [esp+58h] [ebp-10h]
  int j; // [esp+58h] [ebp-10h]
  int n; // [esp+58h] [ebp-10h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &KenoDialogWinGameScroller::`vftable';
  *((_DWORD *)this + 93) = a2;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  if ( operator new(0x1E4u) )
    v8 = sub_58FAE0(0, this);
  else
    v8 = 0;
  *((_DWORD *)this + 81) = v8;
  *(_DWORD *)(*((_DWORD *)this + 81) + 4) = *((_DWORD *)this + 93);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 81) + 200))(*((_DWORD *)this + 81), 3203051);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 81) + 64))(*((_DWORD *)this + 81));
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 81) + 108))(*((_DWORD *)this + 81), 30);
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 81) + 68))(*((_DWORD *)this + 81), 193, 208);
  sub_58FB90(*((_DWORD *)this + 81));
  if ( operator new(0x1E4u) )
    v7 = sub_58FAE0(1, this);
  else
    v7 = 0;
  *((_DWORD *)this + 82) = v7;
  *(_DWORD *)(*((_DWORD *)this + 82) + 4) = *((_DWORD *)this + 93);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 82) + 200))(*((_DWORD *)this + 82), 3203052);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 82) + 64))(*((_DWORD *)this + 82));
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 82) + 108))(*((_DWORD *)this + 82), 30);
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 82) + 68))(*((_DWORD *)this + 82), 253, 208);
  sub_58FB90(*((_DWORD *)this + 82));
  v11 = operator new(0x1D0u);
  if ( v11 )
  {
    sub_5EC5A0(v11);
    v6 = v2;
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)this + 94) = v6;
  *(_DWORD *)(*((_DWORD *)this + 94) + 4) = *((_DWORD *)this + 93);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 94) + 64))(*((_DWORD *)this + 94));
  (*(void (__thiscall **)(_DWORD, const char *))(**((_DWORD **)this + 94) + 180))(*((_DWORD *)this + 94), &Source);
  sub_5ECD00(55, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 94) + 64))(*((_DWORD *)this + 94));
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 94) + 68))(*((_DWORD *)this + 94), 201, 204);
  sub_5ECCB0(24);
  sub_5ECC60(50);
  sub_5EF310(36);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 94) + 108))(*((_DWORD *)this + 94), 30);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 94) + 116))(*((_DWORD *)this + 94));
  for ( i = 0; i < 80; ++i )
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v5 = v3;
    }
    else
    {
      v5 = 0;
    }
    *((_DWORD *)this + i + 1) = v5;
    *(_DWORD *)(*((_DWORD *)this + i + 1) + 4) = *((_DWORD *)this + 93);
    sub_5EAF00(3203053);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 1) + 64))(*((_DWORD *)this + i + 1));
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 1) + 108))(*((_DWORD *)this + i + 1), 30);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 1) + 112))(*((_DWORD *)this + i + 1));
  }
  v15 = 103;
  for ( j = 0; j < 2; ++j )
  {
    for ( k = 0; k < 4; ++k )
    {
      for ( m = 0; m < 10; ++m )
      {
        v12 = m + 40 * j + 10 * k;
        if ( m <= 4 )
        {
          (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + v12 + 1) + 68))(
            *((_DWORD *)this + v12 + 1),
            26 * m + 3,
            v15 + 26 * k);
        }
        else if ( m <= 6 )
        {
          (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + v12 + 1) + 68))(
            *((_DWORD *)this + v12 + 1),
            26 * m + 2,
            v15 + 26 * k);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + v12 + 1) + 68))(
            *((_DWORD *)this + v12 + 1),
            26 * m,
            v15 + 26 * k);
        }
      }
    }
    v15 = 223;
  }
  for ( n = 0; n < 4; ++n )
  {
    *((_DWORD *)this + n + 85) = 0;
    *((_DWORD *)this + n + 89) = 0;
  }
  return this;
}


//======================================================================
// sub_58F280
// entry 0058f280  size 451  status ok
//======================================================================

void __thiscall sub_58F280(CNoTrackObject *this)
{
  int i; // [esp+38h] [ebp-10h]

  *(_DWORD *)this = &KenoDialogWinGameScroller::`vftable';
  sub_58F450(this);
  for ( i = 0; i < 80; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    *((_DWORD *)this + i + 1) = 0;
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 81) + 112))(*((_DWORD *)this + 81));
  if ( *((_DWORD *)this + 81) )
    (***((void (__thiscall ****)(_DWORD, int))this + 81))(*((_DWORD *)this + 81), 1);
  *((_DWORD *)this + 81) = 0;
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 82) + 112))(*((_DWORD *)this + 82));
  if ( *((_DWORD *)this + 82) )
    (***((void (__thiscall ****)(_DWORD, int))this + 82))(*((_DWORD *)this + 82), 1);
  *((_DWORD *)this + 82) = 0;
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 94) + 112))(*((_DWORD *)this + 94));
  if ( *((_DWORD *)this + 94) )
    (***((void (__thiscall ****)(_DWORD, int))this + 94))(*((_DWORD *)this + 94), 1);
  *((_DWORD *)this + 94) = 0;
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_58F450
// entry 0058f450  size 66  status ok
//======================================================================

int __thiscall sub_58F450(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 80; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 1) + 112))(*(this + i + 1));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_58F4A0
// entry 0058f4a0  size 138  status ok
//======================================================================

int __thiscall sub_58F4A0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  sub_58F450((_DWORD **)this);
  result = this;
  v5 = *(_DWORD *)(this + 4 * *(_DWORD *)(*(_DWORD *)(this + 372) + 15368) + 340);
  for ( i = 0; i < 20; ++i )
  {
    result = i + 20 * v5;
    v3 = *(char *)(dword_7947E0 + result + 156);
    if ( v3 >= 1 && v3 <= 80 )
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * v3) + 116))(*(_DWORD *)(this + 4 * v3));
  }
  return result;
}


//======================================================================
// sub_58F530
// entry 0058f530  size 511  status ok
//======================================================================

int __thiscall sub_58F530(int this, int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = sub_5E10D0(dword_7947E0);
  v4 = *(_DWORD *)(*(_DWORD *)(this + 372) + 15368);
  *(_DWORD *)(this + 332) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 336) = *(char *)(a2 + 2) + *(_DWORD *)(this + 332) - 1;
  if ( v5 < 1 || v5 > 1000 )
    sub_5E9F20((char)"lastGame >=1 && lastGame <= 1000", "..\\Casino\\kenoticketdialog.cpp", 2626);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 376) + 112))(*(_DWORD *)(this + 376));
  sub_58F450((_DWORD **)this);
  sub_58FB90(*(_DWORD *)(this + 324));
  sub_58FB90(*(_DWORD *)(this + 328));
  result = sub_62FDE0("curDisplay:%d  curTickets:%d\n", *(_DWORD *)(this + 4 * v4 + 340));
  if ( *(int *)(a2 + 28) >= 1 && *(int *)(a2 + 28) <= 1000 )
  {
    v6 = 0;
    if ( *(_BYTE *)(a2 + 4) == 1 )
    {
      result = *(_DWORD *)(this + 336);
      v6 = result;
      if ( result > 1000 )
        v6 = result - 1000;
    }
    else
    {
      result = this;
      if ( *(_DWORD *)(dword_7947E0 + 152) != *(_DWORD *)(this + 332) )
      {
        result = v5;
        if ( (v5 < *(_DWORD *)(this + 332) || v5 > *(_DWORD *)(this + 336))
          && (v5 + 1000 < *(_DWORD *)(this + 332) || (result = this, v5 + 1000 > *(_DWORD *)(this + 336))) )
        {
          result = sub_5E9F20((char)"0", "..\\Casino\\kenoticketdialog.cpp", 2665);
          v6 = *(_DWORD *)(this + 336);
          if ( v6 > 1000 )
          {
            result = v6 - 1000;
            v6 -= 1000;
          }
        }
        else
        {
          v6 = v5;
        }
      }
    }
    if ( v6 )
    {
      *(_DWORD *)(this + 4 * v4 + 340) = v6;
      return sub_58F730(this);
    }
  }
  return result;
}


//======================================================================
// sub_58F730
// entry 0058f730  size 197  status ok
//======================================================================

int __thiscall sub_58F730(int this)
{
  char Buffer[68]; // [esp+4h] [ebp-48h] BYREF

  sprintf(Buffer, "%04d", *(_DWORD *)(this + 4 * *(_DWORD *)(*(_DWORD *)(this + 372) + 15368) + 340));
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 376) + 180))(*(_DWORD *)(this + 376), Buffer);
  if ( *(_DWORD *)(this + 332) == *(_DWORD *)(this + 336) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 376) + 112))(*(_DWORD *)(this + 376));
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 376) + 116))(*(_DWORD *)(this + 376));
  sub_58F4A0(this);
  return sub_58F950(this);
}


//======================================================================
// sub_58F800
// entry 0058f800  size 156  status ok
//======================================================================

int __thiscall sub_58F800(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-4h]

  v2 = *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) - 1;
  if ( *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) == 1 )
    v2 = 1000;
  if ( v2 >= *(this + 83) && v2 <= *(this + 84)
    || (result = v2 + 1000, v2 + 1000 >= *(this + 83)) && (result = (int)this, v2 + 1000 <= *(this + 84)) )
  {
    *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) = v2;
    return sub_58F730((int)this);
  }
  return result;
}


//======================================================================
// sub_58F8A0
// entry 0058f8a0  size 163  status ok
//======================================================================

int __thiscall sub_58F8A0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-4h]

  v2 = *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) + 1;
  if ( *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) == 1000 )
    v2 = 1;
  if ( v2 >= *(this + 83) && v2 <= *(this + 84)
    || (result = v2 + 1000, v2 + 1000 >= *(this + 83)) && (result = (int)this, v2 + 1000 <= *(this + 84)) )
  {
    *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) = v2;
    return sub_58F730((int)this);
  }
  return result;
}


//======================================================================
// sub_58F950
// entry 0058f950  size 386  status ok
//======================================================================

int __thiscall sub_58F950(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5E10D0(dword_7947E0);
  sub_58FB90(*(this + 81));
  sub_58FB90(*(this + 82));
  result = (int)this;
  if ( *(this + 83) != *(this + 84) )
  {
    if ( *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) == *(this + 83) )
      sub_58FB90(*(this + 81));
    else
      sub_58FBC0(*(this + 81));
    if ( *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) == *(this + 84)
      || *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) == *(this + 84) - 1000
      || (v3 >= *(this + 83) && v3 <= *(this + 84) || v3 + 1000 >= *(this + 83) && v3 + 1000 <= *(this + 84))
      && *(this + *(_DWORD *)(*(this + 93) + 15368) + 85) == v3 )
    {
      return sub_58FB90(*(this + 82));
    }
    else
    {
      return sub_58FBC0(*(this + 82));
    }
  }
  return result;
}


//======================================================================
// sub_58FAE0
// entry 0058fae0  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_58FAE0(void *this, int a2, int a3)
{
  _DWORD *v4; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v4 = &KenoDialogWinGameScrollerButton::`vftable';
  v4[120] = a2;
  v4[119] = a3;
  return v4;
}


//======================================================================
// sub_58FB40
// entry 0058fb40  size 69  status ok
//======================================================================

int __thiscall sub_58FB40(int this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]

  result = this;
  v2 = *(_DWORD *)(this + 480);
  if ( !v2 )
    return sub_58F800(*(_DWORD **)(this + 476));
  if ( v2 == 1 )
    return sub_58F8A0(*(_DWORD **)(this + 476));
  return result;
}


//======================================================================
// sub_58FB90
// entry 0058fb90  size 40  status ok
//======================================================================

int __thiscall sub_58FB90(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 208))(this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
}


//======================================================================
// sub_58FBC0
// entry 0058fbc0  size 40  status ok
//======================================================================

int __thiscall sub_58FBC0(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 204))(this);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this);
}


//======================================================================
// sub_58FE80
// entry 0058fe80  size 46  status ok
//======================================================================

bool __stdcall sub_58FE80(int a1, int a2)
{
  int v2; // eax

  v2 = sub_5DCB00(a1);
  return sub_5D5A50(v2) >= 2 * a2;
}


//======================================================================
// sub_58FEB0
// entry 0058feb0  size 50  status ok
//======================================================================

bool __stdcall sub_58FEB0(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = sub_5DCB00(a1);
  return sub_5D5A50(v3) >= a2 + 2 * a3;
}


//======================================================================
// sub_58FEF0
// entry 0058fef0  size 73  status ok
//======================================================================

int __stdcall sub_58FEF0(int a1, int a2, int a3)
{
  if ( (unsigned __int8)sub_5DA7B0(dword_7935A4) )
    return sub_590810(a1, a2, a3);
  else
    return sub_590300(a1, a2, a3);
}


//======================================================================
// sub_58FF40
// entry 0058ff40  size 497  status ok
//======================================================================

int *__stdcall sub_58FF40(int a1, _QWORD *a2, int *a3)
{
  int v3; // eax
  int *result; // eax
  bool i; // al
  int v6; // [esp+4h] [ebp-50h]
  double v7; // [esp+14h] [ebp-40h]
  double v8; // [esp+24h] [ebp-30h]
  int v9; // [esp+40h] [ebp-14h]
  int v10; // [esp+44h] [ebp-10h]
  int v11; // [esp+48h] [ebp-Ch]
  int v12; // [esp+48h] [ebp-Ch]
  int v13; // [esp+4Ch] [ebp-8h]
  int v14; // [esp+50h] [ebp-4h]

  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 692))(dword_7935A4);
  v3 = sub_5DCB00(a1);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3);
  v10 = *(_DWORD *)(sub_5DCB00(a1) + 1192);
  if ( (int)sub_62FBF0(10) < 7 || (result = a3, !*a3) )
  {
    v8 = (double)((sub_62FBF0(5) + 1) * v9 * v13);
    v7 = v8 / (double)(sub_62FBF0(5) + 1);
    v11 = (int)((double)(v9 * v13 * v10) / (double)(sub_62FBF0(5) + 1) + v7);
    if ( sub_62FBF0(2) == 1 )
      v6 = v11 / 3;
    else
      v6 = v11 / 2;
    v12 = v6;
    if ( v6 % 5 )
      v12 = v6 + 5 - v6 % 5;
    if ( v12 >= v13 )
    {
      if ( v12 > v14 )
        v12 = v14;
      goto LABEL_12;
    }
    v12 = v13;
    for ( i = sub_58FEB0(a1, v13, *a3); !i; i = sub_58FEB0(a1, v12, *a3) )
    {
      v12 -= 5;
LABEL_12:
      ;
    }
    if ( v12 < v13 )
      v12 = 0;
    if ( v12 > v14 )
      sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\fourcardpokerai.cpp", 77);
    *a2 = sub_64C8A0(v12, 0);
    return (int *)a2;
  }
  return result;
}


//======================================================================
// sub_590140
// entry 00590140  size 445  status ok
//======================================================================

int __stdcall sub_590140(int a1, __int64 *a2)
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

  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 692))(dword_7935A4);
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
  for ( i = sub_58FE80(a1, v11); !i; i = sub_58FE80(a1, v10) )
  {
    v10 -= 5;
LABEL_9:
    ;
  }
  if ( v10 < v11 )
    v10 = 0;
  if ( v10 > v12 )
    sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\fourcardpokerai.cpp", 120);
  v7 = sub_64C8A0(v10, 0);
  *a2 = v7;
  return HIDWORD(v7);
}


//======================================================================
// sub_590300
// entry 00590300  size 49  status ok
//======================================================================

int *__stdcall sub_590300(int a1, __int64 *a2, _QWORD *a3)
{
  sub_590140(a1, a2);
  return sub_58FF40(a1, a3, (int *)a2);
}


//======================================================================
// sub_590340
// entry 00590340  size 267  status ok
//======================================================================

int __stdcall sub_590340(int a1, int a2, char a3, char *Destination)
{
  const char *v4; // eax
  int result; // eax
  const char *v6; // eax
  const char *v7; // eax
  int i; // [esp+4h] [ebp-10h]
  _WORD v9[4]; // [esp+8h] [ebp-Ch] BYREF

  if ( a3 )
  {
    v4 = (const char *)sub_630F40("SID_FOURCARDPOKER_STRATEGY_SHOULDFOLD");
    return (int)strcpy(Destination, v4);
  }
  else
  {
    for ( i = 0; i < 4; ++i )
      v9[i] = 0;
    result = sub_462A40(4, dword_7935A8 + 12 * a1 + 200, (a1 == 4) + 5, (int)v9);
    if ( a2 > 2 || a2 == 2 && (result = sub_4639E0((int)v9, 4), result >= 10) )
    {
      v6 = (const char *)sub_630F40("SID_FOURCARDPOKER_STRATEGY_SHOULDPLAYTHREE");
      return (int)strcpy(Destination, v6);
    }
    else if ( a2 == 2 )
    {
      result = sub_4639E0((int)v9, 4);
      if ( result >= 3 )
      {
        v7 = (const char *)sub_630F40("SID_FOURCARDPOKER_STRATEGY_SHOULDPLAYONE");
        return (int)strcpy(Destination, v7);
      }
    }
  }
  return result;
}


//======================================================================
// sub_590480
// entry 00590480  size 911  status ok
//======================================================================

int __stdcall sub_590480(int a1, __int64 *a2)
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
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 688))(dword_7935A4);
  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 692))(dword_7935A4);
  v24 = sub_5DA8A0(dword_7935A4);
  v16 = sub_5DAC90(dword_7935A4);
  v20 = sub_5DA8C0(dword_7935A4);
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
      if ( (unsigned __int8)sub_590980(a1) )
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
    while ( !sub_58FE80(a1, v17) )
      v17 -= 5;
    if ( v17 < v18 )
      v17 = 0;
    if ( v17 > v23 )
      sub_5E9F20((char)"theBet <= maxBet", "..\\Casino\\fourcardpokerai.cpp", 260);
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
    while ( !sub_58FE80(a1, v13) )
      v13 -= 5;
    if ( v13 < v18 || v13 > v23 )
      sub_5E9F20((char)"tempBet >= minBet && tempBet <= maxBet", "..\\Casino\\fourcardpokerai.cpp", 228);
    v11 = sub_64C8A0(v13, 0);
    *a2 = v11;
    return HIDWORD(v11);
  }
}


//======================================================================
// sub_590810
// entry 00590810  size 49  status ok
//======================================================================

int __thiscall sub_590810(CFormView *this, int a2, __int64 *a3, int a4)
{
  sub_590480(a2, a3);
  return CFormView::accHitTest(this, a2, a4, (struct tagVARIANT *)a3);
}


//======================================================================
// sub_590850
// entry 00590850  size 174  status ok
//======================================================================

bool __stdcall sub_590850(int a1)
{
  int i; // [esp+4h] [ebp-14h]
  int v3; // [esp+8h] [ebp-10h]
  _WORD v4[4]; // [esp+Ch] [ebp-Ch] BYREF

  for ( i = 0; i < 4; ++i )
    v4[i] = 0;
  sub_462A40(4, dword_7935A8 + 12 * a1 + 200, (a1 == 4) + 5, (int)v4);
  v3 = sub_462BA0((int)v4, 4, 0);
  return v3 <= 2 && (v3 != 2 || sub_4639E0((int)v4, 4) < 3);
}


//======================================================================
// sub_590980
// entry 00590980  size 126  status ok
//======================================================================

bool __stdcall sub_590980(int a1)
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
// sub_590A80
// entry 00590a80  size 499  status ok
//======================================================================

_DWORD *__thiscall sub_590A80(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 476) )
  {
    --*(_DWORD *)(*(_DWORD *)(this + 484) + 496);
    *(_BYTE *)(this + 476) = 0;
    v1 = sub_630F40("SID_POKER_HOLD");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 484) + 484)
                                                 + 464 * *(_DWORD *)(this + 480))
                                     + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 484) + 484) + 464 * *(_DWORD *)(this + 480),
      v1);
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 484) + 488) + 376 * *(_DWORD *)(this + 480))
                                + 112))(*(_DWORD *)(*(_DWORD *)(this + 484) + 488) + 376 * *(_DWORD *)(this + 480));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(this + 484) + 496) < *(_DWORD *)(*(_DWORD *)(this + 484) + 492) )
  {
    ++*(_DWORD *)(*(_DWORD *)(this + 484) + 496);
    *(_BYTE *)(this + 476) = 1;
    v2 = sub_630F40("SID_POKER_DISCARD");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 484) + 484)
                                                 + 464 * *(_DWORD *)(this + 480))
                                     + 180))(
      *(_DWORD *)(*(_DWORD *)(this + 484) + 484) + 464 * *(_DWORD *)(this + 480),
      v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 484) + 488) + 376 * *(_DWORD *)(this + 480))
                                + 116))(*(_DWORD *)(*(_DWORD *)(this + 484) + 488) + 376 * *(_DWORD *)(this + 480));
  }
  return sub_519A40(*(_DWORD **)(this + 484), *(_DWORD *)(this + 480) + 1);
}


//======================================================================
// sub_590C80
// entry 00590c80  size 47  status ok
//======================================================================

int __thiscall sub_590C80(int this, int a2, int a3)
{
  *(_DWORD *)(this + 484) = a2;
  *(_DWORD *)(this + 480) = a3;
  *(_BYTE *)(this + 476) = 0;
  return a3;
}


//======================================================================
// sub_590CB0
// entry 00590cb0  size 203  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_590CB0(ATL::CCRTHeap *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &FourCardPokerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 32) = 0;
  }
  for ( j = 0; j < 12; ++j )
  {
    *((_DWORD *)this + j + 6) = 0;
    *((_DWORD *)this + j + 20) = 0;
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 19) = 0;
  return this;
}


//======================================================================
// sub_590D80
// entry 00590d80  size 595  status ok
//======================================================================

void __thiscall sub_590D80(CNoTrackObject *this)
{
  int j; // [esp+74h] [ebp-14h]
  int i; // [esp+78h] [ebp-10h]

  *(_DWORD *)this = &FourCardPokerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 32) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 32))(*((_DWORD *)this + i + 32), 1);
  }
  for ( j = 0; j < 12; ++j )
  {
    if ( *((_DWORD *)this + j + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 6))(*((_DWORD *)this + j + 6), 1);
    if ( *((_DWORD *)this + j + 20) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 20))(*((_DWORD *)this + j + 20), 1);
  }
  if ( *((_DWORD *)this + 18) )
    (***((void (__thiscall ****)(_DWORD, int))this + 18))(*((_DWORD *)this + 18), 1);
  if ( *((_DWORD *)this + 37) )
    (***((void (__thiscall ****)(_DWORD, int))this + 37))(*((_DWORD *)this + 37), 1);
  if ( *((_DWORD *)this + 38) )
    (***((void (__thiscall ****)(_DWORD, int))this + 38))(*((_DWORD *)this + 38), 1);
  if ( *((_DWORD *)this + 39) )
    (***((void (__thiscall ****)(_DWORD, int))this + 39))(*((_DWORD *)this + 39), 1);
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_590FE0
// entry 00590fe0  size 73  status ok
//======================================================================

int __thiscall sub_590FE0(_DWORD *this)
{
  int result; // eax

  sub_5F2BA0(3231003);
  sub_5F2BA0(3231004);
  result = (int)this;
  if ( *(this + 19) )
  {
    result = sub_5F8990(*(this + 19));
    *(this + 19) = 0;
  }
  return result;
}


//======================================================================
// sub_591030
// entry 00591030  size 61  status ok
//======================================================================

int __stdcall sub_591030(int a1)
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
// sub_591070
// entry 00591070  size 170  status ok
//======================================================================

int __stdcall sub_591070(int a1, __int16 a2, int a3)
{
  int v4; // esi
  _DWORD v5[5]; // [esp+8h] [ebp-14h]

  v5[0] = -1;
  v5[1] = 1;
  v5[2] = 2;
  v5[3] = 3;
  v5[4] = 0;
  if ( !(unsigned __int8)sub_5997A0(a1) && (a1 != 4 || a3 != 5) )
    return 53;
  if ( sub_641280(a2) == 14 )
    return 13 * v5[sub_641290(a2)];
  v4 = 13 * v5[sub_641290(a2)];
  return v4 + sub_641280(a2) - 1;
}


//======================================================================
// sub_591120
// entry 00591120  size 57  status ok
//======================================================================

int __stdcall sub_591120(int a1)
{
  _DWORD v2[5]; // [esp+4h] [ebp-14h]

  v2[0] = 3215002;
  v2[1] = 3215003;
  v2[2] = 3215001;
  v2[3] = 3215004;
  v2[4] = 3215005;
  return v2[a1];
}


//======================================================================
// sub_591160
// entry 00591160  size 63  status ok
//======================================================================

int __stdcall sub_591160(int a1, int a2)
{
  _DWORD v3[5]; // [esp+4h] [ebp-14h]

  v3[0] = 325;
  v3[1] = 215;
  v3[2] = 425;
  v3[3] = 115;
  v3[4] = 275;
  return v3[a1] + 12 * a2;
}


//======================================================================
// sub_5911A0
// entry 005911a0  size 57  status ok
//======================================================================

int __stdcall sub_5911A0(int a1, int a2)
{
  _DWORD v3[5]; // [esp+4h] [ebp-14h]

  v3[0] = 182;
  v3[1] = 183;
  v3[2] = 138;
  v3[3] = 138;
  v3[4] = 82;
  return v3[a1];
}


//======================================================================
// sub_5911E0
// entry 005911e0  size 2190  status ok
//======================================================================

int __thiscall sub_5911E0(int this)
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
  v24 = 369;
  v25[0] = 337;
  v25[1] = 357;
  v25[2] = 294;
  v25[3] = 344;
  v25[4] = 256;
  v25[5] = 198;
  v25[6] = 336;
  v25[7] = 208;
  v25[8] = 296;
  v25[9] = 216;
  v25[10] = 260;
  v25[11] = 548;
  v25[12] = 271;
  v25[13] = 524;
  v25[14] = 241;
  v25[15] = 501;
  v25[16] = 212;
  v25[17] = 35;
  v25[18] = 276;
  v25[19] = 60;
  v25[20] = 246;
  v25[21] = 99;
  v25[22] = 216;
  v1 = sub_630F40("SID_FOURCARDPOKER");
  sub_5F38B0(v1);
  sub_5F1AD0(65001);
  sub_5F2BA0(3231003);
  sub_5F2BA0(3231004);
  for ( i = 0; i < 5; ++i )
  {
    v21 = operator new(0x20u);
    v27 = 0;
    if ( v21 )
      v12 = sub_594090(v21);
    else
      v12 = 0;
    *(_DWORD *)(this + 4 * i + 4) = v12;
    sub_594190(i);
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
    *(_DWORD *)(this + 4 * i + 128) = v11;
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
    *(_DWORD *)(this + 4 * j + 24) = v10;
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 24) + 2784) = j;
    sub_5EAE80(3215006, 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * j + 24) + 176))(
      *(_DWORD *)(this + 4 * j + 24),
      v26[j]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode(*(CPane **)(this + 4 * j + 24), *(_DWORD *)(dword_7935A8 + 4 * j + 8));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 24) + 116))(*(_DWORD *)(this + 4 * j + 24));
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
    *(_DWORD *)(this + 4 * j + 80) = v9;
    sub_5EAE80(3216018, v25[2 * j - 1], v25[2 * j], 100, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 80) + 112))(*(_DWORD *)(this + 4 * j + 80));
  }
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 24) + 68))(*(_DWORD *)(this + 24), 19, -54);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), 17, -52);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), 14, -49);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 36) + 68))(*(_DWORD *)(this + 36), -3, -52);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 40) + 68))(*(_DWORD *)(this + 40), -6, -51);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 44) + 68))(*(_DWORD *)(this + 44), -8, -48);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 48) + 68))(*(_DWORD *)(this + 48), 17, 16);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 52) + 68))(*(_DWORD *)(this + 52), 20, 15);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 56) + 68))(*(_DWORD *)(this + 56), 21, 13);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 60) + 68))(*(_DWORD *)(this + 60), -11, 16);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 64) + 68))(*(_DWORD *)(this + 64), -16, 14);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 68) + 68))(*(_DWORD *)(this + 68), -19, 14);
  v17 = operator new(0x198u);
  v27 = 4;
  if ( v17 )
  {
    sub_5CD6A0(v17);
    *v17 = &FourCardPokerDealerDisplay::`vftable';
    v8 = v17;
  }
  else
  {
    v8 = 0;
  }
  v27 = -1;
  *(_DWORD *)(this + 72) = v8;
  sub_5EAE80(0, 0, 0, 0, -1);
  v16 = operator new(0x184u);
  v27 = 5;
  if ( v16 )
    v7 = sub_5F5BF0(v16);
  else
    v7 = 0;
  v27 = -1;
  *(_DWORD *)(this + 148) = v7;
  sub_5EAE80(2022, 0, 0, 51, -1);
  v15 = operator new(0x184u);
  v27 = 6;
  if ( v15 )
    v6 = sub_5F5BF0(v15);
  else
    v6 = 0;
  v27 = -1;
  *(_DWORD *)(this + 152) = v6;
  sub_5EAE80(2023, 0, 0, 50, -1);
  v14 = operator new(0x184u);
  v27 = 7;
  if ( v14 )
    v5 = sub_5F5BF0(v14);
  else
    v5 = 0;
  v27 = -1;
  *(_DWORD *)(this + 156) = v5;
  return sub_5EAE80(2007, 0, 0, 1, -1);
}


//======================================================================
// sub_591A70
// entry 00591a70  size 1320  status ok
//======================================================================

int __thiscall sub_591A70(_DWORD **this)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // edi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int result; // eax
  int v13; // [esp+8h] [ebp-7Ch]
  int v15; // [esp+18h] [ebp-6Ch]
  int n; // [esp+1Ch] [ebp-68h]
  _WORD v17[4]; // [esp+24h] [ebp-60h] BYREF
  int v18; // [esp+2Ch] [ebp-58h]
  int m; // [esp+30h] [ebp-54h]
  int v20; // [esp+34h] [ebp-50h]
  int k; // [esp+38h] [ebp-4Ch]
  int v22; // [esp+3Ch] [ebp-48h]
  int j; // [esp+40h] [ebp-44h]
  int v24; // [esp+44h] [ebp-40h]
  int i; // [esp+48h] [ebp-3Ch]
  char Destination[52]; // [esp+4Ch] [ebp-38h] BYREF

  sub_592230(this);
  for ( i = 0; i < 4; ++i )
  {
    v24 = 3 * i;
    for ( j = 0; j < 3; ++j )
    {
      v22 = *(_DWORD *)(dword_7935A8 + 4 * (v24 + j) + 152);
      if ( v22 == -1 )
      {
        (*(void (__thiscall **)(_DWORD))(**(this + v24 + j + 20) + 112))(*(this + v24 + j + 20));
      }
      else
      {
        v1 = sub_591030(v22);
        (*(void (__thiscall **)(_DWORD, int))(**(this + v24 + j + 20) + 176))(*(this + v24 + j + 20), v1);
        (*(void (__thiscall **)(_DWORD))(**(this + v24 + j + 20) + 116))(*(this + v24 + j + 20));
      }
    }
  }
  for ( k = 0; k < 5; ++k )
  {
    sub_594260(*(this + k + 1));
    if ( k != 4
      && *(_BYTE *)(sub_5DCB00(k) + 1184)
      && (unsigned __int8)sub_5DA7B0(dword_7935A4)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7935A4 + 708))(dword_7935A4, k) )
    {
      v20 = 3 * k;
      for ( m = 0; m < 3; ++m )
      {
        if ( !(*(this + v20 + m + 6))[120 * k + 95] )
          (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + v20 + m + 6) + 184))(*(this + v20 + m + 6), k, 0);
      }
    }
    if ( (unsigned __int8)sub_5997A0(k) )
    {
      for ( n = 0; n < 4; ++n )
        v17[n] = 0;
      sub_462A40(4, dword_7935A8 + 12 * k + 200, (k == 4) + 5, (int)v17);
      v2 = sub_462BA0((int)v17, 4, 0);
      sub_462F40(v2, Destination);
      v3 = sub_591160(k, 0);
      v4 = sub_591160(k, 4);
      v5 = v4 - sub_591160(k, 0);
      v18 = (v5 - sub_5F5550(*(this + k + 32)) + 35) / 2 + v3;
      if ( k == 4 )
      {
        v6 = sub_5911A0(4, 0);
        v13 = v6 + sub_5F5590((*(this + k + 1))[2]) - 68;
      }
      else
      {
        v13 = sub_5911A0(k, 0) - 17;
      }
      (*(void (__thiscall **)(_DWORD, char *))(**(this + k + 32) + 180))(*(this + k + 32), Destination);
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + k + 32) + 68))(*(this + k + 32), v18, v13);
      (*(void (__thiscall **)(_DWORD))(**(this + k + 32) + 116))(*(this + k + 32));
    }
    else if ( k == 4 )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + 36) + 112))(*(this + 36));
    }
    else if ( *(_BYTE *)(k + dword_7935A8 + 274) )
    {
      v7 = sub_591160(k, 0);
      v8 = sub_591160(k, 4);
      v9 = v8 - sub_591160(k, 0);
      v15 = (v9 - sub_5F5550(*(this + k + 32)) + 35) / 2 + v7;
      v10 = sub_630F40("SID_FOURCARDPOKER_FOLD");
      (*(void (__thiscall **)(_DWORD, int))(**(this + k + 32) + 180))(*(this + k + 32), v10);
      v11 = sub_5911A0(k, 0);
      (*(void (__thiscall **)(_DWORD, int, int))(**(this + k + 32) + 68))(*(this + k + 32), v15, v11 - 17);
      (*(void (__thiscall **)(_DWORD))(**(this + k + 32) + 116))(*(this + k + 32));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(this + k + 32) + 112))(*(this + k + 32));
    }
  }
  result = sub_5DA7B0(dword_7935A4);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7935A4 + 752))(dword_7935A4);
  return result;
}


//======================================================================
// sub_591FA0
// entry 00591fa0  size 227  status ok
//======================================================================

int __thiscall sub_591FA0(int this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  sub_591A70((_DWORD **)this);
  if ( !*(_DWORD *)(this + 76) )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v2 = sub_592300(v4);
    else
      v2 = 0;
    *(_DWORD *)(this + 76) = v2;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 60))(*(_DWORD *)(this + 76));
    sub_5F7340(0, 170);
  }
  sub_5F85D0(*(_DWORD *)(this + 76));
  sub_5F2B20(3231003, 1);
  return sub_5F2B20(3231004, 1);
}


//======================================================================
// sub_592090
// entry 00592090  size 70  status ok
//======================================================================

int __thiscall sub_592090(_DWORD **this, int a2, int a3)
{
  int result; // eax

  if ( a2 != 4 )
  {
    result = a3;
    if ( *(this + a3 + 6) )
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + a3 + 6) + 184))(*(this + a3 + 6), a2, 0);
  }
  return result;
}


//======================================================================
// sub_5920E0
// entry 005920e0  size 197  status ok
//======================================================================

int __thiscall sub_5920E0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-10h]
  __int16 v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v9 = *(_DWORD *)(*(this + a2 + 1) + 4 * a3 + 8);
  v8 = sub_598420(a2, a3);
  v3 = sub_591120(a2);
  sub_5EAF00(v3);
  v4 = sub_591070(a2, v8, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 176))(v9, v4);
  v7 = sub_5911A0(a2, a3);
  v5 = sub_591160(a2, a3);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 68))(v9, v5, v7);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 108))(v9, a3 + 5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
}


//======================================================================
// sub_5921B0
// entry 005921b0  size 121  status ok
//======================================================================

int __thiscall sub_5921B0(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_7935A4)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_7935A4 + 724))(dword_7935A4, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_599780(dword_7935A8) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_5956F0(v2);
    }
  }
  return result;
}


//======================================================================
// sub_592230
// entry 00592230  size 204  status ok
//======================================================================

int sub_592230()
{
  char v1; // [esp+0h] [ebp-18h]
  CImageDisplay *v2; // [esp+10h] [ebp-8h]
  unsigned int v3; // [esp+14h] [ebp-4h]

  if ( sub_5981B0(dword_7935A8) != -1
    && (v3 = sub_5981B0(dword_7935A8), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_598700(v3)) )
  {
    return sub_5F2B20(3231002, 1);
  }
  else
  {
    return sub_5F2BA0(3231002);
  }
}


//======================================================================
// sub_592300
// entry 00592300  size 48  status ok
//======================================================================

_DWORD *__thiscall sub_592300(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &FourCardPokerActionDialog::`vftable';
  *(_BYTE *)(dword_7935A8 + 300) = 1;
  return this;
}


//======================================================================
// sub_592330
// entry 00592330  size 41  status ok
//======================================================================

int __thiscall sub_592330(_DWORD *this)
{
  *this = &FourCardPokerActionDialog::`vftable';
  *(_BYTE *)(dword_7935A8 + 300) = 0;
  return sub_5F7260();
}


//======================================================================
// sub_592360
// entry 00592360  size 288  status ok
//======================================================================

int __stdcall sub_592360(int a1)
{
  int v1; // eax
  int result; // eax
  const CHAR *v3; // eax
  const CHAR *v4; // [esp-8h] [ebp-30h]
  int v5; // [esp-4h] [ebp-2Ch]
  int v6; // [esp+4h] [ebp-24h]
  void *v7; // [esp+Ch] [ebp-1Ch]
  _BYTE v8[8]; // [esp+14h] [ebp-14h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  v1 = sub_597D30(dword_7935A8);
  result = sub_598750(v1, a1 == 0);
  if ( !(_BYTE)result )
  {
    if ( a1 != 1 || (v5 = sub_597D30(dword_7935A8), sub_597D30(dword_7935A8), *(_DWORD *)sub_5CB880(v8, v5)) )
    {
      sub_590FE0((_DWORD *)dword_79359C);
      v7 = operator new(0x24u);
      v9 = 0;
      if ( v7 )
        v6 = sub_5943D0(a1);
      else
        v6 = 0;
      v9 = -1;
      return sub_5FC420(v6);
    }
    else
    {
      v4 = (const CHAR *)sub_630F40("SID_CASINO_BETTING");
      v3 = (const CHAR *)sub_630F40("SID_FOURCARDPOKER_INVALID_PLAY_BET");
      return sub_62FF10(v3, v4, 0);
    }
  }
  return result;
}


//======================================================================
// sub_592480
// entry 00592480  size 290  status ok
//======================================================================

int __thiscall sub_592480(void *this, int a2)
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
          sub_5DB240(dword_7935A4);
          *(_BYTE *)(a2 + 4) = 1;
        }
        else if ( tolower(*(char *)(a2 + 20)) == 102 && (v3 = sub_5F2A60(3231003, 0), (unsigned __int8)sub_6026D0(v3)) )
        {
          (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 24))(this, 0);
          *(_BYTE *)(a2 + 4) = 1;
        }
        else if ( tolower(*(char *)(a2 + 20)) == 99 || tolower(*(char *)(a2 + 20)) == 112 )
        {
          v4 = sub_5F2A60(3231004, 0);
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
// sub_5925B0
// entry 005925b0  size 219  status ok
//======================================================================

int __thiscall sub_5925B0(CMFCTabCtrl *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int i; // [esp+4h] [ebp-18h]
  _DWORD v6[2]; // [esp+8h] [ebp-14h]
  _DWORD v7[3]; // [esp+10h] [ebp-Ch]

  v7[0] = "SID_FOURCARDPOKER_FOLD";
  v7[1] = "SID_FOURCARDPOKER_PLAY";
  v6[0] = 0;
  v6[1] = 1;
  v7[2] = sub_597D30(dword_7935A8);
  sub_5F83D0(1060, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_GENERIC_ACTIONS");
  result = sub_5F73E0(v1, 73, 0, 3);
  for ( i = 0; i < 2; ++i )
  {
    v3 = sub_630F40(v7[i]);
    sub_5F9DE0(0, v6[i], 3200222, 10, 35 * i + 38, 2, v3, 72, 75, 74, -1, 0);
    sub_5FB300(i);
    sub_5EB700(1);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_592690
// entry 00592690  size 94  status ok
//======================================================================

int __stdcall sub_592690(char a1)
{
  int result; // eax

  result = sub_5FB2B0(0);
  if ( !result )
  {
    sub_5F9CE0(0, 0, 5016, 10, 35 * (a1 == 0) + 38, 3, 0, 255, 0);
    sub_5FB2B0(0);
    return sub_5EB5D0(100);
  }
  return result;
}


//======================================================================
// sub_592750
// entry 00592750  size 32  status ok
//======================================================================

int __stdcall sub_592750(int a1, int a2)
{
  return sub_5928A0(a1, a2) - 15;
}


//======================================================================
// sub_592770
// entry 00592770  size 87  status ok
//======================================================================

int __stdcall sub_592770(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5927D0(a1, a2);
  if ( sub_62FBF0(2) )
    return v3 + sub_62FBF0(3);
  else
    return v3 - sub_62FBF0(3);
}


//======================================================================
// sub_5927D0
// entry 005927d0  size 112  status ok
//======================================================================

int __thiscall sub_5927D0(_DWORD *this, int a2, int a3)
{
  _DWORD v4[12]; // [esp+4h] [ebp-30h]

  v4[0] = 389;
  v4[1] = 378;
  v4[2] = 364;
  v4[3] = 198;
  v4[4] = 208;
  v4[5] = 216;
  v4[6] = 549;
  v4[7] = 521;
  v4[8] = 491;
  v4[9] = 33;
  v4[10] = 60;
  v4[11] = 86;
  return v4[*(this + 696)];
}


//======================================================================
// sub_592840
// entry 00592840  size 87  status ok
//======================================================================

int __stdcall sub_592840(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_5928A0(a1, a2);
  if ( sub_62FBF0(2) )
    return v3 + sub_62FBF0(3);
  else
    return v3 - sub_62FBF0(3);
}


//======================================================================
// sub_5928A0
// entry 005928a0  size 112  status ok
//======================================================================

int __thiscall sub_5928A0(_DWORD *this, int a2, int a3)
{
  _DWORD v4[12]; // [esp+4h] [ebp-30h]

  v4[0] = 337;
  v4[1] = 296;
  v4[2] = 258;
  v4[3] = 338;
  v4[4] = 295;
  v4[5] = 258;
  v4[6] = 273;
  v4[7] = 242;
  v4[8] = 212;
  v4[9] = 277;
  v4[10] = 244;
  v4[11] = 216;
  return v4[*(this + 696)];
}


//======================================================================
// sub_592910
// entry 00592910  size 16  status ok
//======================================================================

int sub_592910()
{
  return 3215007;
}


//======================================================================
// sub_592920
// entry 00592920  size 373  status ok
//======================================================================

int __stdcall sub_592920(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_79359C;
  if ( *(_DWORD *)(dword_79359C + 152) )
  {
    sub_5EAF00(2025);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 152) + 176))(
      *(_DWORD *)(dword_79359C + 152),
      0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_79359C + 148) )
  {
    sub_5EAF00(2024);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 148) + 176))(
      *(_DWORD *)(dword_79359C + 148),
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
// sub_592AA0
// entry 00592aa0  size 433  status ok
//======================================================================

int __stdcall sub_592AA0(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_79359C;
  if ( *(_DWORD *)(dword_79359C + 152) )
  {
    sub_5EAF00(2023);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 152) + 176))(
      *(_DWORD *)(dword_79359C + 152),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 152) + 116))(*(_DWORD *)(dword_79359C + 152));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_79359C + 148) )
  {
    sub_5EAF00(2022);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79359C + 148) + 176))(
      *(_DWORD *)(dword_79359C + 148),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79359C + 148) + 116))(*(_DWORD *)(dword_79359C + 148));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_592C60
// entry 00592c60  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_592C60(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &FourCardPokerDealScript::`vftable';
  *(this + 36) = sub_637810(4) < 2;
  return this;
}


