//======================================================================
// sub_409400
// entry 00409400  size 161  status ok
//======================================================================

int __thiscall sub_409400(int this, int a2, __int16 a3)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 3 && sub_4093D0((_WORD *)this, a2, i); ++i )
    ;
  sub_4093A0((_WORD *)this, a2, i, a3);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    101004,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  ++*(_DWORD *)(this + 4308);
  return this;
}


//======================================================================
// sub_4094B0
// entry 004094b0  size 83  status ok
//======================================================================

int __thiscall sub_4094B0(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( sub_4093D0(this, a2, i) )
      ++v4;
  }
  return v4;
}


//======================================================================
// sub_409520
// entry 00409520  size 155  status ok
//======================================================================

int sub_409520()
{
  CImageDisplay *v2; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    v2 = (CImageDisplay *)sub_5DCB00(i);
    if ( v2 )
    {
      if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3 )
      {
        return dword_7902F0 + 824 * i + 188;
      }
    }
  }
  return dword_7902F0 + 188;
}


//======================================================================
// sub_4095C0
// entry 004095c0  size 104  status ok
//======================================================================

int __stdcall sub_4095C0(unsigned int a1)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = sub_409520();
  if ( a1 > 0x62 )
    return 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( (dword_707208[i] & *(_DWORD *)(v2 + 4 * a1 + 32)) != 0 )
      return dword_707208[i];
  }
  return 0;
}


//======================================================================
// sub_409630
// entry 00409630  size 138  status ok
//======================================================================

int __thiscall sub_409630(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+Ch] [ebp-4h]

  result = (unsigned __int8)sub_408790();
  if ( (_BYTE)result )
  {
    v3 = -1;
    v4 = sub_4087F0();
    result = sub_4096C0(dword_7902F0);
    if ( (_BYTE)result )
    {
      v3 = 9;
    }
    else
    {
      result = sub_409760(dword_7902F0);
      if ( (_BYTE)result )
        v3 = 8;
    }
    if ( v3 != -1 )
    {
      *(this + 1080) = v3;
      *(this + 1081) = v4;
      return v4;
    }
  }
  return result;
}


//======================================================================
// sub_4096C0
// entry 004096c0  size 151  status ok
//======================================================================

