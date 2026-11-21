//======================================================================
// sub_5BC5D0
// entry 005bc5d0  size 65  status ok
//======================================================================

int __cdecl sub_5BC5D0(int a1, int a2, int a3)
{
  return sub_5BC620(a1, a2, a3);
}


//======================================================================
// sub_5BC620
// entry 005bc620  size 206  status ok
//======================================================================

char *__cdecl sub_5BC620(int a1, int a2, char *a3)
{
  int v4; // [esp+0h] [ebp-A0h] BYREF
  void *v5; // [esp+8Ch] [ebp-14h]
  int *v6; // [esp+90h] [ebp-10h]
  int v7; // [esp+9Ch] [ebp-4h]

  v6 = &v4;
  v5 = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    sub_5BC520(a3, a1);
    a3 += 16;
    a1 += 16;
  }
  return a3;
}


//======================================================================
// sub_5BC6F0
// entry 005bc6f0  size 36  status ok
//======================================================================

int __cdecl sub_5BC6F0(_DWORD *a1, _DWORD *a2)
{
  return a1[4] - a2[4];
}


//======================================================================
// sub_5BC720
// entry 005bc720  size 205  status ok
//======================================================================

int __cdecl sub_5BC720(int a1)
{
  int v2; // [esp+4h] [ebp-20h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; ; ++i )
  {
    if ( !dword_758D20[66 * i] )
      return 0;
    if ( dword_758D20[66 * i] == a1 )
      break;
  }
  if ( operator new(0x70u) )
    v2 = sub_5BC7F0();
  else
    v2 = 0;
  *(_DWORD *)(v2 + 80) = &dword_758D20[66 * i];
  return v2;
}


//======================================================================
// sub_5BC7F0
// entry 005bc7f0  size 154  status ok
//======================================================================

_DWORD *__thiscall sub_5BC7F0(_DWORD *this)
{
  char v3; // [esp+67h] [ebp-15h] BYREF
  char *v4; // [esp+68h] [ebp-14h]
  int v5; // [esp+78h] [ebp-4h]

  sub_5C0A00();
  v5 = 0;
  *this = &MLVSlotDisplay_Blossom::`vftable';
  v4 = &v3;
  sub_5BEF20(0);
  *(this + 20) = dword_758D20;
  *(this + 21) = 0;
  *(this + 27) = 0;
  *(this + 26) = 0;
  return this;
}


//======================================================================
// sub_5BC890
// entry 005bc890  size 205  status ok
//======================================================================

int __thiscall sub_5BC890(_DWORD *this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+30h] [ebp-14h]

  *this = &MLVSlotDisplay_Blossom::`vftable';
  if ( *(this + 20) )
    sub_6110A0(*(this + 20) + 104, 0);
  sub_5DD400(0);
  if ( *(this + 27) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*(this + 27);
    if ( v3 )
      (**v3)(v3, 1);
  }
  sub_5BE450(this + 22);
  return sub_5C0B40();
}


//======================================================================
// sub_5BC960
// entry 005bc960  size 1166  status ok
//======================================================================

int __thiscall sub_5BC960(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-D4h]
  int v7; // [esp+8h] [ebp-D0h]
  int v8; // [esp+Ch] [ebp-CCh]
  int v9; // [esp+10h] [ebp-C8h]
  void *v11; // [esp+90h] [ebp-48h]
  void *v12; // [esp+98h] [ebp-40h]
  void *v13; // [esp+A0h] [ebp-38h]
  void *v14; // [esp+A8h] [ebp-30h]
  void (__thiscall ***v15)(_DWORD, int); // [esp+B4h] [ebp-24h]
  int v16; // [esp+B8h] [ebp-20h]
  int v17; // [esp+BCh] [ebp-1Ch]
  int v18; // [esp+C0h] [ebp-18h]
  size_t NumOfElements; // [esp+C8h] [ebp-10h]

  *(this + 2) = *((_DWORD *)dword_162EE84 + 5);
  if ( *(this + 1) )
  {
    v15 = (void (__thiscall ***)(_DWORD, int))*(this + 1);
    if ( v15 )
      (**v15)(v15, 1);
  }
  v14 = operator new(0xE8u);
  if ( v14 )
    v9 = Concurrency::_Order_node_base<enum Concurrency::agent_status>::_Order_node_base<enum Concurrency::agent_status>(v14);
  else
    v9 = 0;
  *(this + 1) = v9;
  sub_5C8C60(a2);
  v2 = sub_630F40("SID_CASINO_VIDEOSLOTS");
  sub_5F38B0(v2);
  sub_5F1B10(*(_BYTE *)(*(this + 20) + 4), *(_BYTE *)(*(this + 20) + 5), *(_BYTE *)(*(this + 20) + 6));
  *(this + 3) = &unk_758AC0;
  for ( NumOfElements = 0; *(int *)(*(_DWORD *)(*(this + 20) + 84) + 20 * NumOfElements) >= 0; ++NumOfElements )
    ;
  sub_5BE4D0(NumOfElements, 0);
  qsort(*(void **)(*(this + 20) + 84), NumOfElements, 0x14u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_5BC6F0);
  if ( *(_DWORD *)(*(this + 20) + 8) )
  {
    v13 = operator new(0x178u);
    if ( v13 )
    {
      sub_5EAAF0(v13);
      v8 = v3;
    }
    else
    {
      v8 = 0;
    }
    v18 = v8;
    sub_5EAE80(*(_DWORD *)(*(this + 20) + 8), 0, 0, 21, -1);
    sub_5EB000(*(_DWORD *)(*(this + 20) + 12));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 176))(v18, *(_DWORD *)(*(this + 20) + 16));
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
  }
  if ( *(_DWORD *)(*(this + 20) + 20) )
  {
    v12 = operator new(0x190u);
    if ( v12 )
      v7 = sub_5F5F50(v12);
    else
      v7 = 0;
    *(this + 27) = v7;
    v17 = *(this + 27);
    sub_5EAE80(*(_DWORD *)(*(this + 20) + 20), 0, 0, 22, -1);
    sub_5EB000(*(_DWORD *)(*(this + 20) + 24));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 176))(v17, *(_DWORD *)(*(this + 20) + 28));
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 116))(v17);
    *(_DWORD *)(*(this + 27) + 376) = 15;
  }
  if ( *(_DWORD *)(*(this + 20) + 32) )
  {
    v11 = operator new(0x178u);
    if ( v11 )
    {
      sub_5EAAF0(v11);
      v6 = v4;
    }
    else
    {
      v6 = 0;
    }
    v16 = v6;
    sub_5EAE80(*(_DWORD *)(*(this + 20) + 32), 0, 0, 25, -1);
    sub_5EB000(*(_DWORD *)(*(this + 20) + 36));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 176))(v16, *(_DWORD *)(*(this + 20) + 40));
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 116))(v16);
  }
  sub_5C10B0();
  sub_5C0F40(*(_DWORD *)(*(this + 20) + 72), *(_DWORD *)(*(_DWORD *)(*(this + 1) + 16) + 8), *(this + 20) + 76, 26);
  sub_5C13E0();
  sub_5C1B60(this);
  sub_5C1D60(1);
  return sub_5C1ED0(this);
}


//======================================================================
// sub_5BCDF0
// entry 005bcdf0  size 179  status ok
//======================================================================

char __thiscall sub_5BCDF0(_DWORD *this, int a2)
{
  int v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+17h] [ebp-5h]

  v6 = 1;
  if ( (unsigned __int8)sub_5C15C0(a2) )
    return 1;
  if ( a2 != 94 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 40))(this, 94)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
  {
    v5 = *(_DWORD *)(*(this + 1) + 8);
    v4 = *(this + 1);
    sub_5C9140(v4);
    if ( v5 <= *(_DWORD *)(v4 + 4) )
    {
      sub_5C8FC0(*(this + 1));
      sub_5BCEB0(1);
    }
  }
  return v6;
}


//======================================================================
// sub_5BCEB0
// entry 005bceb0  size 48  status ok
//======================================================================

int __thiscall sub_5BCEB0(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
  *(this + 21) = a2;
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}


//======================================================================
// sub_5BCEE0
// entry 005bcee0  size 138  status ok
//======================================================================

_DWORD *__thiscall sub_5BCEE0(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx

  v4 = sub_5BE340(a2, a3);
  v5 = (_DWORD *)(*(this + 20) + 44);
  *a4 = *v5;
  a4[1] = v5[1];
  a4[2] = v5[2];
  *a4 += v4 * *(_DWORD *)(*(this + 20) + 56);
  a4[1] += v4 * *(_DWORD *)(*(this + 20) + 60);
  v6 = v4 * *(_DWORD *)(*(this + 20) + 64);
  a4[2] += v6;
  return a4;
}


//======================================================================
// sub_5BCF70
// entry 005bcf70  size 221  status ok
//======================================================================

int __thiscall sub_5BCF70(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-2Ch]
  void *v5; // [esp+Ch] [ebp-24h]
  _DWORD v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  int v7; // [esp+20h] [ebp-10h]
  int v8; // [esp+2Ch] [ebp-4h]

  sub_5BCEE0(this, a2, a3, v6);
  v5 = operator new(0x190u);
  v8 = 0;
  if ( v5 )
    v4 = sub_5F5F50(v5);
  else
    v4 = 0;
  v8 = -1;
  v7 = v4;
  sub_5EAE80(v6[0], 0, 0, 23, a2 + 3234012);
  sub_5EB000(v6[1]);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, v6[2]);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7);
  return v7;
}


//======================================================================
// sub_5BD050
// entry 005bd050  size 3676  status ok
//======================================================================

int __thiscall sub_5BD050(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  double v5; // st7
  int v7; // [esp-20h] [ebp-174h]
  char v8; // [esp+0h] [ebp-154h]
  _DWORD *v9; // [esp+4h] [ebp-150h]
  unsigned int v10; // [esp+Ch] [ebp-148h]
  unsigned int v11; // [esp+14h] [ebp-140h]
  int v12; // [esp+18h] [ebp-13Ch]
  unsigned int v13; // [esp+20h] [ebp-134h]
  int v14; // [esp+24h] [ebp-130h]
  unsigned int v15; // [esp+28h] [ebp-12Ch]
  int v16; // [esp+2Ch] [ebp-128h]
  int v17; // [esp+30h] [ebp-124h]
  _DWORD *v18; // [esp+34h] [ebp-120h]
  int v19; // [esp+38h] [ebp-11Ch]
  _DWORD *v20; // [esp+3Ch] [ebp-118h]
  unsigned int v21; // [esp+40h] [ebp-114h]
  int v22; // [esp+44h] [ebp-110h]
  unsigned int v23; // [esp+48h] [ebp-10Ch]
  int v24; // [esp+4Ch] [ebp-108h]
  _DWORD *v25; // [esp+50h] [ebp-104h]
  double v26; // [esp+54h] [ebp-100h]
  unsigned int v27; // [esp+5Ch] [ebp-F8h]
  int v29; // [esp+68h] [ebp-ECh]
  int v30; // [esp+6Ch] [ebp-E8h]
  int v31; // [esp+78h] [ebp-DCh]
  unsigned int v32; // [esp+84h] [ebp-D0h]
  unsigned int v33; // [esp+90h] [ebp-C4h]
  unsigned int v34; // [esp+9Ch] [ebp-B8h]
  unsigned int v35; // [esp+A8h] [ebp-ACh]
  int v36; // [esp+B4h] [ebp-A0h]
  int v37; // [esp+B8h] [ebp-9Ch]
  _DWORD *v38; // [esp+C0h] [ebp-94h]
  _DWORD *v39; // [esp+DCh] [ebp-78h]
  _DWORD *v40; // [esp+ECh] [ebp-68h]
  _DWORD *v41; // [esp+F4h] [ebp-60h]
  int v42; // [esp+104h] [ebp-50h]
  char v43; // [esp+10Fh] [ebp-45h]
  int v44; // [esp+110h] [ebp-44h]
  int v45; // [esp+114h] [ebp-40h]
  int v46; // [esp+118h] [ebp-3Ch]
  _DWORD v47[3]; // [esp+11Ch] [ebp-38h] BYREF
  unsigned int j; // [esp+128h] [ebp-2Ch]
  _DWORD *v49; // [esp+12Ch] [ebp-28h]
  int v50; // [esp+130h] [ebp-24h]
  unsigned int i; // [esp+134h] [ebp-20h]
  int v52; // [esp+138h] [ebp-1Ch]
  CMFCToolBarsCustomizeDialog *v53; // [esp+13Ch] [ebp-18h]
  int v54; // [esp+140h] [ebp-14h]
  int v55; // [esp+144h] [ebp-10h]
  int v56; // [esp+150h] [ebp-4h]

  sub_5C1550(this);
  switch ( *(this + 21) )
  {
    case 1:
      v52 = *(_DWORD *)(*(this + 20) + 84);
      for ( i = 0; *(int *)(v52 + 20 * i) >= 0; ++i )
      {
        if ( *(this + 23) )
          v27 = (*(this + 24) - *(this + 23)) >> 2;
        else
          v27 = 0;
        if ( i >= v27 )
          invalid_parameter_noinfo();
        v53 = *(CMFCToolBarsCustomizeDialog **)(*(this + 23) + 4 * i);
        if ( !v53 )
          break;
        v41 = operator new(0x34u);
        v56 = 0;
        if ( v41 )
        {
          v36 = *(_DWORD *)(*(this + 20) + 92);
          v26 = (double)*(int *)(*(this + 20) + 88);
          v37 = (int)(1.0 / sub_5C21C0(this) * v26);
          CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
          *v41 = &sciFadeMotion::`vftable';
          v41[11] = v36;
          v41[12] = v37;
          v41[5] = -1;
          v41[4] = -1;
          v25 = v41;
        }
        else
        {
          v25 = 0;
        }
        v56 = -1;
        sub_5F6050(v25);
      }
      if ( *(this + 23) )
        v24 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v24 = 0;
      v35 = v24 - 1;
      if ( *(this + 23) )
        v23 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v23 = 0;
      if ( v35 >= v23 )
        invalid_parameter_noinfo();
      if ( !*(_DWORD *)(*(this + 23) + 4 * v35) )
        sub_5E9F20((char)"mIcons[mIcons.size()-1]", "..\\Casino\\MLVSlotBlossom.cpp", 379);
      sub_610980(*(this + 20) + 232);
      sub_610980(*(this + 20) + 104);
      sub_5DD400(1);
      sub_5BCEB0(this, 2);
      break;
    case 2:
      if ( *(this + 23) )
        v22 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v22 = 0;
      v34 = v22 - 1;
      if ( *(this + 23) )
        v21 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v21 = 0;
      if ( v34 >= v21 )
        invalid_parameter_noinfo();
      v53 = *(CMFCToolBarsCustomizeDialog **)(*(this + 23) + 4 * v34);
      if ( !v53 || !(unsigned __int8)sub_5EB610(v53) )
      {
        sub_62FDE0("Initial shuffle\n", v8);
        sub_5C90C0(*(this + 1));
        v40 = operator new(0x34u);
        v56 = 1;
        if ( v40 )
        {
          CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
          *v40 = &sciFadeMotion::`vftable';
          v40[11] = 16;
          v40[12] = 0;
          v40[5] = -1;
          v40[4] = -1;
          v20 = v40;
        }
        else
        {
          v20 = 0;
        }
        v56 = -1;
        v49 = v20;
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v20 + 12))(v20, 640, 0);
        v56 = 2;
        if ( operator new(0x1Cu) )
          v19 = sub_600B60(0);
        else
          v19 = 0;
        v50 = sub_5F9B40(0, 10, 3234113, 0, 0, 24, v19, 0, 0, 0, 0, 0);
        *(_DWORD *)(v50 + 392) = (int)(sub_5C21C0(this) * 8.0);
        sub_5F6050(v49);
        *(_DWORD *)(v50 + 376) = 30;
        v39 = operator new(0x34u);
        v56 = 3;
        if ( v39 )
        {
          CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
          *v39 = &sciFadeMotion::`vftable';
          v39[11] = 16;
          v39[12] = 0;
          v39[5] = -1;
          v39[4] = -1;
          v18 = v39;
        }
        else
        {
          v18 = 0;
        }
        v56 = -1;
        v49 = v18;
        v1 = sub_5F5590(v50);
        (*(void (__thiscall **)(_DWORD *, int, int))(*v49 + 12))(v49, 640, v1);
        v56 = 4;
        if ( operator new(0x1Cu) )
          v17 = sub_600B60(0);
        else
          v17 = 0;
        v56 = -1;
        v7 = sub_5F5590(v50);
        v2 = sub_5F5550(v50);
        v50 = sub_5F9B40(0, 11, 3234113, -v2 / 2, v7, 24, v17, 0, 0, 1, 0, 0);
        *(_DWORD *)(v50 + 392) = (int)(sub_5C21C0(this) * 8.0);
        sub_5F6050(v49);
        *(_DWORD *)(v50 + 376) = 30;
        sub_5BCEB0(this, 3);
      }
      break;
    case 3:
      if ( *(this + 23) )
        v16 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v16 = 0;
      v33 = v16 - 1;
      if ( *(this + 23) )
        v15 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v15 = 0;
      if ( v33 >= v15 )
        invalid_parameter_noinfo();
      v53 = *(CMFCToolBarsCustomizeDialog **)(*(this + 23) + 4 * v33);
      if ( v53 && (unsigned __int8)sub_5EB610(v53) > 0x78u )
      {
        sub_6110A0(*(this + 20) + 232, 0);
        sub_610E70(*(this + 20) + 104, 0);
      }
      if ( *(this + 23) )
        v14 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v14 = 0;
      v32 = v14 - 1;
      if ( *(this + 23) )
        v13 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v13 = 0;
      if ( v32 >= v13 )
        invalid_parameter_noinfo();
      v53 = *(CMFCToolBarsCustomizeDialog **)(*(this + 23) + 4 * v32);
      if ( !v53 || (unsigned __int8)sub_5EB610(v53) == 255 )
      {
        sub_62FDE0("End\n", v8);
        *(this + 26) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
        sub_5DD400(0);
        sub_5F5D50(0);
        sub_5FBB30(0, 10);
        sub_5FBB30(0, 11);
        if ( (unsigned __int8)sub_5C9740(*(this + 1)) )
        {
          sub_610980(*(this + 20) + 168);
          sub_5BCEB0(this, 4);
        }
        else
        {
          if ( sub_5BE3F0(*(this + 1)) > 0 )
          {
            if ( (unsigned __int8)sub_5C9940(*(this + 1)) )
              sub_610980(*(this + 20) + 200);
            else
              sub_610980(*(this + 20) + 136);
          }
          sub_5BCEB0(this, 0);
        }
      }
      break;
    case 4:
      if ( (unsigned int)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12))
                        - *(this + 26)) > 0xBB8 )
        sub_5C1A80(this);
      break;
    default:
      break;
  }
  v54 = *(_DWORD *)(*(this + 20) + 84);
  v55 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12))
      - *(this + 26);
  for ( j = 0; *(int *)(v54 + 20 * j) >= 0; ++j )
  {
    v44 = *(_DWORD *)(v54 + 20 * j);
    v31 = *(this + 1);
    if ( *(int *)(v31 + 4 * v44 + 24) < 0 )
      v12 = -*(_DWORD *)(v31 + 4 * v44 + 24);
    else
      v12 = *(_DWORD *)(v31 + 4 * v44 + 24);
    v45 = v12 + *(_DWORD *)(v54 + 20 * j + 4);
    sub_5BCEE0(this, v44, v45, v47);
    if ( *(this + 23) )
      v11 = (*(this + 24) - *(this + 23)) >> 2;
    else
      v11 = 0;
    if ( j >= v11 )
      invalid_parameter_noinfo();
    v53 = *(CMFCToolBarsCustomizeDialog **)(*(this + 23) + 4 * j);
    if ( !v53
      || ((v3 = CDrawImage::UsingImageAllocator(v53), v3 != v47[0]) || (v4 = sub_5EB110(v53), v4 != v47[1]))
      && !(unsigned __int8)sub_5EB610(v53) )
    {
      v43 = 0;
      if ( v53 )
      {
        (**(void (__thiscall ***)(CMFCToolBarsCustomizeDialog *, int))v53)(v53, 1);
        v43 = 1;
      }
      v53 = (CMFCToolBarsCustomizeDialog *)sub_5BCF70(this, v44, v45);
      if ( *(this + 23) )
        v10 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v10 = 0;
      if ( j >= v10 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(this + 23) + 4 * j) = v53;
      if ( v43 )
        sub_5EB5D0(0);
    }
    if ( !(unsigned __int8)sub_5EB610(v53) && !CMFCVisualManagerOffice2003::GetHighlightMenuItemColor(v53) )
    {
      v38 = operator new(0x34u);
      v56 = 5;
      if ( v38 )
      {
        v29 = *(_DWORD *)(*(this + 20) + 100);
        v5 = sub_5C21C0(this);
        v30 = (int)(1.0 / v5 * (double)(*(_DWORD *)(v54 + 20 * j + 16) + *(_DWORD *)(*(this + 20) + 96)));
        CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
        *v38 = &sciFadeMotion::`vftable';
        v38[11] = v29;
        v38[12] = v30;
        v38[5] = -1;
        v38[4] = -1;
        v9 = v38;
      }
      else
      {
        v9 = 0;
      }
      v56 = -1;
      sub_5F6050(v9);
    }
    v46 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 44))(this) )
    {
      if ( (int)sub_5C9960(v44, v45) > 0 )
      {
        v42 = sub_5EB240(v53) + 1;
        v46 = v55 / 250 % v42;
        if ( v46 >= v42 )
          v46 = v42 - 1;
      }
    }
    if ( v46 != CMFCToolBarsCustomizeDialog::GetFlags(v53) )
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, int))(*(_DWORD *)v53 + 176))(v53, v46);
    (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, _DWORD, _DWORD))(*(_DWORD *)v53 + 68))(
      v53,
      *(_DWORD *)(v54 + 20 * j + 8),
      *(_DWORD *)(v54 + 20 * j + 12));
  }
  sub_5C1B60(this);
  return sub_5C1D60(0);
}


//======================================================================
// sub_5BDEC0
// entry 005bdec0  size 517  status ok
//======================================================================

int __thiscall sub_5BDEC0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-44h]
  unsigned int v3; // [esp+4h] [ebp-40h]
  unsigned int v4; // [esp+8h] [ebp-3Ch]
  int v5; // [esp+Ch] [ebp-38h]
  unsigned int v6; // [esp+14h] [ebp-30h]
  unsigned int v7; // [esp+18h] [ebp-2Ch]
  int v8; // [esp+1Ch] [ebp-28h]
  unsigned int i; // [esp+3Ch] [ebp-8h]
  unsigned int j; // [esp+3Ch] [ebp-8h]

  if ( *(this + 7) )
    v8 = (*(this + 8) - *(this + 7)) >> 2;
  else
    v8 = 0;
  for ( i = 0; (int)i < v8; ++i )
  {
    if ( *(this + 7) )
      v7 = (*(this + 8) - *(this + 7)) >> 2;
    else
      v7 = 0;
    if ( i >= v7 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 7) + 4 * i) )
    {
      if ( *(this + 7) )
        v6 = (*(this + 8) - *(this + 7)) >> 2;
      else
        v6 = 0;
      if ( i >= v6 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 7) + 4 * i) + 112))(*(_DWORD *)(*(this + 7) + 4 * i));
    }
  }
  if ( *(this + 23) )
    v5 = (*(this + 24) - *(this + 23)) >> 2;
  else
    v5 = 0;
  for ( j = 0; (int)j < v5; ++j )
  {
    if ( *(this + 23) )
      v4 = (*(this + 24) - *(this + 23)) >> 2;
    else
      v4 = 0;
    if ( j >= v4 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 4 * j) )
    {
      if ( *(this + 23) )
        v3 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v3 = 0;
      if ( j >= v3 )
        invalid_parameter_noinfo();
      v2 = *(_DWORD *)(*(this + 23) + 4 * j);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
    }
  }
  return sub_5BCEB0(this, 6);
}


//======================================================================
// sub_5BE0D0
// entry 005be0d0  size 278  status ok
//======================================================================

int __thiscall sub_5BE0D0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-28h]
  unsigned int v3; // [esp+4h] [ebp-24h]
  unsigned int v4; // [esp+8h] [ebp-20h]
  int v5; // [esp+Ch] [ebp-1Ch]
  unsigned int i; // [esp+20h] [ebp-8h]

  sub_5C1B10(this);
  if ( *(this + 23) )
    v5 = (*(this + 24) - *(this + 23)) >> 2;
  else
    v5 = 0;
  for ( i = 0; (int)i < v5; ++i )
  {
    if ( *(this + 23) )
      v4 = (*(this + 24) - *(this + 23)) >> 2;
    else
      v4 = 0;
    if ( i >= v4 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 4 * i) )
    {
      if ( *(this + 23) )
        v3 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v3 = 0;
      if ( i >= v3 )
        invalid_parameter_noinfo();
      v2 = *(_DWORD *)(*(this + 23) + 4 * i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 116))(v2, v2);
    }
  }
  return sub_5BCEB0(this, 0);
}


//======================================================================
// sub_5BE1F0
// entry 005be1f0  size 21  status ok
//======================================================================

int __thiscall sub_5BE1F0(_DWORD *this)
{
  return sub_5BCEB0(this, 5);
}


//======================================================================
// sub_5BE210
// entry 005be210  size 42  status ok
//======================================================================

bool __thiscall sub_5BE210(int *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 21);
  return v2 > 0 && v2 <= 3;
}


//======================================================================
// sub_5BE240
// entry 005be240  size 72  status ok
//======================================================================

bool __thiscall sub_5BE240(int *this)
{
  int v2; // [esp+0h] [ebp-8h]

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 36))(this) )
    return 1;
  v2 = *(this + 21);
  return !v2 || v2 > 3 && v2 <= 5;
}


//======================================================================
// sub_5BE290
// entry 005be290  size 50  status ok
//======================================================================

bool __thiscall sub_5BE290(_DWORD *this)
{
  return !*(this + 21) || *(this + 21) == 4;
}


//======================================================================
// sub_5BE2D0
// entry 005be2d0  size 25  status ok
//======================================================================

bool __thiscall sub_5BE2D0(_DWORD *this)
{
  return *(this + 21) == 5;
}


//======================================================================
// sub_5BE320
// entry 005be320  size 21  status ok
//======================================================================

int __thiscall sub_5BE320(void *this)
{
  return sub_5BE450(this);
}


//======================================================================
// sub_5BE340
// entry 005be340  size 117  status ok
//======================================================================

int __thiscall sub_5BE340(_DWORD *this, int a2, int a3)
{
  int *v5; // [esp+8h] [ebp-8h]

  v5 = (int *)(*(this + 4) + 124 * a2 + 32);
  while ( a3 < 0 )
    a3 += *v5;
  while ( a3 >= *v5 )
    a3 -= *v5;
  return *(_DWORD *)(*(this + 4) + 124 * a2 + 32 + 4 * a3 + 4);
}


//======================================================================
// sub_5BE3F0
// entry 005be3f0  size 88  status ok
//======================================================================

int __thiscall sub_5BE3F0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  sub_5C9140(this);
  for ( i = 0; i < *(_DWORD *)(*(this + 4) + 8); ++i )
  {
    if ( *((_BYTE *)this + i + 52) )
      ++v4;
  }
  return v4;
}


//======================================================================
// sub_5BE450
// entry 005be450  size 127  status ok
//======================================================================

int __thiscall sub_5BE450(int this)
{
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  return this;
}


//======================================================================
// sub_5BE4D0
// entry 005be4d0  size 432  status ok
//======================================================================

