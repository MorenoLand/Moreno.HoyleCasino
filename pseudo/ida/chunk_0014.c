//======================================================================
// sub_5249F0
// entry 005249f0  size 558  status ok
//======================================================================

int __thiscall sub_5249F0(_BYTE *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v9; // [esp+Ch] [ebp-18h]
  CImageDisplay *v10; // [esp+18h] [ebp-Ch]

  v10 = (CImageDisplay *)sub_528000(dword_793374);
  if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_528090(a2) )
      return sub_5DB7D0(-180, 170);
    v2 = sub_5DCB00(a2);
    if ( (unsigned __int8)sub_5D5840(v2) )
    {
      return sub_5DB7D0(-180, 170);
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_793370) )
    {
      *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
    else
    {
      v4 = sub_5DCB00(a2);
      return sub_5DBB70(v4);
    }
  }
  else if ( *(this + 5) )
  {
    *(this + 5) = 0;
    v6 = sub_5DCB00(a2);
    if ( (unsigned __int8)sub_5D5840(v6) )
    {
      sub_520EF0((void *)dword_793380, a2);
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
      v9 = dword_793374;
      *(_DWORD *)(dword_793374 + 3504) = 0;
      *(_DWORD *)(v9 + 3508) = a2;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_793370 + 4) + 8))(
               *(_DWORD *)(dword_793370 + 4),
               1,
               0);
    }
    else
    {
      if ( (unsigned __int8)sub_5DA7B0(dword_793370) )
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
      else
        sub_5D9570(a2);
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
               *(_DWORD *)(dword_162EE80 + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 5) = 1;
    v5 = sub_637810(2);
    return sub_5DA360(v5);
  }
}


//======================================================================
// sub_524C20
// entry 00524c20  size 658  status ok
//======================================================================

int __stdcall sub_524C20(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax
  __int64 v6; // [esp-8h] [ebp-4Ch]
  __int64 v7; // [esp-8h] [ebp-4Ch]
  _DWORD *v8; // [esp+0h] [ebp-44h]
  bool v9; // [esp+8h] [ebp-3Ch]
  int v10; // [esp+18h] [ebp-2Ch]
  int v11; // [esp+20h] [ebp-24h]
  int v12; // [esp+34h] [ebp-10h]
  int v13; // [esp+38h] [ebp-Ch]
  bool v14; // [esp+3Fh] [ebp-5h]
  int i; // [esp+40h] [ebp-4h]

  v11 = sub_5DCB00(a1);
  v12 = *(char *)(sub_5D52E0(v11) + 42);
  v14 = 0;
  v6 = sub_64C8A0(0, 0);
  sub_5DCB00(a1);
  sub_5D6050(v6, HIDWORD(v6));
  for ( i = 160; i > -1; --i )
  {
    if ( (unsigned __int8)sub_5CB7D0(a1, 0) )
    {
      v10 = sub_5DCB00(a1);
      v13 = *(char *)(sub_5D52E0(v10) + 42);
      v9 = v12 != v13 && !v13;
      v14 = v9;
      if ( v9 )
        break;
      if ( (unsigned __int8)sub_528C20(i) )
      {
        sub_5291E0(a1, i, 1);
        sub_523070(a1, i);
      }
      else
      {
        sub_5291E0(a1, i, 0);
        sub_522F00((_DWORD *)dword_79337C, a1, i);
      }
    }
  }
  if ( v14 )
  {
    v1 = sub_5DCB00(a1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 4))(v1, -1);
    v7 = sub_64C8A0(0, 0);
    sub_5DCB00(a1);
    sub_5D6050(v7, HIDWORD(v7));
  }
  v2 = sub_5DCB00(a1);
  if ( (unsigned __int8)sub_5D5920(v2) )
  {
    if ( *(int *)(sub_5DCB00(a1) + 1192) < 0 )
      *(_DWORD *)(sub_5DCB00(a1) + 1192) = 0;
    v3 = sub_5DCB00(a1);
    sub_5D7540(v3);
  }
  v4 = sub_5DCB00(a1);
  if ( (unsigned __int8)sub_5D58D0(v4) )
  {
    if ( *(int *)(sub_5DCB00(a1) + 1192) > 0 )
      *(_DWORD *)(sub_5DCB00(a1) + 1192) = 0;
    v8 = (_DWORD *)(sub_5DCB00(a1) + 1192);
    --*v8;
  }
  result = sub_5DCB00(a1);
  *(_BYTE *)(result + 1186) = 1;
  return result;
}


//======================================================================
// sub_524EC0
// entry 00524ec0  size 3382  status ok
//======================================================================

int sub_524EC0()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-180h]
  char v7; // [esp+4h] [ebp-17Ch]
  bool v8; // [esp+8h] [ebp-178h]
  int v9; // [esp+Ch] [ebp-174h]
  bool v12; // [esp+18h] [ebp-168h]
  bool v13; // [esp+1Ch] [ebp-164h]
  bool v14; // [esp+20h] [ebp-160h]
  bool v15; // [esp+24h] [ebp-15Ch]
  int v16; // [esp+28h] [ebp-158h]
  bool v18; // [esp+30h] [ebp-150h]
  bool v19; // [esp+34h] [ebp-14Ch]
  bool v20; // [esp+38h] [ebp-148h]
  int v21; // [esp+3Ch] [ebp-144h]
  bool v23; // [esp+44h] [ebp-13Ch]
  bool v24; // [esp+48h] [ebp-138h]
  bool v25; // [esp+4Ch] [ebp-134h]
  CImageDisplay *v26; // [esp+58h] [ebp-128h]
  int v27; // [esp+64h] [ebp-11Ch]
  int v28; // [esp+68h] [ebp-118h]
  CImageDisplay *v29; // [esp+6Ch] [ebp-114h]
  CImageDisplay *v30; // [esp+78h] [ebp-108h]
  CImageDisplay *v31; // [esp+84h] [ebp-FCh]
  CImageDisplay *v32; // [esp+90h] [ebp-F0h]
  CImageDisplay *v33; // [esp+9Ch] [ebp-E4h]
  CImageDisplay *v34; // [esp+A8h] [ebp-D8h]
  CImageDisplay *v35; // [esp+B4h] [ebp-CCh]
  CImageDisplay *v36; // [esp+C0h] [ebp-C0h]
  CImageDisplay *v37; // [esp+CCh] [ebp-B4h]
  CImageDisplay *v38; // [esp+D8h] [ebp-A8h]
  CImageDisplay *v39; // [esp+E4h] [ebp-9Ch]
  CImageDisplay *v40; // [esp+F0h] [ebp-90h]
  CImageDisplay *v41; // [esp+FCh] [ebp-84h]
  CImageDisplay *v42; // [esp+108h] [ebp-78h]
  CImageDisplay *v43; // [esp+114h] [ebp-6Ch]
  int v44; // [esp+124h] [ebp-5Ch]
  int v45; // [esp+12Ch] [ebp-54h]
  int v46; // [esp+130h] [ebp-50h]
  int v47; // [esp+134h] [ebp-4Ch]
  _DWORD v48[4]; // [esp+138h] [ebp-48h] BYREF
  double v49; // [esp+148h] [ebp-38h]
  double v50; // [esp+150h] [ebp-30h]
  int v51; // [esp+158h] [ebp-28h]
  int v52; // [esp+15Ch] [ebp-24h]
  double v53; // [esp+160h] [ebp-20h]
  int v54; // [esp+16Ch] [ebp-14h]
  double v55; // [esp+170h] [ebp-10h]
  int v56; // [esp+178h] [ebp-8h]
  int v57; // [esp+17Ch] [ebp-4h]

  v51 = -1;
  v52 = -1;
  v44 = -1;
  v53 = 0.0;
  v55 = 0.5;
  v57 = *(_DWORD *)(dword_793374 + 3384);
  v56 = -1;
  v45 = 10 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  v54 = 5 * (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  v47 = *(_DWORD *)(dword_793374 + 3508);
  switch ( *(_DWORD *)(dword_793374 + 3504) )
  {
    case 0:
      v52 = sub_525C10(v47);
      if ( !(unsigned __int8)sub_5DA7B0(dword_793370) || (int)sub_62FBF0(10) <= 4 )
        goto LABEL_137;
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_793370 + 712))(dword_793370, v57) )
      {
        v0 = sub_5DCB00(v57);
        if ( (unsigned __int8)sub_5D5920(v0) )
        {
          v55 = 0.75;
          v43 = (CImageDisplay *)sub_5DCB00(v57);
          v25 = CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 3;
          v52 = v25 ? 1035 : 1010;
          goto LABEL_118;
        }
      }
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_793370 + 716))(dword_793370, v57)
        && (v1 = sub_5DCB00(v57), (unsigned __int8)sub_5D58D0(v1)) )
      {
        v55 = 0.75;
        v42 = (CImageDisplay *)sub_5DCB00(v57);
        v24 = CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 2
           || CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 3;
        v52 = v24 ? 1036 : 1011;
      }
      else
      {
LABEL_137:
        if ( (unsigned __int8)sub_528240(v57) )
        {
          v41 = (CImageDisplay *)sub_5DCB00(v57);
          v23 = CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 3;
          v52 = v23 ? 1040 : 1015;
        }
      }
      goto LABEL_118;
    case 1:
      v46 = sub_528660(dword_793374);
      v56 = sub_528770(dword_793374);
      if ( v46 == -1 || *(_DWORD *)(sub_5DCB00(v46) + 1228) <= v54 )
      {
        if ( v56 == -1 || *(_DWORD *)(sub_5DCB00(v56) + 1228) >= -v54 )
        {
          if ( v46 == -1 || *(int *)(sub_5DCB00(v46) + 1192) <= 3 )
          {
            if ( v56 != -1 && *(int *)(sub_5DCB00(v56) + 1192) < -3 )
            {
              v31 = (CImageDisplay *)sub_5DCB00(v56);
              if ( CImageDisplay::GetDisplayFormat(v31)->rcSource.left != 2
                && CImageDisplay::GetDisplayFormat(v31)->rcSource.left != 3 )
              {
                v52 = 1023;
                v44 = 1009;
                v53 = 0.3;
                v55 = 0.75;
              }
            }
          }
          else
          {
            v32 = (CImageDisplay *)sub_5DCB00(v46);
            v12 = CImageDisplay::GetDisplayFormat(v32)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v32)->rcSource.left == 3;
            v52 = v12 ? 1044 : 1024;
            v55 = 0.75;
          }
        }
        else
        {
          if ( *(_DWORD *)(sub_5DCB00(v56) + 1228) < -v45 )
            v55 = 1.0;
          if ( 1.0 == v55 )
          {
            v36 = (CImageDisplay *)sub_5DCB00(v56);
            if ( CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 3 )
            {
              v16 = -1;
            }
            else
            {
              v16 = v56;
            }
            v47 = v16;
            v35 = (CImageDisplay *)sub_5DCB00(v56);
            v15 = CImageDisplay::GetDisplayFormat(v35)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v35)->rcSource.left == 3;
            v52 = v15 ? 1033 : 1025;
            v34 = (CImageDisplay *)sub_5DCB00(v56);
            v14 = CImageDisplay::GetDisplayFormat(v34)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v34)->rcSource.left == 3;
            v44 = v14 ? 1039 : 1014;
            v53 = 0.2;
          }
          else
          {
            v33 = (CImageDisplay *)sub_5DCB00(v56);
            v13 = CImageDisplay::GetDisplayFormat(v33)->rcSource.left == 2
               || CImageDisplay::GetDisplayFormat(v33)->rcSource.left == 3;
            v52 = v13 ? 1000 : 1026;
            v55 = 0.75;
          }
        }
      }
      else
      {
        if ( *(_DWORD *)(sub_5DCB00(v46) + 1228) > v45 )
          v55 = 1.0;
        if ( 1.0 == v55 )
        {
          v40 = (CImageDisplay *)sub_5DCB00(v46);
          if ( CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 3 )
          {
            v21 = -1;
          }
          else
          {
            v21 = v46;
          }
          v47 = v21;
          v39 = (CImageDisplay *)sub_5DCB00(v46);
          v20 = CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 3;
          v52 = v20 ? 1034 : 1027;
          v38 = (CImageDisplay *)sub_5DCB00(v46);
          v19 = CImageDisplay::GetDisplayFormat(v38)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v38)->rcSource.left == 3;
          v44 = v19 ? 1037 : 1012;
          v53 = 0.2;
        }
        else
        {
          v37 = (CImageDisplay *)sub_5DCB00(v46);
          v18 = CImageDisplay::GetDisplayFormat(v37)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v37)->rcSource.left == 3;
          v52 = v18 ? 1008 : 1028;
          v55 = 0.75;
        }
      }
      goto LABEL_118;
    case 2:
      if ( (unsigned __int8)sub_5DB190(dword_793370) && sub_5DAC90(dword_793370) != -1 )
      {
        v2 = sub_5DAC90(dword_793370);
        v30 = (CImageDisplay *)sub_5DCB00(v2);
        if ( CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v30)->rcSource.left == 3 )
        {
          v9 = -1;
        }
        else
        {
          v9 = sub_5DAC90(dword_793370);
        }
        v47 = v9;
        v3 = sub_5DAC90(dword_793370);
        v29 = (CImageDisplay *)sub_5DCB00(v3);
        v8 = CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v29)->rcSource.left == 3;
        v52 = v8 ? 1042 : 1021;
        v55 = 1.0;
      }
      goto LABEL_118;
    case 3:
      v51 = 50100;
      goto LABEL_118;
    case 4:
      v28 = dword_793374;
      *(_DWORD *)(dword_793374 + 3504) = -1;
      *(_DWORD *)(v28 + 3508) = -1;
      if ( (unsigned __int8)sub_637630(dword_162EE84) && !byte_795F94 )
        sub_5CD7C0(50125, 0, 0);
      return sub_523590(*(_DWORD **)(dword_79337C + 8));
    case 5:
      *(_BYTE *)(*(_DWORD *)(dword_79337C + 8) + 400) = 1;
      if ( sub_528BD0(dword_793374) )
      {
        if ( sub_528BD0(dword_793374) == 37 )
          v51 = 50073;
        else
          v51 = 2 * sub_528BD0(dword_793374) + 49998;
      }
      else
      {
        v51 = 50072;
      }
      goto LABEL_118;
    default:
LABEL_118:
      v27 = dword_793374;
      *(_DWORD *)(dword_793374 + 3504) = -1;
      *(_DWORD *)(v27 + 3508) = -1;
      if ( v47 == 4 )
      {
        if ( v51 == -1 )
        {
          *(_BYTE *)(*(_DWORD *)(dword_79337C + 8) + 400) = 0;
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                   *(_DWORD *)(dword_162EE80 + 4),
                   1,
                   0);
        }
        else
        {
          return sub_5CD7C0(v51, *(_DWORD *)(dword_162EE80 + 4), 0);
        }
      }
      else
      {
        if ( v52 == -1 || !sub_636730(dword_162EE84) )
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                   *(_DWORD *)(dword_162EE80 + 4),
                   1,
                   0);
        if ( v47 > -1
          && ((v26 = (CImageDisplay *)sub_5DCB00(v47), CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 2)
           || CImageDisplay::GetDisplayFormat(v26)->rcSource.left == 3
            ? (v7 = 1)
            : (v7 = 0),
              v7) )
        {
          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_162EE80 + 4) + 8))(
                   *(_DWORD *)(dword_162EE80 + 4),
                   1,
                   0);
        }
        else
        {
          if ( v47 == -1 )
            v6 = sub_636C50(dword_162EE84);
          else
            v6 = v47;
          v48[0] = v6;
          v48[1] = v52;
          v48[2] = v44;
          v49 = v53;
          v50 = v55;
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(
            *(_DWORD *)(dword_162EE80 + 4),
            1);
          v5 = sub_637810(2);
          return sub_639390(v48, *(_DWORD *)(dword_162EE80 + 4), v5, 1);
        }
      }
  }
}


//======================================================================
// sub_525C10
// entry 00525c10  size 213  status ok
//======================================================================

int __stdcall sub_525C10(unsigned int a1)
{
  CImageDisplay *v3; // [esp+8h] [ebp-14h]
  int v4; // [esp+14h] [ebp-8h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = sub_62FBF0(5);
  v5 = v4;
  if ( a1 >= 4 )
    return -1;
  v3 = (CImageDisplay *)sub_5DCB00(a1);
  if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 3 )
  {
    return -1;
  }
  do
  {
    v5 = (v5 + 1) % 5;
    if ( *(_BYTE *)(dword_793374 + 40 * a1 + 3224 + 8 * v5) )
      return *(_DWORD *)(dword_793374 + 40 * a1 + 3224 + 8 * v5 + 4);
  }
  while ( v5 != v4 );
  return -1;
}


//======================================================================
// sub_525D20
// entry 00525d20  size 149  status ok
//======================================================================

_DWORD *__thiscall sub_525D20(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &RouletteRoom::`vftable';
  sub_5F1AD0(110014);
  dword_793370 = (int)this;
  dword_793374 = 0;
  dword_793378 = 0;
  dword_79337C = 0;
  dword_793380 = 0;
  return this;
}


//======================================================================
// sub_525DC0
// entry 00525dc0  size 324  status ok
//======================================================================

int __thiscall sub_525DC0(_DWORD *this)
{
  *this = &RouletteRoom::`vftable';
  dword_793370 = 0;
  if ( dword_793374 )
    (**(void (__thiscall ***)(int, int))dword_793374)(dword_793374, 1);
  dword_793374 = 0;
  if ( dword_793378 )
    (**(void (__thiscall ***)(int, int))dword_793378)(dword_793378, 1);
  dword_793378 = 0;
  if ( dword_79337C )
    (**(void (__thiscall ***)(int, int))dword_79337C)(dword_79337C, 1);
  dword_79337C = 0;
  if ( dword_793380 )
    (**(void (__thiscall ***)(int, int))dword_793380)(dword_793380, 1);
  dword_793380 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_525F10
// entry 00525f10  size 498  status ok
//======================================================================

int __thiscall sub_525F10(_DWORD **this)
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

  sub_5D8230();
  if ( operator new(0xDC0u) )
    v6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=();
  else
    v6 = 0;
  dword_793374 = v6;
  sub_527D40();
  v12 = (_AFX_OLE_STATE *)operator new(0xCu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_793378 = (int)v5;
  sub_5243D0();
  v11 = (ATL::CCRTHeap *)operator new(0x31Cu);
  if ( v11 )
    v4 = sub_521B80(v11);
  else
    v4 = 0;
  dword_79337C = (int)v4;
  sub_521F20(v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_793380 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &RouletteRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8);
  return sub_5243F0((_BYTE *)dword_793378);
}


//======================================================================
// sub_526110
// entry 00526110  size 174  status ok
//======================================================================

int __stdcall sub_526110(int a1, int a2)
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
    sub_5FE240(5019, -1, -1, 0);
    sub_5FE640(100058, 0);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5261C0
// entry 005261c0  size 49  status ok
//======================================================================

int __thiscall sub_5261C0(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3206001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_526200
// entry 00526200  size 63  status ok
//======================================================================

int __stdcall sub_526200(int a1, int a2)
{
  if ( a1 == 3206002 )
    return sub_528FF0(-1);
  else
    return sub_5DC7D0(a1, a2);
}


//======================================================================
// sub_526240
// entry 00526240  size 125  status ok
//======================================================================

int __stdcall sub_526240(int a1)
{
  int v1; // eax

  if ( !*(_BYTE *)(a1 + 4) && *(_DWORD *)(a1 + 24) == 4 && tolower(*(char *)(a1 + 20)) == 112 )
  {
    if ( dword_793374 )
    {
      v1 = sub_5F2A60(3206002, 0);
      if ( (unsigned __int8)sub_6026D0(v1) )
      {
        *(_BYTE *)(a1 + 4) = 1;
        sub_528FF0(-1);
      }
    }
  }
  return sub_5D7F40(a1);
}


//======================================================================
// sub_5262C0
// entry 005262c0  size 35  status ok
//======================================================================

char __thiscall sub_5262C0(void *this)
{
  if ( dword_793374 )
    return sub_527F50(dword_793374, this);
  else
    return 1;
}


//======================================================================
// sub_5262F0
// entry 005262f0  size 342  status ok
//======================================================================

int __thiscall sub_5262F0(void *this)
{
  const CHAR *v1; // eax
  int v3; // eax
  const CHAR *v4; // [esp-8h] [ebp-30h]
  char v5; // [esp+4h] [ebp-24h]
  CImageDisplay *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v8 = *(_DWORD *)(dword_793374 + 3384);
  if ( (unsigned __int8)sub_528090(v8)
    && ((v7 = (CImageDisplay *)sub_528000(dword_793374), CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2)
     || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3
      ? (v5 = 1)
      : (v5 = 0),
        v5 && (unsigned __int8)sub_528D00(v8)) )
  {
    v4 = (const CHAR *)sub_630F40("SID_CASINO_TABLEMINNOTMET_TITLE");
    v1 = (const CHAR *)sub_630F40("SID_CASINO_TABLEMINNOTMET_SHORT");
    return sub_62FF10(v1, v4, 0);
  }
  else
  {
    if ( (unsigned __int8)sub_528090(v8) )
      *(_BYTE *)(sub_528000(dword_793374) + 1184) = 1;
    else
      *(_BYTE *)(sub_528000(dword_793374) + 1185) = 1;
    v3 = sub_528000(dword_793374);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, v3);
    sub_528EE0(*(_DWORD *)(dword_793374 + 3384));
    sub_5DB890(this);
    return sub_524500((_BYTE *)dword_793378);
  }
}


//======================================================================
// sub_526450
// entry 00526450  size 87  status ok
//======================================================================

int __thiscall sub_526450(_DWORD **this, char a2)
{
  if ( a2 )
  {
    sub_527D00(0);
    sub_637610(dword_162EE84);
  }
  sub_5DB9B0(this);
  sub_5230A0((_DWORD **)dword_79337C);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_5264B0
// entry 005264b0  size 50  status ok
//======================================================================

int __stdcall sub_5264B0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 229;
  v2[1] = 386;
  v2[2] = 527;
  v2[3] = 527;
  return v2[a1];
}


//======================================================================
// sub_5264F0
// entry 005264f0  size 50  status ok
//======================================================================

int __stdcall sub_5264F0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 306;
  v2[1] = 306;
  v2[2] = 242;
  v2[3] = 80;
  return v2[a1];
}


//======================================================================
// sub_526530
// entry 00526530  size 35  status ok
//======================================================================

int sub_526530()
{
  if ( dword_793374 )
    return sub_528000(dword_793374);
  else
    return 0;
}


//======================================================================
// sub_526560
// entry 00526560  size 86  status ok
//======================================================================

int __thiscall sub_526560(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 161; ++i )
  {
    if ( *(_DWORD *)(dword_79337C + 4 * i + 128) != a2 )
      sub_5CD330(*(_DWORD *)(dword_79337C + 4 * i + 128), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5265C0
// entry 005265c0  size 462  status ok
//======================================================================

char __thiscall sub_5265C0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v9; // eax
  void *v11; // [esp+0h] [ebp-18Ch]
  CImageDisplay *v12; // [esp+4h] [ebp-188h]
  int v13; // [esp+4h] [ebp-188h]
  __int64 v14; // [esp+8h] [ebp-184h]
  int v15; // [esp+8h] [ebp-184h]
  char v16; // [esp+13h] [ebp-179h]
  char Buffer[80]; // [esp+14h] [ebp-178h] BYREF
  char v18[28]; // [esp+64h] [ebp-128h] BYREF
  int v19; // [esp+80h] [ebp-10Ch]
  char Destination[256]; // [esp+84h] [ebp-108h] BYREF
  int i; // [esp+188h] [ebp-4h]

  v11 = this;
  v16 = 0;
  sub_5EF310(17);
  sub_5EF340(5, 0);
  Destination[0] = 0;
  v19 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(_DWORD *)(a8 + 480 * i) )
    {
      ++v16;
      v14 = sub_64C8A0(
              *(_DWORD *)(*(_DWORD *)(a2 + 376) + 32 * i + 72),
              *(_DWORD *)(*(_DWORD *)(a2 + 376) + 32 * i + 76));
      sub_64C8D0(v14, SHIDWORD(v14), v18, 1, 1, 0);
      v12 = (CImageDisplay *)sub_5DCB00(i);
      DisplayFormat = CImageDisplay::GetDisplayFormat(v12);
      sprintf(Buffer, "%s: %s\n", (const char *)&DisplayFormat->rcSource.top, v18);
      strcat(Destination, Buffer);
      sub_5ECC60(300);
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)a5 + 180))(a5, Buffer);
      v9 = sub_5EF050(a5, v11, v12, v14);
      if ( v9 > v19 )
        v19 = sub_5EF050(a5, v11, v13, v15);
    }
  }
  sub_5ECCB0(18 * v16);
  sub_5ECC60(v19 + 10);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)a5 + 180))(a5, Destination);
  return 1;
}