char sub_4096C0()
{
  _DWORD v1[3]; // [esp+10h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-8h]
  signed int v3; // [esp+20h] [ebp-4h]

  v3 = *(_DWORD *)(sub_409520() + 8) - 1;
  if ( v3 < 2 )
    return 0;
  v1[0] = sub_4095C0(v3 - 2);
  v1[1] = sub_4095C0(v3 - 1);
  v1[2] = sub_4095C0(v3);
  for ( i = 1; i < 3; ++i )
  {
    if ( v1[i] != v1[0] )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_409760
// entry 00409760  size 233  status ok
//======================================================================

bool sub_409760()
{
  int v1; // [esp+8h] [ebp-1Ch]
  int v2; // [esp+Ch] [ebp-18h]
  int v3; // [esp+10h] [ebp-14h]
  int v4; // [esp+14h] [ebp-10h]
  int v5; // [esp+18h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-8h]
  signed int v7; // [esp+20h] [ebp-4h]

  v7 = *(_DWORD *)(sub_409520() + 8) - 1;
  if ( v7 < 4 )
    return 0;
  if ( sub_4096C0() )
    return 0;
  for ( i = 0; i < 5; ++i )
    *(&v1 + i) = 0;
  v1 = sub_4095C0(v7 - 4);
  v2 = sub_4095C0(v7 - 3);
  v3 = sub_4095C0(v7 - 2);
  v4 = sub_4095C0(v7 - 1);
  v5 = sub_4095C0(v7);
  if ( v3 != v5 )
    return 0;
  if ( v1 == v5 )
    return v4 == v2;
  return 0;
}


//======================================================================
// sub_409890
// entry 00409890  size 33  status ok
//======================================================================

int __stdcall sub_409890(int a1, int a2, char a3)
{
  return sub_5CBA10(a1, a2, a3);
}


//======================================================================
// sub_4098C0
// entry 004098c0  size 1462  status ok
//======================================================================

int __thiscall sub_4098C0(pairNode *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // eax
  __int64 v14; // [esp+0h] [ebp-80h]
  __int64 v15; // [esp+0h] [ebp-80h]
  __int64 v16; // [esp+0h] [ebp-80h]
  __int64 v17; // [esp+0h] [ebp-80h]
  __int64 v18; // [esp+0h] [ebp-80h]
  __int64 v19; // [esp+0h] [ebp-80h]
  __int64 v20; // [esp+0h] [ebp-80h]
  __int64 v21; // [esp+0h] [ebp-80h]
  int v22; // [esp+0h] [ebp-80h]
  _BYTE v24[8]; // [esp+18h] [ebp-68h] BYREF
  __int64 v25; // [esp+20h] [ebp-60h]
  _BYTE v26[8]; // [esp+28h] [ebp-58h] BYREF
  __int64 v27; // [esp+30h] [ebp-50h]
  _BYTE v28[8]; // [esp+38h] [ebp-48h] BYREF
  __int64 v29; // [esp+40h] [ebp-40h]
  _BYTE v30[8]; // [esp+48h] [ebp-38h] BYREF
  __int64 v31; // [esp+50h] [ebp-30h]
  __int64 v32; // [esp+58h] [ebp-28h]
  __int64 v33; // [esp+60h] [ebp-20h]
  double v34; // [esp+68h] [ebp-18h]
  __int64 v35; // [esp+70h] [ebp-10h]
  __int64 v36; // [esp+78h] [ebp-8h]

  v36 = *((_QWORD *)this + 4 * a2 + 9);
  v32 = sub_64C8A0(0, 0);
  v33 = v32;
  v31 = sub_64C8A0(0, 0);
  v35 = v31;
  v34 = 1.0;
  *((_DWORD *)this + 60) = -1;
  v3 = sub_5DCB00(a2);
  result = sub_5D5A50(v3);
  if ( result < 1000000000 && v36 )
  {
    result = a3;
    switch ( a3 )
    {
      case 0:
        if ( *(int *)(sub_5DCB00(a2) + 1192) > 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        LODWORD(v33) = -(int)v36;
        HIDWORD(v33) = -HIDWORD(v36);
        sub_5DCB00(a2);
        result = sub_5D5FB0(-(int)v36, -HIDWORD(v36));
        *((_DWORD *)this + 60) = 0;
        break;
      case 1:
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v5 = sub_5DCB00(a2);
        sub_5D7540(v5);
        v33 = v36;
        sub_64C560(v34);
        if ( (int)v36 > 1000000000 )
          LODWORD(v33) = 1000000000;
        v6 = (_DWORD *)sub_64C5C0(v30, v36, HIDWORD(v36));
        v7 = v6[1];
        LODWORD(v35) = *v6;
        HIDWORD(v35) = v7;
        if ( (int)v35 >= 1000000000 )
        {
          v29 = sub_64C8A0(1000000000, 0);
          v35 = v29;
        }
        v14 = v35;
        sub_5DCB00(a2);
        sub_5D5CF0(v14, HIDWORD(v14));
        (*(void (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
          this,
          v35,
          HIDWORD(v35),
          a2,
          0);
        v15 = v33;
        sub_5DCB00(a2);
        sub_5D5FB0(v15, HIDWORD(v15));
        result = (int)this;
        *((_DWORD *)this + 60) = 1;
        break;
      case 2:
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v33 = 0;
        v11 = (_DWORD *)sub_64C5C0(v24, v36, HIDWORD(v36));
        v12 = v11[1];
        LODWORD(v35) = *v11;
        HIDWORD(v35) = v12;
        if ( (int)v35 >= 1000000000 )
          v35 = sub_64C8A0(1000000000, 0);
        v20 = v35;
        sub_5DCB00(a2);
        sub_5D5CF0(v20, HIDWORD(v20));
        (*(void (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
          this,
          v35,
          HIDWORD(v35),
          a2,
          0);
        v21 = v33;
        sub_5DCB00(a2);
        sub_5D5FB0(v21, HIDWORD(v21));
        result = (int)this;
        *((_DWORD *)this + 60) = 2;
        break;
      case 8:
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v8 = sub_5DCB00(a2);
        sub_5D7540(v8);
        v33 = v36;
        sub_64C560(0.95);
        if ( (int)v36 > 1000000000 )
          v33 = 1000000000;
        v9 = (_DWORD *)sub_64C5C0(v28, v36, HIDWORD(v36));
        v10 = v9[1];
        LODWORD(v35) = *v9;
        HIDWORD(v35) = v10;
        if ( (int)v35 >= 1000000000 )
        {
          v27 = sub_64C8A0(1000000000, 0);
          v35 = v27;
        }
        v16 = v35;
        sub_5DCB00(a2);
        sub_5D5CF0(v16, HIDWORD(v16));
        (*(void (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
          this,
          v35,
          HIDWORD(v35),
          a2,
          0);
        v17 = v33;
        sub_5DCB00(a2);
        sub_5D5FB0(v17, HIDWORD(v17));
        result = (int)this;
        *((_DWORD *)this + 60) = 1;
        break;
      case 9:
        v34 = 8.0;
        if ( *(int *)(sub_5DCB00(a2) + 1192) < 0 )
          *(_DWORD *)(sub_5DCB00(a2) + 1192) = 0;
        v33 = v36;
        sub_64C560(v34);
        if ( (int)v36 > 1000000000 )
          v33 = 1000000000;
        v35 = *(_QWORD *)sub_64C5C0(v26, v36, HIDWORD(v36));
        if ( (int)v35 >= 1000000000 )
        {
          v25 = sub_64C8A0(1000000000, 0);
          v35 = v25;
        }
        v18 = v35;
        sub_5DCB00(a2);
        sub_5D5CF0(v18, HIDWORD(v18));
        (*(void (__thiscall **)(pairNode *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this + 184))(
          this,
          v35,
          HIDWORD(v35),
          a2,
          0);
        v19 = v33;
        sub_5DCB00(a2);
        result = sub_5D5FB0(v19, HIDWORD(v19));
        *((_DWORD *)this + 60) = 9;
        break;
      default:
        break;
    }
    if ( dword_7902F8 )
    {
      v22 = pairNode::raw_length(this);
      v13 = sub_408DE0((_DWORD *)dword_7902F0, (int)this);
      return sub_402DA0(*(_DWORD ***)(dword_7902F8 + 4 * v13 + 32), a2, v22, a3);
    }
  }
  return result;
}


//======================================================================
// sub_409EA0
// entry 00409ea0  size 50  status ok
//======================================================================

void __thiscall sub_409EA0(void *this)
{
  int v1; // eax

  if ( dword_7902F8 )
  {
    v1 = sub_408DE0((_DWORD *)dword_7902F0, (int)this);
    sub_402EA0(*(_DWORD ***)(dword_7902F8 + 4 * v1 + 32));
  }
}


//======================================================================
// sub_409EE0
// entry 00409ee0  size 46  status ok
//======================================================================

void __thiscall sub_409EE0(pairNode *this, int a2, int a3)
{
  int v3; // eax

  if ( dword_7902F8 )
  {
    v3 = pairNode::raw_length(this);
    sub_402270((_DWORD **)dword_7902F8, a2, v3);
  }
}


//======================================================================
// sub_409F10
// entry 00409f10  size 209  status ok
//======================================================================

char __thiscall sub_409F10(pairNode *this)
{
  bool v2; // [esp+0h] [ebp-24h]
  CImageDisplay *v3; // [esp+10h] [ebp-14h]
  int v4; // [esp+1Ch] [ebp-8h]
  int v5; // [esp+20h] [ebp-4h]

  v5 = pairNode::raw_length(this);
  v4 = *(_DWORD *)(dword_7902F0 + 4316);
  if ( v4 == -1 )
    return 0;
  if ( sub_4081C0(v5) != v4 )
    return 0;
  if ( sub_407BB0((_DWORD *)dword_7902F0) )
  {
    v3 = (CImageDisplay *)sub_407BB0((_DWORD *)dword_7902F0);
    v2 = CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v3)->rcSource.left == 3;
    if ( v2 && !*(_BYTE *)(sub_407BB0((_DWORD *)dword_7902F0) + 1184) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_40A020
// entry 0040a020  size 27  status ok
//======================================================================

int __thiscall sub_40A020(void *this)
{
  return (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 176))(this, this);
}


//======================================================================
// sub_40A0B0
// entry 0040a0b0  size 3855  status ok
//======================================================================

int __stdcall sub_40A0B0(int a1)
{
  int v1; // eax
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // edi
  int v17; // esi
  int v18; // edi
  int v19; // esi
  int v20; // esi
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // eax
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  int *v42; // eax
  int v43; // edx
  int v44; // esi
  int v45; // esi
  int v46; // [esp+Ch] [ebp-84h]
  double v47; // [esp+10h] [ebp-80h]
  double v48; // [esp+1Ch] [ebp-74h]
  _BYTE v49[8]; // [esp+2Ch] [ebp-64h] BYREF
  _BYTE v50[8]; // [esp+34h] [ebp-5Ch] BYREF
  _BYTE v51[8]; // [esp+3Ch] [ebp-54h] BYREF
  int v52; // [esp+44h] [ebp-4Ch]
  int v53; // [esp+48h] [ebp-48h]
  int v54; // [esp+4Ch] [ebp-44h]
  int v55; // [esp+50h] [ebp-40h]
  int v56; // [esp+54h] [ebp-3Ch]
  _BYTE v57[5]; // [esp+5Bh] [ebp-35h]
  bool v58; // [esp+63h] [ebp-2Dh]
  int v59; // [esp+64h] [ebp-2Ch]
  int v60; // [esp+68h] [ebp-28h]
  int v61; // [esp+6Ch] [ebp-24h]
  int v62; // [esp+70h] [ebp-20h]
  char v63; // [esp+77h] [ebp-19h]
  int v64; // [esp+78h] [ebp-18h]
  int v65; // [esp+7Ch] [ebp-14h]
  int v66; // [esp+80h] [ebp-10h]
  int v67; // [esp+84h] [ebp-Ch]
  int v68; // [esp+88h] [ebp-8h]
  int v69; // [esp+8Ch] [ebp-4h]

  v64 = 0;
  v67 = 0;
  v68 = 0;
  v62 = 0;
  v57[4] = 0;
  v63 = 0;
  v58 = 0;
  *(_DWORD *)v57 = (unsigned __int8)sub_5DA7B0(dword_790320);
  v61 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790320 + 688))(dword_790320);
  v66 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790320 + 692))(dword_790320);
  v54 = sub_5DCB00(a1);
  v1 = sub_5DCB00(a1);
  v69 = sub_5D5A50(v1);
  v65 = *(_DWORD *)(dword_790324 + 1248);
  v55 = 0;
  if ( v57[0] )
  {
    v64 = *(_DWORD *)sub_5DAA20(v51);
    v67 = *(_DWORD *)sub_5DAAE0(v50);
    v68 = sub_5DA8A0(dword_790320);
    v62 = sub_5DA8C0(dword_790320);
    if ( v69 < v61 )
      return 0;
    if ( v69 == v67 )
      return v61;
    *(_DWORD *)&v57[1] = v69 / 2;
    if ( v68 > v62 )
    {
      v48 = (double)(v64 - v69);
      v47 = (double)(int)sub_62FBF0(v68 - v62) / 8.0 + 1.25;
      v46 = sub_62FBF0(v68 - v62);
      if ( (double)v46 / 8.0 * (double)v69 + v47 < v48 && sub_62FBF0(20) < v65 + 10 )
        *(_DWORD *)&v57[1] = v69;
    }
    if ( *(int *)&v57[1] > v66 )
      *(_DWORD *)&v57[1] = v66;
    if ( v69 == v64 && v67 > v66 + v61 && *(_DWORD *)(sub_5DCB00(a1) + 1188) != 4 )
      return v61;
    if ( v62 < v68 )
    {
      v63 = 0;
      if ( v65 < 10 )
        v56 = 5 * v65;
      else
        v56 = 50;
      if ( v62 > v68 - 6 )
        v56 += 15 * (6 - (v68 - v62));
      if ( v64 - v69 > v66 || v64 - v69 > v69 )
        v56 += 30;
      if ( v68 - v62 > 25 )
        v56 -= 10;
      if ( v56 < 0 )
        v56 = 1;
      if ( v56 > 75 )
        v56 = 75;
      v58 = sub_62FBF0(100) < v56;
    }
    else
    {
      v63 = 1;
      *(_DWORD *)&v57[1] = v66;
      if ( v66 > v69 )
        *(_DWORD *)&v57[1] = v69;
    }
    if ( v63 || v58 )
    {
      if ( v69 == v64 )
      {
        if ( v63 )
        {
          v53 = sub_62FBF0(10);
          if ( v53 >= 2 )
          {
            if ( v53 < 5 )
            {
              if ( v67 >= v61 * sub_62FBF0(40) )
              {
                v7 = sub_62FBF0(60);
                v8 = sub_62FBF0(25);
                v52 = v61 * (v7 - v8) - v61 * (v7 - v8) % 5;
                if ( v52 >= v61 )
                {
                  if ( v52 <= *(int *)&v57[1] )
                    return v52;
                  else
                    return *(_DWORD *)&v57[1];
                }
              }
              else
              {
                v5 = sub_62FBF0(30);
                v6 = sub_62FBF0(20);
                v52 = v67 + v61 * (v5 - v6) - (v67 + v61 * (v5 - v6)) % 5;
                if ( v52 >= v61 )
                {
                  if ( v52 <= *(int *)&v57[1] )
                    return v52;
                  else
                    return *(_DWORD *)&v57[1];
                }
              }
            }
          }
          else
          {
            v3 = v66 - v67;
            v4 = sub_62FBF0(5);
            v52 = v3 + v61 * v4 + 1 - (v3 + v61 * v4 + 1) % 5;
            if ( v52 >= v61 )
            {
              if ( v52 <= *(int *)&v57[1] )
                return v52;
              else
                return *(_DWORD *)&v57[1];
            }
          }
        }
        else
        {
          v53 = sub_62FBF0(15);
          if ( v53 < 2 )
          {
            if ( v67 >= v61 * sub_62FBF0(40) )
            {
              v12 = sub_62FBF0(80);
              v13 = sub_62FBF0(50);
              v52 = v61 * (v12 - v13) - v61 * (v12 - v13) % 5;
              if ( v52 >= v61 )
              {
                if ( v52 <= *(int *)&v57[1] )
                  return v52;
                else
                  return *(_DWORD *)&v57[1];
              }
            }
            else
            {
              v9 = v67 / 2;
              v10 = sub_62FBF0(40);
              v11 = sub_62FBF0(40);
              v52 = v61 * (v10 - v11) + v9 - (v61 * (v10 - v11) + v9) % 5;
              if ( v52 >= v61 )
              {
                if ( v52 <= *(int *)&v57[1] )
                  return v52;
                else
                  return *(_DWORD *)&v57[1];
              }
            }
          }
        }
      }
      else if ( v63 )
      {
        v53 = sub_62FBF0(10);
        if ( v53 >= 5 )
        {
          if ( v53 >= 7 )
          {
            v52 = 0;
          }
          else
          {
            v15 = v64 - v69;
            v16 = sub_62FBF0(10);
            v52 = v61 * (v16 - sub_62FBF0(5) + 1) + v15;
          }
        }
        else
        {
          v14 = v64 - v69;
          v52 = v61 * (sub_62FBF0(40) + 1) + v14;
        }
        v52 -= v52 % 5;
        if ( v52 >= v61 )
        {
          if ( v52 <= *(int *)&v57[1] )
            return v52;
          else
            return *(_DWORD *)&v57[1];
        }
      }
      else
      {
        v53 = sub_62FBF0(10);
        if ( v68 - v62 == 1 )
          v53 -= 3;
        if ( v68 - v62 == 2 )
        {
          v53 -= 2;
        }
        else if ( v68 - v62 == 3 )
        {
          --v53;
        }
        if ( v53 >= 2 )
        {
          if ( v53 >= 6 )
          {
            v52 = 0;
          }
          else
          {
            v19 = v64 - v69;
            v20 = v19 / (sub_62FBF0(2) + 2);
            v21 = sub_62FBF0(60);
            v52 = v61 * (v21 - sub_62FBF0(30)) + v20;
          }
        }
        else
        {
          v17 = v64 - v69;
          v18 = sub_62FBF0(80);
          v52 = v61 * (v18 - sub_62FBF0(20)) + v17;
        }
        v52 -= v52 % 5;
        if ( v52 >= v61 )
        {
          if ( v52 <= *(int *)&v57[1] )
            return v52;
          else
            return *(_DWORD *)&v57[1];
        }
      }
    }
  }
  v22 = sub_40AFE0(a1);
  if ( v22 < v61 )
    return 0;
  if ( !v57[0] )
  {
    *(_DWORD *)&v57[1] = (int)((double)v69 / 2.0);
    if ( *(int *)&v57[1] > v66 )
      *(_DWORD *)&v57[1] = v66;
  }
  switch ( *(_DWORD *)(sub_5DCB00(a1) + 1188) )
  {
    case 0:
      v52 = sub_40AFE0(a1);
      if ( v52 >= v61 )
      {
        if ( v52 <= *(int *)&v57[1] )
          result = v52;
        else
          result = *(_DWORD *)&v57[1];
      }
      else
      {
        result = v61;
      }
      break;
    case 1:
      v52 = 2 * sub_40AFE0(a1);
      if ( v52 != 2 * v61 || sub_62FBF0(2) )
      {
        v23 = v52 / 10;
        v24 = v52 + (sub_62FBF0(10) - 4) * v23;
        v52 = v24 - v24 % 5;
      }
      else
      {
        v52 = v61;
      }
      if ( v52 >= v61 )
      {
        if ( v52 <= *(int *)&v57[1] )
          result = v52;
        else
          result = *(_DWORD *)&v57[1];
      }
      else
      {
        result = v61;
      }
      break;
    case 2:
      v52 = 5 * sub_40AFE0(a1);
      if ( v52 != 5 * v61 || sub_62FBF0(2) )
      {
        v25 = v52 / 10;
        v26 = v52 + (sub_62FBF0(10) - 4) * v25;
        v52 = v26 - v26 % 5;
      }
      else
      {
        v52 = v61;
      }
      if ( v52 >= v61 )
      {
        if ( v52 <= *(int *)&v57[1] )
          result = v52;
        else
          result = *(_DWORD *)&v57[1];
      }
      else
      {
        result = v61;
      }
      break;
    case 3:
      v52 = 10 * sub_40AFE0(a1);
      if ( v52 != 10 * v61 || sub_62FBF0(2) )
      {
        v27 = v52 / 10;
        v28 = v52 + (sub_62FBF0(10) - 4) * v27;
        v52 = v28 - v28 % 5;
      }
      else
      {
        v52 = v61;
      }
      if ( v52 >= v61 )
      {
        if ( v52 <= *(int *)&v57[1] )
          result = v52;
        else
          result = *(_DWORD *)&v57[1];
      }
      else
      {
        result = v61;
      }
      break;
    case 4:
      if ( v65 >= 3 )
      {
        v52 = *(_DWORD *)&v57[1] / (sub_62FBF0(10) + 1);
        v31 = sub_40AFE0(a1);
        if ( v52 >= 5 * v31 )
        {
          result = v52;
        }
        else
        {
          v52 = 5 * sub_40AFE0(a1);
          v32 = v52 / 10;
          v33 = v52 + (sub_62FBF0(10) - 4) * v32;
          v52 = v33 - v33 % 5;
          if ( v52 >= v61 )
          {
            if ( v52 <= *(int *)&v57[1] )
              result = v52;
            else
              result = *(_DWORD *)&v57[1];
          }
          else
          {
            result = v61;
          }
        }
      }
      else
      {
        v52 = 5 * sub_40AFE0(a1);
        if ( v52 != 5 * v61 || sub_62FBF0(2) )
        {
          v29 = v52 / 10;
          v30 = v52 + (sub_62FBF0(10) - 4) * v29;
          v52 = v30 - v30 % 5;
        }
        else
        {
          v52 = v61;
        }
        if ( v52 >= v61 )
        {
          if ( v52 <= *(int *)&v57[1] )
            result = v52;
          else
            result = *(_DWORD *)&v57[1];
        }
        else
        {
          result = v61;
        }
      }
      break;
    case 5:
      if ( v65 <= 2 && *(int *)(v54 + 1196) <= 1 )
        goto LABEL_217;
      if ( *(_BYTE *)(v54 + 1200) || *(int *)(v54 + 1196) >= 4 && v65 < 3 )
      {
        *(_DWORD *)(v54 + 1196) = 1;
        result = sub_40AFE0(a1);
      }
      else
      {
        ++*(_DWORD *)(v54 + 1196);
        if ( !v55 )
          goto LABEL_217;
        if ( v55 >= v61 )
        {
          if ( v55 <= *(int *)&v57[1] )
          {
            if ( v55 <= v66 / 2 || v63 )
              result = v55;
            else
              result = v66 / 2;
          }
          else
          {
            result = *(_DWORD *)&v57[1];
          }
        }
        else
        {
          result = v61;
        }
      }
      break;
    case 6:
      if ( v65 >= 3 )
      {
        if ( *(_BYTE *)(v54 + 1200) )
        {
          v52 = 5 * sub_40AFE0(a1);
          v38 = v52 / 10;
          v39 = v52 + (sub_62FBF0(10) - 4) * v38;
          v52 = v39 - v39 % 5;
          if ( v52 >= v61 )
          {
            if ( v52 <= *(int *)&v57[1] )
              result = v52;
            else
              result = *(_DWORD *)&v57[1];
          }
          else
          {
            result = v61;
          }
        }
        else if ( v55 )
        {
          if ( v55 >= v61 )
          {
            if ( v55 <= *(int *)&v57[1] )
            {
              if ( v55 <= v66 / 2 || v63 )
                result = v55;
              else
                result = v66 / 2;
            }
            else
            {
              result = *(_DWORD *)&v57[1];
            }
          }
          else
          {
            result = v61;
          }
        }
        else
        {
          v52 = 5 * sub_40AFE0(a1);
          v36 = v52 / 10;
          v37 = v52 + (sub_62FBF0(10) - 4) * v36;
          v52 = v37 - v37 % 5;
          if ( v52 >= v61 )
          {
            if ( v52 <= *(int *)&v57[1] )
              result = v52;
            else
              result = *(_DWORD *)&v57[1];
          }
          else
          {
            result = v61;
          }
        }
      }
      else
      {
        v52 = 5 * sub_40AFE0(a1);
        if ( v52 != 5 * v61 || sub_62FBF0(2) )
        {
          v34 = v52 / 10;
          v35 = v52 + (sub_62FBF0(10) - 4) * v34;
          v52 = v35 - v35 % 5;
        }
        else
        {
          v52 = v61;
        }
        if ( v52 >= v61 )
        {
          if ( v52 <= *(int *)&v57[1] )
            result = v52;
          else
            result = *(_DWORD *)&v57[1];
        }
        else
        {
          result = v61;
        }
      }
      break;
    case 7:
      if ( v65 >= 1 )
      {
        if ( *(_BYTE *)(v54 + 1200) )
        {
          v42 = (int *)sub_41A2D0(v49, a1);
          v43 = v42[1];
          v59 = *v42;
          v60 = v43;
          v52 = 2 * v59;
          if ( 2 * v59 >= v61 )
          {
            if ( v52 <= *(int *)&v57[1] )
              result = v52;
            else
              result = *(_DWORD *)&v57[1];
          }
          else
          {
            result = v61;
          }
        }
        else
        {
          v52 = 2 * sub_40AFE0(a1);
          v44 = v52 / 10;
          v45 = v52 + (sub_62FBF0(10) - 4) * v44;
          v52 = v45 - v45 % 5;
          if ( v52 >= v61 )
          {
            if ( v52 <= *(int *)&v57[1] )
              result = v52;
            else
              result = *(_DWORD *)&v57[1];
          }
          else
          {
            result = v61;
          }
        }
      }
      else
      {
        v52 = 2 * sub_40AFE0(a1);
        if ( v52 != 2 * v61 || sub_62FBF0(2) )
        {
          v40 = v52 / 10;
          v41 = v52 + (sub_62FBF0(10) - 4) * v40;
          v52 = v41 - v41 % 5;
        }
        else
        {
          v52 = v61;
        }
        if ( v52 >= v61 )
        {
          if ( v52 <= *(int *)&v57[1] )
            result = v52;
          else
            result = *(_DWORD *)&v57[1];
        }
        else
        {
          result = v61;
        }
      }
      break;
    default:
LABEL_217:
      result = sub_40AFE0(a1);
      break;
  }
  return result;
}


//======================================================================
// sub_40AFE0
// entry 0040afe0  size 480  status ok
//======================================================================

int __stdcall sub_40AFE0(int a1)
{
  CImageDisplay *v2; // [esp+10h] [ebp-14h]
  char v3; // [esp+17h] [ebp-Dh]
  int v4; // [esp+18h] [ebp-Ch]
  int v5; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h]

  v2 = (CImageDisplay *)sub_5DCB00(a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_790320 + 688))(dword_790320);
  v3 = sub_5DA7B0(dword_790320);
  v6 = sub_5D5A50(v2);
  v5 = *(_DWORD *)(dword_790324 + 1248);
  if ( v4 > v6 )
  {
    if ( v3 )
      return v6;
    if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left != 2 )
      CImageDisplay::GetDisplayFormat(v2);
  }
  if ( v5 < 1 )
    return v4;
  if ( v5 == 1 )
  {
    if ( 2 * v4 <= v6 )
      return 2 * v4;
    else
      return v6;
  }
  else if ( v5 >= 4 )
  {
    switch ( v5 )
    {
      case 4:
        if ( 4 * v4 <= v6 )
          return 4 * v4;
        else
          return v6;
      case 5:
        if ( 6 * v4 <= v6 )
          return 6 * v4;
        else
          return v6;
      case 6:
        if ( 6 * v4 <= v6 )
          return 6 * v4;
        else
          return v6;
      case 7:
        if ( 8 * v4 <= v6 )
          return 8 * v4;
        else
          return v6;
      case 8:
        if ( 10 * v4 <= v6 )
          return 10 * v4;
        else
          return v6;
      default:
        if ( 12 * v4 <= v6 )
          return 12 * v4;
        else
          return v6;
    }
  }
  else if ( 3 * v4 <= v6 )
  {
    return 3 * v4;
  }
  else
  {
    return v6;
  }
}


//======================================================================
// sub_40B1C0
// entry 0040b1c0  size 156  status ok
//======================================================================

bool __stdcall sub_40B1C0(int a1)
{
  return (*(_DWORD *)(sub_5DCB00(a1) + 8) == 22
       || *(_DWORD *)(sub_5DCB00(a1) + 8) == 19
       || *(_DWORD *)(sub_5DCB00(a1) + 8) == 28
       || *(_DWORD *)(sub_5DCB00(a1) + 8) == 26)
      && sub_62FBF0(6) == 0;
}


//======================================================================
// sub_40B260
// entry 0040b260  size 3331  status ok
//======================================================================

int __thiscall sub_40B260(void *this, int a2)
{
  int result; // eax
  int v4; // [esp+Ch] [ebp-4E4h]
  _DWORD v5[311]; // [esp+10h] [ebp-4E0h] BYREF
  int v6; // [esp+4ECh] [ebp-4h]

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
  if ( (unsigned __int8)sub_41A830(a2) )
    return 0;
  v4 = sub_40BF80(a2);
  v6 = sub_40C380(this);
  switch ( v5[10 * v4 + v6] )
  {
    case 1:
      result = 1;
      break;
    case 2:
      result = 0;
      break;
    case 3:
      if ( (unsigned __int8)sub_41A960(a2) )
        result = 2;
      else
        result = v4 != 18;
      break;
    case 4:
      result = 3;
      break;
    case 5:
      result = (unsigned __int8)sub_41AEC0(a2) != 0 ? 4 : 1;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\blackjackai.cpp", 758);
      sub_5E9F20((char)"false", "..\\Casino\\blackjackai.cpp", 761);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_40BF80
// entry 0040bf80  size 1013  status ok
//======================================================================

int __stdcall sub_40BF80(int a1)
{
  int v1; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  if ( a1 == -1 )
  {
    v7 = -1;
    v1 = sub_419530(-1, -1);
  }
  else
  {
    if ( a1 == 4 )
      v4 = 0;
    else
      v4 = *(char *)(dword_790324 + 280 * a1 + 281);
    v7 = v4;
    v1 = sub_419530(a1, v4);
  }
  v8 = v1;
  v6 = sub_4194C0(a1);
  if ( v8 == 2 && (unsigned __int8)sub_41AFE0(a1, v7) && v6 < (char)sub_418600(dword_790324) + 1 )
  {
    if ( sub_419780(a1, v7, 0) == 1 )
    {
      if ( (unsigned __int8)sub_41ADE0(a1, v7) )
        return 30;
      if ( *(_BYTE *)(dword_790324 + 280 * a1 + 280) )
        return 0;
      return 13;
    }
    v5 = sub_4197D0(a1, v7) / 2;
    if ( (unsigned __int8)sub_41AF20(a1) )
      return v5 + 19;
  }
  if ( *(_BYTE *)(dword_790324 + 280 * a1 + 280) )
    return 0;
  if ( sub_4197D0(a1, v7) == 21 || sub_4198D0(a1, v7) == 21 )
    return 0;
  if ( (int)sub_4197D0(a1, v7) >= 21 || (v3 = sub_4197D0(a1, v7), v3 == sub_4198D0(a1, v7)) )
  {
    if ( (int)sub_4197D0(a1, v7) >= 8 )
    {
      if ( v8 == 2
        && (sub_419780(a1, v7, 0) == 5 && sub_419780(a1, v7, 1) == 3
         || sub_419780(a1, v7, 0) == 3 && sub_419780(a1, v7, 1) == 5) )
      {
        return 2;
      }
      else if ( v8 == 2
             && (sub_419780(a1, v7, 0) == 5 && sub_419780(a1, v7, 1) == 2
              || sub_419780(a1, v7, 0) == 2 && sub_419780(a1, v7, 1) == 6) )
      {
        return 3;
      }
      else if ( (int)sub_4197D0(a1, v7) >= 17 )
      {
        if ( (int)sub_4197D0(a1, v7) >= 22 )
        {
          if ( (int)sub_4198D0(a1, v7) >= 8 )
          {
            if ( (int)sub_4198D0(a1, v7) >= 17 )
              return 0;
            else
              return sub_4198D0(a1, v7) - 4;
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
        return sub_4197D0(a1, v7) - 4;
      }
    }
    else
    {
      return 1;
    }
  }
  else if ( sub_4197D0(a1, v7) == 12 )
  {
    return 13;
  }
  else
  {
    return sub_4197D0(a1, v7);
  }
}


//======================================================================
// sub_40C380
// entry 0040c380  size 99  status ok
//======================================================================

int sub_40C380()
{
  int v1; // [esp+4h] [ebp-4h]

  if ( !(unsigned __int16)sub_4193D0(4, 0, 1) )
    sub_5E9F20((char)"blackjackState->GetPlayerCard(4, 0, 1) != EMPTY_CARD", "..\\Casino\\blackjackai.cpp", 846);
  v1 = sub_419780(4, 0, 1);
  if ( v1 == 1 )
    v1 = 11;
  return v1 - 2;
}


//======================================================================
// sub_40C420
// entry 0040c420  size 193  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_40C420(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BlackjackDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 1) = 0;
  for ( j = 0; j < 4; ++j )
    *((_DWORD *)this + j + 6) = 0;
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
// sub_40C4F0
// entry 0040c4f0  size 637  status ok
//======================================================================

void __thiscall sub_40C4F0(CNoTrackObject *this)
{
  int i; // [esp+80h] [ebp-10h]
  int j; // [esp+80h] [ebp-10h]

  *(_DWORD *)this = &BlackjackDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( *((_DWORD *)this + j + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 6))(*((_DWORD *)this + j + 6), 1);
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
// sub_40C770
// entry 0040c770  size 890  status ok
//======================================================================

int __thiscall sub_40C770(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-6Ch]
  int v5; // [esp+8h] [ebp-68h]
  int v6; // [esp+Ch] [ebp-64h]
  _DWORD *v7; // [esp+10h] [ebp-60h]
  int v8; // [esp+14h] [ebp-5Ch]
  int v9; // [esp+18h] [ebp-58h]
  void *v11; // [esp+20h] [ebp-50h]
  void *v12; // [esp+28h] [ebp-48h]
  void *v13; // [esp+30h] [ebp-40h]
  _DWORD *v14; // [esp+38h] [ebp-38h]
  void *v15; // [esp+40h] [ebp-30h]
  void *v16; // [esp+48h] [ebp-28h]
  _DWORD v17[4]; // [esp+50h] [ebp-20h]
  int i; // [esp+60h] [ebp-10h]
  int v19; // [esp+6Ch] [ebp-4h]

  v17[0] = 1;
  v17[1] = 2;
  v17[2] = 0;
  v17[3] = 3;
  v1 = sub_630F40("SID_BLACKJACK");
  sub_5F38B0(v1);
  sub_5F1AD0(5005);
  for ( i = 0; i < 5; ++i )
  {
    v16 = operator new(0x188u);
    v19 = 0;
    if ( v16 )
      v9 = sub_40DC70(v16);
    else
      v9 = 0;
    v19 = -1;
    *(this + i + 1) = v9;
    sub_40DE70(i);
  }
  for ( i = 0; i < 4; ++i )
  {
    v15 = operator new(0xCC0u);
    v19 = 1;
    if ( v15 )
      v8 = sub_40ECA0(v15);
    else
      v8 = 0;
    v19 = -1;
    *(this + i + 6) = v8;
    sub_5EAE80(5006, 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 6) + 176))(*(this + i + 6), v17[i]);
    sub_5EB5D0(0);
    CPane::SetExclusiveRowMode((CPane *)*(this + i + 6), *(_DWORD *)(dword_790324 + 4 * i + 1128));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 6) + 116))(*(this + i + 6));
  }
  v14 = operator new(0x198u);
  v19 = 2;
  if ( v14 )
  {
    sub_5CD6A0(v14);
    *v14 = &BlackjackDealerDisplay::`vftable';
    v7 = v14;
  }
  else
  {
    v7 = 0;
  }
  v19 = -1;
  *(this + 11) = v7;
  sub_5EAE80(0, 0, 0, 0, -1);
  v13 = operator new(0x184u);
  v19 = 3;
  if ( v13 )
    v6 = sub_5F5BF0(v13);
  else
    v6 = 0;
  v19 = -1;
  *(this + 15) = v6;
  sub_5EAE80(5026, 0, 0, 150, -1);
  v12 = operator new(0x184u);
  v19 = 4;
  if ( v12 )
    v5 = sub_5F5BF0(v12);
  else
    v5 = 0;
  v19 = -1;
  *(this + 16) = v5;
  sub_5EAE80(5027, 0, 0, 151, -1);
  v11 = operator new(0x178u);
  v19 = 5;
  if ( v11 )
  {
    sub_5EAAF0(v11);
    v4 = v2;
  }
  else
  {
    v4 = 0;
  }
  v19 = -1;
  *(this + 17) = v4;
  return sub_5EAE80(5025, 0, 0, 10, -1);
}


//======================================================================
// sub_40CAF0
// entry 0040caf0  size 262  status ok
//======================================================================

int sub_40CAF0()
{
  char v1; // [esp+0h] [ebp-20h]
  CImageDisplay *v2; // [esp+18h] [ebp-8h]
  unsigned int v3; // [esp+1Ch] [ebp-4h]

  if ( sub_419DD0(dword_790324) != -1
    && (v3 = sub_419DD0(dword_790324), v3 < 4)
    && (v2 = (CImageDisplay *)sub_5DCB00(v3)) != 0
    && (CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat(v2)->rcSource.left == 3
      ? (v1 = 1)
      : (v1 = 0),
        v1 && (unsigned __int8)sub_41A080(v3)) )
  {
    return sub_5F2B20(3201007, 1);
  }
  else
  {
    return sub_5F2BA0(3201007);
  }
}


//======================================================================
// sub_40CC00
// entry 0040cc00  size 336  status ok
//======================================================================

int __thiscall sub_40CC00(_DWORD **this)
{
  int result; // eax
  int i; // [esp+Ch] [ebp-4h]

  sub_40CAF0();
  if ( *(_DWORD *)(*(_DWORD *)(dword_790324 + 1124) + 2056) == *(_DWORD *)(*(_DWORD *)(dword_790324 + 1124) + 2060) - 1 )
    (*(void (__thiscall **)(_DWORD))(**(this + 17) + 112))(*(this + 17));
  for ( i = 0; i < 5; ++i )
  {
    sub_40E090(*(this + i + 1));
    if ( i != 4
      && (unsigned __int8)sub_419EB0(i)
      && (unsigned __int8)sub_5DA7B0(dword_790320)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_790320 + 708))(dword_790320, i)
      && !(*(this + i + 6))[120 * i + 95] )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(this + i + 6) + 184))(*(this + i + 6), i, 0);
    }
  }
  result = sub_5DA7B0(dword_790320);
  if ( (_BYTE)result && !dword_163068C )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_790320 + 752))(dword_790320);
  return result;
}


//======================================================================
// sub_40CD50
// entry 0040cd50  size 108  status ok
//======================================================================

void __thiscall sub_40CD50(_DWORD **this, unsigned int a2, int a3)
{
  int v3; // eax

  if ( a2 < 4 )
  {
    if ( *(this + a2 + 6) )
    {
      (*(void (__thiscall **)(_DWORD, unsigned int, int))(**(this + a2 + 6) + 184))(*(this + a2 + 6), a2, a3);
      v3 = sub_5DCB00(a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, v3);
    }
  }
}


//======================================================================
// sub_40CDC0
// entry 0040cdc0  size 631  status ok
//======================================================================

int __thiscall sub_40CDC0(_DWORD *this, int a2, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // eax
  int v11; // [esp-4h] [ebp-38h]
  int v12; // [esp+10h] [ebp-24h]
  int v13; // [esp+14h] [ebp-20h]
  __int16 v14; // [esp+18h] [ebp-1Ch]
  _DWORD v15[5]; // [esp+1Ch] [ebp-18h]
  int v16; // [esp+30h] [ebp-4h]

  v15[0] = -1;
  v15[1] = 1;
  v15[2] = 2;
  v15[3] = 3;
  v15[4] = 0;
  v16 = *(_DWORD *)(*(this + a2 + 1) + 88 * a3 + 40 + 4 * a4);
  v14 = sub_4193D0(a2, a3, a4);
  v5 = sub_40D040(a2, a3, a4);
  sub_5EAF00(v5);
  v11 = sub_40D330(a2, a3, a4);
  v6 = sub_40D0F0(a2, a3, a4);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 68))(v16, v6, v11);
  v7 = 13 * v15[sub_641290(v14)];
  if ( v7 + sub_641280(v14) - 1 >= 52 )
    sub_5E9F20(
      (char)"(suitConversion[GetSuit(card)] * 13) + GetRank(card) - 1 < 52",
      "..\\Casino\\blackjackdisplay.cpp",
      165);
  v8 = 13 * v15[sub_641290(v14)];
  v9 = sub_641280(v14);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 176))(v16, v8 + v9 - 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 108))(v16, a4 + 7 * a3 + 5);
  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 116))(v16);
  if ( !(unsigned __int8)sub_40D530(a2, a3, a4) || a5 )
  {
    if ( !(unsigned __int8)sub_419470(a2, a3, a4) )
      sub_419AD0(a2, a3, a4);
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 176))(v16, 53);
  }
  if ( a2 >= 4 )
    return sub_5EB5D0(255);
  v13 = a2 == -1 ? -1 : *(char *)(dword_790324 + 280 * a2 + 281);
  if ( v13 == a3 )
    return sub_5EB5D0(255);
  v12 = a2 == -1 ? -1 : *(char *)(dword_790324 + 280 * a2 + 281);
  if ( v12 == -1 )
    return sub_5EB5D0(255);
  else
    return sub_5EB5D0(100);
}


//======================================================================
// sub_40D040
// entry 0040d040  size 112  status ok
//======================================================================

int __stdcall sub_40D040(int a1, int a2, int a3)
{
  _DWORD v4[5]; // [esp+4h] [ebp-14h]

  v4[0] = 5002;
  v4[1] = 5003;
  v4[2] = 5001;
  v4[3] = 5004;
  v4[4] = 5007;
  if ( a1 < 4 && a3 == 2 && *(_BYTE *)(dword_790324 + a2 + 280 * a1 + 268) )
    return 5008;
  else
    return v4[a1];
}


//======================================================================
// sub_40D0B0
// entry 0040d0b0  size 64  status ok
//======================================================================

int __stdcall sub_40D0B0(int a1, int a2)
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
// sub_40D0F0
// entry 0040d0f0  size 563  status ok
//======================================================================

int __stdcall sub_40D0F0(int a1, int a2, int a3)
{
  int v4; // eax
  _DWORD v5[48]; // [esp+4h] [ebp-C8h] BYREF
  int v6; // [esp+C4h] [ebp-8h]
  int v7; // [esp+C8h] [ebp-4h]

  v7 = 0;
  v6 = 0;
  v5[0] = 384;
  v5[1] = 236;
  v5[2] = 323;
  v5[3] = 236;
  v5[4] = 402;
  v5[5] = 236;
  v5[6] = 374;
  v5[7] = 147;
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
  v4 = sub_4194C0(a1);
  v6 = sub_40D0B0(v4, a2);
  v7 = v5[12 * a1 + 2 * v6 + 2 * a2] + 12 * a3;
  if ( *(_BYTE *)(dword_790324 + a2 + 280 * a1 + 268) )
  {
    if ( a3 == 2 )
      v7 -= 20;
  }
  return v7;
}


//======================================================================
// sub_40D330
// entry 0040d330  size 509  status ok
//======================================================================

int __stdcall sub_40D330(int a1, int a2, int a3)
{
  int v4; // eax
  _DWORD v5[49]; // [esp+4h] [ebp-C8h] BYREF
  int v6; // [esp+C8h] [ebp-4h]

  v5[48] = 0;
  v6 = 0;
  v5[0] = 384;
  v5[1] = 236;
  v5[2] = 323;
  v5[3] = 236;
  v5[4] = 402;
  v5[5] = 236;
  v5[6] = 374;
  v5[7] = 147;
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
  v4 = sub_4194C0(a1);
  v6 = sub_40D0B0(v4, a2);
  return v5[12 * a1 + 1 + 2 * v6 + 2 * a2] - 6 * a3;
}


//======================================================================
// sub_40D530
// entry 0040d530  size 374  status ok
//======================================================================

char __stdcall sub_40D530(int a1, int a2, int a3)
{
  CImageDisplay *v5; // [esp+8h] [ebp-8h]

  if ( a1 == 4 )
  {
    return !a3 && !*(_BYTE *)(dword_790328 + 9) && sub_41A890(dword_790324) != -1;
  }
  else
  {
    if ( sub_418700(dword_790324) != 1 )
      return 0;
    v5 = (CImageDisplay *)sub_5DCB00(a1);
    if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left != 1
      || *(_BYTE *)(dword_790324 + a2 + 280 * a1 + 268)
      || a3 >= 2 )
    {
      return 0;
    }
    if ( (unsigned __int8)sub_41B990(a1, a2) )
      return 0;
    if ( (unsigned __int8)sub_41A830(a1) )
      return 0;
    if ( *(char *)(dword_790324 + a2 + 280 * a1 + 272) == -1 )
      return 1;
    return *(_BYTE *)(dword_790324 + a2 + 280 * a1 + 272) == 5 && !(unsigned __int8)sub_41B830(dword_790324);
  }
}


//======================================================================
// sub_40D6B0
// entry 0040d6b0  size 392  status ok
//======================================================================

int __stdcall sub_40D6B0(char a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD *)(dword_790324 + 1232);
  if ( v4 == -1 )
  {
    v3 = -1;
  }
  else
  {
    if ( v4 == 4 )
      v2 = 0;
    else
      v2 = *(char *)(dword_790324 + 280 * v4 + 281);
    v3 = v2;
  }
  if ( a1 )
  {
    sub_5F2B20(3201002, 1);
    sub_5F2B20(3201003, 1);
    sub_5F2B20(3201004, 1);
    sub_5F2B20(3201005, 1);
    sub_5F2B20(3201006, 1);
    if ( !(unsigned __int8)sub_41A960(v4) )
      sub_5F2BA0(3201004);
    if ( !(unsigned __int8)sub_41ADE0(v4, v3) )
      sub_5F2BA0(3201005);
    result = sub_41AEC0(v4);
    if ( !(_BYTE)result )
      return sub_5F2BA0(3201006);
  }
  else
  {
    sub_5F2BA0(3201002);
    sub_5F2BA0(3201003);
    sub_5F2BA0(3201004);
    sub_5F2BA0(3201005);
    return sub_5F2BA0(3201006);
  }
  return result;
}


//======================================================================
// sub_40D840
// entry 0040d840  size 180  status ok
//======================================================================

int __thiscall sub_40D840(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 12) )
  {
    v4 = operator new(0x1C4u);
    if ( v4 )
      v2 = sub_411530(v4);
    else
      v2 = 0;
    *(this + 12) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 12) + 60))(*(this + 12));
    sub_5F7340(0, 0);
  }
  return sub_5F85D0(*(this + 12));
}


//======================================================================
// sub_40D900
// entry 0040d900  size 41  status ok
//======================================================================

int __thiscall sub_40D900(_DWORD *this)
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
// sub_40D930
// entry 0040d930  size 310  status ok
//======================================================================

int __thiscall sub_40D930(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]
  void *v5; // [esp+10h] [ebp-1Ch]
  void *v6; // [esp+18h] [ebp-14h]

  if ( !*(this + 13) )
  {
    v6 = operator new(0x1BCu);
    if ( v6 )
      v3 = sub_411760(v6);
    else
      v3 = 0;
    *(this + 13) = v3;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 13) + 60))(*(this + 13));
    sub_5F7340(-10, 130);
  }
  sub_5F85D0(*(this + 13));
  sub_40D6B0(1);
  if ( !*(this + 10) )
  {
    v5 = operator new(0x5Cu);
    if ( v5 )
      v2 = sub_40FB80(v5);
    else
      v2 = 0;
    *(this + 10) = v2;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 10) + 108))(*(this + 10), 0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 10) + 64))(*(this + 10));
}


//======================================================================
// sub_40DA70
// entry 0040da70  size 119  status ok
//======================================================================

int __thiscall sub_40DA70(int *this)
{
  int result; // eax

  if ( *(this + 13) )
  {
    sub_5F8990(*(this + 13));
    *(this + 13) = 0;
  }
  sub_40D6B0(0);
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
// sub_40DAF0
// entry 0040daf0  size 121  status ok
//======================================================================

int __thiscall sub_40DAF0(void *this)
{
  int result; // eax
  int v2; // eax

  if ( !(unsigned __int8)sub_5DA7B0(dword_790320)
    || (result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_790320 + 724))(dword_790320, this), (_BYTE)result) )
  {
    if ( (unsigned __int8)sub_4184A0(dword_790324) )
    {
      return sub_5DB8C0(0, 170);
    }
    else
    {
      v2 = sub_5DF650(dword_7947E0);
      return sub_4122E0(v2);
    }
  }
  return result;
}


//======================================================================
// sub_40DB70
// entry 0040db70  size 207  status ok
//======================================================================

int __thiscall sub_40DB70(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-1Ch]
  void *v4; // [esp+Ch] [ebp-14h]

  if ( !*(this + 14) )
  {
    v4 = operator new(0x1BCu);
    if ( v4 )
      v2 = sub_411D70(v4);
    else
      v2 = 0;
    *(this + 14) = v2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 14) + 60))(*(this + 14));
    CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(380, 5);
  }
  sub_411E70(*(this + 14));
  result = dword_790328;
  if ( *(_BYTE *)(dword_790328 + 7) )
    return sub_5F85D0(*(this + 14));
  return result;
}


//======================================================================
// sub_40DC40
// entry 0040dc40  size 41  status ok
//======================================================================

int __thiscall sub_40DC40(_DWORD *this)
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
// sub_40DC70
// entry 0040dc70  size 162  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_40DC70(ATL::CCRTHeap *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int k; // [esp+8h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BlackjackPlayerDisplay::`vftable';
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
// sub_40DD20
// entry 0040dd20  size 326  status ok
//======================================================================

void __thiscall sub_40DD20(CNoTrackObject *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+28h] [ebp-18h]
  int j; // [esp+2Ch] [ebp-14h]
  int i; // [esp+30h] [ebp-10h]
  int k; // [esp+30h] [ebp-10h]

  *(_DWORD *)this = &BlackjackPlayerDisplay::`vftable';
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
// sub_40DE70
// entry 0040de70  size 538  status ok
//======================================================================

_DWORD *__thiscall sub_40DE70(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-3Ch]
  int v6; // [esp+8h] [ebp-38h]
  int v7; // [esp+Ch] [ebp-34h]
  void *v9; // [esp+14h] [ebp-2Ch]
  void *v10; // [esp+1Ch] [ebp-24h]
  void *v11; // [esp+24h] [ebp-1Ch]
  int j; // [esp+2Ch] [ebp-14h]
  int i; // [esp+30h] [ebp-10h]
  int k; // [esp+30h] [ebp-10h]

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
// sub_40E090
// entry 0040e090  size 182  status ok
//======================================================================

int __thiscall sub_40E090(_DWORD *this)
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
  sub_40E150(this);
  sub_40E2F0(this);
  sub_40E520(this);
  if ( (unsigned __int8)sub_418480(dword_790324) )
    return sub_40DB70((_DWORD *)dword_79032C);
  else
    return sub_40DC40((_DWORD *)dword_79032C);
}


//======================================================================
// sub_40E150
// entry 0040e150  size 53  status ok
//======================================================================

int sub_40E150()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
  {
    sub_40E190(i, 0);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_40E190
// entry 0040e190  size 177  status ok
//======================================================================

void __thiscall sub_40E190(int *this, int a2, char a3)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 22; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 22 * a2 + i + 10) + 112))(*(this + 22 * a2 + i + 10));
  for ( j = 0; j < 22; ++j )
  {
    if ( (unsigned __int16)sub_4193D0(*(this + 1), a2, j) )
      sub_40CDC0((_DWORD *)dword_79032C, *(this + 1), a2, j, a3);
  }
}


//======================================================================
// sub_40E250
// entry 0040e250  size 78  status ok
//======================================================================

int __thiscall sub_40E250(int *this, int a2)
{
  if ( *(this + 1) == 4 )
    return sub_40D0F0(*(this + 1), a2, 0) - 27;
  else
    return sub_40D0F0(*(this + 1), a2, 0) - 1;
}


//======================================================================
// sub_40E2A0
// entry 0040e2a0  size 78  status ok
//======================================================================

int __thiscall sub_40E2A0(int *this, int a2)
{
  if ( *(this + 1) == 4 )
    return sub_40D330(*(this + 1), a2, 0) + 2;
  else
    return sub_40D330(*(this + 1), a2, 0) - 19;
}


//======================================================================
// sub_40E2F0
// entry 0040e2f0  size 558  status ok
//======================================================================

signed int __thiscall sub_40E2F0(int this)
{
  signed int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // [esp-4h] [ebp-4Ch]
  int v6; // [esp+4h] [ebp-44h]
  int v7; // [esp+8h] [ebp-40h]
  char Buffer[52]; // [esp+Ch] [ebp-3Ch] BYREF
  int i; // [esp+44h] [ebp-4h]

  if ( *(_DWORD *)(this + 4) != 4
    || (int)sub_419530(4, 0) >= 3
    || (result = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 40)), result != 53) )
  {
    for ( i = 0; i < 4; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
    for ( i = 0; ; ++i )
    {
      result = sub_4194C0(*(_DWORD *)(this + 4));
      if ( i >= result )
        break;
      v7 = sub_4198D0(*(_DWORD *)(this + 4), i);
      v6 = sub_4197D0(*(_DWORD *)(this + 4), i);
      if ( *(_DWORD *)(this + 4) == 4 )
      {
        v2 = sub_419980(4, 0);
        sprintf(Buffer, "%d", v2);
      }
      else if ( v7 == v6 || v6 >= 22 )
      {
        sprintf(Buffer, "%d", v7);
      }
      else
      {
        sprintf(Buffer, "%d/%d", v6, v7);
      }
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 4 * i + 8) + 180))(
        *(_DWORD *)(this + 4 * i + 8),
        Buffer);
      v4 = sub_40E2A0((int *)this, i);
      v3 = sub_40E250((int *)this, i);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4 * i + 8) + 68))(
        *(_DWORD *)(this + 4 * i + 8),
        v3,
        v4);
      if ( !(unsigned __int8)sub_418460(dword_790324)
        || (int)sub_419530(*(_DWORD *)(this + 4), i) <= 1
        || CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 88 * i + 40)) == 53 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 116))(*(_DWORD *)(this + 4 * i + 8));
      }
    }
  }
  return result;
}


//======================================================================
// sub_40E520
// entry 0040e520  size 779  status ok
//======================================================================

int __fastcall sub_40E520(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int v7; // edi
  int v9; // [esp+10h] [ebp-14h]
  int i; // [esp+14h] [ebp-10h]
  int j; // [esp+14h] [ebp-10h]
  int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  int v16; // [esp+20h] [ebp-4h]

  result = a1;
  if ( *(_DWORD *)(a1 + 4) != 4 )
  {
    for ( i = 0; i < 4; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * i + 24) + 112))(*(_DWORD *)(a1 + 4 * i + 24));
    for ( j = 0; ; ++j )
    {
      result = sub_4194C0(*(_DWORD *)(a1 + 4));
      if ( j >= result )
        break;
      switch ( *(_BYTE *)(dword_790324 + j + 280 * *(_DWORD *)(a1 + 4) + 272) )
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
      if ( *(char *)(dword_790324 + j + 280 * *(_DWORD *)(a1 + 4) + 272) != -1 )
      {
        v9 = *(_DWORD *)(a1 + 88 * j + 40);
        v12 = *(_DWORD *)(a1 + 88 * j + 40 + 4 * sub_419530(*(_DWORD *)(a1 + 4), j) - 4);
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 76))(v12);
        v4 = sub_5F5550(v12) + v3;
        v13 = (v4 - (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9)) / 2 + v2;
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 84))(v12);
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 84))(v9);
        v7 = sub_5F5590(v9) + v6;
        v15 = (v7 - (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 84))(v12)) / 2 + v5;
        v14 = v13 - sub_5F5550(*(_DWORD *)(a1 + 4 * j + 24)) / 2;
        v16 = v15 - sub_5F5590(*(_DWORD *)(a1 + 4 * j + 24)) / 2;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4 * j + 24) + 68))(
          *(_DWORD *)(a1 + 4 * j + 24),
          v14,
          v16);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * j + 24) + 116))(*(_DWORD *)(a1 + 4 * j + 24));
      }
    }
  }
  return result;
}


//======================================================================
// sub_40E850
// entry 0040e850  size 391  status ok
//======================================================================

int __stdcall sub_40E850(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_79032C;
  if ( *(_DWORD *)(dword_79032C + 64) )
  {
    sub_5EAF00(5027);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 64) + 176))(*(_DWORD *)(dword_79032C + 64), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 64) + 116))(*(_DWORD *)(dword_79032C + 64));
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_79032C + 60) )
  {
    sub_5EAF00(5026);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 60) + 176))(*(_DWORD *)(dword_79032C + 60), 0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 60) + 116))(*(_DWORD *)(dword_79032C + 60));
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_40E9E0
// entry 0040e9e0  size 339  status ok
//======================================================================

int __stdcall sub_40E9E0(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_79032C;
  if ( *(_DWORD *)(dword_79032C + 64) )
  {
    sub_5EAF00(5029);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 64) + 176))(*(_DWORD *)(dword_79032C + 64), 0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_79032C + 60) )
  {
    sub_5EAF00(5028);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 60) + 176))(*(_DWORD *)(dword_79032C + 60), 0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_40EB40
// entry 0040eb40  size 339  status ok
//======================================================================

int __stdcall sub_40EB40(int a1)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  result = dword_79032C;
  if ( *(_DWORD *)(dword_79032C + 64) )
  {
    sub_5EAF00(5037);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 64) + 176))(*(_DWORD *)(dword_79032C + 64), 0);
    if ( operator new(0x20u) )
      v3 = sub_6010A0(a1);
    else
      v3 = 0;
    result = sub_5F5D50(v3);
  }
  if ( *(_DWORD *)(dword_79032C + 60) )
  {
    sub_5EAF00(5036);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 60) + 176))(*(_DWORD *)(dword_79032C + 60), 0);
    if ( operator new(0x20u) )
      v2 = sub_6010A0(0);
    else
      v2 = 0;
    return sub_5F5D50(v2);
  }
  return result;
}


//======================================================================
// sub_40ECA0
// entry 0040eca0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_40ECA0(_DWORD *this)
{
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  sub_5CC1D0(this);
  *this = &BlackjackBetArea::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 30; ++j )
      *(this + 30 * i + j + 696) = 0;
  }
  return this;
}


//======================================================================
// sub_40ED10
// entry 0040ed10  size 92  status ok
//======================================================================

int __thiscall sub_40ED10(_DWORD *this)
{
  *this = &BlackjackBetArea::`vftable';
  sub_40F390(this);
  return sub_5CC230();
}


//======================================================================
// sub_40ED70
// entry 0040ed70  size 64  status ok
//======================================================================

int __thiscall sub_40ED70(pairNode **this)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 1;
  v2[1] = 2;
  v2[2] = 0;
  v2[3] = 3;
  return v2[pairNode::raw_length(*(this + 94))] + 5009;
}


//======================================================================
// sub_40EDB0
// entry 0040edb0  size 1125  status ok
//======================================================================

int __thiscall sub_40EDB0(CMFCToolBarsCustomizeDialog **this, int a2, int a3, int a4, int a5)
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
  int v15; // [esp-Ch] [ebp-44h]
  int IsFixedSize; // [esp-8h] [ebp-40h]
  int v17; // [esp+0h] [ebp-38h]
  int v18; // [esp+8h] [ebp-30h]
  int v19; // [esp+Ch] [ebp-2Ch]
  int v20; // [esp+10h] [ebp-28h]
  int v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-1Ch]
  void *v24; // [esp+20h] [ebp-18h]
  int v25; // [esp+28h] [ebp-10h]

  sub_5CCA50(a2, a3, a4, a5);
  v25 = (int)CMFCToolBarsCustomizeDialog::GetFlags(*(this + 120 * a2 + 30 * a3 + 95)) <= 32 ? 33 : 46;
  result = *(_BYTE *)(dword_790324 + a3 + 280 * a2 + 268) != 0;
  if ( *(_BYTE *)(dword_790324 + a3 + 280 * a2 + 268) )
  {
    if ( a2 == -1 )
    {
      v23 = -1;
    }
    else
    {
      if ( a2 == 4 )
        v20 = 0;
      else
        v20 = *(char *)(dword_790324 + 280 * a2 + 281);
      v23 = v20;
    }
    if ( v23
      && (a2 != -1 ? (a2 != 4 ? (v19 = *(char *)(dword_790324 + 280 * a2 + 281)) : (v19 = 0), v22 = v19) : (v22 = -1),
          v22 != 2) )
    {
      v9 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int, int))*this + 54))(this, a2, a3);
      v10 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int, int))*this + 56))(this, a2, a3);
      v11 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int, int, int))*this + 53))(
              this,
              a2,
              a3,
              a4 * v10 + v9);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 68))(
        *(this + 120 * a2 + 30 * a3 + a4 + 95),
        v11);
    }
    else
    {
      v6 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int, int))*this + 54))(this, a2, a3);
      v7 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int, int))*this + 56))(this, a2, a3);
      v8 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int, int, int))*this + 53))(
             this,
             a2,
             a3,
             a4 * v7 + v6);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 68))(
        *(this + 120 * a2 + 30 * a3 + a4 + 95),
        v8 - v25 / 2);
    }
    v24 = operator new(0x190u);
    if ( v24 )
      v18 = sub_5F5F50(v24);
    else
      v18 = 0;
    *(this + 30 * a3 + a4 + 696) = (CMFCToolBarsCustomizeDialog *)v18;
    IsFixedSize = CMediaType::IsFixedSize(*(this + 120 * a2 + 30 * a3 + a4 + 95));
    v15 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 84))(*(this + 120 * a2 + 30 * a3 + a4 + 95));
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 76))(*(this + 120 * a2 + 30 * a3 + a4 + 95));
    v13 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **, int))*this + 51))(this, v25 + v12);
    sub_5EAE80(v13, v15, IsFixedSize, -1, v17);
    v14 = sub_62FBF0(3);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 30 * a3 + a4 + 696) + 176))(
      *(this + 30 * a3 + a4 + 696),
      v14 + 3 * (16 - a5));
    sub_5EB700(1);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 30 * a3 + a4 + 696) + 116))(*(this + 30 * a3 + a4 + 696));
  }
  return result;
}


