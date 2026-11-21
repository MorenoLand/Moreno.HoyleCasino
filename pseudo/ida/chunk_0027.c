//======================================================================
// sub_5CAB60
// entry 005cab60  size 427  status ok
//======================================================================

int __thiscall sub_5CAB60(double *this)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( 0.25 == *(this + 60) )
    return 1069;
  v2 = (int)*(this + 60);
  if ( v2 <= 10000 )
  {
    if ( v2 != 10000 )
    {
      if ( v2 <= 100 )
      {
        if ( v2 != 100 )
        {
          switch ( v2 )
          {
            case 5:
              return ++v3 + 1016;
            case 10:
              goto LABEL_34;
            case 25:
              goto LABEL_33;
            case 50:
              goto LABEL_32;
            default:
              return v3 + 1016;
          }
          return v3 + 1016;
        }
        goto LABEL_31;
      }
      if ( v2 == 500 )
      {
LABEL_30:
        ++v3;
LABEL_31:
        ++v3;
LABEL_32:
        ++v3;
LABEL_33:
        ++v3;
LABEL_34:
        ++v3;
        return ++v3 + 1016;
      }
      if ( v2 == 1000 )
      {
LABEL_29:
        ++v3;
        goto LABEL_30;
      }
      if ( v2 != 5000 )
        return v3 + 1016;
LABEL_28:
      ++v3;
      goto LABEL_29;
    }
LABEL_27:
    ++v3;
    goto LABEL_28;
  }
  if ( v2 <= 500000 )
  {
    if ( v2 != 500000 )
    {
      if ( v2 == 25000 )
      {
LABEL_26:
        ++v3;
        goto LABEL_27;
      }
      if ( v2 == 50000 )
      {
LABEL_25:
        ++v3;
        goto LABEL_26;
      }
      if ( v2 != 100000 )
        return v3 + 1016;
LABEL_24:
      ++v3;
      goto LABEL_25;
    }
LABEL_23:
    ++v3;
    goto LABEL_24;
  }
  if ( v2 == 1000000 )
  {
    v3 = 1;
    goto LABEL_23;
  }
  if ( (_UNKNOWN *)v2 == &unk_989680 )
    return 1088;
  if ( v2 == 100000000 )
    return 1087;
  return v3 + 1016;
}


//======================================================================
// sub_5CAD50
// entry 005cad50  size 334  status ok
//======================================================================

void __thiscall sub_5CAD50(double *this, int a2)
{
  double v2; // st7
  int v3; // eax
  int v4; // [esp+0h] [ebp-A0h]
  double *v5; // [esp+4h] [ebp-9Ch]
  double v6; // [esp+8h] [ebp-98h]
  double v7[17]; // [esp+10h] [ebp-90h]
  int i; // [esp+9Ch] [ebp-4h]

  v5 = this;
  v6 = 0.25;
  v7[0] = 1.0;
  v7[1] = 5.0;
  v7[2] = 10.0;
  v7[3] = 25.0;
  v7[4] = 50.0;
  v7[5] = 100.0;
  v7[6] = 500.0;
  v7[7] = 1000.0;
  v7[8] = 5000.0;
  v7[9] = 10000.0;
  v7[10] = 25000.0;
  v7[11] = 50000.0;
  v7[12] = 100000.0;
  v7[13] = 500000.0;
  v7[14] = 1000000.0;
  v7[15] = 10000000.0;
  v7[16] = 100000000.0;
  for ( i = 0; i < 18; ++i )
  {
    if ( v5[60] == v7[i - 1] )
    {
      if ( a2 )
        v2 = v7[i];
      else
        v2 = *((double *)&v4 + i);
      v5[60] = v2;
      v3 = sub_5CAB60(v5);
      (*(void (__thiscall **)(double *, int))(*(_DWORD *)v5 + 200))(v5, v3);
      return;
    }
  }
}


//======================================================================
// sub_5CAEA0
// entry 005caea0  size 407  status ok
//======================================================================

int __stdcall sub_5CAEA0(_DWORD *a1)
{
  int result; // eax
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // eax
  _BYTE v5[8]; // [esp+10h] [ebp-28h] BYREF
  __int64 v6; // [esp+18h] [ebp-20h] BYREF
  __int64 v7; // [esp+20h] [ebp-18h]
  __int64 v8; // [esp+28h] [ebp-10h] BYREF
  int v9; // [esp+30h] [ebp-8h]
  _DWORD *v10; // [esp+34h] [ebp-4h]

  v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  sub_5D5DE0(&v8);
  sub_5D5AC0(&v6);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 692))(dword_7947E4);
  if ( (_DWORD)v8 != v9 || (int)*a1 < 0 || (result = (int)a1, (int)a1[1] < 0) )
  {
    if ( v8 != v6 || (result = (int)a1, (int)*a1 < 0) || (int)a1[1] < 0 )
    {
      v2 = (_DWORD *)sub_64C5C0(v5, *a1, a1[1]);
      v3 = v2[1];
      LODWORD(v7) = *v2;
      HIDWORD(v7) = v3;
      if ( (int)v7 > v9 )
        LODWORD(v7) = v9;
      if ( (_DWORD)v7 == v9 && SHIDWORD(v7) > 0 )
        HIDWORD(v7) = 0;
      if ( (int)v7 > (int)v6 || (_DWORD)v7 == (_DWORD)v6 && SHIDWORD(v7) > SHIDWORD(v6) )
      {
        v7 = v6;
      }
      else if ( (int)v7 < 0 || v7 < 0 )
      {
        v7 = sub_64C8A0(0, 0);
      }
      sub_5D5E10(v7, HIDWORD(v7));
      sub_5CA8B0(*(_DWORD ***)(dword_7947E4 + 104));
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 40))(v4, v4);
      if ( result == 1 )
        return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*v10 + 12))(v10, v10[303], v10[304], 0);
    }
  }
  return result;
}


//======================================================================
// sub_5CB040
// entry 005cb040  size 110  status ok
//======================================================================

_DWORD *__thiscall sub_5CB040(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-14h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v2);
  *this = &ClearCurrentBetButton::`vftable';
  *(this + 119) = 0;
  sub_5EB700(1);
  return this;
}


//======================================================================
// sub_5CB0B0
// entry 005cb0b0  size 136  status ok
//======================================================================

int __thiscall sub_5CB0B0(void (__thiscall ****this)(_DWORD, int))
{
  int v2; // [esp+0h] [ebp-20h]

  *this = (void (__thiscall ***)(_DWORD, int))&ClearCurrentBetButton::`vftable';
  if ( *(this + 119) )
    (***(this + 119))(*(this + 119), 1);
  return sub_601BA0(v2);
}


//======================================================================
// sub_5CB140
// entry 005cb140  size 443  status ok
//======================================================================

int __thiscall sub_5CB140(_DWORD **this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp-14h] [ebp-40h]
  int v5; // [esp-10h] [ebp-3Ch]
  int v6; // [esp+8h] [ebp-24h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+14h] [ebp-18h]
  void *v9; // [esp+18h] [ebp-14h]

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)(a2 + 24) == 3 )
    {
      if ( (unsigned __int8)sub_5EB6D0(a2) )
      {
        if ( !*(this + 119) )
        {
          v9 = operator new(0x1D4u);
          if ( v9 )
            v6 = sub_5CD360(v9);
          else
            v6 = 0;
          *(this + 119) = (_DWORD *)v6;
          v5 = ((int (__thiscall *)(_DWORD **))(*this)[21])(this) - 15;
          v4 = ((int (__thiscall *)(_DWORD **))(*this)[19])(this);
          v3 = sub_630F40("SID_BETCONTROL_ERASEBET");
          sub_5EC8F0(v3, 103, 50, 15, v4, v5, 2000, 48, -1);
          sub_5EE8C0(255, 255, 204);
          (*(void (__thiscall **)(_DWORD))(**(this + 119) + 116))(*(this + 119));
        }
      }
      else if ( *(this + 119) )
      {
        (*(void (__thiscall **)(_DWORD))(**(this + 119) + 112))(*(this + 119));
        v8 = (void (__thiscall ***)(_DWORD, int))*(this + 119);
        if ( v8 )
          (**v8)(v8, 1);
        *(this + 119) = 0;
      }
    }
    return sub_5F4D00(a2);
  }
  return result;
}


//======================================================================
// sub_5CB300
// entry 005cb300  size 24  status ok
//======================================================================

int sub_5CB300()
{
  return sub_5CA6C0(*(void **)(dword_7947E4 + 104));
}


//======================================================================
// sub_5CB320
// entry 005cb320  size 113  status ok
//======================================================================

_DWORD *__thiscall sub_5CB320(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-14h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v3);
  *this = &ChipButtonCycleButton::`vftable';
  *(this + 119) = a2;
  sub_602EF0(60, 6);
  return this;
}


//======================================================================
// sub_5CB3C0
// entry 005cb3c0  size 35  status ok
//======================================================================

void __thiscall sub_5CB3C0(int *this)
{
  sub_5CA640(*(_DWORD *)(dword_7947E4 + 104), *(this + 119));
}


//======================================================================
// sub_5CB4B0
// entry 005cb4b0  size 214  status ok
//======================================================================

_DWORD *__thiscall sub_5CB4B0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-24h]
  int j; // [esp+10h] [ebp-14h]
  int i; // [esp+14h] [ebp-10h]

  sub_5F49D0(v2);
  *this = &CasinoBet::`vftable';
  *(this + 58) = 1;
  *(this + 59) = 1;
  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
      *((_QWORD *)this + 4 * i + j + 9) = sub_64C8A0(0, 0);
  }
  return this;
}


//======================================================================
// sub_5CB5B0
// entry 005cb5b0  size 96  status ok
//======================================================================

char __thiscall sub_5CB5B0(void *this)
{
  __int64 v3; // [esp+Ch] [ebp-8h] BYREF

  v3 = sub_64C8A0(0, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 176))(this) )
    return 0;
  (*(void (__thiscall **)(void *, __int64 *, _DWORD, int))(*(_DWORD *)this + 196))(this, &v3, 0, 1);
  return 1;
}


//======================================================================
// sub_5CB610
// entry 005cb610  size 177  status ok
//======================================================================

char __thiscall sub_5CB610(void *this)
{
  __int64 v3; // [esp+Ch] [ebp-8h] BYREF

  v3 = sub_64C8A0(0, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 180))(this) )
    return 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  sub_5D5DE0(&v3);
  if ( !(_DWORD)v3 )
    LODWORD(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 688))(dword_7947E4);
  LODWORD(v3) = -(int)v3;
  HIDWORD(v3) = -HIDWORD(v3);
  (*(void (__thiscall **)(void *, __int64 *, _DWORD, int))(*(_DWORD *)this + 196))(this, &v3, 0, 1);
  return 1;
}


//======================================================================
// sub_5CB6D0
// entry 005cb6d0  size 164  status ok
//======================================================================

int __thiscall sub_5CB6D0(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( (unsigned __int8)sub_64C760(a2, a3) && a2 )
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      100001,
      0,
      0,
      5,
      1,
      1.0,
      0.5,
      0);
  v5 = (int)this + 32 * a4 + 72;
  *(_DWORD *)(v5 + 8 * a5) = a2;
  *(_DWORD *)(v5 + 8 * a5 + 4) = a3;
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 192))(this, a4, a5);
}


//======================================================================
// sub_5CB780
// entry 005cb780  size 65  status ok
//======================================================================

int __thiscall sub_5CB780(void *this, int a2, int a3)
{
  __int64 v5; // [esp+4h] [ebp-8h]

  v5 = sub_64C8A0(0, 0);
  return (*(int (__thiscall **)(void *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 184))(
           this,
           v5,
           HIDWORD(v5),
           a2,
           a3);
}


//======================================================================
// sub_5CB7D0
// entry 005cb7d0  size 75  status ok
//======================================================================

bool __thiscall sub_5CB7D0(void *this, int a2, int a3)
{
  int v3; // edx

  v3 = (int)this + 32 * a2 + 72;
  return *(_DWORD *)(v3 + 8 * a3) || *(_DWORD *)(v3 + 8 * a3 + 4);
}


//======================================================================
// sub_5CB820
// entry 005cb820  size 83  status ok
//======================================================================

int __thiscall sub_5CB820(void *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( i = 0; i < 4; ++i )
  {
    if ( sub_5CB7D0(this, a2, i) )
      ++v5;
  }
  return v5;
}


//======================================================================
// sub_5CB880
// entry 005cb880  size 148  status ok
//======================================================================

__int64 *__thiscall sub_5CB880(void *this, __int64 *a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // edx
  char v10[8]; // [esp+4h] [ebp-24h] BYREF
  int v11; // [esp+Ch] [ebp-1Ch]
  int v12; // [esp+10h] [ebp-18h]
  __int64 v13; // [esp+14h] [ebp-14h]
  __int64 v14; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+24h] [ebp-4h]

  v13 = sub_64C8A0(0, 0);
  v14 = v13;
  for ( i = 0; i < 4; ++i )
  {
    v3 = (int)this + 32 * a3 + 72;
    v4 = *(_DWORD *)(v3 + 8 * i);
    v5 = *(_DWORD *)(v3 + 8 * i + 4);
    v11 = v4;
    v12 = v5;
    v6 = (_DWORD *)sub_64C5C0(v10, v4, v5);
    v7 = v6[1];
    LODWORD(v14) = *v6;
    HIDWORD(v14) = v7;
  }
  *a2 = v14;
  return a2;
}


//======================================================================
// sub_5CB920
// entry 005cb920  size 133  status ok
//======================================================================

bool __thiscall sub_5CB920(void *this)
{
  __int64 *v1; // eax
  __int64 *v2; // eax
  __int64 v6; // [esp+8h] [ebp-1Ch] BYREF
  __int64 v7; // [esp+10h] [ebp-14h] BYREF
  __int64 v8; // [esp+18h] [ebp-Ch] BYREF
  int i; // [esp+20h] [ebp-4h]

  sub_5CB880(this, &v8, 0);
  for ( i = 1; i < 5; ++i )
  {
    v1 = sub_5CB880(this, &v7, i);
    LODWORD(v8) = *(_DWORD *)v1 + v8;
    v2 = sub_5CB880(this, &v6, i);
    HIDWORD(v8) += *((_DWORD *)v2 + 1);
  }
  return (int)v8 > 0 || SHIDWORD(v8) > 0;
}


//======================================================================
// sub_5CB9B0
// entry 005cb9b0  size 89  status ok
//======================================================================

int __thiscall sub_5CB9B0(void *this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 188))(this, i, j);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5CBA10
// entry 005cba10  size 1980  status ok
//======================================================================

LONG __thiscall sub_5CBA10(_QWORD *this, _DWORD *a2, int a3, unsigned __int8 a4)
{
  LONG result; // eax
  int v5; // ecx
  const CHAR *v6; // eax
  const CHAR *v7; // eax
  const char *v8; // eax
  const CHAR *v9; // eax
  const CHAR *v10; // eax
  const CHAR *v11; // [esp-8h] [ebp-17Ch]
  const CHAR *v12; // [esp-8h] [ebp-17Ch]
  const CHAR *v13; // [esp-8h] [ebp-17Ch]
  bool v14; // [esp+0h] [ebp-174h]
  bool v19; // [esp+14h] [ebp-160h]
  unsigned __int8 v21; // [esp+1Fh] [ebp-155h]
  __int64 v22; // [esp+50h] [ebp-124h]
  LONG v23; // [esp+68h] [ebp-10Ch]
  __int64 v24; // [esp+70h] [ebp-104h]
  int v25; // [esp+78h] [ebp-FCh]
  __int64 v26; // [esp+7Ch] [ebp-F8h] BYREF
  LONG v27; // [esp+84h] [ebp-F0h]
  __int64 v28; // [esp+88h] [ebp-ECh] BYREF
  __int64 v29; // [esp+90h] [ebp-E4h] BYREF
  int v30; // [esp+98h] [ebp-DCh]
  int v31; // [esp+9Ch] [ebp-D8h] BYREF
  int v32; // [esp+A0h] [ebp-D4h]
  char Buffer[200]; // [esp+A4h] [ebp-D0h] BYREF
  int v34; // [esp+170h] [ebp-4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  v23 = result;
  if ( !result )
    return result;
  v25 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 688))(dword_7947E4);
  v34 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 692))(dword_7947E4);
  v30 = *(_DWORD *)(v23 + 4);
  v19 = *a2 >= 0;
  v26 = sub_64C8A0(0, 0);
  v28 = sub_64C8A0(0, 0);
  sub_5D5AC0(&v31);
  if ( *a2 || a2[1] )
  {
    v5 = a2[1];
    LODWORD(v29) = *a2;
    HIDWORD(v29) = v5;
  }
  else
  {
    sub_5D5DE0(&v29);
  }
  v24 = *(this + 4 * v30 + a3 + 9);
  if ( !v29 )
  {
    v22 = sub_64C8A0(v25, 0);
    sub_5D5E10(v22, HIDWORD(v22));
    if ( !v19 )
      v29 = sub_64C8A0(v25, 0);
  }
  result = v29 + v24;
  v27 = v29 + v24;
  if ( (a4 & v19) != 0 )
  {
    result = v27;
    if ( v27 < v25 && !HIDWORD(v29) && v31 >= v25 && (!(_DWORD)v29 || !v24) )
    {
      LODWORD(v29) = v25;
      result = sub_5D5E10(v25, HIDWORD(v29));
    }
  }
  if ( !v19 )
  {
    if ( !(_DWORD)v24 )
      return result;
    if ( (int)v29 + (int)v24 >= v25 )
    {
      LODWORD(v26) = v29 + v24;
      HIDWORD(v26) = HIDWORD(v29) + HIDWORD(v24);
      sub_64C540(&v26);
      if ( (int)v29 >= 0 )
      {
        v28 = v29;
      }
      else
      {
        LODWORD(v28) = -(int)v29;
        HIDWORD(v28) = -HIDWORD(v29);
      }
    }
    else
    {
      LODWORD(v26) = 0;
      v28 = v24;
    }
    goto LABEL_67;
  }
  if ( a4 )
  {
    if ( (_DWORD)v24 == v34 )
    {
      result = (LONG)CImageDisplay::GetDisplayFormat((CImageDisplay *)v23);
      if ( *(_DWORD *)result == 2
        || (result = CImageDisplay::GetDisplayFormat((CImageDisplay *)v23)->rcSource.left, result == 3) )
      {
        v11 = (const CHAR *)sub_630F40("SID_CASINO_MAXBET");
        v6 = (const CHAR *)sub_630F40("SID_CASINO_BETMAXIMUM");
        return sub_62FF10(v6, v11, 0);
      }
      return result;
    }
    if ( (int)v29 > v31 || (_DWORD)v29 == v31 && SHIDWORD(v29) > v32 )
    {
      result = (LONG)CImageDisplay::GetDisplayFormat((CImageDisplay *)v23);
      if ( *(_DWORD *)result == 2
        || (result = CImageDisplay::GetDisplayFormat((CImageDisplay *)v23)->rcSource.left, result == 3) )
      {
        v12 = (const CHAR *)sub_630F40("SID_CASINO_BANKEXCEEDED");
        v7 = (const CHAR *)sub_630F40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET");
        return sub_62FF10(v7, v12, 0);
      }
      return result;
    }
    if ( (int)v29 < v25 && !(_DWORD)v24 )
    {
      v8 = (const char *)sub_630F40("SID_CASINO_MINBETAMOUNT_FORMAT");
      sprintf(Buffer, v8, v25);
      result = (LONG)CImageDisplay::GetDisplayFormat((CImageDisplay *)v23);
      if ( *(_DWORD *)result == 2
        || (result = CImageDisplay::GetDisplayFormat((CImageDisplay *)v23)->rcSource.left, result == 3) )
      {
        v9 = (const CHAR *)sub_630F40("SID_CASINO_MINBET");
        return sub_62FF10(Buffer, v9, 0);
      }
      return result;
    }
    goto LABEL_56;
  }
  if ( (int)v29 <= v31 && ((_DWORD)v29 != v31 || SHIDWORD(v29) <= v32) )
  {
LABEL_56:
    if ( (int)v29 + (int)v24 > v34 && a4 )
    {
      LODWORD(v26) = v34;
    }
    else
    {
      LODWORD(v26) = v29 + v24;
      HIDWORD(v26) = HIDWORD(v29) + HIDWORD(v24);
      sub_64C540(&v26);
    }
    LODWORD(v28) = v24 - v26;
    HIDWORD(v28) = HIDWORD(v24) - HIDWORD(v26);
    sub_64C540(&v28);
LABEL_67:
    sub_5D5CF0(v28, HIDWORD(v28));
    (*(void (__thiscall **)(_QWORD *, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 184))(
      this,
      v26,
      HIDWORD(v26),
      v30,
      a3);
    v14 = CImageDisplay::GetDisplayFormat((CImageDisplay *)v23)->rcSource.left == 2
       || CImageDisplay::GetDisplayFormat((CImageDisplay *)v23)->rcSource.left == 3;
    result = v14;
    if ( v14 )
    {
      v21 = *(_BYTE *)(v23 + 1184);
      result = v21;
      if ( !v21 && ((int)v28 < 0 || v28 < 0) )
        return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 652))(dword_7947E4);
    }
    return result;
  }
  result = CImageDisplay::GetDisplayFormat((CImageDisplay *)v23)->rcSource.left;
  if ( result == 2 || (result = (LONG)CImageDisplay::GetDisplayFormat((CImageDisplay *)v23), *(_DWORD *)result == 3) )
  {
    v13 = (const CHAR *)sub_630F40("SID_CASINO_BANKEXCEEDED");
    v10 = (const CHAR *)sub_630F40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET");
    return sub_62FF10(v10, v13, 0);
  }
  return result;
}


