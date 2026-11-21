//======================================================================
// sub_60A9C0
// entry 0060a9c0  size 368  status ok
//======================================================================

int __thiscall sub_60A9C0(_BYTE *this, int a2, int a3, int a4, float a5, int a6)
{
  int v7; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  if ( !*(this + 9) || !*(this + 8) || !a2 )
    return -1;
  v7 = sub_609E00(this);
  if ( v7 == -1 )
    return -1;
  dword_796D38[29 * v7] = a2;
  if ( a3 )
  {
    byte_796D3C[116 * v7] = 1;
    dword_796D40[29 * v7] = -1;
    for ( i = 0; *(_DWORD *)(a3 + 4 * i) != -1; ++i )
      dword_796D44[29 * v7 + i] = *(_DWORD *)(a3 + 4 * i);
    dword_796D44[29 * v7 + i] = -1;
    flt_796D94[29 * v7] = a5;
    flt_796D94[29 * v7 + 1] = *(float *)&a6;
    sub_60AB30(v7, 0);
  }
  else
  {
    byte_796D3C[116 * v7] = 0;
    sub_62FDE0(">>> playing song %d\n", dword_796D38[29 * v7]);
    return sub_60B0B0(v7, a4, a5, a6);
  }
  return v7;
}


//======================================================================
// sub_60AB30
// entry 0060ab30  size 394  status ok
//======================================================================

int __stdcall sub_60AB30(int a1, char a2)
{
  int v2; // eax
  int result; // eax
  char v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+8h] [ebp-18h]
  int k; // [esp+8h] [ebp-18h]
  int j; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h]
  int i; // [esp+14h] [ebp-Ch]
  int v10; // [esp+1Ch] [ebp-4h]
  int v11; // [esp+1Ch] [ebp-4h]

  sub_62FDE0(">>> reshuffling medley %d\n", dword_796D38[29 * a1]);
  for ( i = 0; dword_796D44[29 * a1 + i] != -1; ++i )
    ;
  v8 = dword_796D40[29 * a1 + i];
  for ( j = 0; j < 100; ++j )
  {
    v5 = sub_62FBF0(i);
    v2 = sub_62FBF0(i);
    v10 = dword_796D44[29 * a1 + v5];
    dword_796D44[29 * a1 + v5] = dword_796D44[29 * a1 + v2];
    dword_796D44[29 * a1 + v2] = v10;
  }
  if ( a2 && i > 1 && dword_796D44[29 * a1] == v8 )
  {
    v11 = dword_796D44[29 * a1];
    dword_796D44[29 * a1] = dword_796D48[29 * a1];
    dword_796D48[29 * a1] = v11;
  }
  sub_62FDE0(">>> reshuffed play order\n", v4);
  for ( k = 0; ; ++k )
  {
    result = k;
    if ( dword_796D44[29 * a1 + k] == -1 )
      break;
    sub_62FDE0(">>>     %d\n", dword_796D44[29 * a1 + k]);
  }
  return result;
}


//======================================================================
// sub_60ACC0
// entry 0060acc0  size 48  status ok
//======================================================================

int __thiscall sub_60ACC0(_BYTE *this)
{
  int result; // eax

  result = (unsigned __int8)byte_7960CB;
  if ( !byte_7960CB )
  {
    if ( *(this + 10) )
      return result;
    sub_60ACF0(this);
  }
  return sub_6112F0();
}


//======================================================================
// sub_60ACF0
// entry 0060acf0  size 603  status ok
//======================================================================

char __fastcall sub_60ACF0(_BYTE *a1)
{
  int v1; // eax
  void *v3; // [esp+8h] [ebp-18h]
  void *v5; // [esp+14h] [ebp-Ch]
  int j; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]

  LOBYTE(v1) = (_BYTE)a1;
  if ( a1[9] )
  {
    LOBYTE(v1) = a1[8];
    if ( (_BYTE)v1 )
    {
      for ( i = 0; i < 3; ++i )
      {
        if ( dword_796D28[29 * i] )
        {
          sub_62D470(dword_796D28[29 * i], v3);
          LOBYTE(v1) = sub_60A870(a1, i);
          if ( (_BYTE)v1 )
            continue;
          LOBYTE(v1) = sub_60A540(a1, i);
          if ( (_BYTE)v1 )
            continue;
        }
        LOBYTE(v1) = byte_796D3C[116 * i];
        if ( (_BYTE)v1 )
        {
          if ( dword_796D28[29 * i] )
          {
            sub_62D120(dword_796D28[29 * i]);
            v5 = (void *)dword_796D28[29 * i];
            if ( v5 )
            {
              sub_62D120(v5);
              operator delete(v5);
              v3 = v5;
            }
            else
            {
              v3 = 0;
            }
            dword_796D28[29 * i] = 0;
          }
          for ( j = 0; dword_796D44[29 * i + j] != -1; ++j )
            ;
          if ( j )
          {
            if ( dword_796D40[29 * i] == -1 || dword_796D40[29 * i] >= j )
            {
              sub_60AB30(i, 1);
              dword_796D40[29 * i] = -1;
            }
            v1 = ++dword_796D40[29 * i];
            if ( v1 >= j )
              return v1;
            sub_62FDE0(">>> playing medley %d segment (%d) %d (volume = %f)\n", dword_796D38[29 * i]);
            LOBYTE(v1) = sub_60B0B0(i, 1, flt_796D94[29 * i], COERCE_INT(flt_796D94[29 * i + 1]));
          }
          else
          {
            LOBYTE(v1) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1941);
          }
        }
      }
    }
  }
  return v1;
}


//======================================================================
// sub_60AF50
// entry 0060af50  size 337  status ok
//======================================================================

char __stdcall sub_60AF50(char *Source, char *Destination)
{
  int i; // [esp+4h] [ebp-8h]
  char **v4; // [esp+8h] [ebp-4h]

  v4 = sub_5DF250();
  for ( i = 0; *v4[i]; ++i )
  {
    strcpy(Destination, v4[i]);
    if ( Destination[strlen(Destination) - 1] != 92 )
      strcat(Destination, "\\");
    strcat(Destination, Source);
    if ( sub_5EA0A0(Destination) )
      return 1;
    if ( *v4[i] == 46 )
    {
      sprintf(Destination, "%c:\\%s\\%s", byte_795F6C, byte_79583C, byte_795634);
      strcat(Destination, v4[i] + 1);
      if ( Destination[strlen(Destination) - 1] != 92 )
        strcat(Destination, "\\");
      strcat(Destination, Source);
      if ( sub_5EA0A0(Destination) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_60B0B0
// entry 0060b0b0  size 750  status ok
//======================================================================

int __thiscall sub_60B0B0(_BYTE *this, int a2, int a3, float a4, int a5)
{
  int v6; // [esp+4h] [ebp-238h]
  int v7; // [esp+Ch] [ebp-230h]
  int v8; // [esp+10h] [ebp-22Ch]
  int v9; // [esp+14h] [ebp-228h]
  _DWORD *v10; // [esp+18h] [ebp-224h]
  char Buffer[264]; // [esp+24h] [ebp-218h] BYREF
  char Destination[264]; // [esp+12Ch] [ebp-110h] BYREF
  int v13; // [esp+238h] [ebp-4h]

  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  if ( byte_796D3C[116 * a2] )
    v13 = dword_796D44[29 * a2 + dword_796D40[29 * a2]];
  else
    v13 = dword_796D38[29 * a2];
  sprintf(Buffer, "%d.ogg", v13);
  if ( sub_60AF50(Buffer, Destination) )
  {
    sub_62FDE0(">>> opening streamed file: %s\n", (char)Destination);
    v10 = operator new(0x2F8u);
    if ( v10 )
    {
      v7 = dword_796EBC[2 * a2];
      v8 = dword_796EB8[2 * a2];
      v9 = dword_796D18[a2];
      *v10 = 0;
      v10[182] = 0;
      v10[183] = 0;
      v10[186] = v9;
      v10[184] = v8;
      v10[185] = v7;
      *((_BYTE *)v10 + 752) = 0;
      v6 = (int)v10;
    }
    else
    {
      v6 = 0;
    }
    dword_796D28[29 * a2] = v6;
    if ( dword_796D28[29 * a2] )
    {
      if ( sub_62CE60(Destination, byte_15E5090) )
      {
        sub_62FDE0("ogg_stream::open() Failed!\n%s\n", (char)byte_15E5090);
        return -1;
      }
      else
      {
        sub_62D7E0(a4);
        if ( a3 )
          sub_62D870(0);
        else
          sub_62D870(1);
        byte_796D30[116 * a2] = 0;
        dword_796D34[29 * a2] = 0;
        sub_62D310(dword_796D28[29 * a2]);
        return a2;
      }
    }
    else
    {
      sub_62FDE0("ogg_stream creation failed!\n", v6);
      return -1;
    }
  }
  else
  {
    sub_62FDE0(">>> unable to find/open sound file %s\n", (char)Buffer);
    byte_796D3C[116 * a2] = 0;
    return -1;
  }
}


//======================================================================
// sub_60B4A0
// entry 0060b4a0  size 261  status ok
//======================================================================

_DWORD *__thiscall sub_60B4A0(_DWORD *this)
{
  sub_5EC5A0(this);
  *this = &sciEditBox::`vftable';
  *(this + 119) = 0;
  *(this + 120) = 0;
  *((_BYTE *)this + 464) = 1;
  sub_5F5300(this, 1000);
  *(this + 121) = 0;
  *((_BYTE *)this + 488) = 0;
  *((_BYTE *)this + 496) = 0;
  *(this + 123) = 0;
  *((_BYTE *)this + 496) = 0;
  *(this + 125) = 0;
  *(this + 117) = 0;
  *(this + 118) = 0;
  *((_BYTE *)this + 504) = 60;
  *((_BYTE *)this + 505) = 120;
  *((_BYTE *)this + 506) = -56;
  return this;
}


//======================================================================
// sub_60B5B0
// entry 0060b5b0  size 272  status ok
//======================================================================

void __thiscall sub_60B5B0(int this)
{
  *(_DWORD *)this = &sciEditBox::`vftable';
  if ( *(_DWORD *)(this + 484) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 484))(*(_DWORD *)(this + 484), 1);
  if ( *(_DWORD *)(this + 476) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 476))(*(_DWORD *)(this + 476), 1);
  if ( *(_DWORD *)(this + 480) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 480))(*(_DWORD *)(this + 480), 1);
  sub_5EC760((void **)this);
}


//======================================================================
// sub_60B6C0
// entry 0060b6c0  size 68  status ok
//======================================================================

bool __thiscall sub_60B6C0(CMFCScanliner *this, int a2)
{
  return (unsigned __int8)sub_60C370(this) && sub_5F4B60(this, a2);
}


//======================================================================
// sub_60B710
// entry 0060b710  size 100  status ok
//======================================================================

int __thiscall sub_60B710(_BYTE *this, int a2)
{
  int v2; // eax
  int v4; // [esp-4h] [ebp-8h]

  sub_5F4ED0(this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  v4 = *(_DWORD *)(a2 + 12) - (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 84))(this);
  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 76))(this);
  sub_5EFA20((int)this, *(_DWORD *)(a2 + 8) - v2, *(_DWORD *)(a2 + 8) - v2, v4);
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
}


//======================================================================
// sub_60B780
// entry 0060b780  size 30  status ok
//======================================================================

int __thiscall sub_60B780(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
}


//======================================================================
// sub_60B7A0
// entry 0060b7a0  size 42  status ok
//======================================================================

bool __stdcall sub_60B7A0(int a1)
{
  return *(_BYTE *)(a1 + 20) == 22 || (*(_DWORD *)(a1 + 28) & 2) == 0;
}


//======================================================================
// sub_60B7D0
// entry 0060b7d0  size 1532  status ok
//======================================================================

unsigned int __thiscall sub_60B7D0(_BYTE *this, int a2)
{
  unsigned int result; // eax
  const char *v3; // eax
  const char *v4; // eax
  size_t v5; // eax
  const char *v6; // eax
  size_t v7; // eax
  int v8; // esi
  size_t v9; // eax
  char v11; // [esp+Fh] [ebp-821h]
  size_t v12; // [esp+10h] [ebp-820h]
  signed int i; // [esp+14h] [ebp-81Ch]
  char v14; // [esp+1Bh] [ebp-815h]
  char *Str; // [esp+1Ch] [ebp-814h] BYREF
  char Destination[2060]; // [esp+20h] [ebp-810h] BYREF

  result = *(char *)(a2 + 20) - 1;
  switch ( *(_BYTE *)(a2 + 20) )
  {
    case 1:
      if ( !*(this + 164) )
      {
        *(this + 164) = 1;
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
      }
      goto LABEL_38;
    case 2:
      if ( !*(this + 165) )
      {
        *(this + 165) = 1;
        result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
      }
      goto LABEL_38;
    case 3:
      if ( *((int *)this + 40) > 0 )
        --*((_DWORD *)this + 40);
      goto LABEL_6;
    case 4:
      v4 = (const char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 184))(this);
      if ( *((_DWORD *)this + 40) < (signed int)strlen(v4) )
        ++*((_DWORD *)this + 40);
LABEL_6:
      result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
      goto LABEL_38;
    case 5:
      *((_DWORD *)this + 40) = 0;
      result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
      goto LABEL_38;
    case 6:
      v3 = (const char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 184))(this);
      *((_DWORD *)this + 40) = strlen(v3);
      result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
      goto LABEL_38;
    case 7:
    case 8:
    case 0xD:
    case 0x1B:
      return result;
    case 0x16:
      Str = (char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 184))(this);
      result = strlen(Str);
      if ( result && *((int *)this + 40) > 0 )
      {
        v6 = (const char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 184))(this);
        strcpy(Destination, v6);
        v7 = strlen(&Destination[*((_DWORD *)this + 40)]);
        memcpy(&Destination[*((_DWORD *)this + 40) - 1], &Destination[*((_DWORD *)this + 40)], v7 + 1);
        if ( *((int *)this + 40) > 0 )
          --*((_DWORD *)this + 40);
        result = (*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)this + 180))(this, Destination);
      }
      goto LABEL_38;
    case 0x17:
      Str = (char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 184))(this);
      result = strlen(Str);
      if ( result )
      {
        result = strlen(Str);
        if ( *((_DWORD *)this + 40) != result )
        {
          strcpy(Destination, Str);
          v5 = strlen(&Destination[*((_DWORD *)this + 40) + 1]);
          memcpy(&Destination[*((_DWORD *)this + 40)], &Destination[*((_DWORD *)this + 40) + 1], v5 + 1);
          result = (*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)this + 180))(this, Destination);
        }
      }
      goto LABEL_38;
    default:
      if ( *((int *)this + 117) <= 0 )
        sub_5E9F20("m_iMaxLength > 0", "..\\scilib\\scieditbox.cpp", 136);
      Str = (char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 184))(this);
      result = strlen(Str);
      if ( result < 0x7FF )
      {
        result = strlen(Str);
        if ( result < *((_DWORD *)this + 117) )
        {
          if ( !*((_DWORD *)this + 118)
            || (v8 = sub_5EF050((int)this),
                result = sub_5EE950((int)this, *(_BYTE *)(a2 + 20), 0xFFFFFFFF),
                (signed int)(result + v8) <= *((_DWORD *)this + 118)) )
          {
            strcpy(Destination, Str);
            if ( dword_795F90 == 3 )
            {
              v11 = *(_BYTE *)(a2 + 20);
              v12 = strlen(Destination);
              for ( i = *((_DWORD *)this + 40); i <= (int)(v12 + 1); ++i )
              {
                v14 = Destination[i];
                Destination[i] = v11;
                v11 = v14;
              }
            }
            else
            {
              v9 = strlen(&Destination[*((_DWORD *)this + 40)]);
              memcpy(&Destination[*((_DWORD *)this + 40) + 1], &Destination[*((_DWORD *)this + 40)], v9 + 1);
              Destination[*((_DWORD *)this + 40)] = *(_BYTE *)(a2 + 20);
            }
            ++*((_DWORD *)this + 40);
            result = (*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)this + 180))(this, Destination);
          }
        }
      }
LABEL_38:
      *(_BYTE *)(a2 + 4) = 1;
      return result;
  }
}


//======================================================================
// sub_60BE20
// entry 0060be20  size 451  status ok
//======================================================================

int __thiscall sub_60BE20(
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
        int a13)
{
  int v13; // eax
  int result; // eax
  _BYTE *v15; // [esp+4h] [ebp-28h]
  int v16; // [esp+8h] [ebp-24h]
  _BYTE *v18; // [esp+10h] [ebp-1Ch]
  _DWORD *v19; // [esp+18h] [ebp-14h]

  sub_5EC8F0((void *)this, a6, a5, a7, a8, a9 + a3, a10 + a4, a11 + 1, a12, a13);
  if ( !*(_DWORD *)(this + 476) && a2 )
  {
    v19 = operator new(0x178u);
    if ( v19 )
    {
      sub_5EAAF0(v19);
      v16 = v13;
    }
    else
    {
      v16 = 0;
    }
    *(_DWORD *)(this + 476) = v16;
  }
  if ( *(_DWORD *)(this + 476) )
  {
    *(_DWORD *)(*(_DWORD *)(this + 476) + 4) = *(_DWORD *)(this + 4);
    sub_5EAE80(a2, a3, a4, a11, -1);
  }
  if ( !*(_DWORD *)(this + 480) && !a2 )
  {
    v18 = operator new(0x5Cu);
    if ( v18 )
      v15 = sub_5F6130(v18);
    else
      v15 = 0;
    *(_DWORD *)(this + 480) = v15;
  }
  result = this;
  if ( *(_DWORD *)(this + 480) )
  {
    *(_DWORD *)(*(_DWORD *)(this + 480) + 4) = *(_DWORD *)(this + 4);
    sub_5F61D0(
      *(CPaneContainer **)(this + 480),
      a7 + 10,
      a8 + 6,
      a9 - 5,
      a10 - 3,
      a11,
      (struct CPaneDivider *)0xFFFFFFFF);
    return sub_5F6490(*(void **)(this + 480), 0, 0, 0);
  }
  return result;
}


//======================================================================
// sub_60BFF0
// entry 0060bff0  size 217  status ok
//======================================================================

int __thiscall sub_60BFF0(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  int v4; // [esp+8h] [ebp-18h]
  _DWORD *v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+1Ch] [ebp-4h]

  sub_5EF3E0(this);
  if ( !*(this + 121) )
  {
    v5 = operator new(0x184u);
    if ( v5 )
      v2 = sub_5F5BF0(v5);
    else
      v2 = 0;
    v6 = -1;
    *(this + 121) = v2;
  }
  *(_DWORD *)(*(this + 121) + 4) = *(this + 1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 121) + 64))(*(this + 121));
  return (*(int (__cdecl **)(int))(**(_DWORD **)(v4 + 484) + 116))(v6);
}


//======================================================================
// sub_60C0F0
// entry 0060c0f0  size 41  status ok
//======================================================================

_DWORD *__thiscall sub_60C0F0(_DWORD *this, int a2)
{
  if ( a2 >= 2048 )
    a2 = 2048;
  *(this + 117) = a2;
  return this;
}


//======================================================================
// sub_60C120
// entry 0060c120  size 27  status ok
//======================================================================

char __thiscall sub_60C120(_DWORD *this, int a2)
{
  *(this + 118) = a2;
  return 1;
}


//======================================================================
// sub_60C140
// entry 0060c140  size 328  status ok
//======================================================================

_BYTE *__thiscall sub_60C140(int this)
{
  _BYTE *result; // eax
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  sub_5F6270((CMFCScanliner *)this);
  result = (_BYTE *)this;
  if ( *(_DWORD *)(this + 476) )
    result = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 476) + 116))(*(_DWORD *)(this + 476));
  if ( *(_DWORD *)(this + 480) )
    result = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 480) + 116))(*(_DWORD *)(this + 480));
  if ( *(_DWORD *)(this + 484) )
  {
    if ( *(_BYTE *)(this + 464) )
    {
      sub_5F9590(*(_DWORD **)(this + 4), this);
      if ( !*(_DWORD *)(*(_DWORD *)(this + 484) + 380) )
      {
        v4 = operator new(0x24u);
        if ( v4 )
          v2 = sub_5F0C20(v4, this);
        else
          v2 = 0;
        sub_5F5DF0(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 484), (void (__thiscall ***)(_DWORD, _DWORD))v2);
      }
      return sub_5F0B90((_BYTE *)this);
    }
    else
    {
      sub_5F9590(*(_DWORD **)(this + 4), 0);
      sub_5F0BB0((_BYTE *)this);
      return sub_5F5DF0(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 484), 0);
    }
  }
  return result;
}


//======================================================================
// sub_60C290
// entry 0060c290  size 105  status ok
//======================================================================

_BYTE *__thiscall sub_60C290(int this)
{
  _BYTE *result; // eax

  sub_5F62B0((CWnd *)this);
  result = (_BYTE *)this;
  if ( *(_DWORD *)(this + 476) )
    result = (_BYTE *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 476) + 112))(*(_DWORD *)(this + 476));
  if ( *(_DWORD *)(this + 484) )
  {
    sub_5F9590(*(_DWORD **)(this + 4), 0);
    sub_5F5DF0(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 484), 0);
    return sub_5F0BB0((_BYTE *)this);
  }
  return result;
}


//======================================================================
// sub_60C300
// entry 0060c300  size 48  status ok
//======================================================================

int __thiscall sub_60C300(_BYTE *this)
{
  int result; // eax

  result = (int)this;
  if ( !*(this + 464) )
  {
    *(this + 464) = 1;
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 116))(this);
  }
  return result;
}


//======================================================================
// sub_60C330
// entry 0060c330  size 64  status ok
//======================================================================

int __thiscall sub_60C330(_BYTE *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 464) )
  {
    *(this + 464) = 0;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 116))(this);
  }
  return result;
}


//======================================================================
// sub_60C370
// entry 0060c370  size 20  status ok
//======================================================================

char __thiscall sub_60C370(_BYTE *this)
{
  return *(this + 464);
}


//======================================================================
// sub_60C390
// entry 0060c390  size 62  status ok
//======================================================================

int __thiscall sub_60C390(_DWORD **this, char *Str2)
{
  int result; // eax
  int v3; // eax

  result = sub_5EE5E0(this, Str2);
  if ( *(this + 1) )
  {
    v3 = pairNode::raw_length((pairNode *)this);
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 1) + 52))(*(this + 1), v3);
  }
  return result;
}


//======================================================================
// sub_60C3D0
// entry 0060c3d0  size 62  status ok
//======================================================================

int __thiscall sub_60C3D0(char **this)
{
  int result; // eax

  result = sub_62DBB0(*(this + 23));
  if ( (_BYTE)result )
  {
    *(this + 40) = 0;
    return (*((int (__thiscall **)(char **))*this + 43))(this);
  }
  return result;
}


//======================================================================
// sub_60C500
// entry 0060c500  size 91  status ok
//======================================================================

int __thiscall sub_60C500(_BYTE *this, int a2)
{
  *(this + 72) = (_BYTE)a2 || __PAIR16__(BYTE1(a2), 0) != BYTE2(a2);
  *((_WORD *)this + 252) = a2;
  *(this + 506) = BYTE2(a2);
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 172))(this);
}


//======================================================================
// sub_60C560
// entry 0060c560  size 88  status ok
//======================================================================

int __thiscall sub_60C560(int *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 120) )
  {
    result = *(this + 120);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 120))(*(this + 120), 1);
    *(this + 120) = 0;
  }
  return result;
}


//======================================================================
// sub_60C5F0
// entry 0060c5f0  size 165  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_60C5F0(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &sciList::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 32;
  *((_DWORD *)this + 3) = operator new(0x80u);
  memset((void *)(*((_DWORD *)this + 3) + 4 * *((_DWORD *)this + 1)), 0, 0x80u);
  return this;
}


//======================================================================
// sub_60C6A0
// entry 0060c6a0  size 124  status ok
//======================================================================