int __fastcall sub_5BE4D0(_DWORD *a1, int a2, unsigned int a3, char a4)
{
  int result; // eax
  unsigned int v5; // [esp+0h] [ebp-80h]
  int v6; // [esp+4h] [ebp-7Ch]
  unsigned int v7; // [esp+8h] [ebp-78h]
  unsigned int v9; // [esp+4Ch] [ebp-34h]
  unsigned int v10; // [esp+50h] [ebp-30h]
  unsigned int v11; // [esp+54h] [ebp-2Ch]
  int v12; // [esp+58h] [ebp-28h] BYREF
  _DWORD *v13; // [esp+68h] [ebp-18h]
  unsigned int v14; // [esp+6Ch] [ebp-14h]
  _DWORD *v15; // [esp+70h] [ebp-10h]
  unsigned int v16; // [esp+74h] [ebp-Ch]
  _DWORD *v17; // [esp+78h] [ebp-8h]
  unsigned int v18; // [esp+7Ch] [ebp-4h]

  if ( a1[1] )
    v7 = (a1[2] - a1[1]) >> 2;
  else
    v7 = 0;
  if ( v7 >= a3 )
  {
    result = (int)a1;
    if ( a1[1] )
    {
      result = (a1[2] - a1[1]) >> 2;
      v5 = result;
    }
    else
    {
      v5 = 0;
    }
    if ( a3 < v5 )
    {
      v10 = a1[2];
      v15 = 0;
      if ( !a1 || a1[1] > v10 || v10 > a1[2] )
        invalid_parameter_noinfo();
      v15 = a1;
      v16 = v10;
      v9 = a1[1];
      v13 = 0;
      if ( !a1 || a1[1] > v9 || v9 > a1[2] )
        invalid_parameter_noinfo();
      v13 = a1;
      v14 = v9;
      sub_5BEEB0(a3);
      return (int)sub_5BC490(a1, &v12, (int)a1, v9, (int)v15, v16);
    }
  }
  else
  {
    if ( a1[1] )
      v6 = (a1[2] - a1[1]) >> 2;
    else
      v6 = 0;
    v11 = a1[2];
    v17 = 0;
    if ( !a1 || a1[1] > v11 || v11 > a1[2] )
      invalid_parameter_noinfo();
    v17 = a1;
    v18 = v11;
    return sub_5BE680(a1, v11, a3 - v6, &a4);
  }
  return result;
}


//======================================================================
// sub_5BE680
// entry 005be680  size 1925  status ok
//======================================================================

_DWORD *__thiscall sub_5BE680(_DWORD *this, int a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  int v6; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-240h] BYREF
  int v8; // [esp+10h] [ebp-230h]
  char *v9; // [esp+14h] [ebp-22Ch]
  int v10; // [esp+18h] [ebp-228h]
  int v11; // [esp+1Ch] [ebp-224h]
  unsigned int v12; // [esp+20h] [ebp-220h]
  int v13; // [esp+24h] [ebp-21Ch]
  int v14; // [esp+28h] [ebp-218h]
  int v15; // [esp+2Ch] [ebp-214h]
  int v16; // [esp+30h] [ebp-210h]
  int v17; // [esp+34h] [ebp-20Ch]
  _DWORD *v18; // [esp+38h] [ebp-208h]
  _DWORD *v19; // [esp+3Ch] [ebp-204h]
  _DWORD *v20; // [esp+40h] [ebp-200h]
  _DWORD *i; // [esp+44h] [ebp-1FCh]
  _DWORD *v22; // [esp+4Ch] [ebp-1F4h]
  int v23; // [esp+88h] [ebp-1B8h]
  int v24; // [esp+8Ch] [ebp-1B4h]
  int v25; // [esp+90h] [ebp-1B0h]
  int v26; // [esp+94h] [ebp-1ACh]
  char v27; // [esp+9Bh] [ebp-1A5h]
  int v28; // [esp+9Ch] [ebp-1A4h]
  int v29; // [esp+C0h] [ebp-180h]
  int v30; // [esp+C8h] [ebp-178h]
  char v31; // [esp+CDh] [ebp-173h]
  char v32; // [esp+CEh] [ebp-172h]
  char v33; // [esp+CFh] [ebp-171h]
  int v34; // [esp+D0h] [ebp-170h]
  _DWORD *v35; // [esp+D4h] [ebp-16Ch]
  _DWORD *j; // [esp+D8h] [ebp-168h]
  _DWORD *v37; // [esp+E0h] [ebp-160h]
  int v38; // [esp+110h] [ebp-130h]
  int v39; // [esp+148h] [ebp-F8h]
  void *v40; // [esp+14Ch] [ebp-F4h]
  int v41; // [esp+150h] [ebp-F0h]
  int v42; // [esp+154h] [ebp-ECh]
  int v43; // [esp+158h] [ebp-E8h]
  int v44; // [esp+15Ch] [ebp-E4h]
  char v45; // [esp+162h] [ebp-DEh]
  char v46; // [esp+163h] [ebp-DDh]
  int v47; // [esp+170h] [ebp-D0h]
  char *v48; // [esp+174h] [ebp-CCh]
  int v49; // [esp+178h] [ebp-C8h]
  _DWORD *v50; // [esp+17Ch] [ebp-C4h]
  char v51; // [esp+183h] [ebp-BDh]
  char *v52; // [esp+184h] [ebp-BCh]
  _DWORD *v53; // [esp+188h] [ebp-B8h]
  int v54; // [esp+190h] [ebp-B0h]
  char v55; // [esp+195h] [ebp-ABh]
  char v56; // [esp+196h] [ebp-AAh]
  char v57; // [esp+197h] [ebp-A9h]
  char *v58; // [esp+198h] [ebp-A8h]
  char v59; // [esp+19Fh] [ebp-A1h]
  char *v60; // [esp+1A0h] [ebp-A0h]
  char v61; // [esp+1A5h] [ebp-9Bh]
  char v62; // [esp+1A6h] [ebp-9Ah]
  char v63; // [esp+1A7h] [ebp-99h]
  int v64; // [esp+1A8h] [ebp-98h]
  void *v65; // [esp+1ACh] [ebp-94h]
  _DWORD *v66; // [esp+1B0h] [ebp-90h]
  int v67; // [esp+1B4h] [ebp-8Ch]
  char v68; // [esp+1BBh] [ebp-85h]
  void *v69; // [esp+1BCh] [ebp-84h]
  int v70; // [esp+1C0h] [ebp-80h]
  _DWORD *v71; // [esp+1C8h] [ebp-78h]
  char v72; // [esp+1CDh] [ebp-73h]
  char v73; // [esp+1CEh] [ebp-72h]
  char v74; // [esp+1CFh] [ebp-71h]
  int v75; // [esp+1D0h] [ebp-70h]
  int v76; // [esp+218h] [ebp-28h]
  int v77; // [esp+21Ch] [ebp-24h]
  void *v78; // [esp+220h] [ebp-20h]
  char *v79; // [esp+224h] [ebp-1Ch]
  unsigned int v80; // [esp+228h] [ebp-18h]
  _DWORD v81[2]; // [esp+22Ch] [ebp-14h] BYREF
  int v82; // [esp+23Ch] [ebp-4h]
  unsigned int v83; // [esp+250h] [ebp+10h]

  v81[1] = v7;
  v18 = this;
  v81[0] = *a5;
  if ( *(this + 1) )
    v17 = (v18[3] - v18[1]) >> 2;
  else
    v17 = 0;
  result = (_DWORD *)v17;
  v80 = v17;
  if ( a4 )
  {
    v76 = 0x3FFFFFFF;
    v16 = 0x3FFFFFFF;
    if ( v18[1] )
      v15 = (v18[2] - v18[1]) >> 2;
    else
      v15 = 0;
    if ( v16 - v15 < a4 )
    {
      sub_5BEE10(v7[0], v7[1]);
      JUMPOUT(0x5BE76F);
    }
    if ( v18[1] )
      v14 = (v18[2] - v18[1]) >> 2;
    else
      v14 = 0;
    if ( v80 >= a4 + v14 )
    {
      if ( (v18[2] - (int)a3) >> 2 >= a4 )
      {
        v77 = v18[2];
        v23 = v18[2];
        v24 = v23;
        v25 = v77;
        v26 = v77 - 4 * a4;
        v33 = 0;
        v32 = v31;
        v30 = v77;
        v29 = v26;
        v27 = 0;
        v28 = v23;
        v6 = sub_5BF010(v26, v77, v23);
        v18[2] = v6;
        sub_5C61D0(a3, v77 - 4 * a4, v77);
        v19 = &a3[a4];
        result = a3;
        v20 = a3;
        v22 = v19;
        for ( i = a3; i != v22; ++i )
        {
          *i = v81[0];
          result = i + 1;
        }
      }
      else
      {
        v38 = v18[2];
        sub_5BEFC0(a3, v38, &a3[a4], v18);
        v82 = 2;
        sub_5C5FD0(v18[2], a4 - ((v18[2] - (int)a3) >> 2), v81);
        v82 = -1;
        v18[2] += 4 * a4;
        v34 = v18[2] - 4 * a4;
        v35 = a3;
        v37 = (_DWORD *)v34;
        for ( j = a3; ; ++j )
        {
          result = j;
          if ( j == v37 )
            break;
          *j = v81[0];
        }
      }
    }
    else
    {
      v75 = 0x3FFFFFFF;
      v13 = 0x3FFFFFFF;
      if ( 0x3FFFFFFF - (v80 >> 1) >= v80 )
        v12 = v80 + (v80 >> 1);
      else
        v12 = 0;
      v80 = v12;
      if ( v18[1] )
        v11 = (v18[2] - v18[1]) >> 2;
      else
        v11 = 0;
      if ( v80 < a4 + v11 )
      {
        if ( v18[1] )
          v10 = (v18[2] - v18[1]) >> 2;
        else
          v10 = 0;
        v80 = a4 + v10;
      }
      v78 = (void *)sub_5C6310(v80);
      v79 = (char *)v78;
      v82 = 0;
      v64 = v18[1];
      v65 = v78;
      v66 = a3;
      v67 = v64;
      v74 = 0;
      v73 = v72;
      v71 = a3;
      v70 = v64;
      v68 = 0;
      v69 = v78;
      v9 = (char *)sub_5BF010(v64, a3, v78);
      v79 = v9;
      v58 = v9;
      v63 = 0;
      v62 = v61;
      v59 = 0;
      v60 = v9;
      sub_5C0910(v9, a4, v81);
      v79 += 4 * a4;
      v47 = v18[2];
      v48 = v79;
      v49 = v47;
      v50 = a3;
      v57 = 0;
      v56 = v55;
      v54 = v47;
      v53 = a3;
      v51 = 0;
      v52 = v79;
      sub_5BF010(a3, v47, v79);
      v82 = -1;
      if ( v18[1] )
        v8 = (v18[2] - v18[1]) >> 2;
      else
        v8 = 0;
      v83 = v8 + a4;
      if ( v18[1] )
      {
        v41 = v18[2];
        v42 = v18[1];
        v43 = v41;
        v44 = v42;
        v46 = v45;
        v39 = (v18[3] - v18[1]) >> 2;
        v40 = (void *)v18[1];
        operator delete(v40);
      }
      v18[3] = (char *)v78 + 4 * v80;
      v18[2] = (char *)v78 + 4 * v83;
      result = v18;
      v18[1] = v78;
    }
  }
  return result;
}


//======================================================================
// sub_5BEE10
// entry 005bee10  size 116  status ok
//======================================================================

void __noreturn sub_5BEE10()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5BEEB0
// entry 005beeb0  size 98  status ok
//======================================================================

_DWORD *__thiscall sub_5BEEB0(_DWORD *this, int a2)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( (unsigned int)(*(this + 1) + 4 * a2) > *(_DWORD *)(*this + 8)
    || (unsigned int)(*(this + 1) + 4 * a2) < *(_DWORD *)(*this + 4) )
  {
    invalid_parameter_noinfo();
  }
  *(this + 1) += 4 * a2;
  return this;
}


//======================================================================
// sub_5BEF20
// entry 005bef20  size 152  status ok
//======================================================================

char __thiscall sub_5BEF20(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_5BEE10();
  *(this + 1) = sub_5C6310(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 4 * a2;
  return 1;
}


//======================================================================
// sub_5BEFC0
// entry 005befc0  size 69  status ok
//======================================================================

int __cdecl sub_5BEFC0(int a1, int a2, int a3)
{
  return sub_5BF010(a1, a2, a3);
}


//======================================================================
// sub_5BF010
// entry 005bf010  size 105  status ok
//======================================================================

char *__cdecl sub_5BF010(const void *a1, int a2, char *a3)
{
  if ( (a2 - (int)a1) >> 2 )
    memmove_s(a3, 4 * ((a2 - (int)a1) >> 2), a1, 4 * ((a2 - (int)a1) >> 2));
  return &a3[4 * ((a2 - (int)a1) >> 2)];
}


//======================================================================
// sub_5BF080
// entry 005bf080  size 48  status ok
//======================================================================

_DWORD *__thiscall sub_5BF080(_DWORD *this, int a2, int a3)
{
  sub_6010A0(a3);
  *this = &sciCycleForwardWithHide::`vftable';
  *(this + 8) = -a2;
  return this;
}


//======================================================================
// sub_5BF0B0
// entry 005bf0b0  size 89  status ok
//======================================================================

int __thiscall sub_5BF0B0(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax

  if ( (CMFCToolBarsCustomizeDialog *)CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1)) == *(this + 7) )
    (*((void (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 5))(this);
  else
    sub_600E30(this);
  result = (int)this;
  if ( (int)*(this + 8) >= 0 )
  {
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    if ( result >= (int)*(this + 8) )
      return sub_6005D0(this);
  }
  return result;
}


//======================================================================
// sub_5BF110
// entry 005bf110  size 85  status ok
//======================================================================

int __thiscall sub_5BF110(int this)
{
  if ( *(_DWORD *)(this + 8) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 28))(*(_DWORD *)(this + 8), 0);
  *(_DWORD *)(this + 32) = -*(_DWORD *)(this + 32);
  *(_DWORD *)(this + 32) += CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  *(_BYTE *)(this + 25) = 1;
  return this;
}


//======================================================================
// sub_5BF170
// entry 005bf170  size 153  status ok
//======================================================================

int __cdecl sub_5BF170(int a1)
{
  int v3; // [esp+14h] [ebp-10h]

  v3 = 0;
  if ( a1 >= 3234001 && a1 <= 3234005 )
  {
    if ( operator new(0x2Cu) )
      return sub_5BF340();
    else
      return 0;
  }
  return v3;
}


//======================================================================
// sub_5BF210
// entry 005bf210  size 76  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5BF210(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &MLVSlotBonusGame::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = *((_DWORD *)dword_162EE84 + 5);
  *((_DWORD *)this + 4) = 0;
  return this;
}


//======================================================================
// sub_5BF2A0
// entry 005bf2a0  size 44  status ok
//======================================================================

int __thiscall sub_5BF2A0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( !*(this + 4) )
  {
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8) + 360;
    *(this + 4) = result;
  }
  return result;
}


//======================================================================
// sub_5BF2D0
// entry 005bf2d0  size 104  status ok
//======================================================================

int __fastcall sub_5BF2D0(int a1)
{
  int result; // eax

  result = a1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    if ( result > *(_DWORD *)(a1 + 16) )
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(*(_DWORD *)(a1 + 4));
      if ( a1 )
        return (**(int (__thiscall ***)(int, int))a1)(a1, 1);
    }
  }
  return result;
}


//======================================================================
// sub_5BF340
// entry 005bf340  size 134  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5BF340(ATL::CCRTHeap *this)
{
  char v3; // [esp+67h] [ebp-15h] BYREF
  char *v4; // [esp+68h] [ebp-14h]
  int v5; // [esp+78h] [ebp-4h]

  sub_5BF210(this);
  v5 = 0;
  *(_DWORD *)this = &OneOfNine::`vftable';
  v4 = &v3;
  sub_5C0870(0);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}


//======================================================================
// sub_5BF3D0
// entry 005bf3d0  size 164  status ok
//======================================================================

void __thiscall sub_5BF3D0(CNoTrackObject *this)
{
  int i; // [esp+28h] [ebp-10h]

  *(_DWORD *)this = &OneOfNine::`vftable';
  if ( *((_DWORD *)this + 3) )
  {
    for ( i = 100; i <= 202; ++i )
      sub_6104C0(i, *((_DWORD *)this + 3));
  }
  sub_5BE450((int)this + 28);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5BF480
// entry 005bf480  size 967  status ok
//======================================================================

int __thiscall sub_5BF480(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int IsDefaultCommand; // eax
  int v5; // eax
  int v7; // [esp+0h] [ebp-C4h]
  CMFCRibbonButton *v8; // [esp+4h] [ebp-C0h]
  int v9; // [esp+8h] [ebp-BCh]
  int v10; // [esp+Ch] [ebp-B8h]
  int v12; // [esp+84h] [ebp-40h] BYREF
  void *v13; // [esp+88h] [ebp-3Ch]
  CMFCRibbonButton *v14; // [esp+8Ch] [ebp-38h]
  void *v15; // [esp+90h] [ebp-34h]
  int v16; // [esp+94h] [ebp-30h]
  void *v17; // [esp+98h] [ebp-2Ch]
  int v18; // [esp+9Ch] [ebp-28h]
  CMFCRibbonButton *v19; // [esp+A0h] [ebp-24h]
  int v20; // [esp+A4h] [ebp-20h]
  int v21; // [esp+A8h] [ebp-1Ch]
  int k; // [esp+ACh] [ebp-18h]
  int j; // [esp+B0h] [ebp-14h]
  int i; // [esp+B4h] [ebp-10h]
  int v25; // [esp+C0h] [ebp-4h]

  *(this + 6) = 3;
  if ( a2 < 3234001 || a2 > 3234005 )
    *(this + 5) = &unk_7592D0;
  else
    *(this + 5) = 144 * a2 - 457990848;
  v17 = operator new(0x178u);
  v25 = 0;
  if ( v17 )
  {
    sub_5EAAF0(v17);
    v10 = v2;
  }
  else
  {
    v10 = 0;
  }
  v18 = v10;
  v25 = -1;
  v21 = v10;
  sub_5F9CE0(v10, 100, *(_DWORD *)(*(this + 5) + 20), 0, 0, 100, 0, 255, 0);
  sub_5EB000(*(_DWORD *)(*(this + 5) + 24));
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 176))(v21, *(_DWORD *)(*(this + 5) + 28));
  v15 = operator new(0x178u);
  v25 = 1;
  if ( v15 )
  {
    sub_5EAAF0(v15);
    v9 = v3;
  }
  else
  {
    v9 = 0;
  }
  v16 = v9;
  v25 = -1;
  v20 = v9;
  sub_5F9CE0(
    v9,
    202,
    *(_DWORD *)(*(this + 5) + 32),
    *(_DWORD *)(*(this + 5) + 48),
    *(_DWORD *)(*(this + 5) + 52),
    202,
    0,
    255,
    0);
  sub_5EB000(*(_DWORD *)(*(this + 5) + 36));
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 176))(v20, *(_DWORD *)(*(this + 5) + 40));
  k = 0;
  for ( i = 0; i < *(_DWORD *)(*(this + 5) + 4); ++i )
  {
    for ( j = 0; j < *(_DWORD *)*(this + 5); ++j )
    {
      v13 = operator new(0x1DCu);
      v25 = 2;
      if ( v13 )
        v8 = (CMFCRibbonButton *)Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v7);
      else
        v8 = 0;
      v14 = v8;
      v25 = -1;
      v19 = v8;
      sub_5F9DE0(
        v8,
        k + 101,
        *(_DWORD *)(*(this + 5) + 8),
        *(_DWORD *)(*(this + 5) + 64) + *(_DWORD *)(*(this + 5) + 72) * j,
        *(_DWORD *)(*(this + 5) + 68) + *(_DWORD *)(*(this + 5) + 76) * i,
        k + 101,
        &Source,
        -1,
        -1,
        -1,
        -1,
        0);
      sub_5EB700(*(_BYTE *)(*(this + 5) + 44));
      IsDefaultCommand = CMFCRibbonButton::IsDefaultCommand(v8);
      v5 = sub_62FBF0(IsDefaultCommand);
      sub_5EB000(v5);
      ++k;
    }
  }
  for ( k = 0; *(_DWORD *)(16 * k + *(_DWORD *)(*(this + 5) + 60)) != -100; ++k )
  {
    v12 = *(_DWORD *)(*(this + 5) + 60) + 16 * k;
    sub_5BFD30(&v12);
  }
  return sub_5BFC00(this);
}


//======================================================================
// sub_5BF850
// entry 005bf850  size 875  status ok
//======================================================================

char __thiscall sub_5BF850(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+8h] [ebp-C0h]
  int v4; // [esp+Ch] [ebp-BCh]
  _DWORD *v5; // [esp+10h] [ebp-B8h]
  unsigned int v6; // [esp+14h] [ebp-B4h]
  int v7; // [esp+18h] [ebp-B0h]
  _DWORD *v9; // [esp+88h] [ebp-40h]
  void *v10; // [esp+98h] [ebp-30h]
  _DWORD *v11; // [esp+A0h] [ebp-28h]
  int v12; // [esp+A4h] [ebp-24h]
  char v13; // [esp+B3h] [ebp-15h]
  unsigned int v14; // [esp+B4h] [ebp-14h]

  v13 = 0;
  if ( a2 >= 101 && a2 <= 201 && (int)*(this + 6) > 0 )
  {
    v13 = 1;
    v12 = sub_5FB300(a2);
    if ( !v12 )
      return 1;
    if ( *(this + 8) )
      v7 = (*(this + 9) - *(this + 8)) >> 2;
    else
      v7 = 0;
    v14 = sub_62FBF0(v7 - 1);
    if ( *(this + 8) )
      v6 = (*(this + 9) - *(this + 8)) >> 2;
    else
      v6 = 0;
    if ( v14 >= v6 )
      invalid_parameter_noinfo();
    v11 = *(_DWORD **)(*(this + 8) + 4 * v14);
    sub_5C0790(v14);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 112))(v12);
    v10 = operator new(0x184u);
    if ( v10 )
      v5 = (_DWORD *)sub_5F5BF0(v10);
    else
      v5 = 0;
    if ( operator new(0x28u) )
      v4 = sub_5BFC40(this, v11);
    else
      v4 = 0;
    v9 = operator new(0x24u);
    if ( v9 )
      v3 = sub_5BF080(v9, *(_DWORD *)(*(this + 5) + 56), v4);
    else
      v3 = 0;
    sub_5F9C10(v5, a2, v11[1], 0, 0, a2, v3, v4, 0, 255, 0);
    sub_5EB000(v11[2]);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 176))(v5, v11[3]);
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 140))(v5, v12);
    v5[94] = 20;
    sub_5FBCB0(v12, -1);
    if ( *v11 == -2 )
    {
      sub_610980(*(this + 5) + 80);
    }
    else if ( *v11 == -1 )
    {
      sub_610980(*(this + 5) + 112);
      *(this + 6) = 0;
    }
    else
    {
      --*(this + 6);
      sub_610980(*(this + 5) + 80);
    }
    sub_5BFC00(this);
  }
  return v13;
}


//======================================================================
// sub_5BFBC0
// entry 005bfbc0  size 63  status ok
//======================================================================

int __thiscall sub_5BFBC0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  sub_5C99E0(*a2);
  result = (int)this;
  if ( (int)*(this + 6) <= 0 )
    return sub_5BF2A0(this);
  return result;
}


//======================================================================
// sub_5BFC00
// entry 005bfc00  size 61  status ok
//======================================================================

int __thiscall sub_5BFC00(_DWORD *this)
{
  int result; // eax

  result = sub_5FB2B0(202);
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)result + 176))(result, *(this + 6));
  return result;
}


//======================================================================
// sub_5BFC40
// entry 005bfc40  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_5BFC40(_DWORD *this, int a2, int a3)
{
  sub_5FC0D0(0);
  *this = &OneOfNine::OneOfNineScript::`vftable';
  *(this + 8) = a2;
  *(this + 9) = a3;
  return this;
}


//======================================================================
// sub_5BFC80
// entry 005bfc80  size 88  status ok
//======================================================================

int __thiscall sub_5BFC80(_DWORD **this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( !result )
    return ((int (__thiscall *)(_DWORD **, int))(*this)[1])(this, 1);
  if ( result == 1 )
  {
    sub_5BFBC0(*(this + 8), *(this + 9));
    return ((int (__thiscall *)(_DWORD **, int))(*this)[1])(this, 2);
  }
  return result;
}


//======================================================================
// sub_5BFCE0
// entry 005bfce0  size 19  status ok
//======================================================================

void __thiscall sub_5BFCE0(CNoTrackObject *this)
{
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5BFD30
// entry 005bfd30  size 256  status ok
//======================================================================

int __thiscall sub_5BFD30(_DWORD *this, int a2)
{
  unsigned int v3; // [esp+0h] [ebp-78h]
  unsigned int v4; // [esp+4h] [ebp-74h]
  unsigned int v6; // [esp+30h] [ebp-48h]
  int v7; // [esp+34h] [ebp-44h]
  _BYTE v8[8]; // [esp+68h] [ebp-10h] BYREF
  _DWORD *v9; // [esp+70h] [ebp-8h]
  unsigned int v10; // [esp+74h] [ebp-4h]

  if ( *(this + 1) )
    v4 = (*(this + 2) - *(this + 1)) >> 2;
  else
    v4 = 0;
  if ( *(this + 1) )
    v3 = (*(this + 3) - *(this + 1)) >> 2;
  else
    v3 = 0;
  if ( v4 >= v3 )
  {
    v6 = *(this + 2);
    v9 = 0;
    if ( !this || *(this + 1) > v6 || v6 > *(this + 2) )
      invalid_parameter_noinfo();
    v9 = this;
    v10 = v6;
    return sub_5BFE30(v8, this, v6, a2);
  }
  else
  {
    v7 = *(this + 2);
    sub_5C0910(v7, 1, a2);
    *(this + 2) = v7 + 4;
    return v7 + 4;
  }
}


//======================================================================
// sub_5BFE30
// entry 005bfe30  size 291  status ok
//======================================================================

_DWORD *__thiscall sub_5BFE30(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v5; // eax
  int v7; // [esp+0h] [ebp-30h]
  int v8; // [esp+4h] [ebp-2Ch]
  _DWORD *v10; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v11; // [esp+10h] [ebp-20h]
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  unsigned int v13; // [esp+18h] [ebp-18h]
  _DWORD *v14; // [esp+1Ch] [ebp-14h]
  unsigned int v15; // [esp+20h] [ebp-10h]
  _DWORD *v16; // [esp+24h] [ebp-Ch]
  unsigned int v17; // [esp+28h] [ebp-8h]
  int v18; // [esp+2Ch] [ebp-4h]

  if ( *(this + 1) )
    v8 = (*(this + 2) - *(this + 1)) >> 2;
  else
    v8 = 0;
  if ( v8 )
  {
    v13 = *(this + 1);
    v16 = 0;
    if ( !this || *(this + 1) > v13 || v13 > *(this + 2) )
      invalid_parameter_noinfo();
    v16 = this;
    v17 = v13;
    if ( !a3 || a3 != v16 )
      invalid_parameter_noinfo();
    v7 = (int)(a4 - v17) >> 2;
  }
  else
  {
    v7 = 0;
  }
  v18 = v7;
  sub_5BFF60(a3, a4, 1, a5);
  v12 = *(this + 1);
  v14 = 0;
  if ( !this || *(this + 1) > v12 || v12 > *(this + 2) )
    invalid_parameter_noinfo();
  v14 = this;
  v15 = v12;
  v10 = this;
  v11 = v12;
  sub_5BEEB0(&v10, v18);
  v5 = v11;
  *a2 = v10;
  a2[1] = v5;
  return a2;
}


//======================================================================
// sub_5BFF60
// entry 005bff60  size 1925  status ok
//======================================================================

_DWORD *__thiscall sub_5BFF60(_DWORD *this, int a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  char *v6; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-240h] BYREF
  int v8; // [esp+10h] [ebp-230h]
  char *v9; // [esp+14h] [ebp-22Ch]
  int v10; // [esp+18h] [ebp-228h]
  int v11; // [esp+1Ch] [ebp-224h]
  unsigned int v12; // [esp+20h] [ebp-220h]
  int v13; // [esp+24h] [ebp-21Ch]
  int v14; // [esp+28h] [ebp-218h]
  int v15; // [esp+2Ch] [ebp-214h]
  int v16; // [esp+30h] [ebp-210h]
  int v17; // [esp+34h] [ebp-20Ch]
  _DWORD *v18; // [esp+38h] [ebp-208h]
  char *v19; // [esp+3Ch] [ebp-204h]
  _DWORD *v20; // [esp+40h] [ebp-200h]
  _DWORD *i; // [esp+44h] [ebp-1FCh]
  _DWORD *v22; // [esp+4Ch] [ebp-1F4h]
  char *v23; // [esp+88h] [ebp-1B8h]
  char *v24; // [esp+8Ch] [ebp-1B4h]
  int v25; // [esp+90h] [ebp-1B0h]
  const void *v26; // [esp+94h] [ebp-1ACh]
  char v27; // [esp+9Bh] [ebp-1A5h]
  char *v28; // [esp+9Ch] [ebp-1A4h]
  const void *v29; // [esp+C0h] [ebp-180h]
  int v30; // [esp+C8h] [ebp-178h]
  char v31; // [esp+CDh] [ebp-173h]
  char v32; // [esp+CEh] [ebp-172h]
  char v33; // [esp+CFh] [ebp-171h]
  int v34; // [esp+D0h] [ebp-170h]
  _DWORD *v35; // [esp+D4h] [ebp-16Ch]
  _DWORD *j; // [esp+D8h] [ebp-168h]
  _DWORD *v37; // [esp+E0h] [ebp-160h]
  int v38; // [esp+110h] [ebp-130h]
  int v39; // [esp+148h] [ebp-F8h]
  void *v40; // [esp+14Ch] [ebp-F4h]
  int v41; // [esp+150h] [ebp-F0h]
  int v42; // [esp+154h] [ebp-ECh]
  int v43; // [esp+158h] [ebp-E8h]
  int v44; // [esp+15Ch] [ebp-E4h]
  char v45; // [esp+162h] [ebp-DEh]
  char v46; // [esp+163h] [ebp-DDh]
  int v47; // [esp+170h] [ebp-D0h]
  char *v48; // [esp+174h] [ebp-CCh]
  int v49; // [esp+178h] [ebp-C8h]
  _DWORD *v50; // [esp+17Ch] [ebp-C4h]
  char v51; // [esp+183h] [ebp-BDh]
  char *v52; // [esp+184h] [ebp-BCh]
  _DWORD *v53; // [esp+188h] [ebp-B8h]
  int v54; // [esp+190h] [ebp-B0h]
  char v55; // [esp+195h] [ebp-ABh]
  char v56; // [esp+196h] [ebp-AAh]
  char v57; // [esp+197h] [ebp-A9h]
  char *v58; // [esp+198h] [ebp-A8h]
  char v59; // [esp+19Fh] [ebp-A1h]
  char *v60; // [esp+1A0h] [ebp-A0h]
  char v61; // [esp+1A5h] [ebp-9Bh]
  char v62; // [esp+1A6h] [ebp-9Ah]
  char v63; // [esp+1A7h] [ebp-99h]
  const void *v64; // [esp+1A8h] [ebp-98h]
  void *v65; // [esp+1ACh] [ebp-94h]
  _DWORD *v66; // [esp+1B0h] [ebp-90h]
  const void *v67; // [esp+1B4h] [ebp-8Ch]
  char v68; // [esp+1BBh] [ebp-85h]
  void *v69; // [esp+1BCh] [ebp-84h]
  const void *v70; // [esp+1C0h] [ebp-80h]
  _DWORD *v71; // [esp+1C8h] [ebp-78h]
  char v72; // [esp+1CDh] [ebp-73h]
  char v73; // [esp+1CEh] [ebp-72h]
  char v74; // [esp+1CFh] [ebp-71h]
  int v75; // [esp+1D0h] [ebp-70h]
  int v76; // [esp+218h] [ebp-28h]
  int v77; // [esp+21Ch] [ebp-24h]
  void *v78; // [esp+220h] [ebp-20h]
  char *v79; // [esp+224h] [ebp-1Ch]
  unsigned int v80; // [esp+228h] [ebp-18h]
  _DWORD v81[2]; // [esp+22Ch] [ebp-14h] BYREF
  int v82; // [esp+23Ch] [ebp-4h]
  unsigned int v83; // [esp+250h] [ebp+10h]

  v81[1] = v7;
  v18 = this;
  v81[0] = *a5;
  if ( *(this + 1) )
    v17 = (v18[3] - v18[1]) >> 2;
  else
    v17 = 0;
  result = (_DWORD *)v17;
  v80 = v17;
  if ( a4 )
  {
    v76 = 0x3FFFFFFF;
    v16 = 0x3FFFFFFF;
    if ( v18[1] )
      v15 = (v18[2] - v18[1]) >> 2;
    else
      v15 = 0;
    if ( v16 - v15 < a4 )
    {
      sub_5C06F0(v7[0], v7[1]);
      JUMPOUT(0x5C004F);
    }
    if ( v18[1] )
      v14 = (v18[2] - v18[1]) >> 2;
    else
      v14 = 0;
    if ( v80 >= a4 + v14 )
    {
      if ( (v18[2] - (int)a3) >> 2 >= a4 )
      {
        v77 = v18[2];
        v23 = (char *)v18[2];
        v24 = v23;
        v25 = v77;
        v26 = (const void *)(v77 - 4 * a4);
        v33 = 0;
        v32 = v31;
        v30 = v77;
        v29 = v26;
        v27 = 0;
        v28 = v23;
        v6 = sub_5BF010(v26, v77, v23);
        v18[2] = v6;
        sub_5C61D0(a3, v77 - 4 * a4, v77);
        v19 = (char *)&a3[a4];
        result = a3;
        v20 = a3;
        v22 = v19;
        for ( i = a3; i != v22; ++i )
        {
          *i = v81[0];
          result = i + 1;
        }
      }
      else
      {
        v38 = v18[2];
        sub_5BEFC0((int)a3, v38, (int)&a3[a4]);
        v82 = 2;
        sub_5C5FD0(v18[2], a4 - ((v18[2] - (int)a3) >> 2), v81);
        v82 = -1;
        v18[2] += 4 * a4;
        v34 = v18[2] - 4 * a4;
        v35 = a3;
        v37 = (_DWORD *)v34;
        for ( j = a3; ; ++j )
        {
          result = j;
          if ( j == v37 )
            break;
          *j = v81[0];
        }
      }
    }
    else
    {
      v75 = 0x3FFFFFFF;
      v13 = 0x3FFFFFFF;
      if ( 0x3FFFFFFF - (v80 >> 1) >= v80 )
        v12 = v80 + (v80 >> 1);
      else
        v12 = 0;
      v80 = v12;
      if ( v18[1] )
        v11 = (v18[2] - v18[1]) >> 2;
      else
        v11 = 0;
      if ( v80 < a4 + v11 )
      {
        if ( v18[1] )
          v10 = (v18[2] - v18[1]) >> 2;
        else
          v10 = 0;
        v80 = a4 + v10;
      }
      v78 = (void *)sub_5C6310(v80);
      v79 = (char *)v78;
      v82 = 0;
      v64 = (const void *)v18[1];
      v65 = v78;
      v66 = a3;
      v67 = v64;
      v74 = 0;
      v73 = v72;
      v71 = a3;
      v70 = v64;
      v68 = 0;
      v69 = v78;
      v9 = sub_5BF010(v64, (int)a3, (char *)v78);
      v79 = v9;
      v58 = v9;
      v63 = 0;
      v62 = v61;
      v59 = 0;
      v60 = v9;
      sub_5C0910(v9, a4, v81);
      v79 += 4 * a4;
      v47 = v18[2];
      v48 = v79;
      v49 = v47;
      v50 = a3;
      v57 = 0;
      v56 = v55;
      v54 = v47;
      v53 = a3;
      v51 = 0;
      v52 = v79;
      sub_5BF010(a3, v47, v79);
      v82 = -1;
      if ( v18[1] )
        v8 = (v18[2] - v18[1]) >> 2;
      else
        v8 = 0;
      v83 = v8 + a4;
      if ( v18[1] )
      {
        v41 = v18[2];
        v42 = v18[1];
        v43 = v41;
        v44 = v42;
        v46 = v45;
        v39 = (v18[3] - v18[1]) >> 2;
        v40 = (void *)v18[1];
        operator delete(v40);
      }
      v18[3] = (char *)v78 + 4 * v80;
      v18[2] = (char *)v78 + 4 * v83;
      result = v18;
      v18[1] = v78;
    }
  }
  return result;
}


//======================================================================
// sub_5C06F0
// entry 005c06f0  size 116  status ok
//======================================================================

void __noreturn sub_5C06F0()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5C0790
// entry 005c0790  size 217  status ok
//======================================================================

unsigned int __thiscall sub_5C0790(_DWORD *this, int a2)
{
  unsigned int v4; // [esp+8h] [ebp-5Ch]
  _DWORD *v5; // [esp+40h] [ebp-24h] BYREF
  unsigned int v6; // [esp+44h] [ebp-20h]
  unsigned int v7; // [esp+48h] [ebp-1Ch]
  _DWORD *v8; // [esp+54h] [ebp-10h]
  unsigned int v9; // [esp+58h] [ebp-Ch]
  _DWORD *v10; // [esp+5Ch] [ebp-8h]
  unsigned int v11; // [esp+60h] [ebp-4h]

  v7 = *(this + 1);
  v10 = 0;
  if ( !this || *(this + 1) > v7 || v7 > *(this + 2) )
    invalid_parameter_noinfo();
  v10 = this;
  v11 = v7;
  v5 = this;
  v6 = v7;
  sub_5BEEB0(&v5, a2);
  v8 = v5;
  v9 = v6;
  v4 = v6;
  sub_5C0980(v6 + 4, *(this + 2), v6);
  *(this + 2) -= 4;
  return v4;
}


//======================================================================
// sub_5C0870
// entry 005c0870  size 152  status ok
//======================================================================

char __thiscall sub_5C0870(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_5C06F0();
  *(this + 1) = sub_5C6310(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 4 * a2;
  return 1;
}


//======================================================================
// sub_5C0910
// entry 005c0910  size 106  status ok
//======================================================================

_DWORD *__cdecl sub_5C0910(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *i; // [esp+Ch] [ebp-14h]

  result = a2;
  for ( i = a2; i; i = (_DWORD *)((char *)i - 1) )
  {
    *a1 = *a3;
    result = ++a1;
  }
  return result;
}


//======================================================================
// sub_5C0980
// entry 005c0980  size 115  status ok
//======================================================================

char *__cdecl sub_5C0980(const void *a1, int a2, char *a3)
{
  int v4; // [esp+8h] [ebp-1Ch]

  v4 = (a2 - (int)a1) >> 2;
  if ( v4 > 0 )
    memmove_s(a3, 4 * v4, a1, 4 * v4);
  return &a3[4 * ((a2 - (int)a1) >> 2)];
}


//======================================================================
// sub_5C0A00
// entry 005c0a00  size 313  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5C0A00(ATL::CCRTHeap *this)
{
  char v3; // [esp+67h] [ebp-7Dh] BYREF
  char *v4; // [esp+68h] [ebp-7Ch]
  _DWORD *v5; // [esp+70h] [ebp-74h]
  char v6; // [esp+CFh] [ebp-15h] BYREF
  char *v7; // [esp+D0h] [ebp-14h]
  int v8; // [esp+E0h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  v8 = 0;
  *(_DWORD *)this = &MLVSlotDisplay::`vftable';
  v5 = (_DWORD *)((char *)this + 24);
  v7 = &v6;
  sub_5C6770(0);
  LOBYTE(v8) = 1;
  v4 = &v3;
  sub_5C6810(0);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 19) = 0;
  return this;
}


//======================================================================
// sub_5C0B40
// entry 005c0b40  size 979  status ok
//======================================================================

void __thiscall sub_5C0B40(int this)
{
  unsigned int v1; // [esp+18h] [ebp-BCh]
  unsigned int v2; // [esp+20h] [ebp-B4h]
  unsigned int v3; // [esp+24h] [ebp-B0h]
  int v4; // [esp+28h] [ebp-ACh]
  void (__thiscall ***v6)(_DWORD, int); // [esp+ACh] [ebp-28h]
  _DWORD v7[5]; // [esp+B0h] [ebp-24h]
  int i; // [esp+C4h] [ebp-10h]
  int v9; // [esp+D0h] [ebp-4h]

  *(_DWORD *)this = &MLVSlotDisplay::`vftable';
  v9 = 2;
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(this + 44) ? (*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2 : 0;
    if ( i >= v4 )
      break;
    if ( *(_DWORD *)(this + 44) )
      v3 = (*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2;
    else
      v3 = 0;
    if ( i >= v3 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(_DWORD *)(this + 44) + 4 * i) )
    {
      if ( *(_DWORD *)(this + 44) )
        v2 = (*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2;
      else
        v2 = 0;
      if ( i >= v2 )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(this + 44) + 4 * i) )
      {
        v6 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this + 44) + 4 * i);
        (**v6)(v6, 1);
      }
    }
    if ( *(_DWORD *)(this + 44) )
      v1 = (*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2;
    else
      v1 = 0;
    if ( i >= v1 )
      invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(this + 44) + 4 * i) = 0;
  }
  v7[0] = *(_DWORD *)(this + 56);
  v7[1] = *(_DWORD *)(this + 60);
  v7[2] = *(_DWORD *)(this + 64);
  v7[3] = *(_DWORD *)(this + 68);
  v7[4] = *(_DWORD *)(this + 72);
  for ( i = 0; i < 5; ++i )
  {
    if ( v7[i] )
      (**(void (__thiscall ***)(_DWORD, int))v7[i])(v7[i], 1);
  }
  if ( *(_DWORD *)(this + 76) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 76))(*(_DWORD *)(this + 76), 1);
  if ( *(_DWORD *)(this + 16) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 16))(*(_DWORD *)(this + 16), 1);
  if ( *(_DWORD *)(this + 20) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 20))(*(_DWORD *)(this + 20), 1);
  if ( *(_DWORD *)(this + 4) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 4))(*(_DWORD *)(this + 4), 1);
  LOBYTE(v9) = 1;
  sub_5BE450(this + 40);
  LOBYTE(v9) = 0;
  sub_5BE450(this + 24);
  v9 = -1;
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_5C0F20
// entry 005c0f20  size 27  status ok
//======================================================================

