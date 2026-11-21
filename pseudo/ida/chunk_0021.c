//======================================================================
// sub_572F10
// entry 00572f10  size 52  status ok
//======================================================================

char __stdcall sub_572F10(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_572F60
// entry 00572f60  size 16  status ok
//======================================================================

int sub_572F60()
{
  return 14;
}


//======================================================================
// sub_572F80
// entry 00572f80  size 15  status ok
//======================================================================

char __stdcall sub_572F80(int a1, int a2)
{
  return 1;
}


//======================================================================
// sub_572FA0
// entry 00572fa0  size 41  status ok
//======================================================================

char __stdcall sub_572FA0(int a1)
{
  if ( a1 != 3212001 )
    return 0;
  sub_653BD0(14);
  return 1;
}


//======================================================================
// sub_572FD0
// entry 00572fd0  size 15  status ok
//======================================================================

char __stdcall sub_572FD0(int a1)
{
  return 0;
}


//======================================================================
// sub_572FE0
// entry 00572fe0  size 15  status ok
//======================================================================

char __stdcall sub_572FE0(int a1)
{
  return 0;
}


//======================================================================
// sub_572FF0
// entry 00572ff0  size 16  status ok
//======================================================================

void *sub_572FF0()
{
  return &unk_7493A4;
}


//======================================================================
// sub_573000
// entry 00573000  size 190  status ok
//======================================================================

void *__stdcall sub_573000(int a1)
{
  int v1; // eax

  if ( (dword_793454 & 1) == 0 )
  {
    dword_793454 |= 1u;
    dword_7493B8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7493BC = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3212002 )
    return &unk_7493B4;
  else
    return 0;
}


//======================================================================
// sub_5730C0
// entry 005730c0  size 16  status ok
//======================================================================

void *sub_5730C0()
{
  return &unk_748B58;
}


//======================================================================
// sub_5730D0
// entry 005730d0  size 16  status ok
//======================================================================

void *sub_5730D0()
{
  return &unk_74933C;
}


//======================================================================
// sub_5730E0
// entry 005730e0  size 135  status ok
//======================================================================

char __stdcall sub_5730E0(int a1, int a2)
{
  if ( a2 != 3211000 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = -1;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_5E05C0(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 20, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_573190
// entry 00573190  size 311  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_573190(ATL::CCRTHeap *this)
{
  __int16 i; // [esp+4h] [ebp-4h]
  __int16 j; // [esp+4h] [ebp-4h]
  __int16 k; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &SultanSlot::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 13) = 0;
  for ( i = 0; i < 3; ++i )
    *((_DWORD *)this + i + 10) = 0;
  for ( j = 0; j < 5; ++j )
    *((_DWORD *)this + j + 17) = 0;
  for ( k = 0; k < 3; ++k )
    *((_DWORD *)this + k + 14) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 1) = 0;
  return this;
}


//======================================================================
// sub_5732D0
// entry 005732d0  size 1667  status ok
//======================================================================

void __thiscall sub_5732D0(CNoTrackObject *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+78h] [ebp-6Ch]
  void (__thiscall ***v3)(_DWORD, int); // [esp+80h] [ebp-64h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+88h] [ebp-5Ch]
  __int16 i; // [esp+D4h] [ebp-10h]
  __int16 j; // [esp+D4h] [ebp-10h]
  __int16 k; // [esp+D4h] [ebp-10h]

  *(_DWORD *)this = &SultanSlot::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 2))(*((_DWORD *)this + 2), 1);
    *((_DWORD *)this + 2) = 0;
  }
  if ( *((_DWORD *)this + 3) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 3))(*((_DWORD *)this + 3), 1);
    *((_DWORD *)this + 3) = 0;
  }
  if ( *((_DWORD *)this + 4) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 4))(*((_DWORD *)this + 4), 1);
    *((_DWORD *)this + 4) = 0;
  }
  if ( *((_DWORD *)this + 5) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 5))(*((_DWORD *)this + 5), 1);
    *((_DWORD *)this + 5) = 0;
  }
  if ( *((_DWORD *)this + 6) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 6))(*((_DWORD *)this + 6), 1);
    *((_DWORD *)this + 6) = 0;
  }
  if ( *((_DWORD *)this + 7) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
    *((_DWORD *)this + 7) = 0;
  }
  if ( *((_DWORD *)this + 8) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
    *((_DWORD *)this + 8) = 0;
  }
  if ( *((_DWORD *)this + 9) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 9))(*((_DWORD *)this + 9), 1);
    *((_DWORD *)this + 9) = 0;
  }
  if ( *((_DWORD *)this + 13) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 13))(*((_DWORD *)this + 13), 1);
    *((_DWORD *)this + 13) = 0;
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_DWORD *)this + i + 10) )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 10);
      (**v4)(v4, 1);
      *((_DWORD *)this + i + 10) = 0;
    }
  }
  for ( j = 0; j < 5; ++j )
  {
    if ( *((_DWORD *)this + j + 17) )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + j + 17);
      (**v3)(v3, 1);
      *((_DWORD *)this + j + 17) = 0;
    }
  }
  for ( k = 0; k < 3; ++k )
  {
    if ( *((_DWORD *)this + k + 14) )
    {
      v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + k + 14);
      (**v2)(v2, 1);
      *((_DWORD *)this + k + 14) = 0;
    }
  }
  if ( *((_DWORD *)this + 22) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 22))(*((_DWORD *)this + 22), 1);
    *((_DWORD *)this + 22) = 0;
  }
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
  if ( *((_DWORD *)this + 1) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
    *((_DWORD *)this + 1) = 0;
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_573960
// entry 00573960  size 4858  status ok
//======================================================================

int __thiscall sub_573960(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-E0h]
  int v7; // [esp+8h] [ebp-DCh]
  int v8; // [esp+Ch] [ebp-D8h]
  int v9; // [esp+10h] [ebp-D4h]
  int v10; // [esp+14h] [ebp-D0h]
  int v11; // [esp+18h] [ebp-CCh]
  _DWORD *v12; // [esp+1Ch] [ebp-C8h]
  int v13; // [esp+20h] [ebp-C4h]
  int v14; // [esp+24h] [ebp-C0h]
  int v15; // [esp+28h] [ebp-BCh]
  _AFX_OLE_STATE *v16; // [esp+2Ch] [ebp-B8h]
  int v17; // [esp+30h] [ebp-B4h]
  _AFX_OLE_STATE *v18; // [esp+34h] [ebp-B0h]
  int v19; // [esp+38h] [ebp-ACh]
  int v20; // [esp+3Ch] [ebp-A8h]
  int v21; // [esp+40h] [ebp-A4h]
  int v22; // [esp+44h] [ebp-A0h]
  void *v24; // [esp+4Ch] [ebp-98h]
  void *v25; // [esp+54h] [ebp-90h]
  void *v26; // [esp+5Ch] [ebp-88h]
  void *v27; // [esp+64h] [ebp-80h]
  void *v28; // [esp+6Ch] [ebp-78h]
  void *v29; // [esp+74h] [ebp-70h]
  _DWORD *v30; // [esp+7Ch] [ebp-68h]
  _AFX_OLE_STATE *v31; // [esp+9Ch] [ebp-48h]
  void *v32; // [esp+A4h] [ebp-40h]
  _AFX_OLE_STATE *v33; // [esp+ACh] [ebp-38h]
  void *v34; // [esp+B4h] [ebp-30h]
  void *v35; // [esp+C4h] [ebp-20h]
  void *v36; // [esp+CCh] [ebp-18h]
  __int16 i; // [esp+D4h] [ebp-10h]
  __int16 j; // [esp+D4h] [ebp-10h]
  __int16 k; // [esp+D4h] [ebp-10h]

  sub_574C60(this);
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 116) = 0;
  *(_DWORD *)(this + 124) = -1;
  *(_BYTE *)(this + 104) = 1;
  if ( !*(_DWORD *)(this + 12) )
  {
    v36 = operator new(0x178u);
    if ( v36 )
    {
      sub_5EAAF0(v36);
      v22 = v1;
    }
    else
    {
      v22 = 0;
    }
    *(_DWORD *)(this + 12) = v22;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 68))(*(_DWORD *)(this + 12), 0, 0);
  sub_5EAF00(90145);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 176))(*(_DWORD *)(this + 12), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 64))(*(_DWORD *)(this + 12));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12), 2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 116))(*(_DWORD *)(this + 12));
  if ( !*(_DWORD *)(this + 16) )
  {
    v35 = operator new(0x184u);
    if ( v35 )
      v21 = sub_5F5BF0(v35);
    else
      v21 = 0;
    *(_DWORD *)(this + 16) = v21;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 16) + 68))(*(_DWORD *)(this + 16), 0, 0);
  sub_5EAF00(90144);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 64))(*(_DWORD *)(this + 16));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 16) + 108))(*(_DWORD *)(this + 16), 10);
  *(_DWORD *)(*(_DWORD *)(this + 16) + 376) = 6;
  if ( operator new(0x1Cu) )
    v20 = sub_600A70(0);
  else
    v20 = 0;
  sub_5F5D50(v20);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 116))(*(_DWORD *)(this + 16));
  if ( !*(_DWORD *)(this + 20) )
  {
    v34 = operator new(0x178u);
    if ( v34 )
    {
      sub_5EAAF0(v34);
      v19 = v2;
    }
    else
    {
      v19 = 0;
    }
    *(_DWORD *)(this + 20) = v19;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 20) + 68))(*(_DWORD *)(this + 20), 0, 0);
  sub_5EAF00(90156);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 64))(*(_DWORD *)(this + 20));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 20) + 108))(*(_DWORD *)(this + 20), 5);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 116))(*(_DWORD *)(this + 20));
  for ( i = 0; i < 5; ++i )
  {
    if ( !*(_DWORD *)(this + 4 * i + 68) )
    {
      v33 = (_AFX_OLE_STATE *)operator new(0x1DCu);
      if ( v33 )
        v18 = _AFX_OLE_STATE::_AFX_OLE_STATE(v33);
      else
        v18 = 0;
      *(_DWORD *)(this + 4 * i + 68) = v18;
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 68) + 64))(*(_DWORD *)(this + 4 * i + 68));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 68) + 200))(
      *(_DWORD *)(this + 4 * i + 68),
      i >= 4 ? 90177 : 90146);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4 * i + 68) + 68))(
      *(_DWORD *)(this + 4 * i + 68),
      0,
      0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 68) + 108))(*(_DWORD *)(this + 4 * i + 68), 1500);
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * i + 68), (struct CPaneDivider *)i);
    if ( i >= 4 )
      sub_6023D0(1, 2, 0, 1);
    else
      sub_6023D0(3 * i, 3 * i + 2, 3 * i, 3 * i + 1);
    if ( i >= 3 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 68) + 208))(*(_DWORD *)(this + 4 * i + 68));
    else
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 68) + 204))(*(_DWORD *)(this + 4 * i + 68));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 68) + 116))(*(_DWORD *)(this + 4 * i + 68));
  }
  if ( !*(_DWORD *)(this + 8) )
  {
    v32 = operator new(0x184u);
    if ( v32 )
      v17 = sub_5F5BF0(v32);
    else
      v17 = 0;
    *(_DWORD *)(this + 8) = v17;
    sub_5EAF00(90007);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 108))(*(_DWORD *)(this + 8), 90);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 8) + 68))(*(_DWORD *)(this + 8), 120, 128);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 64))(*(_DWORD *)(this + 8));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 112))(*(_DWORD *)(this + 8));
    *(_DWORD *)(*(_DWORD *)(this + 8) + 376) = 4;
  }
  if ( !*(_DWORD *)(this + 88) )
  {
    v31 = (_AFX_OLE_STATE *)operator new(0x1DCu);
    if ( v31 )
      v16 = _AFX_OLE_STATE::_AFX_OLE_STATE(v31);
    else
      v16 = 0;
    *(_DWORD *)(this + 88) = v16;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 64))(*(_DWORD *)(this + 88));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 200))(*(_DWORD *)(this + 88), 90178);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 88) + 68))(*(_DWORD *)(this + 88), 0, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 108))(*(_DWORD *)(this + 88), 1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 204))(*(_DWORD *)(this + 88));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 116))(*(_DWORD *)(this + 88));
  if ( !*(_DWORD *)(this + 92) )
  {
    if ( operator new(0x190u) )
      v15 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(9);
    else
      v15 = 0;
    *(_DWORD *)(this + 92) = v15;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 64))(*(_DWORD *)(this + 92));
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 92) + 68))(*(_DWORD *)(this + 92), 31, 95);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 92) + 108))(*(_DWORD *)(this + 92), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 116))(*(_DWORD *)(this + 92));
  if ( !*(_DWORD *)(this + 96) )
  {
    if ( operator new(0x190u) )
      v14 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(5);
    else
      v14 = 0;
    *(_DWORD *)(this + 96) = v14;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 64))(*(_DWORD *)(this + 96));
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 96) + 68))(*(_DWORD *)(this + 96), 99, 175);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 96) + 108))(*(_DWORD *)(this + 96), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 116))(*(_DWORD *)(this + 96));
  if ( !*(_DWORD *)(this + 100) )
  {
    if ( operator new(0x190u) )
      v13 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(1);
    else
      v13 = 0;
    *(_DWORD *)(this + 100) = v13;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 64))(*(_DWORD *)(this + 100));
  sub_5EAF00(0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 100) + 68))(*(_DWORD *)(this + 100), 48, 175);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 100) + 108))(*(_DWORD *)(this + 100), 10);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 116))(*(_DWORD *)(this + 100));
  for ( j = 0; j < 3; ++j )
  {
    if ( !*(_DWORD *)(this + 4 * j + 56) )
    {
      v30 = operator new(0x184u);
      if ( v30 )
      {
        sub_5F5BF0(v30);
        *v30 = &SultanIcon::`vftable';
        v12 = v30;
      }
      else
      {
        v12 = 0;
      }
      *(_DWORD *)(this + 4 * j + 56) = v12;
    }
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * j + 56) + 68))(
      *(_DWORD *)(this + 4 * j + 56),
      dword_7493C0[2 * j],
      dword_7493C4[2 * j]);
    sub_5EAF00(90148);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * j + 56) + 176))(*(_DWORD *)(this + 4 * j + 56), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 56) + 64))(*(_DWORD *)(this + 4 * j + 56));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * j + 56) + 108))(*(_DWORD *)(this + 4 * j + 56), 15);
    *(_DWORD *)(*(_DWORD *)(this + 4 * j + 56) + 376) = 2;
    sub_5EB5D0(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 56) + 112))(*(_DWORD *)(this + 4 * j + 56));
  }
  if ( !*(_DWORD *)(this + 24) )
  {
    v29 = operator new(0x184u);
    if ( v29 )
      v11 = sub_5F5BF0(v29);
    else
      v11 = 0;
    *(_DWORD *)(this + 24) = v11;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 24) + 68))(*(_DWORD *)(this + 24), 0, 0);
  sub_5EAF00(90149);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 64))(*(_DWORD *)(this + 24));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 108))(*(_DWORD *)(this + 24), 15);
  *(_DWORD *)(*(_DWORD *)(this + 24) + 376) = 4;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 112))(*(_DWORD *)(this + 24));
  if ( !*(_DWORD *)(this + 28) )
  {
    v28 = operator new(0x184u);
    if ( v28 )
      v10 = sub_5F5BF0(v28);
    else
      v10 = 0;
    *(_DWORD *)(this + 28) = v10;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28), 0, 0);
  sub_5EAF00(90151);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 28) + 176))(*(_DWORD *)(this + 28), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 64))(*(_DWORD *)(this + 28));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 28) + 108))(*(_DWORD *)(this + 28), 20);
  *(_DWORD *)(*(_DWORD *)(this + 28) + 376) = 4;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
  if ( !*(_DWORD *)(this + 32) )
  {
    v27 = operator new(0x178u);
    if ( v27 )
    {
      sub_5EAAF0(v27);
      v9 = v3;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)(this + 32) = v9;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 32) + 68))(*(_DWORD *)(this + 32), 0, 0);
  sub_5EAF00(90152);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 64))(*(_DWORD *)(this + 32));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 32) + 108))(*(_DWORD *)(this + 32), 20);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 112))(*(_DWORD *)(this + 32));
  if ( !*(_DWORD *)(this + 36) )
  {
    v26 = operator new(0x178u);
    if ( v26 )
    {
      sub_5EAAF0(v26);
      v8 = v4;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(this + 36) = v8;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 36) + 68))(*(_DWORD *)(this + 36), 0, 0);
  sub_5EAF00(90153);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 176))(
    *(_DWORD *)(this + 36),
    *(_DWORD *)(this + 108));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 64))(*(_DWORD *)(this + 36));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 108))(*(_DWORD *)(this + 36), 20);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 116))(*(_DWORD *)(this + 36));
  if ( !*(_DWORD *)(this + 52) )
  {
    v25 = operator new(0x184u);
    if ( v25 )
      v7 = sub_5F5BF0(v25);
    else
      v7 = 0;
    *(_DWORD *)(this + 52) = v7;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 52) + 68))(*(_DWORD *)(this + 52), 0, 0);
  sub_5EAF00(90155);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 52) + 176))(*(_DWORD *)(this + 52), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 64))(*(_DWORD *)(this + 52));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 52) + 108))(*(_DWORD *)(this + 52), 25);
  *(_DWORD *)(*(_DWORD *)(this + 52) + 376) = 6;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 112))(*(_DWORD *)(this + 52));
  for ( k = 0; k < 3; ++k )
  {
    if ( !*(_DWORD *)(this + 4 * k + 40) )
    {
      v24 = operator new(0x184u);
      if ( v24 )
        v6 = sub_5F5BF0(v24);
      else
        v6 = 0;
      *(_DWORD *)(this + 4 * k + 40) = v6;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4 * k + 40) + 68))(
      *(_DWORD *)(this + 4 * k + 40),
      0,
      0);
    sub_5EAF00(k != 0 ? 90154 : 90157);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4 * k + 40) + 176))(*(_DWORD *)(this + 4 * k + 40), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 40) + 64))(*(_DWORD *)(this + 4 * k + 40));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 40) + 108))(*(_DWORD *)(this + 4 * k + 40), 20);
    *(_DWORD *)(*(_DWORD *)(this + 4 * k + 40) + 376) = 10;
  }
  sub_576160();
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(*(_DWORD *)(dword_793458 + 4), 0);
  return sub_57AB80(5, &unk_749848);
}


//======================================================================
// sub_574C60
// entry 00574c60  size 84  status ok
//======================================================================

_DWORD *__thiscall sub_574C60(_DWORD *this)
{
  _DWORD *result; // eax

  *(this + 27) = *(_DWORD *)(dword_7947E0 + 20240);
  result = this;
  if ( *(this + 27) >= 0xCu )
  {
    result = (_DWORD *)sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 302);
    *(this + 27) = 3;
  }
  return result;
}


//======================================================================
// sub_574CC0
// entry 00574cc0  size 480  status ok
//======================================================================

int *__thiscall sub_574CC0(_DWORD *this, int *a2, int a3)
{
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v6 = 0;
  if ( a3 > 999999999 )
    sub_5E9F20((char)"numCredits <= MAX_SULTAN_CREDITS", "..\\Casino\\sultanslot.cpp", 311);
  switch ( *(this + 27) )
  {
    case 0:
      v5 = a3 / 20;
      v6 = 5 * (a3 % 20);
      break;
    case 1:
      v5 = a3 / 10;
      v6 = 10 * (a3 % 10);
      break;
    case 2:
      v5 = a3 / 4;
      v6 = 25 * (a3 % 4);
      break;
    case 3:
      v5 = a3;
      break;
    case 4:
      if ( a3 < 200000000 )
        v5 = 5 * a3;
      else
        v5 = 1000000000;
      break;
    case 5:
      if ( a3 < 100000000 )
        v5 = 10 * a3;
      else
        v5 = 1000000000;
      break;
    case 6:
      if ( a3 < 40000000 )
        v5 = 25 * a3;
      else
        v5 = 1000000000;
      break;
    case 7:
      if ( a3 < (int)&unk_1312D00 )
        v5 = 50 * a3;
      else
        v5 = 1000000000;
      break;
    case 8:
      if ( a3 < (int)&unk_989680 )
        v5 = 100 * a3;
      else
        v5 = 1000000000;
      break;
    case 9:
      if ( a3 < (int)&unk_989680 )
        v5 = 250 * a3;
      else
        v5 = 1000000000;
      break;
    case 0xA:
      if ( a3 < 2000000 )
        v5 = 500 * a3;
      else
        v5 = 1000000000;
      break;
    case 0xB:
      if ( a3 < 1000000 )
        v5 = 1000 * a3;
      else
        v5 = 1000000000;
      break;
    default:
      break;
  }
  *a2 = v5;
  a2[1] = v6;
  return a2;
}


//======================================================================
// sub_574ED0
// entry 00574ed0  size 417  status ok
//======================================================================

int __thiscall sub_574ED0(_DWORD *this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  if ( a2 > 1000000000 )
    sub_5E9F20((char)"money.dollars <= 1000000000", "..\\Casino\\sultanslot.cpp", 388);
  switch ( *(this + 27) )
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
      break;
  }
  if ( v5 >= 999999999 )
    sub_5E9F20((char)"numCredits < MAX_SULTAN_CREDITS", "..\\Casino\\sultanslot.cpp", 449);
  return v5;
}


//======================================================================
// sub_5750B0
// entry 005750b0  size 212  status ok
//======================================================================

int __thiscall sub_5750B0(int this, int a2)
{
  int v3; // [esp+4h] [ebp-1Ch]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 112))(*(_DWORD *)(this + 20));
  *(_DWORD *)(*(_DWORD *)(this + 16) + 376) = 6;
  sub_5EAF00(90142);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 16) + 176))(*(_DWORD *)(this + 16), 0);
  if ( operator new(0x20u) )
    v3 = sub_6010A0(a2);
  else
    v3 = 0;
  return sub_5F5D50(v3);
}


//======================================================================
// sub_575190
// entry 00575190  size 193  status ok
//======================================================================

int __thiscall sub_575190(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-1Ch]

  *(_DWORD *)(*(this + 4) + 376) = 6;
  sub_5EAF00(90143);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 176))(*(this + 4), 0);
  if ( operator new(0x20u) )
    v3 = sub_6010A0(a2);
  else
    v3 = 0;
  return sub_5F5D50(v3);
}


//======================================================================
// sub_575260
// entry 00575260  size 851  status ok
//======================================================================

int __thiscall sub_575260(int this)
{
  int v2; // eax
  int v3; // [esp+10h] [ebp-20h]
  int Flags; // [esp+20h] [ebp-10h]

  if ( CMFCScanliner::channels(*(CMFCScanliner **)(this + 24)) )
  {
    sub_5EAF00(90149);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 116))(*(_DWORD *)(this + 24));
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        103001,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
    if ( (unsigned __int8)sub_637630(dword_162EE84) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 5);
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               6);
    }
    else
    {
      v2 = sub_5EB240(*(_DWORD *)(this + 24));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), v2);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 28) + 176))(
        *(_DWORD *)(this + 28),
        *(_DWORD *)(this + 124));
      sub_5EB5D0(255);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 116))(*(_DWORD *)(this + 32));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               0);
    }
  }
  else
  {
    Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 24));
    if ( *(_DWORD *)(this + 124) == -1 )
      sub_5E9F20((char)"multiplier != SLTNMP_1X", "..\\Casino\\sultanslot.cpp", 501);
    if ( Flags == 8 )
    {
      *(_DWORD *)(*(_DWORD *)(this + 28) + 376) = 4;
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 28) + 176))(
        *(_DWORD *)(this + 28),
        *(_DWORD *)(this + 124));
      sub_5EB5D0(0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
      if ( operator new(0x1Cu) )
        v3 = sub_577B80(1, 0);
      else
        v3 = 0;
      sub_5F5D50(v3);
    }
    if ( Flags >= sub_5EB240(*(_DWORD *)(this + 24)) )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 116))(*(_DWORD *)(this + 32));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               0);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), Flags + 1);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 5);
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               6);
    }
  }
}


//======================================================================
// sub_5755C0
// entry 005755c0  size 663  status ok
//======================================================================

int __thiscall sub_5755C0(int this)
{
  int result; // eax
  int v2; // [esp+18h] [ebp-2Ch]
  int v3; // [esp+1Ch] [ebp-28h]
  unsigned int Flags; // [esp+34h] [ebp-10h]
  int v6; // [esp+34h] [ebp-10h]

  Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 24));
  if ( Flags == sub_5EB240(*(_DWORD *)(this + 24)) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), 4);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 6);
    if ( operator new(0x1Cu) )
      v3 = sub_577B80(0, *(_DWORD *)(dword_793458 + 4));
    else
      v3 = 0;
    sub_5F5D50(v3);
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               103001,
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
    if ( *(_DWORD *)(this + 124) == -1 )
      sub_5E9F20((char)"multiplier != SLTNMP_1X", "..\\Casino\\sultanslot.cpp", 539);
    v6 = Flags + 1;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), v6);
    if ( v6 == 8 )
    {
      *(_DWORD *)(*(_DWORD *)(this + 28) + 376) = 4;
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 28) + 176))(
        *(_DWORD *)(this + 28),
        *(_DWORD *)(this + 124));
      sub_5EB5D0(0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
      if ( operator new(0x1Cu) )
        v2 = sub_577B80(1, 0);
      else
        v2 = 0;
      sub_5F5D50(v2);
    }
    if ( v6 >= sub_5EB240(*(_DWORD *)(this + 24)) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               0);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 6);
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               6);
    }
  }
  return result;
}


//======================================================================
// sub_575860
// entry 00575860  size 699  status ok
//======================================================================

int __thiscall sub_575860(int this)
{
  int v2; // [esp+4h] [ebp-20h]
  int Flags; // [esp+14h] [ebp-10h]

  if ( CMFCScanliner::channels(*(CMFCScanliner **)(this + 32)) )
  {
    Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 24));
    if ( Flags < sub_5EB240(*(_DWORD *)(this + 24)) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), Flags + 1);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 7);
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               6);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 112))(*(_DWORD *)(this + 24));
    if ( !*(_DWORD *)(this + 112) )
      goto LABEL_13;
    goto LABEL_12;
  }
  *(_DWORD *)(this + 124) = -1;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 112))(*(_DWORD *)(this + 32));
  if ( !(unsigned __int8)sub_637630(dword_162EE84) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 112))(*(_DWORD *)(this + 24));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
    if ( !*(_DWORD *)(this + 112) )
    {
LABEL_13:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 2);
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               0);
    }
LABEL_12:
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
             *(_DWORD *)(dword_793458 + 4),
             0);
  }
  sub_5EAF00(90150);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 116))(*(_DWORD *)(this + 24));
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 24) + 176))(*(_DWORD *)(this + 24), 0);
  *(_DWORD *)(*(_DWORD *)(this + 28) + 376) = 2;
  if ( operator new(0x1Cu) )
    v2 = sub_577B80(0, 0);
  else
    v2 = 0;
  sub_5F5D50(v2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 7);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 28))(*(_DWORD *)(dword_793458 + 4), 6);
}


//======================================================================
// sub_575B20
// entry 00575b20  size 235  status ok
//======================================================================

int __thiscall sub_575B20(int this)
{
  int *v1; // eax
  int result; // eax
  _BYTE v4[8]; // [esp+4h] [ebp-Ch] BYREF
  __int16 i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 68) + 204))(*(_DWORD *)(this + 4 * i + 68));
  if ( !*(_DWORD *)(this + 116) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 208))(*(_DWORD *)(this + 80));
  sub_5DCB00(0);
  v1 = (int *)sub_5D5A90(v4);
  result = sub_574ED0((_DWORD *)this, *v1, v1[1]);
  if ( !result && !*(_DWORD *)(this + 112) && !*(_DWORD *)(this + 116) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 208))(*(_DWORD *)(this + 68));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 208))(*(_DWORD *)(this + 72));
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 208))(*(_DWORD *)(this + 76));
  }
  return result;
}


//======================================================================
// sub_575C10
// entry 00575c10  size 78  status ok
//======================================================================

__int16 __thiscall sub_575C10(_DWORD **this)
{
  __int16 result; // ax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 17) + 208))(*(this + i + 17));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_575C60
// entry 00575c60  size 265  status ok
//======================================================================

int __thiscall sub_575C60(int this, int a2)
{
  const CHAR *v2; // eax
  const CHAR *v4; // [esp-8h] [ebp-28h]
  _AFX_OLE_STATE *v5; // [esp+4h] [ebp-1Ch]
  _AFX_OLE_STATE *v7; // [esp+Ch] [ebp-14h]

  if ( (unsigned __int8)sub_637630(dword_162EE84) && a2 > 0 )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 116))(*(_DWORD *)(this + 52));
    v7 = (_AFX_OLE_STATE *)operator new(0x1Cu);
    if ( v7 )
      v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v7);
    else
      v5 = 0;
    sub_5F5D50(v5);
  }
  *(_DWORD *)(this + 112) += a2;
  if ( *(_DWORD *)(this + 112) > 0x3B9AC9FFu )
  {
    v4 = (const CHAR *)sub_630F40("SID_THREEWISHES");
    v2 = (const CHAR *)sub_630F40("SID_THREEWISHES_MAXCREDITS");
    sub_62FF10(v2, v4, 0);
    sub_576600(this);
  }
  return sub_5777D0(*(_DWORD *)(this + 112));
}


//======================================================================
// sub_575D70
// entry 00575d70  size 164  status ok
//======================================================================

int __thiscall sub_575D70(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 28) -= a2;
  result = sub_5777D0(*(this + 28));
  if ( !*(this + 28) && !*(this + 29) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 2);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
             *(_DWORD *)(dword_793458 + 4),
             0);
  }
  return result;
}


//======================================================================
// sub_575E20
// entry 00575e20  size 92  status ok
//======================================================================

int __thiscall sub_575E20(_DWORD *this, int a2)
{
  if ( a2 > 3 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 689);
    a2 = 3;
  }
  sub_575F00(a2);
  *(this + 29) = a2;
  return sub_5777D0(*(this + 29));
}


//======================================================================
// sub_575E80
// entry 00575e80  size 113  status ok
//======================================================================

int __thiscall sub_575E80(int *this, int a2)
{
  int result; // eax

  *(this + 30) = a2;
  if ( *(this + 30) > 999999 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 705);
    *(this + 30) = 999999;
  }
  sub_5777D0(*(this + 30));
  result = (int)this;
  if ( *(this + 30) > 0 )
    return sub_575C60((int)this, *(this + 30));
  return result;
}


//======================================================================
// sub_575F00
// entry 00575f00  size 300  status ok
//======================================================================

void __thiscall sub_575F00(int this, int a2)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( a2 )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 112))(*(_DWORD *)(this + 44));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 112))(*(_DWORD *)(this + 48));
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 116))(*(_DWORD *)(this + 40));
    if ( a2 > *(_DWORD *)(this + 116) + 1 )
    {
      if ( !*(_DWORD *)(this + 116) )
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 40) + 176))(*(_DWORD *)(this + 40), 21);
      if ( operator new(0x20u) )
        v2 = sub_600F30(a2 + 20, 0);
      else
        v2 = 0;
      sub_5F5D50(v2);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 40) + 176))(*(_DWORD *)(this + 40), a2 + 20);
    }
  }
}


//======================================================================
// sub_576030
// entry 00576030  size 302  status ok
//======================================================================

int __thiscall sub_576030(int this, int a2)
{
  int v3; // [esp+4h] [ebp-1Ch]
  int v5; // [esp+8h] [ebp-18h]

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 44) + 176))(
    *(_DWORD *)(this + 44),
    *(_DWORD *)(this + 128));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 48) + 176))(*(_DWORD *)(this + 48), a2 + 6);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 40) + 176))(
    *(_DWORD *)(this + 40),
    *(_DWORD *)(this + 128) + 7 * (a2 - 1));
  if ( operator new(0x28u) )
    v3 = sub_601110(0, 0, 1, 0, 0);
  else
    v3 = 0;
  sub_5F5D50(v3);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 116))(*(_DWORD *)(this + 40));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v5 + 44) + 116))(*(_DWORD *)(v5 + 44), -1);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 48) + 116))(*(_DWORD *)(v5 + 48));
}


//======================================================================
// sub_576160
// entry 00576160  size 190  status ok
//======================================================================

int __thiscall sub_576160(_DWORD **this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  (*(void (__thiscall **)(_DWORD))(**(this + 11) + 112))(*(this + 11));
  (*(void (__thiscall **)(_DWORD))(**(this + 12) + 112))(*(this + 12));
  (*(void (__thiscall **)(_DWORD))(**(this + 10) + 116))(*(this + 10));
  if ( operator new(0x1Cu) )
    v2 = sub_600A70(0);
  else
    v2 = 0;
  return sub_5F5D50(v2);
}


//======================================================================
// sub_576220
// entry 00576220  size 91  status ok
//======================================================================

__int16 __thiscall sub_576220(_DWORD **this)
{
  __int16 result; // ax
  __int16 i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 3; ++i )
  {
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(this + i + 10) + 112))(*(this + i + 10));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_576280
// entry 00576280  size 168  status ok
//======================================================================

int __thiscall sub_576280(int *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  __int64 v5; // [esp+Ch] [ebp-8h] BYREF

  v5 = sub_64C8A0(0, 0);
  sub_5DCB00(0);
  sub_5D5AC0(&v5);
  if ( *(this + 27) > 2 && (v1 = sub_576330(*(this + 27)), (int)v5 < v1)
    || (result = (int)this, *(this + 27) <= 2)
    && !(_DWORD)v5
    && (result = sub_576400(*(this + 27)), SHIDWORD(v5) < result) )
  {
    result = (int)this;
    if ( !*(this + 28) && !*(this + 29) )
    {
      v3 = sub_5DCB00(0);
      return sub_5DBB70(v3);
    }
  }
  return result;
}


//======================================================================
// sub_576330
// entry 00576330  size 158  status ok
//======================================================================

int __stdcall sub_576330(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
    case 1:
    case 2:
      sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 784);
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
      sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 794);
LABEL_13:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_576400
// entry 00576400  size 91  status ok
//======================================================================

int __stdcall sub_576400(int a1)
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
  sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 806);
  return 0;
}


//======================================================================
// sub_576460
// entry 00576460  size 102  status ok
//======================================================================

int __thiscall sub_576460(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 116) != 3 )
  {
    if ( *(_DWORD *)(this + 112) )
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 204))(*(_DWORD *)(this + 80));
      if ( *(int *)(this + 116) < 3 )
      {
        sub_575E20((_DWORD *)this, *(_DWORD *)(this + 116) + 1);
        return sub_575D70((_DWORD *)this, 1);
      }
    }
    else
    {
      return sub_576740(1);
    }
  }
  return result;
}


//======================================================================
// sub_5764D0
// entry 005764d0  size 159  status ok
//======================================================================

int __thiscall sub_5764D0(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 116) != 3 )
  {
    if ( *(_DWORD *)(this + 112) )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 204))(*(_DWORD *)(this + 80));
      if ( *(_DWORD *)(this + 112) <= (unsigned int)(3 - *(_DWORD *)(this + 116)) )
      {
        sub_575E20((_DWORD *)this, *(_DWORD *)(this + 112));
        return sub_575D70((_DWORD *)this, *(_DWORD *)(this + 112));
      }
      else
      {
        sub_575D70((_DWORD *)this, 3 - *(_DWORD *)(this + 116));
        return sub_575E20((_DWORD *)this, 3);
      }
    }
    else
    {
      return sub_576740(3 - *(_DWORD *)(this + 116));
    }
  }
  return result;
}


//======================================================================
// sub_576590
// entry 00576590  size 98  status ok
//======================================================================

int __thiscall sub_576590(int this)
{
  int result; // eax

  result = this;
  if ( *(_DWORD *)(this + 116) )
  {
    *(_BYTE *)(this + 104) = 0;
    sub_575C10((_DWORD **)this);
    sub_575E80((int *)this, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 3);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
             *(_DWORD *)(dword_793458 + 4),
             0);
  }
  return result;
}


//======================================================================
// sub_576600
// entry 00576600  size 308  status ok
//======================================================================

int __thiscall sub_576600(int this)
{
  int *v1; // eax
  int v2; // edx
  int *v3; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // edx
  int v8; // [esp+4h] [ebp-3Ch]
  int v9; // [esp+4h] [ebp-3Ch]
  int v10; // [esp+8h] [ebp-38h]
  int v11; // [esp+8h] [ebp-38h]
  char v13[8]; // [esp+10h] [ebp-30h] BYREF
  int v14; // [esp+18h] [ebp-28h] BYREF
  int v15; // [esp+20h] [ebp-20h] BYREF
  int v16; // [esp+28h] [ebp-18h]
  int v17; // [esp+2Ch] [ebp-14h]
  int v18; // [esp+30h] [ebp-10h]
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

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
  v1 = sub_574CC0((_DWORD *)this, &v15, *(_DWORD *)(this + 112));
  v2 = v1[1];
  v18 = *v1;
  v19 = v2;
  v3 = sub_574CC0((_DWORD *)this, &v14, *(_DWORD *)(this + 116));
  v4 = v3[1];
  v20 = *v3;
  v21 = v4;
  sub_575E20((_DWORD *)this, 0);
  sub_575E80((int *)this, 0);
  sub_575D70((_DWORD *)this, *(_DWORD *)(this + 112));
  if ( v18 >= 1000000000 )
  {
    v18 = 1000000000;
    v19 = 0;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 208))(*(_DWORD *)(this + 80));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 208))(*(_DWORD *)(this + 84));
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
// sub_576740
// entry 00576740  size 288  status ok
//======================================================================

int __thiscall sub_576740(int this, int a2)
{
  int *v2; // eax
  int v3; // edx
  int v4; // eax
  int *v5; // eax
  int v6; // edx
  int v8; // [esp-8h] [ebp-2Ch]
  int v9; // [esp-8h] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-28h]
  int v11; // [esp-4h] [ebp-28h]
  int v13; // [esp+4h] [ebp-20h] BYREF
  int v14; // [esp+Ch] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17[2]; // [esp+1Ch] [ebp-8h] BYREF

  if ( a2 + *(_DWORD *)(this + 116) > 3 )
    sub_5E9F20((char)"curBet + numCredits <= MAX_SULTAN_BET", "..\\Casino\\sultanslot.cpp", 899);
  v2 = sub_574CC0((_DWORD *)this, &v14, a2);
  v3 = *v2;
  v4 = v2[1];
  v15 = v3;
  v16 = v4;
  sub_5DCB00(0);
  sub_5D5AC0(v17);
  if ( (unsigned __int8)sub_64C6A0(v15, v16) )
  {
    a2 = sub_574ED0((_DWORD *)this, v17[0], v17[1]);
    v5 = sub_574CC0((_DWORD *)this, &v13, a2);
    v6 = v5[1];
    v15 = *v5;
    v16 = v6;
  }
  sub_575E20((_DWORD *)this, a2 + *(_DWORD *)(this + 116));
  if ( *(_DWORD *)(this + 116) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 204))(*(_DWORD *)(this + 80));
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
// sub_576860
// entry 00576860  size 185  status ok
//======================================================================

int __thiscall sub_576860(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-14h]
  __int16 v4; // [esp+8h] [ebp-10h]
  __int16 i; // [esp+Ch] [ebp-Ch]
  __int16 j; // [esp+Ch] [ebp-Ch]
  double v7; // [esp+10h] [ebp-8h]

  v4 = -1;
  v7 = 0.0;
  v3 = sub_62FBF0(100000);
  for ( i = 0; i < 8; ++i )
  {
    v7 = 100000.0 * dbl_749448[i] + v7;
    if ( (double)v3 < v7 )
    {
      v4 = i;
      break;
    }
  }
  if ( v4 == -1 )
    return sub_576B50(this);
  for ( j = 0; ; ++j )
  {
    result = j;
    if ( j >= 3 )
      break;
    *(this + j + 32) = v4;
  }
  return result;
}


//======================================================================
// sub_576920
// entry 00576920  size 553  status ok
//======================================================================

int __thiscall sub_576920(_DWORD *this)
{
  char v3; // [esp+13h] [ebp-Dh]
  int v4; // [esp+14h] [ebp-Ch]
  bool v5; // [esp+1Bh] [ebp-5h]
  int v6; // [esp+1Ch] [ebp-4h]

  v3 = 1;
  v5 = *(this + 31) != -1;
  v4 = *(this + 29);
  sub_575E20(this, 0);
  if ( *(this + 32) == *(this + 33) && *(this + 32) == *(this + 34) )
  {
    if ( *(this + 32) == 7 )
    {
      sub_576220((_DWORD **)this);
      *(this + 31) = sub_576BF0(this);
    }
    else
    {
      v6 = dword_7493EC[3 * *(this + 32) + v4];
      if ( v5 )
        sub_575E80(this, dword_7493D8[*(this + 31)] * v6);
      else
        sub_575E80(this, v6);
      sub_576030((int)this, v4);
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          103000,
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
    }
  }
  else
  {
    v3 = 0;
    sub_576220((_DWORD **)this);
    sub_575E80(this, 0);
  }
  if ( !v5 || *(this + 32) == 7 && v3 )
  {
    if ( *(this + 31) == -1 )
    {
      if ( *(this + 28) )
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
      else
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 2);
    }
    else if ( v5 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 6);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 5);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 7);
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
           *(_DWORD *)(dword_793458 + 4),
           0);
}


//======================================================================
// sub_576B50
// entry 00576b50  size 150  status ok
//======================================================================

_DWORD *__thiscall sub_576B50(_DWORD *this)
{
  _DWORD *result; // eax

  *(this + 32) = sub_62FBF0(8);
  *(this + 33) = sub_62FBF0(8);
  if ( *(this + 32) == *(this + 33) )
  {
    *(this + 34) = sub_62FBF0(7);
    result = this;
    if ( *(this + 34) >= *(this + 32) )
    {
      ++*(this + 34);
      return this;
    }
  }
  else
  {
    result = (_DWORD *)sub_62FBF0(8);
    *(this + 34) = result;
  }
  return result;
}


//======================================================================
// sub_576BF0
// entry 00576bf0  size 240  status ok
//======================================================================

int sub_576BF0()
{
  int v1; // [esp+4h] [ebp-14h]
  double v2; // [esp+8h] [ebp-10h]
  double v3; // [esp+8h] [ebp-10h]
  __int16 v4; // [esp+10h] [ebp-8h]
  __int16 v5; // [esp+10h] [ebp-8h]
  __int16 v6; // [esp+14h] [ebp-4h]

  v6 = -1;
  v4 = 0;
  v2 = 0.0;
  while ( v4 < 6 )
    v2 = v2 + dbl_749488[v4++];
  if ( 1.0 != v2 )
    sub_5E9F20((char)"n == 1", "..\\Casino\\sultanslot.cpp", 1027);
  v1 = sub_62FBF0(100000);
  v5 = 0;
  v3 = 0.0;
  while ( v5 < 6 )
  {
    v3 = 100000.0 * dbl_749488[v5] + v3;
    if ( (double)v1 < v3 )
    {
      v6 = v5;
      break;
    }
    ++v5;
  }
  if ( v6 < 0 )
    sub_5E9F20((char)"tempMultiplier >= 0", "..\\Casino\\sultanslot.cpp", 1040);
  return v6;
}


//======================================================================
// sub_576CE0
// entry 00576ce0  size 207  status ok
//======================================================================

void __thiscall sub_576CE0(_DWORD *this, int a2)
{
  int v2; // [esp+4h] [ebp-20h]
  __int16 i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 3; ++i )
  {
    *(_DWORD *)(*(this + i + 14) + 376) = 2;
    if ( operator new(0x1Cu) )
      v2 = sub_577B80(0, i == 0 ? a2 : 0);
    else
      v2 = 0;
    sub_5F5D50(v2);
  }
}


//======================================================================
// sub_576DB0
// entry 00576db0  size 198  status ok
//======================================================================

int __thiscall sub_576DB0(int *this)
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
    v4 = operator new(0x28u);
    if ( v4 )
      v2 = sub_578210(v4);
    else
      v2 = 0;
    *(this + 1) = v2;
    return v2;
  }
  return result;
}


//======================================================================
// sub_576EC0
// entry 00576ec0  size 184  status ok
//======================================================================

void __thiscall sub_576EC0(pairNode *this)
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
      sub_576460(dword_79345C);
      break;
    case 1:
      sub_5764D0(dword_79345C);
      break;
    case 2:
      ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)dword_79345C);
      break;
    case 3:
      sub_576590(dword_79345C);
      break;
    case 4:
      sub_576600(dword_79345C);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 1100);
      break;
  }
}


//======================================================================
// sub_576F90
// entry 00576f90  size 136  status ok
//======================================================================

int __thiscall sub_576F90(pairNode *this)
{
  int v1; // kr00_4
  int result; // eax

  sub_602650(this);
  v1 = pairNode::raw_length(this);
  switch ( v1 )
  {
    case 0:
      result = sub_5F2BA0(3207005);
      break;
    case 1:
      result = sub_5F2BA0(3207004);
      break;
    case 2:
      result = sub_5F2BA0(3207006);
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
// sub_577030
// entry 00577030  size 146  status ok
//======================================================================

int __thiscall sub_577030(pairNode *this)
{
  int v1; // kr00_4
  int result; // eax

  sub_6025C0(this);
  v1 = pairNode::raw_length(this);
  switch ( v1 )
  {
    case 0:
      result = sub_5F2B20(3207005, 1);
      break;
    case 1:
      result = sub_5F2B20(3207004, 1);
      break;
    case 2:
      result = sub_5F2B20(3207006, 1);
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
// sub_577120
// entry 00577120  size 40  status ok
//======================================================================

int sub_577120()
{
  int result; // eax

  result = unknown_libname_843(*(_DWORD *)(dword_793458 + 4));
  if ( result == 1 )
    return sub_5DC2E0();
  return result;
}


//======================================================================
// sub_577240
// entry 00577240  size 275  status ok
//======================================================================

int __thiscall sub_577240(__int16 *this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+14h] [ebp-14h]
  __int16 i; // [esp+18h] [ebp-10h]

  *(_DWORD *)this = &SultanCounter::`vftable';
  if ( *((_DWORD *)this + 99) )
  {
    for ( i = 0; i < *(this + 194); ++i )
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 99) + 4 * i) )
      {
        v3 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 99) + 4 * i);
        if ( v3 )
          (**v3)(v3, 1);
        *(_DWORD *)(*((_DWORD *)this + 99) + 4 * i) = 0;
      }
    }
    operator delete(*((void **)this + 99));
    *((_DWORD *)this + 99) = 0;
  }
  return sub_5F5C40();
}