//======================================================================
// sub_5CC1D0
// entry 005cc1d0  size 82  status ok
//======================================================================

_DWORD *__thiscall sub_5CC1D0(_DWORD *this)
{
  sub_5EAAF0(this);
  *this = &BetAreaDisplay::`vftable';
  memset(this + 95, 0, 0x960u);
  *(this + 94) = 0;
  *(this + 695) = 0;
  return this;
}


//======================================================================
// sub_5CC230
// entry 005cc230  size 144  status ok
//======================================================================

void __thiscall sub_5CC230(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&BetAreaDisplay::`vftable';
  sub_5CCD90(this);
  if ( *(this + 695) )
    (***(this + 695))(*(this + 695), 1);
  sub_5EAC00(this);
}


//======================================================================
// sub_5CC300
// entry 005cc300  size 89  status ok
//======================================================================

char __thiscall sub_5CC300(void **this, int a2)
{
  char result; // al

  sub_5F4F50(a2);
  result = sub_5F56A0(a2);
  if ( result )
  {
    result = sub_5CB5B0(*(this + 94));
    if ( result )
    {
      result = (*((int (__thiscall **)(void **, int))*this + 6))(this, a2);
      *(_BYTE *)(a2 + 4) = 1;
    }
  }
  return result;
}


//======================================================================
// sub_5CC360
// entry 005cc360  size 89  status ok
//======================================================================

char __thiscall sub_5CC360(void **this, int a2)
{
  char result; // al

  sub_5F4F50(a2);
  result = sub_5F56A0(a2);
  if ( result )
  {
    result = sub_5CB610(*(this + 94));
    if ( result )
    {
      result = (*((int (__thiscall **)(void **, int))*this + 6))(this, a2);
      *(_BYTE *)(a2 + 4) = 1;
    }
  }
  return result;
}


//======================================================================
// sub_5CC3E0
// entry 005cc3e0  size 81  status ok
//======================================================================

int sub_5CC3E0()
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
      sub_5CC440(i, j);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5CC440
// entry 005cc440  size 152  status ok
//======================================================================

int __thiscall sub_5CC440(_DWORD **this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 30; ++i )
  {
    if ( *(this + 120 * a2 + 30 * a3 + i + 95) )
      (*(void (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + i + 95) + 112))(*(this
                                                                                      + 120 * a2
                                                                                      + 30 * a3
                                                                                      + i
                                                                                      + 95));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5CC4E0
// entry 005cc4e0  size 89  status ok
//======================================================================

int __thiscall sub_5CC4E0(void *this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 184))(this, i, j);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5CC540
// entry 005cc540  size 1294  status ok
//======================================================================

char __thiscall sub_5CC540(_DWORD **this, int a2, int a3)
{
  char result; // al
  int v4; // esi
  int v5; // esi
  bool v6; // [esp+8h] [ebp-B4h]
  int v8; // [esp+10h] [ebp-ACh]
  _DWORD v9[7]; // [esp+14h] [ebp-A8h]
  int v10; // [esp+30h] [ebp-8Ch]
  int v11; // [esp+34h] [ebp-88h]
  BOOL v12; // [esp+38h] [ebp-84h]
  int v13; // [esp+3Ch] [ebp-80h]
  int v14; // [esp+40h] [ebp-7Ch]
  int v15; // [esp+44h] [ebp-78h]
  bool v16; // [esp+4Bh] [ebp-71h]
  int v17; // [esp+4Ch] [ebp-70h]
  int v18; // [esp+50h] [ebp-6Ch]
  _DWORD v19[19]; // [esp+54h] [ebp-68h]
  int v20; // [esp+A0h] [ebp-1Ch]
  char v21; // [esp+A7h] [ebp-15h]
  int v22; // [esp+A8h] [ebp-14h]
  int v23; // [esp+ACh] [ebp-10h]
  int i; // [esp+B0h] [ebp-Ch]
  int v25; // [esp+B4h] [ebp-8h] BYREF
  char v26; // [esp+B8h] [ebp-4h]

  v18 = 0;
  v19[0] = 100000000;
  v19[1] = &unk_989680;
  v19[2] = 1000000;
  v19[3] = 500000;
  v19[4] = 100000;
  v19[5] = 50000;
  v19[6] = 25000;
  v19[7] = 10000;
  v19[8] = 5000;
  v19[9] = 1000;
  v19[10] = 500;
  v19[11] = 100;
  v19[12] = 50;
  v19[13] = 25;
  v19[14] = 10;
  v19[15] = 5;
  v19[16] = 1;
  v19[17] = 0;
  ((void (__thiscall *)(_DWORD **, int *, int, int))(*this)[50])(this, &v25, a2, a3);
  v22 = v25;
  v21 = v26;
  v20 = 100000000;
  v17 = 0;
  v23 = 0;
  result = ((int (__thiscall *)(_DWORD **, int, int))(*this)[48])(this, a2, a3);
  if ( v22 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 708))(dword_7947E4, a2);
    if ( !result )
    {
      while ( v20 > 0 )
      {
        v17 = v22 / v20;
        v22 %= v20;
        for ( i = 0; i < v17; ++i )
        {
          result = ((int (__thiscall *)(_DWORD **, int, int, int, int))(*this)[47])(this, a2, a3, v23++, v18);
          if ( v23 == 30 )
            return result;
        }
        result = ++v18;
        v20 = v19[v18];
      }
      if ( v23 == 2 )
      {
        v4 = (*(int (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + 95) + 76))(*(this + 120 * a2 + 30 * a3 + 95));
        v6 = 0;
        if ( v4 == (*(int (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + 96) + 76))(*(this
                                                                                             + 120 * a2
                                                                                             + 30 * a3
                                                                                             + 96)) )
        {
          v5 = (*(int (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + 95) + 84))(*(this + 120 * a2
                                                                                                + 30 * a3
                                                                                                + 95));
          if ( v5 == (*(int (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + 96) + 84))(*(this
                                                                                               + 120 * a2
                                                                                               + 30 * a3
                                                                                               + 96)) )
            v6 = 1;
        }
        result = v6;
        v16 = v6;
        if ( v6 )
        {
          v13 = (*(int (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + 95) + 76))(*(this
                                                                                          + 120 * a2
                                                                                          + 30 * a3
                                                                                          + 95));
          v14 = (*(int (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + 95) + 84))(*(this
                                                                                          + 120 * a2
                                                                                          + 30 * a3
                                                                                          + 95));
          v8 = 0;
          v9[0] = -4;
          v9[1] = 0;
          v9[2] = 4;
          v9[3] = -4;
          v9[4] = 0;
          v9[5] = 4;
          v9[6] = 0;
          v11 = sub_62FC30(0, 3);
          v10 = v9[2 * v11 - 1];
          v15 = v9[2 * v11];
          v12 = sub_62FBF0(2) != 0;
          (*(void (__thiscall **)(_DWORD, int))(**(this + 120 * a2 + 30 * a3 + v12 + 95) + 72))(
            *(this + 120 * a2 + 30 * a3 + v12 + 95),
            v10 + v13);
          return (*(int (__thiscall **)(_DWORD, int))(**(this + 120 * a2 + 30 * a3 + v12 + 95) + 80))(
                   *(this + 120 * a2 + 30 * a3 + v12 + 95),
                   v15 + v14);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5CCA50
// entry 005cca50  size 529  status ok
//======================================================================

int __thiscall sub_5CCA50(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp-4h] [ebp-28h]
  int v11; // [esp+0h] [ebp-24h]
  int v12; // [esp+0h] [ebp-24h]
  int v13; // [esp+8h] [ebp-1Ch]
  void *v15; // [esp+10h] [ebp-14h]

  v15 = operator new(0x190u);
  if ( v15 )
    v13 = sub_5F5F50(v15);
  else
    v13 = 0;
  *(this + 120 * a2 + 30 * a3 + a4 + 95) = v13;
  v10 = a4 + (*(int (__thiscall **)(_DWORD *, int))(*this + 208))(this, -1);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 216))(this);
  v6 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 224))(this, a2, a3);
  v7 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*this + 212))(this, a2, a3, a4 * v6 + v5);
  v8 = (*(int (__thiscall **)(_DWORD *, int))(*this + 204))(this, v7);
  sub_5EAE80(v8, a2, a3, v10, v11);
  v12 = sub_62FBF0(3) + 3 * (16 - a5);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 176))(
    *(this + 120 * a2 + 30 * a3 + a4 + 95),
    v12);
  sub_5EB700(1);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120 * a2 + 30 * a3 + a4 + 95) + 116))(*(this + 120 * a2 + 30 * a3 + a4 + 95));
}


//======================================================================
// sub_5CCC70
// entry 005ccc70  size 274  status ok
//======================================================================

void __thiscall sub_5CCC70(_DWORD **this, int a2, int a3)
{
  void (__thiscall ***v4)(_DWORD, int); // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  for ( i = 0; i < 30; ++i )
  {
    if ( *(this + 120 * a2 + 30 * a3 + i + 95) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + 120 * a2 + 30 * a3 + i + 95) + 112))(*(this
                                                                                      + 120 * a2
                                                                                      + 30 * a3
                                                                                      + i
                                                                                      + 95));
      if ( *(this + 120 * a2 + 30 * a3 + i + 95) )
      {
        v4 = (void (__thiscall ***)(_DWORD, int))*(this + 120 * a2 + 30 * a3 + i + 95);
        (**v4)(v4, 1);
      }
      *(this + 120 * a2 + 30 * a3 + i + 95) = 0;
    }
  }
}


//======================================================================
// sub_5CCD90
// entry 005ccd90  size 89  status ok
//======================================================================

int __thiscall sub_5CCD90(void *this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 192))(this, i, j);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5CCDF0
// entry 005ccdf0  size 95  status ok
//======================================================================

int __thiscall sub_5CCDF0(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = -1;
  for ( i = 0; i < 30 && *(this + 120 * a2 + 30 * a3 + i + 95); ++i )
    v4 = i;
  return v4;
}


//======================================================================
// sub_5CCE50
// entry 005cce50  size 104  status ok
//======================================================================

int __thiscall sub_5CCE50(void *this, int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *, int, int *, int *))(*(_DWORD *)this + 236))(this, a2, &v5, &v4) )
    {
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 240))(this, v5, v4);
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      return sub_5CD330(this, this);
    }
  }
  return result;
}


//======================================================================
// sub_5CCEC0
// entry 005ccec0  size 261  status ok
//======================================================================

char __thiscall sub_5CCEC0(_DWORD *this, int a2, int *a3, int *a4)
{
  int j; // [esp+8h] [ebp-Ch]
  int k; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      for ( k = 0; k < 30; ++k )
      {
        if ( *(this + 120 * i + 30 * j + k + 95)
          && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 120 * i + 30 * j + k + 95) + 132))(
               *(this + 120 * i + 30 * j + k + 95),
               a2) )
        {
          *a3 = i;
          *a4 = j;
          return 1;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_5CCFD0
// entry 005ccfd0  size 863  status ok
//======================================================================

int __thiscall sub_5CCFD0(_DWORD **this, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int result; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+4h] [ebp-158h]
  __int64 v11; // [esp+10h] [ebp-14Ch]
  void *v12; // [esp+18h] [ebp-144h]
  char Destination[28]; // [esp+24h] [ebp-138h] BYREF
  int v14; // [esp+40h] [ebp-11Ch]
  int v15; // [esp+44h] [ebp-118h]
  char Buffer[260]; // [esp+48h] [ebp-114h] BYREF
  int v17; // [esp+158h] [ebp-4h]

  v3 = (int)&(*(this + 94))[8 * a2 + 18];
  v4 = *(_DWORD *)(v3 + 8 * a3);
  v5 = *(_DWORD *)(v3 + 8 * a3 + 4);
  v14 = v4;
  v15 = v5;
  if ( *(this + 695) )
    (*(void (__thiscall **)(_DWORD))(**(this + 695) + 112))(*(this + 695));
  result = sub_5DE860(dword_7947E0);
  if ( (_BYTE)result && (v14 || v15) )
  {
    if ( !*(this + 695) )
    {
      v12 = operator new(0x1D4u);
      v17 = 0;
      if ( v12 )
        v9 = sub_5CD360(v12);
      else
        v9 = 0;
      v17 = -1;
      *(this + 695) = (_DWORD *)v9;
      sub_5EC8F0(&Source, 4, 65, 15, 0, 0, 3000, 48, -1);
      sub_5EE8C0(255, 255, 204);
    }
    if ( !dword_7947E4
      || !(*(unsigned __int8 (__thiscall **)(int, _DWORD **, int, int, _DWORD, int, int, _DWORD **))(*(_DWORD *)dword_7947E4 + 644))(
            dword_7947E4,
            this,
            a2,
            a3,
            *(this + 695),
            v14,
            v15,
            this + 95) )
    {
      if ( v14 < 1000000 )
        sub_5ECC60(65);
      else
        sub_5ECC60(85);
      v11 = sub_64C8A0(v14, v15);
      sub_64C8D0(v11, SHIDWORD(v11), Destination, 1, 1, 0);
      sprintf(Buffer, "%s", Destination);
      (*(void (__thiscall **)(_DWORD, char *))(**(this + 695) + 180))(*(this + 695), Buffer);
    }
    v7 = ((int (__thiscall *)(_DWORD **, int, int))(*this)[58])(this, a2, a3);
    v8 = ((int (__thiscall *)(_DWORD **, int, int, int))(*this)[57])(this, a2, a3, v7);
    (*(void (__thiscall **)(_DWORD, int))(**(this + 695) + 68))(*(this + 695), v8);
    (*(void (__thiscall **)(_DWORD))(**(this + 695) + 116))(*(this + 695));
    return (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)dword_7947E4 + 640))(dword_7947E4, this);
  }
  return result;
}


//======================================================================
// sub_5CD330
// entry 005cd330  size 48  status ok
//======================================================================

int __thiscall sub_5CD330(_DWORD **this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 695) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 695) + 112))(*(this + 695));
  return result;
}


//======================================================================
// sub_5CD360
// entry 005cd360  size 44  status ok
//======================================================================

_DWORD *__thiscall sub_5CD360(_DWORD *this)
{
  sub_5EC5A0(this);
  *this = &BetTag::`vftable';
  *(this + 116) = 0;
  return this;
}


//======================================================================
// sub_5CD390
// entry 005cd390  size 136  status ok
//======================================================================

void __thiscall sub_5CD390(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&BetTag::`vftable';
  if ( *(this + 116) )
    (***(this + 116))(*(this + 116), 1);
  sub_5EC760(this);
}


//======================================================================
// sub_5CD420
// entry 005cd420  size 327  status ok
//======================================================================

int __thiscall sub_5CD420(int this)
{
  int v1; // eax
  int result; // eax
  int v3; // [esp-14h] [ebp-38h]
  int v4; // [esp-10h] [ebp-34h]
  int v5; // [esp-Ch] [ebp-30h]
  int v6; // [esp-8h] [ebp-2Ch]
  int v7; // [esp+4h] [ebp-20h]
  void *v9; // [esp+Ch] [ebp-18h]

  sub_5F6270(this);
  if ( !*(_DWORD *)(this + 464) )
  {
    v9 = operator new(0x5Cu);
    if ( v9 )
      v7 = sub_5F6130(v9);
    else
      v7 = 0;
    *(_DWORD *)(this + 464) = v7;
  }
  v6 = CMediaType::IsFixedSize((CMediaType *)this) - 2;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 2;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this) + 2;
  v3 = sub_5F5590(this);
  v1 = sub_5F5550(this);
  sub_5F61D0(v1, v3, v4, v5, v6, -1);
  sub_5F6580(1, 1, 1);
  result = sub_5F6490(0, 0, 0);
  if ( *(unsigned __int8 *)(this + 156) == 255 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 464) + 116))(*(_DWORD *)(this + 464));
  return result;
}


//======================================================================
// sub_5CD570
// entry 005cd570  size 82  status ok
//======================================================================

int __thiscall sub_5CD570(_DWORD **this)
{
  int result; // eax

  sub_5CD620(255);
  sub_5F62B0(this);
  result = (int)this;
  if ( *(this + 116) )
  {
    sub_5CD620(255);
    return (*(int (__thiscall **)(_DWORD))(**(this + 116) + 112))(*(this + 116));
  }
  return result;
}


//======================================================================
// sub_5CD5D0
// entry 005cd5d0  size 80  status ok
//======================================================================

int __thiscall sub_5CD5D0(_DWORD **this, int a2, int a3)
{
  int result; // eax

  result = sub_5F6210(a2, a3);
  if ( *(this + 116) )
    return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 116) + 68))(*(this + 116), a2 + 2, a3 + 2);
  return result;
}


//======================================================================
// sub_5CD620
// entry 005cd620  size 115  status ok
//======================================================================

int __thiscall sub_5CD620(_DWORD **this, unsigned __int8 a2)
{
  int result; // eax

  result = sub_5F0AE0(a2);
  if ( *(this + 116) )
  {
    result = sub_5F54A0(this);
    if ( (_BYTE)result )
    {
      if ( a2 == 255 )
        return (*(int (__thiscall **)(_DWORD))(**(this + 116) + 116))(*(this + 116));
      else
        return (*(int (__thiscall **)(_DWORD))(**(this + 116) + 112))(*(this + 116));
    }
  }
  return result;
}


//======================================================================
// sub_5CD6A0
// entry 005cd6a0  size 54  status ok
//======================================================================

_DWORD *__thiscall sub_5CD6A0(_DWORD *this)
{
  sub_5F5F50(this);
  *this = &CasinoDealer::`vftable';
  *(this + 101) = 0;
  *((_BYTE *)this + 400) = 0;
  return this;
}


//======================================================================
// sub_5CD700
// entry 005cd700  size 177  status ok
//======================================================================

int __thiscall sub_5CD700(void *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = a3 + a2;
  if ( a3 + a2 != 53022 )
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 192))(this);
    if ( (_BYTE)result )
    {
      result = (unsigned __int8)sub_5CD830(a2);
      if ( (_BYTE)result )
        return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int, int, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
                 dword_162EE84,
                 a3 + a2,
                 a4,
                 1,
                 10,
                 1,
                 1.0,
                 0.5,
                 (int)this + 404);
    }
  }
  if ( a4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 28))(a4, a5);
  return result;
}


//======================================================================
// sub_5CD7C0
// entry 005cd7c0  size 55  status ok
//======================================================================

int __thiscall sub_5CD7C0(void *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax

  v4 = sub_5CD950(a2);
  v5 = sub_62FBF0(v4);
  return sub_5CD700(this, a2, v5, a3, a4);
}


//======================================================================
// sub_5CD830
// entry 005cd830  size 34  status ok
//======================================================================

bool __stdcall sub_5CD830(int a1)
{
  return sub_5CD950(a1) > 0;
}


//======================================================================
// sub_5CD890
// entry 005cd890  size 32  status ok
//======================================================================

int __thiscall sub_5CD890(_DWORD *this)
{
  return sub_5F45A0(*(this + 101));
}


//======================================================================
// sub_5CD8B0
// entry 005cd8b0  size 145  status ok
//======================================================================

bool __thiscall sub_5CD8B0(_BYTE *this)
{
  int v2; // esi

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 660))(dword_7947E4) )
    return 0;
  if ( *(this + 400) )
  {
    *(this + 400) = 0;
    return 1;
  }
  else if ( sub_6377B0(dword_162EE84) )
  {
    if ( sub_6377B0(dword_162EE84) == 10 )
    {
      return 1;
    }
    else
    {
      v2 = sub_62FBF0(10);
      return v2 <= sub_6377B0(dword_162EE84);
    }
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_5CD950
// entry 005cd950  size 73  status ok
//======================================================================

int __stdcall sub_5CD950(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 216; ++i )
  {
    if ( dword_75E180[2 * i] == a1 )
      return dword_75E184[2 * i];
  }
  return 0;
}


//======================================================================
// sub_5CD9A0
// entry 005cd9a0  size 45  status ok
//======================================================================

int __thiscall sub_5CD9A0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    return sub_5F4510(*(this + 101), 1);
  return result;
}


//======================================================================
// sub_5CDA00
// entry 005cda00  size 16  status ok
//======================================================================

int sub_5CDA00()
{
  return 5009;
}


//======================================================================
// sub_5CDA10
// entry 005cda10  size 37  status ok
//======================================================================

int __thiscall sub_5CDA10(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 212))(this, a2, a3);
}


//======================================================================
// sub_5CDA40
// entry 005cda40  size 37  status ok
//======================================================================

int __thiscall sub_5CDA40(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 216))(this, a2, a3);
}


//======================================================================
// sub_5CDAD0
// entry 005cdad0  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_5CDAD0(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &FinishedBettingDialog::`vftable';
  return this;
}


