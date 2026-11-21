//======================================================================
// sub_691E20
// entry 00691e20  size 122  status ok
//======================================================================

int __cdecl sub_691E20(int a1, _DWORD *a2)
{
  int v2; // esi
  int v4; // eax
  int i; // ecx
  int v6; // eax
  _BYTE v7[20]; // [esp+4h] [ebp-14h] BYREF

  v2 = *(_DWORD *)(a1 + 28);
  sub_69D360(v7, *a2, a2[1]);
  if ( sub_69D470(v7, 1) )
    return -135;
  v4 = *(_DWORD *)(v2 + 8);
  for ( i = 0; v4 > 1; ++i )
    v4 >>= 1;
  v6 = sub_69D470(v7, i);
  if ( v6 == -1 )
    return -136;
  else
    return *(_DWORD *)(v2 + 4 * **(_DWORD **)(v2 + 4 * v6 + 32));
}


//======================================================================
// sub_691EA0
// entry 00691ea0  size 31  status ok
//======================================================================

void __cdecl sub_691EA0(void *Block)
{
  if ( Block )
  {
    memset(Block, 0, 0x24u);
    free(Block);
  }
}


//======================================================================
// sub_691EC0
// entry 00691ec0  size 31  status ok
//======================================================================

void __cdecl sub_691EC0(void *Block)
{
  if ( Block )
  {
    memset(Block, 0, 0x210u);
    free(Block);
  }
}


//======================================================================
// sub_691EE0
// entry 00691ee0  size 1355  status ok
//======================================================================

char *__cdecl sub_691EE0(int *a1, int a2, int *a3, int a4, int a5)
{
  int v6; // ebp
  __int64 v7; // rax
  double v8; // st7
  double v9; // st5
  int v10; // edi
  int v11; // edi
  int v12; // ebx
  double v13; // st7
  long double v16; // st6
  __int64 v17; // rax
  double v18; // st7
  int v19; // edi
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  long double v24; // st7
  __int16 v25; // fps
  bool v26; // c0
  char v27; // c2
  bool v28; // c3
  int v29; // edi
  long double v30; // st7
  __int16 v31; // fps
  long double v32; // st6
  bool v33; // c0
  char v34; // c2
  bool v35; // c3
  int v36; // ebx
  __int64 v37; // rax
  int j; // ebx
  char *result; // eax
  int v40; // ebx
  long double v41; // st6
  __int16 v42; // fps
  long double v43; // st6
  bool v44; // c0
  char v45; // c2
  bool v46; // c3
  int v47; // ecx
  long double v48; // st6
  int v49; // edx
  long double v50; // st4
  long double v51; // st3
  float v52; // [esp+0h] [ebp-44h]
  int v53; // [esp+20h] [ebp-24h]
  int v54; // [esp+24h] [ebp-20h]
  float v55; // [esp+28h] [ebp-1Ch]
  float v56; // [esp+30h] [ebp-14h]
  double v57; // [esp+34h] [ebp-10h]
  double v58; // [esp+3Ch] [ebp-8h]
  int v59; // [esp+48h] [ebp+4h]
  int v60; // [esp+48h] [ebp+4h]
  float v61; // [esp+50h] [ebp+Ch]
  int v62; // [esp+50h] [ebp+Ch]
  int i; // [esp+54h] [ebp+10h]
  int k; // [esp+54h] [ebp+10h]
  int v65; // [esp+54h] [ebp+10h]
  int v66; // [esp+58h] [ebp+14h]
  int v67; // [esp+58h] [ebp+14h]

  memset(a1, 0, 0x30u);
  v53 = -99;
  v6 = 1;
  a1[9] = *a3;
  v7 = (__int64)(floor(__FYL2X__((double)*a3 * 8.0, 0.6931471805599453094) / __FYL2X__(2.0, 0.6931471805599453094) + 0.5)
               - 1.0);
  v8 = (double)a5;
  v57 = (double)a4;
  a1[8] = v7;
  v9 = (double)(1 << (v7 + 1));
  v10 = (__int64)((__FYL2X__(v8 * 0.25 * 0.5 / v57, 0.6931471805599453094) * 1.442695021629333 - 5.965784072875977) * v9
                - (double)*a3);
  a1[7] = v10;
  a1[10] = (__int64)((__FYL2X__((v57 + 0.25) * v8 * 0.5 / v57, 0.6931471805599453094) * 1.442695021629333
                    - 5.965784072875977)
                   * v9
                   + 0.5)
         - v10
         + 1;
  a1[4] = (int)malloc(4 * a4);
  a1[5] = (int)malloc(4 * a4);
  a1[6] = (int)malloc(4 * a4);
  *a1 = a4;
  v58 = v8;
  v11 = 0;
  a1[1] = a2;
  a1[11] = a5;
  v12 = 0;
  do
  {
    v59 = v11 + 1;
    v13 = ((double)(v11 + 1) * 0.125 - 2.0 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
    _ST6 = v13;
    __asm { frndint }
    v16 = __FSCALE__(__F2XM1__(v13 - _ST6) + 1.0, _ST6);
    v17 = (__int64)floor((v16 * v57 + v16 * v57) / v58 + 0.5);
    v18 = flt_781968[v11];
    if ( v12 < (int)v17 )
    {
      v61 = (flt_78196C[v11] - v18) / (double)((int)v17 - v12);
      do
      {
        if ( v12 >= a4 )
          break;
        ++v12;
        *(float *)(a1[4] + 4 * v12 - 4) = v18 + 100.0;
        v18 = v18 + v61;
      }
      while ( v12 < (int)v17 );
    }
    ++v11;
  }
  while ( v59 < 87 );
  v19 = a4;
  v20 = 0;
  if ( a4 > 0 )
  {
    v21 = a5 / (2 * a4);
    v22 = v21 * v21;
    v62 = 0;
    v60 = 0;
    do
    {
      v55 = atan2((double)(v20 * v60) * 0.0000000185, 1.0) * 2.240000009536743
          + atan2((double)v62 * 0.00073999999, 1.0) * 13.10000038146973
          + (double)v62 * 0.000099999997;
      if ( v53 + *(_DWORD *)(a2 + 120) < v20 )
      {
        v54 = v53 + *(_DWORD *)(a2 + 120);
        v23 = v53 * v22;
        v56 = v55 - *(float *)(a2 + 112);
        v66 = v53 * v21;
        do
        {
          v24 = atan2((double)(v53 * v23) * 0.0000000185, 1.0) * 2.240000009536743
              + atan2((double)v66 * 0.00073999999, 1.0) * 13.10000038146973
              + (double)v66 * 0.000099999997;
          v26 = v56 < v24;
          v27 = 0;
          v28 = v56 == v24;
          if ( (v25 & 0x4100) != 0 )
            break;
          v23 += v22;
          ++v53;
          v66 += v21;
          ++v54;
        }
        while ( v54 < v20 );
      }
      if ( v6 <= a4 )
      {
        v29 = v6 * v22;
        v67 = v6 * v21;
        do
        {
          if ( v6 >= v20 + *(_DWORD *)(a2 + 124) )
          {
            v30 = atan2((double)(v6 * v29) * 0.0000000185, 1.0) * 2.240000009536743
                + atan2((double)v67 * 0.00073999999, 1.0) * 13.10000038146973
                + (double)v67 * 0.000099999997;
            v32 = v55 + *(float *)(a2 + 116);
            v33 = v32 < v30;
            v34 = 0;
            v35 = v32 == v30;
            if ( (v31 & 0x4100) != 0 )
              break;
          }
          ++v6;
          v29 += v22;
          v67 += v21;
        }
        while ( v6 <= a4 );
      }
      ++v20;
      *(_DWORD *)(a1[6] + 4 * v20 - 4) = (v53 << 16) + v6 - 65537;
      v60 += v22;
      v62 += v21;
    }
    while ( v20 < a4 );
    v19 = a4;
  }
  v36 = 0;
  for ( i = 0; v36 < v19; *(_DWORD *)(a1[5] + 4 * v36 - 4) = v37 )
  {
    v37 = (__int64)((__FYL2X__(((double)i + 0.25) * v58 * 0.5 / v57, 0.6931471805599453094) * 1.442695021629333
                   - 5.965784072875977)
                  * (double)(1 << (*((_BYTE *)a1 + 32) + 1))
                  + 0.5);
    i = ++v36;
  }
  v52 = v58 * 0.5 / v57;
  a1[2] = sub_692430(a2 + 36, v52, v19, *(float *)(a2 + 24), *(float *)(a2 + 28));
  a1[3] = (int)malloc(0xCu);
  for ( j = 0; j < 12; *(_DWORD *)(j + a1[3] - 4) = result )
  {
    result = (char *)malloc(4 * v19);
    j += 4;
  }
  v40 = 0;
  for ( k = 0; v40 < v19; k = v40 )
  {
    v41 = __FYL2X__(((double)k + 0.5) * v58 / (v57 + v57), 0.6931471805599453094);
    v43 = v41 * 1.442695021629333 - 5.965784072875977 + v41 * 1.442695021629333 - 5.965784072875977;
    if ( v43 >= 0.0 )
    {
      v44 = v43 < 16.0;
      v45 = 0;
      v46 = v43 == 16.0;
      if ( (v42 & 0x100) == 0 )
        v43 = 16.0;
    }
    else
    {
      v43 = 0.0;
    }
    v65 = (__int64)v43;
    v47 = 0;
    v48 = v43 - (double)v65;
    result = (char *)(4 * v65 + 136);
    do
    {
      v49 = a1[1];
      v47 += 4;
      v50 = *(float *)&result[v49 - 4] * (1.0 - v48);
      v51 = v48 * *(float *)&result[v49];
      result += 68;
      *(float *)(*(_DWORD *)(a1[3] + v47 - 4) + 4 * v40) = v50 + v51;
    }
    while ( v47 < 12 );
    ++v40;
  }
  return result;
}


//======================================================================
// sub_692430
// entry 00692430  size 1903  status ok
//======================================================================

void *__cdecl sub_692430(int a1, float a2, int a3, float a4, float a5)
{
  int v5; // eax
  void *v6; // esp
  float *v7; // ebx
  int i; // esi
  float *v9; // ecx
  __int16 v10; // fps
  double v11; // st7
  int v12; // edx
  int v13; // edi
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  int v20; // eax
  float *v21; // edx
  int v22; // edi
  int v23; // esi
  float *v24; // ecx
  __int16 v25; // fps
  double v26; // st7
  bool v27; // c0
  char v28; // c2
  bool v29; // c3
  bool v30; // c0
  char v31; // c2
  bool v32; // c3
  double v33; // st7
  int *v34; // ebx
  double v35; // st7
  int v36; // esi
  bool v37; // cc
  int v38; // edi
  char *v39; // esi
  int v40; // ebx
  int v41; // esi
  double v42; // st7
  int v45; // edi
  long double v46; // st7
  int v47; // ebx
  long double v48; // st7
  __int64 v49; // rax
  int v50; // ebx
  int v51; // eax
  float *v52; // ebx
  int v53; // esi
  double v54; // st6
  double v55; // st5
  int v58; // edi
  double v59; // st6
  __int64 v62; // rax
  int v63; // ecx
  __int16 v64; // fps
  double v65; // st6
  bool v66; // c0
  char v67; // c2
  bool v68; // c3
  float *k; // edx
  __int16 v70; // fps
  double v71; // st7
  bool v72; // c0
  char v73; // c2
  bool v74; // c3
  int v75; // esi
  int v76; // ebx
  double v77; // st7
  double v78; // st6
  int v81; // edi
  double v82; // st7
  int v85; // ecx
  int v86; // eax
  float *v87; // edi
  __int16 v88; // fps
  double v89; // st7
  int v90; // eax
  bool v91; // c0
  char v92; // c2
  bool v93; // c3
  float *v94; // edx
  float *v95; // ecx
  __int16 v96; // fps
  double v97; // st7
  bool v98; // c0
  char v99; // c2
  bool v100; // c3
  int *v101; // edi
  int m; // esi
  double v103; // st7
  __int64 v106; // rax
  int v107; // edx
  int v108; // ecx
  float *v109; // esi
  float *v110; // edx
  __int16 v111; // fps
  double v112; // st7
  bool v113; // c0
  char v114; // c2
  bool v115; // c3
  int v116; // ecx
  double v117; // st7
  int v118; // esi
  float *v119; // edx
  __int16 v120; // fps
  double v121; // st7
  bool v122; // c0
  char v123; // c2
  bool v124; // c3
  float v126; // [esp+4h] [ebp-7F1Ch]
  float v127; // [esp+4h] [ebp-7F1Ch]
  int v128; // [esp+8h] [ebp-7F18h] BYREF
  float v129[7616]; // [esp+14h] [ebp-7F0Ch] BYREF
  int v130; // [esp+7714h] [ebp-80Ch] BYREF
  char v131; // [esp+77F4h] [ebp-72Ch] BYREF
  float v132[56]; // [esp+7E14h] [ebp-10Ch] BYREF
  int v133; // [esp+7EF4h] [ebp-2Ch]
  double v134; // [esp+7EF8h] [ebp-28h]
  void *v135; // [esp+7F00h] [ebp-20h]
  int *v136; // [esp+7F04h] [ebp-1Ch]
  int v137; // [esp+7F08h] [ebp-18h]
  float *v138; // [esp+7F0Ch] [ebp-14h]
  int v139; // [esp+7F10h] [ebp-10h]
  int v140; // [esp+7F14h] [ebp-Ch]
  int v141; // [esp+7F18h] [ebp-8h]
  int j; // [esp+7F1Ch] [ebp-4h]
  int v143; // [esp+7F28h] [ebp+8h]
  int v144; // [esp+7F34h] [ebp+14h]
  int v145; // [esp+7F34h] [ebp+14h]
  int v146; // [esp+7F38h] [ebp+18h]
  int v147; // [esp+7F38h] [ebp+18h]

  v5 = 4 * a3 + 3;
  LOBYTE(v5) = v5 & 0xFC;
  v6 = alloca(v5);
  v136 = &v128;
  v135 = malloc(0x44u);
  v140 = 0;
  memset(v129, 0, sizeof(v129));
  v138 = (float *)&unk_781AC8;
  v141 = (int)v129;
  v137 = (int)flt_781968;
  do
  {
    v7 = (float *)v137;
    for ( i = 0; i < 56; ++i )
    {
      v9 = v7;
      v11 = 999.0;
      v12 = i + v140;
      v13 = 4;
      do
      {
        if ( v12 >= 88 )
        {
          v17 = v11 < flt_781AC4;
          v18 = 0;
          v19 = v11 == flt_781AC4;
          if ( (v10 & 0x4100) == 0 )
            v11 = flt_781AC4;
        }
        else
        {
          v14 = v11 < *v9;
          v15 = 0;
          v16 = v11 == *v9;
          if ( (v10 & 0x4100) == 0 )
            v11 = *v9;
        }
        ++v9;
        ++v12;
        --v13;
      }
      while ( v13 );
      v132[i] = v11;
      ++v7;
    }
    v20 = v141;
    v21 = v138;
    qmemcpy((void *)(v141 + 448), v138, 0x540u);
    qmemcpy((void *)v20, v21, 0xE0u);
    v133 = v20 + 224;
    qmemcpy((void *)(v20 + 224), v21, 0xE0u);
    v22 = 8;
    do
    {
      v23 = 16;
      v24 = (float *)v20;
      do
      {
        v139 = abs32(v23);
        v26 = (double)v139 * a5 + a4;
        if ( v26 < 0.0 )
        {
          v27 = a4 < 0.0;
          v28 = 0;
          v29 = a4 == 0.0;
          if ( (v25 & 0x4100) == 0 )
            v26 = 0.0;
        }
        v30 = v26 < 0.0;
        v31 = 0;
        v32 = v26 == 0.0;
        if ( (v25 & 0x4100) == 0 && a4 < 0.0 )
          v26 = 0.0;
        v33 = v26 + *v24++;
        --v23;
        *(v24 - 1) = v33;
      }
      while ( v23 > -40 );
      v20 = (int)v24;
      --v22;
      HIDWORD(v134) = v24;
    }
    while ( v22 );
    j = 0;
    v34 = &v130;
    do
    {
      v139 = 2;
      if ( j >= 2 )
        v139 = j;
      v126 = *(float *)(v140 + a1) + 100.0 - (double)v139 * 10.0 - 30.0;
      sub_692C00(v141, v126);
      v35 = (double)j * 10.0;
      qmemcpy(v34, v132, 0xE0u);
      v127 = 100.0 - v35 - 30.0;
      sub_692C00((int)v34, v127);
      v36 = v141;
      sub_692BD0(v34, v141);
      v34 += 56;
      v37 = ++j < 8;
      v141 = v36 + 224;
    }
    while ( v37 );
    v38 = v133;
    v39 = &v131;
    v40 = 7;
    do
    {
      sub_692BA0(v39, v39 - 224);
      sub_692BA0(v38, v39);
      v39 += 224;
      v38 += 224;
      --v40;
    }
    while ( v40 );
    v37 = v137 + 16 < (int)&unk_781A78;
    v138 += 336;
    v140 += 4;
    v137 += 16;
    v141 = HIDWORD(v134);
  }
  while ( v37 );
  v41 = 0;
  v144 = 0;
  v141 = (int)v135;
  do
  {
    *(_DWORD *)v141 = malloc(0x20u);
    v134 = (double)v144 * 0.5;
    v42 = (v134 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
    _ST6 = v42;
    __asm { frndint }
    v45 = (__int64)floor(__FSCALE__(__F2XM1__(v42 - _ST6) + 1.0, _ST6) / a2);
    v46 = __FYL2X__((double)v45 * a2 + 1.0, 0.6931471805599453094);
    v47 = (__int64)ceil(v46 * 1.442695021629333 - 5.965784072875977 + v46 * 1.442695021629333 - 5.965784072875977);
    v145 = v47;
    v48 = __FYL2X__((double)(v45 + 1) * a2, 0.6931471805599453094);
    v49 = (__int64)floor(v48 * 1.442695021629333 - 5.965784072875977 + v48 * 1.442695021629333 - 5.965784072875977);
    v139 = v49;
    if ( v47 > v41 )
    {
      v47 = v41;
      v145 = v41;
    }
    if ( v47 < 0 )
      v145 = 0;
    if ( (int)v49 >= 17 )
      v139 = 16;
    v50 = 0;
    v143 = 0;
    v140 = v41 + 1;
    do
    {
      *(_DWORD *)(*(_DWORD *)v141 + 4 * v50) = malloc(0xE8u);
      if ( a3 > 0 )
        memset32(v136, 1148829696, a3);
      v146 = v145;
      if ( v145 <= v139 )
      {
        v51 = v50 + 8 * v145;
        v52 = (float *)v136;
        v137 = 56 * v51;
        v138 = &v129[56 * v51 + 55];
        do
        {
          v53 = 0;
          for ( j = 0; j < 56; ++j )
          {
            v54 = (double)j * 0.125 + (double)v146 * 0.5;
            v55 = (v54 - 2.0625 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
            _ST4 = v55;
            __asm { frndint }
            v58 = (__int64)(__FSCALE__(__F2XM1__(v55 - _ST4) + 1.0, _ST4) / a2);
            v59 = (v54 - 1.9375 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
            _ST5 = v59;
            __asm { frndint }
            v62 = (__int64)(__FSCALE__(__F2XM1__(v59 - _ST5) + 1.0, _ST5) / a2 + 1.0);
            HIDWORD(v62) = v62;
            if ( v58 < 0 )
              v58 = 0;
            v63 = a3;
            if ( v58 > a3 )
              v58 = a3;
            if ( v58 < v53 )
              v53 = v58;
            if ( (int)v62 < 0 )
              HIDWORD(v62) = 0;
            if ( SHIDWORD(v62) > a3 )
              HIDWORD(v62) = a3;
            for ( ; v53 < SHIDWORD(v62); ++v53 )
            {
              if ( v53 >= v63 )
                break;
              v65 = v52[v53];
              v66 = v65 < v129[j + v137];
              v67 = 0;
              v68 = v65 == v129[j + v137];
              if ( (v64 & 0x4100) == 0 )
                v52[v53] = v129[j + v137];
              v63 = a3;
            }
          }
          for ( k = v138; v53 < v63; ++v53 )
          {
            v71 = v52[v53];
            v72 = v71 < *k;
            v73 = 0;
            v74 = v71 == *k;
            if ( (v70 & 0x4100) == 0 )
              v52[v53] = *k;
          }
          v37 = ++v146 <= v139;
          v137 += 448;
          v138 = k + 448;
        }
        while ( v37 );
      }
      if ( v140 < 17 )
      {
        v75 = 0;
        v76 = 0;
        j = 0;
        do
        {
          v77 = (double)j * 0.125 + v134;
          v78 = (v77 - 2.0625 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
          _ST5 = v78;
          __asm { frndint }
          v81 = (__int64)(__FSCALE__(__F2XM1__(v78 - _ST5) + 1.0, _ST5) / a2);
          v82 = (v77 - 1.9375 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
          _ST6 = v82;
          __asm { frndint }
          v147 = (__int64)(__FSCALE__(__F2XM1__(v82 - _ST6) + 1.0, _ST6) / a2 + 1.0);
          if ( v81 < 0 )
            v81 = 0;
          v85 = a3;
          if ( v81 > a3 )
            v81 = a3;
          if ( v81 < v75 )
            v75 = v81;
          v86 = v147;
          if ( v147 < 0 )
          {
            v86 = 0;
            v147 = 0;
          }
          if ( v86 > a3 )
          {
            v86 = a3;
            v147 = a3;
          }
          if ( v75 < v86 )
          {
            v87 = (float *)v136;
            do
            {
              if ( v75 >= v85 )
                break;
              v89 = v87[v75];
              v90 = v76 + 56 * (v143 + 8 * v140);
              v91 = v89 < v129[v90];
              v92 = 0;
              v93 = v89 == v129[v90];
              if ( (v88 & 0x4100) == 0 )
                v87[v75] = v129[v90];
              v85 = a3;
              ++v75;
            }
            while ( v75 < v147 );
          }
          j = ++v76;
        }
        while ( v76 < 56 );
        if ( v75 < v85 )
        {
          v94 = (float *)v136;
          v95 = &v129[448 * v140 + 55 + 56 * v143];
          do
          {
            v97 = v94[v75];
            v98 = v97 < *v95;
            v99 = 0;
            v100 = v97 == *v95;
            if ( (v96 & 0x4100) == 0 )
              v94[v75] = *v95;
            ++v75;
          }
          while ( v75 < a3 );
        }
      }
      v101 = (int *)v141;
      j = 0;
      for ( m = 8; m < 232; m += 4 )
      {
        v103 = ((double)j * 0.125 + v134 - 2.0 + 5.965784072875977) * 0.6931470036506653 * 1.442695040888963407;
        _ST6 = v103;
        __asm { frndint }
        v106 = (__int64)(__FSCALE__(__F2XM1__(v103 - _ST6) + 1.0, _ST6) / a2);
        if ( (int)v106 >= 0 )
        {
          if ( (int)v106 < a3 )
            *(_DWORD *)(m + *(_DWORD *)(*v101 + 4 * v143)) = v136[(_DWORD)v106];
          else
            *(_DWORD *)(m + *(_DWORD *)(*v101 + 4 * v143)) = -998653952;
        }
        else
        {
          *(_DWORD *)(m + *(_DWORD *)(*v101 + 4 * v143)) = -998653952;
        }
        ++j;
      }
      v107 = *v101;
      v108 = 0;
      j = 0;
      v109 = *(float **)(v107 + 4 * v143);
      v110 = v109 + 2;
      do
      {
        v112 = *v110;
        v113 = v112 < -200.0;
        v114 = 0;
        v115 = v112 == -200.0;
        if ( (v111 & 0x4100) == 0 )
          break;
        ++v108;
        ++v110;
      }
      while ( v108 < 16 );
      j = v108;
      v116 = 55;
      v117 = (double)j;
      j = 55;
      *v109 = v117;
      v118 = *(_DWORD *)(*v101 + 4 * v143);
      v119 = (float *)(v118 + 228);
      do
      {
        v121 = *v119;
        v122 = v121 < -200.0;
        v123 = 0;
        v124 = v121 == -200.0;
        if ( (v120 & 0x4100) == 0 )
          break;
        --v116;
        --v119;
      }
      while ( v116 > 17 );
      j = v116;
      v50 = v143 + 1;
      v143 = v50;
      *(float *)(v118 + 4) = (float)v116;
    }
    while ( v50 < 8 );
    v41 = v140;
    v144 = v140;
    v141 = (int)(v101 + 1);
  }
  while ( v140 < 17 );
  return v135;
}


//======================================================================
// sub_692BA0
// entry 00692ba0  size 41  status ok
//======================================================================

void __cdecl sub_692BA0(float *a1, int a2)
{
  float *v2; // ecx
  int v3; // edx
  int v4; // esi

  v2 = a1;
  v3 = a2 - (_DWORD)a1;
  v4 = 56;
  do
  {
    if ( *(float *)((char *)v2 + v3) < (double)*v2 )
      *v2 = *(float *)((char *)v2 + v3);
    ++v2;
    --v4;
  }
  while ( v4 );
}


//======================================================================
// sub_692BD0
// entry 00692bd0  size 43  status ok
//======================================================================

int __cdecl sub_692BD0(float *a1, int a2)
{
  float *v2; // ecx
  int v3; // edx
  int v4; // esi
  __int16 v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int result; // eax

  v2 = a1;
  v3 = a2 - (_DWORD)a1;
  v4 = 56;
  do
  {
    v6 = *(float *)((char *)v2 + v3);
    v7 = v6 < *v2;
    v8 = 0;
    v9 = v6 == *v2;
    result = v5 & 0x4100;
    if ( (v5 & 0x4100) == 0 )
    {
      result = *(_DWORD *)((char *)v2 + v3);
      *(_DWORD *)v2 = result;
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}


//======================================================================
// sub_692C00
// entry 00692c00  size 24  status ok
//======================================================================

int __cdecl sub_692C00(int a1, float a2)
{
  int result; // eax
  double v3; // st7

  for ( result = 0; result < 56; *(float *)(a1 + 4 * result - 4) = v3 )
    v3 = a2 + *(float *)(a1 + 4 * result++);
  return result;
}


//======================================================================
// sub_692C20
// entry 00692c20  size 192  status ok
//======================================================================

int __cdecl sub_692C20(void **a1)
{
  int i; // ebx
  int j; // esi
  int k; // esi
  int result; // eax

  if ( a1 )
  {
    if ( a1[4] )
      free(a1[4]);
    if ( a1[5] )
      free(a1[5]);
    if ( a1[6] )
      free(a1[6]);
    if ( a1[2] )
    {
      for ( i = 0; i < 68; i += 4 )
      {
        for ( j = 0; j < 32; j += 4 )
          free(*(void **)(*(_DWORD *)((char *)a1[2] + i) + j));
        free(*(void **)((char *)a1[2] + i));
      }
      free(a1[2]);
    }
    if ( a1[3] )
    {
      for ( k = 0; k < 12; k += 4 )
        free(*(void **)((char *)a1[3] + k));
      free(a1[3]);
    }
    memset(a1, 0, 0x30u);
    return 0;
  }
  return result;
}


//======================================================================
// sub_692CE0
// entry 00692ce0  size 96  status ok
//======================================================================

int *__cdecl sub_692CE0(int *a1, int *a2, int a3, int a4, int a5)
{
  int *result; // eax
  int v6; // ecx
  int v7; // edi
  bool v8; // cc
  int v9; // ebx
  int v10; // ecx
  int v11; // [esp+10h] [ebp+4h]

  result = a1;
  v6 = *a1;
  v7 = a5;
  v8 = a5 <= *a1;
  v11 = *a1;
  if ( !v8 )
    v7 = v6;
  v9 = 0;
  if ( v7 > 0 )
  {
    result = a2;
    v9 = v7;
    do
    {
      v10 = *(int *)((char *)result++ + a3 - (_DWORD)a2);
      --v7;
      *(float *)((char *)result + a4 - (_DWORD)a2 - 4) = flt_787450[v10] * *((float *)result - 1);
    }
    while ( v7 );
    v6 = v11;
  }
  if ( v9 < v6 )
  {
    memset((void *)(a4 + 4 * v9), 0, 4 * (v6 - v9));
    return 0;
  }
  return result;
}


//======================================================================
// sub_692D40
// entry 00692d40  size 237  status ok
//======================================================================

int __cdecl sub_692D40(int *a1, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  void *v5; // esp
  int v6; // edi
  int v7; // ecx
  float *v8; // eax
  double v9; // st7
  __int64 v10; // rax
  float *v11; // eax
  int v12; // edx
  double v13; // st7
  _BYTE *v14; // ebx
  _BYTE v16[12]; // [esp+0h] [ebp-10h] BYREF
  _BYTE *v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+20h] [ebp+10h]

  v3 = *a1;
  v4 = 4 * *a1 + 3;
  LOBYTE(v4) = v4 & 0xFC;
  v5 = alloca(v4);
  v6 = a3;
  sub_692E30(*a1, a1[6], a2, a3, 140.0, -1);
  if ( v3 > 0 )
  {
    v7 = a2 - a3;
    v8 = (float *)a3;
    v17 = &v16[-a3];
    v18 = v3;
    do
    {
      v9 = *(float *)((char *)v8 + v7) - *v8;
      *(float *)((char *)++v8 + (_DWORD)v17 - 4) = v9;
      --v18;
    }
    while ( v18 );
  }
  LODWORD(v10) = sub_692E30(v3, a1[6], (int)v16, v6, 0.0, *(_DWORD *)(a1[1] + 128));
  if ( v3 > 0 )
  {
    v11 = (float *)v16;
    v12 = v3;
    do
    {
      v13 = *(float *)((char *)v11 + a2 - (_DWORD)v16) - *v11;
      ++v11;
      --v12;
      *(v11 - 1) = v13;
    }
    while ( v12 );
    v14 = &v16[-v6];
    do
    {
      v10 = (__int64)(*(float *)v6 + 0.5);
      if ( (int)v10 < 40 )
      {
        if ( (int)v10 < 0 )
          LODWORD(v10) = 0;
      }
      else
      {
        LODWORD(v10) = 39;
      }
      v6 += 4;
      --v3;
      *(float *)(v6 - 4) = *(float *)(a1[1] + 4 * v10 + 336) + *(float *)&v14[v6 - 4];
    }
    while ( v3 );
  }
  return v10;
}


//======================================================================
// sub_692E30
// entry 00692e30  size 1447  status ok
//======================================================================

void __cdecl sub_692E30(int a1, float a2, float *a3, int a4, float a5, int a6)
{
  int v6; // eax
  void *v7; // esp
  int v8; // eax
  void *v9; // esp
  int v10; // eax
  void *v11; // esp
  int v12; // eax
  void *v13; // esp
  int v14; // eax
  void *v15; // esp
  double v16; // st7
  double v17; // st6
  double v19; // st5
  double v20; // st5
  double v21; // st4
  double v22; // st3
  float *v23; // ecx
  double v24; // st2
  float v25; // eax
  double v26; // st0
  bool v27; // zf
  float v28; // eax
  int v29; // ecx
  double v30; // st7
  int v31; // ecx
  int v32; // eax
  double v33; // st6
  double v34; // st5
  double v35; // st3
  double v36; // st2
  double v37; // st6
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  double v42; // st6
  double v43; // st3
  double v44; // st2
  double v45; // st6
  float v46; // eax
  int v47; // edx
  int v48; // ecx
  double v49; // st6
  double v50; // st5
  int v51; // edi
  double v52; // st7
  int v53; // edx
  int v54; // eax
  int v55; // ecx
  double v56; // st6
  double v57; // st5
  double v58; // st4
  double v59; // st3
  double v60; // st2
  double v61; // st6
  double v62; // st5
  bool v63; // sf
  int v64; // ebx
  int v65; // ecx
  int v66; // ecx
  int v67; // eax
  int i; // edx
  double v69; // st6
  double v70; // st5
  double v71; // st4
  double v72; // st3
  double v73; // st2
  double v74; // st5
  double v75; // st6
  double v76; // st5
  int v77; // [esp+0h] [ebp-34h] BYREF
  int v78; // [esp+4h] [ebp-30h] BYREF
  int *v79; // [esp+Ch] [ebp-28h]
  int v80; // [esp+10h] [ebp-24h]
  int *v81; // [esp+14h] [ebp-20h]
  float v82; // [esp+18h] [ebp-1Ch]
  int v83; // [esp+1Ch] [ebp-18h]
  char *v84; // [esp+20h] [ebp-14h]
  float v85; // [esp+24h] [ebp-10h]
  float *v86; // [esp+28h] [ebp-Ch]
  int v87; // [esp+2Ch] [ebp-8h]
  float v88; // [esp+30h] [ebp-4h]
  int v89; // [esp+40h] [ebp+Ch]
  int v90; // [esp+40h] [ebp+Ch]
  float v91; // [esp+44h] [ebp+10h]
  float v92; // [esp+44h] [ebp+10h]

  v6 = 4 * a1 + 3;
  LOBYTE(v6) = v6 & 0xFC;
  v7 = alloca(v6);
  v8 = 4 * a1 + 3;
  LOBYTE(v8) = (4 * a1 + 3) & 0xFC;
  v9 = alloca(v8);
  v10 = 4 * a1 + 3;
  v81 = &v77;
  LOBYTE(v10) = (4 * a1 + 3) & 0xFC;
  v11 = alloca(v10);
  v79 = &v77;
  v12 = 4 * a1 + 3;
  LOBYTE(v12) = v12 & 0xFC;
  v13 = alloca(v12);
  v86 = (float *)&v77;
  v14 = 4 * a1 + 3;
  LOBYTE(v14) = v14 & 0xFC;
  v15 = alloca(v14);
  v16 = 0.0;
  v17 = 0.0;
  v19 = a5 + *a3;
  v84 = (char *)&v77;
  v91 = v19;
  if ( v19 < 1.0 )
    v91 = 1.0;
  v20 = v91 * v91 * 0.5;
  *(float *)&v80 = v20;
  v82 = v20;
  v21 = *(float *)&v80;
  v22 = v82 * v91;
  v92 = 1.0;
  *v86 = v22;
  v77 = 0;
  if ( a1 > 1 )
  {
    v80 = (char *)a3 - (char *)&v77;
    v23 = (float *)&v78;
    v85 = 0.0;
    v87 = (char *)v86 - (char *)&v77;
    LODWORD(v88) = v84 - (char *)&v77;
    v83 = a1 - 1;
    do
    {
      v24 = a5 + *(float *)((char *)v23 + v80);
      if ( v24 < 1.0 )
        v24 = 1.0;
      v25 = v85;
      ++v23;
      v20 = v20 + v24 * v24;
      v26 = v92 * (v24 * v24);
      v82 = v26;
      v21 = v21 + v26;
      v17 = v17 + v92 * v92 * (v24 * v24);
      v22 = v22 + v24 * v24 * v24;
      v16 = v16 + v82 * v24;
      *(v23 - 1) = v20;
      *(v23 - 1) = v21;
      *(float *)((char *)v23 + LODWORD(v25) - 4) = v17;
      *(float *)((char *)v23 + v87 - 4) = v22;
      *(float *)((char *)v23 + LODWORD(v88) - 4) = v16;
      v27 = v83-- == 1;
      v92 = v92 + 1.0;
    }
    while ( !v27 );
  }
  v28 = a2;
  v87 = 0;
  v29 = *(__int16 *)(LODWORD(a2) + 2);
  v30 = 0.0;
  if ( v29 < 0 )
  {
    *(float *)&v83 = a2;
    *(float *)&v80 = a2;
    LODWORD(v82) = a4 - LODWORD(a2);
    do
    {
      v31 = -4 * v29;
      v32 = (unsigned __int16)*(_DWORD *)LODWORD(v28);
      v33 = *(float *)((char *)&v77 + v31) + *((float *)&v77 + v32);
      v34 = *((float *)&v77 + v32) - *(float *)((char *)&v77 + v31);
      v35 = v86[v31 / 4u] + v86[v32];
      v36 = *(float *)&v84[4 * v32] - *(float *)&v84[v31];
      v88 = v35 * v33 - v36 * v34;
      v92 = v36 * v33 - v35 * v34;
      v85 = v33 * v33 - v34 * v34;
      v37 = (v92 * v30 + v88) / v85;
      if ( v37 < 0.0 )
        v37 = 0.0;
      LODWORD(v28) = v80 + 4;
      v38 = v87 + 1;
      *(float *)&v80 = v28;
      *(float *)(LODWORD(v82) + LODWORD(v28) - 4) = v37 - a5;
      v29 = *(__int16 *)(LODWORD(v28) + 2);
      v30 = v30 + 1.0;
      v87 = v38;
    }
    while ( v29 < 0 );
    v28 = a2;
  }
  v39 = *(__int16 *)(LODWORD(v28) + 4 * v87 + 2);
  v40 = a1;
  v83 = LODWORD(v28) + 4 * v87;
  v41 = (unsigned __int16)*(_DWORD *)v83;
  if ( v41 < a1 )
  {
    v80 = v83;
    LODWORD(v82) = a4 - LODWORD(a2);
    do
    {
      v42 = *((float *)&v77 + v41) - *((float *)&v77 + v39);
      v43 = v86[v41] - v86[v39];
      v44 = *(float *)&v84[4 * v41] - *(float *)&v84[4 * v39];
      v88 = v43 * v42 - v44 * v42;
      v92 = v44 * v42 - v43 * v42;
      v85 = v42 * v42 - v42 * v42;
      v45 = (v92 * v30 + v88) / v85;
      if ( v45 < 0.0 )
        v45 = 0.0;
      LODWORD(v46) = v80 + 4;
      v47 = v87 + 1;
      *(float *)&v80 = v46;
      *(float *)(LODWORD(v46) + LODWORD(v82) - 4) = v45 - a5;
      v39 = *(__int16 *)(LODWORD(v46) + 2);
      v30 = v30 + 1.0;
      v41 = *(_DWORD *)LODWORD(v46);
      v87 = v47;
      v40 = a1;
      v41 = (unsigned __int16)v41;
    }
    while ( (unsigned __int16)v41 < a1 );
  }
  v48 = v87;
  if ( v87 < v40 )
  {
    v49 = 1.0 / v85;
    do
    {
      v50 = (v92 * v30 + v88) * v49;
      if ( v50 < 0.0 )
        v50 = 0.0;
      ++v48;
      *(float *)(a4 + 4 * v48 - 4) = v50 - a5;
      v30 = v30 + 1.0;
    }
    while ( v48 < v40 );
  }
  if ( a6 > 0 )
  {
    v51 = 0;
    v52 = 0.0;
    v53 = a6 / 2;
    if ( a6 / 2 - a6 >= 0 )
    {
      v61 = v85;
    }
    else
    {
      v54 = 4 * v53;
      LODWORD(v82) = v53 - a6;
      v80 = 4 * v53;
      v55 = -4 * (a6 / 2 - a6);
      v89 = 4 * (a6 - v53);
      do
      {
        v56 = *(float *)((char *)&v77 + v54) + *(float *)((char *)&v77 + v55);
        v57 = *(float *)((char *)v81 + v54) - *(float *)((char *)v81 + v55);
        v58 = *(float *)((char *)v79 + v54) + *(float *)((char *)v79 + v55);
        v59 = *(float *)((char *)v86 + v54) + *(float *)((char *)v86 + v55);
        v60 = *(float *)&v84[v54] - *(float *)&v84[v55];
        v88 = v59 * v58 - v60 * v57;
        v92 = v60 * v56 - v59 * v57;
        v61 = v56 * v58 - v57 * v57;
        v62 = (v92 * v52 + v88) / v61 - a5;
        if ( v62 < *(float *)(a4 + 4 * v51) )
          *(float *)(a4 + 4 * v51) = v62;
        ++v51;
        v55 = v89 - 4;
        v54 = v80 + 4;
        v52 = v52 + 1.0;
        v63 = LODWORD(v82) + 1 < 0;
        v89 -= 4;
        v80 += 4;
        ++LODWORD(v82);
      }
      while ( v63 );
    }
    v64 = v53 + v51;
    v65 = a1;
    if ( v53 + v51 < a1 )
    {
      v66 = 4 * (v53 + v51 - a6);
      v80 = v53 + v51;
      v67 = 4 * v64;
      v90 = 4 * v64;
      for ( i = 4 * (v51 + v53 - a6); ; i += 4 )
      {
        v69 = *(float *)((char *)&v77 + v67) - *(float *)((char *)&v77 + v66);
        v70 = *(float *)((char *)v81 + v67) - *(float *)((char *)v81 + v66);
        v71 = *(float *)((char *)v79 + v67) - *(float *)((char *)v79 + v66);
        v72 = *(float *)((char *)v86 + v67) - *(float *)((char *)v86 + v66);
        v73 = *(float *)&v84[v67] - *(float *)&v84[v66];
        v88 = v72 * v71 - v73 * v70;
        v92 = v73 * v69 - v72 * v70;
        v61 = v69 * v71 - v70 * v70;
        v74 = (v92 * v52 + v88) / v61 - a5;
        if ( v74 < *(float *)(a4 + 4 * v51) )
          *(float *)(a4 + 4 * v51) = v74;
        ++v51;
        v67 = v90 + 4;
        v66 = i + 4;
        v90 += 4;
        v52 = v52 + 1.0;
        if ( ++v80 >= a1 )
          break;
      }
      v65 = a1;
    }
    if ( v51 < v65 )
    {
      v75 = 1.0 / v61;
      do
      {
        v76 = (v92 * v52 + v88) * v75 - a5;
        if ( v76 < *(float *)(a4 + 4 * v51) )
          *(float *)(a4 + 4 * v51) = v76;
        ++v51;
        v52 = v52 + 1.0;
      }
      while ( v51 < v65 );
    }
  }
}


//======================================================================
// sub_6933E0
// entry 006933e0  size 155  status ok
//======================================================================

int __cdecl sub_6933E0(int *a1, int a2, int a3, float a4, float a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  void *v8; // esp
  double v9; // st7
  int v10; // eax
  int v11; // edx
  int i; // eax
  _DWORD v14[3]; // [esp+0h] [ebp-Ch] BYREF

  v5 = a1[10];
  v6 = *a1;
  v7 = 4 * v5 + 3;
  LOBYTE(v7) = v7 & 0xFC;
  v8 = alloca(v7);
  v9 = a5 + *(float *)(a1[1] + 4);
  v10 = 0;
  if ( v5 > 0 )
  {
    do
      v14[v10++] = -971228160;
    while ( v10 < a1[10] );
  }
  v11 = a1[1];
  if ( v9 < *(float *)(v11 + 8) )
    v9 = *(float *)(v11 + 8);
  for ( i = 0; i < v6; *(float *)(a3 + 4 * i - 4) = v9 + *(float *)(a1[4] + 4 * i - 4) )
    ++i;
  sub_693480((int)a1, a1[2], a2, a3, (int)v14, a4);
  return sub_693620(a1, v14, a3);
}


//======================================================================
// sub_693480
// entry 00693480  size 232  status ok
//======================================================================

int __cdecl sub_693480(int *a1, int a2, int a3, int a4, int a5, float a6)
{
  int v7; // esi
  int result; // eax
  int v9; // ebx
  bool v10; // cc
  int v11; // ebp
  double v12; // st7
  int v13; // edx
  int v14; // ebx
  _DWORD *v15; // ecx
  __int16 v16; // fps
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  int v20; // edx
  float v21; // [esp+Ch] [ebp-4h]
  int v22; // [esp+14h] [ebp+4h]
  float v23; // [esp+28h] [ebp+18h]

  v7 = 0;
  result = a1[1];
  v9 = *a1;
  v10 = *a1 <= 0;
  v22 = *a1;
  v21 = *(float *)(result + 496) - a6;
  if ( !v10 )
  {
    do
    {
      v11 = a1[5];
      v12 = *(float *)(a3 + 4 * v7);
      v13 = *(_DWORD *)(v11 + 4 * v7);
      v23 = *(float *)(a3 + 4 * v7);
      if ( v7 + 1 < v9 )
      {
        v14 = v7 + 1;
        v15 = (_DWORD *)(v11 + 4 * (v7 + 1));
        do
        {
          if ( *v15 != v13 )
            break;
          ++v7;
          ++v15;
          ++v14;
          if ( v12 < *(float *)(a3 + 4 * v7) )
            v12 = *(float *)(a3 + 4 * v7);
        }
        while ( v14 < v22 );
        v23 = v12;
        v9 = v22;
      }
      v17 = v12 + 6.0 < *(float *)(a4 + 4 * v7);
      v18 = 0;
      v19 = v12 + 6.0 == *(float *)(a4 + 4 * v7);
      result = v16 & 0x4100;
      if ( (v16 & 0x4100) == 0 )
      {
        v20 = v13 >> a1[8];
        if ( v20 < 17 )
        {
          if ( v20 < 0 )
            v20 = 0;
        }
        else
        {
          v20 = 16;
        }
        result = sub_693570(a5, *(_DWORD *)(a2 + 4 * v20), v23, *(_DWORD *)(v11 + 4 * v7) - a1[7], a1[10], a1[9], v21);
      }
      ++v7;
    }
    while ( v7 < v9 );
  }
  return result;
}


//======================================================================
// sub_693570
// entry 00693570  size 173  status ok
//======================================================================

int __cdecl sub_693570(int a1, int a2, float a3, int a4, int a5, int a6, float a7)
{
  __int64 v7; // rax
  int v8; // eax
  float *v9; // edi
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rax
  int i; // ecx
  __int16 v14; // fps
  double v15; // st7
  bool v16; // c0
  char v17; // c2
  bool v18; // c3

  v7 = (__int64)((a3 + a7 - 30.0) * 0.1000000014901161);
  v8 = (int)v7 <= 0 ? 0 : v7;
  if ( v8 >= 7 )
    v8 = 7;
  v9 = *(float **)(a2 + 4 * v8);
  v10 = (__int64)v9[1];
  v11 = (__int64)((*v9 - 16.0) * (double)a6 + (double)a4 - (double)(a6 >> 1));
  v12 = (__int64)*v9;
  for ( i = v12; i < v10; ++i )
  {
    if ( v11 > 0 )
    {
      v15 = a3 + v9[i + 2];
      v16 = v15 < *(float *)(a1 + 4 * v11);
      v17 = 0;
      v18 = v15 == *(float *)(a1 + 4 * v11);
      if ( (v14 & 0x4100) == 0 )
        *(float *)(a1 + 4 * v11) = v15;
    }
    LODWORD(v12) = a5;
    v11 += a6;
    if ( v11 >= a5 )
      break;
  }
  return v12;
}


//======================================================================
// sub_693620
// entry 00693620  size 320  status ok
//======================================================================

int __cdecl sub_693620(int *a1, int a2, int a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // edx
  int v7; // ebp
  __int16 v8; // fps
  int v9; // ebx
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  int v13; // ecx
  __int16 v14; // fps
  double v15; // st7
  bool v16; // c0
  char v17; // c2
  bool v18; // c3
  int i; // ebp
  int result; // eax
  int v21; // [esp+Ch] [ebp-4h]
  float v22; // [esp+14h] [ebp+4h]
  float j; // [esp+18h] [ebp+8h]

  v4 = 0;
  v5 = a1[9];
  sub_693760(a2, v5, a1[10]);
  v6 = *(_DWORD *)a1[5] - (v5 >> 1) - a1[7];
  if ( *a1 > 1 )
  {
    do
    {
      v7 = a1[7];
      v22 = *(float *)(a2 + 4 * v6);
      v9 = a1[1];
      v10 = v22 < (double)*(float *)(v9 + 32);
      v11 = 0;
      v12 = v22 == *(float *)(v9 + 32);
      v13 = ((*(_DWORD *)(a1[5] + 4 * v4) + *(_DWORD *)(a1[5] + 4 * v4 + 4)) >> 1) - v7;
      if ( (v8 & 0x4100) == 0 )
        v22 = *(float *)(v9 + 32);
      if ( v6 + 1 <= v13 )
      {
        v21 = v6 + 1;
        do
        {
          ++v6;
          ++v21;
          v15 = *(float *)(a2 + 4 * v6);
          v16 = v15 < -9999.0;
          v17 = 0;
          v18 = v15 == -9999.0;
          if ( (v14 & 0x4100) == 0 && *(float *)(a2 + 4 * v6) < (double)v22 || v22 == -9999.0 )
            v22 = *(float *)(a2 + 4 * v6);
        }
        while ( v21 <= v13 );
      }
      for ( i = v6 + v7; v4 < *a1; ++v4 )
      {
        if ( *(_DWORD *)(a1[5] + 4 * v4) > i )
          break;
        if ( *(float *)(a3 + 4 * v4) < (double)v22 )
          *(float *)(a3 + 4 * v4) = v22;
      }
    }
    while ( v4 + 1 < *a1 );
  }
  result = *a1;
  for ( j = *(float *)(a2 + 4 * a1[10] - 4); v4 < *a1; ++v4 )
  {
    if ( *(float *)(a3 + 4 * v4) < (double)j )
      *(float *)(a3 + 4 * v4) = j;
    result = *a1;
  }
  return result;
}


//======================================================================
// sub_693760
// entry 00693760  size 338  status ok
//======================================================================

int __cdecl sub_693760(float *a1, int a2, int a3)
{
  int v3; // eax
  void *v4; // esp
  int v5; // eax
  void *v6; // esp
  float *v7; // ebx
  int v8; // ecx
  int v9; // esi
  __int64 v10; // rax
  float *v11; // esi
  __int16 v12; // fps
  double v13; // st7
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  int v17; // eax
  bool v18; // cc
  int v20; // [esp+0h] [ebp-20h] BYREF
  _BYTE v21[8]; // [esp+4h] [ebp-1Ch] BYREF
  _BYTE *v22; // [esp+Ch] [ebp-14h]
  _BYTE *v23; // [esp+10h] [ebp-10h]
  float *v24; // [esp+14h] [ebp-Ch]
  _DWORD *v25; // [esp+18h] [ebp-8h]
  float *v26; // [esp+1Ch] [ebp-4h]

  v3 = 4 * a3 + 3;
  LOBYTE(v3) = v3 & 0xFC;
  v4 = alloca(v3);
  v5 = 4 * a3 + 3;
  LOBYTE(v5) = (4 * a3 + 3) & 0xFC;
  v6 = alloca(v5);
  v7 = (float *)&v20;
  v8 = 0;
  v9 = 0;
  v10 = (unsigned int)a3;
  v24 = (float *)&v20;
  v23 = 0;
  if ( a3 > 0 )
  {
    v26 = a1;
    do
    {
      if ( v8 >= 2 )
      {
        v11 = &v7[v8 - 1];
        v25 = &v21[4 * v8 - 12];
        v22 = (_BYTE *)((char *)&v20 - (char *)v7);
        while ( *v26 >= (double)*v11 )
        {
          if ( SHIDWORD(v10) >= a2 + *(_DWORD *)((char *)v11 + (_DWORD)v22)
            || v8 <= 1
            || *v11 > (double)*(v11 - 1)
            || SHIDWORD(v10) >= a2 + *v25 )
          {
            v7 = v24;
            break;
          }
          v7 = v24;
          --v8;
          --v11;
          --v25;
        }
        v9 = (int)v23;
      }
      LODWORD(v10) = v26;
      *(_DWORD *)&v21[4 * v8++ - 4] = HIDWORD(v10)++;
      v7[v8 - 1] = *(float *)v10;
      ++v26;
      LODWORD(v10) = a3;
    }
    while ( SHIDWORD(v10) < a3 );
  }
  v25 = 0;
  if ( v8 > 0 )
  {
    HIDWORD(v10) = v21;
    v23 = v21;
    v22 = (_BYTE *)((char *)v7 - (char *)&v20);
    do
    {
      if ( (int)v25 >= v8 - 1
        || (v13 = *(float *)&v22[HIDWORD(v10)], v14 = v13 < *v7, v15 = 0, v16 = v13 == *v7, (v12 & 0x4100) != 0) )
      {
        v17 = *(_DWORD *)(HIDWORD(v10) - 4) + a2 + 1;
      }
      else
      {
        v17 = *(_DWORD *)HIDWORD(v10);
      }
      if ( v17 > a3 )
        v17 = a3;
      if ( v9 < v17 )
      {
        do
          a1[v9++] = *v7;
        while ( v9 < v17 );
        HIDWORD(v10) = v23;
      }
      HIDWORD(v10) += 4;
      LODWORD(v10) = (char *)v25 + 1;
      ++v7;
      v18 = (int)v25 + 1 < v8;
      v25 = (_DWORD *)((char *)v25 + 1);
      v23 = (_BYTE *)HIDWORD(v10);
    }
    while ( v18 );
  }
  return v10;
}


//======================================================================
// sub_6938C0
// entry 006938c0  size 142  status ok
//======================================================================

int __cdecl sub_6938C0(int *a1, int a2, float *a3, int a4, int a5)
{
  unsigned __int64 v6; // rax
  float *v7; // ecx
  unsigned int v8; // esi
  __int16 v9; // fps
  double v10; // st7
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  __int16 v14; // fps
  bool v15; // c0
  char v16; // c2
  bool v17; // c3
  float v19; // [esp+4h] [ebp-8h]
  int v20; // [esp+8h] [ebp-4h]
  float v21; // [esp+10h] [ebp+4h]

  v20 = *a1;
  v6 = (unsigned int)*a1;
  v19 = *(float *)(a1[1] + 4 * a4 + 12);
  if ( *a1 > 0 )
  {
    v7 = a3;
    do
    {
      v8 = a1[1];
      v10 = *(float *)(*(_DWORD *)(a1[3] + 4 * a4) + 4 * HIDWORD(v6)) + *(float *)((char *)v7 + a2 - (_DWORD)a3);
      v11 = v10 < *(float *)(v8 + 108);
      v12 = 0;
      v13 = v10 == *(float *)(v8 + 108);
      if ( (v9 & 0x4100) == 0 )
        v10 = *(float *)(v8 + 108);
      v21 = v19 + *v7;
      v15 = v10 < v21;
      v16 = 0;
      v17 = v10 == v21;
      if ( (v14 & 0x4100) != 0 )
        v10 = v21;
      *(float *)((char *)v7 + a5 - (_DWORD)a3) = v10;
      v6 = __PAIR64__(HIDWORD(v6), v20) + 0x100000000LL;
      ++v7;
    }
    while ( SHIDWORD(v6) < v20 );
  }
  return v6;
}


//======================================================================
// sub_693950
// entry 00693950  size 330  status ok
//======================================================================

int __usercall sub_693950@<eax>(double a1@<st0>, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  _DWORD *v7; // ebp
  int *v8; // ebx
  float *v9; // edi
  int v10; // esi
  int v11; // eax
  float *v12; // edi
  bool v13; // cc
  int v14; // [esp+8h] [ebp-18h]
  int v15; // [esp+Ch] [ebp-14h]
  int v16; // [esp+10h] [ebp-10h]
  _DWORD *v17; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+28h] [ebp+8h]
  float *v21; // [esp+2Ch] [ebp+Ch]

  v14 = *(_DWORD *)a4;
  result = sub_690E40(a2, 4 * *(_DWORD *)(a5 + 1156));
  v19 = result;
  v16 = 0;
  v20 = *(_DWORD *)(a3 + 60 * **(_DWORD **)(a4 + 4) + 160);
  if ( *(int *)(a5 + 1156) > 0 )
  {
    v7 = (_DWORD *)(a5 + 2184);
    v8 = (int *)result;
    v17 = (_DWORD *)(a5 + 2184);
    do
    {
      v9 = *(float **)(a6 + 4 * *(v7 - 256));
      v15 = *(_DWORD *)(a6 + 4 * *v7);
      v21 = v9;
      *v8 = sub_690E40(a2, 4 * v14);
      v10 = 0;
      if ( v20 > 0 )
      {
        v11 = v15 - (_DWORD)v9;
        for ( i = v15 - (_DWORD)v9; ; v11 = i )
        {
          sub_693AA0(*v9, *(float *)((char *)v9 + v11));
          ++v9;
          *(float *)(*v8 + 4 * v10++) = a1;
          if ( v10 >= v20 )
            break;
        }
        v9 = v21;
      }
      if ( v10 < v14 )
      {
        v12 = &v9[v10];
        do
        {
          sub_693B70(*v12, *(float *)((char *)v12 + v15 - (_DWORD)v21));
          ++v12;
          *(float *)(*v8 + 4 * v10++) = a1;
        }
        while ( v10 < v14 );
        v7 = v17;
      }
      ++v7;
      ++v8;
      v13 = ++v16 < *(_DWORD *)(a5 + 1156);
      v17 = v7;
    }
    while ( v13 );
    return v19;
  }
  return result;
}


//======================================================================
// sub_693AA0
// entry 00693aa0  size 207  status ok
//======================================================================

long double __cdecl sub_693AA0(float a1, float a2)
{
  __int16 v2; // fps
  __int16 v3; // ax
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  double v8; // st7
  __int16 v9; // fps
  double v10; // st7
  bool v11; // c0
  char v12; // c2
  bool v13; // c3

  v3 = v2;
  v5 = 0;
  if ( (v3 & 0x4100) != 0 )
  {
    v8 = a1;
    if ( a2 >= 0.0 )
    {
      v10 = -v8;
      v11 = v10 < a2;
      v12 = 0;
      v13 = v10 == a2;
      if ( (v9 & 0x4100) != 0 )
        return sqrt(a2 * a2 - a1 * a1);
      else
        return -sqrt(a1 * a1 - a2 * a2);
    }
    else
    {
      return -sqrt(v8 * a1 + a2 * a2);
    }
  }
  else
  {
    v6 = a2 == 0.0;
    v4 = a2 < 0.0;
    if ( (v2 & 0x4100) != 0 )
    {
      if ( -a2 >= a1 )
        return -sqrt(a2 * a2 - a1 * a1);
      else
        return sqrt(a1 * a1 - a2 * a2);
    }
    else
    {
      return sqrt(a1 * a1 + a2 * a2);
    }
  }
}


//======================================================================
// sub_693B70
// entry 00693b70  size 146  status ok
//======================================================================

long double __cdecl sub_693B70(float a1, float a2)
{
  __int16 v2; // fps
  __int16 v3; // ax
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  unsigned __int8 v8; // c0
  unsigned __int8 v9; // c2
  long double v10; // st7
  double v12; // st7
  __int16 v13; // fps
  double v14; // st7
  bool v15; // c0
  char v16; // c2
  bool v17; // c3

  v3 = v2;
  v5 = 0;
  if ( (v3 & 0x4100) != 0 )
  {
    v12 = a1;
    if ( a2 >= 0.0 )
    {
      v14 = -v12;
      v15 = v14 < a2;
      v16 = 0;
      v17 = v14 == a2;
      if ( (v13 & 0x4100) != 0 )
        goto LABEL_9;
      v12 = a1;
    }
    return -sqrt(v12 * a1 + a2 * a2);
  }
  v6 = a2 == 0.0;
  v4 = a2 < 0.0;
  if ( (v2 & 0x4100) != 0 )
  {
    v10 = a1 * a1 + a2 * a2;
    if ( !(v8 | v9) )
      return -sqrt(v10);
    return sqrt(v10);
  }
LABEL_9:
  v10 = a1 * a1 + a2 * a2;
  return sqrt(v10);
}


//======================================================================
// sub_693C10
// entry 00693c10  size 329  status ok
//======================================================================

int *__cdecl sub_693C10(_DWORD *a1, int *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  signed int v6; // esi
  int v7; // eax
  void *v8; // esp
  _BYTE *v9; // edi
  int v10; // ebx
  int v11; // eax
  signed int v12; // eax
  int v13; // ecx
  int v14; // edx
  signed int v15; // eax
  int v16; // ecx
  bool v17; // cc
  int v18; // ecx
  _BYTE v20[12]; // [esp+0h] [ebp-20h] BYREF
  int *v21; // [esp+Ch] [ebp-14h]
  int v22; // [esp+10h] [ebp-10h]
  _BYTE *v23; // [esp+14h] [ebp-Ch]
  int v24; // [esp+18h] [ebp-8h]
  int *v25; // [esp+1Ch] [ebp-4h]
  int v26; // [esp+2Ch] [ebp+Ch]

  if ( !*(_DWORD *)(a2[1] + 504) )
    return 0;
  v24 = *a2;
  v4 = sub_690E40(a1, 4 * *(_DWORD *)(a3 + 1156));
  v5 = a2[1];
  v21 = (int *)v4;
  v6 = *(_DWORD *)(v5 + 512);
  v7 = 4 * v6 + 3;
  LOBYTE(v7) = v7 & 0xFC;
  v8 = alloca(v7);
  v9 = v20;
  v10 = 0;
  v23 = v20;
  if ( *(int *)(a3 + 1156) > 0 )
  {
    v25 = v21;
    do
    {
      v11 = sub_690E40(a1, 4 * v24);
      *v25 = v11;
      v22 = 0;
      if ( v24 > 0 )
      {
        v26 = 0;
        do
        {
          v12 = 0;
          if ( v6 > 0 )
          {
            v13 = v26;
            do
            {
              v14 = v13 + *(_DWORD *)(a4 + 4 * v10);
              v13 += 4;
              *(_DWORD *)&v9[4 * v12++] = v14;
            }
            while ( v12 < v6 );
          }
          qsort(v9, v6, 4u, sub_693D60);
          v15 = 0;
          if ( v6 > 0 )
          {
            v16 = v26;
            do
            {
              v16 += 4;
              *(_DWORD *)(v16 + *v25 - 4) = (*(_DWORD *)&v9[4 * v15] - *(_DWORD *)(a4 + 4 * v10)) >> 2;
              v9 = v23;
              ++v15;
            }
            while ( v15 < v6 );
          }
          v17 = v6 + v22 < v24;
          v22 += v6;
          v26 += 4 * v6;
        }
        while ( v17 );
      }
      ++v10;
      v18 = *(_DWORD *)(a3 + 1156);
      ++v25;
    }
    while ( v10 < v18 );
  }
  return v21;
}


//======================================================================
// sub_693D60
// entry 00693d60  size 70  status ok
//======================================================================

int __cdecl sub_693D60(float **a1, float **a2)
{
  long double v2; // st7
  long double v3; // st6
  __int16 v4; // fps
  bool v5; // c0
  char v6; // c2
  bool v7; // c3

  v2 = fabs(**a1);
  v3 = fabs(**a2);
  v5 = v2 < v3;
  v6 = 0;
  v7 = v2 == v3;
  if ( (v4 & 0x4100) != 0 )
    return v2 < v3;
  else
    return (v2 < v3) - 1;
}


//======================================================================
// sub_693DB0
// entry 00693db0  size 173  status ok
//======================================================================

int __cdecl sub_693DB0(int *a1, int a2, int a3)
{
  int v3; // ebx
  signed int v4; // esi
  int v5; // eax
  void *v6; // esp
  int v7; // ebx
  int result; // eax
  signed int v9; // eax
  int v10; // ecx
  signed int v11; // eax
  int v12; // ecx
  _DWORD v13[3]; // [esp+0h] [ebp-10h] BYREF
  int v14; // [esp+Ch] [ebp-4h]
  int v15; // [esp+18h] [ebp+8h]

  v3 = a1[1];
  v15 = *a1;
  v4 = *(_DWORD *)(v3 + 512);
  v5 = 4 * v4 + 3;
  LOBYTE(v5) = v5 & 0xFC;
  v6 = alloca(v5);
  v7 = *(_DWORD *)(v3 + 508);
  result = v15;
  v14 = v7;
  if ( v7 < v15 )
  {
    while ( 1 )
    {
      if ( v7 + v4 > result )
        v4 = result - v7;
      v9 = 0;
      if ( v4 > 0 )
      {
        v10 = a2 + 4 * v7;
        do
        {
          v13[v9++] = v10;
          v10 += 4;
        }
        while ( v9 < v4 );
      }
      qsort(v13, v4, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_693D60);
      v11 = 0;
      if ( v4 > 0 )
      {
        v12 = a3 + 4 * (v7 - v14);
        do
        {
          v12 += 4;
          *(_DWORD *)(v12 - 4) = (v13[v11++] - a2) >> 2;
        }
        while ( v11 < v4 );
      }
      result = v15;
      v7 += v4;
      if ( v7 >= v15 )
        break;
      result = v15;
    }
  }
  return result;
}


//======================================================================
// sub_693E60
// entry 00693e60  size 553  status ok
//======================================================================

void __cdecl sub_693E60(int *a1, int a2, float *a3, int a4)
{
  double *v4; // ecx
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ebx
  float *v9; // esi
  int v10; // ecx
  int v11; // ecx
  double v12; // st7
  int v13; // eax
  double v14; // st6
  int v15; // edi
  int v16; // esi
  double v17; // st6
  __int16 v18; // fps
  bool v19; // c0
  char v20; // c2
  bool v21; // c3
  int v22; // edi
  float *v23; // esi
  int *v24; // ecx
  int v25; // eax
  int v26; // esi
  float v27; // [esp+18h] [ebp-20h]
  int v28; // [esp+1Ch] [ebp-1Ch]
  int v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h]
  int *v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+2Ch] [ebp-Ch]
  int *v33; // [esp+2Ch] [ebp-Ch]
  int v34; // [esp+30h] [ebp-8h]
  double *v35; // [esp+34h] [ebp-4h]

  v4 = (double *)a1[1];
  v5 = *a1;
  v6 = 0;
  v34 = *a1;
  v7 = *((_DWORD *)v4 + 127);
  v8 = *((_DWORD *)v4 + 128);
  v28 = 0;
  v35 = v4;
  v29 = v7;
  if ( v7 > *a1 )
  {
    v29 = *a1;
    v7 = *a1;
  }
  if ( *((_DWORD *)v4 + 125) )
  {
    if ( v7 > 0 )
    {
      v9 = a3;
      v10 = a2 - (_DWORD)a3;
      v32 = v7;
      v28 = v7;
      while ( 1 )
      {
        *v9 = floor(*(float *)((char *)v9 + v10) + 0.5);
        ++v9;
        if ( !--v32 )
          break;
        v10 = a2 - (_DWORD)a3;
      }
      v6 = v28;
      v7 = v29;
    }
    v11 = v8 + v6;
    if ( v8 + v6 <= v5 )
    {
      v30 = v8 + v6;
      v33 = (int *)(a4 + 4 * (v6 - v7));
      while ( 1 )
      {
        v12 = 0.0;
        v13 = v6;
        v27 = 0.0;
        if ( v6 < v11 )
        {
          do
          {
            ++v13;
            v14 = *(float *)(a2 + 4 * v13 - 4);
            v12 = v12 + v14 * v14;
          }
          while ( v13 < v11 );
          v27 = v12;
        }
        v15 = 0;
        if ( v8 <= 0 )
          goto LABEL_22;
        v31 = v33;
        while ( 1 )
        {
          v16 = *v31;
          v17 = *(float *)(a2 + 4 * *v31);
          v19 = v17 * v17 < 0.25;
          v20 = 0;
          v21 = v17 * v17 == 0.25;
          if ( (v18 & 0x100) != 0 )
            break;
          a3[v16] = floor(*(float *)(a2 + 4 * v16) + 0.5);
          v12 = v27 - *(float *)(a2 + 4 * v16) * *(float *)(a2 + 4 * v16);
LABEL_20:
          v6 = v28;
          v27 = v12;
          ++v15;
          ++v31;
          if ( v15 >= v8 )
            goto LABEL_21;
        }
        if ( v12 >= v35[65] )
          break;
        if ( v15 < v8 )
        {
          v24 = (int *)(a4 + 4 * (v6 + v15 - v29));
          v25 = v8 - v15;
          do
          {
            v26 = *v24++;
            --v25;
            a3[v26] = 0.0;
          }
          while ( v25 );
        }
LABEL_21:
        v11 = v30;
LABEL_22:
        v11 += v8;
        v6 += v8;
        v28 = v6;
        v30 = v11;
        v33 += v8;
        if ( v11 > v34 )
        {
          v5 = v34;
          goto LABEL_24;
        }
      }
      a3[v16] = sub_694090(*(_DWORD *)(a2 + 4 * v16));
      v12 = v27 - 1.0;
      goto LABEL_20;
    }
  }
LABEL_24:
  if ( v6 < v5 )
  {
    v22 = v5 - v6;
    v23 = &a3[v6];
    do
    {
      *v23 = floor(*(float *)((char *)v23 + a2 - (_DWORD)a3) + 0.5);
      ++v23;
      --v22;
    }
    while ( v22 );
  }
}


//======================================================================
// sub_694090
// entry 00694090  size 23  status ok
//======================================================================

double __cdecl sub_694090(int a1)
{
  return COERCE_FLOAT(a1 & 0x80000000 | 0x3F800000);
}


//======================================================================
// sub_6940B0
// entry 006940b0  size 972  status ok
//======================================================================

_DWORD *__cdecl sub_6940B0(int a1, int a2, int *a3, _DWORD *a4, int a5, int a6, _DWORD *a7, int a8, int a9, int a10)
{
  int v10; // ebx
  _DWORD *result; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  int v16; // edx
  int v17; // esi
  float *v18; // esi
  int v19; // ecx
  int v20; // ebx
  long double v21; // st7
  __int16 v22; // fps
  bool v23; // c0
  char v24; // c2
  bool v25; // c3
  long double v26; // st7
  __int16 v27; // fps
  bool v28; // c0
  char v29; // c2
  bool v30; // c3
  long double v31; // st7
  __int16 v32; // fps
  bool v33; // c0
  char v34; // c2
  bool v35; // c3
  long double v36; // st7
  __int16 v37; // fps
  bool v38; // c0
  char v39; // c2
  bool v40; // c3
  double v41; // st7
  bool v42; // zf
  int v43; // ecx
  int v44; // ebx
  __int16 v45; // fps
  int v46; // eax
  bool v47; // c0
  char v48; // c2
  bool v49; // c3
  int v50; // esi
  double v51; // st7
  int v52; // ecx
  bool v53; // cc
  int v54; // [esp+14h] [ebp-64h]
  float v55; // [esp+18h] [ebp-60h]
  _DWORD *v56; // [esp+1Ch] [ebp-5Ch]
  _DWORD *v57; // [esp+20h] [ebp-58h]
  int v58; // [esp+24h] [ebp-54h]
  int v59; // [esp+28h] [ebp-50h]
  int v60; // [esp+2Ch] [ebp-4Ch]
  int v61; // [esp+30h] [ebp-48h]
  int v62; // [esp+34h] [ebp-44h]
  float v63; // [esp+38h] [ebp-40h]
  float v64; // [esp+3Ch] [ebp-3Ch]
  int v65; // [esp+40h] [ebp-38h]
  int v66; // [esp+44h] [ebp-34h]
  int v67; // [esp+48h] [ebp-30h]
  int v68; // [esp+48h] [ebp-30h]
  int v69; // [esp+4Ch] [ebp-2Ch]
  int v70; // [esp+50h] [ebp-28h]
  int v71; // [esp+54h] [ebp-24h]
  int v72; // [esp+58h] [ebp-20h]
  int v73; // [esp+5Ch] [ebp-1Ch]
  int v74; // [esp+60h] [ebp-18h]
  int v75; // [esp+64h] [ebp-14h]
  int v76; // [esp+68h] [ebp-10h]
  int v77; // [esp+6Ch] [ebp-Ch]

  v10 = *a3;
  result = a4;
  v72 = *a3;
  v71 = 0;
  if ( (int)a4[289] > 0 )
  {
    result = a4 + 546;
    v57 = a7;
    v56 = a4 + 546;
    do
    {
      v12 = 4 * *(result - 256);
      if ( *(_DWORD *)(v12 + a9) || *(_DWORD *)(a9 + 4 * *result) )
      {
        v13 = 4 * *result;
        v14 = *(_DWORD *)(v13 + a5);
        v75 = *(_DWORD *)(v12 + a5);
        v65 = v14;
        v76 = v14 + 4 * v72;
        v61 = v75 + 4 * v72;
        v74 = *(_DWORD *)(v12 + a8);
        v73 = *(_DWORD *)(v13 + a8);
        v64 = dbl_787408[*(_DWORD *)(a2 + 4 * a1 + 252)];
        v63 = dbl_787408[*(_DWORD *)(a2 + 4 * a1 + 312)];
        v15 = (_DWORD *)a3[1];
        if ( v15[126] )
          v10 = v15[128];
        v54 = v10;
        v69 = *(_DWORD *)(a2 + 4 * (a1 + 12 * *v15 + 3 * *v15) + 132);
        *(_DWORD *)(v12 + a9) = 1;
        *(_DWORD *)(a9 + 4 * *v56) = 1;
        v16 = 0;
        v10 = *a3;
        v70 = 0;
        if ( *a3 > 0 )
        {
          v17 = 0;
          v62 = 0;
          do
          {
            v55 = 0.0;
            if ( v54 > 0 )
            {
              v77 = v74 - v14;
              v60 = v17;
              v18 = (float *)(v14 + v17);
              v19 = v75 - v14;
              v20 = v61 - v14;
              v66 = v16;
              v58 = v76 - v14;
              v59 = v75 - v14;
              v67 = v54;
              do
              {
                if ( v16 >= a10 )
                {
                  *(float *)((char *)v18 + v20) = 0.0;
                  *(float *)((char *)v18 + v58) = 0.0;
                }
                else
                {
                  if ( v16 >= v69 )
                  {
                    v21 = fabs(*(float *)((char *)v18 + v19));
                    v23 = v63 < v21;
                    v24 = 0;
                    v25 = v63 == v21;
                    if ( (v22 & 0x4100) == 0 )
                    {
                      v26 = fabs(*v18);
                      v28 = v63 < v26;
                      v29 = 0;
                      v30 = v63 == v26;
                      if ( (v27 & 0x4100) == 0 )
                        goto LABEL_17;
                    }
                  }
                  v31 = fabs(*(float *)((char *)v18 + v19));
                  v33 = v64 < v31;
                  v34 = 0;
                  v35 = v64 == v31;
                  if ( (v32 & 0x4100) != 0
                    || (v36 = fabs(*v18), v38 = v64 < v36, v39 = 0, v40 = v64 == v36, (v37 & 0x4100) != 0) )
                  {
                    sub_694480(*(float *)((char *)v18 + v19), *v18, (int)v18 + v20, (int)v18 + v58);
                    v19 = v59;
                  }
                  else
                  {
LABEL_17:
                    sub_694560(
                      *(float *)(*(_DWORD *)((char *)v57 + a6 - (_DWORD)a7) + v60),
                      *(_DWORD *)((char *)v18 + v77),
                      *(_DWORD *)((char *)v18 + v77 + v73 - v74),
                      (int)v18 + v20,
                      (int)v18 + v58);
                    v41 = floor(*(float *)((char *)v18 + v20) + 0.5);
                    v19 = v59;
                    if ( v41 == 0.0 )
                      v55 = *(float *)((char *)v18 + v20) * *(float *)((char *)v18 + v20) + v55;
                    v14 = v65;
                  }
                }
                ++v18;
                v60 += 4;
                v16 = v66 + 1;
                v42 = v67 == 1;
                ++v66;
                --v67;
              }
              while ( !v42 );
            }
            v43 = v54;
            if ( *(_DWORD *)(a3[1] + 504) )
            {
              v68 = 0;
              if ( v54 > 0 )
              {
                v44 = v62;
                do
                {
                  v46 = a3[1];
                  v47 = v55 < *(double *)(v46 + 520);
                  v48 = 0;
                  v49 = v55 == *(double *)(v46 + 520);
                  if ( (v45 & 0x100) != 0 )
                    break;
                  v50 = *(_DWORD *)(v44 + *v57);
                  if ( v50 < a10 && v50 >= v69 && floor(*(float *)(v61 + 4 * v50) + 0.5) == 0.0 )
                  {
                    v51 = sub_694090(*(_DWORD *)(v61 + 4 * v50));
                    *(float *)(v52 + 4 * v50) = v51;
                    v55 = v55 - 1.0;
                  }
                  v43 = v54;
                  v44 += 4;
                  ++v68;
                }
                while ( v68 < v54 );
              }
            }
            v16 = v43 + v70;
            v17 = 4 * v43 + v62;
            v70 = v16;
            v62 = v17;
            v10 = *a3;
          }
          while ( v16 < *a3 );
        }
        result = v56;
      }
      ++result;
      v53 = ++v71 < a4[289];
      v56 = result;
      ++v57;
    }
    while ( v53 );
  }
  return result;
}


//======================================================================
// sub_694480
// entry 00694480  size 210  status ok
//======================================================================

void __cdecl sub_694480(float a1, float a2, float *a3, float *a4)
{
  long double v4; // st7
  long double v5; // st6
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int v10; // esi
  __int16 v11; // fps
  double v12; // st7
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  double v16; // st7
  double v17; // st7
  __int16 v18; // fps
  bool v19; // c0
  char v20; // c2
  bool v21; // c3
  double v22; // st6
  long double v23; // st7

  v4 = fabs(*a3);
  v5 = fabs(*a4);
  v8 = 0;
  v7 = v4 < v5;
  v9 = v4 == v5;
  v10 = ((v6 & 0x4100) == 0) - (v4 < v5);
  if ( !v10 )
    v10 = 2 * (fabs(a2) < fabs(a1)) - 1;
  if ( v10 == 1 )
  {
    v12 = *a3;
    v13 = v12 < 0.0;
    v14 = 0;
    v15 = v12 == 0.0;
    if ( (v11 & 0x4100) != 0 )
      v16 = *a4 - *a3;
    else
      v16 = *a3 - *a4;
    *a4 = v16;
  }
  else
  {
    v17 = *a4;
    v19 = v17 < 0.0;
    v20 = 0;
    v21 = v17 == 0.0;
    if ( (v18 & 0x4100) != 0 )
      v22 = *a4 - *a3;
    else
      v22 = *a3 - *a4;
    *a4 = v22;
    *a3 = v17;
  }
  v23 = fabs(*a3);
  if ( v23 * 1.999899983406067 < *a4 )
  {
    *a4 = v23 * -2.0;
    *a3 = -*a3;
  }
}


//======================================================================
// sub_694560
// entry 00694560  size 101  status ok
//======================================================================

_DWORD *__cdecl sub_694560(float a1, int a2, int a3, float *a4, _DWORD *a5)
{
  unsigned int v5; // ebx

  v5 = abs32(a2 - a3);
  *a4 = (flt_787850[(31 - v5) & (((int)(31 - v5) < 0) - 1)] + 1.0)
      * flt_787450[(a2 > a3 ? 0 : a3) | a2 & ~((a2 > a3) - 1)]
      * a1;
  *a5 = 0;
  return a5;
}


//======================================================================
// sub_6945D0
// entry 006945d0  size 75  status ok
//======================================================================

double __cdecl sub_6945D0(int a1)
{
  double X; // [esp+0h] [ebp-8h]

  X = (double)(a1 & 0x1FFFFF);
  if ( a1 < 0 )
    X = -X;
  return ldexp(X, ((a1 >> 21) & 0x3FFu) - 788);
}


//======================================================================
// sub_694620
// entry 00694620  size 363  status ok
//======================================================================

void *__cdecl sub_694620(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  void *v6; // edx
  int v7; // eax
  int v8; // ebx
  unsigned int *v9; // edi
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // edx
  int i; // eax
  int v15; // ebx
  int *v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  void *Block; // [esp+10h] [ebp-88h]
  _DWORD v22[33]; // [esp+14h] [ebp-84h] BYREF

  v3 = a3;
  v4 = a3;
  if ( !a3 )
    v4 = a2;
  v5 = a1;
  v6 = malloc(4 * v4);
  memset(v22, 0, sizeof(v22));
  v7 = a2;
  v8 = 0;
  Block = v6;
  if ( a2 > 0 )
  {
    v9 = (unsigned int *)v6;
    while ( 1 )
    {
      v10 = *(_DWORD *)(a1 + 4 * v8);
      if ( v10 <= 0 )
      {
        if ( !v3 )
          ++v9;
      }
      else
      {
        v11 = v22[v10];
        if ( v10 < 32 && v11 >> v10 )
        {
          free(Block);
          return 0;
        }
        *v9++ = v11;
        v12 = v10;
        while ( 1 )
        {
          v13 = v22[v12];
          if ( (v13 & 1) != 0 )
            break;
          v22[v12--] = v13 + 1;
          if ( v12 <= 0 )
            goto LABEL_16;
        }
        if ( v12 == 1 )
          ++v22[1];
        else
          v22[v12] = 2 * v22[v12 - 1];
LABEL_16:
        for ( i = v10 + 1; i < 33; ++i )
        {
          if ( v22[i] >> 1 != v11 )
            break;
          v11 = v22[i];
          v22[i] = 2 * v22[i - 1];
        }
      }
      v7 = a2;
      if ( ++v8 >= a2 )
      {
        v6 = Block;
        break;
      }
      v3 = a3;
    }
  }
  v15 = 0;
  if ( v7 > 0 )
  {
    v16 = (int *)v6;
    do
    {
      v17 = *(_DWORD *)(v5 + 4 * v15);
      v18 = 0;
      v19 = 0;
      if ( v17 > 0 )
      {
        do
          v18 = ((unsigned int)*v16 >> v19++) & 1 | (2 * v18);
        while ( v19 < v17 );
        v5 = a1;
      }
      if ( !a3 || v17 )
        *v16++ = v18;
      ++v15;
    }
    while ( v15 < a2 );
    return Block;
  }
  return v6;
}


//======================================================================
// sub_694790
// entry 00694790  size 102  status ok
//======================================================================

int __cdecl sub_694790(int *a1)
{
  __int64 v1; // rax
  int v2; // ebx
  int v3; // esi
  int v4; // ecx
  int v5; // esi
  int v7; // [esp+1Ch] [ebp+4h]

  v1 = (__int64)floor(pow((double)a1[1], 1.0 / (double)*a1));
  v2 = *a1;
  v3 = a1[1];
  v7 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = 1;
      HIDWORD(v1) = 1;
      if ( v2 > 0 )
      {
        v5 = v2;
        do
        {
          v4 *= (_DWORD)v1;
          HIDWORD(v1) *= (_DWORD)v1 + 1;
          --v5;
        }
        while ( v5 );
        v3 = v7;
      }
      if ( v4 <= v3 )
        break;
      LODWORD(v1) = v1 - 1;
    }
    if ( SHIDWORD(v1) > v3 )
      break;
    LODWORD(v1) = v1 + 1;
  }
  return v1;
}


//======================================================================
// sub_694800
// entry 00694800  size 437  status ok
//======================================================================

float *__cdecl sub_694800(int *a1, int a2, int a3)
{
  int v4; // ebp
  int v5; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int j; // ebx
  long double v16; // st7
  float v17; // [esp+8h] [ebp-10h]
  float v18; // [esp+Ch] [ebp-Ch]
  float v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]
  float *v21; // [esp+1Ch] [ebp+4h]
  float k; // [esp+20h] [ebp+8h]
  int i; // [esp+20h] [ebp+8h]

  v4 = 0;
  v5 = a1[3];
  if ( v5 != 1 && v5 != 2 )
    return 0;
  v18 = sub_6945D0(a1[4]);
  v17 = sub_6945D0(a1[5]);
  v21 = (float *)calloc(a2 * *a1, 4u);
  if ( a1[3] == 1 )
  {
    v20 = sub_694790(a1);
    v12 = 0;
    for ( i = 0; v12 < a1[1]; i = v12 )
    {
      if ( !a3 || *(_DWORD *)(a1[2] + 4 * v12) )
      {
        v13 = *a1;
        v14 = 0;
        v19 = 0.0;
        for ( j = 1; v14 < *a1; ++v14 )
        {
          v16 = fabs((double)*(int *)(a1[8] + 4 * (v12 / j % v20))) * v17 + v19 + v18;
          if ( a1[7] )
            v19 = v16;
          if ( a3 )
            v21[v14 + v13 * *(_DWORD *)(a3 + 4 * v4)] = v16;
          else
            v21[v14 + v4 * v13] = v16;
          j *= v20;
          v13 = *a1;
          v12 = i;
        }
        ++v4;
      }
      ++v12;
    }
    return v21;
  }
  if ( a1[3] != 2 )
    return v21;
  v7 = 0;
  if ( a1[1] <= 0 )
    return v21;
  v8 = a3;
  do
  {
    if ( !v8 || *(_DWORD *)(a1[2] + 4 * v7) )
    {
      v9 = *a1;
      v10 = 0;
      for ( k = 0.0; v10 < *a1; ++v10 )
      {
        v11 = fabs((double)*(int *)(a1[8] + 4 * (v10 + v7 * v9))) * v17 + k + v18;
        if ( a1[7] )
          k = v11;
        v8 = a3;
        if ( a3 )
          v21[v10 + v9 * *(_DWORD *)(a3 + 4 * v4)] = v11;
        else
          v21[v10 + v4 * v9] = v11;
        v9 = *a1;
      }
      ++v4;
    }
    ++v7;
  }
  while ( v7 < a1[1] );
  return v21;
}


//======================================================================
// sub_6949C0
// entry 006949c0  size 193  status ok
//======================================================================

int __cdecl sub_6949C0(int a1)
{
  int result; // eax
  void **v2; // eax
  void **v3; // eax
  _DWORD *v4; // eax

  result = *(_DWORD *)(a1 + 48);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 32) )
      free(*(void **)(a1 + 32));
    if ( *(_DWORD *)(a1 + 8) )
      free(*(void **)(a1 + 8));
    v2 = *(void ***)(a1 + 36);
    if ( v2 )
    {
      free(*v2);
      free(*(void **)(*(_DWORD *)(a1 + 36) + 4));
      free(*(void **)(*(_DWORD *)(a1 + 36) + 8));
      free(*(void **)(*(_DWORD *)(a1 + 36) + 12));
      memset(*(void **)(a1 + 36), 0, 0x18u);
      free(*(void **)(a1 + 36));
    }
    v3 = *(void ***)(a1 + 40);
    if ( v3 )
    {
      free(*v3);
      free(*(void **)(*(_DWORD *)(a1 + 40) + 4));
      v4 = *(_DWORD **)(a1 + 40);
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      free(*(void **)(a1 + 40));
    }
    memset((void *)a1, 0, 0x34u);
    return 0;
  }
  return result;
}


//======================================================================
// sub_694A90
// entry 00694a90  size 29  status ok
//======================================================================

void __cdecl sub_694A90(void *Block)
{
  if ( *((_DWORD *)Block + 12) )
  {
    sub_6949C0((int)Block);
    free(Block);
  }
}


//======================================================================
// sub_694AB0
// entry 00694ab0  size 96  status ok
//======================================================================

int __cdecl sub_694AB0(void **a1)
{
  if ( a1[4] )
    free(a1[4]);
  if ( a1[5] )
    free(a1[5]);
  if ( a1[6] )
    free(a1[6]);
  if ( a1[7] )
    free(a1[7]);
  if ( a1[8] )
    free(a1[8]);
  memset(a1, 0, 0x2Cu);
  return 0;
}


//======================================================================
// sub_694B10
// entry 00694b10  size 83  status ok
//======================================================================

int __cdecl sub_694B10(int *a1, int *a2)
{
  memset(a1, 0, 0x2Cu);
  a1[3] = (int)a2;
  a1[1] = a2[1];
  a1[2] = a2[1];
  *a1 = *a2;
  a1[5] = (int)sub_694620(a2[2], a2[1], 0);
  a1[4] = (int)sub_694800(a2, a2[1], 0);
  return 0;
}


//======================================================================
// sub_694B70
// entry 00694b70  size 931  status ok
//======================================================================

int __cdecl sub_694B70(int *Block, int *a2)
{
  int v3; // ebx
  int *v4; // edi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // eax
  void *v9; // esp
  _BYTE *v10; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  void *v17; // esp
  int v18; // eax
  int v19; // ecx
  int *v20; // eax
  char *v21; // ecx
  int v22; // edx
  int v23; // ecx
  float *v24; // eax
  size_t v25; // ecx
  size_t v26; // ecx
  int j; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  _BYTE *v32; // eax
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // edi
  char v40; // dl
  int v41; // eax
  int v42; // ecx
  signed int v43; // edi
  unsigned int v44; // ebx
  int v45; // edi
  int v46; // eax
  unsigned int *v47; // ecx
  _DWORD *v48; // ecx
  _DWORD *v49; // eax
  unsigned int v50; // eax
  _BYTE v51[12]; // [esp+0h] [ebp-20h] BYREF
  int i; // [esp+Ch] [ebp-14h]
  _BYTE *v53; // [esp+10h] [ebp-10h]
  size_t Size; // [esp+14h] [ebp-Ch]
  int v55; // [esp+18h] [ebp-8h]
  _BYTE *v56; // [esp+1Ch] [ebp-4h]
  _DWORD *Blocka; // [esp+28h] [ebp+8h]
  int Blockb; // [esp+28h] [ebp+8h]
  int v59; // [esp+2Ch] [ebp+Ch]
  int v60; // [esp+2Ch] [ebp+Ch]

  v3 = 0;
  memset(Block, 0, 0x2Cu);
  v4 = a2;
  v5 = a2[1];
  if ( v5 > 0 )
  {
    v6 = (int *)a2[2];
    v7 = a2[1];
    do
    {
      if ( *v6 > 0 )
        ++v3;
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  Block[1] = v5;
  Block[2] = v3;
  *Block = *a2;
  Blocka = sub_694620(a2[2], a2[1], v3);
  Size = 4 * v3;
  v8 = 4 * v3 + 3;
  LOBYTE(v8) = v8 & 0xFC;
  v9 = alloca(v8);
  v10 = v51;
  v53 = v51;
  if ( Blocka )
  {
    if ( v3 > 0 )
    {
      v55 = (int)Blocka;
      i = v51 - (_BYTE *)Blocka;
      v56 = (_BYTE *)v3;
      do
      {
        v12 = sub_694F20(*(_DWORD *)v55);
        v13 = v55;
        v14 = i;
        *(_DWORD *)v55 = v12;
        v15 = (int)v56;
        *(_DWORD *)(v14 + v13) = v13;
        v55 = v13 + 4;
        v56 = (_BYTE *)(v15 - 1);
      }
      while ( v15 != 1 );
      v10 = v53;
    }
    qsort(v10, v3, 4u, sub_694F80);
    v16 = Size + 3;
    LOBYTE(v16) = (Size + 3) & 0xFC;
    v17 = alloca(v16);
    v56 = v51;
    Block[5] = (int)malloc(Size);
    v18 = 0;
    if ( v3 > 0 )
    {
      do
      {
        v19 = (int)v56;
        *(_DWORD *)&v56[4 * ((*(_DWORD *)&v53[4 * v18] - (int)Blocka) >> 2)] = v18;
        ++v18;
      }
      while ( v18 < v3 );
      v20 = (int *)v19;
      v21 = (char *)Blocka - v19;
      v53 = (_BYTE *)v3;
      for ( i = (int)v21; ; v21 = (char *)i )
      {
        v22 = *v20;
        v23 = *(int *)((char *)v20++ + (_DWORD)v21);
        *(_DWORD *)(Block[5] + 4 * v22) = v23;
        if ( !--v53 )
          break;
      }
      v4 = a2;
    }
    free(Blocka);
    v24 = sub_694800(v4, v3, (int)v56);
    v25 = Size;
    Block[4] = (int)v24;
    Block[6] = (int)malloc(v25);
    v26 = 0;
    for ( j = 0; j < v4[1]; ++j )
    {
      if ( *(int *)(v4[2] + 4 * j) > 0 )
      {
        v28 = *(_DWORD *)&v56[4 * v26++];
        *(_DWORD *)(Block[6] + 4 * v28) = j;
      }
    }
    Block[7] = (int)malloc(v26);
    v29 = 0;
    for ( Blockb = 0; v29 < v4[1]; ++v29 )
    {
      v30 = v4[2];
      v31 = *(_DWORD *)(v30 + 4 * v29);
      v32 = (_BYTE *)(v30 + 4 * v29);
      if ( v31 > 0 )
        *(_BYTE *)(*(_DWORD *)&v56[4 * Blockb++] + Block[7]) = *v32;
    }
    v33 = sub_699AA0(Block[2]) - 4;
    Block[9] = v33;
    if ( v33 < 5 )
      Block[9] = 5;
    if ( Block[9] > 8 )
      Block[9] = 8;
    v53 = (_BYTE *)(1 << Block[9]);
    Block[8] = (int)calloc((size_t)v53, 4u);
    v34 = 0;
    Block[10] = 0;
    v59 = 0;
    if ( Blockb > 0 )
    {
      v35 = Block[7];
      do
      {
        v36 = *(char *)(v35 + v34);
        if ( Block[10] < v36 )
          Block[10] = v36;
        if ( *(char *)(v35 + v34) <= Block[9] )
        {
          v37 = sub_694F20(*(_DWORD *)(Block[5] + 4 * v34));
          v38 = Block[9];
          i = v37;
          v35 = Block[7];
          v39 = 0;
          v40 = *(_BYTE *)(v35 + v34);
          v34 = v59;
          if ( 1 << (v38 - v40) > 0 )
          {
            do
            {
              v41 = v39++ << v40;
              *(_DWORD *)(Block[8] + 4 * (i | v41)) = v34 + 1;
              v35 = Block[7];
              v40 = *(_BYTE *)(v35 + v34);
              v34 = v59;
            }
            while ( v39 < 1 << (*((_BYTE *)Block + 36) - v40) );
          }
        }
        v59 = ++v34;
      }
      while ( v34 < Blockb );
    }
    v42 = 31 - Block[9];
    v43 = 0;
    v56 = 0;
    v55 = 0;
    v60 = 0;
    for ( i = -2 << v42; v43 < (int)v53; v60 = v43 )
    {
      v44 = v43 << (32 - Block[9]);
      if ( !*(_DWORD *)(Block[8] + 4 * sub_694F20(v44)) )
      {
        v45 = (int)v56;
        v46 = (int)(v56 + 1);
        if ( (int)(v56 + 1) < Blockb )
        {
          v47 = (unsigned int *)(Block[5] + 4 * v46);
          do
          {
            if ( *v47 > v44 )
              break;
            ++v45;
            ++v46;
            ++v47;
          }
          while ( v46 < Blockb );
          v56 = (_BYTE *)v45;
        }
        v48 = (_DWORD *)v55;
        if ( v55 < Blockb )
        {
          v49 = (_DWORD *)(Block[5] + 4 * v55);
          do
          {
            if ( v44 < ((unsigned int)i & *v49) )
              break;
            v48 = (_DWORD *)((char *)v48 + 1);
            ++v49;
          }
          while ( (int)v48 < Blockb );
          LOWORD(v45) = (_WORD)v56;
          v55 = (int)v48;
        }
        v50 = Blockb - v55;
        if ( (unsigned int)v56 > 0x7FFF )
          LOWORD(v45) = 0x7FFF;
        if ( v50 > 0x7FFF )
          v50 = 0x7FFF;
        *(_DWORD *)(Block[8] + 4 * sub_694F20(v44)) = v50 | ((v45 | 0xFFFF0000) << 15);
        v43 = v60;
      }
      ++v43;
    }
    return 0;
  }
  else
  {
    sub_694AB0((void **)Block);
    return -1;
  }
}


//======================================================================
// sub_694F20
// entry 00694f20  size 89  status ok
//======================================================================

int __cdecl sub_694F20(int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // eax
  unsigned int v3; // eax

  v1 = 16
     * ((((a1 << 16) ^ HIWORD(a1)) << 8)
      ^ (unsigned int)&unk_FF00FF
      & ((((a1 << 16) ^ HIWORD(a1)) << 8)
       ^ (((a1 << 16) ^ (unsigned int)HIWORD(a1)) >> 8)));
  v2 = v1
     ^ (v1
      ^ (((((a1 << 16) ^ HIWORD(a1)) << 8)
        ^ (unsigned int)&unk_FF00FF
        & ((((a1 << 16) ^ HIWORD(a1)) << 8)
         ^ (((a1 << 16) ^ (unsigned int)HIWORD(a1)) >> 8))) >> 4))
     & 0xF0F0F0F;
  v3 = (4 * v2) ^ ((4 * v2) ^ (v2 >> 2)) & 0x33333333;
  return (2 * v3) ^ ((2 * v3) ^ (v3 >> 1)) & 0x55555555;
}


//======================================================================
// sub_694F80
// entry 00694f80  size 31  status ok
//======================================================================

int __cdecl sub_694F80(_DWORD **a1, _DWORD **a2)
{
  return (__PAIR64__(**a2 < **a1, **a1) - (unsigned int)**a2) >> 32;
}


//======================================================================
// sub_694FA0
// entry 00694fa0  size 569  status ok
//======================================================================

int __cdecl sub_694FA0(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // ebp
  int v6; // eax
  int i; // edi
  int v8; // eax
  int v9; // eax
  int j; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  void *v17; // eax
  int v18; // ebp
  bool v19; // zf

  memset(a2, 0, 0x34u);
  a2[12] = 1;
  if ( (_UNKNOWN *)sub_69D470(a1, 24) != &loc_564342 )
    goto LABEL_36;
  *a2 = sub_69D470(a1, 16);
  v2 = sub_69D470(a1, 24);
  a2[1] = v2;
  if ( v2 == -1 )
    goto LABEL_36;
  v3 = sub_69D470(a1, 1);
  if ( v3 )
  {
    if ( v3 != 1 )
      return -1;
    v5 = sub_69D470(a1, 5) + 1;
    a2[2] = malloc(4 * a2[1]);
    v6 = a2[1];
    for ( i = 0; i < v6; ++v5 )
    {
      v8 = sub_699AA0(v6 - i);
      v9 = sub_69D470(a1, v8);
      if ( v9 == -1 )
        goto LABEL_36;
      for ( j = 0; j < v9; *(_DWORD *)(a2[2] + 4 * i++) = v5 )
      {
        if ( i >= a2[1] )
          break;
        ++j;
      }
      v6 = a2[1];
    }
  }
  else
  {
    a2[2] = malloc(4 * a2[1]);
    v11 = 0;
    v19 = sub_69D470(a1, 1) == 0;
    v12 = a2[1];
    if ( v19 )
    {
      if ( v12 > 0 )
      {
        do
        {
          v14 = sub_69D470(a1, 5);
          if ( v14 == -1 )
            goto LABEL_36;
          *(_DWORD *)(a2[2] + 4 * v11++) = v14 + 1;
        }
        while ( v11 < a2[1] );
      }
    }
    else if ( v12 > 0 )
    {
      do
      {
        if ( sub_69D470(a1, 1) )
        {
          v13 = sub_69D470(a1, 5);
          if ( v13 == -1 )
            goto LABEL_36;
          *(_DWORD *)(a2[2] + 4 * v11) = v13 + 1;
        }
        else
        {
          *(_DWORD *)(a2[2] + 4 * v11) = 0;
        }
        ++v11;
      }
      while ( v11 < a2[1] );
    }
  }
  v15 = sub_69D470(a1, 4);
  a2[3] = v15;
  if ( v15 )
  {
    if ( v15 <= 0 || v15 > 2 )
      goto LABEL_36;
    a2[4] = sub_69D470(a1, 32);
    a2[5] = sub_69D470(a1, 32);
    a2[6] = sub_69D470(a1, 4) + 1;
    a2[7] = sub_69D470(a1, 1);
    v16 = 0;
    if ( a2[3] == 1 )
    {
      v16 = sub_694790(a2);
    }
    else if ( a2[3] == 2 )
    {
      v16 = a2[1] * *a2;
    }
    v17 = malloc(4 * v16);
    v18 = 0;
    v19 = v16 == 0;
    a2[8] = v17;
    if ( v16 > 0 )
    {
      do
        *(_DWORD *)(a2[8] + 4 * v18++) = sub_69D470(a1, a2[6]);
      while ( v18 < v16 );
      v19 = v16 == 0;
    }
    if ( !v19 && *(_DWORD *)(4 * v16 + a2[8] - 4) == -1 )
    {
LABEL_36:
      sub_6949C0((int)a2);
      return -1;
    }
  }
  return 0;
}


//======================================================================
// sub_6951E0
// entry 006951e0  size 52  status ok
//======================================================================

int __cdecl sub_6951E0(int a1, int a2, int a3)
{
  sub_69D210(
    a3,
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * a2),
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) + 4 * a2));
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) + 4 * a2);
}


//======================================================================
// sub_695220
// entry 00695220  size 291  status ok
//======================================================================

int __cdecl sub_695220(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // ebp
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // [esp+10h] [ebp-4h]

  v2 = a1;
  v3 = a1[10];
  v15 = v3;
  v4 = sub_69D390(a2, a1[9]);
  if ( v4 < 0 )
  {
    v7 = a1[2];
    v6 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1[8] + 4 * v4);
    if ( v5 >= 0 )
    {
      sub_69D440(a2, *(char *)(a1[7] + v5 - 1));
      v6 = v5 - 1;
      goto LABEL_5;
    }
    v6 = (v5 >> 15) & 0x7FFF;
    v7 = a1[2] - (*(_DWORD *)(a1[8] + 4 * v4) & 0x7FFF);
  }
  v9 = a2;
  v10 = sub_69D390(a2, v3);
  if ( v10 < 0 )
  {
    while ( v3 > 1 )
    {
      v10 = sub_69D390(a2, --v3);
      if ( v10 >= 0 )
      {
        v15 = v3;
        goto LABEL_13;
      }
    }
    return -1;
  }
LABEL_13:
  v11 = sub_694F20(v10);
  v12 = v7 - v6;
  if ( v7 - v6 > 1 )
  {
    do
    {
      v13 = v12 >> 1;
      v14 = v11 < *(_DWORD *)(a1[5] + 4 * (v13 + v6));
      v7 -= v13 & -v14;
      v6 += v13 & (v14 - 1);
      v12 = v7 - v6;
    }
    while ( v7 - v6 > 1 );
    v3 = v15;
    v9 = a2;
  }
  if ( *(char *)(a1[7] + v6) > v3 )
  {
    sub_69D440(v9, v3);
    return -1;
  }
  sub_69D440(v9, *(char *)(a1[7] + v6));
  v2 = a1;
LABEL_5:
  if ( v6 >= 0 )
    return *(_DWORD *)(v2[6] + 4 * v6);
  return v6;
}


//======================================================================
// sub_695350
// entry 00695350  size 495  status ok
//======================================================================

int __cdecl sub_695350(int *a1, int a2, int a3, int a4)
{
  int *v4; // edi
  int v5; // esi
  int v6; // eax
  void *v7; // esp
  int v8; // eax
  void *v9; // esp
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  int v14; // ebx
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // ecx
  _BYTE *v21; // eax
  _BYTE *v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int i; // eax
  _BYTE v28[12]; // [esp+0h] [ebp-24h] BYREF
  _BYTE *v29; // [esp+Ch] [ebp-18h]
  int v30; // [esp+10h] [ebp-14h]
  int v31; // [esp+14h] [ebp-10h]
  _BYTE *v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  int v34; // [esp+20h] [ebp-4h]
  int v35; // [esp+34h] [ebp+10h]
  int v36; // [esp+38h] [ebp+14h]

  v4 = a1;
  v5 = a4 / *a1;
  v34 = v5;
  v6 = 4 * v5 + 3;
  LOBYTE(v6) = v6 & 0xFC;
  v7 = alloca(v6);
  v8 = 4 * v5 + 3;
  LOBYTE(v8) = (4 * v5 + 3) & 0xFC;
  v9 = alloca(v8);
  v33 = 0;
  v29 = v28;
  if ( v5 > 0 )
  {
    v32 = v28;
    v30 = 0;
    while ( 1 )
    {
      v36 = v4[10];
      v10 = sub_69D390(a3, v4[9]);
      if ( v10 < 0 )
      {
        v13 = v4[2];
        v12 = 0;
      }
      else
      {
        v11 = *(_DWORD *)(v4[8] + 4 * v10);
        if ( v11 >= 0 )
        {
          sub_69D440(a3, *(char *)(v4[7] + v11 - 1));
          v14 = v11 - 1;
          goto LABEL_22;
        }
        v12 = (v11 >> 15) & 0x7FFF;
        v13 = v4[2] - (*(_DWORD *)(v4[8] + 4 * v10) & 0x7FFF);
      }
      v15 = v36;
      v16 = sub_69D390(a3, v36);
      if ( v16 < 0 )
        break;
LABEL_13:
      v17 = sub_694F20(v16);
      v18 = v13 - v12;
      if ( v13 - v12 > 1 )
      {
        v31 = a1[5];
        do
        {
          v19 = v18 >> 1;
          v20 = v17 < *(_DWORD *)(v31 + 4 * (v19 + v12));
          v13 -= v19 & -v20;
          v12 += v19 & (v20 - 1);
          v18 = v13 - v12;
        }
        while ( v13 - v12 > 1 );
        v15 = v36;
      }
      if ( *(char *)(a1[7] + v12) > v15 )
      {
        sub_69D440(a3, v15);
LABEL_20:
        v14 = -1;
        goto LABEL_21;
      }
      sub_69D440(a3, *(char *)(a1[7] + v12));
      v14 = v12;
LABEL_21:
      v5 = v34;
      v4 = a1;
LABEL_22:
      v21 = v32;
      *(_DWORD *)&v32[v30] = v14;
      if ( v14 == -1 )
        return -1;
      v22 = v21 + 4;
      v23 = v33;
      *((_DWORD *)v22 - 1) = v4[4] + 4 * v14 * *v4;
      v33 = v23 + 1;
      v32 = v22;
      if ( v23 + 1 >= v5 )
        goto LABEL_24;
    }
    while ( v15 > 1 )
    {
      v16 = sub_69D390(a3, --v15);
      if ( v16 >= 0 )
      {
        v36 = v15;
        goto LABEL_13;
      }
    }
    goto LABEL_20;
  }
LABEL_24:
  v24 = 0;
  if ( *v4 > 0 )
  {
    v25 = a2;
    v35 = a2;
    do
    {
      for ( i = 0; i < v5; *(float *)(v25 - 4) = *(float *)(*(_DWORD *)&v29[4 * i - 4] + 4 * v24) + *(float *)(v25 - 4) )
      {
        ++i;
        v25 += 4;
      }
      v25 = 4 * v5 + v35;
      ++v24;
      v35 = v25;
    }
    while ( v24 < *v4 );
  }
  return 0;
}


//======================================================================
// sub_695540
// entry 00695540  size 1182  status ok
//======================================================================

int __cdecl sub_695540(int *a1, int a2, int a3, int a4)
{
  int *v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  double v19; // st7
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  int i; // eax
  unsigned int v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  float *v31; // edx
  int v32; // eax
  int v33; // ecx
  double v34; // st7
  int v35; // edi
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  int v40; // edi
  double v41; // st7
  double v42; // st7
  double v43; // st7
  int v44; // edi
  double v45; // st7
  double v46; // st7
  double v47; // st7
  int v48; // edi
  double v49; // st7
  double v50; // st7
  int v51; // edi
  double v52; // st7
  double v53; // st7
  double v54; // st7
  double v55; // st7
  int v56; // [esp+10h] [ebp-8h]
  int v57; // [esp+10h] [ebp-8h]
  int v58; // [esp+14h] [ebp-4h]
  int v59; // [esp+1Ch] [ebp+4h]

  v4 = a1;
  v5 = 0;
  if ( *a1 <= 8 )
  {
    if ( a4 <= 0 )
      return 0;
    while ( 1 )
    {
      v57 = v4[10];
      v21 = sub_69D390(a3, v4[9]);
      if ( v21 < 0 )
        break;
      v22 = *(_DWORD *)(v4[8] + 4 * v21);
      v58 = v22;
      if ( v22 < 0 )
      {
        v23 = (v22 >> 15) & 0x7FFF;
        v24 = v4[2] - (v22 & 0x7FFF);
LABEL_31:
        for ( i = sub_69D390(a3, v57); i < 0; i = sub_69D390(a3, v57) )
        {
          if ( v57 <= 1 )
            return -1;
          --v57;
        }
        v26 = sub_694F20(i);
        v27 = v24 - v23;
        if ( v24 - v23 > 1 )
        {
          do
          {
            v28 = v27 >> 1;
            v29 = v26 < *(_DWORD *)(v4[5] + 4 * (v28 + v23));
            v24 -= v28 & -v29;
            v23 += v28 & (v29 - 1);
            v27 = v24 - v23;
          }
          while ( v24 - v23 > 1 );
          v4 = a1;
        }
        v30 = v4[7];
        if ( *(char *)(v30 + v23) > v57 )
        {
          sub_69D440(a3, v57);
          return -1;
        }
        sub_69D440(a3, *(char *)(v30 + v23));
        goto LABEL_41;
      }
      sub_69D440(a3, *(char *)(v4[7] + v22 - 1));
      v23 = v58 - 1;
LABEL_41:
      if ( v23 == -1 )
        return -1;
      v31 = (float *)(v4[4] + 4 * v23 * *v4);
      v32 = 0;
      switch ( *v4 )
      {
        case 1:
          v33 = a2;
          goto LABEL_51;
        case 2:
          v33 = a2;
          v54 = *v31 + *(float *)(a2 + 4 * v5);
          v32 = 1;
          ++v5;
          *(float *)(a2 + 4 * v5 - 4) = v54;
          goto LABEL_51;
        case 3:
          v33 = a2;
          v53 = *v31 + *(float *)(a2 + 4 * v5);
          v32 = 2;
          v5 += 2;
          *(float *)(a2 + 4 * v5 - 8) = v53;
          *(float *)(a2 + 4 * v5 - 4) = v31[1] + *(float *)(a2 + 4 * v5 - 4);
          goto LABEL_51;
        case 4:
          v33 = a2;
          v50 = *v31 + *(float *)(a2 + 4 * v5);
          v51 = v5 + 2;
          v32 = 3;
          *(float *)(a2 + 4 * v51 - 8) = v50;
          v52 = v31[1] + *(float *)(a2 + 4 * v51 - 4);
          v5 = v51 + 1;
          *(float *)(a2 + 4 * v5 - 8) = v52;
          *(float *)(a2 + 4 * v5 - 4) = v31[2] + *(float *)(a2 + 4 * v5 - 4);
          goto LABEL_51;
        case 5:
          v33 = a2;
          v47 = *v31 + *(float *)(a2 + 4 * v5);
          v48 = v5 + 2;
          *(float *)(a2 + 4 * v48 - 8) = v47;
          v49 = v31[1] + *(float *)(a2 + 4 * v48 - 4);
          v32 = 4;
          v5 = v48 + 2;
          *(float *)(a2 + 4 * v5 - 12) = v49;
          *(float *)(a2 + 4 * v5 - 8) = v31[2] + *(float *)(a2 + 4 * v5 - 8);
          *(float *)(a2 + 4 * v5 - 4) = v31[3] + *(float *)(a2 + 4 * v5 - 4);
          goto LABEL_51;
        case 6:
          v33 = a2;
          v43 = *v31 + *(float *)(a2 + 4 * v5);
          v44 = v5 + 2;
          *(float *)(a2 + 4 * v44 - 8) = v43;
          v45 = v31[1] + *(float *)(a2 + 4 * v44 - 4);
          v44 += 2;
          v32 = 5;
          *(float *)(a2 + 4 * v44 - 12) = v45;
          v46 = v31[2] + *(float *)(a2 + 4 * v44 - 8);
          v5 = v44 + 1;
          *(float *)(a2 + 4 * v5 - 12) = v46;
          *(float *)(a2 + 4 * v5 - 8) = v31[3] + *(float *)(a2 + 4 * v5 - 8);
          *(float *)(a2 + 4 * v5 - 4) = v31[4] + *(float *)(a2 + 4 * v5 - 4);
          goto LABEL_51;
        case 7:
          v33 = a2;
          v39 = *v31 + *(float *)(a2 + 4 * v5);
          v40 = v5 + 2;
          *(float *)(a2 + 4 * v40 - 8) = v39;
          v41 = v31[1] + *(float *)(a2 + 4 * v40 - 4);
          v40 += 2;
          *(float *)(a2 + 4 * v40 - 12) = v41;
          v42 = v31[2] + *(float *)(a2 + 4 * v40 - 8);
          v32 = 6;
          v5 = v40 + 2;
          *(float *)(a2 + 4 * v5 - 16) = v42;
          *(float *)(a2 + 4 * v5 - 12) = v31[3] + *(float *)(a2 + 4 * v5 - 12);
          *(float *)(a2 + 4 * v5 - 8) = v31[4] + *(float *)(a2 + 4 * v5 - 8);
          *(float *)(a2 + 4 * v5 - 4) = v31[5] + *(float *)(a2 + 4 * v5 - 4);
          goto LABEL_51;
        case 8:
          v33 = a2;
          v34 = *v31 + *(float *)(a2 + 4 * v5);
          v35 = v5 + 2;
          *(float *)(a2 + 4 * v35 - 8) = v34;
          v36 = v31[1] + *(float *)(a2 + 4 * v35 - 4);
          v35 += 2;
          *(float *)(a2 + 4 * v35 - 12) = v36;
          v37 = v31[2] + *(float *)(a2 + 4 * v35 - 8);
          v35 += 2;
          v32 = 7;
          *(float *)(a2 + 4 * v35 - 16) = v37;
          v38 = v31[3] + *(float *)(a2 + 4 * v35 - 12);
          v5 = v35 + 1;
          *(float *)(a2 + 4 * v5 - 16) = v38;
          *(float *)(a2 + 4 * v5 - 12) = v31[4] + *(float *)(a2 + 4 * v5 - 12);
          *(float *)(a2 + 4 * v5 - 8) = v31[5] + *(float *)(a2 + 4 * v5 - 8);
          *(float *)(a2 + 4 * v5 - 4) = v31[6] + *(float *)(a2 + 4 * v5 - 4);
LABEL_51:
          v55 = v31[v32] + *(float *)(v33 + 4 * v5++);
          *(float *)(v33 + 4 * v5 - 4) = v55;
          break;
        default:
          break;
      }
      if ( v5 >= a4 )
        return 0;
    }
    v24 = v4[2];
    v23 = 0;
    goto LABEL_31;
  }
  v56 = 0;
  if ( a4 <= 0 )
    return 0;
  while ( 1 )
  {
    v59 = v4[10];
    v6 = sub_69D390(a3, v4[9]);
    if ( v6 < 0 )
    {
      v9 = v4[2];
      v8 = 0;
    }
    else
    {
      v7 = *(_DWORD *)(v4[8] + 4 * v6);
      if ( v7 >= 0 )
      {
        sub_69D440(a3, *(char *)(v4[7] + v7 - 1));
        v8 = v7 - 1;
        goto LABEL_18;
      }
      v8 = (v7 >> 15) & 0x7FFF;
      v9 = v4[2] - (*(_DWORD *)(v4[8] + 4 * v6) & 0x7FFF);
    }
    v10 = v59;
    v11 = sub_69D390(a3, v59);
    if ( v11 < 0 )
      break;
LABEL_13:
    v12 = sub_694F20(v11);
    v13 = v9 - v8;
    if ( v9 - v8 > 1 )
    {
      do
      {
        v14 = v13 >> 1;
        v15 = v12 < *(_DWORD *)(v4[5] + 4 * (v14 + v8));
        v9 -= v14 & -v15;
        v8 += v14 & (v15 - 1);
        v13 = v9 - v8;
      }
      while ( v9 - v8 > 1 );
      v10 = v59;
    }
    v16 = v4[7];
    if ( *(char *)(v16 + v8) > v10 )
    {
      sub_69D440(a3, v10);
      return -1;
    }
    sub_69D440(a3, *(char *)(v16 + v8));
    v5 = v56;
LABEL_18:
    if ( v8 == -1 )
      return -1;
    v17 = v4[4] + 4 * v8 * *v4;
    v18 = 0;
    if ( *v4 > 0 )
    {
      do
      {
        v19 = *(float *)(v17 + 4 * v18++) + *(float *)(a2 + 4 * v5++);
        *(float *)(a2 + 4 * v5 - 4) = v19;
      }
      while ( v18 < *v4 );
      v56 = v5;
    }
    if ( v5 >= a4 )
      return 0;
  }
  while ( v10 > 1 )
  {
    v11 = sub_69D390(a3, --v10);
    if ( v11 >= 0 )
    {
      v59 = v10;
      goto LABEL_13;
    }
  }
  return -1;
}


//======================================================================
// sub_695A00
// entry 00695a00  size 354  status ok
//======================================================================

int __cdecl sub_695A00(int *a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v20; // [esp+10h] [ebp-4h]
  int v21; // [esp+18h] [ebp+4h]

  v4 = 0;
  v20 = 0;
  if ( a4 <= 0 )
    return 0;
  while ( 1 )
  {
    v21 = a1[10];
    v6 = sub_69D390(a3, a1[9]);
    if ( v6 < 0 )
    {
      v9 = a1[2];
      v8 = 0;
    }
    else
    {
      v7 = *(_DWORD *)(a1[8] + 4 * v6);
      if ( v7 >= 0 )
      {
        sub_69D440(a3, *(char *)(a1[7] + v7 - 1));
        v8 = v7 - 1;
        goto LABEL_17;
      }
      v8 = (v7 >> 15) & 0x7FFF;
      v9 = a1[2] - (*(_DWORD *)(a1[8] + 4 * v6) & 0x7FFF);
    }
    v10 = v21;
    v11 = sub_69D390(a3, v21);
    if ( v11 < 0 )
      break;
LABEL_12:
    v12 = sub_694F20(v11);
    v13 = v9 - v8;
    if ( v9 - v8 > 1 )
    {
      do
      {
        v14 = v13 >> 1;
        v15 = v12 < *(_DWORD *)(a1[5] + 4 * (v14 + v8));
        v9 -= v14 & -v15;
        v8 += v14 & (v15 - 1);
        v13 = v9 - v8;
      }
      while ( v9 - v8 > 1 );
      v10 = v21;
    }
    v16 = a1[7];
    if ( *(char *)(v16 + v8) > v10 )
    {
      sub_69D440(a3, v10);
      return -1;
    }
    sub_69D440(a3, *(char *)(v16 + v8));
    v4 = v20;
LABEL_17:
    if ( v8 == -1 )
      return -1;
    v17 = a1[4] + 4 * v8 * *a1;
    v18 = 0;
    if ( *a1 > 0 )
    {
      do
        *(_DWORD *)(a2 + 4 * v4++) = *(_DWORD *)(v17 + 4 * v18++);
      while ( v18 < *a1 );
      v20 = v4;
    }
    if ( v4 >= a4 )
      return 0;
  }
  while ( v10 > 1 )
  {
    v11 = sub_69D390(a3, --v10);
    if ( v11 >= 0 )
    {
      v21 = v10;
      goto LABEL_12;
    }
  }
  return -1;
}


//======================================================================
// sub_695B70
// entry 00695b70  size 436  status ok
//======================================================================

int __cdecl sub_695B70(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  int v14; // ebx
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int i; // ecx
  int v23; // eax
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]
  int v27; // [esp+24h] [ebp+Ch]
  int v28; // [esp+30h] [ebp+18h]

  v6 = 0;
  v25 = 0;
  v7 = a3 + a6;
  v27 = a3 / a4;
  v26 = v7 / a4;
  if ( v27 >= v7 / a4 )
    return 0;
  while ( 1 )
  {
    v8 = a1;
    v9 = a1[10];
    v28 = v9;
    v10 = sub_69D390(a5, a1[9]);
    if ( v10 < 0 )
    {
      v13 = a1[2];
      v12 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a1[8] + 4 * v10);
      if ( v11 >= 0 )
      {
        sub_69D440(a5, *(char *)(a1[7] + v11 - 1));
        v14 = v11 - 1;
        goto LABEL_17;
      }
      v12 = (v11 >> 15) & 0x7FFF;
      v13 = a1[2] - (*(_DWORD *)(a1[8] + 4 * v10) & 0x7FFF);
    }
    v15 = a5;
    v16 = sub_69D390(a5, v9);
    if ( v16 < 0 )
      break;
LABEL_12:
    v17 = sub_694F20(v16);
    v18 = v13 - v12;
    if ( v13 - v12 > 1 )
    {
      do
      {
        v19 = v18 >> 1;
        v20 = v17 < *(_DWORD *)(a1[5] + 4 * (v19 + v12));
        v13 -= v19 & -v20;
        v12 += v19 & (v20 - 1);
        v18 = v13 - v12;
      }
      while ( v13 - v12 > 1 );
      v9 = v28;
      v15 = a5;
    }
    if ( *(char *)(a1[7] + v12) > v9 )
    {
      sub_69D440(v15, v9);
      return -1;
    }
    sub_69D440(v15, *(char *)(a1[7] + v12));
    v8 = a1;
    v14 = v12;
    v6 = v25;
LABEL_17:
    if ( v14 == -1 )
      return -1;
    v21 = v8[4] + 4 * v14 * *v8;
    for ( i = 0; i < *v8; ++i )
    {
      v23 = *(_DWORD *)(a2 + 4 * v6++);
      v25 = v6;
      *(float *)(v23 + 4 * v27) = *(float *)(v21 + 4 * i) + *(float *)(v23 + 4 * v27);
      if ( v6 == a4 )
      {
        v25 = 0;
        v6 = 0;
        ++v27;
      }
    }
    if ( v27 >= v26 )
      return 0;
  }
  while ( v9 > 1 )
  {
    v16 = sub_69D390(a5, --v9);
    if ( v16 >= 0 )
    {
      v28 = v9;
      goto LABEL_12;
    }
  }
  return -1;
}


//======================================================================
// sub_695D30
// entry 00695d30  size 209  status ok
//======================================================================

void __cdecl sub_695D30(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // esi
  int v4; // ebx

  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
      free(*(void **)a1);
    if ( *(_DWORD *)(a1 + 4) )
      free(*(void **)(a1 + 4));
    if ( *(_DWORD *)(a1 + 20) )
      free(*(void **)(a1 + 20));
    if ( *(_DWORD *)(a1 + 48) )
      free(*(void **)(a1 + 48));
    if ( *(_DWORD *)(a1 + 52) )
      free(*(void **)(a1 + 52));
    if ( *(_DWORD *)(a1 + 56) )
      free(*(void **)(a1 + 56));
    v1 = *(_DWORD *)(a1 + 96);
    if ( v1 )
    {
      v2 = *(_DWORD *)(a1 + 8);
      if ( v2 )
      {
        v3 = 0;
        if ( v2 > 0 )
        {
          v4 = 0;
          do
          {
            sub_69D330(v4 + *(_DWORD *)(a1 + 96));
            ++v3;
            v4 += 20;
          }
          while ( v3 < *(_DWORD *)(a1 + 8) );
        }
      }
      else
      {
        sub_69D330(v1);
      }
      free(*(void **)(a1 + 96));
    }
    if ( *(_DWORD *)(a1 + 100) )
      free(*(void **)(a1 + 100));
    memset((void *)a1, 0, 0x68u);
  }
}


//======================================================================
// sub_695E10
// entry 00695e10  size 21  status ok
//======================================================================

BOOL __cdecl sub_695E10(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 64) + 104) + 80) != 0;
}


//======================================================================
// sub_695E30
// entry 00695e30  size 93  status ok
//======================================================================

int __cdecl sub_695E30(void **a1)
{
  void **v1; // esi
  int v2; // ebx

  sub_697780(a1 + 4);
  v1 = a1 + 12;
  v2 = 7;
  do
  {
    free(*v1);
    v1 += 4;
    --v2;
  }
  while ( v2 );
  free(a1[9]);
  free(a1[38]);
  free(a1[40]);
  memset(a1, 0, 0xB4u);
  return 0;
}


//======================================================================
// sub_695E90
// entry 00695e90  size 38  status ok
//======================================================================

int __cdecl sub_695E90(int *a1, int a2)
{
  int result; // eax

  result = *a1;
  if ( *a1 != 1 )
    return sub_695EC0(result, a2, a1[1], a1[1] + 4 * result, a1[2]);
  return result;
}


//======================================================================
// sub_695EC0
// entry 00695ec0  size 414  status ok
//======================================================================

int __cdecl sub_695EC0(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int result; // eax
  _DWORD *v8; // edi
  int v10; // esi
  int v11; // eax
  int *v12; // edx
  int v13; // edx
  bool v14; // zf
  int v15; // [esp-14h] [ebp-28h]
  int v16; // [esp-10h] [ebp-24h]
  int v17; // [esp-Ch] [ebp-20h]
  int v18; // [esp-Ch] [ebp-20h]
  int v19; // [esp-Ch] [ebp-20h]
  int v20; // [esp+8h] [ebp-Ch]
  int *v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]
  int v23; // [esp+24h] [ebp+10h]
  int v24; // [esp+28h] [ebp+14h]

  v6 = a1;
  result = *(_DWORD *)(a5 + 4);
  v24 = 1;
  v20 = a1;
  if ( result > 0 )
  {
    v8 = a2;
    v21 = (int *)(a5 + 4 * result + 4);
    v22 = result;
    do
    {
      v10 = v6 / *v21;
      v11 = a1 / v6;
      v23 = v10 * (a1 / v6);
      v20 -= a1 / v6 * (*v21 - 1);
      v24 = 1 - v24;
      v12 = v21;
      if ( *v21 == 4 )
      {
        v19 = a4 + 4 * (v11 + v20 + v11) - 4;
        v16 = a4 + 4 * (v11 + v20) - 4;
        v15 = a4 + 4 * v20 - 4;
        if ( v24 )
          sub_696230(v11, v10, a3, a2, v15, v16, v19);
        else
          sub_696230(v11, v10, a2, a3, v15, v16, v19);
      }
      else if ( *v21 == 2 )
      {
        v18 = a4 + 4 * v20 - 4;
        if ( v24 )
          sub_696060(v11, v10, a3, a2, v18);
        else
          sub_696060(v11, v10, a2, a3, v18);
      }
      else
      {
        if ( v11 == 1 )
        {
          v12 = v21;
          v24 = 1 - v24;
        }
        v13 = *v12;
        v17 = a4 + 4 * v20 - 4;
        if ( v24 )
        {
          sub_696660(v11, v13, v10, v23, a3, a3, a3, a2, a2, v17);
          v24 = 0;
        }
        else
        {
          sub_696660(v11, v13, v10, v23, a2, a2, a2, a3, a3, v17);
          v24 = 1;
        }
      }
      v14 = v22 == 1;
      v6 = v10;
      --v21;
      --v22;
    }
    while ( !v14 );
    result = v24;
    if ( v24 != 1 )
    {
      result = a1;
      if ( a1 > 0 )
      {
        do
        {
          *v8 = *(_DWORD *)((char *)v8 + a3 - (_DWORD)a2);
          ++v8;
          --result;
        }
        while ( result );
      }
    }
  }
  return result;
}


//======================================================================
// sub_696060
// entry 00696060  size 450  status ok
//======================================================================

void __cdecl sub_696060(int a1, int a2, float *a3, float *a4, int a5)
{
  int v6; // edi
  float *v7; // edx
  int v8; // esi
  float *v9; // eax
  float *v10; // ecx
  float *v11; // esi
  float *v12; // ebx
  float *v13; // edi
  float *v14; // ecx
  float *v15; // eax
  float *v16; // edx
  unsigned int v17; // esi
  double v18; // st7
  double v19; // st6
  double v20; // st6
  double v21; // st7
  double v22; // st6
  bool v23; // zf
  int v24; // ecx
  int v25; // esi
  int v26; // ebx
  int v27; // ebp
  float *v28; // ecx
  float *v29; // eax
  float *v30; // edx
  float *v31; // [esp+10h] [ebp-14h]
  float *v32; // [esp+10h] [ebp-14h]
  int v33; // [esp+14h] [ebp-10h]
  float *v34; // [esp+14h] [ebp-10h]
  float *v35; // [esp+18h] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]
  float *v38; // [esp+28h] [ebp+4h]
  float *v39; // [esp+28h] [ebp+4h]

  v6 = a2;
  v7 = a3;
  v8 = a2 * a1;
  v37 = a2 * a1;
  if ( a2 > 0 )
  {
    v9 = a3;
    v31 = a4;
    v10 = &a3[v8];
    v38 = &a4[2 * a1 - 1];
    v33 = a2;
    do
    {
      *v31 = *v9 + *v10;
      *v38 = *v9 - *v10;
      v31 += 2 * a1;
      v9 += a1;
      v10 += a1;
      v38 += 2 * a1;
      --v33;
    }
    while ( v33 );
    v6 = a2;
  }
  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
      goto LABEL_13;
    if ( v6 > 0 )
    {
      v11 = &a3[v8];
      v12 = a4;
      v32 = a3;
      v35 = a4;
      v34 = v11;
      v39 = &a4[2 * a1];
      v36 = v6;
      do
      {
        v13 = v39;
        v14 = v32;
        v15 = v11;
        v16 = (float *)(a5 + 4);
        v17 = ((unsigned int)(a1 - 3) >> 1) + 1;
        do
        {
          v18 = v15[1] * *(v16 - 1);
          v19 = v15[2];
          v15 += 2;
          v14 += 2;
          v20 = v19 * *v16;
          v12 += 2;
          v13 -= 2;
          v16 += 2;
          --v17;
          v21 = v18 + v20;
          v22 = *v15 * *(v16 - 3) - *(v16 - 2) * *(v15 - 1);
          *v12 = v22 + *v14;
          *v13 = v22 - *v14;
          *(v12 - 1) = v21 + *(v14 - 1);
          *(v13 - 1) = *(v14 - 1) - v21;
        }
        while ( v17 );
        v6 = a2;
        v7 = a3;
        v39 += 2 * a1;
        v32 += a1;
        v12 = &v35[2 * a1];
        v11 = &v34[a1];
        v23 = v36 == 1;
        v34 = v11;
        v35 = v12;
        --v36;
      }
      while ( !v23 );
    }
    if ( (a1 & 1) != 1 )
    {
LABEL_13:
      v24 = a1 - 1;
      v25 = v37 + a1 - 1;
      if ( v6 > 0 )
      {
        v26 = 8 * a1;
        v27 = 4 * a1;
        v28 = &v7[v24];
        v29 = &a4[v27 / 4u];
        v30 = &v7[v25];
        do
        {
          *v29 = -*v30;
          v30 = (float *)((char *)v30 + v27);
          *(v29 - 1) = *v28;
          v29 = (float *)((char *)v29 + v26);
          v28 = (float *)((char *)v28 + v27);
          --v6;
        }
        while ( v6 );
      }
    }
  }
}


//======================================================================
// sub_696230
// entry 00696230  size 1070  status ok
//======================================================================

int __cdecl sub_696230(int a1, int a2, int a3, float *a4, int a5, int a6, float *a7)
{
  int result; // eax
  int v8; // ebx
  float *v9; // edx
  int v10; // ebp
  int v11; // esi
  float *v12; // ebx
  int v13; // edi
  double v14; // st7
  double v15; // st6
  int v16; // ecx
  double v17; // st7
  int v18; // edi
  int v19; // ebx
  int v20; // ecx
  float *v21; // ebp
  int v22; // edx
  float *v23; // edi
  float *v24; // esi
  float *v25; // eax
  float *v26; // ecx
  float *v27; // edx
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st4
  double v35; // st3
  bool v36; // zf
  int v37; // edi
  int v38; // ecx
  float *v39; // edx
  int v40; // eax
  float *v41; // ebx
  int v42; // edi
  float *v43; // ebp
  float *v44; // esi
  double v45; // st7
  double v46; // st6
  double v47; // st6
  double v48; // st5
  double v49; // st7
  int v50; // [esp+10h] [ebp-5Ch]
  float *v51; // [esp+10h] [ebp-5Ch]
  float *v52; // [esp+14h] [ebp-58h]
  float *v53; // [esp+14h] [ebp-58h]
  float *v54; // [esp+18h] [ebp-54h]
  float *v55; // [esp+18h] [ebp-54h]
  float *v56; // [esp+1Ch] [ebp-50h]
  float *v57; // [esp+20h] [ebp-4Ch]
  int v58; // [esp+24h] [ebp-48h]
  float *v59; // [esp+24h] [ebp-48h]
  float *v60; // [esp+28h] [ebp-44h]
  float *v61; // [esp+28h] [ebp-44h]
  int v62; // [esp+2Ch] [ebp-40h]
  int v63; // [esp+30h] [ebp-3Ch]
  float v64; // [esp+34h] [ebp-38h]
  float v65; // [esp+38h] [ebp-34h]
  float v66; // [esp+3Ch] [ebp-30h]
  float v67; // [esp+40h] [ebp-2Ch]
  float v68; // [esp+44h] [ebp-28h]
  float v69; // [esp+48h] [ebp-24h]
  unsigned int v70; // [esp+4Ch] [ebp-20h]
  int v71; // [esp+54h] [ebp-18h]
  int v72; // [esp+58h] [ebp-14h]
  char *v73; // [esp+60h] [ebp-Ch]
  int v74; // [esp+68h] [ebp-4h]
  float *v75; // [esp+70h] [ebp+4h]
  int v76; // [esp+80h] [ebp+14h]
  float *v77; // [esp+88h] [ebp+1Ch]

  result = a1;
  v8 = a2;
  v9 = a4;
  v10 = a2 * a1;
  v11 = a3;
  v50 = 0;
  if ( a2 > 0 )
  {
    v12 = (float *)(a3 + 4 * v10);
    v13 = 4 * a1;
    v60 = v12;
    v54 = (float *)(a3 + 12 * v10);
    v52 = (float *)(a3 + 8 * v10);
    v58 = a2;
    do
    {
      v14 = *v12 + *v54;
      v15 = *(float *)(a3 + 4 * v50) + *v52;
      a4[4 * v50] = v15 + v14;
      a4[4 * v50 - 1 + v13] = v15 - v14;
      v16 = 2 * a1 + 4 * v50;
      a4[v16 - 1] = *(float *)(a3 + 4 * v50) - *v52;
      v17 = *v54 - *v60;
      v12 = &v60[v13 / 4u];
      v60 = (float *)((char *)v60 + v13);
      a4[v16] = v17;
      v50 += a1;
      v52 = (float *)((char *)v52 + v13);
      v54 = (float *)((char *)v54 + v13);
      --v58;
    }
    while ( v58 );
    v8 = a2;
  }
  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
      goto LABEL_17;
    v18 = 0;
    v71 = 0;
    if ( v8 > 0 )
    {
      v19 = 2 * a1;
      v74 = 4 * a1;
      v57 = a4;
      v61 = (float *)(a3 + 12 * v10);
      v59 = (float *)(a3 + 4 * v10);
      v72 = a2;
      while ( 1 )
      {
        v20 = v19 + 4 * v18;
        if ( result > 2 )
        {
          v53 = &v9[v20];
          v21 = (float *)(v11 + 4 * v18);
          v51 = &v9[4 * v18 + v19];
          v56 = &v9[v19 + v20];
          v22 = v18 + 2 * a2 * a1;
          v23 = v61;
          v24 = (float *)(v11 + 4 * v22);
          v63 = a6 - a5;
          v73 = (char *)a7 - a5;
          v25 = (float *)(a5 + 4);
          v62 = a6 - (_DWORD)a7;
          v55 = v57;
          v26 = v59;
          v70 = ((unsigned int)(a1 - 3) >> 1) + 1;
          v27 = a7;
          do
          {
            v26 += 2;
            v24 += 2;
            v55 += 2;
            v23 += 2;
            v28 = *(v25 - 1) * *(v26 - 1) + *v26 * *v25;
            v51 += 2;
            v21 += 2;
            v53 -= 2;
            v56 -= 2;
            v29 = *(v25 - 1) * *v26 - *v25 * *(v26 - 1);
            v66 = *(float *)((char *)v27 + v62) * *(v24 - 1) + *(float *)((char *)v25 + v63) * *v24;
            v65 = *(float *)((char *)v27 + v62) * *v24 - *(v24 - 1) * *(float *)((char *)v25 + v63);
            v30 = *v27 * *(v23 - 1) + *(float *)((char *)v25 + (_DWORD)v73) * *v23;
            v64 = *v27 * *v23 - *(v23 - 1) * *(float *)((char *)v25 + (_DWORD)v73);
            v68 = v30 + v28;
            v67 = v30 - v28;
            v69 = v64 + v29;
            v31 = v29 - v64;
            v32 = v65 + *v21;
            v33 = *v21 - v65;
            v34 = v66 + *(v21 - 1);
            v35 = *(v21 - 1) - v66;
            *(v55 - 1) = v34 + v68;
            *v55 = v32 + v69;
            v25 += 2;
            v27 += 2;
            *(v53 - 1) = v35 - v31;
            *v53 = v67 - v33;
            *(v51 - 1) = v35 + v31;
            *v51 = v33 + v67;
            *(v56 - 1) = v34 - v68;
            *v56 = v69 - v32;
            --v70;
          }
          while ( v70 );
          v18 = v71;
          v10 = a2 * a1;
          result = a1;
          v11 = a3;
          v9 = a4;
        }
        v57 += 4 * a1;
        v18 += result;
        v59 = (float *)((char *)v59 + v74);
        v36 = v72 == 1;
        v71 = v18;
        v61 = (float *)((char *)v61 + v74);
        --v72;
        if ( v36 )
          break;
        v19 = 2 * a1;
      }
      v8 = a2;
    }
    if ( (result & 1) == 0 )
    {
LABEL_17:
      v37 = result + v10 - 1;
      if ( v8 > 0 )
      {
        v76 = 16 * result;
        v38 = 4 * result;
        v75 = &v9[result];
        v39 = &v9[3 * result];
        v40 = v37 + v10;
        v77 = (float *)(v11 + 4 * (v37 + 2 * v10));
        v41 = (float *)(v11 + 4 * v37);
        v42 = v37 - v10;
        v43 = v75;
        result = v11 + 4 * v40;
        v44 = (float *)(v11 + 4 * v42);
        do
        {
          v45 = -((*v41 + *v77) * flt_7878FC);
          v46 = *v41 - *v77;
          v41 = (float *)((char *)v41 + v38);
          v77 = (float *)((char *)v77 + v38);
          v47 = v46 * flt_7878FC;
          *(v43 - 1) = v47 + *v44;
          v48 = *v44 - v47;
          v44 = (float *)((char *)v44 + v38);
          *(v39 - 1) = v48;
          *v43 = v45 - *(float *)result;
          v43 = (float *)((char *)v43 + v76);
          v49 = v45 + *(float *)result;
          result += v38;
          *v39 = v49;
          v39 = (float *)((char *)v39 + v76);
          --a2;
        }
        while ( a2 );
      }
    }
  }
  return result;
}


//======================================================================
// sub_696660
// entry 00696660  size 3347  status ok
//======================================================================

int __cdecl sub_696660(int a1, int a2, int a3, int a4, _DWORD *a5, float *a6, char *a7, float *a8, _DWORD *a9, int a10)
{
  int v10; // ebx
  long double v11; // st7
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // ecx
  float *v15; // edi
  int v16; // edx
  float *v17; // eax
  float *v18; // eax
  float *v19; // ecx
  int v20; // edx
  float *v21; // ebp
  float *v22; // ecx
  float *v23; // eax
  float *v24; // esi
  unsigned int v25; // edx
  double v26; // st7
  double v27; // st6
  float *v28; // edx
  int v29; // ebp
  float *v30; // ecx
  float *v31; // esi
  float *v32; // eax
  unsigned int v33; // esi
  int v34; // edi
  double v35; // st7
  double v36; // st6
  int v37; // edx
  int v38; // esi
  float *v39; // edi
  float *v40; // ebp
  float *v41; // eax
  int v42; // ecx
  unsigned int v43; // edx
  int v44; // ecx
  int v45; // edx
  float *v46; // ecx
  double v47; // st7
  float *v48; // edi
  float *v49; // ebp
  float *v50; // ecx
  float *v51; // edx
  float *v52; // eax
  int v53; // esi
  unsigned int v54; // edx
  double v55; // st7
  bool v56; // zf
  int v57; // esi
  _DWORD *v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // edx
  int v62; // ebp
  int v63; // ecx
  float *v64; // esi
  int v65; // edi
  float *v66; // eax
  int v67; // ebp
  int v68; // edx
  float *v69; // ecx
  double v70; // st7
  double v71; // st6
  int v72; // eax
  float *v73; // edi
  float *v74; // ecx
  float *v75; // esi
  float *v76; // edx
  double v77; // st5
  double v78; // st5
  double v79; // st5
  double v80; // st4
  float *v81; // edx
  float *v82; // ecx
  char *v83; // esi
  float *v84; // eax
  int v85; // edi
  double v86; // st3
  float *v87; // edi
  int v88; // eax
  float *v89; // ecx
  double v90; // st7
  float *v91; // edx
  int v92; // ecx
  int v93; // esi
  _DWORD *v94; // ecx
  float *v95; // eax
  float *v96; // esi
  _DWORD *v97; // ecx
  float *v98; // eax
  int v99; // edx
  int v100; // edi
  int v101; // esi
  int result; // eax
  float *v103; // ecx
  float *v104; // edx
  int v105; // edi
  int v106; // esi
  int v107; // ebp
  int v108; // esi
  int v109; // ebp
  int v110; // edi
  int v111; // ecx
  float *v112; // esi
  unsigned int v113; // eax
  float *v114; // eax
  int v115; // ebx
  int v116; // edi
  float *v117; // ecx
  float *v118; // edx
  int v119; // ebp
  double v120; // st7
  int v121; // eax
  int v122; // ecx
  _DWORD *v123; // edi
  _DWORD *v124; // esi
  int v125; // edx
  int v126; // ecx
  float *v127; // ebp
  int v128; // ecx
  int v129; // eax
  float *v130; // edi
  float *v131; // esi
  unsigned int v132; // edx
  double v133; // st7
  int v134; // [esp+0h] [ebp-4Ch]
  int v135; // [esp+4h] [ebp-48h]
  float *v136; // [esp+8h] [ebp-44h]
  float *v137; // [esp+8h] [ebp-44h]
  int v138; // [esp+8h] [ebp-44h]
  float *v139; // [esp+8h] [ebp-44h]
  int v140; // [esp+8h] [ebp-44h]
  int v141; // [esp+Ch] [ebp-40h]
  int v142; // [esp+10h] [ebp-3Ch]
  float *v143; // [esp+10h] [ebp-3Ch]
  int v144; // [esp+14h] [ebp-38h]
  float *v145; // [esp+14h] [ebp-38h]
  float *v146; // [esp+14h] [ebp-38h]
  int v147; // [esp+14h] [ebp-38h]
  int v148; // [esp+14h] [ebp-38h]
  int v149; // [esp+14h] [ebp-38h]
  char *v150; // [esp+14h] [ebp-38h]
  int v151; // [esp+18h] [ebp-34h]
  float *v152; // [esp+1Ch] [ebp-30h]
  float *v153; // [esp+1Ch] [ebp-30h]
  unsigned int v154; // [esp+1Ch] [ebp-30h]
  int v155; // [esp+1Ch] [ebp-30h]
  int v156; // [esp+1Ch] [ebp-30h]
  int v157; // [esp+20h] [ebp-2Ch]
  float *v158; // [esp+20h] [ebp-2Ch]
  int v159; // [esp+20h] [ebp-2Ch]
  float *v160; // [esp+20h] [ebp-2Ch]
  int v161; // [esp+20h] [ebp-2Ch]
  int v162; // [esp+24h] [ebp-28h]
  int v163; // [esp+24h] [ebp-28h]
  float *v164; // [esp+24h] [ebp-28h]
  float *v165; // [esp+24h] [ebp-28h]
  int v166; // [esp+24h] [ebp-28h]
  float v167; // [esp+24h] [ebp-28h]
  float *v168; // [esp+28h] [ebp-24h]
  int v169; // [esp+28h] [ebp-24h]
  float *v170; // [esp+28h] [ebp-24h]
  int v171; // [esp+28h] [ebp-24h]
  int v172; // [esp+28h] [ebp-24h]
  float v173; // [esp+2Ch] [ebp-20h]
  int v174; // [esp+2Ch] [ebp-20h]
  float v175; // [esp+30h] [ebp-1Ch]
  unsigned int v176; // [esp+30h] [ebp-1Ch]
  int v177; // [esp+34h] [ebp-18h]
  float *v178; // [esp+38h] [ebp-14h]
  int v179; // [esp+38h] [ebp-14h]
  float *v180; // [esp+3Ch] [ebp-10h]
  float *v181; // [esp+3Ch] [ebp-10h]
  float *v182; // [esp+3Ch] [ebp-10h]
  int v183; // [esp+40h] [ebp-Ch]
  float *v184; // [esp+40h] [ebp-Ch]
  int v185; // [esp+40h] [ebp-Ch]
  float *v186; // [esp+44h] [ebp-8h]
  int v187; // [esp+44h] [ebp-8h]
  int v188; // [esp+44h] [ebp-8h]
  float *v189; // [esp+48h] [ebp-4h]
  float *v190; // [esp+48h] [ebp-4h]
  int v191; // [esp+48h] [ebp-4h]
  int v192; // [esp+50h] [ebp+4h]
  float *v193; // [esp+54h] [ebp+8h]
  _DWORD *v194; // [esp+54h] [ebp+8h]
  int v195; // [esp+5Ch] [ebp+10h]
  int v196; // [esp+5Ch] [ebp+10h]
  float *v197; // [esp+5Ch] [ebp+10h]
  int v198; // [esp+5Ch] [ebp+10h]
  int v199; // [esp+60h] [ebp+14h]
  float v200; // [esp+64h] [ebp+18h]
  int v201; // [esp+64h] [ebp+18h]
  int v202; // [esp+64h] [ebp+18h]
  _DWORD *v203; // [esp+64h] [ebp+18h]
  int v204; // [esp+64h] [ebp+18h]
  int v205; // [esp+64h] [ebp+18h]
  _DWORD *v206; // [esp+64h] [ebp+18h]
  int v207; // [esp+68h] [ebp+1Ch]
  float *v208; // [esp+68h] [ebp+1Ch]
  int v209; // [esp+68h] [ebp+1Ch]
  float *v210; // [esp+68h] [ebp+1Ch]
  float *v211; // [esp+6Ch] [ebp+20h]
  float *v212; // [esp+6Ch] [ebp+20h]
  float *v213; // [esp+70h] [ebp+24h]
  int v214; // [esp+70h] [ebp+24h]
  int v215; // [esp+70h] [ebp+24h]
  int v216; // [esp+74h] [ebp+28h]
  unsigned int v217; // [esp+74h] [ebp+28h]
  int v218; // [esp+74h] [ebp+28h]
  float *v219; // [esp+74h] [ebp+28h]
  int v220; // [esp+74h] [ebp+28h]
  float *v221; // [esp+74h] [ebp+28h]
  int v222; // [esp+74h] [ebp+28h]
  float *v223; // [esp+74h] [ebp+28h]
  int v224; // [esp+74h] [ebp+28h]

  v10 = a1;
  v11 = flt_787900 / (double)a2;
  v134 = (a2 + 1) >> 1;
  v151 = (a1 - 1) >> 1;
  v135 = a3 * a1;
  v175 = cos(v11);
  v141 = a2 * a1;
  v173 = sin(v11);
  if ( a1 != 1 )
  {
    v12 = a4;
    if ( a4 > 0 )
    {
      v13 = a9;
      do
      {
        *v13 = *(_DWORD *)((char *)v13 + a7 - (char *)a9);
        ++v13;
        --v12;
      }
      while ( v12 );
    }
    v14 = a2;
    if ( a2 <= 1 )
    {
      v16 = a3;
    }
    else
    {
      v15 = a8;
      v16 = a3;
      v144 = a2 - 1;
      do
      {
        v15 += v135;
        if ( v16 > 0 )
        {
          v17 = v15;
          do
          {
            *v17 = *(float *)((char *)v17 + (char *)a6 - (char *)a8);
            v17 += a1;
            --v16;
          }
          while ( v16 );
          v16 = a3;
          v14 = a2;
        }
        --v144;
      }
      while ( v144 );
    }
    v142 = -a1;
    if ( v151 <= v16 )
    {
      if ( v14 > 1 )
      {
        v28 = a8;
        v29 = 4 * a1;
        v30 = (float *)(a10 - 4 * a1 - 4);
        v31 = a6 - 1;
        v163 = a2 - 1;
        do
        {
          v30 = (float *)((char *)v30 + v29);
          v28 += v135;
          v31 += v135;
          v146 = v30;
          v137 = v28;
          v153 = v31;
          if ( a1 > 2 )
          {
            v32 = v31;
            v33 = ((unsigned int)(a1 - 3) >> 1) + 1;
            v217 = v33;
            do
            {
              v30 += 2;
              v28 += 2;
              v32 += 2;
              v158 = v28;
              v168 = v32;
              if ( a3 > 0 )
              {
                v34 = a3;
                do
                {
                  *(float *)((char *)v32 + (char *)a8 - (char *)a6) = v32[1] * *v30 + *(v30 - 1) * *v32;
                  v35 = *(v30 - 1) * v32[1];
                  v36 = *v32 * *v30;
                  v32 = (float *)((char *)v32 + v29);
                  *v28 = v35 - v36;
                  v28 = (float *)((char *)v28 + v29);
                  --v34;
                }
                while ( v34 );
                v33 = v217;
                v32 = v168;
                v28 = v158;
              }
              v217 = --v33;
            }
            while ( v33 );
            v31 = v153;
            v30 = v146;
            v28 = v137;
          }
          --v163;
        }
        while ( v163 );
      }
    }
    else if ( v14 > 1 )
    {
      v216 = a10 - 4 * a1 - 4;
      v18 = &a8[-a1];
      v19 = &a6[-a1 - 1];
      v20 = v135;
      v162 = a2 - 1;
      while ( 1 )
      {
        v145 = &v18[v20];
        v152 = &v19[v20];
        v216 += 4 * a1;
        if ( a3 > 0 )
        {
          v21 = &v18[v20];
          v136 = &v19[v20];
          v157 = a3;
          do
          {
            v21 += a1;
            v136 += a1;
            if ( a1 > 2 )
            {
              v22 = (float *)v216;
              v23 = v136;
              v24 = v21;
              v25 = ((unsigned int)(a1 - 3) >> 1) + 1;
              do
              {
                v26 = v23[2] * v22[1];
                v27 = v23[3];
                v23 += 2;
                v22 += 2;
                v24 += 2;
                --v25;
                *(float *)((char *)v23 + (char *)a8 - (char *)a6) = v26 + v27 * *v22;
                *v24 = v23[1] * *(v22 - 1) - *v22 * *v23;
              }
              while ( v25 );
            }
            --v157;
          }
          while ( v157 );
        }
        if ( !--v162 )
          break;
        v20 = v135;
        v19 = v152;
        v18 = v145;
      }
    }
    v37 = a2 * v135;
    v218 = 0;
    if ( v151 >= a3 )
    {
      if ( v134 > 1 )
      {
        v48 = a6;
        v49 = &a6[v37];
        v50 = &a8[v37 - 1];
        v51 = a8 - 1;
        v148 = v134 - 1;
        do
        {
          v48 += v135;
          v51 += v135;
          v49 -= v135;
          v50 -= v135;
          v186 = v48;
          v181 = v51;
          v190 = v49;
          v184 = v50;
          if ( a3 > 0 )
          {
            v219 = v51;
            v170 = v48;
            v165 = v49;
            v160 = v50;
            v155 = a3;
            do
            {
              if ( a1 > 2 )
              {
                v52 = v219;
                v53 = (char *)a6 - (char *)a8;
                v54 = ((unsigned int)(a1 - 3) >> 1) + 1;
                do
                {
                  v55 = v52[2] + v50[2];
                  v52 += 2;
                  v50 += 2;
                  v48 += 2;
                  v49 += 2;
                  --v54;
                  *(float *)((char *)v52 + v53) = v55;
                  *(float *)((char *)v50 + v53) = v52[1] - v50[1];
                  *v48 = v50[1] + v52[1];
                  *v49 = *v50 - *v52;
                }
                while ( v54 );
              }
              v48 = &v170[a1];
              v219 += a1;
              v49 = &v165[a1];
              v50 = &v160[a1];
              v170 = v48;
              v56 = v155 == 1;
              v165 = v49;
              v160 = v50;
              --v155;
            }
            while ( !v56 );
            v49 = v190;
            v48 = v186;
            v50 = v184;
            v51 = v181;
          }
          --v148;
        }
        while ( v148 );
      }
    }
    else if ( v134 > 1 )
    {
      v38 = 4 * a1;
      v39 = &a6[-a1];
      v40 = &a8[-a1 - 1];
      v169 = v134 - 1;
      do
      {
        v37 -= v135;
        v218 += v135;
        v39 += v135;
        v40 += v135;
        v189 = v39;
        v142 += v135;
        v147 = v37;
        v138 = v218;
        if ( a1 > 2 )
        {
          v41 = v40;
          v42 = v142;
          v177 = v37 - v218;
          v43 = ((unsigned int)(a1 - 3) >> 1) + 1;
          v154 = v43;
          do
          {
            v39 += 2;
            v41 += 2;
            v138 += 2;
            v42 += 2;
            v180 = v39;
            v178 = v41;
            v183 = v42;
            if ( a3 > 0 )
            {
              v44 = v177 + v42;
              v164 = &a6[v44];
              v45 = (char *)a6 - (char *)a8;
              v46 = &a8[v44 - 1];
              v159 = a3;
              do
              {
                v47 = v41[a1] + v46[a1];
                v41 = (float *)((char *)v41 + v38);
                v46 = (float *)((char *)v46 + v38);
                v39 = (float *)((char *)v39 + v38);
                *(float *)((char *)v41 + v45) = v47;
                v164 = (float *)((char *)v164 + v38);
                *(float *)((char *)v46 + v45) = v41[1] - v46[1];
                *v39 = v46[1] + v41[1];
                *v164 = *v46 - *v41;
                --v159;
              }
              while ( v159 );
              v43 = v154;
              v41 = v178;
              v39 = v180;
              v42 = v183;
            }
            v154 = --v43;
          }
          while ( v43 );
          v37 = v147;
          v39 = v189;
        }
        --v169;
      }
      while ( v169 );
    }
  }
  v57 = a4;
  if ( a4 > 0 )
  {
    v58 = a7;
    v59 = a4;
    do
    {
      *v58 = *(_DWORD *)((char *)v58 + (char *)a9 - a7);
      ++v58;
      --v59;
    }
    while ( v59 );
  }
  v60 = (a2 + 1) >> 1;
  v61 = a4 * a2;
  v62 = a3 * a1;
  v63 = 0;
  if ( v134 > 1 )
  {
    v64 = &a8[-a1];
    v65 = -a1;
    v166 = v134 - 1;
    do
    {
      v63 += v62;
      v64 += v62;
      v65 += v62;
      v61 -= v62;
      v220 = v63;
      v149 = v61;
      if ( a3 > 0 )
      {
        v66 = v64;
        v67 = v61 + v65 - v63;
        v68 = (char *)a6 - (char *)a8;
        v69 = &a8[v67];
        v171 = a3;
        do
        {
          v66 += a1;
          v69 += a1;
          v56 = v171-- == 1;
          *(float *)((char *)v66 + v68) = *v66 + *v69;
          *(float *)((char *)v69 + v68) = *v69 - *v66;
        }
        while ( !v56 );
        v61 = v149;
        v63 = v220;
        v62 = a3 * a1;
      }
      --v166;
    }
    while ( v166 );
    v57 = a4;
    v61 = a4 * a2;
    v60 = (a2 + 1) >> 1;
  }
  v70 = 0.0;
  v172 = v57 * (a2 - 1);
  if ( v60 > 1 )
  {
    v71 = 1.0;
    v139 = (float *)a9;
    v221 = (float *)&a9[v61];
    v156 = v60 - 1;
    do
    {
      v72 = 0;
      v73 = &v221[-a4];
      v200 = v175 * v71 - v70 * v173;
      v139 += a4;
      v221 = v73;
      v70 = v71 * v173 + v70 * v175;
      v71 = v200;
      if ( a4 > 0 )
      {
        v74 = (float *)&a7[4 * a4];
        v75 = (float *)&a7[4 * v172];
        v76 = v139;
        do
        {
          v77 = v200 * *v74++;
          ++v76;
          ++v75;
          v78 = v77 + *(float *)&a7[4 * v72];
          ++v73;
          ++v72;
          *(v76 - 1) = v78;
          *(v73 - 1) = v70 * *(v75 - 1);
        }
        while ( v72 < a4 );
      }
      v79 = v70;
      if ( v134 > 2 )
      {
        v80 = v200;
        v143 = (float *)&a7[4 * a4];
        v161 = v134 - 2;
        v150 = &a7[4 * v172];
        do
        {
          v81 = &v143[a4];
          v167 = v200 * v80 - v79 * v70;
          v143 = v81;
          v150 -= 4 * a4;
          v79 = v79 * v200 + v80 * v70;
          v80 = v167;
          if ( a4 > 0 )
          {
            v82 = v221;
            v83 = v150;
            v84 = v139;
            v85 = a4;
            do
            {
              v86 = v167 * *v81++;
              ++v84;
              v83 += 4;
              ++v82;
              --v85;
              *(v84 - 1) = v86 + *(v84 - 1);
              *(v82 - 1) = v79 * *((float *)v83 - 1) + *(v82 - 1);
            }
            while ( v85 );
          }
          --v161;
        }
        while ( v161 );
      }
      --v156;
    }
    while ( v156 );
    v62 = a3 * a1;
    v60 = (a2 + 1) >> 1;
  }
  if ( v60 > 1 )
  {
    v87 = (float *)a7;
    v201 = v134 - 1;
    do
    {
      v87 += a4;
      v88 = 0;
      if ( a4 > 0 )
      {
        v89 = v87;
        do
        {
          v90 = *(float *)&a9[v88++] + *v89++;
          *(float *)&a9[v88 - 1] = v90;
        }
        while ( v88 < a4 );
      }
      --v201;
    }
    while ( v201 );
  }
  if ( a1 >= a3 )
  {
    if ( a3 > 0 )
    {
      v96 = a8;
      v195 = a3;
      v97 = a5;
      v207 = v141;
      v203 = a5;
      do
      {
        if ( a1 > 0 )
        {
          v98 = v96;
          v99 = a1;
          do
          {
            v100 = *(_DWORD *)v98++;
            *v97++ = v100;
            --v99;
          }
          while ( v99 );
        }
        v97 = &v203[v207];
        v96 += a1;
        v56 = v195 == 1;
        v203 = (_DWORD *)((char *)v203 + v207 * 4);
        --v195;
      }
      while ( !v56 );
    }
  }
  else if ( a1 > 0 )
  {
    v91 = a8;
    v92 = (char *)a5 - (char *)a8;
    v202 = a1;
    do
    {
      if ( a3 > 0 )
      {
        v93 = a3;
        v94 = (_DWORD *)((char *)v91 + v92);
        v95 = v91;
        do
        {
          *v94 = *(_DWORD *)v95;
          v95 += a1;
          v94 += v141;
          --v93;
        }
        while ( v93 );
        v92 = (char *)a5 - (char *)a8;
        v62 = a3 * a1;
      }
      ++v91;
      --v202;
    }
    while ( v202 );
  }
  v101 = a2 * v62;
  result = 2 * a1;
  v222 = a2 * v62;
  if ( v134 > 1 )
  {
    v103 = a8;
    result = (int)a5;
    v104 = &a8[v101];
    v204 = v134 - 1;
    do
    {
      result += 8 * a1;
      v103 += v62;
      v104 -= v62;
      v105 = a3;
      v196 = result;
      v208 = v103;
      v213 = v104;
      if ( a3 > 0 )
      {
        v106 = 4 * a1;
        do
        {
          v107 = *(_DWORD *)v103;
          v103 = (float *)((char *)v103 + v106);
          *(_DWORD *)(result - 4) = v107;
          *(float *)result = *v104;
          result += 4 * v141;
          v104 = (float *)((char *)v104 + v106);
          --v105;
        }
        while ( v105 );
        v62 = a3 * a1;
        result = v196;
        v103 = v208;
        v104 = v213;
        v101 = v222;
      }
      --v204;
    }
    while ( v204 );
  }
  if ( a1 != 1 )
  {
    if ( v151 >= a3 )
    {
      result = (a2 + 1) >> 1;
      if ( v134 > 1 )
      {
        v121 = 4 * v62;
        v198 = (int)&a8[v101 + 2];
        v122 = 8 * a1;
        v206 = a5 - 2;
        v188 = 4 * v62;
        v191 = 8 * a1;
        v194 = a5 + 2;
        v212 = a8 + 2;
        v192 = v134 - 1;
        while ( 1 )
        {
          v123 = (_DWORD *)((char *)v206 + v122);
          v124 = (_DWORD *)((char *)v194 + v122);
          v125 = (int)v212 + v121;
          v126 = v198 - v121;
          v206 = v123;
          v194 = v124;
          v212 = (float *)((char *)v212 + v121);
          v198 -= v121;
          if ( a3 > 0 )
          {
            v199 = v125;
            v127 = (float *)v124;
            v210 = (float *)v123;
            v215 = v126;
            v224 = a3;
            do
            {
              if ( v10 > 2 )
              {
                v128 = v199;
                v129 = v215;
                v130 = v210;
                v131 = v127;
                v132 = ((unsigned int)(v10 - 3) >> 1) + 1;
                do
                {
                  v133 = *(float *)(v128 - 4) + *(float *)(v129 - 4);
                  v131 += 2;
                  v129 += 8;
                  v128 += 8;
                  v130 -= 2;
                  --v132;
                  *(v131 - 3) = v133;
                  v130[1] = *(float *)(v128 - 12) - *(float *)(v129 - 12);
                  *(v131 - 2) = *(float *)(v128 - 8) + *(float *)(v129 - 8);
                  v130[2] = *(float *)(v129 - 8) - *(float *)(v128 - 8);
                }
                while ( v132 );
              }
              v127 += v141;
              v210 += v141;
              v199 += 4 * v10;
              v56 = v224 == 1;
              v215 += 4 * v10;
              --v224;
            }
            while ( !v56 );
          }
          result = --v192;
          if ( !v192 )
            break;
          v122 = v191;
          v121 = v188;
        }
      }
    }
    else
    {
      result = -a1;
      v140 = 0;
      if ( v134 > 1 )
      {
        v108 = (int)&a8[v101 + 2];
        v211 = a8 + 2;
        v187 = 4 * v62;
        v109 = -2;
        v110 = -2 * a1;
        v111 = 4;
        v205 = v108;
        v112 = (float *)(a5 - 2);
        v174 = v134 - 1;
        do
        {
          v112 += 2 * a1;
          v109 += 2 * v10;
          v140 += 2 * v10;
          v111 += v110;
          v179 = v109;
          v211 = (float *)((char *)v211 + v187);
          v182 = v112;
          v185 = v111;
          v205 -= v187;
          if ( v10 > 2 )
          {
            v197 = (float *)v205;
            v113 = ((unsigned int)(v10 - 3) >> 1) + 1;
            v214 = v111;
            v193 = v211;
            v209 = v109;
            v223 = v112;
            v176 = v113;
            do
            {
              if ( a3 > 0 )
              {
                v114 = v197;
                v115 = 4 * v10;
                v116 = 4 * v141;
                v117 = v193;
                v118 = (float *)&a5[v140 + v214 + v209];
                v119 = a3;
                do
                {
                  *(v118 - 1) = *(v114 - 1) + *(v117 - 1);
                  *(v112 - 1) = *(v117 - 1) - *(v114 - 1);
                  *v118 = *v114 + *v117;
                  v120 = *v114 - *v117;
                  v118 = (float *)((char *)v118 + v116);
                  v114 = (float *)((char *)v114 + v115);
                  v117 = (float *)((char *)v117 + v115);
                  *v112 = v120;
                  v112 = (float *)((char *)v112 + v116);
                  --v119;
                }
                while ( v119 );
                v10 = a1;
                v111 = v185;
                v113 = v176;
              }
              v193 += 2;
              v197 += 2;
              v112 = v223 - 2;
              --v113;
              v223 -= 2;
              v209 -= 2;
              v214 += 4;
              v176 = v113;
            }
            while ( v113 );
            v112 = v182;
            v109 = v179;
            v110 = -2 * a1;
          }
          result = --v174;
        }
        while ( v174 );
      }
    }
  }
  return result;
}


//======================================================================
// sub_697380
// entry 00697380  size 55  status ok
//======================================================================

int __cdecl sub_697380(_DWORD *a1, int a2)
{
  void *v2; // eax
  int v4; // [esp-18h] [ebp-20h]

  *a1 = a2;
  a1[1] = calloc(3 * a2, 4u);
  v2 = calloc(0x20u, 4u);
  v4 = a1[1];
  a1[2] = v2;
  return sub_6973C0(a2, v4, v2);
}


//======================================================================
// sub_6973C0
// entry 006973c0  size 422  status ok
//======================================================================

int *__cdecl sub_6973C0(int a1, int a2, int *a3)
{
  int *result; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  int *v7; // ebx
  int v8; // eax
  int *v9; // ebx
  int *v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  int v14; // ebp
  int v15; // esi
  int v16; // eax
  int v17; // edi
  double v18; // st7
  int v19; // ecx
  unsigned int v20; // edx
  long double v21; // st6
  bool v22; // zf
  _DWORD *v23; // [esp+0h] [ebp-14h]
  int *v24; // [esp+4h] [ebp-10h]
  int v25; // [esp+4h] [ebp-10h]
  int v26; // [esp+8h] [ebp-Ch]
  float v27; // [esp+Ch] [ebp-8h]
  float v28; // [esp+10h] [ebp-4h]
  int v29; // [esp+1Ch] [ebp+8h]
  int v30; // [esp+20h] [ebp+Ch]

  result = (int *)a1;
  if ( a1 != 1 )
  {
    v29 = a2 + 4 * a1;
    v4 = a1;
    v5 = 0;
    v6 = 0;
    v7 = (int *)((char *)&unk_7878E8 - 4);
    do
    {
LABEL_4:
      v24 = ++v7;
      if ( (int)v7 >= (int)&flt_7878F8 )
        v5 += 2;
      else
        v5 = *v7;
      v8 = v4 / v5;
    }
    while ( v4 % v5 );
    v9 = &a3[v6];
    while ( 1 )
    {
      ++v9;
      ++v6;
      v4 = v8;
      v9[1] = v5;
      if ( v5 == 2 && v6 != 1 )
      {
        if ( v6 > 1 )
        {
          v10 = v9;
          v11 = v6 - 1;
          do
          {
            v10[1] = *v10;
            --v10;
            --v11;
          }
          while ( v11 );
          v4 = v8;
        }
        a3[2] = 2;
      }
      if ( v8 == 1 )
        break;
      v8 /= v5;
      if ( v4 != v5 * v8 )
      {
        v7 = v24;
        goto LABEL_4;
      }
    }
    result = a3;
    *a3 = a1;
    a3[1] = v6;
    v12 = v6 - 1;
    v30 = 0;
    v13 = 1;
    v28 = flt_7878F8 / (double)a1;
    if ( v12 > 0 )
    {
      v26 = v12;
      v23 = result + 2;
      do
      {
        v14 = 0;
        v15 = v13 * *v23;
        v16 = a1 / v15;
        if ( *v23 - 1 > 0 )
        {
          v25 = *v23 - 1;
          v17 = v29 + 4 * v30;
          v30 += v16 * v25;
          do
          {
            v14 += v13;
            v18 = 0.0;
            if ( v16 > 2 )
            {
              v19 = v17;
              v20 = ((unsigned int)(v16 - 3) >> 1) + 1;
              do
              {
                v18 = v18 + 1.0;
                v27 = (double)v14 * v28;
                v21 = v27 * v18;
                v19 += 8;
                --v20;
                *(float *)(v19 - 8) = cos(v21);
                *(float *)(v19 - 4) = sin(v21);
              }
              while ( v20 );
            }
            v17 += 4 * v16;
            --v25;
          }
          while ( v25 );
        }
        result = (int *)(v26 - 1);
        v22 = v26 == 1;
        v13 = v15;
        ++v23;
        --v26;
      }
      while ( !v22 );
    }
  }
  return result;
}


//======================================================================
// sub_697570
// entry 00697570  size 53  status ok
//======================================================================

int __cdecl sub_697570(int a1)
{
  int result; // eax

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) )
      free(*(void **)(a1 + 4));
    if ( *(_DWORD *)(a1 + 8) )
      free(*(void **)(a1 + 8));
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return 0;
  }
  return result;
}


//======================================================================
// sub_6975B0
// entry 006975b0  size 454  status ok
//======================================================================

int __cdecl sub_6975B0(int a1, int a2)
{
  int v3; // esi
  long double v4; // st7
  float *v5; // edi
  int v6; // ebp
  int v7; // eax
  float *v8; // ecx
  long double v9; // st5
  double v10; // st5
  long double v11; // st5
  int v12; // eax
  float *v13; // edi
  int v14; // ecx
  long double v15; // st6
  int v16; // edi
  int i; // esi
  int v18; // ebx
  char v19; // cl
  int v20; // edx
  int v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+1Ch] [ebp-Ch]
  int v24; // [esp+1Ch] [ebp-Ch]
  _DWORD *v25; // [esp+20h] [ebp-8h]
  int v26; // [esp+24h] [ebp-4h]
  float v27; // [esp+30h] [ebp+8h]

  v3 = a2 / 4;
  v25 = malloc(4 * (a2 / 4));
  v4 = (double)a2;
  v5 = (float *)malloc(4 * (a2 / 4 + a2));
  v6 = a2 >> 1;
  v27 = v4;
  v26 = (__int64)floor(__FYL2X__(v4, 0.6931471805599453094) / __FYL2X__(2.0, 0.6931471805599453094) + 0.5);
  *(_DWORD *)(a1 + 4) = v26;
  v7 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = v25;
  if ( v3 > 0 )
  {
    v22 = 0;
    v8 = &v5[v6];
    v23 = 1;
    do
    {
      ++v7;
      v8 += 2;
      v9 = (double)v22 * (3.1415927 / v27);
      v22 += 4;
      v5[2 * v7 - 2] = cos(v9);
      v5[2 * v7 - 1] = -sin(v9);
      v10 = (double)v23;
      v23 += 2;
      v11 = v10 * (3.1415927 / (double)(2 * a2));
      *(v8 - 2) = cos(v11);
      *(v8 - 1) = sin(v11);
    }
    while ( v7 < v3 );
  }
  v12 = a2 / 8;
  if ( a2 / 8 > 0 )
  {
    v24 = 2;
    v13 = &v5[a2];
    v14 = a2 / 8;
    do
    {
      v13 += 2;
      --v14;
      v15 = (double)v24 * (3.1415927 / v27);
      v24 += 4;
      *(v13 - 2) = cos(v15) * 0.5;
      *(v13 - 1) = sin(v15) * -0.5;
    }
    while ( v14 );
  }
  v16 = 0;
  for ( i = 1 << (v26 - 2); v16 < v12; ++v16 )
  {
    v18 = 0;
    v19 = 0;
    if ( i )
    {
      v20 = 1 << (v26 - 2);
      do
      {
        if ( (v20 & v16) != 0 )
          v18 |= 1 << v19;
        v20 = i >> ++v19;
      }
      while ( i >> v19 );
    }
    v25[2 * v16 + 1] = v18;
    v25[2 * v16] = (((1 << (v26 - 1)) - 1) & ~v18) - 1;
  }
  *(float *)(a1 + 16) = 4.0 / v27;
  return a1;
}


//======================================================================
// sub_697780
// entry 00697780  size 59  status ok
//======================================================================

int __cdecl sub_697780(int a1)
{
  int result; // eax

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      free(*(void **)(a1 + 8));
    if ( *(_DWORD *)(a1 + 12) )
      free(*(void **)(a1 + 12));
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    return 0;
  }
  return result;
}


//======================================================================
// sub_6977C0
// entry 006977c0  size 1279  status ok
//======================================================================

float *__cdecl sub_6977C0(int *a1, unsigned int a2, int a3)
{
  int *v3; // ebx
  int v4; // edi
  int v5; // eax
  float *v6; // ecx
  float *v7; // edx
  int v8; // ebp
  int v9; // eax
  double v10; // st7
  float *v11; // edx
  float *v12; // ecx
  float *v13; // eax
  double v14; // st7
  double v15; // st6
  unsigned int v16; // ebp
  int v17; // eax
  float *v18; // edx
  float *v19; // eax
  float *v20; // ecx
  double v21; // st7
  double v22; // st6
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st6
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st4
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int v34; // esi
  bool v35; // zf
  unsigned int v36; // edi
  _DWORD *v37; // esi
  int v38; // ebp
  float *v39; // edx
  float *v40; // eax
  float *v41; // ecx
  int v42; // ebx
  double v43; // st7
  double v44; // st6
  float *v45; // edi
  float *v46; // ebx
  double v47; // st6
  double v48; // st7
  double v49; // st6
  int v50; // edi
  int v51; // ebx
  double v52; // st7
  double v53; // st6
  float *v54; // edi
  float *v55; // ebx
  double v56; // st6
  double v57; // st7
  double v58; // st6
  float *v59; // eax
  float *v60; // edx
  float *v61; // esi
  int v62; // ecx
  double v63; // st7
  double v64; // st6
  float *v65; // eax
  int v66; // ecx
  float *v67; // edx
  double v68; // st7
  double v69; // st7
  double v70; // st7
  double v71; // st7
  float *v72; // ecx
  float *result; // eax
  int v74; // esi
  int v75; // [esp+10h] [ebp-1Ch]
  float v76; // [esp+10h] [ebp-1Ch]
  float v77; // [esp+10h] [ebp-1Ch]
  int v78; // [esp+14h] [ebp-18h]
  float *v79; // [esp+18h] [ebp-14h]
  unsigned int v80; // [esp+1Ch] [ebp-10h]
  int v81; // [esp+20h] [ebp-Ch]
  int v82; // [esp+24h] [ebp-8h]
  int v83; // [esp+28h] [ebp-4h]
  int v84; // [esp+34h] [ebp+8h]
  int v85; // [esp+34h] [ebp+8h]
  float v86; // [esp+34h] [ebp+8h]
  float v87; // [esp+34h] [ebp+8h]

  v3 = a1;
  v4 = *a1 >> 1;
  v5 = *a1 >> 2;
  v82 = v4;
  v6 = (float *)(a2 + 4 * v4 - 28);
  v7 = (float *)(a3 + 4 * (v5 + v4));
  v8 = 4 * v5;
  v79 = v7;
  v83 = 4 * v5;
  v9 = 4 * v5 + a1[2];
  do
  {
    v10 = v6[2] * *(float *)(v9 + 12);
    v7 -= 4;
    v6 -= 8;
    v9 += 16;
    *v7 = -v10 - v6[8] * *(float *)(v9 - 8);
    v7[1] = v6[8] * *(float *)(v9 - 4) - v6[10] * *(float *)(v9 - 8);
    v7[2] = -(*(float *)(v9 - 12) * v6[14]) - v6[12] * *(float *)(v9 - 16);
    v7[3] = *(float *)(v9 - 12) * v6[12] - *(float *)(v9 - 16) * v6[14];
  }
  while ( (unsigned int)v6 >= a2 );
  v11 = v79;
  v12 = (float *)(a2 + 4 * v4 - 32);
  v13 = (float *)(v8 + a1[2]);
  do
  {
    v14 = v12[4] * *(v13 - 1);
    v15 = *(v13 - 2) * v12[6];
    v13 -= 4;
    v12 -= 8;
    v11 += 4;
    *(v11 - 4) = v14 + v15;
    *(v11 - 3) = v12[12] * v13[2] - v13[3] * v12[14];
    *(v11 - 2) = v12[10] * *v13 + v12[8] * v13[1];
    *(v11 - 1) = v12[8] * *v13 - v13[1] * v12[10];
  }
  while ( (unsigned int)v12 >= a2 );
  v81 = a1[2];
  v16 = a3 + 4 * v4;
  v17 = a1[1] - 6;
  v80 = v16;
  v84 = v17;
  if ( v17 > 0 )
  {
    v18 = (float *)(a1[2] + 16);
    v19 = (float *)(v16 + 4 * (v4 >> 1) - 32);
    v20 = &v19[v4 - (v4 >> 1) + 7];
    do
    {
      v21 = *(v20 - 1) - v19[6];
      v22 = *v20 - v19[7];
      *(v20 - 1) = *(v20 - 1) + v19[6];
      *v20 = v19[7] + *v20;
      v19[6] = v21 * *(v18 - 4) + v22 * *(v18 - 3);
      v19[7] = v22 * *(v18 - 4) - v21 * *(v18 - 3);
      v23 = *(v20 - 3) - v19[4];
      v24 = *(v20 - 2) - v19[5];
      *(v20 - 3) = *(v20 - 3) + v19[4];
      *(v20 - 2) = *(v20 - 2) + v19[5];
      v19[4] = v24 * v18[1] + v23 * *v18;
      v19[5] = v24 * *v18 - v23 * v18[1];
      v25 = *(v20 - 5) - v19[2];
      v26 = *(v20 - 4) - v19[3];
      *(v20 - 5) = v19[2] + *(v20 - 5);
      *(v20 - 4) = v19[3] + *(v20 - 4);
      v19[2] = v26 * v18[5] + v25 * v18[4];
      v19[3] = v26 * v18[4] - v25 * v18[5];
      v27 = *(v20 - 7) - *v19;
      v28 = *(v20 - 6) - v19[1];
      *(v20 - 7) = *(v20 - 7) + *v19;
      *(v20 - 6) = v19[1] + *(v20 - 6);
      v29 = v28 * v18[9];
      v30 = v27 * v18[8];
      v19 -= 8;
      v20 -= 8;
      v18 += 16;
      v19[8] = v29 + v30;
      v19[9] = v28 * *(v18 - 8) - v27 * *(v18 - 7);
    }
    while ( (unsigned int)v19 >= v16 );
    v17 = v84;
  }
  v31 = v17 - 1;
  v32 = 1;
  v75 = 1;
  if ( v31 > 0 )
  {
    v78 = v31;
    do
    {
      if ( 1 << v32 > 0 )
      {
        v33 = 4 << v32;
        v34 = v4 >> v32;
        v85 = 1 << v32;
        do
        {
          sub_698200(v81, v16, v34, v33);
          v16 += 4 * v34;
          --v85;
        }
        while ( v85 );
        v3 = a1;
        v16 = a3 + 4 * v4;
        v32 = v75;
      }
      ++v32;
      v35 = v78 == 1;
      v75 = v32;
      --v78;
    }
    while ( !v35 );
  }
  if ( v4 > 0 )
  {
    v36 = ((unsigned int)(v4 - 1) >> 5) + 1;
    do
    {
      sub_697CC0(v16);
      v16 += 128;
      --v36;
    }
    while ( v36 );
  }
  v37 = (_DWORD *)v3[3];
  v38 = a3 + 4 * (*v3 >> 1);
  v39 = (float *)(a3 + 8);
  v40 = (float *)(v3[2] + 4 * *v3);
  v41 = (float *)(v38 + 12);
  do
  {
    v42 = v37[1];
    v41 -= 4;
    v43 = *(float *)(v38 + 4 * *v37 + 4) - *(float *)(v38 + 4 * v42 + 4);
    v44 = *(float *)(v38 + 4 * v42);
    v45 = (float *)(v38 + 4 * *v37);
    v46 = (float *)(v38 + 4 * v42);
    v47 = v44 + *v45;
    v86 = v47 * *v40 + v43 * v40[1];
    v48 = v47 * v40[1] - v43 * *v40;
    v49 = (v46[1] + v45[1]) * 0.5;
    v76 = (*v45 - *v46) * 0.5;
    *(v39 - 2) = v86 + v49;
    *(v41 - 1) = v49 - v86;
    *(v39 - 1) = v76 + v48;
    *v41 = v48 - v76;
    v50 = v37[2];
    v51 = v37[3];
    v52 = *(float *)(v38 + 4 * v50 + 4) - *(float *)(v38 + 4 * v51 + 4);
    v53 = *(float *)(v38 + 4 * v51);
    v54 = (float *)(v38 + 4 * v50);
    v55 = (float *)(v38 + 4 * v51);
    v56 = v53 + *v54;
    v87 = v56 * v40[2] + v52 * v40[3];
    v57 = v56 * v40[3] - v52 * v40[2];
    v58 = (v55[1] + v54[1]) * 0.5;
    v77 = (*v54 - *v55) * 0.5;
    *v39 = v87 + v58;
    *(v41 - 3) = v58 - v87;
    v39[1] = v77 + v57;
    v39 += 4;
    v40 += 4;
    v37 += 4;
    *(v41 - 2) = v57 - v77;
  }
  while ( v39 - 2 < v41 - 3 );
  v59 = (float *)(4 * v82 + a1[2]);
  v60 = v79;
  v61 = v79;
  v62 = a3 + 12;
  do
  {
    v63 = v59[1] * *(float *)(v62 - 12);
    v64 = *v59 * *(float *)(v62 - 8);
    v60 -= 4;
    v62 += 32;
    v61 += 4;
    v59 += 8;
    v60[3] = v63 - v64;
    *(v61 - 4) = -(*(v59 - 7) * *(float *)(v62 - 40) + *(float *)(v62 - 44) * *(v59 - 8));
    v60[2] = *(float *)(v62 - 36) * *(v59 - 5) - *(float *)(v62 - 32) * *(v59 - 6);
    *(v61 - 3) = -(*(float *)(v62 - 36) * *(v59 - 6) + *(float *)(v62 - 32) * *(v59 - 5));
    v60[1] = *(float *)(v62 - 28) * *(v59 - 3) - *(float *)(v62 - 24) * *(v59 - 4);
    *(v61 - 2) = -(*(float *)(v62 - 28) * *(v59 - 4) + *(float *)(v62 - 24) * *(v59 - 3));
    *v60 = *(float *)(v62 - 20) * *(v59 - 1) - *(float *)(v62 - 16) * *(v59 - 2);
    *(v61 - 1) = -(*(float *)(v62 - 20) * *(v59 - 2) + *(float *)(v62 - 16) * *(v59 - 1));
  }
  while ( v62 - 12 < (unsigned int)v60 );
  v65 = v79;
  v66 = v83 + a3 + 8;
  v67 = &v79[2 - v82];
  do
  {
    v68 = *(v65 - 1);
    v65 -= 4;
    v67 -= 4;
    v66 += 16;
    v67[1] = v68;
    *(float *)(v66 - 24) = -v68;
    v69 = v65[2];
    *v67 = v65[2];
    *(float *)(v66 - 20) = -v69;
    v70 = v65[1];
    *(v67 - 1) = v65[1];
    *(float *)(v66 - 16) = -v70;
    v71 = *v65;
    *(v67 - 2) = *v65;
    *(float *)(v66 - 12) = -v71;
  }
  while ( v66 - 8 < (unsigned int)v65 );
  v72 = v79;
  result = v79;
  do
  {
    v74 = *((_DWORD *)v72 + 3);
    result -= 4;
    v72 += 4;
    *(_DWORD *)result = v74;
    result[1] = *(v72 - 2);
    result[2] = *(v72 - 3);
    result[3] = *(v72 - 4);
  }
  while ( (unsigned int)result > v80 );
  return result;
}


//======================================================================
// sub_697CC0
// entry 00697cc0  size 1344  status ok
//======================================================================

float *__cdecl sub_697CC0(float *a1)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st6
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // st7
  double v22; // st6
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st6
  double v27; // st5
  double v28; // st7
  double v29; // st5
  double v30; // st4
  double v31; // st7
  double v32; // st5
  double v33; // st7
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st7
  double v38; // st6
  double v39; // st7
  double v40; // st6
  double v41; // st7
  double v42; // st6
  double v43; // st7
  double v44; // st6
  double v45; // st7
  double v46; // st6
  double v47; // st7
  double v48; // st6
  double v49; // st5
  double v50; // st7
  double v51; // st5
  double v52; // st4
  double v53; // st7
  double v54; // st5
  double v55; // st7
  float *result; // eax
  double v57; // st7
  double v58; // st6
  double v59; // st5
  double v60; // st7
  double v61; // st6
  double v62; // st7
  double v63; // st6
  float v64; // [esp+0h] [ebp-8h]
  float v65; // [esp+0h] [ebp-8h]
  float v66; // [esp+4h] [ebp-4h]
  float v67; // [esp+4h] [ebp-4h]
  float v68; // [esp+4h] [ebp-4h]
  float v69; // [esp+4h] [ebp-4h]
  float v70; // [esp+Ch] [ebp+4h]
  float v71; // [esp+Ch] [ebp+4h]
  float v72; // [esp+Ch] [ebp+4h]
  float v73; // [esp+Ch] [ebp+4h]
  float v74; // [esp+Ch] [ebp+4h]

  v2 = a1[30] - a1[14];
  v3 = a1[31] - a1[15];
  a1[30] = a1[14] + a1[30];
  a1[31] = a1[31] + a1[15];
  a1[14] = v2;
  a1[15] = v3;
  v4 = a1[28] - a1[12];
  v5 = a1[29] - a1[13];
  a1[28] = a1[12] + a1[28];
  a1[29] = a1[29] + a1[13];
  a1[12] = v4 * 0.9238795 - v5 * 0.38268343;
  a1[13] = v5 * 0.9238795 + v4 * 0.38268343;
  v6 = a1[26] - a1[10];
  v7 = a1[27] - a1[11];
  a1[26] = a1[10] + a1[26];
  a1[27] = a1[27] + a1[11];
  a1[10] = (v6 - v7) * 0.70710677;
  a1[11] = (v7 + v6) * 0.70710677;
  v8 = a1[24] - a1[8];
  v9 = a1[25] - a1[9];
  a1[24] = a1[8] + a1[24];
  a1[25] = a1[25] + a1[9];
  a1[8] = v8 * 0.38268343 - v9 * 0.9238795;
  a1[9] = v9 * 0.38268343 + v8 * 0.9238795;
  v10 = a1[22] - a1[6];
  v11 = a1[7] - a1[23];
  a1[22] = a1[6] + a1[22];
  a1[23] = a1[7] + a1[23];
  a1[6] = v11;
  a1[7] = v10;
  v12 = a1[4] - a1[20];
  v13 = a1[5] - a1[21];
  a1[20] = a1[20] + a1[4];
  a1[21] = a1[5] + a1[21];
  a1[4] = 0.9238795 * v13 + v12 * 0.38268343;
  a1[5] = v13 * 0.38268343 - v12 * 0.9238795;
  v14 = a1[2] - a1[18];
  v15 = a1[3] - a1[19];
  a1[18] = a1[18] + a1[2];
  a1[19] = a1[19] + a1[3];
  a1[2] = (v15 + v14) * 0.70710677;
  a1[3] = (v15 - v14) * 0.70710677;
  v16 = *a1 - a1[16];
  v17 = a1[1] - a1[17];
  a1[16] = a1[16] + *a1;
  a1[17] = a1[17] + a1[1];
  v70 = 0.38268343 * v17 + v16 * 0.9238795;
  v18 = v17 * 0.9238795 - v16 * 0.38268343;
  v19 = v18 - a1[9];
  v20 = v70 - a1[8];
  a1[8] = v70 + a1[8];
  a1[9] = v18 + a1[9];
  *a1 = (v20 + v19) * 0.70710677;
  a1[1] = (v19 - v20) * 0.70710677;
  v21 = a1[3] - a1[11];
  v22 = a1[10] - a1[2];
  a1[10] = a1[2] + a1[10];
  a1[11] = a1[3] + a1[11];
  a1[2] = v21;
  a1[3] = v22;
  v23 = a1[12] - a1[4];
  v24 = a1[13] - a1[5];
  a1[12] = a1[12] + a1[4];
  a1[13] = a1[5] + a1[13];
  a1[4] = (v23 - v24) * 0.70710677;
  a1[5] = (v24 + v23) * 0.70710677;
  v25 = a1[14] - a1[6];
  v26 = a1[15] - a1[7];
  a1[14] = a1[14] + a1[6];
  a1[15] = a1[7] + a1[15];
  v27 = v25;
  v28 = v25 + a1[2];
  v29 = v27 - a1[2];
  v30 = *a1 + a1[4];
  v64 = a1[4] - *a1;
  a1[6] = v30 + v28;
  a1[4] = v28 - v30;
  v31 = v29;
  v32 = a1[5] - a1[1];
  v71 = v26 - a1[3];
  *a1 = v31 + v32;
  a1[2] = v31 - v32;
  v66 = a1[5] + a1[1];
  v33 = v26 + a1[3];
  a1[3] = v64 + v71;
  a1[1] = v71 - v64;
  a1[7] = v66 + v33;
  a1[5] = v33 - v66;
  v34 = a1[10] + a1[14];
  v35 = a1[14] - a1[10];
  v36 = a1[8] + a1[12];
  v67 = a1[12] - a1[8];
  a1[14] = v36 + v34;
  a1[12] = v34 - v36;
  v37 = v35;
  v38 = a1[13] - a1[9];
  v72 = a1[15] - a1[11];
  a1[8] = v37 + v38;
  a1[10] = v37 - v38;
  v39 = a1[9] + a1[13];
  v40 = a1[11] + a1[15];
  a1[11] = v67 + v72;
  a1[9] = v72 - v67;
  a1[15] = v40 + v39;
  a1[13] = v40 - v39;
  v41 = a1[17] - a1[25];
  v42 = a1[16] - a1[24];
  a1[24] = a1[16] + a1[24];
  a1[25] = a1[25] + a1[17];
  a1[16] = (v42 + v41) * 0.70710677;
  a1[17] = (v41 - v42) * 0.70710677;
  v43 = a1[19] - a1[27];
  v44 = a1[26] - a1[18];
  a1[26] = a1[18] + a1[26];
  a1[27] = a1[27] + a1[19];
  a1[18] = v43;
  a1[19] = v44;
  v45 = a1[28] - a1[20];
  v46 = a1[29] - a1[21];
  a1[28] = a1[20] + a1[28];
  a1[29] = a1[21] + a1[29];
  a1[20] = (v45 - v46) * 0.70710677;
  a1[21] = (v46 + v45) * 0.70710677;
  v47 = a1[30] - a1[22];
  v48 = a1[31] - a1[23];
  a1[30] = a1[22] + a1[30];
  a1[31] = a1[23] + a1[31];
  v49 = v47;
  v50 = v47 + a1[18];
  v51 = v49 - a1[18];
  v52 = a1[20] + a1[16];
  v68 = a1[20] - a1[16];
  a1[22] = v52 + v50;
  a1[20] = v50 - v52;
  v53 = v51;
  v54 = a1[21] - a1[17];
  v73 = v48 - a1[19];
  a1[16] = v53 + v54;
  a1[18] = v53 - v54;
  v65 = a1[17] + a1[21];
  v55 = v48 + a1[19];
  a1[19] = v68 + v73;
  a1[17] = v73 - v68;
  a1[23] = v65 + v55;
  a1[21] = v55 - v65;
  result = a1 + 24;
  v57 = result[2] + result[6];
  v58 = result[6] - result[2];
  v59 = *result + result[4];
  v69 = result[4] - *result;
  result[6] = v59 + v57;
  result[4] = v57 - v59;
  v60 = v58;
  v61 = result[5] - result[1];
  v74 = result[7] - result[3];
  *result = v60 + v61;
  result[2] = v60 - v61;
  v62 = result[1] + result[5];
  v63 = result[3] + result[7];
  result[3] = v69 + v74;
  result[1] = v74 - v69;
  result[7] = v63 + v62;
  result[5] = v63 - v62;
  return result;
}


//======================================================================
// sub_698200
// entry 00698200  size 279  status ok
//======================================================================

float *__cdecl sub_698200(float *a1, unsigned int a2, int a3, int a4)
{
  int v4; // esi
  float *result; // eax
  float *v7; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // rt0
  double v11; // st6
  float *v12; // edx
  double v13; // st7
  double v14; // st6
  double v15; // rt1
  double v16; // st6
  float *v17; // edx
  double v18; // st7
  double v19; // st6
  double v20; // rt2
  double v21; // st6
  float *v22; // edx
  double v23; // st7
  double v24; // st6
  double v25; // rtt
  double v26; // st6

  v4 = a4;
  result = (float *)(a2 + 4 * (a3 >> 1) - 32);
  v7 = &result[a3 - (a3 >> 1) + 7];
  do
  {
    v8 = *(v7 - 1) - result[6];
    v9 = *v7 - result[7];
    *(v7 - 1) = *(v7 - 1) + result[6];
    *v7 = result[7] + *v7;
    result[6] = v9 * a1[1] + v8 * *a1;
    v10 = v9 * *a1;
    v11 = v8 * a1[1];
    v12 = &a1[v4];
    result[7] = v10 - v11;
    v13 = *(v7 - 3) - result[4];
    v14 = *(v7 - 2) - result[5];
    *(v7 - 3) = result[4] + *(v7 - 3);
    *(v7 - 2) = *(v7 - 2) + result[5];
    result[4] = v14 * v12[1] + v13 * *v12;
    v15 = v14 * *v12;
    v16 = v13 * v12[1];
    v17 = &v12[v4];
    result[5] = v15 - v16;
    v18 = *(v7 - 5) - result[2];
    v19 = *(v7 - 4) - result[3];
    *(v7 - 5) = result[2] + *(v7 - 5);
    *(v7 - 4) = result[3] + *(v7 - 4);
    result[2] = v19 * v17[1] + v18 * *v17;
    v20 = v19 * *v17;
    v21 = v18 * v17[1];
    v22 = &v17[v4];
    result[3] = v20 - v21;
    v23 = *(v7 - 7) - *result;
    v24 = *(v7 - 6) - result[1];
    *(v7 - 7) = *result + *(v7 - 7);
    *(v7 - 6) = *(v7 - 6) + result[1];
    result -= 8;
    v7 -= 8;
    result[8] = v24 * v22[1] + v23 * *v22;
    v25 = v24 * *v22;
    v26 = v23 * v22[1];
    a1 = &v22[v4];
    result[9] = v25 - v26;
  }
  while ( (unsigned int)result >= a2 );
  return result;
}


//======================================================================
// sub_698320
// entry 00698320  size 1102  status ok
//======================================================================

int __cdecl sub_698320(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  void *v8; // esp
  float *v9; // esi
  float *v10; // edx
  float *v11; // eax
  int v12; // ecx
  double v13; // st7
  double v14; // st6
  int v15; // ebx
  float *i; // edi
  double v17; // st7
  double v18; // st6
  double v19; // st6
  float *v20; // edx
  int j; // ebx
  double v22; // st7
  double v23; // st7
  double v24; // st6
  int *v25; // edx
  float *v26; // edi
  int v27; // eax
  float *v28; // edx
  float *v29; // eax
  float *v30; // ecx
  double v31; // st7
  double v32; // st6
  double v33; // st7
  double v34; // st6
  double v35; // st7
  double v36; // st6
  double v37; // st7
  double v38; // st6
  double v39; // st5
  double v40; // st4
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // edi
  unsigned int v45; // ebx
  bool v46; // zf
  unsigned int v47; // edi
  _DWORD *v48; // esi
  int v49; // edi
  float *v50; // eax
  float *v51; // edx
  float *v52; // edi
  float *v53; // ecx
  float *v54; // edi
  float *v55; // ebx
  double v56; // st7
  double v57; // st6
  double v58; // st7
  double v59; // st6
  double v60; // st5
  int v61; // edi
  float *v62; // edi
  float *v63; // ebx
  double v64; // st7
  double v65; // st6
  double v66; // st7
  double v67; // st6
  __int64 v68; // rax
  float *v69; // esi
  float *v70; // ecx
  double v71; // st7
  double v72; // st6
  bool v73; // cc
  _DWORD v75[3]; // [esp+0h] [ebp-2Ch] BYREF
  int v76; // [esp+Ch] [ebp-20h]
  float *v77; // [esp+10h] [ebp-1Ch]
  int k; // [esp+14h] [ebp-18h]
  float *v79; // [esp+18h] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-10h]
  int v81; // [esp+20h] [ebp-Ch]
  int v82; // [esp+24h] [ebp-8h]
  float v83; // [esp+28h] [ebp-4h]
  int v84; // [esp+38h] [ebp+Ch]
  int v85; // [esp+38h] [ebp+Ch]
  float *v86; // [esp+38h] [ebp+Ch]
  float v87; // [esp+38h] [ebp+Ch]
  float *v88; // [esp+38h] [ebp+Ch]
  float v89; // [esp+38h] [ebp+Ch]

  v3 = *(_DWORD *)a1;
  k = 4 * *(_DWORD *)a1;
  v4 = k + 3;
  v5 = v3 >> 1;
  v6 = v3 >> 2;
  v7 = v3 >> 3;
  LOBYTE(v4) = (k + 3) & 0xFC;
  v83 = *(float *)&v5;
  v82 = v6;
  v80 = v7;
  v8 = alloca(v4);
  v79 = (float *)v75;
  v76 = 4 * v5;
  v9 = (float *)&v75[v5];
  v10 = (float *)(a2 + 4 * (v5 + v6));
  v81 = (int)(v10 + 1);
  v11 = (float *)(4 * v5 + *(_DWORD *)(a1 + 8));
  v12 = 0;
  if ( v7 > 0 )
  {
    do
    {
      v10 -= 4;
      v11 -= 2;
      v12 += 2;
      v13 = v10[2] + *(float *)v81;
      v14 = *(float *)(v81 + 8) + *v10;
      v81 += 16;
      v9[v12 - 2] = v14 * v11[1] + v13 * *v11;
      v9[v12 - 1] = v14 * *v11 - v13 * v11[1];
    }
    while ( v12 < v7 );
    v5 = LODWORD(v83);
  }
  v15 = v5 - v80;
  for ( i = (float *)(a2 + 4); v12 < v15; v9[v12 - 1] = v19 * *v11 - v17 * v11[1] )
  {
    v17 = *(v10 - 2) - *i;
    v18 = *(v10 - 4);
    v10 -= 4;
    v11 -= 2;
    v19 = v18 - i[2];
    v12 += 2;
    i += 4;
    v9[v12 - 2] = v19 * v11[1] + v17 * *v11;
  }
  v20 = (float *)(a2 + k);
  for ( j = LODWORD(v83); v12 < j; v9[v12 - 1] = v24 * *v11 - v23 * v11[1] )
  {
    v22 = *(v20 - 2);
    v20 -= 4;
    v11 -= 2;
    v23 = -v22 - *i;
    v24 = -*v20 - i[2];
    v12 += 2;
    i += 4;
    v9[v12 - 2] = v24 * v11[1] + v23 * *v11;
  }
  v25 = (int *)a1;
  v26 = *(float **)(a1 + 8);
  v27 = *(_DWORD *)(a1 + 4) - 6;
  v77 = v26;
  v84 = v27;
  if ( v27 > 0 )
  {
    v28 = v26 + 4;
    v29 = &v9[(j >> 1) - 8];
    v30 = &v29[j - (j >> 1) + 7];
    do
    {
      v31 = *(v30 - 1) - v29[6];
      v32 = *v30 - v29[7];
      *(v30 - 1) = *(v30 - 1) + v29[6];
      *v30 = v29[7] + *v30;
      v29[6] = v32 * *(v28 - 3) + v31 * *(v28 - 4);
      v29[7] = v32 * *(v28 - 4) - v31 * *(v28 - 3);
      v33 = *(v30 - 3) - v29[4];
      v34 = *(v30 - 2) - v29[5];
      *(v30 - 3) = v29[4] + *(v30 - 3);
      *(v30 - 2) = *(v30 - 2) + v29[5];
      v29[4] = v34 * v28[1] + v33 * *v28;
      v29[5] = v34 * *v28 - v33 * v28[1];
      v35 = *(v30 - 5) - v29[2];
      v36 = *(v30 - 4) - v29[3];
      *(v30 - 5) = v29[2] + *(v30 - 5);
      *(v30 - 4) = *(v30 - 4) + v29[3];
      v29[2] = v36 * v28[5] + v35 * v28[4];
      v29[3] = v36 * v28[4] - v35 * v28[5];
      v37 = *(v30 - 7) - *v29;
      v38 = *(v30 - 6) - v29[1];
      *(v30 - 7) = *v29 + *(v30 - 7);
      *(v30 - 6) = v29[1] + *(v30 - 6);
      v39 = v38 * v28[9];
      v40 = v37 * v28[8];
      v29 -= 8;
      v30 -= 8;
      v28 += 16;
      v29[8] = v39 + v40;
      v29[9] = v38 * *(v28 - 8) - v37 * *(v28 - 7);
    }
    while ( v29 >= v9 );
    v27 = v84;
    v25 = (int *)a1;
  }
  v41 = v27 - 1;
  v42 = 1;
  v81 = 1;
  if ( v41 > 0 )
  {
    v80 = v41;
    do
    {
      if ( 1 << v42 > 0 )
      {
        v43 = 4 << v42;
        v44 = j >> v42;
        v45 = (unsigned int)v9;
        v85 = 1 << v42;
        for ( k = 4 << v42; ; v43 = k )
        {
          sub_698200(v77, v45, v44, v43);
          v45 += 4 * v44;
          if ( !--v85 )
            break;
        }
        v42 = v81;
        j = LODWORD(v83);
      }
      ++v42;
      v46 = v80 == 1;
      v81 = v42;
      --v80;
    }
    while ( !v46 );
    v25 = (int *)a1;
  }
  if ( j > 0 )
  {
    v47 = ((unsigned int)(j - 1) >> 5) + 1;
    do
    {
      sub_697CC0(v9);
      v9 += 32;
      --v47;
    }
    while ( v47 );
    v25 = (int *)a1;
  }
  v48 = (_DWORD *)v25[3];
  v49 = *v25 >> 1;
  v50 = (float *)(v25[2] + 4 * *v25);
  v51 = v79 + 2;
  v52 = &v79[v49];
  v80 = (int)v52;
  v53 = v52 + 3;
  while ( 1 )
  {
    v53 -= 4;
    v86 = &v52[*v48];
    v54 = &v52[v48[1]];
    v55 = v86;
    v56 = v86[1] - v54[1];
    v57 = *v54 + *v86;
    v87 = v56 * v50[1] + v57 * *v50;
    v58 = v57 * v50[1] - v56 * *v50;
    v59 = (v54[1] + v55[1]) * 0.5;
    v60 = *v55 - *v54;
    v61 = v80;
    v83 = v60 * 0.5;
    *(v51 - 2) = v87 + v59;
    *(v53 - 1) = v59 - v87;
    *(v51 - 1) = v83 + v58;
    *v53 = v58 - v83;
    v88 = (float *)(v61 + 4 * v48[2]);
    v62 = (float *)(v61 + 4 * v48[3]);
    v63 = v88;
    v64 = v88[1] - v62[1];
    v65 = *v62 + *v88;
    v89 = v65 * v50[2] + v64 * v50[3];
    v66 = v65 * v50[3] - v64 * v50[2];
    v67 = (v62[1] + v63[1]) * 0.5;
    v83 = (*v63 - *v62) * 0.5;
    *v51 = v89 + v67;
    v51 += 4;
    v50 += 4;
    v48 += 4;
    *(v53 - 3) = v67 - v89;
    *(v51 - 3) = v83 + v66;
    *(v53 - 2) = v66 - v83;
    if ( v51 - 2 >= v53 - 3 )
      break;
    v52 = (float *)v80;
  }
  v68 = (unsigned int)(v76 + *(_DWORD *)(a1 + 8));
  v69 = (float *)(a3 + v76);
  if ( v82 > 0 )
  {
    v70 = v79;
    do
    {
      v71 = *(float *)v68 * *v70;
      v72 = *(float *)(v68 + 4) * v70[1];
      --v69;
      v70 += 2;
      LODWORD(v68) = v68 + 8;
      ++HIDWORD(v68);
      *(float *)(a3 + 4 * HIDWORD(v68) - 4) = (v71 + v72) * *(float *)(a1 + 16);
      v73 = SHIDWORD(v68) < v82;
      *v69 = (*(float *)(v68 - 4) * *(v70 - 2) - *(float *)(v68 - 8) * *(v70 - 1)) * *(float *)(a1 + 16);
    }
    while ( v73 );
  }
  return v68;
}


//======================================================================
// sub_698770
// entry 00698770  size 12  status ok
//======================================================================

int __cdecl sub_698770(int a1)
{
  return (int)*(&off_78F898 + a1);
}


//======================================================================
// sub_698780
// entry 00698780  size 272  status ok
//======================================================================

int __cdecl sub_698780(char *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // kr00_4
  int v10; // ebx
  int v11; // esi
  int v12; // ebp
  int v13; // edx
  int result; // eax
  float *v15; // ecx
  double v16; // st7
  int v17; // ecx
  float *v18; // edx
  double v19; // st7
  int v20; // [esp+18h] [ebp+8h]
  int v21; // [esp+24h] [ebp+14h]
  float *v22; // [esp+28h] [ebp+18h]

  v6 = a5 != 0 ? a4 : 0;
  v7 = a5 != 0 ? a6 : 0;
  v22 = (float *)*(&off_78F898 + *(_DWORD *)(a2 + 4 * v6));
  v20 = (int)*(&off_78F898 + *(_DWORD *)(a2 + 4 * v7));
  v8 = *(_DWORD *)(a3 + 4 * v7);
  v21 = *(_DWORD *)(a3 + 4 * a5);
  v9 = *(_DWORD *)(a3 + 4 * v6);
  v10 = v21 / 4 - v9 / 4;
  v11 = v21 / 4 + v21 / 2 - v8 / 4;
  v12 = v10 + v9 / 2;
  v13 = v8 / 2;
  result = 0;
  if ( v10 > 0 )
  {
    memset(a1, 0, 4 * v10);
    result = v21 / 4 - v9 / 4;
  }
  if ( result < v12 )
  {
    v15 = v22;
    do
    {
      ++result;
      v16 = *v15++ * *(float *)&a1[4 * result - 4];
      *(float *)&a1[4 * result - 4] = v16;
    }
    while ( result < v12 );
  }
  v17 = v13 + v11;
  if ( v11 < v13 + v11 )
  {
    v18 = (float *)(v20 + 4 * v13 - 4);
    do
    {
      result = (int)a1;
      ++v11;
      v19 = *v18-- * *(float *)&a1[4 * v11 - 4];
      *(float *)&a1[4 * v11 - 4] = v19;
    }
    while ( v11 < v17 );
  }
  if ( v11 < v21 )
  {
    memset(&a1[4 * v11], 0, 4 * (v21 - v11));
    return 0;
  }
  return result;
}


//======================================================================
// sub_698890
// entry 00698890  size 31  status ok
//======================================================================

void __cdecl sub_698890(void *a1)
{
  if ( a1 )
  {
    memset(a1, 0, 0xC88u);
    free(a1);
  }
}


//======================================================================
// sub_6988B0
// entry 006988b0  size 321  status ok
//======================================================================

int __cdecl sub_6988B0(int a1, int *a2, int a3)
{
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // ebp
  int result; // eax
  int v10; // ebp
  _DWORD *v11; // ebx

  if ( *a2 <= 1 )
  {
    sub_69D210(a3, 0, 1);
  }
  else
  {
    sub_69D210(a3, 1, 1);
    sub_69D210(a3, *a2 - 1, 4);
  }
  if ( a2[289] <= 0 )
  {
    sub_69D210(a3, 0, 1);
  }
  else
  {
    sub_69D210(a3, 1, 1);
    sub_69D210(a3, a2[289] - 1, 8);
    v3 = 0;
    if ( a2[289] > 0 )
    {
      v4 = a2 + 546;
      do
      {
        v5 = sub_698A00(*(_DWORD *)(a1 + 4));
        sub_69D210(a3, *(v4 - 256), v5);
        v6 = sub_698A00(*(_DWORD *)(a1 + 4));
        sub_69D210(a3, *v4, v6);
        ++v3;
        ++v4;
      }
      while ( v3 < a2[289] );
    }
  }
  sub_69D210(a3, 0, 2);
  if ( *a2 > 1 )
  {
    v7 = 0;
    if ( *(int *)(a1 + 4) > 0 )
    {
      v8 = a2 + 1;
      do
      {
        sub_69D210(a3, *v8, 4);
        ++v7;
        ++v8;
      }
      while ( v7 < *(_DWORD *)(a1 + 4) );
    }
  }
  result = *a2;
  v10 = 0;
  if ( *a2 > 0 )
  {
    v11 = a2 + 273;
    do
    {
      sub_69D210(a3, 0, 8);
      sub_69D210(a3, *(v11 - 16), 8);
      sub_69D210(a3, *v11, 8);
      result = *a2;
      ++v10;
      ++v11;
    }
    while ( v10 < *a2 );
  }
  return result;
}


//======================================================================
// sub_698A00
// entry 00698a00  size 19  status ok
//======================================================================

int __cdecl sub_698A00(int a1)
{
  int result; // eax
  unsigned int v2; // ecx

  result = 0;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( a1 != 1 )
    {
      do
      {
        ++result;
        v2 >>= 1;
      }
      while ( v2 );
    }
  }
  return result;
}


//======================================================================
// sub_698A20
// entry 00698a20  size 456  status ok
//======================================================================

int *__cdecl sub_698A20(int a1, int a2)
{
  int *v3; // ebx
  int v4; // ebp
  int v5; // eax
  int *v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int *v13; // edi
  int v14; // eax
  _DWORD *i; // edi
  int v16; // eax
  int v17; // eax
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+1Ch] [ebp+8h]
  int v21; // [esp+1Ch] [ebp+8h]

  v3 = (int *)calloc(1u, 0xC88u);
  v4 = *(_DWORD *)(a1 + 28);
  memset(v3, 0, 0xC88u);
  v19 = v4;
  if ( sub_69D470(a2, 1) )
    *v3 = sub_69D470(a2, 4) + 1;
  else
    *v3 = 1;
  if ( sub_69D470(a2, 1) )
  {
    v5 = sub_69D470(a2, 8) + 1;
    v3[289] = v5;
    v20 = 0;
    if ( v5 > 0 )
    {
      v6 = v3 + 546;
      while ( 1 )
      {
        v7 = sub_698A00(*(_DWORD *)(a1 + 4));
        v8 = sub_69D470(a2, v7);
        *(v6 - 256) = v8;
        v9 = sub_698A00(*(_DWORD *)(a1 + 4));
        v10 = sub_69D470(a2, v9);
        *v6 = v10;
        if ( v8 < 0 )
          goto LABEL_27;
        if ( v10 < 0 )
          goto LABEL_27;
        if ( v8 == v10 )
          goto LABEL_27;
        v11 = *(_DWORD *)(a1 + 4);
        if ( v8 >= v11 || v10 >= v11 )
          goto LABEL_27;
        ++v6;
        if ( ++v20 >= v3[289] )
        {
          v4 = v19;
          break;
        }
      }
    }
  }
  if ( (int)sub_69D470(a2, 2) <= 0 )
  {
    if ( *v3 > 1 )
    {
      v12 = 0;
      if ( *(int *)(a1 + 4) > 0 )
      {
        v13 = v3 + 1;
        do
        {
          v14 = sub_69D470(a2, 4);
          *v13 = v14;
          if ( v14 >= *v3 )
            goto LABEL_27;
          ++v12;
          ++v13;
        }
        while ( v12 < *(_DWORD *)(a1 + 4) );
      }
      v4 = v19;
    }
    v21 = 0;
    if ( *v3 <= 0 )
      return v3;
    for ( i = v3 + 273; ; ++i )
    {
      sub_69D470(a2, 8);
      v16 = sub_69D470(a2, 8);
      *(i - 16) = v16;
      if ( v16 >= *(_DWORD *)(v4 + 16) )
        break;
      v17 = sub_69D470(a2, 8);
      *i = v17;
      if ( v17 >= *(_DWORD *)(v4 + 20) )
        break;
      if ( ++v21 >= *v3 )
        return v3;
    }
  }
LABEL_27:
  sub_698890(v3);
  return 0;
}


//======================================================================
// sub_698BF0
// entry 00698bf0  size 2411  status ok
//======================================================================

int __usercall sub_698BF0@<eax>(double a1@<st0>, int *a2)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // edx
  float *v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  void *v11; // esp
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // esp
  int *v16; // eax
  int *v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  char *v21; // ebx
  int v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int *v26; // edx
  int v27; // eax
  int v28; // ecx
  double v29; // st7
  double v30; // st7
  int v31; // ecx
  float *v32; // edx
  double v33; // st7
  __int16 v34; // fps
  bool v35; // c0
  char v36; // c2
  bool v37; // c3
  __int16 v38; // fps
  double v39; // st7
  bool v40; // c0
  char v41; // c2
  bool v42; // c3
  __int16 v43; // fps
  bool v44; // c0
  char v45; // c2
  bool v46; // c3
  bool v47; // cc
  _DWORD **v48; // ebx
  int *v49; // ecx
  float v50; // eax
  int v51; // eax
  int v52; // ecx
  _DWORD *v53; // edi
  float *v54; // edi
  int v55; // ecx
  int v56; // edi
  int v57; // eax
  int v58; // eax
  float *v59; // edx
  int v60; // eax
  _DWORD *v61; // ecx
  int v62; // edi
  int v63; // eax
  int v64; // ecx
  int j; // edi
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  void *v69; // esp
  int v70; // eax
  void *v71; // esp
  int v72; // eax
  void *v73; // esp
  int v74; // eax
  void *v75; // esp
  float v76; // edx
  int *v77; // eax
  unsigned int v78; // eax
  int v79; // ecx
  float v80; // edi
  int v82; // ebx
  int v83; // eax
  void *v84; // esp
  int v85; // edi
  _DWORD *v86; // ebx
  float *v87; // edi
  int v88; // eax
  int v89; // ecx
  int v90; // ebx
  int v91; // eax
  unsigned int v92; // ecx
  int v93; // eax
  int v94; // ecx
  int *v95; // ecx
  int v96; // ebx
  int v97; // ecx
  int v98; // edi
  float v99; // eax
  int v100; // edx
  int v101; // eax
  int v102; // eax
  int v103; // ecx
  int v104; // [esp-18h] [ebp-90h]
  int v105; // [esp-14h] [ebp-8Ch]
  int v106; // [esp-10h] [ebp-88h]
  int *v107; // [esp-Ch] [ebp-84h]
  _BYTE v108[12]; // [esp+0h] [ebp-78h] BYREF
  _BYTE *v109; // [esp+Ch] [ebp-6Ch]
  int v110; // [esp+10h] [ebp-68h]
  int v111; // [esp+14h] [ebp-64h]
  unsigned int i; // [esp+18h] [ebp-60h]
  int v113; // [esp+1Ch] [ebp-5Ch]
  int v114; // [esp+20h] [ebp-58h]
  int v115; // [esp+24h] [ebp-54h]
  float v116; // [esp+28h] [ebp-50h]
  int v117; // [esp+2Ch] [ebp-4Ch] BYREF
  _BYTE *v118; // [esp+30h] [ebp-48h]
  int v119; // [esp+34h] [ebp-44h]
  float *v120; // [esp+38h] [ebp-40h]
  float v121; // [esp+3Ch] [ebp-3Ch]
  float v122; // [esp+40h] [ebp-38h]
  int v123; // [esp+44h] [ebp-34h]
  int v124; // [esp+48h] [ebp-30h] BYREF
  int *v125; // [esp+4Ch] [ebp-2Ch]
  int v126; // [esp+50h] [ebp-28h]
  int v127; // [esp+54h] [ebp-24h]
  int v128; // [esp+58h] [ebp-20h]
  int *v129; // [esp+5Ch] [ebp-1Ch]
  int v130; // [esp+60h] [ebp-18h]
  int v131; // [esp+64h] [ebp-14h]
  int v132; // [esp+68h] [ebp-10h]
  int v133; // [esp+6Ch] [ebp-Ch]
  _DWORD *v134; // [esp+70h] [ebp-8h]
  int *v135; // [esp+74h] [ebp-4h]
  int v136; // [esp+80h] [ebp+8h]
  int v137; // [esp+80h] [ebp+8h]
  int v138; // [esp+80h] [ebp+8h]
  int v139; // [esp+80h] [ebp+8h]
  int v140; // [esp+80h] [ebp+8h]
  int v141; // [esp+80h] [ebp+8h]

  v3 = a2[16];
  v4 = *(_DWORD *)(v3 + 4);
  v5 = *(_DWORD **)(v3 + 104);
  v6 = (float *)a2[26];
  v132 = v4;
  v7 = *(_DWORD *)(v4 + 28);
  v8 = 4 * *(_DWORD *)(v4 + 4);
  v120 = v6;
  v131 = v7;
  v9 = a2[9];
  v10 = v8 + 3;
  v134 = v5;
  LOBYTE(v10) = (v8 + 3) & 0xFC;
  v128 = v9;
  v11 = alloca(v10);
  v118 = v108;
  v12 = sub_690E40(a2, v8);
  v13 = *(_DWORD *)(v4 + 4);
  v126 = v12;
  v114 = sub_690E40(a2, 4 * v13);
  v119 = sub_690E40(a2, 4 * *(_DWORD *)(v4 + 4));
  v14 = 4 * *(_DWORD *)(v4 + 4) + 3;
  v122 = v120[1];
  LOBYTE(v14) = v14 & 0xFC;
  v15 = alloca(v14);
  v115 = a2[7];
  v16 = *(int **)(v131 + 4 * v115 + 544);
  v127 = (int)v108;
  v135 = v16;
  v136 = 0;
  v17 = (int *)(v134[14] + 48 * (*((_DWORD *)v120 + 2) + (v115 != 0 ? 2 : 0)));
  a2[10] = v115;
  v18 = *(_DWORD *)(v4 + 4);
  v133 = (int)v17;
  if ( v18 > 0 )
  {
    v129 = (int *)v108;
    v19 = 4 * (v128 / 2);
    v130 = v19;
    v125 = (int *)(v126 - (_DWORD)v108);
    v116 = 4.0 / (double)v128;
    while ( 1 )
    {
      v20 = *a2;
      v117 = LODWORD(v116);
      v21 = *(char **)(v20 + 4 * v136);
      v22 = sub_690E40(a2, v19);
      *(int *)((char *)v129 + (_DWORD)v125) = v22;
      v23 = sub_699560(&v117);
      v106 = a2[8];
      v105 = a2[7];
      v104 = a2[6];
      v121 = v23;
      sub_698780(v21, (int)(v134 + 1), v131, v104, v105, v106);
      sub_698320(*(_DWORD *)v134[a2[7] + 3], (int)v21, *(int *)((char *)v129 + (_DWORD)v125));
      sub_695E90(&v134[3 * a2[7] + 5], (int)v21);
      v24 = sub_699560(v21);
      v25 = v24 + v121;
      v26 = v129;
      v27 = 1;
      v28 = v128 - 1;
      v123 = 1;
      *(float *)v21 = v25;
      *(float *)v26 = v25;
      if ( v28 > 1 )
      {
        while ( 1 )
        {
          v29 = *(float *)&v21[4 * v27 + 4];
          *(float *)&v124 = *(float *)&v21[4 * v27] * *(float *)&v21[4 * v27] + v29 * v29;
          v30 = sub_699560(&v124);
          v31 = v123;
          v32 = (float *)v129;
          v33 = v30 * 0.5 + v121;
          *(float *)&v21[4 * ((v123 + 1) >> 1)] = v33;
          v35 = v33 < *v32;
          v36 = 0;
          v37 = v33 == *v32;
          if ( (v34 & 0x4100) == 0 )
            *v32 = v33;
          v123 = v31 + 2;
          if ( v31 + 2 >= v128 - 1 )
            break;
          v27 = v123;
        }
        v26 = v129;
      }
      v39 = *(float *)v26;
      v40 = v39 < 0.0;
      v41 = 0;
      v42 = v39 == 0.0;
      if ( (v38 & 0x4100) == 0 )
        *v26 = 0;
      a1 = *(float *)v26;
      v44 = a1 < v122;
      v45 = 0;
      v46 = a1 == v122;
      if ( (v43 & 0x4100) == 0 )
        v122 = *(float *)v26;
      v47 = ++v136 < *(_DWORD *)(v4 + 4);
      v129 = v26 + 1;
      if ( !v47 )
        break;
      v19 = v130;
    }
    v17 = (int *)v133;
  }
  v113 = v128 / 2;
  v130 = 4 * (v128 / 2);
  v123 = sub_690E40(a2, v130);
  *(float *)&v124 = COERCE_FLOAT(sub_690E40(a2, v130));
  v137 = 0;
  if ( *(int *)(v4 + 4) <= 0 )
  {
LABEL_33:
    v120[1] = v122;
    v138 = 4 * *(_DWORD *)(v4 + 4);
    v68 = v138 + 3;
    LOBYTE(v68) = (v138 + 3) & 0xFC;
    v69 = alloca(v68);
    v109 = v108;
    v70 = v138 + 3;
    LOBYTE(v70) = (v138 + 3) & 0xFC;
    v71 = alloca(v70);
    v123 = (int)v108;
    v72 = v138 + 3;
    LOBYTE(v72) = (v138 + 3) & 0xFC;
    v73 = alloca(v72);
    v121 = COERCE_FLOAT(v108);
    v74 = v138 + 3;
    LOBYTE(v74) = (v138 + 3) & 0xFC;
    v75 = alloca(v74);
    v76 = COERCE_FLOAT(v108);
    v116 = COERCE_FLOAT(v108);
    if ( v135[289] )
    {
      v110 = sub_693950(a1, a2, v131 + 2868, (int)v17, (int)v135, v126);
      v77 = sub_693C10(a2, v17, (int)v135, v110);
      v76 = v116;
      v129 = v77;
    }
    memset((void *)LODWORD(v76), 0, 4 * *(_DWORD *)(v4 + 4));
    if ( *(_DWORD *)(*(_DWORD *)(v133 + 4) + 500) )
    {
      v139 = 0;
      if ( *(int *)(v132 + 4) > 0 )
      {
        v78 = (unsigned int)(4 * v128) >> 1;
        v79 = v126 - LODWORD(v76);
        i = v78;
        v80 = v76;
        v111 = v126 - LODWORD(v76);
        while ( 1 )
        {
          v82 = *(_DWORD *)(v79 + LODWORD(v80));
          v83 = v78 + 3;
          LOBYTE(v83) = v83 & 0xFC;
          v84 = alloca(v83);
          v107 = (int *)v133;
          *(_DWORD *)LODWORD(v80) = v108;
          sub_693DB0(v107, v82, (int)v108);
          LODWORD(v80) += 4;
          if ( ++v139 >= *(_DWORD *)(v132 + 4) )
            break;
          v79 = v111;
          v78 = i;
        }
      }
    }
    v85 = sub_695E10((int)a2) ? 0 : 7;
    v127 = v85;
    if ( v85 <= (sub_695E10((int)a2) ? 14 : 7) )
    {
      v86 = a2 + 1;
      v117 = (int)&v120[v85 + 3];
      do
      {
        sub_69D210(v86, 0, 1);
        sub_69D210(v86, v115, v134[11]);
        if ( a2[7] )
        {
          sub_69D210(v86, a2[6], 1);
          sub_69D210(v86, a2[8], 1);
        }
        v140 = 0;
        if ( *(int *)(v132 + 4) > 0 )
        {
          v87 = (float *)v114;
          i = v119 - v114;
          v88 = v126 - v114;
          LODWORD(v122) = &v118[-v114];
          v120 = (float *)(v135 + 1);
          v111 = v126 - v114;
          v128 = LODWORD(v116) - v114;
          while ( 1 )
          {
            v125 = *(int **)((char *)v87 + v88);
            v89 = *a2;
            v113 = *(_DWORD *)v120;
            v90 = *(_DWORD *)(v89 + 4 * v140);
            *(float *)&v91 = COERCE_FLOAT(sub_690E40(a2, v130));
            v92 = i;
            v124 = v91;
            *v87 = *(float *)&v91;
            v93 = sub_69BFC0(
                    a2,
                    *(_DWORD *)(v134[12] + 4 * v135[v113 + 257]),
                    *(_DWORD *)(*(_DWORD *)((char *)v87 + v92) + 4 * v127),
                    v91);
            v94 = v127;
            *(_DWORD *)((char *)v87 + LODWORD(v122)) = v93;
            sub_692CE0(
              (int *)v133,
              v125,
              v124,
              v90,
              *(_DWORD *)(v131 + 4 * (v94 + 12 * (a2[7] + 54) + 3 * (a2[7] + 54))));
            sub_693E60((int *)v133, v90, (float *)(v90 + v130), *(_DWORD *)((char *)v87 + v128));
            ++v120;
            ++v87;
            if ( ++v140 >= *(_DWORD *)(v132 + 4) )
              break;
            v88 = v111;
          }
          v85 = v127;
        }
        v95 = v135;
        v96 = v131;
        if ( v135[289] )
        {
          sub_6940B0(
            v85,
            v131 + 2868,
            (int *)v133,
            v135,
            *a2,
            v110,
            v129,
            v114,
            (int)v118,
            *(_DWORD *)(v131 + 4 * (v85 + 12 * (a2[7] + 54) + 3 * (a2[7] + 54))));
          v95 = v135;
        }
        v141 = 0;
        if ( *v95 > 0 )
        {
          v124 = (int)(v95 + 273);
          do
          {
            v97 = 0;
            v122 = 0.0;
            v98 = *(_DWORD *)v124;
            if ( *(int *)(v132 + 4) > 0 )
            {
              v99 = v121;
              v120 = (float *)(v135 + 1);
              v111 = (int)&v109[-LODWORD(v121)];
              i = v123 - LODWORD(v121);
              do
              {
                if ( *(_DWORD *)v120 == v141 )
                {
                  v100 = (int)v118;
                  *(_DWORD *)LODWORD(v99) = 0;
                  if ( *(_DWORD *)(v100 + 4 * v97) )
                    *(_DWORD *)LODWORD(v99) = 1;
                  *(_DWORD *)(v111 + LODWORD(v99)) = *(_DWORD *)(*a2 + 4 * v97);
                  *(_DWORD *)(i + LODWORD(v99)) = v130 + *(_DWORD *)(*a2 + 4 * v97);
                  LODWORD(v99) += 4;
                  ++LODWORD(v122);
                }
                ++v97;
                ++v120;
              }
              while ( v97 < *(_DWORD *)(v132 + 4) );
              v96 = v131;
            }
            v101 = (*((int (__cdecl **)(int *, _DWORD, int, float, float))*(&off_7878D8
                                                                          + *(_DWORD *)(v96 + 4 * v98 + 1312))
                    + 5))(
                     a2,
                     *(_DWORD *)(v134[13] + 4 * v98),
                     v123,
                     COERCE_FLOAT(LODWORD(v121)),
                     COERCE_FLOAT(LODWORD(v122)));
            (*((void (__cdecl **)(int *, _DWORD, int, _DWORD, float, float, int))*(&off_7878D8
                                                                                 + *(_DWORD *)(v96 + 4 * v98 + 1312))
             + 6))(
              a2,
              *(_DWORD *)(v134[13] + 4 * v98),
              v123,
              0,
              COERCE_FLOAT(LODWORD(v121)),
              COERCE_FLOAT(LODWORD(v122)),
              v101);
            v124 += 4;
            ++v141;
          }
          while ( v141 < *v135 );
          v85 = v127;
        }
        v86 = a2 + 1;
        sub_69D310(a2 + 1);
        v102 = sub_69D540(a2 + 1);
        v103 = v117;
        v127 = ++v85;
        *(_DWORD *)v117 = v102;
        v117 = v103 + 4;
      }
      while ( v85 <= (sub_695E10((int)a2) ? 14 : 7) );
    }
    return 0;
  }
  else
  {
    v48 = (_DWORD **)v119;
    v49 = (int *)(v126 - v127);
    LODWORD(v121) = v135 + 1;
    LODWORD(v50) = v127 - v119;
    v125 = (int *)(v126 - v127);
    LODWORD(v116) = v127 - v119;
    while ( 1 )
    {
      v51 = *(int *)((char *)v49 + (_DWORD)v48 + LODWORD(v50));
      v52 = *a2;
      v127 = *(_DWORD *)LODWORD(v121);
      v117 = v51;
      v111 = *(_DWORD *)(v52 + 4 * v137);
      v129 = (int *)(v111 + v130);
      a2[10] = v115;
      v53 = (_DWORD *)sub_690E40(a2, 60);
      *v48 = v53;
      memset(v53, 0, 0x3Cu);
      if ( v113 > 0 )
      {
        v54 = (float *)v129;
        v55 = v117 - (_DWORD)v129;
        v117 = v113;
        for ( i = v55; ; v55 = i )
        {
          a1 = sub_699560((char *)v54 + v55);
          *v54++ = a1;
          if ( !--v117 )
            break;
        }
      }
      sub_692D40((int *)v133, (int)v129, v123);
      v56 = v111;
      sub_6933E0((int *)v133, v111, v124, v122, *(float *)((char *)v48 + LODWORD(v116)));
      sub_6938C0((int *)v133, v123, (float *)v124, 1, v56);
      v57 = v135[v127 + 257];
      if ( *(_DWORD *)(v131 + 4 * v57 + 800) != 1 )
        return -1;
      (*v48)[7] = sub_69B3A0(a2, *(_DWORD *)(v134[12] + 4 * v57), v129, v56);
      if ( sub_695E10((int)a2) && (*v48)[7] )
      {
        sub_6938C0((int *)v133, v123, (float *)v124, 2, v56);
        v58 = sub_69B3A0(a2, *(_DWORD *)(v134[12] + 4 * v135[v127 + 257]), v129, v56);
        v59 = (float *)v124;
        (*v48)[14] = v58;
        sub_6938C0((int *)v133, v123, v59, 0, v56);
        v60 = sub_69B3A0(a2, *(_DWORD *)(v134[12] + 4 * v135[v127 + 257]), v129, v56);
        v61 = *v48;
        v117 = 4;
        v62 = 0x10000;
        *v61 = v60;
        do
        {
          v63 = sub_69BF10(a2, *(_DWORD *)(v134[12] + 4 * v135[v127 + 257]), **v48, (*v48)[7], v62 / 7);
          v64 = v117;
          v62 += 0x10000;
          *(_DWORD *)((char *)*v48 + v117) = v63;
          v117 = v64 + 4;
        }
        while ( v62 < 458752 );
        v117 = 32;
        for ( j = 0x10000; j < 458752; j += 0x10000 )
        {
          v66 = sub_69BF10(a2, *(_DWORD *)(v134[12] + 4 * v135[v127 + 257]), (*v48)[7], (*v48)[14], j / 7);
          v67 = v117;
          *(_DWORD *)((char *)*v48 + v117) = v66;
          v117 = v67 + 4;
        }
      }
      LODWORD(v121) += 4;
      ++v48;
      if ( ++v137 >= *(_DWORD *)(v132 + 4) )
      {
        v17 = (int *)v133;
        v4 = v132;
        goto LABEL_33;
      }
      v49 = v125;
      v50 = v116;
    }
  }
}


//======================================================================
// sub_699560
// entry 00699560  size 33  status ok
//======================================================================

double __cdecl sub_699560(_DWORD *a1)
{
  return (double)(*a1 & 0x7FFFFFFF) * 0.00000071771143 - 764.27118;
}


//======================================================================
// sub_699590
// entry 00699590  size 883  status ok
//======================================================================

int __cdecl sub_699590(_DWORD *a1, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  void *v9; // esp
  int v10; // eax
  void *v11; // esp
  int v12; // eax
  void *v13; // esp
  int v14; // eax
  void *v15; // esp
  int v16; // ebx
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  char *v21; // edi
  char v22; // dl
  char *v23; // edi
  _DWORD *v24; // edx
  int *v25; // edi
  _DWORD *v26; // eax
  int v27; // edx
  _BYTE *v28; // ecx
  int v29; // ebx
  _DWORD *v30; // edx
  int v31; // edx
  int v32; // eax
  int v33; // edi
  int v34; // ecx
  _DWORD *v35; // eax
  unsigned int v36; // ebx
  _DWORD *v37; // ebx
  bool v38; // cc
  int v39; // ecx
  int *v40; // edi
  int v41; // ebx
  float *v42; // ecx
  int v43; // eax
  int v44; // edx
  double v45; // st7
  double v46; // st6
  __int16 v47; // fps
  bool v48; // c0
  char v49; // c2
  bool v50; // c3
  __int16 v51; // ax
  bool v52; // c0
  char v53; // c2
  bool v54; // c3
  double v55; // st6
  int v56; // ebx
  _DWORD *v57; // edi
  int v58; // eax
  int i; // edi
  _BYTE v61[12]; // [esp+0h] [ebp-38h] BYREF
  _BYTE *v62; // [esp+Ch] [ebp-2Ch]
  unsigned int v63; // [esp+10h] [ebp-28h]
  int v64; // [esp+14h] [ebp-24h]
  _DWORD *v65; // [esp+18h] [ebp-20h]
  _BYTE *v66; // [esp+1Ch] [ebp-1Ch]
  _BYTE *v67; // [esp+20h] [ebp-18h]
  int v68; // [esp+24h] [ebp-14h]
  _BYTE *v69; // [esp+28h] [ebp-10h]
  _DWORD *v70; // [esp+2Ch] [ebp-Ch]
  int v71; // [esp+30h] [ebp-8h]
  _DWORD *v72; // [esp+34h] [ebp-4h]
  int v73; // [esp+40h] [ebp+8h]

  v3 = a1[16];
  v4 = *(_DWORD *)(v3 + 4);
  v71 = *(_DWORD *)(v3 + 104);
  v5 = a1[7];
  v73 = v4;
  v68 = *(_DWORD *)(v4 + 28);
  v6 = *(_DWORD *)(v68 + 4 * v5);
  a1[9] = v6;
  v7 = *(_DWORD *)(v4 + 4);
  v64 = v6;
  v8 = 4 * v7 + 3;
  LOBYTE(v8) = v8 & 0xFC;
  v9 = alloca(v8);
  v66 = v61;
  v10 = 4 * v7 + 3;
  LOBYTE(v10) = (4 * v7 + 3) & 0xFC;
  v11 = alloca(v10);
  v67 = v61;
  v12 = 4 * v7 + 3;
  LOBYTE(v12) = (4 * v7 + 3) & 0xFC;
  v13 = alloca(v12);
  v69 = v61;
  v14 = 4 * v7 + 3;
  LOBYTE(v14) = (4 * v7 + 3) & 0xFC;
  v15 = alloca(v14);
  v16 = 0;
  v62 = v61;
  if ( v7 > 0 )
  {
    v17 = v69;
    v63 = (unsigned int)(4 * v64) >> 1;
    v70 = v69;
    v72 = a2 + 1;
    v65 = (_DWORD *)(v61 - v69);
    while ( 1 )
    {
      v18 = a2[*v72 + 257];
      v19 = (*((int (__cdecl **)(_DWORD *, _DWORD))*(&off_7878D0 + *(_DWORD *)(v68 + 4 * v18 + 800)) + 5))(
              a1,
              *(_DWORD *)(*(_DWORD *)(v71 + 48) + 4 * v18));
      *(_DWORD *)((char *)v17 + (_DWORD)v65) = v19;
      v20 = v63;
      *v17 = v19 != 0;
      v21 = *(char **)(*a1 + 4 * v16);
      v22 = v20;
      v20 >>= 2;
      memset(v21, 0, 4 * v20);
      v23 = &v21[4 * v20];
      LOBYTE(v20) = v22;
      v24 = v70;
      ++v16;
      memset(v23, 0, v20 & 3);
      ++v72;
      v70 = v24 + 1;
      if ( v16 >= *(_DWORD *)(v73 + 4) )
        break;
      v17 = v70;
    }
  }
  v25 = a2;
  v72 = 0;
  if ( a2[289] > 0 )
  {
    v26 = a2 + 546;
    do
    {
      v27 = *(v26 - 256);
      v28 = v69;
      v29 = *(_DWORD *)&v69[4 * v27];
      v30 = &v69[4 * v27];
      if ( v29 || *(_DWORD *)&v69[4 * *v26] )
      {
        *v30 = 1;
        *(_DWORD *)&v28[4 * *v26] = 1;
      }
      v31 = a2[289];
      ++v26;
      v72 = (_DWORD *)((char *)v72 + 1);
    }
    while ( (int)v72 < v31 );
  }
  v32 = *a2;
  v72 = 0;
  if ( v32 > 0 )
  {
    v65 = a2 + 273;
    do
    {
      v33 = 0;
      v34 = 0;
      if ( *(int *)(v73 + 4) > 0 )
      {
        v35 = v67;
        v70 = a2 + 1;
        v63 = v66 - v67;
        do
        {
          if ( (_DWORD *)*v70 == v72 )
          {
            v36 = v63;
            *v35 = *(_DWORD *)&v69[4 * v34] != 0;
            ++v33;
            *(_DWORD *)((char *)++v35 + v36 - 4) = *(_DWORD *)(*a1 + 4 * v34);
          }
          ++v34;
          ++v70;
        }
        while ( v34 < *(_DWORD *)(v73 + 4) );
      }
      v37 = v65;
      (*((void (__cdecl **)(_DWORD *, _DWORD, _BYTE *, _BYTE *, int))*(&off_7878D8 + *(_DWORD *)(v68 + 4 * *v65 + 1312))
       + 7))(
        a1,
        *(_DWORD *)(*(_DWORD *)(v71 + 52) + 4 * *v65),
        v66,
        v67,
        v33);
      v38 = (int)v72 + 1 < *a2;
      v72 = (_DWORD *)((char *)v72 + 1);
      v65 = v37 + 1;
    }
    while ( v38 );
    v25 = a2;
  }
  v39 = v25[289] - 1;
  if ( v39 >= 0 )
  {
    v40 = &v25[v39 + 546];
    v41 = v64 / 2;
    v65 = (_DWORD *)(v39 + 1);
    while ( 1 )
    {
      v42 = *(float **)(*a1 + 4 * *(v40 - 256));
      v43 = *(_DWORD *)(*a1 + 4 * *v40);
      if ( v41 > 0 )
        break;
LABEL_33:
      --v40;
      v65 = (_DWORD *)((char *)v65 - 1);
      if ( !v65 )
      {
        v25 = a2;
        goto LABEL_35;
      }
    }
    v64 = v41;
    v44 = v43 - (_DWORD)v42;
    while ( 1 )
    {
      v45 = *v42;
      v46 = *(float *)((char *)v42 + v44);
      v48 = v45 < 0.0;
      v49 = 0;
      v50 = v45 == 0.0;
      v51 = v47;
      v52 = v46 < 0.0;
      v53 = 0;
      v54 = v46 == 0.0;
      if ( (v51 & 0x4100) != 0 )
      {
        if ( (v47 & 0x4100) != 0 )
        {
          *(float *)((char *)v42 + v44) = *v42;
          v55 = v45 - v46;
          goto LABEL_31;
        }
        *(float *)((char *)v42 + v44) = v46 + v45;
      }
      else
      {
        if ( (v47 & 0x4100) != 0 )
        {
          *(float *)((char *)v42 + v44) = *v42;
          v55 = v46 + v45;
LABEL_31:
          *v42 = v55;
          goto LABEL_32;
        }
        *(float *)((char *)v42 + v44) = *v42 - *(float *)((char *)v42 + v44);
      }
LABEL_32:
      ++v42;
      if ( !--v64 )
        goto LABEL_33;
    }
  }
LABEL_35:
  v56 = 0;
  if ( *(int *)(v73 + 4) > 0 )
  {
    v57 = v25 + 1;
    do
    {
      v58 = a2[*v57 + 257];
      (*((void (__cdecl **)(_DWORD *, _DWORD, _DWORD, _DWORD))*(&off_7878D0 + *(_DWORD *)(v68 + 4 * v58 + 800)) + 6))(
        a1,
        *(_DWORD *)(*(_DWORD *)(v71 + 48) + 4 * v58),
        *(_DWORD *)&v62[4 * v56],
        *(_DWORD *)(*a1 + 4 * v56));
      ++v56;
      ++v57;
    }
    while ( v56 < *(_DWORD *)(v73 + 4) );
  }
  for ( i = 0; i < *(_DWORD *)(v73 + 4); ++i )
    sub_6977C0(**(int ***)(v71 + 4 * a1[7] + 12), *(_DWORD *)(*a1 + 4 * i), *(_DWORD *)(*a1 + 4 * i));
  return 0;
}


//======================================================================
// sub_699910
// entry 00699910  size 31  status ok
//======================================================================

void __cdecl sub_699910(void *a1)
{
  if ( a1 )
  {
    memset(a1, 0, 0x714u);
    free(a1);
  }
}


//======================================================================
// sub_699930
// entry 00699930  size 122  status ok
//======================================================================

void __cdecl sub_699930(void *Block)
{
  int i; // edi
  int j; // edi

  if ( Block )
  {
    for ( i = 0; i < *((_DWORD *)Block + 1); ++i )
    {
      if ( *(_DWORD *)(*((_DWORD *)Block + 5) + 4 * i) )
        free(*(void **)(*((_DWORD *)Block + 5) + 4 * i));
    }
    free(*((void **)Block + 5));
    for ( j = 0; j < *((_DWORD *)Block + 6); ++j )
      free(*(void **)(*((_DWORD *)Block + 7) + 4 * j));
    free(*((void **)Block + 7));
    memset(Block, 0, 0x2Cu);
    free(Block);
  }
}


//======================================================================
// sub_6999B0
// entry 006999b0  size 235  status ok
//======================================================================

int __cdecl sub_6999B0(_DWORD *a1, int a2)
{
  int v2; // ebx
  int result; // eax
  int v4; // ebp
  _DWORD *v5; // ebx
  int v6; // ecx
  _DWORD *v7; // edi
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  sub_69D210(a2, *a1, 24);
  sub_69D210(a2, a1[1], 24);
  sub_69D210(a2, a1[2] - 1, 24);
  sub_69D210(a2, a1[3] - 1, 6);
  sub_69D210(a2, a1[4], 8);
  result = a1[3];
  v4 = 0;
  if ( result > 0 )
  {
    v5 = a1 + 5;
    do
    {
      if ( (int)sub_699AA0(*v5) <= 3 )
      {
        sub_69D210(a2, *v5, 4);
      }
      else
      {
        sub_69D210(a2, *v5, 3);
        sub_69D210(a2, 1, 1);
        sub_69D210(a2, (int)*v5 >> 3, 5);
      }
      v6 = sub_699AB0(*v5) + v8;
      result = a1[3];
      ++v4;
      ++v5;
      v8 = v6;
    }
    while ( v4 < result );
    v2 = v6;
  }
  if ( v2 > 0 )
  {
    v7 = a1 + 69;
    do
    {
      result = sub_69D210(a2, *v7++, 8);
      --v2;
    }
    while ( v2 );
  }
  return result;
}


//======================================================================
// sub_699AA0
// entry 00699aa0  size 16  status ok
//======================================================================

int __cdecl sub_699AA0(unsigned int a1)
{
  unsigned int v1; // ecx
  int result; // eax

  v1 = a1;
  for ( result = 0; v1; v1 >>= 1 )
    ++result;
  return result;
}


//======================================================================
// sub_699AB0
// entry 00699ab0  size 22  status ok
//======================================================================

int __cdecl sub_699AB0(unsigned int a1)
{
  unsigned int v1; // ecx
  int result; // eax

  v1 = a1;
  for ( result = 0; v1; v1 >>= 1 )
    result += v1 & 1;
  return result;
}


//======================================================================
// sub_699AD0
// entry 00699ad0  size 311  status ok
//======================================================================

unsigned int *__cdecl sub_699AD0(int a1, int a2)
{
  int v2; // ebx
  unsigned int *v3; // esi
  int v4; // ebp
  unsigned int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // edx
  int v8; // eax
  int *i; // ecx
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]
  unsigned int *v13; // [esp+1Ch] [ebp+4h]
  int v14; // [esp+1Ch] [ebp+4h]

  v2 = 0;
  v11 = 0;
  v3 = (unsigned int *)calloc(1u, 0x714u);
  v12 = *(_DWORD *)(a1 + 28);
  *v3 = sub_69D470(a2, 24);
  v3[1] = sub_69D470(a2, 24);
  v3[2] = sub_69D470(a2, 24) + 1;
  v3[3] = sub_69D470(a2, 6) + 1;
  v3[4] = sub_69D470(a2, 8);
  v4 = 0;
  if ( (int)v3[3] > 0 )
  {
    v13 = v3 + 5;
    do
    {
      v5 = sub_69D470(a2, 3);
      if ( sub_69D470(a2, 1) )
        v5 |= 8 * sub_69D470(a2, 5);
      *v13 = v5;
      v2 = sub_699AB0(v5) + v11;
      ++v4;
      v11 = v2;
      ++v13;
    }
    while ( v4 < (int)v3[3] );
  }
  if ( v2 > 0 )
  {
    v6 = v3 + 69;
    v14 = v2;
    do
    {
      *v6++ = sub_69D470(a2, 8);
      --v14;
    }
    while ( v14 );
  }
  v7 = *(_DWORD *)(v12 + 24);
  if ( (int)v3[4] < v7 )
  {
    v8 = 0;
    if ( v2 <= 0 )
      return v3;
    for ( i = (int *)(v3 + 69); *i < v7; ++i )
    {
      if ( ++v8 >= v2 )
        return v3;
    }
  }
  sub_699910(v3);
  return 0;
}


//======================================================================
// sub_699C10
// entry 00699c10  size 468  status ok
//======================================================================

_DWORD *__cdecl sub_699C10(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ebp
  int *v5; // eax
  int v6; // ebx
  signed int v7; // eax
  int v8; // ebx
  signed int v9; // ecx
  _DWORD *v10; // edx
  __int64 v11; // rax
  int v12; // eax
  int i; // ebp
  int v14; // edi
  int v15; // ecx
  int v16; // ebx
  size_t v18; // [esp-8h] [ebp-30h]
  int v19; // [esp+18h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-Ch]
  signed int v21; // [esp+20h] [ebp-8h]
  signed int v22; // [esp+24h] [ebp-4h]
  unsigned int *v23; // [esp+2Ch] [ebp+4h]
  int v24; // [esp+30h] [ebp+8h]

  v2 = calloc(1u, 0x2Cu);
  v3 = 0;
  v20 = 0;
  v21 = 0;
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 28);
  *v2 = a2;
  v2[1] = a2[3];
  v2[3] = *(_DWORD *)(v4 + 2848);
  v18 = v2[1];
  v5 = (int *)(*(_DWORD *)(v4 + 2848) + 44 * a2[4]);
  v2[4] = v5;
  v6 = *v5;
  v19 = *v5;
  v2[5] = calloc(v18, 4u);
  if ( (int)v2[1] > 0 )
  {
    v23 = a2 + 5;
    do
    {
      v7 = sub_699AA0(*v23);
      v8 = v7;
      v22 = v7;
      if ( v7 )
      {
        if ( v7 > v21 )
          v21 = v7;
        *(_DWORD *)(v2[5] + 4 * v3) = calloc(v7, 4u);
        v9 = 0;
        if ( v8 > 0 )
        {
          v10 = &a2[v20 + 69];
          do
          {
            if ( ((1 << v9) & *v23) != 0 )
            {
              *(_DWORD *)(*(_DWORD *)(v2[5] + 4 * v3) + 4 * v9) = *(_DWORD *)(v4 + 2848) + 44 * *v10++;
              ++v20;
            }
            ++v9;
          }
          while ( v9 < v22 );
        }
      }
      ++v3;
      ++v23;
    }
    while ( v3 < v2[1] );
    v6 = v19;
  }
  v11 = (__int64)floor(pow((double)(int)v2[1], (double)v19) + 0.5);
  v2[6] = v11;
  v2[2] = v21;
  v2[7] = malloc(4 * v11);
  v12 = v2[6];
  for ( i = 0; i < v12; ++i )
  {
    v24 = i;
    v14 = v12 / v2[1];
    *(_DWORD *)(v2[7] + 4 * i) = malloc(4 * v6);
    v15 = 0;
    if ( v6 > 0 )
    {
      do
      {
        v16 = v24 / v14;
        v24 %= v14;
        ++v15;
        v14 /= (int)v2[1];
        *(_DWORD *)(*(_DWORD *)(v2[7] + 4 * i) + 4 * v15 - 4) = v16;
      }
      while ( v15 < v19 );
      v6 = v19;
    }
    v12 = v2[6];
  }
  return v2;
}


//======================================================================
// _WinMain@16_139_0
// entry 00699e40  size 521  status ok
//======================================================================

int __cdecl WinMain(_DWORD *a1, int a2, int a3, int a4, int (__cdecl *a5)(int, int, _DWORD *, int))
{
  int *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  void *v9; // esp
  _DWORD *v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // ecx
  bool v21; // cc
  int v22; // edx
  _DWORD v24[3]; // [esp+0h] [ebp-38h] BYREF
  int v25; // [esp+Ch] [ebp-2Ch]
  _DWORD *v26; // [esp+10h] [ebp-28h]
  int v27; // [esp+14h] [ebp-24h]
  _DWORD *v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h]
  int v31; // [esp+24h] [ebp-14h]
  int v32; // [esp+28h] [ebp-10h]
  int v33; // [esp+2Ch] [ebp-Ch]
  int v34; // [esp+30h] [ebp-8h]
  int v35; // [esp+34h] [ebp-4h]

  v5 = *(int **)(a2 + 16);
  v28 = *(_DWORD **)a2;
  v6 = *v5;
  v7 = v28[1] - *v28;
  v32 = v28[2];
  v25 = v6;
  v29 = v7 / v32;
  v27 = (v7 / v32 + v6 - 1) / v6;
  v8 = 4 * a4 + 3;
  LOBYTE(v8) = v8 & 0xFC;
  v9 = alloca(v8);
  v10 = v24;
  v11 = 0;
  v26 = v24;
  if ( a4 > 0 )
  {
    v27 *= 4;
    do
      v24[v11++] = sub_690E40(a1, v27);
    while ( v11 < a4 );
  }
  v35 = 0;
  if ( *(int *)(a2 + 8) > 0 )
  {
    while ( 1 )
    {
      v12 = 0;
      v33 = 0;
      if ( v29 > 0 )
        break;
LABEL_26:
      v22 = *(_DWORD *)(a2 + 8);
      if ( ++v35 >= v22 )
        return 0;
    }
    v13 = 0;
    v30 = 0;
    while ( 1 )
    {
      if ( !v35 )
      {
        v14 = 0;
        if ( a4 > 0 )
          break;
      }
LABEL_14:
      v34 = 0;
      if ( v25 > 0 )
      {
        v31 = v32 * v12;
        while ( v12 < v29 )
        {
          v27 = 0;
          if ( a4 > 0 )
          {
            v16 = v10;
            v17 = 1 << v35;
            v18 = a3 - (_DWORD)v26;
            while ( 1 )
            {
              v19 = *(_DWORD *)(*(_DWORD *)(v30 + *v16) + 4 * v34);
              if ( (v17 & v28[v19 + 5]) != 0 )
              {
                v20 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 4 * v19) + 4 * v35);
                if ( v20 )
                {
                  if ( a5(v20, *(_DWORD *)((char *)v16 + v18) + 4 * (v31 + *v28), a1 + 1, v32) == -1 )
                    return 0;
                }
              }
              ++v16;
              if ( ++v27 >= a4 )
              {
                v10 = v26;
                v13 = v30;
                v12 = v33;
                break;
              }
            }
          }
          ++v12;
          v21 = ++v34 < v25;
          v33 = v12;
          v31 += v32;
          if ( !v21 )
            break;
        }
      }
      v13 += 4;
      v30 = v13;
      if ( v12 >= v29 )
        goto LABEL_26;
    }
    v27 = (int)(a1 + 1);
    while ( 1 )
    {
      v15 = sub_695220(*(_DWORD **)(a2 + 16), v27);
      if ( v15 == -1 )
        break;
      *(_DWORD *)(v13 + v10[v14]) = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4 * v15);
      if ( !*(_DWORD *)(v13 + v10[v14]) )
        break;
      if ( ++v14 >= a4 )
      {
        v12 = v33;
        goto LABEL_14;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_69A050
// entry 0069a050  size 272  status ok
//======================================================================

int __cdecl sub_69A050(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5, int a6, int a7)
{
  int v7; // edi
  _DWORD *v8; // ebp
  _DWORD *v9; // ebx
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // edx
  _DWORD *v13; // esi
  int v14; // eax
  double v15; // st7
  float *v16; // ecx
  _DWORD *v17; // esi
  int v18; // ebp
  int i; // ecx
  float *v20; // edx
  double v21; // st7
  int v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+14h] [ebp-4h]
  int v25; // [esp+24h] [ebp+Ch]
  int v26; // [esp+28h] [ebp+10h]
  int v27; // [esp+2Ch] [ebp+14h]

  v23 = 0;
  v7 = *(_DWORD *)(a1 + 36) / 2;
  if ( a6 <= 0 )
    return 0;
  v8 = a4;
  v9 = a3;
  v10 = a5 - (_DWORD)a4;
  v11 = (char *)a4 - (char *)a3;
  v12 = a3;
  v27 = a5 - (_DWORD)a4;
  v24 = (char *)a4 - (char *)a3;
  v25 = a6;
  do
  {
    v13 = (_DWORD *)((char *)v12 + v11);
    if ( *(_DWORD *)((char *)v12 + v11 + v10) )
    {
      if ( v8 )
      {
        v14 = 0;
        if ( v7 > 0 )
        {
          do
          {
            v15 = *(float *)(*v12 + 4 * v14) + *(float *)(*v13 + 4 * v14);
            v16 = (float *)(*v13 + 4 * v14++);
            *v16 = v15;
          }
          while ( v14 < v7 );
          v8 = a4;
          v10 = v27;
        }
      }
      v9[v23++] = *v12;
      v11 = v24;
    }
    ++v12;
    --v25;
  }
  while ( v25 );
  if ( !v23 )
    return 0;
  v26 = sub_69A380(a1, a2, v9, v23, a7, sub_69A160);
  if ( v8 )
  {
    v17 = v8;
    v18 = a6;
    do
    {
      if ( *(_DWORD *)((char *)v17 + v27) )
      {
        for ( i = 0; i < v7; *v20 = v21 )
        {
          v20 = (float *)(*v17 + 4 * i);
          v21 = *v20 - *(float *)(*v9 + 4 * i++);
        }
        ++v9;
      }
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  return v26;
}


//======================================================================
// sub_69A160
// entry 0069a160  size 92  status ok
//======================================================================

int __cdecl sub_69A160(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v10; // [esp+8h] [ebp-4h]

  v10 = 0;
  if ( a3 / *a4 <= 0 )
    return 0;
  v5 = 4 * *a4;
  v6 = a3 / *a4;
  do
  {
    v7 = sub_69A1C0(a4, a2);
    v8 = sub_6951E0((int)a4, v7, a1) + v10;
    a2 += v5;
    --v6;
    v10 = v8;
  }
  while ( v6 );
  return v8;
}


//======================================================================
// sub_69A1C0
// entry 0069a1c0  size 445  status ok
//======================================================================

int __cdecl sub_69A1C0(_DWORD *a1, float *a2)
{
  _DWORD *v2; // ecx
  int v3; // ebp
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  float *v8; // ebx
  float v9; // eax
  float *v10; // edx
  __int16 v11; // fps
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  int v15; // esi
  float *v16; // edx
  bool v17; // zf
  int v18; // ebx
  int v19; // esi
  int v20; // ebp
  int v21; // edx
  int *v22; // edi
  int v23; // ecx
  double v24; // st7
  float *v25; // eax
  double v26; // st6
  float *v27; // eax
  float *v28; // edx
  int v29; // ecx
  double v30; // st7
  int v32; // [esp+10h] [ebp-20h]
  int v33; // [esp+18h] [ebp-18h]
  float v34; // [esp+18h] [ebp-18h]
  int v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+24h] [ebp-Ch]
  int v37; // [esp+28h] [ebp-8h]
  int v38; // [esp+2Ch] [ebp-4h]

  v2 = a1;
  v3 = *a1;
  v4 = *(int **)(a1[3] + 40);
  v32 = 0;
  if ( (int)*a1 > 0 )
  {
    v5 = v4[3];
    v6 = *v4;
    v38 = v4[1];
    v35 = v5;
    v7 = v5 >> 1;
    v36 = v5 >> 1;
    v37 = v4[2];
    v8 = &a2[v3];
    v33 = *a1;
    while ( 1 )
    {
      v9 = *--v8;
      if ( v9 >= (double)*(float *)(v6 + 4 * v7) )
      {
        ++v7;
        v15 = v5 - 1;
        if ( v7 < v15 )
        {
          v16 = (float *)(v6 + 4 * v7);
          do
          {
            if ( v9 < (double)*v16 )
              break;
            ++v7;
            ++v16;
          }
          while ( v7 < v15 );
        }
      }
      else if ( v9 < (double)*(float *)(v6 + 4 * v7 - 4) && --v7 > 0 )
      {
        v10 = (float *)(v6 + 4 * v7 - 4);
        do
        {
          v12 = v9 < (double)*v10;
          v13 = 0;
          v14 = v9 == *v10;
          if ( (v11 & 0x100) == 0 )
            break;
          --v7;
          --v10;
        }
        while ( v7 > 0 );
      }
      v17 = v33 == 1;
      v32 = *(_DWORD *)(v38 + 4 * v7) + v32 * v37;
      --v33;
      if ( v17 )
        break;
      v5 = v35;
      v7 = v36;
    }
    v2 = a1;
  }
  if ( *(int *)(*(_DWORD *)(v2[3] + 8) + 4 * v32) <= 0 )
  {
    v18 = v2[1];
    v19 = 0;
    v34 = 0.0;
    v32 = -1;
    if ( v18 > 0 )
    {
      v20 = 4 * v3;
      v21 = v2[4] - (_DWORD)a2;
      v22 = *(int **)(a1[3] + 8);
      do
      {
        if ( *v22 > 0 )
        {
          v23 = *a1;
          v24 = 0.0;
          if ( (int)*a1 > 0 )
          {
            v25 = a2;
            do
            {
              v26 = *(float *)((char *)v25 + v21) - *v25;
              ++v25;
              --v23;
              v24 = v24 + v26 * v26;
            }
            while ( v23 );
          }
          if ( v32 == -1 || v24 < v34 )
          {
            v34 = v24;
            v32 = v19;
          }
        }
        v21 += v20;
        ++v19;
        ++v22;
      }
      while ( v19 < v18 );
      v3 = *a1;
    }
  }
  v27 = (float *)(a1[4] + 4 * v3 * v32);
  if ( v3 > 0 )
  {
    v28 = a2;
    v29 = v3;
    do
    {
      v30 = *v28++ - *v27++;
      --v29;
      *(v28 - 1) = v30;
    }
    while ( v29 );
  }
  return v32;
}


//======================================================================
// sub_69A380
// entry 0069a380  size 589  status ok
//======================================================================

int __cdecl sub_69A380(int a1, _DWORD **a2, int a3, int a4, _DWORD *a5, int (__cdecl *a6)(int, int, int, int, _DWORD))
{
  int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // esi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // ecx
  bool v23; // cc
  int v25; // [esp+Ch] [ebp-42Ch]
  int v26; // [esp+10h] [ebp-428h]
  int v27; // [esp+10h] [ebp-428h]
  int v28; // [esp+14h] [ebp-424h]
  int i; // [esp+18h] [ebp-420h]
  int v30; // [esp+1Ch] [ebp-41Ch]
  int v31; // [esp+20h] [ebp-418h]
  _DWORD *v32; // [esp+24h] [ebp-414h]
  int v33; // [esp+28h] [ebp-410h]
  int v34; // [esp+2Ch] [ebp-40Ch]
  int v35; // [esp+30h] [ebp-408h]
  _DWORD v36[128]; // [esp+38h] [ebp-400h] BYREF
  _DWORD v37[128]; // [esp+238h] [ebp-200h] BYREF

  v32 = *a2;
  v6 = *a2[4];
  v35 = (*a2)[3];
  v28 = (*a2)[2];
  v34 = v6;
  v7 = ((*a2)[1] - **a2) / v28;
  memset(v37, 0, sizeof(v37));
  memset(v36, 0, sizeof(v36));
  v25 = 0;
  for ( i = v7; v25 < (int)a2[2]; ++v25 )
  {
    v8 = 0;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        if ( !v25 )
        {
          v9 = 0;
          v26 = 0;
          if ( a4 > 0 )
          {
            do
            {
              v10 = 1;
              v11 = a5[v9];
              v12 = *(_DWORD *)(v11 + 4 * v8);
              if ( v6 > 1 )
              {
                v13 = (_DWORD *)(v11 + 4 * v8 + 4);
                do
                {
                  v12 *= v35;
                  if ( v10 + v8 < i )
                    v12 += *v13;
                  ++v10;
                  ++v13;
                }
                while ( v10 < v6 );
                v9 = v26;
              }
              v14 = (int)a2[4];
              if ( v12 < *(_DWORD *)(v14 + 4) )
                a2[9] = (_DWORD *)((char *)a2[9] + sub_6951E0(v14, v12, a1 + 4));
              v26 = ++v9;
            }
            while ( v9 < a4 );
            v7 = i;
          }
        }
        v31 = 0;
        if ( v6 > 0 )
          break;
LABEL_28:
        if ( v8 >= v7 )
          goto LABEL_29;
      }
      v15 = v28 * v8;
      v30 = v28 * v8;
      while ( v8 < v7 )
      {
        v33 = v15 + *v32;
        if ( a4 > 0 )
        {
          v16 = a5;
          v17 = 1 << v25;
          v27 = a4;
          do
          {
            if ( !v25 )
            {
              v18 = &v36[*(_DWORD *)(*v16 + 4 * v8)];
              *v18 += v28;
            }
            v19 = *(_DWORD *)(*v16 + 4 * v8);
            if ( (v17 & v32[v19 + 5]) != 0 )
            {
              v20 = *(_DWORD *)(a2[5][v19] + 4 * v25);
              if ( v20 )
              {
                v21 = a6(a1 + 4, *(_DWORD *)((char *)v16 + a3 - (_DWORD)a5) + 4 * v33, v28, v20, 0);
                a2[8] = (_DWORD *)((char *)a2[8] + v21);
                v22 = &v37[*(_DWORD *)(*v16 + 4 * v8)];
                *v22 += v21;
                v17 = 1 << v25;
              }
            }
            ++v16;
            --v27;
          }
          while ( v27 );
          v6 = v34;
          v15 = v30;
          v7 = i;
        }
        ++v8;
        v15 += v28;
        v23 = ++v31 < v6;
        v30 = v15;
        if ( !v23 )
          goto LABEL_28;
      }
    }
LABEL_29:
    ;
  }
  return 0;
}


//======================================================================
// sub_69A5D0
// entry 0069a5d0  size 75  status ok
//======================================================================

int __cdecl sub_69A5D0(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v5; // edi
  int v6; // edx
  _DWORD *v7; // eax

  v5 = a5;
  v6 = 0;
  if ( a5 <= 0 )
    return 0;
  v7 = a3;
  do
  {
    if ( *(_DWORD *)((char *)v7 + a4 - (_DWORD)a3) )
      a3[v6++] = *v7;
    ++v7;
    --v5;
  }
  while ( v5 );
  if ( v6 )
    return sub_69A620(a1, a2, a3, v6);
  else
    return 0;
}


//======================================================================
// sub_69A620
// entry 0069a620  size 521  status ok
//======================================================================

int __cdecl sub_69A620(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // ebx
  void *v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int *v12; // ebx
  int v13; // esi
  float *v14; // ecx
  long double v15; // st7
  __int16 v16; // fps
  bool v17; // c0
  char v18; // c2
  bool v19; // c3
  int v20; // esi
  float *v21; // edi
  int v22; // edx
  bool v23; // zf
  float v25; // [esp+14h] [ebp-3Ch]
  float v26; // [esp+14h] [ebp-3Ch]
  int v27; // [esp+18h] [ebp-38h]
  float v28; // [esp+1Ch] [ebp-34h]
  int v29; // [esp+20h] [ebp-30h]
  int v30; // [esp+24h] [ebp-2Ch]
  _DWORD *v31; // [esp+28h] [ebp-28h]
  int v32; // [esp+2Ch] [ebp-24h]
  int v33; // [esp+30h] [ebp-20h]
  int v34; // [esp+34h] [ebp-1Ch]
  int v35; // [esp+38h] [ebp-18h]
  int v36; // [esp+3Ch] [ebp-14h]
  int v37; // [esp+40h] [ebp-10h]
  float v38; // [esp+48h] [ebp-8h]

  v31 = (_DWORD *)*a2;
  v36 = *(_DWORD *)(*a2 + 12);
  v27 = *(_DWORD *)(*a2 + 8);
  v4 = (v31[1] - *v31) / v27;
  v35 = v4;
  v5 = 0;
  v30 = sub_690E40(a1, 4 * a4);
  if ( a4 > 0 )
  {
    v6 = 4 * v4;
    do
    {
      v7 = (void *)sub_690E40(a1, v6);
      *(_DWORD *)(v30 + 4 * v5) = v7;
      memset(v7, 0, v6);
      ++v5;
    }
    while ( v5 < a4 );
  }
  v8 = 0;
  v34 = 0;
  if ( v35 > 0 )
  {
    v9 = a4;
    v10 = v27;
    v29 = 0;
    do
    {
      v11 = v29 + *v31;
      v37 = v11;
      if ( v9 > 0 )
      {
        v12 = (int *)v30;
        v33 = v9;
        v32 = v36 - 1;
        while ( 1 )
        {
          v28 = 0.0;
          v25 = 0.0;
          if ( v10 > 0 )
          {
            v13 = 4 * v11;
            do
            {
              v14 = (float *)(v13 + *(int *)((char *)v12 + a3 - v30));
              v15 = fabs(*v14);
              v17 = v15 < v28;
              v18 = 0;
              v19 = v15 == v28;
              if ( (v16 & 0x4100) == 0 )
                v28 = v15;
              v13 += 4;
              --v10;
              v25 = fabs(floor(*v14 + 0.5)) + v25;
            }
            while ( v10 );
          }
          v20 = 0;
          v38 = 100.0 / (double)v27;
          v26 = v25 * v38;
          if ( v32 > 0 )
          {
            v21 = (float *)(v31 + 389);
            do
            {
              if ( v28 <= (double)*(v21 - 64) && (*v21 < 0.0 || (double)(int)(__int64)v26 < *v21) )
                break;
              ++v20;
              ++v21;
            }
            while ( v20 < v32 );
          }
          v22 = *v12;
          v8 = v34;
          v10 = v27;
          ++v12;
          v23 = v33 == 1;
          *(_DWORD *)(v22 + 4 * v34) = v20;
          --v33;
          if ( v23 )
            break;
          v11 = v37;
        }
        v9 = a4;
      }
      v34 = ++v8;
      v29 += v10;
    }
    while ( v8 < v35 );
  }
  ++a2[10];
  return v30;
}


//======================================================================
// sub_69A830
// entry 0069a830  size 75  status ok
//======================================================================

int __cdecl sub_69A830(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // edx
  _DWORD *v7; // eax

  v5 = a5;
  v6 = 0;
  if ( a5 <= 0 )
    return 0;
  v7 = (_DWORD *)a3;
  do
  {
    if ( *(_DWORD *)((char *)v7 + a4 - a3) )
      *(_DWORD *)(a3 + 4 * v6++) = *v7;
    ++v7;
    --v5;
  }
  while ( v5 );
  if ( v6 )
    return WinMain(a1, a2, a3, v6, (int (__cdecl *)(int, int, _DWORD *, int))sub_695540);
  else
    return 0;
}


//======================================================================
// sub_69A880
// entry 0069a880  size 63  status ok
//======================================================================

int __cdecl sub_69A880(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax

  v5 = 0;
  v6 = 0;
  if ( a5 <= 0 )
    return 0;
  do
  {
    if ( *(_DWORD *)(a4 + 4 * v6) )
      ++v5;
    ++v6;
  }
  while ( v6 < a5 );
  if ( v5 )
    return sub_69A8C0(a1, a2, a3, a5);
  else
    return 0;
}


//======================================================================
// sub_69A8C0
// entry 0069a8c0  size 390  status ok
//======================================================================

_DWORD *__cdecl sub_69A8C0(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // esi
  int v7; // esi
  void *v8; // edi
  int v9; // esi
  int v10; // edx
  long double v11; // st7
  __int16 v12; // fps
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  int j; // ecx
  long double v17; // st7
  __int16 v18; // fps
  bool v19; // c0
  char v20; // c2
  bool v21; // c3
  int v22; // ecx
  float *v23; // edx
  _DWORD *v25; // [esp+10h] [ebp-18h]
  int v26; // [esp+14h] [ebp-14h]
  int v27; // [esp+18h] [ebp-10h]
  int v28; // [esp+18h] [ebp-10h]
  int v29; // [esp+1Ch] [ebp-Ch]
  int v30; // [esp+20h] [ebp-8h]
  float v31; // [esp+2Ch] [ebp+4h]
  float i; // [esp+38h] [ebp+10h]

  v4 = (_DWORD *)*a2;
  v27 = *(_DWORD *)(*a2 + 12);
  v5 = *(_DWORD *)(*a2 + 4) - *(_DWORD *)*a2;
  v26 = *(_DWORD *)(*a2 + 8);
  v30 = v5 / v26;
  v25 = (_DWORD *)sub_690E40(a1, 4);
  v7 = 4 * (a4 * v5 / v26);
  v8 = (void *)sub_690E40(a1, v7);
  *v25 = v8;
  v29 = 0;
  memset(v8, 0, v7);
  v9 = *v4 / a4;
  if ( v30 > 0 )
  {
    v28 = v27 - 1;
    do
    {
      v10 = 0;
      v31 = 0.0;
      for ( i = 0.0; v10 < v26; ++v9 )
      {
        v11 = fabs(*(float *)(*a3 + 4 * v9));
        v13 = v11 < v31;
        v14 = 0;
        v15 = v11 == v31;
        if ( (v12 & 0x4100) == 0 )
          v31 = v11;
        for ( j = 1; j < a4; ++j )
        {
          v17 = fabs(*(float *)(a3[j] + 4 * v9));
          v19 = v17 < i;
          v20 = 0;
          v21 = v17 == i;
          if ( (v18 & 0x4100) == 0 )
            i = v17;
        }
        v10 += a4;
      }
      v22 = 0;
      if ( v28 > 0 )
      {
        v23 = (float *)(v4 + 389);
        do
        {
          if ( v31 <= (double)*(v23 - 64) && i <= (double)*v23 )
            break;
          ++v22;
          ++v23;
        }
        while ( v22 < v28 );
      }
      ++v29;
      *(_DWORD *)(*v25 + 4 * v29 - 4) = v22;
    }
    while ( v29 < v30 );
  }
  ++a2[10];
  return v25;
}


//======================================================================
// sub_69AA50
// entry 0069aa50  size 332  status ok
//======================================================================

int __cdecl sub_69AA50(_DWORD *a1, _DWORD **a2, int a3, int *a4, _DWORD *a5, int a6, _DWORD *a7)
{
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int *v15; // edi
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  float *v21; // edx
  int v22; // esi
  int v23; // ebx
  double v24; // st7
  int v26; // [esp+10h] [ebp-14h]
  int v27; // [esp+14h] [ebp-10h] BYREF
  int v28; // [esp+18h] [ebp-Ch]
  int v29; // [esp+1Ch] [ebp-8h]
  int v30; // [esp+20h] [ebp-4h]
  int v31; // [esp+28h] [ebp+4h]
  int v32; // [esp+30h] [ebp+Ch]
  int v33; // [esp+38h] [ebp+14h]
  int v34; // [esp+38h] [ebp+14h]
  int v35; // [esp+40h] [ebp+1Ch]

  v7 = a6;
  v26 = 0;
  v8 = a1[9] / 2;
  v9 = sub_690E40(a1, 4 * a6 * v8);
  v27 = v9;
  if ( a6 <= 0 )
    return 0;
  v10 = a5;
  v11 = a3 - (_DWORD)a5;
  v12 = v9 - (_DWORD)a5;
  v29 = a3 - (_DWORD)a5;
  v30 = v9 - (_DWORD)a5;
  v33 = a6;
  do
  {
    v28 = *(_DWORD *)((char *)v10 + v11);
    if ( *v10 )
      ++v26;
    v13 = 0;
    if ( v8 > 0 )
    {
      v14 = (_DWORD *)((char *)v10 + v12);
      do
      {
        ++v13;
        *v14 = *(_DWORD *)(v28 + 4 * v13 - 4);
        v14 += a6;
      }
      while ( v13 < v8 );
      v11 = v29;
      v12 = v30;
    }
    ++v10;
    --v33;
  }
  while ( v33 );
  if ( !v26 )
    return 0;
  v15 = a4;
  v35 = sub_69A380((int)a1, a2, (int)&v27, 1, a7, (int (__cdecl *)(int, int, int, int, _DWORD))sub_69A160);
  if ( a4 )
  {
    v16 = a3 - (_DWORD)a4;
    v17 = v27 - (_DWORD)a4;
    v32 = a3 - (_DWORD)a4;
    v34 = v27 - (_DWORD)a4;
    v31 = a6;
    do
    {
      v18 = *(int *)((char *)v15 + v16);
      v19 = *v15;
      if ( v8 > 0 )
      {
        v20 = 4 * v7;
        v21 = (float *)((char *)v15 + v17);
        v22 = v18 - v19;
        v23 = v8;
        do
        {
          v24 = *(float *)(v22 + v19) - *v21;
          v19 += 4;
          v21 = (float *)((char *)v21 + v20);
          --v23;
          *(float *)(v19 - 4) = v24 + *(float *)(v19 - 4);
        }
        while ( v23 );
        v7 = a6;
        v16 = v32;
        v17 = v34;
      }
      ++v15;
      --v31;
    }
    while ( v31 );
  }
  return v35;
}


//======================================================================
// sub_69ABA0
// entry 0069aba0  size 403  status ok
//======================================================================

int __cdecl sub_69ABA0(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  int *v5; // esi
  _DWORD *v6; // ebx
  int v7; // ebp
  int v8; // edi
  int i; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  int v17; // [esp+10h] [ebp-14h]
  _DWORD *v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]
  int v22; // [esp+34h] [ebp+10h]

  v5 = a2;
  v6 = (_DWORD *)*a2;
  v7 = *(_DWORD *)(*a2 + 8);
  v20 = *(_DWORD *)a2[4];
  v8 = (*(_DWORD *)(*a2 + 4) - *(_DWORD *)*a2) / v7;
  v19 = v8;
  v21 = sub_690E40(a1, 4 * ((v8 + v20 - 1) / v20));
  for ( i = 0; i < a5; ++i )
  {
    if ( *(_DWORD *)(a4 + 4 * i) )
      break;
  }
  if ( i != a5 )
  {
    v17 = 0;
    if ( a2[2] > 0 )
    {
      while ( 1 )
      {
        v22 = 0;
        if ( v8 > 0 )
          break;
LABEL_21:
        if ( ++v17 >= v5[2] )
          return 0;
      }
      v18 = (_DWORD *)v21;
      while ( 1 )
      {
        if ( !v17 )
        {
          v10 = sub_695220((_DWORD *)v5[4], (int)(a1 + 1));
          if ( v10 == -1 )
            break;
          v11 = *(_DWORD *)(v5[7] + 4 * v10);
          *v18 = v11;
          if ( !v11 )
            break;
        }
        v12 = 0;
        if ( v20 > 0 )
        {
          v13 = v7 * v22;
          do
          {
            if ( v22 >= v19 )
              break;
            v14 = *(_DWORD *)(*v18 + 4 * v12);
            if ( ((1 << v17) & v6[v14 + 5]) != 0 )
            {
              v15 = *(_DWORD **)(*(_DWORD *)(a2[5] + 4 * v14) + 4 * v17);
              if ( v15 )
              {
                if ( sub_695B70(v15, a3, v13 + *v6, a5, (int)(a1 + 1), v7) == -1 )
                  return 0;
              }
            }
            ++v12;
            v13 += v7;
            ++v22;
          }
          while ( v12 < v20 );
          v5 = a2;
        }
        ++v18;
        if ( v22 >= v19 )
        {
          v8 = v19;
          goto LABEL_21;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_69AD40
// entry 0069ad40  size 31  status ok
//======================================================================

void __cdecl sub_69AD40(void *a1)
{
  if ( a1 )
  {
    memset(a1, 0, 0x460u);
    free(a1);
  }
}


//======================================================================
// sub_69AD60
// entry 0069ad60  size 31  status ok
//======================================================================

void __cdecl sub_69AD60(void *a1)
{
  if ( a1 )
  {
    memset(a1, 0, 0x520u);
    free(a1);
  }
}


//======================================================================
// sub_69AD80
// entry 0069ad80  size 446  status ok
//======================================================================

int __cdecl sub_69AD80(int *a1, int a2)
{
  int *v2; // ebp
  int v4; // esi
  int *v5; // ebx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  _DWORD *v9; // ebp
  bool v10; // zf
  int v11; // eax
  int result; // eax
  int *v13; // ebx
  int v14; // esi
  bool v15; // cc
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]
  int v19; // [esp+18h] [ebp-4h]
  _DWORD *v20; // [esp+20h] [ebp+4h]
  int v21; // [esp+24h] [ebp+8h]
  _DWORD *v22; // [esp+24h] [ebp+8h]
  int v23; // [esp+24h] [ebp+8h]

  v2 = a1;
  v16 = 0;
  v18 = a1[210];
  v4 = -1;
  sub_69D210(a2, *a1, 5);
  v21 = 0;
  if ( *a1 > 0 )
  {
    v5 = a1 + 1;
    do
    {
      sub_69D210(a2, *v5, 4);
      if ( v4 < *v5 )
        v4 = *v5;
      ++v5;
      ++v21;
    }
    while ( v21 < *a1 );
  }
  v6 = v4 + 1;
  if ( v4 + 1 > 0 )
  {
    v7 = a1 + 48;
    v22 = a1 + 80;
    v17 = v6;
    do
    {
      sub_69D210(a2, *(v7 - 16) - 1, 3);
      sub_69D210(a2, *v7, 2);
      if ( *v7 )
        sub_69D210(a2, v7[16], 8);
      v8 = 0;
      if ( 1 << *v7 > 0 )
      {
        v9 = v22;
        do
        {
          sub_69D210(a2, *v9 + 1, 8);
          ++v8;
          ++v9;
        }
        while ( v8 < 1 << *v7 );
        v2 = a1;
      }
      ++v7;
      v10 = v17 == 1;
      v22 += 8;
      --v17;
    }
    while ( !v10 );
  }
  sub_69D210(a2, v2[208] - 1, 2);
  v11 = sub_698A00(v18);
  sub_69D210(a2, v11, 4);
  v19 = sub_698A00(v18);
  result = 0;
  v23 = 0;
  if ( *v2 > 0 )
  {
    v20 = v2 + 1;
    do
    {
      v16 += v2[*v20 + 32];
      if ( result < v16 )
      {
        v13 = &v2[result + 211];
        v14 = v16 - result;
        do
        {
          sub_69D210(a2, *v13++, v19);
          --v14;
        }
        while ( v14 );
        result = v16;
      }
      v15 = ++v23 < *v2;
      ++v20;
    }
    while ( v15 );
  }
  return result;
}


//======================================================================
// sub_69AF40
// entry 0069af40  size 554  status ok
//======================================================================

int *__cdecl sub_69AF40(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int *v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int *v9; // esi
  int v10; // eax
  int v11; // ebp
  int *v12; // edi
  int v13; // eax
  bool v14; // cc
  int v15; // edi
  int *v16; // esi
  int v17; // eax
  int v19; // [esp+10h] [ebp-10h]
  int *v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-8h]
  int v23; // [esp+1Ch] [ebp-4h]
  int *v24; // [esp+24h] [ebp+4h]
  int v25; // [esp+24h] [ebp+4h]
  int v26; // [esp+24h] [ebp+4h]
  int *v27; // [esp+28h] [ebp+8h]
  _DWORD *v28; // [esp+28h] [ebp+8h]

  v2 = 0;
  v22 = *(_DWORD *)(a1 + 28);
  v19 = 0;
  v3 = -1;
  v5 = (int *)calloc(1u, 0x460u);
  v20 = v5;
  v6 = sub_69D470(a2, 5);
  *v5 = v6;
  if ( v6 > 0 )
  {
    v24 = v5 + 1;
    do
    {
      v7 = sub_69D470(a2, 4);
      *v24 = v7;
      if ( v3 < v7 )
        v3 = v7;
      ++v2;
      ++v24;
    }
    while ( v2 < *v5 );
  }
  v8 = v3 + 1;
  v25 = 0;
  v23 = v8;
  if ( v8 <= 0 )
  {
LABEL_20:
    v5[208] = sub_69D470(a2, 2) + 1;
    v21 = sub_69D470(a2, 4);
    v15 = 0;
    v26 = 0;
    if ( *v5 <= 0 )
    {
LABEL_28:
      v5[209] = 0;
      v5[210] = 1 << v21;
      return v5;
    }
    v28 = v5 + 1;
    while ( 1 )
    {
      v19 += v5[*v28 + 32];
      if ( v15 < v19 )
        break;
LABEL_27:
      v14 = ++v26 < *v5;
      ++v28;
      if ( !v14 )
        goto LABEL_28;
    }
    v16 = &v5[v15 + 211];
    while ( 1 )
    {
      v17 = sub_69D470(a2, v21);
      *v16 = v17;
      if ( v17 < 0 || v17 >= 1 << v21 )
        break;
      ++v15;
      ++v16;
      if ( v15 >= v19 )
        goto LABEL_27;
    }
  }
  else
  {
    v9 = v5 + 64;
    v27 = v5 + 80;
    while ( 1 )
    {
      *(v9 - 32) = sub_69D470(a2, 3) + 1;
      v10 = sub_69D470(a2, 2);
      *(v9 - 16) = v10;
      if ( v10 < 0 )
        break;
      if ( v10 )
        *v9 = sub_69D470(a2, 8);
      if ( *v9 < 0 || *v9 >= *(_DWORD *)(v22 + 24) )
        break;
      v11 = 0;
      if ( 1 << *(v9 - 16) > 0 )
      {
        v12 = v27;
        while ( 1 )
        {
          v13 = sub_69D470(a2, 8) - 1;
          *v12 = v13;
          if ( v13 < -1 || v13 >= *(_DWORD *)(v22 + 24) )
            break;
          ++v11;
          ++v12;
          if ( v11 >= 1 << *(v9 - 16) )
          {
            v8 = v23;
            goto LABEL_19;
          }
        }
        v5 = v20;
        break;
      }
LABEL_19:
      v5 = v20;
      ++v9;
      v14 = ++v25 < v8;
      v27 += 8;
      if ( !v14 )
        goto LABEL_20;
    }
  }
  sub_69AD40(v5);
  return 0;
}


//======================================================================
// sub_69B170
// entry 0069b170  size 507  status ok
//======================================================================

_DWORD *__cdecl sub_69B170(int a1, int *a2)
{
  _DWORD *v2; // ebp
  int v3; // esi
  int v4; // ecx
  int *v5; // eax
  int v6; // edx
  signed int v7; // esi
  signed int v8; // eax
  _DWORD *v9; // ecx
  signed int v10; // eax
  _DWORD *v11; // ecx
  signed int v12; // eax
  int *v13; // ecx
  int v14; // edx
  signed int i; // eax
  int v16; // ecx
  int *v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // esi
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  int *v25; // [esp+10h] [ebp-120h]
  int *v26; // [esp+14h] [ebp-11Ch]
  int v27; // [esp+18h] [ebp-118h]
  int v28; // [esp+1Ch] [ebp-114h]
  int *v29; // [esp+20h] [ebp-110h]
  _DWORD *v30; // [esp+24h] [ebp-10Ch]
  int v31; // [esp+28h] [ebp-108h]
  _DWORD Base[65]; // [esp+2Ch] [ebp-104h] BYREF

  v2 = calloc(1u, 0x520u);
  v3 = 0;
  v2[324] = a2;
  v2[322] = a2[210];
  v4 = *a2;
  v30 = v2;
  if ( *a2 > 0 )
  {
    v5 = a2 + 1;
    do
    {
      v6 = *v5++;
      v3 += a2[v6 + 32];
      --v4;
    }
    while ( v4 );
  }
  v7 = v3 + 2;
  v8 = 0;
  v2[321] = v7;
  if ( v7 > 0 )
  {
    v9 = a2 + 209;
    do
      Base[v8++] = v9++;
    while ( v8 < v7 );
  }
  qsort(Base, v7, 4u, sub_69B380);
  v10 = 0;
  if ( v7 > 0 )
  {
    v11 = v2 + 65;
    do
      *v11++ = (Base[v10++] - (int)a2 - 836) >> 2;
    while ( v10 < v7 );
  }
  v12 = 0;
  if ( v7 > 0 )
  {
    v13 = v2 + 65;
    do
    {
      v14 = *v13++;
      v2[v14 + 130] = v12++;
    }
    while ( v12 < v7 );
  }
  for ( i = 0; i < v7; v2[i - 1] = a2[v16 + 209] )
    v16 = v2[i++ + 65];
  switch ( a2[208] )
  {
    case 1:
      v2[323] = 256;
      break;
    case 2:
      v2[323] = 128;
      break;
    case 3:
      v2[323] = 86;
      break;
    case 4:
      v2[323] = 64;
      break;
    default:
      break;
  }
  v31 = v7 - 2;
  if ( v7 - 2 > 0 )
  {
    v17 = v2 + 195;
    v18 = 2;
    v29 = v2 + 195;
    v26 = a2 + 211;
    do
    {
      v19 = 0;
      v27 = v2[322];
      v20 = 0;
      v21 = 1;
      v28 = *v26;
      v22 = 0;
      if ( v18 > 0 )
      {
        v25 = a2 + 209;
        do
        {
          v23 = *v25;
          if ( *v25 > v20 && v23 < v28 )
          {
            v19 = v22;
            v20 = *v25;
          }
          if ( v23 < v27 && v23 > v28 )
          {
            v21 = v22;
            v27 = *v25;
          }
          ++v22;
          ++v25;
        }
        while ( v22 < v18 );
        v2 = v30;
        v17 = v29;
      }
      v17[63] = v19;
      *v17++ = v21;
      ++v18;
      ++v26;
      v29 = v17;
    }
    while ( v18 - 2 < v31 );
  }
  return v2;
}


//======================================================================
// sub_69B380
// entry 0069b380  size 21  status ok
//======================================================================

int __cdecl sub_69B380(_DWORD **a1, _DWORD **a2)
{
  return **a1 - **a2;
}


//======================================================================
// sub_69B3A0
// entry 0069b3a0  size 1160  status ok
//======================================================================

_DWORD *__cdecl sub_69B3A0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  signed int v4; // esi
  int v5; // ebp
  int v6; // edx
  _DWORD *v7; // ebx
  bool v8; // zf
  int v9; // eax
  int v10; // esi
  _OWORD *v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  int v15; // esi
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // ebp
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // edx
  int i; // eax
  int j; // eax
  bool v29; // cc
  int v30; // esi
  int *v31; // edi
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v40; // [esp-4h] [ebp-D58h]
  int v41; // [esp+10h] [ebp-D44h]
  int v42; // [esp+10h] [ebp-D44h]
  int v43; // [esp+14h] [ebp-D40h] BYREF
  int v44; // [esp+18h] [ebp-D3Ch]
  _DWORD *v45; // [esp+1Ch] [ebp-D38h]
  int v46; // [esp+20h] [ebp-D34h] BYREF
  int v47; // [esp+24h] [ebp-D30h]
  int v48; // [esp+28h] [ebp-D2Ch]
  int v49; // [esp+2Ch] [ebp-D28h]
  int v50; // [esp+30h] [ebp-D24h] BYREF
  int v51; // [esp+34h] [ebp-D20h] BYREF
  int v52; // [esp+38h] [ebp-D1Ch] BYREF
  int v53; // [esp+3Ch] [ebp-D18h] BYREF
  int v54; // [esp+40h] [ebp-D14h] BYREF
  int v55; // [esp+44h] [ebp-D10h]
  _DWORD v56[65]; // [esp+144h] [ebp-C10h] BYREF
  _DWORD v57[65]; // [esp+248h] [ebp-B0Ch] BYREF
  _DWORD v58[65]; // [esp+34Ch] [ebp-A08h] BYREF
  _DWORD v59[65]; // [esp+450h] [ebp-904h] BYREF
  _OWORD v60[128]; // [esp+554h] [ebp-800h] BYREF

  v4 = a2[321];
  v5 = a2[324];
  v6 = a2[322];
  v7 = 0;
  v47 = v5;
  v43 = v6;
  v44 = v4;
  v41 = 0;
  if ( v4 > 0 )
    memset32(v56, -200, v4);
  v8 = v4 == 0;
  if ( v4 > 0 )
  {
    memset32(&v54, -200, v4);
    memset(v57, 0, 4 * v4);
    memset32(v58, 1, v4);
    memset(v59, 0xFFu, 4 * v4);
    v8 = v4 == 0;
  }
  if ( v8 )
  {
    v9 = sub_69B880(a4, a3, 0, v6, v60, v6, v5);
  }
  else
  {
    v10 = 0;
    v46 = v44 - 1;
    if ( v44 - 1 <= 0 )
      return v7;
    v11 = v60;
    do
    {
      v12 = sub_69B880(a4, a3, a2[v10], a2[v10 + 1], v11, v43, v5) + v41;
      ++v10;
      v11 += 2;
      v41 = v12;
    }
    while ( v10 < v46 );
    v4 = v44;
    v9 = v12;
  }
  if ( v9 )
  {
    v50 = -200;
    v53 = -200;
    sub_69BAB0(v60, v4 - 1, &v50, &v53);
    v56[0] = v50;
    v54 = v50;
    v55 = v53;
    v56[1] = v53;
    v42 = 2;
    if ( v4 > 2 )
    {
      v45 = a2 + 132;
      while ( 1 )
      {
        v13 = *v45;
        v49 = v13;
        v14 = v57[v13];
        v15 = v58[v13];
        if ( v59[v14] != v15 )
          break;
LABEL_35:
        v29 = ++v42 < v44;
        ++v45;
        if ( !v29 )
        {
          v4 = v44;
          goto LABEL_37;
        }
      }
      v40 = v57[v13];
      v59[v14] = v15;
      v16 = a2[v14 + 130];
      v17 = *(_DWORD *)(v5 + 4 * v14 + 836);
      v18 = *(_DWORD *)(v5 + 4 * v15 + 836);
      v48 = a2[v15 + 130];
      v46 = v17;
      v43 = v18;
      v19 = sub_69BEE0(v56, &v54, v40);
      v20 = sub_69BEE0(v56, &v54, v15);
      if ( v19 == -1 || v20 == -1 )
        exit(1);
      if ( sub_69BCA0(v46, v43, v19, v20, a4, a3, v47) )
      {
        v21 = v49;
        v51 = -200;
        v52 = -200;
        v46 = -200;
        v43 = -200;
        sub_69BAB0(&v60[2 * v16], v49 - v16, &v51, &v52);
        sub_69BAB0(&v60[2 * v21], v48 - v21, &v46, &v43);
        v22 = v51;
        *(&v54 + v14) = v51;
        if ( !v14 )
          v56[0] = v22;
        v23 = v42;
        v24 = v52;
        v25 = v46;
        v26 = v43;
        v56[v42] = v52;
        *(&v54 + v42) = v25;
        v56[v15] = v26;
        if ( v15 == 1 )
          v55 = v26;
        if ( v24 >= 0 )
          goto LABEL_26;
        if ( v25 >= 0 )
        {
          v23 = v42;
LABEL_26:
          for ( i = v21 - 1; i >= 0; v58[i--] = v23 )
          {
            if ( v58[i] != v15 )
              break;
          }
          for ( j = v21 + 1; j < v44; v57[j++] = v42 )
          {
            if ( v57[j] != v14 )
              break;
          }
        }
      }
      else
      {
        v56[v42] = -200;
        *(&v54 + v42) = -200;
      }
      v5 = v47;
      goto LABEL_35;
    }
LABEL_37:
    v7 = (_DWORD *)sub_690E40(a1, 4 * v4);
    *v7 = sub_69BEE0(v56, &v54, 0);
    v7[1] = sub_69BEE0(v56, &v54, 1);
    v30 = 2;
    if ( v44 > 2 )
    {
      v45 = (_DWORD *)(v5 + 844);
      v31 = a2 + 195;
      do
      {
        v32 = v31[63];
        v33 = *v31;
        v34 = *(_DWORD *)(v5 + 4 * v32 + 836);
        v35 = v7[v32];
        v49 = v34;
        v36 = *(_DWORD *)(v5 + 4 * v33 + 836);
        v48 = v7[v33];
        v43 = sub_69B830(v49, v36, v35, v48, *v45);
        v37 = sub_69BEE0(v56, &v54, v30);
        v38 = v43;
        if ( v37 < 0 || v43 == v37 )
        {
          BYTE1(v38) = BYTE1(v43) | 0x80;
          v7[v30] = v38;
        }
        else
        {
          v7[v30] = v37;
        }
        ++v30;
        ++v31;
        ++v45;
      }
      while ( v30 < v44 );
    }
  }
  return v7;
}


//======================================================================
// sub_69B830
// entry 0069b830  size 72  status ok
//======================================================================

int __cdecl sub_69B830(int a1, int a2, __int16 a3, __int16 a4, int a5)
{
  int v5; // esi
  int v6; // eax

  v5 = a3 & 0x7FFF;
  v6 = (int)((a5 - a1) * abs32((a4 & 0x7FFF) - v5)) / (a2 - a1);
  if ( (a4 & 0x7FFF) - v5 >= 0 )
    return v6 + v5;
  else
    return v5 - v6;
}


//======================================================================
// sub_69B880
// entry 0069b880  size 498  status ok
//======================================================================

int __cdecl sub_69B880(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7)
{
  int v7; // esi
  int v9; // edi
  int v10; // ebp
  int v11; // ecx
  __int16 v12; // fps
  double v13; // st7
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  __int64 v17; // rax
  int v19; // [esp+10h] [ebp-2Ch]
  int v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+18h] [ebp-24h]
  int v22; // [esp+1Ch] [ebp-20h]
  int v23; // [esp+20h] [ebp-1Ch]
  int v24; // [esp+24h] [ebp-18h]
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h]
  int v27; // [esp+30h] [ebp-Ch]
  int v28; // [esp+34h] [ebp-8h]
  float *v29; // [esp+38h] [ebp-4h]
  int v30; // [esp+40h] [ebp+4h]
  int v31; // [esp+48h] [ebp+Ch]
  int v32; // [esp+48h] [ebp+Ch]
  float *v33; // [esp+50h] [ebp+14h]

  v7 = a3;
  v29 = (float *)(a1 + 4 * a3);
  sub_69BA80(v29);
  memset(a5, 0, 0x20u);
  v9 = a4;
  v10 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v31 = 0;
  *a5 = v7;
  a5[1] = a4;
  if ( a4 >= a6 )
    v9 = a6 - 1;
  if ( v7 <= v9 )
  {
    v33 = v29;
    v30 = a2 - a1;
    do
    {
      v11 = sub_69BA80(v33);
      if ( v11 )
      {
        v13 = *(float *)((char *)v33 + v30) + *(float *)(a7 + 1112);
        v14 = v13 < *v33;
        v15 = 0;
        v16 = v13 == *v33;
        if ( (v12 & 0x100) != 0 )
        {
          v22 += v11;
          v20 += v7;
          v24 += v7 * v7;
          v26 += v11 * v11;
          v28 += v7 * v11;
          ++v31;
        }
        else
        {
          v21 += v11;
          v19 += v7;
          v23 += v7 * v7;
          v25 += v11 * v11;
          v27 += v7 * v11;
          ++v10;
        }
      }
      ++v7;
      ++v33;
    }
    while ( v7 <= v9 );
  }
  v32 = v10 + v31;
  v17 = (__int64)((double)v32 * *(float *)(a7 + 1108) / (double)(v10 + 1));
  a5[2] = v20 + v19 * (v17 + 1);
  a5[3] = v22 + v21 * (v17 + 1);
  a5[4] = v24 + v23 * (v17 + 1);
  a5[5] = v26 + v25 * (v17 + 1);
  a5[6] = v28 + v27 * (v17 + 1);
  a5[7] = v32 + v10 * v17;
  return v10;
}


//======================================================================
// sub_69BA80
// entry 0069ba80  size 47  status ok
//======================================================================

int __cdecl sub_69BA80(float *a1)
{
  __int64 v1; // rax

  v1 = (__int64)(*a1 * 7.3142858 + 1023.5);
  if ( (int)v1 <= 1023 )
    return (int)v1 < 0 ? 0 : v1;
  else
    return 1023;
}


//======================================================================
// sub_69BAB0
// entry 0069bab0  size 492  status ok
//======================================================================

int *__cdecl sub_69BAB0(int *a1, int a2, int *a3, int *a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // ebp
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st3
  int *result; // eax
  int v19; // [esp+18h] [ebp-28h]
  int v20; // [esp+1Ch] [ebp-24h]
  int v21; // [esp+20h] [ebp-20h]
  double v22; // [esp+20h] [ebp-20h]
  int v23; // [esp+28h] [ebp-18h]
  double v24; // [esp+28h] [ebp-18h]
  int v25; // [esp+30h] [ebp-10h]
  double v26; // [esp+30h] [ebp-10h]
  int v27; // [esp+38h] [ebp-8h]
  int v28; // [esp+3Ch] [ebp-4h]

  v28 = *a1;
  v4 = 0;
  v5 = 0;
  v6 = a1[8 * a2 - 7];
  v7 = a2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v27 = v6;
  if ( a2 > 0 )
  {
    v11 = a1 + 3;
    do
    {
      v4 += *(v11 - 1);
      v5 += *v11;
      v8 += v11[1];
      v9 += v11[3];
      v10 += v11[4];
      v11 += 8;
      --v7;
    }
    while ( v7 );
    v6 = a1[8 * a2 - 7];
    v25 = v10;
    v23 = v9;
    v21 = v8;
    v20 = v5;
    v19 = v4;
  }
  if ( *a3 >= 0 )
  {
    v5 += *a3;
    v4 += v28;
    v8 += v28 * v28;
    v6 = a1[8 * a2 - 7];
    v9 += v28 * *a3;
    ++v10;
    v19 = v4;
    v20 = v5;
    v21 = v8;
    v23 = v9;
    v25 = v10;
  }
  v12 = *a4;
  if ( *a4 >= 0 )
  {
    v19 = v6 + v4;
    ++v10;
    v20 = v12 + v5;
    v21 = v6 * v6 + v8;
    v23 = v6 * v12 + v9;
    v25 = v10;
  }
  if ( v10 )
  {
    v13 = (double)v19;
    v14 = (double)v20;
    v22 = (double)v21;
    v15 = (double)v23;
    v16 = (double)v25;
    v17 = 1.0 / (v22 * v16 - v13 * v13);
    v24 = (v22 * v14 - v15 * v13) * v17;
    v26 = (v16 * v15 - v14 * v13) * v17;
    *a3 = (__int64)floor((double)v28 * v26 + v24 + 0.5);
    *a4 = (__int64)floor((double)v27 * v26 + v24 + 0.5);
    result = (int *)*a3;
    if ( *a3 > 1023 )
      *a3 = 1023;
    if ( *a4 > 1023 )
      *a4 = 1023;
    if ( *a3 < 0 )
      *a3 = 0;
    if ( *a4 < 0 )
      *a4 = 0;
  }
  else
  {
    *a3 = 0;
    *a4 = 0;
    return a3;
  }
  return result;
}


//======================================================================
// sub_69BCA0
// entry 0069bca0  size 566  status ok
//======================================================================

int __cdecl sub_69BCA0(int a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  float *v11; // edi
  float *v12; // ecx
  __int16 v13; // fps
  double v14; // st7
  bool v15; // c0
  char v16; // c2
  bool v17; // c3
  int v18; // ebx
  double v19; // st7
  double v20; // st6
  double v22; // rt0
  __int16 v23; // fps
  double v24; // st6
  bool v25; // c0
  char v26; // c2
  bool v27; // c3
  int v28; // ebp
  float *v29; // esi
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  __int16 v33; // fps
  double v34; // st7
  bool v35; // c0
  char v36; // c2
  bool v37; // c3
  double v38; // st7
  double v39; // st6
  double v40; // rt1
  __int16 v41; // fps
  double v42; // st6
  bool v43; // c0
  char v44; // c2
  bool v45; // c3
  __int16 v46; // fps
  double v47; // st6
  bool v48; // c0
  char v49; // c2
  bool v50; // c3
  __int16 v51; // fps
  double v52; // st6
  bool v53; // c0
  char v54; // c2
  bool v55; // c3
  __int16 v56; // fps
  double v57; // st7
  bool v58; // c0
  char v59; // c2
  bool v60; // c3
  int v61; // [esp+10h] [ebp-18h]
  int v62; // [esp+14h] [ebp-14h]
  int v63; // [esp+18h] [ebp-10h]
  int v64; // [esp+1Ch] [ebp-Ch]
  int v65; // [esp+20h] [ebp-8h]
  unsigned int v66; // [esp+24h] [ebp-4h]
  int v67; // [esp+2Ch] [ebp+4h]
  float v68; // [esp+30h] [ebp+8h]
  int v69; // [esp+38h] [ebp+10h]

  v8 = abs32(a4 - a3);
  v63 = a2 - a1;
  v9 = (a4 - a3) / (a2 - a1);
  v65 = v9;
  if ( a4 - a3 >= 0 )
    v10 = v9 + 1;
  else
    v10 = v9 - 1;
  v64 = v10;
  v69 = a3;
  v61 = 0;
  v11 = (float *)(a5 + 4 * a1);
  v62 = sub_69BA80(v11);
  v12 = a7;
  v14 = *(float *)(a6 + 4 * a1) + a7[278];
  v66 = v8 - abs32(v63 * v65);
  v15 = v14 < *v11;
  v16 = 0;
  v17 = v14 == *v11;
  v18 = (a3 - v62) * (a3 - v62);
  v67 = 1;
  if ( (v13 & 0x100) == 0 )
  {
    v19 = (double)a3;
    v20 = (double)v62;
    if ( v19 + a7[274] < v20 )
      return 1;
    v22 = v20;
    v24 = v19 - a7[275];
    v25 = v24 < v22;
    v26 = 0;
    v27 = v24 == v22;
    if ( (v23 & 0x4100) == 0 )
      return 1;
  }
  v28 = a1 + 1;
  if ( v28 < a2 )
  {
    v29 = (float *)(a5 + 4 * v28);
    while ( 1 )
    {
      v30 = v66 + v61;
      v61 += v66;
      if ( v61 < v63 )
      {
        v31 = v65 + v69;
      }
      else
      {
        v61 = v30 - v63;
        v31 = v64 + v69;
      }
      v69 = v31;
      v32 = sub_69BA80(v29);
      v18 += (v69 - v32) * (v69 - v32);
      v34 = *(float *)((char *)v29 + a6 - a5) + a7[278];
      ++v67;
      v35 = v34 < *v29;
      v36 = 0;
      v37 = v34 == *v29;
      if ( (v33 & 0x100) == 0 )
      {
        if ( v32 )
        {
          v38 = (double)v69;
          v39 = (double)v32;
          if ( v38 + a7[274] < v39 )
            return 1;
          v40 = v39;
          v42 = v38 - a7[275];
          v43 = v42 < v40;
          v44 = 0;
          v45 = v42 == v40;
          if ( (v41 & 0x4100) == 0 )
            return 1;
        }
      }
      ++v28;
      ++v29;
      if ( v28 >= a2 )
      {
        v12 = a7;
        break;
      }
    }
  }
  v68 = (float)v67;
  v47 = v12[274] * v12[274] / v68;
  v48 = v47 < v12[276];
  v49 = 0;
  v50 = v47 == v12[276];
  if ( (v46 & 0x4100) != 0 )
  {
    v52 = v12[275] * v12[275] / v68;
    v53 = v52 < v12[276];
    v54 = 0;
    v55 = v52 == v12[276];
    if ( (v51 & 0x4100) != 0 )
    {
      v57 = (double)(v18 / v67);
      v58 = v57 < v12[276];
      v59 = 0;
      v60 = v57 == v12[276];
      if ( (v56 & 0x4100) == 0 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_69BEE0
// entry 0069bee0  size 35  status ok
//======================================================================

int __cdecl sub_69BEE0(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = *(_DWORD *)(a1 + 4 * a3);
  if ( result < 0 )
    return *(_DWORD *)(a2 + 4 * a3);
  v4 = *(_DWORD *)(a2 + 4 * a3);
  if ( v4 >= 0 )
    return (v4 + result) >> 1;
  return result;
}


//======================================================================
// sub_69BF10
// entry 0069bf10  size 163  status ok
//======================================================================

int __cdecl sub_69BF10(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // ebp
  int result; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // edi
  int v10; // edx

  v5 = *(_DWORD *)(a2 + 1284);
  result = 0;
  if ( a3 )
  {
    if ( a4 )
    {
      result = sub_690E40(a1, 4 * v5);
      if ( v5 > 0 )
      {
        v7 = a3 - (_DWORD)a4;
        v8 = a4;
        v9 = result - (_DWORD)a4;
        do
        {
          v10 = (a5 * (*v8 & 0x7FFF) + (0x10000 - a5) * (*(_DWORD *)((char *)v8 + v7) & 0x7FFF) + 0x8000) >> 16;
          *(_DWORD *)((char *)v8 + v9) = v10;
          if ( (BYTE1(*(_DWORD *)((char *)v8 + v7)) & 0x80u) != 0 && (BYTE1(*v8) & 0x80u) != 0 )
          {
            BYTE1(v10) |= 0x80u;
            *(_DWORD *)((char *)v8 + v9) = v10;
          }
          ++v8;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return result;
}


//======================================================================
// sub_69BFC0
// entry 0069bfc0  size 1420  status ok
//======================================================================

int __cdecl sub_69BFC0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  _DWORD *v5; // eax
  int *v6; // edi
  int v7; // edx
  int v8; // ebp
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int *v12; // ebp
  int v13; // ebx
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // ebp
  int v29; // esi
  int v30; // eax
  int *v31; // edx
  int v32; // eax
  int v33; // ebp
  int v34; // esi
  int *v35; // ebx
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // eax
  bool v40; // cc
  int v41; // ebx
  int v42; // ecx
  int v43; // ebp
  int v44; // eax
  int v45; // esi
  int *v47; // [esp+Ch] [ebp-16Ch]
  int v48; // [esp+Ch] [ebp-16Ch]
  int v49; // [esp+Ch] [ebp-16Ch]
  char *v50; // [esp+10h] [ebp-168h]
  int *v51; // [esp+10h] [ebp-168h]
  _DWORD *v52; // [esp+10h] [ebp-168h]
  _DWORD *v53; // [esp+14h] [ebp-164h]
  int v54; // [esp+14h] [ebp-164h]
  int *v55; // [esp+18h] [ebp-160h]
  int *v56; // [esp+18h] [ebp-160h]
  int v57; // [esp+1Ch] [ebp-15Ch]
  int v58; // [esp+1Ch] [ebp-15Ch]
  int v59; // [esp+1Ch] [ebp-15Ch]
  int v60; // [esp+20h] [ebp-158h]
  int v61; // [esp+20h] [ebp-158h]
  int v62; // [esp+24h] [ebp-154h]
  int v63; // [esp+28h] [ebp-150h]
  int v64; // [esp+2Ch] [ebp-14Ch]
  int v65; // [esp+30h] [ebp-148h]
  _DWORD v66[16]; // [esp+34h] [ebp-144h] BYREF
  int v67; // [esp+74h] [ebp-104h] BYREF
  int v68; // [esp+78h] [ebp-100h]

  v4 = a1;
  v5 = a2;
  v6 = (int *)a2[324];
  v7 = a2[321];
  v55 = v6;
  v60 = v7;
  v65 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 64) + 4) + 28);
  v63 = *(_DWORD *)(v65 + 2848);
  if ( a3 )
  {
    v8 = 0;
    if ( v7 > 0 )
    {
      do
      {
        v9 = a3[v8];
        v10 = v9 & 0x7FFF;
        switch ( v6[208] )
        {
          case 1:
            v10 >>= 2;
            break;
          case 2:
            v10 >>= 3;
            break;
          case 3:
            v10 /= 12;
            v7 = v60;
            break;
          case 4:
            v10 >>= 4;
            break;
          default:
            break;
        }
        a3[v8++] = v10 | v9 & 0x8000;
      }
      while ( v8 < v7 );
      v4 = a1;
      v5 = a2;
    }
    v67 = *a3;
    v68 = a3[1];
    if ( v7 > 2 )
    {
      v11 = v5 + 195;
      v12 = a3 + 2;
      v47 = v6 + 211;
      v53 = v11;
      v50 = (char *)((char *)&v67 - (char *)a3);
      v57 = v7 - 2;
      while ( 1 )
      {
        v13 = v11[63];
        v14 = *v11;
        v15 = a3[v13];
        v16 = sub_69B830(v55[v13 + 209], v55[*v11 + 209], v15, a3[*v11], *v47);
        v17 = *v12;
        if ( (BYTE1(*v12) & 0x80u) != 0 || v16 == v17 )
        {
          BYTE1(v16) |= 0x80u;
          *v12 = v16;
          *(int *)((char *)v12 + (_DWORD)v50) = 0;
        }
        else
        {
          v18 = a2[323] - v16;
          if ( v18 >= v16 )
            v18 = v16;
          v19 = v17 - v16;
          if ( v19 >= 0 )
            v20 = v19 < v18 ? 2 * v19 : v18 + v19;
          else
            v20 = v19 >= -v18 ? -1 - 2 * v19 : v18 - v19 - 1;
          *(int *)((char *)v12 + (_DWORD)v50) = v20;
          a3[v13] = v15 & 0x7FFF;
          a3[v14] &= 0x7FFFu;
        }
        ++v12;
        v21 = v57 == 1;
        ++v53;
        ++v47;
        --v57;
        if ( v21 )
          break;
        v11 = v53;
      }
      v6 = v55;
      v4 = a1;
    }
    v64 = v4 + 4;
    sub_69D210(v4 + 4, 1, 1);
    ++a2[327];
    v22 = 2 * sub_699AA0(a2[323] - 1) + a2[326];
    v23 = a2[323] - 1;
    a2[326] = v22;
    v24 = sub_699AA0(v23);
    sub_69D210(v4 + 4, v67, v24);
    v25 = sub_699AA0(a2[323] - 1);
    sub_69D210(v4 + 4, v68, v25);
    v61 = 0;
    v48 = 2;
    if ( *v6 > 0 )
    {
      v51 = v6 + 1;
      do
      {
        v26 = *v51;
        v27 = 0;
        memset(v66, 0, 32);
        v28 = v6[v26 + 48];
        v54 = v6[v26 + 32];
        v29 = 1 << v28;
        v58 = 0;
        v62 = 0;
        if ( v28 )
        {
          v30 = 0;
          if ( v29 > 0 )
          {
            v31 = &v6[8 * v26 + 80];
            do
            {
              if ( *v31 >= 0 )
                v66[v30 + 8] = *(_DWORD *)(*(_DWORD *)(v65 + 4 * *v31 + 1824) + 4);
              else
                v66[v30 + 8] = 1;
              ++v30;
              ++v31;
            }
            while ( v30 < v29 );
            v27 = 0;
          }
          v32 = 0;
          if ( v54 > 0 )
          {
            v56 = &v67 + v48;
            while ( 1 )
            {
              if ( v29 > 0 )
              {
                while ( *v56 >= v66[v27 + 8] )
                {
                  if ( ++v27 >= v29 )
                    goto LABEL_46;
                }
                v66[v32] = v27;
              }
LABEL_46:
              v58 |= v66[v32] << v62;
              v62 += v28;
              ++v32;
              ++v56;
              if ( v32 >= v54 )
                break;
              v27 = 0;
            }
          }
          v33 = v63;
          a2[325] += sub_6951E0(v63 + 44 * v6[v26 + 64], v58, v64);
        }
        else
        {
          v33 = v63;
        }
        v34 = 0;
        if ( v54 > 0 )
        {
          v59 = 8 * v26 + 80;
          v35 = &v67 + v48;
          do
          {
            v36 = v6[v59 + v66[v34]];
            if ( v36 >= 0 )
            {
              v37 = 11 * v36;
              v38 = *(_DWORD *)(v33 + 4 * v37 + 4);
              v39 = v33 + 4 * v37;
              if ( *v35 < v38 )
                a2[326] += sub_6951E0(v39, *v35, v64);
            }
            ++v34;
            ++v35;
          }
          while ( v34 < v54 );
        }
        v40 = v61 + 1 < *v6;
        v48 += v54;
        ++v61;
        ++v51;
      }
      while ( v40 );
    }
    v41 = 0;
    v42 = *a3 * v6[208];
    v43 = 0;
    v49 = 1;
    if ( (int)a2[321] > 1 )
    {
      v52 = a2 + 66;
      do
      {
        v44 = a3[*v52] & 0x7FFF;
        if ( v44 == a3[*v52] )
        {
          v41 = v6[*v52 + 209];
          v45 = v44 * v6[208];
          sub_69C560(v43, v41, v42, v45, a4);
          v43 = v41;
          v42 = v45;
        }
        ++v52;
        ++v49;
      }
      while ( v49 < a2[321] );
    }
    for ( ; v41 < *(_DWORD *)(a1 + 36) / 2; a4[v41 - 1] = v42 )
      ++v41;
    ++dword_1631BDC;
    return 1;
  }
  else
  {
    sub_69D210(a1 + 4, 0, 1);
    memset(a4, 0, 4 * (*(_DWORD *)(a1 + 36) / 2));
    ++dword_1631BDC;
    return 0;
  }
}


//======================================================================
// sub_69C560
// entry 0069c560  size 139  status ok
//======================================================================

int __cdecl sub_69C560(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // esi
  unsigned int v11; // edi
  int result; // eax
  int v13; // ebp
  int v14; // ebp
  int v15; // [esp+14h] [ebp+4h]
  int v16; // [esp+20h] [ebp+10h]

  v6 = a2 - a1;
  v7 = abs32(a4 - a3);
  v8 = (a4 - a3) / (a2 - a1);
  v15 = v8;
  v9 = v8 - 1;
  if ( a4 - a3 >= 0 )
    v9 = v8 + 1;
  v10 = a3;
  v16 = 0;
  v11 = v7 - abs32(v6 * v8);
  result = a1 + 1;
  for ( *(_DWORD *)(a5 + 4 * a1) = a3; result < a2; ++result )
  {
    v13 = v11 + v16;
    v16 += v11;
    if ( v16 < v6 )
    {
      v14 = v15;
    }
    else
    {
      v16 = v13 - v6;
      v14 = v9;
    }
    v10 += v14;
    *(_DWORD *)(a5 + 4 * result) = v10;
  }
  return result;
}


//======================================================================
// sub_69C5F0
// entry 0069c5f0  size 721  status ok
//======================================================================

_DWORD *__cdecl sub_69C5F0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // ebp
  int *v4; // edi
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  int v12; // ebp
  int v13; // ebp
  int *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  bool v18; // cc
  _DWORD *v19; // ebp
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v24; // [esp+10h] [ebp-24h]
  int *v25; // [esp+14h] [ebp-20h]
  int *v26; // [esp+14h] [ebp-20h]
  int v27; // [esp+18h] [ebp-1Ch]
  int v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  char v30; // [esp+24h] [ebp-10h]
  int v31; // [esp+28h] [ebp-Ch]
  _DWORD *v32; // [esp+2Ch] [ebp-8h]
  int v33; // [esp+2Ch] [ebp-8h]
  int v34; // [esp+30h] [ebp-4h]
  int v35; // [esp+38h] [ebp+4h]
  int v36; // [esp+38h] [ebp+4h]
  int v37; // [esp+3Ch] [ebp+8h]

  v2 = a2;
  v3 = a1 + 1;
  v4 = (int *)a2[324];
  v27 = (int)(a1 + 1);
  v28 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 28) + 2848);
  if ( sub_69D470(a1 + 1, 1) != 1 )
    return 0;
  v5 = (_DWORD *)sub_690E40(a1, 4 * a2[321]);
  v32 = v5;
  v6 = sub_699AA0(a2[323] - 1);
  *v5 = sub_69D470(v3, v6);
  v7 = sub_699AA0(a2[323] - 1);
  v5[1] = sub_69D470(v3, v7);
  v35 = 0;
  v24 = 2;
  if ( *v4 > 0 )
  {
    v25 = v4 + 1;
    do
    {
      v8 = 0;
      v9 = *v25;
      v10 = v4[*v25 + 48];
      v11 = v4[*v25 + 32];
      v12 = 1 << v10;
      v29 = v11;
      v30 = v10;
      if ( v10 )
      {
        v8 = sub_695220((_DWORD *)(v28 + 44 * v4[v9 + 64]), v27);
        if ( v8 == -1 )
          return 0;
        v11 = v29;
        LOBYTE(v10) = v30;
      }
      v31 = 0;
      if ( v11 > 0 )
      {
        v34 = v12 - 1;
        v13 = 8 * v9 + 80;
        v14 = &v32[v24];
        do
        {
          v15 = v13 + (v8 & v34);
          v8 >>= v10;
          v16 = v4[v15];
          if ( v16 < 0 )
          {
            *v14 = 0;
          }
          else
          {
            v17 = sub_695220((_DWORD *)(v28 + 44 * v16), v27);
            *v14 = v17;
            if ( v17 == -1 )
              return 0;
            v11 = v29;
            LOBYTE(v10) = v30;
          }
          ++v14;
          ++v31;
        }
        while ( v31 < v11 );
      }
      v18 = v35 + 1 < *v4;
      v24 += v11;
      ++v35;
      ++v25;
    }
    while ( v18 );
    v5 = v32;
    v2 = a2;
  }
  v36 = 2;
  if ( (int)v2[321] > 2 )
  {
    v19 = v2 + 195;
    v26 = v4 + 211;
    do
    {
      v20 = sub_69B830(v4[v19[63] + 209], v4[*v19 + 209], v5[v19[63]], v5[*v19], *v26);
      v21 = v2[323] - v20;
      v33 = v21;
      if ( v21 >= v20 )
        v33 = v20;
      v37 = v5[v36];
      if ( v37 )
      {
        if ( v37 < 2 * v33 )
        {
          if ( (v37 & 1) != 0 )
            v22 = -((v37 + 1) >> 1);
          else
            v22 = v37 >> 1;
        }
        else if ( v21 <= v20 )
        {
          v22 = v21 - v37 - 1;
        }
        else
        {
          v22 = v37 - v20;
        }
        v5[v36] = v20 + v22;
        v5[v19[63]] &= 0x7FFFu;
        v5[*v19] &= 0x7FFFu;
      }
      else
      {
        BYTE1(v20) |= 0x80u;
        v5[v36] = v20;
      }
      ++v26;
      ++v19;
      ++v36;
    }
    while ( v36 < v2[321] );
  }
  return v5;
}


//======================================================================
// sub_69C8D0
// entry 0069c8d0  size 258  status ok
//======================================================================

int __cdecl sub_69C8D0(int a1, _DWORD *a2, _DWORD *a3, float *a4)
{
  int v4; // ebx
  __int64 v5; // rax
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // ebp
  int v11; // esi
  int v12; // esi
  int i; // eax
  int v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]
  _DWORD *v17; // [esp+18h] [ebp+4h]

  v4 = a2[324];
  v5 = *(int *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 64) + 4) + 28) + 4 * *(_DWORD *)(a1 + 28));
  HIDWORD(v5) = v5 - HIDWORD(v5);
  v6 = a3;
  v7 = SHIDWORD(v5) >> 1;
  v16 = v7;
  if ( a3 )
  {
    v8 = *a3 * *(_DWORD *)(v4 + 832);
    v9 = 0;
    v10 = 0;
    v15 = 1;
    if ( (int)a2[321] > 1 )
    {
      v17 = a2 + 66;
      while ( 1 )
      {
        v11 = v6[*v17];
        if ( (v11 & 0x7FFF) == v11 )
        {
          v9 = *(_DWORD *)(v4 + 4 * *v17 + 836);
          v12 = (v11 & 0x7FFF) * *(_DWORD *)(v4 + 832);
          sub_69C9E0(v10, v9, v8, v12, a4);
          v10 = v9;
          v8 = v12;
        }
        ++v17;
        if ( ++v15 >= a2[321] )
          break;
        v6 = a3;
      }
      v7 = v16;
    }
    for ( i = v9; i < v7; a4[i - 1] = flt_78F930[v8] * a4[i - 1] )
      ++i;
    return 1;
  }
  else
  {
    memset(a4, 0, 4 * v7);
    return 0;
  }
}


//======================================================================
// sub_69C9E0
// entry 0069c9e0  size 186  status ok
//======================================================================

int __cdecl sub_69C9E0(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  unsigned int v7; // ebx
  int v8; // ebp
  unsigned int v9; // ebx
  int result; // eax
  float *v11; // edx
  int v12; // ebp
  double v13; // st7
  int v14; // [esp+14h] [ebp+4h]
  int v15; // [esp+1Ch] [ebp+Ch]
  int v16; // [esp+20h] [ebp+10h]

  v6 = a2 - a1;
  v7 = abs32(a4 - a3);
  v8 = (a4 - a3) / (a2 - a1);
  if ( a4 - a3 >= 0 )
    v14 = v8 + 1;
  else
    v14 = v8 - 1;
  v16 = 0;
  v9 = v7 - abs32(v6 * v8);
  result = a1 + 1;
  v11 = (float *)(4 * a3 + 7928112);
  *(float *)(a5 + 4 * a1) = flt_78F930[a3] * *(float *)(a5 + 4 * a1);
  if ( a1 + 1 < a2 )
  {
    v15 = 4 * v8;
    do
    {
      v12 = v9 + v16;
      v16 += v9;
      if ( v16 < v6 )
      {
        v11 = (float *)((char *)v11 + v15);
      }
      else
      {
        v11 += v14;
        v16 = v12 - v6;
      }
      v13 = *v11 * *(float *)(a5 + 4 * result++);
      *(float *)(a5 + 4 * result - 4) = v13;
    }
    while ( result < a2 );
  }
  return result;
}


//======================================================================
// sub_69CAA0
// entry 0069caa0  size 31  status ok
//======================================================================

void __cdecl sub_69CAA0(void *a1)
{
  if ( a1 )
  {
    memset(a1, 0, 0x60u);
    free(a1);
  }
}


//======================================================================
// sub_69CB20
// entry 0069cb20  size 191  status ok
//======================================================================

int *__cdecl sub_69CB20(int a1, int a2)
{
  int *v2; // esi
  int v3; // eax
  bool v4; // cc
  int v5; // ebp
  int *i; // ebx
  int v7; // eax
  int v9; // [esp+14h] [ebp+4h]

  v9 = *(_DWORD *)(a1 + 28);
  v2 = (int *)malloc(0x60u);
  *v2 = sub_69D470(a2, 8);
  v2[1] = sub_69D470(a2, 16);
  v2[2] = sub_69D470(a2, 16);
  v2[3] = sub_69D470(a2, 6);
  v2[4] = sub_69D470(a2, 8);
  v3 = sub_69D470(a2, 4) + 1;
  v4 = *v2 < 1;
  v2[5] = v3;
  if ( !v4 && v2[1] >= 1 && v2[2] >= 1 && v3 >= 1 )
  {
    v5 = 0;
    for ( i = v2 + 6; ; ++i )
    {
      v7 = sub_69D470(a2, 8);
      *i = v7;
      if ( v7 < 0 || v7 >= *(_DWORD *)(v9 + 24) )
        break;
      if ( ++v5 >= v2[5] )
        return v2;
    }
  }
  sub_69CAA0(v2);
  return 0;
}


//======================================================================
// sub_69CC10
// entry 0069cc10  size 301  status ok
//======================================================================

int __cdecl sub_69CC10(_DWORD *a1, int a2)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // eax
  int *v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  double v14; // st7
  float v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+18h] [ebp+4h]
  int v18; // [esp+1Ch] [ebp+8h]
  float v19; // [esp+1Ch] [ebp+8h]

  v4 = *(_DWORD **)(a2 + 20);
  v5 = a1 + 1;
  v17 = (int)v5;
  v18 = sub_69D470(v5, v4[3]);
  if ( v18 <= 0 )
    return 0;
  v16 = (double)v18 / (double)((1 << v4[3]) - 1) * (double)(int)v4[4];
  v6 = sub_699AA0(v4[5]);
  v7 = sub_69D470(v5, v6);
  if ( v7 == -1 || v7 >= v4[5] )
    return 0;
  v19 = 0.0;
  v8 = (int *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[16] + 4) + 28) + 2848) + 44 * v4[v7 + 6]);
  v9 = sub_690E40(a1, 4 * (*(_DWORD *)(a2 + 4) + *v8) + 4);
  v10 = 0;
  if ( *(int *)(a2 + 4) > 0 )
  {
    while ( sub_695A00(v8, v9 + 4 * v10, v17, *v8) != -1 )
    {
      v10 += *v8;
      if ( v10 >= *(_DWORD *)(a2 + 4) )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v11 = 0;
  if ( *(int *)(a2 + 4) > 0 )
  {
    v12 = *v8;
    do
    {
      v13 = 0;
      if ( v12 > 0 )
      {
        do
        {
          v14 = v19 + *(float *)(v9 + 4 * v11);
          ++v13;
          ++v11;
          *(float *)(v9 + 4 * v11 - 4) = v14;
          v12 = *v8;
        }
        while ( v13 < *v8 );
      }
      v19 = *(float *)(v9 + 4 * v11 - 4);
    }
    while ( v11 < *(_DWORD *)(a2 + 4) );
  }
  *(float *)(v9 + 4 * *(_DWORD *)(a2 + 4)) = v16;
  return v9;
}


//======================================================================
// sub_69CD40
// entry 0069cd40  size 130  status ok
//======================================================================

int __cdecl sub_69CD40(int a1, int *a2, int a3, void *a4)
{
  int v4; // edi
  float v6; // [esp+4h] [ebp-10h]

  v4 = a2[5];
  sub_69CDD0(a1, v4, a2);
  if ( a3 )
  {
    v6 = (float)*(int *)(v4 + 16);
    sub_69CF30(
      (int)a4,
      *(_DWORD *)(a2[2] + 4 * *(_DWORD *)(a1 + 28)),
      a2[*(_DWORD *)(a1 + 28) + 3],
      *a2,
      a3,
      a2[1],
      *(float *)(a3 + 4 * a2[1]),
      v6);
    return 1;
  }
  else
  {
    memset(a4, 0, 4 * a2[*(_DWORD *)(a1 + 28) + 3]);
    return 0;
  }
}


//======================================================================
// sub_69CDD0
// entry 0069cdd0  size 348  status ok
//======================================================================

int __cdecl sub_69CDD0(int a1, int a2, int *a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // esi
  double v6; // st7
  int v7; // ebx
  double v8; // st6
  __int64 v9; // rax
  int i; // [esp+18h] [ebp-10h]
  int v11; // [esp+1Ch] [ebp-Ch]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]

  result = a1;
  v4 = *(_DWORD *)(a1 + 28);
  v11 = v4;
  if ( !*(_DWORD *)(a3[2] + 4 * v4) )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 64) + 4) + 28) + 4 * v4) / 2;
    v6 = (double)*(int *)(a2 + 4) * 0.5;
    v13 = (double)*a3
        / (atan2(v6 * v6 * 0.0000000185, 1.0) * 2.240000009536743
         + atan2(v6 * 0.00073999999, 1.0) * 13.10000038146973
         + v6 * 0.000099999997);
    *(_DWORD *)(a3[2] + 4 * v4) = malloc(4 * v5 + 4);
    v7 = 0;
    for ( i = 0; v7 < v5; *(_DWORD *)(*(_DWORD *)(a3[2] + 4 * v11) + 4 * v7 - 4) = v9 )
    {
      v12 = (float)v5;
      v8 = (double)*(int *)(a2 + 4) * 0.5 / v12 * (double)i;
      v9 = (__int64)floor(
                      (atan2(v8 * v8 * 0.0000000185, 1.0) * 2.240000009536743
                     + atan2(v8 * 0.00073999999, 1.0) * 13.10000038146973
                     + v8 * 0.000099999997)
                    * v13);
      if ( (int)v9 >= *a3 )
        LODWORD(v9) = *a3 - 1;
      i = ++v7;
    }
    *(_DWORD *)(*(_DWORD *)(a3[2] + 4 * v11) + 4 * v7) = -1;
    a3[v11 + 3] = v5;
    return v11;
  }
  return result;
}


//======================================================================
// sub_69CF30
// entry 0069cf30  size 379  status ok
//======================================================================

float *__cdecl sub_69CF30(int a1, int a2, float *a3, int a4, float *a5, int a6, float a7, float a8)
{
  int v9; // esi
  double v10; // st7
  float *result; // eax
  float *v12; // esi
  int v13; // edi
  double v14; // st7
  double v15; // st7
  float *v16; // eax
  int v17; // ecx
  double v18; // st6
  double v19; // st5
  double v20; // st6
  double v21; // st7
  double v22; // st6
  double v23; // st7
  double v24; // st7
  double v25; // st6
  float v26; // [esp+8h] [ebp-28h]
  float v27; // [esp+8h] [ebp-28h]
  float v28; // [esp+1Ch] [ebp-14h]
  float i; // [esp+20h] [ebp-10h]
  int v30; // [esp+24h] [ebp-Ch]
  int v31; // [esp+28h] [ebp-8h]
  int Y; // [esp+2Ch] [ebp-4h] BYREF
  int v33; // [esp+40h] [ebp+10h]
  float v34; // [esp+40h] [ebp+10h]
  int v35; // [esp+48h] [ebp+18h]

  v9 = 0;
  v10 = 3.1415927 / (double)a4;
  for ( i = v10; v9 < a6; ++v9 )
  {
    sub_69D0B0(a5[v9]);
    a5[v9] = v10;
  }
  result = a3;
  v12 = 0;
  if ( (int)a3 > 0 )
  {
    v30 = a6 >> 1;
    v31 = a6 & 1;
    do
    {
      v13 = *(_DWORD *)(a2 + 4 * (_DWORD)v12);
      v14 = (double)v13 * i;
      v26 = v14;
      sub_69D0B0(v26);
      *(float *)&v33 = v14;
      v15 = 0.70710677;
      v16 = a5;
      v17 = v30;
      v18 = 0.70710677;
      do
      {
        v19 = *v16 - *(float *)&v33;
        v16 += 2;
        --v17;
        v15 = v15 * v19;
        v18 = v18 * (*(v16 - 1) - *(float *)&v33);
      }
      while ( v17 );
      *(float *)&v35 = v18;
      if ( v31 )
      {
        v20 = v15 * (*v16 - *(float *)&v33);
        v21 = v20 * v20;
        v22 = 1.0 - *(float *)&v33 * *(float *)&v33;
      }
      else
      {
        v21 = v15 * ((*(float *)&v33 + 1.0) * v15);
        v22 = 1.0 - *(float *)&v33;
      }
      v28 = frexp(v21 + v22 * *(float *)&v35 * *(float *)&v35, &Y);
      v23 = sub_69D160(a6 + Y);
      v34 = v23;
      sub_69D100(v28);
      v24 = v23 * v34 * a7 - a8;
      v27 = v24;
      sub_69D170(v27);
      result = (float *)(a1 + 4 * (_DWORD)v12);
      do
      {
        v25 = v24 * *result++;
        v12 = (float *)((char *)v12 + 1);
        *(result - 1) = v25;
      }
      while ( *(_DWORD *)((char *)result + a2 - a1) == v13 );
    }
    while ( (int)v12 < (int)a3 );
  }
  return result;
}


//======================================================================
// sub_69D0B0
// entry 0069d0b0  size 76  status ok
//======================================================================

double __cdecl sub_69D0B0(float a1)
{
  double v2; // [esp+0h] [ebp-10h]

  v2 = a1 * 40.74366592;
  return (flt_78FD6C[(int)(v2 - 0.5)] - flt_78FD68[(int)(v2 - 0.5)]) * (v2 - (double)(int)(v2 - 0.5))
       + flt_78FD68[(int)(v2 - 0.5)];
}


//======================================================================
// sub_69D100
// entry 0069d100  size 82  status ok
//======================================================================

double __cdecl sub_69D100(float a1)
{
  double v2; // [esp+0h] [ebp-10h]

  v2 = a1 * 64.0 - 32.0;
  return (flt_78FF74[(int)(v2 - 0.5)] - flt_78FF70[(int)(v2 - 0.5)]) * (v2 - (double)(int)(v2 - 0.5))
       + flt_78FF70[(int)(v2 - 0.5)];
}


//======================================================================
// sub_69D160
// entry 0069d160  size 12  status ok
//======================================================================

double __cdecl sub_69D160(int a1)
{
  return flt_790078[a1];
}


//======================================================================
// sub_69D170
// entry 0069d170  size 92  status ok
//======================================================================

double __cdecl sub_69D170(float a1)
{
  int v1; // eax
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1 * -8.0 - 0.5;
  v1 = (int)v3;
  if ( (int)v3 < 0 )
    return 1.0;
  if ( v1 < 1120 )
    return flt_790190[(int)v3 & 0x1F] * flt_790100[v1 >> 5];
  return 0.0;
}


//======================================================================
// sub_69D1D0
// entry 0069d1d0  size 54  status ok
//======================================================================

_BYTE *__cdecl sub_69D1D0(_DWORD *a1)
{
  _BYTE *result; // eax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  result = malloc(0x100u);
  a1[2] = result;
  a1[3] = result;
  *result = 0;
  a1[4] = 256;
  return result;
}


//======================================================================
// sub_69D210
// entry 0069d210  size 244  status ok
//======================================================================

int __cdecl sub_69D210(int a1, int a2, int a3)
{
  int v3; // eax
  char *v4; // eax
  int v5; // edi
  char *v6; // ecx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v13; // edx

  v3 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)a1 + 4 >= v3 )
  {
    v4 = (char *)realloc(*(void **)(a1 + 8), v3 + 256);
    v5 = *(_DWORD *)(a1 + 16) + 256;
    v6 = &v4[*(_DWORD *)a1];
    *(_DWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 16) = v5;
    *(_DWORD *)(a1 + 12) = v6;
  }
  v7 = *(_DWORD *)(a1 + 4);
  v8 = dword_790210[a3] & a2;
  v9 = v7 + a3;
  **(_BYTE **)(a1 + 12) |= (dword_790210[a3] & (unsigned __int8)a2) << v7;
  if ( v7 + a3 >= 8 )
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + 1) = v8 >> (8 - *(_DWORD *)(a1 + 4));
    if ( v9 >= 16 )
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 12) + 2) = v8 >> (16 - *(_DWORD *)(a1 + 4));
      if ( v9 >= 24 )
      {
        *(_BYTE *)(*(_DWORD *)(a1 + 12) + 3) = v8 >> (24 - *(_DWORD *)(a1 + 4));
        if ( v9 >= 32 )
        {
          v10 = *(_DWORD *)(a1 + 4);
          if ( v10 )
            *(_BYTE *)(*(_DWORD *)(a1 + 12) + 4) = v8 >> (32 - v10);
          else
            *(_BYTE *)(*(_DWORD *)(a1 + 12) + 4) = 0;
        }
      }
    }
  }
  v11 = *(_DWORD *)(a1 + 12);
  v13 = v9 / 8 + *(_DWORD *)a1;
  *(_DWORD *)(a1 + 4) = v9 & 7;
  *(_DWORD *)a1 = v13;
  *(_DWORD *)(a1 + 12) = v9 / 8 + v11;
  return v9 / 8;
}


//======================================================================
// sub_69D310
// entry 0069d310  size 30  status ok
//======================================================================

int __cdecl sub_69D310(int a1)
{
  int result; // eax

  result = 8 - *(_DWORD *)(a1 + 4);
  if ( result < 8 )
    return sub_69D210(a1, 0, 8 - *(_DWORD *)(a1 + 4));
  return result;
}


//======================================================================
// sub_69D330
// entry 0069d330  size 35  status ok
//======================================================================

void __cdecl sub_69D330(int a1)
{
  free(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
}


//======================================================================
// sub_69D360
// entry 0069d360  size 40  status ok
//======================================================================

_DWORD *__cdecl sub_69D360(_DWORD *a1, int a2, int a3)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[3] = a2;
  a1[2] = a2;
  a1[4] = a3;
  return a1;
}


//======================================================================
// sub_69D390
// entry 0069d390  size 167  status ok
//======================================================================

int __cdecl sub_69D390(_DWORD *a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // edx
  unsigned __int8 *v6; // esi
  int v7; // eax

  v2 = a1[4];
  v3 = a1[1];
  v4 = v3 + a2;
  if ( *a1 + 4 >= v2 && v4 + 8 * *a1 > 8 * v2 )
    return -1;
  v6 = (unsigned __int8 *)a1[3];
  v7 = *v6 >> *((_BYTE *)a1 + 4);
  if ( v4 > 8 )
  {
    v7 |= v6[1] << (8 - v3);
    if ( v4 > 16 )
    {
      v7 |= v6[2] << (16 - v3);
      if ( v4 > 24 )
      {
        v7 |= v6[3] << (24 - v3);
        if ( v4 > 32 )
        {
          if ( v3 )
            v7 |= v6[4] << (32 - v3);
        }
      }
    }
  }
  return dword_790210[a2] & v7;
}


//======================================================================
// sub_69D440
// entry 0069d440  size 45  status ok
//======================================================================

int __cdecl sub_69D440(_DWORD *a1, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = a1[1] + a2;
  a1[1] = v2 & 7;
  result = v2 / 8;
  a1[3] += result;
  *a1 += result;
  return result;
}


//======================================================================
// sub_69D470
// entry 0069d470  size 205  status ok
//======================================================================

int __cdecl sub_69D470(_DWORD *a1, int a2)
{
  int v2; // ebp
  int v3; // ecx
  int v4; // esi
  int v5; // edi
  unsigned __int8 *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v10; // [esp+18h] [ebp+8h]

  v2 = a1[1];
  v3 = a1[4];
  v4 = v2 + a2;
  v10 = dword_790210[a2];
  if ( *a1 + 4 < v3 || (v5 = -1, v4 + 8 * *a1 <= 8 * v3) )
  {
    v6 = (unsigned __int8 *)a1[3];
    v7 = *v6 >> *((_BYTE *)a1 + 4);
    if ( v4 > 8 )
    {
      v7 |= v6[1] << (8 - v2);
      if ( v4 > 16 )
      {
        v7 |= v6[2] << (16 - v2);
        if ( v4 > 24 )
        {
          v7 |= v6[3] << (24 - v2);
          if ( v4 > 32 )
          {
            if ( v2 )
              v7 |= v6[4] << (32 - v2);
          }
        }
      }
    }
    v5 = v10 & v7;
  }
  v8 = a1[3];
  a1[1] = v4 & 7;
  a1[3] = v4 / 8 + v8;
  *a1 += v4 / 8;
  return v5;
}


//======================================================================
// sub_69D540
// entry 0069d540  size 24  status ok
//======================================================================

int __cdecl sub_69D540(_DWORD *a1)
{
  return *a1 + (a1[1] + 7) / 8;
}


//======================================================================
// ClosePrinter
// entry 0069d560  size 6  status ok
//======================================================================

// attributes: thunk
BOOL __stdcall ClosePrinter(HANDLE hPrinter)
{
  return __imp_ClosePrinter(hPrinter);
}


//======================================================================
// DocumentPropertiesA
// entry 0069d566  size 6  status ok
//======================================================================

// attributes: thunk
LONG __stdcall DocumentPropertiesA(
        HWND hWnd,
        HANDLE hPrinter,
        LPSTR pDeviceName,
        PDEVMODEA pDevModeOutput,
        PDEVMODEA pDevModeInput,
        DWORD fMode)
{
  return __imp_DocumentPropertiesA(hWnd, hPrinter, pDeviceName, pDevModeOutput, pDevModeInput, fMode);
}


//======================================================================
// OpenPrinterA
// entry 0069d56c  size 6  status ok
//======================================================================

// attributes: thunk
BOOL __stdcall OpenPrinterA(LPSTR pPrinterName, LPHANDLE phPrinter, LPPRINTER_DEFAULTSA pDefault)
{
  return __imp_OpenPrinterA(pPrinterName, phPrinter, pDefault);
}


//======================================================================
// ldexp
// entry 0069d572  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl ldexp(double X, int Y)
{
  return __imp_ldexp(X, Y);
}


//======================================================================
// _CIpow
// entry 0069d578  size 6  status ok
//======================================================================

// attributes: thunk
double __usercall CIpow@<st0>(double x@<st0>, double y@<st1>)
{
  return _CIpow(x, y);
}


//======================================================================
// frexp
// entry 0069d57e  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl frexp(double X, int *Y)
{
  return __imp_frexp(X, Y);
}


//======================================================================
// sub_6AE340
// entry 006ae340  size 1207  status ok
//======================================================================

int sub_6AE340()
{
  dword_790370 = (int)sub_437CD0;
  dword_790374 = 0;
  dword_790378 = 0;
  dword_79037C = 0;
  dword_790380 = (int)sub_4311D0;
  dword_790384 = 0;
  dword_790388 = 0;
  dword_79038C = 0;
  dword_790390 = (int)sub_4380D0;
  dword_790394 = 0;
  dword_790398 = 0;
  dword_79039C = 0;
  dword_7903A0 = (int)sub_4312C0;
  dword_7903A4 = 0;
  dword_7903A8 = 0;
  dword_7903AC = 0;
  dword_7903B0 = (int)sub_437ED0;
  dword_7903B4 = 0;
  dword_7903B8 = 0;
  dword_7903BC = 0;
  dword_7903C0 = (int)sub_4311D0;
  dword_7903C4 = 0;
  dword_7903C8 = 0;
  dword_7903CC = 0;
  dword_7903D0 = (int)sub_438180;
  dword_7903D4 = 0;
  dword_7903D8 = 0;
  dword_7903DC = 0;
  dword_7903E0 = (int)sub_4312C0;
  dword_7903E4 = 0;
  dword_7903E8 = 0;
  dword_7903EC = 0;
  dword_7903F0 = (int)sub_437ED0;
  dword_7903F4 = 0;
  dword_7903F8 = 0;
  dword_7903FC = 0;
  dword_790400 = (int)sub_431270;
  dword_790404 = 0;
  dword_790408 = 0;
  dword_79040C = 0;
  dword_790410 = (int)sub_437CD0;
  dword_790414 = 0;
  dword_790418 = 0;
  dword_79041C = 0;
  dword_790420 = (int)sub_431220;
  dword_790424 = 0;
  dword_790428 = 0;
  dword_79042C = 0;
  dword_790430 = (int)sub_438230;
  dword_790434 = 0;
  dword_790438 = 0;
  dword_79043C = 0;
  dword_790440 = (int)sub_431180;
  dword_790444 = 0;
  dword_790448 = 0;
  dword_79044C = 0;
  dword_790450 = (int)sub_438330;
  dword_790454 = 0;
  dword_790458 = 0;
  dword_79045C = 0;
  dword_790460 = (int)sub_431310;
  dword_790464 = 0;
  dword_790468 = 0;
  dword_79046C = 0;
  return 0;
}


//======================================================================
// sub_6AE800
// entry 006ae800  size 3114  status ok
//======================================================================

int sub_6AE800()
{
  dword_790470 = (int)sub_437C30;
  dword_790474 = 0;
  dword_790478 = 0;
  dword_79047C = 0;
  dword_790480 = (int)sub_4311D0;
  dword_790484 = 0;
  dword_790488 = 0;
  dword_79048C = 0;
  dword_790490 = (int)sub_438280;
  dword_790494 = 0;
  dword_790498 = 0;
  dword_79049C = 0;
  dword_7904A0 = (int)sub_4312C0;
  dword_7904A4 = 0;
  dword_7904A8 = 0;
  dword_7904AC = 0;
  dword_7904B0 = (int)sub_437970;
  dword_7904B4 = 0;
  dword_7904B8 = 0;
  dword_7904BC = 0;
  dword_7904C0 = (int)sub_4314A0;
  dword_7904C4 = 0;
  dword_7904C8 = 0;
  dword_7904CC = 0;
  dword_7904D0 = (int)sub_4379B0;
  dword_7904D4 = 0;
  dword_7904D8 = 0;
  dword_7904DC = 0;
  dword_7904E0 = (int)sub_431360;
  dword_7904E4 = 0;
  dword_7904E8 = 0;
  dword_7904EC = 0;
  dword_7904F0 = (int)sub_437B50;
  dword_7904F4 = 0;
  dword_7904F8 = 0;
  dword_7904FC = 0;
  dword_790500 = (int)sub_4315E0;
  dword_790504 = 0;
  dword_790508 = 0;
  dword_79050C = 0;
  dword_790510 = (int)sub_4319D0;
  dword_790514 = 0;
  dword_790518 = 0;
  dword_79051C = 0;
  dword_790520 = (int)sub_431630;
  dword_790524 = 0;
  dword_790528 = 0;
  dword_79052C = 0;
  dword_790530 = (int)sub_431A30;
  dword_790534 = 0;
  dword_790538 = 0;
  dword_79053C = 0;
  dword_790540 = (int)sub_4316D0;
  dword_790544 = 0;
  dword_790548 = 0;
  dword_79054C = 0;
  dword_790550 = (int)sub_431A90;
  dword_790554 = 0;
  dword_790558 = 0;
  dword_79055C = 0;
  dword_790560 = (int)sub_431680;
  dword_790564 = 0;
  dword_790568 = 0;
  dword_79056C = 0;
  dword_790570 = (int)sub_431AF0;
  dword_790574 = 0;
  dword_790578 = 0;
  dword_79057C = 0;
  dword_790580 = (int)sub_4314F0;
  dword_790584 = 0;
  dword_790588 = 0;
  dword_79058C = 0;
  dword_790590 = (int)sub_431B50;
  dword_790594 = 0;
  dword_790598 = 0;
  dword_79059C = 0;
  dword_7905A0 = (int)sub_431540;
  dword_7905A4 = 0;
  dword_7905A8 = 0;
  dword_7905AC = 0;
  dword_7905B0 = (int)sub_4318B0;
  dword_7905B4 = 0;
  dword_7905B8 = 0;
  dword_7905BC = 0;
  dword_7905C0 = (int)sub_431400;
  dword_7905C4 = 0;
  dword_7905C8 = 0;
  dword_7905CC = 0;
  dword_7905D0 = (int)sub_431910;
  dword_7905D4 = 0;
  dword_7905D8 = 0;
  dword_7905DC = 0;
  dword_7905E0 = (int)sub_431450;
  dword_7905E4 = 0;
  dword_7905E8 = 0;
  dword_7905EC = 0;
  dword_7905F0 = (int)sub_431970;
  dword_7905F4 = 0;
  dword_7905F8 = 0;
  dword_7905FC = 0;
  dword_790600 = (int)sub_431720;
  dword_790604 = 0;
  dword_790608 = 0;
  dword_79060C = 0;
  dword_790610 = (int)sub_4383C0;
  dword_790614 = 0;
  dword_790618 = 0;
  dword_79061C = 0;
  dword_790620 = (int)sub_4313B0;
  dword_790624 = 0;
  dword_790628 = 0;
  dword_79062C = 0;
  dword_790630 = (int)sub_437620;
  dword_790634 = 0;
  dword_790638 = 0;
  dword_79063C = 0;
  dword_790640 = (int)sub_431590;
  dword_790644 = 0;
  dword_790648 = 0;
  dword_79064C = 0;
  dword_790650 = (int)sub_437860;
  dword_790654 = 0;
  dword_790658 = 0;
  dword_79065C = 0;
  dword_790660 = (int)sub_4317C0;
  dword_790664 = 0;
  dword_790668 = 0;
  dword_79066C = 0;
  dword_790670 = (int)sub_438600;
  dword_790674 = 0;
  dword_790678 = 0;
  dword_79067C = 0;
  dword_790680 = (int)sub_431770;
  dword_790684 = 0;
  dword_790688 = 0;
  dword_79068C = 0;
  dword_790690 = (int)sub_438670;
  dword_790694 = 0;
  dword_790698 = 0;
  dword_79069C = 0;
  dword_7906A0 = (int)sub_431810;
  dword_7906A4 = 0;
  dword_7906A8 = 0;
  dword_7906AC = 0;
  dword_7906B0 = (int)sub_438740;
  dword_7906B4 = 0;
  dword_7906B8 = 0;
  dword_7906BC = 0;
  dword_7906C0 = (int)sub_431860;
  dword_7906C4 = 0;
  dword_7906C8 = 0;
  dword_7906CC = 0;
  return 0;
}


//======================================================================
// sub_6AF430
// entry 006af430  size 12  status ok
//======================================================================

void sub_6AF430()
{
  byte_79077B = 14;
}


//======================================================================
// sub_6AF440
// entry 006af440  size 12  status ok
//======================================================================

void sub_6AF440()
{
  byte_7907A2 = 13;
}


//======================================================================
// sub_6AF450
// entry 006af450  size 12  status ok
//======================================================================

void sub_6AF450()
{
  byte_790778 = 12;
}


//======================================================================
// sub_6AF460
// entry 006af460  size 12  status ok
//======================================================================

void sub_6AF460()
{
  byte_79074C = 11;
}


//======================================================================
// sub_6AF470
// entry 006af470  size 12  status ok
//======================================================================

void sub_6AF470()
{
  byte_7907A0 = 10;
}


//======================================================================
// sub_6AF480
// entry 006af480  size 12  status ok
//======================================================================

void sub_6AF480()
{
  byte_7907AC = 9;
}


//======================================================================
// sub_6AF490
// entry 006af490  size 12  status ok
//======================================================================

void sub_6AF490()
{
  byte_79074D = 8;
}


//======================================================================
// sub_6AF4A0
// entry 006af4a0  size 12  status ok
//======================================================================

void sub_6AF4A0()
{
  byte_79078E = 7;
}


//======================================================================
// sub_6AF4B0
// entry 006af4b0  size 12  status ok
//======================================================================

void sub_6AF4B0()
{
  byte_79078C = 6;
}


//======================================================================
// sub_6AF4C0
// entry 006af4c0  size 12  status ok
//======================================================================

void sub_6AF4C0()
{
  byte_79075F = 5;
}


//======================================================================
// sub_6AF4D0
// entry 006af4d0  size 12  status ok
//======================================================================

void sub_6AF4D0()
{
  byte_79078F = 4;
}


//======================================================================
// sub_6AF4E0
// entry 006af4e0  size 12  status ok
//======================================================================

void sub_6AF4E0()
{
  byte_79074E = 3;
}


//======================================================================
// sub_6AF4F0
// entry 006af4f0  size 12  status ok
//======================================================================

void sub_6AF4F0()
{
  byte_79078D = 2;
}


//======================================================================
// sub_6AF500
// entry 006af500  size 12  status ok
//======================================================================

void sub_6AF500()
{
  byte_7907A3 = 1;
}


//======================================================================
// sub_6AF510
// entry 006af510  size 12  status ok
//======================================================================

void sub_6AF510()
{
  byte_79075D = 0;
}


//======================================================================
// sub_6AF520
// entry 006af520  size 12  status ok
//======================================================================

void sub_6AF520()
{
  byte_79074F = 96;
}


//======================================================================
// sub_6AF530
// entry 006af530  size 12  status ok
//======================================================================

void sub_6AF530()
{
  byte_79075E = 80;
}


//======================================================================
// sub_6AF540
// entry 006af540  size 12  status ok
//======================================================================

void sub_6AF540()
{
  byte_79077A = 64;
}


//======================================================================
// sub_6AF550
// entry 006af550  size 12  status ok
//======================================================================

void sub_6AF550()
{
  byte_79075C = 48;
}


//======================================================================
// sub_6AF560
// entry 006af560  size 12  status ok
//======================================================================

void sub_6AF560()
{
  byte_7907A1 = 32;
}


//======================================================================
// sub_6AF570
// entry 006af570  size 12  status ok
//======================================================================

void sub_6AF570()
{
  byte_790779 = 16;
}


//======================================================================
// sub_6AF580
// entry 006af580  size 15  status ok
//======================================================================

void sub_6AF580()
{
  dword_79077C = (int)&byte_79077B;
}


//======================================================================
// sub_6AF590
// entry 006af590  size 15  status ok
//======================================================================

void sub_6AF590()
{
  dword_7907B4 = (int)&byte_7907A2;
}


//======================================================================
// sub_6AF5A0
// entry 006af5a0  size 15  status ok
//======================================================================

void sub_6AF5A0()
{
  dword_7907A4 = (int)&byte_790778;
}


//======================================================================
// sub_6AF5B0
// entry 006af5b0  size 15  status ok
//======================================================================

void sub_6AF5B0()
{
  dword_7907A8 = (int)&byte_79074C;
}


//======================================================================
// sub_6AF5C0
// entry 006af5c0  size 15  status ok
//======================================================================

void sub_6AF5C0()
{
  dword_7907B0 = (int)&byte_7907A0;
}


//======================================================================
// sub_6AF5D0
// entry 006af5d0  size 15  status ok
//======================================================================

void sub_6AF5D0()
{
  dword_790774 = (int)&byte_7907AC;
}


//======================================================================
// sub_6AF5E0
// entry 006af5e0  size 15  status ok
//======================================================================

void sub_6AF5E0()
{
  dword_790788 = (int)&byte_79074D;
}


//======================================================================
// sub_6AF5F0
// entry 006af5f0  size 15  status ok
//======================================================================

void sub_6AF5F0()
{
  dword_790794 = (int)&byte_79078E;
}


//======================================================================
// sub_6AF600
// entry 006af600  size 15  status ok
//======================================================================

void sub_6AF600()
{
  dword_790798 = (int)&byte_79078C;
}


//======================================================================
// sub_6AF610
// entry 006af610  size 15  status ok
//======================================================================

void sub_6AF610()
{
  dword_790760 = (int)&byte_79075F;
}


//======================================================================
// sub_6AF620
// entry 006af620  size 15  status ok
//======================================================================

void sub_6AF620()
{
  dword_79079C = (int)&byte_79078F;
}


//======================================================================
// sub_6AF630
// entry 006af630  size 15  status ok
//======================================================================

void sub_6AF630()
{
  dword_790750 = (int)&byte_79074E;
}


//======================================================================
// sub_6AF640
// entry 006af640  size 15  status ok
//======================================================================

void sub_6AF640()
{
  dword_790790 = (int)&byte_79078D;
}


//======================================================================
// sub_6AF650
// entry 006af650  size 15  status ok
//======================================================================

void sub_6AF650()
{
  dword_790768 = (int)&byte_7907A3;
}


//======================================================================
// sub_6AF660
// entry 006af660  size 15  status ok
//======================================================================

void sub_6AF660()
{
  dword_790758 = (int)&byte_79075D;
}


//======================================================================
// sub_6AF670
// entry 006af670  size 15  status ok
//======================================================================

void sub_6AF670()
{
  dword_790780 = (int)&byte_79074F;
}


//======================================================================
// sub_6AF680
// entry 006af680  size 15  status ok
//======================================================================

void sub_6AF680()
{
  dword_790784 = (int)&byte_79075E;
}


//======================================================================
// sub_6AF690
// entry 006af690  size 15  status ok
//======================================================================

void sub_6AF690()
{
  dword_79076C = (int)&byte_79077A;
}


//======================================================================
// sub_6AF6A0
// entry 006af6a0  size 15  status ok
//======================================================================

void sub_6AF6A0()
{
  dword_790754 = (int)&byte_79075C;
}


//======================================================================
// sub_6AF6B0
// entry 006af6b0  size 15  status ok
//======================================================================

void sub_6AF6B0()
{
  dword_790764 = (int)&byte_7907A1;
}


//======================================================================
// sub_6AF6C0
// entry 006af6c0  size 15  status ok
//======================================================================

void sub_6AF6C0()
{
  dword_790770 = (int)&byte_790779;
}


//======================================================================
// sub_6AF6D0
// entry 006af6d0  size 12  status ok
//======================================================================

void sub_6AF6D0()
{
  byte_7913B9 = 14;
}


//======================================================================
// sub_6AF6E0
// entry 006af6e0  size 12  status ok
//======================================================================

void sub_6AF6E0()
{
  byte_7913DF = 13;
}


//======================================================================
// sub_6AF6F0
// entry 006af6f0  size 12  status ok
//======================================================================

void sub_6AF6F0()
{
  byte_7913FC = 12;
}


//======================================================================
// sub_6AF700
// entry 006af700  size 12  status ok
//======================================================================

void sub_6AF700()
{
  byte_7913ED = 11;
}


//======================================================================
// sub_6AF710
// entry 006af710  size 12  status ok
//======================================================================

void sub_6AF710()
{
  byte_79138B = 10;
}


//======================================================================
// sub_6AF720
// entry 006af720  size 12  status ok
//======================================================================

void sub_6AF720()
{
  byte_7913BA = 9;
}


//======================================================================
// sub_6AF730
// entry 006af730  size 12  status ok
//======================================================================

void sub_6AF730()
{
  byte_7913C2 = 8;
}


//======================================================================
// sub_6AF740
// entry 006af740  size 12  status ok
//======================================================================

void sub_6AF740()
{
  byte_791409 = 7;
}


//======================================================================
// sub_6AF750
// entry 006af750  size 12  status ok
//======================================================================

void sub_6AF750()
{
  byte_7913DC = 6;
}


//======================================================================
// sub_6AF760
// entry 006af760  size 12  status ok
//======================================================================

void sub_6AF760()
{
  byte_79138A = 5;
}


//======================================================================
// sub_6AF770
// entry 006af770  size 12  status ok
//======================================================================

void sub_6AF770()
{
  byte_7913A8 = 4;
}


//======================================================================
// sub_6AF780
// entry 006af780  size 12  status ok
//======================================================================

void sub_6AF780()
{
  byte_7913BB = 3;
}


//======================================================================
// sub_6AF790
// entry 006af790  size 12  status ok
//======================================================================

void sub_6AF790()
{
  byte_7913DD = 2;
}


//======================================================================
// sub_6AF7A0
// entry 006af7a0  size 12  status ok
//======================================================================

void sub_6AF7A0()
{
  byte_7913EE = 1;
}


//======================================================================
// sub_6AF7B0
// entry 006af7b0  size 12  status ok
//======================================================================

void sub_6AF7B0()
{
  byte_7913FF = 0;
}


//======================================================================
// sub_6AF7C0
// entry 006af7c0  size 15  status ok
//======================================================================

void sub_6AF7C0()
{
  dword_7913C8 = (int)&byte_7913B9;
}


//======================================================================
// sub_6AF7D0
// entry 006af7d0  size 15  status ok
//======================================================================

void sub_6AF7D0()
{
  dword_7913E0 = (int)&byte_7913DF;
}


//======================================================================
// sub_6AF7E0
// entry 006af7e0  size 15  status ok
//======================================================================

void sub_6AF7E0()
{
  dword_7913BC = (int)&byte_7913FC;
}


//======================================================================
// sub_6AF7F0
// entry 006af7f0  size 15  status ok
//======================================================================

void sub_6AF7F0()
{
  dword_791400 = (int)&byte_7913ED;
}


//======================================================================
// sub_6AF800
// entry 006af800  size 15  status ok
//======================================================================

void sub_6AF800()
{
  dword_79138C = (int)&byte_79138B;
}