//======================================================================
// sub_577360
// entry 00577360  size 563  status ok
//======================================================================

_DWORD *__thiscall sub_577360(_DWORD *this)
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
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 120))(this, 17 * *((__int16 *)this + 194), 25);
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
    sub_5EAF00(90147);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 99) + 4 * i) + 176))(
      *(_DWORD *)(*(this + 99) + 4 * i),
      0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 99) + 4 * i) + 64))(*(_DWORD *)(*(this + 99) + 4 * i));
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(this + 99) + 4 * i) + 68))(
      *(_DWORD *)(*(this + 99) + 4 * i),
      *(this + 6) - 17 * (i + 1),
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
// sub_5775A0
// entry 005775a0  size 154  status ok
//======================================================================

int __thiscall sub_5775A0(int this, int a2, int a3)
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
        *(_DWORD *)(this + 24) - 17 * (i + 1),
        a3);
  }
  return result;
}


//======================================================================
// sub_577640
// entry 00577640  size 129  status ok
//======================================================================

int __thiscall sub_577640(int this, int a2)
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
// sub_5776D0
// entry 005776d0  size 121  status ok
//======================================================================

int __thiscall sub_5776D0(void *this)
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
// sub_577750
// entry 00577750  size 121  status ok
//======================================================================

int __thiscall sub_577750(int this)
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
// sub_5777D0
// entry 005777d0  size 277  status ok
//======================================================================