int __cdecl sub_5C0F20(int a1)
{
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 28))(a1, a1);
}


//======================================================================
// sub_5C0F40
// entry 005c0f40  size 355  status ok
//======================================================================

unsigned int __thiscall sub_5C0F40(_DWORD *this, int a2, signed int a3, _DWORD *a4, int a5)
{
  unsigned int result; // eax
  int v6; // eax
  unsigned int v7; // [esp+4h] [ebp-9Ch]
  int v8; // [esp+8h] [ebp-98h]
  void *v10; // [esp+84h] [ebp-1Ch]
  unsigned int i; // [esp+90h] [ebp-10h]

  result = sub_5C49F0(a3, 0);
  for ( i = 0; (int)i < a3; ++i )
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v8 = v6;
    }
    else
    {
      v8 = 0;
    }
    sub_5EAE80(a2, *a4, a4[1], i + a5, -1);
    sub_5EB000(i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 116))(v8);
    if ( *(this + 11) )
      v7 = (*(this + 12) - *(this + 11)) >> 2;
    else
      v7 = 0;
    if ( i >= v7 )
      invalid_parameter_noinfo();
    result = i;
    *(_DWORD *)(*(this + 11) + 4 * i) = v8;
  }
  return result;
}


//======================================================================
// sub_5C10B0
// entry 005c10b0  size 811  status ok
//======================================================================

int __cdecl sub_5C10B0()
{
  int v1; // [esp+0h] [ebp-68h]
  int v2; // [esp+4h] [ebp-64h]
  int v3; // [esp+8h] [ebp-60h]
  int v4; // [esp+Ch] [ebp-5Ch]
  int v5; // [esp+10h] [ebp-58h]
  int v6; // [esp+14h] [ebp-54h]
  int v7; // [esp+18h] [ebp-50h]
  int v8; // [esp+1Ch] [ebp-4Ch]

  if ( operator new(0x1DCu) )
    v8 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v8 = 0;
  sub_5F9DE0(v8, 94, 3234094, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1DCu) )
    v7 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v7 = 0;
  sub_5F9DE0(v7, 95, 3234095, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1DCu) )
    v6 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v6 = 0;
  sub_5F9DE0(v6, 96, 3234096, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1DCu) )
    v5 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v5 = 0;
  sub_5F9DE0(v5, 97, 3234097, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1DCu) )
    v4 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v4 = 0;
  sub_5F9DE0(v4, 84, 3234084, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1DCu) )
    v3 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v3 = 0;
  sub_5F9DE0(v3, 85, 3234085, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
  if ( operator new(0x1DCu) )
    v2 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v1);
  else
    v2 = 0;
  return sub_5F9DE0(v2, 98, 3234098, 0, 0, 1000, &Source, -1, -1, -1, -1, 0);
}


//======================================================================
// sub_5C13E0
// entry 005c13e0  size 359  status ok
//======================================================================

int __thiscall sub_5C13E0(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-38h]
  void *v4; // [esp+Ch] [ebp-30h]
  int i; // [esp+18h] [ebp-24h]
  _DWORD v6[5]; // [esp+1Ch] [ebp-20h]
  int v7; // [esp+38h] [ebp-4h]

  v6[0] = this + 14;
  v6[1] = this + 15;
  v6[2] = this + 16;
  v6[3] = this + 17;
  v6[4] = this + 18;
  for ( i = 0; i < 5; ++i )
  {
    v4 = operator new(0x1D4u);
    v7 = 0;
    if ( v4 )
      v2 = (_DWORD *)sub_60F380(v4);
    else
      v2 = 0;
    v7 = -1;
    *(_DWORD *)v6[i] = v2;
    sub_60F560(
      word_759D9C[20 * i],
      dword_759D84[10 * i],
      dword_759D94[10 * i],
      dword_759D98[10 * i],
      dword_759D90[10 * i],
      -1);
    sub_60FB30(0, 0);
    (*(void (__thiscall **)(_DWORD *))(*v2 + 116))(v2);
    v2[94] = 14;
  }
  *(_DWORD *)(*(this + 14) + 376) = 2;
  return sub_60F870(&unk_759E40);
}


//======================================================================
// sub_5C1550
// entry 005c1550  size 107  status ok
//======================================================================

int __fastcall sub_5C1550(_DWORD **a1)
{
  int result; // eax

  result = (int)a1;
  if ( a1[4] )
  {
    result = ((int (__thiscall *)(_DWORD **))(*a1)[10])(a1);
    if ( !(_BYTE)result )
      result = (*(int (__thiscall **)(_DWORD *))(*a1[4] + 8))(a1[4]);
  }
  if ( a1[5] )
  {
    result = ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[10])(a1);
    if ( !(_BYTE)result )
      return (*(int (__thiscall **)(_DWORD *))(*a1[5] + 4))(a1[5]);
  }
  return result;
}


//======================================================================
// sub_5C15C0
// entry 005c15c0  size 1154  status ok
//======================================================================

char __thiscall sub_5C15C0(_DWORD *this, int a2)
{
  char v3; // [esp+Ch] [ebp-58h]
  ATL::CCRTHeap *v4; // [esp+10h] [ebp-54h]
  int v6; // [esp+24h] [ebp-40h]
  int v7; // [esp+2Ch] [ebp-38h]
  int v8; // [esp+30h] [ebp-34h]
  int v9; // [esp+38h] [ebp-2Ch]
  ATL::CCRTHeap *v10; // [esp+3Ch] [ebp-28h]
  _BYTE v11[8]; // [esp+44h] [ebp-20h] BYREF
  int i; // [esp+4Ch] [ebp-18h]
  char v13; // [esp+53h] [ebp-11h]
  int v14; // [esp+54h] [ebp-10h]
  int v15; // [esp+60h] [ebp-4h]

  v13 = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
    && *(this + 4)
    && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 4) + 12))(*(this + 4), a2) )
  {
    return 1;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
    && *(this + 5)
    && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 5) + 8))(*(this + 5), a2) )
  {
    return 1;
  }
  switch ( a2 )
  {
    case 'T':
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
      sub_5DE170(dword_7947E0);
      (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
      break;
    case 'U':
      sub_5DC2E0();
      break;
    case '^':
      sub_62FDE0(">>> Start spin\n", v3);
      v9 = *(_DWORD *)(*(this + 1) + 8);
      v8 = *(this + 1);
      sub_5C9140(v8);
      if ( v9 > *(_DWORD *)(v8 + 4) )
      {
        v7 = *(_DWORD *)(*(this + 1) + 8);
        v6 = *(this + 1);
        sub_5C9140(v6);
        sub_5D0DB0(v11, v7 - *(_DWORD *)(v6 + 4));
      }
      v13 = 0;
      break;
    case '_':
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
      {
        for ( i = 1; i <= *(_DWORD *)(*(_DWORD *)(*(this + 1) + 16) + 8); ++i )
          sub_5C8E20(i, 1);
        sub_5C8ED0(*(_DWORD *)(*(_DWORD *)(*(this + 1) + 16) + 12));
        (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
        (*(void (__thiscall **)(_DWORD *))(*this + 20))(this);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 12))(this, 94);
      }
      break;
    case '`':
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
      {
        sub_5C8F00(1);
        (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
        (*(void (__thiscall **)(_DWORD *))(*this + 20))(this);
      }
      break;
    case 'a':
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
      {
        sub_5C8DC0(1);
        (*(void (__thiscall **)(_DWORD *))(*this + 20))(this);
      }
      break;
    case 'b':
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
        && !*(this + 5)
        && *(this + 3) )
      {
        v10 = (ATL::CCRTHeap *)operator new(0x28u);
        v15 = 0;
        if ( v10 )
          v4 = sub_5B9020(v10);
        else
          v4 = 0;
        v15 = -1;
        *(this + 5) = v4;
        sub_5B9350((_DWORD *)*(this + 5), (_DWORD *)*(this + 3));
        sub_5B94F0((_DWORD *)*(this + 5));
        sub_5B94D0((_DWORD *)*(this + 5), (int)sub_5C0F20, (int)this);
        (*(void (__thiscall **)(_DWORD *))(*this + 24))(this);
      }
      break;
    default:
      v13 = 0;
      break;
  }
  if ( a2 >= 3234019
    && a2 <= 3234048
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
  {
    v14 = a2 - 3234018;
    sub_5C8E20(a2 - 3234018, 1);
    sub_5C8E20(v14 + 1, 0);
    (*(void (__thiscall **)(_DWORD *))(*this + 20))(this);
    sub_5C1B60(this);
    return 1;
  }
  return v13;
}


//======================================================================
// sub_5C1A80
// entry 005c1a80  size 141  status ok
//======================================================================

int __thiscall sub_5C1A80(Concurrency::details::SchedulingRing **this)
{
  int result; // eax

  result = sub_5BF170(*(_DWORD *)(dword_7947E0 + 20244));
  *(this + 4) = (Concurrency::details::SchedulingRing *)result;
  if ( *(this + 4) )
  {
    (*((void (__thiscall **)(Concurrency::details::SchedulingRing **))*this + 6))(this);
    Concurrency::details::SchedulingRing::SetOwningNode(
      *(this + 4),
      (struct Concurrency::details::SchedulingNode *)this);
    streambuf::unbuffered(*(this + 4), (int)*(this + 1));
    return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 4) + 4))(
             *(this + 4),
             *(_DWORD *)(dword_7947E0 + 20244));
  }
  return result;
}


//======================================================================
// sub_5C1B10
// entry 005c1b10  size 31  status ok
//======================================================================

_DWORD *__thiscall sub_5C1B10(_DWORD *this)
{
  *(this + 4) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// sub_5C1B30
// entry 005c1b30  size 37  status ok
//======================================================================

int __thiscall sub_5C1B30(void *this)
{
  sub_5C1B60(this);
  sub_5C1D60(0);
  return sub_5C1ED0(this);
}


//======================================================================
// sub_5C1B60
// entry 005c1b60  size 500  status ok
//======================================================================

int __thiscall sub_5C1B60(_DWORD **this)
{
  int result; // eax
  unsigned int v2; // [esp+0h] [ebp-4Ch]
  int v3; // [esp+0h] [ebp-4Ch]
  int v4; // [esp+4h] [ebp-48h]
  unsigned int v6; // [esp+Ch] [ebp-40h]
  int v7; // [esp+18h] [ebp-34h]
  bool v8; // [esp+2Bh] [ebp-21h]
  int v9; // [esp+2Ch] [ebp-20h]
  int i; // [esp+30h] [ebp-1Ch]
  int v11; // [esp+38h] [ebp-14h]
  int v12; // [esp+44h] [ebp-8h]

  ((void (__thiscall *)(_DWORD **))(*this)[10])(this);
  v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
  if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[9])(this) )
    v4 = 1;
  else
    v4 = sub_5BE3F0(*(this + 1));
  v11 = 0;
  for ( i = 1; ; ++i )
  {
    result = *(_DWORD *)((*(this + 1))[4] + 8);
    if ( i > result )
      break;
    v8 = 0;
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[12])(this) )
    {
      v8 = i <= (*(this + 1))[3];
    }
    else if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[10])(this) )
    {
      if ( !((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[9])(this) )
      {
        v7 = (int)*(this + 1);
        sub_5C9140(v7);
        if ( *(_BYTE *)(i + v7 + 51) )
          v8 = (v12 + 1000 * (v4 + 1) * v11++ / v4) % (1000 * (v4 + 1)) < 1000;
      }
    }
    v6 = i - 1;
    if ( *(this + 11) )
      v2 = *(this + 12) - *(this + 11);
    else
      v2 = 0;
    if ( v6 >= v2 )
      invalid_parameter_noinfo();
    v9 = (*(this + 11))[v6];
    if ( !(unsigned __int8)sub_5F54E0(v9, v2) || v8 )
    {
      if ( !(unsigned __int8)sub_5F54E0(v9, v3) && v8 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 116))(v9);
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 112))(v9);
    }
  }
  return result;
}


//======================================================================
// sub_5C1D60
// entry 005c1d60  size 362  status ok
//======================================================================