//======================================================================
// sub_5CDB20
// entry 005cdb20  size 125  status ok
//======================================================================

int __thiscall sub_5CDB20(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax

  sub_5F83D0(1065, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 16);
  v1 = sub_630F40("SID_CASINO_BETTING");
  sub_5FA5B0(0, -1, v1, 31, 53, 17, 43, 1, 1, 5, -1);
  v2 = sub_630F40("SID_SHELL_DONE");
  return sub_5F9DE0(0, 0, 3200229, 28, 25, 1, v2, 72, 75, 74, -1, 13);
}


//======================================================================
// sub_5CDBA0
// entry 005cdba0  size 34  status ok
//======================================================================

int __thiscall sub_5CDBA0(void *this, int a2)
{
  return (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_7947E4 + 624))(dword_7947E4, this);
}


//======================================================================
// sub_5CDBD0
// entry 005cdbd0  size 35  status ok
//======================================================================

_DWORD *__thiscall sub_5CDBD0(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &FinishedViewingResultsDialog::`vftable';
  return this;
}


//======================================================================
// sub_5CDC20
// entry 005cdc20  size 174  status ok
//======================================================================

int __thiscall sub_5CDC20(CMFCTabCtrl *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  sub_5F83D0(1045, 0);
  CMFCTabCtrl::HideInactiveWindow(this, 16);
  v1 = sub_630F40("SID_CASINO_REVIEWING");
  sub_5FA5B0(0, -1, v1, 31, 73, 17, 34, 1, 1, 5, -1);
  v2 = sub_630F40("SID_GENERIC_CONTINUE");
  sub_5F9DE0(0, 0, 3200230, 4, 25, 1, v2, 72, 75, 74, -1, 13);
  v3 = sub_630F40("SID_GENERIC_DONTASKAGAIN");
  return sub_5F9EF0(0, 1, 3200201, 5, 55, 1, v3, 31, 69, 66, -1, 20, 0);
}


//======================================================================
// sub_5CDCD0
// entry 005cdcd0  size 58  status ok
//======================================================================

void __stdcall sub_5CDCD0(int a1)
{
  int v1; // eax
  int v2; // eax

  if ( !a1 )
  {
    v1 = sub_5FB350(1);
    v2 = sub_600230(v1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 628))(dword_7947E4, v2);
  }
}


//======================================================================
// sub_5CDD10
// entry 005cdd10  size 70  status ok
//======================================================================

int __thiscall sub_5CDD10(void *this, char a2)
{
  int v4; // [esp+4h] [ebp-4h]

  v4 = sub_5FB350(1);
  if ( a2 )
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)v4 + 244))(v4, this);
  else
    return (*(int (__thiscall **)(int, void *))(*(_DWORD *)v4 + 248))(v4, this);
}


//======================================================================
// sub_5CDD60
// entry 005cdd60  size 34  status ok
//======================================================================

int sub_5CDD60()
{
  int v1; // [esp+4h] [ebp-4h]

  v1 = sub_5FB350(1);
  return sub_600230(v1);
}


//======================================================================
// sub_5CDD90
// entry 005cdd90  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_5CDD90(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &GamblerStatsDialog::`vftable';
  sub_5F83D0(1057, 0);
  return this;
}


//======================================================================
// sub_5CDE20
// entry 005cde20  size 1048  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_5CDE20(CMFCTabCtrl *this, CImageDisplay *a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // eax
  int *v5; // eax
  int v6; // eax
  int v7; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const struct tagVIDEOINFO *result; // eax
  int v10; // eax
  int v11; // [esp-10h] [ebp-FCh]
  _BYTE v13[8]; // [esp+18h] [ebp-D4h] BYREF
  int v14; // [esp+20h] [ebp-CCh]
  int v15; // [esp+24h] [ebp-C8h]
  int v16; // [esp+28h] [ebp-C4h]
  int v17; // [esp+2Ch] [ebp-C0h] BYREF
  int v18; // [esp+30h] [ebp-BCh]
  char Destination[152]; // [esp+34h] [ebp-B8h] BYREF
  int v20; // [esp+D0h] [ebp-1Ch]
  int v21; // [esp+D4h] [ebp-18h]
  _DWORD v22[4]; // [esp+D8h] [ebp-14h]
  int i; // [esp+E8h] [ebp-4h]

  v22[0] = "SID_CASINO_BANK_COLON";
  v22[1] = "SID_CASINO_TOTALBET_COLON";
  v22[2] = "SID_GENERIC_EMPTY";
  v22[3] = "SID_CASINO_SESSIONNET_COLON";
  v17 = 0;
  v18 = 0;
  v2 = *((_DWORD *)a2 + 308);
  v15 = *((_DWORD *)a2 + 307);
  v16 = v2;
  v3 = *((_DWORD *)a2 + 306);
  v20 = *((_DWORD *)a2 + 305);
  v21 = v3;
  CMFCTabCtrl::HideInactiveWindow(this, 0);
  if ( v15 < 0 )
    v15 = -v15;
  if ( v16 < 0 )
    v16 = -v16;
  if ( v20 < 0 )
    v20 = -v20;
  if ( v21 < 0 )
    v21 = -v21;
  (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)dword_7947E4 + 636))(dword_7947E4, *((_DWORD *)a2 + 1), &v17);
  for ( i = 0; i < 4; ++i )
  {
    v11 = 13 * i + 29;
    v4 = sub_630F40(v22[i]);
    v14 = sub_5FA5B0(0, i, v4, 35, 60, 14, 5, v11, 1, 6, -1);
    switch ( i )
    {
      case 0:
        v5 = (int *)sub_5D5A90(v13);
        sub_64C8D0(*v5, v5[1], Destination, 1, 1, 1);
        break;
      case 1:
        if ( (unsigned __int8)sub_5DA7B0(dword_7947E4)
          && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_7947E4 + 708))(
               dword_7947E4,
               *((_DWORD *)a2 + 1)) )
        {
          strcpy(Destination, &Source);
        }
        else
        {
          sub_64C8D0(v17, v18, Destination, 1, 1, 1);
        }
        break;
      case 2:
        if ( *((_DWORD *)a2 + 307) || *((_DWORD *)a2 + 308) )
        {
          if ( (unsigned __int8)sub_5D58D0(a2) )
            v7 = sub_630F40("SID_CASINO_JUSTLOST_COLON");
          else
            v7 = sub_630F40("SID_CASINO_JUSTWON_COLON");
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 180))(v14, v7);
        }
        else
        {
          v6 = sub_630F40("SID_CASINO_LASTNET_COLON");
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 180))(v14, v6);
        }
        sub_64C8D0(v15, v16, Destination, 1, 1, 0);
        break;
      case 3:
        sub_64C8D0(*((_DWORD *)a2 + 305), *((_DWORD *)a2 + 306), Destination, 1, 1, 1);
        break;
      default:
        break;
    }
    sub_5FA5B0(0, i + 4, Destination, 35, 105, 15, 70, 13 * i + 29, 1, 5, -1);
  }
  v14 = sub_5FA5B0(0, 8, &Source, 31, 140, 15, 5, 6, 1, 17, -1);
  DisplayFormat = CImageDisplay::GetDisplayFormat(a2);
  sub_5EE710((char *)&DisplayFormat->rcSource.top);
  result = CImageDisplay::GetDisplayFormat(a2);
  if ( result->rcSource.left == 2
    || (result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(a2)->rcSource.left,
        result == (const struct tagVIDEOINFO *)3) )
  {
    v10 = sub_5D52E0(a2);
    return (const struct tagVIDEOINFO *)sub_5F9CE0(0, 0, 1053, 146, 8, 1, *(char *)(v10 + 42), 255, 0);
  }
  return result;
}


//======================================================================
// sub_5CE250
// entry 005ce250  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_5CE250(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &OutOfMoneyDialog::`vftable';
  sub_5F83D0(3200263, 0);
  return this;
}


//======================================================================
// sub_5CE2E0
// entry 005ce2e0  size 599  status ok
//======================================================================

int __thiscall sub_5CE2E0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // eax
  bool v11; // [esp+17h] [ebp-5h]

  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84) )
  {
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
    v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 40))(v2, v2) == 1;
  }
  else
  {
    v11 = 0;
  }
  v3 = sub_630F40("SID_CASINO_CANTCOVERMINIMUM");
  sub_5FA5B0(0, -1, v3, 73, 322, 25, 3, 3, 1, 18, -1);
  *(this + 111) = a2;
  sub_5FA880(0, 0, 329, 1, 3, 148, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 0, 329, 1, 4, 149, 1, 255, 255, 255, 0, 0, 0);
  v4 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200222, 122, 155, 1, v4, 72, 75, 74, -1, 13);
  if ( (unsigned __int8)sub_5D6CD0(*(this + 111)) )
  {
    v5 = sub_630F40("SID_CASINO_TAKELOAN");
    sub_5F9FF0(0, 0, 1, 0, 3200202, 23, 54, 1, v5, 31, 69, 66, -1, 20, 0);
  }
  v6 = sub_630F40("SID_CASINO_RESETCHARACTER");
  sub_5F9FF0(0, 0, 2, 0, 3200202, 23, 79, 1, v6, 31, 69, 66, -1, 20, 0);
  if ( v11 )
  {
    v7 = sub_630F40("SID_CASINO_GOTOCASINOFLOOR");
    sub_5F9FF0(0, 0, 4, 0, 3200202, 23, 104, 1, v7, 31, 69, 66, -1, 20, 0);
    return sub_6065D0(4);
  }
  else
  {
    v9 = sub_630F40("SID_CASINO_SITOUT");
    sub_5F9FF0(0, 0, 3, 0, 3200202, 23, 104, 1, v9, 31, 69, 66, -1, 20, 0);
    return sub_6065D0(3);
  }
}


//======================================================================
// sub_5CE540
// entry 005ce540  size 250  status ok
//======================================================================

void __thiscall sub_5CE540(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  char v5; // [esp+13h] [ebp-1h]

  v5 = 0;
  if ( !a2 )
  {
    v2 = sub_5FB3A0(0);
    switch ( sub_606570(v2) )
    {
      case 1:
        sub_5D6DE0(*(this + 111));
        break;
      case 2:
        sub_5D70E0(0, 5000);
        break;
      case 3:
        *(_BYTE *)(*(this + 111) + 1185) = 1;
        break;
      case 4:
        *(_BYTE *)(*(this + 111) + 1185) = 1;
        v5 = 1;
        break;
      default:
        break;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 632))(dword_7947E4);
    sub_5DBCD0(dword_7947E4);
  }
  if ( v5 )
  {
    v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 600))(
           dword_162EE84,
           -1);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 820))(
      dword_162EE84,
      v3);
  }
}


//======================================================================
// sub_5CE650
// entry 005ce650  size 120  status ok
//======================================================================

_DWORD *__thiscall sub_5CE650(_DWORD *this, int a2, int a3)
{
  sub_5F71F0(1, 0);
  *this = &TournamentDialog::`vftable';
  sub_5F83D0(3200242, 0);
  *(this + 111) = a2;
  return this;
}


//======================================================================
// sub_5CE6F0
// entry 005ce6f0  size 650  status ok
//======================================================================

int __thiscall sub_5CE6F0(_DWORD *this)
{
  int v1; // eax
  const char *v2; // eax
  int v3; // eax
  int v4; // eax
  const char *v5; // eax
  int v6; // eax
  int result; // eax
  char v9[8]; // [esp+8h] [ebp-80h] BYREF
  int v10; // [esp+10h] [ebp-78h]
  int v11; // [esp+14h] [ebp-74h]
  char Destination[104]; // [esp+18h] [ebp-70h] BYREF
  int i; // [esp+84h] [ebp-4h]

  v1 = sub_6375B0(dword_162EE84);
  v11 = *(_DWORD *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_7947E4 + 680))(dword_7947E4, v9, v1);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, char *))(*(_DWORD *)dword_162EE84 + 824))(
    dword_162EE84,
    *(this + 111),
    Destination);
  v2 = (const char *)sub_630F40("SID_CASINO_SPACE_TOURNAMENT");
  strcat(Destination, v2);
  sub_5F73E0(Destination, 73, 0, 3);
  v3 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200222, 80, 225, 1, v3, 72, 75, 74, -1, 13);
  v4 = sub_630F40("SID_GENERIC_CANCEL");
  sub_5F9DE0(0, 1, 3200222, 170, 225, 1, v4, 72, 75, 74, -1, 27);
  sub_5FA880(0, 0, 329, 1, 3, 218, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 0, 329, 1, 4, 219, 1, 255, 255, 255, 0, 0, 0);
  for ( i = 0; i < 5; ++i )
  {
    v5 = (const char *)sub_630F80("SID_TOURNAMENT_GENERIC", i);
    sprintf(Destination, v5);
    sub_5F9FF0(0, 0, i + 2, 0, 3200202, 80, 25 * i + 36, 1, Destination, 31, 69, 66, -1, 20, 0);
    sub_5FB3A0(0);
    sub_6065D0(2);
    if ( v11 < dword_75D33C[i] )
    {
      v6 = sub_5FB3F0(i + 2, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 208))(v6, v6);
    }
  }
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             *(this + 111));
  v10 = result;
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 164))(v10, this);
  return result;
}


//======================================================================
// sub_5CE980
// entry 005ce980  size 221  status ok
//======================================================================

int __thiscall sub_5CE980(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 224))(dword_7947E0, a2);
  *(_DWORD *)(dword_7947E0 + 20208) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 156))(v2, v2);
  if ( !*(_DWORD *)(dword_7947E0 + 20208) )
    sub_5E9F20((char)"epoCasinoShell->tournamentLength", "..\\Casino\\casinodialogs.cpp", 387);
  v3 = sub_5FB3A0(0);
  *(_DWORD *)(dword_7947E0 + 20204) = dword_75D33C[sub_606490(v3)];
  *(_DWORD *)(dword_7947E0 + 20216) = 1;
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             *(this + 111));
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)result + 168))(result, this);
  return result;
}


//======================================================================
// sub_5CEA60
// entry 005cea60  size 243  status ok
//======================================================================

int __thiscall sub_5CEA60(int *this, int a2)
{
  int result; // eax
  const CHAR *v3; // eax
  const CHAR *v4; // [esp-8h] [ebp-10h]

  result = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    return sub_5DBE20(dword_7947E4);
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 360))(dword_162EE80) )
    return sub_5DBE20(dword_7947E4);
  sub_5CE980(this, *(this + 111));
  sub_5DBE20(dword_7947E4);
  *(_BYTE *)(dword_7947E0 + 20201) = 1;
  *(_BYTE *)(dword_7947E0 + 20202) = 0;
  v4 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTOPPONENTS_TITLE");
  v3 = (const CHAR *)sub_630F40("SID_CASINO_TOURNAMENTOPPONENTS_MESSAGE");
  if ( sub_62FF10(v3, v4, 4u) == 6 )
    *(_BYTE *)(dword_7947E0 + 20202) = 1;
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, int))(*(_DWORD *)dword_162EE84 + 820))(
           dword_162EE84,
           *(this + 111),
           -1);
}


//======================================================================
// sub_5CEB60
// entry 005ceb60  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_5CEB60(_DWORD *this)
{
  sub_5F71F0(0, 0);
  *this = &TournamentStatusDialog::`vftable';
  sub_5F83D0(1252, 0);
  return this;
}


//======================================================================
// sub_5CEBF0
// entry 005cebf0  size 80  status ok
//======================================================================

int __thiscall sub_5CEBF0(void *this)
{
  int v1; // eax

  v1 = sub_630F40("SID_CASINO_TOURNAMENT");
  sub_5F73E0(v1, 73, 0, 3);
  sub_5FA5B0(0, 0, &Source, 73, 60, 23, 115, 7, 1, 6, -1);
  return sub_5CEC40(this);
}


//======================================================================
// sub_5CEC40
// entry 005cec40  size 88  status ok
//======================================================================

int sub_5CEC40()
{
  char Buffer[52]; // [esp+4h] [ebp-38h] BYREF

  sprintf(Buffer, "%d/%d", *(_DWORD *)(dword_7947E0 + 20216), *(_DWORD *)(dword_7947E0 + 20208));
  return sub_5CECA0(Buffer);
}


//======================================================================
// sub_5CECA0
// entry 005ceca0  size 27  status ok
//======================================================================

int __stdcall sub_5CECA0(int a1)
{
  return sub_5FB5A0(0, a1);
}


//======================================================================
// sub_5CECC0
// entry 005cecc0  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_5CECC0(_BYTE *this)
{
  sub_5F71F0(1, 0);
  *(_DWORD *)this = &TournamentWinnerDialog::`vftable';
  sub_5F83D0(1255, 0);
  *(this + 444) = 0;
  return this;
}


//======================================================================
// sub_5CED60
// entry 005ced60  size 178  status ok
//======================================================================

int __thiscall sub_5CED60(_BYTE *this, int a2)
{
  int result; // eax
  int v3; // eax

  result = (unsigned __int8)sub_5F88F0(this);
  if ( !(_BYTE)result && !*(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)(a2 + 24) == 4 && *(_BYTE *)(a2 + 20) == 27 )
      *(this + 444) = 1;
    if ( *(_DWORD *)(a2 + 24) == 2 )
      *(this + 444) = 1;
    result = (int)this;
    if ( *(this + 444) )
    {
      *(_BYTE *)(a2 + 4) = 1;
      sub_5DC0A0(dword_7947E4);
      sub_5DBF30(dword_7947E4);
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
               dword_162EE84,
               v3);
    }
  }
  return result;
}


//======================================================================
// sub_5CEE20
// entry 005cee20  size 313  status ok
//======================================================================

int __thiscall sub_5CEE20(_DWORD **this, int a2, int a3, int a4)
{
  const char *v4; // eax
  int result; // eax
  char Buffer[104]; // [esp+18h] [ebp-A8h] BYREF
  __int64 v8; // [esp+80h] [ebp-40h]
  char Destination[52]; // [esp+88h] [ebp-38h] BYREF

  v8 = sub_64C8A0(a3, 0);
  sub_5FA5B0(0, 0, a2, 60, 402, 35, 0, 157, 1, 48, -1);
  sub_64C8D0(v8, SHIDWORD(v8), Destination, 0, 1, 0);
  v4 = (const char *)sub_630F40("SID_CASINO_WON_FORMAT");
  sprintf(Buffer, v4, Destination);
  result = sub_5FA5B0(0, 1, Buffer, 60, 402, 35, 0, 197, 2, 36, -1);
  if ( *(this + 95) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 95) + 176))(*(this + 95), a4);
  return result;
}


//======================================================================
// sub_5CEF60
// entry 005cef60  size 67  status ok
//======================================================================

_BYTE *__thiscall sub_5CEF60(_BYTE *this)
{
  _BYTE *result; // eax

  sub_5F85D0(this);
  while ( 1 )
  {
    result = this;
    if ( *(this + 444) )
      break;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8);
    sub_613E70(*(_DWORD *)(dword_7960D8 + 16));
  }
  return result;
}


//======================================================================
// sub_5CEFB0
// entry 005cefb0  size 129  status ok
//======================================================================

_BYTE *__thiscall sub_5CEFB0(_BYTE *this)
{
  sub_5F71F0(1, 0);
  *(_DWORD *)this = &HallOfFameDialog::`vftable';
  sub_5F83D0(1254, 0);
  *(this + 444) = 0;
  *((_DWORD *)this + 112) = 0;
  return this;
}


//======================================================================
// sub_5CF060
// entry 005cf060  size 146  status ok
//======================================================================

int __thiscall sub_5CF060(int this, int a2)
{
  int result; // eax

  result = (unsigned __int8)sub_5F88F0(this);
  if ( !(_BYTE)result && !*(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)(a2 + 24) == 4 && *(_BYTE *)(a2 + 20) == 27 )
      *(_BYTE *)(this + 444) = 1;
    if ( *(_DWORD *)(a2 + 24) == 1 )
      *(_BYTE *)(this + 444) = 1;
    result = this;
    if ( *(_BYTE *)(this + 444) )
    {
      sub_5F4510(*(_DWORD *)(this + 448), 1);
      *(_BYTE *)(a2 + 4) = 1;
      return sub_5DC190(dword_7947E4);
    }
  }
  return result;
}