int __thiscall sub_5777D0(__int16 *this, int a2)
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
    sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 1272);
    a2 = 0;
  }
  if ( a2 > v7 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 1277);
    a2 = v7;
  }
  if ( operator new(0x34u) )
    v3 = sub_5778F0(a2, this);
  else
    v3 = 0;
  return sub_5F5DF0(v3);
}


//======================================================================
// sub_5778F0
// entry 005778f0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_5778F0(_DWORD *this, int a2, int a3)
{
  sub_5FC0D0(0);
  *this = &SultanCounterScript::`vftable';
  *(this + 8) = a2;
  *(this + 12) = a3;
  *(this + 9) = 1;
  *(this + 10) = GetTickCount();
  *((_BYTE *)this + 44) = *(this + 8) >= *(_DWORD *)(*(this + 12) + 392);
  return this;
}


//======================================================================
// sub_577960
// entry 00577960  size 38  status ok
//======================================================================

int __thiscall sub_577960(_DWORD *this)
{
  *this = &SultanCounterScript::`vftable';
  *(this + 12) = 0;
  return sub_5FC150();
}


//======================================================================
// sub_577990
// entry 00577990  size 481  status ok
//======================================================================

int __thiscall sub_577990(_DWORD *this)
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
    return sub_5E9F20((char)"false", "..\\Casino\\sultanslot.cpp", 1364);
  v8 = *(this + 8);
  for ( i = 0; i < *(this + 9); ++i )
  {
    Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(*(_DWORD *)(*(this + 12) + 396)
                                                                                  + 4 * i));
    if ( Flags == 3 * (v8 % 10) )
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
      if ( v2 == 30 )
        v7 = 0;
      if ( v7 == -1 )
        v7 = 29;
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
// sub_577B80
// entry 00577b80  size 67  status ok
//======================================================================

_DWORD *__thiscall sub_577B80(_DWORD *this, char a2, int a3)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(a3);
  *this = &SultanFadeCycle::`vftable';
  if ( a2 )
    *(this + 3) = 1;
  else
    *(this + 3) = -1;
  return this;
}


//======================================================================
// sub_577BF0
// entry 00577bf0  size 101  status ok
//======================================================================

int __fastcall sub_577BF0(int a1)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = sub_577C60(a1);
    result = (unsigned __int8)sub_5EB610(*(_DWORD *)(a1 + 4));
    if ( (unsigned __int8)result != v3 )
    {
      if ( v3 < 256 && v3 > 0 )
        return sub_5EB5D0(v3);
      else
        return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
    }
  }
  return result;
}


//======================================================================
// sub_577C60
// entry 00577c60  size 111  status ok
//======================================================================

int __thiscall sub_577C60(_DWORD *this)
{
  int IsFixedSize; // eax

  IsFixedSize = CMediaType::IsFixedSize(dword_162EE84);
  if ( abs(IsFixedSize - *(this + 4)) < *(_DWORD *)(*(this + 1) + 376) )
    return (unsigned __int8)sub_5EB610(*(this + 1));
  *(this + 4) = CMediaType::IsFixedSize(dword_162EE84);
  return 16 * *(this + 3) + (unsigned __int8)sub_5EB610(*(this + 1));
}


//======================================================================
// sub_577CD0
// entry 00577cd0  size 108  status ok
//======================================================================

int __thiscall sub_577CD0(int this)
{
  if ( *(_DWORD *)(this + 8) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 28))(*(_DWORD *)(this + 8), 0);
  if ( *(_DWORD *)(this + 12) == 1 )
  {
    sub_5EB5D0(255);
  }
  else
  {
    sub_5EB5D0(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  }
  return sub_6005D0(this);
}


//======================================================================
// sub_577D40
// entry 00577d40  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_577D40(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &SultanSpinScript::`vftable';
  *(this + 8) = 0;
  *(this + 9) = 0;
  return this;
}


//======================================================================
// sub_577DA0
// entry 00577da0  size 977  status ok
//======================================================================

int __thiscall sub_577DA0(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  _DWORD *v3; // [esp+10h] [ebp-44h]
  _DWORD *v4; // [esp+14h] [ebp-40h]
  _DWORD *v5; // [esp+18h] [ebp-3Ch]
  int v6; // [esp+1Ch] [ebp-38h]
  _DWORD *v8; // [esp+28h] [ebp-2Ch]
  _DWORD *v9; // [esp+30h] [ebp-24h]
  _DWORD *v10; // [esp+38h] [ebp-1Ch]

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      *(_DWORD *)(*(_DWORD *)(dword_79345C + 16) + 376) = 6;
      sub_5EAF00(90141);
      if ( operator new(0x1Cu) )
        v6 = sub_600A70(0);
      else
        v6 = 0;
      sub_5F5D50(v6);
      if ( !*(this + 8)
        && !*(this + 9)
        && (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
      {
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          103003,
          0,
          0,
          10,
          3,
          1.0,
          0.5,
          0);
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 4 * *(this + 8) + 56) + 116))(*(_DWORD *)(dword_79345C + 4 * *(this + 8) + 56));
      if ( (int)*(this + 9) < 2 )
      {
        v2 = sub_62FBF0(8);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79345C + 4 * *(this + 8) + 56) + 176))(
          *(_DWORD *)(dword_79345C + 4 * *(this + 8) + 56),
          v2);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79345C + 4 * *(this + 8) + 56) + 176))(
          *(_DWORD *)(dword_79345C + 4 * *(this + 8) + 56),
          *(_DWORD *)(dword_79345C + 4 * *(this + 8) + 128));
      }
      v10 = operator new(0x1Cu);
      if ( v10 )
        v5 = sub_577B80(v10, 1, (int)this);
      else
        v5 = 0;
      sub_5F5D50(v5);
      if ( (int)*(this + 9) < 2 || !*(this + 8) )
      {
        if ( *(this + 8) )
        {
          v9 = operator new(0x1Cu);
          if ( v9 )
            v4 = sub_577B80(v9, 0, 0);
          else
            v4 = 0;
          sub_5F5D50(v4);
        }
        else
        {
          v8 = operator new(0x1Cu);
          if ( v8 )
            v3 = sub_577B80(v8, 0, 0);
          else
            v3 = 0;
          sub_5F5D50(v3);
        }
      }
      if ( (int)++*(this + 8) >= 3 )
      {
        *(this + 8) = 0;
        ++*(this + 9);
      }
      if ( (int)*(this + 9) >= 3 )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      else
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
    }
    else if ( result == 2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 4);
      sub_575190((_DWORD *)dword_79345C, *(_DWORD *)(dword_793458 + 4));
      return sub_5FC420(0);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
    sub_576860((_DWORD *)dword_79345C);
    sub_576CE0((_DWORD *)dword_79345C, 0);
    return sub_5750B0(dword_79345C, (int)this);
  }
  return result;
}


//======================================================================
// sub_5781C0
// entry 005781c0  size 65  status ok
//======================================================================

int __thiscall sub_5781C0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 3) == 1 )
  {
    *(this + 3) = -1;
  }
  else
  {
    sub_6005D0(this);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 52) + 112))(*(_DWORD *)(dword_79345C + 52));
  }
  return result;
}