//======================================================================
// sub_526790
// entry 00526790  size 111  status ok
//======================================================================

int __thiscall sub_526790(void *this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-1Ch]
  __int64 v5; // [esp+Ch] [ebp-8h] BYREF

  v5 = sub_64C8A0(0, 0);
  (*(void (__thiscall **)(void *, int, __int64 *))(*(_DWORD *)this + 636))(this, a2, &v5);
  v3 = v5;
  sub_5DCB00(a2);
  sub_5D5CF0(v3, HIDWORD(v3));
  return sub_522890((_DWORD *)dword_79337C, a2);
}


//======================================================================
// sub_526800
// entry 00526800  size 171  status ok
//======================================================================

_DWORD *__stdcall sub_526800(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // eax
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  unsigned __int8 v7; // [esp+7h] [ebp-21h]
  _BYTE v8[8]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v9[8]; // [esp+14h] [ebp-14h] BYREF
  __int64 v10; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+24h] [ebp-4h]

  v7 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = (_DWORD *)v7;
  if ( !v7 )
  {
    v10 = sub_64C8A0(0, 0);
    *a2 = v10;
    result = (_DWORD *)HIDWORD(v10);
    a2[1] = HIDWORD(v10);
    for ( i = 0; i < 161; ++i )
    {
      v3 = (_DWORD *)sub_5CB880(v9, a1);
      v4 = (int *)sub_64C5C0(v8, *v3, v3[1]);
      v5 = *v4;
      v6 = v4[1];
      result = a2;
      *a2 = v5;
      a2[1] = v6;
    }
  }
  return result;
}


//======================================================================
// sub_5268B0
// entry 005268b0  size 22  status ok
//======================================================================

int __thiscall sub_5268B0(void *this)
{
  return sub_527CE0(dword_793374, this);
}


//======================================================================
// sub_5268D0
// entry 005268d0  size 36  status ok
//======================================================================

int __thiscall sub_5268D0(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_526900
// entry 00526900  size 115  status ok
//======================================================================

int __stdcall sub_526900(int a1)
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
  sub_527C80(-1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_527C80(-1);
  *(_DWORD *)(v5 + 12) = v3;
  *(_DWORD *)(v5 + 16) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_526980
// entry 00526980  size 119  status ok
//======================================================================

int __stdcall sub_526980(int a1)
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
  sub_527C80(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_527C80(a1);
  *(_DWORD *)(v5 + 4) = v3;
  *(_DWORD *)(v5 + 8) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_526A00
// entry 00526a00  size 90  status ok
//======================================================================

int __stdcall sub_526A00(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_79337C + 4 * i + 128) + 376) == a1 )
      return *(_DWORD *)(dword_79337C + 4 * i + 128);
  }
  return 0;
}


//======================================================================
// sub_526A60
// entry 00526a60  size 18  status ok
//======================================================================

int __stdcall sub_526A60(int a1)
{
  return 1046;
}


//======================================================================
// sub_526A80
// entry 00526a80  size 80  status ok
//======================================================================

int __thiscall sub_526A80(void *this, int a2, int a3)
{
  sub_5DB890(this);
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_522650();
  sub_527E50(dword_793374);
  return sub_524500((_BYTE *)dword_793378);
}


//======================================================================
// sub_526AD0
// entry 00526ad0  size 115  status ok
//======================================================================

int __thiscall sub_526AD0(void *this, int a2, int a3)
{
  int result; // eax

  result = (unsigned __int8)sub_523440((_DWORD *)dword_79337C);
  if ( !(_BYTE)result && !*(_BYTE *)(dword_793374 + 3516) )
  {
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 708))(this, *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4));
    if ( !(_BYTE)result )
    {
      *(_DWORD *)(dword_793374 + 3512) = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4);
      return sub_5226B0((void *)dword_79337C);
    }
  }
  return result;
}


//======================================================================
// sub_526B50
// entry 00526b50  size 106  status ok
//======================================================================

char __stdcall sub_526B50(int a1, int a2)
{
  char result; // al

  sub_5D9F50(a1, a2);
  result = sub_523440((_DWORD *)dword_79337C);
  if ( !result )
  {
    result = dword_793374;
    if ( !*(_BYTE *)(dword_793374 + 3516) && *(_DWORD *)(dword_793374 + 3512) != -1 )
    {
      *(_DWORD *)(dword_793374 + 3512) = -1;
      return sub_5226B0((void *)dword_79337C);
    }
  }
  return result;
}


//======================================================================
// sub_526BC0
// entry 00526bc0  size 570  status ok
//======================================================================

int __thiscall sub_526BC0(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int result; // eax
  int v13; // eax
  int v14; // [esp+4h] [ebp-2Ch]
  int v15; // [esp+Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-20h]
  _DWORD *v17; // [esp+14h] [ebp-1Ch]
  _DWORD *v19; // [esp+1Ch] [ebp-14h]

  v5 = sub_630F40("SID_ROULETTE_CROUPIERVOICE");
  v6 = sub_5F9EF0(0, 50, 3200201, 20, 85, 2, v5, 31, 69, 66, -1, 20, 0);
  sub_5FF5A0(v6);
  v7 = sub_630F40("SID_CASINO_CONTINUEBUTTON");
  v8 = sub_5F9EF0(0, 51, 3200201, 20, 105, 2, v7, 31, 69, 66, -1, 20, 0);
  sub_5FF5A0(v8);
  v9 = (char *)sub_630F40("SID_GENERIC_HELP");
  v10 = sub_5FA790(0, 10, v9, 72, 240, 84, 262, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v10);
  v19 = operator new(0x1D0u);
  if ( v19 )
  {
    sub_5EC5A0(v19);
    *v19 = &RouletteSettingsHelpText::`vftable';
    v17 = v19;
  }
  else
  {
    v17 = 0;
  }
  v11 = sub_5FA5B0(v17, 50, &Source, 35, 230, 76, 268, 292, 3, 5, -1);
  sub_5FF5A0(v11);
  if ( (unsigned __int8)sub_527CE0(dword_793374) )
  {
    v16 = sub_5FB350(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 244))(v16);
  }
  result = (unsigned __int8)sub_527D20(dword_793374);
  if ( (_BYTE)result )
  {
    v15 = sub_5FB350(51);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 244))(v15);
  }
  if ( dword_7947B0 )
  {
    if ( (unsigned __int8)sub_5CDD60(dword_7947B0) )
    {
      v13 = sub_5FB350(51);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 248))(v13);
    }
    else
    {
      v14 = sub_5FB350(51);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
    }
  }
  *(this + 124) = 0;
  return result;
}


//======================================================================
// sub_526E00
// entry 00526e00  size 179  status ok
//======================================================================

int __thiscall sub_526E00(unsigned __int8 *this, int a2, int a3)
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
  sub_527CC0(v4);
  v5 = sub_5FB350(51);
  v6 = sub_600230(v5);
  sub_527D00(v6);
  if ( dword_7947B0 )
  {
    v7 = sub_5FB350(51);
    v8 = sub_600230(v7);
    sub_5CDD10(v8 == 0);
  }
  sub_637610(dword_162EE84);
  sub_522650();
  result = *(this + 124);
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_527E50(dword_793374);
    return sub_524500((_BYTE *)dword_793378);
  }
  return result;
}


//======================================================================
// sub_526EC0
// entry 00526ec0  size 46  status ok
//======================================================================

int __thiscall sub_526EC0(void *this)
{
  int result; // eax

  result = sub_5DBE50(this);
  if ( dword_7947C0 )
    return CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(455, 0);
  return result;
}


//======================================================================
// sub_526EF0
// entry 00526ef0  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_526EF0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v4 = 61;
  v5[0] = 286;
  v5[1] = 227;
  v5[2] = 286;
  v5[3] = 371;
  v5[4] = 191;
  v5[5] = 371;
  v5[6] = 32;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 4 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\rouletteroom.cpp", 470);
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
// sub_526F90
// entry 00526f90  size 284  status ok
//======================================================================

void __thiscall sub_526F90(void *this, int a2)
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
        v2 = sub_630F40("SID_ROULETTE_DEALERVOICE");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
      }
      if ( v9 == 1 )
      {
        v3 = sub_630F40("SID_ROULETTE_CONTINUEBUTTON");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
    }
  }
}


//======================================================================
// sub_5270B0
// entry 005270b0  size 122  status ok
//======================================================================

int __thiscall sub_5270B0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_524500((_BYTE *)dword_793378);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\rouletteroom.cpp", 531);
  sub_527E50(dword_793374);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_527130
// entry 00527130  size 16  status ok
//======================================================================

int sub_527130()
{
  return 3200002;
}


//======================================================================
// sub_527170
// entry 00527170  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_527170(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &RouletteRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_5271A0
// entry 005271a0  size 120  status ok
//======================================================================

_DWORD *sub_5271A0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_525D20(v2);
  else
    return 0;
}


//======================================================================
// sub_527220
// entry 00527220  size 51  status ok
//======================================================================

char __stdcall sub_527220(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_ROULETTE");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_527280
// entry 00527280  size 16  status ok
//======================================================================

int sub_527280()
{
  return 3206000;
}


//======================================================================
// sub_527290
// entry 00527290  size 16  status ok
//======================================================================

const char *sub_527290()
{
  return "Roulette";
}


//======================================================================
// sub_5272B0
// entry 005272b0  size 16  status ok
//======================================================================

char **sub_5272B0()
{
  return off_7228A4;
}


//======================================================================
// sub_5272C0
// entry 005272c0  size 16  status ok
//======================================================================

char **sub_5272C0()
{
  return &off_7228B0;
}


//======================================================================
// sub_5272F0
// entry 005272f0  size 94  status ok
//======================================================================

char __stdcall sub_5272F0(_DWORD *a1, int a2)
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
// sub_527350
// entry 00527350  size 16  status ok
//======================================================================

int sub_527350()
{
  return 20;
}


//======================================================================
// sub_527360
// entry 00527360  size 46  status ok
//======================================================================

char __stdcall sub_527360(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 1;
  a1[1] = 1;
  return 1;
}


//======================================================================
// sub_527390
// entry 00527390  size 84  status ok
//======================================================================

char __stdcall sub_527390(_BYTE *a1)
{
  _BYTE *v2; // [esp+8h] [ebp-4h]

  sub_5DE600(dword_7947E0);
  v2 = (_BYTE *)sub_63AAE0(-1);
  if ( !a1 || !v2 )
    return 0;
  *v2 = *a1;
  v2[1] = a1[1];
  return 1;
}


//======================================================================
// sub_5273F0
// entry 005273f0  size 73  status ok
//======================================================================

char __stdcall sub_5273F0(_DWORD *a1)
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
// sub_527450
// entry 00527450  size 16  status ok
//======================================================================

int sub_527450()
{
  return 11;
}


//======================================================================
// sub_527460
// entry 00527460  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_527460(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(12);
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
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)12 )
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
// sub_527590
// entry 00527590  size 446  status ok
//======================================================================

char __stdcall sub_527590(int a1, int a2)
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

  v20 = sub_63AAE0(12);
  v17 = sub_64C8A0(0, 0);
  v18 = v17;
  v16 = sub_64C8A0(0, 0);
  v19 = v16;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)12 )
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
// sub_527750
// entry 00527750  size 60  status ok
//======================================================================

char __stdcall sub_527750(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  return 1;
}


//======================================================================
// sub_527790
// entry 00527790  size 41  status ok
//======================================================================

char __stdcall sub_527790(int a1)
{
  if ( a1 != 3206000 )
    return 0;
  sub_653BD0(12);
  return 1;
}


//======================================================================
// sub_5277C0
// entry 005277c0  size 15  status ok
//======================================================================

char __stdcall sub_5277C0(int a1)
{
  return 0;
}


//======================================================================
// sub_5277D0
// entry 005277d0  size 15  status ok
//======================================================================

char __stdcall sub_5277D0(int a1)
{
  return 0;
}


//======================================================================
// sub_5277E0
// entry 005277e0  size 16  status ok
//======================================================================

void *sub_5277E0()
{
  return &unk_7228B4;
}


//======================================================================
// sub_5277F0
// entry 005277f0  size 190  status ok
//======================================================================

void *__stdcall sub_5277F0(int a1)
{
  int v1; // eax

  if ( (dword_793384 & 1) == 0 )
  {
    dword_793384 |= 1u;
    dword_7228D8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_7228DC = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3206001 )
    return &unk_7228D4;
  else
    return 0;
}


//======================================================================
// sub_5278B0
// entry 005278b0  size 16  status ok
//======================================================================

void *sub_5278B0()
{
  return &unk_722350;
}


//======================================================================
// sub_5278C0
// entry 005278c0  size 16  status ok
//======================================================================

void *sub_5278C0()
{
  return &unk_722810;
}


//======================================================================
// sub_5278D0
// entry 005278d0  size 261  status ok
//======================================================================

char __stdcall sub_5278D0(int a1, int a2)
{
  if ( a2 == 3206000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(12, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 12, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3206000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 12, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_527BD0
// entry 00527bd0  size 166  status ok
//======================================================================

void __thiscall sub_527BD0(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &RouletteState::`vftable';
  for ( i = 0; i < 161; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_527C80
// entry 00527c80  size 55  status ok
//======================================================================

int __stdcall sub_527C80(int a1)
{
  if ( a1 == -1 )
    return sub_6375D0(-1);
  else
    return sub_63AAE0(-1);
}


//======================================================================
// sub_527CC0
// entry 00527cc0  size 28  status ok
//======================================================================

_BYTE *__stdcall sub_527CC0(char a1)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_527C80(-1);
  *result = a1;
  return result;
}


//======================================================================
// sub_527CE0
// entry 00527ce0  size 23  status ok
//======================================================================

char __thiscall sub_527CE0(void *this)
{
  return *(_BYTE *)sub_527C80(-1);
}


//======================================================================
// sub_527D00
// entry 00527d00  size 29  status ok
//======================================================================

int __stdcall sub_527D00(char a1)
{
  int result; // eax

  result = sub_527C80(-1);
  *(_BYTE *)(result + 1) = a1;
  return result;
}


//======================================================================
// sub_527D20
// entry 00527d20  size 24  status ok
//======================================================================

char sub_527D20()
{
  return *(_BYTE *)(sub_527C80(-1) + 1);
}


//======================================================================
// sub_527D40
// entry 00527d40  size 257  status ok
//======================================================================

int __thiscall sub_527D40(_DWORD *this)
{
  __int64 v2; // [esp-8h] [ebp-34h]
  int v3; // [esp+4h] [ebp-28h]
  void *v5; // [esp+14h] [ebp-18h]
  int i; // [esp+1Ch] [ebp-10h]
  int j; // [esp+1Ch] [ebp-10h]

  for ( i = 0; i < 161; ++i )
  {
    v5 = operator new(0xF4u);
    if ( v5 )
      v3 = sub_5297D0(v5);
    else
      v3 = 0;
    *(this + i + 1) = v3;
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 1), (struct CPaneDivider *)i);
  }
  for ( j = 0; j < 4; ++j )
  {
    v2 = sub_64C8A0(0, 0);
    sub_5DCB00(j);
    sub_5D6050(v2, HIDWORD(v2));
  }
  return sub_527E50(this);
}


//======================================================================
// sub_527E50
// entry 00527e50  size 249  status ok
//======================================================================

int __thiscall sub_527E50(int this)
{
  int result; // eax
  int i; // [esp+10h] [ebp-4h]
  int j; // [esp+10h] [ebp-4h]

  *(_DWORD *)(this + 3512) = -1;
  *(_BYTE *)(this + 3516) = 0;
  sub_528030(-1, 0);
  sub_528B60(-1);
  *(_DWORD *)(this + 3504) = -1;
  result = this;
  *(_DWORD *)(this + 3508) = -1;
  for ( i = 0; i < 161; ++i )
  {
    sub_5CB9B0(*(_DWORD *)(this + 4 * i + 4));
    result = *(_DWORD *)(this + 4 * i + 4);
    *(_DWORD *)(result + 240) = 2;
  }
  for ( j = 0; j < 4; ++j )
  {
    *(_BYTE *)(sub_5DCB00(j) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(j) + 1186) = 0;
    result = sub_5DCB00(j);
    *(_BYTE *)(result + 1185) = 0;
  }
  return result;
}


//======================================================================
// sub_527F50
// entry 00527f50  size 162  status ok
//======================================================================

char sub_527F50()
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
// sub_528000
// entry 00528000  size 45  status ok
//======================================================================

int __thiscall sub_528000(_DWORD *this)
{
  if ( *(this + 846) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 846));
}


//======================================================================
// sub_528030
// entry 00528030  size 88  status ok
//======================================================================

LONG __thiscall sub_528030(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 846) = a2;
  if ( *(this + 846) == -1 )
  {
    sub_5D8A20(0, -1, 0);
  }
  else
  {
    LOBYTE(v3) = a3;
    sub_5D8A20(1, a2, v3);
  }
  return sub_522750();
}


//======================================================================
// sub_528090
// entry 00528090  size 100  status ok
//======================================================================

char __thiscall sub_528090(_DWORD *this, int a2)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    if ( *(_DWORD *)(*(this + i + 1) + 32 * a2 + 72) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_528100
// entry 00528100  size 135  status ok
//======================================================================

char __thiscall sub_528100(_DWORD *this, int a2)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    if ( *(_DWORD *)(*(this + i + 1) + 32 * a2 + 72)
      && !*(_DWORD *)(*(_DWORD *)(dword_79337C + 4 * i + 128) + 480 * a2 + 380) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_528190
// entry 00528190  size 161  status ok
//======================================================================

char __thiscall sub_528190(_DWORD *this, int a2)
{
  int i; // [esp+10h] [ebp-4h]

  if ( a2 == -1 )
    a2 = *(this + 846);
  if ( a2 == -1 || *(_BYTE *)(sub_5DCB00(a2) + 1184) || *(this + 846) != a2 )
    return 0;
  for ( i = 0; i < 161; ++i )
  {
    if ( *(this + 161 * a2 + i + 162) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_528240
// entry 00528240  size 278  status ok
//======================================================================

bool __stdcall sub_528240(int a1)
{
  _DWORD *v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+0h] [ebp-30h]
  int v9; // [esp+4h] [ebp-2Ch]
  _BYTE v10[8]; // [esp+Ch] [ebp-24h] BYREF
  __int64 v11; // [esp+14h] [ebp-1Ch]
  int v12; // [esp+1Ch] [ebp-14h]
  __int64 v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h]

  v11 = sub_64C8A0(0, 0);
  v13 = v11;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  v1 = (_DWORD *)sub_5CB880(v10, a1);
  v2 = v1[1];
  LODWORD(v13) = *v1;
  HIDWORD(v13) = v2;
  v12 = v13;
  if ( (unsigned __int8)sub_5DA7B0(dword_793370) )
  {
    v3 = sub_5DA8A0(dword_793370);
    if ( v14 * (v3 - *(_DWORD *)(dword_7947E0 + 20216)) >= 250 )
    {
      v4 = sub_5DA8A0(dword_793370);
      v9 = v14 * (v4 - *(_DWORD *)(dword_7947E0 + 20216));
    }
    else
    {
      v9 = 250;
    }
    v15 = v9;
  }
  else
  {
    if ( 10 * v14 >= 500 )
      v8 = 10 * v14;
    else
      v8 = 500;
    v15 = v8;
  }
  v5 = sub_5DCB00(a1);
  v6 = sub_5D5A50(v5);
  return v12 + v6 < v15;
}


//======================================================================
// sub_528360
// entry 00528360  size 35  status ok
//======================================================================

BOOL __thiscall sub_528360(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + a2 + 1) + 240) == 0;
}


//======================================================================
// sub_528390
// entry 00528390  size 67  status ok
//======================================================================

char __thiscall sub_528390(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
  {
    if ( sub_528360(this, i) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_5283E0
// entry 005283e0  size 55  status ok
//======================================================================

BOOL sub_5283E0()
{
  int v1; // [esp+4h] [ebp-8h] BYREF
  _BYTE v2[4]; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)dword_7947E4 + 620))(dword_7947E4, v2, &v1);
  return v1 == 1000000000;
}


//======================================================================
// sub_528420
// entry 00528420  size 72  status ok
//======================================================================

bool __thiscall sub_528420(_DWORD *this)
{
  return (unsigned __int8)sub_5DA7B0(dword_793370) && *(this + 848) >= sub_5DA8A0(dword_793370);
}


//======================================================================
// sub_528470
// entry 00528470  size 167  status ok
//======================================================================

bool __thiscall sub_528470(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  bool result; // al
  _BYTE v6[8]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+1Ch] [ebp-Ch]
  int v10; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h]

  v11 = sub_5DA880(dword_793370);
  v8 = 40 * v11 / 100;
  v10 = sub_528520(this, 40 * v11 % 100);
  v9 = sub_5285C0(this);
  result = 0;
  if ( *(this + 848) != 1 && a2 == v10 )
  {
    sub_5DCB00(a2);
    v2 = (_DWORD *)sub_5D5A90(v7);
    sub_5DCB00(v9);
    v3 = (_DWORD *)sub_5D5A90(v6);
    if ( *v2 < *v3 - v8 )
      return 1;
  }
  return result;
}


//======================================================================
// sub_528520
// entry 00528520  size 155  status ok
//======================================================================

int sub_528520()
{
  int *v0; // eax
  char v2[8]; // [esp+Ch] [ebp-1Ch] BYREF
  char v3[8]; // [esp+14h] [ebp-14h] BYREF
  int v4; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  int v6; // [esp+24h] [ebp-4h]

  v6 = 1000000000;
  v4 = 0;
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
// sub_5285C0
// entry 005285c0  size 155  status ok
//======================================================================

int sub_5285C0()
{
  _DWORD *v0; // eax
  char v2[8]; // [esp+Ch] [ebp-1Ch] BYREF
  char v3[8]; // [esp+14h] [ebp-14h] BYREF
  int v4; // [esp+1Ch] [ebp-Ch]
  int v5; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v5 = 0;
  v4 = 0;
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
// sub_528660
// entry 00528660  size 263  status ok
//======================================================================

int sub_528660()
{
  int v0; // eax
  __int64 v2; // [esp-8h] [ebp-34h]
  CImageDisplay *v3; // [esp+Ch] [ebp-20h]
  int i; // [esp+1Ch] [ebp-10h]
  __int64 v5; // [esp+20h] [ebp-Ch] BYREF
  int v6; // [esp+28h] [ebp-4h]

  v6 = -1;
  v5 = sub_64C8A0(0, 0);
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
    {
      if ( !*(_BYTE *)(sub_5DCB00(i) + 1185) )
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
  }
  return v6;
}


//======================================================================
// sub_528770
// entry 00528770  size 266  status ok
//======================================================================

int sub_528770()
{
  int v0; // eax
  __int64 v2; // [esp-8h] [ebp-34h]
  CImageDisplay *v3; // [esp+Ch] [ebp-20h]
  __int64 v4; // [esp+1Ch] [ebp-10h] BYREF
  int i; // [esp+24h] [ebp-8h]
  int v6; // [esp+28h] [ebp-4h]

  v6 = -1;
  v4 = sub_64C8A0(1000000000, 0);
  for ( i = 0; i < 4; ++i )
  {
    v3 = (CImageDisplay *)sub_5DCB00(i);
    if ( CImageDisplay::GetDisplayFormat(v3)->rcSource.left )
    {
      if ( !*(_BYTE *)(sub_5DCB00(i) + 1185) )
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
  }
  return v6;
}


//======================================================================
// sub_528880
// entry 00528880  size 212  status ok
//======================================================================

int sub_528880()
{
  CImageDisplay *v1; // [esp+14h] [ebp-1Ch]
  _DWORD v2[4]; // [esp+1Ch] [ebp-14h]
  int i; // [esp+2Ch] [ebp-4h]

  v2[0] = 3;
  v2[1] = 2;
  v2[2] = 1;
  v2[3] = 0;
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
// sub_528A40
// entry 00528a40  size 29  status ok
//======================================================================

bool __thiscall sub_528A40(void *this)
{
  return sub_528BD0(this) == -1;
}


//======================================================================
// sub_528A60
// entry 00528a60  size 251  status ok
//======================================================================

int sub_528A60()
{
  CImageDisplay *v1; // [esp+1Ch] [ebp-1Ch]
  _DWORD v2[4]; // [esp+24h] [ebp-14h]
  int i; // [esp+34h] [ebp-4h]

  v2[0] = 3;
  v2[1] = 2;
  v2[2] = 1;
  v2[3] = 0;
  for ( i = 0; i < 4; ++i )
  {
    v1 = (CImageDisplay *)sub_5DCB00(v2[i]);
    if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1185)
      && *(_BYTE *)(sub_5DCB00(v2[i]) + 1184)
      && !*(_BYTE *)(sub_5DCB00(v2[i]) + 1186) )
    {
      return v2[i];
    }
  }
  return -1;
}


//======================================================================
// sub_528B60
// entry 00528b60  size 110  status ok
//======================================================================

_DWORD *__thiscall sub_528B60(_DWORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_607960((int)"RouletteWinningNumber", -1000);
  if ( v4 != -1000 )
    a2 = v4;
  if ( a2 <= -2 || a2 >= 38 )
    sub_5E9F20((char)"theNumber > -2 && theNumber < 38", "..\\Casino\\roulettestate.cpp", 450);
  *(this + 847) = a2;
  return this;
}


//======================================================================
// sub_528BD0
// entry 00528bd0  size 67  status ok
//======================================================================

int __thiscall sub_528BD0(int *this)
{
  if ( *(this + 847) <= -2 || *(this + 847) >= 38 )
    sub_5E9F20((char)"winningNumber > -2 && winningNumber < 38", "..\\Casino\\roulettestate.cpp", 459);
  return *(this + 847);
}


//======================================================================
// sub_528C20
// entry 00528c20  size 116  status ok
//======================================================================

bool __thiscall sub_528C20(int *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 20 && dword_724110[20 * sub_528BD0(this) + i] != -1; ++i )
  {
    if ( dword_724110[20 * sub_528BD0(this) + i] == a2 )
    {
      v4 = 1;
      return v4 != 0;
    }
  }
  return v4 != 0;
}


//======================================================================
// sub_528CA0
// entry 00528ca0  size 94  status ok
//======================================================================

int __thiscall sub_528CA0(int *this, unsigned __int8 a2)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  result = a2;
  if ( a2 )
  {
    for ( i = 25; i > 0; --i )
      *(this + i + 849) = *(this + i + 848);
    result = sub_528BD0(this);
    *(this + 849) = result;
  }
  return result;
}