int __thiscall sub_5C1D60(_DWORD *this, char a2)
{
  int result; // eax
  char v3; // [esp+2h] [ebp-3Ah]
  char v4; // [esp+3h] [ebp-39h]
  int v6; // [esp+1Ch] [ebp-20h]
  int v7; // [esp+24h] [ebp-18h]
  int v8; // [esp+28h] [ebp-14h]
  int v9; // [esp+30h] [ebp-Ch]
  int v10; // [esp+34h] [ebp-8h]
  int v11; // [esp+38h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  if ( !(_BYTE)result )
  {
    v4 = 1;
    if ( !a2 )
    {
      v11 = *(this + 1);
      sub_5C9140(v11);
      v10 = *(_DWORD *)(v11 + 224);
      if ( v10 >= CPaneFrameWnd::GetPreDockState(*(this + 15)) )
        v4 = 0;
    }
    v9 = *(this + 1);
    sub_5C9140(v9);
    sub_60FB30(*(_DWORD *)(v9 + 224), v4);
    v3 = 1;
    if ( !a2 )
    {
      v7 = *(this + 1);
      sub_5C9140(v7);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 >= CPaneFrameWnd::GetPreDockState(*(this + 14)) )
        v3 = 0;
    }
    v6 = *(this + 1);
    sub_5C9140(v6);
    sub_60FB30(*(_DWORD *)(v6 + 4), v3);
    sub_60FB30(*(_DWORD *)(*(this + 1) + 12), 1);
    sub_60FB30(*(_DWORD *)(*(this + 1) + 8) / *(_DWORD *)(*(this + 1) + 12), 1);
    return sub_60FB30(*(_DWORD *)(*(this + 1) + 8), 1);
  }
  return result;
}


//======================================================================
// sub_5C1ED0
// entry 005c1ed0  size 291  status ok
//======================================================================

int __thiscall sub_5C1ED0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax
  int v3; // ecx
  bool v4; // [esp+0h] [ebp-28h]
  bool v5; // [esp+4h] [ebp-24h]
  int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+24h] [ebp-4h]

  v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this);
  for ( i = 0; dword_759E6C[i] >= 0; ++i )
  {
    v8 = sub_5FB300(dword_759E6C[i]);
    if ( v8 )
    {
      LOBYTE(v1) = v5;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 212))(v8, v1);
    }
  }
  v4 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
    {
      v7 = *(_DWORD *)(*(this + 1) + 8);
      if ( v7 <= sub_5C47B0(*(this + 1)) )
        v4 = 1;
    }
  }
  result = sub_5FB300(94);
  if ( result )
  {
    LOBYTE(v3) = v4;
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 212))(result, v3);
  }
  return result;
}


//======================================================================
// sub_5C2000
// entry 005c2000  size 445  status ok
//======================================================================

int __thiscall sub_5C2000(_DWORD *this)
{
  int v2; // [esp+20h] [ebp-28h]
  int v3; // [esp+24h] [ebp-24h]
  void *v5; // [esp+34h] [ebp-14h]

  if ( !*(this + 19) )
  {
    v5 = operator new(0x184u);
    if ( v5 )
      v3 = sub_5F5BF0(v5);
    else
      v3 = 0;
    *(this + 19) = v3;
    sub_5EAF00(90007);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 19) + 108))(*(this + 19), 90);
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 19) + 68))(*(this + 19), 120, 108);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 19) + 64))(*(this + 19));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 19) + 112))(*(this + 19));
    *(_DWORD *)(*(this + 19) + 376) = 4;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 19) + 176))(*(this + 19), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 19) + 116))(*(this + 19));
  if ( operator new(0x20u) )
    v2 = sub_6010A0(0);
  else
    v2 = 0;
  sub_5F5D50(v2);
  sub_600520(1);
  return (*(int (__cdecl **)(int))(*(_DWORD *)dword_162EE84 + 128))(101014);
}


//======================================================================
// sub_5C21C0
// entry 005c21c0  size 62  status ok
//======================================================================

double sub_5C21C0()
{
  int v2; // [esp+Ch] [ebp-8h]

  v2 = sub_637810(0);
  return (float)(1.61 - log10((double)v2 + 1.0));
}


//======================================================================
// sub_5C2200
// entry 005c2200  size 205  status ok
//======================================================================

int __cdecl sub_5C2200(int a1)
{
  int v2; // [esp+4h] [ebp-20h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; ; ++i )
  {
    if ( !dword_759948[67 * i] )
      return 0;
    if ( dword_759948[67 * i] == a1 )
      break;
  }
  if ( operator new(0x6Cu) )
    v2 = sub_5C22D0();
  else
    v2 = 0;
  *(_DWORD *)(v2 + 80) = &dword_759948[67 * i];
  return v2;
}


//======================================================================
// sub_5C22D0
// entry 005c22d0  size 169  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5C22D0(ATL::CCRTHeap *this)
{
  char v3; // [esp+67h] [ebp-15h] BYREF
  char *v4; // [esp+68h] [ebp-14h]
  int v5; // [esp+78h] [ebp-4h]

  sub_5C0A00(this);
  v5 = 0;
  *(_DWORD *)this = &MLVSlotDisplay_Scroller::`vftable';
  v4 = &v3;
  sub_5C68B0(0);
  LOBYTE(v5) = 1;
  *((_DWORD *)this + 20) = dword_759948;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 26) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
  return this;
}


//======================================================================
// sub_5C2380
// entry 005c2380  size 151  status ok
//======================================================================

void __thiscall sub_5C2380(_DWORD *this)
{
  *this = &MLVSlotDisplay_Scroller::`vftable';
  if ( *(this + 20) )
    sub_6110A0(*(this + 20) + 136, 0);
  sub_5DD400(0);
  sub_5C4920(this + 22);
  sub_5C0B40((int)this);
}


//======================================================================
// sub_5C2420
// entry 005c2420  size 1815  status ok
//======================================================================

int __thiscall sub_5C2420(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  char v7; // [esp-34h] [ebp-120h] BYREF
  int v8; // [esp-30h] [ebp-11Ch]
  int v9; // [esp-2Ch] [ebp-118h]
  int v10; // [esp-28h] [ebp-114h]
  int v11; // [esp-24h] [ebp-110h]
  int v12; // [esp-20h] [ebp-10Ch]
  int v13; // [esp-1Ch] [ebp-108h]
  int v14; // [esp-18h] [ebp-104h]
  int v15; // [esp-14h] [ebp-100h]
  int v16; // [esp-10h] [ebp-FCh]
  int v17; // [esp-Ch] [ebp-F8h]
  int v18; // [esp-8h] [ebp-F4h]
  int v19; // [esp-4h] [ebp-F0h]
  int v20; // [esp+0h] [ebp-ECh]
  int v21; // [esp+4h] [ebp-E8h]
  int v22; // [esp+8h] [ebp-E4h]
  unsigned int v23; // [esp+Ch] [ebp-E0h]
  int v24; // [esp+10h] [ebp-DCh]
  unsigned int v25; // [esp+14h] [ebp-D8h]
  int v26; // [esp+18h] [ebp-D4h]
  unsigned int v27; // [esp+1Ch] [ebp-D0h]
  unsigned int v28; // [esp+20h] [ebp-CCh]
  unsigned int v29; // [esp+24h] [ebp-C8h]
  int v30; // [esp+28h] [ebp-C4h]
  int v31; // [esp+2Ch] [ebp-C0h]
  int v32; // [esp+30h] [ebp-BCh]
  _DWORD *v33; // [esp+34h] [ebp-B8h]
  signed int v34; // [esp+38h] [ebp-B4h]
  _DWORD *v35; // [esp+3Ch] [ebp-B0h]
  int v36; // [esp+40h] [ebp-ACh]
  _DWORD *v37; // [esp+44h] [ebp-A8h]
  int v38; // [esp+48h] [ebp-A4h]
  _DWORD *v39; // [esp+4Ch] [ebp-A0h]
  _DWORD *v40; // [esp+8Ch] [ebp-60h]
  int v41; // [esp+90h] [ebp-5Ch]
  _DWORD *v42; // [esp+94h] [ebp-58h]
  _DWORD *v43; // [esp+98h] [ebp-54h]
  signed int v44; // [esp+9Ch] [ebp-50h]
  char *v45; // [esp+A0h] [ebp-4Ch]
  int v46; // [esp+A4h] [ebp-48h]
  void *v47; // [esp+A8h] [ebp-44h]
  int v48; // [esp+ACh] [ebp-40h]
  void *v49; // [esp+B0h] [ebp-3Ch]
  int v50; // [esp+B4h] [ebp-38h]
  void *v51; // [esp+B8h] [ebp-34h]
  int v52; // [esp+BCh] [ebp-30h]
  void *v53; // [esp+C0h] [ebp-2Ch]
  int v54; // [esp+C4h] [ebp-28h]
  int (__thiscall ***v55)(_DWORD, int); // [esp+C8h] [ebp-24h]
  int (__thiscall ***v56)(_DWORD, int); // [esp+CCh] [ebp-20h]
  int v57; // [esp+D0h] [ebp-1Ch]
  int v58; // [esp+D4h] [ebp-18h]
  int v59; // [esp+D8h] [ebp-14h]
  unsigned int i; // [esp+DCh] [ebp-10h]
  int v61; // [esp+E8h] [ebp-4h]

  v33 = this;
  *(this + 2) = *((_DWORD *)dword_162EE84 + 5);
  if ( v33[1] )
  {
    v55 = (int (__thiscall ***)(_DWORD, int))v33[1];
    v56 = v55;
    if ( v55 )
      v32 = (**v56)(v56, 1);
    else
      v32 = 0;
  }
  v53 = operator new(0xE8u);
  v61 = 0;
  if ( v53 )
    v31 = Concurrency::_Order_node_base<enum Concurrency::agent_status>::_Order_node_base<enum Concurrency::agent_status>(v53);
  else
    v31 = 0;
  v54 = v31;
  v61 = -1;
  v33[1] = v31;
  sub_5C8C60(a2);
  v2 = sub_630F40("SID_CASINO_VIDEOSLOTS");
  sub_5F38B0(v2);
  sub_5F1B10(*(_BYTE *)(v33[20] + 4), *(_BYTE *)(v33[20] + 5), *(_BYTE *)(v33[20] + 6));
  v33[3] = *(_DWORD *)(v33[20] + 264);
  v46 = **(_DWORD **)(v33[1] + 16);
  v45 = &v7;
  v30 = sub_5C3870(&v7);
  sub_5C4BA0(v46, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
  for ( i = 0; ; ++i )
  {
    v44 = **(_DWORD **)(v33[1] + 16);
    if ( (int)i >= v44 )
      break;
    v43 = v33 + 22;
    if ( v33[23] )
      v29 = (v43[2] - v43[1]) / 52;
    else
      v29 = 0;
    if ( i >= v29 )
      invalid_parameter_noinfo();
    *(_DWORD *)(52 * i + v43[1]) = v33;
    v42 = v33 + 22;
    if ( v33[23] )
      v28 = (v42[2] - v42[1]) / 52;
    else
      v28 = 0;
    if ( i >= v28 )
      invalid_parameter_noinfo();
    *(_DWORD *)(v42[1] + 52 * i + 4) = i;
    v41 = *(_DWORD *)(*(_DWORD *)(v33[1] + 16) + 4);
    v40 = v33 + 22;
    if ( v33[23] )
      v27 = (v40[2] - v40[1]) / 52;
    else
      v27 = 0;
    if ( i >= v27 )
      invalid_parameter_noinfo();
    v3 = v40[1];
    v39 = (_DWORD *)(v3 + 52 * i + 32);
    sub_5BE4D0(v39, v3, v41 + 1, 0);
    v38 = v33[1];
    if ( *(int *)(v38 + 4 * i + 24) < 0 )
      v26 = -*(_DWORD *)(v38 + 4 * i + 24);
    else
      v26 = *(_DWORD *)(v38 + 4 * i + 24);
    v37 = v33 + 22;
    if ( v33[23] )
      v25 = (v37[2] - v37[1]) / 52;
    else
      v25 = 0;
    if ( i >= v25 )
      invalid_parameter_noinfo();
    *(float *)(v37[1] + 52 * i + 8) = (float)v26;
    v51 = operator new(0x1DCu);
    v61 = 1;
    if ( v51 )
      v24 = Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v20);
    else
      v24 = 0;
    v52 = v24;
    v61 = -1;
    v59 = v24;
    sub_5EAEC0(
      (char *)&Source,
      *(_DWORD *)(v33[20] + 76) + *(_DWORD *)(v33[20] + 84) * i,
      *(_DWORD *)(v33[20] + 80),
      1000,
      i + 3234012);
    sub_5F5530(*(_DWORD *)(v33[20] + 84));
    v36 = *(_DWORD *)(*(_DWORD *)(v33[1] + 16) + 4);
    sub_5F5570(v36 * *(_DWORD *)(v33[20] + 88));
    (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 116))(v59);
    v35 = v33 + 22;
    if ( v33[23] )
      v23 = (v35[2] - v35[1]) / 52;
    else
      v23 = 0;
    if ( i >= v23 )
      invalid_parameter_noinfo();
    *(_DWORD *)(v35[1] + 52 * i + 48) = v59;
  }
  if ( *(_DWORD *)(v33[20] + 8) )
  {
    v49 = operator new(0x178u);
    v61 = 2;
    if ( v49 )
    {
      sub_5EAAF0(v49);
      v22 = v4;
    }
    else
    {
      v22 = 0;
    }
    v50 = v22;
    v61 = -1;
    v58 = v22;
    sub_5EAE80(*(_DWORD *)(v33[20] + 8), 0, 0, 21, -1);
    sub_5EB000(*(_DWORD *)(v33[20] + 12));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v58 + 176))(v58, *(_DWORD *)(v33[20] + 16));
    (*(void (__thiscall **)(int))(*(_DWORD *)v58 + 116))(v58);
  }
  if ( *(_DWORD *)(v33[20] + 20) )
  {
    v47 = operator new(0x178u);
    v61 = 3;
    if ( v47 )
    {
      sub_5EAAF0(v47);
      v21 = v5;
    }
    else
    {
      v21 = 0;
    }
    v48 = v21;
    v61 = -1;
    v57 = v21;
    sub_5EAE80(*(_DWORD *)(v33[20] + 20), 0, 0, 23, -1);
    sub_5EB000(*(_DWORD *)(v33[20] + 24));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v57 + 176))(v57, *(_DWORD *)(v33[20] + 28));
    (*(void (__thiscall **)(int))(*(_DWORD *)v57 + 116))(v57);
  }
  sub_5C10B0();
  v34 = *(_DWORD *)(*(_DWORD *)(v33[1] + 16) + 8);
  sub_5C0F40(v33, *(_DWORD *)(v33[20] + 56), v34, (_DWORD *)(v33[20] + 68), 24);
  sub_5C13E0(v33);
  sub_5C1B60((_DWORD **)v33);
  sub_5C1D60(v33, 1);
  return sub_5C1ED0(v33);
}


//======================================================================
// sub_5C2B40
// entry 005c2b40  size 1487  status ok
//======================================================================

char __thiscall sub_5C2B40(_DWORD *this, int a2)
{
  unsigned int v3; // [esp+4h] [ebp-84h]
  int v4; // [esp+8h] [ebp-80h]
  unsigned int v5; // [esp+Ch] [ebp-7Ch]
  unsigned int v6; // [esp+10h] [ebp-78h]
  unsigned int v7; // [esp+14h] [ebp-74h]
  unsigned int v8; // [esp+18h] [ebp-70h]
  unsigned int v9; // [esp+1Ch] [ebp-6Ch]
  unsigned int v10; // [esp+20h] [ebp-68h]
  unsigned int v11; // [esp+24h] [ebp-64h]
  unsigned int v12; // [esp+28h] [ebp-60h]
  int v13; // [esp+2Ch] [ebp-5Ch]
  unsigned int v14; // [esp+30h] [ebp-58h]
  int v16; // [esp+40h] [ebp-48h]
  int v17; // [esp+68h] [ebp-20h]
  int v18; // [esp+74h] [ebp-14h]
  int v19; // [esp+7Ch] [ebp-Ch]
  char v20; // [esp+83h] [ebp-5h]
  unsigned int i; // [esp+84h] [ebp-4h]
  unsigned int v22; // [esp+84h] [ebp-4h]

  v20 = 1;
  if ( sub_5C15C0(this, a2) )
    return 1;
  if ( a2 == 94 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
      {
        v19 = *(_DWORD *)(*(this + 1) + 8);
        v18 = *(this + 1);
        sub_5C9140(v18);
        if ( v19 <= *(_DWORD *)(v18 + 4) )
        {
          for ( i = 0; (signed int)i < **(_DWORD **)(*(this + 1) + 16); ++i )
          {
            if ( *(this + 23) )
              v14 = (*(this + 24) - *(this + 23)) / 52;
            else
              v14 = 0;
            if ( i >= v14 )
              invalid_parameter_noinfo();
            *(float *)(*(this + 23) + 52 * i + 20) = (double)(int)i * *(float *)(*(this + 20) + 104)
                                                   + *(float *)(*(this + 20) + 100);
            v17 = *(this + 1);
            if ( *(int *)(v17 + 4 * i + 24) < 0 )
              v13 = -*(_DWORD *)(v17 + 4 * i + 24);
            else
              v13 = *(_DWORD *)(v17 + 4 * i + 24);
            if ( *(this + 23) )
              v12 = (*(this + 24) - *(this + 23)) / 52;
            else
              v12 = 0;
            if ( i >= v12 )
              invalid_parameter_noinfo();
            *(float *)(*(this + 23) + 52 * i + 8) = (float)v13;
            if ( *(this + 23) )
              v11 = (*(this + 24) - *(this + 23)) / 52;
            else
              v11 = 0;
            if ( i >= v11 )
              invalid_parameter_noinfo();
            *(float *)(*(this + 23) + 52 * i + 12) = *(float *)(*(this + 20) + 108);
            if ( *(this + 23) )
              v10 = (*(this + 24) - *(this + 23)) / 52;
            else
              v10 = 0;
            if ( i >= v10 )
              invalid_parameter_noinfo();
            *(float *)(*(this + 23) + 52 * i + 16) = *(float *)(*(this + 20) + 112);
            if ( *(this + 23) )
              v9 = (*(this + 24) - *(this + 23)) / 52;
            else
              v9 = 0;
            if ( i >= v9 )
              invalid_parameter_noinfo();
            *(_DWORD *)(*(this + 23) + 52 * i + 28) = 2;
          }
          sub_5C8FC0(*(this + 1));
          sub_610980(*(this + 20) + 136);
          sub_5DD400(1);
          sub_5C3110(1);
        }
      }
    }
  }
  else
  {
    v20 = 0;
  }
  if ( a2 >= 3234012 && a2 <= 3234018 && *(this + 21) == 1 )
  {
    v22 = a2 - 3234012;
    if ( *(this + 23) )
      v8 = (*(this + 24) - *(this + 23)) / 52;
    else
      v8 = 0;
    if ( v22 >= v8 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 52 * v22 + 28) == 3 )
    {
      if ( *(this + 23) )
        v7 = (*(this + 24) - *(this + 23)) / 52;
      else
        v7 = 0;
      if ( v22 >= v7 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)sub_5C9030(v22, *(float *)(*(this + 23) + 52 * v22 + 8)) )
      {
        if ( *(this + 23) )
          v6 = (*(this + 24) - *(this + 23)) / 52;
        else
          v6 = 0;
        if ( v22 >= v6 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*(this + 23) + 52 * v22 + 28) = 5;
        if ( *(this + 23) )
          v5 = (*(this + 24) - *(this + 23)) / 52;
        else
          v5 = 0;
        if ( v22 >= v5 )
          invalid_parameter_noinfo();
        *(float *)(*(this + 23) + 52 * v22 + 16) = *(float *)(*(this + 20) + 124);
        v16 = *(this + 1);
        if ( *(int *)(v16 + 4 * v22 + 24) < 0 )
          v4 = -*(_DWORD *)(v16 + 4 * v22 + 24);
        else
          v4 = *(_DWORD *)(v16 + 4 * v22 + 24);
        if ( *(this + 23) )
          v3 = (*(this + 24) - *(this + 23)) / 52;
        else
          v3 = 0;
        if ( v22 >= v3 )
          invalid_parameter_noinfo();
        sub_5C42D0(v4);
      }
    }
    v20 = 1;
  }
  if ( a2 >= 3234019
    && a2 <= 3234048
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 40))(this)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
  {
    sub_5C8E20(a2 - 3234018, 1);
    sub_5C8E20(a2 - 3234018 + 1, 0);
    sub_5C3110(4);
    sub_5C1B60((_DWORD **)this);
    return 1;
  }
  return v20;
}


//======================================================================
// sub_5C3110
// entry 005c3110  size 48  status ok
//======================================================================

int __thiscall sub_5C3110(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
  *(this + 21) = a2;
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}


//======================================================================
// sub_5C3140
// entry 005c3140  size 138  status ok
//======================================================================

_DWORD *__thiscall sub_5C3140(int this, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx

  v4 = sub_5BE340(*(_DWORD **)(this + 4), a2, a3);
  v5 = (_DWORD *)(*(_DWORD *)(this + 80) + 32);
  *a4 = *v5;
  a4[1] = v5[1];
  a4[2] = v5[2];
  *a4 += v4 * *(_DWORD *)(*(_DWORD *)(this + 80) + 44);
  a4[1] += v4 * *(_DWORD *)(*(_DWORD *)(this + 80) + 48);
  v6 = v4 * *(_DWORD *)(*(_DWORD *)(this + 80) + 52);
  a4[2] += v6;
  return a4;
}


//======================================================================
// sub_5C31D0
// entry 005c31d0  size 221  status ok
//======================================================================

int __thiscall sub_5C31D0(void *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-2Ch]
  void *v5; // [esp+Ch] [ebp-24h]
  _DWORD v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  int v7; // [esp+20h] [ebp-10h]
  int v8; // [esp+2Ch] [ebp-4h]

  sub_5C3140((int)this, a2, a3, v6);
  v5 = operator new(0x190u);
  v8 = 0;
  if ( v5 )
    v4 = sub_5F5F50(v5);
  else
    v4 = 0;
  v8 = -1;
  v7 = v4;
  sub_5EAE80(v6[0], 0, 0, 22, a2 + 3234012);
  sub_5EB000(v6[1]);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, v6[2]);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7);
  return v7;
}


//======================================================================
// sub_5C32B0
// entry 005c32b0  size 1462  status ok
//======================================================================

int __thiscall sub_5C32B0(int this)
{
  int v2; // [esp+4h] [ebp-7Ch]
  unsigned int v3; // [esp+8h] [ebp-78h]
  int v4; // [esp+Ch] [ebp-74h]
  unsigned int v5; // [esp+10h] [ebp-70h]
  unsigned int v6; // [esp+14h] [ebp-6Ch]
  unsigned int v7; // [esp+18h] [ebp-68h]
  unsigned int v8; // [esp+1Ch] [ebp-64h]
  unsigned int v9; // [esp+20h] [ebp-60h]
  unsigned int v10; // [esp+24h] [ebp-5Ch]
  unsigned int v11; // [esp+28h] [ebp-58h]
  unsigned int v12; // [esp+2Ch] [ebp-54h]
  int v14; // [esp+40h] [ebp-40h]
  char v15; // [esp+72h] [ebp-Eh]
  char v16; // [esp+73h] [ebp-Dh]
  float v17; // [esp+74h] [ebp-Ch]
  float v18; // [esp+74h] [ebp-Ch]
  int v19; // [esp+78h] [ebp-8h]
  unsigned int i; // [esp+7Ch] [ebp-4h]
  unsigned int j; // [esp+7Ch] [ebp-4h]

  sub_5C1550((_DWORD **)this);
  v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
  v17 = ((double)v19 - (double)dword_79360C) / 1000.0;
  dword_79360C = v19;
  if ( v17 > 0.03333333333333333 )
    v17 = 0.033333335;
  v18 = sub_5C21C0() * v17;
  if ( *(_DWORD *)(this + 84) == 3 && v19 - *(_DWORD *)(this + 104) > 3000 )
    sub_5C1A80((Concurrency::details::SchedulingRing **)this);
  v15 = 1;
  v16 = 1;
  for ( i = 0; (signed int)i < **(_DWORD **)(*(_DWORD *)(this + 4) + 16); ++i )
  {
    if ( *(_DWORD *)(this + 92) )
      v12 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
    else
      v12 = 0;
    if ( i >= v12 )
      invalid_parameter_noinfo();
    sub_5C3B10(v18);
    if ( *(_DWORD *)(this + 92) )
      v11 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
    else
      v11 = 0;
    if ( i >= v11 )
      invalid_parameter_noinfo();
    if ( *(int *)(*(_DWORD *)(this + 92) + 52 * i + 28) < 4 )
    {
      if ( *(_DWORD *)(this + 92) )
        v10 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
      else
        v10 = 0;
      if ( i >= v10 )
        invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(this + 92) + 52 * i + 28) != 1 )
        v15 = 0;
    }
    if ( *(_DWORD *)(this + 92) )
      v9 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
    else
      v9 = 0;
    if ( i >= v9 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(_DWORD *)(this + 92) + 52 * i + 28) != 1 )
      v16 = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 36))(this) && *(_DWORD *)(this + 84) != 2 && v15 )
  {
    sub_5C3110((_DWORD *)this, 2);
    sub_5C90C0(*(_DWORD *)(this + 4));
    for ( j = 0; (signed int)j < **(_DWORD **)(*(_DWORD *)(this + 4) + 16); ++j )
    {
      if ( *(_DWORD *)(this + 92) )
        v8 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
      else
        v8 = 0;
      if ( j >= v8 )
        invalid_parameter_noinfo();
      if ( *(int *)(*(_DWORD *)(this + 92) + 52 * j + 28) < 5 )
      {
        if ( *(_DWORD *)(this + 92) )
          v7 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
        else
          v7 = 0;
        if ( j >= v7 )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(*(_DWORD *)(this + 92) + 52 * j + 28) != 1 )
        {
          if ( *(_DWORD *)(this + 92) )
            v6 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
          else
            v6 = 0;
          if ( j >= v6 )
            invalid_parameter_noinfo();
          *(_DWORD *)(*(_DWORD *)(this + 92) + 52 * j + 28) = 5;
          if ( *(_DWORD *)(this + 92) )
            v5 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
          else
            v5 = 0;
          if ( j >= v5 )
            invalid_parameter_noinfo();
          *(float *)(*(_DWORD *)(this + 92) + 52 * j + 16) = *(float *)(*(_DWORD *)(this + 80) + 124);
          v14 = *(_DWORD *)(this + 4);
          if ( *(int *)(v14 + 4 * j + 24) < 0 )
            v4 = -*(_DWORD *)(v14 + 4 * j + 24);
          else
            v4 = *(_DWORD *)(v14 + 4 * j + 24);
          if ( *(_DWORD *)(this + 92) )
            v3 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) / 52;
          else
            v3 = 0;
          if ( j >= v3 )
            invalid_parameter_noinfo();
          sub_5C42D0(v4);
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 36))(this) && v16 )
  {
    *(_DWORD *)(this + 104) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
    sub_610E70(*(_DWORD *)(this + 80) + 136, 0);
    sub_5DD400(0);
    sub_5C9140(*(_DWORD *)(this + 4));
    if ( (unsigned __int8)sub_5C9740(*(_DWORD *)(this + 4)) )
    {
      sub_610980(*(_DWORD *)(this + 80) + 200);
      sub_5C3110((_DWORD *)this, 3);
    }
    else
    {
      sub_610E70(*(_DWORD *)(this + 80) + 136, 0);
      if ( sub_5BE3F0(*(_DWORD **)(this + 4)) > 0 )
      {
        if ( (unsigned __int8)sub_5C9940(*(_DWORD *)(this + 4)) )
          v2 = *(_DWORD *)(this + 80) + 232;
        else
          v2 = *(_DWORD *)(this + 80) + 168;
        sub_610980(v2);
      }
      sub_5C3110((_DWORD *)this, 0);
    }
  }
  sub_5C1B60((_DWORD **)this);
  return sub_5C1D60((_DWORD *)this, 0);
}