//======================================================================
// sub_578210
// entry 00578210  size 139  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_578210(ATL::CCRTHeap *this)
{
  __int16 i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &SultanDebug::`vftable';
  for ( i = 0; i < 3; ++i )
    *((_DWORD *)this + i + 1) = 0;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  return this;
}


//======================================================================
// sub_578420
// entry 00578420  size 182  status ok
//======================================================================

int __thiscall sub_578420(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-14h]
  __int16 v4; // [esp+8h] [ebp-10h]
  __int16 i; // [esp+Ch] [ebp-Ch]
  __int16 j; // [esp+Ch] [ebp-Ch]
  double v7; // [esp+10h] [ebp-8h]

  v4 = -1;
  v7 = 0.0;
  v3 = sub_62FBF0(100000);
  for ( i = 0; i < 8; ++i )
  {
    v7 = 100000.0 * dbl_749448[i] + v7;
    if ( (double)v3 < v7 )
    {
      v4 = i;
      break;
    }
  }
  if ( v4 == -1 )
    return sub_5785B0(this);
  for ( j = 0; ; ++j )
  {
    result = j;
    if ( j >= 3 )
      break;
    *(this + j + 1) = v4;
  }
  return result;
}


//======================================================================
// sub_5784E0
// entry 005784e0  size 193  status ok
//======================================================================

int __thiscall sub_5784E0(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-4h]

  result = (int)this;
  if ( *(this + 1) == *(this + 2) && (result = (int)this, *(this + 1) == *(this + 3)) )
  {
    if ( *(this + 1) == 7 )
    {
      result = sub_578630(this);
      *(this + 4) = result;
    }
    else
    {
      v3 = dword_7493EC[3 * *(this + 1) + *(this + 9)];
      result = (int)this;
      if ( *(this + 4) == -1 )
        *(this + 6) += v3;
      else
        *(this + 7) += dword_7493D8[*(this + 4)] * v3;
      *(this + 4) = -1;
    }
  }
  else
  {
    *(this + 4) = -1;
  }
  return result;
}


//======================================================================
// sub_5785B0
// entry 005785b0  size 120  status ok
//======================================================================

_DWORD *__thiscall sub_5785B0(_DWORD *this)
{
  _DWORD *result; // eax

  *(this + 1) = sub_62FBF0(8);
  *(this + 2) = sub_62FBF0(8);
  if ( *(this + 1) == *(this + 2) )
  {
    *(this + 3) = sub_62FBF0(7);
    result = this;
    if ( *(this + 3) >= *(this + 1) )
    {
      ++*(this + 3);
      return this;
    }
  }
  else
  {
    result = (_DWORD *)sub_62FBF0(8);
    *(this + 3) = result;
  }
  return result;
}


//======================================================================
// sub_578630
// entry 00578630  size 240  status ok
//======================================================================

int sub_578630()
{
  int v1; // [esp+4h] [ebp-14h]
  double v2; // [esp+8h] [ebp-10h]
  double v3; // [esp+8h] [ebp-10h]
  __int16 v4; // [esp+10h] [ebp-8h]
  __int16 v5; // [esp+10h] [ebp-8h]
  __int16 v6; // [esp+14h] [ebp-4h]

  v6 = -1;
  v4 = 0;
  v2 = 0.0;
  while ( v4 < 6 )
    v2 = v2 + dbl_749488[v4++];
  if ( 1.0 != v2 )
    sub_5E9F20((char)"n == 1", "..\\Casino\\sultanslot.cpp", 1652);
  v1 = sub_62FBF0(100000);
  v5 = 0;
  v3 = 0.0;
  while ( v5 < 6 )
  {
    v3 = 100000.0 * dbl_749488[v5] + v3;
    if ( (double)v1 < v3 )
    {
      v6 = v5;
      break;
    }
    ++v5;
  }
  if ( v6 < 0 )
    sub_5E9F20((char)"tempMultiplier >= 0", "..\\Casino\\sultanslot.cpp", 1665);
  return v6;
}


//======================================================================
// sub_578750
// entry 00578750  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_578750(_DWORD *this, char a2)
{
  *this = &SultanIcon::`vftable';
  sub_5F5C40();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_578910
// entry 00578910  size 210  status ok
//======================================================================

_DWORD *__thiscall sub_578910(_DWORD *this)
{
  int v1; // eax
  __int16 i; // [esp+8h] [ebp-10h]

  sub_5D7B60(this);
  *this = &SultanSlotRoom::`vftable';
  v1 = sub_630F40("SID_VIDEOSLOTS");
  sub_5F38B0(v1);
  dword_793458 = (int)this;
  sub_5F1AD0(0);
  sub_5F1B10(0, 0, 0);
  for ( i = 0; i < 4; ++i )
    sub_6044B0(542655828, i + 90141, 0);
  return this;
}


//======================================================================
// sub_5789F0
// entry 005789f0  size 164  status ok
//======================================================================

int __thiscall sub_5789F0(_DWORD *this)
{
  *this = &SultanSlotRoom::`vftable';
  sub_5DE170(dword_7947E0);
  if ( dword_79345C )
    (**(void (__thiscall ***)(int, int))dword_79345C)(dword_79345C, 1);
  dword_79345C = 0;
  dword_793458 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_578AA0
// entry 00578aa0  size 247  status ok
//======================================================================

int __thiscall sub_578AA0(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-28h]
  ATL::CCRTHeap *v3; // [esp+8h] [ebp-24h]
  _DWORD *v5; // [esp+10h] [ebp-1Ch]
  ATL::CCRTHeap *v6; // [esp+18h] [ebp-14h]

  sub_5D8230();
  *(this + 32) = CMediaType::IsFixedSize(dword_162EE84);
  if ( !dword_79345C )
  {
    v6 = (ATL::CCRTHeap *)operator new(0x8Cu);
    if ( v6 )
      v3 = sub_573190(v6);
    else
      v3 = 0;
    dword_79345C = (int)v3;
  }
  v5 = operator new(0x20u);
  if ( v5 )
  {
    sub_5FC0D0(0);
    *v5 = &SultanSlotRoomScript::`vftable';
    v2 = v5;
  }
  else
  {
    v2 = 0;
  }
  return sub_5F1B70(v2);
}


//======================================================================
// sub_578BA0
// entry 00578ba0  size 232  status ok
//======================================================================

int __stdcall sub_578BA0(int a1, int a2)
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
// sub_578C90
// entry 00578c90  size 49  status ok
//======================================================================

int __thiscall sub_578C90(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3212002, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_578CD0
// entry 00578cd0  size 219  status ok
//======================================================================

int __stdcall sub_578CD0(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 3207002:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 84) + 192))(*(_DWORD *)(dword_79345C + 84));
      break;
    case 3207003:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 80) + 192))(*(_DWORD *)(dword_79345C + 80));
      break;
    case 3207004:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 68) + 192))(*(_DWORD *)(dword_79345C + 68));
      break;
    case 3207005:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 72) + 192))(*(_DWORD *)(dword_79345C + 72));
      break;
    case 3207006:
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 76) + 192))(*(_DWORD *)(dword_79345C + 76));
      break;
    default:
      result = sub_5DC7D0(a1, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_578DC0
// entry 00578dc0  size 370  status ok
//======================================================================

int __thiscall sub_578DC0(void *this, int a2)
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
// sub_578F60
// entry 00578f60  size 59  status ok
//======================================================================

int __thiscall sub_578F60(_DWORD *this)
{
  if ( unknown_libname_843(*(this + 1)) == 1 || unknown_libname_843(*(this + 1)) == 1 )
    sub_579230(this);
  return sub_5D8020(this);
}


//======================================================================
// sub_578FB0
// entry 00578fb0  size 21  status ok
//======================================================================

int sub_578FB0()
{
  return sub_5DCB00(0);
}


//======================================================================
// sub_578FD0
// entry 00578fd0  size 606  status ok
//======================================================================

int __thiscall sub_578FD0(_DWORD *this, int a2)
{
  int *v2; // eax
  int v3; // edx
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-48h]
  int v9; // [esp+Ch] [ebp-48h]
  int v10; // [esp+10h] [ebp-44h]
  int v11; // [esp+10h] [ebp-44h]
  int v12; // [esp+18h] [ebp-3Ch]
  void *v14; // [esp+20h] [ebp-34h]
  int v15; // [esp+28h] [ebp-2Ch] BYREF
  int v16; // [esp+30h] [ebp-24h] BYREF
  int v17; // [esp+38h] [ebp-1Ch]
  int v18; // [esp+3Ch] [ebp-18h]
  int v19[2]; // [esp+40h] [ebp-14h] BYREF
  int v20; // [esp+50h] [ebp-4h]

  sub_5DCB00(0);
  sub_5D5AC0(v19);
  v2 = sub_574CC0((_DWORD *)dword_79345C, &v16, a2);
  v3 = v2[1];
  v17 = *v2;
  v18 = v3;
  if ( (unsigned __int8)sub_64C6A0(v17, v3) )
    a2 = sub_574ED0((_DWORD *)dword_79345C, v19[0], v19[1]);
  if ( (unsigned int)(*(_DWORD *)(dword_79345C + 112) + a2) > 0x3B9AC9FF )
    a2 = 999999999 - *(_DWORD *)(dword_79345C + 112);
  v4 = sub_574CC0((_DWORD *)dword_79345C, &v15, a2);
  v5 = *v4;
  v6 = v4[1];
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
    if ( !*(_DWORD *)(dword_79345C + 112) && !*(_DWORD *)(dword_79345C + 116) )
      sub_576220((_DWORD **)dword_79345C);
    sub_575C60(dword_79345C, a2);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793458 + 4) + 4))(*(_DWORD *)(dword_793458 + 4), 1);
    if ( v17 || v18 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79345C + 8) + 176))(*(_DWORD *)(dword_79345C + 8), 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 8) + 116))(*(_DWORD *)(dword_79345C + 8));
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
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793458 + 4) + 28))(
               *(_DWORD *)(dword_793458 + 4),
               0);
    }
  }
  return result;
}


//======================================================================
// sub_579230
// entry 00579230  size 39  status ok
//======================================================================

int __thiscall sub_579230(void *this)
{
  int result; // eax

  result = (unsigned __int8)sub_637670(dword_162EE84);
  if ( (_BYTE)result )
    return sub_579260(this);
  return result;
}


//======================================================================
// sub_579260
// entry 00579260  size 80  status ok
//======================================================================

int __thiscall sub_579260(_DWORD *this)
{
  int result; // eax

  result = CMediaType::IsFixedSize(dword_162EE84);
  if ( result > *(this + 32) )
  {
    *(this + 32) = CMediaType::IsFixedSize(dword_162EE84) + 3600;
    return sub_5F4620(103002, 1.0);
  }
  return result;
}


//======================================================================
// sub_5792B0
// entry 005792b0  size 116  status ok
//======================================================================

int __stdcall sub_5792B0(int a1)
{
  int result; // eax
  int v2; // [esp-8h] [ebp-14h]
  int v3; // [esp-8h] [ebp-14h]
  int v4; // [esp-4h] [ebp-10h]
  int v5; // [esp-4h] [ebp-10h]
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  sub_574CC0((_DWORD *)dword_79345C, &v6, *(_DWORD *)(dword_79345C + 112));
  v4 = v7;
  v2 = v6;
  sub_5DCB00(0);
  sub_5D5FB0(v2, v4);
  v5 = v7;
  v3 = v6;
  sub_5DCB00(a1);
  sub_5D5CF0(v3, v5);
  *(_DWORD *)(dword_79345C + 112) = 0;
  result = dword_79345C;
  *(_DWORD *)(dword_79345C + 116) = 0;
  return result;
}


//======================================================================
// sub_579330
// entry 00579330  size 108  status ok
//======================================================================

int __stdcall sub_579330(int a1)
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
// sub_5793A0
// entry 005793a0  size 22  status ok
//======================================================================

int sub_5793A0()
{
  return sub_575B20(dword_79345C);
}


//======================================================================
// sub_5793C0
// entry 005793c0  size 573  status ok
//======================================================================

int __thiscall sub_5793C0(void *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-2Ch]
  _DWORD *v3; // [esp+8h] [ebp-28h]
  _DWORD *v5; // [esp+1Ch] [ebp-14h]

  switch ( unknown_libname_843(this) )
  {
    case 0:
      sub_573960(dword_79345C);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
      result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      break;
    case 1:
      *(_BYTE *)(dword_79345C + 104) = 1;
      sub_575B20(dword_79345C);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 8) + 112))(*(_DWORD *)(dword_79345C + 8));
      if ( !*(_DWORD *)(dword_79345C + 112) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 84) + 208))(*(_DWORD *)(dword_79345C + 84));
      result = sub_576280((int *)dword_79345C);
      break;
    case 2:
      sub_576160((_DWORD **)dword_79345C);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
      result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      break;
    case 3:
      v5 = operator new(0x28u);
      if ( v5 )
        v3 = sub_577D40(v5);
      else
        v3 = 0;
      result = sub_5FC420(v3);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79345C + 20) + 116))(*(_DWORD *)(dword_79345C + 20));
      *(_DWORD *)(*(_DWORD *)(dword_79345C + 16) + 376) = 6;
      sub_5EAF00(90144);
      if ( operator new(0x1Cu) )
        v2 = sub_600A70(0);
      else
        v2 = 0;
      sub_5F5D50(v2);
      result = sub_576920((_DWORD *)dword_79345C);
      break;
    case 5:
      result = sub_575260(dword_79345C);
      break;
    case 6:
      result = sub_5755C0(dword_79345C);
      break;
    case 7:
      result = sub_575860(dword_79345C);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\sultanslotroom.cpp", 330);
      break;
  }
  return result;
}


//======================================================================
// sub_579650
// entry 00579650  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_579650(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &SultanSlotRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_579680
// entry 00579680  size 120  status ok
//======================================================================

_DWORD *sub_579680()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x84u);
  if ( v2 )
    return sub_578910(v2);
  else
    return 0;
}


//======================================================================
// sub_579700
// entry 00579700  size 51  status ok
//======================================================================

char __stdcall sub_579700(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_THREEWISHES");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_579760
// entry 00579760  size 16  status ok
//======================================================================

int sub_579760()
{
  return 3210000;
}


//======================================================================
// sub_579770
// entry 00579770  size 16  status ok
//======================================================================

const char *sub_579770()
{
  return "sultanslot";
}


//======================================================================
// sub_579790
// entry 00579790  size 16  status ok
//======================================================================

char **sub_579790()
{
  return off_74981C;
}


//======================================================================
// sub_5797A0
// entry 005797a0  size 16  status ok
//======================================================================

char **sub_5797A0()
{
  return &off_749828;
}


//======================================================================
// sub_5797D0
// entry 005797d0  size 94  status ok
//======================================================================

char __stdcall sub_5797D0(_DWORD *a1, int a2)
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
// sub_579830
// entry 00579830  size 16  status ok
//======================================================================

int sub_579830()
{
  return 8;
}


//======================================================================
// sub_579840
// entry 00579840  size 15  status ok
//======================================================================

char __stdcall sub_579840(int a1)
{
  return 0;
}


//======================================================================
// sub_579850
// entry 00579850  size 15  status ok
//======================================================================

char __stdcall sub_579850(int a1)
{
  return 0;
}


//======================================================================
// sub_579860
// entry 00579860  size 52  status ok
//======================================================================

char __stdcall sub_579860(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_5798B0
// entry 005798b0  size 16  status ok
//======================================================================

int sub_5798B0()
{
  return 14;
}


//======================================================================
// sub_5798D0
// entry 005798d0  size 15  status ok
//======================================================================

char __stdcall sub_5798D0(int a1, int a2)
{
  return 1;
}


//======================================================================
// sub_5798F0
// entry 005798f0  size 41  status ok
//======================================================================

char __stdcall sub_5798F0(int a1)
{
  if ( a1 != 3212001 )
    return 0;
  sub_653BD0(14);
  return 1;
}


//======================================================================
// sub_579920
// entry 00579920  size 15  status ok
//======================================================================

char __stdcall sub_579920(int a1)
{
  return 0;
}


//======================================================================
// sub_579930
// entry 00579930  size 15  status ok
//======================================================================

char __stdcall sub_579930(int a1)
{
  return 0;
}


//======================================================================
// sub_579940
// entry 00579940  size 16  status ok
//======================================================================

void *sub_579940()
{
  return &unk_74982C;
}


//======================================================================
// sub_579950
// entry 00579950  size 190  status ok
//======================================================================

void *__stdcall sub_579950(int a1)
{
  int v1; // eax

  if ( (dword_793460 & 1) == 0 )
  {
    dword_793460 |= 1u;
    dword_749840 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_749844 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3212002 )
    return &unk_74983C;
  else
    return 0;
}


//======================================================================
// sub_579A10
// entry 00579a10  size 16  status ok
//======================================================================

void *sub_579A10()
{
  return &unk_749650;
}


//======================================================================
// sub_579A20
// entry 00579a20  size 16  status ok
//======================================================================

void *sub_579A20()
{
  return &unk_7497E4;
}


//======================================================================
// sub_579A30
// entry 00579a30  size 135  status ok
//======================================================================

char __stdcall sub_579A30(int a1, int a2)
{
  if ( a2 != 3210000 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = -1;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_5E05C0(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 19, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_579AE0
// entry 00579ae0  size 40  status ok
//======================================================================

_DWORD *__thiscall sub_579AE0(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &DemoRoom::`vftable';
  dword_793468 = (int)this;
  return this;
}


//======================================================================
// sub_579B10
// entry 00579b10  size 38  status ok
//======================================================================

int __thiscall sub_579B10(_DWORD *this)
{
  *this = &DemoRoom::`vftable';
  dword_793468 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_579B40
// entry 00579b40  size 169  status ok
//======================================================================

int __thiscall sub_579B40(void *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
  sub_579BF0(this);
  v4 = operator new(0x20u);
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &DemoRoomScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  return sub_5F1B70(v2);
}


//======================================================================
// sub_579BF0
// entry 00579bf0  size 147  status ok
//======================================================================

int sub_579BF0()
{
  int v0; // eax
  int v2; // [esp+8h] [ebp-4h]

  sub_5F1AD0(3219000);
  if ( dword_793570 < 0 )
    v2 = 6;
  else
    v2 = dword_74B060[6 * dword_793570];
  sub_5F9CE0(0, 1, 3219001, 0, 0, 2000, 0, 255, 0);
  v0 = sub_5FB2B0(1);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 176))(v0, v2);
}


//======================================================================
// sub_579C90
// entry 00579c90  size 54  status ok
//======================================================================

int sub_579C90()
{
  int v0; // eax

  v0 = sub_5FB2B0(1);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 176))(v0, dword_74B060[0]);
}


//======================================================================
// sub_579CD0
// entry 00579cd0  size 122  status ok
//======================================================================

int sub_579CD0()
{
  char *v0; // eax

  dword_793570 = -1;
  *((_BYTE *)dword_162EE84 + 37) = 1;
  *((_BYTE *)dword_162EE84 + 38) = 0;
  byte_79346D = 1;
  byte_79346C = 1;
  byte_79346E = 0;
  v0 = sub_520E60(**((CImageDisplay ***)dword_162EE84 + 22));
  strcpy(Destination, v0);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
           dword_162EE84,
           23);
}


//======================================================================
// sub_579D50
// entry 00579d50  size 76  status ok
//======================================================================

int sub_579D50()
{
  int v0; // eax
  int result; // eax
  Concurrency::details::ContextBase *v2; // [esp+0h] [ebp-4h]

  v2 = dword_162EE84;
  *((_BYTE *)dword_162EE84 + 37) = 0;
  sub_579FA0(v2);
  v0 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
             dword_162EE84,
             v0);
  byte_79346D = 0;
  return result;
}


//======================================================================
// sub_579DA0
// entry 00579da0  size 215  status ok
//======================================================================

int sub_579DA0()
{
  __int64 v1; // [esp-8h] [ebp-14h]

  if ( byte_79346D )
  {
    if ( byte_79346C )
    {
      byte_79346C = 0;
      if ( ++dword_793570 >= 6 )
        dword_793570 = 0;
      if ( byte_79346E )
      {
        sub_5DCB00(0);
        sub_5D7090(0);
        v1 = sub_64C8A0(5000, 0);
        sub_5DCB00(0);
        sub_5D5AF0(v1, HIDWORD(v1));
      }
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
        dword_162EE84,
        23);
      return dword_74B05C[6 * dword_793570];
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_579CD0();
    return 100;
  }
}


//======================================================================
// sub_579E80
// entry 00579e80  size 196  status ok
//======================================================================

char *sub_579E80()
{
  char *v0; // eax
  CImageDisplay *v3; // [esp+10h] [ebp-Ch]

  v3 = (CImageDisplay *)**((_DWORD **)dword_162EE84 + 22);
  if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v3)->rcSource.left != 3 )
  {
    sub_5E9F20((char)"shell->players[ 0 ]->IsHuman()", "..\\Casino\\demoroom.cpp", 146);
  }
  if ( CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left )
    sub_63B0A0(**((_DWORD **)dword_162EE84 + 22));
  v0 = sub_520E60(**((CImageDisplay ***)dword_162EE84 + 22));
  return strcpy(Destination, v0);
}


//======================================================================
// sub_579F50
// entry 00579f50  size 78  status ok
//======================================================================

int sub_579F50()
{
  char *v0; // eax
  __int64 v2; // [esp-8h] [ebp-10h]

  v0 = (char *)sub_630F40("SID_DEMO_LOGIN_FILENAME");
  sub_57A070(v0);
  v2 = sub_64C8A0(5000, 0);
  sub_5DCB00(0);
  return sub_5D5AF0(v2, HIDWORD(v2));
}


//======================================================================
// sub_579FA0
// entry 00579fa0  size 18  status ok
//======================================================================

int sub_579FA0()
{
  return sub_57A070(Destination);
}


//======================================================================
// sub_579FC0
// entry 00579fc0  size 166  status ok
//======================================================================

int sub_579FC0()
{
  int result; // eax

  if ( !byte_79346E )
  {
    sub_579E80();
    sub_579F50();
    byte_79346E = 1;
  }
  *(_DWORD *)(dword_7947E0 + 20236) = dword_74B064[6 * dword_793570];
  *(_DWORD *)(dword_7947E0 + 20244) = dword_74B068[6 * dword_793570];
  *(_DWORD *)(dword_7947E0 + 20240) = dword_74B06C[6 * dword_793570];
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(
             dword_7947E0,
             dword_74B058[6 * dword_793570],
             -1);
  byte_79346C = 1;
  return result;
}


//======================================================================
// sub_57A070
// entry 0057a070  size 307  status ok
//======================================================================

int __cdecl sub_57A070(char *Source)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const char *v3; // eax
  char *v4; // [esp+8h] [ebp-214h]
  char Destination[256]; // [esp+Ch] [ebp-210h] BYREF
  char v6[256]; // [esp+10Ch] [ebp-110h] BYREF
  int v7; // [esp+210h] [ebp-Ch]
  int left; // [esp+214h] [ebp-8h]
  CImageDisplay *v9; // [esp+218h] [ebp-4h]

  v9 = (CImageDisplay *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
  sub_63A3E0(0, 0);
  if ( !(unsigned __int8)sub_63AB10(Source) )
  {
    sub_63A3E0(0, 2);
    strcpy(Destination, Source);
    v4 = strrchr(Destination, 46);
    if ( v4 )
      *v4 = 0;
    DisplayFormat = CImageDisplay::GetDisplayFormat(v9);
    strcpy((char *)&DisplayFormat->rcSource.top, Destination);
    strcpy((char *)v9 + 16, Source);
    if ( !(unsigned __int8)sub_63B0A0(v9) )
      return 0;
  }
  left = CImageDisplay::GetDisplayFormat(v9)->rcSource.left;
  v7 = sub_4842B0(v9);
  v3 = (const char *)sub_57A470(v9);
  strcpy(v6, v3);
  sub_57A1B0((int)Source, left, v7, v6);
  return 0;
}


//======================================================================
// sub_57A1B0
// entry 0057a1b0  size 211  status ok
//======================================================================

int __cdecl sub_57A1B0(char *a1, LONG a2, DWORD a3, char *Source)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const struct tagVIDEOINFO *v5; // eax

  sub_63AB10(a1);
  CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left = a2;
  if ( CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left == 2 )
  {
    DisplayFormat = CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22));
    strcpy((char *)&DisplayFormat->bmiHeader.biHeight, &::Source);
    CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->bmiHeader.biClrImportant = a3;
  }
  else
  {
    v5 = CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22));
    strcpy((char *)&v5->bmiHeader.biHeight, Source);
  }
  sub_63B0A0(**((_DWORD **)dword_162EE84 + 22));
  return 0;
}


//======================================================================
// sub_57A290
// entry 0057a290  size 196  status ok
//======================================================================

int __stdcall sub_57A290(int a1, int a2)
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
// sub_57A370
// entry 0057a370  size 169  status ok
//======================================================================

int __thiscall sub_57A370(void *this)
{
  int result; // eax
  int v2; // kr00_4

  v2 = unknown_libname_843(this);
  result = v2;
  switch ( v2 )
  {
    case 0:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, 40);
      break;
    case 1:
      if ( dword_793570 == -1 )
      {
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 40);
      }
      else if ( dword_793570 < 0 )
      {
        result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 120);
      }
      else
      {
        result = sub_579FC0();
      }
      break;
    case 2:
      sub_579C90();
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 3, 0);
      break;
    case 3:
      byte_79346C = 1;
      break;
    default:
      result = v2;
      break;
  }
  return result;
}


//======================================================================
// sub_57A430
// entry 0057a430  size 16  status ok
//======================================================================

int sub_57A430()
{
  return 3200000;
}


//======================================================================
// sub_57A470
// entry 0057a470  size 73  status ok
//======================================================================

LONG *__thiscall sub_57A470(CImageDisplay *this)
{
  if ( !CImageDisplay::GetDisplayFormat(this)->rcSource.left )
    sub_5E9F20((char)"!IsEmpty()", "c:\\users\\justin\\desktop\\hoyle2008\\casinoshell\\player.h", 85);
  return &CImageDisplay::GetDisplayFormat(this)->bmiHeader.biHeight;
}


//======================================================================
// sub_57A4F0
// entry 0057a4f0  size 120  status ok
//======================================================================

_DWORD *sub_57A4F0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_579AE0(v2);
  else
    return 0;
}


//======================================================================
// sub_57A570
// entry 0057a570  size 51  status ok
//======================================================================

char __stdcall sub_57A570(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_GENERIC_EMPTY");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_57A5D0
// entry 0057a5d0  size 16  status ok
//======================================================================

int sub_57A5D0()
{
  return 3218000;
}


//======================================================================
// sub_57A5E0
// entry 0057a5e0  size 16  status ok
//======================================================================

const char *sub_57A5E0()
{
  return "Demo";
}


//======================================================================
// sub_57A6E0
// entry 0057a6e0  size 15  status ok
//======================================================================

char __stdcall sub_57A6E0(int a1)
{
  return 0;
}


//======================================================================
// sub_57A6F0
// entry 0057a6f0  size 16  status ok
//======================================================================

void *sub_57A6F0()
{
  return &unk_74B484;
}


//======================================================================
// sub_57A710
// entry 0057a710  size 16  status ok
//======================================================================

void *sub_57A710()
{
  return &unk_74B120;
}


//======================================================================
// sub_57A720
// entry 0057a720  size 16  status ok
//======================================================================

void *sub_57A720()
{
  return &unk_74B448;
}


//======================================================================
// sub_57A730
// entry 0057a730  size 93  status ok
//======================================================================

char __stdcall sub_57A730(int a1, int a2)
{
  if ( a2 != 100031 && a2 != 100030 )
    return 0;
  if ( a1 != 3219000 )
    return 0;
  *((_BYTE *)dword_162EE84 + 37) = 1;
  *((_BYTE *)dword_162EE84 + 38) = 0;
  dword_793574 = 0;
  return 1;
}


//======================================================================
// sub_57A790
// entry 0057a790  size 165  status ok
//======================================================================

char *__thiscall sub_57A790(char *this)
{
  sub_5F71F0(0, 0);
  *(_DWORD *)this = &CasinoTutorialDialog::`vftable';
  memset(this + 448, 0, 0x1810u);
  *(this + 452) = 0;
  *(this + 453) = 0;
  *(this + 444) = 0;
  *(this + 445) = 0;
  *((_DWORD *)this + 1652) = 0;
  *((_DWORD *)this + 1653) = 0;
  *((_DWORD *)this + 1654) = 0;
  *((_DWORD *)this + 1655) = 0;
  *((_DWORD *)this + 1656) = 0;
  return this;
}


//======================================================================
// sub_57A840
// entry 0057a840  size 169  status ok
//======================================================================

int __thiscall sub_57A840(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CasinoTutorialDialog::`vftable';
  sub_57AE30(this);
  if ( *(this + 1656) )
  {
    (***(this + 1656))(*(this + 1656), 1);
    *(this + 1656) = 0;
  }
  return sub_5F7260();
}


//======================================================================
// sub_57A8F0
// entry 0057a8f0  size 656  status ok
//======================================================================

int __thiscall sub_57A8F0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-34h]
  int v7; // [esp+8h] [ebp-30h]
  int v8; // [esp+Ch] [ebp-2Ch]
  int v9; // [esp+10h] [ebp-28h]
  int v10; // [esp+14h] [ebp-24h]
  int v11; // [esp+18h] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-1Ch]
  void *v14; // [esp+24h] [ebp-14h]

  sub_5F83D0(1227, 0);
  v1 = sub_630F40("SID_GENERIC_TUTORIAL");
  sub_5F73E0(v1, 73, 0, 0);
  sub_5FA880(0, 0, 120, 1, 2, 119, 1, 120, 124, 161, 0, 0, 0);
  v12 = sub_5FB630(0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 112))(v12);
  sub_5FA880(0, 1, 120, 1, 2, 120, 1, 255, 255, 255, 0, 0, 0);
  v11 = sub_5FB630(1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 112))(v11);
  v2 = sub_630F40("SID_TUTORIAL_HINT");
  sub_5F9DE0(0, 0, 3200222, 20, 42, 501, v2, 72, 75, 74, -1, 0);
  v10 = sub_5FB300(0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 112))(v10);
  v3 = sub_630F40("SID_TUTORIAL_PRACTICEMODE");
  sub_5F9EF0(0, 1, 3200201, 14, 100, 501, v3, 35, 65, -1, -1, 20, 0);
  v9 = sub_5FB350(1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 112))(v9);
  sub_5DE600(dword_7947E0);
  if ( (unsigned __int8)sub_5D5550(-1) )
  {
    v8 = sub_5FB350(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 244))(v8);
  }
  sub_5F9DE0(0, 2, 1092, 104, 3, 501, &Source, -1, -1, -1, -1, 0);
  v4 = sub_5F8550(this);
  sub_5FA5B0(0, 0, &Source, 47, v4 - 50, 15, 15, 128, 501, 17, -1);
  v7 = sub_5FB550(0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 112))(v7);
  if ( !*(this + 1656) )
  {
    v14 = operator new(0x1E0u);
    if ( v14 )
      v6 = sub_57C590(v14);
    else
      v6 = 0;
    *(this + 1656) = v6;
  }
  return sub_57C800();
}


//======================================================================
// sub_57AB80
// entry 0057ab80  size 679  status ok
//======================================================================

int __thiscall sub_57AB80(int this, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-2Ch]
  int v6; // [esp+10h] [ebp-28h]
  int i; // [esp+28h] [ebp-10h]

  sub_57AE30(this);
  *(_DWORD *)(this + 448) = *(_DWORD *)a3;
  *(_BYTE *)(this + 452) = *(_BYTE *)(a3 + 4);
  strcpy((char *)(this + 453), (const char *)(a3 + 5));
  *(_DWORD *)(this + 6608) = operator new(548 * a2);
  *(_DWORD *)(this + 6612) = a2;
  *(_DWORD *)(this + 6616) = operator new(4 * a2);
  *(_DWORD *)(this + 6620) = a2;
  for ( i = 0; i < a2; ++i )
  {
    qmemcpy((void *)(548 * i + *(_DWORD *)(this + 6608)), (const void *)(a3 + 536 * i + 264), 0x218u);
    *(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * i + 536) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * i + 537) = 0;
    *(_DWORD *)(*(_DWORD *)(this + 6608) + 548 * i + 540) = 0;
    *(_DWORD *)(*(_DWORD *)(this + 6608) + 548 * i + 544) = 0;
    if ( operator new(0x1D8u) )
      v6 = sub_57C260(i);
    else
      v6 = 0;
    *(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i) = v6;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i) + 4) = this;
    if ( i < 2 )
      v5 = 15 * i;
    else
      v5 = 15 * (i - 1) + 60;
    v3 = sub_5F8550(this);
    sub_5EC8F0(&Source, i > 1 ? 103 : 47, v3 - (i >= 2 ? 35 : 25), 15, i >= 2 ? 25 : 15, v5 + 68, 501, 17, -1);
  }
  return sub_57B050(this);
}


//======================================================================
// sub_57AE30
// entry 0057ae30  size 535  status ok
//======================================================================

int __thiscall sub_57AE30(int this)
{
  int v2; // [esp+0h] [ebp-24h]
  int (__thiscall ***v4)(_DWORD, int); // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]
  int j; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(this + 6616) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 6620); ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i) )
      {
        v4 = *(int (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this + 6616) + 4 * i);
        if ( v4 )
          v2 = (**v4)(v4, 1);
        else
          v2 = 0;
        *(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i) = 0;
      }
    }
    operator delete(*(void **)(this + 6616));
    *(_DWORD *)(this + 6616) = 0;
    *(_DWORD *)(this + 6620) = 0;
  }
  if ( *(_DWORD *)(this + 6608) )
  {
    for ( j = 0; j < *(_DWORD *)(this + 6612); ++j )
    {
      if ( *(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * j + 536) )
        operator delete(*(void **)(*(_DWORD *)(this + 6608) + 548 * j + 540));
      if ( *(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * j + 537) )
        operator delete(*(void **)(*(_DWORD *)(this + 6608) + 548 * j + 544));
    }
    operator delete(*(void **)(this + 6608));
    *(_DWORD *)(this + 6608) = 0;
    *(_DWORD *)(this + 6612) = 0;
  }
  *(_BYTE *)(this + 452) = 0;
  *(_BYTE *)(this + 453) = 0;
  *(_BYTE *)(this + 444) = 0;
  *(_BYTE *)(this + 445) = 0;
  if ( *(_DWORD *)(this + 6624) )
    sub_57D3A0(*(_DWORD *)(this + 6624), v2);
  sub_57B1B0(this);
  return sub_57B050(this);
}


//======================================================================
// sub_57B050
// entry 0057b050  size 158  status ok
//======================================================================

int __thiscall sub_57B050(_BYTE *this)
{
  int result; // eax

  if ( !(unsigned __int8)sub_5DF700(-1) )
    return sub_5F2BA0(5009);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( !(_BYTE)result )
    return result;
  if ( *(this + 452) && !(unsigned __int8)sub_5DA7B0(dword_7947E4) )
    return sub_5F2B20(5009, 1);
  else
    return sub_5F2BA0(5009);
}


//======================================================================
// sub_57B0F0
// entry 0057b0f0  size 103  status ok
//======================================================================

int __stdcall sub_57B0F0(int a1)
{
  int result; // eax

  result = a1;
  if ( !a1 )
    return sub_5DB240(dword_7947E4);
  if ( a1 == 2 )
  {
    sub_6375B0(dword_162EE84);
    sub_5D5500(0, -1);
    sub_637610(dword_162EE84);
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 736))(dword_7947E4);
  }
  return result;
}


//======================================================================
// sub_57B160
// entry 0057b160  size 80  status ok
//======================================================================

int __stdcall sub_57B160(int a1)
{
  int result; // eax
  int v2; // eax
  char v3; // [esp-8h] [ebp-10h]

  result = a1;
  if ( a1 == 1 )
  {
    v2 = sub_5FB350(1);
    v3 = sub_600230(v2);
    sub_6375B0(dword_162EE84);
    sub_5D5590(v3, -1);
    return sub_637610(dword_162EE84);
  }
  return result;
}


//======================================================================
// sub_57B1B0
// entry 0057b1b0  size 1326  status ok
//======================================================================

int __thiscall sub_57B1B0(int this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  struct Concurrency::details::_TaskCollectionBase *v2; // eax
  struct Concurrency::details::_TaskCollectionBase *v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-40h]
  int v9; // [esp+8h] [ebp-3Ch]
  int v10; // [esp+Ch] [ebp-38h]
  int v11; // [esp+10h] [ebp-34h]
  char v12; // [esp+17h] [ebp-2Dh]
  int v13; // [esp+18h] [ebp-2Ch]
  int v14; // [esp+1Ch] [ebp-28h]
  int v15; // [esp+20h] [ebp-24h]
  int v16; // [esp+24h] [ebp-20h]
  int v17; // [esp+28h] [ebp-1Ch]
  int v18; // [esp+2Ch] [ebp-18h]
  int v19; // [esp+30h] [ebp-14h]
  int i; // [esp+3Ch] [ebp-8h]
  int j; // [esp+3Ch] [ebp-8h]

  if ( (*(_BYTE *)(this + 444) || *(_BYTE *)(this + 445)) && *(_DWORD *)(this + 6612) && **(_BYTE **)(this + 6608) )
  {
    for ( i = 2; i < *(_DWORD *)(this + 6612); ++i )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * i) )
      {
        sub_5F83D0(1227, i - 1);
        break;
      }
    }
    if ( i == *(_DWORD *)(this + 6612) )
      sub_5F83D0(1227, *(_DWORD *)(this + 6612) - 1);
    v19 = sub_5FB630(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 116))(v19);
    v18 = sub_5FB630(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
  }
  else
  {
    sub_5F83D0(1227, 0);
    v17 = sub_5FB630(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 112))(v17);
    v16 = sub_5FB630(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 112))(v16);
  }
  if ( *(_DWORD *)(this + 6612)
    && **(_BYTE **)(this + 6608)
    && *(_BYTE *)(this + 452)
    && (*(_BYTE *)(this + 444) || *(_BYTE *)(this + 445)) )
  {
    v15 = sub_5FB300(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 116))(v15);
  }
  else
  {
    v14 = sub_5FB300(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 112))(v14);
  }
  sub_57B050((_BYTE *)this);
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  if ( sub_6352F0(ExecutingCollection) )
  {
    v2 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           v2) )
    {
      v3 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
      v13 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
              dword_162EE84,
              v3);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 144))(v13);
    }
    else
    {
      v12 = 0;
    }
    if ( v12
      && *(_DWORD *)(this + 6612)
      && **(_BYTE **)(this + 6608)
      && (*(_BYTE *)(this + 444) || *(_BYTE *)(this + 445)) )
    {
      v11 = sub_5FB350(1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 116))(v11);
    }
    else
    {
      v10 = sub_5FB350(1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 112))(v10);
    }
  }
  if ( *(_BYTE *)(this + 453) && (*(_BYTE *)(this + 444) || *(_BYTE *)(this + 445)) )
  {
    v9 = sub_5FB550(0);
    v4 = sub_630F40(this + 453);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 180))(v9, v4);
    v8 = sub_5FB550(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8);
  }
  else
  {
    v5 = sub_5FB550(0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 112))(v5, v5);
  }
  for ( j = 0; ; ++j )
  {
    result = j;
    if ( j >= *(_DWORD *)(this + 6612) )
      break;
    if ( strcmp((const char *)(*(_DWORD *)(this + 6608) + 548 * j), "SID_TUTORIAL_HINTBUTTON")
      && strcmp((const char *)(*(_DWORD *)(this + 6608) + 548 * j), "SID_TUTORIAL_PRACTICEMODE")
      && *(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * j)
      && (*(_BYTE *)(this + 444) || *(_BYTE *)(this + 445)) )
    {
      if ( *(_BYTE *)(*(_DWORD *)(this + 6608) + 548 * j + 536) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * j) + 180))(
          *(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * j),
          *(_DWORD *)(*(_DWORD *)(this + 6608) + 548 * j + 540));
      }
      else
      {
        v7 = sub_630F40(*(_DWORD *)(this + 6608) + 548 * j);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * j) + 180))(
          *(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * j),
          v7);
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * j) + 116))(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * j));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * j) + 112))(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * j));
    }
  }
  return result;
}


//======================================================================
// sub_57B720
// entry 0057b720  size 106  status ok
//======================================================================

int __thiscall sub_57B720(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5F87D0(this);
  for ( i = 0; i < *(this + 1655); ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 1654) + 4 * i) + 112))(*(_DWORD *)(*(this + 1654) + 4 * i));
  return sub_57D3A0(*(this + 1656), this);
}


//======================================================================
// sub_57B790
// entry 0057b790  size 302  status ok
//======================================================================

int __thiscall sub_57B790(_DWORD *this, int *a2)
{
  int v3; // [esp+0h] [ebp-14h]
  bool v4; // [esp+4h] [ebp-10h]

  if ( a2[6] == 1 )
  {
    v4 = a2[2] >= 0 && a2[2] <= sub_5F8550(this) - 3 && (unsigned int)a2[3] <= 0x21;
    if ( v4 )
    {
      sub_5FB300(2);
      if ( (unsigned __int8)sub_5F56A0(a2) )
      {
        v3 = sub_5FB300(2);
        return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 60))(v3, a2);
      }
    }
    if ( v4 )
    {
      sub_57D3A0(*(this + 1656));
      *(_DWORD *)(*(this + 1656) + 436) = -1;
      sub_57B1B0((int)this);
    }
    else if ( (unsigned __int8)sub_5F8910(*(this + 1656)) )
    {
      sub_57D3A0(*(this + 1656));
      sub_57CB70(*(_DWORD *)(*(this + 1656) + 436));
    }
  }
  return sub_5F72F0(a2);
}


//======================================================================
// sub_57B8C0
// entry 0057b8c0  size 1465  status ok
//======================================================================

int __thiscall sub_57B8C0(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // eax
  int v14; // [esp-4h] [ebp-70h]
  int v15; // [esp-4h] [ebp-70h]
  int v16; // [esp-4h] [ebp-70h]
  int v17; // [esp+Ch] [ebp-60h]
  int v18; // [esp+10h] [ebp-5Ch]
  int v19; // [esp+14h] [ebp-58h]
  int v20; // [esp+18h] [ebp-54h]
  bool v21; // [esp+1Ch] [ebp-50h]
  _BYTE v23[8]; // [esp+28h] [ebp-44h] BYREF
  int v24; // [esp+30h] [ebp-3Ch]
  int v25; // [esp+34h] [ebp-38h]
  int v26; // [esp+4Ch] [ebp-20h]
  int v27; // [esp+50h] [ebp-1Ch]
  char v28; // [esp+57h] [ebp-15h]
  int i; // [esp+58h] [ebp-14h]
  int v30; // [esp+5Ch] [ebp-10h]
  int v31; // [esp+68h] [ebp-4h]

  sub_5F8340(this);
  result = (unsigned __int8)sub_5F88F0(this);
  if ( !(_BYTE)result )
  {
    v28 = *(_BYTE *)(this + 444);
    v26 = *(_DWORD *)(*(_DWORD *)(this + 6624) + 436);
    v30 = unknown_libname_620(this);
    v27 = unknown_libname_621(this);
    v21 = v30 > 0 && v30 <= sub_5F8550(this) - 3 && v27 > 0 && v27 <= sub_5F8570(this) - 3;
    if ( *(_BYTE *)(this + 445)
      && (v21
       || *(_DWORD *)(*(_DWORD *)(this + 6624) + 436) != -1 && (unsigned __int8)sub_57D4B0(*(_DWORD *)(this + 6624))) )
    {
      *(_BYTE *)(this + 445) = 0;
      sub_57B1B0(this);
    }
    result = this;
    if ( !*(_BYTE *)(this + 292) )
    {
      sub_6101F0(v23);
      v31 = 0;
      v24 = v30;
      v25 = v27;
      v20 = sub_5FB300(0);
      if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v20 + 132))(v20, v23) && *(_BYTE *)(this + 444) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(this + 6624) + 436) != *(_DWORD *)(this + 6612) - 1 )
        {
          sub_57D3A0(*(_DWORD *)(this + 6624));
          v19 = sub_5FB300(0);
          v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 84))(v19);
          v14 = sub_5F84F0(this) + v2 - 4;
          v3 = sub_5F5550(**(_DWORD **)(this + 6616));
          v4 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(this + 6616) + 76))(**(_DWORD **)(this + 6616));
          v5 = unknown_libname_619(this);
          sub_5F8420(v3 + v4 + v5, v14);
          sub_57CB70(*(_DWORD *)(this + 6612) - 1);
          sub_57B1B0(this);
        }
      }
      else
      {
        v18 = sub_5FB350(1);
        if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v18 + 132))(v18, v23)
          && *(_BYTE *)(this + 444) )
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 6624) + 436) != *(_DWORD *)(this + 6612) - 2 )
          {
            sub_57D3A0(*(_DWORD *)(this + 6624));
            v17 = sub_5FB350(1);
            v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 84))(v17);
            v15 = sub_5F84F0(this) + v6 - 4;
            v7 = sub_5F5550(**(_DWORD **)(this + 6616));
            v8 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(this + 6616) + 76))(**(_DWORD **)(this + 6616));
            v9 = unknown_libname_619(this);
            sub_5F8420(v7 + v8 + v9, v15);
            sub_57CB70(*(_DWORD *)(this + 6612) - 2);
            sub_57B1B0(this);
          }
        }
        else
        {
          for ( i = 0; i < *(_DWORD *)(this + 6612); ++i )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * i)
                                                                    + 132))(
                   *(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i),
                   v23)
              && *(_BYTE *)(this + 444) )
            {
              if ( *(_DWORD *)(*(_DWORD *)(this + 6624) + 436) != i )
              {
                sub_57D3A0(*(_DWORD *)(this + 6624));
                v10 = sub_5F84F0(this);
                v16 = v10
                    + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * i) + 84))(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i))
                    - 4;
                v11 = unknown_libname_619(this);
                v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4 * i) + 76))(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i))
                    + v11;
                v13 = sub_5F5550(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4 * i));
                sub_5F8420(v13 + v12, v16);
                sub_57CB70(i);
                sub_57B1B0(this);
              }
              goto LABEL_43;
            }
          }
          if ( !*(_BYTE *)(this + 445) )
          {
            if ( v21 )
            {
              if ( !*(_BYTE *)(this + 444) )
              {
                *(_BYTE *)(this + 444) = 1;
                sub_57D3A0(*(_DWORD *)(this + 6624));
                sub_57B1B0(this);
              }
            }
            else
            {
              if ( *(_DWORD *)(*(_DWORD *)(this + 6624) + 436) != -1
                && !(unsigned __int8)sub_57D4B0(*(_DWORD *)(this + 6624)) )
              {
                sub_57D3A0(*(_DWORD *)(this + 6624));
                sub_57B1B0(this);
              }
              if ( *(_BYTE *)(this + 444) && !(unsigned __int8)sub_57D4B0(*(_DWORD *)(this + 6624)) )
              {
                *(_BYTE *)(this + 444) = 0;
                sub_57B1B0(this);
              }
            }
          }
        }
      }
LABEL_43:
      v31 = -1;
      return CExpandoObject::~CExpandoObject(v23);
    }
  }
  return result;
}


//======================================================================
// sub_57BE80
// entry 0057be80  size 546  status ok
//======================================================================

_DWORD *__thiscall sub_57BE80(_DWORD *this, int a2, char *Str, char *Source)
{
  _DWORD *result; // eax
  size_t v5; // eax
  size_t v6; // eax

  result = this;
  if ( a2 < *(this + 1653) )
  {
    if ( Str && *Str )
    {
      if ( *(_BYTE *)(*(this + 1652) + 548 * a2 + 536) )
      {
        operator delete(*(void **)(*(this + 1652) + 548 * a2 + 540));
        *(_DWORD *)(*(this + 1652) + 548 * a2 + 540) = 0;
      }
      v5 = strlen(Str);
      *(_DWORD *)(*(this + 1652) + 548 * a2 + 540) = operator new(v5 + 1);
      strcpy(*(char **)(*(this + 1652) + 548 * a2 + 540), Str);
      *(_BYTE *)(*(this + 1652) + 548 * a2 + 536) = 1;
    }
    if ( Source && *Source )
    {
      if ( *(_BYTE *)(*(this + 1652) + 548 * a2 + 537) )
      {
        operator delete(*(void **)(*(this + 1652) + 548 * a2 + 544));
        *(_DWORD *)(*(this + 1652) + 548 * a2 + 544) = 0;
      }
      v6 = strlen(Source);
      *(_DWORD *)(*(this + 1652) + 548 * a2 + 544) = operator new(v6 + 1);
      strcpy(*(char **)(*(this + 1652) + 548 * a2 + 544), Source);
      *(_BYTE *)(*(this + 1652) + 548 * a2 + 537) = 1;
    }
    result = (_DWORD *)sub_5DF700(-1);
    if ( (_BYTE)result )
      return (_DWORD *)sub_5F85D0(this);
  }
  return result;
}


//======================================================================
// sub_57C0B0
// entry 0057c0b0  size 135  status ok
//======================================================================

int __thiscall sub_57C0B0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // eax
  int result; // eax

  *(_DWORD *)(*(this + 1652) + 548 * a2 + 520) = a3;
  *(_DWORD *)(*(this + 1652) + 548 * a2 + 524) = a4;
  v6 = 548 * a2;
  v7 = *(this + 1652);
  *(_DWORD *)(v7 + v6 + 528) = a5;
  *(_DWORD *)(v7 + v6 + 532) = a6;
  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
    return sub_5F85D0(this);
  return result;
}


//======================================================================
// sub_57C140
// entry 0057c140  size 256  status ok
//======================================================================

int __thiscall sub_57C140(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // eax
  int v6; // [esp-4h] [ebp-Ch]

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(this + 6616) )
    {
      sub_5DB240(dword_7947E4);
      *(_BYTE *)(this + 444) = 1;
      *(_BYTE *)(this + 445) = 1;
      sub_5F85D0(this);
      sub_57D3A0(*(_DWORD *)(this + 6624));
      v2 = sub_5F84F0(this);
      v6 = v2
         + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4) + 84))(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4))
         - 4;
      v3 = unknown_libname_619(this);
      v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 6616) + 4) + 76))(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4))
         + v3;
      v5 = sub_5F5550(*(_DWORD *)(*(_DWORD *)(this + 6616) + 4));
      sub_5F8420(v5 + v4, v6);
      sub_57CB70(1);
      return sub_57B1B0(this);
    }
  }
  return result;
}


//======================================================================
// sub_57C240
// entry 0057c240  size 29  status ok
//======================================================================

int __thiscall sub_57C240(_BYTE *this)
{
  *(this + 445) = 0;
  return sub_5F85D0(this);
}


//======================================================================
// sub_57C260
// entry 0057c260  size 58  status ok
//======================================================================

_DWORD *__thiscall sub_57C260(_DWORD *this, int a2)
{
  sub_5EC5A0(this);
  *this = &CasinoTutorialTitle::`vftable';
  *(this + 116) = a2;
  *(this + 117) = 0;
  return this;
}


//======================================================================
// sub_57C2A0
// entry 0057c2a0  size 161  status ok
//======================================================================

void __thiscall sub_57C2A0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CasinoTutorialTitle::`vftable';
  if ( *(this + 117) )
  {
    (***(this + 117))(*(this + 117), 1);
    *(this + 117) = 0;
  }
  sub_5EC760(this);
}


//======================================================================
// sub_57C350
// entry 0057c350  size 191  status ok
//======================================================================

int __thiscall sub_57C350(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch]
  void *v5; // [esp+Ch] [ebp-14h]

  sub_5EF3E0(this);
  if ( !*(this + 117) )
  {
    v5 = operator new(0x178u);
    if ( v5 )
    {
      sub_5EAAF0(v5);
      v3 = v1;
    }
    else
    {
      v3 = 0;
    }
    *(this + 117) = v3;
  }
  *(_DWORD *)(*(this + 117) + 4) = dword_793578;
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 117) + 64))(*(this + 117));
}


//======================================================================
// sub_57C410
// entry 0057c410  size 326  status ok
//======================================================================

int __thiscall sub_57C410(_DWORD *this, char a2)
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax

  result = *(_DWORD *)(dword_793578 + 6608);
  if ( *(_BYTE *)(result + 548 * *(this + 116)) )
  {
    if ( a2 )
    {
      sub_5EE8C0(125, 198, 238);
    }
    else
    {
      sub_5EE8C0(0, 0, 0);
      sub_5ECD00(*(this + 116) > 1 ? 103 : 47, -1, word_75EE1C);
    }
    sub_5EAF00(1055);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 108))(this, 501);
    sub_5F6270(this);
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
    v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 76))(this, v3 + 4);
    v5 = sub_5F5550(this);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 117) + 68))(*(this + 117), v4 + v5 - 6);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 117) + 108))(*(this + 117), 502);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 117) + 116))(*(this + 117));
  }
  return result;
}


//======================================================================
// sub_57C560
// entry 0057c560  size 46  status ok
//======================================================================

int __thiscall sub_57C560(_DWORD **this)
{
  sub_5F62B0(this);
  return (*(int (__thiscall **)(_DWORD))(**(this + 117) + 112))(*(this + 117));
}


//======================================================================
// sub_57C590
// entry 0057c590  size 162  status ok
//======================================================================

_DWORD *__thiscall sub_57C590(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(
    0,
    *(_DWORD *)(dword_15E55E8 + 20),
    640,
    480);
  *this = &CasinoTutorialInfoBox::`vftable';
  *(this + 109) = -1;
  for ( i = 0; i < 6; ++i )
    *(this + i + 110) = 0;
  *(this + 116) = 0;
  *(this + 117) = 0;
  *(this + 118) = 0;
  *(this + 119) = 0;
  return this;
}


//======================================================================
// sub_57C640
// entry 0057c640  size 440  status ok
//======================================================================

int __thiscall sub_57C640(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+38h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&CasinoTutorialInfoBox::`vftable';
  for ( i = 0; i < 6; ++i )
  {
    if ( *(this + i + 110) )
    {
      (***(this + i + 110))(*(this + i + 110), 1);
      *(this + i + 110) = 0;
    }
  }
  if ( *(this + 116) )
  {
    (***(this + 116))(*(this + 116), 1);
    *(this + 116) = 0;
  }
  if ( *(this + 117) )
  {
    (***(this + 117))(*(this + 117), 1);
    *(this + 117) = 0;
  }
  if ( *(this + 118) )
  {
    (***(this + 118))(*(this + 118), 1);
    *(this + 118) = 0;
  }
  *(_DWORD *)(dword_793578 + 6624) = 0;
  return sub_5F79F0();
}


//======================================================================
// sub_57C800
// entry 0057c800  size 871  status ok
//======================================================================

int __thiscall sub_57C800(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-58h]
  int v6; // [esp+8h] [ebp-54h]
  int v7; // [esp+Ch] [ebp-50h]
  int v8; // [esp+10h] [ebp-4Ch]
  void *v10; // [esp+18h] [ebp-44h]
  void *v11; // [esp+20h] [ebp-3Ch]
  void *v12; // [esp+28h] [ebp-34h]
  void *v13; // [esp+30h] [ebp-2Ch]
  _BYTE Buf2[3]; // [esp+38h] [ebp-24h] BYREF
  char v15; // [esp+3Bh] [ebp-21h]
  char v16; // [esp+3Ch] [ebp-20h]
  char v17; // [esp+3Dh] [ebp-1Fh]
  _BYTE v18[14]; // [esp+3Eh] [ebp-1Eh] BYREF
  int i; // [esp+4Ch] [ebp-10h]
  int v20; // [esp+58h] [ebp-4h]

  qmemcpy(Buf2, "17p", sizeof(Buf2));
  v15 = -1;
  v16 = -1;
  v17 = -1;
  qmemcpy(v18, "17p", 3);
  v18[3] = -1;
  v18[4] = -1;
  v18[5] = -1;
  v18[6] = 49;
  v18[7] = 55;
  v18[8] = 112;
  v18[9] = -26;
  v18[10] = -26;
  v18[11] = -1;
  sub_5F8510(50, 50);
  for ( i = 0; i < 6; ++i )
  {
    if ( !*(this + i + 110) )
    {
      v13 = operator new(0x5Cu);
      v20 = 0;
      if ( v13 )
        v8 = sub_5F6130(v13);
      else
        v8 = 0;
      v20 = -1;
      *(this + i + 110) = v8;
    }
    *(_DWORD *)(*(this + i + 110) + 4) = this;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 110) + 64))(*(this + i + 110));
    sub_5F6510(*(_WORD *)&Buf2[3 * i]);
    sub_5F6430(*(_WORD *)&Buf2[3 * i]);
  }
  if ( !*(this + 116) )
  {
    v12 = operator new(0x1D0u);
    v20 = 1;
    if ( v12 )
    {
      sub_5EC5A0(v12);
      v7 = v1;
    }
    else
    {
      v7 = 0;
    }
    v20 = -1;
    *(this + 116) = v7;
  }
  *(_DWORD *)(*(this + 116) + 4) = this;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 116) + 180))(*(this + 116), &Source);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 116) + 64))(*(this + 116));
  sub_5EF3B0(12);
  sub_5ECD00(35, -1, word_75EE1C);
  if ( !*(this + 117) )
  {
    v11 = operator new(0x178u);
    v20 = 2;
    if ( v11 )
    {
      sub_5EAAF0(v11);
      v6 = v2;
    }
    else
    {
      v6 = 0;
    }
    v20 = -1;
    *(this + 117) = v6;
  }
  *(_DWORD *)(*(this + 117) + 4) = this;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 117) + 64))(*(this + 117));
  if ( !*(this + 118) )
  {
    v10 = operator new(0x178u);
    v20 = 3;
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v5 = v3;
    }
    else
    {
      v5 = 0;
    }
    v20 = -1;
    *(this + 118) = v5;
  }
  *(_DWORD *)(*(this + 118) + 4) = this;
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 118) + 64))(*(this + 118));
}


//======================================================================
// sub_57CB70
// entry 0057cb70  size 2094  status ok
//======================================================================

int __thiscall sub_57CB70(int this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp-4h] [ebp-124h]
  int v15; // [esp-4h] [ebp-124h]
  char v16; // [esp+0h] [ebp-120h]
  char Buffer[260]; // [esp+8h] [ebp-118h] BYREF
  int v19; // [esp+110h] [ebp-10h]
  int v20; // [esp+114h] [ebp-Ch]
  int i; // [esp+118h] [ebp-8h]
  int v22; // [esp+11Ch] [ebp-4h]

  if ( a2 == -1 )
  {
    result = (unsigned __int8)sub_5F88F0(this);
    if ( (_BYTE)result )
    {
      result = sub_5EA2E0();
      if ( (_BYTE)result )
        return sub_5F85D0(this);
    }
  }
  else
  {
    if ( (unsigned __int8)sub_5F88F0(this) && (unsigned __int8)sub_5EA2E0() )
      sub_5F85D0(this);
    for ( i = 0; i < *(_DWORD *)(dword_793578 + 6612); ++i )
      sub_57C410(*(_DWORD **)(*(_DWORD *)(dword_793578 + 6616) + 4 * i), i == a2);
    *(_DWORD *)(this + 436) = a2;
    v22 = *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 512);
    v20 = *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 516);
    if ( v20 == -1 )
      sub_5F8510(v22, 640);
    else
      sub_5F8510(v22, v20);
    sub_5ECC60(v22 - 20);
    if ( v20 == -1 )
      sub_5ECCB0(640);
    else
      sub_5ECCB0(v20 - 20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 108))(*(_DWORD *)(this + 464), 510);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 464) + 68))(*(_DWORD *)(this + 464), 10, 6);
    if ( *(_BYTE *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 537) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 464) + 180))(
        *(_DWORD *)(this + 464),
        *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 544));
    }
    else if ( !strcmp(
                 "SID_TUTORIAL_ADJUSTBET_INSTRUCTIONS",
                 (const char *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 256)) )
    {
      v3 = sub_630F40("SID_TUTORIAL_ADJUSTBET_INSTRUCTIONS_WIN");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 180))(*(_DWORD *)(this + 464), v3);
    }
    else if ( !strcmp("SID_TUTORIAL_CHANGEPLAYER", (const char *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 256)) )
    {
      v4 = sub_630F40("SID_TUTORIAL_CHANGEPLAYER_WIN");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 180))(*(_DWORD *)(this + 464), v4);
    }
    else if ( !strcmp(
                 "SID_TUTORIAL_STATISTICS_INSTRUCTIONS",
                 (const char *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 256)) )
    {
      v5 = sub_630F40("SID_TUTORIAL_STATISTICS_INSTRUCTIONS_WIN");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 180))(*(_DWORD *)(this + 464), v5);
    }
    else
    {
      if ( !strcmp(
              "SID_TUTORIAL_PLAYERS_INSTRUCTIONS",
              (const char *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 256)) )
        v6 = sub_630F40("SID_TUTORIAL_PLAYERS_INSTRUCTIONS_WIN");
      else
        v6 = sub_630F40(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 256);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 180))(*(_DWORD *)(this + 464), v6);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 464) + 116))(*(_DWORD *)(this + 464));
    if ( v20 == -1 )
    {
      v7 = sub_5EF440(*(_DWORD *)(this + 464));
      sub_5F8510(v22, v7 + 20);
    }
    if ( *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 520) )
    {
      sub_5EAF00(*(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 520));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 468) + 108))(*(_DWORD *)(this + 468), 511);
      v8 = sub_5EF440(*(_DWORD *)(this + 464));
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 468) + 68))(*(_DWORD *)(this + 468), 10, v8 + 20);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 116))(*(_DWORD *)(this + 468));
      if ( *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 524) )
      {
        sub_5EAF00(*(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 524));
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 472) + 108))(*(_DWORD *)(this + 472), 512);
        v9 = sub_5EF440(*(_DWORD *)(this + 464));
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 472) + 68))(
          *(_DWORD *)(this + 472),
          *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 528) + 10,
          v9 + *(_DWORD *)(*(_DWORD *)(dword_793578 + 6608) + 548 * a2 + 532) + 20);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 472) + 116))(*(_DWORD *)(this + 472));
      }
      if ( v20 == -1 )
      {
        v10 = sub_5EF440(*(_DWORD *)(this + 464));
        v11 = sub_5F5590(*(_DWORD *)(this + 468));
        sub_5F8510(v22, v10 + v11 + 30);
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 112))(*(_DWORD *)(this + 468));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 472) + 112))(*(_DWORD *)(this + 472));
    }
    for ( i = 0; i < 6; ++i )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 440) + 108))(
        *(_DWORD *)(this + 4 * i + 440),
        i + 501);
      v14 = sub_5F8570(this) - (i + 1);
      v12 = sub_5F8550(this);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 440) + 120))(
        *(_DWORD *)(this + 4 * i + 440),
        v12 - (i + 1),
        v14);
      v19 = (i + 2) / 2;
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 440) + 68))(
        *(_DWORD *)(this + 4 * i + 440),
        v19,
        v19);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 440) + 116))(*(_DWORD *)(this + 4 * i + 440));
    }
    if ( sub_5F8550(this) > 640 || sub_5F8570(this) > 480 )
      sub_5E9F20((char)"false", "..\\Casino\\casinotutorial.cpp", 726);
    v15 = sub_5F8570(this);
    v13 = sub_5F8550(this);
    sprintf(Buffer, "iWidth: %d, iHeight: %d\n", v13, v15);
    return sub_62FDE0(Buffer, v16);
  }
  return result;
}


//======================================================================
// sub_57D3A0
// entry 0057d3a0  size 272  status ok
//======================================================================

int __thiscall sub_57D3A0(int this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  sub_5F87D0(this);
  for ( i = 0; i < *(_DWORD *)(dword_793578 + 6612); ++i )
    sub_57C410(*(_DWORD **)(*(_DWORD *)(dword_793578 + 6616) + 4 * i), 0);
  *(_DWORD *)(this + 436) = -1;
  for ( j = 0; j < 6; ++j )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 440) + 112))(*(_DWORD *)(this + 4 * j + 440));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 464) + 112))(*(_DWORD *)(this + 464));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 112))(*(_DWORD *)(this + 468));
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 472) + 112))(*(_DWORD *)(this + 472));
  if ( *(_DWORD *)(this + 476) )
  {
    sub_5F85D0(*(_DWORD *)(this + 476));
    *(_DWORD *)(this + 476) = 0;
    return this;
  }
  return result;
}


//======================================================================
// sub_57D4B0
// entry 0057d4b0  size 111  status ok
//======================================================================

bool __thiscall sub_57D4B0(void *this)
{
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( (unsigned __int8)sub_5F88F0(this) )
    return 0;
  v4 = unknown_libname_620(this);
  v5 = unknown_libname_621(this);
  return v4 > 0 && v4 < sub_5F8550(this) && v5 > 0 && v5 < sub_5F8570(this);
}


//======================================================================
// sub_57D520
// entry 0057d520  size 76  status ok
//======================================================================

int __thiscall sub_57D520(void *this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    *(_BYTE *)(dword_793578 + 445) = 0;
    sub_57D3A0((int)this);
    sub_57B1B0(dword_793578);
  }
  return sub_5F7E80(a2);
}


//======================================================================
// sub_57D600
// entry 0057d600  size 2253  status ok
//======================================================================

_DWORD *__thiscall sub_57D600(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+4h] [ebp-A4h]
  int v9; // [esp+8h] [ebp-A0h]
  int v10; // [esp+Ch] [ebp-9Ch]
  int v11; // [esp+10h] [ebp-98h]
  int v12; // [esp+14h] [ebp-94h]
  int v13; // [esp+18h] [ebp-90h]
  int v14; // [esp+1Ch] [ebp-8Ch]
  int v15; // [esp+20h] [ebp-88h]
  int v16; // [esp+24h] [ebp-84h]
  int v17; // [esp+28h] [ebp-80h]
  int v18; // [esp+2Ch] [ebp-7Ch]
  int v19; // [esp+30h] [ebp-78h]
  void *v21; // [esp+40h] [ebp-68h]
  void *v22; // [esp+48h] [ebp-60h]
  void *v23; // [esp+50h] [ebp-58h]
  void *v24; // [esp+58h] [ebp-50h]
  void *v25; // [esp+68h] [ebp-40h]
  void *v26; // [esp+70h] [ebp-38h]
  void *v27; // [esp+80h] [ebp-28h]
  void *v28; // [esp+88h] [ebp-20h]
  void *v29; // [esp+90h] [ebp-18h]
  int i; // [esp+98h] [ebp-10h]
  int j; // [esp+98h] [ebp-10h]

  sub_5F5BF0(this);
  *this = &KenoAnimator::`vftable';
  v29 = operator new(0x1D0u);
  if ( v29 )
  {
    sub_5EC5A0(v29);
    v19 = v1;
  }
  else
  {
    v19 = 0;
  }
  *(this + 121) = v19;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 121) + 64))(*(this + 121));
  sub_5ECD00(44, -1, word_75EE1C);
  sub_5ECC60(134);
  sub_5ECCB0(40);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 121) + 68))(*(this + 121), 247, 203);
  sub_5EF310(48);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 121) + 108))(*(this + 121), 10);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 121) + 112))(*(this + 121));
  *(this + 122) = 0;
  *(this + 123) = 0;
  *(this + 124) = 0;
  *(this + 125) = 0;
  v28 = operator new(0x178u);
  if ( v28 )
  {
    sub_5EAAF0(v28);
    v18 = v2;
  }
  else
  {
    v18 = 0;
  }
  *(this + 126) = v18;
  sub_5EAF00(3203044);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 126) + 108))(*(this + 126), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 64))(*(this + 126));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 126) + 112))(*(this + 126));
  v27 = operator new(0x178u);
  if ( v27 )
  {
    sub_5EAAF0(v27);
    v17 = v3;
  }
  else
  {
    v17 = 0;
  }
  *(this + 127) = v17;
  sub_5EAF00(3203043);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 127) + 108))(*(this + 127), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 127) + 64))(*(this + 127));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 127) + 112))(*(this + 127));
  if ( operator new(0x14u) )
    v16 = sub_57F0F0();
  else
    v16 = 0;
  *(this + 128) = v16;
  for ( i = 0; i < 20; ++i )
  {
    v26 = operator new(0x178u);
    if ( v26 )
    {
      sub_5EAAF0(v26);
      v15 = v4;
    }
    else
    {
      v15 = 0;
    }
    *(this + i + 101) = v15;
    sub_5EAF00(3203014);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 101) + 108))(*(this + i + 101), 30);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 101) + 64))(*(this + i + 101));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 101) + 112))(*(this + i + 101));
  }
  v25 = operator new(0x184u);
  if ( v25 )
    v14 = sub_5F5BF0(v25);
  else
    v14 = 0;
  *(this + 97) = v14;
  sub_5EAF00(3203012);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 97) + 108))(*(this + 97), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 97) + 64))(*(this + 97));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 97) + 112))(*(this + 97));
  *(_DWORD *)(*(this + 97) + 376) = 6;
  if ( operator new(0x1Cu) )
    v13 = sub_600A70(0);
  else
    v13 = 0;
  sub_5F5D50(v13);
  v24 = operator new(0x184u);
  if ( v24 )
    v12 = sub_5F5BF0(v24);
  else
    v12 = 0;
  *(this + 98) = v12;
  sub_5EAF00(3203013);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 98) + 108))(*(this + 98), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 98) + 64))(*(this + 98));
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 98) + 176))(*(this + 98), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 98) + 112))(*(this + 98));
  v23 = operator new(0x178u);
  if ( v23 )
  {
    sub_5EAAF0(v23);
    v11 = v5;
  }
  else
  {
    v11 = 0;
  }
  *(this + 99) = v11;
  sub_5EAF00(3203045);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 99) + 108))(*(this + 99), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 99) + 64))(*(this + 99));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 99) + 112))(*(this + 99));
  sub_6044B0(542655828, 3203046, 0);
  for ( j = 0; j < 20; ++j )
    sub_6044B0(542655828, j + 3203020, 0);
  v22 = operator new(0x184u);
  if ( v22 )
    v10 = sub_5F5BF0(v22);
  else
    v10 = 0;
  *(this + 100) = v10;
  sub_5EAF00(3203020);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 100) + 108))(*(this + 100), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 100) + 64))(*(this + 100));
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 100) + 176))(*(this + 100), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 100) + 112))(*(this + 100));
  v21 = operator new(0x178u);
  if ( v21 )
  {
    sub_5EAAF0(v21);
    v9 = v6;
  }
  else
  {
    v9 = 0;
  }
  *(this + 129) = v9;
  sub_5EAF00(3203047);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 129) + 108))(*(this + 129), 5);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 129) + 64))(*(this + 129));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 129) + 116))(*(this + 129));
  if ( operator new(0x4330u) )
    v8 = sub_57F820();
  else
    v8 = 0;
  *(this + 130) = v8;
  sub_5F5CC0(this);
  return this;
}