//======================================================================
// sub_40F220
// entry 0040f220  size 120  status ok
//======================================================================

_DWORD *__thiscall sub_40F220(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v4 = *(this + 94) + 32 * a3 + 72;
  v6 = *(_DWORD *)(v4 + 8 * a4);
  v7 = *(_DWORD *)(v4 + 8 * a4 + 4);
  if ( a3 < 4 && *(_BYTE *)(dword_790324 + a4 + 280 * a3 + 268) )
    v6 /= 2;
  *a2 = v6;
  a2[1] = v7;
  return a2;
}


//======================================================================
// sub_40F2A0
// entry 0040f2a0  size 233  status ok
//======================================================================

int __thiscall sub_40F2A0(_DWORD **this, int a2, int a3)
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
// sub_40F390
// entry 0040f390  size 258  status ok
//======================================================================

int __thiscall sub_40F390(_DWORD **this)
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
// sub_40F4A0
// entry 0040f4a0  size 729  status ok
//======================================================================

int __stdcall sub_40F4A0(int a1, int a2)
{
  int result; // eax
  _DWORD v3[49]; // [esp+8h] [ebp-E8h] BYREF
  _DWORD v4[8]; // [esp+CCh] [ebp-24h]
  int v5; // [esp+ECh] [ebp-4h]

  v3[0] = 363;
  v3[1] = 305;
  v3[2] = 300;
  v3[3] = 272;
  v3[4] = 378;
  v3[5] = 272;
  v3[6] = 350;
  v3[7] = 184;
  v3[8] = 300;
  v3[9] = 184;
  v3[10] = 378;
  v3[11] = 184;
  v3[12] = 203;
  v3[13] = 306;
  v3[14] = 122;
  v3[15] = 272;
  v3[16] = 200;
  v3[17] = 272;
  v3[18] = 177;
  v3[19] = 184;
  v3[20] = 131;
  v3[21] = 184;
  v3[22] = 209;
  v3[23] = 184;
  v3[24] = 495;
  v3[25] = 235;
  v3[26] = 453;
  v3[27] = 203;
  v3[28] = 532;
  v3[29] = 203;
  v3[30] = 499;
  v3[31] = 120;
  v3[32] = 450;
  v3[33] = 120;
  v3[34] = 529;
  v3[35] = 120;
  v3[36] = 70;
  v3[37] = 234;
  v3[38] = -18;
  v3[39] = 203;
  v3[40] = 61;
  v3[41] = 203;
  v3[42] = 36;
  v3[43] = 120;
  v3[44] = -18;
  v3[45] = 120;
  v3[46] = 61;
  v3[47] = 120;
  v4[0] = 323;
  v4[1] = 305;
  v4[2] = 243;
  v4[3] = 306;
  v4[4] = 455;
  v4[5] = 235;
  v4[6] = 110;
  v4[7] = 234;
  v5 = sub_5CB820(a1);
  switch ( v5 )
  {
    case 1:
      result = v3[12 * a1];
      break;
    case 2:
      if ( *(_BYTE *)(dword_790324 + 280 * a1 + 283) && a2 == 1 )
        result = v4[2 * a1];
      else
        result = v3[12 * a1 + 2 + 2 * a2];
      break;
    case 3:
      result = v3[12 * a1 + 2 + 2 * a2];
      break;
    case 4:
      if ( a2 >= 2 )
        result = v3[12 * a1 + 4 + 2 * a2];
      else
        result = v3[12 * a1 + 2 + 2 * a2];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_40F790
// entry 0040f790  size 729  status ok
//======================================================================

int __stdcall sub_40F790(int a1, int a2)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-E8h] BYREF
  _DWORD v4[49]; // [esp+Ch] [ebp-E4h]
  _DWORD v5[7]; // [esp+D0h] [ebp-20h]
  int v6; // [esp+ECh] [ebp-4h]

  v3 = 363;
  v4[0] = 305;
  v4[1] = 300;
  v4[2] = 272;
  v4[3] = 378;
  v4[4] = 272;
  v4[5] = 350;
  v4[6] = 184;
  v4[7] = 300;
  v4[8] = 184;
  v4[9] = 378;
  v4[10] = 184;
  v4[11] = 203;
  v4[12] = 306;
  v4[13] = 122;
  v4[14] = 272;
  v4[15] = 200;
  v4[16] = 272;
  v4[17] = 177;
  v4[18] = 184;
  v4[19] = 131;
  v4[20] = 184;
  v4[21] = 209;
  v4[22] = 184;
  v4[23] = 495;
  v4[24] = 235;
  v4[25] = 453;
  v4[26] = 203;
  v4[27] = 532;
  v4[28] = 203;
  v4[29] = 499;
  v4[30] = 120;
  v4[31] = 450;
  v4[32] = 120;
  v4[33] = 529;
  v4[34] = 120;
  v4[35] = 70;
  v4[36] = 234;
  v4[37] = -18;
  v4[38] = 203;
  v4[39] = 61;
  v4[40] = 203;
  v4[41] = 36;
  v4[42] = 120;
  v4[43] = -18;
  v4[44] = 120;
  v4[45] = 61;
  v4[46] = 120;
  v4[48] = 323;
  v5[0] = 305;
  v5[1] = 243;
  v5[2] = 306;
  v5[3] = 455;
  v5[4] = 235;
  v5[5] = 110;
  v5[6] = 234;
  v6 = sub_5CB820(a1);
  switch ( v6 )
  {
    case 1:
      result = v4[12 * a1];
      break;
    case 2:
      if ( *(_BYTE *)(dword_790324 + 280 * a1 + 283) && a2 == 1 )
        result = v5[2 * a1];
      else
        result = v4[12 * a1 + 2 + 2 * a2];
      break;
    case 3:
      result = v4[12 * a1 + 2 + 2 * a2];
      break;
    case 4:
      if ( a2 >= 2 )
        result = v4[12 * a1 + 4 + 2 * a2];
      else
        result = v4[12 * a1 + 2 + 2 * a2];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_40FA80
// entry 0040fa80  size 87  status ok
//======================================================================

int __stdcall sub_40FA80(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_40F4A0(a1, a2);
  if ( sub_62FBF0(2) )
    return v3 - sub_62FBF0(3);
  else
    return v3 + sub_62FBF0(3);
}


//======================================================================
// sub_40FAE0
// entry 0040fae0  size 87  status ok
//======================================================================

int __stdcall sub_40FAE0(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_40F790(a1, a2);
  if ( sub_62FBF0(2) )
    return v3 - sub_62FBF0(3);
  else
    return v3 + sub_62FBF0(3);
}


//======================================================================
// sub_40FB60
// entry 0040fb60  size 32  status ok
//======================================================================

int __stdcall sub_40FB60(int a1, int a2)
{
  return sub_40F790(a1, a2) - 15;
}


//======================================================================
// sub_40FB80
// entry 0040fb80  size 121  status ok
//======================================================================

_DWORD *__thiscall sub_40FB80(void *this)
{
  _DWORD *v2; // [esp+0h] [ebp-4h]

  sub_5F49D0(this);
  *v2 = &FlickPad::`vftable';
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
// sub_40FC20
// entry 0040fc20  size 407  status ok
//======================================================================

LONG __thiscall sub_40FC20(_DWORD *this, LONG a2)
{
  LONG result; // eax
  int v3; // [esp+0h] [ebp-24h]
  CImageDisplay *v6; // [esp+Ch] [ebp-18h]

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = *(_DWORD *)(dword_790324 + 1232);
    if ( result != -1 && *(_DWORD *)(dword_790324 + 1232) != 4 )
    {
      v6 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_790324 + 1232));
      result = CImageDisplay::GetDisplayFormat(v6)->rcSource.left;
      if ( result == 2 || (result = (LONG)CImageDisplay::GetDisplayFormat(v6), *(_DWORD *)result == 3) )
      {
        result = dword_79032C;
        if ( *(_DWORD *)(dword_79032C + 52) )
        {
          v3 = *(_DWORD *)(a2 + 24);
          if ( v3 == 1 )
          {
            result = a2;
            if ( (*(_DWORD *)(a2 + 28) & 0x18) != 0 )
            {
              result = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 168))(this);
              if ( !(_BYTE)result )
              {
                *(this + 18) = *(_DWORD *)(a2 + 8);
                *(this + 19) = *(_DWORD *)(a2 + 12);
                *((_BYTE *)this + 8) = 1;
                *((_BYTE *)this + 9) = 1;
                result = a2;
                if ( (*(_DWORD *)(a2 + 28) & 8) != 0 )
                {
                  *(this + 22) = 8;
                }
                else
                {
                  result = a2;
                  if ( (*(_DWORD *)(a2 + 28) & 0x10) != 0 )
                    *(this + 22) = 16;
                }
              }
            }
          }
          else if ( v3 == 2 )
          {
            result = a2;
            if ( (*(this + 22) & *(_DWORD *)(a2 + 28)) != 0 )
            {
              result = (*(int (__thiscall **)(_DWORD *))(*this + 168))(this);
              if ( (_BYTE)result )
              {
                *(this + 20) = *(_DWORD *)(a2 + 8);
                *(this + 21) = *(_DWORD *)(a2 + 12);
                sub_40FDC0(this);
                *((_BYTE *)this + 8) = 0;
                *((_BYTE *)this + 9) = 0;
                return (LONG)this;
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
// sub_40FDC0
// entry 0040fdc0  size 449  status ok
//======================================================================

int __thiscall sub_40FDC0(_DWORD *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-1Ch]
  int v3; // [esp+4h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v8 = *(_DWORD *)(dword_790324 + 1232);
  if ( v8 == -1 )
  {
    v6 = -1;
  }
  else
  {
    if ( v8 == 4 )
      v3 = 0;
    else
      v3 = *(char *)(dword_790324 + 280 * v8 + 281);
    v6 = v3;
  }
  v5 = abs(*(this + 20) - *(this + 18));
  if ( v5 < 50 )
    v5 = 0;
  v7 = *(this + 21) - *(this + 19);
  if ( v7 < 50 )
    v7 = 0;
  result = (int)this;
  v2 = *(this + 22);
  if ( v2 == 8 )
  {
    if ( v5 > v7 )
    {
      result = sub_413360(v8, 0, 1);
      if ( (_BYTE)result )
        result = sub_40DA70((int *)dword_79032C);
    }
    if ( v7 > v5 )
    {
      result = *(_BYTE *)(dword_790324 + 280 * v8 + 280) != 0;
      if ( !*(_BYTE *)(dword_790324 + 280 * v8 + 280) )
      {
        result = sub_413360(v8, 1, 1);
        if ( (_BYTE)result )
          return sub_40DA70((int *)dword_79032C);
      }
    }
  }
  else if ( v2 == 16 )
  {
    if ( v5 > v7 && (unsigned __int8)sub_41ADE0(v8, v6) && (unsigned __int8)sub_413360(v8, 3, 1) )
      sub_40DA70((int *)dword_79032C);
    result = v7;
    if ( v7 > v5 )
    {
      result = sub_41A960(v8);
      if ( (_BYTE)result )
      {
        result = sub_413360(v8, 2, 1);
        if ( (_BYTE)result )
          return sub_40DA70((int *)dword_79032C);
      }
    }
  }
  return result;
}


//======================================================================
// sub_40FF90
// entry 0040ff90  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_40FF90(_BYTE *this)
{
  sub_5FC0D0(0);
  *(_DWORD *)this = &BlackjackDealScript::`vftable';
  *(this + 36) = sub_637810(4) < 2;
  return this;
}


//======================================================================
// sub_410030
// entry 00410030  size 142  status ok
//======================================================================

bool __thiscall sub_410030(_BYTE *this)
{
  return sub_5EB240(*(_DWORD *)(dword_79032C + 60)) >= 0
      && sub_5EB240(*(_DWORD *)(dword_79032C + 64)) >= 0
      && sub_5EB240(*(_DWORD *)(dword_79032C + 68)) >= 0
      && (unsigned __int8)sub_637630(dword_162EE84)
      && !byte_795F94
      && !*(this + 36)
      && !*(_BYTE *)(dword_790324 + 1240);
}


//======================================================================
// sub_4100C0
// entry 004100c0  size 777  status ok
//======================================================================

int __thiscall sub_4100C0(_DWORD *this)
{
  int v1; // kr00_4
  int result; // eax
  __int16 v3; // ax
  int v4; // [esp+4h] [ebp-38h]
  int v5; // [esp+8h] [ebp-34h]
  int v6; // [esp+Ch] [ebp-30h]

  v1 = unknown_libname_843(this);
  switch ( v1 )
  {
    case 0:
      *(this + 8) = sub_41A390(dword_790324);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
      if ( !sub_410030(this) )
        goto LABEL_7;
      if ( operator new(0x24u) )
        v6 = sub_4103E0(1, this);
      else
        v6 = 0;
      result = sub_5FC420(v6);
      break;
    case 1:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 2);
      if ( sub_410030(this) )
      {
        if ( operator new(0x28u) )
          v5 = sub_4106F0(*(this + 8), 0, this);
        else
          v5 = 0;
        result = sub_5FC420(v5);
      }
      else
      {
        v3 = sub_6436C0(*(_DWORD *)(dword_790324 + 1124));
        sub_419670(*(this + 8), v3, -1);
        sub_40CC00((_DWORD **)dword_79032C);
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      }
      break;
    case 2:
      if ( sub_419530(4, -1) == 2 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, 3, 0);
      }
      else
      {
        *(this + 8) = sub_41A390(dword_790324);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
        if ( sub_410030(this) )
        {
          if ( operator new(0x24u) )
            v4 = sub_4103E0(0, this);
          else
            v4 = 0;
          result = sub_5FC420(v4);
        }
        else
        {
          result = (*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 3);
        }
      }
      break;
    case 3:
      (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 4);
      if ( sub_410030(this) )
        result = sub_40EB40((int)this);
      else
LABEL_7:
        result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 64) + 112))(*(_DWORD *)(dword_79032C + 64));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 60) + 112))(*(_DWORD *)(dword_79032C + 60));
      *(_BYTE *)(dword_790324 + 1240) = 0;
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
        *(_DWORD *)(dword_790320 + 4),
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
// sub_4103E0
// entry 004103e0  size 295  status ok
//======================================================================