//======================================================================
// sub_528D00
// entry 00528d00  size 233  status ok
//======================================================================

bool __thiscall sub_528D00(_DWORD *this, int a2)
{
  __int64 v4; // [esp+14h] [ebp-1Ch]
  int v5; // [esp+24h] [ebp-Ch]
  int v6; // [esp+28h] [ebp-8h]
  int i; // [esp+2Ch] [ebp-4h]

  v5 = 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  for ( i = 0; i < 161; ++i )
  {
    v4 = sub_64C8A0(0, 0);
    if ( (unsigned __int8)sub_64C6E0(v4, HIDWORD(v4)) )
      v5 += *(_DWORD *)(*(this + i + 1) + 32 * a2 + 72);
  }
  return v5 < v6;
}


//======================================================================
// sub_528EE0
// entry 00528ee0  size 266  status ok
//======================================================================

void __thiscall sub_528EE0(_DWORD *this, int a2)
{
  __int64 v2; // rax
  int i; // [esp+24h] [ebp-4h]
  int j; // [esp+24h] [ebp-4h]

  for ( i = 0; i < 161; ++i )
    *(this + 161 * a2 + i + 162) = 0;
  for ( j = 0; j < 161; ++j )
  {
    v2 = sub_64C8A0(0, 0);
    if ( (unsigned __int8)sub_64C6E0(v2, HIDWORD(v2)) )
      *(this + 161 * a2 + j + 162) = *(_DWORD *)(*(this + j + 1) + 32 * a2 + 72);
  }
}


//======================================================================
// sub_528FF0
// entry 00528ff0  size 493  status ok
//======================================================================

int __thiscall sub_528FF0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // eax
  const CHAR *v7; // eax
  const CHAR *v8; // eax
  const CHAR *v9; // [esp-8h] [ebp-38h]
  const CHAR *v10; // [esp-8h] [ebp-38h]
  unsigned __int8 v12; // [esp+17h] [ebp-19h]
  __int64 v13; // [esp+20h] [ebp-10h] BYREF
  int i; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h]

  v13 = sub_64C8A0(0, 0);
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 692))(dword_7947E4);
  v12 = 0;
  if ( a2 == -1 )
    a2 = *(this + 846);
  v2 = sub_5DCB00(a2);
  v3 = sub_5D5A50(v2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  if ( v3 >= result )
  {
    for ( i = 0; i < 161; ++i )
    {
      result = (int)this;
      if ( *(this + 161 * a2 + i + 162) )
      {
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 176))(*(this + i + 1));
        if ( (_BYTE)result )
        {
          LODWORD(v13) = *(this + 161 * a2 + i + 162);
          v5 = sub_5DCB00(a2);
          v6 = sub_5D5A50(v5);
          if ( v6 < (int)v13 )
          {
            v9 = (const CHAR *)sub_630F40("SID_ROULETTE_RESTORELASTBETS");
            v7 = (const CHAR *)sub_630F40("SID_ROULETTE_INSUFFICIENTFUNDS");
            return sub_62FF10(v7, v9, 0);
          }
          if ( *(_DWORD *)(*(this + i + 1) + 32 * a2 + 72) == v15 )
          {
            result = v12;
            if ( !v12 )
            {
              v10 = (const CHAR *)sub_630F40("SID_CASINO_MAXBET");
              v8 = (const CHAR *)sub_630F40("SID_CASINO_BETMAXIMUM");
              result = sub_62FF10(v8, v10, 0);
            }
            v12 = 1;
          }
          else
          {
            result = (*(int (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(*(_DWORD *)*(this + i + 1) + 196))(
                       *(this + i + 1),
                       &v13,
                       0,
                       1);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5291E0
// entry 005291e0  size 86  status ok
//======================================================================

int __stdcall sub_5291E0(int a1, int a2, int a3)
{
  int v3; // eax

  if ( a3 != 1 )
    return sub_5299E0(a1, 0, 0, 1, 1);
  v3 = sub_529240(a2);
  return sub_5299E0(a1, 0, 1, v3, 1);
}


//======================================================================
// sub_529240
// entry 00529240  size 1410  status ok
//======================================================================

int __stdcall sub_529240(int a1)
{
  _WORD v2[8]; // [esp+4h] [ebp-160h]
  _WORD v3[166]; // [esp+14h] [ebp-150h] BYREF

  v2[0] = 35;
  v2[1] = 17;
  v2[2] = 11;
  v2[3] = 8;
  v2[4] = 6;
  v2[5] = 5;
  v2[6] = 2;
  v2[7] = 1;
  memset(v3, 0, 76);
  v3[38] = 1;
  v3[39] = 1;
  v3[40] = 1;
  v3[41] = 1;
  v3[42] = 1;
  v3[43] = 1;
  v3[44] = 1;
  v3[45] = 1;
  v3[46] = 1;
  v3[47] = 1;
  v3[48] = 1;
  v3[49] = 1;
  v3[50] = 1;
  v3[51] = 1;
  v3[52] = 1;
  v3[53] = 1;
  v3[54] = 1;
  v3[55] = 1;
  v3[56] = 1;
  v3[57] = 1;
  v3[58] = 1;
  v3[59] = 1;
  v3[60] = 1;
  v3[61] = 1;
  v3[62] = 1;
  v3[63] = 1;
  v3[64] = 1;
  v3[65] = 1;
  v3[66] = 1;
  v3[67] = 1;
  v3[68] = 1;
  v3[69] = 1;
  v3[70] = 1;
  v3[71] = 1;
  v3[72] = 1;
  v3[73] = 1;
  v3[74] = 1;
  v3[75] = 1;
  v3[76] = 1;
  v3[77] = 1;
  v3[78] = 1;
  v3[79] = 1;
  v3[80] = 1;
  v3[81] = 1;
  v3[82] = 1;
  v3[83] = 1;
  v3[84] = 1;
  v3[85] = 1;
  v3[86] = 1;
  v3[87] = 1;
  v3[88] = 1;
  v3[89] = 1;
  v3[90] = 1;
  v3[91] = 1;
  v3[92] = 1;
  v3[93] = 1;
  v3[94] = 1;
  v3[95] = 1;
  v3[96] = 1;
  v3[97] = 1;
  v3[98] = 1;
  v3[99] = 2;
  v3[100] = 2;
  v3[101] = 2;
  v3[102] = 2;
  v3[103] = 2;
  v3[104] = 2;
  v3[105] = 2;
  v3[106] = 2;
  v3[107] = 2;
  v3[108] = 2;
  v3[109] = 2;
  v3[110] = 2;
  v3[111] = 3;
  v3[112] = 3;
  v3[113] = 3;
  v3[114] = 3;
  v3[115] = 3;
  v3[116] = 3;
  v3[117] = 3;
  v3[118] = 3;
  v3[119] = 3;
  v3[120] = 3;
  v3[121] = 3;
  v3[122] = 3;
  v3[123] = 3;
  v3[124] = 3;
  v3[125] = 3;
  v3[126] = 3;
  v3[127] = 3;
  v3[128] = 3;
  v3[129] = 3;
  v3[130] = 3;
  v3[131] = 3;
  v3[132] = 3;
  v3[133] = 4;
  v3[134] = 5;
  v3[135] = 5;
  v3[136] = 5;
  v3[137] = 5;
  v3[138] = 5;
  v3[139] = 5;
  v3[140] = 5;
  v3[141] = 5;
  v3[142] = 5;
  v3[143] = 5;
  v3[144] = 5;
  v3[145] = 6;
  v3[146] = 6;
  v3[147] = 6;
  v3[148] = 6;
  v3[149] = 6;
  v3[150] = 6;
  v3[151] = 7;
  v3[152] = 7;
  v3[153] = 7;
  v3[154] = 7;
  v3[155] = 7;
  v3[156] = 7;
  v3[157] = 1;
  v3[158] = 2;
  v3[159] = 2;
  v3[160] = 2;
  return (__int16)v2[(__int16)v3[a1]];
}


//======================================================================
// sub_5297D0
// entry 005297d0  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5297D0(_DWORD *this)
{
  sub_5CB4B0();
  *this = &RouletteBet::`vftable';
  *(this + 60) = 2;
  return this;
}


//======================================================================
// sub_529820
// entry 00529820  size 237  status ok
//======================================================================

int __stdcall sub_529820(_DWORD *a1, int a2, char a3)
{
  int result; // eax
  bool v4; // [esp+0h] [ebp-28h]
  CImageDisplay *v5; // [esp+8h] [ebp-20h]
  int v6; // [esp+1Ch] [ebp-Ch]
  __int64 v7; // [esp+20h] [ebp-8h] BYREF

  v7 = sub_64C8A0(0, 0);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793370 + 688))(dword_793370);
  result = sub_528000((_DWORD *)dword_793374);
  if ( result )
  {
    v5 = (CImageDisplay *)sub_528000((_DWORD *)dword_793374);
    v4 = CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3;
    if ( v4 && !*a1 && !a1[1] )
    {
      sub_528000((_DWORD *)dword_793374);
      sub_5D5DE0(&v7);
      if ( (int)v7 < v6 )
        a3 = 0;
    }
    return sub_5CBA10(a1, a2, a3);
  }
  return result;
}


//======================================================================
// sub_529910
// entry 00529910  size 144  status ok
//======================================================================

bool sub_529910()
{
  bool result; // al
  bool v1; // [esp+0h] [ebp-1Ch]
  CImageDisplay *v2; // [esp+10h] [ebp-Ch]

  result = 0;
  if ( sub_528000((_DWORD *)dword_793374) )
  {
    v2 = (CImageDisplay *)sub_528000((_DWORD *)dword_793374);
    v1 = CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3;
    if ( v1 && !*(_BYTE *)(sub_528000((_DWORD *)dword_793374) + 1184) )
      return 1;
  }
  return result;
}


//======================================================================
// sub_5299A0
// entry 005299a0  size 50  status ok
//======================================================================

void __thiscall sub_5299A0(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_79337C )
  {
    v3 = pairNode::raw_length(this);
    sub_522800((_DWORD **)dword_79337C, v3, a2, a3);
  }
}


//======================================================================
// sub_5299E0
// entry 005299e0  size 447  status ok
//======================================================================

int __thiscall sub_5299E0(_DWORD *this, __int64 a2, int a3, int a4, int a5)
{
  int v5; // eax
  int result; // eax
  __int64 v7; // [esp+0h] [ebp-50h]
  __int64 v8; // [esp+0h] [ebp-50h]
  char v10[8]; // [esp+18h] [ebp-38h] BYREF
  __int64 v11; // [esp+20h] [ebp-30h]
  __int64 v12; // [esp+28h] [ebp-28h]
  __int64 v13; // [esp+30h] [ebp-20h]
  double v14; // [esp+38h] [ebp-18h]
  __int64 v15; // [esp+40h] [ebp-10h]
  __int64 v16; // [esp+48h] [ebp-8h]

  v16 = *((_QWORD *)this + 4 * a2 + HIDWORD(a2) + 9);
  v12 = sub_64C8A0(0, 0);
  v13 = v12;
  v11 = sub_64C8A0(0, 0);
  v15 = v11;
  v14 = (double)a4 / (double)a5;
  v5 = sub_5DCB00(a2);
  result = sub_5D5A50(v5);
  if ( result < 1000000000 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v13 = v16;
        sub_64C560(v14);
        if ( (int)v16 > 1000000000 )
          LODWORD(v13) = 1000000000;
        v15 = *(_QWORD *)sub_64C5C0(v10, v16, HIDWORD(v16));
        if ( (int)v15 >= 1000000000 )
          v15 = sub_64C8A0(1000000000, 0);
        v7 = v15;
        sub_5DCB00(a2);
        sub_5D5CF0(v7, HIDWORD(v7));
        v8 = v13;
        sub_5DCB00(a2);
        sub_5D5FB0(v8, HIDWORD(v8));
        result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 184))(
                   this,
                   v15,
                   HIDWORD(v15),
                   a2,
                   HIDWORD(a2));
        *(this + 60) = 1;
      }
    }
    else
    {
      LODWORD(v13) = -(int)v16;
      HIDWORD(v13) = -HIDWORD(v16);
      sub_5DCB00(a2);
      result = sub_5D5FB0(-(int)v16, -HIDWORD(v16));
      *(this + 60) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_529C00
// entry 00529c00  size 623  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_529C00(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]
  int m; // [esp+4h] [ebp-4h]
  int n; // [esp+4h] [ebp-4h]
  int ii; // [esp+4h] [ebp-4h]
  int jj; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &SlotMachineDisplay::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  for ( i = 0; i < 6; ++i )
    *((_DWORD *)this + i + 29) = 0;
  *((_DWORD *)this + 35) = 0;
  for ( j = 0; j < 4; ++j )
    *((_DWORD *)this + j + 36) = 0;
  for ( k = 0; k < 3; ++k )
    *((_DWORD *)this + k + 40) = 0;
  for ( m = 0; m < 8; ++m )
    *((_DWORD *)this + m + 15) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 23) = 0;
  for ( n = 0; n < 3; ++n )
    *((_DWORD *)this + n + 45) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  for ( ii = 0; ii < 5; ++ii )
  {
    *((_DWORD *)this + ii + 51) = 0;
    *((_DWORD *)this + ii + 56) = 0;
  }
  for ( jj = 0; jj < 3; ++jj )
    *((_DWORD *)this + jj + 61) = 0;
  return this;
}


//======================================================================
// sub_529E70
// entry 00529e70  size 2315  status ok
//======================================================================

void __thiscall sub_529E70(CNoTrackObject *this)
{
  int i; // [esp+164h] [ebp-10h]
  int j; // [esp+164h] [ebp-10h]
  int k; // [esp+164h] [ebp-10h]
  int m; // [esp+164h] [ebp-10h]
  int n; // [esp+164h] [ebp-10h]
  int ii; // [esp+164h] [ebp-10h]
  int jj; // [esp+164h] [ebp-10h]

  *(_DWORD *)this = &SlotMachineDisplay::`vftable';
  if ( *((_DWORD *)this + 1) )
    (***((void (__thiscall ****)(_DWORD, int))this + 1))(*((_DWORD *)this + 1), 1);
  if ( *((_DWORD *)this + 2) )
    (***((void (__thiscall ****)(_DWORD, int))this + 2))(*((_DWORD *)this + 2), 1);
  if ( *((_DWORD *)this + 3) )
    (***((void (__thiscall ****)(_DWORD, int))this + 3))(*((_DWORD *)this + 3), 1);
  if ( *((_DWORD *)this + 4) )
    (***((void (__thiscall ****)(_DWORD, int))this + 4))(*((_DWORD *)this + 4), 1);
  if ( *((_DWORD *)this + 5) )
    (***((void (__thiscall ****)(_DWORD, int))this + 5))(*((_DWORD *)this + 5), 1);
  if ( *((_DWORD *)this + 6) )
    (***((void (__thiscall ****)(_DWORD, int))this + 6))(*((_DWORD *)this + 6), 1);
  if ( *((_DWORD *)this + 7) )
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
  if ( *((_DWORD *)this + 8) )
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
  if ( *((_DWORD *)this + 9) )
    (***((void (__thiscall ****)(_DWORD, int))this + 9))(*((_DWORD *)this + 9), 1);
  if ( *((_DWORD *)this + 10) )
    (***((void (__thiscall ****)(_DWORD, int))this + 10))(*((_DWORD *)this + 10), 1);
  if ( *((_DWORD *)this + 11) )
    (***((void (__thiscall ****)(_DWORD, int))this + 11))(*((_DWORD *)this + 11), 1);
  if ( *((_DWORD *)this + 12) )
    (***((void (__thiscall ****)(_DWORD, int))this + 12))(*((_DWORD *)this + 12), 1);
  if ( *((_DWORD *)this + 13) )
    (***((void (__thiscall ****)(_DWORD, int))this + 13))(*((_DWORD *)this + 13), 1);
  if ( *((_DWORD *)this + 14) )
    (***((void (__thiscall ****)(_DWORD, int))this + 14))(*((_DWORD *)this + 14), 1);
  if ( *((_DWORD *)this + 23) )
    (***((void (__thiscall ****)(_DWORD, int))this + 23))(*((_DWORD *)this + 23), 1);
  for ( i = 0; i < 6; ++i )
  {
    if ( *((_DWORD *)this + i + 29) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 29))(*((_DWORD *)this + i + 29), 1);
  }
  if ( *((_DWORD *)this + 35) )
    (***((void (__thiscall ****)(_DWORD, int))this + 35))(*((_DWORD *)this + 35), 1);
  for ( j = 0; j < 4; ++j )
  {
    if ( *((_DWORD *)this + j + 36) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 36))(*((_DWORD *)this + j + 36), 1);
  }
  for ( k = 0; k < 3; ++k )
  {
    if ( *((_DWORD *)this + k + 40) )
      (***((void (__thiscall ****)(_DWORD, int))this + k + 40))(*((_DWORD *)this + k + 40), 1);
  }
  for ( m = 0; m < 8; ++m )
  {
    if ( *((_DWORD *)this + m + 15) )
      (***((void (__thiscall ****)(_DWORD, int))this + m + 15))(*((_DWORD *)this + m + 15), 1);
  }
  if ( *((_DWORD *)this + 43) )
    (***((void (__thiscall ****)(_DWORD, int))this + 43))(*((_DWORD *)this + 43), 1);
  if ( *((_DWORD *)this + 44) )
    (***((void (__thiscall ****)(_DWORD, int))this + 44))(*((_DWORD *)this + 44), 1);
  for ( n = 0; n < 3; ++n )
  {
    if ( *((_DWORD *)this + n + 45) )
      (***((void (__thiscall ****)(_DWORD, int))this + n + 45))(*((_DWORD *)this + n + 45), 1);
  }
  if ( *((_DWORD *)this + 48) )
    (***((void (__thiscall ****)(_DWORD, int))this + 48))(*((_DWORD *)this + 48), 1);
  if ( *((_DWORD *)this + 49) )
    (***((void (__thiscall ****)(_DWORD, int))this + 49))(*((_DWORD *)this + 49), 1);
  if ( *((_DWORD *)this + 50) )
    (***((void (__thiscall ****)(_DWORD, int))this + 50))(*((_DWORD *)this + 50), 1);
  for ( ii = 0; ii < 5; ++ii )
  {
    if ( *((_DWORD *)this + ii + 51) )
      (***((void (__thiscall ****)(_DWORD, int))this + ii + 51))(*((_DWORD *)this + ii + 51), 1);
    if ( *((_DWORD *)this + ii + 56) )
      (***((void (__thiscall ****)(_DWORD, int))this + ii + 56))(*((_DWORD *)this + ii + 56), 1);
  }
  for ( jj = 0; jj < 3; ++jj )
  {
    if ( *((_DWORD *)this + jj + 61) )
      (***((void (__thiscall ****)(_DWORD, int))this + jj + 61))(*((_DWORD *)this + jj + 61), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_52A780
// entry 0052a780  size 824  status ok
//======================================================================

int __thiscall sub_52A780(int this)
{
  int v3; // [esp+4h] [ebp-8h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 56))(dword_793394) == 1 )
  {
    *(_DWORD *)(this + 256) = 0;
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394) != 5 ? 50 : 53;
    *(_DWORD *)(this + 260) = v3;
    *(_DWORD *)(this + 264) = v3;
    *(_DWORD *)(this + 268) = v3;
    *(_DWORD *)(this + 292) = sub_52D0E0(this);
    *(_DWORD *)(this + 360) = sub_52D100(this);
    *(_DWORD *)(this + 272) = 3207100;
    *(_DWORD *)(this + 276) = 3207105;
    *(_DWORD *)(this + 280) = 3207101;
    *(_DWORD *)(this + 284) = 3207108;
    *(_DWORD *)(this + 288) = 3207102;
    *(_DWORD *)(this + 324) = 3207106;
    *(_DWORD *)(this + 328) = 3207107;
    *(_DWORD *)(this + 340) = 3207205;
    *(_DWORD *)(this + 344) = 3207200;
    *(_DWORD *)(this + 348) = 3207203;
    *(_DWORD *)(this + 352) = 3207204;
    *(_DWORD *)(this + 356) = 3207202;
    *(_DWORD *)(this + 364) = 90058;
    *(_DWORD *)(this + 368) = 90059;
    *(_DWORD *)(this + 372) = 90060;
    *(_BYTE *)(this + 296) = 0;
    *(_BYTE *)(this + 297) = 0;
    *(_DWORD *)(this + 332) = 90120;
    *(_DWORD *)(this + 336) = 90122;
    return this;
  }
  else
  {
    *(_DWORD *)(this + 256) = 10;
    *(_DWORD *)(this + 260) = 0;
    *(_DWORD *)(this + 264) = 0;
    *(_DWORD *)(this + 268) = 0;
    *(_DWORD *)(this + 292) = sub_52D0E0(this);
    *(_DWORD *)(this + 360) = sub_52D100(this);
    *(_DWORD *)(this + 272) = 90008;
    *(_DWORD *)(this + 276) = 90066;
    *(_DWORD *)(this + 280) = 90007;
    *(_DWORD *)(this + 284) = 3207108;
    *(_DWORD *)(this + 288) = 90051;
    *(_BYTE *)(this + 296) = 1;
    *(_DWORD *)(this + 300) = 90091;
    *(_DWORD *)(this + 304) = 90091;
    *(_DWORD *)(this + 308) = 90095;
    *(_BYTE *)(this + 297) = 1;
    *(_DWORD *)(this + 312) = 90090;
    *(_DWORD *)(this + 316) = 90090;
    *(_DWORD *)(this + 320) = 90094;
    *(_DWORD *)(this + 324) = 90049;
    *(_DWORD *)(this + 328) = 90014;
    *(_DWORD *)(this + 332) = 90120;
    *(_DWORD *)(this + 336) = 90122;
    *(_DWORD *)(this + 340) = 90001;
    *(_DWORD *)(this + 344) = 90002;
    *(_DWORD *)(this + 348) = 90003;
    *(_DWORD *)(this + 352) = 90004;
    *(_DWORD *)(this + 356) = 90005;
    *(_DWORD *)(this + 364) = 90058;
    *(_DWORD *)(this + 368) = 90059;
    *(_DWORD *)(this + 372) = 90060;
    return this;
  }
}


//======================================================================
// sub_52AAC0
// entry 0052aac0  size 286  status ok
//======================================================================

void __thiscall sub_52AAC0(_DWORD *this)
{
  int v1; // [esp+4h] [ebp-20h]
  void *v3; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 8; ++i )
  {
    v3 = operator new(0x184u);
    if ( v3 )
      v1 = sub_5F5BF0(v3);
    else
      v1 = 0;
    *(this + i + 15) = v1;
    sub_5EAE80(dword_724D5C[i], 0, *(this + 64), 50, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 15) + 176))(*(this + i + 15), 0);
    *(_DWORD *)(*(this + i + 15) + 376) = 8;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 15) + 112))(*(this + i + 15));
  }
}