//======================================================================
// sub_57DED0
// entry 0057ded0  size 1271  status ok
//======================================================================

int __thiscall sub_57DED0(_DWORD **this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+38h] [ebp-64h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+40h] [ebp-5Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+48h] [ebp-54h]
  void (__thiscall ***v6)(_DWORD, int); // [esp+50h] [ebp-4Ch]
  void (__thiscall ***v7)(_DWORD, int); // [esp+58h] [ebp-44h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+60h] [ebp-3Ch]
  void (__thiscall ***v9)(_DWORD, int); // [esp+68h] [ebp-34h]
  void *v10; // [esp+70h] [ebp-2Ch]
  void (__thiscall ***v11)(_DWORD, int); // [esp+78h] [ebp-24h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+80h] [ebp-1Ch]
  void (__thiscall ***v13)(_DWORD, int); // [esp+88h] [ebp-14h]
  int i; // [esp+8Ch] [ebp-10h]

  *this = &KenoAnimator::`vftable';
  if ( *(this + 121) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 121) + 112))(*(this + 121));
    v13 = (void (__thiscall ***)(_DWORD, int))*(this + 121);
    if ( v13 )
      (**v13)(v13, 1);
    *(this + 121) = 0;
  }
  if ( *(this + 126) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 126) + 112))(*(this + 126));
    v12 = (void (__thiscall ***)(_DWORD, int))*(this + 126);
    if ( v12 )
      (**v12)(v12, 1);
    *(this + 126) = 0;
  }
  if ( *(this + 127) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 127) + 112))(*(this + 127));
    v11 = (void (__thiscall ***)(_DWORD, int))*(this + 127);
    if ( v11 )
      (**v11)(v11, 1);
    *(this + 127) = 0;
  }
  if ( *(this + 128) )
  {
    sub_57F660(*(this + 128));
    v10 = *(this + 128);
    if ( v10 )
    {
      sub_57F460(v10);
      operator delete(v10);
    }
    *(this + 128) = 0;
  }
  for ( i = 0; i < 20; ++i )
  {
    if ( *(this + i + 101) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + i + 101) + 112))(*(this + i + 101));
      v9 = (void (__thiscall ***)(_DWORD, int))*(this + i + 101);
      if ( v9 )
        (**v9)(v9, 1);
      *(this + i + 101) = 0;
    }
  }
  if ( *(this + 97) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 97) + 112))(*(this + 97));
    v8 = (void (__thiscall ***)(_DWORD, int))*(this + 97);
    if ( v8 )
      (**v8)(v8, 1);
    *(this + 97) = 0;
  }
  if ( *(this + 98) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 98) + 112))(*(this + 98));
    v7 = (void (__thiscall ***)(_DWORD, int))*(this + 98);
    if ( v7 )
      (**v7)(v7, 1);
    *(this + 98) = 0;
  }
  if ( *(this + 99) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 99) + 112))(*(this + 99));
    v6 = (void (__thiscall ***)(_DWORD, int))*(this + 99);
    if ( v6 )
      (**v6)(v6, 1);
    *(this + 99) = 0;
  }
  if ( *(this + 100) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 100) + 112))(*(this + 100));
    v5 = (void (__thiscall ***)(_DWORD, int))*(this + 100);
    if ( v5 )
      (**v5)(v5, 1);
    *(this + 100) = 0;
  }
  if ( *(this + 129) )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 129) + 112))(*(this + 129));
    v4 = (void (__thiscall ***)(_DWORD, int))*(this + 129);
    if ( v4 )
      (**v4)(v4, 1);
    *(this + 129) = 0;
  }
  if ( *(this + 130) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*(this + 130);
    if ( v3 )
      (**v3)(v3, 1);
    *(this + 130) = 0;
  }
  return sub_5F5C40();
}


//======================================================================
// sub_57E3D0
// entry 0057e3d0  size 228  status ok
//======================================================================

int __thiscall sub_57E3D0(int this)
{
  char Buffer[16]; // [esp+4h] [ebp-14h] BYREF

  *(_DWORD *)(this + 488) = 0;
  *(_DWORD *)(this + 492) = 0;
  *(_DWORD *)(this + 496) = 0;
  sprintf(Buffer, "%d:%02d", *(_DWORD *)(this + 488), *(_DWORD *)(this + 492));
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 484) + 180))(*(_DWORD *)(this + 484), Buffer);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 116))(*(_DWORD *)(this + 484));
  *(_DWORD *)(this + 500) = *(_DWORD *)(dword_7947E0 + 152);
  sub_57F6D0(*(_DWORD *)(this + 500));
  return sub_57F5F0(*(_DWORD *)(this + 512));
}


//======================================================================
// sub_57E4C0
// entry 0057e4c0  size 141  status ok
//======================================================================

int __thiscall sub_57E4C0(int this)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 484) + 112))(*(_DWORD *)(this + 484));
  *(_DWORD *)(this + 488) = 0;
  *(_DWORD *)(this + 492) = 0;
  *(_DWORD *)(this + 496) = 0;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 112))(*(_DWORD *)(this + 504));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 508) + 112))(*(_DWORD *)(this + 508));
  return sub_57F5F0(*(_DWORD *)(this + 512));
}


//======================================================================
// sub_57E550
// entry 0057e550  size 527  status ok
//======================================================================

int __thiscall sub_57E550(int this)
{
  int result; // eax
  char Buffer[16]; // [esp+4h] [ebp-20h] BYREF
  int v4; // [esp+18h] [ebp-Ch]
  int v5; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h]

  v5 = dword_75D7AC - CMediaType::IsFixedSize(dword_162EE84);
  v6 = v5 / 3600;
  v4 = v5 % 3600 / 60;
  if ( *(_DWORD *)(this + 500) != *(_DWORD *)(dword_7947E0 + 152) )
  {
    *(_DWORD *)(this + 500) = *(_DWORD *)(dword_7947E0 + 152);
    sub_57F6D0(*(_DWORD *)(this + 500));
    sub_57F5F0(*(_DWORD *)(this + 512));
  }
  if ( v6 != *(_DWORD *)(this + 488) || (result = v4, v4 != *(_DWORD *)(this + 492)) )
  {
    *(_DWORD *)(this + 488) = v6;
    *(_DWORD *)(this + 492) = v4;
    sprintf(Buffer, "%d:%02d", *(_DWORD *)(this + 488), *(_DWORD *)(this + 492));
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 484) + 180))(*(_DWORD *)(this + 484), Buffer);
    result = *(_DWORD *)(this + 492) / 3;
    if ( !(*(_DWORD *)(this + 492) % 3) )
    {
      if ( (int)++*(_DWORD *)(this + 496) > 2 )
        *(_DWORD *)(this + 496) = 0;
      sub_57F660(*(_DWORD *)(this + 512));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 508) + 112))(*(_DWORD *)(this + 508));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 112))(*(_DWORD *)(this + 504));
      if ( *(_DWORD *)(this + 496) == 1 )
      {
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 116))(*(_DWORD *)(this + 504));
      }
      else if ( *(_DWORD *)(this + 496) == 2 )
      {
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 508) + 116))(*(_DWORD *)(this + 508));
      }
      else
      {
        return sub_57F5F0(*(_DWORD *)(this + 512));
      }
    }
  }
  return result;
}


//======================================================================
// sub_57E760
// entry 0057e760  size 179  status ok
//======================================================================

int __thiscall sub_57E760(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  sub_57E4C0((int)this);
  if ( !*(this + 95) )
  {
    if ( operator new(0x28u) )
      v2 = sub_57EA10(this);
    else
      v2 = 0;
    *(this + 95) = v2;
  }
  return (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*(this + 95) + 8))(0);
}


//======================================================================
// sub_57E820
// entry 0057e820  size 143  status ok
//======================================================================

int __thiscall sub_57E820(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 20; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 101) + 112))(*(this + i + 101));
  sub_5E1070(dword_7947E0);
  sub_583830(dword_79357C);
  sub_57E3D0((int)this);
  sub_57E9B0(this);
  sub_582540(*(this + 130));
  return sub_582510(255);
}


//======================================================================
// sub_57E8B0
// entry 0057e8b0  size 247  status ok
//======================================================================

int __thiscall sub_57E8B0(int this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5F5D50(0);
  sub_5F5D50(0);
  for ( i = 0; i < 20; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 404) + 112))(*(_DWORD *)(this + 4 * i + 404));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 388) + 112))(*(_DWORD *)(this + 388));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 112))(*(_DWORD *)(this + 392));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 112))(*(_DWORD *)(this + 396));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 112))(*(_DWORD *)(this + 400));
  sub_5F5DF0(0);
  sub_582540(*(_DWORD *)(this + 520));
  return sub_582510(255);
}


//======================================================================
// sub_57E9B0
// entry 0057e9b0  size 25  status ok
//======================================================================

int __thiscall sub_57E9B0(_DWORD *this)
{
  return sub_581670(*(this + 130), this);
}


//======================================================================
// sub_57E9D0
// entry 0057e9d0  size 31  status ok
//======================================================================

int __stdcall sub_57E9D0(int a1)
{
  return sub_5825A0(a1);
}


//======================================================================
// sub_57E9F0
// entry 0057e9f0  size 31  status ok
//======================================================================

int __stdcall sub_57E9F0(char a1)
{
  return sub_582510(a1);
}


//======================================================================
// sub_57EA10
// entry 0057ea10  size 132  status ok
//======================================================================

_DWORD *__thiscall sub_57EA10(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &KenoDrawing::`vftable';
  *(this + 3) = a2;
  sub_5FC4C0(0);
  *(this + 8) = *(this + 3);
  *(this + 9) = 0;
  return this;
}