void __thiscall sub_60C6A0(int this)
{
  *(_DWORD *)this = &sciList::`vftable';
  sub_60CA10(this);
  if ( *(_DWORD *)(this + 8) )
    operator delete(*(void **)(this + 12));
  CNoTrackObject::~CNoTrackObject((CNoTrackObject *)this);
}


//======================================================================
// sub_60C720
// entry 0060c720  size 166  status ok
//======================================================================

int __thiscall sub_60C720(int this)
{
  int result; // eax
  char *v3; // [esp+Ch] [ebp-4h]

  *(_DWORD *)(this + 8) *= 2;
  v3 = (char *)operator new(4 * *(_DWORD *)(this + 8));
  memmove(v3, *(const void **)(this + 12), 4 * *(_DWORD *)(this + 4));
  memset(&v3[4 * *(_DWORD *)(this + 4)], 0, 4 * (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)));
  operator delete(*(void **)(this + 12));
  *(_DWORD *)(this + 12) = v3;
  return result;
}


//======================================================================
// sub_60C7D0
// entry 0060c7d0  size 97  status ok
//======================================================================

int __thiscall sub_60C7D0(int this, int a2)
{
  if ( *(_DWORD *)(this + 4) == *(_DWORD *)(this + 8) )
    sub_60C720(this);
  memmove((void *)(*(_DWORD *)(this + 12) + 4), *(const void **)(this + 12), 4 * *(_DWORD *)(this + 4));
  **(_DWORD **)(this + 12) = a2;
  ++*(_DWORD *)(this + 4);
  return this;
}


//======================================================================
// sub_60C840
// entry 0060c840  size 68  status ok
//======================================================================

_DWORD *__thiscall sub_60C840(_DWORD *this, int a2)
{
  if ( *(this + 1) == *(this + 2) )
    sub_60C720((int)this);
  *(_DWORD *)(*(this + 3) + 4 * (*(this + 1))++) = a2;
  return this;
}


//======================================================================
// sub_60C890
// entry 0060c890  size 124  status ok
//======================================================================

_DWORD *__thiscall sub_60C890(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_60CAC0(a2);
  if ( result != (_DWORD *)-1 )
  {
    memmove(
      (void *)(*(this + 3) + 4 * (_DWORD)result),
      (const void *)(*(this + 3) + 4 * (_DWORD)result + 4),
      4 * (*(this + 1) - (_DWORD)result) - 4);
    *(_DWORD *)(*(this + 3) + 4 * (*(this + 1))-- - 4) = 0;
    return this;
  }
  return result;
}


//======================================================================
// sub_60C910
// entry 0060c910  size 129  status ok
//======================================================================

char __thiscall sub_60C910(_DWORD *this)
{
  _DWORD *v3; // [esp+10h] [ebp-8h]
  int v4; // [esp+14h] [ebp-4h]

  v4 = 0;
  v3 = (_DWORD *)*(this + 3);
  while ( v4 < *(this + 1) )
  {
    if ( *v3 )
      (**(void (__thiscall ***)(_DWORD, int))*v3)(*v3, 1);
    *v3 = 0;
    ++v4;
    ++v3;
  }
  *(this + 1) = 0;
  return 1;
}


//======================================================================
// sub_60C9E0
// entry 0060c9e0  size 35  status ok
//======================================================================

bool __stdcall sub_60C9E0(int a1)
{
  return sub_60CAC0(a1) != -1;
}


//======================================================================
// sub_60CA10
// entry 0060ca10  size 48  status ok
//======================================================================

void *__thiscall sub_60CA10(int this)
{
  void *result; // eax

  result = memset(*(void **)(this + 12), 0, 4 * *(_DWORD *)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  return result;
}


//======================================================================
// sub_60CA40
// entry 0060ca40  size 48  status ok
//======================================================================

int __thiscall sub_60CA40(_DWORD *this, int a2)
{
  if ( a2 >= 0 && a2 < *(this + 1) )
    return *(_DWORD *)(*(this + 3) + 4 * a2);
  else
    return 0;
}


//======================================================================
// sub_60CA70
// entry 0060ca70  size 72  status ok
//======================================================================

_DWORD *__thiscall sub_60CA70(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  while ( a2 >= *(this + 2) )
    sub_60C720((int)this);
  *(_DWORD *)(*(this + 3) + 4 * a2) = a3;
  result = this;
  if ( a2 > *(this + 1) )
  {
    *(this + 1) = a2 + 1;
    return this;
  }
  return result;
}


//======================================================================
// sub_60CAC0
// entry 0060cac0  size 82  status ok
//======================================================================

int __thiscall sub_60CAC0(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-8h]
  _DWORD *v4; // [esp+8h] [ebp-4h]

  v3 = 0;
  v4 = (_DWORD *)*(this + 3);
  while ( v3 < *(this + 1) )
  {
    if ( *v4 == a2 )
      return v3;
    ++v3;
    ++v4;
  }
  return -1;
}


//======================================================================
// sub_60CB20
// entry 0060cb20  size 143  status ok
//======================================================================

int __thiscall sub_60CB20(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-4h]

  result = sub_60CAC0(this, a2);
  v5 = result;
  if ( result > -1 )
  {
    if ( *(this + 1) == *(this + 2) )
      sub_60C720((int)this);
    memmove((void *)(*(this + 3) + 4 * v5 + 8), (const void *)(*(this + 3) + 4 * v5 + 4), 4 * (*(this + 1) - v5) - 4);
    *(_DWORD *)(*(this + 3) + 4 * v5 + 4) = a3;
    ++*(this + 1);
    return (int)this;
  }
  return result;
}


//======================================================================
// sub_60CBB0
// entry 0060cbb0  size 176  status ok
//======================================================================

int __thiscall sub_60CBB0(_DWORD *this, int (__cdecl *a2)(int, int))
{
  int result; // eax
  int j; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < *(this + 1); ++i )
  {
    for ( j = 0; j < *(this + 1) - 1 - i; ++j )
    {
      v5 = sub_60CA40(this, j);
      v6 = sub_60CA40(this, j + 1);
      if ( a2(v5, v6) > 0 )
      {
        sub_60CA70(this, j, v6);
        sub_60CA70(this, j + 1, v5);
      }
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_60CC90
// entry 0060cc90  size 67  status ok
//======================================================================

HRESULT __cdecl sub_60CC90(int a1, LPVOID *ppv)
{
  HRESULT Instance; // [esp+0h] [ebp-4h]

  Instance = CoCreateInstance(&rclsid, 0, 1u, &riid, ppv);
  if ( Instance >= 0 )
    return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*ppv + 72))(*ppv, 0);
  return Instance;
}


//======================================================================
// sub_60CCE0
// entry 0060cce0  size 171  status ok
//======================================================================

HINSTANCE sub_60CCE0()
{
  char Destination[520]; // [esp+0h] [ebp-210h] BYREF
  HWND *v2; // [esp+20Ch] [ebp-4h]

  v2 = (HWND *)_RTDynamicCast(
                 *(_DWORD *)(dword_7960D8 + 16),
                 0,
                 &VWindow `RTTI Type Descriptor',
                 &Window `RTTI Type Descriptor',
                 0);
  if ( (*((unsigned __int8 (__thiscall **)(HWND *))*v2 + 12))(v2) )
    (*((void (__thiscall **)(HWND *, _DWORD))*v2 + 9))(v2, 0);
  strcpy(Destination, szHelp);
  sub_5EAA40(Destination);
  return ShellExecuteA(v2[35], "open", Destination, 0, 0, 1);
}


//======================================================================
// sub_60CD90
// entry 0060cd90  size 110  status ok
//======================================================================

HMENU __cdecl sub_60CD90(char a1)
{
  HMENU result; // eax
  HMENU Menu; // eax
  UINT v3; // [esp-4h] [ebp-8h]

  result = (HMENU)_RTDynamicCast(
                    *(_DWORD *)(dword_7960D8 + 16),
                    0,
                    &VWindow `RTTI Type Descriptor',
                    &Window `RTTI Type Descriptor',
                    0);
  if ( result )
  {
    result = GetMenu(*((HWND *)result + 35));
    if ( result )
    {
      v3 = uIDCheckItem;
      Menu = GetMenu(*(HWND *)(a1 != 0 ? 148 : 140));
      return (HMENU)CheckMenuItem(Menu, v3, a1 != 0 ? 8 : 0);
    }
  }
  return result;
}


//======================================================================
// sub_60D010
// entry 0060d010  size 276  status ok
//======================================================================

int __thiscall sub_60D010(void *this)
{
  int v2; // [esp+0h] [ebp-20h]

  *(_DWORD *)this = &Window::`vftable';
  if ( *((_BYTE *)this + 148) )
  {
    joyReleaseCapture(0);
    joyReleaseCapture(1u);
    operator delete[]((void *)dword_15E55D8);
    operator delete[]((void *)dword_15E55DC);
  }
  SetWindowLongA(*((HWND *)this + 35), 0, 0);
  WinHelpA(*((HWND *)this + 35), szHelp, 2u, 0);
  byte_15E55D2 = 1;
  sub_60E300(this);
  byte_15E55D2 = 0;
  if ( *((_DWORD *)this + 48) )
    DestroyMenu(*((HMENU *)this + 48));
  operator delete[](*((void **)this + 47));
  return sub_6132A0(v2);
}


//======================================================================
// sub_60D130
// entry 0060d130  size 980  status ok
//======================================================================

void *__thiscall sub_60D130(HWND *this, int a2, int a3)
{
  void *result; // eax
  size_t v4; // esi
  size_t v5; // eax
  bool v6; // [esp+4h] [ebp-2Ch]
  char v8; // [esp+1Fh] [ebp-11h]
  char *Destination; // [esp+20h] [ebp-10h]
  int i; // [esp+24h] [ebp-Ch]

  v6 = a2 != (unsigned __int16)sub_6135C0(this) || a3 != (unsigned __int16)sub_6135E0(this);
  result = (void *)sub_613360(a2, a3);
  if ( v6 )
  {
    v8 = *((_BYTE *)this + 149);
    byte_15E55D2 = 1;
    (*((void (__thiscall **)(HWND *))*this + 13))(this);
    byte_795F97 = sub_607900((int)"FullScreen", byte_795F97);
    GetSystemMetrics(0);
    if ( GetSystemMetrics(1) <= a3 )
    {
      *((_BYTE *)this + 150) = 1;
      byte_795F97 = 1;
    }
    *(this + 38) = (HWND)32;
    *(this + 39) = (HWND)sub_60E5E0;
    v4 = strlen(byte_795738);
    v5 = strlen(" Class");
    Destination = (char *)operator new(v4 + v5 + 1);
    strcpy(Destination, byte_795738);
    strcat(Destination, " Class");
    *(this + 47) = (HWND)Destination;
    *(this + 40) = 0;
    *(this + 41) = (HWND)4;
    *(this + 42) = (HWND)hInstance;
    *(this + 43) = (HWND)LoadIconA(hInstance, (LPCSTR)0x63);
    *(this + 44) = (HWND)LoadCursorA(0, (LPCSTR)0x7F00);
    *(this + 45) = (HWND)GetStockObject(4);
    *(this + 46) = 0;
    RegisterClassA((const WNDCLASSA *)(this + 38));
    byte_15E55D2 = 1;
    if ( (byte_795F97 == 1 || v8) && !*((_BYTE *)this + 92) )
      sub_60E050(this);
    else
      sub_60DD10(1);
    byte_15E55D2 = 0;
    (*((void (__thiscall **)(HWND *, HWND *))*this + 4))(this, this + 10);
    sub_60D6A0(this);
    if ( bmi.bmiHeader.biXPelsPerMeter != 2835 )
    {
      memset(bmi.bmiColors, 0, 0x400u);
      bmi.bmiHeader.biSize = 40;
      bmi.bmiHeader.biWidth = (unsigned __int16)sub_613580(this);
      bmi.bmiHeader.biHeight = (unsigned __int16)sub_6135A0(this);
      bmi.bmiHeader.biPlanes = 1;
      bmi.bmiHeader.biBitCount = 16;
      bmi.bmiHeader.biCompression = 0;
      bmi.bmiHeader.biSizeImage = 0;
      bmi.bmiHeader.biXPelsPerMeter = 2835;
      bmi.bmiHeader.biYPelsPerMeter = 2835;
      bmi.bmiHeader.biClrUsed = 0;
      bmi.bmiHeader.biClrImportant = 0;
    }
    joySetCapture(*(this + 35), 0, 0x10u, 1);
    joySetThreshold(0, 0x200u);
    joySetCapture(*(this + 35), 1u, 0x10u, 1);
    joySetThreshold(1u, 0x200u);
    dword_15E55D8 = (int)operator new(0x20u);
    result = operator new(0x20u);
    dword_15E55DC = (int)result;
    for ( i = 0; i < 2; ++i )
    {
      *(_DWORD *)(dword_15E55DC + 16 * i) = 0x8000;
      *(_DWORD *)(dword_15E55DC + 16 * i + 4) = 0x8000;
      *(_DWORD *)(dword_15E55DC + 16 * i + 12) = 0;
      *(_DWORD *)(dword_15E55D8 + 16 * i) = 0x8000;
      *(_DWORD *)(dword_15E55D8 + 16 * i + 4) = 0x8000;
      *(_DWORD *)(dword_15E55D8 + 16 * i + 12) = 0;
      result = (void *)(i + 1);
    }
  }
  return result;
}


//======================================================================
// sub_60D510
// entry 0060d510  size 248  status ok
//======================================================================

int __thiscall sub_60D510(int this)
{
  int SystemMetrics; // esi
  int result; // eax
  WINDOWPLACEMENT wndpl; // [esp+8h] [ebp-30h] BYREF
  bool v5; // [esp+37h] [ebp-1h]

  wndpl.length = 44;
  wndpl.showCmd = 2;
  GetWindowPlacement(*(HWND *)(this + 140), &wndpl);
  if ( wndpl.showCmd == 2 )
    ShowWindow(*(HWND *)(this + 140), 9);
  if ( *(_BYTE *)(this + 148) )
    v5 = sub_607900((int)"MaximizeWindow", 0);
  else
    v5 = 0;
  if ( byte_795FB9 )
  {
    if ( v5
      || *(_BYTE *)(this + 148)
      && (SystemMetrics = GetSystemMetrics(1), SystemMetrics <= (unsigned __int16)sub_613620(this)) )
    {
      ShowWindow(*(HWND *)(this + 140), 3);
    }
    else
    {
      ShowWindow(*(HWND *)(this + 140), 5);
    }
  }
  result = sub_6134A0(this);
  if ( byte_795FB9 )
    return SetForegroundWindow(*(HWND *)(this + 140));
  return result;
}


//======================================================================
// sub_60D610
// entry 0060d610  size 37  status ok
//======================================================================

int __thiscall sub_60D610(HWND *this)
{
  ShowWindow(*(this + 35), 0);
  return sub_6134C0(this);
}


//======================================================================
// sub_60D640
// entry 0060d640  size 86  status ok
//======================================================================

BOOL __thiscall sub_60D640(int this, int *a2)
{
  BOOL result; // eax

  result = this;
  if ( *(_DWORD *)(this + 144) )
  {
    if ( *(_BYTE *)(this + 136) )
      return PatBlt(*(HDC *)(this + 144), *a2, a2[1], a2[2], a2[3], 0x42u);
  }
  return result;
}


//======================================================================
// sub_60D6A0
// entry 0060d6a0  size 250  status ok
//======================================================================

BOOL __fastcall sub_60D6A0(int a1)
{
  BOOL result; // eax

  result = a1;
  if ( *(_DWORD *)(a1 + 144) )
  {
    result = memcmp((const void *)(a1 + 24), (const void *)(a1 + 40), 0x10u) == 0;
    if ( !result )
    {
      PatBlt(
        *(HDC *)(a1 + 144),
        *(_DWORD *)(a1 + 24),
        *(_DWORD *)(a1 + 28),
        *(_DWORD *)(a1 + 32),
        *(_DWORD *)(a1 + 44),
        0x42u);
      PatBlt(
        *(HDC *)(a1 + 144),
        *(_DWORD *)(a1 + 24),
        *(_DWORD *)(a1 + 44),
        *(_DWORD *)(a1 + 40),
        *(_DWORD *)(a1 + 52),
        0x42u);
      PatBlt(
        *(HDC *)(a1 + 144),
        *(_DWORD *)(a1 + 24),
        *(_DWORD *)(a1 + 52),
        *(_DWORD *)(a1 + 32),
        *(_DWORD *)(a1 + 36),
        0x42u);
      return PatBlt(
               *(HDC *)(a1 + 144),
               *(_DWORD *)(a1 + 48),
               *(_DWORD *)(a1 + 44),
               *(_DWORD *)(a1 + 32),
               *(_DWORD *)(a1 + 52),
               0x42u);
    }
  }
  return result;
}


//======================================================================
// sub_60D7A0
// entry 0060d7a0  size 83  status ok
//======================================================================

void __thiscall sub_60D7A0(int this, char *Str1)
{
  if ( Str1 )
  {
    if ( strcmp(Str1, *(const char **)(this + 132)) )
    {
      sub_614030(Str1);
      SetWindowTextA(*(HWND *)(this + 140), *(LPCSTR *)(this + 132));
    }
  }
}


//======================================================================
// sub_60D850
// entry 0060d850  size 553  status ok
//======================================================================

HLOCAL __thiscall sub_60D850(int this, int *a2)
{
  HLOCAL result; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  UINT v6; // eax
  DWORD LastError; // eax
  void *v8; // [esp-Ch] [ebp-68h]
  int v10; // [esp+8h] [ebp-54h]
  int v11; // [esp+Ch] [ebp-50h]
  int v12; // [esp+10h] [ebp-4Ch]
  int v13; // [esp+18h] [ebp-44h]
  int Status; // [esp+1Ch] [ebp-40h]
  CHAR Buffer[4]; // [esp+20h] [ebp-3Ch] BYREF
  int v16[4]; // [esp+24h] [ebp-38h] BYREF
  int xDest; // [esp+34h] [ebp-28h] BYREF
  int yDest; // [esp+38h] [ebp-24h]
  int v19; // [esp+3Ch] [ebp-20h]
  int v20; // [esp+40h] [ebp-1Ch]
  int v21[5]; // [esp+44h] [ebp-18h] BYREF
  void *lpvBits; // [esp+58h] [ebp-4h]

  result = (HLOCAL)this;
  if ( *(_DWORD *)(this + 144) )
  {
    xDest = *a2;
    yDest = a2[1];
    v19 = a2[2];
    v20 = a2[3];
    v13 = pairNode::raw_length(*(pairNode **)(this + 80));
    Status = ATL::COleDateTime::GetStatus(*(_DWORD *)(this + 80));
    v16[0] = 0;
    v16[1] = 0;
    v16[2] = Status;
    v16[3] = v13;
    v12 = (unsigned __int16)sub_613620(this);
    v21[0] = 0;
    v21[1] = 0;
    v21[2] = (unsigned __int16)sub_613600(this);
    v21[3] = v12;
    result = (HLOCAL)sub_624A70(&xDest, (int)v21, a2, (int)v16);
    if ( (_BYTE)result )
    {
      v10 = *(_DWORD *)(this + 44);
      v11 = *(_DWORD *)(this + 40);
      xDest += v11;
      yDest += v10;
      v19 += v11;
      v20 += v10;
      if ( unknown_libname_847(*(_DWORD *)(this + 80)) >= 0 )
      {
        lpvBits = (void *)sub_6238D0(0);
      }
      else
      {
        v3 = pairNode::raw_length(*(pairNode **)(this + 80));
        lpvBits = (void *)sub_6238D0(v3 - 1);
        v4 = pairNode::raw_length(*(pairNode **)(this + 80)) - a2[3];
        v5 = unknown_libname_847(*(_DWORD *)(this + 80));
        lpvBits = (char *)lpvBits + -v5 * v4;
      }
      bmi.bmiHeader.biHeight = pairNode::raw_length(*(pairNode **)(this + 80));
      bmi.bmiHeader.biWidth = ATL::COleDateTime::GetStatus(*(_DWORD *)(this + 80));
      bmi.bmiHeader.biBitCount = 8 * unknown_libname_726(*(_DWORD *)(this + 80));
      v8 = lpvBits;
      v6 = pairNode::raw_length(*(pairNode **)(this + 80));
      result = (HLOCAL)SetDIBitsToDevice(
                         *(HDC *)(this + 144),
                         xDest,
                         yDest,
                         v19 - xDest,
                         v20 - yDest,
                         *a2,
                         0,
                         0,
                         v6,
                         v8,
                         &bmi,
                         0);
      v21[4] = (int)result;
      if ( !result )
      {
        LastError = GetLastError();
        FormatMessageA(0x1100u, 0, LastError, 0x400u, Buffer, 0, 0);
        sub_62FDE0("Error returned by SetDIBitsToDevice: %s", Buffer[0]);
        return LocalFree(*(HLOCAL *)Buffer);
      }
    }
  }
  return result;
}


//======================================================================
// sub_60DA80
// entry 0060da80  size 93  status ok
//======================================================================

int __thiscall sub_60DA80(_BYTE *this)
{
  int result; // eax

  result = (int)this;
  if ( !*(this + 92) )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 16) + 48))(*(_DWORD *)(dword_7960D8 + 16));
    if ( !(_BYTE)result )
    {
      byte_15E55D2 = 1;
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 52))(this);
      result = sub_60E050(this);
      byte_15E55D2 = 0;
    }
  }
  return result;
}


//======================================================================
// sub_60DAE0
// entry 0060dae0  size 87  status ok
//======================================================================

int __thiscall sub_60DAE0(void *this, char a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 16) + 48))(*(_DWORD *)(dword_7960D8 + 16));
  if ( (_BYTE)result )
  {
    byte_15E55D2 = 1;
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
    result = sub_60DD10(a2);
    byte_15E55D2 = 0;
  }
  return result;
}


//======================================================================
// sub_60DB40
// entry 0060db40  size 188  status ok
//======================================================================

int __thiscall sub_60DB40(HWND *this)
{
  int result; // eax
  _DWORD *v3; // [esp+4h] [ebp-4h]

  if ( !(*((unsigned __int8 (__thiscall **)(HWND *))*this + 11))(this) )
    return ShowWindow(*(this + 35), 6);
  v3 = (_DWORD *)_RTDynamicCast(
                   *(_DWORD *)(dword_7960D8 + 16),
                   0,
                   &VWindow `RTTI Type Descriptor',
                   &Window `RTTI Type Descriptor',
                   0);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 48))(v3) )
    return (*(int (__thiscall **)(_DWORD *, int))(*v3 + 36))(v3, 1);
  result = sub_60DC00(v3[35]);
  if ( (_BYTE)result )
  {
    sub_60DC50(v3[35]);
    return (*(int (__thiscall **)(_DWORD *))(*v3 + 32))(v3);
  }
  return result;
}


//======================================================================
// sub_60DC00
// entry 0060dc00  size 78  status ok
//======================================================================

bool __cdecl sub_60DC00(int a1)
{
  return !sub_60CC90(0, &ppv) && (*(int (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 80))(ppv, a1, 17) == 0;
}


//======================================================================
// sub_60DC50
// entry 0060dc50  size 88  status ok
//======================================================================

int __cdecl sub_60DC50(int a1)
{
  int result; // eax

  if ( ppv )
  {
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 76))(ppv);
    (*(void (__thiscall **)(LPVOID, LPVOID, int, int))(*(_DWORD *)ppv + 80))(ppv, ppv, a1, 8);
    result = (*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
    ppv = 0;
  }
  return result;
}


//======================================================================
// sub_60DCB0
// entry 0060dcb0  size 57  status ok
//======================================================================

bool __thiscall sub_60DCB0(_BYTE *this)
{
  return !*(this + 150) && !*(this + 92);
}


//======================================================================
// sub_60DCF0
// entry 0060dcf0  size 20  status ok
//======================================================================

char __thiscall sub_60DCF0(_BYTE *this)
{
  return *(this + 149);
}


//======================================================================
// sub_60DD10
// entry 0060dd10  size 822  status ok
//======================================================================