_BYTE *__thiscall sub_4103E0(_BYTE *this, char a2, int a3)
{
  sub_5FC0D0(a3);
  *(_DWORD *)this = &BlackjackDealerToReadyScript::`vftable';
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
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 60) + 176))(*(_DWORD *)(dword_79032C + 60), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 64) + 176))(*(_DWORD *)(dword_79032C + 64), 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 60) + 116))(*(_DWORD *)(dword_79032C + 60));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 64) + 116))(*(_DWORD *)(dword_79032C + 64));
  return this;
}


//======================================================================
// sub_410510
// entry 00410510  size 469  status ok
//======================================================================

int __thiscall sub_410510(_BYTE *this)
{
  int result; // eax

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( ++word_79030C <= word_790304 )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 64) + 176))(
          *(_DWORD *)(dword_79032C + 64),
          word_79030C);
      if ( word_79030C <= word_790308 )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 60) + 176))(
          *(_DWORD *)(dword_79032C + 60),
          word_79030C);
      if ( word_79030C == (*(this + 32) != 0 ? 7 : 4) && *(_DWORD *)(dword_790324 + 1224) == sub_418E70(dword_790324) )
      {
        sub_5EAF00(5025);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 68) + 116))(*(_DWORD *)(dword_79032C + 68));
      }
      if ( word_79030C >= word_790308 && word_79030C >= word_790304 )
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
  }
  else
  {
    word_79030C = 0;
    word_790308 = sub_5EB240(*(_DWORD *)(dword_79032C + 60));
    word_790304 = sub_5EB240(*(_DWORD *)(dword_79032C + 64));
    return (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 8))(this, 1, 4);
  }
  return result;
}


//======================================================================
// sub_4106F0
// entry 004106f0  size 413  status ok
//======================================================================

_DWORD *__thiscall sub_4106F0(_DWORD *this, int a2, char a3, int a4)
{
  sub_5FC0D0(a4);
  *this = &BlackjackDealToScript::`vftable';
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
      sub_5E9F20((char)"false", "..\\Casino\\blackjackdisplay.cpp", 1176);
      break;
  }
  sub_5EAF00(5030);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 64) + 176))(*(_DWORD *)(dword_79032C + 64), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_79032C + 60) + 176))(*(_DWORD *)(dword_79032C + 60), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79032C + 64) + 108))(*(_DWORD *)(dword_79032C + 64), 150);
  (*(void (__cdecl **)(int))(**(_DWORD **)(dword_79032C + 60) + 108))(151);
  return this;
}


//======================================================================
// sub_4108B0
// entry 004108b0  size 1141  status ok
//======================================================================

int __thiscall sub_4108B0(_BYTE *this)
{
  int result; // eax
  int v2; // eax
  __int16 v3; // ax
  _DWORD v5[3]; // [esp+1Ch] [ebp-24h]
  int v6; // [esp+28h] [ebp-18h]
  int v7; // [esp+2Ch] [ebp-14h]
  _WORD v8[5]; // [esp+30h] [ebp-10h]
  __int16 v9; // [esp+3Ah] [ebp-6h]

  v5[0] = 101003;
  v5[1] = 101004;
  v5[2] = 101005;
  v8[0] = 6;
  v8[1] = 6;
  v8[2] = 6;
  v8[3] = 5;
  v8[4] = 5;
  v9 = 7;
  v6 = *(_DWORD *)(dword_79032C + 64);
  v7 = *(_DWORD *)(dword_79032C + 60);
  result = unknown_libname_843(this);
  switch ( result )
  {
    case 0:
      word_79031C = 0;
      word_790318 = 0;
      word_790314 = sub_5EB240(v6);
      word_790310 = sub_5EB240(v7);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
      if ( *(_DWORD *)(dword_790324 + 1224) == sub_418E70(dword_790324) )
        *(this + 37) = 1;
      result = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 8))(this, 1, 4);
      break;
    case 1:
      if ( ++word_79031C <= word_790314 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, word_79031C);
      if ( word_79031C <= word_790310 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_79031C);
      if ( word_79031C == (__int16)v8[*((_DWORD *)this + 8)] - 1 )
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
      else if ( word_79031C == (__int16)v8[*((_DWORD *)this + 8)] )
      {
        v3 = sub_6436C0(*(_DWORD *)(dword_790324 + 1124));
        sub_419670(*((_DWORD *)this + 8), v3, -1);
        sub_40CC00((_DWORD **)dword_79032C);
      }
      if ( word_79031C >= word_790314 && word_79031C >= word_790310 )
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
      word_79031C = 0;
      sub_5EAF00(5039);
      sub_5EAF00(5038);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, 0);
      word_790314 = sub_5EB240(v6);
      word_790310 = sub_5EB240(v7);
      result = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 8))(this, 3, 4);
      break;
    case 3:
      if ( ++word_79031C <= word_790314 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 176))(v6, word_79031C);
      if ( word_79031C <= word_790310 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 176))(v7, word_79031C);
      if ( word_79031C == 3 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 68) + 112))(*(_DWORD *)(dword_79032C + 68));
      }
      else if ( word_79031C == v9 )
      {
        sub_5EAF00(5041);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 68) + 116))(*(_DWORD *)(dword_79032C + 68));
      }
      if ( word_79031C >= word_790314 && word_79031C >= word_790310 )
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
      return result;
  }
  return result;
}


//======================================================================
// sub_410D40
// entry 00410d40  size 182  status ok
//======================================================================

_BYTE *__thiscall sub_410D40(_BYTE *this, int a2)
{
  int v3; // [esp+4h] [ebp-1Ch]

  sub_5FC0D0(a2);
  *(_DWORD *)this = &BlackjackHitScript::`vftable';
  *(this + 32) = sub_637810(4) < 2;
  if ( *(_DWORD *)(dword_790324 + 1232) == -1 )
    v3 = 4;
  else
    v3 = *(_DWORD *)(dword_790324 + 1232);
  *((_DWORD *)this + 9) = v3;
  return this;
}


//======================================================================
// sub_410E00
// entry 00410e00  size 142  status ok
//======================================================================

bool __thiscall sub_410E00(_BYTE *this)
{
  return sub_5EB240(*(_DWORD *)(dword_79032C + 60)) >= 0
      && sub_5EB240(*(_DWORD *)(dword_79032C + 64)) >= 0
      && sub_5EB240(*(_DWORD *)(dword_79032C + 68)) >= 0
      && (unsigned __int8)sub_637630(dword_162EE84)
      && !byte_795F94
      && !*(this + 32)
      && !*(_BYTE *)(dword_790324 + 1240);
}


//======================================================================
// sub_410E90
// entry 00410e90  size 1118  status ok
//======================================================================

int __thiscall sub_410E90(int this)
{
  int result; // eax
  int v2; // kr00_4
  __int16 v3; // ax
  int v4; // [esp+4h] [ebp-40h]
  _DWORD *v5; // [esp+8h] [ebp-3Ch]
  _BYTE *v6; // [esp+Ch] [ebp-38h]
  int v8; // [esp+18h] [ebp-2Ch]
  int v9; // [esp+20h] [ebp-24h]
  _DWORD *v10; // [esp+28h] [ebp-1Ch]
  _BYTE *v11; // [esp+30h] [ebp-14h]

  v2 = unknown_libname_843(this);
  result = v2;
  switch ( v2 )
  {
    case 0:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, 1);
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      break;
    case 1:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, 2);
      if ( *(int *)(*(_DWORD *)(dword_790324 + 1124) + 2056) < 0 )
        sub_418F50(dword_790324);
      if ( *(_DWORD *)(dword_790324 + 1236) != 2 )
        goto LABEL_21;
      result = sub_5CD7C0(52250, this, 0);
      break;
    case 2:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, 3);
      if ( !sub_410E00((_BYTE *)this) )
        goto LABEL_21;
      v11 = operator new(0x24u);
      if ( v11 )
        v6 = sub_4103E0(v11, 1, this);
      else
        v6 = 0;
      result = sub_5FC420(v6);
      break;
    case 3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, 4);
      if ( !sub_410E00((_BYTE *)this) )
      {
        v3 = sub_6436C0(*(_DWORD *)(dword_790324 + 1124));
        sub_419670(*(_DWORD *)(this + 36), v3, -1);
        sub_40CC00((_DWORD **)dword_79032C);
        if ( (unsigned __int8)sub_418E20(dword_790324) )
        {
          sub_5EAF00(5041);
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 68) + 116))(*(_DWORD *)(dword_79032C + 68));
        }
        goto LABEL_21;
      }
      v10 = operator new(0x28u);
      if ( v10 )
        v5 = sub_4106F0(v10, *(_DWORD *)(this + 36), 1, this);
      else
        v5 = 0;
      result = sub_5FC420(v5);
      break;
    case 4:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, 5);
      if ( !sub_410E00((_BYTE *)this) )
        goto LABEL_21;
      result = sub_40EB40(this);
      break;
    case 5:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 4))(this, 6);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 64) + 112))(*(_DWORD *)(dword_79032C + 64));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 60) + 112))(*(_DWORD *)(dword_79032C + 60));
      *(_BYTE *)(dword_790324 + 1240) = 0;
      if ( (unsigned __int8)sub_41B990(*(_DWORD *)(this + 36), -1) )
      {
        if ( *(_DWORD *)(this + 36) == 4 )
        {
          result = sub_5CD7C0(52125, this, 0);
        }
        else
        {
          v9 = *(_DWORD *)(this + 36);
          if ( v9 == -1 )
          {
            sub_40E190(*(int **)(dword_79032C + 4 * *(_DWORD *)(this + 36) + 4), -1, 1);
          }
          else
          {
            if ( v9 == 4 )
              v4 = 0;
            else
              v4 = *(char *)(dword_790324 + 280 * v9 + 281);
            sub_40E190(*(int **)(dword_79032C + 4 * *(_DWORD *)(this + 36) + 4), v4, 1);
          }
          result = sub_5CD7C0(52325, this, 0);
        }
      }
      else if ( *(_DWORD *)(this + 36) == 4
             || *(_DWORD *)(dword_790324 + 1236) == 2
             || *(_BYTE *)(dword_790324 + 280 * *(_DWORD *)(this + 36) + 280) )
      {
LABEL_21:
        result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 28))(this, 0);
      }
      else
      {
        v8 = dword_790324;
        *(_DWORD *)(dword_790324 + 1260) = 11;
        *(_DWORD *)(v8 + 1264) = 4;
        result = sub_413790(this);
      }
      break;
    case 6:
      if ( *(_DWORD *)(this + 16) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 16) + 28))(*(_DWORD *)(this + 16), 0);
        result = sub_5FC420(0);
      }
      break;
    default:
      result = v2;
      break;
  }
  return result;
}


//======================================================================
// sub_411310
// entry 00411310  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_411310(_DWORD *this, int a2)
{
  sub_5FC0D0(0);
  *this = &BlackjackSayHumanLineScript::`vftable';
  *(this + 8) = a2;
  return this;
}


//======================================================================
// sub_411340
// entry 00411340  size 459  status ok
//======================================================================

int __thiscall sub_411340(int *this)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-4Ch]
  CImageDisplay *v5; // [esp+14h] [ebp-38h]
  int v6; // [esp+20h] [ebp-2Ch]
  int v7; // [esp+24h] [ebp-28h] BYREF
  int v8; // [esp+28h] [ebp-24h]
  int v9; // [esp+2Ch] [ebp-20h]
  double v10; // [esp+34h] [ebp-18h]
  double v11; // [esp+3Ch] [ebp-10h]
  int v12; // [esp+48h] [ebp-4h]

  v12 = *(_DWORD *)(dword_790324 + 1232);
  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      v6 = *(this + 8);
      sub_5FC420(0);
      v2 = *(this + 8);
      if ( v2 < 5 || v2 > 6 )
      {
        result = sub_413360(v12, v6, 1);
        if ( !(_BYTE)result )
          return result;
      }
      else
      {
        sub_41A570(v12, v6 == 5);
      }
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
               *(_DWORD *)(dword_790320 + 4),
               1,
               0);
    }
  }
  else
  {
    (*(void (__thiscall **)(int *, int))(*this + 4))(this, 1);
    v8 = -1;
    if ( v12 != -1 )
    {
      v5 = (CImageDisplay *)sub_5DCB00(v12);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
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
            break;
        }
      }
    }
    if ( v8 == -1 )
      return (*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0);
    else
      return sub_639390(&v7, this, 0, 0);
  }
  return result;
}


//======================================================================
// sub_411530
// entry 00411530  size 48  status ok
//======================================================================

_DWORD *__thiscall sub_411530(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &BlackjackInsuranceDialog::`vftable';
  *(this + 111) = 0;
  return this;
}


//======================================================================
// sub_411580
// entry 00411580  size 303  status ok
//======================================================================

int __thiscall sub_411580(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  sub_5F83D0(3200243, 0);
  CMFCTabCtrl::HideInactiveWindow((CMFCTabCtrl *)this, 20);
  v1 = sub_630F40("SID_BLACKJACK_INSURANCE");
  sub_5F73E0(v1, 73, 0, 3);
  v2 = sub_630F40("SID_BLACKJACK_WANTINSURANCE");
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
// sub_4116B0
// entry 004116b0  size 169  status ok
//======================================================================

int __stdcall sub_4116B0(int a1)
{
  _DWORD *v2; // [esp+4h] [ebp-20h]
  _DWORD *v3; // [esp+Ch] [ebp-18h]

  sub_40D900((_DWORD *)dword_79032C);
  v3 = operator new(0x24u);
  if ( v3 )
    v2 = sub_411310(v3, 6 - (a1 == 0));
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_411760
// entry 00411760  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_411760(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &BlackjackActionDialog::`vftable';
  return this;
}


//======================================================================
// sub_4117B0
// entry 004117b0  size 494  status ok
//======================================================================

int __thiscall sub_4117B0(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    result = sub_5F88F0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(a2 + 24) == 4 )
      {
        switch ( tolower(*(char *)(a2 + 20)) )
        {
          case 'd':
            v7 = sub_5F2A60(3201004, 0);
            if ( (unsigned __int8)sub_6026D0(v7) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 2);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 'h':
            v6 = sub_5F2A60(3201002, 0);
            if ( (unsigned __int8)sub_6026D0(v6) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 1);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 'p':
            v8 = sub_5F2A60(3201005, 0);
            if ( (unsigned __int8)sub_6026D0(v8) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 3);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 'r':
            v9 = sub_5F2A60(3201006, 0);
            if ( (unsigned __int8)sub_6026D0(v9) )
            {
              (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 4);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 's':
            v5 = sub_5F2A60(3201003, 0);
            if ( (unsigned __int8)sub_6026D0(v5) )
            {
              (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 24))(this, 0);
              *(_BYTE *)(a2 + 4) = 1;
            }
            break;
          case 't':
            v3 = sub_5F2A60(5009, 0);
            if ( (unsigned __int8)sub_6026D0(v3) )
            {
              v4 = sub_40B260((void *)dword_790330, *(_DWORD *)(dword_790324 + 1232));
              sub_411C20(v4);
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
// sub_4119D0
// entry 004119d0  size 587  status ok
//======================================================================

int __thiscall sub_4119D0(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // [esp+4h] [ebp-5Ch]
  int v6; // [esp+8h] [ebp-58h]
  int v7; // [esp+Ch] [ebp-54h]
  int v8; // [esp+10h] [ebp-50h]
  int v10; // [esp+18h] [ebp-48h]
  int i; // [esp+1Ch] [ebp-44h]
  _DWORD v12[5]; // [esp+20h] [ebp-40h]
  int v13; // [esp+34h] [ebp-2Ch]
  int v14; // [esp+38h] [ebp-28h]
  _DWORD v15[9]; // [esp+3Ch] [ebp-24h]

  v12[0] = "SID_BLACKJACK_STAND";
  v12[1] = "SID_BLACKJACK_HIT";
  v12[2] = "SID_BLACKJACK_DOUBLE";
  v12[3] = "SID_BLACKJACK_SPLIT";
  v12[4] = "SID_BLACKJACK_SURRENDER";
  v14 = 32;
  v15[0] = 34;
  v15[1] = 32;
  v15[2] = 64;
  v15[3] = 32;
  v15[4] = 94;
  v15[5] = 32;
  v15[6] = 124;
  v15[7] = 5;
  v15[8] = 154;
  v13 = *(_DWORD *)(dword_790324 + 1232);
  if ( v13 == -1 )
  {
    v10 = -1;
  }
  else
  {
    if ( v13 == 4 )
      v8 = 0;
    else
      v8 = *(char *)(dword_790324 + 280 * v13 + 281);
    v10 = v8;
  }
  sub_5F83D0(5014, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 20);
  v1 = sub_630F40("SID_BLACKJACK_ACTIONS");
  sub_5F73E0(v1, 73, 0, 3);
  for ( i = 0; i < 5; ++i )
  {
    v2 = sub_630F40(v12[i]);
    sub_5F9DE0(0, i, (i == 4) + 3200222, v15[2 * i - 1], v15[2 * i], 2, v2, 72, 75, 74, -1, 0);
    sub_5FB300(i);
    sub_5EB700(1);
  }
  if ( *(_BYTE *)(dword_790324 + 280 * v13 + 280) )
  {
    v7 = sub_5FB300(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 208))(v7);
  }
  if ( !(unsigned __int8)sub_41A960(v13) )
  {
    v6 = sub_5FB300(2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
  }
  if ( !(unsigned __int8)sub_41ADE0(v13, v10) )
  {
    v5 = sub_5FB300(3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
  }
  result = sub_41AEC0(v13);
  if ( !(_BYTE)result )
  {
    v4 = sub_5FB300(4);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 208))(v4, v4);
  }
  return result;
}


//======================================================================
// sub_411C20
// entry 00411c20  size 173  status ok
//======================================================================

int __stdcall sub_411C20(int a1)
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
// sub_411CD0
// entry 00411cd0  size 148  status ok
//======================================================================

int __stdcall sub_411CD0(int a1)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v3; // [esp+Ch] [ebp-14h]

  sub_40DA70((int *)dword_79032C);
  v3 = operator new(0x24u);
  if ( v3 )
    v2 = sub_411310(v3, a1);
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_411D70
// entry 00411d70  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_411D70(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &BlackjackCardCountDialog::`vftable';
  return this;
}


//======================================================================
// sub_411DC0
// entry 00411dc0  size 163  status ok
//======================================================================

int sub_411DC0()
{
  int v0; // eax
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_5F83D0(1060, 0);
  v0 = sub_630F40("SID_BLACKJACK_COUNT");
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
// sub_411E70
// entry 00411e70  size 541  status ok
//======================================================================

int sub_411E70()
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

  v13 = sub_419D30(dword_790324);
  v14 = 4 * sub_418700(dword_790324) - *(_DWORD *)(dword_790324 + 1256);
  v8 = *(_DWORD *)(dword_790324 + 1252);
  v0 = (const char *)sub_630F40("SID_BLACKJACK_RUNNINGCOUNT_FORMAT");
  sprintf(Buffer, v0, v8);
  v12 = sub_5FB550(0);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v12 + 180))(v12, Buffer);
  v9 = *(_DWORD *)(dword_790324 + 1248);
  v1 = (const char *)sub_630F40("SID_BLACKJACK_TRUECOUNT_FORMAT");
  sprintf(Buffer, v1, v9);
  v11 = sub_5FB550(1);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v11 + 180))(v11, Buffer);
  if ( *(int *)(dword_790324 + 1248) <= 1 )
  {
    if ( *(int *)(dword_790324 + 1248) >= -1 )
      v3 = (const char *)sub_630F40("SID_BLACKJACK_DECK_NEUTRAL");
    else
      v3 = (const char *)sub_630F40("SID_BLACKJACK_DECK_LOWCARDRICH");
    sprintf(Buffer, v3);
  }
  else
  {
    v2 = (const char *)sub_630F40("SID_BLACKJACK_DECK_HIGHCARDRICH");
    sprintf(Buffer, v2);
  }
  v10 = sub_5FB550(2);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)v10 + 180))(v10, Buffer);
  if ( v13 <= 0 )
  {
    if ( v13 >= 0 )
      v5 = (const char *)sub_630F40("SID_BLACKJACK_ACES_NEUTRAL_FORMAT");
    else
      v5 = (const char *)sub_630F40("SID_BLACKJACK_ACES_POOR_FORMAT");
    sprintf(Buffer, v5, v14);
  }
  else
  {
    v4 = (const char *)sub_630F40("SID_BLACKJACK_ACES_RICH_FORMAT");
    sprintf(Buffer, v4, v14);
  }
  v6 = sub_5FB550(3);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v6 + 180))(v6, Buffer);
}