//======================================================================
// sub_5CF100
// entry 005cf100  size 724  status ok
//======================================================================

__int16 sub_5CF100()
{
  FILE *v0; // eax
  __int16 j; // [esp+4h] [ebp-944h]
  _WORD Buffer[502]; // [esp+8h] [ebp-940h] BYREF
  _WORD v4[6]; // [esp+3F4h] [ebp-554h]
  char Str[292]; // [esp+400h] [ebp-548h] BYREF
  int v6; // [esp+524h] [ebp-424h]
  int v7; // [esp+528h] [ebp-420h]
  _WORD v8[4]; // [esp+52Ch] [ebp-41Ch]
  FILE *Stream; // [esp+534h] [ebp-414h]
  __int16 i; // [esp+538h] [ebp-410h]
  int v11; // [esp+53Ch] [ebp-40Ch]
  char Destination[1028]; // [esp+540h] [ebp-408h] BYREF

  v11 = 18;
  v7 = 15;
  v8[0] = 69;
  v8[1] = 196;
  v8[2] = 324;
  v4[0] = 104;
  v4[1] = 146;
  v4[2] = 189;
  v4[3] = 231;
  v4[4] = 274;
  memset(Destination, 0, 1024);
  strcat(Destination, "gne.bin");
  for ( i = 0; i < 15; ++i )
    Str[19 * i] = 0;
  v0 = (FILE *)sub_5EA9C0(Destination, "rb");
  Stream = v0;
  if ( v0 )
  {
    fread(Buffer, 0x3E8u, 1u, Stream);
    for ( i = 0; i < 15; ++i )
    {
      memcpy(&Str[19 * i], &Buffer[9 * i], 0x12u);
      Str[19 * i + 18] = 0;
      for ( j = 0; j < 18; ++j )
        ++Str[19 * i + j];
    }
    LOWORD(v0) = fclose(Stream);
  }
  for ( i = 0; i < 15; ++i )
  {
    v6 = sub_5FA5B0(0, i, &Str[19 * i], 59, 102, 34, (__int16)v8[i / 5], (__int16)v4[i % 5], 1, 48, -1);
    sub_5EE710(&Str[19 * i]);
    LOWORD(v0) = i + 1;
  }
  return (__int16)v0;
}


//======================================================================
// sub_5CF3E0
// entry 005cf3e0  size 142  status ok
//======================================================================

_BYTE *__thiscall sub_5CF3E0(_BYTE *this)
{
  _BYTE *result; // eax

  sub_5F85D0(this);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    dword_16306A0 != 0 ? 101020 : 101026,
    0,
    0,
    10,
    0,
    1.0,
    0.5,
    this + 448);
  while ( 1 )
  {
    result = this;
    if ( *(this + 444) )
      break;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8);
    sub_613E70(*(_DWORD *)(dword_7960D8 + 16));
  }
  return result;
}


//======================================================================
// sub_5CF470
// entry 005cf470  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_5CF470(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &LoanDialog::`vftable';
  sub_5F83D0(1247, 0);
  return this;
}


//======================================================================
// sub_5CF500
// entry 005cf500  size 1358  status ok
//======================================================================

int __thiscall sub_5CF500(int this)
{
  int v1; // eax
  int v2; // esi
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  int result; // eax
  int v11; // eax
  LONG *v12; // [esp-8h] [ebp-334h]
  LONG *p_top; // [esp-4h] [ebp-330h]
  LONG *v14; // [esp-4h] [ebp-330h]
  int v15; // [esp-4h] [ebp-330h]
  bool v16; // [esp+4h] [ebp-328h]
  LONG *v18; // [esp+14h] [ebp-318h]
  bool v19; // [esp+33h] [ebp-2F9h]
  char Buffer[108]; // [esp+34h] [ebp-2F8h] BYREF
  int v21; // [esp+A0h] [ebp-28Ch]
  int v22; // [esp+A4h] [ebp-288h]
  _DWORD v23[2]; // [esp+A8h] [ebp-284h]
  _DWORD v24[3]; // [esp+B0h] [ebp-27Ch]
  char Destination[107]; // [esp+BCh] [ebp-270h] BYREF
  char v26; // [esp+127h] [ebp-205h]
  int i; // [esp+128h] [ebp-204h]
  char v28[508]; // [esp+12Ch] [ebp-200h] BYREF

  v23[0] = "SID_GENERIC_IACCEPT";
  v23[1] = "SID_GENERIC_CANCEL";
  v24[0] = 215;
  v24[1] = 360;
  v26 = 0;
  v21 = 0;
  v22 = 0;
  v1 = sub_630F40("SID_CASINO_LOANS");
  sub_5FA5B0(0, -1, v1, 73, 448, 25, 0, 1, 1, 18, -1);
  *(_DWORD *)(this + 448) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 604))(dword_7947E4);
  if ( !*(_DWORD *)(this + 448)
    || !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
          dword_162EE84,
          -1)
    || (unsigned __int8)sub_635CB0(8) )
  {
    *(_DWORD *)(this + 448) = sub_6375B0(dword_162EE84);
  }
  if ( !*(_DWORD *)(this + 448) )
    sub_5E9F20((char)"curPlayer", "..\\Casino\\casinodialogs.cpp", 668);
  v2 = sub_5D6BD0(*(_DWORD *)(this + 448));
  v19 = v2 <= sub_5D5A50(*(_DWORD *)(this + 448));
  *(_BYTE *)(this + 444) = sub_5D6CD0(*(_DWORD *)(this + 448));
  v26 = *(_BYTE *)(sub_5D52E0(*(_DWORD *)(this + 448)) + 41);
  v16 = v26 && v19 && !(unsigned __int8)sub_5DA830(dword_7947E4);
  *(_BYTE *)(this + 445) = v16;
  v21 = sub_5D6BD0(*(_DWORD *)(this + 448));
  sub_64C8D0(v21, v22, Destination, 1, 1, 1);
  if ( v26 )
  {
    if ( *(_BYTE *)(this + 445) )
    {
      v3 = (const char *)sub_630F40("SID_CASINO_PAYOFFLOAN");
      sprintf(Buffer, v3);
      p_top = &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 448))->rcSource.top;
      v4 = (const char *)sub_630F40("SID_CASINO_PAYOFFLOANMESSAGE_FORMAT");
      sprintf(v28, v4, p_top);
    }
    else
    {
      v5 = (const char *)sub_630F40("SID_CASINO_UNABLETOPAYOFFLOAN");
      sprintf(Buffer, v5);
      v12 = &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 448))->rcSource.top;
      v6 = (const char *)sub_630F40("SID_CASINO_UNABLETOPAYOFFLOANMESSAGE_FORMAT");
      sprintf(v28, v6, v12, Destination);
    }
  }
  else if ( *(_BYTE *)(this + 444) )
  {
    v7 = (const char *)sub_630F40("SID_CASINO_LOANAVAILABLE");
    sprintf(Buffer, v7);
    v18 = &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 448))->rcSource.top;
    sprintf(v28, off_75D490, v18, Destination);
  }
  else
  {
    v8 = (const char *)sub_630F40("SID_CASINO_LOANNOTAVAILABLE");
    sprintf(Buffer, v8);
    v14 = &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 448))->rcSource.top;
    v9 = (const char *)sub_630F40("SID_CASINO_LOANNOTAVAILABLE_MESSAGE_FORMAT");
    sprintf(v28, v9, v14);
  }
  sub_5FA5B0(0, 0, Buffer, 72, 170, 34, 199, 50, 3, 5, -1);
  result = sub_5FA5B0(0, 1, v28, 31, 242, 400, 199, 74, 3, 5, -1);
  for ( i = 0; i < 2; ++i )
  {
    if ( !i && !*(_BYTE *)(this + 444) )
    {
      result = *(unsigned __int8 *)(this + 445);
      if ( !*(_BYTE *)(this + 445) )
        continue;
    }
    v15 = i != 1 ? 0 : 27;
    v11 = sub_630F40(v23[i]);
    result = sub_5F9DE0(0, i, (i != 1) + 3200222, v24[i], 284, 1, v11, 72, 75, 74, -1, v15);
    v24[2] = result;
  }
  return result;
}


//======================================================================
// sub_5CFA50
// entry 005cfa50  size 157  status ok
//======================================================================

int __thiscall sub_5CFA50(int this, int a2)
{
  int result; // eax

  if ( !a2 )
  {
    if ( *(_BYTE *)(this + 444) )
      sub_5D6DE0(*(_DWORD *)(this + 448));
    if ( *(_BYTE *)(this + 445) )
      sub_5D6EE0(1);
    goto LABEL_8;
  }
  if ( a2 == 1 )
LABEL_8:
    sub_5DC2B0(dword_7947E4);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 632))(dword_7947E4);
  return result;
}


//======================================================================
// sub_5CFAF0
// entry 005cfaf0  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_5CFAF0(_DWORD *this)
{
  sub_5F71F0(1, 0);
  *this = &CreditDialog::`vftable';
  sub_5F83D0(3200243, 0);
  return this;
}


//======================================================================
// sub_5CFB80
// entry 005cfb80  size 482  status ok
//======================================================================

int sub_5CFB80()
{
  int v0; // eax
  int v1; // eax
  _DWORD *v3; // [esp+4h] [ebp-28h]
  int v4; // [esp+8h] [ebp-24h]
  int v5; // [esp+8h] [ebp-24h]
  _DWORD *v6; // [esp+10h] [ebp-1Ch]
  int i; // [esp+1Ch] [ebp-10h]

  v0 = sub_630F40("SID_CASINO_ENTERCREDITS");
  sub_5F73E0(v0, 73, 0, 3);
  sub_5FA880(0, 0, 252, 1, 2, 124, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 0, 252, 1, 3, 125, 1, 255, 255, 255, 0, 0, 0);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v5 = sub_630F40("SID_GENERIC_CANCEL");
      sub_5F9DE0(0, i, i != 0 ? 3200222 : 3200229, i != 0 ? 133 : 43, 131, 1, v5, 72, 75, 74, -1, i != 0 ? 0 : 13);
    }
    else
    {
      v4 = sub_630F40("SID_GENERIC_OK");
      sub_5F9DE0(0, 0, 3200229, 43, 131, 1, v4, 72, 75, 74, -1, 13);
    }
  }
  v6 = operator new(0x1FCu);
  if ( v6 )
  {
    sub_60B4A0();
    *v6 = &CreditEditBox::`vftable';
    v3 = v6;
  }
  else
  {
    v3 = 0;
  }
  sub_5FA6A0(v3, 0, 3200227, 26, 47, &Source, 31, 200, 16, 9, 24, 1, 6, 5);
  v1 = sub_630F40("SID_CASINO_CREDITS_COLON");
  return sub_5FA5B0(0, 0, v1, 72, 116, 20, 33, 49, 2, 5, -1);
}


//======================================================================
// sub_5CFD70
// entry 005cfd70  size 120  status ok
//======================================================================

int __stdcall sub_5CFD70(int a1)
{
  const char *v1; // eax
  int v3; // [esp+4h] [ebp-4h]

  if ( a1 != 1 )
  {
    v1 = (const char *)sub_5FB8B0(0);
    v3 = atoi(v1);
    if ( v3 > 0 )
    {
      *(_DWORD *)(dword_7947E0 + 20232) = v3;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_7947E4 + 700))(dword_7947E4, v3);
    }
  }
  return sub_5DC3B0(dword_7947E4);
}


//======================================================================
// sub_5CFDF0
// entry 005cfdf0  size 113  status ok
//======================================================================

int __thiscall sub_5CFDF0(void *this, int a2)
{
  int result; // eax
  char String[4]; // [esp+4h] [ebp-4h] BYREF

  strcpy(String, "0");
  String[0] = *(_BYTE *)(a2 + 20);
  if ( !(unsigned __int8)sub_60C370(this) )
    return sub_60B7D0(a2);
  if ( *(char *)(a2 + 20) <= 24 )
    return sub_60B7D0(a2);
  if ( atoi(String) )
    return sub_60B7D0(a2);
  result = strcmp(String, "0");
  if ( !result )
    return sub_60B7D0(a2);
  return result;
}


//======================================================================
// sub_5CFE70
// entry 005cfe70  size 129  status ok
//======================================================================

_BYTE *__thiscall sub_5CFE70(_BYTE *this)
{
  sub_5F71F0(1, 0);
  *(_DWORD *)this = &CreditCardDialog::`vftable';
  sub_5F83D0(1090, 0);
  *(this + 512) = 0;
  *((_DWORD *)this + 127) = 0;
  return this;
}


//======================================================================
// sub_5CFF20
// entry 005cff20  size 470  status ok
//======================================================================

int __thiscall sub_5CFF20(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // [esp+4h] [ebp-28h]
  void *v9; // [esp+18h] [ebp-14h]

  *(this + 113) = a2;
  v2 = sub_630F40("SID_CASINO_CREDITEXTENDED");
  sub_5F73E0(v2, 73, 0, 3);
  sub_5FA880(0, 0, 204, 1, 2, 152, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(0, 1, 204, 1, 2, 153, 1, 255, 255, 255, 0, 0, 0);
  v3 = sub_630F40("SID_GENERIC_OK");
  sub_5F9DE0(0, 0, 3200229, 63, 163, 1, v3, 72, 75, 74, -1, 13);
  v4 = sub_5D52E0(*(this + 113));
  sub_5FA5B0(0, 0, v4 + 16, 40, 210, 15, 22, 93, 3, 5, -1);
  *(this + 112) = sub_5FA5B0(0, 1, &Source, 40, 107, 15, 22, 115, 3, 5, -1);
  v9 = operator new(0x184u);
  if ( v9 )
    v7 = sub_5F5BF0(v9);
  else
    v7 = 0;
  v5 = sub_5D52E0(*(this + 113));
  result = sub_5F9CE0(v7, 0, 1089, 0, 0, 1, *(char *)(v5 + 42), 255, 0);
  *(this + 111) = result;
  return result;
}


//======================================================================
// sub_5D0100
// entry 005d0100  size 58  status ok
//======================================================================

int __thiscall sub_5D0100(_BYTE *this, int a2)
{
  *(this + 512) = 1;
  sub_5F5DF0(0);
  sub_5F87D0(this);
  return sub_5DC4F0(dword_7947E4);
}


//======================================================================
// sub_5D0140
// entry 005d0140  size 282  status ok
//======================================================================

int __thiscall sub_5D0140(int this)
{
  int result; // eax
  LONG *p_top; // [esp+Ch] [ebp-1Ch]
  _DWORD *v4; // [esp+14h] [ebp-14h]

  sub_5F85D0(this);
  if ( (unsigned __int8)sub_635CB0(8) )
  {
    p_top = &CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 452))->rcSource.top;
    result = (*(int (__thiscall **)(_DWORD, LONG *))(**(_DWORD **)(this + 448) + 180))(*(_DWORD *)(this + 448), p_top);
    while ( !*(_BYTE *)(this + 512) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8);
      result = sub_613E70(*(_DWORD *)(dword_7960D8 + 16));
    }
  }
  else
  {
    v4 = operator new(0x20u);
    if ( v4 )
    {
      sub_5FC0D0(0);
      *v4 = &TypeNameScript::`vftable';
      return sub_5F5DF0(v4);
    }
    else
    {
      return sub_5F5DF0(0);
    }
  }
  return result;
}


//======================================================================
// sub_5D0260
// entry 005d0260  size 306  status ok
//======================================================================

bool __thiscall sub_5D0260(int this)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  size_t v2; // eax
  const char *v3; // eax
  char v5; // [esp+0h] [ebp-34h]
  char Buffer[4]; // [esp+Ch] [ebp-28h] BYREF
  char Destination[32]; // [esp+10h] [ebp-24h] BYREF

  DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 452));
  strcpy(Destination, (const char *)&DisplayFormat->rcSource.top);
  v2 = strlen(Destination);
  sprintf(Buffer, "%c", Destination[v2 - *(_DWORD *)(this + 508)]);
  strcat((char *)(this + 456), Buffer);
  sub_5ECC60(107);
  sub_5EE710((char *)(this + 456));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 448) + 116))(*(_DWORD *)(this + 448));
  v5 = 0;
  if ( (int)--*(_DWORD *)(this + 508) > 0 )
  {
    v3 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 448) + 184))(*(_DWORD *)(this + 448));
    if ( !strcmp((const char *)(this + 456), v3) )
      return 1;
  }
  return v5;
}


//======================================================================
// sub_5D03A0
// entry 005d03a0  size 340  status ok
//======================================================================

int __thiscall sub_5D03A0(void *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+18h] [ebp-18h]
  unsigned __int8 v5; // [esp+27h] [ebp-9h]
  char *Str; // [esp+28h] [ebp-8h]

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( sub_5D0260(dword_7947D4) )
        (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, 10);
      else
        (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 10);
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               100005,
               0,
               0,
               5,
               1,
               1.0,
               0.5,
               0);
    }
    else if ( result == 2 )
    {
      v3 = sub_5FB300(0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 116))(v3);
      v5 = *((_BYTE *)dword_162EE84 + 37);
      result = v5;
      if ( v5 )
      {
        v2 = sub_5FB300(0);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 192))(v2, v2);
      }
    }
  }
  else
  {
    strcpy((char *)(dword_7947D4 + 456), &Source);
    Str = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(dword_7947D4 + 452))->rcSource.top;
    *(_DWORD *)(dword_7947D4 + 508) = strlen(Str);
    return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, 10);
  }
  return result;
}


//======================================================================
// sub_5D0500
// entry 005d0500  size 116  status ok
//======================================================================

_BYTE *__thiscall sub_5D0500(_BYTE *this)
{
  sub_5F71F0(1, 0);
  *(_DWORD *)this = &RepayLoanDialog::`vftable';
  sub_5F83D0(1246, 0);
  *(this + 494) = 0;
  return this;
}


//======================================================================
// sub_5D05A0
// entry 005d05a0  size 275  status ok
//======================================================================

int __thiscall sub_5D05A0(char *this, char *Source)
{
  int v2; // eax
  const char *v3; // eax
  int v4; // eax
  int v5; // eax
  char Buffer[108]; // [esp+4h] [ebp-70h] BYREF

  v2 = sub_630F40("SID_CASINO_LOANS");
  sub_5FA5B0(0, -1, v2, 73, 448, 25, 0, 1, 1, 18, -1);
  strcpy(this + 444, Source);
  v3 = (const char *)sub_630F40("SID_CASINO_REPAYTIME_FORMAT");
  sprintf(Buffer, v3, Source);
  sub_5FA5B0(0, 0, Buffer, 72, 240, 45, 199, 50, 3, 5, -1);
  v4 = sub_630F40("SID_CASINO_REPAYLOANMESSAGE");
  sub_5FA5B0(0, 1, v4, 31, 230, 400, 199, 95, 3, 5, 12);
  v5 = sub_630F40("SID_CASINO_AGREED");
  return sub_5F9DE0(0, 0, 3200229, 360, 284, 1, v5, 72, 75, 74, -1, 13);
}


//======================================================================
// sub_5D06C0
// entry 005d06c0  size 34  status ok
//======================================================================

int __thiscall sub_5D06C0(_BYTE *this, int a2)
{
  *(this + 494) = 1;
  return sub_5DC5E0(dword_7947E4, this);
}


//======================================================================
// sub_5D06F0
// entry 005d06f0  size 67  status ok
//======================================================================

_BYTE *__thiscall sub_5D06F0(_BYTE *this)
{
  _BYTE *result; // eax

  sub_5F85D0(this);
  while ( 1 )
  {
    result = this;
    if ( *(this + 494) )
      break;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_7960D8 + 16))(dword_7960D8);
    sub_613E70(*(_DWORD *)(dword_7960D8 + 16));
  }
  return result;
}


//======================================================================
// sub_5D0980
// entry 005d0980  size 117  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_5D0980(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &CasinoMachineState::`vftable';
  sub_5D0A20(0);
  *((_DWORD *)this + 2) = 0;
  CPaneContainer::SetPaneDivider(this, (struct CPaneDivider *)1);
  return this;
}


//======================================================================
// sub_5D0A20
// entry 005d0a20  size 89  status ok
//======================================================================

_DWORD *__thiscall sub_5D0A20(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  if ( a2 > 999999 )
  {
    v6 = a2 - 999999;
    v2 = (_DWORD *)sub_5D0C30(v5, a2 - 999999);
    sub_5D1420(*v2, v2[1]);
    a2 = 999999;
  }
  *(this + 1) = a2;
  return this;
}


//======================================================================
// sub_5D0AA0
// entry 005d0aa0  size 143  status ok
//======================================================================

