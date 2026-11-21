//======================================================================
// sub_671AD0
// entry 00671ad0  size 100  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_671AD0(int *this)
{
  BYTE v1; // al
  const struct tagVIDEOINFO *result; // eax
  bool v4; // [esp+7h] [ebp-5h]
  CImageDisplay *v5; // [esp+8h] [ebp-4h]

  v1 = sub_6378E0((_DWORD **)dword_162EE84);
  sub_670E30(*(this + 119), v1 == 0);
  v4 = sub_6378E0((_DWORD **)dword_162EE84) == 0;
  v5 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  result = CImageDisplay::GetDisplayFormat(v5);
  result->bmiColors[196].rgbBlue = v4;
  return result;
}


//======================================================================
// sub_671B40
// entry 00671b40  size 314  status ok
//======================================================================

int __thiscall sub_671B40(int this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84);
  if ( (_BYTE)result )
  {
    if ( !--*(_DWORD *)(this + 484) )
    {
      v4 = operator new(0x20u);
      if ( v4 )
        v2 = sub_6010A0(v4, 0);
      else
        v2 = 0;
      sub_5F5D50(*(_DWORD **)(this + 480), (int)v2);
      *(_DWORD *)(*(_DWORD *)(this + 480) + 376) = 7;
      *(_DWORD *)(this + 484) = 60 * sub_62FBF0(10) + 300;
    }
    result = this;
    if ( !*(_DWORD *)(*(_DWORD *)(this + 480) + 384) )
    {
      result = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 480));
      if ( result )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 480) + 176))(*(_DWORD *)(this + 480), 0);
    }
  }
  return result;
}


//======================================================================
// sub_671C80
// entry 00671c80  size 128  status ok
//======================================================================

int __thiscall sub_671C80(int this, char a2, int a3)
{
  sub_5FC0D0((ATL::CCRTHeap *)this, 0);
  *(_DWORD *)this = &RewardsOpenTagScript::`vftable';
  *(_BYTE *)(this + 32) = a2;
  *(_DWORD *)(this + 36) = a3;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 116))(*(_DWORD *)(this + 36));
  return this;
}


//======================================================================
// sub_671D00
// entry 00671d00  size 118  status ok
//======================================================================

void __thiscall sub_671D00(_DWORD *this)
{
  int v1; // [esp+4h] [ebp-10h]

  *this = &RewardsOpenTagScript::`vftable';
  *(_BYTE *)(*(this + 9) + 388) = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 116))(*(this + 9));
  sub_5FC150(v1);
}


//======================================================================
// sub_671D80
// entry 00671d80  size 287  status ok
//======================================================================

void (__thiscall ****__thiscall sub_671D80(void *this))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax
  _DWORD *v2; // [esp+18h] [ebp-24h]
  int v3; // [esp+1Ch] [ebp-20h]
  _DWORD *v5; // [esp+24h] [ebp-18h]

  result = (void (__thiscall ****)(_DWORD, _DWORD))this;
  v3 = *((_DWORD *)this + 5);
  if ( v3 )
  {
    if ( v3 == 1 )
      return sub_5F5DF0(*((void (__thiscall *****)(_DWORD, _DWORD))this + 9), 0);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 9) + 176))(*((_DWORD *)this + 9), 0);
    v5 = operator new(0x20u);
    if ( v5 )
      v2 = sub_6010A0(v5, (int)this);
    else
      v2 = 0;
    sub_5F5D50(*((_DWORD **)this + 9), (int)v2);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
    return (void (__thiscall ****)(_DWORD, _DWORD))(*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                                                     dword_162EE84,
                                                     2600002 - (*((_BYTE *)this + 32) != 0),
                                                     0,
                                                     0,
                                                     5,
                                                     1,
                                                     1.0,
                                                     0.5,
                                                     0);
  }
  return result;
}


//======================================================================
// sub_671F90
// entry 00671f90  size 120  status ok
//======================================================================

int __thiscall sub_671F90(int this, char a2)
{
  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = &GettingStartedDialog::`vftable';
  sub_5F83D0((_DWORD *)this, 3200246, 0);
  *(_BYTE *)(this + 444) = a2;
  return this;
}


//======================================================================
// sub_672030
// entry 00672030  size 1627  status ok
//======================================================================

int __thiscall sub_672030(_BYTE *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  const char *v2; // eax
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
  int result; // eax
  int v16; // eax
  int v17; // [esp+4h] [ebp-C4h]
  int v18; // [esp+8h] [ebp-C0h]
  int v19; // [esp+Ch] [ebp-BCh]
  int v20; // [esp+10h] [ebp-B8h]
  int v21; // [esp+18h] [ebp-B0h]
  char v23[32]; // [esp+20h] [ebp-A8h] BYREF
  char Buffer[132]; // [esp+40h] [ebp-88h] BYREF

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, char *))(*(_DWORD *)dword_162EE84 + 824))(
    dword_162EE84,
    ExecutingCollection,
    v23);
  v2 = (const char *)sub_630F40((int)"SID_SHELL_GETTINGSTARTED_FORMAT");
  sprintf(Buffer, v2, v23);
  sub_5FA5B0(this, 0, -1, (int)Buffer, 73, 427, 25, 3, 5, 1, 6, -1);
  v3 = sub_630F40((int)"SID_SHELL_PLAY");
  sub_5F9DE0(this, 0, 0, 3200229, *(this + 444) != 0 ? 134 : 176, 345, 1, v3, 72, 75, 74, -1, 13);
  if ( *(this + 444) )
  {
    v4 = sub_630F40((int)"SID_SHELL_LEAVE");
    sub_5F9DE0(this, 0, 1, 3200222, 224, 345, 1, v4, 72, 75, 74, -1, 27);
  }
  v5 = sub_630F40((int)"SID_SHELL_TUTORIAL");
  sub_5F9DE0(this, 0, 2, 3200222, 10, 345, 1, v5, 72, 75, 74, -1, 0);
  sub_5FA880(this, 0, 0, 1, 270, 219, 33, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 1, 270, 220, 34, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880(this, 0, 0, 433, 1, 3, 337, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 433, 1, 4, 338, 1, 255, 255, 255, 0, 0, 0);
  v6 = sub_630F40((int)"SID_SHELL_ALWAYSGETSTARTED");
  sub_5F9EF0(this, 0, 6, 3200201, 50, 307, 1, v6, 31, 69, 66, -1, 20, 0);
  if ( (unsigned __int8)sub_6378A0(dword_162EE84, (struct Concurrency::details::_TaskCollectionBase *)0xFFFFFFFF) )
  {
    v21 = sub_5FB350((int)this, 6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 244))(v21);
  }
  else
  {
    v20 = sub_5FB350((int)this, 6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 248))(v20);
  }
  v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 764))(dword_162EE84);
  sub_5F9CE0(this, 0, 0, v7, 9, 36, 1, 0, 0xFFu, 0);
  sub_5FA790(this, 0, 0, (char *)&Source, 72, 203, 82, 9, 36, 1, 120, 124, 161, 255, 255, 255, 0);
  v8 = sub_630F40((int)"SID_SHELL_CHANGEPLAYERSETTINGS");
  sub_5FA5B0(this, 0, -1, v8, 31, 105, 40, 103, 45, 1, 5, -1);
  v9 = sub_630F40((int)"SID_GENERIC_PLAYERS");
  sub_5F9DE0(this, 0, 3, 3200222, 108, 85, 2, v9, 72, 75, 74, -1, 0);
  v10 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 768))(dword_162EE84);
  sub_5F9CE0(this, 0, 1, v10, 9, 126, 1, 0, 0xFFu, 0);
  sub_5FA790(this, 0, 1, (char *)&Source, 72, 203, 82, 9, 126, 1, 120, 124, 161, 255, 255, 255, 0);
  v11 = sub_630F40((int)"SID_SHELL_CHANGEGAMESETTINGS");
  sub_5FA5B0(this, 0, -1, v11, 31, 105, 40, 103, 135, 1, 5, -1);
  v12 = sub_630F40((int)"SID_GENERIC_SETTINGS");
  sub_5F9DE0(this, 0, 4, 3200222, 108, 175, 2, v12, 72, 75, 74, -1, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 176))(dword_162EE80) )
  {
    v19 = sub_5FB300((int)this, 4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 208))(v19);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 180))(dword_162EE80) )
  {
    v18 = sub_5FB300((int)this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 208))(v18);
  }
  sub_5F9CE0(this, 0, 1, 3200249, 9, 216, 1, 0, 0xFFu, 0);
  sub_5FA790(this, 0, 2, (char *)&Source, 72, 203, 82, 9, 216, 1, 120, 124, 161, 255, 255, 255, 0);
  v13 = sub_630F40((int)"SID_SHELL_LEARNRULES");
  sub_5FA5B0(this, 0, -1, v13, 31, 105, 40, 103, 225, 1, 5, -1);
  v14 = sub_630F40((int)"SID_SHELL_RULES");
  sub_5F9DE0(this, 0, 5, 3200222, 108, 265, 2, v14, 72, 75, 74, -1, 0);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_162EE80 + 356))(dword_162EE80, this);
  v17 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 136))(v17);
  if ( !(_BYTE)result )
  {
    v16 = sub_5FB300((int)this, 2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 112))(v16, v16);
  }
  return result;
}


//======================================================================
// sub_672690
// entry 00672690  size 570  status ok
//======================================================================

HINSTANCE __thiscall sub_672690(_BYTE *this, HINSTANCE a2)
{
  HINSTANCE result; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  int v5; // eax
  _BYTE *v6; // eax
  char v8; // [esp+Bh] [ebp-21h]
  struct Concurrency::details::_TaskCollectionBase *v9; // [esp+Ch] [ebp-20h]
  CImageDisplay *v10; // [esp+10h] [ebp-1Ch]
  char v11; // [esp+17h] [ebp-15h]
  struct Concurrency::details::_TaskCollectionBase *v12; // [esp+18h] [ebp-14h]
  CImageDisplay *v13; // [esp+1Ch] [ebp-10h]
  char v14; // [esp+23h] [ebp-9h]
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // [esp+24h] [ebp-8h]
  CImageDisplay *v16; // [esp+28h] [ebp-4h]

  result = a2;
  switch ( (unsigned int)a2 )
  {
    case 0u:
      v3 = (_BYTE *)sub_5FB350((int)this, 6);
      v14 = sub_600230(v3);
      ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
      v16 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      *((_BYTE *)ExecutingCollection + (_DWORD)CImageDisplay::GetDisplayFormat(v16) + 616) = v14;
      sub_637610((_DWORD **)dword_162EE84);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 384))(dword_162EE80);
      result = (HINSTANCE)this;
      if ( *(this + 444) )
        result = (HINSTANCE)(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 248))(dword_162EE80);
      break;
    case 1u:
      v4 = (_BYTE *)sub_5FB350((int)this, 6);
      v11 = sub_600230(v4);
      v12 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
      v13 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      *((_BYTE *)v12 + (_DWORD)CImageDisplay::GetDisplayFormat(v13) + 616) = v11;
      sub_637610((_DWORD **)dword_162EE84);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 384))(dword_162EE80);
      v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
      result = (HINSTANCE)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
                            dword_162EE84,
                            v5);
      break;
    case 2u:
      result = (HINSTANCE)(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 524))(dword_162EE80);
      if ( (_BYTE)result )
      {
        v6 = (_BYTE *)sub_5FB350((int)this, 6);
        v8 = sub_600230(v6);
        v9 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
        v10 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
        *((_BYTE *)v9 + (_DWORD)CImageDisplay::GetDisplayFormat(v10) + 616) = v8;
        sub_637610((_DWORD **)dword_162EE84);
        result = (HINSTANCE)(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 384))(dword_162EE80);
      }
      break;
    case 3u:
      sub_5F87D0((int)this);
      result = (HINSTANCE)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 372))(dword_162EE80, 4);
      break;
    case 4u:
      sub_5F87D0((int)this);
      result = (HINSTANCE)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 372))(dword_162EE80, 3);
      break;
    case 5u:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 244))(
        dword_162EE84,
        -1);
      result = sub_60CCE0();
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_672A50
// entry 00672a50  size 167  status ok
//======================================================================

int __thiscall sub_672A50(int this)
{
  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = off_6E1334;
  *(_DWORD *)(this + 444) = -1;
  *(_BYTE *)(this + 448) = 0;
  *(_DWORD *)(this + 496) = 0;
  *(_DWORD *)(this + 500) = 0;
  sub_5F83D0((_DWORD *)this, 3600001, 0);
  sub_5F7340((_DWORD **)this, 0, 0);
  return this;
}


//======================================================================
// sub_672B20
// entry 00672b20  size 634  status ok
//======================================================================

int __thiscall sub_672B20(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-30h]
  int v6; // [esp+4h] [ebp-28h]
  int v7; // [esp+8h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch]
  int v10; // [esp+14h] [ebp-18h]
  int v11; // [esp+18h] [ebp-14h]
  int i; // [esp+20h] [ebp-Ch]
  int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = sub_630F40((int)"SID_SHELL_DONE");
    sub_5F9DE0(this, 0, 1, 3200229, 308, 567, 1, v2, 72, 75, 74, -1, 13);
    sub_5F9DE0(this, 0, 2, 3200259, 47, 567, 1, (int)&Source, -1, -1, -1, -1, 0);
    sub_5F9DE0(this, 0, 3, 3200260, 12, 567, 1, (int)&Source, -1, -1, -1, -1, 0);
    sub_5F9CE0(this, 0, 4, 0, 0, 0, 1, 0, 0xFFu, 0);
  }
  *(this + 111) = a2;
  v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 224))(dword_7947E0, a2);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  memset(this + 113, 0, 0x2Cu);
  *(this + 124) = 0;
  if ( v14 )
  {
    for ( i = 0; i < 10; ++i )
    {
      *(this + i + 113) = *(_DWORD *)(v14 + 4 * i);
      if ( !*(this + i + 113) )
        break;
      ++*(this + 124);
    }
  }
  *(this + 125) = 0;
  if ( !*(this + 124) )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, 1);
  if ( (int)*(this + 124) <= 1 )
  {
    v7 = sub_5FB300((int)this, 2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 112))(v7);
    v6 = sub_5FB300((int)this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 112))(v6);
  }
  else
  {
    v11 = sub_5FB300((int)this, 2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 208))(v11);
    v10 = sub_5FB300((int)this, 2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 116))(v10);
    v9 = sub_5FB300((int)this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 204))(v9);
    v8 = sub_5FB300((int)this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8);
  }
  v5 = *(this + 113);
  v4 = sub_5FB2B0((int)this, 4);
  return sub_5EAF00(v4, v5);
}


//======================================================================
// sub_672DA0
// entry 00672da0  size 479  status ok
//======================================================================

char __thiscall sub_672DA0(_DWORD *this, int a2)
{
  char result; // al
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp-4h] [ebp-24h]
  int v7; // [esp+4h] [ebp-1Ch]
  int v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]

  result = a2;
  switch ( a2 )
  {
    case 1:
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 392))(dword_7947E4);
      return sub_5F87D0((int)this);
    case 2:
      if ( (int)--*(this + 125) < 0 )
        *(this + 125) = 0;
      v10 = sub_5FB300((int)this, 2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 204))(v10);
      v9 = sub_5FB300((int)this, 3);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 204))(v9);
      if ( !*(this + 125) )
      {
        v3 = sub_5FB300((int)this, 2);
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
      }
      goto LABEL_15;
    case 3:
      if ( ++*(this + 125) >= *(this + 124) )
        *(this + 125) = *(this + 124) - 1;
      v8 = sub_5FB300((int)this, 2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 204))(v8);
      v7 = sub_5FB300((int)this, 3);
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 204))(v7);
      if ( *(this + 125) == *(this + 124) - 1 )
      {
        v4 = sub_5FB300((int)this, 3);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 208))(v4, v4);
      }
LABEL_15:
      v6 = *(this + *(this + 125) + 113);
      v5 = sub_5FB2B0((int)this, 4);
      return sub_5EAF00(v5, v6);
  }
  return result;
}


//======================================================================
// sub_672FE0
// entry 00672fe0  size 132  status ok
//======================================================================

_DWORD *__thiscall sub_672FE0(_DWORD *this)
{
  sub_5F71F0(this, 1, 0);
  *this = off_6E137C;
  sub_5F83D0(this, 3200245, 0);
  *(this + 111) = 0;
  *(this + 112) = 0;
  return this;
}


//======================================================================
// sub_673070
// entry 00673070  size 186  status ok
//======================================================================

int __thiscall sub_673070(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))off_6E137C;
  if ( *(this + 111) )
    (***(this + 111))(*(this + 111), 1);
  if ( *(this + 112) )
    (***(this + 112))(*(this + 112), 1);
  return sub_5F7260(this);
}


//======================================================================
// sub_673130
// entry 00673130  size 1955  status ok
//======================================================================

int __thiscall sub_673130(int this, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned __int16 v5; // ax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v12; // [esp-10h] [ebp-74h]
  int v13; // [esp-4h] [ebp-68h]
  _DWORD *v14; // [esp+4h] [ebp-60h]
  int v15; // [esp+8h] [ebp-5Ch]
  int v16; // [esp+Ch] [ebp-58h]
  _DWORD *v17; // [esp+10h] [ebp-54h]
  _DWORD *v18; // [esp+14h] [ebp-50h]
  _DWORD *v19; // [esp+18h] [ebp-4Ch]
  int v20; // [esp+1Ch] [ebp-48h]
  int v21; // [esp+20h] [ebp-44h]
  _DWORD *v23; // [esp+28h] [ebp-3Ch]
  _DWORD *v24; // [esp+30h] [ebp-34h]
  _DWORD *v25; // [esp+38h] [ebp-2Ch]
  _DWORD *v26; // [esp+40h] [ebp-24h]
  void *v27; // [esp+50h] [ebp-14h]

  *(_BYTE *)(this + 452) = a2;
  v2 = sub_630F40((int)"SID_GENERIC_OK");
  sub_5F9DE0((void *)this, 0, 0, 3200229, *(_BYTE *)(this + 452) != 0 ? 374 : 284, 352, 1, v2, 72, 75, 74, -1, 13);
  v3 = sub_630F40((int)"SID_GENERIC_CANCEL");
  sub_5F9DE0((void *)this, 0, 1, 3200222, *(_BYTE *)(this + 452) != 0 ? 464 : 374, 352, 1, v3, 72, 75, 74, -1, 27);
  sub_5FA5B0((void *)this, 0, 0, (int)&Source, 31, 210, 15, 339, 288, 1, 5, -1);
  sub_5FA5B0((void *)this, 0, 1, (int)&Source, 72, 120, 25, 339, 260, 1, 5, -1);
  sub_5F9CE0((void *)this, 0, 0, 3200244, 327, 38, 1, 0, 0xFFu, 0);
  sub_5FA5B0((void *)this, 0, 4, (int)&Source, 31, 215, 17, 332, 41, 5, 5, -1);
  v12 = *(_BYTE *)(this + 452) != 0 ? 104 : 40;
  v4 = sub_630F40((int)"SID_SHELL_SAVEDGAMES_COLON");
  sub_5FA5B0((void *)this, 0, 5, v4, 72, 215, 25, 14, v12, 5, 5, -1);
  sub_5FA880((void *)this, 0, 0, 1, 302, 320, 35, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 1, 302, 321, 36, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 554, 1, 3, 344, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 554, 1, 4, 345, 1, 255, 255, 255, 0, 0, 0);
  if ( !*(_DWORD *)(this + 444) )
  {
    v27 = operator new(0x214CCu);
    if ( v27 )
      v21 = sub_673D10(v27);
    else
      v21 = 0;
    *(_DWORD *)(this + 444) = v21;
    *(_DWORD *)(*(_DWORD *)(this + 444) + 4) = this;
    if ( operator new(0x41Cu) )
    {
      v13 = (unsigned __int16)sub_5F8570(*((_DWORD **)dword_162EE84 + 5));
      v5 = sub_5F8550(*((_DWORD **)dword_162EE84 + 5));
      v20 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(v5, v13);
    }
    else
    {
      v20 = 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 444) + 72) = v20;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 444) + 64))(*(_DWORD *)(this + 444));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 444) + 120))(*(_DWORD *)(this + 444), 213, 160);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 444) + 68))(*(_DWORD *)(this + 444), 334, 62);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 444) + 108))(*(_DWORD *)(this + 444), 3);
  }
  if ( *(_BYTE *)(this + 452) )
  {
    v6 = sub_630F40((int)"SID_SHELL_SAVEGAME");
    sub_5FA5B0((void *)this, 0, 2, v6, 73, 546, 25, 3, 3, 1, 18, -1);
    v26 = operator new(0xCCu);
    if ( v26 )
    {
      sub_6280D0((int)v26);
      *v26 = &SavedGamesListBox::`vftable';
      v19 = v26;
    }
    else
    {
      v19 = 0;
    }
    sub_5FAC90(
      (void *)this,
      v19,
      0,
      3200236,
      8,
      102,
      1,
      0,
      3200204,
      286,
      108,
      3200203,
      286,
      22,
      3200207,
      285,
      38,
      88,
      285,
      39,
      16,
      67,
      7,
      24,
      275,
      16,
      6,
      31,
      69,
      66,
      0,
      0,
      0,
      3200238);
    v7 = sub_630F40((int)"SID_SHELL_SAVEGAMEAS_COLON");
    sub_5FA5B0((void *)this, 0, 3, v7, 72, 140, 25, 14, 40, 1, 5, -1);
    v25 = operator new(0x1FCu);
    if ( v25 )
    {
      sub_60B4A0(v25);
      *v25 = &FileNameEditBox::`vftable';
      v18 = v25;
    }
    else
    {
      v18 = 0;
    }
    sub_5FA6A0((void *)this, v18, 0, 3200233, 8, 38, (int)&Source, 31, 250, 16, 9, 24, 1, 20, 5);
    sub_674060(*(_DWORD *)(this + 444));
  }
  else
  {
    v8 = sub_630F40((int)"SID_SHELL_RESTOREGAME");
    sub_5FA5B0((void *)this, 0, 2, v8, 73, 546, 25, 3, 3, 1, 18, -1);
    v9 = sub_630F40((int)"SID_GENERIC_DELETE");
    sub_5F9DE0((void *)this, 0, 2, 3200222, 464, 352, 1, v9, 72, 75, 74, -1, 127);
    v24 = operator new(0xCCu);
    if ( v24 )
    {
      sub_6280D0((int)v24);
      *v24 = &SavedGamesListBox::`vftable';
      v17 = v24;
    }
    else
    {
      v17 = 0;
    }
    sub_5FAC90(
      (void *)this,
      v17,
      0,
      3200236,
      8,
      38,
      1,
      0,
      3200204,
      286,
      108,
      3200203,
      286,
      22,
      3200207,
      285,
      38,
      88,
      285,
      39,
      16,
      67,
      7,
      24,
      275,
      16,
      6,
      31,
      69,
      66,
      0,
      0,
      0,
      3200238);
  }
  sub_673C20(this);
  if ( !*(_BYTE *)(this + 452) )
  {
    v16 = sub_5FB720(this, 0);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 184))(v16) )
    {
      v15 = sub_5FB720(this, 0);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v15 + 192))(v15, 0, 1);
    }
  }
  v23 = operator new(0x70u);
  if ( v23 )
  {
    sub_680B70();
    *v23 = &SaveGameHelpGroupBox::`vftable';
    v14 = v23;
  }
  else
  {
    v14 = 0;
  }
  *(_DWORD *)(this + 448) = v14;
  *(_DWORD *)(*(_DWORD *)(this + 448) + 4) = this;
  v10 = (char *)sub_630F40((int)"SID_GENERIC_HELP");
  sub_680CA0(9, 254, 1, 303, 82, 120, 124, 161, 255, 255, 255, v10, 72, 5, 10, 291, 70, 35, 0, -1);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 448) + 116))(*(_DWORD *)(this + 448));
}


//======================================================================
// sub_6738E0
// entry 006738e0  size 158  status ok
//======================================================================

_BYTE *__thiscall sub_6738E0(int this)
{
  int v1; // eax
  const CHAR *v2; // eax
  _BYTE *result; // eax
  const CHAR *v4; // [esp-8h] [ebp-10h]

  if ( *(_BYTE *)(this + 452)
    || (v1 = sub_5FB720(this, 0), (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 184))(v1, v1)) )
  {
    sub_5F85D0(this);
    result = (_BYTE *)this;
    if ( *(_BYTE *)(this + 452) )
      return (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 444) + 116))(*(_DWORD *)(this + 444));
  }
  else
  {
    v4 = (const CHAR *)sub_630F40((int)"SID_GENERIC_RESTORE");
    v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_NOSAVEDGAMES");
    sub_62FF10(v2, v4, 0);
    return sub_64F030();
  }
  return result;
}


//======================================================================
// sub_673980
// entry 00673980  size 69  status ok
//======================================================================

int __thiscall sub_673980(void *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      return sub_6739D0(this);
    case 1:
      return sub_673A50(this);
    case 2:
      return sub_673A70(this);
  }
  return result;
}


//======================================================================
// sub_6739D0
// entry 006739d0  size 115  status ok
//======================================================================

char __thiscall sub_6739D0(_BYTE *this)
{
  char **v1; // eax
  int v2; // eax
  char result; // al

  if ( *(this + 452) )
  {
    v1 = (char **)sub_5FB810(dword_16306D0, 0);
    sub_60C3D0(v1);
    v2 = sub_5FB810(dword_16306D0, 0);
    sub_674270(v2, this);
    result = sub_667D10();
    if ( !result )
      return result;
  }
  else
  {
    sub_667E60((char *)dword_162EE84 + 80);
  }
  return (unsigned __int8)sub_64F030();
}


//======================================================================
// sub_673A50
// entry 00673a50  size 22  status ok
//======================================================================

_BYTE *sub_673A50()
{
  return sub_64F030();
}


//======================================================================
// sub_673A70
// entry 00673a70  size 230  status ok
//======================================================================

int __thiscall sub_673A70(void *this)
{
  const CHAR *v1; // eax
  int result; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v3; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v4; // eax
  const CHAR *v5; // [esp-8h] [ebp-18h]
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // [esp-8h] [ebp-18h]
  int v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h]

  v5 = (const CHAR *)sub_630F40((int)"SID_GENERIC_DELETE");
  v1 = (const CHAR *)sub_630F40((int)"SID_GENERIC_AREYOUSURE");
  result = sub_62FF10(v1, v5, 4u);
  if ( result == 6 )
  {
    result = (unsigned __int8)sub_667E90((char *)dword_162EE84 + 80);
    if ( (_BYTE)result )
    {
      v3 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
      ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v3);
      v4 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
      sub_628AB0(v4, ExecutingProxy, 0);
      v9 = sub_5FB720((int)this, 0);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 184))(v9) )
      {
        v7 = sub_5FB720((int)this, 0);
        return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 192))(v7, 0, 1);
      }
      else
      {
        v8 = sub_5FB300((int)this, 2);
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 208))(v8);
        return (int)sub_64F030();
      }
    }
  }
  return result;
}


//======================================================================
// sub_673B60
// entry 00673b60  size 182  status ok
//======================================================================

char *__thiscall sub_673B60(void *this, int a2, char *Source)
{
  pairNode *v3; // eax
  char *v5; // [esp+4h] [ebp-20h]
  char *v7; // [esp+Ch] [ebp-18h]

  v7 = (char *)operator new(0x30u);
  if ( v7 )
  {
    sub_629AB0((int)v7);
    *(_DWORD *)v7 = &SavedGameListText::`vftable';
    v5 = v7;
  }
  else
  {
    v5 = 0;
  }
  v3 = (pairNode *)sub_5FB720((int)this, 0);
  sub_628980(v3, v5, a2, -1, 0);
  return strcpy(v5 + 20, Source);
}


//======================================================================
// sub_673C20
// entry 00673c20  size 143  status ok
//======================================================================

int __thiscall sub_673C20(void *this)
{
  _DWORD *v1; // eax
  char v4[24]; // [esp+4h] [ebp-3Ch] BYREF
  char Source[28]; // [esp+1Ch] [ebp-24h] BYREF
  int Value; // [esp+3Ch] [ebp-4h]

  for ( Value = 0; Value < 100; ++Value )
  {
    sub_667BE0((char *)dword_162EE84 + 80, Source, Value);
    if ( sub_667EC0(Source, v4) )
      sub_673B60(this, (int)v4, Source);
  }
  v1 = (_DWORD *)sub_5FB720((int)this, 0);
  return sub_628D80(v1);
}


//======================================================================
// sub_673CB0
// entry 00673cb0  size 85  status ok
//======================================================================

void *__thiscall sub_673CB0(void *this)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v1; // eax
  int v2; // eax

  v1 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  v2 = sub_5E4390(v1);
  if ( v2 != -20 && *(_BYTE *)(v2 + 20) )
    return (void *)(v2 + 20);
  sub_5E9F20("false", "..\\casinoShell\\savegamedialog.cpp", 344);
  return &unk_6E16C0;
}


//======================================================================
// sub_673D10
// entry 00673d10  size 63  status ok
//======================================================================

_DWORD *__thiscall sub_673D10(_DWORD *this)
{
  sub_5F49D0((int)this);
  *this = &BitmapFeature::`vftable';
  *(this + 18) = 0;
  memset(this + 19, 0, 0x21480u);
  return this;
}


//======================================================================
// sub_673D50
// entry 00673d50  size 142  status ok
//======================================================================

void __thiscall sub_673D50(CNoTrackObject *this)
{
  *(_DWORD *)this = &BitmapFeature::`vftable';
  if ( *((_DWORD *)this + 18) )
    (***((void (__thiscall ****)(_DWORD, int))this + 18))(*((_DWORD *)this + 18), 1);
  sub_5F4AD0(this);
}


//======================================================================
// sub_673DE0
// entry 00673de0  size 341  status ok
//======================================================================

int __thiscall sub_673DE0(int this, int *a2)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-38h]
  int v5; // [esp+Ch] [ebp-34h]
  int v6; // [esp+10h] [ebp-30h]
  int v7; // [esp+14h] [ebp-2Ch]
  int v8; // [esp+18h] [ebp-28h]
  int v9; // [esp+20h] [ebp-20h] BYREF
  int v10; // [esp+24h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]
  int v13; // [esp+30h] [ebp-10h]
  int v14; // [esp+34h] [ebp-Ch]
  int v15; // [esp+38h] [ebp-8h]
  int v16; // [esp+3Ch] [ebp-4h]

  v6 = *(_DWORD *)(this + 28);
  v7 = *(_DWORD *)(this + 24);
  v8 = *(_DWORD *)(this + 20);
  v9 = *(_DWORD *)(this + 16);
  v10 = v8;
  v11 = v7;
  v12 = v6;
  sub_5EC3A0(&v9, &v9, a2);
  result = this;
  if ( *(_DWORD *)(this + 72) && *(_DWORD *)(this + 4) )
  {
    result = sub_5F54A0((unsigned __int8 *)this);
    if ( (_BYTE)result )
    {
      v13 = v9 - *(_DWORD *)(this + 16);
      v14 = v10 - *(_DWORD *)(this + 20);
      v15 = v13 + v11 - v9;
      v16 = v14 + v12 - v10;
      v4 = sub_5F84F0(*(_DWORD **)(this + 4));
      v5 = unknown_libname_619(*(_DWORD *)(this + 4));
      return sub_62E3C0(
               *(_DWORD *)(this + 72),
               this,
               *(pairNode **)(*(_DWORD *)(*(_DWORD *)(this + 4) + 424) + 80),
               v5 + v9,
               v4 + v10,
               v5 + v11,
               v4 + v12,
               v13,
               v14,
               v15,
               v16);
    }
  }
  return result;
}


//======================================================================
// sub_673F40
// entry 00673f40  size 138  status ok
//======================================================================

int __thiscall sub_673F40(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-20h]
  int v4; // [esp+8h] [ebp-1Ch]
  int v5; // [esp+Ch] [ebp-18h]
  _DWORD v6[4]; // [esp+14h] [ebp-10h] BYREF

  result = this;
  if ( !*(_BYTE *)(this + 36) )
  {
    CWnd::EnableActiveAccessibility((CWnd *)this);
    v3 = *(_DWORD *)(this + 24);
    v4 = *(_DWORD *)(this + 28);
    v5 = *(_DWORD *)(this + 16);
    v6[0] = *(_DWORD *)(this + 20);
    v6[1] = v5;
    v6[2] = v4;
    v6[3] = v3;
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_7960D8 + 16) + 20))(
      *(_DWORD *)(dword_7960D8 + 16),
      v6);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_673FD0
// entry 00673fd0  size 138  status ok
//======================================================================

int __thiscall sub_673FD0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-20h]
  int v4; // [esp+8h] [ebp-1Ch]
  int v5; // [esp+Ch] [ebp-18h]
  _DWORD v6[4]; // [esp+14h] [ebp-10h] BYREF

  result = this;
  if ( *(_BYTE *)(this + 36) )
  {
    sub_5F5440((_BYTE *)this);
    v3 = *(_DWORD *)(this + 24);
    v4 = *(_DWORD *)(this + 28);
    v5 = *(_DWORD *)(this + 16);
    v6[0] = *(_DWORD *)(this + 20);
    v6[1] = v5;
    v6[2] = v4;
    v6[3] = v3;
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(dword_7960D8 + 16) + 20))(
      *(_DWORD *)(dword_7960D8 + 16),
      v6);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_674060
// entry 00674060  size 243  status ok
//======================================================================

HFONT __thiscall sub_674060(int *this)
{
  HFONT result; // eax
  int v2; // [esp+14h] [ebp-2Ch]
  double v4; // [esp+20h] [ebp-20h]
  HFONT v5; // [esp+28h] [ebp-18h]
  unsigned int j; // [esp+30h] [ebp-10h]
  int i; // [esp+34h] [ebp-Ch]

  v4 = 1.0 / ((double)sub_5F8550(*((_DWORD **)dword_162EE84 + 5)) / 213.0);
  v2 = sub_5F8570(*((_DWORD **)dword_162EE84 + 5));
  sub_6247C0(*(pairNode **)(*(_DWORD *)(dword_7960D8 + 16) + 80), *(this + 18), v4, 1.0 / ((double)v2 / 160.0));
  result = CMFCCaptionBar::OnGetFont((CMFCCaptionBar *)*(this + 18));
  v5 = result;
  for ( i = 0; i < 160; ++i )
  {
    for ( j = 0; j < 0x354; ++j )
    {
      *((_BYTE *)this + 852 * i + j + 76) = *((_BYTE *)v5 + j + i * sub_62E6F0((_DWORD *)*(this + 18)));
      result = (HFONT)(j + 1);
    }
  }
  return result;
}


//======================================================================
// sub_674160
// entry 00674160  size 220  status ok
//======================================================================

void __thiscall sub_674160(CMFCCaptionBar **this)
{
  char *Buffer; // [esp+10h] [ebp-14h]
  HFONT Font; // [esp+14h] [ebp-10h]
  unsigned int j; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  Buffer = (char *)operator new(0x21496u);
  (*((void (__thiscall **)(CMFCCaptionBar **))*this + 28))(this);
  (*((void (__thiscall **)(CMFCCaptionBar **))*this + 29))(this);
  sub_668D30(Buffer);
  Font = CMFCCaptionBar::OnGetFont(*(this + 18));
  for ( i = 0; i < 160; ++i )
  {
    for ( j = 0; j < 0x354; ++j )
      *((_BYTE *)Font + j + i * sub_62E6F0(*(this + 18))) = Buffer[852 * i + 22 + j];
  }
  operator delete(Buffer);
}


//======================================================================
// sub_674240
// entry 00674240  size 44  status ok
//======================================================================

unsigned int __thiscall sub_674240(_BYTE *this, int a2)
{
  unsigned int result; // eax

  result = sub_60B7D0(this, a2);
  if ( *(_BYTE *)(a2 + 4) )
    return sub_674270(this, this);
  return result;
}


//======================================================================
// sub_674270
// entry 00674270  size 223  status ok
//======================================================================

int __thiscall sub_674270(_DWORD *this)
{
  int v1; // eax
  void *v2; // eax
  char *v3; // eax
  int v5; // [esp-8h] [ebp-14h]
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  v7 = sub_5FB720(dword_16306D0, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 196))(v7);
  v6 = sub_5FB720(dword_16306D0, 0);
  v1 = (*(int (__thiscall **)(_DWORD *, int))(*this + 184))(this, 1);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 240))(v6, v1) )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
    v2 = (void *)sub_5FB720(dword_16306D0, 0);
    sub_628F40(v2, v5, 1);
  }
  else
  {
    sub_5FB5A0((void *)dword_16306D0, 0, (int)&Source);
    sub_5FB5A0((void *)dword_16306D0, 1, (int)&Source);
    sub_5FB5A0((void *)dword_16306D0, 4, (int)&Source);
  }
  v3 = (char *)(*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
  return sub_5EE710(this, v3);
}


//======================================================================
// sub_674390
// entry 00674390  size 368  status ok
//======================================================================

void __thiscall sub_674390(Concurrency::details::UMSFreeVirtualProcessorRoot *this)
{
  const char *v1; // eax
  struct tm *v2; // eax
  int v3; // eax
  exception *v4; // eax
  exception *v5; // eax
  const char *v6; // [esp+0h] [ebp-15Ch]
  int v7; // [esp+4h] [ebp-158h]
  const char *v8; // [esp+8h] [ebp-154h]
  struct _stat64i32 Stat; // [esp+24h] [ebp-138h] BYREF
  char Buffer[260]; // [esp+54h] [ebp-108h] BYREF

  v1 = (const char *)sub_673CB0((void *)dword_16306D0);
  stat64i32(v1, &Stat);
  v2 = localtime64(&Stat.st_mtime);
  strftime(Buffer, 0x100u, "%a %b %d, %Y, %I:%M%p", v2);
  sub_5FB5A0((void *)dword_16306D0, 0, (int)Buffer);
  v3 = sub_630F40((int)"SID_SHELL_SAVEDON_COLON");
  sub_5FB5A0((void *)dword_16306D0, 1, v3);
  if ( sub_5E4390(this) )
  {
    v4 = (exception *)sub_5E4390(this);
    v8 = exception::what(v4);
    sub_5FB5A0((void *)dword_16306D0, 4, (int)v8);
  }
  else
  {
    sub_5FB5A0((void *)dword_16306D0, 4, 0);
  }
  if ( *(_BYTE *)(dword_16306D0 + 452) )
  {
    v7 = sub_5FB810(dword_16306D0, 0);
    if ( sub_5E4390(this) )
    {
      v5 = (exception *)sub_5E4390(this);
      v6 = exception::what(v5);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 180))(v7, v6);
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 180))(v7, 0);
    }
  }
  else
  {
    sub_674160(*(CMFCCaptionBar ***)(dword_16306D0 + 444));
  }
}


//======================================================================
// sub_674500
// entry 00674500  size 821  status ok
//======================================================================

void __thiscall sub_674500(_DWORD **this, int a2)
{
  int v3; // [esp+4h] [ebp-64h]
  int v4; // [esp+8h] [ebp-60h]
  int v5; // [esp+Ch] [ebp-5Ch]
  int v6; // [esp+10h] [ebp-58h]
  int v7; // [esp+14h] [ebp-54h]
  int v8; // [esp+18h] [ebp-50h]
  int v9; // [esp+1Ch] [ebp-4Ch]
  int v10; // [esp+20h] [ebp-48h]
  int v11; // [esp+24h] [ebp-44h]
  int v12; // [esp+28h] [ebp-40h]
  int v13; // [esp+2Ch] [ebp-3Ch]
  _DWORD v14[11]; // [esp+30h] [ebp-38h]
  int v15; // [esp+5Ch] [ebp-Ch]
  int i; // [esp+60h] [ebp-8h]
  int v17; // [esp+64h] [ebp-4h]

  v17 = -1;
  if ( dword_16306D0 )
  {
    v13 = sub_5FB300(dword_16306D0, 0);
    v14[0] = 0;
    v14[1] = sub_5FB300(dword_16306D0, 1);
    v14[2] = 1;
    v14[3] = *(_DWORD *)(sub_5FB720(dword_16306D0, 0) + 72);
    v14[4] = 2;
    v14[5] = *(_DWORD *)(dword_16306D0 + 444);
    v14[6] = 3;
    v14[7] = sub_5FB810(dword_16306D0, 0);
    v14[8] = 4;
    v14[9] = sub_5FB300(dword_16306D0, 2);
    v14[10] = 5;
    v15 = 6;
    for ( i = 0; i < v15; ++i )
    {
      if ( v14[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v14[2 * i - 1] + 132))(v14[2 * i - 1], a2) )
      {
        v17 = v14[2 * i];
        break;
      }
    }
    if ( v17 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(_DWORD, const char *))(**(this + 27) + 180))(*(this + 27), &Source);
    }
    else if ( *(_BYTE *)(dword_16306D0 + 452) )
    {
      if ( !v17 )
      {
        v12 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER1");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v12);
      }
      if ( v17 == 1 )
      {
        v11 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER2");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v11);
      }
      if ( v17 == 2 )
      {
        v10 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER3");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v10);
      }
      if ( v17 == 3 )
      {
        v9 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER4");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v9);
      }
      if ( v17 == 4 )
      {
        v8 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER5");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v8);
      }
    }
    else
    {
      if ( !v17 )
      {
        v7 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER6");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v7);
      }
      if ( v17 == 1 )
      {
        v6 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER7");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v6);
      }
      if ( v17 == 2 )
      {
        v5 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER8");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v5);
      }
      if ( v17 == 3 )
      {
        v4 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER9");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v4);
      }
      if ( v17 == 5 )
      {
        v3 = sub_630F40((int)"SID_SHELL_SAVEGAME_ROLLOVER10");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v3);
      }
    }
  }
}


//======================================================================
// sub_674870
// entry 00674870  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_674870(_DWORD *this, char a2)
{
  *this = &FileNameEditBox::`vftable';
  sub_60B5B0((int)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_6748B0
// entry 006748b0  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_6748B0(_DWORD *this, char a2)
{
  *this = &SavedGamesListBox::`vftable';
  sub_628220((int)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_6748F0
// entry 006748f0  size 53  status ok
//======================================================================

void **__thiscall sub_6748F0(void **this, char a2)
{
  *this = &SavedGameListText::`vftable';
  sub_629B00(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_674960
// entry 00674960  size 546  status ok
//======================================================================

int sub_674960()
{
  int result; // eax
  intptr_t v1; // [esp+0h] [ebp-754h]
  char Destination[520]; // [esp+4h] [ebp-750h] BYREF
  char v3[520]; // [esp+20Ch] [ebp-548h] BYREF
  struct _finddata64i32_t FindData; // [esp+414h] [ebp-340h] BYREF
  intptr_t FindHandle; // [esp+53Ch] [ebp-218h]
  char *Source; // [esp+540h] [ebp-214h]
  CHAR NewFileName[524]; // [esp+544h] [ebp-210h] BYREF

  Source = "FaceCreator";
  mkdir(&Path);
  strcpy(Destination, &Path);
  strcat(Destination, "\\");
  strcat(Destination, "*");
  result = findfirst64i32(Destination, &FindData);
  FindHandle = result;
  if ( result >= 0 )
  {
    findclose(FindHandle);
    strcpy(Destination, Source);
    sub_5EA770(Destination);
    strcat(Destination, "\\");
    strcat(Destination, "*");
    result = findfirst64i32(Destination, &FindData);
    v1 = result;
    if ( result >= 0 )
    {
      strcpy(Destination, Source);
      sub_5EA770(Destination);
      strcat(Destination, "\\");
      do
      {
        strcpy(v3, Destination);
        strcat(v3, FindData.name);
        strcpy(NewFileName, &Path);
        strcat(NewFileName, "\\");
        strcat(NewFileName, FindData.name);
        sub_5EA040(v3, NewFileName, 1u);
      }
      while ( !findnext64i32(v1, &FindData) );
      return findclose(v1);
    }
  }
  return result;
}


//======================================================================
// sub_674B90
// entry 00674b90  size 98  status ok
//======================================================================

int sub_674B90()
{
  const char *v0; // eax
  _BYTE v2[259]; // [esp+109h] [ebp-10Fh] BYREF

  memset(v2, 0, sizeof(v2));
  v0 = (const char *)sub_630F40((int)"SID_SHELL_FACECREATPATH_WIN");
  strcpy(&Path, v0);
  return sub_674960();
}


//======================================================================
// sub_674C00
// entry 00674c00  size 102  status ok
//======================================================================

int __cdecl sub_674C00(int a1)
{
  int result; // eax
  char Buffer[256]; // [esp+0h] [ebp-108h] BYREF
  int i; // [esp+104h] [ebp-4h]

  for ( i = 10; i >= 0; --i )
  {
    sprintf(Buffer, "%d.prf", i + a1);
    sub_604A20(Buffer);
    result = i - 1;
  }
  return result;
}


//======================================================================
// sub_674C70
// entry 00674c70  size 207  status ok
//======================================================================

int sub_674C70()
{
  FILE *Stream; // [esp+0h] [ebp-40Ch]
  char Buffer[1028]; // [esp+4h] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  sub_674B90();
  sprintf(Buffer, "%s%sfacecreator.ini", &Path, "\\");
  Stream = sub_5EA9C0(Buffer, "r");
  if ( Stream )
    fclose(Stream);
  sub_604810(&Path);
  sub_674C00(1020000);
  sub_674C00(1000000);
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 20))(dword_7960D8);
}


//======================================================================
// sub_674D40
// entry 00674d40  size 697  status ok
//======================================================================

int __thiscall sub_674D40(int this)
{
  _BYTE v3[1023]; // [esp+9h] [ebp-413h] BYREF
  int v4; // [esp+418h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  v4 = 0;
  *(_DWORD *)this = &FMResourceManager::`vftable';
  sub_676410(this + 12);
  sub_676410(this + 28);
  sub_676410(this + 44);
  sub_676410(this + 60);
  sub_676410(this + 76);
  sub_676410(this + 92);
  sub_676410(this + 108);
  sub_676410(this + 124);
  sub_676410(this + 140);
  sub_676410(this + 156);
  sub_676410(this + 172);
  LOBYTE(v4) = 11;
  memset(v3, 0, sizeof(v3));
  sprintf((char *const)(this + 188), "%s%s%s", &Path, "\\", "facecreator.ini");
  *(_DWORD *)(this + 4) = 0;
  *(_BYTE *)(this + 8) = 0;
  sub_675650(this);
  sub_675560((Concurrency::critical_section *)(this + 28), "HEAD");
  sub_675560((Concurrency::critical_section *)(this + 44), "LEYE");
  sub_675560((Concurrency::critical_section *)(this + 60), "REYE");
  sub_675560((Concurrency::critical_section *)(this + 76), "HAIR");
  sub_675560((Concurrency::critical_section *)(this + 92), "NOSE");
  sub_675560((Concurrency::critical_section *)(this + 108), "MOUTH");
  sub_675560((Concurrency::critical_section *)(this + 124), "LBROW");
  sub_675560((Concurrency::critical_section *)(this + 140), "RBROW");
  sub_675560((Concurrency::critical_section *)(this + 156), "FACIALHAIR");
  sub_675560((Concurrency::critical_section *)(this + 172), "GLASSES");
  return this;
}


//======================================================================
// sub_675000
// entry 00675000  size 254  status ok
//======================================================================

void __thiscall sub_675000(CNoTrackObject *this)
{
  *(_DWORD *)this = &FMResourceManager::`vftable';
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  sub_676430();
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_675100
// entry 00675100  size 885  status ok
//======================================================================

char __thiscall sub_675100(int this, _DWORD *a2, char *String1)
{
  const void *v4; // eax
  size_t PaneMenuEntryID; // [esp-Ch] [ebp-70h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+8h] [ebp-5Ch]
  int v7; // [esp+10h] [ebp-54h]
  int v8; // [esp+14h] [ebp-50h]
  int v10; // [esp+44h] [ebp-20h]
  int v11; // [esp+44h] [ebp-20h]
  FILE *Stream; // [esp+48h] [ebp-1Ch]
  int i; // [esp+4Ch] [ebp-18h]
  int v14; // [esp+50h] [ebp-14h]

  if ( a2 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      if ( operator new(0x214u) )
        v8 = sub_688B60(*(_DWORD *)(this + 4), 0, 1);
      else
        v8 = 0;
      *a2 = v8;
      _RTDynamicCast(*a2, 0, &VIniFile `RTTI Type Descriptor', &ResourceIniFile `RTTI Type Descriptor', 0);
      sub_688D40(String1);
    }
    if ( !*(_DWORD *)(this + 4) )
    {
      for ( i = 9; i >= 0; --i )
      {
        if ( operator new(0x214u) )
          v7 = sub_688B60(i + 1020000, 0, 1);
        else
          v7 = 0;
        *a2 = v7;
        v10 = _RTDynamicCast(*a2, 0, &VIniFile `RTTI Type Descriptor', &ResourceIniFile `RTTI Type Descriptor', 0);
        if ( v10 && (unsigned __int8)sub_688D90(v10) )
        {
          *(_DWORD *)(this + 4) = i + 1020000;
          sub_688D40(String1);
          break;
        }
        if ( *a2 )
          (**(void (__thiscall ***)(_DWORD, int))*a2)(*a2, 1);
      }
    }
    if ( *(_DWORD *)(this + 4) )
    {
      if ( !*(_BYTE *)(this + 8) )
      {
        *(_BYTE *)(this + 8) = 1;
        if ( operator new(0x214u) )
          v6 = (void (__thiscall ***)(_DWORD, int))sub_688B60(1000001, 0, 1);
        else
          v6 = 0;
        v11 = _RTDynamicCast(v6, 0, &VIniFile `RTTI Type Descriptor', &ResourceIniFile `RTTI Type Descriptor', 0);
        if ( v11 )
        {
          if ( (unsigned __int8)sub_688D90(v11) )
          {
            v14 = sub_5E9FF0((char *)(this + 188));
            if ( v14 != CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(v11 + 520)) )
            {
              Stream = sub_5EA9C0((char *)(this + 188), "wb");
              if ( Stream )
              {
                PaneMenuEntryID = CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(v11 + 520));
                v4 = (const void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 520) + 4))(*(_DWORD *)(v11 + 520));
                fwrite(v4, PaneMenuEntryID, 1u, Stream);
                fclose(Stream);
              }
            }
          }
        }
        if ( v11 && v6 )
          (**v6)(v6, 1);
      }
      return 1;
    }
    else
    {
      sub_5E9F20("false", "..\\casinoShell\\facemakerresource.cpp", 265);
      return 0;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\facemakerresource.cpp", 228);
    return 0;
  }
}


//======================================================================
// sub_675480
// entry 00675480  size 218  status ok
//======================================================================

bool __thiscall sub_675480(int this)
{
  return (int)CRecentFileList::GetSize((CRecentFileList *)(this + 12)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 28)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 44)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 60)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 76)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 92)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 108)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 124)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 140)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 156)) > 0
      || (int)CRecentFileList::GetSize((CRecentFileList *)(this + 172)) > 0;
}


//======================================================================
// sub_675560
// entry 00675560  size 227  status ok
//======================================================================

char __thiscall sub_675560(void *this, Concurrency::critical_section *a2, char *String1)
{
  char result; // al
  int v4; // [esp+10h] [ebp-30h] BYREF
  char Buffer[32]; // [esp+14h] [ebp-2Ch] BYREF
  int v6; // [esp+38h] [ebp-8h]
  unsigned int i; // [esp+3Ch] [ebp-4h]

  v6 = 1;
  i = 0;
  result = sub_675100((int)this, &v4, String1);
  if ( result )
  {
    sprintf(Buffer, "%d", v6);
    for ( i = sub_607960((void *)v4, (int)Buffer, 0); i; i = sub_607960((void *)v4, (int)Buffer, 0) )
    {
      Concurrency::critical_section::try_lock_for(a2, i);
      sprintf(Buffer, "%d", ++v6);
    }
    result = v4;
    if ( v4 )
      return (**(int (__thiscall ***)(int, int))v4)(v4, 1);
  }
  return result;
}


//======================================================================
// sub_675650
// entry 00675650  size 356  status ok
//======================================================================

char __thiscall sub_675650(int this)
{
  char result; // al
  int v2; // eax
  char Str[256]; // [esp+10h] [ebp-118h] BYREF
  unsigned int i; // [esp+110h] [ebp-18h]
  int v6; // [esp+114h] [ebp-14h] BYREF
  char Buffer[8]; // [esp+118h] [ebp-10h] BYREF
  int v8; // [esp+124h] [ebp-4h]

  v8 = 1;
  i = 0;
  result = sub_675100(this, &v6, "TORSO");
  if ( result )
  {
    v8 = 1;
    sprintf(Buffer, "%d", 1);
    for ( i = sub_607960((void *)v6, (int)Buffer, 0); i; i = sub_607960((void *)v6, (int)Buffer, 0) )
    {
      Concurrency::critical_section::try_lock_for((Concurrency::critical_section *)(this + 12), i);
      (*(void (__thiscall **)(int, char *, const char *, char *, int))(*(_DWORD *)v6 + 16))(
        v6,
        Buffer,
        &Source,
        Str,
        256);
      v2 = sub_6765A0(v8 - 1);
      sub_6757C0((Concurrency::critical_section *)(v2 + 8), Str);
      sprintf(Buffer, "%d", ++v8);
    }
    result = v6;
    if ( v6 )
      return (**(int (__thiscall ***)(int, int))v6)(v6, 1);
  }
  return result;
}


//======================================================================
// sub_6757C0
// entry 006757c0  size 103  status ok
//======================================================================

char __thiscall sub_6757C0(void *this, Concurrency::critical_section *a2, char *Str)
{
  char result; // al
  int v4; // [esp+10h] [ebp-4h] BYREF

  result = sub_675100((int)this, &v4, "CLOTHING");
  if ( result )
  {
    sub_675830(v4, a2, Str);
    result = v4;
    if ( v4 )
      return (**(int (__thiscall ***)(int, int))v4)(v4, 1);
  }
  return result;
}


//======================================================================
// sub_675830
// entry 00675830  size 663  status ok
//======================================================================

char __stdcall sub_675830(void *a1, Concurrency::critical_section *a2, char *Str)
{
  unsigned int v3; // eax
  int j; // [esp+4h] [ebp-60h]
  int k; // [esp+4h] [ebp-60h]
  char v7; // [esp+Bh] [ebp-59h]
  char Buffer[52]; // [esp+Ch] [ebp-58h] BYREF
  unsigned int v9; // [esp+40h] [ebp-24h]
  int v10; // [esp+44h] [ebp-20h] BYREF
  int v11; // [esp+48h] [ebp-1Ch] BYREF
  signed int v12; // [esp+4Ch] [ebp-18h]
  char v13[8]; // [esp+50h] [ebp-14h] BYREF
  signed int i; // [esp+5Ch] [ebp-8h]
  int v15; // [esp+60h] [ebp-4h]

  v15 = 0;
  v12 = strlen(Str);
  v7 = 0;
  v9 = 0;
  for ( i = 0; i < v12 && isdigit(Str[i]); ++i )
    ;
  memset(Buffer, 0, 0x32u);
  ++i;
  while ( i < v12 )
  {
    if ( isspace(Str[i]) )
    {
      if ( v7 )
      {
        sscanf(Buffer, "%d-%d", &v10, &v11);
        for ( j = v10; j <= v11; ++j )
        {
          sprintf(v13, "%d", j);
          v9 = sub_607960(a1, (int)v13, 0);
          if ( v9 )
            Concurrency::critical_section::try_lock_for(a2, v9);
        }
      }
      else
      {
        sscanf(Buffer, "%d", &v10);
        sprintf(v13, "%d", v10);
        v9 = sub_607960(a1, (int)v13, 0);
        if ( v9 )
          Concurrency::critical_section::try_lock_for(a2, v9);
      }
      memset(Buffer, 0, 0x32u);
      v7 = 0;
    }
    else
    {
      if ( Str[i] == 45 )
        v7 = 1;
      Buffer[v15++] = Str[i];
    }
    ++i;
  }
  if ( v7 )
  {
    sscanf(Buffer, "%d-%d", &v10, &v11);
    LOBYTE(v3) = v10;
    for ( k = v10; k <= v11; ++k )
    {
      sprintf(v13, "%d", k);
      v3 = sub_607960(a1, (int)v13, 0);
      v9 = v3;
      if ( v3 )
        LOBYTE(v3) = Concurrency::critical_section::try_lock_for(a2, v9);
    }
  }
  else
  {
    sscanf(Buffer, "%d", &v10);
    sprintf(v13, "%d", v10);
    v3 = sub_607960(a1, (int)v13, 0);
    v9 = v3;
    if ( v3 )
      LOBYTE(v3) = Concurrency::critical_section::try_lock_for(a2, v9);
  }
  return v3;
}


//======================================================================
// sub_675AD0
// entry 00675ad0  size 101  status ok
//======================================================================

int __thiscall sub_675AD0(int this, int a2)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 12)); ++i )
  {
    if ( sub_676570(i) % 100000 == a2 % 100000 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_675B40
// entry 00675b40  size 301  status ok
//======================================================================

int __thiscall sub_675B40(void *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp+8h] [ebp-4h]

  v5 = sub_675AD0((int)this, a4);
  switch ( a2 )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      result = sub_676570(a3);
      break;
    case 1:
      sub_6765A0(v5);
      result = sub_676570(a3);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_675CA0
// entry 00675ca0  size 364  status ok
//======================================================================

int __thiscall sub_675CA0(int this, int a2, int a3)
{
  signed int Size; // eax
  int result; // eax
  int v5; // eax
  signed int v6; // eax
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  int v18; // [esp+8h] [ebp-4h]

  v18 = sub_675AD0(this, a3);
  switch ( a2 )
  {
    case 0:
      Size = CRecentFileList::GetSize((CRecentFileList *)(this + 12));
      result = sub_62FBF0(Size);
      break;
    case 1:
      v5 = sub_6765A0(v18);
      v6 = CRecentFileList::GetSize((CRecentFileList *)(v5 + 8));
      result = sub_62FBF0(v6);
      break;
    case 2:
      v7 = CRecentFileList::GetSize((CRecentFileList *)(this + 28));
      result = sub_62FBF0(v7);
      break;
    case 3:
      v8 = CRecentFileList::GetSize((CRecentFileList *)(this + 44));
      result = sub_62FBF0(v8);
      break;
    case 4:
      v9 = CRecentFileList::GetSize((CRecentFileList *)(this + 60));
      result = sub_62FBF0(v9);
      break;
    case 5:
      v10 = CRecentFileList::GetSize((CRecentFileList *)(this + 76));
      result = sub_62FBF0(v10);
      break;
    case 6:
      v11 = CRecentFileList::GetSize((CRecentFileList *)(this + 92));
      result = sub_62FBF0(v11);
      break;
    case 7:
      v12 = CRecentFileList::GetSize((CRecentFileList *)(this + 108));
      result = sub_62FBF0(v12);
      break;
    case 8:
      v13 = CRecentFileList::GetSize((CRecentFileList *)(this + 124));
      result = sub_62FBF0(v13);
      break;
    case 9:
      v14 = CRecentFileList::GetSize((CRecentFileList *)(this + 140));
      result = sub_62FBF0(v14);
      break;
    case 10:
      v15 = CRecentFileList::GetSize((CRecentFileList *)(this + 156));
      result = sub_62FBF0(v15);
      break;
    case 11:
      v16 = CRecentFileList::GetSize((CRecentFileList *)(this + 172));
      result = sub_62FBF0(v16);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_675E40
// entry 00675e40  size 246  status ok
//======================================================================

int __thiscall sub_675E40(int this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v6; // [esp+8h] [ebp-4h]

  v6 = sub_675AD0(this, a3);
  switch ( a2 )
  {
    case 0:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 12));
      break;
    case 1:
      v4 = sub_6765A0(v6);
      result = CRecentFileList::GetSize((CRecentFileList *)(v4 + 8));
      break;
    case 2:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 28));
      break;
    case 3:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 44));
      break;
    case 4:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 60));
      break;
    case 5:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 76));
      break;
    case 6:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 92));
      break;
    case 7:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 108));
      break;
    case 8:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 124));
      break;
    case 9:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 140));
      break;
    case 10:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 156));
      break;
    case 11:
      result = CRecentFileList::GetSize((CRecentFileList *)(this + 172));
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_675F70
// entry 00675f70  size 919  status ok
//======================================================================

int __thiscall sub_675F70(int this, int a2, int a3, int a4)
{
  int result; // eax
  int j; // eax
  int v7; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int v9; // [esp+Ch] [ebp-4h]
  int k; // [esp+Ch] [ebp-4h]
  int m; // [esp+Ch] [ebp-4h]
  int n; // [esp+Ch] [ebp-4h]
  int ii; // [esp+Ch] [ebp-4h]
  int jj; // [esp+Ch] [ebp-4h]
  int kk; // [esp+Ch] [ebp-4h]
  int mm; // [esp+Ch] [ebp-4h]
  int nn; // [esp+Ch] [ebp-4h]
  int i1; // [esp+Ch] [ebp-4h]
  int i2; // [esp+Ch] [ebp-4h]

  switch ( a2 )
  {
    case 0:
      for ( i = 0; ; ++i )
      {
        if ( i >= CRecentFileList::GetSize((CRecentFileList *)(this + 12)) )
          goto LABEL_73;
        if ( sub_676570(i) == a3 )
          break;
      }
      result = i;
      break;
    case 1:
      v7 = sub_675AD0(this, a4);
      v9 = 0;
      for ( j = sub_6765A0(v7); ; j = sub_6765A0(v7) )
      {
        if ( v9 >= CRecentFileList::GetSize((CRecentFileList *)(j + 8)) )
          goto LABEL_73;
        sub_6765A0(v7);
        if ( sub_676570(v9) == a3 )
          break;
        ++v9;
      }
      result = v9;
      break;
    case 2:
      for ( k = 0; ; ++k )
      {
        if ( k >= CRecentFileList::GetSize((CRecentFileList *)(this + 28)) )
          goto LABEL_73;
        if ( sub_676570(k) == a3 )
          break;
      }
      result = k;
      break;
    case 3:
      for ( m = 0; ; ++m )
      {
        if ( m >= CRecentFileList::GetSize((CRecentFileList *)(this + 44)) )
          goto LABEL_73;
        if ( sub_676570(m) == a3 )
          break;
      }
      result = m;
      break;
    case 4:
      for ( n = 0; ; ++n )
      {
        if ( n >= CRecentFileList::GetSize((CRecentFileList *)(this + 60)) )
          goto LABEL_73;
        if ( sub_676570(n) == a3 )
          break;
      }
      result = n;
      break;
    case 5:
      for ( ii = 0; ; ++ii )
      {
        if ( ii >= CRecentFileList::GetSize((CRecentFileList *)(this + 76)) )
          goto LABEL_73;
        if ( sub_676570(ii) == a3 )
          break;
      }
      result = ii;
      break;
    case 6:
      for ( jj = 0; ; ++jj )
      {
        if ( jj >= CRecentFileList::GetSize((CRecentFileList *)(this + 92)) )
          goto LABEL_73;
        if ( sub_676570(jj) == a3 )
          break;
      }
      result = jj;
      break;
    case 7:
      for ( kk = 0; ; ++kk )
      {
        if ( kk >= CRecentFileList::GetSize((CRecentFileList *)(this + 108)) )
          goto LABEL_73;
        if ( sub_676570(kk) == a3 )
          break;
      }
      result = kk;
      break;
    case 8:
      for ( mm = 0; ; ++mm )
      {
        if ( mm >= CRecentFileList::GetSize((CRecentFileList *)(this + 124)) )
          goto LABEL_73;
        if ( sub_676570(mm) == a3 )
          break;
      }
      result = mm;
      break;
    case 9:
      for ( nn = 0; ; ++nn )
      {
        if ( nn >= CRecentFileList::GetSize((CRecentFileList *)(this + 140)) )
          goto LABEL_73;
        if ( sub_676570(nn) == a3 )
          break;
      }
      result = nn;
      break;
    case 10:
      for ( i1 = 0; ; ++i1 )
      {
        if ( i1 >= CRecentFileList::GetSize((CRecentFileList *)(this + 156)) )
          goto LABEL_73;
        if ( sub_676570(i1) == a3 )
          break;
      }
      result = i1;
      break;
    case 11:
      for ( i2 = 0; ; ++i2 )
      {
        if ( i2 >= CRecentFileList::GetSize((CRecentFileList *)(this + 172)) )
          goto LABEL_73;
        if ( sub_676570(i2) == a3 )
          break;
      }
      result = i2;
      break;
    default:
LABEL_73:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_676340
// entry 00676340  size 109  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_676340(ATL::CCRTHeap *this, int a2)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &ResNumber::`vftable';
  sub_676410((char *)this + 8);
  *((_DWORD *)this + 1) = a2;
  return this;
}


//======================================================================
// sub_676410
// entry 00676410  size 31  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_676410(ATL::CCRTHeap *this)
{
  sub_60C5F0(this);
  *(_DWORD *)this = &ResNumberList::`vftable';
  return this;
}


//======================================================================
// sub_676430
// entry 00676430  size 176  status ok
//======================================================================

void __thiscall sub_676430(CRecentFileList *this)
{
  int v1; // eax
  void (__thiscall ***v3)(_DWORD, int); // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &ResNumberList::`vftable';
  while ( CRecentFileList::GetSize(this) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))sub_6765A0(0);
    v1 = sub_6765A0(0);
    sub_60C890(this, v1);
    if ( v3 )
      (**v3)(v3, 1);
  }
  sub_60C6A0((int)this);
}


//======================================================================
// sub_6765A0
// entry 006765a0  size 25  status ok
//======================================================================

int __thiscall sub_6765A0(_DWORD *this, int a2)
{
  return sub_60CA40(this, a2);
}


//======================================================================
// sub_676650
// entry 00676650  size 161  status ok
//======================================================================

_DWORD *__thiscall sub_676650(_DWORD *this, int a2)
{
  sub_5F71F0(this, 1, 0);
  *this = &SetupWizardDialog::`vftable';
  sub_5F83D0(this, 3200241, 0);
  *(this + 111) = 0;
  if ( a2 )
    *(this + 112) = a2;
  else
    *(this + 112) = sub_6375B0((_DWORD **)dword_162EE84);
  return this;
}


//======================================================================
// sub_676720
// entry 00676720  size 284  status ok
//======================================================================

int __thiscall sub_676720(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v1 = sub_630F40((int)"SID_SHELL_SETUPWIZARD");
  sub_5FA5B0(this, 0, 0, v1, 73, 477, 25, 3, 3, 1, 18, -1);
  v2 = sub_630F40((int)"SID_SHELL_BACK");
  sub_5F9DE0(this, 0, 0, 3200222, 214, 383, 1, v2, 72, 75, 74, -1, 3);
  v3 = sub_5FB300((int)this, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 208))(v3, v3);
  v4 = sub_630F40((int)"SID_SHELL_NEXT");
  sub_5F9DE0(this, 0, 1, 3200222, 304, 383, 1, v4, 72, 75, 74, -1, 4);
  v5 = sub_630F40((int)"SID_SHELL_DONE");
  sub_5F9DE0(this, 0, 2, 3200229, 394, 383, 1, v5, 72, 75, 74, -1, 13);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD *, int, _DWORD))(*(_DWORD *)dword_162EE84
                                                                                           + 956))(
           dword_162EE84,
           this,
           3,
           *(this + 112));
}


//======================================================================
// sub_676840
// entry 00676840  size 65  status ok
//======================================================================

int __thiscall sub_676840(_DWORD *this)
{
  sub_5F85D0((int)this);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD *, _DWORD, int))(*(_DWORD *)dword_162EE84
                                                                                           + 960))(
           dword_162EE84,
           this,
           *(this + 111),
           3);
}


//======================================================================
// sub_676890
// entry 00676890  size 440  status ok
//======================================================================

int __thiscall sub_676890(_DWORD *this, int a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-1Ch]
  int v7; // [esp+8h] [ebp-18h]
  int v8; // [esp+Ch] [ebp-14h]

  switch ( a2 )
  {
    case 0:
      if ( !--*(this + 111) )
      {
        v8 = sub_5FB300((int)this, 0);
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 208))(v8);
      }
      v2 = (_BYTE *)sub_5FB300((int)this, 1);
      if ( !sub_6026D0(v2) )
      {
        v7 = sub_5FB300((int)this, 1);
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 204))(v7);
      }
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD *, _DWORD, int))(*(_DWORD *)dword_162EE84
                                                                                               + 960))(
               dword_162EE84,
               this,
               *(this + 111),
               3);
    case 1:
      ++*(this + 111);
      if ( *(this + 111) >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 776))(dword_162EE84)
                          - 1 )
      {
        v6 = sub_5FB300((int)this, 1);
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
      }
      v3 = (_BYTE *)sub_5FB300((int)this, 0);
      if ( !sub_6026D0(v3) )
      {
        v4 = sub_5FB300((int)this, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 204))(v4, v4);
      }
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD *, _DWORD, int))(*(_DWORD *)dword_162EE84
                                                                                               + 960))(
               dword_162EE84,
               this,
               *(this + 111),
               3);
    case 2:
      return sub_676A50(this);
    default:
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD *, int))(*(_DWORD *)dword_162EE84 + 964))(
               dword_162EE84,
               this,
               a2);
  }
}


//======================================================================
// sub_676A50
// entry 00676a50  size 221  status ok
//======================================================================

_BYTE *__thiscall sub_676A50(int *this)
{
  char v3; // [esp+17h] [ebp-1h]

  v3 = sub_637670((_DWORD **)dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int *, int, _DWORD))(*(_DWORD *)dword_162EE84 + 968))(
    dword_162EE84,
    this,
    3,
    *(this + 112));
  sub_63B0A0(*(this + 112));
  if ( !dword_16306B0 && v3 != CImageDisplay::GetDisplayFormat((CImageDisplay *)*(this + 112))->bmiColors[129].rgbGreen )
  {
    if ( CImageDisplay::GetDisplayFormat((CImageDisplay *)*(this + 112))->bmiColors[129].rgbGreen )
      (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
    else
      (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 136))(dword_162EE84);
  }
  return sub_64F740();
}


//======================================================================
// sub_676B60
// entry 00676b60  size 119  status ok
//======================================================================

_DWORD *__thiscall sub_676B60(_DWORD *this)
{
  sub_5F71F0(this, 1, 0);
  *this = &BackgroundsDialog::`vftable';
  sub_5F83D0(this, 3200245, 0);
  *(this + 111) = 0;
  return this;
}


//======================================================================
// sub_676BE0
// entry 00676be0  size 136  status ok
//======================================================================

int __thiscall sub_676BE0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&BackgroundsDialog::`vftable';
  if ( *(this + 111) )
    (***(this + 111))(*(this + 111), 1);
  return sub_5F7260(this);
}


//======================================================================
// sub_676C70
// entry 00676c70  size 843  status ok
//======================================================================

int __thiscall sub_676C70(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  _DWORD *v9; // [esp+4h] [ebp-20h]
  _DWORD *v11; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  v1 = sub_630F40((int)"SID_SHELL_BACKGROUNDS");
  sub_5FA5B0(this, 0, 0, v1, 73, 546, 25, 3, 3, 1, 18, -1);
  sub_5FA880(this, 0, 0, 554, 1, 3, 344, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 554, 1, 4, 345, 1, 255, 255, 255, 0, 0, 0);
  for ( i = 0; i < 3; ++i )
  {
    v2 = sub_630F40((int)off_7811B0[i]);
    sub_5F9DE0(this, 0, i, i != 0 ? 3200222 : 3200229, 90 * i + 284, 352, 1, v2, 72, 75, 74, -1, 0);
  }
  v3 = (_BYTE *)sub_5FB300((int)this, 0);
  sub_6026F0(v3, 13);
  v4 = (_BYTE *)sub_5FB300((int)this, 1);
  sub_6026F0(v4, 27);
  v5 = sub_630F40((int)"SID_SHELL_BACKGROUNDS_COLON");
  sub_5FA5B0(this, 0, -1, v5, 72, 200, 20, 25, 58, 1, 5, -1);
  sub_5FAC90(
    this,
    0,
    0,
    3200235,
    19,
    56,
    1,
    0,
    3200204,
    211,
    206,
    3200203,
    211,
    22,
    3200207,
    210,
    37,
    187,
    210,
    37,
    16,
    165,
    7,
    24,
    200,
    16,
    12,
    31,
    69,
    66,
    0,
    0,
    0,
    3200217);
  v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 468))(
         dword_162EE84,
         0);
  sub_5F9CE0(this, 0, 0, v6, 307, 59, 2, 0, 0xFFu, 0);
  sub_5F9CE0(this, 0, -1, 3200244, 300, 35, 1, 0, 0xFFu, 0);
  sub_5FA5B0(this, 0, 1, (int)&Source, 31, 215, 17, 307, 40, 3, 5, -1);
  v11 = operator new(0x70u);
  if ( v11 )
  {
    sub_680B70();
    *v11 = &BackgroundsDialogHelpGroupBox::`vftable';
    v9 = v11;
  }
  else
  {
    v9 = 0;
  }
  *(this + 111) = v9;
  *(_DWORD *)(*(this + 111) + 4) = this;
  v7 = (char *)sub_630F40((int)"SID_GENERIC_HELP");
  sub_680CA0(293, 251, 1, 244, 84, 120, 124, 161, 255, 255, 255, v7, 72, 10, 10, 230, 71, 35, 0, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 116))(*(this + 111));
  return sub_676FC0(-1);
}


//======================================================================
// sub_676FC0
// entry 00676fc0  size 69  status ok
//======================================================================

int __thiscall sub_676FC0(void *this)
{
  int result; // eax
  int v2; // eax

  sub_677180();
  sub_677350(this);
  result = (unsigned __int8)byte_795F94;
  if ( byte_795F94 )
  {
    v2 = sub_5FB720((int)this, 0);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 180))(v2, v2);
  }
  return result;
}


//======================================================================
// sub_677010
// entry 00677010  size 70  status ok
//======================================================================

_BYTE *__thiscall sub_677010(void *this, _BYTE *a2)
{
  _BYTE *result; // eax

  result = a2;
  if ( !a2 )
  {
    sub_677100(this);
    return sub_64F830();
  }
  if ( a2 == (_BYTE *)1 )
    return sub_64F830();
  if ( a2 == (_BYTE *)2 )
    return (_BYTE *)sub_677100(this);
  return result;
}


//======================================================================
// sub_677060
// entry 00677060  size 154  status ok
//======================================================================

int __thiscall sub_677060(void *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v5; // eax
  exception *v6; // eax
  const char *v7; // eax
  int v9; // [esp-4h] [ebp-10h]
  int v10; // [esp+0h] [ebp-Ch]

  if ( sub_677400(this) == -1 )
  {
    v2 = sub_5FB2B0((int)this, 0);
    sub_5EAF00(v2, 2300598);
  }
  else
  {
    v3 = sub_677400(this);
    v9 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 488))(
           dword_162EE84,
           v3);
    v4 = sub_5FB2B0((int)this, 0);
    sub_5EAF00(v4, v9);
  }
  v10 = sub_5FB550((int)this, 1);
  v5 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  v6 = (exception *)sub_5E4390(v5);
  v7 = exception::what(v6);
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 180))(v10, v7);
}


//======================================================================
// sub_677100
// entry 00677100  size 122  status ok
//======================================================================

int __thiscall sub_677100(void *this)
{
  CImageDisplay *v1; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-10h]
  CImageDisplay *v5; // [esp+8h] [ebp-Ch]
  RGBQUAD v6; // [esp+10h] [ebp-4h]

  v1 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  v6 = sub_63A040(v1);
  v4 = sub_677400(this);
  v5 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  CImageDisplay::GetDisplayFormat(v5)->TrueColorInfo.bmiColors[196] = (RGBQUAD)v4;
  sub_637610((_DWORD **)dword_162EE84);
  result = sub_677400(this);
  if ( v6 != result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 268))(dword_162EE80);
  return result;
}


//======================================================================
// sub_677180
// entry 00677180  size 453  status ok
//======================================================================

int __thiscall sub_677180(void *this)
{
  pairNode *v1; // eax
  _DWORD *v2; // eax
  pairNode *v3; // eax
  int v5; // [esp-Ch] [ebp-40h]
  int v6; // [esp-Ch] [ebp-40h]
  int v7; // [esp-8h] [ebp-3Ch]
  int v8; // [esp+0h] [ebp-34h]
  _DWORD *v9; // [esp+4h] [ebp-30h]
  _DWORD *v10; // [esp+8h] [ebp-2Ch]
  _DWORD *v12; // [esp+10h] [ebp-24h]
  _DWORD *v13; // [esp+18h] [ebp-1Ch]
  int i; // [esp+24h] [ebp-10h]

  if ( !sub_5FB720((int)this, 0) )
    sub_5E9F20("GetListBox(0)", "..\\casinoShell\\backgroundsdialog.cpp", 166);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 464))(dword_162EE84);
        ++i )
  {
    v13 = operator new(0x18u);
    if ( v13 )
    {
      sub_629AB0((int)v13);
      *v13 = &BackgroundsListText::`vftable';
      v10 = v13;
    }
    else
    {
      v10 = 0;
    }
    v10[5] = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 468))(
               dword_162EE84,
               i,
               v8);
    v8 = 0;
    v7 = v10[5];
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 484))(dword_162EE84);
    v1 = (pairNode *)sub_5FB720((int)this, 0);
    sub_628980(v1, v10, v5, v7, -1);
  }
  v2 = (_DWORD *)sub_5FB720((int)this, 0);
  sub_628D80(v2);
  v12 = operator new(0x18u);
  if ( v12 )
  {
    sub_629AB0((int)v12);
    *v12 = &BackgroundsListText::`vftable';
    v9 = v12;
  }
  else
  {
    v9 = 0;
  }
  v9[5] = -1;
  v6 = sub_630F40((int)"SID_SHELL_RANDOM");
  v3 = (pairNode *)sub_5FB720((int)this, 0);
  return sub_628980(v3, v9, v6, -1, 0);
}


//======================================================================
// sub_677350
// entry 00677350  size 164  status ok
//======================================================================

int __thiscall sub_677350(void *this)
{
  int i; // eax
  int result; // eax
  CImageDisplay *v3; // eax
  int v4; // [esp+0h] [ebp-1Ch]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v8 = 0;
  for ( i = sub_5FB720((int)this, 0); ; i = sub_5FB720((int)this, 0) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)i + 184))(i);
    if ( v8 >= result )
      break;
    v6 = sub_5FB720((int)this, 0);
    v7 = sub_60CA40((_DWORD *)(v6 + 112), v8);
    v3 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    if ( *(_DWORD *)(v7 + 20) == sub_63A040(v3) )
    {
      v4 = sub_5FB720((int)this, 0);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 192))(v4, v8, 1);
    }
    ++v8;
  }
  return result;
}


//======================================================================
// sub_677400
// entry 00677400  size 33  status ok
//======================================================================

int __thiscall sub_677400(void *this)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v1; // eax

  v1 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  return *(_DWORD *)(sub_5E4390(v1) + 20);
}


//======================================================================
// sub_677430
// entry 00677430  size 506  status ok
//======================================================================

void __thiscall sub_677430(_DWORD **this, int a2)
{
  int v2; // eax
  int v4; // [esp+Ch] [ebp-38h]
  int v5; // [esp+10h] [ebp-34h]
  int v6; // [esp+14h] [ebp-30h]
  int v7; // [esp+18h] [ebp-2Ch]
  _DWORD v8[7]; // [esp+1Ch] [ebp-28h]
  int i; // [esp+38h] [ebp-Ch]
  int v10; // [esp+3Ch] [ebp-8h]
  int v11; // [esp+40h] [ebp-4h]

  v11 = -1;
  if ( dword_16306D8 )
  {
    v7 = sub_5FB300(dword_16306D8, 0);
    v8[0] = 0;
    v8[1] = sub_5FB300(dword_16306D8, 1);
    v8[2] = 1;
    v8[3] = sub_5FB300(dword_16306D8, 2);
    v8[4] = 2;
    v8[5] = *(_DWORD *)(sub_5FB720(dword_16306D8, 0) + 72);
    v8[6] = 3;
    v10 = 4;
    for ( i = 0; i < v10; ++i )
    {
      if ( v8[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v8[2 * i - 1] + 132))(v8[2 * i - 1], a2) )
      {
        v11 = v8[2 * i];
        break;
      }
    }
    if ( v11 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(_DWORD, const char *))(**(this + 27) + 180))(*(this + 27), &Source);
    }
    else
    {
      if ( !v11 )
      {
        v6 = sub_630F40((int)"SID_SHELL_BACKGROUNDS_ROLLOVER1");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v6);
      }
      if ( v11 == 1 )
      {
        v5 = sub_630F40((int)"SID_SHELL_BACKGROUNDS_ROLLOVER2");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v5);
      }
      if ( v11 == 2 )
      {
        v4 = sub_630F40((int)"SID_SHELL_BACKGROUNDS_ROLLOVER3");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v4);
      }
      if ( v11 == 3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 192))(dword_162EE84) )
          v2 = sub_630F40((int)"SID_SHELL_BACKGROUNDS_ROLLOVER4_COLLECTION");
        else
          v2 = sub_630F40((int)"SID_SHELL_BACKGROUNDS_ROLLOVER4_STANDALONE");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v2);
      }
    }
  }
}


//======================================================================
// sub_677690
// entry 00677690  size 119  status ok
//======================================================================

_DWORD *__thiscall sub_677690(_DWORD *this)
{
  sub_5F71F0(this, 1, 0);
  *this = &CardsDialog::`vftable';
  sub_5F83D0(this, 3200246, 0);
  *(this + 111) = 0;
  return this;
}


//======================================================================
// sub_677710
// entry 00677710  size 136  status ok
//======================================================================

int __thiscall sub_677710(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CardsDialog::`vftable';
  if ( *(this + 111) )
    (***(this + 111))(*(this + 111), 1);
  return sub_5F7260(this);
}


//======================================================================
// sub_6777A0
// entry 006777a0  size 1263  status ok
//======================================================================

int __thiscall sub_6777A0(_DWORD *this)
{
  int v1; // eax
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v13; // [esp-1Ch] [ebp-4Ch]
  int v14; // [esp+0h] [ebp-30h]
  _DWORD *v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-28h]
  int v17; // [esp+Ch] [ebp-24h]
  _DWORD *v19; // [esp+14h] [ebp-1Ch]
  int i; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h]

  sub_5FA5B0(this, 0, 0, (int)"Cards", 73, 427, 25, 3, 5, 1, 6, -1);
  sub_5FA880(this, 0, 0, 433, 1, 3, 337, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 433, 1, 4, 338, 1, 255, 255, 255, 0, 0, 0);
  for ( i = 0; i < 3; ++i )
  {
    v1 = sub_630F40((int)off_781228[i]);
    sub_5F9DE0(this, 0, i, i != 0 ? 3200222 : 3200229, 90 * i + 164, 349, 1, v1, 72, 75, 74, -1, 0);
  }
  v2 = (_BYTE *)sub_5FB300((int)this, 0);
  sub_6026F0(v2, 13);
  v3 = (_BYTE *)sub_5FB300((int)this, 1);
  sub_6026F0(v3, 27);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 496))(dword_162EE80) )
  {
    v4 = sub_630F40((int)"SID_SHELL_CARDBACKS_COLON");
    sub_5FA5B0(this, 0, -1, v4, 72, 200, 20, 12, 105, 1, 5, -1);
    sub_5FAC90(
      this,
      0,
      0,
      3200235,
      6,
      103,
      1,
      0,
      3200204,
      211,
      206,
      3200203,
      211,
      22,
      3200207,
      210,
      37,
      187,
      210,
      37,
      16,
      165,
      7,
      24,
      200,
      16,
      12,
      31,
      69,
      66,
      0,
      0,
      0,
      3200217);
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 912))(dword_162EE84);
    sub_5F9CE0(this, 0, 0, v5, 276, 106, 1, 0, 0xFFu, 0);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 456))(dword_162EE84) )
  {
    v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 920))(dword_162EE84);
    sub_5F9CE0(this, 0, 1, v6, 356, 106, 1, 0, 0xFFu, 0);
    v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 920))(dword_162EE84);
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 444))(
           dword_162EE84,
           v7) )
    {
      v8 = (_DWORD *)sub_5FB2B0((int)this, 1);
      if ( sub_5EB240(v8) <= 51 )
      {
        v9 = (_DWORD *)sub_5FB2B0((int)this, 1);
        v17 = sub_5EB240(v9);
      }
      else
      {
        v17 = 51;
      }
      v16 = sub_5FB2B0((int)this, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 176))(v16, v17);
    }
    v10 = (char *)sub_630F40((int)"SID_SHELL_CARDFRONTS");
    sub_5FA790(this, 0, 0, v10, 72, 344, 60, 6, 40, 1, 120, 124, 161, 255, 255, 255, 0);
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 428))(dword_162EE84);
          ++i )
    {
      v21 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 432))(
              dword_162EE84,
              i,
              v14);
      v14 = 0;
      v13 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 460))(dword_162EE84);
      sub_5F9FF0(
        (int)this,
        0,
        0,
        v21,
        0,
        3200202,
        115 * (i / 2) + 18,
        20 * (i % 2) + 53,
        1,
        v13,
        v21,
        31,
        69,
        66,
        -1,
        20);
    }
  }
  v19 = operator new(0x70u);
  if ( v19 )
  {
    sub_680B70();
    *v19 = &CardsDialogHelpGroupBox::`vftable';
    v15 = v19;
  }
  else
  {
    v15 = 0;
  }
  *(this + 111) = v15;
  *(_DWORD *)(*(this + 111) + 4) = this;
  v11 = (char *)sub_630F40((int)"SID_GENERIC_HELP");
  sub_680CA0(247, 197, 1, 184, 134, 120, 124, 161, 255, 255, 255, v11, 72, 10, 10, 170, 120, 35, 0, -1);
  (*(void (__thiscall **)(_DWORD, int, _DWORD *, int, int, _DWORD *, _DWORD *, _DWORD *, int, int))(*(_DWORD *)*(this + 111)
                                                                                                  + 116))(
    *(this + 111),
    v14,
    v15,
    v16,
    v17,
    this,
    v19,
    v15,
    i,
    v21);
  return sub_677C90(-1);
}


//======================================================================
// sub_677C90
// entry 00677c90  size 119  status ok
//======================================================================

int __thiscall sub_677C90(void *this)
{
  int result; // eax
  CImageDisplay *v2; // eax
  void *v3; // eax
  int v4; // [esp-4h] [ebp-Ch]
  int v5; // [esp+0h] [ebp-8h]

  v5 = (int)this;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 496))(dword_162EE80) )
  {
    sub_677F70(v5);
    sub_6780C0(v5);
  }
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 456))(dword_162EE84);
  if ( (_BYTE)result )
  {
    v2 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    v4 = (int)sub_639FF0(v2);
    v3 = (void *)sub_5FB3A0(v5, 0);
    return sub_6065D0(v3, v4);
  }
  return result;
}


//======================================================================
// sub_677D10
// entry 00677d10  size 329  status ok
//======================================================================

_BYTE *__thiscall sub_677D10(void *this, int a2)
{
  _BYTE *result; // eax
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // [esp+0h] [ebp-10h]
  int v7; // [esp+4h] [ebp-Ch]

  result = (_BYTE *)a2;
  if ( a2 > 3150144 )
  {
    switch ( a2 )
    {
      case 3150148:
      case 3150152:
      case 3150156:
      case 3150160:
        goto LABEL_14;
      default:
        return result;
    }
  }
  else
  {
    if ( a2 == 3150144 )
      goto LABEL_14;
    if ( a2 <= 2 )
    {
      if ( a2 == 2 )
        return (_BYTE *)sub_677EC0(this);
      if ( a2 )
      {
        if ( a2 != 1 )
          return result;
      }
      else
      {
        sub_677EC0(this);
      }
      return sub_64F920();
    }
    if ( a2 == 3150140 )
    {
LABEL_14:
      result = (_BYTE *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 456))(dword_162EE84);
      if ( (_BYTE)result )
      {
        v3 = sub_5FB2B0((int)this, 1);
        sub_5EAF00(v3, a2);
        result = (_BYTE *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84
                                                                                          + 444))(
                            dword_162EE84,
                            a2);
        if ( (_BYTE)result )
        {
          v4 = (_DWORD *)sub_5FB2B0((int)this, 1);
          if ( sub_5EB240(v4) <= 51 )
          {
            v5 = (_DWORD *)sub_5FB2B0((int)this, 1);
            v7 = sub_5EB240(v5);
          }
          else
          {
            v7 = 51;
          }
          v6 = sub_5FB2B0((int)this, 1);
          return (_BYTE *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 176))(v6, v7);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_677E80
// entry 00677e80  size 64  status ok
//======================================================================

int __thiscall sub_677E80(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp-4h] [ebp-8h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 496))(dword_162EE80);
  if ( !result )
  {
    v4 = sub_678170(this);
    v3 = sub_5FB2B0((int)this, 0);
    return sub_5EAF00(v3, v4);
  }
  return result;
}


//======================================================================
// sub_677EC0
// entry 00677ec0  size 168  status ok
//======================================================================

int __thiscall sub_677EC0(void *this)
{
  int v1; // eax
  void *v2; // eax
  int v3; // eax

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 496))(dword_162EE80) )
  {
    v1 = sub_678170(this);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 916))(
      dword_162EE84,
      v1);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 456))(dword_162EE84) )
  {
    v2 = (void *)sub_5FB3A0((int)this, 0);
    v3 = sub_606570(v2);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 924))(
      dword_162EE84,
      v3);
  }
  sub_637610((_DWORD **)dword_162EE84);
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 276))(dword_162EE80);
}


//======================================================================
// sub_677F70
// entry 00677f70  size 327  status ok
//======================================================================

int __thiscall sub_677F70(void *this)
{
  pairNode *v1; // eax
  _DWORD *v2; // eax
  int v4; // [esp-Ch] [ebp-34h]
  int v5; // [esp-8h] [ebp-30h]
  int v6; // [esp+0h] [ebp-28h]
  _DWORD *v7; // [esp+4h] [ebp-24h]
  _DWORD *v9; // [esp+Ch] [ebp-1Ch]
  int i; // [esp+18h] [ebp-10h]

  if ( !sub_5FB720((int)this, 0) )
    sub_5E9F20("GetListBox(0)", "..\\casinoShell\\cardsdialog.cpp", 219);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 404))(dword_162EE84);
        ++i )
  {
    v9 = operator new(0x18u);
    if ( v9 )
    {
      sub_629AB0((int)v9);
      *v9 = &CardBacksListText::`vftable';
      v7 = v9;
    }
    else
    {
      v7 = 0;
    }
    v7[5] = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 408))(
              dword_162EE84,
              i,
              v6);
    v6 = 0;
    v5 = v7[5];
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 424))(dword_162EE84);
    v1 = (pairNode *)sub_5FB720((int)this, 0);
    sub_628980(v1, v7, v4, v5, -1);
  }
  v2 = (_DWORD *)sub_5FB720((int)this, 0);
  return sub_628D80(v2);
}


//======================================================================
// sub_6780C0
// entry 006780c0  size 168  status ok
//======================================================================

int __thiscall sub_6780C0(void *this)
{
  int i; // eax
  int result; // eax
  int v3; // [esp+0h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v7 = 0;
  for ( i = sub_5FB720((int)this, 0); ; i = sub_5FB720((int)this, 0) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)i + 184))(i);
    if ( v7 >= result )
      break;
    v5 = sub_5FB720((int)this, 0);
    v6 = sub_60CA40((_DWORD *)(v5 + 112), v7);
    if ( *(_DWORD *)(v6 + 20) == (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84
                                                                                            + 912))(dword_162EE84) )
    {
      v3 = sub_5FB720((int)this, 0);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 192))(v3, v7, 1);
    }
    ++v7;
  }
  return result;
}


//======================================================================
// sub_678170
// entry 00678170  size 33  status ok
//======================================================================

int __thiscall sub_678170(void *this)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v1; // eax

  v1 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  return *(_DWORD *)(sub_5E4390(v1) + 20);
}


//======================================================================
// sub_6781A0
// entry 006781a0  size 1215  status ok
//======================================================================

void __thiscall sub_6781A0(_DWORD **this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+4h] [ebp-90h]
  int v11; // [esp+Ch] [ebp-88h]
  int v12; // [esp+10h] [ebp-84h]
  int v13; // [esp+14h] [ebp-80h]
  int v14; // [esp+18h] [ebp-7Ch]
  int v15; // [esp+1Ch] [ebp-78h]
  int v16; // [esp+20h] [ebp-74h]
  int v17; // [esp+28h] [ebp-6Ch]
  int v18; // [esp+2Ch] [ebp-68h]
  int v19; // [esp+30h] [ebp-64h]
  int v20; // [esp+34h] [ebp-60h]
  _DWORD v21[20]; // [esp+38h] [ebp-5Ch]
  int i; // [esp+88h] [ebp-Ch]
  int v23; // [esp+8Ch] [ebp-8h]
  int v24; // [esp+90h] [ebp-4h]

  v24 = -1;
  if ( dword_16306DC )
  {
    v20 = sub_5FB300(dword_16306DC, 0);
    v21[0] = 0;
    v21[1] = sub_5FB300(dword_16306DC, 1);
    v21[2] = 1;
    v21[3] = sub_5FB300(dword_16306DC, 2);
    v21[4] = 2;
    if ( sub_5FB720(dword_16306DC, 0) )
      v9 = *(_DWORD *)(sub_5FB720(dword_16306DC, 0) + 72);
    else
      v9 = 0;
    v21[5] = v9;
    v21[6] = 3;
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 432))(
           dword_162EE84,
           0);
    v21[7] = sub_5FB3F0((void *)dword_16306DC, v2, 0);
    v21[8] = 4;
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 432))(
           dword_162EE84,
           1);
    v21[9] = sub_5FB3F0((void *)dword_16306DC, v3, 0);
    v21[10] = 5;
    v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 432))(
           dword_162EE84,
           2);
    v21[11] = sub_5FB3F0((void *)dword_16306DC, v4, 0);
    v21[12] = 6;
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 432))(
           dword_162EE84,
           3);
    v21[13] = sub_5FB3F0((void *)dword_16306DC, v5, 0);
    v21[14] = 7;
    v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 432))(
           dword_162EE84,
           4);
    v21[15] = sub_5FB3F0((void *)dword_16306DC, v6, 0);
    v21[16] = 8;
    v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 432))(
           dword_162EE84,
           5);
    v21[17] = sub_5FB3F0((void *)dword_16306DC, v7, 0);
    v21[18] = 9;
    v23 = 10;
    for ( i = 0; i < v23; ++i )
    {
      if ( v21[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v21[2 * i - 1] + 132))(v21[2 * i - 1], a2) )
      {
        v24 = v21[2 * i];
        break;
      }
    }
    if ( v24 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(_DWORD, const char *))(**(this + 27) + 180))(*(this + 27), &Source);
    }
    else
    {
      if ( !v24 )
      {
        v19 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER1");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v19);
      }
      if ( v24 == 1 )
      {
        v18 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER2");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v18);
      }
      if ( v24 == 2 )
      {
        v17 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER3");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v17);
      }
      if ( v24 == 3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 192))(dword_162EE84) )
          v8 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER4_COLLECTION");
        else
          v8 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER4_STANDALONE");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v8);
      }
      if ( v24 == 4 )
      {
        v16 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER5");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v16);
      }
      if ( v24 == 5 )
      {
        v15 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER6");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v15);
      }
      if ( v24 == 6 )
      {
        v14 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER7");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v14);
      }
      if ( v24 == 7 )
      {
        v13 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER8");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v13);
      }
      if ( v24 == 8 )
      {
        v12 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER9");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v12);
      }
      if ( v24 == 9 )
      {
        v11 = sub_630F40((int)"SID_SHELL_CARDBACKS_ROLLOVER10");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v11);
      }
    }
  }
}


//======================================================================
// sub_678690
// entry 00678690  size 179  status ok
//======================================================================

int __thiscall sub_678690(int this, int a2)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v4; // [esp+4h] [ebp-14h]

  sub_5FC0D0((ATL::CCRTHeap *)this, 0);
  *(_DWORD *)this = &HighScoresAttractModeScript::`vftable';
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
         dword_162EE84,
         ExecutingCollection);
  *(_BYTE *)(this + 32) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 176))(v4);
  if ( a2 )
    *(_DWORD *)(this + 40) = a2;
  else
    *(_DWORD *)(this + 40) = 60;
  return this;
}


//======================================================================
// sub_6787B0
// entry 006787b0  size 260  status ok
//======================================================================

int __thiscall sub_6787B0(int *this)
{
  int result; // eax

  result = (int)this;
  switch ( *(this + 5) )
  {
    case 0:
      return (*(int (__thiscall **)(int *, int, _DWORD))(*this + 8))(this, *(this + 5) + 1, *(this + 10));
    case 1:
      sub_64F950(1, *(this + 5));
      goto LABEL_4;
    case 2:
    case 3:
LABEL_4:
      result = (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, *(this + 5) + 1, 90);
      goto LABEL_9;
    case 4:
      (*(void (__thiscall **)(int *, int, int))(*this + 8))(this, 5, 600);
      result = (int)this;
      ++*(this + 9);
      goto LABEL_9;
    case 5:
      sub_64FA40();
      if ( *((_BYTE *)this + 32) )
        return sub_64FA90(dword_162EE80, 0, 0);
      else
        return (*(int (__thiscall **)(int *, int, int))(*this + 8))(this, 1, 300);
    default:
LABEL_9:
      if ( dword_16306C4 )
      {
        if ( *(this + 5) != 1 )
          return sub_66E9E0((void *)dword_16306C4, 1u, *(this + 5));
      }
      return result;
  }
}


//======================================================================
// sub_678900
// entry 00678900  size 594  status ok
//======================================================================

int __thiscall sub_678900(int this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]
  int m; // [esp+4h] [ebp-4h]
  int n; // [esp+4h] [ebp-4h]
  int ii; // [esp+4h] [ebp-4h]
  int jj; // [esp+4h] [ebp-4h]

  sub_5F5F50((_DWORD *)this);
  *(_DWORD *)this = &WinAnimation::`vftable';
  *(_DWORD *)(this + 404) = 0;
  *(_BYTE *)(this + 684) = 0;
  for ( i = 0; i < 12; ++i )
  {
    *(_DWORD *)(this + 4 * i + 408) = 0;
    *(_DWORD *)(this + 4 * i + 456) = 0;
  }
  for ( j = 0; j < 3; ++j )
    *(_DWORD *)(this + 4 * j + 504) = 0;
  for ( k = 0; k < 4; ++k )
  {
    *(_DWORD *)(this + 4 * k + 524) = 0;
    *(_DWORD *)(this + 4 * k + 540) = 0;
    *(_DWORD *)(this + 4 * k + 604) = 0;
  }
  for ( m = 0; m < 5; ++m )
    *(_DWORD *)(this + 4 * m + 584) = 0;
  *(_DWORD *)(this + 664) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 676) = -1;
  *(_DWORD *)(this + 520) = 0;
  *(_DWORD *)(this + 516) = 0;
  *(_DWORD *)(this + 556) = 0;
  *(_DWORD *)(this + 560) = 0;
  *(_DWORD *)(this + 576) = 0;
  for ( n = 0; n < 3; ++n )
    *(_DWORD *)(this + 4 * n + 564) = 0;
  *(_DWORD *)(this + 580) = 0;
  *(_DWORD *)(this + 620) = 0;
  *(_DWORD *)(this + 624) = 0;
  for ( ii = 0; ii < 3; ++ii )
    *(_DWORD *)(this + 4 * ii + 628) = 0;
  for ( jj = 0; jj < 2; ++jj )
  {
    *(_DWORD *)(this + 4 * jj + 640) = 0;
    *(_DWORD *)(this + 4 * jj + 648) = 0;
  }
  *(_DWORD *)(this + 656) = 0;
  *(_DWORD *)(this + 660) = 0;
  return this;
}


//======================================================================
// sub_678B60
// entry 00678b60  size 2700  status ok
//======================================================================

void __thiscall sub_678B60(int this)
{
  int i; // [esp+11Ch] [ebp-10h]
  int j; // [esp+11Ch] [ebp-10h]
  int k; // [esp+11Ch] [ebp-10h]
  int m; // [esp+11Ch] [ebp-10h]
  int n; // [esp+11Ch] [ebp-10h]
  int ii; // [esp+11Ch] [ebp-10h]
  int jj; // [esp+11Ch] [ebp-10h]

  *(_DWORD *)this = &WinAnimation::`vftable';
  if ( *(_DWORD *)(this + 404) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 404))(*(_DWORD *)(this + 404), 1);
    *(_DWORD *)(this + 404) = 0;
  }
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(this + 4 * i + 408) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 408))(*(_DWORD *)(this + 4 * i + 408), 1);
      *(_DWORD *)(this + 4 * i + 408) = 0;
    }
    if ( *(_DWORD *)(this + 4 * i + 456) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 456))(*(_DWORD *)(this + 4 * i + 456), 1);
      *(_DWORD *)(this + 4 * i + 456) = 0;
    }
  }
  for ( j = 0; j < 3; ++j )
  {
    if ( *(_DWORD *)(this + 4 * j + 504) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * j + 504))(*(_DWORD *)(this + 4 * j + 504), 1);
      *(_DWORD *)(this + 4 * j + 504) = 0;
    }
  }
  if ( *(_DWORD *)(this + 664) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 664))(*(_DWORD *)(this + 664), 1);
    *(_DWORD *)(this + 664) = 0;
  }
  if ( *(_DWORD *)(this + 520) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 520))(*(_DWORD *)(this + 520), 1);
    *(_DWORD *)(this + 520) = 0;
  }
  if ( *(_DWORD *)(this + 516) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 516))(*(_DWORD *)(this + 516), 1);
    *(_DWORD *)(this + 516) = 0;
  }
  for ( k = 0; k < 4; ++k )
  {
    if ( *(_DWORD *)(this + 4 * k + 524) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * k + 524))(*(_DWORD *)(this + 4 * k + 524), 1);
      *(_DWORD *)(this + 4 * k + 524) = 0;
    }
    if ( *(_DWORD *)(this + 4 * k + 540) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * k + 540))(*(_DWORD *)(this + 4 * k + 540), 1);
      *(_DWORD *)(this + 4 * k + 540) = 0;
    }
    if ( *(_DWORD *)(this + 4 * k + 604) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * k + 604))(*(_DWORD *)(this + 4 * k + 604), 1);
      *(_DWORD *)(this + 4 * k + 604) = 0;
    }
  }
  for ( m = 0; m < 5; ++m )
  {
    if ( *(_DWORD *)(this + 4 * m + 584) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * m + 584))(*(_DWORD *)(this + 4 * m + 584), 1);
      *(_DWORD *)(this + 4 * m + 584) = 0;
    }
  }
  if ( *(_DWORD *)(this + 556) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 556))(*(_DWORD *)(this + 556), 1);
    *(_DWORD *)(this + 556) = 0;
  }
  if ( *(_DWORD *)(this + 560) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 560))(*(_DWORD *)(this + 560), 1);
    *(_DWORD *)(this + 560) = 0;
  }
  if ( *(_DWORD *)(this + 576) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 576))(*(_DWORD *)(this + 576), 1);
    *(_DWORD *)(this + 576) = 0;
  }
  for ( n = 0; n < 3; ++n )
  {
    if ( *(_DWORD *)(this + 4 * n + 564) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * n + 564))(*(_DWORD *)(this + 4 * n + 564), 1);
      *(_DWORD *)(this + 4 * n + 564) = 0;
    }
  }
  if ( *(_DWORD *)(this + 580) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 580))(*(_DWORD *)(this + 580), 1);
    *(_DWORD *)(this + 580) = 0;
  }
  if ( *(_DWORD *)(this + 620) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 620))(*(_DWORD *)(this + 620), 1);
    *(_DWORD *)(this + 620) = 0;
  }
  if ( *(_DWORD *)(this + 624) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 624))(*(_DWORD *)(this + 624), 1);
    *(_DWORD *)(this + 624) = 0;
  }
  for ( ii = 0; ii < 3; ++ii )
  {
    if ( *(_DWORD *)(this + 4 * ii + 628) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * ii + 628))(*(_DWORD *)(this + 4 * ii + 628), 1);
      *(_DWORD *)(this + 4 * ii + 628) = 0;
    }
  }
  for ( jj = 0; jj < 2; ++jj )
  {
    if ( *(_DWORD *)(this + 4 * jj + 640) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * jj + 640))(*(_DWORD *)(this + 4 * jj + 640), 1);
      *(_DWORD *)(this + 4 * jj + 640) = 0;
    }
    if ( *(_DWORD *)(this + 4 * jj + 648) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * jj + 648))(*(_DWORD *)(this + 4 * jj + 648), 1);
      *(_DWORD *)(this + 4 * jj + 648) = 0;
    }
  }
  if ( *(_DWORD *)(this + 656) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 656))(*(_DWORD *)(this + 656), 1);
    *(_DWORD *)(this + 656) = 0;
  }
  if ( *(_DWORD *)(this + 660) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 660))(*(_DWORD *)(this + 660), 1);
    *(_DWORD *)(this + 660) = 0;
  }
  *(_DWORD *)(this + 400) = 0;
  sub_5F45D0(0);
  sub_5F5FA0((_DWORD *)this);
}


//======================================================================
// sub_6795F0
// entry 006795f0  size 1198  status ok
//======================================================================

void (__thiscall ****__thiscall sub_6795F0(int this, int a2, int a3, int a4))(_DWORD, _DWORD)
{
  int v4; // eax
  char v5; // ecx^3
  int v7; // [esp-4h] [ebp-50h]
  ATL::CCRTHeap *v8; // [esp+4h] [ebp-48h]
  int v9; // [esp+8h] [ebp-44h]
  _DWORD *v10; // [esp+Ch] [ebp-40h]
  _DWORD *v11; // [esp+10h] [ebp-3Ch]
  ATL::CCRTHeap *v13; // [esp+1Ch] [ebp-30h]
  void *v14; // [esp+24h] [ebp-28h]
  _DWORD *v15; // [esp+2Ch] [ebp-20h]
  _DWORD *v16; // [esp+34h] [ebp-18h]
  int v17; // [esp+3Ch] [ebp-10h]

  *(_BYTE *)(this + 684) = 1;
  v17 = 0;
  if ( a4 == -1 )
    a4 = sub_62FBF0(16);
  sub_5F5CC0((ATL::CAtlWinModule *)this);
  *(_DWORD *)(this + 668) = dword_7813C8[a4];
  *(_DWORD *)(this + 672) = dword_781388[a4];
  *(_DWORD *)(this + 400) = a2;
  *(_DWORD *)(this + 680) = &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * a3))->rcSource.top;
  sub_5EAE80(*(_DWORD *)(this + 668), dword_781308[2 * a4], dword_78130C[2 * a4], 2000, -1);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 176))(this, 0);
  sub_5EB5D0((_BYTE *)this, 0xFFu);
  if ( *(_DWORD *)(this + 668) == 2400004 || *(_DWORD *)(this + 668) == 2400005 || *(_DWORD *)(this + 668) == 2400098 )
  {
    if ( *(_DWORD *)(this + 668) == 2400004 )
      v17 = 2400003;
    if ( *(_DWORD *)(this + 668) == 2400005 )
      v17 = 2400006;
    if ( !*(_DWORD *)(this + 664) )
    {
      v16 = operator new(0x184u);
      if ( v16 )
        v11 = sub_5F5BF0(v16);
      else
        v11 = 0;
      *(_DWORD *)(this + 664) = v11;
    }
    *(_DWORD *)(*(_DWORD *)(this + 664) + 4) = *(_DWORD *)(this + 4);
    sub_5EAE80(v17, 0, 0, 1999, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 664) + 116))(*(_DWORD *)(this + 664));
    if ( *(_DWORD *)(this + 668) == 2400005 || *(_DWORD *)(this + 668) == 2400098 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 664) + 108))(*(_DWORD *)(this + 664), 2001);
      v15 = operator new(0x20u);
      if ( v15 )
        v10 = sub_6010A0(v15, 0);
      else
        v10 = 0;
      sub_5F5D50(*(_DWORD **)(this + 664), (int)v10);
    }
  }
  if ( *(_DWORD *)(this + 668) == 2400013 || *(_DWORD *)(this + 668) == 2400010 )
  {
    if ( !*(_DWORD *)(this + 404) )
    {
      v14 = operator new(0x1D0u);
      if ( v14 )
      {
        sub_5EC5A0(v14);
        v9 = v4;
      }
      else
      {
        v9 = 0;
      }
      *(_DWORD *)(this + 404) = v9;
    }
    *(_DWORD *)(*(_DWORD *)(this + 404) + 4) = *(_DWORD *)(this + 4);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 64))(*(_DWORD *)(this + 404));
    HIBYTE(v7) = v5;
    LOWORD(v7) = word_75EE1C;
    BYTE2(v7) = byte_75EE1E;
    sub_5ECD00(*(_DWORD **)(this + 404), 31, -1, v7);
    sub_5ECC60(*(_DWORD **)(this + 404), 130);
    sub_5ECCB0(*(_DWORD **)(this + 404), 15);
    sub_5EE710(*(_DWORD **)(this + 404), *(char **)(this + 680));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 404) + 108))(*(_DWORD *)(this + 404), 2001);
    sub_5EF310(*(_DWORD **)(this + 404), 48);
    if ( *(_DWORD *)(this + 668) == 2400013 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 404) + 68))(*(_DWORD *)(this + 404), 258, 352);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 116))(*(_DWORD *)(this + 404));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 404) + 68))(*(_DWORD *)(this + 404), 260, 220);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 116))(this);
  }
  *(_DWORD *)(this + 376) = dword_7812C8[a4];
  v13 = (ATL::CCRTHeap *)operator new(0x20u);
  if ( v13 )
  {
    sub_5FC0D0(v13, 0);
    *(_DWORD *)v13 = &WinAnimationScript::`vftable';
    v8 = v13;
  }
  else
  {
    v8 = 0;
  }
  return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, (void (__thiscall ***)(_DWORD, _DWORD))v8);
}


//======================================================================
// sub_679AA0
// entry 00679aa0  size 2240  status ok
//======================================================================

int __thiscall sub_679AA0(int this, int a2)
{
  int result; // eax
  int i; // [esp+100h] [ebp-4h]
  int j; // [esp+100h] [ebp-4h]
  int k; // [esp+100h] [ebp-4h]
  int m; // [esp+100h] [ebp-4h]
  int n; // [esp+100h] [ebp-4h]
  int ii; // [esp+100h] [ebp-4h]
  int jj; // [esp+100h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 112))(this);
  sub_5F5D50((_DWORD *)this, 0);
  sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
  if ( sub_637670((_DWORD **)dword_162EE84) && *(_DWORD *)(this + 676) != -1 )
    sub_5F47A0(*(_DWORD *)(this + 676));
  if ( *(_DWORD *)(this + 404) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 404))(*(_DWORD *)(this + 404), 1);
  *(_DWORD *)(this + 404) = 0;
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(this + 4 * i + 408) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 408))(*(_DWORD *)(this + 4 * i + 408), 1);
    *(_DWORD *)(this + 4 * i + 408) = 0;
    if ( *(_DWORD *)(this + 4 * i + 456) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 456))(*(_DWORD *)(this + 4 * i + 456), 1);
    *(_DWORD *)(this + 4 * i + 456) = 0;
  }
  for ( j = 0; j < 3; ++j )
  {
    if ( *(_DWORD *)(this + 4 * j + 504) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * j + 504))(*(_DWORD *)(this + 4 * j + 504), 1);
      *(_DWORD *)(this + 4 * j + 504) = 0;
    }
  }
  for ( k = 0; k < 4; ++k )
  {
    if ( *(_DWORD *)(this + 4 * k + 524) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * k + 524))(*(_DWORD *)(this + 4 * k + 524), 1);
      *(_DWORD *)(this + 4 * k + 524) = 0;
    }
    if ( *(_DWORD *)(this + 4 * k + 540) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * k + 540))(*(_DWORD *)(this + 4 * k + 540), 1);
      *(_DWORD *)(this + 4 * k + 540) = 0;
    }
    if ( *(_DWORD *)(this + 4 * k + 604) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * k + 604))(*(_DWORD *)(this + 4 * k + 604), 1);
      *(_DWORD *)(this + 4 * k + 604) = 0;
    }
  }
  for ( m = 0; m < 5; ++m )
  {
    if ( *(_DWORD *)(this + 4 * m + 584) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * m + 584))(*(_DWORD *)(this + 4 * m + 584), 1);
    *(_DWORD *)(this + 4 * m + 584) = 0;
  }
  if ( *(_DWORD *)(this + 556) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 556))(*(_DWORD *)(this + 556), 1);
  *(_DWORD *)(this + 556) = 0;
  if ( *(_DWORD *)(this + 560) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 560))(*(_DWORD *)(this + 560), 1);
  *(_DWORD *)(this + 560) = 0;
  if ( *(_DWORD *)(this + 576) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 576))(*(_DWORD *)(this + 576), 1);
  *(_DWORD *)(this + 576) = 0;
  for ( n = 0; n < 3; ++n )
  {
    if ( *(_DWORD *)(this + 4 * n + 564) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * n + 564))(*(_DWORD *)(this + 4 * n + 564), 1);
    *(_DWORD *)(this + 4 * n + 564) = 0;
  }
  if ( *(_DWORD *)(this + 580) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 580))(*(_DWORD *)(this + 580), 1);
  *(_DWORD *)(this + 580) = 0;
  if ( *(_DWORD *)(this + 620) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 620))(*(_DWORD *)(this + 620), 1);
  *(_DWORD *)(this + 620) = 0;
  if ( *(_DWORD *)(this + 624) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 624))(*(_DWORD *)(this + 624), 1);
  *(_DWORD *)(this + 624) = 0;
  for ( ii = 0; ii < 3; ++ii )
  {
    if ( *(_DWORD *)(this + 4 * ii + 628) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * ii + 628))(*(_DWORD *)(this + 4 * ii + 628), 1);
    *(_DWORD *)(this + 4 * ii + 628) = 0;
  }
  for ( jj = 0; jj < 2; ++jj )
  {
    if ( *(_DWORD *)(this + 4 * jj + 640) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * jj + 640))(*(_DWORD *)(this + 4 * jj + 640), 1);
    *(_DWORD *)(this + 4 * jj + 640) = 0;
    if ( *(_DWORD *)(this + 4 * jj + 648) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * jj + 648))(*(_DWORD *)(this + 4 * jj + 648), 1);
    *(_DWORD *)(this + 4 * jj + 648) = 0;
  }
  if ( *(_DWORD *)(this + 656) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 656))(*(_DWORD *)(this + 656), 1);
  *(_DWORD *)(this + 656) = 0;
  if ( *(_DWORD *)(this + 660) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 660))(*(_DWORD *)(this + 660), 1);
  *(_DWORD *)(this + 660) = 0;
  result = *(_DWORD *)(this + 664);
  if ( result )
    result = (***(int (__thiscall ****)(_DWORD, int))(this + 664))(*(_DWORD *)(this + 664), 1);
  *(_DWORD *)(this + 664) = 0;
  if ( *(_DWORD *)(this + 400) )
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 400) + 28))(*(_DWORD *)(this + 400), 0);
  *(_DWORD *)(this + 400) = 0;
  *(_BYTE *)(this + 684) = 0;
  return result;
}


//======================================================================
// sub_67A370
// entry 0067a370  size 1474  status ok
//======================================================================

int __thiscall sub_67A370(int *this, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // edx
  _BYTE *v5; // [esp+10h] [ebp-54h]
  _DWORD *v6; // [esp+14h] [ebp-50h]
  _DWORD *v7; // [esp+18h] [ebp-4Ch]
  _BYTE *v8; // [esp+1Ch] [ebp-48h]
  _DWORD *v9; // [esp+20h] [ebp-44h]
  _BYTE *v11; // [esp+2Ch] [ebp-38h]
  _DWORD *v12; // [esp+34h] [ebp-30h]
  _DWORD *v13; // [esp+3Ch] [ebp-28h]
  _BYTE *v14; // [esp+44h] [ebp-20h]
  _DWORD *v15; // [esp+4Ch] [ebp-18h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8019, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8020, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8021, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400032, 0);
  result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400033, 0);
  switch ( a2 )
  {
    case 0:
      word_16306E0 = 0;
      v15 = operator new(0x190u);
      if ( v15 )
        v9 = sub_5F5F50(v15);
      else
        v9 = 0;
      *(this + 129) = (int)v9;
      *(_DWORD *)(*(this + 129) + 4) = *(this + 1);
      sub_5EAF00(*(this + 129), 2400032);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 129) + 64))(*(this + 129));
      sub_5EAE80(2400032, 0, 329, 59000, 0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8019,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 129) + 116))(*(this + 129));
      *(_DWORD *)(*(this + 129) + 388) = 2;
      *(_DWORD *)(*(this + 129) + 392) = 10;
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 1, 30);
      break;
    case 1:
      v14 = operator new(0x2Cu);
      if ( v14 )
        v8 = sub_606E60(v14, 0, 0, 0, 0);
      else
        v8 = 0;
      sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 129), (void (__thiscall ***)(_DWORD, _DWORD))v8);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 2, 90);
      break;
    case 2:
      v13 = operator new(0x190u);
      if ( v13 )
        v7 = sub_5F5F50(v13);
      else
        v7 = 0;
      *(this + 130) = (int)v7;
      *(_DWORD *)(*(this + 130) + 4) = *(this + 1);
      sub_5EAF00(*(this + 130), 2400033);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 64))(*(this + 130));
      sub_5EAE80(2400033, 0, 0, 60000, 0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8020,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 116))(*(this + 130));
      v12 = operator new(0x1Cu);
      if ( v12 )
        v6 = sub_600B60(v12, *(this + 95));
      else
        v6 = 0;
      sub_5F5D50((_DWORD *)*(this + 130), (int)v6);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 3);
      break;
    case 3:
      sub_5F5D50((_DWORD *)*(this + 130), 0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8021,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 130) + 176))(*(this + 130), 44);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 4, 30);
      break;
    case 4:
      v3 = word_16306E0++;
      if ( v3 == 3 )
      {
        result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 5, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 130) + 176))(*(this + 130), 25);
        result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 3, 30);
      }
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 112))(*(this + 130));
      v11 = operator new(0x2Cu);
      if ( v11 )
        v5 = sub_606E60(v11, *(this + 95), 0, 340, 0);
      else
        v5 = 0;
      sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 129), (void (__thiscall ***)(_DWORD, _DWORD))v5);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 6);
      break;
    case 6:
      sub_5F45D0(0);
      result = sub_650550(dword_162EE80, v4, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67A950
// entry 0067a950  size 784  status ok
//======================================================================

int __thiscall sub_67A950(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-2Ch]
  _DWORD *v3; // [esp+8h] [ebp-28h]
  _DWORD *v5; // [esp+10h] [ebp-20h]
  _DWORD *v6; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]
  int j; // [esp+20h] [ebp-10h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8014, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8015, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8016, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8017, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8018, 0);
  for ( i = 0; i < 4; ++i )
  {
    sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, i + 2400034, 0);
    sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, i + 2400105, 0);
  }
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400042, 0);
  result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400043, 0);
  for ( j = 0; j < 4; ++j )
  {
    if ( !*(this + j + 131) )
    {
      v6 = operator new(0x190u);
      if ( v6 )
        v3 = sub_5F5F50(v6);
      else
        v3 = 0;
      *(this + j + 131) = v3;
    }
    *(_DWORD *)(*(this + j + 131) + 4) = *(this + 1);
    sub_5EAF00(*(this + j + 131), j + 2400034);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 131) + 64))(*(this + j + 131));
    sub_5EAE80(j + 2400034, 0, 0, 60000, 0);
    if ( !*(this + j + 135) )
    {
      v5 = operator new(0x190u);
      if ( v5 )
        v2 = sub_5F5F50(v5);
      else
        v2 = 0;
      *(this + j + 135) = v2;
    }
    *(_DWORD *)(*(this + j + 135) + 4) = *(this + 1);
    sub_5EAF00(*(this + j + 135), j + 2400038);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 135) + 64))(*(this + j + 135));
    sub_5EAE80(j + 2400038, 0, 0, 60001, 0);
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_67AC60
// entry 0067ac60  size 1991  status ok
//======================================================================

int __thiscall sub_67AC60(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *v4; // [esp+30h] [ebp-5Ch]
  _DWORD *v5; // [esp+34h] [ebp-58h]
  _DWORD *v6; // [esp+38h] [ebp-54h]
  _DWORD *v7; // [esp+3Ch] [ebp-50h]
  _DWORD *v8; // [esp+40h] [ebp-4Ch]
  _DWORD *v9; // [esp+44h] [ebp-48h]
  _DWORD *v11; // [esp+50h] [ebp-3Ch]
  _DWORD *v12; // [esp+58h] [ebp-34h]
  _DWORD *v13; // [esp+60h] [ebp-2Ch]
  _DWORD *v14; // [esp+68h] [ebp-24h]
  _DWORD *v15; // [esp+70h] [ebp-1Ch]
  _DWORD *v16; // [esp+78h] [ebp-14h]

  result = a2;
  switch ( a2 )
  {
    case 0:
      sub_67A950((_DWORD *)this);
      v16 = operator new(0x190u);
      if ( v16 )
        v9 = sub_5F5F50(v16);
      else
        v9 = 0;
      *(_DWORD *)(this + 556) = v9;
      *(_DWORD *)(*(_DWORD *)(this + 556) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 556), 2400042);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 556) + 64))(*(_DWORD *)(this + 556));
      sub_5EAE80(2400042, 0, 0, 59001, 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 556) + 116))(*(_DWORD *)(this + 556));
      v15 = operator new(0x190u);
      if ( v15 )
        v8 = sub_5F5F50(v15);
      else
        v8 = 0;
      *(_DWORD *)(this + 560) = v8;
      *(_DWORD *)(*(_DWORD *)(this + 560) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 560), 2400043);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 560) + 64))(*(_DWORD *)(this + 560));
      sub_5EAE80(2400043, 0, 0, 59000, 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 560) + 116))(*(_DWORD *)(this + 560));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 1, 30);
      break;
    case 1:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8014,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8015,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 540) + 116))(*(_DWORD *)(this + 540));
      v14 = operator new(0x1Cu);
      if ( v14 )
        v7 = sub_600B60(v14, *(_DWORD *)(this + 380));
      else
        v7 = 0;
      sub_5F5D50(*(_DWORD **)(this + 540), (int)v7);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 2);
      break;
    case 2:
      sub_5F44E0(8014, 1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 560) + 112))(*(_DWORD *)(this + 560));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 540) + 112))(*(_DWORD *)(this + 540));
      sub_5F5D50(*(_DWORD **)(this + 540), 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 524) + 116))(*(_DWORD *)(this + 524));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 3,
                 120);
      break;
    case 3:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8016,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 544) + 116))(*(_DWORD *)(this + 544));
      v13 = operator new(0x1Cu);
      if ( v13 )
        v6 = sub_600B60(v13, *(_DWORD *)(this + 380));
      else
        v6 = 0;
      sub_5F5D50(*(_DWORD **)(this + 544), (int)v6);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 4);
      break;
    case 4:
      sub_5F44E0(8016, 1);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8017,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 524) + 112))(*(_DWORD *)(this + 524));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 544) + 112))(*(_DWORD *)(this + 544));
      sub_5F5D50(*(_DWORD **)(this + 544), 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 528) + 116))(*(_DWORD *)(this + 528));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 5, 1);
      break;
    case 5:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8016,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 548) + 116))(*(_DWORD *)(this + 548));
      v12 = operator new(0x1Cu);
      if ( v12 )
        v5 = sub_600B60(v12, *(_DWORD *)(this + 380));
      else
        v5 = 0;
      sub_5F5D50(*(_DWORD **)(this + 548), (int)v5);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 6);
      break;
    case 6:
      sub_5F44E0(8016, 1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 528) + 112))(*(_DWORD *)(this + 528));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 548) + 112))(*(_DWORD *)(this + 548));
      sub_5F5D50(*(_DWORD **)(this + 548), 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 532) + 116))(*(_DWORD *)(this + 532));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 7, 1);
      break;
    case 7:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8018,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 552) + 116))(*(_DWORD *)(this + 552));
      v11 = operator new(0x1Cu);
      if ( v11 )
        v4 = sub_600B60(v11, *(_DWORD *)(this + 380));
      else
        v4 = 0;
      sub_5F5D50(*(_DWORD **)(this + 552), (int)v4);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 8);
      break;
    case 8:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 532) + 112))(*(_DWORD *)(this + 532));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 552) + 112))(*(_DWORD *)(this + 552));
      sub_5F5D50(*(_DWORD **)(this + 552), 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 536) + 116))(*(_DWORD *)(this + 536));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 9,
                 210);
      break;
    case 9:
      sub_5F45D0(0);
      result = sub_650550(dword_162EE80, v3, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67B450
// entry 0067b450  size 2691  status ok
//======================================================================

int __thiscall sub_67B450(int this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  _BYTE *v6; // [esp+10h] [ebp-B4h]
  _BYTE *v7; // [esp+14h] [ebp-B0h]
  _BYTE *v8; // [esp+18h] [ebp-ACh]
  _BYTE *v9; // [esp+1Ch] [ebp-A8h]
  _DWORD *v10; // [esp+20h] [ebp-A4h]
  _DWORD *v11; // [esp+24h] [ebp-A0h]
  _DWORD *v12; // [esp+28h] [ebp-9Ch]
  _BYTE *v13; // [esp+2Ch] [ebp-98h]
  _BYTE *v14; // [esp+30h] [ebp-94h]
  _BYTE *v15; // [esp+34h] [ebp-90h]
  _BYTE *v16; // [esp+38h] [ebp-8Ch]
  _DWORD *v17; // [esp+3Ch] [ebp-88h]
  _DWORD *v18; // [esp+40h] [ebp-84h]
  _BYTE *v20; // [esp+4Ch] [ebp-78h]
  _BYTE *v21; // [esp+54h] [ebp-70h]
  _BYTE *v22; // [esp+5Ch] [ebp-68h]
  _BYTE *v23; // [esp+64h] [ebp-60h]
  _DWORD *v24; // [esp+6Ch] [ebp-58h]
  _DWORD *v25; // [esp+74h] [ebp-50h]
  _DWORD *v26; // [esp+7Ch] [ebp-48h]
  _BYTE *v27; // [esp+84h] [ebp-40h]
  _BYTE *v28; // [esp+8Ch] [ebp-38h]
  _BYTE *v29; // [esp+94h] [ebp-30h]
  _BYTE *v30; // [esp+9Ch] [ebp-28h]
  _DWORD *v31; // [esp+A4h] [ebp-20h]
  _DWORD *v32; // [esp+ACh] [ebp-18h]
  int i; // [esp+B4h] [ebp-10h]
  int j; // [esp+B4h] [ebp-10h]
  int k; // [esp+B4h] [ebp-10h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8023, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8024, 0);
  for ( i = 0; i < 3; ++i )
    sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, i + 2400045, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400044, 0);
  result = a2;
  switch ( a2 )
  {
    case 0:
      word_16306E4 = 0;
      v32 = operator new(0x190u);
      if ( v32 )
        v18 = sub_5F5F50(v32);
      else
        v18 = 0;
      *(_DWORD *)(this + 576) = v18;
      *(_DWORD *)(*(_DWORD *)(this + 576) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 576), 2400044);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 576) + 64))(*(_DWORD *)(this + 576));
      sub_5EAE80(2400044, 0, 149, 60000, 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 576) + 116))(*(_DWORD *)(this + 576));
      *(_DWORD *)(*(_DWORD *)(this + 576) + 388) = 3;
      *(_DWORD *)(*(_DWORD *)(this + 576) + 392) = 10;
      for ( j = 0; j < 3; ++j )
      {
        v31 = operator new(0x190u);
        if ( v31 )
          v17 = sub_5F5F50(v31);
        else
          v17 = 0;
        *(_DWORD *)(this + 4 * j + 564) = v17;
        *(_DWORD *)(*(_DWORD *)(this + 4 * j + 564) + 4) = *(_DWORD *)(this + 4);
        sub_5EAF00(*(_DWORD *)(this + 4 * j + 564), j + 2400045);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 564) + 64))(*(_DWORD *)(this + 4 * j + 564));
        *(_DWORD *)(*(_DWORD *)(this + 4 * j + 564) + 388) = 3;
        *(_DWORD *)(*(_DWORD *)(this + 4 * j + 564) + 392) = 3;
      }
      sub_5EAE80(2400045, 0, -43, 60000, 0);
      sub_5EAE80(2400046, -43, 0, 59000, 0);
      sub_5EAE80(2400047, 43, 0, 59000, 0);
      for ( k = 0; k < 3; ++k )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 564) + 116))(*(_DWORD *)(this + 4 * k + 564));
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        *(_DWORD *)(this + 672),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 1, 30);
      break;
    case 1:
      v30 = operator new(0x2Cu);
      if ( v30 )
        v16 = sub_606E60(v30, 0, 0, 0, 0);
      else
        v16 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 576), (void (__thiscall ***)(_DWORD, _DWORD))v16);
      v29 = operator new(0x2Cu);
      if ( v29 )
        v15 = sub_606E60(v29, 0, 0, 0, 0);
      else
        v15 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 564), (void (__thiscall ***)(_DWORD, _DWORD))v15);
      v28 = operator new(0x2Cu);
      if ( v28 )
        v14 = sub_606E60(v28, 0, 0, 0, 0);
      else
        v14 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 568), (void (__thiscall ***)(_DWORD, _DWORD))v14);
      v27 = operator new(0x2Cu);
      if ( v27 )
        v13 = sub_606E60(v27, 0, 0, 0, 0);
      else
        v13 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 572), (void (__thiscall ***)(_DWORD, _DWORD))v13);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 2, 90);
      break;
    case 2:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8024,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      v26 = operator new(0x20u);
      if ( v26 )
        v12 = sub_600F30(v26, 3, *(_DWORD *)(this + 380));
      else
        v12 = 0;
      sub_5F5D50(*(_DWORD **)(this + 576), (int)v12);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 30);
      break;
    case 3:
      goto LABEL_43;
    case 4:
      v5 = word_16306E4++;
      if ( v5 == 13 )
      {
        result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(
                   *(_DWORD *)(this + 380),
                   5,
                   0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 176))(*(_DWORD *)(this + 576), 8);
        result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                   *(_DWORD *)(this + 380),
                   3,
                   10);
      }
      break;
    case 5:
      v24 = operator new(0x20u);
      if ( v24 )
        v10 = sub_600F90(v24, *(_DWORD *)(this + 380));
      else
        v10 = 0;
      sub_5F5D50(*(_DWORD **)(this + 576), (int)v10);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 6, 30);
      break;
    case 6:
      v23 = operator new(0x2Cu);
      if ( v23 )
        v9 = sub_606E60(v23, 0, 0, 149, 0);
      else
        v9 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 576), (void (__thiscall ***)(_DWORD, _DWORD))v9);
      v22 = operator new(0x2Cu);
      if ( v22 )
        v8 = sub_606E60(v22, 0, 0, -43, 0);
      else
        v8 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 564), (void (__thiscall ***)(_DWORD, _DWORD))v8);
      v21 = operator new(0x2Cu);
      if ( v21 )
        v7 = sub_606E60(v21, 0, -43, 0, 0);
      else
        v7 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 568), (void (__thiscall ***)(_DWORD, _DWORD))v7);
      v20 = operator new(0x2Cu);
      if ( v20 )
        v6 = sub_606E60(v20, 0, 43, 0, 0);
      else
        v6 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 572), (void (__thiscall ***)(_DWORD, _DWORD))v6);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 7, 6);
      break;
    case 7:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 8, 60);
      break;
    case 8:
      result = sub_650550(dword_162EE80, v2, 0);
      break;
    case 30:
      sub_5F5D50(*(_DWORD **)(this + 576), 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 176))(*(_DWORD *)(this + 576), 4);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 40,
                 10);
      break;
    case 40:
      v4 = word_16306E4++;
      if ( v4 == 4 )
      {
        result = (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 380) + 8))(
                   *(_DWORD *)(this + 380),
                   50,
                   0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 176))(*(_DWORD *)(this + 576), 5);
        result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                   *(_DWORD *)(this + 380),
                   30,
                   10);
      }
      break;
    case 50:
      v25 = operator new(0x20u);
      if ( v25 )
        v11 = sub_600F30(v25, 6, *(_DWORD *)(this + 380));
      else
        v11 = 0;
      sub_5F5D50(*(_DWORD **)(this + 576), (int)v11);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 3);
LABEL_43:
      sub_5F5D50(*(_DWORD **)(this + 576), 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 176))(*(_DWORD *)(this + 576), 7);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 4, 10);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67BF40
// entry 0067bf40  size 2294  status ok
//======================================================================

int __thiscall sub_67BF40(int *this, int a2)
{
  int result; // eax
  _DWORD *v3; // [esp+10h] [ebp-80h]
  _DWORD *v4; // [esp+14h] [ebp-7Ch]
  _DWORD *v5; // [esp+18h] [ebp-78h]
  _BYTE *v6; // [esp+1Ch] [ebp-74h]
  _BYTE *v7; // [esp+20h] [ebp-70h]
  _DWORD *v8; // [esp+24h] [ebp-6Ch]
  _BYTE *v9; // [esp+28h] [ebp-68h]
  _BYTE *v10; // [esp+2Ch] [ebp-64h]
  _DWORD *v11; // [esp+30h] [ebp-60h]
  _DWORD *v13; // [esp+3Ch] [ebp-54h]
  _DWORD *v14; // [esp+44h] [ebp-4Ch]
  _DWORD *v15; // [esp+4Ch] [ebp-44h]
  _BYTE *v16; // [esp+54h] [ebp-3Ch]
  _BYTE *v17; // [esp+5Ch] [ebp-34h]
  _DWORD *v18; // [esp+64h] [ebp-2Ch]
  _BYTE *v19; // [esp+6Ch] [ebp-24h]
  _BYTE *v20; // [esp+74h] [ebp-1Ch]
  _DWORD *v21; // [esp+7Ch] [ebp-14h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8022, 0);
  result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400048, 0);
  switch ( a2 )
  {
    case 0:
      v21 = operator new(0x190u);
      if ( v21 )
        v11 = sub_5F5F50(v21);
      else
        v11 = 0;
      *(this + 145) = (int)v11;
      *(_DWORD *)(*(this + 145) + 4) = *(this + 1);
      sub_5EAF00(*(this + 145), 2400048);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 145) + 64))(*(this + 145));
      sub_5EAE80(2400048, 39, 0, 60000, 0);
      *(_DWORD *)(*(this + 145) + 388) = 5;
      *(_DWORD *)(*(this + 145) + 392) = 7;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 145) + 116))(*(this + 145));
      v20 = operator new(0x2Cu);
      if ( v20 )
        v10 = sub_606E60(v20, 0, 0, 0, 0);
      else
        v10 = 0;
      sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 145), (void (__thiscall ***)(_DWORD, _DWORD))v10);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 1, 60);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 1);
      *(_DWORD *)(*(this + 145) + 388) = 2;
      *(_DWORD *)(*(this + 145) + 392) = 8;
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 2, 30);
      break;
    case 2:
      v19 = operator new(0x2Cu);
      if ( v19 )
        v9 = sub_606E60(v19, 0, 31, 0, 0);
      else
        v9 = 0;
      sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 145), (void (__thiscall ***)(_DWORD, _DWORD))v9);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        *(this + 168),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 3, 30);
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 22);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 72))(*(this + 145), 166);
      *(_DWORD *)(*(this + 145) + 388) = 4;
      v18 = operator new(0x20u);
      if ( v18 )
        v8 = sub_600F30(v18, 28, *(this + 95));
      else
        v8 = 0;
      sub_5F5D50((_DWORD *)*(this + 145), (int)v8);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 4);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 145) + 112))(*(this + 145));
      *(_DWORD *)(*(this + 145) + 388) = 6;
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 72))(*(this + 145), -18);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 145) + 116))(*(this + 145));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 5);
      v17 = operator new(0x2Cu);
      if ( v17 )
        v7 = sub_606E60(v17, 0, -26, 0, 0);
      else
        v7 = 0;
      sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 145), (void (__thiscall ***)(_DWORD, _DWORD))v7);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 5, 6);
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 2);
      dword_16306EC = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 145) + 76))(*(this + 145));
      dword_16306E8 = dword_16306EC - 8;
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 6, 4);
      break;
    case 6:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 3);
      if ( dword_16306E8 >= -156 )
      {
        v16 = operator new(0x2Cu);
        if ( v16 )
          v6 = sub_606E60(v16, 0, dword_16306E8, 0, 0);
        else
          v6 = 0;
        sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 145), (void (__thiscall ***)(_DWORD, _DWORD))v6);
        result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 5, 6);
      }
      else
      {
        result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 7, 6);
      }
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 72))(*(this + 145), -156);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 4);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 8, 6);
      break;
    case 8:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 6);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 9, 6);
      break;
    case 9:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 7);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 10, 15);
      break;
    case 10:
      v15 = operator new(0x20u);
      if ( v15 )
        v5 = sub_600F30(v15, 28, *(this + 95));
      else
        v5 = 0;
      sub_5F5D50((_DWORD *)*(this + 145), (int)v5);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 11);
      break;
    case 11:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 72))(*(this + 145), -293);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 22);
      v14 = operator new(0x20u);
      if ( v14 )
        v4 = sub_600F30(v14, 28, *(this + 95));
      else
        v4 = 0;
      sub_5F5D50((_DWORD *)*(this + 145), (int)v4);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 12);
      break;
    case 12:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 72))(*(this + 145), -430);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 145) + 176))(*(this + 145), 22);
      v13 = operator new(0x20u);
      if ( v13 )
        v3 = sub_600F30(v13, 28, *(this + 95));
      else
        v3 = 0;
      sub_5F5D50((_DWORD *)*(this + 145), (int)v3);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 13);
      break;
    case 13:
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 145) + 112))(*(this + 145));
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 14, 15);
      break;
    case 14:
      result = sub_650550(dword_162EE80, a2, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67C880
// entry 0067c880  size 2025  status ok
//======================================================================

int __thiscall sub_67C880(int this, int a2)
{
  int result; // eax
  char v3; // al
  char v4; // al
  int v5; // edx
  _DWORD *v6; // [esp+10h] [ebp-80h]
  _DWORD *v7; // [esp+14h] [ebp-7Ch]
  _DWORD *v8; // [esp+18h] [ebp-78h]
  _DWORD *v9; // [esp+1Ch] [ebp-74h]
  _DWORD *v10; // [esp+20h] [ebp-70h]
  _DWORD *v11; // [esp+24h] [ebp-6Ch]
  _DWORD *v12; // [esp+28h] [ebp-68h]
  _DWORD *v13; // [esp+2Ch] [ebp-64h]
  _DWORD *v14; // [esp+30h] [ebp-60h]
  _DWORD *v16; // [esp+3Ch] [ebp-54h]
  _DWORD *v17; // [esp+44h] [ebp-4Ch]
  _DWORD *v18; // [esp+4Ch] [ebp-44h]
  _DWORD *v19; // [esp+54h] [ebp-3Ch]
  _DWORD *v20; // [esp+5Ch] [ebp-34h]
  _DWORD *v21; // [esp+64h] [ebp-2Ch]
  _DWORD *v22; // [esp+6Ch] [ebp-24h]
  _DWORD *v23; // [esp+74h] [ebp-1Ch]
  _DWORD *v24; // [esp+7Ch] [ebp-14h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8025, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8026, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8027, 0);
  result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8028, 0);
  for ( dword_16306F0 = 0; dword_16306F0 < 5; ++dword_16306F0 )
    result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, dword_16306F0 + 2400049, 0);
  switch ( a2 )
  {
    case 0:
      for ( dword_16306F0 = 0; dword_16306F0 < 5; ++dword_16306F0 )
      {
        v24 = operator new(0x190u);
        if ( v24 )
          v14 = sub_5F5F50(v24);
        else
          v14 = 0;
        *(_DWORD *)(this + 4 * dword_16306F0 + 584) = v14;
        *(_DWORD *)(*(_DWORD *)(this + 4 * dword_16306F0 + 584) + 4) = *(_DWORD *)(this + 4);
        sub_5EAF00(*(_DWORD *)(this + 4 * dword_16306F0 + 584), dword_16306F0 + 2400049);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * dword_16306F0 + 584) + 64))(*(_DWORD *)(this + 4 * dword_16306F0 + 584));
      }
      sub_5EAE80(2400049, 0, 0, 60000, 0);
      sub_5EAE80(2400050, 0, 0, 55000, 0);
      sub_5EAE80(2400051, 30, 0, 50000, 0);
      sub_5EAE80(2400052, 30, 0, 50000, 0);
      sub_5EAE80(2400053, 0, 0, 50000, 0);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8025,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 584) + 116))(*(_DWORD *)(this + 584));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 588) + 116))(*(_DWORD *)(this + 588));
      v23 = operator new(0x20u);
      if ( v23 )
        v13 = sub_600F30(v23, 13, *(_DWORD *)(this + 380));
      else
        v13 = 0;
      sub_5F5D50(*(_DWORD **)(this + 584), (int)v13);
      v22 = operator new(0x20u);
      if ( v22 )
        v12 = sub_6010A0(v22, 0);
      else
        v12 = 0;
      sub_5F5D50(*(_DWORD **)(this + 588), (int)v12);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 1);
      break;
    case 1:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8026,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      v21 = operator new(0x20u);
      if ( v21 )
        v11 = sub_600F30(v21, 18, *(_DWORD *)(this + 380));
      else
        v11 = 0;
      sub_5F5D50(*(_DWORD **)(this + 584), (int)v11);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 592) + 116))(*(_DWORD *)(this + 592));
      v20 = operator new(0x20u);
      if ( v20 )
        v10 = sub_6010A0(v20, 0);
      else
        v10 = 0;
      sub_5F5D50(*(_DWORD **)(this + 592), (int)v10);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 2);
      break;
    case 2:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8027,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      v19 = operator new(0x20u);
      if ( v19 )
        v9 = sub_600F30(v19, 48, *(_DWORD *)(this + 380));
      else
        v9 = 0;
      sub_5F5D50(*(_DWORD **)(this + 584), (int)v9);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 596) + 116))(*(_DWORD *)(this + 596));
      v18 = operator new(0x20u);
      if ( v18 )
        v8 = sub_6010A0(v18, 0);
      else
        v8 = 0;
      sub_5F5D50(*(_DWORD **)(this + 596), (int)v8);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 3);
      break;
    case 3:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8028,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      v17 = operator new(0x20u);
      if ( v17 )
        v7 = sub_6010A0(v17, 0);
      else
        v7 = 0;
      sub_5F5D50(*(_DWORD **)(this + 584), (int)v7);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 600) + 116))(*(_DWORD *)(this + 600));
      v16 = operator new(0x20u);
      if ( v16 )
        v6 = sub_6010A0(v16, *(_DWORD *)(this + 380));
      else
        v6 = 0;
      sub_5F5D50(*(_DWORD **)(this + 600), (int)v6);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 4);
      break;
    case 4:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 5, 30);
      break;
    case 5:
      if ( sub_5EB610((_BYTE *)this) == 5 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 6);
      }
      else
      {
        v3 = sub_5EB610((_BYTE *)this);
        sub_5EB5D0((_BYTE *)this, v3 - 25);
        for ( dword_16306F0 = 0; dword_16306F0 < 5; ++dword_16306F0 )
        {
          v4 = sub_5EB610((_BYTE *)this);
          sub_5EB5D0(*(_BYTE **)(this + 4 * dword_16306F0 + 584), v4);
        }
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 5);
      }
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 28))(*(_DWORD *)(this + 380), 7);
      break;
    case 6:
      sub_5F45D0(0);
      result = sub_650550(dword_162EE80, v5, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67D090
// entry 0067d090  size 3677  status ok
//======================================================================

int __thiscall sub_67D090(int this, int a2)
{
  int result; // eax
  _BYTE *v3; // [esp+10h] [ebp-98h]
  _DWORD *v4; // [esp+14h] [ebp-94h]
  _DWORD *v5; // [esp+18h] [ebp-90h]
  _BYTE *v6; // [esp+1Ch] [ebp-8Ch]
  _BYTE *v7; // [esp+20h] [ebp-88h]
  _DWORD *v8; // [esp+24h] [ebp-84h]
  _DWORD *v9; // [esp+28h] [ebp-80h]
  _DWORD *v10; // [esp+2Ch] [ebp-7Ch]
  _BYTE *v11; // [esp+30h] [ebp-78h]
  _DWORD *v12; // [esp+34h] [ebp-74h]
  _DWORD *v13; // [esp+38h] [ebp-70h]
  _BYTE *v15; // [esp+44h] [ebp-64h]
  _DWORD *v16; // [esp+4Ch] [ebp-5Ch]
  _DWORD *v17; // [esp+54h] [ebp-54h]
  _BYTE *v18; // [esp+5Ch] [ebp-4Ch]
  _BYTE *v19; // [esp+64h] [ebp-44h]
  _DWORD *v20; // [esp+6Ch] [ebp-3Ch]
  _DWORD *v21; // [esp+74h] [ebp-34h]
  _DWORD *v22; // [esp+7Ch] [ebp-2Ch]
  _BYTE *v23; // [esp+84h] [ebp-24h]
  _DWORD *v24; // [esp+8Ch] [ebp-1Ch]
  _DWORD *v25; // [esp+94h] [ebp-14h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8029, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8030, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8031, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8032, 0);
  result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8033, 0);
  for ( dword_16306FC = 0; dword_16306FC < 4; ++dword_16306FC )
    result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, dword_16306FC + 2400054, 0);
  switch ( a2 )
  {
    case 0:
      for ( dword_16306FC = 0; dword_16306FC < 4; ++dword_16306FC )
      {
        v25 = operator new(0x190u);
        if ( v25 )
          v13 = sub_5F5F50(v25);
        else
          v13 = 0;
        *(_DWORD *)(this + 4 * dword_16306FC + 604) = v13;
        *(_DWORD *)(*(_DWORD *)(this + 4 * dword_16306FC + 604) + 4) = *(_DWORD *)(this + 4);
        sub_5EAF00(*(_DWORD *)(this + 4 * dword_16306FC + 604), dword_16306FC + 2400054);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * dword_16306FC + 604) + 64))(*(_DWORD *)(this + 4 * dword_16306FC + 604));
      }
      sub_5EAE80(2400054, 0, 0, 50000, 0);
      sub_5EAE80(2400055, -30, -2, 55000, 0);
      sub_5EAE80(2400056, 170, 0, 59000, 0);
      sub_5EAE80(2400057, -40, 0, 60000, 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 604) + 116))(*(_DWORD *)(this + 604));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 608) + 116))(*(_DWORD *)(this + 608));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 612) + 116))(*(_DWORD *)(this + 612));
      *(_DWORD *)(*(_DWORD *)(this + 612) + 388) = 6;
      *(_DWORD *)(*(_DWORD *)(this + 612) + 392) = 10;
      *(_DWORD *)(*(_DWORD *)(this + 616) + 388) = 6;
      *(_DWORD *)(*(_DWORD *)(this + 616) + 392) = 8;
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8029,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 1, 60);
      break;
    case 1:
      dword_16306F8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 612) + 76))(*(_DWORD *)(this + 612));
      dword_16306F4 = dword_16306F8 - 36;
      sub_5EAE80(2400056, dword_16306F8 - 36, 0, 59000, 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 1);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 2, 4);
      break;
    case 2:
      v24 = operator new(0x20u);
      if ( v24 )
        v12 = sub_600F30(v24, 5, *(_DWORD *)(this + 380));
      else
        v12 = 0;
      sub_5F5D50(*(_DWORD **)(this + 612), (int)v12);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 3);
      break;
    case 3:
      if ( dword_16306F4 >= -24 )
      {
        v23 = operator new(0x2Cu);
        if ( v23 )
          v11 = sub_606E60(v23, 0, dword_16306F4, 0, 0);
        else
          v11 = 0;
        sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 612), (void (__thiscall ***)(_DWORD, _DWORD))v11);
        result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                   *(_DWORD *)(this + 380),
                   1,
                   13);
      }
      else
      {
        result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                   *(_DWORD *)(this + 380),
                   4,
                   10);
      }
      break;
    case 4:
      v22 = operator new(0x20u);
      if ( v22 )
        v10 = sub_600F30(v22, 7, *(_DWORD *)(this + 380));
      else
        v10 = 0;
      sub_5F5D50(*(_DWORD **)(this + 612), (int)v10);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 5);
      break;
    case 5:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 6, 18);
      break;
    case 6:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 8);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 7, 10);
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 7);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 8, 10);
      break;
    case 8:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 8);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 616) + 116))(*(_DWORD *)(this + 616));
      v21 = operator new(0x20u);
      if ( v21 )
        v9 = sub_600F30(v21, 9, 0);
      else
        v9 = 0;
      sub_5F5D50(*(_DWORD **)(this + 616), (int)v9);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 9, 10);
      break;
    case 9:
      v20 = operator new(0x20u);
      if ( v20 )
        v8 = sub_600F30(v20, 13, *(_DWORD *)(this + 380));
      else
        v8 = 0;
      sub_5F5D50(*(_DWORD **)(this + 612), (int)v8);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 10);
      break;
    case 10:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 11,
                 10);
      break;
    case 11:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 14);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 616) + 176))(*(_DWORD *)(this + 616), 12);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 12,
                 30);
      break;
    case 12:
      *(_DWORD *)(*(_DWORD *)(this + 616) + 388) = 2;
      v19 = operator new(0x2Cu);
      if ( v19 )
        v7 = sub_606E60(v19, *(_DWORD *)(this + 380), -25, -9, 0);
      else
        v7 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 616), (void (__thiscall ***)(_DWORD, _DWORD))v7);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 15);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 13);
      break;
    case 13:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 14,
                 10);
      break;
    case 14:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8030,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 16);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 15,
                 10);
      break;
    case 15:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 15);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 16,
                 10);
      break;
    case 16:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8031,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 16);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 17,
                 10);
      break;
    case 17:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 15);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 18,
                 10);
      break;
    case 18:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8032,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 16);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 19,
                 10);
      break;
    case 19:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 15);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 20,
                 10);
      break;
    case 20:
      v18 = operator new(0x2Cu);
      if ( v18 )
        v6 = sub_606E60(v18, *(_DWORD *)(this + 380), -40, 0, 0);
      else
        v6 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 616), (void (__thiscall ***)(_DWORD, _DWORD))v6);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 14);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 21);
      break;
    case 21:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 22,
                 15);
      break;
    case 22:
      v17 = operator new(0x20u);
      if ( v17 )
        v5 = sub_6010A0(v17, 0);
      else
        v5 = 0;
      sub_5F5D50(*(_DWORD **)(this + 616), (int)v5);
      *(_DWORD *)(*(_DWORD *)(this + 612) + 392) = 4;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 15);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 23, 6);
      break;
    case 23:
      sub_5EAE80(2400057, -40, 0, 60000, 0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 24, 6);
      break;
    case 24:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8033,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 612) + 176))(*(_DWORD *)(this + 612), 17);
      *(_DWORD *)(*(_DWORD *)(this + 612) + 392) = 10;
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 25, 6);
      break;
    case 25:
      v16 = operator new(0x20u);
      if ( v16 )
        v4 = sub_6010A0(v16, *(_DWORD *)(this + 380));
      else
        v4 = 0;
      sub_5F5D50(*(_DWORD **)(this + 612), (int)v4);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 26,
                 -1);
      break;
    case 26:
      *(_DWORD *)(*(_DWORD *)(this + 612) + 388) = 2;
      v15 = operator new(0x2Cu);
      if ( v15 )
        v3 = sub_606E60(v15, *(_DWORD *)(this + 380), -300, 0, 0);
      else
        v3 = 0;
      sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 612), (void (__thiscall ***)(_DWORD, _DWORD))v3);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 27);
      break;
    case 27:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 28,
                 90);
      break;
    case 28:
      result = sub_650550(dword_162EE80, a2, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67DF70
// entry 0067df70  size 2270  status ok
//======================================================================

int __thiscall sub_67DF70(int this, int a2)
{
  int v2; // edx
  int result; // eax
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  _DWORD *v8; // [esp+10h] [ebp-6Ch]
  _DWORD *v9; // [esp+14h] [ebp-68h]
  _DWORD *v10; // [esp+18h] [ebp-64h]
  _DWORD *v11; // [esp+1Ch] [ebp-60h]
  _DWORD *v12; // [esp+20h] [ebp-5Ch]
  _DWORD *v13; // [esp+24h] [ebp-58h]
  _DWORD *v14; // [esp+28h] [ebp-54h]
  _DWORD *v16; // [esp+34h] [ebp-48h]
  _DWORD *v17; // [esp+3Ch] [ebp-40h]
  _DWORD *v18; // [esp+44h] [ebp-38h]
  _DWORD *v19; // [esp+4Ch] [ebp-30h]
  _DWORD *v20; // [esp+54h] [ebp-28h]
  _DWORD *v21; // [esp+5Ch] [ebp-20h]
  _DWORD *v22; // [esp+64h] [ebp-18h]
  int i; // [esp+6Ch] [ebp-10h]
  int j; // [esp+6Ch] [ebp-10h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8037, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8038, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8039, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8040, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400058, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400059, 0);
  result = a2;
  switch ( a2 )
  {
    case 0:
      v22 = operator new(0x190u);
      if ( v22 )
        v14 = sub_5F5F50(v22);
      else
        v14 = 0;
      *(_DWORD *)(this + 620) = v14;
      *(_DWORD *)(*(_DWORD *)(this + 620) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 620), 2400058);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 620) + 64))(*(_DWORD *)(this + 620));
      v21 = operator new(0x190u);
      if ( v21 )
        v13 = sub_5F5F50(v21);
      else
        v13 = 0;
      *(_DWORD *)(this + 624) = v13;
      *(_DWORD *)(*(_DWORD *)(this + 624) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 624), 2400059);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 624) + 64))(*(_DWORD *)(this + 624));
      sub_5EAE80(2400058, 0, 0, 55000, 0);
      sub_5EAE80(2400059, 0, 0, 60000, 0);
      sub_5EB5D0(*(_BYTE **)(this + 620), 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 620) + 116))(*(_DWORD *)(this + 620));
      *(_DWORD *)(*(_DWORD *)(this + 620) + 376) = 6;
      *(_DWORD *)(*(_DWORD *)(this + 624) + 376) = 8;
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8037,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 1, 6);
      break;
    case 1:
      if ( (unsigned __int8)sub_5EB610((_BYTE *)this) == 249 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 100);
      }
      else
      {
        v4 = sub_5EB610((_BYTE *)this);
        sub_5EB5D0((_BYTE *)this, v4 + 50);
        for ( i = 0; i < 5; ++i )
        {
          v5 = sub_5EB610((_BYTE *)this);
          sub_5EB5D0(*(_BYTE **)(this + 620), v5);
        }
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 1);
      }
      goto LABEL_15;
    case 2:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 3, 60);
      break;
    case 3:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8039,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 624) + 116))(*(_DWORD *)(this + 624));
      v19 = operator new(0x20u);
      if ( v19 )
        v11 = sub_6010A0(v19, *(_DWORD *)(this + 380));
      else
        v11 = 0;
      sub_5F5D50(*(_DWORD **)(this + 624), (int)v11);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 4);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 624) + 176))(*(_DWORD *)(this + 624), 0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 5, 6);
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 624) + 176))(*(_DWORD *)(this + 624), 8);
      v18 = operator new(0x20u);
      if ( v18 )
        v10 = sub_601030(v18, *(_DWORD *)(this + 380));
      else
        v10 = 0;
      sub_5F5D50(*(_DWORD **)(this + 624), (int)v10);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 6);
      break;
    case 6:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 624) + 116))(*(_DWORD *)(this + 624));
      v17 = operator new(0x20u);
      if ( v17 )
        v9 = sub_6010A0(v17, *(_DWORD *)(this + 380));
      else
        v9 = 0;
      sub_5F5D50(*(_DWORD **)(this + 624), (int)v9);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 7);
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 624) + 176))(*(_DWORD *)(this + 624), 0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 8, 6);
      break;
    case 8:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 624) + 176))(*(_DWORD *)(this + 624), 8);
      v16 = operator new(0x20u);
      if ( v16 )
        v8 = sub_601030(v16, *(_DWORD *)(this + 380));
      else
        v8 = 0;
      sub_5F5D50(*(_DWORD **)(this + 624), (int)v8);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 9);
      break;
    case 9:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 624) + 112))(*(_DWORD *)(this + 624));
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8040,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 10,
                 30);
      break;
    case 10:
      if ( sub_5EB610((_BYTE *)this) == 24 )
      {
        sub_5EB5D0(*(_BYTE **)(this + 620), 0);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 11);
      }
      else
      {
        v6 = sub_5EB610((_BYTE *)this);
        sub_5EB5D0((_BYTE *)this, v6 - 25);
        for ( j = 0; j < 5; ++j )
        {
          v7 = sub_5EB610((_BYTE *)this);
          sub_5EB5D0(*(_BYTE **)(this + 620), v7);
        }
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 10);
      }
LABEL_15:
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 28))(*(_DWORD *)(this + 380), 7);
      break;
    case 11:
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 12,
                 60);
      break;
    case 12:
      result = sub_650550(dword_162EE80, v2, 0);
      break;
    case 100:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8038,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5EB5D0(*(_BYTE **)(this + 620), 0xFFu);
      v20 = operator new(0x20u);
      if ( v20 )
        v12 = sub_6010A0(v20, *(_DWORD *)(this + 380));
      else
        v12 = 0;
      sub_5F5D50(*(_DWORD **)(this + 620), (int)v12);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 2);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67E900
// entry 0067e900  size 4020  status ok
//======================================================================

int __thiscall sub_67E900(int this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // [esp+10h] [ebp-A8h]
  _DWORD *v5; // [esp+14h] [ebp-A4h]
  _DWORD *v6; // [esp+18h] [ebp-A0h]
  _DWORD *v7; // [esp+1Ch] [ebp-9Ch]
  _DWORD *v8; // [esp+20h] [ebp-98h]
  _DWORD *v9; // [esp+24h] [ebp-94h]
  _DWORD *v10; // [esp+28h] [ebp-90h]
  _DWORD *v11; // [esp+2Ch] [ebp-8Ch]
  _DWORD *v12; // [esp+30h] [ebp-88h]
  _DWORD *v13; // [esp+34h] [ebp-84h]
  _DWORD *v14; // [esp+38h] [ebp-80h]
  _DWORD *v15; // [esp+3Ch] [ebp-7Ch]
  _DWORD *v17; // [esp+48h] [ebp-70h]
  _DWORD *v18; // [esp+50h] [ebp-68h]
  _DWORD *v19; // [esp+58h] [ebp-60h]
  _DWORD *v20; // [esp+60h] [ebp-58h]
  _DWORD *v21; // [esp+68h] [ebp-50h]
  _DWORD *v22; // [esp+70h] [ebp-48h]
  _DWORD *v23; // [esp+78h] [ebp-40h]
  _DWORD *v24; // [esp+80h] [ebp-38h]
  _DWORD *v25; // [esp+88h] [ebp-30h]
  _DWORD *v26; // [esp+90h] [ebp-28h]
  _DWORD *v27; // [esp+98h] [ebp-20h]
  _DWORD *v28; // [esp+A0h] [ebp-18h]
  int i; // [esp+A8h] [ebp-10h]
  int j; // [esp+A8h] [ebp-10h]

  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8034, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8035, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8036, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400060, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400061, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400062, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400063, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400064, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400066, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400067, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400065, 0);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400068, 0);
  result = a2;
  switch ( a2 )
  {
    case 0:
      for ( i = 0; i < 3; ++i )
      {
        v28 = operator new(0x190u);
        if ( v28 )
          v15 = sub_5F5F50(v28);
        else
          v15 = 0;
        *(_DWORD *)(this + 4 * i + 628) = v15;
        *(_DWORD *)(*(_DWORD *)(this + 4 * i + 628) + 4) = *(_DWORD *)(this + 4);
        sub_5EAF00(*(_DWORD *)(this + 4 * i + 628), i + 2400060);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 628) + 64))(*(_DWORD *)(this + 4 * i + 628));
      }
      for ( j = 0; j < 2; ++j )
      {
        v27 = operator new(0x190u);
        if ( v27 )
          v14 = sub_5F5F50(v27);
        else
          v14 = 0;
        *(_DWORD *)(this + 4 * j + 648) = v14;
        *(_DWORD *)(*(_DWORD *)(this + 4 * j + 648) + 4) = *(_DWORD *)(this + 4);
        sub_5EAF00(*(_DWORD *)(this + 4 * j + 648), j + 2400063);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 648) + 64))(*(_DWORD *)(this + 4 * j + 648));
        v26 = operator new(0x190u);
        if ( v26 )
          v13 = sub_5F5F50(v26);
        else
          v13 = 0;
        *(_DWORD *)(this + 4 * j + 640) = v13;
        *(_DWORD *)(*(_DWORD *)(this + 4 * j + 640) + 4) = *(_DWORD *)(this + 4);
        sub_5EAF00(*(_DWORD *)(this + 4 * j + 640), j + 2400066);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 640) + 64))(*(_DWORD *)(this + 4 * j + 640));
      }
      v25 = operator new(0x190u);
      if ( v25 )
        v12 = sub_5F5F50(v25);
      else
        v12 = 0;
      *(_DWORD *)(this + 656) = v12;
      *(_DWORD *)(*(_DWORD *)(this + 656) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 656), 2400065);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 656) + 64))(*(_DWORD *)(this + 656));
      v24 = operator new(0x190u);
      if ( v24 )
        v11 = sub_5F5F50(v24);
      else
        v11 = 0;
      *(_DWORD *)(this + 660) = v11;
      *(_DWORD *)(*(_DWORD *)(this + 660) + 4) = *(_DWORD *)(this + 4);
      sub_5EAF00(*(_DWORD *)(this + 660), 2400068);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 660) + 64))(*(_DWORD *)(this + 660));
      sub_5EAE80(2400060, 0, 0, 50000, 0);
      sub_5EAE80(2400061, 0, 0, 51000, 0);
      sub_5EAE80(2400062, 0, 0, 52000, 0);
      sub_5EAE80(2400066, 0, 0, 53000, 0);
      sub_5EAE80(2400067, 0, 0, 53000, 0);
      sub_5EAE80(2400063, 0, 0, 54000, 0);
      sub_5EAE80(2400064, 0, 0, 55000, 0);
      sub_5EAE80(2400065, 0, 0, 56000, 0);
      sub_5EAE80(2400068, 0, 0, 60000, 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 628) + 116))(*(_DWORD *)(this + 628));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 632) + 116))(*(_DWORD *)(this + 632));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 640) + 116))(*(_DWORD *)(this + 640));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 656) + 116))(*(_DWORD *)(this + 656));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 660) + 116))(*(_DWORD *)(this + 660));
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8034,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 1, 6);
      break;
    case 1:
      v23 = operator new(0x20u);
      if ( v23 )
        v10 = sub_600F30(v23, 11, 0);
      else
        v10 = 0;
      sub_5F5D50(*(_DWORD **)(this + 660), (int)v10);
      v22 = operator new(0x20u);
      if ( v22 )
        v9 = sub_600F30(v22, 11, *(_DWORD *)(this + 380));
      else
        v9 = 0;
      sub_5F5D50(*(_DWORD **)(this + 656), (int)v9);
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 2);
      break;
    case 2:
      v21 = operator new(0x20u);
      if ( v21 )
        v8 = sub_600F30(v21, 15, *(_DWORD *)(this + 380));
      else
        v8 = 0;
      sub_5F5D50(*(_DWORD **)(this + 660), (int)v8);
      v20 = operator new(0x20u);
      if ( v20 )
        v7 = sub_600F30(v20, 15, 0);
      else
        v7 = 0;
      sub_5F5D50(*(_DWORD **)(this + 656), (int)v7);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8035,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 3);
      goto LABEL_38;
    case 3:
LABEL_38:
      if ( CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 660)) == 15 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 640) + 112))(*(_DWORD *)(this + 640));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 644) + 116))(*(_DWORD *)(this + 644));
        v19 = operator new(0x20u);
        if ( v19 )
          v6 = sub_600F30(v19, 18, *(_DWORD *)(this + 380));
        else
          v6 = 0;
        sub_5F5D50(*(_DWORD **)(this + 656), (int)v6);
        v18 = operator new(0x20u);
        if ( v18 )
          v5 = sub_6010A0(v18, 0);
        else
          v5 = 0;
        sub_5F5D50(*(_DWORD **)(this + 660), (int)v5);
        result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 4);
      }
      else
      {
        result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 380) + 4))(*(_DWORD *)(this + 380), 3);
      }
      break;
    case 4:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        8036,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 112))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 116))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 116))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 5, 6);
      break;
    case 5:
      v17 = operator new(0x20u);
      if ( v17 )
        v4 = sub_6010A0(v17, 0);
      else
        v4 = 0;
      sub_5F5D50(*(_DWORD **)(this + 656), (int)v4);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 112))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 112))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 6, 15);
      break;
    case 6:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 116))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 112))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 116))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 7, 15);
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 112))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 112))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 8, 15);
      break;
    case 8:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 116))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 112))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 116))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(*(_DWORD *)(this + 380), 9, 15);
      break;
    case 9:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 112))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 112))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 10,
                 15);
      break;
    case 10:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 116))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 112))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 116))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 11,
                 15);
      break;
    case 11:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 112))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 112))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 12,
                 15);
      break;
    case 12:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 116))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 112))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 116))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 13,
                 15);
      break;
    case 13:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 112))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 112))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 14,
                 15);
      break;
    case 14:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 116))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 112))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 116))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 15,
                 15);
      break;
    case 15:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 652) + 112))(*(_DWORD *)(this + 652));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 116))(*(_DWORD *)(this + 648));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 636) + 112))(*(_DWORD *)(this + 636));
      result = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 380) + 8))(
                 *(_DWORD *)(this + 380),
                 16,
                 120);
      break;
    case 16:
      result = sub_650550(dword_162EE80, v2, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_67F900
// entry 0067f900  size 1682  status ok
//======================================================================

int __thiscall sub_67F900(int this)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  _DWORD *v10; // [esp+Ch] [ebp-54h]
  _DWORD *v11; // [esp+10h] [ebp-50h]
  _DWORD *v12; // [esp+14h] [ebp-4Ch]
  _DWORD *v13; // [esp+18h] [ebp-48h]
  _DWORD *v14; // [esp+1Ch] [ebp-44h]
  _DWORD *v16; // [esp+24h] [ebp-3Ch]
  _DWORD *v17; // [esp+2Ch] [ebp-34h]
  _DWORD *v18; // [esp+34h] [ebp-2Ch]
  _DWORD *v19; // [esp+3Ch] [ebp-24h]
  _DWORD *v20; // [esp+44h] [ebp-1Ch]
  int i; // [esp+4Ch] [ebp-14h]
  int j; // [esp+4Ch] [ebp-14h]
  int k; // [esp+4Ch] [ebp-14h]
  int m; // [esp+4Ch] [ebp-14h]
  int v25; // [esp+50h] [ebp-10h]

  for ( i = 0; i < 12; ++i )
  {
    if ( !*(_DWORD *)(this + 4 * i + 408) )
    {
      v20 = operator new(0x190u);
      if ( v20 )
        v14 = sub_5F5F50(v20);
      else
        v14 = 0;
      *(_DWORD *)(this + 4 * i + 408) = v14;
    }
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 408) + 4) = *(_DWORD *)(this + 4);
    sub_5EAF00(*(_DWORD *)(this + 4 * i + 408), i + 2400069);
    if ( sub_62FBF0(2) )
      v25 = sub_62FBF0(20) + 230;
    else
      v25 = 230 - sub_62FBF0(20);
    v1 = sub_5F8570(*((_DWORD **)dword_162EE84 + 5));
    v2 = sub_62FBF0(10);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 408) + 68))(
      *(_DWORD *)(this + 4 * i + 408),
      v25,
      v2 * 4 * i + v1);
    v3 = sub_62FBF0(20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 408) + 108))(
      *(_DWORD *)(this + 4 * i + 408),
      v3 + 1990);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 408) + 64))(*(_DWORD *)(this + 4 * i + 408));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 408) + 116))(*(_DWORD *)(this + 4 * i + 408));
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 408) + 376) = sub_62FBF0(15);
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 408) + 388) = 2 * sub_62FBF0(3) + 2;
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 408) + 392) = 30;
    v4 = sub_62FBF0(7);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 408) + 176))(*(_DWORD *)(this + 4 * i + 408), v4);
    v19 = operator new(0x1Cu);
    if ( v19 )
      v13 = sub_6012F0(v19);
    else
      v13 = 0;
    sub_5F5D50(*(_DWORD **)(this + 4 * i + 408), (int)v13);
  }
  for ( j = 0; j < 12; ++j )
  {
    if ( !*(_DWORD *)(this + 4 * j + 456) )
    {
      v18 = operator new(0x190u);
      if ( v18 )
        v12 = sub_5F5F50(v18);
      else
        v12 = 0;
      *(_DWORD *)(this + 4 * j + 456) = v12;
    }
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 456) + 4) = *(_DWORD *)(this + 4);
    sub_5EAF00(*(_DWORD *)(this + 4 * j + 456), j + 2400081);
    v5 = sub_62FC30(-150, 150);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * j + 456) + 72))(*(_DWORD *)(this + 4 * j + 456), v5);
    v6 = sub_62FBF0(20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * j + 456) + 108))(
      *(_DWORD *)(this + 4 * j + 456),
      v6 + 1990);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 456) + 64))(*(_DWORD *)(this + 4 * j + 456));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 456) + 116))(*(_DWORD *)(this + 4 * j + 456));
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 456) + 376) = sub_62FBF0(6) + 10;
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 456) + 388) = sub_62FBF0(3);
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 456) + 392) = sub_62FBF0(3);
  }
  for ( k = 0; k < 3; ++k )
  {
    if ( !*(_DWORD *)(this + 4 * k + 504) )
    {
      v17 = operator new(0x190u);
      if ( v17 )
        v11 = sub_5F5F50(v17);
      else
        v11 = 0;
      *(_DWORD *)(this + 4 * k + 504) = v11;
    }
    *(_DWORD *)(*(_DWORD *)(this + 4 * k + 504) + 4) = *(_DWORD *)(this + 4);
    sub_5EAF00(*(_DWORD *)(this + 4 * k + 504), 2400093);
    v7 = sub_62FBF0(20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 504) + 108))(
      *(_DWORD *)(this + 4 * k + 504),
      v7 + 1990);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 504) + 64))(*(_DWORD *)(this + 4 * k + 504));
    *(_DWORD *)(*(_DWORD *)(this + 4 * k + 504) + 392) = 30;
    v8 = sub_62FBF0(3);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 504) + 176))(*(_DWORD *)(this + 4 * k + 504), v8);
    v16 = operator new(0x1Cu);
    if ( v16 )
      v10 = sub_6012F0(v16);
    else
      v10 = 0;
    sub_5F5D50(*(_DWORD **)(this + 4 * k + 504), (int)v10);
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 80))(*(_DWORD *)(this + 504), -200);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 508) + 80))(*(_DWORD *)(this + 508), -350);
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 512) + 80))(*(_DWORD *)(this + 512), -500);
  for ( m = 0; m < 3; ++m )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 504) + 116))(*(_DWORD *)(this + 4 * m + 504));
  return result;
}


//======================================================================
// sub_67FFA0
// entry 0067ffa0  size 1233  status ok
//======================================================================

int __thiscall sub_67FFA0(int *this, int a2)
{
  int result; // eax
  signed int v3; // eax
  int v4; // eax
  signed int v5; // eax
  int v6; // eax
  char v7; // al
  char v8; // al
  _DWORD *v9; // [esp+14h] [ebp-58h]
  _DWORD *v10; // [esp+18h] [ebp-54h]
  _BYTE *v11; // [esp+1Ch] [ebp-50h]
  _BYTE *v12; // [esp+20h] [ebp-4Ch]
  _BYTE *v13; // [esp+24h] [ebp-48h]
  _DWORD *v15; // [esp+30h] [ebp-3Ch]
  _DWORD *v16; // [esp+38h] [ebp-34h]
  _BYTE *v17; // [esp+40h] [ebp-2Ch]
  _BYTE *v18; // [esp+48h] [ebp-24h]
  _BYTE *v19; // [esp+50h] [ebp-1Ch]
  int i; // [esp+5Ch] [ebp-10h]
  int j; // [esp+5Ch] [ebp-10h]
  int k; // [esp+5Ch] [ebp-10h]
  int m; // [esp+5Ch] [ebp-10h]
  int n; // [esp+5Ch] [ebp-10h]

  for ( i = 0; i < 12; ++i )
  {
    sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, i + 2400069, 0);
    sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, i + 2400081, 0);
  }
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 2400093, 0);
  result = sub_6044B0(*(void **)(dword_7960D8 + 24), 542523735, 8041, 0);
  switch ( a2 )
  {
    case 0:
      sub_67F900((int)this);
      result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 95) + 8))(*(this + 95), 1, 2);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 2);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        *(this + 168),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      for ( j = 0; j < 3; ++j )
      {
        *(_DWORD *)(*(this + j + 126) + 388) = sub_62FBF0(3) + 8;
        v19 = operator new(0x2Cu);
        if ( v19 )
          v13 = sub_606E60(v19, 0, 10, 490, 0);
        else
          v13 = 0;
        sub_5F6050(
          (void (__thiscall ****)(_DWORD, _DWORD))*(this + j + 126),
          (void (__thiscall ***)(_DWORD, _DWORD))v13);
      }
      for ( k = 0; k < 12; ++k )
      {
        v18 = operator new(0x2Cu);
        if ( v18 )
        {
          v3 = sub_5F8550(*((_DWORD **)dword_162EE84 + 5));
          v4 = sub_62FBF0(v3);
          v12 = sub_606E60(v18, 0, v4, -100, 0);
        }
        else
        {
          v12 = 0;
        }
        sub_5F6050(
          (void (__thiscall ****)(_DWORD, _DWORD))*(this + k + 102),
          (void (__thiscall ***)(_DWORD, _DWORD))v12);
        *(_DWORD *)(*(this + k + 102) + 388) = sub_62FBF0(4) + 4;
      }
      *(_DWORD *)(*(this + 113) + 388) = 12;
      v17 = operator new(0x2Cu);
      if ( v17 )
      {
        v5 = sub_5F8550(*((_DWORD **)dword_162EE84 + 5));
        v6 = sub_62FBF0(v5);
        v11 = sub_606E60(v17, *(this + 95), v6, -100, 0);
      }
      else
      {
        v11 = 0;
      }
      sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))*(this + 113), (void (__thiscall ***)(_DWORD, _DWORD))v11);
      v16 = operator new(0x1Cu);
      if ( v16 )
        v10 = sub_600A70(v16, 0);
      else
        v10 = 0;
      result = sub_5F5D50(this, (int)v10);
      for ( m = 0; m < 12; ++m )
      {
        v15 = operator new(0x20u);
        if ( v15 )
          v9 = sub_6010A0(v15, 0);
        else
          v9 = 0;
        sub_5F5D50((_DWORD *)*(this + m + 114), (int)v9);
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 4))(v9, *(this + m + 114), 1);
        result = m + 1;
      }
      break;
    case 2:
      if ( sub_5EB610(this) == 5 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 3);
      }
      else
      {
        v7 = sub_5EB610(this);
        sub_5EB5D0(this, v7 - 50);
        for ( n = 0; n < 12; ++n )
        {
          v8 = sub_5EB610(this);
          sub_5EB5D0((_BYTE *)*(this + n + 102), v8);
        }
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 4))(*(this + 95), 2);
      }
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 95) + 28))(*(this + 95), 5);
      break;
    case 3:
      result = sub_650550(dword_162EE80, a2, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_680490
// entry 00680490  size 1201  status ok
//======================================================================

int __fastcall sub_680490(int *a1, int a2, int a3)
{
  int result; // eax
  char v4; // al
  char v5; // al
  _DWORD *v6; // [esp+18h] [ebp-38h]
  _DWORD *v7; // [esp+1Ch] [ebp-34h]
  _DWORD *v8; // [esp+20h] [ebp-30h]
  _DWORD *v10; // [esp+2Ch] [ebp-24h]
  _DWORD *v11; // [esp+34h] [ebp-1Ch]
  _DWORD *v12; // [esp+3Ch] [ebp-14h]

  result = a3;
  switch ( a3 )
  {
    case 0:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1[95] + 4))(a1[95], 1);
      if ( a1[167] == 2400011
        || a1[167] == 2400009
        || a1[167] == 2400015
        || a1[167] == 2400014
        || a1[167] == 2400000
        || a1[167] == 2400001
        || a1[167] == 2400004
        || a1[167] == 2400005
        || a1[167] == 2400007
        || a1[167] == 2400008 )
      {
        (*(void (__thiscall **)(int *))(*a1 + 116))(a1);
        v12 = operator new(0x20u);
        if ( v12 )
          v8 = sub_6010A0(v12, a1[95]);
        else
          v8 = 0;
        sub_5F5D50(a1, (int)v8);
      }
      if ( a1[167] == 2400013 )
      {
        v11 = operator new(0x1Cu);
        if ( v11 )
          v7 = sub_600A70(v11, 0);
        else
          v7 = 0;
        sub_5F5D50(a1, (int)v7);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1[95] + 28))(a1[95], 200);
      }
      if ( a1[167] == 2400010 )
      {
        v10 = operator new(0x20u);
        if ( v10 )
          v6 = sub_6010A0(v10, a1[95]);
        else
          v6 = 0;
        sub_5F5D50(a1, (int)v6);
      }
      result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 a1[168],
                 0,
                 0,
                 5,
                 1,
                 1.0,
                 0.5,
                 0);
      break;
    case 1:
      if ( a1[167] == 2400000 || a1[167] == 2400001 || a1[167] == 2400005 || a1[167] == 2400098 )
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1[95] + 8))(a1[95], 3, 0);
      if ( a1[167] == 2400004 || a1[167] == 2400007 )
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1[95] + 8))(a1[95], 3, 60);
      if ( a1[167] == 2400011 || a1[167] == 2400009 )
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1[95] + 8))(a1[95], 2, 30);
      if ( a1[167] == 2400013
        || a1[167] == 2400012
        || (result = (int)a1, a1[167] == 2400015)
        || a1[167] == 2400014
        || a1[167] == 2400008 )
      {
        result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1[95] + 8))(a1[95], 2, 2);
      }
      if ( a1[167] == 2400010 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)a1[101] + 116))(a1[101]);
        result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1[95] + 8))(a1[95], 2, 200);
      }
      break;
    case 2:
      if ( sub_5EB610(a1) == 5 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1[95] + 4))(a1[95], 3);
      }
      else
      {
        v4 = sub_5EB610(a1);
        sub_5EB5D0(a1, v4 - 50);
        if ( a1[101] )
        {
          v5 = sub_5EB610(a1);
          sub_5F0AE0(a1[101], v5);
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1[95] + 4))(a1[95], 2);
      }
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1[95] + 28))(a1[95], 2);
      break;
    case 3:
      result = sub_650550(dword_162EE80, a2, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_680960
// entry 00680960  size 356  status ok
//======================================================================

int __thiscall sub_680960(int *this)
{
  int result; // eax

  switch ( *(_DWORD *)(*(_DWORD *)(dword_162EE80 + 48) + 668) )
  {
    case 0x249F20:
      result = sub_67A370(*(int **)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F2A:
      result = sub_67AC60(*(_DWORD *)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F2C:
    case 0x249F5E:
      result = sub_67B450(*(_DWORD *)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F30:
      result = sub_67BF40(*(int **)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F31:
    case 0x249F64:
      result = sub_67C880(*(_DWORD *)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F36:
      result = sub_67D090(*(_DWORD *)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F3A:
      result = sub_67DF70(*(_DWORD *)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F3C:
      result = sub_67E900(*(_DWORD *)(dword_162EE80 + 48), *(this + 5));
      break;
    case 0x249F45:
      result = sub_67FFA0(*(int **)(dword_162EE80 + 48), *(this + 5));
      break;
    default:
      result = sub_680490(*(int **)(dword_162EE80 + 48), dword_162EE80, *(this + 5));
      break;
  }
  return result;
}


//======================================================================
// sub_680B70
// entry 00680b70  size 154  status ok
//======================================================================

int __thiscall sub_680B70(int this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch]
  void *v5; // [esp+Ch] [ebp-14h]

  sub_625F10((char *)this);
  *(_DWORD *)this = &HelpGroupBox::`vftable';
  v5 = operator new(0x1D0u);
  if ( v5 )
  {
    sub_5EC5A0(v5);
    v3 = v1;
  }
  else
  {
    v3 = 0;
  }
  *(_DWORD *)(this + 108) = v3;
  return this;
}


//======================================================================
// sub_680C10
// entry 00680c10  size 133  status ok
//======================================================================

void __thiscall sub_680C10(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&HelpGroupBox::`vftable';
  if ( *(this + 27) )
    (***(this + 27))(*(this + 27), 1);
  sub_625FE0((int)this);
}


//======================================================================
// sub_680CA0
// entry 00680ca0  size 150  status ok
//======================================================================

int __thiscall sub_680CA0(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char *Str,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        struct CPaneDivider *a21)
{
  sub_6260E0((CPaneContainer *)this, Str, a14, a5, a6, a2, a3, a4, a7, a8, a9, a10, a11, a12, a20, a21);
  *(_DWORD *)(*(_DWORD *)(this + 108) + 4) = *(_DWORD *)(this + 4);
  return sub_5EC8F0(*(void **)(this + 108), (int)&Source, a19, a17, a18, a15 + a2, a16 + a3, a4 + 1, 5, -1);
}


//======================================================================
// sub_680D40
// entry 00680d40  size 40  status ok
//======================================================================

int __thiscall sub_680D40(_DWORD **this)
{
  sub_6266E0((int)this);
  return (*(int (__thiscall **)(_DWORD))(**(this + 27) + 116))(*(this + 27));
}


//======================================================================
// sub_680D70
// entry 00680d70  size 40  status ok
//======================================================================

int __thiscall sub_680D70(CWnd *this)
{
  sub_626760(this);
  return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 27) + 112))(*((_DWORD *)this + 27));
}


//======================================================================
// sub_680E90
// entry 00680e90  size 135  status ok
//======================================================================

char sub_680E90()
{
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 524))(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 540))(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 532))(dword_162EE84);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 20))(dword_7960D8);
  if ( !sub_631FE0(dword_162EE84) )
    return 0;
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 156))(dword_162EE84);
  return 1;
}


//======================================================================
// sub_680F20
// entry 00680f20  size 110  status ok
//======================================================================

char sub_680F20()
{
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 544))(dword_162EE84);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 20))(dword_7960D8);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 528))(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 548))(dword_162EE84);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 20))(dword_7960D8);
  return 1;
}


//======================================================================
// sub_680F90
// entry 00680f90  size 56  status ok
//======================================================================

int sub_680F90()
{
  sub_674C70();
  sub_6664A0();
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 4))(dword_162EE84);
  sub_6664D0();
  sub_5F3100(dword_162EE84);
  sub_6664E0();
  return 0;
}


//======================================================================
// sub_680FD0
// entry 00680fd0  size 612  status ok
//======================================================================

char sub_680FD0()
{
  int v1; // [esp+18h] [ebp-18h]
  _DWORD *v2; // [esp+1Ch] [ebp-14h]
  _DWORD *v3; // [esp+20h] [ebp-10h]
  int j; // [esp+24h] [ebp-Ch]
  int i; // [esp+28h] [ebp-8h]
  char v6[4]; // [esp+28h] [ebp-8h]
  char v7; // [esp+2Fh] [ebp-1h]

  v7 = 0;
  if ( dword_162EE84 )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 148))(dword_162EE84);
    v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 152))(dword_162EE84);
    if ( dword_162EE84 )
      (**(void (__thiscall ***)(Concurrency::details::ContextBase *, int))dword_162EE84)(dword_162EE84, 1);
  }
  if ( dword_7960D8 )
  {
    if ( byte_163184C )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 12))(dword_7960D8);
      sub_6664F0();
    }
    if ( dword_7960D8 )
      (**(void (__thiscall ***)(int, int))dword_7960D8)(dword_7960D8, 1);
  }
  if ( v7 )
  {
    sub_5E9F00(0x1F4u);
    sub_62FDE0("Maximum Objects Allocated from Blocks  -- %i\r\n", *(_DWORD *)dword_1630BC0);
    for ( i = 0; i <= 25; ++i )
      sub_62FDE0("%3i\t--\tRequests %5i\tMaxObjs %5i\r\n", i, dword_1631078[i], dword_1630BC8[i]);
    while ( i < dword_78142C )
    {
      sub_62FDE0("%3i\t--\tRequests %5i\r\n", i, dword_1631078[i]);
      ++i;
    }
    sub_5E9F00(0x1F4u);
    sub_62FDE0("***MEMORY LEAKS***\r\n");
    for ( j = 0; j < dword_1631848; ++j )
    {
      v3 = (_DWORD *)dword_163152C[2 * j];
      v1 = 0x10000 / dword_1631528[2 * j];
      *(_DWORD *)v6 = 0;
      while ( *(int *)v6 < v1 )
      {
        if ( *v3 == -1431655766 )
        {
          v2 = v3;
          if ( v3[1] == -1412584499 )
          {
            do
              ++v2;
            while ( *v2 != -1431655766 );
          }
          sub_62FDE0(
            "Memory Leak:\tAllocNumber %5i\tSize %5i\tPtr 0x%lx\tBase 0x%lx\r\n",
            *((unsigned __int16 *)v2 + 2),
            v2[2],
            v2 + 4,
            v2[3]);
        }
        v3 = (_DWORD *)((char *)v3 + dword_1631528[2 * j]);
        ++*(_DWORD *)v6;
      }
    }
    sub_5E9F00(0x1F4u);
  }
  return 1;
}


//======================================================================
// sub_6817A0
// entry 006817a0  size 93  status ok
//======================================================================

int __cdecl sub_6817A0(_DWORD *a1)
{
  _DWORD *v1; // eax

  if ( !a1 )
    return -2;
  v1 = (_DWORD *)a1[7];
  if ( !v1 )
    return -2;
  v1[7] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  a1[12] = 1;
  *v1 = 0;
  v1[1] = 0;
  v1[3] = 0;
  v1[8] = 0;
  v1[10] = 0;
  v1[11] = 0;
  v1[12] = 0;
  v1[14] = 0;
  v1[15] = 0;
  v1[5] = 0x8000;
  v1[27] = v1 + 332;
  v1[20] = v1 + 332;
  v1[19] = v1 + 332;
  return 0;
}


//======================================================================
// sub_681800
// entry 00681800  size 203  status ok
//======================================================================

int __cdecl sub_681800(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  bool v4; // zf
  _DWORD *v5; // eax
  int v7; // ecx

  if ( !a3 || *a3 != 49 || a4 != 56 )
    return -6;
  if ( a1 )
  {
    v4 = a1[8] == 0;
    a1[6] = 0;
    if ( v4 )
    {
      a1[8] = sub_683040;
      a1[10] = 0;
    }
    if ( !a1[9] )
      a1[9] = sub_683060;
    v5 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[10], 1, 9520);
    if ( !v5 )
      return -4;
    v7 = a2;
    a1[7] = v5;
    if ( a2 >= 0 )
    {
      v5[2] = (a2 >> 4) + 1;
      if ( a2 < 48 )
        v7 = a2 & 0xF;
    }
    else
    {
      v5[2] = 0;
      v7 = -a2;
    }
    if ( (unsigned int)(v7 - 8) <= 7 )
    {
      v5[9] = v7;
      v5[13] = 0;
      return sub_6817A0(a1);
    }
    ((void (__cdecl *)(_DWORD, _DWORD *))a1[9])(a1[10], v5);
    a1[7] = 0;
  }
  return -2;
}


//======================================================================
// sub_6818D0
// entry 006818d0  size 26  status ok
//======================================================================

int __cdecl sub_6818D0(_DWORD *a1, _BYTE *a2, int a3)
{
  return sub_681800(a1, 15, a2, a3);
}


//======================================================================
// sub_6818F0
// entry 006818f0  size 29  status ok
//======================================================================

_DWORD *__usercall sub_6818F0@<eax>(_DWORD *result@<eax>)
{
  result[19] = "`\a";
  result[21] = 9;
  result[20] = &unk_6E2B50;
  result[22] = 5;
  return result;
}


//======================================================================
// sub_681910
// entry 00681910  size 233  status ok
//======================================================================

int __usercall sub_681910@<eax>(int a1@<eax>, int a2@<ebx>)
{
  int v2; // esi
  int v4; // eax
  int v6; // ecx
  size_t v7; // edi
  size_t v8; // eax
  int v9; // eax
  size_t v10; // ebp
  size_t v11; // edi
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v2 = *(_DWORD *)(a2 + 28);
  if ( !*(_DWORD *)(v2 + 52) )
  {
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(a2 + 32))(*(_DWORD *)(a2 + 40), 1 << *(_DWORD *)(v2 + 36), 1);
    *(_DWORD *)(v2 + 52) = v4;
    if ( !v4 )
      return 1;
  }
  if ( !*(_DWORD *)(v2 + 40) )
  {
    v6 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 40) = 1 << v6;
  }
  v7 = a1 - *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(v2 + 40);
  if ( v7 < v8 )
  {
    v10 = v8 - *(_DWORD *)(v2 + 48);
    if ( v10 > v7 )
      v10 = v7;
    memcpy((void *)(*(_DWORD *)(v2 + 48) + *(_DWORD *)(v2 + 52)), (const void *)(*(_DWORD *)(a2 + 12) - v7), v10);
    v11 = v7 - v10;
    if ( v11 )
    {
      memcpy(*(void **)(v2 + 52), (const void *)(*(_DWORD *)(a2 + 12) - v11), v11);
      v12 = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(v2 + 48) = v11;
      *(_DWORD *)(v2 + 44) = v12;
      return 0;
    }
    else
    {
      *(_DWORD *)(v2 + 48) += v10;
      v13 = *(_DWORD *)(v2 + 40);
      if ( *(_DWORD *)(v2 + 48) == v13 )
        *(_DWORD *)(v2 + 48) = 0;
      v14 = *(_DWORD *)(v2 + 44);
      if ( v14 < v13 )
        *(_DWORD *)(v2 + 44) = v10 + v14;
      return 0;
    }
  }
  else
  {
    memcpy(*(void **)(v2 + 52), (const void *)(*(_DWORD *)(a2 + 12) - v8), *(_DWORD *)(v2 + 40));
    v9 = *(_DWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = v9;
    return 0;
  }
}


//======================================================================
// sub_681A00
// entry 00681a00  size 5478  status ok
//======================================================================

int __cdecl sub_681A00(int a1, int a2)
{
  int *v2; // edi
  unsigned int v3; // edx
  unsigned int v4; // ebx
  unsigned __int8 *v5; // ebp
  int v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  int *v14; // eax
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
  size_t v26; // eax
  int v27; // ecx
  unsigned int v28; // edx
  int v29; // eax
  size_t v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // eax
  size_t v36; // eax
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  unsigned __int16 v46; // ax
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  char v51; // cl
  unsigned int v52; // ebx
  unsigned int v53; // esi
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  size_t v57; // eax
  int v58; // eax
  int v59; // ecx
  unsigned int v60; // ebx
  char v61; // al
  unsigned int v62; // eax
  int v63; // ecx
  bool v64; // cc
  int v65; // eax
  int v66; // eax
  unsigned int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // ecx
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  unsigned int v76; // ebx
  int v77; // eax
  int v78; // eax
  unsigned int v79; // ebx
  __int16 v80; // ax
  int v81; // ecx
  int v82; // eax
  void *v83; // ecx
  int v84; // edx
  unsigned int v85; // eax
  size_t v86; // eax
  int v87; // eax
  int v88; // eax
  unsigned int v89; // eax
  int v90; // eax
  int v91; // ecx
  size_t v92; // eax
  int v93; // eax
  int v94; // eax
  unsigned int v95; // eax
  int v96; // eax
  int v97; // ecx
  unsigned int v98; // eax
  size_t v99; // eax
  size_t v100; // ecx
  int v101; // ecx
  char *v102; // ecx
  int v103; // ecx
  _BYTE *v104; // eax
  char v105; // cl
  bool v106; // zf
  char *v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  unsigned __int16 v112; // cx
  int v113; // eax
  int result; // eax
  unsigned int v115; // ebp
  int v116; // ebx
  int v117; // eax
  int v118; // [esp-1Ch] [ebp-4Ch]
  int v119; // [esp-18h] [ebp-48h]
  char *v120; // [esp-14h] [ebp-44h]
  unsigned int v121; // [esp+4h] [ebp-2Ch]
  size_t Size; // [esp+8h] [ebp-28h]
  size_t Sizea; // [esp+8h] [ebp-28h]
  size_t Sizeb; // [esp+8h] [ebp-28h]
  size_t Sizec; // [esp+8h] [ebp-28h]
  size_t Sized; // [esp+8h] [ebp-28h]
  size_t Sizee; // [esp+8h] [ebp-28h]
  size_t Sizef; // [esp+8h] [ebp-28h]
  size_t Sizeg; // [esp+8h] [ebp-28h]
  size_t Sizeh; // [esp+8h] [ebp-28h]
  size_t Sizei; // [esp+8h] [ebp-28h]
  size_t Sizej; // [esp+8h] [ebp-28h]
  size_t v133; // [esp+Ch] [ebp-24h]
  size_t v134; // [esp+Ch] [ebp-24h]
  char v135; // [esp+Eh] [ebp-22h]
  unsigned int v136; // [esp+10h] [ebp-20h]
  unsigned int v137; // [esp+14h] [ebp-1Ch] BYREF
  int v138; // [esp+18h] [ebp-18h]
  void *v139; // [esp+1Ch] [ebp-14h]
  int v140; // [esp+20h] [ebp-10h]
  int v141; // [esp+24h] [ebp-Ch]
  unsigned int v142; // [esp+28h] [ebp-8h]
  unsigned int v143; // [esp+2Ch] [ebp-4h]

  if ( !a1 )
    return -2;
  v2 = *(int **)(a1 + 28);
  if ( !v2 || !*(_DWORD *)(a1 + 12) || !*(_DWORD *)a1 && *(_DWORD *)(a1 + 4) )
    return -2;
  if ( *v2 == 11 )
    *v2 = 12;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = v2[14];
  v5 = *(unsigned __int8 **)a1;
  v139 = *(void **)(a1 + 12);
  v6 = *v2;
  v7 = v2[15];
  v136 = *(_DWORD *)(a1 + 16);
  v121 = v3;
  v135 = BYTE2(v4);
  v143 = v3;
  v140 = v136;
  v141 = 0;
  while ( 2 )
  {
    switch ( v6 )
    {
      case 0:
        if ( !v2[2] )
        {
          *v2 = 12;
          goto LABEL_294;
        }
        for ( ; v7 < 0x10; v135 = BYTE2(v4) )
        {
          if ( !v3 )
            goto LABEL_302;
          v8 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v8;
          v121 = v3;
        }
        if ( (v2[2] & 2) != 0 && v4 == 35615 )
        {
          v2[6] = sub_683F40(0, 0, 0);
          LOWORD(v137) = -29921;
          v9 = sub_683F40(v2[6], &v137, 2);
          v3 = v121;
          v4 = 0;
          v2[6] = v9;
          v135 = 0;
          v7 = 0;
          *v2 = 1;
          goto LABEL_294;
        }
        v10 = v2[8];
        v2[4] = 0;
        if ( v10 )
          *(_DWORD *)(v10 + 48) = -1;
        if ( (v2[2] & 1) == 0 || ((v4 >> 8) + ((unsigned __int8)v4 << 8)) % 0x1F )
        {
          *(_DWORD *)(a1 + 24) = "incorrect header check";
          v3 = v121;
          goto LABEL_293;
        }
        if ( (v4 & 0xF) != 8 )
        {
          v3 = v121;
          *(_DWORD *)(a1 + 24) = "unknown compression method";
          goto LABEL_293;
        }
        v4 >>= 4;
        v11 = (v4 & 0xF) + 8;
        v7 -= 4;
        v135 = BYTE2(v4);
        if ( v11 > v2[9] )
        {
          v3 = v121;
          *(_DWORD *)(a1 + 24) = "invalid window size";
          goto LABEL_293;
        }
        v2[5] = 1 << v11;
        v12 = sub_683A20(0, 0, 0);
        v3 = v121;
        v2[6] = v12;
        *(_DWORD *)(a1 + 48) = v12;
        *v2 = ~BYTE1(v4) & 2 | 9;
        v4 = 0;
        v135 = 0;
        v7 = 0;
        goto LABEL_294;
      case 1:
        if ( v7 >= 0x10 )
          goto LABEL_31;
        do
        {
          if ( !v3 )
            goto LABEL_302;
          v13 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v13;
          v121 = v3;
          v135 = BYTE2(v4);
        }
        while ( v7 < 0x10 );
LABEL_31:
        v2[4] = v4;
        if ( (_BYTE)v4 != 8 )
        {
          *(_DWORD *)(a1 + 24) = "unknown compression method";
          goto LABEL_293;
        }
        if ( (v4 & 0xE000) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "unknown header flags set";
          goto LABEL_293;
        }
        v14 = (int *)v2[8];
        if ( v14 )
          *v14 = (v4 >> 8) & 1;
        if ( (v2[4] & 0x200) != 0 )
        {
          LOBYTE(v137) = 8;
          BYTE1(v137) = BYTE1(v4);
          v15 = sub_683F40(v2[6], &v137, 2);
          v3 = v121;
          v2[6] = v15;
        }
        v4 = 0;
        v7 = 0;
        *v2 = 2;
        do
        {
LABEL_41:
          if ( !v3 )
            goto LABEL_302;
          v16 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v16;
          v121 = v3;
        }
        while ( v7 < 0x20 );
LABEL_43:
        v17 = v2[8];
        if ( v17 )
          *(_DWORD *)(v17 + 4) = v4;
        if ( (v2[4] & 0x200) != 0 )
        {
          v137 = v4;
          v18 = sub_683F40(v2[6], &v137, 4);
          v3 = v121;
          v2[6] = v18;
        }
        v4 = 0;
        v7 = 0;
        *v2 = 3;
        do
        {
LABEL_49:
          if ( !v3 )
            goto LABEL_302;
          v19 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v19;
          v121 = v3;
        }
        while ( v7 < 0x10 );
LABEL_51:
        v20 = v2[8];
        if ( v20 )
        {
          *(_DWORD *)(v20 + 8) = (unsigned __int8)v4;
          *(_DWORD *)(v2[8] + 12) = v4 >> 8;
        }
        if ( (v2[4] & 0x200) != 0 )
        {
          LOWORD(v137) = v4;
          v21 = sub_683F40(v2[6], &v137, 2);
          v3 = v121;
          v2[6] = v21;
        }
        v4 = 0;
        v135 = 0;
        v7 = 0;
        *v2 = 4;
LABEL_56:
        if ( (v2[4] & 0x400) != 0 )
        {
          if ( v7 < 0x10 )
          {
            while ( v3 )
            {
              v22 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v22;
              v121 = v3;
              if ( v7 >= 0x10 )
                goto LABEL_60;
            }
            goto LABEL_302;
          }
LABEL_60:
          v23 = v2[8];
          v2[16] = v4;
          if ( v23 )
            *(_DWORD *)(v23 + 20) = v4;
          if ( (v2[4] & 0x200) != 0 )
          {
            LOWORD(v137) = v4;
            v24 = sub_683F40(v2[6], &v137, 2);
            v3 = v121;
            v2[6] = v24;
          }
          v4 = 0;
          v135 = 0;
          v7 = 0;
        }
        else
        {
          v25 = v2[8];
          if ( v25 )
            *(_DWORD *)(v25 + 16) = 0;
        }
        *v2 = 5;
LABEL_68:
        if ( (v2[4] & 0x400) != 0 )
        {
          v26 = v2[16];
          Size = v26;
          if ( v26 > v3 )
          {
            v26 = v3;
            Size = v3;
          }
          if ( v26 )
          {
            v27 = v2[8];
            if ( v27 )
            {
              v142 = *(_DWORD *)(v27 + 16);
              if ( v142 )
              {
                v28 = *(_DWORD *)(v2[8] + 24);
                v138 = *(_DWORD *)(v2[8] + 20) - v2[16];
                if ( v26 + v138 > v28 )
                  v26 = v28 - v138;
                memcpy((void *)(v138 + v142), v5, v26);
                v26 = Size;
                v3 = v121;
              }
            }
            if ( (v2[4] & 0x200) != 0 )
            {
              v29 = sub_683F40(v2[6], v5, Size);
              v3 = v121;
              v2[6] = v29;
              v26 = Size;
            }
            v3 -= v26;
            v5 += v26;
            v2[16] -= v26;
            v121 = v3;
          }
          if ( v2[16] )
            goto LABEL_302;
        }
        v2[16] = 0;
        *v2 = 6;
LABEL_82:
        if ( (v2[4] & 0x800) != 0 )
        {
          if ( !v3 )
            goto LABEL_302;
          v30 = 0;
          do
          {
            v31 = v5[v30];
            Sizea = v30 + 1;
            v32 = v2[8];
            v138 = v31;
            if ( v32 )
            {
              v142 = *(_DWORD *)(v32 + 28);
              if ( v142 )
              {
                v33 = v2[16];
                if ( v33 < *(_DWORD *)(v32 + 32) )
                {
                  *(_BYTE *)(v142 + v33) = v138;
                  ++v2[16];
                  v3 = v121;
                }
              }
            }
            if ( !v138 )
              break;
            v30 = Sizea;
          }
          while ( Sizea < v3 );
          if ( (v2[4] & 0x200) != 0 )
          {
            v34 = sub_683F40(v2[6], v5, Sizea);
            v3 = v121;
            v2[6] = v34;
          }
          v3 -= Sizea;
          v5 += Sizea;
          v121 = v3;
          if ( v138 )
            goto LABEL_302;
        }
        else
        {
          v35 = v2[8];
          if ( v35 )
            *(_DWORD *)(v35 + 28) = 0;
        }
        v2[16] = 0;
        *v2 = 7;
LABEL_98:
        if ( (v2[4] & 0x1000) != 0 )
        {
          if ( !v3 )
            goto LABEL_302;
          v36 = 0;
          do
          {
            v37 = v5[v36];
            Sizeb = v36 + 1;
            v38 = v2[8];
            v138 = v37;
            if ( v38 )
            {
              v142 = *(_DWORD *)(v38 + 36);
              if ( v142 )
              {
                v39 = v2[16];
                if ( v39 < *(_DWORD *)(v38 + 40) )
                {
                  *(_BYTE *)(v142 + v39) = v138;
                  ++v2[16];
                  v3 = v121;
                }
              }
            }
            if ( !v138 )
              break;
            v36 = Sizeb;
          }
          while ( Sizeb < v3 );
          if ( (v2[4] & 0x200) != 0 )
          {
            v40 = sub_683F40(v2[6], v5, Sizeb);
            v3 = v121;
            v2[6] = v40;
          }
          v3 -= Sizeb;
          v5 += Sizeb;
          v121 = v3;
          if ( v138 )
            goto LABEL_302;
        }
        else
        {
          v41 = v2[8];
          if ( v41 )
            *(_DWORD *)(v41 + 36) = 0;
        }
        *v2 = 8;
LABEL_114:
        if ( (v2[4] & 0x200) != 0 )
        {
          if ( v7 < 0x10 )
          {
            while ( v3 )
            {
              v42 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v42;
              v121 = v3;
              v135 = BYTE2(v4);
              if ( v7 >= 0x10 )
                goto LABEL_118;
            }
            goto LABEL_302;
          }
LABEL_118:
          if ( v4 != *((unsigned __int16 *)v2 + 12) )
          {
            *(_DWORD *)(a1 + 24) = "header crc mismatch";
            goto LABEL_293;
          }
          v4 = 0;
          v135 = 0;
          v7 = 0;
        }
        v43 = v2[8];
        if ( v43 )
        {
          *(_DWORD *)(v43 + 44) = (v2[4] >> 9) & 1;
          *(_DWORD *)(v2[8] + 48) = 1;
        }
        v44 = sub_683F40(0, 0, 0);
        v3 = v121;
        v2[6] = v44;
        *(_DWORD *)(a1 + 48) = v44;
        *v2 = 11;
        goto LABEL_294;
      case 2:
        if ( v7 < 0x20 )
          goto LABEL_41;
        goto LABEL_43;
      case 3:
        if ( v7 < 0x10 )
          goto LABEL_49;
        goto LABEL_51;
      case 4:
        goto LABEL_56;
      case 5:
        goto LABEL_68;
      case 6:
        goto LABEL_82;
      case 7:
        goto LABEL_98;
      case 8:
        goto LABEL_114;
      case 9:
        if ( v7 >= 0x20 )
          goto LABEL_127;
        do
        {
          if ( !v3 )
            goto LABEL_302;
          v45 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v45;
          v121 = v3;
          v135 = BYTE2(v4);
        }
        while ( v7 < 0x20 );
LABEL_127:
        LOBYTE(v46) = 0;
        HIBYTE(v46) = v135;
        v47 = v46 + (((v4 << 16) + (v4 & 0xFF00)) << 8) + HIBYTE(v4);
        v2[6] = v47;
        *(_DWORD *)(a1 + 48) = v47;
        v4 = 0;
        v7 = 0;
        *v2 = 10;
LABEL_128:
        if ( !v2[3] )
        {
          *(_DWORD *)(a1 + 12) = v139;
          *(_DWORD *)a1 = v5;
          *(_DWORD *)(a1 + 16) = v136;
          *(_DWORD *)(a1 + 4) = v3;
          v2[15] = v7;
          v2[14] = v4;
          return 2;
        }
        v48 = sub_683A20(0, 0, 0);
        v2[6] = v48;
        *(_DWORD *)(a1 + 48) = v48;
        v3 = v121;
        *v2 = 11;
LABEL_130:
        if ( a2 == 5 )
          goto LABEL_302;
LABEL_131:
        if ( v2[1] )
        {
          v49 = v7 & 7;
          v4 >>= v49;
          v7 -= v49;
          *v2 = 24;
          v135 = BYTE2(v4);
        }
        else
        {
          if ( v7 < 3 )
          {
            while ( v3 )
            {
              v50 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v50;
              v121 = v3;
              if ( v7 >= 3 )
                goto LABEL_136;
            }
            goto LABEL_302;
          }
LABEL_136:
          v51 = v4;
          v52 = v4 >> 1;
          v53 = v7 - 1;
          v2[1] = v51 & 1;
          switch ( v52 & 3 )
          {
            case 0u:
              v4 = v52 >> 2;
              *v2 = 13;
              v135 = BYTE2(v4);
              v7 = v53 - 2;
              break;
            case 1u:
              sub_6818F0(v2);
              v4 = v52 >> 2;
              *v2 = 18;
              v135 = BYTE2(v4);
              v7 = v53 - 2;
              break;
            case 2u:
              v4 = v52 >> 2;
              *v2 = 15;
              v135 = BYTE2(v4);
              v7 = v53 - 2;
              break;
            case 3u:
              *(_DWORD *)(a1 + 24) = "invalid block type";
              *v2 = 27;
              goto LABEL_141;
            default:
LABEL_141:
              v4 = v52 >> 2;
              v135 = BYTE2(v4);
              v7 = v53 - 2;
              break;
          }
        }
        goto LABEL_294;
      case 10:
        goto LABEL_128;
      case 11:
        goto LABEL_130;
      case 12:
        goto LABEL_131;
      case 13:
        v54 = v7 & 7;
        v4 >>= v54;
        v7 -= v54;
        v135 = BYTE2(v4);
        if ( v7 >= 0x20 )
          goto LABEL_145;
        do
        {
          if ( !v3 )
            goto LABEL_302;
          v55 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v55;
          v121 = v3;
          v135 = BYTE2(v4);
        }
        while ( v7 < 0x20 );
LABEL_145:
        v56 = (unsigned __int16)v4;
        if ( (unsigned __int16)v4 != ~v4 >> 16 )
        {
          *(_DWORD *)(a1 + 24) = "invalid stored block lengths";
          goto LABEL_293;
        }
        v4 = 0;
        v2[16] = v56;
        v135 = 0;
        v7 = 0;
        *v2 = 14;
LABEL_148:
        v57 = v2[16];
        Sizec = v57;
        if ( !v57 )
          goto LABEL_225;
        if ( v57 > v3 )
        {
          v57 = v3;
          Sizec = v3;
        }
        if ( v57 > v136 )
        {
          v57 = v136;
          Sizec = v136;
        }
        if ( !v57 )
          goto LABEL_302;
        memcpy(v139, v5, Sizec);
        v121 -= Sizec;
        v136 -= Sizec;
        v139 = (char *)v139 + Sizec;
        v3 = v121;
        v5 += Sizec;
        v2[16] -= Sizec;
        goto LABEL_294;
      case 14:
        goto LABEL_148;
      case 15:
        if ( v7 >= 0xE )
          goto LABEL_158;
        do
        {
          if ( !v3 )
            goto LABEL_302;
          v58 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v58;
          v121 = v3;
        }
        while ( v7 < 0xE );
LABEL_158:
        v59 = v4 & 0x1F;
        v60 = v4 >> 5;
        v61 = v60;
        v2[24] = v59 + 257;
        v60 >>= 5;
        v62 = (v61 & 0x1F) + 1;
        v63 = (v60 & 0xF) + 4;
        v4 = v60 >> 4;
        v7 -= 14;
        v64 = (unsigned int)v2[24] <= 0x11E;
        v2[25] = v62;
        v2[23] = v63;
        v135 = BYTE2(v4);
        if ( !v64 || v62 > 0x1E )
        {
          *(_DWORD *)(a1 + 24) = "too many length or distance symbols";
          goto LABEL_293;
        }
        v2[26] = 0;
        *v2 = 16;
LABEL_161:
        if ( v2[26] < (unsigned int)v2[23] )
        {
          while ( v7 >= 3 )
          {
LABEL_165:
            *((_WORD *)v2 + (unsigned __int16)word_6E2BD0[v2[26]++] + 56) = v4 & 7;
            v4 >>= 3;
            v7 -= 3;
            v135 = BYTE2(v4);
            if ( v2[26] >= (unsigned int)v2[23] )
              goto LABEL_166;
          }
          while ( v3 )
          {
            v65 = *v5 << v7;
            --v3;
            v7 += 8;
            ++v5;
            v4 += v65;
            v121 = v3;
            if ( v7 >= 3 )
              goto LABEL_165;
          }
          goto LABEL_302;
        }
LABEL_166:
        while ( (unsigned int)v2[26] < 0x13 )
          *((_WORD *)v2 + (unsigned __int16)word_6E2BD0[v2[26]++] + 56) = 0;
        v2[27] = (int)(v2 + 332);
        v2[19] = (int)(v2 + 332);
        v2[21] = 7;
        v66 = sub_683530(0, v2 + 28, 19, v2 + 27, v2 + 21, v2 + 188);
        v3 = v121;
        v141 = v66;
        if ( v66 )
        {
          *(_DWORD *)(a1 + 24) = "invalid code lengths set";
          goto LABEL_293;
        }
        v2[26] = 0;
        *v2 = 17;
LABEL_172:
        if ( v2[26] < (unsigned int)(v2[24] + v2[25]) )
        {
          while ( 1 )
          {
            v67 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
            Sized = v67;
            if ( BYTE1(v67) > v7 )
              break;
LABEL_176:
            if ( HIWORD(v67) >= 0x10u )
            {
              if ( HIWORD(Sized) == 16 )
              {
                v69 = BYTE1(v67);
                v138 = BYTE1(v67);
                if ( v7 < (unsigned int)BYTE1(v67) + 2 )
                {
                  while ( v3 )
                  {
                    v70 = *v5 << v7;
                    v69 = v138;
                    --v3;
                    v7 += 8;
                    v4 += v70;
                    ++v5;
                    v121 = v3;
                    if ( v7 >= v138 + 2 )
                      goto LABEL_185;
                  }
                  goto LABEL_302;
                }
LABEL_185:
                v71 = v2[26];
                v4 >>= v69;
                v7 -= v69;
                v135 = BYTE2(v4);
                if ( !v71 )
                {
                  *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                  goto LABEL_293;
                }
                v72 = *((unsigned __int16 *)v2 + v71 + 55);
                v73 = (v4 & 3) + 3;
                v4 >>= 2;
                v138 = v72;
                Sizee = v73;
                v7 -= 2;
              }
              else
              {
                v74 = BYTE1(v67);
                v138 = BYTE1(v67);
                if ( HIWORD(Sized) == 17 )
                {
                  if ( v7 < (unsigned int)BYTE1(v67) + 3 )
                  {
                    while ( v3 )
                    {
                      v75 = *v5 << v7;
                      v74 = v138;
                      --v3;
                      v7 += 8;
                      v4 += v75;
                      ++v5;
                      v121 = v3;
                      if ( v7 >= v138 + 3 )
                        goto LABEL_191;
                    }
                    goto LABEL_302;
                  }
LABEL_191:
                  v76 = v4 >> v74;
                  Sizee = (v76 & 7) + 3;
                  v4 = v76 >> 3;
                  v77 = -3;
                }
                else
                {
                  if ( v7 < (unsigned int)BYTE1(v67) + 7 )
                  {
                    while ( v3 )
                    {
                      v78 = *v5 << v7;
                      v74 = v138;
                      --v3;
                      v7 += 8;
                      v4 += v78;
                      ++v5;
                      v121 = v3;
                      if ( v7 >= v138 + 7 )
                        goto LABEL_195;
                    }
                    goto LABEL_302;
                  }
LABEL_195:
                  v79 = v4 >> v74;
                  Sizee = (v79 & 0x7F) + 11;
                  v4 = v79 >> 7;
                  v77 = -7;
                }
                v7 += v77 - v74;
                v73 = Sizee;
                v138 = 0;
              }
              v135 = BYTE2(v4);
              if ( v73 + v2[26] > (unsigned int)(v2[24] + v2[25]) )
              {
                *(_DWORD *)(a1 + 24) = "invalid bit length repeat";
                goto LABEL_293;
              }
              if ( Sizee )
              {
                v80 = v138;
                do
                {
                  --Sizee;
                  *((_WORD *)v2 + v2[26]++ + 56) = v80;
                }
                while ( Sizee );
              }
            }
            else
            {
              if ( v7 < BYTE1(v67) )
              {
                while ( v3 )
                {
                  v67 = *v5 << v7;
                  --v3;
                  v7 += 8;
                  ++v5;
                  v4 += v67;
                  BYTE1(v67) = BYTE1(Sized);
                  v121 = v3;
                  if ( v7 >= BYTE1(Sized) )
                    goto LABEL_180;
                }
                goto LABEL_302;
              }
LABEL_180:
              v4 >>= SBYTE1(v67);
              v7 -= BYTE1(v67);
              *((_WORD *)v2 + v2[26]++ + 56) = HIWORD(Sized);
              v135 = BYTE2(v4);
            }
            if ( v2[26] >= (unsigned int)(v2[24] + v2[25]) )
              goto LABEL_202;
          }
          while ( v3 )
          {
            v68 = *v5 << v7;
            --v3;
            v7 += 8;
            v4 += v68;
            ++v5;
            v121 = v3;
            v67 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
            Sized = v67;
            if ( BYTE1(v67) <= v7 )
              goto LABEL_176;
          }
          goto LABEL_302;
        }
LABEL_202:
        if ( *v2 == 27 )
          goto LABEL_294;
        v2[27] = (int)(v2 + 332);
        v2[19] = (int)(v2 + 332);
        v118 = v2[24];
        v2[21] = 9;
        v141 = sub_683530(1, v2 + 28, v118, v2 + 27, v2 + 21, v2 + 188);
        if ( v141 )
        {
          v3 = v121;
          *(_DWORD *)(a1 + 24) = "invalid literal/lengths set";
          goto LABEL_293;
        }
        v2[20] = v2[27];
        v81 = v2[24];
        v2[22] = 6;
        v82 = sub_683530(2, (char *)v2 + 2 * v81 + 112, v2[25], v2 + 27, v2 + 22, v2 + 188);
        v3 = v121;
        v141 = v82;
        if ( v82 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distances set";
          goto LABEL_293;
        }
        *v2 = 18;
LABEL_210:
        if ( v3 >= 6 && v136 >= 0x102 )
        {
          v83 = v139;
          *(_DWORD *)(a1 + 16) = v136;
          v84 = v140;
          *(_DWORD *)(a1 + 12) = v83;
          *(_DWORD *)a1 = v5;
          *(_DWORD *)(a1 + 4) = v121;
          v2[14] = v4;
          v2[15] = v7;
          sub_683070(a1, v84);
          v5 = *(unsigned __int8 **)a1;
          v85 = *(_DWORD *)(a1 + 4);
          v4 = v2[14];
          v7 = v2[15];
          v136 = *(_DWORD *)(a1 + 16);
          v139 = *(void **)(a1 + 12);
          v121 = v85;
          v135 = BYTE2(v4);
          v3 = v85;
          goto LABEL_294;
        }
        v86 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
        Sizef = v86;
        if ( BYTE1(v86) > v7 )
        {
          while ( v3 )
          {
            v87 = *v5 << v7;
            --v3;
            v7 += 8;
            v4 += v87;
            ++v5;
            v121 = v3;
            v86 = *(_DWORD *)(v2[19] + 4 * (v4 & ((1 << v2[21]) - 1)));
            Sizef = v86;
            if ( BYTE1(v86) <= v7 )
              goto LABEL_216;
          }
          goto LABEL_302;
        }
LABEL_216:
        if ( (_BYTE)v86 && (v86 & 0xF0) == 0 )
        {
          v142 = v86 >> 8;
          v138 = BYTE1(v86);
          v133 = v86;
          Sizeg = *(_DWORD *)(v2[19] + 4 * (HIWORD(Sizef) + ((v4 & ((1 << (BYTE1(v86) + v86)) - 1)) >> SBYTE1(v86))));
          if ( BYTE1(v86) + (unsigned int)BYTE1(Sizeg) > v7 )
          {
            while ( v3 )
            {
              v88 = *v5 << v7;
              --v3;
              v7 += 8;
              v4 += v88;
              v138 = BYTE1(v133);
              ++v5;
              v121 = v3;
              Sizeg = *(_DWORD *)(v2[19]
                                + 4 * (HIWORD(v133) + ((v4 & ((1 << (BYTE1(v133) + v133)) - 1)) >> SBYTE1(v133))));
              if ( BYTE1(v133) + (unsigned int)BYTE1(Sizeg) <= v7 )
                goto LABEL_221;
            }
            goto LABEL_302;
          }
LABEL_221:
          v86 = Sizeg;
          v4 >>= SBYTE1(v133);
          v7 -= BYTE1(v133);
        }
        v4 >>= SBYTE1(v86);
        v7 -= BYTE1(v86);
        v138 = BYTE1(v86);
        v135 = BYTE2(v4);
        v2[16] = HIWORD(v86);
        if ( !(_BYTE)v86 )
        {
          *v2 = 23;
          goto LABEL_294;
        }
        if ( (v86 & 0x20) != 0 )
        {
LABEL_225:
          *v2 = 11;
          goto LABEL_294;
        }
        if ( (v86 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid literal/length code";
          goto LABEL_293;
        }
        v2[18] = v86 & 0xF;
        *v2 = 19;
LABEL_229:
        v89 = v2[18];
        if ( v89 )
        {
          if ( v7 < v89 )
          {
            while ( v3 )
            {
              v90 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v90;
              v121 = v3;
              if ( v7 >= v2[18] )
                goto LABEL_233;
            }
            goto LABEL_302;
          }
LABEL_233:
          v91 = v2[18];
          v2[16] += v4 & ((1 << v91) - 1);
          v4 >>= v91;
          v7 -= v91;
        }
        *v2 = 20;
LABEL_235:
        v92 = *(_DWORD *)(v2[20] + 4 * (v4 & ((1 << v2[22]) - 1)));
        Sizeh = v92;
        if ( BYTE1(v92) > v7 )
        {
          while ( v3 )
          {
            v93 = *v5 << v7;
            --v3;
            v7 += 8;
            v4 += v93;
            ++v5;
            v121 = v3;
            v92 = *(_DWORD *)(v2[20] + 4 * (v4 & ((1 << v2[22]) - 1)));
            Sizeh = v92;
            if ( BYTE1(v92) <= v7 )
              goto LABEL_238;
          }
          goto LABEL_302;
        }
LABEL_238:
        if ( (v92 & 0xF0) == 0 )
        {
          v142 = v92 >> 8;
          v138 = BYTE1(v92);
          v134 = v92;
          Sizei = *(_DWORD *)(v2[20] + 4 * (HIWORD(Sizeh) + ((v4 & ((1 << (BYTE1(v92) + v92)) - 1)) >> SBYTE1(v92))));
          if ( BYTE1(v92) + (unsigned int)BYTE1(Sizei) > v7 )
          {
            while ( v3 )
            {
              v94 = *v5 << v7;
              --v3;
              v7 += 8;
              v4 += v94;
              v138 = BYTE1(v134);
              ++v5;
              v121 = v3;
              Sizei = *(_DWORD *)(v2[20]
                                + 4 * (HIWORD(v134) + ((v4 & ((1 << (BYTE1(v134) + v134)) - 1)) >> SBYTE1(v134))));
              if ( BYTE1(v134) + (unsigned int)BYTE1(Sizei) <= v7 )
                goto LABEL_242;
            }
            goto LABEL_302;
          }
LABEL_242:
          v92 = Sizei;
          v4 >>= SBYTE1(v134);
          v7 -= BYTE1(v134);
        }
        v4 >>= SBYTE1(v92);
        v7 -= BYTE1(v92);
        v138 = BYTE1(v92);
        v135 = BYTE2(v4);
        if ( (v92 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distance code";
          goto LABEL_293;
        }
        v2[17] = HIWORD(v92);
        v2[18] = v92 & 0xF;
        *v2 = 21;
LABEL_246:
        v95 = v2[18];
        if ( v95 )
        {
          if ( v7 < v95 )
          {
            while ( v3 )
            {
              v96 = *v5 << v7;
              --v3;
              v7 += 8;
              ++v5;
              v4 += v96;
              v121 = v3;
              if ( v7 >= v2[18] )
                goto LABEL_250;
            }
            goto LABEL_302;
          }
LABEL_250:
          v97 = v2[18];
          v2[17] += v4 & ((1 << v97) - 1);
          v4 >>= v97;
          v7 -= v97;
          v135 = BYTE2(v4);
        }
        if ( v2[17] > v140 + v2[11] - v136 )
        {
          *(_DWORD *)(a1 + 24) = "invalid distance too far back";
          goto LABEL_293;
        }
        *v2 = 22;
LABEL_254:
        if ( !v136 )
          goto LABEL_302;
        v98 = v2[17];
        if ( v98 <= v140 - v136 )
        {
          v102 = (char *)v139 - v98;
          v99 = v2[16];
          v138 = (int)v102;
          v142 = v99;
          goto LABEL_262;
        }
        v99 = v98 - (v140 - v136);
        v100 = v2[12];
        Sizej = v99;
        if ( v99 <= v100 )
        {
          v101 = v2[12] + v2[13] - v99;
        }
        else
        {
          v99 -= v100;
          Sizej = v99;
          v101 = v2[10] + v2[13] - v99;
        }
        v138 = v101;
        v142 = v2[16];
        if ( v99 > v142 )
        {
          v99 = v142;
LABEL_262:
          Sizej = v99;
        }
        if ( v99 > v136 )
        {
          v99 = v136;
          Sizej = v136;
        }
        v136 -= v99;
        v103 = v142 - v99;
        v104 = v139;
        v2[16] = v103;
        do
        {
          v105 = *(_BYTE *)v138++;
          *v104++ = v105;
          --Sizej;
        }
        while ( Sizej );
        v106 = v2[16] == 0;
        v139 = v104;
        if ( v106 )
          *v2 = 18;
        goto LABEL_294;
      case 16:
        goto LABEL_161;
      case 17:
        goto LABEL_172;
      case 18:
        goto LABEL_210;
      case 19:
        goto LABEL_229;
      case 20:
        goto LABEL_235;
      case 21:
        goto LABEL_246;
      case 22:
        goto LABEL_254;
      case 23:
        if ( !v136 )
          goto LABEL_302;
        v107 = (char *)v139;
        *(_BYTE *)v139 = *((_BYTE *)v2 + 64);
        --v136;
        v139 = v107 + 1;
        *v2 = 18;
        goto LABEL_294;
      case 24:
        if ( !v2[2] )
          goto LABEL_285;
        if ( v7 >= 0x20 )
          goto LABEL_275;
        do
        {
          if ( !v3 )
            goto LABEL_302;
          v108 = *v5 << v7;
          --v3;
          v7 += 8;
          ++v5;
          v4 += v108;
          v121 = v3;
          v135 = BYTE2(v4);
        }
        while ( v7 < 0x20 );
LABEL_275:
        v109 = v140 - v136;
        *(_DWORD *)(a1 + 20) += v140 - v136;
        v2[7] += v109;
        v140 = v109;
        if ( v109 )
        {
          v120 = (char *)v139 - v109;
          v119 = v2[6];
          if ( v2[4] )
            v110 = sub_683F40(v119, v120, v109);
          else
            v110 = sub_683A20(v119, v120, v109);
          v3 = v121;
          v2[6] = v110;
          *(_DWORD *)(a1 + 48) = v110;
        }
        v106 = v2[4] == 0;
        v140 = v136;
        v111 = v4;
        if ( v106 )
        {
          LOBYTE(v112) = 0;
          HIBYTE(v112) = v135;
          v111 = HIBYTE(v4) + v112 + (((v4 << 16) + (v4 & 0xFF00)) << 8);
        }
        if ( v111 != v2[6] )
        {
          *(_DWORD *)(a1 + 24) = "incorrect data check";
          goto LABEL_293;
        }
        v4 = 0;
        v135 = 0;
        v7 = 0;
LABEL_285:
        *v2 = 25;
LABEL_286:
        if ( !v2[2] || !v2[4] )
          goto LABEL_299;
        if ( v7 < 0x20 )
        {
          while ( v3 )
          {
            v113 = *v5 << v7;
            --v3;
            v7 += 8;
            ++v5;
            v4 += v113;
            v121 = v3;
            v135 = BYTE2(v4);
            if ( v7 >= 0x20 )
              goto LABEL_291;
          }
          goto LABEL_302;
        }
LABEL_291:
        if ( v4 != v2[7] )
        {
          *(_DWORD *)(a1 + 24) = "incorrect length check";
LABEL_293:
          *v2 = 27;
LABEL_294:
          v6 = *v2;
          if ( (unsigned int)*v2 > 0x1C )
            return -2;
          continue;
        }
        v4 = 0;
        v7 = 0;
LABEL_299:
        *v2 = 26;
LABEL_300:
        v141 = 1;
LABEL_302:
        *(_DWORD *)(a1 + 12) = v139;
        *(_DWORD *)(a1 + 16) = v136;
        *(_DWORD *)a1 = v5;
        *(_DWORD *)(a1 + 4) = v3;
        v106 = v2[10] == 0;
        v2[14] = v4;
        v2[15] = v7;
        if ( v106 && (*v2 >= 24 || v140 == *(_DWORD *)(a1 + 16)) || !sub_681910(v140, a1) )
        {
          v115 = v143 - *(_DWORD *)(a1 + 4);
          v116 = v140 - *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 8) += v115;
          *(_DWORD *)(a1 + 20) += v116;
          v2[7] += v116;
          if ( v2[2] && v116 )
          {
            if ( v2[4] )
              v117 = sub_683F40(v2[6], *(_DWORD *)(a1 + 12) - v116, v116);
            else
              v117 = sub_683A20(v2[6], *(_DWORD *)(a1 + 12) - v116, v116);
            v2[6] = v117;
            *(_DWORD *)(a1 + 48) = v117;
          }
          *(_DWORD *)(a1 + 44) = v2[15] + (*v2 != 11 ? 0 : 0x80) + (v2[1] != 0 ? 0x40 : 0);
          if ( (v115 || v116) && a2 != 4 )
          {
            return v141;
          }
          else
          {
            result = v141;
            if ( !v141 )
              return -5;
          }
        }
        else
        {
          *v2 = 28;
          return -4;
        }
        return result;
      case 25:
        goto LABEL_286;
      case 26:
        goto LABEL_300;
      case 27:
        v141 = -3;
        goto LABEL_302;
      case 28:
        return -4;
      default:
        return -2;
    }
  }
}


//======================================================================
// sub_682FF0
// entry 00682ff0  size 74  status ok
//======================================================================

int __cdecl sub_682FF0(_DWORD *a1)
{
  int v1; // eax
  void (__cdecl *v2)(_DWORD, int); // ecx
  int v3; // eax

  if ( !a1 )
    return -2;
  v1 = a1[7];
  if ( !v1 )
    return -2;
  v2 = (void (__cdecl *)(_DWORD, int))a1[9];
  if ( !v2 )
    return -2;
  v3 = *(_DWORD *)(v1 + 52);
  if ( v3 )
    v2(a1[10], v3);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[10], a1[7]);
  a1[7] = 0;
  return 0;
}


//======================================================================
// sub_683040
// entry 00683040  size 20  status ok
//======================================================================

void *__cdecl sub_683040(int a1, int a2, int a3)
{
  return malloc(a3 * a2);
}


//======================================================================
// sub_683060
// entry 00683060  size 13  status ok
//======================================================================

void __cdecl sub_683060(int a1, void *Block)
{
  free(Block);
}


//======================================================================
// sub_683070
// entry 00683070  size 1208  status ok
//======================================================================

_DWORD *__cdecl sub_683070(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ebx
  unsigned __int8 *v4; // ebp
  _BYTE *v5; // esi
  unsigned int v6; // edi
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  char v10; // dl
  unsigned int v11; // edx
  int v12; // eax
  int v13; // edx
  unsigned __int8 *v14; // ebp
  int v15; // eax
  unsigned int v16; // edx
  char v17; // al
  unsigned int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  char v23; // cl
  _BYTE *v24; // eax
  unsigned int v25; // ebp
  int v26; // ecx
  _BYTE *v27; // ecx
  char v28; // al
  int v29; // edx
  unsigned int v30; // ebp
  char v31; // dl
  unsigned int v32; // ebp
  char v33; // al
  char v34; // al
  unsigned int v35; // ebp
  char v36; // al
  _BYTE *v37; // ecx
  _BYTE *v38; // esi
  char v39; // dl
  char v40; // al
  char v41; // dl
  _BYTE *v42; // ecx
  unsigned int v43; // edx
  _BYTE *v44; // eax
  char v45; // cl
  _BYTE *v46; // eax
  char v47; // dl
  _BYTE *v48; // esi
  char v49; // cl
  unsigned int v50; // ecx
  char v51; // dl
  _BYTE *v52; // eax
  unsigned __int8 *v53; // ebp
  unsigned int v54; // edi
  unsigned __int8 *v56; // [esp+10h] [ebp-3Ch]
  unsigned int v57; // [esp+14h] [ebp-38h]
  _DWORD *v58; // [esp+18h] [ebp-34h]
  unsigned int v59; // [esp+1Ch] [ebp-30h]
  unsigned int v60; // [esp+1Ch] [ebp-30h]
  unsigned __int16 v61; // [esp+1Eh] [ebp-2Eh]
  int v62; // [esp+20h] [ebp-2Ch]
  int v63; // [esp+24h] [ebp-28h]
  int v64; // [esp+28h] [ebp-24h]
  unsigned int v65; // [esp+2Ch] [ebp-20h]
  int v66; // [esp+30h] [ebp-1Ch]
  _BYTE *v67; // [esp+38h] [ebp-14h]
  unsigned int v68; // [esp+3Ch] [ebp-10h]
  int v69; // [esp+40h] [ebp-Ch]
  unsigned int v70; // [esp+44h] [ebp-8h]
  int v71; // [esp+48h] [ebp-4h]
  unsigned int v72; // [esp+54h] [ebp+8h]

  v2 = (_DWORD *)a1[7];
  v3 = v2[14];
  v4 = (unsigned __int8 *)(*a1 - 1);
  v57 = (unsigned int)&v4[a1[1] - 5];
  v5 = (_BYTE *)(a1[3] - 1);
  v67 = &v5[a1[4] - a2];
  v65 = (unsigned int)&v5[a1[4] - 257];
  v64 = v2[10];
  v68 = v2[11];
  v70 = v2[12];
  v69 = v2[13];
  v62 = v2[19];
  v63 = v2[20];
  v58 = v2;
  v6 = v2[15];
  v7 = (1 << v2[21]) - 1;
  v56 = v4;
  v71 = v7;
  v66 = (1 << v2[22]) - 1;
  while ( 1 )
  {
    if ( v6 < 0xF )
    {
      v8 = v4[1];
      v4 += 2;
      v56 = v4;
      v3 += (*v4 << (v6 + 8)) + (v8 << v6);
      v6 += 16;
    }
    v9 = *(_DWORD *)(v62 + 4 * (v3 & v7));
    v10 = v9;
    v3 >>= SBYTE1(v9);
    v6 -= BYTE1(v9);
    if ( !(_BYTE)v9 )
    {
LABEL_8:
      *++v5 = BYTE2(v9);
      goto LABEL_47;
    }
    while ( (v10 & 0x10) == 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          *v58 = 11;
          goto LABEL_61;
        }
        a1[6] = "invalid literal/length code";
LABEL_60:
        *v58 = 27;
        goto LABEL_61;
      }
      v9 = *(_DWORD *)(v62 + 4 * (HIWORD(v9) + (v3 & ((1 << v10) - 1))));
      v10 = v9;
      v3 >>= SBYTE1(v9);
      v6 -= BYTE1(v9);
      if ( !(_BYTE)v9 )
        goto LABEL_8;
    }
    v11 = v10 & 0xF;
    v72 = HIWORD(v9);
    if ( v11 )
    {
      if ( v6 < v11 )
      {
        v12 = *++v4;
        v56 = v4;
        v3 += v12 << v6;
        v6 += 8;
      }
      v72 += v3 & ((1 << v11) - 1);
      v3 >>= v11;
      v6 -= v11;
    }
    if ( v6 < 0xF )
    {
      v13 = v4[1];
      v14 = v4 + 1;
      v15 = v14[1];
      v4 = v14 + 1;
      v56 = v4;
      v3 += (v15 << (v6 + 8)) + (v13 << v6);
      v6 += 16;
    }
    v16 = *(_DWORD *)(v63 + 4 * (v3 & v66));
    v17 = v16;
    v3 >>= SBYTE1(v16);
    v6 -= BYTE1(v16);
    v61 = HIWORD(v16);
    if ( (v16 & 0x10) == 0 )
    {
      while ( (v17 & 0x40) == 0 )
      {
        v16 = *(_DWORD *)(v63 + 4 * (v61 + (v3 & ((1 << v17) - 1))));
        v17 = v16;
        v3 >>= SBYTE1(v16);
        v6 -= BYTE1(v16);
        v61 = HIWORD(v16);
        if ( (v16 & 0x10) != 0 )
          goto LABEL_18;
      }
      a1[6] = "invalid distance code";
      goto LABEL_60;
    }
LABEL_18:
    v18 = v17 & 0xF;
    v59 = HIWORD(v16);
    if ( v6 < v18 )
    {
      v19 = *++v4;
      v20 = v19 << v6;
      v6 += 8;
      v56 = v4;
      v3 += v20;
      if ( v6 < v18 )
      {
        v21 = *++v4;
        v56 = v4;
        v3 += v21 << v6;
        v6 += 8;
      }
    }
    v6 -= v18;
    v22 = (v3 & ((1 << v18) - 1)) + v59;
    v23 = v18;
    v24 = (_BYTE *)(v5 - v67);
    v3 >>= v23;
    v60 = v22;
    if ( v22 > v5 - v67 )
    {
      v25 = v22 - (_DWORD)v24;
      if ( v22 - (unsigned int)v24 > v68 )
      {
        v4 = v56;
        a1[6] = "invalid distance too far back";
        *v58 = 27;
LABEL_61:
        v43 = v57;
        break;
      }
      v26 = v69 - 1;
      if ( v70 )
      {
        if ( v70 < v25 )
        {
          v29 = v64 + v70 - v25;
          v30 = v25 - v70;
          v27 = (_BYTE *)(v29 + v26);
          if ( v30 < v72 )
          {
            v72 -= v30;
            do
            {
              v31 = *++v27;
              ++v5;
              --v30;
              *v5 = v31;
            }
            while ( v30 );
            v27 = (_BYTE *)(v69 - 1);
            if ( v70 < v72 )
            {
              v72 -= v70;
              v32 = v70;
              do
              {
                v33 = *++v27;
                ++v5;
                --v32;
                *v5 = v33;
              }
              while ( v32 );
              v27 = &v5[-v60];
            }
          }
          goto LABEL_40;
        }
        v27 = (_BYTE *)(v70 - v25 + v26);
        if ( v25 < v72 )
        {
          v72 -= v25;
          do
          {
            v34 = *++v27;
            ++v5;
            --v25;
            *v5 = v34;
          }
          while ( v25 );
          goto LABEL_39;
        }
      }
      else
      {
        v27 = (_BYTE *)(v64 - v25 + v26);
        if ( v25 < v72 )
        {
          v72 -= v25;
          do
          {
            v28 = *++v27;
            ++v5;
            --v25;
            *v5 = v28;
          }
          while ( v25 );
LABEL_39:
          v27 = &v5[-v22];
        }
      }
LABEL_40:
      if ( v72 > 2 )
      {
        v35 = (v72 - 3) / 3 + 1;
        do
        {
          v36 = v27[1];
          v72 -= 3;
          v37 = v27 + 1;
          v38 = v5 + 1;
          *v38 = v36;
          v39 = *++v37;
          *++v38 = v39;
          v40 = v37[1];
          v27 = v37 + 1;
          v5 = v38 + 1;
          --v35;
          *v5 = v40;
        }
        while ( v35 );
      }
      if ( v72 )
      {
        v41 = v27[1];
        v42 = v27 + 1;
        *++v5 = v41;
        if ( v72 > 1 )
          *++v5 = v42[1];
      }
      v4 = v56;
      goto LABEL_47;
    }
    v44 = &v5[-v22];
    do
    {
      v45 = v44[1];
      v46 = v44 + 1;
      v5[1] = v45;
      v47 = *++v46;
      v48 = v5 + 2;
      *v48 = v47;
      v49 = v46[1];
      v44 = v46 + 1;
      v5 = v48 + 1;
      *v5 = v49;
      v50 = v72 - 3;
      v72 -= 3;
    }
    while ( v72 > 2 );
    if ( v50 )
    {
      v51 = v44[1];
      v52 = v44 + 1;
      *++v5 = v51;
      if ( v50 > 1 )
        *++v5 = v52[1];
    }
LABEL_47:
    v43 = v57;
    if ( (unsigned int)v4 >= v57 || (unsigned int)v5 >= v65 )
      break;
    v7 = v71;
  }
  v53 = &v4[-(v6 >> 3)];
  v54 = v6 - 8 * (v6 >> 3);
  *a1 = v53 + 1;
  a1[3] = v5 + 1;
  a1[4] = v65 - (_DWORD)v5 + 257;
  a1[1] = v43 - (_DWORD)v53 + 5;
  v58[15] = v54;
  v58[14] = ((1 << v54) - 1) & v3;
  return v58;
}


//======================================================================
// sub_683530
// entry 00683530  size 1262  status ok
//======================================================================

int __cdecl sub_683530(int a1, int a2, unsigned int a3, _DWORD **a4, unsigned int *a5, _WORD *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10; // esi
  int v11; // edx
  unsigned int i; // eax
  unsigned int j; // eax
  __int16 v14; // cx
  unsigned int k; // eax
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // ecx
  unsigned int v22; // edx
  unsigned int m; // eax
  int v24; // esi
  char v25; // cl
  unsigned int v26; // edx
  int v27; // eax
  unsigned __int16 *v28; // esi
  int v29; // eax
  _DWORD *v30; // esi
  unsigned int n; // eax
  int v32; // [esp+Ch] [ebp-8Ch]
  int v33; // [esp+Ch] [ebp-8Ch]
  unsigned int v34; // [esp+10h] [ebp-88h]
  unsigned int v35; // [esp+14h] [ebp-84h]
  _WORD *v36; // [esp+18h] [ebp-80h]
  unsigned int v37; // [esp+1Ch] [ebp-7Ch]
  _DWORD *v38; // [esp+20h] [ebp-78h]
  unsigned int v39; // [esp+24h] [ebp-74h]
  char *v40; // [esp+28h] [ebp-70h]
  int v41; // [esp+2Ch] [ebp-6Ch]
  int v42; // [esp+30h] [ebp-68h]
  char *v43; // [esp+34h] [ebp-64h]
  int v44; // [esp+3Ch] [ebp-5Ch]
  int v45; // [esp+40h] [ebp-58h]
  int v46; // [esp+54h] [ebp-44h] BYREF
  int v47; // [esp+58h] [ebp-40h]
  _WORD v48[28]; // [esp+5Ch] [ebp-3Ch] BYREF

  v36 = a6;
  v6 = 0;
  v46 = 0;
  v47 = 0;
  memset(v48, 0, 24);
  if ( a3 )
  {
    do
      ++*((_WORD *)&v46 + *(unsigned __int16 *)(a2 + 2 * v6++));
    while ( v6 < a3 );
  }
  v7 = *a5;
  v34 = *a5;
  v8 = 15;
  do
  {
    if ( *((_WORD *)&v46 + v8) )
      break;
    --v8;
  }
  while ( v8 );
  v37 = v8;
  if ( v7 > v8 )
  {
    v34 = v8;
    v7 = v8;
  }
  if ( !v8 )
  {
    *(*a4)++ = 320;
    *(*a4)++ = 320;
    *a5 = 1;
    return 0;
  }
  v10 = 1;
  while ( !*((_WORD *)&v46 + v10) )
  {
    if ( *((_WORD *)&v46 + v10 + 1) )
    {
      ++v10;
      break;
    }
    if ( v48[v10 - 2] )
    {
      v10 += 2;
      break;
    }
    if ( v48[v10 - 1] )
    {
      v10 += 3;
      break;
    }
    if ( v48[v10] )
    {
      v10 += 4;
      break;
    }
    v10 += 5;
    if ( v10 > 0xF )
      break;
  }
  if ( v7 < v10 )
    v34 = v10;
  v11 = 1;
  for ( i = 1; i <= 0xF; ++i )
  {
    v11 = 2 * v11 - *((unsigned __int16 *)&v46 + i);
    if ( v11 < 0 )
      return -1;
  }
  if ( v11 > 0 && (!a1 || v8 != 1) )
    return -1;
  v48[13] = 0;
  for ( j = 1; j < 15; v48[j + 12] = v14 )
  {
    v14 = *(_WORD *)((char *)&v46 + j * 2) + v48[j + 12];
    ++j;
  }
  for ( k = 0; k < a3; ++k )
  {
    if ( *(_WORD *)(a2 + 2 * k) )
      a6[(unsigned __int16)v48[*(unsigned __int16 *)(a2 + 2 * k) + 12]++] = k;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v40 = (char *)&unk_6E2E90 - 514;
      v43 = (char *)&unk_6E2ED0 - 514;
      v41 = 256;
    }
    else
    {
      v40 = (char *)&unk_6E2F10;
      v43 = (char *)&unk_6E2F50;
      v41 = -1;
    }
  }
  else
  {
    v43 = (char *)a6;
    v40 = (char *)a6;
    v41 = 19;
  }
  v38 = *a4;
  v16 = 0;
  v17 = 0;
  v35 = v10;
  v42 = -1;
  v45 = 1 << v34;
  v39 = 1 << v34;
  v44 = (1 << v34) - 1;
  if ( a1 == 1 && (unsigned int)(1 << v34) >= 0x5B0 )
    return 1;
  while ( 1 )
  {
    if ( (unsigned __int16)*v36 >= v41 )
    {
      if ( (unsigned __int16)*v36 <= v41 )
      {
        LOBYTE(v32) = 96;
        HIWORD(v32) = 0;
      }
      else
      {
        v18 = 2 * (unsigned __int16)*v36;
        LOBYTE(v32) = v43[v18];
        HIWORD(v32) = *(_WORD *)&v40[v18];
      }
    }
    else
    {
      LOBYTE(v32) = 0;
      HIWORD(v32) = *v36;
    }
    v19 = v45;
    v20 = 1 << (v35 - v17);
    v21 = &v38[v45 + (v16 >> v17)];
    do
    {
      v19 -= v20;
      v21 -= v20;
      BYTE1(v32) = v35 - v17;
      *v21 = v32;
    }
    while ( v19 );
    v22 = v35;
    for ( m = 1 << (v35 - 1); (m & v16) != 0; m >>= 1 )
      ;
    if ( m )
      v16 = m + (v16 & (m - 1));
    else
      v16 = 0;
    --*((_WORD *)&v46 + v35);
    ++v36;
    if ( *((_WORD *)&v46 + v35) )
      goto LABEL_59;
    if ( v35 == v37 )
      break;
    v22 = *(unsigned __int16 *)(a2 + 2 * (unsigned __int16)*v36);
    v35 = v22;
LABEL_59:
    if ( v22 > v34 )
    {
      v24 = v16 & v44;
      if ( (v16 & v44) != v42 )
      {
        if ( !v17 )
          v17 = v34;
        v25 = v35 - v17;
        v38 += v45;
        v26 = v35;
        v27 = 1 << (v35 - v17);
        if ( v35 < v37 )
        {
          v28 = (unsigned __int16 *)&v46 + v35;
          do
          {
            v29 = v27 - *v28;
            if ( v29 <= 0 )
              break;
            ++v26;
            ++v25;
            ++v28;
            v27 = 2 * v29;
          }
          while ( v26 < v37 );
          v24 = v16 & v44;
        }
        v39 += 1 << v25;
        v45 = 1 << v25;
        if ( a1 == 1 && v39 >= 0x5B0 )
          return 1;
        LOBYTE((*a4)[v24]) = v25;
        BYTE1((*a4)[v24]) = v34;
        v42 = v24;
        HIWORD((*a4)[v24]) = v38 - *a4;
      }
    }
  }
  LOBYTE(v33) = 64;
  BYTE1(v33) = v35 - v17;
  HIWORD(v33) = 0;
  if ( v16 )
  {
    v30 = v38;
    do
    {
      if ( v17 && (v16 & v44) != v42 )
      {
        v30 = *a4;
        v17 = 0;
        BYTE1(v33) = v34;
        LOBYTE(v22) = v34;
      }
      v30[v16 >> v17] = v33;
      for ( n = 1 << (v22 - 1); (n & v16) != 0; n >>= 1 )
        ;
      if ( !n )
        break;
      v16 = n + (v16 & (n - 1));
    }
    while ( v16 );
  }
  *a4 += v39;
  *a5 = v34;
  return 0;
}


//======================================================================
// sub_683A20
// entry 00683a20  size 626  status ok
//======================================================================

unsigned int __cdecl sub_683A20(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned __int8 *v9; // esi
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  unsigned int v23; // edi
  unsigned int v24; // ecx
  int v25; // edi
  unsigned int v26; // ecx
  int v27; // edi
  unsigned int v28; // ecx
  int v29; // edi
  int v30; // ecx
  int v31; // edi
  int v32; // ecx
  int v33; // edi
  int v34; // ecx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  int v41; // edi
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edi
  unsigned int v45; // ecx
  unsigned int v46; // edi
  unsigned int v47; // ecx
  unsigned int v48; // edi
  unsigned int v49; // ecx
  unsigned int v50; // edi
  unsigned int v51; // ecx
  unsigned int v52; // edi
  unsigned int v53; // ecx
  unsigned int v54; // edi
  unsigned int v55; // ecx
  int v56; // edi
  unsigned int v57; // ecx
  int v58; // edi
  unsigned int v59; // ecx
  int v60; // edi
  int v61; // ecx
  int v62; // edi
  int v63; // ecx
  int v64; // edi
  int v65; // ecx
  int v66; // edi
  int v67; // ecx
  int v68; // edi
  int v69; // ecx
  int v70; // edi
  int v71; // ecx
  int v72; // edi

  v3 = a3;
  v4 = HIWORD(a1);
  v5 = (unsigned __int16)a1;
  if ( a3 == 1 )
  {
    v6 = *a2 + (unsigned __int16)a1;
    if ( v6 >= 0xFFF1 )
      v6 -= 65521;
    v7 = v6 + v4;
    if ( v7 >= 0xFFF1 )
      v7 -= 65521;
    return v6 | (v7 << 16);
  }
  else
  {
    v9 = a2;
    if ( a2 )
    {
      if ( a3 >= 0x10 )
      {
        if ( a3 >= 0x15B0 )
        {
          v10 = a3 / 0x15B0;
          do
          {
            v3 -= 5552;
            v11 = 347;
            do
            {
              v12 = *v9 + v5;
              v13 = v12 + v4;
              v14 = v9[1] + v12;
              v15 = v14 + v13;
              v16 = v9[2] + v14;
              v17 = v16 + v15;
              v18 = v9[3] + v16;
              v19 = v18 + v17;
              v20 = v9[4] + v18;
              v21 = v20 + v19;
              v22 = v9[5] + v20;
              v23 = v22 + v21;
              v24 = v9[6] + v22;
              v25 = v24 + v23;
              v26 = v9[7] + v24;
              v27 = v26 + v25;
              v28 = v9[8] + v26;
              v29 = v28 + v27;
              v30 = v9[9] + v28;
              v31 = v30 + v29;
              v32 = v9[10] + v30;
              v33 = v32 + v31;
              v34 = v9[11] + v32;
              v35 = v34 + v33;
              v36 = v9[12] + v34;
              v37 = v36 + v35;
              v38 = v9[13] + v36;
              v39 = v38 + v37;
              v40 = v9[14] + v38;
              v41 = v40 + v39;
              v5 = v9[15] + v40;
              v4 = v5 + v41;
              v9 += 16;
              --v11;
            }
            while ( v11 );
            v5 %= 0xFFF1u;
            v4 %= 0xFFF1u;
            --v10;
          }
          while ( v10 );
        }
        if ( v3 )
        {
          if ( v3 >= 0x10 )
          {
            v42 = v3 >> 4;
            do
            {
              v43 = *v9 + v5;
              v44 = v43 + v4;
              v45 = v9[1] + v43;
              v46 = v45 + v44;
              v47 = v9[2] + v45;
              v48 = v47 + v46;
              v49 = v9[3] + v47;
              v50 = v49 + v48;
              v51 = v9[4] + v49;
              v52 = v51 + v50;
              v53 = v9[5] + v51;
              v54 = v53 + v52;
              v55 = v9[6] + v53;
              v56 = v55 + v54;
              v57 = v9[7] + v55;
              v58 = v57 + v56;
              v59 = v9[8] + v57;
              v60 = v59 + v58;
              v61 = v9[9] + v59;
              v62 = v61 + v60;
              v63 = v9[10] + v61;
              v64 = v63 + v62;
              v65 = v9[11] + v63;
              v66 = v65 + v64;
              v67 = v9[12] + v65;
              v68 = v67 + v66;
              v69 = v9[13] + v67;
              v70 = v69 + v68;
              v71 = v9[14] + v69;
              v72 = v71 + v70;
              v5 = v9[15] + v71;
              v3 -= 16;
              v4 = v5 + v72;
              v9 += 16;
              --v42;
            }
            while ( v42 );
          }
          for ( ; v3; v4 += v5 )
          {
            v5 += *v9;
            --v3;
            ++v9;
          }
          v5 %= 0xFFF1u;
          v4 %= 0xFFF1u;
        }
        return v5 | (v4 << 16);
      }
      else
      {
        if ( a3 )
        {
          do
          {
            v5 += *v9;
            --v3;
            ++v9;
            v4 += v5;
          }
          while ( v3 );
        }
        if ( v5 >= 0xFFF1 )
          v5 -= 65521;
        return v5 | ((v4 + 15 * (v4 / 0xFFF1)) << 16);
      }
    }
    else
    {
      return 1;
    }
  }
}


//======================================================================
// sub_683F40
// entry 00683f40  size 24  status ok
//======================================================================

int __cdecl sub_683F40(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int i; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  _BYTE *v17; // ecx

  v17 = a2;
  if ( !a2 )
    return 0;
  v3 = a3;
  for ( i = ~a1; v3; --v3 )
  {
    if ( ((unsigned __int8)v17 & 3) == 0 )
      break;
    i = dword_6E2F90[(unsigned __int8)(i ^ *v17++)] ^ (i >> 8);
  }
  if ( v3 >= 0x20 )
  {
    v5 = v3 >> 5;
    do
    {
      v6 = *(_DWORD *)v17 ^ i;
      v7 = v17 + 12;
      v8 = *(v7 - 2)
         ^ dword_6E3B90[(unsigned __int8)v6]
         ^ dword_6E2F90[HIBYTE(v6)]
         ^ dword_6E3790[BYTE1(v6)]
         ^ dword_6E3390[BYTE2(v6)];
      v7 += 3;
      v9 = *(v7 - 4)
         ^ dword_6E3B90[(unsigned __int8)v8]
         ^ dword_6E2F90[HIBYTE(v8)]
         ^ dword_6E3790[BYTE1(v8)]
         ^ dword_6E3390[BYTE2(v8)];
      v10 = *(v7 - 3)
          ^ dword_6E3B90[(unsigned __int8)v9]
          ^ dword_6E2F90[HIBYTE(v9)]
          ^ dword_6E3790[BYTE1(v9)]
          ^ dword_6E3390[BYTE2(v9)];
      v11 = *(v7 - 2)
          ^ dword_6E3B90[(unsigned __int8)v10]
          ^ dword_6E2F90[HIBYTE(v10)]
          ^ dword_6E3790[BYTE1(v10)]
          ^ dword_6E3390[BYTE2(v10)];
      v12 = *(v7 - 1)
          ^ dword_6E3B90[(unsigned __int8)v11]
          ^ dword_6E2F90[HIBYTE(v11)]
          ^ dword_6E3790[BYTE1(v11)]
          ^ dword_6E3390[BYTE2(v11)];
      v13 = *v7
          ^ dword_6E3B90[(unsigned __int8)v12]
          ^ dword_6E2F90[HIBYTE(v12)]
          ^ dword_6E3790[BYTE1(v12)]
          ^ dword_6E3390[BYTE2(v12)];
      v17 = v7 + 2;
      v3 -= 32;
      v14 = *((_DWORD *)v17 - 1)
          ^ dword_6E3B90[(unsigned __int8)v13]
          ^ dword_6E2F90[HIBYTE(v13)]
          ^ dword_6E3790[BYTE1(v13)]
          ^ dword_6E3390[BYTE2(v13)];
      i = dword_6E3B90[(unsigned __int8)v14]
        ^ dword_6E2F90[HIBYTE(v14)]
        ^ dword_6E3790[BYTE1(v14)]
        ^ dword_6E3390[BYTE2(v14)];
      --v5;
    }
    while ( v5 );
  }
  if ( v3 >= 4 )
  {
    v15 = v3 >> 2;
    do
    {
      v16 = *(_DWORD *)v17 ^ i;
      v17 += 4;
      v3 -= 4;
      --v15;
      i = dword_6E3B90[(unsigned __int8)v16]
        ^ dword_6E2F90[HIBYTE(v16)]
        ^ dword_6E3790[BYTE1(v16)]
        ^ dword_6E3390[BYTE2(v16)];
    }
    while ( v15 );
  }
  for ( ; v3; --v3 )
    i = dword_6E2F90[(unsigned __int8)(i ^ *v17++)] ^ (i >> 8);
  return ~i;
}


//======================================================================
// sub_683F60
// entry 00683f60  size 25  status ok
//======================================================================

int sub_683F60()
{
  int v0; // eax
  int Context; // eax

  v0 = alcOpenDevice(0);
  Context = alcCreateContext(v0, 0);
  return alcMakeContextCurrent(Context);
}


//======================================================================
// sub_683F80
// entry 00683f80  size 42  status ok
//======================================================================

int sub_683F80()
{
  int CurrentContext; // esi
  int ContextsDevice; // edi

  CurrentContext = alcGetCurrentContext();
  ContextsDevice = alcGetContextsDevice(CurrentContext);
  alcMakeContextCurrent(0);
  alcDestroyContext(CurrentContext);
  return alcCloseDevice(ContextsDevice);
}


//======================================================================
// sub_683FB0
// entry 00683fb0  size 464  status ok
//======================================================================

unsigned int __cdecl sub_683FB0(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int *a4, _DWORD *a5, bool *a6)
{
  unsigned int result; // eax
  unsigned int *v7; // ebp
  unsigned int v8; // edx
  unsigned int v9; // ebx
  int *v10; // ebp
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  int *v14; // eax
  _BYTE *v15; // edi
  int v16; // [esp+0h] [ebp-70h] BYREF
  unsigned int v17; // [esp+10h] [ebp-60h]
  unsigned int v18; // [esp+14h] [ebp-5Ch]
  int v19; // [esp+18h] [ebp-58h]
  unsigned int v20; // [esp+1Ch] [ebp-54h]
  int v21; // [esp+20h] [ebp-50h]
  int v22; // [esp+24h] [ebp-4Ch]
  int v23; // [esp+2Ch] [ebp-44h]
  int v24; // [esp+30h] [ebp-40h]
  _DWORD v25[15]; // [esp+34h] [ebp-3Ch] BYREF

  *a2 = 4353;
  result = (unsigned int)a5;
  *a3 = 0;
  *a4 = 0;
  *a5 = 22050;
  *a6 = 0;
  if ( a1 )
  {
    v7 = a1 + 3;
    v19 = *a1;
    result = a1[1];
    v21 = a1[2];
    v8 = ((result + 1) & 0xFFFFFFFE) - 4;
    v20 = v8;
    if ( ((result + 1) & 0xFFFFFFFE) != 4 )
    {
      do
      {
        result = *v7;
        v9 = v7[1];
        v17 = *v7;
        v18 = v9;
        if ( &v16 == (int *)-16 )
          return result;
        v10 = (int *)(v7 + 2);
        if ( v17 == *(_DWORD *)aFmt )
        {
          v11 = *v10;
          v12 = (unsigned __int16)*v10 == 1;
          v22 = *v10;
          v13 = v10[1];
          v23 = v10[2];
          v24 = v10[3];
          if ( v12 )
          {
            if ( HIWORD(v22) == (_WORD)v11 )
              *a2 = (HIWORD(v24) != 8) + 4352;
            else
              *a2 = (HIWORD(v24) != 8) + 4354;
            *a5 = v13;
          }
        }
        else
        {
          if ( v17 == *(_DWORD *)aData_0 )
          {
            if ( (_WORD)v22 == 1 )
            {
              *a4 = v9;
              v14 = (int *)malloc(v9 + 31);
              *a3 = v14;
              if ( v14 )
                qmemcpy(v14, v10, v9);
              v15 = (_BYTE *)(v9 + *a3);
              memset(v15, 0, 0x1Cu);
              v15 += 28;
              v8 = v20;
              v10 = (int *)((char *)v10 + v9);
              *(_WORD *)v15 = 0;
              v15[2] = 0;
            }
            goto LABEL_18;
          }
          if ( v17 == *(_DWORD *)aSmpl )
          {
            qmemcpy(v25, v10, sizeof(v25));
            *a6 = v25[7] != 0;
          }
        }
        v10 = (int *)((char *)v10 + v9);
LABEL_18:
        v7 = (unsigned int *)((char *)v10 + (v9 & 1));
        result = -8 - ((v9 + 1) & 0xFFFFFFFE);
        v12 = result + v8 == 0;
        v8 += result;
        v20 = v8;
      }
      while ( !v12 );
    }
  }
  return result;
}


//======================================================================
// sub_684180
// entry 00684180  size 16  status ok
//======================================================================

void __cdecl sub_684180(int a1, void *Block)
{
  if ( Block )
    free(Block);
}


//======================================================================
// alGenBuffers
// entry 00684190  size 6  status ok
//======================================================================

// attributes: thunk
int alGenBuffers()
{
  return __imp_alGenBuffers();
}


//======================================================================
// alGenSources
// entry 00684196  size 6  status ok
//======================================================================

// attributes: thunk
int alGenSources()
{
  return __imp_alGenSources();
}


//======================================================================
// alGetError
// entry 0068419c  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alGetError()
{
  return __imp_alGetError();
}


//======================================================================
// alDeleteSources
// entry 006841a2  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alDeleteSources(int a1, int a2)
{
  return __imp_alDeleteSources(a1, a2);
}


//======================================================================
// alDeleteBuffers
// entry 006841a8  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alDeleteBuffers(int a1, int a2)
{
  return __imp_alDeleteBuffers(a1, a2);
}


//======================================================================
// alSourcei
// entry 006841ae  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourcei(int a1, int a2, int a3)
{
  return __imp_alSourcei(a1, a2, a3);
}


//======================================================================
// alListenerfv
// entry 006841b4  size 6  status ok
//======================================================================

// attributes: thunk
int alListenerfv()
{
  return __imp_alListenerfv();
}


//======================================================================
// alGetListenerfv
// entry 006841ba  size 6  status ok
//======================================================================

// attributes: thunk
int alGetListenerfv()
{
  return __imp_alGetListenerfv();
}


//======================================================================
// alSourcef
// entry 006841c0  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourcef(int a1, int a2, int a3)
{
  return __imp_alSourcef(a1, a2, a3);
}


//======================================================================
// alSourcefv
// entry 006841c6  size 6  status ok
//======================================================================

// attributes: thunk
int alSourcefv()
{
  return __imp_alSourcefv();
}


//======================================================================
// alGetSourcei
// entry 006841cc  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alGetSourcei(int a1, int a2, int a3)
{
  return __imp_alGetSourcei(a1, a2, a3);
}


//======================================================================
// alSourceRewind
// entry 006841d2  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourceRewind(int a1)
{
  return __imp_alSourceRewind(a1);
}


//======================================================================
// alSourceStop
// entry 006841d8  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourceStop(int a1)
{
  return __imp_alSourceStop(a1);
}


//======================================================================
// alSourcePlay
// entry 006841de  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourcePlay(int a1)
{
  return __imp_alSourcePlay(a1);
}


//======================================================================
// alGetBufferi
// entry 006841e4  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alGetBufferi(int a1, int a2, int a3)
{
  return __imp_alGetBufferi(a1, a2, a3);
}


//======================================================================
// alBufferData
// entry 006841ea  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alBufferData(int a1, int a2, int a3, int a4, int a5)
{
  return __imp_alBufferData(a1, a2, a3, a4, a5);
}


//======================================================================
// alSourcePause
// entry 006841f0  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourcePause(int a1)
{
  return __imp_alSourcePause(a1);
}


//======================================================================
// alSource3f
// entry 006841f6  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSource3f(int a1, int a2, int a3, int a4)
{
  return __imp_alSource3f(a1, a2, a3, a4);
}


//======================================================================
// alSourceQueueBuffers
// entry 006841fc  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourceQueueBuffers(int a1, int a2, int a3)
{
  return __imp_alSourceQueueBuffers(a1, a2, a3);
}


//======================================================================
// alSourceUnqueueBuffers
// entry 00684202  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alSourceUnqueueBuffers(int a1, int a2, int a3)
{
  return __imp_alSourceUnqueueBuffers(a1, a2, a3);
}


//======================================================================
// alGetString
// entry 00684208  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alGetString(int a1)
{
  return __imp_alGetString(a1);
}


//======================================================================
// alGetSourcef
// entry 0068420e  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alGetSourcef(int a1, int a2, int a3)
{
  return __imp_alGetSourcef(a1, a2, a3);
}


//======================================================================
// alcMakeContextCurrent
// entry 00684214  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alcMakeContextCurrent(int a1)
{
  return __imp_alcMakeContextCurrent(a1);
}


//======================================================================
// alcCreateContext
// entry 0068421a  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alcCreateContext(int a1, int a2)
{
  return __imp_alcCreateContext(a1, a2);
}


//======================================================================
// alcOpenDevice
// entry 00684220  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alcOpenDevice(int a1)
{
  return __imp_alcOpenDevice(a1);
}


//======================================================================
// alcCloseDevice
// entry 00684226  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alcCloseDevice(int a1)
{
  return __imp_alcCloseDevice(a1);
}


//======================================================================
// alcDestroyContext
// entry 0068422c  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alcDestroyContext(int a1)
{
  return __imp_alcDestroyContext(a1);
}


//======================================================================
// alcGetContextsDevice
// entry 00684232  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl alcGetContextsDevice(int a1)
{
  return __imp_alcGetContextsDevice(a1);
}


//======================================================================
// alcGetCurrentContext
// entry 00684238  size 6  status ok
//======================================================================

// attributes: thunk
int alcGetCurrentContext(void)
{
  return __imp_alcGetCurrentContext();
}


//======================================================================
// sub_684240
// entry 00684240  size 244  status ok
//======================================================================

int __cdecl sub_684240(char *a1)
{
  int v1; // eax
  int v2; // ebp
  int v3; // ebx
  int v4; // esi

  if ( a1 )
  {
    sub_690F20(a1 + 592);
    sub_691320(a1 + 480);
    sub_6863B0(a1 + 120);
    if ( *((_DWORD *)a1 + 18) )
    {
      v1 = *((_DWORD *)a1 + 13);
      if ( v1 )
      {
        v2 = 0;
        if ( v1 > 0 )
        {
          v3 = 0;
          v4 = 0;
          do
          {
            sub_690710(v4 + *((_DWORD *)a1 + 18));
            sub_690670(v3 + *((_DWORD *)a1 + 19));
            ++v2;
            v4 += 32;
            v3 += 16;
          }
          while ( v2 < *((_DWORD *)a1 + 13) );
        }
        free(*((void **)a1 + 18));
        free(*((void **)a1 + 19));
      }
    }
    if ( *((_DWORD *)a1 + 15) )
      free(*((void **)a1 + 15));
    if ( *((_DWORD *)a1 + 17) )
      free(*((void **)a1 + 17));
    if ( *((_DWORD *)a1 + 16) )
      free(*((void **)a1 + 16));
    if ( *((_DWORD *)a1 + 14) )
      free(*((void **)a1 + 14));
    sub_686550(a1 + 24);
    if ( *(_DWORD *)a1 )
      (*((void (__cdecl **)(_DWORD))a1 + 178))(*(_DWORD *)a1);
    memset(a1, 0, 0x2D0u);
  }
  return 0;
}


//======================================================================
// sub_684340
// entry 00684340  size 76  status ok
//======================================================================

int __cdecl sub_684340(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax

  result = sub_684390(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( !result )
    return sub_684720(a2);
  return result;
}


//======================================================================
// sub_684390
// entry 00684390  size 274  status ok
//======================================================================

int __cdecl sub_684390(
        int a1,
        _DWORD *a2,
        const void *a3,
        unsigned int a4,
        int a5,
        int (__cdecl *a6)(int, _DWORD, _DWORD, int),
        int a7,
        int a8)
{
  void *v9; // eax
  int result; // eax
  int v11; // esi
  size_t v12; // [esp-10h] [ebp-20h]
  int v13; // [esp+14h] [ebp+4h]

  if ( a1 )
    v13 = a6(a1, 0, 0, 1);
  else
    v13 = -1;
  memset(a2, 0, 0x2D0u);
  *a2 = a1;
  a2[176] = a5;
  a2[177] = a6;
  a2[178] = a7;
  a2[179] = a8;
  sub_686530(a2 + 6);
  if ( a3 )
  {
    qmemcpy((void *)sub_686580(a2 + 6, a4), a3, a4);
    sub_686600(a2 + 6, a4);
  }
  if ( v13 != -1 )
    a2[1] = 1;
  a2[13] = 1;
  v9 = calloc(1u, 0x20u);
  v12 = a2[13];
  a2[18] = v9;
  a2[19] = calloc(v12, 0x10u);
  sub_686340(a2 + 30, -1);
  result = sub_6844B0(a2, a2[18], a2[19], a2 + 23, 0);
  v11 = result;
  if ( result >= 0 )
  {
    a2[22] = 1;
  }
  else
  {
    *a2 = 0;
    sub_684240((char *)a2);
    return v11;
  }
  return result;
}


//======================================================================
// sub_6844B0
// entry 006844b0  size 315  status ok
//======================================================================

int __cdecl sub_6844B0(int a1, int a2, int a3, _DWORD *a4, _BYTE *a5)
{
  _BYTE *v5; // ebx
  int result; // eax
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // edx
  _BYTE v14[16]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v15[32]; // [esp+20h] [ebp-20h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    result = sub_6845F0(a1, v14, 8500, 0);
    if ( result == -128 && v7 == -1 )
      return result;
    if ( v7 < 0 )
      return -132;
    v5 = v14;
  }
  v8 = a1 + 120;
  v9 = sub_6862E0(v5);
  sub_686AA0(a1 + 120, v9);
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 456);
  *(_DWORD *)(a1 + 88) = 3;
  sub_6906E0(a2);
  sub_690650(a3);
  v10 = 0;
  do
  {
    sub_686760(v8, v5);
    while ( 1 )
    {
      v8 = a1 + 120;
      v11 = sub_686AC0(a1 + 120, v15);
      if ( !v11 )
        break;
      if ( v11 == -1 )
        goto LABEL_17;
      v12 = sub_690880(a2, a3, v15);
      if ( v12 )
        goto LABEL_18;
      if ( ++v10 >= 3 )
        return 0;
    }
    sub_6845F0(a1, v5, 8500, 0);
  }
  while ( v13 >= 0 );
LABEL_17:
  v12 = -133;
LABEL_18:
  sub_690710(a2);
  sub_690670(a3);
  *(_DWORD *)(a1 + 88) = 2;
  return v12;
}


//======================================================================
// sub_6845F0
// entry 006845f0  size 188  status ok
//======================================================================

int __cdecl sub_6845F0(int a1, int a2, __int64 a3)
{
  __int64 v3; // kr00_8
  int v4; // eax
  int v5; // eax
  int v7; // ecx

  v3 = a3;
  if ( a3 > 0 )
    v3 = *(_QWORD *)(a1 + 8) + a3;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v3 > 0 && *(_QWORD *)(a1 + 8) >= v3 )
        return -1;
      v4 = sub_686620(a1 + 24, a2);
      if ( v4 >= 0 )
        break;
      *(_QWORD *)(a1 + 8) -= v4;
    }
    if ( v4 )
      break;
    if ( !v3 )
      return -1;
    v5 = sub_6846B0(a1);
    if ( !v5 )
      return -2;
    if ( v5 < 0 )
      return -128;
  }
  v7 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) += v4;
  return v7;
}


//======================================================================
// sub_6846B0
// entry 006846b0  size 100  status ok
//======================================================================

int __cdecl sub_6846B0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  bool v4; // zf

  *errno() = 0;
  if ( !*(_DWORD *)a1 )
    return 0;
  v1 = sub_686580(a1 + 24, 8500);
  v2 = (*(int (__cdecl **)(int, int, int, _DWORD))(a1 + 704))(v1, 1, 8500, *(_DWORD *)a1);
  v3 = v2;
  v4 = v2 == 0;
  if ( v2 > 0 )
  {
    sub_686600(a1 + 24, v2);
    v4 = v3 == 0;
  }
  if ( v4 && *errno() )
    return -1;
  else
    return v3;
}


//======================================================================
// sub_684720
// entry 00684720  size 79  status ok
//======================================================================

int __cdecl sub_684720(int a1)
{
  int v2; // eax
  int v3; // edi

  if ( *(_DWORD *)(a1 + 88) != 1 )
    return -131;
  v2 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 88) = 2;
  if ( v2 )
  {
    v3 = sub_684770(a1);
    if ( v3 )
    {
      *(_DWORD *)a1 = 0;
      sub_684240((char *)a1);
    }
    return v3;
  }
  else
  {
    *(_DWORD *)(a1 + 88) = 3;
    return 0;
  }
}


//======================================================================
// sub_684770
// entry 00684770  size 248  status ok
//======================================================================

int __cdecl sub_684770(int a1)
{
  int v1; // ebp
  int v2; // eax
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  int v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  _BYTE v9[16]; // [esp+18h] [ebp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 92);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 12);
  (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, int))(a1 + 708))(*(_DWORD *)a1, 0, 0, 2);
  v2 = (*(int (__cdecl **)(_DWORD))(a1 + 716))(*(_DWORD *)a1);
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 8) = v2;
  v3 = sub_684870(a1, v9);
  v4 = HIDWORD(v3);
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( sub_6862E0(v9) == v1 )
    {
      if ( sub_6849D0(a1, 0, 0, v5, v4, v5 + 1, (__PAIR64__(v4, v5) + 1) >> 32, v1, 0) )
      {
        LODWORD(v3) = -128;
        return v3;
      }
    }
    else if ( (int)sub_6849D0(a1, 0, 0, 0, 0, v5 + 1, (__PAIR64__(v4, v5) + 1) >> 32, v1, 0) < 0 )
    {
      LODWORD(v3) = -128;
      return v3;
    }
    sub_684BF0(a1, v7, v8);
    LODWORD(v3) = sub_685070(a1, 0, 0);
  }
  return v3;
}


//======================================================================
// sub_684870
// entry 00684870  size 274  status ok
//======================================================================

int __cdecl sub_684870(int a1, int a2)
{
  int v2; // ebp
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned __int64 i; // kr00_8
  unsigned __int64 v8; // kr08_8
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // edx
  unsigned __int64 v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = -1;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = v3;
  v6 = v4;
  v16 = -1;
  for ( i = __PAIR64__(v4, v3); ; i = v15 )
  {
    v8 = i - 8500;
    v15 = i - 8500;
    if ( (((i - 8500) >> 32) & 0x80000000) != 0LL )
    {
      v15 = 0;
      v8 = 0;
    }
    sub_684990(a1, v8, HIDWORD(v8));
    v9 = *(_DWORD *)(a1 + 12);
    v10 = *(_DWORD *)(a1 + 8);
    if ( __SPAIR64__(v9, v10) < __SPAIR64__(v6, v5) )
      break;
LABEL_10:
    if ( (v16 & v2) != 0xFFFFFFFF )
    {
      sub_684990(a1, v2, v16);
      sub_6845F0(a1, a2, 8500);
      if ( v13 < 0 )
        return -129;
      else
        return v2;
    }
  }
  while ( 1 )
  {
    v11 = sub_6845F0(a1, a2, __PAIR64__(v6, v5) - __PAIR64__(v9, v10));
    if ( v11 == -128 && v12 == -1 )
      return -128;
    if ( v12 >= 0 )
    {
      v10 = *(_DWORD *)(a1 + 8);
      v2 = v11;
      v9 = *(_DWORD *)(a1 + 12);
      v16 = v12;
      if ( __SPAIR64__(v9, v10) < __SPAIR64__(v6, v5) )
        continue;
    }
    goto LABEL_10;
  }
}


//======================================================================
// sub_684990
// entry 00684990  size 54  status ok
//======================================================================

int __cdecl sub_684990(int *a1, int a2, int a3)
{
  int result; // eax

  result = *a1;
  if ( *a1 )
  {
    ((void (__cdecl *)(int, int, int, _DWORD))a1[177])(result, a2, a3, 0);
    a1[2] = a2;
    a1[3] = a3;
    return sub_686A30(a1 + 6);
  }
  return result;
}


//======================================================================
// sub_6849D0
// entry 006849d0  size 540  status ok
//======================================================================

int __cdecl sub_6849D0(int *a1, int a2, int a3, signed __int64 a4, signed __int64 a5, int a6, int a7)
{
  unsigned int v7; // ebp
  signed __int64 v8; // kr00_8
  signed __int64 v9; // kr10_8
  __int64 v10; // kr08_8
  int v11; // eax
  int v12; // edx
  int v13; // edi
  int result; // eax
  int v15; // edx
  int v16; // esi
  int v17; // eax
  void *v18; // eax
  int v19; // edx
  int v20; // ecx
  signed __int64 v21; // [esp+10h] [ebp-28h]
  unsigned __int64 v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+20h] [ebp-18h]
  char v24[4]; // [esp+28h] [ebp-10h] BYREF
  int v25; // [esp+2Ch] [ebp-Ch]
  int v26; // [esp+34h] [ebp-4h]

  v7 = HIDWORD(a5);
  v21 = a5;
  v22 = a5;
  v8 = a5;
  v9 = a4;
  if ( a4 < a5 )
  {
    while ( 1 )
    {
      if ( v8 - v9 >= 8500 )
        v10 = (v9 + v8) / 2;
      else
        v10 = v9;
      sub_684990(a1, v10, SHIDWORD(v10));
      v11 = sub_6845F0((int)a1, (int)v24, -1);
      v23 = v11;
      v13 = v12;
      if ( v11 == -128 && v12 == -1 )
        return -128;
      if ( v12 >= 0 )
      {
        if ( sub_6862E0(v24) == a6 )
        {
          v9 = __PAIR64__(v13, v23) + v25 + (__int64)v26;
          goto LABEL_15;
        }
        v11 = v23;
      }
      v21 = v10;
      if ( v13 >= 0 )
        v22 = __PAIR64__(v13, v11);
LABEL_15:
      if ( v9 >= v21 )
      {
        v7 = HIDWORD(a5);
        break;
      }
      v8 = v21;
    }
  }
  sub_684990(a1, v22, SHIDWORD(v22));
  result = sub_6845F0((int)a1, (int)v24, -1);
  if ( result != -128 || v15 != -1 )
  {
    if ( v9 >= __SPAIR64__(v7, a5) || v15 < 0 )
    {
      a1[13] = a7 + 1;
      v18 = malloc(8 * (a7 + 1) + 8);
      v19 = a1[13];
      a1[14] = (int)v18;
      a1[16] = (int)malloc(4 * v19);
      *(_QWORD *)(a1[14] + 8 * (a7 + 1)) = v9;
      v16 = a7;
    }
    else
    {
      v16 = a7;
      v17 = sub_6862E0(v24);
      if ( sub_6849D0(a1, v22, HIDWORD(v22), a1[2], a1[3], a5, v7, v17, a7 + 1) == -128 )
        return -128;
    }
    v20 = a1[14];
    *(_DWORD *)(v20 + 8 * v16) = a2;
    *(_DWORD *)(v20 + 8 * v16 + 4) = a3;
    *(_DWORD *)(a1[16] + 4 * v16) = a6;
    return 0;
  }
  return result;
}


//======================================================================
// sub_684BF0
// entry 00684bf0  size 726  status ok
//======================================================================

int __cdecl sub_684BF0(int a1, int a2, int a3)
{
  void *v3; // eax
  int v4; // edx
  void *v5; // eax
  int v6; // ecx
  void *v7; // eax
  int v8; // edx
  int result; // eax
  int i; // edi
  int *v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // edx
  int v16; // eax
  bool v17; // cc
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // ebp
  __int64 v25; // rax
  _QWORD *v26; // ebx
  __int64 v27; // [esp+Ch] [ebp-38h]
  _BYTE v28[16]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v29[32]; // [esp+24h] [ebp-20h] BYREF

  v3 = realloc(*(void **)(a1 + 72), 32 * *(_DWORD *)(a1 + 52));
  v4 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 72) = v3;
  v5 = realloc(*(void **)(a1 + 76), 16 * v4);
  v6 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 76) = v5;
  v7 = malloc(8 * v6);
  v8 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 60) = v7;
  *(_DWORD *)(a1 + 68) = malloc(16 * v8);
  result = *(_DWORD *)(a1 + 52);
  for ( i = 0; i < result; ++i )
  {
    if ( i )
    {
      sub_684990((int *)a1, *(_DWORD *)(*(_DWORD *)(a1 + 56) + 8 * i), *(_DWORD *)(*(_DWORD *)(a1 + 56) + 8 * i + 4));
      if ( sub_6844B0(a1, *(_DWORD *)(a1 + 72) + 32 * i, *(_DWORD *)(a1 + 76) + 16 * i, 0, 0) >= 0 )
      {
        v13 = *(_DWORD *)(a1 + 60);
        *(_DWORD *)(v13 + 8 * i) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(v13 + 8 * i + 4) = *(_DWORD *)(a1 + 12);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 60);
        *(_DWORD *)(v12 + 8 * i) = -1;
        *(_DWORD *)(v12 + 8 * i + 4) = -1;
      }
    }
    else
    {
      v11 = *(int **)(a1 + 60);
      *v11 = a2;
      v11[1] = a3;
      sub_684990((int *)a1, a2, a3);
    }
    if ( (*(_DWORD *)(*(_DWORD *)(a1 + 60) + 8 * i + 4) & *(_DWORD *)(*(_DWORD *)(a1 + 60) + 8 * i)) != -1 )
    {
      v27 = 0;
      v14 = -1;
      sub_686AA0(a1 + 120, *(_DWORD *)(*(_DWORD *)(a1 + 64) + 4 * i));
      while ( 1 )
      {
        sub_6845F0(a1, (int)v28, -1);
        if ( v15 < 0 || sub_6862E0(v28) != *(_DWORD *)(*(_DWORD *)(a1 + 64) + 4 * i) )
          break;
        sub_686760(a1 + 120, v28);
        v16 = sub_686AC0(a1 + 120, v29);
        v17 = v16 <= 0;
        if ( v16 )
        {
          do
          {
            if ( !v17 )
            {
              v18 = sub_691E20(*(_DWORD *)(a1 + 72) + 32 * i, v29);
              if ( v14 != -1 )
                v27 += (v18 + v14) >> 2;
              v14 = v18;
            }
            v19 = sub_686AC0(a1 + 120, v29);
            v17 = v19 <= 0;
          }
          while ( v19 );
        }
        v20 = sub_686250(v28);
        if ( (HIDWORD(v20) & (unsigned int)v20) != 0xFFFFFFFF )
        {
          v27 = sub_686250(v28) - v27;
          break;
        }
      }
      if ( v27 < 0 )
        v27 = 0;
      *(_QWORD *)(16 * i + *(_DWORD *)(a1 + 68)) = v27;
    }
    sub_684990((int *)a1, *(_DWORD *)(*(_DWORD *)(a1 + 56) + 8 * i + 8), *(_DWORD *)(*(_DWORD *)(a1 + 56) + 8 * i + 12));
    while ( 1 )
    {
      v21 = sub_684870(a1, (int)v28);
      v23 = v22;
      v24 = v21;
      if ( v22 < 0 )
      {
        sub_690710(*(_DWORD *)(a1 + 72) + 32 * i);
        sub_690670(*(_DWORD *)(a1 + 76) + 16 * i);
        goto LABEL_28;
      }
      v25 = sub_686250(v28);
      if ( (HIDWORD(v25) & (unsigned int)v25) != 0xFFFFFFFF )
        break;
      *(_DWORD *)(a1 + 8) = v24;
      *(_DWORD *)(a1 + 12) = v23;
    }
    v26 = (_QWORD *)(16 * i + *(_DWORD *)(a1 + 68));
    v26[1] = sub_686250(v28) - *v26;
LABEL_28:
    result = *(_DWORD *)(a1 + 52);
  }
  return result;
}


//======================================================================
// sub_684ED0
// entry 00684ed0  size 69  status ok
//======================================================================

int __cdecl sub_684ED0(int a1, int a2, int a3, int a4)
{
  return sub_684340(a1, a2, a3, a4, (int)fread, (int)sub_684F20, (int)fclose, (int)ftell);
}


//======================================================================
// sub_684F20
// entry 00684f20  size 32  status ok
//======================================================================

int __cdecl sub_684F20(FILE *Stream, int Offset, int a3, int Origin)
{
  if ( Stream )
    return fseek(Stream, Offset, Origin);
  else
    return -1;
}


//======================================================================
// sub_684F40
// entry 00684f40  size 41  status ok
//======================================================================

int __cdecl sub_684F40(int a1)
{
  int result; // eax

  sub_691320(a1 + 480);
  result = sub_690F20(a1 + 592);
  *(_DWORD *)(a1 + 88) = 2;
  return result;
}


//======================================================================
// sub_684F70
// entry 00684f70  size 106  status ok
//======================================================================

int __cdecl sub_684F70(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // esi
  __int64 v5; // kr00_8
  __int64 v6; // rax

  v2 = a1;
  if ( (int)a1[22] >= 2 && a1[1] && (v3 = a1[13], a2 < v3) )
  {
    if ( a2 >= 0 )
    {
      return *(_QWORD *)(a1[17] + 16 * a2 + 8);
    }
    else
    {
      v4 = 0;
      v5 = 0;
      if ( v3 > 0 )
      {
        while ( 1 )
        {
          v5 += sub_684F70(v2, v4++);
          if ( v4 >= v3 )
            break;
          v2 = a1;
        }
      }
      LODWORD(v6) = v5;
    }
  }
  else
  {
    LODWORD(v6) = -131;
  }
  return v6;
}


//======================================================================
// sub_684FE0
// entry 00684fe0  size 140  status ok
//======================================================================

double __cdecl sub_684FE0(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // esi
  double v4; // st7
  double i; // [esp+10h] [ebp-8h]

  if ( (int)a1[22] < 2 )
    return -131.0;
  if ( !a1[1] )
    return -131.0;
  v2 = a1[13];
  if ( a2 >= v2 )
    return -131.0;
  if ( a2 >= 0 )
    return (double)*(__int64 *)(a1[17] + 16 * a2 + 8) / (double)*(int *)(a1[18] + 32 * a2 + 8);
  v3 = 0;
  for ( i = 0.0; v3 < v2; i = v4 + i )
    v4 = sub_684FE0(a1, v3++);
  return i;
}


//======================================================================
// sub_685070
// entry 00685070  size 784  status ok
//======================================================================

int __cdecl sub_685070(int a1, __int64 a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // edi
  int v11; // edx
  int v12; // eax
  __int64 v13; // kr00_8
  _QWORD *v14; // eax
  __int64 v15; // kr08_8
  int v16; // eax
  int v17; // edx
  int v18; // [esp+10h] [ebp-1A4h]
  int v19; // [esp+14h] [ebp-1A0h]
  int v20; // [esp+18h] [ebp-19Ch]
  _BYTE v21[16]; // [esp+1Ch] [ebp-198h] BYREF
  _BYTE v22[16]; // [esp+2Ch] [ebp-188h] BYREF
  __int64 v23; // [esp+3Ch] [ebp-178h]
  _BYTE v24[360]; // [esp+4Ch] [ebp-168h] BYREF

  if ( *(int *)(a1 + 88) < 2 )
    return -131;
  if ( !*(_DWORD *)(a1 + 4) )
    return -138;
  if ( a2 < 0 || a2 > *(_QWORD *)(a1 + 16) )
    return -131;
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 84) = -1;
  sub_686AA0(a1 + 120, *(_DWORD *)(a1 + 92));
  sub_691550(a1 + 480);
  sub_684990((int *)a1, a2, SHIDWORD(a2));
  v3 = 0;
  v18 = 0;
  v19 = 0;
  sub_686340(v24, *(_DWORD *)(a1 + 92));
  sub_686A50(v24);
  while ( 1 )
  {
    while ( *(int *)(a1 + 88) < 3 || (int)sub_686AC0(v24, v22) <= 0 )
    {
LABEL_19:
      if ( v3 )
      {
        v16 = -1;
        *(_DWORD *)(a1 + 84) = -1;
        goto LABEL_42;
      }
      sub_6845F0(a1, (int)v21, -1);
      if ( v6 < 0 )
      {
        v16 = sub_684F70((_DWORD *)a1, -1);
        *(_DWORD *)(a1 + 84) = v17;
LABEL_42:
        *(_DWORD *)(a1 + 80) = v16;
        goto LABEL_43;
      }
      if ( *(int *)(a1 + 88) < 3 )
        goto LABEL_25;
      if ( *(_DWORD *)(a1 + 92) != sub_6862E0(v21) )
      {
        sub_684F40(a1);
        sub_6863B0(v24);
      }
      if ( *(int *)(a1 + 88) < 3 )
      {
LABEL_25:
        v7 = sub_6862E0(v21);
        v8 = *(_DWORD *)(a1 + 52);
        v9 = 0;
        *(_DWORD *)(a1 + 92) = v7;
        if ( v8 > 0 )
        {
          v10 = *(_DWORD **)(a1 + 64);
          do
          {
            if ( *v10 == v7 )
              break;
            ++v9;
            ++v10;
          }
          while ( v9 < v8 );
          v3 = v18;
        }
        if ( v9 == v8 )
        {
          *(_DWORD *)(a1 + 80) = -1;
          *(_DWORD *)(a1 + 84) = -1;
          sub_6863B0(v24);
          sub_684F40(a1);
          return -137;
        }
        *(_DWORD *)(a1 + 96) = v9;
        sub_686AA0(a1 + 120, v7);
        sub_686AA0(v24, *(_DWORD *)(a1 + 92));
        *(_DWORD *)(a1 + 88) = 3;
      }
      sub_686760(a1 + 120, v21);
      sub_686760(v24, v21);
      v20 = sub_686240(v21);
    }
    v4 = 32 * *(_DWORD *)(a1 + 96) + *(_DWORD *)(a1 + 72);
    if ( !*(_DWORD *)(v4 + 28) )
    {
      sub_686AC0(a1 + 120, 0);
      goto LABEL_19;
    }
    v5 = sub_691E20(v4, v22);
    if ( v5 >= 0 )
    {
      if ( v20 )
      {
        sub_686AC0(a1 + 120, 0);
      }
      else if ( v3 )
      {
        v19 += (v5 + v3) >> 2;
      }
    }
    else
    {
      sub_686AC0(a1 + 120, 0);
      v5 = 0;
    }
    if ( (HIDWORD(v23) & (unsigned int)v23) != 0xFFFFFFFF )
      break;
    v18 = v5;
    v3 = v5;
  }
  v11 = *(_DWORD *)(a1 + 96);
  v12 = *(_DWORD *)(a1 + 68);
  v13 = v23 - *(_QWORD *)(16 * v11 + v12);
  if ( v13 < 0 )
    v13 = 0;
  if ( v11 > 0 )
  {
    v14 = (_QWORD *)(v12 + 8);
    do
    {
      v15 = *v14 + v13;
      v14 += 2;
      --v11;
      v13 = v15;
    }
    while ( v11 );
  }
  *(_QWORD *)(a1 + 80) = v13 - v19;
LABEL_43:
  sub_6863B0(v24);
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  return 0;
}


//======================================================================
// sub_685380
// entry 00685380  size 1516  status ok
//======================================================================

int __cdecl sub_685380(int a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // ecx
  _QWORD *v5; // esi
  int v6; // esi
  __int64 v7; // rcx
  signed __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // esi
  int v17; // edx
  bool v18; // cf
  int v19; // edi
  int v20; // ecx
  int v21; // esi
  int v22; // edx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // [esp+10h] [ebp-84h]
  unsigned __int64 v26; // [esp+18h] [ebp-7Ch]
  unsigned int v27; // [esp+20h] [ebp-74h]
  __int64 v28; // [esp+28h] [ebp-6Ch]
  int v29; // [esp+30h] [ebp-64h]
  __int64 v30; // [esp+34h] [ebp-60h]
  __int64 v31; // [esp+3Ch] [ebp-58h]
  unsigned __int64 v32; // [esp+44h] [ebp-50h]
  __int64 v33; // [esp+4Ch] [ebp-48h]
  _QWORD v34[2]; // [esp+54h] [ebp-40h] BYREF
  _BYTE v35[16]; // [esp+64h] [ebp-30h] BYREF
  char v36[16]; // [esp+74h] [ebp-20h] BYREF
  unsigned int v37; // [esp+84h] [ebp-10h]
  int v38; // [esp+88h] [ebp-Ch]

  LODWORD(v2) = sub_684F70((_DWORD *)a1, -1);
  v28 = v2;
  if ( *(int *)(a1 + 88) < 2 )
    return -131;
  if ( !*(_DWORD *)(a1 + 4) )
    return -138;
  if ( a2 < 0 || a2 > v2 )
    return -131;
  v4 = *(_DWORD *)(a1 + 52) - 1;
  v29 = v4;
  if ( v4 >= 0 )
  {
    v5 = (_QWORD *)(*(_DWORD *)(a1 + 68) + 16 * v4 + 8);
    do
    {
      v2 -= *v5;
      if ( a2 >= v2 )
        break;
      --v4;
      v5 -= 2;
    }
    while ( v4 >= 0 );
    v29 = v4;
    v28 = v2;
  }
  v6 = *(_DWORD *)(a1 + 56);
  HIDWORD(v7) = *(_DWORD *)(v6 + 8 * v4 + 4);
  v25 = *(_QWORD *)(v6 + 8 * v4 + 8);
  v27 = *(_DWORD *)(v6 + 8 * v4);
  LODWORD(v7) = *(_DWORD *)(a1 + 68) + 16 * v4;
  v32 = __PAIR64__(HIDWORD(v7), v27);
  v31 = *(_QWORD *)v7;
  v33 = *(_QWORD *)v7 + *(_QWORD *)(v7 + 8);
  v30 = a2 + *(_QWORD *)v7 - v28;
  if ( __SPAIR64__(HIDWORD(v7), v27) < v25 )
  {
LABEL_12:
    if ( (__int64)(v25 - __PAIR64__(HIDWORD(v7), v27)) >= 8500 )
    {
      LODWORD(v7) = v27;
      v8 = v7 + (__int64)((v30 - v31) * (v25 - __PAIR64__(HIDWORD(v7), v27))) / (v33 - v31) - 8500;
      if ( v8 <= __SPAIR64__(HIDWORD(v7), v27) )
        v8 = __PAIR64__(HIDWORD(v7), v27) + 1;
    }
    else
    {
      v8 = __PAIR64__(HIDWORD(v7), v27);
    }
    sub_684990((int *)a1, v8, SHIDWORD(v8));
    while ( 1 )
    {
      LODWORD(v26) = sub_6845F0(a1, (int)v35, v25 - *(_QWORD *)(a1 + 8));
      HIDWORD(v26) = v9;
      if ( (_DWORD)v26 == -128 && v9 == -1 )
        goto LABEL_60;
      if ( v9 < 0 )
        break;
      v10 = sub_686250(v35);
      if ( (HIDWORD(v10) & (unsigned int)v10) != 0xFFFFFFFF )
      {
        if ( v10 >= v30 )
        {
          LODWORD(v34[0]) = v27 + 1;
          HIDWORD(v34[0]) = __CFADD__(v27, 1) + HIDWORD(v7);
          if ( v8 <= (__int64)(__PAIR64__(HIDWORD(v7), v27) + 1) )
            goto LABEL_37;
          if ( v25 != *(_QWORD *)(a1 + 8) )
          {
            v33 = v10;
            v25 = v26;
LABEL_36:
            if ( __SPAIR64__(HIDWORD(v7), v27) < v25 )
              goto LABEL_12;
            goto LABEL_37;
          }
          v25 = v26;
          v8 -= 8500LL;
          if ( v8 <= __SPAIR64__(HIDWORD(v7), v27) )
            v8 = v34[0];
          goto LABEL_32;
        }
        LODWORD(v8) = *(_DWORD *)(a1 + 8);
        v32 = v26;
        HIDWORD(v7) = *(_DWORD *)(a1 + 12);
        v31 = v10;
        v27 = v8;
        if ( v30 - v10 > 44100 )
          goto LABEL_36;
        HIDWORD(v8) = *(_DWORD *)(a1 + 12);
      }
LABEL_33:
      if ( __SPAIR64__(HIDWORD(v7), v27) >= v25 )
        goto LABEL_37;
    }
    LODWORD(v7) = v27;
    if ( v8 <= v7 + 1 )
      goto LABEL_37;
    if ( !v8 )
      goto LABEL_60;
    v8 -= 8500LL;
    if ( v8 <= __SPAIR64__(HIDWORD(v7), v27) )
      v8 = v7 + 1;
LABEL_32:
    sub_684990((int *)a1, v8, SHIDWORD(v8));
    goto LABEL_33;
  }
LABEL_37:
  sub_684990((int *)a1, v32, SHIDWORD(v32));
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 84) = -1;
  sub_6845F0(a1, (int)v34, -1);
  if ( v11 < 0 )
    return -2;
  if ( v29 == *(_DWORD *)(a1 + 96) )
  {
    sub_691550(a1 + 480);
  }
  else
  {
    sub_684F40(a1);
    *(_DWORD *)(a1 + 96) = v29;
    *(_DWORD *)(a1 + 92) = sub_6862E0(v34);
    *(_DWORD *)(a1 + 88) = 3;
  }
  sub_686AA0(a1 + 120, *(_DWORD *)(a1 + 92));
  sub_686760(a1 + 120, v34);
  while ( 1 )
  {
    v12 = sub_686C10(a1 + 120, v36);
    if ( !v12 )
    {
      sub_684990((int *)a1, v32, SHIDWORD(v32));
      while ( 1 )
      {
        LODWORD(v14) = sub_684870(a1, (int)v34);
        v15 = v14;
        LODWORD(v26) = v14;
        if ( v14 < 0 )
          break;
        if ( (int)((unsigned __int64)sub_686250(v34) >> 32) > -1 || !sub_686220(v34) )
          return sub_685070(a1, v15);
        *(_QWORD *)(a1 + 8) = v15;
      }
      goto LABEL_60;
    }
    if ( v12 >> 31 < 0 )
    {
      LODWORD(v26) = -136;
      goto LABEL_60;
    }
    v13 = v38;
    if ( (v38 & v37) != 0xFFFFFFFF )
      break;
    sub_686AC0(a1 + 120, 0);
  }
  v16 = *(_DWORD *)(a1 + 68);
  v17 = 16 * *(_DWORD *)(a1 + 96);
  v18 = v37 < *(_DWORD *)(v17 + v16);
  v19 = *(_DWORD *)(v17 + v16 + 4);
  *(_DWORD *)(a1 + 80) = v37 - *(_DWORD *)(v17 + v16);
  v20 = v13 - (v18 + v19);
  *(_DWORD *)(a1 + 84) = v20;
  if ( v20 < 0 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 84) = 0;
  }
  v21 = *(_DWORD *)(a1 + 80);
  v22 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 80) = v28 + v21;
  v23 = HIDWORD(v28) + __CFADD__((_DWORD)v28, v21) + v22;
  *(_DWORD *)(a1 + 84) = v23;
  if ( __SPAIR64__(v23, *(_DWORD *)(a1 + 80)) <= a2 )
  {
    LODWORD(v24) = sub_684F70((_DWORD *)a1, -1);
    if ( a2 <= v24 )
    {
      *(_DWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 108) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 116) = 0;
      return 0;
    }
  }
  LODWORD(v26) = -129;
LABEL_60:
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 84) = -1;
  sub_684F40(a1);
  return v26;
}


//======================================================================
// sub_685970
// entry 00685970  size 122  status ok
//======================================================================

int __cdecl sub_685970(_DWORD *a1)
{
  int v1; // eax
  int v3; // eax

  v1 = a1[22];
  if ( v1 <= 3 )
  {
    if ( v1 < 3 )
      return -129;
    if ( a1[1] )
      v3 = sub_6915C0(a1 + 120, a1[18] + 32 * a1[24]);
    else
      v3 = sub_6915C0(a1 + 120, a1[18]);
    if ( v3 )
      return -137;
    sub_690DF0(a1 + 120, a1 + 148);
    a1[22] = 4;
    a1[26] = 0;
    a1[27] = 0;
    a1[28] = 0;
    a1[29] = 0;
  }
  return 0;
}


//======================================================================
// sub_6859F0
// entry 006859f0  size 706  status ok
//======================================================================

int __cdecl sub_6859F0(int a1, char *a2, int a3, int a4)
{
  char *v4; // edi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ebp
  int result; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // edi
  unsigned __int64 v16; // kr00_8
  unsigned __int64 v17; // kr08_8
  _QWORD *v18; // eax
  unsigned __int64 v19; // kr10_8
  _BYTE v20[4]; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch]
  char v22; // [esp+20h] [ebp-20h] BYREF

  while ( *(_DWORD *)(a1 + 88) != 4 )
  {
LABEL_9:
    if ( *(int *)(a1 + 88) < 2 )
      goto LABEL_17;
    if ( !a3 )
      return 0;
    if ( sub_6845F0(a1, (int)v20, -1) < 0 )
      return -2;
    v9 = *(_DWORD *)(a1 + 88);
    *(double *)(a1 + 104) = (double)(8 * v21) + *(double *)(a1 + 104);
    if ( v9 == 4 )
    {
      if ( *(_DWORD *)(a1 + 92) != sub_6862E0(v20) )
      {
        if ( !a4 )
          return -2;
        sub_684F40(a1);
        if ( !*(_DWORD *)(a1 + 4) )
        {
          sub_690710(*(_DWORD *)(a1 + 72));
          sub_690670(*(_DWORD *)(a1 + 76));
        }
      }
LABEL_17:
      v9 = *(_DWORD *)(a1 + 88);
      if ( v9 == 4 )
        goto LABEL_29;
    }
    if ( v9 < 3 )
    {
      if ( *(_DWORD *)(a1 + 4) )
      {
        v10 = sub_6862E0(v20);
        v11 = *(_DWORD *)(a1 + 52);
        v12 = 0;
        *(_DWORD *)(a1 + 92) = v10;
        if ( v11 > 0 )
        {
          v13 = *(_DWORD **)(a1 + 64);
          do
          {
            if ( *v13 == v10 )
              break;
            ++v12;
            ++v13;
          }
          while ( v12 < v11 );
        }
        if ( v12 == v11 )
          return -137;
        *(_DWORD *)(a1 + 96) = v12;
        sub_686AA0(a1 + 120, v10);
        *(_DWORD *)(a1 + 88) = 3;
      }
      else
      {
        result = sub_6844B0(a1, *(_DWORD *)(a1 + 72), *(_DWORD *)(a1 + 76), (_DWORD *)(a1 + 92), v20);
        if ( result )
          return result;
        ++*(_DWORD *)(a1 + 96);
      }
    }
    result = sub_685970((_DWORD *)a1);
    if ( result < 0 )
      return result;
LABEL_29:
    sub_686760(a1 + 120, v20);
  }
  do
  {
    v4 = a2;
    if ( !a2 )
      v4 = &v22;
    v5 = sub_686AC0(a1 + 120, v4);
    a2 = 0;
    if ( v5 == -1 )
      return -3;
    if ( v5 <= 0 )
      goto LABEL_9;
    v6 = *((_DWORD *)v4 + 4);
    v7 = *((_DWORD *)v4 + 5);
  }
  while ( sub_691CD0(a1 + 592, v4) );
  if ( sub_691C40(a1 + 480, 0) )
    return -129;
  sub_6915F0(a1 + 480, a1 + 592);
  *(double *)(a1 + 112) = (double)(int)sub_691C40(a1 + 480, 0) + *(double *)(a1 + 112);
  *(double *)(a1 + 104) = (double)(8 * *((_DWORD *)v4 + 1)) + *(double *)(a1 + 104);
  if ( (v7 & v6) != 0xFFFFFFFF && !*((_DWORD *)v4 + 3) )
  {
    v14 = *(_DWORD *)(a1 + 4);
    if ( v14 )
      v15 = *(_DWORD *)(a1 + 96);
    else
      v15 = 0;
    if ( v14 && v15 > 0 )
    {
      v16 = __PAIR64__(v7, v6) - *(_QWORD *)(16 * v15 + *(_DWORD *)(a1 + 68));
      v7 = HIDWORD(v16);
      v6 = v16;
    }
    if ( v7 < 0 )
    {
      v6 = 0;
      v7 = 0;
    }
    v17 = __PAIR64__(v7, v6) - (int)sub_691C40(a1 + 480, 0);
    if ( v15 > 0 )
    {
      v18 = (_QWORD *)(*(_DWORD *)(a1 + 68) + 8);
      do
      {
        v19 = *v18 + v17;
        v18 += 2;
        --v15;
        v17 = v19;
      }
      while ( v15 );
    }
    *(_QWORD *)(a1 + 80) = v17;
  }
  return 1;
}


//======================================================================
// sub_685CC0
// entry 00685cc0  size 262  status ok
//======================================================================

int __cdecl sub_685CC0(_DWORD *a1, double a2)
{
  __int64 v2; // rax
  __int16 v4; // fps
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int v8; // esi
  _QWORD *v9; // ebx
  __int16 v10; // fps
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  __int64 v14; // [esp+10h] [ebp-10h]
  double v15; // [esp+18h] [ebp-8h]

  LODWORD(v2) = sub_684F70(a1, -1);
  v14 = v2;
  v15 = sub_684FE0(a1, -1);
  if ( (int)a1[22] < 2 )
    return -131;
  if ( !a1[1] )
    return -138;
  if ( a2 < 0.0 )
    return -131;
  v5 = a2 < v15;
  v6 = 0;
  v7 = a2 == v15;
  if ( (v4 & 0x4100) == 0 )
    return -131;
  v8 = a1[13] - 1;
  if ( v8 >= 0 )
  {
    v9 = (_QWORD *)(a1[17] + 16 * v8 + 8);
    do
    {
      v14 -= *v9;
      v15 = v15 - sub_684FE0(a1, v8);
      v11 = a2 < v15;
      v12 = 0;
      v13 = a2 == v15;
      if ( (v10 & 0x100) == 0 )
        break;
      --v8;
      v9 -= 2;
    }
    while ( v8 >= 0 );
  }
  return sub_685380((int)a1, (__int64)((double)*(int *)(a1[18] + 32 * v8 + 8) * (a2 - v15) + (double)v14));
}


//======================================================================
// sub_685DD0
// entry 00685dd0  size 49  status ok
//======================================================================

int __cdecl sub_685DD0(_DWORD *a1, int a2)
{
  int v2; // eax

  if ( !a1[1] )
    return a1[18];
  v2 = a2;
  if ( a2 < 0 )
  {
    if ( (int)a1[22] >= 3 )
    {
      v2 = a1[24];
      return a1[18] + 32 * v2;
    }
    return a1[18];
  }
  if ( a2 < a1[13] )
    return a1[18] + 32 * v2;
  return 0;
}


//======================================================================
// sub_685E10
// entry 00685e10  size 49  status ok
//======================================================================

int __cdecl sub_685E10(_DWORD *a1, int a2)
{
  int v2; // eax

  if ( !a1[1] )
    return a1[19];
  v2 = a2;
  if ( a2 < 0 )
  {
    if ( (int)a1[22] >= 3 )
    {
      v2 = a1[24];
      return a1[19] + 16 * v2;
    }
    return a1[19];
  }
  if ( a2 < a1[13] )
    return a1[19] + 16 * v2;
  return 0;
}


//======================================================================
// sub_685E50
// entry 00685e50  size 943  status ok
//======================================================================

int __cdecl sub_685E50(_DWORD *a1, _BYTE *a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  _DWORD *v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // edi
  _BYTE *v11; // esi
  int v12; // eax
  int v13; // ecx
  char v14; // bl
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  _WORD *v18; // edx
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // ecx
  _WORD *v23; // edx
  int v24; // esi
  int v25; // eax
  int v26; // edi
  int v27; // ecx
  int v28; // edi
  _BYTE *v29; // esi
  int i; // ecx
  int v31; // eax
  __int16 v32; // ax
  _BYTE *v33; // esi
  int v34; // esi
  _BYTE *v35; // edx
  int j; // ecx
  int v37; // eax
  __int16 v38; // ax
  _BYTE *v39; // edx
  int v40; // [esp+Ch] [ebp-2Ch] BYREF
  int v41; // [esp+10h] [ebp-28h]
  int v42; // [esp+14h] [ebp-24h]
  int v43; // [esp+18h] [ebp-20h]
  int v44; // [esp+1Ch] [ebp-1Ch]
  int v45; // [esp+20h] [ebp-18h]
  int v46; // [esp+24h] [ebp-14h]
  double v47; // [esp+28h] [ebp-10h]
  double v48; // [esp+30h] [ebp-8h]

  v7 = a1;
  v45 = sub_686200();
  if ( (int)a1[22] < 2 )
    return -131;
  while ( 1 )
  {
    if ( a1[22] == 4 )
    {
      result = sub_691C40(a1 + 120, &v40);
      v9 = result;
      v43 = result;
      if ( result )
        break;
    }
    result = sub_6859F0((int)a1, 0, 1, 1);
    if ( result == -2 )
      return 0;
    if ( result <= 0 )
      return result;
  }
  if ( result > 0 )
  {
    v41 = *(_DWORD *)(sub_685DD0(a1, -1) + 4);
    v46 = a5 * v41;
    if ( v9 > a3 / (a5 * v41) )
    {
      v43 = a3 / (a5 * v41);
      v9 = v43;
    }
    if ( v9 <= 0 )
      return -131;
    if ( a5 == 1 )
    {
      v10 = 0;
      v11 = a2;
      do
      {
        v12 = 0;
        if ( v41 > 0 )
        {
          do
          {
            v47 = *(float *)(*(_DWORD *)(v40 + 4 * v12) + 4 * v10) * 128.0;
            v45 = (int)v47;
            v13 = (int)v47;
            if ( (int)v47 <= 127 )
            {
              if ( v13 < -128 )
                LOBYTE(v13) = 0x80;
            }
            else
            {
              LOBYTE(v13) = 127;
            }
            v14 = v13 + (a6 != 0 ? 0 : 0x80);
            v15 = v41;
            *v11++ = v14;
            ++v12;
          }
          while ( v12 < v15 );
          v9 = v43;
        }
        ++v10;
      }
      while ( v10 < v9 );
LABEL_67:
      v7 = a1;
      goto LABEL_68;
    }
    v16 = a6 != 0 ? 0 : 0x8000;
    v44 = v16;
    if ( v45 != a4 )
    {
      if ( a4 )
      {
        v28 = 0;
        v29 = a2;
        do
        {
          for ( i = 0; i < v41; ++i )
          {
            v48 = *(float *)(*(_DWORD *)(v40 + 4 * i) + 4 * v28) * 32768.0;
            LODWORD(v47) = (int)v48;
            v31 = (int)v48;
            if ( (int)v48 <= 0x7FFF )
            {
              if ( v31 < -32768 )
                LOWORD(v31) = 0x8000;
            }
            else
            {
              LOWORD(v31) = 0x7FFF;
            }
            v32 = v16 + v31;
            *v29 = HIBYTE(v32);
            v33 = v29 + 1;
            LOWORD(v16) = v44;
            *v33 = v32;
            v29 = v33 + 1;
          }
          ++v28;
        }
        while ( v28 < v9 );
      }
      else
      {
        v34 = 0;
        v35 = a2;
        do
        {
          for ( j = 0; j < v41; ++j )
          {
            v48 = *(float *)(*(_DWORD *)(v40 + 4 * j) + 4 * v34) * 32768.0;
            LODWORD(v47) = (int)v48;
            v37 = (int)v48;
            if ( (int)v48 <= 0x7FFF )
            {
              if ( v37 < -32768 )
                LOWORD(v37) = 0x8000;
            }
            else
            {
              LOWORD(v37) = 0x7FFF;
            }
            v38 = v44 + v37;
            *v35 = v38;
            v39 = v35 + 1;
            *v39 = HIBYTE(v38);
            v35 = v39 + 1;
          }
          ++v34;
        }
        while ( v34 < v9 );
      }
      goto LABEL_67;
    }
    v17 = 0;
    v42 = 0;
    if ( a6 )
    {
      if ( v41 > 0 )
      {
        v18 = a2;
        v44 = (int)a2;
        do
        {
          v19 = *(_DWORD *)(v40 + 4 * v17);
          v20 = 0;
          v21 = 2 * v41;
          do
          {
            v47 = *(float *)(v19 + 4 * v20) * 32768.0;
            v45 = (int)v47;
            v22 = (int)v47;
            if ( (int)v47 <= 0x7FFF )
            {
              if ( v22 < -32768 )
                LOWORD(v22) = 0x8000;
            }
            else
            {
              LOWORD(v22) = 0x7FFF;
            }
            *v18 = v22;
            v18 = (_WORD *)((char *)v18 + v21);
            ++v20;
          }
          while ( v20 < v9 );
          v17 = v42 + 1;
          v18 = (_WORD *)(v44 + 2);
          v42 = v17;
          v44 += 2;
        }
        while ( v17 < v41 );
        goto LABEL_67;
      }
    }
    else if ( v41 > 0 )
    {
      v23 = a2;
      v45 = (int)a2;
      do
      {
        v24 = *(_DWORD *)(v40 + 4 * v17);
        v25 = 0;
        if ( v9 > 0 )
        {
          v26 = 2 * v41;
          do
          {
            v48 = *(float *)(v24 + 4 * v25) * 32768.0;
            LODWORD(v47) = (int)v48;
            v27 = (int)v48;
            if ( (int)v48 <= 0x7FFF )
            {
              if ( v27 < -32768 )
                LOWORD(v27) = 0x8000;
            }
            else
            {
              LOWORD(v27) = 0x7FFF;
            }
            *v23 = v27 + v44;
            v9 = v43;
            v23 = (_WORD *)((char *)v23 + v26);
            ++v25;
          }
          while ( v25 < v43 );
          v17 = v42;
        }
        ++v17;
        v23 = (_WORD *)(v45 + 2);
        v42 = v17;
        v45 += 2;
      }
      while ( v17 < v41 );
      goto LABEL_67;
    }
LABEL_68:
    sub_691CA0(v7 + 120, v9);
    *((_QWORD *)v7 + 10) += v9;
    if ( a7 )
      *a7 = v7[24];
    return v9 * v46;
  }
  return result;
}


//======================================================================
// sub_686200
// entry 00686200  size 3  status ok
//======================================================================

int sub_686200()
{
  return 0;
}


//======================================================================
// sub_686210
// entry 00686210  size 12  status ok
//======================================================================

int __cdecl sub_686210(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)a1 + 4);
}


//======================================================================
// sub_686220
// entry 00686220  size 13  status ok
//======================================================================

int __cdecl sub_686220(int a1)
{
  return *(_BYTE *)(*(_DWORD *)a1 + 5) & 1;
}


//======================================================================
// sub_686230
// entry 00686230  size 13  status ok
//======================================================================

int __cdecl sub_686230(int a1)
{
  return *(_BYTE *)(*(_DWORD *)a1 + 5) & 2;
}


//======================================================================
// sub_686240
// entry 00686240  size 13  status ok
//======================================================================

int __cdecl sub_686240(int a1)
{
  return *(_BYTE *)(*(_DWORD *)a1 + 5) & 4;
}


//======================================================================
// sub_686250
// entry 00686250  size 144  status ok
//======================================================================

int __cdecl sub_686250(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)a1 + 6)
       | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 7)
         | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 8)
           | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 9)
             | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 10)
               | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 11) | (*(unsigned __int16 *)(*(_DWORD *)a1 + 12) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
}


//======================================================================
// sub_6862E0
// entry 006862e0  size 37  status ok
//======================================================================

int __cdecl sub_6862E0(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)a1 + 14)
       | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 15) | (*(unsigned __int16 *)(*(_DWORD *)a1 + 16) << 8)) << 8);
}


//======================================================================
// sub_686310
// entry 00686310  size 37  status ok
//======================================================================

int __cdecl sub_686310(int a1)
{
  return *(unsigned __int8 *)(*(_DWORD *)a1 + 18)
       | ((*(unsigned __int8 *)(*(_DWORD *)a1 + 19) | (*(unsigned __int16 *)(*(_DWORD *)a1 + 20) << 8)) << 8);
}


//======================================================================
// sub_686340
// entry 00686340  size 98  status ok
//======================================================================

int __cdecl sub_686340(void **a1, void *a2)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, 0x168u);
  a1[1] = (void *)0x4000;
  *a1 = malloc(0x4000u);
  a1[6] = (void *)1024;
  a1[4] = malloc(0x1000u);
  a1[5] = malloc(8 * (_DWORD)a1[6]);
  a1[84] = a2;
  return 0;
}


//======================================================================
// sub_6863B0
// entry 006863b0  size 69  status ok
//======================================================================

int __cdecl sub_6863B0(void **a1)
{
  if ( a1 )
  {
    if ( *a1 )
      free(*a1);
    if ( a1[4] )
      free(a1[4]);
    if ( a1[5] )
      free(a1[5]);
    memset(a1, 0, 0x168u);
  }
  return 0;
}


//======================================================================
// sub_686400
// entry 00686400  size 161  status ok
//======================================================================

unsigned int __usercall sub_686400@<eax>(unsigned int result@<eax>, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // edi
  int i; // esi
  int v5; // edi
  int j; // esi

  if ( a2 )
  {
    v2 = 0;
    *(_BYTE *)(*a2 + 22) = 0;
    *(_BYTE *)(*a2 + 23) = 0;
    *(_BYTE *)(*a2 + 24) = 0;
    *(_BYTE *)(*a2 + 25) = 0;
    v3 = a2[1];
    for ( i = 0; i < v3; ++i )
      v2 = dword_781448[HIBYTE(v2) ^ *(unsigned __int8 *)(i + *a2)] ^ (v2 << 8);
    v5 = a2[3];
    for ( j = 0; j < v5; ++j )
      v2 = dword_781448[HIBYTE(v2) ^ *(unsigned __int8 *)(j + a2[2])] ^ (v2 << 8);
    *(_WORD *)(*a2 + 22) = v2;
    *(_BYTE *)(*a2 + 24) = BYTE2(v2);
    result = HIBYTE(v2);
    *(_BYTE *)(*a2 + 25) = result;
  }
  return result;
}


//======================================================================
// sub_6864B0
// entry 006864b0  size 47  status ok
//======================================================================

void *__cdecl sub_6864B0(int a1, int a2)
{
  void *result; // eax
  size_t v3; // eax

  result = *(void **)(a1 + 4);
  if ( (int)result <= a2 + *(_DWORD *)(a1 + 8) )
  {
    v3 = (size_t)result + a2 + 1024;
    *(_DWORD *)(a1 + 4) = v3;
    result = realloc(*(void **)a1, v3);
    *(_DWORD *)a1 = result;
  }
  return result;
}


//======================================================================
// sub_6864E0
// entry 006864e0  size 68  status ok
//======================================================================

void *__cdecl sub_6864E0(int a1, int a2)
{
  void *result; // eax
  int v3; // eax
  void *v4; // ecx
  void *v5; // eax
  int v6; // edx

  result = *(void **)(a1 + 24);
  if ( (int)result <= a2 + *(_DWORD *)(a1 + 28) )
  {
    v3 = (int)result + a2 + 32;
    v4 = *(void **)(a1 + 16);
    *(_DWORD *)(a1 + 24) = v3;
    v5 = realloc(v4, 4 * v3);
    v6 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 16) = v5;
    result = realloc(*(void **)(a1 + 20), 8 * v6);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}


//======================================================================
// sub_686530
// entry 00686530  size 20  status ok
//======================================================================

int __cdecl sub_686530(void *a1)
{
  int result; // eax

  result = 0;
  if ( a1 )
    memset(a1, 0, 0x1Cu);
  return result;
}


//======================================================================
// sub_686550
// entry 00686550  size 37  status ok
//======================================================================

int __cdecl sub_686550(void **a1)
{
  if ( a1 )
  {
    if ( *a1 )
      free(*a1);
    sub_686530(a1);
  }
  return 0;
}


//======================================================================
// sub_686580
// entry 00686580  size 122  status ok
//======================================================================

int __cdecl sub_686580(int a1, int a2)
{
  int v2; // eax
  signed int v3; // edx
  bool v4; // zf
  int v5; // eax
  size_t v6; // edi
  void *v7; // eax
  int v8; // ecx
  void *v10; // eax

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 8) - v2;
    v4 = *(_DWORD *)(a1 + 8) == v2;
    *(_DWORD *)(a1 + 8) = v3;
    if ( v3 >= 0 && !v4 )
      memmove(*(void **)a1, (const void *)(*(_DWORD *)a1 + v2), v3);
    *(_DWORD *)(a1 + 12) = 0;
  }
  v5 = *(_DWORD *)(a1 + 8);
  if ( a2 > *(_DWORD *)(a1 + 4) - v5 )
  {
    v6 = v5 + a2 + 4096;
    if ( *(_DWORD *)a1 )
    {
      v7 = realloc(*(void **)a1, v6);
      v8 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) = v6;
      *(_DWORD *)a1 = v7;
      return (int)v7 + v8;
    }
    v10 = malloc(v5 + a2 + 4096);
    *(_DWORD *)(a1 + 4) = v6;
    *(_DWORD *)a1 = v10;
  }
  return *(_DWORD *)(a1 + 8) + *(_DWORD *)a1;
}


//======================================================================
// sub_686600
// entry 00686600  size 30  status ok
//======================================================================

int __cdecl sub_686600(int a1, int a2)
{
  int v2; // ecx

  v2 = a2 + *(_DWORD *)(a1 + 8);
  if ( v2 > *(_DWORD *)(a1 + 4) )
    return -1;
  *(_DWORD *)(a1 + 8) = v2;
  return 0;
}