//======================================================================
// sub_412090
// entry 00412090  size 60  status ok
//======================================================================

int __stdcall sub_412090(int a1)
{
  *(_BYTE *)(sub_418400(-1) + 12) = 0;
  sub_637610(dword_162EE84);
  return sub_40DC40((_DWORD *)dword_79032C);
}


//======================================================================
// sub_412130
// entry 00412130  size 16  status ok
//======================================================================

int sub_412130()
{
  return 75;
}


//======================================================================
// sub_4122A0
// entry 004122a0  size 49  status ok
//======================================================================

int __thiscall sub_4122A0(_BYTE *this)
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
// sub_4122E0
// entry 004122e0  size 217  status ok
//======================================================================

int __thiscall sub_4122E0(_BYTE *this, int a2)
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
    return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             500,
             a2);
  sub_4189A0(dword_790324, this);
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
           *(_DWORD *)(dword_790320 + 4),
           1,
           0);
}


//======================================================================
// sub_4123C0
// entry 004123c0  size 1678  status ok
//======================================================================

int __thiscall sub_4123C0(_BYTE *this)
{
  _BYTE *v3; // [esp+8h] [ebp-64h]
  int v5; // [esp+18h] [ebp-54h]
  int v6; // [esp+1Ch] [ebp-50h]
  int v7; // [esp+20h] [ebp-4Ch]
  CImageDisplay *v8; // [esp+24h] [ebp-48h]
  int v9; // [esp+30h] [ebp-3Ch]
  int v10; // [esp+34h] [ebp-38h]
  int v11; // [esp+38h] [ebp-34h]
  CImageDisplay *v12; // [esp+3Ch] [ebp-30h]
  int v13; // [esp+48h] [ebp-24h]
  _BYTE *v14; // [esp+54h] [ebp-18h]
  int v15; // [esp+5Ch] [ebp-10h]
  int v16; // [esp+5Ch] [ebp-10h]
  int v17; // [esp+5Ch] [ebp-10h]
  int v18; // [esp+5Ch] [ebp-10h]
  int v19; // [esp+5Ch] [ebp-10h]

  if ( *((_BYTE *)dword_162EE84 + 37) )
    sub_419100(dword_790324);
  sub_40CC00((_DWORD **)dword_79032C);
  sub_40D6B0(0);
  if ( *(_DWORD *)(dword_790324 + 1260) != -1 )
    return sub_413790(0);
  if ( *(this + 7) )
  {
    v15 = sub_419DD0(dword_790324);
    if ( v15 == -1 )
    {
      if ( !*(this + 24) )
      {
        sub_41A190(dword_790324);
        *(this + 24) = 1;
      }
      if ( (unsigned __int8)sub_41A260(dword_790324) )
      {
        if ( (unsigned __int8)sub_41A350(dword_790324) )
        {
          sub_4190B0(-1, 0);
          return sub_412CC0();
        }
        else
        {
          v16 = sub_41A430(dword_790324);
          if ( v16 == -1 )
          {
            if ( (unsigned __int8)CSourceStream::Exit((CSourceStream *)dword_790324) )
            {
              sub_4190B0(-1, 0);
              return sub_412F40(this);
            }
            else
            {
              v17 = sub_41A700(dword_790324);
              if ( v17 == -1 )
              {
                v18 = sub_41A890(dword_790324);
                if ( v18 == -1 )
                {
                  sub_4190B0(-1, 0);
                  if ( (unsigned __int8)sub_41B830(dword_790324) )
                  {
                    if ( *(this + 15) || (unsigned __int8)sub_41B990(4, -1) )
                    {
                      v19 = sub_41B8F0(dword_790324);
                      if ( v19 == -1 )
                      {
                        if ( !(unsigned __int8)sub_5DA7B0(dword_790320) || *(this + 19) )
                        {
                          sub_4190B0(-1, 0);
                          if ( *((_BYTE *)dword_162EE84 + 37) )
                            return sub_4122E0(this, 200);
                          else
                            return sub_40DAF0((void *)dword_79032C);
                        }
                        else
                        {
                          *(this + 19) = 1;
                          v5 = dword_790324;
                          *(_DWORD *)(dword_790324 + 1260) = 6;
                          *(_DWORD *)(v5 + 1264) = -1;
                          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                                   *(_DWORD *)(dword_790320 + 4),
                                   1,
                                   0);
                        }
                      }
                      else
                      {
                        sub_4190B0(v19, 0);
                        sub_41BA00(v19);
                        if ( *(this + 17) )
                        {
                          if ( *(this + 18) )
                          {
                            *(this + 17) = 0;
                            *(this + 18) = 0;
                            return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                                     *(_DWORD *)(dword_790320 + 4),
                                     1,
                                     0);
                          }
                          else
                          {
                            *(this + 18) = 1;
                            v8 = (CImageDisplay *)sub_5DCB00(v19);
                            if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
                              || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
                            {
                              v6 = -1;
                            }
                            else
                            {
                              v6 = v19;
                            }
                            v7 = dword_790324;
                            *(_DWORD *)(dword_790324 + 1260) = 5;
                            *(_DWORD *)(v7 + 1264) = v6;
                            return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                                     *(_DWORD *)(dword_790320 + 4),
                                     1,
                                     0);
                          }
                        }
                        else
                        {
                          *(this + 17) = 1;
                          v9 = dword_790324;
                          *(_DWORD *)(dword_790324 + 1260) = 12;
                          *(_DWORD *)(v9 + 1264) = 4;
                          return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                                   *(_DWORD *)(dword_790320 + 4),
                                   1,
                                   0);
                        }
                      }
                    }
                    else
                    {
                      *(this + 15) = 1;
                      v10 = dword_790324;
                      *(_DWORD *)(dword_790324 + 1260) = 11;
                      *(_DWORD *)(v10 + 1264) = 4;
                      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                               *(_DWORD *)(dword_790320 + 4),
                               1,
                               0);
                    }
                  }
                  else if ( *(this + 15) )
                  {
                    *(this + 15) = 0;
                    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790320 + 4) + 4))(
                      *(_DWORD *)(dword_790320 + 4),
                      1);
                    v14 = operator new(0x28u);
                    if ( v14 )
                      v3 = sub_410D40(v14, *(_DWORD *)(dword_790320 + 4));
                    else
                      v3 = 0;
                    return sub_5FC420(v3);
                  }
                  else
                  {
                    *(this + 15) = 1;
                    v11 = dword_790324;
                    *(_DWORD *)(dword_790324 + 1260) = 11;
                    *(_DWORD *)(v11 + 1264) = 4;
                    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                             *(_DWORD *)(dword_790320 + 4),
                             1,
                             0);
                  }
                }
                else
                {
                  sub_4190B0(v18, 0);
                  if ( (unsigned __int8)sub_41A830(v18) )
                  {
                    return sub_413090(v18);
                  }
                  else if ( *(this + 13) )
                  {
                    return sub_413690(v18);
                  }
                  else
                  {
                    return sub_413190(v18);
                  }
                }
              }
              else
              {
                sub_4190B0(v17, 0);
                sub_41B700(v17);
                return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
                         *(_DWORD *)(dword_790320 + 4),
                         1,
                         0);
              }
            }
          }
          else
          {
            sub_4190B0(v16, 0);
            return sub_412E10(v16);
          }
        }
      }
      else
      {
        sub_4190B0(-1, 0);
        return sub_4122E0(this, 200);
      }
    }
    else
    {
      v12 = (CImageDisplay *)sub_5DCB00(v15);
      if ( CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v12)->rcSource.left == 3 )
      {
        sub_4190B0(v15, 1);
      }
      else
      {
        sub_4190B0(v15, 0);
      }
      return sub_412A50(v15);
    }
  }
  else
  {
    *(this + 7) = 1;
    v13 = dword_790324;
    *(_DWORD *)(dword_790324 + 1260) = 7;
    *(_DWORD *)(v13 + 1264) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_412A50
// entry 00412a50  size 610  status ok
//======================================================================

int __thiscall sub_412A50(_BYTE *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  CImageDisplay *v10; // [esp+14h] [ebp-1Ch]
  __int64 v11; // [esp+28h] [ebp-8h] BYREF

  v10 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3 )
  {
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(11, &unk_707448);
      sub_41BC50(*(_WORD *)(dword_790324 + 1248));
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    v2 = sub_5DCB00(a2);
    result = sub_5D5840(v2);
    if ( !(_BYTE)result )
    {
      if ( (unsigned __int8)sub_5DA7B0(dword_790320) )
      {
        *(_BYTE *)(sub_5DCB00(a2) + 1185) = 1;
        return sub_4123C0(this);
      }
      else
      {
        result = sub_419F00(a2);
        if ( (_BYTE)result )
        {
          v4 = sub_5DCB00(a2);
          return sub_5DBB70(v4);
        }
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
      v7 = sub_40A0B0(a2);
      v11 = sub_64C8A0(v7, 0);
      (*(void (__thiscall **)(_DWORD, __int64 *, _DWORD, int))(**(_DWORD **)(dword_790324 + 4 * a2 + 1128) + 196))(
        *(_DWORD *)(dword_790324 + 4 * a2 + 1128),
        &v11,
        0,
        1);
      *(_BYTE *)(sub_5DCB00(a2) + 1184) = 1;
    }
    else if ( (unsigned __int8)sub_5DA7B0(dword_790320) )
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
// sub_412CC0
// entry 00412cc0  size 329  status ok
//======================================================================

int __cdecl sub_412CC0()
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
  if ( (unsigned __int8)sub_418E20(dword_790324) )
  {
    sub_418ED0(dword_790324);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790320 + 4) + 4))(*(_DWORD *)(dword_790320 + 4), 1);
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
             dword_162EE84,
             4019,
             *(_DWORD *)(dword_790320 + 4),
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
      v2 = sub_40FF90(v3);
    else
      v2 = 0;
    return sub_5DA390(v2);
  }
}


//======================================================================
// sub_412E10
// entry 00412e10  size 302  status ok
//======================================================================

int __thiscall sub_412E10(_BYTE *this, int a2)
{
  int v4; // [esp+8h] [ebp-18h]
  CImageDisplay *v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+18h] [ebp-8h]
  char v7; // [esp+1Fh] [ebp-1h]

  if ( *(this + 8) )
  {
    v5 = (CImageDisplay *)sub_5DCB00(a2);
    if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
    {
      return sub_40D840((_DWORD *)dword_79032C);
    }
    else
    {
      v7 = sub_40B1C0(a2);
      sub_41A570(a2, v7);
      if ( v7 )
      {
        v4 = dword_790324;
        *(_DWORD *)(dword_790324 + 1260) = 0;
        *(_DWORD *)(v4 + 1264) = a2;
      }
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
               *(_DWORD *)(dword_790320 + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 8) = 1;
    v6 = dword_790324;
    *(_DWORD *)(dword_790324 + 1260) = 8;
    *(_DWORD *)(v6 + 1264) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_412F40
// entry 00412f40  size 324  status ok
//======================================================================

int __thiscall sub_412F40(_BYTE *this)
{
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( *(this + 9) )
  {
    v5 = sub_41A780(dword_790324);
    if ( v5 == -1 )
    {
      sub_4190B0(-1, 0);
      return sub_40DAF0((void *)dword_79032C);
    }
    else
    {
      sub_4190B0(v5, 0);
      if ( *(this + 10) )
      {
        *(this + 10) = 0;
        sub_41B620(v5);
      }
      else
      {
        *(this + 10) = 1;
        v3 = dword_790324;
        *(_DWORD *)(dword_790324 + 1260) = 2;
        *(_DWORD *)(v3 + 1264) = v5;
      }
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
               *(_DWORD *)(dword_790320 + 4),
               1,
               0);
    }
  }
  else
  {
    *(this + 9) = 1;
    sub_40CDC0((_DWORD *)dword_79032C, 4, 0, 0, 0);
    v4 = dword_790324;
    *(_DWORD *)(dword_790324 + 1260) = 9;
    *(_DWORD *)(v4 + 1264) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_413090
// entry 00413090  size 242  status ok
//======================================================================

int __thiscall sub_413090(_BYTE *this, int a2)
{
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  if ( *(this + 11) )
  {
    if ( *(this + 14) )
    {
      *(this + 11) = 0;
      *(this + 14) = 0;
      sub_41B780(a2);
    }
    else
    {
      *(this + 14) = 1;
      v3 = dword_790324;
      *(_DWORD *)(dword_790324 + 1260) = 3;
      *(_DWORD *)(v3 + 1264) = a2;
    }
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
  else
  {
    *(this + 11) = 1;
    v4 = dword_790324;
    *(_DWORD *)(dword_790324 + 1260) = 10;
    *(_DWORD *)(v4 + 1264) = 4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_413190
// entry 00413190  size 455  status ok
//======================================================================

int __thiscall sub_413190(_BYTE *this, int a2)
{
  int v2; // eax
  int v5; // [esp+4h] [ebp-1Ch]
  int v7; // [esp+Ch] [ebp-14h]
  CImageDisplay *v8; // [esp+10h] [ebp-10h]

  if ( a2 == -1 )
  {
    v2 = sub_419530(-1, -1);
  }
  else
  {
    if ( a2 == 4 )
      v5 = 0;
    else
      v5 = *(char *)(dword_790324 + 280 * a2 + 281);
    v2 = sub_419530(a2, v5);
  }
  if ( v2 == 1 )
    return sub_413360(a2, 1, 0);
  v8 = (CImageDisplay *)sub_5DCB00(a2);
  if ( CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v8)->rcSource.left == 3 )
  {
    *(this + 5) = 0;
    if ( (unsigned __int8)sub_5DF700(-1) )
    {
      sub_57AB80(11, &unk_70A468);
      sub_41BF00(dword_790324);
      sub_41C0A0(dword_790324);
    }
    else
    {
      sub_57AE30(dword_793578);
    }
    return sub_40D930((_DWORD *)dword_79032C);
  }
  else
  {
    sub_57AE30(dword_793578);
    if ( *(_DWORD *)(dword_790324 + 1236) == -1 )
      *(_DWORD *)(dword_790324 + 1236) = sub_40B260((void *)dword_790330, a2);
    if ( *(this + 12) )
    {
      *(this + 12) = 0;
      return sub_413360(a2, -1, 1);
    }
    else
    {
      *(this + 12) = 1;
      v7 = dword_790324;
      *(_DWORD *)(dword_790324 + 1260) = 1;
      *(_DWORD *)(v7 + 1264) = a2;
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
               *(_DWORD *)(dword_790320 + 4),
               1,
               0);
    }
  }
}


//======================================================================
// sub_413360
// entry 00413360  size 795  status ok
//======================================================================

char __thiscall sub_413360(_BYTE *this, int a2, int a3, char a4)
{
  _BYTE *v5; // [esp+4h] [ebp-44h]
  _BYTE *v6; // [esp+8h] [ebp-40h]
  bool v7; // [esp+10h] [ebp-38h]
  int v8; // [esp+14h] [ebp-34h]
  CImageDisplay *v10; // [esp+1Ch] [ebp-2Ch]
  _BYTE *v11; // [esp+28h] [ebp-20h]
  _BYTE *v12; // [esp+30h] [ebp-18h]
  int v13; // [esp+38h] [ebp-10h]

  if ( a2 == -1 )
  {
    v13 = -1;
  }
  else
  {
    if ( a2 == 4 )
      v8 = 0;
    else
      v8 = *(char *)(dword_790324 + 280 * a2 + 281);
    v13 = v8;
  }
  if ( a3 == -1 )
    a3 = *(_DWORD *)(dword_790324 + 1236);
  v10 = (CImageDisplay *)sub_5DCB00(a2);
  v7 = CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 3;
  if ( v7 && (unsigned __int8)sub_5DF7B0(-1) && a4 && !*(this + 25) && a3 != sub_40B260((void *)dword_790330, a2) )
  {
    sub_40D930((_DWORD *)dword_79032C);
    *(this + 25) = 1;
    sub_57C140(dword_793578);
    return 0;
  }
  else
  {
    *(this + 25) = 0;
    *(_DWORD *)(dword_790324 + 1236) = a3;
    *(this + 13) = 1;
    switch ( a3 )
    {
      case 0:
        sub_413690(a2);
        break;
      case 1:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790320 + 4) + 4))(*(_DWORD *)(dword_790320 + 4), 1);
        v12 = operator new(0x28u);
        if ( v12 )
          v6 = sub_410D40(v12, *(_DWORD *)(dword_790320 + 4));
        else
          v6 = 0;
        sub_5FC420(v6);
        break;
      case 2:
        sub_41B0A0(a2, v13);
        sub_40CC00((_DWORD **)dword_79032C);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790320 + 4) + 4))(*(_DWORD *)(dword_790320 + 4), 1);
        v11 = operator new(0x28u);
        if ( v11 )
          v5 = sub_410D40(v11, *(_DWORD *)(dword_790320 + 4));
        else
          v5 = 0;
        sub_5FC420(v5);
        break;
      case 3:
        sub_41B170(a2, v13);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_79032C + 4 * a2 + 24) + 116))(*(_DWORD *)(dword_79032C + 4 * a2 + 24));
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
          *(_DWORD *)(dword_790320 + 4),
          1,
          0);
        break;
      case 4:
        sub_41B340(a2);
        sub_413690(a2);
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\blackjackgame.cpp", 604);
        break;
    }
    return 1;
  }
}


//======================================================================
// sub_413690
// entry 00413690  size 252  status ok
//======================================================================

int __thiscall sub_413690(_BYTE *this, int a2)
{
  int v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-10h]
  CImageDisplay *v6; // [esp+10h] [ebp-Ch]

  if ( *(this + 16) )
  {
    *(this + 13) = 0;
    *(this + 16) = 0;
    sub_41B440(a2);
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
  else
  {
    *(this + 16) = 1;
    v6 = (CImageDisplay *)sub_5DCB00(a2);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      v4 = -1;
    }
    else
    {
      v4 = a2;
    }
    v5 = dword_790324;
    *(_DWORD *)(dword_790324 + 1260) = 4;
    *(_DWORD *)(v5 + 1264) = v4;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
             *(_DWORD *)(dword_790320 + 4),
             1,
             0);
  }
}


//======================================================================
// sub_413790
// entry 00413790  size 5328  status ok
//======================================================================