//======================================================================
// sub_5C3870
// entry 005c3870  size 120  status ok
//======================================================================

float *__thiscall sub_5C3870(float *this)
{
  char v3; // [esp+63h] [ebp-9h] BYREF
  char *v4; // [esp+64h] [ebp-8h]

  v4 = &v3;
  sub_5BEF20((_DWORD *)this + 8, 0);
  *this = 0.0;
  *(this + 1) = 0.0;
  *(this + 2) = 0.0;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  *(this + 6) = 0.0;
  *((_DWORD *)this + 7) = 1;
  *(this + 12) = 0.0;
  return this;
}


//======================================================================
// sub_5C38F0
// entry 005c38f0  size 131  status ok
//======================================================================

_DWORD *__thiscall sub_5C38F0(_DWORD *this, _DWORD *a2)
{
  char v4; // [esp+67h] [ebp-15h] BYREF
  char *v5; // [esp+68h] [ebp-14h]
  int v6; // [esp+78h] [ebp-4h]

  v5 = &v4;
  sub_5BEF20(this + 8, 0);
  v6 = 0;
  if ( a2 != this )
  {
    *(this + 12) = 0;
    sub_5C3A20(a2);
  }
  return this;
}


//======================================================================
// sub_5C3980
// entry 005c3980  size 152  status ok
//======================================================================

int __thiscall sub_5C3980(void (__thiscall ****this)(_DWORD, _DWORD))
{
  if ( *(this + 12) )
    (***(this + 12))(*(this + 12), 1);
  *(this + 12) = 0;
  return sub_5BE450((int)(this + 8));
}


//======================================================================
// sub_5C3A20
// entry 005c3a20  size 228  status ok
//======================================================================

int __thiscall sub_5C3A20(float *this, float *a2)
{
  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  *(this + 4) = a2[4];
  *(this + 5) = a2[5];
  *(this + 6) = a2[6];
  if ( *((_DWORD *)this + 12) )
    (***((void (__thiscall ****)(_DWORD, int))this + 12))(*((_DWORD *)this + 12), 1);
  *(this + 12) = a2[12];
  return sub_5C63D0(a2 + 8);
}


//======================================================================
// sub_5C3B10
// entry 005c3b10  size 1945  status ok
//======================================================================

void __thiscall sub_5C3B10(_DWORD *this, float a2)
{
  int v2; // eax
  int v3; // eax
  unsigned int Flags; // eax
  float v5; // [esp+10h] [ebp-D8h]
  unsigned int v6; // [esp+14h] [ebp-D4h]
  unsigned int v7; // [esp+1Ch] [ebp-CCh]
  float v8; // [esp+24h] [ebp-C4h]
  float v9; // [esp+28h] [ebp-C0h]
  double v11; // [esp+40h] [ebp-A8h] BYREF
  _DWORD *v12; // [esp+48h] [ebp-A0h]
  _DWORD *v13; // [esp+4Ch] [ebp-9Ch]
  float v14; // [esp+50h] [ebp-98h]
  double v15; // [esp+54h] [ebp-94h]
  double v16; // [esp+5Ch] [ebp-8Ch] BYREF
  int v17; // [esp+64h] [ebp-84h]
  float v18; // [esp+68h] [ebp-80h]
  double v19; // [esp+6Ch] [ebp-7Ch]
  double v20; // [esp+74h] [ebp-74h] BYREF
  float v21; // [esp+7Ch] [ebp-6Ch]
  double v22; // [esp+80h] [ebp-68h]
  double Y; // [esp+88h] [ebp-60h] BYREF
  CMFCToolBarsCustomizeDialog *v24; // [esp+90h] [ebp-58h]
  CMFCToolBarsCustomizeDialog *v25; // [esp+94h] [ebp-54h]
  int v26; // [esp+98h] [ebp-50h]
  int v27; // [esp+9Ch] [ebp-4Ch]
  int v28; // [esp+A0h] [ebp-48h]
  int v29; // [esp+A4h] [ebp-44h]
  CMFCToolBarsCustomizeDialog *v30; // [esp+A8h] [ebp-40h]
  float v31; // [esp+ACh] [ebp-3Ch]
  int v32; // [esp+B0h] [ebp-38h]
  _DWORD v33[3]; // [esp+B4h] [ebp-34h] BYREF
  int i; // [esp+C0h] [ebp-28h]
  int v35; // [esp+C4h] [ebp-24h]
  int v36; // [esp+C8h] [ebp-20h]
  int v37; // [esp+CCh] [ebp-1Ch]
  int v38; // [esp+D0h] [ebp-18h]
  float v39; // [esp+D4h] [ebp-14h]
  float v40; // [esp+D8h] [ebp-10h]
  float v41; // [esp+DCh] [ebp-Ch]
  char v42; // [esp+E3h] [ebp-5h]
  int v43; // [esp+E4h] [ebp-4h]

  v42 = 1;
  v38 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12))
      - *(_DWORD *)(*this + 104);
  v21 = *((float *)this + 2);
  v22 = modf(v21, &Y);
  v39 = Y;
  *((float *)this + 5) = *((float *)this + 5) - a2;
  switch ( *(this + 7) )
  {
    case 0:
      *(this + 7) = 1;
      break;
    case 2:
      if ( *((float *)this + 5) <= 0.0 )
      {
        if ( *(float *)(*(_DWORD *)(*this + 80) + 116) > (double)*((float *)this + 3) )
        {
          *(this + 7) = 3;
          *((float *)this + 4) = 0.0;
          *((float *)this + 3) = *(float *)(*(_DWORD *)(*this + 80) + 116);
          *((float *)this + 5) = *(float *)(*(_DWORD *)(*this + 80) + 120);
        }
      }
      else
      {
        v42 = 0;
      }
      break;
    case 3:
      if ( *((float *)this + 5) <= 0.0 )
        *(this + 7) = 4;
      break;
    case 5:
      if ( *((float *)this + 5) > 0.0 )
      {
        *((float *)this + 2) = *((float *)this + 3) * a2 + *((float *)this + 2);
        v42 = 0;
      }
      break;
    default:
      break;
  }
  if ( v42 )
  {
    *((float *)this + 2) = *((float *)this + 3) * a2 + *((float *)this + 2);
    *((float *)this + 3) = *((float *)this + 4) * a2 + *((float *)this + 3);
  }
  v37 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*this + 4) + 16) + 124 * *(this + 1) + 32);
  while ( *((float *)this + 2) < 0.0 )
    *((float *)this + 2) = (double)v37 + *((float *)this + 2);
  while ( *((float *)this + 2) >= (double)v37 )
    *((float *)this + 2) = *((float *)this + 2) - (double)v37;
  v18 = *((float *)this + 2);
  v19 = modf(v18, &v20);
  v40 = v20;
  v9 = v19;
  v41 = v9;
  if ( *(this + 7) == 5
    && (*(float *)(*(_DWORD *)(*this + 80) + 128) < (double)*((float *)this + 3) || *((float *)this + 4) == 0.0) )
  {
    *((float *)this + 4) = 0.0;
    if ( *(float *)(*(_DWORD *)(*this + 80) + 132) < (double)*((float *)this + 3) )
      *((float *)this + 3) = *(float *)(*(_DWORD *)(*this + 80) + 132);
    v35 = (int)(*((float *)this + 6) - 1.0);
    if ( v35 < 0 )
    {
      v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*this + 4) + 16) + 124 * *(this + 1) + 32);
      v35 += v17;
    }
    if ( v40 == (double)v35 )
    {
      *((float *)this + 2) = *((float *)this + 6);
      *((float *)this + 3) = 0.0;
      *(this + 7) = 1;
      v14 = *((float *)this + 2);
      v15 = modf(v14, &v16);
      v40 = v16;
      v8 = v15;
      v41 = v8;
      sub_610E70(*(_DWORD *)(*this + 80) + 136, 0);
      sub_610980(&unk_759EB0);
    }
  }
  v36 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*this + 4) + 16) + 4);
  v43 = (int)((double)(-v36 / 2) + v40);
  for ( i = 0; i < v36 + 1; ++i )
  {
    sub_5C3140(*this, *(this + 1), v43 + i, v33);
    v13 = this + 8;
    if ( *(this + 9) )
      v7 = (v13[2] - v13[1]) >> 2;
    else
      v7 = 0;
    if ( i >= v7 )
      invalid_parameter_noinfo();
    v30 = *(CMFCToolBarsCustomizeDialog **)(v13[1] + 4 * i);
    if ( !v30 || (v2 = CDrawImage::UsingImageAllocator(v30), v2 != v33[0]) || (v3 = sub_5EB110(v30), v3 != v33[1]) )
    {
      if ( v30 )
      {
        v24 = v30;
        v25 = v30;
        (**(void (__thiscall ***)(CMFCToolBarsCustomizeDialog *, int))v25)(v25, 1);
      }
      v30 = (CMFCToolBarsCustomizeDialog *)sub_5C31D0((void *)*this, *(this + 1), v43 + i);
      v12 = this + 8;
      if ( *(this + 9) )
        v6 = (v12[2] - v12[1]) >> 2;
      else
        v6 = 0;
      if ( i >= v6 )
        invalid_parameter_noinfo();
      *(_DWORD *)(v12[1] + 4 * i) = v30;
    }
    v32 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*this + 44))(*this) )
    {
      if ( (int)sub_5C9960(*(this + 1), v43 + i) > 0 )
      {
        v27 = 250;
        v29 = 0;
        v28 = sub_5EB240(v30) + 1;
        v26 = v28;
        v32 = v38 / 250 % v28;
        if ( v32 >= v28 )
          v32 = v28 - 1;
      }
    }
    Flags = CMFCToolBarsCustomizeDialog::GetFlags(v30);
    if ( v32 != Flags )
      (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, int))(*(_DWORD *)v30 + 176))(v30, v32);
    v5 = modf(*((float *)this + 2), &v11);
    v31 = (double)i - v5;
    (*(void (__thiscall **)(CMFCToolBarsCustomizeDialog *, int, int))(*(_DWORD *)v30 + 68))(
      v30,
      *(_DWORD *)(*(_DWORD *)(*this + 80) + 92)
    + *(_DWORD *)(*(_DWORD *)(*this + 80) + 76)
    + *(_DWORD *)(*(_DWORD *)(*this + 80) + 84) * *(this + 1),
      (int)((double)*(int *)(*(_DWORD *)(*this + 80) + 88) * v31
          + (double)*(int *)(*(_DWORD *)(*this + 80) + 80)
          + (double)*(int *)(*(_DWORD *)(*this + 80) + 96)));
  }
  if ( *((float *)this + 5) < 0.0 )
    *((float *)this + 5) = 0.0;
}


//======================================================================
// sub_5C42D0
// entry 005c42d0  size 286  status ok
//======================================================================

float *__thiscall sub_5C42D0(float *this, int a2)
{
  float *result; // eax
  float v3; // [esp+4h] [ebp-18h]
  float v4; // [esp+8h] [ebp-14h]
  float v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]

  result = this;
  *(this + 6) = (float)a2;
  if ( *((_DWORD *)this + 7) == 5 )
  {
    v7 = *(this + 3) / *(float *)(*(_DWORD *)(*(_DWORD *)this + 80) + 124);
    v3 = *(float *)(*(_DWORD *)(*(_DWORD *)this + 80) + 124) * v7 * v7 * 0.5;
    v4 = *(this + 6) + v3;
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 4) + 16) + 124 * *((_DWORD *)this + 1) + 32);
    while ( v4 < 0.0 )
      v4 = (double)v6 + v4;
    while ( v4 >= (double)v6 )
      v4 = v4 - (double)v6;
    if ( *(this + 2) < (double)v4 )
      v4 = v4 - (double)v6;
    v5 = v4 - *(this + 2);
    *(this + 5) = v5 / *(this + 3);
    if ( *(this + 5) < 0.0 )
      *(this + 5) = 0.0;
    *(this + 5) = *(this + 5) - (double)*((int *)this + 1) * 0.01;
    return this;
  }
  return result;
}


//======================================================================
// sub_5C43F0
// entry 005c43f0  size 542  status ok
//======================================================================

int __thiscall sub_5C43F0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-44h]
  unsigned int v3; // [esp+4h] [ebp-40h]
  unsigned int v4; // [esp+8h] [ebp-3Ch]
  int v5; // [esp+Ch] [ebp-38h]
  unsigned int v6; // [esp+14h] [ebp-30h]
  unsigned int v7; // [esp+18h] [ebp-2Ch]
  int v8; // [esp+1Ch] [ebp-28h]
  unsigned int i; // [esp+3Ch] [ebp-8h]
  unsigned int j; // [esp+3Ch] [ebp-8h]

  if ( *(this + 7) )
    v8 = (*(this + 8) - *(this + 7)) >> 2;
  else
    v8 = 0;
  for ( i = 0; (int)i < v8; ++i )
  {
    if ( *(this + 7) )
      v7 = (*(this + 8) - *(this + 7)) >> 2;
    else
      v7 = 0;
    if ( i >= v7 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 7) + 4 * i) )
    {
      if ( *(this + 7) )
        v6 = (*(this + 8) - *(this + 7)) >> 2;
      else
        v6 = 0;
      if ( i >= v6 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 7) + 4 * i) + 112))(*(_DWORD *)(*(this + 7) + 4 * i));
    }
  }
  if ( *(this + 23) )
    v5 = (*(this + 24) - *(this + 23)) / 52;
  else
    v5 = 0;
  for ( j = 0; (int)j < v5; ++j )
  {
    if ( *(this + 23) )
      v4 = (*(this + 24) - *(this + 23)) / 52;
    else
      v4 = 0;
    if ( j >= v4 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 52 * j + 48) )
    {
      if ( *(this + 23) )
        v3 = (*(this + 24) - *(this + 23)) / 52;
      else
        v3 = 0;
      if ( j >= v3 )
        invalid_parameter_noinfo();
      v2 = *(_DWORD *)(*(this + 23) + 52 * j + 48);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
    }
  }
  return sub_5C3110(this, 5);
}


//======================================================================
// sub_5C4610
// entry 005c4610  size 305  status ok
//======================================================================

int __thiscall sub_5C4610(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-28h]
  unsigned int v3; // [esp+4h] [ebp-24h]
  unsigned int v4; // [esp+8h] [ebp-20h]
  int v5; // [esp+Ch] [ebp-1Ch]
  unsigned int i; // [esp+20h] [ebp-8h]

  sub_5C1B10(this);
  if ( *(this + 23) )
    v5 = (*(this + 24) - *(this + 23)) / 52;
  else
    v5 = 0;
  for ( i = 0; (int)i < v5; ++i )
  {
    if ( *(this + 23) )
      v4 = (*(this + 24) - *(this + 23)) / 52;
    else
      v4 = 0;
    if ( i >= v4 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 52 * i + 48) )
    {
      if ( *(this + 23) )
        v3 = (*(this + 24) - *(this + 23)) / 52;
      else
        v3 = 0;
      if ( i >= v3 )
        invalid_parameter_noinfo();
      v2 = *(_DWORD *)(*(this + 23) + 52 * i + 48);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 116))(v2, v2);
    }
  }
  return sub_5C3110(this, 0);
}


//======================================================================
// sub_5C47B0
// entry 005c47b0  size 69  status ok
//======================================================================

int __thiscall sub_5C47B0(_DWORD *this)
{
  _DWORD *v1; // eax
  int v4; // [esp+4h] [ebp-Ch]
  _BYTE v5[8]; // [esp+8h] [ebp-8h] BYREF

  sub_5C9140(this);
  v4 = *(this + 1);
  sub_5DCB00(0);
  v1 = (_DWORD *)sub_5D5A90(v5);
  return v4 + sub_5D0D30(*v1, v1[1]);
}


//======================================================================
// sub_5C4800
// entry 005c4800  size 50  status ok
//======================================================================

bool __thiscall sub_5C4800(_DWORD *this)
{
  return *(this + 21) == 1 || *(this + 21) == 2;
}


//======================================================================
// sub_5C4840
// entry 005c4840  size 42  status ok
//======================================================================

bool __thiscall sub_5C4840(_DWORD *this)
{
  return *(this + 21) <= 4u;
}


//======================================================================
// sub_5C4870
// entry 005c4870  size 50  status ok
//======================================================================

bool __thiscall sub_5C4870(_DWORD *this)
{
  return !*(this + 21) || *(this + 21) == 3;
}


//======================================================================
// sub_5C48B0
// entry 005c48b0  size 25  status ok
//======================================================================

bool __thiscall sub_5C48B0(_DWORD *this)
{
  return *(this + 21) == 4;
}


//======================================================================
// sub_5C4900
// entry 005c4900  size 21  status ok
//======================================================================

int __thiscall sub_5C4900(void *this)
{
  return sub_5C4920(this);
}


//======================================================================
// sub_5C4920
// entry 005c4920  size 198  status ok
//======================================================================

int __thiscall sub_5C4920(int this)
{
  char *v3; // [esp+1Ch] [ebp-Ch]
  char *i; // [esp+20h] [ebp-8h]

  if ( *(_DWORD *)(this + 4) )
  {
    v3 = *(char **)(this + 8);
    for ( i = *(char **)(this + 4); i != v3; i += 52 )
      sub_5C3980((void (__thiscall ****)(_DWORD, _DWORD))i);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  return this;
}


//======================================================================
// sub_5C49F0
// entry 005c49f0  size 432  status ok
//======================================================================

int __fastcall sub_5C49F0(_DWORD *a1, int a2, unsigned int a3, char a4)
{
  int result; // eax
  unsigned int v5; // [esp+0h] [ebp-80h]
  int v6; // [esp+4h] [ebp-7Ch]
  unsigned int v7; // [esp+8h] [ebp-78h]
  _DWORD *v9; // [esp+44h] [ebp-3Ch] BYREF
  unsigned int v10; // [esp+48h] [ebp-38h]
  unsigned int v11; // [esp+4Ch] [ebp-34h]
  unsigned int v12; // [esp+50h] [ebp-30h]
  unsigned int v13; // [esp+54h] [ebp-2Ch]
  _DWORD v14[4]; // [esp+58h] [ebp-28h] BYREF
  _DWORD *v15; // [esp+68h] [ebp-18h]
  unsigned int v16; // [esp+6Ch] [ebp-14h]
  _DWORD *v17; // [esp+70h] [ebp-10h]
  unsigned int v18; // [esp+74h] [ebp-Ch]
  _DWORD *v19; // [esp+78h] [ebp-8h]
  unsigned int v20; // [esp+7Ch] [ebp-4h]

  if ( a1[1] )
    v7 = (a1[2] - a1[1]) >> 2;
  else
    v7 = 0;
  if ( v7 >= a3 )
  {
    result = (int)a1;
    if ( a1[1] )
    {
      result = (a1[2] - a1[1]) >> 2;
      v5 = result;
    }
    else
    {
      v5 = 0;
    }
    if ( a3 < v5 )
    {
      v12 = a1[2];
      v17 = 0;
      if ( !a1 || a1[1] > v12 || v12 > a1[2] )
        invalid_parameter_noinfo();
      v17 = a1;
      v18 = v12;
      v11 = a1[1];
      v15 = 0;
      if ( !a1 || a1[1] > v11 || v11 > a1[2] )
        invalid_parameter_noinfo();
      v15 = a1;
      v16 = v11;
      v9 = a1;
      v10 = v11;
      sub_5BEEB0(&v9, a3);
      v14[2] = v9;
      v14[3] = v10;
      return (int)sub_5BC490(a1, v14, (int)v9, v10, (int)v17, v18);
    }
  }
  else
  {
    if ( a1[1] )
      v6 = (a1[2] - a1[1]) >> 2;
    else
      v6 = 0;
    v13 = a1[2];
    v19 = 0;
    if ( !a1 || a1[1] > v13 || v13 > a1[2] )
      invalid_parameter_noinfo();
    v19 = a1;
    v20 = v13;
    return sub_5C4E10(a1, v13, a3 - v6, &a4);
  }
  return result;
}


//======================================================================
// sub_5C4BA0
// entry 005c4ba0  size 619  status ok
//======================================================================

int __thiscall sub_5C4BA0(
        _DWORD *this,
        unsigned int a2,
        void (__thiscall ***a3)(_DWORD, _DWORD),
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  unsigned int v16; // [esp+4h] [ebp-A0h]
  int v17; // [esp+8h] [ebp-9Ch]
  unsigned int v18; // [esp+Ch] [ebp-98h]
  unsigned int v20; // [esp+64h] [ebp-40h]
  unsigned int v21; // [esp+68h] [ebp-3Ch]
  unsigned int v22; // [esp+6Ch] [ebp-38h]
  _BYTE v23[8]; // [esp+70h] [ebp-34h] BYREF
  _DWORD *v24; // [esp+78h] [ebp-2Ch]
  unsigned int v25; // [esp+7Ch] [ebp-28h]
  _DWORD *v26; // [esp+80h] [ebp-24h]
  unsigned int v27; // [esp+84h] [ebp-20h]
  _DWORD *v28; // [esp+88h] [ebp-1Ch]
  unsigned int v29; // [esp+8Ch] [ebp-18h]
  _DWORD *v30; // [esp+90h] [ebp-14h]
  unsigned int v31; // [esp+94h] [ebp-10h]
  int v32; // [esp+A0h] [ebp-4h]

  v32 = 0;
  if ( *(this + 1) )
    v18 = (*(this + 2) - *(this + 1)) / 52;
  else
    v18 = 0;
  if ( v18 >= a2 )
  {
    if ( *(this + 1) )
      v16 = (*(this + 2) - *(this + 1)) / 52;
    else
      v16 = 0;
    if ( a2 < v16 )
    {
      v21 = *(this + 2);
      v28 = 0;
      if ( !this || *(this + 1) > v21 || v21 > *(this + 2) )
        invalid_parameter_noinfo();
      v28 = this;
      v29 = v21;
      v20 = *(this + 1);
      v26 = 0;
      if ( !this || *(this + 1) > v20 || v20 > *(this + 2) )
        invalid_parameter_noinfo();
      v26 = this;
      v27 = v20;
      sub_5C6160(a2);
      v24 = this;
      v25 = v20;
      sub_5C55A0(v23, this, v20, v28, v29);
    }
  }
  else
  {
    if ( *(this + 1) )
      v17 = (*(this + 2) - *(this + 1)) / 52;
    else
      v17 = 0;
    v22 = *(this + 2);
    v30 = 0;
    if ( !this || *(this + 1) > v22 || v22 > *(this + 2) )
      invalid_parameter_noinfo();
    v30 = this;
    v31 = v22;
    sub_5C5670(this, v22, a2 - v17, &a3);
  }
  v32 = -1;
  return sub_5C3980(&a3);
}


//======================================================================
// sub_5C4E10
// entry 005c4e10  size 1925  status ok
//======================================================================

_DWORD *__thiscall sub_5C4E10(_DWORD *this, int a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  char *v6; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-240h] BYREF
  int v8; // [esp+10h] [ebp-230h]
  char *v9; // [esp+14h] [ebp-22Ch]
  int v10; // [esp+18h] [ebp-228h]
  int v11; // [esp+1Ch] [ebp-224h]
  unsigned int v12; // [esp+20h] [ebp-220h]
  int v13; // [esp+24h] [ebp-21Ch]
  int v14; // [esp+28h] [ebp-218h]
  int v15; // [esp+2Ch] [ebp-214h]
  int v16; // [esp+30h] [ebp-210h]
  int v17; // [esp+34h] [ebp-20Ch]
  _DWORD *v18; // [esp+38h] [ebp-208h]
  char *v19; // [esp+3Ch] [ebp-204h]
  _DWORD *v20; // [esp+40h] [ebp-200h]
  _DWORD *i; // [esp+44h] [ebp-1FCh]
  _DWORD *v22; // [esp+4Ch] [ebp-1F4h]
  char *v23; // [esp+88h] [ebp-1B8h]
  char *v24; // [esp+8Ch] [ebp-1B4h]
  int v25; // [esp+90h] [ebp-1B0h]
  const void *v26; // [esp+94h] [ebp-1ACh]
  char v27; // [esp+9Bh] [ebp-1A5h]
  char *v28; // [esp+9Ch] [ebp-1A4h]
  const void *v29; // [esp+C0h] [ebp-180h]
  int v30; // [esp+C8h] [ebp-178h]
  char v31; // [esp+CDh] [ebp-173h]
  char v32; // [esp+CEh] [ebp-172h]
  char v33; // [esp+CFh] [ebp-171h]
  int v34; // [esp+D0h] [ebp-170h]
  _DWORD *v35; // [esp+D4h] [ebp-16Ch]
  _DWORD *j; // [esp+D8h] [ebp-168h]
  _DWORD *v37; // [esp+E0h] [ebp-160h]
  int v38; // [esp+110h] [ebp-130h]
  int v39; // [esp+148h] [ebp-F8h]
  void *v40; // [esp+14Ch] [ebp-F4h]
  int v41; // [esp+150h] [ebp-F0h]
  int v42; // [esp+154h] [ebp-ECh]
  int v43; // [esp+158h] [ebp-E8h]
  int v44; // [esp+15Ch] [ebp-E4h]
  char v45; // [esp+162h] [ebp-DEh]
  char v46; // [esp+163h] [ebp-DDh]
  int v47; // [esp+170h] [ebp-D0h]
  char *v48; // [esp+174h] [ebp-CCh]
  int v49; // [esp+178h] [ebp-C8h]
  _DWORD *v50; // [esp+17Ch] [ebp-C4h]
  char v51; // [esp+183h] [ebp-BDh]
  char *v52; // [esp+184h] [ebp-BCh]
  _DWORD *v53; // [esp+188h] [ebp-B8h]
  int v54; // [esp+190h] [ebp-B0h]
  char v55; // [esp+195h] [ebp-ABh]
  char v56; // [esp+196h] [ebp-AAh]
  char v57; // [esp+197h] [ebp-A9h]
  char *v58; // [esp+198h] [ebp-A8h]
  char v59; // [esp+19Fh] [ebp-A1h]
  char *v60; // [esp+1A0h] [ebp-A0h]
  char v61; // [esp+1A5h] [ebp-9Bh]
  char v62; // [esp+1A6h] [ebp-9Ah]
  char v63; // [esp+1A7h] [ebp-99h]
  const void *v64; // [esp+1A8h] [ebp-98h]
  void *v65; // [esp+1ACh] [ebp-94h]
  _DWORD *v66; // [esp+1B0h] [ebp-90h]
  const void *v67; // [esp+1B4h] [ebp-8Ch]
  char v68; // [esp+1BBh] [ebp-85h]
  void *v69; // [esp+1BCh] [ebp-84h]
  const void *v70; // [esp+1C0h] [ebp-80h]
  _DWORD *v71; // [esp+1C8h] [ebp-78h]
  char v72; // [esp+1CDh] [ebp-73h]
  char v73; // [esp+1CEh] [ebp-72h]
  char v74; // [esp+1CFh] [ebp-71h]
  int v75; // [esp+1D0h] [ebp-70h]
  int v76; // [esp+218h] [ebp-28h]
  int v77; // [esp+21Ch] [ebp-24h]
  void *v78; // [esp+220h] [ebp-20h]
  char *v79; // [esp+224h] [ebp-1Ch]
  unsigned int v80; // [esp+228h] [ebp-18h]
  _DWORD v81[2]; // [esp+22Ch] [ebp-14h] BYREF
  int v82; // [esp+23Ch] [ebp-4h]
  unsigned int v83; // [esp+250h] [ebp+10h]

  v81[1] = v7;
  v18 = this;
  v81[0] = *a5;
  if ( *(this + 1) )
    v17 = (v18[3] - v18[1]) >> 2;
  else
    v17 = 0;
  result = (_DWORD *)v17;
  v80 = v17;
  if ( a4 )
  {
    v76 = 0x3FFFFFFF;
    v16 = 0x3FFFFFFF;
    if ( v18[1] )
      v15 = (v18[2] - v18[1]) >> 2;
    else
      v15 = 0;
    if ( v16 - v15 < a4 )
    {
      sub_5C6020(v7[0], v7[1]);
      JUMPOUT(0x5C4EFF);
    }
    if ( v18[1] )
      v14 = (v18[2] - v18[1]) >> 2;
    else
      v14 = 0;
    if ( v80 >= a4 + v14 )
    {
      if ( (v18[2] - (int)a3) >> 2 >= a4 )
      {
        v77 = v18[2];
        v23 = (char *)v18[2];
        v24 = v23;
        v25 = v77;
        v26 = (const void *)(v77 - 4 * a4);
        v33 = 0;
        v32 = v31;
        v30 = v77;
        v29 = v26;
        v27 = 0;
        v28 = v23;
        v6 = sub_5BF010(v26, v77, v23);
        v18[2] = v6;
        sub_5C61D0(a3, v77 - 4 * a4, v77);
        v19 = (char *)&a3[a4];
        result = a3;
        v20 = a3;
        v22 = v19;
        for ( i = a3; i != v22; ++i )
        {
          *i = v81[0];
          result = i + 1;
        }
      }
      else
      {
        v38 = v18[2];
        sub_5BEFC0((int)a3, v38, (int)&a3[a4]);
        v82 = 2;
        sub_5C5FD0(v18[2], a4 - ((v18[2] - (int)a3) >> 2), v81);
        v82 = -1;
        v18[2] += 4 * a4;
        v34 = v18[2] - 4 * a4;
        v35 = a3;
        v37 = (_DWORD *)v34;
        for ( j = a3; ; ++j )
        {
          result = j;
          if ( j == v37 )
            break;
          *j = v81[0];
        }
      }
    }
    else
    {
      v75 = 0x3FFFFFFF;
      v13 = 0x3FFFFFFF;
      if ( 0x3FFFFFFF - (v80 >> 1) >= v80 )
        v12 = v80 + (v80 >> 1);
      else
        v12 = 0;
      v80 = v12;
      if ( v18[1] )
        v11 = (v18[2] - v18[1]) >> 2;
      else
        v11 = 0;
      if ( v80 < a4 + v11 )
      {
        if ( v18[1] )
          v10 = (v18[2] - v18[1]) >> 2;
        else
          v10 = 0;
        v80 = a4 + v10;
      }
      v78 = (void *)sub_5C6310(v80);
      v79 = (char *)v78;
      v82 = 0;
      v64 = (const void *)v18[1];
      v65 = v78;
      v66 = a3;
      v67 = v64;
      v74 = 0;
      v73 = v72;
      v71 = a3;
      v70 = v64;
      v68 = 0;
      v69 = v78;
      v9 = sub_5BF010(v64, (int)a3, (char *)v78);
      v79 = v9;
      v58 = v9;
      v63 = 0;
      v62 = v61;
      v59 = 0;
      v60 = v9;
      sub_5C0910(v9, (_DWORD *)a4, v81);
      v79 += 4 * a4;
      v47 = v18[2];
      v48 = v79;
      v49 = v47;
      v50 = a3;
      v57 = 0;
      v56 = v55;
      v54 = v47;
      v53 = a3;
      v51 = 0;
      v52 = v79;
      sub_5BF010(a3, v47, v79);
      v82 = -1;
      if ( v18[1] )
        v8 = (v18[2] - v18[1]) >> 2;
      else
        v8 = 0;
      v83 = v8 + a4;
      if ( v18[1] )
      {
        v41 = v18[2];
        v42 = v18[1];
        v43 = v41;
        v44 = v42;
        v46 = v45;
        v39 = (v18[3] - v18[1]) >> 2;
        v40 = (void *)v18[1];
        operator delete(v40);
      }
      v18[3] = (char *)v78 + 4 * v80;
      v18[2] = (char *)v78 + 4 * v83;
      result = v18;
      v18[1] = v78;
    }
  }
  return result;
}


