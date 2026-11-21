//======================================================================
// sub_617A30
// entry 00617a30  size 61  status ok
//======================================================================

int __cdecl sub_617A30(int a1, int a2)
{
  __int16 v3; // [esp+0h] [ebp-8h]

  LOBYTE(v3) = BYTE2(a2);
  HIBYTE(v3) = BYTE1(a2);
  *(_WORD *)a1 = v3;
  *(_BYTE *)(a1 + 2) = a2;
  return a1;
}


//======================================================================
// sub_617A70
// entry 00617a70  size 54  status ok
//======================================================================

int __cdecl sub_617A70(int a1)
{
  int v2; // [esp+0h] [ebp-8h]

  LOBYTE(v2) = BYTE2(a1);
  BYTE1(v2) = BYTE1(a1);
  BYTE2(v2) = a1;
  HIBYTE(v2) = HIBYTE(a1);
  return v2;
}


//======================================================================
// sub_617AB0
// entry 00617ab0  size 52  status ok
//======================================================================

int __cdecl sub_617AB0(char a1, char a2, char a3)
{
  int v4; // [esp+0h] [ebp-8h]

  BYTE2(v4) = a1;
  BYTE1(v4) = a2;
  LOBYTE(v4) = a3;
  HIBYTE(v4) = -1;
  return v4;
}


//======================================================================
// sub_617AF0
// entry 00617af0  size 52  status ok
//======================================================================

int __cdecl sub_617AF0(int a1)
{
  int v2; // [esp+0h] [ebp-8h]

  BYTE1(v2) = BYTE1(a1);
  BYTE2(v2) = a1;
  LOBYTE(v2) = BYTE2(a1);
  HIBYTE(v2) = -1;
  return v2;
}


//======================================================================
// sub_617B30
// entry 00617b30  size 54  status ok
//======================================================================

int __cdecl sub_617B30(int a1)
{
  int v2; // [esp+0h] [ebp-8h]

  BYTE1(v2) = BYTE1(a1);
  BYTE2(v2) = a1;
  LOBYTE(v2) = BYTE2(a1);
  HIBYTE(v2) = HIBYTE(a1);
  return v2;
}


//======================================================================
// sub_617B70
// entry 00617b70  size 180  status ok
//======================================================================

BOOL __cdecl sub_617B70(_BYTE *a1, _BYTE *a2, int a3)
{
  if ( a3 == 128 || a3 == 130 || a3 == 132 || a3 == 136 )
    return !a2 && !*a1 && !a1[1] && !a1[2] || a2 && !*a2;
  else
    return !a2 && !*a1 || a2 && !*a2;
}


//======================================================================
// sub_617C30
// entry 00617c30  size 187  status ok
//======================================================================

BOOL __cdecl sub_617C30(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  if ( a3 == 128 || a3 == 130 || a3 == 132 || a3 == 136 )
    return !a2 && *a1 && a1[1] && a1[2] || a2 && *a2 == 255;
  else
    return !a2 && *a1 || a2 && *a2 == 255;
}


//======================================================================
// sub_617CF0
// entry 00617cf0  size 45  status ok
//======================================================================

BOOL __cdecl sub_617CF0(int a1, _BYTE *a2)
{
  return a2 && *a2 && (unsigned __int8)*a2 != 255;
}


//======================================================================
// sub_617D20
// entry 00617d20  size 1551  status ok
//======================================================================

BOOL __cdecl sub_617D20(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3, int a4)
{
  bool v5; // [esp+0h] [ebp-8h]
  bool v6; // [esp+4h] [ebp-4h]

  v6 = a4 == 128 || a4 == 130 || a4 == 132 || a4 == 136;
  if ( v6
    || (unsigned int)(a1 + 9) > a3
    || *a1 != a1[1]
    || *a1 != a1[2]
    || *a1 != a1[3]
    || *a1 != a1[4]
    || *a1 != a1[5]
    || *a1 != a1[6]
    || *a1 != a1[7]
    || *a1 != a1[8]
    || *a1 != a1[9] )
  {
    v5 = a4 == 128 || a4 == 130 || a4 == 132 || a4 == 136;
    if ( !v5
      || (unsigned int)(a1 + 27) > a3
      || *a1 != a1[3]
      || a1[1] != a1[4]
      || a1[2] != a1[5]
      || *a1 != a1[6]
      || a1[1] != a1[7]
      || a1[2] != a1[8]
      || *a1 != a1[9]
      || a1[1] != a1[10]
      || a1[2] != a1[11]
      || *a1 != a1[12]
      || a1[1] != a1[13]
      || a1[2] != a1[14]
      || *a1 != a1[15]
      || a1[1] != a1[16]
      || a1[2] != a1[17]
      || *a1 != a1[18]
      || a1[1] != a1[19]
      || a1[2] != a1[20]
      || *a1 != a1[21]
      || a1[1] != a1[22]
      || a1[2] != a1[23]
      || *a1 != a1[24]
      || a1[1] != a1[25]
      || a1[2] != a1[26]
      || *a1 != a1[27]
      || a1[1] != a1[28]
      || a1[2] != a1[29] )
    {
      return 0;
    }
  }
  if ( a2
    && sub_617C30(a1, a2, a4)
    && sub_617C30(a1 + 1, a2 + 1, a4)
    && sub_617C30(a1 + 2, a2 + 2, a4)
    && sub_617C30(a1 + 3, a2 + 3, a4)
    && sub_617C30(a1 + 4, a2 + 4, a4)
    && sub_617C30(a1 + 5, a2 + 5, a4)
    && sub_617C30(a1 + 6, a2 + 6, a4)
    && sub_617C30(a1 + 7, a2 + 7, a4)
    && sub_617C30(a1 + 8, a2 + 8, a4)
    && sub_617C30(a1 + 9, a2 + 9, a4) )
  {
    return 1;
  }
  return !a2
      && sub_617C30(a1, 0, a4)
      && sub_617C30(a1 + 1, 0, a4)
      && sub_617C30(a1 + 2, 0, a4)
      && sub_617C30(a1 + 3, 0, a4)
      && sub_617C30(a1 + 4, 0, a4)
      && sub_617C30(a1 + 5, 0, a4)
      && sub_617C30(a1 + 6, 0, a4)
      && sub_617C30(a1 + 7, 0, a4)
      && sub_617C30(a1 + 8, 0, a4)
      && sub_617C30(a1 + 9, 0, a4);
}


//======================================================================
// sub_618330
// entry 00618330  size 2700  status ok
//======================================================================

void *__cdecl sub_618330(unsigned __int8 *a1, int a2, unsigned int *a3, unsigned __int8 *a4, int a5)
{
  bool v7; // [esp+4h] [ebp-68h]
  bool v9; // [esp+Ch] [ebp-60h]
  bool v13; // [esp+1Ch] [ebp-50h]
  bool v15; // [esp+24h] [ebp-48h]
  bool v18; // [esp+34h] [ebp-38h]
  bool v20; // [esp+3Ch] [ebp-30h]
  int i; // [esp+54h] [ebp-18h]
  int j; // [esp+54h] [ebp-18h]
  int m; // [esp+54h] [ebp-18h]
  int n; // [esp+54h] [ebp-18h]
  int k; // [esp+54h] [ebp-18h]
  unsigned int v30; // [esp+58h] [ebp-14h]
  _BYTE *v31; // [esp+5Ch] [ebp-10h]
  _BYTE *v32; // [esp+5Ch] [ebp-10h]
  unsigned __int8 *v33; // [esp+5Ch] [ebp-10h]
  _BYTE *v34; // [esp+5Ch] [ebp-10h]
  _BYTE *v35; // [esp+60h] [ebp-Ch]
  __int16 *v36; // [esp+60h] [ebp-Ch]
  unsigned __int8 *v37; // [esp+60h] [ebp-Ch]
  __int16 *v38; // [esp+60h] [ebp-Ch]
  unsigned __int8 *v39; // [esp+60h] [ebp-Ch]
  __int16 v40; // [esp+64h] [ebp-8h]
  void *v41; // [esp+68h] [ebp-4h]

  *a3 = 0;
  v30 = (unsigned int)&a1[a2];
  if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
    v30 += 3 * a2;
  v35 = &unk_15EDE10;
  while ( (unsigned int)a1 < v30 )
  {
    v40 = 1;
    if ( sub_617B70(a1, a4, a5) )
    {
      ++a1;
      if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
        a1 += 3;
      if ( a4 )
        ++a4;
      while ( (unsigned int)a1 < v30 && sub_617B70(a1, a4, a5) )
      {
        ++a1;
        if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
          a1 += 3;
        if ( a4 )
          ++a4;
        ++v40;
      }
      *v35 = 1;
      v36 = (__int16 *)(v35 + 1);
      *v36 = v40;
      v35 = v36 + 1;
    }
    else if ( sub_617CF0((int)a1, a4) )
    {
      if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
        *v35 = -124;
      else
        *v35 = 4;
      v31 = v35 + 1;
      v37 = v35 + 3;
      for ( i = 0; ; ++i )
      {
        v20 = a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136;
        if ( i >= (v20 ? 3 : 1) )
          break;
        *v37++ = *a1++;
      }
      if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
        ++a1;
      *v37 = *a4;
      v35 = v37 + 1;
      ++a4;
      while ( (unsigned int)a1 < v30 && sub_617CF0((int)a1, a4) )
      {
        for ( j = 0; ; ++j )
        {
          v18 = a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136;
          if ( j >= (v18 ? 3 : 1) )
            break;
          *v35++ = *a1++;
        }
        if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
          ++a1;
        *v35++ = *a4++;
        ++v40;
      }
      *v31 = v40;
      *(_WORD *)v31 = v40;
    }
    else if ( sub_617C30(a1, a4, a5) )
    {
      switch ( a5 )
      {
        case 14:
        case 15:
        case 16:
        case 32:
        case 64:
          *v35 = a5;
          v34 = v35 + 1;
          v39 = v35 + 3;
          *v39 = *a1;
          v35 = v39 + 1;
          ++a1;
          if ( a4 )
            ++a4;
          while ( (unsigned int)a1 < v30 && sub_617C30(a1, a4, 0) )
          {
            *v35++ = *a1++;
            if ( a4 )
              ++a4;
            ++v40;
          }
          *v34 = v40;
          *(_WORD *)v34 = v40;
          break;
        default:
          if ( sub_617D20(a1, a4, v30, a5) )
          {
            if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
              *v35 = -120;
            else
              *v35 = 8;
            v38 = (__int16 *)(v35 + 1);
            v33 = a1++;
            if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
              a1 += 3;
            if ( a4 )
              ++a4;
            while ( (unsigned int)a1 < v30 && *a1 == *v33 )
            {
              v9 = a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136;
              if ( v9 && (a1[1] != v33[1] || a1[2] != v33[2]) || !sub_617C30(a1, a4, a5) )
                break;
              ++a1;
              if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
                a1 += 3;
              if ( a4 )
                ++a4;
              ++v40;
            }
            *v38 = v40;
            v35 = v38 + 1;
            for ( k = 0; ; ++k )
            {
              v7 = a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136;
              if ( k >= (v7 ? 3 : 1) )
                break;
              *v35++ = *v33++;
            }
            if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
              ++a1;
          }
          else
          {
            if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
              *v35 = -126;
            else
              *v35 = 2;
            v32 = v35 + 1;
            v35 += 3;
            for ( m = 0; ; ++m )
            {
              v15 = a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136;
              if ( m >= (v15 ? 3 : 1) )
                break;
              *v35++ = *a1++;
            }
            if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
              ++a1;
            if ( a4 )
              ++a4;
            while ( (unsigned int)a1 < v30 && sub_617C30(a1, a4, a5) && !sub_617D20(a1, a4, v30, a5) )
            {
              for ( n = 0; ; ++n )
              {
                v13 = a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136;
                if ( n >= (v13 ? 3 : 1) )
                  break;
                *v35++ = *a1++;
              }
              if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
                ++a1;
              if ( a4 )
                ++a4;
              ++v40;
            }
            *v32 = v40;
            *(_WORD *)v32 = v40;
          }
          break;
      }
    }
  }
  *a3 = v35 - (_BYTE *)&unk_15EDE10;
  v41 = operator new(*a3);
  memcpy(v41, &unk_15EDE10, *a3);
  return v41;
}


//======================================================================
// sub_618E00
// entry 00618e00  size 199  status ok
//======================================================================

int __cdecl sub_618E00(int a1)
{
  int result; // eax
  int i; // [esp+0h] [ebp-4h]

  result = dword_75F538[0];
  if ( dword_75F538[0] == a1 )
  {
    dword_15EDE08 = (int)&unk_15ED608;
  }
  else if ( dword_75F53C == a1 )
  {
    dword_15EDE08 = (int)&unk_15EDA08;
  }
  else
  {
    ++dword_75F540;
    dword_75F540 %= 2;
    dword_15EDE08 = (int)&unk_15ED608 + 1024 * dword_75F540;
    result = a1;
    dword_75F538[dword_75F540] = a1;
    for ( i = 0; i < 256; ++i )
    {
      result = a1 * i / 255;
      *(_DWORD *)(dword_15EDE08 + 4 * i) = result;
    }
  }
  return result;
}


//======================================================================
// sub_618ED0
// entry 00618ed0  size 3368  status ok
//======================================================================