int sub_5D0AA0()
{
  int result; // eax

  switch ( *(_DWORD *)(dword_7947E0 + 20240) )
  {
    case 0:
    case 1:
    case 2:
      result = 0;
      break;
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
    case 0xA:
      result = 500;
      break;
    case 0xB:
      result = 1000;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\casinomachinestate.cpp", 60);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5D0B60
// entry 005d0b60  size 160  status ok
//======================================================================

int sub_5D0B60()
{
  int result; // eax

  switch ( *(_DWORD *)(dword_7947E0 + 20240) )
  {
    case 0:
      result = 5;
      break;
    case 1:
      result = 10;
      break;
    case 2:
      result = 25;
      break;
    case 3:
      result = 100;
      break;
    case 4:
      result = 500;
      break;
    case 5:
      result = 1000;
      break;
    case 6:
      result = 2500;
      break;
    case 7:
      result = 5000;
      break;
    case 8:
      result = 10000;
      break;
    case 9:
      result = 25000;
      break;
    case 0xA:
      result = 50000;
      break;
    case 0xB:
      result = 100000;
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\casinomachinestate.cpp", 82);
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5D0C30
// entry 005d0c30  size 153  status ok
//======================================================================

_QWORD *__stdcall sub_5D0C30(_QWORD *a1, int a2)
{
  int v3; // eax
  int v4; // [esp+18h] [ebp-4h]

  if ( *(int *)(dword_7947E0 + 20240) >= 3 )
  {
    v3 = sub_5D0AA0();
    *a1 = sub_64C8A0(a2 * v3, 0);
  }
  else
  {
    v4 = a2 * sub_5D0B60();
    *a1 = sub_64C8A0(v4 / 100, v4 % 100);
  }
  return a1;
}


//======================================================================
// sub_5D0CD0
// entry 005d0cd0  size 86  status ok
//======================================================================

int __thiscall sub_5D0CD0(int *this, int a2)
{
  int *v2; // eax
  int v4; // [esp-8h] [ebp-24h]
  int v5; // [esp-4h] [ebp-20h]
  int v6; // [esp+4h] [ebp-18h]
  __int64 v7; // [esp+Ch] [ebp-10h] BYREF
  __int64 v8; // [esp+14h] [ebp-8h] BYREF

  v6 = *(this + 1);
  v2 = (int *)sub_5D0C30(&v7, *(this + 2));
  v5 = v2[1];
  v4 = *v2;
  sub_5D0C30(&v8, v6);
  sub_64C5C0(a2, v4, v5);
  return a2;
}


//======================================================================
// sub_5D0D30
// entry 005d0d30  size 43  status ok
//======================================================================

int __stdcall sub_5D0D30(int a1, int a2)
{
  return (a2 + 100 * a1) / sub_5D0B60();
}


//======================================================================
// sub_5D0D60
// entry 005d0d60  size 66  status ok
//======================================================================

int __stdcall sub_5D0D60(int a1)
{
  int *v1; // eax
  int v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  _BYTE v5[8]; // [esp+4h] [ebp-10h] BYREF
  __int64 v6; // [esp+Ch] [ebp-8h] BYREF

  sub_5DCB00(0);
  v1 = (int *)sub_5D5A90(v5);
  v4 = v1[1];
  v3 = *v1;
  sub_5D0C30(&v6, a1);
  return sub_64C820(v3, v4);
}


//======================================================================
// sub_5D0DB0
// entry 005d0db0  size 323  status ok
//======================================================================

__int64 *__thiscall sub_5D0DB0(_DWORD *this, __int64 *a2, int a3)
{
  int *v3; // eax
  __int64 v6; // [esp+Ch] [ebp-34h] BYREF
  __int64 v7; // [esp+14h] [ebp-2Ch] BYREF
  char v8[8]; // [esp+1Ch] [ebp-24h] BYREF
  __int64 v9; // [esp+24h] [ebp-1Ch]
  __int64 v10; // [esp+2Ch] [ebp-14h]
  __int64 v11; // [esp+34h] [ebp-Ch] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  v12 = a3 + *(this + 1);
  sub_5D0C30(&v11, a3);
  v9 = sub_64C8A0(0, 0);
  v10 = v9;
  if ( !(unsigned __int8)sub_5D0D60(a3) )
  {
    sub_5DCB00(0);
    v3 = (int *)sub_5D5A90(v8);
    a3 = sub_5D0D30(*v3, v3[1]);
    v12 = a3 + *(this + 1);
    v11 = *sub_5D0C30(&v7, a3);
  }
  if ( v12 >= 999999 )
  {
    a3 -= v12 - 999999;
    v12 = 999999;
    v11 = *sub_5D0C30(&v6, a3);
  }
  v10 = v11;
  if ( a3 )
  {
    LODWORD(v11) = -(int)v11;
    HIDWORD(v11) = -HIDWORD(v11);
    sub_5D1420(v11, HIDWORD(v11));
    sub_5D0A20(this, v12);
  }
  *a2 = v10;
  return a2;
}


//======================================================================
// sub_5D0F00
// entry 005d0f00  size 239  status ok
//======================================================================

_DWORD *__thiscall sub_5D0F00(int *this)
{
  int v3; // [esp+10h] [ebp-10h]
  int v4; // [esp+14h] [ebp-Ch]
  __int64 v5; // [esp+18h] [ebp-8h] BYREF

  sub_5D0C30(&v5, 1);
  v3 = *(this + 2);
  if ( v3 >= (*(int (__thiscall **)(int *))(*this + 4))(this) )
    sub_5E9F20((char)"GetCreditsBet() < GetMaxCreditsCanBetForThisMachine()", "..\\Casino\\casinomachinestate.cpp", 170);
  ++*(this + 2);
  if ( *(this + 1) )
    return sub_5D0A20(this, *(this + 1) - 1);
  if ( (_DWORD)v5 )
  {
    LODWORD(v5) = v5 * -*(this + 3);
    HIDWORD(v5) = -HIDWORD(v5);
  }
  else
  {
    v4 = *(this + 3) * -HIDWORD(v5);
    LODWORD(v5) = v4 / 100;
    HIDWORD(v5) = v4 % 100;
  }
  return (_DWORD *)sub_5D1420(v5, HIDWORD(v5));
}


//======================================================================
// sub_5D0FF0
// entry 005d0ff0  size 434  status ok
//======================================================================

char __thiscall sub_5D0FF0(int *this)
{
  int *v2; // eax
  int v3; // edx
  int v4; // [esp+0h] [ebp-50h]
  int v5; // [esp+4h] [ebp-4Ch]
  int v7; // [esp+20h] [ebp-30h]
  char v8[8]; // [esp+24h] [ebp-2Ch] BYREF
  __int64 v9; // [esp+2Ch] [ebp-24h] BYREF
  int v10; // [esp+34h] [ebp-1Ch]
  int v11; // [esp+38h] [ebp-18h]
  int v12; // [esp+3Ch] [ebp-14h]
  int v13; // [esp+40h] [ebp-10h]
  int v14; // [esp+44h] [ebp-Ch]
  __int64 v15; // [esp+48h] [ebp-8h] BYREF

  sub_5D0C30(&v15, 1);
  v10 = 0;
  v13 = 0;
  v14 = 0;
  sub_64C560((double)*(this + 3));
  v7 = *(this + 2);
  if ( v7 >= (*(int (__thiscall **)(int *))(*this + 4))(this) )
    sub_5E9F20((char)"GetCreditsBet() < GetMaxCreditsCanBetForThisMachine()", "..\\Casino\\casinomachinestate.cpp", 205);
  if ( *(this + 1) < *(this + 3) )
  {
    v13 = 0;
    if ( *(this + 1) )
    {
      v13 = *(this + 1);
      sub_5D0A20(this, 0);
    }
    v14 = *(this + 3) - v13;
    v2 = (int *)sub_5D0C30(&v9, v14);
    v3 = v2[1];
    v11 = *v2;
    v12 = v3;
    v5 = v3;
    v4 = v11;
    sub_5DCB00(0);
    sub_5D5A90(v8);
    if ( (unsigned __int8)sub_64C6A0(v4, v5) )
    {
      sub_5D0A20(this, v13);
      return 0;
    }
    else
    {
      if ( v11 )
      {
        v11 = -v11;
        v12 = -v12;
      }
      else
      {
        v10 = -v12;
        v11 = -v12 / 100;
        v12 = -v12 % 100;
      }
      sub_5D1420(v11, v12);
      ++*(this + 2);
      return 1;
    }
  }
  else
  {
    sub_5D0A20(this, *(this + 1) - *(this + 3));
    ++*(this + 2);
    return 1;
  }
}


//======================================================================
// sub_5D11B0
// entry 005d11b0  size 85  status ok
//======================================================================

int __thiscall sub_5D11B0(int *this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h]
  unsigned __int8 v4; // [esp+Ah] [ebp-2h]

  do
  {
    v4 = 0;
    v3 = *(this + 2);
    if ( v3 < (*(int (__thiscall **)(int *))(*this + 4))(this) )
      v4 = sub_5D0FF0(this);
    result = v4;
  }
  while ( v4 );
  return result;
}


//======================================================================
// sub_5D1210
// entry 005d1210  size 459  status ok
//======================================================================

int __thiscall sub_5D1210(_DWORD *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // edx
  int *v4; // eax
  int *v5; // eax
  int v6; // edx
  int v8; // [esp+28h] [ebp-2Ch]
  __int64 v9; // [esp+2Ch] [ebp-28h] BYREF
  char v10[8]; // [esp+34h] [ebp-20h] BYREF
  __int64 v11; // [esp+3Ch] [ebp-18h] BYREF
  int v12; // [esp+44h] [ebp-10h]
  int v13; // [esp+48h] [ebp-Ch]
  int v14; // [esp+4Ch] [ebp-8h]
  int v15; // [esp+50h] [ebp-4h]

  v8 = *(this + 2);
  v15 = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this) - v8;
  if ( *(this + 1) < v15 )
  {
    if ( *(this + 1) )
    {
      v15 -= *(this + 1);
      *(this + 2) += *(this + 1);
      sub_5D0A20(this, 0);
    }
    v2 = (int *)sub_5D0C30(&v11, v15);
    v3 = v2[1];
    v13 = *v2;
    v14 = v3;
    if ( !v13 )
    {
      v12 = v14;
      v13 = v14 / 100;
      v14 %= 100;
    }
    if ( (unsigned __int8)sub_5D0D60(v15) )
    {
      *(this + 2) = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
      return sub_5D1420(-v13, -v14);
    }
    else
    {
      sub_5DCB00(0);
      v4 = (int *)sub_5D5A90(v10);
      result = sub_5D0D30(*v4, v4[1]);
      v15 = result;
      if ( result )
      {
        v5 = (int *)sub_5D0C30(&v9, v15);
        v6 = v5[1];
        v13 = *v5;
        v13 = -v13;
        v14 = -v6;
        *(this + 2) += v15;
        return sub_5D1420(v13, v14);
      }
    }
  }
  else
  {
    sub_5D0A20(this, *(this + 1) - v15);
    result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
    *(this + 2) = result;
  }
  return result;
}


//======================================================================
// sub_5D13E0
// entry 005d13e0  size 63  status ok
//======================================================================

_DWORD *__thiscall sub_5D13E0(int *this)
{
  _DWORD *v1; // eax
  __int64 v4; // [esp+8h] [ebp-8h] BYREF

  v1 = sub_5D0C30(&v4, *(this + 1));
  sub_5D1420(*v1, v1[1]);
  return sub_5D0A20(this, 0);
}


//======================================================================
// sub_5D1420
// entry 005d1420  size 79  status ok
//======================================================================

int __stdcall sub_5D1420(int a1, int a2)
{
  int result; // eax

  result = sub_5DCB00(0);
  if ( result )
  {
    sub_5DCB00(0);
    sub_5D5FB0(a1, a2);
    sub_5DCB00(0);
    return sub_5D5CF0(a1, a2);
  }
  return result;
}


//======================================================================
// sub_5D1470
// entry 005d1470  size 28  status ok
//======================================================================

int sub_5D1470()
{
  int v1; // [esp+4h] [ebp-8h] BYREF

  sub_5D14B0(&v1);
  return v1;
}


//======================================================================
// sub_5D14B0
// entry 005d14b0  size 76  status ok
//======================================================================

int __stdcall sub_5D14B0(int a1)
{
  sub_5DCB00(0);
  sub_5D5A90(a1);
  return a1;
}


//======================================================================
// sub_5D15E0
// entry 005d15e0  size 196  status ok
//======================================================================

int __thiscall sub_5D15E0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CasinoNavigationRoom::`vftable';
  dword_7947DC = 0;
  if ( *(this + 34) )
    (***(this + 34))(*(this + 34), 1);
  if ( *(this + 35) )
    (***(this + 35))(*(this + 35), 1);
  return sub_5D7BD0();
}


//======================================================================
// sub_5D16B0
// entry 005d16b0  size 154  status ok
//======================================================================

int __thiscall sub_5D16B0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-28h]
  int v5; // [esp+0h] [ebp-28h]
  _DWORD v6[9]; // [esp+4h] [ebp-24h]

  v6[0] = -1;
  v6[1] = 3200100;
  v6[2] = 3200101;
  v6[3] = 3200102;
  v6[4] = 3200103;
  v6[5] = 3200104;
  v6[6] = 3200105;
  v6[7] = 3200106;
  v6[8] = 3200107;
  result = (int)this;
  if ( *(this + 32) != a2 )
  {
    sub_5F1AD0(v6[a2]);
    *(this + 32) = a2;
    sub_5D1DB0(this, v6[0]);
    sub_5D2220(v4);
    sub_5D3B10(v4, v6[0]);
    return sub_5D4200(v5);
  }
  return result;
}


//======================================================================
// sub_5D1750
// entry 005d1750  size 1025  status ok
//======================================================================

int __thiscall sub_5D1750(void *this)
{
  int v1; // eax
  int v3; // [esp-4h] [ebp-80h]
  int v4; // [esp+0h] [ebp-7Ch]
  _DWORD *v5; // [esp+4h] [ebp-78h]
  int v6; // [esp+8h] [ebp-74h]
  int v7; // [esp+Ch] [ebp-70h]
  int v8; // [esp+10h] [ebp-6Ch]
  _DWORD *v9; // [esp+14h] [ebp-68h]
  int v10; // [esp+18h] [ebp-64h]
  int v11; // [esp+1Ch] [ebp-60h]
  int v12; // [esp+20h] [ebp-5Ch]
  _DWORD *v14; // [esp+28h] [ebp-54h]
  _DWORD *v15; // [esp+30h] [ebp-4Ch]
  void *v16; // [esp+38h] [ebp-44h]
  void *v17; // [esp+40h] [ebp-3Ch]
  _DWORD v18[9]; // [esp+48h] [ebp-34h]
  int i; // [esp+6Ch] [ebp-10h]
  int v20; // [esp+78h] [ebp-4h]

  v18[0] = 3;
  v18[1] = 7;
  v18[2] = 5;
  v18[3] = 6;
  v18[4] = 4;
  v18[5] = 2;
  v18[6] = 8;
  v18[7] = 1;
  v18[8] = 0;
  sub_5D8230();
  if ( byte_795F95 )
  {
    sub_5D2040(this);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
  }
  v17 = operator new(0x184u);
  v20 = 0;
  if ( v17 )
    v12 = sub_5F5BF0(v17);
  else
    v12 = 0;
  v20 = -1;
  sub_5F9CE0(v12, 0, 3200116, 0, 0, 2000, 0, 255, 0);
  v11 = sub_5FB2B0(0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 112))(v11);
  v16 = operator new(0x184u);
  v20 = 1;
  if ( v16 )
    v10 = sub_5F5BF0(v16);
  else
    v10 = 0;
  v20 = -1;
  sub_5F9CE0(v10, 1, 3200117, 0, 0, 2001, 0, 255, 0);
  for ( i = 0; i < 9; ++i )
  {
    v15 = operator new(0x1DCu);
    v20 = 2;
    if ( v15 )
    {
      Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v4);
      *v15 = &CasinoNavMapButton::`vftable';
      v9 = v15;
    }
    else
    {
      v9 = 0;
    }
    v20 = -1;
    sub_5F9DE0(v9, i, 3200120, 0, 0, i != 7 ? 2003 : 2008, &Source, -1, -1, -1, -1, 0);
    v3 = v18[i];
    sub_5FB300(i);
    sub_6023D0(v3, v3, v3, v3);
    v1 = sub_5FB300(i);
    sub_602EB0(v1);
    sub_5FB300(i);
    sub_602790(0);
    sub_5FB300(i);
    sub_5EB700(1);
    v8 = sub_5FB300(i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 112))(v8);
  }
  sub_5F9CE0(0, 2, 3200118, 0, 0, 2010, 0, 255, 0);
  v7 = sub_5FB2B0(2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 112))(v7);
  sub_5F9CE0(0, 3, 3200119, 0, 0, 2002, 0, 255, 0);
  v6 = sub_5FB2B0(3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 112))(v6);
  if ( (unsigned __int8)sub_636760(dword_162EE84) )
    (*(void (__thiscall **)(void *, int, _DWORD, int, int, _DWORD))(*(_DWORD *)this + 364))(this, 1, 0, -1, -1, 0);
  v14 = operator new(0x20u);
  v20 = 3;
  if ( v14 )
  {
    sub_5FC0D0(0);
    *v14 = &CasinoNavigationRoomScript::`vftable';
    v5 = v14;
  }
  else
  {
    v5 = 0;
  }
  v20 = -1;
  return sub_5F1B70(v5);
}


//======================================================================
// sub_5D1B60
// entry 005d1b60  size 423  status ok
//======================================================================

int __stdcall sub_5D1B60(int a1, int a2)
{
  switch ( a2 )
  {
    case 100001:
      sub_5FE640(-2, 0);
      sub_5FE640(100009, 0);
      sub_5FE640(100007, 0);
      sub_5FE640(100008, 0);
      sub_5FE240(5017, -1, -1, 0);
      sub_5FE240(100006, -1, -1, 0);
      sub_5FE240(-2, -1, 5017, 0);
      break;
    case 100031:
      sub_5FE640(-2, 0);
      sub_5FE640(100033, 0);
      sub_5FE240(100032, -1, -2, 0);
      sub_5FE240(-2, -1, 100032, 0);
      break;
    case 100035:
      sub_5FE640(-2, 0);
      sub_5FE640(100037, 0);
      sub_5FE640(100038, 0);
      sub_5FE640(-2, 0);
      break;
    case 100055:
      sub_5FE640(-2, 0);
      sub_5FE640(100058, 0);
      sub_5FE640(100057, 0);
      sub_5FE240(100061, -1, 100054, 0);
      sub_5FE240(-2, -1, 100061, 0);
      sub_5FE240(100062, -1, -2, 0);
      break;
    default:
      return sub_5D8670(a1, a2);
  }
  return sub_5D8670(a1, a2);
}


//======================================================================
// sub_5D1D60
// entry 005d1d60  size 73  status ok
//======================================================================

void __thiscall sub_5D1D60(void *this)
{
  int v1; // eax
  void *v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = this;
  for ( i = 0; i < 9; ++i )
  {
    v1 = sub_5FB300(i);
    (*(void (__thiscall **)(int, int, void *))(*(_DWORD *)v1 + 116))(v1, v1, v2);
  }
}


//======================================================================
// sub_5D1DB0
// entry 005d1db0  size 646  status ok
//======================================================================

int __thiscall sub_5D1DB0(_DWORD *this)
{
  void (__thiscall ***v1)(_DWORD, int); // eax
  int result; // eax
  int v3; // eax
  int v4; // [esp-10h] [ebp-74h]
  int v5; // [esp-Ch] [ebp-70h]
  int v6; // [esp-8h] [ebp-6Ch]
  int v7; // [esp-4h] [ebp-68h]
  int v8; // [esp+0h] [ebp-64h]
  _DWORD *v9; // [esp+4h] [ebp-60h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+Ch] [ebp-58h]
  _DWORD *v12; // [esp+14h] [ebp-50h]
  void *v13; // [esp+24h] [ebp-40h]
  _DWORD v14[9]; // [esp+2Ch] [ebp-38h]
  int i; // [esp+50h] [ebp-14h]
  void (__thiscall ***v16)(_DWORD, int); // [esp+54h] [ebp-10h]
  int v17; // [esp+60h] [ebp-4h]

  v14[0] = -1;
  v14[1] = 3200108;
  v14[2] = 3200109;
  v14[3] = 3200110;
  v14[4] = 3200111;
  v14[5] = 3200112;
  v14[6] = 3200113;
  v14[7] = 3200114;
  v14[8] = 3200115;
  for ( i = 0; i < *(this + 33); ++i )
    sub_5FBCB0(0, i + 100);
  v13 = operator new(0x178u);
  v17 = 0;
  if ( v13 )
  {
    sub_5EAAF0(v13);
    v10 = v1;
  }
  else
  {
    v10 = 0;
  }
  v17 = -1;
  v16 = v10;
  ((void (__thiscall *)(void (__thiscall ***)(_DWORD, int)))(*v10)[16])(v10);
  sub_5EAF00(v14[*(this + 32)]);
  *(this + 33) = sub_5EB240(v16) + 1;
  if ( v16 )
    (**v16)(v16, 1);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= *(this + 33) )
      break;
    v12 = operator new(0x1DCu);
    v17 = 1;
    if ( v12 )
    {
      Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v8);
      *v12 = &CasinoNavButton::`vftable';
      v9 = v12;
    }
    else
    {
      v9 = 0;
    }
    v17 = -1;
    sub_5F9DE0(v9, i + 100, v14[*(this + 32)], 0, 0, 1, &Source, -1, -1, -1, -1, 0);
    v7 = i;
    v6 = i;
    v5 = i;
    v4 = i;
    sub_5FB300(i + 100);
    sub_6023D0(v4, v5, v6, v7);
    v3 = sub_5FB300(i + 100);
    sub_602EB0(v3);
    sub_5FB300(i + 100);
    sub_602790(0);
    sub_5FB300(i + 100);
    sub_5EB700(1);
  }
  return result;
}