//======================================================================
// sub_52ABE0
// entry 0052abe0  size 56  status ok
//======================================================================

int sub_52ABE0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
  {
    sub_5F5D50(0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_52AC20
// entry 0052ac20  size 633  status ok
//======================================================================

int __thiscall sub_52AC20(_DWORD **this)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int j; // [esp+Ch] [ebp-4h]
  int k; // [esp+Ch] [ebp-4h]

  result = (unsigned __int8)sub_5384E0(dword_79338C);
  if ( (_BYTE)result )
  {
    v3 = *(_DWORD *)(dword_79338C + 8);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
    if ( result == 3 )
    {
      for ( i = 3; i < 8; ++i )
        (*(void (__thiscall **)(_DWORD))(**(this + i + 15) + 112))(*(this + i + 15));
      if ( v3 < 1 )
        (*(void (__thiscall **)(_DWORD))(**(this + 15) + 112))(*(this + 15));
      else
        (*(void (__thiscall **)(_DWORD))(**(this + 15) + 116))(*(this + 15));
      if ( v3 < 2 )
        (*(void (__thiscall **)(_DWORD))(**(this + 16) + 112))(*(this + 16));
      else
        (*(void (__thiscall **)(_DWORD))(**(this + 16) + 116))(*(this + 16));
      if ( v3 < 3 )
        return (*(int (__thiscall **)(_DWORD))(**(this + 17) + 112))(*(this + 17));
      else
        return (*(int (__thiscall **)(_DWORD))(**(this + 17) + 116))(*(this + 17));
    }
    else if ( result == 5 )
    {
      for ( j = 0; j < 3; ++j )
        (*(void (__thiscall **)(_DWORD))(**(this + j + 15) + 112))(*(this + j + 15));
      if ( v3 < 1 )
        (*(void (__thiscall **)(_DWORD))(**(this + 18) + 112))(*(this + 18));
      else
        (*(void (__thiscall **)(_DWORD))(**(this + 18) + 116))(*(this + 18));
      if ( v3 < 2 )
        (*(void (__thiscall **)(_DWORD))(**(this + 19) + 112))(*(this + 19));
      else
        (*(void (__thiscall **)(_DWORD))(**(this + 19) + 116))(*(this + 19));
      if ( v3 < 3 )
        (*(void (__thiscall **)(_DWORD))(**(this + 20) + 112))(*(this + 20));
      else
        (*(void (__thiscall **)(_DWORD))(**(this + 20) + 116))(*(this + 20));
      if ( v3 < 4 )
        (*(void (__thiscall **)(_DWORD))(**(this + 21) + 112))(*(this + 21));
      else
        (*(void (__thiscall **)(_DWORD))(**(this + 21) + 116))(*(this + 21));
      if ( v3 < 5 )
        return (*(int (__thiscall **)(_DWORD))(**(this + 22) + 112))(*(this + 22));
      else
        return (*(int (__thiscall **)(_DWORD))(**(this + 22) + 116))(*(this + 22));
    }
    else
    {
      for ( k = 0; k < 8; ++k )
        result = (*(int (__thiscall **)(_DWORD))(**(this + k + 15) + 112))(*(this + k + 15));
    }
  }
  return result;
}


//======================================================================
// sub_52AEA0
// entry 0052aea0  size 320  status ok
//======================================================================

int __thiscall sub_52AEA0(_DWORD **this, int a2)
{
  int v3; // [esp+4h] [ebp-20h]
  unsigned int v5; // [esp+14h] [ebp-10h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394) == 3 )
  {
    if ( a2 < 1 || a2 > 3 )
      sub_5E9F20((char)"1<= coin && coin <=3", "..\\Casino\\slotmachinedisplay.cpp", 296);
    v5 = a2 - 1;
  }
  else
  {
    if ( a2 < 1 || a2 > 5 )
      sub_5E9F20((char)"1<= coin && coin <=5", "..\\Casino\\slotmachinedisplay.cpp", 299);
    v5 = a2 + 2;
  }
  if ( v5 >= 8 )
    sub_5E9F20((char)"0<= x && x <=7", "..\\Casino\\slotmachinedisplay.cpp", 302);
  if ( operator new(0x28u) )
    v3 = sub_601110(0, 0, 1, 0, 0);
  else
    v3 = 0;
  sub_5F5D50(v3);
  return (*(int (__thiscall **)(_DWORD))(**(this + v5 + 15) + 116))(*(this + v5 + 15));
}


//======================================================================
// sub_52AFE0
// entry 0052afe0  size 6135  status ok
//======================================================================

int __thiscall sub_52AFE0(int this)
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
  int v28; // [esp-Ch] [ebp-198h]
  int v29; // [esp-Ch] [ebp-198h]
  int v30; // [esp-Ch] [ebp-198h]
  int v31; // [esp-Ch] [ebp-198h]
  int v32; // [esp-Ch] [ebp-198h]
  int v33; // [esp-Ch] [ebp-198h]
  int v34; // [esp-Ch] [ebp-198h]
  int v35; // [esp-Ch] [ebp-198h]
  int v36; // [esp-8h] [ebp-194h]
  int v37; // [esp-4h] [ebp-190h]
  int v38; // [esp+4h] [ebp-188h]
  int v39; // [esp+8h] [ebp-184h]
  int v40; // [esp+Ch] [ebp-180h]
  int v41; // [esp+10h] [ebp-17Ch]
  int v42; // [esp+14h] [ebp-178h]
  int v43; // [esp+18h] [ebp-174h]
  int v44; // [esp+1Ch] [ebp-170h]
  int v45; // [esp+20h] [ebp-16Ch]
  int v46; // [esp+24h] [ebp-168h]
  int v47; // [esp+28h] [ebp-164h]
  int v48; // [esp+2Ch] [ebp-160h]
  int v49; // [esp+30h] [ebp-15Ch]
  int v50; // [esp+34h] [ebp-158h]
  int v51; // [esp+38h] [ebp-154h]
  int v52; // [esp+3Ch] [ebp-150h]
  int v53; // [esp+40h] [ebp-14Ch]
  int v54; // [esp+44h] [ebp-148h]
  int v55; // [esp+48h] [ebp-144h]
  int v56; // [esp+4Ch] [ebp-140h]
  int v57; // [esp+50h] [ebp-13Ch]
  int v58; // [esp+54h] [ebp-138h]
  int v59; // [esp+58h] [ebp-134h]
  int v60; // [esp+5Ch] [ebp-130h]
  int v61; // [esp+60h] [ebp-12Ch]
  int v62; // [esp+64h] [ebp-128h]
  int v63; // [esp+68h] [ebp-124h]
  int v64; // [esp+6Ch] [ebp-120h]
  int v65; // [esp+70h] [ebp-11Ch]
  int v66; // [esp+74h] [ebp-118h]
  void *v68; // [esp+94h] [ebp-F8h]
  void *v69; // [esp+9Ch] [ebp-F0h]
  void *v70; // [esp+A4h] [ebp-E8h]
  void *v71; // [esp+ACh] [ebp-E0h]
  void *v72; // [esp+B4h] [ebp-D8h]
  void *v73; // [esp+BCh] [ebp-D0h]
  void *v74; // [esp+C4h] [ebp-C8h]
  void *v75; // [esp+CCh] [ebp-C0h]
  void *v76; // [esp+E4h] [ebp-A8h]
  void *v77; // [esp+ECh] [ebp-A0h]
  void *v78; // [esp+F4h] [ebp-98h]
  void *v79; // [esp+FCh] [ebp-90h]
  void *v80; // [esp+104h] [ebp-88h]
  void *v81; // [esp+10Ch] [ebp-80h]
  void *v82; // [esp+114h] [ebp-78h]
  void *v83; // [esp+11Ch] [ebp-70h]
  void *v84; // [esp+124h] [ebp-68h]
  void *v85; // [esp+12Ch] [ebp-60h]
  void *v86; // [esp+134h] [ebp-58h]
  void *v87; // [esp+13Ch] [ebp-50h]
  void *v88; // [esp+14Ch] [ebp-40h]
  void *v89; // [esp+154h] [ebp-38h]
  void *v90; // [esp+15Ch] [ebp-30h]
  int i; // [esp+17Ch] [ebp-10h]
  int j; // [esp+17Ch] [ebp-10h]
  int k; // [esp+17Ch] [ebp-10h]
  int m; // [esp+17Ch] [ebp-10h]
  int n; // [esp+17Ch] [ebp-10h]
  int ii; // [esp+17Ch] [ebp-10h]

  v1 = sub_630F40("SID_SLOTMACHINES");
  sub_5F38B0(v1);
  sub_52A780(this);
  sub_52AAC0((_DWORD *)this);
  v90 = operator new(0x178u);
  if ( v90 )
  {
    sub_5EAAF0(v90);
    v66 = v2;
  }
  else
  {
    v66 = 0;
  }
  *(_DWORD *)(this + 16) = v66;
  sub_5EAE80(*(_DWORD *)(this + 360), 0, 0, 0, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 116))(*(_DWORD *)(this + 16));
  for ( i = 0; i < 3; ++i )
  {
    v89 = operator new(0x178u);
    if ( v89 )
    {
      sub_5EAAF0(v89);
      v65 = v3;
    }
    else
    {
      v65 = 0;
    }
    *(_DWORD *)(this + 4 * i + 160) = v65;
    sub_5EAE80(*(_DWORD *)(this + 4 * i + 364), 0, *(_DWORD *)(this + 256), 50, -1);
    if ( (unsigned __int8)sub_538440(dword_79338C) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 160) + 116))(*(_DWORD *)(this + 4 * i + 160));
    v88 = operator new(0x184u);
    if ( v88 )
      v64 = sub_5F5BF0(v88);
    else
      v64 = 0;
    *(_DWORD *)(this + 4 * i + 180) = v64;
    sub_5EAE80(*(_DWORD *)(this + 4 * i + 364), 0, *(_DWORD *)(this + 256), 50, -1);
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 180) + 376) = 8;
  }
  if ( operator new(0x184u) )
    v63 = sub_52E750();
  else
    v63 = 0;
  *(_DWORD *)(this + 4) = v63;
  sub_5EAE80(*(_DWORD *)(this + 272), 0, *(_DWORD *)(this + 256), 70, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 116))(*(_DWORD *)(this + 4));
  v87 = operator new(0x184u);
  if ( v87 )
    v62 = sub_5F5BF0(v87);
  else
    v62 = 0;
  *(_DWORD *)(this + 8) = v62;
  sub_5EAE80(*(_DWORD *)(this + 280), 0, *(_DWORD *)(this + 256), 90, -1);
  *(_DWORD *)(*(_DWORD *)(this + 8) + 376) = (*((_BYTE *)dword_162EE84 + 37) != 0) + 4;
  v86 = operator new(0x184u);
  if ( v86 )
    v61 = sub_5F5BF0(v86);
  else
    v61 = 0;
  *(_DWORD *)(this + 192) = v61;
  sub_5EAE80(*(_DWORD *)(this + 284), 0, 0, 90, -1);
  v85 = operator new(0x1D0u);
  if ( v85 )
  {
    sub_5EC5A0(v85);
    v60 = v4;
  }
  else
  {
    v60 = 0;
  }
  *(_DWORD *)(this + 140) = v60;
  sub_5EC8F0("0", 46, 15, 28, 173, *(_DWORD *)(this + 256) + *(_DWORD *)(this + 260) + 316, 70, 6, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 140) + 116))(*(_DWORD *)(this + 140));
  for ( j = 0; j < 6; ++j )
  {
    v84 = operator new(0x1D0u);
    if ( v84 )
    {
      sub_5EC5A0(v84);
      v59 = v5;
    }
    else
    {
      v59 = 0;
    }
    *(_DWORD *)(this + 4 * j + 116) = v59;
    sub_5EC8F0(&Source, 46, 12, 18, 269 - 12 * j, *(_DWORD *)(this + 256) + *(_DWORD *)(this + 264) + 316, 70, 5, -1);
    if ( !j )
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 116) + 180))(*(_DWORD *)(this + 116), "0");
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * j + 116) + 116))(*(_DWORD *)(this + 4 * j + 116));
  }
  for ( k = 0; k < 4; ++k )
  {
    v83 = operator new(0x1D0u);
    if ( v83 )
    {
      sub_5EC5A0(v83);
      v58 = v6;
    }
    else
    {
      v58 = 0;
    }
    *(_DWORD *)(this + 4 * k + 144) = v58;
    sub_5EC8F0(&Source, 46, 12, 18, 385 - 12 * k, *(_DWORD *)(this + 256) + *(_DWORD *)(this + 268) + 316, 70, 5, -1);
    if ( !k )
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 144) + 180))(*(_DWORD *)(this + 144), "0");
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 144) + 116))(*(_DWORD *)(this + 4 * k + 144));
  }
  v82 = operator new(0x184u);
  if ( v82 )
    v57 = sub_5F5BF0(v82);
  else
    v57 = 0;
  *(_DWORD *)(this + 12) = v57;
  sub_5EAE80(*(_DWORD *)(this + 288), 0, *(_DWORD *)(this + 256), 100, -1);
  *(_DWORD *)(*(_DWORD *)(this + 12) + 376) = 0;
  v81 = operator new(0x178u);
  if ( v81 )
  {
    sub_5EAAF0(v81);
    v56 = v7;
  }
  else
  {
    v56 = 0;
  }
  *(_DWORD *)(this + 40) = v56;
  v28 = *(_DWORD *)(this + 256);
  v8 = sub_52D140(this);
  sub_5EAE80(v8, 0, v28, 25, -1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 40) + 176))(
    *(_DWORD *)(this + 40),
    *(_DWORD *)(dword_7947E0 + 20240));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 116))(*(_DWORD *)(this + 40));
  v80 = operator new(0x178u);
  if ( v80 )
  {
    sub_5EAAF0(v80);
    v55 = v9;
  }
  else
  {
    v55 = 0;
  }
  *(_DWORD *)(this + 20) = v55;
  v29 = *(_DWORD *)(this + 256);
  v10 = sub_52D120(this);
  sub_5EAE80(v10, 0, v29, 20, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 116))(*(_DWORD *)(this + 20));
  if ( *(_BYTE *)(this + 296) )
  {
    v79 = operator new(0x178u);
    if ( v79 )
    {
      sub_5EAAF0(v79);
      v54 = v11;
    }
    else
    {
      v54 = 0;
    }
    *(_DWORD *)(this + 24) = v54;
    v30 = *(_DWORD *)(this + 256);
    v12 = sub_62FBF0(3);
    sub_5EAE80(*(_DWORD *)(this + 4 * v12 + 300), 0, v30, 15, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 116))(*(_DWORD *)(this + 24));
  }
  if ( *(_BYTE *)(this + 297) )
  {
    v78 = operator new(0x178u);
    if ( v78 )
    {
      sub_5EAAF0(v78);
      v53 = v13;
    }
    else
    {
      v53 = 0;
    }
    *(_DWORD *)(this + 28) = v53;
    v31 = *(_DWORD *)(this + 256);
    v14 = sub_62FBF0(3);
    sub_5EAE80(*(_DWORD *)(this + 4 * v14 + 312), 0, v31, 15, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 116))(*(_DWORD *)(this + 28));
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 60))(dword_793394) )
  {
    if ( *(_DWORD *)(this + 24) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 112))(*(_DWORD *)(this + 24));
    if ( *(_DWORD *)(this + 28) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 112))(*(_DWORD *)(this + 28));
  }
  v77 = operator new(0x178u);
  if ( v77 )
  {
    sub_5EAAF0(v77);
    v52 = v15;
  }
  else
  {
    v52 = 0;
  }
  *(_DWORD *)(this + 32) = v52;
  sub_5EAE80(*(_DWORD *)(this + 292), 0, 0, 15, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 32) + 116))(*(_DWORD *)(this + 32));
  if ( (unsigned __int8)sub_538440(dword_79338C) )
  {
    v76 = operator new(0x178u);
    if ( v76 )
    {
      sub_5EAAF0(v76);
      v51 = v16;
    }
    else
    {
      v51 = 0;
    }
    *(_DWORD *)(this + 172) = v51;
    sub_5EAE80(90068, 0, *(_DWORD *)(this + 256), 10, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 116))(*(_DWORD *)(this + 172));
    if ( operator new(0x1C4u) )
      v50 = sub_531150(167, *(_DWORD *)(this + 256) + 16, 467, *(_DWORD *)(this + 256) + 68, 13);
    else
      v50 = 0;
    *(_DWORD *)(this + 176) = v50;
    *(_BYTE *)(*(_DWORD *)(this + 176) + 388) = 0;
    if ( *(_DWORD *)(dword_7947E0 + 20244) == 10 )
      *(_BYTE *)(*(_DWORD *)(this + 176) + 388) = 1;
    sub_531620(*(_DWORD *)(this + 176));
  }
  else if ( (unsigned __int8)sub_538490(dword_79338C) )
  {
    if ( operator new(0x1F4u) )
      v49 = sub_531F00(217, 0, 25);
    else
      v49 = 0;
    *(_DWORD *)(this + 92) = v49;
    sub_532760(*(_DWORD *)(this + 92));
  }
  v75 = operator new(0x178u);
  if ( v75 )
  {
    sub_5EAAF0(v75);
    v48 = v17;
  }
  else
  {
    v48 = 0;
  }
  *(_DWORD *)(this + 36) = v48;
  sub_5EAE80(*(_DWORD *)(this + 324), 0, *(_DWORD *)(this + 256), 6, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 116))(*(_DWORD *)(this + 36));
  v74 = operator new(0x178u);
  if ( v74 )
  {
    sub_5EAAF0(v74);
    v47 = v18;
  }
  else
  {
    v47 = 0;
  }
  *(_DWORD *)(this + 56) = v47;
  sub_5EAE80(3207104, 0, 0, 25, -1);
  v46 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
  switch ( v46 )
  {
    case 1:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 56) + 176))(*(_DWORD *)(this + 56), 0);
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 56) + 176))(*(_DWORD *)(this + 56), 1);
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 56) + 176))(*(_DWORD *)(this + 56), 2);
      break;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 56))(dword_793394) == 1 )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 116))(*(_DWORD *)(this + 56));
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 56) + 112))(*(_DWORD *)(this + 56));
  v73 = operator new(0x184u);
  if ( v73 )
    v45 = sub_5F5BF0(v73);
  else
    v45 = 0;
  *(_DWORD *)(this + 196) = v45;
  v32 = *(_DWORD *)(this + 256);
  v19 = sub_52D250(this);
  sub_5EAE80(v19, 0, v32, 100, -1);
  *(_DWORD *)(*(_DWORD *)(this + 196) + 376) = 8;
  v72 = operator new(0x184u);
  if ( v72 )
    v44 = sub_5F5BF0(v72);
  else
    v44 = 0;
  *(_DWORD *)(this + 200) = v44;
  v33 = *(_DWORD *)(this + 256);
  v20 = sub_52D1F0(this);
  sub_5EAE80(v20, 0, v33, 100, -1);
  *(_DWORD *)(*(_DWORD *)(this + 200) + 376) = 6;
  for ( m = 0; m < 5; ++m )
  {
    v71 = operator new(0x184u);
    if ( v71 )
      v43 = sub_5F5BF0(v71);
    else
      v43 = 0;
    *(_DWORD *)(this + 4 * m + 204) = v43;
    v34 = *(_DWORD *)(this + 256);
    v21 = sub_52D250(this);
    sub_5EAE80(v21, 0, v34, 100, -1);
    *(_DWORD *)(*(_DWORD *)(this + 4 * m + 204) + 376) = 8;
    v70 = operator new(0x184u);
    if ( v70 )
      v42 = sub_5F5BF0(v70);
    else
      v42 = 0;
    *(_DWORD *)(this + 4 * m + 224) = v42;
    v35 = *(_DWORD *)(this + 256);
    v22 = sub_52D230(this);
    sub_5EAE80(v22, 0, v35, 100, -1);
    *(_DWORD *)(*(_DWORD *)(this + 4 * m + 224) + 376) = 8;
  }
  sub_5F9DE0(0, 0, *(_DWORD *)(this + 340), 0, *(_DWORD *)(this + 256), 70, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 1, *(_DWORD *)(this + 344), 0, *(_DWORD *)(this + 256), 70, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 2, *(_DWORD *)(this + 348), 0, *(_DWORD *)(this + 256), 70, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 3, *(_DWORD *)(this + 352), 0, *(_DWORD *)(this + 256), 70, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 4, *(_DWORD *)(this + 356), 0, *(_DWORD *)(this + 256), 70, &Source, -1, -1, -1, -1, 0);
  for ( n = 0; n < 5; ++n )
  {
    v41 = sub_5FB300(n);
    (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 208))(v41);
  }
  sub_5F9DE0(0, 5, *(_DWORD *)(this + 328), 0, *(_DWORD *)(this + 256), 80, &Source, -1, -1, -1, -1, 0);
  sub_5FB300(5);
  sub_602790(0);
  v69 = operator new(0x178u);
  if ( v69 )
  {
    sub_5EAAF0(v69);
    v40 = v23;
  }
  else
  {
    v40 = 0;
  }
  *(_DWORD *)(this + 48) = v40;
  sub_5EAE80(*(_DWORD *)(this + 332), 0, *(_DWORD *)(this + 256), 10000, -1);
  v68 = operator new(0x178u);
  if ( v68 )
  {
    sub_5EAAF0(v68);
    v39 = v24;
  }
  else
  {
    v39 = 0;
  }
  *(_DWORD *)(this + 52) = v39;
  sub_5EAE80(*(_DWORD *)(this + 336), 0, *(_DWORD *)(this + 256), 10000, -1);
  if ( *(_DWORD *)(dword_7947E0 + 20244) == 10 )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 48) + 116))(*(_DWORD *)(this + 48));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 52) + 116))(*(_DWORD *)(this + 52));
  }
  for ( ii = 0; ii < 3; ++ii )
  {
    if ( operator new(0x1B0u) )
      v38 = sub_52EA10(ii);
    else
      v38 = 0;
    *(_DWORD *)(this + 4 * ii + 244) = v38;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * ii + 244) + 64))(*(_DWORD *)(this + 4 * ii + 244));
    v25 = sub_52D160(this);
    sub_52EDC0(v25);
    v37 = sub_52D210(this);
    v36 = *(_DWORD *)(this + 256) + sub_52D1D0(this);
    v26 = sub_52D1A0(ii);
    sub_52EE40(v26, v36, v37);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * ii + 244) + 116))(*(_DWORD *)(this + 4 * ii + 244));
  }
  sub_52DDF0(this);
  return sub_52CD40(this);
}


//======================================================================
// sub_52C7E0
// entry 0052c7e0  size 653  status ok
//======================================================================

int __thiscall sub_52C7E0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-18h]
  int i; // [esp+18h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 112))(*(_DWORD *)(this + 8));
  sub_52DDF0(this);
  sub_52CD40(this);
  if ( *(_DWORD *)(dword_79338C + 4) || (result = dword_79338C, *(_DWORD *)(dword_79338C + 8)) )
  {
    for ( i = 0; i < 5; ++i )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 204) + 112))(*(_DWORD *)(this + 4 * i + 204));
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 224) + 112))(*(_DWORD *)(this + 4 * i + 224));
      sub_5F5D50(0);
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 180) + 112))(*(_DWORD *)(this + 4 * i + 180));
    }
    sub_52ABE0();
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 192) + 112))(*(_DWORD *)(this + 192));
    sub_609870(*(_DWORD *)(this + 96), 1);
    sub_609870(*(_DWORD *)(this + 100), 1);
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 112))(*(_DWORD *)(this + 200));
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394) == 1 && *(_DWORD *)(dword_79338C + 8) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 196) + 176))(
        *(_DWORD *)(this + 196),
        *(_DWORD *)(dword_79338C + 8) - 1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 196) + 116))(*(_DWORD *)(this + 196));
    }
    else
    {
      sub_5F5D50(0);
    }
    v3 = *(_DWORD *)(dword_79338C + 8);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_79338C + 4))(dword_79338C);
    if ( v3 != result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 60))(dword_793394);
      if ( (_BYTE)result )
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 196) + 112))(*(_DWORD *)(this + 196));
    }
  }
  return result;
}