__int16 __cdecl sub_618ED0(_BYTE *a1, unsigned __int8 *a2, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // eax
  int v7; // edx
  unsigned __int8 *v8; // esi
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  bool v12; // cc
  unsigned int v14; // [esp+Ch] [ebp-D8h]
  int v15[13]; // [esp+34h] [ebp-B0h] BYREF
  int v16; // [esp+68h] [ebp-7Ch]
  _BYTE *v17; // [esp+6Ch] [ebp-78h]
  _BYTE *v18; // [esp+70h] [ebp-74h]
  int v19; // [esp+74h] [ebp-70h]
  _BYTE *v20; // [esp+78h] [ebp-6Ch]
  _BYTE *v21; // [esp+7Ch] [ebp-68h]
  int v22; // [esp+80h] [ebp-64h]
  int v23; // [esp+84h] [ebp-60h]
  int v24; // [esp+88h] [ebp-5Ch]
  int v25; // [esp+8Ch] [ebp-58h]
  int *v26; // [esp+90h] [ebp-54h]
  unsigned __int8 v27; // [esp+97h] [ebp-4Dh]
  int v28; // [esp+98h] [ebp-4Ch]
  int v29; // [esp+9Ch] [ebp-48h]
  int v30; // [esp+A0h] [ebp-44h]
  _BYTE *v31; // [esp+A4h] [ebp-40h]
  _BYTE *v32; // [esp+A8h] [ebp-3Ch]
  int v33; // [esp+ACh] [ebp-38h]
  _BYTE *v34; // [esp+B0h] [ebp-34h]
  _BYTE *v35; // [esp+B4h] [ebp-30h]
  int v36; // [esp+B8h] [ebp-2Ch]
  unsigned __int16 v37; // [esp+BCh] [ebp-28h]
  signed int v38; // [esp+C0h] [ebp-24h]
  int v39; // [esp+C4h] [ebp-20h]
  _DWORD *v40; // [esp+C8h] [ebp-1Ch]
  _BYTE *v41; // [esp+CCh] [ebp-18h]
  char *v42; // [esp+D0h] [ebp-14h]
  signed int j; // [esp+D4h] [ebp-10h]
  int v44; // [esp+D8h] [ebp-Ch]
  signed int v45; // [esp+DCh] [ebp-8h]
  unsigned __int8 v46; // [esp+E3h] [ebp-1h]
  unsigned __int8 *i; // [esp+F0h] [ebp+Ch]
  unsigned __int8 *v48; // [esp+F0h] [ebp+Ch]
  unsigned __int8 *v49; // [esp+F0h] [ebp+Ch]

  v44 = 4;
  v39 = *a2;
  LOWORD(v6) = *(_WORD *)(a2 + 1);
  v37 = (unsigned __int16)v6;
  for ( i = a2 + 3; a3 >= v37; i += 3 )
  {
    LOWORD(v6) = v37;
    if ( !v37 )
      break;
    a3 -= v37;
    switch ( v39 )
    {
      case 2:
        i += v37;
        break;
      case 4:
        i += 2 * v37;
        break;
      case 8:
        ++i;
        break;
      case 14:
      case 15:
      case 16:
      case 32:
      case 64:
        i += v37;
        break;
      case 130:
        i += 3 * v37;
        break;
      case 132:
        i += 4 * v37;
        break;
      case 136:
        i += 3;
        break;
      default:
        break;
    }
    v39 = *i;
    LOWORD(v6) = *(_WORD *)(i + 1);
    v37 = (unsigned __int16)v6;
  }
  while ( a4 > 0 && v37 )
  {
    v37 -= a3;
    LOWORD(v6) = v39 - 1;
    switch ( v39 )
    {
      case 1:
        if ( a4 <= v37 )
        {
          a4 = 0;
        }
        else
        {
          a3 = 0;
          LOWORD(v6) = (_WORD)a1 + v44 * v37;
          a1 += v44 * v37;
        }
        break;
      case 2:
        v48 = &i[a3];
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        v38 = v45;
        v41 = a1;
        v40 = a1;
        v14 = v45 & 3;
        switch ( v14 )
        {
          case 1u:
            *v40 = *(_DWORD *)(a5 + 4 * *v48);
            a1 += v44;
            ++v48;
            break;
          case 2u:
            *v40 = *(_DWORD *)(a5 + 4 * *v48);
            v40[1] = *(_DWORD *)(a5 + 4 * v48[1]);
            a1 += 2 * v44;
            v48 += 2;
            break;
          case 3u:
            *v40 = *(_DWORD *)(a5 + 4 * *v48);
            v40[1] = *(_DWORD *)(a5 + 4 * v48[1]);
            v40[2] = *(_DWORD *)(a5 + 4 * v48[2]);
            a1 += 3 * v44;
            v48 += 3;
            break;
        }
        v45 &= 0xFFFFFFFC;
        v40 = a1;
        v7 = v45;
        if ( v45 )
        {
          v8 = v48;
          v9 = v40;
          do
          {
            v10 = *(_DWORD *)(a5 + 4 * v8[1]);
            *v9 = *(_DWORD *)(a5 + 4 * *v8);
            v9[1] = v10;
            v11 = *(_DWORD *)(a5 + 4 * v8[3]);
            v9[2] = *(_DWORD *)(a5 + 4 * v8[2]);
            v9[3] = v11;
            v8 += 4;
            v9 += 4;
            v12 = v7 <= 4;
            v7 -= 4;
          }
          while ( !v12 );
        }
        i = &v48[v45];
        a1 += v45 * v44;
        LOWORD(v6) = (unsigned __int8)byte_7960CD;
        if ( byte_7960CD )
        {
          v33 = v38;
          v34 = v41;
          while ( v33 > 0 )
          {
            v35 = v34;
            v34[3] = -1;
            v34 += 4;
            LOWORD(v6) = --v33;
          }
        }
        break;
      case 4:
        v49 = &i[2 * a3];
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        v45 *= 2;
        v40 = a1;
        if ( byte_7960CD )
        {
          for ( j = 0; j < v45; j += 2 )
          {
            v42 = (char *)&v40[j / 2];
            v28 = v49[j + 1];
            v29 = *(_DWORD *)(a5 + 4 * v49[j]);
            *(_DWORD *)v42 = ((unsigned __int8)*(_DWORD *)v42
                            - ((v28 * ((unsigned __int8)*(_DWORD *)v42 - (unsigned __int8)v29)) >> 8))
                           | (((*(int *)v42 >> 16)
                             - ((v28
                               * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)v42) >> 16)
                                - ((int)((unsigned int)&unk_FF0000 & v29) >> 16))) >> 8)) << 16)
                           | ((((*(_DWORD *)v42 & 0xFF00) >> 8)
                             - ((v28 * (((*(_DWORD *)v42 & 0xFF00) >> 8) - ((v29 & 0xFF00) >> 8))) >> 8)) << 8);
            v27 = v49[j + 1];
            v42[3] += (unsigned __int16)(v27 * (255 - (unsigned __int8)v42[3])) >> 8;
          }
        }
        else
        {
          for ( j = 0; j < v45; j += 2 )
          {
            v24 = v49[j + 1];
            v25 = *(_DWORD *)(a5 + 4 * v49[j]);
            v26 = &v40[j / 2];
            *v26 = ((unsigned __int8)*v26 - ((v24 * ((unsigned __int8)*v26 - (unsigned __int8)v25)) >> 8))
                 | (((*v26 >> 16)
                   - ((v24
                     * (((int)((unsigned int)&unk_FF0000 & *v26) >> 16) - ((int)((unsigned int)&unk_FF0000 & v25) >> 16))) >> 8)) << 16)
                 | ((((*v26 & 0xFF00) >> 8) - ((v24 * (((*v26 & 0xFF00) >> 8) - ((v25 & 0xFF00) >> 8))) >> 8)) << 8);
          }
        }
        i = &v49[v45];
        v6 = &a1[v44 * (v45 / 2)];
        a1 = v6;
        break;
      case 8:
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        v38 = v45;
        v41 = a1;
        v40 = a1;
        v36 = *(_DWORD *)(a5 + 4 * *i);
        if ( v45 )
          memset32(v40, v36, v45);
        a1 += v45 * v44;
        ++i;
        LOWORD(v6) = (unsigned __int8)byte_7960CD;
        if ( byte_7960CD )
        {
          v19 = v38;
          v20 = v41;
          while ( v19 > 0 )
          {
            v21 = v20;
            v20[3] = -1;
            v20 += 4;
            LOWORD(v6) = --v19;
          }
        }
        break;
      case 14:
        i += a3;
        LOWORD(v6) = v37;
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        for ( j = 0; j < v45; ++j )
        {
          sub_61D800(a1, *(_DWORD *)(a5 + 4 * *i), a6);
          a1 += v44;
          ++i;
          LOWORD(v6) = j + 1;
        }
        break;
      case 15:
        i += a3;
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        for ( j = 0; ; ++j )
        {
          LOWORD(v6) = j;
          if ( j >= v45 )
            break;
          sub_61DA70(a1, *(_DWORD *)(a5 + 4 * *i), a6);
          a1 += v44;
          ++i;
        }
        break;
      case 16:
        i += a3;
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        for ( j = 0; ; ++j )
        {
          LOWORD(v6) = j;
          if ( j >= v45 )
            break;
          sub_61D520(a1, *(_DWORD *)(a5 + 4 * *i), a6);
          a1 += v44;
          ++i;
        }
        break;
      case 32:
        LOWORD(v6) = a3 + (_WORD)i;
        i += a3;
        if ( a4 <= v37 )
        {
          LOWORD(v6) = a4;
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        for ( j = 0; j < v45; ++j )
        {
          sub_61D6A0(a1, *(_DWORD *)(a5 + 4 * *i), a6);
          LOWORD(v6) = v44 + (_WORD)a1;
          a1 += v44;
          ++i;
        }
        break;
      case 64:
        LOWORD(v6) = a3 + (_WORD)i;
        i += a3;
        if ( a4 <= v37 )
        {
          LOWORD(v6) = a4;
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        for ( j = 0; j < v45; ++j )
        {
          v15[0] = *(_DWORD *)(a5 + 4 * *i);
          sub_61D6A0(v15, *(_DWORD *)a1, a6);
          sub_61D520(a1, v15[0], a6);
          LOWORD(v6) = v44 + (_WORD)a1;
          a1 += v44;
          ++i;
        }
        break;
      case 130:
        i += 3 * a3;
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        v38 = v45;
        LOWORD(v6) = (_WORD)a1;
        v41 = a1;
        HIBYTE(v36) = -1;
        for ( j = 0; j < v45; ++j )
        {
          LOWORD(v36) = *(_WORD *)i;
          BYTE2(v36) = i[2];
          *(_DWORD *)a1 = v36;
          a1 += v44;
          LOWORD(v6) = (_WORD)i + 3;
          i += 3;
        }
        if ( byte_7960CD )
        {
          v30 = v38;
          LOWORD(v6) = (_WORD)v41;
          v31 = v41;
          while ( v30 > 0 )
          {
            v32 = v31;
            LOWORD(v6) = (_WORD)v31;
            v31[3] = -1;
            v31 += 4;
            --v30;
          }
        }
        break;
      case 132:
        i += 4 * a3;
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        HIBYTE(v36) = -1;
        if ( byte_7960CD )
        {
          for ( j = 0; ; ++j )
          {
            LOWORD(v6) = j;
            if ( j >= v45 )
              break;
            LOWORD(v36) = *(_WORD *)i;
            BYTE2(v36) = i[2];
            v46 = i[3];
            i += 4;
            v23 = v46;
            *(_DWORD *)a1 = ((unsigned __int8)*(_DWORD *)a1
                           - ((v46 * ((unsigned __int8)*(_DWORD *)a1 - (unsigned __int8)v36)) >> 8))
                          | (((*(int *)a1 >> 16)
                            - ((v46
                              * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)a1) >> 16)
                               - ((int)((unsigned int)&unk_FF0000 & v36) >> 16))) >> 8)) << 16)
                          | ((((*(_DWORD *)a1 & 0xFF00) >> 8)
                            - ((v46 * (((*(_DWORD *)a1 & 0xFF00) >> 8) - ((v36 & 0xFF00) >> 8))) >> 8)) << 8);
            a1[3] += (unsigned __int16)(v46 * (255 - (unsigned __int8)a1[3])) >> 8;
            a1 += v44;
          }
        }
        else
        {
          for ( j = 0; ; ++j )
          {
            LOWORD(v6) = j;
            if ( j >= v45 )
              break;
            LOWORD(v36) = *(_WORD *)i;
            BYTE2(v36) = i[2];
            v46 = i[3];
            i += 4;
            v22 = v46;
            *(_DWORD *)a1 = ((unsigned __int8)*(_DWORD *)a1
                           - ((v46 * ((unsigned __int8)*(_DWORD *)a1 - (unsigned __int8)v36)) >> 8))
                          | (((*(int *)a1 >> 16)
                            - ((v46
                              * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)a1) >> 16)
                               - ((int)((unsigned int)&unk_FF0000 & v36) >> 16))) >> 8)) << 16)
                          | ((((*(_DWORD *)a1 & 0xFF00) >> 8)
                            - ((v46 * (((*(_DWORD *)a1 & 0xFF00) >> 8) - ((v36 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 += v44;
          }
        }
        break;
      case 136:
        if ( a4 <= v37 )
        {
          v45 = a4;
          a4 = 0;
        }
        else
        {
          v45 = v37;
          a3 = 0;
        }
        v38 = v45;
        v41 = a1;
        LOWORD(v36) = *(_WORD *)i;
        BYTE2(v36) = i[2];
        HIBYTE(v36) = -1;
        i += 3;
        for ( j = 0; j < v45; ++j )
        {
          *(_DWORD *)a1 = v36;
          a1 += v44;
        }
        LOWORD(v6) = (unsigned __int8)byte_7960CD;
        if ( byte_7960CD )
        {
          v16 = v38;
          v17 = v41;
          while ( v16 > 0 )
          {
            v18 = v17;
            v17[3] = -1;
            v17 += 4;
            LOWORD(v6) = --v16;
          }
        }
        break;
      default:
        LOWORD(v6) = v37;
        break;
    }
    if ( a4 )
    {
      a4 -= v37;
      v39 = *i;
      LOWORD(v6) = (_WORD)i;
      v37 = *(_WORD *)(i + 1);
      i += 3;
    }
  }
  return (__int16)v6;
}


//======================================================================
// sub_61A4A0
// entry 0061a4a0  size 3651  status ok
//======================================================================

__int16 __cdecl sub_61A4A0(int *a1, unsigned __int8 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // eax
  int v9[13]; // [esp+30h] [ebp-80h] BYREF
  int v10; // [esp+64h] [ebp-4Ch]
  int v11; // [esp+68h] [ebp-48h]
  int v12; // [esp+6Ch] [ebp-44h]
  int *v13; // [esp+70h] [ebp-40h]
  int v14; // [esp+74h] [ebp-3Ch]
  int v15; // [esp+78h] [ebp-38h]
  int *v16; // [esp+7Ch] [ebp-34h]
  int v17; // [esp+80h] [ebp-30h]
  int *v18; // [esp+84h] [ebp-2Ch]
  int v19; // [esp+88h] [ebp-28h]
  unsigned __int8 v20; // [esp+8Fh] [ebp-21h]
  int k; // [esp+90h] [ebp-20h]
  int v22; // [esp+94h] [ebp-1Ch]
  unsigned __int16 v23; // [esp+98h] [ebp-18h]
  int v24; // [esp+9Ch] [ebp-14h]
  int *v25; // [esp+A0h] [ebp-10h]
  int j; // [esp+A4h] [ebp-Ch]
  int v27; // [esp+A8h] [ebp-8h]
  int v28; // [esp+ACh] [ebp-4h]
  unsigned __int8 *i; // [esp+BCh] [ebp+Ch]
  unsigned __int8 *v30; // [esp+BCh] [ebp+Ch]
  unsigned __int8 *v31; // [esp+BCh] [ebp+Ch]

  v27 = 4;
  v24 = *a2;
  LOWORD(v7) = *(_WORD *)(a2 + 1);
  v23 = (unsigned __int16)v7;
  for ( i = a2 + 3; a3 >= v23; i += 3 )
  {
    LOWORD(v7) = v23;
    if ( !v23 )
      break;
    a3 -= v23;
    switch ( v24 )
    {
      case 2:
        i += v23;
        break;
      case 4:
        i += 2 * v23;
        break;
      case 8:
        ++i;
        break;
      case 14:
      case 15:
      case 16:
      case 32:
      case 64:
        i += v23;
        break;
      case 130:
        i += 3 * v23;
        break;
      case 132:
        i += 4 * v23;
        break;
      case 136:
        i += 3;
        break;
      default:
        break;
    }
    v24 = *i;
    LOWORD(v7) = *(_WORD *)(i + 1);
    v23 = (unsigned __int16)v7;
  }
  while ( a4 > 0 && v23 )
  {
    v23 -= a3;
    LOWORD(v7) = v24 - 1;
    switch ( v24 )
    {
      case 1:
        if ( a4 <= v23 )
        {
          a4 = 0;
        }
        else
        {
          a3 = 0;
          LOWORD(v7) = (_WORD)a1 + a7 * v27 * v23;
          a1 = (int *)((char *)a1 + a7 * v27 * v23);
        }
        break;
      case 2:
        v30 = &i[a3];
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        v25 = a1;
        if ( a7 <= 1 )
        {
          for ( j = 0; j < v28; ++j )
          {
            v17 = *(_DWORD *)(a5 + 4 * v30[j]);
            v18 = &v25[j];
            *v18 = ((unsigned __int8)*v18 - ((a6 * ((unsigned __int8)*v18 - (unsigned __int8)v17)) >> 8))
                 | (((*v18 >> 16)
                   - ((a6
                     * (((int)((unsigned int)&unk_FF0000 & *v18) >> 16) - ((int)((unsigned int)&unk_FF0000 & v17) >> 16))) >> 8)) << 16)
                 | ((((*v18 & 0xFF00) >> 8) - ((a6 * (((*v18 & 0xFF00) >> 8) - ((v17 & 0xFF00) >> 8))) >> 8)) << 8);
          }
          a1 = (int *)((char *)a1 + v28 * v27);
          LOWORD(v7) = v28 + (_WORD)v30;
          i = &v30[v28];
        }
        else
        {
          for ( j = 0; j < v28; ++j )
          {
            for ( k = 0; k < a7; ++k )
            {
              v19 = *(_DWORD *)(a5 + 4 * v30[j]);
              *v25 = ((unsigned __int8)*v25 - ((a6 * ((unsigned __int8)*v25 - (unsigned __int8)v19)) >> 8))
                   | (((*v25 >> 16)
                     - ((a6
                       * (((int)((unsigned int)&unk_FF0000 & *v25) >> 16)
                        - ((int)((unsigned int)&unk_FF0000 & v19) >> 16))) >> 8)) << 16)
                   | ((((*v25 & 0xFF00) >> 8) - ((a6 * (((*v25 & 0xFF00) >> 8) - ((v19 & 0xFF00) >> 8))) >> 8)) << 8);
              ++v25;
            }
          }
          LOWORD(v7) = (_WORD)a1 + a7 * v28 * v27;
          a1 = (int *)((char *)a1 + a7 * v28 * v27);
          i = &v30[v28];
        }
        break;
      case 4:
        v31 = &i[2 * a3];
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        v28 *= 2;
        v25 = a1;
        if ( a7 <= 1 )
        {
          for ( j = 0; j < v28; j += 2 )
          {
            v11 = *(_DWORD *)(dword_15EDE08 + 4 * v31[j + 1]);
            v12 = *(_DWORD *)(a5 + 4 * v31[j]);
            v13 = &v25[j / 2];
            *v13 = ((unsigned __int8)*v13 - ((v11 * ((unsigned __int8)*v13 - (unsigned __int8)v12)) >> 8))
                 | (((*v13 >> 16)
                   - ((v11
                     * (((int)((unsigned int)&unk_FF0000 & *v13) >> 16) - ((int)((unsigned int)&unk_FF0000 & v12) >> 16))) >> 8)) << 16)
                 | ((((*v13 & 0xFF00) >> 8) - ((v11 * (((*v13 & 0xFF00) >> 8) - ((v12 & 0xFF00) >> 8))) >> 8)) << 8);
          }
          i = &v31[v28];
          v7 = (int *)((char *)a1 + v27 * (v28 / 2));
          a1 = v7;
        }
        else
        {
          for ( j = 0; j < v28; j += 2 )
          {
            for ( k = 0; k < a7; ++k )
            {
              v14 = *(_DWORD *)(dword_15EDE08 + 4 * v31[j + 1]);
              v15 = *(_DWORD *)(a5 + 4 * v31[j]);
              v16 = &v25[j / 2 + k];
              *v16 = ((unsigned __int8)*v16 - ((v14 * ((unsigned __int8)*v16 - (unsigned __int8)v15)) >> 8))
                   | (((*v16 >> 16)
                     - ((v14
                       * (((int)((unsigned int)&unk_FF0000 & *v16) >> 16)
                        - ((int)((unsigned int)&unk_FF0000 & v15) >> 16))) >> 8)) << 16)
                   | ((((*v16 & 0xFF00) >> 8) - ((v14 * (((*v16 & 0xFF00) >> 8) - ((v15 & 0xFF00) >> 8))) >> 8)) << 8);
            }
            v25 = &v25[a7 - 1];
          }
          i = &v31[v28];
          v7 = (int *)((char *)a1 + a7 * v27 * (v28 / 2));
          a1 = v7;
        }
        break;
      case 8:
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        v22 = *(_DWORD *)(a5 + 4 * *i);
        for ( j = 0; j < v28; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            *a1 = ((unsigned __int8)*a1 - ((a6 * ((unsigned __int8)*a1 - (unsigned __int8)v22)) >> 8))
                | (((*a1 >> 16)
                  - ((a6
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((a6 * (((*a1 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v27);
          }
        }
        LOWORD(v7) = (_WORD)i++ + 1;
        break;
      case 14:
        LOWORD(v7) = a3 + (_WORD)i;
        i += a3;
        if ( a4 <= v23 )
        {
          LOWORD(v7) = a4;
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        for ( j = 0; j < v28; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            sub_61D800(a1, *(_DWORD *)(a5 + 4 * *i), a6);
            a1 = (int *)((char *)a1 + v27);
          }
          LOWORD(v7) = (_WORD)i++ + 1;
        }
        break;
      case 15:
        i += a3;
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v28 )
            break;
          for ( k = 0; k < a7; ++k )
          {
            sub_61DA70(a1, *(_DWORD *)(a5 + 4 * *i), a6);
            a1 = (int *)((char *)a1 + v27);
          }
          ++i;
        }
        break;
      case 16:
        i += a3;
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v28 )
            break;
          for ( k = 0; k < a7; ++k )
          {
            sub_61D520(a1, *(_DWORD *)(a5 + 4 * *i), a6);
            a1 = (int *)((char *)a1 + v27);
          }
          ++i;
        }
        break;
      case 32:
        i += a3;
        LOWORD(v7) = v23;
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        for ( j = 0; j < v28; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            sub_61D6A0(a1, *(_DWORD *)(a5 + 4 * *i), a6);
            a1 = (int *)((char *)a1 + v27);
          }
          ++i;
          LOWORD(v7) = j + 1;
        }
        break;
      case 64:
        i += a3;
        LOWORD(v7) = v23;
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        for ( j = 0; j < v28; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            v9[0] = *(_DWORD *)(a5 + 4 * *i);
            sub_61D6A0(v9, *a1, a6);
            sub_61D520(a1, v9[0], a6);
            a1 = (int *)((char *)a1 + v27);
          }
          ++i;
          LOWORD(v7) = j + 1;
        }
        break;
      case 130:
        i += 3 * a3;
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        HIBYTE(v22) = -1;
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v28 )
            break;
          LOWORD(v22) = *(_WORD *)i;
          BYTE2(v22) = i[2];
          i += 3;
          for ( k = 0; k < a7; ++k )
          {
            *a1 = ((unsigned __int8)*a1 - ((a6 * ((unsigned __int8)*a1 - (unsigned __int8)v22)) >> 8))
                | (((*a1 >> 16)
                  - ((a6
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((a6 * (((*a1 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v27);
          }
        }
        break;
      case 132:
        LOWORD(v7) = (_WORD)i + 4 * a3;
        i += 4 * a3;
        if ( a4 <= v23 )
        {
          LOWORD(v7) = a4;
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        HIBYTE(v22) = -1;
        for ( j = 0; j < v28; ++j )
        {
          LOWORD(v22) = *(_WORD *)i;
          BYTE2(v22) = i[2];
          LOWORD(v7) = (_WORD)i;
          v20 = i[3];
          i += 4;
          for ( k = 0; k < a7; ++k )
          {
            v10 = *(_DWORD *)(dword_15EDE08 + 4 * v20);
            *a1 = ((unsigned __int8)*a1 - ((v10 * ((unsigned __int8)*a1 - (unsigned __int8)v22)) >> 8))
                | (((*a1 >> 16)
                  - ((v10
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((v10 * (((*a1 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v27);
            LOWORD(v7) = k + 1;
          }
        }
        break;
      case 136:
        if ( a4 <= v23 )
        {
          v28 = a4;
          a4 = 0;
        }
        else
        {
          v28 = v23;
          a3 = 0;
        }
        LOWORD(v22) = *(_WORD *)i;
        BYTE2(v22) = i[2];
        HIBYTE(v22) = -1;
        i += 3;
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v28 )
            break;
          for ( k = 0; k < a7; ++k )
          {
            *a1 = ((unsigned __int8)*a1 - ((a6 * ((unsigned __int8)*a1 - (unsigned __int8)v22)) >> 8))
                | (((*a1 >> 16)
                  - ((a6
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((a6 * (((*a1 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v27);
          }
        }
        break;
      default:
        LOWORD(v7) = v23;
        break;
    }
    if ( a4 )
    {
      a4 -= v23;
      v24 = *i;
      v23 = *(_WORD *)(i + 1);
      LOWORD(v7) = (_WORD)i + 3;
      i += 3;
    }
  }
  return (__int16)v7;
}


//======================================================================
// sub_61B450
// entry 0061b450  size 3696  status ok
//======================================================================

__int16 __cdecl sub_61B450(int *a1, unsigned __int8 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // eax
  int v9[13]; // [esp+2Ch] [ebp-90h] BYREF
  int v10; // [esp+60h] [ebp-5Ch]
  int v11; // [esp+64h] [ebp-58h]
  int *v12; // [esp+68h] [ebp-54h]
  int v13; // [esp+6Ch] [ebp-50h]
  int *v14; // [esp+70h] [ebp-4Ch]
  int v15; // [esp+74h] [ebp-48h]
  int *v16; // [esp+78h] [ebp-44h]
  int v17; // [esp+7Ch] [ebp-40h]
  unsigned __int8 v18; // [esp+83h] [ebp-39h]
  int k; // [esp+84h] [ebp-38h]
  int v20; // [esp+88h] [ebp-34h]
  int v21; // [esp+8Ch] [ebp-30h]
  int v22; // [esp+90h] [ebp-2Ch]
  unsigned __int16 v23; // [esp+94h] [ebp-28h]
  int v24; // [esp+98h] [ebp-24h]
  int *v25; // [esp+9Ch] [ebp-20h]
  int v26; // [esp+A0h] [ebp-1Ch]
  int v27; // [esp+A4h] [ebp-18h]
  int j; // [esp+A8h] [ebp-14h]
  int v29; // [esp+ACh] [ebp-10h]
  int v30; // [esp+B0h] [ebp-Ch]
  int v31; // [esp+B4h] [ebp-8h]
  int v32; // [esp+B8h] [ebp-4h]
  unsigned __int8 *i; // [esp+C8h] [ebp+Ch]
  unsigned __int8 *v34; // [esp+C8h] [ebp+Ch]
  unsigned __int8 *v35; // [esp+C8h] [ebp+Ch]

  v29 = 4;
  v22 = sub_617AB0(248, 39, 242);
  v26 = sub_617AB0(247, 66, 40);
  v27 = sub_617AB0(238, 243, 44);
  v32 = sub_617AB0(138, 243, 44);
  v30 = sub_617AB0(45, 242, 242);
  v21 = sub_617AB0(48, 43, 244);
  v24 = *a2;
  LOWORD(v7) = *(_WORD *)(a2 + 1);
  v23 = (unsigned __int16)v7;
  for ( i = a2 + 3; a3 >= v23; i += 3 )
  {
    LOWORD(v7) = v23;
    if ( !v23 )
      break;
    a3 -= v23;
    switch ( v24 )
    {
      case 2:
        i += v23;
        break;
      case 4:
        i += 2 * v23;
        break;
      case 8:
        ++i;
        break;
      case 14:
      case 15:
      case 16:
      case 32:
      case 64:
        i += v23;
        break;
      case 130:
        i += 3 * v23;
        break;
      case 132:
        i += 4 * v23;
        break;
      case 136:
        i += 3;
        break;
      default:
        break;
    }
    v24 = *i;
    LOWORD(v7) = *(_WORD *)(i + 1);
    v23 = (unsigned __int16)v7;
  }
  while ( a4 > 0 && v23 )
  {
    v23 -= a3;
    LOWORD(v7) = v24 - 1;
    switch ( v24 )
    {
      case 1:
        if ( a4 <= v23 )
        {
          a4 = 0;
        }
        else
        {
          a3 = 0;
          LOWORD(v7) = (_WORD)a1 + a7 * v29 * v23;
          a1 = (int *)((char *)a1 + a7 * v29 * v23);
        }
        break;
      case 2:
        v34 = &i[a3];
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        v25 = a1;
        if ( a7 <= 1 )
        {
          for ( j = 0; j < v31; ++j )
          {
            v15 = *(_DWORD *)(a5 + 4 * v34[j]);
            v16 = &v25[j];
            *v16 = ((unsigned __int8)*v16 - ((a6 * ((unsigned __int8)*v16 - (unsigned __int8)v15)) >> 8))
                 | (((*v16 >> 16)
                   - ((a6
                     * (((int)((unsigned int)&unk_FF0000 & *v16) >> 16) - ((int)((unsigned int)&unk_FF0000 & v15) >> 16))) >> 8)) << 16)
                 | ((((*v16 & 0xFF00) >> 8) - ((a6 * (((*v16 & 0xFF00) >> 8) - ((v15 & 0xFF00) >> 8))) >> 8)) << 8);
          }
          a1 = (int *)((char *)a1 + v31 * v29);
          LOWORD(v7) = v31 + (_WORD)v34;
          i = &v34[v31];
        }
        else
        {
          for ( j = 0; j < v31; ++j )
          {
            for ( k = 0; k < a7; ++k )
            {
              v17 = *(_DWORD *)(a5 + 4 * v34[j]);
              *v25 = ((unsigned __int8)*v25 - ((a6 * ((unsigned __int8)*v25 - (unsigned __int8)v17)) >> 8))
                   | (((*v25 >> 16)
                     - ((a6
                       * (((int)((unsigned int)&unk_FF0000 & *v25) >> 16)
                        - ((int)((unsigned int)&unk_FF0000 & v17) >> 16))) >> 8)) << 16)
                   | ((((*v25 & 0xFF00) >> 8) - ((a6 * (((*v25 & 0xFF00) >> 8) - ((v17 & 0xFF00) >> 8))) >> 8)) << 8);
              ++v25;
            }
          }
          LOWORD(v7) = (_WORD)a1 + a7 * v31 * v29;
          a1 = (int *)((char *)a1 + a7 * v31 * v29);
          i = &v34[v31];
        }
        break;
      case 4:
        v35 = &i[2 * a3];
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        v31 *= 2;
        v25 = a1;
        if ( a7 <= 1 )
        {
          for ( j = 0; j < v31; j += 2 )
          {
            v11 = *(_DWORD *)(dword_15EDE08 + 4 * v35[j + 1]);
            v12 = &v25[j / 2];
            *v12 = ((unsigned __int8)*v12 - ((v11 * ((unsigned __int8)*v12 - (unsigned __int8)v22)) >> 8))
                 | (((*v12 >> 16)
                   - ((v11
                     * (((int)((unsigned int)&unk_FF0000 & *v12) >> 16) - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                 | ((((*v12 & 0xFF00) >> 8) - ((v11 * (((*v12 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
          }
          i = &v35[v31];
          v7 = (int *)((char *)a1 + v29 * (v31 / 2));
          a1 = v7;
        }
        else
        {
          for ( j = 0; j < v31; j += 2 )
          {
            for ( k = 0; k < a7; ++k )
            {
              v13 = *(_DWORD *)(dword_15EDE08 + 4 * v35[j + 1]);
              v14 = &v25[j / 2 + k];
              *v14 = ((unsigned __int8)*v14 - ((v13 * ((unsigned __int8)*v14 - (unsigned __int8)v22)) >> 8))
                   | (((*v14 >> 16)
                     - ((v13
                       * (((int)((unsigned int)&unk_FF0000 & *v14) >> 16)
                        - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                   | ((((*v14 & 0xFF00) >> 8) - ((v13 * (((*v14 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
            }
            v25 = &v25[a7 - 1];
          }
          i = &v35[v31];
          v7 = (int *)((char *)a1 + a7 * v29 * (v31 / 2));
          a1 = v7;
        }
        break;
      case 8:
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        v20 = *(_DWORD *)(a5 + 4 * *i);
        for ( j = 0; j < v31; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            *a1 = ((unsigned __int8)*a1 - ((a6 * ((unsigned __int8)*a1 - (unsigned __int8)v20)) >> 8))
                | (((*a1 >> 16)
                  - ((a6
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v20) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((a6 * (((*a1 & 0xFF00) >> 8) - ((v20 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v29);
          }
        }
        LOWORD(v7) = (_WORD)i++ + 1;
        break;
      case 14:
        LOWORD(v7) = a3 + (_WORD)i;
        i += a3;
        if ( a4 <= v23 )
        {
          LOWORD(v7) = a4;
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        for ( j = 0; j < v31; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            sub_61D800(a1, v32, a6);
            a1 = (int *)((char *)a1 + v29);
          }
          LOWORD(v7) = (_WORD)i++ + 1;
        }
        break;
      case 15:
        i += a3;
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v31 )
            break;
          for ( k = 0; k < a7; ++k )
          {
            sub_61DA70(a1, v30, a6);
            a1 = (int *)((char *)a1 + v29);
          }
          ++i;
        }
        break;
      case 16:
        i += a3;
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v31 )
            break;
          for ( k = 0; k < a7; ++k )
          {
            sub_61D520(a1, v26, a6);
            a1 = (int *)((char *)a1 + v29);
          }
          ++i;
        }
        break;
      case 32:
        i += a3;
        LOWORD(v7) = v23;
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        for ( j = 0; j < v31; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            sub_61D6A0(a1, v27, a6);
            a1 = (int *)((char *)a1 + v29);
          }
          ++i;
          LOWORD(v7) = j + 1;
        }
        break;
      case 64:
        i += a3;
        LOWORD(v7) = v23;
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        for ( j = 0; j < v31; ++j )
        {
          for ( k = 0; k < a7; ++k )
          {
            v9[0] = v21;
            sub_61D6A0(v9, *a1, a6);
            sub_61D520(a1, v9[0], a6);
            a1 = (int *)((char *)a1 + v29);
          }
          ++i;
          LOWORD(v7) = j + 1;
        }
        break;
      case 130:
        i += 3 * a3;
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        HIBYTE(v20) = -1;
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v31 )
            break;
          LOWORD(v20) = *(_WORD *)i;
          BYTE2(v20) = i[2];
          i += 3;
          for ( k = 0; k < a7; ++k )
          {
            *a1 = ((unsigned __int8)*a1 - ((a6 * ((unsigned __int8)*a1 - (unsigned __int8)v20)) >> 8))
                | (((*a1 >> 16)
                  - ((a6
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v20) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((a6 * (((*a1 & 0xFF00) >> 8) - ((v20 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v29);
          }
        }
        break;
      case 132:
        LOWORD(v7) = (_WORD)i + 4 * a3;
        i += 4 * a3;
        if ( a4 <= v23 )
        {
          LOWORD(v7) = a4;
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        HIBYTE(v20) = -1;
        for ( j = 0; j < v31; ++j )
        {
          LOWORD(v20) = *(_WORD *)i;
          BYTE2(v20) = i[2];
          LOWORD(v7) = (_WORD)i;
          v18 = i[3];
          i += 4;
          for ( k = 0; k < a7; ++k )
          {
            v10 = *(_DWORD *)(dword_15EDE08 + 4 * v18);
            *a1 = ((unsigned __int8)*a1 - ((v10 * ((unsigned __int8)*a1 - (unsigned __int8)v22)) >> 8))
                | (((*a1 >> 16)
                  - ((v10
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v22) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((v10 * (((*a1 & 0xFF00) >> 8) - ((v22 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v29);
            LOWORD(v7) = k + 1;
          }
        }
        break;
      case 136:
        if ( a4 <= v23 )
        {
          v31 = a4;
          a4 = 0;
        }
        else
        {
          v31 = v23;
          a3 = 0;
        }
        LOWORD(v20) = *(_WORD *)i;
        BYTE2(v20) = i[2];
        HIBYTE(v20) = -1;
        i += 3;
        for ( j = 0; ; ++j )
        {
          LOWORD(v7) = j;
          if ( j >= v31 )
            break;
          for ( k = 0; k < a7; ++k )
          {
            *a1 = ((unsigned __int8)*a1 - ((a6 * ((unsigned __int8)*a1 - (unsigned __int8)v20)) >> 8))
                | (((*a1 >> 16)
                  - ((a6
                    * (((int)((unsigned int)&unk_FF0000 & *a1) >> 16) - ((int)((unsigned int)&unk_FF0000 & v20) >> 16))) >> 8)) << 16)
                | ((((*a1 & 0xFF00) >> 8) - ((a6 * (((*a1 & 0xFF00) >> 8) - ((v20 & 0xFF00) >> 8))) >> 8)) << 8);
            a1 = (int *)((char *)a1 + v29);
          }
        }
        break;
      default:
        LOWORD(v7) = v23;
        break;
    }
    if ( a4 )
    {
      a4 -= v23;
      v24 = *i;
      LOWORD(v7) = (_WORD)i;
      v23 = *(_WORD *)(i + 1);
      i += 3;
    }
  }
  return (__int16)v7;
}


//======================================================================
// sub_61C5E0
// entry 0061c5e0  size 238  status ok
//======================================================================

char __cdecl sub_61C5E0(unsigned __int8 *a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+4h] [ebp-1Ch]
  int v7; // [esp+8h] [ebp-18h]
  char v9; // [esp+10h] [ebp-10h]
  void *v10; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v9 = 0;
  v10 = &unk_1000000;
  for ( i = 0; i < 256; ++i )
  {
    v7 = *a1 - a2;
    v5 = a1[1] - a3;
    v12 = a1[2] - a4;
    a1 += 3;
    if ( v7 >= -100 && v7 <= 100 && v5 >= -100 && v5 <= 100 && v12 >= -100 && v12 <= 100 )
    {
      v6 = v12 * v12 + v5 * v5 + v7 * v7;
      if ( v6 < 0 )
        v6 = -v6;
      if ( v6 < (int)v10 )
      {
        v9 = i;
        v10 = (void *)v6;
      }
      if ( v6 < 1 )
        i = 256;
    }
  }
  return v9;
}


//======================================================================
// sub_61C810
// entry 0061c810  size 194  status ok
//======================================================================

__int16 *__cdecl sub_61C810(__int16 *a1, __int16 *a2, _DWORD *a3, __int16 **a4)
{
  __int16 *result; // eax
  int i; // [esp+4h] [ebp-8h]
  __int16 v6; // [esp+8h] [ebp-4h]

  a1 += 4;
  *a4 = a1;
  a1 += 384;
  v6 = *a1++;
  *a2 = v6;
  *a3 = operator new(8 * *a2);
  for ( i = 0; ; ++i )
  {
    result = a2;
    if ( i >= *a2 )
      break;
    sub_61C8F0(&a1, *a3 + 8 * i, i);
  }
  return result;
}


//======================================================================
// sub_61C8F0
// entry 0061c8f0  size 144  status ok
//======================================================================

int __cdecl sub_61C8F0(_WORD **a1, int a2, int a3)
{
  int result; // eax
  int i; // [esp+8h] [ebp-8h]
  unsigned __int16 v5; // [esp+Ch] [ebp-4h]

  v5 = *(*a1)++;
  *(_WORD *)a2 = v5;
  *(_DWORD *)(a2 + 4) = operator new(16 * v5);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= v5 )
      break;
    sub_61C980(a1, a2, a3, i);
  }
  return result;
}


//======================================================================
// sub_61C980
// entry 0061c980  size 442  status ok
//======================================================================

int __cdecl sub_61C980(_WORD **a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]
  __int16 v7; // [esp+10h] [ebp-4h]
  unsigned __int16 v8; // [esp+10h] [ebp-4h]
  __int16 v9; // [esp+10h] [ebp-4h]
  __int16 v10; // [esp+10h] [ebp-4h]
  __int16 v11; // [esp+10h] [ebp-4h]
  __int16 v12; // [esp+10h] [ebp-4h]
  unsigned __int16 v13; // [esp+10h] [ebp-4h]

  v7 = *(*a1)++;
  *(_WORD *)(16 * a4 + *(_DWORD *)(a2 + 4)) = v7;
  v8 = *(*a1)++;
  v5 = v8;
  *(_WORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 2) = v8;
  v9 = *(*a1)++;
  *(_WORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 4) = v9;
  v10 = *(*a1)++;
  *(_WORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 6) = v10;
  v11 = *(*a1)++;
  *(_WORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 8) = v11;
  v12 = *(*a1)++;
  *(_WORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 10) = v12;
  *(_DWORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 12) = operator new(4 * v5);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= v5 )
      break;
    v13 = *(*a1)++;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 16 * a4 + 12) + 4 * i) = *a1;
    *a1 = (_WORD *)((char *)*a1 + v13);
  }
  return result;
}


//======================================================================
// sub_61CD70
// entry 0061cd70  size 108  status ok
//======================================================================

int __cdecl sub_61CD70(int a1, int a2, int a3)
{
  int result; // eax
  unsigned __int16 v4; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  result = a1 + 776;
  v4 = *(_WORD *)(a1 + 776);
  a1 += 778;
  for ( i = 0; i < v4; ++i )
  {
    sub_61CDE0(&a1, a2, a3);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_61CDE0
// entry 0061cde0  size 84  status ok
//======================================================================

unsigned __int16 **__cdecl sub_61CDE0(unsigned __int16 **a1, int a2, int a3)
{
  unsigned __int16 **result; // eax
  unsigned __int16 v4; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v4 = **a1;
  result = a1;
  ++*a1;
  for ( i = 0; i < v4; ++i )
  {
    sub_61CE40(a1, a2, a3);
    result = (unsigned __int16 **)(i + 1);
  }
  return result;
}


//======================================================================
// sub_61CE40
// entry 0061ce40  size 207  status ok
//======================================================================

_WORD **__cdecl sub_61CE40(_WORD **a1, int a2, char a3)
{
  _WORD **result; // eax
  unsigned __int16 v4; // [esp+0h] [ebp-10h]
  unsigned __int16 v5; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  unsigned __int16 v7; // [esp+Ch] [ebp-4h]

  v4 = *(*a1)++;
  v5 = *(*a1)++;
  ++*a1;
  ++*a1;
  ++*a1;
  result = a1;
  ++*a1;
  for ( i = 0; i < v5; ++i )
  {
    v7 = *(*a1)++;
    sub_61CF10(*a1, v4, a2, a3);
    *a1 = (_WORD *)((char *)*a1 + v7);
    result = (_WORD **)(i + 1);
  }
  return result;
}


//======================================================================
// sub_61CF10
// entry 0061cf10  size 277  status ok
//======================================================================

unsigned __int16 __cdecl sub_61CF10(unsigned __int8 *a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned __int16 result; // ax
  unsigned __int16 v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]
  unsigned __int8 *v7; // [esp+14h] [ebp+8h]

  v6 = *a1;
  if ( v6 == a3 )
    *a1 = a4;
  result = *(_WORD *)(a1 + 1);
  v5 = result;
  v7 = a1 + 3;
  while ( a2 > 0 && v5 )
  {
    a2 -= v5;
    result = v6 - 2;
    switch ( v6 )
    {
      case 2:
        v7 += v5;
        break;
      case 4:
        result = (unsigned __int16)v7;
        v7 += 2 * v5;
        break;
      case 8:
        result = (_WORD)v7++ + 1;
        break;
      case 14:
      case 15:
      case 16:
      case 32:
      case 64:
        v7 += v5;
        break;
      case 130:
        result = (_WORD)v7 + 3 * v5;
        v7 += 3 * v5;
        break;
      case 132:
        result = (unsigned __int16)v7;
        v7 += 4 * v5;
        break;
      case 136:
        v7 += 3;
        break;
      default:
        break;
    }
    if ( a2 > 0 )
    {
      v6 = *v7;
      if ( v6 == a3 )
        *v7 = a4;
      v5 = *(_WORD *)(v7 + 1);
      result = (_WORD)v7 + 3;
      v7 += 3;
    }
  }
  return result;
}


//======================================================================
// sub_61D0D0
// entry 0061d0d0  size 112  status ok
//======================================================================

bool __cdecl sub_61D0D0(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  char v8; // [esp+5h] [ebp-3h] BYREF
  char v9; // [esp+6h] [ebp-2h] BYREF
  unsigned __int8 v10; // [esp+7h] [ebp-1h] BYREF

  sub_61D290(a1, a2, a3, a4, a5, &v9, &v10, &v8);
  if ( v8 == 4 && v10 >= (int)a6 )
    return 1;
  return v8 == 2 || v8 == 8;
}


//======================================================================
// sub_61D290
// entry 0061d290  size 483  status ok
//======================================================================

char __cdecl sub_61D290(int a1, int a2, int a3, int a4, int a5, _BYTE *a6, _BYTE *a7, _BYTE *a8)
{
  char result; // al
  int v9; // [esp+8h] [ebp-Ch]
  unsigned __int16 v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]
  int v12; // [esp+10h] [ebp-4h]
  _BYTE *v13; // [esp+10h] [ebp-4h]

  *a6 = 0;
  *a7 = 0;
  *a8 = 1;
  result = 16 * a2;
  if ( a4 < *(__int16 *)(*(_DWORD *)(a3 + 8 * a1 + 4) + 16 * a2) )
  {
    result = 16 * a2;
    if ( a5 < *(__int16 *)(*(_DWORD *)(a3 + 8 * a1 + 4) + 16 * a2 + 2) )
    {
      v9 = a4;
      v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 8 * a1 + 4) + 16 * a2 + 12) + 4 * a5);
      *a8 = *(_BYTE *)v11;
      v10 = *(_WORD *)(v11 + 1);
      v12 = v11 + 3;
      while ( v9 >= v10 && v10 )
      {
        v9 -= v10;
        switch ( *a8 )
        {
          case 2:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x20:
          case 0x40:
            v12 += v10;
            break;
          case 4:
            v12 += 2 * v10;
            break;
          case 8:
            ++v12;
            break;
          default:
            break;
        }
        *a8 = *(_BYTE *)v12;
        v10 = *(_WORD *)(v12 + 1);
        v12 += 3;
      }
      if ( v10 )
      {
        result = *a8 - 1;
        switch ( *a8 )
        {
          case 1:
            *a6 = 0;
            break;
          case 2:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x20:
          case 0x40:
            result = *(_BYTE *)(v9 + v12);
            *a6 = result;
            break;
          case 4:
            v13 = (_BYTE *)(v12 + 2 * v9);
            *a6 = *v13;
            result = (_BYTE)v13 + 1;
            *a7 = v13[1];
            break;
          case 8:
            result = v12;
            *a6 = *(_BYTE *)v12;
            break;
          default:
            result = (char)a8;
            break;
        }
      }
      else
      {
        *a6 = 0;
        result = (char)a8;
        *a8 = 1;
      }
    }
  }
  return result;
}


//======================================================================
// sub_61D520
// entry 0061d520  size 379  status ok
//======================================================================

char __cdecl sub_61D520(unsigned __int8 *a1, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+0h] [ebp-Ch]

  if ( a3 == 255 )
  {
    v8 = (unsigned __int8)a2 + *a1;
    if ( v8 > 255 )
      LOBYTE(v8) = -1;
    *a1 = v8;
    v9 = BYTE1(a2) + a1[1];
    if ( v9 > 255 )
      LOBYTE(v9) = -1;
    a1[1] = v9;
    v10 = BYTE2(a2) + a1[2];
    if ( v10 > 255 )
      LOBYTE(v10) = -1;
    a1[2] = v10;
    LOBYTE(v3) = v10;
  }
  else
  {
    v5 = ((a3 * (unsigned __int8)a2) >> 8) + *a1;
    if ( v5 > 255 )
      LOBYTE(v5) = -1;
    *a1 = v5;
    v6 = ((a3 * BYTE1(a2)) >> 8) + a1[1];
    if ( v6 > 255 )
      LOBYTE(v6) = -1;
    a1[1] = v6;
    v3 = (a3 * BYTE2(a2)) >> 8;
    v7 = v3 + a1[2];
    if ( v7 > 255 )
      LOBYTE(v7) = -1;
    a1[2] = v7;
  }
  return v3;
}


//======================================================================
// sub_61D6A0
// entry 0061d6a0  size 346  status ok
//======================================================================

char __cdecl sub_61D6A0(unsigned __int8 *a1, int a2, int a3)
{
  int v3; // edx
  char result; // al
  int v5; // [esp+0h] [ebp-Ch]
  _BYTE *v6; // [esp+4h] [ebp-8h]

  if ( a3 == 255 )
  {
    *a1 = (unsigned __int16)(*a1 * (unsigned __int8)a2) >> 8;
    a1[1] = (unsigned __int16)(a1[1] * BYTE1(a2)) >> 8;
    v6 = a1 + 2;
    v5 = (a1[2] * BYTE2(a2)) >> 8;
    result = (unsigned __int16)(a1[2] * BYTE2(a2)) >> 8;
  }
  else
  {
    *a1 = (unsigned __int16)((255 - ((a3 * (255 - (unsigned __int8)a2)) >> 8)) * *a1) >> 8;
    a1[1] = (unsigned __int16)((255 - ((a3 * (255 - BYTE1(a2))) >> 8)) * a1[1]) >> 8;
    v6 = a1 + 2;
    v3 = (a3 * (255 - BYTE2(a2))) >> 8;
    result = -1 - v3;
    v5 = ((255 - v3) * a1[2]) >> 8;
  }
  *v6 = v5;
  return result;
}


//======================================================================
// sub_61D800
// entry 0061d800  size 611  status ok
//======================================================================

char __cdecl sub_61D800(unsigned __int8 *a1, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp+0h] [ebp-24h]
  int v6; // [esp+4h] [ebp-20h]
  int v7; // [esp+8h] [ebp-1Ch]
  int v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  _BYTE *v11; // [esp+1Ch] [ebp-8h]
  _BYTE *v12; // [esp+1Ch] [ebp-8h]
  _BYTE *v13; // [esp+1Ch] [ebp-8h]
  _BYTE *v14; // [esp+1Ch] [ebp-8h]

  if ( a3 == 255 )
  {
    if ( *a1 > 0x80u )
      v7 = 255 - *a1;
    else
      v7 = *a1;
    *a1 += (v7 * ((unsigned __int8)a2 - 128)) >> 7;
    v13 = a1 + 1;
    if ( a1[1] > 0x80u )
      v6 = 255 - (unsigned __int8)*v13;
    else
      v6 = (unsigned __int8)*v13;
    *v13 += (v6 * (BYTE1(a2) - 128)) >> 7;
    v14 = a1 + 2;
    if ( a1[2] > 0x80u )
      v5 = 255 - (unsigned __int8)*v14;
    else
      v5 = (unsigned __int8)*v14;
    LOBYTE(v3) = ((v5 * (BYTE2(a2) - 128)) >> 7) + *v14;
    *v14 = v3;
  }
  else
  {
    if ( *a1 > 0x80u )
      v10 = 255 - *a1;
    else
      v10 = *a1;
    *a1 += (((a3 * v10) >> 8) * ((unsigned __int8)a2 - 128)) >> 7;
    v11 = a1 + 1;
    if ( a1[1] > 0x80u )
      v9 = 255 - (unsigned __int8)*v11;
    else
      v9 = (unsigned __int8)*v11;
    *v11 += (((a3 * v9) >> 8) * (BYTE1(a2) - 128)) >> 7;
    v12 = a1 + 2;
    if ( a1[2] > 0x80u )
      v8 = 255 - (unsigned __int8)*v12;
    else
      v8 = (unsigned __int8)*v12;
    v3 = (a3 * v8) >> 8;
    *v12 += (v3 * (BYTE2(a2) - 128)) >> 7;
  }
  return v3;
}


//======================================================================
// sub_61DA70
// entry 0061da70  size 399  status ok
//======================================================================

int __cdecl sub_61DA70(unsigned __int8 *a1, int a2, int a3)
{
  int result; // eax

  if ( a3 == 255 )
  {
    *a1 += (unsigned __int16)((255 - *a1) * (unsigned __int8)a2) >> 8;
    a1[1] += (unsigned __int16)((255 - a1[1]) * BYTE1(a2)) >> 8;
    result = (((255 - a1[2]) * BYTE2(a2)) >> 8) + a1[2];
    a1[2] = result;
  }
  else
  {
    *a1 += (unsigned __int16)((255 - *a1) * ((a3 * (unsigned __int8)a2) >> 8)) >> 8;
    a1[1] += (unsigned __int16)((255 - a1[1]) * ((a3 * BYTE1(a2)) >> 8)) >> 8;
    result = a1[2];
    a1[2] += (unsigned __int16)((255 - result) * ((a3 * BYTE2(a2)) >> 8)) >> 8;
  }
  return result;
}


//======================================================================
// sub_61DC00
// entry 0061dc00  size 131  status ok
//======================================================================

_DWORD *__thiscall sub_61DC00(_DWORD *this, int a2, int a3, int a4, unsigned __int8 a5)
{
  sub_62AEA0(this);
  *this = &Resource::`vftable';
  *(this + 12) = a2;
  *(this + 13) = a3;
  *((_BYTE *)this + 56) = 0;
  sub_61DFF0(a4, a5);
  return this;
}


//======================================================================
// sub_61DC90
// entry 0061dc90  size 255  status ok
//======================================================================

_DWORD *__thiscall sub_61DC90(_DWORD *this, char *Str, int a3, int a4, unsigned __int8 a5)
{
  size_t v5; // eax
  char String[8]; // [esp+8h] [ebp-18h] BYREF
  int v9; // [esp+1Ch] [ebp-4h]

  sub_62AEA0(this);
  v9 = 0;
  *this = &Resource::`vftable';
  *(this + 13) = a3;
  *((_BYTE *)this + 56) = 0;
  if ( strlen(Str) <= 4 )
  {
    strcpy(String, "    ");
    v5 = strlen(Str);
    memcpy(String, Str, v5);
    strupr(String);
    *(this + 12) = String[0] + (String[1] << 8) + (String[2] << 16) + (String[3] << 24);
    sub_61DFF0(a4, a5);
  }
  return this;
}


//======================================================================
// sub_61DD90
// entry 0061dd90  size 144  status ok
//======================================================================

char *__thiscall sub_61DD90(char *this, int a2, char *Source, int a4, unsigned __int8 a5)
{
  sub_62AEA0(this);
  *(_DWORD *)this = &Resource::`vftable';
  *((_DWORD *)this + 12) = a2;
  *((_DWORD *)this + 13) = 0;
  strcpy(this + 56, Source);
  sub_61DFF0(a4, a5);
  return this;
}


//======================================================================
// sub_61DE20
// entry 0061de20  size 463  status ok
//======================================================================

_DWORD *__thiscall sub_61DE20(_DWORD *this, int a2, int a3, void *Src, int a5, int a6)
{
  char v7; // [esp+0h] [ebp-120h]
  char Buffer[260]; // [esp+Ch] [ebp-114h] BYREF
  int v10; // [esp+11Ch] [ebp-4h]

  sub_62AEA0(this);
  v10 = 0;
  *this = &Resource::`vftable';
  *(this + 83) = 0;
  *(this + 86) = 0;
  *(this + 79) = 0;
  *(this + 80) = 0;
  *(this + 81) = 0;
  *((_BYTE *)this + 340) = 0;
  *(this + 12) = a2;
  *(this + 13) = a3;
  *((_BYTE *)this + 56) = 0;
  if ( *(this + 13) )
  {
    if ( Src && a5 )
    {
      *(this + 83) = a5;
      *(this + 86) = operator new(*(this + 83));
      memcpy((void *)*(this + 86), Src, *(this + 83));
      if ( byte_795FB2 )
      {
        sprintf(Buffer, "Resource %i created.  ", a3);
        sub_62FDE0(Buffer, v7);
      }
      sub_61DFF0(a6, -1);
    }
    else
    {
      sub_61DFF0(a6, -1);
    }
  }
  return this;
}


//======================================================================
// sub_61DFF0
// entry 0061dff0  size 1029  status ok
//======================================================================

int __thiscall sub_61DFF0(int this, int a2, int a3)
{
  int result; // eax
  char v4; // [esp+0h] [ebp-328h]
  char v6[264]; // [esp+8h] [ebp-320h] BYREF
  char Format[264]; // [esp+110h] [ebp-218h] BYREF
  char Buffer[268]; // [esp+218h] [ebp-110h] BYREF

  memset((void *)(this + 8), 0, 0x28u);
  if ( a3 != -1 )
  {
    *(_DWORD *)(this + 332) = 0;
    *(_DWORD *)(this + 344) = 0;
    *(_DWORD *)(this + 316) = 0;
    *(_DWORD *)(this + 320) = 0;
    *(_DWORD *)(this + 324) = 0;
    *(_DWORD *)(this + 328) = 0;
    *(_BYTE *)(this + 340) = 0;
  }
  *(_DWORD *)(this + 348) = 0;
  if ( a2 )
  {
    *(_DWORD *)(this + 336) = a2;
  }
  else if ( dword_7960D8 )
  {
    *(_DWORD *)(this + 336) = *(_DWORD *)(dword_7960D8 + 24);
  }
  else
  {
    *(_DWORD *)(this + 336) = 0;
  }
  result = this;
  if ( *(_DWORD *)(this + 52) || (result = strcmp((const char *)(this + 56), &Source)) != 0 )
  {
    if ( dword_7960D8 && *(_DWORD *)(dword_7960D8 + 8) )
      result = sub_60ACC0(*(_BYTE **)(dword_7960D8 + 8));
    v4 = a3;
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( !byte_795FB3 )
          sub_61EBD0(this);
        result = this;
        if ( !*(_DWORD *)(this + 344) )
        {
          if ( *(_DWORD *)(this + 52) )
          {
            result = sub_61E4F0(this);
          }
          else if ( byte_795FB3 )
          {
            sprintf(
              Buffer,
              "Cannot Find Resource %s.%c%c%c%c while looking in Prfs only!",
              (const char *)(this + 56),
              *(_DWORD *)(this + 48),
              *(int *)(this + 48) >> 8,
              *(int *)(this + 48) >> 16,
              *(int *)(this + 48) >> 24);
            result = sub_62FDE0(Buffer, 1);
          }
        }
        if ( byte_795FB2 )
          result = sub_62FDE0("\r\n", v4);
      }
    }
    else
    {
      if ( !byte_795FB3 )
        sub_61EFC0(this);
      if ( !*(_DWORD *)(this + 316) )
      {
        if ( *(_DWORD *)(this + 52) )
        {
          sub_61EDC0(this);
        }
        else if ( byte_795FB3 )
        {
          sprintf(
            Format,
            "Cannot Find Resource %s.%c%c%c%c while looking in Prfs only!",
            (const char *)(this + 56),
            *(_DWORD *)(this + 48),
            *(int *)(this + 48) >> 8,
            *(int *)(this + 48) >> 16,
            *(int *)(this + 48) >> 24);
          sub_62FDE0(Format, 0);
        }
      }
      result = (unsigned __int8)byte_795FB2;
      if ( byte_795FB2 )
        result = sub_62FDE0("\r\n", v4);
    }
    if ( !byte_795FB2 )
    {
      if ( a3 && !*(_DWORD *)(this + 344) || !a3 && (result = this, !*(_DWORD *)(this + 316)) )
      {
        if ( *(_DWORD *)(this + 52) )
          sprintf(
            v6,
            "Resource %d.%c%c%c%c failed to load!\r\n",
            *(_DWORD *)(this + 52),
            *(_DWORD *)(this + 48),
            *(int *)(this + 48) >> 8,
            *(int *)(this + 48) >> 16,
            *(int *)(this + 48) >> 24);
        else
          sprintf(
            v6,
            "Resource %s.%c%c%c%c failed to load!\r\n",
            (const char *)(this + 56),
            *(_DWORD *)(this + 48),
            *(int *)(this + 48) >> 8,
            *(int *)(this + 48) >> 16,
            *(int *)(this + 48) >> 24);
        return sub_62FDE0(v6, v4);
      }
    }
  }
  return result;
}


//======================================================================
// sub_61E400
// entry 0061e400  size 235  status ok
//======================================================================

int __thiscall sub_61E400(void *this)
{
  int i; // [esp+Ch] [ebp-10h]

  *(_DWORD *)this = &Resource::`vftable';
  operator delete(*((void **)this + 86));
  if ( *((_DWORD *)this + 79) && *((_BYTE *)this + 340) )
    fclose(*((FILE **)this + 79));
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + 2 * i + 3) && *((_BYTE *)this + 8 * i + 8) )
      sub_61F320(i);
    else
      sub_61F2D0(i);
  }
  return sub_62AEF0(this);
}


//======================================================================
// sub_61E4F0
// entry 0061e4f0  size 461  status ok
//======================================================================

int __thiscall sub_61E4F0(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // [esp+0h] [ebp-21Ch]
  char Format[264]; // [esp+4h] [ebp-218h] BYREF
  char Buffer[264]; // [esp+10Ch] [ebp-110h] BYREF
  int v5; // [esp+218h] [ebp-4h]

  v2 = this;
  *(this + 83) = 0;
  result = sub_62AC30(*(this + 84) + 8);
  v5 = result;
  while ( v5 )
  {
    sub_62B220(v2[12], v2[13], v2 + 86, v2 + 83);
    if ( v2[86] )
    {
      result = (unsigned __int8)byte_795FB2;
      if ( byte_795FB2 )
      {
        sprintf(
          Buffer,
          "Resource %d.%c%c%c%c loaded from %s",
          v2[13],
          v2[12],
          (int)v2[12] >> 8,
          (int)v2[12] >> 16,
          (int)v2[12] >> 24,
          (const char *)(v5 + 25));
        result = sub_62FDE0(Buffer, (char)v2);
      }
      v5 = 0;
    }
    else
    {
      result = sub_62ACE0(v2[84] + 8);
      v5 = result;
      if ( dword_7960D8 )
      {
        result = dword_7960D8;
        if ( *(_DWORD *)(dword_7960D8 + 8) )
          result = sub_60ACC0(*(_BYTE **)(dword_7960D8 + 8));
      }
    }
  }
  if ( !v2[86] )
  {
    result = (unsigned __int8)byte_795FB2;
    if ( byte_795FB2 )
    {
      sprintf(
        Format,
        "Resource %d.%c%c%c%c not found in .prf!",
        v2[13],
        v2[12],
        (int)v2[12] >> 8,
        (int)v2[12] >> 16,
        (int)v2[12] >> 24);
      return sub_62FDE0(Format, (char)v2);
    }
  }
  return result;
}


//======================================================================
// sub_61E6C0
// entry 0061e6c0  size 1281  status ok
//======================================================================

FILE *__thiscall sub_61E6C0(int this, char *Buffer)
{
  const char *IsExtraSize; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  int v7; // [esp-14h] [ebp-130h]
  int v8; // [esp-14h] [ebp-130h]
  int v9; // [esp-10h] [ebp-12Ch]
  int v10; // [esp-10h] [ebp-12Ch]
  int v11; // [esp-10h] [ebp-12Ch]
  int v12; // [esp-10h] [ebp-12Ch]
  int v13; // [esp-Ch] [ebp-128h]
  int v14; // [esp-Ch] [ebp-128h]
  int v15; // [esp-Ch] [ebp-128h]
  int v16; // [esp-Ch] [ebp-128h]
  int v17; // [esp-8h] [ebp-124h]
  int v18; // [esp-8h] [ebp-124h]
  int v19; // [esp-8h] [ebp-124h]
  int v20; // [esp-8h] [ebp-124h]
  int v21; // [esp-4h] [ebp-120h]
  int v22; // [esp-4h] [ebp-120h]
  int v23; // [esp-4h] [ebp-120h]
  int v24; // [esp-4h] [ebp-120h]
  FILE *v26; // [esp+114h] [ebp-8h]
  int i; // [esp+118h] [ebp-4h]

  v26 = 0;
  if ( *(_DWORD *)(this + 48) == 542655828 )
  {
    v26 = sub_616C20(this, Buffer, 0, 0);
    if ( v26 )
      return v26;
  }
  for ( i = 0; (&dword_796400)[i] && !v26; ++i )
  {
    if ( *(_DWORD *)(this + 336) && CMFCToolBarButton::IsExtraSize(*(CMFCToolBarButton **)(this + 336)) )
    {
      if ( *(_DWORD *)(this + 52) )
      {
        v21 = *(int *)(this + 48) >> 24;
        v17 = *(int *)(this + 48) >> 16;
        v13 = *(int *)(this + 48) >> 8;
        v9 = *(_DWORD *)(this + 48);
        v7 = *(_DWORD *)(this + 52);
        IsExtraSize = (const char *)CMFCToolBarButton::IsExtraSize(*(CMFCToolBarButton **)(this + 336));
        sprintf(Buffer, "%s%c%s%c%d.%c%c%c%c", (&dword_796400)[i], 92, IsExtraSize, 92, v7, v9, v13, v17, v21);
      }
      if ( strcmp((const char *)(this + 56), &Source) )
      {
        v22 = *(int *)(this + 48) >> 24;
        v18 = *(int *)(this + 48) >> 16;
        v14 = *(int *)(this + 48) >> 8;
        v10 = *(_DWORD *)(this + 48);
        v4 = (const char *)CMFCToolBarButton::IsExtraSize(*(CMFCToolBarButton **)(this + 336));
        sprintf(
          Buffer,
          "%s%c%s%c%s.%c%c%c%c",
          (&dword_796400)[i],
          92,
          v4,
          92,
          (const char *)(this + 56),
          v10,
          v14,
          v18,
          v22);
      }
    }
    else
    {
      if ( *(_DWORD *)(this + 52) )
        sprintf(
          Buffer,
          "%s%c%d.%c%c%c%c",
          (&dword_796400)[i],
          92,
          *(_DWORD *)(this + 52),
          *(_DWORD *)(this + 48),
          *(int *)(this + 48) >> 8,
          *(int *)(this + 48) >> 16,
          *(int *)(this + 48) >> 24);
      if ( strcmp((const char *)(this + 56), &Source) )
        sprintf(
          Buffer,
          "%s%c%s.%c%c%c%c",
          (&dword_796400)[i],
          92,
          (const char *)(this + 56),
          *(_DWORD *)(this + 48),
          *(int *)(this + 48) >> 8,
          *(int *)(this + 48) >> 16,
          *(int *)(this + 48) >> 24);
    }
    sub_5EA5B0(Buffer);
    v26 = sub_5EA9C0(Buffer, "rb");
    if ( !byte_795F94 && !v26 )
    {
      if ( *(_DWORD *)(this + 336) && CMFCToolBarButton::IsExtraSize(*(CMFCToolBarButton **)(this + 336)) )
      {
        if ( *(_DWORD *)(this + 52) )
        {
          v23 = *(int *)(this + 48) >> 24;
          v19 = *(int *)(this + 48) >> 16;
          v15 = *(int *)(this + 48) >> 8;
          v11 = *(_DWORD *)(this + 48);
          v8 = *(_DWORD *)(this + 52);
          v5 = (const char *)CMFCToolBarButton::IsExtraSize(*(CMFCToolBarButton **)(this + 336));
          sprintf(Buffer, "%s%c%s%coptional%c%d.%c%c%c%c", (&dword_796400)[i], 92, v5, 92, 92, v8, v11, v15, v19, v23);
        }
        if ( strcmp((const char *)(this + 56), &Source) )
        {
          v24 = *(int *)(this + 48) >> 24;
          v20 = *(int *)(this + 48) >> 16;
          v16 = *(int *)(this + 48) >> 8;
          v12 = *(_DWORD *)(this + 48);
          v6 = (const char *)CMFCToolBarButton::IsExtraSize(*(CMFCToolBarButton **)(this + 336));
          sprintf(
            Buffer,
            "%s%c%s%coptional%c%s.%c%c%c%c",
            (&dword_796400)[i],
            92,
            v6,
            92,
            92,
            (const char *)(this + 56),
            v12,
            v16,
            v20,
            v24);
        }
      }
      else
      {
        if ( *(_DWORD *)(this + 52) )
          sprintf(
            Buffer,
            "%s%coptional%c%d.%c%c%c%c",
            (&dword_796400)[i],
            92,
            92,
            *(_DWORD *)(this + 52),
            *(_DWORD *)(this + 48),
            *(int *)(this + 48) >> 8,
            *(int *)(this + 48) >> 16,
            *(int *)(this + 48) >> 24);
        if ( strcmp((const char *)(this + 56), &Source) )
          sprintf(
            Buffer,
            "%s%coptional%c%s.%c%c%c%c",
            (&dword_796400)[i],
            92,
            92,
            (const char *)(this + 56),
            *(_DWORD *)(this + 48),
            *(int *)(this + 48) >> 8,
            *(int *)(this + 48) >> 16,
            *(int *)(this + 48) >> 24);
      }
      sub_5EA5B0(Buffer);
      v26 = sub_5EA9C0(Buffer, "rb");
    }
  }
  return v26;
}


//======================================================================
// sub_61EBD0
// entry 0061ebd0  size 418  status ok
//======================================================================

FILE *__thiscall sub_61EBD0(int this)
{
  FILE *result; // eax
  char Format[312]; // [esp+8h] [ebp-388h] BYREF
  char Buffer[316]; // [esp+140h] [ebp-250h] BYREF
  size_t v5; // [esp+27Ch] [ebp-114h]
  char v6[264]; // [esp+280h] [ebp-110h] BYREF
  FILE *Stream; // [esp+38Ch] [ebp-4h]

  Stream = 0;
  v6[0] = 0;
  result = sub_61E6C0(this, v6);
  Stream = result;
  if ( result )
  {
    *(_DWORD *)(this + 332) = sub_5E9FD0(Stream);
    *(_DWORD *)(this + 344) = operator new(*(_DWORD *)(this + 332));
    v5 = fread(*(void **)(this + 344), 1u, *(_DWORD *)(this + 332), Stream);
    if ( v5 != *(_DWORD *)(this + 332) )
      sub_5E9F20("iNumRead == numOfBytes", "..\\scilib\\platform\\resource.cpp", 384);
    result = (FILE *)fclose(Stream);
    if ( byte_795FB2 )
    {
      sprintf(Buffer, "Resource %s loaded.  ", v6);
      return (FILE *)sub_62FDE0(Buffer, this);
    }
  }
  else if ( byte_795FB2 )
  {
    sprintf(
      Format,
      "Resource %d.%c%c%c%c not found!  ",
      *(_DWORD *)(this + 52),
      *(_DWORD *)(this + 48),
      *(int *)(this + 48) >> 8,
      *(int *)(this + 48) >> 16,
      *(int *)(this + 48) >> 24);
    return (FILE *)sub_62FDE0(Format, this);
  }
  return result;
}


//======================================================================
// sub_61EDA0
// entry 0061eda0  size 30  status ok
//======================================================================

int __thiscall sub_61EDA0(_DWORD *this)
{
  if ( this )
    return *(this + 86);
  else
    return 0;
}


//======================================================================
// sub_61EDC0
// entry 0061edc0  size 503  status ok
//======================================================================

int __thiscall sub_61EDC0(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // [esp+0h] [ebp-21Ch]
  char Format[264]; // [esp+4h] [ebp-218h] BYREF
  char Buffer[264]; // [esp+10Ch] [ebp-110h] BYREF
  int v5; // [esp+218h] [ebp-4h]

  v2 = this;
  *(this + 83) = 0;
  v5 = sub_62AC30(*(this + 84) + 8);
  *((_BYTE *)v2 + 340) = 0;
  while ( v5 )
  {
    v2[79] = sub_62B430(v2[12], v2[13], v2 + 80, v2 + 81);
    if ( v2[79] )
    {
      if ( byte_795FB2 )
      {
        sprintf(
          Buffer,
          "Resource %d.%c%c%c%c found in %s",
          v2[13],
          v2[12],
          (int)v2[12] >> 8,
          (int)v2[12] >> 16,
          (int)v2[12] >> 24,
          (const char *)(v5 + 25));
        sub_62FDE0(Buffer, (char)v2);
      }
      v5 = 0;
    }
    else
    {
      v2[79] = 0;
      v5 = sub_62ACE0(v2[84] + 8);
      if ( dword_7960D8 && *(_DWORD *)(dword_7960D8 + 8) )
        sub_60ACC0(*(_BYTE **)(dword_7960D8 + 8));
    }
  }
  result = (int)v2;
  if ( !v2[79] && byte_795FB2 )
  {
    sprintf(
      Format,
      "Resource %d.%c%c%c%c not found in .prf!",
      v2[13],
      v2[12],
      (int)v2[12] >> 8,
      (int)v2[12] >> 16,
      (int)v2[12] >> 24);
    return sub_62FDE0(Format, (char)v2);
  }
  return result;
}


//======================================================================
// sub_61EFC0
// entry 0061efc0  size 359  status ok
//======================================================================

int __thiscall sub_61EFC0(int this)
{
  int result; // eax
  char Format[312]; // [esp+4h] [ebp-380h] BYREF
  char Buffer[312]; // [esp+13Ch] [ebp-248h] BYREF
  char v5[268]; // [esp+274h] [ebp-110h] BYREF

  v5[0] = 0;
  result = (int)sub_61E6C0(this, v5);
  *(_DWORD *)(this + 316) = result;
  if ( *(_DWORD *)(this + 316) )
  {
    *(_DWORD *)(this + 332) = sub_5E9FD0(*(FILE **)(this + 316));
    *(_DWORD *)(this + 320) = 0;
    *(_DWORD *)(this + 324) = *(_DWORD *)(this + 332);
    *(_DWORD *)(this + 328) = 0;
    *(_BYTE *)(this + 340) = 1;
    result = (unsigned __int8)byte_795FB2;
    if ( byte_795FB2 )
    {
      sprintf(Buffer, "Resource %s found.  ", v5);
      return sub_62FDE0(Buffer, this);
    }
  }
  else if ( byte_795FB2 )
  {
    sprintf(
      Format,
      "Resource %d.%c%c%c%c not found!  ",
      *(_DWORD *)(this + 52),
      *(_DWORD *)(this + 48),
      *(int *)(this + 48) >> 8,
      *(int *)(this + 48) >> 16,
      *(int *)(this + 48) >> 24);
    return sub_62FDE0(Format, this);
  }
  return result;
}


//======================================================================
// sub_61F1C0
// entry 0061f1c0  size 219  status ok
//======================================================================

char __thiscall sub_61F1C0(_DWORD *this, unsigned int a2, void *Src, char a4, signed int Size, char a6, char a7)
{
  int v9; // [esp+Ch] [ebp-8h]
  void *v10; // [esp+10h] [ebp-4h]

  if ( a2 > 4 )
    return 0;
  if ( a4 )
  {
    if ( Size <= 0 )
      return 0;
    v10 = operator new(Size);
    memcpy(v10, Src, Size);
    BYTE1(v9) = 1;
  }
  else
  {
    v10 = Src;
    BYTE1(v9) = a7;
  }
  LOBYTE(v9) = a6;
  if ( *(this + 2 * a2 + 3) && *((_BYTE *)this + 8 * a2 + 8) && !(unsigned __int8)sub_61F320(a2) )
  {
    if ( a4 )
      operator delete(v10);
    return 0;
  }
  else
  {
    *(this + 2 * a2 + 2) = v9;
    *(this + 2 * a2 + 3) = v10;
    return 1;
  }
}


//======================================================================
// sub_61F2A0
// entry 0061f2a0  size 39  status ok
//======================================================================

int __thiscall sub_61F2A0(_DWORD *this, unsigned int a2)
{
  if ( a2 <= 4 )
    return *(this + 2 * a2 + 3);
  else
    return 0;
}


//======================================================================
// sub_61F2D0
// entry 0061f2d0  size 71  status ok
//======================================================================

char __thiscall sub_61F2D0(_DWORD *this, unsigned int a2)
{
  if ( a2 > 4 )
    return 0;
  if ( !*(this + 2 * a2 + 3) )
    return 0;
  memset(this + 2 * a2 + 2, 0, 8u);
  return 1;
}


//======================================================================
// sub_61F320
// entry 0061f320  size 127  status ok
//======================================================================

char __thiscall sub_61F320(_DWORD *this, unsigned int a2)
{
  if ( a2 > 4 )
    return 0;
  if ( !*(this + 2 * a2 + 3) )
    return 0;
  operator delete((void *)*(this + 2 * a2 + 3));
  return sub_61F2D0(this, a2);
}


//======================================================================
// sub_61F480
// entry 0061f480  size 458  status ok
//======================================================================

int __thiscall sub_61F480(void *this)
{
  int j; // [esp+20h] [ebp-18h]
  int k; // [esp+24h] [ebp-14h]
  int i; // [esp+28h] [ebp-10h]

  *(_DWORD *)this = &TEX::`vftable';
  for ( i = 0; i < *((_DWORD *)this + 195); ++i )
  {
    for ( j = 0; j < *(_DWORD *)(*((_DWORD *)this + 196) + 8 * i); ++j )
    {
      operator delete(*(void **)(*(_DWORD *)(*((_DWORD *)this + 196) + 8 * i + 4) + 24 * j + 16));
      for ( k = 0; k < *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 196) + 8 * i + 4) + 24 * j + 4); ++k )
        operator delete(*(void **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 196) + 8 * i + 4) + 24 * j + 20) + 4 * k));
      operator delete(*(void **)(*(_DWORD *)(*((_DWORD *)this + 196) + 8 * i + 4) + 24 * j + 20));
    }
    operator delete(*(void **)(*((_DWORD *)this + 196) + 8 * i + 4));
  }
  operator delete(*((void **)this + 196));
  if ( *((_DWORD *)this + 199) )
    operator delete(*((void **)this + 199));
  *((_DWORD *)this + 199) = 0;
  return sub_62AEF0(this);
}


//======================================================================
// sub_61F650
// entry 0061f650  size 507  status ok
//======================================================================

int __thiscall sub_61F650(int this, int a2, int a3, int a4)
{
  int result; // eax
  int k; // [esp+8h] [ebp-24h]
  char v7; // [esp+Fh] [ebp-1Dh]
  _DWORD *v8; // [esp+10h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-18h]
  int v10; // [esp+20h] [ebp-Ch]
  int j; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  if ( !*(_DWORD *)(this + 796) )
  {
    *(_DWORD *)(this + 796) = operator new(0x80000u);
    memset(*(void **)(this + 796), 0, 0x80000u);
    *(_WORD *)(this + 776) = 0;
  }
  v10 = this + 8;
  for ( i = 0; ; i += a3 )
  {
    result = i;
    if ( i >= a3 * a4 )
      break;
    for ( j = i; j < a3 + i; ++j )
    {
      v9 = *(_DWORD *)(a2 + 4 * j);
      if ( HIBYTE(v9) )
      {
        v8 = (_DWORD *)(*(_DWORD *)(this + 796)
                      + 4 * (((int)BYTE2(v9) >> 3) + 32 * ((int)BYTE1(v9) >> 2) + ((int)(unsigned __int8)v9 >> 2 << 11)));
        ++*v8;
        if ( *(unsigned __int16 *)(this + 776) < 0x100u )
        {
          v7 = 0;
          for ( k = 0; k < *(unsigned __int16 *)(this + 776); ++k )
          {
            if ( *(unsigned __int8 *)(v10 + 3 * k) == (unsigned __int8)v9
              && __PAIR64__(*(unsigned __int8 *)(v10 + 3 * k + 2), *(unsigned __int8 *)(v10 + 3 * k + 1)) == __PAIR64__(BYTE2(v9), BYTE1(v9)) )
            {
              v7 = 1;
              break;
            }
          }
          if ( !v7 )
          {
            *(_WORD *)(v10 + 3 * *(unsigned __int16 *)(this + 776)) = v9;
            *(_BYTE *)(v10 + 3 * (unsigned __int16)(*(_WORD *)(this + 776))++ + 2) = BYTE2(v9);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_61F850
// entry 0061f850  size 68  status ok
//======================================================================

int __thiscall sub_61F850(int this)
{
  int result; // eax

  result = this;
  if ( *(unsigned __int16 *)(this + 776) >= 0x100u )
  {
    result = sub_6216C0(this + 8, *(_DWORD *)(this + 796));
    *(_WORD *)(this + 776) = 256;
  }
  return result;
}


//======================================================================
// sub_61F8A0
// entry 0061f8a0  size 1899  status ok
//======================================================================

int __thiscall sub_61F8A0(int this, int a2, int a3, int a4, int a5, char a6)
{
  _DWORD *v6; // eax
  char *v7; // ecx
  int result; // eax
  void *v9; // eax
  bool v11; // [esp+Ch] [ebp-8Ch]
  unsigned __int8 *v13; // [esp+40h] [ebp-58h]
  unsigned __int8 *v14; // [esp+44h] [ebp-54h]
  void *v15; // [esp+48h] [ebp-50h]
  int v16; // [esp+4Ch] [ebp-4Ch]
  char *v17; // [esp+50h] [ebp-48h]
  char v18; // [esp+57h] [ebp-41h]
  int j; // [esp+58h] [ebp-40h]
  int m; // [esp+58h] [ebp-40h]
  int k; // [esp+5Ch] [ebp-3Ch]
  int v22; // [esp+60h] [ebp-38h] BYREF
  int v23; // [esp+64h] [ebp-34h] BYREF
  int v24; // [esp+68h] [ebp-30h]
  int v25; // [esp+6Ch] [ebp-2Ch]
  char v26; // [esp+73h] [ebp-25h]
  int v27; // [esp+74h] [ebp-24h] BYREF
  int *v28; // [esp+78h] [ebp-20h]
  int v29; // [esp+7Ch] [ebp-1Ch]
  int i; // [esp+80h] [ebp-18h]
  int n; // [esp+84h] [ebp-14h]
  int v32; // [esp+88h] [ebp-10h]
  int v33; // [esp+8Ch] [ebp-Ch] BYREF
  char v34; // [esp+93h] [ebp-5h]
  int v35; // [esp+94h] [ebp-4h]

  v29 = *(_DWORD *)(this + 784) + 8 * *(_DWORD *)(this + 780) - 8;
  v17 = (char *)operator new(24 * (*(_DWORD *)v29 + 1));
  for ( i = 0; i < *(_DWORD *)v29; ++i )
  {
    v6 = (_DWORD *)(24 * i + *(_DWORD *)(v29 + 4));
    v7 = &v17[24 * i];
    *(_DWORD *)v7 = *v6;
    *((_DWORD *)v7 + 1) = v6[1];
    *((_DWORD *)v7 + 2) = v6[2];
    *((_DWORD *)v7 + 3) = v6[3];
    *((_DWORD *)v7 + 4) = v6[4];
    *((_DWORD *)v7 + 5) = v6[5];
  }
  operator delete(*(void **)(v29 + 4));
  *(_DWORD *)(v29 + 4) = v17;
  v34 = 0;
  v26 = 0;
  for ( i = 0; i < a4 * a3; ++i )
  {
    if ( *(_BYTE *)(a2 + 4 * i) || *(_BYTE *)(a2 + 4 * i + 1) || *(_BYTE *)(a2 + 4 * i + 2) )
      v34 = 1;
    if ( *(_BYTE *)(a2 + 4 * i + 3) )
    {
      v26 = 1;
      break;
    }
  }
  if ( a5 == 4 || a5 == 128 )
  {
    v11 = v34 && !v26;
    v18 = v11;
  }
  else
  {
    v18 = 1;
  }
  if ( v18 )
  {
    if ( a5 == 4 || a5 == 128 )
    {
      for ( i = 0; i < a4 * a3; ++i )
        *(_BYTE *)(a2 + 4 * i + 3) = -1;
    }
    else
    {
      v16 = -1;
      switch ( a5 )
      {
        case 14:
          v16 = 128;
          break;
        case 15:
        case 16:
        case 64:
          v16 = 0;
          break;
        case 32:
          v16 = 255;
          break;
        default:
          break;
      }
      for ( i = 0; i < a4 * a3; ++i )
      {
        if ( *(unsigned __int8 *)(a2 + 4 * i) == v16
          && *(unsigned __int8 *)(a2 + 4 * i + 1) == v16
          && *(unsigned __int8 *)(a2 + 4 * i + 2) == v16 )
        {
          *(_BYTE *)(a2 + 4 * i + 3) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 4 * i + 3) = -1;
        }
      }
    }
  }
  v24 = 1;
  v35 = 0;
  v25 = 0;
  for ( j = 0; j < a4; ++j )
  {
    for ( k = 0; k < a3; ++k )
    {
      v24 = 1;
      v32 = *(_DWORD *)(a2 + 4 * (k + a3 * j));
      if ( k % 2 )
      {
        if ( (_BYTE)v32 || __PAIR16__(BYTE1(v32), 0) != BYTE2(v32) )
        {
          v24 = 0;
          break;
        }
      }
      else if ( (unsigned __int8)v32 != 255 || BYTE1(v32) != 255 || BYTE2(v32) != 255 )
      {
        v24 = 0;
        break;
      }
    }
    if ( v24 )
    {
      v35 = 1;
      v25 = j;
      break;
    }
  }
  if ( v35 )
  {
    for ( m = 0; ; m += v25 + 1 )
    {
      result = m;
      if ( m >= a4 )
        break;
      sub_61F8A0(a2 + 4 * a3 * m, a3, v25, a5, a6);
    }
  }
  else
  {
    if ( a6 )
    {
      sub_620650(a2, a3, a4, &v27, &v23, &v22, &v33);
    }
    else
    {
      v27 = 0;
      v23 = 0;
      v22 = 0;
      v33 = 0;
    }
    v28 = (int *)(*(_DWORD *)(v29 + 4) + 24 * *(_DWORD *)v29);
    if ( v27 == a3 || v23 == a4 || v22 == a3 || v33 == a4 )
    {
      v28[2] = 0;
      v28[3] = 0;
      *v28 = 0;
      v28[1] = 0;
      v28[5] = 0;
      v28[4] = 0;
    }
    else
    {
      v28[2] = v27;
      v28[3] = v23;
      *v28 = a3 - v27 - v22;
      v28[1] = a4 - v23 - v33;
      v28[5] = (int)operator new(4 * v28[1]);
      v28[4] = (int)operator new(4 * v28[1]);
      v15 = *(void **)(this + 796);
      if ( !v15 )
        v15 = operator new(0x80000u);
      v14 = (unsigned __int8 *)operator new(v28[1] * *v28);
      v13 = (unsigned __int8 *)operator new(v28[1] * *v28);
      memset(v15, 0, 0x80000u);
      if ( *(unsigned __int16 *)(this + 776) >= 0x100u )
        sub_622340(this + 8, *(unsigned __int16 *)(this + 776), v15, a2 + 4 * (v27 + a3 * v23), v14, v13, *v28, v28[1]);
      else
        sub_622150(this + 8, *(unsigned __int16 *)(this + 776), a2 + 4 * (v27 + a3 * v23), v14, v13, *v28, v28[1]);
      for ( n = 0; n < v28[1]; ++n )
      {
        if ( a5 == 128 || a5 == 130 || a5 == 132 || a5 == 136 )
          v9 = sub_618330(
                 (unsigned __int8 *)(a2 + 4 * (v27 + a3 * (v23 + n))),
                 *v28,
                 (unsigned int *)(v28[4] + 4 * n),
                 &v13[*v28 * n],
                 a5);
        else
          v9 = sub_618330(&v14[*v28 * n], *v28, (unsigned int *)(v28[4] + 4 * n), &v13[*v28 * n], a5);
        *(_DWORD *)(v28[5] + 4 * n) = v9;
      }
      operator delete(v14);
      operator delete(v13);
      if ( v15 != *(void **)(this + 796) )
        operator delete(v15);
    }
    result = v29;
    ++*(_DWORD *)v29;
  }
  return result;
}


//======================================================================
// sub_620050
// entry 00620050  size 129  status ok
//======================================================================

int __thiscall sub_620050(_DWORD *this, int a2, int a3)
{
  *(_DWORD *)(*(_DWORD *)(*(this + 196) + 8 * *(this + 195) - 4)
            + 24 * (*(_DWORD *)(*(this + 196) + 8 * *(this + 195) - 8) - 1)
            + 8) = a2;
  *(_DWORD *)(*(_DWORD *)(*(this + 196) + 8 * *(this + 195) - 4)
            + 24 * (*(_DWORD *)(*(this + 196) + 8 * *(this + 195) - 8) - 1)
            + 12) = a3;
  return a3;
}


//======================================================================
// sub_6200E0
// entry 006200e0  size 223  status ok
//======================================================================

int __thiscall sub_6200E0(int this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // edx
  _DWORD *v6; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v6 = operator new(8 * (*(_DWORD *)(this + 780) + 1));
  v6[2 * *(_DWORD *)(this + 780)] = 0;
  v6[2 * *(_DWORD *)(this + 780) + 1] = 0;
  for ( i = 0; i < *(_DWORD *)(this + 780); ++i )
  {
    v1 = *(_DWORD *)(this + 784);
    v2 = *(_DWORD *)(v1 + 8 * i);
    v3 = *(_DWORD *)(v1 + 8 * i + 4);
    v6[2 * i] = v2;
    v6[2 * i + 1] = v3;
  }
  operator delete(*(void **)(this + 784));
  *(_DWORD *)(this + 784) = v6;
  ++*(_DWORD *)(this + 780);
  return this;
}


//======================================================================
// sub_6201C0
// entry 006201c0  size 737  status ok
//======================================================================

int __thiscall sub_6201C0(int this, int a2)
{
  int j; // [esp+4h] [ebp-18h]
  int k; // [esp+Ch] [ebp-10h]
  __int16 v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h] BYREF
  int i; // [esp+18h] [ebp-4h]

  v7 = a2;
  sub_6204B0(&v7, 544761204);
  sub_6204B0(&v7, 825241649);
  for ( i = 0; i < 256; ++i )
  {
    sub_6204F0(&v7, this + 3 * i + 8, 1);
    sub_6204F0(&v7, this + 3 * i + 9, 1);
    sub_6204F0(&v7, this + 3 * i + 10, 1);
  }
  sub_6204D0(&v7, *(_WORD *)(this + 780));
  for ( i = 0; i < *(_DWORD *)(this + 780); ++i )
  {
    sub_6204D0(&v7, *(_WORD *)(*(_DWORD *)(this + 784) + 8 * i));
    for ( j = 0; j < *(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i); ++j )
    {
      sub_6204D0(&v7, *(_WORD *)(24 * j + *(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4)));
      sub_6204D0(&v7, *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4) + 24 * j + 4));
      sub_6204D0(&v7, 0);
      sub_6204D0(&v7, 0);
      sub_6204D0(&v7, *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4) + 24 * j + 8));
      sub_6204D0(&v7, *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4) + 24 * j + 12));
      for ( k = 0; k < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4) + 24 * j + 4); ++k )
      {
        v6 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4) + 24 * j + 16) + 4 * k);
        sub_6204D0(&v7, v6);
        sub_6204F0(
          &v7,
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 784) + 8 * i + 4) + 24 * j + 20) + 4 * k),
          v6);
      }
    }
  }
  return v7 - a2;
}


//======================================================================
// sub_6204B0
// entry 006204b0  size 28  status ok
//======================================================================

_DWORD **__cdecl sub_6204B0(_DWORD **a1, int a2)
{
  *(*a1)++ = a2;
  return a1;
}


//======================================================================
// sub_6204D0
// entry 006204d0  size 30  status ok
//======================================================================

_WORD **__cdecl sub_6204D0(_WORD **a1, __int16 a2)
{
  *(*a1)++ = a2;
  return a1;
}


//======================================================================
// sub_6204F0
// entry 006204f0  size 70  status ok
//======================================================================

int __cdecl sub_6204F0(_DWORD *a1, _BYTE *a2, int a3)
{
  int result; // eax
  int i; // [esp+0h] [ebp-4h]

  for ( i = 0; i < a3; ++i )
  {
    *(_BYTE *)(*a1)++ = *a2++;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_620540
// entry 00620540  size 262  status ok
//======================================================================

int __thiscall sub_620540(_DWORD *this)
{
  int j; // [esp+4h] [ebp-10h]
  int k; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h]

  v5 = 778;
  for ( i = 0; i < *(this + 195); ++i )
  {
    v5 += 2;
    for ( j = 0; j < *(_DWORD *)(*(this + 196) + 8 * i); ++j )
    {
      v5 += 12;
      for ( k = 0; k < *(_DWORD *)(*(_DWORD *)(*(this + 196) + 8 * i + 4) + 24 * j + 4); ++k )
        v5 += *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(this + 196) + 8 * i + 4) + 24 * j + 16) + 4 * k) + 2;
    }
  }
  return v5;
}


//======================================================================
// sub_620650
// entry 00620650  size 529  status ok
//======================================================================

int __stdcall sub_620650(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int result; // eax
  char v8; // [esp+7h] [ebp-9h]
  char v9; // [esp+7h] [ebp-9h]
  char v10; // [esp+7h] [ebp-9h]
  char v11; // [esp+7h] [ebp-9h]
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+8h] [ebp-8h]
  int ii; // [esp+8h] [ebp-8h]
  int jj; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]
  int m; // [esp+Ch] [ebp-4h]
  int n; // [esp+Ch] [ebp-4h]
  int kk; // [esp+Ch] [ebp-4h]

  *a5 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v8 = 1;
    for ( j = 0; j < a2; ++j )
    {
      if ( *(_BYTE *)(a1 + 4 * (j + a2 * i) + 3) )
      {
        v8 = 0;
        j = a2;
      }
    }
    if ( v8 )
      *a5 = i + 1;
    else
      i = a3;
  }
  *a4 = 0;
  for ( k = 0; k < a2; ++k )
  {
    v9 = 1;
    for ( m = 0; m < a3; ++m )
    {
      if ( *(_BYTE *)(a1 + 4 * (k + a2 * m) + 3) )
      {
        v9 = 0;
        m = a3;
      }
    }
    if ( v9 )
      *a4 = k + 1;
    else
      k = a2;
  }
  *a7 = 0;
  for ( n = a3 - 1; n >= 0; --n )
  {
    v10 = 1;
    for ( ii = 0; ii < a2; ++ii )
    {
      if ( *(_BYTE *)(a1 + 4 * (ii + a2 * n) + 3) )
      {
        v10 = 0;
        ii = a2;
      }
    }
    if ( v10 )
      *a7 = a3 - n;
    else
      n = 0;
  }
  *a6 = 0;
  result = a2 - 1;
  for ( jj = a2 - 1; jj >= 0; --jj )
  {
    v11 = 1;
    for ( kk = 0; ; ++kk )
    {
      result = kk;
      if ( kk >= a3 )
        break;
      if ( *(_BYTE *)(a1 + 4 * (jj + a2 * kk) + 3) )
      {
        v11 = 0;
        kk = a3;
      }
    }
    if ( v11 )
    {
      result = a2 - jj;
      *a6 = a2 - jj;
    }
    else
    {
      jj = 0;
    }
  }
  return result;
}


//======================================================================
// sub_620870
// entry 00620870  size 55  status ok
//======================================================================

__int16 __thiscall sub_620870(_WORD *this, void *Src, unsigned __int8 a3)
{
  memcpy(this + 4, Src, 3 * a3);
  *(this + 388) = a3;
  return a3;
}


//======================================================================
// sub_6208B0
// entry 006208b0  size 287  status ok
//======================================================================

int __thiscall sub_6208B0(_WORD *this)
{
  int result; // eax
  int i; // [esp+28h] [ebp-10h]
  int j; // [esp+2Ch] [ebp-Ch]
  int k; // [esp+30h] [ebp-8h]
  int v5; // [esp+34h] [ebp-4h]

  v5 = 0;
  for ( i = 0; i < 8; ++i )
  {
    for ( j = 0; j < 8; ++j )
    {
      for ( k = 0; k < 4; ++k )
      {
        *((_BYTE *)this + 3 * v5 + 8) = (int)((double)i * 36.42857142857143);
        *((_BYTE *)this + 3 * v5 + 9) = (int)((double)j * 36.42857142857143);
        *((_BYTE *)this + 3 * v5++ + 10) = (int)((double)k * 85.0);
      }
    }
    result = i + 1;
  }
  *(this + 388) = 256;
  return result;
}


//======================================================================
// sub_6209D0
// entry 006209d0  size 1479  status ok
//======================================================================

char *__thiscall sub_6209D0(int this, int a2, int a3, int a4, int a5, unsigned __int8 a6, char a7)
{
  char *result; // eax
  _DWORD *v8; // eax
  char *v9; // ecx
  int v11; // [esp+18h] [ebp-40h]
  int v12; // [esp+1Ch] [ebp-3Ch]
  int v13; // [esp+20h] [ebp-38h]
  int j; // [esp+24h] [ebp-34h]
  int k; // [esp+24h] [ebp-34h]
  int m; // [esp+24h] [ebp-34h]
  int n; // [esp+24h] [ebp-34h]
  int ii; // [esp+24h] [ebp-34h]
  char v19; // [esp+2Bh] [ebp-2Dh]
  int v20; // [esp+2Ch] [ebp-2Ch]
  int v21; // [esp+30h] [ebp-28h] BYREF
  char v22; // [esp+35h] [ebp-23h]
  char v23; // [esp+36h] [ebp-22h]
  char v24; // [esp+37h] [ebp-21h]
  int v25; // [esp+38h] [ebp-20h] BYREF
  char *v26; // [esp+3Ch] [ebp-1Ch]
  int v27; // [esp+40h] [ebp-18h] BYREF
  unsigned __int8 *v28; // [esp+44h] [ebp-14h]
  int v29; // [esp+48h] [ebp-10h]
  int i; // [esp+4Ch] [ebp-Ch]
  char *v31; // [esp+50h] [ebp-8h]
  int v32; // [esp+54h] [ebp-4h] BYREF

  v23 = 0;
  v20 = 0;
  v24 = 0;
  v29 = a2;
  for ( i = 0; i < a4; ++i )
  {
    v28 = (unsigned __int8 *)(a2 + 4 * a3 * i);
    v23 = 1;
    for ( j = 0; j < a3; ++j )
    {
      if ( j % 2 )
      {
        if ( *v28 > 0x19u || v28[1] > 0x19u || v28[2] > 0x19u )
        {
          v23 = 0;
          j = a3;
        }
      }
      else if ( *v28 < 0xE6u || v28[1] < 0xE6u || v28[2] < 0xE6u )
      {
        v23 = 0;
        j = a3;
      }
      v28 += 4;
    }
    if ( v23 )
    {
      v24 = 1;
      sub_6209D0(v29, a3, v20, a6, 1, 1);
      v29 += 4 * a3 * (v20 + 1);
      v20 = 0;
    }
    else
    {
      ++v20;
    }
  }
  if ( v24 )
    return (char *)sub_6209D0(v29, a3, v20, a6, 1, 1);
  if ( a5 == 4 )
  {
    v22 = 0;
    v19 = 0;
    for ( i = 0; i < a4; ++i )
    {
      for ( k = 0; k < a3; ++k )
      {
        v13 = k + a3 * i;
        if ( !v19 && (*(_BYTE *)(a2 + 4 * v13) || *(_BYTE *)(a2 + 4 * v13 + 1) || *(_BYTE *)(a2 + 4 * v13 + 2)) )
          v19 = 1;
        if ( *(_BYTE *)(a2 + 4 * v13 + 3) )
        {
          v22 = 1;
          i = a4;
          k = a3;
        }
      }
    }
    if ( !v22 && v19 )
    {
      for ( i = 0; i < a4; ++i )
      {
        for ( m = 0; m < a3; ++m )
          *(_BYTE *)(a2 + 4 * (m + a3 * i) + 3) = -1;
      }
    }
  }
  else
  {
    v12 = -1;
    switch ( a5 )
    {
      case 14:
        v12 = 128;
        break;
      case 15:
      case 16:
      case 64:
        v12 = 0;
        break;
      case 32:
        v12 = 255;
        break;
      default:
        break;
    }
    for ( i = 0; i < a4; ++i )
    {
      for ( n = 0; n < a3; ++n )
      {
        v11 = n + a3 * i;
        if ( *(unsigned __int8 *)(a2 + 4 * v11) == v12
          && *(unsigned __int8 *)(a2 + 4 * v11 + 1) == v12
          && *(unsigned __int8 *)(a2 + 4 * v11 + 2) == v12 )
        {
          *(_BYTE *)(a2 + 4 * v11 + 3) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 4 * v11 + 3) = -1;
        }
      }
    }
  }
  v27 = 0;
  v21 = 0;
  v32 = 0;
  v25 = 0;
  if ( a6 )
    sub_620650(a2, a3, a4, &v27, &v25, &v21, &v32);
  v31 = (char *)operator new(20 * (*(_DWORD *)(this + 788) + 1));
  for ( i = 0; i < *(_DWORD *)(this + 788); ++i )
  {
    v8 = (_DWORD *)(20 * i + *(_DWORD *)(this + 792));
    v9 = &v31[20 * i];
    *(_DWORD *)v9 = *v8;
    *((_DWORD *)v9 + 1) = v8[1];
    *((_DWORD *)v9 + 2) = v8[2];
    *((_DWORD *)v9 + 3) = v8[3];
    *((_DWORD *)v9 + 4) = v8[4];
  }
  v26 = &v31[20 * (*(_DWORD *)(this + 788))++];
  if ( *(_DWORD *)(this + 792) )
    operator delete(*(void **)(this + 792));
  *(_DWORD *)(this + 792) = v31;
  if ( v27 == a3 || v25 == a4 || v21 == a3 || v32 == a4 )
  {
    *(_DWORD *)v26 = 0;
    *((_DWORD *)v26 + 1) = 0;
    *((_DWORD *)v26 + 2) = 0;
    *((_DWORD *)v26 + 3) = 0;
    *((_DWORD *)v26 + 4) = 0;
  }
  else
  {
    if ( a7 )
    {
      *(_DWORD *)v26 = v27;
      *((_DWORD *)v26 + 1) = v25;
    }
    else
    {
      *(_DWORD *)v26 = 0;
      *((_DWORD *)v26 + 1) = 0;
    }
    *((_DWORD *)v26 + 2) = a3 - v27 - v21;
    *((_DWORD *)v26 + 3) = a4 - v25 - v32;
    *((_DWORD *)v26 + 4) = operator new(4 * *((_DWORD *)v26 + 3) * *((_DWORD *)v26 + 2));
  }
  for ( i = 0; ; ++i )
  {
    result = v26;
    if ( i >= *((_DWORD *)v26 + 3) )
      break;
    for ( ii = 0; ii < *((_DWORD *)v26 + 2); ++ii )
      *(_DWORD *)(*((_DWORD *)v26 + 4) + 4 * (ii + *((_DWORD *)v26 + 2) * i)) = *(_DWORD *)(a2
                                                                                          + 4
                                                                                          * (v27 + ii + a3 * (v25 + i)));
  }
  return result;
}


//======================================================================
// sub_620FE0
// entry 00620fe0  size 1745  status ok
//======================================================================

int __thiscall sub_620FE0(int this, int a2, int a3)
{
  void *v3; // eax
  int result; // eax
  int m; // [esp+34h] [ebp-344h]
  int v7; // [esp+3Ch] [ebp-33Ch]
  int v8; // [esp+40h] [ebp-338h]
  int v9; // [esp+44h] [ebp-334h]
  unsigned __int8 *v10; // [esp+48h] [ebp-330h]
  int *v11; // [esp+4Ch] [ebp-32Ch]
  int v12; // [esp+4Ch] [ebp-32Ch]
  int v13; // [esp+4Ch] [ebp-32Ch]
  _BYTE Src[772]; // [esp+50h] [ebp-328h] BYREF
  int *v15; // [esp+354h] [ebp-24h]
  int v16; // [esp+358h] [ebp-20h]
  unsigned __int8 *v17; // [esp+35Ch] [ebp-1Ch]
  char v18; // [esp+363h] [ebp-15h]
  int v19; // [esp+364h] [ebp-14h]
  void *v20; // [esp+368h] [ebp-10h]
  int i; // [esp+36Ch] [ebp-Ch]
  int k; // [esp+370h] [ebp-8h]
  int j; // [esp+374h] [ebp-4h]

  v16 = *(_DWORD *)(this + 784) + 8 * *(_DWORD *)(this + 780) - 8;
  if ( *(_DWORD *)(v16 + 4) )
    operator delete(*(void **)(v16 + 4));
  *(_DWORD *)(v16 + 4) = operator new(24 * *(_DWORD *)(this + 788));
  *(_DWORD *)v16 = *(_DWORD *)(this + 788);
  for ( i = 0; i < *(_DWORD *)v16; ++i )
  {
    v11 = (int *)(*(_DWORD *)(this + 792) + 20 * i);
    v15 = (int *)(*(_DWORD *)(v16 + 4) + 24 * i);
    v15[2] = *v11;
    v15[3] = v11[1];
    *v15 = v11[2];
    v15[1] = v11[3];
    v15[5] = (int)operator new(4 * v15[1]);
    v15[4] = (int)operator new(4 * v15[1]);
  }
  v18 = 0;
  v20 = operator new(0x80000u);
  memset(v20, 0, 0x80000u);
  memset(Src, 0, 0x300u);
  v19 = 0;
  for ( i = 0; i < *(_DWORD *)v16; ++i )
  {
    v12 = *(_DWORD *)(this + 792) + 20 * i;
    v15 = (int *)(*(_DWORD *)(v16 + 4) + 24 * i);
    v9 = *v15 * v15[1];
    for ( j = 0; j < v9; j += *v15 )
    {
      v8 = *v15 + j;
      for ( k = j; k < v8; ++k )
      {
        v7 = *(_DWORD *)(*(_DWORD *)(v12 + 16) + 4 * k);
        if ( HIBYTE(v7) )
        {
          ++*((_DWORD *)v20 + 2048 * ((int)(unsigned __int8)v7 >> 2)
                            + 32 * ((int)BYTE1(v7) >> 2)
                            + ((int)BYTE2(v7) >> 3));
          if ( !v18 )
          {
            for ( m = 0; m < v19; ++m )
            {
              if ( (unsigned __int8)Src[3 * m] == (unsigned __int8)v7
                && (unsigned __int8)Src[3 * m + 1] == BYTE1(v7)
                && (unsigned __int8)Src[3 * m + 2] == BYTE2(v7) )
              {
                goto LABEL_11;
              }
            }
            if ( v19 + 1 <= 256 )
            {
              Src[3 * v19++] = v7;
              Src[3 * v19 - 2] = BYTE1(v7);
              Src[3 * v19 - 1] = BYTE2(v7);
            }
            else
            {
              ++v19;
              v18 = 1;
            }
          }
        }
LABEL_11:
        ;
      }
    }
  }
  if ( v19 >= 256 )
  {
    sub_6216C0(this + 8, v20);
    *(_WORD *)(this + 776) = 256;
    v19 = 257;
  }
  else
  {
    sub_620870((_WORD *)this, Src, v19);
    *(_WORD *)(this + 776) = v19;
  }
  for ( i = 0; i < *(_DWORD *)v16; ++i )
  {
    v13 = *(_DWORD *)(this + 792) + 20 * i;
    v15 = (int *)(*(_DWORD *)(v16 + 4) + 24 * i);
    v17 = (unsigned __int8 *)operator new(v15[1] * *v15);
    v10 = (unsigned __int8 *)operator new(v15[1] * *v15);
    memset(v20, 0, 0x80000u);
    if ( v19 > 256 )
      sub_622340(this + 8, *(unsigned __int16 *)(this + 776), v20, *(_DWORD *)(v13 + 16), v17, v10, *v15, v15[1]);
    else
      sub_622150(this + 8, *(unsigned __int16 *)(this + 776), *(_DWORD *)(v13 + 16), v17, v10, *v15, v15[1]);
    for ( j = 0; j < v15[1]; ++j )
    {
      v3 = sub_618330(&v17[*v15 * j], *v15, (unsigned int *)(v15[4] + 4 * j), &v10[*v15 * j], a2);
      *(_DWORD *)(v15[5] + 4 * j) = v3;
    }
    operator delete(v17);
    operator delete(v10);
  }
  operator delete(v20);
  for ( i = 0; i < *(_DWORD *)(this + 788); ++i )
    operator delete(*(void **)(*(_DWORD *)(this + 792) + 20 * i + 16));
  operator delete(*(void **)(this + 792));
  *(_DWORD *)(this + 792) = 0;
  *(_DWORD *)(this + 788) = 0;
  return result;
}


//======================================================================
// sub_6216C0
// entry 006216c0  size 227  status ok
//======================================================================

int __cdecl sub_6216C0(int a1, int a2)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-10h]
  _DWORD *v4; // [esp+Ch] [ebp-Ch]
  int i; // [esp+14h] [ebp-4h]

  v4 = operator new(0x2000u);
  *v4 = 0;
  v4[1] = 63;
  v4[2] = 0;
  v4[3] = 63;
  v4[4] = 0;
  v4[5] = 31;
  sub_6217B0(a2, v4);
  v3 = sub_621CE0(a2, v4, 1, 256);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= v3 )
      break;
    sub_621F90(a1, a2, &v4[8 * i], i);
  }
  return result;
}


//======================================================================
// sub_6217B0
// entry 006217b0  size 1320  status ok
//======================================================================

int __cdecl sub_6217B0(int a1, int *a2)
{
  int result; // eax
  int j; // [esp+0h] [ebp-38h]
  int n; // [esp+0h] [ebp-38h]
  int jj; // [esp+0h] [ebp-38h]
  int nn; // [esp+0h] [ebp-38h]
  int i5; // [esp+0h] [ebp-38h]
  int i8; // [esp+0h] [ebp-38h]
  int i10; // [esp+0h] [ebp-38h]
  int v14; // [esp+4h] [ebp-34h]
  int v15; // [esp+8h] [ebp-30h]
  _DWORD *v16; // [esp+Ch] [ebp-2Ch]
  _DWORD *v17; // [esp+Ch] [ebp-2Ch]
  _DWORD *v18; // [esp+Ch] [ebp-2Ch]
  _DWORD *v19; // [esp+Ch] [ebp-2Ch]
  _DWORD *v20; // [esp+Ch] [ebp-2Ch]
  _DWORD *v21; // [esp+Ch] [ebp-2Ch]
  _DWORD *v22; // [esp+Ch] [ebp-2Ch]
  int v23; // [esp+10h] [ebp-28h]
  int i; // [esp+18h] [ebp-20h]
  int m; // [esp+18h] [ebp-20h]
  int kk; // [esp+18h] [ebp-20h]
  int i1; // [esp+18h] [ebp-20h]
  int i4; // [esp+18h] [ebp-20h]
  int i7; // [esp+18h] [ebp-20h]
  int i9; // [esp+18h] [ebp-20h]
  int v31; // [esp+1Ch] [ebp-1Ch]
  int k; // [esp+20h] [ebp-18h]
  int ii; // [esp+20h] [ebp-18h]
  int mm; // [esp+20h] [ebp-18h]
  int i2; // [esp+20h] [ebp-18h]
  int i3; // [esp+20h] [ebp-18h]
  int i6; // [esp+20h] [ebp-18h]
  int i11; // [esp+20h] [ebp-18h]
  int v39; // [esp+28h] [ebp-10h]
  int v40; // [esp+2Ch] [ebp-Ch]
  int v41; // [esp+34h] [ebp-4h]

  v31 = *a2;
  v41 = a2[1];
  v39 = a2[2];
  v14 = a2[3];
  v15 = a2[4];
  v23 = a2[5];
  if ( v41 > *a2 )
  {
    for ( i = *a2; i <= v41; ++i )
    {
      for ( j = a2[2]; j <= v14; ++j )
      {
        v16 = (_DWORD *)(a1 + (i << 13) + (j << 7) + 4 * v15);
        for ( k = a2[4]; k <= v23; ++k )
        {
          if ( *v16++ )
          {
            v31 = i;
            *a2 = i;
            goto LABEL_13;
          }
        }
      }
    }
  }
LABEL_13:
  if ( v41 > v31 )
  {
    for ( m = v41; m >= v31; --m )
    {
      for ( n = v39; n <= v14; ++n )
      {
        v17 = (_DWORD *)(a1 + (m << 13) + (n << 7) + 4 * v15);
        for ( ii = v15; ii <= v23; ++ii )
        {
          if ( *v17++ )
          {
            v41 = m;
            a2[1] = m;
            goto LABEL_25;
          }
        }
      }
    }
  }
LABEL_25:
  if ( v14 > v39 )
  {
    for ( jj = v39; jj <= v14; ++jj )
    {
      for ( kk = v31; kk <= v41; ++kk )
      {
        v18 = (_DWORD *)(a1 + (kk << 13) + (jj << 7) + 4 * v15);
        for ( mm = v15; mm <= v23; ++mm )
        {
          if ( *v18++ )
          {
            v39 = jj;
            a2[2] = jj;
            goto LABEL_37;
          }
        }
      }
    }
  }
LABEL_37:
  if ( v14 > v39 )
  {
    for ( nn = v14; nn >= v39; --nn )
    {
      for ( i1 = v31; i1 <= v41; ++i1 )
      {
        v19 = (_DWORD *)(a1 + (i1 << 13) + (nn << 7) + 4 * v15);
        for ( i2 = v15; i2 <= v23; ++i2 )
        {
          if ( *v19++ )
          {
            v14 = nn;
            a2[3] = nn;
            goto LABEL_49;
          }
        }
      }
    }
  }
LABEL_49:
  if ( v23 > v15 )
  {
    for ( i3 = v15; i3 <= v23; ++i3 )
    {
      for ( i4 = v31; i4 <= v41; ++i4 )
      {
        v20 = (_DWORD *)(a1 + (i4 << 13) + (v39 << 7) + 4 * i3);
        for ( i5 = v39; i5 <= v14; ++i5 )
        {
          if ( *v20 )
          {
            v15 = i3;
            a2[4] = i3;
            goto LABEL_61;
          }
          v20 += 32;
        }
      }
    }
  }
LABEL_61:
  if ( v23 > v15 )
  {
    for ( i6 = v23; i6 >= v15; --i6 )
    {
      for ( i7 = v31; i7 <= v41; ++i7 )
      {
        v21 = (_DWORD *)(a1 + (i7 << 13) + (v39 << 7) + 4 * i6);
        for ( i8 = v39; i8 <= v14; ++i8 )
        {
          if ( *v21 )
          {
            v23 = i6;
            a2[5] = i6;
            goto LABEL_73;
          }
          v21 += 32;
        }
      }
    }
  }
LABEL_73:
  a2[6] = 88 * (v23 - v15) * 88 * (v23 - v15)
        + 236 * (v14 - v39) * 236 * (v14 - v39)
        + 120 * (v41 - v31) * 120 * (v41 - v31);
  v40 = 0;
  result = v31;
  for ( i9 = v31; i9 <= v41; ++i9 )
  {
    result = v39;
    for ( i10 = v39; i10 <= v14; ++i10 )
    {
      result = a1 + (i9 << 13) + (i10 << 7) + 4 * v15;
      v22 = (_DWORD *)result;
      for ( i11 = v15; i11 <= v23; ++i11 )
      {
        if ( *v22 )
          ++v40;
        result = (int)++v22;
      }
    }
  }
  a2[7] = v40;
  return result;
}


//======================================================================
// sub_621CE0
// entry 00621ce0  size 476  status ok
//======================================================================

int __cdecl sub_621CE0(int a1, int a2, int a3, int a4)
{
  int v5; // [esp+4h] [ebp-20h]
  int v6; // [esp+4h] [ebp-20h]
  int v7; // [esp+4h] [ebp-20h]
  int *v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+18h] [ebp-Ch]
  int *v10; // [esp+1Ch] [ebp-8h]
  int v11; // [esp+20h] [ebp-4h]

  while ( a3 < a4 )
  {
    v8 = (int *)(2 * a3 > a4 ? sub_621F30(a2, a3) : sub_621EC0(a2, a3));
    if ( !v8 )
      break;
    v10 = (int *)(a2 + 32 * a3);
    v10[1] = v8[1];
    v10[3] = v8[3];
    v10[5] = v8[5];
    *v10 = *v8;
    v10[2] = v8[2];
    v10[4] = v8[4];
    v9 = 236 * (v8[3] - v8[2]);
    v11 = 1;
    if ( 120 * (v8[1] - *v8) > v9 )
    {
      v9 = 120 * (v8[1] - *v8);
      v11 = 0;
    }
    if ( 88 * (v8[5] - v8[4]) > v9 )
      v11 = 2;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v6 = (v8[2] + v8[3]) / 2;
        v8[3] = v6;
        v10[2] = v6 + 1;
      }
      else
      {
        v7 = (v8[4] + v8[5]) / 2;
        v8[5] = v7;
        v10[4] = v7 + 1;
      }
    }
    else
    {
      v5 = (*v8 + v8[1]) / 2;
      v8[1] = v5;
      *v10 = v5 + 1;
    }
    sub_6217B0(a1, v8);
    sub_6217B0(a1, v10);
    ++a3;
  }
  return a3;
}


//======================================================================
// sub_621EC0
// entry 00621ec0  size 105  status ok
//======================================================================

int __cdecl sub_621EC0(int a1, int a2)
{
  int v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v4 = 0;
  for ( i = 0; i < a2; ++i )
  {
    if ( *(_DWORD *)(a1 + 28) > v5 && *(int *)(a1 + 24) > 0 )
    {
      v4 = a1;
      v5 = *(_DWORD *)(a1 + 28);
    }
    a1 += 32;
  }
  return v4;
}


//======================================================================
// sub_621F30
// entry 00621f30  size 96  status ok
//======================================================================

int __cdecl sub_621F30(int a1, int a2)
{
  int v4; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v4 = 0;
  for ( i = 0; i < a2; ++i )
  {
    if ( *(_DWORD *)(a1 + 24) > v6 )
    {
      v4 = a1;
      v6 = *(_DWORD *)(a1 + 24);
    }
    a1 += 32;
  }
  return v4;
}


//======================================================================
// sub_621F90
// entry 00621f90  size 435  status ok
//======================================================================

int __cdecl sub_621F90(int a1, int a2, int *a3, int a4)
{
  int result; // eax
  int j; // [esp+0h] [ebp-3Ch]
  int *v6; // [esp+Ch] [ebp-30h]
  int i; // [esp+14h] [ebp-28h]
  int v8; // [esp+1Ch] [ebp-20h]
  int v9; // [esp+20h] [ebp-1Ch]
  int k; // [esp+24h] [ebp-18h]
  int v11; // [esp+28h] [ebp-14h]
  int v12; // [esp+30h] [ebp-Ch]
  int v13; // [esp+34h] [ebp-8h]

  v9 = 0;
  v11 = 0;
  v8 = 0;
  v13 = 0;
  for ( i = *a3; i <= a3[1]; ++i )
  {
    for ( j = a3[2]; j <= a3[3]; ++j )
    {
      v6 = (int *)(a2 + (i << 13) + (j << 7) + 4 * a3[4]);
      for ( k = a3[4]; k <= a3[5]; ++k )
      {
        v12 = *v6++;
        if ( v12 )
        {
          v9 += v12;
          v11 += v12 * (4 * i + 2);
          v8 += v12 * (4 * j + 2);
          v13 += v12 * (8 * k + 4);
        }
      }
    }
  }
  if ( v9 )
  {
    *(_BYTE *)(a1 + 3 * a4) = (v11 + (v9 >> 1)) / v9;
    *(_BYTE *)(a1 + 3 * a4 + 1) = (v8 + (v9 >> 1)) / v9;
    result = (v13 + (v9 >> 1)) / v9;
    *(_BYTE *)(a1 + 3 * a4 + 2) = result;
  }
  else
  {
    *(_BYTE *)(a1 + 3 * a4 + 2) = 0;
    *(_BYTE *)(a1 + 3 * a4 + 1) = 0;
    *(_BYTE *)(a1 + 3 * a4) = 0;
    return a1;
  }
  return result;
}


//======================================================================
// sub_622150
// entry 00622150  size 488  status ok
//======================================================================

unsigned __int8 *__cdecl sub_622150(int a1, int a2, unsigned __int8 *a3, _BYTE *a4, _BYTE *a5, int a6, int a7)
{
  unsigned __int8 *result; // eax
  unsigned __int8 *v8; // [esp+0h] [ebp-38h]
  char v9; // [esp+4h] [ebp-34h]
  int v10; // [esp+8h] [ebp-30h]
  int v11; // [esp+10h] [ebp-28h]
  int v12; // [esp+14h] [ebp-24h]
  int i; // [esp+18h] [ebp-20h]
  int k; // [esp+24h] [ebp-14h]
  int j; // [esp+2Ch] [ebp-Ch]

  v9 = 0;
  v11 = -1;
  v12 = -1;
  v10 = -1;
  result = a3;
  v8 = a3;
  for ( i = 0; i < a7; ++i )
  {
    for ( j = 0; j < a6; ++j )
    {
      if ( v8[3] )
      {
        if ( v11 == *v8 && v12 == v8[1] && v10 == v8[2] )
        {
          *a4 = v9;
          *a5 = v8[3];
        }
        else
        {
          for ( k = 0; k < a2; ++k )
          {
            if ( *(unsigned __int8 *)(a1 + 3 * k) == *v8
              && *(unsigned __int8 *)(a1 + 3 * k + 1) == v8[1]
              && *(unsigned __int8 *)(a1 + 3 * k + 2) == v8[2] )
            {
              v11 = *v8;
              v12 = v8[1];
              v10 = v8[2];
              v9 = k;
              goto LABEL_19;
            }
          }
          sub_5E9F20("false", "..\\scilib\\platform\\tex.cpp", 1390);
LABEL_19:
          *a4 = v9;
          *a5 = v8[3];
        }
      }
      else
      {
        *a4 = 0;
        *a5 = 0;
      }
      v8 += 4;
      ++a4;
      ++a5;
    }
    result = (unsigned __int8 *)(i + 1);
  }
  return result;
}


//======================================================================
// sub_622340
// entry 00622340  size 2498  status ok
//======================================================================

void __cdecl sub_622340(int a1, int a2, int a3, int a4, int a5, int a6, signed int a7, int a8)
{
  _DWORD *v8; // [esp+44h] [ebp-BCh]
  _DWORD *v9; // [esp+48h] [ebp-B8h]
  _DWORD *v10; // [esp+4Ch] [ebp-B4h]
  unsigned __int8 *v11; // [esp+50h] [ebp-B0h]
  _DWORD *v12; // [esp+54h] [ebp-ACh]
  _DWORD *v13; // [esp+58h] [ebp-A8h]
  int v14; // [esp+5Ch] [ebp-A4h]
  int v15; // [esp+60h] [ebp-A0h]
  int v16; // [esp+6Ch] [ebp-94h]
  _DWORD *v17; // [esp+78h] [ebp-88h]
  int v18; // [esp+80h] [ebp-80h]
  int v19; // [esp+84h] [ebp-7Ch]
  _BYTE *Src; // [esp+90h] [ebp-70h]
  _DWORD *v21; // [esp+94h] [ebp-6Ch]
  _DWORD *v22; // [esp+98h] [ebp-68h]
  _DWORD *v23; // [esp+9Ch] [ebp-64h]
  _DWORD *v24; // [esp+9Ch] [ebp-64h]
  _DWORD *v25; // [esp+9Ch] [ebp-64h]
  int i; // [esp+A0h] [ebp-60h]
  int v27; // [esp+A8h] [ebp-58h]
  _BYTE *v28; // [esp+ACh] [ebp-54h]
  _DWORD *v29; // [esp+B0h] [ebp-50h]
  int v30; // [esp+B4h] [ebp-4Ch]
  int v31; // [esp+B8h] [ebp-48h]
  BOOL v32; // [esp+BCh] [ebp-44h]
  _DWORD *v33; // [esp+C0h] [ebp-40h]
  int v34; // [esp+C4h] [ebp-3Ch]
  _DWORD *v35; // [esp+C8h] [ebp-38h]
  int v36; // [esp+CCh] [ebp-34h]
  _DWORD *v37; // [esp+DCh] [ebp-24h]
  int v38; // [esp+E0h] [ebp-20h]
  _BYTE *v39; // [esp+E4h] [ebp-1Ch]
  char *v40; // [esp+F0h] [ebp-10h]
  signed int j; // [esp+F4h] [ebp-Ch]

  v27 = sub_622D10();
  v40 = (char *)operator new(4 * a7);
  Src = operator new(a7);
  v12 = operator new(4 * a7 + 8);
  v17 = operator new(4 * a7 + 8);
  v33 = operator new(4 * a7 + 8);
  v8 = operator new(4 * a7 + 8);
  v29 = operator new(4 * a7 + 8);
  v21 = operator new(4 * a7 + 8);
  memset(v17, 0, 4 * a7 + 8);
  memset(v8, 0, 4 * a7 + 8);
  memset(v21, 0, 4 * a7 + 8);
  v32 = 0;
  for ( i = 0; i < a8; ++i )
  {
    memcpy(v40, (const void *)(a4 + 4 * a7 * i), 4 * a7);
    v11 = (unsigned __int8 *)v40;
    v28 = Src;
    v39 = (_BYTE *)(a6 + a7 * i);
    v37 = v12;
    v13 = v33;
    v35 = v29;
    v9 = v17 + 1;
    v22 = v8 + 1;
    v10 = v21 + 1;
    if ( v32 )
    {
      v36 = -1;
      v38 = -1;
      v34 = -4;
      v11 = (unsigned __int8 *)&v40[4 * a7 - 4];
      v28 = &Src[a7 - 1];
      v39 += a7 - 1;
      v37 = &v12[a7 + 1];
      v13 = &v33[a7 + 1];
      v35 = &v29[a7 + 1];
      v9 += a7;
      v22 += a7;
      v10 += a7;
      v29[a7] = 0;
      v33[a7] = 0;
      v12[a7] = 0;
    }
    else
    {
      v36 = 1;
      v38 = 1;
      v34 = 4;
      v29[1] = 0;
      v33[1] = 0;
      v12[1] = 0;
    }
    *v35 = 0;
    *v13 = 0;
    *v37 = 0;
    for ( j = 0; j < a7; ++j )
    {
      v14 = word_75F748[*(_DWORD *)(v27 + 4 * *v9) + *v11];
      v18 = word_75F748[*(_DWORD *)(v27 + 4 * *v22) + v11[1]];
      v19 = word_75F748[*(_DWORD *)(v27 + 4 * *v10) + v11[2]];
      if ( !*(_DWORD *)(a3 + 4 * ((v19 >> 3) + (v14 >> 2 << 11) + 32 * (v18 >> 2))) )
        sub_622E00(a3, v14 >> 2, v18 >> 2, v19 >> 3, a1, a2);
      v31 = *(_DWORD *)(a3 + 4 * ((v19 >> 3) + (v14 >> 2 << 11) + 32 * (v18 >> 2))) - 1;
      *v28 = v31;
      if ( !v11[3] )
        *v28 = 0;
      *v39 = v11[3];
      v15 = v14 - *(unsigned __int8 *)(a1 + 3 * v31);
      v16 = v18 - *(unsigned __int8 *)(a1 + 3 * v31 + 1);
      v30 = v19 - *(unsigned __int8 *)(a1 + 3 * v31 + 2);
      if ( v32 )
      {
        *--v9 += word_76014E[v15];
        *--v22 += word_76014E[v16];
        *--v10 += word_76014E[v30];
        *v37-- += word_760956[v15];
        *v13-- += word_760956[v16];
        *v35-- += word_760956[v30];
        *v37 += word_76115E[v15];
        *v13 += word_76115E[v16];
        *v35 += word_76115E[v30];
        *(v37 - 1) = word_761966[v15];
        *(v13 - 1) = word_761966[v16];
        *(v35 - 1) = word_761966[v30];
      }
      else
      {
        *++v9 += word_76014E[v15];
        *++v22 += word_76014E[v16];
        *++v10 += word_76014E[v30];
        *v37++ += word_760956[v15];
        *v13++ += word_760956[v16];
        *v35++ += word_760956[v30];
        *v37 += word_76115E[v15];
        *v13 += word_76115E[v16];
        *v35 += word_76115E[v30];
        v37[1] = word_761966[v15];
        v13[1] = word_761966[v16];
        v35[1] = word_761966[v30];
      }
      v28 += v36;
      v39 += v38;
      v11 += v34;
    }
    v23 = v12;
    v12 = v17;
    v17 = v23;
    v24 = v33;
    v33 = v8;
    v8 = v24;
    v25 = v29;
    v29 = v21;
    v21 = v25;
    v32 = !v32;
    memcpy((void *)(a5 + a7 * i), Src, a7);
  }
  operator delete((void *)(v27 - 1020));
  operator delete(v12);
  operator delete(v17);
  operator delete(v33);
  operator delete(v8);
  operator delete(v29);
  operator delete(v21);
  operator delete(v40);
  operator delete(Src);
}


//======================================================================
// sub_622D10
// entry 00622d10  size 233  status ok
//======================================================================

char *sub_622D10()
{
  int v1; // [esp+4h] [ebp-Ch]
  char *v2; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = (char *)operator new(0x1FF0u) + 1020;
  v1 = 0;
  for ( i = 0; i < 16; ++i )
  {
    *(_DWORD *)&v2[4 * i] = v1;
    *(_DWORD *)&v2[-4 * i] = -v1++;
  }
  while ( i < 48 )
  {
    *(_DWORD *)&v2[4 * i] = v1;
    *(_DWORD *)&v2[-4 * i++] = -v1;
    v1 += (i & 1) == 0;
  }
  while ( i <= 255 )
  {
    *(_DWORD *)&v2[4 * i] = v1;
    *(_DWORD *)&v2[-4 * i++] = -v1;
  }
  return v2;
}


//======================================================================
// sub_622E00
// entry 00622e00  size 449  status ok
//======================================================================

int __cdecl sub_622E00(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  _BYTE v7[1028]; // [esp+8h] [ebp-820h] BYREF
  int v8; // [esp+40Ch] [ebp-41Ch]
  int j; // [esp+410h] [ebp-418h]
  int i; // [esp+414h] [ebp-414h]
  int k; // [esp+418h] [ebp-410h]
  _DWORD *v12; // [esp+41Ch] [ebp-40Ch]
  _DWORD *v13; // [esp+420h] [ebp-408h]
  int v14; // [esp+424h] [ebp-404h]
  _BYTE v15[1024]; // [esp+428h] [ebp-400h] BYREF
  int v16; // [esp+834h] [ebp+Ch]
  int v17; // [esp+834h] [ebp+Ch]
  int v18; // [esp+838h] [ebp+10h]
  int v19; // [esp+838h] [ebp+10h]
  int v20; // [esp+83Ch] [ebp+14h]
  int v21; // [esp+83Ch] [ebp+14h]

  v16 = a2 >> 3;
  v18 = a3 >> 3;
  v20 = a4 >> 2;
  v8 = 32 * v18 + 2;
  v14 = sub_622FD0(32 * v16 + 2, v8, 32 * v20 + 4, v15, a5, a6);
  sub_623400(32 * v16 + 2, v8, 32 * v20 + 4, a5, v14, v15, v7);
  v17 = 8 * v16;
  v19 = 8 * v18;
  result = 4 * v20;
  v21 = 4 * v20;
  v12 = v7;
  for ( i = 0; i < 8; ++i )
  {
    for ( j = 0; j < 8; ++j )
    {
      v13 = (_DWORD *)(a1 + 4 * (v21 + ((i + v17) << 11) + 32 * (j + v19)));
      for ( k = 0; k < 4; ++k )
        *v13++ = *v12++ + 1;
      result = j + 1;
    }
  }
  return result;
}


//======================================================================
// sub_622FD0
// entry 00622fd0  size 1068  status ok
//======================================================================

int __cdecl sub_622FD0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // [esp+8h] [ebp-434h]
  int v8; // [esp+10h] [ebp-42Ch]
  int v9; // [esp+10h] [ebp-42Ch]
  int v10; // [esp+10h] [ebp-42Ch]
  _DWORD v11[257]; // [esp+14h] [ebp-428h]
  int v12; // [esp+418h] [ebp-24h]
  int i; // [esp+41Ch] [ebp-20h]
  int v14; // [esp+420h] [ebp-1Ch]
  int v15; // [esp+424h] [ebp-18h]
  int v16; // [esp+428h] [ebp-14h]
  int v17; // [esp+42Ch] [ebp-10h]
  int v18; // [esp+430h] [ebp-Ch]
  int v19; // [esp+434h] [ebp-8h]
  int v20; // [esp+438h] [ebp-4h]

  v12 = a6;
  v14 = a1 + 28;
  v7 = a2 + 28;
  v16 = (a2 + 28 + a2) >> 1;
  v15 = a3 + 24;
  v20 = 0x7FFFFFFF;
  for ( i = 0; i < v12; ++i )
  {
    v17 = *(unsigned __int8 *)(a5 + 3 * i);
    if ( v17 >= a1 )
    {
      if ( v17 <= v14 )
      {
        v19 = 0;
        if ( v17 > (a1 + 28 + a1) >> 1 )
          v8 = 30 * (v17 - a1) * 30 * (v17 - a1);
        else
          v8 = 30 * (v17 - v14) * 30 * (v17 - v14);
      }
      else
      {
        v19 = 30 * (v17 - v14) * 30 * (v17 - v14);
        v8 = 30 * (v17 - a1) * 30 * (v17 - a1);
      }
    }
    else
    {
      v19 = 30 * (v17 - a1) * 30 * (v17 - a1);
      v8 = 30 * (v17 - v14) * 30 * (v17 - v14);
    }
    v17 = *(unsigned __int8 *)(a5 + 3 * i + 1);
    if ( v17 >= a2 )
    {
      if ( v17 <= v7 )
      {
        if ( v17 > v16 )
          v9 = v8 + 59 * (v17 - a2) * 59 * (v17 - a2);
        else
          v9 = v8 + 59 * (v17 - v7) * 59 * (v17 - v7);
      }
      else
      {
        v19 += 59 * (v17 - v7) * 59 * (v17 - v7);
        v9 = v8 + 59 * (v17 - a2) * 59 * (v17 - a2);
      }
    }
    else
    {
      v19 += 59 * (v17 - a2) * 59 * (v17 - a2);
      v9 = v8 + 59 * (v17 - v7) * 59 * (v17 - v7);
    }
    v17 = *(unsigned __int8 *)(a5 + 3 * i + 2);
    if ( v17 >= a3 )
    {
      if ( v17 <= v15 )
      {
        if ( v17 > (a3 + 24 + a3) >> 1 )
          v10 = v9 + 11 * (v17 - a3) * 11 * (v17 - a3);
        else
          v10 = v9 + 11 * (v17 - v15) * 11 * (v17 - v15);
      }
      else
      {
        v19 += 11 * (v17 - v15) * 11 * (v17 - v15);
        v10 = v9 + 11 * (v17 - a3) * 11 * (v17 - a3);
      }
    }
    else
    {
      v19 += 11 * (v17 - a3) * 11 * (v17 - a3);
      v10 = v9 + 11 * (v17 - v15) * 11 * (v17 - v15);
    }
    v11[i] = v19;
    if ( v10 < v20 )
      v20 = v10;
  }
  v18 = 0;
  for ( i = 0; i < v12; ++i )
  {
    if ( v11[i] <= v20 )
      *(_DWORD *)(a4 + 4 * v18++) = i;
  }
  return v18;
}


//======================================================================
// sub_623400
// entry 00623400  size 711  status ok
//======================================================================

_BYTE *__cdecl sub_623400(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  _BYTE *result; // eax
  _DWORD *v8; // [esp+0h] [ebp-444h]
  int *v9; // [esp+0h] [ebp-444h]
  int v10; // [esp+4h] [ebp-440h]
  int v11; // [esp+4h] [ebp-440h]
  int v12; // [esp+8h] [ebp-43Ch]
  int v13; // [esp+Ch] [ebp-438h]
  int k; // [esp+10h] [ebp-434h]
  int v15; // [esp+14h] [ebp-430h]
  int v16; // [esp+18h] [ebp-42Ch]
  int j; // [esp+1Ch] [ebp-428h]
  int m; // [esp+20h] [ebp-424h]
  _DWORD *v19; // [esp+24h] [ebp-420h]
  int v20; // [esp+28h] [ebp-41Ch]
  int v21; // [esp+28h] [ebp-41Ch]
  int v22; // [esp+2Ch] [ebp-418h]
  int v23; // [esp+30h] [ebp-414h]
  _BYTE v24[1028]; // [esp+34h] [ebp-410h] BYREF
  int i; // [esp+438h] [ebp-Ch]
  int v26; // [esp+43Ch] [ebp-8h]
  int v27; // [esp+440h] [ebp-4h]

  result = v24;
  v8 = v24;
  for ( i = 255; i >= 0; --i )
  {
    *v8 = 0x7FFFFFFF;
    result = ++v8;
  }
  for ( i = 0; i < a5; ++i )
  {
    v15 = *(_DWORD *)(a6 + 4 * i);
    v26 = 30 * (a1 - *(unsigned __int8 *)(a4 + 3 * v15));
    v27 = v26 * v26;
    v20 = 59 * (a2 - *(unsigned __int8 *)(a4 + 3 * v15 + 1));
    v27 = v26 * v26 + v20 * v20;
    v10 = 11 * (a3 - *(unsigned __int8 *)(a4 + 3 * v15 + 2));
    v27 += v10 * v10;
    v26 = 240 * v26 + 14400;
    v21 = 472 * v20 + 55696;
    v11 = 176 * v10 + 7744;
    result = v24;
    v9 = (int *)v24;
    v19 = a7;
    v16 = v26;
    for ( j = 7; j >= 0; --j )
    {
      v13 = v27;
      v23 = v21;
      for ( k = 7; k >= 0; --k )
      {
        v22 = v13;
        v12 = v11;
        for ( m = 3; m >= 0; --m )
        {
          if ( v22 < *v9 )
          {
            *v9 = v22;
            *v19 = v15;
          }
          v22 += v12;
          v12 += 15488;
          ++v9;
          ++v19;
        }
        v13 += v23;
        v23 += 111392;
      }
      v27 += v16;
      v16 += 28800;
      result = (_BYTE *)(j - 1);
    }
  }
  return result;
}


//======================================================================
// sub_623700
// entry 00623700  size 312  status ok
//======================================================================

void **__thiscall sub_623700(void **this, void *a2, void *a3, void *a4, char a5)
{
  sub_62AEA0(this);
  *this = &FrameBuffer::`vftable';
  *(this + 2) = a2;
  *(this + 3) = a3;
  *(this + 6) = a4;
  *(this + 4) = (void *)((_DWORD)*(this + 6) * (_DWORD)*(this + 2) + 3 - ((int)*(this + 6) * (int)*(this + 2) - 1) % 4);
  *(this + 7) = operator new((_DWORD)*(this + 4) * (_DWORD)*(this + 3));
  memset(*(this + 7), 0, (_DWORD)*(this + 4) * (_DWORD)*(this + 3));
  if ( a5 )
  {
    *(this + 5) = *(this + 4);
    *(this + 8) = *(this + 7);
  }
  else
  {
    *(this + 5) = (void *)-(int)*(this + 4);
    *(this + 8) = (char *)*(this + 7) + (_DWORD)*(this + 4) * ((int)*(this + 3) - 1);
  }
  return this;
}


//======================================================================
// sub_623840
// entry 00623840  size 107  status ok
//======================================================================

int __thiscall sub_623840(void **this)
{
  *this = &FrameBuffer::`vftable';
  operator delete(*(this + 7));
  return sub_62AEF0(this);
}


//======================================================================
// sub_6238D0
// entry 006238d0  size 31  status ok
//======================================================================

int __thiscall sub_6238D0(_DWORD *this, int a2)
{
  return *(this + 8) + a2 * unknown_libname_847(this);
}


//======================================================================
// sub_623950
// entry 00623950  size 187  status ok
//======================================================================

_DWORD *__thiscall sub_623950(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // esi
  int v4; // esi
  int *v6; // [esp+Ch] [ebp-10h]
  int i; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  for ( i = a2[1]; ; ++i )
  {
    result = a2;
    if ( i >= a2[3] )
      break;
    v3 = sub_6238D0(this, i);
    v6 = (int *)(*a2 * unknown_libname_726(this) + v3);
    v4 = sub_6238D0(this, i);
    v9 = a2[2] * unknown_libname_726(this) + v4;
    while ( (unsigned int)v6 < v9 )
    {
      v8 = sub_617A70(*v6);
      HIBYTE(v8) = 0;
      *v6++ = sub_617B30(v8);
    }
  }
  return result;
}


//======================================================================
// sub_623AB0
// entry 00623ab0  size 376  status ok
//======================================================================

void __thiscall sub_623AB0(pairNode *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v7; // [esp+34h] [ebp-8h]
  unsigned __int8 *v8; // [esp+38h] [ebp-4h]

  if ( a2 >= 0 && a2 < ATL::COleDateTime::GetStatus(this) && a3 >= 0 && a3 < pairNode::raw_length(this) )
  {
    v5 = sub_6238D0(this, a3);
    v8 = (unsigned __int8 *)(a2 * unknown_libname_726(this) + v5);
    v7 = sub_617B30(a4);
    switch ( a5 )
    {
      case 2:
        HIBYTE(a4) = -1;
        goto LABEL_8;
      case 4:
LABEL_8:
        if ( HIBYTE(a4) )
        {
          if ( HIBYTE(a4) == 0xFF )
            *(_DWORD *)v8 = v7;
          else
            *(_DWORD *)v8 = ((unsigned __int8)*(_DWORD *)v8
                           - ((HIBYTE(a4) * ((unsigned __int8)*(_DWORD *)v8 - (unsigned __int8)v7)) >> 8))
                          | (((*(int *)v8 >> 16)
                            - ((HIBYTE(a4)
                              * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)v8) >> 16)
                               - ((int)((unsigned int)&unk_FF0000 & v7) >> 16))) >> 8)) << 16)
                          | ((((*(_DWORD *)v8 & 0xFF00) >> 8)
                            - ((HIBYTE(a4) * (((*(_DWORD *)v8 & 0xFF00) >> 8) - ((v7 & 0xFF00) >> 8))) >> 8)) << 8);
        }
        break;
      case 16:
        sub_61D520(v8, v7, HIBYTE(a4));
        break;
      case 32:
        sub_61D6A0(v8, v7, HIBYTE(a4));
        break;
      default:
        return;
    }
  }
}


//======================================================================
// sub_623C60
// entry 00623c60  size 616  status ok
//======================================================================

unsigned __int8 *__thiscall sub_623C60(pairNode *this, int a2, int a3, int a4, int a5, unsigned __int8 *a6)
{
  unsigned __int8 *result; // eax
  int v7; // esi
  int v8; // [esp+14h] [ebp-34h]
  int v9; // [esp+18h] [ebp-30h]
  int v11; // [esp+3Ch] [ebp-Ch]
  unsigned __int8 *v12; // [esp+40h] [ebp-8h]
  unsigned __int8 *v13; // [esp+44h] [ebp-4h]
  int v14; // [esp+50h] [ebp+8h]
  int v15; // [esp+50h] [ebp+8h]
  int v16; // [esp+54h] [ebp+Ch]
  int v17; // [esp+54h] [ebp+Ch]

  v14 = a2 < 0 ? 0 : a2;
  if ( ATL::COleDateTime::GetStatus(this) - 1 >= v14 )
    v9 = v14;
  else
    v9 = ATL::COleDateTime::GetStatus(this) - 1;
  v15 = v9;
  v16 = a3 < 0 ? 0 : a3;
  if ( ATL::COleDateTime::GetStatus(this) - 1 >= v16 )
    v8 = v16;
  else
    v8 = ATL::COleDateTime::GetStatus(this) - 1;
  v17 = v8;
  result = (unsigned __int8 *)v9;
  if ( v9 > v8 )
  {
    v17 = v9;
    result = (unsigned __int8 *)v8;
    v15 = v8;
  }
  if ( a4 >= 0 )
  {
    result = (unsigned __int8 *)pairNode::raw_length(this);
    if ( a4 < (int)result )
    {
      v7 = sub_6238D0(this, a4);
      v12 = (unsigned __int8 *)(v15 * unknown_libname_726(this) + v7);
      v13 = &v12[4 * (v17 - v15)];
      v11 = sub_617B30(a5);
      result = a6;
      switch ( (unsigned int)a6 )
      {
        case 2u:
          HIBYTE(a5) = -1;
          goto LABEL_14;
        case 4u:
LABEL_14:
          if ( HIBYTE(a5) )
          {
            if ( HIBYTE(a5) == 0xFF )
            {
              while ( v12 <= v13 )
              {
                result = v12;
                *(_DWORD *)v12 = v11;
                v12 += 4;
              }
            }
            else
            {
              while ( 1 )
              {
                result = v12;
                if ( v12 > v13 )
                  break;
                *(_DWORD *)v12 = ((unsigned __int8)*(_DWORD *)v12
                                - ((HIBYTE(a5) * ((unsigned __int8)*(_DWORD *)v12 - (unsigned __int8)v11)) >> 8))
                               | (((*(int *)v12 >> 16)
                                 - ((HIBYTE(a5)
                                   * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)v12) >> 16)
                                    - ((int)((unsigned int)&unk_FF0000 & v11) >> 16))) >> 8)) << 16)
                               | ((((*(_DWORD *)v12 & 0xFF00) >> 8)
                                 - ((HIBYTE(a5) * (((*(_DWORD *)v12 & 0xFF00) >> 8) - ((v11 & 0xFF00) >> 8))) >> 8)) << 8);
                v12 += 4;
              }
            }
          }
          break;
        case 0x10u:
          while ( 1 )
          {
            result = v12;
            if ( v12 > v13 )
              break;
            sub_61D520(v12, v11, HIBYTE(a5));
            v12 += 4;
          }
          break;
        case 0x20u:
          while ( v12 <= v13 )
          {
            sub_61D6A0(v12, v11, HIBYTE(a5));
            result = v12 + 4;
            v12 += 4;
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}


//======================================================================
// sub_623F00
// entry 00623f00  size 648  status ok
//======================================================================

int __thiscall sub_623F00(pairNode *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int v7; // esi
  int v8; // [esp+14h] [ebp-34h]
  int v9; // [esp+18h] [ebp-30h]
  int v11; // [esp+3Ch] [ebp-Ch]
  unsigned __int8 *v12; // [esp+40h] [ebp-8h]
  int v13; // [esp+44h] [ebp-4h]
  int v14; // [esp+54h] [ebp+Ch]
  int v15; // [esp+54h] [ebp+Ch]
  int v16; // [esp+58h] [ebp+10h]
  int v17; // [esp+58h] [ebp+10h]

  v13 = unknown_libname_847(this);
  v14 = a3 < 0 ? 0 : a3;
  if ( pairNode::raw_length(this) - 1 >= v14 )
    v9 = v14;
  else
    v9 = pairNode::raw_length(this) - 1;
  v15 = v9;
  v16 = a4 < 0 ? 0 : a4;
  if ( pairNode::raw_length(this) - 1 >= v16 )
    v8 = v16;
  else
    v8 = pairNode::raw_length(this) - 1;
  v17 = v8;
  result = v9;
  if ( v9 > v8 )
  {
    v17 = v9;
    result = v8;
    v15 = v8;
  }
  if ( a2 >= 0 )
  {
    result = ATL::COleDateTime::GetStatus(this);
    if ( a2 < result )
    {
      v7 = sub_6238D0(this, v15);
      v12 = (unsigned __int8 *)(a2 * unknown_libname_726(this) + v7);
      v11 = sub_617B30(a5);
      result = a6;
      switch ( a6 )
      {
        case 2:
          HIBYTE(a5) = -1;
          goto LABEL_14;
        case 4:
LABEL_14:
          if ( HIBYTE(a5) )
          {
            if ( HIBYTE(a5) == 0xFF )
            {
              while ( v15 <= v17 )
              {
                *(_DWORD *)v12 = v11;
                v12 += v13;
                result = ++v15;
              }
            }
            else
            {
              while ( v15 <= v17 )
              {
                *(_DWORD *)v12 = ((unsigned __int8)*(_DWORD *)v12
                                - ((HIBYTE(a5) * ((unsigned __int8)*(_DWORD *)v12 - (unsigned __int8)v11)) >> 8))
                               | (((*(int *)v12 >> 16)
                                 - ((HIBYTE(a5)
                                   * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)v12) >> 16)
                                    - ((int)((unsigned int)&unk_FF0000 & v11) >> 16))) >> 8)) << 16)
                               | ((((*(_DWORD *)v12 & 0xFF00) >> 8)
                                 - ((HIBYTE(a5) * (((*(_DWORD *)v12 & 0xFF00) >> 8) - ((v11 & 0xFF00) >> 8))) >> 8)) << 8);
                result = (int)&v12[v13];
                v12 += v13;
                ++v15;
              }
            }
          }
          break;
        case 16:
          while ( v15 <= v17 )
          {
            sub_61D520(v12, v11, HIBYTE(a5));
            result = (int)&v12[v13];
            v12 += v13;
            ++v15;
          }
          break;
        case 32:
          while ( v15 <= v17 )
          {
            sub_61D6A0(v12, v11, HIBYTE(a5));
            result = (int)&v12[v13];
            v12 += v13;
            ++v15;
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}


//======================================================================
// sub_6241C0
// entry 006241c0  size 1417  status ok
//======================================================================

void __thiscall sub_6241C0(pairNode *this, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int v7; // esi
  int v17; // [esp+50h] [ebp-20h]
  int v18; // [esp+54h] [ebp-1Ch]
  int v19; // [esp+58h] [ebp-18h]
  int v20; // [esp+5Ch] [ebp-14h]
  unsigned __int8 *v21; // [esp+60h] [ebp-10h]
  int v22; // [esp+64h] [ebp-Ch]
  int v23; // [esp+68h] [ebp-8h]
  int v24; // [esp+6Ch] [ebp-4h]
  int v25; // [esp+6Ch] [ebp-4h]
  int v26; // [esp+6Ch] [ebp-4h]
  int v27; // [esp+6Ch] [ebp-4h]
  int v28; // [esp+6Ch] [ebp-4h]
  int v29; // [esp+6Ch] [ebp-4h]
  int v30; // [esp+6Ch] [ebp-4h]
  int v31; // [esp+6Ch] [ebp-4h]

  if ( a2 == a4 && a3 == a5 )
  {
    sub_623AB0(this, a2, a3, a6, (int)a7);
  }
  else if ( a2 == a4 )
  {
    sub_623F00(this, a2, a3, a5, a6, (int)a7);
  }
  else if ( a3 == a5 )
  {
    sub_623C60(this, a2, a4, a3, a6, a7);
  }
  else
  {
    v17 = a4 - a2;
    v22 = a5 - a3;
    v18 = 0;
    v19 = 1;
    v23 = unknown_libname_847(this);
    if ( a4 - a2 < 0 )
    {
      v19 = -1;
      v17 = a2 - a4;
    }
    if ( v22 < 0 )
    {
      v23 = -v23;
      v22 = a3 - a5;
    }
    v20 = sub_617B30(a6);
    v7 = sub_6238D0(this, a3);
    v21 = (unsigned __int8 *)(a2 * unknown_libname_726(this) + v7);
    switch ( (unsigned int)a7 )
    {
      case 2u:
        HIBYTE(a6) = -1;
        goto LABEL_14;
      case 4u:
LABEL_14:
        if ( HIBYTE(a6) )
        {
          if ( HIBYTE(a6) == 0xFF )
          {
            if ( v17 <= v22 )
            {
              v25 = v22 + 1;
              while ( v25-- )
              {
                *(_DWORD *)v21 = v20;
                v18 += v17;
                if ( v18 > v22 )
                {
                  v18 -= v22;
                  v21 += 4 * v19;
                }
                v21 += v23;
              }
            }
            else
            {
              v24 = v17 + 1;
              while ( v24-- )
              {
                *(_DWORD *)v21 = v20;
                v18 += v22;
                if ( v18 > v17 )
                {
                  v18 -= v17;
                  v21 += v23;
                }
                v21 += 4 * v19;
              }
            }
          }
          else if ( v17 <= v22 )
          {
            v27 = v22 + 1;
            while ( v27-- )
            {
              *(_DWORD *)v21 = ((unsigned __int8)*(_DWORD *)v21
                              - ((HIBYTE(a6) * ((unsigned __int8)*(_DWORD *)v21 - (unsigned __int8)v20)) >> 8))
                             | (((*(int *)v21 >> 16)
                               - ((HIBYTE(a6)
                                 * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)v21) >> 16)
                                  - ((int)((unsigned int)&unk_FF0000 & v20) >> 16))) >> 8)) << 16)
                             | ((((*(_DWORD *)v21 & 0xFF00) >> 8)
                               - ((HIBYTE(a6) * (((*(_DWORD *)v21 & 0xFF00) >> 8) - ((v20 & 0xFF00) >> 8))) >> 8)) << 8);
              v18 += v17;
              if ( v18 > v22 )
              {
                v18 -= v22;
                v21 += 4 * v19;
              }
              v21 += v23;
            }
          }
          else
          {
            v26 = v17 + 1;
            while ( v26-- )
            {
              *(_DWORD *)v21 = ((unsigned __int8)*(_DWORD *)v21
                              - ((HIBYTE(a6) * ((unsigned __int8)*(_DWORD *)v21 - (unsigned __int8)v20)) >> 8))
                             | (((*(int *)v21 >> 16)
                               - ((HIBYTE(a6)
                                 * (((int)((unsigned int)&unk_FF0000 & *(_DWORD *)v21) >> 16)
                                  - ((int)((unsigned int)&unk_FF0000 & v20) >> 16))) >> 8)) << 16)
                             | ((((*(_DWORD *)v21 & 0xFF00) >> 8)
                               - ((HIBYTE(a6) * (((*(_DWORD *)v21 & 0xFF00) >> 8) - ((v20 & 0xFF00) >> 8))) >> 8)) << 8);
              v18 += v22;
              if ( v18 > v17 )
              {
                v18 -= v17;
                v21 += v23;
              }
              v21 += 4 * v19;
            }
          }
        }
        break;
      case 0x10u:
        if ( v17 <= v22 )
        {
          v29 = v22 + 1;
          while ( v29-- )
          {
            sub_61D520(v21, v20, HIBYTE(a6));
            v18 += v17;
            if ( v18 > v22 )
            {
              v18 -= v22;
              v21 += 4 * v19;
            }
            v21 += v23;
          }
        }
        else
        {
          v28 = v17 + 1;
          while ( v28-- )
          {
            sub_61D520(v21, v20, HIBYTE(a6));
            v18 += v22;
            if ( v18 > v17 )
            {
              v18 -= v17;
              v21 += v23;
            }
            v21 += 4 * v19;
          }
        }
        break;
      case 0x20u:
        if ( v17 <= v22 )
        {
          v31 = v22 + 1;
          while ( v31-- )
          {
            sub_61D6A0(v21, v20, HIBYTE(a6));
            v18 += v17;
            if ( v18 > v22 )
            {
              v18 -= v22;
              v21 += 4 * v19;
            }
            v21 += v23;
          }
        }
        else
        {
          v30 = v17 + 1;
          while ( v30-- )
          {
            sub_61D6A0(v21, v20, HIBYTE(a6));
            v18 += v22;
            if ( v18 > v17 )
            {
              v18 -= v17;
              v21 += v23;
            }
            v21 += 4 * v19;
          }
        }
        break;
      default:
        return;
    }
  }
}


//======================================================================
// sub_624780
// entry 00624780  size 60  status ok
//======================================================================

int __thiscall sub_624780(pairNode *this, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax

  while ( 1 )
  {
    result = a3;
    if ( a3 > a5 )
      break;
    sub_623C60(this, a2, a4, a3++, a6, a7);
  }
  return result;
}


//======================================================================
// sub_6247C0
// entry 006247c0  size 117  status ok
//======================================================================

int __thiscall sub_6247C0(pairNode *this, int a2, double a3, double a4)
{
  int Status; // eax
  int v6; // [esp-14h] [ebp-20h]
  int v7; // [esp-8h] [ebp-14h]
  int v8; // [esp-4h] [ebp-10h]

  v8 = (int)((double)sub_62E360(a2) * a4 - 1.0);
  v7 = (int)((double)sub_62E340(a2) * a3 - 1.0);
  v6 = pairNode::raw_length(this) - 1;
  Status = ATL::COleDateTime::GetStatus(this);
  return sub_624840(a2, 0, 0, Status - 1, v6, 0, 0, v7, v8);
}


//======================================================================
// sub_624840
// entry 00624840  size 230  status ok
//======================================================================

int __stdcall sub_624840(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int result; // eax
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+8h] [ebp-18h]
  int i; // [esp+Ch] [ebp-14h]
  __int16 v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-Ch]
  __int16 v16; // [esp+1Ch] [ebp-4h]

  v10 = abs(a9 - a7);
  v14 = abs(a5 - a3);
  v13 = 2 * (a9 - a7 > 0) - 1;
  v16 = 2 * (a5 - a3 > 0) - 1;
  result = 2 * v14 - v10;
  v11 = result;
  v15 = 2 * v14;
  for ( i = 0; i <= v10; ++i )
  {
    sub_624930(a1, a6, a8, a2, a4, a3, a7);
    while ( v11 >= 0 )
    {
      a3 += v16;
      v11 -= 2 * v10;
    }
    a7 += v13;
    v11 += v15;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_624930
// entry 00624930  size 266  status ok
//======================================================================

int __thiscall sub_624930(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result; // eax
  int v10; // [esp+4h] [ebp-20h]
  int v11; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  __int16 v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-Ch]
  __int16 v16; // [esp+20h] [ebp-4h]

  v10 = abs(a4 - a3);
  v14 = abs(a6 - a5);
  v13 = 2 * (a4 - a3 > 0) - 1;
  v16 = 2 * (a6 - a5 > 0) - 1;
  result = 2 * v14 - v10;
  v11 = result;
  v15 = 2 * v14;
  for ( i = 0; i <= v10; ++i )
  {
    *(_DWORD *)(a2[258] + a2[261] * a8 + a2[262] * a3) = *(_DWORD *)(sub_6238D0(this, a7) + *(this + 6) * a5);
    while ( v11 >= 0 )
    {
      a5 += v16;
      v11 -= 2 * v10;
    }
    a3 += v13;
    v11 += v15;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_624A70
// entry 00624a70  size 470  status ok
//======================================================================

char __cdecl sub_624A70(_DWORD *a1, int *a2, _DWORD *a3, int *a4)
{
  int v5; // [esp+0h] [ebp-40h]
  int v6; // [esp+4h] [ebp-3Ch]
  int v7; // [esp+8h] [ebp-38h]
  int v8; // [esp+Ch] [ebp-34h]
  int v9; // [esp+10h] [ebp-30h]
  int v10; // [esp+14h] [ebp-2Ch]
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+1Ch] [ebp-24h]
  _DWORD v13[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v14[4]; // [esp+30h] [ebp-10h] BYREF

  if ( sub_5EC3A0(v14, a4, a3) )
  {
    v5 = v14[0] - *a3;
    v6 = v14[1] - a3[1];
    v7 = v14[2] - a3[2];
    v8 = v14[3] - a3[3];
    *a1 += v5;
    a1[1] += v6;
    a1[2] += v7;
    a1[3] += v8;
    *a3 += v5;
    a3[1] += v6;
    a3[2] += v7;
    a3[3] += v8;
    if ( sub_5EC3A0(v13, a2, a1) )
    {
      v9 = v13[0] - *a1;
      v10 = v13[1] - a1[1];
      v11 = v13[2] - a1[2];
      v12 = v13[3] - a1[3];
      *a3 += v9;
      a3[1] += v10;
      a3[2] += v11;
      a3[3] += v12;
      *a1 += v9;
      a1[1] += v10;
      a1[2] += v11;
      a1[3] += v12;
      return 1;
    }
    else
    {
      memset(a1, 0, 0x10u);
      memset(a3, 0, 0x10u);
      return 0;
    }
  }
  else
  {
    memset(a1, 0, 0x10u);
    memset(a3, 0, 0x10u);
    return 0;
  }
}


//======================================================================
// sub_624C50
// entry 00624c50  size 457  status ok
//======================================================================

int __cdecl sub_624C50(int *a1, int *a2, int *a3)
{
  int v4; // [esp+0h] [ebp-24h]
  int v5; // [esp+4h] [ebp-20h]
  int v6; // [esp+8h] [ebp-1Ch]
  int v7; // [esp+Ch] [ebp-18h]
  int *v8; // [esp+10h] [ebp-14h]
  _DWORD v9[4]; // [esp+14h] [ebp-10h] BYREF

  if ( !sub_5EC3A0(v9, a1, a2) )
    return 0;
  v8 = a3;
  if ( a1[1] < a2[1] )
  {
    *a3 = *a1;
    a3[1] = a1[1];
    a3[2] = a1[2];
    a3[3] = a2[1];
    v8 = a3 + 4;
  }
  if ( *a1 < *a2 )
  {
    *v8 = *a1;
    if ( a1[1] >= a2[1] )
      v7 = a1[1];
    else
      v7 = a2[1];
    v8[1] = v7;
    v8[2] = *a2;
    if ( a1[3] >= a2[3] )
      v6 = a2[3];
    else
      v6 = a1[3];
    v8[3] = v6;
    v8 += 4;
  }
  if ( a1[2] > a2[2] )
  {
    *v8 = a2[2];
    if ( a1[1] >= a2[1] )
      v5 = a1[1];
    else
      v5 = a2[1];
    v8[1] = v5;
    v8[2] = a1[2];
    if ( a1[3] >= a2[3] )
      v4 = a2[3];
    else
      v4 = a1[3];
    v8[3] = v4;
    v8 += 4;
  }
  if ( a1[3] > a2[3] )
  {
    *v8 = *a1;
    v8[1] = a2[3];
    v8[2] = a1[2];
    v8[3] = a1[3];
    v8 += 4;
  }
  return ((char *)v8 - (char *)a3) >> 4;
}


//======================================================================
// sub_624E80
// entry 00624e80  size 101  status ok
//======================================================================

_DWORD *__thiscall sub_624E80(_DWORD *this)
{
  sub_62AEA0(this);
  *this = &VApplication::`vftable';
  *(this + 9) = 0;
  *(this + 6) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// sub_624F10
// entry 00624f10  size 360  status ok
//======================================================================

int __thiscall sub_624F10(_DWORD *this)
{
  int result; // eax
  char **v2; // [esp+4h] [ebp-44h]
  int v3; // [esp+8h] [ebp-40h]
  _DWORD *v4; // [esp+Ch] [ebp-3Ch]
  int v6; // [esp+14h] [ebp-34h]
  char **v7; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v8; // [esp+2Ch] [ebp-1Ch]
  int i; // [esp+34h] [ebp-14h]
  int v10; // [esp+38h] [ebp-10h]

  byte_795FB5 = 0;
  v8 = operator new(0x3FCu);
  if ( v8 )
  {
    v6 = time64(0);
    v4 = sub_6145E0(v8, v6);
  }
  else
  {
    v4 = 0;
  }
  *(this + 9) = v4;
  for ( i = 0; i < 20; ++i )
  {
    v10 = sub_62FBF0(1000000000);
    sub_614670((_DWORD *)*(this + 9), v10);
  }
  if ( operator new(0x20u) )
    v3 = sub_62A870();
  else
    v3 = 0;
  *(this + 8) = v3;
  v7 = (char **)operator new(0x4Cu);
  if ( v7 )
    v2 = sub_6033F0(v7, 0);
  else
    v2 = 0;
  *(this + 6) = v2;
  result = _ThemeHelper::IsAppThemed();
  *(this + 7) = result;
  return result;
}


//======================================================================
// sub_625080
// entry 00625080  size 126  status ok
//======================================================================

bool sub_625080()
{
  bool result; // al

  byte_795FB3 = sub_607900((int)"LookInPrfsOnly", 0);
  byte_795FB4 = sub_607900((int)"ListPrfsFound", 1);
  byte_795FB2 = sub_607900((int)"ListResources", 0);
  byte_795FB6 = sub_607900((int)"ShowDirtyRects", 0);
  result = sub_607900((int)"ShowColoredAlpha", 0);
  byte_795FB7 = result;
  return result;
}


//======================================================================
// sub_625100
// entry 00625100  size 154  status ok
//======================================================================

int __thiscall sub_625100(int this)
{
  int result; // eax

  if ( *(_DWORD *)(this + 36) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 36))(*(_DWORD *)(this + 36), 1);
  if ( *(_DWORD *)(this + 24) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 24))(*(_DWORD *)(this + 24), 1);
  result = *(_DWORD *)(this + 32);
  if ( result )
    return (***(int (__thiscall ****)(_DWORD, int))(this + 32))(*(_DWORD *)(this + 32), 1);
  return result;
}


//======================================================================
// sub_6251A0
// entry 006251a0  size 103  status ok
//======================================================================

int sub_6251A0()
{
  int result; // eax
  unsigned int v1; // [esp+0h] [ebp-14h]
  __time64_t Time; // [esp+Ch] [ebp-8h] BYREF

  result = time64(&Time);
  v1 = Time - qword_15EEE10;
  if ( (((unsigned __int64)(Time - qword_15EEE10) >> 32) & 0x80000000) == 0LL
    && (Time >= qword_15EEE10 && (unsigned __int64)(Time - qword_15EEE10) >> 32 != 0 || v1 > 0x384) )
  {
    qword_15EEE10 = Time;
    sub_62FDE0("Doing routine resource purge.\n", v1);
    return sub_625240(0);
  }
  return result;
}


//======================================================================
// sub_625210
// entry 00625210  size 43  status ok
//======================================================================

char __thiscall sub_625210(_DWORD **this)
{
  if ( *(this + 6) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 6) + 4))(*(this + 6));
  else
    return 0;
}


//======================================================================
// sub_625240
// entry 00625240  size 88  status ok
//======================================================================

int __thiscall sub_625240(_DWORD *this, int a2)
{
  int result; // eax
  char *i; // [esp+4h] [ebp-4h]

  if ( a2 == -1 )
    a2 = dword_795F9C;
  result = sub_62AC30(*(this + 8));
  for ( i = (char *)result; i && dword_7950A8 > a2; i = (char *)result )
  {
    sub_6042B0(i, a2);
    result = sub_62ACE0(*(this + 8));
  }
  return result;
}


//======================================================================
// sub_625310
// entry 00625310  size 15  status ok
//======================================================================

char __stdcall sub_625310(int a1, int a2)
{
  return 0;
}


//======================================================================
// sub_625350
// entry 00625350  size 239  status ok
//======================================================================

char __thiscall sub_625350(void *this, int a2, int *a3, int a4, int a5)
{
  _BYTE v7[16]; // [esp+4h] [ebp-18h] BYREF
  float v8; // [esp+14h] [ebp-8h] BYREF
  float v9; // [esp+18h] [ebp-4h] BYREF

  if ( !a3 )
  {
    memset(v7, 0, sizeof(v7));
    a3 = (int *)v7;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(void *, int, int *, int))(*(_DWORD *)this + 32))(this, a2, a3, a4) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(void *, int *, int))(*(_DWORD *)this + 36))(this, a3, a5) )
    return 0;
  (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v9, &v8);
  *a3 = (int)((double)*a3 / v9 + 0.5);
  a3[2] = (int)((double)a3[2] / v9 + 0.5);
  a3[1] = (int)((double)a3[1] / v8 + 0.5);
  a3[3] = (int)((double)a3[3] / v8 + 0.5);
  return 1;
}


//======================================================================
// sub_625440
// entry 00625440  size 89  status ok
//======================================================================

int __thiscall sub_625440(void *this)
{
  int v3; // [esp+4h] [ebp-Ch] BYREF
  _BYTE v4[4]; // [esp+8h] [ebp-8h] BYREF
  float v5; // [esp+Ch] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(void *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 44))(
          this,
          &v3,
          0,
          0,
          0,
          0,
          0) )
    return 0;
  (*(void (__thiscall **)(void *, float *, _BYTE *))(*(_DWORD *)this + 40))(this, &v5, v4);
  return (int)((double)v3 / v5 + 0.5);
}


//======================================================================
// sub_6254A0
// entry 006254a0  size 89  status ok
//======================================================================

int __thiscall sub_6254A0(void *this)
{
  int v3; // [esp+4h] [ebp-Ch] BYREF
  float v4; // [esp+8h] [ebp-8h] BYREF
  _BYTE v5[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(void *, _DWORD, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 44))(
          this,
          0,
          &v3,
          0,
          0,
          0,
          0) )
    return 0;
  (*(void (__thiscall **)(void *, _BYTE *, float *))(*(_DWORD *)this + 40))(this, v5, &v4);
  return (int)((double)v3 / v4 + 0.5);
}


//======================================================================
// sub_625500
// entry 00625500  size 1266  status ok
//======================================================================

char __thiscall sub_625500(void *this, _DWORD *a2, int *a3, int a4)
{
  double v4; // st7
  float v7; // [esp+50h] [ebp-14h]
  int v8; // [esp+54h] [ebp-10h] BYREF
  int v9; // [esp+58h] [ebp-Ch] BYREF
  float v10; // [esp+5Ch] [ebp-8h] BYREF
  float v11; // [esp+60h] [ebp-4h] BYREF

  switch ( a4 )
  {
    case 1:
      (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
      *a3 = (int)((double)*a3 * v11 + 0.5);
      a3[1] = (int)((double)a3[1] * v10 + 0.5);
      a3[2] = (int)((double)a3[2] * v11 + 0.5);
      a3[3] = (int)((double)a3[3] * v10 + 0.5);
      return 1;
    case 2:
      (*(void (__thiscall **)(void *, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 44))(
        this,
        &v9,
        &v8,
        0,
        0,
        0,
        0);
      v11 = (float)v9;
      v10 = (float)v8;
      if ( v10 / (double)(a2[3] - a2[1]) <= v11 / (double)(a2[2] - *a2) )
        v4 = v10 / (double)(a2[3] - a2[1]);
      else
        v4 = v11 / (double)(a2[2] - *a2);
      v7 = v4;
      a3[2] = *a3 + (int)((double)(a2[2] - *a2) * v7 + 0.5);
      a3[3] = a3[1] + (int)((double)(a2[3] - a2[1]) * v7 + 0.5);
      return 1;
    case 3:
      (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
      a3[1] = (int)((double)a3[1] * v10 + 0.5);
      a3[3] = a3[1] + (int)((double)(a2[3] - a2[1]) * v10 + 0.5);
      *a3 = (int)((double)*a3 * v11 + 0.5);
      a3[2] = *a3 + (int)((double)(a2[2] - *a2) * v11 + 0.5);
      return 1;
    case 4:
      (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
      a3[1] = (int)((double)a3[1] * v10 + 0.5);
      v11 = (double)(a3[2] - *a3) / (double)(a2[2] - *a2);
      a3[3] = a3[1] + (int)((double)(a2[3] - a2[1]) * v11 + 0.5);
      a3[3] = (int)((double)a3[3] * v10 + 0.5);
      (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
      *a3 = (int)((double)*a3 * v11 + 0.5);
      a3[2] = (int)((double)a3[2] * v11 + 0.5);
      return 1;
    case 5:
      (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
      *a3 = (int)((double)*a3 * v11 + 0.5);
      v10 = (double)(a3[3] - a3[1]) / (double)(a2[3] - a2[1]);
      a3[2] = *a3 + (int)((double)(a2[2] - *a2) * v10 + 0.5);
      a3[2] = (int)((double)a3[2] * v11 + 0.5);
      (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
      a3[1] = (int)((double)a3[1] * v10 + 0.5);
      a3[3] = (int)((double)a3[3] * v10 + 0.5);
      return 1;
    default:
      if ( a4 >= 10 )
      {
        (*(void (__thiscall **)(void *, float *, float *))(*(_DWORD *)this + 40))(this, &v11, &v10);
        *a3 = (int)((double)*a3 * v11 + 0.5);
        a3[1] = (int)((double)a3[1] * v10 + 0.5);
        v11 = (double)a4 / 100.0 * v11;
        v10 = (double)a4 / 100.0 * v10;
        a3[2] = *a3 + (int)((double)(a2[2] - *a2) * v11 + 0.5);
        a3[3] = a3[1] + (int)((double)(a2[3] - a2[1]) * v10 + 0.5);
        return 1;
      }
      else
      {
        sub_5E9F20("false", "..\\scilib\\platform\\VPrintJob.cpp", 180);
        return 0;
      }
  }
}


//======================================================================
// sub_625A10
// entry 00625a10  size 431  status ok
//======================================================================

char __thiscall sub_625A10(void *this, _DWORD *a2, char a3)
{
  int v4; // [esp+Ch] [ebp-20h]
  int v5; // [esp+10h] [ebp-1Ch]
  int v6; // [esp+14h] [ebp-18h] BYREF
  int v7; // [esp+18h] [ebp-14h] BYREF
  int v8; // [esp+1Ch] [ebp-10h] BYREF
  int v9; // [esp+20h] [ebp-Ch] BYREF
  int v10; // [esp+24h] [ebp-8h] BYREF
  int v11; // [esp+28h] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, int *, int *, int *, int *, int *, int *))(*(_DWORD *)this + 44))(
    this,
    &v11,
    &v10,
    &v7,
    &v9,
    &v8,
    &v6);
  if ( (a3 & 1) != 0 )
  {
    a2[3] -= a2[1];
    a2[1] = 0;
  }
  if ( (a3 & 2) != 0 )
  {
    a2[1] += v10 - a2[3];
    a2[3] = v10;
  }
  if ( (a3 & 4) != 0 )
  {
    a2[2] -= *a2;
    *a2 = 0;
  }
  if ( (a3 & 8) != 0 )
  {
    *a2 += v11 - a2[2];
    a2[2] = v11;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v5 = a2[3] - a2[1];
    a2[1] = (int)((double)v10 / 2.0 - (double)v5 / 2.0 + 0.5);
    a2[1] += (int)((double)(v9 - v10) / 2.0 + 0.5) - v6;
    a2[3] = v5 + a2[1];
  }
  if ( (a3 & 0x20) != 0 )
  {
    v4 = a2[2] - *a2;
    *a2 = (int)((double)v11 / 2.0 - (double)v4 / 2.0 + 0.5);
    *a2 += (int)((double)(v7 - v11) / 2.0 + 0.5) - v8;
    a2[2] = v4 + *a2;
  }
  return 1;
}


//======================================================================
// sub_625BF0
// entry 00625bf0  size 51  status ok
//======================================================================

int __thiscall sub_625BF0(int this)
{
  sub_5FF310((_DWORD *)this);
  *(_DWORD *)this = &sciPane::`vftable';
  *(_BYTE *)(this + 540) = 1;
  *(_BYTE *)(this + 541) = 0;
  return this;
}


//======================================================================
// sub_625C30
// entry 00625c30  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_625C30(_BYTE *this, char a2)
{
  *(this + 540) = a2;
  return this;
}


//======================================================================
// sub_625C50
// entry 00625c50  size 225  status ok
//======================================================================

int __thiscall sub_625C50(void *this)
{
  _BYTE *v1; // eax
  int v2; // eax
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  sub_606140((int)this);
  if ( *((_DWORD *)this + 132) )
  {
    if ( *((_BYTE *)this + 540) )
    {
      for ( i = 0; i < CRecentFileList::GetSize(*((CRecentFileList **)this + 132)); ++i )
      {
        v1 = (_BYTE *)sub_60CA40(*((_DWORD **)this + 132), i);
        sub_5F5620(v1, 0);
      }
    }
    else
    {
      for ( j = 0; j < CRecentFileList::GetSize(*((CRecentFileList **)this + 132)); ++j )
      {
        v2 = sub_60CA40(*((_DWORD **)this + 132), j);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 116))(v2, v2);
      }
    }
  }
  sub_5FF960(*((void **)this + 133), (int)this);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 108))(this, 100);
}


//======================================================================
// sub_625D40
// entry 00625d40  size 192  status ok
//======================================================================

int __thiscall sub_625D40(int this)
{
  int result; // eax
  _BYTE *v2; // eax
  int v3; // eax
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  sub_6001B0((_BYTE *)this);
  result = this;
  if ( *(_DWORD *)(this + 528) )
  {
    if ( *(_BYTE *)(this + 540) )
    {
      for ( i = 0; ; ++i )
      {
        result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 528));
        if ( i >= result )
          break;
        v2 = (_BYTE *)sub_60CA40(*(_DWORD **)(this + 528), i);
        sub_5F5620(v2, 1);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 528));
        if ( j >= result )
          break;
        v3 = sub_60CA40(*(_DWORD **)(this + 528), j);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 112))(v3, v3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_625E00
// entry 00625e00  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_625E00(_BYTE *this, char a2)
{
  *(this + 541) = a2;
  return this;
}


//======================================================================
// sub_625E20
// entry 00625e20  size 186  status ok
//======================================================================

int __thiscall sub_625E20(int this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-10h]
  int i; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v9 = a2 - *(_DWORD *)(this + 16);
  v10 = a3 - *(_DWORD *)(this + 20);
  CTypedPtrArray<CObArray,CBitmap *>::SetAtGrow(a2, a3);
  result = this;
  if ( *(_BYTE *)(this + 541) )
  {
    for ( i = 0; ; ++i )
    {
      result = CRecentFileList::GetSize(*(CRecentFileList **)(this + 528));
      if ( i >= result )
        break;
      v7 = sub_60CA40(*(_DWORD **)(this + 528), i);
      if ( v7 )
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 76))(v7, v10 + v4);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 68))(v7, v9 + v5);
      }
    }
  }
  return result;
}