//======================================================================
// sub_5D2040
// entry 005d2040  size 171  status ok
//======================================================================

char *sub_5D2040()
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const char *v2; // [esp-4h] [ebp-20h]
  char *v3; // [esp+4h] [ebp-18h]

  CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left = 2;
  v2 = (const char *)sub_630F40("SID_GENERIC_HOYLEPLAYER");
  DisplayFormat = CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22));
  strcpy((char *)&DisplayFormat->rcSource.top, v2);
  CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->bmiHeader.biClrImportant = 0;
  v3 = (char *)sub_630F40("SID_CASINO_DEFAULTUSERFILENAME");
  return strcpy((char *)(**((_DWORD **)dword_162EE84 + 22) + 16), v3);
}


//======================================================================
// sub_5D20F0
// entry 005d20f0  size 142  status ok
//======================================================================

void __thiscall sub_5D20F0(_DWORD *this, int a2)
{
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-Ch]

  if ( a2 )
  {
    if ( a2 <= 0 || a2 >= 9 )
    {
      if ( a2 >= 100 )
        sub_5D2370(a2);
    }
    else
    {
      sub_5D16B0(this, a2);
    }
  }
  else if ( byte_795F95 )
  {
    v3 = (const CHAR *)sub_630F40("SID_CASINO_DEMO");
    v2 = (const CHAR *)sub_630F40("SID_CASINO_DEMOMESSAGE");
    sub_62FF10(v2, v3, 0);
  }
  else
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 820))(
      dword_162EE84,
      8,
      -1);
  }
}


//======================================================================
// sub_5D2180
// entry 005d2180  size 152  status ok
//======================================================================

int __stdcall sub_5D2180(int a1)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-2Ch]
  _DWORD v4[9]; // [esp+Ch] [ebp-24h]

  v4[0] = 3;
  v4[1] = 7;
  v4[2] = 5;
  v4[3] = 6;
  v4[4] = 4;
  v4[5] = 2;
  v4[6] = 8;
  v4[7] = 1;
  v4[8] = 0;
  v3 = sub_5FB2B0(3);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 176))(v3, v4[a1]);
  v1 = sub_5FB2B0(3);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 116))(v1, v1);
}


//======================================================================
// sub_5D2220
// entry 005d2220  size 175  status ok
//======================================================================

int __thiscall sub_5D2220(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-2Ch]
  _DWORD v5[9]; // [esp+Ch] [ebp-24h]

  v5[0] = 3;
  v5[1] = 7;
  v5[2] = 5;
  v5[3] = 6;
  v5[4] = 4;
  v5[5] = 2;
  v5[6] = 8;
  v5[7] = 1;
  v5[8] = 0;
  result = sub_5FB2B0(2);
  if ( result )
  {
    v3 = sub_5FB2B0(2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 176))(v3, v5[*(this + 32)]);
    v2 = sub_5FB2B0(2);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 116))(v2, v2);
  }
  return result;
}


//======================================================================
// sub_5D22D0
// entry 005d22d0  size 64  status ok
//======================================================================

int __thiscall sub_5D22D0(void *this)
{
  int result; // eax
  int v2; // eax

  result = sub_5FB2B0(3);
  if ( result )
  {
    v2 = sub_5FB2B0(3);
    return (*(int (__thiscall **)(int, int, void *))(*(_DWORD *)v2 + 112))(v2, v2, this);
  }
  return result;
}


//======================================================================
// sub_5D2310
// entry 005d2310  size 86  status ok
//======================================================================

bool sub_5D2310()
{
  return dword_16306B0 && (unsigned __int8)sub_5F8910(dword_16306B0)
      || dword_16306A4 && (unsigned __int8)sub_5F8910(dword_16306A4);
}


//======================================================================
// sub_5D2370
// entry 005d2370  size 162  status ok
//======================================================================

_DWORD *__thiscall sub_5D2370(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  switch ( *(this + 32) )
  {
    case 1:
      result = (_DWORD *)sub_5D34E0(a2);
      break;
    case 2:
      result = (_DWORD *)sub_5D3A40(a2);
      break;
    case 3:
      result = (_DWORD *)sub_5D29F0(a2);
      break;
    case 4:
      result = (_DWORD *)sub_5D3190(a2);
      break;
    case 5:
      result = (_DWORD *)sub_5D2EF0(a2);
      break;
    case 6:
      result = (_DWORD *)sub_5D26E0(a2);
      break;
    case 7:
      result = (_DWORD *)sub_5D24E0(a2);
      break;
    case 8:
      result = (_DWORD *)sub_5D2440(a2);
      break;
    default:
      result = this;
      break;
  }
  return result;
}


//======================================================================
// sub_5D2440
// entry 005d2440  size 126  status ok
//======================================================================

int __thiscall sub_5D2440(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 'd':
      result = sub_5D16B0(this, 2);
      break;
    case 'e':
      result = sub_5DC1C0(a2 - 100, this);
      break;
    case 'f':
      result = sub_5D16B0(this, 4);
      break;
    case 'g':
      result = sub_5D16B0(this, 3);
      break;
    case 'h':
      result = sub_5D16B0(this, 5);
      break;
    case 'i':
      result = sub_5D16B0(this, 6);
      break;
    case 'j':
      result = sub_5D16B0(this, 7);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D24E0
// entry 005d24e0  size 437  status ok
//======================================================================

int __thiscall sub_5D24E0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 'd':
      result = sub_5D16B0(this, 3);
      break;
    case 'e':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207047, 3207007);
      break;
    case 'f':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208026, 3208014);
      break;
    case 'g':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208026, 3208016);
      break;
    case 'h':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208026, 3208022);
      break;
    case 'i':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3217018, 3217013);
      break;
    case 'j':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207047, 3210000);
      break;
    case 'k':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3206000);
      break;
    case 'l':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3202000);
      break;
    case 'm':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3216000);
      break;
    case 'n':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3213000);
      break;
    case 'o':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3215000);
      break;
    case 'p':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3201000);
      break;
    case 'q':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3214000);
      break;
    case 'r':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3204000);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D26E0
// entry 005d26e0  size 676  status ok
//======================================================================

int __thiscall sub_5D26E0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 'd':
      result = sub_5D16B0(this, 1);
      break;
    case 'e':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207008);
      break;
    case 'f':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207013);
      break;
    case 'g':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207009);
      break;
    case 'h':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208020);
      break;
    case 'i':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208015);
      break;
    case 'j':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3217015, 3217013);
      break;
    case 'k':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3217016, 3217014);
      break;
    case 'l':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3204000);
      break;
    case 'm':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3204000);
      break;
    case 'n':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3204004);
      break;
    case 'o':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3204004);
      break;
    case 'p':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3204004);
      break;
    case 'q':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3201000);
      break;
    case 'r':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3201000);
      break;
    case 's':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3201000);
      break;
    case 't':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3233000);
      break;
    case 'u':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3233000);
      break;
    case 'v':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3204000);
      break;
    case 'w':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3206000);
      break;
    case 'x':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3202000);
      break;
    case 'y':
      result = sub_5D16B0(this, 7);
      break;
    case 'z':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3220022, 3220014);
      break;
    case '{':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3220023, 3220019);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D29F0
// entry 005d29f0  size 1109  status ok
//======================================================================

int __thiscall sub_5D29F0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 100:
      result = sub_5D16B0(this, 2);
      break;
    case 101:
      result = sub_5DC1C0(a2 - 100, this);
      break;
    case 102:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207028);
      break;
    case 103:
    case 105:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207031);
      break;
    case 104:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207035);
      break;
    case 106:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207034);
      break;
    case 107:
    case 108:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3210000);
      break;
    case 109:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208024, 3208022);
      break;
    case 110:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208025, 3208018);
      break;
    case 111:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208025, 3208019);
      break;
    case 112:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208024, 3208016);
      break;
    case 113:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3215000);
      break;
    case 114:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3215000);
      break;
    case 115:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3231000);
      break;
    case 116:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3231000);
      break;
    case 117:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3231000);
      break;
    case 118:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3215000);
      break;
    case 119:
    case 122:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207027);
      break;
    case 120:
    case 123:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207033);
      break;
    case 121:
    case 124:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207030);
      break;
    case 125:
    case 128:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207032);
      break;
    case 126:
    case 129:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207029);
      break;
    case 127:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207026);
      break;
    case 130:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207047, 3207024);
      break;
    case 131:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207044, 3207023);
      break;
    case 132:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207044, 3207025);
      break;
    case 133:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207044, 3207007);
      break;
    case 134:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208026, 3208014);
      break;
    case 135:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208026, 3208016);
      break;
    case 136:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208026, 3208022);
      break;
    case 137:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3217018, 3217013);
      break;
    case 138:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207047, 3210000);
      break;
    case 139:
      result = sub_5D16B0(this, 7);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D2EF0
// entry 005d2ef0  size 587  status ok
//======================================================================

int __thiscall sub_5D2EF0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 'd':
      result = sub_5DC1C0(a2 - 100, this);
      break;
    case 'e':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207028);
      break;
    case 'f':
    case 'h':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207031);
      break;
    case 'g':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207035);
      break;
    case 'i':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207034);
      break;
    case 'j':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3203001, -1);
      break;
    case 'k':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208014);
      break;
    case 'l':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208016);
      break;
    case 'm':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208021);
      break;
    case 'n':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208022);
      break;
    case 'o':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207041, 3207016);
      break;
    case 'p':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207042, 3207022);
      break;
    case 'q':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207040, 3207019);
      break;
    case 'r':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5011, 3202000);
      break;
    case 's':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3202000);
      break;
    case 't':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3202000);
      break;
    case 'u':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5011, 3206000);
      break;
    case 'v':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3206000);
      break;
    case 'w':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3206000);
      break;
    case 'x':
      result = sub_5D16B0(this, 7);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D3190
// entry 005d3190  size 732  status ok
//======================================================================

int __thiscall sub_5D3190(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 'd':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207028);
      break;
    case 'e':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207034);
      break;
    case 'f':
    case 'i':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207031);
      break;
    case 'g':
    case 'h':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3207035);
      break;
    case 'j':
      result = sub_5D16B0(this, 2);
      break;
    case 'k':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208020);
      break;
    case 'l':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208017);
      break;
    case 'm':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208015);
      break;
    case 'n':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3208023, 3208018);
      break;
    case 'o':
    case 'p':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3207039, 3211000);
      break;
    case 'q':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3214000);
      break;
    case 'r':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5011, 3214000);
      break;
    case 's':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3214000);
      break;
    case 't':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3232000);
      break;
    case 'u':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5011, 3232000);
      break;
    case 'v':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5012, 3213000);
      break;
    case 'w':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3213000);
      break;
    case 'x':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3213000);
      break;
    case 'y':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3232000);
      break;
    case 'z':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5010, 3232000);
      break;
    case '{':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5015, 3214000);
      break;
    case '|':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 5013, 3214000);
      break;
    case '}':
      result = sub_5D16B0(this, 7);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D34E0
// entry 005d34e0  size 1203  status ok
//======================================================================

int __thiscall sub_5D34E0(void *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 100:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3209000, -1);
      break;
    case 101:
    case 119:
    case 141:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207016);
      break;
    case 102:
    case 121:
    case 133:
    case 137:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207022);
      break;
    case 103:
    case 113:
    case 139:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207018);
      break;
    case 104:
    case 118:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207017);
      break;
    case 105:
    case 122:
    case 132:
    case 136:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207020);
      break;
    case 106:
    case 108:
    case 110:
    case 112:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3211000);
      break;
    case 107:
    case 109:
    case 111:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3210000);
      break;
    case 114:
    case 138:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207021);
      break;
    case 115:
    case 134:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207023);
      break;
    case 116:
    case 135:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207025);
      break;
    case 117:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207024);
      break;
    case 120:
    case 140:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207019);
      break;
    case 123:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207007);
      break;
    case 124:
    case 128:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207008);
      break;
    case 125:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207009);
      break;
    case 126:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207010);
      break;
    case 127:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207011);
      break;
    case 129:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207013);
      break;
    case 130:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207014);
      break;
    case 131:
      result = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 76))(this, 3207039, 3207015);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D3A40
// entry 005d3a40  size 182  status ok
//======================================================================

int __thiscall sub_5D3A40(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 'd':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3205001, -1);
      break;
    case 'e':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3205010, 3205002);
      break;
    case 'f':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3205010, 3205005);
      break;
    case 'g':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3205010, 3205007);
      break;
    case 'h':
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 76))(this, 3205010, 3205003);
      break;
    case 'i':
      result = sub_5D16B0(this, 8);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D3B10
// entry 005d3b10  size 1047  status ok
//======================================================================

int __thiscall sub_5D3B10(_DWORD *this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+8h] [ebp-A8h]
  int v4; // [esp+Ch] [ebp-A4h]
  int v5; // [esp+10h] [ebp-A0h]
  int v6; // [esp+14h] [ebp-9Ch]
  int v7; // [esp+18h] [ebp-98h]
  int v8; // [esp+1Ch] [ebp-94h]
  void *v10; // [esp+24h] [ebp-8Ch]
  void *v11; // [esp+2Ch] [ebp-84h]
  _BYTE v12[28]; // [esp+34h] [ebp-7Ch]
  int v13; // [esp+54h] [ebp-5Ch]
  int i; // [esp+58h] [ebp-58h]
  _DWORD v15[9]; // [esp+5Ch] [ebp-54h]
  _DWORD v16[9]; // [esp+80h] [ebp-30h]
  int v17; // [esp+ACh] [ebp-4h]

  v13 = 0;
  v16[0] = 0;
  v16[1] = 11;
  v16[2] = 2;
  v16[3] = 16;
  v16[4] = 11;
  v16[5] = 10;
  v16[6] = 7;
  v16[7] = 17;
  v16[8] = 24;
  v15[0] = -1;
  v15[1] = 3205240;
  v15[2] = 3205220;
  v15[3] = 3205180;
  v15[4] = 3205200;
  v15[5] = 3205260;
  v15[6] = 3205230;
  v15[7] = 3205160;
  v15[8] = 3205130;
  for ( i = 0; i < 25; ++i )
  {
    if ( sub_5FB2B0(i + 10) )
    {
      sub_5FB2B0(i + 10);
      sub_5F5D50(0);
      v8 = sub_5FB2B0(i + 10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 112))(v8);
      sub_5FBC80(0, i + 10);
    }
  }
  for ( i = 0; i < v16[*(this + 32)]; ++i )
  {
    v11 = operator new(0x184u);
    v17 = 0;
    if ( v11 )
      v7 = sub_5F5BF0(v11);
    else
      v7 = 0;
    v17 = -1;
    sub_5F9CE0(v7, i + 10, i + v15[*(this + 32)], 0, 0, 1, 0, 255, 0);
    v6 = sub_5FB2B0(i + 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 112))(v6);
  }
  v13 = sub_62FC30(1, v16[*(this + 32)] / 3);
  for ( i = 0; i < 25; ++i )
    v12[i] = 0;
  for ( i = 0; i < v13; ++i )
    v12[sub_62FBF0(v16[*(this + 32)])] = 1;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= v16[*(this + 32)] )
      break;
    if ( v12[i] )
    {
      v5 = sub_5FB2B0(i + 10);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 176))(v5, 0);
      v4 = sub_5FB2B0(i + 10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 116))(v4);
      v2 = sub_62FC30(4, 8);
      *(_DWORD *)(sub_5FB2B0(i + 10) + 376) = v2;
      v10 = operator new(0x20u);
      v17 = 1;
      if ( v10 )
        v3 = sub_6010A0(0);
      else
        v3 = 0;
      v17 = -1;
      sub_5FB2B0(i + 10);
      sub_5F5D50(v3);
    }
  }
  return result;
}


//======================================================================
// sub_5D3F30
// entry 005d3f30  size 712  status ok
//======================================================================

int __thiscall sub_5D3F30(_DWORD *this, int a2)
{
  const char *v2; // eax
  int result; // eax
  _DWORD *v4; // [esp+4h] [ebp-C0h]
  _DWORD *v6; // [esp+Ch] [ebp-B8h]
  int v7; // [esp+18h] [ebp-ACh]
  int v8; // [esp+1Ch] [ebp-A8h]
  char Str2[132]; // [esp+20h] [ebp-A4h] BYREF
  int v10; // [esp+A8h] [ebp-1Ch]
  int v11; // [esp+ACh] [ebp-18h]
  int v12; // [esp+B0h] [ebp-14h]
  int v13; // [esp+B4h] [ebp-10h]
  int v14; // [esp+C0h] [ebp-4h]

  sub_5D4280(Str2, a2);
  if ( !*(this + 34)
    || !(unsigned __int8)sub_5F54A0(*(this + 34))
    || (v2 = (const char *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 34) + 184))(*(this + 34)),
        (result = strcmp(v2, Str2)) != 0) )
  {
    if ( !*(this + 34) )
    {
      v6 = operator new(0x1D4u);
      v14 = 0;
      if ( v6 )
        v4 = sub_5CD360(v6);
      else
        v4 = 0;
      v14 = -1;
      *(this + 34) = v4;
    }
    sub_5EC8F0(Str2, 4, 65, 15, 0, 0, 5000, 48, -1);
    v7 = sub_5EEF60(*(this + 34)) + 10;
    sub_5ECC60(v7);
    v10 = sub_5EF440(*(this + 34));
    sub_5ECCB0(v10);
    sub_5EE8C0(230, 230, 255);
    v12 = unknown_libname_620(*((_DWORD *)dword_162EE84 + 5));
    v13 = unknown_libname_621(*((_DWORD *)dword_162EE84 + 5));
    v11 = v13 - v10 - 18;
    if ( v11 < 0 )
      v11 = 0;
    if ( v10 + v11 > 480 )
      v11 = 480 - v10;
    v8 = v12;
    if ( v12 < 0 )
      v8 = 0;
    if ( v7 + v8 > 640 )
      v8 = 640 - v7;
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 34) + 68))(*(this + 34), v8, v11);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 34) + 116))(*(this + 34));
  }
  return result;
}


//======================================================================
// sub_5D4200
// entry 005d4200  size 113  status ok
//======================================================================

int __thiscall sub_5D4200(int *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 34) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 34) + 112))(*(this + 34));
    result = *(this + 34);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 34))(*(this + 34), 1);
    *(this + 34) = 0;
  }
  return result;
}


//======================================================================
// sub_5D4280
// entry 005d4280  size 328  status ok
//======================================================================

char *__thiscall sub_5D4280(_DWORD *this, char *Destination, int a3)
{
  char *result; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  int v12; // [esp+8h] [ebp-4h]

  v12 = a3 - 100;
  result = (char *)(*(this + 32) - 1);
  switch ( *(this + 32) )
  {
    case 1:
      v4 = (const char *)sub_630F80("SID_NAV_SLOTS_HOTSPOT", v12);
      result = strcpy(Destination, v4);
      break;
    case 2:
      v5 = (const char *)sub_630F80("SID_NAV_POKER_HOTSPOT", v12);
      result = strcpy(Destination, v5);
      break;
    case 3:
      v6 = (const char *)sub_630F80("SID_NAV_NE_HOTSPOT", v12);
      result = strcpy(Destination, v6);
      break;
    case 4:
      v7 = (const char *)sub_630F80("SID_NAV_NW_HOTSPOT", v12);
      result = strcpy(Destination, v7);
      break;
    case 5:
      v8 = (const char *)sub_630F80("SID_NAV_SW_HOTSPOT", v12);
      result = strcpy(Destination, v8);
      break;
    case 6:
      v9 = (const char *)sub_630F80("SID_NAV_SE_HOTSPOT", v12);
      result = strcpy(Destination, v9);
      break;
    case 7:
      v10 = (const char *)sub_630F80("SID_NAV_HIGHROLLERS_HOTSPOT", v12);
      result = strcpy(Destination, v10);
      break;
    case 8:
      v11 = (const char *)sub_630F80("SID_NAV_MAINVIEW_HOTSPOT", v12);
      result = strcpy(Destination, v11);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_5D43F0
// entry 005d43f0  size 241  status ok
//======================================================================

int __thiscall sub_5D43F0(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch]

  if ( !*(this + 35) )
  {
    if ( operator new(0x180u) )
      v3 = sub_5D48C0();
    else
      v3 = 0;
    *(this + 35) = v3;
  }
  sub_5EAE80(1101005, 0, 0, 5000, -1);
  v1 = sub_5EB240(*(this + 35));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 35) + 176))(*(this + 35), v1);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 35) + 116))(*(this + 35));
}