//======================================================================
// sub_52CA70
// entry 0052ca70  size 131  status ok
//======================================================================

int sub_52CA70()
{
  int v1; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1Cu) )
    v1 = sub_52F7F0(0);
  else
    v1 = 0;
  return sub_5F5D50(v1);
}


//======================================================================
// sub_52CB00
// entry 0052cb00  size 360  status ok
//======================================================================

int __thiscall sub_52CB00(int this)
{
  int v2; // [esp+4h] [ebp-24h]
  int v3; // [esp+8h] [ebp-20h]
  int i; // [esp+18h] [ebp-10h]

  sub_5F2BA0(3207002);
  sub_5F2BA0(3207003);
  sub_5F2BA0(3207004);
  sub_5F2BA0(3207005);
  sub_5F2BA0(3207006);
  sub_609870(*(_DWORD *)(this + 96), 1);
  sub_609870(*(_DWORD *)(this + 100), 1);
  sub_5F5D50(0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 192) + 112))(*(_DWORD *)(this + 192));
  for ( i = 0; i < 6; ++i )
  {
    v3 = sub_5FB300(i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
  }
  if ( operator new(0x34u) )
    v2 = sub_52F930();
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_52CC70
// entry 0052cc70  size 197  status ok
//======================================================================

int __thiscall sub_52CC70(_DWORD **this)
{
  int v3; // [esp+0h] [ebp-2Ch]
  char Buffer[32]; // [esp+8h] [ebp-24h] BYREF

  (*(void (__thiscall **)(_DWORD))(**(this + 49) + 112))(*(this + 49));
  sub_52D270(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_793394 + 60))(dword_793394) )
  {
    if ( *(_BYTE *)(dword_79338C + 124) )
    {
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 9 )
      {
        sub_6311E0(*(_DWORD *)(dword_79338C + 120), Buffer);
        if ( (unsigned __int8)sub_538440(dword_79338C) )
          sub_531C50(Buffer, 16);
      }
    }
  }
  return sub_52DCA0(v3);
}


//======================================================================
// sub_52CD40
// entry 0052cd40  size 922  status ok
//======================================================================

int sub_52CD40()
{
  int result; // eax
  int v1; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-54h]
  int v4; // [esp+8h] [ebp-50h]
  int v5; // [esp+Ch] [ebp-4Ch]
  int v6; // [esp+10h] [ebp-48h]
  int v7; // [esp+14h] [ebp-44h]
  int v8; // [esp+18h] [ebp-40h]
  int v9; // [esp+1Ch] [ebp-3Ch]
  int v10; // [esp+20h] [ebp-38h]
  int v11; // [esp+24h] [ebp-34h]
  int v12; // [esp+28h] [ebp-30h]
  int v13; // [esp+2Ch] [ebp-2Ch]
  int v14; // [esp+30h] [ebp-28h]
  int v15; // [esp+34h] [ebp-24h]
  int v16; // [esp+54h] [ebp-4h]

  v16 = *(_DWORD *)(dword_79338C + 8);
  if ( v16 == (*(int (__thiscall **)(int))(*(_DWORD *)dword_79338C + 4))(dword_79338C) )
  {
    v15 = sub_5FB300(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 208))(v15);
    v14 = sub_5FB300(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 208))(v14);
    v13 = sub_5FB300(2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 208))(v13);
    sub_5F2BA0(3207005);
    sub_5F2BA0(3207004);
    sub_5F2BA0(3207006);
  }
  else
  {
    v12 = sub_5FB300(0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 204))(v12);
    v11 = sub_5FB300(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 204))(v11);
    v10 = sub_5FB300(2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 204))(v10);
    sub_5F2B20(3207005, 1);
    sub_5F2B20(3207004, 1);
    sub_5F2B20(3207006, 1);
  }
  if ( *(_DWORD *)(dword_79338C + 8) )
  {
    v9 = sub_5FB300(3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 204))(v9);
    sub_5F2B20(3207003, 1);
  }
  else
  {
    v8 = sub_5FB300(3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 208))(v8);
    sub_5F2BA0(3207003);
  }
  if ( *(_DWORD *)(dword_79338C + 4) )
  {
    v7 = sub_5FB300(4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 204))(v7);
    sub_5F2B20(3207002, 1);
  }
  else
  {
    v6 = sub_5FB300(4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
    sub_5F2BA0(3207002);
  }
  v5 = sub_5FB300(5);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 204))(v5);
  result = sub_5D0D60(1);
  if ( !(_BYTE)result )
  {
    result = *(_DWORD *)(dword_79338C + 4);
    if ( !result && !*(_DWORD *)(dword_79338C + 8) )
    {
      v4 = sub_5FB300(0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 208))(v4);
      v3 = sub_5FB300(1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
      v1 = sub_5FB300(2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 208))(v1, v1);
      sub_5F2BA0(3207005);
      sub_5F2BA0(3207004);
      result = sub_5F2BA0(3207006);
      if ( !*(_DWORD *)(dword_79338C + 4) )
      {
        result = dword_79338C;
        if ( !*(_DWORD *)(dword_79338C + 8) )
        {
          v2 = sub_5DCB00(0);
          return sub_5DBB70(v2);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_52D0E0
// entry 0052d0e0  size 28  status ok
//======================================================================

int __thiscall sub_52D0E0(void *this)
{
  return (**(int (__thiscall ***)(int, void *))dword_793394)(dword_793394, this);
}


//======================================================================
// sub_52D100
// entry 0052d100  size 29  status ok
//======================================================================

int __thiscall sub_52D100(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 4))(dword_793394, this);
}


//======================================================================
// sub_52D120
// entry 0052d120  size 29  status ok
//======================================================================

int __thiscall sub_52D120(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 8))(dword_793394, this);
}


//======================================================================
// sub_52D140
// entry 0052d140  size 29  status ok
//======================================================================

int __thiscall sub_52D140(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 52))(dword_793394, this);
}


//======================================================================
// sub_52D160
// entry 0052d160  size 29  status ok
//======================================================================

int __thiscall sub_52D160(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 16))(dword_793394, this);
}


//======================================================================
// sub_52D180
// entry 0052d180  size 29  status ok
//======================================================================

int __thiscall sub_52D180(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 12))(dword_793394, this);
}


//======================================================================
// sub_52D1A0
// entry 0052d1a0  size 36  status ok
//======================================================================

int __stdcall sub_52D1A0(int a1)
{
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_793394 + 20))(dword_793394, a1);
}


//======================================================================
// sub_52D1D0
// entry 0052d1d0  size 29  status ok
//======================================================================

int __thiscall sub_52D1D0(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 24))(dword_793394, this);
}


//======================================================================
// sub_52D1F0
// entry 0052d1f0  size 29  status ok
//======================================================================

int __thiscall sub_52D1F0(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 32))(dword_793394, this);
}


//======================================================================
// sub_52D210
// entry 0052d210  size 29  status ok
//======================================================================

int __thiscall sub_52D210(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 36))(dword_793394, this);
}


//======================================================================
// sub_52D230
// entry 0052d230  size 29  status ok
//======================================================================

int __thiscall sub_52D230(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 40))(dword_793394, this);
}


//======================================================================
// sub_52D250
// entry 0052d250  size 29  status ok
//======================================================================

int __thiscall sub_52D250(void *this)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_793394 + 44))(dword_793394, this);
}


//======================================================================
// sub_52D270
// entry 0052d270  size 2569  status ok
//======================================================================

int __thiscall sub_52D270(_DWORD **this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-B4h]
  int v3; // [esp+8h] [ebp-B0h]
  int v4; // [esp+Ch] [ebp-ACh]
  int v5; // [esp+10h] [ebp-A8h]
  int v6; // [esp+14h] [ebp-A4h]
  int v7; // [esp+1Ch] [ebp-9Ch]
  int v8; // [esp+20h] [ebp-98h]
  int v9; // [esp+24h] [ebp-94h]
  int v10; // [esp+28h] [ebp-90h]
  int v11; // [esp+2Ch] [ebp-8Ch]
  int v13; // [esp+8Ch] [ebp-2Ch]
  int v14; // [esp+94h] [ebp-24h]
  int v15; // [esp+9Ch] [ebp-1Ch]
  int v16; // [esp+A0h] [ebp-18h]
  int v17; // [esp+A4h] [ebp-14h]
  int i; // [esp+A8h] [ebp-10h]
  int j; // [esp+A8h] [ebp-10h]
  int k; // [esp+A8h] [ebp-10h]

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_793394 + 48))(
             dword_793394,
             *(_DWORD *)(dword_79338C + 8));
  v17 = result;
  if ( !*(_BYTE *)(dword_79338C + 126) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
    if ( result <= 1 )
    {
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 13 )
      {
        result = dword_79338C;
        if ( *(_DWORD *)(dword_79338C + 100) != -1 )
        {
          v15 = *(_DWORD *)(dword_79338C + 8);
          v16 = 0;
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_793394 + 64))(dword_793394);
          switch ( *(_DWORD *)(dword_79338C + 100) )
          {
            case 0:
              v16 = 4;
              goto LABEL_45;
            case 1:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), 3);
              break;
            case 2:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), 2);
              break;
            case 3:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), 1);
              break;
            case 4:
              (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 51) + 176))(*(this + 51), 0);
              break;
            case 5:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), v15 != 2 ? 10 : 7);
              break;
            case 6:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), v15 != 2 ? 9 : 6);
              break;
            case 7:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), v15 != 2 ? 8 : 5);
              break;
            default:
LABEL_45:
              (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), v16);
              break;
          }
          if ( operator new(0x28u) )
            v6 = sub_601110(0, 0, 1, 0, 0);
          else
            v6 = 0;
          sub_5F5D50(v6);
          result = (*(int (__thiscall **)(_DWORD))(**(this + 51) + 116))(*(this + 51));
        }
      }
      else if ( *(_DWORD *)(dword_79338C + 100) != -1 )
      {
        v14 = *(_DWORD *)(dword_79338C + 100);
        v13 = sub_535E50(dword_79338C);
        (*(void (__thiscall **)(_DWORD, int))(**(this + 51) + 176))(*(this + 51), v17 - v14);
        if ( operator new(0x28u) )
          v5 = sub_601110(0, 0, 1, 0, 0);
        else
          v5 = 0;
        sub_5F5D50(v5);
        (*(void (__thiscall **)(_DWORD))(**(this + 51) + 116))(*(this + 51));
        (*(void (__thiscall **)(_DWORD, int))(**(this + 56) + 176))(*(this + 56), v13 - 1 - v14);
        if ( operator new(0x28u) )
          v4 = sub_601110(0, 0, 1, 0, 0);
        else
          v4 = 0;
        sub_5F5D50(v4);
        result = (*(int (__thiscall **)(_DWORD))(**(this + 56) + 116))(*(this + 56));
      }
    }
    else
    {
      result = sub_538440(dword_79338C);
      if ( (_BYTE)result )
      {
        for ( i = 0; i < 5; ++i )
        {
          result = i;
          if ( *(_DWORD *)(dword_79338C + 4 * i + 100) != -1 )
          {
            (*(void (__thiscall **)(_DWORD, int))(**(this + i + 51) + 176))(
              *(this + i + 51),
              *(_DWORD *)(dword_79338C + 4 * i + 100) + 1);
            if ( operator new(0x28u) )
              v11 = sub_601110(0, 0, 1, 0, 0);
            else
              v11 = 0;
            sub_5F5D50(v11);
            (*(void (__thiscall **)(_DWORD))(**(this + i + 51) + 116))(*(this + i + 51));
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + i + 56) + 176))(
              *(this + i + 56),
              *(_DWORD *)(dword_79338C + 4 * i + 100));
            if ( operator new(0x28u) )
              v10 = sub_601110(0, 0, 1, 0, 0);
            else
              v10 = 0;
            sub_5F5D50(v10);
            (*(void (__thiscall **)(_DWORD))(**(this + i + 56) + 116))(*(this + i + 56));
            if ( operator new(0x28u) )
              v9 = sub_601110(0, 0, 1, 0, 0);
            else
              v9 = 0;
            sub_5F5D50(v9);
            result = (*(int (__thiscall **)(_DWORD))(**(this + i + 45) + 116))(*(this + i + 45));
          }
        }
      }
      else
      {
        for ( j = 0; j < 5; ++j )
        {
          if ( *(_DWORD *)(dword_79338C + 4 * j + 100) != -1 )
          {
            if ( *(_DWORD *)(dword_79338C + 4 * j + 100) == 1000 )
            {
              (*(void (__thiscall **)(_DWORD, int))(**(this + j + 56) + 176))(*(this + j + 56), j);
              if ( operator new(0x28u) )
                v8 = sub_601110(0, 0, 1, 0, 0);
              else
                v8 = 0;
              sub_5F5D50(v8);
              (*(void (__thiscall **)(_DWORD))(**(this + j + 56) + 116))(*(this + j + 56));
            }
            else
            {
              (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + j + 51) + 176))(
                *(this + j + 51),
                *(_DWORD *)(dword_79338C + 4 * j + 100));
              if ( operator new(0x28u) )
                v7 = sub_601110(0, 0, 1, 0, 0);
              else
                v7 = 0;
              sub_5F5D50(v7);
              (*(void (__thiscall **)(_DWORD))(**(this + j + 51) + 116))(*(this + j + 51));
            }
            sub_52AEA0(this, j + 1);
          }
          result = j + 1;
        }
      }
    }
  }
  if ( *(int *)(dword_79338C + 120) >= 100 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 48) + 176))(*(this + 48), 0);
    if ( operator new(0x1Cu) )
      v3 = sub_600A70(0);
    else
      v3 = 0;
    sub_5F5D50(v3);
    result = (*(int (__thiscall **)(_DWORD))(**(this + 48) + 116))(*(this + 48));
  }
  if ( *(int *)(dword_79338C + 120) > 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 56))(dword_793394);
    if ( result )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 50) + 176))(*(this + 50), 0);
      result = (*(int (__thiscall **)(_DWORD))(**(this + 50) + 116))(*(this + 50));
    }
  }
  if ( *(_BYTE *)(dword_79338C + 124) )
  {
    for ( k = 0; k < 3; ++k )
    {
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD))(**(this + k + 56) + 112))(*(this + k + 56));
    }
    if ( operator new(0x1Cu) )
      v2 = sub_600A70(0);
    else
      v2 = 0;
    sub_5F5D50(v2);
    return (*(int (__thiscall **)(_DWORD))(**(this + 50) + 116))(*(this + 50));
  }
  return result;
}


//======================================================================
// sub_52DCA0
// entry 0052dca0  size 324  status ok
//======================================================================

int __thiscall sub_52DCA0(void *this)
{
  int result; // eax
  int v3; // [esp+30h] [ebp-4h]

  if ( *(_BYTE *)(dword_79338C + 124) && *(int *)(dword_79338C + 120) >= 100 )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      101013,
      0,
      0,
      10,
      4,
      1.0,
      0.5,
      (int)this + 96);
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             101012,
             0,
             0,
             10,
             22,
             1.0,
             0.5,
             (int)this + 100);
  }
  else
  {
    if ( *(_BYTE *)(dword_79338C + 126) )
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3207370,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
    result = sub_535E70(dword_79338C);
    v3 = result;
    if ( result != -1 )
    {
      if ( result <= 0 )
        v3 = 1;
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               101012,
               0,
               0,
               10,
               v3,
               1.0,
               0.5,
               (int)this + 100);
    }
  }
  return result;
}


//======================================================================
// sub_52DDF0
// entry 0052ddf0  size 867  status ok
//======================================================================

int __thiscall sub_52DDF0(_DWORD **this)
{
  const char *v1; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-120h]
  int j; // [esp+Ch] [ebp-118h]
  signed int v6; // [esp+10h] [ebp-114h]
  _BYTE v7[4]; // [esp+14h] [ebp-110h] BYREF
  int i; // [esp+18h] [ebp-10Ch]
  char Buffer[256]; // [esp+1Ch] [ebp-108h] BYREF
  int v10; // [esp+120h] [ebp-4h]

  v10 = *(_DWORD *)(dword_79338C + 4);
  if ( v10 <= 999999 )
  {
    sprintf(Buffer, "%d", v10);
  }
  else
  {
    v1 = (const char *)sub_630F40("SID_SLOTMACHINES_MAXCREDITS");
    sprintf(Buffer, v1);
  }
  for ( i = 0; i < 6; ++i )
    (*(void (__thiscall **)(_DWORD, const char *))(**(this + i + 29) + 180))(*(this + i + 29), &Source);
  v6 = strlen(Buffer);
  if ( v6 > 6 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\slotmachinedisplay.cpp", 915);
    v6 = 6;
  }
  for ( i = 0; i < v6; ++i )
  {
    v7[0] = Buffer[v6 - 1 - i];
    v7[1] = 0;
    if ( !v7[0] )
      break;
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(this + i + 29) + 180))(*(this + i + 29), v7);
  }
  sprintf(Buffer, "%d", *(_DWORD *)(dword_79338C + 8));
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 35) + 180))(*(this + 35), Buffer);
  result = (*(int (__thiscall **)(_DWORD))(**(this + 35) + 116))(*(this + 35));
  if ( !*(_BYTE *)(dword_79338C + 127) )
  {
    if ( (unsigned __int8)sub_538440(dword_79338C) )
    {
      for ( j = 0; j < 3; ++j )
      {
        v4 = *(_DWORD *)(dword_79338C + 8);
        if ( j + 1 > v4 )
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + j + 40) + 176))(*(this + j + 40), 0);
        else
          (*(void (__thiscall **)(_DWORD, int))(**(this + j + 40) + 176))(*(this + j + 40), 1);
      }
    }
    sub_52AC20(this);
    if ( (unsigned __int8)sub_536150(dword_79338C) )
    {
      result = *(unsigned __int8 *)(dword_79338C + 125);
      if ( *(_BYTE *)(dword_79338C + 125) )
      {
        *(_BYTE *)(dword_79338C + 125) = 0;
        sub_5F5D50(0);
        return (*(int (__thiscall **)(_DWORD))(**(this + 49) + 112))(*(this + 49));
      }
    }
    else
    {
      return sub_52E2B0(this, v4);
    }
  }
  return result;
}


//======================================================================
// sub_52E160
// entry 0052e160  size 329  status ok
//======================================================================

signed int __thiscall sub_52E160(_DWORD **this)
{
  const char *v1; // eax
  signed int result; // eax
  int v4; // [esp+4h] [ebp-7Ch]
  _BYTE v5[4]; // [esp+8h] [ebp-78h] BYREF
  int i; // [esp+Ch] [ebp-74h]
  char Buffer[108]; // [esp+10h] [ebp-70h] BYREF

  if ( *(int *)(dword_79338C + 120) <= 9999 )
  {
    sprintf(Buffer, "%d", *(_DWORD *)(dword_79338C + 120));
  }
  else
  {
    v1 = (const char *)sub_630F40("SID_SLOTMACHINES_PAYOUTMAX");
    sprintf(Buffer, v1);
  }
  for ( i = 0; i < 4; ++i )
    (*(void (__thiscall **)(_DWORD, const char *))(**(this + i + 36) + 180))(*(this + i + 36), &Source);
  result = strlen(Buffer);
  v4 = result;
  if ( result > 4 )
  {
    result = sub_5E9F20((char)"false", "..\\Casino\\slotmachinedisplay.cpp", 981);
    v4 = 4;
  }
  for ( i = 0; i < v4; ++i )
  {
    result = v4 - 1 - i;
    v5[0] = Buffer[result];
    v5[1] = 0;
    if ( !v5[0] )
      break;
    result = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(this + i + 36) + 180))(*(this + i + 36), v5);
  }
  return result;
}


//======================================================================
// sub_52E2B0
// entry 0052e2b0  size 644  status ok
//======================================================================

int __thiscall sub_52E2B0(int this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-30h]
  int v3; // [esp+8h] [ebp-2Ch]
  void *v5; // [esp+1Ch] [ebp-18h]
  int i; // [esp+24h] [ebp-10h]

  for ( i = 0; i < 5; ++i )
  {
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 204) + 112))(*(_DWORD *)(this + 4 * i + 204));
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 224) + 112))(*(_DWORD *)(this + 4 * i + 224));
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 180) + 112))(*(_DWORD *)(this + 4 * i + 180));
  }
  sub_52ABE0();
  sub_609870(*(_DWORD *)(this + 96), 1);
  sub_609870(*(_DWORD *)(this + 100), 1);
  sub_5F5D50(0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 192) + 112))(*(_DWORD *)(this + 192));
  sub_5F5D50(0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 112))(*(_DWORD *)(this + 200));
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 196) + 176))(*(_DWORD *)(this + 196), 0);
  if ( *(_DWORD *)(dword_7947E0 + 20244) == 10 )
  {
    v5 = operator new(0x1Cu);
    if ( v5 )
      v3 = sub_601690(v5);
    else
      v3 = 0;
    sub_5F5D50(v3);
    *(_DWORD *)(*(_DWORD *)(this + 196) + 376) = 4;
  }
  else
  {
    if ( operator new(0x1Cu) )
      v2 = sub_600A70(0);
    else
      v2 = 0;
    sub_5F5D50(v2);
  }
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 196) + 116))(*(_DWORD *)(this + 196));
  *(_BYTE *)(dword_79338C + 125) = 1;
  return result;
}


//======================================================================
// sub_52E540
// entry 0052e540  size 518  status ok
//======================================================================

int __thiscall sub_52E540(int this, int a2, int a3)
{
  int v4; // [esp+14h] [ebp-20h]
  bool v6; // [esp+27h] [ebp-Dh]

  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 56))(dword_793394) == 1;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793388 + 4) + 4))(*(_DWORD *)(dword_793388 + 4), 1);
  if ( a2 || !a3 )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      101014,
      0,
      0,
      5,
      1,
      1.0,
      0.5,
      0);
    sub_5EAF00(*(_DWORD *)(this + 280));
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 68))(
      *(_DWORD *)(this + 8),
      0,
      *(_DWORD *)(this + 256));
  }
  else
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      101040,
      0,
      0,
      5,
      1,
      1.0,
      0.5,
      0);
    sub_5EAF00(*(_DWORD *)(this + 276));
    if ( v6 )
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 8) + 68))(
        *(_DWORD *)(this + 8),
        50,
        *(_DWORD *)(this + 256));
    else
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 68))(
        *(_DWORD *)(this + 8),
        0,
        *(_DWORD *)(this + 256));
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 176))(*(_DWORD *)(this + 8), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 116))(*(_DWORD *)(this + 8));
  if ( operator new(0x20u) )
    v4 = sub_6010A0(*(_DWORD *)(dword_793388 + 4));
  else
    v4 = 0;
  return sub_5F5D50(v4);
}


//======================================================================
// sub_52E750
// entry 0052e750  size 97  status ok
//======================================================================