//======================================================================
// sub_625F10
// entry 00625f10  size 193  status ok
//======================================================================

char *__thiscall sub_625F10(char *this)
{
  sub_5F49D0((int)this);
  *(_DWORD *)this = &sciGroupBox::`vftable';
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = -1;
  *(this + 104) = 1;
  *(this + 72) = byte_75F494;
  *(this + 73) = byte_75F495;
  *(this + 74) = byte_75F496;
  *(_WORD *)(this + 75) = word_75F498;
  *(this + 77) = byte_75F49A;
  *((_WORD *)this + 39) = word_75F49C;
  *(this + 80) = byte_75F49E;
  return this;
}


//======================================================================
// sub_625FE0
// entry 00625fe0  size 248  status ok
//======================================================================

void __thiscall sub_625FE0(int this)
{
  *(_DWORD *)this = &sciGroupBox::`vftable';
  operator delete(*(void **)(this + 96));
  if ( *(_DWORD *)(this + 92) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 92))(*(_DWORD *)(this + 92), 1);
  if ( *(_DWORD *)(this + 84) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 84))(*(_DWORD *)(this + 84), 1);
  if ( *(_DWORD *)(this + 88) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 88))(*(_DWORD *)(this + 88), 1);
  sub_5F4AD0((CNoTrackObject *)this);
}