int __thiscall sub_413790(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax
  int v11; // [esp+4h] [ebp-1E8h]
  int v12; // [esp+8h] [ebp-1E4h]
  bool v17; // [esp+24h] [ebp-1C8h]
  int v18; // [esp+28h] [ebp-1C4h]
  int v28; // [esp+54h] [ebp-198h]
  int v34; // [esp+78h] [ebp-174h]
  CImageDisplay *v35; // [esp+80h] [ebp-16Ch]
  CImageDisplay *v36; // [esp+8Ch] [ebp-160h]
  CImageDisplay *v37; // [esp+98h] [ebp-154h]
  CImageDisplay *v38; // [esp+A4h] [ebp-148h]
  CImageDisplay *v39; // [esp+B0h] [ebp-13Ch]
  CImageDisplay *v40; // [esp+BCh] [ebp-130h]
  CImageDisplay *v41; // [esp+C8h] [ebp-124h]
  CImageDisplay *v42; // [esp+D8h] [ebp-114h]
  CImageDisplay *v43; // [esp+E8h] [ebp-104h]
  CImageDisplay *v44; // [esp+F8h] [ebp-F4h]
  CImageDisplay *v45; // [esp+108h] [ebp-E4h]
  CImageDisplay *v46; // [esp+120h] [ebp-CCh]
  CImageDisplay *v47; // [esp+12Ch] [ebp-C0h]
  CImageDisplay *v48; // [esp+13Ch] [ebp-B0h]
  CImageDisplay *v49; // [esp+150h] [ebp-9Ch]
  CImageDisplay *v50; // [esp+15Ch] [ebp-90h]
  CImageDisplay *v51; // [esp+168h] [ebp-84h]
  CImageDisplay *v52; // [esp+178h] [ebp-74h]
  int v53; // [esp+18Ch] [ebp-60h]
  int v54; // [esp+190h] [ebp-5Ch]
  int v55; // [esp+194h] [ebp-58h]
  char v56; // [esp+19Bh] [ebp-51h]
  _DWORD v57[4]; // [esp+19Ch] [ebp-50h] BYREF
  double v58; // [esp+1ACh] [ebp-40h]
  double v59; // [esp+1B4h] [ebp-38h]
  int v60; // [esp+1C0h] [ebp-2Ch]
  int v61; // [esp+1C4h] [ebp-28h]
  int v62; // [esp+1C8h] [ebp-24h]
  double v63; // [esp+1CCh] [ebp-20h]
  int v64; // [esp+1D8h] [ebp-14h]
  double v65; // [esp+1DCh] [ebp-10h]
  int i; // [esp+1E4h] [ebp-8h]
  int v67; // [esp+1E8h] [ebp-4h]

  v60 = -1;
  v54 = -1;
  v61 = -1;
  v53 = -1;
  v63 = 0.0;
  v65 = 1.0;
  v67 = *(_DWORD *)(dword_790324 + 1232);
  v56 = 1;
  v55 = *(_DWORD *)(dword_790324 + 1264);
  switch ( *(_DWORD *)(dword_790324 + 1260) )
  {
    case 0:
      v61 = 2008;
      break;
    case 1:
      switch ( *(_DWORD *)(dword_790324 + 1236) )
      {
        case 0:
          v61 = 2005;
          v50 = (CImageDisplay *)sub_5DCB00(v55);
          if ( CImageDisplay::GetDisplayFormat(v50)->rcSource.left != 2
            && CImageDisplay::GetDisplayFormat(v50)->rcSource.left != 3 )
          {
            if ( (int)sub_419980(v55, -1) <= 16 || (int)sub_419980(v55, -1) >= 20 )
            {
              if ( (int)sub_419980(v55, -1) > 19 && (int)sub_419980(v55, -1) < 22 )
                v61 = 2007;
            }
            else
            {
              v61 = 2006;
            }
          }
          break;
        case 1:
          v61 = 2000;
          break;
        case 2:
          v61 = 2002;
          break;
        case 3:
          v61 = 2004;
          break;
        case 4:
          v61 = 1026;
          v49 = (CImageDisplay *)sub_5DCB00(v55);
          if ( CImageDisplay::GetDisplayFormat(v49)->rcSource.left != 2
            && CImageDisplay::GetDisplayFormat(v49)->rcSource.left != 3 )
          {
            v53 = 1014;
            *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
            v56 = 0;
          }
          break;
        default:
          goto LABEL_228;
      }
      break;
    case 2:
      if ( sub_419980(v67, -1) == 21 )
      {
        *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 1;
        v52 = (CImageDisplay *)sub_5DCB00(v67);
        if ( CImageDisplay::GetDisplayFormat(v52)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v52)->rcSource.left == 3 )
        {
          v61 = 1037;
          v65 = 0.5;
        }
      }
      else
      {
        *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
        v51 = (CImageDisplay *)sub_5DCB00(v67);
        if ( CImageDisplay::GetDisplayFormat(v51)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v51)->rcSource.left == 3 )
        {
          v61 = 1000;
          v65 = 0.25;
        }
        else
        {
          v61 = 1025;
          v53 = 1026;
          v63 = 0.4;
          v65 = 0.5;
        }
      }
      break;
    case 3:
      v61 = 2003;
      break;
    case 4:
      v28 = *(_DWORD *)(dword_790324 + 1236);
      if ( v28 == 1 )
      {
        v56 = sub_418700(dword_790324) != 1;
        if ( (unsigned __int8)sub_41B990(v67, -1) )
        {
          *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
          v48 = (CImageDisplay *)sub_5DCB00(v67);
          if ( CImageDisplay::GetDisplayFormat(v48)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v48)->rcSource.left == 3 )
          {
            v61 = 1000;
            v53 = 1039;
          }
          else
          {
            v61 = 2001;
            v53 = 1026;
          }
          v63 = 0.4;
          v65 = 0.75;
        }
        else if ( sub_418700(dword_790324) != 1 )
        {
          if ( sub_419980(v67, -1) == 21 )
          {
            *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 1;
            v47 = (CImageDisplay *)sub_5DCB00(v67);
            if ( CImageDisplay::GetDisplayFormat(v47)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v47)->rcSource.left == 3 )
            {
              v61 = 1008;
              v53 = 2012;
              v63 = 0.5;
            }
            else
            {
              v61 = 1028;
              v53 = 1012;
              v63 = 0.2;
            }
            v65 = 0.5;
          }
          else
          {
            v46 = (CImageDisplay *)sub_5DCB00(v67);
            if ( CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v46)->rcSource.left == 3 )
            {
              if ( (int)sub_419980(v67, -1) <= 11 || (int)sub_419980(v67, -1) >= 17 )
              {
                if ( (int)sub_419530(v67, -1) > 4 )
                {
                  v61 = 2010;
                  v65 = 0.5;
                }
              }
              else
              {
                v61 = 2011;
                v53 = 1000;
                v63 = 0.2;
                v65 = 0.25;
                *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
              }
            }
            else if ( (int)sub_419980(v67, -1) > 11 && (int)sub_419980(v67, -1) < 17 )
            {
              v61 = 1026;
              v53 = 1014;
              v63 = 0.5;
              v65 = 0.5;
              *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
            }
          }
        }
      }
      else if ( v28 == 2 )
      {
        v56 = sub_418700(dword_790324) != 1;
        if ( (unsigned __int8)sub_41B990(v67, -1) )
        {
          *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
          v45 = (CImageDisplay *)sub_5DCB00(v67);
          if ( CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v45)->rcSource.left == 3 )
          {
            v61 = 1000;
          }
          else
          {
            v61 = 2001;
          }
          v65 = 0.5;
        }
        else if ( sub_418700(dword_790324) != 1 )
        {
          if ( sub_419980(v67, -1) == 21 )
          {
            *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 1;
            v44 = (CImageDisplay *)sub_5DCB00(v67);
            if ( CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v44)->rcSource.left == 3 )
            {
              v61 = 2009;
              v53 = 1037;
            }
            else
            {
              v61 = 1028;
              v53 = 1012;
            }
            v63 = 0.4;
            v65 = 0.5;
          }
          else if ( (int)sub_419980(v67, -1) < 15 )
          {
            *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
            v43 = (CImageDisplay *)sub_5DCB00(v67);
            if ( CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v43)->rcSource.left == 3 )
            {
              v61 = 1033;
              v53 = 1039;
            }
            else
            {
              v61 = 1025;
              v53 = 1014;
            }
            v63 = 0.2;
            v65 = 0.5;
          }
        }
      }
      break;
    case 5:
      for ( i = 3; i > -1; --i )
      {
        if ( *(char *)(dword_790324 + i + 280 * v67 + 272) != -1 )
        {
          if ( *(_BYTE *)(dword_790324 + i + 280 * v67 + 272) )
          {
            if ( *(_BYTE *)(dword_790324 + i + 280 * v67 + 272) == 1 )
            {
              *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 1;
              v42 = (CImageDisplay *)sub_5DCB00(v67);
              if ( CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 2
                || CImageDisplay::GetDisplayFormat(v42)->rcSource.left == 3 )
              {
                v61 = 1008;
                v53 = 1037;
                v63 = 0.2;
                v65 = 0.5;
              }
              else
              {
                if ( *(int *)(sub_5DCB00(v67) + 1192) <= 5 )
                  v61 = 1020;
                else
                  v61 = 1024;
                v53 = 1028;
                v63 = 0.4;
                v65 = 0.5;
              }
            }
          }
          else
          {
            *(_DWORD *)(dword_790324 + 4 * v67 + 1268) = 2;
            v41 = (CImageDisplay *)sub_5DCB00(v67);
            if ( CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v41)->rcSource.left == 3 )
            {
              v61 = 1000;
              v53 = 1039;
              v63 = 0.2;
              v65 = 0.5;
            }
            else
            {
              if ( *(int *)(sub_5DCB00(v67) + 1192) >= -5 )
              {
                v61 = 1026;
              }
              else if ( sub_62FBF0(2) )
              {
                v61 = 1023;
              }
              else
              {
                v61 = 1009;
              }
              v53 = 1014;
              v63 = 0.2;
              v65 = 0.5;
            }
          }
          goto LABEL_228;
        }
      }
      break;
    case 6:
      if ( (unsigned __int8)sub_5DB190(dword_790320) )
      {
        if ( sub_5DAC90(dword_790320) != -1 )
        {
          v2 = sub_5DAC90(dword_790320);
          v40 = (CImageDisplay *)sub_5DCB00(v2);
          if ( CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v40)->rcSource.left == 3 )
          {
            v18 = -1;
          }
          else
          {
            v18 = sub_5DAC90(dword_790320);
          }
          v55 = v18;
          v3 = sub_5DAC90(dword_790320);
          v39 = (CImageDisplay *)sub_5DCB00(v3);
          v17 = CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 2
             || CImageDisplay::GetDisplayFormat(v39)->rcSource.left == 3;
          v61 = v17 ? 1042 : 1021;
          v65 = 1.0;
        }
      }
      else if ( (int)sub_62FBF0(10) >= 6 )
      {
        v67 = sub_5DADA0(dword_790320);
        if ( v67 != -1 )
        {
          v4 = sub_5DCB00(v67);
          v5 = sub_5D5A50(v4);
          if ( v5 < sub_5DA880(dword_790320) / 10 )
          {
            v36 = (CImageDisplay *)sub_5DCB00(v67);
            if ( CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 2
              || CImageDisplay::GetDisplayFormat(v36)->rcSource.left == 3 )
            {
              v61 = 1040;
            }
            else
            {
              v55 = v67;
              v61 = 1015;
            }
            v65 = 0.5;
          }
        }
        if ( v61 == -1 )
        {
          for ( i = 0; i < 4; ++i )
          {
            v6 = sub_5DCB00(i);
            if ( !sub_5D5A50(v6) && !*(this + i + 20) )
            {
              *(this + i + 20) = 1;
              v35 = (CImageDisplay *)sub_5DCB00(i);
              if ( CImageDisplay::GetDisplayFormat(v35)->rcSource.left == 2
                || CImageDisplay::GetDisplayFormat(v35)->rcSource.left == 3 )
              {
                v61 = 1038;
              }
              else
              {
                v55 = i;
                v61 = 1013;
              }
              v65 = 0.75;
              goto LABEL_228;
            }
          }
        }
      }
      else if ( sub_62FBF0(2) )
      {
        v67 = sub_5DAC90(dword_790320);
        if ( v67 != -1 )
        {
          v38 = (CImageDisplay *)sub_5DCB00(v67);
          if ( CImageDisplay::GetDisplayFormat(v38)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v38)->rcSource.left == 3 )
          {
            v61 = 1035;
          }
          else
          {
            v55 = v67;
            v61 = 1010;
          }
          v65 = 0.25;
        }
      }
      else
      {
        v67 = sub_5DADA0(dword_790320);
        if ( v67 != -1 )
        {
          v37 = (CImageDisplay *)sub_5DCB00(v67);
          if ( CImageDisplay::GetDisplayFormat(v37)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v37)->rcSource.left == 3 )
          {
            v61 = 1036;
          }
          else
          {
            v55 = v67;
            v61 = 1011;
          }
          v65 = 0.25;
        }
      }
      break;
    case 7:
      v60 = 52050;
      break;
    case 8:
      v60 = 52150;
      break;
    case 9:
      v60 = 52200;
      break;
    case 0xA:
      v60 = 52101;
      break;
    case 0xB:
      v54 = 0;
      if ( (unsigned __int8)sub_418460(dword_790324)
        && (sub_418700(dword_790324) > 1 || *(_DWORD *)(dword_790324 + 1232) == -1) )
      {
        if ( v67 == -1 )
          v7 = sub_419980(4, -1);
        else
          v7 = sub_419980(v67, -1);
        v62 = v7;
        if ( v67 == -1 )
          v8 = sub_4198D0(4, -1);
        else
          v8 = sub_4198D0(v67, -1);
        v64 = v8;
        if ( v8 == v62 || v62 > 19 )
          v60 = v62 + 51997;
        else
          v60 = v64 + 52017;
      }
      break;
    case 0xC:
      for ( i = 3; i > -1; --i )
      {
        if ( *(char *)(dword_790324 + i + 280 * v67 + 272) != -1 )
        {
          v12 = *(char *)(dword_790324 + i + 280 * v67 + 272);
          if ( *(_BYTE *)(dword_790324 + i + 280 * v67 + 272) )
          {
            if ( v12 == 1 )
            {
              v60 = 52225;
            }
            else if ( v12 == 2 )
            {
              v60 = 52175;
            }
          }
          else
          {
            v60 = 52075;
          }
          goto LABEL_228;
        }
      }
      break;
    default:
      break;
  }
LABEL_228:
  v34 = dword_790324;
  *(_DWORD *)(dword_790324 + 1260) = -1;
  *(_DWORD *)(v34 + 1264) = -1;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_162EE80 + 4) + 4))(*(_DWORD *)(dword_162EE80 + 4), 1);
  if ( !a2 )
    a2 = *(_DWORD *)(dword_162EE80 + 4);
  if ( v55 == 4 )
  {
    if ( v60 == -1 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
    if ( v60 == 52200 || v60 == 52101 )
      *(_BYTE *)(*(_DWORD *)(dword_79032C + 44) + 400) = 1;
    if ( v54 == -1 )
      return sub_5CD7C0(v60, a2, 0);
    else
      return sub_5CD700(v60, v54, a2, 0);
  }
  else
  {
    if ( v61 == -1 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
    if ( v55 == -1 )
      v11 = sub_419280(*(_DWORD *)(dword_790324 + 1268));
    else
      v11 = v55;
    v57[0] = v11;
    v57[1] = v61;
    v57[2] = v53;
    v58 = v63;
    v59 = v65;
    if ( v11 == -1 )
    {
      return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_790320 + 4) + 8))(
               *(_DWORD *)(dword_790320 + 4),
               1,
               0);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_790320 + 4) + 4))(*(_DWORD *)(dword_790320 + 4), 1);
      v10 = sub_637810(2);
      return sub_639390(v57, a2, v10, v56);
    }
  }
}


//======================================================================
// sub_414CE0
// entry 00414ce0  size 263  status ok
//======================================================================

_DWORD *__thiscall sub_414CE0(_DWORD *this)
{
  int i; // [esp+8h] [ebp-10h]
  int j; // [esp+8h] [ebp-10h]

  sub_5D7B60(this);
  *this = &BlackjackRoom::`vftable';
  sub_5F1AD0(5005);
  for ( i = 0; i < 5; ++i )
    sub_6044B0(542655828, i + 5001, 0);
  for ( j = 0; j < 13; ++j )
    sub_6044B0(542655828, j + 5026, 0);
  dword_790320 = (int)this;
  dword_790324 = 0;
  dword_790328 = 0;
  dword_79032C = 0;
  dword_790330 = 0;
  return this;
}


//======================================================================
// sub_414DF0
// entry 00414df0  size 324  status ok
//======================================================================

int __thiscall sub_414DF0(_DWORD *this)
{
  *this = &BlackjackRoom::`vftable';
  dword_790320 = 0;
  if ( dword_790324 )
    (**(void (__thiscall ***)(int, int))dword_790324)(dword_790324, 1);
  dword_790324 = 0;
  if ( dword_790328 )
    (**(void (__thiscall ***)(int, int))dword_790328)(dword_790328, 1);
  dword_790328 = 0;
  if ( dword_79032C )
    (**(void (__thiscall ***)(int, int))dword_79032C)(dword_79032C, 1);
  dword_79032C = 0;
  if ( dword_790330 )
    (**(void (__thiscall ***)(int, int))dword_790330)(dword_790330, 1);
  dword_790330 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_414F40
// entry 00414f40  size 497  status ok
//======================================================================

int __thiscall sub_414F40(_DWORD **this)
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
  v13 = operator new(0x504u);
  if ( v13 )
    v6 = sub_4182A0(v13);
  else
    v6 = 0;
  dword_790324 = v6;
  sub_418750();
  v12 = (_AFX_OLE_STATE *)operator new(0x1Cu);
  if ( v12 )
    v5 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
  else
    v5 = 0;
  dword_790328 = (int)v5;
  sub_4122A0(v5);
  v11 = (ATL::CCRTHeap *)operator new(0x48u);
  if ( v11 )
    v4 = sub_40C420(v11);
  else
    v4 = 0;
  dword_79032C = (int)v4;
  sub_40C770(v4);
  v10 = (_AFX_OLE_STATE *)operator new(4u);
  if ( v10 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v10);
  else
    v3 = 0;
  dword_790330 = (int)v3;
  v9 = operator new(0x20u);
  if ( v9 )
  {
    sub_5FC0D0(0);
    *v9 = &BlackjackRoomScript::`vftable';
    v2 = v9;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  (*(void (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
  sub_5D85E0(v8, -1);
  return sub_4122E0((_BYTE *)dword_790328, 0);
}


//======================================================================
// sub_415140
// entry 00415140  size 451  status ok
//======================================================================

int __stdcall sub_415140(int a1)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-20h]
  CImageDisplay *v4; // [esp+18h] [ebp-10h]

  sub_5D7F40(a1);
  if ( dword_790324 )
    v3 = sub_419DD0(dword_790324);
  else
    v3 = -1;
  if ( *(_DWORD *)(a1 + 24) == 4
    && !*(_BYTE *)(a1 + 4)
    && v3 != -1
    && tolower(*(char *)(a1 + 20)) == 116
    && sub_5DCB00(v3) )
  {
    v4 = (CImageDisplay *)sub_5DCB00(v3);
    if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v4)->rcSource.left == 3 )
    {
      sub_41A0B0(v3);
    }
  }
  if ( !*(_BYTE *)(a1 + 4)
    && *(_DWORD *)(a1 + 24) == 4
    && *(_BYTE *)(a1 + 20) == 32
    && dword_790324
    && *(_DWORD *)(dword_790324 + 1232) != -1 )
  {
    sub_5CB5B0(*(_DWORD *)(dword_790324 + 4 * *(_DWORD *)(dword_790324 + 1232) + 1128));
  }
  result = a1;
  if ( !*(_BYTE *)(a1 + 4) && *(_DWORD *)(a1 + 24) == 1 )
  {
    if ( dword_79032C )
    {
      if ( dword_790324 )
      {
        result = dword_79032C;
        if ( *(_DWORD *)(dword_79032C + 60) )
        {
          if ( *(_DWORD *)(dword_79032C + 64) )
          {
            if ( (unsigned __int8)sub_5F54A0(*(_DWORD *)(dword_79032C + 60))
              || (result = sub_5F54A0(*(_DWORD *)(dword_79032C + 64)), (_BYTE)result) )
            {
              result = dword_790324;
              *(_BYTE *)(dword_790324 + 1240) = 1;
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_415310
// entry 00415310  size 221  status ok
//======================================================================

int __stdcall sub_415310(int a1, int a2)
{
  if ( a2 == 100001 )
  {
    sub_5FE640(100006, 0);
    sub_5FE640(100009, 0);
    sub_5FE640(100007, 0);
    sub_5FE640(100008, 0);
    if ( byte_795F95 )
      sub_5FE640(-2, 0);
    else
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
// sub_4153F0
// entry 004153f0  size 49  status ok
//======================================================================

int __thiscall sub_4153F0(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3201001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_415430
// entry 00415430  size 505  status ok
//======================================================================

char __stdcall sub_415430(int a1, int a2)
{
  char result; // al
  CImageDisplay *v4; // [esp+24h] [ebp-14h]

  if ( !sub_5DCB00(*(_DWORD *)(dword_790324 + 1232)) )
    return sub_5DC7D0(a1, a2);
  v4 = (CImageDisplay *)sub_5DCB00(*(_DWORD *)(dword_790324 + 1232));
  if ( CImageDisplay::GetDisplayFormat(v4)->rcSource.left != 2
    && CImageDisplay::GetDisplayFormat(v4)->rcSource.left != 3 )
  {
    return sub_5DC7D0(a1, a2);
  }
  switch ( a1 )
  {
    case 3201002:
      result = sub_413360((_BYTE *)dword_790328, *(_DWORD *)(dword_790324 + 1232), 1, 1);
      if ( result )
        result = sub_40DA70((int *)dword_79032C);
      break;
    case 3201003:
      result = sub_413360((_BYTE *)dword_790328, *(_DWORD *)(dword_790324 + 1232), 0, 1);
      if ( result )
        result = sub_40DA70((int *)dword_79032C);
      break;
    case 3201004:
      result = sub_413360((_BYTE *)dword_790328, *(_DWORD *)(dword_790324 + 1232), 2, 1);
      if ( result )
        result = sub_40DA70((int *)dword_79032C);
      break;
    case 3201005:
      result = sub_413360((_BYTE *)dword_790328, *(_DWORD *)(dword_790324 + 1232), 3, 1);
      if ( result )
        result = sub_40DA70((int *)dword_79032C);
      break;
    case 3201006:
      result = sub_413360((_BYTE *)dword_790328, *(_DWORD *)(dword_790324 + 1232), 4, 1);
      if ( result )
        result = sub_40DA70((int *)dword_79032C);
      break;
    case 3201007:
      sub_41A0B0(*(_DWORD *)(dword_790324 + 1232));
      return sub_5DC7D0(a1, a2);
    default:
      return sub_5DC7D0(a1, a2);
  }
  return result;
}


//======================================================================
// sub_415650
// entry 00415650  size 22  status ok
//======================================================================

int __thiscall sub_415650(void *this)
{
  return sub_418C00(dword_790324, this);
}


//======================================================================
// sub_415670
// entry 00415670  size 66  status ok
//======================================================================

int __thiscall sub_415670(void *this, char a2)
{
  if ( a2 )
    sub_4184C0(0);
  sub_5DB9B0(this);
  sub_4189A0(dword_790324, this);
  return sub_4122E0((_BYTE *)dword_790328, 0);
}


//======================================================================
// sub_4156C0
// entry 004156c0  size 195  status ok
//======================================================================

char __stdcall sub_4156C0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v8; // [esp+4h] [ebp-130h]
  char Destination[28]; // [esp+10h] [ebp-124h] BYREF
  char Buffer[260]; // [esp+2Ch] [ebp-108h] BYREF

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
// sub_415790
// entry 00415790  size 50  status ok
//======================================================================

int __stdcall sub_415790(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 400;
  v2[1] = 138;
  v2[2] = 531;
  v2[3] = 5;
  return v2[a1];
}


//======================================================================
// sub_4157D0
// entry 004157d0  size 50  status ok
//======================================================================

int __stdcall sub_4157D0(int a1)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h]

  v2[0] = 309;
  v2[1] = 309;
  v2[2] = 241;
  v2[3] = 241;
  return v2[a1];
}


//======================================================================
// sub_415810
// entry 00415810  size 147  status ok
//======================================================================

int __stdcall sub_415810(int a1, int a2)
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
// sub_4158D0
// entry 004158d0  size 35  status ok
//======================================================================

int __thiscall sub_4158D0(void *this)
{
  if ( dword_790324 )
    return sub_419080(dword_790324, this);
  else
    return 0;
}


//======================================================================
// sub_415900
// entry 00415900  size 53  status ok
//======================================================================

int __thiscall sub_415900(void *this)
{
  *(_BYTE *)((*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 604))(this, this) + 1184) = 1;
  return sub_4123C0((_BYTE *)dword_790328);
}


//======================================================================
// sub_415940
// entry 00415940  size 77  status ok
//======================================================================

int __thiscall sub_415940(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v3 = this;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_DWORD *)(dword_79032C + 4 * i + 24) != a2 )
      sub_5CD330(*(_DWORD *)(dword_79032C + 4 * i + 24), v3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_415990
// entry 00415990  size 148  status ok
//======================================================================

int __stdcall sub_415990(int a1)
{
  int v2; // [esp-8h] [ebp-20h]
  int v3; // [esp-4h] [ebp-1Ch]
  int v4; // [esp+4h] [ebp-14h]

  if ( *(_BYTE *)(sub_5DCB00(a1) + 1184) )
  {
    v4 = *(_DWORD *)(dword_790324 + 4 * a1 + 1128);
    v3 = *(_DWORD *)(v4 + 32 * a1 + 76);
    v2 = *(_DWORD *)(v4 + 32 * a1 + 72);
    sub_5DCB00(a1);
    sub_5D5CF0(v2, v3);
  }
  return sub_5CB9B0(*(_DWORD *)(dword_790324 + 4 * a1 + 1128));
}


//======================================================================
// sub_415A30
// entry 00415a30  size 126  status ok
//======================================================================

int __stdcall sub_415A30(int a1, int a2)
{
  int result; // eax
  int *v3; // eax
  int v4; // edx
  unsigned __int8 v5; // [esp+7h] [ebp-15h]
  _BYTE v6[8]; // [esp+Ch] [ebp-10h] BYREF
  __int64 v7; // [esp+14h] [ebp-8h]

  v7 = sub_64C8A0(0, 0);
  *(_QWORD *)a2 = v7;
  v5 = *(_BYTE *)(sub_5DCB00(a1) + 1186);
  result = v5;
  if ( !v5 )
  {
    v3 = (int *)sub_5CB880(v6, a1);
    v4 = *v3;
    result = v3[1];
    *(_DWORD *)a2 = v4;
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}


//======================================================================
// sub_415AB0
// entry 00415ab0  size 22  status ok
//======================================================================

int __thiscall sub_415AB0(void *this)
{
  return sub_418440(dword_790324, this);
}


//======================================================================
// sub_415AD0
// entry 00415ad0  size 36  status ok
//======================================================================

int __thiscall sub_415AD0(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(this + 1) + 8))(*(this + 1), 1, 0);
}


//======================================================================
// sub_415B00
// entry 00415b00  size 119  status ok
//======================================================================

int __stdcall sub_415B00(int a1)
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
  sub_418400(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_418400(a1);
  *(_DWORD *)(v5 + 24) = v3;
  *(_DWORD *)(v5 + 28) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_415B80
// entry 00415b80  size 119  status ok
//======================================================================

int __stdcall sub_415B80(int a1)
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
  sub_418400(a1);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = sub_418400(a1);
  *(_DWORD *)(v5 + 16) = v3;
  *(_DWORD *)(v5 + 20) = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_415C00
// entry 00415c00  size 349  status ok
//======================================================================

LONG __stdcall sub_415C00(CImageDisplay *a1, int a2, int a3, int a4)
{
  LONG result; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int *v13; // eax
  int v14; // esi
  int v15; // edi
  _BYTE v17[8]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v18[8]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v19[8]; // [esp+28h] [ebp-8h] BYREF

  result = CImageDisplay::GetDisplayFormat(a1)->rcSource.left;
  if ( result == 2 || (result = (LONG)CImageDisplay::GetDisplayFormat(a1), *(_DWORD *)result == 3) )
  {
    result = (unsigned __int8)sub_5DA830(dword_7947E4);
    if ( !(_BYTE)result && !*((_BYTE *)a1 + 1201) )
    {
      if ( *(int *)(dword_790324 + 1248) < 0 )
      {
        sub_418400(a2);
        v5 = (int *)sub_64C5C0(v19, a3, a4);
        v6 = *v5;
        v7 = v5[1];
        v8 = sub_418400(a2);
        *(_DWORD *)(v8 + 32) = v6;
        *(_DWORD *)(v8 + 36) = v7;
      }
      if ( !*(_DWORD *)(dword_790324 + 1248) )
      {
        sub_418400(a2);
        v9 = (int *)sub_64C5C0(v18, a3, a4);
        v10 = *v9;
        v11 = v9[1];
        v12 = sub_418400(a2);
        *(_DWORD *)(v12 + 40) = v10;
        *(_DWORD *)(v12 + 44) = v11;
      }
      result = dword_790324;
      if ( *(int *)(dword_790324 + 1248) > 0 )
      {
        sub_418400(a2);
        v13 = (int *)sub_64C5C0(v17, a3, a4);
        v14 = *v13;
        v15 = v13[1];
        result = sub_418400(a2);
        *(_DWORD *)(result + 48) = v14;
        *(_DWORD *)(result + 52) = v15;
      }
    }
  }
  return result;
}


//======================================================================
// sub_415D60
// entry 00415d60  size 158  status ok
//======================================================================

int __thiscall sub_415D60(void *this, int a2)
{
  int result; // eax
  int v3; // eax

  result = (unsigned __int8)sub_5DF700(-1);
  if ( (_BYTE)result )
  {
    result = sub_5DA7B0(this);
    if ( !(_BYTE)result )
    {
      if ( *(_DWORD *)(dword_79032C + 52) )
      {
        v3 = sub_40B260((void *)dword_790330, *(_DWORD *)(dword_790324 + 1232));
        result = sub_411C20(v3);
      }
      if ( *(_DWORD *)(dword_79032C + 48) )
        return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(dword_79032C + 48) + 444) + 116))(*(_DWORD *)(*(_DWORD *)(dword_79032C + 48) + 444));
    }
  }
  return result;
}


//======================================================================
// sub_415E00
// entry 00415e00  size 18  status ok
//======================================================================

int __stdcall sub_415E00(int a1)
{
  return 1046;
}


//======================================================================
// sub_415E20
// entry 00415e20  size 70  status ok
//======================================================================

int __thiscall sub_415E20(void *this, int a2, int a3)
{
  sub_636E70(dword_162EE84);
  sub_5FC420(0);
  sub_40CC00((_DWORD **)dword_79032C);
  sub_4189A0(dword_790324, this);
  return sub_4123C0((_BYTE *)dword_790328);
}


//======================================================================
// sub_415E70
// entry 00415e70  size 2816  status ok
//======================================================================

int __thiscall sub_415E70(_BYTE *this, int a2, int a3, int a4, int a5)
{
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
  char *v27; // eax
  int v28; // eax
  int v29; // eax
  int result; // eax
  int v31; // [esp-8h] [ebp-128h]
  int v32; // [esp-8h] [ebp-128h]
  BOOL v33; // [esp-8h] [ebp-128h]
  int v34; // [esp-8h] [ebp-128h]
  int v35; // [esp+4h] [ebp-11Ch]
  int v36; // [esp+8h] [ebp-118h]
  int v37; // [esp+Ch] [ebp-114h]
  int v38; // [esp+10h] [ebp-110h]
  int v39; // [esp+14h] [ebp-10Ch]
  int v40; // [esp+18h] [ebp-108h]
  int v41; // [esp+1Ch] [ebp-104h]
  int v42; // [esp+20h] [ebp-100h]
  int v43; // [esp+24h] [ebp-FCh]
  int v44; // [esp+28h] [ebp-F8h]
  int v45; // [esp+2Ch] [ebp-F4h]
  int v46; // [esp+30h] [ebp-F0h]
  int v47; // [esp+34h] [ebp-ECh]
  int v48; // [esp+38h] [ebp-E8h]
  int v49; // [esp+3Ch] [ebp-E4h]
  int v50; // [esp+40h] [ebp-E0h]
  int v51; // [esp+44h] [ebp-DCh]
  int v52; // [esp+48h] [ebp-D8h]
  int v53; // [esp+4Ch] [ebp-D4h]
  int v54; // [esp+50h] [ebp-D0h]
  int v55; // [esp+54h] [ebp-CCh]
  int v56; // [esp+58h] [ebp-C8h]
  _DWORD *v57; // [esp+5Ch] [ebp-C4h]
  _DWORD *v59; // [esp+64h] [ebp-BCh]
  _DWORD v60[20]; // [esp+6Ch] [ebp-B4h]
  char *v61; // [esp+BCh] [ebp-64h]
  _DWORD v62[8]; // [esp+C0h] [ebp-60h]
  int i; // [esp+E0h] [ebp-40h]
  int v64; // [esp+E4h] [ebp-3Ch]
  int v65; // [esp+E8h] [ebp-38h]
  int v66; // [esp+ECh] [ebp-34h]
  int v67; // [esp+F0h] [ebp-30h]
  int v68; // [esp+F4h] [ebp-2Ch]
  int v69; // [esp+F8h] [ebp-28h]
  int v70; // [esp+FCh] [ebp-24h]
  int v71; // [esp+100h] [ebp-20h]
  int v72; // [esp+104h] [ebp-1Ch]
  int v73; // [esp+108h] [ebp-18h]
  int v74; // [esp+10Ch] [ebp-14h]
  int v75; // [esp+110h] [ebp-10h]
  int v76; // [esp+11Ch] [ebp-4h]

  v62[0] = "SID_BLACKJACK_CHECKBOX_DOUBLEDOWN";
  v62[1] = "SID_BLACKJACK_CHECKBOX_RESPLITACES";
  v62[2] = "SID_BLACKJACK_CHECKBOX_INSURANCE";
  v62[3] = "SID_BLACKJACK_CHECKBOX_DEALERHITS17";
  v62[4] = "SID_BLACKJACK_CHECKBOX_DEALERVOICE";
  v62[5] = "SID_BLACKJACK_CHECKBOX_SHOWHANDTOTALS";
  v62[6] = "SID_BLACKJACK_CHECKBOX_CARDCOUNT";
  v62[7] = "SID_BLACKJACK_CHECKBOX_CONTINUE";
  v60[0] = 270;
  v60[1] = 204;
  v60[2] = 270;
  v60[3] = 223;
  v60[4] = 270;
  v60[5] = 242;
  v60[6] = 270;
  v60[7] = 261;
  v60[8] = 270;
  v60[9] = 204;
  v60[10] = 270;
  v60[11] = 223;
  v60[12] = 270;
  v60[13] = 242;
  v60[14] = 270;
  v60[15] = 204;
  v60[16] = 270;
  v60[17] = 223;
  v60[18] = 270;
  v60[19] = 242;
  v64 = 20;
  v65 = 80;
  v66 = 20;
  v67 = 125;
  v68 = 20;
  v69 = 170;
  v70 = 20;
  v71 = 215;
  v72 = 20;
  v73 = 260;
  v74 = 0;
  v75 = 0;
  v5 = sub_630F40("SID_BLACKJACK_RULES_COLON");
  v6 = sub_5FA5B0(0, -1, v5, 31, 100, 15, 20, 65, 1, 5, -1);
  sub_5FF5A0(v6);
  v7 = sub_5FAEE0(
         0,
         50,
         3200209,
         20,
         80,
         1,
         (struct Concurrency::details::SchedulerBase *)0x30D7F0,
         1,
         &Source,
         31,
         69,
         66,
         -1);
  sub_5FF5A0(v7);
  v8 = sub_630F40("SID_BLACKJACK_NUMBEROFDECKS_COLON");
  v9 = sub_5FA5B0(0, -1, v8, 31, 150, 15, 20, 110, 1, 5, -1);
  sub_5FF5A0(v9);
  v10 = sub_5FAEE0(
          0,
          51,
          3200209,
          20,
          125,
          1,
          (struct Concurrency::details::SchedulerBase *)0x30D7F1,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v10);
  v11 = sub_630F40("SID_BLACKJACK_DOUBLEDOWN_COLON");
  v12 = sub_5FA5B0(0, -1, v11, 31, 100, 15, 20, 155, 1, 5, -1);
  sub_5FF5A0(v12);
  v13 = sub_5FAEE0(
          0,
          52,
          3200209,
          20,
          170,
          1,
          (struct Concurrency::details::SchedulerBase *)0x30D7F2,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v13);
  v14 = sub_630F40("SID_BLACKJACK_SURRENDER_COLON");
  v15 = sub_5FA5B0(0, -1, v14, 31, 100, 15, 20, 200, 1, 5, -1);
  sub_5FF5A0(v15);
  v16 = sub_5FAEE0(
          0,
          53,
          3200209,
          20,
          215,
          1,
          (struct Concurrency::details::SchedulerBase *)0x30D7F3,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v16);
  v17 = sub_630F40("SID_BLACKJACK_SPLITTING_COLON");
  v18 = sub_5FA5B0(0, -1, v17, 31, 100, 15, 20, 245, 1, 5, -1);
  sub_5FF5A0(v18);
  v19 = sub_5FAEE0(
          0,
          54,
          3200209,
          20,
          260,
          1,
          (struct Concurrency::details::SchedulerBase *)0x30D7F4,
          1,
          &Source,
          31,
          69,
          66,
          -1);
  sub_5FF5A0(v19);
  for ( i = 0; i < 8; ++i )
  {
    v20 = sub_630F40(v62[i]);
    v21 = sub_5F9EF0(0, i + 55, 3200201, v60[2 * i], 20 * i + 80, 1, v20, 31, 69, 66, -1, 20, 0);
    sub_5FF5A0(v21);
  }
  v22 = sub_630F40("SID_BLACKJACK_SHUFFLE");
  v23 = sub_5FA5B0(0, -1, v22, 72, 212, 20, 17, 302, 2, 48, -1);
  sub_5FF5A0(v23);
  v24 = sub_5FA5B0(0, -1, &unk_6B4274, 31, 61, 15, 22, 343, 2, 17, -1);
  sub_5FF5A0(v24);
  v25 = sub_5FA5B0(0, -1, &unk_6B4270, 31, 100, 15, 126, 343, 2, 18, -1);
  sub_5FF5A0(v25);
  v26 = sub_5FAA90(0, 0, 3200211, 15, 300, 1, 3200212, 20, -2, 198, 1, 10, 80);
  sub_5FF5A0(v26);
  v27 = (char *)sub_630F40("SID_GENERIC_HELP");
  v28 = sub_5FA790(0, 10, v27, 72, 240, 84, 264, 280, 2, 120, 124, 161, 255, 255, 255, 0);
  sub_5FF5A0(v28);
  v59 = operator new(0x1D0u);
  v76 = 0;
  if ( v59 )
  {
    sub_5EC5A0(v59);
    *v59 = &BlackjackSettingsHelpText::`vftable';
    v57 = v59;
  }
  else
  {
    v57 = 0;
  }
  v76 = -1;
  v29 = sub_5FA5B0(v57, 50, &Source, 35, 230, 76, 270, 292, 3, 5, -1);
  sub_5FF5A0(v29);
  v61 = (char *)sub_6375D0(-1);
  v31 = (char)sub_4184E0(dword_790324);
  sub_5FB5E0(50);
  sub_605EF0(v31, 1);
  if ( (unsigned __int8)sub_5DA830(this) )
    v56 = *(_DWORD *)(dword_7947E0 + 20212) - 1;
  else
    v56 = v61[1];
  sub_5FB5E0(51);
  sub_605EF0(v56, 1);
  v32 = (char)sub_4186D0(dword_790324);
  sub_5FB5E0(52);
  sub_605EF0(v32, 1);
  v33 = (unsigned __int8)sub_418580(dword_790324) == 0;
  sub_5FB5E0(53);
  sub_605EF0(v33, 1);
  if ( (unsigned __int8)sub_5DA830(this) )
    v55 = 1;
  else
    v55 = v61[6];
  sub_5FB5E0(54);
  sub_605EF0(v55, 1);
  if ( (unsigned __int8)sub_418650(dword_790324) )
  {
    v54 = sub_5FB350(55);
    (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 244))(v54);
  }
  if ( (unsigned __int8)sub_418690(dword_790324) )
  {
    v53 = sub_5FB350(56);
    (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 244))(v53);
  }
  if ( (unsigned __int8)sub_418540(dword_790324) )
  {
    v52 = sub_5FB350(57);
    (*(void (__thiscall **)(int))(*(_DWORD *)v52 + 244))(v52);
  }
  if ( (unsigned __int8)sub_4185C0(dword_790324) )
  {
    v51 = sub_5FB350(58);
    (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 244))(v51);
  }
  if ( v61[10] )
  {
    v50 = sub_5FB350(59);
    (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 244))(v50);
  }
  if ( v61[11] )
  {
    v49 = sub_5FB350(60);
    (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 244))(v49);
  }
  if ( v61[12] )
  {
    v48 = sub_5FB350(61);
    (*(void (__thiscall **)(int))(*(_DWORD *)v48 + 244))(v48);
  }
  if ( v61[13] )
  {
    v47 = sub_5FB350(62);
    (*(void (__thiscall **)(int))(*(_DWORD *)v47 + 244))(v47);
  }
  if ( dword_7947B0 )
  {
    if ( (unsigned __int8)sub_5CDD60(dword_7947B0) )
    {
      v46 = sub_5FB350(62);
      (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 248))(v46);
    }
    else
    {
      v45 = sub_5FB350(62);
      (*(void (__thiscall **)(int))(*(_DWORD *)v45 + 244))(v45);
    }
  }
  v34 = (char)sub_418510(dword_790324);
  sub_5FB860(0);
  sub_605110(v34, 1);
  *(this + 124) = 0;
  result = (unsigned __int8)sub_5DA830(this);
  if ( (_BYTE)result )
  {
    v44 = sub_5FB5E0(50);
    (*(void (__thiscall **)(int))(*(_DWORD *)v44 + 208))(v44);
    v43 = sub_5FB5E0(51);
    (*(void (__thiscall **)(int))(*(_DWORD *)v43 + 208))(v43);
    v42 = sub_5FB5E0(52);
    (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 208))(v42);
    v41 = sub_5FB5E0(53);
    (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 208))(v41);
    v40 = sub_5FB5E0(54);
    (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 208))(v40);
    v39 = sub_5FB350(55);
    (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 208))(v39);
    v38 = sub_5FB350(56);
    (*(void (__thiscall **)(int))(*(_DWORD *)v38 + 208))(v38);
    v37 = sub_5FB350(57);
    (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 208))(v37);
    v36 = sub_5FB350(58);
    (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 208))(v36);
    v35 = sub_5FB860(0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 180))(v35);
  }
  return result;
}