_DWORD *__thiscall sub_52E750(_DWORD *this)
{
  sub_5F5BF0(this);
  *this = &SlotMachineArm::`vftable';
  sub_5EB700(1);
  return this;
}


//======================================================================
// sub_52E7E0
// entry 0052e7e0  size 510  status ok
//======================================================================

int __stdcall sub_52E7E0(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+8h] [ebp-1Ch]
  void *v8; // [esp+10h] [ebp-14h]

  result = a1;
  if ( !*(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)(a1 + 24) == 1 )
    {
      result = sub_5F56A0(a1);
      if ( (_BYTE)result )
      {
        result = sub_535E20(dword_79338C);
        if ( (_BYTE)result )
        {
          *(_BYTE *)(a1 + 4) = 1;
          v8 = operator new(0x20u);
          if ( v8 )
            v7 = sub_530F30(v8);
          else
            v7 = 0;
          result = sub_5FC420(v7);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 24) == 4 )
    {
      result = tolower(*(char *)(a1 + 20));
      switch ( result )
      {
        case 'b':
          v5 = sub_5F2A60(3207004, 0);
          result = sub_6026D0(v5);
          if ( (_BYTE)result )
            result = sub_535AE0(1);
          break;
        case 'c':
          v2 = sub_5F2A60(3207002, 0);
          result = sub_6026D0(v2);
          if ( (_BYTE)result )
            result = sub_535AE0(4);
          break;
        case 'm':
          v6 = sub_5F2A60(3207005, 0);
          result = sub_6026D0(v6);
          if ( (_BYTE)result )
            result = sub_535AE0(0);
          break;
        case 'p':
          v4 = sub_5F2A60(3207006, 0);
          result = (unsigned __int8)sub_6026D0(v4);
          if ( (_BYTE)result )
            result = sub_535AE0(2);
          break;
        case 's':
          v3 = sub_5F2A60(3207003, 0);
          result = sub_6026D0(v3);
          if ( (_BYTE)result )
            result = sub_535AE0(3);
          break;
        default:
          return result;
      }
    }
  }
  return result;
}


//======================================================================
// sub_52EA10
// entry 0052ea10  size 602  status ok
//======================================================================

_DWORD *__thiscall sub_52EA10(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+4h] [ebp-4Ch]
  int v9; // [esp+8h] [ebp-48h]
  int v10; // [esp+Ch] [ebp-44h]
  int v11; // [esp+10h] [ebp-40h]
  int v12; // [esp+14h] [ebp-3Ch]
  void *v14; // [esp+1Ch] [ebp-34h]
  void *v15; // [esp+24h] [ebp-2Ch]
  void *v16; // [esp+2Ch] [ebp-24h]
  void *v17; // [esp+34h] [ebp-1Ch]
  void *v18; // [esp+3Ch] [ebp-14h]

  sub_5F5BF0(this);
  *this = off_6C3C9C;
  *(this + 104) = 0;
  *(this + 105) = 0;
  *(this + 106) = 0;
  *(this + 107) = a2;
  v18 = operator new(0x178u);
  if ( v18 )
  {
    sub_5EAAF0(v18);
    v12 = v2;
  }
  else
  {
    v12 = 0;
  }
  *(this + 97) = v12;
  sub_5EAE80(0, 0, 0, 1, -1);
  v17 = operator new(0x178u);
  if ( v17 )
  {
    sub_5EAAF0(v17);
    v11 = v3;
  }
  else
  {
    v11 = 0;
  }
  *(this + 98) = v11;
  sub_5EAE80(0, 0, 0, 1, -1);
  v16 = operator new(0x178u);
  if ( v16 )
  {
    sub_5EAAF0(v16);
    v10 = v4;
  }
  else
  {
    v10 = 0;
  }
  *(this + 99) = v10;
  sub_5EAE80(0, 0, 0, 1, -1);
  v15 = operator new(0x178u);
  if ( v15 )
  {
    sub_5EAAF0(v15);
    v9 = v5;
  }
  else
  {
    v9 = 0;
  }
  *(this + 100) = v9;
  sub_5EAE80(0, 0, 0, 1, -1);
  v14 = operator new(0x178u);
  if ( v14 )
  {
    sub_5EAAF0(v14);
    v8 = v6;
  }
  else
  {
    v8 = 0;
  }
  *(this + 101) = v8;
  sub_5EAE80(0, 0, 0, 1, -1);
  return this;
}


//======================================================================
// sub_52EC70
// entry 0052ec70  size 336  status ok
//======================================================================

int __thiscall sub_52EC70(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))off_6C3C9C;
  if ( *(this + 97) )
    (***(this + 97))(*(this + 97), 1);
  if ( *(this + 98) )
    (***(this + 98))(*(this + 98), 1);
  if ( *(this + 99) )
    (***(this + 99))(*(this + 99), 1);
  if ( *(this + 100) )
    (***(this + 100))(*(this + 100), 1);
  if ( *(this + 101) )
    (***(this + 101))(*(this + 101), 1);
  return sub_5F5C40();
}


//======================================================================
// sub_52EDC0
// entry 0052edc0  size 113  status ok
//======================================================================

int __stdcall sub_52EDC0(int a1)
{
  sub_5EAF00(a1);
  sub_5EAF00(a1);
  sub_5EAF00(a1);
  sub_5EAF00(a1);
  sub_5EAF00(a1);
  return sub_52F3F0(0);
}


//======================================================================
// sub_52EE40
// entry 0052ee40  size 46  status ok
//======================================================================

int __thiscall sub_52EE40(_DWORD *this, int a2, int a3, int a4)
{
  *(this + 104) = a4;
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 68))(this, a2, a3);
}


//======================================================================
// sub_52EE70
// entry 0052ee70  size 595  status ok
//======================================================================

int __thiscall sub_52EE70(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v7; // [esp+4h] [ebp-8h]

  *(_DWORD *)(this + 420) = a2;
  *(_DWORD *)(this + 424) = a3;
  if ( *(char *)(dword_79338C + sub_537880(*(_DWORD *)(this + 428), 2) + 22 * *(_DWORD *)(this + 428) + 21) == -1 )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 392) + 68))(
      *(_DWORD *)(this + 392),
      a2,
      a3 + *(_DWORD *)(this + 416) / 2);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 400) + 68))(
      *(_DWORD *)(this + 400),
      a2,
      a3 + *(_DWORD *)(this + 416) / 2 + *(_DWORD *)(this + 416) + 3);
    v7 = *(_DWORD *)(this + 416) / 2 + *(_DWORD *)(this + 416) + 3 - *(_DWORD *)(this + 416) / 2;
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 84))(*(_DWORD *)(this + 392));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 388) + 68))(*(_DWORD *)(this + 388), a2, v3 - v7);
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 84))(*(_DWORD *)(this + 400));
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 404) + 68))(
             *(_DWORD *)(this + 404),
             a2,
             v7 + v4);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 388) + 68))(
      *(_DWORD *)(this + 388),
      a2,
      a3 - *(_DWORD *)(this + 416));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 392) + 68))(*(_DWORD *)(this + 392), a2, a3);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 396) + 68))(
      *(_DWORD *)(this + 396),
      a2,
      *(_DWORD *)(this + 416) + a3);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 400) + 68))(
      *(_DWORD *)(this + 400),
      a2,
      a3 + 2 * *(_DWORD *)(this + 416));
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 404) + 68))(
             *(_DWORD *)(this + 404),
             a2,
             a3 + 3 * *(_DWORD *)(this + 416));
  }
}


//======================================================================
// sub_52F0D0
// entry 0052f0d0  size 224  status ok
//======================================================================

int __thiscall sub_52F0D0(int this)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 388) + 112))(*(_DWORD *)(this + 388));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
  if ( *(char *)(dword_79338C + sub_537880(*(_DWORD *)(this + 428), 2) + 22 * *(_DWORD *)(this + 428) + 21) == -1 )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 112))(*(_DWORD *)(this + 396));
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 116))(*(_DWORD *)(this + 396));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 116))(*(_DWORD *)(this + 400));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 112))(*(_DWORD *)(this + 404));
}


//======================================================================
// sub_52F1B0
// entry 0052f1b0  size 138  status ok
//======================================================================

int __thiscall sub_52F1B0(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 97) + 112))(*(this + 97));
  (*(void (__thiscall **)(_DWORD))(**(this + 98) + 112))(*(this + 98));
  (*(void (__thiscall **)(_DWORD))(**(this + 99) + 112))(*(this + 99));
  (*(void (__thiscall **)(_DWORD))(**(this + 100) + 112))(*(this + 100));
  return (*(int (__thiscall **)(_DWORD))(**(this + 101) + 112))(*(this + 101));
}


//======================================================================
// sub_52F240
// entry 0052f240  size 130  status ok
//======================================================================

int __thiscall sub_52F240(void *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x30u) )
    v2 = sub_5301D0(this);
  else
    v2 = 0;
  return sub_5F5DF0(v2);
}


//======================================================================
// sub_52F2D0
// entry 0052f2d0  size 130  status ok
//======================================================================

int __thiscall sub_52F2D0(void *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x24u) )
    v2 = sub_530450(this);
  else
    v2 = 0;
  return sub_5F5DF0(v2);
}


//======================================================================
// sub_52F360
// entry 0052f360  size 130  status ok
//======================================================================

int __thiscall sub_52F360(void *this)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x24u) )
    v2 = sub_5309C0(this);
  else
    v2 = 0;
  return sub_5F5DF0(v2);
}


//======================================================================
// sub_52F3F0
// entry 0052f3f0  size 1013  status ok
//======================================================================

int __thiscall sub_52F3F0(int this, char a2)
{
  int result; // eax
  int v4; // [esp+24h] [ebp-28h]
  int v5; // [esp+28h] [ebp-24h]
  int v6; // [esp+2Ch] [ebp-20h]
  int v7; // [esp+30h] [ebp-1Ch]
  int v8; // [esp+34h] [ebp-18h]
  int v9; // [esp+38h] [ebp-14h]
  int v10; // [esp+3Ch] [ebp-10h]
  int v11; // [esp+40h] [ebp-Ch]
  int v12; // [esp+44h] [ebp-8h]
  int v13; // [esp+44h] [ebp-8h]
  int v14; // [esp+44h] [ebp-8h]
  int v15; // [esp+44h] [ebp-8h]
  int v16; // [esp+48h] [ebp-4h]

  v16 = sub_537880(*(_DWORD *)(this + 428), -2);
  v9 = sub_537880(*(_DWORD *)(this + 428), -1);
  v4 = sub_537880(*(_DWORD *)(this + 428), 0);
  v11 = sub_537880(*(_DWORD *)(this + 428), 1);
  v5 = sub_537880(*(_DWORD *)(this + 428), 2);
  v7 = sub_537880(*(_DWORD *)(this + 428), 3);
  v10 = sub_537880(*(_DWORD *)(this + 428), 4);
  v8 = sub_537880(*(_DWORD *)(this + 428), 5);
  v6 = sub_537880(*(_DWORD *)(this + 428), 6);
  if ( *(char *)(dword_79338C + v5 + 22 * *(_DWORD *)(this + 428) + 21) == -1 )
  {
    v12 = *(char *)(dword_79338C + v9 + 22 * *(_DWORD *)(this + 428) + 21);
    *(_BYTE *)(this + 413) = v12 == -1;
    if ( !*(_BYTE *)(this + 413) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 388) + 176))(*(_DWORD *)(this + 388), v12);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 392) + 176))(
      *(_DWORD *)(this + 392),
      *(char *)(dword_79338C + v11 + 22 * *(_DWORD *)(this + 428) + 21));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 112))(*(_DWORD *)(this + 396));
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 400) + 176))(
      *(_DWORD *)(this + 400),
      *(char *)(dword_79338C + v7 + 22 * *(_DWORD *)(this + 428) + 21));
    v13 = *(char *)(dword_79338C + v8 + 22 * *(_DWORD *)(this + 428) + 21);
    result = this;
    *(_BYTE *)(this + 414) = v13 == -1;
    if ( !*(_BYTE *)(this + 414) )
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 404) + 176))(*(_DWORD *)(this + 404), v13);
  }
  else
  {
    v14 = *(char *)(dword_79338C + v16 + 22 * *(_DWORD *)(this + 428) + 21);
    *(_BYTE *)(this + 413) = v14 == -1;
    if ( !*(_BYTE *)(this + 413) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 388) + 176))(*(_DWORD *)(this + 388), v14);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 392) + 176))(
      *(_DWORD *)(this + 392),
      *(char *)(dword_79338C + v4 + 22 * *(_DWORD *)(this + 428) + 21));
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 396) + 176))(
      *(_DWORD *)(this + 396),
      *(char *)(dword_79338C + v5 + 22 * *(_DWORD *)(this + 428) + 21));
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 400) + 176))(
      *(_DWORD *)(this + 400),
      *(char *)(dword_79338C + v10 + 22 * *(_DWORD *)(this + 428) + 21));
    v15 = *(char *)(dword_79338C + v6 + 22 * *(_DWORD *)(this + 428) + 21);
    result = this;
    *(_BYTE *)(this + 414) = v15 == -1;
    if ( !*(_BYTE *)(this + 414) )
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 404) + 176))(*(_DWORD *)(this + 404), v15);
  }
  if ( a2 )
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             101011,
             0,
             0,
             5,
             1,
             1.0,
             0.5,
             0);
  return result;
}


//======================================================================
// sub_52F7F0
// entry 0052f7f0  size 146  status ok
//======================================================================

_DWORD *__thiscall sub_52F7F0(_DWORD *this, int a2)
{
  sub_600A70(a2);
  *this = &CycleCashOut::`vftable';
  (*(void (__cdecl **)(int))(*(_DWORD *)dword_162EE84 + 128))(101000);
  return this;
}


//======================================================================
// sub_52F8B0
// entry 0052f8b0  size 70  status ok
//======================================================================

int __thiscall sub_52F8B0(_DWORD **this, int a2, int a3)
{
  sub_6004E0(a2, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 176))(*(this + 1), 0);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 116))(*(this + 1));
}


//======================================================================
// sub_52F900
// entry 0052f900  size 40  status ok
//======================================================================

int __thiscall sub_52F900(_DWORD **this)
{
  sub_600B30(this);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
}


//======================================================================
// sub_52F930
// entry 0052f930  size 411  status ok
//======================================================================

_DWORD *__thiscall sub_52F930(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp-10h] [ebp-40h]
  int v6; // [esp-Ch] [ebp-3Ch]
  int v7; // [esp+4h] [ebp-2Ch]
  int v8; // [esp+8h] [ebp-28h]
  void *v10; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  sub_5FC0D0(0);
  *this = &SpinReelsScript::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    v10 = operator new(0x184u);
    if ( v10 )
      v8 = sub_5F5BF0(v10);
    else
      v8 = 0;
    *(this + i + 8) = v8;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_793394 + 28))(dword_793394);
    v5 = sub_52D1A0(i);
    v1 = sub_52D180((void *)dword_793390);
    sub_5EAE80(v1, v5, v6, 5, -1);
    if ( operator new(0x1Cu) )
      v7 = sub_600A70(0);
    else
      v7 = 0;
    sub_5F5D50(v7);
    v2 = sub_5EB240(*(this + i + 8));
    v3 = sub_62FBF0(v2 + 1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 8) + 176))(*(this + i + 8), v3);
    *((_BYTE *)this + i + 48) = 0;
  }
  *(this + 11) = 0;
  return this;
}


//======================================================================
// sub_52FAD0
// entry 0052fad0  size 200  status ok
//======================================================================

int __thiscall sub_52FAD0(_DWORD *this)
{
  int i; // [esp+14h] [ebp-10h]

  *this = &SpinReelsScript::`vftable';
  *(this + 11) = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + i + 8) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + i + 8))(*(this + i + 8), 1);
    *(this + i + 8) = 0;
  }
  return sub_5FC150();
}


//======================================================================
// sub_52FBA0
// entry 0052fba0  size 1536  status ok
//======================================================================

int __thiscall sub_52FBA0(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+Ch] [ebp-24h]
  int (__thiscall ***v9)(_DWORD, int); // [esp+24h] [ebp-Ch]
  int j; // [esp+28h] [ebp-8h]
  int k; // [esp+28h] [ebp-8h]
  int m; // [esp+28h] [ebp-8h]
  int i; // [esp+2Ch] [ebp-4h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      sub_535FF0(dword_79338C);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 1, 1);
      break;
    case 1:
      for ( i = 0; i < 3; ++i )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793390 + 4 * i + 244) + 112))(*(_DWORD *)(dword_793390 + 4 * i + 244));
        if ( !*(this + i + 8) )
          sub_5E9F20((char)"blurs[i]", "..\\Casino\\slotmachinedisplay.cpp", 1374);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 8) + 116))(*(this + i + 8));
      }
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        101010,
        0,
        0,
        10,
        0,
        1.0,
        0.5,
        dword_793390 + 104);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, 0);
      break;
    case 2:
      v3 = sub_637810(0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 3, 9 * v3);
      break;
    case 3:
      if ( *(this + 11) > 2u )
      {
        sub_5E9F20((char)"0", "..\\Casino\\slotmachinedisplay.cpp", 1395);
      }
      else
      {
        sub_52F3F0(*(_DWORD *)(dword_793390 + 4 * *(this + 11) + 244), 1);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793390 + 4 * *(this + 11) + 244) + 116))(*(_DWORD *)(dword_793390 + 4 * *(this + 11) + 244));
        sub_52F240(*(void **)(dword_793390 + 4 * *(this + 11) + 244));
        if ( !*(this + *(this + 11) + 8) )
          sub_5E9F20((char)"blurs[machineStopped]", "..\\Casino\\slotmachinedisplay.cpp", 1392);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + *(this + 11) + 8) + 112))(*(this + *(this + 11) + 8));
      }
      if ( (int)++*(this + 11) < 3 )
      {
        v4 = sub_637810(0);
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 3, 5 * v4);
      }
      else
      {
        sub_609870(*(_DWORD *)(dword_793390 + 104), 1);
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 2);
      }
      break;
    case 4:
      for ( j = 0; j < 3; ++j )
      {
        if ( *(_DWORD *)(*(_DWORD *)(dword_793390 + 4 * j + 244) + 380) )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
          return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        }
      }
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      break;
    case 5:
      for ( k = 0; k < 3; ++k )
      {
        if ( *(this + k + 8) )
        {
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + k + 8) + 112))(*(this + k + 8), v7);
          v9 = (int (__thiscall ***)(_DWORD, int))*(this + k + 8);
          if ( v9 )
            v7 = (**v9)(v9, 1);
          else
            v7 = 0;
          *(this + k + 8) = 0;
        }
      }
      *(this + 11) = 0;
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 6, 0);
      break;
    case 6:
      if ( *(this + 11) > 2u )
      {
        sub_5E9F20((char)"0", "..\\Casino\\slotmachinedisplay.cpp", 1458);
      }
      else
      {
        if ( *(_DWORD *)(dword_793394 + 4 * *(this + 11) + 8) == 1 )
        {
          sub_52F360(*(void **)(dword_793390 + 4 * *(this + 11) + 244));
          *((_BYTE *)this + *(this + 11) + 48) = 1;
        }
        else if ( *(_DWORD *)(dword_793394 + 4 * *(this + 11) + 8) == -1 )
        {
          sub_52F2D0(*(void **)(dword_793390 + 4 * *(this + 11) + 244));
          *((_BYTE *)this + *(this + 11) + 48) = 1;
        }
        if ( *((_BYTE *)this + *(this + 11) + 48) )
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            3207359,
            0,
            0,
            5,
            1,
            1.0,
            0.5,
            dword_793390 + 112);
      }
      if ( (int)++*(this + 11) < 3 )
      {
        if ( *((_BYTE *)this + *(this + 11) + 47) )
        {
          v5 = sub_637810(0);
          result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 7, 9 * v5 + 2);
        }
        else
        {
          result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 7, 0);
        }
      }
      else
      {
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 8, 2);
      }
      break;
    case 7:
      if ( (unsigned __int8)sub_5F45A0(*(_DWORD *)(dword_793390 + 112)) )
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 7, 2);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 6, 0);
      break;
    case 8:
      for ( m = 0; m < 3; ++m )
      {
        if ( *(_DWORD *)(*(_DWORD *)(dword_793390 + 4 * m + 244) + 380) )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 8);
          return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
        }
      }
      v6 = sub_637810(0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 9, 6 * v6);
      break;
    case 9:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 10, 0);
      break;
    case 10:
      sub_5FC420(0);
      result = sub_535D80(dword_79338C);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_5301D0
// entry 005301d0  size 160  status ok
//======================================================================

_DWORD *__thiscall sub_5301D0(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &ShakeReelScript::`vftable';
  *(this + 8) = a2;
  *(this + 9) = *(_DWORD *)(a2 + 420);
  *(this + 10) = *(_DWORD *)(a2 + 424);
  *(this + 11) = sub_62FBF0(24);
  return this;
}


//======================================================================
// sub_530270
// entry 00530270  size 441  status ok
//======================================================================

int __thiscall sub_530270(_DWORD **this)
{
  int v1; // kr00_4
  int result; // eax

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      if ( (unsigned __int8)sub_637630(dword_162EE84) && sub_637810(0) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(this + 8) + 68))(
          *(this + 8),
          *(this + 9),
          (int)*(this + 10) + (_DWORD)*(this + 11));
        result = ((int (__thiscall *)(_DWORD **, int, int))(*this)[2])(this, 1, 7);
      }
      else
      {
        result = ((int (__thiscall *)(_DWORD **, int, _DWORD))(*this)[2])(this, 4, 0);
      }
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(this + 8) + 68))(
        *(this + 8),
        *(this + 9),
        (int)*(this + 10) - (int)*(this + 11) / 2);
      result = ((int (__thiscall *)(_DWORD **, int, int))(*this)[2])(this, 2, 7);
      break;
    case 2:
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(this + 8) + 68))(
        *(this + 8),
        *(this + 9),
        (int)*(this + 10) + (int)*(this + 11) / 4);
      result = ((int (__thiscall *)(_DWORD **, int, int))(*this)[2])(this, 3, 4);
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(this + 8) + 68))(
        *(this + 8),
        *(this + 9),
        (int)*(this + 10) - (int)*(this + 11) / 8);
      result = ((int (__thiscall *)(_DWORD **, int, int))(*this)[2])(this, 4, 4);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(this + 8) + 68))(*(this + 8), *(this + 9), *(this + 10));
      result = ((int (__thiscall *)(_DWORD **, int, _DWORD))(*this)[2])(this, 5, 0);
      break;
    case 5:
      result = sub_5F5DF0(0);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_530450
// entry 00530450  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_530450(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &MoveReelUpScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_530480
// entry 00530480  size 1308  status ok
//======================================================================

int __thiscall sub_530480(_DWORD *this)
{
  int v1; // kr00_4
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
  int result; // eax
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

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      if ( (unsigned __int8)sub_637630(dword_162EE84) && sub_637810(0) )
      {
        if ( !*(_BYTE *)(*(this + 8) + 414) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 404) + 116))(*(_DWORD *)(*(this + 8) + 404));
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, 0);
      }
      else
      {
        if ( !*(_BYTE *)(*(this + 8) + 414) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 404) + 116))(*(_DWORD *)(*(this + 8) + 404));
        v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 84))(*(_DWORD *)(*(this + 8) + 388));
        v3 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 76))(
               *(_DWORD *)(*(this + 8) + 388),
               v2 - 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 68))(
          *(_DWORD *)(*(this + 8) + 388),
          v3);
        v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 84))(*(_DWORD *)(*(this + 8) + 392));
        v5 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 76))(
               *(_DWORD *)(*(this + 8) + 392),
               v4 - 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 68))(
          *(_DWORD *)(*(this + 8) + 392),
          v5);
        v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 396) + 84))(*(_DWORD *)(*(this + 8) + 396));
        v7 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 76))(
               *(_DWORD *)(*(this + 8) + 396),
               v6 - 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 68))(
          *(_DWORD *)(*(this + 8) + 396),
          v7);
        v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 84))(*(_DWORD *)(*(this + 8) + 400));
        v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 76))(
               *(_DWORD *)(*(this + 8) + 400),
               v8 - 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 68))(
          *(_DWORD *)(*(this + 8) + 400),
          v9);
        v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 404) + 84))(*(_DWORD *)(*(this + 8) + 404));
        v11 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 76))(
                *(_DWORD *)(*(this + 8) + 404),
                v10 - 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 68))(
          *(_DWORD *)(*(this + 8) + 404),
          v11);
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      }
      break;
    case 1:
      v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 84))(*(_DWORD *)(*(this + 8) + 388));
      v14 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 76))(
              *(_DWORD *)(*(this + 8) + 388),
              v13 - 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 68))(*(_DWORD *)(*(this + 8) + 388), v14);
      v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 84))(*(_DWORD *)(*(this + 8) + 392));
      v16 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 76))(
              *(_DWORD *)(*(this + 8) + 392),
              v15 - 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 68))(*(_DWORD *)(*(this + 8) + 392), v16);
      v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 396) + 84))(*(_DWORD *)(*(this + 8) + 396));
      v18 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 76))(
              *(_DWORD *)(*(this + 8) + 396),
              v17 - 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 68))(*(_DWORD *)(*(this + 8) + 396), v18);
      v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 84))(*(_DWORD *)(*(this + 8) + 400));
      v20 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 76))(
              *(_DWORD *)(*(this + 8) + 400),
              v19 - 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 68))(*(_DWORD *)(*(this + 8) + 400), v20);
      v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 404) + 84))(*(_DWORD *)(*(this + 8) + 404));
      v22 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 76))(
              *(_DWORD *)(*(this + 8) + 404),
              v21 - 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 68))(*(_DWORD *)(*(this + 8) + 404), v22);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, 0);
      break;
    case 2:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      break;
    case 3:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 4, 0);
      break;
    case 4:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      break;
    case 5:
      result = sub_5F5DF0(0);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_5309C0