//======================================================================
// sub_5D44F0
// entry 005d44f0  size 113  status ok
//======================================================================

int __thiscall sub_5D44F0(int *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 35) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 35) + 112))(*(this + 35));
    result = *(this + 35);
    if ( result )
      result = (**(int (__thiscall ***)(_DWORD, int))*(this + 35))(*(this + 35), 1);
    *(this + 35) = 0;
  }
  return result;
}


//======================================================================
// sub_5D4570
// entry 005d4570  size 200  status ok
//======================================================================

int __thiscall sub_5D4570(pairNode *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]

  result = a2;
  if ( !*(_BYTE *)(a2 + 4) )
  {
    sub_602020(a2);
    if ( (*(unsigned __int8 (__thiscall **)(pairNode *, int))(*(_DWORD *)this + 132))(this, a2) )
    {
      v3 = pairNode::raw_length(this);
      result = sub_5D3F30((_DWORD *)dword_7947DC, v3);
      *(_BYTE *)(a2 + 4) = 1;
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(dword_7947DC + 132); ++i )
      {
        v4 = sub_5FB300(i + 100);
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 132))(v4, a2);
        if ( (_BYTE)result )
          return result;
      }
      return sub_5D4200((int *)dword_7947DC);
    }
  }
  return result;
}


//======================================================================
// sub_5D4640
// entry 005d4640  size 170  status ok
//======================================================================

int __thiscall sub_5D4640(pairNode *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]

  sub_602020(a2);
  if ( (*(unsigned __int8 (__thiscall **)(pairNode *, int))(*(_DWORD *)this + 132))(this, a2) )
  {
    v2 = pairNode::raw_length(this);
    result = sub_5D2180(v2);
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    for ( i = 0; i < 9; ++i )
    {
      v4 = sub_5FB300(i);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 132))(v4, a2);
      if ( (_BYTE)result )
        return result;
    }
    return sub_5D22D0((void *)dword_7947DC);
  }
  return result;
}


//======================================================================
// sub_5D46F0
// entry 005d46f0  size 426  status ok
//======================================================================

int __thiscall sub_5D46F0(void *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-34h]
  int v3; // [esp+8h] [ebp-30h]
  int v4; // [esp+Ch] [ebp-2Ch]
  int v5; // [esp+10h] [ebp-28h]

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      sub_5D1D60((void *)dword_7947DC);
      sub_5D2220((_DWORD *)dword_7947DC);
      return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 2, 0);
    }
    else if ( result == 2 )
    {
      sub_5D3B10((_DWORD *)dword_7947DC);
      (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, 70);
      v3 = sub_5FB2B0(0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 116))(v3);
      v2 = sub_5FB2B0(1);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 112))(v2);
    }
  }
  else
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, 1);
    if ( operator new(0x20u) )
      v5 = sub_6010A0(0);
    else
      v5 = 0;
    sub_5FB2B0(0);
    sub_5F5D50(v5);
    if ( operator new(0x20u) )
      v4 = sub_6010A0(this);
    else
      v4 = 0;
    sub_5FB2B0(1);
    return sub_5F5D50(v4);
  }
  return result;
}


//======================================================================
// sub_5D48A0
// entry 005d48a0  size 22  status ok
//======================================================================

int sub_5D48A0()
{
  return sub_5D44F0((int *)dword_7947DC);
}


//======================================================================
// sub_5D48C0
// entry 005d48c0  size 455  status ok
//======================================================================

_DWORD *__thiscall sub_5D48C0(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-38h]
  _DWORD *v4; // [esp+4h] [ebp-34h]
  int v5; // [esp+8h] [ebp-30h]
  int v6; // [esp+Ch] [ebp-2Ch]
  _DWORD *v8; // [esp+14h] [ebp-24h]
  void *v9; // [esp+24h] [ebp-14h]

  sub_5EAAF0(this);
  *this = &CasinoFaceDemoBackground::`vftable';
  v9 = operator new(0x184u);
  if ( v9 )
    v6 = sub_5F5BF0(v9);
  else
    v6 = 0;
  *(this + 94) = v6;
  sub_5EAE80(1101005, 0, 0, 5001, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 94) + 116))(*(this + 94));
  *(_DWORD *)(*(this + 94) + 376) = 75;
  if ( operator new(0x20u) )
  {
    v1 = sub_5EB240(*(this + 94));
    v5 = sub_5D4B80(v1 - 1);
  }
  else
  {
    v5 = 0;
  }
  sub_5F5D50(v5);
  v8 = operator new(0x1DCu);
  if ( v8 )
  {
    Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v3);
    *v8 = &CasinoExitFaceDemoButton::`vftable';
    v4 = v8;
  }
  else
  {
    v4 = 0;
  }
  *(this + 95) = v4;
  sub_5EAE80(1101006, 0, 0, 5002, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 95) + 116))(*(this + 95));
  return this;
}


//======================================================================
// sub_5D4A90
// entry 005d4a90  size 186  status ok
//======================================================================

void __thiscall sub_5D4A90(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CasinoFaceDemoBackground::`vftable';
  if ( *(this + 94) )
    (***(this + 94))(*(this + 94), 1);
  if ( *(this + 95) )
    (***(this + 95))(*(this + 95), 1);
  sub_5EAC00(this);
}


//======================================================================
// sub_5D4B50
// entry 005d4b50  size 47  status ok
//======================================================================

int __thiscall sub_5D4B50(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 132))(this, a2);
  if ( (_BYTE)result )
    *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_5D4B80
// entry 005d4b80  size 39  status ok
//======================================================================

_DWORD *__thiscall sub_5D4B80(_DWORD *this, int a2)
{
  sub_600F30(a2, 0);
  *this = &CasinoFaceDemoCycler::`vftable';
  return this;
}


//======================================================================
// sub_5D4BD0
// entry 005d4bd0  size 130  status ok
//======================================================================

int __thiscall sub_5D4BD0(CMFCToolBarsCustomizeDialog **this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (*((int (__thiscall **)(CMFCToolBarsCustomizeDialog **))*this + 4))(this);
    result = CMFCToolBarsCustomizeDialog::GetFlags(*(this + 1));
    if ( result != v3 )
    {
      if ( (CMFCToolBarsCustomizeDialog *)v3 == *(this + 7) )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), 0);
      else
        return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), v3);
    }
  }
  return result;
}


//======================================================================
// sub_5D4CF0
// entry 005d4cf0  size 602  status ok
//======================================================================

char *__thiscall sub_5D4CF0(char *this)
{
  int i; // [esp+50h] [ebp-10h]

  sub_63A0C0(this);
  *(_DWORD *)this = &CasinoPlayer::`vftable';
  *((_DWORD *)this + 295) = 0;
  for ( i = 0; i < 30; ++i )
  {
    *((_DWORD *)this + i + 235) = 0;
    *((_DWORD *)this + i + 265) = 0;
  }
  *(this + 1184) = 0;
  *(this + 1185) = 0;
  *(this + 1186) = 0;
  *((_DWORD *)this + 297) = 0;
  *((_DWORD *)this + 298) = 0;
  *((_DWORD *)this + 299) = 1;
  *(this + 1200) = 0;
  *(this + 1201) = 0;
  *(_QWORD *)(this + 1260) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1252) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1204) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1212) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1236) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1244) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1220) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1228) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1236) = sub_64C8A0(0, 0);
  return this;
}


//======================================================================
// sub_5D4F50
// entry 005d4f50  size 152  status ok
//======================================================================

int __thiscall sub_5D4F50(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&CasinoPlayer::`vftable';
  if ( *(this + 295) )
    (***(this + 295))(*(this + 295), 1);
  sub_5D6550(this);
  sub_5D6600(this);
  return sub_63A120();
}


//======================================================================
// sub_5D4FF0
// entry 005d4ff0  size 200  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__thiscall sub_5D4FF0(
        int this,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  __int64 v4; // [esp+4h] [ebp-18h]
  __int64 v5; // [esp+Ch] [ebp-10h]

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 812))(
    dword_162EE84,
    ExecutingCollection,
    *(_DWORD *)(*(_DWORD *)(this + 936) + 4 * (_DWORD)ExecutingCollection));
  result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  if ( ExecutingCollection == result )
  {
    *(_QWORD *)(this + 1236) = sub_64C8A0(0, 0);
    v5 = sub_64C8A0(0, 0);
    sub_5D5F80(v5, HIDWORD(v5));
    v4 = sub_64C8A0(0, 0);
    return (struct Concurrency::details::_TaskCollectionBase *)sub_5D6050(v4, HIDWORD(v4));
  }
  return result;
}


//======================================================================
// sub_5D50C0
// entry 005d50c0  size 543  status ok
//======================================================================

int __thiscall sub_5D50C0(void **this)
{
  int k; // [esp+4h] [ebp-20h]
  int v4; // [esp+8h] [ebp-1Ch]
  int v5; // [esp+10h] [ebp-14h]
  int v6; // [esp+18h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-8h]
  int j; // [esp+1Ch] [ebp-8h]
  int v9; // [esp+20h] [ebp-4h]

  v4 = sub_5D52E0(this);
  memset(*(this + 233), 0, 0x76F4u);
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
          dword_162EE84,
          -1)
    || dword_16306B0 )
  {
    *(_DWORD *)v4 = 5000;
    *(_DWORD *)(v4 + 4) = 0;
  }
  else
  {
    (*(void (__thiscall **)(int, void **))(*(_DWORD *)dword_7947E4 + 612))(dword_7947E4, this);
  }
  v9 = sub_62FBF0(10000);
  v6 = sub_62FBF0(10000);
  v5 = sub_62FBF0(10000);
  sprintf((char *const)(v4 + 16), "%04d  %04d  %04d  %04d", 7777, v9, v6, v5);
  *(_BYTE *)(v4 + 40) = 1;
  *(_BYTE *)(v4 + 41) = 0;
  *(_BYTE *)(v4 + 42) = 0;
  *(_BYTE *)(v4 + 48) = 1;
  *(_BYTE *)(v4 + 93) = 1;
  for ( i = 0; i < 22; ++i )
  {
    *(_BYTE *)(i + v4 + 49) = 1;
    *(_BYTE *)(i + v4 + 71) = 0;
  }
  *(_BYTE *)(v4 + 63) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_BYTE *)(v4 + 94) = 2;
  for ( j = 0; j < 100; ++j )
  {
    *(_BYTE *)(v4 + 36 * j + 96) = -1;
    *(_BYTE *)(v4 + 36 * j + 97) = 1;
    *(_BYTE *)(v4 + 36 * j + 98) = 1;
    *(_BYTE *)(v4 + 36 * j + 99) = 0;
    *(_BYTE *)(v4 + 36 * j + 100) = 0;
    *(_DWORD *)(v4 + 36 * j + 124) = 0;
    *(_DWORD *)(v4 + 36 * j + 128) = -1000;
    for ( k = 0; k < 20; ++k )
      *(_BYTE *)(v4 + k + 36 * j + 101) = 0;
  }
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  return v4;
}


//======================================================================
// sub_5D52E0
// entry 005d52e0  size 374  status ok
//======================================================================

int __thiscall sub_5D52E0(CImageDisplay *this)
{
  int v2; // eax
  char *Str1; // [esp+Ch] [ebp-24h]
  char *Str2; // [esp+10h] [ebp-20h]
  CImageDisplay *v7; // [esp+18h] [ebp-18h]
  int i; // [esp+2Ch] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 828))(dword_7947E0, -1)
    && (int)sub_5DE320(*((_DWORD *)this + 1)) > 1 )
  {
    if ( CImageDisplay::GetDisplayFormat(this)->rcSource.left == 1 )
      return *((_DWORD *)this + 233);
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84)
       && i != *((_DWORD *)this + 1);
          ++i )
    {
      v7 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i);
      if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
      {
        Str2 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i))->rcSource.top;
        Str1 = (char *)&CImageDisplay::GetDisplayFormat(this)->rcSource.top;
        if ( !strcmp(Str1, Str2) )
        {
          v2 = sub_5DCB00(i);
          return sub_5D52E0(v2);
        }
      }
    }
  }
  return *((_DWORD *)this + 233);
}


//======================================================================
// sub_5D5460
// entry 005d5460  size 22  status ok
//======================================================================

char __thiscall sub_5D5460(CImageDisplay *this)
{
  return *(_BYTE *)(sub_5D52E0(this) + 40);
}


//======================================================================
// sub_5D5480
// entry 005d5480  size 27  status ok
//======================================================================

int __thiscall sub_5D5480(CImageDisplay *this, char a2)
{
  int result; // eax

  result = sub_5D52E0(this);
  *(_BYTE *)(result + 40) = a2;
  return result;
}


//======================================================================
// sub_5D54A0
// entry 005d54a0  size 83  status ok
//======================================================================

bool __thiscall sub_5D54A0(CImageDisplay *this, struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  int v4; // [esp+Ch] [ebp+8h]

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v4 = (*(int (__thiscall **)(int, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_7947E0 + 988))(
         dword_7947E0,
         ExecutingCollection);
  return *(_BYTE *)(sub_5D52E0(this) + v4 + 49) != 0;
}


//======================================================================
// sub_5D5500
// entry 005d5500  size 80  status ok
//======================================================================

int __thiscall sub_5D5500(
        CImageDisplay *this,
        char a2,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  int result; // eax
  int v5; // [esp+10h] [ebp+Ch]

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v5 = (*(int (__thiscall **)(int, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_7947E0 + 988))(
         dword_7947E0,
         ExecutingCollection);
  result = sub_5D52E0(this);
  *(_BYTE *)(result + v5 + 49) = a2;
  return result;
}


//======================================================================
// sub_5D5550
// entry 005d5550  size 54  status ok
//======================================================================

bool __thiscall sub_5D5550(CImageDisplay *this, struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  return *((_BYTE *)ExecutingCollection + sub_5D52E0(this) + 71) != 0;
}


//======================================================================
// sub_5D5590
// entry 005d5590  size 51  status ok
//======================================================================

int __thiscall sub_5D5590(
        CImageDisplay *this,
        char a2,
        struct Concurrency::details::_TaskCollectionBase *ExecutingCollection)
{
  int result; // eax

  if ( ExecutingCollection == (struct Concurrency::details::_TaskCollectionBase *)-1 )
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  result = sub_5D52E0(this);
  *((_BYTE *)ExecutingCollection + result + 71) = a2;
  return result;
}


//======================================================================
// sub_5D55D0
// entry 005d55d0  size 303  status ok
//======================================================================

int __thiscall sub_5D55D0(int this)
{
  __int64 v1; // rax

  *(_BYTE *)(this + 1185) = 0;
  *(_BYTE *)(this + 1184) = 0;
  *(_BYTE *)(this + 1186) = 0;
  *(_DWORD *)(this + 1188) = 0;
  *(_DWORD *)(this + 1192) = 0;
  *(_QWORD *)(this + 1204) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1212) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1220) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1228) = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1236) = sub_64C8A0(0, 0);
  v1 = sub_64C8A0(0, 0);
  *(_QWORD *)(this + 1244) = v1;
  return v1;
}


//======================================================================
// sub_5D5780
// entry 005d5780  size 178  status ok
//======================================================================