//======================================================================
// sub_6260E0
// entry 006260e0  size 173  status ok
//======================================================================

int __thiscall sub_6260E0(
        CPaneContainer *this,
        char *Str,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        struct CPaneDivider *a16)
{
  sub_6269E0(a15);
  sub_626B40(a3);
  sub_626A10(Str);
  (*(void (__thiscall **)(CPaneContainer *, int, int))(*(_DWORD *)this + 120))(this, a4, a5);
  (*(void (__thiscall **)(CPaneContainer *, int, int))(*(_DWORD *)this + 68))(this, a6, a7);
  CPaneContainer::SetPaneDivider(this, a16);
  (*(void (__thiscall **)(CPaneContainer *))(*(_DWORD *)this + 64))(this);
  (*(void (__thiscall **)(CPaneContainer *, int))(*(_DWORD *)this + 108))(this, a8);
  sub_626800(a9, a10, a11);
  return sub_6268A0(a12, a13, a14);
}


//======================================================================
// sub_626190
// entry 00626190  size 1108  status ok
//======================================================================

int __thiscall sub_626190(int this)
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
  int v10; // esi
  int v11; // eax
  int IsFixedSize; // eax
  int result; // eax
  int v14; // [esp-4h] [ebp-4Ch]
  int v15; // [esp-4h] [ebp-4Ch]
  int v16; // [esp-4h] [ebp-4Ch]
  int v17; // [esp-4h] [ebp-4Ch]
  int v18; // [esp+8h] [ebp-40h]
  int v19; // [esp+Ch] [ebp-3Ch]
  int v20; // [esp+10h] [ebp-38h]
  int v21; // [esp+14h] [ebp-34h]
  void *v23; // [esp+1Ch] [ebp-2Ch]
  int v24; // [esp+34h] [ebp-14h]
  int v25; // [esp+38h] [ebp-10h]

  sub_5F5010((_DWORD *)this);
  if ( !*(_DWORD *)(this + 84) )
  {
    if ( operator new(0x60u) )
      v21 = sub_626C30(this);
    else
      v21 = 0;
    *(_DWORD *)(this + 84) = v21;
  }
  if ( !*(_DWORD *)(this + 88) )
  {
    if ( operator new(0x60u) )
      v20 = sub_626C30(this);
    else
      v20 = 0;
    *(_DWORD *)(this + 88) = v20;
  }
  if ( !*(_DWORD *)(this + 92) )
  {
    v23 = operator new(0x1D0u);
    if ( v23 )
    {
      sub_5EC5A0(v23);
      v19 = v1;
    }
    else
    {
      v19 = 0;
    }
    *(_DWORD *)(this + 92) = v19;
  }
  *(_DWORD *)(*(_DWORD *)(this + 84) + 4) = *(_DWORD *)(this + 4);
  *(_DWORD *)(*(_DWORD *)(this + 88) + 4) = *(_DWORD *)(this + 4);
  *(_DWORD *)(*(_DWORD *)(this + 92) + 4) = *(_DWORD *)(this + 4);
  v14 = sub_5F5590((_DWORD *)this) - 1;
  v2 = sub_5F5550((_DWORD *)this);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 84) + 120))(*(_DWORD *)(this + 84), v2 - 1, v14);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v3);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 84) + 68))(*(_DWORD *)(this + 84), v4);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 64))(*(_DWORD *)(this + 84));
  v15 = sub_5F5590((_DWORD *)this) - 1;
  v5 = sub_5F5550((_DWORD *)this);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 88) + 120))(*(_DWORD *)(this + 88), v5 - 1, v15);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v6 + 1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 68))(*(_DWORD *)(this + 88), v7 + 1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 64))(*(_DWORD *)(this + 88));
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v8 - 5);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 92) + 68))(*(_DWORD *)(this + 92), v9 + 10);
  if ( *(_DWORD *)(this + 100) != -1 )
  {
    HIBYTE(v16) = HIBYTE(this);
    LOWORD(v16) = word_75EE1C;
    BYTE2(v16) = byte_75EE1E;
    sub_5ECD00(*(_DWORD **)(this + 92), *(_DWORD *)(this + 100), -1, v16);
  }
  if ( *(_DWORD *)(this + 96) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 92) + 180))(
      *(_DWORD *)(this + 92),
      *(_DWORD *)(this + 96));
    v25 = sub_5EF050(*(_DWORD *)(this + 92));
    v24 = sub_5EF130(*(__int16 **)(this + 92));
    if ( v25 + 8 >= sub_5F5550((_DWORD *)this) - 15 )
    {
      v18 = sub_5F5550((_DWORD *)this) - 15;
      sub_5ECC60(*(_DWORD **)(this + 92), v18);
    }
    else
    {
      sub_5ECC60(*(_DWORD **)(this + 92), v25 + 8);
    }
    sub_5ECCB0(*(_DWORD **)(this + 92), v24 + 1);
  }
  v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 84))(*(_DWORD *)(this + 88));
  v11 = sub_5F5590(*(_DWORD **)(this + 92));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 92) + 80))(*(_DWORD *)(this + 92), v10 - v11 / 2);
  if ( *(_BYTE *)(this + 104) )
  {
    HIBYTE(v17) = HIBYTE(this);
    LOWORD(v17) = *(_WORD *)(this + 72);
    BYTE2(v17) = *(_BYTE *)(this + 74);
    sub_5EE920(*(_BYTE **)(this + 92), v17);
  }
  sub_5EF310(*(_DWORD **)(this + 92), 36);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 64))(*(_DWORD *)(this + 92));
  if ( *(_BYTE *)(this + 104) )
    sub_626920(*(_WORD *)(this + 72));
  sub_6267D0(*(_WORD *)(this + 75));
  sub_626870(*(_WORD *)(this + 78));
  IsFixedSize = CMediaType::IsFixedSize((CMediaType *)this);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 108))(this, IsFixedSize);
  if ( !*(_BYTE *)(this + 36) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 116))(this);
  return result;
}