HMENU __thiscall sub_60DD10(int this, char a2)
{
  int v2; // esi
  int v4; // [esp+4h] [ebp-80h]
  LONG bottom; // [esp+Ch] [ebp-78h]
  LONG right; // [esp+10h] [ebp-74h]
  LONG v8; // [esp+14h] [ebp-70h]
  int v9; // [esp+20h] [ebp-64h]
  int v10; // [esp+24h] [ebp-60h]
  LONG v11; // [esp+28h] [ebp-5Ch]
  int v12; // [esp+34h] [ebp-50h]
  int v13; // [esp+38h] [ebp-4Ch]
  LONG top; // [esp+3Ch] [ebp-48h]
  int v15; // [esp+48h] [ebp-3Ch]
  struct tagRECT Rect; // [esp+4Ch] [ebp-38h] BYREF
  int v17; // [esp+5Ch] [ebp-28h]
  DWORD dwStyle; // [esp+60h] [ebp-24h]
  int nWidth; // [esp+64h] [ebp-20h]
  int v20; // [esp+68h] [ebp-1Ch]
  int pvParam; // [esp+6Ch] [ebp-18h] BYREF
  int v22; // [esp+70h] [ebp-14h]
  int v23; // [esp+74h] [ebp-10h]
  int SystemMetrics; // [esp+78h] [ebp-Ch]
  int v25; // [esp+7Ch] [ebp-8h]
  int nHeight; // [esp+80h] [ebp-4h]

  nWidth = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)this + 56))(this);
  nHeight = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)this + 60))(this);
  if ( !SystemParametersInfoA(0x30u, 0, &pvParam, 0) )
  {
    v22 = 0;
    pvParam = 0;
    SystemMetrics = GetSystemMetrics(0);
    v23 = GetSystemMetrics(1);
  }
  v15 = v23 - pvParam;
  v25 = SystemMetrics - v22;
  v2 = GetSystemMetrics(1);
  if ( v2 <= (unsigned __int16)sub_613620(this) && a2 && !*(_BYTE *)(this + 92) )
  {
    *(_BYTE *)(this + 150) = 1;
    return (HMENU)sub_60E050(this);
  }
  dwStyle = (DWORD)&unk_CB0000;
  *(_DWORD *)(this + 140) = CreateWindowExA(
                              0,
                              *(LPCSTR *)(this + 188),
                              *(LPCSTR *)(this + 132),
                              (DWORD)&unk_CB0000,
                              (v15 - nWidth) / 2,
                              (v25 - nHeight) / 2,
                              nWidth,
                              nHeight,
                              0,
                              0,
                              hInstance,
                              (LPVOID)this);
  DragAcceptFiles(*(HWND *)(this + 140), (unsigned __int8)byte_795FBA);
  *(_DWORD *)(this + 144) = GetDC(*(HWND *)(this + 140));
  GetClientRect(*(HWND *)(this + 140), &Rect);
  v20 = Rect.right - Rect.left;
  v4 = Rect.right - Rect.left;
  if ( Rect.right - Rect.left > 1152 )
  {
    if ( v4 == 1280 )
    {
      v17 = 1024;
    }
    else
    {
      if ( v4 != 1600 )
        goto LABEL_22;
      v17 = 1200;
    }
  }
  else
  {
    switch ( v4 )
    {
      case 1152:
        v17 = 864;
        break;
      case 640:
        v17 = 480;
        break;
      case 800:
        v17 = 600;
        break;
      case 1024:
        v17 = 768;
        break;
      default:
LABEL_22:
        v17 = Rect.bottom - Rect.top;
        break;
    }
  }
  v12 = v17 + Rect.top;
  v13 = v20 + Rect.left;
  top = Rect.top;
  *(_DWORD *)(this + 24) = Rect.left;
  *(_DWORD *)(this + 28) = top;
  *(_DWORD *)(this + 32) = v13;
  *(_DWORD *)(this + 36) = v12;
  v9 = v17 + Rect.top;
  v10 = v20 + Rect.left;
  v11 = Rect.top;
  *(_DWORD *)(this + 40) = Rect.left;
  *(_DWORD *)(this + 44) = v11;
  *(_DWORD *)(this + 48) = v10;
  *(_DWORD *)(this + 52) = v9;
  GetWindowRect(*(HWND *)(this + 140), &Rect);
  bottom = Rect.bottom;
  right = Rect.right;
  v8 = Rect.top;
  *(_DWORD *)(this + 8) = Rect.left;
  *(_DWORD *)(this + 12) = v8;
  *(_DWORD *)(this + 16) = right;
  *(_DWORD *)(this + 20) = bottom;
  *(_BYTE *)(this + 149) = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  if ( a2 )
    sub_607930((int)"FullScreen", 0);
  byte_15E55D0 = a2 == 0;
  return sub_60CD90(0);
}


//======================================================================
// sub_60E050
// entry 0060e050  size 617  status ok
//======================================================================

int __thiscall sub_60E050(int this)
{
  HWND Window; // eax
  int nHeight; // [esp+8h] [ebp-8h]
  unsigned int nWidth; // [esp+Ch] [ebp-4h]

  nWidth = (unsigned __int16)sub_613600(this);
  if ( nWidth > 0x480 )
  {
    if ( nWidth == 1280 )
    {
      nHeight = 1024;
      Window = CreateWindowExA(
                 0,
                 *(LPCSTR *)(this + 188),
                 *(LPCSTR *)(this + 132),
                 0x80000000,
                 0,
                 0,
                 1280,
                 1024,
                 0,
                 0,
                 hInstance,
                 (LPVOID)this);
      goto LABEL_17;
    }
    if ( nWidth == 1600 )
    {
      nHeight = 1200;
      Window = CreateWindowExA(
                 0,
                 *(LPCSTR *)(this + 188),
                 *(LPCSTR *)(this + 132),
                 0x80000000,
                 0,
                 0,
                 1600,
                 1200,
                 0,
                 0,
                 hInstance,
                 (LPVOID)this);
      goto LABEL_17;
    }
  }
  else
  {
    switch ( nWidth )
    {
      case 0x480u:
        nHeight = 864;
        Window = CreateWindowExA(
                   0,
                   *(LPCSTR *)(this + 188),
                   *(LPCSTR *)(this + 132),
                   0x80000000,
                   0,
                   0,
                   1152,
                   864,
                   0,
                   0,
                   hInstance,
                   (LPVOID)this);
        goto LABEL_17;
      case 0x280u:
        nHeight = 480;
        Window = CreateWindowExA(
                   0,
                   *(LPCSTR *)(this + 188),
                   *(LPCSTR *)(this + 132),
                   0x80000000,
                   0,
                   0,
                   640,
                   480,
                   0,
                   0,
                   hInstance,
                   (LPVOID)this);
        goto LABEL_17;
      case 0x320u:
        nHeight = 600;
        Window = CreateWindowExA(
                   0,
                   *(LPCSTR *)(this + 188),
                   *(LPCSTR *)(this + 132),
                   0x80000000,
                   0,
                   0,
                   800,
                   600,
                   0,
                   0,
                   hInstance,
                   (LPVOID)this);
        goto LABEL_17;
      case 0x400u:
        nHeight = 768;
        Window = CreateWindowExA(
                   0,
                   *(LPCSTR *)(this + 188),
                   *(LPCSTR *)(this + 132),
                   0x80000000,
                   0,
                   0,
                   1024,
                   768,
                   0,
                   0,
                   hInstance,
                   (LPVOID)this);
        goto LABEL_17;
    }
  }
  nHeight = (unsigned __int16)sub_613620(this);
  Window = CreateWindowExA(
             0,
             *(LPCSTR *)(this + 188),
             *(LPCSTR *)(this + 132),
             0x80000000,
             0,
             0,
             nWidth,
             nHeight,
             0,
             0,
             hInstance,
             (LPVOID)this);
LABEL_17:
  *(_DWORD *)(this + 140) = Window;
  if ( byte_795FB9 )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  else
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
  *(_BYTE *)(this + 149) = 1;
  if ( *(_DWORD *)(this + 140)
    && (sub_60DC00(*(_DWORD *)(this + 140))
     && ((unsigned __int8)sub_60E2C0(nWidth, nHeight, 24)
      || (unsigned __int8)sub_60E2C0(nWidth, nHeight, 16)
      || (unsigned __int8)sub_60E2C0(640, 480, 24)
      || (unsigned __int8)sub_60E2C0(640, 480, 16)
      || (unsigned __int8)sub_60E2C0(640, 480, 8))
     || *(_BYTE *)(this + 150)) )
  {
    byte_795F97 = 1;
    *(_DWORD *)(this + 144) = GetDC(*(HWND *)(this + 140));
    sub_60CD90(1);
    byte_15E55D3 = 1;
    byte_15E55D5 = 0;
  }
  else
  {
    sub_60DC50(*(_DWORD *)(this + 140));
    *(_BYTE *)(this + 149) = 0;
    byte_795F97 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    sub_60DD10(this, 1);
  }
  return sub_607930((int)"FullScreen", byte_795F97);
}


//======================================================================
// sub_60E2C0
// entry 0060e2c0  size 62  status ok
//======================================================================

bool __cdecl sub_60E2C0(int a1, int a2, int a3)
{
  int v3; // ecx

  return (*(int (__stdcall **)(LPVOID, int, int, int, int, _DWORD, int))(*(_DWORD *)ppv + 84))(
           ppv,
           a1,
           a2,
           a3,
           dword_7950B8,
           0,
           v3) == 0;
}


//======================================================================
// sub_60E300
// entry 0060e300  size 185  status ok
//======================================================================

BOOL __thiscall sub_60E300(void *this)
{
  BOOL result; // eax
  HPALETTE StockObject; // eax
  HPALETTE ho; // [esp+4h] [ebp-4h]

  result = (BOOL)this;
  if ( *((_DWORD *)this + 35) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 48))(this) )
    {
      sub_60DC50(*((_DWORD *)this + 35));
      *((_BYTE *)this + 149) = 0;
    }
    if ( *((_DWORD *)this + 36) )
    {
      StockObject = (HPALETTE)GetStockObject(15);
      ho = SelectPalette(*((HDC *)this + 36), StockObject, 0);
      DeleteObject(ho);
      ReleaseDC(*((HWND *)this + 35), *((HDC *)this + 36));
      *((_DWORD *)this + 36) = 0;
    }
    return DestroyWindow(*((HWND *)this + 35));
  }
  return result;
}


//======================================================================
// sub_60E3C0
// entry 0060e3c0  size 63  status ok
//======================================================================

int __thiscall sub_60E3C0(_BYTE *this)
{
  int v2; // [esp+0h] [ebp-8h]

  if ( *(this + 149) )
    v2 = 0;
  else
    v2 = 2 * GetSystemMetrics(7);
  return v2 + (unsigned __int16)sub_613600(this);
}


//======================================================================
// sub_60E400
// entry 0060e400  size 76  status ok
//======================================================================

int __thiscall sub_60E400(_BYTE *this)
{
  int SystemMetrics; // esi
  int v3; // [esp+4h] [ebp-8h]

  if ( *(this + 149) )
  {
    v3 = 0;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(4);
    v3 = SystemMetrics + 2 * GetSystemMetrics(8);
  }
  return v3 + (unsigned __int16)sub_613620(this);
}


//======================================================================
// sub_60E450
// entry 0060e450  size 385  status ok
//======================================================================

int __thiscall sub_60E450(int this)
{
  int v1; // esi
  int v2; // esi
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax
  int v7; // [esp+8h] [ebp-5Ch]
  int v8; // [esp+Ch] [ebp-58h]
  LONG v9; // [esp+14h] [ebp-50h]
  LONG v10; // [esp+18h] [ebp-4Ch]
  LONG v11; // [esp+1Ch] [ebp-48h]
  LONG bottom; // [esp+28h] [ebp-3Ch]
  LONG right; // [esp+2Ch] [ebp-38h]
  LONG top; // [esp+30h] [ebp-34h]
  RECT v15; // [esp+3Ch] [ebp-28h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-18h] BYREF
  int v17; // [esp+5Ch] [ebp-8h]
  int v18; // [esp+60h] [ebp-4h]

  GetWindowRect(*(HWND *)(this + 140), &Rect);
  bottom = Rect.bottom;
  right = Rect.right;
  top = Rect.top;
  *(_DWORD *)(this + 8) = Rect.left;
  *(_DWORD *)(this + 12) = top;
  *(_DWORD *)(this + 16) = right;
  *(_DWORD *)(this + 20) = bottom;
  GetClientRect(*(HWND *)(this + 140), &v15);
  InvalidateRect(*(HWND *)(this + 140), &v15, 1);
  v9 = v15.bottom;
  v10 = v15.right;
  v11 = v15.top;
  *(_DWORD *)(this + 24) = v15.left;
  *(_DWORD *)(this + 28) = v11;
  *(_DWORD *)(this + 32) = v10;
  *(_DWORD *)(this + 36) = v9;
  v1 = (unsigned __int16)sub_6135C0(this);
  v18 = (v1 - (unsigned __int16)sub_613600(this)) / 2;
  v2 = (unsigned __int16)sub_6135E0(this);
  v17 = (v2 - (unsigned __int16)sub_613620(this)) / 2;
  if ( v18 < 0 )
    v18 = 0;
  if ( v17 < 0 )
    v17 = 0;
  v3 = sub_613620(this);
  v7 = v17 + v3;
  v4 = sub_613600(this);
  v8 = v18 + v4;
  *(_DWORD *)(this + 40) = v18;
  *(_DWORD *)(this + 44) = v17;
  *(_DWORD *)(this + 48) = v8;
  *(_DWORD *)(this + 52) = v7;
  return v8;
}


//======================================================================
// sub_60E5E0
// entry 0060e5e0  size 3182  status ok
//======================================================================

LRESULT __stdcall sub_60E5E0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int SystemMetrics; // esi
  const CHAR *v6; // eax
  const CHAR *v7; // [esp-Ch] [ebp-1E0h]
  WINDOWPLACEMENT wndpl; // [esp+24h] [ebp-1B0h] BYREF
  RECT rcPaint; // [esp+50h] [ebp-184h] BYREF
  LRESULT v10; // [esp+60h] [ebp-174h]
  CHAR szFile[264]; // [esp+64h] [ebp-170h] BYREF
  int v12; // [esp+16Ch] [ebp-68h]
  _BYTE *WindowLongA; // [esp+170h] [ebp-64h]
  LPARAM v14; // [esp+174h] [ebp-60h]
  FILE *Stream; // [esp+178h] [ebp-5Ch]
  UINT iFile; // [esp+17Ch] [ebp-58h]
  signed int FileA; // [esp+180h] [ebp-54h]
  struct tagPAINTSTRUCT Paint; // [esp+184h] [ebp-50h] BYREF
  LPARAM v19; // [esp+1C8h] [ebp-Ch]
  struct tagPOINT Point; // [esp+1CCh] [ebp-8h] BYREF

  WindowLongA = (_BYTE *)GetWindowLongA(hWnd, 0);
  if ( Msg != 1 && !WindowLongA )
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  if ( Msg <= 0x100 )
  {
    if ( Msg != 256 )
    {
      switch ( Msg )
      {
        case 1u:
          SetWindowLongA(hWnd, 0, *(_DWORD *)lParam);
          *(_DWORD *)(GetWindowLongA(hWnd, 0) + 140) = hWnd;
          return 0;
        case 3u:
          if ( WindowLongA )
            (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)WindowLongA + 64))(WindowLongA);
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        case 5u:
          if ( wParam )
          {
            if ( wParam == 2 && WindowLongA && (unsigned __int8)sub_614010(WindowLongA) && WindowLongA[148] )
              sub_607930((int)"MaximizeWindow", 1);
          }
          else if ( WindowLongA && (unsigned __int8)sub_614010(WindowLongA) && WindowLongA[148] )
          {
            sub_607930((int)"MaximizeWindow", 0);
          }
          if ( WindowLongA )
            (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)WindowLongA + 64))(WindowLongA);
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        case 6u:
          if ( (_WORD)wParam )
          {
            if ( (unsigned __int16)wParam != 1 )
            {
              if ( (unsigned __int16)wParam != 2 )
                return DefWindowProcA(hWnd, Msg, wParam, lParam);
              if ( !WindowLongA[89] )
                byte_15E55E2 = 1;
            }
            if ( byte_15E55D0 )
            {
              byte_15E55D0 = 0;
              (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)WindowLongA + 32))(WindowLongA);
            }
            if ( *(_DWORD *)(dword_7960D8 + 8) )
            {
              sub_608270(*(_BYTE **)(dword_7960D8 + 8));
              sub_60A800(*(ATL::CComCriticalSection **)(dword_7960D8 + 8));
            }
          }
          else if ( *(_DWORD *)(dword_7960D8 + 8) )
          {
            sub_608290(*(_BYTE **)(dword_7960D8 + 8));
            sub_60A6A0(*(_DWORD *)(dword_7960D8 + 8));
          }
          break;
        case 0xFu:
          BeginPaint(hWnd, &Paint);
          OffsetRect(&Paint.rcPaint, -*((_DWORD *)WindowLongA + 10), -*((_DWORD *)WindowLongA + 11));
          rcPaint = Paint.rcPaint;
          EndPaint(hWnd, &Paint);
          sub_613E30(&rcPaint);
          return 0;
        case 0x10u:
        case 0x12u:
          sub_630030();
          return 0;
        case 0x14u:
          sub_60D6A0((int)WindowLongA);
          return 0;
        case 0x1Cu:
          if ( wParam )
          {
            sub_613D20(WindowLongA);
            sub_613E70(WindowLongA);
            byte_15E55D3 = 1;
            byte_15E55D5 = 0;
          }
          else
          {
            byte_15E55D5 = 1;
          }
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        case 0x7Eu:
          if ( WindowLongA[88] )
          {
            byte_7950B5 = wParam;
            sub_613D20(WindowLongA);
            sub_613E70(WindowLongA);
          }
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        case 0x84u:
          v10 = DefWindowProcA(hWnd, Msg, wParam, lParam);
          if ( v10 != 1 && (unsigned __int8)sub_631420() )
            return -2;
          if ( v10 == 2 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)WindowLongA + 48))(WindowLongA) )
              return 0;
            SystemMetrics = GetSystemMetrics(1);
            if ( SystemMetrics == (unsigned __int16)sub_613620(WindowLongA) )
              return 0;
          }
          return v10;
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if ( wParam <= 0x1B || wParam >= 0x29 && wParam != 46 || wParam == 32 )
    {
      sub_630A90(WindowLongA, wParam, 1, 0);
    }
    else
    {
      sub_630A90(WindowLongA, wParam, 0, 0);
      sub_630A90(WindowLongA, wParam, 1, 0);
    }
    return 0;
  }
  if ( Msg <= 0x200 )
  {
    if ( Msg == 512 )
    {
      if ( !byte_15E55D1 && (WindowLongA[89] || byte_15E55D3) )
      {
        byte_15E55D1 = 1;
        sub_630400((__int16)lParam - *((_DWORD *)WindowLongA + 10), SHIWORD(lParam) - *((_DWORD *)WindowLongA + 11));
        byte_15E55D1 = 0;
      }
    }
    else
    {
      switch ( Msg )
      {
        case 0x101u:
          sub_630950(WindowLongA, wParam, 0, 1);
          return 0;
        case 0x102u:
          if ( (((unsigned int)&unk_1000000 & lParam) != 0 || wParam == 8) && wParam != 13 )
            sub_630A90(WindowLongA, wParam, 0, 0);
          else
            sub_630950(WindowLongA, wParam, 0, 0);
          return 0;
        case 0x104u:
          if ( wParam != 13
            || !WindowLongA
            || !(unsigned __int8)sub_630C90()
            || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)WindowLongA + 44))(WindowLongA) )
          {
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
          }
          sub_5F2D10(-100);
          break;
        case 0x111u:
          sub_5F2D10(wParam);
          return 0;
        case 0x112u:
          if ( wParam != 61696 || !(unsigned __int8)sub_631420() )
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
          return 0;
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
    }
    return 0;
  }
  if ( Msg <= 0x20A )
  {
    if ( Msg == 522 )
    {
      if ( !byte_15E55D1 && (WindowLongA[89] || byte_15E55D3) )
      {
        Point.x = (__int16)lParam - *((_DWORD *)WindowLongA + 10);
        Point.y = SHIWORD(lParam) - *((_DWORD *)WindowLongA + 11);
        ScreenToClient(hWnd, &Point);
        sub_630830(WindowLongA, Point.x, Point.y, SHIWORD(wParam));
      }
    }
    else
    {
      switch ( Msg )
      {
        case 0x201u:
          if ( byte_15E55E2 )
            goto LABEL_28;
          SetCapture(hWnd);
          byte_15E55E1 = 1;
          sub_630550(
            WindowLongA,
            (__int16)lParam - *((_DWORD *)WindowLongA + 10),
            SHIWORD(lParam) - *((_DWORD *)WindowLongA + 11),
            0,
            1);
          break;
        case 0x202u:
          if ( !byte_15E55E0 )
            ReleaseCapture();
          byte_15E55E1 = 0;
          sub_630550(
            WindowLongA,
            (__int16)lParam - *((_DWORD *)WindowLongA + 10),
            SHIWORD(lParam) - *((_DWORD *)WindowLongA + 11),
            0,
            0);
          return 0;
        case 0x204u:
          if ( byte_15E55E2 )
          {
LABEL_28:
            byte_15E55E2 = 0;
            SendMessageA(hWnd, 0x200u, wParam, lParam);
          }
          else
          {
            SetCapture(hWnd);
            byte_15E55E0 = 1;
            sub_630550(
              WindowLongA,
              (__int16)lParam - *((_DWORD *)WindowLongA + 10),
              SHIWORD(lParam) - *((_DWORD *)WindowLongA + 11),
              1,
              1);
          }
          break;
        case 0x205u:
          if ( !byte_15E55E1 )
            ReleaseCapture();
          byte_15E55E0 = 0;
          sub_630550(
            WindowLongA,
            (__int16)lParam - *((_DWORD *)WindowLongA + 10),
            SHIWORD(lParam) - *((_DWORD *)WindowLongA + 11),
            1,
            0);
          return 0;
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
    }
    return 0;
  }
  if ( Msg > 0x219 )
  {
    if ( Msg != 563 )
    {
      if ( Msg == 785 && (HWND)wParam != hWnd )
      {
        sub_613D20(WindowLongA);
        sub_613E70(WindowLongA);
      }
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    FileA = DragQueryFileA((HDROP)wParam, 0xFFFFFFFF, 0, 0);
    for ( iFile = 0; (int)iFile < FileA; ++iFile )
    {
      DragQueryFileA((HDROP)wParam, iFile, szFile, 0x104u);
      sub_6300D0(szFile);
    }
    DragFinish((HDROP)wParam);
    return 0;
  }
  else
  {
    if ( Msg != 537 )
    {
      if ( Msg != 529 && Msg != 530 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
      return 0;
    }
    if ( !WindowLongA[90] )
      return 0;
    if ( wParam != 32769 )
    {
      if ( wParam == 32772 )
      {
        v19 = lParam;
        if ( *(_DWORD *)(lParam + 4) == 2 )
        {
          v14 = lParam;
          v12 = *(_DWORD *)(lParam + 12);
          while ( byte_795F6C && v12 == 1 << (byte_795F6C - 97) )
          {
            if ( *(_DWORD *)(dword_7960D8 + 8) )
              sub_60A4D0(*(ATL::CComCriticalSection **)(dword_7960D8 + 8));
            wndpl.length = 44;
            wndpl.showCmd = 2;
            GetWindowPlacement(hWnd, &wndpl);
            if ( wndpl.showCmd == 2 )
              ShowWindow(hWnd, 9);
            SetForegroundWindow(hWnd);
            (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)WindowLongA + 36))(WindowLongA, 0);
            if ( WindowLongA[91]
              || (v7 = (const CHAR *)sub_630D20(), v6 = (const CHAR *)sub_630CE0(), MessageBoxA(0, v6, v7, 0x2004u) == 6) )
            {
              exit(-1);
            }
            Sleep(0x1388u);
            wsprintfA(szFile, "%c:\\%s", byte_795F6C, byte_795940);
            Stream = sub_5EA9C0(szFile, "rb");
            if ( Stream )
            {
              fclose(Stream);
              v12 = 0;
            }
          }
          sub_6300F0();
        }
      }
      return 0;
    }
    v19 = lParam;
    if ( *(_DWORD *)(lParam + 4) != 2 )
      return 0;
    v14 = lParam;
    v12 = *(_DWORD *)(lParam + 12);
    if ( !byte_795F6C || v12 != 1 << (byte_795F6C - 97) )
      return 0;
    if ( *(_DWORD *)(dword_7960D8 + 8) )
      sub_60A4D0(*(ATL::CComCriticalSection **)(dword_7960D8 + 8));
    if ( WindowLongA[91] )
      exit(-1);
    return 1112363332;
  }
}


//======================================================================
// sub_60F380
// entry 0060f380  size 124  status ok
//======================================================================

int __thiscall sub_60F380(int this)
{
  sub_5F5BF0((_DWORD *)this);
  *(_DWORD *)this = &sciOdometer::`vftable';
  *(_DWORD *)(this + 464) = 0;
  *(_WORD *)(this + 390) = 5;
  *(_WORD *)(this + 388) = 0;
  *(_DWORD *)(this + 396) = 0;
  memset((void *)(this + 400), 0, 0x20u);
  memset((void *)(this + 432), 0, 0x20u);
  return this;
}


//======================================================================
// sub_60F400
// entry 0060f400  size 350  status ok
//======================================================================

void __thiscall sub_60F400(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+18h] [ebp-1Ch]
  void (__thiscall ***v3)(_DWORD, int); // [esp+20h] [ebp-14h]
  __int16 i; // [esp+24h] [ebp-10h]

  *(_DWORD *)this = &sciOdometer::`vftable';
  if ( *(_DWORD *)(this + 464) )
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(this + 464);
    if ( v3 )
      (**v3)(v3, 1);
    *(_DWORD *)(this + 464) = 0;
  }
  if ( *(_DWORD *)(this + 396) )
  {
    for ( i = 0; i < *(__int16 *)(this + 388); ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) )
      {
        v2 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this + 396) + 4 * i);
        if ( v2 )
          (**v2)(v2, 1);
        *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) = 0;
      }
    }
    operator delete(*(void **)(this + 396));
    *(_DWORD *)(this + 396) = 0;
  }
  sub_5F5C40((_DWORD *)this);
}


//======================================================================
// sub_60F560
// entry 0060f560  size 774  status ok
//======================================================================