//======================================================================
// sub_57EAC0
// entry 0057eac0  size 1548  status ok
//======================================================================

int __thiscall sub_57EAC0(int *this)
{
  int v1; // kr00_4
  int result; // eax
  int v3; // [esp+4h] [ebp-38h]
  int v4; // [esp+8h] [ebp-34h]
  int v5; // [esp+Ch] [ebp-30h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 9) = 0;
      sub_57E4C0(*(this + 8));
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 116))(*(_DWORD *)(*(this + 8) + 388));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 396) + 116))(*(_DWORD *)(*(this + 8) + 396));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 112))(*(_DWORD *)(*(this + 8) + 392));
      sub_5EAF00(3203045);
      sub_5EAF00(3203020);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 112))(*(_DWORD *)(*(this + 8) + 400));
      sub_57E9F0(128);
      result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 45);
      break;
    case 1:
      sub_5EAF00(3203046);
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 2);
      result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 45);
      break;
    case 2:
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 3);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 116))(*(_DWORD *)(*(this + 8) + 392));
      if ( operator new(0x20u) )
        v5 = sub_6010A0(this);
      else
        v5 = 0;
      result = sub_5F5D50(v5);
      break;
    case 3:
      ++*(this + 9);
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 8) + 392) + 176))(
        *(_DWORD *)(*(this + 8) + 392),
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 112))(*(_DWORD *)(*(this + 8) + 392));
      sub_5EAF00(3203045);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 4 * *(this + 9) + 400) + 176))(
        *(_DWORD *)(*(this + 8) + 4 * *(this + 9) + 400),
        *(char *)(dword_7947E0 + 20 * *(_DWORD *)(dword_7947E0 + 152) + 156 + *(this + 9) - 1) - 1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 4 * *(this + 9) + 400) + 116))(*(_DWORD *)(*(this + 8) + 4 * *(this + 9) + 400));
      sub_57E9D0(*(char *)(dword_7947E0 + 20 * *(_DWORD *)(dword_7947E0 + 152) + 156 + *(this + 9) - 1));
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 4);
      result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 45);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 8) + 400) + 176))(
        *(_DWORD *)(*(this + 8) + 400),
        0);
      sub_5EAF00(*(this + 9) + 3203019);
      if ( operator new(0x20u) )
        v4 = sub_6010A0(this);
      else
        v4 = 0;
      sub_5F5D50(v4);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 116))(*(_DWORD *)(*(this + 8) + 400));
      result = (*(int (__thiscall **)(int *, int))(*this + 4))(this, 5);
      break;
    case 5:
      sub_5F5D50(0);
      if ( *(this + 9) == 20 )
      {
        (*(void (__thiscall **)(int *, int))(*this + 4))(this, 6);
        result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 90);
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*this + 4))(this, 1);
        result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 45);
      }
      break;
    case 6:
      sub_5EAF00(3203040);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 8) + 400) + 176))(
        *(_DWORD *)(*(this + 8) + 400),
        0);
      if ( operator new(0x20u) )
        v3 = sub_6010A0(this);
      else
        v3 = 0;
      sub_5F5D50(v3);
      result = (*(int (__thiscall **)(int *, int))(*this + 4))(this, 7);
      break;
    case 7:
      sub_5F5D50(0);
      sub_5EAF00(3203020);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 8) + 400) + 176))(
        *(_DWORD *)(*(this + 8) + 400),
        0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 112))(*(_DWORD *)(*(this + 8) + 400));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 396) + 112))(*(_DWORD *)(*(this + 8) + 396));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 112))(*(_DWORD *)(*(this + 8) + 388));
      sub_583AA0(dword_79357C);
      (*(void (__thiscall **)(int *, int))(*this + 4))(this, 8);
      result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 150);
      break;
    case 8:
      result = sub_57E820((_DWORD *)*(this + 8));
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_57F0F0
// entry 0057f0f0  size 876  status ok
//======================================================================