//======================================================================
// sub_5C55A0
// entry 005c55a0  size 202  status ok
//======================================================================

_DWORD *__thiscall sub_5C55A0(char **this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  char *v8; // [esp+10h] [ebp-3Ch]
  char *i; // [esp+14h] [ebp-38h]
  char *v10; // [esp+48h] [ebp-4h]

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v10 = (char *)sub_5C6270(a6, *(this + 2), a4);
    v8 = *(this + 2);
    for ( i = v10; i != v8; i += 52 )
      sub_5C3980((void (__thiscall ****)(_DWORD, _DWORD))i);
    *(this + 2) = v10;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}


//======================================================================
// sub_5C5670
// entry 005c5670  size 2385  status ok
//======================================================================

int __thiscall sub_5C5670(void *this, int a2, float *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-278h] BYREF
  int v8; // [esp+10h] [ebp-268h]
  char *v9; // [esp+14h] [ebp-264h]
  int v10; // [esp+18h] [ebp-260h]
  int v11; // [esp+1Ch] [ebp-25Ch]
  unsigned int v12; // [esp+20h] [ebp-258h]
  int v13; // [esp+24h] [ebp-254h]
  int v14; // [esp+28h] [ebp-250h]
  int v15; // [esp+2Ch] [ebp-24Ch]
  int v16; // [esp+30h] [ebp-248h]
  int v17; // [esp+34h] [ebp-244h]
  void *v18; // [esp+38h] [ebp-240h]
  float *v19; // [esp+3Ch] [ebp-23Ch]
  float *v20; // [esp+40h] [ebp-238h]
  float *i; // [esp+44h] [ebp-234h]
  float *v22; // [esp+4Ch] [ebp-22Ch]
  int v23; // [esp+54h] [ebp-224h]
  int v24; // [esp+58h] [ebp-220h]
  float *v25; // [esp+5Ch] [ebp-21Ch]
  float *v26; // [esp+84h] [ebp-1F4h]
  int v27; // [esp+8Ch] [ebp-1ECh]
  char v28; // [esp+94h] [ebp-1E4h]
  char v29; // [esp+96h] [ebp-1E2h]
  char v30; // [esp+97h] [ebp-1E1h]
  int v31; // [esp+98h] [ebp-1E0h]
  int v32; // [esp+D0h] [ebp-1A8h]
  float *v33; // [esp+D4h] [ebp-1A4h]
  float *j; // [esp+D8h] [ebp-1A0h]
  float *v35; // [esp+E0h] [ebp-198h]
  unsigned int v36; // [esp+100h] [ebp-178h]
  int v37; // [esp+104h] [ebp-174h]
  int v38; // [esp+108h] [ebp-170h]
  char v39; // [esp+10Dh] [ebp-16Bh]
  char v40; // [esp+10Eh] [ebp-16Ah]
  char v41; // [esp+10Fh] [ebp-169h]
  int v42; // [esp+110h] [ebp-168h]
  int v43; // [esp+148h] [ebp-130h]
  void *v44; // [esp+14Ch] [ebp-12Ch]
  void *v45; // [esp+150h] [ebp-128h]
  void *v46; // [esp+154h] [ebp-124h]
  void *v47; // [esp+158h] [ebp-120h]
  void *v48; // [esp+15Ch] [ebp-11Ch]
  void *v49; // [esp+160h] [ebp-118h]
  void *k; // [esp+164h] [ebp-114h]
  char v51; // [esp+16Ah] [ebp-10Eh]
  char v52; // [esp+16Bh] [ebp-10Dh]
  int v53; // [esp+180h] [ebp-F8h]
  char *v54; // [esp+184h] [ebp-F4h]
  int v55; // [esp+188h] [ebp-F0h]
  float *v56; // [esp+18Ch] [ebp-ECh]
  char v57; // [esp+193h] [ebp-E5h]
  char *v58; // [esp+194h] [ebp-E4h]
  float *v59; // [esp+198h] [ebp-E0h]
  int v60; // [esp+1A0h] [ebp-D8h]
  char v61; // [esp+1A5h] [ebp-D3h]
  char v62; // [esp+1A6h] [ebp-D2h]
  char v63; // [esp+1A7h] [ebp-D1h]
  char *v64; // [esp+1A8h] [ebp-D0h]
  char v65; // [esp+1ADh] [ebp-CBh]
  char v66; // [esp+1AEh] [ebp-CAh]
  char v67; // [esp+1AFh] [ebp-C9h]
  int v68; // [esp+1B0h] [ebp-C8h]
  void *v69; // [esp+1B4h] [ebp-C4h]
  float *v70; // [esp+1B8h] [ebp-C0h]
  int v71; // [esp+1BCh] [ebp-BCh]
  char v72; // [esp+1C3h] [ebp-B5h]
  void *v73; // [esp+1C4h] [ebp-B4h]
  int v74; // [esp+1C8h] [ebp-B0h]
  float *v75; // [esp+1D0h] [ebp-A8h]
  char v76; // [esp+1D5h] [ebp-A3h]
  char v77; // [esp+1D6h] [ebp-A2h]
  char v78; // [esp+1D7h] [ebp-A1h]
  int v79; // [esp+1D8h] [ebp-A0h]
  int v80; // [esp+220h] [ebp-58h]
  int v81; // [esp+224h] [ebp-54h]
  void *v82; // [esp+228h] [ebp-50h]
  char *v83; // [esp+22Ch] [ebp-4Ch]
  unsigned int v84; // [esp+230h] [ebp-48h]
  void (__thiscall ***v85[14])(_DWORD, _DWORD); // [esp+234h] [ebp-44h] BYREF
  int v86; // [esp+274h] [ebp-4h]
  unsigned int v87; // [esp+288h] [ebp+10h]

  v85[13] = (void (__thiscall ***)(_DWORD, _DWORD))v7;
  v18 = this;
  sub_5C38F0(v85, a5);
  v86 = 0;
  if ( *((_DWORD *)v18 + 1) )
    v17 = (*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1)) / 52;
  else
    v17 = 0;
  v84 = v17;
  if ( a4 )
  {
    v80 = 82595524;
    v16 = 82595524;
    if ( *((_DWORD *)v18 + 1) )
      v15 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 52;
    else
      v15 = 0;
    if ( v16 - v15 >= a4 )
    {
      if ( *((_DWORD *)v18 + 1) )
        v14 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 52;
      else
        v14 = 0;
      if ( v84 >= a4 + v14 )
      {
        if ( (*((_DWORD *)v18 + 2) - (int)a3) / 52 >= a4 )
        {
          v81 = *((_DWORD *)v18 + 2);
          v31 = *((_DWORD *)v18 + 2);
          v5 = sub_5C69F0(v81 - 52 * a4, v81, v31, v18);
          *((_DWORD *)v18 + 2) = v5;
          v23 = v81;
          v24 = v81 - 52 * a4;
          v25 = a3;
          v30 = 0;
          v29 = v28;
          v27 = v24;
          v26 = a3;
          sub_5C6A70(a3, v24, v81);
          v19 = &a3[13 * a4];
          v20 = a3;
          v22 = v19;
          for ( i = a3; i != v22; i += 13 )
            sub_5C3A20(i, (float *)v85);
        }
        else
        {
          v42 = *((_DWORD *)v18 + 2);
          sub_5C69F0(a3, v42, &a3[13 * a4], v18);
          LOBYTE(v86) = 3;
          v36 = a4 - (*((_DWORD *)v18 + 2) - (int)a3) / 52;
          v37 = *((_DWORD *)v18 + 2);
          v38 = v37;
          v41 = 0;
          v40 = v39;
          sub_5C6B00(v37, v36, v85);
          v86 = 0;
          *((_DWORD *)v18 + 2) += 52 * a4;
          v32 = *((_DWORD *)v18 + 2) - 52 * a4;
          v33 = a3;
          v35 = (float *)v32;
          for ( j = a3; j != v35; j += 13 )
            sub_5C3A20(j, (float *)v85);
        }
      }
      else
      {
        v79 = 82595524;
        v13 = 82595524;
        if ( 82595524 - (v84 >> 1) >= v84 )
          v12 = v84 + (v84 >> 1);
        else
          v12 = 0;
        v84 = v12;
        if ( *((_DWORD *)v18 + 1) )
          v11 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 52;
        else
          v11 = 0;
        if ( v84 < a4 + v11 )
        {
          if ( *((_DWORD *)v18 + 1) )
            v10 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 52;
          else
            v10 = 0;
          v84 = a4 + v10;
        }
        v82 = (void *)sub_5C6370(v84);
        v83 = (char *)v82;
        LOBYTE(v86) = 1;
        v68 = *((_DWORD *)v18 + 1);
        v69 = v82;
        v70 = a3;
        v71 = v68;
        v78 = 0;
        v77 = v76;
        v75 = a3;
        v74 = v68;
        v72 = 0;
        v73 = v82;
        v9 = (char *)sub_5C6C00(v68, a3, v82, v18);
        v83 = v9;
        v64 = v9;
        v67 = 0;
        v66 = v65;
        sub_5C6B00(v9, a4, v85);
        v83 += 52 * a4;
        v53 = *((_DWORD *)v18 + 2);
        v54 = v83;
        v55 = v53;
        v56 = a3;
        v63 = 0;
        v62 = v61;
        v60 = v53;
        v59 = a3;
        v57 = 0;
        v58 = v83;
        sub_5C6C00(a3, v53, v83, v18);
        v86 = 0;
        if ( *((_DWORD *)v18 + 1) )
          v8 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 52;
        else
          v8 = 0;
        v87 = v8 + a4;
        if ( *((_DWORD *)v18 + 1) )
        {
          v45 = (void *)*((_DWORD *)v18 + 2);
          v46 = (void *)*((_DWORD *)v18 + 1);
          v47 = v45;
          v48 = v46;
          v52 = v51;
          v49 = v45;
          for ( k = v46; k != v49; k = (char *)k + 52 )
            sub_5C3980((void (__thiscall ****)(_DWORD, _DWORD))k);
          v43 = (*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1)) / 52;
          v44 = (void *)*((_DWORD *)v18 + 1);
          operator delete(v44);
        }
        *((_DWORD *)v18 + 3) = (char *)v82 + 52 * v84;
        *((_DWORD *)v18 + 2) = (char *)v82 + 52 * v87;
        *((_DWORD *)v18 + 1) = v82;
      }
    }
    else
    {
      sub_5C60C0(v7[0], v7[1]);
    }
  }
  v86 = -1;
  return sub_5C3980(v85);
}


//======================================================================
// sub_5C5FD0
// entry 005c5fd0  size 73  status ok
//======================================================================

_DWORD *__stdcall sub_5C5FD0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  sub_5C0910(a1, a2, a3);
  return &a1[(_DWORD)a2];
}


//======================================================================
// sub_5C6020
// entry 005c6020  size 116  status ok
//======================================================================

void __noreturn sub_5C6020()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5C60C0
// entry 005c60c0  size 116  status ok
//======================================================================

void __noreturn sub_5C60C0()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5C6160
// entry 005c6160  size 98  status ok
//======================================================================

_DWORD *__thiscall sub_5C6160(_DWORD *this, int a2)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( (unsigned int)(*(this + 1) + 52 * a2) > *(_DWORD *)(*this + 8)
    || (unsigned int)(*(this + 1) + 52 * a2) < *(_DWORD *)(*this + 4) )
  {
    invalid_parameter_noinfo();
  }
  *(this + 1) += 52 * a2;
  return this;
}


//======================================================================
// sub_5C61D0
// entry 005c61d0  size 152  status ok
//======================================================================

int __cdecl sub_5C61D0(const void *a1, int a2, int a3)
{
  int v4; // [esp+18h] [ebp-20h]

  v4 = (a2 - (int)a1) >> 2;
  if ( v4 > 0 )
    memmove_s((void *const)(a3 - 4 * ((a2 - (int)a1) >> 2)), 4 * v4, a1, 4 * v4);
  return a3 - 4 * ((a2 - (int)a1) >> 2);
}


//======================================================================
// sub_5C6270
// entry 005c6270  size 153  status ok
//======================================================================

float *__cdecl sub_5C6270(float *a1, float *a2, float *a3)
{
  float *v4; // [esp+Ch] [ebp-24h]
  float *i; // [esp+10h] [ebp-20h]

  v4 = a3;
  for ( i = a1; i != a2; i += 13 )
  {
    sub_5C3A20(v4, i);
    v4 += 13;
  }
  return &a3[13 * (((char *)a2 - (char *)a1) / 52)];
}


//======================================================================
// sub_5C6310
// entry 005c6310  size 94  status ok
//======================================================================

void *__cdecl sub_5C6310(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 4 )
    {
      v2 = 0;
      std::exception::exception((std::exception *)pExceptionObject, &v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(4 * a1);
}


//======================================================================
// sub_5C6370
// entry 005c6370  size 94  status ok
//======================================================================

void *__cdecl sub_5C6370(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x34 )
    {
      v2 = 0;
      std::exception::exception((std::exception *)pExceptionObject, &v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(52 * a1);
}


//======================================================================
// sub_5C63D0
// entry 005c63d0  size 928  status ok
//======================================================================

int __thiscall sub_5C63D0(int this, int a2)
{
  char v2; // al
  int v4; // [esp+4h] [ebp-164h]
  unsigned int v5; // [esp+8h] [ebp-160h]
  unsigned int v6; // [esp+Ch] [ebp-15Ch]
  int v7; // [esp+10h] [ebp-158h]
  unsigned int v8; // [esp+14h] [ebp-154h]
  unsigned int v9; // [esp+18h] [ebp-150h]
  int v10; // [esp+1Ch] [ebp-14Ch]
  const void *v12; // [esp+160h] [ebp-8h]

  if ( this != a2 )
  {
    if ( *(_DWORD *)(a2 + 4) )
      v10 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
    else
      v10 = 0;
    if ( v10 )
    {
      if ( *(_DWORD *)(a2 + 4) )
        v9 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
      else
        v9 = 0;
      if ( *(_DWORD *)(this + 4) )
        v8 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) >> 2;
      else
        v8 = 0;
      if ( v9 > v8 )
      {
        if ( *(_DWORD *)(a2 + 4) )
          v6 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
        else
          v6 = 0;
        if ( *(_DWORD *)(this + 4) )
          v5 = (*(_DWORD *)(this + 12) - *(_DWORD *)(this + 4)) >> 2;
        else
          v5 = 0;
        if ( v6 > v5 )
        {
          if ( *(_DWORD *)(this + 4) )
            operator delete(*(void **)(this + 4));
          if ( *(_DWORD *)(a2 + 4) )
            v2 = sub_5BEF20((_DWORD *)this, (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2);
          else
            v2 = sub_5BEF20((_DWORD *)this, 0);
          if ( v2 )
            *(_DWORD *)(this + 8) = sub_5BF010(*(const void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(char **)(this + 4));
        }
        else
        {
          if ( *(_DWORD *)(this + 4) )
            v4 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) >> 2;
          else
            v4 = 0;
          v12 = (const void *)(*(_DWORD *)(a2 + 4) + 4 * v4);
          sub_5C0980(*(const void **)(a2 + 4), (int)v12, *(char **)(this + 4));
          *(_DWORD *)(this + 8) = sub_5BF010(v12, *(_DWORD *)(a2 + 8), *(char **)(this + 8));
        }
      }
      else
      {
        sub_5C0980(*(const void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(char **)(this + 4));
        if ( *(_DWORD *)(a2 + 4) )
          v7 = (*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4)) >> 2;
        else
          v7 = 0;
        *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 4 * v7;
      }
    }
    else
    {
      sub_5BC3E0((_DWORD *)this);
    }
  }
  return this;
}


//======================================================================
// sub_5C6770
// entry 005c6770  size 152  status ok
//======================================================================

char __thiscall sub_5C6770(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
  {
    sub_5C6950(0x3FFFFFFF, this);
    JUMPOUT(0x5C67CC);
  }
  *(this + 1) = sub_5C6310(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 4 * a2;
  return 1;
}


//======================================================================
// sub_5C6810
// entry 005c6810  size 152  status ok
//======================================================================

char __thiscall sub_5C6810(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_5C6020();
  *(this + 1) = sub_5C6310(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 4 * a2;
  return 1;
}


//======================================================================
// sub_5C68B0
// entry 005c68b0  size 152  status ok
//======================================================================

char __thiscall sub_5C68B0(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x4EC4EC4 )
    sub_5C60C0();
  *(this + 1) = sub_5C6370(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 52 * a2;
  return 1;
}


//======================================================================
// sub_5C6950
// entry 005c6950  size 116  status ok
//======================================================================

void __noreturn sub_5C6950()
{
  _BYTE v0[28]; // [esp+4h] [ebp-50h] BYREF
  _DWORD pExceptionObject[3]; // [esp+20h] [ebp-34h] BYREF
  _BYTE v2[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v3; // [esp+50h] [ebp-4h]

  std::string::string(v0, "vector<T> too long");
  v3 = 0;
  std::exception::exception((std::exception *)pExceptionObject);
  LOBYTE(v3) = 1;
  pExceptionObject[0] = &std::logic_error::`vftable';
  std::string::string(v2, v0);
  LOBYTE(v3) = 0;
  pExceptionObject[0] = &std::length_error::`vftable';
  CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


//======================================================================
// sub_5C69F0
// entry 005c69f0  size 118  status ok
//======================================================================

int __cdecl sub_5C69F0(int a1, int a2, int a3)
{
  return sub_5C6C50(a1, a2, a3);
}


//======================================================================
// sub_5C6A70
// entry 005c6a70  size 141  status ok
//======================================================================

float *__cdecl sub_5C6A70(float *a1, float *a2, float *a3)
{
  float *v4; // [esp+10h] [ebp-14h]
  float *i; // [esp+14h] [ebp-10h]

  v4 = a3;
  for ( i = a2; a1 != i; sub_5C3A20(v4, i) )
  {
    i -= 13;
    v4 -= 13;
  }
  return &a3[-13 * (((char *)a2 - (char *)a1) / 52)];
}


//======================================================================
// sub_5C6B00
// entry 005c6b00  size 244  status ok
//======================================================================

_DWORD *__cdecl sub_5C6B00(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v5; // [esp+10h] [ebp-28h]
  _DWORD *v6; // [esp+14h] [ebp-24h]
  _DWORD *v7; // [esp+18h] [ebp-20h]
  _DWORD *v8; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v9; // [esp+20h] [ebp-18h]
  void *v10; // [esp+24h] [ebp-14h]
  int *v11; // [esp+28h] [ebp-10h]
  int v12; // [esp+34h] [ebp-4h]

  v11 = &v4;
  result = a1;
  v10 = a1;
  v12 = 0;
  while ( a2 )
  {
    result = a1;
    v9 = a1;
    v7 = a1;
    LOBYTE(v12) = 1;
    if ( a1 )
    {
      result = sub_5C38F0(v7, a3);
      v6 = result;
      v5 = result;
    }
    else
    {
      v5 = 0;
    }
    v8 = v5;
    LOBYTE(v12) = 0;
    --a2;
    a1 += 13;
  }
  return result;
}


//======================================================================
// sub_5C6C00
// entry 005c6c00  size 65  status ok
//======================================================================

int __cdecl sub_5C6C00(int a1, int a2, int a3)
{
  return sub_5C6C50(a1, a2, a3);
}


//======================================================================
// sub_5C6C50
// entry 005c6c50  size 249  status ok
//======================================================================

char *__cdecl sub_5C6C50(_DWORD *a1, _DWORD *a2, char *a3)
{
  int v4; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v5; // [esp+10h] [ebp-28h]
  _DWORD *v6; // [esp+14h] [ebp-24h]
  _DWORD *v7; // [esp+18h] [ebp-20h]
  _DWORD *v8; // [esp+1Ch] [ebp-1Ch]
  char *v9; // [esp+20h] [ebp-18h]
  void *v10; // [esp+24h] [ebp-14h]
  int *v11; // [esp+28h] [ebp-10h]
  int v12; // [esp+34h] [ebp-4h]

  v11 = &v4;
  v10 = a3;
  v12 = 0;
  while ( a1 != a2 )
  {
    v9 = a3;
    v7 = a3;
    LOBYTE(v12) = 1;
    if ( a3 )
    {
      v6 = sub_5C38F0(v7, a1);
      v5 = v6;
    }
    else
    {
      v5 = 0;
    }
    v8 = v5;
    LOBYTE(v12) = 0;
    a3 += 52;
    a1 += 13;
  }
  return a3;
}


//======================================================================
// sub_5C6D50
// entry 005c6d50  size 205  status ok
//======================================================================

int __cdecl sub_5C6D50(int a1)
{
  int v2; // [esp+4h] [ebp-20h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; ; ++i )
  {
    if ( !dword_75A1A0[63 * i] )
      return 0;
    if ( dword_75A1A0[63 * i] == a1 )
      break;
  }
  if ( operator new(0x74u) )
    v2 = sub_5C6E20();
  else
    v2 = 0;
  *(_DWORD *)(v2 + 80) = &dword_75A1A0[63 * i];
  return v2;
}


//======================================================================
// sub_5C6E20
// entry 005c6e20  size 164  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5C6E20(ATL::CCRTHeap *this)
{
  char v3; // [esp+67h] [ebp-15h] BYREF
  char *v4; // [esp+68h] [ebp-14h]
  int v5; // [esp+78h] [ebp-4h]

  sub_5C0A00(this);
  v5 = 0;
  *(_DWORD *)this = &MLVSlotDisplay_Jewelry::`vftable';
  v4 = &v3;
  sub_5BEF20((_DWORD *)this + 22, 0);
  *((_DWORD *)this + 20) = dword_75A1A0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 26) = 0;
  return this;
}


//======================================================================
// sub_5C6ED0
// entry 005c6ed0  size 205  status ok
//======================================================================

void __thiscall sub_5C6ED0(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+30h] [ebp-14h]

  *this = &MLVSlotDisplay_Jewelry::`vftable';
  if ( *(this + 20) )
    sub_6110A0(*(this + 20) + 92, 0);
  sub_5DD400(0);
  if ( *(this + 27) )
  {
    v2 = (void (__thiscall ***)(_DWORD, int))*(this + 27);
    if ( v2 )
      (**v2)(v2, 1);
  }
  sub_5BE450((int)(this + 22));
  sub_5C0B40((int)this);
}


//======================================================================
// sub_5C6FA0
// entry 005c6fa0  size 1114  status ok
//======================================================================

int __thiscall sub_5C6FA0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-D4h]
  int v7; // [esp+8h] [ebp-D0h]
  int v8; // [esp+Ch] [ebp-CCh]
  int v9; // [esp+10h] [ebp-C8h]
  void *v11; // [esp+90h] [ebp-48h]
  void *v12; // [esp+98h] [ebp-40h]
  void *v13; // [esp+A0h] [ebp-38h]
  void *v14; // [esp+A8h] [ebp-30h]
  void (__thiscall ***v15)(_DWORD, int); // [esp+B4h] [ebp-24h]
  int v16; // [esp+B8h] [ebp-20h]
  int v17; // [esp+BCh] [ebp-1Ch]
  int v18; // [esp+C0h] [ebp-18h]
  unsigned int i; // [esp+C8h] [ebp-10h]

  *(this + 2) = *((_DWORD *)dword_162EE84 + 5);
  if ( *(this + 1) )
  {
    v15 = (void (__thiscall ***)(_DWORD, int))*(this + 1);
    if ( v15 )
      (**v15)(v15, 1);
  }
  v14 = operator new(0xE8u);
  if ( v14 )
    v9 = Concurrency::_Order_node_base<enum Concurrency::agent_status>::_Order_node_base<enum Concurrency::agent_status>(v14);
  else
    v9 = 0;
  *(this + 1) = v9;
  sub_5C8C60(a2);
  v2 = sub_630F40("SID_CASINO_VIDEOSLOTS");
  sub_5F38B0(v2);
  sub_5F1B10(*(_BYTE *)(*(this + 20) + 4), *(_BYTE *)(*(this + 20) + 5), *(_BYTE *)(*(this + 20) + 6));
  *(this + 3) = &unk_759EE8;
  for ( i = 0; *(int *)(*(_DWORD *)(*(this + 20) + 84) + 20 * i) >= 0; ++i )
    ;
  sub_5BE4D0(this + 22, 20 * i, i, 0);
  if ( *(_DWORD *)(*(this + 20) + 8) )
  {
    v13 = operator new(0x178u);
    if ( v13 )
    {
      sub_5EAAF0(v13);
      v8 = v3;
    }
    else
    {
      v8 = 0;
    }
    v18 = v8;
    sub_5EAE80(*(_DWORD *)(*(this + 20) + 8), 0, 0, 21, -1);
    sub_5EB000(*(_DWORD *)(*(this + 20) + 12));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 176))(v18, *(_DWORD *)(*(this + 20) + 16));
    (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
  }
  if ( *(_DWORD *)(*(this + 20) + 20) )
  {
    v12 = operator new(0x190u);
    if ( v12 )
      v7 = sub_5F5F50(v12);
    else
      v7 = 0;
    *(this + 27) = v7;
    v17 = *(this + 27);
    sub_5EAE80(*(_DWORD *)(*(this + 20) + 20), 0, 0, 22, -1);
    sub_5EB000(*(_DWORD *)(*(this + 20) + 24));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 176))(v17, *(_DWORD *)(*(this + 20) + 28));
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 116))(v17);
  }
  if ( *(_DWORD *)(*(this + 20) + 32) )
  {
    v11 = operator new(0x178u);
    if ( v11 )
    {
      sub_5EAAF0(v11);
      v6 = v4;
    }
    else
    {
      v6 = 0;
    }
    v16 = v6;
    sub_5EAE80(*(_DWORD *)(*(this + 20) + 32), 0, 0, 24, -1);
    sub_5EB000(*(_DWORD *)(*(this + 20) + 36));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 176))(v16, *(_DWORD *)(*(this + 20) + 40));
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 116))(v16);
  }
  sub_5C10B0();
  sub_5C0F40(
    this,
    *(_DWORD *)(*(this + 20) + 72),
    *(_DWORD *)(*(_DWORD *)(*(this + 1) + 16) + 8),
    (_DWORD *)(*(this + 20) + 76),
    25);
  sub_5C13E0(this);
  sub_5C1B60((_DWORD **)this);
  sub_5C1D60(this, 1);
  return sub_5C1ED0(this);
}