// entry 005309c0  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5309C0(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &MoveReelDownScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_5309F0
// entry 005309f0  size 1308  status ok
//======================================================================

int __thiscall sub_5309F0(_DWORD *this)
{
  int v1; // kr00_4
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
  int result; // eax
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

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      if ( (unsigned __int8)sub_637630(dword_162EE84) && sub_637810(0) )
      {
        if ( !*(_BYTE *)(*(this + 8) + 413) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 116))(*(_DWORD *)(*(this + 8) + 388));
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 1, 0);
      }
      else
      {
        if ( !*(_BYTE *)(*(this + 8) + 413) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 116))(*(_DWORD *)(*(this + 8) + 388));
        v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 84))(*(_DWORD *)(*(this + 8) + 388));
        v3 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 76))(
               *(_DWORD *)(*(this + 8) + 388),
               v2 + 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 68))(
          *(_DWORD *)(*(this + 8) + 388),
          v3);
        v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 84))(*(_DWORD *)(*(this + 8) + 392));
        v5 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 76))(
               *(_DWORD *)(*(this + 8) + 392),
               v4 + 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 68))(
          *(_DWORD *)(*(this + 8) + 392),
          v5);
        v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 396) + 84))(*(_DWORD *)(*(this + 8) + 396));
        v7 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 76))(
               *(_DWORD *)(*(this + 8) + 396),
               v6 + 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 68))(
          *(_DWORD *)(*(this + 8) + 396),
          v7);
        v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 84))(*(_DWORD *)(*(this + 8) + 400));
        v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 76))(
               *(_DWORD *)(*(this + 8) + 400),
               v8 + 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 68))(
          *(_DWORD *)(*(this + 8) + 400),
          v9);
        v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 404) + 84))(*(_DWORD *)(*(this + 8) + 404));
        v11 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 76))(
                *(_DWORD *)(*(this + 8) + 404),
                v10 + 25);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 68))(
          *(_DWORD *)(*(this + 8) + 404),
          v11);
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      }
      break;
    case 1:
      v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 388) + 84))(*(_DWORD *)(*(this + 8) + 388));
      v14 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 76))(
              *(_DWORD *)(*(this + 8) + 388),
              v13 + 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 388) + 68))(*(_DWORD *)(*(this + 8) + 388), v14);
      v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 392) + 84))(*(_DWORD *)(*(this + 8) + 392));
      v16 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 76))(
              *(_DWORD *)(*(this + 8) + 392),
              v15 + 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 392) + 68))(*(_DWORD *)(*(this + 8) + 392), v16);
      v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 396) + 84))(*(_DWORD *)(*(this + 8) + 396));
      v18 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 76))(
              *(_DWORD *)(*(this + 8) + 396),
              v17 + 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 396) + 68))(*(_DWORD *)(*(this + 8) + 396), v18);
      v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 400) + 84))(*(_DWORD *)(*(this + 8) + 400));
      v20 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 76))(
              *(_DWORD *)(*(this + 8) + 400),
              v19 + 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 400) + 68))(*(_DWORD *)(*(this + 8) + 400), v20);
      v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 8) + 404) + 84))(*(_DWORD *)(*(this + 8) + 404));
      v22 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 76))(
              *(_DWORD *)(*(this + 8) + 404),
              v21 + 25);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 8) + 404) + 68))(*(_DWORD *)(*(this + 8) + 404), v22);
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 2, 0);
      break;
    case 2:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      break;
    case 3:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 4, 0);
      break;
    case 4:
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 5, 0);
      break;
    case 5:
      result = sub_5F5DF0(0);
      break;
    default:
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_530F30
// entry 00530f30  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_530F30(_DWORD *this)
{
  sub_5FC0D0(0);
  *this = &MoveArmScript::`vftable';
  return this;
}


//======================================================================
// sub_530F60
// entry 00530f60  size 494  status ok
//======================================================================

int __thiscall sub_530F60(void *this)
{
  int result; // eax
  int v2; // [esp+18h] [ebp-30h]
  int v3; // [esp+1Ch] [ebp-2Ch]
  int v5; // [esp+38h] [ebp-10h]

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      sub_5FC420(0);
      sub_535D20(dword_79338C);
      result = sub_637630(dword_162EE84);
      if ( (_BYTE)result )
      {
        if ( operator new(0x20u) )
          v2 = sub_6010A0(0);
        else
          v2 = 0;
        return sub_5F5D50(v2);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
    if ( (unsigned __int8)sub_637630(dword_162EE84) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793390 + 4) + 176))(*(_DWORD *)(dword_793390 + 4), 0);
      v5 = sub_637810(0);
      if ( v5 <= 3 )
      {
        if ( !v5 )
          v5 = 1;
      }
      else
      {
        v5 = 3;
      }
      *(_DWORD *)(*(_DWORD *)(dword_793390 + 4) + 376) = v5;
      if ( operator new(0x20u) )
        v3 = sub_600F30(9, this);
      else
        v3 = 0;
      sub_5F5D50(v3);
    }
    else
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 28))(this, 0);
    }
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             101009,
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
// sub_531150
// entry 00531150  size 399  status ok
//======================================================================

_DWORD *__thiscall sub_531150(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v8; // [esp+4h] [ebp-1Ch]
  void *v10; // [esp+Ch] [ebp-14h]

  sub_5F5BF0(this);
  *this = &SlotMachineTextScroller::`vftable';
  *(this + 4) = a2;
  *(this + 5) = a3;
  *(this + 6) = a4;
  *(this + 7) = a5;
  *((_BYTE *)this + 388) = 0;
  v10 = operator new(0x1D0u);
  if ( v10 )
  {
    sub_5EC5A0(v10);
    v8 = v6;
  }
  else
  {
    v8 = 0;
  }
  *(this + 98) = v8;
  sub_5EC8F0(&Source, 53, 128, *(this + 7) - *(this + 5), *(this + 6) + 30, *(this + 5), a6, 48, -1);
  *(this + 102) = -1;
  *((_BYTE *)this + 448) = 0;
  *(this + 103) = 0;
  *(this + 94) = 20;
  *(this + 104) = 0;
  *(this + 105) = 0;
  *(this + 99) = 0;
  *(this + 110) = 0;
  *(this + 111) = 0;
  sub_5F5CC0(this);
  sub_5315F0(this);
  return this;
}


//======================================================================
// sub_5312E0
// entry 005312e0  size 161  status ok
//======================================================================

int __thiscall sub_5312E0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&SlotMachineTextScroller::`vftable';
  if ( *(this + 98) )
  {
    (***(this + 98))(*(this + 98), 1);
    *(this + 98) = 0;
  }
  return sub_5F5C40();
}


//======================================================================
// sub_531390
// entry 00531390  size 599  status ok
//======================================================================

int __fastcall sub_531390(int a1)
{
  int result; // eax
  int v2; // esi

  result = a1;
  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( *(_BYTE *)(a1 + 448) )
    {
      if ( (unsigned __int8)sub_531DB0(a1) )
      {
        if ( CMFCScanliner::channels(*(CMFCScanliner **)(a1 + 392)) )
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 392) + 116))(*(_DWORD *)(a1 + 392));
          ++*(_DWORD *)(a1 + 416);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 392) + 112))(*(_DWORD *)(a1 + 392));
        }
      }
      result = *(_DWORD *)(a1 + 416);
      if ( result >= *(_DWORD *)(a1 + 420) )
      {
        *(_BYTE *)(a1 + 448) = 0;
        *(_DWORD *)(a1 + 416) = 0;
        return sub_531620(a1);
      }
    }
    else
    {
      result = CMediaType::IsFixedSize(dword_162EE84) % 8;
      if ( !result )
      {
        if ( *(_DWORD *)(a1 + 396) == 3 && (v2 = *(_DWORD *)(a1 + 444) + *(_DWORD *)(a1 + 440), v2 > sub_531E30(a1)) )
        {
          sub_531E00(a1);
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 392) + 180))(*(_DWORD *)(a1 + 392), a1 + 424);
          *(_DWORD *)(a1 + 400) = sub_5EF050(*(_DWORD *)(a1 + 392)) + 3;
          sub_5ECC60(*(_DWORD *)(a1 + 400));
          *(_DWORD *)(a1 + 404) = *(_DWORD *)(a1 + 16)
                                + (*(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 400)) / 2;
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 392) + 68))(
            *(_DWORD *)(a1 + 392),
            *(_DWORD *)(a1 + 404),
            *(_DWORD *)(a1 + 20));
          return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 392) + 116))(*(_DWORD *)(a1 + 392));
        }
        else if ( *(_DWORD *)(a1 + 400) + *(_DWORD *)(a1 + 404) <= *(_DWORD *)(a1 + 16) )
        {
          return sub_531620(a1);
        }
        else
        {
          *(_DWORD *)(a1 + 404) -= 10;
          return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 392) + 68))(
                   *(_DWORD *)(a1 + 392),
                   *(_DWORD *)(a1 + 404),
                   *(_DWORD *)(a1 + 20));
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5315F0
// entry 005315f0  size 46  status ok
//======================================================================

int __thiscall sub_5315F0(void *this)
{
  int v2; // [esp+0h] [ebp-4h]

  sub_5EB5A0(this, this);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 392) + 112))(*(_DWORD *)(v2 + 392));
}


//======================================================================
// sub_531620
// entry 00531620  size 950  status ok
//======================================================================

int __thiscall sub_531620(int this)
{
  int v1; // eax

  ++*(_DWORD *)(this + 396);
  if ( *(_BYTE *)(this + 388) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 112))(*(_DWORD *)(this + 392));
    sub_531A10(this);
    *(_DWORD *)(this + 404) = *(_DWORD *)(this + 24) + 10;
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 392) + 68))(
      *(_DWORD *)(this + 392),
      *(_DWORD *)(this + 404),
      *(_DWORD *)(this + 20));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
  }
  else
  {
    switch ( *(_DWORD *)(this + 396) )
    {
      case 1:
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 112))(*(_DWORD *)(this + 392));
        v1 = sub_630F40("SID_SLOTMACHINES_CURRENTJACKPOT_ELLIPSIS");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 392) + 180))(*(_DWORD *)(this + 392), v1);
        *(_DWORD *)(this + 400) = sub_5EF050(*(_DWORD *)(this + 392)) + 3;
        sub_5ECC60(*(_DWORD *)(this + 400));
        *(_DWORD *)(this + 404) = *(_DWORD *)(this + 24) + 10;
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 392) + 68))(
          *(_DWORD *)(this + 392),
          *(_DWORD *)(this + 404),
          *(_DWORD *)(this + 20));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
        break;
      case 2:
        sub_531B50(2, 4);
        break;
      case 3:
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
        switch ( *(_DWORD *)(dword_7947E0 + 20240) )
        {
          case 0:
          case 1:
          case 2:
            *(_DWORD *)(this + 440) = *(_DWORD *)(dword_7947E0 + 20176);
            *(_DWORD *)(this + 444) = 250;
            break;
          case 3:
            *(_DWORD *)(this + 440) = *(_DWORD *)(dword_7947E0 + 20180);
            *(_DWORD *)(this + 444) = 750;
            break;
          case 4:
          case 5:
            *(_DWORD *)(this + 440) = *(_DWORD *)(dword_7947E0 + 20184);
            *(_DWORD *)(this + 444) = 1000;
            break;
          case 6:
          case 7:
            *(_DWORD *)(this + 440) = *(_DWORD *)(dword_7947E0 + 20188);
            *(_DWORD *)(this + 444) = 2500;
            break;
          case 8:
          case 9:
          case 0xA:
          case 0xB:
            *(_DWORD *)(this + 440) = *(_DWORD *)(dword_7947E0 + 20192);
            *(_DWORD *)(this + 444) = 7500;
            break;
          default:
            sub_5E9F20((char)"0", "..\\Casino\\slotmachinedisplay.cpp", 1899);
            break;
        }
        break;
      case 4:
        sub_531A10(this);
        *(_DWORD *)(this + 404) = *(_DWORD *)(this + 24) + 10;
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 392) + 68))(
          *(_DWORD *)(this + 392),
          *(_DWORD *)(this + 404),
          *(_DWORD *)(this + 20));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
        break;
      case 5:
        sub_531A10(this);
        *(_DWORD *)(this + 404) = *(_DWORD *)(this + 24) + 10;
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 392) + 68))(
          *(_DWORD *)(this + 392),
          *(_DWORD *)(this + 404),
          *(_DWORD *)(this + 20));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
        *(_DWORD *)(this + 396) = 0;
        break;
      default:
        *(_DWORD *)(this + 396) = 0;
        break;
    }
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_531A10
// entry 00531a10  size 320  status ok
//======================================================================

int __thiscall sub_531A10(int this)
{
  int v1; // eax
  int v2; // eax

  if ( *(_BYTE *)(this + 388) )
  {
    if ( sub_62FC30(1, 0) )
    {
      *(_DWORD *)(this + 408) = sub_62FBF0(5);
      v1 = sub_630F40(off_724D24[*(_DWORD *)(this + 408)]);
    }
    else
    {
      *(_DWORD *)(this + 408) = sub_62FBF0(6);
      v1 = sub_630F40(off_724D0C[*(_DWORD *)(this + 408)]);
    }
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 392) + 180))(*(_DWORD *)(this + 392), v1);
  }
  else
  {
    *(_DWORD *)(this + 408) = sub_62FBF0(6);
    v2 = sub_630F40(off_724D0C[*(_DWORD *)(this + 408)]);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 392) + 180))(*(_DWORD *)(this + 392), v2);
  }
  *(_DWORD *)(this + 400) = sub_5EF050(*(_DWORD *)(this + 392)) + 3;
  return sub_5ECC60(*(_DWORD *)(this + 400));
}


//======================================================================
// sub_531B50
// entry 00531b50  size 254  status ok
//======================================================================

int __thiscall sub_531B50(int this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  char Buffer[16]; // [esp+8h] [ebp-14h] BYREF

  result = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(_BYTE *)(this + 448) = 1;
      *(_DWORD *)(this + 420) = a3;
      v5 = sub_630F40("SID_SLOTMACHINES_ATTENTION");
      result = sub_531C90(v5);
      *(_DWORD *)(this + 396) = 0;
    }
    else if ( a2 == 2 )
    {
      sub_531E00(this);
      sprintf(Buffer, "%s", (const char *)(this + 424));
      *(_BYTE *)(this + 448) = 1;
      *(_DWORD *)(this + 420) = a3;
      return sub_531C90(Buffer);
    }
  }
  else
  {
    *(_BYTE *)(this + 448) = 1;
    *(_DWORD *)(this + 420) = a3;
    v4 = sub_630F40("SID_SLOTMACHINES_WINNER");
    result = sub_531C90(v4);
    *(_DWORD *)(this + 396) = 0;
  }
  return result;
}


//======================================================================
// sub_531C50
// entry 00531c50  size 60  status ok
//======================================================================

int __thiscall sub_531C50(int this, int a2, int a3)
{
  int result; // eax

  *(_BYTE *)(this + 448) = 1;
  *(_DWORD *)(this + 420) = a3;
  result = sub_531C90(a2);
  *(_DWORD *)(this + 396) = 0;
  return result;
}


//======================================================================
// sub_531C90
// entry 00531c90  size 273  status ok
//======================================================================

int __thiscall sub_531C90(int this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 112))(*(_DWORD *)(this + 392));
  *(_DWORD *)(this + 408) = -1;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 392) + 180))(*(_DWORD *)(this + 392), a2);
  *(_DWORD *)(this + 400) = sub_5EF050(*(_DWORD *)(this + 392)) + 3;
  sub_5ECC60(*(_DWORD *)(this + 400));
  *(_DWORD *)(this + 404) = *(_DWORD *)(this + 16)
                          + (*(_DWORD *)(this + 24) - *(_DWORD *)(this + 16) - *(_DWORD *)(this + 400)) / 2;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 392) + 68))(
    *(_DWORD *)(this + 392),
    *(_DWORD *)(this + 404),
    *(_DWORD *)(this + 20));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 392) + 116))(*(_DWORD *)(this + 392));
  sub_5EB570(this);
  result = CMediaType::IsFixedSize(dword_162EE84);
  *(_DWORD *)(this + 412) = result;
  return result;
}


//======================================================================
// sub_531DB0
// entry 00531db0  size 79  status ok
//======================================================================

char __thiscall sub_531DB0(_DWORD *this)
{
  int IsFixedSize; // eax

  IsFixedSize = CMediaType::IsFixedSize(dword_162EE84);
  if ( abs(IsFixedSize - *(this + 103)) < *(this + 94) )
    return 0;
  *(this + 103) = CMediaType::IsFixedSize(dword_162EE84);
  return 1;
}


//======================================================================
// sub_531E00
// entry 00531e00  size 48  status ok
//======================================================================

int __thiscall sub_531E00(char *this)
{
  int v1; // eax
  char *v3; // [esp-4h] [ebp-8h]

  *(this + 424) = 0;
  v3 = this + 424;
  v1 = sub_531E30(this);
  return sub_6311E0(v1, v3);
}


//======================================================================
// sub_531E30
// entry 00531e30  size 168  status ok
//======================================================================

int sub_531E30()
{
  int result; // eax

  switch ( *(_DWORD *)(dword_7947E0 + 20240) )
  {
    case 0:
    case 1:
    case 2:
      result = *(_DWORD *)(dword_7947E0 + 20176);
      break;
    case 3:
      result = *(_DWORD *)(dword_7947E0 + 20180);
      break;
    case 4:
    case 5:
      result = *(_DWORD *)(dword_7947E0 + 20184);
      break;
    case 6:
    case 7:
      result = *(_DWORD *)(dword_7947E0 + 20188);
      break;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
      result = *(_DWORD *)(dword_7947E0 + 20192);
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\slotmachinedisplay.cpp", 2045);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_531F00
// entry 00531f00  size 494  status ok
//======================================================================

_DWORD *__thiscall sub_531F00(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-2Ch]
  int v8; // [esp+8h] [ebp-28h]
  void *v10; // [esp+10h] [ebp-20h]
  void *v11; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  sub_5F5BF0(this);
  *this = &SlotMachineReaderBoard::`vftable';
  v11 = operator new(0x178u);
  if ( v11 )
  {
    sub_5EAAF0(v11);
    v8 = v4;
  }
  else
  {
    v8 = 0;
  }
  *(this + 117) = v8;
  sub_5EAE80(3207315, a2, a3, a4, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 117) + 116))(*(this + 117));
  for ( i = 0; i < 16; ++i )
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v7 = v5;
    }
    else
    {
      v7 = 0;
    }
    *(this + i + 101) = v7;
    sub_5EAE80(3207316, a2 + 2, a3 + 2, a4 + 1, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 101) + 112))(*(this + i + 101));
  }
  *(this + 118) = 0;
  *((_BYTE *)this + 488) = 0;
  *(this + 119) = 0;
  *(this + 94) = 20;
  *(this + 120) = 0;
  *(this + 121) = 0;
  sub_5F5CC0(this);
  sub_5321D0(this);
  return this;
}


//======================================================================
// sub_5320F0
// entry 005320f0  size 216  status ok
//======================================================================

int __thiscall sub_5320F0(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+20h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&SlotMachineReaderBoard::`vftable';
  if ( *(this + 117) )
    (***(this + 117))(*(this + 117), 1);
  for ( i = 0; i < 16; ++i )
  {
    if ( *(this + i + 101) )
      (***(this + i + 101))(*(this + i + 101), 1);
  }
  return sub_5F5C40();
}


//======================================================================
// sub_5321D0
// entry 005321d0  size 46  status ok
//======================================================================

int __thiscall sub_5321D0(void *this)
{
  int v2; // [esp+0h] [ebp-4h]

  sub_5EB5A0(this, this);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 468) + 112))(*(_DWORD *)(v2 + 468));
}


//======================================================================
// sub_532200
// entry 00532200  size 652  status ok
//======================================================================

signed int __thiscall sub_532200(int this)
{
  int v1; // eax
  signed int result; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-2Ch]
  int v7; // [esp+8h] [ebp-28h]
  int v8; // [esp+Ch] [ebp-24h]
  int v9; // [esp+10h] [ebp-20h]
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+1Ch] [ebp-14h]
  int i; // [esp+20h] [ebp-10h]
  signed int j; // [esp+20h] [ebp-10h]
  signed int k; // [esp+20h] [ebp-10h]
  signed int m; // [esp+20h] [ebp-10h]
  signed int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]
  int v18; // [esp+2Ch] [ebp-4h]

  sub_532570(this);
  v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 76))(*(_DWORD *)(this + 468)) + 2;
  v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 84))(*(_DWORD *)(this + 468)) + 2;
  v16 = strlen((const char *)(this + 388));
  v6 = 0;
  v7 = 0;
  for ( i = 0; i < v16; ++i )
  {
    if ( i > 0 )
      v7 = sub_5F5550(*(_DWORD *)(this + 4 * v6 + 400));
    v1 = sub_532490(*(_BYTE *)(i + this + 388));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * v6 + 404) + 176))(
      *(_DWORD *)(this + 4 * v6 + 404),
      v1);
    v18 += v7;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * v6 + 404) + 68))(
      *(_DWORD *)(this + 4 * v6 + 404),
      v18,
      v17);
    ++v6;
  }
  v8 = 0;
  v11 = sub_5F5550(*(_DWORD *)(this + 468));
  for ( j = 0; j < v16; ++j )
    v8 += sub_5F5550(*(_DWORD *)(this + 4 * j + 404));
  v9 = (v11 - v8) / 2 + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 76))(*(_DWORD *)(this + 468));
  v10 = v9 - (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 76))(*(_DWORD *)(this + 404));
  for ( k = 0; ; ++k )
  {
    result = k;
    if ( k >= v16 )
      break;
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * k + 404) + 84))(*(_DWORD *)(this + 4 * k + 404));
    v4 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 404) + 76))(
           *(_DWORD *)(this + 4 * k + 404),
           v3);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * k + 404) + 68))(
      *(_DWORD *)(this + 4 * k + 404),
      v10 + v4);
  }
  for ( m = 0; m < v16; ++m )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 404) + 116))(*(_DWORD *)(this + 4 * m + 404));
    result = m + 1;
  }
  return result;
}


//======================================================================
// sub_532490
// entry 00532490  size 137  status ok
//======================================================================

int __stdcall sub_532490(char a1)
{
  int result; // eax

  switch ( a1 )
  {
    case '$':
      result = 11;
      break;
    case ',':
      result = 10;
      break;
    case '0':
      result = 0;
      break;
    case '1':
      result = 1;
      break;
    case '2':
      result = 2;
      break;
    case '3':
      result = 3;
      break;
    case '4':
      result = 4;
      break;
    case '5':
      result = 5;
      break;
    case '6':
      result = 6;
      break;
    case '7':
      result = 7;
      break;
    case '8':
      result = 8;
      break;
    case '9':
      result = 9;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_532570
// entry 00532570  size 48  status ok
//======================================================================

int __thiscall sub_532570(char *this)
{
  int v1; // eax
  char *v3; // [esp-4h] [ebp-8h]

  *(this + 388) = 0;
  v3 = this + 388;
  v1 = sub_5325A0(this);
  return sub_6311E0(v1, v3);
}


//======================================================================
// sub_5325A0
// entry 005325a0  size 22  status ok
//======================================================================

int __thiscall sub_5325A0(void *this)
{
  return sub_537260(dword_79338C, this);
}


//======================================================================
// sub_5325C0
// entry 005325c0  size 83  status ok
//======================================================================

char sub_5325C0()
{
  return 0;
}


//======================================================================
// sub_532690
// entry 00532690  size 25  status ok
//======================================================================

unsigned __int8 __thiscall sub_532690(CMFCScanliner **this)
{
  return CMFCScanliner::channels(*(this + 101));
}


//======================================================================
// sub_5326B0
// entry 005326b0  size 72  status ok
//======================================================================

int __thiscall sub_5326B0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 16; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 101) + 112))(*(this + i + 101));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_532700
// entry 00532700  size 94  status ok
//======================================================================

size_t __thiscall sub_532700(const char *this)
{
  size_t result; // eax
  signed int i; // [esp+4h] [ebp-8h]
  signed int v4; // [esp+8h] [ebp-4h]

  result = strlen(this + 388);
  v4 = result;
  for ( i = 0; i < v4; ++i )
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 101) + 116))(*((_DWORD *)this + i + 101));
  return result;
}


//======================================================================
// sub_532760
// entry 00532760  size 418  status ok
//======================================================================

int __thiscall sub_532760(int this)
{
  switch ( ++*(_DWORD *)(this + 472) )
  {
    case 1:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 116))(*(_DWORD *)(this + 468));
      sub_532200(this);
      break;
    case 2:
    case 4:
      return sub_5EB570(this);
    case 3:
      switch ( *(_DWORD *)(dword_7947E0 + 20240) )
      {
        case 0:
        case 1:
        case 2:
          *(_DWORD *)(this + 492) = *(_DWORD *)(dword_7947E0 + 20176);
          *(_DWORD *)(this + 496) = 250;
          break;
        case 3:
          *(_DWORD *)(this + 492) = *(_DWORD *)(dword_7947E0 + 20180);
          *(_DWORD *)(this + 496) = 750;
          break;
        case 4:
        case 5:
          *(_DWORD *)(this + 492) = *(_DWORD *)(dword_7947E0 + 20184);
          *(_DWORD *)(this + 496) = 1000;
          break;
        case 6:
        case 7:
          *(_DWORD *)(this + 492) = *(_DWORD *)(dword_7947E0 + 20188);
          *(_DWORD *)(this + 496) = 2500;
          break;
        case 8:
        case 9:
        case 0xA:
        case 0xB:
          *(_DWORD *)(this + 492) = *(_DWORD *)(dword_7947E0 + 20192);
          *(_DWORD *)(this + 496) = 7500;
          break;
        default:
          sub_5E9F20((char)"0", "..\\Casino\\slotmachinedisplay.cpp", 2296);
          break;
      }
      break;
    case 5:
      *(_DWORD *)(this + 472) = 0;
      break;
    default:
      *(_DWORD *)(this + 472) = 0;
      break;
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_532940
// entry 00532940  size 252  status ok
//======================================================================

signed int __fastcall sub_532940(int a1)
{
  signed int result; // eax
  int v2; // esi

  result = a1;
  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( *(_BYTE *)(a1 + 488) )
    {
      if ( sub_5325C0() )
      {
        if ( sub_532690((CMFCScanliner **)a1) )
        {
          sub_532700((const char *)a1);
          ++*(_DWORD *)(a1 + 480);
        }
        else
        {
          sub_5326B0((_DWORD **)a1);
        }
      }
      result = a1;
      if ( *(_DWORD *)(a1 + 480) >= *(_DWORD *)(a1 + 484) )
      {
        *(_BYTE *)(a1 + 488) = 0;
        *(_DWORD *)(a1 + 480) = 0;
        return sub_532760(a1);
      }
    }
    else
    {
      result = CMediaType::IsFixedSize(dword_162EE84) % 8;
      if ( !result )
      {
        if ( *(_DWORD *)(a1 + 472) == 3
          && (v2 = *(_DWORD *)(a1 + 496) + *(_DWORD *)(a1 + 492), v2 > sub_5325A0((void *)a1)) )
        {
          return sub_532200(a1);
        }
        else
        {
          return sub_532760(a1);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_532B90
// entry 00532b90  size 139  status ok
//======================================================================

_DWORD *__thiscall sub_532B90(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &SlotMachineRoom::`vftable';
  dword_793388 = (int)this;
  dword_79338C = 0;
  dword_793390 = 0;
  dword_793394 = 0;
  sub_5F1AD0(3207001);
  return this;
}