int __thiscall sub_60F560(int this, __int16 a2, int a3, int a4, int a5, int a6, struct CPaneDivider *a7)
{
  int v7; // eax
  int IsFixedSize; // eax
  struct CPaneDivider *v9; // eax
  int v10; // eax
  int v12; // [esp+4h] [ebp-24h]
  _DWORD *v14; // [esp+Ch] [ebp-1Ch]
  __int16 i; // [esp+18h] [ebp-10h]

  sub_5F5CC0((ATL::CAtlWinModule *)this);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 68))(this, a4, a5);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 108))(this, a6);
  CPaneContainer::SetPaneDivider((CPaneContainer *)this, a7);
  *(_DWORD *)(this + 392) = 0;
  if ( a2 <= 0 )
    *(_WORD *)(this + 388) = 1;
  else
    *(_WORD *)(this + 388) = a2;
  *(_DWORD *)(this + 396) = operator new(4 * *(__int16 *)(this + 388));
  for ( i = 0; i < *(__int16 *)(this + 388); ++i )
  {
    v14 = operator new(0x178u);
    if ( v14 )
    {
      sub_5EAAF0(v14);
      v12 = v7;
    }
    else
    {
      v12 = 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) = v12;
    sub_5EAF00(*(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i), a3);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 176))(
      *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i),
      20);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 64))(*(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i));
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)this);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 108))(
      *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i),
      IsFixedSize);
    v9 = (struct CPaneDivider *)pairNode::raw_length((pairNode *)this);
    CPaneContainer::SetPaneDivider(*(CPaneContainer **)(*(_DWORD *)(this + 396) + 4 * i), v9);
    if ( CMFCScanliner::channels((CMFCScanliner *)this) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 112))(*(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i));
    else
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 116))(*(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i));
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 396) + 176))(**(_DWORD **)(this + 396), 0);
  *(_WORD *)(this + 390) = sub_5F5550(**(_DWORD ***)(this + 396));
  v10 = sub_5F5590(**(_DWORD ***)(this + 396));
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 120))(
    this,
    *(__int16 *)(this + 388) * *(__int16 *)(this + 390),
    v10);
  return (*(int (__cdecl **)(_DWORD))(*(_DWORD *)this + 68))(*(_DWORD *)(this + 340));
}


//======================================================================
// sub_60F870
// entry 0060f870  size 36  status ok
//======================================================================

void __thiscall sub_60F870(int this, const void *a2)
{
  qmemcpy((void *)(this + 400), a2, 0x20u);
}


//======================================================================
// sub_60F8D0
// entry 0060f8d0  size 164  status ok
//======================================================================

int __thiscall sub_60F8D0(int this, int a2, int a3)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5EB260((_DWORD *)this, a2, a3);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= *(__int16 *)(this + 388) )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) )
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 68))(
        *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i),
        *(_DWORD *)(this + 24) - (i + 1) * *(__int16 *)(this + 390),
        a3);
  }
  return result;
}


//======================================================================
// sub_60F980
// entry 0060f980  size 129  status ok
//======================================================================

int __thiscall sub_60F980(int this, int a2)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5F5300((_DWORD *)this, a2);
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
// sub_60FA10
// entry 0060fa10  size 121  status ok
//======================================================================

int __thiscall sub_60FA10(int this)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5EB5A0((CWnd *)this);
  for ( i = 0; ; ++i )
  {
    result = *(__int16 *)(this + 388);
    if ( i >= result )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * i) + 112))(*(_DWORD *)(*(_DWORD *)(this + 396) + 4 * i));
  }
  return result;
}


//======================================================================
// sub_60FA90
// entry 0060fa90  size 121  status ok
//======================================================================

int __thiscall sub_60FA90(int this)
{
  int result; // eax
  __int16 i; // [esp+4h] [ebp-4h]

  sub_5EB570((_BYTE *)this);
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
// sub_60FB30
// entry 0060fb30  size 520  status ok
//======================================================================

int __thiscall sub_60FB30(int this, int a2, char a3)
{
  int result; // eax
  void (__thiscall ***v4)(_DWORD, _DWORD); // [esp+4h] [ebp-38h]
  int v6; // [esp+14h] [ebp-28h]
  int j; // [esp+18h] [ebp-24h]
  int v8; // [esp+1Ch] [ebp-20h]
  int v9; // [esp+20h] [ebp-1Ch]
  int v10; // [esp+24h] [ebp-18h]
  int i; // [esp+28h] [ebp-14h]
  int v12; // [esp+2Ch] [ebp-10h]
  int v13; // [esp+2Ch] [ebp-10h]

  v12 = 1;
  result = this;
  if ( a2 != *(_DWORD *)(this + 392) )
  {
    for ( i = 0; i < *(__int16 *)(this + 388); ++i )
      v12 *= 10;
    v13 = v12 - 1;
    if ( a2 < 0 )
    {
      sub_5E9F20("false", "..\\scilib\\sciOdometer.cpp", 185);
      a2 = 0;
    }
    if ( a2 > v13 )
    {
      sub_5E9F20("false", "..\\scilib\\sciOdometer.cpp", 189);
      a2 = v13;
    }
    if ( a3 )
    {
      sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
      v8 = a2;
      v10 = 0;
      while ( v8 )
      {
        ++v10;
        v8 /= 10;
      }
      if ( v10 < 1 )
        v10 = 1;
      v9 = a2;
      for ( j = 0; j < *(__int16 *)(this + 388); ++j )
      {
        v6 = 2 * (v9 % 10);
        if ( j >= v10 )
          v6 = 20;
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 396) + 4 * j) + 176))(
          *(_DWORD *)(*(_DWORD *)(this + 396) + 4 * j),
          v6);
        v9 /= 10;
      }
    }
    else
    {
      if ( operator new(0x38u) )
        v4 = (void (__thiscall ***)(_DWORD, _DWORD))sub_60FD70(a2, this);
      else
        v4 = 0;
      sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, v4);
    }
    *(_DWORD *)(this + 392) = a2;
    return a2;
  }
  return result;
}


//======================================================================
// sub_60FD70
// entry 0060fd70  size 283  status ok
//======================================================================

int __thiscall sub_60FD70(int this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-10h]

  sub_5FC0D0((ATL::CCRTHeap *)this, 0);
  *(_DWORD *)this = &sciOdometerScript::`vftable';
  *(_DWORD *)(this + 32) = a2;
  *(_DWORD *)(this + 52) = a3;
  *(_DWORD *)(this + 36) = 1;
  *(_DWORD *)(this + 44) = GetTickCount();
  v5 = a2;
  *(_DWORD *)(this + 40) = 0;
  while ( v5 )
  {
    ++*(_DWORD *)(this + 40);
    v5 /= 10;
  }
  if ( *(int *)(this + 40) < 1 )
    *(_DWORD *)(this + 40) = 1;
  if ( *(_DWORD *)(this + 32) >= *(_DWORD *)(*(_DWORD *)(this + 52) + 392) )
  {
    *(_BYTE *)(this + 48) = 1;
    sub_610980(*(_DWORD *)(this + 52) + 400);
  }
  else
  {
    *(_BYTE *)(this + 48) = 0;
    sub_610980(*(_DWORD *)(this + 52) + 432);
  }
  return this;
}


//======================================================================
// sub_60FE90
// entry 0060fe90  size 168  status ok
//======================================================================

void __thiscall sub_60FE90(_DWORD *this)
{
  int v1; // [esp+4h] [ebp-18h]

  *this = &sciOdometerScript::`vftable';
  if ( *(this + 13) )
  {
    if ( *((_BYTE *)this + 48) )
      v1 = *(this + 13) + 400;
    else
      v1 = *(this + 13) + 432;
    sub_6110A0(v1, 0);
  }
  *(this + 13) = 0;
  sub_5FC150((int)this);
}


//======================================================================
// sub_60FF40
// entry 0060ff40  size 592  status ok
//======================================================================

void (__thiscall ****__thiscall sub_60FF40(_DWORD *this))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax
  int v2; // [esp+0h] [ebp-30h]
  signed int v3; // [esp+4h] [ebp-2Ch]
  int v5; // [esp+14h] [ebp-1Ch]
  DWORD TickCount; // [esp+18h] [ebp-18h]
  unsigned __int8 v7; // [esp+1Fh] [ebp-11h]
  unsigned int Flags; // [esp+20h] [ebp-10h]
  int v9; // [esp+20h] [ebp-10h]
  int v10; // [esp+24h] [ebp-Ch]
  int v11; // [esp+28h] [ebp-8h]
  int i; // [esp+2Ch] [ebp-4h]

  TickCount = GetTickCount();
  v7 = 0;
  if ( unknown_libname_843(this) )
  {
    sub_5E9F20("false", "..\\scilib\\sciOdometer.cpp", 332);
  }
  else
  {
    v10 = *(this + 8);
    for ( i = 0; i < *(this + 9); ++i )
    {
      Flags = CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(*(_DWORD *)(*(this + 13) + 396)
                                                                                    + 4 * i));
      v5 = 2 * (v10 % 10);
      v11 = 19;
      if ( i >= *(this + 10) )
      {
        v11 = 20;
        v5 = 20;
      }
      if ( Flags == v5 )
      {
        if ( *(this + 9) < *(__int16 *)(*(this + 13) + 388) && *(this + 9) == i + 1 )
        {
          ++*(this + 9);
          *(this + 11) = TickCount;
        }
      }
      else
      {
        if ( *((_BYTE *)this + 48) )
          v3 = Flags + 1;
        else
          v3 = Flags - 1;
        v9 = v3;
        if ( v3 > v11 )
          v9 = 0;
        if ( v9 <= -1 )
          v9 = v11;
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(*(this + 13) + 396) + 4 * i) + 176))(
          *(_DWORD *)(*(_DWORD *)(*(this + 13) + 396) + 4 * i),
          v9);
        v7 = 1;
      }
      v10 /= 10;
    }
    if ( v7 )
    {
      if ( TickCount > *(this + 11) + 300 )
      {
        if ( *(this + 9) < *(__int16 *)(*(this + 13) + 388) )
          ++*(this + 9);
        *(this + 11) = TickCount;
      }
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 4))(this, 0);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, *(_DWORD *)(*(this + 13) + 376));
    }
  }
  result = (void (__thiscall ****)(_DWORD, _DWORD))v7;
  if ( !v7 )
  {
    if ( *((_BYTE *)this + 48) )
      v2 = *(this + 13) + 400;
    else
      v2 = *(this + 13) + 432;
    sub_6110A0(v2, 0);
    return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))*(this + 13), 0);
  }
  return result;
}


//======================================================================
// sub_6101F0
// entry 006101f0  size 95  status ok
//======================================================================