//======================================================================
// sub_5C7400
// entry 005c7400  size 165  status ok
//======================================================================

char __thiscall sub_5C7400(_DWORD *this, int a2)
{
  int v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+10h] [ebp-Ch]
  char v6; // [esp+17h] [ebp-5h]

  v6 = 1;
  if ( sub_5C15C0(this, a2) )
    return 1;
  if ( a2 != 94 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 40))(this, 94)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 36))(this) )
  {
    v5 = *(_DWORD *)(*(this + 1) + 8);
    v4 = *(this + 1);
    sub_5C9140(v4);
    if ( v5 <= *(_DWORD *)(v4 + 4) )
      sub_5C74B0(1);
  }
  return v6;
}


//======================================================================
// sub_5C74B0
// entry 005c74b0  size 48  status ok
//======================================================================

int __thiscall sub_5C74B0(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
  *(this + 21) = a2;
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}


//======================================================================
// sub_5C74E0
// entry 005c74e0  size 138  status ok
//======================================================================

_DWORD *__thiscall sub_5C74E0(int this, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx

  v4 = sub_5BE340(*(_DWORD **)(this + 4), a2, a3);
  v5 = (_DWORD *)(*(_DWORD *)(this + 80) + 44);
  *a4 = *v5;
  a4[1] = v5[1];
  a4[2] = v5[2];
  *a4 += v4 * *(_DWORD *)(*(_DWORD *)(this + 80) + 56);
  a4[1] += v4 * *(_DWORD *)(*(_DWORD *)(this + 80) + 60);
  v6 = v4 * *(_DWORD *)(*(_DWORD *)(this + 80) + 64);
  a4[2] += v6;
  return a4;
}


//======================================================================
// sub_5C7570
// entry 005c7570  size 221  status ok
//======================================================================

int __thiscall sub_5C7570(void *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-2Ch]
  void *v5; // [esp+Ch] [ebp-24h]
  _DWORD v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  int v7; // [esp+20h] [ebp-10h]
  int v8; // [esp+2Ch] [ebp-4h]

  sub_5C74E0((int)this, a2, a3, v6);
  v5 = operator new(0x190u);
  v8 = 0;
  if ( v5 )
    v4 = sub_5F5F50(v5);
  else
    v4 = 0;
  v8 = -1;
  v7 = v4;
  sub_5EAE80(v6[0], 0, 0, 23, a2 + 3234012);
  sub_5EB000(v6[1]);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, v6[2]);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 116))(v7);
  return v7;
}


//======================================================================
// sub_5C7650
// entry 005c7650  size 1606  status ok
//======================================================================

int __thiscall sub_5C7650(int this)
{
  int Flags; // esi
  int v2; // esi
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v10; // [esp+0h] [ebp-9Ch]
  unsigned int v11; // [esp+8h] [ebp-94h]
  unsigned int v12; // [esp+10h] [ebp-8Ch]
  int v13; // [esp+14h] [ebp-88h]
  int v14; // [esp+18h] [ebp-84h]
  int v15; // [esp+1Ch] [ebp-80h]
  int v17; // [esp+30h] [ebp-6Ch]
  int v18; // [esp+58h] [ebp-44h]
  CDrawImage *v19; // [esp+60h] [ebp-3Ch]
  int v20; // [esp+64h] [ebp-38h]
  int v21; // [esp+68h] [ebp-34h]
  int v22; // [esp+6Ch] [ebp-30h]
  _DWORD v23[3]; // [esp+70h] [ebp-2Ch] BYREF
  unsigned int i; // [esp+7Ch] [ebp-20h]
  int v25; // [esp+80h] [ebp-1Ch]
  int v26; // [esp+84h] [ebp-18h]
  int v27; // [esp+88h] [ebp-14h]
  int v28; // [esp+8Ch] [ebp-10h]
  int v29; // [esp+98h] [ebp-4h]

  sub_5C1550((_DWORD **)this);
  switch ( *(_DWORD *)(this + 84) )
  {
    case 1:
      v29 = 0;
      if ( operator new(0x2Cu) )
        v15 = sub_600630(3234200, 0);
      else
        v15 = 0;
      v29 = -1;
      sub_5F5D50(v15);
      *(_DWORD *)(this + 112) = 1;
      sub_610980(*(_DWORD *)(this + 80) + 92);
      sub_610980(*(_DWORD *)(this + 80) + 220);
      sub_5DD400(1);
      sub_5C74B0((_DWORD *)this, 2);
      goto LABEL_6;
    case 2:
LABEL_6:
      if ( !CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 108)) )
      {
        sub_62FDE0("Initial shuffle\n", v10);
        sub_5C8FC0(*(_DWORD *)(this + 4));
        sub_5C9050(*(_DWORD *)(this + 4));
        sub_5C74B0((_DWORD *)this, 0);
        sub_5C74B0((_DWORD *)this, 5);
      }
      break;
    case 3:
      if ( !CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 108)) )
      {
        if ( (int)--*(_DWORD *)(this + 112) > 0 )
        {
          sub_62FDE0("Reshuffle!\n", v10);
          sub_5C9050(*(_DWORD *)(this + 4));
          sub_5C74B0((_DWORD *)this, 5);
        }
        else
        {
          sub_5C90C0(*(_DWORD *)(this + 4));
          sub_5C74B0((_DWORD *)this, 4);
        }
      }
      break;
    case 4:
      Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 108));
      if ( Flags > sub_5EB240(*(_DWORD *)(this + 108)) - 4 )
        sub_610E70(*(_DWORD *)(this + 80) + 92, 0);
      if ( !*(_DWORD *)(*(_DWORD *)(this + 108) + 384) )
      {
        sub_62FDE0("End\n", v10);
        *(_DWORD *)(this + 104) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
        sub_610E70(*(_DWORD *)(this + 80) + 92, 0);
        sub_5DD400(0);
        if ( (unsigned __int8)sub_5C9740(*(_DWORD *)(this + 4)) )
        {
          sub_610980(*(_DWORD *)(this + 80) + 156);
          sub_5C74B0((_DWORD *)this, 6);
        }
        else
        {
          if ( sub_5BE3F0(*(_DWORD **)(this + 4)) > 0 )
          {
            if ( (unsigned __int8)sub_5C9940(*(_DWORD *)(this + 4)) )
              v14 = *(_DWORD *)(this + 80) + 188;
            else
              v14 = *(_DWORD *)(this + 80) + 124;
            sub_610980(v14);
          }
          sub_5C74B0((_DWORD *)this, 0);
        }
      }
      break;
    case 5:
      if ( CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 108)) )
      {
        sub_610980(*(_DWORD *)(this + 80) + 220);
        sub_5C74B0((_DWORD *)this, 3);
      }
      break;
    case 6:
      if ( (unsigned int)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12))
                        - *(_DWORD *)(this + 104)) > 0xBB8 )
        sub_5C1A80((Concurrency::details::SchedulingRing **)this);
      break;
    default:
      break;
  }
  v25 = *(_DWORD *)(*(_DWORD *)(this + 80) + 84);
  v28 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12))
      - *(_DWORD *)(this + 104);
  v26 = 0;
  v27 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(this + 80) + 88) )
  {
    v2 = *(_DWORD *)(this + 80);
    v3 = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 108));
    v4 = *(_DWORD *)(v2 + 88);
    v5 = *(_DWORD *)(v4 + 8 * v3);
    v6 = *(_DWORD *)(v4 + 8 * v3 + 4);
    v26 = v5;
    v27 = v6;
  }
  for ( i = 0; *(int *)(v25 + 20 * i) >= 0; ++i )
  {
    v20 = *(_DWORD *)(v25 + 20 * i);
    v17 = *(_DWORD *)(this + 4);
    if ( *(int *)(v17 + 4 * v20 + 24) < 0 )
      v13 = -*(_DWORD *)(v17 + 4 * v20 + 24);
    else
      v13 = *(_DWORD *)(v17 + 4 * v20 + 24);
    v21 = v13 + *(_DWORD *)(v25 + 20 * i + 4);
    sub_5C74E0(this, v20, v21, v23);
    if ( *(_DWORD *)(this + 92) )
      v12 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) >> 2;
    else
      v12 = 0;
    if ( i >= v12 )
      invalid_parameter_noinfo();
    v19 = *(CDrawImage **)(*(_DWORD *)(this + 92) + 4 * i);
    if ( !v19 || (v7 = CDrawImage::UsingImageAllocator(v19), v7 != v23[0]) || (v8 = sub_5EB110(v19), v8 != v23[1]) )
    {
      if ( v19 )
        (**(void (__thiscall ***)(CDrawImage *, int))v19)(v19, 1);
      v19 = (CDrawImage *)sub_5C7570((void *)this, v20, v21);
      if ( *(_DWORD *)(this + 92) )
        v11 = (*(_DWORD *)(this + 96) - *(_DWORD *)(this + 92)) >> 2;
      else
        v11 = 0;
      if ( i >= v11 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(this + 92) + 4 * i) = v19;
    }
    v22 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 44))(this) )
    {
      if ( (int)sub_5C9960(v20, v21) > 0 )
      {
        v18 = sub_5EB240(v19) + 1;
        v22 = v28 / 250 % v18;
        if ( v22 >= v18 )
          v22 = v18 - 1;
      }
    }
    if ( v22 != CMFCToolBarsCustomizeDialog::GetFlags(v19) )
      (*(void (__thiscall **)(CDrawImage *, int))(*(_DWORD *)v19 + 176))(v19, v22);
    (*(void (__thiscall **)(CDrawImage *, int, int))(*(_DWORD *)v19 + 68))(
      v19,
      *(_DWORD *)(v25 + 20 * i + 8) + v26,
      *(_DWORD *)(v25 + 20 * i + 12) + v27);
  }
  sub_5C1B60((_DWORD **)this);
  return sub_5C1D60((_DWORD *)this, 0);
}


//======================================================================
// sub_5C7CB0
// entry 005c7cb0  size 517  status ok
//======================================================================

int __thiscall sub_5C7CB0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-44h]
  unsigned int v3; // [esp+4h] [ebp-40h]
  unsigned int v4; // [esp+8h] [ebp-3Ch]
  int v5; // [esp+Ch] [ebp-38h]
  unsigned int v6; // [esp+14h] [ebp-30h]
  unsigned int v7; // [esp+18h] [ebp-2Ch]
  int v8; // [esp+1Ch] [ebp-28h]
  unsigned int i; // [esp+3Ch] [ebp-8h]
  unsigned int j; // [esp+3Ch] [ebp-8h]

  if ( *(this + 7) )
    v8 = (*(this + 8) - *(this + 7)) >> 2;
  else
    v8 = 0;
  for ( i = 0; (int)i < v8; ++i )
  {
    if ( *(this + 7) )
      v7 = (*(this + 8) - *(this + 7)) >> 2;
    else
      v7 = 0;
    if ( i >= v7 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 7) + 4 * i) )
    {
      if ( *(this + 7) )
        v6 = (*(this + 8) - *(this + 7)) >> 2;
      else
        v6 = 0;
      if ( i >= v6 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 7) + 4 * i) + 112))(*(_DWORD *)(*(this + 7) + 4 * i));
    }
  }
  if ( *(this + 23) )
    v5 = (*(this + 24) - *(this + 23)) >> 2;
  else
    v5 = 0;
  for ( j = 0; (int)j < v5; ++j )
  {
    if ( *(this + 23) )
      v4 = (*(this + 24) - *(this + 23)) >> 2;
    else
      v4 = 0;
    if ( j >= v4 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 4 * j) )
    {
      if ( *(this + 23) )
        v3 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v3 = 0;
      if ( j >= v3 )
        invalid_parameter_noinfo();
      v2 = *(_DWORD *)(*(this + 23) + 4 * j);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
    }
  }
  return sub_5C74B0(this, 8);
}


//======================================================================
// sub_5C7EC0
// entry 005c7ec0  size 278  status ok
//======================================================================

int __thiscall sub_5C7EC0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-28h]
  unsigned int v3; // [esp+4h] [ebp-24h]
  unsigned int v4; // [esp+8h] [ebp-20h]
  int v5; // [esp+Ch] [ebp-1Ch]
  unsigned int i; // [esp+20h] [ebp-8h]

  sub_5C1B10(this);
  if ( *(this + 23) )
    v5 = (*(this + 24) - *(this + 23)) >> 2;
  else
    v5 = 0;
  for ( i = 0; (int)i < v5; ++i )
  {
    if ( *(this + 23) )
      v4 = (*(this + 24) - *(this + 23)) >> 2;
    else
      v4 = 0;
    if ( i >= v4 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(this + 23) + 4 * i) )
    {
      if ( *(this + 23) )
        v3 = (*(this + 24) - *(this + 23)) >> 2;
      else
        v3 = 0;
      if ( i >= v3 )
        invalid_parameter_noinfo();
      v2 = *(_DWORD *)(*(this + 23) + 4 * i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 116))(v2, v2);
    }
  }
  return sub_5C74B0(this, 0);
}


//======================================================================
// sub_5C7FE0
// entry 005c7fe0  size 21  status ok
//======================================================================

int __thiscall sub_5C7FE0(_DWORD *this)
{
  return sub_5C74B0(this, 7);
}


//======================================================================
// sub_5C8000
// entry 005c8000  size 42  status ok
//======================================================================

bool __thiscall sub_5C8000(int *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 21);
  return v2 > 0 && v2 <= 5;
}


//======================================================================
// sub_5C8030
// entry 005c8030  size 72  status ok
//======================================================================

bool __thiscall sub_5C8030(int *this)
{
  int v2; // [esp+0h] [ebp-8h]

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 36))(this) )
    return 1;
  v2 = *(this + 21);
  return !v2 || v2 > 5 && v2 <= 7;
}


//======================================================================
// sub_5C8080
// entry 005c8080  size 50  status ok
//======================================================================

bool __thiscall sub_5C8080(_DWORD *this)
{
  return !*(this + 21) || *(this + 21) == 6;
}


//======================================================================
// sub_5C80C0
// entry 005c80c0  size 25  status ok
//======================================================================

bool __thiscall sub_5C80C0(_DWORD *this)
{
  return *(this + 21) == 7;
}


//======================================================================
// sub_5C8110
// entry 005c8110  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5C8110(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &MLVSlotRoom::`vftable';
  *(this + 32) = 0;
  return this;
}


//======================================================================
// sub_5C8140
// entry 005c8140  size 161  status ok
//======================================================================