_DWORD *__thiscall sub_57F0F0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-4Ch]
  int v8; // [esp+8h] [ebp-48h]
  int v9; // [esp+Ch] [ebp-44h]
  int v10; // [esp+10h] [ebp-40h]
  int v11; // [esp+14h] [ebp-3Ch]
  void *v13; // [esp+1Ch] [ebp-34h]
  void *v14; // [esp+24h] [ebp-2Ch]
  void *v15; // [esp+2Ch] [ebp-24h]
  void *v16; // [esp+34h] [ebp-1Ch]
  void *v17; // [esp+3Ch] [ebp-14h]

  v17 = operator new(0x178u);
  if ( v17 )
  {
    sub_5EAAF0(v17);
    v11 = v1;
  }
  else
  {
    v11 = 0;
  }
  *this = v11;
  sub_5EAF00(3203041);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 108))(*this, 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 64))(*this);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 112))(*this);
  v16 = operator new(0x178u);
  if ( v16 )
  {
    sub_5EAAF0(v16);
    v10 = v2;
  }
  else
  {
    v10 = 0;
  }
  *(this + 1) = v10;
  sub_5EAF00(3203015);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), 9);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 108))(*(this + 1), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 64))(*(this + 1));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 112))(*(this + 1));
  v15 = operator new(0x178u);
  if ( v15 )
  {
    sub_5EAAF0(v15);
    v9 = v3;
  }
  else
  {
    v9 = 0;
  }
  *(this + 2) = v9;
  sub_5EAF00(3203016);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 176))(*(this + 2), 9);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 108))(*(this + 2), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 64))(*(this + 2));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 112))(*(this + 2));
  v14 = operator new(0x178u);
  if ( v14 )
  {
    sub_5EAAF0(v14);
    v8 = v4;
  }
  else
  {
    v8 = 0;
  }
  *(this + 3) = v8;
  sub_5EAF00(3203017);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3) + 176))(*(this + 3), 9);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3) + 108))(*(this + 3), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 64))(*(this + 3));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 112))(*(this + 3));
  v13 = operator new(0x178u);
  if ( v13 )
  {
    sub_5EAAF0(v13);
    v7 = v5;
  }
  else
  {
    v7 = 0;
  }
  *(this + 4) = v7;
  sub_5EAF00(3203018);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4) + 176))(*(this + 4), 9);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4) + 108))(*(this + 4), 20);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 64))(*(this + 4));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 112))(*(this + 4));
  return this;
}


//======================================================================
// sub_57F460
// entry 0057f460  size 391  status ok
//======================================================================

int __thiscall sub_57F460(int *this)
{
  int result; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)*this + 112))(*this);
  if ( *this )
    (**(void (__thiscall ***)(int, int))*this)(*this, 1);
  *this = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 112))(*(this + 1));
  if ( *(this + 1) )
    (**(void (__thiscall ***)(_DWORD, int))*(this + 1))(*(this + 1), 1);
  *(this + 1) = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 112))(*(this + 2));
  if ( *(this + 2) )
    (**(void (__thiscall ***)(_DWORD, int))*(this + 2))(*(this + 2), 1);
  *(this + 2) = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 112))(*(this + 3));
  if ( *(this + 3) )
    (**(void (__thiscall ***)(_DWORD, int))*(this + 3))(*(this + 3), 1);
  *(this + 3) = 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 112))(*(this + 4));
  result = *(this + 4);
  if ( result )
    result = (**(int (__thiscall ***)(_DWORD, int))*(this + 4))(*(this + 4), 1);
  *(this + 4) = 0;
  return result;
}


//======================================================================
// sub_57F5F0
// entry 0057f5f0  size 106  status ok
//======================================================================

int __thiscall sub_57F5F0(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 116))(*this);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 116))(*(this + 1));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 116))(*(this + 2));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 116))(*(this + 3));
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 116))(*(this + 4));
}


//======================================================================
// sub_57F660
// entry 0057f660  size 106  status ok
//======================================================================

int __thiscall sub_57F660(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 112))(*this);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 112))(*(this + 1));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 112))(*(this + 2));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 112))(*(this + 3));
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4) + 112))(*(this + 4));
}


//======================================================================
// sub_57F6D0
// entry 0057f6d0  size 334  status ok
//======================================================================

int __thiscall sub_57F6D0(_DWORD **this, int a2)
{
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+14h] [ebp-4h]

  if ( a2 > 1000 )
    sub_5E9F20((char)"num <=1000", "..\\Casino\\kenodisplay.cpp", 458);
  v4 = a2 % 1000 / 100;
  v10 = a2 % 1000 % 100 / 10;
  v5 = a2 % 1000 % 100 % 10;
  v6 = a2 / 1000 - 1;
  if ( v6 < 0 )
    v6 = 9;
  (*(void (__thiscall **)(_DWORD, int))(**(this + 1) + 176))(*(this + 1), v6);
  v7 = v4 - 1;
  if ( v4 - 1 < 0 )
    v7 = 9;
  (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 176))(*(this + 2), v7);
  v8 = v10 - 1;
  if ( v10 - 1 < 0 )
    v8 = 9;
  (*(void (__thiscall **)(_DWORD, int))(**(this + 3) + 176))(*(this + 3), v8);
  v9 = v5 - 1;
  if ( v5 - 1 < 0 )
    v9 = 9;
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 4) + 176))(*(this + 4), v9);
}


//======================================================================
// sub_57F820
// entry 0057f820  size 6472  status ok
//======================================================================