int __thiscall sub_6101F0(int this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &sciEvent::`vftable';
  *(_BYTE *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 24) = 0;
  return this;
}


//======================================================================
// sub_6102A0
// entry 006102a0  size 163  status ok
//======================================================================

int *__cdecl sub_6102A0(int *a1, int a2)
{
  int *v2; // eax
  int *v4; // ecx
  int i; // [esp+0h] [ebp-4h]

  for ( i = 0; dword_76FED8[4 * i] != -1; ++i )
  {
    if ( dword_76FED8[4 * i] == a2 )
    {
      v2 = &dword_76FED8[4 * i];
      *a1 = *v2;
      a1[1] = v2[1];
      a1[2] = v2[2];
      a1[3] = v2[3];
      return a1;
    }
  }
  sub_5E9F20("false", "..\\scilib\\scilib.cpp", 21);
  v4 = &dword_76FED8[4 * i];
  *a1 = *v4;
  a1[1] = v4[1];
  a1[2] = v4[2];
  a1[3] = v4[3];
  return a1;
}


//======================================================================
// sub_610350
// entry 00610350  size 253  status ok
//======================================================================

int __cdecl sub_610350(_DWORD *a1, void *a2, int a3)
{
  int result; // eax
  CMFCRibbonButton *v4; // eax
  CMFCRibbonButton *v5; // [esp+4h] [ebp-20h]
  _DWORD *v6; // [esp+Ch] [ebp-18h]
  CMFCRibbonButton *v7; // [esp+14h] [ebp-10h]

  result = (int)a1;
  if ( a1[1] )
  {
    v7 = (CMFCRibbonButton *)_RTDynamicCast(
                               a3,
                               0,
                               &sciFeature `RTTI Type Descriptor',
                               &sciView `RTTI Type Descriptor',
                               0);
    if ( !v7 )
    {
      v6 = operator new(0x178u);
      if ( v6 )
      {
        sub_5EAAF0(v6);
        v5 = v4;
      }
      else
      {
        v5 = 0;
      }
      v7 = v5;
    }
    sub_5F9CE0(a2, v7, a1[2], a1[3], a1[7], a1[8], a1[6], a1[5], 0xFFu, 0);
    return sub_5EB000(v7, a1[4]);
  }
  return result;
}


//======================================================================
// sub_610450
// entry 00610450  size 107  status ok
//======================================================================

char __cdecl sub_610450(_DWORD *a1, void *a2)
{
  int v2; // eax

  while ( 1 )
  {
    LOBYTE(v2) = (_BYTE)a1;
    if ( !a1[1] )
      break;
    if ( a1[2] )
    {
      v2 = sub_5FB2B0((int)a2, a1[2]);
      if ( v2 )
        LOBYTE(v2) = sub_5E9F20(
                       "inList->mID == 0 || inPlane->GetView(inList->mID) == NULL",
                       "..\\scilib\\sciSetup.cpp",
                       49);
    }
    if ( !a1[1] )
      break;
    sub_610350(a1, a2, 0);
    a1 = (_DWORD *)((char *)a1 + *a1);
  }
  return v2;
}


//======================================================================
// sub_6104C0
// entry 006104c0  size 19  status ok
//======================================================================

int __cdecl sub_6104C0(int a1, int a2)
{
  return sub_5FBB30(a2, 0, a1);
}


//======================================================================
// sub_6104E0
// entry 006104e0  size 27  status ok
//======================================================================

int __cdecl sub_6104E0(pairNode *a1, int a2)
{
  int result; // eax

  if ( a1 )
    return sub_5FBB30(a2, a1, -1);
  return result;
}


//======================================================================
// sub_610570
// entry 00610570  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_610570(_DWORD *this, int a2)
{
  char v4; // [esp+67h] [ebp-15h] BYREF
  char *v5; // [esp+68h] [ebp-14h]
  int v6; // [esp+78h] [ebp-4h]

  v5 = &v4;
  sub_5BBD80(this + 8, 0);
  v6 = 0;
  sub_610650(a2);
  return this;
}


//======================================================================
// sub_6105E0
// entry 006105e0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_6105E0(_DWORD *this, int a2)
{
  char v4; // [esp+67h] [ebp-15h] BYREF
  char *v5; // [esp+68h] [ebp-14h]
  int v6; // [esp+78h] [ebp-4h]

  v5 = &v4;
  sub_5BBD80(this + 8, 0);
  v6 = 0;
  sub_6106F0(a2);
  return this;
}


//======================================================================
// sub_610650
// entry 00610650  size 152  status ok
//======================================================================

int __thiscall sub_610650(int this, int a2)
{
  int result; // eax

  qmemcpy((void *)this, (const void *)a2, 0x20u);
  sub_5BC040(this + 32, a2 + 32);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(float *)(this + 56) = *(float *)(a2 + 56);
  *(float *)(this + 60) = *(float *)(a2 + 60);
  *(float *)(this + 64) = *(float *)(a2 + 64);
  result = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 68) = result;
  return result;
}


//======================================================================
// sub_6106F0
// entry 006106f0  size 278  status ok
//======================================================================

int __thiscall sub_6106F0(int this, _DWORD *a2)
{
  unsigned int v3; // [esp+8h] [ebp-84h]
  unsigned int j; // [esp+84h] [ebp-8h]
  signed int i; // [esp+88h] [ebp-4h]

  qmemcpy((void *)this, a2, 0x20u);
  *(_DWORD *)(this + 4) = 0;
  for ( i = 0; a2[1] && *(_DWORD *)(a2[1] + 4 * i); ++i )
    ;
  sub_611930(i, 0);
  for ( j = 0; (int)j < i; ++j )
  {
    if ( *(_DWORD *)(this + 36) )
      v3 = (*(_DWORD *)(this + 40) - *(_DWORD *)(this + 36)) >> 2;
    else
      v3 = 0;
    if ( j >= v3 )
      invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * j) = *(_DWORD *)(a2[1] + 4 * j);
  }
  *(_DWORD *)(this + 48) = -1;
  *(_DWORD *)(this + 52) = 0;
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 60) = 0.0;
  *(float *)(this + 64) = 0.0;
  *(_DWORD *)(this + 68) = 0;
  return this;
}


//======================================================================
// sub_610810
// entry 00610810  size 356  status ok
//======================================================================

char __thiscall sub_610810(float *this, int a2)
{
  unsigned int v3; // [esp+4h] [ebp-1Ch]
  int v4; // [esp+8h] [ebp-18h]
  unsigned int j; // [esp+18h] [ebp-8h]
  signed int i; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)this != *(_DWORD *)a2
    || *((_DWORD *)this + 2) != *(_DWORD *)(a2 + 8)
    || *((unsigned __int8 *)this + 12) != *(unsigned __int8 *)(a2 + 12)
    || *((_DWORD *)this + 4) != *(_DWORD *)(a2 + 16)
    || *((_DWORD *)this + 5) != *(_DWORD *)(a2 + 20)
    || *(float *)(a2 + 24) != *(this + 6)
    || *(float *)(a2 + 28) != *(this + 7) )
  {
    return 0;
  }
  for ( i = 0; *(_DWORD *)(a2 + 4) && *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * i); ++i )
    ;
  if ( *((_DWORD *)this + 9) )
    v4 = (*((_DWORD *)this + 10) - *((_DWORD *)this + 9)) >> 2;
  else
    v4 = 0;
  if ( i != v4 )
    return 0;
  for ( j = 0; (int)j < i; ++j )
  {
    if ( *((_DWORD *)this + 9) )
      v3 = (*((_DWORD *)this + 10) - *((_DWORD *)this + 9)) >> 2;
    else
      v3 = 0;
    if ( j >= v3 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*((_DWORD *)this + 9) + 4 * j) != *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * j) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_610980
// entry 00610980  size 1251  status ok
//======================================================================

char __cdecl sub_610980(int a1)
{
  char result; // al
  unsigned int v2; // eax
  int IsFixedSize; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-13Ch]
  float X_4; // [esp+8h] [ebp-134h]
  float v7; // [esp+10h] [ebp-12Ch]
  float v8; // [esp+14h] [ebp-128h]
  unsigned int v9; // [esp+18h] [ebp-124h]
  unsigned int v10; // [esp+20h] [ebp-11Ch]
  int v11; // [esp+24h] [ebp-118h]
  int v12; // [esp+2Ch] [ebp-110h]
  int v13; // [esp+30h] [ebp-10Ch]
  int v14; // [esp+34h] [ebp-108h]
  unsigned int v15; // [esp+3Ch] [ebp-100h]
  int v16; // [esp+40h] [ebp-FCh]
  unsigned int v17; // [esp+48h] [ebp-F4h]
  _DWORD *v18; // [esp+6Ch] [ebp-D0h]
  int v19[8]; // [esp+D4h] [ebp-68h] BYREF
  char v20[40]; // [esp+F4h] [ebp-48h] BYREF
  int v21; // [esp+11Ch] [ebp-20h]
  int i; // [esp+120h] [ebp-1Ch]
  int v23; // [esp+124h] [ebp-18h]
  int v24; // [esp+128h] [ebp-14h]
  int v25; // [esp+12Ch] [ebp-10h]
  int v26; // [esp+138h] [ebp-4h]

  if ( dword_15E55F4 )
    v14 = (dword_15E55F8 - dword_15E55F4) / 72;
  else
    v14 = 0;
  v23 = v14;
  if ( v14 )
  {
    if ( dword_15E55F4 )
      v13 = (dword_15E55F8 - dword_15E55F4) / 72;
    else
      v13 = 0;
    if ( !v13 )
      invalid_parameter_noinfo();
    v12 = dword_15E55F4;
  }
  else
  {
    v12 = 0;
  }
  result = v12;
  v24 = v12;
  v21 = 0;
  if ( *(_DWORD *)a1 || *(_DWORD *)(a1 + 4) )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84);
    if ( result )
    {
      for ( i = 0; i < v23 && !sub_610810((float *)(v24 + 72 * i), a1); ++i )
        ;
      if ( i >= v23 )
      {
        v24 = 0;
      }
      else
      {
        v24 += 72 * i;
        if ( !sub_609910(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v24 + 48)) )
        {
          result = sub_609650(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v24 + 48));
          if ( !result )
            return result;
          sub_6127F0(i);
          v24 = 0;
        }
      }
      if ( v24 )
        goto LABEL_59;
      v18 = sub_6105E0(v19, a1);
      v26 = 0;
      sub_6117E0(v18);
      v26 = -1;
      sub_5BE450((int)v20);
      if ( dword_15E55F4 )
        v11 = (dword_15E55F8 - dword_15E55F4) / 72;
      else
        v11 = 0;
      v17 = v11 - 1;
      if ( dword_15E55F4 )
        v10 = (dword_15E55F8 - dword_15E55F4) / 72;
      else
        v10 = 0;
      if ( v17 >= v10 )
        invalid_parameter_noinfo();
      v24 = dword_15E55F4 + 72 * v17;
      v21 = *(_DWORD *)a1;
      result = a1;
      if ( *(_DWORD *)(a1 + 4) )
      {
        if ( *(_DWORD *)(v24 + 36) )
          v2 = sub_62FBF0((*(_DWORD *)(v24 + 40) - *(_DWORD *)(v24 + 36)) >> 2);
        else
          v2 = sub_62FBF0(0);
        v15 = v2;
        v16 = v24 + 32;
        if ( *(_DWORD *)(v24 + 36) )
          v9 = (*(_DWORD *)(v24 + 40) - *(_DWORD *)(v24 + 36)) >> 2;
        else
          v9 = 0;
        if ( v2 >= v9 )
          invalid_parameter_noinfo();
        result = v15;
        v21 = *(_DWORD *)(*(_DWORD *)(v16 + 4) + 4 * v15);
      }
      if ( v21 )
      {
LABEL_59:
        if ( *(_DWORD *)(a1 + 16) )
          v8 = 0.0;
        else
          v8 = *(float *)(a1 + 24);
        v25 = (int)v8;
        if ( *(_DWORD *)(a1 + 16) )
        {
          IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
          *(_DWORD *)(v24 + 52) = IsFixedSize;
          *(float *)(v24 + 60) = 0.0;
          *(float *)(v24 + 56) = *(float *)(a1 + 24) / (double)*(int *)(a1 + 16);
          v7 = fabs(*(float *)(v24 + 56));
          if ( v7 < 0.01 )
            sub_5E9F20("fabs(it->mFadeRate) >= 0.01", "..\\scilib\\sciSetup.cpp", 289);
          *(float *)(v24 + 64) = *(float *)(a1 + 24);
          *(_DWORD *)(v24 + 68) = 0;
        }
        if ( *(int *)(v24 + 48) >= 0 )
        {
          X_4 = (float)v25;
          sub_608550(*(void **)(dword_7960D8 + 8), *(_DWORD *)(v24 + 48), X_4);
          return sub_609A80(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v24 + 48));
        }
        else
        {
          v5 = (float)v25;
          v4 = sub_608B50(
                 *(_BYTE **)(dword_7960D8 + 8),
                 v21,
                 *(_DWORD *)(a1 + 8),
                 1,
                 (*(_BYTE *)(a1 + 12) != 0) - 1,
                 v5,
                 COERCE_INT(*(float *)(a1 + 28)),
                 0);
          *(_DWORD *)(v24 + 48) = v4;
          result = v24;
          if ( *(int *)(v24 + 48) < 0 )
            return sub_6110A0(a1, 1);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_610E70
// entry 00610e70  size 552  status ok
//======================================================================

void __cdecl sub_610E70(_DWORD *a1, char a2)
{
  float v2; // [esp+8h] [ebp-20h]
  int v3; // [esp+Ch] [ebp-1Ch]
  int v4; // [esp+10h] [ebp-18h]
  int v5; // [esp+14h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-Ch]
  int v7; // [esp+24h] [ebp-4h]

  if ( dword_15E55F4 )
    v5 = (dword_15E55F8 - dword_15E55F4) / 72;
  else
    v5 = 0;
  if ( v5 )
  {
    if ( dword_15E55F4 )
      v4 = (dword_15E55F8 - dword_15E55F4) / 72;
    else
      v4 = 0;
    if ( !v4 )
      invalid_parameter_noinfo();
    v3 = dword_15E55F4;
  }
  else
  {
    v3 = 0;
  }
  if ( *a1 || a1[1] )
  {
    for ( i = 0; i < v5 && !sub_610810((float *)(v3 + 72 * i), (int)a1); ++i )
      ;
    if ( i < v5 )
    {
      v7 = v3 + 72 * i;
      if ( *(int *)(v7 + 48) >= 0 )
      {
        if ( a2 || *(int *)(v7 + 20) <= 0 || sub_6085E0(*(_DWORD *)(v7 + 48)) < 0.01 )
        {
          sub_609980(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v7 + 48));
        }
        else if ( (*(float *)(v7 + 56) >= 0.0 || !*(_DWORD *)(v7 + 52))
               && !sub_609910(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v7 + 48)) )
        {
          *(_DWORD *)(v7 + 52) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
          *(float *)(v7 + 60) = sub_6085E0(*(_DWORD *)(v7 + 48));
          *(float *)(v7 + 56) = -*(float *)(v7 + 60) / (double)*(int *)(v7 + 20);
          v2 = fabs(*(float *)(v7 + 56));
          if ( v2 < 0.01 )
            sub_5E9F20("fabs(it->mFadeRate) >= 0.01", "..\\scilib\\sciSetup.cpp", 359);
          *(float *)(v7 + 64) = 0.0;
          *(_DWORD *)(v7 + 68) = 2;
        }
      }
    }
  }
}


//======================================================================
// sub_6110A0
// entry 006110a0  size 589  status ok
//======================================================================

int __cdecl sub_6110A0(_DWORD *a1, char a2)
{
  int result; // eax
  float v3; // [esp+8h] [ebp-F8h]
  int v4; // [esp+Ch] [ebp-F4h]
  int v5; // [esp+10h] [ebp-F0h]
  int v6; // [esp+14h] [ebp-ECh]
  int i; // [esp+F4h] [ebp-Ch]
  int v8; // [esp+FCh] [ebp-4h]

  if ( dword_15E55F4 )
    v6 = (dword_15E55F8 - dword_15E55F4) / 72;
  else
    v6 = 0;
  if ( v6 )
  {
    if ( dword_15E55F4 )
      v5 = (dword_15E55F8 - dword_15E55F4) / 72;
    else
      v5 = 0;
    if ( !v5 )
      invalid_parameter_noinfo();
    v4 = dword_15E55F4;
  }
  else
  {
    v4 = 0;
  }
  result = v4;
  if ( *a1 || a1[1] )
  {
    for ( i = 0; i < v6; ++i )
    {
      result = (unsigned __int8)sub_610810((float *)(v4 + 72 * i), (int)a1);
      if ( (_BYTE)result )
        break;
      result = i + 1;
    }
    if ( i < v6 )
    {
      v8 = v4 + 72 * i;
      if ( *(int *)(v8 + 48) >= 0 )
      {
        if ( a2 || *(int *)(v8 + 20) <= 0 || sub_6085E0(*(_DWORD *)(v8 + 48)) < 0.01 )
        {
          sub_609720(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v8 + 48), 1);
          return sub_6127F0(i);
        }
        else if ( *(float *)(v8 + 56) >= 0.0 || (result = v4 + 72 * i, !*(_DWORD *)(v8 + 52)) )
        {
          *(_DWORD *)(v8 + 52) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
          *(float *)(v8 + 60) = sub_6085E0(*(_DWORD *)(v8 + 48));
          *(float *)(v8 + 56) = -*(float *)(v8 + 60) / (double)*(int *)(v8 + 20);
          v3 = fabs(*(float *)(v8 + 56));
          if ( v3 < 0.01 )
            sub_5E9F20("fabs(it->mFadeRate) >= 0.01", "..\\scilib\\sciSetup.cpp", 409);
          *(float *)(v8 + 64) = 0.0;
          *(_DWORD *)(v8 + 68) = 1;
          return v4 + 72 * i;
        }
      }
      else
      {
        return sub_6127F0(i);
      }
    }
  }
  return result;
}


//======================================================================
// sub_6112F0
// entry 006112f0  size 1231  status ok
//======================================================================

BOOL sub_6112F0()
{
  bool v0; // dl
  BOOL result; // eax
  double v2; // st6
  int v3; // [esp+4h] [ebp-D8h]
  int v4; // [esp+14h] [ebp-C8h]
  int v5; // [esp+68h] [ebp-74h]
  int v6; // [esp+78h] [ebp-64h]
  int v7; // [esp+7Ch] [ebp-60h]
  int v8; // [esp+80h] [ebp-5Ch]
  int v9; // [esp+88h] [ebp-54h]
  int v10; // [esp+90h] [ebp-4Ch]
  unsigned int v11; // [esp+94h] [ebp-48h]
  _DWORD v12[4]; // [esp+B4h] [ebp-28h] BYREF
  float v13; // [esp+C4h] [ebp-18h]
  char v14; // [esp+CBh] [ebp-11h]
  _DWORD v15[2]; // [esp+CCh] [ebp-10h] BYREF
  int v16; // [esp+D4h] [ebp-8h] BYREF
  unsigned int v17; // [esp+D8h] [ebp-4h]

  sub_612690(dword_15E55F4, &unk_15E55F0);
  sub_612690(dword_15E55F8, &unk_15E55F0);
  while ( 1 )
  {
    v0 = (unsigned __int8)sub_6118F0(v15) == 0;
    result = v0;
    if ( !v0 )
      break;
    v14 = 0;
    if ( *(int *)(sub_611C10(&v16) + 48) >= 0 )
    {
      if ( !*(_BYTE *)(sub_611C10(&v16) + 12) )
      {
        v9 = sub_611C10(&v16);
        if ( sub_609650(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v9 + 48)) )
          v14 = 1;
      }
      if ( *(_DWORD *)(sub_611C10(&v16) + 52) )
      {
        v8 = sub_611C10(&v16);
        v7 = sub_611C10(&v16);
        v6 = sub_611C10(&v16);
        v13 = (double)(CMediaType::IsFixedSize((CMediaType *)dword_15E55E8) - *(_DWORD *)(v8 + 52))
            * *(float *)(v7 + 56)
            + *(float *)(v6 + 60);
        if ( *(float *)(sub_611C10(&v16) + 56) <= 0.0 || (v2 = *(float *)(sub_611C10(&v16) + 64), v2 > v13) )
        {
          if ( *(float *)(sub_611C10(&v16) + 56) < 0.0 )
          {
            v5 = sub_611C10(&v16);
            if ( *(float *)(v5 + 64) >= (double)v13 )
            {
              if ( !v16 )
                invalid_parameter_noinfo();
              if ( v17 >= *(_DWORD *)(v16 + 8) )
                invalid_parameter_noinfo();
              v13 = *(float *)(v17 + 64);
              if ( !v16 )
                invalid_parameter_noinfo();
              if ( v17 >= *(_DWORD *)(v16 + 8) )
                invalid_parameter_noinfo();
              *(_DWORD *)(v17 + 52) = 0;
            }
          }
        }
        else
        {
          v13 = *(float *)(sub_611C10(&v16) + 64);
          *(_DWORD *)(sub_611C10(&v16) + 52) = 0;
        }
        if ( !v16 )
          invalid_parameter_noinfo();
        if ( v17 >= *(_DWORD *)(v16 + 8) )
          invalid_parameter_noinfo();
        sub_608550(*(void **)(dword_7960D8 + 8), *(_DWORD *)(v17 + 48), v13);
        if ( !v16 )
          invalid_parameter_noinfo();
        if ( v17 >= *(_DWORD *)(v16 + 8) )
          invalid_parameter_noinfo();
        if ( !*(_DWORD *)(v17 + 52) )
        {
          if ( !v16 )
            invalid_parameter_noinfo();
          if ( v17 >= *(_DWORD *)(v16 + 8) )
            invalid_parameter_noinfo();
          v3 = *(_DWORD *)(v17 + 68);
          if ( v3 == 1 )
          {
            v14 = 1;
          }
          else if ( v3 == 2 )
          {
            if ( !v16 )
              invalid_parameter_noinfo();
            if ( v17 >= *(_DWORD *)(v16 + 8) )
              invalid_parameter_noinfo();
            sub_609980(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v17 + 48));
          }
          if ( !v16 )
            invalid_parameter_noinfo();
          if ( v17 >= *(_DWORD *)(v16 + 8) )
            invalid_parameter_noinfo();
          if ( !v16 )
            invalid_parameter_noinfo();
          if ( v17 >= *(_DWORD *)(v16 + 8) )
            invalid_parameter_noinfo();
          *(_DWORD *)(v17 + 68) = 0;
        }
      }
      if ( v14 )
      {
        if ( !v16 )
          invalid_parameter_noinfo();
        if ( v17 >= *(_DWORD *)(v16 + 8) )
          invalid_parameter_noinfo();
        if ( *(int *)(v17 + 48) >= 0 )
        {
          if ( !v16 )
            invalid_parameter_noinfo();
          if ( v17 >= *(_DWORD *)(v16 + 8) )
            invalid_parameter_noinfo();
          sub_609720(*(_BYTE **)(dword_7960D8 + 8), *(_DWORD *)(v17 + 48), 1);
        }
        sub_6128B0(v12, v16, v17);
        v16 = v12[0];
        v17 = v12[1];
        v4 = dword_15E55F8;
        if ( !&unk_15E55F0 || dword_15E55F4 > (unsigned int)dword_15E55F8 )
          invalid_parameter_noinfo();
        v15[0] = &unk_15E55F0;
        v15[1] = v4;
      }
      else
      {
        sub_611C50(&v16);
      }
    }
    else
    {
      v10 = v16;
      v11 = v17;
      sub_611C50(&v16);
      v12[2] = v10;
      v12[3] = v11;
    }
  }
  return result;
}


//======================================================================
// sub_6117C0
// entry 006117c0  size 30  status ok
//======================================================================

int __thiscall sub_6117C0(void *this)
{
  return sub_5BE450((int)this + 32);
}


//======================================================================
// sub_6117E0
// entry 006117e0  size 266  status ok
//======================================================================

int __thiscall sub_6117E0(_DWORD *this, int a2)
{
  int result; // eax
  unsigned int v3; // [esp+0h] [ebp-50h]
  unsigned int v4; // [esp+4h] [ebp-4Ch]
  unsigned int v6; // [esp+30h] [ebp-20h]
  int v7; // [esp+34h] [ebp-1Ch]
  _BYTE v8[8]; // [esp+40h] [ebp-10h] BYREF
  _DWORD *v9; // [esp+48h] [ebp-8h]
  unsigned int v10; // [esp+4Ch] [ebp-4h]

  if ( *(this + 1) )
    v4 = (*(this + 2) - *(this + 1)) / 72;
  else
    v4 = 0;
  if ( *(this + 1) )
    v3 = (*(this + 3) - *(this + 1)) / 72;
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
    return sub_611AE0(v8, this, v6, a2);
  }
  else
  {
    v7 = *(this + 2);
    result = sub_612970(v7, 1, a2);
    *(this + 2) = v7 + 72;
  }
  return result;
}


//======================================================================
// sub_6118F0
// entry 006118f0  size 58  status ok
//======================================================================

bool __thiscall sub_6118F0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    invalid_parameter_noinfo();
  return *(this + 1) == a2[1];
}


//======================================================================
// sub_611930
// entry 00611930  size 432  status ok
//======================================================================

int __fastcall sub_611930(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  unsigned int v5; // [esp+0h] [ebp-80h]
  int v6; // [esp+4h] [ebp-7Ch]
  unsigned int v7; // [esp+8h] [ebp-78h]
  _DWORD *v9; // [esp+44h] [ebp-3Ch] BYREF
  unsigned int v10; // [esp+48h] [ebp-38h]
  unsigned int v11; // [esp+4Ch] [ebp-34h]
  unsigned int v12; // [esp+50h] [ebp-30h]
  _DWORD *v13; // [esp+54h] [ebp-2Ch]
  _DWORD v14[4]; // [esp+58h] [ebp-28h] BYREF
  _DWORD *v15; // [esp+68h] [ebp-18h]
  unsigned int v16; // [esp+6Ch] [ebp-14h]
  _DWORD *v17; // [esp+70h] [ebp-10h]
  unsigned int v18; // [esp+74h] [ebp-Ch]
  _DWORD *v19; // [esp+78h] [ebp-8h]
  _DWORD *v20; // [esp+7Ch] [ebp-4h]

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
    v13 = (_DWORD *)a1[2];
    v19 = 0;
    if ( !a1 || a1[1] > (unsigned int)v13 || (unsigned int)v13 > a1[2] )
      invalid_parameter_noinfo();
    v19 = a1;
    v20 = v13;
    return (int)sub_5BAFC0(a1, (int)a1, v13, a3 - v6, &a4);
  }
  return result;
}


//======================================================================
// sub_611AE0
// entry 00611ae0  size 301  status ok
//======================================================================

unsigned int **__thiscall sub_611AE0(unsigned int *this, unsigned int **a2, unsigned int *a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-30h]
  int v7; // [esp+4h] [ebp-2Ch]
  unsigned int v9; // [esp+14h] [ebp-1Ch]
  unsigned int v10; // [esp+18h] [ebp-18h]

  if ( *(this + 1) )
    v7 = (int)(*(this + 2) - *(this + 1)) / 72;
  else
    v7 = 0;
  if ( v7 )
  {
    v10 = *(this + 1);
    if ( !this || v10 > *(this + 2) )
      invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v6 = (int)(a4 - v10) / 72;
  }
  else
  {
    v6 = 0;
  }
  sub_611CA0(a3, a4, 1, a5);
  v9 = *(this + 1);
  if ( !this || v9 > *(this + 2) )
    invalid_parameter_noinfo();
  sub_612780(v6);
  *a2 = this;
  a2[1] = (unsigned int *)v9;
  return a2;
}


//======================================================================
// sub_611C10
// entry 00611c10  size 53  status ok
//======================================================================

int __thiscall sub_611C10(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(this + 1) >= *(_DWORD *)(*this + 8) )
    invalid_parameter_noinfo();
  return *(this + 1);
}


//======================================================================
// sub_611C50
// entry 00611c50  size 65  status ok
//======================================================================

_DWORD *__thiscall sub_611C50(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(this + 1) >= *(_DWORD *)(*this + 8) )
    invalid_parameter_noinfo();
  *(this + 1) += 72;
  return this;
}


//======================================================================
// sub_611CA0
// entry 00611ca0  size 2544  status ok
//======================================================================

int __thiscall sub_611CA0(void *this, int a2, int a3, unsigned int a4, int a5)
{
  int v5; // eax
  _DWORD v7[4]; // [esp+0h] [ebp-2CCh] BYREF
  int v8; // [esp+10h] [ebp-2BCh]
  char *v9; // [esp+14h] [ebp-2B8h]
  int v10; // [esp+18h] [ebp-2B4h]
  int v11; // [esp+1Ch] [ebp-2B0h]
  unsigned int v12; // [esp+20h] [ebp-2ACh]
  int v13; // [esp+24h] [ebp-2A8h]
  int v14; // [esp+28h] [ebp-2A4h]
  int v15; // [esp+2Ch] [ebp-2A0h]
  int v16; // [esp+30h] [ebp-29Ch]
  int v17; // [esp+34h] [ebp-298h]
  void *v18; // [esp+38h] [ebp-294h]
  _BYTE *v19; // [esp+3Ch] [ebp-290h]
  unsigned int v20; // [esp+5Ch] [ebp-270h]
  int v21; // [esp+60h] [ebp-26Ch]
  int i; // [esp+64h] [ebp-268h]
  unsigned int v23; // [esp+6Ch] [ebp-260h]
  int v24; // [esp+74h] [ebp-258h]
  int v25; // [esp+78h] [ebp-254h]
  int v26; // [esp+7Ch] [ebp-250h]
  int v27; // [esp+98h] [ebp-234h]
  int v28; // [esp+A0h] [ebp-22Ch]
  char v29; // [esp+A8h] [ebp-224h]
  char v30; // [esp+AAh] [ebp-222h]
  char v31; // [esp+ABh] [ebp-221h]
  int v32; // [esp+ACh] [ebp-220h]
  int v33; // [esp+E4h] [ebp-1E8h]
  int v34; // [esp+E8h] [ebp-1E4h]
  int j; // [esp+ECh] [ebp-1E0h]
  int v36; // [esp+F4h] [ebp-1D8h]
  unsigned int v37; // [esp+130h] [ebp-19Ch]
  int v38; // [esp+134h] [ebp-198h]
  int v39; // [esp+138h] [ebp-194h]
  char v40; // [esp+13Dh] [ebp-18Fh]
  char v41; // [esp+13Eh] [ebp-18Eh]
  char v42; // [esp+13Fh] [ebp-18Dh]
  int v43; // [esp+140h] [ebp-18Ch]
  unsigned int v44; // [esp+144h] [ebp-188h]
  int v45; // [esp+148h] [ebp-184h]
  int v46; // [esp+14Ch] [ebp-180h]
  char v47; // [esp+153h] [ebp-179h]
  unsigned int v48; // [esp+154h] [ebp-178h]
  int v49; // [esp+158h] [ebp-174h]
  int v50; // [esp+160h] [ebp-16Ch]
  char v51; // [esp+165h] [ebp-167h]
  char v52; // [esp+166h] [ebp-166h]
  char v53; // [esp+167h] [ebp-165h]
  int v54; // [esp+168h] [ebp-164h]
  void *v55; // [esp+16Ch] [ebp-160h]
  void *v56; // [esp+170h] [ebp-15Ch]
  void *v57; // [esp+174h] [ebp-158h]
  void *v58; // [esp+178h] [ebp-154h]
  void *v59; // [esp+17Ch] [ebp-150h]
  void *v60; // [esp+180h] [ebp-14Ch]
  void *k; // [esp+184h] [ebp-148h]
  char *v62; // [esp+188h] [ebp-144h]
  char v63; // [esp+1A6h] [ebp-126h]
  char v64; // [esp+1A7h] [ebp-125h]
  int v65; // [esp+1C0h] [ebp-10Ch]
  char *v66; // [esp+1C4h] [ebp-108h]
  int v67; // [esp+1C8h] [ebp-104h]
  int v68; // [esp+1CCh] [ebp-100h]
  char v69; // [esp+1D3h] [ebp-F9h]
  char *v70; // [esp+1D4h] [ebp-F8h]
  int v71; // [esp+1D8h] [ebp-F4h]
  int v72; // [esp+1E0h] [ebp-ECh]
  char v73; // [esp+1E5h] [ebp-E7h]
  char v74; // [esp+1E6h] [ebp-E6h]
  char v75; // [esp+1E7h] [ebp-E5h]
  char *v76; // [esp+1E8h] [ebp-E4h]
  char v77; // [esp+1EDh] [ebp-DFh]
  char v78; // [esp+1EEh] [ebp-DEh]
  char v79; // [esp+1EFh] [ebp-DDh]
  int v80; // [esp+1F0h] [ebp-DCh]
  void *v81; // [esp+1F4h] [ebp-D8h]
  int v82; // [esp+1F8h] [ebp-D4h]
  int v83; // [esp+1FCh] [ebp-D0h]
  char v84; // [esp+203h] [ebp-C9h]
  void *v85; // [esp+204h] [ebp-C8h]
  int v86; // [esp+208h] [ebp-C4h]
  int v87; // [esp+210h] [ebp-BCh]
  char v88; // [esp+215h] [ebp-B7h]
  char v89; // [esp+216h] [ebp-B6h]
  char v90; // [esp+217h] [ebp-B5h]
  int v91; // [esp+218h] [ebp-B4h]
  int v92; // [esp+260h] [ebp-6Ch]
  int v93; // [esp+264h] [ebp-68h]
  void *v94; // [esp+268h] [ebp-64h]
  char *v95; // [esp+26Ch] [ebp-60h]
  unsigned int v96; // [esp+270h] [ebp-5Ch]
  _DWORD v97[8]; // [esp+274h] [ebp-58h] BYREF
  _BYTE v98[40]; // [esp+294h] [ebp-38h] BYREF
  _DWORD *v99; // [esp+2BCh] [ebp-10h]
  int v100; // [esp+2C8h] [ebp-4h]
  unsigned int v101; // [esp+2DCh] [ebp+10h]

  v99 = v7;
  v18 = this;
  sub_610570(v97, a5);
  v100 = 0;
  if ( *((_DWORD *)v18 + 1) )
    v17 = (*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1)) / 72;
  else
    v17 = 0;
  v96 = v17;
  if ( a4 )
  {
    v92 = 59652323;
    v16 = 59652323;
    if ( *((_DWORD *)v18 + 1) )
      v15 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 72;
    else
      v15 = 0;
    if ( v16 - v15 >= a4 )
    {
      if ( *((_DWORD *)v18 + 1) )
        v14 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 72;
      else
        v14 = 0;
      if ( v96 >= a4 + v14 )
      {
        if ( (*((_DWORD *)v18 + 2) - a3) / 72 >= a4 )
        {
          v93 = *((_DWORD *)v18 + 2);
          v32 = *((_DWORD *)v18 + 2);
          v5 = sub_612A70(v93 - 72 * a4, v93, v32, v18);
          *((_DWORD *)v18 + 2) = v5;
          v24 = v93;
          v25 = v93 - 72 * a4;
          v26 = a3;
          v31 = 0;
          v30 = v29;
          v28 = v25;
          v27 = a3;
          sub_612AF0(a3, v25, v93);
          v20 = a3 + 72 * a4;
          v21 = a3;
          v23 = v20;
          for ( i = a3; i != v23; i += 72 )
            sub_610650(i, (int)v97);
        }
        else
        {
          v43 = *((_DWORD *)v18 + 2);
          v44 = a3 + 72 * a4;
          v45 = v43;
          v46 = a3;
          v53 = 0;
          v52 = v51;
          v50 = v43;
          v49 = a3;
          v47 = 0;
          v48 = v44;
          sub_612C20(a3, v43, v44, v18);
          LOBYTE(v100) = 3;
          v37 = a4 - (*((_DWORD *)v18 + 2) - a3) / 72;
          v38 = *((_DWORD *)v18 + 2);
          v39 = v38;
          v42 = 0;
          v41 = v40;
          sub_612970(v38, v37, v97);
          v100 = 0;
          *((_DWORD *)v18 + 2) += 72 * a4;
          v33 = *((_DWORD *)v18 + 2) - 72 * a4;
          v34 = a3;
          v36 = v33;
          for ( j = a3; j != v36; j += 72 )
            sub_610650(j, (int)v97);
        }
      }
      else
      {
        v91 = 59652323;
        v13 = 59652323;
        if ( 59652323 - (v96 >> 1) >= v96 )
          v12 = v96 + (v96 >> 1);
        else
          v12 = 0;
        v96 = v12;
        if ( *((_DWORD *)v18 + 1) )
          v11 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 72;
        else
          v11 = 0;
        if ( v96 < a4 + v11 )
        {
          if ( *((_DWORD *)v18 + 1) )
            v10 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 72;
          else
            v10 = 0;
          v96 = a4 + v10;
        }
        v94 = (void *)sub_68FA30(v96);
        v95 = (char *)v94;
        LOBYTE(v100) = 1;
        v80 = *((_DWORD *)v18 + 1);
        v81 = v94;
        v82 = a3;
        v83 = v80;
        v90 = 0;
        v89 = v88;
        v87 = a3;
        v86 = v80;
        v84 = 0;
        v85 = v94;
        v9 = (char *)sub_612C20(v80, a3, v94, v18);
        v95 = v9;
        v76 = v9;
        v79 = 0;
        v78 = v77;
        sub_612970(v9, a4, v97);
        v95 += 72 * a4;
        v65 = *((_DWORD *)v18 + 2);
        v66 = v95;
        v67 = v65;
        v68 = a3;
        v75 = 0;
        v74 = v73;
        v72 = v65;
        v71 = a3;
        v69 = 0;
        v70 = v95;
        sub_612C20(a3, v65, v95, v18);
        v100 = 0;
        if ( *((_DWORD *)v18 + 1) )
          v8 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) / 72;
        else
          v8 = 0;
        v101 = v8 + a4;
        if ( *((_DWORD *)v18 + 1) )
        {
          v56 = (void *)*((_DWORD *)v18 + 2);
          v57 = (void *)*((_DWORD *)v18 + 1);
          v58 = v56;
          v59 = v57;
          v64 = v63;
          v60 = v56;
          for ( k = v57; k != v60; k = (char *)k + 72 )
          {
            v62 = (char *)k + 32;
            sub_5BE450((int)k + 32);
          }
          v54 = (*((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1)) / 72;
          v55 = (void *)*((_DWORD *)v18 + 1);
          operator delete(v55);
        }
        *((_DWORD *)v18 + 3) = (char *)v94 + 72 * v96;
        *((_DWORD *)v18 + 2) = (char *)v94 + 72 * v101;
        *((_DWORD *)v18 + 1) = v94;
      }
    }
    else
    {
      sub_6126E0(v7[0], v7[1]);
    }
  }
  v100 = -1;
  v19 = v98;
  return sub_5BE450((int)v98);
}


//======================================================================
// sub_612690
// entry 00612690  size 76  status ok
//======================================================================

_DWORD *__thiscall sub_612690(_DWORD *this, unsigned int a2, int a3)
{
  *this = 0;
  if ( !a3 || *(_DWORD *)(a3 + 4) > a2 || a2 > *(_DWORD *)(a3 + 8) )
    invalid_parameter_noinfo();
  *this = a3;
  *(this + 1) = a2;
  return this;
}


//======================================================================
// sub_6126E0
// entry 006126e0  size 116  status ok
//======================================================================

void __noreturn sub_6126E0()
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
// sub_612780
// entry 00612780  size 98  status ok
//======================================================================

_DWORD *__thiscall sub_612780(_DWORD *this, int a2)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( (unsigned int)(*(this + 1) + 72 * a2) > *(_DWORD *)(*this + 8)
    || (unsigned int)(*(this + 1) + 72 * a2) < *(_DWORD *)(*this + 4) )
  {
    invalid_parameter_noinfo();
  }
  *(this + 1) += 72 * a2;
  return this;
}


//======================================================================
// sub_6127F0
// entry 006127f0  size 181  status ok
//======================================================================

int __thiscall sub_6127F0(_DWORD *this, int a2)
{
  _DWORD *v4; // [esp+74h] [ebp-24h] BYREF
  unsigned int v5; // [esp+78h] [ebp-20h]
  unsigned int v6; // [esp+7Ch] [ebp-1Ch]
  char v7[8]; // [esp+80h] [ebp-18h] BYREF
  _DWORD *v8; // [esp+88h] [ebp-10h]
  unsigned int v9; // [esp+8Ch] [ebp-Ch]
  _DWORD *v10; // [esp+90h] [ebp-8h]
  unsigned int v11; // [esp+94h] [ebp-4h]

  v6 = *(this + 1);
  v10 = 0;
  if ( !this || *(this + 1) > v6 || v6 > *(this + 2) )
    invalid_parameter_noinfo();
  v10 = this;
  v11 = v6;
  v4 = this;
  v5 = v6;
  sub_612780(&v4, a2);
  v8 = v4;
  v9 = v5;
  return sub_6128B0(v7, v4, v5);
}


//======================================================================
// sub_6128B0
// entry 006128b0  size 181  status ok
//======================================================================

_DWORD *__thiscall sub_6128B0(char **this, _DWORD *a2, int a3, int a4)
{
  char *v6; // [esp+14h] [ebp-58h]
  char *i; // [esp+18h] [ebp-54h]

  sub_612B80(a4 + 72, *(this + 2), a4);
  v6 = *(this + 2);
  for ( i = v6 - 72; i != v6; i += 72 )
    sub_5BE450((int)(i + 32));
  *(this + 2) -= 72;
  *a2 = a3;
  a2[1] = a4;
  return a2;
}


//======================================================================
// sub_612970
// entry 00612970  size 253  status ok
//======================================================================

_DWORD *__cdecl sub_612970(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax
  int v4; // [esp+0h] [ebp-58h] BYREF
  _DWORD *v5; // [esp+10h] [ebp-48h]
  _DWORD *v6; // [esp+14h] [ebp-44h]
  _DWORD *v7; // [esp+38h] [ebp-20h]
  _DWORD *v8; // [esp+3Ch] [ebp-1Ch]
  _DWORD *v9; // [esp+40h] [ebp-18h]
  void *v10; // [esp+44h] [ebp-14h]
  int *v11; // [esp+48h] [ebp-10h]
  int v12; // [esp+54h] [ebp-4h]

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
      result = sub_610570(v7, a3);
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
    a1 += 18;
  }
  return result;
}


//======================================================================
// sub_612A70
// entry 00612a70  size 118  status ok
//======================================================================

int __cdecl sub_612A70(int a1, int a2, int a3)
{
  return sub_612C70(a1, a2, a3);
}


//======================================================================
// sub_612AF0
// entry 00612af0  size 141  status ok
//======================================================================

int __cdecl sub_612AF0(int a1, int a2, int a3)
{
  int v4; // [esp+10h] [ebp-14h]
  int i; // [esp+14h] [ebp-10h]

  v4 = a3;
  for ( i = a2; a1 != i; sub_610650(v4, i) )
  {
    i -= 72;
    v4 -= 72;
  }
  return a3 - 72 * ((a2 - a1) / 72);
}


//======================================================================
// sub_612B80
// entry 00612b80  size 153  status ok
//======================================================================

int __cdecl sub_612B80(int a1, int a2, int a3)
{
  int v4; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]

  v4 = a3;
  for ( i = a1; i != a2; i += 72 )
  {
    sub_610650(v4, i);
    v4 += 72;
  }
  return a3 + 72 * ((a2 - a1) / 72);
}


//======================================================================
// sub_612C20
// entry 00612c20  size 65  status ok
//======================================================================

int __cdecl sub_612C20(int a1, int a2, int a3)
{
  return sub_612C70(a1, a2, a3);
}


//======================================================================
// sub_612C70
// entry 00612c70  size 258  status ok
//======================================================================

char *__cdecl sub_612C70(int a1, int a2, char *a3)
{
  int v4; // [esp+0h] [ebp-58h] BYREF
  _DWORD *v5; // [esp+10h] [ebp-48h]
  _DWORD *v6; // [esp+14h] [ebp-44h]
  _DWORD *v7; // [esp+38h] [ebp-20h]
  _DWORD *v8; // [esp+3Ch] [ebp-1Ch]
  char *v9; // [esp+40h] [ebp-18h]
  void *v10; // [esp+44h] [ebp-14h]
  int *v11; // [esp+48h] [ebp-10h]
  int v12; // [esp+54h] [ebp-4h]

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
      v6 = sub_610570(v7, a1);
      v5 = v6;
    }
    else
    {
      v5 = 0;
    }
    v8 = v5;
    LOBYTE(v12) = 0;
    a3 += 72;
    a1 += 72;
  }
  return a3;
}


//======================================================================
// sub_612D80
// entry 00612d80  size 152  status ok
//======================================================================

char __thiscall sub_612D80(_DWORD *this, unsigned int a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x38E38E3 )
    sub_6126E0();
  *(this + 1) = sub_68FA30(a2);
  *(this + 2) = *(this + 1);
  *(this + 3) = *(this + 1) + 72 * a2;
  return 1;
}


//======================================================================
// sub_612E20
// entry 00612e20  size 205  status ok
//======================================================================

int __thiscall sub_612E20(int this)
{
  char *v3; // [esp+1Ch] [ebp-28h]
  char *i; // [esp+20h] [ebp-24h]

  if ( *(_DWORD *)(this + 4) )
  {
    v3 = *(char **)(this + 8);
    for ( i = *(char **)(this + 4); i != v3; i += 72 )
      sub_5BE450((int)(i + 32));
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  return this;
}


//======================================================================
// sub_612EF0
// entry 00612ef0  size 165  status ok
//======================================================================

_DWORD *__cdecl sub_612EF0(unsigned int a1)
{
  int i; // [esp+0h] [ebp-Ch]
  _DWORD *v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  if ( a1 != 28 )
    return operator new(a1);
  v4 = dword_15E5600;
  if ( dword_15E5600 )
  {
    dword_15E5600 = *(_DWORD *)(dword_15E5600 + 24);
    return (_DWORD *)v4;
  }
  else
  {
    v3 = operator new(0x380u);
    for ( i = 1; i < 31; ++i )
      v3[7 * i + 6] = &v3[7 * i + 7];
    v3[223] = 0;
    dword_15E5600 = (int)(v3 + 7);
    return v3;
  }
}


//======================================================================
// sub_612FA0
// entry 00612fa0  size 62  status ok
//======================================================================

void __cdecl sub_612FA0(_DWORD *a1, int a2)
{
  if ( a1 )
  {
    if ( a2 == 28 )
    {
      a1[6] = dword_15E5600;
      dword_15E5600 = (int)a1;
    }
    else
    {
      operator delete(a1);
    }
  }
}


//======================================================================
// sub_6131B0
// entry 006131b0  size 234  status ok
//======================================================================

_DWORD *__thiscall sub_6131B0(_DWORD *this)
{
  sub_62AEA0(this);
  *this = &VWindow::`vftable';
  sub_62A870();
  *(this + 20) = 0;
  *(this + 18) = 0;
  *(this + 19) = 0;
  memset(this + 2, 0, 0x10u);
  memset(this + 6, 0, 0x10u);
  *((_BYTE *)this + 128) = 0;
  *(this + 33) = 0;
  *((_BYTE *)this + 136) = 1;
  *((_BYTE *)this + 88) = 1;
  *((_BYTE *)this + 89) = 0;
  *((_BYTE *)this + 90) = 1;
  *((_BYTE *)this + 91) = 0;
  *((_BYTE *)this + 92) = 0;
  return this;
}