//======================================================================
// sub_532C20
// entry 00532c20  size 308  status ok
//======================================================================

int __thiscall sub_532C20(_DWORD *this)
{
  void *v2; // [esp+18h] [ebp-20h]

  *this = &SlotMachineRoom::`vftable';
  sub_5D13E0(dword_79338C);
  sub_5DE170(dword_7947E0);
  dword_793388 = 0;
  if ( dword_79338C )
    (**(void (__thiscall ***)(int, int))dword_79338C)(dword_79338C, 1);
  dword_79338C = 0;
  if ( dword_793390 )
    (**(void (__thiscall ***)(int, int))dword_793390)(dword_793390, 1);
  dword_793390 = 0;
  v2 = (void *)dword_793394;
  if ( dword_793394 )
  {
    CNoTrackObject::~CNoTrackObject((CNoTrackObject *)dword_793394);
    operator delete(v2);
  }
  dword_793394 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_532D60
// entry 00532d60  size 392  status ok
//======================================================================

int __thiscall sub_532D60(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-38h]
  ATL::CCRTHeap *v3; // [esp+8h] [ebp-34h]
  _AFX_OLE_STATE *v4; // [esp+Ch] [ebp-30h]
  _DWORD *v6; // [esp+18h] [ebp-24h]
  ATL::CCRTHeap *v7; // [esp+20h] [ebp-1Ch]
  _AFX_OLE_STATE *v8; // [esp+28h] [ebp-14h]

  sub_5D8230();
  sub_532EF0();
  v8 = (_AFX_OLE_STATE *)operator new(0x88u);
  if ( v8 )
    v4 = _AFX_OLE_STATE::_AFX_OLE_STATE(v8);
  else
    v4 = 0;
  dword_79338C = (int)v4;
  sub_535960(v4);
  v7 = (ATL::CCRTHeap *)operator new(0x178u);
  if ( v7 )
    v3 = sub_529C00(v7);
  else
    v3 = 0;
  dword_793390 = (int)v3;
  sub_52AFE0((int)v3);
  v6 = operator new(0x20u);
  if ( v6 )
  {
    sub_5FC0D0(0);
    *v6 = &SlotMachineRoomScript::`vftable';
    v2 = v6;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  if ( *((_BYTE *)dword_162EE84 + 37) )
    (*(void (__thiscall **)(_DWORD, int))(**(this + 1) + 4))(*(this + 1), 1);
  else
    (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  return sub_52C7E0(dword_793390);
}


//======================================================================
// sub_532EF0
// entry 00532ef0  size 3482  status ok
//======================================================================

void __cdecl sub_532EF0()
{
  int v0; // [esp+4h] [ebp-174h]
  int v1; // [esp+8h] [ebp-170h]
  int v2; // [esp+Ch] [ebp-16Ch]
  int v3; // [esp+10h] [ebp-168h]
  int v4; // [esp+14h] [ebp-164h]
  int v5; // [esp+18h] [ebp-160h]
  int v6; // [esp+1Ch] [ebp-15Ch]
  int v7; // [esp+20h] [ebp-158h]
  int v8; // [esp+24h] [ebp-154h]
  int v9; // [esp+28h] [ebp-150h]
  int v10; // [esp+2Ch] [ebp-14Ch]
  int v11; // [esp+30h] [ebp-148h]
  int v12; // [esp+34h] [ebp-144h]
  int v13; // [esp+38h] [ebp-140h]
  int v14; // [esp+3Ch] [ebp-13Ch]
  int v15; // [esp+40h] [ebp-138h]
  int v16; // [esp+44h] [ebp-134h]
  int v17; // [esp+48h] [ebp-130h]
  int v18; // [esp+4Ch] [ebp-12Ch]
  int v19; // [esp+50h] [ebp-128h]
  int v20; // [esp+54h] [ebp-124h]
  int v21; // [esp+58h] [ebp-120h]
  int v22; // [esp+5Ch] [ebp-11Ch]
  int v23; // [esp+60h] [ebp-118h]
  int v24; // [esp+64h] [ebp-114h]
  int v25; // [esp+68h] [ebp-110h]
  int v26; // [esp+6Ch] [ebp-10Ch]
  int v27; // [esp+70h] [ebp-108h]
  int v28; // [esp+74h] [ebp-104h]
  ATL::CCRTHeap *v29; // [esp+80h] [ebp-F8h]
  ATL::CCRTHeap *v30; // [esp+88h] [ebp-F0h]
  ATL::CCRTHeap *v31; // [esp+90h] [ebp-E8h]
  ATL::CCRTHeap *v32; // [esp+98h] [ebp-E0h]
  ATL::CCRTHeap *v33; // [esp+A0h] [ebp-D8h]
  ATL::CCRTHeap *v34; // [esp+A8h] [ebp-D0h]
  ATL::CCRTHeap *v35; // [esp+B0h] [ebp-C8h]
  ATL::CCRTHeap *v36; // [esp+B8h] [ebp-C0h]
  ATL::CCRTHeap *v37; // [esp+C0h] [ebp-B8h]
  ATL::CCRTHeap *v38; // [esp+C8h] [ebp-B0h]
  ATL::CCRTHeap *v39; // [esp+D0h] [ebp-A8h]
  ATL::CCRTHeap *v40; // [esp+D8h] [ebp-A0h]
  ATL::CCRTHeap *v41; // [esp+E0h] [ebp-98h]
  ATL::CCRTHeap *v42; // [esp+E8h] [ebp-90h]
  ATL::CCRTHeap *v43; // [esp+F0h] [ebp-88h]
  ATL::CCRTHeap *v44; // [esp+F8h] [ebp-80h]
  ATL::CCRTHeap *v45; // [esp+100h] [ebp-78h]
  ATL::CCRTHeap *v46; // [esp+108h] [ebp-70h]
  ATL::CCRTHeap *v47; // [esp+110h] [ebp-68h]
  ATL::CCRTHeap *v48; // [esp+118h] [ebp-60h]
  ATL::CCRTHeap *v49; // [esp+120h] [ebp-58h]
  ATL::CCRTHeap *v50; // [esp+128h] [ebp-50h]
  ATL::CCRTHeap *v51; // [esp+130h] [ebp-48h]
  ATL::CCRTHeap *v52; // [esp+138h] [ebp-40h]
  ATL::CCRTHeap *v53; // [esp+140h] [ebp-38h]
  ATL::CCRTHeap *v54; // [esp+148h] [ebp-30h]
  ATL::CCRTHeap *v55; // [esp+150h] [ebp-28h]
  ATL::CCRTHeap *v56; // [esp+158h] [ebp-20h]
  ATL::CCRTHeap *v57; // [esp+160h] [ebp-18h]

  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
      sub_5E9F20((char)"false", "..\\Casino\\slotmachineroom.cpp", 180);
      break;
    case 1:
      v56 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v56 )
      {
        ATL::CCRTHeap::CCRTHeap(v56);
        *(_DWORD *)v56 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v56 = &SlotMachineBugOut::`vftable';
        v27 = (int)v56;
      }
      else
      {
        v27 = 0;
      }
      dword_793394 = v27;
      break;
    case 2:
      v52 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v52 )
      {
        ATL::CCRTHeap::CCRTHeap(v52);
        *(_DWORD *)v52 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v52 = &SlotMachineShoes::`vftable';
        v23 = (int)v52;
      }
      else
      {
        v23 = 0;
      }
      dword_793394 = v23;
      break;
    case 3:
      v55 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v55 )
      {
        ATL::CCRTHeap::CCRTHeap(v55);
        *(_DWORD *)v55 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v55 = &SlotMachineCoverTheSpread::`vftable';
        v26 = (int)v55;
      }
      else
      {
        v26 = 0;
      }
      dword_793394 = v26;
      break;
    case 4:
      v51 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v51 )
      {
        ATL::CCRTHeap::CCRTHeap(v51);
        *(_DWORD *)v51 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v51 = &SlotMachineSweetSuccess::`vftable';
        v22 = (int)v51;
      }
      else
      {
        v22 = 0;
      }
      dword_793394 = v22;
      break;
    case 5:
      v50 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v50 )
      {
        ATL::CCRTHeap::CCRTHeap(v50);
        *(_DWORD *)v50 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v50 = &SlotMachineMonster::`vftable';
        v21 = (int)v50;
      }
      else
      {
        v21 = 0;
      }
      dword_793394 = v21;
      break;
    case 6:
      v53 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v53 )
      {
        ATL::CCRTHeap::CCRTHeap(v53);
        *(_DWORD *)v53 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v53 = &SlotMachineFunnyMoney::`vftable';
        v24 = (int)v53;
      }
      else
      {
        v24 = 0;
      }
      dword_793394 = v24;
      break;
    case 7:
      v54 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v54 )
      {
        ATL::CCRTHeap::CCRTHeap(v54);
        *(_DWORD *)v54 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v54 = &SlotMachineFlyingHigh::`vftable';
        v25 = (int)v54;
      }
      else
      {
        v25 = 0;
      }
      dword_793394 = v25;
      break;
    case 8:
      v57 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v57 )
      {
        ATL::CCRTHeap::CCRTHeap(v57);
        *(_DWORD *)v57 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v57 = &SlotMachineAlienInvasion::`vftable';
        v28 = (int)v57;
      }
      else
      {
        v28 = 0;
      }
      dword_793394 = v28;
      break;
    case 9:
      v33 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v33 )
      {
        ATL::CCRTHeap::CCRTHeap(v33);
        *(_DWORD *)v33 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v33 = &SlotMachineProgressiveFruit::`vftable';
        v4 = (int)v33;
      }
      else
      {
        v4 = 0;
      }
      dword_793394 = v4;
      break;
    case 0xB:
      v49 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v49 )
      {
        ATL::CCRTHeap::CCRTHeap(v49);
        *(_DWORD *)v49 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v49 = &SlotMachineSapphireSea::`vftable';
        v20 = (int)v49;
      }
      else
      {
        v20 = 0;
      }
      dword_793394 = v20;
      break;
    case 0xC:
      v48 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v48 )
      {
        ATL::CCRTHeap::CCRTHeap(v48);
        *(_DWORD *)v48 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v48 = &SlotMachineSixShooter::`vftable';
        v19 = (int)v48;
      }
      else
      {
        v19 = 0;
      }
      dword_793394 = v19;
      break;
    case 0xD:
      v46 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v46 )
      {
        ATL::CCRTHeap::CCRTHeap(v46);
        *(_DWORD *)v46 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v46 = &SlotMachineColdCash::`vftable';
        v17 = (int)v46;
      }
      else
      {
        v17 = 0;
      }
      dword_793394 = v17;
      break;
    case 0xE:
      v45 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v45 )
      {
        ATL::CCRTHeap::CCRTHeap(v45);
        *(_DWORD *)v45 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v45 = &SlotMachineShootingStars::`vftable';
        v16 = (int)v45;
      }
      else
      {
        v16 = 0;
      }
      dword_793394 = v16;
      break;
    case 0xF:
      v44 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v44 )
      {
        ATL::CCRTHeap::CCRTHeap(v44);
        *(_DWORD *)v44 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v44 = &SlotMachineWildWheel::`vftable';
        v15 = (int)v44;
      }
      else
      {
        v15 = 0;
      }
      dword_793394 = v15;
      break;
    case 0x10:
      v43 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v43 )
      {
        ATL::CCRTHeap::CCRTHeap(v43);
        *(_DWORD *)v43 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v43 = &SlotMachinePinataPayout::`vftable';
        v14 = (int)v43;
      }
      else
      {
        v14 = 0;
      }
      dword_793394 = v14;
      break;
    case 0x11:
      v42 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v42 )
      {
        ATL::CCRTHeap::CCRTHeap(v42);
        *(_DWORD *)v42 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v42 = &SlotMachineSugarDaddy::`vftable';
        v13 = (int)v42;
      }
      else
      {
        v13 = 0;
      }
      dword_793394 = v13;
      break;
    case 0x12:
      v47 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v47 )
      {
        ATL::CCRTHeap::CCRTHeap(v47);
        *(_DWORD *)v47 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v47 = &SlotMachineEmeraldOasis::`vftable';
        v18 = (int)v47;
      }
      else
      {
        v18 = 0;
      }
      dword_793394 = v18;
      break;
    case 0x13:
      v39 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v39 )
      {
        ATL::CCRTHeap::CCRTHeap(v39);
        *(_DWORD *)v39 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v39 = &SlotMachineEmeraldOasis_3Line::`vftable';
        v10 = (int)v39;
      }
      else
      {
        v10 = 0;
      }
      dword_793394 = v10;
      break;
    case 0x14:
      v38 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v38 )
      {
        ATL::CCRTHeap::CCRTHeap(v38);
        *(_DWORD *)v38 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v38 = &SlotMachineEmeraldOasis_5Line::`vftable';
        v9 = (int)v38;
      }
      else
      {
        v9 = 0;
      }
      dword_793394 = v9;
      break;
    case 0x15:
      v32 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v32 )
      {
        ATL::CCRTHeap::CCRTHeap(v32);
        *(_DWORD *)v32 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v32 = &SlotMachineEmeraldOasis_Prog::`vftable';
        v3 = (int)v32;
      }
      else
      {
        v3 = 0;
      }
      dword_793394 = v3;
      break;
    case 0x16:
      v40 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v40 )
      {
        ATL::CCRTHeap::CCRTHeap(v40);
        *(_DWORD *)v40 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v40 = &SlotMachineRubyRiver::`vftable';
        v11 = (int)v40;
      }
      else
      {
        v11 = 0;
      }
      dword_793394 = v11;
      break;
    case 0x17:
      v37 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v37 )
      {
        ATL::CCRTHeap::CCRTHeap(v37);
        *(_DWORD *)v37 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v37 = &SlotMachineRubyRiver_3Line::`vftable';
        v8 = (int)v37;
      }
      else
      {
        v8 = 0;
      }
      dword_793394 = v8;
      break;
    case 0x18:
      v36 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v36 )
      {
        ATL::CCRTHeap::CCRTHeap(v36);
        *(_DWORD *)v36 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v36 = &SlotMachineRubyRiver_5Line::`vftable';
        v7 = (int)v36;
      }
      else
      {
        v7 = 0;
      }
      dword_793394 = v7;
      break;
    case 0x19:
      v31 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v31 )
      {
        ATL::CCRTHeap::CCRTHeap(v31);
        *(_DWORD *)v31 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v31 = &SlotMachineRubyRiver_Prog::`vftable';
        v2 = (int)v31;
      }
      else
      {
        v2 = 0;
      }
      dword_793394 = v2;
      break;
    case 0x1A:
      v41 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v41 )
      {
        ATL::CCRTHeap::CCRTHeap(v41);
        *(_DWORD *)v41 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v41 = &SlotMachineMargaritaMadness::`vftable';
        v12 = (int)v41;
      }
      else
      {
        v12 = 0;
      }
      dword_793394 = v12;
      break;
    case 0x1B:
      v35 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v35 )
      {
        ATL::CCRTHeap::CCRTHeap(v35);
        *(_DWORD *)v35 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v35 = &SlotMachineMargaritaMadness_3Line::`vftable';
        v6 = (int)v35;
      }
      else
      {
        v6 = 0;
      }
      dword_793394 = v6;
      break;
    case 0x1C:
      v34 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v34 )
      {
        ATL::CCRTHeap::CCRTHeap(v34);
        *(_DWORD *)v34 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v34 = &SlotMachineMargaritaMadness_5Line::`vftable';
        v5 = (int)v34;
      }
      else
      {
        v5 = 0;
      }
      dword_793394 = v5;
      break;
    case 0x1D:
      v30 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v30 )
      {
        ATL::CCRTHeap::CCRTHeap(v30);
        *(_DWORD *)v30 = &LargeFormatSlotMachineUnit::`vftable';
        *(_DWORD *)v30 = &SlotMachineMargaritaMadness_Prog::`vftable';
        v1 = (int)v30;
      }
      else
      {
        v1 = 0;
      }
      dword_793394 = v1;
      break;
    default:
      v29 = (ATL::CCRTHeap *)operator new(0x14u);
      if ( v29 )
      {
        ATL::CCRTHeap::CCRTHeap(v29);
        *(_DWORD *)v29 = &ClassicSlotMachineUnit::`vftable';
        *(_DWORD *)v29 = &SlotMachineAlienInvasion::`vftable';
        v0 = (int)v29;
      }
      else
      {
        v0 = 0;
      }
      dword_793394 = v0;
      break;
  }
  ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)dword_793394);
}


//======================================================================
// sub_533D10
// entry 00533d10  size 31  status ok
//======================================================================

_DWORD *__stdcall sub_533D10(_DWORD *a1, _DWORD *a2)
{
  *a1 = 1;
  *a2 = 1000000000;
  return a1;
}


//======================================================================
// sub_533D30
// entry 00533d30  size 259  status ok
//======================================================================

int __stdcall sub_533D30(int a1, int a2)
{
  switch ( a2 )
  {
    case 100001:
      sub_5FE640(100006, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      if ( byte_795F95 )
        sub_5FE640(-2, 0);
      else
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
// sub_533E40
// entry 00533e40  size 49  status ok
//======================================================================

int __thiscall sub_533E40(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3207001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_533E80
// entry 00533e80  size 140  status ok
//======================================================================

int __stdcall sub_533E80(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 3207002:
      result = sub_535AE0(4);
      break;
    case 3207003:
      result = sub_535AE0(3);
      break;
    case 3207004:
      result = sub_535AE0(1);
      break;
    case 3207005:
      result = sub_535AE0(0);
      break;
    case 3207006:
      result = sub_535AE0(2);
      break;
    default:
      result = sub_5DC7D0(a1, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_533F20
// entry 00533f20  size 28  status ok
//======================================================================

int __stdcall sub_533F20(int a1)
{
  return sub_535AE0(a1);
}


//======================================================================
// sub_533F40
// entry 00533f40  size 84  status ok
//======================================================================

int __stdcall sub_533F40(int a1)
{
  int result; // eax
  int v2[2]; // [esp+8h] [ebp-Ch] BYREF
  int v3; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)(dword_79338C + 4);
  sub_5D0DB0(v2, a1);
  result = v3;
  if ( v3 < *(_DWORD *)(dword_79338C + 4) )
    return sub_52E540(dword_793390, v2[0], v2[1]);
  return result;
}


//======================================================================
// sub_533FA0
// entry 00533fa0  size 22  status ok
//======================================================================

int sub_533FA0()
{
  return sub_52CD40();
}


//======================================================================
// sub_533FC0
// entry 00533fc0  size 164  status ok
//======================================================================

int __stdcall sub_533FC0(int a1)
{
  int *v1; // eax
  int result; // eax
  int v3; // [esp-8h] [ebp-2Ch]
  int v4; // [esp-8h] [ebp-2Ch]
  int v5; // [esp-8h] [ebp-2Ch]
  int v6; // [esp-4h] [ebp-28h]
  int v7; // [esp-4h] [ebp-28h]
  int v8; // [esp-4h] [ebp-28h]
  _BYTE v9[8]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v10[8]; // [esp+14h] [ebp-10h] BYREF
  int v11; // [esp+1Ch] [ebp-8h] BYREF
  int v12; // [esp+20h] [ebp-4h]

  v1 = (int *)sub_5D0C30(v9, *(_DWORD *)(dword_79338C + 8));
  v6 = v1[1];
  v3 = *v1;
  sub_5D0CD0(v10);
  sub_64C630(&v11, v3, v6);
  v7 = v12;
  v4 = v11;
  sub_5DCB00(a1);
  sub_5D5FB0(v4, v7);
  v8 = v12;
  v5 = v11;
  sub_5DCB00(a1);
  sub_5D5CF0(v5, v8);
  sub_5D0A20(0);
  result = dword_79338C;
  *(_DWORD *)(dword_79338C + 8) = 0;
  return result;
}


//======================================================================
// sub_534070
// entry 00534070  size 107  status ok
//======================================================================

int __stdcall sub_534070(int a1)
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
  sub_535940(dword_79338C);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = (_DWORD *)sub_535940(dword_79338C);
  *v5 = v3;
  v5[1] = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_5340E0
// entry 005340e0  size 94  status ok
//======================================================================

int __stdcall sub_5340E0(int a1, int a2)
{
  _DWORD *v2; // eax
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  _BYTE v7[8]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v8[8]; // [esp+Ch] [ebp-10h] BYREF
  __int64 v9; // [esp+14h] [ebp-8h]

  v9 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v9;
  v2 = (_DWORD *)sub_5D0CD0(v8);
  v3 = (int *)sub_64C5C0(v7, *v2, v2[1]);
  v4 = *v3;
  v5 = v3[1];
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(a2 + 4) = v5;
  return a2;
}


//======================================================================
// sub_534140
// entry 00534140  size 21  status ok
//======================================================================

int sub_534140()
{
  return sub_5DCB00(0);
}