//======================================================================
// sub_6265F0
// entry 006265f0  size 42  status ok
//======================================================================

int __thiscall sub_6265F0(_DWORD *this, int a2, int a3)
{
  sub_5F5110(this, a2, a3);
  return (*(int (__thiscall **)(_DWORD *))(*this + 64))(this);
}


//======================================================================
// sub_626620
// entry 00626620  size 42  status ok
//======================================================================

int __thiscall sub_626620(void *this, int a2, int a3)
{
  unknown_libname_667(a2, a3);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 64))(this);
}


//======================================================================
// sub_626650
// entry 00626650  size 133  status ok
//======================================================================

int __thiscall sub_626650(int this, int a2)
{
  int result; // eax

  result = sub_5F5300((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 84) )
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 84) + 108))(*(_DWORD *)(this + 84), a2 + 1);
  if ( *(_DWORD *)(this + 88) )
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 108))(*(_DWORD *)(this + 88), a2);
  if ( *(_DWORD *)(this + 92) )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 92) + 108))(*(_DWORD *)(this + 92), a2 + 2);
  return result;
}


//======================================================================
// sub_6266E0
// entry 006266e0  size 114  status ok
//======================================================================

int __thiscall sub_6266E0(int this)
{
  int result; // eax

  sub_5F5440((_BYTE *)this);
  result = this;
  if ( *(_DWORD *)(this + 84) )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 116))(*(_DWORD *)(this + 84));
  if ( *(_DWORD *)(this + 88) )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 116))(*(_DWORD *)(this + 88));
  if ( *(_DWORD *)(this + 92) )
  {
    if ( *(_DWORD *)(this + 96) )
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 116))(*(_DWORD *)(this + 92));
  }
  return result;
}