//======================================================================
// sub_6132A0
// entry 006132a0  size 180  status ok
//======================================================================

int __thiscall sub_6132A0(void *this)
{
  *(_DWORD *)this = &VWindow::`vftable';
  sub_613DA0(this);
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  operator delete(*((void **)this + 33));
  sub_62A900();
  return sub_62AEF0(this);
}


//======================================================================
// sub_613360
// entry 00613360  size 315  status ok
//======================================================================

int __thiscall sub_613360(int this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-30h]

  if ( *(_DWORD *)(this + 32) - *(_DWORD *)(this + 24) != a2
    || (result = this, *(_DWORD *)(this + 36) - *(_DWORD *)(this + 28) != a3) )
  {
    *(_DWORD *)(this + 24) = 0;
    *(_DWORD *)(this + 28) = 0;
    *(_DWORD *)(this + 32) = a2;
    *(_DWORD *)(this + 36) = a3;
    *(_DWORD *)(this + 40) = 0;
    *(_DWORD *)(this + 44) = 0;
    *(_DWORD *)(this + 48) = a2;
    *(_DWORD *)(this + 52) = a3;
    if ( *(_DWORD *)(this + 80) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 80))(*(_DWORD *)(this + 80), 1);
    if ( operator new(0x24u) )
      v4 = sub_623700(a2, a3, 4, 0);
    else
      v4 = 0;
    *(_DWORD *)(this + 80) = v4;
    return this;
  }
  return result;
}


//======================================================================
// sub_6134A0
// entry 006134a0  size 21  status ok
//======================================================================

_BYTE *__thiscall sub_6134A0(_BYTE *this)
{
  *(this + 128) = 1;
  return this;
}


//======================================================================
// sub_6134C0
// entry 006134c0  size 21  status ok
//======================================================================

_BYTE *__thiscall sub_6134C0(_BYTE *this)
{
  *(this + 128) = 0;
  return this;
}


//======================================================================
// sub_613580
// entry 00613580  size 23  status ok
//======================================================================

int __thiscall sub_613580(_DWORD *this)
{
  return *(this + 4) - *(this + 2);
}


//======================================================================
// sub_6135A0
// entry 006135a0  size 23  status ok
//======================================================================

int __thiscall sub_6135A0(_DWORD *this)
{
  return *(this + 5) - *(this + 3);
}


//======================================================================
// sub_6135C0
// entry 006135c0  size 23  status ok
//======================================================================

int __thiscall sub_6135C0(_DWORD *this)
{
  return *(this + 8) - *(this + 6);
}


//======================================================================
// sub_6135E0
// entry 006135e0  size 23  status ok
//======================================================================

int __thiscall sub_6135E0(_DWORD *this)
{
  return *(this + 9) - *(this + 7);
}


//======================================================================
// sub_613600
// entry 00613600  size 23  status ok
//======================================================================

int __thiscall sub_613600(_DWORD *this)
{
  return *(this + 12) - *(this + 10);
}


//======================================================================
// sub_613620
// entry 00613620  size 23  status ok
//======================================================================

int __thiscall sub_613620(_DWORD *this)
{
  return *(this + 13) - *(this + 11);
}


//======================================================================
// sub_613640
// entry 00613640  size 19  status ok
//======================================================================

int __thiscall sub_613640(_DWORD *this)
{
  return sub_613600(this);
}


//======================================================================
// sub_613660
// entry 00613660  size 19  status ok
//======================================================================

int __thiscall sub_613660(_DWORD *this)
{
  return sub_613600(this);
}


//======================================================================
// sub_613680
// entry 00613680  size 989  status ok
//======================================================================

int __thiscall sub_613680(int this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // [esp+4h] [ebp-8Ch]
  _DWORD *v4; // [esp+10h] [ebp-80h]
  int v6; // [esp+18h] [ebp-78h]
  int v7; // [esp+1Ch] [ebp-74h]
  bool v8; // [esp+33h] [ebp-5Dh]
  _DWORD *v9; // [esp+34h] [ebp-5Ch]
  _DWORD *v10; // [esp+4Ch] [ebp-44h]
  int j; // [esp+54h] [ebp-3Ch]
  int v12; // [esp+58h] [ebp-38h]
  int v13; // [esp+5Ch] [ebp-34h]
  int v14; // [esp+60h] [ebp-30h]
  _DWORD *v15; // [esp+64h] [ebp-2Ch]
  void (__thiscall ***v16)(_DWORD, int); // [esp+64h] [ebp-2Ch]
  int i; // [esp+70h] [ebp-20h]
  int v18; // [esp+74h] [ebp-1Ch] BYREF
  int v19; // [esp+78h] [ebp-18h]
  int v20; // [esp+7Ch] [ebp-14h]
  int v21; // [esp+80h] [ebp-10h]
  int v22; // [esp+8Ch] [ebp-4h]

  v8 = *a2 >= a2[2] || a2[1] >= a2[3];
  result = v8;
  if ( !v8 && *(_BYTE *)(this + 128) )
  {
    v10 = sub_612EF0(0x1Cu);
    v22 = 0;
    if ( v10 )
    {
      sub_62AEA0(v10);
      *v10 = &VWindowRECT::`vftable';
      v4 = v10;
    }
    else
    {
      v4 = 0;
    }
    v22 = -1;
    v4[2] = *a2;
    v4[3] = a2[1];
    v4[4] = a2[2];
    v4[5] = a2[3];
    sub_62AA20(v4);
    for ( i = 0; i <= ATL::COleDateTime::GetStatus(this + 96) - 2; ++i )
    {
      v15 = (_DWORD *)sub_62ADE0(i);
      v13 = (v15[5] - v15[3]) * (v15[4] - v15[2]);
      for ( j = i + 1; j <= ATL::COleDateTime::GetStatus(this + 96) - 1; ++j )
      {
        v12 = sub_62ADE0(j);
        v14 = (*(_DWORD *)(v12 + 20) - *(_DWORD *)(v12 + 12)) * (*(_DWORD *)(v12 + 16) - *(_DWORD *)(v12 + 8)) + v13;
        sub_614450(&v18, v15 + 2, v12 + 8);
        if ( (v21 - v19) * (v20 - v18) < v14 + (v14 >> 3) )
        {
          v15[2] = v18;
          v15[3] = v19;
          v15[4] = v20;
          v15[5] = v21;
          sub_62AB60(v12);
          if ( v12 )
            (**(void (__thiscall ***)(int, int))v12)(v12, 1);
          i = -1;
          j = ATL::COleDateTime::GetStatus(this + 96);
        }
      }
    }
    result = ATL::COleDateTime::GetStatus(this + 96);
    if ( result > 30 )
    {
      while ( ATL::COleDateTime::GetStatus(this + 96) )
      {
        v16 = (void (__thiscall ***)(_DWORD, int))sub_62ADE0(0);
        sub_62AB60(v16);
        if ( v16 )
          (**v16)(v16, 1);
      }
      v9 = sub_612EF0(0x1Cu);
      v22 = 1;
      if ( v9 )
      {
        sub_62AEA0(v9);
        *v9 = &VWindowRECT::`vftable';
        v3 = v9;
      }
      else
      {
        v3 = 0;
      }
      v22 = -1;
      v3[2] = *(_DWORD *)(this + 24);
      v3[3] = *(_DWORD *)(this + 28);
      v3[4] = *(_DWORD *)(this + 32);
      v3[5] = *(_DWORD *)(this + 36);
      v6 = -*(_DWORD *)(this + 28);
      v7 = -*(_DWORD *)(this + 24);
      v3[2] -= *(_DWORD *)(this + 24);
      v3[3] += v6;
      v3[4] += v7;
      v3[5] += v6;
      return sub_62AA20(v3);
    }
  }
  return result;
}


//======================================================================
// sub_613A60
// entry 00613a60  size 252  status ok
//======================================================================

int __thiscall sub_613A60(_BYTE *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // [esp+4h] [ebp-24h]
  bool v4; // [esp+Fh] [ebp-19h]
  _DWORD *v5; // [esp+10h] [ebp-18h]

  v4 = *a2 >= a2[2] || a2[1] >= a2[3];
  result = v4;
  if ( !v4 && *(this + 128) )
  {
    v5 = sub_612EF0(0x1Cu);
    if ( v5 )
    {
      sub_62AEA0(v5);
      *v5 = &VWindowRECT::`vftable';
      v3 = v5;
    }
    else
    {
      v3 = 0;
    }
    v3[2] = *a2;
    v3[3] = a2[1];
    v3[4] = a2[2];
    v3[5] = a2[3];
    return sub_62AA20(v3);
  }
  return result;
}


//======================================================================
// sub_613B60
// entry 00613b60  size 419  status ok
//======================================================================

int __thiscall sub_613B60(pairNode **this, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int v5; // [esp+4h] [ebp-2Ch]
  int Status; // [esp+8h] [ebp-28h]
  int v7; // [esp+Ch] [ebp-24h]
  int v8; // [esp+10h] [ebp-20h]
  int v9; // [esp+14h] [ebp-1Ch]
  int i; // [esp+28h] [ebp-8h]

  dword_795FA8 += (a2[3] - a2[1]) * (a2[2] - *a2);
  sub_6303D0(this, a2);
  result = (unsigned __int8)byte_795FB6;
  if ( byte_795FB6 )
  {
    ++dword_15E5604;
    dword_15E5604 %= 15;
    if ( dword_15E5604 >= 2 )
      v9 = dword_15E5604;
    else
      v9 = 2;
    dword_15E5604 = v9;
    v3 = a2[3] + 1;
    if ( v3 >= pairNode::raw_length(*(this + 20)) )
      v8 = pairNode::raw_length(*(this + 20));
    else
      v8 = a2[3] + 1;
    if ( *a2 - 1 <= 0 )
      v7 = 0;
    else
      v7 = *a2 - 1;
    v4 = a2[2] + 1;
    if ( v4 >= ATL::COleDateTime::GetStatus(*(this + 20)) )
      Status = ATL::COleDateTime::GetStatus(*(this + 20));
    else
      Status = a2[2] + 1;
    if ( a2[1] - 1 <= 0 )
      v5 = 0;
    else
      v5 = a2[1] - 1;
    for ( i = v5; ; i += dword_15E5604 )
    {
      result = i;
      if ( i >= v8 )
        break;
      sub_623C60(v7, Status, i, -16776961, 4);
    }
  }
  return result;
}


//======================================================================
// sub_613D20
// entry 00613d20  size 117  status ok
//======================================================================

int __thiscall sub_613D20(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-18h]
  int v3; // [esp+8h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-10h] BYREF
  int v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  v4 = *(this + 6);
  v5 = *(this + 7);
  v6 = *(this + 8);
  v7 = *(this + 9);
  v2 = -*(this + 7);
  v3 = -*(this + 6);
  v4 -= *(this + 6);
  v5 += v2;
  v6 += v3;
  v7 += v2;
  return (*(int (__thiscall **)(_DWORD *, int *))(*this + 20))(this, &v4);
}


//======================================================================
// sub_613DA0
// entry 00613da0  size 134  status ok
//======================================================================

int __thiscall sub_613DA0(char *this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // [esp+20h] [ebp-4h]

  while ( 1 )
  {
    result = ATL::COleDateTime::GetStatus(this + 96);
    if ( !result )
      break;
    v3 = (void (__thiscall ***)(_DWORD, int))sub_62ADE0(0);
    sub_62AB60(v3);
    if ( v3 )
      (**v3)(v3, 1);
  }
  return result;
}


//======================================================================
// sub_613E30
// entry 00613e30  size 52  status ok
//======================================================================

int __thiscall sub_613E30(_BYTE *this, int a2)
{
  int result; // eax

  sub_613E70(this);
  result = (int)this;
  if ( *(this + 136) )
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 24))(this, a2);
  return result;
}


//======================================================================
// sub_613E70
// entry 00613e70  size 258  status ok
//======================================================================

int __thiscall sub_613E70(int this)
{
  int result; // eax
  _DWORD v3[4]; // [esp+10h] [ebp-18h] BYREF
  int v4; // [esp+20h] [ebp-8h]
  char v5; // [esp+27h] [ebp-1h]

  v5 = 0;
  while ( 1 )
  {
    result = ATL::COleDateTime::GetStatus(this + 96);
    if ( !result )
      break;
    v4 = sub_62ADE0(0);
    v3[0] = *(_DWORD *)(v4 + 8);
    v3[1] = *(_DWORD *)(v4 + 12);
    v3[2] = *(_DWORD *)(v4 + 16);
    v3[3] = *(_DWORD *)(v4 + 20);
    sub_62AB60(v4);
    if ( v4 )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    unknown_libname_846(v3);
    sub_613B60((pairNode **)this, v3);
    v5 |= *(_BYTE *)(this + 136);
    if ( *(_BYTE *)(this + 136) )
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 24))(this, v3);
    if ( byte_795FA3 )
    {
      while ( !sub_5E9E60() )
        ;
      while ( sub_5E9E60() )
        ;
    }
  }
  return result;
}


//======================================================================
// sub_613F80
// entry 00613f80  size 112  status ok
//======================================================================

int __thiscall sub_613F80(int this)
{
  int v2; // [esp+4h] [ebp-18h]
  int v3; // [esp+8h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-10h] BYREF
  int v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  v4 = *(_DWORD *)(this + 24);
  v5 = *(_DWORD *)(this + 28);
  v6 = *(_DWORD *)(this + 32);
  v7 = *(_DWORD *)(this + 36);
  v2 = -*(_DWORD *)(this + 28);
  v3 = -*(_DWORD *)(this + 24);
  v4 -= *(_DWORD *)(this + 24);
  v5 += v2;
  v6 += v3;
  v7 += v2;
  return sub_613E30((_BYTE *)this, (int)&v4);
}


//======================================================================
// sub_614010
// entry 00614010  size 20  status ok
//======================================================================

char __thiscall sub_614010(_BYTE *this)
{
  return *(this + 128);
}


//======================================================================
// sub_614030
// entry 00614030  size 112  status ok
//======================================================================

char *__thiscall sub_614030(void **this, char *Str)
{
  size_t v2; // eax

  if ( *(this + 33) )
    operator delete(*(this + 33));
  v2 = strlen(Str);
  *(this + 33) = operator new(v2 + 1);
  return strcpy((char *)*(this + 33), Str);
}


//======================================================================
// sub_614450
// entry 00614450  size 345  status ok
//======================================================================

int __cdecl sub_614450(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]

  if ( *a2 >= a2[2] || a2[1] >= a2[3] )
  {
    *a1 = *a3;
    a1[1] = a3[1];
    result = a3[2];
    a1[2] = result;
    a1[3] = a3[3];
  }
  else if ( *a3 >= a3[2] || a3[1] >= a3[3] )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    result = a2[3];
    a1[3] = result;
  }
  else
  {
    if ( *a2 >= *a3 )
      v7 = *a3;
    else
      v7 = *a2;
    *a1 = v7;
    if ( a2[1] >= a3[1] )
      v6 = a3[1];
    else
      v6 = a2[1];
    a1[1] = v6;
    if ( a2[2] <= a3[2] )
      v5 = a3[2];
    else
      v5 = a2[2];
    a1[2] = v5;
    if ( a2[3] <= a3[3] )
      v4 = a3[3];
    else
      v4 = a2[3];
    a1[3] = v4;
    return v4;
  }
  return result;
}


//======================================================================
// sub_6145B0
// entry 006145b0  size 46  status ok
//======================================================================

_DWORD *__thiscall sub_6145B0(_DWORD *this, char a2)
{
  sub_62AEF0(this);
  if ( (a2 & 1) != 0 )
    sub_612FA0(this, 28);
  return this;
}


//======================================================================
// sub_6145E0
// entry 006145e0  size 101  status ok
//======================================================================