//======================================================================
// sub_416970
// entry 00416970  size 567  status ok
//======================================================================

int __thiscall sub_416970(unsigned __int8 *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int result; // eax
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
  v21[10] = sub_600230(v3);
  v4 = sub_5FB350(60);
  v21[11] = sub_600230(v4);
  v5 = sub_5FB350(61);
  v21[12] = sub_600230(v5);
  v6 = sub_5FB350(62);
  v21[13] = sub_600230(v6);
  if ( dword_7947B0 )
  {
    v7 = sub_5FB350(62);
    v8 = sub_600230(v7);
    sub_5CDD10(v8 == 0);
  }
  if ( (unsigned __int8)sub_5DA7B0(this) )
    return sub_40CC00((_DWORD **)dword_79032C);
  v10 = sub_5FB5E0(50);
  *v21 = sub_605F40(v10);
  v11 = sub_5FB5E0(51);
  v21[1] = sub_605F40(v11);
  v12 = sub_5FB5E0(52);
  v21[9] = sub_605F40(v12);
  v13 = sub_5FB5E0(53);
  v21[4] = sub_605F40(v13);
  v14 = sub_5FB5E0(54);
  v21[6] = sub_605F40(v14);
  v15 = sub_5FB350(55);
  v21[7] = sub_600230(v15);
  v16 = sub_5FB350(56);
  v21[8] = sub_600230(v16);
  v17 = sub_5FB350(57);
  v21[3] = sub_600230(v17);
  v18 = sub_5FB350(58);
  v21[5] = sub_600230(v18);
  v19 = (Concurrency::details::VirtualProcessor *)sub_5FB860(0);
  v21[2] = (unsigned __int8)Concurrency::details::VirtualProcessor::GetOwningRoot(v19);
  sub_637610(dword_162EE84);
  if ( (*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 128))(this) )
    sub_418D60(dword_790324);
  sub_40CC00((_DWORD **)dword_79032C);
  result = *(this + 124);
  if ( *(this + 124) )
  {
    *(this + 124) = 0;
    sub_4189A0(dword_790324, this);
    return sub_4123C0((_BYTE *)dword_790328);
  }
  return result;
}


//======================================================================
// sub_416BB0
// entry 00416bb0  size 166  status ok
//======================================================================

int __stdcall sub_416BB0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-8h]

  if ( a4 == 51 || a4 == 52 || a4 == 53 || a4 == 54 )
  {
    v5 = sub_5FB5E0(50);
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 240))(v5, 3201017, 0);
  }
  else if ( a4 == 50 )
  {
    switch ( a3 )
    {
      case 3201013:
        result = sub_416CC0(0);
        break;
      case 3201014:
        result = sub_416CC0(1);
        break;
      case 3201015:
        result = sub_416CC0(2);
        break;
      case 3201016:
        result = sub_416CC0(3);
        break;
      default:
        return result;
    }
  }
  return result;
}


//======================================================================
// sub_416C70
// entry 00416c70  size 78  status ok
//======================================================================

void __stdcall sub_416C70(int a1, int a2, int a3)
{
  int v3; // [esp+0h] [ebp-8h]

  if ( a3 == 55 || a3 == 56 || a3 == 57 || a3 == 58 )
  {
    v3 = sub_5FB5E0(50);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 240))(v3, 3201017, 0);
  }
}


//======================================================================
// sub_416CC0
// entry 00416cc0  size 1109  status ok
//======================================================================

int __stdcall sub_416CC0(char a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-58h]
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
  int v16; // [esp+38h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-1Ch]
  int v18; // [esp+40h] [ebp-18h]
  int v19; // [esp+44h] [ebp-14h]
  int v20; // [esp+48h] [ebp-10h]
  int v21; // [esp+4Ch] [ebp-Ch]

  result = a1;
  switch ( a1 )
  {
    case 0:
      sub_5FB5E0(51);
      sub_605EF0(3, 1);
      sub_5FB5E0(52);
      sub_605EF0(4, 1);
      sub_5FB5E0(53);
      sub_605EF0(0, 1);
      sub_5FB5E0(54);
      sub_605EF0(1, 1);
      v21 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 244))(v21);
      v20 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 248))(v20);
      v19 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 244))(v19);
      v18 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 248))(v18);
      v17 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 240))(v17, 3201013, 0);
      break;
    case 1:
      sub_5FB5E0(51);
      sub_605EF0(0, 1);
      sub_5FB5E0(52);
      sub_605EF0(4, 1);
      sub_5FB5E0(53);
      sub_605EF0(1, 1);
      sub_5FB5E0(54);
      sub_605EF0(1, 1);
      v16 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 248))(v16);
      v15 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 248))(v15);
      v14 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
      v13 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 244))(v13);
      v12 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 240))(v12, 3201014, 0);
      break;
    case 2:
      sub_5FB5E0(51);
      sub_605EF0(3, 1);
      sub_5FB5E0(52);
      sub_605EF0(4, 1);
      sub_5FB5E0(53);
      sub_605EF0(1, 1);
      sub_5FB5E0(54);
      sub_605EF0(0, 1);
      v11 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 244))(v11);
      v10 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10);
      v9 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 244))(v9);
      v8 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 248))(v8);
      v7 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 240))(v7, 3201015, 0);
      break;
    case 3:
      sub_5FB5E0(51);
      sub_605EF0(0, 1);
      sub_5FB5E0(52);
      sub_605EF0(1, 1);
      sub_5FB5E0(53);
      sub_605EF0(1, 1);
      sub_5FB5E0(54);
      sub_605EF0(1, 1);
      v6 = sub_5FB350(55);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6);
      v5 = sub_5FB350(56);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 248))(v5);
      v4 = sub_5FB350(57);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 244))(v4);
      v3 = sub_5FB350(58);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 244))(v3);
      v2 = sub_5FB5E0(50);
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 240))(v2, 3201016, 0);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_417130
// entry 00417130  size 159  status ok
//======================================================================

_DWORD *__stdcall sub_417130(_DWORD *a1, int a2)
{
  int v2; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v5[7]; // [esp+8h] [ebp-24h]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v4 = 329;
  v5[0] = 219;
  v5[1] = 134;
  v5[2] = 219;
  v5[3] = 458;
  v5[4] = 147;
  v5[5] = 5;
  v5[6] = 147;
  v6 = 0;
  v7 = 0;
  if ( a2 >= 4 )
  {
    sub_5E9F20((char)"false", "..\\Casino\\blackjackroom.cpp", 707);
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
// sub_4171D0
// entry 004171d0  size 1094  status ok
//======================================================================

void __thiscall sub_4171D0(void *this, int a2)
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
  int v17; // [esp+4h] [ebp-80h]
  _DWORD v18[28]; // [esp+8h] [ebp-7Ch]
  int v19; // [esp+78h] [ebp-Ch]
  int i; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  v21 = -1;
  if ( dword_163068C )
  {
    v17 = sub_5FB5E0(50);
    v18[0] = 0;
    v18[1] = sub_5FB5E0(51);
    v18[2] = 1;
    v18[3] = sub_5FB5E0(52);
    v18[4] = 2;
    v18[5] = sub_5FB5E0(53);
    v18[6] = 3;
    v18[7] = sub_5FB5E0(54);
    v18[8] = 4;
    v18[9] = sub_5FB350(55);
    v18[10] = 5;
    v18[11] = sub_5FB350(56);
    v18[12] = 6;
    v18[13] = sub_5FB350(57);
    v18[14] = 7;
    v18[15] = sub_5FB350(58);
    v18[16] = 8;
    v18[17] = sub_5FB350(59);
    v18[18] = 9;
    v18[19] = sub_5FB350(60);
    v18[20] = 10;
    v18[21] = sub_5FB350(61);
    v18[22] = 11;
    v18[23] = sub_5FB350(62);
    v18[24] = 12;
    v18[25] = *(_DWORD *)(sub_5FB860(0) + 76);
    v18[26] = 13;
    v19 = 14;
    for ( i = 0; i < v19; ++i )
    {
      if ( v18[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v18[2 * i - 1] + 132))(v18[2 * i - 1], a2) )
      {
        v21 = v18[2 * i];
        break;
      }
    }
    if ( v21 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 180))(this, &Source);
    }
    else
    {
      if ( !v21 )
      {
        v2 = sub_630F40("SID_BLACKJACK_ROLLOVER1");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v2);
      }
      if ( v21 == 1 )
      {
        v3 = sub_630F40("SID_BLACKJACK_ROLLOVER2");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v3);
      }
      if ( v21 == 2 )
      {
        v4 = sub_630F40("SID_BLACKJACK_ROLLOVER3");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
      }
      if ( v21 == 3 )
      {
        v5 = sub_630F40("SID_BLACKJACK_ROLLOVER4");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v5);
      }
      if ( v21 == 4 )
      {
        v6 = sub_630F40("SID_BLACKJACK_ROLLOVER5");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v6);
      }
      if ( v21 == 5 )
      {
        v7 = sub_630F40("SID_BLACKJACK_ROLLOVER6");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v7);
      }
      if ( v21 == 6 )
      {
        v8 = sub_630F40("SID_BLACKJACK_ROLLOVER7");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v8);
      }
      if ( v21 == 7 )
      {
        v9 = sub_630F40("SID_BLACKJACK_ROLLOVER8");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v9);
      }
      if ( v21 == 8 )
      {
        v10 = sub_630F40("SID_BLACKJACK_ROLLOVER9");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v10);
      }
      if ( v21 == 9 )
      {
        v11 = sub_630F40("SID_BLACKJACK_ROLLOVER10");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v11);
      }
      if ( v21 == 10 )
      {
        v12 = sub_630F40("SID_BLACKJACK_ROLLOVER11");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v12);
      }
      if ( v21 == 11 )
      {
        v13 = sub_630F40("SID_BLACKJACK_ROLLOVER12");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v13);
      }
      if ( v21 == 12 )
      {
        v14 = sub_630F40("SID_BLACKJACK_ROLLOVER13");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v14);
      }
      if ( v21 == 13 )
      {
        v15 = sub_630F40("SID_BLACKJACK_ROLLOVER14");
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v15);
      }
    }
  }
}


//======================================================================
// sub_417620
// entry 00417620  size 122  status ok
//======================================================================

int __thiscall sub_417620(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-8h]

  v2 = *(this + 5);
  if ( v2 == 1 )
    return sub_4123C0((_BYTE *)dword_790328);
  if ( v2 != 500 )
    return sub_5E9F20((char)"false", "..\\Casino\\blackjackroom.cpp", 790);
  sub_4189A0(dword_790324, 500);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 4))(this, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
}


//======================================================================
// sub_4176D0
// entry 004176d0  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_4176D0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &BlackjackRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_417700
// entry 00417700  size 120  status ok
//======================================================================

_DWORD *sub_417700()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_414CE0(v2);
  else
    return 0;
}


//======================================================================
// sub_417780
// entry 00417780  size 51  status ok
//======================================================================

char __stdcall sub_417780(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_BLACKJACK");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_4177E0
// entry 004177e0  size 16  status ok
//======================================================================

int sub_4177E0()
{
  return 3201000;
}


//======================================================================
// sub_4177F0
// entry 004177f0  size 16  status ok
//======================================================================

const char *sub_4177F0()
{
  return "blackjack";
}


//======================================================================
// sub_417810
// entry 00417810  size 16  status ok
//======================================================================

char **sub_417810()
{
  return &off_70CBB8;
}


//======================================================================
// sub_417820
// entry 00417820  size 16  status ok
//======================================================================

char **sub_417820()
{
  return &off_70CBC0;
}


//======================================================================
// sub_417850
// entry 00417850  size 117  status ok
//======================================================================

char __stdcall sub_417850(_DWORD *a1, int a2)
{
  if ( !a1 )
    return 0;
  *a1 = 4;
  a1[1] = 1;
  a1[2] = 4;
  a1[3] = 1;
  if ( byte_795F95 )
    a1[4] = 1;
  else
    a1[4] = 4;
  a1[5] = 0;
  a1[6] = 3;
  return 1;
}


//======================================================================
// sub_4178D0
// entry 004178d0  size 16  status ok
//======================================================================

int sub_4178D0()
{
  return 56;
}


//======================================================================
// sub_4178E0
// entry 004178e0  size 130  status ok
//======================================================================

char __stdcall sub_4178E0(_BYTE *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 2;
  a1[2] = 80;
  a1[3] = 1;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 1;
  a1[7] = 1;
  a1[8] = 0;
  a1[9] = 4;
  a1[10] = 1;
  a1[11] = 1;
  a1[12] = 0;
  a1[13] = 1;
  return 1;
}


//======================================================================
// sub_417970
// entry 00417970  size 231  status ok
//======================================================================

char __stdcall sub_417970(_BYTE *a1)
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
  v2[7] = a1[7];
  v2[8] = a1[8];
  v2[9] = a1[9];
  v2[10] = a1[10];
  v2[11] = a1[11];
  v2[12] = a1[12];
  v2[13] = a1[13];
  return 1;
}


//======================================================================
// sub_417A60
// entry 00417a60  size 133  status ok
//======================================================================

char __stdcall sub_417A60(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[13] = 0;
  return 1;
}