//======================================================================
// sub_626760
// entry 00626760  size 103  status ok
//======================================================================

int __thiscall sub_626760(CWnd *this)
{
  int result; // eax

  CWnd::EnableActiveAccessibility(this);
  result = (int)this;
  if ( *((_DWORD *)this + 21) )
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 21) + 112))(*((_DWORD *)this + 21));
  if ( *((_DWORD *)this + 22) )
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 112))(*((_DWORD *)this + 22));
  if ( *((_DWORD *)this + 23) )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 23) + 112))(*((_DWORD *)this + 23));
  return result;
}


//======================================================================
// sub_6267D0
// entry 006267d0  size 33  status ok
//======================================================================

int __stdcall sub_6267D0(int a1)
{
  return sub_626800(a1, SBYTE1(a1), SBYTE2(a1));
}


//======================================================================
// sub_626800
// entry 00626800  size 109  status ok
//======================================================================

int __thiscall sub_626800(int this, char a2, char a3, char a4)
{
  int result; // eax
  int v5; // [esp-4h] [ebp-8h]

  *(_BYTE *)(this + 75) = a2;
  *(_BYTE *)(this + 76) = a3;
  *(_BYTE *)(this + 77) = a4;
  result = this;
  if ( *(_DWORD *)(this + 84) )
  {
    v5 = this + 75;
    LOWORD(v5) = *(_WORD *)(this + 75);
    BYTE2(v5) = *(_BYTE *)(this + 77);
    sub_5F6430(*(_DWORD *)(this + 84), v5);
    result = this;
    if ( *(_BYTE *)(this + 104) )
      return sub_5F6580(*(_BYTE **)(this + 84), 0, 0, 0);
  }
  return result;
}