_DWORD *__thiscall sub_6145E0(_DWORD *this, int a2)
{
  sub_62AEA0(this);
  *this = &Random::`vftable';
  sub_614670(a2);
  return this;
}


//======================================================================
// sub_614670
// entry 00614670  size 34  status ok
//======================================================================

int __thiscall sub_614670(_DWORD *this, int a2)
{
  *(this + 2) = a2;
  return sub_62DD10(a2);
}


//======================================================================
// sub_6146A0
// entry 006146a0  size 110  status ok
//======================================================================

int __thiscall sub_6146A0(AFX_EXCEPTION_LINK *this, unsigned int a2)
{
  int v3; // eax
  unsigned int i; // [esp+Ch] [ebp-4h]

  if ( a2 )
  {
    for ( i = 1; a2 > i; i = (2 * i) | 1 )
      ;
    do
      AFX_EXCEPTION_LINK::~AFX_EXCEPTION_LINK(this);
    while ( (i & v3) >= a2 );
    return i & v3;
  }
  else
  {
    sub_5E9F20("limit", "..\\scilib\\platform\\random.cpp", 64);
    return 0;
  }
}


//======================================================================
// sub_614810
// entry 00614810  size 508  status ok
//======================================================================

_DWORD *__thiscall sub_614810(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-4Ch]
  int v3; // [esp+8h] [ebp-48h]
  int v4; // [esp+Ch] [ebp-44h]
  int v5; // [esp+10h] [ebp-40h]
  _DWORD *v6; // [esp+14h] [ebp-3Ch]
  _DWORD *v8; // [esp+3Ch] [ebp-14h]

  sub_5F49D0((int)this);
  *this = &sciScrollBox::`vftable';
  *(this + 23) = 1;
  *((_BYTE *)this + 96) = 1;
  *(this + 25) = 0;
  *(this + 26) = -1;
  *(this + 27) = 0;
  v8 = operator new(0x184u);
  if ( v8 )
    v6 = sub_5F5BF0(v8);
  else
    v6 = 0;
  *(this + 18) = v6;
  if ( operator new(0x60u) )
    v5 = sub_615A20(this);
  else
    v5 = 0;
  *(this + 19) = v5;
  if ( operator new(0x1E4u) )
    v4 = sub_615B10(this, 0);
  else
    v4 = 0;
  *(this + 20) = v4;
  sub_602EF0((_DWORD *)*(this + 20), 20, 10);
  if ( operator new(0x1E4u) )
    v3 = sub_615B10(this, 1);
  else
    v3 = 0;
  *(this + 21) = v3;
  sub_602EF0((_DWORD *)*(this + 21), 20, 10);
  if ( operator new(0x190u) )
    v2 = sub_615BB0(this);
  else
    v2 = 0;
  *(this + 22) = v2;
  return this;
}


//======================================================================
// sub_614A10
// entry 00614a10  size 321  status ok
//======================================================================

void __thiscall sub_614A10(CNoTrackObject *this)
{
  *(_DWORD *)this = &sciScrollBox::`vftable';
  if ( *((_DWORD *)this + 18) )
    (***((void (__thiscall ****)(_DWORD, int))this + 18))(*((_DWORD *)this + 18), 1);
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  if ( *((_DWORD *)this + 20) )
    (***((void (__thiscall ****)(_DWORD, int))this + 20))(*((_DWORD *)this + 20), 1);
  if ( *((_DWORD *)this + 21) )
    (***((void (__thiscall ****)(_DWORD, int))this + 21))(*((_DWORD *)this + 21), 1);
  if ( *((_DWORD *)this + 22) )
    (***((void (__thiscall ****)(_DWORD, int))this + 22))(*((_DWORD *)this + 22), 1);
  sub_5F4AD0(this);
}


//======================================================================
// sub_614B60
// entry 00614b60  size 450  status ok
//======================================================================

int __thiscall sub_614B60(
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
        struct CPaneDivider *a21)
{
  int PreDockState; // eax
  int v23; // eax

  sub_5F50C0((CPaneContainer *)this, a3, a4, a5, a21);
  *(_DWORD *)(this + 92) = a6;
  *(_DWORD *)(*(_DWORD *)(this + 72) + 4) = *(_DWORD *)(this + 4);
  if ( a2 )
    sub_5EAE80(a2, a3, a4, a5, -1);
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 112))(*(_DWORD *)(this + 72));
  *(_DWORD *)(*(_DWORD *)(this + 76) + 4) = *(_DWORD *)(this + 4);
  sub_5F61D0(*(CPaneContainer **)(this + 76), a19, a20, a17 + a3, a18 + a4, a5 + 1, (struct CPaneDivider *)0xFFFFFFFF);
  *(_DWORD *)(*(_DWORD *)(this + 80) + 4) = *(_DWORD *)(this + 4);
  sub_5EAE80(a7, a8 + a3, a9 + a4, a5 + 2, -1);
  *(_DWORD *)(*(_DWORD *)(this + 84) + 4) = *(_DWORD *)(this + 4);
  sub_5EAE80(a10, a11 + a3, a12 + a4, a5 + 2, -1);
  *(_DWORD *)(*(_DWORD *)(this + 88) + 4) = *(_DWORD *)(this + 4);
  if ( (unsigned __int8)sub_615160(this) )
  {
    sub_615E80(a15 + a3, a16 + a3);
    PreDockState = CPaneFrameWnd::GetPreDockState(*(_DWORD *)(this + 88));
    return sub_5EAE80(a13, PreDockState, a14 + a4, a5 + 3, -1);
  }
  else
  {
    sub_615E80(a15 + a4, a16 + a4);
    v23 = CPaneFrameWnd::GetPreDockState(*(_DWORD *)(this + 88));
    return sub_5EAE80(a13, a14 + a3, v23, a5 + 3, -1);
  }
}


//======================================================================
// sub_614D30
// entry 00614d30  size 293  status ok
//======================================================================

int __thiscall sub_614D30(_DWORD **this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  v11 = a2 - (*(int (__thiscall **)(_DWORD))(**(this + 19) + 76))(*(this + 19));
  v12 = a3 - (*(int (__thiscall **)(_DWORD))(**(this + 19) + 84))(*(this + 19));
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 19) + 68))(*(this + 19), a2, a3);
  v3 = (*(int (__thiscall **)(_DWORD))(**(this + 20) + 84))(*(this + 20));
  v4 = (*(int (__thiscall **)(_DWORD, int))(**(this + 20) + 76))(*(this + 20), v12 + v3);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 20) + 68))(*(this + 20), v11 + v4);
  v5 = (*(int (__thiscall **)(_DWORD))(**(this + 21) + 84))(*(this + 21));
  v6 = (*(int (__thiscall **)(_DWORD, int))(**(this + 21) + 76))(*(this + 21), v12 + v5);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 21) + 68))(*(this + 21), v11 + v6);
  v7 = (*(int (__thiscall **)(_DWORD))(**(this + 22) + 84))(*(this + 22));
  v8 = (*(int (__thiscall **)(_DWORD, int))(**(this + 22) + 76))(*(this + 22), v12 + v7);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 22) + 68))(*(this + 22), v11 + v8);
}


//======================================================================
// sub_614E60
// entry 00614e60  size 32  status ok
//======================================================================

int __thiscall sub_614E60(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 18) + 76))(*(this + 18), this);
}


//======================================================================
// sub_614E80
// entry 00614e80  size 32  status ok
//======================================================================

int __thiscall sub_614E80(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 18) + 84))(*(this + 18), this);
}


//======================================================================
// sub_614EA0
// entry 00614ea0  size 152  status ok
//======================================================================

int __thiscall sub_614EA0(int this, int a2)
{
  sub_5F5300((_DWORD *)this, a2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 108))(*(_DWORD *)(this + 72), a2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 76) + 108))(*(_DWORD *)(this + 76), a2 + 1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 80) + 108))(*(_DWORD *)(this + 80), a2 + 2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 84) + 108))(*(_DWORD *)(this + 84), a2 + 2);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 88) + 108))(*(_DWORD *)(this + 88), a2 + 3);
}


//======================================================================
// sub_614F40
// entry 00614f40  size 132  status ok
//======================================================================

int __thiscall sub_614F40(int this)
{
  sub_5F5440((_BYTE *)this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 116))(*(_DWORD *)(this + 72));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 116))(*(_DWORD *)(this + 76));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 116))(*(_DWORD *)(this + 80));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 116))(*(_DWORD *)(this + 84));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 116))(*(_DWORD *)(this + 88));
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 208))(this);
}


//======================================================================
// sub_614FD0
// entry 00614fd0  size 116  status ok
//======================================================================

int __thiscall sub_614FD0(CWnd *this)
{
  CWnd::EnableActiveAccessibility(this);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 18) + 112))(*((_DWORD *)this + 18));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 19) + 112))(*((_DWORD *)this + 19));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 112))(*((_DWORD *)this + 20));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 21) + 112))(*((_DWORD *)this + 21));
  return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 112))(*((_DWORD *)this + 22));
}


//======================================================================
// sub_615050
// entry 00615050  size 43  status ok
//======================================================================

int __thiscall sub_615050(_DWORD **this, int a2, int a3)
{
  return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 18) + 128))(*(this + 18), a2, a3);
}


//======================================================================
// sub_615080
// entry 00615080  size 81  status ok
//======================================================================

int __thiscall sub_615080(int this)
{
  *(_BYTE *)(this + 96) = 1;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 116))(*(_DWORD *)(this + 88));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 204))(*(_DWORD *)(this + 84));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 204))(*(_DWORD *)(this + 80));
}


//======================================================================
// sub_6150E0
// entry 006150e0  size 81  status ok
//======================================================================

int __thiscall sub_6150E0(int this)
{
  *(_BYTE *)(this + 96) = 0;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 112))(*(_DWORD *)(this + 88));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 84) + 208))(*(_DWORD *)(this + 84));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 80) + 208))(*(_DWORD *)(this + 80));
}


//======================================================================
// sub_615160
// entry 00615160  size 25  status ok
//======================================================================

bool __thiscall sub_615160(_DWORD *this)
{
  return *(this + 23) == 1;
}


//======================================================================
// sub_615180
// entry 00615180  size 168  status ok
//======================================================================

int __thiscall sub_615180(int *this, int a2, char a3)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 26) != a2 )
  {
    result = a2;
    *(this + 26) = a2;
    if ( *(this + 26) >= 0 )
    {
      if ( a3 )
      {
        if ( !(unsigned __int8)sub_6152A0(*(this + 26)) )
          sub_615540(*(this + 26));
        if ( !(unsigned __int8)sub_6152A0(a2) )
        {
          sub_6152F0(*(this + 26));
          sub_615740(this);
        }
      }
      (*(void (__thiscall **)(int *))(*this + 208))(this);
      return (*(int (__thiscall **)(int *))(*this + 200))(this);
    }
  }
  return result;
}


//======================================================================
// sub_615230
// entry 00615230  size 37  status ok
//======================================================================

int __thiscall sub_615230(_DWORD *this)
{
  *(this + 26) = -1;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 208))(this, this);
}


//======================================================================
// sub_6152A0
// entry 006152a0  size 72  status ok
//======================================================================

bool __thiscall sub_6152A0(_DWORD *this, int a2)
{
  return a2 >= *(this + 27) && a2 < *(this + 27) + (*(int (__thiscall **)(_DWORD *))(*this + 188))(this);
}


//======================================================================
// sub_6152F0
// entry 006152f0  size 232  status ok
//======================================================================

char __thiscall sub_6152F0(_DWORD *this, int a2)
{
  char result; // al
  int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // [esp+8h] [ebp-8h]

  result = sub_6152A0(this, a2);
  if ( !result )
  {
    if ( a2 <= *(this + 27) )
    {
      return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 220))(this, 1, *(this + 27) - a2);
    }
    else
    {
      v3 = a2 - *(this + 27);
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
      if ( v3 >= v4 - (*(this + 27) + (*(int (__thiscall **)(_DWORD *))(*this + 188))(this) - 1) )
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this);
        v6 = v5 - (*(this + 27) + (*(int (__thiscall **)(_DWORD *))(*this + 188))(this) - 1);
      }
      else
      {
        v6 = a2 - *(this + 27);
      }
      return (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 220))(this, 0, v6);
    }
  }
  return result;
}


//======================================================================
// sub_6153E0
// entry 006153e0  size 338  status ok
//======================================================================

int __thiscall sub_6153E0(void *this)
{
  int result; // eax
  int v2; // esi
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 188))(this);
  if ( result )
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
    if ( v2 <= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 188))(this) )
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 208))(*((_DWORD *)this + 20));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 21) + 208))(*((_DWORD *)this + 21));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 112))(*((_DWORD *)this + 22));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 20) + 204))(*((_DWORD *)this + 20));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 21) + 204))(*((_DWORD *)this + 21));
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 116))(*((_DWORD *)this + 22));
    }
    for ( i = *((_DWORD *)this + 27); ; ++i )
    {
      result = *((_DWORD *)this + 27) + (*(int (__thiscall **)(void *))(*(_DWORD *)this + 188))(this);
      if ( i >= result )
        break;
      if ( i >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this) )
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 216))(this, v5);
      else
        (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 212))(this, i, v5);
      ++v5;
    }
  }
  return result;
}


//======================================================================
// sub_615540
// entry 00615540  size 204  status ok
//======================================================================

int __thiscall sub_615540(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // esi
  int PreDockState; // [esp+8h] [ebp-4h]

  PreDockState = CPaneFrameWnd::GetPreDockState(*(this + 22));
  if ( a2
    && (v2 = (*(int (__thiscall **)(_DWORD *))(*this + 184))(this),
        a2 >= v2 - (*(int (__thiscall **)(_DWORD *))(*this + 188))(this)) )
  {
    PreDockState += sub_615610(this);
  }
  else if ( sub_615880(this) )
  {
    v3 = a2 * sub_615610(this);
    PreDockState += v3 / sub_615880(this);
  }
  if ( sub_615160(this) )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 22) + 72))(*(this + 22), PreDockState);
  else
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 22) + 80))(*(this + 22), PreDockState);
}


//======================================================================
// sub_615610
// entry 00615610  size 41  status ok
//======================================================================

unsigned int __thiscall sub_615610(CMFCVisualManagerOffice2003 **this)
{
  unsigned int HighlightMenuItemColor; // esi

  HighlightMenuItemColor = CMFCVisualManagerOffice2003::GetHighlightMenuItemColor(*(this + 22));
  return HighlightMenuItemColor - CPaneFrameWnd::GetPreDockState(*(this + 22));
}


//======================================================================
// sub_615640
// entry 00615640  size 256  status ok
//======================================================================

int __thiscall sub_615640(int this, int a2)
{
  int v3; // [esp+0h] [ebp-14h]
  int v4; // [esp+4h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( sub_615160((_DWORD *)this) )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 76))(*(_DWORD *)(this + 88));
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 12);
    v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 84))(*(_DWORD *)(this + 88));
  }
  if ( v6 >= v7 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 188))(this) > 1 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 188))(this) - 1;
      return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 220))(this, 0, v3);
    }
    else
    {
      return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 220))(this, 0, 1);
    }
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 188))(this) > 1 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 188))(this) - 1;
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 220))(this, 1, v4);
  }
  else
  {
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 220))(this, 1, 1);
  }
}


//======================================================================
// sub_615740
// entry 00615740  size 306  status ok
//======================================================================

int __thiscall sub_615740(int this)
{
  int v2; // [esp+10h] [ebp-30h]
  double v3; // [esp+14h] [ebp-2Ch]
  int v4; // [esp+20h] [ebp-20h]
  double X; // [esp+30h] [ebp-10h]
  double v7; // [esp+30h] [ebp-10h]
  int v8; // [esp+3Ch] [ebp-4h]

  if ( sub_615160((_DWORD *)this) )
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 76))(*(_DWORD *)(this + 88));
  else
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 84))(*(_DWORD *)(this + 88));
  v8 = v4 - CPaneFrameWnd::GetPreDockState(*(_DWORD *)(this + 88));
  if ( *(_DWORD *)(this + 108) >= (*(int (__thiscall **)(int))(*(_DWORD *)this + 184))(this) )
    *(_DWORD *)(this + 108) = 0;
  if ( sub_615880(this) )
  {
    v3 = (double)(int)sub_615610((CMFCVisualManagerOffice2003 **)this);
    v2 = sub_615880(this);
    X = (double)v8 / (v3 / (double)v2);
    if ( fmod(X, 1.0) >= 0.5 )
      v7 = ceil(X);
    else
      v7 = floor(X);
    *(_DWORD *)(this + 108) = (int)v7;
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 208))(this, v2);
}


//======================================================================
// sub_615880
// entry 00615880  size 66  status ok
//======================================================================

int __thiscall sub_615880(void *this)
{
  int v1; // esi
  int v4; // [esp+8h] [ebp-4h]

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this);
  v4 = v1 - (*(int (__thiscall **)(void *))(*(_DWORD *)this + 188))(this);
  if ( v4 < 0 )
    return 0;
  return v4;
}


//======================================================================
// sub_6158D0
// entry 006158d0  size 323  status ok
//======================================================================

int __thiscall sub_6158D0(int *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v8; // [esp+8h] [ebp-4h]

  v8 = *(this + 27);
  if ( sub_615880(this) || (result = (*(unsigned __int8 (__thiscall **)(int *))(*this + 204))(this), (_BYTE)result) )
  {
    if ( a2 )
    {
      if ( *(this + 27) - a3 >= 0 )
        *(this + 27) -= a3;
      else
        *(this + 27) = 0;
    }
    else
    {
      v4 = a3 + *(this + 27);
      v5 = v4 + (*(int (__thiscall **)(int *))(*this + 188))(this) - 1;
      if ( v5 >= (*(int (__thiscall **)(int *))(*this + 184))(this) )
      {
        v6 = (*(int (__thiscall **)(int *))(*this + 184))(this);
        *(this + 27) = v6 - (*(int (__thiscall **)(int *))(*this + 188))(this);
      }
      else
      {
        *(this + 27) += a3;
      }
    }
    result = *(this + 27);
    if ( result != v8 )
    {
      if ( *(this + 27) < 0 || *(this + 27) > (*(int (__thiscall **)(int *))(*this + 184))(this) - 1 )
        sub_5E9F20(
          "firstVisibleItem >= 0 && firstVisibleItem <= (GetNumItems() - 1)",
          "..\\scilib\\sciscrollbox.cpp",
          350);
      sub_615540(this, *(this + 27));
      return (*(int (__thiscall **)(int *))(*this + 208))(this);
    }
  }
  return result;
}


//======================================================================
// sub_615A20
// entry 00615a20  size 42  status ok
//======================================================================

int __thiscall sub_615A20(int this, int a2)
{
  sub_5F6130((_BYTE *)this);
  *(_DWORD *)this = &sciScrollRect::`vftable';
  *(_DWORD *)(this + 92) = a2;
  return this;
}


//======================================================================
// sub_615A70
// entry 00615a70  size 71  status ok
//======================================================================

bool __thiscall sub_615A70(Concurrency::details::VirtualProcessor **this, int a2)
{
  return Concurrency::details::VirtualProcessor::ExecutingAffine(*(this + 23)) && sub_5F4B60((CMFCScanliner *)this, a2);
}


//======================================================================
// sub_615AC0
// entry 00615ac0  size 65  status ok
//======================================================================

int __thiscall sub_615AC0(int this, int a2)
{
  int result; // eax

  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  result = Concurrency::details::VirtualProcessor::ExecutingAffine(*(Concurrency::details::VirtualProcessor **)(this + 92));
  if ( (_BYTE)result )
    return sub_615640(*(_DWORD *)(this + 92), a2);
  return result;
}


//======================================================================
// sub_615B10
// entry 00615b10  size 57  status ok
//======================================================================

_DWORD *__thiscall sub_615B10(void *this, int a2, int a3)
{
  _DWORD *v4; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v4 = &sciScrollButton::`vftable';
  v4[119] = a2;
  v4[120] = a3;
  return v4;
}


//======================================================================
// sub_615B70
// entry 00615b70  size 51  status ok
//======================================================================

int __thiscall sub_615B70(int this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 476) + 220))(
           *(_DWORD *)(this + 476),
           *(_DWORD *)(this + 480),
           1);
}


//======================================================================
// sub_615BB0
// entry 00615bb0  size 71  status ok
//======================================================================

_DWORD *__thiscall sub_615BB0(_DWORD *this, int a2)
{
  sub_5F5BF0(this);
  *this = &sciScrollThumb::`vftable';
  *(this + 97) = a2;
  *(this + 98) = 0;
  *(this + 99) = 0;
  return this;
}


//======================================================================
// sub_615C20
// entry 00615c20  size 74  status ok
//======================================================================

bool __thiscall sub_615C20(Concurrency::details::VirtualProcessor **this, int a2)
{
  return Concurrency::details::VirtualProcessor::ExecutingAffine(*(this + 97)) && sub_5F4B60((CMFCScanliner *)this, a2);
}


//======================================================================
// sub_615C70
// entry 00615c70  size 109  status ok
//======================================================================

int __thiscall sub_615C70(int this, int a2)
{
  int v2; // edx
  int v4; // edx

  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  if ( sub_615160(*(_DWORD **)(this + 388)) )
  {
    v2 = *(_DWORD *)(a2 + 8) - (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
    *(_DWORD *)(this + 44) = v2;
    return this;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 12) - (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    *(_DWORD *)(this + 48) = v4;
    return this;
  }
}


//======================================================================
// sub_615CE0
// entry 00615ce0  size 73  status ok
//======================================================================

int __thiscall sub_615CE0(int this, int a2)
{
  sub_5F4F50((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  sub_615740(*(_DWORD *)(this + 388));
  return sub_615540(*(_DWORD **)(this + 388), *(_DWORD *)(*(_DWORD *)(this + 388) + 108));
}


//======================================================================
// sub_615D30
// entry 00615d30  size 328  status ok
//======================================================================

int __thiscall sub_615D30(int *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(int *))(*this + 168))(this);
  if ( (_BYTE)result )
  {
    if ( sub_615160((_DWORD *)*(this + 97)) )
    {
      if ( *(_DWORD *)(a2 + 8) - *(this + 11) >= *(this + 98) )
      {
        if ( *(_DWORD *)(a2 + 8) - *(this + 11) <= *(this + 99) )
          (*(void (__thiscall **)(int *, int))(*this + 72))(this, *(_DWORD *)(a2 + 8) - *(this + 11));
        else
          (*(void (__thiscall **)(int *, _DWORD))(*this + 72))(this, *(this + 99));
      }
      else
      {
        (*(void (__thiscall **)(int *, _DWORD))(*this + 72))(this, *(this + 98));
      }
    }
    else if ( *(_DWORD *)(a2 + 12) - *(this + 12) >= *(this + 98) )
    {
      if ( *(_DWORD *)(a2 + 12) - *(this + 12) <= *(this + 99) )
        (*(void (__thiscall **)(int *, int))(*this + 80))(this, *(_DWORD *)(a2 + 12) - *(this + 12));
      else
        (*(void (__thiscall **)(int *, _DWORD))(*this + 80))(this, *(this + 99));
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD))(*this + 80))(this, *(this + 98));
    }
    result = sub_615740(*(this + 97));
    *(_BYTE *)(a2 + 4) = 1;
  }
  return result;
}


//======================================================================
// sub_615E80
// entry 00615e80  size 37  status ok
//======================================================================

int __thiscall sub_615E80(_DWORD *this, int a2, int a3)
{
  *(this + 98) = a2;
  *(this + 99) = a3;
  return a3;
}


//======================================================================
// sub_615EF0
// entry 00615ef0  size 48  status ok
//======================================================================

int __thiscall sub_615EF0(pairNode *this)
{
  int result; // eax
  int v2; // eax

  result = (int)this;
  if ( *((_DWORD *)this + 1) )
  {
    v2 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 36))(*((_DWORD *)this + 1), v2);
  }
  return result;
}


//======================================================================
// sub_615FE0
// entry 00615fe0  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_615FE0(_DWORD *this, int a2, int a3, int a4)
{
  sub_61DC00(a2, a3, a4, 1);
  *this = &TSprite::`vftable';
  sub_6161A0(this);
  return this;
}


//======================================================================
// sub_616050
// entry 00616050  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_616050(_DWORD *this, int a2, char *Source, int a4)
{
  sub_61DD90(a2, Source, a4, 1);
  *this = &TSprite::`vftable';
  sub_6161A0(this);
  return this;
}


//======================================================================
// sub_6160C0
// entry 006160c0  size 117  status ok
//======================================================================

_DWORD *__thiscall sub_6160C0(_DWORD *this, int a2, int a3, void *Src, int a5, int a6)
{
  sub_61DE20(a2, a3, Src, a5, a6);
  *this = &TSprite::`vftable';
  sub_6161A0(this);
  return this;
}


//======================================================================
// sub_616140
// entry 00616140  size 92  status ok
//======================================================================

int __thiscall sub_616140(_DWORD *this)
{
  *this = &TSprite::`vftable';
  sub_6162E0(this);
  return sub_61E400();
}


//======================================================================
// sub_6161A0
// entry 006161a0  size 319  status ok
//======================================================================

int __thiscall sub_6161A0(int this)
{
  int result; // eax
  __int16 v3; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h] BYREF

  result = this;
  *(_DWORD *)(this + 356) = 0;
  *(_WORD *)(this + 352) = 0;
  if ( *(_DWORD *)(this + 344) )
  {
    result = strncmp(*(const char **)(this + 344), "tex ", 4u);
    if ( result )
      result = sub_6171A0(0);
  }
  if ( *(_DWORD *)(this + 344) )
  {
    *(_DWORD *)(this + 360) = *(_DWORD *)(this + 344);
    result = sub_61C810(*(_DWORD *)(this + 360), this + 352, this + 356, &v5);
    for ( i = 0; i < 256; ++i )
    {
      v3 = *(_WORD *)(v5 + 3 * i);
      *(_DWORD *)(this + 4 * i + 1388) = sub_617AF0(v3);
      result = sub_617AF0(v3);
      *(_DWORD *)(this + 4 * i + 364) = result;
    }
  }
  return result;
}