int __thiscall sub_5C8140(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&MLVSlotRoom::`vftable';
  if ( *(this + 32) )
    (***(this + 32))(*(this + 32), 1);
  *(this + 32) = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_5C81F0
// entry 005c81f0  size 323  status ok
//======================================================================

int __thiscall sub_5C81F0(_DWORD *this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+Ch] [ebp-4h]

  sub_5D8230();
  if ( *(this + 32) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*(this + 32);
    if ( v3 )
      (**v3)(v3, 1);
  }
  *(this + 32) = 0;
  if ( !*(this + 32) )
    *(this + 32) = sub_5C2200(*(_DWORD *)(dword_7947E0 + 20244));
  if ( !*(this + 32) )
    *(this + 32) = sub_5C6D50(*(_DWORD *)(dword_7947E0 + 20244));
  if ( !*(this + 32) )
    *(this + 32) = sub_5BC720(*(_DWORD *)(dword_7947E0 + 20244));
  if ( *(this + 32) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 32) + 4))(
      *(this + 32),
      *(_DWORD *)(dword_7947E0 + 20244));
  if ( (unsigned __int8)sub_5DF700(-1) )
    return sub_57AB80(dword_793578, 5, (int)&unk_75A3C8);
  else
    return sub_57AE30(dword_793578);
}


//======================================================================
// sub_5C8340
// entry 005c8340  size 31  status ok
//======================================================================

_DWORD *__stdcall sub_5C8340(_DWORD *a1, _DWORD *a2)
{
  *a1 = 1;
  *a2 = 1000000000;
  return a1;
}


//======================================================================
// sub_5C8360
// entry 005c8360  size 276  status ok
//======================================================================

int __stdcall sub_5C8360(int a1, int a2)
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
      sub_5FE240(5009, -1, -1, 0);
      sub_5FE240(5019, -1, -1, 0);
      break;
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5C8480
// entry 005c8480  size 19  status ok
//======================================================================

int __thiscall sub_5C8480(void *this)
{
  return sub_64E430(this);
}


//======================================================================
// sub_5C84C0
// entry 005c84c0  size 25  status ok
//======================================================================

int __stdcall sub_5C84C0(int a1)
{
  return sub_5D7F40(a1);
}


//======================================================================
// sub_5C8500
// entry 005c8500  size 144  status ok
//======================================================================

int __thiscall sub_5C8500(_DWORD *this, int a2)
{
  int v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-8h] [ebp-1Ch]
  int v5; // [esp-4h] [ebp-18h]
  int v6; // [esp-4h] [ebp-18h]
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  sub_5D0C30(&v8, *(_DWORD *)(*(_DWORD *)(*(this + 32) + 4) + 4));
  v5 = v9;
  v3 = v8;
  sub_5DCB00(a2);
  sub_5D5FB0(v3, v5);
  v6 = v9;
  v4 = v8;
  sub_5DCB00(a2);
  sub_5D5CF0(v4, v6);
  sub_5D0A20(0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 32) + 16))(*(this + 32));
}


//======================================================================
// sub_5C8590
// entry 005c8590  size 123  status ok
//======================================================================

int __thiscall sub_5C8590(_DWORD *this, int a2)
{
  int v2; // eax
  int *v3; // eax
  int v4; // ecx
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // eax
  _BYTE v9[8]; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  _DWORD *v11; // [esp+10h] [ebp-4h]

  v10 = *(_DWORD *)(*(this + 32) + 4);
  sub_6375B0(dword_162EE84);
  v11 = (_DWORD *)sub_63AAE0(14);
  v2 = sub_5DCB00(a2);
  v3 = (int *)sub_64C5C0(v9, *(_DWORD *)(v2 + 1220), *(_DWORD *)(v2 + 1224));
  v4 = *v3;
  v5 = v3[1];
  v6 = v11;
  *v11 = v4;
  v6[1] = v5;
  v7 = sub_5DCB00(a2);
  return sub_63B0A0(v7);
}


//======================================================================
// sub_5C8620
// entry 005c8620  size 54  status ok
//======================================================================

int __thiscall sub_5C8620(_DWORD **this, int a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 32) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 32) + 12))(*(this + 32), a2);
  return result;
}


//======================================================================
// sub_5C8660
// entry 005c8660  size 90  status ok
//======================================================================

int __thiscall sub_5C8660(_DWORD **this, int a2)
{
  _BYTE v4[8]; // [esp+4h] [ebp-8h] BYREF

  sub_5D0DB0(v4, a2);
  (*(void (__thiscall **)(_DWORD))(**(this + 32) + 32))(*(this + 32));
  return (*(int (__thiscall **)(_DWORD))(**(this + 32) + 16))(*(this + 32));
}


//======================================================================
// sub_5C86C0
// entry 005c86c0  size 56  status ok
//======================================================================

int __thiscall sub_5C86C0(_DWORD **this)
{
  int result; // eax

  sub_5D8020(this);
  result = (int)this;
  if ( *(this + 32) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 32) + 8))(*(this + 32));
  return result;
}


//======================================================================
// sub_5C8700
// entry 005c8700  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5C8700(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &MLVSlotRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_5C8730
// entry 005c8730  size 120  status ok
//======================================================================

_DWORD *sub_5C8730()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x84u);
  if ( v2 )
    return sub_5C8110(v2);
  else
    return 0;
}


//======================================================================
// sub_5C87B0
// entry 005c87b0  size 51  status ok
//======================================================================

char __thiscall sub_5C87B0(void *this, char *Destination)
{
  const char *v3; // eax

  if ( !Destination )
    return 0;
  v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  strcpy(Destination, v3);
  return 1;
}


//======================================================================
// sub_5C8810
// entry 005c8810  size 16  status ok
//======================================================================

int sub_5C8810()
{
  return 3234000;
}


//======================================================================
// sub_5C8820
// entry 005c8820  size 16  status ok
//======================================================================

const char *sub_5C8820()
{
  return "videoslot";
}


//======================================================================
// sub_5C8840
// entry 005c8840  size 16  status ok
//======================================================================

char **sub_5C8840()
{
  return off_75C978;
}


//======================================================================
// sub_5C8850
// entry 005c8850  size 16  status ok
//======================================================================

char **sub_5C8850()
{
  return &off_75C97C;
}


//======================================================================
// sub_5C8880
// entry 005c8880  size 94  status ok
//======================================================================

char __stdcall sub_5C8880(_DWORD *a1, int a2)
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
// sub_5C88E0
// entry 005c88e0  size 16  status ok
//======================================================================

int sub_5C88E0()
{
  return 8;
}


//======================================================================
// sub_5C88F0
// entry 005c88f0  size 15  status ok
//======================================================================

char __stdcall sub_5C88F0(int a1)
{
  return 0;
}


//======================================================================
// sub_5C8900
// entry 005c8900  size 15  status ok
//======================================================================

char __stdcall sub_5C8900(int a1)
{
  return 0;
}


//======================================================================
// sub_5C8910
// entry 005c8910  size 52  status ok
//======================================================================

char __stdcall sub_5C8910(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_5C8960
// entry 005c8960  size 16  status ok
//======================================================================

int sub_5C8960()
{
  return 14;
}


//======================================================================
// sub_5C8980
// entry 005c8980  size 15  status ok
//======================================================================

char __stdcall sub_5C8980(int a1, int a2)
{
  return 1;
}


//======================================================================
// sub_5C89A0
// entry 005c89a0  size 41  status ok
//======================================================================

char __stdcall sub_5C89A0(int a1)
{
  if ( a1 != 3234000 )
    return 0;
  sub_653BD0(14);
  return 1;
}


//======================================================================
// sub_5C89D0
// entry 005c89d0  size 15  status ok
//======================================================================

char __stdcall sub_5C89D0(int a1)
{
  return 0;
}


//======================================================================
// sub_5C89E0
// entry 005c89e0  size 15  status ok
//======================================================================

char __stdcall sub_5C89E0(int a1)
{
  return 0;
}


//======================================================================
// sub_5C8A00
// entry 005c8a00  size 190  status ok
//======================================================================

void *__stdcall sub_5C8A00(int a1)
{
  int v1; // eax

  if ( (dword_793610 & 1) == 0 )
  {
    dword_793610 |= 1u;
    dword_75C984 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_75C988 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3234006 )
    return &unk_75C980;
  else
    return 0;
}


//======================================================================
// sub_5C8AC0
// entry 005c8ac0  size 16  status ok
//======================================================================

void *sub_5C8AC0()
{
  return &unk_75BBD8;
}


//======================================================================
// sub_5C8AD0
// entry 005c8ad0  size 16  status ok
//======================================================================

void *sub_5C8AD0()
{
  return &unk_75C878;
}


//======================================================================
// sub_5C8AE0
// entry 005c8ae0  size 157  status ok
//======================================================================

char __stdcall sub_5C8AE0(int a1, int a2)
{
  if ( a2 < 3234001 || a2 > 3234005 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = a2;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_5E05C0(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 21, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_5C8C60
// entry 005c8c60  size 320  status ok
//======================================================================

int __thiscall sub_5C8C60(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // [esp+Ch] [ebp-14h]
  int j; // [esp+14h] [ebp-Ch]
  int *v6; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  *(_DWORD *)(dword_7947E0 + 20244) = a2;
  *(this + 4) = &dword_793618[225 * *(_DWORD *)(dword_7947E0 + 20244) - 727650225];
  for ( i = 0; i < *(_DWORD *)*(this + 4); ++i )
  {
    v6 = (int *)(*(this + 4) + 124 * i + 32);
    if ( *v6 <= 0 )
    {
      for ( j = 0; j < 30 && v6[j + 1] >= 0; ++j )
        ;
      *v6 = j;
    }
    *(this + i + 6) = sub_62FBF0(*(_DWORD *)(*(this + 4) + 124 * i + 32) - 1);
  }
  *(this + 3) = sub_62FC30(1, *(_DWORD *)(*(this + 4) + 8));
  v4 = *(this + 3);
  *(this + 2) = v4 * sub_62FC30(1, 3);
  *(this + 1) = *(this + 2);
  result = sub_5C9140(this);
  *(this + 1) = 0;
  return result;
}


//======================================================================
// sub_5C8DA0
// entry 005c8da0  size 32  status ok
//======================================================================

int __thiscall sub_5C8DA0(_DWORD *this)
{
  return *(_DWORD *)(*(this + 4) + 12) * *(_DWORD *)(*(this + 4) + 8);
}


//======================================================================
// sub_5C8DC0
// entry 005c8dc0  size 89  status ok
//======================================================================

int __thiscall sub_5C8DC0(_DWORD *this, char a2)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-4h]

  v3 = *(this + 3) + 1;
  result = v3;
  if ( v3 <= *(_DWORD *)(*(this + 4) + 8) )
    return sub_5C8E20(v3, 1);
  if ( a2 )
    return sub_5C8E20(2, 0);
  return result;
}


//======================================================================
// sub_5C8E20
// entry 005c8e20  size 174  status ok
//======================================================================

int __thiscall sub_5C8E20(_DWORD *this, int a2, char a3)
{
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]

  v6 = *(this + 2);
  v5 = *(this + 3);
  sub_5C8F70(this, v6 % v5);
  if ( a3 )
  {
    if ( a2 > *(_DWORD *)(*(this + 4) + 8) )
      a2 = *(_DWORD *)(*(this + 4) + 8);
    if ( *(this + 3) < a2 )
      *(this + 3) = a2;
  }
  else
  {
    if ( a2 > *(_DWORD *)(*(this + 4) + 8) + 1 )
      a2 = *(_DWORD *)(*(this + 4) + 8) + 1;
    if ( *(this + 3) >= a2 )
      *(this + 3) = a2 - 1;
  }
  return sub_5C8ED0(v6 / v5);
}


//======================================================================
// sub_5C8ED0
// entry 005c8ed0  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_5C8ED0(_DWORD *this, int a2)
{
  *(this + 2) = *(this + 3) * a2;
  return this;
}


//======================================================================
// sub_5C8F00
// entry 005c8f00  size 107  status ok
//======================================================================

_DWORD *__thiscall sub_5C8F00(_DWORD *this, char a2)
{
  int v3; // [esp+0h] [ebp-14h]
  int v4; // [esp+10h] [ebp-4h]

  v4 = *(this + 2) / *(this + 3) + 1;
  if ( v4 > *(_DWORD *)(*(this + 4) + 12) )
  {
    if ( a2 )
      v3 = 1;
    else
      v3 = *(_DWORD *)(*(this + 4) + 12);
    v4 = v3;
  }
  return sub_5C8ED0(this, v4);
}


//======================================================================
// sub_5C8F70
// entry 005c8f70  size 65  status ok
//======================================================================

int __thiscall sub_5C8F70(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5C9140(this);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= *(_DWORD *)(*(this + 4) + 8) )
      break;
    *((_BYTE *)this + i + 52) = 0;
  }
  return result;
}


//======================================================================
// sub_5C8FC0
// entry 005c8fc0  size 106  status ok
//======================================================================

int __thiscall sub_5C8FC0(int this)
{
  int i; // [esp+Ch] [ebp-4h]

  *(_DWORD *)(this + 224) = 0;
  for ( i = 0; i < **(_DWORD **)(this + 16); ++i )
    *(_DWORD *)(this + 4 * i + 24) = -1;
  return sub_5D0A20(*(_DWORD *)(this + 4) - *(_DWORD *)(this + 8));
}


//======================================================================
// sub_5C9030
// entry 005c9030  size 29  status ok
//======================================================================

char __thiscall sub_5C9030(_DWORD *this, int a2, int a3)
{
  *(this + a2 + 6) = 1;
  return 1;
}


//======================================================================
// sub_5C9050
// entry 005c9050  size 108  status ok
//======================================================================

_DWORD *__thiscall sub_5C9050(int this)
{
  _DWORD *result; // eax
  int i; // [esp+4h] [ebp-4h]

  *(_BYTE *)(this + 20) = 1;
  for ( i = 0; ; ++i )
  {
    result = *(_DWORD **)(this + 16);
    if ( i >= *result )
      break;
    if ( *(int *)(this + 4 * i + 24) < 0 )
      *(_DWORD *)(this + 4 * i + 24) = -sub_62FBF0(*(_DWORD *)(*(_DWORD *)(this + 16) + 124 * i + 32) - 1);
  }
  return result;
}


//======================================================================
// sub_5C90C0
// entry 005c90c0  size 114  status ok
//======================================================================

int __thiscall sub_5C90C0(int this)
{
  int i; // [esp+4h] [ebp-4h]

  *(_BYTE *)(this + 20) = 1;
  for ( i = 0; i < **(_DWORD **)(this + 16); ++i )
  {
    if ( *(int *)(this + 4 * i + 24) < 0 )
      *(_DWORD *)(this + 4 * i + 24) = sub_62FBF0(*(_DWORD *)(*(_DWORD *)(this + 16) + 124 * i + 32) - 1);
  }
  return sub_5C9140(this);
}


//======================================================================
// sub_5C9140
// entry 005c9140  size 590  status ok
//======================================================================

int __fastcall sub_5C9140(int a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-7Ch]
  _DWORD *v4; // [esp+28h] [ebp-54h]
  int k; // [esp+2Ch] [ebp-50h]
  int j; // [esp+30h] [ebp-4Ch]
  _DWORD v7[7]; // [esp+34h] [ebp-48h] BYREF
  int v8; // [esp+50h] [ebp-2Ch]
  _DWORD v9[7]; // [esp+54h] [ebp-28h] BYREF
  int i; // [esp+70h] [ebp-Ch]
  int v11; // [esp+74h] [ebp-8h]
  int v12; // [esp+78h] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_BYTE *)(a1 + 20) = 0;
    v11 = 0;
    memset((void *)(a1 + 84), 0, 0x8Cu);
    *(_BYTE *)(a1 + 228) = 0;
    v12 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16);
    for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 16) + 8); ++i )
    {
      *(_BYTE *)(i + a1 + 52) = 0;
      if ( i + 1 <= *(_DWORD *)(a1 + 12) )
      {
        for ( j = 0; j < **(_DWORD **)(a1 + 16); ++j )
        {
          if ( *(int *)(a1 + 4 * j + 24) < 0 )
            v2 = -*(_DWORD *)(a1 + 4 * j + 24);
          else
            v2 = *(_DWORD *)(a1 + 4 * j + 24);
          v9[j] = sub_5BE340((_DWORD *)a1, j, *(_DWORD *)(v12 + 28 * i + 4 * j) + v2);
        }
        memset(v7, 0, sizeof(v7));
        v8 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)a1 + 8))(a1, v9, v7);
        if ( v8 )
        {
          *(_BYTE *)(i + a1 + 52) = 1;
          for ( k = 0; k < **(_DWORD **)(a1 + 16); ++k )
          {
            v4 = (_DWORD *)(a1 + 20 * k + 84 + 4 * (*(_DWORD *)(v12 + 28 * i + 4 * k) + 2));
            if ( v7[k] && !*v4 )
              *v4 = i + 1;
          }
          v11 += v8;
        }
      }
    }
    *(_DWORD *)(a1 + 224) = v11;
    if ( *(int *)(a1 + 224) < 0 )
      *(_DWORD *)(a1 + 224) = 0;
    sub_5D0A20(v11 + *(_DWORD *)(a1 + 4));
    sub_5C9140(a1);
    result = *(_DWORD *)(a1 + 4);
    if ( result < 0 )
    {
      sub_5E9F20((char)"0 && \"creditsInMachine < 0\"", "..\\Casino\\MLVSlotState.cpp", 662);
      return sub_5D0A20(0);
    }
  }
  return result;
}


//======================================================================
// sub_5C9390
// entry 005c9390  size 156  status ok
//======================================================================

int __thiscall sub_5C9390(int this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h] BYREF

  v8 = -1;
  v10 = 0;
  sub_5C9550(a2, a3, &v8, &v10);
  v7 = *(_DWORD *)(this + 8);
  v6 = *(_DWORD *)(this + 12);
  v9 = v7 / v6 * sub_5C9640(a2, *(_DWORD *)(*(_DWORD *)(this + 16) + 28), a3, v8, v10);
  v3 = sub_5C96C0(*(_DWORD *)(*(_DWORD *)(this + 16) + 28));
  if ( v9 >= v3 )
    *(_BYTE *)(this + 228) = 1;
  return v9;
}


//======================================================================
// sub_5C9550
// entry 005c9550  size 237  status ok
//======================================================================

_DWORD *__thiscall sub_5C9550(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax
  int v6; // [esp+4h] [ebp-10h]
  _DWORD *v7; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]

  v6 = 0;
  v7 = *(_DWORD **)(*(this + 4) + 24);
  for ( i = 0; i < *(_DWORD *)*(this + 4); ++i )
  {
    if ( *(_DWORD *)(a2 + 4 * i) != *(_DWORD *)(*(this + 4) + 24) )
    {
      v7 = *(_DWORD **)(a2 + 4 * i);
      break;
    }
    *(_DWORD *)(a3 + 4 * i) = 1;
    ++v6;
  }
  while ( 1 )
  {
    result = (_DWORD *)*(this + 4);
    if ( i >= *result )
      break;
    if ( *(_DWORD **)(a2 + 4 * i) != v7 )
    {
      result = (_DWORD *)*(this + 4);
      if ( *(_DWORD *)(a2 + 4 * i) != result[6] )
        break;
    }
    *(_DWORD *)(a3 + 4 * i) = 1;
    ++v6;
    ++i;
  }
  if ( a4 )
  {
    result = v7;
    *a4 = v7;
  }
  if ( a5 )
    *a5 = v6;
  return result;
}


//======================================================================
// sub_5C9640
// entry 005c9640  size 124  status ok
//======================================================================

int __stdcall sub_5C9640(int a1, int a2, int a3, int a4, int a5)
{
  char v6[4]; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    if ( *(_DWORD *)(a2 + 32 * i) == -1 )
      return 0;
    if ( *(_DWORD *)(a2 + 32 * i) == a4 )
      break;
  }
  *(_DWORD *)v6 = *(_DWORD *)(a2 + 32 * i + 4 * a5 + 4);
  if ( *(_DWORD *)v6 )
    sub_62FDE0("Won %d with %d of icon %d\n", v6[0]);
  return *(_DWORD *)v6;
}


//======================================================================
// sub_5C96C0
// entry 005c96c0  size 126  status ok
//======================================================================

int __stdcall sub_5C96C0(int a1)
{
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  v4 = 0;
  for ( i = 0; *(_DWORD *)(a1 + 32 * i) != -1; ++i )
  {
    for ( j = 0; j < 7; ++j )
    {
      if ( v4 < *(_DWORD *)(a1 + 32 * i + 4 * j + 4) )
        v4 = *(_DWORD *)(a1 + 32 * i + 4 * j + 4);
    }
  }
  return v4;
}


//======================================================================
// sub_5C9740
// entry 005c9740  size 511  status ok
//======================================================================

char __thiscall sub_5C9740(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-40h]
  int v3; // [esp+4h] [ebp-3Ch]
  _DWORD *v5; // [esp+24h] [ebp-1Ch]
  char v6; // [esp+2Bh] [ebp-15h]
  int i; // [esp+2Ch] [ebp-14h]
  int m; // [esp+2Ch] [ebp-14h]
  int v9; // [esp+30h] [ebp-10h]
  char v10; // [esp+37h] [ebp-9h]
  int v11; // [esp+38h] [ebp-8h]
  int j; // [esp+3Ch] [ebp-4h]
  int k; // [esp+3Ch] [ebp-4h]
  int n; // [esp+3Ch] [ebp-4h]

  v10 = 1;
  if ( *(int *)(*(this + 4) + 20) < 0 )
    return 0;
  v11 = -*(_DWORD *)(*(this + 4) + 4) / 2;
  v9 = *(_DWORD *)(*(this + 4) + 4) / 2;
  for ( i = 0; i < *(_DWORD *)*(this + 4); ++i )
  {
    v5 = (_DWORD *)(*(this + 4) + 124 * i + 32);
    for ( j = 0; j < *v5 && v5[j + 1] != *(_DWORD *)(*(this + 4) + 20); ++j )
      ;
    if ( j < *v5 )
    {
      v6 = 0;
      for ( k = v11; k <= v9; ++k )
      {
        if ( (int)*(this + i + 6) < 0 )
          v3 = -*(this + i + 6);
        else
          v3 = *(this + i + 6);
        if ( sub_5BE340(this, i, k + v3) == *(_DWORD *)(*(this + 4) + 20) )
          v6 = 1;
      }
      if ( !v6 )
      {
        v10 = 0;
        break;
      }
    }
  }
  if ( v10 )
  {
    for ( m = 0; m < *(_DWORD *)*(this + 4); ++m )
    {
      for ( n = v11; n <= v9; ++n )
      {
        if ( (int)*(this + m + 6) < 0 )
          v2 = -*(this + m + 6);
        else
          v2 = *(this + m + 6);
        if ( sub_5BE340(this, m, n + v2) == *(_DWORD *)(*(this + 4) + 20) )
          *(this + 5 * m + n + 23) = 50;
      }
    }
  }
  return v10;
}


//======================================================================
// sub_5C9940
// entry 005c9940  size 20  status ok
//======================================================================

char __thiscall sub_5C9940(_BYTE *this)
{
  return *(this + 228);
}


//======================================================================
// sub_5C9960
// entry 005c9960  size 115  status ok
//======================================================================

int __thiscall sub_5C9960(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-8h]
  unsigned int v6; // [esp+14h] [ebp+Ch]

  sub_5C9140((int)this);
  if ( (int)*(this + a2 + 6) < 0 )
    v4 = -*(this + a2 + 6);
  else
    v4 = *(this + a2 + 6);
  v6 = a3 - v4 + 2;
  if ( v6 <= 4 )
    return *(this + 5 * a2 + v6 + 21);
  else
    return 0;
}


//======================================================================
// sub_5C99E0
// entry 005c99e0  size 60  status ok
//======================================================================

int __thiscall sub_5C99E0(_DWORD *this, int a2)
{
  *(this + 56) += a2;
  return sub_5D0A20(a2 + *(this + 1));
}


//======================================================================
// sub_5C9A50
// entry 005c9a50  size 160  status ok
//======================================================================

int __thiscall sub_5C9A50(int this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &BettingControls::`vftable';
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(this + 4 * i + 4) = 0;
  for ( j = 0; j < 2; ++j )
    *(_DWORD *)(this + 4 * j + 20) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_BYTE *)(this + 40) = 0;
  return this;
}


//======================================================================
// sub_5C9AF0
// entry 005c9af0  size 381  status ok
//======================================================================

void __thiscall sub_5C9AF0(CNoTrackObject *this)
{
  int i; // [esp+44h] [ebp-10h]
  int j; // [esp+44h] [ebp-10h]

  *(_DWORD *)this = &BettingControls::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  for ( j = 0; j < 2; ++j )
  {
    if ( *((_DWORD *)this + j + 5) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 5))(*((_DWORD *)this + j + 5), 1);
  }
  if ( *((_DWORD *)this + 7) )
    (***((void (__thiscall ****)(_DWORD, int))this + 7))(*((_DWORD *)this + 7), 1);
  if ( *((_DWORD *)this + 8) )
    (***((void (__thiscall ****)(_DWORD, int))this + 8))(*((_DWORD *)this + 8), 1);
  if ( *((_DWORD *)this + 9) )
    (***((void (__thiscall ****)(_DWORD, int))this + 9))(*((_DWORD *)this + 9), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_5C9C70
// entry 005c9c70  size 1176  status ok
//======================================================================

_DWORD *__thiscall sub_5C9C70(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  _DWORD *result; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-A4h]
  int v6; // [esp+10h] [ebp-A0h]
  int v7; // [esp+14h] [ebp-9Ch]
  int v8; // [esp+18h] [ebp-98h]
  int v9; // [esp+1Ch] [ebp-94h]
  void *v11; // [esp+24h] [ebp-8Ch]
  void *v12; // [esp+2Ch] [ebp-84h]
  void *v13; // [esp+34h] [ebp-7Ch]
  void *v14; // [esp+3Ch] [ebp-74h]
  void *v15; // [esp+44h] [ebp-6Ch]
  double v16[5]; // [esp+54h] [ebp-5Ch]
  int i; // [esp+80h] [ebp-30h]
  int v18; // [esp+84h] [ebp-2Ch]
  _DWORD v19[7]; // [esp+88h] [ebp-28h]
  int v20; // [esp+ACh] [ebp-4h]

  v16[0] = 1.0;
  v16[1] = 5.0;
  v16[2] = 10.0;
  v16[3] = 25.0;
  v16[4] = 50.0;
  v18 = 439;
  v19[0] = 436;
  v19[1] = 482;
  v19[2] = 432;
  v19[3] = 523;
  v19[4] = 424;
  v19[5] = 558;
  v19[6] = 408;
  for ( i = 0; i < 4; ++i )
  {
    if ( !*(this + i + 1) )
    {
      v15 = operator new(0x1E8u);
      v20 = 0;
      if ( v15 )
        v9 = sub_5CA9F0(v16[i]);
      else
        v9 = 0;
      v20 = -1;
      *(this + i + 1) = v9;
      sub_5EAE80(i + 1016, v19[2 * i - 1], v19[2 * i], 100, -1);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 208))(*(this + i + 1));
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 116))(*(this + i + 1));
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( !*(this + i + 5) )
    {
      v14 = operator new(0x1E0u);
      v20 = 1;
      if ( v14 )
        v8 = sub_5CB320(i);
      else
        v8 = 0;
      v20 = -1;
      *(this + i + 5) = v8;
      sub_5EAE80(i + 1032, 0, 0, 50, -1);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 5) + 208))(*(this + i + 5));
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 5) + 116))(*(this + i + 5));
    }
  }
  if ( !*(this + 7) )
  {
    v13 = operator new(0x1E0u);
    v20 = 2;
    if ( v13 )
      v7 = sub_5CB040();
    else
      v7 = 0;
    v20 = -1;
    *(this + 7) = v7;
    sub_5EAE80(1070, 409, 454, 100, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 116))(*(this + 7));
  }
  sub_5CA570(this);
  if ( !*(this + 8) )
  {
    v12 = operator new(0x1D0u);
    v20 = 3;
    if ( v12 )
    {
      sub_5EC5A0(v12);
      v6 = v1;
    }
    else
    {
      v6 = 0;
    }
    v20 = -1;
    *(this + 8) = v6;
    v2 = sub_630F40("SID_BETCONTROL_BET_COLON");
    sub_5EC8F0(v2, 32, 24, 16, 600, 445, 1001, 48, -1);
  }
  result = this;
  if ( !*(this + 9) )
  {
    v11 = operator new(0x1D0u);
    v20 = 4;
    if ( v11 )
    {
      sub_5EC5A0(v11);
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    v20 = -1;
    *(this + 9) = v5;
    return (_DWORD *)sub_5EC8F0(&Source, 32, 100, 16, 600, 462, 1001, 5, -1);
  }
  return result;
}


//======================================================================
// sub_5CA110
// entry 005ca110  size 231  status ok
//======================================================================

int __thiscall sub_5CA110(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 1) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 1) + 208))(*(this + i + 1));
  }
  for ( j = 0; j < 2; ++j )
  {
    if ( *(this + j + 5) )
      (*(void (__thiscall **)(_DWORD))(**(this + j + 5) + 208))(*(this + j + 5));
  }
  result = (*(int (__thiscall **)(_DWORD))(**(this + 7) + 208))(*(this + 7));
  if ( *(this + 8) )
    result = (*(int (__thiscall **)(_DWORD))(**(this + 8) + 112))(*(this + 8));
  if ( *(this + 9) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 112))(*(this + 9));
  return result;
}


//======================================================================
// sub_5CA200
// entry 005ca200  size 484  status ok
//======================================================================

int __thiscall sub_5CA200(_DWORD **this)
{
  int result; // eax
  int *v2; // eax
  int v3; // eax
  int v4; // [esp-8h] [ebp-34h]
  int v5; // [esp-4h] [ebp-30h]
  int v6; // [esp+0h] [ebp-2Ch]
  bool v7; // [esp+4h] [ebp-28h]
  CImageDisplay *v9; // [esp+Ch] [ebp-20h]
  __int64 v10; // [esp+18h] [ebp-14h]
  _BYTE v11[8]; // [esp+20h] [ebp-Ch] BYREF
  int i; // [esp+28h] [ebp-4h]

  if ( *(this + 8) )
    (*(void (__thiscall **)(_DWORD))(**(this + 8) + 116))(*(this + 8));
  sub_5CA8B0(this);
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 1) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 1) + 204))(*(this + i + 1));
  }
  (*(void (__thiscall **)(_DWORD))(**(this + 7) + 204))(*(this + 7));
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  if ( result )
  {
    v9 = (CImageDisplay *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
    v7 = CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v9)->rcSource.left == 3;
    result = v7;
    if ( v7 )
    {
      sub_5CA3F0(this);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
      v2 = (int *)sub_5D5A90(v11);
      v5 = v2[1];
      v4 = *v2;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
      if ( (unsigned __int8)sub_64C6E0(v4, v5) )
      {
        v10 = sub_64C8A0(0, 0);
        *(_QWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4) + 1212) = v10;
      }
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4, 0);
      return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
               v6,
               *(_DWORD *)(v3 + 1212),
               *(_DWORD *)(v3 + 1216));
    }
  }
  return result;
}


//======================================================================
// sub_5CA3F0
// entry 005ca3f0  size 379  status ok
//======================================================================

void __thiscall sub_5CA3F0(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // [esp+4h] [ebp-58h]
  int v4; // [esp+8h] [ebp-54h]
  __int64 v6; // [esp+10h] [ebp-4Ch]
  _DWORD v7[12]; // [esp+1Ch] [ebp-40h]
  int v8; // [esp+4Ch] [ebp-10h] BYREF
  int i; // [esp+50h] [ebp-Ch]
  _BYTE v10[4]; // [esp+54h] [ebp-8h] BYREF
  int v11; // [esp+58h] [ebp-4h]

  v7[0] = 100000000;
  v7[1] = &unk_989680;
  v7[2] = 1000000;
  v7[3] = 500000;
  v7[4] = 100000;
  v7[5] = 50000;
  v7[6] = 25000;
  v7[7] = 10000;
  v7[8] = 5000;
  v7[9] = 1000;
  v7[10] = 500;
  v7[11] = 100;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)dword_7947E4 + 620))(dword_7947E4, v10, &v8);
  if ( v8 )
  {
    v1 = sub_5D5A50(v11);
    if ( v1 >= v8 )
      v4 = v8;
    else
      v4 = sub_5D5A50(v11);
    v3 = v4;
  }
  else
  {
    v3 = sub_5D5A50(v11);
  }
  v2 = sub_5D5F30(v11);
  if ( v2 > sub_5D5A50(v11) )
  {
    v6 = sub_64C8A0(0, 0);
    sub_5D5E10(v6, HIDWORD(v6));
  }
  *(this + 12) = 50;
  for ( i = 0; i < 12; ++i )
  {
    if ( v3 >= v7[i] )
    {
      *(this + 12) = v7[i];
      break;
    }
  }
  sub_5CA570(this);
  while ( (double)(int)*(this + 12) < *(double *)(*(this + 4) + 480) )
    sub_5CA640(0);
}


//======================================================================
// sub_5CA570
// entry 005ca570  size 208  status ok
//======================================================================

int __thiscall sub_5CA570(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  if ( result )
  {
    if ( 1.0 == *(double *)(*(_DWORD *)(this + 4) + 480) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 208))(*(_DWORD *)(this + 20));
    else
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 204))(*(_DWORD *)(this + 20));
    if ( 100000000.0 == *(double *)(*(_DWORD *)(this + 16) + 480)
      || (double)*(int *)(this + 48) == *(double *)(*(_DWORD *)(this + 16) + 480) )
    {
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 208))(*(_DWORD *)(this + 24));
    }
    else
    {
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 24) + 204))(*(_DWORD *)(this + 24));
    }
  }
  return result;
}


//======================================================================
// sub_5CA640
// entry 005ca640  size 120  status ok
//======================================================================

void __thiscall sub_5CA640(int this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( a2 != 1 || (double)*(int *)(this + 48) != *(double *)(*(_DWORD *)(this + 16) + 480) )
  {
    for ( i = 0; i < 4; ++i )
      sub_5CAD50(a2);
    sub_5CA570(this);
    if ( *(_BYTE *)(this + 40) )
      sub_5CA7B0(this);
  }
}


//======================================================================
// sub_5CA6C0
// entry 005ca6c0  size 192  status ok
//======================================================================

int __thiscall sub_5CA6C0(void *this)
{
  int result; // eax
  bool v2; // [esp+0h] [ebp-24h]
  __int64 v4; // [esp+10h] [ebp-14h]
  __int64 v5; // [esp+18h] [ebp-Ch]
  CImageDisplay *v6; // [esp+20h] [ebp-4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  v6 = (CImageDisplay *)result;
  if ( result )
  {
    v2 = CImageDisplay::GetDisplayFormat((CImageDisplay *)result)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3;
    result = v2;
    if ( v2 )
    {
      v5 = sub_64C8A0(0, 0);
      sub_5D5E10(v5, HIDWORD(v5));
      sub_5CA8B0(this);
      v4 = sub_64C8A0(0, 0);
      return (*(int (__thiscall **)(CImageDisplay *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
               v6,
               v4,
               HIDWORD(v4),
               0);
    }
  }
  return result;
}


//======================================================================
// sub_5CA7B0
// entry 005ca7b0  size 241  status ok
//======================================================================

int __thiscall sub_5CA7B0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 204))(*(this + i + 1));
  result = (int)this;
  if ( *(this + 11) )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( 0.25 == *(double *)(*(this + j + 1) + 480) || (int)*(double *)(*(this + j + 1) + 480) % *(this + 11) )
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 1) + 208))(*(this + j + 1));
      else
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 1) + 204))(*(this + j + 1));
    }
  }
  return result;
}


//======================================================================
// sub_5CA8B0
// entry 005ca8b0  size 320  status ok
//======================================================================

int __thiscall sub_5CA8B0(_DWORD **this)
{
  int result; // eax
  bool v2; // [esp+0h] [ebp-8Ch]
  int v4[2]; // [esp+10h] [ebp-7Ch] BYREF
  size_t v5; // [esp+18h] [ebp-74h]
  char Str[104]; // [esp+1Ch] [ebp-70h] BYREF
  CImageDisplay *v7; // [esp+88h] [ebp-4h]

  v7 = (CImageDisplay *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  v2 = CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3;
  result = v2;
  if ( v2 )
  {
    result = sub_5D5DE0(v4);
    if ( *(this + 9) )
    {
      sub_64C8D0(v4[0], v4[1], Str, 1, 1, 1);
      v5 = strlen(Str) - 2;
      (*(void (__thiscall **)(_DWORD, char *))(**(this + 9) + 180))(*(this + 9), Str);
      (*(void (__thiscall **)(_DWORD, size_t, int))(**(this + 9) + 68))(*(this + 9), 615 - 8 * v5, 461);
      return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 116))(*(this + 9));
    }
  }
  return result;
}


//======================================================================
// sub_5CA9F0
// entry 005ca9f0  size 133  status ok
//======================================================================

double *__thiscall sub_5CA9F0(double *this, double a2)
{
  int v3; // [esp+0h] [ebp-14h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v3);
  *(_DWORD *)this = &CasinoChipButton::`vftable';
  *(this + 60) = a2;
  *((_BYTE *)this + 437) = 1;
  sub_5EB700(1);
  sub_602EF0(60, 6);
  return this;
}


//======================================================================
// sub_5CAAA0
// entry 005caaa0  size 87  status ok
//======================================================================

int __thiscall sub_5CAAA0(double *this)
{
  int v2; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  if ( 0.25 == *(this + 60) )
    v3 = 25;
  else
    v2 = (int)*(this + 60);
  return sub_5CAEA0(&v2);
}


//======================================================================
// sub_5CAB00
// entry 005cab00  size 90  status ok
//======================================================================

int __thiscall sub_5CAB00(double *this)
{
  int v2; // [esp+4h] [ebp-8h] BYREF
  int v3; // [esp+8h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  if ( 0.25 == *(this + 60) )
    v3 = -25;
  else
    v2 = -(int)*(this + 60);
  return sub_5CAEA0(&v2);
}