//======================================================================
// sub_626870
// entry 00626870  size 33  status ok
//======================================================================

int __stdcall sub_626870(int a1)
{
  return sub_6268A0(a1, SBYTE1(a1), SBYTE2(a1));
}


//======================================================================
// sub_6268A0
// entry 006268a0  size 124  status ok
//======================================================================

int __thiscall sub_6268A0(int this, char a2, char a3, char a4)
{
  int result; // eax
  int v5; // [esp-4h] [ebp-8h]
  int v6; // [esp-4h] [ebp-8h]

  *(_BYTE *)(this + 78) = a2;
  *(_BYTE *)(this + 79) = a3;
  *(_BYTE *)(this + 80) = a4;
  result = this;
  if ( *(_DWORD *)(this + 88) )
  {
    v5 = this + 78;
    LOWORD(v5) = *(_WORD *)(this + 78);
    BYTE2(v5) = *(_BYTE *)(this + 80);
    sub_5F6430(*(_DWORD *)(this + 88), v5);
    result = this;
    if ( *(_BYTE *)(this + 104) )
    {
      LOWORD(v6) = *(_WORD *)(this + 72);
      HIWORD(v6) = *(unsigned __int8 *)(this + 74);
      return sub_5F6510(*(_BYTE **)(this + 88), v6);
    }
  }
  return result;
}


//======================================================================
// sub_626920
// entry 00626920  size 33  status ok
//======================================================================

int __stdcall sub_626920(int a1)
{
  return sub_626950(a1, SBYTE1(a1), SBYTE2(a1));
}


//======================================================================
// sub_626950
// entry 00626950  size 133  status ok
//======================================================================

int __thiscall sub_626950(int this, char a2, char a3, char a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // [esp-4h] [ebp-8h]
  int v7; // [esp-4h] [ebp-8h]

  *(_BYTE *)(this + 72) = a2;
  *(_BYTE *)(this + 73) = a3;
  *(_BYTE *)(this + 74) = a4;
  result = this;
  v5 = *(unsigned __int8 *)(this + 104);
  if ( *(_BYTE *)(result + 104) )
  {
    if ( *(_DWORD *)(this + 88) )
    {
      LOWORD(v6) = *(_WORD *)(this + 72);
      HIWORD(v6) = *(unsigned __int8 *)(this + 74);
      result = sub_5F6510(*(_BYTE **)(this + 88), v6);
    }
    if ( *(_DWORD *)(this + 92) )
    {
      HIBYTE(v7) = HIBYTE(v5);
      LOWORD(v7) = *(_WORD *)(this + 72);
      BYTE2(v7) = *(_BYTE *)(this + 74);
      return sub_5EE920(*(_BYTE **)(this + 92), v7);
    }
  }
  return result;
}


//======================================================================
// sub_6269E0
// entry 006269e0  size 35  status ok
//======================================================================

int __thiscall sub_6269E0(_BYTE *this, char a2)
{
  *(this + 104) = a2;
  return (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 64))(this, this);
}


//======================================================================
// sub_626A10
// entry 00626a10  size 271  status ok
//======================================================================

void __thiscall sub_626A10(int this, char *Str)
{
  size_t v2; // eax
  int v3; // [esp+4h] [ebp-18h]
  int v5; // [esp+14h] [ebp-8h]
  int v6; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 96) )
  {
    operator delete(*(void **)(this + 96));
    *(_DWORD *)(this + 96) = 0;
  }
  if ( Str )
  {
    v2 = strlen(Str);
    *(_DWORD *)(this + 96) = operator new(v2 + 1);
    strcpy(*(char **)(this + 96), Str);
    if ( *(_DWORD *)(this + 92) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 92) + 180))(
        *(_DWORD *)(this + 92),
        *(_DWORD *)(this + 96));
      v6 = sub_5EF050(*(_DWORD *)(this + 92));
      v5 = sub_5EF130(*(__int16 **)(this + 92));
      if ( v6 + 8 >= sub_5F5550((_DWORD *)this) - 15 )
      {
        v3 = sub_5F5550((_DWORD *)this) - 15;
        sub_5ECC60(*(_DWORD **)(this + 92), v3);
      }
      else
      {
        sub_5ECC60(*(_DWORD **)(this + 92), v6 + 8);
      }
      sub_5ECCB0(*(_DWORD **)(this + 92), v5 + 1);
    }
  }
}


//======================================================================
// sub_626B40
// entry 00626b40  size 73  status ok
//======================================================================

void __thiscall sub_626B40(int this, int a2)
{
  int v2; // [esp-4h] [ebp-8h]

  *(_DWORD *)(this + 100) = a2;
  if ( *(_DWORD *)(this + 92) )
  {
    HIBYTE(v2) = HIBYTE(a2);
    LOWORD(v2) = word_75EE1C;
    BYTE2(v2) = byte_75EE1E;
    sub_5ECD00(*(_DWORD **)(this + 92), *(_DWORD *)(this + 100), -1, v2);
  }
}


//======================================================================
// sub_626C30
// entry 00626c30  size 42  status ok
//======================================================================

int __thiscall sub_626C30(int this, int a2)
{
  sub_5F6130((_BYTE *)this);
  *(_DWORD *)this = &sciGroupBoxOutline::`vftable';
  *(_DWORD *)(this + 92) = a2;
  return this;
}


//======================================================================
// sub_626C80
// entry 00626c80  size 935  status ok
//======================================================================

int __thiscall sub_626C80(int this, int *a2)
{
  int result; // eax
  struct Concurrency::details::SchedulingRing *OwningRing; // eax
  const char *v4; // eax
  int v5; // eax
  struct Concurrency::details::SchedulingRing *v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // eax
  struct Concurrency::details::SchedulingRing *v12; // eax
  struct Concurrency::details::SchedulingRing *v13; // eax
  struct Concurrency::details::SchedulingRing *v14; // eax
  struct Concurrency::details::SchedulingRing *v15; // eax
  struct Concurrency::details::SchedulingRing *v16; // eax
  int v17; // [esp+4h] [ebp-50h]
  int v18; // [esp+8h] [ebp-4Ch]
  int v19; // [esp+Ch] [ebp-48h]
  int v20; // [esp+10h] [ebp-44h]
  int v21; // [esp+14h] [ebp-40h]
  int v22; // [esp+18h] [ebp-3Ch]
  int v23; // [esp+1Ch] [ebp-38h]
  int v24; // [esp+20h] [ebp-34h]
  int v26; // [esp+28h] [ebp-2Ch]
  int v27; // [esp+2Ch] [ebp-28h]
  int v28; // [esp+30h] [ebp-24h]
  int v29; // [esp+38h] [ebp-1Ch] BYREF
  int v30; // [esp+3Ch] [ebp-18h]
  int v31; // [esp+40h] [ebp-14h]
  int v32; // [esp+44h] [ebp-10h]
  int v33; // [esp+48h] [ebp-Ch]
  int i; // [esp+4Ch] [ebp-8h]
  int v35; // [esp+50h] [ebp-4h]

  result = CMFCScanliner::channels((CMFCScanliner *)this);
  if ( !(_BYTE)result )
  {
    v26 = *(_DWORD *)(this + 28);
    v27 = *(_DWORD *)(this + 24);
    v28 = *(_DWORD *)(this + 20);
    v29 = *(_DWORD *)(this + 16);
    v30 = v28;
    v31 = v27;
    v32 = v26;
    sub_5EC3A0(&v29, &v29, a2);
    LOWORD(v33) = *(_WORD *)(this + 74);
    BYTE2(v33) = *(_BYTE *)(this + 76);
    HIBYTE(v33) = sub_5F63F0((_BYTE *)this);
    if ( *(_BYTE *)(this + 72) )
    {
      for ( i = v30; i < v32; ++i )
      {
        OwningRing = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
        sub_5F9380(*(_DWORD **)(this + 4), v29, v31 - 1, i, v33, (int)OwningRing);
      }
    }
    LOWORD(v33) = *(_WORD *)(this + 77);
    BYTE2(v33) = *(_BYTE *)(this + 79);
    HIBYTE(v33) = sub_5F63F0((_BYTE *)this);
    result = *(unsigned __int8 *)(this + 73);
    if ( *(_BYTE *)(this + 73) )
    {
      if ( unknown_libname_639(*(_DWORD *)(this + 92)) && v30 == *(_DWORD *)(this + 20) )
      {
        v24 = unknown_libname_639(*(_DWORD *)(this + 92));
        v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v24 + 184))(v24);
        if ( !strcmp(v4, &Source) )
        {
          v13 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          sub_5F9380(*(_DWORD **)(this + 4), v29, v31 - 1, *(_DWORD *)(this + 20), v33, (int)v13);
        }
        else
        {
          v23 = unknown_libname_639(*(_DWORD *)(this + 92));
          v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 76))(v23);
          if ( v5 - 3 >= v31 - 1 )
          {
            v21 = v31 - 1;
          }
          else
          {
            v22 = unknown_libname_639(*(_DWORD *)(this + 92));
            v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 76))(v22) - 3;
          }
          v35 = v21;
          if ( v29 < v21 )
          {
            v6 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
            sub_5F9380(*(_DWORD **)(this + 4), v29, v35, *(_DWORD *)(this + 20), v33, (int)v6);
          }
          v20 = unknown_libname_639(*(_DWORD *)(this + 92));
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 76))(v20);
          v8 = (_DWORD *)unknown_libname_639(*(_DWORD *)(this + 92));
          v9 = sub_5F5550(v8);
          if ( v7 + v9 + 2 >= v31 - 1 )
          {
            v18 = v31 - 1;
          }
          else
          {
            v19 = unknown_libname_639(*(_DWORD *)(this + 92));
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 76))(v19);
            v11 = (_DWORD *)unknown_libname_639(*(_DWORD *)(this + 92));
            v18 = v10 + sub_5F5550(v11) + 2;
          }
          v35 = v18;
          if ( v18 <= v29 )
            v17 = v29;
          else
            v17 = v35;
          v35 = v17;
          v12 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
          sub_5F9380(*(_DWORD **)(this + 4), v35, v31 - 1, *(_DWORD *)(this + 20), v33, (int)v12);
        }
      }
      if ( v32 - 1 == *(_DWORD *)(this + 28) - 1 )
      {
        v14 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
        sub_5F9380(*(_DWORD **)(this + 4), v29, v31 - 1, *(_DWORD *)(this + 28) - 1, v33, (int)v14);
      }
      if ( v29 == *(_DWORD *)(this + 16) )
      {
        v15 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
        sub_5F93E0(*(_DWORD **)(this + 4), *(_DWORD *)(this + 16), v30, v32 - 1, v33, (int)v15);
      }
      result = this;
      if ( v31 - 1 == *(_DWORD *)(this + 24) - 1 )
      {
        v16 = Concurrency::details::VirtualProcessor::GetOwningRing((Concurrency::details::VirtualProcessor *)this);
        return sub_5F93E0(*(_DWORD **)(this + 4), *(_DWORD *)(this + 24) - 1, v30, v32 - 1, v33, (int)v16);
      }
    }
  }
  return result;
}


//======================================================================
// sub_627090
// entry 00627090  size 107  status ok
//======================================================================

char *__thiscall sub_627090(char *this)
{
  sub_5F49D0((int)this);
  *(_DWORD *)this = &sciLine::`vftable';
  memset(this + 72, 0, 3u);
  *(this + 75) = -1;
  *((_DWORD *)this + 19) = 4;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  return this;
}


//======================================================================
// sub_627100
// entry 00627100  size 92  status ok
//======================================================================

void __thiscall sub_627100(CNoTrackObject *this)
{
  *(_DWORD *)this = &sciLine::`vftable';
  sub_627C00(this);
  sub_5F4AD0(this);
}


//======================================================================
// sub_627160
// entry 00627160  size 19  status ok
//======================================================================

_DWORD *__thiscall sub_627160(_DWORD *this)
{
  return sub_5F5010(this);
}


//======================================================================
// sub_627180
// entry 00627180  size 81  status ok
//======================================================================

void __thiscall sub_627180(CPaneContainer *this, int a2, int a3, int a4, int a5, int a6, struct CPaneDivider *a7)
{
  int v7; // eax
  int v8; // [esp-Ch] [ebp-10h]

  sub_627220(a2, a3, a4, a5);
  v8 = (*(int (__thiscall **)(CPaneContainer *))(*(_DWORD *)this + 84))(this);
  v7 = (*(int (__thiscall **)(CPaneContainer *))(*(_DWORD *)this + 76))(this);
  sub_5F50C0(this, v7, v8, a6, a7);
}


//======================================================================
// sub_627220
// entry 00627220  size 57  status ok
//======================================================================

char __stdcall sub_627220(int a1, int a2, int a3, int a4)
{
  _BYTE v5[8]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  sub_627260(v6, a1, a2);
  sub_627330(v5, a3, a4);
  return 1;
}


//======================================================================
// sub_627260
// entry 00627260  size 59  status ok
//======================================================================

_DWORD *__thiscall sub_627260(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // eax

  *(this + 20) = a3;
  *(this + 21) = a4;
  sub_627B10(this);
  v4 = *(this + 21);
  *a2 = *(this + 20);
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_6272A0
// entry 006272a0  size 55  status ok
//======================================================================

_DWORD *__thiscall sub_6272A0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // edx
  int v7; // [esp+4h] [ebp-8h] BYREF

  sub_627260(this, &v7, a3, a4);
  v4 = *(this + 21);
  *a2 = *(this + 20);
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_627330
// entry 00627330  size 59  status ok
//======================================================================

_DWORD *__thiscall sub_627330(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // eax

  *(this + 22) = a3;
  *(this + 23) = a4;
  sub_627B10(this);
  v4 = *(this + 23);
  *a2 = *(this + 22);
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_627370
// entry 00627370  size 55  status ok
//======================================================================

_DWORD *__thiscall sub_627370(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // edx
  int v7; // [esp+4h] [ebp-8h] BYREF

  sub_627330(this, &v7, a3, a4);
  v4 = *(this + 23);
  *a2 = *(this + 22);
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_627400
// entry 00627400  size 61  status ok
//======================================================================

bool __thiscall sub_627400(_DWORD *this)
{
  return *(this + 20) == *(this + 22) && !(unsigned __int8)sub_627480(this);
}


//======================================================================
// sub_627440
// entry 00627440  size 61  status ok
//======================================================================

bool __thiscall sub_627440(_DWORD *this)
{
  return *(this + 21) == *(this + 23) && !(unsigned __int8)sub_627480(this);
}


//======================================================================
// sub_627480
// entry 00627480  size 60  status ok
//======================================================================

bool __thiscall sub_627480(_DWORD *this)
{
  return *(this + 20) == *(this + 22) && *(this + 21) == *(this + 23);
}


//======================================================================
// sub_627520
// entry 00627520  size 151  status ok
//======================================================================

int __thiscall sub_627520(_BYTE *this, int a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  char v7; // [esp+7h] [ebp-1h]

  v7 = 0;
  if ( (unsigned __int8)*(this + 72) != a3 )
  {
    *(this + 72) = a3;
    v7 = 1;
  }
  if ( (unsigned __int8)*(this + 73) != a4 )
  {
    *(this + 73) = a4;
    v7 = 1;
  }
  if ( (unsigned __int8)*(this + 74) != a5 )
  {
    *(this + 74) = a5;
    v7 = 1;
  }
  if ( v7 )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
  *(_WORD *)a2 = *((_WORD *)this + 36);
  *(_BYTE *)(a2 + 2) = *(this + 74);
  return a2;
}


//======================================================================
// sub_627620
// entry 00627620  size 59  status ok
//======================================================================

char __thiscall sub_627620(_BYTE *this, unsigned __int8 a2)
{
  if ( (unsigned __int8)*(this + 75) != a2 )
  {
    *(this + 75) = a2;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
  }
  return *(this + 75);
}


//======================================================================
// sub_627660
// entry 00627660  size 17  status ok
//======================================================================

char __thiscall sub_627660(_BYTE *this)
{
  return *(this + 75);
}


//======================================================================
// sub_627680
// entry 00627680  size 55  status ok
//======================================================================

int __thiscall sub_627680(_DWORD *this, int a2)
{
  if ( *(this + 19) != a2 )
  {
    *(this + 19) = a2;
    (*(void (__thiscall **)(_DWORD *))(*this + 172))(this);
  }
  return *(this + 19);
}


//======================================================================
// sub_6276E0
// entry 006276e0  size 55  status ok
//======================================================================

_BYTE *__thiscall sub_6276E0(int this)
{
  _BYTE *result; // eax

  result = (_BYTE *)this;
  if ( *(_BYTE *)(this + 36) )
  {
    result = sub_5F5440((_BYTE *)this);
    if ( *(_DWORD *)(this + 40) )
      return (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 172))(this);
  }
  return result;
}


//======================================================================
// sub_627720
// entry 00627720  size 55  status ok
//======================================================================

void __thiscall sub_627720(int this)
{
  if ( !*(_BYTE *)(this + 36) )
  {
    CWnd::EnableActiveAccessibility((CWnd *)this);
    if ( *(_DWORD *)(this + 40) )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 172))(this);
  }
}


//======================================================================
// sub_627760
// entry 00627760  size 139  status ok
//======================================================================

int __thiscall sub_627760(int this, int a2)
{
  int result; // eax
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-14h] BYREF
  int v6[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+14h] [ebp-4h]

  result = CMFCScanliner::channels((CMFCScanliner *)this);
  if ( !(_BYTE)result )
  {
    result = sub_6277F0(a2, v5, v6);
    if ( (_BYTE)result )
    {
      LOWORD(v7) = *(_WORD *)(this + 72);
      BYTE2(v7) = *(_BYTE *)(this + 74);
      HIBYTE(v7) = sub_627660((_BYTE *)this);
      v3 = CDrawImage::UsingImageAllocator((CDrawImage *)this);
      return sub_5F9440(*(_DWORD **)(this + 4), v5[0], v5[1], v6[0], v6[1], v7, v3);
    }
  }
  return result;
}


//======================================================================
// sub_6277F0
// entry 006277f0  size 792  status ok
//======================================================================

bool __thiscall sub_6277F0(int *this, int a2, int *a3, int *a4)
{
  int v5; // edx
  int v6; // eax
  int v8; // [esp+4h] [ebp-70h]
  int v9; // [esp+8h] [ebp-6Ch]
  int v10; // [esp+Ch] [ebp-68h]
  int v11; // [esp+10h] [ebp-64h]
  int v12; // [esp+14h] [ebp-60h]
  int v13; // [esp+18h] [ebp-5Ch]
  int v14; // [esp+1Ch] [ebp-58h]
  int v15; // [esp+20h] [ebp-54h]
  int v17; // [esp+28h] [ebp-4Ch]
  int v18; // [esp+30h] [ebp-44h]
  int v19; // [esp+38h] [ebp-3Ch]
  int v20; // [esp+3Ch] [ebp-38h]
  int v21; // [esp+40h] [ebp-34h]
  int v22; // [esp+48h] [ebp-2Ch]
  double v23; // [esp+4Ch] [ebp-28h]
  int v24; // [esp+54h] [ebp-20h] BYREF
  int v25; // [esp+58h] [ebp-1Ch]
  int v26; // [esp+5Ch] [ebp-18h]
  int v27; // [esp+60h] [ebp-14h]
  double v28; // [esp+64h] [ebp-10h]
  int v29; // [esp+6Ch] [ebp-8h]
  bool v30; // [esp+73h] [ebp-1h]

  if ( !a3 || !a4 )
    return 0;
  v19 = *(this + 7);
  v20 = *(this + 6);
  v21 = *(this + 5);
  v24 = *(this + 4);
  v25 = v21;
  v26 = v20;
  v27 = v19;
  sub_627FA0(&v24, (int)&v24, a2);
  v5 = *(this + 21);
  *a3 = *(this + 20);
  a3[1] = v5;
  v6 = *(this + 23);
  *a4 = *(this + 22);
  a4[1] = v6;
  v22 = *a4 - *a3;
  v29 = a4[1] - a3[1];
  v23 = (double)v29 / (double)v22;
  v28 = (double)a3[1] - (double)*a3 * v23;
  v30 = *(this + 4) == *(this + 6);
  if ( *a3 < v24 || *a3 > v26 )
  {
    if ( v30 )
      return 0;
    if ( *a3 >= v24 )
    {
      if ( *a3 >= v26 )
        v14 = v26;
      else
        v14 = *a3;
      v15 = v14;
    }
    else
    {
      v15 = v24;
    }
    *a3 = v15;
    a3[1] = (int)((double)*a3 * v23 + v28);
  }
  if ( a3[1] < v25 || a3[1] > v27 )
  {
    v18 = a3[1];
    if ( v18 >= v25 )
    {
      if ( v18 >= v27 )
        v12 = v27;
      else
        v12 = a3[1];
      v13 = v12;
    }
    else
    {
      v13 = v25;
    }
    a3[1] = v13;
    if ( !v30 )
      *a3 = (int)(((double)a3[1] - v28) / v23);
    if ( *a3 < v24 || *a3 > v26 )
      return 0;
  }
  if ( *a4 < v24 || *a4 > v26 )
  {
    if ( v30 )
      return 0;
    if ( *a4 >= v24 )
    {
      if ( *a4 >= v26 )
        v10 = v26;
      else
        v10 = *a4;
      v11 = v10;
    }
    else
    {
      v11 = v24;
    }
    *a4 = v11;
    a4[1] = (int)((double)*a4 * v23 + v28);
  }
  if ( a4[1] >= v25 && a4[1] <= v27 )
    return *a3 || *a4 || a3[1] || a4[1];
  v17 = a4[1];
  if ( v17 >= v25 )
  {
    if ( v17 >= v27 )
      v8 = v27;
    else
      v8 = a4[1];
    v9 = v8;
  }
  else
  {
    v9 = v25;
  }
  a4[1] = v9;
  if ( !v30 )
    *a4 = (int)(((double)a4[1] - v28) / v23);
  if ( *a4 < v24 || *a4 > v26 )
    return 0;
  return *a3 || *a4 || a3[1] || a4[1];
}


//======================================================================
// sub_627B10
// entry 00627b10  size 227  status ok
//======================================================================

char __thiscall sub_627B10(int *this)
{
  struct Concurrency::details::_CancellationTokenState *Token; // eax
  int v2; // eax
  int v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]

  if ( *(this + 21) >= *(this + 23) )
    v7 = *(this + 23);
  else
    v7 = *(this + 21);
  if ( *(this + 20) >= *(this + 22) )
    v6 = *(this + 22);
  else
    v6 = *(this + 20);
  sub_5F5110(this, v6, v7);
  if ( *(this + 20) <= *(this + 22) )
    v5 = *(this + 22);
  else
    v5 = *(this + 20);
  Token = Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration *)this);
  sub_5F5530(this, v5 - (_DWORD)Token);
  if ( *(this + 21) <= *(this + 23) )
    v4 = *(this + 23);
  else
    v4 = *(this + 21);
  v2 = unknown_libname_842(this);
  sub_5F5570(this, v4 - v2);
  (*(void (__thiscall **)(int *))(*this + 172))(this);
  return 1;
}


//======================================================================
// sub_627C00
// entry 00627c00  size 117  status ok
//======================================================================

int *__thiscall sub_627C00(int *this)
{
  int v2; // [esp+4h] [ebp-20h]
  int v3; // [esp+8h] [ebp-1Ch]
  int v4; // [esp+Ch] [ebp-18h]
  int v5[4]; // [esp+14h] [ebp-10h] BYREF

  v2 = *(this + 7) + 1;
  v3 = *(this + 6) + 1;
  v4 = *(this + 5);
  v5[0] = *(this + 4);
  v5[1] = v4;
  v5[2] = v3;
  v5[3] = v2;
  return sub_5F5940(this, v5);
}


//======================================================================
// sub_627CC0
// entry 00627cc0  size 116  status ok
//======================================================================

void __thiscall sub_627CC0(void **this)
{
  *this = &sciStroke::`vftable';
  if ( *(this + 24) )
    operator delete(*(this + 24));
  sub_627100((CNoTrackObject *)this);
}


//======================================================================
// sub_627D40
// entry 00627d40  size 19  status ok
//======================================================================

_DWORD *__thiscall sub_627D40(_DWORD *this)
{
  return sub_627160(this);
}


//======================================================================
// sub_627D60
// entry 00627d60  size 128  status ok
//======================================================================

void __thiscall sub_627D60(
        int this,
        void *Src,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct CPaneDivider *a9)
{
  sub_627180((CPaneContainer *)this, a4, a5, a6, a7, a8, a9);
  if ( a3 )
  {
    *(_DWORD *)(this + 96) = operator new(4 * a3);
    memcpy(*(void **)(this + 96), Src, 4 * a3);
    *(_DWORD *)(this + 100) = a3;
  }
}


//======================================================================
// sub_627DE0
// entry 00627de0  size 398  status ok
//======================================================================

unsigned __int8 __thiscall sub_627DE0(int this, int a2)
{
  unsigned __int8 result; // al
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-1Ch]
  int v7; // [esp+4h] [ebp-1Ch]
  int v8; // [esp+8h] [ebp-18h] BYREF
  int v9; // [esp+Ch] [ebp-14h]
  int i; // [esp+10h] [ebp-10h]
  int v11[2]; // [esp+14h] [ebp-Ch] BYREF
  int j; // [esp+1Ch] [ebp-4h]

  result = CMFCScanliner::channels((CMFCScanliner *)this);
  if ( !result )
  {
    if ( sub_627400((_DWORD *)this) || sub_627440((_DWORD *)this) )
    {
      result = sub_6277F0((int *)this, a2, &v8, v11);
      if ( result )
      {
        if ( sub_627400((_DWORD *)this) )
        {
          for ( i = v9; i <= v11[1]; ++i )
          {
            v6 = v8 - *(_DWORD *)(this + 100) / 2;
            for ( j = 0; j < *(_DWORD *)(this + 100); ++j )
            {
              v3 = CDrawImage::UsingImageAllocator((CDrawImage *)this);
              sub_5F9330(*(_DWORD **)(this + 4), v6++, i, *(_DWORD *)(*(_DWORD *)(this + 96) + 4 * j), v3);
            }
          }
        }
        result = sub_627440((_DWORD *)this);
        if ( result )
        {
          for ( i = v8; i <= v11[0]; ++i )
          {
            v7 = v9 - *(_DWORD *)(this + 100) / 2;
            for ( j = 0; j < *(_DWORD *)(this + 100); ++j )
            {
              v4 = CDrawImage::UsingImageAllocator((CDrawImage *)this);
              sub_5F9330(*(_DWORD **)(this + 4), i, v7++, *(_DWORD *)(*(_DWORD *)(this + 96) + 4 * j), v4);
            }
            result = i + 1;
          }
        }
      }
    }
    else
    {
      return sub_627760(this, a2);
    }
  }
  return result;
}


//======================================================================
// sub_627FA0
// entry 00627fa0  size 246  status ok
//======================================================================

char __cdecl sub_627FA0(_DWORD *a1, int *a2, int *a3)
{
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  if ( *a2 <= *a3 )
    v7 = *a3;
  else
    v7 = *a2;
  *a1 = v7;
  if ( a2[2] >= a3[2] )
    v6 = a3[2];
  else
    v6 = a2[2];
  a1[2] = v6;
  if ( *a1 <= a1[2] )
  {
    v5 = a2[1] <= a3[1] ? a3[1] : a2[1];
    a1[1] = v5;
    v4 = a2[3] >= a3[3] ? a3[3] : a2[3];
    a1[3] = v4;
    if ( a1[1] <= a1[3] )
      return 1;
  }
  memset(a1, 0, 0x10u);
  return 0;
}