//======================================================================
// sub_6162E0
// entry 006162e0  size 210  status ok
//======================================================================

void __thiscall sub_6162E0(int this)
{
  int j; // [esp+10h] [ebp-Ch]
  int v3; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 356) )
  {
    for ( i = 0; i < *(__int16 *)(this + 352); ++i )
    {
      v3 = *(__int16 *)(*(_DWORD *)(this + 356) + 8 * i);
      for ( j = 0; j < v3; ++j )
        operator delete(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 356) + 8 * i + 4) + 16 * j + 12));
      operator delete(*(void **)(*(_DWORD *)(this + 356) + 8 * i + 4));
    }
    operator delete(*(void **)(this + 356));
  }
}


//======================================================================
// sub_6163C0
// entry 006163c0  size 21  status ok
//======================================================================

int __thiscall sub_6163C0(__int16 *this)
{
  return *(this + 176);
}


//======================================================================
// sub_6163E0
// entry 006163e0  size 47  status ok
//======================================================================

int __thiscall sub_6163E0(_DWORD *this, int a2)
{
  if ( *(this + 89) )
    return *(__int16 *)(*(this + 89) + 8 * a2);
  else
    return 0;
}


//======================================================================
// sub_616410
// entry 00616410  size 57  status ok
//======================================================================

int __thiscall sub_616410(_DWORD *this, int a2, int a3)
{
  if ( *(this + 89) )
    return *(__int16 *)(*(_DWORD *)(*(this + 89) + 8 * a2 + 4) + 16 * a3);
  else
    return 0;
}


//======================================================================
// sub_616450
// entry 00616450  size 58  status ok
//======================================================================

int __thiscall sub_616450(_DWORD *this, int a2, int a3)
{
  if ( *(this + 89) )
    return *(__int16 *)(*(_DWORD *)(*(this + 89) + 8 * a2 + 4) + 16 * a3 + 2);
  else
    return 0;
}


//======================================================================
// sub_616490
// entry 00616490  size 58  status ok
//======================================================================

int __thiscall sub_616490(_DWORD *this, int a2, int a3)
{
  if ( *(this + 89) )
    return *(__int16 *)(*(_DWORD *)(*(this + 89) + 8 * a2 + 4) + 16 * a3 + 8);
  else
    return 0;
}


//======================================================================
// sub_6164D0
// entry 006164d0  size 58  status ok
//======================================================================

int __thiscall sub_6164D0(_DWORD *this, int a2, int a3)
{
  if ( *(this + 89) )
    return *(__int16 *)(*(_DWORD *)(*(this + 89) + 8 * a2 + 4) + 16 * a3 + 10);
  else
    return 0;
}


//======================================================================
// sub_616510
// entry 00616510  size 1456  status ok
//======================================================================

char __thiscall sub_616510(
        _DWORD *this,
        int a2,
        int a3,
        pairNode *a4,
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
        char a15,
        int a16)
{
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // eax
  int v32; // [esp+18h] [ebp-78h]
  int v33; // [esp+20h] [ebp-70h]
  int i; // [esp+28h] [ebp-68h]
  int v35; // [esp+2Ch] [ebp-64h]
  int v36; // [esp+30h] [ebp-60h]
  int v37; // [esp+34h] [ebp-5Ch] BYREF
  int v38; // [esp+38h] [ebp-58h]
  int v39; // [esp+3Ch] [ebp-54h]
  int v40; // [esp+40h] [ebp-50h]
  _DWORD v41[4]; // [esp+44h] [ebp-4Ch] BYREF
  int v42; // [esp+54h] [ebp-3Ch]
  int (__cdecl *v43)(int, int, int, int, int, int); // [esp+58h] [ebp-38h]
  int v44; // [esp+5Ch] [ebp-34h] BYREF
  int v45; // [esp+60h] [ebp-30h]
  int v46; // [esp+64h] [ebp-2Ch]
  int v47; // [esp+68h] [ebp-28h]
  int v48[2]; // [esp+6Ch] [ebp-24h] BYREF
  int Status; // [esp+74h] [ebp-1Ch]
  int v50; // [esp+78h] [ebp-18h]
  _DWORD *v51; // [esp+7Ch] [ebp-14h]
  int v52; // [esp+80h] [ebp-10h]
  int v53; // [esp+84h] [ebp-Ch]
  int v54; // [esp+88h] [ebp-8h]
  int v55; // [esp+8Ch] [ebp-4h]

  LOBYTE(v16) = (_BYTE)this;
  if ( *(this + 89) )
  {
    v33 = sub_616450(this, a2, a3);
    v44 = 0;
    v45 = 0;
    v46 = sub_616410(this, a2, a3);
    v47 = v33;
    v32 = pairNode::raw_length(a4);
    v48[0] = 0;
    v48[1] = 0;
    Status = ATL::COleDateTime::GetStatus(a4);
    v50 = v32;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    if ( a14 > 1 )
    {
      v41[0] = a5;
      v41[1] = a6;
      v41[2] = a7;
      v41[3] = a8;
      v37 = a9;
      v38 = a10;
      v39 = a11;
      v40 = a12;
      a7 = a5 + a14 * (a7 - a5);
      a8 = a6 + a14 * (a8 - a6);
      a11 = a9 + a14 * (a11 - a9);
      a12 = a10 + a14 * (a12 - a10);
      v46 = v44 + a14 * (v46 - v44);
      v47 = v45 + a14 * (v47 - v45);
    }
    LOBYTE(v16) = sub_624A70(&a5, (int)v48, &a9, (int)&v44);
    if ( (_BYTE)v16 )
    {
      if ( a14 > 1 )
      {
        sub_5EC4A0(&a5, v41, a14, 0);
        sub_5EC4A0(&a9, &v37, a14, 1);
        v35 = a8 - a6;
        v36 = a7 - a5;
        if ( a6 + a14 * (a8 - a6) > v50 )
        {
          a8 -= a6 + a14 * v35 - v50;
          a12 -= a6 + a14 * v35 - v50;
        }
        if ( a5 + a14 * v36 > Status )
        {
          a7 -= a5 + a14 * v36 > Status;
          a11 -= a5 + a14 * v36 > Status;
        }
      }
      v17 = pairNode::raw_length(a4);
      if ( a6 >= v17 )
        sub_5E9F20("destRect.top < frameBuffer->GetHeight()", "..\\scilib\\platform\\tsprite.cpp", 203);
      v18 = ATL::COleDateTime::GetStatus(a4);
      if ( a5 >= v18 )
        sub_5E9F20("destRect.left < frameBuffer->GetWidth()", "..\\scilib\\platform\\tsprite.cpp", 204);
      v19 = pairNode::raw_length(a4);
      if ( a8 > v19 )
        sub_5E9F20("destRect.bottom <= frameBuffer->GetHeight()", "..\\scilib\\platform\\tsprite.cpp", 205);
      v20 = ATL::COleDateTime::GetStatus(a4);
      if ( a7 > v20 )
        sub_5E9F20("destRect.right <= frameBuffer->GetWidth()", "..\\scilib\\platform\\tsprite.cpp", 206);
      v21 = sub_616450(this, a2, a3);
      if ( a10 >= v21 )
        sub_5E9F20("sourceRect.top < GetHeight(loop, cel)", "..\\scilib\\platform\\tsprite.cpp", 207);
      v22 = sub_616410(this, a2, a3);
      if ( a9 >= v22 )
        sub_5E9F20("sourceRect.left < GetWidth(loop, cel)", "..\\scilib\\platform\\tsprite.cpp", 208);
      v23 = sub_616450(this, a2, a3);
      if ( a12 > v23 )
        sub_5E9F20("sourceRect.bottom <= GetHeight(loop, cel)", "..\\scilib\\platform\\tsprite.cpp", 209);
      v24 = sub_616410(this, a2, a3);
      if ( a11 > v24 )
        sub_5E9F20("sourceRect.right <= GetWidth(loop, cel)", "..\\scilib\\platform\\tsprite.cpp", 210);
      if ( a14 > 1 )
      {
        v25 = a7;
        if ( v25 > ATL::COleDateTime::GetStatus(a4) )
        {
          LOBYTE(v16) = sub_5E9F20("false", "..\\scilib\\platform\\tsprite.cpp", 213);
          return v16;
        }
        v26 = a8;
        if ( v26 > pairNode::raw_length(a4) )
        {
          LOBYTE(v16) = sub_5E9F20("false", "..\\scilib\\platform\\tsprite.cpp", 215);
          return v16;
        }
      }
      dword_795FAC += (a8 - a6) * (a7 - a5);
      v27 = sub_6238D0(a6);
      v28 = unknown_libname_726(a4);
      v52 = a5 * v28 + v27;
      v54 = *(_DWORD *)(*(_DWORD *)(*(this + 89) + 8 * a2 + 4) + 16 * a3 + 12);
      v51 = (_DWORD *)(v54 + 4 * a10);
      v53 = a8 - a6;
      v55 = a7 - a5;
      if ( byte_795FB7 || a15 )
      {
        sub_618E00(a13);
        v43 = (int (__cdecl *)(int, int, int, int, int, int))sub_61B450;
      }
      else if ( a13 == 255 && a14 == 1 )
      {
        v43 = sub_618ED0;
      }
      else
      {
        sub_618E00(a13);
        v43 = (int (__cdecl *)(int, int, int, int, int, int))sub_61A4A0;
      }
      v42 = unknown_libname_847(a4);
      --v51;
      LOBYTE(v16) = v52 - v42;
      v52 -= v42;
      if ( a14 <= 1 )
      {
        while ( 1 )
        {
          v16 = v53--;
          if ( !v16 )
            break;
          v52 += v42;
          ((void (__cdecl *)(int, _DWORD, int, int, _DWORD *, int, int))v43)(v52, *++v51, a9, v55, this + 91, a13, a14);
        }
      }
      else
      {
        while ( v53-- )
        {
          LOBYTE(v16) = (_BYTE)v51++ + 4;
          for ( i = 0; i < a14; ++i )
          {
            v52 += v42;
            LOBYTE(v16) = ((int (__cdecl *)(int, _DWORD, int, int, _DWORD *, int, int))v43)(
                            v52,
                            *v51,
                            a9,
                            v55,
                            this + 91,
                            a13,
                            a14);
          }
        }
      }
    }
  }
  return v16;
}


//======================================================================
// sub_616AC0
// entry 00616ac0  size 69  status ok
//======================================================================

char __thiscall sub_616AC0(_DWORD *this, int a2, int a3, int a4, int a5, char a6)
{
  if ( *(this + 89) )
    return sub_61D0D0(a2, a3, *(this + 89), a4, a5, a6);
  else
    return 0;
}


//======================================================================
// sub_616B10
// entry 00616b10  size 26  status ok
//======================================================================

int __thiscall sub_616B10(_DWORD *this, int a2)
{
  return *(this + a2 + 91);
}


//======================================================================
// sub_616B30
// entry 00616b30  size 180  status ok
//======================================================================

int __thiscall sub_616B30(_DWORD *this, int a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  int result; // eax
  unsigned __int8 v9; // [esp+Dh] [ebp-3h] BYREF
  char v10; // [esp+Eh] [ebp-2h] BYREF
  char v11; // [esp+Fh] [ebp-1h] BYREF

  sub_61D290(a2, a3, *(this + 89), a4, a5, &v9, &v11, &v10);
  *(_DWORD *)a6 = sub_617A70(*(this + v9 + 91));
  *(_BYTE *)(a6 + 3) = v11;
  *a7 = v10;
  result = (unsigned __int8)*a7 - 1;
  switch ( *a7 )
  {
    case 1:
      *(_BYTE *)(a6 + 3) = 0;
      break;
    case 2:
    case 0x10:
    case 0x20:
      result = a6;
      *(_BYTE *)(a6 + 3) = -1;
      break;
    case 8:
      *(_BYTE *)(a6 + 3) = -1;
      break;
    default:
      result = (int)a7;
      break;
  }
  return result;
}


//======================================================================
// sub_616C20
// entry 00616c20  size 677  status ok
//======================================================================

FILE *__thiscall sub_616C20(int this, char *Buffer, int a3, int a4)
{
  size_t v4; // eax
  FILE *v7; // [esp+8h] [ebp-24h]
  const char *v8; // [esp+Ch] [ebp-20h]
  char *v9; // [esp+10h] [ebp-1Ch]
  char *v10; // [esp+14h] [ebp-18h]
  const char *v11; // [esp+14h] [ebp-18h]
  char *v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h] BYREF
  char v14; // [esp+23h] [ebp-9h]
  char *Str; // [esp+24h] [ebp-8h]
  FILE *v16; // [esp+28h] [ebp-4h]

  if ( !*(_BYTE *)(this + 56) )
    goto LABEL_34;
  sub_5EA5B0((char *)(this + 56));
  v12 = strrchr((const char *)(this + 56), 92);
  Str = (char *)(this + 56);
  while ( 1 )
  {
    v9 = strstr(Str, "-l");
    if ( !v9 || v12 && v9 < v12 )
      break;
    v8 = strrchr(v9, 46);
    if ( v8 )
    {
      v4 = strlen(v8);
      memmove(v9, v8, v4 + 1);
    }
    else
    {
      *v9 = 0;
    }
  }
  v10 = strrchr((const char *)(this + 56), 46);
  if ( v12 && v10 && v10 < v12 )
    v10 = 0;
  v14 = 0;
  if ( v10 )
  {
    v14 = *v10;
    *v10 = 0;
    v11 = v10 + 1;
  }
  else
  {
    v11 = &Source;
  }
  sprintf(Buffer, "%s-l%dc%d%c%s", (const char *)(this + 56), a3, a4, v14, v11);
  if ( *v11 )
    *((_BYTE *)v11 - 1) = v14;
  v13 = 0;
  if ( v12 )
    sscanf(v12 + 1, "%d", &v13);
  else
    sscanf((const char *const)(this + 56), "%d", &v13);
  v16 = sub_5EA9C0(Buffer, "rb");
  if ( !v16 && !a3 && !a4 )
  {
    strcpy(Buffer, (const char *)(this + 56));
    v16 = sub_5EA9C0(Buffer, "rb");
  }
  if ( v16 )
  {
    if ( !*(_DWORD *)(this + 52) )
      *(_DWORD *)(this + 52) = v13;
    return v16;
  }
  else
  {
LABEL_34:
    if ( !*(_DWORD *)(this + 52) )
      return 0;
    sprintf(Buffer, "debug\\%d-l%dc%d.tga", *(_DWORD *)(this + 52), a3, a4);
    sub_5EA5B0(Buffer);
    v7 = sub_5EA9C0(Buffer, "rb");
    if ( !v7 && !a3 && !a4 )
    {
      sprintf(Buffer, "debug\\%d.tga", *(_DWORD *)(this + 52));
      sub_5EA5B0(Buffer);
      v7 = sub_5EA9C0(Buffer, "rb");
    }
    if ( v7 )
      return v7;
    else
      return 0;
  }
}


//======================================================================
// sub_616ED0
// entry 00616ed0  size 559  status ok
//======================================================================

unsigned __int8 *__cdecl sub_616ED0(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 *result; // eax
  unsigned __int8 v5; // [esp+0h] [ebp-48h]
  int v6; // [esp+4h] [ebp-44h]
  _BYTE v7[12]; // [esp+8h] [ebp-40h] BYREF
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-34h] BYREF
  char *v9; // [esp+20h] [ebp-28h]
  int j; // [esp+24h] [ebp-24h]
  int k; // [esp+28h] [ebp-20h]
  char *v12; // [esp+2Ch] [ebp-1Ch]
  char *v13; // [esp+30h] [ebp-18h]
  int v14; // [esp+34h] [ebp-14h]
  int i; // [esp+38h] [ebp-10h]
  char *v16; // [esp+3Ch] [ebp-Ch]
  unsigned __int8 *v17; // [esp+40h] [ebp-8h]
  int v18; // [esp+44h] [ebp-4h]

  v16 = 0;
  v17 = a1;
  v18 = (int)(a1 + 18);
  v18 = (int)&a1[*a1 + 18];
  v9 = (char *)operator new(4 * *((unsigned __int16 *)a1 + 7) * *((unsigned __int16 *)a1 + 6));
  v16 = v9;
  if ( a1[2] != 2 )
  {
    std::exception::exception((std::exception *)pExceptionObject);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
  }
  for ( i = 0; i < *((unsigned __int16 *)v17 + 7); ++i )
  {
    if ( (v17[17] & 0x20) != 0 )
      v6 = i;
    else
      v6 = *((unsigned __int16 *)v17 + 7) - 1 - i;
    v14 = v6;
    v12 = &v16[4 * i * *((unsigned __int16 *)v17 + 6)];
    v13 = (char *)(v18 + v17[16] * v6 * *((unsigned __int16 *)v17 + 6) / 8);
    v5 = v17[16];
    if ( v5 == 24 )
    {
      for ( j = 0; j < *((unsigned __int16 *)v17 + 6); ++j )
      {
        v12[4 * j] = v13[2];
        v12[4 * j + 1] = v13[1];
        v12[4 * j + 2] = *v13;
        v12[4 * j + 3] = -1;
        v13 += 3;
      }
    }
    else
    {
      if ( v5 != 32 )
      {
        std::exception::exception((std::exception *)v7);
        CxxThrowException(v7, (_ThrowInfo *)&_TI1_AVexception_std__);
      }
      for ( k = 0; k < *((unsigned __int16 *)v17 + 6); ++k )
      {
        v12[4 * k] = v13[2];
        v12[4 * k + 1] = v13[1];
        v12[4 * k + 2] = *v13;
        v12[4 * k + 3] = v13[3];
        v13 += 4;
      }
    }
  }
  *a4 = v16;
  *a2 = *((unsigned __int16 *)v17 + 6);
  result = v17;
  *a3 = *((unsigned __int16 *)v17 + 7);
  return result;
}


//======================================================================
// sub_617100
// entry 00617100  size 150  status ok
//======================================================================

void __cdecl sub_617100(FILE *Stream, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  void *Buffer; // [esp+8h] [ebp-8h]
  size_t ElementCount; // [esp+Ch] [ebp-4h]

  ElementCount = sub_5E9FD0(Stream);
  Buffer = operator new(ElementCount);
  if ( fread(Buffer, 1u, ElementCount, Stream) != ElementCount )
    sub_5E9F20("fread(buf, 1, len, inFile) == len", "..\\scilib\\platform\\tsprite.cpp", 506);
  sub_616ED0((unsigned __int8 *)Buffer, a2, a3, a4);
  operator delete(Buffer);
}


//======================================================================
// sub_6171A0
// entry 006171a0  size 2139  status ok
//======================================================================

int __thiscall sub_6171A0(int this, int a2)
{
  int result; // eax
  int (__thiscall ***v3)(_DWORD, int); // [esp+1Ch] [ebp-2E4h]
  char v5[20]; // [esp+6Ch] [ebp-294h] BYREF
  int v6; // [esp+80h] [ebp-280h]
  int v7; // [esp+84h] [ebp-27Ch]
  char Buffer[20]; // [esp+88h] [ebp-278h] BYREF
  int Value; // [esp+9Ch] [ebp-264h]
  char *v10; // [esp+A0h] [ebp-260h]
  char *v11; // [esp+A4h] [ebp-25Ch]
  char *v12; // [esp+A8h] [ebp-258h]
  char Destination[264]; // [esp+ACh] [ebp-254h] BYREF
  char v14[268]; // [esp+1B4h] [ebp-14Ch] BYREF
  int v15; // [esp+2C4h] [ebp-3Ch] BYREF
  int (__thiscall ***v16)(_DWORD, int); // [esp+2C8h] [ebp-38h]
  int v17[3]; // [esp+2CCh] [ebp-34h] BYREF
  void (__thiscall ***v18)(void *, int); // [esp+2D8h] [ebp-28h]
  FILE *Stream; // [esp+2E0h] [ebp-20h]
  int j; // [esp+2E4h] [ebp-1Ch]
  int i; // [esp+2E8h] [ebp-18h]
  int v22; // [esp+2ECh] [ebp-14h] BYREF
  unsigned __int8 v23; // [esp+2F3h] [ebp-Dh]
  int v24; // [esp+2FCh] [ebp-4h]

  v24 = 0;
  if ( operator new(0x320u) )
    v3 = (int (__thiscall ***)(_DWORD, int))Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>();
  else
    v3 = 0;
  v24 = -1;
  v16 = v3;
  Stream = 0;
  memset(v17, 0, sizeof(v17));
  v23 = 0;
  for ( i = 0; i < 100; ++i )
  {
    for ( j = 0; j < 100; ++j )
    {
      Stream = sub_616C20(this, v14, i, j);
      if ( !Stream )
        break;
      sub_617100(Stream, &v15, &v22, v17);
      fclose(Stream);
      sub_61F650(v17[0], v15, v22);
      operator delete((void *)v17[0]);
      v23 = 1;
    }
  }
  result = v23;
  if ( v23 )
  {
    sub_61F850(v16);
    v18 = 0;
    if ( *(_BYTE *)(this + 56) )
    {
      strcpy(Destination, (const char *)(this + 56));
      v11 = strrchr(Destination, 46);
      v12 = strrchr(Destination, 92);
      if ( v12 && v11 && v11 < v12 )
        v11 = 0;
      if ( v11 )
        *v11 = 0;
      strcat(Destination, ".ini");
      v18 = (void (__thiscall ***)(void *, int))(*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_7960D8
                                                                                                 + 32))(
                                                  dword_7960D8,
                                                  Destination,
                                                  "exists");
      if ( !sub_607960(v18, (int)"exists", 0) )
      {
        if ( v18 )
          (**v18)(v18, 1);
        v18 = 0;
      }
    }
    if ( !v18 && *(_BYTE *)(this + 56) )
    {
      strcpy(Destination, (const char *)(this + 56));
      v10 = strrchr(Destination, 92);
      if ( v10 )
        v10[1] = 0;
      else
        Destination[0] = 0;
      strcat(Destination, "TEX.ini");
      v18 = (void (__thiscall ***)(void *, int))(*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_7960D8
                                                                                                 + 32))(
                                                  dword_7960D8,
                                                  Destination,
                                                  "exists");
      if ( !sub_607960(v18, (int)"exists", 0) )
      {
        if ( v18 )
          (**v18)(v18, 1);
        v18 = 0;
      }
    }
    if ( !v18 )
    {
      if ( *(_DWORD *)(this + 52) )
      {
        sprintf(Destination, "debug\\%d.ini", *(_DWORD *)(this + 52));
        sub_5EA5B0(Destination);
        v18 = (void (__thiscall ***)(void *, int))(*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_7960D8 + 32))(
                                                    dword_7960D8,
                                                    Destination,
                                                    "exists");
        if ( !sub_607960(v18, (int)"exists", 0) )
        {
          if ( v18 )
            (**v18)(v18, 1);
          v18 = 0;
        }
      }
    }
    if ( !v18 )
    {
      if ( *(_DWORD *)(this + 52) )
      {
        sprintf(Destination, "debug\\TEX.ini");
        sub_5EA5B0(Destination);
        v18 = (void (__thiscall ***)(void *, int))(*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_7960D8 + 32))(
                                                    dword_7960D8,
                                                    Destination,
                                                    "exists");
        if ( !sub_607960(v18, (int)"exists", 0) )
        {
          if ( v18 )
            (**v18)(v18, 1);
          v18 = 0;
        }
      }
    }
    if ( v18 )
    {
      sprintf(Destination, "%d", *(_DWORD *)(this + 52));
      sub_6078D0((char *)v18, Destination);
    }
    for ( i = 0; i < 100; ++i )
    {
      for ( j = 0; j < 100; ++j )
      {
        Stream = sub_616C20(this, v14, i, j);
        if ( !Stream )
          break;
        if ( !j && i )
          sub_6200E0(v16);
        sub_617100(Stream, &v15, &v22, v17);
        fclose(Stream);
        Value = 4;
        if ( v18 )
        {
          sprintf(Buffer, "l%dc%d-mode", i, j);
          Value = sub_607960(v18, (int)Buffer, Value);
        }
        sub_61F8A0(v17[0], v15, v22, Value, 0);
        operator delete((void *)v17[0]);
        if ( v18 )
        {
          sprintf(v5, "l%dc%d-x", i, j);
          v6 = sub_607960(v18, (int)v5, 0);
          sprintf(v5, "l%dc%d-y", i, j);
          v7 = sub_607960(v18, (int)v5, 0);
          sub_620050(v6, v7);
        }
      }
      if ( !j )
        break;
    }
    if ( v18 )
    {
      (**v18)(v18, 1);
      v18 = 0;
    }
    if ( *(_DWORD *)(this + 344) )
      operator delete(*(void **)(this + 344));
    *(_DWORD *)(this + 332) = sub_620540(v16);
    *(_DWORD *)(this + 344) = operator new(*(_DWORD *)(this + 332));
    sub_6201C0(*(_DWORD *)(this + 344));
    result = (int)v16;
    if ( v16 )
      return (**v16)(v16, 1);
  }
  return result;
}