_DWORD *__thiscall sub_57F820(_DWORD *this)
{
  int v1; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v3; // eax
  char v4; // al
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
  int v16; // [esp+4h] [ebp-10Ch]
  int v17; // [esp+8h] [ebp-108h]
  int v18; // [esp+Ch] [ebp-104h]
  int v19; // [esp+10h] [ebp-100h]
  int v20; // [esp+14h] [ebp-FCh]
  int v21; // [esp+18h] [ebp-F8h]
  int v22; // [esp+1Ch] [ebp-F4h]
  int v23; // [esp+20h] [ebp-F0h]
  int v24; // [esp+24h] [ebp-ECh]
  int v25; // [esp+28h] [ebp-E8h]
  int v26; // [esp+2Ch] [ebp-E4h]
  int v27; // [esp+30h] [ebp-E0h]
  int v28; // [esp+34h] [ebp-DCh]
  int v29; // [esp+38h] [ebp-D8h]
  char *Destination; // [esp+3Ch] [ebp-D4h]
  CImageDisplay *v33; // [esp+48h] [ebp-C8h]
  char *Str2; // [esp+4Ch] [ebp-C4h]
  CImageDisplay *v35; // [esp+50h] [ebp-C0h]
  CImageDisplay *v36; // [esp+54h] [ebp-BCh]
  void *v37; // [esp+70h] [ebp-A0h]
  void *v38; // [esp+78h] [ebp-98h]
  void *v39; // [esp+80h] [ebp-90h]
  void *v40; // [esp+88h] [ebp-88h]
  void *v41; // [esp+A0h] [ebp-70h]
  void *v42; // [esp+A8h] [ebp-68h]
  void *v43; // [esp+B0h] [ebp-60h]
  void *v44; // [esp+B8h] [ebp-58h]
  void *v45; // [esp+C0h] [ebp-50h]
  void *v46; // [esp+C8h] [ebp-48h]
  int v47; // [esp+D8h] [ebp-38h]
  int v48; // [esp+DCh] [ebp-34h]
  int j; // [esp+E0h] [ebp-30h]
  int jj; // [esp+E0h] [ebp-30h]
  int nn; // [esp+E0h] [ebp-30h]
  int i4; // [esp+E0h] [ebp-30h]
  int i1; // [esp+E4h] [ebp-2Ch]
  int i5; // [esp+E4h] [ebp-2Ch]
  int v55; // [esp+F4h] [ebp-1Ch]
  int v56; // [esp+F8h] [ebp-18h]
  int v57; // [esp+F8h] [ebp-18h]
  int v58; // [esp+FCh] [ebp-14h]
  int i; // [esp+100h] [ebp-10h]
  int k; // [esp+100h] [ebp-10h]
  int m; // [esp+100h] [ebp-10h]
  int n; // [esp+100h] [ebp-10h]
  int ii; // [esp+100h] [ebp-10h]
  int kk; // [esp+100h] [ebp-10h]
  int mm; // [esp+100h] [ebp-10h]
  int i2; // [esp+100h] [ebp-10h]
  int i3; // [esp+100h] [ebp-10h]
  int i6; // [esp+100h] [ebp-10h]

  sub_5EAAF0(this);
  *this = &KenoTicketHand::`vftable';
  *(this + 4126) = 0;
  *(this + 4127) = 0;
  for ( i = 0; i < 4; ++i )
  {
    strcpy((char *)this + 16 * i + 14776, &Source);
    *(this + i + 4122) = 0;
    *(this + i + 3710) = 0;
    *(this + i + 3714) = 0;
    *(this + i + 3718) = 0;
  }
  for ( j = 0; j < 4; ++j )
  {
    for ( k = 0; k < 100; ++k )
      *(this + 100 * j + k + 3722) = 0;
  }
  for ( m = 0;
        m < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++m )
  {
    v36 = (CImageDisplay *)sub_5DCB00(m);
    if ( CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 3 )
    {
      if ( (int)*(this + 4126) < 3 )
      {
        v1 = sub_5DCB00(m);
        *(this + *(this + 4126) + 4122) = (unsigned __int8)sub_5D5780(v1);
      }
      v35 = (CImageDisplay *)sub_5DCB00(m);
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v35)->rcSource.top;
      if ( strcmp((const char *)this + 16 * *(this + 4126) + 14776, Str2) )
      {
        Destination = (char *)(this + 4 * (*(this + 4126))++ + 3694);
        v33 = (CImageDisplay *)sub_5DCB00(m);
        DisplayFormat = CImageDisplay::GetDisplayFormat(v33);
        strcpy(Destination, (const char *)&DisplayFormat->rcSource.top);
      }
      v3 = sub_5DCB00(m);
      v4 = sub_5D5780(v3);
      sub_62FDE0("Gender:%d \n", v4);
    }
  }
  for ( n = 0; n < *(this + 4126); ++n )
    sub_5E2B90((char *)this + 16 * n + 14776, this + 900 * n + 94, -1);
  v55 = *(_DWORD *)(dword_7947E0 + 152);
  for ( ii = 0; ii < *(this + 4126); ++ii )
  {
    for ( jj = 0; jj < 100; ++jj )
    {
      if ( *(this + 900 * ii + 9 * jj + 101) && !*((_BYTE *)this + 3600 * ii + 36 * jj + 380) )
      {
        if ( (++*(this + ii + 3714),
              v48 = *(this + 900 * ii + 9 * jj + 101),
              v47 = *((char *)this + 3600 * ii + 36 * jj + 378),
              v55 >= v48)
          && v55 <= v48 + v47 - 1
          || v55 + 1000 >= v48 && v55 + 1000 <= v48 + v47 - 1 )
        {
          *(this + 100 * ii + (*(this + ii + 3718))++ + 3722) = jj;
        }
      }
    }
  }
  sub_581610(0);
  sub_5F5300(10);
  ATL::CAtlWinModule::~CAtlWinModule((ATL::CAtlWinModule *)this);
  sub_5EB570(this);
  v46 = operator new(0x1D0u);
  if ( v46 )
  {
    sub_5EC5A0(v46);
    v29 = v5;
  }
  else
  {
    v29 = 0;
  }
  *(this + 4128) = v29;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 4128) + 180))(*(this + 4128), &Source);
  sub_5ECD00(45, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4128) + 64))(*(this + 4128));
  sub_5ECC60(82);
  sub_5ECCB0(20);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4128) + 68))(*(this + 4128), 345, 260);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4128) + 108))(*(this + 4128), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4128) + 116))(*(this + 4128));
  v45 = operator new(0x1D0u);
  if ( v45 )
  {
    sub_5EC5A0(v45);
    v28 = v6;
  }
  else
  {
    v28 = 0;
  }
  *(this + 4129) = v28;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 4129) + 180))(*(this + 4129), &Source);
  sub_5ECD00(52, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4129) + 64))(*(this + 4129));
  sub_5ECC60(130);
  sub_5ECCB0(25);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4129) + 68))(*(this + 4129), 374, 378);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4129) + 108))(*(this + 4129), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4129) + 116))(*(this + 4129));
  v44 = operator new(0x1D0u);
  if ( v44 )
  {
    sub_5EC5A0(v44);
    v27 = v7;
  }
  else
  {
    v27 = 0;
  }
  *(this + 4130) = v27;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 4130) + 180))(*(this + 4130), &Source);
  sub_5ECD00(45, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4130) + 64))(*(this + 4130));
  sub_5ECC60(30);
  sub_5ECCB0(26);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4130) + 68))(*(this + 4130), 314, 266);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4130) + 108))(*(this + 4130), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4130) + 112))(*(this + 4130));
  v43 = operator new(0x1D0u);
  if ( v43 )
  {
    sub_5EC5A0(v43);
    v26 = v8;
  }
  else
  {
    v26 = 0;
  }
  *(this + 4131) = v26;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 4131) + 180))(*(this + 4131), &Source);
  sub_5ECD00(45, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4131) + 64))(*(this + 4131));
  sub_5ECC60(30);
  sub_5ECCB0(26);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4131) + 68))(*(this + 4131), 361, 284);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4131) + 108))(*(this + 4131), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4131) + 112))(*(this + 4131));
  v42 = operator new(0x1D0u);
  if ( v42 )
  {
    sub_5EC5A0(v42);
    v25 = v9;
  }
  else
  {
    v25 = 0;
  }
  *(this + 4132) = v25;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 4132) + 180))(*(this + 4132), &Source);
  sub_5ECD00(45, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4132) + 64))(*(this + 4132));
  sub_5ECC60(100);
  sub_5ECCB0(26);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4132) + 68))(*(this + 4132), 438, 260);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4132) + 108))(*(this + 4132), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4132) + 112))(*(this + 4132));
  v41 = operator new(0x1D0u);
  if ( v41 )
  {
    sub_5EC5A0(v41);
    v24 = v10;
  }
  else
  {
    v24 = 0;
  }
  *(this + 4133) = v24;
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + 4133) + 180))(*(this + 4133), &Source);
  sub_5ECD00(45, -1, word_75EE1C);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4133) + 64))(*(this + 4133));
  sub_5ECC60(100);
  sub_5ECCB0(26);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4133) + 68))(*(this + 4133), 438, 284);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4133) + 108))(*(this + 4133), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4133) + 112))(*(this + 4133));
  if ( operator new(0x1E0u) )
    v23 = sub_582610(this);
  else
    v23 = 0;
  *(this + 4296) = v23;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4296) + 64))(*(this + 4296));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4296) + 200))(*(this + 4296), 3203005);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4296) + 68))(*(this + 4296), 418, 257);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4296) + 108))(*(this + 4296), *(this + 8) + 50);
  CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + 4296), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4296) + 116))(*(this + 4296));
  if ( operator new(0x1E0u) )
    v22 = sub_582610(this);
  else
    v22 = 0;
  *(this + 4297) = v22;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4297) + 64))(*(this + 4297));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4297) + 200))(*(this + 4297), 3203006);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4297) + 68))(*(this + 4297), 418, 275);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4297) + 108))(*(this + 4297), *(this + 8) + 50);
  CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + 4297), (struct CPaneDivider *)1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4297) + 116))(*(this + 4297));
  sub_602420(*(this + 4297));
  v40 = operator new(0x178u);
  if ( v40 )
  {
    sub_5EAAF0(v40);
    v21 = v11;
  }
  else
  {
    v21 = 0;
  }
  *(this + 4294) = v21;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4294) + 64))(*(this + 4294));
  sub_5EAF00(3203055);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4294) + 108))(*(this + 4294), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4294) + 112))(*(this + 4294));
  v39 = operator new(0x178u);
  if ( v39 )
  {
    sub_5EAAF0(v39);
    v20 = v12;
  }
  else
  {
    v20 = 0;
  }
  *(this + 4295) = v20;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4295) + 64))(*(this + 4295));
  sub_5EAF00(3203050);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4295) + 68))(*(this + 4295), 319, 236);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4295) + 108))(*(this + 4295), *(this + 8) + 50);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4295) + 112))(*(this + 4295));
  for ( kk = 0; kk < 80; ++kk )
  {
    v38 = operator new(0x1D0u);
    if ( v38 )
    {
      sub_5EC5A0(v38);
      v19 = v13;
    }
    else
    {
      v19 = 0;
    }
    *(this + kk + 4134) = v19;
    (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*(this + kk + 4134) + 180))(*(this + kk + 4134), "X");
    sub_5ECD00(45, -1, word_75EE1C);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + kk + 4134) + 64))(*(this + kk + 4134));
    sub_5ECC60(25);
    sub_5ECCB0(26);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + kk + 4134) + 108))(*(this + kk + 4134), *(this + 8) + 50);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + kk + 4134) + 112))(*(this + kk + 4134));
  }
  v56 = 301;
  for ( mm = 0; mm < 2; ++mm )
  {
    for ( nn = 0; nn < 4; ++nn )
    {
      for ( i1 = 0; i1 < 10; ++i1 )
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 40 * mm + 10 * nn + i1 + 4134) + 68))(
          *(this + 40 * mm + 10 * nn + i1 + 4134),
          21 * i1 + 308,
          v56 + 19 * nn);
    }
    v56 = 389;
  }
  for ( i2 = 0; i2 < 80; ++i2 )
  {
    v37 = operator new(0x178u);
    if ( v37 )
    {
      sub_5EAAF0(v37);
      v18 = v14;
    }
    else
    {
      v18 = 0;
    }
    *(this + i2 + 4214) = v18;
    sub_5EAF00(3203054);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i2 + 4214) + 64))(*(this + i2 + 4214));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i2 + 4214) + 108))(*(this + i2 + 4214), *(this + 8) + 50);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i2 + 4214) + 112))(*(this + i2 + 4214));
  }
  v57 = 305;
  for ( i3 = 0; i3 < 2; ++i3 )
  {
    for ( i4 = 0; i4 < 4; ++i4 )
    {
      for ( i5 = 0; i5 < 10; ++i5 )
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 40 * i3 + 10 * i4 + i5 + 4214) + 68))(
          *(this + 40 * i3 + 10 * i4 + i5 + 4214),
          21 * i5 + 306,
          v57 + 19 * i4);
    }
    v57 = 393;
  }
  if ( operator new(0x1E0u) )
    v17 = sub_582610(this);
  else
    v17 = 0;
  *(this + 4298) = v17;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4298) + 64))(*(this + 4298));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4298) + 200))(*(this + 4298), 3203051);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4298) + 68))(*(this + 4298), 285, 241);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4298) + 108))(*(this + 4298), *(this + 8) + 50);
  CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + 4298), (struct CPaneDivider *)2);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4298) + 116))(*(this + 4298));
  if ( operator new(0x1E0u) )
    v16 = sub_582610(this);
  else
    v16 = 0;
  *(this + 4299) = v16;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4299) + 64))(*(this + 4299));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4299) + 200))(*(this + 4299), 3203052);
  (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 4299) + 68))(*(this + 4299), 527, 241);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4299) + 108))(*(this + 4299), *(this + 8) + 50);
  CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + 4299), (struct CPaneDivider *)3);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 4299) + 116))(*(this + 4299));
  *(this + 4126) = 0;
  v58 = -1;
  for ( i6 = 0; i6 < 4; ++i6 )
  {
    if ( *(this + i6 + 3718) )
    {
      ++*(this + 4126);
      if ( v58 == -1 )
        v58 = i6;
    }
  }
  if ( *(this + 4126) )
  {
    sub_581610(v58);
    sub_5822E0(this);
    sub_581B70(this);
  }
  else
  {
    sub_5815A0(this);
    sub_5DC610();
  }
  return this;
}


//======================================================================
// sub_581170
// entry 00581170  size 1045  status ok
//======================================================================

void __thiscall sub_581170(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+8Ch] [ebp-10h]
  int j; // [esp+8Ch] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&KenoTicketHand::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 4296) )
    {
      (***(this + i + 4296))(*(this + i + 4296), 1);
      *(this + i + 4296) = 0;
    }
  }
  if ( *(this + 4128) )
  {
    (***(this + 4128))(*(this + 4128), 1);
    *(this + 4128) = 0;
  }
  if ( *(this + 4129) )
  {
    (***(this + 4129))(*(this + 4129), 1);
    *(this + 4129) = 0;
  }
  if ( *(this + 4130) )
  {
    (***(this + 4130))(*(this + 4130), 1);
    *(this + 4130) = 0;
  }
  if ( *(this + 4131) )
  {
    (***(this + 4131))(*(this + 4131), 1);
    *(this + 4131) = 0;
  }
  if ( *(this + 4132) )
  {
    (***(this + 4132))(*(this + 4132), 1);
    *(this + 4132) = 0;
  }
  if ( *(this + 4133) )
  {
    (***(this + 4133))(*(this + 4133), 1);
    *(this + 4133) = 0;
  }
  if ( *(this + 4294) )
  {
    (***(this + 4294))(*(this + 4294), 1);
    *(this + 4294) = 0;
  }
  if ( *(this + 4295) )
  {
    (***(this + 4295))(*(this + 4295), 1);
    *(this + 4295) = 0;
  }
  for ( j = 0; j < 80; ++j )
  {
    if ( *(this + j + 4134) )
    {
      (***(this + j + 4134))(*(this + j + 4134), 1);
      *(this + j + 4134) = 0;
    }
    if ( *(this + j + 4214) )
    {
      (***(this + j + 4214))(*(this + j + 4214), 1);
      *(this + j + 4214) = 0;
    }
  }
  sub_5EAC00(this);
}


//======================================================================
// sub_5815A0
// entry 005815a0  size 108  status ok
//======================================================================

int __thiscall sub_5815A0(void *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  sub_5EB5A0(this, this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 16512) + 112))(*(_DWORD *)(v2 + 16512));
  sub_582410(v2);
  result = sub_582540(v2);
  for ( i = 0; i < 4; ++i )
    result = sub_582750(*(_DWORD *)(v2 + 4 * i + 17184));
  return result;
}


//======================================================================
// sub_581610
// entry 00581610  size 94  status ok
//======================================================================

_DWORD *__thiscall sub_581610(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax

  if ( a2 < 4 )
  {
    if ( *(this + a2 + 4122) )
      sub_5EAF00(3203048);
    else
      sub_5EAF00(3203049);
    (*(void (__thiscall **)(_DWORD *))(*this + 116))(this);
    *(this + 4127) = a2;
    return this;
  }
  return result;
}


//======================================================================
// sub_581670
// entry 00581670  size 1275  status ok
//======================================================================

int __thiscall sub_581670(char *this)
{
  int v1; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v3; // eax
  char v4; // al
  char *Destination; // [esp+0h] [ebp-3Ch]
  CImageDisplay *v9; // [esp+Ch] [ebp-30h]
  char *Str2; // [esp+10h] [ebp-2Ch]
  CImageDisplay *v11; // [esp+14h] [ebp-28h]
  CImageDisplay *v12; // [esp+18h] [ebp-24h]
  int v13; // [esp+24h] [ebp-18h]
  int v14; // [esp+28h] [ebp-14h]
  int i; // [esp+2Ch] [ebp-10h]
  int j; // [esp+2Ch] [ebp-10h]
  int v17; // [esp+30h] [ebp-Ch]
  unsigned int v18; // [esp+34h] [ebp-8h]
  char v19[4]; // [esp+38h] [ebp-4h]
  char v20[4]; // [esp+38h] [ebp-4h]
  char v21[4]; // [esp+38h] [ebp-4h]
  char v22[4]; // [esp+38h] [ebp-4h]
  char v23[4]; // [esp+38h] [ebp-4h]
  char v24[4]; // [esp+38h] [ebp-4h]

  *((_DWORD *)this + 4126) = 0;
  *((_DWORD *)this + 4127) = 0;
  *(_DWORD *)v19 = 0;
  while ( *(int *)v19 < 4 )
  {
    strcpy(this + 16 * *(_DWORD *)v19 + 14776, &Source);
    *((_DWORD *)this + *(_DWORD *)v19 + 4122) = 0;
    *((_DWORD *)this + *(_DWORD *)v19 + 3710) = 0;
    *((_DWORD *)this + *(_DWORD *)v19 + 3714) = 0;
    *((_DWORD *)this + (*(_DWORD *)v19)++ + 3718) = 0;
  }
  for ( i = 0; i < 4; ++i )
  {
    *(_DWORD *)v20 = 0;
    while ( *(int *)v20 < 100 )
      *((_DWORD *)this + 100 * i + (*(_DWORD *)v20)++ + 3722) = 0;
  }
  *(_DWORD *)v21 = 0;
  while ( *(int *)v21 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84) )
  {
    v12 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)v21);
    if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3 )
    {
      if ( *((int *)this + 4126) < 3 )
      {
        v1 = sub_5DCB00(*(_DWORD *)v21);
        *((_DWORD *)this + *((_DWORD *)this + 4126) + 4122) = (unsigned __int8)sub_5D5780(v1) == 0;
      }
      v11 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)v21);
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v11)->rcSource.top;
      if ( strcmp(this + 16 * *((_DWORD *)this + 4126) + 14776, Str2) )
      {
        Destination = this + 16 * (*((_DWORD *)this + 4126))++ + 14776;
        v9 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)v21);
        DisplayFormat = CImageDisplay::GetDisplayFormat(v9);
        strcpy(Destination, (const char *)&DisplayFormat->rcSource.top);
      }
      v3 = sub_5DCB00(*(_DWORD *)v21);
      v4 = sub_5D5780(v3);
      sub_62FDE0("Gender:%d \n", v4);
    }
    ++*(_DWORD *)v21;
  }
  *(_DWORD *)v22 = 0;
  while ( *(int *)v22 < *((_DWORD *)this + 4126) )
  {
    sub_5E2B90(this + 16 * *(_DWORD *)v22 + 14776, this + 3600 * *(_DWORD *)v22 + 376, -1);
    ++*(_DWORD *)v22;
  }
  v17 = *(_DWORD *)(dword_7947E0 + 152);
  *(_DWORD *)v23 = 0;
  while ( *(int *)v23 < *((_DWORD *)this + 4126) )
  {
    for ( j = 0; j < 100; ++j )
    {
      if ( *((_DWORD *)this + 900 * *(_DWORD *)v23 + 9 * j + 101) && !*(this + 3600 * *(_DWORD *)v23 + 36 * j + 380) )
      {
        if ( (++*((_DWORD *)this + *(_DWORD *)v23 + 3714),
              v14 = *((_DWORD *)this + 900 * *(_DWORD *)v23 + 9 * j + 101),
              v13 = *(this + 3600 * *(_DWORD *)v23 + 36 * j + 378),
              v17 >= v14)
          && v17 <= v14 + v13 - 1
          || v17 + 1000 >= v14 && v17 + 1000 <= v14 + v13 - 1 )
        {
          *((_DWORD *)this + 100 * *(_DWORD *)v23 + (*((_DWORD *)this + *(_DWORD *)v23 + 3718))++ + 3722) = j;
        }
      }
    }
    sub_62FDE0("Player %d has %d valid tickets for this game.\n", v23[0]);
    ++*(_DWORD *)v23;
  }
  *((_DWORD *)this + 4126) = 0;
  v18 = -1;
  *(_DWORD *)v24 = 0;
  while ( *(int *)v24 < 4 )
  {
    if ( *((_DWORD *)this + *(_DWORD *)v24 + 3718) )
    {
      ++*((_DWORD *)this + 4126);
      if ( v18 == -1 )
        v18 = *(_DWORD *)v24;
    }
    ++*(_DWORD *)v24;
  }
  if ( !*((_DWORD *)this + 4126) )
    return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 112))(this);
  sub_581610(this, v18);
  sub_581B70(this);
  return sub_5822E0(this);
}


//======================================================================
// sub_581B70
// entry 00581b70  size 1514  status ok
//======================================================================

int __thiscall sub_581B70(int this)
{
  int result; // eax
  int v3; // [esp+10h] [ebp-84h]
  char Buffer[68]; // [esp+14h] [ebp-80h] BYREF
  int v5; // [esp+58h] [ebp-3Ch]
  int v6; // [esp+5Ch] [ebp-38h]
  int i; // [esp+60h] [ebp-34h]
  int v8; // [esp+64h] [ebp-30h]
  int v9; // [esp+68h] [ebp-2Ch]
  _DWORD v10[9]; // [esp+6Ch] [ebp-28h] BYREF

  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 16512) + 180))(
    *(_DWORD *)(this + 16512),
    this + 16 * *(_DWORD *)(this + 16508) + 14776);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16512) + 116))(*(_DWORD *)(this + 16512));
  sub_582410(this);
  result = this;
  if ( *(_DWORD *)(this + 4 * *(_DWORD *)(this + 16508) + 14872) )
  {
    v9 = *(_DWORD *)(this + 4 * *(_DWORD *)(this + 16508) + 14840);
    qmemcpy(
      v10,
      (const void *)(36 * *(_DWORD *)(this + 400 * *(_DWORD *)(this + 16508) + 14888 + 4 * v9)
                   + this
                   + 3600 * *(_DWORD *)(this + 16508)
                   + 376),
      sizeof(v10));
    v6 = v10[7];
    v5 = SBYTE2(v10[0]);
    v8 = v10[7] + SBYTE2(v10[0]) - 1;
    if ( v8 > 1000 )
      v8 -= 1000;
    if ( v5 <= 1 )
      sprintf(Buffer, "%04d", v6);
    else
      sprintf(Buffer, "%04d-%04d", v6, v8);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 16516) + 180))(*(_DWORD *)(this + 16516), Buffer);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16516) + 116))(*(_DWORD *)(this + 16516));
    if ( HIBYTE(v10[0]) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 17176) + 116))(*(_DWORD *)(this + 17176));
    if ( SLOBYTE(v10[0]) <= 3 )
    {
      v3 = 0;
      for ( i = 0; i < 20; ++i )
      {
        if ( *((_BYTE *)&v10[1] + i + 1) )
          ++v3;
      }
      sprintf(Buffer, "%d", v3);
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 16520) + 180))(*(_DWORD *)(this + 16520), Buffer);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16520) + 116))(*(_DWORD *)(this + 16520));
    }
    sprintf(Buffer, "%d", v5);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 16524) + 180))(*(_DWORD *)(this + 16524), Buffer);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16524) + 116))(*(_DWORD *)(this + 16524));
    sprintf(Buffer, off_6BB590, SBYTE1(v10[0]));
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 16528) + 180))(*(_DWORD *)(this + 16528), Buffer);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16528) + 116))(*(_DWORD *)(this + 16528));
    sprintf(Buffer, off_6BB590, v5 * SBYTE1(v10[0]));
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 16532) + 180))(*(_DWORD *)(this + 16532), Buffer);
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16532) + 116))(*(_DWORD *)(this + 16532));
    switch ( LOBYTE(v10[0]) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
        for ( i = 0; i < 20; ++i )
        {
          if ( *((_BYTE *)&v10[1] + i + 1) )
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *((char *)&v10[1] + i + 1) + 16532) + 116))(*(_DWORD *)(this + 4 * *((char *)&v10[1] + i + 1) + 16532));
          result = i + 1;
        }
        break;
      case 4:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 17180) + 176))(*(_DWORD *)(this + 17180), 2);
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 17180) + 116))(*(_DWORD *)(this + 17180));
        for ( i = 0; i < 10; ++i )
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 16536) + 116))(*(_DWORD *)(this + 4 * i + 16536));
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 16816) + 116))(*(_DWORD *)(this + 4 * i + 16816));
        }
        for ( i = 0; i < 8; ++i )
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40 * i + 16536) + 116))(*(_DWORD *)(this + 40 * i + 16536));
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40 * i + 16572) + 116))(*(_DWORD *)(this + 40 * i + 16572));
        }
        break;
      case 5:
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 17180) + 176))(*(_DWORD *)(this + 17180), 0);
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 17180) + 116))(*(_DWORD *)(this + 17180));
        break;
      case 6:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 17180) + 176))(*(_DWORD *)(this + 17180), 1);
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 17180) + 116))(*(_DWORD *)(this + 17180));
        break;
      default:
        return result;
    }
  }
  return result;
}


//======================================================================
// sub_582180
// entry 00582180  size 54  status ok
//======================================================================

int __thiscall sub_582180(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( (int)*(this + 4127) > 0 )
  {
    sub_581610(this, *(this + 4127) - 1);
    return sub_581B70((int)this);
  }
  return result;
}


//======================================================================
// sub_5821C0
// entry 005821c0  size 65  status ok
//======================================================================

int __thiscall sub_5821C0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 4127) + 1 < *(this + 4126) )
  {
    sub_581610(this, *(this + 4127) + 1);
    return sub_581B70((int)this);
  }
  return result;
}


//======================================================================
// sub_582210
// entry 00582210  size 84  status ok
//======================================================================

int __thiscall sub_582210(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( (int)*(this + *(this + 4127) + 3710) > 0 )
  {
    --*(this + *(this + 4127) + 3710);
    return sub_581B70((int)this);
  }
  return result;
}


//======================================================================
// sub_582270
// entry 00582270  size 105  status ok
//======================================================================

int __thiscall sub_582270(_DWORD *this)
{
  int result; // eax

  result = *(this + *(this + 4127) + 3710) + 1;
  if ( result < *(this + *(this + 4127) + 3718) )
  {
    ++*(this + *(this + 4127) + 3710);
    return sub_581B70((int)this);
  }
  return result;
}


//======================================================================
// sub_5822E0
// entry 005822e0  size 299  status ok
//======================================================================

int __thiscall sub_5822E0(_DWORD *this)
{
  if ( *(this + 4127) && *(this + 4126) != 1 )
    sub_582720(*(this + 4296));
  else
    sub_582750(*(this + 4296));
  if ( *(this + 4127) >= *(this + 4126) - 1 || *(this + 4126) == 1 )
    sub_582750(*(this + 4297));
  else
    sub_582720(*(this + 4297));
  if ( *(this + *(this + 4127) + 3710) && (int)*(this + *(this + 4127) + 3718) > 1 )
    sub_582720(*(this + 4298));
  else
    sub_582750(*(this + 4298));
  if ( *(this + *(this + 4127) + 3710) < *(this + *(this + 4127) + 3718) - 1 && (int)*(this + *(this + 4127) + 3718) > 1 )
    return sub_582720(*(this + 4299));
  else
    return sub_582750(*(this + 4299));
}


//======================================================================
// sub_582410
// entry 00582410  size 251  status ok
//======================================================================

int __thiscall sub_582410(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(this + 4129) + 112))(*(this + 4129));
  (*(void (__thiscall **)(_DWORD))(**(this + 4294) + 112))(*(this + 4294));
  (*(void (__thiscall **)(_DWORD))(**(this + 4130) + 112))(*(this + 4130));
  (*(void (__thiscall **)(_DWORD))(**(this + 4131) + 112))(*(this + 4131));
  (*(void (__thiscall **)(_DWORD))(**(this + 4132) + 112))(*(this + 4132));
  (*(void (__thiscall **)(_DWORD))(**(this + 4133) + 112))(*(this + 4133));
  result = (*(int (__thiscall **)(_DWORD))(**(this + 4295) + 112))(*(this + 4295));
  for ( i = 0; i < 80; ++i )
    result = (*(int (__thiscall **)(_DWORD))(**(this + i + 4134) + 112))(*(this + i + 4134));
  return result;
}


//======================================================================
// sub_582510
// entry 00582510  size 43  status ok
//======================================================================

_DWORD *__thiscall sub_582510(_DWORD *this, char a2)
{
  _DWORD *result; // eax

  result = this;
  if ( *(this + 4295) )
    return (_DWORD *)sub_5EB5D0(a2);
  return result;
}


//======================================================================
// sub_582540
// entry 00582540  size 88  status ok
//======================================================================

int __thiscall sub_582540(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 80; ++i )
  {
    if ( *(this + i + 4214) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 4214) + 112))(*(this + i + 4214));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5825A0
// entry 005825a0  size 102  status ok
//======================================================================

int __thiscall sub_5825A0(_BYTE *this, int a2)
{
  int result; // eax

  result = (int)this;
  if ( !*(this + 36) )
  {
    if ( a2 < 1 || a2 > 80 )
      return sub_5E9F20((char)"0", "..\\Casino\\kenodisplay.cpp", 1182);
    else
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + a2 + 4213) + 116))(*((_DWORD *)this + a2 + 4213));
  }
  return result;
}


//======================================================================
// sub_582610
// entry 00582610  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_582610(void *this, int a2)
{
  _DWORD *v3; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v3 = &KenoTicketHandScrollButton::`vftable';
  v3[119] = a2;
  return v3;
}