//======================================================================
// sub_6280D0
// entry 006280d0  size 325  status ok
//======================================================================

int __thiscall sub_6280D0(int this)
{
  sub_614810((_DWORD *)this);
  *(_DWORD *)this = &sciListBox::`vftable';
  sub_60C5F0((ATL::CCRTHeap *)(this + 112));
  sub_60C5F0((ATL::CCRTHeap *)(this + 128));
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 156) = 0;
  *(_DWORD *)(this + 160) = 0;
  *(_DWORD *)(this + 164) = 0;
  *(_DWORD *)(this + 168) = 0;
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 176) = 0;
  *(_DWORD *)(this + 184) = 5;
  *(_DWORD *)(this + 144) = -1;
  *(_DWORD *)(this + 148) = 0;
  *(_BYTE *)(this + 180) = 0;
  *(_BYTE *)(this + 181) = 0;
  *(_BYTE *)(this + 182) = 0;
  *(_DWORD *)(this + 188) = 0;
  *(_BYTE *)(this + 192) = 0;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  return this;
}


//======================================================================
// sub_628220
// entry 00628220  size 410  status ok
//======================================================================

void __thiscall sub_628220(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+28h] [ebp-14h]
  void (__thiscall ***v3)(_DWORD, int); // [esp+2Ch] [ebp-10h]

  *(_DWORD *)this = &sciListBox::`vftable';
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 128)) )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))sub_60CA40((_DWORD *)(this + 128), 0);
    sub_60C890((_DWORD *)(this + 128), (int)v3);
    if ( v3 )
      (**v3)(v3, 1);
  }
  while ( CRecentFileList::GetSize((CRecentFileList *)(this + 112)) )
  {
    v2 = (void (__thiscall ***)(_DWORD, int))sub_60CA40((_DWORD *)(this + 112), 0);
    sub_60C890((_DWORD *)(this + 112), (int)v2);
    if ( v2 )
      (**v2)(v2, 1);
  }
  if ( *(_DWORD *)(this + 196) )
  {
    operator delete(*(void **)(this + 196));
    *(_DWORD *)(this + 196) = 0;
  }
  if ( *(_DWORD *)(this + 200) )
  {
    operator delete(*(void **)(this + 200));
    *(_DWORD *)(this + 200) = 0;
  }
  sub_60C6A0(this + 128);
  sub_60C6A0(this + 112);
  sub_614A10((CNoTrackObject *)this);
}


//======================================================================
// sub_6283C0
// entry 006283c0  size 126  status ok
//======================================================================

int __stdcall sub_6283C0(int a1)
{
  if ( operator new(0x1D8u) )
    return sub_629730(a1);
  else
    return 0;
}


//======================================================================
// sub_628440
// entry 00628440  size 68  status ok
//======================================================================

bool __thiscall sub_628440(Concurrency::details::VirtualProcessor *this, int a2)
{
  return Concurrency::details::VirtualProcessor::ExecutingAffine(this) && sub_5F4B60(this, a2);
}


//======================================================================
// sub_628490
// entry 00628490  size 140  status ok
//======================================================================

char __thiscall sub_628490(Concurrency::details::VirtualProcessor *this, int a2)
{
  char result; // al
  int v4; // [esp+4h] [ebp-4h]

  v4 = unknown_libname_841(dword_15E55E8);
  if ( *((_BYTE *)this + 192) && (!v4 || v4 == *((_DWORD *)this + 1))
    || (result = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *, int))(*(_DWORD *)this + 132))(
                   this,
                   a2)) != 0
    && (result = Concurrency::details::VirtualProcessor::ExecutingAffine(this)) != 0 )
  {
    result = (*(int (__thiscall **)(Concurrency::details::VirtualProcessor *, bool, int))(*(_DWORD *)this + 220))(
               this,
               *(_DWORD *)(a2 + 16) >= 0,
               1);
    *(_BYTE *)(a2 + 4) = 1;
  }
  return result;
}


//======================================================================
// sub_628540
// entry 00628540  size 471  status ok
//======================================================================

int __thiscall sub_628540(
        _DWORD *this,
        int a2,
        int a3,
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
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        char a29,
        char a30,
        char a31,
        int a32,
        struct CPaneDivider *a33)
{
  int result; // eax
  _DWORD *v35; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  sub_614B60((int)this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a33);
  *(this + 40) = a21;
  *(this + 41) = a22;
  *(this + 38) = a23;
  *(this + 39) = a24;
  *(this + 47) = a25;
  *(this + 42) = a26;
  *(this + 43) = a27;
  *(this + 44) = a28;
  *((_BYTE *)this + 180) = a29;
  *((_BYTE *)this + 181) = a30;
  *((_BYTE *)this + 182) = a31;
  sub_629220(a32, 0);
  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 188))(this);
    if ( i >= result )
      break;
    v35 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 224))(this, this);
    v35[1] = *(this + 1);
    sub_5EC8F0(
      v35,
      (int)&Source,
      *(this + 42),
      *(this + 38),
      *(this + 39),
      *(this + 40) + a3,
      *(this + 39) * i + *(this + 41) + a4,
      a5 + 2,
      17,
      -1);
    sub_5EF340(v35, *(this + 46), 0);
    sub_60C840(this + 32, (int)v35);
  }
  return result;
}


//======================================================================
// sub_628720
// entry 00628720  size 25  status ok
//======================================================================

int __thiscall sub_628720(void *this, int a2)
{
  return sub_614EA0((int)this, a2);
}


//======================================================================
// sub_628740
// entry 00628740  size 120  status ok
//======================================================================

int __thiscall sub_628740(int *this)
{
  int result; // eax
  char v2; // ecx^3
  _DWORD *v3; // eax
  int v4; // [esp-Ch] [ebp-14h]
  int v5; // [esp-4h] [ebp-Ch]
  int i; // [esp+4h] [ebp-4h]

  sub_615080((int)this);
  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(int *))(*this + 188))(this);
    if ( i >= result )
      break;
    HIBYTE(v5) = v2;
    LOWORD(v5) = word_75EE1C;
    BYTE2(v5) = byte_75EE1E;
    v4 = *(this + 42);
    v3 = (_DWORD *)sub_60CA40(this + 32, i);
    sub_5ECD00(v3, v4, -1, v5);
  }
  return result;
}


//======================================================================
// sub_6287C0
// entry 006287c0  size 120  status ok
//======================================================================

int __thiscall sub_6287C0(int *this)
{
  int result; // eax
  char v2; // ecx^3
  _DWORD *v3; // eax
  int v4; // [esp-Ch] [ebp-14h]
  int v5; // [esp-4h] [ebp-Ch]
  int i; // [esp+4h] [ebp-4h]

  sub_6150E0((int)this);
  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(int *))(*this + 188))(this);
    if ( i >= result )
      break;
    HIBYTE(v5) = v2;
    LOWORD(v5) = word_75EE1C;
    BYTE2(v5) = byte_75EE1E;
    v4 = *(this + 44);
    v3 = (_DWORD *)sub_60CA40(this + 32, i);
    sub_5ECD00(v3, v4, -1, v5);
  }
  return result;
}


//======================================================================
// sub_628840
// entry 00628840  size 103  status ok
//======================================================================

int __thiscall sub_628840(_DWORD **this)
{
  int v1; // esi

  sub_614F40((int)this);
  v1 = ((int (__thiscall *)(_DWORD **))(*this)[46])(this);
  if ( v1 <= ((int (__thiscall *)(_DWORD **))(*this)[47])(this) )
    (*(void (__thiscall **)(_DWORD))(**(this + 22) + 112))(*(this + 22));
  return ((int (__thiscall *)(_DWORD **))(*this)[52])(this);
}


//======================================================================
// sub_6288B0
// entry 006288b0  size 96  status ok
//======================================================================

int __thiscall sub_6288B0(CWnd *this)
{
  int result; // eax
  int v2; // eax
  int i; // [esp+8h] [ebp-4h]

  sub_614FD0(this);
  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 188))(this);
    if ( i >= result )
      break;
    v2 = sub_60CA40((_DWORD *)this + 32, i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
  }
  return result;
}


//======================================================================
// sub_628910
// entry 00628910  size 107  status ok
//======================================================================

int __thiscall sub_628910(_DWORD *this, char *Str1)
{
  int i; // eax
  const char *v3; // eax
  exception *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v7 = 0;
  for ( i = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
        v7 < i;
        i = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this) )
  {
    v6 = (exception *)sub_60CA40(this + 28, v7);
    v3 = exception::what(v6);
    if ( !strcmp(Str1, v3) )
      return v7;
    ++v7;
  }
  return -1;
}


//======================================================================
// sub_628980
// entry 00628980  size 209  status ok
//======================================================================

int __thiscall sub_628980(pairNode *this, _DWORD *a2, int a3, int a4, int a5)
{
  int v6; // [esp+4h] [ebp-20h]
  void *v8; // [esp+10h] [ebp-14h]

  if ( !a2 )
  {
    v8 = operator new(0x14u);
    if ( v8 )
      v6 = sub_629AB0(v8);
    else
      v6 = 0;
    a2 = (_DWORD *)v6;
  }
  sub_60C840((_DWORD *)this + 28, (int)a2);
  a2[2] = pairNode::raw_length(this);
  a2[4] = a5;
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 4))(a2, a3);
  return (*(int (__thiscall **)(pairNode *))(*(_DWORD *)this + 208))(this);
}


//======================================================================
// sub_628AB0
// entry 00628ab0  size 228  status ok
//======================================================================

int __thiscall sub_628AB0(
        Concurrency::details::UMSFreeVirtualProcessorRoot *this,
        struct Concurrency::details::UMSThreadProxy *a2,
        int a3)
{
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // eax
  int v5; // [esp+0h] [ebp-14h]
  int (__thiscall ***v7)(_DWORD, int); // [esp+10h] [ebp-4h]

  if ( a2 == (struct Concurrency::details::UMSThreadProxy *)-1 )
    a2 = (struct Concurrency::details::UMSThreadProxy *)(*(int (__thiscall **)(Concurrency::details::UMSFreeVirtualProcessorRoot *, int))(*(_DWORD *)this + 236))(
                                                          this,
                                                          a3);
  if ( a2 != (struct Concurrency::details::UMSThreadProxy *)-1 )
  {
    v7 = (int (__thiscall ***)(_DWORD, int))sub_60CA40((_DWORD *)this + 28, (int)a2);
    sub_60C890((_DWORD *)this + 28, (int)v7);
    if ( v7 )
      v5 = (**v7)(v7, 1);
    else
      v5 = 0;
  }
  if ( a2 == Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this) )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::UMSFreeVirtualProcessorRoot *, int))(*(_DWORD *)this + 184))(
           this,
           v5) )
    {
      ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this);
      (*(void (__thiscall **)(Concurrency::details::UMSFreeVirtualProcessorRoot *, int, int))(*(_DWORD *)this + 192))(
        this,
        (int)ExecutingProxy - 1,
        1);
    }
    else
    {
      (*(void (__thiscall **)(Concurrency::details::UMSFreeVirtualProcessorRoot *, int, int))(*(_DWORD *)this + 192))(
        this,
        -1,
        1);
    }
  }
  return (*(int (__thiscall **)(Concurrency::details::UMSFreeVirtualProcessorRoot *))(*(_DWORD *)this + 208))(this);
}


//======================================================================
// sub_628BA0
// entry 00628ba0  size 175  status ok
//======================================================================

int __thiscall sub_628BA0(int this)
{
  int PreDockState; // eax
  int v3; // eax

  while ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 184))(this) )
    sub_628AB0((Concurrency::details::UMSFreeVirtualProcessorRoot *)this, 0, 0);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 192))(this, -1, 1);
  *(_DWORD *)(this + 108) = 0;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 112))(*(_DWORD *)(this + 88));
  if ( sub_615160((_DWORD *)this) )
  {
    PreDockState = CPaneFrameWnd::GetPreDockState(*(_DWORD *)(this + 88));
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 72))(*(_DWORD *)(this + 88), PreDockState);
  }
  else
  {
    v3 = CPaneFrameWnd::GetPreDockState(*(_DWORD *)(this + 88));
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 80))(*(_DWORD *)(this + 88), v3);
  }
}


//======================================================================
// sub_628C50
// entry 00628c50  size 113  status ok
//======================================================================

int __thiscall sub_628C50(_DWORD *this)
{
  int i; // eax
  int v3; // [esp+0h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-4h]

  *(this + 26) = -1;
  v5 = 0;
  for ( i = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
        v5 < i;
        i = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this) )
  {
    v3 = sub_60CA40(this + 28, v5);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, 0);
    ++v5;
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 208))(this);
}


//======================================================================
// sub_628CD0
// entry 00628cd0  size 161  status ok
//======================================================================

char __thiscall sub_628CD0(_DWORD *this, char *String1, char a3)
{
  const char *v3; // eax
  const char *v4; // eax
  exception *v7; // [esp+4h] [ebp-10h]
  exception *v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 28)); ++i )
  {
    if ( a3 )
    {
      v8 = (exception *)sub_60CA40(this + 28, i);
      v3 = exception::what(v8);
      v9 = stricmp(String1, v3);
    }
    else
    {
      v7 = (exception *)sub_60CA40(this + 28, i);
      v4 = exception::what(v7);
      v9 = strcmp(String1, v4);
    }
    if ( !v9 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_628D80
// entry 00628d80  size 43  status ok
//======================================================================

int __thiscall sub_628D80(_DWORD *this)
{
  sub_60CBB0(this + 28, sub_629D20);
  return (*(int (__thiscall **)(_DWORD *))(*this + 208))(this);
}


//======================================================================
// sub_628DB0
// entry 00628db0  size 172  status ok
//======================================================================

char __thiscall sub_628DB0(_DWORD *this)
{
  int v1; // esi
  int Size; // esi
  CMFCScanliner *v4; // eax
  int i; // [esp+8h] [ebp-4h]

  v1 = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
  if ( v1 == (*(int (__thiscall **)(_DWORD *))(*this + 188))(this) )
  {
    Size = CRecentFileList::GetSize((CRecentFileList *)(this + 32));
    if ( Size < (*(int (__thiscall **)(_DWORD *))(*this + 188))(this) )
      return 1;
    for ( i = 0; i < (*(int (__thiscall **)(_DWORD *))(*this + 188))(this); ++i )
    {
      v4 = (CMFCScanliner *)sub_60CA40(this + 32, i);
      if ( CMFCScanliner::channels(v4) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_628E60
// entry 00628e60  size 223  status ok
//======================================================================

int __thiscall sub_628E60(int *this, int a2, char a3)
{
  const CHAR *v3; // eax
  int v5; // eax
  const CHAR *v6; // [esp-8h] [ebp-18h]
  int v7; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  if ( a2 < 0 || (unsigned __int8)sub_629080(a2) )
  {
    for ( i = 0; i < (*(int (__thiscall **)(int *))(*this + 184))(this); ++i )
    {
      v7 = sub_60CA40(this + 28, i);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 8))(v7, 0);
    }
    if ( a2 >= 0 && a2 < (*(int (__thiscall **)(int *))(*this + 184))(this) )
    {
      v5 = sub_60CA40(this + 28, a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 1);
    }
    return sub_615180(this, a2, a3);
  }
  else
  {
    v6 = (const CHAR *)unknown_libname_642(this);
    v3 = (const CHAR *)unknown_libname_641(this);
    return sub_62FF10(v3, v6, 0);
  }
}


//======================================================================
// sub_628F40
// entry 00628f40  size 54  status ok
//======================================================================

int __thiscall sub_628F40(void *this, int a2, char a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *, int, char))(*(_DWORD *)this + 236))(this, a2, a3);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 192))(this, v3);
}


//======================================================================
// sub_629000
// entry 00629000  size 68  status ok
//======================================================================

char __thiscall sub_629000(_DWORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  if ( a2 >= (*(int (__thiscall **)(_DWORD *))(*this + 184))(this) )
    return 0;
  v4 = sub_60CA40(this + 28, a2);
  return unknown_libname_852(v4);
}


//======================================================================
// sub_629080
// entry 00629080  size 74  status ok
//======================================================================

char __thiscall sub_629080(_DWORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-4h]

  if ( a2 < 0 || a2 >= (*(int (__thiscall **)(_DWORD *))(*this + 184))(this) )
    return 1;
  v4 = sub_60CA40(this + 28, a2);
  return unknown_libname_853(v4);
}


//======================================================================
// sub_629220
// entry 00629220  size 37  status ok
//======================================================================

int __thiscall sub_629220(_DWORD *this, int a2, int a3)
{
  *(this + 36) = a2;
  return sub_629250(a3);
}


//======================================================================
// sub_629250
// entry 00629250  size 41  status ok
//======================================================================

int __thiscall sub_629250(_DWORD *this, int a2)
{
  *(this + 37) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 208))(this, this);
}


//======================================================================
// sub_6294E0
// entry 006294e0  size 454  status ok
//======================================================================

int __thiscall sub_6294E0(CMediaType *this, int a2, int a3)
{
  int v3; // eax
  char v4; // ecx^3
  int IsFixedSize; // eax
  int v7; // eax
  char v8; // ecx^3
  int v9; // [esp-Ch] [ebp-424h]
  _DWORD *v10; // [esp-Ch] [ebp-424h]
  int v11; // [esp-Ch] [ebp-424h]
  int v12; // [esp+0h] [ebp-418h]
  int v13; // [esp+4h] [ebp-414h]
  int v14; // [esp+8h] [ebp-410h]
  _BYTE v16[1024]; // [esp+10h] [ebp-408h] BYREF
  __int16 v17; // [esp+414h] [ebp-4h]
  char v18; // [esp+416h] [ebp-2h]

  v17 = 0;
  v18 = 0;
  (*(void (__thiscall **)(CMediaType *, int, _BYTE *))(*(_DWORD *)this + 232))(this, a2, v16);
  if ( sub_629080(this, a2) )
  {
    if ( sub_629000(this, a2) )
    {
      v13 = sub_60CA40((_DWORD *)this + 32, a3);
      IsFixedSize = CMediaType::IsFixedSize(this);
      v10 = (_DWORD *)((char *)this + 180);
      LOWORD(v10) = *((_WORD *)this + 90);
      BYTE2(v10) = *((_BYTE *)this + 182);
      return (*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD *, int, int))(*(_DWORD *)v13 + 196))(
               v13,
               v16,
               *((_DWORD *)this + 43),
               v10,
               IsFixedSize + 2,
               1);
    }
    else
    {
      v12 = sub_60CA40((_DWORD *)this + 32, a3);
      v7 = CMediaType::IsFixedSize(this);
      HIBYTE(v11) = v8;
      LOWORD(v11) = v17;
      BYTE2(v11) = v18;
      return (*(int (__thiscall **)(int, _BYTE *, _DWORD, int, int, _DWORD))(*(_DWORD *)v12 + 196))(
               v12,
               v16,
               *((_DWORD *)this + 42),
               v11,
               v7 + 2,
               0);
    }
  }
  else
  {
    v14 = sub_60CA40((_DWORD *)this + 32, a3);
    v3 = CMediaType::IsFixedSize(this);
    HIBYTE(v9) = v4;
    LOWORD(v9) = v17;
    BYTE2(v9) = v18;
    return (*(int (__thiscall **)(int, _BYTE *, _DWORD, int, int, _DWORD))(*(_DWORD *)v14 + 196))(
             v14,
             v16,
             *((_DWORD *)this + 44),
             v9,
             v3 + 2,
             0);
  }
}


//======================================================================
// sub_6296B0
// entry 006296b0  size 71  status ok
//======================================================================

int __thiscall sub_6296B0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax

  result = sub_60CA40(this + 32, a2);
  if ( result )
  {
    v3 = sub_60CA40(this + 32, a2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 112))(v3, v3);
  }
  return result;
}


//======================================================================
// sub_629700
// entry 00629700  size 40  status ok
//======================================================================

int __thiscall sub_629700(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 184))(a2);
  return sub_628F40(this, v2, 1);
}


//======================================================================
// sub_629730
// entry 00629730  size 58  status ok
//======================================================================

_DWORD *__thiscall sub_629730(_DWORD *this, int a2)
{
  sub_5EC5A0(this);
  *this = &sciListBoxText::`vftable';
  *(this + 116) = a2;
  *(this + 117) = 0;
  return this;
}


//======================================================================
// sub_629770
// entry 00629770  size 148  status ok
//======================================================================

void __thiscall sub_629770(int this)
{
  *(_DWORD *)this = &sciListBoxText::`vftable';
  if ( *(_DWORD *)(this + 468) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 468))(*(_DWORD *)(this + 468), 1);
  sub_5EC760((void **)this);
}


//======================================================================
// sub_629810
// entry 00629810  size 128  status ok
//======================================================================

int __thiscall sub_629810(int this, int a2)
{
  int result; // eax

  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  result = Concurrency::details::VirtualProcessor::ExecutingAffine(*(Concurrency::details::VirtualProcessor **)(this + 464));
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 244))(*(_DWORD *)(this + 464), this);
    if ( (*(_DWORD *)(a2 + 28) & 0x20) != 0 )
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 464) + 248))(*(_DWORD *)(this + 464), this);
  }
  return result;
}


//======================================================================
// sub_629890
// entry 00629890  size 56  status ok
//======================================================================

void __thiscall sub_629890(CWnd *this)
{
  if ( *((_DWORD *)this + 117) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 117) + 112))(*((_DWORD *)this + 117));
  sub_5F62B0(this);
}


//======================================================================
// sub_6298D0
// entry 006298d0  size 477  status ok
//======================================================================

int __thiscall sub_6298D0(int this, int a2, int a3, int a4, int a5, char a6)
{
  char v6; // ecx^3
  char v7; // ecx^3
  int result; // eax
  int v9; // eax
  int MaskId; // eax
  int v11; // eax
  int v12; // [esp-Ch] [ebp-2Ch]
  int v13; // [esp-4h] [ebp-24h]
  int v14; // [esp-4h] [ebp-24h]
  int v15; // [esp+0h] [ebp-20h]
  _DWORD *v16; // [esp+4h] [ebp-1Ch]
  _DWORD *v18; // [esp+Ch] [ebp-14h]

  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 180))(this, a2);
  HIBYTE(v13) = v6;
  LOWORD(v13) = word_75EE1C;
  BYTE2(v13) = byte_75EE1E;
  sub_5ECD00((_DWORD *)this, a3, -1, v13);
  HIBYTE(v14) = v7;
  LOWORD(v14) = a4;
  BYTE2(v14) = BYTE2(a4);
  sub_5EE920((_BYTE *)this, v14);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 108))(this, a5);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 116))(this);
  if ( a6
    && (result = Concurrency::details::VirtualProcessor::GetMaskId(*(Concurrency::details::VirtualProcessor **)(this + 464)),
        result > 0) )
  {
    if ( !*(_DWORD *)(this + 468) )
    {
      v18 = operator new(0x184u);
      if ( v18 )
        v16 = sub_5F5BF0(v18);
      else
        v16 = 0;
      *(_DWORD *)(this + 468) = v16;
      *(_DWORD *)(*(_DWORD *)(this + 468) + 4) = *(_DWORD *)(this + 4);
    }
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v9);
    MaskId = Concurrency::details::VirtualProcessor::GetMaskId(*(Concurrency::details::VirtualProcessor **)(this + 464));
    sub_5EAE80(MaskId, v12, a5 - 1, -1, v15);
    v11 = unknown_libname_643(*(_DWORD *)(this + 464));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 468) + 176))(*(_DWORD *)(this + 468), v11);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 116))(*(_DWORD *)(this + 468));
  }
  else if ( *(_DWORD *)(this + 468) )
  {
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 468) + 112))(*(_DWORD *)(this + 468));
  }
  return result;
}


//======================================================================
// sub_629AB0
// entry 00629ab0  size 75  status ok
//======================================================================

int __thiscall sub_629AB0(int this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &sciListBoxItem::`vftable';
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = -1;
  *(_BYTE *)(this + 12) = 0;
  *(_BYTE *)(this + 13) = 1;
  *(_DWORD *)(this + 16) = 0;
  return this;
}


//======================================================================
// sub_629B00
// entry 00629b00  size 116  status ok
//======================================================================

void __thiscall sub_629B00(void **this)
{
  *this = &sciListBoxItem::`vftable';
  if ( *(this + 1) )
    operator delete(*(this + 1));
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_629B80
// entry 00629b80  size 240  status ok
//======================================================================

void __thiscall sub_629B80(void **this, char *Str2, int a3)
{
  size_t v3; // eax
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  if ( a3 != -1 || !*(this + 1) || !Str2 || strcmp((const char *)*(this + 1), Str2) )
  {
    if ( *(this + 1) )
      operator delete(*(this + 1));
    if ( Str2 )
    {
      sub_5EED70(Str, Str2, a3);
      v3 = strlen(Str);
      *(this + 1) = operator new(v3 + 1);
      strcpy((char *)*(this + 1), Str);
    }
  }
}


//======================================================================
// sub_629CA0
// entry 00629ca0  size 22  status ok
//======================================================================

_BYTE *__thiscall sub_629CA0(_BYTE *this, char a2)
{
  *(this + 12) = a2;
  return this;
}


//======================================================================
// sub_629CE0
// entry 00629ce0  size 22  status ok
//======================================================================

_BYTE *__thiscall sub_629CE0(_BYTE *this, char a2)
{
  *(this + 13) = a2;
  return this;
}


//======================================================================
// sub_629D20
// entry 00629d20  size 49  status ok
//======================================================================

int __cdecl sub_629D20(exception *a1, exception *a2)
{
  const char *v2; // eax
  const char *v4; // [esp-4h] [ebp-Ch]

  v4 = exception::what(a2);
  v2 = exception::what(a1);
  return stricmp(v2, v4);
}


//======================================================================
// sub_629D80
// entry 00629d80  size 54  status ok
//======================================================================

char *__thiscall sub_629D80(_DWORD *this, int a2, char *Destination)
{
  const char *v3; // eax
  exception *v5; // [esp+4h] [ebp-4h]

  v5 = (exception *)sub_60CA40(this + 28, a2);
  v3 = exception::what(v5);
  return strcpy(Destination, v3);
}


//======================================================================
// sub_629DC0
// entry 00629dc0  size 41  status ok
//======================================================================

const char *__thiscall sub_629DC0(_DWORD *this, int a2)
{
  exception *v3; // [esp+4h] [ebp-4h]

  v3 = (exception *)sub_60CA40(this + 28, a2);
  return exception::what(v3);
}


//======================================================================
// sub_629E40
// entry 00629e40  size 271  status ok
//======================================================================

_DWORD *__thiscall sub_629E40(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  sub_5F49D0((int)this);
  *this = &sciSpinBox::`vftable';
  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  if ( operator new(0x1E4u) )
    v3 = sub_62A760(this, 1);
  else
    v3 = 0;
  *(this + 20) = v3;
  if ( operator new(0x1E4u) )
    v2 = sub_62A760(this, 0);
  else
    v2 = 0;
  *(this + 19) = v2;
  return this;
}


//======================================================================
// sub_629F50
// entry 00629f50  size 274  status ok
//======================================================================

void __thiscall sub_629F50(CNoTrackObject *this)
{
  *(_DWORD *)this = &sciSpinBox::`vftable';
  if ( *((_DWORD *)this + 18) )
    (***((void (__thiscall ****)(_DWORD, int))this + 18))(*((_DWORD *)this + 18), 1);
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  if ( *((_DWORD *)this + 21) )
    (***((void (__thiscall ****)(_DWORD, int))this + 21))(*((_DWORD *)this + 21), 1);
  sub_5F4AD0(this);
}


//======================================================================
// sub_62A070
// entry 0062a070  size 513  status ok
//======================================================================

int __thiscall sub_62A070(
        int this,
        int a2,
        int a3,
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
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        struct CPaneDivider *a23)
{
  int v23; // eax
  int v25; // [esp+4h] [ebp-28h]
  _DWORD *v26; // [esp+8h] [ebp-24h]
  void *v28; // [esp+10h] [ebp-1Ch]
  _DWORD *v29; // [esp+18h] [ebp-14h]

  sub_5F5010((_DWORD *)this);
  CPaneContainer::SetPaneDivider((CPaneContainer *)this, a23);
  if ( !*(_DWORD *)(this + 72) )
  {
    v29 = operator new(0x184u);
    if ( v29 )
      v26 = sub_5F5BF0(v29);
    else
      v26 = 0;
    *(_DWORD *)(this + 72) = v26;
  }
  *(_DWORD *)(*(_DWORD *)(this + 72) + 4) = *(_DWORD *)(this + 4);
  sub_5EAE80(a2, a3, a4, a5, -1);
  *(_DWORD *)(*(_DWORD *)(this + 80) + 4) = *(_DWORD *)(this + 4);
  sub_5EAE80(a6, a7 + a3, a8 + a4, a5 + 1, -1);
  *(_DWORD *)(*(_DWORD *)(this + 76) + 4) = *(_DWORD *)(this + 4);
  sub_5EAE80(a9, a10 + a3, a11 + a4, a5 + 1, -1);
  if ( !*(_DWORD *)(this + 84) )
  {
    v28 = operator new(0x1D0u);
    if ( v28 )
    {
      sub_5EC5A0(v28);
      v25 = v23;
    }
    else
    {
      v25 = 0;
    }
    *(_DWORD *)(this + 84) = v25;
  }
  *(_DWORD *)(*(_DWORD *)(this + 84) + 4) = *(_DWORD *)(this + 4);
  sub_5EC8F0(*(void **)(this + 84), a12, a13, a15, a16, a17 + a3, a18 + a4, a5 + 1, a22, -1);
  *(_DWORD *)(this + 104) = a13;
  *(_DWORD *)(this + 108) = a14;
  *(_DWORD *)(this + 92) = a19;
  *(_DWORD *)(this + 96) = a20;
  *(_DWORD *)(this + 100) = a21;
  *(_DWORD *)(this + 88) = *(_DWORD *)(this + 92);
  return this;
}


//======================================================================
// sub_62A280
// entry 0062a280  size 113  status ok
//======================================================================

int __thiscall sub_62A280(int this)
{
  int result; // eax

  sub_5F5440((_BYTE *)this);
  if ( *(_DWORD *)(this + 72) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 116))(*(_DWORD *)(this + 72));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 116))(*(_DWORD *)(this + 76));
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 116))(*(_DWORD *)(this + 80));
  if ( *(_DWORD *)(this + 84) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 116))(*(_DWORD *)(this + 84));
  return result;
}


//======================================================================
// sub_62A300
// entry 0062a300  size 113  status ok
//======================================================================

int __thiscall sub_62A300(CWnd *this)
{
  int result; // eax

  CWnd::EnableActiveAccessibility(this);
  if ( *((_DWORD *)this + 18) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 18) + 112))(*((_DWORD *)this + 18));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 19) + 112))(*((_DWORD *)this + 19));
  result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 112))(*((_DWORD *)this + 20));
  if ( *((_DWORD *)this + 21) )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 21) + 112))(*((_DWORD *)this + 21));
  return result;
}


//======================================================================
// sub_62A380
// entry 0062a380  size 148  status ok
//======================================================================

int __thiscall sub_62A380(int this, int a2)
{
  int result; // eax

  sub_5F5300((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 72) )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 108))(*(_DWORD *)(this + 72), a2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 76) + 108))(*(_DWORD *)(this + 76), a2 + 1);
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 80) + 108))(*(_DWORD *)(this + 80), a2 + 1);
  if ( *(_DWORD *)(this + 84) )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 84) + 108))(*(_DWORD *)(this + 84), a2 + 1);
  return result;
}


//======================================================================
// sub_62A520
// entry 0062a520  size 262  status ok
//======================================================================

int __thiscall sub_62A520(int this, int a2)
{
  int result; // eax
  struct Concurrency::IVirtualProcessorRoot *OwningRoot; // eax
  int v4; // eax
  char Buffer[52]; // [esp+4h] [ebp-38h] BYREF

  *(_DWORD *)(this + 88) = a2;
  if ( Concurrency::details::VirtualProcessor::GetOwningRoot((Concurrency::details::VirtualProcessor *)this) == *(struct Concurrency::IVirtualProcessorRoot **)(this + 92) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 208))(*(_DWORD *)(this + 80));
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 204))(*(_DWORD *)(this + 80));
  if ( Concurrency::details::VirtualProcessor::GetOwningRoot((Concurrency::details::VirtualProcessor *)this) == *(struct Concurrency::IVirtualProcessorRoot **)(this + 96) )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 208))(*(_DWORD *)(this + 76));
  else
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 204))(*(_DWORD *)(this + 76));
  if ( *(_DWORD *)(this + 84) )
  {
    OwningRoot = Concurrency::details::VirtualProcessor::GetOwningRoot((Concurrency::details::VirtualProcessor *)this);
    sprintf(Buffer, "%d", OwningRoot);
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 84) + 180))(*(_DWORD *)(this + 84), Buffer);
    v4 = pairNode::raw_length((pairNode *)this);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 40))(*(_DWORD *)(this + 4), v4);
  }
  return result;
}