//======================================================================
// sub_417B10
// entry 00417b10  size 293  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_417B10(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  int v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  _DWORD v7[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  v8 = (_DWORD *)sub_63AAE0(2);
  *a2 += v8[6] + v8[4];
  a2[1] += v8[5];
  *a3 += v8[4];
  a3[1] += v8[5];
  *a4 += v8[6];
  a4[1] += v8[7];
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)2 )
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
// sub_417C40
// entry 00417c40  size 617  status ok
//======================================================================

char __stdcall sub_417C40(int a1, int a2)
{
  int *v2; // eax
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // [esp-24h] [ebp-ACh]
  __int64 v13; // [esp-18h] [ebp-A0h]
  char v14[8]; // [esp+4h] [ebp-84h] BYREF
  char v15[8]; // [esp+Ch] [ebp-7Ch] BYREF
  char v16[8]; // [esp+14h] [ebp-74h] BYREF
  char v17[8]; // [esp+1Ch] [ebp-6Ch] BYREF
  char v18[8]; // [esp+24h] [ebp-64h] BYREF
  __int64 v19; // [esp+2Ch] [ebp-5Ch]
  __int64 v20; // [esp+34h] [ebp-54h]
  __int64 v21; // [esp+3Ch] [ebp-4Ch] BYREF
  __int64 v22; // [esp+44h] [ebp-44h] BYREF
  _DWORD *v23; // [esp+4Ch] [ebp-3Ch]
  char Destination[52]; // [esp+50h] [ebp-38h] BYREF

  v23 = (_DWORD *)sub_63AAE0(2);
  v20 = sub_64C8A0(0, 0);
  v21 = v20;
  v19 = sub_64C8A0(0, 0);
  v22 = v19;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)2 )
    sub_5E0C40(a2, &v21, &v22);
  v13 = v22;
  v12 = v21;
  sub_64C5C0(v18, v23[6], v23[7]);
  sub_64C5C0(v17, v12, HIDWORD(v12));
  v2 = (int *)sub_64C5C0(v16, v13, HIDWORD(v13));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  v4 = (int *)sub_64C5C0(v15, v21, HIDWORD(v21));
  sub_64C8D0(*v4, v4[1], Destination, 1, 1, 1);
  v5 = sub_630F40("SID_CASINOSTATS_GAMEPLAYNET_COLON");
  sub_654390(1, v5, Destination);
  v6 = (int *)sub_64C5C0(v14, v22, HIDWORD(v22));
  sub_64C8D0(*v6, v6[1], Destination, 1, 1, 1);
  v7 = sub_630F40("SID_CASINOSTATS_TOURNAMENTNET_COLON");
  sub_654390(2, v7, Destination);
  sub_64C8D0(v23[8], v23[9], Destination, 1, 1, 1);
  v8 = sub_630F40("SID_BLACKJACKSTATS_NETTRUECOUNT_NEG_COLON");
  sub_654390(3, v8, Destination);
  sub_64C8D0(v23[10], v23[11], Destination, 1, 1, 1);
  v9 = sub_630F40("SID_BLACKJACKSTATS_NETTRUECOUNT_ZERO_COLON");
  sub_654390(4, v9, Destination);
  sub_64C8D0(v23[12], v23[13], Destination, 1, 1, 1);
  v10 = sub_630F40("SID_BLACKJACKSTATS_NETTRUECOUNT_POS_COLON");
  sub_654390(5, v10, Destination);
  return 1;
}


//======================================================================
// sub_417EB0
// entry 00417eb0  size 105  status ok
//======================================================================

char __stdcall sub_417EB0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  sub_5FB5A0(4, "$0.00");
  sub_5FB5A0(6, "$0.00");
  sub_5FB5A0(8, "$0.00");
  sub_5FB5A0(10, "$0.00");
  sub_5FB5A0(12, "$0.00");
  return 1;
}


//======================================================================
// sub_417F20
// entry 00417f20  size 41  status ok
//======================================================================

char __stdcall sub_417F20(int a1)
{
  if ( a1 != 3201000 )
    return 0;
  sub_653BD0(2);
  return 1;
}


//======================================================================
// sub_417F50
// entry 00417f50  size 15  status ok
//======================================================================

char __stdcall sub_417F50(int a1)
{
  return 0;
}


//======================================================================
// sub_417F60
// entry 00417f60  size 15  status ok
//======================================================================

char __stdcall sub_417F60(int a1)
{
  return 0;
}


//======================================================================
// sub_417F70
// entry 00417f70  size 16  status ok
//======================================================================

void *sub_417F70()
{
  return &unk_70CBC4;
}


//======================================================================
// sub_417F80
// entry 00417f80  size 190  status ok
//======================================================================

void *__stdcall sub_417F80(int a1)
{
  int v1; // eax

  if ( (dword_790334 & 1) == 0 )
  {
    dword_790334 |= 1u;
    dword_70CBE8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_70CBEC = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3201001 )
    return &unk_70CBE4;
  else
    return 0;
}


//======================================================================
// sub_418040
// entry 00418040  size 16  status ok
//======================================================================

void *sub_418040()
{
  return &unk_70BD00;
}


//======================================================================
// sub_418050
// entry 00418050  size 16  status ok
//======================================================================

void *sub_418050()
{
  return &unk_70C9A0;
}


//======================================================================
// sub_418060
// entry 00418060  size 261  status ok
//======================================================================

char __stdcall sub_418060(int a1, int a2)
{
  if ( a2 == 3201000 )
  {
    if ( a1 == 5015 )
    {
      sub_5DBD00(2, -1);
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
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 2, -1) )
        sub_5E3130(dword_7947E0);
      return 1;
    }
  }
  else if ( a1 == 3201000 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 2, -1);
    return 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_418190
// entry 00418190  size 184  status ok
//======================================================================

char __stdcall sub_418190(int a1)
{
  int v2; // [esp+0h] [ebp-14h]
  int v3; // [esp+0h] [ebp-14h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v2 = sub_630F40("SID_CASINO_2DECKS");
      sub_5F9FF0(0, 0, i + 7, 1, 3200202, 80, 25 * i + 167, 1, v2, 31, 69, 66, -1, 20, 0);
    }
    else
    {
      v3 = sub_630F40("SID_CASINO_1DECK");
      sub_5F9FF0(0, 0, 7, 1, 3200202, 80, 167, 1, v3, 31, 69, 66, -1, 20, 0);
    }
  }
  sub_5FB3A0(1);
  sub_6065D0(8);
  return 1;
}


//======================================================================
// sub_418250
// entry 00418250  size 55  status ok
//======================================================================

char __thiscall sub_418250(void *this, int a2)
{
  int v2; // eax

  v2 = sub_5FB3A0(1);
  *(_DWORD *)(dword_7947E0 + 20212) = (sub_606570(v2, this) != 7) + 1;
  return 1;
}


//======================================================================
// sub_418290
// entry 00418290  size 16  status ok
//======================================================================

int sub_418290()
{
  return 25;
}


//======================================================================
// sub_4182A0
// entry 004182a0  size 115  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_4182A0(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &BlackjackState::`vftable';
  *((_DWORD *)this + 281) = 0;
  for ( i = 0; i < 4; ++i )
    *((_DWORD *)this + i + 282) = 0;
  *((_DWORD *)this + 315) = -1;
  *((_DWORD *)this + 316) = -1;
  return this;
}


//======================================================================
// sub_418320
// entry 00418320  size 216  status ok
//======================================================================

void __thiscall sub_418320(CNoTrackObject *this)
{
  int i; // [esp+20h] [ebp-10h]

  *(_DWORD *)this = &BlackjackState::`vftable';
  if ( *((_DWORD *)this + 281) )
    (***((void (__thiscall ****)(_DWORD, int))this + 281))(*((_DWORD *)this + 281), 1);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)this + i + 282) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 282))(*((_DWORD *)this + i + 282), 1);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_418400
// entry 00418400  size 62  status ok
//======================================================================

int __stdcall sub_418400(int a1)
{
  if ( a1 == -1 )
    sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_418440
// entry 00418440  size 28  status ok
//======================================================================

bool sub_418440()
{
  return *(_BYTE *)(sub_418400(-1) + 10) != 0;
}


//======================================================================
// sub_418460
// entry 00418460  size 28  status ok
//======================================================================

bool sub_418460()
{
  return *(_BYTE *)(sub_418400(-1) + 11) != 0;
}


//======================================================================
// sub_418480
// entry 00418480  size 28  status ok
//======================================================================

bool sub_418480()
{
  return *(_BYTE *)(sub_418400(-1) + 12) != 0;
}


//======================================================================
// sub_4184A0
// entry 004184a0  size 28  status ok
//======================================================================

bool sub_4184A0()
{
  return *(_BYTE *)(sub_418400(-1) + 13) != 0;
}


//======================================================================
// sub_4184C0
// entry 004184c0  size 29  status ok
//======================================================================

int __stdcall sub_4184C0(char a1)
{
  int result; // eax

  result = sub_418400(-1);
  *(_BYTE *)(result + 13) = a1;
  return result;
}


//======================================================================
// sub_4184E0
// entry 004184e0  size 45  status ok
//======================================================================

char sub_4184E0()
{
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    return 4;
  else
    return *(_BYTE *)sub_418400(-1);
}


//======================================================================
// sub_418510
// entry 00418510  size 46  status ok
//======================================================================

char sub_418510()
{
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    return 80;
  else
    return *(_BYTE *)(sub_418400(-1) + 2);
}


//======================================================================
// sub_418540
// entry 00418540  size 50  status ok
//======================================================================

bool sub_418540()
{
  return (unsigned __int8)sub_5DA830(dword_790320) || *(_BYTE *)(sub_418400(-1) + 3) != 0;
}


//======================================================================
// sub_418580
// entry 00418580  size 52  status ok
//======================================================================

bool sub_418580()
{
  return !(unsigned __int8)sub_5DA830(dword_790320) && *(_BYTE *)(sub_418400(-1) + 4) == 0;
}


//======================================================================
// sub_4185C0
// entry 004185c0  size 50  status ok
//======================================================================

bool sub_4185C0()
{
  return !(unsigned __int8)sub_5DA830(dword_790320) && *(_BYTE *)(sub_418400(-1) + 5) != 0;
}


//======================================================================
// sub_418600
// entry 00418600  size 74  status ok
//======================================================================

char sub_418600()
{
  _DWORD v1[3]; // [esp+4h] [ebp-Ch]

  v1[0] = 1;
  v1[1] = 3;
  v1[2] = 0;
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    return 3;
  else
    return v1[*(char *)(sub_418400(-1) + 6)];
}


//======================================================================
// sub_418650
// entry 00418650  size 50  status ok
//======================================================================

bool sub_418650()
{
  return (unsigned __int8)sub_5DA830(dword_790320) || *(_BYTE *)(sub_418400(-1) + 7) != 0;
}


//======================================================================
// sub_418690
// entry 00418690  size 50  status ok
//======================================================================

bool sub_418690()
{
  return (unsigned __int8)sub_5DA830(dword_790320) || *(_BYTE *)(sub_418400(-1) + 8) != 0;
}


//======================================================================
// sub_4186D0
// entry 004186d0  size 46  status ok
//======================================================================

char sub_4186D0()
{
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    return 4;
  else
    return *(_BYTE *)(sub_418400(-1) + 9);
}


//======================================================================
// sub_418700
// entry 00418700  size 74  status ok
//======================================================================

int __thiscall sub_418700(_DWORD *this)
{
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    return *(_DWORD *)(dword_7947E0 + 20212);
  else
    return *(_DWORD *)(*(this + 281) + 2060) / 52;
}


//======================================================================
// sub_418750
// entry 00418750  size 580  status ok
//======================================================================

int __thiscall sub_418750(int this)
{
  _AFX_OLE_STATE *v2; // [esp+4h] [ebp-68h]
  int v3; // [esp+8h] [ebp-64h]
  int v4; // [esp+Ch] [ebp-60h]
  _AFX_OLE_STATE *v6; // [esp+1Ch] [ebp-50h]
  void *v7; // [esp+24h] [ebp-48h]
  _DWORD v8[7]; // [esp+30h] [ebp-3Ch]
  _DWORD v9[4]; // [esp+4Ch] [ebp-20h]
  int i; // [esp+5Ch] [ebp-10h]
  int v11; // [esp+68h] [ebp-4h]

  v8[0] = 5;
  v8[1] = 5;
  v8[2] = 6;
  v8[3] = 5;
  v8[4] = 2;
  v8[5] = 5;
  v8[6] = 3;
  v9[0] = 1;
  v9[1] = 2;
  v9[2] = 4;
  v9[3] = 6;
  if ( (unsigned __int8)sub_5DA830(dword_790320) )
    v4 = *(_DWORD *)(dword_7947E0 + 20212);
  else
    v4 = v9[*(char *)(sub_418400(-1) + 1)];
  if ( !*(_DWORD *)(this + 1124) )
  {
    v7 = operator new(0x810u);
    v11 = 0;
    if ( v7 )
      v3 = sub_642E10(v7);
    else
      v3 = 0;
    v11 = -1;
    *(_DWORD *)(this + 1124) = v3;
  }
  sub_642E70(v8[v4]);
  sub_418ED0(this);
  for ( i = 0; i < 4; ++i )
  {
    v6 = (_AFX_OLE_STATE *)operator new(0xF0u);
    v11 = 1;
    if ( v6 )
      v2 = _AFX_OLE_STATE::_AFX_OLE_STATE(v6);
    else
      v2 = 0;
    v11 = -1;
    *(_DWORD *)(this + 4 * i + 1128) = v2;
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(this + 4 * i + 1128), (struct CPaneDivider *)i);
    *(_QWORD *)(this + 8 * i + 1144) = sub_64C8A0(0, 0);
  }
  *(_BYTE *)(this + 1240) = 0;
  *(_BYTE *)(this + 1228) = 0;
  *(_DWORD *)(this + 1224) = 0;
  *(_DWORD *)(this + 1244) = 0;
  *(_DWORD *)(this + 1252) = 0;
  *(_DWORD *)(this + 1248) = 0;
  *(_DWORD *)(this + 1256) = 0;
  return sub_4189A0(this);
}


//======================================================================
// sub_4189A0
// entry 004189a0  size 595  status ok
//======================================================================

_DWORD *__thiscall sub_4189A0(_DWORD *this)
{
  _DWORD *result; // eax
  int m; // [esp+10h] [ebp-Ch]
  int jj; // [esp+10h] [ebp-Ch]
  int n; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]
  int j; // [esp+18h] [ebp-4h]
  int k; // [esp+18h] [ebp-4h]
  int ii; // [esp+18h] [ebp-4h]
  int kk; // [esp+18h] [ebp-4h]

  sub_4190B0(-1, 0);
  result = (_DWORD *)sub_418D60(this);
  for ( i = 0; i < 4; ++i )
  {
    sub_5CB9B0(*(this + i + 282));
    result = (_DWORD *)(i + 1);
  }
  for ( j = 0; j < 15; ++j )
  {
    sub_419370(4, 0, j, 0);
    sub_419420(4, 0, j, 0);
    result = (_DWORD *)(j + 1);
  }
  for ( k = 0; k < 4; ++k )
  {
    for ( m = 0; m < 4; ++m )
    {
      for ( n = 0; n < 22; ++n )
      {
        sub_419370(k, m, n, 0);
        sub_419420(k, m, n, 0);
      }
    }
    result = (_DWORD *)(k + 1);
  }
  for ( ii = 0; ii < 4; ++ii )
  {
    *(_BYTE *)(sub_5DCB00(ii) + 1186) = 0;
    *(_BYTE *)(sub_5DCB00(ii) + 1184) = 0;
    *(_BYTE *)(sub_5DCB00(ii) + 1185) = 0;
    for ( jj = 0; jj < 4; ++jj )
    {
      *((_BYTE *)this + 280 * ii + jj + 268) = 0;
      sub_4191F0(ii, jj, -1);
      *((_BYTE *)this + 280 * ii + jj + 276) = 0;
    }
    *((_BYTE *)this + 280 * ii + 281) = 0;
    *((_BYTE *)this + 280 * ii + 280) = 0;
    *((_BYTE *)this + 280 * ii + 282) = 0;
    *((_BYTE *)this + 280 * ii + 283) = 0;
    result = (_DWORD *)(ii + 1);
  }
  for ( kk = 0; kk < 4; ++kk )
  {
    result = this;
    *(this + kk + 317) = 0;
  }
  *(this + 309) = -1;
  return result;
}


//======================================================================
// sub_418C00
// entry 00418c00  size 162  status ok
//======================================================================

char sub_418C00()
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
// sub_418D60
// entry 00418d60  size 185  status ok
//======================================================================

int __thiscall sub_418D60(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  _DWORD v5[7]; // [esp+8h] [ebp-2Ch]
  _DWORD v6[4]; // [esp+24h] [ebp-10h]

  v6[0] = 1;
  v6[1] = 2;
  v6[2] = 4;
  v6[3] = 6;
  v5[0] = 5;
  v5[1] = 5;
  v5[2] = 6;
  v5[3] = 5;
  v5[4] = 2;
  v5[5] = 5;
  v5[6] = 3;
  result = (unsigned __int8)sub_5DA830(dword_790320);
  if ( !(_BYTE)result )
  {
    v2 = sub_418700(this);
    result = sub_418400(-1);
    if ( v2 != v6[*(char *)(result + 1)] )
    {
      v3 = sub_418400(-1);
      sub_642E70(v5[v6[*(char *)(v3 + 1)]]);
      return sub_418ED0(this);
    }
  }
  return result;
}


//======================================================================
// sub_418E20
// entry 00418e20  size 65  status ok
//======================================================================

bool __thiscall sub_418E20(int this)
{
  return *(_BYTE *)(this + 1228) || *(_DWORD *)(this + 1224) >= sub_418E70(this);
}


//======================================================================
// sub_418E70
// entry 00418e70  size 91  status ok
//======================================================================

int __thiscall sub_418E70(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-10h]

  if ( (unsigned __int8)sub_5DA7B0(dword_790320) )
    v2 = 80;
  else
    v2 = sub_418510();
  return (int)((double)*(int *)(*(this + 281) + 2060) * ((double)v2 / 100.0));
}


//======================================================================
// sub_418ED0
// entry 00418ed0  size 119  status ok
//======================================================================

int __thiscall sub_418ED0(_DWORD *this)
{
  sub_6437D0(1, 0);
  *(this + 306) = 0;
  *(this + 311) = 0;
  *(this + 313) = 0;
  *(this + 314) = 0;
  *(this + 312) = 0;
  return sub_643930(5, 2, "Blackjack", 1);
}


//======================================================================
// sub_418F50
// entry 00418f50  size 294  status ok
//======================================================================

int __thiscall sub_418F50(_DWORD *this)
{
  int v3; // [esp+8h] [ebp-18h]
  int v4; // [esp+Ch] [ebp-14h]
  __int16 v5; // [esp+10h] [ebp-10h]
  int k; // [esp+14h] [ebp-Ch]
  int v7; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  int j; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < 5; ++i )
    v3 += sub_419610(i);
  v7 = *(_DWORD *)(*(this + 281) + 2060) - v3;
  for ( j = 0; j < 5; ++j )
  {
    for ( k = *(_DWORD *)(*(this + 281) + 2060) - 1; k > 0; --k )
    {
      v4 = v3 + sub_62FBF0(v7);
      v5 = *(_WORD *)(*(this + 281) + 2 * v4 + 4);
      *(_WORD *)(*(this + 281) + 2 * v4 + 4) = *(_WORD *)(*(this + 281) + 2 * k + 4);
      *(_WORD *)(*(this + 281) + 2 * k + 4) = v5;
    }
  }
  return sub_6436A0(*(_DWORD *)(*(this + 281) + 2060) - 1);
}


//======================================================================
// sub_419080
// entry 00419080  size 45  status ok
//======================================================================

int __thiscall sub_419080(_DWORD *this)
{
  if ( *(this + 308) == -1 )
    return 0;
  else
    return sub_5DCB00(*(this + 308));
}


//======================================================================
// sub_4190B0
// entry 004190b0  size 77  status ok
//======================================================================

int __thiscall sub_4190B0(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // eax

  v3 = this;
  *(this + 308) = a2;
  if ( *(this + 308) == -1 )
    return sub_5D8A20(0, -1, 0);
  LOBYTE(v3) = a3;
  return sub_5D8A20(1, a2, v3);
}


//======================================================================
// sub_419100
// entry 00419100  size 232  status ok
//======================================================================

void sub_419100()
{
  CImageDisplay *v1; // [esp+Ch] [ebp-28h]
  CImageDisplay *v2; // [esp+18h] [ebp-1Ch]
  _DWORD v3[4]; // [esp+20h] [ebp-14h]
  int i; // [esp+30h] [ebp-4h]

  v3[0] = 2;
  v3[1] = 0;
  v3[2] = 1;
  v3[3] = 3;
  for ( i = 0; i < 4; ++i )
  {
    v2 = (CImageDisplay *)sub_5DCB00(v3[i]);
    if ( CImageDisplay::GetDisplayFormat(v2)->rcSource.left )
    {
      v1 = (CImageDisplay *)sub_5DCB00(v3[i]);
      if ( CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v1)->rcSource.left == 3 )
      {
        *(_BYTE *)(sub_5DCB00(v3[i]) + 1185) = 1;
      }
    }
  }
}


//======================================================================
// sub_4191F0
// entry 004191f0  size 110  status ok
//======================================================================

int __thiscall sub_4191F0(_BYTE *this, int a2, int a3, int a4)
{
  int v5; // [esp+8h] [ebp-4h]

  *(this + 280 * a2 + a3 + 272) = a4;
  switch ( a4 )
  {
    case 0:
    case 5:
    case 6:
      v5 = 2;
      break;
    case 1:
    case 2:
      v5 = 1;
      break;
    default:
      v5 = 0;
      break;
  }
  *((_DWORD *)this + a2 + 317) = v5;
  return a2;
}


//======================================================================
// sub_419280
// entry 00419280  size 236  status ok
//======================================================================

int __thiscall sub_419280(_DWORD *this, int a2)
{
  int v4; // [esp+8h] [ebp-24h]
  _DWORD v5[4]; // [esp+Ch] [ebp-20h]
  bool v6; // [esp+1Fh] [ebp-Dh]
  int v7; // [esp+20h] [ebp-Ch]
  int i; // [esp+24h] [ebp-8h]
  int v9; // [esp+28h] [ebp-4h]

  v4 = 0;
  v6 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)sub_638FF0(i) )
    {
      v6 = 0;
      v7 = *(this + i + 317);
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v6 = a2 == 1 || a2 != 2;
        }
        else if ( v7 == 2 )
        {
          v6 = a2 != 2;
        }
      }
      else
      {
        v6 = 1;
      }
      if ( v6 )
        v5[v4++] = i;
    }
  }
  if ( !v4 )
    return -1;
  v9 = sub_62FC30(0, v4 - 1);
  return v5[v9];
}


//======================================================================
// sub_419370
// entry 00419370  size 82  status ok
//======================================================================

__int16 __thiscall sub_419370(_WORD *this, int a2, int a3, int a4, __int16 a5)
{
  __int16 result; // ax

  if ( a2 == 4 )
  {
    if ( a4 < 15 )
    {
      *(this + a4 + 588) = a5;
      return a4;
    }
  }
  else
  {
    *(this + 140 * a2 + 22 * a3 + a4 + 2) = a5;
    return a5;
  }
  return result;
}


//======================================================================
// sub_4193D0
// entry 004193d0  size 77  status ok
//======================================================================

__int16 __thiscall sub_4193D0(_WORD *this, int a2, int a3, int a4)
{
  if ( a2 != 4 )
    return *(this + 140 * a2 + 22 * a3 + a4 + 2);
  if ( a4 < 15 )
    return *(this + a4 + 588);
  return 0;
}


//======================================================================
// sub_419420
// entry 00419420  size 71  status ok
//======================================================================

char __thiscall sub_419420(_BYTE *this, int a2, int a3, int a4, char a5)
{
  if ( a2 == 4 )
  {
    *(this + a4 + 1206) = a5;
    return a4 + (_BYTE)this;
  }
  else
  {
    *(this + 280 * a2 + 22 * a3 + a4 + 180) = a5;
    return a5;
  }
}


//======================================================================
// sub_419470
// entry 00419470  size 75  status ok
//======================================================================

bool __thiscall sub_419470(_BYTE *this, int a2, int a3, int a4)
{
  if ( a2 == 4 )
    return *(this + a4 + 1206) != 0;
  else
    return *(this + 280 * a2 + 22 * a3 + a4 + 180) != 0;
}


//======================================================================
// sub_4194C0
// entry 004194c0  size 98  status ok
//======================================================================

int __thiscall sub_4194C0(_WORD *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  if ( a2 == 4 )
    return 1;
  for ( i = 0; i < 4; ++i )
  {
    if ( sub_4193D0(this, a2, i, 0) )
      ++v5;
  }
  return v5;
}