char __thiscall sub_5D5780(CImageDisplay *this)
{
  DWORD v2; // eax
  _DWORD v4[12]; // [esp+Ch] [ebp-38h]
  int v5; // [esp+3Ch] [ebp-8h]
  int i; // [esp+40h] [ebp-4h]

  v4[0] = 0;
  v4[1] = 2;
  v4[2] = 4;
  v4[3] = 6;
  v4[4] = 8;
  v4[5] = 10;
  v4[6] = 12;
  v4[7] = 14;
  v4[8] = 16;
  v4[9] = 18;
  v4[10] = 20;
  v4[11] = 22;
  v5 = 12;
  if ( CImageDisplay::GetDisplayFormat(this)->rcSource.left == 3 )
    return 1;
  for ( i = 0; i < v5; ++i )
  {
    v2 = sub_4842B0(this);
    if ( v2 == v4[i] )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_5D5840
// entry 005d5840  size 53  status ok
//======================================================================

bool __thiscall sub_5D5840(void *this)
{
  int v1; // esi

  v1 = sub_5D5A50(this);
  return v1 >= (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E4 + 688))(dword_7947E4);
}


//======================================================================
// sub_5D58D0
// entry 005d58d0  size 68  status ok
//======================================================================

bool __thiscall sub_5D58D0(int *this)
{
  return *(this + 307) < 0 || !*(this + 307) && *(this + 308) < 0;
}


//======================================================================
// sub_5D5920
// entry 005d5920  size 68  status ok
//======================================================================

bool __thiscall sub_5D5920(int *this)
{
  return *(this + 307) > 0 || !*(this + 307) && *(this + 308) > 0;
}


//======================================================================
// sub_5D5970
// entry 005d5970  size 38  status ok
//======================================================================

_DWORD *__thiscall sub_5D5970(CImageDisplay *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // edx

  v2 = sub_5D52E0(this);
  v3 = *(_DWORD *)(v2 + 12);
  *a2 = *(_DWORD *)(v2 + 8);
  a2[1] = v3;
  return a2;
}


//======================================================================
// sub_5D59E0
// entry 005d59e0  size 105  status ok
//======================================================================

const struct tagVIDEOINFO *__thiscall sub_5D59E0(CImageDisplay *this, int a2, int a3)
{
  int v3; // eax
  const struct tagVIDEOINFO *result; // eax

  v3 = sub_5D52E0(this);
  *(_DWORD *)(v3 + 8) = a2;
  *(_DWORD *)(v3 + 12) = a3;
  result = (const struct tagVIDEOINFO *)CImageDisplay::GetDisplayFormat(this)->rcSource.left;
  if ( result == (const struct tagVIDEOINFO *)2 )
    return (const struct tagVIDEOINFO *)sub_63B0A0(this);
  result = CImageDisplay::GetDisplayFormat(this);
  if ( result->rcSource.left == 3 )
    return (const struct tagVIDEOINFO *)sub_63B0A0(this);
  return result;
}


//======================================================================
// sub_5D5A50
// entry 005d5a50  size 27  status ok
//======================================================================

int sub_5D5A50()
{
  _BYTE v1[8]; // [esp+4h] [ebp-8h] BYREF

  return *(_DWORD *)sub_5D5A90(v1);
}


//======================================================================
// sub_5D5A70
// entry 005d5a70  size 28  status ok
//======================================================================

int sub_5D5A70()
{
  _BYTE v1[8]; // [esp+4h] [ebp-8h] BYREF

  return *(_DWORD *)(sub_5D5A90(v1) + 4);
}


//======================================================================
// sub_5D5A90
// entry 005d5a90  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_5D5A90(CImageDisplay *this, _DWORD *a2)
{
  _DWORD *v2; // eax
  int v3; // edx

  v2 = (_DWORD *)sub_5D52E0(this);
  v3 = v2[1];
  *a2 = *v2;
  a2[1] = v3;
  return a2;
}


//======================================================================
// sub_5D5AC0
// entry 005d5ac0  size 40  status ok
//======================================================================

_DWORD *__thiscall sub_5D5AC0(CImageDisplay *this, _DWORD *a2)
{
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v6; // [esp+4h] [ebp-8h] BYREF

  v2 = sub_5D5A90(this, &v6);
  v3 = *v2;
  v4 = v2[1];
  *a2 = v3;
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_5D5AF0
// entry 005d5af0  size 507  status ok
//======================================================================

int __thiscall sub_5D5AF0(int this, int a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int result; // eax
  __int64 v8; // [esp-8h] [ebp-4Ch]
  bool v9; // [esp+0h] [ebp-44h]
  bool v10; // [esp+4h] [ebp-40h]
  bool v11; // [esp+8h] [ebp-3Ch]
  char *Source; // [esp+20h] [ebp-24h]
  _BYTE v14[8]; // [esp+2Ch] [ebp-18h] BYREF
  __int64 v15; // [esp+34h] [ebp-10h]
  int v16; // [esp+3Ch] [ebp-8h] BYREF

  v3 = (_DWORD *)sub_5D52E0((CImageDisplay *)this);
  *v3 = a2;
  v3[1] = a3;
  if ( *(_DWORD *)(this + 4) != -1 )
    sub_5DE200(*(_DWORD *)(this + 4));
  v11 = CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 2
     || CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 3;
  if ( v11 && !(unsigned __int8)sub_5DA830(dword_7947E4) && (unsigned __int8)sub_5D6C60(this) )
  {
    if ( !*(_BYTE *)(this + 1201) && (unsigned __int8)sub_5D6E70(this) )
    {
      sub_5D6EE0(0);
      Source = (char *)&CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.top;
      sub_5DC520(Source);
    }
    if ( (unsigned __int8)sub_5D6F90(this) )
      sub_5DC3E0(this);
  }
  if ( (unsigned __int8)sub_5DA7B0(dword_7947E4) )
  {
    v10 = CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 2
       || CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 3;
    if ( v10 && !*(_BYTE *)(dword_7947E0 + 20229) )
    {
      v4 = sub_5DA880(dword_7947E4);
      v15 = sub_64C8A0(v4, 0);
      v8 = v15;
      sub_5D5A90((CImageDisplay *)this, &v16);
      v5 = (_DWORD *)sub_64C630(v14, v8, HIDWORD(v8));
      v6 = v5[1];
      *(_DWORD *)(this + 1236) = *v5;
      *(_DWORD *)(this + 1240) = v6;
    }
  }
  v9 = CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 2
    || CImageDisplay::GetDisplayFormat((CImageDisplay *)this)->rcSource.left == 3;
  result = v9;
  if ( v9 )
    return sub_63B0A0(this);
  return result;
}


//======================================================================
// sub_5D5CF0
// entry 005d5cf0  size 227  status ok
//======================================================================

int __thiscall sub_5D5CF0(CImageDisplay *this, int a2, int a3)
{
  int result; // eax
  int *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // [esp-8h] [ebp-2Ch]
  int v8; // [esp-4h] [ebp-28h]
  int v10; // [esp+4h] [ebp-20h] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v12[8]; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+1Ch] [ebp-8h] BYREF

  result = sub_5D5A50();
  if ( result < 1000000000 )
  {
    sub_5D5A90(this, &v13);
    v4 = (int *)sub_64C5C0(v12, a2, a3);
    sub_5D5AF0((int)this, *v4, v4[1]);
    (*(void (__thiscall **)(int, CImageDisplay *, _DWORD, int, int))(*(_DWORD *)dword_7947E4 + 672))(
      dword_7947E4,
      this,
      *((_DWORD *)this + 1),
      a2,
      a3);
    v5 = sub_5D5A90(this, &v11);
    sub_5E7E40(*((_DWORD *)this + 1), 0, *v5, v5[1]);
    v8 = *((_DWORD *)this + 314);
    v7 = *((_DWORD *)this + 313);
    v6 = sub_5D5A90(this, &v10);
    return sub_5E7E90(*((_DWORD *)this + 1), 2, *v6, v6[1], (char *)this + 1260, v7, v8);
  }
  return result;
}


//======================================================================
// sub_5D5DE0
// entry 005d5de0  size 36  status ok
//======================================================================

_DWORD *__thiscall sub_5D5DE0(_DWORD *this, _DWORD *a2)
{
  int v2; // edx

  v2 = *(this + 304);
  *a2 = *(this + 303);
  a2[1] = v2;
  return a2;
}


//======================================================================
// sub_5D5E10
// entry 005d5e10  size 146  status ok
//======================================================================

int __fastcall sub_5D5E10(CImageDisplay *a1, int a2, int a3, int a4)
{
  int result; // eax
  LONG left; // [esp+4h] [ebp-4h]

  *((_DWORD *)a1 + 303) = a3;
  *((_DWORD *)a1 + 304) = a4;
  result = (int)a1;
  if ( *((int *)a1 + 303) < 0 || *((int *)a1 + 304) < 0 )
    result = sub_5E9F20((char)"currentBet.dollars >= 0 && currentBet.cents >= 0", "..\\Casino\\casinoplayer.cpp", 436);
  if ( dword_162EE80 )
  {
    result = dword_7947E4;
    if ( *(_DWORD *)(dword_7947E4 + 104) )
    {
      left = CImageDisplay::GetDisplayFormat(a1)->rcSource.left;
      result = left == 0;
      if ( left )
        return sub_5CA8B0(*(_DWORD ***)(dword_7947E4 + 104));
    }
  }
  return result;
}


//======================================================================
// sub_5D5F30
// entry 005d5f30  size 20  status ok
//======================================================================

int __thiscall sub_5D5F30(_DWORD *this)
{
  return *(this + 303);
}


//======================================================================
// sub_5D5F80
// entry 005d5f80  size 34  status ok
//======================================================================

_DWORD *__thiscall sub_5D5F80(_DWORD *this, int a2, int a3)
{
  *(this + 305) = a2;
  *(this + 306) = a3;
  return this;
}


//======================================================================
// sub_5D5FB0
// entry 005d5fb0  size 109  status ok
//======================================================================

int __thiscall sub_5D5FB0(_DWORD *this, int a2, int a3)
{
  int *v3; // eax
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  sub_5D6080(a2, a3);
  v3 = (int *)sub_64C5C0(v6, a2, a3);
  sub_5D5F80(this, *v3, v3[1]);
  return sub_5E7E40(*(this + 1), 1, *(this + 305), *(this + 306));
}


//======================================================================
// sub_5D6020
// entry 005d6020  size 36  status ok
//======================================================================

_DWORD *__thiscall sub_5D6020(_DWORD *this, _DWORD *a2)
{
  int v2; // edx

  v2 = *(this + 308);
  *a2 = *(this + 307);
  a2[1] = v2;
  return a2;
}


//======================================================================
// sub_5D6050
// entry 005d6050  size 34  status ok
//======================================================================

_DWORD *__thiscall sub_5D6050(_DWORD *this, int a2, int a3)
{
  *(this + 307) = a2;
  *(this + 308) = a3;
  return this;
}


//======================================================================
// sub_5D6080
// entry 005d6080  size 56  status ok
//======================================================================

_DWORD *__thiscall sub_5D6080(_DWORD *this, int a2, int a3)
{
  int *v3; // eax
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (int *)sub_64C5C0(v6, a2, a3);
  return sub_5D6050(this, *v3, v3[1]);
}


//======================================================================
// sub_5D60C0
// entry 005d60c0  size 1167  status ok
//======================================================================

int __thiscall sub_5D60C0(_DWORD *this, int a2, unsigned __int8 a3, char a4)
{
  int result; // eax
  int v5; // eax
  int v6; // [esp+8h] [ebp-9Ch]
  void *v8; // [esp+14h] [ebp-90h]
  int v9; // [esp+28h] [ebp-7Ch]
  int v10; // [esp+2Ch] [ebp-78h]
  _DWORD v11[18]; // [esp+30h] [ebp-74h]
  int v12; // [esp+78h] [ebp-2Ch]
  unsigned __int8 v13; // [esp+7Fh] [ebp-25h]
  int v14; // [esp+80h] [ebp-24h]
  int v15; // [esp+84h] [ebp-20h]
  int v16; // [esp+88h] [ebp-1Ch]
  int i; // [esp+8Ch] [ebp-18h]
  int v18; // [esp+90h] [ebp-14h]
  int v19; // [esp+94h] [ebp-10h]
  int v20; // [esp+A0h] [ebp-4h]

  v10 = 0;
  v11[0] = 100000000;
  v11[1] = &unk_989680;
  v11[2] = 1000000;
  v11[3] = 500000;
  v11[4] = 100000;
  v11[5] = 50000;
  v11[6] = 25000;
  v11[7] = 10000;
  v11[8] = 5000;
  v11[9] = 1000;
  v11[10] = 500;
  v11[11] = 100;
  v11[12] = 50;
  v11[13] = 25;
  v11[14] = 10;
  v11[15] = 5;
  v11[16] = 1;
  v11[17] = 0;
  v12 = 100000000;
  v15 = 0;
  v19 = a2;
  result = a3;
  v13 = a3;
  if ( !a4 )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 20))(this);
    if ( v19 || v13 )
    {
      while ( v12 > 0 )
      {
        v9 = v19 / v12;
        v19 %= v12;
        for ( i = 0; i < v9; ++i )
        {
          v16 = sub_646E40(*(this + 8)) + 75;
          v18 = sub_646E70(*(this + 8)) + 81;
          if ( v10 <= 5 || v10 >= 16 )
          {
            if ( v10 == 16 )
            {
              v14 = 0;
            }
            else if ( v10 <= 2 )
            {
              v14 = 32;
            }
            else
            {
              v14 = 31;
            }
          }
          else
          {
            v14 = 3 * (16 - v10) + sub_62FBF0(3) - 2;
          }
          v8 = operator new(0x178u);
          v20 = 1;
          if ( v8 )
          {
            sub_5EAAF0(v8);
            v6 = v5;
          }
          else
          {
            v6 = 0;
          }
          v20 = -1;
          *(this + v15 + 265) = v6;
          sub_5EAE80(4010, v16, v18 - 2 * v15, v15 + 201, -1);
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v15 + 265) + 176))(*(this + v15 + 265), v14);
          result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + v15 + 265) + 116))(*(this + v15 + 265));
          if ( ++v15 == 30 )
            return result;
        }
        result = ++v10;
        v12 = v11[v10];
      }
    }
  }
  return result;
}


//======================================================================
// sub_5D6550
// entry 005d6550  size 162  status ok
//======================================================================

void __thiscall sub_5D6550(_DWORD **this)
{
  int v1; // [esp+0h] [ebp-14h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 30; ++i )
  {
    if ( *(this + i + 235) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 235) + 112))(*(this + i + 235), v1);
      if ( *(this + i + 235) )
        v1 = (*(int (__thiscall **)(_DWORD, int))**(this + i + 235))(*(this + i + 235), 1);
      else
        v1 = 0;
      *(this + i + 235) = 0;
    }
  }
}


//======================================================================
// sub_5D6600
// entry 005d6600  size 162  status ok
//======================================================================

void __thiscall sub_5D6600(_DWORD **this)
{
  int v1; // [esp+0h] [ebp-14h]
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 30; ++i )
  {
    if ( *(this + i + 265) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 265) + 112))(*(this + i + 265), v1);
      if ( *(this + i + 265) )
        v1 = (*(int (__thiscall **)(_DWORD, int))**(this + i + 265))(*(this + i + 265), 1);
      else
        v1 = 0;
      *(this + i + 265) = 0;
    }
  }
}


//======================================================================
// sub_5D66B0
// entry 005d66b0  size 278  status ok
//======================================================================

int __thiscall sub_5D66B0(_DWORD *this)
{
  CMediaType *v1; // eax
  int IsFixedSize; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+4h] [ebp-24h]
  int v7; // [esp+8h] [ebp-20h]
  int v8; // [esp+Ch] [ebp-1Ch]
  void *v10; // [esp+14h] [ebp-14h]

  if ( !*(this + 295) )
  {
    v10 = operator new(0x18Cu);
    if ( v10 )
      v8 = sub_5D7580(v10);
    else
      v8 = 0;
    *(this + 295) = v8;
  }
  v1 = (CMediaType *)unknown_libname_732(*(this + 8));
  IsFixedSize = CMediaType::IsFixedSize(v1);
  sub_5EAE80(1250, 0, 0, IsFixedSize + 100, -1);
  result = (int)this;
  if ( *(this + 8) )
  {
    v7 = unknown_libname_732(*(this + 8));
    v6 = unknown_libname_732(*(this + 8));
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 76))(v6, v4);
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 295) + 68))(*(this + 295), v5);
  }
  return result;
}


//======================================================================
// sub_5D67D0
// entry 005d67d0  size 426  status ok
//======================================================================

int __thiscall sub_5D67D0(int this, int a2, char *Str, char *a4)
{
  unsigned __int8 v4; // al
  int result; // eax
  unsigned __int8 DisplayFormat; // al
  CMediaType *v7; // eax
  _DWORD *v8; // [esp+4h] [ebp-28h]
  _DWORD *v10; // [esp+14h] [ebp-18h]
  int v11; // [esp+1Ch] [ebp-10h]

  if ( *(_DWORD *)(this + 1180) && CMFCScanliner::channels(*(CMFCScanliner **)(this + 1180)) )
  {
    DisplayFormat = (unsigned __int8)CImageDisplay::GetDisplayFormat((CImageDisplay *)this);
    sub_62FDE0("Flipping plaque for player: %s [%d]\n", DisplayFormat + 4);
    if ( *(_DWORD *)(*(_DWORD *)(this + 32) + 32) )
    {
      v11 = CMediaType::IsFixedSize(*(CMediaType **)(*(_DWORD *)(this + 32) + 32)) - 1;
    }
    else
    {
      v7 = (CMediaType *)unknown_libname_732(*(_DWORD *)(this + 32));
      v11 = CMediaType::IsFixedSize(v7) + 100;
    }
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1180) + 108))(*(_DWORD *)(this + 1180), v11);
    sub_5D7680(Str, a4);
    v10 = operator new(0x20u);
    if ( v10 )
    {
      sub_6010A0(a2);
      *v10 = &CasinoShowNetPlaqueCycle::`vftable';
      v8 = v10;
    }
    else
    {
      v8 = 0;
    }
    sub_5F5D50(v8);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1180) + 116))(*(_DWORD *)(this + 1180));
  }
  else
  {
    v4 = (unsigned __int8)CImageDisplay::GetDisplayFormat((CImageDisplay *)this);
    result = sub_62FDE0("Not flipping plaque for player: %s [%d]\n", v4 + 4);
    if ( a2 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  }
  return result;
}


//======================================================================
// sub_5D6980
// entry 005d6980  size 206  status ok
//======================================================================

unsigned __int8 __thiscall sub_5D6980(CMFCScanliner **this, int a2)
{
  unsigned __int8 result; // al
  _DWORD *v3; // [esp+Ch] [ebp-14h]

  result = (unsigned __int8)this;
  if ( *(this + 295) && (result = CMFCScanliner::channels(*(this + 295))) == 0 )
  {
    v3 = operator new(0x20u);
    if ( v3 )
    {
      sub_6010A0(a2);
      *v3 = &CasinoHideNetPlaqueCycle::`vftable';
      return sub_5F5D50(v3);
    }
    else
    {
      return sub_5F5D50(0);
    }
  }
  else if ( a2 )
  {
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  }
  return result;
}


//======================================================================
// sub_5D6A50
// entry 005d6a50  size 91  status ok
//======================================================================

__int16 *__thiscall sub_5D6A50(_DWORD *this)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; word_75D658[8 * i] != -1; ++i )
  {
    if ( word_75D658[8 * i] == *(this + 2) )
      return &word_75D658[8 * i];
  }
  return 0;
}


//======================================================================
// sub_5D6AB0
// entry 005d6ab0  size 130  status ok
//======================================================================

int __thiscall sub_5D6AB0(_DWORD *this)
{
  __int16 *v3; // [esp+4h] [ebp-4h]

  v3 = sub_5D6A50(this);
  if ( !(unsigned __int8)sub_5DA7B0(dword_7947E4) )
    return v3[1];
  if ( (unsigned __int8)sub_5D6B40(this) )
    return v3[2];
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_7947E4 + 712))(dword_7947E4, *(this + 1)) )
    return v3[3];
  return v3[4];
}


//======================================================================
// sub_5D6B40
// entry 005d6b40  size 103  status ok
//======================================================================

bool __thiscall sub_5D6B40(_DWORD *this)
{
  return !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_7947E4 + 712))(dword_7947E4, *(this + 1))
      && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_7947E4 + 716))(dword_7947E4, *(this + 1));
}


//======================================================================
// sub_5D6BB0
// entry 005d6bb0  size 22  status ok
//======================================================================

double __thiscall sub_5D6BB0(_DWORD *this)
{
  return *((float *)sub_5D6A50(this) + 3);
}


//======================================================================
// sub_5D6BD0
// entry 005d6bd0  size 143  status ok
//======================================================================

int __thiscall sub_5D6BD0(CImageDisplay *this)
{
  char v3; // [esp+4h] [ebp-20h]
  char v4; // [esp+5h] [ebp-1Fh]
  char v6; // [esp+7h] [ebp-1Dh]
  int v7; // [esp+8h] [ebp-1Ch]
  int v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v7 = 5000;
  v8 = 10000;
  v9 = 50000;
  v10 = 100000;
  v11 = 1000000;
  v12 = 100000000;
  v13 = 1000000000;
  v6 = *(_BYTE *)(sub_5D52E0(this) + 42);
  if ( v6 == 7 )
    return 100000000;
  if ( !*(_BYTE *)(sub_5D52E0(this) + 42) )
    return 2500;
  v4 = *(_BYTE *)(sub_5D52E0(this) + 42);
  return *((_DWORD *)&v3 + v4);
}


//======================================================================
// sub_5D6C60
// entry 005d6c60  size 99  status ok
//======================================================================

bool __thiscall sub_5D6C60(CImageDisplay *this)
{
  char v2; // [esp+7h] [ebp-1Dh]
  _DWORD v3[6]; // [esp+Ch] [ebp-18h]

  v3[0] = 10000;
  v3[1] = 50000;
  v3[2] = 100000;
  v3[3] = 1000000;
  v3[4] = 100000000;
  v3[5] = 1000000000;
  v2 = *(_BYTE *)(sub_5D52E0(this) + 42);
  return sub_5D5A50() >= v3[v2];
}


//======================================================================
// sub_5D6CD0
// entry 005d6cd0  size 257  status ok
//======================================================================

bool __thiscall sub_5D6CD0(CImageDisplay *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  _BYTE v5[8]; // [esp+8h] [ebp-3Ch] BYREF
  __int64 v6; // [esp+10h] [ebp-34h]
  _DWORD v7[9]; // [esp+18h] [ebp-2Ch] BYREF
  __int64 v8; // [esp+3Ch] [ebp-8h] BYREF

  v6 = sub_64C8A0(0, 0);
  v8 = v6;
  v7[2] = 5000;
  v7[3] = 10000;
  v7[4] = 50000;
  v7[5] = 100000;
  v7[6] = 1000000;
  v7[7] = 100000000;
  v7[8] = 1000000000;
  if ( *(_BYTE *)(sub_5D52E0(this) + 41) || (unsigned __int8)sub_5DA7B0(dword_7947E4) )
    return 0;
  sub_5D5AC0(this, v7);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
         dword_162EE84,
         -1) )
  {
    (*(void (__thiscall **)(int, _DWORD, __int64 *))(*(_DWORD *)dword_7947E4 + 636))(
      dword_7947E4,
      *((_DWORD *)this + 1),
      &v8);
    v2 = (_DWORD *)sub_64C5C0(v5, v8, HIDWORD(v8));
    v3 = v2[1];
    v7[0] = *v2;
    v7[1] = v3;
  }
  return v7[0] < 1000;
}


//======================================================================
// sub_5D6DE0
// entry 005d6de0  size 132  status ok
//======================================================================

int __thiscall sub_5D6DE0(int this)
{
  int v1; // eax
  __int64 v4; // [esp+8h] [ebp-8h]

  if ( *(_BYTE *)(sub_5D52E0((CImageDisplay *)this) + 42) != 7 )
    *(_BYTE *)(sub_5D52E0((CImageDisplay *)this) + 41) = 1;
  *(_BYTE *)(this + 1201) = 1;
  v1 = sub_5D6BD0((CImageDisplay *)this);
  v4 = sub_64C8A0(v1, 0);
  sub_5D5CF0((CImageDisplay *)this, v4, SHIDWORD(v4));
  *(_BYTE *)(this + 1201) = 0;
  return sub_63B0A0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * *(_DWORD *)(this + 4)));
}


//======================================================================
// sub_5D6E70
// entry 005d6e70  size 101  status ok
//======================================================================

bool __thiscall sub_5D6E70(CImageDisplay *this)
{
  int v2; // esi

  if ( !*(_BYTE *)(sub_5D52E0(this) + 41) || !sub_5D6C60(this) || (unsigned __int8)sub_5DA7B0(dword_7947E4) )
    return 0;
  v2 = sub_5D5A50();
  return v2 >= sub_5D6BD0(this);
}


//======================================================================
// sub_5D6EE0
// entry 005d6ee0  size 171  status ok
//======================================================================

char __thiscall sub_5D6EE0(CImageDisplay *this, char a2)
{
  int v2; // eax
  int *v3; // eax
  __int64 v5; // [esp-8h] [ebp-28h]
  _BYTE v7[8]; // [esp+8h] [ebp-18h] BYREF
  __int64 v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+18h] [ebp-8h] BYREF

  if ( !a2 && (!*(_BYTE *)(sub_5D52E0(this) + 41) || !sub_5D6C60(this)) )
    return 0;
  *(_BYTE *)(sub_5D52E0(this) + 41) = 0;
  v2 = sub_5D6BD0(this);
  v8 = sub_64C8A0(v2, 0);
  v5 = v8;
  sub_5D5A90(this, &v9);
  v3 = (int *)sub_64C630(v7, v5, HIDWORD(v5));
  sub_5D5AF0((int)this, *v3, v3[1]);
  sub_63B0A0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * *((_DWORD *)this + 1)));
  return 1;
}


